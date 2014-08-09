$NetBSD$

--- src/pulsecore/thread.h.orig	2011-09-26 15:51:42.000000000 +0000
+++ src/pulsecore/thread.h
@@ -98,7 +98,7 @@ void *pa_tls_set(pa_tls *t, void *userda
 /* An optimized version of the above that requires no dynamic
  * allocation if the compiler supports __thread */
 #define PA_STATIC_TLS_DECLARE_NO_FREE(name)                             \
-    static __thread void *name##_tls = NULL;                            \
+    static void *name##_tls = NULL;                                     \
     static inline void* name##_tls_get(void) {                          \
         return name##_tls;                                              \
     }                                                                   \
