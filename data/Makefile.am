SUBDIRS = \
	theme

layoutdir   = $(datadir)/kiran-panel/layouts
layout_DATA = \
	default.layout \
	fedora.layout \
	linuxmint.layout \
	mageia.layout \
	opensuse.layout \
	ubuntu.layout \
	unikylin.layout

@INTLTOOL_XML_NOMERGE_RULE@

gsettings_ENUM_NAMESPACE = org.kiran.panel
gsettings_ENUM_FILES = $(top_srcdir)/mate-panel/panel-enums-gsettings.h

panel_gschemas_in = \
	org.kiran.panel.gschema.xml.in \
	org.kiran.panel.object.gschema.xml.in \
	org.kiran.panel.toplevel.gschema.xml.in \
	org.kiran.panel.menubar.gschema.xml.in

gsettings_SCHEMAS = $(panel_gschemas_in:.xml.in=.xml)

%.gschema.xml: %.gschema.xml.in Makefile
	$(AM_V_GEN) $(SED) -e 's^\@GETTEXT_PACKAGE\@^$(GETTEXT_PACKAGE)^g' < $< > $@

@GSETTINGS_RULES@

EXTRA_DIST = \
	$(panel_gschemas_in) \
	$(layout_DATA)

CLEANFILES = $(gsettings_SCHEMAS)
