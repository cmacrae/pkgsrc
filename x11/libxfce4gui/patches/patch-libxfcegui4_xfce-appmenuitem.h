$NetBSD$

--- libxfcegui4/xfce-appmenuitem.h.orig	2008-10-23 07:20:45.000000000 +0000
+++ libxfcegui4/xfce-appmenuitem.h
@@ -89,11 +89,11 @@ void xfce_app_menu_item_set_startup_noti
 													   
 #define xfce_app_menu_item_set_image(mi, img) gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(mi), img)
 
-G_CONST_RETURN gchar *xfce_app_menu_item_get_name     (XfceAppMenuItem *app_menu_item);
+const gchar *xfce_app_menu_item_get_name     (XfceAppMenuItem *app_menu_item);
 
-G_CONST_RETURN gchar *xfce_app_menu_item_get_icon_name(XfceAppMenuItem *app_menu_item);
+const gchar *xfce_app_menu_item_get_icon_name(XfceAppMenuItem *app_menu_item);
 
-G_CONST_RETURN gchar *xfce_app_menu_item_get_command  (XfceAppMenuItem *app_menu_item);
+const gchar *xfce_app_menu_item_get_command  (XfceAppMenuItem *app_menu_item);
 
 gboolean xfce_app_menu_item_get_needs_term            (XfceAppMenuItem *app_menu_item);
 
