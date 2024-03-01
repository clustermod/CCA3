class CfgVehicles
{
	class Simc_TCU_mk1_blench;
	class cca_lt_gsu: Simc_TCU_mk1_blench {
		author = "Eric";
		scope = 1;
		side = 2;
		modelSides[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_uniform_co.paa),
			QPATHTOF(data\lt_uniform_co.paa),
			QUOTE(),
			QUOTE(),
			QUOTE(\Simc_uaf_67\data\bot_dschungel_mk2_co.paa),
			QUOTE(),
			QUOTE()
		};
		uniformClass = "U_cca_lt_gsu";
	};

	class Simc_TCU_mk1_roll_blench;
	class cca_lt_gsu_roll: Simc_TCU_mk1_roll_blench {
		author = "Eric";
		scope = 1;
		side = 2;
		modelSides[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_uniform_co.paa),
			QPATHTOF(data\lt_uniform_co.paa),
			QUOTE(),
			QUOTE(),
			QUOTE(\Simc_uaf_67\data\bot_dschungel_mk2_co.paa),
			QUOTE(),
			QUOTE()
		};
		uniformClass = "U_cca_lt_gsu_roll";
	};
};