$NetBSD$

--- exo-support/xfce-heading.c.orig	2008-11-11 08:22:46.000000000 +0000
+++ exo-support/xfce-heading.c
@@ -609,7 +609,7 @@ xfce_heading_set_icon (XfceHeading *head
  *
  * Since: 4.4.0
  **/
-G_CONST_RETURN gchar*
+const gchar*
 xfce_heading_get_icon_name (XfceHeading *heading)
 {
   g_return_val_if_fail (XFCE_IS_HEADING (heading), NULL);
@@ -662,7 +662,7 @@ xfce_heading_set_icon_name (XfceHeading 
  *
  * Since: 4.4.0
  **/
-G_CONST_RETURN gchar*
+const gchar*
 xfce_heading_get_subtitle (XfceHeading *heading)
 {
   g_return_val_if_fail (XFCE_IS_HEADING (heading), NULL);
@@ -713,7 +713,7 @@ xfce_heading_set_subtitle (XfceHeading *
  *
  * Since: 4.4.0
  **/
-G_CONST_RETURN gchar*
+const gchar*
 xfce_heading_get_title (XfceHeading *heading)
 {
   g_return_val_if_fail (XFCE_IS_HEADING (heading), NULL);
