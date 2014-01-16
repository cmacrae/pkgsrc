# $NetBSD$

PKGNAME=	subtle-0.11
DISTNAME=	subtle-0.11.3224-xi
CATEGORIES=	wm
MASTER_SITES+=	http://subforge.org/attachments/download/81/
EXTRACT_SUFX=	.tbz2

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://subforge.org/projects/subtle
COMMENT=	A grid-based manual window manager
LICENSE=	gnu-gpl-v2

#DEPENDS+=	ruby193-rake:../../devel/ruby-rake

USE_RAKE=	yes
RAKE=		rake destdir=${DESTDIR}

do-build:
		${RUN} cd ${WRKSRC} && ${RAKE}
do-install:
		${RUN} cd ${WRKSRC} && ${RAKE}
		
# url2pkg-marker (please do not remove this line.)
.include "../../mk/bsd.pkg.mk"
