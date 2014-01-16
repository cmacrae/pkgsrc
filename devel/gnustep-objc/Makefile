# $NetBSD: Makefile,v 1.23 2012/10/31 11:17:02 asau Exp $
#

PKGNAME=	gnustep-objc-1.6.1
CATEGORIES=	devel gnustep
GHCOMMIT=	43e81c1bf90036d37ade3f970250bb9da501c1dc
DISTNAME=	${GHCOMMIT}
MASTER_SITES=	https://github.com/gnustep/gnustep-libobjc2/archive/
FETCH_USING=	curl

MAINTAINER=	rh@NetBSD.org
HOMEPAGE=	https://github.com/gnustep/gnustep-libobjc2
COMMENT=	Objective-C runtime
LICENSE=	gnu-gpl-v3

WRKSRC=		${WRKDIR}/gnustep-libobjc2-${GHCOMMIT}

GNUSTEP_OVERRIDE_INSTALL=	YES
NO_CONFIGURE=			YES
USE_LANGUAGES=			c c++ objc
NO_MAKE=			YES

do-build:
	cd ${WRKSRC}; mkdir Build; cd Build; cmake ..; make;
do-install:
	cd ${WRKSRC}; cd Build; make install DESTDIR=${DESTDIR};

.include "../../devel/gnustep-make/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
