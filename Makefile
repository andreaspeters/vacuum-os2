#############################################################################
# Makefile for building: vacuum
# Generated by qmake (2.01a) (Qt 4.7.3) on: Sat Jan 26 00:35:03 2013
# Project:  vacuum.pro
# Template: subdirs
# Command: u:\usr\bin\qmake.exe -o Makefile vacuum.pro
#############################################################################

null :=
space := $(null) # end of the line
# function to change DOS-like space escaping to Unix-like
q = $(subst %,\%,$(subst ;,\;,$(subst &,\&,$(subst +,\+,$(subst $(space),\ ,$(subst ",,$(1)))))))

QMAKESPECDIR  = "..\..\usr\share\qt4\mkspecs\os2-g++"

first: make_default
MAKEFILE      = Makefile
QMAKE         = u:\usr\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = $(QMAKESPECDIR)\mkdir-p.cmd
COPY          = copy
COPY_FILE     = $(COPY)
COPY_DIR      = $(QMAKESPECDIR)\cpdir.cmd
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = $(QMAKESPECDIR)\mkdir-p.cmd
SUBTARGETS    =  \
		sub-src

src\$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) src $(MKDIR) src 
	cd src && $(QMAKE) u:\Projekte\vacuum\src\src.pro -o $(MAKEFILE)
sub-src-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) src $(MKDIR) src 
	cd src && $(QMAKE) u:\Projekte\vacuum\src\src.pro -o $(MAKEFILE)
sub-src: src\$(MAKEFILE) FORCE
	cd src && $(MAKE) -f $(MAKEFILE)
sub-src-make_default: src\$(MAKEFILE) FORCE
	cd src && $(MAKE) -f $(MAKEFILE) 
sub-src-make_first: src\$(MAKEFILE) FORCE
	cd src && $(MAKE) -f $(MAKEFILE) first
sub-src-all: src\$(MAKEFILE) FORCE
	cd src && $(MAKE) -f $(MAKEFILE) all
sub-src-clean: src\$(MAKEFILE) FORCE
	cd src && $(MAKE) -f $(MAKEFILE) clean
sub-src-distclean: src\$(MAKEFILE) FORCE
	cd src && $(MAKE) -f $(MAKEFILE) distclean
sub-src-install_subtargets: src\$(MAKEFILE) FORCE
	cd src && $(MAKE) -f $(MAKEFILE) install
sub-src-uninstall_subtargets: src\$(MAKEFILE) FORCE
	cd src && $(MAKE) -f $(MAKEFILE) uninstall

Makefile: vacuum.pro  ..\..\usr\share\qt4\mkspecs\os2-g++\qmake.conf ..\..\usr\share\qt4\mkspecs\qconfig.pri \
		..\..\usr\share\qt4\mkspecs\modules\qt_webkit_version.pri \
		..\..\usr\share\qt4\mkspecs\features\qt_functions.prf \
		..\..\usr\share\qt4\mkspecs\features\qt_config.prf \
		..\..\usr\share\qt4\mkspecs\features\exclusive_builds.prf \
		..\..\usr\share\qt4\mkspecs\features\default_pre.prf \
		..\..\usr\share\qt4\mkspecs\features\os2\default_pre.prf \
		..\..\usr\share\qt4\mkspecs\features\release.prf \
		..\..\usr\share\qt4\mkspecs\features\shared.prf \
		..\..\usr\share\qt4\mkspecs\features\default_post.prf \
		..\..\usr\share\qt4\mkspecs\features\os2\default_post.prf \
		..\..\usr\share\qt4\mkspecs\features\os2\windows.prf \
		..\..\usr\share\qt4\mkspecs\features\os2\highmem.prf \
		..\..\usr\share\qt4\mkspecs\features\os2\exepack.prf \
		..\..\usr\share\qt4\mkspecs\features\os2\sym.prf \
		..\..\usr\share\qt4\mkspecs\features\warn_on.prf \
		..\..\usr\share\qt4\mkspecs\features\qt.prf \
		..\..\usr\share\qt4\mkspecs\features\moc.prf \
		..\..\usr\share\qt4\mkspecs\features\resources.prf \
		..\..\usr\share\qt4\mkspecs\features\uic.prf \
		..\..\usr\share\qt4\mkspecs\features\yacc.prf \
		..\..\usr\share\qt4\mkspecs\features\lex.prf \
		..\..\usr\share\qt4\mkspecs\features\include_source_dir.prf
	$(QMAKE) -o Makefile vacuum.pro
..\..\usr\share\qt4\mkspecs\qconfig.pri:
..\..\usr\share\qt4\mkspecs\modules\qt_webkit_version.pri:
..\..\usr\share\qt4\mkspecs\features\qt_functions.prf:
..\..\usr\share\qt4\mkspecs\features\qt_config.prf:
..\..\usr\share\qt4\mkspecs\features\exclusive_builds.prf:
..\..\usr\share\qt4\mkspecs\features\default_pre.prf:
..\..\usr\share\qt4\mkspecs\features\os2\default_pre.prf:
..\..\usr\share\qt4\mkspecs\features\release.prf:
..\..\usr\share\qt4\mkspecs\features\shared.prf:
..\..\usr\share\qt4\mkspecs\features\default_post.prf:
..\..\usr\share\qt4\mkspecs\features\os2\default_post.prf:
..\..\usr\share\qt4\mkspecs\features\os2\windows.prf:
..\..\usr\share\qt4\mkspecs\features\os2\highmem.prf:
..\..\usr\share\qt4\mkspecs\features\os2\exepack.prf:
..\..\usr\share\qt4\mkspecs\features\os2\sym.prf:
..\..\usr\share\qt4\mkspecs\features\warn_on.prf:
..\..\usr\share\qt4\mkspecs\features\qt.prf:
..\..\usr\share\qt4\mkspecs\features\moc.prf:
..\..\usr\share\qt4\mkspecs\features\resources.prf:
..\..\usr\share\qt4\mkspecs\features\uic.prf:
..\..\usr\share\qt4\mkspecs\features\yacc.prf:
..\..\usr\share\qt4\mkspecs\features\lex.prf:
..\..\usr\share\qt4\mkspecs\features\include_source_dir.prf:
qmake: qmake_all FORCE
	@$(QMAKE) -o Makefile vacuum.pro

qmake_all: sub-src-qmake_all FORCE

make_default: sub-src-make_default FORCE
make_first: sub-src-make_first FORCE
all: sub-src-all FORCE
clean: sub-src-clean FORCE

distclean: sub-src-distclean FORCE
	-$(DEL_FILE) Makefile >nul 2>&1
install_subtargets: sub-src-install_subtargets FORCE
uninstall_subtargets: sub-src-uninstall_subtargets FORCE

sub-src-check: src\$(MAKEFILE)
	cd src && $(MAKE) -f $(MAKEFILE) check
check: sub-src-check

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all
install: install_subtargets  FORCE

uninstall:  uninstall_subtargets FORCE

FORCE:

