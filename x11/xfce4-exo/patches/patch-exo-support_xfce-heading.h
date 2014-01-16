$NetBSD$

--- exo-support/xfce-heading.h.orig	2008-11-11 08:22:46.000000000 +0000
+++ exo-support/xfce-heading.h
@@ -65,15 +65,15 @@ GdkPixbuf            *xfce_heading_get_i
 void                  xfce_heading_set_icon      (XfceHeading *heading,
                                                   GdkPixbuf   *icon);
 
-G_CONST_RETURN gchar *xfce_heading_get_icon_name (XfceHeading *heading);
+const gchar *xfce_heading_get_icon_name (XfceHeading *heading);
 void                  xfce_heading_set_icon_name (XfceHeading *heading,
                                                   const gchar *icon_name);
 
-G_CONST_RETURN gchar *xfce_heading_get_subtitle  (XfceHeading *heading);
+const gchar *xfce_heading_get_subtitle  (XfceHeading *heading);
 void                  xfce_heading_set_subtitle  (XfceHeading *heading,
                                                   const gchar *subtitle);
 
-G_CONST_RETURN gchar *xfce_heading_get_title     (XfceHeading *heading);
+const gchar *xfce_heading_get_title     (XfceHeading *heading);
 void                  xfce_heading_set_title     (XfceHeading *heading,
                                                   const gchar *title);
 
