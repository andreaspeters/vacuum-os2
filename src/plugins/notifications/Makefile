#############################################################################
# Makefile for building: notifications
# Generated by qmake (2.01a) (Qt 4.7.3) on: Sat Jan 26 00:34:51 2013
# Project:  notifications.pro
# Template: lib
# Command: u:\usr\bin\qmake.exe -o Makefile notifications.pro
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

SOURCES       = notifications.cpp \
		notifywidget.cpp \
		notifyoptionswidget.cpp \
		notifytextbrowser.cpp moc_notifications.cpp \
		moc_notifywidget.cpp \
		moc_notifyoptionswidget.cpp \
		moc_notifytextbrowser.cpp
OBJECTS       = notifications.obj \
		notifywidget.obj \
		notifyoptionswidget.obj \
		notifytextbrowser.obj \
		moc_notifications.obj \
		moc_notifywidget.obj \
		moc_notifyoptionswidget.obj \
		moc_notifytextbrowser.obj
OBJECTS_RSP   = OBJECTS.notifications.rsp
CFLAGS_RSP    = CFLAGS.notifications.rsp
CXXFLAGS_RSP  = CXXFLAGS.notifications.rsp
DEFINES_RSP   = DEFINES.notifications.rsp
INCPATH_RSP   = INCPATH.notifications.rsp
DEF_FILE      = $(basename $(DESTDIR_TARGET)).def
TARGET_IMPLIB = $(DESTDIR)\notifications.lib
DIST          = 
QMAKE_TARGET  = notifications
DESTDIR        = 
TARGET         = notf.dll
DESTDIR_TARGET = notf.dll

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

$(call q,$(DESTDIR_TARGET)): ui_notifywidget.h ui_notifyoptionswidget.h $(OBJECTS) build_qm $(call q,$(DEF_FILE))
	$(LINK) $(LFLAGS) -o $(DESTDIR_TARGET) $(DEF_FILE) -Wl,@$(OBJECTS_RSP) $(LIBS)
	lxlite /B- /L- /CS $@
ifndef FAST_BUILD
	$(QMAKESPECDIR)\runmapsym.cmd $(QMAKESPECDIR)\wmapsym.cmd $(basename $(DESTDIR_TARGET)).map $(basename $(DESTDIR_TARGET)).sym
	$(DEL_FILE) $(basename $(DESTDIR_TARGET)).map
endif


Makefile: notifications.pro  u:\usr\share\qt4\mkspecs\os2-g++\qmake.conf u:\usr\share\qt4\mkspecs\qconfig.pri \
		u:\usr\share\qt4\mkspecs\modules\qt_webkit_version.pri \
		u:\usr\share\qt4\mkspecs\features\qt_functions.prf \
		u:\usr\share\qt4\mkspecs\features\qt_config.prf \
		u:\usr\share\qt4\mkspecs\features\exclusive_builds.prf \
		u:\usr\share\qt4\mkspecs\features\default_pre.prf \
		u:\usr\share\qt4\mkspecs\features\os2\default_pre.prf \
		notifications.pri \
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
	$(QMAKE) -o Makefile notifications.pro
u:\usr\share\qt4\mkspecs\qconfig.pri:
u:\usr\share\qt4\mkspecs\modules\qt_webkit_version.pri:
u:\usr\share\qt4\mkspecs\features\qt_functions.prf:
u:\usr\share\qt4\mkspecs\features\qt_config.prf:
u:\usr\share\qt4\mkspecs\features\exclusive_builds.prf:
u:\usr\share\qt4\mkspecs\features\default_pre.prf:
u:\usr\share\qt4\mkspecs\features\os2\default_pre.prf:
notifications.pri:
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
	@$(QMAKE) -o Makefile notifications.pro

dist:
	$(ZIP) notifications.zip $(SOURCES) $(DIST) ..\..\..\vacuum.pro u:\usr\share\qt4\mkspecs\qconfig.pri u:\usr\share\qt4\mkspecs\modules\qt_webkit_version.pri u:\usr\share\qt4\mkspecs\features\qt_functions.prf u:\usr\share\qt4\mkspecs\features\qt_config.prf u:\usr\share\qt4\mkspecs\features\exclusive_builds.prf u:\usr\share\qt4\mkspecs\features\default_pre.prf u:\usr\share\qt4\mkspecs\features\os2\default_pre.prf notifications.pri ..\..\make\config.inc ..\..\make\translations.inc ..\..\translations\languages.inc ..\plugins.inc u:\usr\share\qt4\mkspecs\features\release.prf u:\usr\share\qt4\mkspecs\features\shared.prf u:\usr\share\qt4\mkspecs\features\default_post.prf u:\usr\share\qt4\mkspecs\features\os2\default_post.prf u:\usr\share\qt4\mkspecs\features\dll.prf u:\usr\share\qt4\mkspecs\features\os2\windows.prf u:\usr\share\qt4\mkspecs\features\os2\highmem.prf u:\usr\share\qt4\mkspecs\features\os2\exepack.prf u:\usr\share\qt4\mkspecs\features\os2\sym.prf u:\usr\share\qt4\mkspecs\features\warn_on.prf u:\usr\share\qt4\mkspecs\features\qt.prf u:\usr\share\qt4\mkspecs\features\moc.prf u:\usr\share\qt4\mkspecs\features\resources.prf u:\usr\share\qt4\mkspecs\features\uic.prf u:\usr\share\qt4\mkspecs\features\yacc.prf u:\usr\share\qt4\mkspecs\features\lex.prf u:\usr\share\qt4\mkspecs\features\include_source_dir.prf ..\..\translations\en\notifications.ts ..\..\translations\ru\notifications.ts ..\..\translations\pl\notifications.ts ..\..\translations\de\notifications.ts ..\..\translations\uk\notifications.ts HEADERS RESOURCES IMAGES SOURCES OBJECTIVE_SOURCES FORMS YACCSOURCES YACCSOURCES LEXSOURCES 

clean: compiler_clean 
	-$(DEL_FILE) notifications.obj notifywidget.obj notifyoptionswidget.obj notifytextbrowser.obj moc_notifications.obj moc_notifywidget.obj moc_notifyoptionswidget.obj moc_notifytextbrowser.obj >nul 2>&1
	-$(DEL_FILE) $(TARGET_IMPLIB) $(DEF_FILE) $(basename $(DESTDIR_TARGET)).sym >nul 2>&1

distclean: clean
	-$(DEL_FILE) u:\Projekte\vacuum\src\translations\ru\notifications.qm u:\Projekte\vacuum\src\translations\pl\notifications.qm u:\Projekte\vacuum\src\translations\de\notifications.qm u:\Projekte\vacuum\src\translations\uk\notifications.qm $(OBJECTS_RSP) $(CFLAGS_RSP) $(CXXFLAGS_RSP) $(DEFINES_RSP) $(INCPATH_RSP) >nul 2>&1
	-$(DEL_FILE) $(DESTDIR_TARGET) >nul 2>&1
	-$(DEL_FILE) Makefile >nul 2>&1

u:\Projekte\vacuum\src\translations\ru\notifications.qm: u:\Projekte\vacuum\src\translations\ru\notifications.ts
	u:\usr\lib\qt4\bin\lrelease -compress U:/Projekte/vacuum/src/plugins/notifications/../../translations/ru/notifications.ts -qm U:/Projekte/vacuum/src/plugins/notifications/../../translations/ru/notifications.qm

u:\Projekte\vacuum\src\translations\pl\notifications.qm: u:\Projekte\vacuum\src\translations\pl\notifications.ts
	u:\usr\lib\qt4\bin\lrelease -compress U:/Projekte/vacuum/src/plugins/notifications/../../translations/pl/notifications.ts -qm U:/Projekte/vacuum/src/plugins/notifications/../../translations/pl/notifications.qm

u:\Projekte\vacuum\src\translations\de\notifications.qm: u:\Projekte\vacuum\src\translations\de\notifications.ts
	u:\usr\lib\qt4\bin\lrelease -compress U:/Projekte/vacuum/src/plugins/notifications/../../translations/de/notifications.ts -qm U:/Projekte/vacuum/src/plugins/notifications/../../translations/de/notifications.qm

u:\Projekte\vacuum\src\translations\uk\notifications.qm: u:\Projekte\vacuum\src\translations\uk\notifications.ts
	u:\usr\lib\qt4\bin\lrelease -compress U:/Projekte/vacuum/src/plugins/notifications/../../translations/uk/notifications.ts -qm U:/Projekte/vacuum/src/plugins/notifications/../../translations/uk/notifications.qm

build_qm: u:\Projekte\vacuum\src\translations\ru\notifications.qm u:\Projekte\vacuum\src\translations\pl\notifications.qm u:\Projekte\vacuum\src\translations\de\notifications.qm u:\Projekte\vacuum\src\translations\uk\notifications.qm

check: first

$(call q,$(TARGET_IMPLIB)): $(call q,$(DESTDIR_TARGET))
	emximp -p 128 -o $@ $<

$(call q,$(DEF_FILE)): $(call q,$(MAKEFILE))
	$(QMAKESPECDIR)\emxexpw.cmd -name $(basename $(TARGET)) -def $(DEF_FILE) $(if $(DEF_FILE_VERSION),-version "$(DEF_FILE_VERSION)") $(if $(DEF_FILE_DESCRIPTION),-desc "$(DEF_FILE_DESCRIPTION)") $(if $(DEF_FILE_VENDOR),-vendor "$(DEF_FILE_VENDOR)") $(if $(DEF_FILE_TEMPLATE),-template "$(DEF_FILE_TEMPLATE)")

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_notifications.cpp moc_notifywidget.cpp moc_notifyoptionswidget.cpp moc_notifytextbrowser.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_notifications.cpp moc_notifywidget.cpp moc_notifyoptionswidget.cpp moc_notifytextbrowser.cpp >nul 2>&1
moc_notifications.cpp: ..\..\definitions\notificationdataroles.h \
		..\..\definitions\actiongroups.h \
		..\..\definitions\toolbargroups.h \
		..\..\definitions\optionvalues.h \
		..\..\definitions\optionnodes.h \
		..\..\definitions\optionnodeorders.h \
		..\..\definitions\optionwidgetorders.h \
		..\..\definitions\resources.h \
		..\..\definitions\menuicons.h \
		..\..\definitions\shortcuts.h \
		..\..\interfaces\ipluginmanager.h \
		..\..\interfaces\inotifications.h \
		..\..\utils\jid.h \
		..\..\utils\utilsexport.h \
		..\..\interfaces\irostersview.h \
		..\..\interfaces\irostersmodel.h \
		..\..\utils\menu.h \
		..\..\utils\action.h \
		..\..\utils\shortcuts.h \
		..\..\utils\iconstorage.h \
		..\..\utils\filestorage.h \
		..\..\utils\advanceditemdelegate.h \
		..\..\interfaces\itraymanager.h \
		..\..\interfaces\iroster.h \
		..\..\interfaces\ixmppstreams.h \
		..\..\utils\stanza.h \
		..\..\utils\xmpperror.h \
		..\..\interfaces\iavatars.h \
		..\..\interfaces\istatusicons.h \
		..\..\interfaces\ipresence.h \
		..\..\interfaces\istatuschanger.h \
		..\..\interfaces\ioptionsmanager.h \
		..\..\utils\options.h \
		..\..\interfaces\imainwindow.h \
		..\..\utils\menubarchanger.h \
		..\..\utils\toolbarchanger.h \
		..\..\interfaces\imessagewidgets.h \
		..\..\interfaces\imessagestyles.h \
		..\..\utils\message.h \
		..\..\utils\datetime.h \
		..\..\utils\statusbarchanger.h \
		..\..\interfaces\iurlprocessor.h \
		..\..\utils\widgetmanager.h \
		notifywidget.h \
		..\..\utils\textmanager.h \
		ui_notifywidget.h \
		notifyoptionswidget.h \
		ui_notifyoptionswidget.h \
		notifications.h
	u:\usr\lib\qt4\bin\moc.exe @$(DEFINES_RSP) @$(INCPATH_RSP) -D__OS2__ -D__EMX__ -D__INNOTEK_LIBC__ -D__GNUC__ notifications.h -o moc_notifications.cpp

moc_notifywidget.cpp: ..\..\definitions\optionvalues.h \
		..\..\definitions\notificationdataroles.h \
		..\..\interfaces\inotifications.h \
		..\..\utils\jid.h \
		..\..\utils\utilsexport.h \
		..\..\interfaces\imainwindow.h \
		..\..\utils\menu.h \
		..\..\utils\action.h \
		..\..\utils\shortcuts.h \
		..\..\utils\iconstorage.h \
		..\..\utils\filestorage.h \
		..\..\utils\menubarchanger.h \
		..\..\utils\toolbarchanger.h \
		..\..\utils\message.h \
		..\..\utils\stanza.h \
		..\..\utils\datetime.h \
		..\..\utils\options.h \
		..\..\utils\textmanager.h \
		ui_notifywidget.h \
		notifywidget.h
	u:\usr\lib\qt4\bin\moc.exe @$(DEFINES_RSP) @$(INCPATH_RSP) -D__OS2__ -D__EMX__ -D__INNOTEK_LIBC__ -D__GNUC__ notifywidget.h -o moc_notifywidget.cpp

moc_notifyoptionswidget.cpp: ..\..\definitions\resources.h \
		..\..\definitions\menuicons.h \
		..\..\definitions\optionvalues.h \
		..\..\interfaces\inotifications.h \
		..\..\utils\jid.h \
		..\..\utils\utilsexport.h \
		..\..\interfaces\ioptionsmanager.h \
		..\..\utils\options.h \
		..\..\utils\iconstorage.h \
		..\..\utils\filestorage.h \
		ui_notifyoptionswidget.h \
		notifyoptionswidget.h
	u:\usr\lib\qt4\bin\moc.exe @$(DEFINES_RSP) @$(INCPATH_RSP) -D__OS2__ -D__EMX__ -D__INNOTEK_LIBC__ -D__GNUC__ notifyoptionswidget.h -o moc_notifyoptionswidget.cpp

moc_notifytextbrowser.cpp: ..\..\utils\animatedtextbrowser.h \
		..\..\utils\utilsexport.h \
		notifytextbrowser.h
	u:\usr\lib\qt4\bin\moc.exe @$(DEFINES_RSP) @$(INCPATH_RSP) -D__OS2__ -D__EMX__ -D__INNOTEK_LIBC__ -D__GNUC__ notifytextbrowser.h -o moc_notifytextbrowser.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp >nul 2>&1
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_notifywidget.h ui_notifyoptionswidget.h
compiler_uic_clean:
	-$(DEL_FILE) ui_notifywidget.h ui_notifyoptionswidget.h >nul 2>&1
ui_notifywidget.h: notifywidget.ui \
		notifytextbrowser.h \
		..\..\utils\animatedtextbrowser.h \
		..\..\utils\utilsexport.h
	u:\usr\lib\qt4\bin\uic.exe notifywidget.ui -o ui_notifywidget.h

ui_notifyoptionswidget.h: notifyoptionswidget.ui
	u:\usr\lib\qt4\bin\uic.exe notifyoptionswidget.ui -o ui_notifyoptionswidget.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 



####### Compile

notifications.obj: notifications.cpp notifications.h \
		..\..\definitions\notificationdataroles.h \
		..\..\definitions\actiongroups.h \
		..\..\definitions\toolbargroups.h \
		..\..\definitions\optionvalues.h \
		..\..\definitions\optionnodes.h \
		..\..\definitions\optionnodeorders.h \
		..\..\definitions\optionwidgetorders.h \
		..\..\definitions\resources.h \
		..\..\definitions\menuicons.h \
		..\..\definitions\shortcuts.h \
		..\..\interfaces\ipluginmanager.h \
		..\..\interfaces\inotifications.h \
		..\..\utils\jid.h \
		..\..\utils\utilsexport.h \
		..\..\interfaces\irostersview.h \
		..\..\interfaces\irostersmodel.h \
		..\..\utils\menu.h \
		..\..\utils\action.h \
		..\..\utils\shortcuts.h \
		..\..\utils\iconstorage.h \
		..\..\utils\filestorage.h \
		..\..\utils\advanceditemdelegate.h \
		..\..\interfaces\itraymanager.h \
		..\..\interfaces\iroster.h \
		..\..\interfaces\ixmppstreams.h \
		..\..\utils\stanza.h \
		..\..\utils\xmpperror.h \
		..\..\interfaces\iavatars.h \
		..\..\interfaces\istatusicons.h \
		..\..\interfaces\ipresence.h \
		..\..\interfaces\istatuschanger.h \
		..\..\interfaces\ioptionsmanager.h \
		..\..\utils\options.h \
		..\..\interfaces\imainwindow.h \
		..\..\utils\menubarchanger.h \
		..\..\utils\toolbarchanger.h \
		..\..\interfaces\imessagewidgets.h \
		..\..\interfaces\imessagestyles.h \
		..\..\utils\message.h \
		..\..\utils\datetime.h \
		..\..\utils\statusbarchanger.h \
		..\..\interfaces\iurlprocessor.h \
		..\..\utils\widgetmanager.h \
		notifywidget.h \
		..\..\utils\textmanager.h \
		ui_notifywidget.h \
		notifyoptionswidget.h \
		ui_notifyoptionswidget.h
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o notifications.obj notifications.cpp

notifywidget.obj: notifywidget.cpp notifywidget.h \
		..\..\definitions\optionvalues.h \
		..\..\definitions\notificationdataroles.h \
		..\..\interfaces\inotifications.h \
		..\..\utils\jid.h \
		..\..\utils\utilsexport.h \
		..\..\interfaces\imainwindow.h \
		..\..\utils\menu.h \
		..\..\utils\action.h \
		..\..\utils\shortcuts.h \
		..\..\utils\iconstorage.h \
		..\..\utils\filestorage.h \
		..\..\utils\menubarchanger.h \
		..\..\utils\toolbarchanger.h \
		..\..\utils\message.h \
		..\..\utils\stanza.h \
		..\..\utils\datetime.h \
		..\..\utils\options.h \
		..\..\utils\textmanager.h \
		ui_notifywidget.h
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o notifywidget.obj notifywidget.cpp

notifyoptionswidget.obj: notifyoptionswidget.cpp notifyoptionswidget.h \
		..\..\definitions\resources.h \
		..\..\definitions\menuicons.h \
		..\..\definitions\optionvalues.h \
		..\..\interfaces\inotifications.h \
		..\..\utils\jid.h \
		..\..\utils\utilsexport.h \
		..\..\interfaces\ioptionsmanager.h \
		..\..\utils\options.h \
		..\..\utils\iconstorage.h \
		..\..\utils\filestorage.h \
		ui_notifyoptionswidget.h
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o notifyoptionswidget.obj notifyoptionswidget.cpp

notifytextbrowser.obj: notifytextbrowser.cpp notifytextbrowser.h \
		..\..\utils\animatedtextbrowser.h \
		..\..\utils\utilsexport.h
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o notifytextbrowser.obj notifytextbrowser.cpp

moc_notifications.obj: moc_notifications.cpp 
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o moc_notifications.obj moc_notifications.cpp

moc_notifywidget.obj: moc_notifywidget.cpp 
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o moc_notifywidget.obj moc_notifywidget.cpp

moc_notifyoptionswidget.obj: moc_notifyoptionswidget.cpp 
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o moc_notifyoptionswidget.obj moc_notifyoptionswidget.cpp

moc_notifytextbrowser.obj: moc_notifytextbrowser.cpp 
	$(CXX) -c @$(CXXFLAGS_RSP) @$(DEFINES_RSP) @$(INCPATH_RSP) -o moc_notifytextbrowser.obj moc_notifytextbrowser.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\plugins $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\plugins 
	$(INSTALL_FILE) "$(DESTDIR_TARGET)" "$(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\vacuum\plugins\$(TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\vacuum\plugins\$(TARGET)" >nul 2>&1
	-$(DEL_DIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\vacuum\plugins  >nul 2>&1


install_qm_notifications_inst_ru: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\translations\ru $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\translations\ru 
	-$(INSTALL_FILE) "U:\Projekte\vacuum\src\plugins\notifications\..\..\translations\ru\notifications.qm" "$(INSTALL_ROOT).\vacuum\.\translations\ru"



install_qm_notifications_inst_pl: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\translations\pl $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\translations\pl 
	-$(INSTALL_FILE) "U:\Projekte\vacuum\src\plugins\notifications\..\..\translations\pl\notifications.qm" "$(INSTALL_ROOT).\vacuum\.\translations\pl"



install_qm_notifications_inst_de: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\translations\de $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\translations\de 
	-$(INSTALL_FILE) "U:\Projekte\vacuum\src\plugins\notifications\..\..\translations\de\notifications.qm" "$(INSTALL_ROOT).\vacuum\.\translations\de"



install_qm_notifications_inst_uk: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\translations\uk $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\translations\uk 
	-$(INSTALL_FILE) "U:\Projekte\vacuum\src\plugins\notifications\..\..\translations\uk\notifications.qm" "$(INSTALL_ROOT).\vacuum\.\translations\uk"



install_target_debuginfo: first FORCE
	@$(CHK_DIR_EXISTS) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\plugins $(MKDIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\.\vacuum\.\plugins 
	$(INSTALL_FILE) $(basename $(DESTDIR_TARGET)).sym $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\vacuum\plugins


uninstall_target_debuginfo:  FORCE
	-$(DEL_FILE) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\vacuum\plugins\$(basename $(DESTDIR_TARGET)).sym >nul 2>&1
	-$(DEL_DIR) $(if $(INSTALL_ROOT),$(INSTALL_ROOT),u:)\Projekte\vacuum\src\plugins\notifications\vacuum\plugins  >nul 2>&1


install:  install_target install_qm_notifications_inst_ru install_qm_notifications_inst_pl install_qm_notifications_inst_de install_qm_notifications_inst_uk install_target_debuginfo  FORCE

uninstall: uninstall_target uninstall_target_debuginfo   FORCE

FORCE:

