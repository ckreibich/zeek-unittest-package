#include <zeek/ID.h>
#include <zeek/Scope.h>
#include <zeek/3rdparty/doctest.h>

#include "Plugin.h"

namespace zeek::plugin { namespace Corelight_UnitTest { Plugin plugin; } }

using namespace zeek::plugin::Corelight_UnitTest;

zeek::plugin::Configuration Plugin::Configure()
	{
	zeek::plugin::Configuration config;
	config.name = "Corelight::UnitTest";
	config.description = "TODO: Insert description";
	config.version.major = 0;
	config.version.minor = 1;
        // Provided as of Zeek 3; override if needed:
	// config.version.patch = 0;

        in_debug = true;
	return config;
	}

TEST_CASE("plugin doctest")
        {
        CHECK(true);
        }
