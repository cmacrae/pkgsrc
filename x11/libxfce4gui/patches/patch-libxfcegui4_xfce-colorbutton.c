$NetBSD$

--- libxfcegui4/xfce-colorbutton.c.orig	2008-10-23 07:20:45.000000000 +0000
+++ libxfcegui4/xfce-colorbutton.c
@@ -107,7 +107,7 @@ xfce_color_button_set_title (GtkColorBut
 
 
 
-G_CONST_RETURN gchar *
+const gchar *
 xfce_color_button_get_title (GtkColorButton *color_button)
 {
   return gtk_color_button_get_title (color_button);
