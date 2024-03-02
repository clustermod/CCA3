class CfgWeapons
{
	
	class UniformItem;
	class HeadgearItem;

	class U_Simc_arvn_og107;
	class U_cca_jp_type3_jietai: U_Simc_arvn_og107 {
		author = "Eric";
		scope = 2;
		displayName = "[JP] Type 3 Uniform (Jietai)";
		descriptionShort = "Uniform, Fatigues, Type 3 Uniform, Jietai Dots";
		picture = QPATHTOF(data\jp_type3_jietai_icon_co.paa);

		class ItemInfo: UniformItem {
			uniformClass = "cca_jp_type3_jietai";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class H_Simc_pasgt_m81;
	class H_cca_jp_type88_jietai: H_Simc_pasgt_m81 {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[JP] Type 88 Helmet (Jietai)";
		descriptionShort = "Headgear, Type 88 Helmet, Jietai Dots";
		picture = QPATHTOF(data\jp_type88_jietai_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\jp_type88_jietai_co.paa)
		};
	};

	class H_Simc_pasgt_m81_b;
	class H_cca_jp_type88_jietai_b: H_Simc_pasgt_m81_b {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[JP] Type 88 Helmet (Jietai/Band)";
		descriptionShort = "Headgear, Type 88 Helmet, Jietai Dots";
		picture = QPATHTOF(data\jp_type88_jietai_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\jp_type88_jietai_co.paa)
		};
	};

	class H_Simc_pasgt_m81_b_SWDG;
	class H_cca_jp_type88_jietai_b_SWDG: H_Simc_pasgt_m81_b_SWDG {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[JP] Type 88 Helmet (Jietai/Band/SWDG)";
		descriptionShort = "Headgear, Type 88 Helmet, Jietai Dots";
		picture = QPATHTOF(data\jp_type88_jietai_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\jp_type88_jietai_co.paa)
		};
	};

	class H_Simc_pasgt_m81_SWDG_low_b;
	class H_cca_jp_type88_jietai_SWDG_low_b: H_Simc_pasgt_m81_SWDG_low_b {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[JP] Type 88 Helmet (Jietai/Band/SWDG)";
		descriptionShort = "Headgear, Type 88 Helmet, Jietai Dots";
		picture = QPATHTOF(data\jp_type88_jietai_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\jp_type88_jietai_co.paa)
		};
	};

	class H_Simc_pasgt_m81_scrim;
	class H_cca_jp_type88_jietai_scrim_alt: H_Simc_pasgt_m81_scrim {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[JP] Type 88 Helmet (Jietai/Scrim)";
		descriptionShort = "Headgear, Type 88 Helmet, Jietai Dots";
		picture = QPATHTOF(data\jp_type88_jietai_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\jp_type88_jietai_co.paa),
			QPATHTOEF(european_retexture,data\lt_scrim_alt_co.paa)
		};
	};

	class H_Simc_pasgt_m81_scrim_SWDG;
	class H_cca_jp_type88_jietai_scrim_alt_SWDG: H_Simc_pasgt_m81_scrim_SWDG {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[JP] Type 88 Helmet (Jietai/Scrim/SWDG)";
		descriptionShort = "Headgear, Type 88 Helmet, Jietai Dots";
		picture = QPATHTOF(data\jp_type88_jietai_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\jp_type88_jietai_co.paa),
			QPATHTOEF(european_retexture,data\lt_scrim_alt_co.paa)
		};
	};

	class H_Simc_pasgt_m81_SWDG;
	class H_cca_jp_type88_jietai_SWDG: H_Simc_pasgt_m81_SWDG {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[JP] Type 88 Helmet (Jietai/SWDG)";
		descriptionShort = "Headgear, Type 88 Helmet, Jietai Dots";
		picture = QPATHTOF(data\jp_type88_jietai_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\jp_type88_jietai_co.paa)
		};
	};

	class H_Simc_pasgt_m81_SWDG_low;
	class H_cca_jp_type88_jietai_SWDG_low: H_Simc_pasgt_m81_SWDG_low {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[JP] Type 88 Helmet (Jietai/SWDG)";
		descriptionShort = "Headgear, Type 88 Helmet, Jietai Dots";
		picture = QPATHTOF(data\jp_type88_jietai_icon_co.paa);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\jp_type88_jietai_co.paa)
		};
	};
};