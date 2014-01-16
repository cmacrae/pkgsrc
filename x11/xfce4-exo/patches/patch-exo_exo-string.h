$NetBSD$

--- exo/exo-string.h.orig	2008-11-11 08:22:46.000000000 +0000
+++ exo/exo-string.h
@@ -46,8 +46,8 @@ gchar                *exo_strdup_strftim
 gchar               **exo_strndupv               (gchar          **strv,
                                                   gint             num) G_GNUC_MALLOC G_GNUC_WARN_UNUSED_RESULT;
 
-G_CONST_RETURN gchar *exo_intern_string          (const gchar     *string);
-G_CONST_RETURN gchar *exo_intern_static_string   (const gchar     *string);
+const gchar *exo_intern_string          (const gchar     *string);
+const gchar *exo_intern_static_string   (const gchar     *string);
 
 #if GLIB_CHECK_VERSION(2,9,0)
 #define I_(string) (g_intern_static_string ((string)))
