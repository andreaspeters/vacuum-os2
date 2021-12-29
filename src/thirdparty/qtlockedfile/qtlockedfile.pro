include(../../config.inc)

TARGET         = qtlockedfile
os2: TARGET_SHORT = qtlock
TEMPLATE       = lib
CONFIG        += staticlib warn_off
DESTDIR        = ../../libs
include(qtlockedfile.pri)
