/*
 * Generated by gdbus-codegen 2.58.3 from com.canonical.dbusmenu.xml. DO NOT EDIT.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from.
 */

#ifndef __SN_DBUS_MENU_GEN_H__
#define __SN_DBUS_MENU_GEN_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for com.canonical.dbusmenu */

#define SN_TYPE_DBUS_MENU_GEN (sn_dbus_menu_gen_get_type ())
#define SN_DBUS_MENU_GEN(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), SN_TYPE_DBUS_MENU_GEN, SnDBusMenuGen))
#define SN_IS_DBUS_MENU_GEN(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), SN_TYPE_DBUS_MENU_GEN))
#define SN_DBUS_MENU_GEN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), SN_TYPE_DBUS_MENU_GEN, SnDBusMenuGenIface))

struct _SnDBusMenuGen;
typedef struct _SnDBusMenuGen SnDBusMenuGen;
typedef struct _SnDBusMenuGenIface SnDBusMenuGenIface;

struct _SnDBusMenuGenIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_about_to_show) (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    gint arg_id);

  gboolean (*handle_about_to_show_group) (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_ids);

  gboolean (*handle_event) (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    gint arg_id,
    const gchar *arg_eventId,
    GVariant *arg_data,
    guint arg_timestamp);

  gboolean (*handle_event_group) (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_events);

  gboolean (*handle_get_group_properties) (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_ids,
    const gchar *const *arg_propertyNames);

  gboolean (*handle_get_layout) (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    gint arg_parentId,
    gint arg_recursionDepth,
    const gchar *const *arg_propertyNames);

  gboolean (*handle_get_property) (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    gint arg_id,
    const gchar *arg_name);

  const gchar *const * (*get_icon_theme_path) (SnDBusMenuGen *object);

  const gchar * (*get_status) (SnDBusMenuGen *object);

  const gchar * (*get_text_direction) (SnDBusMenuGen *object);

  guint  (*get_version) (SnDBusMenuGen *object);

  void (*item_activation_requested) (
    SnDBusMenuGen *object,
    gint arg_id,
    guint arg_timestamp);

  void (*items_properties_updated) (
    SnDBusMenuGen *object,
    GVariant *arg_updatedProps,
    GVariant *arg_removedProps);

  void (*layout_updated) (
    SnDBusMenuGen *object,
    guint arg_revision,
    gint arg_parent);

};

GType sn_dbus_menu_gen_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *sn_dbus_menu_gen_interface_info (void);
guint sn_dbus_menu_gen_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void sn_dbus_menu_gen_complete_get_layout (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    guint revision,
    GVariant *layout);

void sn_dbus_menu_gen_complete_get_group_properties (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    GVariant *properties);

void sn_dbus_menu_gen_complete_get_property (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    GVariant *value);

void sn_dbus_menu_gen_complete_event (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation);

void sn_dbus_menu_gen_complete_event_group (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    GVariant *idErrors);

void sn_dbus_menu_gen_complete_about_to_show (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    gboolean needUpdate);

void sn_dbus_menu_gen_complete_about_to_show_group (
    SnDBusMenuGen *object,
    GDBusMethodInvocation *invocation,
    GVariant *updatesNeeded,
    GVariant *idErrors);



/* D-Bus signal emissions functions: */
void sn_dbus_menu_gen_emit_items_properties_updated (
    SnDBusMenuGen *object,
    GVariant *arg_updatedProps,
    GVariant *arg_removedProps);

void sn_dbus_menu_gen_emit_layout_updated (
    SnDBusMenuGen *object,
    guint arg_revision,
    gint arg_parent);

void sn_dbus_menu_gen_emit_item_activation_requested (
    SnDBusMenuGen *object,
    gint arg_id,
    guint arg_timestamp);



/* D-Bus method calls: */
void sn_dbus_menu_gen_call_get_layout (
    SnDBusMenuGen *proxy,
    gint arg_parentId,
    gint arg_recursionDepth,
    const gchar *const *arg_propertyNames,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean sn_dbus_menu_gen_call_get_layout_finish (
    SnDBusMenuGen *proxy,
    guint *out_revision,
    GVariant **out_layout,
    GAsyncResult *res,
    GError **error);

gboolean sn_dbus_menu_gen_call_get_layout_sync (
    SnDBusMenuGen *proxy,
    gint arg_parentId,
    gint arg_recursionDepth,
    const gchar *const *arg_propertyNames,
    guint *out_revision,
    GVariant **out_layout,
    GCancellable *cancellable,
    GError **error);

void sn_dbus_menu_gen_call_get_group_properties (
    SnDBusMenuGen *proxy,
    GVariant *arg_ids,
    const gchar *const *arg_propertyNames,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean sn_dbus_menu_gen_call_get_group_properties_finish (
    SnDBusMenuGen *proxy,
    GVariant **out_properties,
    GAsyncResult *res,
    GError **error);

gboolean sn_dbus_menu_gen_call_get_group_properties_sync (
    SnDBusMenuGen *proxy,
    GVariant *arg_ids,
    const gchar *const *arg_propertyNames,
    GVariant **out_properties,
    GCancellable *cancellable,
    GError **error);

void sn_dbus_menu_gen_call_get_property (
    SnDBusMenuGen *proxy,
    gint arg_id,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean sn_dbus_menu_gen_call_get_property_finish (
    SnDBusMenuGen *proxy,
    GVariant **out_value,
    GAsyncResult *res,
    GError **error);

gboolean sn_dbus_menu_gen_call_get_property_sync (
    SnDBusMenuGen *proxy,
    gint arg_id,
    const gchar *arg_name,
    GVariant **out_value,
    GCancellable *cancellable,
    GError **error);

void sn_dbus_menu_gen_call_event (
    SnDBusMenuGen *proxy,
    gint arg_id,
    const gchar *arg_eventId,
    GVariant *arg_data,
    guint arg_timestamp,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean sn_dbus_menu_gen_call_event_finish (
    SnDBusMenuGen *proxy,
    GAsyncResult *res,
    GError **error);

gboolean sn_dbus_menu_gen_call_event_sync (
    SnDBusMenuGen *proxy,
    gint arg_id,
    const gchar *arg_eventId,
    GVariant *arg_data,
    guint arg_timestamp,
    GCancellable *cancellable,
    GError **error);

void sn_dbus_menu_gen_call_event_group (
    SnDBusMenuGen *proxy,
    GVariant *arg_events,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean sn_dbus_menu_gen_call_event_group_finish (
    SnDBusMenuGen *proxy,
    GVariant **out_idErrors,
    GAsyncResult *res,
    GError **error);

gboolean sn_dbus_menu_gen_call_event_group_sync (
    SnDBusMenuGen *proxy,
    GVariant *arg_events,
    GVariant **out_idErrors,
    GCancellable *cancellable,
    GError **error);

void sn_dbus_menu_gen_call_about_to_show (
    SnDBusMenuGen *proxy,
    gint arg_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean sn_dbus_menu_gen_call_about_to_show_finish (
    SnDBusMenuGen *proxy,
    gboolean *out_needUpdate,
    GAsyncResult *res,
    GError **error);

gboolean sn_dbus_menu_gen_call_about_to_show_sync (
    SnDBusMenuGen *proxy,
    gint arg_id,
    gboolean *out_needUpdate,
    GCancellable *cancellable,
    GError **error);

void sn_dbus_menu_gen_call_about_to_show_group (
    SnDBusMenuGen *proxy,
    GVariant *arg_ids,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean sn_dbus_menu_gen_call_about_to_show_group_finish (
    SnDBusMenuGen *proxy,
    GVariant **out_updatesNeeded,
    GVariant **out_idErrors,
    GAsyncResult *res,
    GError **error);

gboolean sn_dbus_menu_gen_call_about_to_show_group_sync (
    SnDBusMenuGen *proxy,
    GVariant *arg_ids,
    GVariant **out_updatesNeeded,
    GVariant **out_idErrors,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
guint sn_dbus_menu_gen_get_version (SnDBusMenuGen *object);
void sn_dbus_menu_gen_set_version (SnDBusMenuGen *object, guint value);

const gchar *sn_dbus_menu_gen_get_text_direction (SnDBusMenuGen *object);
gchar *sn_dbus_menu_gen_dup_text_direction (SnDBusMenuGen *object);
void sn_dbus_menu_gen_set_text_direction (SnDBusMenuGen *object, const gchar *value);

const gchar *sn_dbus_menu_gen_get_status (SnDBusMenuGen *object);
gchar *sn_dbus_menu_gen_dup_status (SnDBusMenuGen *object);
void sn_dbus_menu_gen_set_status (SnDBusMenuGen *object, const gchar *value);

const gchar *const *sn_dbus_menu_gen_get_icon_theme_path (SnDBusMenuGen *object);
gchar **sn_dbus_menu_gen_dup_icon_theme_path (SnDBusMenuGen *object);
void sn_dbus_menu_gen_set_icon_theme_path (SnDBusMenuGen *object, const gchar *const *value);


/* ---- */

#define SN_TYPE_DBUS_MENU_GEN_PROXY (sn_dbus_menu_gen_proxy_get_type ())
#define SN_DBUS_MENU_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), SN_TYPE_DBUS_MENU_GEN_PROXY, SnDBusMenuGenProxy))
#define SN_DBUS_MENU_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), SN_TYPE_DBUS_MENU_GEN_PROXY, SnDBusMenuGenProxyClass))
#define SN_DBUS_MENU_GEN_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), SN_TYPE_DBUS_MENU_GEN_PROXY, SnDBusMenuGenProxyClass))
#define SN_IS_DBUS_MENU_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), SN_TYPE_DBUS_MENU_GEN_PROXY))
#define SN_IS_DBUS_MENU_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), SN_TYPE_DBUS_MENU_GEN_PROXY))

typedef struct _SnDBusMenuGenProxy SnDBusMenuGenProxy;
typedef struct _SnDBusMenuGenProxyClass SnDBusMenuGenProxyClass;
typedef struct _SnDBusMenuGenProxyPrivate SnDBusMenuGenProxyPrivate;

struct _SnDBusMenuGenProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  SnDBusMenuGenProxyPrivate *priv;
};

struct _SnDBusMenuGenProxyClass
{
  GDBusProxyClass parent_class;
};

GType sn_dbus_menu_gen_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (SnDBusMenuGenProxy, g_object_unref)
#endif

void sn_dbus_menu_gen_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
SnDBusMenuGen *sn_dbus_menu_gen_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
SnDBusMenuGen *sn_dbus_menu_gen_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void sn_dbus_menu_gen_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
SnDBusMenuGen *sn_dbus_menu_gen_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
SnDBusMenuGen *sn_dbus_menu_gen_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define SN_TYPE_DBUS_MENU_GEN_SKELETON (sn_dbus_menu_gen_skeleton_get_type ())
#define SN_DBUS_MENU_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), SN_TYPE_DBUS_MENU_GEN_SKELETON, SnDBusMenuGenSkeleton))
#define SN_DBUS_MENU_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), SN_TYPE_DBUS_MENU_GEN_SKELETON, SnDBusMenuGenSkeletonClass))
#define SN_DBUS_MENU_GEN_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), SN_TYPE_DBUS_MENU_GEN_SKELETON, SnDBusMenuGenSkeletonClass))
#define SN_IS_DBUS_MENU_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), SN_TYPE_DBUS_MENU_GEN_SKELETON))
#define SN_IS_DBUS_MENU_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), SN_TYPE_DBUS_MENU_GEN_SKELETON))

typedef struct _SnDBusMenuGenSkeleton SnDBusMenuGenSkeleton;
typedef struct _SnDBusMenuGenSkeletonClass SnDBusMenuGenSkeletonClass;
typedef struct _SnDBusMenuGenSkeletonPrivate SnDBusMenuGenSkeletonPrivate;

struct _SnDBusMenuGenSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  SnDBusMenuGenSkeletonPrivate *priv;
};

struct _SnDBusMenuGenSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType sn_dbus_menu_gen_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (SnDBusMenuGenSkeleton, g_object_unref)
#endif

SnDBusMenuGen *sn_dbus_menu_gen_skeleton_new (void);


G_END_DECLS

#endif /* __SN_DBUS_MENU_GEN_H__ */
