# $NetBSD$

DISTNAME=	profanity-0.3.0
CATEGORIES=	chat
MASTER_SITES=	http://www.profanity.im/

MAINTAINER=	youri.mout@gmail.com
HOMEPAGE=	http://www.profanity.im/
COMMENT=	Profanity is a consoled based XMPP client.
LICENSE=	gnu-gpl-v3
USE_TOOLS+=	pkg-config
GNU_CONFIGURE=	yes
CONFIGURE_ARGS= --prefix=/usr/pkg

.include "../../chat/libstrophe/buildlink3.mk"
.include "../../devel/ncursesw/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
