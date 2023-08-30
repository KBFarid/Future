/// ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====> ====>  			Pour1	Pourc2	Category1						Category2							Category3    			// configure categories in ZombiesCategories.c file
																																													/// (ex : 0.80,	0.95 => 80% chance to spawn zombie in 1st categorie, 15% in 2nd categorie and 5% in 3rd categorie)
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_000_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(1,   	1,		Zombie_Type_AverageTown_Low,	Empty,								Empty); 				// No Zombies (don't modify this one)
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_001_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.70,	0.90,	Zombie_Type_Forest_Low,			Zombie_Type_Forest_Medium,			Zombie_Type_Forest_Hight);// 1 CountrySide
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_010_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.90,	1,		Zombie_Type_SmallTown_Low,		Zombie_Type_SmallTown_Hight,		Empty); 				// 10 Small Town
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_020_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.90,	1,		Zombie_Type_AverageTown_Low,	Zombie_Type_AverageTown_Hight,		Empty); 				// 20 Average Town
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_030_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.85,	0.90,	Zombie_Type_BigTown_Low,		Zombie_Type_BigTown_Hight,			Zombie_Type_Slow1);		// 30 Big Town
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_040_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.5,	1,		Zombie_Type_Slow1,				Zombie_Type_Slow2,					Empty); 				// 40 Buildings
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_050_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.95,	1,		Zombie_Type_Industrial_Low,		Zombie_Type_Industrial_Hight,		Empty); 				// 50 Industrial
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_060_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.95,	1,		Zombie_Type_MilitaryeBase_Low,	Zombie_Type_MilitaryeBase_Hight,	Empty); 				// 60 Military
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_070_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.95,	1,		Zombie_Type_DevilEye_Low,		Zombie_Type_DevilEye_Hight,			Empty); 				// 70 Devil Eye Underground
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_071_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.90,	1,		Zombie_Type_PrisonPrisoner,		Zombie_Type_PrisonGuardians,		Empty); 				// 71 Prison
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_072_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.95,	1,		Zombie_Type_UndergroundBase_Low,Zombie_Type_UndergroundBase_Hight,	Empty); 				// 72 North Mountain Underground

ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_101_MilitaryTentesCategories  = new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.90,	1,		Zombie_Type_Tentes_Low,			Zombie_Type_Tentes_Hight,			Empty); 				// 101 Army
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_102_CastelCategories 			= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.70,	1,		Zombie_Type_Castle_Low,			Zombie_Type_Castle_Hight,			Empty); 				// 102 Castle
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_103_ChurchCategories 			= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(1,		1,		Zombie_Type_Priest,				Empty,								Empty); 				// 103 Church (quantity managed by the json)
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_104_ComicoCategories 			= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.90,	1,		Zombie_Type_Police_Low,			Zombie_Type_Police_Hight,			Empty); 				// 104 LittlePoliceStation
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_105_DispensaryCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.70,	1,		Zombie_Type_Hospital_Low,		Zombie_Type_Hospital_Hight,			Empty); 				// 105 Dispensary
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_106_FireStationCategories 	= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(1,		1,		Zombie_Type_FireFighter,		Empty,								Empty); 				// 106 Firestation
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_107_FisherCategories 			= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.90,	1,		Zombie_Type_FicherMen_Low,		Zombie_Type_FicherMen_Hight,		Empty); 				// 107 Fisher
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_108_GazStationCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.95,	1,		Zombie_Type_GazStation_Low,		Zombie_Type_GazStation_Hight,		Empty); 				// 108 GasStation
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_109_HolidayCampCategories 	= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.80,	1,		Zombie_Type_HolidayCamp_Low,	Zombie_Type_HolidayCamp_Hight,		Empty); 				// 109 Holiday camp
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_110_HospitalCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.70,	0.95,	Zombie_Type_Hospital_Low,		Zombie_Type_Hospital_Hight,			Zombie_Type_Butcher); 	// 110 Hospital 
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_111_IndustrialCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.95,	1,		Zombie_Type_Industrial_Low,		Zombie_Type_Industrial_Hight,		Empty); 				// 111 Industrial
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_112_TownHallCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.80,	1,		Zombie_Type_BigTown_Low,		Zombie_Type_BigTown_Hight,			Empty); 				// 112 TownHall
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_113_PoliceStationCategories 	= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.90,	1,		Zombie_Type_Police_Low,			Zombie_Type_Police_Hight,			Empty); 				// 113 BigPoliceStation
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_114_PrisonCategories 			= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.90,	1,		Zombie_Type_PrisonPrisoner,		Zombie_Type_PrisonGuardians,		Empty); 				// 114 Prison
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_115_MilitaryBaseCategories 	= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.60,	1,		Zombie_Type_MilitaryeBase_Low,	Zombie_Type_MilitaryeBase_Hight,	Empty);					// 115 QG - NorthMilitary
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_116_RiffyCategories 			= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.75,	1,		Zombie_Type_BloodAltar_Low,		Zombie_Type_BloodAltar_Hight,		Empty); 				// 116 Blood Altar
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_117_SchoolCategories 			= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.95,	1,		Zombie_Type_SchoolStudents,		Zombie_Type_SchoolTeacher,			Empty); 				// 117 School
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_118_ShopCategories 			= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(1,		1,		Zombie_Type_Butcher,			Empty,								Empty);	 				// 118 Shop (quantity managed by the json)

/// Data groups you can tweak to add new configurations
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_090_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.95,	1,		Zombie_Type_NuclearPlant_Low,	Zombie_Type_NuclearPlant_Hight,		Empty); 					// 90 Nuclear Plant Underground
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_091_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.6,	0.8,	Zombie_Type_MilitaryeBase_Low,	Zombie_Type_MilitaryeBase_Hight,	Zombie_Type_Industrial_Low);// 91 Mix Military / Industrial
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_092_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.6,	0.8,	Zombie_Type_Industrial_Low,		Zombie_Type_Industrial_Hight,		Zombie_Type_Tentes_Low); 	// 92 Mix Industrial / Military
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_093_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.8,	1,		Zombie_Type_MineUnderground_Low,Zombie_Type_MineUnderground_Hight,	Empty); 					// 93 Mine Underground
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_094_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.3,	0.6,	Zombie_Type_Tentes_Hight,		Zombie_Type_Slow1,					Zombie_Type_Industrial_Low);// 94 Mix Military / Industrial / Town(slow)
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_095_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.5,	1,		Zombie_Type_AverageTown_Low,	Zombie_Type_Industrial_Low,			Empty); 					// 95 Mix Industrial / Average Town
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_096_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(1,		1,		Zombie_Type_IceIsland,			Empty,								Empty); 					// 96 Ice Island - (v1.17 update)
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_097_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(1,		1,		Zombie_Type_Spooky,				Empty,								Empty); 				// 97 Spooky (v1.19)
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_098_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(1,		1,		Zombie_Type_Santa,				Empty,								Empty); 				// 98 Zonta	(v1.15 update)
ref autoptr Param5<float, float, TStringArray, TStringArray, TStringArray> data_Horde_099_ZombiesCategories 		= new Param5<float, float, TStringArray, TStringArray, TStringArray>	(0.75,	1,		Zombie_Type_NBC_Low,			Zombie_Type_NBC_Hight,				Empty); 				// 99 Toxic (v1.14 update)

