$NetBSD$

--- src/os_unix.c.orig	2013-04-22 08:09:33.000000000 +0000
+++ src/os_unix.c
@@ -8,6 +8,9 @@
  * Do ":help credits" in Vim to see a list of people who contributed.
  * See README.txt for an overview of the Vim source code.
  */
+#if defined(__APPLE__)
+#include <AvailabilityMacros.h>
+#endif
 
 /*
  * os_unix.c -- code for all flavors of Unix (BSD, SYSV, SVR4, POSIX, ...)
