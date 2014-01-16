$NetBSD$

--- libxfcegui4/session-client.c.orig	2008-10-23 07:20:45.000000000 +0000
+++ libxfcegui4/session-client.c
@@ -1213,27 +1213,27 @@ gchar const* client_session_get_program(
     return session_client->program;
 }
 
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_clone_command(SessionClient * session_client)
+const gchar* const * client_session_get_clone_command(SessionClient * session_client)
 {
     return (const gchar * const *) session_client->clone_command;
 }
 
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_resign_command(SessionClient * session_client)
+const gchar* const * client_session_get_resign_command(SessionClient * session_client)
 {
     return (const gchar * const *) session_client->resign_command;
 }
 
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_restart_command(SessionClient * session_client)
+const gchar* const * client_session_get_restart_command(SessionClient * session_client)
 {
     return (const gchar * const *) session_client->restart_command;
 }
 
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_discard_command(SessionClient * session_client)
+const gchar* const * client_session_get_discard_command(SessionClient * session_client)
 {
     return (const gchar * const *) session_client->discard_command;
 }
 
-G_CONST_RETURN gchar* G_CONST_RETURN * client_session_get_shutdown_command(SessionClient * session_client)
+const gchar* const * client_session_get_shutdown_command(SessionClient * session_client)
 {
     return (const gchar * const *) session_client->shutdown_command;
 }
