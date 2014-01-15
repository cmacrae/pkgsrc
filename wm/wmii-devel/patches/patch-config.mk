$NetBSD$

--- config.mk.orig	2010-06-10 07:24:04.000000000 +0000
+++ config.mk
@@ -20,7 +20,7 @@ include $(ROOT)/mk/gcc.mk
 CFLAGS += -Os # $(DEBUGCFLAGS) -O0
 LDFLAGS += # -g $(LIBS)
 SOLDFLAGS += $(LDFLAGS)
-SHARED = -shared -Wl,-soname=$(SONAME)
+SHARED = -shared 
 STATIC = -static
 
 # Compiler, Linker. Linker should usually *not* be ld.
