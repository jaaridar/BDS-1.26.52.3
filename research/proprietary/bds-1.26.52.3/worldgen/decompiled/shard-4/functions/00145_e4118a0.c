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
  
  if ((DAT_0f755538 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755538), iVar36 != 0)) {
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
      iVar36 = func_0x04108328(&DAT_0f755558);
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
    if ((DAT_0f755538 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755538), iVar36 != 0)) {
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
    if ((DAT_0f755558 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755558), iVar36 != 0)) {
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
    if ((DAT_0f755538 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755538), iVar36 != 0)) {
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
    if ((DAT_0f755558 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755558), iVar36 != 0)) {
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
    if ((DAT_0f755538 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755538), iVar36 != 0)) {
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
    if ((DAT_0f755558 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755558), iVar36 != 0)) {
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
    if ((DAT_0f755538 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755538), iVar36 != 0)) {
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
    if ((DAT_0f755558 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755558), iVar36 != 0)) {
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
    if ((DAT_0f755538 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755538), iVar36 != 0)) {
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
    if ((DAT_0f755558 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755558), iVar36 != 0)) {
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
    if ((DAT_0f755538 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755538), iVar36 != 0)) {
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
  if ((DAT_0f7555f0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7555f0), iVar36 != 0)) {
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
    if ((DAT_0f755610 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755610), iVar36 != 0)) {
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
      func_0x0e539c40(auStack_558,&pcStack_3d8);
    }
    uVar34 = uStack_3a4;
    pcVar43 = pcStack_3d8;
    if ((DAT_0f7555f0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7555f0), iVar36 != 0)) {
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
    if ((DAT_0f755610 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755610), iVar36 != 0)) {
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
      func_0x0e539c40(auStack_558,&pcStack_418);
    }
    uVar34 = uStack_3e4;
    pcVar43 = pcStack_418;
    if ((DAT_0f7555f0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7555f0), iVar36 != 0)) {
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
  if ((DAT_0f7556a8 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7556a8), iVar36 != 0)) {
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
    if ((DAT_0f7556c8 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7556c8), iVar36 != 0)) {
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
    if ((DAT_0f7556a8 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7556a8), iVar36 != 0)) {
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
    if ((DAT_0f7556c8 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7556c8), iVar36 != 0)) {
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
    if ((DAT_0f7556a8 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7556a8), iVar36 != 0)) {
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
  if ((DAT_0f755760 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755760), iVar36 != 0)) {
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
    if ((DAT_0f755760 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755760), iVar36 != 0)) {
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
      if ((DAT_0f550ad8 == '\0') && (iVar37 = func_0x04108328(&DAT_0f550ad8), iVar37 != 0)) {
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
    if ((DAT_0f755780 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755780), iVar36 != 0)) {
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
    if ((DAT_0f755760 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755760), iVar36 != 0)) {
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
    if ((DAT_0f755780 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755780), iVar36 != 0)) {
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
    if ((DAT_0f755760 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755760), iVar36 != 0)) {
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
    if ((DAT_0f755780 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755780), iVar36 != 0)) {
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
    if ((DAT_0f755760 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755760), iVar36 != 0)) {
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
  if ((DAT_0f755818 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755818), iVar36 != 0)) {
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
    if ((DAT_0f755818 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755818), iVar36 != 0)) {
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
      if ((DAT_0f550ad8 == '\0') && (iVar37 = func_0x04108328(&DAT_0f550ad8), iVar37 != 0)) {
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
    func_0x048afb10(auStack_4a8,8);
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
    if ((DAT_0f755838 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755838), iVar36 != 0)) {
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
    if ((DAT_0f550a20 == '\0') && (iVar36 = func_0x04108328(&DAT_0f550a20), iVar36 != 0)) {
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
  if ((DAT_0f7558d0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7558d0), iVar36 != 0)) {
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
    if ((DAT_0f7558d0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7558d0), iVar36 != 0)) {
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
      if ((DAT_0f550ad8 == '\0') && (iVar37 = func_0x04108328(&DAT_0f550ad8), iVar37 != 0)) {
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
    func_0x048afb10(auStack_4a8,8);
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
    if ((DAT_0f7558f0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7558f0), iVar36 != 0)) {
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
    if ((DAT_0f7558f0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7558f0), iVar36 != 0)) {
      func_0x0e543f50();
      func_0x0410844d(&DAT_0f7558f0);
    }
    pcVar43 = pcStack_418;
    iStack_3f0 = 1;
    uStack_3ec = 0xeb0cbd62;
    if ((DAT_0f7558d0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7558d0), iVar36 != 0)) {
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
    func_0x0ed621a0(auStack_4e8,uStack_3ec);
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
    func_0x048afb10(&lStack_490,8);
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
  if ((DAT_0f755988 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755988), iVar36 != 0)) {
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
    if ((DAT_0f755988 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755988), iVar36 != 0)) {
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
      if ((DAT_0f550ad8 == '\0') && (iVar37 = func_0x04108328(&DAT_0f550ad8), iVar37 != 0)) {
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
    func_0x048afb10(auStack_4a8,8);
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
    if ((DAT_0f7559a8 == '\0') && (iVar36 = func_0x04108328(&DAT_0f7559a8), iVar36 != 0)) {
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
    puStack_520 = &UNK_05daea90;
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
      if ((DAT_0f755988 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755988), iVar36 != 0)) {
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
      lVar51 = func_0x048b1040(pcVar43 + 0x18,puVar38,uVar34,1);
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
      if ((DAT_0f755988 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755988), iVar36 != 0)) {
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
  if ((DAT_0f755a40 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755a40), iVar36 != 0)) {
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
    if ((DAT_0f755a40 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755a40), iVar36 != 0)) {
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
      if ((DAT_0f550ad8 == '\0') && (iVar37 = func_0x04108328(&DAT_0f550ad8), iVar37 != 0)) {
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
    func_0x048afb10(auStack_4a8,8);
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
    if ((DAT_0f755a60 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755a60), iVar36 != 0)) {
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
    if ((DAT_0f755a60 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755a60), iVar36 != 0)) {
      func_0x0e547850();
      func_0x0410844d(&DAT_0f755a60);
    }
    pcVar43 = pcStack_418;
    iStack_3f0 = 1;
    uStack_3ec = 0x95f72993;
    if ((DAT_0f755a40 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755a40), iVar36 != 0)) {
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
    func_0x0ed621a0(auStack_4e8,uStack_3ec);
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
    func_0x048afb10(&lStack_490,8);
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
  if ((DAT_0f755af8 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755af8), iVar36 != 0)) {
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
    if ((DAT_0f755af8 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755af8), iVar36 != 0)) {
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
      if ((DAT_0f550ad8 == '\0') && (iVar37 = func_0x04108328(&DAT_0f550ad8), iVar37 != 0)) {
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
    func_0x048afb10(auStack_4a8,8);
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
    if ((DAT_0f755b18 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755b18), iVar36 != 0)) {
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
    if ((DAT_0f755b18 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755b18), iVar36 != 0)) {
      func_0x0e549170();
      func_0x0410844d(&DAT_0f755b18);
    }
    pcVar43 = pcStack_418;
    iStack_3f0 = 1;
    uStack_3ec = 0x5d24a408;
    if ((DAT_0f755af8 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755af8), iVar36 != 0)) {
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
    func_0x0ed621a0(auStack_4e8,uStack_3ec);
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
    func_0x048afb10(&lStack_490,8);
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
  if ((DAT_0f755bb0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755bb0), iVar36 != 0)) {
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
    if ((DAT_0f755bb0 == '\0') && (iVar36 = func_0x04108328(&DAT_0f755bb0), iVar36 != 0)) {
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
              (
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
