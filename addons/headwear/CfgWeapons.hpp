class CfgWeapons {
    class HelmetBase;
    class H_Cap_headphones: HelmetBase {
        class ItemInfo;
    };

    class GVAR(Cap_headphones_BlackLogo): H_Cap_headphones {
        author = "Pomigit, Jonpas, Rory, veteran29";
        displayName = CSTRING(Cap_Headphones_BlackLogo);

        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_headphones_blacklogo_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };

    class H_Cap_red: HelmetBase {
        class ItemInfo;
    };
    class GVAR(Cap_BlackLogo): H_Cap_red {
        author = "Pomigit, Jonpas, Rory, veteran29";
        displayName = CSTRING(Cap_BlackLogo);

        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class GVAR(Cap_TanLogo): H_Cap_red {
        author = "Pomigit, Jonpas, Rory, veteran29";
        displayName = CSTRING(Cap_TanLogo);

        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tanlogo_co.paa)};
    };
};
