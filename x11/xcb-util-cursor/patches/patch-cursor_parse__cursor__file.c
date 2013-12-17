$NetBSD$

--- cursor/parse_cursor_file.c.orig	2013-11-09 10:15:12.000000000 +0000
+++ cursor/parse_cursor_file.c
@@ -49,6 +49,8 @@
 #  define le32toh(x) LE_32(x)
 # endif
 #endif
+#define le32toh(x)      ((uint32_t)(x))
+
 
 #include <xcb/xcb.h>
 
