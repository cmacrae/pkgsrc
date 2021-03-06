$NetBSD: patch-src_corelib_io_io.pri,v 1.2 2012/12/07 10:06:13 adam Exp $

Use kqueue instead of fam to monitor the file system

--- src/corelib/io/io.pri.orig	2014-04-10 18:37:11.000000000 +0000
+++ src/corelib/io/io.pri
@@ -107,7 +107,7 @@ win32 {
         }
 
         !nacl {
-            freebsd-*|macx-*|darwin-*|openbsd-*:{
+            freebsd-*|macx-*|darwin-*|openbsd-*|netbsd-*:{
                 SOURCES += io/qfilesystemwatcher_kqueue.cpp
                 HEADERS += io/qfilesystemwatcher_kqueue_p.h
             }
