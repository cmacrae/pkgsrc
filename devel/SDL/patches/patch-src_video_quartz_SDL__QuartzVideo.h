$NetBSD$

--- src/video/quartz/SDL_QuartzVideo.h.orig	2012-01-19 06:30:06.000000000 +0000
+++ src/video/quartz/SDL_QuartzVideo.h
@@ -91,7 +91,6 @@ typedef struct SDL_PrivateVideoData {
     CGDirectDisplayID  display;            /* 0 == main display (only support single display) */
     const void         *mode;              /* current mode of the display */
     const void         *save_mode;         /* original mode of the display */
-    CGDirectPaletteRef palette;            /* palette of an 8-bit display */
     NSOpenGLContext    *gl_context;        /* OpenGL rendering context */
     NSGraphicsContext  *nsgfx_context;     /* Cocoa graphics context */
     Uint32             width, height, bpp; /* frequently used data about the display */
