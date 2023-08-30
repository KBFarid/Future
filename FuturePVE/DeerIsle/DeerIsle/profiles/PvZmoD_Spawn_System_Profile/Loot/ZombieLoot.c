/// zombieList_XX : List of zeds categories concerned
/// You can find zombies list in Zombie_Type_All variable in ZombiesCategories.c file
/// if you want set an entier family (all color skin of a zombie type) just replace the "_color" by "_base" in the name

/// item/vest/back/headgearList_XX	  : First entry : All => the zed always loot all the item in the list / 1.0 => 100% chance to loot one item in the list / 0.3 => 30% to loot one item in the list / 2 => loot 2.0 random item in the list / 3.0 => loot 3 random item in the list... / -5 => loot between 1 and 5 item form the list

/// itemList_XX	  : Second entry : 
/// ////////////////////////////// Random 			=> items with random health 
/// ////////////////////////////// Normal/Pristine 	=> items pristine 
/// ////////////////////////////// Worn 			=> items worn
/// ////////////////////////////// Damaged 			=> items damaged 
/// ////////////////////////////// BadlyDamaged 	=> items badly damaged 
/// ////////////////////////////// Ruined 			=> items ruined

/// ////////////////////////////// Stacked 			=> Spawn a stack containing the quantity defined in the first entry of each item in the list.
/// For example : data_Chest001 = { "100","Stacked","AKM","Ammo_22","MoneyRuble25"};
/// => 	1 AKM (just 1 because this item can't be stacked)
/// And	1 stack of 50 Ammo_22 (because the max nbr of Ammo_22 in a stack is 50)
/// And 1 stack of 100 MoneyRuble25 (Total 2500 rubles)
/// Note that if the first entry is negative the stack value will be randomly choose between 1 and the set value.

/// itemList_XX	  : other entries : list of item the zed can loot
/// You can find items names in the types.xml file

////// IF YOU ADD YOUR OWN CONFIGURATIONS, REMEMBER THE FIRST CONFIGURATION MATCHING THE ZOMBIE CONCERNED IS SELECTED 
////// (except "TheOther" which is selected if zombie is not found in any configuration)

ref autoptr TStringArray zombieList_00 	= {"TheOthers",}; 
ref autoptr TStringArray itemList_00 	= {"0.3","Pristine","CaninaBerry","SambucusBerry","Plum","Kiwi","Orange","Banana","SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","SodaCan_Fronta","SodaCan_Kvass",};
ref autoptr TStringArray vestList_00 	= {"0.1","Pristine","PotatoSeed","TomatoSeedsPack","ZucchiniSeedsPack","PepperSeedsPack",};
ref autoptr TStringArray backList_00 	= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",}; 
ref autoptr TStringArray headgearList_00= {"0.1","Pristine","",};  

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_01 	= {"ZmbM_HermitSkinny_Black","ZmbM_HermitSkinny_Green","ZmbM_HermitSkinny_Red",};
ref autoptr TStringArray itemList_01 	= {"0.4","Pristine","SheepSteakMeat","RabbitLegMeat","GoatSteakMeat","PigSteakMeat","CowSteakMeat","ChickenBreastMeat","SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","SodaCan_Fronta",};
ref autoptr TStringArray vestList_01 	= {"0.7","Random","HuntingVest","Loftd_cowboyLEhat","FlatCap_Brown","Loftd_militarybeanie","BeanieHat_Black","BeanieHat_Brown","BeanieHat_Green","BeanieHat_Grey","BeanieHat_Beige",};
ref autoptr TStringArray backList_01 	= {"0.7","Random","Loftd_leatherBag",};
ref autoptr TStringArray headgearList_01= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};

ref autoptr TStringArray zombieList_02 	= {"ZmbM_NBC_Yellow","ZmbM_NBC_Grey",};
ref autoptr TStringArray itemList_02 	= {"0.1","Pristine","",};
ref autoptr TStringArray vestList_02 	= {"0.1","Pristine","NBCGlovesYellow","NBCHoodYellow","NBCPantsYellow","NBCBootsYellow","NBCJacketYellow",};
ref autoptr TStringArray backList_02 	= {"0.4","Random","mag3_gasmask_mung","AirborneMask","GP5GasMask","GasMask","GasMask_Filter",}; 
ref autoptr TStringArray headgearList_02= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};  

ref autoptr TStringArray zombieList_03 	= {"ZmbF_DoctorSkinny_Base","ZmbF_NurseFat_Base","ZmbM_ParamedicNormal_Base","ZmbF_ParamedicNormal_Base",}; 
ref autoptr TStringArray itemList_03 	= {"0.6","Pristine","BandageDressing","Thermometer","AMS_Bandage","AMS_Absorbent","AMS_BandageTape","AMS_Tourniquet","AMS_BandAid","AMS_Poter","AMS_AntiSept","BloodTestKit","CharcoalTablets","SalineBagIV","VitaminBottle","PainkillerTablets",}; 
ref autoptr TStringArray vestList_03 	= {"0.5","Pristine","VitaminBottle","AMS_Polaris","AMS_Aspirin","Epinephrine","AMS_Methadone","AMS_POX","AMS_Splint","FirstAidKit","AMS_FirstAidKit","AMS_BandageBox","TetracyclineAntibiotics","Epinephrine","Morphine","CharcoalTablets",};
ref autoptr TStringArray backList_03 	= {"0.0","Random","SurgicalMask","MedicalScrubsHat_Blue","MedicalScrubsHat_White","MedicalScrubsHat_Green",};
ref autoptr TStringArray headgearList_03= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};  

ref autoptr TStringArray zombieList_04 	= {"ZmbM_PrisonerSkinny_Base",}; 
ref autoptr TStringArray itemList_04 	= {"0.1","Pristine","AntiChemInjector","CigarettePack_Partyzanka","CP_CannabisBrickBlue","CP_CannabisBrickStardawg","Golden_Winged_Pin","Button_Pin_Radioactive","Button_Pin_Daisy","Sheriff_Badge",};
ref autoptr TStringArray vestList_04 	= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};
ref autoptr TStringArray backList_04 	= {"0.8","Pristine","",};
ref autoptr TStringArray headgearList_04= {"0.8","Pristine","PrisonerCap",};

ref autoptr TStringArray zombieList_05 	= {"ZmbM_FirefighterNormal_Base","ZmbM_HeavyIndustryWorker_Base",}; 
ref autoptr TStringArray itemList_05 	= {"0.8","Pristine","LeatherSewingKit","GasMask_Filter","CigarettePack_Partyzanka","Rag","FirefighterAxe","SledgeHammer","WoodAxe","FirefighterAxe","FirefighterAxe_Black","FirefighterAxe_Green","WoodAxe_mung",}; 
ref autoptr TStringArray vestList_05 	= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};
ref autoptr TStringArray backList_05	= {"0.6","Pristine","Loftd_travelsbag_black",};  
ref autoptr TStringArray headgearList_05= {"1.0","Random","FirefightersHelmet_Red","FirefightersHelmet_White","FirefightersHelmet_Yellow","GP5GasMask",};

ref autoptr TStringArray zombieList_06 	= {"ZmbF_MechanicNormal_Base","ZmbM_ConstrWorkerNormal_Base","ZmbM_HandymanNormal_Base","ZmbM_OffshoreWorker_Base",}; 
ref autoptr TStringArray itemList_06 	= {"0.8","Random","NailBox","SewingKit","LeatherSewingKit","WeaponCleaningKit","Netting","Battery9V","ElectronicRepairKit","Universallight","Matchbox","Rope","EpoxyPutty","EpoxyPutty","DuctTape","Whetstone","NailBox","Screwdriver","Wrench","PipeWrench","Pliers","Hammer","Hatchet","Hacksaw","HandSaw","Crowbar","Shovel","Pickaxe","Pipe",}; 
ref autoptr TStringArray vestList_06 	= {"0.05","Pristine","CJ_Materials_CalibrationTools","NailBox","Hammer","Whetstone","MetalWire","BarbedWire","CJ_Materials_Sulfur","CJ_Materials_CharcoalPowder",};
ref autoptr TStringArray backList_06	= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};
ref autoptr TStringArray headgearList_06= {"1.0","Random","WeldingMask","ConstructionHelmet_Lime","ConstructionHelmet_Orange","ConstructionHelmet_Red","ConstructionHelmet_White","ConstructionHelmet_Yellow","ConstructionHelmet_Blue",};

ref autoptr TStringArray zombieList_07 	= {"ZmbM_PolicemanFat_Base",}; 
ref autoptr TStringArray itemList_07 	= {"0.4","Pristine","CZ75","FNX45","SN_USP","Colt1911","Glock19","SN_M870","TTC_Maverick","TTC_Mossberg","Spas12_Gun","CJ_Materials_Display","CJ_Materials_plate4","HK416_Gun","IA2_Gun","SG550_Gun","SNAFU_SR25_Gun","TTC_M16","SCAR_Gun","Expansion_M16","TTC_M4Tac_Black","TTC_M4Tac","TTC_MP5SD","SNAFU_MPX_GUN","TTC_MPX","SNAFUP90","SNAFUVECTOR_9mm_GUN","SNAFUVECTOR_45acp_GUN","SNAFU_MP9_GUN","SNAFUPPSh","GCGN_MP7","SNAFU_PDW_45ACP","SNAFU_PDW_9mm",};
ref autoptr TStringArray vestList_07 	= {"0.8","Pristine","SNAFU_MD_Ammo_556x45mm_M855A1","SNAFU_Ammo_300ACC","SNAFU_Ammo_762x25","SNAFU_Ammo_5_7x28mm","SNAFU_Ammo_45_70mm","GCGN_Ammo_3006","SNAFU_Ammo_46x30","TTC_Ammo_300blk","Ammo_556x45","Ammo_545x39","Ammo_9x39AP","Ammo_9x39","TTC_Ammo_8mm","TTC_Ammo_277","TTC_Ammo_50AE","Ammo_357","TTC_Ammo_303","Ammo_12gaPellets","Ammo_45ACP","SNAFU_Ammo_500_SW","SNAFU_Ammo_44","Ammo_22","Ammo_9x19",};
ref autoptr TStringArray backList_07 	= {"0.6","Pristine","Mag_SG_30Rnd","SN_USP_Mag","Mag_1911_7Rnd","TTC_Mag_Glock_17Rnd","Mag_Glock_15Rnd","Mag_CZ75_15Rnd","Mag_FNX45_15Rnd","Mag_MP5_30Rnd","Mag_MP5_15Rnd","TTC_MPX_Mag_30rnd","TTC_MPX_Mag_60rnd","SNAFU_MPX_30rnd_Mag","SNAFUP90_50rdMag","SNAFUVECTOR_45acp_Mag","SNAFUVECTOR_9mm_Mag","SNAFU_MP9_30rnd_Mag","SNAFUPPSh_71rdMag","GCGN_MP7_40Rnd","SNAFU_PDW_45ACP_Mag","SNAFU_PDW_9mm_Mag","Mag_STANAGCoupled_30Rnd","Mag_CMAG_40Rnd","Mag_STANAG_30Rnd","SNAFU_SR25_Mag","TTC_DMR_556Pmag_40rnd","Mag_AKM_30Rnd","GCGN_HK416_Mag","SG550_Mag","TTC_DMR_556Stanag_30rnd",};
ref autoptr TStringArray headgearList_07= {"0.3","Pristine","PoliceCap",};

ref autoptr TStringArray zombieList_08 	= {"ZmbF_PoliceWomanNormal_Base",};
ref autoptr TStringArray itemList_08 	= {"0.4","Pristine","CZ75","FNX45","SN_USP","Colt1911","Glock19","SN_M870","TTC_Maverick","TTC_Mossberg","Spas12_Gun","CJ_Materials_Display","CJ_Materials_plate4","HK416_Gun","IA2_Gun","SG550_Gun","SNAFU_SR25_Gun","TTC_M16","SCAR_Gun","Expansion_M16","TTC_M4Tac_Black","TTC_M4Tac","TTC_MP5SD","SNAFU_MPX_GUN","TTC_MPX","SNAFUP90","SNAFUVECTOR_9mm_GUN","SNAFUVECTOR_45acp_GUN","SNAFU_MP9_GUN","SNAFUPPSh","GCGN_MP7","SNAFU_PDW_45ACP","SNAFU_PDW_9mm",};
ref autoptr TStringArray vestList_08 	= {"0.8","Pristine","SNAFU_MD_Ammo_556x45mm_M855A1","SNAFU_Ammo_300ACC","SNAFU_Ammo_762x25","SNAFU_Ammo_5_7x28mm","SNAFU_Ammo_45_70mm","GCGN_Ammo_3006","SNAFU_Ammo_46x30","TTC_Ammo_300blk","Ammo_556x45","Ammo_545x39","Ammo_9x39AP","Ammo_9x39","TTC_Ammo_8mm","TTC_Ammo_277","TTC_Ammo_50AE","Ammo_357","TTC_Ammo_303","Ammo_12gaPellets","Ammo_45ACP","SNAFU_Ammo_500_SW","SNAFU_Ammo_44","Ammo_22","Ammo_9x19",};
ref autoptr TStringArray backList_08 	= {"0.6","Pristine","Mag_SG_30Rnd","SN_USP_Mag","Mag_1911_7Rnd","TTC_Mag_Glock_17Rnd","Mag_Glock_15Rnd","Mag_CZ75_15Rnd","Mag_FNX45_15Rnd","Mag_MP5_30Rnd","Mag_MP5_15Rnd","TTC_MPX_Mag_30rnd","TTC_MPX_Mag_60rnd","SNAFU_MPX_30rnd_Mag","SNAFUP90_50rdMag","SNAFUVECTOR_45acp_Mag","SNAFUVECTOR_9mm_Mag","SNAFU_MP9_30rnd_Mag","SNAFUPPSh_71rdMag","GCGN_MP7_40Rnd","SNAFU_PDW_45ACP_Mag","SNAFU_PDW_9mm_Mag","Mag_STANAGCoupled_30Rnd","Mag_CMAG_40Rnd","Mag_STANAG_30Rnd","SNAFU_SR25_Mag","TTC_DMR_556Pmag_40rnd","Mag_AKM_30Rnd","GCGN_HK416_Mag","SG550_Mag","TTC_DMR_556Stanag_30rnd",};
ref autoptr TStringArray headgearList_08= {"0.3","Pristine","PoliceCap",};

ref autoptr TStringArray zombieList_09 	= {"ZmbM_PatrolNormal_Base",};
ref autoptr TStringArray itemList_09 	= {"0.4","Pristine","CZ75","FNX45","SN_USP","Colt1911","Glock19","SN_M870","TTC_Maverick","TTC_Mossberg","Spas12_Gun","CJ_Materials_Display","CJ_Materials_plate4","HK416_Gun","IA2_Gun","SG550_Gun","SNAFU_SR25_Gun","TTC_M16","SCAR_Gun","Expansion_M16","TTC_M4Tac_Black","TTC_M4Tac","TTC_MP5SD","SNAFU_MPX_GUN","TTC_MPX","SNAFUP90","SNAFUVECTOR_9mm_GUN","SNAFUVECTOR_45acp_GUN","SNAFU_MP9_GUN","SNAFUPPSh","GCGN_MP7","SNAFU_PDW_45ACP","SNAFU_PDW_9mm",};
ref autoptr TStringArray vestList_09 	= {"0.8","Pristine","SNAFU_MD_Ammo_556x45mm_M855A1","SNAFU_Ammo_300ACC","SNAFU_Ammo_762x25","SNAFU_Ammo_5_7x28mm","SNAFU_Ammo_45_70mm","GCGN_Ammo_3006","SNAFU_Ammo_46x30","TTC_Ammo_300blk","Ammo_556x45","Ammo_545x39","Ammo_9x39AP","Ammo_9x39","TTC_Ammo_8mm","TTC_Ammo_277","TTC_Ammo_50AE","Ammo_357","TTC_Ammo_303","Ammo_12gaPellets","Ammo_45ACP","SNAFU_Ammo_500_SW","SNAFU_Ammo_44","Ammo_22","Ammo_9x19",};
ref autoptr TStringArray backList_09 	= {"0.6","Pristine","Mag_SG_30Rnd","SN_USP_Mag","Mag_1911_7Rnd","TTC_Mag_Glock_17Rnd","Mag_Glock_15Rnd","Mag_CZ75_15Rnd","Mag_FNX45_15Rnd","Mag_MP5_30Rnd","Mag_MP5_15Rnd","TTC_MPX_Mag_30rnd","TTC_MPX_Mag_60rnd","SNAFU_MPX_30rnd_Mag","SNAFUP90_50rdMag","SNAFUVECTOR_45acp_Mag","SNAFUVECTOR_9mm_Mag","SNAFU_MP9_30rnd_Mag","SNAFUPPSh_71rdMag","GCGN_MP7_40Rnd","SNAFU_PDW_45ACP_Mag","SNAFU_PDW_9mm_Mag","Mag_STANAGCoupled_30Rnd","Mag_CMAG_40Rnd","Mag_STANAG_30Rnd","SNAFU_SR25_Mag","TTC_DMR_556Pmag_40rnd","Mag_AKM_30Rnd","GCGN_HK416_Mag","SG550_Mag","TTC_DMR_556Stanag_30rnd",};
ref autoptr TStringArray headgearList_09= {"0.3","Pristine","PoliceCap",};

ref autoptr TStringArray zombieList_10 	= {"ZmbM_PolicemanSpecForce_Base",}; 
ref autoptr TStringArray itemList_10 	= {"0.4","Pristine","CZ75","FNX45","SN_USP","Colt1911","Glock19","SN_M870","TTC_Maverick","TTC_Mossberg","Spas12_Gun","CJ_Materials_Display","CJ_Materials_plate4","HK416_Gun","IA2_Gun","SG550_Gun","SNAFU_SR25_Gun","TTC_M16","SCAR_Gun","Expansion_M16","TTC_M4Tac_Black","TTC_M4Tac","TTC_MP5SD","SNAFU_MPX_GUN","TTC_MPX","SNAFUP90","SNAFUVECTOR_9mm_GUN","SNAFUVECTOR_45acp_GUN","SNAFU_MP9_GUN","SNAFUPPSh","GCGN_MP7","SNAFU_PDW_45ACP","SNAFU_PDW_9mm",};
ref autoptr TStringArray vestList_10 	= {"0.8","Pristine","SNAFU_MD_Ammo_556x45mm_M855A1","SNAFU_Ammo_300ACC","SNAFU_Ammo_762x25","SNAFU_Ammo_5_7x28mm","SNAFU_Ammo_45_70mm","GCGN_Ammo_3006","SNAFU_Ammo_46x30","TTC_Ammo_300blk","Ammo_556x45","Ammo_545x39","Ammo_9x39AP","Ammo_9x39","TTC_Ammo_8mm","TTC_Ammo_277","TTC_Ammo_50AE","Ammo_357","TTC_Ammo_303","Ammo_12gaPellets","Ammo_45ACP","SNAFU_Ammo_500_SW","SNAFU_Ammo_44","Ammo_22","Ammo_9x19",};
ref autoptr TStringArray backList_10 	= {"0.6","Pristine","Mag_SG_30Rnd","SN_USP_Mag","Mag_1911_7Rnd","TTC_Mag_Glock_17Rnd","Mag_Glock_15Rnd","Mag_CZ75_15Rnd","Mag_FNX45_15Rnd","Mag_MP5_30Rnd","Mag_MP5_15Rnd","TTC_MPX_Mag_30rnd","TTC_MPX_Mag_60rnd","SNAFU_MPX_30rnd_Mag","SNAFUP90_50rdMag","SNAFUVECTOR_45acp_Mag","SNAFUVECTOR_9mm_Mag","SNAFU_MP9_30rnd_Mag","SNAFUPPSh_71rdMag","GCGN_MP7_40Rnd","SNAFU_PDW_45ACP_Mag","SNAFU_PDW_9mm_Mag","Mag_STANAGCoupled_30Rnd","Mag_CMAG_40Rnd","Mag_STANAG_30Rnd","SNAFU_SR25_Mag","TTC_DMR_556Pmag_40rnd","Mag_AKM_30Rnd","GCGN_HK416_Mag","SG550_Mag","TTC_DMR_556Stanag_30rnd",};
ref autoptr TStringArray headgearList_10= {"0.3","Pristine","PoliceCap",};

ref autoptr TStringArray zombieList_11 	= {"ZmbM_HunterOld_Base",}; 
ref autoptr TStringArray itemList_11 	= {"0.2","Pristine","CJ_Materials_Line","Heatpack","Bear_Beige","Bear_Dark","Bear_Pink","Bear_White","rag_teddybear",};
ref autoptr TStringArray vestList_11 	= {"0.6","Pristine","BookFaustErsterTeil","BookTheLastMan","BookDasNibelungenlied","BookDeLorigineDesEspces","BookLesTroisMousquetaires","BookMrchenFrKinder","BookTheHeritageOfTheSioux","BookDracula","BookTheAeneid","BookUncleSilas","BookUlysses","BookTreasureIsland","BookTheScarletPimpernel","BookAliceInWonderland","BookTheGiacomoLeopardi","BookTheDecameron","BookDeLaTerreLaLune","BookAndersensFairyTales","BookLeRougeEtLeNoir","BookJapaneseLiterature","BookHunger","BookHinduLiterature","BookFaust","BookCandide","BookAnnaKarenina","BookGilgameshEpic","BookAfterLondon","BookADollsHouse","BookTheRedBadgeOfCourage","BookTheJustifiedSinner",};
ref autoptr TStringArray backList_11 	= {"1.0","Random","",};
ref autoptr TStringArray headgearList_11= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};

ref autoptr TStringArray zombieList_12 	= {"ZmbM_Santa",}; 
ref autoptr TStringArray itemList_12 	= {"1.0","Random","SantasHat",};
ref autoptr TStringArray vestList_12 	= {"1.0","Random","Marmalade","Bear_Pink","Bear_Beige","Bear_Dark","Bear_White","Orange","GiftBox_Small_1","GiftBox_Small_2","GiftBox_Small_3","GiftBox_Small_4","GiftBox_Medium_1","GiftBox_Medium_1","GiftBox_Medium_1","GiftBox_Large_1","GiftBox_Large_1","GiftBox_Large_1","HumanSteakMeat","HumanSteakMeat","HumanSteakMeat","HumanSteakMeat",};
ref autoptr TStringArray backList_12 	= {"4.0","Random","GiftWrapPaper","GiftWrapPaper","HumanSteakMeat",};
ref autoptr TStringArray headgearList_12= {"0.0","Random","",};

ref autoptr TStringArray zombieList_13 	= {"ZmbM_priestPopSkinny_Base","ZmbM_DoctorFat_Base",}; 
ref autoptr TStringArray itemList_13 	= {"0.7","Pristine","Vodka","CP_CannabisBrickBlue","CP_CannabisBrickStardawg","CP_CannabisBrickNomad","CP_CannabisBrickKush","CP_CannabisSeedsPackBlue","CP_CannabisSeedsPackKush","CP_CannabisSeedsPackStardawg","CP_CannabisSeedsPackFuture","CP_CannabisSeedsPackS1","CP_CannabisSeedsPackNomad","CP_CannabisSeedsPackBlackFrost",};
ref autoptr TStringArray vestList_13 	= {"0.4","Pristine","CP_CannabisBrickSkunk","CP_CannabisBrickBlue","CP_CannabisBrickStardawg","CP_CannabisBrickNomad","CP_CannabisBrickKush","CP_CannabisSeedsPackBlue","CP_CannabisSeedsPackKush","CP_CannabisSeedsPackStardawg","CP_CannabisSeedsPackFuture","CP_CannabisSeedsPackS1","CP_CannabisSeedsPackNomad","CP_CannabisSeedsPackBlackFrost",};
ref autoptr TStringArray backList_13 	= {"0.1","Pristine","Future_Coin","BookBible"};
ref autoptr TStringArray headgearList_13= {"0.05","Pristine","TraderPlus_Bitcoin","Future_ticket",};

ref autoptr TStringArray zombieList_14 	= {"CDAJ_ZmbM_Mutant","CDAJ_ZmbM_Mutant_Bloody","CDAJ_ZmbM_Mutant_Pale",}; 	
ref autoptr TStringArray itemList_14	= {"0.4","Pristine","AMS_Ai2",};
ref autoptr TStringArray vestList_14	= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};
ref autoptr TStringArray backList_14	= {"0.2","Pristine","",};
ref autoptr TStringArray headgearList_14= {"0.3","Random","",};

ref autoptr TStringArray zombieList_15 	= {"CDAJ_ZmbM_TribeDemon","CDAJ_ZmbM_TribeDemon_Pale","CDAJ_ZmbM_TribeDemon_White","CDAJ_ZmbM_Demon",};
ref autoptr TStringArray itemList_15 	= {"-3","Stacked","CJ_Materials_CharcoalPowder","CJ_Materials_Sulfur",}; 	
ref autoptr TStringArray vestList_15 	= {"0.05","Pristine","Future_ticket",};
ref autoptr TStringArray backList_15 	= {"-3","Stacked","",};
ref autoptr TStringArray headgearList_15= {"0.0","Random","",};

ref autoptr TStringArray zombieList_16 	= {"CDAJ_ZmbM_LostInfected",};
ref autoptr TStringArray itemList_16 	= {"0.30","Pristine","CP_CannabisBrickKush","CP_CannabisBrickBlue","CP_CannabisBrickStardawg","CP_CannabisBrickNomad","CP_CannabisBrickBlackFrost","CP_CannabisBrickS1","CP_CannabisBrickFuture",}; 	
ref autoptr TStringArray vestList_16 	= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};
ref autoptr TStringArray backList_16 	= {"0.02","Pristine",};
ref autoptr TStringArray headgearList_16= {"0.0","Random","",}; 

ref autoptr TStringArray zombieList_17 	= {"ZmbM_usSoldier_normal_Base",};
ref autoptr TStringArray itemList_17 	= {"0.15","Pristine","SNAFUM98B_Ger_GUN","TTC_Raptr","AA12_Gun","SNAFUKivaari_Black_GUN","TTC_Beowulf","TTC_AWM","SNAFU_AWM_GUN","SNAFU_M60","GCGN_BenelliM4","SNAFUDVL10M2","SNAFUSRSA2","SNAFUMagnum500","TTC_44Magnum","TTC_44Magnum_Black","GCGN_M249","SNAFUSWM629","Snafu_ScarH_Black_GUN","SNAFUDSASA58_Gun","TTC_M110","GCGN_M110_Black","TTC_AKModPK_Tan","TTC_AKModPK_Digi","TTC_AKModPK_Multi","TTC_AKModPK_Snow","TTC_AKModPK_Gold","TTC_AKModPK",};
ref autoptr TStringArray vestList_17 	= {"0.8","Pristine","SNAFU_MD_Ammo_556x45mm_M855A1","SNAFU_Ammo_300ACC","Ammo_762x54Tracer","Ammo_762x39Tracer","Ammo_308WinTracer","Ammo_545x39Tracer","Ammo_556x45Tracer","Ammo_762x54","Ammo_762x39","SNAFU_Ammo_46x30","TTC_Ammo_300blk","Ammo_556x45",};
ref autoptr TStringArray backList_17 	= {"0.2","Random","SNAFUTac21_5rdMag","SNAFUM98B_Mag","SNAFU_M60_100rdMag","SNAFUKivaari_10rdMag","TTC_50Beo_mag","SNAFUKivaari_10rdMag","TTC_M82_5rnd_Mag","SNAFUM96_5rdMag","SNAFU_Mar10_15rnd_Mag","TTC_Raptr_Drum_45rnd","TTC_AWM_Magazine_5rnd","SNAFUT5000_Mag","AA12_Mag","SNAFU_AWM_Mag","GCGN_M249_Mag","Snafu_ScarH_25RND_Mag_BK","TTC_300Cmag_60rnd","GCGN_M110_Mag","TTC_Coupled_FAL_Magazine","TTC_FAL_Magazine","TTC_G3_Magazine_20rnd","TTC_HK417_Magazine_20rnd","TTC_SCARHMag","TTC_AKMod_762x54_65rnd","TTC_308Stanag","TTC_DMR_762Stanag_10rnd","TTC_DMR_762Stanag_20rnd","SNHK417_Mag","SNAFU_CMAG60300_Black","Mag_FAL_20Rnd","SNAFU_CMAG30300_Black","Modified_SA58_30RND_BK","TTC_MCX_Spear_Suppressor","TTC_AKMod_Suppressor","TTC_Universal_Suppressor_Snow","TTC_Universal_Suppressor_Tan","TTC_Universal_Suppressor_CAMO","TTC_Universal_Suppressor_BLACK",};
ref autoptr TStringArray headgearList_17= {"0.15","Pristine","MilitaryBeret_CDF",};

ref autoptr TStringArray zombieList_18 	= {"ZmbM_SoldierNormal_Base",}; 
ref autoptr TStringArray itemList_18 	= {"0.15","Pristine","SNAFUM98B_Ger_GUN","TTC_Raptr","AA12_Gun","SNAFUKivaari_Black_GUN","TTC_Beowulf","TTC_AWM","SNAFU_AWM_GUN","SNAFU_M60","GCGN_BenelliM4","SNAFUDVL10M2","SNAFUSRSA2","SNAFUMagnum500","TTC_44Magnum","TTC_44Magnum_Black","GCGN_M249","SNAFUSWM629","Snafu_ScarH_Black_GUN","SNAFUDSASA58_Gun","TTC_M110","GCGN_M110_Black","TTC_AKModPK_Tan","TTC_AKModPK_Digi","TTC_AKModPK_Multi","TTC_AKModPK_Snow","TTC_AKModPK_Gold","TTC_AKModPK",};
ref autoptr TStringArray vestList_18 	= {"0.8","Pristine","SNAFU_MD_Ammo_556x45mm_M855A1","SNAFU_Ammo_300ACC","Ammo_762x54Tracer","Ammo_762x39Tracer","Ammo_308WinTracer","Ammo_545x39Tracer","Ammo_556x45Tracer","Ammo_762x54","Ammo_762x39","SNAFU_Ammo_46x30","TTC_Ammo_300blk","Ammo_556x45",};
ref autoptr TStringArray backList_18 	= {"0.2","Random","SNAFUTac21_5rdMag","SNAFUM98B_Mag","SNAFU_M60_100rdMag","SNAFUKivaari_10rdMag","TTC_50Beo_mag","SNAFUKivaari_10rdMag","TTC_M82_5rnd_Mag","SNAFUM96_5rdMag","SNAFU_Mar10_15rnd_Mag","TTC_Raptr_Drum_45rnd","TTC_AWM_Magazine_5rnd","SNAFUT5000_Mag","AA12_Mag","SNAFU_AWM_Mag","GCGN_M249_Mag","Snafu_ScarH_25RND_Mag_BK","TTC_300Cmag_60rnd","GCGN_M110_Mag","TTC_Coupled_FAL_Magazine","TTC_FAL_Magazine","TTC_G3_Magazine_20rnd","TTC_HK417_Magazine_20rnd","TTC_SCARHMag","TTC_AKMod_762x54_65rnd","TTC_308Stanag","TTC_DMR_762Stanag_10rnd","TTC_DMR_762Stanag_20rnd","SNHK417_Mag","SNAFU_CMAG60300_Black","Mag_FAL_20Rnd","SNAFU_CMAG30300_Black","Modified_SA58_30RND_BK","TTC_MCX_Spear_Suppressor","TTC_AKMod_Suppressor","TTC_Universal_Suppressor_Snow","TTC_Universal_Suppressor_Tan","TTC_Universal_Suppressor_CAMO","TTC_Universal_Suppressor_BLACK",};
ref autoptr TStringArray headgearList_18= {"0.15","Pristine","MilitaryBeret_CDF",};

ref autoptr TStringArray zombieList_19 	= {"ZmbM_HermitSkinny_Beige",};
ref autoptr TStringArray itemList_19 	= {"0.4","Pristine","AthleticShoes_Blue","CombatBoots_Grey","HikingBootsLow_Blue","JoggingShoes_Violet","JungleBoots_Brown","Sneakers_Red","Wellies_Brown","WorkingBoots_Yellow",};  
ref autoptr TStringArray vestList_19 	= {"0.3","Random","FurCourierBag",};
ref autoptr TStringArray backList_19 	= {"0.4","Random","GhillieBushrag_Tan","GhillieTop_Tan","GhillieBushrag_Mossy","GhillieTop_Mossy","GhillieBushrag_Woodland","GhillieTop_Woodland","GhillieBushrag_Tan","GhillieBushrag_Mossy","GhillieBushrag_Woodland","GhillieBushrag_Tan","GhillieBushrag_Mossy","GhillieBushrag_Woodland",}; 
ref autoptr TStringArray headgearList_19= {"0.75","Random","GhillieHood_Tan","GhillieHood_Mossy","GhillieHood_Woodland",}; 

ref autoptr TStringArray zombieList_20 	= {"ZmbM_SkaterYoung_Base",}; 
ref autoptr TStringArray itemList_20 	= {"0.7","Pristine","Kiwi","CP_CannabisSeedsPackBlue","CP_CannabisSeedsPackKush","CP_CannabisSeedsPackStardawg","Zucchini","SewingKit","WaterBottle","Rag","SardinesCan","TunaCan",};
ref autoptr TStringArray vestList_20 	= {"1.0","Random","CigarettePack_Chernamorka","CigarettePack_Merkur","CigarettePack_Partyzanka","CP_JointSkunk","CP_JointFuture","CP_JointS1","CP_JointBlackFrost","CP_JointNomad","CP_JointStardawg","CP_JointBlue","CP_JointKush",};
ref autoptr TStringArray backList_20 	= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};
ref autoptr TStringArray headgearList_20= {"0.7","Random","BaseballCap_Beige","BaseballCap_Black","BaseballCap_CMMG_Black","BaseballCap_Olive","SkateHelmet_Black","SkateHelmet_Blue","SkateHelmet_Gray","SkateHelmet_Green","SkateHelmet_Red",};

ref autoptr TStringArray zombieList_21 	= {"ZmbF_SkaterYoung_Base",}; 
ref autoptr TStringArray itemList_21 	= {"0.4","Pristine","SaltySticks","Crackers","CP_CannabisSeedsPackBlue","CP_CannabisSeedsPackKush","CP_CannabisSeedsPackSkunk","CP_CannabisSeedsPackStardawg","WaterBottle","Rag","TunaCan",};
ref autoptr TStringArray vestList_21 	= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};
ref autoptr TStringArray backList_21 	= {"0.5","Random","Loftd_slackerbag_orang","Canvas_Backpack_Purple","Canvas_Backpack_Blue","Canvas_Backpack_Red","Canvas_Backpack_White","Canvas_Backpack_Black","Canvas_Backpack_Base","Loftd_valeriebag_haki","Loftd_valeriebag_black","Loftd_valeriebag_grey","Loftd_valeriebag","Loftd_elliebag_green","Loftd_elliebag","Loftd_slackerbag_salat","Loftd_slackerbag_haki","Loftd_slackerbag_br","Loftd_slackerbag_black",};
ref autoptr TStringArray headgearList_21= {"0.7","Random","BaseballCap_Beige","BaseballCap_Black","BaseballCap_CMMG_Black","BaseballCap_Olive","SkateHelmet_Black","SkateHelmet_Blue","SkateHelmet_Gray","SkateHelmet_Green","SkateHelmet_Red",};

ref autoptr TStringArray zombieList_22 	= {"FS_EXO_ZMB_pristine_bandit",
"FS_EXO_ZMB_pristine_golg",
"FS_EXO_ZMB_pristine_Svoboda",
"FS_EXO_ZMB_pristine_Monolit",
"FS_EXO_ZMB_pristine_specnaz",
"FS_EXO_ZMB_pristine_tank",
"FS_Izlome",
"FS_KrovososType2_Albinos",
"FS_KrovososType2_Brown",
"FS_KrovososType2_Volkodev",
"FS_ClearNeboType2green_ZMB",
"FS_ClearNeboType2_ZMB",
"FS_ZombieType2",
"FS_krovoSOS_Dark",
"FS_krovoSOS_Blood",
"FS_krovoSOS",
"FS_krovoSOS_BolotTvar",
"FS_Cvetok_standart",
"FS_Cvetok_green",
"FS_KrovoRedux_original",
"FS_KrovoRedux_BolotTvar",
"FS_KrovoRedux_black",
"FS_KrovoRedux_Red",
"FS_Forester_aiZMB",
"FS_Forester_zmb",
"FS_Forester_zmbAxe",
"FS_Snork",}; 				 	
ref autoptr TStringArray itemList_22	= {"2.05","Pristine","Collectable_Bitcoin",
"Collectable_CrossNecklace",
"Collectable_FloppyDisks_1999",
"Collectable_FloppyDisks_April",
"Collectable_FloppyDisks_MTV",
"Collectable_GameBoy_DonkeyKong",
"Collectable_GameBoy_Mario",
"Collectable_GameBoy_Medarot",
"Collectable_GameBoy_PokemonOne",
"Collectable_GameBoy_PokemonTwo",
"Collectable_GameBoy_Snakes",
"Collectable_GameBoy_Tetris",
"Collectable_GameBoy_Yoshi",
"Collectable_GameBoy_Zelda",
"Collectable_GPU",
"Collectable_Intel",
"Collectable_MemoryCard",
"Collectable_PocketWatch",
"Collectable_PokemonCard_Abra",
"Collectable_PokemonCard_Alakazam",
"Collectable_PokemonCard_Arcanine",
"Collectable_PokemonCard_Beedrill",
"Collectable_PokemonCard_Bill",
"Collectable_PokemonCard_Blastoise",
"Collectable_PokemonCard_Breeder",
"Collectable_PokemonCard_Bulbasaur",
"Collectable_PokemonCard_Caterpie",
"Collectable_PokemonCard_Center",
"Collectable_PokemonCard_Chansey",
"Collectable_PokemonCard_Charizard",
"Collectable_PokemonCard_Charmander",
"Collectable_PokemonCard_Charmeleon",
"Collectable_PokemonCard_ClefairlyDoll",
"Collectable_PokemonCard_Clefairy",
"Collectable_PokemonCard_ComputerSearch",
"Collectable_PokemonCard_Defender",
"Collectable_PokemonCard_DevolutionSpray",
"Collectable_PokemonCard_Dewgong",
"Collectable_PokemonCard_Diglett",
"Collectable_PokemonCard_Doduo",
"Collectable_PokemonCard_DoubleColourlessEnergy",
"Collectable_PokemonCard_Dragonair",
"Collectable_PokemonCard_Dratini",
"Collectable_PokemonCard_Drowzee",
"Collectable_PokemonCard_Dugtrio",
"Collectable_PokemonCard_Eevee",
"Collectable_PokemonCard_Electabuzz",
"Collectable_PokemonCard_Electrode",
"Collectable_PokemonCard_EnergyRemoval",
"Collectable_PokemonCard_EnergyRetrieval",
"Collectable_PokemonCard_Farfetchd",
"Collectable_PokemonCard_FightingEnergy",
"Collectable_PokemonCard_FireEnergy",
"Collectable_PokemonCard_Flute",
"Collectable_PokemonCard_FullHeal",
"Collectable_PokemonCard_Gastly",
"Collectable_PokemonCard_GrassEnergy",
"Collectable_PokemonCard_GrassEnergy",
"Collectable_PokemonCard_Growlithe",
"Collectable_PokemonCard_GustOfWind",
"Collectable_PokemonCard_Gyarados",
"Collectable_PokemonCard_Haunter",
"Collectable_PokemonCard_Hitmonchan",
"Collectable_PokemonCard_ImposterProfessorOak",
"Collectable_PokemonCard_ItemFinder",
"Collectable_PokemonCard_Ivysaur",
"Collectable_PokemonCard_Jolteon",
"Collectable_PokemonCard_Jynx",
"Collectable_PokemonCard_Kadabra",
"Collectable_PokemonCard_Kakuna",
"Collectable_PokemonCard_Koffing",
"Collectable_PokemonCard_Lass",
"Collectable_PokemonCard_Machamp",
"Collectable_PokemonCard_Machoke",
"Collectable_PokemonCard_Machop",
"Collectable_PokemonCard_Magikarp",
"Collectable_PokemonCard_Magmar",
"Collectable_PokemonCard_Magnemite",
"Collectable_PokemonCard_Magneton",
"Collectable_PokemonCard_Maintenance",
"Collectable_PokemonCard_Metapod",
"Collectable_PokemonCard_Mew",
"Collectable_PokemonCard_Mewtwo",
"Collectable_PokemonCard_Nidoking",
"Collectable_PokemonCard_Nidoran",
"Collectable_PokemonCard_Nidorino",
"Collectable_PokemonCard_Ninetales",
"Collectable_PokemonCard_Onix",
"Collectable_PokemonCard_Pidgeotto",
"Collectable_PokemonCard_Pidgey",
"Collectable_PokemonCard_Pikachu",
"Collectable_PokemonCard_PikachuBS",
"Collectable_PokemonCard_Pluspower",
"Collectable_PokemonCard_Pokedex",
"Collectable_PokemonCard_Poliwag",
"Collectable_PokemonCard_Poliwhirl",
"Collectable_PokemonCard_Poliwrath",
"Collectable_PokemonCard_Ponyta",
"Collectable_PokemonCard_Porygon",
"Collectable_PokemonCard_Potion",
"Collectable_PokemonCard_ProfessorOakBase",
"Collectable_PokemonCard_PsychicEnergy",
"Collectable_PokemonCard_Raichu",
"Collectable_PokemonCard_Raticate",
"Collectable_PokemonCard_Rattata",
"Collectable_PokemonCard_Revive",
"Collectable_PokemonCard_Sandshrew",
"Collectable_PokemonCard_ScoopUp",
"Collectable_PokemonCard_Seel",
"Collectable_PokemonCard_ShinyMewtwo",
"Collectable_PokemonCard_Squirtle",
"Collectable_PokemonCard_Starmie",
"Collectable_PokemonCard_Staryu",
"Collectable_PokemonCard_SuperEnergy",
"Collectable_PokemonCard_SuperPotion",
"Collectable_PokemonCard_SwitchBase",
"Collectable_PokemonCard_Tangela",
"Collectable_PokemonCard_Trader",
"Collectable_PokemonCard_Venusaur",
"Collectable_PokemonCard_Volcanion",
"Collectable_PokemonCard_Voltorb",
"Collectable_PokemonCard_Vulpix",
"Collectable_PokemonCard_Wartortle",
"Collectable_PokemonCard_WaterEnergy",
"Collectable_PokemonCard_Weedle",
"Collectable_PokemonCard_Zapdos",
"Collectable_Polaroid_Four",
"Collectable_Polaroid_One",
"Collectable_Polaroid_Three",
"Collectable_Polaroid_Two",
"Collectable_RAM",
"Collectable_RetroToy",
"Collectable_SmartPhone_Black",
"Collectable_SmartPhone_Blue",
"Collectable_SmartPhone_Green",
"Collectable_SmartPhone_Red",
"Collectable_SmartPhone_Yellow",
"Collectable_SSD",
"Collectable_TetrisToy",
"Collectable_USB",
"SaltySticks","Crackers","CP_CannabisSeedsPackBlue",
"CP_CannabisSeedsPackKush","CP_CannabisSeedsPackSkunk","CP_CannabisSeedsPackStardawg",
"WaterBottle","Rag","TunaCan",
}; 	
ref autoptr TStringArray vestList_22	= {"0.5","Pristine","",};
ref autoptr TStringArray backList_22	= {"0.0","Stacked","","",};
ref autoptr TStringArray headgearList_22= {"0.0","Random","",};

ref autoptr TStringArray zombieList_23 	= {"CDAJ_ZmbM_Dark_Heavy",}; 	
ref autoptr TStringArray itemList_23 	= {"0.15","Pristine","SNAFUM98B_Ger_GUN","TTC_Raptr","AA12_Gun","SNAFUKivaari_Black_GUN","TTC_Beowulf","TTC_AWM","SNAFU_AWM_GUN","SNAFU_M60","GCGN_BenelliM4","SNAFUDVL10M2","SNAFUSRSA2","SNAFUMagnum500","TTC_44Magnum","TTC_44Magnum_Black","GCGN_M249","SNAFUSWM629","Snafu_ScarH_Black_GUN","SNAFUDSASA58_Gun","TTC_M110","GCGN_M110_Black","TTC_AKModPK_Tan","TTC_AKModPK_Digi","TTC_AKModPK_Multi","TTC_AKModPK_Snow","TTC_AKModPK_Gold","TTC_AKModPK",};
ref autoptr TStringArray vestList_23 	= {"0.8","Pristine","SNAFU_MD_Ammo_556x45mm_M855A1","SNAFU_Ammo_300ACC","Ammo_762x54Tracer","Ammo_762x39Tracer","Ammo_308WinTracer","Ammo_545x39Tracer","Ammo_556x45Tracer","Ammo_762x54","Ammo_762x39","SNAFU_Ammo_46x30","TTC_Ammo_300blk","Ammo_556x45",};
ref autoptr TStringArray backList_23 	= {"0.2","Random","SNAFUTac21_5rdMag","SNAFUM98B_Mag","SNAFU_M60_100rdMag","SNAFUKivaari_10rdMag","TTC_50Beo_mag","SNAFUKivaari_10rdMag","TTC_M82_5rnd_Mag","SNAFUM96_5rdMag","SNAFU_Mar10_15rnd_Mag","TTC_Raptr_Drum_45rnd","TTC_AWM_Magazine_5rnd","SNAFUT5000_Mag","AA12_Mag","SNAFU_AWM_Mag","GCGN_M249_Mag","Snafu_ScarH_25RND_Mag_BK","TTC_300Cmag_60rnd","GCGN_M110_Mag","TTC_Coupled_FAL_Magazine","TTC_FAL_Magazine","TTC_G3_Magazine_20rnd","TTC_HK417_Magazine_20rnd","TTC_SCARHMag","TTC_AKMod_762x54_65rnd","TTC_308Stanag","TTC_DMR_762Stanag_10rnd","TTC_DMR_762Stanag_20rnd","SNHK417_Mag","SNAFU_CMAG60300_Black","Mag_FAL_20Rnd","SNAFU_CMAG30300_Black","Modified_SA58_30RND_BK","TTC_MCX_Spear_Suppressor","TTC_AKMod_Suppressor","TTC_Universal_Suppressor_Snow","TTC_Universal_Suppressor_Tan","TTC_Universal_Suppressor_CAMO","TTC_Universal_Suppressor_BLACK",};
ref autoptr TStringArray headgearList_23= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};

ref autoptr TStringArray zombieList_24 	= {"ZmbM_MechanicSkinny_Base","ZmbF_BlueCollarFat_Blue",}; 				
ref autoptr TStringArray itemList_24 	= {"0.8","DuctTape","Wrench","Screwdriver","PipeWrench","Rag","Hammer","NailBox","Pliers","Hacksaw","Whetstone",}; 	
ref autoptr TStringArray vestList_24 	= {"0.5","Random","DuctTape","Wrench","PipeWrench","Rag","Hammer","Pliers","Hacksaw","Whetstone","NailBox",};
ref autoptr TStringArray backList_24 	= {"0.4","Pristine","CJ_Materials_CalibrationTools","CJ_Materials_Sulfur","CJ_Materials_CharcoalPowder","CJ_Materials_CalibrationTools",};
ref autoptr TStringArray headgearList_24= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};

ref autoptr TStringArray zombieList_25 	= {"ZmbM_MotobikerFat_Base",};
ref autoptr TStringArray itemList_25 	= {"0.8","DuctTape","Wrench","Screwdriver","PipeWrench","Rag","Hammer","NailBox","Pliers","Hacksaw","Whetstone",}; 	
ref autoptr TStringArray vestList_25 	= {"0.5","Random","DuctTape","Wrench","PipeWrench","Rag","Hammer","Pliers","Hacksaw","Whetstone","NailBox",};
ref autoptr TStringArray backList_25 	= {"0.4","Pristine","CJ_Materials_CalibrationTools","CJ_Materials_Sulfur","CJ_Materials_CharcoalPowder","CJ_Materials_CalibrationTools",};
ref autoptr TStringArray headgearList_25= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};

ref autoptr TStringArray zombieList_26 	= {"ZmbM_Mummy",}; 
ref autoptr TStringArray itemList_26 	= {"0.8","Pristine","CJ_Materials_Sulfur","CJ_Materials_CharcoalPowder","CJ_Materials_CalibrationTools",};
ref autoptr TStringArray vestList_26 	= {"0.3","Pristine","CJ_Materials_Sulfur","CJ_Materials_CharcoalPowder","CJ_Materials_CalibrationTools",};
ref autoptr TStringArray backList_26	= {"-5","Random","HumanSteakMeat",};
ref autoptr TStringArray headgearList_26= {"0.01","Pristine","TraderPlus_Bitcoin","Future_ticket",};

/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref autoptr TStringArray zombieList_27 	= {"FS_ArmyBoec_Oficer",
"FS_ArmyBoec_Baril",
"FS_ArmyBoec_Bulat",
"FS_krovoSOS_invisible",
"FS_MONOLIT_ZMB",
"FS_Polter_Invz",
"FS_ZMB_Stalker",
"FS_ZMB_Stalker_Top",
"FS_GermanDog_black",}; 				// you can use to create new Z category
ref autoptr TStringArray itemList_27 	= {"0.5","Pristine","SNAFUM98B_Ger_GUN","TTC_Raptr","AA12_Gun","SNAFUKivaari_Black_GUN","TTC_Beowulf","TTC_AWM","SNAFU_AWM_GUN","SNAFU_M60","GCGN_BenelliM4","SNAFUDVL10M2",
"SNAFUSRSA2","SNAFUMagnum500","TTC_44Magnum","TTC_44Magnum_Black",
"GCGN_M249","SNAFUSWM629","Snafu_ScarH_Black_GUN","SNAFUDSASA58_Gun",
"TTC_M110","GCGN_M110_Black","TTC_AKModPK_Tan","TTC_AKModPK_Digi",
"TTC_AKModPK_Multi","TTC_AKModPK_Snow","TTC_AKModPK_Gold","TTC_AKModPK",
"TWP_Ammo_20x76",
"TWP_Ammo_50BMG",
"TWP_Ammo_408Cheytac",
"TWP_Ammo_762x25",
"TWP_Ammo_6x35",
"TWP_Ammo_500SW_Mag",
"TWP_AmmoBox_20x76_10rnd",
"TWP_AmmoBox_50BMG_10rnd",
"TWP_AmmoBox_3006_20Rnd",
"TWP_AmmoBox_44mag_30Rnd",
"TWP_AmmoBox_50AE_20Rnd",
"TWP_AmmoBox_762x25_30Rnd",
"TWP_AmmoBox_40SW_30Rnd",
"TWP_AmmoBox_46x30_30Rnd",
"TWP_AmmoBox_57x28_30Rnd",
"TWP_Ammobox_408Cheytac_10Rnd",
"TWP_Ammobox_6x35_20Rnd",
"TWP_Ammo_50AE",
"TWP_Ammo_44Mag",
"TWP_Ammo_57x28",
"TWP_Ammo_46x30",
"TWP_Ammo_3006",
"TWP_Ammo_40SW",
"TWP_Ammo_Arrow",
"TWP_Ammo_20x102mm",
"TWP_Ammo_300WinMag",
"TWP_Ammo_30Carbine",
"TWP_AmmoBox_30Carbine_30Rnd",
"TWP_AmmoBox_300WinMag_20Rnd",
"TWP_AmmoBox_20x102mm_10Rnd",
"TWP_Ammo_792x57",
"TWP_AmmoBox_792x57_20Rnd",
"TWP_Ammo_338Lapua_Magnum",
"TWP_AmmoBox_500SW_15Rnd",
"TWP_Crossbow_Arrow",
"TWP_AmmoBox_338Lapua_20Rnd",
}; 	// you can use to create item list for this category
ref autoptr TStringArray vestList_27 	= {"0.02","Pristine","TWP_GS_9mm",
"TWP_GS_9mm_mag_17Rnd",
"TWP_SigSauerP229_mag_13Rnd",
"TWP_FNS9",
"TWP_FNS9_mag_18Rnd",
"TWP_Beretta92FS",
"TWP_Beretta92FSDesert",
"TWP_BerettaGoldenFlower",
"TWP_Beretta92FS_mag_15Rnd",
"TWP_BerettaDEBurton",
"TWP_BerettaDEBlack",
"TWP_BerettaDE_mag_15Rnd",
"TWP_BerettaPX4",
"TWP_BerettaPX4_mag_17Rnd",
"TWP_BerettaSwordCutlass",
"TWP_BerettaSwordCutlass_mag_20Rnd",
"TWP_Colt1911Gold",
"TWP_Colt1911Gold_mag_7Rnd",
"TWP_Colt1911Holy",
"TWP_Colt1911Holy_mag_7Rnd",
"TWP_Colt1911Stainless",
"TWP_Colt1911Stainless_mag_7Rnd",
"TWP_1911_WilsonCombat",
"TWP_1911_WilsonCombat_mag_7Rnd",
"TWP_CZ75M",
"TWP_CZ75M_mag_20Rnd",
"TWP_DesertEagle",
"TWP_DesertEagleSky",
"TWP_DesertEagle_mag_7Rnd",
"TWP_DesertEagleFalcon",
"TWP_DesertEagleFalcon_mag_7Rnd",
"TWP_FN57Pink",
"TWP_FN57Pink_mag_15Rnd",
"TWP_FN57Toxic",
"TWP_FN57Toxic_mag_15Rnd",
"TWP_Glock18Egyptian",
"TWP_Glock18Egyptian_mag_17Rnd",
"TWP_Glock18Honor",
"TWP_Glock18Honor_mag_17Rnd",
"TWP_Glock18Jungle",
"TWP_Glock18Jungle_mag_17Rnd",
"TWP_Glock18Rebel",
"TWP_Glock18Rebel_mag_17Rnd",
"TWP_Glock18Weasel",
"TWP_Glock18Weasel_mag_17Rnd",
"TWP_Glock18Wolf",
"TWP_Glock18Wolf_mag_17Rnd",
"TWP_Glock42",
"TWP_Glock42_mag_12Rnd",
"TWP_Glock42_mag_50Rnd",
"TWP_GlockZapper",
"TWP_GlockZapper_mag_15Rnd",
"TWP_HK47",
"TWP_HK47_mag_15Rnd",
"TWP_HK47Tan",
"TWP_HK47Tan_mag_15Rnd",
"TWP_LugerP08",
"TWP_LugerP08_mag_8Rnd",
"TWP_MK23Socom",
"TWP_MK23Socom_mag_12Rnd",
"TWP_MP40",
"TWP_MP40_mag_15Rnd",
"TWP_MP443",
"TWP_MP443_mag_18Rnd",
};
ref autoptr TStringArray backList_27 	= {"0.0","Stacked","","",};
ref autoptr TStringArray headgearList_27= {"0.0","Random","",};

ref autoptr TStringArray zombieList_28 	= {"ZmbM_DH_Master_Day",}; 				// you can use to create new Z category
ref autoptr TStringArray itemList_28 	= {"-16.0","Stacked","CJ_Materials_ThinTools",}; 	// you can use to create item list for this category
ref autoptr TStringArray vestList_28 	= {"-5.0","Stacked","CJ_Materials_wire",};
ref autoptr TStringArray backList_28	= {"-18.0","Stacked","CJ_Materials_wd40",};
ref autoptr TStringArray headgearList_28= {"0.08","Pristine","CJ_Materials_RoughTools",};

ref autoptr TStringArray zombieList_29	= {"ZmbM_DH_Master_Night",};			// you can use to create new Z category
ref autoptr TStringArray itemList_29	= {"-5.0","Stacked","Future_coin",}; 	// you can use to create item list for this category
ref autoptr TStringArray vestList_29	= {"0.6","Pristine","AP_Gold_25K",};
ref autoptr TStringArray backList_29	= {"0.08","Pristine","CJ_Materials_RoughTools",};
ref autoptr TStringArray headgearList_29= {"0.0","Random","",};

ref autoptr TStringArray zombieList_30 	= {"","",}; 				// you can use to create new Z category
ref autoptr TStringArray itemList_30 	= {"0.5","Pristine","",}; 	// you can use to create item list for this category
ref autoptr TStringArray vestList_30 	= {"0.0","Random","",};
ref autoptr TStringArray backList_30 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_30= {"0.0","Random","",};

ref autoptr TStringArray zombieList_31 	= {"","",}; 				// you can use to create new Z category
ref autoptr TStringArray itemList_31 	= {"0.5","Pristine","",}; 	// you can use to create item list for this category
ref autoptr TStringArray vestList_31 	= {"0.0","Random","",};
ref autoptr TStringArray backList_31 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_31= {"0.0","Random","",};

ref autoptr TStringArray zombieList_32 	= {"",}; 				// you can use to create new Z category
ref autoptr TStringArray itemList_32 	= {"0.5","Pristine","",}; 	// you can use to create item list for this category
ref autoptr TStringArray vestList_32 	= {"0.0","Random","",};
ref autoptr TStringArray backList_32 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_32= {"0.0","Random","",};

ref autoptr TStringArray zombieList_33  = {"ZmbM_JournalistSkinny_Base","ZmbF_PatientOld_Base","ZmbM_CitizenASkinny_Base",};	/// NO LOOT (zombie base used for PvZmoD Dark Horde)
ref autoptr TStringArray itemList_33 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref autoptr TStringArray vestList_33 	= {"0.0","Random","",};
ref autoptr TStringArray backList_33 	= {"0.0","Random","",};
ref autoptr TStringArray headgearList_33= {"0.0","Random","",};




