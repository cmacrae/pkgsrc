# $NetBSD$

DISTNAME=	ncmpcpp-0.5.10
CATEGORIES=	audio
MASTER_SITES=	http://ncmpcpp.rybczak.net/stable/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://ncmpcpp.rybczak.net/stable/
COMMENT=	Ncurses music player written in c++.
#LICENSE=	# TODO: (see mk/license.mk)

ONLY_FOR_COMPILER=	gcc
GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_LANGUAGES=	c++ c
USE_TOOLS=	pkg-config
CONFIGURE_ARGS+= --with-curl --without-taglib --with-iconv 
CONFIGURE_ARGS+= --enable-unicode --enable-clock --enable-visualizer --enable-outputs

.include "../../audio/libmpdclient/buildlink3.mk"
#.include "../../audio/taglib/buildlink3.mk"
.include "../../converters/libiconv/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
