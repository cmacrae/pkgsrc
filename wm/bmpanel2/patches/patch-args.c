$NetBSD$

--- args.c.orig	2009-11-01 05:50:26.000000000 +0000
+++ args.c
@@ -5,6 +5,8 @@
 
 /* TODO: short parameters */
 
+typedef int uint;
+
 struct opts {
 	struct argument *args;
 	int argc;
