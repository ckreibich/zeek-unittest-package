
#ifndef ZEEK_PLUGIN_CORELIGHT_UNITTEST
#define ZEEK_PLUGIN_CORELIGHT_UNITTEST

#include <zeek/plugin/Plugin.h>

namespace zeek::plugin {
namespace Corelight_UnitTest {

class Plugin : public zeek::plugin::Plugin
{
protected:
    // Overridden from plugin::Plugin.
    zeek::plugin::Configuration Configure() override;
};

extern Plugin plugin;

}
}

#endif
