$NetBSD: patch-src_3rdparty_webkit_Source_WebCore_platform_qt_PlatformKeyboardEventQt.cpp,v 1.1 2012/11/19 10:52:23 ryoon Exp $

--- src/3rdparty/webkit/Source/WebCore/platform/qt/PlatformKeyboardEventQt.cpp.orig	2014-04-10 18:37:11.000000000 +0000
+++ src/3rdparty/webkit/Source/WebCore/platform/qt/PlatformKeyboardEventQt.cpp
@@ -133,7 +133,7 @@ String keyIdentifierForQtKeyCode(int key
     case Qt::Key_Backtab:
         return "U+0009";
     default:
-        return String::format("U+%04X", toupper(keyCode));
+        return String::format("U+%04X", toupper((unsigned char)keyCode));
     }
 }
 
