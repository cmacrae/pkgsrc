$NetBSD$

--- libxfcegui4/xfce-titled-dialog.h.orig	2008-10-23 07:20:45.000000000 +0000
+++ libxfcegui4/xfce-titled-dialog.h
@@ -66,7 +66,7 @@ GtkWidget            *xfce_titled_dialog
                                                            const gchar      *first_button_text,
                                                            ...) G_GNUC_MALLOC;
 
-G_CONST_RETURN gchar *xfce_titled_dialog_get_subtitle     (XfceTitledDialog *titled_dialog);
+const gchar *xfce_titled_dialog_get_subtitle     (XfceTitledDialog *titled_dialog);
 void                  xfce_titled_dialog_set_subtitle     (XfceTitledDialog *titled_dialog,
                                                            const gchar      *subtitle);
 
