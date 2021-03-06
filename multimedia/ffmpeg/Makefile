# $NetBSD: Makefile,v 1.116 2013/10/20 21:53:54 wiz Exp $

PKGNAME=	ffmpeg-20131006.${DISTVERSION}
PKGREVISION=	1
MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://ffmpeg.mplayerhq.hu/
COMMENT=	Decoding, encoding and streaming software

CONFIGURE_ARGS+=	--enable-avfilter
#CONFIGURE_ARGS+=	--enable-avfilter-lavf
CONFIGURE_ARGS+=	--enable-postproc

INSTALLATION_DIRS=	lib share/examples/ffmpeg share/doc/ffmpeg

CONF_FILES+=	${PREFIX}/share/examples/ffmpeg/ffserver.conf \
		${PKG_SYSCONFDIR}/ffserver.conf

.include "../../mk/bsd.prefs.mk"

.if !empty(USE_CROSS_COMPILE:M[yY][eE][sS])
CONFIGURE_ARGS+=	--enable-cross-compile
CONFIGURE_ARGS+=	--target-os=${LOWER_OPSYS}
CONFIGURE_ARGS+=	--arch=${MACHINE_ARCH}
CONFIGURE_ARGS+=	--host-cc=${NATIVE_CC:Q}
CONFIGURE_ARGS+=	--host-ld=${NATIVE_CC:Q}
.endif

TEST_TARGET=	check

post-install:
	${INSTALL_DATA} ${WRKSRC}/doc/*.txt \
		${DESTDIR}${PREFIX}/share/doc/ffmpeg
	${INSTALL_DATA} ${WRKSRC}/doc/ffserver.conf \
		${DESTDIR}${PREFIX}/share/examples/ffmpeg

.include "options.mk"

.include "../../mk/compiler.mk"

# disable asm on i386 for non-gcc and gcc < 4.2
# no alignment options needed for gcc >= 4.6 on i386
.if ${MACHINE_ARCH} == "i386"
.  if !empty(MACHINE_PLATFORM:MDarwin-*-i386) \
   || !empty(MACHINE_PLATFORM:MSunOS-*-i386) \
   || !empty(CC_VERSION:Mgcc-[123]*) \
   || !empty(CC_VERSION:Mgcc-4.[01]*) \
   ||  empty(CC_VERSION:Mgcc*)
CONFIGURE_ARGS+=	--disable-asm
.  elif !empty(CC_VERSION:Mgcc-4.[2345]*)
CFLAGS+=		-mstackrealign -mpreferred-stack-boundary=4
.  endif
.endif

.if !empty(PKGSRC_COMPILER:Mclang)
CFLAGS+=	-no-integrated-as
.endif

.include "../../multimedia/ffmpeg/Makefile.common"
