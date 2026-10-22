/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd20c820 (ELF vaddr 0xd10c820)
 * Label: caller-of-callee
 * Body:  [[0d20c820, 0d20ff60] [0d20ff70, 0d20ffc6] [0d20ffd0, 0d210475] [0d210480, 0d2104c8] [0d2104d0, 0d2106e0] [0d2106f0, 0d210714] [0d210720, 0d2113b4] [0d2114ff, 0d211525] [0d2124b1, 0d2124d3] [0d212586, 0d21259b]]
 * Ghidra: FUN_0d20c820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d20c820(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  bool bVar33;
  undefined1 auVar34 [16];
  ulong *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long *plVar38;
  byte bVar39;
  char cVar40;
  int iVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  undefined4 *puVar45;
  byte *pbVar46;
  undefined8 uVar47;
  long *plVar48;
  ulong **ppuVar49;
  long *plVar50;
  char *pcVar51;
  ulong ***pppuVar52;
  undefined4 *puVar53;
  int *piVar54;
  byte *pbVar55;
  char *pcVar56;
  undefined *puVar57;
  undefined4 uVar58;
  uint uVar59;
  char *pcVar60;
  char *pcVar61;
  undefined *puVar62;
  char *pcVar63;
  char *pcVar64;
  char *unaff_R13;
  undefined1 (*pauVar65) [16];
  ulong uVar66;
  long *plVar67;
  bool bVar68;
  byte bVar69;
  byte bVar71;
  byte bVar73;
  byte bVar75;
  byte bVar77;
  byte bVar79;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  undefined8 uStack_a48;
  char *pcStack_a40;
  undefined1 auStack_a38 [16];
  long lStack_a28;
  long lStack_a18;
  long lStack_a10;
  undefined8 uStack_a08;
  char *pcStack_a00;
  undefined1 auStack_9f8 [16];
  undefined1 auStack_9e8 [16];
  ulong uStack_9d8;
  undefined1 uStack_9c9;
  undefined1 auStack_9c8 [16];
  ulong ***pppuStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 ****ppppuStack_9a0;
  ulong **ppuStack_998;
  char *pcStack_990;
  undefined8 uStack_988;
  byte bStack_978;
  undefined5 uStack_977;
  undefined2 uStack_972;
  undefined1 uStack_970;
  undefined5 uStack_96f;
  undefined1 uStack_96a;
  undefined8 uStack_968;
  byte bStack_960;
  undefined7 uStack_95f;
  undefined4 uStack_958;
  undefined1 uStack_954;
  undefined8 uStack_950;
  byte bStack_948;
  undefined7 uStack_947;
  undefined1 uStack_940;
  undefined7 uStack_93f;
  undefined1 uStack_938;
  undefined2 uStack_937;
  undefined1 uStack_935;
  undefined4 uStack_934;
  byte bStack_930;
  undefined7 uStack_92f;
  undefined1 uStack_928;
  undefined7 uStack_927;
  undefined1 uStack_920;
  undefined4 uStack_91f;
  undefined1 uStack_91b;
  undefined2 uStack_91a;
  byte bStack_918;
  undefined7 uStack_917;
  undefined1 uStack_910;
  undefined7 uStack_90f;
  undefined4 uStack_908;
  uint uStack_904;
  byte bStack_900;
  undefined7 uStack_8ff;
  undefined1 uStack_8f8;
  undefined7 uStack_8f7;
  undefined4 uStack_8f0;
  uint uStack_8ec;
  byte bStack_8e8;
  undefined7 uStack_8e7;
  undefined1 uStack_8e0;
  undefined7 uStack_8df;
  undefined1 uStack_8d8;
  undefined2 uStack_8d7;
  undefined1 uStack_8d5;
  undefined4 uStack_8d4;
  byte bStack_8d0;
  undefined7 uStack_8cf;
  undefined1 uStack_8c8;
  undefined7 uStack_8c7;
  undefined1 uStack_8c0;
  undefined2 uStack_8bf;
  undefined1 uStack_8bd;
  undefined4 uStack_8bc;
  byte bStack_8b8;
  undefined7 uStack_8b7;
  undefined1 uStack_8b0;
  undefined4 uStack_8af;
  undefined1 uStack_8ab;
  undefined8 uStack_8a8;
  byte bStack_8a0;
  undefined7 uStack_89f;
  undefined1 uStack_898;
  undefined5 uStack_897;
  undefined2 uStack_892;
  undefined1 uStack_890;
  undefined5 uStack_88f;
  undefined1 uStack_88a;
  undefined1 uStack_889;
  byte bStack_888;
  undefined7 uStack_887;
  undefined1 uStack_880;
  undefined7 uStack_87f;
  undefined4 uStack_878;
  uint uStack_874;
  byte bStack_870;
  undefined7 uStack_86f;
  undefined1 uStack_868;
  undefined7 uStack_867;
  undefined4 uStack_860;
  uint uStack_85c;
  byte bStack_858;
  undefined7 uStack_857;
  undefined1 uStack_850;
  undefined7 uStack_84f;
  undefined1 uStack_848;
  undefined4 uStack_847;
  undefined1 uStack_843;
  undefined2 uStack_842;
  byte bStack_840;
  undefined7 uStack_83f;
  undefined1 uStack_838;
  undefined5 uStack_837;
  undefined2 uStack_832;
  undefined1 uStack_830;
  undefined5 uStack_82f;
  undefined1 uStack_82a;
  undefined1 uStack_829;
  byte bStack_828;
  undefined7 uStack_827;
  undefined1 uStack_820;
  undefined5 uStack_81f;
  undefined2 uStack_81a;
  undefined1 uStack_818;
  undefined5 uStack_817;
  undefined1 uStack_812;
  undefined1 uStack_811;
  byte bStack_810;
  undefined7 uStack_80f;
  undefined1 uStack_808;
  undefined7 uStack_807;
  undefined1 uStack_800;
  undefined4 uStack_7ff;
  undefined1 uStack_7fb;
  undefined2 uStack_7fa;
  byte bStack_7f8;
  undefined7 uStack_7f7;
  undefined1 uStack_7f0;
  undefined7 uStack_7ef;
  undefined1 uStack_7e8;
  undefined7 uStack_7e7;
  byte bStack_7e0;
  undefined5 uStack_7df;
  undefined2 uStack_7da;
  undefined1 uStack_7d8;
  undefined5 uStack_7d7;
  undefined1 uStack_7d2;
  undefined8 uStack_7d0;
  byte bStack_7c8;
  undefined7 uStack_7c7;
  undefined1 uStack_7c0;
  undefined7 uStack_7bf;
  undefined1 uStack_7b8;
  undefined2 uStack_7b7;
  undefined1 uStack_7b5;
  undefined4 uStack_7b4;
  byte bStack_7b0;
  undefined7 uStack_7af;
  undefined1 uStack_7a8;
  undefined4 uStack_7a7;
  undefined1 uStack_7a3;
  undefined8 uStack_7a0;
  byte bStack_798;
  undefined7 uStack_797;
  undefined1 uStack_790;
  undefined7 uStack_78f;
  undefined1 uStack_788;
  undefined2 uStack_787;
  undefined1 uStack_785;
  undefined4 uStack_784;
  byte bStack_780;
  undefined7 uStack_77f;
  undefined1 uStack_778;
  undefined7 uStack_777;
  undefined1 uStack_770;
  undefined7 uStack_76f;
  byte bStack_768;
  undefined7 uStack_767;
  undefined1 uStack_760;
  undefined5 uStack_75f;
  undefined2 uStack_75a;
  undefined1 uStack_758;
  undefined5 uStack_757;
  undefined1 uStack_752;
  undefined1 uStack_751;
  byte bStack_750;
  undefined6 uStack_74f;
  undefined1 uStack_749;
  undefined1 uStack_748;
  undefined6 uStack_747;
  undefined1 uStack_741;
  undefined8 uStack_740;
  byte bStack_738;
  undefined7 uStack_737;
  undefined1 uStack_730;
  undefined7 uStack_72f;
  undefined1 uStack_728;
  undefined7 uStack_727;
  byte bStack_720;
  undefined7 uStack_71f;
  undefined1 uStack_718;
  undefined7 uStack_717;
  undefined1 uStack_710;
  undefined4 uStack_70f;
  undefined1 uStack_70b;
  undefined2 uStack_70a;
  byte bStack_708;
  undefined5 uStack_707;
  undefined2 uStack_702;
  undefined1 uStack_700;
  undefined5 uStack_6ff;
  undefined1 uStack_6fa;
  undefined8 uStack_6f8;
  byte bStack_6f0;
  undefined6 uStack_6ef;
  undefined1 uStack_6e9;
  undefined1 uStack_6e8;
  undefined6 uStack_6e7;
  undefined1 uStack_6e1;
  undefined8 uStack_6e0;
  byte bStack_6d8;
  undefined7 uStack_6d7;
  undefined4 uStack_6d0;
  undefined1 uStack_6cc;
  undefined8 uStack_6c8;
  byte bStack_6c0;
  undefined7 uStack_6bf;
  undefined1 uStack_6b8;
  undefined7 uStack_6b7;
  undefined1 uStack_6b0;
  undefined7 uStack_6af;
  byte bStack_6a8;
  undefined7 uStack_6a7;
  undefined1 uStack_6a0;
  undefined7 uStack_69f;
  undefined4 uStack_698;
  uint uStack_694;
  byte bStack_690;
  undefined7 uStack_68f;
  undefined1 uStack_688;
  undefined7 uStack_687;
  undefined4 uStack_680;
  uint uStack_67c;
  byte bStack_678;
  undefined7 uStack_677;
  undefined1 uStack_670;
  undefined7 uStack_66f;
  undefined4 uStack_668;
  uint uStack_664;
  byte bStack_660;
  undefined7 uStack_65f;
  undefined1 uStack_658;
  undefined7 uStack_657;
  undefined1 uStack_650;
  undefined7 uStack_64f;
  byte bStack_648;
  undefined7 uStack_647;
  undefined1 uStack_640;
  undefined4 uStack_63f;
  undefined1 uStack_63b;
  undefined8 uStack_638;
  byte bStack_630;
  undefined6 uStack_62f;
  undefined1 uStack_629;
  undefined1 uStack_628;
  undefined6 uStack_627;
  undefined1 uStack_621;
  undefined8 uStack_620;
  byte bStack_618;
  undefined6 uStack_617;
  undefined1 uStack_611;
  undefined1 uStack_610;
  undefined6 uStack_60f;
  undefined1 uStack_609;
  undefined8 uStack_608;
  byte bStack_600;
  undefined7 uStack_5ff;
  undefined1 uStack_5f8;
  undefined2 uStack_5f7;
  undefined1 uStack_5f5;
  undefined8 uStack_5f0;
  byte bStack_5e8;
  undefined4 uStack_5e7;
  undefined2 uStack_5e3;
  undefined1 uStack_5e1;
  undefined8 uStack_5d8;
  byte bStack_5d0;
  undefined4 uStack_5cf;
  undefined2 uStack_5cb;
  undefined1 uStack_5c9;
  undefined8 uStack_5c0;
  byte bStack_5b8;
  undefined4 uStack_5b7;
  undefined2 uStack_5b3;
  undefined1 uStack_5b1;
  undefined8 uStack_5a8;
  byte bStack_5a0;
  undefined5 uStack_59f;
  undefined2 uStack_59a;
  undefined1 uStack_598;
  undefined5 uStack_597;
  undefined1 uStack_592;
  undefined8 uStack_590;
  byte bStack_588;
  undefined5 uStack_587;
  undefined2 uStack_582;
  undefined1 uStack_580;
  undefined5 uStack_57f;
  undefined1 uStack_57a;
  undefined8 uStack_578;
  byte bStack_570;
  undefined7 uStack_56f;
  undefined1 uStack_568;
  undefined2 uStack_567;
  undefined1 uStack_565;
  undefined8 uStack_560;
  byte bStack_558;
  undefined7 uStack_557;
  undefined1 uStack_550;
  undefined2 uStack_54f;
  undefined1 uStack_54d;
  undefined8 uStack_548;
  byte bStack_540;
  undefined7 uStack_53f;
  undefined1 uStack_538;
  undefined2 uStack_537;
  undefined1 uStack_535;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong **ppuStack_3a8;
  char *pcStack_3a0;
  undefined8 uStack_398;
  ulong **ppuStack_388;
  char *pcStack_380;
  undefined8 uStack_378;
  ulong *puStack_368;
  char *pcStack_360;
  ulong uStack_358;
  ulong *puStack_348;
  char *pcStack_340;
  ulong uStack_338;
  ulong auStack_328 [2];
  undefined8 *puStack_318;
  byte bStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined2 uStack_307;
  undefined8 uStack_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  byte bStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined1 uStack_2cf;
  undefined6 uStack_2ce;
  byte bStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined2 uStack_2b7;
  undefined5 uStack_2b5;
  byte bStack_2b0;
  undefined7 uStack_2af;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined2 uStack_29f;
  undefined5 uStack_29d;
  byte bStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  undefined1 uStack_287;
  undefined6 uStack_286;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  byte bStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined1 uStack_217;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  byte bStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined2 uStack_1c7;
  undefined5 uStack_1c5;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  byte bStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined8 uStack_198;
  byte bStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined2 uStack_187;
  undefined8 uStack_180;
  byte bStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined2 uStack_16f;
  undefined8 uStack_168;
  byte bStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined2 uStack_157;
  undefined8 uStack_150;
  byte bStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  byte bStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined2 uStack_10f;
  undefined8 uStack_108;
  byte bStack_100;
  undefined4 uStack_ff;
  undefined1 uStack_fb;
  undefined2 uStack_fa;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined6 uStack_d6;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  ulong *puStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar70;
  char cVar72;
  char cVar74;
  char cVar76;
  char cVar78;
  char cVar80;
  
  bStack_540 = 0x14;
  uStack_53f = 0x536d6f646e6152;
  uStack_538 = 0x65;
  uStack_537 = 0x6465;
  uStack_535 = 0;
  auStack_9c8._0_8_ = param_1 + 0x518;
  lStack_a18 = param_2;
  lVar42 = func_0x0d2279e0(param_1 + 0x518,0xf71d538);
  if (((lVar42 == 0) && (lVar42 = func_0x0d2279e0(param_1 + 0x4f0,0xf71d538), lVar42 == 0)) ||
     (*(int *)(lVar42 + 0x50) != 7)) {
    uVar47 = 0;
  }
  else {
    uVar47 = *(undefined8 *)(lVar42 + 0x38);
  }
  lVar42 = lStack_a18 + 8;
  uStack_a48 = (ulong *)&bStack_540;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e200;
  *(undefined8 *)(lVar43 + 0x40) = uVar47;
  *(undefined4 *)(lVar43 + 0x60) = 4;
  lStack_a10 = param_1;
  if ((bStack_540 & 1) != 0) {
    func_0x0412a280(uStack_530,CONCAT71(uStack_53f,bStack_540) & 0xfffffffffffffffe);
  }
  bStack_d0 = 0x10;
  uStack_cf = 0x707954656d6147;
  uStack_c8 = 0x65;
  uStack_c7 = 0;
  lVar43 = func_0x0d2279e0(auStack_9c8._0_8_,0xf71d6f8);
  if ((lVar43 == 0) && (lVar43 = func_0x0d2279e0(lStack_a10 + 0x4f0,0xf71d6f8), lVar43 == 0)) {
    uVar58 = 5;
  }
  else {
    uVar58 = 5;
    if (*(int *)(lVar43 + 0x50) == 5) {
      uVar58 = *(undefined4 *)(lVar43 + 0x38);
    }
  }
  uStack_a48 = (ulong *)&bStack_d0;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_d0 & 1) != 0) {
    func_0x0412a280(uStack_c0,CONCAT71(uStack_cf,bStack_d0) & 0xfffffffffffffffe);
  }
  bStack_558 = 0x14;
  uStack_557 = 0x75636966666944;
  uStack_550 = 0x6c;
  uStack_54f = 0x7974;
  uStack_54d = 0;
  uVar58 = *(undefined4 *)(lStack_a10 + 0x370);
  uStack_a48 = (ulong *)&bStack_558;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_558 & 1) != 0) {
    func_0x0412a280(uStack_548,CONCAT71(uStack_557,bStack_558) & 0xfffffffffffffffe);
  }
  lVar43 = lStack_a10;
  bStack_570 = 0x14;
  uStack_56f = 0x63647261487349;
  uStack_568 = 0x6f;
  uStack_567 = 0x6572;
  uStack_565 = 0;
  func_0x0d6bbef0(lStack_a18,&bStack_570,*(undefined1 *)(lStack_a10 + 0x375));
  if ((bStack_570 & 1) != 0) {
    func_0x0412a280(uStack_560,CONCAT71(uStack_56f,bStack_570) & 0xfffffffffffffffe);
  }
  bStack_588 = 0x1a;
  uStack_587 = 0x6579616c50;
  uStack_582 = 0x4872;
  uStack_580 = 0x61;
  uStack_57f = 0x6465694473;
  uStack_57a = 0;
  func_0x0d6bbef0(lStack_a18,&bStack_588,*(undefined1 *)(lVar43 + 0x376));
  if ((bStack_588 & 1) != 0) {
    func_0x0412a280(uStack_578,
                    CONCAT26(uStack_582,CONCAT51(uStack_587,bStack_588)) & 0xfffffffffffffffe);
  }
  bStack_5a0 = 0x1a;
  uStack_59f = 0x6563726f46;
  uStack_59a = 0x6147;
  uStack_598 = 0x6d;
  uStack_597 = 0x6570795465;
  uStack_592 = 0;
  func_0x0d6bbef0(lStack_a18,&bStack_5a0,*(undefined1 *)(lVar43 + 0x374));
  if ((bStack_5a0 & 1) != 0) {
    func_0x0412a280(uStack_590,
                    CONCAT26(uStack_59a,CONCAT51(uStack_59f,bStack_5a0)) & 0xfffffffffffffffe);
  }
  bStack_e8 = 0x20;
  uStack_e7 = (undefined7)_DAT_0147113e;
  uStack_e0 = (undefined1)((ulong)_DAT_0147113e >> 0x38);
  uStack_df = (undefined7)_UNK_01471146;
  uStack_d8 = (undefined1)((ulong)_UNK_01471146 >> 0x38);
  uStack_d7 = 0;
  func_0x0d6bbef0(lStack_a18,&bStack_e8,*(undefined1 *)(lVar43 + 0x4be));
  if ((bStack_e8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_d6,CONCAT11(uStack_d7,uStack_d8)),
                    CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
  }
  lVar44 = func_0x0d2279e0(auStack_9c8._0_8_,0xf71d600);
  if ((lVar44 == 0) && (lVar44 = func_0x0d2279e0(lVar43 + 0x4f0,0xf71d600), lVar44 == 0)) {
    puVar53 = (undefined4 *)0x0;
  }
  else {
    puVar53 = (undefined4 *)0x0;
    if (*(int *)(lVar44 + 0x50) == 6) {
      puVar53 = (undefined4 *)(lVar44 + 0x38);
    }
  }
  puVar45 = (undefined4 *)&UNK_01de6224;
  if (puVar53 != (undefined4 *)0x0) {
    puVar45 = puVar53;
  }
  uVar58 = *puVar45;
  uVar3 = puVar45[1];
  uVar4 = puVar45[2];
  bStack_5b8 = 0xc;
  uStack_5b7 = 0x77617053;
  uStack_5b3 = 0x586e;
  uStack_5b1 = 0;
  uStack_a48 = (ulong *)&bStack_5b8;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_5b8 & 1) != 0) {
    func_0x0412a280(uStack_5a8,
                    CONCAT17(uStack_5b1,CONCAT25(uStack_5b3,CONCAT41(uStack_5b7,bStack_5b8))) &
                    0xfffffffffffffffe);
  }
  bStack_5d0 = 0xc;
  uStack_5cf = 0x77617053;
  uStack_5cb = 0x596e;
  uStack_5c9 = 0;
  uStack_a48 = (ulong *)&bStack_5d0;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar3;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_5d0 & 1) != 0) {
    func_0x0412a280(uStack_5c0,
                    CONCAT17(uStack_5c9,CONCAT25(uStack_5cb,CONCAT41(uStack_5cf,bStack_5d0))) &
                    0xfffffffffffffffe);
  }
  bStack_5e8 = 0xc;
  uStack_5e7 = 0x77617053;
  uStack_5e3 = 0x5a6e;
  uStack_5e1 = 0;
  uStack_a48 = (ulong *)&bStack_5e8;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar4;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_5e8 & 1) != 0) {
    func_0x0412a280(uStack_5d8,
                    CONCAT17(uStack_5e1,CONCAT25(uStack_5e3,CONCAT41(uStack_5e7,bStack_5e8))) &
                    0xfffffffffffffffe);
  }
  lVar43 = lStack_a10;
  bStack_100 = 8;
  uStack_ff = 0x656d6954;
  uStack_fb = 0;
  iVar41 = *(int *)(lStack_a10 + 0x300);
  uStack_a48 = (ulong *)&bStack_100;
  lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a48,lVar44 + 0x38);
  }
  *(undefined **)(lVar44 + 0x38) = &UNK_0f47e200;
  *(long *)(lVar44 + 0x40) = (long)iVar41;
  *(undefined4 *)(lVar44 + 0x60) = 4;
  if ((bStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,
                    CONCAT26(uStack_fa,CONCAT15(uStack_fb,CONCAT41(uStack_ff,bStack_100))) &
                    0xfffffffffffffffe);
  }
  bStack_600 = 0x14;
  uStack_5ff = 0x616c507473614c;
  uStack_5f8 = 0x79;
  uStack_5f7 = 0x6465;
  uStack_5f5 = 0;
  uVar47 = *(undefined8 *)(lVar43 + 800);
  uStack_a48 = (ulong *)&bStack_600;
  lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a48,lVar44 + 0x38);
  }
  *(undefined **)(lVar44 + 0x38) = &UNK_0f47e200;
  *(undefined8 *)(lVar44 + 0x40) = uVar47;
  *(undefined4 *)(lVar44 + 0x60) = 4;
  if ((bStack_600 & 1) != 0) {
    func_0x0412a280(uStack_5f0,CONCAT71(uStack_5ff,bStack_600) & 0xfffffffffffffffe);
  }
  bStack_118 = 0x12;
  uStack_117 = 0x614e6c6576654c;
  uStack_110 = 0x6d;
  uStack_10f = 0x65;
  if ((*(byte *)(lVar43 + 0x278) & 1) == 0) {
    uStack_3b8 = *(undefined8 *)(lVar43 + 0x288);
    uStack_3c8 = *(undefined8 *)(lVar43 + 0x278);
    uStack_3c0 = *(undefined8 *)(lVar43 + 0x280);
  }
  else {
    func_0x0412e5e0(&uStack_3c8,*(undefined8 *)(lVar43 + 0x288),*(undefined8 *)(lVar43 + 0x280));
  }
  uStack_a48 = (ulong *)&bStack_118;
  lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a48,lVar44 + 0x38);
  }
  uVar37 = uStack_3b8;
  uVar36 = uStack_3c0;
  uVar47 = uStack_3c8;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  *(undefined **)(lVar44 + 0x38) = &UNK_0f47e5e8;
  *(undefined8 *)(lVar44 + 0x40) = uVar47;
  *(undefined8 *)(lVar44 + 0x48) = uVar36;
  *(undefined8 *)(lVar44 + 0x50) = uVar37;
  *(undefined4 *)(lVar44 + 0x60) = 8;
  if ((bStack_118 & 1) != 0) {
    func_0x0412a280(uStack_108,CONCAT71(uStack_117,bStack_118) & 0xfffffffffffffffe);
  }
  iVar41 = 10;
  if (*(int *)(lVar43 + 0x290) < 4) {
    iVar41 = *(int *)(lVar43 + 0x290);
  }
  bStack_618 = 0x1c;
  uStack_617 = 0x6761726f7453;
  uStack_611 = 0x65;
  uStack_610 = 0x56;
  uStack_60f = 0x6e6f69737265;
  uStack_609 = 0;
  uStack_a48 = (ulong *)&bStack_618;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(int *)(lVar43 + 0x40) = iVar41;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_618 & 1) != 0) {
    func_0x0412a280(uStack_608,
                    CONCAT17(uStack_611,CONCAT61(uStack_617,bStack_618)) & 0xfffffffffffffffe);
  }
  puStack_120 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  lVar43 = lStack_a10;
  if (puStack_120 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar47 = _UNK_01471165;
  uStack_130 = 0x21;
  uStack_128 = 0x1e;
  *(ulong *)((long)puStack_120 + 0xe) = CONCAT62(_UNK_0147115f,_DAT_0147115d);
  *(undefined8 *)((long)puStack_120 + 0x16) = uVar47;
  uVar47 = CONCAT26(_DAT_0147115d,_UNK_01471157);
  *puStack_120 = _DAT_0147114f;
  puStack_120[1] = uVar47;
  *(undefined1 *)((long)puStack_120 + 0x1e) = 0;
  func_0x06cfe4c0(&uStack_a48,lVar43 + 0x298);
  pbVar55 = (byte *)uStack_a48;
  pbStack_a0 = (byte *)uStack_a48;
  func_0x0d6bb450(lStack_a18,&uStack_130,&pbStack_a0);
  pbStack_a0 = (byte *)0x0;
  if (pbVar55 != (byte *)0x0) {
    (**(code **)(*(long *)pbVar55 + 8))(pbVar55);
  }
  if ((uStack_130 & 1) != 0) {
    func_0x0412a280(puStack_120,uStack_130 & 0xfffffffffffffffe);
  }
  bStack_630 = 0x1c;
  uStack_62f = 0x726f7774654e;
  uStack_629 = 0x6b;
  uStack_628 = 0x56;
  uStack_627 = 0x6e6f69737265;
  uStack_621 = 0;
  uVar58 = *(undefined4 *)(lVar43 + 0x2c8);
  uStack_a48 = (ulong *)&bStack_630;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_630 & 1) != 0) {
    func_0x0412a280(uStack_620,
                    CONCAT17(uStack_629,CONCAT61(uStack_62f,bStack_630)) & 0xfffffffffffffffe);
  }
  bStack_148 = 0x10;
  uStack_147 = 0x726f6674616c50;
  uStack_140 = 0x6d;
  uStack_13f = 0;
  uStack_a48 = (ulong *)&bStack_148;
  lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  lVar43 = lStack_a10;
  if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a48,lVar44 + 0x38);
  }
  *(undefined **)(lVar44 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar44 + 0x40) = 2;
  *(undefined4 *)(lVar44 + 0x60) = 3;
  if ((bStack_148 & 1) != 0) {
    func_0x0412a280(uStack_138,CONCAT71(uStack_147,bStack_148) & 0xfffffffffffffffe);
  }
  bStack_160 = 0x12;
  uStack_15f = 0x6f4d6e77617073;
  uStack_158 = 0x62;
  uStack_157 = 0x73;
  func_0x0d6bbef0(lStack_a18,&bStack_160,*(undefined1 *)(lVar43 + 0x377));
  if ((bStack_160 & 1) != 0) {
    func_0x0412a280(uStack_150,CONCAT71(uStack_15f,bStack_160) & 0xfffffffffffffffe);
  }
  bStack_178 = 0x12;
  uStack_177 = 0x746172656e6547;
  uStack_170 = 0x6f;
  uStack_16f = 0x72;
  lVar43 = func_0x0d2279e0(auStack_9c8._0_8_,0xf71d720);
  if ((lVar43 == 0) && (lVar43 = func_0x0d2279e0(lStack_a10 + 0x4f0,0xf71d720), lVar43 == 0)) {
    uVar58 = 1;
  }
  else {
    uVar58 = 1;
    if (*(int *)(lVar43 + 0x50) == 4) {
      uVar58 = *(undefined4 *)(lVar43 + 0x38);
    }
  }
  uStack_a48 = (ulong *)&bStack_178;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,CONCAT71(uStack_177,bStack_178) & 0xfffffffffffffffe);
  }
  bStack_648 = 0x18;
  uStack_647 = 0x6556646c726f57;
  uStack_640 = 0x72;
  uStack_63f = 0x6e6f6973;
  uStack_63b = 0;
  lVar43 = func_0x0d2279e0(auStack_9c8._0_8_,0xf71d588);
  if (((lVar43 == 0) && (lVar43 = func_0x0d2279e0(lStack_a10 + 0x4f0,0xf71d588), lVar43 == 0)) ||
     (*(int *)(lVar43 + 0x50) != 0)) {
    puVar62 = (undefined *)(lStack_a10 + 0x50);
    puVar57 = puVar62;
    if (((*(char *)(lStack_a10 + 0x77) == '\0') &&
        ((puVar1 = (undefined *)(lStack_a10 + 0x70), *(char *)(lStack_a10 + 0x68) != '\0' ||
         (puVar57 = puVar1, (*(byte *)(lStack_a10 + 0x56) & 1) != 0)))) &&
       (cVar40 = func_0x04fa7a10(puVar1,puVar62), puVar57 = puVar62, cVar40 != '\0')) {
      puVar57 = puVar1;
    }
    puVar62 = &DAT_0f72b850;
    if (((puVar57[6] | puVar57[0x18]) & 1) != 0) {
      puVar62 = puVar57;
    }
    uVar59 = 0;
    if (((DAT_0f5a2858 == '\0') && (puVar62[0x18] == '\0')) &&
       ((uVar59 = 1, (DAT_0f5a2846 & 1) != 0 && (puVar62[7] == '\0')))) {
      bVar39 = func_0x04fa7a10(puVar62,0xf5a2840);
      uVar59 = (uint)(bVar39 ^ 1);
    }
  }
  else {
    uVar59 = (uint)*(byte *)(lVar43 + 0x38);
  }
  uStack_a48 = (ulong *)&bStack_648;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(uint *)(lVar43 + 0x40) = uVar59;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_648 & 1) != 0) {
    func_0x0412a280(uStack_638,CONCAT71(uStack_647,bStack_648) & 0xfffffffffffffffe);
  }
  lVar43 = lStack_a10;
  func_0x04863480(auStack_40,lStack_a10 + 0x380);
  cVar40 = func_0x04864220(auStack_40);
  if (cVar40 != '\0') {
    func_0x0d3a5d30(&uStack_a48,lVar43);
    func_0x04863790(auStack_40,&uStack_a48);
    func_0x04863610(&uStack_a48);
  }
  bStack_660 = 0x1e;
  uStack_65f = 0x726f5774616c46;
  uStack_658 = 0x6c;
  uStack_657 = 0x73726579614c64;
  uStack_650 = 0;
  func_0x04867c60(&uStack_a48);
  func_0x04867c90(&uStack_58,&uStack_a48,auStack_40);
  uStack_a08 = (ulong **)&bStack_660;
  lVar44 = func_0x0d6c9580(lVar42,uStack_a08,&UNK_01563a4f,&uStack_a08,auStack_9e8);
  if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a08,lVar44 + 0x38);
  }
  uVar37 = uStack_48;
  uVar36 = uStack_50;
  uVar47 = uStack_58;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined **)(lVar44 + 0x38) = &UNK_0f47e5e8;
  *(undefined8 *)(lVar44 + 0x40) = uVar47;
  *(undefined8 *)(lVar44 + 0x48) = uVar36;
  *(undefined8 *)(lVar44 + 0x50) = uVar37;
  *(undefined4 *)(lVar44 + 0x60) = 8;
  uStack_a48 = (ulong *)&UNK_0ef40ca0;
  if (((ulong)pcStack_a40 & 1) != 0) {
    func_0x0412a280(auStack_a38._8_8_,(ulong)pcStack_a40 & 0xfffffffffffffffe);
  }
  func_0x04867c50(&uStack_a48);
  if ((bStack_660 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_64f,uStack_650),
                    CONCAT71(uStack_65f,bStack_660) & 0xfffffffffffffffe);
  }
  bStack_678 = 0x26;
  uStack_677 = (undefined7)_DAT_014248a1;
  uStack_670 = (undefined1)((ulong)_DAT_014248a1 >> 0x38);
  uStack_66f = (undefined7)_UNK_014248a9;
  uStack_668 = 0x586e6967;
  uStack_664 = uStack_664 & 0xffffff00;
  uVar58 = *(undefined4 *)(lVar43 + 0x2f4);
  uStack_a48 = (ulong *)&bStack_678;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_678 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_664,uStack_668),
                    CONCAT71(uStack_677,bStack_678) & 0xfffffffffffffffe);
  }
  bStack_690 = 0x26;
  uStack_68f = (undefined7)_DAT_0129ca8c;
  uStack_688 = (undefined1)((ulong)_DAT_0129ca8c >> 0x38);
  uStack_687 = (undefined7)_UNK_0129ca94;
  uStack_680 = 0x596e6967;
  uStack_67c = uStack_67c & 0xffffff00;
  uVar58 = *(undefined4 *)(lStack_a10 + 0x2f8);
  uStack_a48 = (ulong *)&bStack_690;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_690 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_67c,uStack_680),
                    CONCAT71(uStack_68f,bStack_690) & 0xfffffffffffffffe);
  }
  bStack_6a8 = 0x26;
  uStack_6a7 = (undefined7)_DAT_0147116e;
  uStack_6a0 = (undefined1)((ulong)_DAT_0147116e >> 0x38);
  uStack_69f = (undefined7)_UNK_01471176;
  uStack_698 = 0x5a6e6967;
  uStack_694 = uStack_694 & 0xffffff00;
  uVar58 = *(undefined4 *)(lStack_a10 + 0x2fc);
  uStack_a48 = (ulong *)&bStack_6a8;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((bStack_6a8 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_694,uStack_698),
                    CONCAT71(uStack_6a7,bStack_6a8) & 0xfffffffffffffffe);
  }
  if ((DAT_0f71d750 & 1) == 0) {
    uStack_3d8 = _DAT_0f71d760;
    uStack_3e8 = CONCAT71(uRam000000000f71d751,DAT_0f71d750);
    uStack_3e0 = _DAT_0f71d758;
  }
  else {
    func_0x0412e5e0(&uStack_3e8,_DAT_0f71d760,_DAT_0f71d758);
  }
  lVar43 = func_0x0d2279e0(auStack_9c8._0_8_,0xf71d748);
  if ((lVar43 == 0) && (lVar43 = func_0x0d2279e0(lStack_a10 + 0x4f0,0xf71d748), lVar43 == 0)) {
    uVar58 = 0x10;
  }
  else {
    uVar58 = 0x10;
    if (*(int *)(lVar43 + 0x50) == 0) {
      uVar58 = *(undefined4 *)(lVar43 + 0x38);
    }
  }
  uStack_a48 = &uStack_3e8;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  if ((DAT_0f71d778 & 1) == 0) {
    uStack_3f8 = _DAT_0f71d788;
    uStack_408 = CONCAT71(uRam000000000f71d779,DAT_0f71d778);
    uStack_400 = _DAT_0f71d780;
  }
  else {
    func_0x0412e5e0(&uStack_408,_DAT_0f71d788,_DAT_0f71d780);
  }
  lVar43 = func_0x0d2279e0(auStack_9c8._0_8_,0xf71d770);
  if ((lVar43 == 0) && (lVar43 = func_0x0d2279e0(lStack_a10 + 0x4f0,0xf71d770), lVar43 == 0)) {
    uVar58 = 0x10;
  }
  else {
    uVar58 = 0x10;
    if (*(int *)(lVar43 + 0x50) == 0) {
      uVar58 = *(undefined4 *)(lVar43 + 0x38);
    }
  }
  uStack_a48 = &uStack_408;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar43 + 0x40) = uVar58;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,uStack_408 & 0xfffffffffffffffe);
  }
  if ((DAT_0f71d568 & 1) == 0) {
    uStack_418 = _DAT_0f71d578;
    uStack_428 = CONCAT71(uRam000000000f71d569,DAT_0f71d568);
    uStack_420 = _DAT_0f71d570;
  }
  else {
    func_0x0412e5e0(&uStack_428,_DAT_0f71d578,_DAT_0f71d570);
  }
  lVar43 = func_0x0d2279e0(auStack_9c8._0_8_,0xf71d560);
  if (((lVar43 == 0) && (lVar43 = func_0x0d2279e0(lStack_a10 + 0x4f0,0xf71d560), lVar43 == 0)) ||
     (*(int *)(lVar43 + 0x50) != 9)) {
    uVar59 = 0;
  }
  else {
    uVar59 = (uint)*(byte *)(lVar43 + 0x38);
  }
  uStack_a48 = &uStack_428;
  lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
  if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
  }
  *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
  *(uint *)(lVar43 + 0x40) = uVar59;
  *(undefined4 *)(lVar43 + 0x60) = 3;
  if ((uStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,uStack_428 & 0xfffffffffffffffe);
  }
  lVar44 = func_0x0d2279e0(auStack_9c8._0_8_,0xf71d650);
  lVar43 = lStack_a10;
  if (((lVar44 == 0) && (lVar44 = func_0x0d2279e0(lStack_a10 + 0x4f0,0xf71d650), lVar44 == 0)) ||
     (*(int *)(lVar44 + 0x50) != 3)) {
    uStack_a48 = (ulong *)((ulong)uStack_a48 & 0xffffffffffffff00);
    auStack_a38[8] = 0;
LAB_0d20dec5:
    bVar33 = true;
    bVar68 = true;
  }
  else {
    if ((*(byte *)(lVar44 + 0x38) & 1) == 0) {
      auStack_a38._0_8_ = *(undefined8 *)(lVar44 + 0x48);
      uStack_a48 = *(ulong **)(lVar44 + 0x38);
      pcStack_a40 = *(char **)(lVar44 + 0x40);
    }
    else {
      func_0x0412e5e0(&uStack_a48,*(undefined8 *)(lVar44 + 0x48),*(undefined8 *)(lVar44 + 0x40));
    }
    auStack_a38[8] = 1;
    auStack_9e8 = (undefined1  [16])0x0;
    uStack_9d8 = 0;
    iVar41 = func_0x0ee32f20(&uStack_a48,auStack_9e8,1);
    if (iVar41 == 2) {
      if ((uStack_9d8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_9d8 & 0xff00ffffffffffff) - 8);
      }
      uStack_9d8 = 0;
      if ((auStack_9e8._8_8_ & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(auStack_9e8._8_8_ & 0xff00ffffffffffff) - 8);
      }
      goto LAB_0d20dec5;
    }
    uStack_a08 = (ulong **)auStack_9e8._0_8_;
    pcStack_a00 = (char *)auStack_9e8._8_8_;
    if ((auStack_9e8._8_8_ & 0x80000000000000) != 0) {
      uVar66 = auStack_9e8._8_8_ & 0xff00ffffffffffff;
      lVar5 = *(long *)(uVar66 - 8);
      lVar44 = lVar5 + 9;
      plVar48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
      if (lVar44 != 0 && plVar48 == (long *)0x0) {
        FUN_0eec74c0(lVar44,8);
      }
      *plVar48 = lVar5;
      func_0x0eee2f00(plVar48 + 1,uVar66,lVar5);
      *(undefined1 *)((long)plVar48 + lVar5 + 8) = 0;
      pcStack_a00 = (char *)((ulong)(plVar48 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      unaff_R13 = pcStack_a00;
    }
    auVar34 = auStack_9f8;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auStack_9f8._8_8_;
    auStack_9f8 = auVar2 << 0x40;
    if ((uStack_9d8 & 0x80000000000000) == 0) {
      auStack_9f8._9_7_ = auVar34._9_7_;
      auStack_9f8[8] = 1;
      auStack_9f8._0_8_ = uStack_9d8;
    }
    else {
      uVar66 = uStack_9d8 & 0xff00ffffffffffff;
      lVar44 = *(long *)(uVar66 - 8);
      lVar43 = lVar44 + 9;
      plVar48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar43,8);
      if (lVar43 != 0 && plVar48 == (long *)0x0) {
        FUN_0eec74c0(lVar43,8);
      }
      *plVar48 = lVar44;
      func_0x0eee2f00(plVar48 + 1,uVar66,lVar44);
      lVar43 = lStack_a10;
      *(undefined1 *)((long)plVar48 + lVar44 + 8) = 0;
      unaff_R13 = (char *)((ulong)(plVar48 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      auStack_9f8[8] = 1;
      auStack_9f8._0_8_ = unaff_R13;
      if ((uStack_9d8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_9d8 & 0xff00ffffffffffff) - 8);
      }
    }
    uStack_9d8 = 0;
    if ((auStack_9e8._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_9e8._8_8_ & 0xff00ffffffffffff) - 8);
    }
    bVar33 = false;
    bVar68 = false;
  }
  if ((auStack_a38[8] == '\x01') && (bVar68 = bVar33, ((ulong)uStack_a48 & 1) != 0)) {
    func_0x0412a280(auStack_a38._0_8_,(ulong)uStack_a48 & 0xfffffffffffffffe);
  }
  if (bVar68) {
    uStack_a08 = (ulong **)((ulong)uStack_a08 & 0xffffffffffffff00);
    auStack_9f8[8] = 0;
LAB_0d20e277:
    if (auStack_9f8[8] == '\x01') {
      if (((ulong)auStack_9f8._0_8_ >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(auStack_9f8._0_8_ & 0xff00ffffffffffff) - 8);
      }
      auVar34._8_8_ = 0;
      auVar34._0_8_ = auStack_9f8._8_8_;
      auStack_9f8 = auVar34 << 0x40;
      if (((ulong)pcStack_a00 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pcStack_a00 & 0xff00ffffffffffff) - 8);
      }
    }
    bStack_6c0 = 0x1e;
    uStack_6bf = 0x7453646c726f77;
    uStack_6b8 = 0x61;
    uStack_6b7 = 0x746e756f437472;
    uStack_6b0 = 0;
    uVar59 = *(uint *)(lVar43 + 0x390);
    uStack_a48 = (ulong *)&bStack_6c0;
    lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a48,lVar44 + 0x38);
    }
    *(undefined **)(lVar44 + 0x38) = &UNK_0f47e200;
    *(ulong *)(lVar44 + 0x40) = (ulong)uVar59;
    *(undefined4 *)(lVar44 + 0x60) = 4;
    if ((bStack_6c0 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_6af,uStack_6b0),
                      CONCAT71(uStack_6bf,bStack_6c0) & 0xfffffffffffffffe);
    }
    bStack_6d8 = 0x16;
    uStack_6d7 = 0x746e6572727563;
    uStack_6d0 = 0x6b636954;
    uStack_6cc = 0;
    uVar47 = *(undefined8 *)(lVar43 + 0x2e8);
    uStack_a48 = (ulong *)&bStack_6d8;
    lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a48,lVar44 + 0x38);
    }
    *(undefined **)(lVar44 + 0x38) = &UNK_0f47e200;
    *(undefined8 *)(lVar44 + 0x40) = uVar47;
    *(undefined4 *)(lVar44 + 0x60) = 4;
    if ((bStack_6d8 & 1) != 0) {
      func_0x0412a280(uStack_6c8,CONCAT71(uStack_6d7,bStack_6d8) & 0xfffffffffffffffe);
    }
    bStack_190 = 0x12;
    uStack_18f = 0x76654c6e696172;
    uStack_188 = 0x65;
    uStack_187 = 0x6c;
    auStack_b8 = ZEXT416(*(uint *)(lVar43 + 0x32c));
    uStack_a48 = (ulong *)&bStack_190;
    lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a48,lVar44 + 0x38);
    }
    *(undefined **)(lVar44 + 0x38) = &UNK_0f47e190;
    *(uint *)(lVar44 + 0x40) =
         -(uint)(!NAN((float)auStack_b8._0_4_) && !NAN((float)auStack_b8._0_4_)) & auStack_b8._0_4_;
    *(undefined4 *)(lVar44 + 0x60) = 5;
    if ((bStack_190 & 1) != 0) {
      func_0x0412a280(uStack_180,CONCAT71(uStack_18f,bStack_190) & 0xfffffffffffffffe);
    }
    bStack_1a8 = 0x10;
    uStack_1a7 = 0x6d69546e696172;
    uStack_1a0 = 0x65;
    uStack_19f = 0;
    uVar58 = *(undefined4 *)(lVar43 + 0x330);
    uStack_a48 = (ulong *)&bStack_1a8;
    lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
    }
    *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
    *(undefined4 *)(lVar43 + 0x40) = uVar58;
    *(undefined4 *)(lVar43 + 0x60) = 3;
    if ((bStack_1a8 & 1) != 0) {
      func_0x0412a280(uStack_198,CONCAT71(uStack_1a7,bStack_1a8) & 0xfffffffffffffffe);
    }
    lVar43 = lStack_a10;
    bStack_6f0 = 0x1c;
    uStack_6ef = 0x6e746867696c;
    uStack_6e9 = 0x69;
    uStack_6e8 = 0x6e;
    uStack_6e7 = 0x6c6576654c67;
    uStack_6e1 = 0;
    auStack_b8 = ZEXT416(*(uint *)(lStack_a10 + 0x334));
    uStack_a48 = (ulong *)&bStack_6f0;
    lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a48,lVar44 + 0x38);
    }
    *(undefined **)(lVar44 + 0x38) = &UNK_0f47e190;
    *(uint *)(lVar44 + 0x40) =
         -(uint)(!NAN((float)auStack_b8._0_4_) && !NAN((float)auStack_b8._0_4_)) & auStack_b8._0_4_;
    *(undefined4 *)(lVar44 + 0x60) = 5;
    if ((bStack_6f0 & 1) != 0) {
      func_0x0412a280(uStack_6e0,
                      CONCAT17(uStack_6e9,CONCAT61(uStack_6ef,bStack_6f0)) & 0xfffffffffffffffe);
    }
    bStack_708 = 0x1a;
    uStack_707 = 0x746867696c;
    uStack_702 = 0x696e;
    uStack_700 = 0x6e;
    uStack_6ff = 0x656d695467;
    uStack_6fa = 0;
    uVar58 = *(undefined4 *)(lVar43 + 0x338);
    uStack_a48 = (ulong *)&bStack_708;
    lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
    }
    *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
    *(undefined4 *)(lVar43 + 0x40) = uVar58;
    *(undefined4 *)(lVar43 + 0x60) = 3;
    if ((bStack_708 & 1) != 0) {
      func_0x0412a280(uStack_6f8,
                      CONCAT26(uStack_702,CONCAT51(uStack_707,bStack_708)) & 0xfffffffffffffffe);
    }
    puStack_1b0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    lVar43 = lStack_a10;
    if (puStack_1b0 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x1a,0);
    }
    uVar47 = _UNK_012e9c7d;
    uStack_1c0 = 0x1b;
    uStack_1b8 = 0x17;
    *puStack_1b0 = _DAT_012e9c75;
    puStack_1b0[1] = uVar47;
    *(undefined8 *)((long)puStack_1b0 + 0xf) = 0x6576697461657243;
    *(undefined1 *)((long)puStack_1b0 + 0x17) = 0;
    func_0x0d6bbef0(lStack_a18,&uStack_1c0,*(undefined1 *)(lVar43 + 0x394));
    if ((uStack_1c0 & 1) != 0) {
      func_0x0412a280(puStack_1b0,uStack_1c0 & 0xfffffffffffffffe);
    }
    bStack_1d8 = 0x22;
    uStack_1d7 = (undefined7)_DAT_01219b36;
    uStack_1d0 = (undefined1)((ulong)_DAT_01219b36 >> 0x38);
    uStack_1cf = (undefined7)_UNK_01219b3e;
    uStack_1c8 = (undefined1)((ulong)_UNK_01219b3e >> 0x38);
    uStack_1c7 = 0x72;
    func_0x0d6bbef0(lStack_a18,&bStack_1d8,*(undefined1 *)(lVar43 + 0x3a4));
    if ((bStack_1d8 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8)),
                      CONCAT71(uStack_1d7,bStack_1d8) & 0xfffffffffffffffe);
    }
    bStack_720 = 0x28;
    uStack_71f = (undefined7)_DAT_012cf14c;
    uStack_718 = (undefined1)((ulong)_DAT_012cf14c >> 0x38);
    uStack_717 = (undefined7)_UNK_012cf154;
    uStack_710 = (undefined1)((ulong)_UNK_012cf154 >> 0x38);
    uStack_70f = 0x726f7469;
    uStack_70b = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_720,*(undefined1 *)(lVar43 + 0x3a5));
    if ((bStack_720 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_70a,CONCAT15(uStack_70b,CONCAT41(uStack_70f,uStack_710))),
                      CONCAT71(uStack_71f,bStack_720) & 0xfffffffffffffffe);
    }
    bStack_738 = 0x1e;
    uStack_737 = 0x57726f74696465;
    uStack_730 = 0x6f;
    uStack_72f = 0x65707954646c72;
    uStack_728 = 0;
    uVar58 = *(undefined4 *)(lVar43 + 0x398);
    uStack_a48 = (ulong *)&bStack_738;
    lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
    }
    *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
    *(undefined4 *)(lVar43 + 0x40) = uVar58;
    *(undefined4 *)(lVar43 + 0x60) = 3;
    if ((bStack_738 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_727,uStack_728),
                      CONCAT71(uStack_737,bStack_738) & 0xfffffffffffffffe);
    }
    puStack_1e0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    lVar43 = lStack_a10;
    if (puStack_1e0 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    uVar47 = _UNK_013bdf93;
    uStack_1f0 = 0x29;
    uStack_1e8 = 0x26;
    puStack_1e0[2] = _DAT_013bdf8b;
    puStack_1e0[3] = uVar47;
    uVar47 = _UNK_013bdf83;
    *puStack_1e0 = _DAT_013bdf7b;
    puStack_1e0[1] = uVar47;
    *(undefined8 *)((long)puStack_1e0 + 0x1e) = 0x73646c726f57726f;
    *(undefined1 *)((long)puStack_1e0 + 0x26) = 0;
    func_0x0d6bbef0(lStack_a18,&uStack_1f0,*(undefined1 *)(lVar43 + 0x39c));
    if ((uStack_1f0 & 1) != 0) {
      func_0x0412a280(puStack_1e0,uStack_1f0 & 0xfffffffffffffffe);
    }
    puStack_1f8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1f8 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar47 = _UNK_01219b5c;
    uStack_208 = 0x21;
    uStack_200 = 0x1c;
    *(ulong *)((long)puStack_1f8 + 0xc) = CONCAT44(_UNK_01219b58,_DAT_01219b54);
    *(undefined8 *)((long)puStack_1f8 + 0x14) = uVar47;
    uVar47 = CONCAT44(_DAT_01219b54,_UNK_01219b50);
    *puStack_1f8 = _DAT_01219b48;
    puStack_1f8[1] = uVar47;
    *(undefined1 *)((long)puStack_1f8 + 0x1c) = 0;
    uVar58 = *(undefined4 *)(lVar43 + 0x3a0);
    uStack_a48 = &uStack_208;
    lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
    }
    *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
    *(undefined4 *)(lVar43 + 0x40) = uVar58;
    *(undefined4 *)(lVar43 + 0x60) = 3;
    if ((uStack_208 & 1) != 0) {
      func_0x0412a280(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
    }
    bStack_220 = 0x10;
    uStack_21f = 0x6566664f756465;
    uStack_218 = 0x72;
    uStack_217 = 0;
    uVar58 = *(undefined4 *)(lStack_a10 + 0x3a8);
    uStack_a48 = (ulong *)&bStack_220;
    lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
    }
    *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
    *(undefined4 *)(lVar43 + 0x40) = uVar58;
    *(undefined4 *)(lVar43 + 0x60) = 3;
    if ((bStack_220 & 1) != 0) {
      func_0x0412a280(uStack_210,CONCAT71(uStack_21f,bStack_220) & 0xfffffffffffffffe);
    }
    puStack_228 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    lVar43 = lStack_a10;
    if (puStack_228 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar47 = _UNK_0148c002;
    uStack_238 = 0x21;
    uStack_230 = 0x18;
    *puStack_228 = _DAT_0148bffa;
    puStack_228[1] = uVar47;
    puStack_228[2] = 0x64656c62616e4573;
    *(undefined1 *)(puStack_228 + 3) = 0;
    func_0x0d6bbef0(lStack_a18,&uStack_238,*(undefined1 *)(lVar43 + 0x438));
    if ((uStack_238 & 1) != 0) {
      func_0x0412a280(puStack_228,uStack_238 & 0xfffffffffffffffe);
    }
    bStack_750 = 0x1c;
    uStack_74f = 0x6174756d6d69;
    uStack_749 = 0x62;
    uStack_748 = 0x6c;
    uStack_747 = 0x646c726f5765;
    uStack_741 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_750,*(undefined1 *)(lVar43 + 2));
    if ((bStack_750 & 1) != 0) {
      func_0x0412a280(uStack_740,
                      CONCAT17(uStack_749,CONCAT61(uStack_74f,bStack_750)) & 0xfffffffffffffffe);
    }
    puStack_240 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_240 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar47 = _UNK_01219b7b;
    uStack_250 = 0x21;
    uStack_248 = 0x1e;
    *(ulong *)((long)puStack_240 + 0xe) = CONCAT62(_UNK_01219b75,_DAT_01219b73);
    *(undefined8 *)((long)puStack_240 + 0x16) = uVar47;
    uVar47 = CONCAT26(_DAT_01219b73,_UNK_01219b6d);
    *puStack_240 = _DAT_01219b65;
    puStack_240[1] = uVar47;
    *(undefined1 *)((long)puStack_240 + 0x1e) = 0;
    func_0x0d6bbef0(lStack_a18,&uStack_250,*(undefined1 *)(lVar43 + 0x43a));
    if ((uStack_250 & 1) != 0) {
      func_0x0412a280(puStack_240,uStack_250 & 0xfffffffffffffffe);
    }
    bStack_768 = 0x2a;
    uStack_767 = (undefined7)_DAT_014dbeb5;
    uStack_760 = (undefined1)((ulong)_DAT_014dbeb5 >> 0x38);
    uStack_75f = (undefined5)_UNK_014dbebd;
    uStack_75a = 0x656d;
    uStack_758 = 0x49;
    uStack_757 = 0x746e65746e;
    uStack_752 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_768,*(undefined1 *)(lVar43 + 0x43b));
    if ((bStack_768 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_751,CONCAT16(uStack_752,CONCAT51(uStack_757,uStack_758))),
                      CONCAT71(uStack_767,bStack_768) & 0xfffffffffffffffe);
    }
    bStack_780 = 0x1e;
    uStack_77f = 0x6c7069746c754d;
    uStack_778 = 0x61;
    uStack_777 = 0x656d6147726579;
    uStack_770 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_780,*(undefined1 *)(lVar43 + 0x43c));
    if ((bStack_780 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_76f,uStack_770),
                      CONCAT71(uStack_77f,bStack_780) & 0xfffffffffffffffe);
    }
    bStack_798 = 0x24;
    uStack_797 = (undefined7)_DAT_012cf161;
    uStack_790 = (undefined1)((ulong)_DAT_012cf161 >> 0x38);
    uStack_78f = (undefined7)_UNK_012cf169;
    uStack_788 = (undefined1)((ulong)_UNK_012cf169 >> 0x38);
    uStack_787 = 0x746e;
    uStack_785 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_798,*(undefined1 *)(lVar43 + 0x43d));
    if ((bStack_798 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_784,CONCAT13(uStack_785,CONCAT21(uStack_787,uStack_788))),
                      CONCAT71(uStack_797,bStack_798) & 0xfffffffffffffffe);
    }
    bStack_7b0 = 0x18;
    uStack_7af = 0x616f72424e414c;
    uStack_7a8 = 100;
    uStack_7a7 = 0x74736163;
    uStack_7a3 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_7b0,*(undefined1 *)(lVar43 + 0x43e));
    if ((bStack_7b0 & 1) != 0) {
      func_0x0412a280(uStack_7a0,CONCAT71(uStack_7af,bStack_7b0) & 0xfffffffffffffffe);
    }
    bStack_7c8 = 0x24;
    uStack_7c7 = (undefined7)_DAT_014248be;
    uStack_7c0 = (undefined1)((ulong)_DAT_014248be >> 0x38);
    uStack_7bf = (undefined7)_UNK_014248c6;
    uStack_7b8 = (undefined1)((ulong)_UNK_014248c6 >> 0x38);
    uStack_7b7 = 0x746e;
    uStack_7b5 = 0;
    uVar58 = *(undefined4 *)(lVar43 + 0x440);
    uStack_a48 = (ulong *)&bStack_7c8;
    lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
    }
    *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
    *(undefined4 *)(lVar43 + 0x40) = uVar58;
    *(undefined4 *)(lVar43 + 0x60) = 3;
    if ((bStack_7c8 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_7b4,CONCAT13(uStack_7b5,CONCAT21(uStack_7b7,uStack_7b8))),
                      CONCAT71(uStack_7c7,bStack_7c8) & 0xfffffffffffffffe);
    }
    puStack_258 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    lVar43 = lStack_a10;
    if (puStack_258 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x1a,0);
    }
    uVar47 = _UNK_014c0b30;
    uStack_268 = 0x1b;
    uStack_260 = 0x17;
    *puStack_258 = _DAT_014c0b28;
    puStack_258[1] = uVar47;
    *(undefined8 *)((long)puStack_258 + 0xf) = 0x746e65746e497473;
    *(undefined1 *)((long)puStack_258 + 0x17) = 0;
    uVar58 = *(undefined4 *)(lVar43 + 0x448);
    uStack_a48 = &uStack_268;
    lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
    }
    *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
    *(undefined4 *)(lVar43 + 0x40) = uVar58;
    *(undefined4 *)(lVar43 + 0x60) = 3;
    if ((uStack_268 & 1) != 0) {
      func_0x0412a280(puStack_258,uStack_268 & 0xfffffffffffffffe);
    }
    lVar43 = lStack_a10;
    bStack_7e0 = 0x1a;
    uStack_7df = 0x7461656863;
    uStack_7da = 0x4573;
    uStack_7d8 = 0x6e;
    uStack_7d7 = 0x64656c6261;
    uStack_7d2 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_7e0,*(undefined1 *)(lStack_a10 + 0x450));
    if ((bStack_7e0 & 1) != 0) {
      func_0x0412a280(uStack_7d0,
                      CONCAT26(uStack_7da,CONCAT51(uStack_7df,bStack_7e0)) & 0xfffffffffffffffe);
    }
    bStack_7f8 = 0x1e;
    uStack_7f7 = 0x646e616d6d6f63;
    uStack_7f0 = 0x73;
    uStack_7ef = 0x64656c62616e45;
    uStack_7e8 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_7f8,*(undefined1 *)(lVar43 + 0x451));
    if ((bStack_7f8 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_7e7,uStack_7e8),
                      CONCAT71(uStack_7f7,bStack_7f8) & 0xfffffffffffffffe);
    }
    bStack_810 = 0x28;
    uStack_80f = (undefined7)_DAT_0131d714;
    uStack_808 = (undefined1)((ulong)_DAT_0131d714 >> 0x38);
    uStack_807 = (undefined7)_UNK_0131d71c;
    uStack_800 = (undefined1)((ulong)_UNK_0131d71c >> 0x38);
    uStack_7ff = 0x64657269;
    uStack_7fb = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_810,*(undefined1 *)(lVar43 + 0x452));
    if ((bStack_810 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_7fa,CONCAT15(uStack_7fb,CONCAT41(uStack_7ff,uStack_800))),
                      CONCAT71(uStack_80f,bStack_810) & 0xfffffffffffffffe);
    }
    bStack_828 = 0x2a;
    uStack_827 = (undefined7)_DAT_014c0b40;
    uStack_820 = (undefined1)((ulong)_DAT_014c0b40 >> 0x38);
    uStack_81f = (undefined5)_UNK_014c0b48;
    uStack_81a = 0x6976;
    uStack_818 = 0x6f;
    uStack_817 = 0x6b63615072;
    uStack_812 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_828,*(undefined1 *)(lVar43 + 0x453));
    if ((bStack_828 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_811,CONCAT16(uStack_812,CONCAT51(uStack_817,uStack_818))),
                      CONCAT71(uStack_827,bStack_828) & 0xfffffffffffffffe);
    }
    bStack_840 = 0x2a;
    uStack_83f = (undefined7)_DAT_013d790c;
    uStack_838 = (undefined1)((ulong)_DAT_013d790c >> 0x38);
    uStack_837 = (undefined5)_UNK_013d7914;
    uStack_832 = 0x7275;
    uStack_830 = 99;
    uStack_82f = 0x6b63615065;
    uStack_82a = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_840,*(undefined1 *)(lVar43 + 0x454));
    if ((bStack_840 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_829,CONCAT16(uStack_82a,CONCAT51(uStack_82f,uStack_830))),
                      CONCAT71(uStack_83f,bStack_840) & 0xfffffffffffffffe);
    }
    bStack_858 = 0x28;
    uStack_857 = (undefined7)_DAT_0147118b;
    uStack_850 = (undefined1)((ulong)_DAT_0147118b >> 0x38);
    uStack_84f = (undefined7)_UNK_01471193;
    uStack_848 = (undefined1)((ulong)_UNK_01471193 >> 0x38);
    uStack_847 = 0x6574616c;
    uStack_843 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_858,*(undefined1 *)(lVar43 + 0x455));
    if ((bStack_858 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_842,CONCAT15(uStack_843,CONCAT41(uStack_847,uStack_848))),
                      CONCAT71(uStack_857,bStack_858) & 0xfffffffffffffffe);
    }
    bStack_870 = 0x26;
    uStack_86f = (undefined7)_DAT_0148c013;
    uStack_868 = (undefined1)((ulong)_DAT_0148c013 >> 0x38);
    uStack_867 = (undefined7)_UNK_0148c01b;
    uStack_860 = 0x6465776f;
    uStack_85c = uStack_85c & 0xffffff00;
    func_0x0d6bbef0(lStack_a18,&bStack_870,*(undefined1 *)(lVar43 + 0x456));
    if ((bStack_870 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_85c,uStack_860),
                      CONCAT71(uStack_86f,bStack_870) & 0xfffffffffffffffe);
    }
    bStack_888 = 0x26;
    uStack_887 = (undefined7)_DAT_013a379c;
    uStack_880 = (undefined1)((ulong)_DAT_013a379c >> 0x38);
    uStack_87f = (undefined7)_UNK_013a37a4;
    uStack_878 = 0x796c6e4f;
    uStack_874 = uStack_874 & 0xffffff00;
    func_0x0d6bbef0(lStack_a18,&bStack_888,*(undefined1 *)(lVar43 + 0x4b8));
    if ((bStack_888 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_874,uStack_878),
                      CONCAT71(uStack_887,bStack_888) & 0xfffffffffffffffe);
    }
    func_0x0d1dceb0(lVar43 + 8,lStack_a18);
    bStack_8a0 = 0x2a;
    uStack_89f = (undefined7)_DAT_0123465e;
    uStack_898 = (undefined1)((ulong)_DAT_0123465e >> 0x38);
    uStack_897 = (undefined5)_UNK_01234666;
    uStack_892 = 0x5668;
    uStack_890 = 0x65;
    uStack_88f = 0x6e6f697372;
    uStack_88a = 0;
    func_0x06cfe4c0(&uStack_a48,lVar43 + 0x340);
    puVar35 = uStack_a48;
    puStack_a8 = uStack_a48;
    func_0x0d6bb450(lStack_a18,&bStack_8a0,&puStack_a8);
    puStack_a8 = (ulong *)0x0;
    if (puVar35 != (ulong *)0x0) {
      (**(code **)(*puVar35 + 8))(puVar35);
    }
    if ((bStack_8a0 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_889,CONCAT16(uStack_88a,CONCAT51(uStack_88f,uStack_890))),
                      CONCAT71(uStack_89f,bStack_8a0) & 0xfffffffffffffffe);
    }
    if (*(int *)(lVar43 + 0x3a8) != 0) {
      bStack_8b8 = 0x18;
      uStack_8b7 = 0x69746163756445;
      uStack_8b0 = 0x6f;
      uStack_8af = 0x64694f6e;
      uStack_8ab = 0;
      lVar44 = func_0x0d2279e0(auStack_9c8._0_8_,0xf71d798);
      if ((lVar44 == 0) && (lVar44 = func_0x0d2279e0(lVar43 + 0x4f0,0xf71d798), lVar44 == 0)) {
        pbVar55 = (byte *)0x0;
      }
      else {
        pbVar55 = (byte *)0x0;
        if (*(int *)(lVar44 + 0x50) == 3) {
          pbVar55 = (byte *)(lVar44 + 0x38);
        }
      }
      pbVar46 = &UNK_01e79d90;
      if (pbVar55 != (byte *)0x0) {
        pbVar46 = pbVar55;
      }
      if ((*pbVar46 & 1) == 0) {
        uStack_458 = *(undefined8 *)(pbVar46 + 0x10);
        uStack_468 = *(undefined8 *)pbVar46;
        uStack_460 = *(undefined8 *)(pbVar46 + 8);
      }
      else {
        func_0x0412e5e0(&uStack_468,*(undefined8 *)(pbVar46 + 0x10),*(undefined8 *)(pbVar46 + 8));
      }
      uStack_a48 = (ulong *)&bStack_8b8;
      lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
      if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))
                  (&uStack_a48,lVar44 + 0x38);
      }
      uVar37 = uStack_458;
      uVar36 = uStack_460;
      uVar47 = uStack_468;
      uStack_468 = 0;
      uStack_460 = 0;
      uStack_458 = 0;
      *(undefined **)(lVar44 + 0x38) = &UNK_0f47e5e8;
      *(undefined8 *)(lVar44 + 0x40) = uVar47;
      *(undefined8 *)(lVar44 + 0x48) = uVar36;
      *(undefined8 *)(lVar44 + 0x50) = uVar37;
      *(undefined4 *)(lVar44 + 0x60) = 8;
      if ((bStack_8b8 & 1) != 0) {
        func_0x0412a280(uStack_8a8,CONCAT71(uStack_8b7,bStack_8b8) & 0xfffffffffffffffe);
      }
      bStack_8d0 = 0x24;
      uStack_8cf = (undefined7)_DAT_011f101f;
      uStack_8c8 = (undefined1)((ulong)_DAT_011f101f >> 0x38);
      uStack_8c7 = (undefined7)_UNK_011f1027;
      uStack_8c0 = (undefined1)((ulong)_UNK_011f1027 >> 0x38);
      uStack_8bf = 0x6449;
      uStack_8bd = 0;
      if ((*(byte *)(lVar43 + 0x458) & 1) == 0) {
        uStack_478 = *(undefined8 *)(lVar43 + 0x468);
        uStack_488 = *(undefined8 *)(lVar43 + 0x458);
        uStack_480 = *(undefined8 *)(lVar43 + 0x460);
      }
      else {
        func_0x0412e5e0(&uStack_488,*(undefined8 *)(lVar43 + 0x468),*(undefined8 *)(lVar43 + 0x460))
        ;
      }
      uStack_a48 = (ulong *)&bStack_8d0;
      lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
      if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))
                  (&uStack_a48,lVar44 + 0x38);
      }
      uVar37 = uStack_478;
      uVar36 = uStack_480;
      uVar47 = uStack_488;
      uStack_488 = 0;
      uStack_480 = 0;
      uStack_478 = 0;
      *(undefined **)(lVar44 + 0x38) = &UNK_0f47e5e8;
      *(undefined8 *)(lVar44 + 0x40) = uVar47;
      *(undefined8 *)(lVar44 + 0x48) = uVar36;
      *(undefined8 *)(lVar44 + 0x50) = uVar37;
      *(undefined4 *)(lVar44 + 0x60) = 8;
      if ((bStack_8d0 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_8bc,CONCAT13(uStack_8bd,CONCAT21(uStack_8bf,uStack_8c0))),
                        CONCAT71(uStack_8cf,bStack_8d0) & 0xfffffffffffffffe);
      }
      bStack_8e8 = 0x24;
      uStack_8e7 = (undefined7)_DAT_011a0b13;
      uStack_8e0 = (undefined1)((ulong)_DAT_011a0b13 >> 0x38);
      uStack_8df = (undefined7)_UNK_011a0b1b;
      uStack_8d8 = (undefined1)((ulong)_UNK_011a0b1b >> 0x38);
      uStack_8d7 = 0x6449;
      uStack_8d5 = 0;
      if ((*(byte *)(lVar43 + 0x470) & 1) == 0) {
        uStack_498 = *(undefined8 *)(lVar43 + 0x480);
        uStack_4a8 = *(undefined8 *)(lVar43 + 0x470);
        uStack_4a0 = *(undefined8 *)(lVar43 + 0x478);
      }
      else {
        func_0x0412e5e0(&uStack_4a8,*(undefined8 *)(lVar43 + 0x480),*(undefined8 *)(lVar43 + 0x478))
        ;
      }
      uStack_a48 = (ulong *)&bStack_8e8;
      lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
      if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))
                  (&uStack_a48,lVar44 + 0x38);
      }
      uVar37 = uStack_498;
      uVar36 = uStack_4a0;
      uVar47 = uStack_4a8;
      uStack_4a8 = 0;
      uStack_4a0 = 0;
      uStack_498 = 0;
      *(undefined **)(lVar44 + 0x38) = &UNK_0f47e5e8;
      *(undefined8 *)(lVar44 + 0x40) = uVar47;
      *(undefined8 *)(lVar44 + 0x48) = uVar36;
      *(undefined8 *)(lVar44 + 0x50) = uVar37;
      *(undefined4 *)(lVar44 + 0x60) = 8;
      if ((bStack_8e8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_8d4,CONCAT13(uStack_8d5,CONCAT21(uStack_8d7,uStack_8d8))),
                        CONCAT71(uStack_8e7,bStack_8e8) & 0xfffffffffffffffe);
      }
      puStack_270 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
      if (puStack_270 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x1a,0);
      }
      uVar47 = _UNK_014dbee3;
      uStack_280 = 0x1b;
      uStack_278 = 0x17;
      *puStack_270 = _DAT_014dbedb;
      puStack_270[1] = uVar47;
      *(undefined8 *)((long)puStack_270 + 0xf) = 0x6449726f74616572;
      *(undefined1 *)((long)puStack_270 + 0x17) = 0;
      if ((*(byte *)(lVar43 + 0x488) & 1) == 0) {
        uStack_4b8 = *(undefined8 *)(lVar43 + 0x498);
        uStack_4c8 = *(undefined8 *)(lVar43 + 0x488);
        uStack_4c0 = *(undefined8 *)(lVar43 + 0x490);
      }
      else {
        func_0x0412e5e0(&uStack_4c8,*(undefined8 *)(lVar43 + 0x498),*(undefined8 *)(lVar43 + 0x490))
        ;
      }
      uStack_a48 = &uStack_280;
      lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
      if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))
                  (&uStack_a48,lVar44 + 0x38);
      }
      uVar37 = uStack_4b8;
      uVar36 = uStack_4c0;
      uVar47 = uStack_4c8;
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      *(undefined **)(lVar44 + 0x38) = &UNK_0f47e5e8;
      *(undefined8 *)(lVar44 + 0x40) = uVar47;
      *(undefined8 *)(lVar44 + 0x48) = uVar36;
      *(undefined8 *)(lVar44 + 0x50) = uVar37;
      *(undefined4 *)(lVar44 + 0x60) = 8;
      if ((uStack_280 & 1) != 0) {
        func_0x0412a280(puStack_270,uStack_280 & 0xfffffffffffffffe);
      }
      bStack_900 = 0x26;
      uStack_8ff = (undefined7)_DAT_0148c027;
      uStack_8f8 = (undefined1)((ulong)_DAT_0148c027 >> 0x38);
      uStack_8f7 = (undefined7)_UNK_0148c02f;
      uStack_8f0 = 0x64497265;
      uStack_8ec = uStack_8ec & 0xffffff00;
      if ((*(byte *)(lVar43 + 0x4a0) & 1) == 0) {
        uStack_4d8 = *(undefined8 *)(lVar43 + 0x4b0);
        uStack_4e8 = *(undefined8 *)(lVar43 + 0x4a0);
        uStack_4e0 = *(undefined8 *)(lVar43 + 0x4a8);
      }
      else {
        func_0x0412e5e0(&uStack_4e8,*(undefined8 *)(lVar43 + 0x4b0),*(undefined8 *)(lVar43 + 0x4a8))
        ;
      }
      uStack_a48 = (ulong *)&bStack_900;
      lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
      if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))
                  (&uStack_a48,lVar44 + 0x38);
      }
      uVar37 = uStack_4d8;
      uVar36 = uStack_4e0;
      uVar47 = uStack_4e8;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      *(undefined **)(lVar44 + 0x38) = &UNK_0f47e5e8;
      *(undefined8 *)(lVar44 + 0x40) = uVar47;
      *(undefined8 *)(lVar44 + 0x48) = uVar36;
      *(undefined8 *)(lVar44 + 0x50) = uVar37;
      *(undefined4 *)(lVar44 + 0x60) = 8;
      if ((bStack_900 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_8ec,uStack_8f0),
                        CONCAT71(uStack_8ff,bStack_900) & 0xfffffffffffffffe);
      }
      if ((DAT_0f71d630 & 1) == 0) {
        uStack_4f8 = _DAT_0f71d640;
        uStack_508 = CONCAT71(uRam000000000f71d631,DAT_0f71d630);
        uStack_500 = _DAT_0f71d638;
      }
      else {
        func_0x0412e5e0(&uStack_508,_DAT_0f71d640,_DAT_0f71d638);
      }
      uVar47 = func_0x0d212860(lVar43);
      plVar48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar48 == (long *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      *plVar48 = (long)&UNK_0f47e0b0;
      pauVar65 = (undefined1 (*) [16])(plVar48 + 2);
      *(undefined1 (*) [16])(plVar48 + 2) = (undefined1  [16])0x0;
      plVar48[1] = (long)pauVar65;
      func_0x0d6bd5f0(plVar48,uVar47);
      uStack_a48 = &uStack_508;
      lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
      if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))
                  (&uStack_a48,lVar44 + 0x38);
      }
      *(undefined **)(lVar44 + 0x38) = &UNK_0f47e0b0;
      *(long *)(lVar44 + 0x40) = plVar48[1];
      lVar5 = plVar48[2];
      *(long *)(lVar44 + 0x48) = lVar5;
      lVar6 = plVar48[3];
      *(long *)(lVar44 + 0x50) = lVar6;
      if (lVar6 == 0) {
        *(long *)(lVar44 + 0x40) = lVar44 + 0x48;
      }
      else {
        *(long *)(lVar5 + 0x10) = lVar44 + 0x48;
        plVar48[1] = (long)pauVar65;
        *pauVar65 = (undefined1  [16])0x0;
      }
      *(undefined4 *)(lVar44 + 0x60) = 10;
      (**(code **)(*plVar48 + 8))(plVar48);
      if ((uStack_508 & 1) != 0) {
        func_0x0412a280(uStack_4f8,uStack_508 & 0xfffffffffffffffe);
      }
    }
    bStack_298 = 0x20;
    uStack_297 = (undefined7)_DAT_014582d1;
    uStack_290 = (undefined1)((ulong)_DAT_014582d1 >> 0x38);
    uStack_28f = (undefined7)_UNK_014582d9;
    uStack_288 = (undefined1)((ulong)_UNK_014582d9 >> 0x38);
    uStack_287 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_298,*(undefined1 *)(lVar43 + 0x439));
    if ((bStack_298 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_286,CONCAT11(uStack_287,uStack_288)),
                      CONCAT71(uStack_297,bStack_298) & 0xfffffffffffffffe);
    }
    bStack_2b0 = 0x22;
    uStack_2af = (undefined7)_DAT_014dbef3;
    uStack_2a8 = (undefined1)((ulong)_DAT_014dbef3 >> 0x38);
    uStack_2a7 = (undefined7)_UNK_014dbefb;
    uStack_2a0 = (undefined1)((ulong)_UNK_014dbefb >> 0x38);
    uStack_29f = 100;
    func_0x0d6bbef0(lStack_a18,&bStack_2b0,*(undefined1 *)(lVar43 + 0x4b9));
    if ((bStack_2b0 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_29d,CONCAT21(uStack_29f,uStack_2a0)),
                      CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
    }
    bStack_2c8 = 0x22;
    uStack_2c7 = (undefined7)_DAT_01283198;
    uStack_2c0 = (undefined1)((ulong)_DAT_01283198 >> 0x38);
    uStack_2bf = (undefined7)_UNK_012831a0;
    uStack_2b8 = (undefined1)((ulong)_UNK_012831a0 >> 0x38);
    uStack_2b7 = 100;
    func_0x0d6bbef0(lStack_a18,&bStack_2c8,*(undefined1 *)(lVar43 + 0x4ba));
    if ((bStack_2c8 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_2b5,CONCAT21(uStack_2b7,uStack_2b8)),
                      CONCAT71(uStack_2c7,bStack_2c8) & 0xfffffffffffffffe);
    }
    bStack_918 = 0x26;
    uStack_917 = (undefined7)_DAT_012cf174;
    uStack_910 = (undefined1)((ulong)_DAT_012cf174 >> 0x38);
    uStack_90f = (undefined7)_UNK_012cf17c;
    uStack_908 = 0x64656c62;
    uStack_904 = uStack_904 & 0xffffff00;
    func_0x0d6bbef0(lStack_a18,&bStack_918,*(undefined1 *)(lVar43 + 0x4bb));
    if ((bStack_918 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_904,uStack_908),
                      CONCAT71(uStack_917,bStack_918) & 0xfffffffffffffffe);
    }
    bStack_930 = 0x28;
    uStack_92f = (undefined7)_DAT_011e49e6;
    uStack_928 = (undefined1)((ulong)_DAT_011e49e6 >> 0x38);
    uStack_927 = (undefined7)_UNK_011e49ee;
    uStack_920 = (undefined1)((ulong)_UNK_011e49ee >> 0x38);
    uStack_91f = 0x65676e61;
    uStack_91b = 0;
    uVar58 = *(undefined4 *)(lVar43 + 0x328);
    uStack_a48 = (ulong *)&bStack_930;
    lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
    }
    *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
    *(undefined4 *)(lVar43 + 0x40) = uVar58;
    *(undefined4 *)(lVar43 + 0x60) = 3;
    if ((bStack_930 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_91a,CONCAT15(uStack_91b,CONCAT41(uStack_91f,uStack_920))),
                      CONCAT71(uStack_92f,bStack_930) & 0xfffffffffffffffe);
    }
    lVar43 = lStack_a10;
    bStack_948 = 0x24;
    uStack_947 = (undefined7)_DAT_012831aa;
    uStack_940 = (undefined1)((ulong)_DAT_012831aa >> 0x38);
    uStack_93f = (undefined7)_UNK_012831b2;
    uStack_938 = (undefined1)((ulong)_UNK_012831b2 >> 0x38);
    uStack_937 = 0x6e69;
    uStack_935 = 0;
    func_0x0d6bbef0(lStack_a18,&bStack_948,*(undefined1 *)(lStack_a10 + 0x4bc));
    if ((bStack_948 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_934,CONCAT13(uStack_935,CONCAT21(uStack_937,uStack_938))),
                      CONCAT71(uStack_947,bStack_948) & 0xfffffffffffffffe);
    }
    pcVar64 = *(char **)(lVar43 + 0xb8);
    for (unaff_R13 = *(char **)(lVar43 + 0xb0); unaff_R13 != pcVar64; unaff_R13 = unaff_R13 + 0xf0)
    {
      if (*unaff_R13 == '\x01') {
        bVar68 = (unaff_R13[0x10] & 1U) != 0;
        pcVar51 = unaff_R13 + 0x11;
        if (bVar68) {
          pcVar51 = *(char **)(unaff_R13 + 0x20);
        }
        pcVar61 = (char *)(ulong)((byte)unaff_R13[0x10] >> 1);
        if (bVar68) {
          pcVar61 = *(char **)(unaff_R13 + 0x18);
        }
        if ((char *)0xfffffffffffffff7 < pcVar61) goto LAB_0d21134c;
        if (pcVar61 < (char *)0x17) {
          uStack_a48 = (ulong *)CONCAT71(uStack_a48._1_7_,(char)pcVar61 * '\x02');
          lVar43 = (long)&uStack_a48 + 1;
          if (pcVar61 != (char *)0x0) goto LAB_0d21001b;
        }
        else {
          uVar66 = ((ulong)pcVar61 | 7) + 1;
          if (((ulong)pcVar61 | 7) == 0x17) {
            uVar66 = 0x1a;
          }
          lVar43 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar66);
          if (lVar43 == 0) {
            FUN_0eec74c0(uVar66,0);
          }
          auStack_a38._0_8_ = lVar43;
          uStack_a48 = (ulong *)(uVar66 | 1);
          pcStack_a40 = pcVar61;
LAB_0d21001b:
          func_0x0eee2f00(lVar43,pcVar51,pcVar61);
        }
        pcVar61[lVar43] = '\0';
        lVar43 = lStack_a10;
        pcVar61 = (char *)((ulong)uStack_a48 >> 1 & 0x7f);
        pcVar51 = (char *)((long)&uStack_a48 + 1);
        if (((ulong)uStack_a48 & 1) != 0) {
          pcVar61 = pcStack_a40;
          pcVar51 = (char *)auStack_a38._0_8_;
        }
        if (pcVar61 != (char *)0x0) {
          pcVar60 = pcVar51;
          if ((char *)0x7 < pcVar61) {
            if (pcVar61 < (char *)0x20) {
              pcVar56 = (char *)0x0;
            }
            else {
              pcVar56 = (char *)((ulong)pcVar61 & 0xffffffffffffffe0);
              pcVar60 = (char *)0x0;
              do {
                auVar2 = *(undefined1 (*) [16])(pcVar51 + (long)pcVar60);
                pcVar63 = pcVar51 + 0x10 + (long)pcVar60;
                cVar40 = *pcVar63;
                cVar70 = pcVar63[1];
                cVar72 = pcVar63[2];
                cVar74 = pcVar63[3];
                cVar76 = pcVar63[4];
                cVar78 = pcVar63[5];
                cVar80 = pcVar63[6];
                cVar9 = pcVar63[7];
                cVar10 = pcVar63[8];
                cVar11 = pcVar63[9];
                cVar12 = pcVar63[10];
                cVar13 = pcVar63[0xb];
                cVar14 = pcVar63[0xc];
                cVar15 = pcVar63[0xd];
                cVar16 = pcVar63[0xe];
                cVar17 = pcVar63[0xf];
                bVar39 = auVar2[0] + DAT_014e86b0;
                bVar69 = auVar2[1] + UNK_014e86b1;
                bVar71 = auVar2[2] + UNK_014e86b2;
                bVar73 = auVar2[3] + UNK_014e86b3;
                bVar75 = auVar2[4] + UNK_014e86b4;
                bVar77 = auVar2[5] + UNK_014e86b5;
                bVar79 = auVar2[6] + UNK_014e86b6;
                bVar81 = auVar2[7] + UNK_014e86b7;
                bVar82 = auVar2[8] + UNK_014e86b8;
                bVar83 = auVar2[9] + UNK_014e86b9;
                bVar84 = auVar2[10] + UNK_014e86ba;
                bVar85 = auVar2[0xb] + UNK_014e86bb;
                bVar86 = auVar2[0xc] + UNK_014e86bc;
                bVar87 = auVar2[0xd] + UNK_014e86bd;
                bVar88 = auVar2[0xe] + UNK_014e86be;
                bVar89 = auVar2[0xf] + UNK_014e86bf;
                bVar90 = cVar40 + DAT_014e86b0;
                bVar91 = cVar70 + UNK_014e86b1;
                bVar92 = cVar72 + UNK_014e86b2;
                bVar93 = cVar74 + UNK_014e86b3;
                bVar94 = cVar76 + UNK_014e86b4;
                bVar95 = cVar78 + UNK_014e86b5;
                bVar96 = cVar80 + UNK_014e86b6;
                bVar97 = cVar9 + UNK_014e86b7;
                bVar98 = cVar10 + UNK_014e86b8;
                bVar99 = cVar11 + UNK_014e86b9;
                bVar100 = cVar12 + UNK_014e86ba;
                bVar101 = cVar13 + UNK_014e86bb;
                bVar102 = cVar14 + UNK_014e86bc;
                bVar103 = cVar15 + UNK_014e86bd;
                bVar104 = cVar16 + UNK_014e86be;
                bVar105 = cVar17 + UNK_014e86bf;
                pcVar63 = pcVar51 + (long)pcVar60;
                *pcVar63 = (-((byte)((DAT_014e4170 < bVar39) * DAT_014e4170 |
                                    (DAT_014e4170 >= bVar39) * bVar39) == bVar39) & DAT_014ead50) +
                           auVar2[0];
                pcVar63[1] = (-((byte)((UNK_014e4171 < bVar69) * UNK_014e4171 |
                                      (UNK_014e4171 >= bVar69) * bVar69) == bVar69) & UNK_014ead51)
                             + auVar2[1];
                pcVar63[2] = (-((byte)((UNK_014e4172 < bVar71) * UNK_014e4172 |
                                      (UNK_014e4172 >= bVar71) * bVar71) == bVar71) & UNK_014ead52)
                             + auVar2[2];
                pcVar63[3] = (-((byte)((UNK_014e4173 < bVar73) * UNK_014e4173 |
                                      (UNK_014e4173 >= bVar73) * bVar73) == bVar73) & UNK_014ead53)
                             + auVar2[3];
                pcVar63[4] = (-((byte)((UNK_014e4174 < bVar75) * UNK_014e4174 |
                                      (UNK_014e4174 >= bVar75) * bVar75) == bVar75) & UNK_014ead54)
                             + auVar2[4];
                pcVar63[5] = (-((byte)((UNK_014e4175 < bVar77) * UNK_014e4175 |
                                      (UNK_014e4175 >= bVar77) * bVar77) == bVar77) & UNK_014ead55)
                             + auVar2[5];
                pcVar63[6] = (-((byte)((UNK_014e4176 < bVar79) * UNK_014e4176 |
                                      (UNK_014e4176 >= bVar79) * bVar79) == bVar79) & UNK_014ead56)
                             + auVar2[6];
                pcVar63[7] = (-((byte)((UNK_014e4177 < bVar81) * UNK_014e4177 |
                                      (UNK_014e4177 >= bVar81) * bVar81) == bVar81) & UNK_014ead57)
                             + auVar2[7];
                pcVar63[8] = (-((byte)((UNK_014e4178 < bVar82) * UNK_014e4178 |
                                      (UNK_014e4178 >= bVar82) * bVar82) == bVar82) & UNK_014ead58)
                             + auVar2[8];
                pcVar63[9] = (-((byte)((UNK_014e4179 < bVar83) * UNK_014e4179 |
                                      (UNK_014e4179 >= bVar83) * bVar83) == bVar83) & UNK_014ead59)
                             + auVar2[9];
                pcVar63[10] = (-((byte)((UNK_014e417a < bVar84) * UNK_014e417a |
                                       (UNK_014e417a >= bVar84) * bVar84) == bVar84) & UNK_014ead5a)
                              + auVar2[10];
                pcVar63[0xb] = (-((byte)((UNK_014e417b < bVar85) * UNK_014e417b |
                                        (UNK_014e417b >= bVar85) * bVar85) == bVar85) & UNK_014ead5b
                               ) + auVar2[0xb];
                pcVar63[0xc] = (-((byte)((UNK_014e417c < bVar86) * UNK_014e417c |
                                        (UNK_014e417c >= bVar86) * bVar86) == bVar86) & UNK_014ead5c
                               ) + auVar2[0xc];
                pcVar63[0xd] = (-((byte)((UNK_014e417d < bVar87) * UNK_014e417d |
                                        (UNK_014e417d >= bVar87) * bVar87) == bVar87) & UNK_014ead5d
                               ) + auVar2[0xd];
                pcVar63[0xe] = (-((byte)((UNK_014e417e < bVar88) * UNK_014e417e |
                                        (UNK_014e417e >= bVar88) * bVar88) == bVar88) & UNK_014ead5e
                               ) + auVar2[0xe];
                pcVar63[0xf] = (-((byte)((UNK_014e417f < bVar89) * UNK_014e417f |
                                        (UNK_014e417f >= bVar89) * bVar89) == bVar89) & UNK_014ead5f
                               ) + auVar2[0xf];
                pcVar63 = pcVar51 + 0x10 + (long)pcVar60;
                *pcVar63 = (-((byte)((DAT_014e4170 < bVar90) * DAT_014e4170 |
                                    (DAT_014e4170 >= bVar90) * bVar90) == bVar90) & DAT_014ead50) +
                           cVar40;
                pcVar63[1] = (-((byte)((UNK_014e4171 < bVar91) * UNK_014e4171 |
                                      (UNK_014e4171 >= bVar91) * bVar91) == bVar91) & UNK_014ead51)
                             + cVar70;
                pcVar63[2] = (-((byte)((UNK_014e4172 < bVar92) * UNK_014e4172 |
                                      (UNK_014e4172 >= bVar92) * bVar92) == bVar92) & UNK_014ead52)
                             + cVar72;
                pcVar63[3] = (-((byte)((UNK_014e4173 < bVar93) * UNK_014e4173 |
                                      (UNK_014e4173 >= bVar93) * bVar93) == bVar93) & UNK_014ead53)
                             + cVar74;
                pcVar63[4] = (-((byte)((UNK_014e4174 < bVar94) * UNK_014e4174 |
                                      (UNK_014e4174 >= bVar94) * bVar94) == bVar94) & UNK_014ead54)
                             + cVar76;
                pcVar63[5] = (-((byte)((UNK_014e4175 < bVar95) * UNK_014e4175 |
                                      (UNK_014e4175 >= bVar95) * bVar95) == bVar95) & UNK_014ead55)
                             + cVar78;
                pcVar63[6] = (-((byte)((UNK_014e4176 < bVar96) * UNK_014e4176 |
                                      (UNK_014e4176 >= bVar96) * bVar96) == bVar96) & UNK_014ead56)
                             + cVar80;
                pcVar63[7] = (-((byte)((UNK_014e4177 < bVar97) * UNK_014e4177 |
                                      (UNK_014e4177 >= bVar97) * bVar97) == bVar97) & UNK_014ead57)
                             + cVar9;
                pcVar63[8] = (-((byte)((UNK_014e4178 < bVar98) * UNK_014e4178 |
                                      (UNK_014e4178 >= bVar98) * bVar98) == bVar98) & UNK_014ead58)
                             + cVar10;
                pcVar63[9] = (-((byte)((UNK_014e4179 < bVar99) * UNK_014e4179 |
                                      (UNK_014e4179 >= bVar99) * bVar99) == bVar99) & UNK_014ead59)
                             + cVar11;
                pcVar63[10] = (-((byte)((UNK_014e417a < bVar100) * UNK_014e417a |
                                       (UNK_014e417a >= bVar100) * bVar100) == bVar100) &
                              UNK_014ead5a) + cVar12;
                pcVar63[0xb] = (-((byte)((UNK_014e417b < bVar101) * UNK_014e417b |
                                        (UNK_014e417b >= bVar101) * bVar101) == bVar101) &
                               UNK_014ead5b) + cVar13;
                pcVar63[0xc] = (-((byte)((UNK_014e417c < bVar102) * UNK_014e417c |
                                        (UNK_014e417c >= bVar102) * bVar102) == bVar102) &
                               UNK_014ead5c) + cVar14;
                pcVar63[0xd] = (-((byte)((UNK_014e417d < bVar103) * UNK_014e417d |
                                        (UNK_014e417d >= bVar103) * bVar103) == bVar103) &
                               UNK_014ead5d) + cVar15;
                pcVar63[0xe] = (-((byte)((UNK_014e417e < bVar104) * UNK_014e417e |
                                        (UNK_014e417e >= bVar104) * bVar104) == bVar104) &
                               UNK_014ead5e) + cVar16;
                pcVar63[0xf] = (-((byte)((UNK_014e417f < bVar105) * UNK_014e417f |
                                        (UNK_014e417f >= bVar105) * bVar105) == bVar105) &
                               UNK_014ead5f) + cVar17;
                pcVar60 = pcVar60 + 0x20;
              } while (pcVar56 != pcVar60);
              if (pcVar61 == pcVar56) goto LAB_0d21019d;
              if (((ulong)pcVar61 & 0x18) == 0) {
                pcVar60 = pcVar56 + (long)pcVar51;
                goto LAB_0d210170;
              }
            }
            pcVar63 = (char *)((ulong)pcVar61 & 0xfffffffffffffff8);
            pcVar60 = pcVar51 + (long)pcVar63;
            do {
              uVar47 = *(undefined8 *)(pcVar51 + (long)pcVar56);
              bVar39 = (char)uVar47 + DAT_014e9110;
              cVar70 = (char)((ulong)uVar47 >> 8);
              bVar69 = cVar70 + UNK_014e9111;
              cVar72 = (char)((ulong)uVar47 >> 0x10);
              bVar71 = cVar72 + UNK_014e9112;
              cVar74 = (char)((ulong)uVar47 >> 0x18);
              bVar73 = cVar74 + UNK_014e9113;
              cVar76 = (char)((ulong)uVar47 >> 0x20);
              bVar75 = cVar76 + UNK_014e9114;
              cVar78 = (char)((ulong)uVar47 >> 0x28);
              bVar77 = cVar78 + UNK_014e9115;
              cVar80 = (char)((ulong)uVar47 >> 0x30);
              cVar40 = (char)((ulong)uVar47 >> 0x38);
              bVar79 = cVar80 + UNK_014e9116;
              bVar81 = cVar40 + UNK_014e9117;
              *(ulong *)(pcVar51 + (long)pcVar56) =
                   CONCAT17((~-((byte)((bVar81 < UNK_014e8cb7) * UNK_014e8cb7 |
                                      (bVar81 >= UNK_014e8cb7) * bVar81) == bVar81) & UNK_014ea367)
                            + cVar40,CONCAT16((~-((byte)((bVar79 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                        (bVar79 >= UNK_014e8cb6) * bVar79) == bVar79
                                                 ) & UNK_014ea366) + cVar80,
                                              CONCAT15((~-((byte)((bVar77 < UNK_014e8cb5) *
                                                                  UNK_014e8cb5 |
                                                                 (bVar77 >= UNK_014e8cb5) * bVar77)
                                                          == bVar77) & UNK_014ea365) + cVar78,
                                                       CONCAT14((~-((byte)((bVar75 < UNK_014e8cb4) *
                                                                           UNK_014e8cb4 |
                                                                          (bVar75 >= UNK_014e8cb4) *
                                                                          bVar75) == bVar75) &
                                                                UNK_014ea364) + cVar76,
                                                                CONCAT13((~-((byte)((bVar73 < 
                                                  UNK_014e8cb3) * UNK_014e8cb3 |
                                                  (bVar73 >= UNK_014e8cb3) * bVar73) == bVar73) &
                                                  UNK_014ea363) + cVar74,
                                                  CONCAT12((~-((byte)((bVar71 < UNK_014e8cb2) *
                                                                      UNK_014e8cb2 |
                                                                     (bVar71 >= UNK_014e8cb2) *
                                                                     bVar71) == bVar71) &
                                                           UNK_014ea362) + cVar72,
                                                           CONCAT11((~-((byte)((bVar69 < 
                                                  UNK_014e8cb1) * UNK_014e8cb1 |
                                                  (bVar69 >= UNK_014e8cb1) * bVar69) == bVar69) &
                                                  UNK_014ea361) + cVar70,
                                                  (~-((byte)((bVar39 < DAT_014e8cb0) * DAT_014e8cb0
                                                            | (bVar39 >= DAT_014e8cb0) * bVar39) ==
                                                     bVar39) & DAT_014ea360) + (char)uVar47)))))));
              pcVar56 = pcVar56 + 8;
            } while (pcVar63 != pcVar56);
            if (pcVar61 == pcVar63) goto LAB_0d21019d;
          }
LAB_0d210170:
          do {
            cVar40 = *pcVar60;
            cVar70 = cVar40 + ' ';
            if (0x19 < (byte)(cVar40 + 0xbfU)) {
              cVar70 = cVar40;
            }
            *pcVar60 = cVar70;
            pcVar60 = pcVar60 + 1;
          } while (pcVar60 != pcVar51 + (long)pcVar61);
        }
LAB_0d21019d:
        cVar40 = unaff_R13[1];
        if (cVar40 == '\x03') {
          if (((ulong)uStack_a48 & 1) == 0) {
            uStack_358 = auStack_a38._0_8_;
            puStack_368 = uStack_a48;
            pcStack_360 = pcStack_a40;
          }
          else {
            func_0x0412e5e0(&puStack_368,auStack_a38._0_8_,pcStack_a40);
          }
          if (*(int *)(unaff_R13 + 8) != 3) goto LAB_0d21136a;
          auStack_9c8 = ZEXT416(*(uint *)(unaff_R13 + 4));
          uStack_a08 = &puStack_368;
          lVar44 = func_0x0d6c9580(lVar42,uStack_a08,&UNK_01563a4f,&uStack_a08,&ppuStack_998);
          if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
            (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))
                      (&uStack_a08,lVar44 + 0x38);
          }
          *(undefined **)(lVar44 + 0x38) = &UNK_0f47e190;
          *(uint *)(lVar44 + 0x40) =
               -(uint)(!NAN((float)auStack_9c8._0_4_) && !NAN((float)auStack_9c8._0_4_)) &
               auStack_9c8._0_4_;
          *(undefined4 *)(lVar44 + 0x60) = 5;
          if (((ulong)puStack_368 & 1) != 0) {
            ppuVar49 = &puStack_368;
            uVar66 = uStack_358;
LAB_0d2103f2:
            func_0x0412a280(uVar66,(ulong)*ppuVar49 & 0xfffffffffffffffe);
          }
        }
        else if (cVar40 == '\x02') {
          if (((ulong)uStack_a48 & 1) == 0) {
            uStack_338 = auStack_a38._0_8_;
            puStack_348 = uStack_a48;
            pcStack_340 = pcStack_a40;
          }
          else {
            func_0x0412e5e0(&puStack_348,auStack_a38._0_8_,pcStack_a40);
          }
          if (*(int *)(unaff_R13 + 8) != 2) goto LAB_0d211365;
          uVar58 = *(undefined4 *)(unaff_R13 + 4);
          uStack_a08 = &puStack_348;
          lVar43 = func_0x0d6c9580(lVar42,uStack_a08,&UNK_01563a4f,&uStack_a08,&ppuStack_998);
          if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
            (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))
                      (&uStack_a08,lVar43 + 0x38);
          }
          *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
          *(undefined4 *)(lVar43 + 0x40) = uVar58;
          *(undefined4 *)(lVar43 + 0x60) = 3;
          lVar43 = lStack_a10;
          if (((ulong)puStack_348 & 1) != 0) {
            ppuVar49 = &puStack_348;
            uVar66 = uStack_338;
            goto LAB_0d2103f2;
          }
        }
        else if (cVar40 == '\x01') {
          if (((ulong)uStack_a48 & 1) == 0) {
            uStack_9d8 = auStack_a38._0_8_;
            auStack_9e8._8_8_ = pcStack_a40;
            auStack_9e8._0_8_ = uStack_a48;
          }
          else {
            func_0x0412e5e0(auStack_9e8,auStack_a38._0_8_,pcStack_a40);
          }
          if (*(int *)(unaff_R13 + 8) != 1) goto LAB_0d211360;
          func_0x0d6bbef0(lStack_a18,auStack_9e8,unaff_R13[4]);
          if ((auStack_9e8[0] & 1) != 0) {
            ppuVar49 = (ulong **)auStack_9e8;
            uVar66 = uStack_9d8;
            goto LAB_0d2103f2;
          }
        }
        if (((ulong)uStack_a48 & 1) != 0) {
          func_0x0412a280(auStack_a38._0_8_,(ulong)uStack_a48 & 0xfffffffffffffffe);
        }
      }
    }
    uStack_a48 = (ulong *)&UNK_0f47e0b0;
    auStack_a38 = (undefined1  [16])0x0;
    pcStack_a40 = auStack_a38;
    plVar50 = *(long **)(lVar43 + 200);
    plVar48 = (long *)(lVar43 + 0xd0);
    if (plVar50 == plVar48) {
      auStack_a38._8_8_ = 0;
      auStack_a38._0_8_ = 0;
    }
    else {
      unaff_R13 = (char *)((long)&uStack_a08 + 1);
      auStack_9c8._0_8_ = plVar48;
      do {
        bVar68 = (*(byte *)(plVar50 + 0xc) & 1) != 0;
        lVar43 = (long)plVar50 + 0x61;
        if (bVar68) {
          lVar43 = plVar50[0xe];
        }
        pcVar64 = (char *)(ulong)(*(byte *)(plVar50 + 0xc) >> 1);
        if (bVar68) {
          pcVar64 = (char *)plVar50[0xd];
        }
        if ((char *)0xfffffffffffffff7 < pcVar64) {
          func_0x04882e30();
LAB_0d21134c:
          func_0x04882e30();
LAB_0d211351:
          func_0x04931450();
LAB_0d211356:
          func_0x04931450();
LAB_0d21135b:
          func_0x04931450();
LAB_0d211360:
          func_0x04931450();
LAB_0d211365:
          func_0x04931450();
LAB_0d21136a:
          func_0x04931450();
          goto LAB_0d21136f;
        }
        if (pcVar64 < (char *)0x17) {
          uStack_a08 = (ulong **)CONCAT71(uStack_a08._1_7_,(char)pcVar64 * '\x02');
          pcVar51 = unaff_R13;
          if (pcVar64 != (char *)0x0) goto LAB_0d210529;
        }
        else {
          uVar66 = ((ulong)pcVar64 | 7) + 1;
          if (((ulong)pcVar64 | 7) == 0x17) {
            uVar66 = 0x1a;
          }
          pcVar51 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar66);
          if (pcVar51 == (char *)0x0) {
            FUN_0eec74c0(uVar66,0);
          }
          auStack_9f8._0_8_ = pcVar51;
          uStack_a08 = (ulong **)(uVar66 | 1);
          plVar48 = (long *)auStack_9c8._0_8_;
          pcStack_a00 = pcVar64;
LAB_0d210529:
          func_0x0eee2f00(pcVar51,lVar43,pcVar64);
        }
        pcVar51[(long)pcVar64] = '\0';
        pcVar51 = (char *)((ulong)uStack_a08 >> 1 & 0x7f);
        pcVar64 = unaff_R13;
        if (((ulong)uStack_a08 & 1) != 0) {
          pcVar51 = pcStack_a00;
          pcVar64 = (char *)auStack_9f8._0_8_;
        }
        if (pcVar51 != (char *)0x0) {
          pcVar61 = pcVar64;
          if ((char *)0x7 < pcVar51) {
            if (pcVar51 < (char *)0x20) {
              pcVar60 = (char *)0x0;
            }
            else {
              pcVar60 = (char *)((ulong)pcVar51 & 0xffffffffffffffe0);
              pcVar61 = (char *)0x0;
              do {
                pcVar56 = pcVar64 + (long)pcVar61;
                cVar40 = pcVar56[1];
                cVar70 = pcVar56[2];
                cVar72 = pcVar56[3];
                cVar74 = pcVar56[4];
                cVar76 = pcVar56[5];
                cVar78 = pcVar56[6];
                cVar80 = pcVar56[7];
                cVar9 = pcVar56[8];
                cVar10 = pcVar56[9];
                cVar11 = pcVar56[10];
                cVar12 = pcVar56[0xb];
                cVar13 = pcVar56[0xc];
                cVar14 = pcVar56[0xd];
                cVar15 = pcVar56[0xe];
                cVar16 = pcVar56[0xf];
                pcVar63 = pcVar64 + 0x10 + (long)pcVar61;
                cVar17 = *pcVar63;
                cVar18 = pcVar63[1];
                cVar19 = pcVar63[2];
                cVar20 = pcVar63[3];
                cVar21 = pcVar63[4];
                cVar22 = pcVar63[5];
                cVar23 = pcVar63[6];
                cVar24 = pcVar63[7];
                cVar25 = pcVar63[8];
                cVar26 = pcVar63[9];
                cVar27 = pcVar63[10];
                cVar28 = pcVar63[0xb];
                cVar29 = pcVar63[0xc];
                cVar30 = pcVar63[0xd];
                cVar31 = pcVar63[0xe];
                cVar32 = pcVar63[0xf];
                bVar39 = *pcVar56 + DAT_014e86b0;
                bVar69 = cVar40 + UNK_014e86b1;
                bVar71 = cVar70 + UNK_014e86b2;
                bVar73 = cVar72 + UNK_014e86b3;
                bVar75 = cVar74 + UNK_014e86b4;
                bVar77 = cVar76 + UNK_014e86b5;
                bVar79 = cVar78 + UNK_014e86b6;
                bVar81 = cVar80 + UNK_014e86b7;
                bVar82 = cVar9 + UNK_014e86b8;
                bVar83 = cVar10 + UNK_014e86b9;
                bVar84 = cVar11 + UNK_014e86ba;
                bVar85 = cVar12 + UNK_014e86bb;
                bVar86 = cVar13 + UNK_014e86bc;
                bVar87 = cVar14 + UNK_014e86bd;
                bVar88 = cVar15 + UNK_014e86be;
                bVar89 = cVar16 + UNK_014e86bf;
                bVar90 = cVar17 + DAT_014e86b0;
                bVar91 = cVar18 + UNK_014e86b1;
                bVar92 = cVar19 + UNK_014e86b2;
                bVar93 = cVar20 + UNK_014e86b3;
                bVar94 = cVar21 + UNK_014e86b4;
                bVar95 = cVar22 + UNK_014e86b5;
                bVar96 = cVar23 + UNK_014e86b6;
                bVar97 = cVar24 + UNK_014e86b7;
                bVar98 = cVar25 + UNK_014e86b8;
                bVar99 = cVar26 + UNK_014e86b9;
                bVar100 = cVar27 + UNK_014e86ba;
                bVar101 = cVar28 + UNK_014e86bb;
                bVar102 = cVar29 + UNK_014e86bc;
                bVar103 = cVar30 + UNK_014e86bd;
                bVar104 = cVar31 + UNK_014e86be;
                bVar105 = cVar32 + UNK_014e86bf;
                pcVar63 = pcVar64 + (long)pcVar61;
                *pcVar63 = (-((byte)((DAT_014e4170 < bVar39) * DAT_014e4170 |
                                    (DAT_014e4170 >= bVar39) * bVar39) == bVar39) & DAT_014ead50) +
                           *pcVar56;
                pcVar63[1] = (-((byte)((UNK_014e4171 < bVar69) * UNK_014e4171 |
                                      (UNK_014e4171 >= bVar69) * bVar69) == bVar69) & UNK_014ead51)
                             + cVar40;
                pcVar63[2] = (-((byte)((UNK_014e4172 < bVar71) * UNK_014e4172 |
                                      (UNK_014e4172 >= bVar71) * bVar71) == bVar71) & UNK_014ead52)
                             + cVar70;
                pcVar63[3] = (-((byte)((UNK_014e4173 < bVar73) * UNK_014e4173 |
                                      (UNK_014e4173 >= bVar73) * bVar73) == bVar73) & UNK_014ead53)
                             + cVar72;
                pcVar63[4] = (-((byte)((UNK_014e4174 < bVar75) * UNK_014e4174 |
                                      (UNK_014e4174 >= bVar75) * bVar75) == bVar75) & UNK_014ead54)
                             + cVar74;
                pcVar63[5] = (-((byte)((UNK_014e4175 < bVar77) * UNK_014e4175 |
                                      (UNK_014e4175 >= bVar77) * bVar77) == bVar77) & UNK_014ead55)
                             + cVar76;
                pcVar63[6] = (-((byte)((UNK_014e4176 < bVar79) * UNK_014e4176 |
                                      (UNK_014e4176 >= bVar79) * bVar79) == bVar79) & UNK_014ead56)
                             + cVar78;
                pcVar63[7] = (-((byte)((UNK_014e4177 < bVar81) * UNK_014e4177 |
                                      (UNK_014e4177 >= bVar81) * bVar81) == bVar81) & UNK_014ead57)
                             + cVar80;
                pcVar63[8] = (-((byte)((UNK_014e4178 < bVar82) * UNK_014e4178 |
                                      (UNK_014e4178 >= bVar82) * bVar82) == bVar82) & UNK_014ead58)
                             + cVar9;
                pcVar63[9] = (-((byte)((UNK_014e4179 < bVar83) * UNK_014e4179 |
                                      (UNK_014e4179 >= bVar83) * bVar83) == bVar83) & UNK_014ead59)
                             + cVar10;
                pcVar63[10] = (-((byte)((UNK_014e417a < bVar84) * UNK_014e417a |
                                       (UNK_014e417a >= bVar84) * bVar84) == bVar84) & UNK_014ead5a)
                              + cVar11;
                pcVar63[0xb] = (-((byte)((UNK_014e417b < bVar85) * UNK_014e417b |
                                        (UNK_014e417b >= bVar85) * bVar85) == bVar85) & UNK_014ead5b
                               ) + cVar12;
                pcVar63[0xc] = (-((byte)((UNK_014e417c < bVar86) * UNK_014e417c |
                                        (UNK_014e417c >= bVar86) * bVar86) == bVar86) & UNK_014ead5c
                               ) + cVar13;
                pcVar63[0xd] = (-((byte)((UNK_014e417d < bVar87) * UNK_014e417d |
                                        (UNK_014e417d >= bVar87) * bVar87) == bVar87) & UNK_014ead5d
                               ) + cVar14;
                pcVar63[0xe] = (-((byte)((UNK_014e417e < bVar88) * UNK_014e417e |
                                        (UNK_014e417e >= bVar88) * bVar88) == bVar88) & UNK_014ead5e
                               ) + cVar15;
                pcVar63[0xf] = (-((byte)((UNK_014e417f < bVar89) * UNK_014e417f |
                                        (UNK_014e417f >= bVar89) * bVar89) == bVar89) & UNK_014ead5f
                               ) + cVar16;
                pcVar56 = pcVar64 + 0x10 + (long)pcVar61;
                *pcVar56 = (-((byte)((DAT_014e4170 < bVar90) * DAT_014e4170 |
                                    (DAT_014e4170 >= bVar90) * bVar90) == bVar90) & DAT_014ead50) +
                           cVar17;
                pcVar56[1] = (-((byte)((UNK_014e4171 < bVar91) * UNK_014e4171 |
                                      (UNK_014e4171 >= bVar91) * bVar91) == bVar91) & UNK_014ead51)
                             + cVar18;
                pcVar56[2] = (-((byte)((UNK_014e4172 < bVar92) * UNK_014e4172 |
                                      (UNK_014e4172 >= bVar92) * bVar92) == bVar92) & UNK_014ead52)
                             + cVar19;
                pcVar56[3] = (-((byte)((UNK_014e4173 < bVar93) * UNK_014e4173 |
                                      (UNK_014e4173 >= bVar93) * bVar93) == bVar93) & UNK_014ead53)
                             + cVar20;
                pcVar56[4] = (-((byte)((UNK_014e4174 < bVar94) * UNK_014e4174 |
                                      (UNK_014e4174 >= bVar94) * bVar94) == bVar94) & UNK_014ead54)
                             + cVar21;
                pcVar56[5] = (-((byte)((UNK_014e4175 < bVar95) * UNK_014e4175 |
                                      (UNK_014e4175 >= bVar95) * bVar95) == bVar95) & UNK_014ead55)
                             + cVar22;
                pcVar56[6] = (-((byte)((UNK_014e4176 < bVar96) * UNK_014e4176 |
                                      (UNK_014e4176 >= bVar96) * bVar96) == bVar96) & UNK_014ead56)
                             + cVar23;
                pcVar56[7] = (-((byte)((UNK_014e4177 < bVar97) * UNK_014e4177 |
                                      (UNK_014e4177 >= bVar97) * bVar97) == bVar97) & UNK_014ead57)
                             + cVar24;
                pcVar56[8] = (-((byte)((UNK_014e4178 < bVar98) * UNK_014e4178 |
                                      (UNK_014e4178 >= bVar98) * bVar98) == bVar98) & UNK_014ead58)
                             + cVar25;
                pcVar56[9] = (-((byte)((UNK_014e4179 < bVar99) * UNK_014e4179 |
                                      (UNK_014e4179 >= bVar99) * bVar99) == bVar99) & UNK_014ead59)
                             + cVar26;
                pcVar56[10] = (-((byte)((UNK_014e417a < bVar100) * UNK_014e417a |
                                       (UNK_014e417a >= bVar100) * bVar100) == bVar100) &
                              UNK_014ead5a) + cVar27;
                pcVar56[0xb] = (-((byte)((UNK_014e417b < bVar101) * UNK_014e417b |
                                        (UNK_014e417b >= bVar101) * bVar101) == bVar101) &
                               UNK_014ead5b) + cVar28;
                pcVar56[0xc] = (-((byte)((UNK_014e417c < bVar102) * UNK_014e417c |
                                        (UNK_014e417c >= bVar102) * bVar102) == bVar102) &
                               UNK_014ead5c) + cVar29;
                pcVar56[0xd] = (-((byte)((UNK_014e417d < bVar103) * UNK_014e417d |
                                        (UNK_014e417d >= bVar103) * bVar103) == bVar103) &
                               UNK_014ead5d) + cVar30;
                pcVar56[0xe] = (-((byte)((UNK_014e417e < bVar104) * UNK_014e417e |
                                        (UNK_014e417e >= bVar104) * bVar104) == bVar104) &
                               UNK_014ead5e) + cVar31;
                pcVar56[0xf] = (-((byte)((UNK_014e417f < bVar105) * UNK_014e417f |
                                        (UNK_014e417f >= bVar105) * bVar105) == bVar105) &
                               UNK_014ead5f) + cVar32;
                pcVar61 = pcVar61 + 0x20;
              } while (pcVar60 != pcVar61);
              if (pcVar51 == pcVar60) goto LAB_0d21069d;
              if (((ulong)pcVar51 & 0x18) == 0) {
                pcVar61 = pcVar60 + (long)pcVar64;
                goto LAB_0d210670;
              }
            }
            pcVar56 = (char *)((ulong)pcVar51 & 0xfffffffffffffff8);
            pcVar61 = pcVar64 + (long)pcVar56;
            do {
              uVar47 = *(undefined8 *)(pcVar64 + (long)pcVar60);
              bVar39 = (char)uVar47 + DAT_014e9110;
              cVar70 = (char)((ulong)uVar47 >> 8);
              bVar69 = cVar70 + UNK_014e9111;
              cVar72 = (char)((ulong)uVar47 >> 0x10);
              bVar71 = cVar72 + UNK_014e9112;
              cVar74 = (char)((ulong)uVar47 >> 0x18);
              bVar73 = cVar74 + UNK_014e9113;
              cVar76 = (char)((ulong)uVar47 >> 0x20);
              bVar75 = cVar76 + UNK_014e9114;
              cVar78 = (char)((ulong)uVar47 >> 0x28);
              bVar77 = cVar78 + UNK_014e9115;
              cVar80 = (char)((ulong)uVar47 >> 0x30);
              cVar40 = (char)((ulong)uVar47 >> 0x38);
              bVar79 = cVar80 + UNK_014e9116;
              bVar81 = cVar40 + UNK_014e9117;
              *(ulong *)(pcVar64 + (long)pcVar60) =
                   CONCAT17((~-((byte)((bVar81 < UNK_014e8cb7) * UNK_014e8cb7 |
                                      (bVar81 >= UNK_014e8cb7) * bVar81) == bVar81) & UNK_014ea367)
                            + cVar40,CONCAT16((~-((byte)((bVar79 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                        (bVar79 >= UNK_014e8cb6) * bVar79) == bVar79
                                                 ) & UNK_014ea366) + cVar80,
                                              CONCAT15((~-((byte)((bVar77 < UNK_014e8cb5) *
                                                                  UNK_014e8cb5 |
                                                                 (bVar77 >= UNK_014e8cb5) * bVar77)
                                                          == bVar77) & UNK_014ea365) + cVar78,
                                                       CONCAT14((~-((byte)((bVar75 < UNK_014e8cb4) *
                                                                           UNK_014e8cb4 |
                                                                          (bVar75 >= UNK_014e8cb4) *
                                                                          bVar75) == bVar75) &
                                                                UNK_014ea364) + cVar76,
                                                                CONCAT13((~-((byte)((bVar73 < 
                                                  UNK_014e8cb3) * UNK_014e8cb3 |
                                                  (bVar73 >= UNK_014e8cb3) * bVar73) == bVar73) &
                                                  UNK_014ea363) + cVar74,
                                                  CONCAT12((~-((byte)((bVar71 < UNK_014e8cb2) *
                                                                      UNK_014e8cb2 |
                                                                     (bVar71 >= UNK_014e8cb2) *
                                                                     bVar71) == bVar71) &
                                                           UNK_014ea362) + cVar72,
                                                           CONCAT11((~-((byte)((bVar69 < 
                                                  UNK_014e8cb1) * UNK_014e8cb1 |
                                                  (bVar69 >= UNK_014e8cb1) * bVar69) == bVar69) &
                                                  UNK_014ea361) + cVar70,
                                                  (~-((byte)((bVar39 < DAT_014e8cb0) * DAT_014e8cb0
                                                            | (bVar39 >= DAT_014e8cb0) * bVar39) ==
                                                     bVar39) & DAT_014ea360) + (char)uVar47)))))));
              pcVar60 = pcVar60 + 8;
            } while (pcVar56 != pcVar60);
            if (pcVar51 == pcVar56) goto LAB_0d21069d;
          }
LAB_0d210670:
          do {
            cVar40 = *pcVar61;
            cVar70 = cVar40 + ' ';
            if (0x19 < (byte)(cVar40 + 0xbfU)) {
              cVar70 = cVar40;
            }
            *pcVar61 = cVar70;
            pcVar61 = pcVar61 + 1;
          } while (pcVar61 != pcVar64 + (long)pcVar51);
        }
LAB_0d21069d:
        cVar40 = *(char *)((long)plVar50 + 0x51);
        if (cVar40 == '\x01') {
          if (((ulong)uStack_a08 & 1) == 0) {
            uStack_988 = auStack_9f8._0_8_;
            ppuStack_998 = uStack_a08;
            pcStack_990 = pcStack_a00;
          }
          else {
            func_0x0412e5e0(&ppuStack_998,auStack_9f8._0_8_,pcStack_a00);
          }
          if ((int)plVar50[0xb] != 1) goto LAB_0d211356;
          func_0x0d6bbef0(&uStack_a48,&ppuStack_998,*(undefined1 *)((long)plVar50 + 0x54));
          if (((ulong)ppuStack_998 & 1) != 0) {
            pppuVar52 = &ppuStack_998;
            uVar47 = uStack_988;
LAB_0d210930:
            func_0x0412a280(uVar47,(ulong)*pppuVar52 & 0xfffffffffffffffe);
          }
        }
        else if (cVar40 == '\x02') {
          if (((ulong)uStack_a08 & 1) == 0) {
            uStack_378 = auStack_9f8._0_8_;
            ppuStack_388 = uStack_a08;
            pcStack_380 = pcStack_a00;
          }
          else {
            func_0x0412e5e0(&ppuStack_388,auStack_9f8._0_8_,pcStack_a00);
          }
          if ((int)plVar50[0xb] != 2) goto LAB_0d211351;
          uVar58 = *(undefined4 *)((long)plVar50 + 0x54);
          pppuStack_9b8 = &ppuStack_388;
          lVar43 = func_0x0d6c9580(&pcStack_a40,pppuStack_9b8,&UNK_01563a4f,&pppuStack_9b8,
                                   &ppppuStack_9a0);
          if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
            (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))
                      (&pppuStack_9b8,lVar43 + 0x38);
          }
          *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
          *(undefined4 *)(lVar43 + 0x40) = uVar58;
          *(undefined4 *)(lVar43 + 0x60) = 3;
          if (((ulong)ppuStack_388 & 1) != 0) {
            pppuVar52 = &ppuStack_388;
            uVar47 = uStack_378;
            goto LAB_0d210930;
          }
        }
        else {
          if (cVar40 != '\x03') goto LAB_0d21093c;
          if (((ulong)uStack_a08 & 1) == 0) {
            uStack_398 = auStack_9f8._0_8_;
            ppuStack_3a8 = uStack_a08;
            pcStack_3a0 = pcStack_a00;
          }
          else {
            func_0x0412e5e0(&ppuStack_3a8,auStack_9f8._0_8_,pcStack_a00);
          }
          if ((int)plVar50[0xb] != 3) goto LAB_0d21135b;
          auStack_b8 = ZEXT416(*(uint *)((long)plVar50 + 0x54));
          pppuStack_9b8 = &ppuStack_3a8;
          lVar43 = func_0x0d6c9580(&pcStack_a40,pppuStack_9b8,&UNK_01563a4f,&pppuStack_9b8,
                                   &ppppuStack_9a0);
          if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
            (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))
                      (&pppuStack_9b8,lVar43 + 0x38);
          }
          *(undefined **)(lVar43 + 0x38) = &UNK_0f47e190;
          *(uint *)(lVar43 + 0x40) =
               -(uint)(!NAN((float)auStack_b8._0_4_) && !NAN((float)auStack_b8._0_4_)) &
               auStack_b8._0_4_;
          *(undefined4 *)(lVar43 + 0x60) = 5;
          if (((ulong)ppuStack_3a8 & 1) != 0) {
            pppuVar52 = &ppuStack_3a8;
            uVar47 = uStack_398;
            goto LAB_0d210930;
          }
        }
LAB_0d21093c:
        if (((ulong)uStack_a08 & 1) != 0) {
          func_0x0412a280(auStack_9f8._0_8_,(ulong)uStack_a08 & 0xfffffffffffffffe);
        }
        plVar38 = (long *)plVar50[1];
        plVar67 = plVar50;
        if ((long *)plVar50[1] == (long *)0x0) {
          do {
            plVar50 = (long *)plVar67[2];
            bVar68 = plVar67 != (long *)*plVar50;
            plVar67 = plVar50;
          } while (bVar68);
        }
        else {
          do {
            plVar50 = plVar38;
            plVar38 = (long *)*plVar50;
          } while ((long *)*plVar50 != (long *)0x0);
        }
      } while (plVar50 != plVar48);
    }
    lVar43 = lStack_a10;
    pppuStack_9b8 = _DAT_01d971d8;
    uStack_9b0 = _UNK_01d971e0;
    uStack_9a8 = 0;
    unaff_R13 = &UNK_0f47e0b0;
    uStack_a08 = (ulong **)&UNK_0f47e0b0;
    auStack_9f8._8_8_ = auStack_a38._8_8_;
    auStack_9f8._0_8_ = auStack_a38._0_8_;
    pcVar64 = pcStack_a40;
    pcStack_a00 = auStack_9f8;
    if (auStack_a38._8_8_ != 0) {
      *(undefined1 **)(auStack_a38._0_8_ + 0x10) = auStack_9f8;
      auStack_a38 = (undefined1  [16])0x0;
      pcVar64 = auStack_a38;
      pcStack_a00 = pcStack_a40;
    }
    pcStack_a40 = pcVar64;
    ppppuStack_9a0 = &pppuStack_9b8;
    lVar44 = func_0x0d6c9580(lVar42,ppppuStack_9a0,&UNK_01563a4f,&ppppuStack_9a0,&uStack_9c9);
    if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))
                (&ppppuStack_9a0,lVar44 + 0x38);
    }
    *(undefined **)(lVar44 + 0x38) = &UNK_0f47e0b0;
    *(char **)(lVar44 + 0x40) = pcStack_a00;
    *(undefined8 *)(lVar44 + 0x48) = auStack_9f8._0_8_;
    *(undefined8 *)(lVar44 + 0x50) = auStack_9f8._8_8_;
    if (auStack_9f8._8_8_ == 0) {
      *(long *)(lVar44 + 0x40) = lVar44 + 0x48;
    }
    else {
      *(long *)(auStack_9f8._0_8_ + 0x10) = lVar44 + 0x48;
      auStack_9f8 = (undefined1  [16])0x0;
      auStack_9f8._0_8_ = 0;
      pcStack_a00 = auStack_9f8;
    }
    *(undefined4 *)(lVar44 + 0x60) = 10;
    uStack_a08 = (ulong **)&UNK_0f47e0b0;
    func_0x0d6c9500(&pcStack_a00,auStack_9f8._0_8_);
    if (((ulong)pppuStack_9b8 & 1) != 0) {
      func_0x0412a280(uStack_9a8,(ulong)pppuStack_9b8 & 0xfffffffffffffffe);
    }
    uStack_a48 = (ulong *)&UNK_0f47e0b0;
    func_0x0d6c9500(&pcStack_a40,auStack_a38._0_8_);
    func_0x0d5d3fa0(lVar43 + 0x138,lStack_a18);
    func_0x0bc26190(lVar43 + 0x170,lStack_a18);
    func_0x0bc2c680(lVar43 + 0x260,lStack_a18);
    bStack_2e0 = 0x20;
    uStack_2df = (undefined7)_DAT_014b1ef3;
    uStack_2d8 = (undefined1)((ulong)_DAT_014b1ef3 >> 0x38);
    uStack_2d7 = (undefined7)_UNK_014b1efb;
    uStack_2d0 = (undefined1)((ulong)_UNK_014b1efb >> 0x38);
    uStack_2cf = 0;
    func_0x0ee34300(&uStack_98,lVar43 + 0x2d0);
    uStack_a48 = (ulong *)&bStack_2e0;
    lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))(&uStack_a48,lVar44 + 0x38);
    }
    uVar37 = uStack_88;
    uVar36 = uStack_90;
    uVar47 = uStack_98;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    *(undefined **)(lVar44 + 0x38) = &UNK_0f47e5e8;
    *(undefined8 *)(lVar44 + 0x40) = uVar47;
    *(undefined8 *)(lVar44 + 0x48) = uVar36;
    *(undefined8 *)(lVar44 + 0x50) = uVar37;
    *(undefined4 *)(lVar44 + 0x60) = 8;
    if ((bStack_2e0 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_2ce,CONCAT11(uStack_2cf,uStack_2d0)),
                      CONCAT71(uStack_2df,bStack_2e0) & 0xfffffffffffffffe);
    }
    bStack_960 = 0x16;
    uStack_95f = 0x5372656874654e;
    uStack_958 = 0x656c6163;
    uStack_954 = 0;
    uVar58 = *(undefined4 *)(lVar43 + 0x33c);
    uStack_a48 = (ulong *)&bStack_960;
    lVar43 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar43 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar43 + 0x60) * 8))(&uStack_a48,lVar43 + 0x38);
    }
    *(undefined **)(lVar43 + 0x38) = &UNK_0f47e2e0;
    *(undefined4 *)(lVar43 + 0x40) = uVar58;
    *(undefined4 *)(lVar43 + 0x60) = 3;
    if ((bStack_960 & 1) != 0) {
      func_0x0412a280(uStack_950,CONCAT71(uStack_95f,bStack_960) & 0xfffffffffffffffe);
    }
    func_0x0412d550(0xf5a3810);
    LOCK();
    _DAT_0f5a38e0 = _DAT_0f5a38e0 + 1;
    UNLOCK();
    FUN_0412d610(0xf5a3810);
    plVar48 = _DAT_0f5a38f8;
    pbVar55 = _DAT_0f5a38f0;
    if ((_DAT_0f5a38f0 == (byte *)0x0) || (*_DAT_0f5a38f0 != 1)) goto LAB_0d211379;
    bVar39 = 1;
    if (_DAT_0f5a38f8 != (long *)0x0) {
      LOCK();
      _DAT_0f5a38f8[1] = _DAT_0f5a38f8[1] + 1;
      UNLOCK();
      bVar39 = *pbVar55;
    }
    lVar43 = _DAT_0f5a3900;
    uStack_a48 = (ulong *)0xf5a3810;
    pcStack_a40 = (char *)CONCAT71(pcStack_a40._1_7_,1);
    auStack_a38._8_8_ = plVar48;
    auStack_a38._0_8_ = pbVar55;
    lStack_a28 = _DAT_0f5a3900;
    if (((bVar39 & 1) == 0) &&
       (cVar40 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_0120b832),
       cVar40 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    piVar7 = *(int **)(lVar43 + 0x20);
    for (piVar54 = *(int **)(lVar43 + 0x18); (piVar54 != piVar7 && (*piVar54 != 0xf));
        piVar54 = piVar54 + 0x20) {
    }
    if ((piVar54 == piVar7) || (lVar43 = *(long *)(piVar54 + 2), *(long *)(piVar54 + 2) == 0)) {
      cVar40 = '\0';
      auStack_a38 = (undefined1  [16])0x0;
      if (plVar48 != (long *)0x0) goto LAB_0d210df5;
LAB_0d210e56:
    }
    else {
      do {
        lVar44 = lVar43;
        lVar43 = *(long *)(*(long *)(lVar44 + 8) + 0x1a0);
      } while (lVar43 != 0);
      cVar40 = *(char *)(lVar44 + 0x10);
      auStack_a38 = (undefined1  [16])0x0;
      if (plVar48 == (long *)0x0) goto LAB_0d210e56;
LAB_0d210df5:
      auStack_a38 = (undefined1  [16])0x0;
      LOCK();
      plVar50 = plVar48 + 1;
      lVar43 = *plVar50;
      *plVar50 = *plVar50 + -1;
      UNLOCK();
      if (lVar43 != 0) {
        lStack_a28 = 0;
        goto LAB_0d210e56;
      }
      (**(code **)(*plVar48 + 0x10))(plVar48);
      func_0x0412c2d0(plVar48);
      uVar47 = auStack_a38._8_8_;
      lStack_a28 = 0;
      if ((long *)auStack_a38._8_8_ == (long *)0x0) goto LAB_0d210e56;
      lStack_a28 = 0;
      LOCK();
      plVar48 = (long *)(auStack_a38._8_8_ + 8);
      lVar43 = *plVar48;
      *plVar48 = *plVar48 + -1;
      UNLOCK();
      if (lVar43 != 0) goto LAB_0d210e56;
      (**(code **)(*(long *)auStack_a38._8_8_ + 0x10))(auStack_a38._8_8_);
      func_0x0412c2d0(uVar47);
    }
    if ((char)pcStack_a40 == '\x01') {
      func_0x0eee02f0(uStack_a48);
    }
    lVar43 = lStack_a10;
    if (cVar40 != '\0') {
      puStack_2e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_2e8 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar47 = _UNK_014248e7;
      uStack_2f8 = 0x21;
      uStack_2f0 = 0x1e;
      *(ulong *)((long)puStack_2e8 + 0xe) = CONCAT62(_UNK_014248e1,_DAT_014248df);
      *(undefined8 *)((long)puStack_2e8 + 0x16) = uVar47;
      uVar47 = CONCAT26(_DAT_014248df,_UNK_014248d9);
      *puStack_2e8 = _DAT_014248d1;
      puStack_2e8[1] = uVar47;
      *(undefined1 *)((long)puStack_2e8 + 0x1e) = 0;
      func_0x0d6bbef0(lStack_a18,&uStack_2f8,*(undefined1 *)(lVar43 + 0x4bd));
      if ((uStack_2f8 & 1) != 0) {
        func_0x0412a280(puStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
      }
    }
    bStack_978 = 0x1a;
    uStack_977 = 0x656d6f6942;
    uStack_972 = 0x764f;
    uStack_970 = 0x65;
    uStack_96f = 0x6564697272;
    uStack_96a = 0;
    if ((*(byte *)(lVar43 + 0x540) & 1) == 0) {
      uStack_518 = *(undefined8 *)(lVar43 + 0x550);
      uStack_528 = *(undefined8 *)(lVar43 + 0x540);
      uStack_520 = *(undefined8 *)(lVar43 + 0x548);
    }
    else {
      func_0x0412e5e0(&uStack_528,*(undefined8 *)(lVar43 + 0x550),*(undefined8 *)(lVar43 + 0x548));
    }
    uStack_a48 = (ulong *)&bStack_978;
    lVar42 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,&uStack_a08);
    if ((ulong)*(uint *)(lVar42 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar42 + 0x60) * 8))(&uStack_a48,lVar42 + 0x38);
    }
    uVar37 = uStack_518;
    uVar36 = uStack_520;
    uVar47 = uStack_528;
    uStack_528 = 0;
    uStack_520 = 0;
    uStack_518 = 0;
    *(undefined **)(lVar42 + 0x38) = &UNK_0f47e5e8;
    *(undefined8 *)(lVar42 + 0x40) = uVar47;
    *(undefined8 *)(lVar42 + 0x48) = uVar36;
    *(undefined8 *)(lVar42 + 0x50) = uVar37;
    *(undefined4 *)(lVar42 + 0x60) = 8;
    if ((bStack_978 & 1) != 0) {
      func_0x0412a280(uStack_968,
                      CONCAT26(uStack_972,CONCAT51(uStack_977,bStack_978)) & 0xfffffffffffffffe);
    }
    cVar40 = func_0x0d212930(lVar43);
    if (cVar40 == '\0') goto LAB_0d2111a9;
    bStack_310 = 0x12;
    uStack_30f = 0x615364756f6c43;
    uStack_308 = 0x76;
    uStack_307 = 0x65;
    func_0x0d6bbef0(lStack_a18,&bStack_310,1);
    if ((bStack_310 & 1) != 0) {
      func_0x0412a280(uStack_300,CONCAT71(uStack_30f,bStack_310) & 0xfffffffffffffffe);
    }
    if (*(char *)(lVar43 + 0x430) != '\0') {
      if ((*(byte *)(lVar43 + 0x3b0) & 1) == 0) {
        if (*(byte *)(lVar43 + 0x3b0) >> 1 == 0) goto LAB_0d2111a9;
      }
      else if (*(long *)(lVar43 + 0x3b8) == 0) goto LAB_0d2111a9;
      if ((*(byte *)(lVar43 + 0x3c8) & 1) == 0) {
        if (*(byte *)(lVar43 + 0x3c8) >> 1 == 0) goto LAB_0d2111a9;
      }
      else if (*(long *)(lVar43 + 0x3d0) == 0) goto LAB_0d2111a9;
      if ((*(byte *)(lVar43 + 0x3e0) & 1) == 0) {
        if (*(byte *)(lVar43 + 0x3e0) >> 1 == 0) goto LAB_0d2111a9;
      }
      else if (*(long *)(lVar43 + 1000) == 0) goto LAB_0d2111a9;
      if ((*(byte *)(lVar43 + 0x3f8) & 1) == 0) {
        if (*(byte *)(lVar43 + 0x3f8) >> 1 == 0) goto LAB_0d2111a9;
      }
      else if (*(long *)(lVar43 + 0x400) == 0) goto LAB_0d2111a9;
      if ((*(byte *)(lVar43 + 0x418) & 1) == 0) {
        if (*(byte *)(lVar43 + 0x418) >> 1 == 0) goto LAB_0d2111a9;
      }
      else if (*(long *)(lVar43 + 0x420) == 0) goto LAB_0d2111a9;
      func_0x0d261080(lVar43 + 0x3b0,lStack_a18);
LAB_0d2111a9:
      puStack_318 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_318 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar47 = _UNK_011afdad;
      auStack_328[0] = 0x21;
      auStack_328[1] = 0x1c;
      *(ulong *)((long)puStack_318 + 0xc) = CONCAT44(_UNK_011afda9,_DAT_011afda5);
      *(undefined8 *)((long)puStack_318 + 0x14) = uVar47;
      uVar47 = CONCAT44(_DAT_011afda5,_UNK_011afda1);
      *puStack_318 = _DAT_011afd99;
      puStack_318[1] = uVar47;
      *(undefined1 *)((long)puStack_318 + 0x1c) = 0;
      func_0x0d6bbef0(lStack_a18,auStack_328,*(undefined1 *)(lVar43 + 0x4c2));
      if ((auStack_328[0] & 1) != 0) {
        func_0x0412a280(puStack_318,auStack_328[0] & 0xfffffffffffffffe);
      }
      func_0x04863610(auStack_40);
      return;
    }
LAB_0d21136f:
    func_0x048a88b0();
  }
  else {
    if ((auStack_9f8[8] & 1) == 0) goto LAB_0d20e277;
    if ((DAT_0f71d658 & 1) == 0) {
      uStack_438 = _DAT_0f71d668;
      uStack_448 = CONCAT71(uRam000000000f71d659,DAT_0f71d658);
      uStack_440 = _DAT_0f71d660;
    }
    else {
      func_0x0412e5e0(&uStack_448,_DAT_0f71d668,_DAT_0f71d660);
    }
    if ((auStack_9f8[8] & 1) != 0) {
      func_0x0ee34300(&uStack_78,&uStack_a08);
      uStack_a48 = &uStack_448;
      lVar44 = func_0x0d6c9580(lVar42,uStack_a48,&UNK_01563a4f,&uStack_a48,auStack_9e8);
      if ((ulong)*(uint *)(lVar44 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar44 + 0x60) * 8))
                  (&uStack_a48,lVar44 + 0x38);
      }
      uVar37 = uStack_68;
      uVar36 = uStack_70;
      uVar47 = uStack_78;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      *(undefined **)(lVar44 + 0x38) = &UNK_0f47e5e8;
      *(undefined8 *)(lVar44 + 0x40) = uVar47;
      *(undefined8 *)(lVar44 + 0x48) = uVar36;
      *(undefined8 *)(lVar44 + 0x50) = uVar37;
      *(undefined4 *)(lVar44 + 0x60) = 8;
      if ((uStack_448 & 1) != 0) {
        func_0x0412a280(uStack_438,uStack_448 & 0xfffffffffffffffe);
      }
      goto LAB_0d20e277;
    }
  }
  func_0x048a88b0();
LAB_0d211379:
  uVar47 = func_0x0eee02f0(0xf5a3810);
  uVar47 = func_0x04882e20(uVar47);
  uVar47 = func_0x04882e20(uVar47);
  uVar47 = func_0x04882e20(uVar47);
  uVar47 = func_0x04882e20(uVar47);
  func_0x0ee386e0(unaff_R13);
  func_0x0ee386e0(&uStack_9d8);
  func_0x0ee386e0(auStack_9e8 + 8);
  if ((auStack_a38[8] != '\0') && (((ulong)uStack_a48 & 1) != 0)) {
    func_0x0412a280(auStack_a38._0_8_,(ulong)uStack_a48 & 0xfffffffffffffffe);
  }
  func_0x04863610(auStack_40);
  func_0x0eee2d70(uVar47);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



/* ---- referenced strings ----
 * 0x1219b36  isCreatedInEditor
 * 0x1219b48  serverEditorConnectionPolicy
 * 0x1219b54  ConnectionPolicy
 * 0x1219b65  ConfirmedPlatformLockedContent
 * 0x1219b73  ormLockedContent
 * 0x129ca8c  LimitedWorldOriginY
 * 0x12cf14c  isExportedFromEditor
 * 0x12cf161  LANBroadcastIntent
 * 0x12e9c75  hasBeenLoadedInCreative
 * 0x131d714  texturePacksRequired
 * 0x13bdf7b  allowAnonymousBlockDropsInEditorWorlds
 * 0x13bdf8b  ockDropsInEditorWorlds
 * 0x13d790c  hasLockedResourcePack
 * 0x14248a1  LimitedWorldOriginX
 * 0x14248be  XBLBroadcastIntent
 * 0x147113e  SpawnV1Villagers
 * 0x147114f  MinimumCompatibleClientVersion
 * 0x147115d  bleClientVersion
 * 0x147116e  LimitedWorldOriginZ
 * 0x147118b  isFromLockedTemplate
 * 0x148bffa  educationFeaturesEnabled
 * 0x14c0b28  PlatformBroadcastIntent
 * 0x14c0b40  hasLockedBehaviorPack
 * 0x14dbeb5  MultiplayerGameIntent
 */
