# $NetBSD$
# XXX
# XXX This file was created automatically using createbuildlink-3.16.
# XXX After this file has been verified as correct, the comment lines
# XXX beginning with "XXX" should be removed.  Please do not commit
# XXX unverified buildlink3.mk files.
# XXX
# XXX Packages that only install static libraries or headers should
# XXX include the following line:
# XXX
# XXX	BUILDLINK_DEPMETHOD.gcc?=	build

BUILDLINK_TREE+=	gcc

.if !defined(GCC_BUILDLINK3_MK)
GCC_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.gcc+=	gcc>=4.5.4
BUILDLINK_PKGSRCDIR.gcc?=	../../lang/gcc45

# XXX
# XXX Uncomment and keep only the buildlink3 lines below which are directly
# XXX needed for dependencies to compile, link, and run.  If this package
# XXX provides a wrappered API or otherwise does not expose the APIs of the
# XXX buildlink3 lines below to dependencies, remove them.
# XXX
#.include "../../math/mpfr/buildlink3.mk"
#.include "../../math/cloog/buildlink3.mk"
#.include "../../math/isl/buildlink3.mk"
#.include "../../math/mpcomplex/buildlink3.mk"
#.include "../../devel/gmp/buildlink3.mk"
.endif	# GCC_BUILDLINK3_MK

BUILDLINK_TREE+=	-gcc
