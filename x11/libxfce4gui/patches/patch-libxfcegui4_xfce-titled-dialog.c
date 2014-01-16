$NetBSD$

--- libxfcegui4/xfce-titled-dialog.c.orig	2008-10-23 07:20:45.000000000 +0000
+++ libxfcegui4/xfce-titled-dialog.c
@@ -328,7 +328,7 @@ xfce_titled_dialog_new_with_buttons (con
  *
  * Since: 4.4.0
  **/
-G_CONST_RETURN gchar*
+const gchar*
 xfce_titled_dialog_get_subtitle (XfceTitledDialog *titled_dialog)
 {
   g_return_val_if_fail (XFCE_IS_TITLED_DIALOG (titled_dialog), NULL);
