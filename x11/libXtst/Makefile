# $NetBSD: Makefile,v 1.11 2013/05/31 08:30:24 wiz Exp $

DISTNAME=		libXtst-1.2.2
CATEGORIES=		x11 devel
MASTER_SITES=		${MASTER_SITE_XORG:=lib/}
EXTRACT_SUFX=		.tar.bz2

MAINTAINER=		joerg@NetBSD.org
HOMEPAGE=		http://xorg.freedesktop.org/
COMMENT=		X Tst Library

USE_LIBTOOL=		yes
GNU_CONFIGURE=		yes
USE_TOOLS+=		pkg-config

CONFIGURE_ENV+=		ac_cv_path_XMLTO=	# empty

.include "../../x11/libXi/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/recordproto/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
