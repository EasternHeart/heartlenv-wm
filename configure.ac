dnl
dnl This file was autogenerated from "configure.ac.in".
dnl Edit that file instead!
dnl

dnl configure.ac
dnl
dnl xfwm4 - window manager for the Xfce4 desktop environment
dnl

m4_define([xfwm4_version_major], [4])
m4_define([xfwm4_version_minor], [8])
m4_define([xfwm4_version_micro], [3])
m4_define([xfwm4_version_build], [360ccf2])
m4_define([xfwm4_version_tag],   [])
m4_define([xfwm4_version], [xfwm4_version_major().xfwm4_version_minor().xfwm4_version_micro()ifelse(xfwm4_version_tag(), [git], [xfwm4_version_tag().xfwm4_version_build()], [xfwm4_version_tag()])])

m4_define([gtk_minimum_version], [2.14.0])
m4_define([xfce_minimum_version], [4.8.0])
m4_define([libxfce4ui_minimum_version], [4.8.0])
m4_define([libxfce4kbd_private_minimum_version], [4.8.0])
m4_define([xfconf_minimum_version], [4.8.0])
m4_define([xcomposite_minimum_version], [0.2])
m4_define([wnck_minimum_version], [2.22])
m4_define([startup_notification_minimum_version], [0.5])
m4_define([intltool_minimum_version], [0.31])

dnl init autoconf
AC_COPYRIGHT([Copyright (c) 2002-2011
        The Xfce development team. All rights reserved.

Written for Xfce by Olivier Fourdan <fourdan@xfce.org>.])
AC_INIT([xfwm4], [xfwm4_version], [xfce4-dev@xfce.org])
AM_INIT_AUTOMAKE([xfwm4], [xfwm4_version()])

AM_INIT_AUTOMAKE([1.8 dist-bzip2 tar-ustar])
AM_CONFIG_HEADER([config.h])

AM_MAINTAINER_MODE()
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

dnl check for UNIX variants
AC_AIX
AC_ISC_POSIX
AC_MINIX
AM_CONDITIONAL([HAVE_CYGWIN], [test "`uname | grep \"CYGWIN\"`" != ""])

dnl check for basic programs
AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_INSTALL
AC_PROG_INTLTOOL([intltool_minimum_version], [no-xml])
AC_PROG_LIBTOOL

dnl Check C Compiler Characteristics
AC_C_INLINE

dnl check for standard header files
AC_HEADER_STDC
AC_CHECK_FUNCS([daemon setsid])
AC_CHECK_FUNCS(opendir)

dnl Check for i18n support
XDT_I18N([am ar ast az be bg bn_IN bn ca cs da de dz el en_GB eo es_MX es et eu fa fi fr gl gu he hi hr hu id is it ja ka kk ko lt lv mk mr ms nb nl pa pl pt_BR pt ro ru si sk sq sv ta te tr ug uk ur_PK ur vi zh_CN zh_TW ])

dnl Check for X11 window system
XDT_CHECK_LIBX11_REQUIRE
XDT_CHECK_LIBSM

dnl Check for Xext library
AC_CHECK_LIB([Xext], [XShapeCombineShape],
  [
    if ! echo $LIBX11_LIBS | grep -q -- '-lXext'; then
      LIBX11_LIBS="$LIBX11_LIBS -lXext"
    fi
  ], [], [$LIBX11_CFLAGS $LIBX11_LDFLAGS $LIBX11_LIBS])

XDT_CHECK_PACKAGE([GTK], [gtk+-2.0], [gtk_minimum_version])
XDT_CHECK_PACKAGE([LIBXFCE4UTIL], [libxfce4util-1.0], [xfce_minimum_version])
XDT_CHECK_PACKAGE([LIBXFCE4UI], libxfce4ui-1, [libxfce4ui_minimum_version])
XDT_CHECK_PACKAGE([LIBXFCE4KBD_PRIVATE], libxfce4kbd-private-2, [libxfce4kbd_private_minimum_version])
XDT_CHECK_PACKAGE([LIBXFCONF], libxfconf-0, [xfconf_minimum_version])
XDT_CHECK_PACKAGE([LIBWNCK], [libwnck-1.0], [wnck_minimum_version])
XDT_CHECK_PACKAGE([DBUS], [dbus-1], [1.0.0])
XDT_CHECK_PACKAGE([DBUS_GLIB], [dbus-glib-1], [0.72])

dnl
dnl Startup notification support
dnl
LIBSTARTUP_NOTIFICATION_FOUND="no"
XDT_CHECK_OPTIONAL_PACKAGE([LIBSTARTUP_NOTIFICATION],
                       [libstartup-notification-1.0], [startup_notification_minimum_version],
                       [startup-notification],
                       [startup notification library], [yes])


dnl
dnl XSync support
dnl
XSYNC_LIBS=
AC_ARG_ENABLE([xsync],
AC_HELP_STRING([--enable-xsync], [try to use the xsync extension])
AC_HELP_STRING([--disable-xsync], [don't try to use the xsync extension]),
  [], [enable_xsync=yes])
have_xsync="no"
if test x"$enable_xsync" = x"yes"; then
  AC_CHECK_LIB([Xext], [XSyncQueryExtension],
      [ have_xsync="yes"
        XSYNC_LIBS=" -lXext"
        AC_DEFINE([HAVE_XSYNC], [1], [Define to enable xsync])
      ],[])
fi
AC_SUBST([XSYNC_LIBS])

dnl
dnl Render support
dnl
AC_ARG_ENABLE([render],
AC_HELP_STRING([--enable-render], [try to use the render extension])
AC_HELP_STRING([--disable-render], [don't try to use the render extension]),
  [], [enable_render=yes])
have_render="no"
RENDER_LIBS=
if test x"$enable_render" = x"yes"; then
  if $PKG_CONFIG --print-errors --exists xrender 2>&1; then
    PKG_CHECK_MODULES(RENDER, xrender)
    have_render="yes"
    AC_DEFINE([HAVE_RENDER], [1], [Define to enable render])
  else
    dnl fallback to check for libXrender
    AC_CHECK_LIB([Xrender], [XRenderCreatePicture],
        [ have_render="yes"
          RENDER_LIBS=" -lXrender"
          AC_DEFINE([HAVE_RENDER], [1], [Define to enable render])
        ],[])
  fi
fi
AC_SUBST([RENDER_LIBS])

dnl
dnl RANDR extension
dnl (please note that Xrandr requires Xrender - and no, it's not a typo ;)
dnl
AC_ARG_ENABLE([randr],
AC_HELP_STRING([--enable-randr], [try to use the randr extension (requires render)])
AC_HELP_STRING([--disable-randr], [don't try to use the randr extension]),
  [], [enable_randr=yes])
RANDR_LIBS=
have_xrandr="no"
if test x"$enable_randr" = x"yes"; then
  if test x"$have_render" = x"yes"; then
    have_xrandr="no"
    ac_CFLAGS="$CFLAGS"
    CFLAGS="$CFLAGS $LIBX11_CFLAGS"
    AC_CHECK_LIB(Xrandr, XRRUpdateConfiguration,
                 [AC_CHECK_HEADER(X11/extensions/Xrandr.h,
                                  RANDR_LIBS="-lXrandr -lXrender"
                                  AC_DEFINE([HAVE_RANDR], [1], [Define to enable xrandr])
                                  have_xrandr="yes",,
                                  [#include <X11/Xlib.h>])],,
                  $LIBS $LIBX11_LDFLAGS $LIBX11_LIBS -lXrender -lXext)
    CFLAGS="$ac_CFLAGS"
  fi
fi
AC_SUBST([RANDR_LIBS])

dnl
dnl Xcomposite and related extensions
dnl
compositor="no"
ENABLE_COMPOSITOR=""
MATH_LIBS=""
AC_ARG_ENABLE([compositor],
AC_HELP_STRING([--enable-compositor], [enable compositor in xfwm4 (default)])
AC_HELP_STRING([--disable-compositor], [disable compositor in xfwm4]),
  [], [enable_compositor=yes])

if test x"$enable_compositor" = x"yes"; then
  if test x"$have_render" = x"yes"; then
    if $PKG_CONFIG --print-errors --exists xcomposite xfixes xdamage xrender 2>&1; then
      PKG_CHECK_MODULES(COMPOSITOR, xcomposite >= [xcomposite_minimum_version] xfixes xdamage)
      AC_DEFINE([HAVE_COMPOSITOR], [1], [Define to enable compositor])
      ENABLE_COMPOSITOR="--enable-compositor"
      AC_DEFINE([HAVE_COMPOSITOR], [1], [Define to enable compositor])
      compositor="yes"
      dnl Math lib is required for compositor internals
      MATH_LIBS=" -lm"
    fi
  fi
fi
AC_SUBST([MATH_LIBS])
AC_SUBST(ENABLE_COMPOSITOR)

dnl
dnl Old unsupported KDE systray protocol
dnl
ENABLE_KDE_SYSTRAY=""
kde_systray="no"
AC_ARG_ENABLE([kde_systray],
  AC_HELP_STRING([--enable-kde-systray], [enable KDE systray proxy (deprecated)]),
  kde_systray="$enableval",
  kde_systray="no")

if test x"$kde_systray" = x"yes"; then
  AC_DEFINE([ENABLE_KDE_SYSTRAY_PROXY], [1], [Define to enable KDE systray proxy support])
  ENABLE_KDE_SYSTRAY="--enable-kde-systray"
fi
AC_SUBST(ENABLE_KDE_SYSTRAY)

dnl ***************************************************
dnl *** Check if we need to build the documentation ***
dnl ***************************************************
AC_ARG_ENABLE([gen-doc], [AC_HELP_STRING([--enable-gen-doc], 
              [Generate HTML documentation (requires xsltproc, xml2po and xmllint) [default=no]])],, [enable_gen_doc=no])
if test x"$enable_gen_doc" = x"yes"; then
    AC_PATH_PROG([XSLTPROC], [xsltproc], [no])
    if test x"$XSLTPROC" = x"no"; then
        enable_gen_doc=no
    fi

    AC_PATH_PROG([XML2PO], [xml2po], [no])
    if test x"$XML2PO" = x"no"; then
        enable_gen_doc=no
    fi

    AC_PATH_PROG([XMLLINT], [xmllint], [no])
    if test x"$XML2PO" = x"no"; then
        enable_gen_doc=no
    fi

    if test x"$enable_gen_doc" = x"no"; then
        AC_MSG_ERROR([Compiling with --enable-gen-doc but one of xml2po, xsltproc or xmllint not found.])
    fi
fi
AM_CONDITIONAL([GENERATE_DOCUMENTATION], [test x"$enable_gen_doc" = x"yes"])

dnl Check for debugging support
XDT_FEATURE_DEBUG

REVISION=unknown
if test x"360ccf2" != x""; then
    REVISION=360ccf2
fi
AC_DEFINE_UNQUOTED([REVISION], "$REVISION", [git id])
AC_SUBST([REVISION])

AC_OUTPUT([
Makefile
doc/Makefile
doc/manual/Makefile
doc/manual/images/Makefile
doc/manual/images/fr/Makefile
doc/manual/images/it/Makefile
doc/manual/po/Makefile
defaults/Makefile
helper-dialog/Makefile
icons/Makefile
icons/48x48/Makefile
icons/scalable/Makefile
po/Makefile.in
settings-dialogs/Makefile
src/Makefile
themes/Makefile
themes/daloa/Makefile
themes/default/Makefile
themes/default-4.0/Makefile
themes/default-4.2/Makefile
themes/default-4.4/Makefile
themes/default-4.6/Makefile
themes/kokodi/Makefile
themes/moheli/Makefile
themes/sassandra/Makefile
themes/stoneage/Makefile
themes/therapy/Makefile
themes/tyrex/Makefile
themes/wallis/Makefile
xfwm4.spec
])

echo
echo "Build Configuration for $PACKAGE version $VERSION revision $REVISION:"
echo "  Startup notification support:                 $LIBSTARTUP_NOTIFICATION_FOUND"
echo "  XSync support:                                $have_xsync"
echo "  Render support:                               $have_render"
echo "  Xrandr support:                               $have_xrandr"
echo "  Embedded compositor:                          $compositor"
echo "  KDE systray protocol proxy:                   $kde_systray"
if test x"$enable_gen_doc" = x"yes"; then
echo "  Documentation:                                yes (generate)"
elif test -d "${srcdir}/docs/manual/html"; then
echo "  Documentation:                                yes (in tarball)"
else
echo "  Documentation:                                no"
fi
echo
