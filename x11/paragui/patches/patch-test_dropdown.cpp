$NetBSD$

--- test/dropdown.cpp.orig	2002-04-15 13:31:31.000000000 +0000
+++ test/dropdown.cpp
@@ -7,7 +7,7 @@ Submitted by: Andrew Ford <andrewhford@y
 #include "pgdropdown.h"
 #include "pgapplication.h"
 
-int main()
+int main(int argc, char * argv[])
 {
    PG_Application app;
    app.LoadTheme( "default" );
