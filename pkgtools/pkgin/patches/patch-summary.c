$NetBSD$

--- summary.c.orig	2013-06-16 14:00:45.000000000 +0000
+++ summary.c
@@ -80,6 +80,7 @@ typedef struct Insertlist {
 SLIST_HEAD(, Insertlist) inserthead;
 
 static char		**fetch_summary(char *url);
+static void		fetch_files(char *url);
 static void		freecols(void);
 static void		free_insertlist(void);
 static void		prepare_insert(int, struct Summary, char *);
@@ -149,6 +150,56 @@ fetch_summary(char *cur_repo)
 }
 
 /**
+ * remote files fetch
+ */
+static void
+fetch_files(char *cur_repo)
+{
+	/* from pkg_install/files/admin/audit.c */
+	FILE		*fp = NULL;
+	struct stat	st;
+	Dlfile		*file = NULL;
+	char		*decompressed_input;
+	size_t		decompressed_len;
+	time_t		files_mtime;
+	int		i;
+	char		**out, buf[BUFSIZ], buf_fs[BUFSIZ];
+
+	for (i = 0; sumexts[i] != NULL; i++) { /* try all extensions */
+		snprintf(buf, BUFSIZ, "%s/%s.%s", cur_repo, PKG_FILES, sumexts[i]);
+		snprintf(buf_fs, BUFSIZ, "%s/%s.%s", pkgin_cache, PKG_FILES, sumexts[i]);
+
+		if (!force_fetch && !force_update)
+			if (stat(buf_fs, &st) == 0)
+				files_mtime = st.st_mtime;
+		else
+			files_mtime = 0; /* 0 files_mtime == force reload */
+
+
+		if ((file = download_file(buf, &files_mtime)) != NULL)
+			break; /* pkg_files found and not up-to-date */
+
+		if (files_mtime < 0) /* pkg_files found, but up-to-date */
+			return;
+	}
+
+	if (file == NULL)
+		errx(EXIT_FAILURE, MSG_COULDNT_FETCH, buf);
+
+	snprintf(buf, BUFSIZ, "%s/%s.%s", cur_repo, PKG_FILES, sumexts[i]);
+
+	umask(DEF_UMASK);
+	if ((fp = fopen(buf_fs, "w")) == NULL)
+		err(EXIT_FAILURE, MSG_ERR_OPEN, buf_fs);
+
+	fwrite(file->buf, file->size, 1, fp);
+	fclose(fp);
+
+	XFREE(file->buf);
+	XFREE(file);
+}
+
+/**
  * progress percentage
  */
 static void
@@ -647,6 +698,7 @@ update_remotedb(void)
 
 	/* loop through PKG_REPOS */
 	for (prepos = pkg_repos; *prepos != NULL; prepos++) {
+		fetch_files(*prepos);
 
 		/* load remote pkg_summary */
 		if ((summary = fetch_summary(*prepos)) == NULL) {
