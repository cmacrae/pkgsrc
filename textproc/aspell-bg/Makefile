# $NetBSD: Makefile,v 1.1 2013/04/10 17:46:20 rodent Exp $
#

DISTNAME=	aspell6-bg-4.1-0
PKGNAME=	${DISTNAME:S/6-/-/1:S/-0/.0/1}
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_GNU:=aspell/dict/bg/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	http://bgoffice.sourceforge.net/
COMMENT=	Bulgarian language support for aspell
LICENSE=	gnu-gpl-v2

HAS_CONFIGURE=	yes
USE_LANGUAGES=	# none

.include "../../textproc/aspell/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
