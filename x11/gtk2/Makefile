# $NetBSD$

PKGNAME=	gtk2+-${GTK2VERSION}
GTK2VERSION=	2.24.22
DISTNAME=	gtk+-${GTK2VERSION}
CATEGORIES=	x11
MASTER_SITES=	http://ftp.gnome.org/pub/gnome/sources/gtk+/2.24/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://ftp.gnome.org/pub/gnome/sources/gtk+/2.24/
COMMENT=	GIMP Toolkit v2 - Libraries for building X11 user interfaces
LICENSE=	gnu-lgpl-v2

GNU_CONFIGURE=		yes
USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config
USE_PKGLOCALEDIR=	yes
USE_LANGUAGES=		c c++

PKGCONFIG_OVERRIDE+=	gail.pc.in
PKGCONFIG_OVERRIDE+=	gdk-2.0.pc.in
PKGCONFIG_OVERRIDE+=	gtk+-2.0.pc.in
PKGCONFIG_OVERRIDE+=	gtk+-unix-print-2.0.pc.in

.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXcursor/buildlink3.mk"
.include "../../x11/libXft/buildlink3.mk"
.include "../../x11/libXfixes/buildlink3.mk"
.include "../../x11/libXinerama/buildlink3.mk"
.include "../../x11/libXrandr/buildlink3.mk"
.include "../../x11/libXrender/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXcomposite/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../devel/atk/buildlink3.mk"
.include "../../devel/pango/buildlink3.mk"
.include "../../graphics/cairo/buildlink3.mk"
.include "../../graphics/gdk-pixbuf2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
