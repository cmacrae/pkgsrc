$NetBSD$

--- exo/exo-string.c.orig	2008-11-11 08:22:46.000000000 +0000
+++ exo/exo-string.c
@@ -400,7 +400,7 @@ exo_strndupv (gchar **strv,
  *
  * Since: 0.3.1.1
  */
-G_CONST_RETURN gchar*
+const gchar*
 exo_intern_string (const gchar *string)
 {
 #if GLIB_CHECK_VERSION(2,9,0)
@@ -425,7 +425,7 @@ exo_intern_string (const gchar *string)
  *
  * Since: 0.3.1.1
  */
-G_CONST_RETURN gchar*
+const gchar*
 exo_intern_static_string (const gchar *string)
 {
 #if GLIB_CHECK_VERSION(2,9,0)
