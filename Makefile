#############################################################################
# Makefile for building: Pedidos
# Generated by qmake (3.1) (Qt 5.12.10)
# Project:  Pedidos.pro
# Template: app
# Command: C:\Programas\Qt\Qt5.12.10\5.12.10\mingw73_32\bin\qmake.exe -o Makefile Pedidos.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = C:\Programas\Qt\Qt5.12.10\5.12.10\mingw73_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = C:\Programas\Qt\Qt5.12.10\5.12.10\mingw73_32\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = C:\Programas\Qt\Qt5.12.10\5.12.10\mingw73_32\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: Pedidos.pro ../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/win32-g++/qmake.conf ../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/spec_pre.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/qdevice.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/device_config.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/sanitize.conf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/gcc-base.conf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/g++-base.conf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/angle.conf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/win32/windows_vulkan_sdk.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/windows-vulkan.conf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/g++-win32.conf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/qconfig.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3danimation.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3danimation_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dcore.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dextras.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dextras_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dinput.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dlogic.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquick.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickanimation.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickextras.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickinput.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickrender.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3drender.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3drender_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axbase.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axserver.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_charts.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_charts_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_core.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_core_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_datavisualization.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_datavisualization_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_dbus.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_dbus_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_designer.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_edid_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_egl_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_gamepad.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_gamepad_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_gui.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_help.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_help_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_location.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_location_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_network.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_network_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_networkauth.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_networkauth_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_nfc.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_opengl.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_positioning.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_positioningquick.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_positioningquick_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_purchasing.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_purchasing_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qml.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quick.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickshapes_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quicktemplates2.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_remoteobjects.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_repparser.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_repparser_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_script.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_script_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_scripttools.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_scxml.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_scxml_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_sensors.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_serialbus.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_serialbus_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_serialport.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_sql.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_svg.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_testlib.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_texttospeech.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_texttospeech_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_theme_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_uiplugin.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_uitools.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_virtualkeyboard.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_virtualkeyboard_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_webchannel.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_websockets.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_widgets.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_winextras.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_xml.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qt_functions.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qt_config.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/win32-g++/qmake.conf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/spec_post.prf \
		.qmake.stash \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/exclusive_builds.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/toolchain.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/default_pre.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/win32/default_pre.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/resolve_config.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/exclusive_builds_post.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/default_post.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qml_debug.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/precompile_header.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/warn_on.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qt.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/resources.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/moc.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/win32/opengl.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/uic.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qmake_use.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/file_copies.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/win32/windows.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/testcase_targets.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/exceptions.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/yacc.prf \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/lex.prf \
		Pedidos.pro \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Widgets.prl \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Multimedia.prl \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Gui.prl \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Sql.prl \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Network.prl \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Core.prl \
		../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/qtmain.prl
	$(QMAKE) -o Makefile Pedidos.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/spec_pre.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/qdevice.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/device_config.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/sanitize.conf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/gcc-base.conf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/g++-base.conf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/angle.conf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/win32/windows_vulkan_sdk.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/windows-vulkan.conf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/common/g++-win32.conf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/qconfig.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3danimation.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3danimation_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dcore.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dcore_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dextras.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dextras_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dinput.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dinput_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dlogic.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquick.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquick_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickanimation.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickextras.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickextras_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickinput.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickinput_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickrender.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickrender_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickscene2d.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3drender.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_3drender_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_accessibility_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axbase.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axbase_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axcontainer.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axserver.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_axserver_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_bluetooth.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_charts.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_charts_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_concurrent.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_concurrent_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_core.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_core_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_datavisualization.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_datavisualization_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_dbus.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_dbus_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_designer.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_designer_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_edid_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_egl_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_fb_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_gamepad.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_gamepad_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_gui.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_gui_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_help.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_help_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_location.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_location_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_multimedia.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_multimedia_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_network.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_network_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_networkauth.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_networkauth_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_nfc.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_nfc_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_opengl.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_opengl_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_openglextensions.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_positioning.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_positioning_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_positioningquick.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_positioningquick_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_printsupport.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_printsupport_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_purchasing.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_purchasing_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qml.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qml_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qmldebug_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qmltest.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qmltest_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quick.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quick_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickcontrols2.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickshapes_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quicktemplates2.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickwidgets.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_remoteobjects.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_remoteobjects_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_repparser.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_repparser_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_script.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_script_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_scripttools.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_scripttools_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_scxml.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_scxml_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_sensors.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_sensors_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_serialbus.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_serialbus_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_serialport.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_serialport_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_sql.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_sql_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_svg.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_svg_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_testlib.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_testlib_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_texttospeech.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_texttospeech_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_theme_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_uiplugin.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_uitools.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_uitools_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_virtualkeyboard.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_virtualkeyboard_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_webchannel.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_webchannel_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_websockets.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_websockets_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_widgets.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_widgets_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_winextras.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_winextras_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_xml.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_xml_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qt_functions.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qt_config.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/win32-g++/qmake.conf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/spec_post.prf:
.qmake.stash:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/exclusive_builds.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/toolchain.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/default_pre.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/win32/default_pre.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/resolve_config.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/exclusive_builds_post.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/default_post.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qml_debug.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/precompile_header.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/warn_on.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qt.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/resources.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/moc.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/win32/opengl.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/uic.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/qmake_use.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/file_copies.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/win32/windows.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/testcase_targets.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/exceptions.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/yacc.prf:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/mkspecs/features/lex.prf:
Pedidos.pro:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Widgets.prl:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Multimedia.prl:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Gui.prl:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Sql.prl:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Network.prl:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/Qt5Core.prl:
../../../../Programas/Qt/Qt5.12.10/5.12.10/mingw73_32/lib/qtmain.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile Pedidos.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
