$NetBSD$

--- config.mk.orig	2013-12-23 23:09:34.000000000 +0000
+++ config.mk
@@ -28,7 +28,7 @@ CPPFLAGS += $(INCS) -D _XOPEN_SOURCE=600
 CPPFLAGS += -D HERBSTLUFT_GLOBAL_AUTOSTART=\"$(CONFIGDIR)/autostart\"
 LDFLAGS ?= -g
 DESTDIR =
-PREFIX = /usr/local
+PREFIX = /usr/pkg
 BINDIR = $(PREFIX)/bin
 DATADIR = $(PREFIX)/share
 MANDIR = $(DATADIR)/man
@@ -37,7 +37,7 @@ MAN7DIR = $(MANDIR)/man7
 DOCDIR = $(DATADIR)/doc/herbstluftwm
 EXAMPLESDIR = $(DOCDIR)/examples
 LICENSEDIR = $(DOCDIR)
-SYSCONFDIR = /etc
+SYSCONFDIR = ${PREFIX}/etc
 CONFIGDIR = $(SYSCONFDIR)/xdg/herbstluftwm
 XSESSIONSDIR = $(DATADIR)/xsessions
 ZSHCOMPLETIONDIR = $(DATADIR)/zsh/functions/Completion/X
