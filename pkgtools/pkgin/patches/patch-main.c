$NetBSD: patch-main.c,v 1.2 2013/10/06 08:28:47 wiz Exp $

--- main.c.orig	2013-06-16 14:00:45.000000000 +0000
+++ main.c
@@ -50,7 +50,7 @@ main(int argc, char *argv[])
 {
 	uint8_t		updb_all;
 	uint8_t		do_inst = DO_INST; /* by default, do install packages */
-	int 		ch, rc = EXIT_SUCCESS;
+	int 		ch, i, rc = EXIT_SUCCESS;
 	struct stat	sb;
 	const char	*chrootpath = NULL;
 
@@ -236,6 +236,10 @@ main(int argc, char *argv[])
 		missing_param(argc, 2, MSG_MISSING_SRCH);
 		rc = search_pkg(argv[1]);
 		break;
+	case PKG_SRCHF_CMD: /* search for package containing a file */
+		missing_param(argc, 2, MSG_MISSING_SRCH);
+		rc = search_pkg_file(argv[1]);
+		break;
 	case PKG_CLEAN_CMD: /* clean pkgin's packages cache */
 		clean_cache();
 		break;
@@ -244,7 +248,8 @@ main(int argc, char *argv[])
 		break;
 	case PKG_IMPORT_CMD: /* import for keep packages and install them */
 		missing_param(argc, 2, MSG_MISSING_FILENAME);
-		import_keep(do_inst, argv[1]);
+		for (i=1; i<argc; i++)
+			import_keep(do_inst, argv[i]);
 		break;
 	case PKG_SHPROV_CMD: /* show what a package provides */
 		missing_param(argc, 2, MSG_MISSING_PKGNAME);
@@ -301,10 +306,9 @@ main(int argc, char *argv[])
 static void
 missing_param(int argc, int nargs, const char *msg)
 {
-	const char *foo = msg;
 
 	if (argc < nargs)
-		errx(EXIT_FAILURE, foo);
+		errx(EXIT_FAILURE, "%s", msg);
 }
 
 /* find command index */
