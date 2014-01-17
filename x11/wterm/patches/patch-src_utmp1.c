$NetBSD$

--- src/utmp.c.orig	2000-03-05 11:21:34.000000000 +0000
+++ src/utmp.c
@@ -202,7 +202,7 @@ makeutent(const char *pty, const char *h
 /* set up the new entry */
     utmp.ut_type = USER_PROCESS;
 #ifndef linux
-    utmp.ut_exit.e_exit = 2;
+    //utmp.ut_exit.e_exit = 2;
 #endif
     STRNCPY(utmp.ut_user, (pwent && pwent->pw_name) ? pwent->pw_name : "?",
 	    sizeof(utmp.ut_user));
