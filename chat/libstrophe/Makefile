# $NetBSD$

DISTNAME=	libstrophe-1.0
CATEGORIES=	chat
MASTER_SITES=	http://saveosx.org/packages/Darwin/2013Q2/x86_64/distfiles/

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://saveosx.org/packages/Darwin/2013Q2/x86_64/distfiles/
COMMENT=	libstrophe is a minimal XMPP library written in C.
LICENSE=	mit

USE_TOOLS+= 	automake
GNU_CONFIGURE=  yes

pre-configure:
	cd ${WRKSRC} && automake --add-missing --foreign --copy && autoconf

# url2pkg-marker (please do not remove this line.)
.include "../../mk/bsd.pkg.mk"
