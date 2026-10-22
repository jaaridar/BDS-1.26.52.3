/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe5118a0 (ELF vaddr 0xe4118a0)
 * Label: string:internal::BasicSchema::EnumMapping::View &cereal::BasicFacto
 * Body:  [[0e5118a0, 0e514797] [0e5147a0, 0e5147e1] [0e5147f0, 0e515957] [0e515960, 0e5159a1] [0e5159b0, 0e516220] [0e516230, 0e516437] [0e516440, 0e516481] [0e516490, 0e516fa7] [0e516fb0, 0e516ff1] [0e517000, 0e517b57] [0e517b60, 0e517de7] [0e517df0, 0e517e31] [0e517e40, 0e518947] [0e518950, 0e518991] [0e5189a0, 0e519507] [0e519510, 0e519551] [0e519560, 0e51a0a7] [0e51a0b0, 0e51a337] [0e51a340, 0e51a381] [0e51a390, 0e51ab30] [0e51ab40, 0e51ad37] [0e51ad40, 0e51ad81] [0e51ad90, 0e51c207] [0e51c210, 0e51c251] [0e51c260, 0e51ca70] [0e51ca80, 0e51cc87] [0e51cc90, 0e51ccd1] [0e51cce0, 0e51d7d4] [0e51d7e0, 0e51d821] [0e51d830, 0e51dcd4] [0e51dce0, 0e51dd21] [0e51dd30, 0e51e174] [0e51e180, 0e51e1c1] [0e51e1d0, 0e51fd52]]
 * Ghidra: FUN_0e5118a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e5118a0(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  uint uVar34;
  char cVar35;
  int iVar36;
  int iVar37;
  undefined *puVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  ulong uVar41;
  byte *pbVar42;
  code *pcVar43;
  long *plVar44;
  long lVar45;
  int *piVar46;
  byte *pbVar47;
  byte *pbVar48;
  ulong uVar49;
  ulong uVar50;
  long lVar51;
  uint *puVar52;
  bool bVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auStack_558 [4];
  undefined2 uStack_554;
  undefined1 auStack_552 [2];
  long *plStack_550;
  long *plStack_548;
  undefined8 uStack_540;
  code *pcStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined4 uStack_508;
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [16];
  uint uStack_4d8;
  undefined4 uStack_4d4;
  int iStack_4d0;
  int iStack_4cc;
  code *pcStack_4c8;
  undefined4 uStack_4c0;
  char cStack_4bc;
  undefined1 uStack_4bb;
  undefined1 uStack_4ba;
  undefined1 uStack_4b9;
  char cStack_4b8;
  undefined6 uStack_4b7;
  undefined1 uStack_4b1;
  long lStack_4b0;
  undefined1 auStack_4a8 [16];
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined1 auStack_470 [16];
  undefined4 uStack_460;
  undefined4 uStack_45c;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  undefined2 uStack_440;
  undefined2 uStack_43e;
  uint uStack_43c;
  uint uStack_438;
  uint uStack_434;
  undefined8 uStack_430;
  undefined2 uStack_428;
  undefined1 uStack_424;
  undefined1 uStack_420;
  undefined1 uStack_41c;
  code *pcStack_418;
  code *pcStack_410;
  code *pcStack_408;
  code *pcStack_400;
  code *pcStack_3f8;
  int iStack_3f0;
  uint uStack_3ec;
  undefined4 uStack_3e8;
  uint uStack_3e4;
  char cStack_3e0;
  undefined1 uStack_3df;
  undefined2 uStack_3de;
  undefined2 uStack_3dc;
  undefined2 uStack_3da;
  code *pcStack_3d8;
  code *pcStack_3d0;
  code *pcStack_3c8;
  code *pcStack_3c0;
  code *pcStack_3b8;
  int iStack_3b0;
  uint uStack_3ac;
  undefined4 uStack_3a8;
  uint uStack_3a4;
  char cStack_3a0;
  undefined1 uStack_39f;
  undefined2 uStack_39e;
  undefined2 uStack_39c;
  undefined2 uStack_39a;
  code *pcStack_398;
  code *pcStack_390;
  code *pcStack_388;
  code *pcStack_380;
  code *pcStack_378;
  int iStack_370;
  uint uStack_36c;
  undefined4 uStack_368;
  uint uStack_364;
  char cStack_360;
  undefined1 uStack_35f;
  undefined2 uStack_35e;
  undefined2 uStack_35c;
  undefined2 uStack_35a;
  byte bStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined5 uStack_34f;
  undefined2 uStack_34a;
  undefined1 uStack_348;
  undefined5 uStack_347;
  undefined1 uStack_342;
  undefined1 uStack_341;
  undefined8 uStack_340;
  code *pcStack_338;
  int iStack_330;
  uint uStack_32c;
  undefined4 uStack_328;
  uint uStack_324;
  char cStack_320;
  undefined1 uStack_31f;
  undefined2 uStack_31e;
  undefined2 uStack_31c;
  undefined2 uStack_31a;
  byte bStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined5 uStack_30f;
  undefined2 uStack_30a;
  undefined1 uStack_308;
  undefined5 uStack_307;
  undefined1 uStack_302;
  undefined1 uStack_301;
  code *pcStack_300;
  code *pcStack_2f8;
  int iStack_2f0;
  uint uStack_2ec;
  undefined4 uStack_2e8;
  uint uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  code *pcStack_2c8;
  code *pcStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  code *pcStack_298;
  code *pcStack_290;
  code *pcStack_288;
  code *pcStack_280;
  code *pcStack_278;
  int iStack_270;
  uint uStack_26c;
  undefined4 uStack_268;
  uint uStack_264;
  undefined4 uStack_260;
  byte bStack_250;
  undefined1 uStack_24f;
  undefined1 uStack_24e;
  undefined5 uStack_24d;
  undefined1 uStack_248;
  undefined5 uStack_247;
  undefined2 uStack_242;
  undefined1 uStack_240;
  undefined5 uStack_23f;
  undefined1 uStack_23a;
  undefined1 uStack_239;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  byte bStack_218;
  undefined1 uStack_217;
  undefined1 uStack_216;
  undefined5 uStack_215;
  undefined1 uStack_210;
  undefined5 uStack_20f;
  undefined2 uStack_20a;
  undefined1 uStack_208;
  undefined5 uStack_207;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 *puStack_1d8;
  byte bStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  long lStack_198;
  code *pcStack_190;
  code *pcStack_188;
  code *pcStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_158;
  code *pcStack_150;
  code *pcStack_148;
  code *pcStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_68;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_0f755538 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755538), iVar36 != 0)) {
    func_0x0e530f80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7554b8,0xf53dab8);
    func_0x0410844d(&DAT_0f755538);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7554b8 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e511910;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f7554b8 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e511910:
    puVar38 = &DAT_0f7554b8;
    if (iRam000000000f755518 != -0x2b3da790) goto LAB_0e511968;
LAB_0e51193b:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e511968;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    puVar38 = (undefined *)(lVar51 + 9);
    if (bVar53) {
      puVar38 = *(undefined **)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e51193b;
LAB_0e511968:
    puVar38 = &UNK_011db16a;
    uVar49 = 9;
  }
  func_0x0e5313c0(&pcStack_3d8,param_1,puVar38,uVar49);
  uStack_3a4 = uStack_3a4 & 0xffffff00;
  cStack_3a0 = '\0';
  if ((char)uStack_3a8 == '\0') {
    bStack_250 = 0x2a;
    uStack_24f = (undefined1)_DAT_0145a6ee;
    uStack_24e = (undefined1)((ulong)_DAT_0145a6ee >> 8);
    uStack_24d = (undefined5)((ulong)_DAT_0145a6ee >> 0x10);
    uStack_248 = (undefined1)((ulong)_DAT_0145a6ee >> 0x38);
    uStack_247 = (undefined5)_UNK_0145a6f6;
    uStack_242 = 0x7961;
    uStack_240 = 0x73;
    uStack_23f = 0x657572745f;
    uStack_23a = 0;
    func_0x0e534c40(auStack_4e8,&uStack_24f,0x15);
    bVar53 = (uStack_4c0 & 1) == 0;
    lVar51 = (long)&uStack_4c0 + 1;
    lVar45 = lStack_4b0;
    if (bVar53) {
      lVar45 = lVar51;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_3ac = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_3ac = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_3ac = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_3ac = ((int)*(char *)(lVar45 + 3 + uVar50) ^
                       ((int)*(char *)(lVar45 + 2 + uVar50) ^
                       ((int)*(char *)(lVar45 + 1 + uVar50) ^
                       ((int)*(char *)(lVar45 + uVar50) ^ uStack_3ac) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_3ac = ((int)*(char *)(lVar45 + uVar50 + uVar49) ^ uStack_3ac) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_3b0 = 2;
    if (DAT_0f755558 == '\0') {
      iVar36 = FUN_04108328(&DAT_0f755558);
      if (iVar36 != 0) {
        func_0x0e531090();
        func_0x0410844d(&DAT_0f755558);
      }
    }
    auStack_558 = (undefined1  [4])uStack_3ac;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e535350;
    puStack_510 = &UNK_0e535360;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_3d0,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar45 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar45 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_2c8 = pcStack_3c0;
    pcStack_2c0 = pcStack_3b8;
    uStack_2d8 = pcStack_3d0;
    pcStack_2d0 = pcStack_3c8;
    func_0x0e535020(auStack_558,&uStack_2d8,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e511c2f:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e511c2f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18) = *(uint *)((long)plStack_548 + 0x18) | 0x90000;
      }
    }
    if (cStack_3a0 == '\0') {
      func_0x0e5353b0(auStack_558,&pcStack_3d8);
    }
    uVar34 = uStack_3a4;
    pcVar43 = pcStack_3d8;
    if ((DAT_0f755538 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755538), iVar36 != 0)) {
      func_0x0e530f80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7554b8,0xf53dab8);
      func_0x0410844d(&DAT_0f755538);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7554b8 + 4)) * 8);
    do {
      lVar45 = *plVar44;
      if (lVar45 == -1) goto LAB_0e511cc0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar45 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar45 * 0x18) !=
             *(uint *)(_DAT_0f7554b8 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e511cc0:
      puVar38 = &DAT_0f7554b8;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014deddf),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar7[0xf] = 0;
    auVar7._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar7 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_3ac,&uStack_3ac,auStack_558);
    pcStack_298 = pcStack_3d8;
    pcStack_290 = pcStack_3d0;
    pcStack_288 = pcStack_3c8;
    pcStack_280 = pcStack_3c0;
    pcStack_278 = pcStack_3b8;
    iStack_270 = iStack_3b0;
    uStack_26c = uStack_3ac;
    uStack_268 = uStack_3a8;
    uStack_264 = uStack_3a4;
    uStack_260 = (undefined4)
                 (CONCAT26(uStack_39e,CONCAT15(uStack_39f,CONCAT14(cStack_3a0,uStack_3a4))) >> 0x20)
    ;
    func_0x048b0bc0(auStack_4e8);
    bStack_218 = 0x2a;
    uStack_217 = (undefined1)_DAT_0148f9b4;
    uStack_216 = (undefined1)((ulong)_DAT_0148f9b4 >> 8);
    uStack_215 = (undefined5)((ulong)_DAT_0148f9b4 >> 0x10);
    uStack_210 = (undefined1)((ulong)_DAT_0148f9b4 >> 0x38);
    uStack_20f = (undefined5)_UNK_0148f9bc;
    uStack_20a = 0x6b63;
    uStack_208 = 0x5f;
    uStack_207 = 0x686374616d;
    uStack_202 = 0;
    func_0x0e534c40(auStack_4e8,&uStack_217,0x15);
    bVar53 = (uStack_4c0 & 1) == 0;
    lVar45 = lStack_4b0;
    if (bVar53) {
      lVar45 = lVar51;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_26c = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_26c = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_26c = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_26c = ((int)*(char *)(lVar45 + 3 + uVar50) ^
                       ((int)*(char *)(lVar45 + 2 + uVar50) ^
                       ((int)*(char *)(lVar45 + 1 + uVar50) ^
                       ((int)*(char *)(lVar45 + uVar50) ^ uStack_26c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_26c = ((int)*(char *)(lVar45 + uVar50 + uVar49) ^ uStack_26c) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_270 = 2;
    if ((DAT_0f755558 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755558), iVar36 != 0)) {
      func_0x0e531090();
      func_0x0410844d(&DAT_0f755558);
    }
    auStack_558 = (undefined1  [4])uStack_26c;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e535570;
    puStack_510 = &UNK_0e535580;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_290,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar45 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar45 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_2c8 = pcStack_280;
    pcStack_2c0 = pcStack_278;
    uStack_2d8 = pcStack_290;
    pcStack_2d0 = pcStack_288;
    func_0x0e535020(auStack_558,&uStack_2d8,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e51206f:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e51206f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18) = *(uint *)((long)plStack_548 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_260 == '\0') {
      func_0x0e5353b0(auStack_558,&pcStack_298);
    }
    uVar34 = uStack_264;
    pcVar43 = pcStack_298;
    if ((DAT_0f755538 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755538), iVar36 != 0)) {
      func_0x0e530f80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7554b8,0xf53dab8);
      func_0x0410844d(&DAT_0f755538);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7554b8 + 4)) * 8);
    do {
      lVar45 = *plVar44;
      if (lVar45 == -1) goto LAB_0e512100;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar45 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar45 * 0x18) !=
             *(uint *)(_DAT_0f7554b8 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e512100:
      puVar38 = &DAT_0f7554b8;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014deddf),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar8[0xf] = 0;
    auVar8._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar8 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_26c,&uStack_26c,auStack_558);
    bStack_318 = (byte)pcStack_298;
    uStack_317 = (undefined7)((ulong)pcStack_298 >> 8);
    uStack_310 = SUB81(pcStack_290,0);
    uStack_30f = (undefined5)((ulong)pcStack_290 >> 8);
    uStack_30a = (undefined2)((ulong)pcStack_290 >> 0x30);
    uStack_308 = SUB81(pcStack_288,0);
    uStack_307 = (undefined5)((ulong)pcStack_288 >> 8);
    uStack_302 = (undefined1)((ulong)pcStack_288 >> 0x30);
    uStack_301 = (undefined1)((ulong)pcStack_288 >> 0x38);
    pcStack_300 = pcStack_280;
    pcStack_2f8 = pcStack_278;
    iStack_2f0 = iStack_270;
    uStack_2ec = uStack_26c;
    uStack_2e8 = uStack_268;
    uStack_2e4 = uStack_264;
    uStack_2e0 = uStack_260;
    func_0x048b0bc0(auStack_4e8);
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar5 = _UNK_0135686c;
    *(ulong *)((long)puVar39 + 0xc) = CONCAT44(_UNK_01356868,_DAT_01356864);
    *(undefined8 *)((long)puVar39 + 0x14) = uVar5;
    uVar5 = CONCAT44(_DAT_01356864,_UNK_01356860);
    *puVar39 = _DAT_01356858;
    puVar39[1] = uVar5;
    *(undefined1 *)((long)puVar39 + 0x1c) = 0;
    func_0x0e534c40(auStack_4e8,puVar39,0x1c);
    bVar53 = (uStack_4c0 & 1) == 0;
    lVar45 = lStack_4b0;
    if (bVar53) {
      lVar45 = lVar51;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_2ec = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_2ec = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_2ec = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_2ec = ((int)*(char *)(lVar45 + 3 + uVar50) ^
                       ((int)*(char *)(lVar45 + 2 + uVar50) ^
                       ((int)*(char *)(lVar45 + 1 + uVar50) ^
                       ((int)*(char *)(lVar45 + uVar50) ^ uStack_2ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_2ec = ((int)*(char *)(lVar45 + uVar50 + uVar49) ^ uStack_2ec) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_2f0 = 2;
    puStack_1d8 = puVar39;
    if ((DAT_0f755558 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755558), iVar36 != 0)) {
      func_0x0e531090();
      func_0x0410844d(&DAT_0f755558);
    }
    auStack_558 = (undefined1  [4])uStack_2ec;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e5355d0;
    puStack_510 = &UNK_0e5355e0;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&uStack_310,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar45 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar45 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    uStack_2d8 = (code *)CONCAT26(uStack_30a,CONCAT51(uStack_30f,uStack_310));
    pcStack_2d0 = (code *)CONCAT17(uStack_301,CONCAT16(uStack_302,CONCAT51(uStack_307,uStack_308)));
    pcStack_2c8 = pcStack_300;
    pcStack_2c0 = pcStack_2f8;
    func_0x0e535020(auStack_558,&uStack_2d8,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e5124af:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e5124af;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18) = *(uint *)((long)plStack_548 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_2e0 == '\0') {
      func_0x0e5353b0(auStack_558,&bStack_318);
    }
    uVar34 = uStack_2e4;
    lVar45 = CONCAT71(uStack_317,bStack_318);
    if ((DAT_0f755538 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755538), iVar36 != 0)) {
      func_0x0e530f80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7554b8,0xf53dab8);
      func_0x0410844d(&DAT_0f755538);
    }
    plVar44 = (long *)(*(long *)(lVar45 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar45 + 0x20) - *(long *)(lVar45 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7554b8 + 4)) * 8);
    do {
      lVar4 = *plVar44;
      if (lVar4 == -1) goto LAB_0e512540;
      plVar44 = (long *)(*(long *)(lVar45 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar45 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f7554b8 + 4))
    ;
    if (plVar44 == *(long **)(lVar45 + 0x38)) {
LAB_0e512540:
      puVar38 = &DAT_0f7554b8;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014deddf),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar9[0xf] = 0;
    auVar9._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar9 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_2ec,&uStack_2ec,auStack_558);
    bStack_358 = bStack_318;
    uStack_357 = uStack_317;
    uStack_350 = uStack_310;
    uStack_34f = uStack_30f;
    uStack_34a = uStack_30a;
    uStack_348 = uStack_308;
    uStack_347 = uStack_307;
    uStack_342 = uStack_302;
    uStack_341 = uStack_301;
    uStack_340 = pcStack_300;
    pcStack_338 = pcStack_2f8;
    iStack_330 = iStack_2f0;
    uStack_32c = uStack_2ec;
    uStack_328 = uStack_2e8;
    uStack_324 = uStack_2e4;
    cStack_320 = (char)uStack_2e0;
    uStack_31f = (undefined1)((uint)uStack_2e0 >> 8);
    uStack_31e = (undefined2)((uint)uStack_2e0 >> 0x10);
    func_0x048b0bc0(auStack_4e8);
    bStack_1d0 = 0x26;
    uStack_1cf = (undefined7)_DAT_012b886b;
    uStack_1c8 = (undefined1)((ulong)_DAT_012b886b >> 0x38);
    uStack_1c7 = (undefined7)_UNK_012b8873;
    uStack_1c0 = 0x68637461;
    uStack_1bc = uStack_1bc & 0xffffff00;
    func_0x0e534c40(auStack_4e8,&uStack_1cf,0x13);
    bVar53 = (uStack_4c0 & 1) == 0;
    lVar45 = lStack_4b0;
    if (bVar53) {
      lVar45 = lVar51;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_32c = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_32c = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_32c = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_32c = ((int)*(char *)(lVar45 + 3 + uVar50) ^
                       ((int)*(char *)(lVar45 + 2 + uVar50) ^
                       ((int)*(char *)(lVar45 + 1 + uVar50) ^
                       ((int)*(char *)(lVar45 + uVar50) ^ uStack_32c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_32c = ((int)*(char *)(lVar45 + uVar50 + uVar49) ^ uStack_32c) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_330 = 2;
    if ((DAT_0f755558 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755558), iVar36 != 0)) {
      func_0x0e531090();
      func_0x0410844d(&DAT_0f755558);
    }
    auStack_558 = (undefined1  [4])uStack_32c;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e535630;
    puStack_510 = &UNK_0e535640;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&uStack_350,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar45 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar45 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    uStack_2d8 = (code *)CONCAT26(uStack_34a,CONCAT51(uStack_34f,uStack_350));
    pcStack_2d0 = (code *)CONCAT17(uStack_341,CONCAT16(uStack_342,CONCAT51(uStack_347,uStack_348)));
    pcStack_2c8 = uStack_340;
    pcStack_2c0 = pcStack_338;
    func_0x0e535020(auStack_558,&uStack_2d8,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e5128ef:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e5128ef;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18) = *(uint *)((long)plStack_548 + 0x18) | 0x90000;
      }
    }
    if (cStack_320 == '\0') {
      func_0x0e5353b0(auStack_558,&bStack_358);
    }
    uVar34 = uStack_324;
    lVar45 = CONCAT71(uStack_357,bStack_358);
    if ((DAT_0f755538 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755538), iVar36 != 0)) {
      func_0x0e530f80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7554b8,0xf53dab8);
      func_0x0410844d(&DAT_0f755538);
    }
    plVar44 = (long *)(*(long *)(lVar45 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar45 + 0x20) - *(long *)(lVar45 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7554b8 + 4)) * 8);
    do {
      lVar4 = *plVar44;
      if (lVar4 == -1) goto LAB_0e512980;
      plVar44 = (long *)(*(long *)(lVar45 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar45 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f7554b8 + 4))
    ;
    if (plVar44 == *(long **)(lVar45 + 0x38)) {
LAB_0e512980:
      puVar38 = &DAT_0f7554b8;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014deddf),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar10[0xf] = 0;
    auVar10._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar10 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_32c,&uStack_32c,auStack_558);
    pcStack_398 = (code *)CONCAT71(uStack_357,bStack_358);
    pcStack_390 = (code *)CONCAT26(uStack_34a,CONCAT51(uStack_34f,uStack_350));
    pcStack_388 = (code *)CONCAT17(uStack_341,CONCAT16(uStack_342,CONCAT51(uStack_347,uStack_348)));
    pcStack_380 = uStack_340;
    pcStack_378 = pcStack_338;
    iStack_370 = iStack_330;
    uStack_36c = uStack_32c;
    uStack_368 = uStack_328;
    uStack_364 = uStack_324;
    cStack_360 = cStack_320;
    uStack_35f = uStack_31f;
    uStack_35e = uStack_31e;
    func_0x048b0bc0(auStack_4e8);
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar5 = _UNK_0133b90d;
    *(ulong *)((long)puVar39 + 10) = CONCAT26(_UNK_0133b90b,_DAT_0133b905);
    *(undefined8 *)((long)puVar39 + 0x12) = uVar5;
    uVar5 = CONCAT62(_DAT_0133b905,_UNK_0133b903);
    *puVar39 = _DAT_0133b8fb;
    puVar39[1] = uVar5;
    *(undefined1 *)((long)puVar39 + 0x1a) = 0;
    func_0x0e534c40(auStack_4e8,puVar39,0x1a);
    bVar53 = (uStack_4c0 & 1) == 0;
    lVar45 = lStack_4b0;
    if (bVar53) {
      lVar45 = lVar51;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_36c = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_36c = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_36c = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_36c = ((int)*(char *)(lVar45 + 3 + uVar50) ^
                       ((int)*(char *)(lVar45 + 2 + uVar50) ^
                       ((int)*(char *)(lVar45 + 1 + uVar50) ^
                       ((int)*(char *)(lVar45 + uVar50) ^ uStack_36c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_36c = ((int)*(char *)(lVar45 + uVar50 + uVar49) ^ uStack_36c) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_370 = 2;
    if ((DAT_0f755558 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755558), iVar36 != 0)) {
      func_0x0e531090();
      func_0x0410844d(&DAT_0f755558);
    }
    auStack_558 = (undefined1  [4])uStack_36c;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e535690;
    puStack_510 = &UNK_0e5356a0;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_390,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar45 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar45 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_2c8 = pcStack_380;
    pcStack_2c0 = pcStack_378;
    uStack_2d8 = pcStack_390;
    pcStack_2d0 = pcStack_388;
    func_0x0e535020(auStack_558,&uStack_2d8,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e512d3f:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e512d3f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18) = *(uint *)((long)plStack_548 + 0x18) | 0x90000;
      }
    }
    if (cStack_360 == '\0') {
      func_0x0e5353b0(auStack_558,&pcStack_398);
    }
    uVar34 = uStack_364;
    pcVar43 = pcStack_398;
    if ((DAT_0f755538 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755538), iVar36 != 0)) {
      func_0x0e530f80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7554b8,0xf53dab8);
      func_0x0410844d(&DAT_0f755538);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7554b8 + 4)) * 8);
    do {
      lVar45 = *plVar44;
      if (lVar45 == -1) goto LAB_0e512dd0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar45 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar45 * 0x18) !=
             *(uint *)(_DAT_0f7554b8 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e512dd0:
      puVar38 = &DAT_0f7554b8;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014deddf),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar11[0xf] = 0;
    auVar11._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar11 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_36c,&uStack_36c,auStack_558);
    pcStack_418 = pcStack_398;
    pcStack_410 = pcStack_390;
    pcStack_408 = pcStack_388;
    pcStack_400 = pcStack_380;
    pcStack_3f8 = pcStack_378;
    iStack_3f0 = iStack_370;
    uStack_3ec = uStack_36c;
    uStack_3e8 = uStack_368;
    uStack_3e4 = uStack_364;
    cStack_3e0 = cStack_360;
    uStack_3df = uStack_35f;
    uStack_3de = uStack_35e;
    func_0x048b0bc0(auStack_4e8);
    puVar40 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar40 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar5 = _UNK_01202b6f;
    puVar40[2] = _DAT_01202b67;
    puVar40[3] = uVar5;
    uVar5 = _UNK_01202b5f;
    *puVar40 = _DAT_01202b57;
    puVar40[1] = uVar5;
    *(undefined2 *)(puVar40 + 4) = 0x68;
    func_0x0e534c40(auStack_4e8,puVar40,0x21);
    bVar53 = (uStack_4c0 & 1) != 0;
    if (bVar53) {
      lVar51 = lStack_4b0;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_3ec = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_3ec = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_3ec = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_3ec = ((int)*(char *)(lVar51 + 3 + uVar50) ^
                       ((int)*(char *)(lVar51 + 2 + uVar50) ^
                       ((int)*(char *)(lVar51 + 1 + uVar50) ^
                       ((int)*(char *)(lVar51 + uVar50) ^ uStack_3ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_3ec = ((int)*(char *)(lVar51 + uVar50 + uVar49) ^ uStack_3ec) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_3f0 = 2;
    if ((DAT_0f755558 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755558), iVar36 != 0)) {
      func_0x0e531090();
      func_0x0410844d(&DAT_0f755558);
    }
    auStack_558 = (undefined1  [4])uStack_3ec;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e5356f0;
    puStack_510 = &UNK_0e535700;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_410,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_2c8 = pcStack_400;
    pcStack_2c0 = pcStack_3f8;
    uStack_2d8 = pcStack_410;
    pcStack_2d0 = pcStack_408;
    func_0x0e535020(auStack_558,&uStack_2d8,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(plStack_548[0xf] + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e51317f:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(plStack_548[0xf] + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e51317f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)(plStack_548 + 3) = *(uint *)(plStack_548 + 3) | 0x90000;
      }
    }
    if (cStack_3e0 == '\0') {
      func_0x0e5353b0(auStack_558,&pcStack_418);
    }
    uVar34 = uStack_3e4;
    pcVar43 = pcStack_418;
    if ((DAT_0f755538 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755538), iVar36 != 0)) {
      func_0x0e530f80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7554b8,0xf53dab8);
      func_0x0410844d(&DAT_0f755538);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7554b8 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e513210;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f7554b8 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e513210:
      puVar38 = &DAT_0f7554b8;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014deddf),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar12[0xf] = 0;
    auVar12._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar12 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_3ec,&uStack_3ec,auStack_558);
    func_0x048b0bc0(auStack_4e8);
    func_0x0412a280(puVar40,0x28);
    func_0x0412a280(puVar39,0x20);
    if ((bStack_1d0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1bc,uStack_1c0),
                      CONCAT71(uStack_1cf,bStack_1d0) & 0xfffffffffffffffe);
    }
    func_0x0412a280(puStack_1d8,0x20);
    if ((bStack_218 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_201,CONCAT16(uStack_202,CONCAT51(uStack_207,uStack_208))),
                      CONCAT53(uStack_215,CONCAT12(uStack_216,CONCAT11(uStack_217,bStack_218))) &
                      0xfffffffffffffffe);
    }
    if ((bStack_250 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_239,CONCAT16(uStack_23a,CONCAT51(uStack_23f,uStack_240))),
                      CONCAT53(uStack_24d,CONCAT12(uStack_24e,CONCAT11(uStack_24f,bStack_250))) &
                      0xfffffffffffffffe);
    }
  }
  if ((DAT_0f7555f0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7555f0), iVar36 != 0)) {
    func_0x0e535810();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755570,0xf53dab8);
    func_0x0410844d(&DAT_0f7555f0);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755570 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e5133a0;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f755570 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e5133a0:
    puVar38 = &DAT_0f755570;
    if (iRam000000000f7555d0 != -0x2b3da790) goto LAB_0e5133f8;
LAB_0e5133cb:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e5133f8;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    puVar38 = (undefined *)(lVar51 + 9);
    if (bVar53) {
      puVar38 = *(undefined **)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e5133cb;
LAB_0e5133f8:
    puVar38 = &UNK_01442d8c;
    uVar49 = 7;
  }
  func_0x0e535c50(&pcStack_3d8,param_1,puVar38,uVar49);
  uStack_3a4 = uStack_3a4 & 0xffffff00;
  cStack_3a0 = '\0';
  if ((char)uStack_3a8 == '\0') {
    bStack_358 = 0x2a;
    uStack_357 = (undefined7)_DAT_0145a6ee;
    uStack_350 = (undefined1)((ulong)_DAT_0145a6ee >> 0x38);
    uStack_34f = (undefined5)_UNK_0145a6f6;
    uStack_34a = 0x7961;
    uStack_348 = 0x73;
    uStack_347 = 0x657572745f;
    uStack_342 = 0;
    func_0x0e5394d0(auStack_4e8,&uStack_357,0x15);
    bVar53 = (uStack_4c0 & 1) == 0;
    lVar51 = lStack_4b0;
    if (bVar53) {
      lVar51 = (long)&uStack_4c0 + 1;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_3ac = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_3ac = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_3ac = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_3ac = ((int)*(char *)(lVar51 + 3 + uVar50) ^
                       ((int)*(char *)(lVar51 + 2 + uVar50) ^
                       ((int)*(char *)(lVar51 + 1 + uVar50) ^
                       ((int)*(char *)(lVar51 + uVar50) ^ uStack_3ac) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_3ac = ((int)*(char *)(lVar51 + uVar50 + uVar49) ^ uStack_3ac) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_3b0 = 2;
    if ((DAT_0f755610 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755610), iVar36 != 0)) {
      func_0x0e535920();
      func_0x0410844d(&DAT_0f755610);
    }
    auStack_558 = (undefined1  [4])uStack_3ac;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e539b20;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e535750;
    puStack_518 = &UNK_0e539be0;
    puStack_510 = &UNK_0e539bf0;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_3d0,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_388 = pcStack_3c0;
    pcStack_380 = pcStack_3b8;
    pcStack_398 = pcStack_3d0;
    pcStack_390 = pcStack_3c8;
    func_0x0e5398b0(auStack_558,&pcStack_398,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e5136bf:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e5136bf;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18) = *(uint *)((long)plStack_548 + 0x18) | 0x90000;
      }
    }
    if (cStack_3a0 == '\0') {
      FUN_0e539c40(auStack_558,&pcStack_3d8);
    }
    uVar34 = uStack_3a4;
    pcVar43 = pcStack_3d8;
    if ((DAT_0f7555f0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7555f0), iVar36 != 0)) {
      func_0x0e535810();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755570,0xf53dab8);
      func_0x0410844d(&DAT_0f7555f0);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755570 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e513750;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755570 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e513750:
      puVar38 = &DAT_0f755570;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0129f3a4),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar13[0xf] = 0;
    auVar13._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar13 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_3ac,&uStack_3ac,auStack_558);
    pcStack_418 = pcStack_3d8;
    pcStack_410 = pcStack_3d0;
    pcStack_408 = pcStack_3c8;
    pcStack_400 = pcStack_3c0;
    pcStack_3f8 = pcStack_3b8;
    iStack_3f0 = iStack_3b0;
    uStack_3ec = uStack_3ac;
    uStack_3e8 = uStack_3a8;
    uStack_3e4 = uStack_3a4;
    cStack_3e0 = cStack_3a0;
    uStack_3df = uStack_39f;
    uStack_3de = uStack_39e;
    func_0x048b0bc0(auStack_4e8);
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar5 = _UNK_014c39a4;
    puVar39[2] = _DAT_014c399c;
    puVar39[3] = uVar5;
    uVar5 = _UNK_014c3994;
    *puVar39 = _DAT_014c398c;
    puVar39[1] = uVar5;
    *(undefined2 *)(puVar39 + 4) = 0x73;
    func_0x0e5394d0(auStack_4e8,puVar39,0x21);
    bVar53 = (uStack_4c0 & 1) != 0;
    lVar51 = (long)&uStack_4c0 + 1;
    if (bVar53) {
      lVar51 = lStack_4b0;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_3ec = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_3ec = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_3ec = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_3ec = ((int)*(char *)(lVar51 + 3 + uVar50) ^
                       ((int)*(char *)(lVar51 + 2 + uVar50) ^
                       ((int)*(char *)(lVar51 + 1 + uVar50) ^
                       ((int)*(char *)(lVar51 + uVar50) ^ uStack_3ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_3ec = ((int)*(char *)(lVar51 + uVar50 + uVar49) ^ uStack_3ec) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_3f0 = 2;
    if ((DAT_0f755610 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755610), iVar36 != 0)) {
      func_0x0e535920();
      func_0x0410844d(&DAT_0f755610);
    }
    auStack_558 = (undefined1  [4])uStack_3ec;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e539b20;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e535750;
    puStack_518 = &UNK_0e539e00;
    puStack_510 = &UNK_0e539e10;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_410,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_388 = pcStack_400;
    pcStack_380 = pcStack_3f8;
    pcStack_398 = pcStack_410;
    pcStack_390 = pcStack_408;
    func_0x0e5398b0(auStack_558,&pcStack_398,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(plStack_548[0xf] + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e513aff:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(plStack_548[0xf] + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e513aff;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)(plStack_548 + 3) = *(uint *)(plStack_548 + 3) | 0x90000;
      }
    }
    if (cStack_3e0 == '\0') {
      FUN_0e539c40(auStack_558,&pcStack_418);
    }
    uVar34 = uStack_3e4;
    pcVar43 = pcStack_418;
    if ((DAT_0f7555f0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7555f0), iVar36 != 0)) {
      func_0x0e535810();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755570,0xf53dab8);
      func_0x0410844d(&DAT_0f7555f0);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755570 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e513b91;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755570 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e513b91:
      puVar38 = &DAT_0f755570;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0129f3a4),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar14[0xf] = 0;
    auVar14._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar14 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_3ec,&uStack_3ec,auStack_558);
    func_0x048b0bc0(auStack_4e8);
    func_0x0412a280(puVar39,0x28);
    if ((bStack_358 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_341,CONCAT16(uStack_342,CONCAT51(uStack_347,uStack_348))),
                      CONCAT71(uStack_357,bStack_358) & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f7556a8 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7556a8), iVar36 != 0)) {
    func_0x0e539f20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755628,0xf53dab8);
    func_0x0410844d(&DAT_0f7556a8);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755628 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e513cc0;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f755628 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e513cc0:
    puVar38 = &DAT_0f755628;
    if (iRam000000000f755688 != -0x2b3da790) goto LAB_0e513d18;
LAB_0e513ceb:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e513d18;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    puVar38 = (undefined *)(lVar51 + 9);
    if (bVar53) {
      puVar38 = *(undefined **)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e513ceb;
LAB_0e513d18:
    puVar38 = &UNK_014c39ae;
    uVar49 = 0x17;
  }
  func_0x0e53a360(&pcStack_3d8,param_1,puVar38,uVar49);
  uStack_3a4 = uStack_3a4 & 0xffffff00;
  cStack_3a0 = '\0';
  if ((char)uStack_3a8 == '\0') {
    bStack_358 = 0x2a;
    uStack_357 = (undefined7)_DAT_012d2855;
    uStack_350 = (undefined1)((ulong)_DAT_012d2855 >> 0x38);
    uStack_34f = (undefined5)_UNK_012d285d;
    uStack_34a = 0x7473;
    uStack_348 = 0x68;
    uStack_347 = 0x6867756f72;
    uStack_342 = 0;
    func_0x0e53dbe0(auStack_4e8,&uStack_357);
    bVar53 = (uStack_4c0 & 1) == 0;
    lVar51 = lStack_4b0;
    if (bVar53) {
      lVar51 = (long)&uStack_4c0 + 1;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_3ac = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_3ac = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_3ac = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_3ac = ((int)*(char *)(lVar51 + 3 + uVar50) ^
                       ((int)*(char *)(lVar51 + 2 + uVar50) ^
                       ((int)*(char *)(lVar51 + 1 + uVar50) ^
                       ((int)*(char *)(lVar51 + uVar50) ^ uStack_3ac) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_3ac = ((int)*(char *)(lVar51 + uVar50 + uVar49) ^ uStack_3ac) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_3b0 = 2;
    if ((DAT_0f7556c8 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7556c8), iVar36 != 0)) {
      func_0x0e53a030();
      func_0x0410844d(&DAT_0f7556c8);
    }
    auStack_558 = (undefined1  [4])uStack_3ac;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e53e3f0;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e539e60;
    puStack_518 = &UNK_0e53e4b0;
    puStack_510 = &UNK_0e53e4c0;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_3d0,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_408 = pcStack_3c0;
    pcStack_400 = pcStack_3b8;
    pcStack_418 = pcStack_3d0;
    pcStack_410 = pcStack_3c8;
    func_0x0e53e180(auStack_558,&pcStack_418,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e513fcf:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e513fcf;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18) = *(uint *)((long)plStack_548 + 0x18) | 0x90000;
      }
    }
    if (cStack_3a0 == '\0') {
      func_0x0e53e510(auStack_558,&pcStack_3d8);
    }
    uVar34 = uStack_3a4;
    pcVar43 = pcStack_3d8;
    if ((DAT_0f7556a8 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7556a8), iVar36 != 0)) {
      func_0x0e539f20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755628,0xf53dab8);
      func_0x0410844d(&DAT_0f7556a8);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755628 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e514060;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755628 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e514060:
      puVar38 = &DAT_0f755628;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011e7332),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar15[0xf] = 0;
    auVar15._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar15 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_3ac,&uStack_3ac,auStack_558);
    pcStack_418 = pcStack_3d8;
    pcStack_410 = pcStack_3d0;
    pcStack_408 = pcStack_3c8;
    pcStack_400 = pcStack_3c0;
    pcStack_3f8 = pcStack_3b8;
    iStack_3f0 = iStack_3b0;
    uStack_3ec = uStack_3ac;
    uStack_3e8 = uStack_3a8;
    uStack_3e4 = uStack_3a4;
    cStack_3e0 = cStack_3a0;
    uStack_3df = uStack_39f;
    uStack_3de = uStack_39e;
    func_0x048b0bc0(auStack_4e8);
    bStack_318 = 0x2a;
    uStack_317 = (undefined7)_DAT_014a96e9;
    uStack_310 = (undefined1)((ulong)_DAT_014a96e9 >> 0x38);
    uStack_30f = (undefined5)_UNK_014a96f1;
    uStack_30a = 0x6e65;
    uStack_308 = 100;
    uStack_307 = 0x746f6f6c5f;
    uStack_302 = 0;
    func_0x0e53dbe0(auStack_4e8);
    bVar53 = (uStack_4c0 & 1) != 0;
    lVar51 = (long)&uStack_4c0 + 1;
    if (bVar53) {
      lVar51 = lStack_4b0;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_3ec = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_3ec = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_3ec = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_3ec = ((int)*(char *)(lVar51 + 3 + uVar50) ^
                       ((int)*(char *)(lVar51 + 2 + uVar50) ^
                       ((int)*(char *)(lVar51 + 1 + uVar50) ^
                       ((int)*(char *)(lVar51 + uVar50) ^ uStack_3ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_3ec = ((int)*(char *)(lVar51 + uVar50 + uVar49) ^ uStack_3ec) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_3f0 = 2;
    if ((DAT_0f7556c8 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7556c8), iVar36 != 0)) {
      func_0x0e53a030();
      func_0x0410844d(&DAT_0f7556c8);
    }
    auStack_558 = (undefined1  [4])uStack_3ec;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e53e3f0;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e539e60;
    puStack_518 = &UNK_0e53e6d0;
    puStack_510 = &UNK_0e53e6e0;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_410,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_388 = pcStack_400;
    pcStack_380 = pcStack_3f8;
    pcStack_398 = pcStack_410;
    pcStack_390 = pcStack_408;
    func_0x0e53e180(auStack_558,&pcStack_398,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(plStack_548[0xf] + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e51444f:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(plStack_548[0xf] + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e51444f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)(plStack_548 + 3) = *(uint *)(plStack_548 + 3) | 0x90000;
      }
    }
    if (cStack_3e0 == '\0') {
      func_0x0e53e510(auStack_558,&pcStack_418);
    }
    uVar34 = uStack_3e4;
    pcVar43 = pcStack_418;
    if ((DAT_0f7556a8 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7556a8), iVar36 != 0)) {
      func_0x0e539f20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755628,0xf53dab8);
      func_0x0410844d(&DAT_0f7556a8);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755628 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e5144e0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755628 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e5144e0:
      puVar38 = &DAT_0f755628;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011e7332),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar16[0xf] = 0;
    auVar16._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar16 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_3ec,&uStack_3ec,auStack_558);
    func_0x048b0bc0(auStack_4e8);
    if ((bStack_318 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_301,CONCAT16(uStack_302,CONCAT51(uStack_307,uStack_308))),
                      CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
    }
    if ((bStack_358 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_341,CONCAT16(uStack_342,CONCAT51(uStack_347,uStack_348))),
                      CONCAT71(uStack_357,bStack_358) & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f755760 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755760), iVar36 != 0)) {
    func_0x0e53e7f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
    func_0x0410844d(&DAT_0f755760);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e514620;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f7556e0 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e514620:
    puVar38 = &DAT_0f7556e0;
    if (iRam000000000f755740 != -0x2b3da790) goto LAB_0e514678;
LAB_0e51464b:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e514678;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    puVar38 = (undefined *)(lVar51 + 9);
    if (bVar53) {
      puVar38 = *(undefined **)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e51464b;
LAB_0e514678:
    puVar38 = &UNK_01356875;
    uVar49 = 0x17;
  }
  func_0x0e53ec30(&pcStack_3d8,param_1,puVar38,uVar49);
  pcVar43 = pcStack_3d8;
  uStack_3a4 = uStack_3a4 & 0xffffff00;
  cStack_3a0 = '\0';
  if ((char)uStack_3a8 == '\0') {
    if ((DAT_0f755760 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755760), iVar36 != 0)) {
      func_0x0e53e7f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
      func_0x0410844d(&DAT_0f755760);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e514720;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f7556e0 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e514720:
      puVar38 = &DAT_0f7556e0;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    for (pbVar42 = *(byte **)(pcStack_3d8 + 0x50); pbVar42 != *(byte **)(pcStack_3d8 + 0x58);
        pbVar42 = pbVar42 + 0x38) {
      bVar2 = *pbVar42;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e5147fa;
      }
      else if (*(long *)(pbVar42 + 8) == 0x1a) {
LAB_0e5147fa:
        if ((bVar2 & 1) == 0) {
          pbVar48 = pbVar42 + 1;
        }
        else {
          pbVar48 = *(byte **)(pbVar42 + 0x10);
        }
        auVar54[0] = -(*pbVar48 == 0x5b);
        auVar54[1] = -(pbVar48[1] == 99);
        auVar54[2] = -(pbVar48[2] == 0x65);
        auVar54[3] = -(pbVar48[3] == 0x72);
        auVar54[4] = -(pbVar48[4] == 0x65);
        auVar54[5] = -(pbVar48[5] == 0x61);
        auVar54[6] = -(pbVar48[6] == 0x6c);
        auVar54[7] = -(pbVar48[7] == 0x3a);
        auVar54[8] = -(pbVar48[8] == 100);
        auVar54[9] = -(pbVar48[9] == 0x6f);
        auVar54[10] = -(pbVar48[10] == 99);
        auVar54[0xb] = -(pbVar48[0xb] == 0x75);
        auVar54[0xc] = -(pbVar48[0xc] == 0x6d);
        auVar54[0xd] = -(pbVar48[0xd] == 0x65);
        auVar54[0xe] = -(pbVar48[0xe] == 0x6e);
        auVar54[0xf] = -(pbVar48[0xf] == 0x74);
        auVar68[0] = -(pbVar48[10] == 99);
        auVar68[1] = -(pbVar48[0xb] == 0x75);
        auVar68[2] = -(pbVar48[0xc] == 0x6d);
        auVar68[3] = -(pbVar48[0xd] == 0x65);
        auVar68[4] = -(pbVar48[0xe] == 0x6e);
        auVar68[5] = -(pbVar48[0xf] == 0x74);
        auVar68[6] = -(pbVar48[0x10] == 0x61);
        auVar68[7] = -(pbVar48[0x11] == 0x74);
        auVar68[8] = -(pbVar48[0x12] == 0x69);
        auVar68[9] = -(pbVar48[0x13] == 0x6f);
        auVar68[10] = -(pbVar48[0x14] == 0x6e);
        auVar68[0xb] = -(pbVar48[0x15] == 0x5f);
        auVar68[0xc] = -(pbVar48[0x16] == 0x74);
        auVar68[0xd] = -(pbVar48[0x17] == 0x61);
        auVar68[0xe] = -(pbVar48[0x18] == 0x67);
        auVar68[0xf] = -(pbVar48[0x19] == 0x5d);
        auVar68 = auVar68 & auVar54;
        if ((ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar42 == *(byte **)(pcStack_3d8 + 0x58)) {
LAB_0e514828:
      uVar34 = uStack_3ac;
      if (iStack_3b0 == 0) {
        if (((puVar38 == (undefined *)0x0) || (*(int *)(puVar38 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar38 + 0x68) == 0)) goto LAB_0e5148b2;
        lVar51 = *(long *)(puVar38 + 0x68) + 0x38;
      }
      else {
        if (puVar38 == (undefined *)0x0) {
          puVar38 = (undefined *)func_0x048aead0(pcVar43 + 0x18,0,uStack_3ac);
        }
        auStack_4e8._0_8_ = func_0x048b0c90(pcVar43 + 0x18,puVar38,uVar34,1);
        if (auStack_4e8._0_8_ == 0) {
          auStack_4e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4e8);
          if (auStack_4e8._0_8_ == 0) goto LAB_0e5148b2;
        }
        if ((*(int *)(auStack_4e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_4e8._0_8_ + 0x58) != 0)) {
          lVar51 = *(long *)(auStack_4e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e5148b2:
          lVar51 = 0;
        }
      }
      plStack_548 = (long *)&UNK_0488e0b0;
      uStack_540 = (code *)0x0;
      pcStack_538 = (code *)CONCAT35(pcStack_538._5_3_,0x48b5725f);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = plStack_550;
      _auStack_558 = auVar17 << 0x40;
      auStack_4e8 = (undefined1  [16])0x0;
      iStack_4d0 = 0x488e0b0;
      iStack_4cc = 0;
      pcStack_4c8 = (code *)0x0;
      uStack_4c0 = 0x48b5725f;
      cStack_4bc = '\0';
      pcVar43 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar43 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      pcStack_418 = (code *)0x21;
      pcStack_410 = (code *)0x1a;
      *(ulong *)(pcVar43 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar43 + 0x12) = uVar5;
      uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar43 = _DAT_013bbacd;
      *(undefined8 *)(pcVar43 + 8) = uVar5;
      pcVar43[0x1a] = (code)0x0;
      pcStack_408 = pcVar43;
      lVar51 = func_0x048b5060(lVar51,&pcStack_418);
      *(undefined8 *)(lVar51 + 0x20) = 0;
      if ((undefined1 *)(lVar51 + 0x20) == auStack_4e8) {
        pcVar43 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar51 + 0x40) != (code *)0x0) {
          puVar39 = (undefined8 *)(lVar51 + 0x28);
          (**(code **)(lVar51 + 0x40))(puVar39);
          if (cStack_4bc != '\0') {
            if (cStack_4bc == '\x02') {
              (*(code *)CONCAT44(iStack_4cc,iStack_4d0))(5,auStack_4e8 + 8,puVar39);
            }
            else {
              uVar5 = auStack_4e8._8_8_;
              auStack_4e8._8_8_ = 0;
              *puVar39 = uVar5;
            }
          }
        }
        *(ulong *)(lVar51 + 0x38) = CONCAT44(iStack_4cc,iStack_4d0);
        *(code **)(lVar51 + 0x40) = pcStack_4c8;
        *(uint *)(lVar51 + 0x48) = uStack_4c0;
        *(char *)(lVar51 + 0x4c) = cStack_4bc;
        pcVar43 = pcStack_4c8;
      }
      if (((ulong)pcStack_418 & 1) != 0) {
        func_0x0412a280(pcStack_408,(ulong)pcStack_418 & 0xfffffffffffffffe);
        pcVar43 = pcStack_4c8;
      }
      if (pcVar43 != (code *)0x0) {
        (*pcVar43)(auStack_4e8 + 8);
      }
      if (uStack_540 != (code *)0x0) {
        (*uStack_540)(auStack_558);
      }
    }
    else {
      iVar36 = *(int *)(pbVar42 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar37 = FUN_04108328(&DAT_0f550ad8), iVar37 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar36 == _DAT_0f550ac4) goto LAB_0e514828;
    }
    uStack_2e0 = CONCAT22(uStack_39e,CONCAT11(uStack_39f,cStack_3a0));
    uStack_2e8 = uStack_3a8;
    uStack_2e4 = uStack_3a4;
    uStack_2dc = (undefined4)(CONCAT26(uStack_39a,CONCAT24(uStack_39c,uStack_2e0)) >> 0x20);
    pcStack_2f8 = pcStack_3b8;
    iStack_2f0 = iStack_3b0;
    uStack_2ec = uStack_3ac;
    uStack_308 = SUB81(pcStack_3c8,0);
    uStack_307 = (undefined5)((ulong)pcStack_3c8 >> 8);
    uStack_302 = (undefined1)((ulong)pcStack_3c8 >> 0x30);
    uStack_301 = (undefined1)((ulong)pcStack_3c8 >> 0x38);
    pcStack_300 = pcStack_3c0;
    bStack_318 = (byte)pcStack_3d8;
    uStack_317 = (undefined7)((ulong)pcStack_3d8 >> 8);
    uStack_310 = SUB81(pcStack_3d0,0);
    uStack_30f = (undefined5)((ulong)pcStack_3d0 >> 8);
    uStack_30a = (undefined2)((ulong)pcStack_3d0 >> 0x30);
    uStack_340 = pcStack_3c0;
    pcStack_338 = pcStack_3b8;
    iStack_330 = iStack_3b0;
    uStack_32c = uStack_3ac;
    uStack_328 = uStack_3a8;
    uStack_324 = uStack_3a4;
    cStack_320 = cStack_3a0;
    uStack_31f = uStack_39f;
    uStack_31e = uStack_39e;
    uStack_31c = uStack_39c;
    uStack_31a = uStack_39a;
    uStack_2d8 = (code *)CONCAT53(uStack_2d8._3_5_,0x7802);
    bStack_358 = bStack_318;
    uStack_357 = uStack_317;
    uStack_350 = uStack_310;
    uStack_34f = uStack_30f;
    uStack_34a = uStack_30a;
    uStack_348 = uStack_308;
    uStack_347 = uStack_307;
    uStack_342 = uStack_302;
    uStack_341 = uStack_301;
    func_0x0e5424b0(auStack_4e8,(long)&uStack_2d8 + 1);
    bVar53 = (uStack_4c0 & 1) == 0;
    lVar51 = (long)&uStack_4c0 + 1;
    lVar45 = lStack_4b0;
    if (bVar53) {
      lVar45 = lVar51;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_32c = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_32c = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_32c = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_32c = ((int)*(char *)(lVar45 + 3 + uVar50) ^
                       ((int)*(char *)(lVar45 + 2 + uVar50) ^
                       ((int)*(char *)(lVar45 + 1 + uVar50) ^
                       ((int)*(char *)(lVar45 + uVar50) ^ uStack_32c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_32c = ((int)*(char *)(lVar45 + uVar50 + uVar49) ^ uStack_32c) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_330 = 2;
    if ((DAT_0f755780 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755780), iVar36 != 0)) {
      func_0x0e53e900();
      func_0x0410844d(&DAT_0f755780);
    }
    auStack_558 = (undefined1  [4])uStack_32c;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e5429d0;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e53e730;
    puStack_518 = &UNK_0e542a90;
    puStack_510 = &UNK_0e542aa0;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&uStack_350,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar45 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar45 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_418 = (code *)CONCAT26(uStack_34a,CONCAT51(uStack_34f,uStack_350));
    pcStack_410 = (code *)CONCAT17(uStack_341,CONCAT16(uStack_342,CONCAT51(uStack_347,uStack_348)));
    pcStack_408 = uStack_340;
    pcStack_400 = pcStack_338;
    func_0x0e542760(auStack_558,&pcStack_418,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e514def:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e514def;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18) = *(uint *)((long)plStack_548 + 0x18) | 0x90000;
      }
    }
    if (cStack_320 == '\0') {
      func_0x0e542af0(auStack_558,&bStack_358);
    }
    uVar34 = uStack_324;
    lVar45 = CONCAT71(uStack_357,bStack_358);
    if ((DAT_0f755760 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755760), iVar36 != 0)) {
      func_0x0e53e7f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
      func_0x0410844d(&DAT_0f755760);
    }
    plVar44 = (long *)(*(long *)(lVar45 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar45 + 0x20) - *(long *)(lVar45 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
    do {
      lVar4 = *plVar44;
      if (lVar4 == -1) goto LAB_0e514e80;
      plVar44 = (long *)(*(long *)(lVar45 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar45 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f7556e0 + 4))
    ;
    if (plVar44 == *(long **)(lVar45 + 0x38)) {
LAB_0e514e80:
      puVar38 = &DAT_0f7556e0;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121d0d5),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar18[0xf] = 0;
    auVar18._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar18 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_32c,&uStack_32c,auStack_558);
    pcStack_398 = (code *)CONCAT71(uStack_357,bStack_358);
    pcStack_390 = (code *)CONCAT26(uStack_34a,CONCAT51(uStack_34f,uStack_350));
    pcStack_388 = (code *)CONCAT17(uStack_341,CONCAT16(uStack_342,CONCAT51(uStack_347,uStack_348)));
    pcStack_380 = uStack_340;
    pcStack_378 = pcStack_338;
    iStack_370 = iStack_330;
    uStack_36c = uStack_32c;
    uStack_368 = uStack_328;
    uStack_364 = uStack_324;
    cStack_360 = cStack_320;
    uStack_35f = uStack_31f;
    uStack_35e = uStack_31e;
    func_0x048b0bc0(auStack_4e8);
    bStack_250 = 2;
    uStack_24f = 0x79;
    uStack_24e = 0;
    func_0x0e5424b0(auStack_4e8,&uStack_24f);
    bVar53 = (uStack_4c0 & 1) == 0;
    lVar45 = lStack_4b0;
    if (bVar53) {
      lVar45 = lVar51;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_36c = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_36c = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_36c = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_36c = ((int)*(char *)(lVar45 + 3 + uVar50) ^
                       ((int)*(char *)(lVar45 + 2 + uVar50) ^
                       ((int)*(char *)(lVar45 + 1 + uVar50) ^
                       ((int)*(char *)(lVar45 + uVar50) ^ uStack_36c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_36c = ((int)*(char *)(lVar45 + uVar50 + uVar49) ^ uStack_36c) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_370 = 2;
    if ((DAT_0f755780 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755780), iVar36 != 0)) {
      func_0x0e53e900();
      func_0x0410844d(&DAT_0f755780);
    }
    auStack_558 = (undefined1  [4])uStack_36c;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e5429d0;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e53e730;
    puStack_518 = &UNK_0e542cb0;
    puStack_510 = &UNK_0e542cc0;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_390,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar45 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar45 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_408 = pcStack_380;
    pcStack_400 = pcStack_378;
    pcStack_418 = pcStack_390;
    pcStack_410 = pcStack_388;
    func_0x0e542760(auStack_558,&pcStack_418,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e51520f:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e51520f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18) = *(uint *)((long)plStack_548 + 0x18) | 0x90000;
      }
    }
    if (cStack_360 == '\0') {
      func_0x0e542af0(auStack_558,&pcStack_398);
    }
    uVar34 = uStack_364;
    pcVar43 = pcStack_398;
    if ((DAT_0f755760 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755760), iVar36 != 0)) {
      func_0x0e53e7f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
      func_0x0410844d(&DAT_0f755760);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
    do {
      lVar45 = *plVar44;
      if (lVar45 == -1) goto LAB_0e5152a0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar45 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar45 * 0x18) !=
             *(uint *)(_DAT_0f7556e0 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e5152a0:
      puVar38 = &DAT_0f7556e0;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121d0d5),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar19[0xf] = 0;
    auVar19._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar19 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_36c,&uStack_36c,auStack_558);
    pcStack_418 = pcStack_398;
    pcStack_410 = pcStack_390;
    pcStack_408 = pcStack_388;
    pcStack_400 = pcStack_380;
    pcStack_3f8 = pcStack_378;
    iStack_3f0 = iStack_370;
    uStack_3ec = uStack_36c;
    uStack_3e8 = uStack_368;
    uStack_3e4 = uStack_364;
    cStack_3e0 = cStack_360;
    uStack_3df = uStack_35f;
    uStack_3de = uStack_35e;
    func_0x048b0bc0(auStack_4e8);
    bStack_218 = 2;
    uStack_217 = 0x7a;
    uStack_216 = 0;
    func_0x0e5424b0(auStack_4e8);
    bVar53 = (uStack_4c0 & 1) != 0;
    if (bVar53) {
      lVar51 = lStack_4b0;
    }
    uVar49 = (ulong)((byte)uStack_4c0 >> 1);
    if (bVar53) {
      uVar49 = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    }
    if (uVar49 == 0) {
      uStack_3ec = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar49 & 3);
      if (uVar49 < 4) {
        uStack_3ec = 0x811c9dc5;
        uVar50 = 0;
      }
      else {
        uStack_3ec = 0x811c9dc5;
        uVar50 = 0;
        do {
          uStack_3ec = ((int)*(char *)(lVar51 + 3 + uVar50) ^
                       ((int)*(char *)(lVar51 + 2 + uVar50) ^
                       ((int)*(char *)(lVar51 + 1 + uVar50) ^
                       ((int)*(char *)(lVar51 + uVar50) ^ uStack_3ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar50 = uVar50 + 4;
        } while ((uVar49 & 0xfffffffffffffffc) != uVar50);
      }
      if (uVar41 != 0) {
        uVar49 = 0;
        do {
          uStack_3ec = ((int)*(char *)(lVar51 + uVar50 + uVar49) ^ uStack_3ec) * 0x1000193;
          uVar49 = uVar49 + 1;
        } while (uVar41 != uVar49);
      }
    }
    iStack_3f0 = 2;
    if ((DAT_0f755780 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755780), iVar36 != 0)) {
      func_0x0e53e900();
      func_0x0410844d(&DAT_0f755780);
    }
    auStack_558 = (undefined1  [4])uStack_3ec;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e5429d0;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e53e730;
    puStack_518 = &UNK_0e542d10;
    puStack_510 = &UNK_0e542d20;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(&pcStack_410,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_288 = pcStack_400;
    pcStack_280 = pcStack_3f8;
    pcStack_298 = pcStack_410;
    pcStack_290 = pcStack_408;
    func_0x0e542760(auStack_558,&pcStack_298,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(plStack_548[0xf] + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e51560f:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(plStack_548[0xf] + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e51560f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)(plStack_548 + 3) = *(uint *)(plStack_548 + 3) | 0x90000;
      }
    }
    if (cStack_3e0 == '\0') {
      func_0x0e542af0(auStack_558,&pcStack_418);
    }
    uVar34 = uStack_3e4;
    pcVar43 = pcStack_418;
    if ((DAT_0f755760 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755760), iVar36 != 0)) {
      func_0x0e53e7f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
      func_0x0410844d(&DAT_0f755760);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e5156a0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f7556e0 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e5156a0:
      puVar38 = &DAT_0f7556e0;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x28);
    for (puVar52 = *(uint **)(*(long *)(puVar38 + 0x68) + 0x20);
        (puVar52 != puVar3 && (*puVar52 != uVar34)); puVar52 = puVar52 + 0xe) {
    }
    if ((puVar52 == puVar3) &&
       (cVar35 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121d0d5),
       cVar35 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar20[0xf] = 0;
    auVar20._0_15_ = stack0xfffffffffffffaa9;
    _auStack_558 = auVar20 << 8;
    func_0x05d9c620(puVar52 + 2,&uStack_3ec,&uStack_3ec,auStack_558);
    func_0x048b0bc0(auStack_4e8);
    if ((bStack_218 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_201,CONCAT16(uStack_202,CONCAT51(uStack_207,uStack_208))),
                      CONCAT53(uStack_215,CONCAT12(uStack_216,CONCAT11(uStack_217,bStack_218))) &
                      0xfffffffffffffffe);
    }
    if ((bStack_250 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_239,CONCAT16(uStack_23a,CONCAT51(uStack_23f,uStack_240))),
                      CONCAT53(uStack_24d,CONCAT12(uStack_24e,CONCAT11(uStack_24f,bStack_250))) &
                      0xfffffffffffffffe);
    }
    if (((ulong)uStack_2d8 & 1) != 0) {
      func_0x0412a280(pcStack_2c8,(ulong)uStack_2d8 & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f755818 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755818), iVar36 != 0)) {
    func_0x0e542e30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755798,0xf53dab8);
    func_0x0410844d(&DAT_0f755818);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755798 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e5157e0;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f755798 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e5157e0:
    puVar38 = &DAT_0f755798;
    if (iRam000000000f7557f8 != -0x2b3da790) goto LAB_0e51584d;
LAB_0e51580b:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e51584d;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    lVar45 = lVar51 + 9;
    if (bVar53) {
      lVar45 = *(long *)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
    func_0x0e543210(&pcStack_3d8,param_1,lVar45,uVar49);
    pcVar43 = pcStack_3d8;
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e51580b;
LAB_0e51584d:
    func_0x0e543210(&pcStack_3d8,param_1,&UNK_011cef07,0xf);
    pcVar43 = pcStack_3d8;
  }
  pcStack_3d8 = pcVar43;
  if ((char)uStack_3a8 == '\0') {
    if ((DAT_0f755818 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755818), iVar36 != 0)) {
      func_0x0e542e30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755798,0xf53dab8);
      func_0x0410844d(&DAT_0f755818);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755798 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e5158e0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755798 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e5158e0:
      puVar38 = &DAT_0f755798;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    for (pbVar42 = *(byte **)(pcStack_3d8 + 0x50); pbVar42 != *(byte **)(pcStack_3d8 + 0x58);
        pbVar42 = pbVar42 + 0x38) {
      bVar2 = *pbVar42;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e5159ba;
      }
      else if (*(long *)(pbVar42 + 8) == 0x1a) {
LAB_0e5159ba:
        if ((bVar2 & 1) == 0) {
          pbVar48 = pbVar42 + 1;
        }
        else {
          pbVar48 = *(byte **)(pbVar42 + 0x10);
        }
        auVar55[0] = -(*pbVar48 == 0x5b);
        auVar55[1] = -(pbVar48[1] == 99);
        auVar55[2] = -(pbVar48[2] == 0x65);
        auVar55[3] = -(pbVar48[3] == 0x72);
        auVar55[4] = -(pbVar48[4] == 0x65);
        auVar55[5] = -(pbVar48[5] == 0x61);
        auVar55[6] = -(pbVar48[6] == 0x6c);
        auVar55[7] = -(pbVar48[7] == 0x3a);
        auVar55[8] = -(pbVar48[8] == 100);
        auVar55[9] = -(pbVar48[9] == 0x6f);
        auVar55[10] = -(pbVar48[10] == 99);
        auVar55[0xb] = -(pbVar48[0xb] == 0x75);
        auVar55[0xc] = -(pbVar48[0xc] == 0x6d);
        auVar55[0xd] = -(pbVar48[0xd] == 0x65);
        auVar55[0xe] = -(pbVar48[0xe] == 0x6e);
        auVar55[0xf] = -(pbVar48[0xf] == 0x74);
        auVar69[0] = -(pbVar48[10] == 99);
        auVar69[1] = -(pbVar48[0xb] == 0x75);
        auVar69[2] = -(pbVar48[0xc] == 0x6d);
        auVar69[3] = -(pbVar48[0xd] == 0x65);
        auVar69[4] = -(pbVar48[0xe] == 0x6e);
        auVar69[5] = -(pbVar48[0xf] == 0x74);
        auVar69[6] = -(pbVar48[0x10] == 0x61);
        auVar69[7] = -(pbVar48[0x11] == 0x74);
        auVar69[8] = -(pbVar48[0x12] == 0x69);
        auVar69[9] = -(pbVar48[0x13] == 0x6f);
        auVar69[10] = -(pbVar48[0x14] == 0x6e);
        auVar69[0xb] = -(pbVar48[0x15] == 0x5f);
        auVar69[0xc] = -(pbVar48[0x16] == 0x74);
        auVar69[0xd] = -(pbVar48[0x17] == 0x61);
        auVar69[0xe] = -(pbVar48[0x18] == 0x67);
        auVar69[0xf] = -(pbVar48[0x19] == 0x5d);
        auVar69 = auVar69 & auVar55;
        if ((ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar42 == *(byte **)(pcStack_3d8 + 0x58)) {
LAB_0e5159e8:
      uVar34 = uStack_3ac;
      if (iStack_3b0 == 0) {
        if (((puVar38 == (undefined *)0x0) || (*(int *)(puVar38 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar38 + 0x68) == 0)) goto LAB_0e515acb;
        lVar51 = *(long *)(puVar38 + 0x68) + 0x38;
      }
      else {
        if (puVar38 == (undefined *)0x0) {
          puVar38 = (undefined *)func_0x048aead0(pcVar43 + 0x18);
        }
        auStack_4e8._0_8_ = func_0x048b0c90(pcVar43 + 0x18,puVar38,uVar34,1);
        if (auStack_4e8._0_8_ == 0) {
          auStack_4e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4e8);
          if (auStack_4e8._0_8_ == 0) goto LAB_0e515acb;
        }
        if ((*(int *)(auStack_4e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_4e8._0_8_ + 0x58) != 0)) {
          lVar51 = *(long *)(auStack_4e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e515acb:
          lVar51 = 0;
        }
      }
      plStack_548 = (long *)&UNK_0488e0b0;
      uStack_540 = (code *)0x0;
      pcStack_538 = (code *)CONCAT35(pcStack_538._5_3_,0x48b5725f);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = plStack_550;
      _auStack_558 = auVar21 << 0x40;
      auStack_4e8 = (undefined1  [16])0x0;
      iStack_4d0 = 0x488e0b0;
      iStack_4cc = 0;
      pcStack_4c8 = (code *)0x0;
      uStack_4c0 = 0x48b5725f;
      cStack_4bc = '\0';
      puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar39 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      pcStack_418 = (code *)0x21;
      pcStack_410 = (code *)0x1a;
      *(ulong *)((long)puVar39 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar39 + 0x12) = uVar5;
      uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar39 = _DAT_013bbacd;
      puVar39[1] = uVar5;
      *(undefined1 *)((long)puVar39 + 0x1a) = 0;
      pcStack_408 = (code *)puVar39;
      lVar51 = func_0x048b5060(lVar51,&pcStack_418);
      *(undefined8 *)(lVar51 + 0x20) = 0;
      if ((undefined1 *)(lVar51 + 0x20) == auStack_4e8) {
        pcVar43 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar51 + 0x40) != (code *)0x0) {
          puVar39 = (undefined8 *)(lVar51 + 0x28);
          (**(code **)(lVar51 + 0x40))(puVar39);
          if (cStack_4bc != '\0') {
            if (cStack_4bc == '\x02') {
              (*(code *)CONCAT44(iStack_4cc,iStack_4d0))(5,auStack_4e8 + 8,puVar39);
            }
            else {
              uVar5 = auStack_4e8._8_8_;
              auStack_4e8._8_8_ = 0;
              *puVar39 = uVar5;
            }
          }
        }
        *(ulong *)(lVar51 + 0x38) = CONCAT44(iStack_4cc,iStack_4d0);
        *(code **)(lVar51 + 0x40) = pcStack_4c8;
        *(uint *)(lVar51 + 0x48) = uStack_4c0;
        *(char *)(lVar51 + 0x4c) = cStack_4bc;
        pcVar43 = pcStack_4c8;
      }
      if (((ulong)pcStack_418 & 1) != 0) {
        func_0x0412a280(pcStack_408,(ulong)pcStack_418 & 0xfffffffffffffffe);
        pcVar43 = pcStack_4c8;
      }
      if (pcVar43 != (code *)0x0) {
        (*pcVar43)(auStack_4e8 + 8);
      }
      if (uStack_540 != (code *)0x0) {
        (*uStack_540)(auStack_558);
      }
    }
    else {
      iVar36 = *(int *)(pbVar42 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar37 = FUN_04108328(&DAT_0f550ad8), iVar37 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar36 == _DAT_0f550ac4) goto LAB_0e5159e8;
    }
    uStack_368 = uStack_3a8;
    uStack_364 = uStack_3a4;
    pcStack_378 = pcStack_3b8;
    iStack_370 = iStack_3b0;
    uStack_36c = uStack_3ac;
    pcStack_388 = pcStack_3c8;
    pcStack_380 = pcStack_3c0;
    pcStack_398 = pcStack_3d8;
    pcStack_390 = pcStack_3d0;
    pcStack_3f8 = pcStack_3b8;
    pcStack_418 = pcStack_3d8;
    pcStack_410 = pcStack_3d0;
    pcStack_408 = pcStack_3c8;
    pcStack_400 = pcStack_3c0;
    uStack_3e8 = uStack_3a8;
    uStack_3e4 = uStack_3a4;
    iStack_3f0 = 2;
    uStack_3ec = 0x5c17b12b;
    lStack_488 = 0;
    lStack_480 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    auStack_4a8 = (undefined1  [16])0x0;
    cStack_4b8 = 0;
    uStack_4b7 = 0;
    uStack_4b1 = 0;
    lStack_4b0 = 0;
    pcStack_4c8 = (code *)0x0;
    uStack_4c0 = 0;
    cStack_4bc = 0;
    uStack_4bb = 0;
    uStack_4ba = 0;
    uStack_4b9 = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    iStack_4d0 = 0;
    iStack_4cc = 0;
    auStack_4e8 = (undefined1  [16])0x0;
    uStack_478 = 0x3f600000;
    FUN_048afb10(auStack_4a8,8);
    lStack_450 = 0;
    lStack_448 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    lStack_458 = 0;
    auStack_470 = (undefined1  [16])0x0;
    uStack_440 = 0xff00;
    uStack_43c = uStack_43c & 0xffffff00;
    uStack_438 = uStack_438 & 0xffffff00;
    uStack_434 = uStack_434 & 0xffffff00;
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0f4bd598;
    uVar5 = auStack_4e8._0_8_;
    auStack_4e8._0_8_ = puVar39;
    if ((long *)uVar5 != (long *)0x0) {
      (**(code **)(*(long *)uVar5 + 8))();
    }
    if ((uStack_4c0 & 1) != 0) {
      func_0x0412a280(lStack_4b0,
                      CONCAT17(uStack_4b9,
                               CONCAT16(uStack_4ba,
                                        CONCAT15(uStack_4bb,CONCAT14(cStack_4bc,uStack_4c0)))) &
                      0xfffffffffffffffe);
    }
    uStack_4c0 = 0x6572701c;
    cStack_4bc = 100;
    uStack_4bb = 0x69;
    uStack_4ba = 99;
    uStack_4b9 = 0x61;
    cStack_4b8 = 0x74;
    uStack_4b7 = 0x657079745f65;
    uStack_4b1 = 0;
    if ((DAT_0f755838 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755838), iVar36 != 0)) {
      func_0x0e542f40();
      func_0x0410844d(&DAT_0f755838);
    }
    auStack_558 = (undefined1  [4])uStack_3ec;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e543d20;
    puStack_510 = &UNK_0e543d30;
    uStack_508 = 0;
    auStack_500._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(&pcStack_410,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    uStack_348 = SUB81(pcStack_400,0);
    uStack_347 = (undefined5)((ulong)pcStack_400 >> 8);
    uStack_342 = (undefined1)((ulong)pcStack_400 >> 0x30);
    uStack_341 = (undefined1)((ulong)pcStack_400 >> 0x38);
    uStack_340 = pcStack_3f8;
    bStack_358 = (byte)pcStack_410;
    uStack_357 = (undefined7)((ulong)pcStack_410 >> 8);
    uStack_350 = SUB81(pcStack_408,0);
    uStack_34f = (undefined5)((ulong)pcStack_408 >> 8);
    uStack_34a = (undefined2)((ulong)pcStack_408 >> 0x30);
    if ((DAT_0f550a20 == '\0') && (iVar36 = FUN_04108328(&DAT_0f550a20), iVar36 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_558 = (undefined1  [4])_DAT_0f550a0c;
    plVar44 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar44 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar44 + 1) = (undefined1  [16])0x0;
    *plVar44 = (long)&UNK_0ef439d0;
    uVar5 = auStack_4e8._0_8_;
    uVar33 = auStack_4e8._8_8_;
    auStack_4e8 = (undefined1  [16])0x0;
    plVar44[3] = uVar5;
    plVar44[4] = uVar33;
    plVar44[7] = (long)pcStack_4c8;
    plVar44[5] = CONCAT44(uStack_4d4,uStack_4d8);
    plVar44[6] = CONCAT44(iStack_4cc,iStack_4d0);
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    iStack_4d0 = 0;
    iStack_4cc = 0;
    pcStack_4c8 = (code *)0x0;
    plVar44[10] = lStack_4b0;
    plVar44[8] = CONCAT17(uStack_4b9,
                          CONCAT16(uStack_4ba,CONCAT15(uStack_4bb,CONCAT14(cStack_4bc,uStack_4c0))))
    ;
    plVar44[9] = CONCAT17(uStack_4b1,CONCAT61(uStack_4b7,cStack_4b8));
    uStack_4c0 = 0;
    cStack_4bc = '\0';
    uStack_4bb = 0;
    uStack_4ba = 0;
    uStack_4b9 = 0;
    cStack_4b8 = '\0';
    uStack_4b7 = 0;
    uStack_4b1 = 0;
    lStack_4b0 = 0;
    plVar44[0xb] = auStack_4a8._0_8_;
    plVar44[0xc] = auStack_4a8._8_8_;
    plVar44[0xd] = lStack_498;
    auStack_4a8 = (undefined1  [16])0x0;
    lStack_498 = 0;
    plVar44[0xe] = lStack_490;
    plVar44[0xf] = lStack_488;
    plVar44[0x10] = lStack_480;
    lStack_490 = 0;
    lStack_488 = 0;
    lStack_480 = 0;
    *(undefined4 *)(plVar44 + 0x11) = uStack_478;
    plVar44[0x12] = auStack_470._0_8_;
    plVar44[0x13] = auStack_470._8_8_;
    plVar44[0x14] = CONCAT44(uStack_45c,uStack_460);
    auStack_470 = (undefined1  [16])0x0;
    uStack_460 = 0;
    uStack_45c = 0;
    plVar44[0x17] = lStack_448;
    plVar44[0x15] = lStack_458;
    plVar44[0x16] = lStack_450;
    lStack_458 = 0;
    lStack_450 = 0;
    lStack_448 = 0;
    *(ulong *)((long)plVar44 + 0xc5) =
         CONCAT17((undefined1)uStack_434,CONCAT43(uStack_438,uStack_43c._1_3_));
    plVar44[0x18] = CONCAT44(uStack_43c,CONCAT22(uStack_43e,uStack_440));
    plStack_550 = plVar44 + 3;
    bStack_318 = 0;
    uStack_317 = 0;
    uStack_310 = 0;
    uStack_30f = 0;
    uStack_30a = 0;
    plStack_548 = plVar44;
    func_0x048afd20(&bStack_358,auStack_558);
    plVar44 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_548 + 1;
      lVar51 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar44);
      }
    }
    plVar44 = (long *)CONCAT26(uStack_30a,CONCAT51(uStack_30f,uStack_310));
    if (plVar44 != (long *)0x0) {
      LOCK();
      plVar1 = plVar44 + 1;
      lVar51 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*plVar44 + 0x10))(plVar44);
        func_0x0412c2d0(plVar44);
      }
    }
    lVar51 = CONCAT17(uStack_341,CONCAT16(uStack_342,CONCAT51(uStack_347,uStack_348)));
    if (uStack_340._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)(lVar51 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_340) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      for (; *(long *)(piVar46 + 0xc) != CONCAT26(uStack_34a,CONCAT51(uStack_34f,uStack_350));
          piVar46 = *(int **)(piVar46 + 0xe)) {
      }
LAB_0e51623a:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)(lVar51 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_340) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e51623a;
      }
      if (uStack_340._4_4_ == 0) {
        *(byte *)(lVar51 + 0x1a) = *(byte *)(lVar51 + 0x1a) | 9;
      }
    }
    func_0x048b0bc0(auStack_4e8);
  }
  if ((DAT_0f7558d0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7558d0), iVar36 != 0)) {
    func_0x0e543e40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
    func_0x0410844d(&DAT_0f7558d0);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755850 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e5162b0;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f755850 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e5162b0:
    puVar38 = &DAT_0f755850;
    if (iRam000000000f7558b0 != -0x2b3da790) goto LAB_0e51631d;
LAB_0e5162db:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e51631d;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    lVar45 = lVar51 + 9;
    if (bVar53) {
      lVar45 = *(long *)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
    func_0x0e5444e0(&pcStack_3d8,param_1,lVar45,uVar49);
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e5162db;
LAB_0e51631d:
    func_0x0e5444e0(&pcStack_3d8,param_1,&UNK_014deece,10);
  }
  if ((char)uStack_3a8 == '\0') {
    func_0x0c0bcb30(param_1);
    pcVar43 = pcStack_3d8;
    if ((DAT_0f7558d0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7558d0), iVar36 != 0)) {
      func_0x0e543e40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
      func_0x0410844d(&DAT_0f7558d0);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755850 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e5163c0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755850 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e5163c0:
      puVar38 = &DAT_0f755850;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    for (pbVar42 = *(byte **)(pcStack_3d8 + 0x50); pbVar42 != *(byte **)(pcStack_3d8 + 0x58);
        pbVar42 = pbVar42 + 0x38) {
      bVar2 = *pbVar42;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e51649a;
      }
      else if (*(long *)(pbVar42 + 8) == 0x1a) {
LAB_0e51649a:
        if ((bVar2 & 1) == 0) {
          pbVar48 = pbVar42 + 1;
        }
        else {
          pbVar48 = *(byte **)(pbVar42 + 0x10);
        }
        auVar56[0] = -(*pbVar48 == 0x5b);
        auVar56[1] = -(pbVar48[1] == 99);
        auVar56[2] = -(pbVar48[2] == 0x65);
        auVar56[3] = -(pbVar48[3] == 0x72);
        auVar56[4] = -(pbVar48[4] == 0x65);
        auVar56[5] = -(pbVar48[5] == 0x61);
        auVar56[6] = -(pbVar48[6] == 0x6c);
        auVar56[7] = -(pbVar48[7] == 0x3a);
        auVar56[8] = -(pbVar48[8] == 100);
        auVar56[9] = -(pbVar48[9] == 0x6f);
        auVar56[10] = -(pbVar48[10] == 99);
        auVar56[0xb] = -(pbVar48[0xb] == 0x75);
        auVar56[0xc] = -(pbVar48[0xc] == 0x6d);
        auVar56[0xd] = -(pbVar48[0xd] == 0x65);
        auVar56[0xe] = -(pbVar48[0xe] == 0x6e);
        auVar56[0xf] = -(pbVar48[0xf] == 0x74);
        auVar70[0] = -(pbVar48[10] == 99);
        auVar70[1] = -(pbVar48[0xb] == 0x75);
        auVar70[2] = -(pbVar48[0xc] == 0x6d);
        auVar70[3] = -(pbVar48[0xd] == 0x65);
        auVar70[4] = -(pbVar48[0xe] == 0x6e);
        auVar70[5] = -(pbVar48[0xf] == 0x74);
        auVar70[6] = -(pbVar48[0x10] == 0x61);
        auVar70[7] = -(pbVar48[0x11] == 0x74);
        auVar70[8] = -(pbVar48[0x12] == 0x69);
        auVar70[9] = -(pbVar48[0x13] == 0x6f);
        auVar70[10] = -(pbVar48[0x14] == 0x6e);
        auVar70[0xb] = -(pbVar48[0x15] == 0x5f);
        auVar70[0xc] = -(pbVar48[0x16] == 0x74);
        auVar70[0xd] = -(pbVar48[0x17] == 0x61);
        auVar70[0xe] = -(pbVar48[0x18] == 0x67);
        auVar70[0xf] = -(pbVar48[0x19] == 0x5d);
        auVar70 = auVar70 & auVar56;
        if ((ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar70[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar42 == *(byte **)(pcStack_3d8 + 0x58)) {
LAB_0e5164c8:
      uVar34 = uStack_3ac;
      if (iStack_3b0 == 0) {
        if (((puVar38 == (undefined *)0x0) || (*(int *)(puVar38 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar38 + 0x68) == 0)) goto LAB_0e516550;
        lVar51 = *(long *)(puVar38 + 0x68) + 0x38;
      }
      else {
        if (puVar38 == (undefined *)0x0) {
          puVar38 = (undefined *)func_0x048aead0(pcVar43 + 0x18);
        }
        auStack_4e8._0_8_ = func_0x048b0c90(pcVar43 + 0x18,puVar38,uVar34,1);
        if (auStack_4e8._0_8_ == 0) {
          auStack_4e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4e8);
          if (auStack_4e8._0_8_ == 0) goto LAB_0e516550;
        }
        if ((*(int *)(auStack_4e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_4e8._0_8_ + 0x58) != 0)) {
          lVar51 = *(long *)(auStack_4e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e516550:
          lVar51 = 0;
        }
      }
      plStack_548 = (long *)&UNK_0488e0b0;
      uStack_540 = (code *)0x0;
      pcStack_538 = (code *)CONCAT35(pcStack_538._5_3_,0x48b5725f);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = plStack_550;
      _auStack_558 = auVar22 << 0x40;
      auStack_4e8 = (undefined1  [16])0x0;
      iStack_4d0 = 0x488e0b0;
      iStack_4cc = 0;
      pcStack_4c8 = (code *)0x0;
      uStack_4c0 = 0x48b5725f;
      cStack_4bc = '\0';
      pcVar43 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar43 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      pcStack_418 = (code *)0x21;
      pcStack_410 = (code *)0x1a;
      *(ulong *)(pcVar43 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar43 + 0x12) = uVar5;
      uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar43 = _DAT_013bbacd;
      *(undefined8 *)(pcVar43 + 8) = uVar5;
      pcVar43[0x1a] = (code)0x0;
      pcStack_408 = pcVar43;
      lVar51 = func_0x048b5060(lVar51,&pcStack_418);
      *(undefined8 *)(lVar51 + 0x20) = 0;
      if ((undefined1 *)(lVar51 + 0x20) == auStack_4e8) {
        pcVar43 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar51 + 0x40) != (code *)0x0) {
          puVar39 = (undefined8 *)(lVar51 + 0x28);
          (**(code **)(lVar51 + 0x40))(puVar39);
          if (cStack_4bc != '\0') {
            if (cStack_4bc == '\x02') {
              (*(code *)CONCAT44(iStack_4cc,iStack_4d0))(5,auStack_4e8 + 8,puVar39);
            }
            else {
              uVar5 = auStack_4e8._8_8_;
              auStack_4e8._8_8_ = 0;
              *puVar39 = uVar5;
            }
          }
        }
        *(ulong *)(lVar51 + 0x38) = CONCAT44(iStack_4cc,iStack_4d0);
        *(code **)(lVar51 + 0x40) = pcStack_4c8;
        *(uint *)(lVar51 + 0x48) = uStack_4c0;
        *(char *)(lVar51 + 0x4c) = cStack_4bc;
        pcVar43 = pcStack_4c8;
      }
      if (((ulong)pcStack_418 & 1) != 0) {
        func_0x0412a280(pcStack_408,(ulong)pcStack_418 & 0xfffffffffffffffe);
        pcVar43 = pcStack_4c8;
      }
      if (pcVar43 != (code *)0x0) {
        (*pcVar43)(auStack_4e8 + 8);
      }
      if (uStack_540 != (code *)0x0) {
        (*uStack_540)(auStack_558);
      }
    }
    else {
      iVar36 = *(int *)(pbVar42 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar37 = FUN_04108328(&DAT_0f550ad8), iVar37 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar36 == _DAT_0f550ac4) goto LAB_0e5164c8;
    }
    uStack_328 = uStack_3a8;
    uStack_324 = uStack_3a4;
    pcStack_338 = pcStack_3b8;
    iStack_330 = iStack_3b0;
    uStack_32c = uStack_3ac;
    uStack_348 = SUB81(pcStack_3c8,0);
    uStack_347 = (undefined5)((ulong)pcStack_3c8 >> 8);
    uStack_342 = (undefined1)((ulong)pcStack_3c8 >> 0x30);
    uStack_341 = (undefined1)((ulong)pcStack_3c8 >> 0x38);
    uStack_340 = pcStack_3c0;
    bStack_358 = (byte)pcStack_3d8;
    uStack_357 = (undefined7)((ulong)pcStack_3d8 >> 8);
    uStack_350 = SUB81(pcStack_3d0,0);
    uStack_34f = (undefined5)((ulong)pcStack_3d0 >> 8);
    uStack_34a = (undefined2)((ulong)pcStack_3d0 >> 0x30);
    pcStack_378 = pcStack_3b8;
    pcStack_398 = pcStack_3d8;
    pcStack_390 = pcStack_3d0;
    pcStack_388 = pcStack_3c8;
    pcStack_380 = pcStack_3c0;
    uStack_368 = uStack_3a8;
    uStack_364 = uStack_3a4;
    iStack_370 = 2;
    uStack_36c = 0x5c17b12b;
    lStack_488 = 0;
    lStack_480 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    auStack_4a8 = (undefined1  [16])0x0;
    cStack_4b8 = 0;
    uStack_4b7 = 0;
    uStack_4b1 = 0;
    lStack_4b0 = 0;
    pcStack_4c8 = (code *)0x0;
    uStack_4c0 = 0;
    cStack_4bc = 0;
    uStack_4bb = 0;
    uStack_4ba = 0;
    uStack_4b9 = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    iStack_4d0 = 0;
    iStack_4cc = 0;
    auStack_4e8 = (undefined1  [16])0x0;
    uStack_478 = 0x3f600000;
    FUN_048afb10(auStack_4a8,8);
    lStack_450 = 0;
    lStack_448 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    lStack_458 = 0;
    auStack_470 = (undefined1  [16])0x0;
    uStack_440 = 0xff00;
    uStack_43c = uStack_43c & 0xffffff00;
    uStack_438 = uStack_438 & 0xffffff00;
    uStack_434 = uStack_434 & 0xffffff00;
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0f4bd598;
    uVar5 = auStack_4e8._0_8_;
    auStack_4e8._0_8_ = puVar39;
    if ((long *)uVar5 != (long *)0x0) {
      (**(code **)(*(long *)uVar5 + 8))();
    }
    if ((uStack_4c0 & 1) != 0) {
      func_0x0412a280(lStack_4b0,
                      CONCAT17(uStack_4b9,
                               CONCAT16(uStack_4ba,
                                        CONCAT15(uStack_4bb,CONCAT14(cStack_4bc,uStack_4c0)))) &
                      0xfffffffffffffffe);
    }
    uStack_4c0 = 0x6572701c;
    cStack_4bc = 100;
    uStack_4bb = 0x69;
    uStack_4ba = 99;
    uStack_4b9 = 0x61;
    cStack_4b8 = 0x74;
    uStack_4b7 = 0x657079745f65;
    uStack_4b1 = 0;
    if ((DAT_0f7558f0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7558f0), iVar36 != 0)) {
      func_0x0e543f50();
      func_0x0410844d(&DAT_0f7558f0);
    }
    auStack_558 = (undefined1  [4])uStack_36c;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e5452b0;
    puStack_510 = &UNK_0e5452c0;
    uStack_508 = 0;
    auStack_500._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(&pcStack_390,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_408 = pcStack_380;
    pcStack_400 = pcStack_378;
    pcStack_418 = pcStack_390;
    pcStack_410 = pcStack_388;
    func_0x0e545040(auStack_558,&pcStack_418,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e516a0f:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e516a0f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18U) = *(uint *)((long)plStack_548 + 0x18U) | 0x90000;
      }
    }
    pcStack_418 = pcStack_398;
    pcStack_410 = pcStack_390;
    pcStack_408 = pcStack_388;
    pcStack_400 = pcStack_380;
    pcStack_3f8 = pcStack_378;
    iStack_3f0 = iStack_370;
    uStack_3ec = uStack_36c;
    uStack_3e8 = CONCAT31(uStack_3e8._1_3_,(undefined1)uStack_368);
    func_0x048b0bc0(auStack_4e8);
    if ((DAT_0f7558f0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7558f0), iVar36 != 0)) {
      func_0x0e543f50();
      func_0x0410844d(&DAT_0f7558f0);
    }
    pcVar43 = pcStack_418;
    iStack_3f0 = 1;
    uStack_3ec = 0xeb0cbd62;
    if ((DAT_0f7558d0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7558d0), iVar36 != 0)) {
      func_0x0e543e40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
      func_0x0410844d(&DAT_0f7558d0);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755850 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e516af0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755850 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e516af0:
      auStack_4e8._0_8_ = &DAT_0f755850;
    }
    else {
      auStack_4e8._0_8_ = plVar44[2];
    }
    auStack_4e8._8_8_ = pcVar43 + 0x18;
    FUN_0ed621a0(auStack_4e8,uStack_3ec);
    auStack_4e8._0_2_ = 1;
    auStack_4e8._8_8_ = &pcStack_410;
    uStack_4d8 = uStack_3ec;
    iStack_4d0 = 0;
    iStack_4cc = 0;
    pcStack_4c8 = (code *)0x0;
    uStack_4c0 = 0;
    cStack_4bc = '\0';
    uStack_4bb = 0;
    uStack_4ba = 0;
    uStack_4b9 = 0;
    cStack_4b8 = '\0';
    uStack_4b7 = 0;
    uStack_4b1 = 0;
    lStack_4b0 = 0;
    auStack_4a8._0_7_ = 0x6b636f6c620a;
    lStack_490 = 0;
    lStack_488 = 0;
    lStack_480 = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    auStack_470 = (undefined1  [16])0x0;
    uStack_460 = 0x3f600000;
    FUN_048afb10(&lStack_490,8);
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_430 = 0;
    lStack_448 = 0;
    uStack_440 = 0;
    uStack_43e = 0;
    uStack_43c = 0;
    lStack_458 = 0;
    lStack_450 = 0;
    uStack_428 = 0xff00;
    uStack_424 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0f351458;
    plVar44 = (long *)CONCAT44(iStack_4cc,iStack_4d0);
    iStack_4d0 = (int)puVar39;
    iStack_4cc = (int)((ulong)puVar39 >> 0x20);
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))();
    }
    auStack_558 = (undefined1  [4])uStack_4d8;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)((ulong)plStack_548 & 0xffffffff00000000);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0c0fab90;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &SUB_0c0f51d0;
    puStack_518 = &UNK_0e545310;
    puStack_510 = &UNK_0e5454d0;
    uStack_508 = 0;
    auStack_500._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_4e8._8_8_,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    func_0x0e545040(auStack_558,auStack_4e8._8_8_,&iStack_4d0);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(plStack_548[0xf] + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e516daf:
      piVar46[4] = piVar46[4] | auStack_4e8._0_4_ << 0x10;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(plStack_548[0xf] + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e516daf;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)(plStack_548 + 3) = *(uint *)(plStack_548 + 3) | auStack_4e8._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&iStack_4d0);
  }
  if ((DAT_0f755988 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755988), iVar36 != 0)) {
    func_0x0e545760();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
    func_0x0410844d(&DAT_0f755988);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e516e20;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f755908 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e516e20:
    puVar38 = &DAT_0f755908;
    if (iRam000000000f755968 != -0x2b3da790) goto LAB_0e516e8d;
LAB_0e516e4b:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e516e8d;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    lVar45 = lVar51 + 9;
    if (bVar53) {
      lVar45 = *(long *)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
    func_0x0e545e00(&pcStack_3d8,param_1,lVar45,uVar49);
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e516e4b;
LAB_0e516e8d:
    func_0x0e545e00(&pcStack_3d8,param_1,&UNK_013a74d2,0x10);
  }
  if ((char)uStack_3a8 == '\0') {
    func_0x0c0bcb30(param_1);
    pcVar43 = pcStack_3d8;
    if ((DAT_0f755988 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755988), iVar36 != 0)) {
      func_0x0e545760();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
      func_0x0410844d(&DAT_0f755988);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e516f30;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755908 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e516f30:
      puVar38 = &DAT_0f755908;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    for (pbVar42 = *(byte **)(pcStack_3d8 + 0x50); pbVar42 != *(byte **)(pcStack_3d8 + 0x58);
        pbVar42 = pbVar42 + 0x38) {
      bVar2 = *pbVar42;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e51700a;
      }
      else if (*(long *)(pbVar42 + 8) == 0x1a) {
LAB_0e51700a:
        if ((bVar2 & 1) == 0) {
          pbVar48 = pbVar42 + 1;
        }
        else {
          pbVar48 = *(byte **)(pbVar42 + 0x10);
        }
        auVar57[0] = -(*pbVar48 == 0x5b);
        auVar57[1] = -(pbVar48[1] == 99);
        auVar57[2] = -(pbVar48[2] == 0x65);
        auVar57[3] = -(pbVar48[3] == 0x72);
        auVar57[4] = -(pbVar48[4] == 0x65);
        auVar57[5] = -(pbVar48[5] == 0x61);
        auVar57[6] = -(pbVar48[6] == 0x6c);
        auVar57[7] = -(pbVar48[7] == 0x3a);
        auVar57[8] = -(pbVar48[8] == 100);
        auVar57[9] = -(pbVar48[9] == 0x6f);
        auVar57[10] = -(pbVar48[10] == 99);
        auVar57[0xb] = -(pbVar48[0xb] == 0x75);
        auVar57[0xc] = -(pbVar48[0xc] == 0x6d);
        auVar57[0xd] = -(pbVar48[0xd] == 0x65);
        auVar57[0xe] = -(pbVar48[0xe] == 0x6e);
        auVar57[0xf] = -(pbVar48[0xf] == 0x74);
        auVar71[0] = -(pbVar48[10] == 99);
        auVar71[1] = -(pbVar48[0xb] == 0x75);
        auVar71[2] = -(pbVar48[0xc] == 0x6d);
        auVar71[3] = -(pbVar48[0xd] == 0x65);
        auVar71[4] = -(pbVar48[0xe] == 0x6e);
        auVar71[5] = -(pbVar48[0xf] == 0x74);
        auVar71[6] = -(pbVar48[0x10] == 0x61);
        auVar71[7] = -(pbVar48[0x11] == 0x74);
        auVar71[8] = -(pbVar48[0x12] == 0x69);
        auVar71[9] = -(pbVar48[0x13] == 0x6f);
        auVar71[10] = -(pbVar48[0x14] == 0x6e);
        auVar71[0xb] = -(pbVar48[0x15] == 0x5f);
        auVar71[0xc] = -(pbVar48[0x16] == 0x74);
        auVar71[0xd] = -(pbVar48[0x17] == 0x61);
        auVar71[0xe] = -(pbVar48[0x18] == 0x67);
        auVar71[0xf] = -(pbVar48[0x19] == 0x5d);
        auVar71 = auVar71 & auVar57;
        if ((ushort)((ushort)(SUB161(auVar71 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar71[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar42 == *(byte **)(pcStack_3d8 + 0x58)) {
LAB_0e517038:
      uVar34 = uStack_3ac;
      if (iStack_3b0 == 0) {
        if (((puVar38 == (undefined *)0x0) || (*(int *)(puVar38 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar38 + 0x68) == 0)) goto LAB_0e5170c2;
        lVar51 = *(long *)(puVar38 + 0x68) + 0x38;
      }
      else {
        if (puVar38 == (undefined *)0x0) {
          puVar38 = (undefined *)func_0x048aead0(pcVar43 + 0x18,0,uStack_3ac);
        }
        auStack_4e8._0_8_ = func_0x048b0c90(pcVar43 + 0x18,puVar38,uVar34,1);
        if (auStack_4e8._0_8_ == 0) {
          auStack_4e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4e8);
          if (auStack_4e8._0_8_ == 0) goto LAB_0e5170c2;
        }
        if ((*(int *)(auStack_4e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_4e8._0_8_ + 0x58) != 0)) {
          lVar51 = *(long *)(auStack_4e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e5170c2:
          lVar51 = 0;
        }
      }
      plStack_548 = (long *)&UNK_0488e0b0;
      uStack_540 = (code *)0x0;
      pcStack_538 = (code *)CONCAT35(pcStack_538._5_3_,0x48b5725f);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = plStack_550;
      _auStack_558 = auVar23 << 0x40;
      auStack_4e8 = (undefined1  [16])0x0;
      iStack_4d0 = 0x488e0b0;
      iStack_4cc = 0;
      pcStack_4c8 = (code *)0x0;
      uStack_4c0 = 0x48b5725f;
      cStack_4bc = '\0';
      pcVar43 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar43 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      pcStack_418 = (code *)0x21;
      pcStack_410 = (code *)0x1a;
      *(ulong *)(pcVar43 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar43 + 0x12) = uVar5;
      uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar43 = _DAT_013bbacd;
      *(undefined8 *)(pcVar43 + 8) = uVar5;
      pcVar43[0x1a] = (code)0x0;
      pcStack_408 = pcVar43;
      lVar51 = func_0x048b5060(lVar51,&pcStack_418);
      *(undefined8 *)(lVar51 + 0x20) = 0;
      if ((undefined1 *)(lVar51 + 0x20) == auStack_4e8) {
        pcVar43 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar51 + 0x40) != (code *)0x0) {
          puVar39 = (undefined8 *)(lVar51 + 0x28);
          (**(code **)(lVar51 + 0x40))(puVar39);
          if (cStack_4bc != '\0') {
            if (cStack_4bc == '\x02') {
              (*(code *)CONCAT44(iStack_4cc,iStack_4d0))(5,auStack_4e8 + 8,puVar39);
            }
            else {
              uVar5 = auStack_4e8._8_8_;
              auStack_4e8._8_8_ = 0;
              *puVar39 = uVar5;
            }
          }
        }
        *(ulong *)(lVar51 + 0x38) = CONCAT44(iStack_4cc,iStack_4d0);
        *(code **)(lVar51 + 0x40) = pcStack_4c8;
        *(uint *)(lVar51 + 0x48) = uStack_4c0;
        *(char *)(lVar51 + 0x4c) = cStack_4bc;
        pcVar43 = pcStack_4c8;
      }
      if (((ulong)pcStack_418 & 1) != 0) {
        func_0x0412a280(pcStack_408,(ulong)pcStack_418 & 0xfffffffffffffffe);
        pcVar43 = pcStack_4c8;
      }
      if (pcVar43 != (code *)0x0) {
        (*pcVar43)(auStack_4e8 + 8);
      }
      if (uStack_540 != (code *)0x0) {
        (*uStack_540)(auStack_558);
      }
    }
    else {
      iVar36 = *(int *)(pbVar42 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar37 = FUN_04108328(&DAT_0f550ad8), iVar37 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar36 == _DAT_0f550ac4) goto LAB_0e517038;
    }
    uStack_264 = uStack_3a4;
    pcStack_278 = pcStack_3b8;
    iStack_270 = iStack_3b0;
    uStack_26c = uStack_3ac;
    pcStack_288 = pcStack_3c8;
    pcStack_280 = pcStack_3c0;
    pcStack_298 = pcStack_3d8;
    pcStack_290 = pcStack_3d0;
    pcStack_2f8 = pcStack_3b8;
    bStack_318 = (byte)pcStack_3d8;
    uStack_317 = (undefined7)((ulong)pcStack_3d8 >> 8);
    uStack_310 = SUB81(pcStack_3d0,0);
    uStack_30f = (undefined5)((ulong)pcStack_3d0 >> 8);
    uStack_30a = (undefined2)((ulong)pcStack_3d0 >> 0x30);
    uStack_308 = SUB81(pcStack_3c8,0);
    uStack_307 = (undefined5)((ulong)pcStack_3c8 >> 8);
    uStack_302 = (undefined1)((ulong)pcStack_3c8 >> 0x30);
    uStack_301 = (undefined1)((ulong)pcStack_3c8 >> 0x38);
    pcStack_300 = pcStack_3c0;
    uStack_2e8 = uStack_3a8;
    uStack_2e4 = uStack_3a4;
    iStack_2f0 = 2;
    uStack_2ec = 0x5c17b12b;
    lStack_488 = 0;
    lStack_480 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    auStack_4a8 = (undefined1  [16])0x0;
    cStack_4b8 = 0;
    uStack_4b7 = 0;
    uStack_4b1 = 0;
    lStack_4b0 = 0;
    pcStack_4c8 = (code *)0x0;
    uStack_4c0 = 0;
    cStack_4bc = 0;
    uStack_4bb = 0;
    uStack_4ba = 0;
    uStack_4b9 = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    iStack_4d0 = 0;
    iStack_4cc = 0;
    auStack_4e8 = (undefined1  [16])0x0;
    uStack_478 = 0x3f600000;
    FUN_048afb10(auStack_4a8,8);
    lStack_450 = 0;
    lStack_448 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    lStack_458 = 0;
    auStack_470 = (undefined1  [16])0x0;
    uStack_440 = 0xff00;
    uStack_43c = uStack_43c & 0xffffff00;
    uStack_438 = uStack_438 & 0xffffff00;
    uStack_434 = uStack_434 & 0xffffff00;
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0f4bd598;
    uVar5 = auStack_4e8._0_8_;
    auStack_4e8._0_8_ = puVar39;
    if ((long *)uVar5 != (long *)0x0) {
      (**(code **)(*(long *)uVar5 + 8))();
    }
    if ((uStack_4c0 & 1) != 0) {
      func_0x0412a280(lStack_4b0,
                      CONCAT17(uStack_4b9,
                               CONCAT16(uStack_4ba,
                                        CONCAT15(uStack_4bb,CONCAT14(cStack_4bc,uStack_4c0)))) &
                      0xfffffffffffffffe);
    }
    uStack_4c0 = 0x6572701c;
    cStack_4bc = 'd';
    uStack_4bb = 0x69;
    uStack_4ba = 99;
    uStack_4b9 = 0x61;
    cStack_4b8 = 't';
    uStack_4b7 = 0x657079745f65;
    uStack_4b1 = 0;
    if ((DAT_0f7559a8 == '\0') && (iVar36 = FUN_04108328(&DAT_0f7559a8), iVar36 != 0)) {
      func_0x0e545870();
      func_0x0410844d(&DAT_0f7559a8);
    }
    auStack_558 = (undefined1  [4])uStack_2ec;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e546bd0;
    puStack_510 = &UNK_0e546be0;
    uStack_508 = 0;
    auStack_500._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(&uStack_310,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_418 = (code *)CONCAT26(uStack_30a,CONCAT51(uStack_30f,uStack_310));
    pcStack_410 = (code *)CONCAT17(uStack_301,CONCAT16(uStack_302,CONCAT51(uStack_307,uStack_308)));
    pcStack_408 = pcStack_300;
    pcStack_400 = pcStack_2f8;
    func_0x0e546960(auStack_558,&pcStack_418,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e5175cf:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e5175cf;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18U) = *(uint *)((long)plStack_548 + 0x18U) | 0x90000;
      }
    }
    bStack_358 = bStack_318;
    uStack_357 = uStack_317;
    uStack_350 = uStack_310;
    uStack_34f = uStack_30f;
    uStack_34a = uStack_30a;
    uStack_348 = uStack_308;
    uStack_347 = uStack_307;
    uStack_342 = uStack_302;
    uStack_341 = uStack_301;
    uStack_340 = pcStack_300;
    pcStack_338 = pcStack_2f8;
    iStack_330 = iStack_2f0;
    uStack_32c = uStack_2ec;
    uStack_328 = CONCAT31(uStack_328._1_3_,(char)uStack_2e8);
    func_0x048b0bc0(auStack_4e8);
    func_0x0e546c30(auStack_4e8,&bStack_358,&UNK_01447599,5);
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0f351458;
    plVar44 = (long *)CONCAT44(iStack_4cc,iStack_4d0);
    iStack_4d0 = (int)puVar39;
    iStack_4cc = (int)((ulong)puVar39 >> 0x20);
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))();
    }
    auStack_558 = (undefined1  [4])uStack_4d8;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)((ulong)plStack_548 & 0xffffffff00000000);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0c0fab90;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &SUB_0c0f51d0;
    puStack_518 = &UNK_0e546fb0;
    puStack_510 = &UNK_0e547170;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_4e8._8_8_,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    func_0x0e546ee0(auStack_4e8);
    uStack_368 = CONCAT31(uStack_368._1_3_,(undefined1)uStack_328);
    pcStack_398 = (code *)CONCAT71(uStack_357,bStack_358);
    pcStack_390 = (code *)CONCAT26(uStack_34a,CONCAT51(uStack_34f,uStack_350));
    pcStack_388 = (code *)CONCAT17(uStack_341,CONCAT16(uStack_342,CONCAT51(uStack_347,uStack_348)));
    pcStack_378 = pcStack_338;
    iStack_370 = iStack_330;
    uStack_36c = uStack_32c;
    pcStack_380 = uStack_340;
    func_0x048b0bc0(&iStack_4d0);
    pcStack_418 = pcStack_398;
    pcStack_410 = pcStack_390;
    pcStack_408 = pcStack_388;
    pcStack_400 = pcStack_380;
    pcStack_3f8 = pcStack_378;
    iStack_3f0 = iStack_370;
    uStack_3ec = uStack_36c;
    uStack_3e8 = uStack_368;
    uStack_3e4 = uStack_364;
    func_0x0e546c30(auStack_4e8,&pcStack_418,&UNK_013fcdf9,0xb);
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0f0126a0;
    plVar44 = (long *)CONCAT44(iStack_4cc,iStack_4d0);
    iStack_4d0 = (int)puVar39;
    iStack_4cc = (int)((ulong)puVar39 >> 0x20);
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))();
    }
    auStack_558 = (undefined1  [4])uStack_4d8;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)((ulong)plStack_548 & 0xffffffff00000000);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_05daeda0;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &SUB_05daea90;
    puStack_518 = &UNK_0e547340;
    puStack_510 = &UNK_0e5474a0;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_4e8._8_8_,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    func_0x0e546ee0(auStack_4e8);
    uVar34 = uStack_3ec;
    iVar36 = iStack_3f0;
    pcVar43 = pcStack_418;
    func_0x048b0bc0(&iStack_4d0);
    auVar31._10_6_ = 0;
    auVar31._0_10_ = _auStack_552;
    _auStack_558 = auVar31 << 0x30;
    if (iVar36 == 4) {
      if ((DAT_0f755988 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755988), iVar36 != 0)) {
        func_0x0e545760();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
        func_0x0410844d(&DAT_0f755988);
      }
      plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
      do {
        lVar51 = *plVar44;
        if (lVar51 == -1) goto LAB_0e517a18;
        plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
      } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
               *(uint *)(_DAT_0f755908 + 4));
      if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e517a18:
        puVar38 = &DAT_0f755908;
      }
      else {
        puVar38 = (undefined *)plVar44[2];
      }
      lVar51 = FUN_048b1040(pcVar43 + 0x18,puVar38,uVar34,1);
      if (lVar51 == 0) {
        auStack_4e8 = ZEXT816(0);
        func_0x048b10d0(auStack_4e8);
        lVar45 = *(long *)(auStack_4e8._0_8_ + 0x38);
        lVar51 = auStack_4e8._0_8_;
        if (lVar45 == 0) goto LAB_0e517b35;
LAB_0e517b51:
        do {
          lVar51 = lVar45;
          lVar45 = *(long *)(lVar51 + 0x38);
          if (*(long *)(lVar51 + 0x38) == 0) {
            auStack_4e8 = ZEXT816(0);
            func_0x048b10d0(auStack_4e8);
            lVar45 = auStack_4e8._0_8_;
          }
        } while (lVar45 != 0);
      }
      else {
        lVar45 = *(long *)(lVar51 + 0x38);
        if (*(long *)(lVar51 + 0x38) != 0) goto LAB_0e517b51;
LAB_0e517b35:
        auStack_4e8 = ZEXT816(0);
        func_0x048b10d0(auStack_4e8);
        lVar45 = auStack_4e8._0_8_;
        if (auStack_4e8._0_8_ != 0) goto LAB_0e517b51;
      }
      lVar51 = *(long *)(lVar51 + 0x48);
      puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar39 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar36 != 1) goto LAB_0e517c0f;
      if ((DAT_0f755988 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755988), iVar36 != 0)) {
        func_0x0e545760();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
        func_0x0410844d(&DAT_0f755988);
      }
      plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
      do {
        lVar51 = *plVar44;
        if (lVar51 == -1) goto LAB_0e517998;
        plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
      } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
               *(uint *)(_DAT_0f755908 + 4));
      if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e517998:
        puVar38 = &DAT_0f755908;
      }
      else {
        puVar38 = (undefined *)plVar44[2];
      }
      lVar51 = func_0x048b0c90(pcVar43 + 0x18,puVar38,uVar34,1);
      if (lVar51 == 0) {
        auStack_4e8 = ZEXT816(0);
        func_0x048b0d20(auStack_4e8);
        lVar51 = auStack_4e8._0_8_;
      }
      lVar51 = *(long *)(lVar51 + 0x58);
      puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar39 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar39[1] = 0xffffffffffffffff;
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 0xff;
    *puVar39 = &UNK_0f0edc68;
    uVar5 = _DAT_014f0478;
    puVar39[4] = 0;
    puVar39[5] = uVar5;
    puVar39[6] = 0;
    *(undefined2 *)(puVar39 + 7) = 0;
    *(undefined1 (*) [4])((long)puVar39 + 0x3a) = auStack_558;
    *(undefined2 *)((long)puVar39 + 0x3e) = uStack_554;
    plVar44 = *(long **)(lVar51 + 8);
    *(undefined8 **)(lVar51 + 8) = puVar39;
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 0x28))();
    }
  }
LAB_0e517c0f:
  if ((DAT_0f755a40 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755a40), iVar36 != 0)) {
    func_0x0e547740();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
    func_0x0410844d(&DAT_0f755a40);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7559c0 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e517c70;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f7559c0 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e517c70:
    puVar38 = &DAT_0f7559c0;
    if (iRam000000000f755a20 != -0x2b3da790) goto LAB_0e517cdd;
LAB_0e517c9b:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e517cdd;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    lVar45 = lVar51 + 9;
    if (bVar53) {
      lVar45 = *(long *)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
    func_0x0e547de0(&pcStack_3d8,param_1,lVar45,uVar49);
    pcVar43 = pcStack_3d8;
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e517c9b;
LAB_0e517cdd:
    func_0x0e547de0(&pcStack_3d8,param_1,&UNK_014a96ff,8);
    pcVar43 = pcStack_3d8;
  }
  pcStack_3d8 = pcVar43;
  if ((char)uStack_3a8 == '\0') {
    if ((DAT_0f755a40 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755a40), iVar36 != 0)) {
      func_0x0e547740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
      func_0x0410844d(&DAT_0f755a40);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7559c0 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e517d70;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f7559c0 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e517d70:
      puVar38 = &DAT_0f7559c0;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    for (pbVar42 = *(byte **)(pcStack_3d8 + 0x50); pbVar42 != *(byte **)(pcStack_3d8 + 0x58);
        pbVar42 = pbVar42 + 0x38) {
      bVar2 = *pbVar42;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e517e4a;
      }
      else if (*(long *)(pbVar42 + 8) == 0x1a) {
LAB_0e517e4a:
        if ((bVar2 & 1) == 0) {
          pbVar48 = pbVar42 + 1;
        }
        else {
          pbVar48 = *(byte **)(pbVar42 + 0x10);
        }
        auVar58[0] = -(*pbVar48 == 0x5b);
        auVar58[1] = -(pbVar48[1] == 99);
        auVar58[2] = -(pbVar48[2] == 0x65);
        auVar58[3] = -(pbVar48[3] == 0x72);
        auVar58[4] = -(pbVar48[4] == 0x65);
        auVar58[5] = -(pbVar48[5] == 0x61);
        auVar58[6] = -(pbVar48[6] == 0x6c);
        auVar58[7] = -(pbVar48[7] == 0x3a);
        auVar58[8] = -(pbVar48[8] == 100);
        auVar58[9] = -(pbVar48[9] == 0x6f);
        auVar58[10] = -(pbVar48[10] == 99);
        auVar58[0xb] = -(pbVar48[0xb] == 0x75);
        auVar58[0xc] = -(pbVar48[0xc] == 0x6d);
        auVar58[0xd] = -(pbVar48[0xd] == 0x65);
        auVar58[0xe] = -(pbVar48[0xe] == 0x6e);
        auVar58[0xf] = -(pbVar48[0xf] == 0x74);
        auVar72[0] = -(pbVar48[10] == 99);
        auVar72[1] = -(pbVar48[0xb] == 0x75);
        auVar72[2] = -(pbVar48[0xc] == 0x6d);
        auVar72[3] = -(pbVar48[0xd] == 0x65);
        auVar72[4] = -(pbVar48[0xe] == 0x6e);
        auVar72[5] = -(pbVar48[0xf] == 0x74);
        auVar72[6] = -(pbVar48[0x10] == 0x61);
        auVar72[7] = -(pbVar48[0x11] == 0x74);
        auVar72[8] = -(pbVar48[0x12] == 0x69);
        auVar72[9] = -(pbVar48[0x13] == 0x6f);
        auVar72[10] = -(pbVar48[0x14] == 0x6e);
        auVar72[0xb] = -(pbVar48[0x15] == 0x5f);
        auVar72[0xc] = -(pbVar48[0x16] == 0x74);
        auVar72[0xd] = -(pbVar48[0x17] == 0x61);
        auVar72[0xe] = -(pbVar48[0x18] == 0x67);
        auVar72[0xf] = -(pbVar48[0x19] == 0x5d);
        auVar72 = auVar72 & auVar58;
        if ((ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar72[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar42 == *(byte **)(pcStack_3d8 + 0x58)) {
LAB_0e517e78:
      uVar34 = uStack_3ac;
      if (iStack_3b0 == 0) {
        if (((puVar38 == (undefined *)0x0) || (*(int *)(puVar38 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar38 + 0x68) == 0)) goto LAB_0e517f00;
        lVar51 = *(long *)(puVar38 + 0x68) + 0x38;
      }
      else {
        if (puVar38 == (undefined *)0x0) {
          puVar38 = (undefined *)func_0x048aead0(pcVar43 + 0x18);
        }
        auStack_4e8._0_8_ = func_0x048b0c90(pcVar43 + 0x18,puVar38,uVar34,1);
        if (auStack_4e8._0_8_ == 0) {
          auStack_4e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4e8);
          if (auStack_4e8._0_8_ == 0) goto LAB_0e517f00;
        }
        if ((*(int *)(auStack_4e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_4e8._0_8_ + 0x58) != 0)) {
          lVar51 = *(long *)(auStack_4e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e517f00:
          lVar51 = 0;
        }
      }
      plStack_548 = (long *)&UNK_0488e0b0;
      uStack_540 = (code *)0x0;
      pcStack_538 = (code *)CONCAT35(pcStack_538._5_3_,0x48b5725f);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = plStack_550;
      _auStack_558 = auVar24 << 0x40;
      auStack_4e8 = (undefined1  [16])0x0;
      iStack_4d0 = 0x488e0b0;
      iStack_4cc = 0;
      pcStack_4c8 = (code *)0x0;
      uStack_4c0 = 0x48b5725f;
      cStack_4bc = '\0';
      pcVar43 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar43 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      pcStack_418 = (code *)0x21;
      pcStack_410 = (code *)0x1a;
      *(ulong *)(pcVar43 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar43 + 0x12) = uVar5;
      uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar43 = _DAT_013bbacd;
      *(undefined8 *)(pcVar43 + 8) = uVar5;
      pcVar43[0x1a] = (code)0x0;
      pcStack_408 = pcVar43;
      lVar51 = func_0x048b5060(lVar51,&pcStack_418);
      *(undefined8 *)(lVar51 + 0x20) = 0;
      if ((undefined1 *)(lVar51 + 0x20) == auStack_4e8) {
        pcVar43 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar51 + 0x40) != (code *)0x0) {
          puVar39 = (undefined8 *)(lVar51 + 0x28);
          (**(code **)(lVar51 + 0x40))(puVar39);
          if (cStack_4bc != '\0') {
            if (cStack_4bc == '\x02') {
              (*(code *)CONCAT44(iStack_4cc,iStack_4d0))(5,auStack_4e8 + 8,puVar39);
            }
            else {
              uVar5 = auStack_4e8._8_8_;
              auStack_4e8._8_8_ = 0;
              *puVar39 = uVar5;
            }
          }
        }
        *(ulong *)(lVar51 + 0x38) = CONCAT44(iStack_4cc,iStack_4d0);
        *(code **)(lVar51 + 0x40) = pcStack_4c8;
        *(uint *)(lVar51 + 0x48) = uStack_4c0;
        *(char *)(lVar51 + 0x4c) = cStack_4bc;
        pcVar43 = pcStack_4c8;
      }
      if (((ulong)pcStack_418 & 1) != 0) {
        func_0x0412a280(pcStack_408,(ulong)pcStack_418 & 0xfffffffffffffffe);
        pcVar43 = pcStack_4c8;
      }
      if (pcVar43 != (code *)0x0) {
        (*pcVar43)(auStack_4e8 + 8);
      }
      if (uStack_540 != (code *)0x0) {
        (*uStack_540)(auStack_558);
      }
    }
    else {
      iVar36 = *(int *)(pbVar42 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar37 = FUN_04108328(&DAT_0f550ad8), iVar37 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar36 == _DAT_0f550ac4) goto LAB_0e517e78;
    }
    uStack_328 = uStack_3a8;
    uStack_324 = uStack_3a4;
    pcStack_338 = pcStack_3b8;
    iStack_330 = iStack_3b0;
    uStack_32c = uStack_3ac;
    uStack_348 = SUB81(pcStack_3c8,0);
    uStack_347 = (undefined5)((ulong)pcStack_3c8 >> 8);
    uStack_342 = (undefined1)((ulong)pcStack_3c8 >> 0x30);
    uStack_341 = (undefined1)((ulong)pcStack_3c8 >> 0x38);
    uStack_340 = pcStack_3c0;
    bStack_358 = (byte)pcStack_3d8;
    uStack_357 = (undefined7)((ulong)pcStack_3d8 >> 8);
    uStack_350 = SUB81(pcStack_3d0,0);
    uStack_34f = (undefined5)((ulong)pcStack_3d0 >> 8);
    uStack_34a = (undefined2)((ulong)pcStack_3d0 >> 0x30);
    pcStack_378 = pcStack_3b8;
    pcStack_398 = pcStack_3d8;
    pcStack_390 = pcStack_3d0;
    pcStack_388 = pcStack_3c8;
    pcStack_380 = pcStack_3c0;
    uStack_368 = uStack_3a8;
    uStack_364 = uStack_3a4;
    iStack_370 = 2;
    uStack_36c = 0x5c17b12b;
    lStack_488 = 0;
    lStack_480 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    auStack_4a8 = (undefined1  [16])0x0;
    cStack_4b8 = 0;
    uStack_4b7 = 0;
    uStack_4b1 = 0;
    lStack_4b0 = 0;
    pcStack_4c8 = (code *)0x0;
    uStack_4c0 = 0;
    cStack_4bc = 0;
    uStack_4bb = 0;
    uStack_4ba = 0;
    uStack_4b9 = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    iStack_4d0 = 0;
    iStack_4cc = 0;
    auStack_4e8 = (undefined1  [16])0x0;
    uStack_478 = 0x3f600000;
    FUN_048afb10(auStack_4a8,8);
    lStack_450 = 0;
    lStack_448 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    lStack_458 = 0;
    auStack_470 = (undefined1  [16])0x0;
    uStack_440 = 0xff00;
    uStack_43c = uStack_43c & 0xffffff00;
    uStack_438 = uStack_438 & 0xffffff00;
    uStack_434 = uStack_434 & 0xffffff00;
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0f4bd598;
    uVar5 = auStack_4e8._0_8_;
    auStack_4e8._0_8_ = puVar39;
    if ((long *)uVar5 != (long *)0x0) {
      (**(code **)(*(long *)uVar5 + 8))();
    }
    if ((uStack_4c0 & 1) != 0) {
      func_0x0412a280(lStack_4b0,
                      CONCAT17(uStack_4b9,
                               CONCAT16(uStack_4ba,
                                        CONCAT15(uStack_4bb,CONCAT14(cStack_4bc,uStack_4c0)))) &
                      0xfffffffffffffffe);
    }
    uStack_4c0 = 0x6572701c;
    cStack_4bc = 100;
    uStack_4bb = 0x69;
    uStack_4ba = 99;
    uStack_4b9 = 0x61;
    cStack_4b8 = 0x74;
    uStack_4b7 = 0x657079745f65;
    uStack_4b1 = 0;
    if ((DAT_0f755a60 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755a60), iVar36 != 0)) {
      func_0x0e547850();
      func_0x0410844d(&DAT_0f755a60);
    }
    auStack_558 = (undefined1  [4])uStack_36c;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e548bb0;
    puStack_510 = &UNK_0e548bc0;
    uStack_508 = 0;
    auStack_500._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(&pcStack_390,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_408 = pcStack_380;
    pcStack_400 = pcStack_378;
    pcStack_418 = pcStack_390;
    pcStack_410 = pcStack_388;
    func_0x0e548940(auStack_558,&pcStack_418,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e5183bf:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e5183bf;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18U) = *(uint *)((long)plStack_548 + 0x18U) | 0x90000;
      }
    }
    pcStack_418 = pcStack_398;
    pcStack_410 = pcStack_390;
    pcStack_408 = pcStack_388;
    pcStack_400 = pcStack_380;
    pcStack_3f8 = pcStack_378;
    iStack_3f0 = iStack_370;
    uStack_3ec = uStack_36c;
    uStack_3e8 = CONCAT31(uStack_3e8._1_3_,(undefined1)uStack_368);
    func_0x048b0bc0(auStack_4e8);
    if ((DAT_0f755a60 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755a60), iVar36 != 0)) {
      func_0x0e547850();
      func_0x0410844d(&DAT_0f755a60);
    }
    pcVar43 = pcStack_418;
    iStack_3f0 = 1;
    uStack_3ec = 0x95f72993;
    if ((DAT_0f755a40 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755a40), iVar36 != 0)) {
      func_0x0e547740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
      func_0x0410844d(&DAT_0f755a40);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7559c0 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e5184a0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f7559c0 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e5184a0:
      auStack_4e8._0_8_ = &DAT_0f7559c0;
    }
    else {
      auStack_4e8._0_8_ = plVar44[2];
    }
    auStack_4e8._8_8_ = pcVar43 + 0x18;
    FUN_0ed621a0(auStack_4e8,uStack_3ec);
    auStack_4e8._0_2_ = 1;
    auStack_4e8._8_8_ = &pcStack_410;
    uStack_4d8 = uStack_3ec;
    iStack_4d0 = 0;
    iStack_4cc = 0;
    pcStack_4c8 = (code *)0x0;
    uStack_4c0 = 0;
    cStack_4bc = '\0';
    uStack_4bb = 0;
    uStack_4ba = 0;
    uStack_4b9 = 0;
    cStack_4b8 = '\0';
    uStack_4b7 = 0;
    uStack_4b1 = 0;
    lStack_4b0 = 0;
    auStack_4a8._0_5_ = 0x67617406;
    lStack_490 = 0;
    lStack_488 = 0;
    lStack_480 = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    auStack_470 = ZEXT816(0);
    uStack_460 = 0x3f600000;
    FUN_048afb10(&lStack_490,8);
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_430 = 0;
    lStack_448 = 0;
    uStack_440 = 0;
    uStack_43e = 0;
    uStack_43c = 0;
    lStack_458 = 0;
    lStack_450 = 0;
    uStack_428 = 0xff00;
    uStack_424 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0ef44b00;
    plVar44 = (long *)CONCAT44(iStack_4cc,iStack_4d0);
    iStack_4d0 = (int)puVar39;
    iStack_4cc = (int)((ulong)puVar39 >> 0x20);
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))();
    }
    auStack_558 = (undefined1  [4])uStack_4d8;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)((ulong)plStack_548 & 0xffffffff00000000);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_048b3f30;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &SUB_048b2190;
    puStack_518 = &UNK_0e548c10;
    puStack_510 = &UNK_0e548dd0;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_4e8._8_8_,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    func_0x0e548940(auStack_558,auStack_4e8._8_8_,&iStack_4d0);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(plStack_548[0xf] + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e51874f:
      piVar46[4] = piVar46[4] | auStack_4e8._0_4_ << 0x10;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(plStack_548[0xf] + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e51874f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)(plStack_548 + 3) = *(uint *)(plStack_548 + 3) | auStack_4e8._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&iStack_4d0);
  }
  if ((DAT_0f755af8 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755af8), iVar36 != 0)) {
    func_0x0e549060();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
    func_0x0410844d(&DAT_0f755af8);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755a78 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e5187c0;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f755a78 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e5187c0:
    puVar38 = &DAT_0f755a78;
    if (iRam000000000f755ad8 != -0x2b3da790) goto LAB_0e51882d;
LAB_0e5187eb:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e51882d;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    lVar45 = lVar51 + 9;
    if (bVar53) {
      lVar45 = *(long *)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
    func_0x0e549850(&pcStack_3d8,param_1,lVar45,uVar49);
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e5187eb;
LAB_0e51882d:
    func_0x0e549850(&pcStack_3d8,param_1,&UNK_013a74e3,0xf);
  }
  if ((char)uStack_3a8 == '\0') {
    func_0x0e97e540(param_1);
    pcVar43 = pcStack_3d8;
    if ((DAT_0f755af8 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755af8), iVar36 != 0)) {
      func_0x0e549060();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
      func_0x0410844d(&DAT_0f755af8);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755a78 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e5188d0;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755a78 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e5188d0:
      puVar38 = &DAT_0f755a78;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    for (pbVar42 = *(byte **)(pcStack_3d8 + 0x50); pbVar42 != *(byte **)(pcStack_3d8 + 0x58);
        pbVar42 = pbVar42 + 0x38) {
      bVar2 = *pbVar42;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e5189aa;
      }
      else if (*(long *)(pbVar42 + 8) == 0x1a) {
LAB_0e5189aa:
        if ((bVar2 & 1) == 0) {
          pbVar48 = pbVar42 + 1;
        }
        else {
          pbVar48 = *(byte **)(pbVar42 + 0x10);
        }
        auVar59[0] = -(*pbVar48 == 0x5b);
        auVar59[1] = -(pbVar48[1] == 99);
        auVar59[2] = -(pbVar48[2] == 0x65);
        auVar59[3] = -(pbVar48[3] == 0x72);
        auVar59[4] = -(pbVar48[4] == 0x65);
        auVar59[5] = -(pbVar48[5] == 0x61);
        auVar59[6] = -(pbVar48[6] == 0x6c);
        auVar59[7] = -(pbVar48[7] == 0x3a);
        auVar59[8] = -(pbVar48[8] == 100);
        auVar59[9] = -(pbVar48[9] == 0x6f);
        auVar59[10] = -(pbVar48[10] == 99);
        auVar59[0xb] = -(pbVar48[0xb] == 0x75);
        auVar59[0xc] = -(pbVar48[0xc] == 0x6d);
        auVar59[0xd] = -(pbVar48[0xd] == 0x65);
        auVar59[0xe] = -(pbVar48[0xe] == 0x6e);
        auVar59[0xf] = -(pbVar48[0xf] == 0x74);
        auVar73[0] = -(pbVar48[10] == 99);
        auVar73[1] = -(pbVar48[0xb] == 0x75);
        auVar73[2] = -(pbVar48[0xc] == 0x6d);
        auVar73[3] = -(pbVar48[0xd] == 0x65);
        auVar73[4] = -(pbVar48[0xe] == 0x6e);
        auVar73[5] = -(pbVar48[0xf] == 0x74);
        auVar73[6] = -(pbVar48[0x10] == 0x61);
        auVar73[7] = -(pbVar48[0x11] == 0x74);
        auVar73[8] = -(pbVar48[0x12] == 0x69);
        auVar73[9] = -(pbVar48[0x13] == 0x6f);
        auVar73[10] = -(pbVar48[0x14] == 0x6e);
        auVar73[0xb] = -(pbVar48[0x15] == 0x5f);
        auVar73[0xc] = -(pbVar48[0x16] == 0x74);
        auVar73[0xd] = -(pbVar48[0x17] == 0x61);
        auVar73[0xe] = -(pbVar48[0x18] == 0x67);
        auVar73[0xf] = -(pbVar48[0x19] == 0x5d);
        auVar73 = auVar73 & auVar59;
        if ((ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar73[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar42 == *(byte **)(pcStack_3d8 + 0x58)) {
LAB_0e5189d8:
      uVar34 = uStack_3ac;
      if (iStack_3b0 == 0) {
        if (((puVar38 == (undefined *)0x0) || (*(int *)(puVar38 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar38 + 0x68) == 0)) goto LAB_0e518a60;
        lVar51 = *(long *)(puVar38 + 0x68) + 0x38;
      }
      else {
        if (puVar38 == (undefined *)0x0) {
          puVar38 = (undefined *)func_0x048aead0(pcVar43 + 0x18);
        }
        auStack_4e8._0_8_ = func_0x048b0c90(pcVar43 + 0x18,puVar38,uVar34,1);
        if (auStack_4e8._0_8_ == 0) {
          auStack_4e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4e8);
          if (auStack_4e8._0_8_ == 0) goto LAB_0e518a60;
        }
        if ((*(int *)(auStack_4e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_4e8._0_8_ + 0x58) != 0)) {
          lVar51 = *(long *)(auStack_4e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e518a60:
          lVar51 = 0;
        }
      }
      plStack_548 = (long *)&UNK_0488e0b0;
      uStack_540 = (code *)0x0;
      pcStack_538 = (code *)CONCAT35(pcStack_538._5_3_,0x48b5725f);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = plStack_550;
      _auStack_558 = auVar25 << 0x40;
      auStack_4e8 = (undefined1  [16])0x0;
      iStack_4d0 = 0x488e0b0;
      iStack_4cc = 0;
      pcStack_4c8 = (code *)0x0;
      uStack_4c0 = 0x48b5725f;
      cStack_4bc = '\0';
      pcVar43 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar43 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      pcStack_418 = (code *)0x21;
      pcStack_410 = (code *)0x1a;
      *(ulong *)(pcVar43 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar43 + 0x12) = uVar5;
      uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar43 = _DAT_013bbacd;
      *(undefined8 *)(pcVar43 + 8) = uVar5;
      pcVar43[0x1a] = (code)0x0;
      pcStack_408 = pcVar43;
      lVar51 = func_0x048b5060(lVar51,&pcStack_418);
      *(undefined8 *)(lVar51 + 0x20) = 0;
      if ((undefined1 *)(lVar51 + 0x20) == auStack_4e8) {
        pcVar43 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar51 + 0x40) != (code *)0x0) {
          puVar39 = (undefined8 *)(lVar51 + 0x28);
          (**(code **)(lVar51 + 0x40))(puVar39);
          if (cStack_4bc != '\0') {
            if (cStack_4bc == '\x02') {
              (*(code *)CONCAT44(iStack_4cc,iStack_4d0))(5,auStack_4e8 + 8,puVar39);
            }
            else {
              uVar5 = auStack_4e8._8_8_;
              auStack_4e8._8_8_ = 0;
              *puVar39 = uVar5;
            }
          }
        }
        *(ulong *)(lVar51 + 0x38) = CONCAT44(iStack_4cc,iStack_4d0);
        *(code **)(lVar51 + 0x40) = pcStack_4c8;
        *(uint *)(lVar51 + 0x48) = uStack_4c0;
        *(char *)(lVar51 + 0x4c) = cStack_4bc;
        pcVar43 = pcStack_4c8;
      }
      if (((ulong)pcStack_418 & 1) != 0) {
        func_0x0412a280(pcStack_408,(ulong)pcStack_418 & 0xfffffffffffffffe);
        pcVar43 = pcStack_4c8;
      }
      if (pcVar43 != (code *)0x0) {
        (*pcVar43)(auStack_4e8 + 8);
      }
      if (uStack_540 != (code *)0x0) {
        (*uStack_540)(auStack_558);
      }
    }
    else {
      iVar36 = *(int *)(pbVar42 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar37 = FUN_04108328(&DAT_0f550ad8), iVar37 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar36 == _DAT_0f550ac4) goto LAB_0e5189d8;
    }
    uStack_328 = uStack_3a8;
    uStack_324 = uStack_3a4;
    pcStack_338 = pcStack_3b8;
    iStack_330 = iStack_3b0;
    uStack_32c = uStack_3ac;
    uStack_348 = SUB81(pcStack_3c8,0);
    uStack_347 = (undefined5)((ulong)pcStack_3c8 >> 8);
    uStack_342 = (undefined1)((ulong)pcStack_3c8 >> 0x30);
    uStack_341 = (undefined1)((ulong)pcStack_3c8 >> 0x38);
    uStack_340 = pcStack_3c0;
    bStack_358 = (byte)pcStack_3d8;
    uStack_357 = (undefined7)((ulong)pcStack_3d8 >> 8);
    uStack_350 = SUB81(pcStack_3d0,0);
    uStack_34f = (undefined5)((ulong)pcStack_3d0 >> 8);
    uStack_34a = (undefined2)((ulong)pcStack_3d0 >> 0x30);
    pcStack_378 = pcStack_3b8;
    pcStack_398 = pcStack_3d8;
    pcStack_390 = pcStack_3d0;
    pcStack_388 = pcStack_3c8;
    pcStack_380 = pcStack_3c0;
    uStack_368 = uStack_3a8;
    uStack_364 = uStack_3a4;
    iStack_370 = 2;
    uStack_36c = 0x5c17b12b;
    lStack_488 = 0;
    lStack_480 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    auStack_4a8 = (undefined1  [16])0x0;
    cStack_4b8 = 0;
    uStack_4b7 = 0;
    uStack_4b1 = 0;
    lStack_4b0 = 0;
    pcStack_4c8 = (code *)0x0;
    uStack_4c0 = 0;
    cStack_4bc = 0;
    uStack_4bb = 0;
    uStack_4ba = 0;
    uStack_4b9 = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    iStack_4d0 = 0;
    iStack_4cc = 0;
    auStack_4e8 = (undefined1  [16])0x0;
    uStack_478 = 0x3f600000;
    FUN_048afb10(auStack_4a8,8);
    lStack_450 = 0;
    lStack_448 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    lStack_458 = 0;
    auStack_470 = (undefined1  [16])0x0;
    uStack_440 = 0xff00;
    uStack_43c = uStack_43c & 0xffffff00;
    uStack_438 = uStack_438 & 0xffffff00;
    uStack_434 = uStack_434 & 0xffffff00;
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0f4bd598;
    uVar5 = auStack_4e8._0_8_;
    auStack_4e8._0_8_ = puVar39;
    if ((long *)uVar5 != (long *)0x0) {
      (**(code **)(*(long *)uVar5 + 8))();
    }
    if ((uStack_4c0 & 1) != 0) {
      func_0x0412a280(lStack_4b0,
                      CONCAT17(uStack_4b9,
                               CONCAT16(uStack_4ba,
                                        CONCAT15(uStack_4bb,CONCAT14(cStack_4bc,uStack_4c0)))) &
                      0xfffffffffffffffe);
    }
    uStack_4c0 = 0x6572701c;
    cStack_4bc = 100;
    uStack_4bb = 0x69;
    uStack_4ba = 99;
    uStack_4b9 = 0x61;
    cStack_4b8 = 0x74;
    uStack_4b7 = 0x657079745f65;
    uStack_4b1 = 0;
    if ((DAT_0f755b18 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755b18), iVar36 != 0)) {
      func_0x0e549170();
      func_0x0410844d(&DAT_0f755b18);
    }
    auStack_558 = (undefined1  [4])uStack_36c;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)CONCAT44(plStack_548._4_4_,3);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0e535290;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &UNK_0e530ec0;
    puStack_518 = &UNK_0e54a630;
    puStack_510 = &UNK_0e54a640;
    uStack_508 = 0;
    auStack_500._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(&pcStack_390,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_408 = pcStack_380;
    pcStack_400 = pcStack_378;
    pcStack_418 = pcStack_390;
    pcStack_410 = pcStack_388;
    func_0x0e54a3c0(auStack_558,&pcStack_418,auStack_4e8);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e518f6f:
      *(byte *)((long)piVar46 + 0x12) = *(byte *)((long)piVar46 + 0x12) | 9;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(*(long *)((long)plStack_548 + 0x78) + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e518f6f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)((long)plStack_548 + 0x18U) = *(uint *)((long)plStack_548 + 0x18U) | 0x90000;
      }
    }
    pcStack_418 = pcStack_398;
    pcStack_410 = pcStack_390;
    pcStack_408 = pcStack_388;
    pcStack_400 = pcStack_380;
    pcStack_3f8 = pcStack_378;
    iStack_3f0 = iStack_370;
    uStack_3ec = uStack_36c;
    uStack_3e8 = CONCAT31(uStack_3e8._1_3_,(undefined1)uStack_368);
    func_0x048b0bc0(auStack_4e8);
    if ((DAT_0f755b18 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755b18), iVar36 != 0)) {
      func_0x0e549170();
      func_0x0410844d(&DAT_0f755b18);
    }
    pcVar43 = pcStack_418;
    iStack_3f0 = 1;
    uStack_3ec = 0x5d24a408;
    if ((DAT_0f755af8 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755af8), iVar36 != 0)) {
      func_0x0e549060();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
      func_0x0410844d(&DAT_0f755af8);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755a78 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e519050;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755a78 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e519050:
      auStack_4e8._0_8_ = &DAT_0f755a78;
    }
    else {
      auStack_4e8._0_8_ = plVar44[2];
    }
    auStack_4e8._8_8_ = pcVar43 + 0x18;
    FUN_0ed621a0(auStack_4e8,uStack_3ec);
    auVar7 = auStack_4a8;
    auStack_4e8._0_2_ = 1;
    auStack_4e8._8_8_ = &pcStack_410;
    uStack_4d8 = uStack_3ec;
    iStack_4d0 = 0;
    iStack_4cc = 0;
    pcStack_4c8 = (code *)0x0;
    uStack_4c0 = 0;
    cStack_4bc = '\0';
    uStack_4bb = 0;
    uStack_4ba = 0;
    uStack_4b9 = 0;
    cStack_4b8 = '\0';
    uStack_4b7 = 0;
    uStack_4b1 = 0;
    lStack_4b0 = 0;
    auStack_4a8._1_8_ = 0x74735f6b636f6c62;
    auStack_4a8[0] = 0x16;
    auStack_4a8._8_4_ = 0x65746174;
    auStack_4a8._13_3_ = auVar7._13_3_;
    auStack_4a8[0xc] = 0;
    lStack_490 = 0;
    lStack_488 = 0;
    lStack_480 = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    auStack_470 = ZEXT816(0);
    uStack_460 = 0x3f600000;
    FUN_048afb10(&lStack_490,8);
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_430 = 0;
    lStack_448 = 0;
    uStack_440 = 0;
    uStack_43e = 0;
    uStack_43c = 0;
    lStack_458 = 0;
    lStack_450 = 0;
    uStack_428 = 0xff00;
    uStack_424 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    puVar39 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar39 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar39 = &UNK_0f4726f8;
    plVar44 = (long *)CONCAT44(iStack_4cc,iStack_4d0);
    iStack_4d0 = (int)puVar39;
    iStack_4cc = (int)((ulong)puVar39 >> 0x20);
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))();
    }
    auStack_558 = (undefined1  [4])uStack_4d8;
    plStack_550 = (long *)0x0;
    plStack_548 = (long *)((ulong)plStack_548 & 0xffffffff00000000);
    uStack_540 = (code *)0x1;
    pcStack_538 = (code *)0x0;
    uStack_530 = &UNK_0db8dd10;
    puStack_528 = &SUB_048b06d0;
    puStack_520 = &SUB_0d4858f0;
    puStack_518 = &UNK_0e54a690;
    puStack_510 = &UNK_0e54a890;
    uStack_508 = 0;
    auStack_500._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_4e8._8_8_,auStack_558);
    uVar5 = auStack_500._8_8_;
    if ((long *)auStack_500._8_8_ != (long *)0x0) {
      LOCK();
      plVar44 = (long *)(auStack_500._8_8_ + 8);
      lVar51 = *plVar44;
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (lVar51 == 0) {
        (**(code **)(*(long *)auStack_500._8_8_ + 0x10))(auStack_500._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    func_0x0e54a3c0(auStack_558,auStack_4e8._8_8_,&iStack_4d0);
    if (uStack_540._4_4_ == 2) {
      piVar46 = *(int **)(plStack_548[0xf] + 0x60);
      iVar36 = *piVar46;
      while (iVar36 != (int)uStack_540) {
        piVar46 = piVar46 + 0x16;
        iVar36 = *piVar46;
      }
      plVar44 = *(long **)(piVar46 + 0xc);
      while (plVar44 != plStack_550) {
        piVar46 = *(int **)(piVar46 + 0xe);
        plVar44 = *(long **)(piVar46 + 0xc);
      }
LAB_0e51930f:
      piVar46[4] = piVar46[4] | auStack_4e8._0_4_ << 0x10;
    }
    else {
      if (uStack_540._4_4_ == 1) {
        piVar46 = *(int **)(plStack_548[0xf] + 0x48);
        iVar36 = *piVar46;
        while (iVar36 != (int)uStack_540) {
          piVar46 = piVar46 + 0x1a;
          iVar36 = *piVar46;
        }
        goto LAB_0e51930f;
      }
      if (uStack_540._4_4_ == 0) {
        *(uint *)(plStack_548 + 3) = *(uint *)(plStack_548 + 3) | auStack_4e8._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&iStack_4d0);
  }
  if ((DAT_0f755bb0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755bb0), iVar36 != 0)) {
    func_0x0e54ab20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
    func_0x0410844d(&DAT_0f755bb0);
  }
  plVar44 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
  do {
    lVar51 = *plVar44;
    if (lVar51 == -1) goto LAB_0e519380;
    plVar44 = (long *)(*(long *)(param_1 + 0x30) + lVar51 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar51 * 0x18) != *(uint *)(_DAT_0f755b30 + 4))
  ;
  if (plVar44 == *(long **)(param_1 + 0x38)) {
LAB_0e519380:
    puVar38 = &DAT_0f755b30;
    if (iRam000000000f755b90 != -0x2b3da790) goto LAB_0e5193ed;
LAB_0e5193ab:
    lVar51 = *(long *)(puVar38 + 0x68);
    if (lVar51 == 0) goto LAB_0e5193ed;
    bVar53 = (*(byte *)(lVar51 + 8) & 1) != 0;
    lVar45 = lVar51 + 9;
    if (bVar53) {
      lVar45 = *(long *)(lVar51 + 0x18);
    }
    uVar49 = (ulong)(*(byte *)(lVar51 + 8) >> 1);
    if (bVar53) {
      uVar49 = *(ulong *)(lVar51 + 0x10);
    }
    func_0x0e54b350(&pcStack_3d8,param_1,lVar45,uVar49);
  }
  else {
    puVar38 = (undefined *)plVar44[2];
    if (*(int *)(puVar38 + 0x60) == -0x2b3da790) goto LAB_0e5193ab;
LAB_0e5193ed:
    func_0x0e54b350(&pcStack_3d8,param_1,&UNK_012d286b,0x15);
  }
  if ((char)uStack_3a8 == '\0') {
    func_0x0e97e540(param_1);
    pcVar43 = pcStack_3d8;
    if ((DAT_0f755bb0 == '\0') && (iVar36 = FUN_04108328(&DAT_0f755bb0), iVar36 != 0)) {
      func_0x0e54ab20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
      func_0x0410844d(&DAT_0f755bb0);
    }
    plVar44 = (long *)(*(long *)(pcVar43 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar43 + 0x20) - *(long *)(pcVar43 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
    do {
      lVar51 = *plVar44;
      if (lVar51 == -1) goto LAB_0e519490;
      plVar44 = (long *)(*(long *)(pcVar43 + 0x30) + lVar51 * 0x18);
    } while (*(uint *)(*(long *)(pcVar43 + 0x30) + 8 + lVar51 * 0x18) !=
             *(uint *)(_DAT_0f755b30 + 4));
    if (plVar44 == *(long **)(pcVar43 + 0x38)) {
LAB_0e519490:
      puVar38 = &DAT_0f755b30;
    }
    else {
      puVar38 = (undefined *)plVar44[2];
    }
    for (pbVar42 = *(byte **)(pcStack_3d8 + 0x50); pbVar42 != *(byte **)(pcStack_3d8 + 0x58);
        pbVar42 = pbVar42 + 0x38) {
      bVar2 = *pbVar42;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e51956a;
      }
      else if (*(long *)(pbVar42 + 8) == 0x1a) {
LAB_0e51956a:
        if ((bVar2 & 1) == 0) {
          pbVar48 = pbVar42 + 1;
        }
        else {
          pbVar48 = *(byte **)(pbVar42 + 0x10);
        }
        auVar60[0] = -(*pbVar48 == 0x5b);
        auVar60[1] = -(pbVar48[1] == 99);
        auVar60[2] = -(pbVar48[2] == 0x65);
        auVar60[3] = -(pbVar48[3] == 0x72);
        auVar60[4] = -(pbVar48[4] == 0x65);
        auVar60[5] = -(pbVar48[5] == 0x61);
        auVar60[6] = -(pbVar48[6] == 0x6c);
        auVar60[7] = -(pbVar48[7] == 0x3a);
        auVar60[8] = -(pbVar48[8] == 100);
        auVar60[9] = -(pbVar48[9] == 0x6f);
        auVar60[10] = -(pbVar48[10] == 99);
        auVar60[0xb] = -(pbVar48[0xb] == 0x75);
        auVar60[0xc] = -(pbVar48[0xc] == 0x6d);
        auVar60[0xd] = -(pbVar48[0xd] == 0x65);
        auVar60[0xe] = -(pbVar48[0xe] == 0x6e);
        auVar60[0xf] = -(pbVar48[0xf] == 0x74);
        auVar74[0] = -(pbVar48[10] == 99);
        auVar74[1] = -(pbVar48[0xb] == 0x75);
        auVar74[2] = -(pbVar48[0xc] == 0x6d);
        auVar74[3] = -(pbVar48[0xd] == 0x65);
        auVar74[4] = -(pbVar48[0xe] == 0x6e);
        auVar74[5] = -(pbVar48[0xf] == 0x74);
        auVar74[6] = -(pbVar48[0x10] == 0x61);
        auVar74[7] = -(pbVar48[0x11] == 0x74);
        auVar74[8] = -(pbVar48[0x12] == 0x69);
        auVar74[9] = -(pbVar48[0x13] == 0x6f);
        auVar74[10] = -(pbVar48[0x14] == 0x6e);
        auVar74[0xb] = -(pbVar48[0x15] == 0x5f);
        auVar74[0xc] = -(pbVar48[0x16] == 0x74);
        auVar74[0xd] = -(pbVar48[0x17] == 0x61);
        auVar74[0xe] = -(pbVar48[0x18] == 0x67);
        auVar74[0xf] = -(pbVar48[0x19] == 0x5d);
        auVar74 = auVar74 & auVar60;
        if ((ushort)((ushort)(SUB161(auVar74 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar74[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar42 == *(byte **)(pcStack_3d8 + 0x58)) {
LAB_0e519598:
      uVar34 = uStack_3ac;
      if (iStack_3b0 == 0) {
        if (((puVar38 == (undefined *)0x0) || (*(int *)(puVar38 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar38 + 0x68) == 0)) goto LAB_0e519620;
        lVar51 = *(long *)(puVar38 + 0x68) + 0x38;
      }
      else {
        if (puVar38 == (undefined *)0x0) {
          puVar38 = (undefined *)func_0x048aead0(pcVar43 + 0x18);
        }
        auStack_4e8._0_8_ = func_0x048b0c90(pcVar43 + 0x18,puVar38,uVar34,1);
        if (auStack_4e8._0_8_ == 0) {
          auStack_4e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4e8);
          if (auStack_4e8._0_8_ == 0) goto LAB_0e519620;
        }
        if ((*(int *)(auStack_4e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_4e8._0_8_ + 0x58) != 0)) {
          lVar51 = *(long *)(auStack_4e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e519620:
          lVar51 = 0;
        }
      }
      plStack_548 = (long *)&UNK_0488e0b0;
      uStack_540 = (code *)0x0;
      pcStack_538 = (code *)CONCAT35(pcStack_538._5_3_,0x48b5725f);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = plStack_550;
      _auStack_558 = auVar26 << 0x40;
      auStack_4e8 = (undefined1  [16])0x0;
      iStack_4d0 = 0x488e0b0;
      iStack_4cc = 0;
      pcStack_4c8 = (code *)0x0;
      uStack_4c0 = 0x48b5725f;
      cStack_4bc = '\0';
      pcVar43 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar43 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      pcStack_418 = (code *)0x21;
      pcStack_410 = (code *)0x1a;
      *(ulong *)(pcVar43 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar43 + 0x12) = uVar5;
      uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar43 = _DAT_013bbacd;
      *(undefined8 *)(pcVar43 + 8) = uVar5;
      pcVar43[0x1a] = (code)0x0;
      pcStack_408 = pcVar43;
      lVar51 = func_0x048b5060(lVar51,&pcStack_418);
      *(undefined8 *)(lVar51 + 0x20) = 0;
      if ((undefined1 *)(lVar51 + 0x20) == auStack_4e8) {
        pcVar43 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar51 + 0x40) != (code *)0x0) {
          puVar39 = (undefined8 *)(lVar51 + 0x28);
          (**(code **)(lVar51 + 0x40))(puVar39);
          if (cStack_4bc != '\0') {
            if (cStack_4bc == '\x02') {
              (*(code *)CONCAT44(iStack_4cc,iStack_4d0))(5,auStack_4e8 + 8,puVar39);
            }
            else {
              uVar5 = auStack_4e8._8_8_;
              auStack_4e8._8_8_ = 0;
              *puVar39 = uVar5;
            }
    
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x1202b57  minecraft:random_blockstate_match
 * 0x1202b67  _blockstate_match
 * 0x12b886b  minecraft:tag_match
 * 0x12d2855  minecraft:passthrough
 * 0x133b8fb  minecraft:blockstate_match
 * 0x133b905  blockstate_match
 * 0x1356858  minecraft:random_block_match
 * 0x1356864  ndom_block_match
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x145a6ee  minecraft:always_true
 * 0x148f9b4  minecraft:block_match
 * 0x14a96e9  minecraft:append_loot
 * 0x14c398c  minecraft:axis_aligned_linear_pos
 * 0x14c399c  ligned_linear_pos
 */

/* ---- assembly ---- */
/* 0e5118a0 */  PUSH RBP
/* 0e5118a1 */  PUSH R15
/* 0e5118a3 */  PUSH R14
/* 0e5118a5 */  PUSH R13
/* 0e5118a7 */  PUSH R12
/* 0e5118a9 */  PUSH RBX
/* 0e5118aa */  SUB RSP,0x528
/* 0e5118b1 */  MOV RBX,RDI
/* 0e5118b4 */  MOVZX EAX,byte ptr [0x0f755538]
/* 0e5118bb */  TEST AL,AL
/* 0e5118bd */  JZ 0x0e51e756
/* 0e5118c3 */  MOV ESI,0xffffffff
/* 0e5118c8 */  MOV RAX,qword ptr [0x0f7554b8]
/* 0e5118cf */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e5118d2 */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e5118d6 */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e5118da */  SUB RDX,RCX
/* 0e5118dd */  SHR RDX,0x3
/* 0e5118e1 */  ADD EDX,ESI
/* 0e5118e3 */  AND EDX,EAX
/* 0e5118e5 */  LEA RCX,[RCX + RDX*0x8]
/* 0e5118e9 */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e5118ed */  NOP dword ptr [RAX]
/* 0e5118f0 */  MOV RCX,qword ptr [RCX]
/* 0e5118f3 */  CMP RCX,-0x1
/* 0e5118f7 */  JZ 0x0e511922
/* 0e5118f9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e5118fd */  LEA RCX,[RDX + RSI*0x8]
/* 0e511901 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e511905 */  JNZ 0x0e5118f0
/* 0e511907 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e51190b */  CMP RCX,RAX
/* 0e51190e */  JNZ 0x0e51192e
/* 0e511910 */  LEA RAX,[0xf7554b8]
/* 0e511917 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e51191e */  JZ 0x0e51193b
/* 0e511920 */  JMP 0x0e511968
/* 0e511922 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e511926 */  MOV RCX,RAX
/* 0e511929 */  CMP RCX,RAX
/* 0e51192c */  JZ 0x0e511910
/* 0e51192e */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e511932 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e511939 */  JNZ 0x0e511968
/* 0e51193b */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e51193f */  TEST RAX,RAX
/* 0e511942 */  JZ 0x0e511968
/* 0e511944 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e511948 */  LEA RDX,[RAX + 0x9]
/* 0e51194c */  MOV ECX,ESI
/* 0e51194e */  SHR ECX,0x1
/* 0e511950 */  TEST SIL,0x1
/* 0e511954 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e511959 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e51195e */  LEA RDI,[RSP + 0x180]
/* 0e511966 */  JMP 0x0e51197c
/* 0e511968 */  LEA RDX,[0x11db16a]
/* 0e51196f */  LEA RDI,[RSP + 0x180]
/* 0e511977 */  MOV ECX,0x9
/* 0e51197c */  MOV RSI,RBX
/* 0e51197f */  CALL 0x0e5313c0
/* 0e511984 */  MOV byte ptr [RSP + 0x1b4],0x0
/* 0e51198c */  MOV byte ptr [RSP + 0x1b8],0x0
/* 0e511994 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e51199c */  JNZ 0x0e513343
/* 0e5119a2 */  MOV byte ptr [RSP + 0x308],0x2a
/* 0e5119aa */  LEA RSI,[RSP + 0x309]
/* 0e5119b2 */  MOVUPS XMM0,xmmword ptr [0x0145a6ee]
/* 0e5119b9 */  MOVUPS xmmword ptr [RSP + 0x309],XMM0
/* 0e5119c1 */  MOV RAX,0x657572745f737961
/* 0e5119cb */  MOV qword ptr [RSP + 0x316],RAX
/* 0e5119d3 */  MOV byte ptr [RSP + 0x31e],0x0
/* 0e5119db */  LEA RDI,[RSP + 0x70]
/* 0e5119e0 */  MOV EDX,0x15
/* 0e5119e5 */  CALL 0x0e534c40
/* 0e5119ea */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e5119f2 */  MOV ESI,EAX
/* 0e5119f4 */  SHR ESI,0x1
/* 0e5119f6 */  TEST AL,0x1
/* 0e5119f8 */  LEA RBP,[RSP + 0x99]
/* 0e511a00 */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0e511a08 */  CMOVZ RAX,RBP
/* 0e511a0c */  CMOVNZ RSI,qword ptr [RSP + 0xa0]
/* 0e511a15 */  TEST RSI,RSI
/* 0e511a18 */  JZ 0x0e511a2e
/* 0e511a1a */  MOV ECX,ESI
/* 0e511a1c */  AND ECX,0x3
/* 0e511a1f */  CMP RSI,0x4
/* 0e511a23 */  JNC 0x0e511a38
/* 0e511a25 */  MOV EDX,0x811c9dc5
/* 0e511a2a */  XOR EDI,EDI
/* 0e511a2c */  JMP 0x0e511a98
/* 0e511a2e */  MOV EDX,0x811c9dc5
/* 0e511a33 */  JMP 0x0e511ac4
/* 0e511a38 */  AND RSI,-0x4
/* 0e511a3c */  MOV EDX,0x811c9dc5
/* 0e511a41 */  XOR EDI,EDI
/* 0e511a43 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e511a50 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e511a55 */  XOR R8D,EDX
/* 0e511a58 */  IMUL EDX,R8D,0x1000193
/* 0e511a5f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e511a65 */  XOR R8D,EDX
/* 0e511a68 */  IMUL EDX,R8D,0x1000193
/* 0e511a6f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e511a75 */  XOR R8D,EDX
/* 0e511a78 */  IMUL EDX,R8D,0x1000193
/* 0e511a7f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e511a85 */  XOR R8D,EDX
/* 0e511a88 */  IMUL EDX,R8D,0x1000193
/* 0e511a8f */  ADD RDI,0x4
/* 0e511a93 */  CMP RSI,RDI
/* 0e511a96 */  JNZ 0x0e511a50
/* 0e511a98 */  TEST RCX,RCX
/* 0e511a9b */  JZ 0x0e511ac4
/* 0e511a9d */  ADD RAX,RDI
/* 0e511aa0 */  XOR ESI,ESI
/* 0e511aa2 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e511ab0 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e511ab4 */  XOR EDI,EDX
/* 0e511ab6 */  IMUL EDX,EDI,0x1000193
/* 0e511abc */  INC RSI
/* 0e511abf */  CMP RCX,RSI
/* 0e511ac2 */  JNZ 0x0e511ab0
/* 0e511ac4 */  MOV dword ptr [RSP + 0x1a8],0x2
/* 0e511acf */  MOV dword ptr [RSP + 0x1ac],EDX
/* 0e511ad6 */  MOVZX EAX,byte ptr [0x0f755558]
/* 0e511add */  TEST AL,AL
/* 0e511adf */  JZ 0x0e51ebda
/* 0e511ae5 */  LEA R14,[RSP + 0x188]
/* 0e511aed */  MOV EAX,dword ptr [RSP + 0x1ac]
/* 0e511af4 */  MOV dword ptr [RSP],EAX
/* 0e511af7 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e511b00 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e511b08 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e511b11 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e511b1a */  LEA R13,[0xe535290]
/* 0e511b21 */  MOV qword ptr [RSP + 0x28],R13
/* 0e511b26 */  LEA RAX,[0x48b06d0]
/* 0e511b2d */  MOV qword ptr [RSP + 0x30],RAX
/* 0e511b32 */  LEA RAX,[0xe530ec0]
/* 0e511b39 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e511b3e */  LEA RAX,[0xe535350]
/* 0e511b45 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e511b4a */  LEA RAX,[0xe535360]
/* 0e511b51 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e511b56 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e511b5e */  XORPS XMM0,XMM0
/* 0e511b61 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e511b66 */  MOV RSI,RSP
/* 0e511b69 */  MOV RDI,R14
/* 0e511b6c */  CALL 0x048b05a0
/* 0e511b71 */  MOV R15,qword ptr [RSP + 0x60]
/* 0e511b76 */  TEST R15,R15
/* 0e511b79 */  JZ 0x0e511b9e
/* 0e511b7b */  MOV RAX,-0x1
/* 0e511b82 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e511b88 */  TEST RAX,RAX
/* 0e511b8b */  JNZ 0x0e511b9e
/* 0e511b8d */  MOV RAX,qword ptr [R15]
/* 0e511b90 */  MOV RDI,R15
/* 0e511b93 */  CALL qword ptr [RAX + 0x10]
/* 0e511b96 */  MOV RDI,R15
/* 0e511b99 */  CALL 0x0412c2d0
/* 0e511b9e */  MOVUPS XMM0,xmmword ptr [R14]
/* 0e511ba2 */  MOVUPS XMM1,xmmword ptr [R14 + 0x10]
/* 0e511ba7 */  MOVAPS xmmword ptr [RSP + 0x290],XMM1
/* 0e511baf */  MOVAPS xmmword ptr [RSP + 0x280],XMM0
/* 0e511bb7 */  MOV RDI,RSP
/* 0e511bba */  LEA RSI,[RSP + 0x280]
/* 0e511bc2 */  LEA RDX,[RSP + 0x70]
/* 0e511bc7 */  CALL 0x0e535020
/* 0e511bcc */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e511bd0 */  CMP EAX,0x2
/* 0e511bd3 */  JZ 0x0e511fea
/* 0e511bd9 */  CMP EAX,0x1
/* 0e511bdc */  JZ 0x0e511bfa
/* 0e511bde */  TEST EAX,EAX
/* 0e511be0 */  JNZ 0x0e511bee
/* 0e511be2 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e511be7 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e511bee */  CMP byte ptr [RSP + 0x1b8],0x0
/* 0e511bf6 */  JZ 0x0e511c3d
/* 0e511bf8 */  JMP 0x0e511c4d
/* 0e511bfa */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e511bff */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e511c03 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e511c07 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e511c0b */  CMP dword ptr [RAX],ECX
/* 0e511c0d */  JZ 0x0e511c2f
/* 0e511c0f */  ADD RAX,0x68
/* 0e511c13 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e511c20 */  MOV RDX,RAX
/* 0e511c23 */  ADD RAX,0x68
/* 0e511c27 */  CMP dword ptr [RDX],ECX
/* 0e511c29 */  JNZ 0x0e511c20
/* 0e511c2b */  ADD RAX,-0x68
/* 0e511c2f */  OR byte ptr [RAX + 0x12],0x9
/* 0e511c33 */  CMP byte ptr [RSP + 0x1b8],0x0
/* 0e511c3b */  JNZ 0x0e511c4d
/* 0e511c3d */  MOV RDI,RSP
/* 0e511c40 */  LEA RSI,[RSP + 0x180]
/* 0e511c48 */  CALL 0x0e5353b0
/* 0e511c4d */  MOV R12D,dword ptr [RSP + 0x1b4]
/* 0e511c55 */  MOV R15,qword ptr [RSP + 0x180]
/* 0e511c5d */  MOVZX EAX,byte ptr [0x0f755538]
/* 0e511c64 */  TEST AL,AL
/* 0e511c66 */  JZ 0x0e51ec04
/* 0e511c6c */  LEA R14,[RSP + 0x1ac]
/* 0e511c74 */  MOV RAX,qword ptr [0x0f7554b8]
/* 0e511c7b */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e511c7e */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e511c82 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e511c86 */  SUB RDX,RCX
/* 0e511c89 */  SHR RDX,0x3
/* 0e511c8d */  MOV ESI,0xffffffff
/* 0e511c92 */  ADD EDX,ESI
/* 0e511c94 */  AND EDX,EAX
/* 0e511c96 */  LEA RCX,[RCX + RDX*0x8]
/* 0e511c9a */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e511c9e */  NOP
/* 0e511ca0 */  MOV RCX,qword ptr [RCX]
/* 0e511ca3 */  CMP RCX,-0x1
/* 0e511ca7 */  JZ 0x0e511cc9
/* 0e511ca9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e511cad */  LEA RCX,[RDX + RSI*0x8]
/* 0e511cb1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e511cb5 */  JNZ 0x0e511ca0
/* 0e511cb7 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e511cbb */  CMP RCX,RAX
/* 0e511cbe */  JNZ 0x0e511cd5
/* 0e511cc0 */  LEA RAX,[0xf7554b8]
/* 0e511cc7 */  JMP 0x0e511cd9
/* 0e511cc9 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e511ccd */  MOV RCX,RAX
/* 0e511cd0 */  CMP RCX,RAX
/* 0e511cd3 */  JZ 0x0e511cc0
/* 0e511cd5 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e511cd9 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e511cdd */  MOV R15,qword ptr [RAX + 0x20]
/* 0e511ce1 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e511ce5 */  CMP R15,RAX
/* 0e511ce8 */  JZ 0x0e511cfe
/* 0e511cea */  NOP word ptr [RAX + RAX*0x1]
/* 0e511cf0 */  CMP dword ptr [R15],R12D
/* 0e511cf3 */  JZ 0x0e511cfe
/* 0e511cf5 */  ADD R15,0x38
/* 0e511cf9 */  CMP R15,RAX
/* 0e511cfc */  JNZ 0x0e511cf0
/* 0e511cfe */  CMP R15,RAX
/* 0e511d01 */  JNZ 0x0e511d3a
/* 0e511d03 */  LEA RDI,[0x13e0236]
/* 0e511d0a */  LEA RSI,[0x1208bb9]
/* 0e511d11 */  LEA RCX,[0x119d818]
/* 0e511d18 */  LEA R8,[0x14deddf]
/* 0e511d1f */  MOV EDX,0x326
/* 0e511d24 */  XOR EAX,EAX
/* 0e511d26 */  CALL 0x0eeddcf0
/* 0e511d2b */  TEST AL,AL
/* 0e511d2d */  JZ 0x0e511d3a
/* 0e511d2f */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e511d3a */  ADD R15,0x8
/* 0e511d3e */  MOV byte ptr [RSP],0x0
/* 0e511d42 */  MOV RCX,RSP
/* 0e511d45 */  MOV RDI,R15
/* 0e511d48 */  MOV RSI,R14
/* 0e511d4b */  MOV RDX,R14
/* 0e511d4e */  CALL 0x05d9c620
/* 0e511d53 */  MOVUPS XMM0,xmmword ptr [RSP + 0x180]
/* 0e511d5b */  MOVUPS XMM1,xmmword ptr [RSP + 0x190]
/* 0e511d63 */  MOVUPS XMM2,xmmword ptr [RSP + 0x1a0]
/* 0e511d6b */  MOVDQU XMM3,xmmword ptr [RSP + 0x1ac]
/* 0e511d74 */  MOVAPS xmmword ptr [RSP + 0x2c0],XMM0
/* 0e511d7c */  MOVAPS xmmword ptr [RSP + 0x2d0],XMM1
/* 0e511d84 */  MOVAPS xmmword ptr [RSP + 0x2e0],XMM2
/* 0e511d8c */  MOVDQU xmmword ptr [RSP + 0x2ec],XMM3
/* 0e511d95 */  LEA RDI,[RSP + 0x70]
/* 0e511d9a */  CALL 0x048b0bc0
/* 0e511d9f */  MOV byte ptr [RSP + 0x340],0x2a
/* 0e511da7 */  LEA RSI,[RSP + 0x341]
/* 0e511daf */  MOVUPS XMM0,xmmword ptr [0x0148f9b4]
/* 0e511db6 */  MOVUPS xmmword ptr [RSP + 0x341],XMM0
/* 0e511dbe */  MOV RAX,0x686374616d5f6b63
/* 0e511dc8 */  MOV qword ptr [RSP + 0x34e],RAX
/* 0e511dd0 */  MOV byte ptr [RSP + 0x356],0x0
/* 0e511dd8 */  LEA RDI,[RSP + 0x70]
/* 0e511ddd */  MOV EDX,0x15
/* 0e511de2 */  CALL 0x0e534c40
/* 0e511de7 */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e511def */  MOV ESI,EAX
/* 0e511df1 */  SHR ESI,0x1
/* 0e511df3 */  TEST AL,0x1
/* 0e511df5 */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0e511dfd */  CMOVZ RAX,RBP
/* 0e511e01 */  CMOVNZ RSI,qword ptr [RSP + 0xa0]
/* 0e511e0a */  TEST RSI,RSI
/* 0e511e0d */  JZ 0x0e511e23
/* 0e511e0f */  MOV ECX,ESI
/* 0e511e11 */  AND ECX,0x3
/* 0e511e14 */  CMP RSI,0x4
/* 0e511e18 */  JNC 0x0e511e2d
/* 0e511e1a */  MOV EDX,0x811c9dc5
/* 0e511e1f */  XOR EDI,EDI
/* 0e511e21 */  JMP 0x0e511e88
/* 0e511e23 */  MOV EDX,0x811c9dc5
/* 0e511e28 */  JMP 0x0e511eb4
/* 0e511e2d */  AND RSI,-0x4
/* 0e511e31 */  MOV EDX,0x811c9dc5
/* 0e511e36 */  XOR EDI,EDI
/* 0e511e38 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e511e40 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e511e45 */  XOR R8D,EDX
/* 0e511e48 */  IMUL EDX,R8D,0x1000193
/* 0e511e4f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e511e55 */  XOR R8D,EDX
/* 0e511e58 */  IMUL EDX,R8D,0x1000193
/* 0e511e5f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e511e65 */  XOR R8D,EDX
/* 0e511e68 */  IMUL EDX,R8D,0x1000193
/* 0e511e6f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e511e75 */  XOR R8D,EDX
/* 0e511e78 */  IMUL EDX,R8D,0x1000193
/* 0e511e7f */  ADD RDI,0x4
/* 0e511e83 */  CMP RSI,RDI
/* 0e511e86 */  JNZ 0x0e511e40
/* 0e511e88 */  TEST RCX,RCX
/* 0e511e8b */  JZ 0x0e511eb4
/* 0e511e8d */  ADD RAX,RDI
/* 0e511e90 */  XOR ESI,ESI
/* 0e511e92 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e511ea0 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e511ea4 */  XOR EDI,EDX
/* 0e511ea6 */  IMUL EDX,EDI,0x1000193
/* 0e511eac */  INC RSI
/* 0e511eaf */  CMP RCX,RSI
/* 0e511eb2 */  JNZ 0x0e511ea0
/* 0e511eb4 */  MOV dword ptr [RSP + 0x2e8],0x2
/* 0e511ebf */  MOV dword ptr [RSP + 0x2ec],EDX
/* 0e511ec6 */  MOVZX EAX,byte ptr [0x0f755558]
/* 0e511ecd */  TEST AL,AL
/* 0e511ecf */  JZ 0x0e51ec48
/* 0e511ed5 */  LEA R14,[RSP + 0x2c8]
/* 0e511edd */  MOV EAX,dword ptr [RSP + 0x2ec]
/* 0e511ee4 */  MOV dword ptr [RSP],EAX
/* 0e511ee7 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e511ef0 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e511ef8 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e511f01 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e511f0a */  MOV qword ptr [RSP + 0x28],R13
/* 0e511f0f */  LEA RAX,[0x48b06d0]
/* 0e511f16 */  MOV qword ptr [RSP + 0x30],RAX
/* 0e511f1b */  LEA RAX,[0xe530ec0]
/* 0e511f22 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e511f27 */  LEA RAX,[0xe535570]
/* 0e511f2e */  MOV qword ptr [RSP + 0x40],RAX
/* 0e511f33 */  LEA RAX,[0xe535580]
/* 0e511f3a */  MOV qword ptr [RSP + 0x48],RAX
/* 0e511f3f */  MOV dword ptr [RSP + 0x50],0x0
/* 0e511f47 */  XORPS XMM0,XMM0
/* 0e511f4a */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e511f4f */  MOV RSI,RSP
/* 0e511f52 */  MOV RDI,R14
/* 0e511f55 */  CALL 0x048b05a0
/* 0e511f5a */  MOV R15,qword ptr [RSP + 0x60]
/* 0e511f5f */  TEST R15,R15
/* 0e511f62 */  JZ 0x0e511f87
/* 0e511f64 */  MOV RAX,-0x1
/* 0e511f6b */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e511f71 */  TEST RAX,RAX
/* 0e511f74 */  JNZ 0x0e511f87
/* 0e511f76 */  MOV RAX,qword ptr [R15]
/* 0e511f79 */  MOV RDI,R15
/* 0e511f7c */  CALL qword ptr [RAX + 0x10]
/* 0e511f7f */  MOV RDI,R15
/* 0e511f82 */  CALL 0x0412c2d0
/* 0e511f87 */  MOVUPS XMM0,xmmword ptr [R14]
/* 0e511f8b */  MOVUPS XMM1,xmmword ptr [R14 + 0x10]
/* 0e511f90 */  MOVAPS xmmword ptr [RSP + 0x290],XMM1
/* 0e511f98 */  MOVAPS xmmword ptr [RSP + 0x280],XMM0
/* 0e511fa0 */  MOV RDI,RSP
/* 0e511fa3 */  LEA RSI,[RSP + 0x280]
/* 0e511fab */  LEA RDX,[RSP + 0x70]
/* 0e511fb0 */  CALL 0x0e535020
/* 0e511fb5 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e511fb9 */  CMP EAX,0x2
/* 0e511fbc */  JZ 0x0e512434
/* 0e511fc2 */  CMP EAX,0x1
/* 0e511fc5 */  JZ 0x0e51203f
/* 0e511fc7 */  TEST EAX,EAX
/* 0e511fc9 */  JNZ 0x0e511fd7
/* 0e511fcb */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e511fd0 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e511fd7 */  CMP byte ptr [RSP + 0x2f8],0x0
/* 0e511fdf */  JZ 0x0e51207d
/* 0e511fe5 */  JMP 0x0e51208d
/* 0e511fea */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e511fef */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e511ff3 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e511ff7 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e511ffb */  CMP dword ptr [RAX],ECX
/* 0e511ffd */  JZ 0x0e51201f
/* 0e511fff */  ADD RAX,0x58
/* 0e512003 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e512010 */  MOV RDX,RAX
/* 0e512013 */  ADD RAX,0x58
/* 0e512017 */  CMP dword ptr [RDX],ECX
/* 0e512019 */  JNZ 0x0e512010
/* 0e51201b */  ADD RAX,-0x58
/* 0e51201f */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e512024 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e512028 */  JZ 0x0e511c2f
/* 0e51202e */  NOP
/* 0e512030 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e512034 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e512038 */  JNZ 0x0e512030
/* 0e51203a */  JMP 0x0e511c2f
/* 0e51203f */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e512044 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e512048 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e51204c */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e512050 */  CMP dword ptr [RAX],ECX
/* 0e512052 */  JZ 0x0e51206f
/* 0e512054 */  ADD RAX,0x68
/* 0e512058 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e512060 */  MOV RDX,RAX
/* 0e512063 */  ADD RAX,0x68
/* 0e512067 */  CMP dword ptr [RDX],ECX
/* 0e512069 */  JNZ 0x0e512060
/* 0e51206b */  ADD RAX,-0x68
/* 0e51206f */  OR byte ptr [RAX + 0x12],0x9
/* 0e512073 */  CMP byte ptr [RSP + 0x2f8],0x0
/* 0e51207b */  JNZ 0x0e51208d
/* 0e51207d */  MOV RDI,RSP
/* 0e512080 */  LEA RSI,[RSP + 0x2c0]
/* 0e512088 */  CALL 0x0e5353b0
/* 0e51208d */  MOV R12D,dword ptr [RSP + 0x2f4]
/* 0e512095 */  MOV R15,qword ptr [RSP + 0x2c0]
/* 0e51209d */  MOVZX EAX,byte ptr [0x0f755538]
/* 0e5120a4 */  TEST AL,AL
/* 0e5120a6 */  JZ 0x0e51ec72
/* 0e5120ac */  LEA R14,[RSP + 0x2ec]
/* 0e5120b4 */  MOV RAX,qword ptr [0x0f7554b8]
/* 0e5120bb */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e5120be */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e5120c2 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e5120c6 */  SUB RDX,RCX
/* 0e5120c9 */  SHR RDX,0x3
/* 0e5120cd */  MOV ESI,0xffffffff
/* 0e5120d2 */  ADD EDX,ESI
/* 0e5120d4 */  AND EDX,EAX
/* 0e5120d6 */  LEA RCX,[RCX + RDX*0x8]
/* 0e5120da */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e5120de */  NOP
/* 0e5120e0 */  MOV RCX,qword ptr [RCX]
/* 0e5120e3 */  CMP RCX,-0x1
/* 0e5120e7 */  JZ 0x0e512109
/* 0e5120e9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e5120ed */  LEA RCX,[RDX + RSI*0x8]
/* 0e5120f1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e5120f5 */  JNZ 0x0e5120e0
/* 0e5120f7 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e5120fb */  CMP RCX,RAX
/* 0e5120fe */  JNZ 0x0e512115
/* 0e512100 */  LEA RAX,[0xf7554b8]
/* 0e512107 */  JMP 0x0e512119
/* 0e512109 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e51210d */  MOV RCX,RAX
/* 0e512110 */  CMP RCX,RAX
/* 0e512113 */  JZ 0x0e512100
/* 0e512115 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e512119 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e51211d */  MOV R15,qword ptr [RAX + 0x20]
/* 0e512121 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e512125 */  CMP R15,RAX
/* 0e512128 */  JZ 0x0e51213e
/* 0e51212a */  NOP word ptr [RAX + RAX*0x1]
/* 0e512130 */  CMP dword ptr [R15],R12D
/* 0e512133 */  JZ 0x0e51213e
/* 0e512135 */  ADD R15,0x38
/* 0e512139 */  CMP R15,RAX
/* 0e51213c */  JNZ 0x0e512130
/* 0e51213e */  CMP R15,RAX
/* 0e512141 */  JNZ 0x0e51217a
/* 0e512143 */  LEA RDI,[0x13e0236]
/* 0e51214a */  LEA RSI,[0x1208bb9]
/* 0e512151 */  LEA RCX,[0x119d818]
/* 0e512158 */  LEA R8,[0x14deddf]
/* 0e51215f */  MOV EDX,0x326
/* 0e512164 */  XOR EAX,EAX
/* 0e512166 */  CALL 0x0eeddcf0
/* 0e51216b */  TEST AL,AL
/* 0e51216d */  JZ 0x0e51217a
/* 0e51216f */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e51217a */  ADD R15,0x8
/* 0e51217e */  MOV byte ptr [RSP],0x0
/* 0e512182 */  MOV RCX,RSP
/* 0e512185 */  MOV RDI,R15
/* 0e512188 */  MOV RSI,R14
/* 0e51218b */  MOV RDX,R14
/* 0e51218e */  CALL 0x05d9c620
/* 0e512193 */  MOVAPS XMM0,xmmword ptr [RSP + 0x2c0]
/* 0e51219b */  MOVAPS XMM1,xmmword ptr [RSP + 0x2d0]
/* 0e5121a3 */  MOVDQA XMM2,xmmword ptr [RSP + 0x2e0]
/* 0e5121ac */  MOVAPS xmmword ptr [RSP + 0x240],XMM0
/* 0e5121b4 */  MOVAPS xmmword ptr [RSP + 0x250],XMM1
/* 0e5121bc */  MOVDQA xmmword ptr [RSP + 0x260],XMM2
/* 0e5121c5 */  MOVUPS XMM0,xmmword ptr [RSP + 0x2ec]
/* 0e5121cd */  MOVUPS xmmword ptr [RSP + 0x26c],XMM0
/* 0e5121d5 */  LEA RDI,[RSP + 0x70]
/* 0e5121da */  CALL 0x048b0bc0
/* 0e5121df */  LEA RDI,[0xf5463b0]
/* 0e5121e6 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e5121ed */  MOV ESI,0x20
/* 0e5121f2 */  CALL qword ptr [RAX + 0x10]
/* 0e5121f5 */  MOV R14,RAX
/* 0e5121f8 */  TEST RAX,RAX
/* 0e5121fb */  JZ 0x0e51e448
/* 0e512201 */  MOVUPS XMM0,xmmword ptr [0x01356864]
/* 0e512208 */  MOVUPS xmmword ptr [R14 + 0xc],XMM0
/* 0e51220d */  MOVUPS XMM0,xmmword ptr [0x01356858]
/* 0e512214 */  MOVUPS xmmword ptr [R14],XMM0
/* 0e512218 */  MOV byte ptr [R14 + 0x1c],0x0
/* 0e51221d */  LEA RDI,[RSP + 0x70]
/* 0e512222 */  MOV EDX,0x1c
/* 0e512227 */  MOV RSI,R14
/* 0e51222a */  CALL 0x0e534c40
/* 0e51222f */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e512237 */  MOV ESI,EAX
/* 0e512239 */  SHR ESI,0x1
/* 0e51223b */  TEST AL,0x1
/* 0e51223d */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0e512245 */  CMOVZ RAX,RBP
/* 0e512249 */  CMOVNZ RSI,qword ptr [RSP + 0xa0]
/* 0e512252 */  TEST RSI,RSI
/* 0e512255 */  JZ 0x0e51226b
/* 0e512257 */  MOV ECX,ESI
/* 0e512259 */  AND ECX,0x3
/* 0e51225c */  CMP RSI,0x4
/* 0e512260 */  JNC 0x0e512275
/* 0e512262 */  MOV EDX,0x811c9dc5
/* 0e512267 */  XOR EDI,EDI
/* 0e512269 */  JMP 0x0e5122c8
/* 0e51226b */  MOV EDX,0x811c9dc5
/* 0e512270 */  JMP 0x0e5122f4
/* 0e512275 */  AND RSI,-0x4
/* 0e512279 */  MOV EDX,0x811c9dc5
/* 0e51227e */  XOR EDI,EDI
/* 0e512280 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e512285 */  XOR R8D,EDX
/* 0e512288 */  IMUL EDX,R8D,0x1000193
/* 0e51228f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e512295 */  XOR R8D,EDX
/* 0e512298 */  IMUL EDX,R8D,0x1000193
/* 0e51229f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e5122a5 */  XOR R8D,EDX
/* 0e5122a8 */  IMUL EDX,R8D,0x1000193
/* 0e5122af */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e5122b5 */  XOR R8D,EDX
/* 0e5122b8 */  IMUL EDX,R8D,0x1000193
/* 0e5122bf */  ADD RDI,0x4
/* 0e5122c3 */  CMP RSI,RDI
/* 0e5122c6 */  JNZ 0x0e512280
/* 0e5122c8 */  TEST RCX,RCX
/* 0e5122cb */  JZ 0x0e5122f4
/* 0e5122cd */  ADD RAX,RDI
/* 0e5122d0 */  XOR ESI,ESI
/* 0e5122d2 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e5122e0 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e5122e4 */  XOR EDI,EDX
/* 0e5122e6 */  IMUL EDX,EDI,0x1000193
/* 0e5122ec */  INC RSI
/* 0e5122ef */  CMP RCX,RSI
/* 0e5122f2 */  JNZ 0x0e5122e0
/* 0e5122f4 */  MOV qword ptr [RSP + 0x380],R14
/* 0e5122fc */  MOV dword ptr [RSP + 0x268],0x2
/* 0e512307 */  MOV dword ptr [RSP + 0x26c],EDX
/* 0e51230e */  MOVZX EAX,byte ptr [0x0f755558]
/* 0e512315 */  TEST AL,AL
/* 0e512317 */  JZ 0x0e51ecb6
/* 0e51231d */  LEA R15,[RSP + 0x248]
/* 0e512325 */  MOV EAX,dword ptr [RSP + 0x26c]
/* 0e51232c */  MOV dword ptr [RSP],EAX
/* 0e51232f */  MOV qword ptr [RSP + 0x8],0x0
/* 0e512338 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e512340 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e512349 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e512352 */  MOV qword ptr [RSP + 0x28],R13
/* 0e512357 */  LEA RAX,[0x48b06d0]
/* 0e51235e */  MOV qword ptr [RSP + 0x30],RAX
/* 0e512363 */  LEA RAX,[0xe530ec0]
/* 0e51236a */  MOV qword ptr [RSP + 0x38],RAX
/* 0e51236f */  LEA RAX,[0xe5355d0]
/* 0e512376 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e51237b */  LEA RAX,[0xe5355e0]
/* 0e512382 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e512387 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e51238f */  XORPS XMM0,XMM0
/* 0e512392 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e512397 */  MOV RSI,RSP
/* 0e51239a */  MOV RDI,R15
/* 0e51239d */  CALL 0x048b05a0
/* 0e5123a2 */  MOV R12,qword ptr [RSP + 0x60]
/* 0e5123a7 */  TEST R12,R12
/* 0e5123aa */  JZ 0x0e5123d1
/* 0e5123ac */  MOV RAX,-0x1
/* 0e5123b3 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0e5123ba */  TEST RAX,RAX
/* 0e5123bd */  JNZ 0x0e5123d1
/* 0e5123bf */  MOV RAX,qword ptr [R12]
/* 0e5123c3 */  MOV RDI,R12
/* 0e5123c6 */  CALL qword ptr [RAX + 0x10]
/* 0e5123c9 */  MOV RDI,R12
/* 0e5123cc */  CALL 0x0412c2d0
/* 0e5123d1 */  MOVUPS XMM0,xmmword ptr [R15]
/* 0e5123d5 */  MOVUPS XMM1,xmmword ptr [R15 + 0x10]
/* 0e5123da */  MOVAPS xmmword ptr [RSP + 0x290],XMM1
/* 0e5123e2 */  MOVAPS xmmword ptr [RSP + 0x280],XMM0
/* 0e5123ea */  MOV RDI,RSP
/* 0e5123ed */  LEA RSI,[RSP + 0x280]
/* 0e5123f5 */  LEA RDX,[RSP + 0x70]
/* 0e5123fa */  CALL 0x0e535020
/* 0e5123ff */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e512403 */  CMP EAX,0x2
/* 0e512406 */  JZ 0x0e51286c
/* 0e51240c */  CMP EAX,0x1
/* 0e51240f */  JZ 0x0e51247f
/* 0e512411 */  TEST EAX,EAX
/* 0e512413 */  JNZ 0x0e512421
/* 0e512415 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e51241a */  OR dword ptr [RAX + 0x18],0x90000
/* 0e512421 */  CMP byte ptr [RSP + 0x278],0x0
/* 0e512429 */  JZ 0x0e5124bd
/* 0e51242f */  JMP 0x0e5124cd
/* 0e512434 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e512439 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e51243d */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e512441 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e512445 */  CMP dword ptr [RAX],ECX
/* 0e512447 */  JZ 0x0e51245f
/* 0e512449 */  ADD RAX,0x58
/* 0e51244d */  NOP dword ptr [RAX]
/* 0e512450 */  MOV RDX,RAX
/* 0e512453 */  ADD RAX,0x58
/* 0e512457 */  CMP dword ptr [RDX],ECX
/* 0e512459 */  JNZ 0x0e512450
/* 0e51245b */  ADD RAX,-0x58
/* 0e51245f */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e512464 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e512468 */  JZ 0x0e51206f
/* 0e51246e */  NOP
/* 0e512470 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e512474 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e512478 */  JNZ 0x0e512470
/* 0e51247a */  JMP 0x0e51206f
/* 0e51247f */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e512484 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e512488 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e51248c */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e512490 */  CMP dword ptr [RAX],ECX
/* 0e512492 */  JZ 0x0e5124af
/* 0e512494 */  ADD RAX,0x68
/* 0e512498 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e5124a0 */  MOV RDX,RAX
/* 0e5124a3 */  ADD RAX,0x68
/* 0e5124a7 */  CMP dword ptr [RDX],ECX
/* 0e5124a9 */  JNZ 0x0e5124a0
/* 0e5124ab */  ADD RAX,-0x68
/* 0e5124af */  OR byte ptr [RAX + 0x12],0x9
/* 0e5124b3 */  CMP byte ptr [RSP + 0x278],0x0
/* 0e5124bb */  JNZ 0x0e5124cd
/* 0e5124bd */  MOV RDI,RSP
/* 0e5124c0 */  LEA RSI,[RSP + 0x240]
/* 0e5124c8 */  CALL 0x0e5353b0
/* 0e5124cd */  MOV R13D,dword ptr [RSP + 0x274]
/* 0e5124d5 */  MOV R14,qword ptr [RSP + 0x240]
/* 0e5124dd */  MOVZX EAX,byte ptr [0x0f755538]
/* 0e5124e4 */  TEST AL,AL
/* 0e5124e6 */  JZ 0x0e51ece0
/* 0e5124ec */  LEA R15,[RSP + 0x26c]
/* 0e5124f4 */  MOV RAX,qword ptr [0x0f7554b8]
/* 0e5124fb */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e5124fe */  MOV RCX,qword ptr [R14 + 0x18]
/* 0e512502 */  MOV RDX,qword ptr [R14 + 0x20]
/* 0e512506 */  SUB RDX,RCX
/* 0e512509 */  SHR RDX,0x3
/* 0e51250d */  MOV ESI,0xffffffff
/* 0e512512 */  ADD EDX,ESI
/* 0e512514 */  AND EDX,EAX
/* 0e512516 */  LEA RCX,[RCX + RDX*0x8]
/* 0e51251a */  MOV RDX,qword ptr [R14 + 0x30]
/* 0e51251e */  NOP
/* 0e512520 */  MOV RCX,qword ptr [RCX]
/* 0e512523 */  CMP RCX,-0x1
/* 0e512527 */  JZ 0x0e512549
/* 0e512529 */  LEA RSI,[RCX + RCX*0x2]
/* 0e51252d */  LEA RCX,[RDX + RSI*0x8]
/* 0e512531 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e512535 */  JNZ 0x0e512520
/* 0e512537 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e51253b */  CMP RCX,RAX
/* 0e51253e */  JNZ 0x0e512555
/* 0e512540 */  LEA RAX,[0xf7554b8]
/* 0e512547 */  JMP 0x0e512559
/* 0e512549 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e51254d */  MOV RCX,RAX
/* 0e512550 */  CMP RCX,RAX
/* 0e512553 */  JZ 0x0e512540
/* 0e512555 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e512559 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e51255d */  MOV R12,qword ptr [RAX + 0x20]
/* 0e512561 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e512565 */  CMP R12,RAX
/* 0e512568 */  JZ 0x0e51257f
/* 0e51256a */  NOP word ptr [RAX + RAX*0x1]
/* 0e512570 */  CMP dword ptr [R12],R13D
/* 0e512574 */  JZ 0x0e51257f
/* 0e512576 */  ADD R12,0x38
/* 0e51257a */  CMP R12,RAX
/* 0e51257d */  JNZ 0x0e512570
/* 0e51257f */  CMP R12,RAX
/* 0e512582 */  LEA R14,[0xe535290]
/* 0e512589 */  JNZ 0x0e5125c2
/* 0e51258b */  LEA RDI,[0x13e0236]
/* 0e512592 */  LEA RSI,[0x1208bb9]
/* 0e512599 */  LEA RCX,[0x119d818]
/* 0e5125a0 */  LEA R8,[0x14deddf]
/* 0e5125a7 */  MOV EDX,0x326
/* 0e5125ac */  XOR EAX,EAX
/* 0e5125ae */  CALL 0x0eeddcf0
/* 0e5125b3 */  TEST AL,AL
/* 0e5125b5 */  JZ 0x0e5125c2
/* 0e5125b7 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e5125c2 */  ADD R12,0x8
/* 0e5125c6 */  MOV byte ptr [RSP],0x0
/* 0e5125ca */  MOV RCX,RSP
/* 0e5125cd */  MOV RDI,R12
/* 0e5125d0 */  MOV RSI,R15
/* 0e5125d3 */  MOV RDX,R15
/* 0e5125d6 */  CALL 0x05d9c620
/* 0e5125db */  MOVAPS XMM0,xmmword ptr [RSP + 0x240]
/* 0e5125e3 */  MOVAPS XMM1,xmmword ptr [RSP + 0x250]
/* 0e5125eb */  MOVAPS XMM2,xmmword ptr [RSP + 0x260]
/* 0e5125f3 */  MOVAPS xmmword ptr [RSP + 0x200],XMM0
/* 0e5125fb */  MOVAPS xmmword ptr [RSP + 0x210],XMM1
/* 0e512603 */  MOVAPS xmmword ptr [RSP + 0x220],XMM2
/* 0e51260b */  MOVUPS XMM0,xmmword ptr [RSP + 0x26c]
/* 0e512613 */  MOVUPS xmmword ptr [RSP + 0x22c],XMM0
/* 0e51261b */  LEA RDI,[RSP + 0x70]
/* 0e512620 */  CALL 0x048b0bc0
/* 0e512625 */  MOV byte ptr [RSP + 0x388],0x26
/* 0e51262d */  LEA RSI,[RSP + 0x389]
/* 0e512635 */  MOVUPS XMM0,xmmword ptr [0x012b886b]
/* 0e51263c */  MOVUPS xmmword ptr [RSP + 0x389],XMM0
/* 0e512644 */  MOV dword ptr [RSP + 0x398],0x68637461
/* 0e51264f */  MOV byte ptr [RSP + 0x39c],0x0
/* 0e512657 */  LEA RDI,[RSP + 0x70]
/* 0e51265c */  MOV EDX,0x13
/* 0e512661 */  CALL 0x0e534c40
/* 0e512666 */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e51266e */  MOV ESI,EAX
/* 0e512670 */  SHR ESI,0x1
/* 0e512672 */  TEST AL,0x1
/* 0e512674 */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0e51267c */  CMOVZ RAX,RBP
/* 0e512680 */  CMOVNZ RSI,qword ptr [RSP + 0xa0]
/* 0e512689 */  TEST RSI,RSI
/* 0e51268c */  JZ 0x0e5126a2
/* 0e51268e */  MOV ECX,ESI
/* 0e512690 */  AND ECX,0x3
/* 0e512693 */  CMP RSI,0x4
/* 0e512697 */  JNC 0x0e5126ac
/* 0e512699 */  MOV EDX,0x811c9dc5
/* 0e51269e */  XOR EDI,EDI
/* 0e5126a0 */  JMP 0x0e512708
/* 0e5126a2 */  MOV EDX,0x811c9dc5
/* 0e5126a7 */  JMP 0x0e512734
/* 0e5126ac */  AND RSI,-0x4
/* 0e5126b0 */  MOV EDX,0x811c9dc5
/* 0e5126b5 */  XOR EDI,EDI
/* 0e5126b7 */  NOP word ptr [RAX + RAX*0x1]
/* 0e5126c0 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e5126c5 */  XOR R8D,EDX
/* 0e5126c8 */  IMUL EDX,R8D,0x1000193
/* 0e5126cf */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e5126d5 */  XOR R8D,EDX
/* 0e5126d8 */  IMUL EDX,R8D,0x1000193
/* 0e5126df */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e5126e5 */  XOR R8D,EDX
/* 0e5126e8 */  IMUL EDX,R8D,0x1000193
/* 0e5126ef */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e5126f5 */  XOR R8D,EDX
/* 0e5126f8 */  IMUL EDX,R8D,0x1000193
/* 0e5126ff */  ADD RDI,0x4
/* 0e512703 */  CMP RSI,RDI
/* 0e512706 */  JNZ 0x0e5126c0
/* 0e512708 */  TEST RCX,RCX
/* 0e51270b */  JZ 0x0e512734
/* 0e51270d */  ADD RAX,RDI
/* 0e512710 */  XOR ESI,ESI
/* 0e512712 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e512720 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e512724 */  XOR EDI,EDX
/* 0e512726 */  IMUL EDX,EDI,0x1000193
/* 0e51272c */  INC RSI
/* 0e51272f */  CMP RCX,RSI
/* 0e512732 */  JNZ 0x0e512720
/* 0e512734 */  MOV dword ptr [RSP + 0x228],0x2
/* 0e51273f */  MOV dword ptr [RSP + 0x22c],EDX
/* 0e512746 */  MOVZX EAX,byte ptr [0x0f755558]
/* 0e51274d */  TEST AL,AL
/* 0e51274f */  JZ 0x0e51ed24
/* 0e512755 */  LEA R15,[RSP + 0x208]
/* 0e51275d */  MOV EAX,dword ptr [RSP + 0x22c]
/* 0e512764 */  MOV dword ptr [RSP],EAX
/* 0e512767 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e512770 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e512778 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e512781 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e51278a */  MOV qword ptr [RSP + 0x28],R14
/* 0e51278f */  LEA RAX,[0x48b06d0]
/* 0e512796 */  MOV qword ptr [RSP + 0x30],RAX
/* 0e51279b */  LEA RAX,[0xe530ec0]
/* 0e5127a2 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e5127a7 */  LEA RAX,[0xe535630]
/* 0e5127ae */  MOV qword ptr [RSP + 0x40],RAX
/* 0e5127b3 */  LEA RAX,[0xe535640]
/* 0e5127ba */  MOV qword ptr [RSP + 0x48],RAX
/* 0e5127bf */  MOV dword ptr [RSP + 0x50],0x0
/* 0e5127c7 */  XORPS XMM0,XMM0
/* 0e5127ca */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e5127cf */  MOV RSI,RSP
/* 0e5127d2 */  MOV RDI,R15
/* 0e5127d5 */  CALL 0x048b05a0
/* 0e5127da */  MOV R12,qword ptr [RSP + 0x60]
/* 0e5127df */  TEST R12,R12
/* 0e5127e2 */  JZ 0x0e512809
/* 0e5127e4 */  MOV RAX,-0x1
/* 0e5127eb */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0e5127f2 */  TEST RAX,RAX
/* 0e5127f5 */  JNZ 0x0e512809
/* 0e5127f7 */  MOV RAX,qword ptr [R12]
/* 0e5127fb */  MOV RDI,R12
/* 0e5127fe */  CALL qword ptr [RAX + 0x10]
/* 0e512801 */  MOV RDI,R12
/* 0e512804 */  CALL 0x0412c2d0
/* 0e512809 */  MOVUPS XMM0,xmmword ptr [R15]
/* 0e51280d */  MOVUPS XMM1,xmmword ptr [R15 + 0x10]
/* 0e512812 */  MOVAPS xmmword ptr [RSP + 0x290],XMM1
/* 0e51281a */  MOVAPS xmmword ptr [RSP + 0x280],XMM0
/* 0e512822 */  MOV RDI,RSP
/* 0e512825 */  LEA RSI,[RSP + 0x280]
/* 0e51282d */  LEA RDX,[RSP + 0x70]
/* 0e512832 */  CALL 0x0e535020
/* 0e512837 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e51283b */  CMP EAX,0x2
/* 0e51283e */  JZ 0x0e512cbd
/* 0e512844 */  CMP EAX,0x1
/* 0e512847 */  JZ 0x0e5128bf
/* 0e512849 */  TEST EAX,EAX
/* 0e51284b */  JNZ 0x0e512859
/* 0e51284d */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e512852 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e512859 */  CMP byte ptr [RSP + 0x238],0x0
/* 0e512861 */  JZ 0x0e5128fd
/* 0e512867 */  JMP 0x0e51290d
/* 0e51286c */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e512871 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e512875 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e512879 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e51287d */  CMP dword ptr [RAX],ECX
/* 0e51287f */  JZ 0x0e51289f
/* 0e512881 */  ADD RAX,0x58
/* 0e512885 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e512890 */  MOV RDX,RAX
/* 0e512893 */  ADD RAX,0x58
/* 0e512897 */  CMP dword ptr [RDX],ECX
/* 0e512899 */  JNZ 0x0e512890
/* 0e51289b */  ADD RAX,-0x58
/* 0e51289f */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e5128a4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e5128a8 */  JZ 0x0e5124af
/* 0e5128ae */  NOP
/* 0e5128b0 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e5128b4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e5128b8 */  JNZ 0x0e5128b0
/* 0e5128ba */  JMP 0x0e5124af
/* 0e5128bf */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e5128c4 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e5128c8 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e5128cc */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e5128d0 */  CMP dword ptr [RAX],ECX
/* 0e5128d2 */  JZ 0x0e5128ef
/* 0e5128d4 */  ADD RAX,0x68
/* 0e5128d8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e5128e0 */  MOV RDX,RAX
/* 0e5128e3 */  ADD RAX,0x68
/* 0e5128e7 */  CMP dword ptr [RDX],ECX
/* 0e5128e9 */  JNZ 0x0e5128e0
/* 0e5128eb */  ADD RAX,-0x68
/* 0e5128ef */  OR byte ptr [RAX + 0x12],0x9
/* 0e5128f3 */  CMP byte ptr [RSP + 0x238],0x0
/* 0e5128fb */  JNZ 0x0e51290d
/* 0e5128fd */  MOV RDI,RSP
/* 0e512900 */  LEA RSI,[RSP + 0x200]
/* 0e512908 */  CALL 0x0e5353b0
/* 0e51290d */  MOV R13D,dword ptr [RSP + 0x234]
/* 0e512915 */  MOV R14,qword ptr [RSP + 0x200]
/* 0e51291d */  MOVZX EAX,byte ptr [0x0f755538]
/* 0e512924 */  TEST AL,AL
/* 0e512926 */  JZ 0x0e51ed78
/* 0e51292c */  LEA R15,[RSP + 0x22c]
/* 0e512934 */  MOV RAX,qword ptr [0x0f7554b8]
/* 0e51293b */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e51293e */  MOV RCX,qword ptr [R14 + 0x18]
/* 0e512942 */  MOV RDX,qword ptr [R14 + 0x20]
/* 0e512946 */  SUB RDX,RCX
/* 0e512949 */  SHR RDX,0x3
/* 0e51294d */  MOV ESI,0xffffffff
/* 0e512952 */  ADD EDX,ESI
/* 0e512954 */  AND EDX,EAX
/* 0e512956 */  LEA RCX,[RCX + RDX*0x8]
/* 0e51295a */  MOV RDX,qword ptr [R14 + 0x30]
/* 0e51295e */  NOP
/* 0e512960 */  MOV RCX,qword ptr [RCX]
/* 0e512963 */  CMP RCX,-0x1
/* 0e512967 */  JZ 0x0e512989
/* 0e512969 */  LEA RSI,[RCX + RCX*0x2]
/* 0e51296d */  LEA RCX,[RDX + RSI*0x8]
/* 0e512971 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e512975 */  JNZ 0x0e512960
/* 0e512977 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e51297b */  CMP RCX,RAX
/* 0e51297e */  JNZ 0x0e512995
/* 0e512980 */  LEA RAX,[0xf7554b8]
/* 0e512987 */  JMP 0x0e512999
/* 0e512989 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e51298d */  MOV RCX,RAX
/* 0e512990 */  CMP RCX,RAX
/* 0e512993 */  JZ 0x0e512980
/* 0e512995 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e512999 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e51299d */  MOV R12,qword ptr [RAX + 0x20]
/* 0e5129a1 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e5129a5 */  CMP R12,RAX
/* 0e5129a8 */  JZ 0x0e5129bf
/* 0e5129aa */  NOP word ptr [RAX + RAX*0x1]
/* 0e5129b0 */  CMP dword ptr [R12],R13D
/* 0e5129b4 */  JZ 0x0e5129bf
/* 0e5129b6 */  ADD R12,0x38
/* 0e5129ba */  CMP R12,RAX
/* 0e5129bd */  JNZ 0x0e5129b0
/* 0e5129bf */  CMP R12,RAX
/* 0e5129c2 */  LEA R14,[0xe535290]
/* 0e5129c9 */  JNZ 0x0e512a02
/* 0e5129cb */  LEA RDI,[0x13e0236]
/* 0e5129d2 */  LEA RSI,[0x1208bb9]
/* 0e5129d9 */  LEA RCX,[0x119d818]
/* 0e5129e0 */  LEA R8,[0x14deddf]
/* 0e5129e7 */  MOV EDX,0x326
/* 0e5129ec */  XOR EAX,EAX
/* 0e5129ee */  CALL 0x0eeddcf0
/* 0e5129f3 */  TEST AL,AL
/* 0e5129f5 */  JZ 0x0e512a02
/* 0e5129f7 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e512a02 */  ADD R12,0x8
/* 0e512a06 */  MOV byte ptr [RSP],0x0
/* 0e512a0a */  MOV RCX,RSP
/* 0e512a0d */  MOV RDI,R12
/* 0e512a10 */  MOV RSI,R15
/* 0e512a13 */  MOV RDX,R15
/* 0e512a16 */  CALL 0x05d9c620
/* 0e512a1b */  MOVAPS XMM0,xmmword ptr [RSP + 0x200]
/* 0e512a23 */  MOVAPS XMM1,xmmword ptr [RSP + 0x210]
/* 0e512a2b */  MOVDQA XMM2,xmmword ptr [RSP + 0x220]
/* 0e512a34 */  MOVAPS xmmword ptr [RSP + 0x1c0],XMM0
/* 0e512a3c */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM1
/* 0e512a44 */  MOVDQA xmmword ptr [RSP + 0x1e0],XMM2
/* 0e512a4d */  MOVUPS XMM0,xmmword ptr [RSP + 0x22c]
/* 0e512a55 */  MOVUPS xmmword ptr [RSP + 0x1ec],XMM0
/* 0e512a5d */  LEA RDI,[RSP + 0x70]
/* 0e512a62 */  CALL 0x048b0bc0
/* 0e512a67 */  LEA RDI,[0xf5463b0]
/* 0e512a6e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e512a75 */  MOV ESI,0x20
/* 0e512a7a */  CALL qword ptr [RAX + 0x10]
/* 0e512a7d */  MOV R15,RAX
/* 0e512a80 */  TEST RAX,RAX
/* 0e512a83 */  JZ 0x0e51e459
/* 0e512a89 */  MOVUPS XMM0,xmmword ptr [0x0133b905]
/* 0e512a90 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e512a95 */  MOVUPS XMM0,xmmword ptr [0x0133b8fb]
/* 0e512a9c */  MOVUPS xmmword ptr [R15],XMM0
/* 0e512aa0 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e512aa5 */  LEA RDI,[RSP + 0x70]
/* 0e512aaa */  MOV EDX,0x1a
/* 0e512aaf */  MOV RSI,R15
/* 0e512ab2 */  CALL 0x0e534c40
/* 0e512ab7 */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e512abf */  MOV ESI,EAX
/* 0e512ac1 */  SHR ESI,0x1
/* 0e512ac3 */  TEST AL,0x1
/* 0e512ac5 */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0e512acd */  CMOVZ RAX,RBP
/* 0e512ad1 */  CMOVNZ RSI,qword ptr [RSP + 0xa0]
/* 0e512ada */  TEST RSI,RSI
/* 0e512add */  JZ 0x0e512af3
/* 0e512adf */  MOV ECX,ESI
/* 0e512ae1 */  AND ECX,0x3
/* 0e512ae4 */  CMP RSI,0x4
/* 0e512ae8 */  JNC 0x0e512afd
/* 0e512aea */  MOV EDX,0x811c9dc5
/* 0e512aef */  XOR EDI,EDI
/* 0e512af1 */  JMP 0x0e512b58
/* 0e512af3 */  MOV EDX,0x811c9dc5
/* 0e512af8 */  JMP 0x0e512b84
/* 0e512afd */  AND RSI,-0x4
/* 0e512b01 */  MOV EDX,0x811c9dc5
/* 0e512b06 */  XOR EDI,EDI
/* 0e512b08 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e512b10 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e512b15 */  XOR R8D,EDX
/* 0e512b18 */  IMUL EDX,R8D,0x1000193
/* 0e512b1f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e512b25 */  XOR R8D,EDX
/* 0e512b28 */  IMUL EDX,R8D,0x1000193
/* 0e512b2f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e512b35 */  XOR R8D,EDX
/* 0e512b38 */  IMUL EDX,R8D,0x1000193
/* 0e512b3f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e512b45 */  XOR R8D,EDX
/* 0e512b48 */  IMUL EDX,R8D,0x1000193
/* 0e512b4f */  ADD RDI,0x4
/* 0e512b53 */  CMP RSI,RDI
/* 0e512b56 */  JNZ 0x0e512b10
/* 0e512b58 */  TEST RCX,RCX
/* 0e512b5b */  JZ 0x0e512b84
/* 0e512b5d */  ADD RAX,RDI
/* 0e512b60 */  XOR ESI,ESI
/* 0e512b62 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e512b70 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e512b74 */  XOR EDI,EDX
/* 0e512b76 */  IMUL EDX,EDI,0x1000193
/* 0e512b7c */  INC RSI
/* 0e512b7f */  CMP RCX,RSI
/* 0e512b82 */  JNZ 0x0e512b70
/* 0e512b84 */  MOV dword ptr [RSP + 0x1e8],0x2
/* 0e512b8f */  MOV dword ptr [RSP + 0x1ec],EDX
/* 0e512b96 */  MOVZX EAX,byte ptr [0x0f755558]
/* 0e512b9d */  TEST AL,AL
/* 0e512b9f */  JZ 0x0e51ee00
/* 0e512ba5 */  LEA R12,[RSP + 0x1c8]
/* 0e512bad */  MOV EAX,dword ptr [RSP + 0x1ec]
/* 0e512bb4 */  MOV dword ptr [RSP],EAX
/* 0e512bb7 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e512bc0 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e512bc8 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e512bd1 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e512bda */  MOV qword ptr [RSP + 0x28],R14
/* 0e512bdf */  LEA RAX,[0x48b06d0]
/* 0e512be6 */  MOV qword ptr [RSP + 0x30],RAX
/* 0e512beb */  LEA RAX,[0xe530ec0]
/* 0e512bf2 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e512bf7 */  LEA RAX,[0xe535690]
/* 0e512bfe */  MOV qword ptr [RSP + 0x40],RAX
/* 0e512c03 */  LEA RAX,[0xe5356a0]
/* 0e512c0a */  MOV qword ptr [RSP + 0x48],RAX
/* 0e512c0f */  MOV dword ptr [RSP + 0x50],0x0
/* 0e512c17 */  XORPS XMM0,XMM0
/* 0e512c1a */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e512c1f */  MOV RSI,RSP
/* 0e512c22 */  MOV RDI,R12
/* 0e512c25 */  CALL 0x048b05a0
/* 0e512c2a */  MOV R13,qword ptr [RSP + 0x60]
/* 0e512c2f */  TEST R13,R13
/* 0e512c32 */  JZ 0x0e512c58
/* 0e512c34 */  MOV RAX,-0x1
/* 0e512c3b */  XADD.LOCK qword ptr [R13 + 0x8],RAX
/* 0e512c41 */  TEST RAX,RAX
/* 0e512c44 */  JNZ 0x0e512c58
/* 0e512c46 */  MOV RAX,qword ptr [R13]
/* 0e512c4a */  MOV RDI,R13
/* 0e512c4d */  CALL qword ptr [RAX + 0x10]
/* 0e512c50 */  MOV RDI,R13
/* 0e512c53 */  CALL 0x0412c2d0
/* 0e512c58 */  MOVUPS XMM0,xmmword ptr [R12]
/* 0e512c5d */  MOVUPS XMM1,xmmword ptr [R12 + 0x10]
/* 0e512c63 */  MOVAPS xmmword ptr [RSP + 0x290],XMM1
/* 0e512c6b */  MOVAPS xmmword ptr [RSP + 0x280],XMM0
/* 0e512c73 */  MOV RDI,RSP
/* 0e512c76 */  LEA RSI,[RSP + 0x280]
/* 0e512c7e */  LEA RDX,[RSP + 0x70]
/* 0e512c83 */  CALL 0x0e535020
/* 0e512c88 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e512c8c */  CMP EAX,0x2
/* 0e512c8f */  JZ 0x0e5130f8
/* 0e512c95 */  CMP EAX,0x1
/* 0e512c98 */  JZ 0x0e512d0f
/* 0e512c9a */  TEST EAX,EAX
/* 0e512c9c */  JNZ 0x0e512caa
/* 0e512c9e */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e512ca3 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e512caa */  CMP byte ptr [RSP + 0x1f8],0x0
/* 0e512cb2 */  JZ 0x0e512d4d
/* 0e512cb8 */  JMP 0x0e512d5d
/* 0e512cbd */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e512cc2 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e512cc6 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e512cca */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e512cce */  CMP dword ptr [RAX],ECX
/* 0e512cd0 */  JZ 0x0e512cef
/* 0e512cd2 */  ADD RAX,0x58
/* 0e512cd6 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e512ce0 */  MOV RDX,RAX
/* 0e512ce3 */  ADD RAX,0x58
/* 0e512ce7 */  CMP dword ptr [RDX],ECX
/* 0e512ce9 */  JNZ 0x0e512ce0
/* 0e512ceb */  ADD RAX,-0x58
/* 0e512cef */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e512cf4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e512cf8 */  JZ 0x0e5128ef
/* 0e512cfe */  NOP
/* 0e512d00 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e512d04 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e512d08 */  JNZ 0x0e512d00
/* 0e512d0a */  JMP 0x0e5128ef
/* 0e512d0f */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e512d14 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e512d18 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e512d1c */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e512d20 */  CMP dword ptr [RAX],ECX
/* 0e512d22 */  JZ 0x0e512d3f
/* 0e512d24 */  ADD RAX,0x68
/* 0e512d28 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e512d30 */  MOV RDX,RAX
/* 0e512d33 */  ADD RAX,0x68
/* 0e512d37 */  CMP dword ptr [RDX],ECX
/* 0e512d39 */  JNZ 0x0e512d30
/* 0e512d3b */  ADD RAX,-0x68
/* 0e512d3f */  OR byte ptr [RAX + 0x12],0x9
/* 0e512d43 */  CMP byte ptr [RSP + 0x1f8],0x0
/* 0e512d4b */  JNZ 0x0e512d5d
/* 0e512d4d */  MOV RDI,RSP
/* 0e512d50 */  LEA RSI,[RSP + 0x1c0]
/* 0e512d58 */  CALL 0x0e5353b0
/* 0e512d5d */  MOV R14D,dword ptr [RSP + 0x1f4]
/* 0e512d65 */  MOV R13,qword ptr [RSP + 0x1c0]
/* 0e512d6d */  MOVZX EAX,byte ptr [0x0f755538]
/* 0e512d74 */  TEST AL,AL
/* 0e512d76 */  JZ 0x0e51ee7e
/* 0e512d7c */  LEA R12,[RSP + 0x1ec]
/* 0e512d84 */  MOV RAX,qword ptr [0x0f7554b8]
/* 0e512d8b */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e512d8e */  MOV RCX,qword ptr [R13 + 0x18]
/* 0e512d92 */  MOV RDX,qword ptr [R13 + 0x20]
/* 0e512d96 */  SUB RDX,RCX
/* 0e512d99 */  SHR RDX,0x3
/* 0e512d9d */  MOV ESI,0xffffffff
/* 0e512da2 */  ADD EDX,ESI
/* 0e512da4 */  AND EDX,EAX
/* 0e512da6 */  LEA RCX,[RCX + RDX*0x8]
/* 0e512daa */  MOV RDX,qword ptr [R13 + 0x30]
/* 0e512dae */  NOP
/* 0e512db0 */  MOV RCX,qword ptr [RCX]
/* 0e512db3 */  CMP RCX,-0x1
/* 0e512db7 */  JZ 0x0e512dd9
/* 0e512db9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e512dbd */  LEA RCX,[RDX + RSI*0x8]
/* 0e512dc1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e512dc5 */  JNZ 0x0e512db0
/* 0e512dc7 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e512dcb */  CMP RCX,RAX
/* 0e512dce */  JNZ 0x0e512de5
/* 0e512dd0 */  LEA RAX,[0xf7554b8]
/* 0e512dd7 */  JMP 0x0e512de9
/* 0e512dd9 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e512ddd */  MOV RCX,RAX
/* 0e512de0 */  CMP RCX,RAX
/* 0e512de3 */  JZ 0x0e512dd0
/* 0e512de5 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e512de9 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e512ded */  MOV R13,qword ptr [RAX + 0x20]
/* 0e512df1 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e512df5 */  CMP R13,RAX
/* 0e512df8 */  JZ 0x0e512e0f
/* 0e512dfa */  NOP word ptr [RAX + RAX*0x1]
/* 0e512e00 */  CMP dword ptr [R13],R14D
/* 0e512e04 */  JZ 0x0e512e0f
/* 0e512e06 */  ADD R13,0x38
/* 0e512e0a */  CMP R13,RAX
/* 0e512e0d */  JNZ 0x0e512e00
/* 0e512e0f */  CMP R13,RAX
/* 0e512e12 */  JNZ 0x0e512e4b
/* 0e512e14 */  LEA RDI,[0x13e0236]
/* 0e512e1b */  LEA RSI,[0x1208bb9]
/* 0e512e22 */  LEA RCX,[0x119d818]
/* 0e512e29 */  LEA R8,[0x14deddf]
/* 0e512e30 */  MOV EDX,0x326
/* 0e512e35 */  XOR EAX,EAX
/* 0e512e37 */  CALL 0x0eeddcf0
/* 0e512e3c */  TEST AL,AL
/* 0e512e3e */  JZ 0x0e512e4b
/* 0e512e40 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e512e4b */  ADD R13,0x8
/* 0e512e4f */  MOV byte ptr [RSP],0x0
/* 0e512e53 */  MOV RCX,RSP
/* 0e512e56 */  MOV RDI,R13
/* 0e512e59 */  MOV RSI,R12
/* 0e512e5c */  MOV RDX,R12
/* 0e512e5f */  CALL 0x05d9c620
/* 0e512e64 */  MOVAPS XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e512e6c */  MOVAPS XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e512e74 */  MOVDQA XMM2,xmmword ptr [RSP + 0x1e0]
/* 0e512e7d */  MOVAPS xmmword ptr [RSP + 0x140],XMM0
/* 0e512e85 */  MOVAPS xmmword ptr [RSP + 0x150],XMM1
/* 0e512e8d */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e512e96 */  MOVUPS XMM0,xmmword ptr [RSP + 0x1ec]
/* 0e512e9e */  MOVUPS xmmword ptr [RSP + 0x16c],XMM0
/* 0e512ea6 */  LEA RDI,[RSP + 0x70]
/* 0e512eab */  CALL 0x048b0bc0
/* 0e512eb0 */  LEA RDI,[0xf5463b0]
/* 0e512eb7 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e512ebe */  MOV ESI,0x28
/* 0e512ec3 */  CALL qword ptr [RAX + 0x10]
/* 0e512ec6 */  MOV R12,RAX
/* 0e512ec9 */  TEST RAX,RAX
/* 0e512ecc */  JZ 0x0e51e47b
/* 0e512ed2 */  MOVUPS XMM0,xmmword ptr [0x01202b67]
/* 0e512ed9 */  MOVUPS xmmword ptr [R12 + 0x10],XMM0
/* 0e512edf */  MOVUPS XMM0,xmmword ptr [0x01202b57]
/* 0e512ee6 */  MOVUPS xmmword ptr [R12],XMM0
/* 0e512eeb */  MOV word ptr [R12 + 0x20],0x68
/* 0e512ef3 */  LEA RDI,[RSP + 0x70]
/* 0e512ef8 */  MOV EDX,0x21
/* 0e512efd */  MOV RSI,R12
/* 0e512f00 */  CALL 0x0e534c40
/* 0e512f05 */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e512f0d */  MOV EDX,EAX
/* 0e512f0f */  SHR EDX,0x1
/* 0e512f11 */  TEST AL,0x1
/* 0e512f13 */  CMOVNZ RBP,qword ptr [RSP + 0xa8]
/* 0e512f1c */  CMOVNZ RDX,qword ptr [RSP + 0xa0]
/* 0e512f25 */  TEST RDX,RDX
/* 0e512f28 */  JZ 0x0e512f3e
/* 0e512f2a */  MOV EAX,EDX
/* 0e512f2c */  AND EAX,0x3
/* 0e512f2f */  CMP RDX,0x4
/* 0e512f33 */  JNC 0x0e512f45
/* 0e512f35 */  MOV ECX,0x811c9dc5
/* 0e512f3a */  XOR ESI,ESI
/* 0e512f3c */  JMP 0x0e512f8d
/* 0e512f3e */  MOV ECX,0x811c9dc5
/* 0e512f43 */  JMP 0x0e512fb5
/* 0e512f45 */  AND RDX,-0x4
/* 0e512f49 */  MOV ECX,0x811c9dc5
/* 0e512f4e */  XOR ESI,ESI
/* 0e512f50 */  MOVSX EDI,byte ptr [RBP + RSI*0x1]
/* 0e512f55 */  XOR EDI,ECX
/* 0e512f57 */  IMUL ECX,EDI,0x1000193
/* 0e512f5d */  MOVSX EDI,byte ptr [RBP + RSI*0x1 + 0x1]
/* 0e512f62 */  XOR EDI,ECX
/* 0e512f64 */  IMUL ECX,EDI,0x1000193
/* 0e512f6a */  MOVSX EDI,byte ptr [RBP + RSI*0x1 + 0x2]
/* 0e512f6f */  XOR EDI,ECX
/* 0e512f71 */  IMUL ECX,EDI,0x1000193
/* 0e512f77 */  MOVSX EDI,byte ptr [RBP + RSI*0x1 + 0x3]
/* 0e512f7c */  XOR EDI,ECX
/* 0e512f7e */  IMUL ECX,EDI,0x1000193
/* 0e512f84 */  ADD RSI,0x4
/* 0e512f88 */  CMP RDX,RSI
/* 0e512f8b */  JNZ 0x0e512f50
/* 0e512f8d */  TEST RAX,RAX
/* 0e512f90 */  JZ 0x0e512fb5
/* 0e512f92 */  ADD RBP,RSI
/* 0e512f95 */  XOR EDX,EDX
/* 0e512f97 */  NOP word ptr [RAX + RAX*0x1]
/* 0e512fa0 */  MOVSX ESI,byte ptr [RBP + RDX*0x1]
/* 0e512fa5 */  XOR ESI,ECX
/* 0e512fa7 */  IMUL ECX,ESI,0x1000193
/* 0e512fad */  INC RDX
/* 0e512fb0 */  CMP RAX,RDX
/* 0e512fb3 */  JNZ 0x0e512fa0
/* 0e512fb5 */  MOV dword ptr [RSP + 0x168],0x2
/* 0e512fc0 */  MOV dword ptr [RSP + 0x16c],ECX
/* 0e512fc7 */  MOVZX EAX,byte ptr [0x0f755558]
/* 0e512fce */  TEST AL,AL
/* 0e512fd0 */  JZ 0x0e51efb8
/* 0e512fd6 */  LEA R13,[RSP + 0x148]
/* 0e512fde */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e512fe5 */  MOV dword ptr [RSP],EAX
/* 0e512fe8 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e512ff1 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e512ff9 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e513002 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e51300b */  LEA RAX,[0xe535290]
/* 0e513012 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e513017 */  LEA RAX,[0x48b06d0]
/* 0e51301e */  MOV qword ptr [RSP + 0x30],RAX
/* 0e513023 */  LEA RAX,[0xe530ec0]
/* 0e51302a */  MOV qword ptr [RSP + 0x38],RAX
/* 0e51302f */  LEA RAX,[0xe5356f0]
/* 0e513036 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e51303b */  LEA RAX,[0xe535700]
/* 0e513042 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e513047 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e51304f */  XORPS XMM0,XMM0
/* 0e513052 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e513057 */  MOV RSI,RSP
/* 0e51305a */  MOV RDI,R13
/* 0e51305d */  CALL 0x048b05a0
/* 0e513062 */  MOV RBP,qword ptr [RSP + 0x60]
/* 0e513067 */  TEST RBP,RBP
/* 0e51306a */  JZ 0x0e513090
/* 0e51306c */  MOV RAX,-0x1
/* 0e513073 */  XADD.LOCK qword ptr [RBP + 0x8],RAX
/* 0e513079 */  TEST RAX,RAX
/* 0e51307c */  JNZ 0x0e513090
/* 0e51307e */  MOV RAX,qword ptr [RBP]
/* 0e513082 */  MOV RDI,RBP
/* 0e513085 */  CALL qword ptr [RAX + 0x10]
/* 0e513088 */  MOV RDI,RBP
/* 0e51308b */  CALL 0x0412c2d0
/* 0e513090 */  MOVDQU XMM0,xmmword ptr [R13]
/* 0e513096 */  MOVDQU XMM1,xmmword ptr [R13 + 0x10]
/* 0e51309c */  MOVDQA xmmword ptr [RSP + 0x290],XMM1
/* 0e5130a5 */  MOVDQA xmmword ptr [RSP + 0x280],XMM0
/* 0e5130ae */  MOV RDI,RSP
/* 0e5130b1 */  LEA RSI,[RSP + 0x280]
/* 0e5130b9 */  LEA RDX,[RSP + 0x70]
/* 0e5130be */  CALL 0x0e535020
/* 0e5130c3 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e5130c7 */  CMP EAX,0x2
/* 0e5130ca */  JZ 0x0e514a4f
/* 0e5130d0 */  CMP EAX,0x1
/* 0e5130d3 */  JZ 0x0e51314f
/* 0e5130d5 */  TEST EAX,EAX
/* 0e5130d7 */  JNZ 0x0e5130e5
/* 0e5130d9 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e5130de */  OR dword ptr [RAX + 0x18],0x90000
/* 0e5130e5 */  CMP byte ptr [RSP + 0x178],0x0
/* 0e5130ed */  JZ 0x0e51318d
/* 0e5130f3 */  JMP 0x0e51319d
/* 0e5130f8 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e5130fd */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e513101 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e513105 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e513109 */  CMP dword ptr [RAX],ECX
/* 0e51310b */  JZ 0x0e51312f
/* 0e51310d */  ADD RAX,0x58
/* 0e513111 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e513120 */  MOV RDX,RAX
/* 0e513123 */  ADD RAX,0x58
/* 0e513127 */  CMP dword ptr [RDX],ECX
/* 0e513129 */  JNZ 0x0e513120
/* 0e51312b */  ADD RAX,-0x58
/* 0e51312f */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e513134 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e513138 */  JZ 0x0e512d3f
/* 0e51313e */  NOP
/* 0e513140 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e513144 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e513148 */  JNZ 0x0e513140
/* 0e51314a */  JMP 0x0e512d3f
/* 0e51314f */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e513154 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e513158 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e51315c */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e513160 */  CMP dword ptr [RAX],ECX
/* 0e513162 */  JZ 0x0e51317f
/* 0e513164 */  ADD RAX,0x68
/* 0e513168 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e513170 */  MOV RDX,RAX
/* 0e513173 */  ADD RAX,0x68
/* 0e513177 */  CMP dword ptr [RDX],ECX
/* 0e513179 */  JNZ 0x0e513170
/* 0e51317b */  ADD RAX,-0x68
/* 0e51317f */  OR byte ptr [RAX + 0x12],0x9
/* 0e513183 */  CMP byte ptr [RSP + 0x178],0x0
/* 0e51318b */  JNZ 0x0e51319d
/* 0e51318d */  MOV RDI,RSP
/* 0e513190 */  LEA RSI,[RSP + 0x140]
/* 0e513198 */  CALL 0x0e5353b0
/* 0e51319d */  MOV R14D,dword ptr [RSP + 0x174]
/* 0e5131a5 */  MOV RBP,qword ptr [RSP + 0x140]
/* 0e5131ad */  MOVZX EAX,byte ptr [0x0f755538]
/* 0e5131b4 */  TEST AL,AL
/* 0e5131b6 */  JZ 0x0e51f050
/* 0e5131bc */  LEA R13,[RSP + 0x16c]
/* 0e5131c4 */  MOV RAX,qword ptr [0x0f7554b8]
/* 0e5131cb */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e5131ce */  MOV RCX,qword ptr [RBP + 0x18]
/* 0e5131d2 */  MOV RDX,qword ptr [RBP + 0x20]
/* 0e5131d6 */  SUB RDX,RCX
/* 0e5131d9 */  SHR RDX,0x3
/* 0e5131dd */  MOV ESI,0xffffffff
/* 0e5131e2 */  ADD EDX,ESI
/* 0e5131e4 */  AND EDX,EAX
/* 0e5131e6 */  LEA RCX,[RCX + RDX*0x8]
/* 0e5131ea */  MOV RDX,qword ptr [RBP + 0x30]
/* 0e5131ee */  NOP
/* 0e5131f0 */  MOV RCX,qword ptr [RCX]
/* 0e5131f3 */  CMP RCX,-0x1
/* 0e5131f7 */  JZ 0x0e513219
/* 0e5131f9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e5131fd */  LEA RCX,[RDX + RSI*0x8]
/* 0e513201 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e513205 */  JNZ 0x0e5131f0
/* 0e513207 */  MOV RAX,qword ptr [RBP + 0x38]
/* 0e51320b */  CMP RCX,RAX
/* 0e51320e */  JNZ 0x0e513225
/* 0e513210 */  LEA RAX,[0xf7554b8]
/* 0e513217 */  JMP 0x0e513229
/* 0e513219 */  MOV RAX,qword ptr [RBP + 0x38]
/* 0e51321d */  MOV RCX,RAX
/* 0e513220 */  CMP RCX,RAX
/* 0e513223 */  JZ 0x0e513210
/* 0e513225 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e513229 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e51322d */  MOV RBP,qword ptr [RAX + 0x20]
/* 0e513231 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e513235 */  CMP RBP,RAX
/* 0e513238 */  JZ 0x0e51324f
/* 0e51323a */  NOP word ptr [RAX + RAX*0x1]
/* 0e513240 */  CMP dword ptr [RBP],R14D
/* 0e513244 */  JZ 0x0e51324f
/* 0e513246 */  ADD RBP,0x38
/* 0e51324a */  CMP RBP,RAX
/* 0e51324d */  JNZ 0x0e513240
/* 0e51324f */  CMP RBP,RAX
/* 0e513252 */  JNZ 0x0e51328b
/* 0e513254 */  LEA RDI,[0x13e0236]
/* 0e51325b */  LEA RSI,[0x1208bb9]
/* 0e513262 */  LEA RCX,[0x119d818]
/* 0e513269 */  LEA R8,[0x14deddf]
/* 0e513270 */  MOV EDX,0x326
/* 0e513275 */  XOR EAX,EAX
/* 0e513277 */  CALL 0x0eeddcf0
/* 0e51327c */  TEST AL,AL
/* 0e51327e */  JZ 0x0e51328b
/* 0e513280 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e51328b */  ADD RBP,0x8
/* 0e51328f */  MOV byte ptr [RSP],0x0
/* 0e513293 */  MOV RCX,RSP
/* 0e513296 */  MOV RDI,RBP
/* 0e513299 */  MOV RSI,R13
/* 0e51329c */  MOV RDX,R13
/* 0e51329f */  CALL 0x05d9c620
/* 0e5132a4 */  LEA RDI,[RSP + 0x70]
/* 0e5132a9 */  CALL 0x048b0bc0
/* 0e5132ae */  MOV ESI,0x28
/* 0e5132b3 */  MOV RDI,R12
/* 0e5132b6 */  CALL 0x0412a280
/* 0e5132bb */  MOV ESI,0x20
/* 0e5132c0 */  MOV RDI,R15
/* 0e5132c3 */  CALL 0x0412a280
/* 0e5132c8 */  TEST byte ptr [RSP + 0x388],0x1
/* 0e5132d0 */  JZ 0x0e5132eb
/* 0e5132d2 */  MOV RSI,qword ptr [RSP + 0x388]
/* 0e5132da */  MOV RDI,qword ptr [RSP + 0x398]
/* 0e5132e2 */  AND RSI,-0x2
/* 0e5132e6 */  CALL 0x0412a280
/* 0e5132eb */  MOV ESI,0x20
/* 0e5132f0 */  MOV RDI,qword ptr [RSP + 0x380]
/* 0e5132f8 */  CALL 0x0412a280
/* 0e5132fd */  TEST byte ptr [RSP + 0x340],0x1
/* 0e513305 */  JZ 0x0e513320
/* 0e513307 */  MOV RSI,qword ptr [RSP + 0x340]
/* 0e51330f */  MOV RDI,qword ptr [RSP + 0x350]
/* 0e513317 */  AND RSI,-0x2
/* 0e51331b */  CALL 0x0412a280
/* 0e513320 */  TEST byte ptr [RSP + 0x308],0x1
/* 0e513328 */  JZ 0x0e513343
/* 0e51332a */  MOV RSI,qword ptr [RSP + 0x308]
/* 0e513332 */  MOV RDI,qword ptr [RSP + 0x318]
/* 0e51333a */  AND RSI,-0x2
/* 0e51333e */  CALL 0x0412a280
/* 0e513343 */  MOVZX EAX,byte ptr [0x0f7555f0]
/* 0e51334a */  TEST AL,AL
/* 0e51334c */  JZ 0x0e51e79a
/* 0e513352 */  MOV RAX,qword ptr [0x0f755570]
/* 0e513359 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e51335c */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e513360 */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e513364 */  SUB RDX,RCX
/* 0e513367 */  SHR RDX,0x3
/* 0e51336b */  MOV ESI,0xffffffff
/* 0e513370 */  ADD EDX,ESI
/* 0e513372 */  AND EDX,EAX
/* 0e513374 */  LEA RCX,[RCX + RDX*0x8]
/* 0e513378 */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e51337c */  NOP dword ptr [RAX]
/* 0e513380 */  MOV RCX,qword ptr [RCX]
/* 0e513383 */  CMP RCX,-0x1
/* 0e513387 */  JZ 0x0e5133b2
/* 0e513389 */  LEA RSI,[RCX + RCX*0x2]
/* 0e51338d */  LEA RCX,[RDX + RSI*0x8]
/* 0e513391 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e513395 */  JNZ 0x0e513380
/* 0e513397 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e51339b */  CMP RCX,RAX
/* 0e51339e */  JNZ 0x0e5133be
/* 0e5133a0 */  LEA RAX,[0xf755570]
/* 0e5133a7 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e5133ae */  JZ 0x0e5133cb
/* 0e5133b0 */  JMP 0x0e5133f8
/* 0e5133b2 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e5133b6 */  MOV RCX,RAX
/* 0e5133b9 */  CMP RCX,RAX
/* 0e5133bc */  JZ 0x0e5133a0
/* 0e5133be */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e5133c2 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e5133c9 */  JNZ 0x0e5133f8
/* 0e5133cb */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e5133cf */  TEST RAX,RAX
/* 0e5133d2 */  JZ 0x0e5133f8
/* 0e5133d4 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e5133d8 */  LEA RDX,[RAX + 0x9]
/* 0e5133dc */  MOV ECX,ESI
/* 0e5133de */  SHR ECX,0x1
/* 0e5133e0 */  TEST SIL,0x1
/* 0e5133e4 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e5133e9 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e5133ee */  LEA RDI,[RSP + 0x180]
/* 0e5133f6 */  JMP 0x0e51340c
/* 0e5133f8 */  LEA RDX,[0x1442d8c]
/* 0e5133ff */  LEA RDI,[RSP + 0x180]
/* 0e513407 */  MOV ECX,0x7
/* 0e51340c */  MOV RSI,RBX
/* 0e51340f */  CALL 0x0e535c50
/* 0e513414 */  MOV byte ptr [RSP + 0x1b4],0x0
/* 0e51341c */  MOV byte ptr [RSP + 0x1b8],0x0
/* 0e513424 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e51342c */  JNZ 0x0e513c5e
/* 0e513432 */  MOV byte ptr [RSP + 0x200],0x2a
/* 0e51343a */  LEA RSI,[RSP + 0x201]
/* 0e513442 */  MOVUPS XMM0,xmmword ptr [0x0145a6ee]
/* 0e513449 */  MOVUPS xmmword ptr [RSP + 0x201],XMM0
/* 0e513451 */  MOV RAX,0x657572745f737961
/* 0e51345b */  MOV qword ptr [RSP + 0x20e],RAX
/* 0e513463 */  MOV byte ptr [RSP + 0x216],0x0
/* 0e51346b */  LEA RDI,[RSP + 0x70]
/* 0e513470 */  MOV EDX,0x15
/* 0e513475 */  CALL 0x0e5394d0
/* 0e51347a */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e513482 */  MOV ESI,EAX
/* 0e513484 */  SHR ESI,0x1
/* 0e513486 */  TEST AL,0x1
/* 0e513488 */  LEA R12,[RSP + 0x99]
/* 0e513490 */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0e513498 */  CMOVZ RAX,R12
/* 0e51349c */  CMOVNZ RSI,qword ptr [RSP + 0xa0]
/* 0e5134a5 */  TEST RSI,RSI
/* 0e5134a8 */  JZ 0x0e5134be
/* 0e5134aa */  MOV ECX,ESI
/* 0e5134ac */  AND ECX,0x3
/* 0e5134af */  CMP RSI,0x4
/* 0e5134b3 */  JNC 0x0e5134c8
/* 0e5134b5 */  MOV EDX,0x811c9dc5
/* 0e5134ba */  XOR EDI,EDI
/* 0e5134bc */  JMP 0x0e513528
/* 0e5134be */  MOV EDX,0x811c9dc5
/* 0e5134c3 */  JMP 0x0e513554
/* 0e5134c8 */  AND RSI,-0x4
/* 0e5134cc */  MOV EDX,0x811c9dc5
/* 0e5134d1 */  XOR EDI,EDI
/* 0e5134d3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e5134e0 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e5134e5 */  XOR R8D,EDX
/* 0e5134e8 */  IMUL EDX,R8D,0x1000193
/* 0e5134ef */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e5134f5 */  XOR R8D,EDX
/* 0e5134f8 */  IMUL EDX,R8D,0x1000193
/* 0e5134ff */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e513505 */  XOR R8D,EDX
/* 0e513508 */  IMUL EDX,R8D,0x1000193
/* 0e51350f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e513515 */  XOR R8D,EDX
/* 0e513518 */  IMUL EDX,R8D,0x1000193
/* 0e51351f */  ADD RDI,0x4
/* 0e513523 */  CMP RSI,RDI
/* 0e513526 */  JNZ 0x0e5134e0
/* 0e513528 */  TEST RCX,RCX
/* 0e51352b */  JZ 0x0e513554
/* 0e51352d */  ADD RAX,RDI
/* 0e513530 */  XOR ESI,ESI
/* 0e513532 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e513540 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e513544 */  XOR EDI,EDX
/* 0e513546 */  IMUL EDX,EDI,0x1000193
/* 0e51354c */  INC RSI
/* 0e51354f */  CMP RCX,RSI
/* 0e513552 */  JNZ 0x0e513540
/* 0e513554 */  MOV dword ptr [RSP + 0x1a8],0x2
/* 0e51355f */  MOV dword ptr [RSP + 0x1ac],EDX
/* 0e513566 */  MOVZX EAX,byte ptr [0x0f755610]
/* 0e51356d */  TEST AL,AL
/* 0e51356f */  JZ 0x0e51ed4e
/* 0e513575 */  LEA R14,[RSP + 0x188]
/* 0e51357d */  MOV EAX,dword ptr [RSP + 0x1ac]
/* 0e513584 */  MOV dword ptr [RSP],EAX
/* 0e513587 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e513590 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e513598 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e5135a1 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e5135aa */  LEA R13,[0xe539b20]
/* 0e5135b1 */  MOV qword ptr [RSP + 0x28],R13
/* 0e5135b6 */  LEA RAX,[0x48b06d0]
/* 0e5135bd */  MOV qword ptr [RSP + 0x30],RAX
/* 0e5135c2 */  LEA RAX,[0xe535750]
/* 0e5135c9 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e5135ce */  LEA RAX,[0xe539be0]
/* 0e5135d5 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e5135da */  LEA RAX,[0xe539bf0]
/* 0e5135e1 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e5135e6 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e5135ee */  XORPS XMM0,XMM0
/* 0e5135f1 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e5135f6 */  MOV RSI,RSP
/* 0e5135f9 */  MOV RDI,R14
/* 0e5135fc */  CALL 0x048b05a0
/* 0e513601 */  MOV R15,qword ptr [RSP + 0x60]
/* 0e513606 */  TEST R15,R15
/* 0e513609 */  JZ 0x0e51362e
/* 0e51360b */  MOV RAX,-0x1
/* 0e513612 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e513618 */  TEST RAX,RAX
/* 0e51361b */  JNZ 0x0e51362e
/* 0e51361d */  MOV RAX,qword ptr [R15]
/* 0e513620 */  MOV RDI,R15
/* 0e513623 */  CALL qword ptr [RAX + 0x10]
/* 0e513626 */  MOV RDI,R15
/* 0e513629 */  CALL 0x0412c2d0
/* 0e51362e */  MOVUPS XMM0,xmmword ptr [R14]
/* 0e513632 */  MOVUPS XMM1,xmmword ptr [R14 + 0x10]
/* 0e513637 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM1
/* 0e51363f */  MOVAPS xmmword ptr [RSP + 0x1c0],XMM0
/* 0e513647 */  MOV RDI,RSP
/* 0e51364a */  LEA RSI,[RSP + 0x1c0]
/* 0e513652 */  LEA RDX,[RSP + 0x70]
/* 0e513657 */  CALL 0x0e5398b0
/* 0e51365c */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e513660 */  CMP EAX,0x2
/* 0e513663 */  JZ 0x0e513a7a
/* 0e513669 */  CMP EAX,0x1
/* 0e51366c */  JZ 0x0e51368a
/* 0e51366e */  TEST EAX,EAX
/* 0e513670 */  JNZ 0x0e51367e
/* 0e513672 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e513677 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e51367e */  CMP byte ptr [RSP + 0x1b8],0x0
/* 0e513686 */  JZ 0x0e5136cd
/* 0e513688 */  JMP 0x0e5136dd
/* 0e51368a */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e51368f */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e513693 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e513697 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e51369b */  CMP dword ptr [RAX],ECX
/* 0e51369d */  JZ 0x0e5136bf
/* 0e51369f */  ADD RAX,0x68
/* 0e5136a3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e5136b0 */  MOV RDX,RAX
/* 0e5136b3 */  ADD RAX,0x68
/* 0e5136b7 */  CMP dword ptr [RDX],ECX
/* 0e5136b9 */  JNZ 0x0e5136b0
/* 0e5136bb */  ADD RAX,-0x68
/* 0e5136bf */  OR byte ptr [RAX + 0x12],0x9
/* 0e5136c3 */  CMP byte ptr [RSP + 0x1b8],0x0
/* 0e5136cb */  JNZ 0x0e5136dd
/* 0e5136cd */  MOV RDI,RSP
/* 0e5136d0 */  LEA RSI,[RSP + 0x180]
/* 0e5136d8 */  CALL 0x0e539c40
/* 0e5136dd */  MOV EBP,dword ptr [RSP + 0x1b4]
/* 0e5136e4 */  MOV R15,qword ptr [RSP + 0x180]
/* 0e5136ec */  MOVZX EAX,byte ptr [0x0f7555f0]
/* 0e5136f3 */  TEST AL,AL
/* 0e5136f5 */  JZ 0x0e51edbc
/* 0e5136fb */  LEA R14,[RSP + 0x1ac]
/* 0e513703 */  MOV RAX,qword ptr [0x0f755570]
/* 0e51370a */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e51370d */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e513711 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e513715 */  SUB RDX,RCX
/* 0e513718 */  SHR RDX,0x3
/* 0e51371c */  MOV ESI,0xffffffff
/* 0e513721 */  ADD EDX,ESI
/* 0e513723 */  AND EDX,EAX
/* 0e513725 */  LEA RCX,[RCX + RDX*0x8]
/* 0e513729 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e51372d */  NOP dword ptr [RAX]
/* 0e513730 */  MOV RCX,qword ptr [RCX]
/* 0e513733 */  CMP RCX,-0x1
/* 0e513737 */  JZ 0x0e513759
/* 0e513739 */  LEA RSI,[RCX + RCX*0x2]
/* 0e51373d */  LEA RCX,[RDX + RSI*0x8]
/* 0e513741 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e513745 */  JNZ 0x0e513730
/* 0e513747 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e51374b */  CMP RCX,RAX
/* 0e51374e */  JNZ 0x0e513765
/* 0e513750 */  LEA RAX,[0xf755570]
/* 0e513757 */  JMP 0x0e513769
/* 0e513759 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e51375d */  MOV RCX,RAX
/* 0e513760 */  CMP RCX,RAX
/* 0e513763 */  JZ 0x0e513750
/* 0e513765 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e513769 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e51376d */  MOV R15,qword ptr [RAX + 0x20]
/* 0e513771 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e513775 */  CMP R15,RAX
/* 0e513778 */  JZ 0x0e51378e
/* 0e51377a */  NOP word ptr [RAX + RAX*0x1]
/* 0e513780 */  CMP dword ptr [R15],EBP
/* 0e513783 */  JZ 0x0e51378e
/* 0e513785 */  ADD R15,0x38
/* 0e513789 */  CMP R15,RAX
/* 0e51378c */  JNZ 0x0e513780
/* 0e51378e */  CMP R15,RAX
/* 0e513791 */  MOV RBP,R13
/* 0e513794 */  LEA R13,[0x48b06d0]
/* 0e51379b */  JNZ 0x0e5137d4
/* 0e51379d */  LEA RDI,[0x13e0236]
/* 0e5137a4 */  LEA RSI,[0x1208bb9]
/* 0e5137ab */  LEA RCX,[0x119d818]
/* 0e5137b2 */  LEA R8,[0x129f3a4]
/* 0e5137b9 */  MOV EDX,0x326
/* 0e5137be */  XOR EAX,EAX
/* 0e5137c0 */  CALL 0x0eeddcf0
/* 0e5137c5 */  TEST AL,AL
/* 0e5137c7 */  JZ 0x0e5137d4
/* 0e5137c9 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e5137d4 */  ADD R15,0x8
/* 0e5137d8 */  MOV byte ptr [RSP],0x0
/* 0e5137dc */  MOV RCX,RSP
/* 0e5137df */  MOV RDI,R15
/* 0e5137e2 */  MOV RSI,R14
/* 0e5137e5 */  MOV RDX,R14
/* 0e5137e8 */  CALL 0x05d9c620
/* 0e5137ed */  MOVUPS XMM0,xmmword ptr [RSP + 0x180]
/* 0e5137f5 */  MOVUPS XMM1,xmmword ptr [RSP + 0x190]
/* 0e5137fd */  MOVDQU XMM2,xmmword ptr [RSP + 0x1a0]
/* 0e513806 */  MOVDQU XMM3,xmmword ptr [RSP + 0x1ac]
/* 0e51380f */  MOVAPS xmmword ptr [RSP + 0x140],XMM0
/* 0e513817 */  MOVAPS xmmword ptr [RSP + 0x150],XMM1
/* 0e51381f */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e513828 */  MOVDQU xmmword ptr [RSP + 0x16c],XMM3
/* 0e513831 */  LEA RDI,[RSP + 0x70]
/* 0e513836 */  CALL 0x048b0bc0
/* 0e51383b */  LEA RDI,[0xf5463b0]
/* 0e513842 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e513849 */  MOV ESI,0x28
/* 0e51384e */  CALL qword ptr [RAX + 0x10]
/* 0e513851 */  MOV R14,RAX
/* 0e513854 */  TEST RAX,RAX
/* 0e513857 */  JZ 0x0e51e46a
/* 0e51385d */  MOVUPS XMM0,xmmword ptr [0x014c399c]
/* 0e513864 */  MOVUPS xmmword ptr [R14 + 0x10],XMM0
/* 0e513869 */  MOVUPS XMM0,xmmword ptr [0x014c398c]
/* 0e513870 */  MOVUPS xmmword ptr [R14],XMM0
/* 0e513874 */  MOV word ptr [R14 + 0x20],0x73
/* 0e51387b */  LEA RDI,[RSP + 0x70]
/* 0e513880 */  MOV EDX,0x21
/* 0e513885 */  MOV RSI,R14
/* 0e513888 */  CALL 0x0e5394d0
/* 0e51388d */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e513895 */  MOV EDX,EAX
/* 0e513897 */  SHR EDX,0x1
/* 0e513899 */  TEST AL,0x1
/* 0e51389b */  CMOVNZ R12,qword ptr [RSP + 0xa8]
/* 0e5138a4 */  CMOVNZ RDX,qword ptr [RSP + 0xa0]
/* 0e5138ad */  TEST RDX,RDX
/* 0e5138b0 */  JZ 0x0e5138c6
/* 0e5138b2 */  MOV EAX,EDX
/* 0e5138b4 */  AND EAX,0x3
/* 0e5138b7 */  CMP RDX,0x4
/* 0e5138bb */  JNC 0x0e5138cd
/* 0e5138bd */  MOV ECX,0x811c9dc5
/* 0e5138c2 */  XOR ESI,ESI
/* 0e5138c4 */  JMP 0x0e513920
/* 0e5138c6 */  MOV ECX,0x811c9dc5
/* 0e5138cb */  JMP 0x0e513945
/* 0e5138cd */  AND RDX,-0x4
/* 0e5138d1 */  MOV ECX,0x811c9dc5
/* 0e5138d6 */  XOR ESI,ESI
/* 0e5138d8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e5138e0 */  MOVSX EDI,byte ptr [R12 + RSI*0x1]
/* 0e5138e5 */  XOR EDI,ECX
/* 0e5138e7 */  IMUL ECX,EDI,0x1000193
/* 0e5138ed */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x1]
/* 0e5138f3 */  XOR EDI,ECX
/* 0e5138f5 */  IMUL ECX,EDI,0x1000193
/* 0e5138fb */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x2]
/* 0e513901 */  XOR EDI,ECX
/* 0e513903 */  IMUL ECX,EDI,0x1000193
/* 0e513909 */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x3]
/* 0e51390f */  XOR EDI,ECX
/* 0e513911 */  IMUL ECX,EDI,0x1000193
/* 0e513917 */  ADD RSI,0x4
/* 0e51391b */  CMP RDX,RSI
/* 0e51391e */  JNZ 0x0e5138e0
/* 0e513920 */  TEST RAX,RAX
/* 0e513923 */  JZ 0x0e513945
/* 0e513925 */  ADD R12,RSI
/* 0e513928 */  XOR EDX,EDX
/* 0e51392a */  NOP word ptr [RAX + RAX*0x1]
/* 0e513930 */  MOVSX ESI,byte ptr [R12 + RDX*0x1]
/* 0e513935 */  XOR ESI,ECX
/* 0e513937 */  IMUL ECX,ESI,0x1000193
/* 0e51393d */  INC RDX
/* 0e513940 */  CMP RAX,RDX
/* 0e513943 */  JNZ 0x0e513930
/* 0e513945 */  MOV dword ptr [RSP + 0x168],0x2
/* 0e513950 */  MOV dword ptr [RSP + 0x16c],ECX
/* 0e513957 */  MOVZX EAX,byte ptr [0x0f755610]
/* 0e51395e */  TEST AL,AL
/* 0e513960 */  JZ 0x0e51ee54
/* 0e513966 */  LEA R15,[RSP + 0x148]
/* 0e51396e */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e513975 */  MOV dword ptr [RSP],EAX
/* 0e513978 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e513981 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e513989 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e513992 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e51399b */  MOV qword ptr [RSP + 0x28],RBP
/* 0e5139a0 */  MOV qword ptr [RSP + 0x30],R13
/* 0e5139a5 */  LEA RAX,[0xe535750]
/* 0e5139ac */  MOV qword ptr [RSP + 0x38],RAX
/* 0e5139b1 */  LEA RAX,[0xe539e00]
/* 0e5139b8 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e5139bd */  LEA RAX,[0xe539e10]
/* 0e5139c4 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e5139c9 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e5139d1 */  XORPS XMM0,XMM0
/* 0e5139d4 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e5139d9 */  MOV RSI,RSP
/* 0e5139dc */  MOV RDI,R15
/* 0e5139df */  CALL 0x048b05a0
/* 0e5139e4 */  MOV R12,qword ptr [RSP + 0x60]
/* 0e5139e9 */  TEST R12,R12
/* 0e5139ec */  JZ 0x0e513a13
/* 0e5139ee */  MOV RAX,-0x1
/* 0e5139f5 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0e5139fc */  TEST RAX,RAX
/* 0e5139ff */  JNZ 0x0e513a13
/* 0e513a01 */  MOV RAX,qword ptr [R12]
/* 0e513a05 */  MOV RDI,R12
/* 0e513a08 */  CALL qword ptr [RAX + 0x10]
/* 0e513a0b */  MOV RDI,R12
/* 0e513a0e */  CALL 0x0412c2d0
/* 0e513a13 */  MOVDQU XMM0,xmmword ptr [R15]
/* 0e513a18 */  MOVDQU XMM1,xmmword ptr [R15 + 0x10]
/* 0e513a1e */  MOVDQA xmmword ptr [RSP + 0x1d0],XMM1
/* 0e513a27 */  MOVDQA xmmword ptr [RSP + 0x1c0],XMM0
/* 0e513a30 */  MOV RDI,RSP
/* 0e513a33 */  LEA RSI,[RSP + 0x1c0]
/* 0e513a3b */  LEA RDX,[RSP + 0x70]
/* 0e513a40 */  CALL 0x0e5398b0
/* 0e513a45 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e513a49 */  CMP EAX,0x2
/* 0e513a4c */  JZ 0x0e5143cf
/* 0e513a52 */  CMP EAX,0x1
/* 0e513a55 */  JZ 0x0e513acf
/* 0e513a57 */  TEST EAX,EAX
/* 0e513a59 */  JNZ 0x0e513a67
/* 0e513a5b */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e513a60 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e513a67 */  CMP byte ptr [RSP + 0x178],0x0
/* 0e513a6f */  JZ 0x0e513b0d
/* 0e513a75 */  JMP 0x0e513b1d
/* 0e513a7a */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e513a7f */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e513a83 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e513a87 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e513a8b */  CMP dword ptr [RAX],ECX
/* 0e513a8d */  JZ 0x0e513aaf
/* 0e513a8f */  ADD RAX,0x58
/* 0e513a93 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e513aa0 */  MOV RDX,RAX
/* 0e513aa3 */  ADD RAX,0x58
/* 0e513aa7 */  CMP dword ptr [RDX],ECX
/* 0e513aa9 */  JNZ 0x0e513aa0
/* 0e513aab */  ADD RAX,-0x58
/* 0e513aaf */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e513ab4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e513ab8 */  JZ 0x0e5136bf
/* 0e513abe */  NOP
/* 0e513ac0 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e513ac4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e513ac8 */  JNZ 0x0e513ac0
/* 0e513aca */  JMP 0x0e5136bf
/* 0e513acf */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e513ad4 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e513ad8 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e513adc */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e513ae0 */  CMP dword ptr [RAX],ECX
/* 0e513ae2 */  JZ 0x0e513aff
/* 0e513ae4 */  ADD RAX,0x68
/* 0e513ae8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e513af0 */  MOV RDX,RAX
/* 0e513af3 */  ADD RAX,0x68
/* 0e513af7 */  CMP dword ptr [RDX],ECX
/* 0e513af9 */  JNZ 0x0e513af0
/* 0e513afb */  ADD RAX,-0x68
/* 0e513aff */  OR byte ptr [RAX + 0x12],0x9
/* 0e513b03 */  CMP byte ptr [RSP + 0x178],0x0
/* 0e513b0b */  JNZ 0x0e513b1d
/* 0e513b0d */  MOV RDI,RSP
/* 0e513b10 */  LEA RSI,[RSP + 0x140]
/* 0e513b18 */  CALL 0x0e539c40
/* 0e513b1d */  MOV EBP,dword ptr [RSP + 0x174]
/* 0e513b24 */  MOV R12,qword ptr [RSP + 0x140]
/* 0e513b2c */  MOVZX EAX,byte ptr [0x0f7555f0]
/* 0e513b33 */  TEST AL,AL
/* 0e513b35 */  JZ 0x0e51ef06
/* 0e513b3b */  LEA R15,[RSP + 0x16c]
/* 0e513b43 */  MOV RAX,qword ptr [0x0f755570]
/* 0e513b4a */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e513b4d */  MOV RCX,qword ptr [R12 + 0x18]
/* 0e513b52 */  MOV RDX,qword ptr [R12 + 0x20]
/* 0e513b57 */  SUB RDX,RCX
/* 0e513b5a */  SHR RDX,0x3
/* 0e513b5e */  MOV ESI,0xffffffff
/* 0e513b63 */  ADD EDX,ESI
/* 0e513b65 */  AND EDX,EAX
/* 0e513b67 */  LEA RCX,[RCX + RDX*0x8]
/* 0e513b6b */  MOV RDX,qword ptr [R12 + 0x30]
/* 0e513b70 */  MOV RCX,qword ptr [RCX]
/* 0e513b73 */  CMP RCX,-0x1
/* 0e513b77 */  JZ 0x0e513b9a
/* 0e513b79 */  LEA RSI,[RCX + RCX*0x2]
/* 0e513b7d */  LEA RCX,[RDX + RSI*0x8]
/* 0e513b81 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e513b85 */  JNZ 0x0e513b70
/* 0e513b87 */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e513b8c */  CMP RCX,RAX
/* 0e513b8f */  JNZ 0x0e513ba7
/* 0e513b91 */  LEA RAX,[0xf755570]
/* 0e513b98 */  JMP 0x0e513bab
/* 0e513b9a */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e513b9f */  MOV RCX,RAX
/* 0e513ba2 */  CMP RCX,RAX
/* 0e513ba5 */  JZ 0x0e513b91
/* 0e513ba7 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e513bab */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e513baf */  MOV R12,qword ptr [RAX + 0x20]
/* 0e513bb3 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e513bb7 */  CMP R12,RAX
/* 0e513bba */  JZ 0x0e513bcf
/* 0e513bbc */  NOP dword ptr [RAX]
/* 0e513bc0 */  CMP dword ptr [R12],EBP
/* 0e513bc4 */  JZ 0x0e513bcf
/* 0e513bc6 */  ADD R12,0x38
/* 0e513bca */  CMP R12,RAX
/* 0e513bcd */  JNZ 0x0e513bc0
/* 0e513bcf */  CMP R12,RAX
/* 0e513bd2 */  JNZ 0x0e513c0b
/* 0e513bd4 */  LEA RDI,[0x13e0236]
/* 0e513bdb */  LEA RSI,[0x1208bb9]
/* 0e513be2 */  LEA RCX,[0x119d818]
/* 0e513be9 */  LEA R8,[0x129f3a4]
/* 0e513bf0 */  MOV EDX,0x326
/* 0e513bf5 */  XOR EAX,EAX
/* 0e513bf7 */  CALL 0x0eeddcf0
/* 0e513bfc */  TEST AL,AL
/* 0e513bfe */  JZ 0x0e513c0b
/* 0e513c00 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e513c0b */  ADD R12,0x8
/* 0e513c0f */  MOV byte ptr [RSP],0x0
/* 0e513c13 */  MOV RCX,RSP
/* 0e513c16 */  MOV RDI,R12
/* 0e513c19 */  MOV RSI,R15
/* 0e513c1c */  MOV RDX,R15
/* 0e513c1f */  CALL 0x05d9c620
/* 0e513c24 */  LEA RDI,[RSP + 0x70]
/* 0e513c29 */  CALL 0x048b0bc0
/* 0e513c2e */  MOV ESI,0x28
/* 0e513c33 */  MOV RDI,R14
/* 0e513c36 */  CALL 0x0412a280
/* 0e513c3b */  TEST byte ptr [RSP + 0x200],0x1
/* 0e513c43 */  JZ 0x0e513c5e
/* 0e513c45 */  MOV RSI,qword ptr [RSP + 0x200]
/* 0e513c4d */  MOV RDI,qword ptr [RSP + 0x210]
/* 0e513c55 */  AND RSI,-0x2
/* 0e513c59 */  CALL 0x0412a280
/* 0e513c5e */  MOVZX EAX,byte ptr [0x0f7556a8]
/* 0e513c65 */  TEST AL,AL
/* 0e513c67 */  JZ 0x0e51e7de
/* 0e513c6d */  MOV RAX,qword ptr [0x0f755628]
/* 0e513c74 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e513c77 */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e513c7b */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e513c7f */  SUB RDX,RCX
/* 0e513c82 */  SHR RDX,0x3
/* 0e513c86 */  MOV ESI,0xffffffff
/* 0e513c8b */  ADD EDX,ESI
/* 0e513c8d */  AND EDX,EAX
/* 0e513c8f */  LEA RCX,[RCX + RDX*0x8]
/* 0e513c93 */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e513c97 */  NOP word ptr [RAX + RAX*0x1]
/* 0e513ca0 */  MOV RCX,qword ptr [RCX]
/* 0e513ca3 */  CMP RCX,-0x1
/* 0e513ca7 */  JZ 0x0e513cd2
/* 0e513ca9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e513cad */  LEA RCX,[RDX + RSI*0x8]
/* 0e513cb1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e513cb5 */  JNZ 0x0e513ca0
/* 0e513cb7 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e513cbb */  CMP RCX,RAX
/* 0e513cbe */  JNZ 0x0e513cde
/* 0e513cc0 */  LEA RAX,[0xf755628]
/* 0e513cc7 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e513cce */  JZ 0x0e513ceb
/* 0e513cd0 */  JMP 0x0e513d18
/* 0e513cd2 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e513cd6 */  MOV RCX,RAX
/* 0e513cd9 */  CMP RCX,RAX
/* 0e513cdc */  JZ 0x0e513cc0
/* 0e513cde */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e513ce2 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e513ce9 */  JNZ 0x0e513d18
/* 0e513ceb */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e513cef */  TEST RAX,RAX
/* 0e513cf2 */  JZ 0x0e513d18
/* 0e513cf4 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e513cf8 */  LEA RDX,[RAX + 0x9]
/* 0e513cfc */  MOV ECX,ESI
/* 0e513cfe */  SHR ECX,0x1
/* 0e513d00 */  TEST SIL,0x1
/* 0e513d04 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e513d09 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e513d0e */  LEA RDI,[RSP + 0x180]
/* 0e513d16 */  JMP 0x0e513d2c
/* 0e513d18 */  LEA RDX,[0x14c39ae]
/* 0e513d1f */  LEA RDI,[RSP + 0x180]
/* 0e513d27 */  MOV ECX,0x17
/* 0e513d2c */  MOV RSI,RBX
/* 0e513d2f */  CALL 0x0e53a360
/* 0e513d34 */  MOV byte ptr [RSP + 0x1b4],0x0
/* 0e513d3c */  MOV byte ptr [RSP + 0x1b8],0x0
/* 0e513d44 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e513d4c */  JNZ 0x0e5145c3
/* 0e513d52 */  MOV byte ptr [RSP + 0x200],0x2a
/* 0e513d5a */  LEA RSI,[RSP + 0x201]
/* 0e513d62 */  MOVUPS XMM0,xmmword ptr [0x012d2855]
/* 0e513d69 */  MOVUPS xmmword ptr [RSP + 0x201],XMM0
/* 0e513d71 */  MOV RAX,0x6867756f72687473
/* 0e513d7b */  MOV qword ptr [RSP + 0x20e],RAX
/* 0e513d83 */  MOV byte ptr [RSP + 0x216],0x0
/* 0e513d8b */  LEA RDI,[RSP + 0x70]
/* 0e513d90 */  CALL 0x0e53dbe0
/* 0e513d95 */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e513d9d */  MOV ESI,EAX
/* 0e513d9f */  SHR ESI,0x1
/* 0e513da1 */  TEST AL,0x1
/* 0e513da3 */  LEA R12,[RSP + 0x99]
/* 0e513dab */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0e513db3 */  CMOVZ RAX,R12
/* 0e513db7 */  CMOVNZ RSI,qword ptr [RSP + 0xa0]
/* 0e513dc0 */  TEST RSI,RSI
/* 0e513dc3 */  JZ 0x0e513dd9
/* 0e513dc5 */  MOV ECX,ESI
/* 0e513dc7 */  AND ECX,0x3
/* 0e513dca */  CMP RSI,0x4
/* 0e513dce */  JNC 0x0e513de3
/* 0e513dd0 */  MOV EDX,0x811c9dc5
/* 0e513dd5 */  XOR EDI,EDI
/* 0e513dd7 */  JMP 0x0e513e38
/* 0e513dd9 */  MOV EDX,0x811c9dc5
/* 0e513dde */  JMP 0x0e513e64
/* 0e513de3 */  AND RSI,-0x4
/* 0e513de7 */  MOV EDX,0x811c9dc5
/* 0e513dec */  XOR EDI,EDI
/* 0e513dee */  NOP
/* 0e513df0 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e513df5 */  XOR R8D,EDX
/* 0e513df8 */  IMUL EDX,R8D,0x1000193
/* 0e513dff */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e513e05 */  XOR R8D,EDX
/* 0e513e08 */  IMUL EDX,R8D,0x1000193
/* 0e513e0f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e513e15 */  XOR R8D,EDX
/* 0e513e18 */  IMUL EDX,R8D,0x1000193
/* 0e513e1f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e513e25 */  XOR R8D,EDX
/* 0e513e28 */  IMUL EDX,R8D,0x1000193
/* 0e513e2f */  ADD RDI,0x4
/* 0e513e33 */  CMP RSI,RDI
/* 0e513e36 */  JNZ 0x0e513df0
/* 0e513e38 */  TEST RCX,RCX
/* 0e513e3b */  JZ 0x0e513e64
/* 0e513e3d */  ADD RAX,RDI
/* 0e513e40 */  XOR ESI,ESI
/* 0e513e42 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e513e50 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e513e54 */  XOR EDI,EDX
/* 0e513e56 */  IMUL EDX,EDI,0x1000193
/* 0e513e5c */  INC RSI
/* 0e513e5f */  CMP RCX,RSI
/* 0e513e62 */  JNZ 0x0e513e50
/* 0e513e64 */  MOV dword ptr [RSP + 0x1a8],0x2
/* 0e513e6f */  MOV dword ptr [RSP + 0x1ac],EDX
/* 0e513e76 */  MOVZX EAX,byte ptr [0x0f7556c8]
/* 0e513e7d */  TEST AL,AL
/* 0e513e7f */  JZ 0x0e51ee2a
/* 0e513e85 */  LEA R14,[RSP + 0x188]
/* 0e513e8d */  MOV EAX,dword ptr [RSP + 0x1ac]
/* 0e513e94 */  MOV dword ptr [RSP],EAX
/* 0e513e97 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e513ea0 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e513ea8 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e513eb1 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e513eba */  LEA R13,[0xe53e3f0]
/* 0e513ec1 */  MOV qword ptr [RSP + 0x28],R13
/* 0e513ec6 */  LEA RAX,[0x48b06d0]
/* 0e513ecd */  MOV qword ptr [RSP + 0x30],RAX
/* 0e513ed2 */  LEA RAX,[0xe539e60]
/* 0e513ed9 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e513ede */  LEA RAX,[0xe53e4b0]
/* 0e513ee5 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e513eea */  LEA RAX,[0xe53e4c0]
/* 0e513ef1 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e513ef6 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e513efe */  XORPS XMM0,XMM0
/* 0e513f01 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e513f06 */  MOV RSI,RSP
/* 0e513f09 */  MOV RDI,R14
/* 0e513f0c */  CALL 0x048b05a0
/* 0e513f11 */  MOV R15,qword ptr [RSP + 0x60]
/* 0e513f16 */  TEST R15,R15
/* 0e513f19 */  JZ 0x0e513f3e
/* 0e513f1b */  MOV RAX,-0x1
/* 0e513f22 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e513f28 */  TEST RAX,RAX
/* 0e513f2b */  JNZ 0x0e513f3e
/* 0e513f2d */  MOV RAX,qword ptr [R15]
/* 0e513f30 */  MOV RDI,R15
/* 0e513f33 */  CALL qword ptr [RAX + 0x10]
/* 0e513f36 */  MOV RDI,R15
/* 0e513f39 */  CALL 0x0412c2d0
/* 0e513f3e */  MOVUPS XMM0,xmmword ptr [R14]
/* 0e513f42 */  MOVUPS XMM1,xmmword ptr [R14 + 0x10]
/* 0e513f47 */  MOVAPS xmmword ptr [RSP + 0x150],XMM1
/* 0e513f4f */  MOVAPS xmmword ptr [RSP + 0x140],XMM0
/* 0e513f57 */  MOV RDI,RSP
/* 0e513f5a */  LEA RSI,[RSP + 0x140]
/* 0e513f62 */  LEA RDX,[RSP + 0x70]
/* 0e513f67 */  CALL 0x0e53e180
/* 0e513f6c */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e513f70 */  CMP EAX,0x2
/* 0e513f73 */  JZ 0x0e51437c
/* 0e513f79 */  CMP EAX,0x1
/* 0e513f7c */  JZ 0x0e513f9a
/* 0e513f7e */  TEST EAX,EAX
/* 0e513f80 */  JNZ 0x0e513f8e
/* 0e513f82 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e513f87 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e513f8e */  CMP byte ptr [RSP + 0x1b8],0x0
/* 0e513f96 */  JZ 0x0e513fdd
/* 0e513f98 */  JMP 0x0e513fed
/* 0e513f9a */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e513f9f */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e513fa3 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e513fa7 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e513fab */  CMP dword ptr [RAX],ECX
/* 0e513fad */  JZ 0x0e513fcf
/* 0e513faf */  ADD RAX,0x68
/* 0e513fb3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e513fc0 */  MOV RDX,RAX
/* 0e513fc3 */  ADD RAX,0x68
/* 0e513fc7 */  CMP dword ptr [RDX],ECX
/* 0e513fc9 */  JNZ 0x0e513fc0
/* 0e513fcb */  ADD RAX,-0x68
/* 0e513fcf */  OR byte ptr [RAX + 0x12],0x9
/* 0e513fd3 */  CMP byte ptr [RSP + 0x1b8],0x0
/* 0e513fdb */  JNZ 0x0e513fed
/* 0e513fdd */  MOV RDI,RSP
/* 0e513fe0 */  LEA RSI,[RSP + 0x180]
/* 0e513fe8 */  CALL 0x0e53e510
/* 0e513fed */  MOV EBP,dword ptr [RSP + 0x1b4]
/* 0e513ff4 */  MOV R15,qword ptr [RSP + 0x180]
/* 0e513ffc */  MOVZX EAX,byte ptr [0x0f7556a8]
/* 0e514003 */  TEST AL,AL
/* 0e514005 */  JZ 0x0e51eec2
/* 0e51400b */  LEA R14,[RSP + 0x1ac]
/* 0e514013 */  MOV RAX,qword ptr [0x0f755628]
/* 0e51401a */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e51401d */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e514021 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e514025 */  SUB RDX,RCX
/* 0e514028 */  SHR RDX,0x3
/* 0e51402c */  MOV ESI,0xffffffff
/* 0e514031 */  ADD EDX,ESI
/* 0e514033 */  AND EDX,EAX
/* 0e514035 */  LEA RCX,[RCX + RDX*0x8]
/* 0e514039 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e51403d */  NOP dword ptr [RAX]
/* 0e514040 */  MOV RCX,qword ptr [RCX]
/* 0e514043 */  CMP RCX,-0x1
/* 0e514047 */  JZ 0x0e514069
/* 0e514049 */  LEA RSI,[RCX + RCX*0x2]
/* 0e51404d */  LEA RCX,[RDX + RSI*0x8]
/* 0e514051 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e514055 */  JNZ 0x0e514040
/* 0e514057 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e51405b */  CMP RCX,RAX
/* 0e51405e */  JNZ 0x0e514075
/* 0e514060 */  LEA RAX,[0xf755628]
/* 0e514067 */  JMP 0x0e514079
/* 0e514069 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e51406d */  MOV RCX,RAX
/* 0e514070 */  CMP RCX,RAX
/* 0e514073 */  JZ 0x0e514060
/* 0e514075 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e514079 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e51407d */  MOV R15,qword ptr [RAX + 0x20]
/* 0e514081 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e514085 */  CMP R15,RAX
/* 0e514088 */  JZ 0x0e51409e
/* 0e51408a */  NOP word ptr [RAX + RAX*0x1]
/* 0e514090 */  CMP dword ptr [R15],EBP
/* 0e514093 */  JZ 0x0e51409e
/* 0e514095 */  ADD R15,0x38
/* 0e514099 */  CMP R15,RAX
/* 0e51409c */  JNZ 0x0e514090
/* 0e51409e */  CMP R15,RAX
/* 0e5140a1 */  MOV RBP,R13
/* 0e5140a4 */  LEA R13,[0x48b06d0]
/* 0e5140ab */  JNZ 0x0e5140e4
/* 0e5140ad */  LEA RDI,[0x13e0236]
/* 0e5140b4 */  LEA RSI,[0x1208bb9]
/* 0e5140bb */  LEA RCX,[0x119d818]
/* 0e5140c2 */  LEA R8,[0x11e7332]
/* 0e5140c9 */  MOV EDX,0x326
/* 0e5140ce */  XOR EAX,EAX
/* 0e5140d0 */  CALL 0x0eeddcf0
/* 0e5140d5 */  TEST AL,AL
/* 0e5140d7 */  JZ 0x0e5140e4
/* 0e5140d9 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e5140e4 */  ADD R15,0x8
/* 0e5140e8 */  MOV byte ptr [RSP],0x0
/* 0e5140ec */  MOV RCX,RSP
/* 0e5140ef */  MOV RDI,R15
/* 0e5140f2 */  MOV RSI,R14
/* 0e5140f5 */  MOV RDX,R14
/* 0e5140f8 */  CALL 0x05d9c620
/* 0e5140fd */  MOVUPS XMM0,xmmword ptr [RSP + 0x180]
/* 0e514105 */  MOVUPS XMM1,xmmword ptr [RSP + 0x190]
/* 0e51410d */  MOVDQU XMM2,xmmword ptr [RSP + 0x1a0]
/* 0e514116 */  MOVDQU XMM3,xmmword ptr [RSP + 0x1ac]
/* 0e51411f */  MOVAPS xmmword ptr [RSP + 0x140],XMM0
/* 0e514127 */  MOVAPS xmmword ptr [RSP + 0x150],XMM1
/* 0e51412f */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e514138 */  MOVDQU xmmword ptr [RSP + 0x16c],XMM3
/* 0e514141 */  LEA RDI,[RSP + 0x70]
/* 0e514146 */  CALL 0x048b0bc0
/* 0e51414b */  MOV byte ptr [RSP + 0x240],0x2a
/* 0e514153 */  LEA RSI,[RSP + 0x241]
/* 0e51415b */  MOVUPS XMM0,xmmword ptr [0x014a96e9]
/* 0e514162 */  MOVUPS xmmword ptr [RSP + 0x241],XMM0
/* 0e51416a */  MOV RAX,0x746f6f6c5f646e65
/* 0e514174 */  MOV qword ptr [RSP + 0x24e],RAX
/* 0e51417c */  MOV byte ptr [RSP + 0x256],0x0
/* 0e514184 */  LEA RDI,[RSP + 0x70]
/* 0e514189 */  CALL 0x0e53dbe0
/* 0e51418e */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e514196 */  MOV EDX,EAX
/* 0e514198 */  SHR EDX,0x1
/* 0e51419a */  TEST AL,0x1
/* 0e51419c */  CMOVNZ R12,qword ptr [RSP + 0xa8]
/* 0e5141a5 */  CMOVNZ RDX,qword ptr [RSP + 0xa0]
/* 0e5141ae */  TEST RDX,RDX
/* 0e5141b1 */  JZ 0x0e5141c7
/* 0e5141b3 */  MOV EAX,EDX
/* 0e5141b5 */  AND EAX,0x3
/* 0e5141b8 */  CMP RDX,0x4
/* 0e5141bc */  JNC 0x0e5141ce
/* 0e5141be */  MOV ECX,0x811c9dc5
/* 0e5141c3 */  XOR ESI,ESI
/* 0e5141c5 */  JMP 0x0e514220
/* 0e5141c7 */  MOV ECX,0x811c9dc5
/* 0e5141cc */  JMP 0x0e514245
/* 0e5141ce */  AND RDX,-0x4
/* 0e5141d2 */  MOV ECX,0x811c9dc5
/* 0e5141d7 */  XOR ESI,ESI
/* 0e5141d9 */  NOP dword ptr [RAX]
/* 0e5141e0 */  MOVSX EDI,byte ptr [R12 + RSI*0x1]
/* 0e5141e5 */  XOR EDI,ECX
/* 0e5141e7 */  IMUL ECX,EDI,0x1000193
/* 0e5141ed */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x1]
/* 0e5141f3 */  XOR EDI,ECX
/* 0e5141f5 */  IMUL ECX,EDI,0x1000193
/* 0e5141fb */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x2]
/* 0e514201 */  XOR EDI,ECX
/* 0e514203 */  IMUL ECX,EDI,0x1000193
/* 0e514209 */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x3]
/* 0e51420f */  XOR EDI,ECX
/* 0e514211 */  IMUL ECX,EDI,0x1000193
/* 0e514217 */  ADD RSI,0x4
/* 0e51421b */  CMP RDX,RSI
/* 0e51421e */  JNZ 0x0e5141e0
/* 0e514220 */  TEST RAX,RAX
/* 0e514223 */  JZ 0x0e514245
/* 0e514225 */  ADD R12,RSI
/* 0e514228 */  XOR EDX,EDX
/* 0e51422a */  NOP word ptr [RAX + RAX*0x1]
/* 0e514230 */  MOVSX ESI,byte ptr [R12 + RDX*0x1]
/* 0e514235 */  XOR ESI,ECX
/* 0e514237 */  IMUL ECX,ESI,0x1000193
/* 0e51423d */  INC RDX
/* 0e514240 */  CMP RAX,RDX
/* 0e514243 */  JNZ 0x0e514230
/* 0e514245 */  MOV dword ptr [RSP + 0x168],0x2
/* 0e514250 */  MOV dword ptr [RSP + 0x16c],ECX
/* 0e514257 */  MOVZX EAX,byte ptr [0x0f7556c8]
/* 0e51425e */  TEST AL,AL
/* 0e514260 */  JZ 0x0e51ef4a
/* 0e514266 */  LEA R14,[RSP + 0x148]
/* 0e51426e */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e514275 */  MOV dword ptr [RSP],EAX
/* 0e514278 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e514281 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e514289 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e514292 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e51429b */  MOV qword ptr [RSP + 0x28],RBP
/* 0e5142a0 */  MOV qword ptr [RSP + 0x30],R13
/* 0e5142a5 */  LEA RAX,[0xe539e60]
/* 0e5142ac */  MOV qword ptr [RSP + 0x38],RAX
/* 0e5142b1 */  LEA RAX,[0xe53e6d0]
/* 0e5142b8 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e5142bd */  LEA RAX,[0xe53e6e0]
/* 0e5142c4 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e5142c9 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e5142d1 */  XORPS XMM0,XMM0
/* 0e5142d4 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e5142d9 */  MOV RSI,RSP
/* 0e5142dc */  MOV RDI,R14
/* 0e5142df */  CALL 0x048b05a0
/* 0e5142e4 */  MOV R15,qword ptr [RSP + 0x60]
/* 0e5142e9 */  TEST R15,R15
/* 0e5142ec */  JZ 0x0e514311
/* 0e5142ee */  MOV RAX,-0x1
/* 0e5142f5 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e5142fb */  TEST RAX,RAX
/* 0e5142fe */  JNZ 0x0e514311
/* 0e514300 */  MOV RAX,qword ptr [R15]
/* 0e514303 */  MOV RDI,R15
/* 0e514306 */  CALL qword ptr [RAX + 0x10]
/* 0e514309 */  MOV RDI,R15
/* 0e51430c */  CALL 0x0412c2d0
/* 0e514311 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e514316 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e51431c */  MOVDQA xmmword ptr [RSP + 0x1d0],XMM1
/* 0e514325 */  MOVDQA xmmword ptr [RSP + 0x1c0],XMM0
/* 0e51432e */  MOV RDI,RSP
/* 0e514331 */  LEA RSI,[RSP + 0x1c0]
/* 0e514339 */  LEA RDX,[RSP + 0x70]
/* 0e51433e */  CALL 0x0e53e180
/* 0e514343 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e514347 */  CMP EAX,0x2
/* 0e51434a */  JZ 0x0e5149fc
/* 0e514350 */  CMP EAX,0x1
/* 0e514353 */  JZ 0x0e51441f
/* 0e514359 */  TEST EAX,EAX
/* 0e51435b */  JNZ 0x0e514369
/* 0e51435d */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e514362 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e514369 */  CMP byte ptr [RSP + 0x178],0x0
/* 0e514371 */  JZ 0x0e51445d
/* 0e514377 */  JMP 0x0e51446d
/* 0e51437c */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e514381 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e514385 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e514389 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e51438d */  CMP dword ptr [RAX],ECX
/* 0e51438f */  JZ 0x0e5143af
/* 0e514391 */  ADD RAX,0x58
/* 0e514395 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e5143a0 */  MOV RDX,RAX
/* 0e5143a3 */  ADD RAX,0x58
/* 0e5143a7 */  CMP dword ptr [RDX],ECX
/* 0e5143a9 */  JNZ 0x0e5143a0
/* 0e5143ab */  ADD RAX,-0x58
/* 0e5143af */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e5143b4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e5143b8 */  JZ 0x0e513fcf
/* 0e5143be */  NOP
/* 0e5143c0 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e5143c4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e5143c8 */  JNZ 0x0e5143c0
/* 0e5143ca */  JMP 0x0e513fcf
/* 0e5143cf */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e5143d4 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e5143d8 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e5143dc */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e5143e0 */  CMP dword ptr [RAX],ECX
/* 0e5143e2 */  JZ 0x0e5143ff
/* 0e5143e4 */  ADD RAX,0x58
/* 0e5143e8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e5143f0 */  MOV RDX,RAX
/* 0e5143f3 */  ADD RAX,0x58
/* 0e5143f7 */  CMP dword ptr [RDX],ECX
/* 0e5143f9 */  JNZ 0x0e5143f0
/* 0e5143fb */  ADD RAX,-0x58
/* 0e5143ff */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e514404 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e514408 */  JZ 0x0e513aff
/* 0e51440e */  NOP
/* 0e514410 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e514414 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e514418 */  JNZ 0x0e514410
/* 0e51441a */  JMP 0x0e513aff
/* 0e51441f */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e514424 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e514428 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e51442c */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e514430 */  CMP dword ptr [RAX],ECX
/* 0e514432 */  JZ 0x0e51444f
/* 0e514434 */  ADD RAX,0x68
/* 0e514438 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e514440 */  MOV RDX,RAX
/* 0e514443 */  ADD RAX,0x68
/* 0e514447 */  CMP dword ptr [RDX],ECX
/* 0e514449 */  JNZ 0x0e514440
/* 0e51444b */  ADD RAX,-0x68
/* 0e51444f */  OR byte ptr [RAX + 0x12],0x9
/* 0e514453 */  CMP byte ptr [RSP + 0x178],0x0
/* 0e51445b */  JNZ 0x0e51446d
/* 0e51445d */  MOV RDI,RSP
/* 0e514460 */  LEA RSI,[RSP + 0x140]
/* 0e514468 */  CALL 0x0e53e510
/* 0e51446d */  MOV EBP,dword ptr [RSP + 0x174]
/* 0e514474 */  MOV R15,qword ptr [RSP + 0x140]
/* 0e51447c */  MOVZX EAX,byte ptr [0x0f7556a8]
/* 0e514483 */  TEST AL,AL
/* 0e514485 */  JZ 0x0e51efe2
/* 0e51448b */  LEA R14,[RSP + 0x16c]
/* 0e514493 */  MOV RAX,qword ptr [0x0f755628]
/* 0e51449a */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e51449d */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e5144a1 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e5144a5 */  SUB RDX,RCX
/* 0e5144a8 */  SHR RDX,0x3
/* 0e5144ac */  MOV ESI,0xffffffff
/* 0e5144b1 */  ADD EDX,ESI
/* 0e5144b3 */  AND EDX,EAX
/* 0e5144b5 */  LEA RCX,[RCX + RDX*0x8]
/* 0e5144b9 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e5144bd */  NOP dword ptr [RAX]
/* 0e5144c0 */  MOV RCX,qword ptr [RCX]
/* 0e5144c3 */  CMP RCX,-0x1
/* 0e5144c7 */  JZ 0x0e5144e9
/* 0e5144c9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e5144cd */  LEA RCX,[RDX + RSI*0x8]
/* 0e5144d1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e5144d5 */  JNZ 0x0e5144c0
/* 0e5144d7 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e5144db */  CMP RCX,RAX
/* 0e5144de */  JNZ 0x0e5144f5
/* 0e5144e0 */  LEA RAX,[0xf755628]
/* 0e5144e7 */  JMP 0x0e5144f9
/* 0e5144e9 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e5144ed */  MOV RCX,RAX
/* 0e5144f0 */  CMP RCX,RAX
/* 0e5144f3 */  JZ 0x0e5144e0
/* 0e5144f5 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e5144f9 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e5144fd */  MOV R15,qword ptr [RAX + 0x20]
/* 0e514501 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e514505 */  CMP R15,RAX
/* 0e514508 */  JZ 0x0e51451e
/* 0e51450a */  NOP word ptr [RAX + RAX*0x1]
/* 0e514510 */  CMP dword ptr [R15],EBP
/* 0e514513 */  JZ 0x0e51451e
/* 0e514515 */  ADD R15,0x38
/* 0e514519 */  CMP R15,RAX
/* 0e51451c */  JNZ 0x0e514510
/* 0e51451e */  CMP R15,RAX
/* 0e514521 */  JNZ 0x0e51455a
/* 0e514523 */  LEA RDI,[0x13e0236]
/* 0e51452a */  LEA RSI,[0x1208bb9]
/* 0e514531 */  LEA RCX,[0x119d818]
/* 0e514538 */  LEA R8,[0x11e7332]
/* 0e51453f */  MOV EDX,0x326
/* 0e514544 */  XOR EAX,EAX
/* 0e514546 */  CALL 0x0eeddcf0
/* 0e51454b */  TEST AL,AL
/* 0e51454d */  JZ 0x0e51455a
/* 0e51454f */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e51455a */  ADD R15,0x8
/* 0e51455e */  MOV byte ptr [RSP],0x0
/* 0e514562 */  MOV RCX,RSP
/* 0e514565 */  MOV RDI,R15
/* 0e514568 */  MOV RSI,R14
/* 0e51456b */  MOV RDX,R14
/* 0e51456e */  CALL 0x05d9c620
/* 0e514573 */  LEA RDI,[RSP + 0x70]
/* 0e514578 */  CALL 0x048b0bc0
/* 0e51457d */  TEST byte ptr [RSP + 0x240],0x1
/* 0e514585 */  JZ 0x0e5145a0
/* 0e514587 */  MOV RSI,qword ptr [RSP + 0x240]
/* 0e51458f */  MOV RDI,qword ptr [RSP + 0x250]
/* 0e514597 */  AND RSI,-0x2
/* 0e51459b */  CALL 0x0412a280
/* 0e5145a0 */  TEST byte ptr [RSP + 0x200],0x1
/* 0e5145a8 */  JZ 0x0e5145c3
/* 0e5145aa */  MOV RSI,qword ptr [RSP + 0x200]
/* 0e5145b2 */  MOV RDI,qword ptr [RSP + 0x210]
/* 0e5145ba */  AND RSI,-0x2
/* 0e5145be */  CALL 0x0412a280
/* 0e5145c3 */  MOVZX EAX,byte ptr [0x0f755760]
/* 0e5145ca */  TEST AL,AL
/* 0e5145cc */  JZ 0x0e51e822
/* 0e5145d2 */  MOV RAX,qword ptr [0x0f7556e0]
/* 0e5145d9 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e5145dc */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e5145e0 */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e5145e4 */  SUB RDX,RCX
/* 0e5145e7 */  SHR RDX,0x3
/* 0e5145eb */  MOV ESI,0xffffffff
/* 0e5145f0 */  ADD EDX,ESI
/* 0e5145f2 */  AND EDX,EAX
/* 0e5145f4 */  LEA RCX,[RCX + RDX*0x8]
/* 0e5145f8 */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e5145fc */  NOP dword ptr [RAX]
/* 0e514600 */  MOV RCX,qword ptr [RCX]
/* 0e514603 */  CMP RCX,-0x1
/* 0e514607 */  JZ 0x0e514632
/* 0e514609 */  LEA RSI,[RCX + RCX*0x2]
/* 0e51460d */  LEA RCX,[RDX + RSI*0x8]
/* 0e514611 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e514615 */  JNZ 0x0e514600
/* 0e514617 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e51461b */  CMP RCX,RAX
/* 0e51461e */  JNZ 0x0e51463e
/* 0e514620 */  LEA RAX,[0xf7556e0]
/* 0e514627 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e51462e */  JZ 0x0e51464b
/* 0e514630 */  JMP 0x0e514678
/* 0e514632 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e514636 */  MOV RCX,RAX
/* 0e514639 */  CMP RCX,RAX
/* 0e51463c */  JZ 0x0e514620
/* 0e51463e */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e514642 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e514649 */  JNZ 0x0e514678
/* 0e51464b */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e51464f */  TEST RAX,RAX
/* 0e514652 */  JZ 0x0e514678
/* 0e514654 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e514658 */  LEA RDX,[RAX + 0x9]
/* 0e51465c */  MOV ECX,ESI
/* 0e51465e */  SHR ECX,0x1
/* 0e514660 */  TEST SIL,0x1
/* 0e514664 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e514669 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e51466e */  LEA RDI,[RSP + 0x180]
/* 0e514676 */  JMP 0x0e51468c
/* 0e514678 */  LEA RDX,[0x1356875]
/* 0e51467f */  LEA RDI,[RSP + 0x180]
/* 0e514687 */  MOV ECX,0x17
/* 0e51468c */  MOV RSI,RBX
/* 0e51468f */  CALL 0x0e53ec30
/* 0e514694 */  MOV byte ptr [RSP + 0x1b4],0x0
/* 0e51469c */  MOV byte ptr [RSP + 0x1b8],0x0
/* 0e5146a4 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e5146ac */  JNZ 0x0e51577c
/* 0e5146b2 */  MOV R15,qword ptr [RSP + 0x180]
/* 0e5146ba */  MOVZX EAX,byte ptr [0x0f755760]
/* 0e5146c1 */  TEST AL,AL
/* 0e5146c3 */  JZ 0x0e51ef74
/* 0e5146c9 */  LEA R14,[R15 + 0x18]
/* 0e5146cd */  MOV RAX,qword ptr [0x0f7556e0]
/* 0e5146d4 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e5146d7 */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e5146db */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e5146df */  SUB RDX,RCX
/* 0e5146e2 */  SHR RDX,0x3
/* 0e5146e6 */  MOV ESI,0xffffffff
/* 0e5146eb */  ADD EDX,ESI
/* 0e5146ed */  AND EDX,EAX
/* 0e5146ef */  LEA RCX,[RCX + RDX*0x8]
/* 0e5146f3 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e5146f7 */  NOP word ptr [RAX + RAX*0x1]
/* 0e514700 */  MOV RCX,qword ptr [RCX]
/* 0e514703 */  CMP RCX,-0x1
/* 0e514707 */  JZ 0x0e514729
/* 0e514709 */  LEA RSI,[RCX + RCX*0x2]
/* 0e51470d */  LEA RCX,[RDX + RSI*0x8]
/* 0e514711 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e514715 */  JNZ 0x0e514700
/* 0e514717 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e51471b */  CMP RCX,RAX
/* 0e51471e */  JNZ 0x0e514735
/* 0e514720 */  LEA RSI,[0xf7556e0]
/* 0e514727 */  JMP 0x0e514739
/* 0e514729 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e51472d */  MOV RCX,RAX
/* 0e514730 */  CMP RCX,RAX
/* 0e514733 */  JZ 0x0e514720
/* 0e514735 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e514739 */  MOV RCX,qword ptr [RSP + 0x180]
/* 0e514741 */  MOV RAX,qword ptr [RCX + 0x50]
/* 0e514745 */  MOV RCX,qword ptr [RCX + 0x58]
/* 0e514749 */  CMP RAX,RCX
/* 0e51474c */  JZ 0x0e514805
/* 0e514752 */  MOV RDX,0x3a6c61657265635b
/* 0e51475c */  MOVQ XMM0,RDX
/* 0e514761 */  MOV RDX,0x746e656d75636f64
/* 0e51476b */  MOVQ XMM1,RDX
/* 0e514770 */  PUNPCKLQDQ XMM0,XMM1
/* 0e514774 */  MOV RDX,0x7461746e656d7563
/* 0e51477e */  MOVQ XMM1,RDX
/* 0e514783 */  MOV RDX,0x5d6761745f6e6f69
/* 0e51478d */  MOVQ XMM2,RDX
/* 0e514792 */  PUNPCKLQDQ XMM1,XMM2
/* 0e514796 */  JMP 0x0e5147ce
/* 0e5147a0 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e5147a4 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e5147a8 */  PCMPEQB XMM2,XMM0
/* 0e5147ac */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e5147b1 */  PCMPEQB XMM3,XMM1
/* 0e5147b5 */  PAND XMM3,XMM2
/* 0e5147b9 */  PMOVMSKB EDX,XMM3
/* 0e5147bd */  CMP EDX,0xffff
/* 0e5147c3 */  JZ 0x0e514805
/* 0e5147c5 */  ADD RAX,0x38
/* 0e5147c9 */  CMP RAX,RCX
/* 0e5147cc */  JZ 0x0e514805
/* 0e5147ce */  MOVZX EDX,byte ptr [RAX]
/* 0e5147d1 */  TEST DL,0x1
/* 0e5147d4 */  JZ 0x0e5147f0
/* 0e5147d6 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e5147da */  CMP RDI,0x1a
/* 0e5147de */  JNZ 0x0e5147c5
/* 0e5147e0 */  JMP 0x0e5147fa
/* 0e5147f0 */  MOV EDI,EDX
/* 0e5147f2 */  SHR EDI,0x1
/* 0e5147f4 */  CMP RDI,0x1a
/* 0e5147f8 */  JNZ 0x0e5147c5
/* 0e5147fa */  TEST DL,0x1
/* 0e5147fd */  JNZ 0x0e5147a0
/* 0e5147ff */  LEA RDX,[RAX + 0x1]
/* 0e514803 */  JMP 0x0e5147a4
/* 0e514805 */  CMP RAX,RCX
/* 0e514808 */  JZ 0x0e514828
/* 0e51480a */  MOV EBP,dword ptr [RAX + 0x1c]
/* 0e51480d */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e514814 */  TEST AL,AL
/* 0e514816 */  JZ 0x0e51f917
/* 0e51481c */  CMP EBP,dword ptr [0x0f550ac4]
/* 0e514822 */  JNZ 0x0e514b23
/* 0e514828 */  CMP dword ptr [RSP + 0x1a8],0x0
/* 0e514830 */  JZ 0x0e514895
/* 0e514832 */  MOV EDX,dword ptr [RSP + 0x1ac]
/* 0e514839 */  TEST RSI,RSI
/* 0e51483c */  JNZ 0x0e51484d
/* 0e51483e */  MOV RDI,R14
/* 0e514841 */  MOV EBP,EDX
/* 0e514843 */  CALL 0x048aead0
/* 0e514848 */  MOV EDX,EBP
/* 0e51484a */  MOV RSI,RAX
/* 0e51484d */  MOV RDI,R14
/* 0e514850 */  MOV ECX,0x1
/* 0e514855 */  CALL 0x048b0c90
/* 0e51485a */  TEST RAX,RAX
/* 0e51485d */  JNZ 0x0e51487d
/* 0e51485f */  PXOR XMM0,XMM0
/* 0e514863 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e514869 */  LEA RDI,[RSP + 0x70]
/* 0e51486e */  CALL 0x048b0d20
/* 0e514873 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e514878 */  TEST RAX,RAX
/* 0e51487b */  JZ 0x0e5148b2
/* 0e51487d */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e514884 */  JNZ 0x0e5148b2
/* 0e514886 */  MOV R14,qword ptr [RAX + 0x58]
/* 0e51488a */  TEST R14,R14
/* 0e51488d */  JZ 0x0e5148b2
/* 0e51488f */  ADD R14,0x40
/* 0e514893 */  JMP 0x0e5148b5
/* 0e514895 */  TEST RSI,RSI
/* 0e514898 */  JZ 0x0e5148b2
/* 0e51489a */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e5148a1 */  JNZ 0x0e5148b2
/* 0e5148a3 */  MOV R14,qword ptr [RSI + 0x68]
/* 0e5148a7 */  TEST R14,R14
/* 0e5148aa */  JZ 0x0e5148b2
/* 0e5148ac */  ADD R14,0x38
/* 0e5148b0 */  JMP 0x0e5148b5
/* 0e5148b2 */  XOR R14D,R14D
/* 0e5148b5 */  LEA RAX,[0x488e0b0]
/* 0e5148bc */  MOV qword ptr [RSP + 0x10],RAX
/* 0e5148c1 */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e5148c9 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e5148d2 */  MOV byte ptr [RSP + 0x24],0x0
/* 0e5148d7 */  MOV qword ptr [RSP],0x0
/* 0e5148df */  PXOR XMM0,XMM0
/* 0e5148e3 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e5148e9 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e5148f1 */  MOV qword ptr [RSP + 0x90],0x0
/* 0e5148fd */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e514908 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e514910 */  LEA RDI,[0xf5463b0]
/* 0e514917 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e51491e */  MOV ESI,0x20
/* 0e514923 */  CALL qword ptr [RAX + 0x10]
/* 0e514926 */  MOV R15,RAX
/* 0e514929 */  TEST RAX,RAX
/* 0e51492c */  JZ 0x0e51e646
/* 0e514932 */  MOV qword ptr [RSP + 0x150],R15
/* 0e51493a */  MOV qword ptr [RSP + 0x140],0x21
/* 0e514946 */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e514952 */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e514959 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e51495e */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e514966 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e51496b */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e514970 */  LEA RSI,[RSP + 0x140]
/* 0e514978 */  MOV RDI,R14
/* 0e51497b */  CALL 0x048b5060
/* 0e514980 */  MOV R15,RAX
/* 0e514983 */  LEA R14,[RSP + 0x78]
/* 0e514988 */  ADD RAX,0x20
/* 0e51498c */  MOV qword ptr [R15 + 0x20],0x0
/* 0e514994 */  LEA RCX,[RSP + 0x70]
/* 0e514999 */  CMP RAX,RCX
/* 0e51499c */  JZ 0x0e5149e7
/* 0e51499e */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e5149a2 */  TEST RAX,RAX
/* 0e5149a5 */  JZ 0x0e514ab1
/* 0e5149ab */  MOV R12,R15
/* 0e5149ae */  ADD R12,0x28
/* 0e5149b2 */  MOV RDI,R12
/* 0e5149b5 */  CALL RAX
/* 0e5149b7 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e5149bf */  TEST EAX,EAX
/* 0e5149c1 */  JZ 0x0e514ab1
/* 0e5149c7 */  CMP EAX,0x2
/* 0e5149ca */  JNZ 0x0e514a9f
/* 0e5149d0 */  MOV EDI,0x5
/* 0e5149d5 */  MOV RSI,R14
/* 0e5149d8 */  MOV RDX,R12
/* 0e5149db */  CALL qword ptr [RSP + 0x88]
/* 0e5149e2 */  JMP 0x0e514ab1
/* 0e5149e7 */  XOR EAX,EAX
/* 0e5149e9 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e5149f1 */  JNZ 0x0e514ae9
/* 0e5149f7 */  JMP 0x0e514b0a
/* 0e5149fc */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e514a01 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e514a05 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e514a09 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e514a0d */  CMP dword ptr [RAX],ECX
/* 0e514a0f */  JZ 0x0e514a2f
/* 0e514a11 */  ADD RAX,0x58
/* 0e514a15 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e514a20 */  MOV RDX,RAX
/* 0e514a23 */  ADD RAX,0x58
/* 0e514a27 */  CMP dword ptr [RDX],ECX
/* 0e514a29 */  JNZ 0x0e514a20
/* 0e514a2b */  ADD RAX,-0x58
/* 0e514a2f */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e514a34 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e514a38 */  JZ 0x0e51444f
/* 0e514a3e */  NOP
/* 0e514a40 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e514a44 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e514a48 */  JNZ 0x0e514a40
/* 0e514a4a */  JMP 0x0e51444f
/* 0e514a4f */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e514a54 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e514a58 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e514a5c */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e514a60 */  CMP dword ptr [RAX],ECX
/* 0e514a62 */  JZ 0x0e514a7f
/* 0e514a64 */  ADD RAX,0x58
/* 0e514a68 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e514a70 */  MOV RDX,RAX
/* 0e514a73 */  ADD RAX,0x58
/* 0e514a77 */  CMP dword ptr [RDX],ECX
/* 0e514a79 */  JNZ 0x0e514a70
/* 0e514a7b */  ADD RAX,-0x58
/* 0e514a7f */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e514a84 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e514a88 */  JZ 0x0e51317f
/* 0e514a8e */  NOP
/* 0e514a90 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e514a94 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e514a98 */  JNZ 0x0e514a90
/* 0e514a9a */  JMP 0x0e51317f
/* 0e514a9f */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e514aa4 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e514aad */  MOV qword ptr [R12],RAX
/* 0e514ab1 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e514ab9 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e514ac2 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e514ac8 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e514acf */  MOV dword ptr [R15 + 0x48],ECX
/* 0e514ad3 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e514adb */  MOV byte ptr [R15 + 0x4c],CL
/* 0e514adf */  TEST byte ptr [RSP + 0x140],0x1
/* 0e514ae7 */  JZ 0x0e514b0a
/* 0e514ae9 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e514af1 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e514af9 */  AND RSI,-0x2
/* 0e514afd */  CALL 0x0412a280
/* 0e514b02 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e514b0a */  TEST RAX,RAX
/* 0e514b0d */  JZ 0x0e514b14
/* 0e514b0f */  MOV RDI,R14
/* 0e514b12 */  CALL RAX
/* 0e514b14 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e514b19 */  TEST RAX,RAX
/* 0e514b1c */  JZ 0x0e514b23
/* 0e514b1e */  MOV RDI,RSP
/* 0e514b21 */  CALL RAX
/* 0e514b23 */  MOVUPS XMM0,xmmword ptr [RSP + 0x180]
/* 0e514b2b */  MOVUPS XMM1,xmmword ptr [RSP + 0x190]
/* 0e514b33 */  MOVUPS XMM2,xmmword ptr [RSP + 0x1a0]
/* 0e514b3b */  MOVDQU XMM3,xmmword ptr [RSP + 0x1b0]
/* 0e514b44 */  MOVDQA xmmword ptr [RSP + 0x270],XMM3
/* 0e514b4d */  MOVAPS xmmword ptr [RSP + 0x260],XMM2
/* 0e514b55 */  MOVAPS xmmword ptr [RSP + 0x250],XMM1
/* 0e514b5d */  MOVAPS xmmword ptr [RSP + 0x240],XMM0
/* 0e514b65 */  MOVAPS xmmword ptr [RSP + 0x200],XMM0
/* 0e514b6d */  MOVAPS xmmword ptr [RSP + 0x210],XMM1
/* 0e514b75 */  MOVAPS xmmword ptr [RSP + 0x220],XMM2
/* 0e514b7d */  MOVDQA xmmword ptr [RSP + 0x230],XMM3
/* 0e514b86 */  MOV word ptr [RSP + 0x280],0x7802
/* 0e514b90 */  LEA RSI,[RSP + 0x281]
/* 0e514b98 */  MOV byte ptr [RSP + 0x282],0x0
/* 0e514ba0 */  LEA RDI,[RSP + 0x70]
/* 0e514ba5 */  CALL 0x0e5424b0
/* 0e514baa */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e514bb2 */  MOV ESI,EAX
/* 0e514bb4 */  SHR ESI,0x1
/* 0e514bb6 */  TEST AL,0x1
/* 0e514bb8 */  LEA R12,[RSP + 0x99]
/* 0e514bc0 */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0e514bc8 */  CMOVZ RAX,R12
/* 0e514bcc */  CMOVNZ RSI,qword ptr [RSP + 0xa0]
/* 0e514bd5 */  TEST RSI,RSI
/* 0e514bd8 */  JZ 0x0e514bee
/* 0e514bda */  MOV ECX,ESI
/* 0e514bdc */  AND ECX,0x3
/* 0e514bdf */  CMP RSI,0x4
/* 0e514be3 */  JNC 0x0e514bf8
/* 0e514be5 */  MOV EDX,0x811c9dc5
/* 0e514bea */  XOR EDI,EDI
/* 0e514bec */  JMP 0x0e514c58
/* 0e514bee */  MOV EDX,0x811c9dc5
/* 0e514bf3 */  JMP 0x0e514c84
/* 0e514bf8 */  AND RSI,-0x4
/* 0e514bfc */  MOV EDX,0x811c9dc5
/* 0e514c01 */  XOR EDI,EDI
/* 0e514c03 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e514c10 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e514c15 */  XOR R8D,EDX
/* 0e514c18 */  IMUL EDX,R8D,0x1000193
/* 0e514c1f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e514c25 */  XOR R8D,EDX
/* 0e514c28 */  IMUL EDX,R8D,0x1000193
/* 0e514c2f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e514c35 */  XOR R8D,EDX
/* 0e514c38 */  IMUL EDX,R8D,0x1000193
/* 0e514c3f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e514c45 */  XOR R8D,EDX
/* 0e514c48 */  IMUL EDX,R8D,0x1000193
/* 0e514c4f */  ADD RDI,0x4
/* 0e514c53 */  CMP RSI,RDI
/* 0e514c56 */  JNZ 0x0e514c10
/* 0e514c58 */  TEST RCX,RCX
/* 0e514c5b */  JZ 0x0e514c84
/* 0e514c5d */  ADD RAX,RDI
/* 0e514c60 */  XOR ESI,ESI
/* 0e514c62 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e514c70 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e514c74 */  XOR EDI,EDX
/* 0e514c76 */  IMUL EDX,EDI,0x1000193
/* 0e514c7c */  INC RSI
/* 0e514c7f */  CMP RCX,RSI
/* 0e514c82 */  JNZ 0x0e514c70
/* 0e514c84 */  MOV dword ptr [RSP + 0x228],0x2
/* 0e514c8f */  MOV dword ptr [RSP + 0x22c],EDX
/* 0e514c96 */  MOVZX EAX,byte ptr [0x0f755780]
/* 0e514c9d */  TEST AL,AL
/* 0e514c9f */  JZ 0x0e51f026
/* 0e514ca5 */  LEA R14,[RSP + 0x208]
/* 0e514cad */  MOV EAX,dword ptr [RSP + 0x22c]
/* 0e514cb4 */  MOV dword ptr [RSP],EAX
/* 0e514cb7 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e514cc0 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e514cc8 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e514cd1 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e514cda */  LEA RAX,[0xe5429d0]
/* 0e514ce1 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e514ce6 */  LEA RAX,[0x48b06d0]
/* 0e514ced */  MOV qword ptr [RSP + 0x30],RAX
/* 0e514cf2 */  LEA RBP,[0xe53e730]
/* 0e514cf9 */  MOV qword ptr [RSP + 0x38],RBP
/* 0e514cfe */  LEA RAX,[0xe542a90]
/* 0e514d05 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e514d0a */  LEA RAX,[0xe542aa0]
/* 0e514d11 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e514d16 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e514d1e */  XORPS XMM0,XMM0
/* 0e514d21 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e514d26 */  MOV RSI,RSP
/* 0e514d29 */  MOV RDI,R14
/* 0e514d2c */  CALL 0x048b05a0
/* 0e514d31 */  MOV R15,qword ptr [RSP + 0x60]
/* 0e514d36 */  TEST R15,R15
/* 0e514d39 */  JZ 0x0e514d5e
/* 0e514d3b */  MOV RAX,-0x1
/* 0e514d42 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e514d48 */  TEST RAX,RAX
/* 0e514d4b */  JNZ 0x0e514d5e
/* 0e514d4d */  MOV RAX,qword ptr [R15]
/* 0e514d50 */  MOV RDI,R15
/* 0e514d53 */  CALL qword ptr [RAX + 0x10]
/* 0e514d56 */  MOV RDI,R15
/* 0e514d59 */  CALL 0x0412c2d0
/* 0e514d5e */  MOVUPS XMM0,xmmword ptr [R14]
/* 0e514d62 */  MOVUPS XMM1,xmmword ptr [R14 + 0x10]
/* 0e514d67 */  MOVAPS xmmword ptr [RSP + 0x150],XMM1
/* 0e514d6f */  MOVAPS xmmword ptr [RSP + 0x140],XMM0
/* 0e514d77 */  MOV RDI,RSP
/* 0e514d7a */  LEA RSI,[RSP + 0x140]
/* 0e514d82 */  LEA RDX,[RSP + 0x70]
/* 0e514d87 */  CALL 0x0e542760
/* 0e514d8c */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e514d90 */  CMP EAX,0x2
/* 0e514d93 */  JZ 0x0e51518a
/* 0e514d99 */  CMP EAX,0x1
/* 0e514d9c */  JZ 0x0e514dba
/* 0e514d9e */  TEST EAX,EAX
/* 0e514da0 */  JNZ 0x0e514dae
/* 0e514da2 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e514da7 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e514dae */  CMP byte ptr [RSP + 0x238],0x0
/* 0e514db6 */  JZ 0x0e514dfd
/* 0e514db8 */  JMP 0x0e514e0d
/* 0e514dba */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e514dbf */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e514dc3 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e514dc7 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e514dcb */  CMP dword ptr [RAX],ECX
/* 0e514dcd */  JZ 0x0e514def
/* 0e514dcf */  ADD RAX,0x68
/* 0e514dd3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e514de0 */  MOV RDX,RAX
/* 0e514de3 */  ADD RAX,0x68
/* 0e514de7 */  CMP dword ptr [RDX],ECX
/* 0e514de9 */  JNZ 0x0e514de0
/* 0e514deb */  ADD RAX,-0x68
/* 0e514def */  OR byte ptr [RAX + 0x12],0x9
/* 0e514df3 */  CMP byte ptr [RSP + 0x238],0x0
/* 0e514dfb */  JNZ 0x0e514e0d
/* 0e514dfd */  MOV RDI,RSP
/* 0e514e00 */  LEA RSI,[RSP + 0x200]
/* 0e514e08 */  CALL 0x0e542af0
/* 0e514e0d */  MOV R13D,dword ptr [RSP + 0x234]
/* 0e514e15 */  MOV R15,qword ptr [RSP + 0x200]
/* 0e514e1d */  MOVZX EAX,byte ptr [0x0f755760]
/* 0e514e24 */  TEST AL,AL
/* 0e514e26 */  JZ 0x0e51f094
/* 0e514e2c */  LEA R14,[RSP + 0x22c]
/* 0e514e34 */  MOV RAX,qword ptr [0x0f7556e0]
/* 0e514e3b */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e514e3e */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e514e42 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e514e46 */  SUB RDX,RCX
/* 0e514e49 */  SHR RDX,0x3
/* 0e514e4d */  MOV ESI,0xffffffff
/* 0e514e52 */  ADD EDX,ESI
/* 0e514e54 */  AND EDX,EAX
/* 0e514e56 */  LEA RCX,[RCX + RDX*0x8]
/* 0e514e5a */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e514e5e */  NOP
/* 0e514e60 */  MOV RCX,qword ptr [RCX]
/* 0e514e63 */  CMP RCX,-0x1
/* 0e514e67 */  JZ 0x0e514e89
/* 0e514e69 */  LEA RSI,[RCX + RCX*0x2]
/* 0e514e6d */  LEA RCX,[RDX + RSI*0x8]
/* 0e514e71 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e514e75 */  JNZ 0x0e514e60
/* 0e514e77 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e514e7b */  CMP RCX,RAX
/* 0e514e7e */  JNZ 0x0e514e95
/* 0e514e80 */  LEA RAX,[0xf7556e0]
/* 0e514e87 */  JMP 0x0e514e99
/* 0e514e89 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e514e8d */  MOV RCX,RAX
/* 0e514e90 */  CMP RCX,RAX
/* 0e514e93 */  JZ 0x0e514e80
/* 0e514e95 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e514e99 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e514e9d */  MOV R15,qword ptr [RAX + 0x20]
/* 0e514ea1 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e514ea5 */  CMP R15,RAX
/* 0e514ea8 */  JZ 0x0e514ebe
/* 0e514eaa */  NOP word ptr [RAX + RAX*0x1]
/* 0e514eb0 */  CMP dword ptr [R15],R13D
/* 0e514eb3 */  JZ 0x0e514ebe
/* 0e514eb5 */  ADD R15,0x38
/* 0e514eb9 */  CMP R15,RAX
/* 0e514ebc */  JNZ 0x0e514eb0
/* 0e514ebe */  CMP R15,RAX
/* 0e514ec1 */  JNZ 0x0e514efa
/* 0e514ec3 */  LEA RDI,[0x13e0236]
/* 0e514eca */  LEA RSI,[0x1208bb9]
/* 0e514ed1 */  LEA RCX,[0x119d818]
/* 0e514ed8 */  LEA R8,[0x121d0d5]
/* 0e514edf */  MOV EDX,0x326
/* 0e514ee4 */  XOR EAX,EAX
/* 0e514ee6 */  CALL 0x0eeddcf0
/* 0e514eeb */  TEST AL,AL
/* 0e514eed */  JZ 0x0e514efa
/* 0e514eef */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e514efa */  ADD R15,0x8
/* 0e514efe */  MOV byte ptr [RSP],0x0
/* 0e514f02 */  MOV RCX,RSP
/* 0e514f05 */  MOV RDI,R15
/* 0e514f08 */  MOV RSI,R14
/* 0e514f0b */  MOV RDX,R14
/* 0e514f0e */  CALL 0x05d9c620
/* 0e514f13 */  MOVAPS XMM0,xmmword ptr [RSP + 0x200]
/* 0e514f1b */  MOVAPS XMM1,xmmword ptr [RSP + 0x210]
/* 0e514f23 */  MOVAPS XMM2,xmmword ptr [RSP + 0x220]
/* 0e514f2b */  MOVAPS xmmword ptr [RSP + 0x1c0],XMM0
/* 0e514f33 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM1
/* 0e514f3b */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM2
/* 0e514f43 */  MOVUPS XMM0,xmmword ptr [RSP + 0x22c]
/* 0e514f4b */  MOVUPS xmmword ptr [RSP + 0x1ec],XMM0
/* 0e514f53 */  LEA RDI,[RSP + 0x70]
/* 0e514f58 */  CALL 0x048b0bc0
/* 0e514f5d */  MOV word ptr [RSP + 0x308],0x7902
/* 0e514f67 */  LEA RSI,[RSP + 0x309]
/* 0e514f6f */  MOV byte ptr [RSP + 0x30a],0x0
/* 0e514f77 */  LEA RDI,[RSP + 0x70]
/* 0e514f7c */  CALL 0x0e5424b0
/* 0e514f81 */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e514f89 */  MOV ESI,EAX
/* 0e514f8b */  SHR ESI,0x1
/* 0e514f8d */  TEST AL,0x1
/* 0e514f8f */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0e514f97 */  CMOVZ RAX,R12
/* 0e514f9b */  CMOVNZ RSI,qword ptr [RSP + 0xa0]
/* 0e514fa4 */  TEST RSI,RSI
/* 0e514fa7 */  JZ 0x0e514fbd
/* 0e514fa9 */  MOV ECX,ESI
/* 0e514fab */  AND ECX,0x3
/* 0e514fae */  CMP RSI,0x4
/* 0e514fb2 */  JNC 0x0e514fc7
/* 0e514fb4 */  MOV EDX,0x811c9dc5
/* 0e514fb9 */  XOR EDI,EDI
/* 0e514fbb */  JMP 0x0e515028
/* 0e514fbd */  MOV EDX,0x811c9dc5
/* 0e514fc2 */  JMP 0x0e515054
/* 0e514fc7 */  AND RSI,-0x4
/* 0e514fcb */  MOV EDX,0x811c9dc5
/* 0e514fd0 */  XOR EDI,EDI
/* 0e514fd2 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e514fe0 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e514fe5 */  XOR R8D,EDX
/* 0e514fe8 */  IMUL EDX,R8D,0x1000193
/* 0e514fef */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e514ff5 */  XOR R8D,EDX
/* 0e514ff8 */  IMUL EDX,R8D,0x1000193
/* 0e514fff */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e515005 */  XOR R8D,EDX
/* 0e515008 */  IMUL EDX,R8D,0x1000193
/* 0e51500f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e515015 */  XOR R8D,EDX
/* 0e515018 */  IMUL EDX,R8D,0x1000193
/* 0e51501f */  ADD RDI,0x4
/* 0e515023 */  CMP RSI,RDI
/* 0e515026 */  JNZ 0x0e514fe0
/* 0e515028 */  TEST RCX,RCX
/* 0e51502b */  JZ 0x0e515054
/* 0e51502d */  ADD RAX,RDI
/* 0e515030 */  XOR ESI,ESI
/* 0e515032 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e515040 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e515044 */  XOR EDI,EDX
/* 0e515046 */  IMUL EDX,EDI,0x1000193
/* 0e51504c */  INC RSI
/* 0e51504f */  CMP RCX,RSI
/* 0e515052 */  JNZ 0x0e515040
/* 0e515054 */  MOV dword ptr [RSP + 0x1e8],0x2
/* 0e51505f */  MOV dword ptr [RSP + 0x1ec],EDX
/* 0e515066 */  MOVZX EAX,byte ptr [0x0f755780]
/* 0e51506d */  TEST AL,AL
/* 0e51506f */  JZ 0x0e51f0d8
/* 0e515075 */  LEA R14,[RSP + 0x1c8]
/* 0e51507d */  MOV EAX,dword ptr [RSP + 0x1ec]
/* 0e515084 */  MOV dword ptr [RSP],EAX
/* 0e515087 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e515090 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e515098 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e5150a1 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e5150aa */  LEA RAX,[0xe5429d0]
/* 0e5150b1 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e5150b6 */  LEA RAX,[0x48b06d0]
/* 0e5150bd */  MOV qword ptr [RSP + 0x30],RAX
/* 0e5150c2 */  MOV qword ptr [RSP + 0x38],RBP
/* 0e5150c7 */  LEA RAX,[0xe542cb0]
/* 0e5150ce */  MOV qword ptr [RSP + 0x40],RAX
/* 0e5150d3 */  LEA RAX,[0xe542cc0]
/* 0e5150da */  MOV qword ptr [RSP + 0x48],RAX
/* 0e5150df */  MOV dword ptr [RSP + 0x50],0x0
/* 0e5150e7 */  XORPS XMM0,XMM0
/* 0e5150ea */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e5150ef */  MOV RSI,RSP
/* 0e5150f2 */  MOV RDI,R14
/* 0e5150f5 */  CALL 0x048b05a0
/* 0e5150fa */  MOV R15,qword ptr [RSP + 0x60]
/* 0e5150ff */  TEST R15,R15
/* 0e515102 */  JZ 0x0e515127
/* 0e515104 */  MOV RAX,-0x1
/* 0e51510b */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e515111 */  TEST RAX,RAX
/* 0e515114 */  JNZ 0x0e515127
/* 0e515116 */  MOV RAX,qword ptr [R15]
/* 0e515119 */  MOV RDI,R15
/* 0e51511c */  CALL qword ptr [RAX + 0x10]
/* 0e51511f */  MOV RDI,R15
/* 0e515122 */  CALL 0x0412c2d0
/* 0e515127 */  MOVUPS XMM0,xmmword ptr [R14]
/* 0e51512b */  MOVUPS XMM1,xmmword ptr [R14 + 0x10]
/* 0e515130 */  MOVAPS xmmword ptr [RSP + 0x150],XMM1
/* 0e515138 */  MOVAPS xmmword ptr [RSP + 0x140],XMM0
/* 0e515140 */  MOV RDI,RSP
/* 0e515143 */  LEA RSI,[RSP + 0x140]
/* 0e51514b */  LEA RDX,[RSP + 0x70]
/* 0e515150 */  CALL 0x0e542760
/* 0e515155 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e515159 */  CMP EAX,0x2
/* 0e51515c */  JZ 0x0e51558f
/* 0e515162 */  CMP EAX,0x1
/* 0e515165 */  JZ 0x0e5151df
/* 0e515167 */  TEST EAX,EAX
/* 0e515169 */  JNZ 0x0e515177
/* 0e51516b */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e515170 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e515177 */  CMP byte ptr [RSP + 0x1f8],0x0
/* 0e51517f */  JZ 0x0e51521d
/* 0e515185 */  JMP 0x0e51522d
/* 0e51518a */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e51518f */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e515193 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e515197 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e51519b */  CMP dword ptr [RAX],ECX
/* 0e51519d */  JZ 0x0e5151bf
/* 0e51519f */  ADD RAX,0x58
/* 0e5151a3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e5151b0 */  MOV RDX,RAX
/* 0e5151b3 */  ADD RAX,0x58
/* 0e5151b7 */  CMP dword ptr [RDX],ECX
/* 0e5151b9 */  JNZ 0x0e5151b0
/* 0e5151bb */  ADD RAX,-0x58
/* 0e5151bf */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e5151c4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e5151c8 */  JZ 0x0e514def
/* 0e5151ce */  NOP
/* 0e5151d0 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e5151d4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e5151d8 */  JNZ 0x0e5151d0
/* 0e5151da */  JMP 0x0e514def
/* 0e5151df */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e5151e4 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e5151e8 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e5151ec */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e5151f0 */  CMP dword ptr [RAX],ECX
/* 0e5151f2 */  JZ 0x0e51520f
/* 0e5151f4 */  ADD RAX,0x68
/* 0e5151f8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e515200 */  MOV RDX,RAX
/* 0e515203 */  ADD RAX,0x68
/* 0e515207 */  CMP dword ptr [RDX],ECX
/* 0e515209 */  JNZ 0x0e515200
/* 0e51520b */  ADD RAX,-0x68
/* 0e51520f */  OR byte ptr [RAX + 0x12],0x9
/* 0e515213 */  CMP byte ptr [RSP + 0x1f8],0x0
/* 0e51521b */  JNZ 0x0e51522d
/* 0e51521d */  MOV RDI,RSP
/* 0e515220 */  LEA RSI,[RSP + 0x1c0]
/* 0e515228 */  CALL 0x0e542af0
/* 0e51522d */  MOV R13D,dword ptr [RSP + 0x1f4]
/* 0e515235 */  MOV R15,qword ptr [RSP + 0x1c0]
/* 0e51523d */  MOVZX EAX,byte ptr [0x0f755760]
/* 0e515244 */  TEST AL,AL
/* 0e515246 */  JZ 0x0e51f146
/* 0e51524c */  LEA R14,[RSP + 0x1ec]
/* 0e515254 */  MOV RAX,qword ptr [0x0f7556e0]
/* 0e51525b */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e51525e */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e515262 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e515266 */  SUB RDX,RCX
/* 0e515269 */  SHR RDX,0x3
/* 0e51526d */  MOV ESI,0xffffffff
/* 0e515272 */  ADD EDX,ESI
/* 0e515274 */  AND EDX,EAX
/* 0e515276 */  LEA RCX,[RCX + RDX*0x8]
/* 0e51527a */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e51527e */  NOP
/* 0e515280 */  MOV RCX,qword ptr [RCX]
/* 0e515283 */  CMP RCX,-0x1
/* 0e515287 */  JZ 0x0e5152a9
/* 0e515289 */  LEA RSI,[RCX + RCX*0x2]
/* 0e51528d */  LEA RCX,[RDX + RSI*0x8]
/* 0e515291 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e515295 */  JNZ 0x0e515280
/* 0e515297 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e51529b */  CMP RCX,RAX
/* 0e51529e */  JNZ 0x0e5152b5
/* 0e5152a0 */  LEA RAX,[0xf7556e0]
/* 0e5152a7 */  JMP 0x0e5152b9
/* 0e5152a9 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e5152ad */  MOV RCX,RAX
/* 0e5152b0 */  CMP RCX,RAX
/* 0e5152b3 */  JZ 0x0e5152a0
/* 0e5152b5 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e5152b9 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e5152bd */  MOV R15,qword ptr [RAX + 0x20]
/* 0e5152c1 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e5152c5 */  CMP R15,RAX
/* 0e5152c8 */  JZ 0x0e5152de
/* 0e5152ca */  NOP word ptr [RAX + RAX*0x1]
/* 0e5152d0 */  CMP dword ptr [R15],R13D
/* 0e5152d3 */  JZ 0x0e5152de
/* 0e5152d5 */  ADD R15,0x38
/* 0e5152d9 */  CMP R15,RAX
/* 0e5152dc */  JNZ 0x0e5152d0
/* 0e5152de */  CMP R15,RAX
/* 0e5152e1 */  JNZ 0x0e51531a
/* 0e5152e3 */  LEA RDI,[0x13e0236]
/* 0e5152ea */  LEA RSI,[0x1208bb9]
/* 0e5152f1 */  LEA RCX,[0x119d818]
/* 0e5152f8 */  LEA R8,[0x121d0d5]
/* 0e5152ff */  MOV EDX,0x326
/* 0e515304 */  XOR EAX,EAX
/* 0e515306 */  CALL 0x0eeddcf0
/* 0e51530b */  TEST AL,AL
/* 0e51530d */  JZ 0x0e51531a
/* 0e51530f */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e51531a */  ADD R15,0x8
/* 0e51531e */  MOV byte ptr [RSP],0x0
/* 0e515322 */  MOV RCX,RSP
/* 0e515325 */  MOV RDI,R15
/* 0e515328 */  MOV RSI,R14
/* 0e51532b */  MOV RDX,R14
/* 0e51532e */  CALL 0x05d9c620
/* 0e515333 */  MOVAPS XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e51533b */  MOVAPS XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e515343 */  MOVDQA XMM2,xmmword ptr [RSP + 0x1e0]
/* 0e51534c */  MOVAPS xmmword ptr [RSP + 0x140],XMM0
/* 0e515354 */  MOVAPS xmmword ptr [RSP + 0x150],XMM1
/* 0e51535c */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e515365 */  MOVUPS XMM0,xmmword ptr [RSP + 0x1ec]
/* 0e51536d */  MOVUPS xmmword ptr [RSP + 0x16c],XMM0
/* 0e515375 */  LEA RDI,[RSP + 0x70]
/* 0e51537a */  CALL 0x048b0bc0
/* 0e51537f */  MOV word ptr [RSP + 0x340],0x7a02
/* 0e515389 */  LEA RSI,[RSP + 0x341]
/* 0e515391 */  MOV byte ptr [RSP + 0x342],0x0
/* 0e515399 */  LEA RDI,[RSP + 0x70]
/* 0e51539e */  CALL 0x0e5424b0
/* 0e5153a3 */  MOVZX EAX,byte ptr [RSP + 0x98]
/* 0e5153ab */  MOV EDX,EAX
/* 0e5153ad */  SHR EDX,0x1
/* 0e5153af */  TEST AL,0x1
/* 0e5153b1 */  CMOVNZ R12,qword ptr [RSP + 0xa8]
/* 0e5153ba */  CMOVNZ RDX,qword ptr [RSP + 0xa0]
/* 0e5153c3 */  TEST RDX,RDX
/* 0e5153c6 */  JZ 0x0e5153dc
/* 0e5153c8 */  MOV EAX,EDX
/* 0e5153ca */  AND EAX,0x3
/* 0e5153cd */  CMP RDX,0x4
/* 0e5153d1 */  JNC 0x0e5153e3
/* 0e5153d3 */  MOV ECX,0x811c9dc5
/* 0e5153d8 */  XOR ESI,ESI
/* 0e5153da */  JMP 0x0e515430
/* 0e5153dc */  MOV ECX,0x811c9dc5
/* 0e5153e1 */  JMP 0x0e515455
/* 0e5153e3 */  AND RDX,-0x4
/* 0e5153e7 */  MOV ECX,0x811c9dc5
/* 0e5153ec */  XOR ESI,ESI
/* 0e5153ee */  NOP
/* 0e5153f0 */  MOVSX EDI,byte ptr [R12 + RSI*0x1]
/* 0e5153f5 */  XOR EDI,ECX
/* 0e5153f7 */  IMUL ECX,EDI,0x1000193
/* 0e5153fd */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x1]
/* 0e515403 */  XOR EDI,ECX
/* 0e515405 */  IMUL ECX,EDI,0x1000193
/* 0e51540b */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x2]
/* 0e515411 */  XOR EDI,ECX
/* 0e515413 */  IMUL ECX,EDI,0x1000193
/* 0e515419 */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x3]
/* 0e51541f */  XOR EDI,ECX
/* 0e515421 */  IMUL ECX,EDI,0x1000193
/* 0e515427 */  ADD RSI,0x4
/* 0e51542b */  CMP RDX,RSI
/* 0e51542e */  JNZ 0x0e5153f0
/* 0e515430 */  TEST RAX,RAX
/* 0e515433 */  JZ 0x0e515455
/* 0e515435 */  ADD R12,RSI
/* 0e515438 */  XOR EDX,EDX
/* 0e51543a */  NOP word ptr [RAX + RAX*0x1]
/* 0e515440 */  MOVSX ESI,byte ptr [R12 + RDX*0x1]
/* 0e515445 */  XOR ESI,ECX
/* 0e515447 */  IMUL ECX,ESI,0x1000193
/* 0e51544d */  INC RDX
/* 0e515450 */  CMP RAX,RDX
/* 0e515453 */  JNZ 0x0e515440
/* 0e515455 */  MOV dword ptr [RSP + 0x168],0x2
/* 0e515460 */  MOV dword ptr [RSP + 0x16c],ECX
/* 0e515467 */  MOVZX EAX,byte ptr [0x0f755780]
/* 0e51546e */  TEST AL,AL
/* 0e515470 */  JZ 0x0e51f18a
/* 0e515476 */  LEA R14,[RSP + 0x148]
/* 0e51547e */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e515485 */  MOV dword ptr [RSP],EAX
/* 0e515488 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e515491 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e515499 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e5154a2 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e5154ab */  LEA RAX,[0xe5429d0]
/* 0e5154b2 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e5154b7 */  LEA RAX,[0x48b06d0]
/* 0e5154be */  MOV qword ptr [RSP + 0x30],RAX
/* 0e5154c3 */  MOV qword ptr [RSP + 0x38],RBP
/* 0e5154c8 */  LEA RAX,[0xe542d10]
/* 0e5154cf */  MOV qword ptr [RSP + 0x40],RAX
/* 0e5154d4 */  LEA RAX,[0xe542d20]
/* 0e5154db */  MOV qword ptr [RSP + 0x48],RAX
/* 0e5154e0 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e5154e8 */  XORPS XMM0,XMM0
/* 0e5154eb */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e5154f0 */  MOV RSI,RSP
/* 0e5154f3 */  MOV RDI,R14
/* 0e5154f6 */  CALL 0x048b05a0
/* 0e5154fb */  MOV R15,qword ptr [RSP + 0x60]
/* 0e515500 */  TEST R15,R15
/* 0e515503 */  JZ 0x0e515528
/* 0e515505 */  MOV RAX,-0x1
/* 0e51550c */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e515512 */  TEST RAX,RAX
/* 0e515515 */  JNZ 0x0e515528
/* 0e515517 */  MOV RAX,qword ptr [R15]
/* 0e51551a */  MOV RDI,R15
/* 0e51551d */  CALL qword ptr [RAX + 0x10]
/* 0e515520 */  MOV RDI,R15
/* 0e515523 */  CALL 0x0412c2d0
/* 0e515528 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e51552d */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e515533 */  MOVDQA xmmword ptr [RSP + 0x2d0],XMM1
/* 0e51553c */  MOVDQA xmmword ptr [RSP + 0x2c0],XMM0
/* 0e515545 */  MOV RDI,RSP
/* 0e515548 */  LEA RSI,[RSP + 0x2c0]
/* 0e515550 */  LEA RDX,[RSP + 0x70]
/* 0e515555 */  CALL 0x0e542760
/* 0e51555a */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e51555e */  CMP EAX,0x2
/* 0e515561 */  JZ 0x0e515c0e
/* 0e515567 */  CMP EAX,0x1
/* 0e51556a */  JZ 0x0e5155df
/* 0e51556c */  TEST EAX,EAX
/* 0e51556e */  JNZ 0x0e51557c
/* 0e515570 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e515575 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e51557c */  CMP byte ptr [RSP + 0x178],0x0
/* 0e515584 */  JZ 0x0e51561d
/* 0e51558a */  JMP 0x0e51562d
/* 0e51558f */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e515594 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e515598 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e51559c */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e5155a0 */  CMP dword ptr [RAX],ECX
/* 0e5155a2 */  JZ 0x0e5155bf
/* 0e5155a4 */  ADD RAX,0x58
/* 0e5155a8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e5155b0 */  MOV RDX,RAX
/* 0e5155b3 */  ADD RAX,0x58
/* 0e5155b7 */  CMP dword ptr [RDX],ECX
/* 0e5155b9 */  JNZ 0x0e5155b0
/* 0e5155bb */  ADD RAX,-0x58
/* 0e5155bf */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e5155c4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e5155c8 */  JZ 0x0e51520f
/* 0e5155ce */  NOP
/* 0e5155d0 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e5155d4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e5155d8 */  JNZ 0x0e5155d0
/* 0e5155da */  JMP 0x0e51520f
/* 0e5155df */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e5155e4 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e5155e8 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e5155ec */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e5155f0 */  CMP dword ptr [RAX],ECX
/* 0e5155f2 */  JZ 0x0e51560f
/* 0e5155f4 */  ADD RAX,0x68
/* 0e5155f8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e515600 */  MOV RDX,RAX
/* 0e515603 */  ADD RAX,0x68
/* 0e515607 */  CMP dword ptr [RDX],ECX
/* 0e515609 */  JNZ 0x0e515600
/* 0e51560b */  ADD RAX,-0x68
/* 0e51560f */  OR byte ptr [RAX + 0x12],0x9
/* 0e515613 */  CMP byte ptr [RSP + 0x178],0x0
/* 0e51561b */  JNZ 0x0e51562d
/* 0e51561d */  MOV RDI,RSP
/* 0e515620 */  LEA RSI,[RSP + 0x140]
/* 0e515628 */  CALL 0x0e542af0
/* 0e51562d */  MOV EBP,dword ptr [RSP + 0x174]
/* 0e515634 */  MOV R15,qword ptr [RSP + 0x140]
/* 0e51563c */  MOVZX EAX,byte ptr [0x0f755760]
/* 0e515643 */  TEST AL,AL
/* 0e515645 */  JZ 0x0e51f222
/* 0e51564b */  LEA R14,[RSP + 0x16c]
/* 0e515653 */  MOV RAX,qword ptr [0x0f7556e0]
/* 0e51565a */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e51565d */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e515661 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e515665 */  SUB RDX,RCX
/* 0e515668 */  SHR RDX,0x3
/* 0e51566c */  MOV ESI,0xffffffff
/* 0e515671 */  ADD EDX,ESI
/* 0e515673 */  AND EDX,EAX
/* 0e515675 */  LEA RCX,[RCX + RDX*0x8]
/* 0e515679 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e51567d */  NOP dword ptr [RAX]
/* 0e515680 */  MOV RCX,qword ptr [RCX]
/* 0e515683 */  CMP RCX,-0x1
/* 0e515687 */  JZ 0x0e5156a9
/* 0e515689 */  LEA RSI,[RCX + RCX*0x2]
/* 0e51568d */  LEA RCX,[RDX + RSI*0x8]
/* 0e515691 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e515695 */  JNZ 0x0e515680
/* 0e515697 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e51569b */  CMP RCX,RAX
/* 0e51569e */  JNZ 0x0e5156b5
/* 0e5156a0 */  LEA RAX,[0xf7556e0]
/* 0e5156a7 */  JMP 0x0e5156b9
/* 0e5156a9 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e5156ad */  MOV RCX,RAX
/* 0e5156b0 */  CMP RCX,RAX
/* 0e5156b3 */  JZ 0x0e5156a0
/* 0e5156b5 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e5156b9 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e5156bd */  MOV R15,qword ptr [RAX + 0x20]
/* 0e5156c1 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e5156c5 */  CMP R15,RAX
/* 0e5156c8 */  JZ 0x0e5156de
/* 0e5156ca */  NOP word ptr [RAX + RAX*0x1]
/* 0e5156d0 */  CMP dword ptr [R15],EBP
/* 0e5156d3 */  JZ 0x0e5156de
/* 0e5156d5 */  ADD R15,0x38
/* 0e5156d9 */  CMP R15,RAX
/* 0e5156dc */  JNZ 0x0e5156d0
/* 0e5156de */  CMP R15,RAX
/* 0e5156e1 */  JNZ 0x0e51571a
/* 0e5156e3 */  LEA RDI,[0x13e0236]
/* 0e5156ea */  LEA RSI,[0x1208bb9]
/* 0e5156f1 */  LEA RCX,[0x119d818]
/* 0e5156f8 */  LEA R8,[0x121d0d5]
/* 0e5156ff */  MOV EDX,0x326
/* 0e515704 */  XOR EAX,EAX
/* 0e515706 */  CALL 0x0eeddcf0
/* 0e51570b */  TEST AL,AL
/* 0e51570d */  JZ 0x0e51571a
/* 0e51570f */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e51571a */  ADD R15,0x8
/* 0e51571e */  MOV byte ptr [RSP],0x0
/* 0e515722 */  MOV RCX,RSP
/* 0e515725 */  MOV RDI,R15
/* 0e515728 */  MOV RSI,R14
/* 0e51572b */  MOV RDX,R14
/* 0e51572e */  CALL 0x05d9c620
/* 0e515733 */  LEA RDI,[RSP + 0x70]
/* 0e515738 */  CALL 0x048b0bc0
/* 0e51573d */  TEST byte ptr [RSP + 0x340],0x1
/* 0e515745 */  JNZ 0x0e515a5b
/* 0e51574b */  TEST byte ptr [RSP + 0x308],0x1
/* 0e515753 */  JNZ 0x0e515a82
/* 0e515759 */  TEST byte ptr [RSP + 0x280],0x1
/* 0e515761 */  JZ 0x0e51577c
/* 0e515763 */  MOV RSI,qword ptr [RSP + 0x280]
/* 0e51576b */  MOV RDI,qword ptr [RSP + 0x290]
/* 0e515773 */  AND RSI,-0x2
/* 0e515777 */  CALL 0x0412a280
/* 0e51577c */  MOVZX EAX,byte ptr [0x0f755818]
/* 0e515783 */  TEST AL,AL
/* 0e515785 */  JZ 0x0e51e866
/* 0e51578b */  MOV RAX,qword ptr [0x0f755798]
/* 0e515792 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e515795 */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e515799 */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e51579d */  SUB RDX,RCX
/* 0e5157a0 */  SHR RDX,0x3
/* 0e5157a4 */  MOV ESI,0xffffffff
/* 0e5157a9 */  ADD EDX,ESI
/* 0e5157ab */  AND EDX,EAX
/* 0e5157ad */  LEA RCX,[RCX + RDX*0x8]
/* 0e5157b1 */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e5157b5 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e5157c0 */  MOV RCX,qword ptr [RCX]
/* 0e5157c3 */  CMP RCX,-0x1
/* 0e5157c7 */  JZ 0x0e5157f2
/* 0e5157c9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e5157cd */  LEA RCX,[RDX + RSI*0x8]
/* 0e5157d1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e5157d5 */  JNZ 0x0e5157c0
/* 0e5157d7 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e5157db */  CMP RCX,RAX
/* 0e5157de */  JNZ 0x0e5157fe
/* 0e5157e0 */  LEA RAX,[0xf755798]
/* 0e5157e7 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e5157ee */  JZ 0x0e51580b
/* 0e5157f0 */  JMP 0x0e51584d
/* 0e5157f2 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e5157f6 */  MOV RCX,RAX
/* 0e5157f9 */  CMP RCX,RAX
/* 0e5157fc */  JZ 0x0e5157e0
/* 0e5157fe */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e515802 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e515809 */  JNZ 0x0e51584d
/* 0e51580b */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e51580f */  TEST RAX,RAX
/* 0e515812 */  JZ 0x0e51584d
/* 0e515814 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e515818 */  LEA RDX,[RAX + 0x9]
/* 0e51581c */  MOV ECX,ESI
/* 0e51581e */  SHR ECX,0x1
/* 0e515820 */  TEST SIL,0x1
/* 0e515824 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e515829 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e51582e */  LEA RDI,[RSP + 0x180]
/* 0e515836 */  MOV RSI,RBX
/* 0e515839 */  CALL 0x0e543210
/* 0e51583e */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e515846 */  JZ 0x0e515877
/* 0e515848 */  JMP 0x0e516248
/* 0e51584d */  LEA RDX,[0x11cef07]
/* 0e515854 */  LEA RDI,[RSP + 0x180]
/* 0e51585c */  MOV ECX,0xf
/* 0e515861 */  MOV RSI,RBX
/* 0e515864 */  CALL 0x0e543210
/* 0e515869 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e515871 */  JNZ 0x0e516248
/* 0e515877 */  MOV R15,qword ptr [RSP + 0x180]
/* 0e51587f */  MOVZX EAX,byte ptr [0x0f755818]
/* 0e515886 */  TEST AL,AL
/* 0e515888 */  JZ 0x0e51f102
/* 0e51588e */  LEA R14,[R15 + 0x18]
/* 0e515892 */  MOV RAX,qword ptr [0x0f755798]
/* 0e515899 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e51589c */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e5158a0 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e5158a4 */  SUB RDX,RCX
/* 0e5158a7 */  SHR RDX,0x3
/* 0e5158ab */  MOV ESI,0xffffffff
/* 0e5158b0 */  ADD EDX,ESI
/* 0e5158b2 */  AND EDX,EAX
/* 0e5158b4 */  LEA RCX,[RCX + RDX*0x8]
/* 0e5158b8 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e5158bc */  NOP dword ptr [RAX]
/* 0e5158c0 */  MOV RCX,qword ptr [RCX]
/* 0e5158c3 */  CMP RCX,-0x1
/* 0e5158c7 */  JZ 0x0e5158e9
/* 0e5158c9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e5158cd */  LEA RCX,[RDX + RSI*0x8]
/* 0e5158d1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e5158d5 */  JNZ 0x0e5158c0
/* 0e5158d7 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e5158db */  CMP RCX,RAX
/* 0e5158de */  JNZ 0x0e5158f5
/* 0e5158e0 */  LEA RSI,[0xf755798]
/* 0e5158e7 */  JMP 0x0e5158f9
/* 0e5158e9 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e5158ed */  MOV RCX,RAX
/* 0e5158f0 */  CMP RCX,RAX
/* 0e5158f3 */  JZ 0x0e5158e0
/* 0e5158f5 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e5158f9 */  MOV RCX,qword ptr [RSP + 0x180]
/* 0e515901 */  MOV RAX,qword ptr [RCX + 0x50]
/* 0e515905 */  MOV RCX,qword ptr [RCX + 0x58]
/* 0e515909 */  CMP RAX,RCX
/* 0e51590c */  JZ 0x0e5159c5
/* 0e515912 */  MOV RDX,0x3a6c61657265635b
/* 0e51591c */  MOVQ XMM0,RDX
/* 0e515921 */  MOV RDX,0x746e656d75636f64
/* 0e51592b */  MOVQ XMM1,RDX
/* 0e515930 */  PUNPCKLQDQ XMM0,XMM1
/* 0e515934 */  MOV RDX,0x7461746e656d7563
/* 0e51593e */  MOVQ XMM1,RDX
/* 0e515943 */  MOV RDX,0x5d6761745f6e6f69
/* 0e51594d */  MOVQ XMM2,RDX
/* 0e515952 */  PUNPCKLQDQ XMM1,XMM2
/* 0e515956 */  JMP 0x0e51598e
/* 0e515960 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e515964 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e515968 */  PCMPEQB XMM2,XMM0
/* 0e51596c */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e515971 */  PCMPEQB XMM3,XMM1
/* 0e515975 */  PAND XMM3,XMM2
/* 0e515979 */  PMOVMSKB EDX,XMM3
/* 0e51597d */  CMP EDX,0xffff
/* 0e515983 */  JZ 0x0e5159c5
/* 0e515985 */  ADD RAX,0x38
/* 0e515989 */  CMP RAX,RCX
/* 0e51598c */  JZ 0x0e5159c5
/* 0e51598e */  MOVZX EDX,byte ptr [RAX]
/* 0e515991 */  TEST DL,0x1
/* 0e515994 */  JZ 0x0e5159b0
/* 0e515996 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e51599a */  CMP RDI,0x1a
/* 0e51599e */  JNZ 0x0e515985
/* 0e5159a0 */  JMP 0x0e5159ba
/* 0e5159b0 */  MOV EDI,EDX
/* 0e5159b2 */  SHR EDI,0x1
/* 0e5159b4 */  CMP RDI,0x1a
/* 0e5159b8 */  JNZ 0x0e515985
/* 0e5159ba */  TEST DL,0x1
/* 0e5159bd */  JNZ 0x0e515960
/* 0e5159bf */  LEA RDX,[RAX + 0x1]
/* 0e5159c3 */  JMP 0x0e515964
/* 0e5159c5 */  CMP RAX,RCX
/* 0e5159c8 */  JZ 0x0e5159e8
/* 0e5159ca */  MOV EBP,dword ptr [RAX + 0x1c]
/* 0e5159cd */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e5159d4 */  TEST AL,AL
/* 0e5159d6 */  JZ 0x0e51f951
/* 0e5159dc */  CMP EBP,dword ptr [0x0f550ac4]
/* 0e5159e2 */  JNZ 0x0e515ce3
/* 0e5159e8 */  CMP dword ptr [RSP + 0x1a8],0x0
/* 0e5159f0 */  JZ 0x0e515aae
/* 0e5159f6 */  MOV EBP,dword ptr [RSP + 0x1ac]
/* 0e5159fd */  TEST RSI,RSI
/* 0e515a00 */  JNZ 0x0e515a0d
/* 0e515a02 */  MOV RDI,R14
/* 0e515a05 */  CALL 0x048aead0
/* 0e515a0a */  MOV RSI,RAX
/* 0e515a0d */  MOV RDI,R14
/* 0e515a10 */  MOV EDX,EBP
/* 0e515a12 */  MOV ECX,0x1
/* 0e515a17 */  CALL 0x048b0c90
/* 0e515a1c */  TEST RAX,RAX
/* 0e515a1f */  JNZ 0x0e515a43
/* 0e515a21 */  PXOR XMM0,XMM0
/* 0e515a25 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e515a2b */  LEA RDI,[RSP + 0x70]
/* 0e515a30 */  CALL 0x048b0d20
/* 0e515a35 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e515a3a */  TEST RAX,RAX
/* 0e515a3d */  JZ 0x0e515acb
/* 0e515a43 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e515a4a */  JNZ 0x0e515acb
/* 0e515a4c */  MOV R14,qword ptr [RAX + 0x58]
/* 0e515a50 */  TEST R14,R14
/* 0e515a53 */  JZ 0x0e515acb
/* 0e515a55 */  ADD R14,0x40
/* 0e515a59 */  JMP 0x0e515ace
/* 0e515a5b */  MOV RSI,qword ptr [RSP + 0x340]
/* 0e515a63 */  MOV RDI,qword ptr [RSP + 0x350]
/* 0e515a6b */  AND RSI,-0x2
/* 0e515a6f */  CALL 0x0412a280
/* 0e515a74 */  TEST byte ptr [RSP + 0x308],0x1
/* 0e515a7c */  JZ 0x0e515759
/* 0e515a82 */  MOV RSI,qword ptr [RSP + 0x308]
/* 0e515a8a */  MOV RDI,qword ptr [RSP + 0x318]
/* 0e515a92 */  AND RSI,-0x2
/* 0e515a96 */  CALL 0x0412a280
/* 0e515a9b */  TEST byte ptr [RSP + 0x280],0x1
/* 0e515aa3 */  JNZ 0x0e515763
/* 0e515aa9 */  JMP 0x0e51577c
/* 0e515aae */  TEST RSI,RSI
/* 0e515ab1 */  JZ 0x0e515acb
/* 0e515ab3 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e515aba */  JNZ 0x0e515acb
/* 0e515abc */  MOV R14,qword ptr [RSI + 0x68]
/* 0e515ac0 */  TEST R14,R14
/* 0e515ac3 */  JZ 0x0e515acb
/* 0e515ac5 */  ADD R14,0x38
/* 0e515ac9 */  JMP 0x0e515ace
/* 0e515acb */  XOR R14D,R14D
/* 0e515ace */  LEA RAX,[0x488e0b0]
/* 0e515ad5 */  MOV qword ptr [RSP + 0x10],RAX
/* 0e515ada */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e515ae2 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e515aeb */  MOV byte ptr [RSP + 0x24],0x0
/* 0e515af0 */  MOV qword ptr [RSP],0x0
/* 0e515af8 */  PXOR XMM0,XMM0
/* 0e515afc */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e515b02 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e515b0a */  MOV qword ptr [RSP + 0x90],0x0
/* 0e515b16 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e515b21 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e515b29 */  LEA RDI,[0xf5463b0]
/* 0e515b30 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e515b37 */  MOV ESI,0x20
/* 0e515b3c */  CALL qword ptr [RAX + 0x10]
/* 0e515b3f */  MOV R15,RAX
/* 0e515b42 */  TEST RAX,RAX
/* 0e515b45 */  JZ 0x0e51e657
/* 0e515b4b */  MOV qword ptr [RSP + 0x150],R15
/* 0e515b53 */  MOV qword ptr [RSP + 0x140],0x21
/* 0e515b5f */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e515b6b */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e515b72 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e515b77 */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e515b7f */  MOVDQU xmmword ptr [R15],XMM0
/* 0e515b84 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e515b89 */  LEA RSI,[RSP + 0x140]
/* 0e515b91 */  MOV RDI,R14
/* 0e515b94 */  CALL 0x048b5060
/* 0e515b99 */  MOV R15,RAX
/* 0e515b9c */  LEA R14,[RSP + 0x78]
/* 0e515ba1 */  ADD RAX,0x20
/* 0e515ba5 */  MOV qword ptr [R15 + 0x20],0x0
/* 0e515bad */  LEA RCX,[RSP + 0x70]
/* 0e515bb2 */  CMP RAX,RCX
/* 0e515bb5 */  JZ 0x0e515bf9
/* 0e515bb7 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e515bbb */  TEST RAX,RAX
/* 0e515bbe */  JZ 0x0e515c71
/* 0e515bc4 */  MOV R12,R15
/* 0e515bc7 */  ADD R12,0x28
/* 0e515bcb */  MOV RDI,R12
/* 0e515bce */  CALL RAX
/* 0e515bd0 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e515bd8 */  TEST EAX,EAX
/* 0e515bda */  JZ 0x0e515c71
/* 0e515be0 */  CMP EAX,0x2
/* 0e515be3 */  JNZ 0x0e515c5f
/* 0e515be5 */  MOV EDI,0x5
/* 0e515bea */  MOV RSI,R14
/* 0e515bed */  MOV RDX,R12
/* 0e515bf0 */  CALL qword ptr [RSP + 0x88]
/* 0e515bf7 */  JMP 0x0e515c71
/* 0e515bf9 */  XOR EAX,EAX
/* 0e515bfb */  TEST byte ptr [RSP + 0x140],0x1
/* 0e515c03 */  JNZ 0x0e515ca9
/* 0e515c09 */  JMP 0x0e515cca
/* 0e515c0e */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e515c13 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e515c17 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e515c1b */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e515c1f */  CMP dword ptr [RAX],ECX
/* 0e515c21 */  JZ 0x0e515c3f
/* 0e515c23 */  ADD RAX,0x58
/* 0e515c27 */  NOP word ptr [RAX + RAX*0x1]
/* 0e515c30 */  MOV RDX,RAX
/* 0e515c33 */  ADD RAX,0x58
/* 0e515c37 */  CMP dword ptr [RDX],ECX
/* 0e515c39 */  JNZ 0x0e515c30
/* 0e515c3b */  ADD RAX,-0x58
/* 0e515c3f */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e515c44 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e515c48 */  JZ 0x0e51560f
/* 0e515c4e */  NOP
/* 0e515c50 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e515c54 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e515c58 */  JNZ 0x0e515c50
/* 0e515c5a */  JMP 0x0e51560f
/* 0e515c5f */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e515c64 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e515c6d */  MOV qword ptr [R12],RAX
/* 0e515c71 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e515c79 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e515c82 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e515c88 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e515c8f */  MOV dword ptr [R15 + 0x48],ECX
/* 0e515c93 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e515c9b */  MOV byte ptr [R15 + 0x4c],CL
/* 0e515c9f */  TEST byte ptr [RSP + 0x140],0x1
/* 0e515ca7 */  JZ 0x0e515cca
/* 0e515ca9 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e515cb1 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e515cb9 */  AND RSI,-0x2
/* 0e515cbd */  CALL 0x0412a280
/* 0e515cc2 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e515cca */  TEST RAX,RAX
/* 0e515ccd */  JZ 0x0e515cd4
/* 0e515ccf */  MOV RDI,R14
/* 0e515cd2 */  CALL RAX
/* 0e515cd4 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e515cd9 */  TEST RAX,RAX
/* 0e515cdc */  JZ 0x0e515ce3
/* 0e515cde */  MOV RDI,RSP
/* 0e515ce1 */  CALL RAX
/* 0e515ce3 */  MOV RAX,qword ptr [RSP + 0x1b0]
/* 0e515ceb */  MOV qword ptr [RSP + 0x1f0],RAX
/* 0e515cf3 */  MOVDQU XMM0,xmmword ptr [RSP + 0x180]
/* 0e515cfc */  MOVDQU XMM1,xmmword ptr [RSP + 0x190]
/* 0e515d05 */  MOVDQU XMM2,xmmword ptr [RSP + 0x1a0]
/* 0e515d0e */  MOVDQA xmmword ptr [RSP + 0x1e0],XMM2
/* 0e515d17 */  MOVDQA xmmword ptr [RSP + 0x1d0],XMM1
/* 0e515d20 */  MOVDQA xmmword ptr [RSP + 0x1c0],XMM0
/* 0e515d29 */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e515d32 */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e515d3b */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e515d44 */  MOV qword ptr [RSP + 0x170],RAX
/* 0e515d4c */  MOV RAX,0x5c17b12b00000002
/* 0e515d56 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e515d5e */  LEA R14,[RSP + 0xb0]
/* 0e515d66 */  PXOR XMM0,XMM0
/* 0e515d6a */  MOVDQA xmmword ptr [RSP + 0xd0],XMM0
/* 0e515d73 */  MOVDQA xmmword ptr [RSP + 0xc0],XMM0
/* 0e515d7c */  MOVDQA xmmword ptr [RSP + 0xb0],XMM0
/* 0e515d85 */  MOVDQA xmmword ptr [RSP + 0xa0],XMM0
/* 0e515d8e */  MOVDQA xmmword ptr [RSP + 0x90],XMM0
/* 0e515d97 */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e515da0 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e515da6 */  MOV dword ptr [RSP + 0xe0],0x3f600000
/* 0e515db1 */  MOV ESI,0x8
/* 0e515db6 */  MOV RDI,R14
/* 0e515db9 */  CALL 0x048afb10
/* 0e515dbe */  PXOR XMM0,XMM0
/* 0e515dc2 */  MOVDQU xmmword ptr [RSP + 0x108],XMM0
/* 0e515dcb */  MOVDQU xmmword ptr [RSP + 0xf8],XMM0
/* 0e515dd4 */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e515ddd */  MOV word ptr [RSP + 0x118],0xff00
/* 0e515de7 */  MOV byte ptr [RSP + 0x11c],0x0
/* 0e515def */  MOV byte ptr [RSP + 0x120],0x0
/* 0e515df7 */  MOV byte ptr [RSP + 0x124],0x0
/* 0e515dff */  LEA RDI,[0xf5463b0]
/* 0e515e06 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e515e0d */  MOV ESI,0x8
/* 0e515e12 */  CALL qword ptr [RAX + 0x10]
/* 0e515e15 */  MOV R15,RAX
/* 0e515e18 */  TEST RAX,RAX
/* 0e515e1b */  JZ 0x0e51e48c
/* 0e515e21 */  LEA RAX,[0xf4bd598]
/* 0e515e28 */  MOV qword ptr [R15],RAX
/* 0e515e2b */  MOV RDI,qword ptr [RSP + 0x70]
/* 0e515e30 */  MOV qword ptr [RSP + 0x70],R15
/* 0e515e35 */  TEST RDI,RDI
/* 0e515e38 */  JZ 0x0e515e40
/* 0e515e3a */  MOV RAX,qword ptr [RDI]
/* 0e515e3d */  CALL qword ptr [RAX + 0x8]
/* 0e515e40 */  TEST byte ptr [RSP + 0x98],0x1
/* 0e515e48 */  JZ 0x0e515e63
/* 0e515e4a */  MOV RSI,qword ptr [RSP + 0x98]
/* 0e515e52 */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0e515e5a */  AND RSI,-0x2
/* 0e515e5e */  CALL 0x0412a280
/* 0e515e63 */  MOV byte ptr [RSP + 0x98],0x1c
/* 0e515e6b */  MOV RAX,0x7461636964657270
/* 0e515e75 */  MOV qword ptr [RSP + 0x99],RAX
/* 0e515e7d */  MOV RAX,0x657079745f657461
/* 0e515e87 */  MOV qword ptr [RSP + 0x9f],RAX
/* 0e515e8f */  MOV byte ptr [RSP + 0xa7],0x0
/* 0e515e97 */  MOVZX EAX,byte ptr [0x0f755838]
/* 0e515e9e */  TEST AL,AL
/* 0e515ea0 */  JZ 0x0e51f1f8
/* 0e515ea6 */  LEA R15,[RSP + 0x148]
/* 0e515eae */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e515eb5 */  MOV dword ptr [RSP],EAX
/* 0e515eb8 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e515ec1 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e515ec9 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e515ed2 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e515edb */  LEA RAX,[0xe535290]
/* 0e515ee2 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e515ee7 */  LEA RAX,[0x48b06d0]
/* 0e515eee */  MOV qword ptr [RSP + 0x30],RAX
/* 0e515ef3 */  LEA RAX,[0xe530ec0]
/* 0e515efa */  MOV qword ptr [RSP + 0x38],RAX
/* 0e515eff */  LEA RAX,[0xe543d20]
/* 0e515f06 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e515f0b */  LEA RAX,[0xe543d30]
/* 0e515f12 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e515f17 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e515f1f */  PXOR XMM0,XMM0
/* 0e515f23 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e515f29 */  MOV RSI,RSP
/* 0e515f2c */  MOV RDI,R15
/* 0e515f2f */  CALL 0x048b05a0
/* 0e515f34 */  MOV R12,qword ptr [RSP + 0x60]
/* 0e515f39 */  TEST R12,R12
/* 0e515f3c */  JZ 0x0e515f63
/* 0e515f3e */  MOV RAX,-0x1
/* 0e515f45 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0e515f4c */  TEST RAX,RAX
/* 0e515f4f */  JNZ 0x0e515f63
/* 0e515f51 */  MOV RAX,qword ptr [R12]
/* 0e515f55 */  MOV RDI,R12
/* 0e515f58 */  CALL qword ptr [RAX + 0x10]
/* 0e515f5b */  MOV RDI,R12
/* 0e515f5e */  CALL 0x0412c2d0
/* 0e515f63 */  MOVDQU XMM0,xmmword ptr [R15]
/* 0e515f68 */  MOVDQU XMM1,xmmword ptr [R15 + 0x10]
/* 0e515f6e */  MOVDQA xmmword ptr [RSP + 0x210],XMM1
/* 0e515f77 */  MOVDQA xmmword ptr [RSP + 0x200],XMM0
/* 0e515f80 */  MOVZX EAX,byte ptr [0x0f550a20]
/* 0e515f87 */  TEST AL,AL
/* 0e515f89 */  JZ 0x0e51f266
/* 0e515f8f */  MOV EAX,dword ptr [0x0f550a0c]
/* 0e515f95 */  MOV dword ptr [RSP],EAX
/* 0e515f98 */  LEA RDI,[0xf5463b0]
/* 0e515f9f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e515fa6 */  MOV ESI,0xd0
/* 0e515fab */  CALL qword ptr [RAX + 0x10]
/* 0e515fae */  MOV R15,RAX
/* 0e515fb1 */  TEST RAX,RAX
/* 0e515fb4 */  JZ 0x0e51e49d
/* 0e515fba */  LEA RCX,[RSP + 0x98]
/* 0e515fc2 */  PXOR XMM0,XMM0
/* 0e515fc6 */  MOVDQU xmmword ptr [R15 + 0x8],XMM0
/* 0e515fcc */  LEA RAX,[0xef439d0]
/* 0e515fd3 */  MOV qword ptr [R15],RAX
/* 0e515fd6 */  MOV RAX,R15
/* 0e515fd9 */  ADD RAX,0x18
/* 0e515fdd */  MOVAPS XMM1,xmmword ptr [RSP + 0x70]
/* 0e515fe2 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e515fe8 */  MOVUPS xmmword ptr [R15 + 0x18],XMM1
/* 0e515fed */  MOV RDX,qword ptr [RSP + 0x90]
/* 0e515ff5 */  MOV qword ptr [R15 + 0x38],RDX
/* 0e515ff9 */  MOVAPS XMM1,xmmword ptr [RSP + 0x80]
/* 0e516001 */  MOVUPS xmmword ptr [R15 + 0x28],XMM1
/* 0e516006 */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e51600f */  MOV qword ptr [RSP + 0x90],0x0
/* 0e51601b */  MOV RDX,qword ptr [RCX + 0x10]
/* 0e51601f */  MOV qword ptr [R15 + 0x50],RDX
/* 0e516023 */  MOVUPS XMM1,xmmword ptr [RCX]
/* 0e516026 */  MOVUPS xmmword ptr [R15 + 0x40],XMM1
/* 0e51602b */  MOVDQU xmmword ptr [RCX],XMM0
/* 0e51602f */  MOV qword ptr [RCX + 0x10],0x0
/* 0e516037 */  MOVAPS XMM1,xmmword ptr [RSP + 0xb0]
/* 0e51603f */  MOVUPS xmmword ptr [R15 + 0x58],XMM1
/* 0e516044 */  MOV RDX,qword ptr [RSP + 0xc0]
/* 0e51604c */  MOV qword ptr [R15 + 0x68],RDX
/* 0e516050 */  MOVDQA xmmword ptr [R14],XMM0
/* 0e516055 */  MOV qword ptr [R14 + 0x10],0x0
/* 0e51605d */  MOVUPS XMM1,xmmword ptr [RSP + 0xc8]
/* 0e516065 */  MOVUPS xmmword ptr [R15 + 0x70],XMM1
/* 0e51606a */  MOV RDX,qword ptr [RSP + 0xd8]
/* 0e516072 */  MOV qword ptr [R15 + 0x80],RDX
/* 0e516079 */  MOVDQU xmmword ptr [RSP + 0xc8],XMM0
/* 0e516082 */  MOV qword ptr [RSP + 0xd8],0x0
/* 0e51608e */  MOVSS XMM1,dword ptr [RSP + 0xe0]
/* 0e516097 */  MOVSS dword ptr [R15 + 0x88],XMM1
/* 0e5160a0 */  MOVUPS XMM1,xmmword ptr [RSP + 0xe8]
/* 0e5160a8 */  MOVUPS xmmword ptr [R15 + 0x90],XMM1
/* 0e5160b0 */  MOV RDX,qword ptr [RSP + 0xf8]
/* 0e5160b8 */  MOV qword ptr [R15 + 0xa0],RDX
/* 0e5160bf */  MOVDQU xmmword ptr [RCX + 0x50],XMM0
/* 0e5160c4 */  MOV qword ptr [RCX + 0x60],0x0
/* 0e5160cc */  MOV RCX,qword ptr [RSP + 0x110]
/* 0e5160d4 */  MOV qword ptr [R15 + 0xb8],RCX
/* 0e5160db */  MOVDQA XMM1,xmmword ptr [RSP + 0x100]
/* 0e5160e4 */  MOVDQU xmmword ptr [R15 + 0xa8],XMM1
/* 0e5160ed */  MOVDQA xmmword ptr [RSP + 0x100],XMM0
/* 0e5160f6 */  MOV qword ptr [RSP + 0x110],0x0
/* 0e516102 */  MOV RCX,qword ptr [RSP + 0x118]
/* 0e51610a */  MOV RDX,qword ptr [RSP + 0x11d]
/* 0e516112 */  MOV qword ptr [R15 + 0xc5],RDX
/* 0e516119 */  MOV qword ptr [R15 + 0xc0],RCX
/* 0e516120 */  MOV qword ptr [RSP + 0x8],RAX
/* 0e516125 */  MOV qword ptr [RSP + 0x10],R15
/* 0e51612a */  MOVDQA xmmword ptr [RSP + 0x240],XMM0
/* 0e516133 */  LEA RDI,[RSP + 0x200]
/* 0e51613b */  MOV RSI,RSP
/* 0e51613e */  CALL 0x048afd20
/* 0e516143 */  MOV R14,qword ptr [RSP + 0x10]
/* 0e516148 */  TEST R14,R14
/* 0e51614b */  JZ 0x0e516170
/* 0e51614d */  MOV RAX,-0x1
/* 0e516154 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e51615a */  TEST RAX,RAX
/* 0e51615d */  JNZ 0x0e516170
/* 0e51615f */  MOV RAX,qword ptr [R14]
/* 0e516162 */  MOV RDI,R14
/* 0e516165 */  CALL qword ptr [RAX + 0x10]
/* 0e516168 */  MOV RDI,R14
/* 0e51616b */  CALL 0x0412c2d0
/* 0e516170 */  MOV R14,qword ptr [RSP + 0x248]
/* 0e516178 */  TEST R14,R14
/* 0e51617b */  JZ 0x0e5161a0
/* 0e51617d */  MOV RAX,-0x1
/* 0e516184 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e51618a */  TEST RAX,RAX
/* 0e51618d */  JNZ 0x0e5161a0
/* 0e51618f */  MOV RAX,qword ptr [R14]
/* 0e516192 */  MOV RDI,R14
/* 0e516195 */  CALL qword ptr [RAX + 0x10]
/* 0e516198 */  MOV RDI,R14
/* 0e51619b */  CALL 0x0412c2d0
/* 0e5161a0 */  MOV RCX,qword ptr [RSP + 0x210]
/* 0e5161a8 */  MOV EAX,dword ptr [RSP + 0x218]
/* 0e5161af */  MOV EDX,dword ptr [RSP + 0x21c]
/* 0e5161b6 */  CMP EDX,0x2
/* 0e5161b9 */  JZ 0x0e5161f1
/* 0e5161bb */  CMP EDX,0x1
/* 0e5161be */  JZ 0x0e5161ca
/* 0e5161c0 */  TEST EDX,EDX
/* 0e5161c2 */  JNZ 0x0e51623e
/* 0e5161c4 */  OR byte ptr [RCX + 0x1a],0x9
/* 0e5161c8 */  JMP 0x0e51623e
/* 0e5161ca */  MOV RCX,qword ptr [RCX + 0x78]
; truncated
