$NetBSD$

--- test/writefile.cpp.orig	2003-01-04 21:13:41.000000000 +0000
+++ test/writefile.cpp
@@ -7,7 +7,7 @@ Roger D. Vargas
 #include <pglog.h>
 #include <string>
 
-int main() {
+int main(int argc, char * argv[]) {
 	PG_FileArchive *Arc;
 	PG_File *wf;
 
