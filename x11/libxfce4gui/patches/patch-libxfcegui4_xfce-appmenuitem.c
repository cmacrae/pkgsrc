$NetBSD$

--- libxfcegui4/xfce-appmenuitem.c.orig	2008-10-23 07:20:45.000000000 +0000
+++ libxfcegui4/xfce-appmenuitem.c
@@ -775,7 +775,7 @@ xfce_app_menu_item_set_startup_notificat
  *
  * Since 4.1
  **/
-G_CONST_RETURN gchar *
+const gchar *
 xfce_app_menu_item_get_name(XfceAppMenuItem *app_menu_item)
 {
     g_return_val_if_fail(XFCE_IS_APP_MENU_ITEM(app_menu_item), NULL);
@@ -792,7 +792,7 @@ xfce_app_menu_item_get_name(XfceAppMenuI
  *
  * Since 4.1
  **/
-G_CONST_RETURN gchar *
+const gchar *
 xfce_app_menu_item_get_icon_name(XfceAppMenuItem *app_menu_item)
 {
     g_return_val_if_fail(XFCE_IS_APP_MENU_ITEM(app_menu_item), NULL);
@@ -809,7 +809,7 @@ xfce_app_menu_item_get_icon_name(XfceApp
  *
  * Since 4.1
  **/
-G_CONST_RETURN gchar *
+const gchar *
 xfce_app_menu_item_get_command(XfceAppMenuItem *app_menu_item)
 {
     g_return_val_if_fail(XFCE_IS_APP_MENU_ITEM(app_menu_item), NULL);
