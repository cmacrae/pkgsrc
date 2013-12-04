# $NetBSD$

DISTNAME=	mcabber-0.10.2
CATEGORIES=	chat
MASTER_SITES=	http://mcabber.com/files/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://mcabber.com/files/
COMMENT=	mcabber is a small Jabber console client.
LICENSE=	gnu-gpl-v1

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config automake

PKGCONFIG_OVERRIDE+=	mcabber.pc.in

.include "../../devel/glib2/buildlink3.mk"
.include "../../chat/loudmouth/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
