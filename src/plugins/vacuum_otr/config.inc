#Configurable values
isEmpty(INSTALL_PREFIX) {
  win32:INSTALL_PREFIX   = "c:"
  unix: INSTALL_PREFIX   = /usr/local
  macx: INSTALL_PREFIX   = /Applications
}

isEmpty(INSTALL_APP_DIR) {
  win32:INSTALL_APP_DIR  = vacuum
  unix: INSTALL_APP_DIR  = vacuum
  macx: INSTALL_APP_DIR  = vacuum.app
}

isEmpty(INSTALL_LIB_DIR) {
  win32:INSTALL_LIB_DIR  = .
  unix:!macx {
    INSTALL_LIB_DIR      = lib
  }
  macx: INSTALL_LIB_DIR  = Frameworks
}

isEmpty(INSTALL_RES_DIR) {
  win32:INSTALL_RES_DIR  = .
  unix: INSTALL_RES_DIR  = share
  macx: INSTALL_RES_DIR  = Resources
}

#Path to biulded Vacuum src direcroty
isEmpty(VACUUM_SOURCE_PATH) {
  VACUUM_SOURCE_PATH=$$(VACUUM_SOURCE_PATH)
  isEmpty(VACUUM_SOURCE_PATH) {
#    VACUUM_SOURCE_PATH               = ../../vacuum-im
#    message( "No custom source path." )
  }
}

isEmpty(VACUUM_BUILD_PATH) {
  VACUUM_BUILD_PATH=$$(VACUUM_BUILD_PATH)
  isEmpty(VACUUM_BUILD_PATH) {
#    VACUUM_BUILD_PATH               = ../../vacuum-build
#    message( "No custom build path." )
  }
}

#Debug Features
!isEmpty(VACUUM_BUILD_PATH) {
    CONFIG(debug, debug|release)
    {
      #Path to copy plugin on build
      win32:DLLDESTDIR       = $${VACUUM_BUILD_PATH}/plugins
      unix:DESTDIR           = $${VACUUM_BUILD_PATH}/plugins

      #Path from vacumm to plugin resources
      #DEFINES               += RESOURCES_DIR='\\\"../trivialplugin/resources\\\"'
    }
}

#Should be included from SDK
TARGET_UTILS             = vacuumu
unix:VERSION_UTILS       = 1.17.0
