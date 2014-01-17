$NetBSD$

--- daemon/slave.c.orig	2010-06-03 01:06:25.000000000 +0000
+++ daemon/slave.c
@@ -4435,8 +4435,9 @@ gdm_slave_write_utmp_wtmp_record (GdmDis
 
 			u->ut_type = DEAD_PROCESS;
 			u->ut_tv.tv_sec = record.ut_tv.tv_sec;
-			u->ut_exit.e_termination = 0;
-			u->ut_exit.e_exit = 0;
+                        // Darwin's utmpx doesn't have ut_exit
+			//u->ut_exit.e_termination = 0;
+			//u->ut_exit.e_exit = 0;
 
 			pututxline (u);
 
