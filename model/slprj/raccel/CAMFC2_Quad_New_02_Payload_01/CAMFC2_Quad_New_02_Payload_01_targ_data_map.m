  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 163;
      section.data(163)  = dumData; %prealloc
      
	  ;% rtP.AN
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.B
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 16;
	
	  ;% rtP.BBT_inv
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 52;
	
	  ;% rtP.BN
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 88;
	
	  ;% rtP.H
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 104;
	
	  ;% rtP.J
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 120;
	
	  ;% rtP.K
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 129;
	
	  ;% rtP.Ka
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 165;
	
	  ;% rtP.Kd
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 166;
	
	  ;% rtP.Kf
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 167;
	
	  ;% rtP.Kt
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 168;
	
	  ;% rtP.Lq
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 169;
	
	  ;% rtP.M
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 170;
	
	  ;% rtP.Observer_Gain
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 171;
	
	  ;% rtP.Observer_Gain1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 172;
	
	  ;% rtP.Q
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 173;
	
	  ;% rtP.QR
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 209;
	
	  ;% rtP.R
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 245;
	
	  ;% rtP.RM_1
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 281;
	
	  ;% rtP.U_dot0_M
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 297;
	
	  ;% rtP.Upsilon_M
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 300;
	
	  ;% rtP.X_M
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 303;
	
	  ;% rtP.alpha
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 306;
	
	  ;% rtP.gamma_0
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 307;
	
	  ;% rtP.gamma_1
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 343;
	
	  ;% rtP.ge
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 379;
	
	  ;% rtP.k1
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 380;
	
	  ;% rtP.k2
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 381;
	
	  ;% rtP.r_formX
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 382;
	
	  ;% rtP.r_formY
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 383;
	
	  ;% rtP.r_formZ
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 384;
	
	  ;% rtP.rho_0
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 385;
	
	  ;% rtP.rho_1
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 386;
	
	  ;% rtP.Gain2_Gain
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 387;
	
	  ;% rtP.Agent_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 388;
	
	  ;% rtP.Integrator4_IC
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 389;
	
	  ;% rtP.Integrator5_IC
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 425;
	
	  ;% rtP.Integrator_IC
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 440;
	
	  ;% rtP.Integrator_IC_ll5yvtvr3k
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 452;
	
	  ;% rtP.Integrator_IC_j4cpqfdea5
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 464;
	
	  ;% rtP.Integrator_IC_bhnfxbuaak
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 476;
	
	  ;% rtP.TransferFcn3_A
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 488;
	
	  ;% rtP.TransferFcn3_C
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 489;
	
	  ;% rtP.TransferFcn2_A
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 490;
	
	  ;% rtP.TransferFcn2_C
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 491;
	
	  ;% rtP.TransferFcn1_A
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 492;
	
	  ;% rtP.TransferFcn1_C
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 493;
	
	  ;% rtP.Memory2_InitialCondition
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 494;
	
	  ;% rtP.Integrator1_IC
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 500;
	
	  ;% rtP.Integrator3_IC
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 506;
	
	  ;% rtP.Integrator_IC_fvooay02cq
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 542;
	
	  ;% rtP.Integrator1_IC_gvc4lbz4zt
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 545;
	
	  ;% rtP.formationoftheleader_Value
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 548;
	
	  ;% rtP.Integrator_IC_dxdefvbqqz
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 551;
	
	  ;% rtP.Integrator1_IC_dhvfmby03k
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 566;
	
	  ;% rtP.Integrator_IC_hkn1g5z50u
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 581;
	
	  ;% rtP.Integrator6_IC
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 584;
	
	  ;% rtP.Integrator2_IC
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 587;
	
	  ;% rtP.Integrator_IC_m5trwyg02m
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 593;
	
	  ;% rtP.Integrator1_IC_o1x1rfxplt
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 596;
	
	  ;% rtP.Integrator_IC_br54vzkuoj
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 599;
	
	  ;% rtP.Integrator_IC_eqgi5u5j2i
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 605;
	
	  ;% rtP.Gain_Gain
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 606;
	
	  ;% rtP.Integrator3_IC_cqn1tixb11
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 607;
	
	  ;% rtP.Memory_InitialCondition
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 613;
	
	  ;% rtP.Integrator_IC_ak45y034mz
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 619;
	
	  ;% rtP.Integrator1_IC_lwsrxvv1dn
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 625;
	
	  ;% rtP.Integrator1_IC_kch0jyq4l1
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 631;
	
	  ;% rtP.Integrator_IC_m2wkiw3enz
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 667;
	
	  ;% rtP.Integrator2_IC_gzbylzelej
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 703;
	
	  ;% rtP.Integrator5_IC_hdhhn35ras
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 709;
	
	  ;% rtP.Integrator5_IC_nwcrjrmntz
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 724;
	
	  ;% rtP.Integrator5_IC_bdphhlsjj4
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 739;
	
	  ;% rtP.Memory3_InitialCondition
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 754;
	
	  ;% rtP.Memory3_InitialCondition_odrfcddzo2
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 769;
	
	  ;% rtP.Memory3_InitialCondition_a0irr1iih0
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 784;
	
	  ;% rtP.Memory3_InitialCondition_e4520jnbi2
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 799;
	
	  ;% rtP.Memory_InitialCondition_kfc1wjzym5
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 814;
	
	  ;% rtP.Memory5_InitialCondition
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 817;
	
	  ;% rtP.TransferFcn1_A_nujdlcbjyt
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 820;
	
	  ;% rtP.TransferFcn1_C_cmxvg3m0j5
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 821;
	
	  ;% rtP.TransferFcn2_A_begbkhkapk
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 822;
	
	  ;% rtP.TransferFcn2_C_nzmool04r2
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 823;
	
	  ;% rtP.TransferFcn5_A
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 824;
	
	  ;% rtP.TransferFcn5_C
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 825;
	
	  ;% rtP.Integrator_IC_dv2mdr05ix
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 826;
	
	  ;% rtP.Integrator_IC_lea510ieom
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 829;
	
	  ;% rtP.Integrator_IC_b2z2fy5xzx
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 832;
	
	  ;% rtP.Memory_InitialCondition_a15umzwd5d
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 835;
	
	  ;% rtP.Memory_InitialCondition_fdpfscth32
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 838;
	
	  ;% rtP.Memory_InitialCondition_pnqhyj4v2u
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 841;
	
	  ;% rtP.Integrator6_IC_pn0cggvpg5
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 844;
	
	  ;% rtP.Integrator6_IC_oyuxsjsyrt
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 847;
	
	  ;% rtP.Integrator6_IC_llwvnjivrz
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 850;
	
	  ;% rtP.Memory5_InitialCondition_omczlhgywm
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 853;
	
	  ;% rtP.Memory5_InitialCondition_krghwgtwzz
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 856;
	
	  ;% rtP.Memory5_InitialCondition_hwmjgecp2p
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 859;
	
	  ;% rtP.Integrator4_IC_bqwjoax0yj
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 862;
	
	  ;% rtP.Integrator4_IC_hsxa2r15rn
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 898;
	
	  ;% rtP.Integrator4_IC_llpsksryx3
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 934;
	
	  ;% rtP.Agent_Value_ixja5dv44z
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 970;
	
	  ;% rtP.Memory2_InitialCondition_ixkbydzld5
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 971;
	
	  ;% rtP.Agent_Value_axqasj4p0a
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 977;
	
	  ;% rtP.Memory2_InitialCondition_opuvtlyd5u
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 978;
	
	  ;% rtP.Agent_Value_osrr3ginzy
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 984;
	
	  ;% rtP.Memory2_InitialCondition_ozc5y51w41
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 985;
	
	  ;% rtP.Integrator1_IC_ix2kdurm0a
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 991;
	
	  ;% rtP.Integrator3_IC_pl55dsru54
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 997;
	
	  ;% rtP.Integrator_IC_alj3l4jksp
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 1033;
	
	  ;% rtP.Integrator1_IC_e434obmerv
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 1048;
	
	  ;% rtP.Integrator2_IC_dlogixgno1
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 1063;
	
	  ;% rtP.Integrator_IC_aqhpgobmia
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 1069;
	
	  ;% rtP.Integrator1_IC_d2gz3itgvv
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 1072;
	
	  ;% rtP.Integrator3_IC_irlb5jed0u
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 1075;
	
	  ;% rtP.Memory_InitialCondition_a1f4f1efjn
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 1081;
	
	  ;% rtP.Integrator_IC_f4jweekbgj
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 1087;
	
	  ;% rtP.Integrator1_IC_dggkktknfv
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 1093;
	
	  ;% rtP.Integrator1_IC_ovoo50kpue
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 1099;
	
	  ;% rtP.Integrator_IC_asfyyakemt
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 1135;
	
	  ;% rtP.Integrator2_IC_cpeckpugec
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 1171;
	
	  ;% rtP.Integrator1_IC_fmopbs2ypa
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 1177;
	
	  ;% rtP.Integrator3_IC_fagx4trrvf
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 1183;
	
	  ;% rtP.Integrator_IC_ontqyxzrde
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 1219;
	
	  ;% rtP.Integrator1_IC_hl1b0vrylw
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 1234;
	
	  ;% rtP.Integrator2_IC_k5gg2bqqkf
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 1249;
	
	  ;% rtP.Integrator_IC_ayfhthp0v4
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 1255;
	
	  ;% rtP.Integrator1_IC_koasodr4as
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 1258;
	
	  ;% rtP.Integrator3_IC_jiozsrcxii
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 1261;
	
	  ;% rtP.Memory_InitialCondition_az54btma51
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 1267;
	
	  ;% rtP.Integrator_IC_ghhpktks14
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 1273;
	
	  ;% rtP.Integrator1_IC_fyphguyldl
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 1279;
	
	  ;% rtP.Integrator1_IC_mdknrruii3
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 1285;
	
	  ;% rtP.Integrator_IC_kpzn5be1yb
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 1321;
	
	  ;% rtP.Integrator2_IC_l5f4ire3yt
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 1357;
	
	  ;% rtP.Integrator1_IC_fvtztp1tml
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 1363;
	
	  ;% rtP.Integrator3_IC_okmfayw4p2
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 1369;
	
	  ;% rtP.Integrator_IC_cyubkmsog4
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 1405;
	
	  ;% rtP.Integrator1_IC_kh4niuf2a4
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 1420;
	
	  ;% rtP.Integrator2_IC_k5nghiidw3
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 1435;
	
	  ;% rtP.Integrator_IC_cfnxz4nui1
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 1441;
	
	  ;% rtP.Integrator1_IC_dtwgjipyua
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 1444;
	
	  ;% rtP.Integrator3_IC_pzwcjpn3kt
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 1447;
	
	  ;% rtP.Memory_InitialCondition_iflgyxbk0d
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 1453;
	
	  ;% rtP.Integrator_IC_c1yketrjdu
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 1459;
	
	  ;% rtP.Integrator1_IC_gjuqacamsk
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 1465;
	
	  ;% rtP.Integrator1_IC_jokakqqnqr
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 1471;
	
	  ;% rtP.Integrator_IC_jhbgz2gwkd
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 1507;
	
	  ;% rtP.Integrator2_IC_dgk30gjhwf
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 1543;
	
	  ;% rtP.DesiredPosition4_Value
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 1549;
	
	  ;% rtP.DesiredPosition4_Value_pidnqqr40v
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 1550;
	
	  ;% rtP.FromWorkspace3_Time0
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 1551;
	
	  ;% rtP.FromWorkspace3_Data0
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 2152;
	
	  ;% rtP.Gain_Gain_a5iekrgwtt
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 2753;
	
	  ;% rtP.Gain1_Gain
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 2754;
	
	  ;% rtP.Switch_Threshold
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 2755;
	
	  ;% rtP.Switch2_Threshold
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 2756;
	
	  ;% rtP.Switch3_Threshold
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 2757;
	
	  ;% rtP.Constant1_Value
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 2758;
	
	  ;% rtP.TransferFcn4_A
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 2759;
	
	  ;% rtP.TransferFcn4_C
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 2760;
	
	  ;% rtP.Constant5_Value
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 2761;
	
	  ;% rtP.TransferFcn3_A_ijhjp45drc
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 2762;
	
	  ;% rtP.TransferFcn3_C_g24adbbwia
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 2763;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 107;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtB.n5xztpmvdo
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ptv2m3ufnc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.nhbjfwwdjl
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.lnnr0iw0cn
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 80;
      section.data(80)  = dumData; %prealloc
      
	  ;% rtB.lbn4luqpfw
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.fdipzybztz
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 12;
	
	  ;% rtB.gi1v4dqyzv
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 24;
	
	  ;% rtB.nbziqu4k4i
	  section.data(4).logicalSrcIdx = 7;
	  section.data(4).dtTransOffset = 36;
	
	  ;% rtB.jbtx2pjet0
	  section.data(5).logicalSrcIdx = 8;
	  section.data(5).dtTransOffset = 48;
	
	  ;% rtB.o5hqdwcanp
	  section.data(6).logicalSrcIdx = 9;
	  section.data(6).dtTransOffset = 49;
	
	  ;% rtB.gikzhfrh2r
	  section.data(7).logicalSrcIdx = 10;
	  section.data(7).dtTransOffset = 50;
	
	  ;% rtB.o1w4cyxkr0
	  section.data(8).logicalSrcIdx = 11;
	  section.data(8).dtTransOffset = 51;
	
	  ;% rtB.ittv15bcsa
	  section.data(9).logicalSrcIdx = 12;
	  section.data(9).dtTransOffset = 57;
	
	  ;% rtB.pdfkmj3akd
	  section.data(10).logicalSrcIdx = 13;
	  section.data(10).dtTransOffset = 60;
	
	  ;% rtB.itgoh1hxqp
	  section.data(11).logicalSrcIdx = 14;
	  section.data(11).dtTransOffset = 63;
	
	  ;% rtB.hngud44kjo
	  section.data(12).logicalSrcIdx = 15;
	  section.data(12).dtTransOffset = 69;
	
	  ;% rtB.o5fje2j3te
	  section.data(13).logicalSrcIdx = 16;
	  section.data(13).dtTransOffset = 72;
	
	  ;% rtB.lf5t1r3q3k
	  section.data(14).logicalSrcIdx = 17;
	  section.data(14).dtTransOffset = 78;
	
	  ;% rtB.mixz2kbbzd
	  section.data(15).logicalSrcIdx = 18;
	  section.data(15).dtTransOffset = 81;
	
	  ;% rtB.lpfnz5a2xn
	  section.data(16).logicalSrcIdx = 19;
	  section.data(16).dtTransOffset = 87;
	
	  ;% rtB.h01ja14scr
	  section.data(17).logicalSrcIdx = 20;
	  section.data(17).dtTransOffset = 93;
	
	  ;% rtB.gqx5b5eit1
	  section.data(18).logicalSrcIdx = 21;
	  section.data(18).dtTransOffset = 99;
	
	  ;% rtB.pxebxuyzlv
	  section.data(19).logicalSrcIdx = 22;
	  section.data(19).dtTransOffset = 105;
	
	  ;% rtB.asu0f2ijbr
	  section.data(20).logicalSrcIdx = 23;
	  section.data(20).dtTransOffset = 120;
	
	  ;% rtB.ow20kwohpt
	  section.data(21).logicalSrcIdx = 24;
	  section.data(21).dtTransOffset = 123;
	
	  ;% rtB.ktynx515e0
	  section.data(22).logicalSrcIdx = 25;
	  section.data(22).dtTransOffset = 126;
	
	  ;% rtB.gcxmhwbhns
	  section.data(23).logicalSrcIdx = 26;
	  section.data(23).dtTransOffset = 129;
	
	  ;% rtB.e2i3atu3ac
	  section.data(24).logicalSrcIdx = 27;
	  section.data(24).dtTransOffset = 132;
	
	  ;% rtB.j2pscqeale
	  section.data(25).logicalSrcIdx = 28;
	  section.data(25).dtTransOffset = 135;
	
	  ;% rtB.nfvj4bpva5
	  section.data(26).logicalSrcIdx = 29;
	  section.data(26).dtTransOffset = 138;
	
	  ;% rtB.cvpsjp1xqu
	  section.data(27).logicalSrcIdx = 30;
	  section.data(27).dtTransOffset = 141;
	
	  ;% rtB.myxakcrmqb
	  section.data(28).logicalSrcIdx = 31;
	  section.data(28).dtTransOffset = 144;
	
	  ;% rtB.ozfculoppj
	  section.data(29).logicalSrcIdx = 32;
	  section.data(29).dtTransOffset = 147;
	
	  ;% rtB.btqsez3icc
	  section.data(30).logicalSrcIdx = 33;
	  section.data(30).dtTransOffset = 150;
	
	  ;% rtB.htdjvfkvx0
	  section.data(31).logicalSrcIdx = 34;
	  section.data(31).dtTransOffset = 153;
	
	  ;% rtB.okuh0wfpjd
	  section.data(32).logicalSrcIdx = 35;
	  section.data(32).dtTransOffset = 156;
	
	  ;% rtB.mythggah1g
	  section.data(33).logicalSrcIdx = 36;
	  section.data(33).dtTransOffset = 159;
	
	  ;% rtB.g5dxvtvvft
	  section.data(34).logicalSrcIdx = 37;
	  section.data(34).dtTransOffset = 162;
	
	  ;% rtB.ptdcd1mp3v
	  section.data(35).logicalSrcIdx = 38;
	  section.data(35).dtTransOffset = 168;
	
	  ;% rtB.hokah0t1ey
	  section.data(36).logicalSrcIdx = 39;
	  section.data(36).dtTransOffset = 174;
	
	  ;% rtB.incdyqesqd
	  section.data(37).logicalSrcIdx = 40;
	  section.data(37).dtTransOffset = 180;
	
	  ;% rtB.afgqiftecc
	  section.data(38).logicalSrcIdx = 41;
	  section.data(38).dtTransOffset = 186;
	
	  ;% rtB.mcgappzh0a
	  section.data(39).logicalSrcIdx = 42;
	  section.data(39).dtTransOffset = 192;
	
	  ;% rtB.pm3zcgsze2
	  section.data(40).logicalSrcIdx = 43;
	  section.data(40).dtTransOffset = 198;
	
	  ;% rtB.kzomkkaldu
	  section.data(41).logicalSrcIdx = 44;
	  section.data(41).dtTransOffset = 204;
	
	  ;% rtB.gmpoamd1yl
	  section.data(42).logicalSrcIdx = 45;
	  section.data(42).dtTransOffset = 210;
	
	  ;% rtB.l4y53aslys
	  section.data(43).logicalSrcIdx = 46;
	  section.data(43).dtTransOffset = 216;
	
	  ;% rtB.oca1yeauge
	  section.data(44).logicalSrcIdx = 47;
	  section.data(44).dtTransOffset = 222;
	
	  ;% rtB.duuk0gubye
	  section.data(45).logicalSrcIdx = 48;
	  section.data(45).dtTransOffset = 228;
	
	  ;% rtB.ajig4v24ce
	  section.data(46).logicalSrcIdx = 49;
	  section.data(46).dtTransOffset = 234;
	
	  ;% rtB.fdryynjim2
	  section.data(47).logicalSrcIdx = 50;
	  section.data(47).dtTransOffset = 240;
	
	  ;% rtB.jsxfpjxi0q
	  section.data(48).logicalSrcIdx = 51;
	  section.data(48).dtTransOffset = 246;
	
	  ;% rtB.ki3bbacr2g
	  section.data(49).logicalSrcIdx = 52;
	  section.data(49).dtTransOffset = 252;
	
	  ;% rtB.nd5m5e34h4
	  section.data(50).logicalSrcIdx = 53;
	  section.data(50).dtTransOffset = 258;
	
	  ;% rtB.ievgosfumo
	  section.data(51).logicalSrcIdx = 54;
	  section.data(51).dtTransOffset = 264;
	
	  ;% rtB.fswysouih3
	  section.data(52).logicalSrcIdx = 55;
	  section.data(52).dtTransOffset = 270;
	
	  ;% rtB.b5uou53b4t
	  section.data(53).logicalSrcIdx = 56;
	  section.data(53).dtTransOffset = 271;
	
	  ;% rtB.fjuaz0z3oj
	  section.data(54).logicalSrcIdx = 57;
	  section.data(54).dtTransOffset = 272;
	
	  ;% rtB.oycm4jbgim
	  section.data(55).logicalSrcIdx = 58;
	  section.data(55).dtTransOffset = 273;
	
	  ;% rtB.pzwszwmdnd
	  section.data(56).logicalSrcIdx = 59;
	  section.data(56).dtTransOffset = 274;
	
	  ;% rtB.hozlr0pwk1
	  section.data(57).logicalSrcIdx = 60;
	  section.data(57).dtTransOffset = 275;
	
	  ;% rtB.d4hj01c1vg
	  section.data(58).logicalSrcIdx = 61;
	  section.data(58).dtTransOffset = 276;
	
	  ;% rtB.jeeth114rb
	  section.data(59).logicalSrcIdx = 62;
	  section.data(59).dtTransOffset = 277;
	
	  ;% rtB.kg1nnjy4y0
	  section.data(60).logicalSrcIdx = 63;
	  section.data(60).dtTransOffset = 278;
	
	  ;% rtB.lk5bwa3fu5
	  section.data(61).logicalSrcIdx = 64;
	  section.data(61).dtTransOffset = 284;
	
	  ;% rtB.o2hi21fjpg
	  section.data(62).logicalSrcIdx = 65;
	  section.data(62).dtTransOffset = 287;
	
	  ;% rtB.pqzidfucir
	  section.data(63).logicalSrcIdx = 66;
	  section.data(63).dtTransOffset = 288;
	
	  ;% rtB.hcmtphgh1v
	  section.data(64).logicalSrcIdx = 67;
	  section.data(64).dtTransOffset = 303;
	
	  ;% rtB.g3205b3ehz
	  section.data(65).logicalSrcIdx = 68;
	  section.data(65).dtTransOffset = 306;
	
	  ;% rtB.ctx14gz0mc
	  section.data(66).logicalSrcIdx = 69;
	  section.data(66).dtTransOffset = 309;
	
	  ;% rtB.axhl1ytdq1
	  section.data(67).logicalSrcIdx = 70;
	  section.data(67).dtTransOffset = 312;
	
	  ;% rtB.b0oya0sorf
	  section.data(68).logicalSrcIdx = 71;
	  section.data(68).dtTransOffset = 315;
	
	  ;% rtB.fxo2ztmqiq
	  section.data(69).logicalSrcIdx = 72;
	  section.data(69).dtTransOffset = 318;
	
	  ;% rtB.nc5l5ompcr
	  section.data(70).logicalSrcIdx = 73;
	  section.data(70).dtTransOffset = 321;
	
	  ;% rtB.odtp4k5ik4
	  section.data(71).logicalSrcIdx = 74;
	  section.data(71).dtTransOffset = 324;
	
	  ;% rtB.oxqbz15e3l
	  section.data(72).logicalSrcIdx = 75;
	  section.data(72).dtTransOffset = 327;
	
	  ;% rtB.d234fos3qo
	  section.data(73).logicalSrcIdx = 76;
	  section.data(73).dtTransOffset = 330;
	
	  ;% rtB.onz3z4vedl
	  section.data(74).logicalSrcIdx = 77;
	  section.data(74).dtTransOffset = 333;
	
	  ;% rtB.dmj2b1er01
	  section.data(75).logicalSrcIdx = 78;
	  section.data(75).dtTransOffset = 336;
	
	  ;% rtB.eko0owjdui
	  section.data(76).logicalSrcIdx = 79;
	  section.data(76).dtTransOffset = 339;
	
	  ;% rtB.jgni5sqhom
	  section.data(77).logicalSrcIdx = 80;
	  section.data(77).dtTransOffset = 342;
	
	  ;% rtB.kjivth4tcr
	  section.data(78).logicalSrcIdx = 81;
	  section.data(78).dtTransOffset = 345;
	
	  ;% rtB.m3bgszen3q
	  section.data(79).logicalSrcIdx = 82;
	  section.data(79).dtTransOffset = 348;
	
	  ;% rtB.mwunt1htil
	  section.data(80).logicalSrcIdx = 83;
	  section.data(80).dtTransOffset = 351;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.oxm0qdhvd1.mwv442a0wi
	  section.data(1).logicalSrcIdx = 84;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.newkwtnnyb.mwv442a0wi
	  section.data(1).logicalSrcIdx = 85;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.eume1su52i.mwv442a0wi
	  section.data(1).logicalSrcIdx = 86;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.bcakaosdk3.mwv442a0wi
	  section.data(1).logicalSrcIdx = 87;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hzg1zx3v41.mwv442a0wi
	  section.data(1).logicalSrcIdx = 88;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ltofzehbyr.mwv442a0wi
	  section.data(1).logicalSrcIdx = 89;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.axfkml5ixh.mwv442a0wi
	  section.data(1).logicalSrcIdx = 90;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.bra5bscetp.mwv442a0wi
	  section.data(1).logicalSrcIdx = 91;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.idrbq1s50x.mwv442a0wi
	  section.data(1).logicalSrcIdx = 92;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kku1cld2tf.mwv442a0wi
	  section.data(1).logicalSrcIdx = 93;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.e5ut0spxgg.mwv442a0wi
	  section.data(1).logicalSrcIdx = 94;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.nvxpjyra3b.mwv442a0wi
	  section.data(1).logicalSrcIdx = 95;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.bmskov3xln.mwv442a0wi
	  section.data(1).logicalSrcIdx = 96;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.b2dgeus3id.mwv442a0wi
	  section.data(1).logicalSrcIdx = 97;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kxpjd1a3pi.mwv442a0wi
	  section.data(1).logicalSrcIdx = 98;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(17) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.dwv0b3nbpt.mwv442a0wi
	  section.data(1).logicalSrcIdx = 99;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.nk3dg1co2i.iu3foypmzb
	  section.data(1).logicalSrcIdx = 100;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.fdngayugtw.lsl2hmd5f3
	  section.data(1).logicalSrcIdx = 101;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.c0oxtpeizm.lsl2hmd5f3
	  section.data(1).logicalSrcIdx = 102;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(21) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.phayf32gqx.lsl2hmd5f3
	  section.data(1).logicalSrcIdx = 103;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(22) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.cqfsohgyr0.lsl2hmd5f3
	  section.data(1).logicalSrcIdx = 104;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(23) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hewtmlrb4i.lsl2hmd5f3
	  section.data(1).logicalSrcIdx = 105;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(24) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.eu5twy3xqi.lsl2hmd5f3
	  section.data(1).logicalSrcIdx = 106;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(25) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.e3fsepjhu3.lsl2hmd5f3
	  section.data(1).logicalSrcIdx = 107;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(26) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.oor4lambv3.lsl2hmd5f3
	  section.data(1).logicalSrcIdx = 108;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(27) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.okynqnkfux.lfrnaagn2k
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(28) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.jvph4vnkr4.j50ump3tqb
	  section.data(1).logicalSrcIdx = 110;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(29) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.adhekhczer.iqrledjweq
	  section.data(1).logicalSrcIdx = 111;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(30) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.aruhpddimh.iu3foypmzb
	  section.data(1).logicalSrcIdx = 112;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(31) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kc2ijyeu0y.g0oikhinbf
	  section.data(1).logicalSrcIdx = 113;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(32) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.dtqe2jyuyw.ertj4nm0qu
	  section.data(1).logicalSrcIdx = 114;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(33) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hiuzcdovtx.ovkgcdutyp
	  section.data(1).logicalSrcIdx = 115;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(34) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.nbfgabjloh.dokc3h5z1d
	  section.data(1).logicalSrcIdx = 116;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(35) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.bf440oddgu.p0sifpbcra
	  section.data(1).logicalSrcIdx = 117;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.bf440oddgu.okla4d4php
	  section.data(2).logicalSrcIdx = 118;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtB.bf440oddgu.koxsf3yz0i
	  section.data(3).logicalSrcIdx = 119;
	  section.data(3).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(36) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.cdm1uy5lwx.ceslw2bcsd
	  section.data(1).logicalSrcIdx = 120;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(37) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.pffczfadw0.lgflny3vaf
	  section.data(1).logicalSrcIdx = 121;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(38) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ouqutwqspm.awuha2csho
	  section.data(1).logicalSrcIdx = 122;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(39) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.dnfgeeso11.jomd12grfe
	  section.data(1).logicalSrcIdx = 123;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(40) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.majmcadfuu.lsn2ixkb43
	  section.data(1).logicalSrcIdx = 124;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(41) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.gb4iihhqdp.oizdxburtj
	  section.data(1).logicalSrcIdx = 125;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(42) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.m2rbsbdny1.h5nzmu35n2
	  section.data(1).logicalSrcIdx = 126;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.m2rbsbdny1.h4qfg23klo
	  section.data(2).logicalSrcIdx = 127;
	  section.data(2).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(43) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.eda2vxrff0.do3vqytzlr
	  section.data(1).logicalSrcIdx = 128;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(44) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.aue1vbpmvj.dwzefkbt4i
	  section.data(1).logicalSrcIdx = 129;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(45) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.h5potfgoew.nnix5btgdj
	  section.data(1).logicalSrcIdx = 130;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(46) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.idhvdfhluc.psgobcrgrf
	  section.data(1).logicalSrcIdx = 131;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.idhvdfhluc.kh3hogern0
	  section.data(2).logicalSrcIdx = 132;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(47) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.jwexpeel5j.lfrnaagn2k
	  section.data(1).logicalSrcIdx = 133;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(48) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.iief32edxg.j50ump3tqb
	  section.data(1).logicalSrcIdx = 134;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(49) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.m3u1mc53xu.iqrledjweq
	  section.data(1).logicalSrcIdx = 135;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(50) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.i2taelcq5m.iu3foypmzb
	  section.data(1).logicalSrcIdx = 136;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(51) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.lssgckg42l.g0oikhinbf
	  section.data(1).logicalSrcIdx = 137;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(52) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ex1zkqtfgv.ertj4nm0qu
	  section.data(1).logicalSrcIdx = 138;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(53) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.b20p2q3lgq.ovkgcdutyp
	  section.data(1).logicalSrcIdx = 139;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(54) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.b44jbvl1vq.dokc3h5z1d
	  section.data(1).logicalSrcIdx = 140;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(55) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.c1eq5vcpx4.p0sifpbcra
	  section.data(1).logicalSrcIdx = 141;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.c1eq5vcpx4.okla4d4php
	  section.data(2).logicalSrcIdx = 142;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtB.c1eq5vcpx4.koxsf3yz0i
	  section.data(3).logicalSrcIdx = 143;
	  section.data(3).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(56) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.cxm1w1zufa.ceslw2bcsd
	  section.data(1).logicalSrcIdx = 144;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(57) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.fbh4dqoyov.lgflny3vaf
	  section.data(1).logicalSrcIdx = 145;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(58) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.fay2vqnghf.awuha2csho
	  section.data(1).logicalSrcIdx = 146;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(59) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ofvqlpwckb.jomd12grfe
	  section.data(1).logicalSrcIdx = 147;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(60) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.co5vre2gwb.lsn2ixkb43
	  section.data(1).logicalSrcIdx = 148;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(61) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.jjieidn0fp.oizdxburtj
	  section.data(1).logicalSrcIdx = 149;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(62) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.dm0iynorl1.h5nzmu35n2
	  section.data(1).logicalSrcIdx = 150;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.dm0iynorl1.h4qfg23klo
	  section.data(2).logicalSrcIdx = 151;
	  section.data(2).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(63) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.bg42xqoh1c.do3vqytzlr
	  section.data(1).logicalSrcIdx = 152;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(64) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.k1qsnregiz.dwzefkbt4i
	  section.data(1).logicalSrcIdx = 153;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(65) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.n2gxek1ysk.nnix5btgdj
	  section.data(1).logicalSrcIdx = 154;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(66) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.li222mg0tu.psgobcrgrf
	  section.data(1).logicalSrcIdx = 155;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.li222mg0tu.kh3hogern0
	  section.data(2).logicalSrcIdx = 156;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(67) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.mtut1sc5t2.lfrnaagn2k
	  section.data(1).logicalSrcIdx = 157;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(68) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.oeqeegnqph.j50ump3tqb
	  section.data(1).logicalSrcIdx = 158;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(69) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.psbegwgczo.iqrledjweq
	  section.data(1).logicalSrcIdx = 159;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(70) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ftxqlzmaxy.iu3foypmzb
	  section.data(1).logicalSrcIdx = 160;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(71) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.aeorekhod3.g0oikhinbf
	  section.data(1).logicalSrcIdx = 161;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(72) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.avlxughyns.ertj4nm0qu
	  section.data(1).logicalSrcIdx = 162;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(73) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.du2lrvbx5h.ovkgcdutyp
	  section.data(1).logicalSrcIdx = 163;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(74) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.d2q5qnt0b3.dokc3h5z1d
	  section.data(1).logicalSrcIdx = 164;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(75) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.jbgetkuxaj.p0sifpbcra
	  section.data(1).logicalSrcIdx = 165;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.jbgetkuxaj.okla4d4php
	  section.data(2).logicalSrcIdx = 166;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtB.jbgetkuxaj.koxsf3yz0i
	  section.data(3).logicalSrcIdx = 167;
	  section.data(3).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(76) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.dhlomykkky.ceslw2bcsd
	  section.data(1).logicalSrcIdx = 168;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(77) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.htfczxwbqt.lgflny3vaf
	  section.data(1).logicalSrcIdx = 169;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(78) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.f251a30bl5.awuha2csho
	  section.data(1).logicalSrcIdx = 170;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(79) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hdtx0qvcg5.jomd12grfe
	  section.data(1).logicalSrcIdx = 171;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(80) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.evhpd5pqdh.lsn2ixkb43
	  section.data(1).logicalSrcIdx = 172;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(81) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.odecv1tkpq.oizdxburtj
	  section.data(1).logicalSrcIdx = 173;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(82) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.frmzupx0zv.h5nzmu35n2
	  section.data(1).logicalSrcIdx = 174;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.frmzupx0zv.h4qfg23klo
	  section.data(2).logicalSrcIdx = 175;
	  section.data(2).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(83) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.f20gcf5hzy.do3vqytzlr
	  section.data(1).logicalSrcIdx = 176;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(84) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.d3xq0g2bn4.dwzefkbt4i
	  section.data(1).logicalSrcIdx = 177;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(85) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.l2ylxix2y4.nnix5btgdj
	  section.data(1).logicalSrcIdx = 178;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(86) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.bbinms31xh.psgobcrgrf
	  section.data(1).logicalSrcIdx = 179;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.bbinms31xh.kh3hogern0
	  section.data(2).logicalSrcIdx = 180;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(87) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.oa3j2mackf.lfrnaagn2k
	  section.data(1).logicalSrcIdx = 181;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(88) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.koohydnldu.j50ump3tqb
	  section.data(1).logicalSrcIdx = 182;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(89) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.or1qu0lbxa.iqrledjweq
	  section.data(1).logicalSrcIdx = 183;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(90) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.d0b2e2tbom.iu3foypmzb
	  section.data(1).logicalSrcIdx = 184;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(91) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.geh5ssntfp.g0oikhinbf
	  section.data(1).logicalSrcIdx = 185;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(92) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kv2bmipsop.ertj4nm0qu
	  section.data(1).logicalSrcIdx = 186;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(93) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.oqlntds35a.ovkgcdutyp
	  section.data(1).logicalSrcIdx = 187;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(94) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.gnq3tqucqn.dokc3h5z1d
	  section.data(1).logicalSrcIdx = 188;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(95) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.ejm1xz1i3s.p0sifpbcra
	  section.data(1).logicalSrcIdx = 189;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ejm1xz1i3s.okla4d4php
	  section.data(2).logicalSrcIdx = 190;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtB.ejm1xz1i3s.koxsf3yz0i
	  section.data(3).logicalSrcIdx = 191;
	  section.data(3).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(96) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.aoni3btcrm.ceslw2bcsd
	  section.data(1).logicalSrcIdx = 192;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(97) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.br1bl3k0ub.lgflny3vaf
	  section.data(1).logicalSrcIdx = 193;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(98) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.czp4tvzurt.awuha2csho
	  section.data(1).logicalSrcIdx = 194;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(99) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.bx3nl12y2l.jomd12grfe
	  section.data(1).logicalSrcIdx = 195;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(100) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.etbc3ao3mx.lsn2ixkb43
	  section.data(1).logicalSrcIdx = 196;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(101) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.a2ww44jm1e.oizdxburtj
	  section.data(1).logicalSrcIdx = 197;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(102) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.by50irynec.h5nzmu35n2
	  section.data(1).logicalSrcIdx = 198;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.by50irynec.h4qfg23klo
	  section.data(2).logicalSrcIdx = 199;
	  section.data(2).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(103) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.khvlym1mbm.do3vqytzlr
	  section.data(1).logicalSrcIdx = 200;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(104) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ounrqp0kqp.dwzefkbt4i
	  section.data(1).logicalSrcIdx = 201;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(105) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ndp0ayzs4j.nnix5btgdj
	  section.data(1).logicalSrcIdx = 202;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(106) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.kqhftxu5gq.psgobcrgrf
	  section.data(1).logicalSrcIdx = 203;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.kqhftxu5gq.kh3hogern0
	  section.data(2).logicalSrcIdx = 204;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(107) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 107;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 28;
      section.data(28)  = dumData; %prealloc
      
	  ;% rtDW.kstiocozka
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.f0c002qbsv
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtDW.pqpmtevv2j
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 7;
	
	  ;% rtDW.mv5h2lqtxu
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 10;
	
	  ;% rtDW.dr2fd4czo0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 11;
	
	  ;% rtDW.j2jsulvdm1
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 14;
	
	  ;% rtDW.ekpr5jhh05
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 15;
	
	  ;% rtDW.pjv2r5rhzy
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 18;
	
	  ;% rtDW.it1tzyqmx3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 19;
	
	  ;% rtDW.hwmovhfzf2
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 22;
	
	  ;% rtDW.be0imqxqro
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 28;
	
	  ;% rtDW.mx4qqpknqe
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 43;
	
	  ;% rtDW.cbxnmjiv35
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 58;
	
	  ;% rtDW.j3sy2mrawp
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 73;
	
	  ;% rtDW.ha4pdvtcus
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 88;
	
	  ;% rtDW.coqd1tvx1u
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 91;
	
	  ;% rtDW.jof3zfdlkv
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 94;
	
	  ;% rtDW.pkkl0tyrak
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 97;
	
	  ;% rtDW.ps4xa0zgh4
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 100;
	
	  ;% rtDW.ndbjd515lt
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 103;
	
	  ;% rtDW.d4dmyhlqbm
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 106;
	
	  ;% rtDW.kuepayhel0
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 109;
	
	  ;% rtDW.idvr4rh4mu
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 112;
	
	  ;% rtDW.fztt0z3pyb
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 118;
	
	  ;% rtDW.lmomxeodsu
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 124;
	
	  ;% rtDW.lgcgglfpr5
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 130;
	
	  ;% rtDW.ofcsp2xnjt
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 136;
	
	  ;% rtDW.ktoqhjnspo
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 142;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 90;
      section.data(90)  = dumData; %prealloc
      
	  ;% rtDW.bfeqkoqnt0.LoggedData
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.dfy0trg5d3.LoggedData
	  section.data(2).logicalSrcIdx = 29;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.m1lw4tfunw.LoggedData
	  section.data(3).logicalSrcIdx = 30;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.jsn4enjaye.LoggedData
	  section.data(4).logicalSrcIdx = 31;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.pefmvwipw1.LoggedData
	  section.data(5).logicalSrcIdx = 32;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.dlnw4t3lpd.LoggedData
	  section.data(6).logicalSrcIdx = 33;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.mehswlvtgm.LoggedData
	  section.data(7).logicalSrcIdx = 34;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.e0q5csdiqq.LoggedData
	  section.data(8).logicalSrcIdx = 35;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.ow3bgvrozh.LoggedData
	  section.data(9).logicalSrcIdx = 36;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.htmtyfuajr.LoggedData
	  section.data(10).logicalSrcIdx = 37;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.ivtbksha2x.LoggedData
	  section.data(11).logicalSrcIdx = 38;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.d1f1pxq0cv.LoggedData
	  section.data(12).logicalSrcIdx = 39;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.cacxxwupgo.LoggedData
	  section.data(13).logicalSrcIdx = 40;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.npkprrtqrd.LoggedData
	  section.data(14).logicalSrcIdx = 41;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.iq2uo11o1r.LoggedData
	  section.data(15).logicalSrcIdx = 42;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.ptospcrjav.LoggedData
	  section.data(16).logicalSrcIdx = 43;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.iuen3vwhwf.LoggedData
	  section.data(17).logicalSrcIdx = 44;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.k1i2cgujxx.LoggedData
	  section.data(18).logicalSrcIdx = 45;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.o1qmdgtcqs.LoggedData
	  section.data(19).logicalSrcIdx = 46;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.ahgn3ni2nd.LoggedData
	  section.data(20).logicalSrcIdx = 47;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.ftsenby5we.LoggedData
	  section.data(21).logicalSrcIdx = 48;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.axnhqeg3ue.LoggedData
	  section.data(22).logicalSrcIdx = 49;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.jyofunjeyz.LoggedData
	  section.data(23).logicalSrcIdx = 50;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.hv1dj310ft.LoggedData
	  section.data(24).logicalSrcIdx = 51;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.kmcrsn1rom.LoggedData
	  section.data(25).logicalSrcIdx = 52;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.pjf4td5nr0.LoggedData
	  section.data(26).logicalSrcIdx = 53;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.ijkymdxn5s.LoggedData
	  section.data(27).logicalSrcIdx = 54;
	  section.data(27).dtTransOffset = 28;
	
	  ;% rtDW.i1wwy5n5rc.TimePtr
	  section.data(28).logicalSrcIdx = 55;
	  section.data(28).dtTransOffset = 31;
	
	  ;% rtDW.hzwyeasm43.LoggedData
	  section.data(29).logicalSrcIdx = 56;
	  section.data(29).dtTransOffset = 32;
	
	  ;% rtDW.j4nrepcgpu.LoggedData
	  section.data(30).logicalSrcIdx = 57;
	  section.data(30).dtTransOffset = 33;
	
	  ;% rtDW.camjz1utpm.LoggedData
	  section.data(31).logicalSrcIdx = 58;
	  section.data(31).dtTransOffset = 34;
	
	  ;% rtDW.h34d0dz1tx.LoggedData
	  section.data(32).logicalSrcIdx = 59;
	  section.data(32).dtTransOffset = 35;
	
	  ;% rtDW.eqqgpwzsvq.LoggedData
	  section.data(33).logicalSrcIdx = 60;
	  section.data(33).dtTransOffset = 36;
	
	  ;% rtDW.dgeamk1wo2.LoggedData
	  section.data(34).logicalSrcIdx = 61;
	  section.data(34).dtTransOffset = 37;
	
	  ;% rtDW.lhreu3iook.LoggedData
	  section.data(35).logicalSrcIdx = 62;
	  section.data(35).dtTransOffset = 38;
	
	  ;% rtDW.du1u11a542.LoggedData
	  section.data(36).logicalSrcIdx = 63;
	  section.data(36).dtTransOffset = 39;
	
	  ;% rtDW.hdz014mlxm.LoggedData
	  section.data(37).logicalSrcIdx = 64;
	  section.data(37).dtTransOffset = 40;
	
	  ;% rtDW.givugmca51.LoggedData
	  section.data(38).logicalSrcIdx = 65;
	  section.data(38).dtTransOffset = 41;
	
	  ;% rtDW.atjwpkepvl.LoggedData
	  section.data(39).logicalSrcIdx = 66;
	  section.data(39).dtTransOffset = 42;
	
	  ;% rtDW.lmit2h4t34.LoggedData
	  section.data(40).logicalSrcIdx = 67;
	  section.data(40).dtTransOffset = 43;
	
	  ;% rtDW.kczpusi2s1.LoggedData
	  section.data(41).logicalSrcIdx = 68;
	  section.data(41).dtTransOffset = 44;
	
	  ;% rtDW.ij1bjq2pp1.LoggedData
	  section.data(42).logicalSrcIdx = 69;
	  section.data(42).dtTransOffset = 45;
	
	  ;% rtDW.n0iqt32sfp.LoggedData
	  section.data(43).logicalSrcIdx = 70;
	  section.data(43).dtTransOffset = 46;
	
	  ;% rtDW.kljv1hxyju.LoggedData
	  section.data(44).logicalSrcIdx = 71;
	  section.data(44).dtTransOffset = 47;
	
	  ;% rtDW.kn41ewqeq3.LoggedData
	  section.data(45).logicalSrcIdx = 72;
	  section.data(45).dtTransOffset = 48;
	
	  ;% rtDW.hhoqznvhi3.LoggedData
	  section.data(46).logicalSrcIdx = 73;
	  section.data(46).dtTransOffset = 49;
	
	  ;% rtDW.agu3biksdl.LoggedData
	  section.data(47).logicalSrcIdx = 74;
	  section.data(47).dtTransOffset = 50;
	
	  ;% rtDW.lnkqhumnxa.LoggedData
	  section.data(48).logicalSrcIdx = 75;
	  section.data(48).dtTransOffset = 51;
	
	  ;% rtDW.ecdze0zcrs.LoggedData
	  section.data(49).logicalSrcIdx = 76;
	  section.data(49).dtTransOffset = 52;
	
	  ;% rtDW.ntjqns0oae.LoggedData
	  section.data(50).logicalSrcIdx = 77;
	  section.data(50).dtTransOffset = 53;
	
	  ;% rtDW.nzjvtx2drp.LoggedData
	  section.data(51).logicalSrcIdx = 78;
	  section.data(51).dtTransOffset = 54;
	
	  ;% rtDW.ludcryuovc.LoggedData
	  section.data(52).logicalSrcIdx = 79;
	  section.data(52).dtTransOffset = 55;
	
	  ;% rtDW.jhug4f4fnn.LoggedData
	  section.data(53).logicalSrcIdx = 80;
	  section.data(53).dtTransOffset = 56;
	
	  ;% rtDW.peyk0za1jj.LoggedData
	  section.data(54).logicalSrcIdx = 81;
	  section.data(54).dtTransOffset = 57;
	
	  ;% rtDW.nmnsqs0foz.LoggedData
	  section.data(55).logicalSrcIdx = 82;
	  section.data(55).dtTransOffset = 58;
	
	  ;% rtDW.lunjbjcbzb.LoggedData
	  section.data(56).logicalSrcIdx = 83;
	  section.data(56).dtTransOffset = 59;
	
	  ;% rtDW.lpq1kb1sjr.LoggedData
	  section.data(57).logicalSrcIdx = 84;
	  section.data(57).dtTransOffset = 60;
	
	  ;% rtDW.l4tovimwan.LoggedData
	  section.data(58).logicalSrcIdx = 85;
	  section.data(58).dtTransOffset = 61;
	
	  ;% rtDW.kwk1qgvysg.LoggedData
	  section.data(59).logicalSrcIdx = 86;
	  section.data(59).dtTransOffset = 62;
	
	  ;% rtDW.bkcvxpj14h.LoggedData
	  section.data(60).logicalSrcIdx = 87;
	  section.data(60).dtTransOffset = 63;
	
	  ;% rtDW.fq2moqhx1k.LoggedData
	  section.data(61).logicalSrcIdx = 88;
	  section.data(61).dtTransOffset = 64;
	
	  ;% rtDW.nkzxvnpzaq.LoggedData
	  section.data(62).logicalSrcIdx = 89;
	  section.data(62).dtTransOffset = 65;
	
	  ;% rtDW.phclb1hosq.LoggedData
	  section.data(63).logicalSrcIdx = 90;
	  section.data(63).dtTransOffset = 66;
	
	  ;% rtDW.hlltd51e5p.LoggedData
	  section.data(64).logicalSrcIdx = 91;
	  section.data(64).dtTransOffset = 67;
	
	  ;% rtDW.kjead5tgs4.LoggedData
	  section.data(65).logicalSrcIdx = 92;
	  section.data(65).dtTransOffset = 68;
	
	  ;% rtDW.mbjldeeb4d.LoggedData
	  section.data(66).logicalSrcIdx = 93;
	  section.data(66).dtTransOffset = 69;
	
	  ;% rtDW.lnpvpj0cx3.LoggedData
	  section.data(67).logicalSrcIdx = 94;
	  section.data(67).dtTransOffset = 70;
	
	  ;% rtDW.jcai3h0pvz.LoggedData
	  section.data(68).logicalSrcIdx = 95;
	  section.data(68).dtTransOffset = 71;
	
	  ;% rtDW.cxb5ckleoa.LoggedData
	  section.data(69).logicalSrcIdx = 96;
	  section.data(69).dtTransOffset = 72;
	
	  ;% rtDW.oapfejjykt.LoggedData
	  section.data(70).logicalSrcIdx = 97;
	  section.data(70).dtTransOffset = 73;
	
	  ;% rtDW.orsxbm3qij.LoggedData
	  section.data(71).logicalSrcIdx = 98;
	  section.data(71).dtTransOffset = 74;
	
	  ;% rtDW.cn2rx14hit.LoggedData
	  section.data(72).logicalSrcIdx = 99;
	  section.data(72).dtTransOffset = 75;
	
	  ;% rtDW.bnzftshx34.LoggedData
	  section.data(73).logicalSrcIdx = 100;
	  section.data(73).dtTransOffset = 76;
	
	  ;% rtDW.b3h2bgfvmf.LoggedData
	  section.data(74).logicalSrcIdx = 101;
	  section.data(74).dtTransOffset = 77;
	
	  ;% rtDW.ovnjs4iqgp.LoggedData
	  section.data(75).logicalSrcIdx = 102;
	  section.data(75).dtTransOffset = 78;
	
	  ;% rtDW.c0vkh1nckw.LoggedData
	  section.data(76).logicalSrcIdx = 103;
	  section.data(76).dtTransOffset = 79;
	
	  ;% rtDW.lzksfbzheq.LoggedData
	  section.data(77).logicalSrcIdx = 104;
	  section.data(77).dtTransOffset = 80;
	
	  ;% rtDW.bm3qbtlsvl.LoggedData
	  section.data(78).logicalSrcIdx = 105;
	  section.data(78).dtTransOffset = 81;
	
	  ;% rtDW.lbh2v4cxsw.LoggedData
	  section.data(79).logicalSrcIdx = 106;
	  section.data(79).dtTransOffset = 82;
	
	  ;% rtDW.gngxoqyce2.LoggedData
	  section.data(80).logicalSrcIdx = 107;
	  section.data(80).dtTransOffset = 83;
	
	  ;% rtDW.j4t5utnqsu.LoggedData
	  section.data(81).logicalSrcIdx = 108;
	  section.data(81).dtTransOffset = 84;
	
	  ;% rtDW.ohhdayxsqf.LoggedData
	  section.data(82).logicalSrcIdx = 109;
	  section.data(82).dtTransOffset = 85;
	
	  ;% rtDW.hw5kuuf0zz.LoggedData
	  section.data(83).logicalSrcIdx = 110;
	  section.data(83).dtTransOffset = 86;
	
	  ;% rtDW.flmxkmsuse.LoggedData
	  section.data(84).logicalSrcIdx = 111;
	  section.data(84).dtTransOffset = 87;
	
	  ;% rtDW.dnfwnpgyjn.LoggedData
	  section.data(85).logicalSrcIdx = 112;
	  section.data(85).dtTransOffset = 88;
	
	  ;% rtDW.nnpouilxcu.LoggedData
	  section.data(86).logicalSrcIdx = 113;
	  section.data(86).dtTransOffset = 89;
	
	  ;% rtDW.hr2cuewb1d.LoggedData
	  section.data(87).logicalSrcIdx = 114;
	  section.data(87).dtTransOffset = 90;
	
	  ;% rtDW.mnpnnxmz24.LoggedData
	  section.data(88).logicalSrcIdx = 115;
	  section.data(88).dtTransOffset = 91;
	
	  ;% rtDW.g1kahszp5p.LoggedData
	  section.data(89).logicalSrcIdx = 116;
	  section.data(89).dtTransOffset = 92;
	
	  ;% rtDW.mi4rj5pvhr.LoggedData
	  section.data(90).logicalSrcIdx = 117;
	  section.data(90).dtTransOffset = 93;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.abl3fffzqi.PrevIndex
	  section.data(1).logicalSrcIdx = 118;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.m1udjgpeyw
	  section.data(2).logicalSrcIdx = 119;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.bjfbg3j4bh
	  section.data(3).logicalSrcIdx = 120;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.cjep00xofb
	  section.data(1).logicalSrcIdx = 121;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.er0mumta3j
	  section.data(2).logicalSrcIdx = 122;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cyoxgzoski
	  section.data(3).logicalSrcIdx = 123;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 4104019630;
  targMap.checksum1 = 3045784979;
  targMap.checksum2 = 3358501291;
  targMap.checksum3 = 2260817830;

