# $NetBSD$

DISTNAME=	bspwm-0.8.7
CATEGORIES=	wm
MASTER_SITES=	http://saveosx.org/packages/Darwin/2013Q2/x86_64/distfiles/

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://saveosx.org/packages/Darwin/2013Q2/x86_64/distfiles/
COMMENT= 	Binary space partitioning window manager	
LICENSE=	2-clause-bsd

USE_TOOLS+=	gmake

.include "../../x11/libxcb/buildlink3.mk"
.include "../../x11/xcb-util/buildlink3.mk"
.include "../../x11/xcb-util-wm/buildlink3.mk"
# url2pkg-marker (please do not remove this line.)
.include "../../mk/bsd.pkg.mk"
