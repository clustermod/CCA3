#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cca_common", "simc_svn_67_core", "simc_nv_67_core", "simc_uaf_68_core", "rhs_c_troops"};
        author = ECSTRING(common,ClusterTeam);
        authors[] = {"Eric"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"