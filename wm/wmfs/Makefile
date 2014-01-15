# $NetBSD$

PKGNAME=	wmfs-2.0
CATEGORIES=	wm
GHCOMMIT=	3c701a9b349980034ffdbbc3e46664c5e24b37e4
DISTNAME=	${GHCOMMIT}
MASTER_SITES=	https://github.com/xorg62/wmfs/archive/
FETCH_USING=	curl

WRKSRC=		${WRKDIR}/wmfs-${GHCOMMIT}

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	https://github.com/xorg62/wmfs
COMMENT=	WMFS2 is a lightweight and highly configurable tiling window manager for X written in C.
LICENSE=	bsd

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix ${PREFIX} --man-prefix ${PREFIX}/man --xdg-config-dir ${PREFIX}/etc
USE_TOOLS=	gmake pkgconfig
MAKEFLAGS+=	PREFIX=${PREFIX} -DXDG_CONFIG_DIR=\"${PREFIX}/etc/xdg\"

.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXinerama/buildlink3.mk"
.include "../../graphics/imlib2/buildlink3.mk"
# url2pkg-marker (please do not remove this line.)
.include "../../mk/bsd.pkg.mk"
