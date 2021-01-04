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
};
