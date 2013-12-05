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
# XXX	BUILDLINK_DEPMETHOD.qt4-libs?=	build

BUILDLINK_TREE+=	qt4-libs

.if !defined(QT4_LIBS_BUILDLINK3_MK)
QT4_LIBS_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.qt4-libs+=	qt4-libs>=
BUILDLINK_PKGSRCDIR.qt4-libs?=	../../x11/qt4-libs
.endif	# QT4_LIBS_BUILDLINK3_MK

BUILDLINK_TREE+=	-qt4-libs
