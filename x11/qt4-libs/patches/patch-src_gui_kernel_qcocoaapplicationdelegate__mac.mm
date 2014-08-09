$NetBSD$

--- src/gui/kernel/qcocoaapplicationdelegate_mac.mm.orig	2014-04-10 18:37:12.000000000 +0000
+++ src/gui/kernel/qcocoaapplicationdelegate_mac.mm
@@ -122,7 +122,7 @@ static void cleanupCocoaApplicationDeleg
     [dockMenu release];
     [qtMenuLoader release];
     if (reflectionDelegate) {
-        [NSApp setDelegate:reflectionDelegate];
+        [[NSApplication sharedApplication] setDelegate:reflectionDelegate];
         [reflectionDelegate release];
     }
     [super dealloc];
