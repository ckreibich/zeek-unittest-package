
#ifndef ZEEK_PLUGIN_CORELIGHT_UNITTEST
#define ZEEK_PLUGIN_CORELIGHT_UNITTEST

#include <plugin/Plugin.h>

namespace plugin {
namespace Corelight_UnitTest {

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
