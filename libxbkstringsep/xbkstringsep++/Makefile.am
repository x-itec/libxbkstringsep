
LTVERSION = $(MEINELIB_MAJOR_VERSION):$(MEINELIB_MINOR_VERSION):$(MEINELIB_MICRO_VERSION)

quellen = \
	libxbkstringsep.cpp

include_HEADERS = \
	libxbkstringsep.h 


lib_LTLIBRARIES = \
	libxbkstringsep.la

libxbkstringsep_la_SOURCES = $(quellen)
libxbkstringsep_la_LDFLAGS = -version-info $(LTVERSION)

