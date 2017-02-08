lib_LTLIBRARIES = libgbm.la

libgbm_la_SOURCES =	\
	gbm.c

libgbm_la_CFLAGS =	\
	-D_OS_UNIX=1

libgbm_la_LIBADD =	\
	-lpvrGBMWSEGL

libgbm_la_LDFLAGS = -version-info 1:0:0

extdir = $(includedir)/gbm
ext_HEADERS =		\
	gbm.h		\
	gbmint.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = gbm.pc
