$NetBSD$

--- exo-support/xfce-titled-dialog.c.orig	2008-11-11 08:22:46.000000000 +0000
+++ exo-support/xfce-titled-dialog.c
@@ -328,7 +328,7 @@ xfce_titled_dialog_new_with_buttons (con
  *
  * Since: 4.4.0
  **/
-G_CONST_RETURN gchar*
+const gchar*
 xfce_titled_dialog_get_subtitle (XfceTitledDialog *titled_dialog)
 {
   g_return_val_if_fail (XFCE_IS_TITLED_DIALOG (titled_dialog), NULL);
