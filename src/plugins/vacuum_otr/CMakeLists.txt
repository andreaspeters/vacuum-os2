cmake_minimum_required(VERSION 2.8)

project(otre2e-plugin)
set(PLUGIN_NAME "otre2e")

add_custom_target(updatets)

include("translations.cmake")
include("install.cmake")

find_package(Qt4 REQUIRED)

find_path(LIBOTR_INCLUDE_DIR 
            NAMES libotr/proto.h
            HINTS ${PC_LIBOTR_INCLUDEDIR}
                  ${PC_LIBOTR_INCLUDE_DIRS})

find_library(LIBOTR_LIBRARIES NAMES otr
               HINTS ${PC_LIBOTR_LIBDIR}
                      ${PC_LIBOTR_LIBRARY_DIRS} )

include_directories(${LIBOTR_INCLUDE_DIR})

set(LANGS "" CACHE STRING "List of languages to build localization for (this variable overrides any of LANG_*)")
set(USED_LANGS "" CACHE INTERNAL "List of languages actually used for generating targets")
add_lang_options()

if ("${LANGS}" STREQUAL "")
	process_lang_options()
else ("${LANGS}" STREQUAL "")
	set_enabled_langs("${LANGS}")
endif ("${LANGS}" STREQUAL "")

set(QT_USE_QTXML TRUE)
#set(QT_USE_QTWEBKIT TRUE)
if (WIN32)
	set(CMAKE_SHARED_LIBRARY_PREFIX "")
endif (WIN32)

include(${QT_USE_FILE})

add_definitions(-DQT_PLUGIN -DQT_SHARED)

if (WIN32)
	include_directories("${CMAKE_INSTALL_PREFIX}/sdk")
elseif (UNIX)
	include_directories("${CMAKE_INSTALL_PREFIX}/include/vacuum")
elseif (OS2)
	include_directories("${CMAKE_INSTALL_PREFIX}/include/vacuum")
endif (WIN32)

set(SOURCES otre2e.cpp OtrInternal.cpp OtrMessaging.cpp stanza_catchers.cpp PsiOtrConfig.cpp optionswidget.cpp )
set(HEADERS otre2e.h OtrInternal.hpp OtrMessaging.hpp stanza_catchers.h PsiOtrConfig.hpp optionswidget.h )
#set(RCCS kinotifyresources.qrc)

qt4_wrap_cpp(MOC_SOURCES ${HEADERS})
#qt4_add_resources(RCC_SOURCES ${RCCS})

add_translations(TRANSLATIONS ${PLUGIN_NAME} ${HEADERS} ${SOURCES})

add_library(${PLUGIN_NAME} SHARED ${SOURCES} ${MOC_SOURCES} ${RCC_SOURCES} ${TRANSLATIONS} )

find_library(TARGET_UTILS vacuumu ${CMAKE_INSTALL_PREFIX})
target_link_libraries(${PLUGIN_NAME} ${LIBOTR_LIBRARIES} ${TARGET_UTILS} ${QT_LIBRARIES})
