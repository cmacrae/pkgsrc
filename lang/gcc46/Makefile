# $NetBSD$

DISTNAME=	gcc-4.6.4
CATEGORIES=	lang
MASTER_SITES= 	ftp://ftp.gnu.org/gnu/gcc/${DISTNAME}/

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://gcc.gnu.org
COMMENT=	The GNU Compiler Collection (GCC) is a compiler system produced by the GNU Project	
LICENSE=	gnu-gpl-v3

GNU_CONFIGURE=		yes
USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config
USE_TOOLS+=		gmake
USE_TOOLS+=		perl
USE_PKGLOCALEDIR=	yes
USE_LANGUAGES=		c c++ 

CONFIGURE_ARGS+=	--enable-languages=c,c++,objc,obj-c++
CONFIGURE_ARGS+=	--with-system-zlib
CONFIGURE_ARGS+=	--enable-version-specific-runtime-lib
CONFIGURE_ARGS+=	--enable-libstdcxx=yes
CONFIGURE_ARGS+=	--disable-werror

.include "../../math/mpfr/buildlink3.mk"
.include "../../math/cloog/buildlink3.mk"
.include "../../math/isl/buildlink3.mk"
.include "../../math/mpcomplex/buildlink3.mk"
.include "../../devel/gmp/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
