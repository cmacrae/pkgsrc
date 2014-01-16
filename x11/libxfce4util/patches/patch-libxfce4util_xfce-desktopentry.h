$NetBSD$

--- libxfce4util/xfce-desktopentry.h.orig	2009-04-07 20:27:02.000000000 +0000
+++ libxfce4util/xfce-desktopentry.h
@@ -68,7 +68,7 @@ XfceDesktopEntry      *xfce_desktop_entr
                                                                  const gchar     **categories,
                                                                  gint              num_categories) G_GNUC_MALLOC;
 
-G_CONST_RETURN gchar  *xfce_desktop_entry_get_file              (XfceDesktopEntry *desktop_entry);
+const gchar  *xfce_desktop_entry_get_file              (XfceDesktopEntry *desktop_entry);
 
 gboolean               xfce_desktop_entry_get_int               (XfceDesktopEntry *desktop_entry,
                                                                  const gchar      *key,
