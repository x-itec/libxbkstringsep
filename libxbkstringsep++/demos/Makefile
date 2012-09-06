# Makefile.in generated automatically by automake 1.5 from Makefile.am.

# Copyright 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001
# Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



SHELL = /bin/sh

srcdir = .
top_srcdir = ..

prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include
pkgdatadir = $(datadir)/libxbkstringsep++
pkglibdir = $(libdir)/libxbkstringsep++
pkgincludedir = $(includedir)/libxbkstringsep++
top_builddir = ..

ACLOCAL = ${SHELL} /usr/x-itec/libxbkstringsep/missing --run aclocal
AUTOCONF = ${SHELL} /usr/x-itec/libxbkstringsep/missing --run autoconf
AUTOMAKE = ${SHELL} /usr/x-itec/libxbkstringsep/missing --run automake
AUTOHEADER = ${SHELL} /usr/x-itec/libxbkstringsep/missing --run autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL}
INSTALL_HEADER = $(INSTALL_DATA)
transform = s,x,x,
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_alias = 
build_triplet = i386-unknown-freebsd5.1
host_alias = 
host_triplet = i386-unknown-freebsd5.1
target_alias = 
target_triplet = i386-unknown-freebsd5.1
AMTAR = ${SHELL} /usr/x-itec/libxbkstringsep/missing --run tar
AS = @AS@
AWK = gawk
CC = gcc
CXX = g++
DEPDIR = .deps
DLLTOOL = @DLLTOOL@
EXEEXT = 
INSTALL_STRIP_PROGRAM = ${SHELL} $(install_sh) -c -s
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LN_S = ln -s
MAINT = #
MEINELIB_MAJOR_VERSION = 1
MEINELIB_MICRO_VERSION = 0
MEINELIB_MINOR_VERSION = 0
OBJDUMP = @OBJDUMP@
OBJEXT = o
PACKAGE = libxbkstringsep++
RANLIB = ranlib
VERSION = 1.0.0
am__include = include
am__quote = 
install_sh = /usr/x-itec/libxbkstringsep/install-sh

INCLUDES = -I. -I../xbkstringsep++

bin_PROGRAMS = demo1
lib_LTLIBRARIES = libxbkstringsep.la

demo1_LDADD = libxbkstringsep.la

demo1_SOURCES = \
 demo1.cpp


libxbkstringsep_la_SOURCES = \
 ../xbkstringsep++/libxbkstringsep.cpp

subdir = demos
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = $(top_builddir)/xbkstringsep++/config.h
CONFIG_CLEAN_FILES =
LTLIBRARIES = $(lib_LTLIBRARIES)

libxbkstringsep_la_LDFLAGS =
libxbkstringsep_la_LIBADD =
am_libxbkstringsep_la_OBJECTS = libxbkstringsep.lo
libxbkstringsep_la_OBJECTS = $(am_libxbkstringsep_la_OBJECTS)
bin_PROGRAMS = demo1$(EXEEXT)
PROGRAMS = $(bin_PROGRAMS)

am_demo1_OBJECTS = demo1.$(OBJEXT)
demo1_OBJECTS = $(am_demo1_OBJECTS)
demo1_DEPENDENCIES = libxbkstringsep.la
demo1_LDFLAGS =

DEFS = -DHAVE_CONFIG_H
DEFAULT_INCLUDES =  -I. -I$(srcdir) -I$(top_builddir)/xbkstringsep++
CPPFLAGS = 
LDFLAGS = 
LIBS = 
depcomp = $(SHELL) $(top_srcdir)/depcomp
DEP_FILES = $(DEPDIR)/demo1.Po $(DEPDIR)/libxbkstringsep.Plo
CXXCOMPILE = $(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
LTCXXCOMPILE = $(LIBTOOL) --mode=compile $(CXX) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_CXXFLAGS) $(CXXFLAGS)
CXXLD = $(CXX)
CXXLINK = $(LIBTOOL) --mode=link $(CXXLD) $(AM_CXXFLAGS) $(CXXFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
CXXFLAGS = -g -O2
DIST_SOURCES = $(libxbkstringsep_la_SOURCES) $(demo1_SOURCES)
DIST_COMMON = Makefile.am Makefile.in
SOURCES = $(libxbkstringsep_la_SOURCES) $(demo1_SOURCES)

all: all-am

.SUFFIXES:
.SUFFIXES: .cpp .lo .o .obj

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:
	-rm -f libtool
$(srcdir)/Makefile.in: # Makefile.am  $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && \
	  $(AUTOMAKE) --gnu  demos/Makefile
Makefile: # $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) && \
	  CONFIG_HEADERS= CONFIG_LINKS= \
	  CONFIG_FILES=$(subdir)/$@ $(SHELL) ./config.status
install-libLTLIBRARIES: $(lib_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(libdir)
	@list='$(lib_LTLIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(LIBTOOL) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$p $(DESTDIR)$(libdir)/$$p"; \
	    $(LIBTOOL) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$p $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done

uninstall-libLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LTLIBRARIES)'; for p in $$list; do \
	  echo " $(LIBTOOL) --mode=uninstall rm -f $(DESTDIR)$(libdir)/$$p"; \
	  $(LIBTOOL) --mode=uninstall rm -f $(DESTDIR)$(libdir)/$$p; \
	done

clean-libLTLIBRARIES:
	-test -z "$(lib_LTLIBRARIES)" || rm -f $(lib_LTLIBRARIES)
libxbkstringsep.lo: ../xbkstringsep++/libxbkstringsep.cpp
libxbkstringsep.la: $(libxbkstringsep_la_OBJECTS) $(libxbkstringsep_la_DEPENDENCIES) 
	$(CXXLINK) -rpath $(libdir) $(libxbkstringsep_la_LDFLAGS) $(libxbkstringsep_la_OBJECTS) $(libxbkstringsep_la_LIBADD) $(LIBS)
install-binPROGRAMS: $(bin_PROGRAMS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(bindir)
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  p1=`echo $$p|sed 's/$(EXEEXT)$$//'`; \
	  if test -f $$p \
	     || test -f $$p1 \
	  ; then \
	    f=`echo $$p1|sed '$(transform);s/$$/$(EXEEXT)/'`; \
	   echo " $(INSTALL_PROGRAM_ENV) $(LIBTOOL) --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/$$f"; \
	   $(INSTALL_PROGRAM_ENV) $(LIBTOOL) --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/$$f; \
	  else :; fi; \
	done

uninstall-binPROGRAMS:
	@$(NORMAL_UNINSTALL)
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  f=`echo $$p|sed 's/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/'`; \
	  echo " rm -f $(DESTDIR)$(bindir)/$$f"; \
	  rm -f $(DESTDIR)$(bindir)/$$f; \
	done

clean-binPROGRAMS:
	-test -z "$(bin_PROGRAMS)" || rm -f $(bin_PROGRAMS)
demo1$(EXEEXT): $(demo1_OBJECTS) $(demo1_DEPENDENCIES) 
	@rm -f demo1$(EXEEXT)
	$(CXXLINK) $(demo1_LDFLAGS) $(demo1_OBJECTS) $(demo1_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT) core *.core

distclean-compile:
	-rm -f *.tab.c

include $(DEPDIR)/demo1.Po
include $(DEPDIR)/libxbkstringsep.Plo

distclean-depend:
	-rm -rf $(DEPDIR)

.cpp.o:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXXCOMPILE) -c -o $@ `test -f $< || echo '$(srcdir)/'`$<

.cpp.obj:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXXCOMPILE) -c -o $@ `cygpath -w $<`

.cpp.lo:
	source='$<' object='$@' libtool=yes \
	depfile='$(DEPDIR)/$*.Plo' tmpdepfile='$(DEPDIR)/$*.TPlo' \
	$(CXXDEPMODE) $(depcomp) \
	$(LTCXXCOMPILE) -c -o $@ `test -f $< || echo '$(srcdir)/'`$<

libxbkstringsep.o: ../xbkstringsep++/libxbkstringsep.cpp
	source='../xbkstringsep++/libxbkstringsep.cpp' object='libxbkstringsep.o' libtool=no \
	depfile='$(DEPDIR)/libxbkstringsep.Po' tmpdepfile='$(DEPDIR)/libxbkstringsep.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o libxbkstringsep.o `test -f ../xbkstringsep++/libxbkstringsep.cpp || echo '$(srcdir)/'`../xbkstringsep++/libxbkstringsep.cpp

libxbkstringsep.obj: ../xbkstringsep++/libxbkstringsep.cpp
	source='../xbkstringsep++/libxbkstringsep.cpp' object='libxbkstringsep.obj' libtool=no \
	depfile='$(DEPDIR)/libxbkstringsep.Po' tmpdepfile='$(DEPDIR)/libxbkstringsep.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o libxbkstringsep.obj `cygpath -w ../xbkstringsep++/libxbkstringsep.cpp`

libxbkstringsep.lo: ../xbkstringsep++/libxbkstringsep.cpp
	source='../xbkstringsep++/libxbkstringsep.cpp' object='libxbkstringsep.lo' libtool=yes \
	depfile='$(DEPDIR)/libxbkstringsep.Plo' tmpdepfile='$(DEPDIR)/libxbkstringsep.TPlo' \
	$(CXXDEPMODE) $(depcomp) \
	$(LIBTOOL) --mode=compile $(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o libxbkstringsep.lo `test -f ../xbkstringsep++/libxbkstringsep.cpp || echo '$(srcdir)/'`../xbkstringsep++/libxbkstringsep.cpp
CXXDEPMODE = depmode=gcc3
uninstall-info-am:

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	mkid -fID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || etags $(ETAGS_ARGS) $$tags  $$unique $(LISP)

GTAGS:
	here=`CDPATH=: && cd $(top_builddir) && pwd` \
	  && cd $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) $$here

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH

DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)

top_distdir = ..
distdir = $(top_distdir)/$(PACKAGE)-$(VERSION)

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  if test -f $$file; then d=.; else d=$(srcdir); fi; \
	  dir=`echo "$$file" | sed -e 's,/[^/]*$$,,'`; \
	  if test "$$dir" != "$$file" && test "$$dir" != "."; then \
	    $(mkinstalldirs) "$(distdir)/$$dir"; \
	  fi; \
	  if test -d $$d/$$file; then \
	    cp -pR $$d/$$file $(distdir) \
	    || exit 1; \
	  else \
	    test -f $(distdir)/$$file \
	    || cp -p $$d/$$file $(distdir)/$$file \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(LTLIBRARIES) $(PROGRAMS)
install-binPROGRAMS: install-libLTLIBRARIES


installdirs:
	$(mkinstalldirs) $(DESTDIR)$(libdir) $(DESTDIR)$(bindir)

install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	  `test -z '$(STRIP)' || \
	    echo "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'"` install
mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES) stamp-h stamp-h[0-9]*

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-binPROGRAMS clean-generic clean-libLTLIBRARIES \
	clean-libtool mostlyclean-am

distclean: distclean-am

distclean-am: clean-am distclean-compile distclean-depend \
	distclean-generic distclean-libtool distclean-tags

dvi: dvi-am

dvi-am:

info: info-am

info-am:

install-data-am:

install-exec-am: install-binPROGRAMS install-libLTLIBRARIES

install-info: install-info-am

install-man:

installcheck-am:

maintainer-clean: maintainer-clean-am

maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

uninstall-am: uninstall-binPROGRAMS uninstall-info-am \
	uninstall-libLTLIBRARIES

.PHONY: GTAGS all all-am check check-am clean clean-binPROGRAMS \
	clean-generic clean-libLTLIBRARIES clean-libtool distclean \
	distclean-compile distclean-depend distclean-generic \
	distclean-libtool distclean-tags distdir dvi dvi-am info \
	info-am install install-am install-binPROGRAMS install-data \
	install-data-am install-exec install-exec-am install-info \
	install-info-am install-libLTLIBRARIES install-man \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-compile mostlyclean-generic mostlyclean-libtool \
	tags uninstall uninstall-am uninstall-binPROGRAMS \
	uninstall-info-am uninstall-libLTLIBRARIES

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
