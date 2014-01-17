$NetBSD$

--- test/layouttest.cpp.orig	2003-04-06 12:13:07.000000000 +0000
+++ test/layouttest.cpp
@@ -2,7 +2,7 @@
 #include "pgapplication.h"
 #include "pgwindow.h"
 
-int main() {
+int main(int argc, char * argv[]) {
 
 	// construct the application object
 	PG_Application app;
