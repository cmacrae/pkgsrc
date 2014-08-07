# $NetBSD$

PKGNAME=	nanomsgxx-0.1
CATEGORIES=	devel
GHCOMMIT=	897ad9009b7ff3152c943524204aca5b6b126a3b
DISTNAME=	${GHCOMMIT}.zip
MASTER_SITES=	https://github.com/achille-roussel/nanomsgxx/archive/
DIST_SUBDIR=	nanomsgxx
EXTRACT_SUFX=	# none

MAINTAINER=	rchibois@gmail.com
HOMEPAGE=	https://github.com/achille-roussel/nanomsgxx
COMMENT=	Nanomsg binding for C++11
LICENSE=	mit

DEPENDS+=	nanomsg>=0:../../devel/nanomsg
WRKSRC=		${WRKDIR}/nanomsgxx-897ad9009b7ff3152c943524204aca5b6b126a3b
USE_LANGUAGES=	c c++

do-configure:
	cd ${WRKSRC} && env ${MAKE_ENV} ./waf configure

do-build:
	cd ${WRKSRC} && env ${MAKE_ENV} ./waf build

do-install:
	cd ${WRKSRC} && env DESTDIR=${DESTDIR} ${MAKE_ENV} ./waf install

.include "../../devel/nanomsg/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
