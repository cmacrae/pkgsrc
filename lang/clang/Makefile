# $NetBSD: Makefile,v 1.22 2013/07/02 10:33:02 adam Exp $

DISTNAME=	clang-3.4.2
CATEGORIES=	lang
MASTER_SITES=	http://llvm.org/releases/${PKGVERSION_NOREV}/
DISTFILES=	cfe-${PKGVERSION_NOREV}.src.tar.gz \
		llvm-${PKGVERSION_NOREV}.src.tar.gz

MAINTAINER=	adam.hoka@gmail.com
HOMEPAGE=	http://llvm.org/
COMMENT=	Low Level Virtual Machine compiler infrastructure
LICENSE=	modified-bsd

WRKSRC=			${WRKDIR}/llvm-${PKGVERSION_NOREV}.src

USE_LANGUAGES=		c c++
USE_TOOLS+=		chown gmake groff pod2html pod2man
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--disable-assertions
CONFIGURE_ARGS+=	--disable-bindings	# disable OCaml
CONFIGURE_ARGS+=	--disable-timestamps
CONFIGURE_ARGS+=	--enable-optimized
#CONFIGURE_ARGS+=	--enable-shared

MAKE_DIRS+=		etc/llvm

INSTALLATION_DIRS=	bin lib libexec

CHECK_PORTABILITY_SKIP=	utils/buildit/build_llvm

TEST_TARGET=	check unittests

.include "../../mk/bsd.prefs.mk"

.if ${_OPSYS_SHLIB_TYPE} == "dylib"
PLIST_SUBST+=		SOEXT="dylib"
.else
PLIST_SUBST+=		SOEXT="so"
.endif

CFLAGS.SunOS+=		-mimpure-text

post-extract:
	mv ${WRKDIR}/cfe-${PKGVERSION_NOREV}.src ${WRKSRC}/tools/clang
.if ${OPSYS} == "SunOS"
	${ECHO} "int sun_ld_needs_a_symbol=0;" >> ${WRKSRC}/lib/Target/NVPTX/InstPrinter/NVPTXInstPrinter.cpp
.endif

.include "../../lang/python/tool.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
