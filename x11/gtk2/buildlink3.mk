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
# XXX	BUILDLINK_DEPMETHOD.gtk2+?=	build

BUILDLINK_TREE+=	gtk2+

.if !defined(GTK2+_BUILDLINK3_MK)
GTK2+_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.gtk2++=	gtk2+>=2.24.22
BUILDLINK_PKGSRCDIR.gtk2+?=	../../x11/gtk2

# XXX
# XXX Uncomment and keep only the buildlink3 lines below which are directly
# XXX needed for dependencies to compile, link, and run.  If this package
# XXX provides a wrappered API or otherwise does not expose the APIs of the
# XXX buildlink3 lines below to dependencies, remove them.
# XXX
#.include "../../x11/libX11/buildlink3.mk"
#.include "../../x11/libXcursor/buildlink3.mk"
#.include "../../x11/libXft/buildlink3.mk"
#.include "../../x11/libXfixes/buildlink3.mk"
#.include "../../x11/libXinerama/buildlink3.mk"
#.include "../../x11/libXrandr/buildlink3.mk"
#.include "../../x11/libXrender/buildlink3.mk"
#.include "../../x11/libXt/buildlink3.mk"
#.include "../../x11/libXext/buildlink3.mk"
#.include "../../x11/libXcomposite/buildlink3.mk"
#.include "../../devel/glib2/buildlink3.mk"
#.include "../../devel/atk/buildlink3.mk"
#.include "../../devel/pango/buildlink3.mk"
#.include "../../graphics/cairo/buildlink3.mk"
#.include "../../graphics/gdk-pixbuf2/buildlink3.mk"
.endif	# GTK2+_BUILDLINK3_MK

BUILDLINK_TREE+=	-gtk2+
