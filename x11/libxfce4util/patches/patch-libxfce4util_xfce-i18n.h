$NetBSD$

--- libxfce4util/xfce-i18n.h.orig	2009-04-07 20:27:02.000000000 +0000
+++ libxfce4util/xfce-i18n.h
@@ -70,7 +70,7 @@ void                  xfce_textdomain   
                                                  const gchar *encoding);
 
 #if !defined(XFCE_DISABLE_DEPRECATED)
-G_CONST_RETURN gchar* xfce_strip_context        (const gchar *msgid,
+const gchar* xfce_strip_context        (const gchar *msgid,
                                                  const gchar *msgval);
 #endif
 
