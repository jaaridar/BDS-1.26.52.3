/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbc2d930 (ELF vaddr 0xbb2d930)
 * Label: caller-of-callee
 * Body:  [[0bc2d930, 0bc2e7d1] [0bc2e7e0, 0bc31411]]
 * Ghidra: FUN_0bc2d930
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bc2d930(undefined8 *param_1,long *param_2,undefined8 ******param_3,undefined4 param_4,
                 ulong param_5,undefined8 param_6,undefined1 param_7,long param_8,undefined8 param_9
                 ,byte *param_10,undefined4 param_11,undefined8 param_12,long param_13,
                 byte *param_14,byte *param_15)

{
  long *plVar1;
  long *plVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  uint uVar5;
  undefined8 *****pppppuVar6;
  long *****ppppplVar7;
  bool bVar8;
  uint5 uVar9;
  undefined5 uVar10;
  undefined5 uVar11;
  uint uVar12;
  undefined5 uVar13;
  uint uVar14;
  undefined5 uVar15;
  undefined4 uVar16;
  byte bVar17;
  undefined7 uVar18;
  undefined3 uVar19;
  undefined7 uVar20;
  undefined3 uVar21;
  undefined7 uVar22;
  undefined3 uVar23;
  undefined7 uVar24;
  undefined3 uVar25;
  undefined7 uVar26;
  undefined3 uVar27;
  undefined7 uVar28;
  undefined3 uVar29;
  undefined1 uVar30;
  char cVar31;
  undefined1 uVar32;
  uint uVar33;
  int iVar34;
  undefined8 ******ppppppuVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined2 *puVar39;
  byte *pbVar40;
  undefined4 *puVar41;
  undefined8 uVar42;
  undefined8 *******pppppppuVar43;
  code *pcVar44;
  ulong uVar45;
  long *plVar46;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  undefined8 *******extraout_RDX_02;
  undefined8 *******extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  long *******ppppppplVar47;
  long lVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined8 *puVar51;
  undefined8 *******pppppppuVar52;
  undefined *puVar53;
  long *plVar54;
  undefined8 *******pppppppuStack_6d8;
  long lStack_6d0;
  long *plStack_6c8;
  code *pcStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  ulong uStack_68c;
  long *******ppppppplStack_680;
  long *plStack_678;
  undefined8 *puStack_670;
  long *plStack_668;
  undefined4 uStack_65c;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 *puStack_648;
  long *plStack_640;
  undefined4 uStack_634;
  undefined8 uStack_630;
  undefined8 uStack_628;
  ulong uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  byte bStack_5e8;
  byte bStack_5e7;
  undefined2 uStack_5e6;
  undefined4 uStack_5e4;
  undefined8 uStack_5e0;
  long *plStack_5d8;
  undefined8 uStack_5d0;
  byte abStack_5c8 [232];
  undefined8 uStack_4e0;
  byte abStack_4d8 [4];
  undefined8 uStack_4d4;
  undefined1 uStack_4cc;
  undefined8 uStack_4c8;
  undefined1 uStack_4c0;
  undefined8 uStack_4bc;
  undefined1 uStack_4b4;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined1 auStack_4a4 [5];
  undefined3 uStack_49f;
  undefined1 uStack_49c;
  undefined1 auStack_498 [8];
  undefined1 uStack_490;
  undefined8 uStack_48c;
  undefined1 uStack_484;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined8 uStack_474;
  undefined1 uStack_46c;
  undefined8 uStack_468;
  undefined1 uStack_460;
  undefined8 uStack_45c;
  undefined1 uStack_454;
  undefined8 uStack_450;
  undefined1 uStack_448;
  undefined8 uStack_444;
  undefined1 uStack_43c;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined8 uStack_42c;
  undefined1 uStack_424;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined8 uStack_414;
  undefined1 uStack_40c;
  undefined8 uStack_408;
  undefined1 uStack_400;
  undefined8 uStack_3fc;
  undefined1 uStack_3f4;
  
  pppppppuVar43 = (undefined8 *******)(param_5 & 0xffffffff);
  plStack_668 = param_2;
  uStack_65c = param_4;
  uStack_630 = param_6;
  func_0x0b3c48e0(param_1,param_2,param_13);
  *param_1 = &UNK_0f348210;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x74] = &UNK_0c51edc0;
  param_1[0x75] = &UNK_0c51eea0;
  *(undefined1 (*) [16])(param_1 + 0x76) = (undefined1  [16])0x0;
  param_1[0x78] = &UNK_0c51edf0;
  param_1[0x79] = &UNK_0c51eec0;
  *(undefined1 (*) [16])(param_1 + 0x7a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x7c) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  func_0x0bf77990(param_1 + 0x7f,param_1);
  *(undefined2 *)(param_1 + 0x83) = 0;
  param_1[0x82] = 0;
  *(undefined1 *)((long)param_1 + 0x41a) = 1;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x424) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x42c) = 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 0x86) = (undefined1  [16])0x0;
  param_1[0x88] = 0xffffffffffffffff;
  uVar30 = (**(code **)(*plStack_668 + 0x9f0))();
  func_0x0bf77bc0(param_1,param_13,uVar30);
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 2;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *param_1 = &UNK_0f30bb08;
  *(undefined1 (*) [16])(param_1 + 0x89) = (undefined1  [16])0x0;
  param_1[0x8b] = 0;
  ppppppuVar35 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,6);
  if (ppppppuVar35 == (undefined8 ******)0x0) goto LAB_0bc31273;
  do {
    param_1[0x89] = ppppppuVar35;
    param_1[0x8b] = (long)ppppppuVar35 + 6;
    *(undefined2 *)((long)ppppppuVar35 + 4) = 0;
    *(undefined4 *)ppppppuVar35 = 0;
    param_1[0x8a] = (long)ppppppuVar35 + 6;
    lVar36 = (**(code **)(*plStack_668 + 0x568))();
    puVar49 = (undefined *)(lVar36 + 0x50);
    puVar53 = puVar49;
    if ((*(char *)(lVar36 + 0x77) == '\0') &&
       (((puVar50 = (undefined *)(lVar36 + 0x70), *(char *)(lVar36 + 0x68) != '\0' ||
         (puVar53 = puVar50, (*(byte *)(lVar36 + 0x56) & 1) != 0)) &&
        (cVar31 = FUN_04fa7a10(puVar50,puVar49), puVar53 = puVar49, cVar31 != '\0')))) {
      puVar53 = puVar50;
    }
    if (((puVar53[6] | puVar53[0x18]) & 1) == 0) {
      puVar53 = &DAT_0f72b850;
    }
    uStack_658._0_4_ = _DAT_011987fc;
    if (((DAT_0f5a2e28 == '\0') && (puVar53[0x18] == '\0')) &&
       (((DAT_0f5a2e16 & 1) == 0 ||
        ((puVar53[7] != '\0' || (cVar31 = FUN_04fa7a10(puVar53,0xf5a2e10), cVar31 == '\0')))))) {
      uStack_658._0_4_ = _DAT_01198bc4;
    }
    *(undefined4 *)(param_1 + 0x8c) = (undefined4)uStack_658;
    lVar36 = (**(code **)(*plStack_668 + 0x568))();
    puVar49 = (undefined *)(lVar36 + 0x50);
    puVar53 = puVar49;
    if ((*(char *)(lVar36 + 0x77) == '\0') &&
       (((puVar50 = (undefined *)(lVar36 + 0x70), *(char *)(lVar36 + 0x68) != '\0' ||
         (puVar53 = puVar50, (*(byte *)(lVar36 + 0x56) & 1) != 0)) &&
        (cVar31 = FUN_04fa7a10(puVar50,puVar49), puVar53 = puVar49, cVar31 != '\0')))) {
      puVar53 = puVar50;
    }
    puVar49 = &DAT_0f72b850;
    if (((puVar53[6] | puVar53[0x18]) & 1) != 0) {
      puVar49 = puVar53;
    }
    uStack_658._0_4_ = _DAT_01198a50;
    uStack_658._0_4_ = _DAT_01198a50;
    if (((DAT_0f5a2e28 == '\0') && (puVar49[0x18] == '\0')) &&
       (((DAT_0f5a2e16 & 1) == 0 ||
        ((puVar49[7] != '\0' || (cVar31 = FUN_04fa7a10(puVar49,0xf5a2e10), cVar31 == '\0')))))) {
      uStack_658._0_4_ = _DAT_0119892c;
    }
    *(undefined4 *)((long)param_1 + 0x464) = (undefined4)uStack_658;
    param_1[0x8d] = 0xffffffff00000000;
    puVar37 = param_1 + 0x9b;
    *(undefined1 (*) [16])(param_1 + 0x8e) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x90) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x92) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x94) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x96) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
    param_1[0x9a] = 0;
    if ((*param_14 & 1) == 0) {
      param_1[0x9d] = *(undefined8 *)(param_14 + 0x10);
      uVar42 = *(undefined8 *)(param_14 + 8);
      *puVar37 = *(undefined8 *)param_14;
      param_1[0x9c] = uVar42;
    }
    else {
      func_0x0412e5e0(puVar37,*(undefined8 *)(param_14 + 0x10),*(undefined8 *)(param_14 + 8));
    }
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x504) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x50c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x4f4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x4fc) = 0xffffffff;
    param_1[0xa2] = 0;
    *(undefined8 *)((long)param_1 + 0x516) = 0;
    *(undefined1 *)((long)param_1 + 0x51e) = 1;
    *(undefined1 (*) [16])(param_1 + 0xa4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xa6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xa8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xaa) = (undefined1  [16])0x0;
    param_1[0xac] = 0;
    puStack_5f0 = puVar37;
    puVar37 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar37 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(puVar37 + 2) = (undefined1  [16])0x0;
    puVar37[1] = puVar37 + 1;
    puVar37[2] = puVar37 + 1;
    *puVar37 = &UNK_0f30cd58;
    puVar37[4] = &UNK_0f30cd88;
    param_1[0xad] = puVar37;
    param_1[0xae] = 0;
    param_1[0xaf] = 0x200000005;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)((long)param_1 + 0x584) = 0;
    *(undefined4 *)((long)param_1 + 0x58c) = 4;
    *(undefined1 *)(param_1 + 0xb2) = 0;
    *(undefined8 *)((long)param_1 + 0x594) = 0x400000000;
    *(undefined1 *)((long)param_1 + 0x59c) = 0;
    param_1[0xb4] = 0x400000000;
    *(undefined1 *)(param_1 + 0xb5) = 0;
    *(undefined8 *)((long)param_1 + 0x5ac) = 0;
    *(undefined1 (*) [16])(param_1 + 0xb7) = (undefined1  [16])0x0;
    param_1[0xb9] = 0;
    puStack_5f8 = param_1 + 0xba;
    if ((*param_15 & 1) == 0) {
      param_1[0xbc] = *(undefined8 *)(param_15 + 0x10);
      uVar42 = *(undefined8 *)(param_15 + 8);
      *puStack_5f8 = *(undefined8 *)param_15;
      param_1[0xbb] = uVar42;
    }
    else {
      func_0x0412e5e0(puStack_5f8,*(undefined8 *)(param_15 + 0x10),*(undefined8 *)(param_15 + 8));
    }
    *(undefined1 (*) [16])(param_1 + 0xbd) = (undefined1  [16])0x0;
    param_1[0xbf] = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xc0) = 3;
    *(undefined1 (*) [16])((long)param_1 + 0x604) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)param_1 + 0x60d) = (undefined1  [16])0x0;
    param_1[0xc4] = 0;
    *(undefined8 *)((long)param_1 + 0x625) = 0;
    *(undefined1 (*) [16])(param_1 + 0xc6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 200) = (undefined1  [16])0x0;
    param_1[0xca] = &UNK_0f534a50;
    *(undefined1 *)(param_1 + 0xcb) = 0;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(undefined1 (*) [16])(param_1 + 0xcd) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)param_1 + 0x674) = (undefined1  [16])0x0;
    param_1[0xd1] = 0;
    param_1[0xd2] = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0xd7) = 0;
    *(undefined1 *)((long)param_1 + 0x6bc) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)((long)param_1 + 0x6cc) = 0;
    *(undefined1 *)(param_1 + 0xda) = 0;
    *(undefined1 (*) [16])((long)param_1 + 0x6a6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xd3) = (undefined1  [16])0x0;
    func_0x0c44ed40(param_1 + 0xdb);
    param_1[0xdb] = &UNK_0f371da8;
    *(undefined4 *)(param_1 + 0xeb) = 0;
    *(undefined4 *)(param_1 + 0xed) = 0;
    *(undefined1 *)(param_1 + 0xee) = 0xff;
    *(undefined8 *)((long)param_1 + 0x774) = 0x1ffffffff;
    param_1[0xf0] = 0xffffffffffffffff;
    *(undefined1 (*) [16])(param_1 + 0xf1) = (undefined1  [16])0x0;
    param_1[0xf3] = 0;
    param_1[0xf4] = param_3;
    puVar37 = param_1 + 0xfb;
    *(undefined1 (*) [16])(param_1 + 0xf5) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xf7) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xf9) = (undefined1  [16])0x0;
    func_0x0c44ed40(puVar37);
    param_1[0xfb] = &UNK_0f36e858;
    *(undefined1 *)(param_1 + 0x10b) = 0;
    *(undefined1 *)((long)param_1 + 0x85c) = 0;
    puStack_648 = param_1 + 0x10c;
    bStack_5e8 = 0;
    bStack_5e7 = '\0';
    func_0x0b5a5140(puStack_648,0xfffffff7,&bStack_5e8,0);
    param_1[0x10c] = &UNK_0f2b9ca0;
    *(undefined4 *)((long)param_1 + 0x99c) = 0x36;
    *(undefined1 (*) [16])(param_1 + 0x134) = (undefined1  [16])0x0;
    param_1[0x136] = 0;
    func_0x0b44ee30(param_1 + 0x134,0x36);
    *puStack_648 = &UNK_0f2a6f48;
    if ((bStack_5e8 & 1) != 0) {
      func_0x0412a280(plStack_5d8,
                      CONCAT44(uStack_5e4,CONCAT22(uStack_5e6,CONCAT11(bStack_5e7,bStack_5e8))) &
                      0xfffffffffffffffe);
    }
    param_1[0x137] = param_1;
    *(undefined1 (*) [16])(param_1 + 0x138) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x13a) = (undefined1  [16])0x0;
    *(undefined1 *)(param_1 + 0x13c) = 1;
    plStack_640 = param_1 + 0x13f;
    *(undefined1 (*) [16])(param_1 + 0x13d) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x13f) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x141) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x143) = (undefined1  [16])0x0;
    uVar42 = _DAT_01de623c;
    param_1[0x145] = _DAT_01de623c;
    uVar16 = _DAT_01de6244;
    *(undefined4 *)(param_1 + 0x146) = _DAT_01de6244;
    *(undefined8 *)((long)param_1 + 0xa34) = uVar42;
    *(undefined4 *)((long)param_1 + 0xa3c) = uVar16;
    param_1[0x148] = 3;
    *(undefined1 *)(param_1 + 0x149) = param_7;
    *(undefined2 *)((long)param_1 + 0xa49) = 1;
    *(undefined1 (*) [16])((long)param_1 + 0xa5b) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x14a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x155) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x153) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x151) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x14f) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x158) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)param_1 + 0xacc) = (undefined1  [16])0x0;
    *(undefined8 *)((long)param_1 + 0xadc) = 0x100000006;
    *(undefined4 *)((long)param_1 + 0xae4) = 0;
    param_1[0x15d] = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x167) = 0;
    *(undefined1 *)(param_1 + 0x168) = 0;
    *(undefined1 *)(param_1 + 0x16b) = 0;
    *(undefined1 *)(param_1 + 0x16c) = 0;
    *(undefined1 *)(param_1 + 0x16f) = 0;
    puStack_670 = param_1 + 0x175;
    *(undefined1 (*) [16])(param_1 + 0x15e) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x160) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x162) = (undefined1  [16])0x0;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined1 (*) [16])(param_1 + 0x172) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x170) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    puStack_600 = puVar37;
    if ((*param_10 & 1) == 0) {
      param_1[0x177] = *(undefined8 *)(param_10 + 0x10);
      uVar42 = *(undefined8 *)(param_10 + 8);
      *puStack_670 = *(undefined8 *)param_10;
      param_1[0x176] = uVar42;
    }
    else {
      func_0x0412e5e0(puStack_670,*(undefined8 *)(param_10 + 0x10),*(undefined8 *)(param_10 + 8));
    }
    *(undefined2 *)(param_1 + 0x178) = 0;
    *(char *)((long)param_1 + 0xbc2) = (char)pppppppuVar43;
    *(undefined2 *)((long)param_1 + 0xbc3) = 0;
    *(undefined1 *)((long)param_1 + 0xbc5) = 0;
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x0bbed720(*(undefined8 *)(param_13 + 8),0x2764dd80);
    plVar54 = plStack_668;
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if (((uVar45 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 != 0)) &&
       (uVar5 = *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4),
       (uVar33 & 0xfffc0000 ^ uVar5) < 0x3ffff)) {
      lVar36 = (ulong)((uVar5 & 0x7f) * 0x28) +
               *(long *)(*(long *)(lVar36 + 0x50) + (ulong)((uVar5 & 0x3ff80) >> 4));
    }
    else {
      bStack_5e8 = (byte)uVar33;
      bStack_5e7 = (byte)(uVar33 >> 8);
      uStack_5e6 = (undefined2)(uVar33 >> 0x10);
      func_0x0bbee6b0(lVar36,&bStack_5e8,0,&UNK_01c6ccbc);
      lVar36 = (ulong)(((uint)(extraout_RDX - 1U) & 0x7f) * 0x28) +
               *(long *)(*(long *)(lVar36 + 0x50) + (extraout_RDX - 1U >> 7) * 8);
    }
    param_1[0x179] = lVar36;
    puVar37 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
    if (puVar37 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1e0,0);
    }
    *(undefined1 (*) [16])(puVar37 + 1) = (undefined1  [16])0x0;
    *puVar37 = &UNK_0f30ce98;
    puVar37[4] = &UNK_0f1f51b8;
    puVar37[5] = plVar54;
    puVar37[6] = 0;
    memcpy(puVar37 + 7,uStack_630,0xb0);
    puVar37[0x1d] = 0;
    *(undefined1 *)(puVar37 + 0x1e) = param_7;
    puVar37[0x2a] = 0;
    *(undefined1 (*) [16])((long)puVar37 + 0xf4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar37 + 0x104) = 0;
    *(undefined1 (*) [16])(puVar37 + 0x22) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar37 + 0x24) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar37 + 0x2c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar37 + 0x2e) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar37 + 0x30) = (undefined1  [16])0x0;
    puVar37[0x32] = 0;
    *(undefined4 *)(puVar37 + 0x33) = 0x3f800000;
    puVar37[0x34] = 0;
    *(undefined2 *)(puVar37 + 0x35) = 0;
    *(undefined1 (*) [16])(puVar37 + 0x36) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar37 + 0x38) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar37 + 0x3a) = (undefined1  [16])0x0;
    param_1[0xf2] = puVar37 + 4;
    plVar46 = (long *)param_1[0xf3];
    param_1[0xf3] = puVar37;
    if (plVar46 != (long *)0x0) {
      LOCK();
      plVar1 = plVar46 + 1;
      lVar36 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar36 == 0) {
        (**(code **)(*plVar46 + 0x10))(plVar46);
        func_0x0412c2d0(plVar46);
      }
    }
    puVar37 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (puVar37 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x10,0);
    }
    puVar38 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1f0);
    if (puVar38 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1f0,0);
    }
    *(undefined1 (*) [16])(puVar38 + 1) = (undefined1  [16])0x0;
    *puVar38 = &UNK_0f309588;
    puVar51 = puVar38 + 3;
    func_0x0eee2dd0(puVar51,0,0x1d8);
    func_0x0bc19770(puVar51);
    *puVar37 = puVar51;
    puVar37[1] = puVar38;
    lVar36 = *plStack_640;
    *plStack_640 = (long)puVar37;
    if (lVar36 != 0) {
      plVar46 = *(long **)(lVar36 + 8);
      if (plVar46 != (long *)0x0) {
        LOCK();
        plVar1 = plVar46 + 1;
        lVar48 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar48 == 0) {
          (**(code **)(*plVar46 + 0x10))(plVar46);
          func_0x0412c2d0(plVar46);
        }
      }
      func_0x0412a280(lVar36,0x10);
      puVar51 = *(undefined8 **)*plStack_640;
    }
    *(undefined1 *)(puVar51 + 0x37) = 1;
    func_0x0bc2b6e0(&bStack_5e8);
    puVar37 = (undefined8 *)(**(code **)(*plVar54 + 0xaf0))(plVar54);
    abStack_4d8[0] = *(byte *)(puVar37 + 1);
    uStack_4e0 = *puVar37;
    uStack_4cc = *(undefined1 *)((long)puVar37 + 0x14);
    uStack_4d4 = *(undefined8 *)((long)puVar37 + 0xc);
    uStack_4c0 = *(undefined1 *)(puVar37 + 4);
    uStack_4c8 = puVar37[3];
    uStack_4b4 = *(undefined1 *)((long)puVar37 + 0x2c);
    uStack_4bc = *(undefined8 *)((long)puVar37 + 0x24);
    uStack_4a8 = *(undefined1 *)(puVar37 + 7);
    uStack_4b0 = puVar37[6];
    _auStack_4a4 = *(undefined8 *)((long)puVar37 + 0x3c);
    uStack_49c = *(undefined1 *)((long)puVar37 + 0x44);
    auStack_498 = (undefined1  [8])puVar37[9];
    uStack_490 = *(undefined1 *)(puVar37 + 10);
    uStack_484 = *(undefined1 *)((long)puVar37 + 0x5c);
    uStack_48c = *(undefined8 *)((long)puVar37 + 0x54);
    uStack_480 = puVar37[0xc];
    uStack_478 = *(undefined1 *)(puVar37 + 0xd);
    uStack_474 = *(undefined8 *)((long)puVar37 + 0x6c);
    uStack_46c = *(undefined1 *)((long)puVar37 + 0x74);
    uStack_460 = *(undefined1 *)(puVar37 + 0x10);
    uStack_468 = puVar37[0xf];
    uStack_454 = *(undefined1 *)((long)puVar37 + 0x8c);
    uStack_45c = *(undefined8 *)((long)puVar37 + 0x84);
    uStack_450 = puVar37[0x12];
    uStack_448 = *(undefined1 *)(puVar37 + 0x13);
    uStack_444 = *(undefined8 *)((long)puVar37 + 0x9c);
    uStack_43c = *(undefined1 *)((long)puVar37 + 0xa4);
    uStack_438 = puVar37[0x15];
    uStack_430 = *(undefined1 *)(puVar37 + 0x16);
    uStack_424 = *(undefined1 *)((long)puVar37 + 0xbc);
    uStack_42c = *(undefined8 *)((long)puVar37 + 0xb4);
    uStack_420 = puVar37[0x18];
    uStack_418 = *(undefined1 *)(puVar37 + 0x19);
    uStack_414 = *(undefined8 *)((long)puVar37 + 0xcc);
    uStack_40c = *(undefined1 *)((long)puVar37 + 0xd4);
    uStack_408 = puVar37[0x1b];
    uStack_400 = *(undefined1 *)(puVar37 + 0x1c);
    uStack_3fc = *(undefined8 *)((long)puVar37 + 0xe4);
    uStack_3f4 = *(undefined1 *)((long)puVar37 + 0xec);
    puVar39 = (undefined2 *)(**(code **)(*plVar54 + 0xaf8))(plVar54);
    plVar46 = plStack_5d8;
    bVar17 = bStack_5e7;
    bStack_5e8 = (byte)*puVar39;
    bStack_5e7 = (byte)((ushort)*puVar39 >> 8);
    uStack_5e0 = *(undefined8 *)(puVar39 + 4);
    plVar54 = *(long **)(puVar39 + 8);
    if (*(long *)(puVar39 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(puVar39 + 8) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    if (plStack_5d8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5d8 + 1;
      lVar36 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar36 == 0) {
        lVar36 = *plStack_5d8;
        plStack_5d8 = plVar54;
        (**(code **)(lVar36 + 0x10))(plVar46);
        func_0x0412c2d0(plVar46);
        plVar54 = plStack_5d8;
      }
    }
    plStack_5d8 = plVar54;
    if (bVar17 == '\x03') {
      lVar36 = 0;
      do {
        if ((abStack_4d8[lVar36] & 4) != 0) {
          if (abStack_4d8[lVar36 + -8] != 1) {
            abStack_5c8[lVar36] = abStack_4d8[lVar36];
            *(undefined8 *)((long)&uStack_5d0 + lVar36) = *(undefined8 *)(abStack_4d8 + lVar36 + -8)
            ;
          }
        }
        lVar36 = lVar36 + 0xc;
      } while (lVar36 != 0xf0);
    }
    uVar19 = uStack_4e0._5_3_;
    cVar31 = (char)uStack_4e0;
    uVar18 = uStack_4e0._1_7_;
    uVar21 = uStack_4d4._5_3_;
    uVar20 = uStack_4d4._1_7_;
    uVar14 = (uint)uStack_4d4;
    uVar23 = uStack_4c8._5_3_;
    uVar22 = uStack_4c8._1_7_;
    uVar12 = (uint)uStack_4c8;
    uVar25 = uStack_4bc._5_3_;
    uVar24 = uStack_4bc._1_7_;
    uVar5 = (uint)uStack_4bc;
    uVar27 = uStack_4b0._5_3_;
    uVar26 = uStack_4b0._1_7_;
    uVar33 = (uint)uStack_4b0;
    uVar28 = stack0xfffffffffffffb5d;
    if (bStack_5e7 == 2) {
      uVar29 = uStack_49f;
      if (cVar31 == '\x01') {
        uStack_4e0 = CONCAT71(uVar18,2);
        uStack_4e0._0_5_ = CONCAT14(1,(uint)uStack_4e0);
        uStack_4e0 = CONCAT35(uVar19,(undefined5)uStack_4e0);
        if ((char)uStack_4d4 == '\x01') goto LAB_0bc310ef;
LAB_0bc31038:
        uStack_4d4._0_5_ = CONCAT14(1,uVar14);
        uStack_4d4 = CONCAT35(uVar21,(undefined5)uStack_4d4);
        if ((char)uStack_4c8 != '\x01') goto LAB_0bc3110d;
LAB_0bc3104e:
        uStack_4c8 = CONCAT71(uVar22,2);
        uStack_4c8._0_5_ = CONCAT14(1,(uint)uStack_4c8);
        uStack_4c8 = CONCAT35(uVar23,(undefined5)uStack_4c8);
        if ((char)uStack_4bc == '\x01') goto LAB_0bc31123;
LAB_0bc3106c:
        uStack_4bc._0_5_ = CONCAT14(1,uVar5);
        uStack_4bc = CONCAT35(uVar25,(undefined5)uStack_4bc);
        if ((char)uStack_4b0 != '\x01') goto LAB_0bc31141;
LAB_0bc31082:
        uStack_4b0 = CONCAT71(uVar26,2);
        uStack_4b0._0_5_ = CONCAT14(1,(uint)uStack_4b0);
        uStack_4b0 = CONCAT35(uVar27,(undefined5)uStack_4b0);
        if (auStack_4a4[0] == '\x01') goto LAB_0bc31157;
LAB_0bc310a0:
      }
      else {
        uStack_4e0._0_5_ = CONCAT14(1,(uint)uStack_4e0);
        uStack_4e0 = CONCAT35(uVar19,(undefined5)uStack_4e0);
        if ((char)uStack_4d4 != '\x01') goto LAB_0bc31038;
LAB_0bc310ef:
        uStack_4d4 = CONCAT71(uVar20,2);
        uStack_4d4._0_5_ = CONCAT14(1,(uint)uStack_4d4);
        uStack_4d4 = CONCAT35(uVar21,(undefined5)uStack_4d4);
        if ((char)uStack_4c8 == '\x01') goto LAB_0bc3104e;
LAB_0bc3110d:
        uStack_4c8._0_5_ = CONCAT14(1,uVar12);
        uStack_4c8 = CONCAT35(uVar23,(undefined5)uStack_4c8);
        if ((char)uStack_4bc != '\x01') goto LAB_0bc3106c;
LAB_0bc31123:
        uStack_4bc = CONCAT71(uVar24,2);
        uStack_4bc._0_5_ = CONCAT14(1,(uint)uStack_4bc);
        uStack_4bc = CONCAT35(uVar25,(undefined5)uStack_4bc);
        if ((char)uStack_4b0 == '\x01') goto LAB_0bc31082;
LAB_0bc31141:
        uStack_4b0._0_5_ = CONCAT14(1,uVar33);
        uStack_4b0 = CONCAT35(uVar27,(undefined5)uStack_4b0);
        if (auStack_4a4[0] != '\x01') goto LAB_0bc310a0;
LAB_0bc31157:
        _auStack_4a4 = CONCAT71(uVar28,2);
      }
      _auStack_4a4 = CONCAT35(uVar29,CONCAT14(1,auStack_4a4._0_4_));
      if (auStack_498[0] == '\x01') {
        auStack_498[0] = 2;
      }
      auStack_498[4] = 1;
      uVar32 = 1;
      uVar30 = 1;
joined_r0x0bc310ce:
      if ((char)uStack_48c == '\x01') {
        uStack_48c = CONCAT71(uStack_48c._1_7_,2);
        uVar30 = uVar32;
      }
      uStack_48c._0_5_ = CONCAT14(uVar30,(undefined4)uStack_48c);
    }
    else {
      if (bStack_5e7 == 1) {
        if (cVar31 == '\x01') {
          uStack_4e0 = CONCAT71(uVar18,2);
        }
        uVar15 = CONCAT14(1,(uint)uStack_4e0);
        if ((char)uStack_4d4 == '\x01') {
          uStack_4d4 = CONCAT71(uVar20,2);
          uVar14 = (uint)uStack_4d4;
        }
        uVar13 = CONCAT14(1,uVar14);
        if ((char)uStack_4c8 == '\x01') {
          uStack_4c8 = CONCAT71(uVar22,2);
          uVar12 = (uint)uStack_4c8;
        }
        uVar11 = CONCAT14(1,uVar12);
        if ((char)uStack_4bc == '\x01') {
          uStack_4bc = CONCAT71(uVar24,2);
          uVar5 = (uint)uStack_4bc;
        }
        uVar10 = CONCAT14(1,uVar5);
        if ((char)uStack_4b0 == '\x01') {
          uStack_4b0 = CONCAT71(uVar26,2);
          uVar33 = (uint)uStack_4b0;
        }
        uVar9 = CONCAT14(1,uVar33);
        if (auStack_4a4[0] == '\x01') {
          _auStack_4a4 = CONCAT71(stack0xfffffffffffffb5d,2);
        }
        auStack_4a4 = (undefined1  [5])CONCAT14(1,auStack_4a4._0_4_);
joined_r0x0bc2e9ef:
        uStack_4e0 = CONCAT35(uVar19,uVar15);
        uStack_4d4 = CONCAT35(uVar21,uVar13);
        uStack_4c8 = CONCAT35(uVar23,uVar11);
        uStack_4bc = CONCAT35(uVar25,uVar10);
        uStack_4b0 = CONCAT35(uVar27,uVar9);
        if (auStack_498[0] == '\x01') {
          auStack_498[0] = 2;
        }
        auStack_498[4] = 0;
        uVar32 = 0;
        uVar30 = 0;
        goto joined_r0x0bc310ce;
      }
      if (bStack_5e7 == 0) {
        if (cVar31 == '\x01') {
          uStack_4e0 = CONCAT71(uVar18,2);
        }
        uVar15 = ZEXT45((uint)uStack_4e0);
        if ((char)uStack_4d4 == '\x01') {
          uStack_4d4 = CONCAT71(uVar20,2);
          uVar14 = (uint)uStack_4d4;
        }
        uVar13 = ZEXT45(uVar14);
        if ((char)uStack_4c8 == '\x01') {
          uStack_4c8 = CONCAT71(uVar22,2);
          uVar12 = (uint)uStack_4c8;
        }
        uVar11 = ZEXT45(uVar12);
        if ((char)uStack_4bc == '\x01') {
          uStack_4bc = CONCAT71(uVar24,2);
          uVar5 = (uint)uStack_4bc;
        }
        uVar10 = ZEXT45(uVar5);
        if ((char)uStack_4b0 == '\x01') {
          uStack_4b0 = CONCAT71(uVar26,2);
          uVar33 = (uint)uStack_4b0;
        }
        uVar9 = (uint5)uVar33;
        if (auStack_4a4[0] == '\x01') {
          _auStack_4a4 = CONCAT71(stack0xfffffffffffffb5d,2);
        }
        auStack_4a4 = (undefined1  [5])CONCAT14(0,auStack_4a4._0_4_);
        goto joined_r0x0bc2e9ef;
      }
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x06e29820(*(undefined8 *)(param_13 + 8),0x68b75d48);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if (((uVar45 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 != 0)) &&
       (uVar5 = *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4),
       (uVar33 & 0xfffc0000 ^ uVar5) < 0x3ffff)) {
      uVar45 = (ulong)(uVar5 & 0x3ffff);
    }
    else {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x0492f360(lVar36,&pppppppuStack_6d8,0,0);
      uVar45 = extraout_RDX_00 - 1;
      pbVar40 = (byte *)func_0x06e2a870(lVar36,uVar45);
      *pbVar40 = bStack_5e8;
      pbVar40[1] = bStack_5e7;
      *(undefined8 *)(pbVar40 + 8) = uStack_5e0;
      *(long **)(pbVar40 + 0x10) = plStack_5d8;
      if (plStack_5d8 != (long *)0x0) {
        LOCK();
        plStack_5d8[1] = plStack_5d8[1] + 1;
        UNLOCK();
      }
      func_0x0bc2b9a0(pbVar40 + 0x18,&uStack_5d0);
    }
    uStack_658 = (ulong)((uint)uVar45 & 0x7f) * 0x5b8 +
                 *(long *)(*(long *)(lVar36 + 0x50) + (uVar45 >> 7) * 8);
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x06daa080(*(undefined8 *)(param_13 + 8),0x6de78dc5);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if (((uVar45 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 != 0)) &&
       (uVar5 = *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4),
       (uVar33 & 0xfffc0000 ^ uVar5) < 0x3ffff)) {
      plVar54 = (long *)((ulong)((uVar5 & 0x7f) * 0x18) +
                        *(long *)(*(long *)(lVar36 + 0x50) + (ulong)((uVar5 & 0x3ff80) >> 4)));
      pppppppuVar43 = _DAT_0f5a6548;
    }
    else {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x06daaf20(lVar36,&pppppppuStack_6d8,0);
      plVar54 = (long *)((ulong)(((uint)(extraout_RDX_01 - 1U) & 0x7f) * 0x18) +
                        *(long *)(*(long *)(lVar36 + 0x50) + (extraout_RDX_01 - 1U >> 7) * 8));
      pppppppuVar43 = _DAT_0f5a6548;
    }
    _DAT_0f5a6548 = pppppppuVar43;
    if (pppppppuVar43 != (undefined8 *******)0x0) {
      param_3 = (undefined8 ******)0xffffffff;
      pppppppuVar52 = &ppppppplStack_680;
      do {
        pppppppuStack_6d8 = (undefined8 *******)((long)pppppppuVar43 + 0x14);
        lStack_6d0 = uStack_658;
        plStack_6c8 = plVar54;
        if ((ulong)*(uint *)(pppppppuVar43 + 4) == 0xffffffff) {
          FUN_04931450();
          goto LAB_0bc313e2;
        }
        ppppppplStack_680 = (long *******)&pppppppuStack_6d8;
        (**(code **)(&UNK_0f0c2508 + (ulong)*(uint *)(pppppppuVar43 + 4) * 8))
                  (pppppppuVar52,(long)pppppppuVar43 + 0x1c);
        pppppppuVar43 = (undefined8 *******)*pppppppuVar43;
      } while (pppppppuVar43 != (undefined8 *******)0x0);
    }
    pppppppuVar52 = *(undefined8 ********)(param_13 + 8);
    param_3 = (undefined8 ******)(ulong)*(uint *)(param_13 + 0x10);
    uStack_634 = 0xc099c998;
    pppppppuVar43 = pppppppuVar52 + 7;
    ppppppuVar35 = pppppppuVar52[7] +
                   ((int)((ulong)((long)pppppppuVar52[8] - (long)pppppppuVar52[7]) >> 3) - 1U &
                   0xc099c998);
    do {
      pppppuVar6 = *ppppppuVar35;
      if (pppppuVar6 == (undefined8 *****)0xffffffffffffffff) goto LAB_0bc2ece1;
      ppppppuVar35 = pppppppuVar52[10] + (long)pppppuVar6 * 4;
    } while (*(int *)(pppppppuVar52[10] + (long)pppppuVar6 * 4 + 1) != -0x3f663668);
    if (ppppppuVar35 == pppppppuVar52[0xb]) {
LAB_0bc2ece1:
      plVar54 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar54 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar54[1] = 0;
      plVar54[2] = 0;
      *plVar54 = (long)&UNK_0f30cee8;
      if (DAT_0f6cee50 == '\0') {
LAB_0bc313e2:
        iVar34 = func_0x04108328(&DAT_0f6cee50);
        if (iVar34 != 0) {
          func_0x0bc70260();
          func_0x0410844d(&DAT_0f6cee50);
        }
      }
      ppppppplStack_680 = (long *******)(plVar54 + 3);
      plVar54[8] = 0;
      plVar54[9] = 0;
      plVar54[6] = 0;
      plVar54[7] = 0;
      plVar54[4] = 0;
      plVar54[5] = 0;
      plVar54[10] = (long)&DAT_0f6cee38;
      *(undefined1 *)(plVar54 + 0xb) = 1;
      plVar54[0xc] = 0x3ffff;
      plVar54[3] = (long)&UNK_0f30cf38;
      plVar54[0xd] = 0;
      plVar54[0xe] = 0;
      plVar54[0xf] = 0;
      plStack_678 = plVar54;
      func_0x049303a0(pppppppuVar43,&uStack_634,&ppppppplStack_680);
      plStack_6c8 = (long *)&UNK_049308c0;
      pcStack_6c0 = (code *)0x0;
      uStack_6b8 = CONCAT35(uStack_6b8._5_3_,0x3f987f04e);
      pppppppuStack_6d8 = pppppppuVar52;
      (*(code *)(*ppppppplStack_680)[5])(ppppppplStack_680,&pppppppuStack_6d8);
      if (pcStack_6c0 != (code *)0x0) {
        (*pcStack_6c0)(&pppppppuStack_6d8);
      }
      plVar54 = plStack_678;
      ppppppplVar47 = ppppppplStack_680;
      if (plStack_678 != (long *)0x0) {
        LOCK();
        plVar46 = plStack_678 + 1;
        lVar36 = *plVar46;
        *plVar46 = *plVar46 + -1;
        UNLOCK();
        if (lVar36 == 0) {
          (**(code **)(*plStack_678 + 0x10))(plStack_678);
          func_0x0412c2d0(plVar54);
        }
      }
    }
    else {
      ppppppplVar47 = (long *******)ppppppuVar35[2];
    }
    uVar33 = (uint)param_3;
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)((long)ppppppplVar47[2] - (long)ppppppplVar47[1] >> 3) <= uVar45) ||
        (ppppplVar7 = ppppppplVar47[1][uVar45], ppppplVar7 == (long *****)0x0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)((long)ppppplVar7 + (ulong)(uVar33 & 0x7ff) * 4)))
       ) {
      func_0x0bc70940(ppppppplVar47,param_3,0);
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x07355e30(*(undefined8 *)(param_13 + 8),0x2b518eb1);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      ppppppplStack_680 = (long *******)CONCAT44(ppppppplStack_680._4_4_,0xbecccccd);
      func_0x0bc70c30(lVar36,&pppppppuStack_6d8,0,&ppppppplStack_680);
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x06defca0(*(undefined8 *)(param_13 + 8),&UNK_02c74480);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x06df0af0(lVar36,&pppppppuStack_6d8,0);
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x0732e170(*(undefined8 *)(param_13 + 8),0x832b4523);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x0732efc0(lVar36,&pppppppuStack_6d8,0);
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x05aedf40(*(undefined8 *)(param_13 + 8),0xf95d258f);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x0492f360(lVar36,&pppppppuStack_6d8,0,0);
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x06d99240(*(undefined8 *)(param_13 + 8),&UNK_018b1887);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x06d9a250(lVar36,&pppppppuStack_6d8,0);
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x0733f640(*(undefined8 *)(param_13 + 8),0x5c92321d);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x073404d0(lVar36,&pppppppuStack_6d8,0);
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x07329280(*(undefined8 *)(param_13 + 8),0xb8b9c219);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x0492f360(lVar36,&pppppppuStack_6d8,0,0);
      puVar41 = (undefined4 *)func_0x07329b10(lVar36,(long)extraout_RDX_02 + -1);
      *puVar41 = 0x3c;
      pppppppuVar43 = extraout_RDX_02;
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x06e4f9d0(*(undefined8 *)(param_13 + 8),&UNK_0b845379);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      uStack_658 = param_8;
      uStack_650 = param_9;
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x0492f360(lVar36,&pppppppuStack_6d8,0,0);
      param_3 = (undefined8 ******)((long)extraout_RDX_03 + -1);
      lVar36 = func_0x06e50740(lVar36,param_3);
      memcpy(lVar36,uStack_630,0xb0);
      *(undefined1 *)(lVar36 + 0xb0) = param_7;
      *(long *)(lVar36 + 0xb8) = uStack_658;
      *(undefined8 *)(lVar36 + 0xc0) = uStack_650;
      *(undefined4 *)(lVar36 + 200) = param_11;
      func_0x072239e0(lVar36 + 0xd0,param_12);
      pppppppuVar43 = extraout_RDX_03;
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x0b45e530(*(undefined8 *)(param_13 + 8),0x94211021);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if (((uVar45 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 != 0)) &&
       (uVar5 = *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4),
       (uVar33 & 0xfffc0000 ^ uVar5) < 0x3ffff)) {
      lVar36 = (ulong)(uVar5 & 0x7f) * 0x1c +
               *(long *)(*(long *)(lVar36 + 0x50) + (ulong)((uVar5 & 0x3ff80) >> 4));
    }
    else {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x0b45f3d0(lVar36,&pppppppuStack_6d8,0);
      lVar36 = (ulong)((uint)(extraout_RDX_04 - 1U) & 0x7f) * 0x1c +
               *(long *)(*(long *)(lVar36 + 0x50) + (extraout_RDX_04 - 1U >> 7) * 8);
    }
    *(undefined4 *)(lVar36 + 0xc) = 10;
    uVar33 = *(uint *)(param_13 + 0x10);
    lVar36 = func_0x075138c0(*(undefined8 *)(param_13 + 8),0x62f39711);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x07514960(lVar36,&pppppppuStack_6d8,0);
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    plVar54 = (long *)func_0x0738e2a0(*(undefined8 *)(param_13 + 8),0x7a0369aa);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if (((uVar45 < (ulong)(plVar54[2] - plVar54[1] >> 3)) &&
        (lVar36 = *(long *)(plVar54[1] + uVar45 * 8), lVar36 != 0)) &&
       (uVar5 = *(uint *)(lVar36 + (ulong)(uVar33 & 0x7ff) * 4),
       (uVar33 & 0xfffc0000 ^ uVar5) < 0x3ffff)) {
      (**(code **)(*plVar54 + 0x10))(plVar54,plVar54 + 4,(uVar5 & 0x3ffff) + 1);
    }
    uVar33 = *(uint *)(param_13 + 0x10);
    ppppppuVar35 = (undefined8 ******)(ulong)uVar33;
    lVar36 = func_0x0731f4b0(*(undefined8 *)(param_13 + 8),0x88d3eddf);
    uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
        (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
       (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
      pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
      func_0x07320300(lVar36,&pppppppuStack_6d8,0);
    }
    lVar36 = *(long *)(param_13 + 8);
    uVar33 = *(uint *)(param_13 + 0x10);
    plVar54 = (long *)(*(long *)(lVar36 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(lVar36 + 0x40) - *(long *)(lVar36 + 0x38)) >>
                                   3) - 1U & 0x88d3eddf) * 8);
    do {
      if (*plVar54 == -1) goto LAB_0bc2f5ea;
      lVar48 = *plVar54 * 0x20;
      plVar54 = (long *)(*(long *)(lVar36 + 0x50) + lVar48);
    } while (*(int *)(*(long *)(lVar36 + 0x50) + 8 + lVar48) != -0x772c1221);
    if ((plVar54 != *(long **)(lVar36 + 0x58)) && (lVar36 = plVar54[2], lVar36 != 0)) {
      uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
      if (((uVar45 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
          ((lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 != 0 &&
           (uVar5 = *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4),
           (uVar33 & 0xfffc0000 ^ uVar5) < 0x3ffff)))) &&
         (lVar36 = *(long *)(*(long *)(lVar36 + 0x50) + (ulong)(uVar5 >> 4 & 0x3ff8)), lVar36 != 0))
      {
        *(undefined4 *)(lVar36 + (ulong)(uVar5 & 0x7f) * 4) = uStack_65c;
      }
    }
LAB_0bc2f5ea:
    func_0x0bbb7cb0(param_13);
    lVar36 = param_1[2];
    uVar33 = *(uint *)(param_1 + 3);
    plVar54 = (long *)(*(long *)(lVar36 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(lVar36 + 0x40) - *(long *)(lVar36 + 0x38)) >>
                                   3) - 1U & 0x4f6ba419) * 8);
    do {
      if (*plVar54 == -1) {
        plVar46 = *(long **)(lVar36 + 0x58);
        plVar54 = plVar46;
        goto LAB_0bc2f648;
      }
      lVar48 = *plVar54 * 0x20;
      plVar54 = (long *)(*(long *)(lVar36 + 0x50) + lVar48);
    } while (*(int *)(*(long *)(lVar36 + 0x50) + 8 + lVar48) != 0x4f6ba419);
    plVar46 = *(long **)(lVar36 + 0x58);
LAB_0bc2f648:
    if ((plVar54 != plVar46) && (lVar36 = plVar54[2], lVar36 != 0)) {
      uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
      if ((uVar45 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
         (((lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 != 0 &&
           (uVar5 = *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4),
           (uVar33 & 0xfffc0000 ^ uVar5) < 0x3ffff)) &&
          (lVar36 = *(long *)(*(long *)(lVar36 + 0x50) + (ulong)(uVar5 >> 4 & 0x3ff8)), lVar36 != 0)
          ))) {
        *(undefined4 *)(lVar36 + (ulong)(uVar5 & 0x7f) * 4) = 0x13f;
        *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 1;
        uStack_618 = 0;
        uStack_610 = 0;
        uStack_628 = 0;
        uStack_620 = 0;
        uStack_608 = 0;
        if ((DAT_0f6d05f0 & 1) == 0) {
          uStack_610 = _DAT_0f6d0600;
          uStack_620 = CONCAT71(uRam000000000f6d05f1,DAT_0f6d05f0);
          uStack_618 = _DAT_0f6d05f8;
        }
        else {
          func_0x04885070(&uStack_620,_DAT_0f6d0600,_DAT_0f6d05f8);
        }
        uStack_628 = _DAT_0f6d05e8;
        if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
          func_0x0412a280(param_1[0x3e],param_1[0x3c] & 0xfffffffffffffffe);
        }
        param_1[0x3e] = uStack_610;
        param_1[0x3c] = uStack_620;
        param_1[0x3d] = uStack_618;
        uStack_620 = uStack_620 & 0xffffffffffff0000;
        param_1[0x3b] = uStack_628;
        param_1[0x3f] = 0;
        lVar36 = func_0x0b3cc3f0(param_1);
        uVar42 = func_0x0bba2530(lVar36,0xf6cda90);
        func_0x0bbe5cf0(uVar42,lVar36);
        uVar42 = func_0x0bba2530(lVar36,0xf6cdad0);
        func_0x0bbe5cf0(uVar42,lVar36);
        lVar48 = func_0x0bba2530(lVar36,0xf6cef58);
        func_0x0bbe5cf0(lVar48,lVar36);
        plVar54 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (plVar54 == (long *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        plVar46 = plVar54 + 1;
        plVar54[1] = 0;
        plVar54[2] = 0;
        *plVar54 = (long)&UNK_0f30d0f8;
        *(undefined4 *)(plVar54 + 4) = *(undefined4 *)(*(long *)(lVar48 + 8) + 4);
        plVar54[3] = (long)&UNK_0f301eb0;
        *(undefined8 *)((long)plVar54 + 0x24) = 0;
        *(undefined4 *)((long)plVar54 + 0x2c) = 0;
        plVar54[6] = (long)param_1;
        LOCK();
        plVar54[1] = plVar54[1] + 1;
        UNLOCK();
        *(long **)(lVar48 + 0x58) = plVar54 + 3;
        plVar1 = *(long **)(lVar48 + 0x60);
        *(long **)(lVar48 + 0x60) = plVar54;
        if (plVar1 == (long *)0x0) {
LAB_0bc2f8c8:
          LOCK();
          lVar48 = *plVar46;
          *plVar46 = *plVar46 + -1;
          UNLOCK();
        }
        else {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar48 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar48 != 0) goto LAB_0bc2f8c8;
          (**(code **)(*plVar1 + 0x10))(plVar1);
          func_0x0412c2d0(plVar1);
          LOCK();
          lVar48 = *plVar46;
          *plVar46 = *plVar46 + -1;
          UNLOCK();
        }
        if (lVar48 == 0) {
          (**(code **)(*plVar54 + 0x10))(plVar54);
          func_0x0412c2d0(plVar54);
        }
        pppppppuVar43 = (undefined8 *******)func_0x0bba2530(lVar36,0xf6cef28);
        if ((*(float *)((long)pppppppuVar43 + 0x6c) != _DAT_01198988) ||
           (NAN(*(float *)((long)pppppppuVar43 + 0x6c)) || NAN(_DAT_01198988))) {
          *(undefined4 *)((long)pppppppuVar43 + 0x6c) = 0x40a00000;
          *(undefined4 *)(pppppppuVar43 + 0xf) = 0x40a00000;
          pcVar44 = *(code **)(lVar36 + 0x48);
          plVar54 = (long *)(*(long *)(lVar36 + 0x50) + lVar36);
          if (((ulong)pcVar44 & 1) != 0) {
            pcVar44 = *(code **)(pcVar44 + *plVar54 + -1);
          }
          (*pcVar44)(plVar54,pppppppuVar43);
        }
        param_3 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (param_3 == (undefined8 ******)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        ppppppuVar3 = param_3 + 1;
        param_3[1] = (undefined8 *****)0x0;
        param_3[2] = (undefined8 *****)0x0;
        *param_3 = (undefined8 *****)&UNK_0f30d148;
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)((long)pppppppuVar43[1] + 4);
        param_3[3] = (undefined8 *****)&UNK_0f301e20;
        LOCK();
        param_3[1] = (undefined8 *****)((long)param_3[1] + 1);
        UNLOCK();
        pppppppuVar43[0xb] = param_3 + 3;
        ppppppuVar35 = pppppppuVar43[0xc];
        pppppppuVar43[0xc] = param_3;
        if (ppppppuVar35 == (undefined8 ******)0x0) {
LAB_0bc2f9bc:
          LOCK();
          pppppuVar6 = *ppppppuVar3;
          *ppppppuVar3 = (undefined8 *****)((long)*ppppppuVar3 + -1);
          UNLOCK();
        }
        else {
          LOCK();
          ppppppuVar4 = ppppppuVar35 + 1;
          pppppuVar6 = *ppppppuVar4;
          *ppppppuVar4 = (undefined8 *****)((long)*ppppppuVar4 + -1);
          UNLOCK();
          if (pppppuVar6 != (undefined8 *****)0x0) goto LAB_0bc2f9bc;
          (*(code *)(*ppppppuVar35)[2])(ppppppuVar35);
          func_0x0412c2d0(ppppppuVar35);
          LOCK();
          pppppuVar6 = *ppppppuVar3;
          *ppppppuVar3 = (undefined8 *****)((long)*ppppppuVar3 + -1);
          UNLOCK();
        }
        if (pppppuVar6 == (undefined8 *****)0x0) {
          (*(code *)(*param_3)[2])(param_3);
          func_0x0412c2d0(param_3);
        }
        uVar42 = func_0x0bba2410(lVar36,0xf6cef58);
        func_0x0bbe65f0(pppppppuVar43,uVar42);
        uVar42 = func_0x0bba2530(lVar36,0xf6ceec8);
        func_0x0bbe5cf0(uVar42,lVar36);
        lVar48 = func_0x0bba2530(lVar36,0xf6cee98);
        if ((*(float *)(lVar48 + 0x6c) != _DAT_01198bec) ||
           (NAN(*(float *)(lVar48 + 0x6c)) || NAN(_DAT_01198bec))) {
          *(undefined4 *)(lVar48 + 0x6c) = 0x46c1ae00;
          *(undefined4 *)(lVar48 + 0x78) = 0x46c1ae00;
          pcVar44 = *(code **)(lVar36 + 0x48);
          plVar54 = (long *)(*(long *)(lVar36 + 0x50) + lVar36);
          if (((ulong)pcVar44 & 1) != 0) {
            pcVar44 = *(code **)(pcVar44 + *plVar54 + -1);
          }
          (*pcVar44)(plVar54,lVar48);
        }
        lVar48 = func_0x0bba2530(lVar36,0xf6cec60);
        if ((*(float *)(lVar48 + 0x6c) != _DAT_011983f0) ||
           (NAN(*(float *)(lVar48 + 0x6c)) || NAN(_DAT_011983f0))) {
          *(undefined4 *)(lVar48 + 0x6c) = 0x3f800000;
          *(undefined4 *)(lVar48 + 0x78) = 0x3f800000;
          pcVar44 = *(code **)(lVar36 + 0x48);
          plVar54 = (long *)(lVar36 + *(long *)(lVar36 + 0x50));
          if (((ulong)pcVar44 & 1) != 0) {
            pcVar44 = *(code **)(pcVar44 + *plVar54 + -1);
          }
          (*pcVar44)(plVar54,lVar48);
        }
        plVar54 = (long *)param_1[0x24];
        if (plVar54 != (long *)0x0) {
          if (((*(byte *)((long)plVar54 + 0x33) & 4) == 0) &&
             ((((int)plVar54[1] - (int)*plVar54 & 0x7fff8U) < 0xd1 ||
              (*(long *)(*plVar54 + 0xd0) == 0)))) {
            func_0x0bf162f0(plVar54,0x1a);
            ppppppuVar35 = (undefined8 ******)
                           (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
            if (ppppppuVar35 == (undefined8 ******)0x0) {
              func_0x0eec74c0(0x10,0);
            }
            *ppppppuVar35 = (undefined8 *****)&UNK_0f0ee140;
            *(undefined1 *)(ppppppuVar35 + 1) = 0;
            *(undefined2 *)((long)ppppppuVar35 + 10) = 0x1a;
            *(undefined1 *)((long)ppppppuVar35 + 0xc) = 0;
            plVar46 = *(long **)(*plVar54 + 0xd0);
            *(undefined8 *******)(*plVar54 + 0xd0) = ppppppuVar35;
            if (plVar46 != (long *)0x0) {
              (**(code **)(*plVar46 + 8))();
            }
            *(byte *)((long)plVar54 + 0x1b) = *(byte *)((long)plVar54 + 0x1b) | 4;
            plVar54 = (long *)param_1[0x24];
            if (plVar54 == (long *)0x0) goto LAB_0bc3126e;
          }
          if (((*(byte *)((long)plVar54 + 0x33) & 8) == 0) &&
             ((((int)plVar54[1] - (int)*plVar54 & 0x7ffe0U) < 0xd9 ||
              (*(long *)(*plVar54 + 0xd8) == 0)))) {
            func_0x0bf162f0(plVar54,0x1b);
            ppppppuVar35 = (undefined8 ******)
                           (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
            if (ppppppuVar35 == (undefined8 ******)0x0) {
              func_0x0eec74c0(0x10,0);
            }
            *ppppppuVar35 = (undefined8 *****)&UNK_0f0a7040;
            *(undefined1 *)(ppppppuVar35 + 1) = 2;
            *(undefined2 *)((long)ppppppuVar35 + 10) = 0x1b;
            *(undefined4 *)((long)ppppppuVar35 + 0xc) = 0;
            plVar46 = *(long **)(*plVar54 + 0xd8);
            *(undefined8 *******)(*plVar54 + 0xd8) = ppppppuVar35;
            if (plVar46 != (long *)0x0) {
              (**(code **)(*plVar46 + 8))();
            }
            *(byte *)((long)plVar54 + 0x1b) = *(byte *)((long)plVar54 + 0x1b) | 8;
            plVar54 = (long *)param_1[0x24];
            if (plVar54 == (long *)0x0) goto LAB_0bc3126e;
          }
          if (((*(byte *)((long)plVar54 + 0x33) & 0x10) == 0) &&
             ((((int)plVar54[1] - (int)*plVar54 & 0x7fff8U) < 0xe1 ||
              (*(long *)(*plVar54 + 0xe0) == 0)))) {
            func_0x0bf162f0(plVar54,0x1c);
            ppppppuVar35 = (undefined8 ******)
                           (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if (ppppppuVar35 == (undefined8 ******)0x0) {
              func_0x0eec74c0(0x18,0);
            }
            *ppppppuVar35 = (undefined8 *****)&UNK_0f0ee248;
            *(undefined1 *)(ppppppuVar35 + 1) = 6;
            *(undefined2 *)((long)ppppppuVar35 + 10) = 0x1c;
            *(undefined8 *)((long)ppppppuVar35 + 0xc) = 0;
            *(undefined4 *)((long)ppppppuVar35 + 0x14) = 0;
            plVar46 = *(long **)(*plVar54 + 0xe0);
            *(undefined8 *******)(*plVar54 + 0xe0) = ppppppuVar35;
            if (plVar46 != (long *)0x0) {
              (**(code **)(*plVar46 + 8))();
            }
            *(byte *)((long)plVar54 + 0x1b) = *(byte *)((long)plVar54 + 0x1b) | 0x10;
            plVar54 = (long *)param_1[0x24];
            pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffffffff0000);
            if (plVar54 == (long *)0x0) goto LAB_0bc3126e;
          }
          else {
            pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffffffff0000);
          }
          func_0x06fd57e0(plVar54,100,&pppppppuStack_6d8);
          if (((ulong)pppppppuStack_6d8 & 1) != 0) {
            func_0x0412a280(plStack_6c8,(ulong)pppppppuStack_6d8 & 0xfffffffffffffffe);
          }
          pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffffffff0000);
          if (param_1[0x24] != 0) {
            func_0x06fd57e0(param_1[0x24],0x54,&pppppppuStack_6d8);
            if (((ulong)pppppppuStack_6d8 & 1) != 0) {
              func_0x0412a280(plStack_6c8,(ulong)pppppppuStack_6d8 & 0xfffffffffffffffe);
            }
            plVar54 = (long *)param_1[0x24];
            if (plVar54 != (long *)0x0) {
              if (((*(byte *)((long)plVar54 + 0x3b) & 1) == 0) &&
                 ((((int)plVar54[1] - (int)*plVar54 & 0x7fff8U) < 0x2c1 ||
                  (*(long *)(*plVar54 + 0x2c0) == 0)))) {
                func_0x0bf162f0(plVar54,0x58);
                ppppppuVar35 = (undefined8 ******)
                               (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                if (ppppppuVar35 == (undefined8 ******)0x0) {
                  func_0x0eec74c0(0x18,0);
                }
                *ppppppuVar35 = (undefined8 *****)&UNK_0f0b60a8;
                *(undefined1 *)(ppppppuVar35 + 1) = 7;
                *(undefined2 *)((long)ppppppuVar35 + 10) = 0x58;
                ppppppuVar35[2] = (undefined8 *****)0xffffffffffffffff;
                plVar46 = *(long **)(*plVar54 + 0x2c0);
                *(undefined8 *******)(*plVar54 + 0x2c0) = ppppppuVar35;
                if (plVar46 != (long *)0x0) {
                  (**(code **)(*plVar46 + 8))();
                }
                *(byte *)((long)plVar54 + 0x23) = *(byte *)((long)plVar54 + 0x23) | 1;
                plVar54 = (long *)param_1[0x24];
                if (plVar54 == (long *)0x0) goto LAB_0bc3126e;
              }
              if ((-1 < plVar54[7]) &&
                 ((((int)plVar54[1] - (int)*plVar54 & 0x7fc00U) == 0 ||
                  (*(long *)(*plVar54 + 0x3f8) == 0)))) {
                func_0x0bf162f0(plVar54,0x7f);
                ppppppuVar35 = (undefined8 ******)
                               (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                if (ppppppuVar35 == (undefined8 ******)0x0) {
                  func_0x0eec74c0(0x18,0);
                }
                *ppppppuVar35 = (undefined8 *****)&UNK_0f0ee248;
                *(undefined1 *)(ppppppuVar35 + 1) = 6;
                *(undefined2 *)((long)ppppppuVar35 + 10) = 0x7f;
                *(undefined8 *)((long)ppppppuVar35 + 0xc) = 0;
                *(undefined4 *)((long)ppppppuVar35 + 0x14) = 0;
                plVar46 = *(long **)(*plVar54 + 0x3f8);
                *(undefined8 *******)(*plVar54 + 0x3f8) = ppppppuVar35;
                if (plVar46 != (long *)0x0) {
                  (**(code **)(*plVar46 + 8))();
                }
                *(byte *)((long)plVar54 + 0x27) = *(byte *)((long)plVar54 + 0x27) | 0x80;
                plVar54 = (long *)param_1[0x24];
                if (plVar54 == (long *)0x0) goto LAB_0bc3126e;
              }
              if (((*(byte *)(plVar54 + 8) & 1) == 0) &&
                 ((((int)plVar54[1] - (int)*plVar54 & 0x7fff8U) < 0x401 ||
                  (*(long *)(*plVar54 + 0x400) == 0)))) {
                func_0x0bf162f0(plVar54,0x80);
                ppppppuVar35 = (undefined8 ******)
                               (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
                if (ppppppuVar35 == (undefined8 ******)0x0) {
                  func_0x0eec74c0(0x10,0);
                }
                *ppppppuVar35 = (undefined8 *****)&UNK_0f0a7040;
                *(undefined1 *)(ppppppuVar35 + 1) = 2;
                *(undefined2 *)((long)ppppppuVar35 + 10) = 0x80;
                *(undefined4 *)((long)ppppppuVar35 + 0xc) = 0;
                plVar46 = *(long **)(*plVar54 + 0x400);
                *(undefined8 *******)(*plVar54 + 0x400) = ppppppuVar35;
                if (plVar46 != (long *)0x0) {
                  (**(code **)(*plVar46 + 8))();
                }
                *(byte *)(plVar54 + 5) = *(byte *)(plVar54 + 5) | 1;
                plVar54 = (long *)param_1[0x24];
                if (plVar54 == (long *)0x0) goto LAB_0bc3126e;
              }
              if (((*(byte *)(plVar54 + 8) & 2) == 0) &&
                 ((((int)plVar54[1] - (int)*plVar54 & 0x7fff0U) < 0x409 ||
                  (*(long *)(*plVar54 + 0x408) == 0)))) {
                func_0x0bf162f0(plVar54,0x81);
                ppppppuVar35 = (undefined8 ******)
                               (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
                if (ppppppuVar35 == (undefined8 ******)0x0) {
                  func_0x0eec74c0(0x10,0);
                }
                *ppppppuVar35 = (undefined8 *****)&UNK_0f0ee140;
                *(undefined1 *)(ppppppuVar35 + 1) = 0;
                *(undefined2 *)((long)ppppppuVar35 + 10) = 0x81;
                *(undefined1 *)((long)ppppppuVar35 + 0xc) = 0;
                plVar46 = *(long **)(*plVar54 + 0x408);
                *(undefined8 *******)(*plVar54 + 0x408) = ppppppuVar35;
                if (plVar46 != (long *)0x0) {
                  (**(code **)(*plVar46 + 8))();
                }
                *(byte *)(plVar54 + 5) = *(byte *)(plVar54 + 5) | 2;
                plVar54 = (long *)param_1[0x24];
                if (plVar54 == (long *)0x0) goto LAB_0bc3126e;
              }
              if (((*(byte *)(plVar54 + 8) & 4) != 0) ||
                 ((0x410 < ((int)plVar54[1] - (int)*plVar54 & 0x7fff8U) &&
                  (*(long *)(*plVar54 + 0x410) != 0)))) break;
              func_0x0bf162f0(plVar54,0x82);
              ppppppuVar35 = (undefined8 ******)
                             (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
              if (ppppppuVar35 == (undefined8 ******)0x0) {
                func_0x0eec74c0(0x18,0);
              }
              *ppppppuVar35 = (undefined8 *****)&UNK_0f0ee2a0;
              *(undefined1 *)(ppppppuVar35 + 1) = 8;
              *(undefined2 *)((long)ppppppuVar35 + 10) = 0x82;
              *(undefined8 *)((long)ppppppuVar35 + 0xc) = 0;
              *(undefined4 *)((long)ppppppuVar35 + 0x14) = 0;
              plVar46 = *(long **)(*plVar54 + 0x410);
              *(undefined8 *******)(*plVar54 + 0x410) = ppppppuVar35;
              if (plVar46 != (long *)0x0) {
                (**(code **)(*plVar46 + 8))();
              }
              *(byte *)(plVar54 + 5) = *(byte *)(plVar54 + 5) | 4;
              plVar54 = (long *)param_1[0x24];
              if (plVar54 != (long *)0x0) break;
            }
          }
        }
      }
    }
LAB_0bc3126e:
    func_0x04890760();
LAB_0bc31273:
    func_0x0eec74c0(6,0);
  } while( true );
  if (((*(byte *)(plVar54 + 8) & 0x20) == 0) &&
     ((((int)plVar54[1] - (int)*plVar54 & 0x7fff0U) < 0x429 || (*(long *)(*plVar54 + 0x428) == 0))))
  {
    func_0x0bf162f0(plVar54,0x85);
    puVar37 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar37 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar37 = &UNK_0f0ee2a0;
    *(undefined1 *)(puVar37 + 1) = 8;
    *(undefined2 *)((long)puVar37 + 10) = 0x85;
    *(undefined8 *)((long)puVar37 + 0xc) = 0;
    *(undefined4 *)((long)puVar37 + 0x14) = 0;
    plVar46 = *(long **)(*plVar54 + 0x428);
    *(undefined8 **)(*plVar54 + 0x428) = puVar37;
    if (plVar46 != (long *)0x0) {
      (**(code **)(*plVar46 + 8))();
    }
    *(byte *)(plVar54 + 5) = *(byte *)(plVar54 + 5) | 0x20;
  }
  func_0x0bbfd600(param_1 + 1);
  func_0x0b3dcf70(param_1);
  func_0x0bc31d30(param_1,uStack_65c);
  puVar37 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x160);
  if (puVar37 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x160,0);
  }
  func_0x0b5a5060(puVar37,0xffffffff);
  *puVar37 = &UNK_0f38bb70;
  puVar37[0x28] = 0;
  puVar37[0x29] = 0;
  puVar37[0x2a] = 0;
  puVar37[0x2b] = param_1;
  func_0x0b44ee30(puVar37 + 0x28,0x24);
  *puVar37 = &UNK_0f30b940;
  puVar38 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe8);
  if (puVar38 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xe8,0);
  }
  *puVar38 = &UNK_0f30c348;
  puVar38[1] = &UNK_0f30c378;
  *(undefined4 *)(puVar38 + 2) = 0;
  func_0x0c44ed40(puVar38 + 3);
  puVar38[3] = &UNK_0f371da8;
  *(undefined4 *)(puVar38 + 0x13) = 0;
  *(undefined4 *)(puVar38 + 0x15) = 0;
  *(undefined1 *)(puVar38 + 0x16) = 0;
  puVar38[0x17] = puVar37;
  puVar38[0x18] = 0;
  puVar38[0x19] = 0;
  puVar38[0x1a] = 0;
  puVar38[0x1b] = 0;
  puVar38[0x1c] = 0;
  plVar54 = (long *)param_1[0xae];
  param_1[0xae] = puVar38;
  if (plVar54 != (long *)0x0) {
    (**(code **)(*plVar54 + 0x10))();
  }
  puVar37 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b8);
  if (puVar37 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1b8,0);
  }
  puVar37[1] = 0;
  puVar37[2] = 0;
  *puVar37 = &UNK_0f30cfb8;
  puVar38 = puVar37 + 3;
  func_0x0bb87e70(puVar38,0xffffffff,param_1);
  puVar37[3] = &UNK_0f3010c0;
  puVar37[0x29] = 0;
  puVar37[0x2a] = 0;
  puVar37[0x2b] = 0;
  puVar37[0x2d] = puVar37 + 0x2d;
  puVar37[0x2e] = puVar37 + 0x2d;
  *(undefined4 *)(puVar37 + 0x2f) = 0;
  puVar37[0x30] = 0;
  puVar37[0x31] = 0;
  puVar37[0x32] = 0;
  puVar37[0x33] = 0;
  puVar37[0x34] = 0;
  puVar37[0x35] = 0;
  puVar37[0x2c] = &UNK_0f3017b0;
  puVar37[0x36] = &UNK_0f3017e0;
  func_0x0bb89420(puVar38,0x1f);
  param_1[0xf5] = puVar38;
  plVar54 = (long *)param_1[0xf6];
  param_1[0xf6] = puVar37;
  if (plVar54 == (long *)0x0) {
    lVar36 = param_1[0xae];
  }
  else {
    LOCK();
    plVar46 = plVar54 + 1;
    lVar36 = *plVar46;
    *plVar46 = *plVar46 + -1;
    UNLOCK();
    if (lVar36 == 0) {
      (**(code **)(*plVar54 + 0x10))(plVar54);
      func_0x0412c2d0(plVar54);
    }
    puVar37 = (undefined8 *)param_1[0xf6];
    lVar36 = param_1[0xae];
    puVar38 = (undefined8 *)param_1[0xf5];
    if (puVar37 == (undefined8 *)0x0) {
      bVar8 = true;
      puVar37 = (undefined8 *)0x0;
      goto LAB_0bc3044d;
    }
  }
  LOCK();
  puVar37[2] = puVar37[2] + 1;
  UNLOCK();
  LOCK();
  puVar37[2] = puVar37[2] + 1;
  UNLOCK();
  bVar8 = false;
LAB_0bc3044d:
  *(undefined8 **)(lVar36 + 0xd8) = puVar38;
  lVar48 = *(long *)(lVar36 + 0xe0);
  *(undefined8 **)(lVar36 + 0xe0) = puVar37;
  if (lVar48 != 0) {
    func_0x0412c2d0();
  }
  (**(code **)(**(long **)(lVar36 + 0xb8) + 0x10))();
  (**(code **)(**(long **)(lVar36 + 0xb8) + 0x20))(*(long **)(lVar36 + 0xb8),lVar36 + 8);
  if (!bVar8) {
    func_0x0412c2d0(puVar37);
  }
  puVar37 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x168);
  if (puVar37 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x168,0);
  }
  func_0x0b5a5060(puVar37,0);
  *puVar37 = &UNK_0f38bb70;
  puVar37[0x28] = 0;
  puVar37[0x29] = 0;
  puVar37[0x2a] = 0;
  puVar37[0x2b] = 0;
  func_0x0b44ee30(puVar37 + 0x28,0x1b);
  *puVar37 = &UNK_0f38b9b8;
  puVar37[0x2c] = 0;
  plVar54 = (long *)param_1[0xf7];
  param_1[0xf7] = puVar37;
  if (plVar54 != (long *)0x0) {
    (**(code **)(*plVar54 + 8))();
  }
  uVar42 = func_0x0417cc60();
  uVar33 = *(uint *)(param_13 + 0x10);
  lVar36 = func_0x06d95680(*(undefined8 *)(param_13 + 8),0x9557c713);
  uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
  if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
      (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
     (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
    pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
    func_0x0492f360(lVar36,&pppppppuStack_6d8,0,0);
    puVar41 = (undefined4 *)func_0x06d97040(lVar36,extraout_RDX_05 + -1);
    *puVar41 = 0;
    *(undefined8 *)(puVar41 + 2) = uVar42;
  }
  uVar33 = *(uint *)(param_13 + 0x10);
  lVar36 = func_0x0732a240(*(undefined8 *)(param_13 + 8),0x8918332c);
  uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
  if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
      (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
     (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
    pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
    func_0x0732b0a0(lVar36,&pppppppuStack_6d8,0);
  }
  uVar33 = *(uint *)(param_13 + 0x10);
  plVar54 = (long *)func_0x06db0dd0(*(undefined8 *)(param_13 + 8),0xc29078a0);
  uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
  if (((uVar45 < (ulong)(plVar54[2] - plVar54[1] >> 3)) &&
      (lVar36 = *(long *)(plVar54[1] + uVar45 * 8), lVar36 != 0)) &&
     (uVar5 = *(uint *)(lVar36 + (ulong)(uVar33 & 0x7ff) * 4),
     (uVar33 & 0xfffc0000 ^ uVar5) < 0x3ffff)) {
    (**(code **)(*plVar54 + 0x10))(plVar54,plVar54 + 4,(uVar5 & 0x3ffff) + 1);
  }
  puVar37 = param_1 + 0x6a;
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0x2739f381184de4ae,&UNK_01488ddb,&pppppppuStack_6d8);
  plVar54 = plStack_668;
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0x61917791e3c297e0,&UNK_0136ccc3,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0xd921ed03129a7263,&UNK_01385e3b,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0xe156ad45fcfc1181,&UNK_012670f6,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0x7564ae90ad7d52b5,&UNK_0129a203,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0x141772560b072b57,&UNK_013a0cea,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0x9192dd80e8c955a9,&UNK_014d927b,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0x61c960f76ff2b174,&UNK_01217750,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0xeaf759cd8733093,&UNK_011fd7eb,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0xaea4d08ebbcc1cf5,&UNK_01421f6c,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  lStack_6d0 = 0x3f800000;
  func_0x0b5f8420(puVar37,0xfabf04aeb4b31e2f,&UNK_01408203,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0x82a81d1eda91ed33,&UNK_014d929e,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  lStack_6d0 = 0;
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  func_0x0b5f8420(puVar37,0xdac4ddd135d2dd68,&UNK_011ad5ca,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  lStack_6d0 = 0x3f800000;
  func_0x0b5f8420(puVar37,0x4b40a13c446d9482,&UNK_011c8b64,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  lStack_6d0 = 0x3f800000;
  func_0x0b5f8420(puVar37,0x9244e8efa4e628c5,&UNK_01217711,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  pppppppuStack_6d8 = (undefined8 *******)((ulong)pppppppuStack_6d8 & 0xffffffff00000000);
  plStack_6c8 = (long *)0x0;
  pcStack_6c0 = (code *)0x0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  lStack_6d0 = 0x3f800000;
  func_0x0b5f8420(puVar37,0x48da76e83cd34d53,&UNK_014d924c,&pppppppuStack_6d8);
  if (uStack_68c >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_68c >> 0x20) * 8))(&ppppppplStack_680,&plStack_6c8);
  }
  uVar30 = (**(code **)(*plVar54 + 0xc38))(plVar54);
  *(undefined1 *)((long)param_1 + 0xa4a) = uVar30;
  uVar33 = *(uint *)(param_13 + 0x10);
  lVar36 = func_0x06e107d0(*(undefined8 *)(param_13 + 8),0x256b41f6);
  uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
  if (((uVar45 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
      (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 != 0)) &&
     (uVar5 = *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4),
     (uVar33 & 0xfffc0000 ^ uVar5) < 0x3ffff)) {
    lVar36 = (ulong)((uVar5 & 0x7f) << 6) +
             *(long *)(*(long *)(lVar36 + 0x50) + (ulong)((uVar5 & 0x3ff80) >> 4));
  }
  else {
    pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
    func_0x06e117a0(lVar36,&pppppppuStack_6d8,0);
    lVar36 = (ulong)(((uint)(extraout_RDX_06 - 1U) & 0x7f) << 6) +
             *(long *)(*(long *)(lVar36 + 0x50) + (extraout_RDX_06 - 1U >> 7) * 8);
  }
  *(undefined8 *)(lVar36 + 8) = _DAT_014e2eb0;
  *(undefined4 *)(lVar36 + 0x10) = 0x3c23d70a;
  func_0x0bbfc070(param_13,param_1);
  pppppppuStack_6d8 = (undefined8 *******)0x0;
  lStack_6d0 = CONCAT35((int3)((ulong)lStack_6d0 >> 0x28),0x100000000);
  ppppppplStack_680 = (long *******)_DAT_014e7960;
  plStack_678 = (long *)CONCAT35(plStack_678._5_3_,0x13e4ccccd);
  func_0x0bbfd380(param_13,0xbdcccccd00000000,0x100000000,0xbdcccccd00000000,0x100000000);
  uVar33 = *(uint *)(param_13 + 0x10);
  lVar36 = func_0x06d99240(*(undefined8 *)(param_13 + 8),&UNK_018b1887);
  uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
  if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
      (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
     (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
    pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
    func_0x06d9a250(lVar36,&pppppppuStack_6d8,0);
  }
  uVar33 = *(uint *)(param_13 + 0x10);
  lVar36 = func_0x0bbee760(*(undefined8 *)(param_13 + 8),0xd4328adb);
  uVar45 = (ulong)((uVar33 & 0x3ffff) >> 0xb);
  if ((((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar45) ||
      (lVar48 = *(long *)(*(long *)(lVar36 + 8) + uVar45 * 8), lVar48 == 0)) ||
     (0x3fffe < (uVar33 & 0xfffc0000 ^ *(uint *)(lVar48 + (ulong)(uVar33 & 0x7ff) * 4)))) {
    pppppppuStack_6d8 = (undefined8 *******)CONCAT44(pppppppuStack_6d8._4_4_,uVar33);
    func_0x0bbef5b0(lVar36,&pppppppuStack_6d8,0);
  }
  plVar54 = plStack_5d8;
  if (plStack_5d8 != (long *)0x0) {
    LOCK();
    plVar46 = plStack_5d8 + 1;
    lVar36 = *plVar46;
    *plVar46 = *plVar46 + -1;
    UNLOCK();
    if (lVar36 == 0) {
      (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
      func_0x0412c2d0(plVar54);
    }
  }
  return;
}


