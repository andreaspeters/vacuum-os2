#############################################################################
# Makefile for building: normalmessagehandler
# Generated by qmake (2.01a) (Qt 4.7.3) on: Sat Jan 26 00:34:40 2013
# Project:  normalmessagehandler.pro
# Template: lib
# Command: u:\usr\bin\qmake.exe -o Makefile normalmessagehandler.pro
#############################################################################

null :=
space := $(null) # end of the line
# function to change DOS-like space escaping to Unix-like
q = $(subst %,\%,$(subst ;,\;,$(subst &,\&,$(subst +,\+,$(subst $(space),\ ,$(subst ",,$(1)))))))

QMAKESPECDIR  = "u:\usr\share\qt4\mkspecs\os2-g++"
MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DPLUGINS_DIR=\"././plugins\" -DRESOURCES_DIR=\"././resources\" -DTRANSLATIONS_DIR=\"././translations\" -DQT_NO_DEBUG -DQT_PLUGIN -DQT_XML_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_HAVE_MMX -DQT_HAVE_3DNOW -DQT_HAVE_SSE -DQT_HAVE_MMXEXT -DQT_HAVE_SSE2
CFLAGS        = -Zomf -march=i486 -mtune=generic -s -O2 -Wall $(DEFINES)
CXXFLAGS      = -Zomf -march=i486 -mtune=generic -s -O2 -Wall $(DEFINES)
INCPATH       = -Iu:\usr\include\QtCore -Iu:\usr\include\QtNetwork -Iu:\usr\include\QtGui -Iu:\usr\include\QtXml -Iu:\usr\include -I..\.. -I. -I. -I$(QMAKESPECDIR)
INCLUDEPATH   = u:\usr\include\QtCore;u:\usr\include\QtNetwork;u:\usr\include\QtGui;u:\usr\include\QtXml;u:\usr\include;..\..;.;.;$(QMAKESPECDIR)
LINK          = g++
LFLAGS        = -Zomf -Zstack 0x2000 -Zdll -Zhigh-mem -Zmap
LIBS          = -Lu:\usr\lib -L..\..\libs -lvacuumu.a -lQtXml4 -lQtGui4 -lQtNetwork4 -lQtCore4
QMAKE         = u:\usr\bin\qmake.exe
IDC           = u:\usr\lib\qt4\bin\idc.exe
IDL           = midl
RC            = rc
ZIP           = zip -r -9
COPY          = copy
COPY_FILE     = $(COPY)
COPY_DIR      = $(QMAKESPECDIR)\cpdir.cmd
DEL_FILE      = del
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = $(QMAKESPECDIR)\mkdir-p.cmd
INSTALL_FILE    = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR     = $(COPY_DIR)

####### Output directory

OBJECTS_DIR   = .

####### Files

SOURCES       = normalmessagehandler.cpp moc_normalmessagehandler.cpp
OBJECTS       = normalmessagehandler.obj \
		moc_normalmessagehandler.obj
OBJECTS_RSP   = OBJECTS.normalmessagehandler.rsp
CFLAGS_RSP    = CFLAGS.normalmessagehandler.rsp
CXXFLAGS_RSP  = CXXFLAGS.normalmessagehandler.rsp
DEFINES_RSP   = DEFINES.normalmessagehandler.rsp
INCPATH_RSP   = INCPATH.normalmessagehandler.rsp
DEF_FILE      = $(basename $(DESTDIR_TARGET)).def
TARGET_IMPLIB = $(DESTDIR)\normalmessagehandler.lib
DIST          = 
QMAKE_TARGET  = normalmessagehandler
DESTDIR        = 
TARGET         = normm.dll
DESTDIR_TARGET = normm.dll

####### Implicit rules

.SUFFIXES: .cpp .cc .cxx .c

.cpp.obj:
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o $@ $<

.cc.obj:
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o $@ $<

.cxx.obj:
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o $@ $<

.c.obj:
	$(CC) -c @$(CFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o $@ $<

####### Build rules

first: all
all: Makefile  $(call q,$(TARGET_IMPLIB))  $(call q,$(DESTDIR_TARGET))

$(call q,$(DESTDIR_TARGET)):  $(OBJECTS) build_qm $(call q,$(DEF_FILE))
	$(LINK) $(LFLAGS) -o $(DESTDIR_TARGET) $(DEF_FILE) -Wl,@$(OBJECTS_RSP) $(LIBS)
	lxlite /B- /L- /CS $@
ifndef FAST_BUILD
	$(QMAKESPECDIR)\runmapsym.cmd $(QMAKESPECDIR)\wmapsym.cmd $(basename $(DESTDIR_TARGET)).map $(basename $(DESTDIR_TARGET)).sym
	$(DEL_FILE) $(basename $(DESTDIR_TARGET)).map
endif


Makefile: normalmessagehandler.pro  u:\usr\share\qt4\mkspecs\os2-g++\qmake.conf u:\usr\share\qt4\mkspecs\qconfig.pri \
		u:\usr\share\qt4\mkspecs\modules\qt_webkit_version.pri \
		u:\usr\share\qt4\mkspecs\features\qt_functions.prf \
		u:\usr\share\qt4\mkspecs\features\qt_config.prf \
		u:\usr\share\qt4\mkspecs\features\exclusive_builds.prf \
		u:\usr\share\qt4\mkspecs\features\default_pre.prf \
		u:\usr\share\qt4\mkspecs\features\os2\default_pre.prf \
		normalmessagehandler.pri \
		..\..\make\config.inc \
		..\..\make\translations.inc \
		..\..\translations\languages.inc \
		..\plugins.inc \
		u:\usr\share\qt4\mkspecs\features\release.prf \
		u:\usr\share\qt4\mkspecs\features\shared.prf \
		u:\usr\share\qt4\mkspecs\features\default_post.prf \
		u:\usr\share\qt4\mkspecs\features\os2\default_post.prf \
		u:\usr\share\qt4\mkspecs\features\dll.prf \
		u:\usr\share\qt4\mkspecs\features\os2\windows.prf \
		u:\usr\share\qt4\mkspecs\features\os2\highmem.prf \
		u:\usr\share\qt4\mkspecs\features\os2\exepack.prf \
		u:\usr\share\qt4\mkspecs\features\os2\sym.prf \
		u:\usr\share\qt4\mkspecs\features\warn_on.prf \
		u:\usr\share\qt4\mkspecs\features\qt.prf \
		u:\usr\share\qt4\mkspecs\features\moc.prf \
		u:\usr\share\qt4\mkspecs\features\resources.prf \
		u:\usr\share\qt4\mkspecs\features\uic.prf \
		u:\usr\share\qt4\mkspecs\features\yacc.prf \
		u:\usr\share\qt4\mkspecs\features\lex.prf \
		u:\usr\share\qt4\mkspecs\features\include_source_dir.prf
	$(QMAKE) -o Makefile normalmessagehandler.pro
u:\usr\share\qt4\mkspecs\qconfig.pri:
u:\usr\share\qt4\mkspecs\modules\qt_webkit_version.pri:
u:\usr\share\qt4\mkspecs\features\qt_functions.prf:
u:\usr\share\qt4\mkspecs\features\qt_config.prf:
u:\usr\share\qt4\mkspecs\features\exclusive_builds.prf:
u:\usr\share\qt4\mkspecs\features\default_pre.prf:
u:\usr\share\qt4\mkspecs\features\os2\default_pre.prf:
normalmessagehandler.pri:
..\..\make\config.inc:
..\..\make\translations.inc:
..\..\translations\languages.inc:
..\plugins.inc:
u:\usr\share\qt4\mkspecs\features\release.prf:
u:\usr\share\qt4\mkspecs\features\shared.prf:
u:\usr\share\qt4\mkspecs\features\default_post.prf:
u:\usr\share\qt4\mkspecs\features\os2\default_post.prf:
u:\usr\share\qt4\mkspecs\features\dll.prf:
u:\usr\share\qt4\mkspecs\features\os2\windows.prf:
u:\usr\share\qt4\mkspecs\features\os2\highmem.prf:
u:\usr\share\qt4\mkspecs\features\os2\exepack.prf:
u:\usr\share\qt4\mkspecs\features\os2\sym.prf:
u:\usr\share\qt4\mkspecs\features\warn_on.prf:
u:\usr\share\qt4\mkspecs\features\qt.prf:
u:\usr\share\qt4\mkspecs\features\moc.prf:
u:\usr\share\qt4\mkspecs\features\resources.prf:
u:\usr\share\qt4\mkspecs\features\uic.prf:
u:\usr\share\qt4\mkspecs\features\yacc.prf:
u:\usr\share\qt4\mkspecs\features\lex.prf:
u:\usr\share\qt4\mkspecs\features\include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -o Makefile normalmessagehandler.pro

dist:
	$(ZIP) normalmessagehandler.zip $(SOURCES) $(DIST) ..\..\..\vacuum.pro u:\usr\share\qt4\mkspecs\qconfig.pri u:\usr\share\qt4\mkspecs\modules\qt_webkit_version.pri u:\usr\share\qt4\mkspecs\features\qt_functions.prf u:\usr\share\qt4\mkspecs\features\qt_config.prf u:\usr\share\qt4\mkspecs\features\exclusive_builds.prf u:\usr\share\qt4\mkspecs\features\default_pre.prf u:\usr\share\qt4\mkspecs\features\os2\default_pre.prf normalmessagehandler.pri ..\..\make\config.inc ..\..\make\translations.inc ..\..\translations\languages.inc ..\plugins.inc u:\usr\share\qt4\mkspecs\features\release.prf u:\usr\share\qt4\mkspecs\features\shared.prf u:\usr\share\qt4\mkspecs\features\default_post.prf u:\usr\share\qt4\mkspecs\features\os2\default_post.prf u:\usr\share\qt4\mkspecs\features\dll.prf u:\usr\share\qt4\mkspecs\features\os2\windows.prf u:\usr\share\qt4\mkspecs\features\os2\highmem.prf u:\usr\share\qt4\mkspecs\features\os2\exepack.prf u:\usr\share\qt4\mkspecs\features\os2\sym.prf u:\usr\share\qt4\mkspecs\features\warn_on.prf u:\usr\share\qt4\mkspecs\features\qt.prf u:\usr\share\qt4\mkspecs\features\moc.prf u:\usr\share\qt4\mkspecs\features\resources.prf u:\usr\share\qt4\mkspecs\features\uic.prf u:\usr\share\qt4\mkspecs\features\yacc.prf u:\usr\share\qt4\mkspecs\features\lex.prf u:\usr\share\qt4\mkspecs\features\include_source_dir.prf ..\..\translations\en\normalmessagehandler.ts ..\..\translations\ru\normalmessagehandler.ts ..\..\translations\pl\normalmessagehandler.ts ..\..\translations\de\normalmessagehandler.ts ..\..\translations\uk\normalmessagehandler.ts HEADERS RESOURCES IMAGES SOURCES OBJECTIVE_SOURCES FORMS YACCSOURCES YACCSOURCES LEXSOURCES 

clean: compiler_clean 
	-$(DEL_FILE) normalmessagehandler.obj moc_normalmessagehandler.obj >nul 2>&1
	-$(DEL_FILE) $(TARGET_IMPLIB) $(DEF_FILE) $(basename $(DESTDIR_TARGET)).sym >nul 2>&1

distclean: clean
	-$(DEL_FILE) u:\Projekte\vacuum\src\translations\ru\normalmessagehandler.qm u:\Projekte\vacuum\src\translations\pl\normalmessagehandler.qm u:\Projekte\vacuum\src\translations\de\normalmessagehandler.qm u:\Projekte\vacuum\src\translations\uk\normalmessagehandler.qm $(OBJECTS_RSP) $(CFLAGS_RSP) $(CXXFLAGS_RSP) $(DEFINES_RSP) $(INCPATH_RSP) >nul 2>&1
	-$(DEL_FILE) $(DESTDIR_TARGET) >nul 2>&1
	-$(DEL_FILE) Makefile >nul 2>&1

u:\Projekte\vacuum\src\translations\ru\normalmessagehandler.qm: u:\Projekte\vacuum\src\translations\ru\normalmessagehandler.ts
	u:\usr\lib\qt4\bin\lrelease -compress U:/Projekte/vacuum/src/plugins/normalmessagehandler/../../translations/ru/normalmessagehandler.ts -qm U:/Projekte/vacuum/src/plugins/normalmessagehandler/../../translations/ru/normalmessagehandler.qm

u:\Projekte\vacuum\src\translations\pl\normalmessagehandler.qm: u:\Projekte\vacuum\src\translations\pl\normalmessagehandler.ts
	u:\usr\lib\qt4\bin\lrelease -compress U:/Projekte/vacuum/src/plugins/normalmessagehandler/../../translations/pl/normalmessagehandler.ts -qm U:/Projekte/vacuum/src/plugins/normalmessagehandler/../../translations/pl/normalmessagehandler.qm

u:\Projekte\vacuum\src\translations\de\normalmessagehandler.qm: u:\Projekte\vacuum\src\translations\de\normalmessagehandler.ts
	u:\usr\lib\qt4\bin\lrelease -compress U:/Projekte/vacuum/src/plugins/normalmessagehandler/../../translations/de/normalmessagehandler.ts -qm U:/Projekte/vacuum/src/plugins/normalmessagehandler/../../translations/de/normalmessagehandler.qm

u:\Projekte\vacuum\src\translations\uk\normalmessagehandler.qm: u:\Projekte\vacuum\src\translations\uk\normalmessagehandler.ts
	u:\usr\lib\qt4\bin\lrelease -compress U:/Projekte/vacuum/src/plugins/normalmessagehandler/../../translations/uk/normalmessagehandler.ts -qm U:/Projekte/vacuum/src/plugins/normalmessagehandler/../../translations/uk/normalmessagehandler.qm

build_qm: u:\Projekte\vacuum\src\translations\ru\normalmessagehandler.qm u:\Projekte\vacuum\src\translations\pl\normalmessagehandler.qm u:\Projekte\vacuum\src\translations\de\normalmessagehandler.qm u:\Projekte\vacuum\src\translations\uk\normalmessagehandler.qm

check: first

$(call q,$(TARGET_IMPLIB)): $(call q,$(DESTDIR_TARGET))
	emximp -p 128 -o $@ $<

$(call q,$(DEF_FILE)): $(call q,$(MAKEFILE))
	$(QMAKESPECDIR)\emxexpw.cmd -name $(basename $(TARGET)) -def $(DEF_FILE) $(if $(DEF_FILE_VERSION),-version "$(DEF_FILE_VERSION)") $(if $(DEF_FILE_DESCRIPTION),-desc "$(DEF_FILE_DESCRIPTION)") $(if $(DEF_FILE_VENDOR),-vendor "$(DEF_FILE_VENDOR)") $(if $(DEF_FILE_TEMPLATE),-template "$(DEF_FILE_TEMPLATE)")

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_normalmessagehandler.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_normalmessagehandler.cpp >nul 2>&1
moc_normalmessagehandler.cpp: ..\..\definitions\messagehandlerorders.h \
		..\..\definitions\rosterindextyperole.h \
		..\..\definitions\rosternotifyorders.h \
		..\..\definitions\recentitemtypes.h \
		..\..\definitions\notificationtypes.h \
		..\..\definitions\notificationdataroles.h \
		..\..\definitions\notificationtypeorders.h \
		..\..\definitions\tabpagenotifypriorities.h \
		..\..\definitions\messagedataroles.h \
		..\..\definitions\actiongroups.h \
		..\..\definitions\resources.h \
		..\..\definitions\menuicons.h \
		..\..\definitions\soundfiles.h \
		..\..\definitions\shortcuts.h \
		..\..\definitions\optionvalues.h \
		..\..\definitions\optionnodes.h \
		..\..\definitions\optionwidgetorders.h \
		..\..\definitions\xmppurihandlerorders.h \
		..\..\interfaces\ipluginmanager.h \
		..\..\interfaces\imessageprocessor.h \
		..\..\interfaces\irostersmodel.h \
		..\..\utils\jid.h \
		..\..\utils\utilsexport.h \
		..\..\interfaces\inotifications.h \
		..\..\utils\message.h \
		..\..\utils\stanza.h \
		..\..\utils\datetime.h \
		..\..\interfaces\imessagewidgets.h \
		..\..\interfaces\imainwindow.h \
		..\..\utils\menu.h \
		..\..\utils\action.h \
		..\..\utils\shortcuts.h \
		..\..\utils\iconstorage.h \
		..\..\utils\filestorage.h \
		..\..\utils\menubarchanger.h \
		..\..\utils\toolbarchanger.h \
		..\..\interfaces\imessagestyles.h \
		..\..\interfaces\ioptionsmanager.h \
		..\..\utils\options.h \
		..\..\utils\statusbarchanger.h \
		..\..\interfaces\istatusicons.h \
		..\..\interfaces\irostersview.h \
		..\..\utils\advanceditemdelegate.h \
		..\..\interfaces\ipresence.h \
		..\..\interfaces\ixmppstreams.h \
		..\..\utils\xmpperror.h \
		..\..\interfaces\iroster.h \
		..\..\interfaces\ixmppuriqueries.h \
		..\..\interfaces\irecentcontacts.h \
		..\..\utils\widgetmanager.h \
		..\..\utils\textmanager.h \
		normalmessagehandler.h
	u:\usr\lib\qt4\bin\moc.exe @$(DEFINES_RSP) @$(INCPATH_RSP) -D__OS2__ -D__EMX__ -D__INNOTEK_LIBC__ -D__GNUC__ normalmessagehandler.h -o moc_normalmessagehandler.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp >nul 2>&1
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 



####### Compile

normalmessagehandler.obj: normalmessagehandler.cpp normalmessagehandler.h \
		..\..\definitions\messagehandlerorders.h \
		..\..\definitions\rosterindextyperole.h \
		..\..\definitions\rosternotifyorders.h \
		..\..\definitions\recentitemtypes.h \
		..\..\definitions\notificationtypes.h \
		..\..\definitions\notificationdataroles.h \
		..\..\definitions\notificationtypeorders.h \
		..\..\definitions\tabpagenotifypriorities.h \
		..\..\definitions\messagedataroles.h \
		..\..\definitions\actiongroups.h \
		..\..\definitions\resources.h \
		..\..\definitions\menuicons.h \
		..\..\definitions\soundfiles.h \
		..\..\definitions\shortcuts.h \
		..\..\definitions\optionvalues.h \
		..\..\definitions\optionnodes.h \
		..\..\definitions\optionwidgetorders.h \
		..\..\definitions\xmppurihandlerorders.h \
		..\..\interfaces\ipluginmanager.h \
		..\..\interfaces\imessageprocessor.h \
		..\..\interfaces\irostersmodel.h \
		..\..\utils\jid.h \
		..\..\utils\utilsexport.h \
		..\..\interfaces\inotifications.h \
		..\..\utils\message.h \
		..\..\utils\stanza.h \
		..\..\utils\datetime.h \
		..\..\interfaces\imessagewidgets.h \
		..\..\interfaces\imainwindow.h \
		..\..\utils\menu.h \
		..\..\utils\action.h \
		..\..\utils\shortcuts.h \
		..\..\utils\iconstorage.h \
		..\..\utils\filestorage.h \
		..\..\utils\menubarchanger.h \
		..\..\utils\toolbarchanger.h \
		..\..\interfaces\imessagestyles.h \
		..\..\interfaces\ioptionsmanager.h \
		..\..\utils\options.h \
		..\..\utils\statusbarchanger.h \
		..\..\interfaces\istatusicons.h \
		..\..\interfaces\irostersview.h \
		..\..\utils\advanceditemdelegate.h \
		..\..\interfaces\ipresence.h \
		..\..\interfaces\ixmppstreams.h \
		..\..\utils\xmpperror.h \
		..\..\interfaces\iroster.h \
		..\..\interfaces\ixmppuriqueries.h \
		..\..\interfaces\irecentcontacts.h \
		..\..\utils\widgetmanager.h \
		..\..\utils\textmanager.h
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o normalmessagehandler.obj normalmessagehandler.cpp

moc_normalmessagehandler.obj: moc_normalmessagehandler.cpp 
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o moc_normalmessagehandler.obj moc_normalmessagehandler.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\plugins $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\plugins 
	$(INSTALL_FILE) "$(DESTDIR_TARGET)" "$(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\vacuum\plugins\$(TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\vacuum\plugins\$(TARGET)" >nul 2>&1
	-$(DEL_DIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\vacuum\plugins  >nul 2>&1


install_qm_normalmessagehandler_inst_ru: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\translations\ru $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\translations\ru 
	-$(INSTALL_FILE) "U:\Projekte\vacuum\src\plugins\normalmessagehandler\..\..\translations\ru\normalmessagehandler.qm" "$(INSTALL_ROOT).\vacuum\.\translations\ru"



install_qm_normalmessagehandler_inst_pl: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\translations\pl $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\translations\pl 
	-$(INSTALL_FILE) "U:\Projekte\vacuum\src\plugins\normalmessagehandler\..\..\translations\pl\normalmessagehandler.qm" "$(INSTALL_ROOT).\vacuum\.\translations\pl"



install_qm_normalmessagehandler_inst_de: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\translations\de $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\translations\de 
	-$(INSTALL_FILE) "U:\Projekte\vacuum\src\plugins\normalmessagehandler\..\..\translations\de\normalmessagehandler.qm" "$(INSTALL_ROOT).\vacuum\.\translations\de"



install_qm_normalmessagehandler_inst_uk: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\translations\uk $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\translations\uk 
	-$(INSTALL_FILE) "U:\Projekte\vacuum\src\plugins\normalmessagehandler\..\..\translations\uk\normalmessagehandler.qm" "$(INSTALL_ROOT).\vacuum\.\translations\uk"



install_target_debuginfo: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\plugins $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\.\vacuum\.\plugins 
	$(INSTALL_FILE) $(basename $(DESTDIR_TARGET)).sym $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\vacuum\plugins


uninstall_target_debuginfo:  FORCE
	-$(DEL_FILE) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\vacuum\plugins\$(basename $(DESTDIR_TARGET)).sym >nul 2>&1
	-$(DEL_DIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\normalmessagehandler\vacuum\plugins  >nul 2>&1


install:  install_target install_qm_normalmessagehandler_inst_ru install_qm_normalmessagehandler_inst_pl install_qm_normalmessagehandler_inst_de install_qm_normalmessagehandler_inst_uk install_target_debuginfo  FORCE

uninstall: uninstall_target uninstall_target_debuginfo   FORCE

FORCE:

