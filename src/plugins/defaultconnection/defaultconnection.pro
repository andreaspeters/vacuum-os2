TARGET = defaultconnection 
os2: TARGET_SHORT = defcon
include(defaultconnection.pri)
include(../plugins.inc)

include(../../thirdparty/jdns/jdns.pri)
DEPENDPATH  += ../../thirdparty/jdns
INCLUDEPATH += ../../thirdparty/jdns
