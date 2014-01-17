$NetBSD$

--- server/access.c.orig	1997-08-23 18:21:35.000000000 +0000
+++ server/access.c
@@ -29,7 +29,7 @@
 ************************************************************************/
 #include <stdio.h>
 #include <sys/param.h>
-#include <malloc.h>
+#include <malloc/malloc.h>
 #ifdef SVR4
 #include <sys/utsname.h>
 #include <string.h>
