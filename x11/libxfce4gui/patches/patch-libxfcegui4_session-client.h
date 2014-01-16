$NetBSD$

--- libxfcegui4/session-client.h.orig	2008-10-23 07:20:45.000000000 +0000
+++ libxfcegui4/session-client.h
@@ -157,9 +157,9 @@ gchar const* client_session_get_client_i
 gchar const* client_session_get_given_client_id(SessionClient * session_client);
 gchar const* client_session_get_current_directory(SessionClient * session_client);
 gchar const* client_session_get_program(SessionClient * session_client);
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_clone_command(SessionClient * session_client);
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_resign_command(SessionClient * session_client);
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_restart_command(SessionClient * session_client);
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_discard_command(SessionClient * session_client);
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_shutdown_command(SessionClient * session_client);
+const gchar* const * client_session_get_clone_command(SessionClient * session_client);
+const gchar* const * client_session_get_resign_command(SessionClient * session_client);
+const gchar* const * client_session_get_restart_command(SessionClient * session_client);
+const gchar* const * client_session_get_discard_command(SessionClient * session_client);
+const gchar* const * client_session_get_shutdown_command(SessionClient * session_client);
 #endif
