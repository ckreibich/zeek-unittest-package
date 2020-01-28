
#include "Plugin.h"

namespace plugin { namespace Corelight_Template { Plugin plugin; } }

using namespace plugin::Corelight_Template;

plugin::Configuration Plugin::Configure()
	{
	plugin::Configuration config;
	config.name = "Corelight::Template";
	config.description = "TODO: Insert description";
	config.version.major = 0;
	config.version.minor = 1;
        // Provided as of Zeek 3; override if needed:
	// config.version.patch = 0;
	return config;
	}
