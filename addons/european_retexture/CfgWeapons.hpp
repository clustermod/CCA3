class CfgWeapons
{
	
	class UniformItem;
	class HeadgearItem;

	/* Lithuanian Uniforms */
	class U_Simc_TCU_mk1_blench;
	class U_cca_lt_gsu: U_Simc_TCU_mk1_blench {
		author = "Eric";
		scope = 2;
		displayName = "[LT] General Service Uniform (Lithuanian M05)";
		descriptionShort = "Uniform, Fatigues, General Service Uniform, Lithuanian M05";
		picture = QPATHTOF(data\lt_uniform_icon_co.paa);

		class ItemInfo: UniformItem {
			uniformClass = "cca_lt_gsu";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_Simc_TCU_mk1_roll_blench;
	class U_cca_lt_gsu_roll: U_Simc_TCU_mk1_roll_blench {
		author = "Eric";
		scope = 2;
		displayName = "[LT] General Service Uniform (Lithuanian M05)";
		descriptionShort = "Uniform, Fatigues, General Service Uniform, Lithuanian M05";
		picture = QPATHTOF(data\lt_uniform_icon_co.paa);

		class ItemInfo: UniformItem {
			uniformClass = "cca_lt_gsu_roll";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};
	
	/* Lithuanian Headgear */
	class H_Simc_pasgt_m81;
	class H_cca_lt_pasgt_m05: H_Simc_pasgt_m81 {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa)
		};
	};

	class H_Simc_pasgt_m81_b;
	class H_cca_lt_pasgt_m05_b: H_Simc_pasgt_m81_b {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05/Band)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa)
		};
	};

	class H_Simc_pasgt_m81_b_SWDG;
	class H_cca_lt_pasgt_m05_b_SWDG: H_Simc_pasgt_m81_b_SWDG {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05/Band/SWDG)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa)
		};
	};

	class H_Simc_pasgt_m81_SWDG_low_b;
	class H_cca_lt_pasgt_m05_SWDG_low_b: H_Simc_pasgt_m81_SWDG_low_b {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05/Band/SWDG)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa)
		};
	};

	class H_Simc_pasgt_m81_scrim;
	class H_cca_lt_pasgt_m05_scrim: H_Simc_pasgt_m81_scrim {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05/Scrim)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa),
			QUOTE(\simc_uaf_88\data\pot_scrim2_co.paa)
		};
	};

	class H_Simc_pasgt_m81_scrim_SWDG;
	class H_cca_lt_pasgt_m05_scrim_SWDG: H_Simc_pasgt_m81_scrim_SWDG {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05/Scrim/SWDG)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa),
			QUOTE(\simc_uaf_88\data\pot_scrim2_co.paa)
		};
	};

	class H_cca_lt_pasgt_m05_scrim_alt: H_Simc_pasgt_m81_scrim {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05/Scrim)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa),
			QPATHTOF(data\lt_scrim_alt_co.paa)
		};
	};

	class H_cca_lt_pasgt_m05_scrim_alt_SWDG: H_Simc_pasgt_m81_scrim_SWDG {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05/Scrim/SWDG)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa),
			QPATHTOF(data\lt_scrim_alt_co.paa)
		};
	};

	class H_Simc_pasgt_m81_SWDG;
	class H_cca_lt_pasgt_m05_SWDG: H_Simc_pasgt_m81_SWDG {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05/SWDG)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa)
		};
	};

	class H_Simc_pasgt_m81_SWDG_low;
	class H_cca_lt_pasgt_m05_SWDG_low: H_Simc_pasgt_m81_SWDG_low {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[LT] PASGT Helmet (Lithuanian M05/SWDG)";
		descriptionShort = "Headgear, PASGT Helmet, Lithuanian M05";
		picture = QPATHTOF(data\lt_pasgt_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\lt_pasgt_co.paa)
		};
	};

	/* Russian Uniforms */
	class CUP_U_O_RUS_Ratnik_Summer;
	class U_cca_ru_6sh122_ribbon_emr_summer: CUP_U_O_RUS_Ratnik_Summer {
		author = "Eric";
		scope = 2;
		displayName = "[RU] 6Sh122 (Summer EMR/Ribbons)";
		descriptionShort = "Uniform, Masking Suit, 6Sh122, Summer EMR";

		class ItemInfo: UniformItem {
			uniformClass = "cca_ru_6sh122_ribbon_emr_summer";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_ru_6sh122_armband_emr_summer: CUP_U_O_RUS_Ratnik_Summer {
		author = "Eric";
		scope = 2;
		displayName = "[RU] 6Sh122 (Summer EMR/Armband)";
		descriptionShort = "Uniform, Masking Suit, 6Sh122, Summer EMR";

		class ItemInfo: UniformItem {
			uniformClass = "cca_ru_6sh122_armband_emr_summer";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_ru_6sh122_ribbon_armband_emr_summer: CUP_U_O_RUS_Ratnik_Summer {
		author = "Eric";
		scope = 2;
		displayName = "[RU] 6Sh122 (Summer EMR/Ribbons/Armband)";
		descriptionShort = "Uniform, Masking Suit, 6Sh122, Summer EMR";

		class ItemInfo: UniformItem {
			uniformClass = "cca_ru_6sh122_ribbon_armband_emr_summer";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class CUP_U_O_RUS_Ratnik_Autumn;
	class U_cca_ru_6sh122_ribbon_emr_autumn: CUP_U_O_RUS_Ratnik_Autumn {
		author = "Eric";
		scope = 2;
		displayName = "[RU] 6Sh122 (Autumn EMR/Ribbons)";
		descriptionShort = "Uniform, Masking Suit, 6Sh122, Summer EMR";

		class ItemInfo: UniformItem {
			uniformClass = "cca_ru_6sh122_ribbon_emr_autumn";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_ru_6sh122_armband_emr_autumn: CUP_U_O_RUS_Ratnik_Autumn {
		author = "Eric";
		scope = 2;
		displayName = "[RU] 6Sh122 (Autumn EMR/Armband)";
		descriptionShort = "Uniform, Masking Suit, 6Sh122, Summer EMR";

		class ItemInfo: UniformItem {
			uniformClass = "cca_ru_6sh122_armband_emr_autumn";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_ru_6sh122_ribbon_armband_emr_autumn: CUP_U_O_RUS_Ratnik_Autumn {
		author = "Eric";
		scope = 2;
		displayName = "[RU] 6Sh122 (Autumn EMR/Ribbons/Armband)";
		descriptionShort = "Uniform, Masking Suit, 6Sh122, Summer EMR";

		class ItemInfo: UniformItem {
			uniformClass = "cca_ru_6sh122_ribbon_armband_emr_autumn";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	/* Belgian Uniform */
	class U_simc_og107_veldjas_blench;
	class U_cca_belg_smock: U_simc_og107_veldjas_blench {
		author = "Eric";
		scope = 2;
		displayName = "[BE] Smock (Brushstroke)";
		descriptionShort = "Uniform, Fatigues, Smock, Moon & Ball (Belgian Brushstroke)";
		picture = QPATHTOF(data\belg_v1_icon_ca.paa);
		
		class ItemInfo: UniformItem {
			uniformClass = "cca_belg_smock";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};
};