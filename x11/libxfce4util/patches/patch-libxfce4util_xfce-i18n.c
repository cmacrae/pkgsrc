$NetBSD$

--- libxfce4util/xfce-i18n.c.orig	2009-04-07 20:27:02.000000000 +0000
+++ libxfce4util/xfce-i18n.c
@@ -179,7 +179,7 @@ xfce_textdomain (const gchar *package,
  *
  * Deprecated:4.4: Use g_strip_context() instead.
  **/
-G_CONST_RETURN gchar*
+const gchar*
 xfce_strip_context (const gchar *msgid,
                     const gchar *msgval)
 {
