$NetBSD$

--- thunar/thunar-metafile.c.orig	2008-10-22 06:43:14.000000000 +0000
+++ thunar/thunar-metafile.c
@@ -38,6 +38,7 @@
 #endif
 
+#include <sys/stat.h>
 #include <tdb/tdb.h>
 
 #include <thunar/thunar-metafile.h>
 #include <thunar/thunar-private.h>
