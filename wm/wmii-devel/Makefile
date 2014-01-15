# $NetBSD: Makefile,v 1.29 2013/05/29 14:44:00 wiz Exp $

DISTNAME=		wmii+ixp-3.9.2
PKGNAME=		wmii-devel-3.9.2
PKGREVISION=		4
CATEGORIES=		wm
MASTER_SITES+=          https://wmii.googlecode.com/files/
EXTRACT_SUFX=	        .tbz

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		https://code.google.com/p/wmii/
COMMENT=		Modular and keyboard-friendly window manager
LICENSE=		mit

DEPENDS+=		dmenu>=3.7:../../x11/dmenu

USE_TOOLS+=		tbl

NO_CONFIGURE=		yes

BUILD_DEFS+=		PKG_SYSCONFBASE
MAKE_ENV+=		PKG_SYSCONFBASE=${PKG_SYSCONFBASE}
# parallel compilations of at least cmd/util.o
MAKE_JOBS_SAFE=		no

# see ${WRKSRC}/mk/wmii.mk
CONFVERSION=		3.5
PLIST_SUBST+=		CONFVERSION=${CONFVERSION}

PKG_SYSCONFSUBDIR=	wmii-${CONFVERSION}
EGDIR=			${PREFIX}/share/examples/${PKG_SYSCONFSUBDIR}
EGFILES=		rc.wmii welcome wmiirc
CONF_FILES_MODE=	0755

CFLAGS.Darwin+=		-Wno-variadic-macros
LDFLAGS.SunOS+=		-lsocket -lnsl
LDFLAGS.Darwin+=	-liconv -lX11 -lXrender

SUBST_CLASSES+=		vars
SUBST_STAGE.vars=	pre-build
SUBST_FILES.vars=	util/compile
SUBST_VARS.vars=	EGREP SED SH

SUBST_CLASSES+=         makefile
SUBST_STAGE.makefile=   pre-build
SUBST_MESSAGE.makefile= Fixing config.mk
SUBST_FILES.makefile=   config.mk
SUBST_SED.makefile=     -e 's,/usr/local,${PREFIX},g'

post-build:
	mv ${WRKSRC}/man/wmii.1 ${WRKSRC}/man/wmii.tbl
	${TBL} ${WRKSRC}/man/wmii.tbl > ${WRKSRC}/man/wmii.1

.include "../../converters/libiconv/buildlink3.mk"
.include "../../devel/libixp/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXft/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../x11/libXrandr/buildlink3.mk"
.include "../../x11/libXinerama/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
