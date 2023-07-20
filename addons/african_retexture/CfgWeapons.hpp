class CfgWeapons
{
	
	class UniformItem;
	class HeadgearItem;

	class U_Simc_arvn_og107;
	class U_cca_rhod_gss: U_Simc_arvn_og107 {
		author = "Eric";
		scope = 2;
		displayName = "[RH] General Service Uniform (Brushstroke)";

		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_gss";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_Simc_arvn_og107_trop;
	class U_cca_rhod_gss_roll: U_Simc_arvn_og107_trop {
		author = "Eric";
		scope = 2;
		displayName = "[RH] General Service Uniform (Brushstroke)";

		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_gss_roll";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_Simc_arvn_og107_tuck;
	class U_cca_rhod_gss_tuck: U_Simc_arvn_og107_tuck {
		author = "Eric";
		scope = 2;
		displayName = "[RH] General Service Uniform (Brushstroke)";

		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_gss_tuck";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_Simc_arvn_og107_tuck_trop;
	class U_cca_rhod_gss_tuck_roll: U_Simc_arvn_og107_tuck_trop {
		author = "Eric";
		scope = 2;
		displayName = "[RH] General Service Uniform (Brushstroke)";
		
		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_gss_tuck_roll";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_rhod_arid_gss: U_Simc_arvn_og107 {
		author = "Eric";
		scope = 2;
		displayName = "[RH] General Service Uniform (Arid Brushstroke)";

		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_arid_gss";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_rhod_arid_gss_roll: U_Simc_arvn_og107_trop {
		author = "Eric";
		scope = 2;
		displayName = "[RH] General Service Uniform (Arid Brushstroke)";

		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_arid_gss_roll";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_rhod_arid_gss_tuck: U_Simc_arvn_og107_tuck {
		author = "Eric";
		scope = 2;
		displayName = "[RH] General Service Uniform (Arid Brushstroke)";

		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_arid_gss_tuck";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_rhod_arid_gss_tuck_roll: U_Simc_arvn_og107_tuck_trop {
		author = "Eric";
		scope = 2;
		displayName = "[RH] General Service Uniform (Arid Brushstroke)";
		
		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_arid_gss_tuck_roll";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_simc_vc_grun_1_trop;
	class U_cca_rhod_gss_shorts_rolled: U_simc_vc_grun_1_trop {
		author = "Eric";
		scope = 2;
		displayName = "[RH] Fireforce Shorts (Brushstroke)";
		
		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_gss_shorts_rolled";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_rhod_arid_gss_shorts_rolled: U_simc_vc_grun_1_trop {
		author = "Eric";
		scope = 2;
		displayName = "[RH] Fireforce Shorts (Arid Brushstroke)";
		
		class ItemInfo: UniformItem {
			uniformClass = "cca_rhod_arid_gss_shorts_rolled";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class rhs_fieldcap;
	class U_cca_rhod_cap: rhs_fieldcap {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[RH] Patrol Cap (Brushstroke)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\rhod_cap_v1_co.paa)
		};
	};

	class U_cca_rhod_arid_cap: rhs_fieldcap {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[RH] Patrol Cap (Arid Brushstroke)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\rhod_cap_v2_co.paa)
		};
	};

	class U_simc_og107_veldjas_blench;
	class U_cca_belg_smock: U_simc_og107_veldjas_blench {
		author = "Eric";
		scope = 2;
		displayName = "[BE] Smock (Brushstroke)";
		
		class ItemInfo: UniformItem {
			uniformClass = "cca_belg_smock";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_sa_cu: U_Simc_arvn_og107 {
		author = "Eric";
		scope = 2;
		displayName = "[SA] Combat Uniform (Nutria Brown)";

		class ItemInfo: UniformItem {
			uniformClass = "cca_sa_cu";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_sa_cu_roll: U_Simc_arvn_og107_trop {
		author = "Eric";
		scope = 2;
		displayName = "[SA] Combat Uniform (Nutria Brown)";

		class ItemInfo: UniformItem {
			uniformClass = "cca_sa_cu_roll";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_sa_cu_tuck: U_Simc_arvn_og107_tuck {
		author = "Eric";
		scope = 2;
		displayName = "[SA] Combat Uniform (Nutria Brown)";

		class ItemInfo: UniformItem {
			uniformClass = "cca_sa_cu_tuck";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class U_cca_sa_cu_tuck_roll: U_Simc_arvn_og107_tuck_trop {
		author = "Eric";
		scope = 2;
		displayName = "[SA] Combat Uniform (Nutria Brown)";
		
		class ItemInfo: UniformItem {
			uniformClass = "cca_sa_cu_tuck_roll";
			uniformModel = "-";
			containerClass = "Supply60";
			mass = 40;
			armor = 0;
		};
	};

	class H_Simc_Boon_green_4;
	class U_cca_sa_boonie: H_Simc_Boon_green_4 {
		author = "Eric";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[SA] Boonie (Nutria Brown)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\sa_boon_co.paa)
		};
	};
};