$NetBSD$

--- libxfcegui4/xfce-colorbutton.h.orig	2008-10-23 07:20:45.000000000 +0000
+++ libxfcegui4/xfce-colorbutton.h
@@ -55,7 +55,7 @@ void       xfce_color_button_set_use_alp
 gboolean   xfce_color_button_get_use_alpha (XfceColorButton *color_button);
 void       xfce_color_button_set_title     (XfceColorButton *color_button,
                                             const gchar *title);
-G_CONST_RETURN gchar *xfce_color_button_get_title
+const gchar *xfce_color_button_get_title
                                            (XfceColorButton *color_button);
 
 #endif  /* ifndef XFCE_DISABLE_DEPRECATED */
