$NetBSD$

--- avahi-core/socket.c.orig	2011-04-25 00:12:18.000000000 +0000
+++ avahi-core/socket.c
@@ -16,7 +16,7 @@
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
   USA.
 ***/
-
+#define __APPLE_USE_RFC_2292
 #ifdef HAVE_CONFIG_H
 #include <config.h>
 #endif
