# $NetBSD: Makefile,v 1.25 2013/12/06 13:23:46 wiz Exp $
#

.include "../../print/evince3/Makefile.common"

COMMENT=		Document viewer
PKGREVISION=		13

.include "options.mk"

CONFIGURE_ARGS+=	--enable-comics
CONFIGURE_ARGS+=	--disable-nautilus

USE_TOOLS+=	gsed

.include "../../devel/glib2/schemas.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
BUILDLINK_DEPMETHOD.libXt?=	build
.include "../../x11/libXt/buildlink3.mk"
.include "../../x11/libSM/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
