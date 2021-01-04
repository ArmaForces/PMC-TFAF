#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tfaf_main"
        };
        author = "ArmaForces";
        authors[] = {"Pomigit", "Jonpas", "Rory", "Kresky", "Trenchgun", "Tyrone", "veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
