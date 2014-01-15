# $NetBSD$

PKGNAME=	monsterwm-xcb-0.1
CATEGORIES=	wm
GHCOMMIT=	20297d4dd51ab8c345807334e950d530e351cc6b
DISTNAME=	${GHCOMMIT}
MASTER_SITES=	https://github.com/Cloudef/monsterwm-xcb/archive/
FETCH_USING=	curl

WRKSRC=		${WRKDIR}/monsterwm-xcb-${GHCOMMIT}

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	https://github.com/Cloudef/monsterwm-xcb
COMMENT=	This is xcb port of monsterwm tiling window manager.
LICENSE=	mit

USE_TOOLS=	gmake pkgconfig
SUBST_CLASSES+=		makefile
SUBST_STAGE.makefile=	pre-build
SUBST_MESSAGE.makefile=	Fixing Makefile
SUBST_FILES.makefile=	Makefile
SUBST_SED.makefile=	-e 's,/usr/local,${PREFIX},g'


.include "../../x11/libxcb/buildlink3.mk"
.include "../../x11/xcb-util-wm/buildlink3.mk"
.include "../../x11/xcb-util-keysyms/buildlink3.mk"
.include "../../x11/xcb-util/buildlink3.mk"
# url2pkg-marker (please do not remove this line.)
.include "../../mk/bsd.pkg.mk"
