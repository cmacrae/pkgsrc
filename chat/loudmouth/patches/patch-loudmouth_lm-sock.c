$NetBSD$

--- loudmouth/lm-sock.c.orig	2008-10-29 13:45:10.000000000 +0000
+++ loudmouth/lm-sock.c
@@ -313,6 +313,11 @@ _lm_sock_addrinfo_get_error_str (int err
 gboolean
 _lm_sock_set_keepalive (LmSocketT sock, int delay)
 {
+#ifdef __APPLE__
+#ifndef TCP_KEEPIDLE
+#define TCP_KEEPIDLE TCP_KEEPALIVE
+#endif
+#endif
 	int opt;
 
 	opt = 1;
