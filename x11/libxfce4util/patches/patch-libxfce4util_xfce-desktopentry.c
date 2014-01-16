$NetBSD$

--- libxfce4util/xfce-desktopentry.c.orig	2009-04-07 20:27:02.000000000 +0000
+++ libxfce4util/xfce-desktopentry.c
@@ -472,7 +472,7 @@ xfce_desktop_entry_new_from_data (const 
  *               by the caller.
  * Since: 4.2
  **/
-G_CONST_RETURN gchar*
+const gchar*
 xfce_desktop_entry_get_file (XfceDesktopEntry *desktop_entry)
 {
     g_return_val_if_fail (XFCE_IS_DESKTOP_ENTRY (desktop_entry), NULL);
