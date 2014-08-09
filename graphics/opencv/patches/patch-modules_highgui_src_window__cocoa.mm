$NetBSD$

--- modules/highgui/src/window_cocoa.mm.orig	2013-07-10 11:49:00.000000000 +0000
+++ modules/highgui/src/window_cocoa.mm
@@ -151,7 +151,7 @@ CV_IMPL int cvInitSystem( int , char** )
 #define NSAppKitVersionNumber10_5 949
 #endif
     if( floor(NSAppKitVersionNumber) > NSAppKitVersionNumber10_5 )
-        [application setActivationPolicy:0/*NSApplicationActivationPolicyRegular*/];
+        [application setActivationPolicy:NSApplicationActivationPolicyRegular];
 #endif
     //[application finishLaunching];
     //atexit(icvCocoaCleanup);
