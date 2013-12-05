# $NetBSD$

.include "../../x11/qt4-libs/Makefile.common"

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://saveosx.org/packages/Darwin/2013Q2/x86_64/distfiles/
COMMENT=	C++ X GUI toolkit
LICENSE=	gnu-lgpl-v2

GNU_CONFIGURE=	yes
USE_TOOLS+=	pkg-config perl gmake
USE_LANGUAGES=	c c++

USE_GNU_CONFIGURE_HOST=n
CONFIGURE_HAS_MANDIR=n
CONFIGURE_ARGS+=-system-zlib 
CONFIGURE_ARGS+=-confirm-license 
CONFIGURE_ARGS+=-openssl-linked
CONFIGURE_ARGS+=-opensource 
CONFIGURE_ARGS+=-nomake demos 
CONFIGURE_ARGS+=-nomake examples 
CONFIGURE_ARGS+=-fast 
CONFIGURE_ARGS+=-release 
CONFIGURE_ARGS+=-no-3dnow 
CONFIGURE_ARGS+=-no-ssse3
PKGCONFIG_OVERRIDE+=	src/3rdparty/libgq/gconf/gq-gconf.pc.in
PKGCONFIG_OVERRIDE+=	src/3rdparty/webkit/Source/WebKit2/gtk/webkit2.pc.in
PKGCONFIG_OVERRIDE+=	src/3rdparty/zlib/zlib.pc.in



.include "../../mk/bsd.pkg.mk"
