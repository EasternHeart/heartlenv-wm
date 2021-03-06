Summary: 	Next generation window manager for xfce
Name: 		xfwm4
Version: 	4.8.3
Release: 	1
License:	GPL
URL: 		http://www.xfce.org/
Source0: 	%{name}-%{version}.tar.gz
Group: 		User Interface/Desktops
BuildRoot: 	%{_tmppath}/%{name}-root
Requires:	libxfce4mcs >= @LIBXFCE4MCS_CLIENT_REQUIRED_VERSION@
Requires:	libxfcegui4 >= @LIBXFCEGUI4_REQUIRED_VERSION@
Requires:	xfce-mcs-manager >= @XFCE_MCS_MANAGER_REQUIRED_VERSION@
BuildRequires:	libxfce4mcs-devel >= @LIBXFCE4MCS_CLIENT_REQUIRED_VERSION@
BuildRequires: 	libxfcegui4-devel >= @LIBXFCEGUI4_REQUIRED_VERSION@
BuildRequires:	xfce-mcs-manager-devel >= @XFCE_MCS_MANAGER_REQUIRED_VERSION@

%description
xfwm4 is a window manager compatable with GNOME, GNOME2, KDE2, KDE3 and Xfce.

%prep
%setup -q

%build
%configure --enable-compositor 
make

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT mandir=%{_mandir}

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%doc example.gtkrc-2.0 README INSTALL TODO COPYING AUTHORS COMPOSITOR
%{_bindir}
%{_libdir}/xfce4
%{_datadir}/applications
%{_datadir}/icons
%{_datadir}/locale
%{_datadir}/xfce4
%{_datadir}/xfwm4
%{_datadir}/themes
