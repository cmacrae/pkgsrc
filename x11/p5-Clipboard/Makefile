# $NetBSD: Makefile,v 1.9 2013/05/31 12:42:56 wiz Exp $

DISTNAME=	Clipboard-0.13
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	3
CATEGORIES=	x11 perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/K/KI/KING/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Clipboard/
COMMENT=	Copy and paste with any OS
LICENSE=	${PERL5_LICENSE}

PKG_INSTALLATION_TYPES=	overwrite pkgviews

.include "../../mk/bsd.prefs.mk"

.if ${OPSYS} != "Darwin"
DEPENDS+=	xclip-[0-9]*:../../x11/xclip
.endif

PERL5_PACKLIST=		auto/Clipboard/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
