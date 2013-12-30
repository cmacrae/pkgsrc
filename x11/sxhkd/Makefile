# $NetBSD$

DISTNAME=	sxhkd-0.5.3
CATEGORIES=	x11
MASTER_SITES=	http://saveosx.org/packages/Darwin/2013Q2/x86_64/distfiles/

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	https://github.com/baskerville/sxhkd/
COMMENT=	sxhkd is a simple X hotkey daemon
LICENSE=	2-clause-bsd
USE_TOOLS+=	gmake

.include "../../x11/xcb-util/buildlink3.mk"
.include "../../x11/xcb-util-keysyms/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
