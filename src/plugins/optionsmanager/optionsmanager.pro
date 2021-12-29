TARGET = optionsmanager 
os2: TARGET_SHORT = option
LIBS  += -L../../libs
LIBS  += -lqtlockedfile
include(optionsmanager.pri) 
include(../plugins.inc) 
