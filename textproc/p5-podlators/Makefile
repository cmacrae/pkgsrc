# $NetBSD: Makefile,v 1.10 2013/12/09 14:17:54 obache Exp $

DISTNAME=	podlators-2.4.0
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Pod/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/podlators/
COMMENT=	Collection of pod related perl modules
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	{perl>=5.10.1,p5-Pod-Simple>=3.06}:../../textproc/p5-Pod-Simple

PKG_INSTALLATION_TYPES=	overwrite pkgviews

PERL5_PACKLIST=		auto/Pod/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
