SUBDIRS = wayland-protocols libegg libmate-panel-applet-private libpanel-util

bin_PROGRAMS = \
	kiran-panel \
	kiran-desktop-item-edit \
	kiran-panel-test-applets

AM_CPPFLAGS = \
	$(PANEL_CFLAGS) \
	$(DCONF_CFLAGS) \
	-I. \
	-I$(srcdir) \
	-I$(top_builddir)/mate-panel \
	-I$(top_builddir)/mate-panel/libpanel-util \
	-DMATELOCALEDIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	-DPANELDATADIR=\""$(datadir)/kiran-panel"\" \
	$(DISABLE_DEPRECATED_CFLAGS)

AM_CFLAGS = $(WARN_CFLAGS)

panel_sources = \
	$(kiran_panel_BUILT_SOURCES) \
	main.c \
	panel-widget.c \
	button-widget.c \
	xstuff.c \
	panel-session.c \
	panel.c \
	applet.c \
	drawer.c \
	panel-config-global.c \
	panel-util.c \
	panel-properties-dialog.c \
	panel-run-dialog.c \
	menu.c \
	panel-context-menu.c \
	launcher.c \
	panel-applet-frame.c \
	panel-applets-manager.c \
	panel-shell.c \
	panel-background.c \
	panel-background-monitor.c \
	panel-stock-icons.c \
	panel-action-button.c \
	panel-menu-bar.c \
	panel-menu-button.c \
	panel-menu-items.c \
	panel-separator.c \
	panel-recent.c \
	panel-action-protocol.c \
	panel-toplevel.c \
	panel-struts.c \
	panel-frame.c \
	panel-xutils.c \
	panel-multiscreen.c \
	panel-a11y.c \
	panel-bindings.c \
	panel-layout.c \
	panel-profile.c \
	panel-force-quit.c \
	panel-lockdown.c \
	panel-addto.c \
	panel-ditem-editor.c \
	panel-modules.c \
	panel-applet-info.c \
	panel-reset.c

if ENABLE_WAYLAND
panel_sources += \
	wayland-protocols/wlr-layer-shell-unstable-v1-protocol.c \
	wayland-protocols/xdg-shell-protocol.c
endif

panel_headers = \
	panel-types.h \
	panel-widget.h \
	panel-globals.h \
	button-widget.h \
	xstuff.h \
	panel-session.h \
	panel.h \
	applet.h \
	drawer.h \
	drawer-private.h \
	panel-util.h \
	panel-properties-dialog.h \
	panel-config-global.h \
	panel-run-dialog.h \
	menu.h \
	panel-context-menu.h \
	launcher.h \
	panel-applet-frame.h \
	panel-applets-manager.h \
	panel-shell.h \
	panel-background.h \
	panel-background-monitor.h \
	panel-stock-icons.h \
	panel-action-button.h \
	panel-menu-bar.h \
	panel-menu-button.h \
	panel-menu-items.h \
	panel-separator.h \
	panel-recent.h \
	panel-action-protocol.h \
	panel-toplevel.h \
	panel-struts.h \
	panel-frame.h \
	panel-xutils.h \
	panel-multiscreen.h \
	panel-a11y.h \
	panel-bindings.h \
	panel-layout.h \
	panel-profile.h \
	panel-enums-gsettings.h \
	panel-enums.h \
	panel-force-quit.h \
	panel-lockdown.h \
	panel-addto.h \
	panel-ditem-editor.h \
	panel-icon-names.h \
	panel-modules.h \
	panel-applet-info.h \
	panel-reset.h \
	panel-schemas.h

if ENABLE_WAYLAND
panel_headers += \
	wayland-protocols/wlr-layer-shell-unstable-v1-client-protocol.h \
	wayland-protocols/xdg-shell-client-protocol.h
endif

kiran_panel_SOURCES = \
	$(panel_sources) \
	$(panel_headers)

kiran_panel_CPPFLAGS = \
	$(AM_CPPFLAGS) \
	$(XRANDR_CFLAGS) \
	-DPANEL_MODULES_DIR=\"$(modulesdir)\" \
	-DMATEMENU_I_KNOW_THIS_IS_UNSTABLE

if ENABLE_WAYLAND
kiran_panel_CPPFLAGS += \
	$(WAYLAND_CFLAGS)
endif


kiran_panel_LDADD = \
	$(top_builddir)/mate-panel/libegg/libegg.la \
	$(top_builddir)/mate-panel/libmate-panel-applet-private/libmate-panel-applet-private.la \
	$(top_builddir)/mate-panel/libpanel-util/libpanel-util.la \
	$(PANEL_LIBS) \
	$(DCONF_LIBS) \
	$(XRANDR_LIBS) \
	$(X_LIBS) \
	-lm

if ENABLE_WAYLAND
kiran_panel_LDADD += \
	$(WAYLAND_LIBS)
endif

kiran_panel_LDFLAGS = -export-dynamic

kiran_desktop_item_edit_SOURCES = \
	mate-desktop-item-edit.c \
	panel-ditem-editor.c \
	panel-marshal.c \
	panel-util.c \
	xstuff.c

kiran_desktop_item_edit_LDADD = \
	$(top_builddir)/mate-panel/libpanel-util/libpanel-util.la \
	$(PANEL_LIBS) \
	$(DCONF_LIBS) \
	-lX11

kiran_panel_test_applets_SOURCES = \
	$(panel_test_applets_BUILT_SOURCES)	\
	panel-modules.c \
	panel-applet-info.c \
	panel-applets-manager.c \
	panel-test-applets.c

kiran_panel_test_applets_CPPFLAGS = \
	$(AM_CPPFLAGS) \
	-DPANEL_MODULES_DIR=\"$(modulesdir)\" \
	-DMATE_PANEL_APPLETS_DIR=\"$(appletsdir)\"

kiran_panel_test_applets_LDADD = \
	$(top_builddir)/mate-panel/libmate-panel-applet-private/libmate-panel-applet-private-mini.la \
	$(top_builddir)/mate-panel/libpanel-util/libpanel-util.la \
	$(PANEL_LIBS) \
	$(DCONF_LIBS)

kiran_panel_test_applets_LDFLAGS = -export-dynamic

panel_enum_headers = \
	$(top_srcdir)/mate-panel/panel-enums.h \
	$(top_srcdir)/mate-panel/panel-enums-gsettings.h \
	$(top_srcdir)/mate-panel/panel-types.h

panel-marshal.h: panel-marshal.list $(GLIB_GENMARSHAL)
	$(AM_V_GEN)$(GLIB_GENMARSHAL) $< --header --prefix=panel_marshal > $@

panel-marshal.c: panel-marshal.list $(GLIB_GENMARSHAL)
	$(AM_V_GEN)echo "#include \"panel-marshal.h\"" > $@ && \
	$(GLIB_GENMARSHAL) $< --body --prefix=panel_marshal >> $@

panel-typebuiltins.c: @REBUILD@ $(panel_enum_headers)
	$(AM_V_GEN)glib-mkenums \
			--fhead "#include <glib-object.h>\n" \
			--fhead "#include \"panel-typebuiltins.h\"\n\n" \
			--fprod "\n/* enumerations from \"@filename@\" */" \
			--fprod "\n#include \"@filename@\"\n" \
			--vhead "static const GEnumValue _@enum_name@_values[] = {" \
			--vprod "  { @VALUENAME@, \"@VALUENAME@\", \"@valuenick@\" }," \
			--vtail "  { 0, NULL, NULL }\n};\n\n" \
			--vtail "GType\n@enum_name@_get_type (void)\n{\n" \
			--vtail "  static GType type = 0;\n\n" \
			--vtail "  if (!type)\n" \
			--vtail "    type = g_enum_register_static (\"@EnumName@\", _@enum_name@_values);\n\n" \
			--vtail "  return type;\n}\n\n" \
		$(panel_enum_headers) > $@

panel-typebuiltins.h: @REBUILD@ $(panel_enum_headers)
	$(AM_V_GEN)glib-mkenums \
			--fhead "#ifndef __PANEL_TYPEBUILTINS_H__\n" \
			--fhead "#define __PANEL_TYPEBUILTINS_H__ 1\n\n" \
			--fhead "#ifdef __cplusplus\nextern \"C\" {\n#endif\n\n" \
			--ftail "#ifdef __cplusplus\n}\n#endif\n\n" \
			--ftail "#endif /* __PANEL_TYPEBUILTINS_H__ */\n" \
			--fprod "\n/* --- @filename@ --- */" \
			--eprod "#define PANEL_TYPE_@ENUMSHORT@ @enum_name@_get_type()\n" \
			--eprod "GType @enum_name@_get_type (void);\n" \
		$(panel_enum_headers) > $@

kiran_panel_BUILT_SOURCES = \
	panel-typebuiltins.c \
	panel-typebuiltins.h \
	panel-resources.c		\
	panel-resources.h		\
	panel-marshal.c \
	panel-marshal.h

panel_test_applets_BUILT_SOURCES = 	\
	panel-test-applets-resources.c	\
	panel-test-applets-resources.h	\
	panel-marshal.c			\
	panel-marshal.h

BUILT_SOURCES = 				\
	$(kiran_panel_BUILT_SOURCES)		\
	$(panel_test_applets_BUILT_SOURCES)

ui_FILES =					\
	panel-properties-dialog.ui \
	panel-run-dialog.ui

panel-resources.c: panel.gresource.xml $(shell $(GLIB_COMPILE_RESOURCES) --sourcedir=$(srcdir) --generate-dependencies $(srcdir)/panel.gresource.xml)
	$(AM_V_GEN)$(GLIB_COMPILE_RESOURCES) --target=$@ --sourcedir=$(srcdir) --generate --c-name panel $<

panel-resources.h: panel.gresource.xml $(shell $(GLIB_COMPILE_RESOURCES) --sourcedir=$(srcdir) --generate-dependencies $(srcdir)/panel.gresource.xml)
	$(AM_V_GEN)$(GLIB_COMPILE_RESOURCES) --target=$@ --sourcedir=$(srcdir) --generate --c-name panel $<

uitest_FILES = panel-test-applets.ui

panel-test-applets-resources.c: panel-test-applets.gresource.xml $(shell $(GLIB_COMPILE_RESOURCES) --sourcedir=$(srcdir) --generate-dependencies $(srcdir)/panel-test-applets.gresource.xml)
	$(AM_V_GEN)$(GLIB_COMPILE_RESOURCES) --target=$@ --sourcedir=$(srcdir) --generate --c-name panel $<

panel-test-applets-resources.h: panel-test-applets.gresource.xml $(shell $(GLIB_COMPILE_RESOURCES) --sourcedir=$(srcdir) --generate-dependencies $(srcdir)/panel-test-applets.gresource.xml)
	$(AM_V_GEN)$(GLIB_COMPILE_RESOURCES) --target=$@ --sourcedir=$(srcdir) --generate --c-name panel $<

desktopdir = $(datadir)/applications
desktop_in_files = kiran-panel.desktop.in
desktop_DATA = $(desktop_in_files:.desktop.in=.desktop)

@INTLTOOL_DESKTOP_RULE@

EXTRA_DIST = \
	$(ui_FILES) \
	panel.gresource.xml			\
	$(uitest_FILES)	\
	panel-test-applets.gresource.xml	\
	panel-marshal.list \
	$(entries_DATA) \
	$(desktop_in_files) \
	wayland-protocols/wlr-layer-shell-unstable-v1.xml \
	wayland-protocols/xdg-shell.xml

CLEANFILES = \
	$(BUILT_SOURCES) \
	$(sys_DATA) \
	$(desktop_DATA)

dist-hook:
	cd $(distdir) ; rm -f $(CLEANFILES)

-include $(top_srcdir)/git.mk
