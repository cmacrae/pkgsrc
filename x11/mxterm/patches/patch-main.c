$NetBSD$

--- main.c.orig	2005-05-09 01:14:32.000000000 +0000
+++ main.c
@@ -3284,13 +3284,13 @@ spawn (void)
 #endif
 		ioctl(0, TIOCSPGRP, (char *)&pgrp);
 #ifndef __osf__
-		setpgrp(0,0);
+		setpgid(0,0);
 #else
 		setpgid(0,0);
 #endif
 		close(open(ttydev, O_WRONLY, 0));
 #ifndef __osf__
-		setpgrp (0, pgrp);
+		setpgid (0, pgrp);
 #else
 		setpgid (0, pgrp);
 #endif
