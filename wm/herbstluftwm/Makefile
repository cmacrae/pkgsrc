# $NetBSD$

DISTNAME=	herbstluftwm-0.5.3
CATEGORIES=	wm
MASTER_SITES=	http://herbstluftwm.org/tarballs/

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://herbstluftwm.org
COMMENT=	herbstluftwm is a manual tiling window manager for X11 using Xlib and Glib.
LICENSE=	modified-bsd

USE_TOOLS+=	gmake
BUILD_MAKE_FLAGS+=	PREFIX=${DESTDIR}

.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXinerama/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
