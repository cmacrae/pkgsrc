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
# XXX	BUILDLINK_DEPMETHOD.libstrophe?=	build

BUILDLINK_TREE+=	libstrophe

.if !defined(LIBSTROPHE_BUILDLINK3_MK)
LIBSTROPHE_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libstrophe+=	libstrophe>=1.0
BUILDLINK_PKGSRCDIR.libstrophe?=	../../chat/libstrophe
.endif	# LIBSTROPHE_BUILDLINK3_MK

BUILDLINK_TREE+=	-libstrophe
