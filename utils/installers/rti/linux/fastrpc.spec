Name: fastrpc
Version: VERSION
Release:	1%{?dist}
Summary: eProsima FastRPC provides an implementation of this general concept of invoking remote procedures.
Group: Development/Libraries
License: LGPLv3
URL: http://www.eprosima.com
Source0: %{name}_%{version}_rpm.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)
BuildRequires: autoconf automake libtool, antlr, stringtemplate, ant, boost-system, boost-thread, fastcdr
Requires: antlr, stringtemplate, boost-system, boost-thread, fastcdr

%description
eProsima FastRPC provides an implementation of this general concept of invoking remote procedures. eProsima 
FastRPC is a service invocation framework that allows the developers to build distributed applications with 
a minimal effort. It makes transparent the remote procedure call, avoiding the programmers from explicitly coding 
the details for this remote interaction, permitting them to focus on the application logic.

%prep
%setup -q -n %{name}

%build
%configure
make %{?_smp_mflags}
cd fastrpcgen
ant -Dbuildrootdir="%{buildroot}" jar
cd ..

%install
rm -rf %{buildroot}
make install DESTDIR=%{buildroot}
cd fastrpcgen
ant -Dbuildrootdir="%{buildroot}" install
cd ..

%clean
rm -rf %{buildroot}

%files
%defattr(-,root,root,-)
%{_includedir}/*
%{_libdir}/libfastrpc*
%{_datadir}/*
%attr(755,root,root) %{_bindir}/fastrpcgen.sh

%changelog

