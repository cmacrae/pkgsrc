$NetBSD$

--- pkgin.h.orig	2013-06-16 14:00:45.000000000 +0000
+++ pkgin.h
@@ -55,6 +55,7 @@
 #define PKG_INFO PKGTOOLS"/pkg_info"
 
 #define PKG_SUMMARY "pkg_summary"
+#define PKG_FILES "pkg_files"
 #define PKGIN_SQL_LOG PKGIN_DB"/sql.log"
 #define PKG_INSTALL_ERR_LOG PKGIN_DB"/pkg_install-err.log"
 #define PKGIN_CACHE PKGIN_DB"/cache"
@@ -114,6 +115,7 @@
 #define PKG_SHCAT_CMD 24
 #define PKG_SHPCAT_CMD 25
 #define PKG_SHALLCAT_CMD 26
+#define PKG_SRCHF_CMD 27
 #define PKG_GINTO_CMD 255
 
 #define PKG_EQUAL '='
@@ -237,6 +239,7 @@ Plistnumbered	*rec_pkglist(const char *,
 int		pkg_is_installed(Plisthead *, Pkglist *);
 void		list_pkgs(const char *, int);
 int		search_pkg(const char *);
+int		search_pkg_file(const char *);
 void		show_category(char *);
 void		show_pkg_category(char *);
 void		show_all_categories(void);
