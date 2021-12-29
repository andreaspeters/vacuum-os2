include(../../config.inc)

TARGET         = qxtglobalshortcut
os2: TARGET_SHORT = qtxglo
TEMPLATE       = lib
CONFIG        += staticlib warn_off
DESTDIR        = ../../libs
DEFINES       += QXT_STATIC
include(qxtglobalshortcut.pri)
