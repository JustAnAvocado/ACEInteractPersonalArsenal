class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACEInteractArsenal {
                displayName = "Open ACE Arsenal";
                condition = "";
                exceptions[] = {};
                statement = "[player, player, true] call ace_arsenal_fnc_openBox";
                icon = "\A3\Ui_f\data\Logos\a_64_ca.paa";
            };
        };
    };
};