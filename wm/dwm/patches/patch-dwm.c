$NetBSD$

--- dwm.c.orig	2011-12-19 15:02:46.000000000 +0000
+++ dwm.c
@@ -33,6 +33,7 @@
 #include <X11/cursorfont.h>
 #include <X11/keysym.h>
 #include <X11/Xatom.h>
+#include <X11/XKblib.h>
 #include <X11/Xlib.h>
 #include <X11/Xproto.h>
 #include <X11/Xutil.h>
@@ -1084,7 +1085,7 @@ keypress(XEvent *e) {
 	XKeyEvent *ev;
 
 	ev = &e->xkey;
-	keysym = XKeycodeToKeysym(dpy, (KeyCode)ev->keycode, 0);
+	keysym = XkbKeycodeToKeysym(dpy, (KeyCode)ev->keycode, 0, 0);
 	for(i = 0; i < LENGTH(keys); i++)
 		if(keysym == keys[i].keysym
 		&& CLEANMASK(keys[i].mod) == CLEANMASK(ev->state)
