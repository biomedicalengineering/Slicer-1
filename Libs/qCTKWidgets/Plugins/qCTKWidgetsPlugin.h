#ifndef __qCTKWidgetsPlugin_h
#define __qCTKWidgetsPlugin_h

#include "qCTKWidgetsPluginWin32Header.h"
#include "qCTKCollapsibleGroupBoxPlugin.h"
#include "qCTKCollapsibleWidgetPlugin.h"
#include "qCTKCollapsibleWidget2Plugin.h"
#include "qCTKColorPickerButtonPlugin.h"
#include "qCTKCoordinatesWidgetPlugin.h"
#include "qCTKFittedTextBrowserPlugin.h"
#include "qCTKNumericInputPlugin.h"
#include "qCTKTitleComboBoxPlugin.h"
#include "qCTKTreeComboBoxPlugin.h"

#include <QDesignerCustomWidgetCollectionInterface>

// \class Group the plugins in one library
class QCTK_WIDGETS_PLUGIN_EXPORT qCTKWidgetsPlugin : public QObject,
                           public QDesignerCustomWidgetCollectionInterface
{
  Q_OBJECT
  Q_INTERFACES(QDesignerCustomWidgetCollectionInterface);

public:
  QList<QDesignerCustomWidgetInterface*> customWidgets() const
    {
    QList<QDesignerCustomWidgetInterface *> plugins;
    plugins << new qCTKCollapsibleGroupBoxPlugin
            << new qCTKCollapsibleWidgetPlugin
            << new qCTKCollapsibleWidget2Plugin
            << new qCTKColorPickerButtonPlugin
            << new qCTKCoordinatesWidgetPlugin
            << new qCTKFittedTextBrowserPlugin
            << new qCTKNumericInputPlugin
            << new qCTKTitleComboBoxPlugin
            << new qCTKTreeComboBoxPlugin;
    return plugins;
    }
};

#endif
