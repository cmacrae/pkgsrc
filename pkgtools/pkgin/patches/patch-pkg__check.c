$NetBSD$

--- pkg_check.c.orig	2013-10-06 08:52:58.000000000 +0000
+++ pkg_check.c
@@ -66,7 +66,11 @@ pkg_met_reqs(Plisthead *impacthead)
 			/* for performance sake, first check basesys */
 			if ((strncmp(requires->full, LOCALBASE,
 				    strlen(LOCALBASE) - 1)) != 0) {
-				if (stat(requires->full, &sb) < 0) {
+				if (stat(requires->full, &sb) < 0
+#ifdef __APPLE__
+                                    && (*requires->full != '@') /*avoid if using dyld install name options*/
+#endif
+                                   ) {
 					printf(MSG_REQT_NOT_PRESENT,
 						requires->full, pimpact->full);
 
