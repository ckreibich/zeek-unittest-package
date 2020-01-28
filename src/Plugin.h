
#ifndef ZEEK_PLUGIN_CORELIGHT_TEMPLATE
#define ZEEK_PLUGIN_CORELIGHT_TEMPLATE

#include <plugin/Plugin.h>

namespace plugin {
namespace Corelight_Template {

class Plugin : public ::plugin::Plugin
{
protected:
	// Overridden from plugin::Plugin.
	plugin::Configuration Configure() override;
};

extern Plugin plugin;

}
}

#endif
