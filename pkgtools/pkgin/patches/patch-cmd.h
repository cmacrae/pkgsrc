$NetBSD$

--- cmd.h.orig	2013-06-16 14:00:45.000000000 +0000
+++ cmd.h
@@ -72,6 +72,8 @@ static struct command {
 	  PKG_SHNOKP_CMD },
 	{ "search", "se", "Search for a package.",
 	  PKG_SRCH_CMD },
+	{ "search-file", "sef", "Search for a package containing a file.",
+	  PKG_SRCHF_CMD },
 	{ "clean", "cl", "Clean packages cache.",
 	  PKG_CLEAN_CMD },
 	{ "autoremove", "ar", "Autoremove orphan dependencies.",
