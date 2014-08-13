$NetBSD$

--- pkglist.c.orig	2013-06-16 14:00:45.000000000 +0000
+++ pkglist.c
@@ -30,8 +30,9 @@
  *
  */
 
-#include "pkgin.h"
 #include <regex.h>
+#include <zlib.h>
+#include "pkgin.h"
 
 Plisthead	r_plisthead, l_plisthead;
 int		r_plistcounter, l_plistcounter;
@@ -348,6 +349,103 @@ search_pkg(const char *pattern)
 	return EXIT_SUCCESS;
 }
 
+int
+read_pkg_files(gzFile* files, char *buf, int buf_size)
+{
+	int err;                    
+	int bytes_read;
+
+	if ((bytes_read = gzread(files, buf, buf_size)) < buf_size) {
+		if (gzeof(files)) {
+			bytes_read = 0;
+		} else {
+			const char *error_string;
+			error_string = gzerror(files, &err);
+
+			if (err) {
+				fprintf(stderr, "Error: %s.\n", error_string);
+				exit(EXIT_FAILURE);
+			}
+		}
+	}
+
+	return bytes_read;
+}
+
+void
+search_pkg_file_lines(regex_t *re, char *buf, int buf_size)
+{
+	int	i, sz;
+	char	*sep = ": ";
+	char	*line, *pfile;
+
+	line = buf;
+	sz = 0;
+
+	for (i = 0; i < buf_size; i++) {
+		if (buf[i] != '\n') {
+			sz++;
+			continue;
+		}
+
+		buf[i] = '\0';
+
+		if ((pfile = strnstr(line, sep, sz)) == NULL) {
+			/* failure here is not expected */
+			return;
+		}
+
+		pfile += 2;
+
+		if (regexec(re, pfile, 0, NULL, 0) == 0) {
+			printf("%s\n", line);
+		}
+
+		line = &buf[i + 1];
+	}
+}
+
+#define FBUFSIZ (BUFSIZ * 128)
+
+int
+search_pkg_file(const char *pattern)
+{
+	regex_t		re;
+	int		rc, bytes_read, wanted;
+	char		eb[64], buf[BUFSIZ], bytes[FBUFSIZ + 1];
+	char		*start, *end;
+	gzFile		*files;
+
+	if ((rc = regcomp(&re, pattern,
+		REG_EXTENDED|REG_NOSUB)) != 0) {
+		regerror(rc, &re, eb, sizeof(eb));
+		errx(1, "regcomp: %s: %s", pattern, eb);
+	}
+
+	snprintf(buf, BUFSIZ, "%s/%s.%s", pkgin_cache, PKG_FILES, "gz");
+
+	if ((files = gzopen(buf, "r")) == NULL) {
+		fprintf (stderr, "gzopen of '%s' failed: %s.\n", buf,
+			strerror(errno));
+		exit(EXIT_FAILURE);
+	}
+
+	wanted = FBUFSIZ;
+	start = bytes;
+
+	while ((bytes_read = read_pkg_files(files, bytes, wanted)) != 0) {
+		bytes[bytes_read] = '\0';
+
+		if ((end = strrchr(bytes, '\n')) != NULL) {
+			search_pkg_file_lines(&re, bytes, end - start + 1);
+		}	
+	}
+
+	gzclose(files);
+
+	return EXIT_SUCCESS;
+}
+
 void
 show_category(char *category)
 {
