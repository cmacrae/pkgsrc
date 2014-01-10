# $NetBSD$

PKGNAME=	2bwm-0.1
CATEGORIES=	wm
#MASTER_SITES=	http://saveosx.org/packages/Darwin/2013Q2/x86_64/distfiles/
GHCOMMIT=	785839eda32de28548165e6f8afb3c0a96655c2b
DISTNAME=	${GHCOMMIT}
MASTER_SITES=	https://github.com/venam/2bwm/archive/
FETCH_USING=	curl

WRKSRC=		${WRKDIR}/2bwm-${GHCOMMIT}

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://saveosx.org/packages/Darwin/2013Q2/x86_64/distfiles/
COMMENT=	A fast floating WM written over the XCB library and derived from mcwm.
LICENSE=	unixhub

.include "../../x11/libxcb/buildlink3.mk"
.include "../../x11/xcb-util-wm/buildlink3.mk"
.include "../../x11/xcb-util-keysyms/buildlink3.mk"
.include "../../x11/xcb-util/buildlink3.mk"
# url2pkg-marker (please do not remove this line.)
.include "../../mk/bsd.pkg.mk"
