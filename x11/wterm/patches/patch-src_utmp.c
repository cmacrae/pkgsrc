$NetBSD$

--- src/utmp.c.orig	2000-03-05 11:21:34.000000000 +0000
+++ src/utmp.c
@@ -150,7 +150,7 @@ makeutent(const char *pty, const char *h
     STRNCPY(utmp.ut_name, (pwent && pwent->pw_name) ? pwent->pw_name : "?",
 	    sizeof(utmp.ut_name));
     STRNCPY(utmp.ut_host, hostname, sizeof(utmp.ut_host));
-    utmp.ut_time = time(NULL);
+    //utmp.ut_time = time(NULL);
 
     if ((fd0 = fopen(UTMP_FILENAME, "r+")) == NULL)
 	ut_id[0] = '\0';	/* entry not made */
@@ -224,17 +224,17 @@ makeutent(const char *pty, const char *h
     utmp.ut_pid = getpid();
 
 #ifdef HAVE_UTMPX_H
-    utmp.ut_session = getsid(0);
+    //utmp.ut_session = getsid(0);
     utmp.ut_tv.tv_sec = time(NULL);
     utmp.ut_tv.tv_usec = 0;
 #else
-    utmp.ut_time = time(NULL);
+    //utmp.ut_time = time(NULL);
 #endif				/* HAVE_UTMPX_H */
 
     pututline(&utmp);
 
 #ifdef WTMP_SUPPORT
-    update_wtmp(WTMP_FILENAME, &utmp);
+    //update_wtmp(WTMP_FILENAME, &utmp);
 #endif
 
     endutent();			/* close the file */
@@ -284,16 +284,16 @@ cleanutent(void)
     putmp->ut_type = DEAD_PROCESS;
 
 #ifdef HAVE_UTMPX_H
-    putmp->ut_session = getsid(0);
+    //putmp->ut_session = getsid(0);
     putmp->ut_tv.tv_sec = time(NULL);
     putmp->ut_tv.tv_usec = 0;
 #else				/* HAVE_UTMPX_H */
-    putmp->ut_time = time(NULL);
+    //putmp->ut_time = time(NULL);
 #endif				/* HAVE_UTMPX_H */
     pututline(putmp);
 
 #ifdef WTMP_SUPPORT
-    update_wtmp(WTMP_FILENAME, putmp);
+    //update_wtmp(WTMP_FILENAME, putmp);
 #endif
 
     endutent();
