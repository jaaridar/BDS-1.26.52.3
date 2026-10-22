/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8d96520 (ELF vaddr 0x8c96520)
 * Label: caller-of-callee
 * Body:  [[08d96520, 08d97e36] [08d97e40, 08d97ea6] [08d97eb0, 08d97f21] [08d97f30, 08d97f4e] [08d97f50, 08d97fd1] [08d97fe0, 08d97ff2] [08d98000, 08d98121] [08d98130, 08d981f2] [08d98200, 08d9834a] [08d98350, 08d983c5] [08d983d0, 08d9844c] [08d98450, 08d98469] [08d98470, 08d984e4] [08d984f0, 08d9851c] [08d98520, 08d986a1] [08d986b0, 08d9873a] [08d98740, 08d98b61] [08d98b70, 08d98b9e] [08d98ba0, 08d98c76] [08d98c80, 08d98ce7] [08d98cf0, 08d98da5] [08d98db0, 08d98e41] [08d98e50, 08d993c8] [08d993d0, 08d9955c] [08d99560, 08d9962e] [08d99630, 08d99652] [08d99660, 08d996f1] [08d99700, 08d99819] [08d99820, 08d99889] [08d99890, 08d99924] [08d99930, 08d9994d] [08d99950, 08d99982] [08d99990, 08d99ad0] [08d99ae0, 08d99b46] [08d99b50, 08d99b7a] [08d99b80, 08d99c5c] [08d99c60, 08d99d00] [08d99d10, 08d99d25] [08d99d30, 08d99d93] [08d99da0, 08d99dc2] [08d99dd0, 08d99de2] [08d99df0, 08d9a056] [08d9a060, 08d9a0a7] [08d9a0b0, 08d9a0d2] [08d9a0e0, 08d9afe7] [08d9aff0, 08d9b21c] [08d9b220, 08d9c061] [08d9c070, 08d9c29d] [08d9c2a0, 08d9d039]]
 * Ghidra: FUN_08d96520
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08d96520(long param_1,ushort *param_2,undefined8 param_3,long *param_4)

{
  long *******ppppppplVar1;
  long *plVar2;
  byte bVar3;
  int *piVar4;
  long *****ppppplVar5;
  undefined4 *puVar6;
  long *******ppppppplVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [4];
  undefined1 auVar13 [8];
  char cVar14;
  int iVar15;
  long ******pppppplVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long *******ppppppplVar24;
  long ******pppppplVar25;
  long lVar26;
  undefined2 *puVar27;
  undefined4 *puVar28;
  ulong uVar29;
  long ******pppppplVar30;
  long ******pppppplVar31;
  long *plVar32;
  long lVar33;
  undefined4 *puVar34;
  long *plVar35;
  ulong uVar36;
  long ******pppppplVar37;
  long ******pppppplVar38;
  long *******ppppppplVar39;
  long *****ppppplVar40;
  uint uVar41;
  ulong uVar42;
  long *******ppppppplVar43;
  long *******unaff_R14;
  long *******ppppppplVar44;
  int *piVar45;
  long ****pppplVar46;
  bool bVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auStack_4f8 [4];
  undefined2 uStack_4f4;
  undefined2 uStack_4f2;
  byte bStack_4f0;
  undefined2 uStack_4ef;
  undefined1 uStack_4ed;
  undefined4 uStack_4ec;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  long *plStack_4d8;
  undefined1 auStack_4d0 [4];
  undefined4 uStack_4cc;
  uint uStack_4c8;
  uint uStack_4c4;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  long *******ppppppplStack_4b0;
  undefined1 auStack_4a8 [8];
  long *******ppppppplStack_4a0;
  long *******ppppppplStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined8 uStack_440;
  long *plStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_398 [4];
  undefined4 uStack_394;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 *puStack_370;
  undefined1 auStack_368 [8];
  long *******ppppppplStack_360;
  long *******ppppppplStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  long *plStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_1e8;
  ushort *puStack_1e0;
  long *******ppppppplStack_1d8;
  long ******pppppplStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  long *******ppppppplStack_1b8;
  undefined8 uStack_1b0;
  long ******pppppplStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  long ******pppppplStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined2 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *******ppppppplStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_1e8 = param_1;
  puStack_1e0 = param_2;
  plStack_178 = param_4;
  uStack_170 = param_3;
  if ((DAT_0f5f6608 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f6608), iVar15 != 0)) {
    _DAT_0f5f65f0 = (long *)0x0;
    _DAT_0f5f65f8 = 0;
    _DAT_0f5f65e0 = 0;
    _DAT_0f5f65e8 = 0;
    _DAT_0f5f6600 = 0x3f800000;
    func_0x0eee2f40(&UNK_08d95f80,&DAT_0f5f65e0,0xf53dab8);
    func_0x0410844d(&DAT_0f5f6608);
  }
  if (_DAT_0f5f65f8 != 0) goto LAB_08d97dfd;
  unaff_R14 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (unaff_R14 == (long *******)0x0) goto LAB_08d9c669;
LAB_08d96590:
  *unaff_R14 = (long ******)&UNK_0f15adc0;
  unaff_R14[1] = (long ******)0x0;
  unaff_R14[2] = (long ******)0x0;
  unaff_R14[3] = (long ******)0x0;
  pppppplVar16 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (pppppplVar16 == (long ******)0x0) {
    func_0x0eec74c0(1,0);
  }
  unaff_R14[1] = pppppplVar16;
  unaff_R14[3] = (long ******)((long)pppppplVar16 + 1);
  *(undefined1 *)pppppplVar16 = 0x10;
  unaff_R14[2] = (long ******)((long)pppppplVar16 + 1);
  unaff_R14[8] = (long ******)0x0;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = &UNK_013b4514;
  puVar17[3] = 0x17;
  puVar17[4] = unaff_R14;
  _auStack_398 = (long *******)puVar17;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &UNK_0f15ae28;
  puVar18[3] = unaff_R14;
  puVar17[5] = puVar18;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_013b4514,0x17);
  puVar17[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar17);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar17[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar17,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15ae78;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puVar17[1] = puVar21;
  puVar17[3] = puVar21 + 1;
  *puVar21 = 0x21;
  puVar17[2] = puVar21 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &UNK_01568f38;
  puVar18[3] = 0xc;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15aed0;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_01568f38,0xc);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15af20;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puVar17[1] = puVar21;
  puVar17[3] = puVar21 + 1;
  *puVar21 = 0x10;
  puVar17[2] = puVar21 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &UNK_012defc2;
  puVar18[3] = 0x19;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15af78;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_012defc2,0x19);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15afc8;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puVar17[1] = puVar21;
  puVar17[3] = puVar21 + 1;
  *puVar21 = 0x10;
  puVar17[2] = puVar21 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &UNK_011bfeee;
  puVar18[3] = 0x17;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b020;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_011bfeee,0x17);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15b070;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puVar17[1] = puVar21;
  puVar17[3] = puVar21 + 1;
  *puVar21 = 0x10;
  puVar17[2] = puVar21 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  uVar19 = uRam000000000f5446b8;
  puVar18[2] = uRam000000000f5446b8;
  _auStack_398 = (long *******)puVar18;
  uVar23 = func_0x0eee2e90(uVar19);
  puVar18[3] = uVar23;
  puVar18[4] = puVar17;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b0c8;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,uVar19,uVar23);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  _auStack_398 = (long *******)&UNK_0f15b118;
  uStack_390 = (long *******)&UNK_08d9da70;
  uStack_378 = (long *)auStack_398;
  pppppplVar16 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (pppppplVar16 == (long ******)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *pppppplVar16 = (long *****)&UNK_0f15b1b8;
  pppppplVar16[1] = (long *****)0x0;
  pppppplVar16[2] = (long *****)0x0;
  pppppplVar16[3] = (long *****)0x0;
  pppppplVar16[8] = (long *****)(pppppplVar16 + 4);
  pppppplVar16[4] = (long *****)&UNK_0f15b118;
  pppppplVar16[5] = (long *****)&UNK_08d9da70;
  ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppppppplVar24 == (long *******)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  ppppppplStack_4a0 = (long *******)&DAT_0f5f65e0;
  ppppppplStack_498 = (long *******)0x0;
  *ppppppplVar24 = (long ******)0x0;
  ppppppplVar24[1] = (long ******)0x0;
  ppppppplVar24[2] = (long ******)&UNK_01568ea8;
  ppppppplVar24[3] = (long ******)0x13;
  ppppppplVar24[4] = pppppplVar16;
  auStack_4a8 = (undefined1  [8])ppppppplVar24;
  pppppplVar25 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (pppppplVar25 == (long ******)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  pppppplVar25[1] = (long *****)0x0;
  pppppplVar25[2] = (long *****)0x0;
  *pppppplVar25 = (long *****)&UNK_0f15b210;
  pppppplVar25[3] = (long *****)pppppplVar16;
  ppppppplVar24[5] = pppppplVar25;
  ppppppplStack_498 = (long *******)CONCAT71(ppppppplStack_498._1_7_,1);
  pppppplVar16 = (long ******)func_0x04883620(&uStack_148,&UNK_01568ea8,0x13);
  ppppppplVar24[1] = pppppplVar16;
  uVar20 = func_0x08dc6100(ppppppplVar24);
  if ((uVar20 & 1) == 0) {
    auStack_4a8 = (undefined1  [8])0x0;
    pppppplVar16 = ppppppplVar24[5];
    if (pppppplVar16 != (long ******)0x0) {
      LOCK();
      pppppplVar25 = pppppplVar16 + 1;
      ppppplVar40 = *pppppplVar25;
      *pppppplVar25 = (long *****)((long)*pppppplVar25 + -1);
      UNLOCK();
      if (ppppplVar40 == (long *****)0x0) {
        (*(code *)(*pppppplVar16)[2])(pppppplVar16);
        func_0x0412c2d0(pppppplVar16);
      }
    }
    func_0x0412a280(ppppppplVar24,0x30);
  }
  if (uStack_378 == (long *)auStack_398) {
    lVar26 = 0x20;
LAB_08d96eba:
    (**(code **)(*uStack_378 + lVar26))();
  }
  else {
    lVar26 = 0x28;
    if (uStack_378 != (long *)0x0) goto LAB_08d96eba;
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15b260;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puVar17[1] = puVar21;
  puVar17[3] = puVar21 + 1;
  *puVar21 = 0x12;
  puVar17[2] = puVar21 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &UNK_01568f90;
  puVar18[3] = 0x10;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b2b8;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_01568f90,0x10);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar27 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,2);
  if (puVar27 == (undefined2 *)0x0) {
    func_0x0eec74c0(2,0);
  }
  *puVar27 = 0x3204;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15b308;
  puVar17[1] = puVar27;
  puVar17[2] = puVar27 + 1;
  puVar17[3] = puVar27 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &UNK_01568fe0;
  puVar18[3] = 0xe;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b360;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_01568fe0,0xe);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15b3b0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puVar17[1] = puVar21;
  puVar17[3] = puVar21 + 1;
  *puVar21 = 0x21;
  puVar17[2] = puVar21 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &UNK_0120fbaf;
  puVar18[3] = 0x17;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b408;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_0120fbaf,0x17);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15b458;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puVar17[1] = puVar21;
  puVar17[3] = puVar21 + 1;
  *puVar21 = 0x10;
  puVar17[2] = puVar21 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  uVar20 = (ulong)(DAT_0f5f6610 >> 1);
  uVar19 = 0xf5f6611;
  if ((DAT_0f5f6610 & 1) != 0) {
    uVar20 = _DAT_0f5f6618;
    uVar19 = _DAT_0f5f6620;
  }
  puVar18[2] = uVar19;
  puVar18[3] = uVar20;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b4b0;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,uVar19,uVar20);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15b500;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puVar17[1] = puVar21;
  puVar17[3] = puVar21 + 1;
  *puVar21 = 0x10;
  puVar17[2] = puVar21 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  uVar20 = (ulong)(DAT_0f5f6628 >> 1);
  uVar19 = 0xf5f6629;
  if ((DAT_0f5f6628 & 1) != 0) {
    uVar20 = _DAT_0f5f6630;
    uVar19 = _DAT_0f5f6638;
  }
  puVar18[2] = uVar19;
  puVar18[3] = uVar20;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b558;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,uVar19,uVar20);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f15b5a8;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &UNK_01568ec0;
  puVar18[3] = 0x13;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b600;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_01568ec0,0x13);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f15b650;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &UNK_01568f78;
  puVar18[3] = 0x11;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b6a8;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_01568f78,0x11);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f15b6f8;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &DAT_01279da7;
  puVar18[3] = 0x24;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b750;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&DAT_01279da7,0x24);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f15b7a0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &DAT_012458f2;
  puVar18[3] = 0x1b;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b7f8;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&DAT_012458f2,0x1b);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  *puVar21 = 0x3e;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar17 = &UNK_0f15b848;
  puVar17[1] = puVar21;
  puVar17[2] = puVar21 + 1;
  puVar17[3] = puVar21 + 1;
  puVar17[8] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = &UNK_0141b0d4;
  puVar18[3] = 0x1c;
  puVar18[4] = puVar17;
  _auStack_398 = (long *******)puVar18;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f15b8a0;
  puVar22[3] = puVar17;
  puVar18[5] = puVar22;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  uVar19 = func_0x04883620(auStack_4a8,&UNK_0141b0d4,0x1c);
  puVar18[1] = uVar19;
  uVar20 = func_0x08dc6100(puVar18);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    plVar35 = (long *)puVar18[5];
    if (plVar35 != (long *)0x0) {
      LOCK();
      plVar32 = plVar35 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x0412c2d0(plVar35);
      }
    }
    func_0x0412a280(puVar18,0x30);
  }
  unaff_R14 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (unaff_R14 == (long *******)0x0) {
    func_0x0eec74c0(8,0);
  }
  *unaff_R14 = (long ******)&UNK_0f15b8f0;
  ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppppppplVar24 == (long *******)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_390 = (long *******)&DAT_0f5f65e0;
  uStack_388 = (undefined8 *)0x0;
  *ppppppplVar24 = (long ******)0x0;
  ppppppplVar24[1] = (long ******)0x0;
  ppppppplVar24[2] = (long ******)&DAT_014809cb;
  ppppppplVar24[3] = (long ******)0x1a;
  ppppppplVar24[4] = (long ******)unaff_R14;
  _auStack_398 = ppppppplVar24;
  pppppplVar16 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (pppppplVar16 == (long ******)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  pppppplVar16[1] = (long *****)0x0;
  pppppplVar16[2] = (long *****)0x0;
  *pppppplVar16 = (long *****)&UNK_0f15b948;
  pppppplVar16[3] = (long *****)unaff_R14;
  ppppppplVar24[5] = pppppplVar16;
  uStack_388 = (undefined8 *)CONCAT71(uStack_388._1_7_,1);
  pppppplVar16 = (long ******)func_0x04883620(auStack_4a8,&DAT_014809cb,0x1a);
  ppppppplVar24[1] = pppppplVar16;
  uVar20 = func_0x08dc6100(ppppppplVar24);
  if ((uVar20 & 1) == 0) {
    _auStack_398 = (long *******)0x0;
    unaff_R14 = (long *******)ppppppplVar24[5];
    if (unaff_R14 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = unaff_R14 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*unaff_R14)[2])(unaff_R14);
        func_0x0412c2d0(unaff_R14);
      }
    }
    func_0x0412a280(ppppppplVar24,0x30);
  }
LAB_08d97dfd:
  if (_DAT_0f5f65f0 != (long *)0x0) {
    lStack_38 = (long)puStack_1e0 + 9;
    lStack_48 = lStack_1e8 + 0x70;
    plVar35 = _DAT_0f5f65f0;
    do {
      (**(code **)(*(long *)plVar35[4] + 0x18))(&puStack_198);
      puStack_40 = puStack_190;
      puVar18 = puStack_198;
      plStack_1c0 = plVar35;
      puVar17 = puStack_198;
      if (puStack_198 != puStack_190) {
LAB_08d97ec5:
        (**(code **)(*(long *)plVar35[4] + 0x28))(&uStack_148);
        puStack_4b8 = puVar18;
        if ((char)uStack_118 != '\x01') {
          puVar34 = (undefined4 *)*puVar18;
          puVar6 = (undefined4 *)puVar18[1];
          if (puVar34 != puVar6) {
            plStack_4d8 = puVar18 + 3;
            lVar26 = 0;
            do {
              if (*(short *)(puVar34 + 2) == 0) {
                if ((*(byte *)(puVar34 + 4) & 1) == 0) {
                  if (*(byte *)(puVar34 + 4) >> 1 != 0) goto LAB_08d97f8a;
                }
                else if (*(long *)(puVar34 + 6) != 0) goto LAB_08d97f8a;
              }
              else {
LAB_08d97f8a:
                if (lVar26 == 0) {
                  ppppppplVar24 = (long *******)plVar35[3];
                  if ((long *******)0xfffffffffffffff7 < ppppppplVar24) {
                    func_0x04882e30();
                    goto LAB_08d9c5c2;
                  }
                  lVar26 = plVar35[2];
                  if (ppppppplVar24 < (long *******)0x17) {
                    _auStack_398 = (long *******)
                                   CONCAT71(stack0xfffffffffffffc69,(char)ppppppplVar24 * '\x02');
                    puVar21 = auStack_398 + 1;
                    if (ppppppplVar24 != (long *******)0x0) goto LAB_08d98096;
                  }
                  else {
                    uVar20 = ((ulong)ppppppplVar24 | 7) + 1;
                    if (((ulong)ppppppplVar24 | 7) == 0x17) {
                      uVar20 = 0x1a;
                    }
                    puVar21 = (undefined1 *)
                              (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
                    if (puVar21 == (undefined1 *)0x0) {
                      func_0x0eec74c0(uVar20,0);
                    }
                    _auStack_398 = (long *******)(uVar20 | 1);
                    uStack_390 = ppppppplVar24;
                    uStack_388 = (undefined8 *)puVar21;
LAB_08d98096:
                    func_0x0eee2ee0(puVar21,lVar26,ppppppplVar24);
                  }
                  puVar21[(long)ppppppplVar24] = 0;
                  lVar26 = func_0x08e93510(uStack_170,plStack_4d8,auStack_398);
                  if (((ulong)_auStack_398 & 1) != 0) {
                    func_0x0412a280(uStack_388,(ulong)_auStack_398 & 0xfffffffffffffffe);
                  }
                  puVar28 = *(undefined4 **)(lVar26 + 8);
                  plVar35 = plStack_1c0;
                  if (*(undefined4 **)(lVar26 + 0x10) <= puVar28) goto LAB_08d98100;
LAB_08d97f9d:
                  *puVar28 = *puVar34;
                  *(undefined2 *)(puVar28 + 3) = *(undefined2 *)(puVar34 + 3);
                  puVar28[2] = puVar34[2];
                  if ((*(byte *)(puVar34 + 4) & 1) == 0) {
                    *(undefined8 *)(puVar28 + 8) = *(undefined8 *)(puVar34 + 8);
                    uVar8 = puVar34[5];
                    uVar9 = puVar34[6];
                    uVar10 = puVar34[7];
                    puVar28[4] = puVar34[4];
                    puVar28[5] = uVar8;
                    puVar28[6] = uVar9;
                    puVar28[7] = uVar10;
                  }
                  else {
                    func_0x0412e5e0(puVar28 + 4,*(undefined8 *)(puVar34 + 8),
                                    *(undefined8 *)(puVar34 + 6));
                  }
                  puVar28[10] = puVar34[10];
                  puVar28 = puVar28 + 0xc;
                  *(undefined4 **)(lVar26 + 8) = puVar28;
                }
                else {
                  puVar28 = *(undefined4 **)(lVar26 + 8);
                  if (puVar28 < *(undefined4 **)(lVar26 + 0x10)) goto LAB_08d97f9d;
LAB_08d98100:
                  puVar28 = (undefined4 *)func_0x08dba070(lVar26,puVar34);
                }
                *(undefined4 **)(lVar26 + 8) = puVar28;
              }
              puVar34 = puVar34 + 0xc;
            } while (puVar34 != puVar6);
          }
LAB_08d9827a:
          pppppplVar16 = (long ******)plVar35[2];
          pppppplVar25 = (long ******)plVar35[3];
          plStack_4d8 = (long *)plVar35[5];
          uStack_58 = (long *******)plVar35[4];
          uStack_50 = (long ******)plVar35[5];
          if (plStack_4d8 != (long *)0x0) {
            LOCK();
            plStack_4d8[1] = plStack_4d8[1] + 1;
            UNLOCK();
          }
          plVar35 = (long *)*plStack_178;
          uVar29 = func_0x04883620(auStack_398,pppppplVar16,pppppplVar25);
          uVar20 = plVar35[1];
          if (uVar20 != 0) {
            uVar36 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
            uVar36 = (uVar36 >> 2 & 0x3333333333333333) + (uVar36 & 0x3333333333333333);
            uVar36 = ((uVar36 >> 4) + uVar36 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar36 >> 0x38 < 2) {
              uVar42 = uVar20 - 1 & uVar29;
              plVar35 = *(long **)(*plVar35 + uVar42 * 8);
            }
            else if (uVar29 < uVar20) {
              plVar35 = *(long **)(*plVar35 + uVar29 * 8);
              uVar42 = uVar29;
            }
            else if ((uVar29 | uVar20) >> 0x20 == 0) {
              uVar42 = (uVar29 & 0xffffffff) % (uVar20 & 0xffffffff);
              plVar35 = *(long **)(*plVar35 + uVar42 * 8);
            }
            else {
              plVar35 = *(long **)(*plVar35 + (uVar29 % uVar20) * 8);
              uVar42 = uVar29 % uVar20;
            }
            if ((plVar35 != (long *)0x0) && (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0)) {
              if ((byte)(uVar36 >> 0x38) < 2) {
                do {
                  if (plVar35[1] == uVar29) {
                    if ((long ******)plVar35[3] == pppppplVar25) {
                      iVar15 = func_0x0eee3000(plVar35[2],pppppplVar16,pppppplVar25);
                      if (iVar15 == 0) goto LAB_08d98a3d;
                    }
                  }
                  else if ((plVar35[1] & uVar20 - 1) != uVar42) break;
                  plVar35 = (long *)*plVar35;
                } while (plVar35 != (long *)0x0);
              }
              else {
                do {
                  uVar36 = plVar35[1];
                  if (uVar36 == uVar29) {
                    if ((long ******)plVar35[3] == pppppplVar25) {
                      iVar15 = func_0x0eee3000(plVar35[2],pppppplVar16,pppppplVar25);
                      if (iVar15 == 0) goto LAB_08d98a3d;
                    }
                  }
                  else {
                    if (uVar20 <= uVar36) {
                      if ((uVar36 | uVar20) >> 0x20 == 0) {
                        uVar36 = (uVar36 & 0xffffffff) % (uVar20 & 0xffffffff);
                      }
                      else {
                        uVar36 = uVar36 % uVar20;
                      }
                    }
                    if (uVar36 != uVar42) break;
                  }
                  plVar35 = (long *)*plVar35;
                } while (plVar35 != (long *)0x0);
              }
            }
          }
          piVar4 = (int *)puStack_4b8[1];
          for (piVar45 = (int *)*puStack_4b8; piVar45 != piVar4; piVar45 = piVar45 + 0xc) {
            iVar15 = *piVar45;
            if (iVar15 == 2) {
              if (((byte)puStack_1e0[4] & 1) == 0) {
                if ((byte)((byte)puStack_1e0[4] >> 1) == 0) goto LAB_08d985a0;
              }
              else if (*(long *)(puStack_1e0 + 8) == 0) goto LAB_08d985a0;
            }
            else {
              if (iVar15 != 1) {
                if (iVar15 == 0) {
                  cVar14 = func_0x0d822d70(puStack_1e0,piVar45 + 2);
                  if ((cVar14 == '\0') &&
                     ((*(char *)((long)piVar45 + 0x2a) != '\x01' ||
                      (*puStack_1e0 < *(ushort *)(piVar45 + 10))))) goto LAB_08d985a0;
                }
                goto LAB_08d98490;
              }
              bVar3 = (byte)puStack_1e0[4];
              if ((bVar3 & 1) == 0) {
                uVar20 = (ulong)(bVar3 >> 1);
                uVar29 = (ulong)*(byte *)(piVar45 + 4);
                if ((*(byte *)(piVar45 + 4) & 1) != 0) goto LAB_08d9854f;
LAB_08d9850e:
                if (uVar20 != uVar29 >> 1) goto LAB_08d98490;
              }
              else {
                uVar20 = *(ulong *)(puStack_1e0 + 8);
                uVar29 = (ulong)*(byte *)(piVar45 + 4);
                if ((*(byte *)(piVar45 + 4) & 1) == 0) goto LAB_08d9850e;
LAB_08d9854f:
                if (uVar20 != *(ulong *)(piVar45 + 6)) goto LAB_08d98490;
              }
              lVar26 = lStack_38;
              if ((bVar3 & 1) != 0) {
                lVar26 = *(long *)(puStack_1e0 + 0xc);
              }
              if ((uVar29 & 1) == 0) {
                iVar15 = func_0x0eee3000(lVar26,(long)piVar45 + 0x11);
              }
              else {
                iVar15 = func_0x0eee3000(lVar26,*(undefined8 *)(piVar45 + 8));
              }
              if (iVar15 == 0) {
LAB_08d985a0:
                ppppppplVar24 = (long *******)*plStack_178;
                pppppplVar30 = (long ******)func_0x04883620(auStack_398,pppppplVar16,pppppplVar25);
                pppppplVar31 = ppppppplVar24[1];
                ppppppplStack_4b0 = ppppppplVar24;
                if (pppppplVar31 == (long ******)0x0) goto LAB_08d9875f;
                uVar20 = (long)pppppplVar31 - ((ulong)pppppplVar31 >> 1 & 0x5555555555555555);
                uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
                uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                if (uVar20 >> 0x38 < 2) {
                  pppppplVar37 = (long ******)((long)pppppplVar31 - 1U & (ulong)pppppplVar30);
                }
                else {
                  pppppplVar37 = pppppplVar30;
                  if (pppppplVar31 <= pppppplVar30) {
                    if (((ulong)pppppplVar30 | (ulong)pppppplVar31) >> 0x20 == 0) {
                      pppppplVar37 = (long ******)
                                     (((ulong)pppppplVar30 & 0xffffffff) %
                                     ((ulong)pppppplVar31 & 0xffffffff));
                    }
                    else {
                      pppppplVar37 = (long ******)((ulong)pppppplVar30 % (ulong)pppppplVar31);
                    }
                  }
                }
                pppppplStack_180 = pppppplVar37;
                if (((*ppppppplVar24)[(long)pppppplVar37] == (long *****)0x0) ||
                   (pppplVar46 = *(*ppppppplVar24)[(long)pppppplVar37], pppplVar46 == (long ****)0x0
                   )) goto LAB_08d9875f;
                if (1 < (byte)(uVar20 >> 0x38)) goto LAB_08d9870c;
                goto LAB_08d986c8;
              }
            }
LAB_08d98490:
          }
          goto LAB_08d98a3d;
        }
        ppppppplVar24 = (long *******)plVar35[3];
        if (ppppppplVar24 < (long *******)0xfffffffffffffff8) {
          lVar26 = plVar35[2];
          if (ppppppplVar24 < (long *******)0x17) {
            _auStack_398 = (long *******)
                           CONCAT71(stack0xfffffffffffffc69,(char)ppppppplVar24 * '\x02');
            puVar21 = auStack_398 + 1;
            if (ppppppplVar24 != (long *******)0x0) goto LAB_08d98184;
          }
          else {
            uVar20 = ((ulong)ppppppplVar24 | 7) + 1;
            if (((ulong)ppppppplVar24 | 7) == 0x17) {
              uVar20 = 0x1a;
            }
            puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
            if (puVar21 == (undefined1 *)0x0) {
              func_0x0eec74c0(uVar20,0);
            }
            _auStack_398 = (long *******)(uVar20 | 1);
            uStack_390 = ppppppplVar24;
            uStack_388 = (undefined8 *)puVar21;
LAB_08d98184:
            func_0x0eee2ee0(puVar21,lVar26,ppppppplVar24);
          }
          puVar21[(long)ppppppplVar24] = 0;
          uVar19 = func_0x08e93510(uStack_170,puVar18 + 3,auStack_398);
          uStack_164 = uStack_140._4_2_;
          uStack_168 = (undefined4)uStack_140;
          if (((ulong)uStack_138 & 1) == 0) {
            uStack_150 = ppppppplStack_128;
            uStack_160 = (uint)uStack_138;
            uStack_15c = uStack_138._4_4_;
            uStack_158 = (undefined4)uStack_130;
            uStack_154 = uStack_130._4_4_;
          }
          else {
            func_0x0412e5e0(&uStack_160,ppppppplStack_128,uStack_130);
          }
          func_0x0730fa70(uVar19,&uStack_168,(ulong)puStack_120 & 0xffffffff);
          if ((uStack_160 & 1) != 0) {
            func_0x0412a280(uStack_150,CONCAT44(uStack_15c,uStack_160) & 0xfffffffffffffffe);
          }
          if (((ulong)_auStack_398 & 1) != 0) {
            func_0x0412a280(uStack_388,(ulong)_auStack_398 & 0xfffffffffffffffe);
          }
          goto LAB_08d9827a;
        }
        goto LAB_08d9c655;
      }
joined_r0x08d9a29b:
      puStack_198 = puVar17;
      if (puVar17 != (undefined8 *)0x0) {
        while (puVar17 != puStack_190) {
          func_0x0651ffe0(puStack_190 + -0x1e);
          puStack_190 = puStack_190 + -0x1e;
        }
        puStack_190 = puVar17;
        func_0x0412a280(puStack_198,lStack_188 - (long)puStack_198);
      }
      plVar35 = (long *)*plVar35;
    } while (plVar35 != (long *)0x0);
  }
  puStack_4c0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_4c0 == (undefined8 *)0x0) {
LAB_08d9c5c7:
    func_0x0eec74c0(0x20,0);
  }
  uVar19 = _UNK_012ab561;
  auStack_4d0 = (undefined1  [4])0x21;
  uStack_4cc = 0;
  uStack_4c8 = 0x1c;
  uStack_4c4 = 0;
  *(ulong *)((long)puStack_4c0 + 0xc) = CONCAT44(_UNK_012ab55d,_DAT_012ab559);
  *(undefined8 *)((long)puStack_4c0 + 0x14) = uVar19;
  uVar19 = CONCAT44(_DAT_012ab559,_UNK_012ab555);
  *puStack_4c0 = _DAT_012ab54d;
  puStack_4c0[1] = uVar19;
  *(undefined1 *)((long)puStack_4c0 + 0x1c) = 0;
  uStack_478 = (long *******)0x0;
  uStack_470 = (long *******)0x0;
  uStack_488 = (long *)0x0;
  puStack_480 = (undefined1 *)0x0;
  ppppppplStack_498 = (long *******)0x0;
  uStack_490 = (long *******)0x0;
  auStack_4a8 = (undefined1  [8])0x0;
  ppppppplStack_4a0 = (long *******)0x0;
  puStack_468 = (undefined8 *)0x0;
  func_0x048b1dc0(&uStack_460);
  func_0x048b1dc0(&uStack_450);
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  lStack_430 = 0;
  uStack_428 = 0;
  uStack_440 = 0;
  plStack_438 = (long *)0x0;
  if (((ulong)uStack_478 & 1) == 0) {
    if (((uint)auStack_4d0 & 1) == 0) {
      puStack_468 = puStack_4c0;
      uStack_478 = (long *******)CONCAT44(uStack_4cc,auStack_4d0);
      uStack_470 = (long *******)CONCAT44(uStack_4c4,uStack_4c8);
    }
    else {
      func_0x04885070(&uStack_478,puStack_4c0,CONCAT44(uStack_4c4,uStack_4c8));
    }
  }
  else {
    bVar47 = ((uint)auStack_4d0 & 1) != 0;
    puVar17 = (undefined8 *)(auStack_4d0 + 1);
    if (bVar47) {
      puVar17 = puStack_4c0;
    }
    uVar20 = (ulong)(auStack_4d0[0] >> 1);
    if (bVar47) {
      uVar20 = CONCAT44(uStack_4c4,uStack_4c8);
    }
    func_0x04885120(&uStack_478,puVar17,uVar20);
  }
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    func_0x048b0de0(auStack_398,auStack_4f8);
    ppppppplVar39 = uStack_390;
    _DAT_0f54fd90 = (undefined1  [8])_auStack_398;
    ppppppplVar24 = _DAT_0f54fd98;
    _auStack_398 = (long *******)0x0;
    uStack_390 = (long *******)0x0;
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar1 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar1;
      _DAT_0f54fd98 = ppppppplVar39;
      *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
      UNLOCK();
      ppppppplVar39 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        func_0x0412c2d0(ppppppplVar24);
        ppppppplVar39 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar39;
    ppppppplVar24 = uStack_390;
    if (uStack_390 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = uStack_390 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*uStack_390)[2])(uStack_390);
        func_0x0412c2d0(ppppppplVar24);
      }
    }
  }
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if (DAT_0f5f71c0 == '\0') {
    iVar15 = func_0x04108328(&DAT_0f5f71c0);
    if (iVar15 != 0) {
      func_0x08de1570();
      func_0x0410844d(&DAT_0f5f71c0);
    }
  }
  if (DAT_0f5f71c0 == '\0') {
    iVar15 = func_0x04108328(&DAT_0f5f71c0);
    if (iVar15 != 0) {
      func_0x08de1570();
      func_0x0410844d(&DAT_0f5f71c0);
    }
  }
  _auStack_398 = (long *******)&DAT_0f5f71a8;
  uStack_390 = (long *******)CONCAT44(uStack_390._4_4_,_DAT_0f5f71ac);
  uStack_388 = (undefined8 *)0x0;
  uStack_380 = CONCAT44(uStack_380._4_4_,0x80);
  uStack_378 = (long *)0x70;
  puStack_370 = (undefined4 *)&UNK_08de1610;
  auStack_368 = (undefined1  [8])0x0;
  ppppppplStack_360 = (long *******)0x0;
  ppppppplStack_358 = (long *******)&UNK_08de17d0;
  plStack_350 = (long *)0x0;
  uStack_348._0_4_ = 0;
  uStack_348._4_4_ = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  lStack_320 = 0;
  func_0x048aee30(auStack_4f8,ppppppplVar24,auStack_398,0x3512e7c7);
  lVar26 = lStack_320;
  lStack_320 = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar35 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_328 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      func_0x0412c2d0(plVar35);
    }
  }
  if ((DAT_0f5f4888 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f4888), iVar15 != 0)) {
    func_0x08d17420(0xf5f4870);
    func_0x0410844d(&DAT_0f5f4888);
  }
  auStack_398 = (undefined1  [4])_DAT_0f5f4874;
  uStack_390 = (long *******)&SUB_08d17240;
  uStack_388 = (undefined8 *)&UNK_08de3e70;
  func_0x05da1460(auStack_4f8);
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    func_0x048b0de0(auStack_398,auStack_4f8);
    ppppppplVar39 = uStack_390;
    uVar8 = uStack_394;
    auVar12 = auStack_398;
    ppppppplVar24 = _DAT_0f54fd98;
    auStack_398 = (undefined1  [4])0x0;
    uStack_394 = 0;
    uStack_390 = (long *******)0x0;
    _DAT_0f54fd90 = (undefined1  [8])CONCAT44(uVar8,auVar12);
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar1 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar1;
      _DAT_0f54fd98 = ppppppplVar39;
      *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
      UNLOCK();
      ppppppplVar39 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        func_0x0412c2d0(ppppppplVar24);
        ppppppplVar39 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar39;
    ppppppplVar24 = uStack_390;
    if (uStack_390 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = uStack_390 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*uStack_390)[2])(uStack_390);
        func_0x0412c2d0(ppppppplVar24);
      }
    }
  }
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if ((DAT_0f5f73e8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f73e8), iVar15 != 0)) {
    func_0x08de2cc0();
    func_0x0410844d(&DAT_0f5f73e8);
  }
  if ((DAT_0f5f73e8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f73e8), iVar15 != 0)) {
    func_0x08de2cc0();
    func_0x0410844d(&DAT_0f5f73e8);
  }
  _auStack_398 = (long *******)&DAT_0f5f73d0;
  uStack_390 = (long *******)CONCAT44(uStack_390._4_4_,_DAT_0f5f73d4);
  uStack_388 = (undefined8 *)0x0;
  uStack_380 = CONCAT44(uStack_380._4_4_,0x280);
  uStack_378 = (long *)0x20;
  puStack_370 = (undefined4 *)&UNK_08de2d40;
  auStack_368 = (undefined1  [8])0x0;
  ppppppplStack_360 = (long *******)0x0;
  ppppppplStack_358 = (long *******)&UNK_08de2f20;
  plStack_350 = (long *)0x1;
  uStack_348._0_4_ = 0x65b1ed0;
  uStack_348._4_4_ = 0;
  uStack_340 = 0x8de2fb0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  lStack_320 = 0;
  func_0x048aee30(auStack_4f8,ppppppplVar24,auStack_398,0xbb4df300);
  lVar26 = lStack_320;
  lStack_320 = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar35 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_328 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      func_0x0412c2d0(plVar35);
    }
  }
  if ((DAT_0f5f1218 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f1218), iVar15 != 0)) {
    func_0x08d16ed0(0xf5f1200);
    func_0x0410844d(&DAT_0f5f1218);
  }
  func_0x065ac270(auStack_4f8,_DAT_0f5f1204,&UNK_08de3e80);
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    func_0x048b0de0(auStack_398,auStack_4f8);
    ppppppplVar39 = uStack_390;
    _DAT_0f54fd90 = (undefined1  [8])_auStack_398;
    ppppppplVar24 = _DAT_0f54fd98;
    _auStack_398 = (long *******)0x0;
    uStack_390 = (long *******)0x0;
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar1 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar1;
      _DAT_0f54fd98 = ppppppplVar39;
      *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
      UNLOCK();
      ppppppplVar39 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        func_0x0412c2d0(ppppppplVar24);
        ppppppplVar39 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar39;
    ppppppplVar24 = uStack_390;
    if (uStack_390 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = uStack_390 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*uStack_390)[2])(uStack_390);
        func_0x0412c2d0(ppppppplVar24);
      }
    }
  }
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if ((DAT_0f5f7330 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f7330), iVar15 != 0)) {
    func_0x08de2260();
    func_0x0410844d(&DAT_0f5f7330);
  }
  if ((DAT_0f5f7330 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f7330), iVar15 != 0)) {
    func_0x08de2260();
    func_0x0410844d(&DAT_0f5f7330);
  }
  _auStack_398 = (long *******)&DAT_0f5f7318;
  uStack_390 = (long *******)CONCAT44(uStack_390._4_4_,_DAT_0f5f731c);
  uStack_388 = (undefined8 *)0x0;
  uStack_380 = CONCAT44(uStack_380._4_4_,0x280);
  uStack_378 = (long *)0x20;
  puStack_370 = (undefined4 *)&UNK_08de22e0;
  auStack_368 = (undefined1  [8])&UNK_08de24d0;
  ppppppplStack_360 = (long *******)0x0;
  ppppppplStack_358 = (long *******)&UNK_08de2570;
  plStack_350 = (long *)0x1;
  uStack_348._0_4_ = 0x65bd0c0;
  uStack_348._4_4_ = 0;
  uStack_340 = 0x8de2600;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  lStack_320 = 0;
  func_0x048aee30(auStack_4f8,ppppppplVar24,auStack_398,0xaa5b7557);
  lVar26 = lStack_320;
  lStack_320 = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar35 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_328 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      func_0x0412c2d0(plVar35);
    }
  }
  if ((DAT_0f5f6ee0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f6ee0), iVar15 != 0)) {
    func_0x08dbeb20();
    func_0x0410844d(&DAT_0f5f6ee0);
  }
  func_0x065ac270(auStack_4f8,_DAT_0f5f6ecc,&UNK_08de3f70);
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    func_0x048b0de0(auStack_398,auStack_4f8);
    ppppppplVar39 = uStack_390;
    _DAT_0f54fd90 = (undefined1  [8])_auStack_398;
    ppppppplVar24 = _DAT_0f54fd98;
    _auStack_398 = (long *******)0x0;
    uStack_390 = (long *******)0x0;
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar1 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar1;
      _DAT_0f54fd98 = ppppppplVar39;
      *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
      UNLOCK();
      ppppppplVar39 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        func_0x0412c2d0(ppppppplVar24);
        ppppppplVar39 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar39;
    ppppppplVar24 = uStack_390;
    if (uStack_390 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = uStack_390 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*uStack_390)[2])(uStack_390);
        func_0x0412c2d0(ppppppplVar24);
      }
    }
  }
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if ((DAT_0f5f7278 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f7278), iVar15 != 0)) {
    func_0x08de1aa0();
    func_0x0410844d(&DAT_0f5f7278);
  }
  if ((DAT_0f5f7278 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f7278), iVar15 != 0)) {
    func_0x08de1aa0();
    func_0x0410844d(&DAT_0f5f7278);
  }
  _auStack_398 = (long *******)&DAT_0f5f7260;
  uStack_390 = (long *******)CONCAT44(uStack_390._4_4_,_DAT_0f5f7264);
  uStack_388 = (undefined8 *)0x0;
  uStack_380 = CONCAT44(uStack_380._4_4_,0x280);
  uStack_378 = (long *)0x10;
  puStack_370 = (undefined4 *)&UNK_08de1b20;
  auStack_368 = (undefined1  [8])&UNK_08de1d10;
  ppppppplStack_360 = (long *******)0x0;
  ppppppplStack_358 = (long *******)&UNK_08de1d60;
  plStack_350 = (long *)0x1;
  uStack_348._0_4_ = 0x65bc1f0;
  uStack_348._4_4_ = 0;
  uStack_340 = 0x8de1e10;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  lStack_320 = 0;
  func_0x048aee30(auStack_4f8,ppppppplVar24,auStack_398,0x7bcffd17);
  lVar26 = lStack_320;
  lStack_320 = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar35 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_328 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      func_0x0412c2d0(plVar35);
    }
  }
  if ((DAT_0f5f6f98 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f6f98), iVar15 != 0)) {
    func_0x08dbf9c0();
    func_0x0410844d(&DAT_0f5f6f98);
  }
  func_0x065ac270(auStack_4f8,_DAT_0f5f6f84,&UNK_08de4040);
  auVar50 = func_0x08dc07a0();
  uStack_450 = auVar50._0_4_;
  uStack_44c = auVar50._4_4_;
  uStack_448 = auVar50._8_4_;
  uStack_444 = auVar50._12_4_;
  puVar34 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar34 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar19 = _UNK_011a553d;
  auStack_4f8 = (undefined1  [4])0x21;
  uStack_4f4 = 0;
  uStack_4f2 = 0;
  bStack_4f0 = 0x19;
  uStack_4ef = 0;
  uStack_4ed = 0;
  uStack_4ec = 0;
  *(ulong *)((long)puVar34 + 9) = CONCAT17(UNK_011a553c,CONCAT43(_UNK_011a5538,_DAT_011a5535));
  *(undefined8 *)((long)puVar34 + 0x11) = uVar19;
  uVar10 = _UNK_011a5538;
  uVar9 = _UNK_011a5534;
  uVar8 = _UNK_011a5530;
  *puVar34 = _DAT_011a552c;
  puVar34[1] = uVar8;
  puVar34[2] = uVar9;
  puVar34[3] = uVar10;
  *(undefined1 *)((long)puVar34 + 0x19) = 0;
  uStack_4e8 = (long *******)puVar34;
  func_0x065af670(auStack_398);
  if ((uStack_380 & 1) == 0) {
    if (((uint)auStack_4f8 & 1) == 0) {
      puStack_370 = (undefined4 *)uStack_4e8;
      uStack_380 = CONCAT44(CONCAT22(uStack_4f2,uStack_4f4),auStack_4f8);
      uStack_378 = (long *)CONCAT44(uStack_4ec,CONCAT13(uStack_4ed,CONCAT21(uStack_4ef,bStack_4f0)))
      ;
    }
    else {
      func_0x04885070(&uStack_380,uStack_4e8,
                      CONCAT44(uStack_4ec,CONCAT13(uStack_4ed,CONCAT21(uStack_4ef,bStack_4f0))));
    }
  }
  else {
    bVar47 = ((uint)auStack_4f8 & 1) != 0;
    puVar34 = (undefined4 *)(auStack_4f8 + 1);
    if (bVar47) {
      puVar34 = (undefined4 *)uStack_4e8;
    }
    uVar20 = (ulong)(auStack_4f8[0] >> 1);
    if (bVar47) {
      uVar20 = CONCAT44(uStack_4ec,CONCAT13(uStack_4ed,CONCAT21(uStack_4ef,bStack_4f0)));
    }
    func_0x04885120(&uStack_380,puVar34,uVar20);
  }
  _auStack_368 = func_0x08de4090();
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0f15bae8;
  uStack_348 = (long *******)(puVar17 + 3);
  *(undefined1 *)(puVar17 + 4) = 1;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar17[3] = &UNK_0f15bb38;
  plVar35 = (long *)CONCAT44(uStack_33c,uStack_340);
  uStack_340 = SUB84(puVar17,0);
  uStack_33c = (undefined4)((ulong)puVar17 >> 0x20);
  if (plVar35 == (long *)0x0) {
LAB_08d9ae02:
    if (uStack_3f8 < uStack_3f0) goto LAB_08d9ae14;
LAB_08d9ae51:
    lVar26 = func_0x065b01f0(&uStack_400,auStack_398);
  }
  else {
    LOCK();
    plVar32 = plVar35 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 != 0) goto LAB_08d9ae02;
    (**(code **)(*plVar35 + 0x10))(plVar35);
    func_0x0412c2d0(plVar35);
    if (uStack_3f0 <= uStack_3f8) goto LAB_08d9ae51;
LAB_08d9ae14:
    uVar20 = uStack_3f8;
    func_0x065b0410(uStack_3f8,auStack_398);
    lVar26 = uVar20 + 0x1b0;
  }
  uStack_3f8 = lVar26;
  func_0x0652dc20(auStack_398);
  _auStack_398 = CONCAT24(_DAT_0f642344,_DAT_0f642340);
  if ((_DAT_0f642348 & 1) == 0) {
    uStack_380 = _DAT_0f642358;
    uStack_390 = (long *******)CONCAT44(uRam000000000f64234c,_DAT_0f642348);
    uStack_388 = (undefined8 *)CONCAT44(uRam000000000f642354,_DAT_0f642350);
  }
  else {
    func_0x0412e5e0(&uStack_390,_DAT_0f642358,CONCAT44(uRam000000000f642354,_DAT_0f642350));
  }
  func_0x0730fa70(lVar26 + -0x1b0,auStack_398,0);
  if (((ulong)uStack_390 & 1) != 0) {
    func_0x0412a280(uStack_380,(ulong)uStack_390 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_4f8 & 1) != 0) {
    func_0x0412a280(uStack_4e8,
                    CONCAT26(uStack_4f2,CONCAT24(uStack_4f4,auStack_4f8)) & 0xfffffffffffffffe);
  }
  auStack_4f8 = (undefined1  [4])_DAT_0f642340;
  uStack_4f4 = _DAT_0f642344;
  if ((_DAT_0f642348 & 1) == 0) {
    uStack_4e0 = _DAT_0f642358;
    bStack_4f0 = (byte)_DAT_0f642348;
    uStack_4ef = (undefined2)(_DAT_0f642348 >> 8);
    uStack_4ed = (undefined1)(_DAT_0f642348 >> 0x18);
    uStack_4ec = uRam000000000f64234c;
    uStack_4e8 = (long *******)CONCAT44(uRam000000000f642354,_DAT_0f642350);
  }
  else {
    func_0x0412e5e0(&bStack_4f0,_DAT_0f642358,CONCAT44(uRam000000000f642354,_DAT_0f642350));
  }
  func_0x0730fa70(auStack_4a8,auStack_4f8,0);
  if ((bStack_4f0 & 1) != 0) {
    func_0x0412a280(uStack_4e0,
                    CONCAT44(uStack_4ec,CONCAT13(uStack_4ed,CONCAT21(uStack_4ef,bStack_4f0))) &
                    0xfffffffffffffffe);
  }
  auVar50 = func_0x08de3170();
  lVar33 = (long)uStack_490;
  uStack_460 = auVar50._0_8_;
  uStack_458 = auVar50._8_4_;
  uStack_454 = auVar50._12_4_;
  lVar26 = (long)uStack_488;
  if (uStack_490 != (long *******)0x0) {
    for (; lVar33 != lVar26; lVar26 = lVar26 + -0x30) {
      if ((*(byte *)(lVar26 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar26 + -0x10),
                        *(ulong *)(lVar26 + -0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_488 = (long *)lVar33;
    func_0x0412a280(uStack_490,(long)puStack_480 - (long)uStack_490);
  }
  uStack_138 = ppppppplStack_498;
  uStack_140 = ppppppplStack_4a0;
  uStack_148 = auStack_4a8;
  auStack_4a8 = (undefined1  [8])0x0;
  ppppppplStack_4a0 = (long *******)0x0;
  ppppppplStack_498 = (long *******)0x0;
  uStack_490 = (long *******)0x0;
  uStack_488 = (long *)0x0;
  puStack_480 = (undefined1 *)0x0;
  puStack_120 = puStack_468;
  uStack_130 = uStack_478;
  ppppppplStack_128 = uStack_470;
  uStack_478 = (long *******)0x0;
  uStack_470 = (long *******)0x0;
  puStack_468 = (undefined8 *)0x0;
  uStack_110 = CONCAT44(uStack_454,uStack_458);
  uStack_108 = CONCAT44(uStack_44c,uStack_450);
  uStack_100 = CONCAT44(uStack_444,uStack_448);
  uStack_118 = uStack_460;
  uStack_f8 = uStack_440;
  uStack_f0 = plStack_438;
  uStack_e8 = lStack_430;
  uStack_440 = 0;
  plStack_438 = (long *)0x0;
  lStack_430 = 0;
  uStack_e0 = uStack_428;
  uStack_d8 = uStack_420;
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_d0 = (undefined4)uStack_418;
  uStack_cc = uStack_418._4_4_;
  uStack_c8 = (undefined4)uStack_410;
  uStack_c4 = uStack_410._4_4_;
  uStack_c0 = uStack_408;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_b8 = uStack_400;
  lStack_b0 = uStack_3f8;
  uStack_a8 = uStack_3f0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_a0 = uStack_3e8;
  uStack_98 = uStack_3e0;
  uStack_90 = uStack_3d8;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_88 = uStack_3d0;
  uStack_80 = uStack_3c8;
  uStack_78 = uStack_3c0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_70 = (undefined4)uStack_3b8;
  uStack_6c = uStack_3b8._4_4_;
  uStack_68 = (undefined4)uStack_3b0;
  uStack_64 = uStack_3b0._4_4_;
  uStack_60 = uStack_3a8;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  func_0x0651ffe0(&uStack_490);
  auVar13 = auStack_4a8;
  ppppppplVar24 = ppppppplStack_4a0;
  if (auStack_4a8 != (undefined1  [8])0x0) {
    for (; auVar13 != (undefined1  [8])ppppppplVar24;
        ppppppplVar24 = (long *******)((long)ppppppplVar24 + -0x30)) {
      if ((*(byte *)((long)ppppppplVar24 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)((long)ppppppplVar24 + -0x10),
                        *(ulong *)((long)ppppppplVar24 + -0x20) & 0xfffffffffffffffe);
      }
    }
    ppppppplStack_4a0 = (long *******)auVar13;
    func_0x0412a280(auStack_4a8,(long)ppppppplStack_498 - (long)auStack_4a8);
  }
  if (((uint)auStack_4d0 & 1) != 0) {
    func_0x0412a280(puStack_4c0,CONCAT44(uStack_4cc,auStack_4d0) & 0xfffffffffffffffe);
  }
  func_0x0d84fd50(lStack_1e8,&uStack_148);
  func_0x0651ffe0(&uStack_148);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar19 = _UNK_0129331e;
  _auStack_398 = (long *******)0x21;
  uStack_390 = (long *******)0x1d;
  *(ulong *)((long)puVar17 + 0xd) = CONCAT53(_UNK_01293319,_DAT_01293316);
  *(undefined8 *)((long)puVar17 + 0x15) = uVar19;
  uVar19 = CONCAT35(_DAT_01293316,_UNK_01293311);
  *puVar17 = _DAT_01293309;
  puVar17[1] = uVar19;
  *(undefined1 *)((long)puVar17 + 0x1d) = 0;
  uStack_478 = (long *******)0x0;
  uStack_470 = (long *******)0x0;
  uStack_488 = (long *)0x0;
  puStack_480 = (undefined1 *)0x0;
  ppppppplStack_498 = (long *******)0x0;
  uStack_490 = (long *******)0x0;
  auStack_4a8 = (undefined1  [8])0x0;
  ppppppplStack_4a0 = (long *******)0x0;
  puStack_468 = (undefined8 *)0x0;
  uStack_388 = puVar17;
  func_0x048b1dc0(&uStack_460);
  func_0x048b1dc0(&uStack_450);
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  lStack_430 = 0;
  uStack_428 = 0;
  uStack_440 = 0;
  plStack_438 = (long *)0x0;
  if (((ulong)uStack_478 & 1) == 0) {
    if (((ulong)_auStack_398 & 1) == 0) {
      puStack_468 = uStack_388;
      uStack_478 = _auStack_398;
      uStack_470 = uStack_390;
    }
    else {
      func_0x04885070(&uStack_478,uStack_388,uStack_390);
    }
  }
  else {
    ppppppplVar24 = (long *******)((ulong)_auStack_398 >> 1 & 0x7f);
    puVar17 = (undefined8 *)(auStack_398 + 1);
    if (((ulong)_auStack_398 & 1) != 0) {
      ppppppplVar24 = uStack_390;
      puVar17 = uStack_388;
    }
    func_0x04885120(&uStack_478,puVar17,ppppppplVar24);
  }
  if (((ulong)_auStack_398 & 1) != 0) {
    func_0x0412a280(uStack_388,(ulong)_auStack_398 & 0xfffffffffffffffe);
  }
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    func_0x048b0de0(auStack_398,auStack_4f8);
    ppppppplVar39 = uStack_390;
    _DAT_0f54fd90 = (undefined1  [8])_auStack_398;
    ppppppplVar24 = _DAT_0f54fd98;
    _auStack_398 = (long *******)0x0;
    uStack_390 = (long *******)0x0;
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar1 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar1;
      _DAT_0f54fd98 = ppppppplVar39;
      *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
      UNLOCK();
      ppppppplVar39 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        func_0x0412c2d0(ppppppplVar24);
        ppppppplVar39 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar39;
    ppppppplVar24 = uStack_390;
    if (uStack_390 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = uStack_390 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*uStack_390)[2])(uStack_390);
        func_0x0412c2d0(ppppppplVar24);
      }
    }
  }
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if (DAT_0f5fb8f8 == '\0') {
    iVar15 = func_0x04108328(&DAT_0f5fb8f8);
    if (iVar15 != 0) {
      func_0x08dc0f40(0xf5fb8e0,ppppppplVar24);
      func_0x0410844d(&DAT_0f5fb8f8);
    }
  }
  if (DAT_0f5fb8f8 == '\0') {
    iVar15 = func_0x04108328(&DAT_0f5fb8f8);
    if (iVar15 != 0) {
      func_0x08dc0f40(0xf5fb8e0,ppppppplVar24);
      func_0x0410844d(&DAT_0f5fb8f8);
    }
  }
  _auStack_398 = (long *******)0xf5fb8e0;
  uStack_390 = (long *******)CONCAT44(uStack_390._4_4_,_DAT_0f5fb8e4);
  uStack_388 = (undefined8 *)0x0;
  uStack_380 = CONCAT44(uStack_380._4_4_,0x80);
  uStack_378 = (long *)0x60;
  puStack_370 = (undefined4 *)&SUB_08dc0e60;
  auStack_368 = (undefined1  [8])0x0;
  ppppppplStack_360 = (long *******)0x0;
  ppppppplStack_358 = (long *******)&UNK_08dc0fb0;
  plStack_350 = (long *)0x0;
  uStack_348._0_4_ = 0;
  uStack_348._4_4_ = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  lStack_320 = 0;
  func_0x048aee30(auStack_4f8,ppppppplVar24,auStack_398,0x65f318f5);
  lVar26 = lStack_320;
  lStack_320 = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar35 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_328 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      func_0x0412c2d0(plVar35);
    }
  }
  if ((DAT_0f5f4888 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f4888), iVar15 != 0)) {
    func_0x08d17420(0xf5f4870);
    func_0x0410844d(&DAT_0f5f4888);
  }
  auStack_398 = (undefined1  [4])_DAT_0f5f4874;
  uStack_390 = (long *******)&SUB_08d17240;
  uStack_388 = (undefined8 *)&UNK_08dc1320;
  func_0x05da1460(auStack_4f8);
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    func_0x048b0de0(auStack_398,auStack_4f8);
    ppppppplVar39 = uStack_390;
    uVar8 = uStack_394;
    auVar12 = auStack_398;
    ppppppplVar24 = _DAT_0f54fd98;
    auStack_398 = (undefined1  [4])0x0;
    uStack_394 = 0;
    uStack_390 = (long *******)0x0;
    _DAT_0f54fd90 = (undefined1  [8])CONCAT44(uVar8,auVar12);
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar1 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar1;
      _DAT_0f54fd98 = ppppppplVar39;
      *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
      UNLOCK();
      ppppppplVar39 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        func_0x0412c2d0(ppppppplVar24);
        ppppppplVar39 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar39;
    ppppppplVar24 = uStack_390;
    if (uStack_390 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = uStack_390 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*uStack_390)[2])(uStack_390);
        func_0x0412c2d0(ppppppplVar24);
      }
    }
  }
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if ((DAT_0f5fb9b0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5fb9b0), iVar15 != 0)) {
    func_0x08dc1530(0xf5fb998,ppppppplVar24);
    func_0x0410844d(&DAT_0f5fb9b0);
  }
  if ((DAT_0f5fb9b0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5fb9b0), iVar15 != 0)) {
    func_0x08dc1530(0xf5fb998,ppppppplVar24);
    func_0x0410844d(&DAT_0f5fb9b0);
  }
  _auStack_398 = (long *******)0xf5fb998;
  uStack_390 = (long *******)CONCAT44(uStack_390._4_4_,_DAT_0f5fb99c);
  uStack_388 = (undefined8 *)0x0;
  uStack_380 = CONCAT44(uStack_380._4_4_,0x280);
  uStack_378 = (long *)0x20;
  puStack_370 = (undefined4 *)&UNK_08dc1450;
  auStack_368 = (undefined1  [8])0x0;
  ppppppplStack_360 = (long *******)0x0;
  ppppppplStack_358 = (long *******)&UNK_08dc15a0;
  plStack_350 = (long *)0x1;
  uStack_348._0_4_ = 0x65b1ed0;
  uStack_348._4_4_ = 0;
  uStack_340 = 0x8dc1c50;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  lStack_320 = 0;
  func_0x048aee30(auStack_4f8,ppppppplVar24,auStack_398,0x2326930c);
  lVar26 = lStack_320;
  lStack_320 = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar35 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_328 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      func_0x0412c2d0(plVar35);
    }
  }
  if ((DAT_0f5f1218 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f1218), iVar15 != 0)) {
    func_0x08d16ed0(0xf5f1200);
    func_0x0410844d(&DAT_0f5f1218);
  }
  func_0x065ac270(auStack_4f8,_DAT_0f5f1204,&UNK_08dc1c60);
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    func_0x048b0de0(auStack_398,auStack_4f8);
    ppppppplVar39 = uStack_390;
    _DAT_0f54fd90 = (undefined1  [8])_auStack_398;
    ppppppplVar24 = _DAT_0f54fd98;
    _auStack_398 = (long *******)0x0;
    uStack_390 = (long *******)0x0;
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar1 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar1;
      _DAT_0f54fd98 = ppppppplVar39;
      *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
      UNLOCK();
      ppppppplVar39 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        func_0x0412c2d0(ppppppplVar24);
        ppppppplVar39 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar39;
    ppppppplVar24 = uStack_390;
    if (uStack_390 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = uStack_390 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*uStack_390)[2])(uStack_390);
        func_0x0412c2d0(ppppppplVar24);
      }
    }
  }
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if ((DAT_0f5fba68 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5fba68), iVar15 != 0)) {
    func_0x08dc1f60(0xf5fba50);
    func_0x0410844d(&DAT_0f5fba68);
  }
  if ((DAT_0f5fba68 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5fba68), iVar15 != 0)) {
    func_0x08dc1f60(0xf5fba50);
    func_0x0410844d(&DAT_0f5fba68);
  }
  _auStack_398 = (long *******)0xf5fba50;
  uStack_390 = (long *******)CONCAT44(uStack_390._4_4_,_DAT_0f5fba54);
  uStack_388 = (undefined8 *)0x0;
  uStack_380 = CONCAT44(uStack_380._4_4_,0x280);
  uStack_378 = (long *)0x20;
  puStack_370 = (undefined4 *)&UNK_08dc1e80;
  auStack_368 = (undefined1  [8])&UNK_08dc1fd0;
  ppppppplStack_360 = (long *******)0x0;
  ppppppplStack_358 = (long *******)&UNK_08dc2340;
  plStack_350 = (long *)0x1;
  uStack_348._0_4_ = 0x65bd0c0;
  uStack_348._4_4_ = 0;
  uStack_340 = 0x8dc23d0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  lStack_320 = 0;
  func_0x048aee30(auStack_4f8,ppppppplVar24,auStack_398,0x8b25a235);
  lVar26 = lStack_320;
  lStack_320 = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar35 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_328 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      func_0x0412c2d0(plVar35);
    }
  }
  if ((DAT_0f5f6ee0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f6ee0), iVar15 != 0)) {
    func_0x08dbeb20();
    func_0x0410844d(&DAT_0f5f6ee0);
  }
  func_0x065ac270(auStack_4f8,_DAT_0f5f6ecc,&UNK_08dc23e0);
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    func_0x048b0de0(auStack_398,auStack_4f8);
    ppppppplVar39 = uStack_390;
    _DAT_0f54fd90 = (undefined1  [8])_auStack_398;
    ppppppplVar24 = _DAT_0f54fd98;
    _auStack_398 = (long *******)0x0;
    uStack_390 = (long *******)0x0;
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar1 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar1;
      _DAT_0f54fd98 = ppppppplVar39;
      *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
      UNLOCK();
      ppppppplVar39 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        func_0x0412c2d0(ppppppplVar24);
        ppppppplVar39 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar39;
    ppppppplVar24 = uStack_390;
    if (uStack_390 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = uStack_390 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*uStack_390)[2])(uStack_390);
        func_0x0412c2d0(ppppppplVar24);
      }
    }
  }
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if ((DAT_0f5fbb20 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5fbb20), iVar15 != 0)) {
    func_0x08dc26c0(0xf5fbb08,ppppppplVar24);
    func_0x0410844d(&DAT_0f5fbb20);
  }
  if ((DAT_0f5fbb20 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5fbb20), iVar15 != 0)) {
    func_0x08dc26c0(0xf5fbb08,ppppppplVar24);
    func_0x0410844d(&DAT_0f5fbb20);
  }
  _auStack_398 = (long *******)0xf5fbb08;
  uStack_390 = (long *******)CONCAT44(uStack_390._4_4_,_DAT_0f5fbb0c);
  uStack_388 = (undefined8 *)0x0;
  uStack_380 = CONCAT44(uStack_380._4_4_,0x280);
  uStack_378 = (long *)0x10;
  puStack_370 = (undefined4 *)&UNK_08dc25e0;
  auStack_368 = (undefined1  [8])&UNK_08dc2730;
  ppppppplStack_360 = (long *******)0x0;
  ppppppplStack_358 = (long *******)&UNK_08dc2900;
  plStack_350 = (long *)0x1;
  uStack_348._0_4_ = 0x65bc1f0;
  uStack_348._4_4_ = 0;
  uStack_340 = 0x8dc29b0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  lStack_320 = 0;
  func_0x048aee30(auStack_4f8,ppppppplVar24,auStack_398,0xdee09475);
  lVar26 = lStack_320;
  lStack_320 = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar35 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_328 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      func_0x0412c2d0(plVar35);
    }
  }
  if ((DAT_0f5f6f98 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5f6f98), iVar15 != 0)) {
    func_0x08dbf9c0();
    func_0x0410844d(&DAT_0f5f6f98);
  }
  func_0x065ac270(auStack_4f8,_DAT_0f5f6f84,&UNK_08dc29c0);
  auVar50 = func_0x08dc07a0();
  uStack_450 = auVar50._0_4_;
  uStack_44c = auVar50._4_4_;
  uStack_448 = auVar50._8_4_;
  uStack_444 = auVar50._12_4_;
  auStack_4f8 = (undefined1  [4])0x6c696612;
  uStack_4f4 = 0x4c6c;
  uStack_4f2 = 0x7665;
  bStack_4f0 = 0x65;
  uStack_4ef = 0x6c;
  func_0x065af670(auStack_398);
  if ((uStack_380 & 1) == 0) {
    if (((uint)auStack_4f8 & 1) == 0) {
      puStack_370 = (undefined4 *)uStack_4e8;
      uStack_380 = CONCAT44(CONCAT22(uStack_4f2,uStack_4f4),auStack_4f8);
      uStack_378 = (long *)CONCAT44(uStack_4ec,CONCAT13(uStack_4ed,CONCAT21(uStack_4ef,bStack_4f0)))
      ;
    }
    else {
      func_0x04885070(&uStack_380,uStack_4e8,
                      CONCAT44(uStack_4ec,CONCAT13(uStack_4ed,CONCAT21(uStack_4ef,bStack_4f0))));
    }
  }
  else {
    bVar47 = ((uint)auStack_4f8 & 1) != 0;
    puVar34 = (undefined4 *)(auStack_4f8 + 1);
    if (bVar47) {
      puVar34 = (undefined4 *)uStack_4e8;
    }
    uVar20 = (ulong)(auStack_4f8[0] >> 1);
    if (bVar47) {
      uVar20 = CONCAT44(uStack_4ec,CONCAT13(uStack_4ed,CONCAT21(uStack_4ef,bStack_4f0)));
    }
    func_0x04885120(&uStack_380,puVar34,uVar20);
  }
  _auStack_368 = func_0x0651f1a0();
  plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar35 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar32 = plStack_350;
  plVar35[1] = 0;
  plVar35[2] = 0;
  *plVar35 = (long)&UNK_0f15ab68;
  ppppppplStack_358 = (long *******)(plVar35 + 4);
  plVar35[10] = 0;
  plVar35[0x10] = 0;
  *(undefined1 *)(plVar35 + 0x12) = 0;
  plVar35[0x13] = 0;
  plVar35[0x14] = 0;
  plVar35[0x15] = 0;
  plVar35[4] = (long)&UNK_0f15abb8;
  if (plStack_350 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_350 + 1;
    lVar26 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      lVar26 = *plStack_350;
      plStack_350 = plVar35;
      (**(code **)(lVar26 + 0x10))(plVar32);
      func_0x0412c2d0(plVar32);
      plVar35 = plStack_350;
    }
  }
  plStack_350 = plVar35;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0f15ac10;
  uStack_348 = (long *******)(puVar17 + 3);
  *(undefined1 *)(puVar17 + 4) = 1;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar17[3] = &UNK_0f15ac60;
  plVar35 = (long *)CONCAT44(uStack_33c,uStack_340);
  uStack_340 = SUB84(puVar17,0);
  uStack_33c = (undefined4)((ulong)puVar17 >> 0x20);
  if (plVar35 == (long *)0x0) {
LAB_08d9be7a:
    if (uStack_3f0 <= uStack_3f8) {
LAB_08d9bec8:
      lVar26 = func_0x065b01f0(&uStack_400,auStack_398);
      goto LAB_08d9bee0;
    }
  }
  else {
    LOCK();
    plVar32 = plVar35 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 != 0) goto LAB_08d9be7a;
    (**(code **)(*plVar35 + 0x10))(plVar35);
    func_0x0412c2d0(plVar35);
    if (uStack_3f0 <= uStack_3f8) goto LAB_08d9bec8;
  }
  uVar20 = uStack_3f8;
  func_0x065b0410(uStack_3f8,auStack_398);
  lVar26 = uVar20 + 0x1b0;
LAB_08d9bee0:
  uStack_3f8 = lVar26;
  func_0x0652dc20(auStack_398);
  _auStack_398 = CONCAT24(_DAT_0f642304,_DAT_0f642300);
  if ((_DAT_0f642308 & 1) == 0) {
    uStack_380 = _DAT_0f642318;
    uStack_390 = (long *******)CONCAT44(uRam000000000f64230c,_DAT_0f642308);
    uStack_388 = (undefined8 *)CONCAT44(uRam000000000f642314,_DAT_0f642310);
  }
  else {
    func_0x0412e5e0(&uStack_390,_DAT_0f642318,CONCAT44(uRam000000000f642314,_DAT_0f642310));
  }
  func_0x0730fa70(lVar26 + -0x1b0,auStack_398,0x10001);
  if (((ulong)uStack_390 & 1) != 0) {
    func_0x0412a280(uStack_380,(ulong)uStack_390 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_4f8 & 1) != 0) {
    func_0x0412a280(uStack_4e8,
                    CONCAT26(uStack_4f2,CONCAT24(uStack_4f4,auStack_4f8)) & 0xfffffffffffffffe);
  }
  auStack_4f8 = (undefined1  [4])_DAT_0f642300;
  uStack_4f4 = _DAT_0f642304;
  if ((_DAT_0f642308 & 1) == 0) {
    uStack_4e0 = _DAT_0f642318;
    bStack_4f0 = (byte)_DAT_0f642308;
    uStack_4ef = (undefined2)(_DAT_0f642308 >> 8);
    uStack_4ed = (undefined1)(_DAT_0f642308 >> 0x18);
    uStack_4ec = uRam000000000f64230c;
    uStack_4e8 = (long *******)CONCAT44(uRam000000000f642314,_DAT_0f642310);
  }
  else {
    func_0x0412e5e0(&bStack_4f0,_DAT_0f642318,CONCAT44(uRam000000000f642314,_DAT_0f642310));
  }
  func_0x0730fa70(auStack_4a8,auStack_4f8,0x10001);
  if ((bStack_4f0 & 1) != 0) {
    func_0x0412a280(uStack_4e0,
                    CONCAT44(uStack_4ec,CONCAT13(uStack_4ed,CONCAT21(uStack_4ef,bStack_4f0))) &
                    0xfffffffffffffffe);
  }
  auVar50 = func_0x08dc31c0();
  lVar33 = (long)uStack_490;
  uStack_460 = auVar50._0_8_;
  uStack_458 = auVar50._8_4_;
  uStack_454 = auVar50._12_4_;
  lVar26 = (long)uStack_488;
  if (uStack_490 != (long *******)0x0) {
    for (; lVar33 != lVar26; lVar26 = lVar26 + -0x30) {
      if ((*(byte *)(lVar26 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar26 + -0x10),
                        *(ulong *)(lVar26 + -0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_488 = (long *)lVar33;
    func_0x0412a280(uStack_490,(long)puStack_480 - (long)uStack_490);
  }
  uStack_138 = ppppppplStack_498;
  uStack_140 = ppppppplStack_4a0;
  uStack_148 = auStack_4a8;
  auStack_4a8 = (undefined1  [8])0x0;
  ppppppplStack_4a0 = (long *******)0x0;
  ppppppplStack_498 = (long *******)0x0;
  uStack_490 = (long *******)0x0;
  uStack_488 = (long *)0x0;
  puStack_480 = (undefined1 *)0x0;
  puStack_120 = puStack_468;
  uStack_130 = uStack_478;
  ppppppplStack_128 = uStack_470;
  uStack_478 = (long *******)0x0;
  uStack_470 = (long *******)0x0;
  puStack_468 = (undefined8 *)0x0;
  uStack_110 = CONCAT44(uStack_454,uStack_458);
  uStack_108 = CONCAT44(uStack_44c,uStack_450);
  uStack_100 = CONCAT44(uStack_444,uStack_448);
  uStack_118 = uStack_460;
  uStack_f8 = uStack_440;
  uStack_f0 = plStack_438;
  uStack_e8 = lStack_430;
  uStack_440 = 0;
  plStack_438 = (long *)0x0;
  lStack_430 = 0;
  uStack_e0 = uStack_428;
  uStack_d8 = uStack_420;
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_d0 = (undefined4)uStack_418;
  uStack_cc = uStack_418._4_4_;
  uStack_c8 = (undefined4)uStack_410;
  uStack_c4 = uStack_410._4_4_;
  uStack_c0 = uStack_408;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_b8 = uStack_400;
  lStack_b0 = uStack_3f8;
  uStack_a8 = uStack_3f0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_a0 = uStack_3e8;
  uStack_98 = uStack_3e0;
  uStack_90 = uStack_3d8;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_88 = uStack_3d0;
  uStack_80 = uStack_3c8;
  uStack_78 = uStack_3c0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_70 = (undefined4)uStack_3b8;
  uStack_6c = uStack_3b8._4_4_;
  uStack_68 = (undefined4)uStack_3b0;
  uStack_64 = uStack_3b0._4_4_;
  uStack_60 = uStack_3a8;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  func_0x0651ffe0(&uStack_490);
  auVar13 = auStack_4a8;
  ppppppplVar24 = ppppppplStack_4a0;
  if (auStack_4a8 != (undefined1  [8])0x0) {
    for (; auVar13 != (undefined1  [8])ppppppplVar24; ppppppplVar24 = ppppppplVar24 + -6) {
      if (((ulong)ppppppplVar24[-4] & 1) != 0) {
        func_0x0412a280(ppppppplVar24[-2],(ulong)ppppppplVar24[-4] & 0xfffffffffffffffe);
      }
    }
    ppppppplStack_4a0 = (long *******)auVar13;
    func_0x0412a280(auStack_4a8,(long)ppppppplStack_498 - (long)auStack_4a8);
  }
  func_0x0d84fd50(lStack_1e8,&uStack_148);
  func_0x0651ffe0(&uStack_148);
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    func_0x048b0de0(auStack_4a8,&uStack_148);
    ppppppplVar39 = ppppppplStack_4a0;
    _DAT_0f54fd90 = auStack_4a8;
    ppppppplVar24 = _DAT_0f54fd98;
    auStack_4a8 = (undefined1  [8])0x0;
    ppppppplStack_4a0 = (long *******)0x0;
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar1 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar1;
      _DAT_0f54fd98 = ppppppplVar39;
      *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + -1);
      UNLOCK();
      ppppppplVar39 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar24)[2])(ppppppplVar24);
        func_0x0412c2d0(ppppppplVar24);
        ppppppplVar39 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar39;
    ppppppplVar24 = ppppppplStack_4a0;
    if (ppppppplStack_4a0 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = ppppppplStack_4a0 + 1;
      pppppplVar16 = *ppppppplVar39;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_4a0)[2])(ppppppplStack_4a0);
        func_0x0412c2d0(ppppppplVar24);
      }
    }
  }
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if (DAT_0f5f8668 == '\0') {
    iVar15 = func_0x04108328(&DAT_0f5f8668);
    if (iVar15 != 0) {
      func_0x08e08790();
      func_0x0410844d(&DAT_0f5f8668);
    }
  }
  if (DAT_0f5f8668 == '\0') {
    iVar15 = func_0x04108328(&DAT_0f5f8668);
    if (iVar15 != 0) {
      func_0x08e08790();
      func_0x0410844d(&DAT_0f5f8668);
    }
  }
  auStack_4a8 = (undefined1  [8])&DAT_0f5f8650;
  ppppppplStack_4a0 = (long *******)CONCAT44(ppppppplStack_4a0._4_4_,_DAT_0f5f8654);
  ppppppplStack_498 = (long *******)0x0;
  uStack_490 = (long *******)CONCAT44(uStack_490._4_4_,0x80);
  uStack_488 = (long *)0x80;
  puStack_480 = &UNK_08e085d0;
  uStack_478 = (long *******)0x0;
  uStack_470 = (long *******)0x0;
  puStack_468 = (undefined8 *)&UNK_08e08810;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_454 = 0;
  uStack_450 = 0;
  uStack_44c = 0;
  uStack_448 = 0;
  uStack_440 = 0;
  plStack_438 = (long *)0x0;
  lStack_430 = 0;
  func_0x048aee30(&uStack_148,ppppppplVar24,auStack_4a8,0x817f9b68);
  lVar26 = lStack_430;
  lStack_430 = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar35 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_438 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar35);
    }
  }
  if (DAT_0f5fc3b8 == '\0') {
    iVar15 = func_0x04108328(&DAT_0f5fc3b8);
    if (iVar15 != 0) {
      func_0x08e14a60(0xf5fc3a0);
      func_0x0410844d(&DAT_0f5fc3b8);
    }
  }
  auStack_4a8._0_4_ = _DAT_0f5fc3a4;
  ppppppplStack_4a0 = (long *******)&SUB_08e14970;
  ppppppplStack_498 = (long *******)&UNK_08e14a50;
  func_0x05da1460(&uStack_148);
  puVar34 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar34 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar19 = _UNK_014809fe;
  auStack_4a8 = (undefined1  [8])0x29;
  ppppppplStack_4a0 = (long *******)0x20;
  *(undefined8 *)(puVar34 + 4) = _DAT_014809f6;
  *(undefined8 *)(puVar34 + 6) = uVar19;
  uVar10 = _UNK_014809f2;
  uVar9 = _UNK_014809ee;
  uVar8 = _UNK_014809ea;
  *puVar34 = _DAT_014809e6;
  puVar34[1] = uVar8;
  puVar34[2] = uVar9;
  puVar34[3] = uVar10;
  *(undefined1 *)(puVar34 + 8) = 0;
  ppppppplStack_498 = (long *******)puVar34;
  func_0x08da3f20(auStack_398,auStack_4a8);
  if (((ulong)auStack_4a8 & 1) != 0) {
    func_0x0412a280(ppppppplStack_498,(ulong)auStack_4a8 & 0xfffffffffffffffe);
  }
  func_0x0d84fd50(lStack_1e8,auStack_398);
  func_0x0651ffe0(auStack_398);
  return;
LAB_08d9870c:
  do {
    pppppplVar38 = (long ******)pppplVar46[1];
    if (pppppplVar38 == pppppplVar30) {
      if ((long ******)pppplVar46[3] == pppppplVar25) {
        iVar15 = func_0x0eee3000(pppplVar46[2],pppppplVar16,pppppplVar25);
        pppppplVar37 = pppppplStack_180;
        if (iVar15 == 0) goto LAB_08d98a3d;
      }
    }
    else {
      if (pppppplVar31 <= pppppplVar38) {
        if (((ulong)pppppplVar38 | (ulong)pppppplVar31) >> 0x20 == 0) {
          pppppplVar38 = (long ******)
                         (((ulong)pppppplVar38 & 0xffffffff) % ((ulong)pppppplVar31 & 0xffffffff));
        }
        else {
          pppppplVar38 = (long ******)((ulong)pppppplVar38 % (ulong)pppppplVar31);
        }
      }
      if (pppppplVar38 != pppppplVar37) break;
    }
    pppplVar46 = (long ****)*pppplVar46;
  } while (pppplVar46 != (long ****)0x0);
  goto LAB_08d9875f;
LAB_08d986c8:
  do {
    if ((long ******)pppplVar46[1] == pppppplVar30) {
      if ((long ******)pppplVar46[3] == pppppplVar25) {
        iVar15 = func_0x0eee3000(pppplVar46[2],pppppplVar16,pppppplVar25);
        pppppplVar37 = pppppplStack_180;
        if (iVar15 == 0) goto LAB_08d98a3d;
      }
    }
    else if ((long ******)((ulong)pppplVar46[1] & (long)pppppplVar31 - 1U) != pppppplVar37) break;
    pppplVar46 = (long ****)*pppplVar46;
  } while (pppplVar46 != (long ****)0x0);
LAB_08d9875f:
  plVar35 = plStack_4d8;
  ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppppppplVar24 == (long *******)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  ppppppplVar39 = ppppppplStack_4b0;
  uStack_390 = ppppppplStack_4b0;
  uStack_388 = (undefined8 *)0x1;
  *ppppppplVar24 = (long ******)0x0;
  ppppppplVar24[1] = pppppplVar30;
  ppppppplVar24[2] = pppppplVar16;
  ppppppplVar24[3] = pppppplVar25;
  ppppppplVar24[4] = (long ******)uStack_58;
  ppppppplVar24[5] = uStack_50;
  if (plVar35 != (long *)0x0) {
    LOCK();
    plVar35 = plVar35 + 1;
    *plVar35 = *plVar35 + 1;
    UNLOCK();
  }
  _auStack_398 = ppppppplVar24;
  if ((long)pppppplVar31 < 0) {
    fVar49 = (float)pppppplVar31;
    fVar48 = *(float *)(ppppppplStack_4b0 + 4);
    if (pppppplVar31 != (long ******)0x0) goto LAB_08d98838;
LAB_08d98849:
    uVar20 = 1;
    if ((long ******)0x2 < pppppplVar31) {
      uVar20 = (ulong)(((ulong)pppppplVar31 & (long)pppppplVar31 - 1U) != 0);
    }
    pppppplVar25 = (long ******)((long)pppppplVar31 * 2 | uVar20);
    fVar48 = (float)func_0x0eee3ab0((float)((long)ppppppplStack_4b0[3] + 1) / fVar48);
    pppppplVar16 = (long ******)
                   ((long)(fVar48 - _DAT_01198778) & (long)fVar48 >> 0x3f | (long)fVar48);
    if (pppppplVar16 < pppppplVar25) {
      pppppplVar16 = pppppplVar25;
    }
    pppppplVar25 = (long ******)0x2;
    if ((pppppplVar16 == (long ******)0x1) ||
       (pppppplVar25 = pppppplVar16, ((ulong)pppppplVar16 & (long)pppppplVar16 - 1U) == 0)) {
      pppppplVar16 = ppppppplVar39[1];
      bVar47 = pppppplVar25 < pppppplVar16;
      if (pppppplVar25 <= pppppplVar16) goto LAB_08d988dd;
LAB_08d988b5:
      func_0x08dba340(ppppppplStack_4b0,pppppplVar25);
    }
    else {
      pppppplVar25 = (long ******)FUN_0412c3f0();
      pppppplVar16 = ppppppplStack_4b0[1];
      bVar47 = pppppplVar25 < pppppplVar16;
      if (pppppplVar16 < pppppplVar25) goto LAB_08d988b5;
LAB_08d988dd:
      if (bVar47) {
        fVar48 = (float)func_0x0eee3ab0((float)ppppppplStack_4b0[3] /
                                        *(float *)(ppppppplStack_4b0 + 4));
        pppppplVar31 = (long ******)
                       ((long)(fVar48 - _DAT_01198778) & (long)fVar48 >> 0x3f | (long)fVar48);
        if ((pppppplVar16 < (long ******)0x3) ||
           (uVar20 = (long)pppppplVar16 - ((ulong)pppppplVar16 >> 1 & 0x5555555555555555),
           uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333),
           1 < (byte)(((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          pppppplVar31 = (long ******)FUN_0412c3f0(pppppplVar31);
        }
        else if ((long ******)0x1 < pppppplVar31) {
          lVar26 = 0x3f;
          if ((long)pppppplVar31 - 1U != 0) {
            for (; (long)pppppplVar31 - 1U >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          pppppplVar31 = (long ******)(1L << (-((byte)lVar26 ^ 0x3f) & 0x3f));
        }
        if (pppppplVar25 <= pppppplVar31) {
          pppppplVar25 = pppppplVar31;
        }
        if (pppppplVar25 < pppppplVar16) goto LAB_08d988b5;
      }
    }
    pppppplVar31 = ppppppplStack_4b0[1];
    if (((ulong)pppppplVar31 & (long)pppppplVar31 - 1U) == 0) {
      pppppplVar16 = (long ******)((ulong)pppppplVar30 & (long)pppppplVar31 - 1U);
    }
    else {
      pppppplVar16 = pppppplVar30;
      if (pppppplVar31 <= pppppplVar30) {
        if (((ulong)pppppplVar30 | (ulong)pppppplVar31) >> 0x20 == 0) {
          pppppplVar16 = (long ******)
                         (((ulong)pppppplVar30 & 0xffffffff) % ((ulong)pppppplVar31 & 0xffffffff));
        }
        else {
          pppppplVar16 = (long ******)((ulong)pppppplVar30 % (ulong)pppppplVar31);
        }
      }
    }
  }
  else {
    fVar49 = (float)(long)pppppplVar31;
    fVar48 = *(float *)(ppppppplStack_4b0 + 4);
    if (pppppplVar31 == (long ******)0x0) goto LAB_08d98849;
LAB_08d98838:
    pppppplVar16 = pppppplStack_180;
    if (fVar49 * fVar48 < (float)((long)ppppppplStack_4b0[3] + 1)) goto LAB_08d98849;
  }
  pppppplVar25 = *ppppppplStack_4b0;
  ppppplVar40 = pppppplVar25[(long)pppppplVar16];
  if (ppppplVar40 == (long *****)0x0) {
    *ppppppplVar24 = ppppppplStack_4b0[2];
    ppppppplStack_4b0[2] = (long ******)ppppppplVar24;
    pppppplVar25[(long)pppppplVar16] = (long *****)(ppppppplStack_4b0 + 2);
    if (*ppppppplVar24 != (long ******)0x0) {
      pppppplVar16 = (long ******)(*ppppppplVar24)[1];
      if (((ulong)pppppplVar31 & (long)pppppplVar31 - 1U) == 0) {
        pppppplVar25[(ulong)pppppplVar16 & (long)pppppplVar31 - 1U] = (long *****)ppppppplVar24;
      }
      else {
        if (pppppplVar31 <= pppppplVar16) {
          if (((ulong)pppppplVar16 | (ulong)pppppplVar31) >> 0x20 == 0) {
            pppppplVar25[((ulong)pppppplVar16 & 0xffffffff) % ((ulong)pppppplVar31 & 0xffffffff)] =
                 (long *****)ppppppplVar24;
            goto LAB_08d98a39;
          }
          pppppplVar16 = (long ******)((ulong)pppppplVar16 % (ulong)pppppplVar31);
        }
        pppppplVar25[(long)pppppplVar16] = (long *****)ppppppplVar24;
      }
    }
  }
  else {
    *ppppppplVar24 = (long ******)*ppppplVar40;
    *ppppplVar40 = (long ****)ppppppplVar24;
  }
LAB_08d98a39:
  ppppppplStack_4b0[3] = (long ******)((long)ppppppplStack_4b0[3] + 1);
LAB_08d98a3d:
  plVar35 = plStack_4d8;
  if (plStack_4d8 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_4d8 + 1;
    lVar26 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
      func_0x0412c2d0(plVar35);
    }
  }
  plVar35 = plStack_1c0;
  auStack_4a8 = (undefined1  [8])0x0;
  ppppppplStack_4a0 = (long *******)0x0;
  ppppppplStack_498 = (long *******)0x0;
  _auStack_398 = (long *******)0x0;
  uStack_390 = (long *******)0x0;
  uStack_388 = (undefined8 *)0x0;
  uStack_380 = 0;
  uStack_378 = (long *)0x0;
  puStack_370 = (undefined4 *)0x0;
  auStack_368 = (undefined1  [8])0x0;
  ppppppplStack_360 = (long *******)0x0;
  ppppppplStack_358 = (long *******)0x0;
  plStack_350 = (long *)0x0;
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (ppppppplVar24 == (long *******)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    ppppppplVar24[1] = (long ******)0x0;
    ppppppplVar24[2] = (long ******)0x0;
    *ppppppplVar24 = (long ******)&UNK_0ef44ab0;
    ppppppplVar39 = ppppppplVar24 + 3;
    ppppppplVar24[3] = (long ******)0x0;
    ppppppplVar24[4] = (long ******)0x0;
    ppppppplVar24[5] = (long ******)0x0;
    ppppppplVar24[6] = (long ******)0x0;
    ppppppplVar24[7] = (long ******)0x0;
    ppppppplVar24[8] = (long ******)0x0;
    ppppppplVar24[9] = (long ******)0x0;
    *(undefined4 *)(ppppppplVar24 + 9) = 0x3f600000;
    func_0x048af7e0(ppppppplVar39,8);
    pppppplVar16 = ppppppplVar24[3];
    pppppplVar25 = ppppppplVar24[4];
    if (pppppplVar16 != pppppplVar25) {
      func_0x0eee2dd0(pppppplVar16,0xff,(long)pppppplVar25 - (long)pppppplVar16);
    }
    puVar17 = puStack_4b8;
    pppppplVar31 = ppppppplVar24[6];
    if ((long)ppppppplVar24[7] - (long)pppppplVar31 != 0) {
      uVar20 = ((long)ppppppplVar24[7] - (long)pppppplVar31 >> 3) * -0x5555555555555555;
      uVar41 = (int)((ulong)((long)pppppplVar25 - (long)pppppplVar16) >> 3) - 1;
      if (uVar20 < 2) {
        uVar20 = 1;
        ppppplVar40 = (long *****)0x0;
      }
      else {
        pppppplVar25 = pppppplVar31 + 4;
        ppppplVar40 = (long *****)0x0;
        do {
          ppppplVar5 = pppppplVar16[*(uint *)(pppppplVar25 + -3) & uVar41];
          pppppplVar16[*(uint *)(pppppplVar25 + -3) & uVar41] = ppppplVar40;
          pppppplVar25[-4] = ppppplVar5;
          ppppplVar5 = pppppplVar16[*(uint *)pppppplVar25 & uVar41];
          pppppplVar16[*(uint *)pppppplVar25 & uVar41] = (long *****)((long)ppppplVar40 + 1);
          pppppplVar25[-1] = ppppplVar5;
          ppppplVar40 = (long *****)((long)ppppplVar40 + 2);
          pppppplVar25 = pppppplVar25 + 6;
        } while (ppppplVar40 != (long *****)(uVar20 & 0xfffffffffffffffe));
      }
      if ((uVar20 & 1) != 0) {
        ppppplVar5 = pppppplVar16[uVar41 & *(uint *)(pppppplVar31 + (long)ppppplVar40 * 3 + 1)];
        pppppplVar16[uVar41 & *(uint *)(pppppplVar31 + (long)ppppplVar40 * 3 + 1)] = ppppplVar40;
        pppppplVar31[(long)ppppplVar40 * 3] = ppppplVar5;
      }
    }
    ppppppplVar1 = _DAT_0f54fd98;
    _DAT_0f54fd90 = (undefined1  [8])ppppppplVar39;
    if (_DAT_0f54fd98 == (long *******)0x0) {
      uStack_340 = 0;
      uStack_33c = 0;
    }
    else {
      LOCK();
      ppppppplVar39 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar39;
      _DAT_0f54fd98 = ppppppplVar24;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar1)[2])(ppppppplVar1);
        func_0x0412c2d0(ppppppplVar1);
      }
      uStack_340 = 0;
      uStack_33c = 0;
      ppppppplVar24 = _DAT_0f54fd98;
      ppppppplVar39 = (long *******)_DAT_0f54fd90;
      if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
        uStack_348 = (long *******)_DAT_0f54fd90;
        ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (ppppppplVar24 == (long *******)0x0) {
          func_0x0eec74c0(0x50,0);
        }
        ppppppplVar24[1] = (long ******)0x0;
        ppppppplVar24[2] = (long ******)0x0;
        *ppppppplVar24 = (long ******)&UNK_0ef44ab0;
        ppppppplVar39 = ppppppplVar24 + 3;
        ppppppplVar24[3] = (long ******)0x0;
        ppppppplVar24[4] = (long ******)0x0;
        ppppppplVar24[5] = (long ******)0x0;
        ppppppplVar24[6] = (long ******)0x0;
        ppppppplVar24[7] = (long ******)0x0;
        ppppppplVar24[8] = (long ******)0x0;
        ppppppplVar24[9] = (long ******)0x0;
        *(undefined4 *)(ppppppplVar24 + 9) = 0x3f600000;
        func_0x048af640(ppppppplVar39,8);
        ppppppplVar1 = _DAT_0f54fd98;
        _DAT_0f54fd90 = (undefined1  [8])ppppppplVar39;
        ppppppplVar39 = uStack_348;
        if (_DAT_0f54fd98 != (long *******)0x0) {
          LOCK();
          ppppppplVar43 = _DAT_0f54fd98 + 1;
          pppppplVar16 = *ppppppplVar43;
          _DAT_0f54fd98 = ppppppplVar24;
          *ppppppplVar43 = (long ******)((long)*ppppppplVar43 + -1);
          UNLOCK();
          ppppppplVar24 = _DAT_0f54fd98;
          if (pppppplVar16 == (long ******)0x0) {
            (*(code *)(*ppppppplVar1)[2])(ppppppplVar1);
            func_0x0412c2d0(ppppppplVar1);
            ppppppplVar24 = _DAT_0f54fd98;
            ppppppplVar39 = uStack_348;
          }
        }
      }
    }
  }
  else {
    uStack_340 = 0;
    uStack_33c = 0;
    puVar17 = puStack_4b8;
    ppppppplVar24 = _DAT_0f54fd98;
    ppppppplVar39 = (long *******)_DAT_0f54fd90;
  }
  _DAT_0f54fd98 = ppppppplVar24;
  uStack_338 = SUB84(_DAT_0f54fd90,0);
  uStack_334 = (undefined4)((ulong)_DAT_0f54fd90 >> 0x20);
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  puStack_2d0 = (undefined8 *)0x0;
  puStack_2c8 = (undefined8 *)0x0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  lStack_320 = 0;
  uStack_318 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  uStack_348 = ppppppplVar39;
  if (((ulong)auStack_368 & 1) == 0) {
    if (((ulong)auStack_4a8 & 1) == 0) {
      ppppppplStack_358 = ppppppplStack_498;
      auStack_368 = auStack_4a8;
      ppppppplStack_360 = ppppppplStack_4a0;
    }
    else {
      func_0x04885070(auStack_368,ppppppplStack_498,ppppppplStack_4a0);
    }
  }
  else {
    ppppppplVar39 = (long *******)((ulong)auStack_4a8 >> 1 & 0x7f);
    ppppppplVar24 = (long *******)(auStack_4a8 + 1);
    if (((ulong)auStack_4a8 & 1) != 0) {
      ppppppplVar39 = ppppppplStack_4a0;
      ppppppplVar24 = ppppppplStack_498;
    }
    func_0x04885120(auStack_368,ppppppplVar24,ppppppplVar39);
  }
  if (((ulong)auStack_4a8 & 1) != 0) {
    func_0x0412a280(ppppppplStack_498,(ulong)auStack_4a8 & 0xfffffffffffffffe);
  }
  pppppplVar16 = (long ******)plVar35[3];
  if ((long ******)0xfffffffffffffff7 < pppppplVar16) {
LAB_08d9c5c2:
    puStack_4c0 = (undefined8 *)func_0x04882e30();
    goto LAB_08d9c5c7;
  }
  lVar26 = plVar35[2];
  if (pppppplVar16 < (long ******)0x17) {
    uStack_1b0 = (long *******)CONCAT71(uStack_1b0._1_7_,(char)pppppplVar16 * '\x02');
    lVar33 = (long)&uStack_1b0 + 1;
    if (pppppplVar16 != (long ******)0x0) goto LAB_08d98d44;
  }
  else {
    uVar20 = ((ulong)pppppplVar16 | 7) + 1;
    if (((ulong)pppppplVar16 | 7) == 0x17) {
      uVar20 = 0x1a;
    }
    lVar33 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
    if (lVar33 == 0) {
      func_0x0eec74c0(uVar20,0);
    }
    uStack_1b0 = (long *******)(uVar20 | 1);
    pppppplStack_1a8 = pppppplVar16;
    lStack_1a0 = lVar33;
LAB_08d98d44:
    func_0x0eee2ee0(lVar33,lVar26,pppppplVar16);
  }
  *(undefined1 *)(lVar33 + (long)pppppplVar16) = 0;
  auStack_4d0 = (undefined1  [4])0x6d6f6316;
  uStack_4cc = 0x656e6f70;
  uStack_4c8 = 0x6449746e;
  uStack_4c4 = uStack_4c4 & 0xffffff00;
  if (((ulong)uStack_1b0 & 1) == 0) {
    lStack_1c8 = lStack_1a0;
    ppppppplStack_1d8 = uStack_1b0;
    pppppplStack_1d0 = pppppplStack_1a8;
  }
  else {
    func_0x0412e5e0(&ppppppplStack_1d8,lStack_1a0,pppppplStack_1a8);
  }
  uStack_488 = (long *)0x0;
  puStack_480 = (undefined1 *)0x0;
  ppppppplStack_498 = (long *******)0x0;
  uStack_490 = (long *******)0x0;
  auStack_4a8 = (undefined1  [8])0x0;
  ppppppplStack_4a0 = (long *******)0x0;
  uStack_478 = (long *******)0x0;
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (ppppppplVar24 == (long *******)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    ppppppplVar24[1] = (long ******)0x0;
    ppppppplVar24[2] = (long ******)0x0;
    *ppppppplVar24 = (long ******)&UNK_0ef44ab0;
    ppppppplVar39 = ppppppplVar24 + 3;
    ppppppplVar24[3] = (long ******)0x0;
    ppppppplVar24[4] = (long ******)0x0;
    ppppppplVar24[5] = (long ******)0x0;
    ppppppplVar24[6] = (long ******)0x0;
    ppppppplVar24[7] = (long ******)0x0;
    ppppppplVar24[8] = (long ******)0x0;
    ppppppplVar24[9] = (long ******)0x0;
    *(undefined4 *)(ppppppplVar24 + 9) = 0x3f600000;
    func_0x048af7e0(ppppppplVar39,8);
    pppppplVar16 = ppppppplVar24[3];
    pppppplVar25 = ppppppplVar24[4];
    if (pppppplVar16 != pppppplVar25) {
      func_0x0eee2dd0(pppppplVar16,0xff,(long)pppppplVar25 - (long)pppppplVar16);
    }
    pppppplVar31 = ppppppplVar24[6];
    if ((long)ppppppplVar24[7] - (long)pppppplVar31 != 0) {
      uVar20 = ((long)ppppppplVar24[7] - (long)pppppplVar31 >> 3) * -0x5555555555555555;
      uVar41 = (int)((ulong)((long)pppppplVar25 - (long)pppppplVar16) >> 3) - 1;
      if (uVar20 < 2) {
        uVar20 = 1;
        ppppplVar40 = (long *****)0x0;
      }
      else {
        pppppplVar25 = pppppplVar31 + 4;
        ppppplVar40 = (long *****)0x0;
        do {
          ppppplVar5 = pppppplVar16[*(uint *)(pppppplVar25 + -3) & uVar41];
          pppppplVar16[*(uint *)(pppppplVar25 + -3) & uVar41] = ppppplVar40;
          pppppplVar25[-4] = ppppplVar5;
          ppppplVar5 = pppppplVar16[*(uint *)pppppplVar25 & uVar41];
          pppppplVar16[*(uint *)pppppplVar25 & uVar41] = (long *****)((long)ppppplVar40 + 1);
          pppppplVar25[-1] = ppppplVar5;
          ppppplVar40 = (long *****)((long)ppppplVar40 + 2);
          pppppplVar25 = pppppplVar25 + 6;
        } while (ppppplVar40 != (long *****)(uVar20 & 0xfffffffffffffffe));
      }
      if ((uVar20 & 1) != 0) {
        ppppplVar5 = pppppplVar16[uVar41 & *(uint *)(pppppplVar31 + (long)ppppplVar40 * 3 + 1)];
        pppppplVar16[uVar41 & *(uint *)(pppppplVar31 + (long)ppppplVar40 * 3 + 1)] = ppppplVar40;
        pppppplVar31[(long)ppppplVar40 * 3] = ppppplVar5;
      }
    }
    ppppppplVar1 = _DAT_0f54fd98;
    _DAT_0f54fd90 = (undefined1  [8])ppppppplVar39;
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar39;
      _DAT_0f54fd98 = ppppppplVar24;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      ppppppplVar24 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar1)[2])(ppppppplVar1);
        func_0x0412c2d0(ppppppplVar1);
        ppppppplVar24 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = ppppppplVar24;
    uStack_470 = (long *******)_DAT_0f54fd90;
    puStack_468 = (undefined8 *)((ulong)puStack_468 & 0xffffffffffffff00);
    plStack_438 = (long *)0x0;
    if (((ulong)uStack_490 & 1) == 0) goto joined_r0x08d99181;
    bVar47 = ((uint)auStack_4d0 & 1) == 0;
    puVar18 = puStack_4c0;
    if (bVar47) {
      puVar18 = (undefined8 *)(auStack_4d0 + 1);
    }
    uVar20 = (ulong)(auStack_4d0[0] >> 1);
    if (!bVar47) {
      uVar20 = CONCAT44(uStack_4c4,uStack_4c8);
    }
    func_0x04885120(&uStack_490,puVar18,uVar20);
  }
  else {
    puStack_468 = (undefined8 *)((ulong)puStack_468 & 0xffffffffffffff00);
joined_r0x08d99181:
    uStack_470 = (long *******)_DAT_0f54fd90;
    if (((uint)auStack_4d0 & 1) == 0) {
      plStack_438 = (long *)0x0;
      uStack_490 = (long *******)CONCAT44(uStack_4cc,auStack_4d0);
      uStack_488 = (long *)CONCAT44(uStack_4c4,uStack_4c8);
      puStack_480 = (undefined1 *)puStack_4c0;
    }
    else {
      plStack_438 = (long *)0x0;
      func_0x04885070(&uStack_490,puStack_4c0,CONCAT44(uStack_4c4,uStack_4c8));
    }
  }
  ppppppplVar24 = _DAT_0f54fd98;
  if (_DAT_0f54fd90 == (undefined1  [8])0x0) {
    ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (ppppppplVar24 == (long *******)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    ppppppplVar24[1] = (long ******)0x0;
    ppppppplVar24[2] = (long ******)0x0;
    *ppppppplVar24 = (long ******)&UNK_0ef44ab0;
    ppppppplVar39 = ppppppplVar24 + 3;
    ppppppplVar24[3] = (long ******)0x0;
    ppppppplVar24[4] = (long ******)0x0;
    ppppppplVar24[5] = (long ******)0x0;
    ppppppplVar24[6] = (long ******)0x0;
    ppppppplVar24[7] = (long ******)0x0;
    ppppppplVar24[8] = (long ******)0x0;
    ppppppplVar24[9] = (long ******)0x0;
    *(undefined4 *)(ppppppplVar24 + 9) = 0x3f600000;
    func_0x048af7e0(ppppppplVar39,8);
    pppppplVar16 = ppppppplVar24[3];
    pppppplVar25 = ppppppplVar24[4];
    if (pppppplVar16 != pppppplVar25) {
      func_0x0eee2dd0(pppppplVar16,0xff,(long)pppppplVar25 - (long)pppppplVar16);
    }
    pppppplVar31 = ppppppplVar24[6];
    if ((long)ppppppplVar24[7] - (long)pppppplVar31 != 0) {
      uVar20 = ((long)ppppppplVar24[7] - (long)pppppplVar31 >> 3) * -0x5555555555555555;
      uVar41 = (int)((ulong)((long)pppppplVar25 - (long)pppppplVar16) >> 3) - 1;
      if (uVar20 < 2) {
        uVar20 = 1;
        ppppplVar40 = (long *****)0x0;
      }
      else {
        pppppplVar25 = pppppplVar31 + 4;
        ppppplVar40 = (long *****)0x0;
        do {
          ppppplVar5 = pppppplVar16[*(uint *)(pppppplVar25 + -3) & uVar41];
          pppppplVar16[*(uint *)(pppppplVar25 + -3) & uVar41] = ppppplVar40;
          pppppplVar25[-4] = ppppplVar5;
          ppppplVar5 = pppppplVar16[*(uint *)pppppplVar25 & uVar41];
          pppppplVar16[*(uint *)pppppplVar25 & uVar41] = (long *****)((long)ppppplVar40 + 1);
          pppppplVar25[-1] = ppppplVar5;
          ppppplVar40 = (long *****)((long)ppppplVar40 + 2);
          pppppplVar25 = pppppplVar25 + 6;
        } while (ppppplVar40 != (long *****)(uVar20 & 0xfffffffffffffffe));
      }
      if ((uVar20 & 1) != 0) {
        ppppplVar5 = pppppplVar16[uVar41 & *(uint *)(pppppplVar31 + (long)ppppplVar40 * 3 + 1)];
        pppppplVar16[uVar41 & *(uint *)(pppppplVar31 + (long)ppppplVar40 * 3 + 1)] = ppppplVar40;
        pppppplVar31[(long)ppppplVar40 * 3] = ppppplVar5;
      }
    }
    ppppppplVar1 = _DAT_0f54fd98;
    _DAT_0f54fd90 = (undefined1  [8])ppppppplVar39;
    if (_DAT_0f54fd98 != (long *******)0x0) {
      LOCK();
      ppppppplVar39 = _DAT_0f54fd98 + 1;
      pppppplVar16 = *ppppppplVar39;
      _DAT_0f54fd98 = ppppppplVar24;
      *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + -1);
      UNLOCK();
      ppppppplVar24 = _DAT_0f54fd98;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar1)[2])(ppppppplVar1);
        func_0x0412c2d0(ppppppplVar1);
        ppppppplVar24 = _DAT_0f54fd98;
      }
    }
  }
  _DAT_0f54fd98 = ppppppplVar24;
  ppppppplVar24 = (long *******)_DAT_0f54fd90;
  if (DAT_0f550ba8 == '\0') {
    iVar15 = func_0x04108328(&DAT_0f550ba8);
    if (iVar15 != 0) {
      func_0x048b2270(&DAT_0f550b28);
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f550b28,0xf53dab8);
      func_0x0410844d(&DAT_0f550ba8);
    }
  }
  lVar26 = lStack_1c8;
  plVar35 = puVar17 + 0x15;
  pppppplVar16 = *ppppppplVar24 +
                 ((int)((ulong)((long)ppppppplVar24[1] - (long)*ppppppplVar24) >> 3) - 1U &
                 *(uint *)(_DAT_0f550b28 + 4));
  do {
    ppppplVar40 = *pppppplVar16;
    if (ppppplVar40 == (long *****)0xffffffffffffffff) {
      uStack_478 = (long *******)&DAT_0f550b28;
      goto LAB_08d993e7;
    }
    pppppplVar16 = ppppppplVar24[3] + (long)ppppplVar40 * 3;
  } while (*(uint *)(ppppppplVar24[3] + (long)ppppplVar40 * 3 + 1) != *(uint *)(_DAT_0f550b28 + 4));
  uStack_478 = (long *******)&DAT_0f550b28;
  if (pppppplVar16 != ppppppplVar24[4]) {
    uStack_478 = (long *******)pppppplVar16[2];
  }
LAB_08d993e7:
  uStack_470 = ppppppplVar24;
  puStack_468 = (undefined8 *)CONCAT71(puStack_468._1_7_,1);
  uStack_58 = ppppppplStack_1d8;
  uStack_50 = pppppplStack_1d0;
  ppppppplStack_1d8 = (long *******)0x0;
  pppppplStack_1d0 = (long ******)0x0;
  lStack_1c8 = 0;
  plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar32 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar2 = plStack_438;
  *plVar32 = (long)&UNK_0f15ad40;
  *(undefined4 *)(plVar32 + 1) = (undefined4)uStack_58;
  *(undefined4 *)((long)plVar32 + 0xc) = uStack_58._4_4_;
  *(undefined4 *)(plVar32 + 2) = (undefined4)uStack_50;
  *(undefined4 *)((long)plVar32 + 0x14) = uStack_50._4_4_;
  plVar32[3] = lVar26;
  plStack_438 = (long *)0x0;
  if (plVar2 == (long *)&uStack_458) {
    lVar26 = 0x20;
LAB_08d99565:
    (**(code **)(*plVar2 + lVar26))();
    if (puStack_2d0 < puStack_2c8) goto LAB_08d994c3;
LAB_08d99589:
    plStack_438 = plVar32;
    puVar22 = (undefined8 *)func_0x065ac6d0(&uStack_2d8,auStack_4a8);
  }
  else {
    lVar26 = 0x28;
    if (plVar2 != (long *)0x0) goto LAB_08d99565;
    if (puStack_2c8 <= puStack_2d0) goto LAB_08d99589;
LAB_08d994c3:
    puVar22 = puStack_2d0;
    *puStack_2d0 = 0;
    puStack_2d0[1] = 0;
    puStack_2d0[2] = 0;
    *puStack_2d0 = auStack_4a8;
    puStack_2d0[1] = ppppppplStack_4a0;
    puStack_2d0[2] = ppppppplStack_498;
    auStack_4a8 = (undefined1  [8])0x0;
    ppppppplStack_4a0 = (long *******)0x0;
    ppppppplStack_498 = (long *******)0x0;
    puStack_2d0[5] = puStack_480;
    puStack_2d0[3] = uStack_490;
    puStack_2d0[4] = uStack_488;
    uStack_490 = (long *******)0x0;
    uStack_488 = (long *)0x0;
    puStack_480 = (undefined1 *)0x0;
    *(undefined1 *)(puStack_2d0 + 8) = puStack_468._0_1_;
    *(undefined4 *)(puStack_2d0 + 6) = (undefined4)uStack_478;
    *(undefined4 *)((long)puStack_2d0 + 0x34) = uStack_478._4_4_;
    *(undefined4 *)(puStack_2d0 + 7) = (undefined4)uStack_470;
    *(undefined4 *)((long)puStack_2d0 + 0x3c) = uStack_470._4_4_;
    if (plVar32 == (long *)0x0) {
      puStack_2d0[0xe] = 0;
      plStack_438 = plVar32;
    }
    else if (plVar32 == (long *)&uStack_458) {
      puStack_2d0[0xe] = puStack_2d0 + 10;
      plStack_438 = plVar32;
      (**(code **)(*plVar32 + 0x18))();
    }
    else {
      puStack_2d0[0xe] = plVar32;
      plStack_438 = (long *)0x0;
    }
    puVar22 = puVar22 + 0x10;
  }
  puStack_2d0 = puVar22;
  if (plStack_438 == (long *)&uStack_458) {
    lVar26 = 0x20;
LAB_08d99935:
    (**(code **)(*plStack_438 + lVar26))();
  }
  else {
    lVar26 = 0x28;
    if (plStack_438 != (long *)0x0) goto LAB_08d99935;
  }
  if (((ulong)uStack_490 & 1) != 0) {
    func_0x0412a280(puStack_480,(ulong)uStack_490 & 0xfffffffffffffffe);
  }
  auVar13 = auStack_4a8;
  ppppppplVar24 = ppppppplStack_4a0;
  if (auStack_4a8 != (undefined1  [8])0x0) {
    for (; auVar13 != (undefined1  [8])ppppppplVar24; ppppppplVar24 = ppppppplVar24 + -6) {
      if (((ulong)ppppppplVar24[-4] & 1) != 0) {
        func_0x0412a280(ppppppplVar24[-2],(ulong)ppppppplVar24[-4] & 0xfffffffffffffffe);
      }
    }
    ppppppplStack_4a0 = (long *******)auVar13;
    func_0x0412a280(auStack_4a8,(long)ppppppplStack_498 - (long)auStack_4a8);
  }
  if (((ulong)ppppppplStack_1d8 & 1) != 0) {
    func_0x0412a280(lStack_1c8,(ulong)ppppppplStack_1d8 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_4d0 & 1) != 0) {
    func_0x0412a280(puStack_4c0,CONCAT44(uStack_4cc,auStack_4d0) & 0xfffffffffffffffe);
  }
  auStack_4f8 = (undefined1  [4])_DAT_0f6426e8;
  uStack_4f4 = _DAT_0f6426ec;
  if ((_DAT_0f6426f0 & 1) == 0) {
    uStack_4e0 = _DAT_0f642700;
    bStack_4f0 = (byte)_DAT_0f6426f0;
    uStack_4ef = (undefined2)(_DAT_0f6426f0 >> 8);
    uStack_4ed = (undefined1)(_DAT_0f6426f0 >> 0x18);
    uStack_4ec = uRam000000000f6426f4;
    uStack_4e8 = (long *******)CONCAT44(uRam000000000f6426fc,_DAT_0f6426f8);
  }
  else {
    func_0x0412e5e0(&bStack_4f0,_DAT_0f642700,CONCAT44(uRam000000000f6426fc,_DAT_0f6426f8));
  }
  func_0x0730fa70(puVar22 + -0x10,auStack_4f8,0);
  if ((bStack_4f0 & 1) != 0) {
    func_0x0412a280(uStack_4e0,
                    CONCAT44(uStack_4ec,CONCAT13(uStack_4ed,CONCAT21(uStack_4ef,bStack_4f0))) &
                    0xfffffffffffffffe);
  }
  ppppppplVar24 = (long *******)CONCAT44(uStack_4cc,auStack_4d0);
  unaff_R14 = (long *******)puVar17[0x16];
  _auStack_4d0 = ppppppplVar24;
  plStack_4d8 = plVar35;
  if (unaff_R14 < (long *******)puVar17[0x17]) {
    *unaff_R14 = (long ******)0x0;
    unaff_R14[1] = (long ******)0x0;
    unaff_R14[2] = (long ******)0x0;
    puVar34 = (undefined4 *)puVar22[-0x10];
    puVar6 = (undefined4 *)puVar22[-0xf];
    auStack_4f8 = SUB84(unaff_R14,0);
    uStack_4f4 = (undefined2)((ulong)unaff_R14 >> 0x20);
    uStack_4f2 = (undefined2)((ulong)unaff_R14 >> 0x30);
    bStack_4f0 = 0;
    lVar26 = (long)puVar6 - (long)puVar34;
    if (lVar26 != 0) {
      if (0x555555555555555 < (ulong)((lVar26 >> 4) * -0x5555555555555555)) goto LAB_08d9c65f;
      ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar26);
      if (ppppppplVar24 == (long *******)0x0) {
        func_0x0eec74c0(lVar26,0);
      }
      *unaff_R14 = (long ******)ppppppplVar24;
      unaff_R14[1] = (long ******)ppppppplVar24;
      unaff_R14[2] = (long ******)(lVar26 + (long)ppppppplVar24);
      ppppppplStack_4a0 = (long *******)&ppppppplStack_1d8;
      ppppppplStack_498 = (long *******)auStack_4d0;
      uStack_490 = (long *******)((ulong)uStack_490 & 0xffffffffffffff00);
      auStack_4a8 = (undefined1  [8])unaff_R14;
      ppppppplStack_1d8 = ppppppplVar24;
      do {
        *(undefined4 *)ppppppplVar24 = *puVar34;
        *(undefined2 *)((long)ppppppplVar24 + 0xc) = *(undefined2 *)(puVar34 + 3);
        *(undefined4 *)(ppppppplVar24 + 1) = puVar34[2];
        _auStack_4d0 = ppppppplVar24;
        if ((*(byte *)(puVar34 + 4) & 1) == 0) {
          ppppppplVar24[4] = *(long *******)(puVar34 + 8);
          uVar8 = puVar34[5];
          uVar9 = puVar34[6];
          uVar10 = puVar34[7];
          *(undefined4 *)(ppppppplVar24 + 2) = puVar34[4];
          *(undefined4 *)((long)ppppppplVar24 + 0x14) = uVar8;
          *(undefined4 *)(ppppppplVar24 + 3) = uVar9;
          *(undefined4 *)((long)ppppppplVar24 + 0x1c) = uVar10;
        }
        else {
          func_0x0412e5e0(ppppppplVar24 + 2,*(undefined8 *)(puVar34 + 8),
                          *(undefined8 *)(puVar34 + 6));
        }
        *(undefined4 *)(ppppppplVar24 + 5) = puVar34[10];
        puVar34 = puVar34 + 0xc;
        ppppppplVar24 = _auStack_4d0 + 6;
      } while (puVar34 != puVar6);
      unaff_R14[1] = (long ******)ppppppplVar24;
    }
    puVar18 = puStack_4b8;
    _auStack_4d0 = ppppppplVar24;
    if ((*(byte *)(puVar22 + -0xd) & 1) == 0) {
      unaff_R14[5] = (long ******)puVar22[-0xb];
      pppppplVar16 = (long ******)puVar22[-0xc];
      unaff_R14[3] = (long ******)puVar22[-0xd];
      unaff_R14[4] = pppppplVar16;
    }
    else {
      func_0x0412e5e0(unaff_R14 + 3,puVar22[-0xb],puVar22[-0xc]);
    }
    plVar35 = plStack_1c0;
    *(undefined1 *)(unaff_R14 + 8) = *(undefined1 *)(puVar22 + -8);
    uVar8 = *(undefined4 *)((long)puVar22 + -0x4c);
    uVar9 = *(undefined4 *)(puVar22 + -9);
    uVar10 = *(undefined4 *)((long)puVar22 + -0x44);
    *(undefined4 *)(unaff_R14 + 6) = *(undefined4 *)(puVar22 + -10);
    *(undefined4 *)((long)unaff_R14 + 0x34) = uVar8;
    *(undefined4 *)(unaff_R14 + 7) = uVar9;
    *(undefined4 *)((long)unaff_R14 + 0x3c) = uVar10;
    plVar32 = (long *)puVar22[-2];
    if (plVar32 == (long *)0x0) {
      unaff_R14[0xe] = (long ******)0x0;
    }
    else if (plVar32 == puVar22 + -6) {
      unaff_R14[0xe] = (long ******)(unaff_R14 + 10);
      (**(code **)(*(long *)puVar22[-2] + 0x18))();
    }
    else {
      pppppplVar16 = (long ******)(**(code **)(*plVar32 + 0x10))();
      unaff_R14[0xe] = pppppplVar16;
    }
    unaff_R14 = unaff_R14 + 0x10;
    puVar18[0x16] = unaff_R14;
LAB_08d99e51:
    plVar32 = plStack_4d8;
    puVar18[0x16] = unaff_R14;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    puVar17 = *(undefined8 **)(lStack_1e8 + 0x78);
    if (puVar17 < *(undefined8 **)(lStack_1e8 + 0x80)) {
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar17[2] = 0;
      uVar19 = puVar18[1];
      *puVar17 = *puVar18;
      puVar17[1] = uVar19;
      puVar17[2] = puVar18[2];
      *puVar18 = 0;
      puVar18[1] = 0;
      puVar18[2] = 0;
      puVar17[5] = puVar18[5];
      uVar19 = puVar18[4];
      puVar17[3] = puVar18[3];
      puVar17[4] = uVar19;
      puVar18[3] = 0;
      puVar18[4] = 0;
      puVar18[5] = 0;
      uVar19 = puVar18[7];
      uVar8 = *(undefined4 *)(puVar18 + 8);
      uVar9 = *(undefined4 *)((long)puVar18 + 0x44);
      uVar10 = *(undefined4 *)(puVar18 + 9);
      uVar11 = *(undefined4 *)((long)puVar18 + 0x4c);
      puVar17[6] = puVar18[6];
      puVar17[7] = uVar19;
      *(undefined4 *)(puVar17 + 8) = uVar8;
      *(undefined4 *)((long)puVar17 + 0x44) = uVar9;
      *(undefined4 *)(puVar17 + 9) = uVar10;
      *(undefined4 *)((long)puVar17 + 0x4c) = uVar11;
      puVar17[10] = 0;
      puVar17[0xb] = 0;
      puVar17[0xc] = 0;
      uVar19 = puVar18[0xb];
      puVar17[10] = puVar18[10];
      puVar17[0xb] = uVar19;
      puVar17[0xc] = puVar18[0xc];
      puVar18[10] = 0;
      puVar18[0xb] = 0;
      puVar18[0xc] = 0;
      uVar19 = puVar18[0xe];
      puVar17[0xd] = puVar18[0xd];
      puVar17[0xe] = uVar19;
      puVar18[0xd] = 0;
      puVar18[0xe] = 0;
      puVar17[0xf] = 0;
      puVar17[0x10] = 0;
      puVar17[0x11] = 0;
      uVar19 = puVar18[0x10];
      puVar17[0xf] = puVar18[0xf];
      puVar17[0x10] = uVar19;
      puVar17[0x11] = puVar18[0x11];
      puVar18[0xf] = 0;
      puVar18[0x10] = 0;
      puVar18[0x11] = 0;
      puVar17[0x12] = 0;
      puVar17[0x13] = 0;
      puVar17[0x14] = 0;
      uVar19 = puVar18[0x13];
      puVar17[0x12] = puVar18[0x12];
      puVar17[0x13] = uVar19;
      puVar17[0x14] = puVar18[0x14];
      puVar18[0x12] = 0;
      puVar18[0x13] = 0;
      puVar18[0x14] = 0;
      puVar17[0x15] = 0;
      puVar17[0x16] = 0;
      puVar17[0x17] = 0;
      uVar19 = puVar18[0x16];
      puVar17[0x15] = puVar18[0x15];
      puVar17[0x16] = uVar19;
      puVar17[0x17] = puVar18[0x17];
      *plVar32 = 0;
      plVar32[1] = 0;
      plVar32[2] = 0;
      puVar17[0x18] = 0;
      puVar17[0x19] = 0;
      puVar17[0x1a] = 0;
      uVar19 = puVar18[0x19];
      puVar17[0x18] = puVar18[0x18];
      puVar17[0x19] = uVar19;
      puVar17[0x1a] = puVar18[0x1a];
      puVar18[0x18] = 0;
      puVar18[0x19] = 0;
      puVar18[0x1a] = 0;
      puVar17[0x1b] = 0;
      puVar17[0x1c] = 0;
      puVar17[0x1d] = 0;
      uVar8 = *(undefined4 *)((long)puVar18 + 0xdc);
      uVar9 = *(undefined4 *)(puVar18 + 0x1c);
      uVar10 = *(undefined4 *)((long)puVar18 + 0xe4);
      *(undefined4 *)(puVar17 + 0x1b) = *(undefined4 *)(puVar18 + 0x1b);
      *(undefined4 *)((long)puVar17 + 0xdc) = uVar8;
      *(undefined4 *)(puVar17 + 0x1c) = uVar9;
      *(undefined4 *)((long)puVar17 + 0xe4) = uVar10;
      puVar17[0x1d] = puVar18[0x1d];
      puVar18[0x1b] = 0;
      puVar18[0x1c] = 0;
      puVar18[0x1d] = 0;
      puVar17 = puVar17 + 0x1e;
    }
    else {
      puVar17 = (undefined8 *)func_0x0d85e840(lStack_48,puVar18);
    }
    *(undefined8 **)(lStack_1e8 + 0x78) = puVar17;
    func_0x0651ffe0(&uStack_380);
    ppppppplVar24 = _auStack_398;
    ppppppplVar39 = uStack_390;
    if (_auStack_398 != (long *******)0x0) {
      while (unaff_R14 = ppppppplVar39, ppppppplVar24 != unaff_R14) {
        if (((ulong)unaff_R14[-4] & 1) != 0) {
          func_0x0412a280(unaff_R14[-2],(ulong)unaff_R14[-4] & 0xfffffffffffffffe);
        }
        ppppppplVar39 = unaff_R14 + -6;
      }
      uStack_390 = ppppppplVar24;
      func_0x0412a280(_auStack_398,(long)uStack_388 - (long)_auStack_398);
    }
    if (((char)uStack_118 == '\x01') && (((ulong)uStack_138 & 1) != 0)) {
      func_0x0412a280(ppppppplStack_128,(ulong)uStack_138 & 0xfffffffffffffffe);
    }
    puVar18 = puVar18 + 0x1e;
    puVar17 = puStack_198;
    if (puVar18 == puStack_40) goto joined_r0x08d9a29b;
    goto LAB_08d97ec5;
  }
  unaff_R14 = (long *******)((long)unaff_R14 - *plVar35);
  uVar20 = ((long)unaff_R14 >> 7) + 1;
  if (uVar20 < 0x200000000000000) {
    uVar36 = (long)puVar17[0x17] - *plVar35;
    uVar29 = (long)uVar36 >> 6;
    if (uVar29 <= uVar20) {
      uVar29 = uVar20;
    }
    if (0x7fffffffffffff7f < uVar36) {
      uVar29 = 0x1ffffffffffffff;
    }
    uStack_488 = plVar35;
    if (uVar29 == 0) {
      ppppppplVar24 = (long *******)0x0;
    }
    else {
      if (0x1ffffffffffffff < uVar29) goto LAB_08d9c65a;
      ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 << 7);
      if (ppppppplVar24 == (long *******)0x0) {
        func_0x0eec74c0(uVar29 << 7,0);
        ppppppplVar24 = (long *******)0x0;
      }
    }
    ppppppplVar39 = (long *******)((long)ppppppplVar24 + (long)unaff_R14);
    uStack_490 = ppppppplVar24 + uVar29 * 0x10;
    *(undefined8 *)((long)ppppppplVar24 + (long)unaff_R14) = 0;
    ((undefined8 *)((long)ppppppplVar24 + (long)unaff_R14))[1] = 0;
    *(undefined8 *)((long)(ppppppplVar24 + 2) + (long)unaff_R14) = 0;
    puVar34 = (undefined4 *)puVar22[-0x10];
    puVar6 = (undefined4 *)puVar22[-0xf];
    auStack_4d0 = SUB84(ppppppplVar39,0);
    auVar12 = auStack_4d0;
    uStack_4c8 = uStack_4c8 & 0xffffff00;
    lVar26 = (long)puVar6 - (long)puVar34;
    auStack_4a8 = (undefined1  [8])ppppppplVar24;
    ppppppplStack_4a0 = ppppppplVar39;
    ppppppplStack_498 = ppppppplVar39;
    _auStack_4d0 = ppppppplVar39;
    if (lVar26 != 0) {
      if (0x555555555555555 < (ulong)((lVar26 >> 4) * -0x5555555555555555)) goto LAB_08d9c664;
      ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar26);
      if (ppppppplVar24 == (long *******)0x0) {
        func_0x0eec74c0(lVar26,0);
      }
      *ppppppplVar39 = (long ******)ppppppplVar24;
      ppppppplVar39[1] = (long ******)ppppppplVar24;
      ppppppplVar39[2] = (long ******)(lVar26 + (long)ppppppplVar24);
      uStack_4f4 = (undefined2)((ulong)ppppppplVar39 >> 0x20);
      uStack_4f2 = (undefined2)((ulong)ppppppplVar39 >> 0x30);
      bStack_4f0 = (byte)&ppppppplStack_1b8;
      uStack_4ef = (undefined2)((ulong)&ppppppplStack_1b8 >> 8);
      uStack_4ed = (undefined1)((ulong)&ppppppplStack_1b8 >> 0x18);
      uStack_4ec = (undefined4)((ulong)&ppppppplStack_1b8 >> 0x20);
      uStack_4e8 = (long *******)&ppppppplStack_1d8;
      uStack_4e0 = uStack_4e0 & 0xffffffffffffff00;
      auStack_4f8 = auVar12;
      ppppppplStack_1b8 = ppppppplVar24;
      do {
        *(undefined4 *)ppppppplVar24 = *puVar34;
        *(undefined2 *)((long)ppppppplVar24 + 0xc) = *(undefined2 *)(puVar34 + 3);
        *(undefined4 *)(ppppppplVar24 + 1) = puVar34[2];
        ppppppplStack_1d8 = ppppppplVar24;
        if ((*(byte *)(puVar34 + 4) & 1) == 0) {
          ppppppplVar24[4] = *(long *******)(puVar34 + 8);
          uVar8 = puVar34[5];
          uVar9 = puVar34[6];
          uVar10 = puVar34[7];
          *(undefined4 *)(ppppppplVar24 + 2) = puVar34[4];
          *(undefined4 *)((long)ppppppplVar24 + 0x14) = uVar8;
          *(undefined4 *)(ppppppplVar24 + 3) = uVar9;
          *(undefined4 *)((long)ppppppplVar24 + 0x1c) = uVar10;
        }
        else {
          func_0x0412e5e0(ppppppplVar24 + 2,*(undefined8 *)(puVar34 + 8),
                          *(undefined8 *)(puVar34 + 6));
        }
        *(undefined4 *)(ppppppplVar24 + 5) = puVar34[10];
        puVar34 = puVar34 + 0xc;
        ppppppplVar24 = ppppppplStack_1d8 + 6;
      } while (puVar34 != puVar6);
      ppppppplVar39[1] = (long ******)ppppppplVar24;
      ppppppplStack_1d8 = ppppppplVar24;
    }
    if ((*(byte *)(puVar22 + -0xd) & 1) == 0) {
      ppppppplVar39[5] = (long ******)puVar22[-0xb];
      pppppplVar16 = (long ******)puVar22[-0xc];
      ppppppplVar39[3] = (long ******)puVar22[-0xd];
      ppppppplVar39[4] = pppppplVar16;
    }
    else {
      func_0x0412e5e0(ppppppplVar39 + 3,puVar22[-0xb],puVar22[-0xc]);
    }
    puVar17 = puStack_4b8;
    *(undefined1 *)(ppppppplVar39 + 8) = *(undefined1 *)(puVar22 + -8);
    uVar8 = *(undefined4 *)((long)puVar22 + -0x4c);
    uVar9 = *(undefined4 *)(puVar22 + -9);
    uVar10 = *(undefined4 *)((long)puVar22 + -0x44);
    *(undefined4 *)(ppppppplVar39 + 6) = *(undefined4 *)(puVar22 + -10);
    *(undefined4 *)((long)ppppppplVar39 + 0x34) = uVar8;
    *(undefined4 *)(ppppppplVar39 + 7) = uVar9;
    *(undefined4 *)((long)ppppppplVar39 + 0x3c) = uVar10;
    plVar35 = (long *)puVar22[-2];
    if (plVar35 == (long *)0x0) {
      ppppppplVar39[0xe] = (long ******)0x0;
    }
    else if (plVar35 == puVar22 + -6) {
      ppppppplVar39[0xe] = (long ******)(ppppppplVar39 + 10);
      (**(code **)(*(long *)puVar22[-2] + 0x18))();
    }
    else {
      pppppplVar16 = (long ******)(**(code **)(*plVar35 + 0x10))();
      ppppppplVar39[0xe] = pppppplVar16;
    }
    ppppppplVar1 = ppppppplStack_4a0;
    ppppppplStack_498 = ppppppplStack_498 + 0x10;
    ppppppplVar24 = (long *******)puVar17[0x15];
    ppppppplVar39 = (long *******)puVar17[0x16];
    lVar26 = (long)ppppppplVar39 - (long)ppppppplVar24;
    unaff_R14 = ppppppplStack_498;
    if (lVar26 != 0) {
      ppppppplVar44 = ppppppplStack_4a0 + (lVar26 >> 7) * -0x10 + 10;
      ppppppplVar43 = ppppppplVar24;
      do {
        ppppppplVar44[-10] = (long ******)0x0;
        ppppppplVar44[-9] = (long ******)0x0;
        ppppppplVar44[-8] = (long ******)0x0;
        pppppplVar16 = ppppppplVar43[1];
        ppppppplVar44[-10] = *ppppppplVar43;
        ppppppplVar44[-9] = pppppplVar16;
        ppppppplVar44[-8] = ppppppplVar43[2];
        *ppppppplVar43 = (long ******)0x0;
        ppppppplVar43[1] = (long ******)0x0;
        ppppppplVar43[2] = (long ******)0x0;
        ppppppplVar44[-5] = ppppppplVar43[5];
        pppppplVar16 = ppppppplVar43[4];
        ppppppplVar44[-7] = ppppppplVar43[3];
        ppppppplVar44[-6] = pppppplVar16;
        ppppppplVar43[3] = (long ******)0x0;
        ppppppplVar43[4] = (long ******)0x0;
        ppppppplVar43[5] = (long ******)0x0;
        *(undefined1 *)(ppppppplVar44 + -2) = *(undefined1 *)(ppppppplVar43 + 8);
        uVar8 = *(undefined4 *)((long)ppppppplVar43 + 0x34);
        uVar9 = *(undefined4 *)(ppppppplVar43 + 7);
        uVar10 = *(undefined4 *)((long)ppppppplVar43 + 0x3c);
        *(undefined4 *)(ppppppplVar44 + -4) = *(undefined4 *)(ppppppplVar43 + 6);
        *(undefined4 *)((long)ppppppplVar44 + -0x1c) = uVar8;
        *(undefined4 *)(ppppppplVar44 + -3) = uVar9;
        *(undefined4 *)((long)ppppppplVar44 + -0x14) = uVar10;
        ppppppplVar7 = (long *******)ppppppplVar43[0xe];
        if (ppppppplVar7 == (long *******)0x0) {
          ppppppplVar44[4] = (long ******)0x0;
        }
        else if (ppppppplVar43 + 10 == ppppppplVar7) {
          ppppppplVar44[4] = (long ******)ppppppplVar44;
          (*(code *)(*ppppppplVar43[0xe])[3])(ppppppplVar43[0xe],ppppppplVar44);
        }
        else {
          ppppppplVar44[4] = (long ******)ppppppplVar7;
          ppppppplVar43[0xe] = (long ******)0x0;
        }
        ppppppplVar43 = ppppppplVar43 + 0x10;
        ppppppplVar44 = ppppppplVar44 + 0x10;
      } while (ppppppplVar43 != ppppppplVar39);
      do {
        ppppppplVar43 = (long *******)ppppppplVar24[0xe];
        if (ppppppplVar43 == ppppppplVar24 + 10) {
          lVar33 = 0x20;
LAB_08d99dd5:
          (**(code **)((long)*ppppppplVar43 + lVar33))();
          bVar3 = *(byte *)(ppppppplVar24 + 3);
        }
        else {
          lVar33 = 0x28;
          if (ppppppplVar43 != (long *******)0x0) goto LAB_08d99dd5;
          bVar3 = *(byte *)(ppppppplVar24 + 3);
        }
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(ppppppplVar24[5],(ulong)ppppppplVar24[3] & 0xfffffffffffffffe);
        }
        pppppplVar16 = *ppppppplVar24;
        if (pppppplVar16 != (long ******)0x0) {
          pppppplVar25 = ppppppplVar24[1];
          pppppplVar31 = pppppplVar16;
          if (pppppplVar16 != pppppplVar25) {
            do {
              if (((ulong)pppppplVar25[-4] & 1) != 0) {
                func_0x0412a280(pppppplVar25[-2],(ulong)pppppplVar25[-4] & 0xfffffffffffffffe);
              }
              pppppplVar25 = pppppplVar25 + -6;
            } while (pppppplVar25 != pppppplVar16);
            pppppplVar31 = *ppppppplVar24;
          }
          ppppppplVar24[1] = pppppplVar16;
          func_0x0412a280(pppppplVar31,(long)ppppppplVar24[2] - (long)pppppplVar31);
        }
        ppppppplVar24 = ppppppplVar24 + 0x10;
      } while (ppppppplVar24 != ppppppplVar39);
      ppppppplVar24 = (long *******)*plStack_4d8;
      unaff_R14 = ppppppplStack_498;
    }
    plVar35 = plStack_1c0;
    puVar18 = puStack_4b8;
    puStack_4b8[0x15] = (long)ppppppplVar1 - lVar26;
    puStack_4b8[0x16] = unaff_R14;
    lVar26 = puStack_4b8[0x17];
    puStack_4b8[0x17] = uStack_490;
    ppppppplStack_4a0 = ppppppplVar24;
    ppppppplStack_498 = ppppppplVar24;
    if (ppppppplVar24 != (long *******)0x0) {
      func_0x0412a280(ppppppplVar24,lVar26 - (long)ppppppplVar24);
    }
    goto LAB_08d99e51;
  }
  func_0x065acad0();
LAB_08d9c655:
  func_0x04882e30();
LAB_08d9c65a:
  func_0x04882eb0();
LAB_08d9c65f:
  func_0x0652b440();
  ppppppplVar39 = _auStack_4d0;
LAB_08d9c664:
  _auStack_4d0 = ppppppplVar39;
  func_0x0652b440();
LAB_08d9c669:
  func_0x0eec74c0(0x50,0);
  goto LAB_08d96590;
}



/* ---- referenced strings ----
 * 0x11a552c  customComponentParameters
 * 0x11a5535  ponentParameters
 * 0x1293309  BlockLiquidContainerComponent
 * 0x1293316  ntainerComponent
 * 0x12ab54d  BlockCustomComponentInstance
 * 0x12ab559  omponentInstance
 * 0x14809e6  BlockInventoryComponentContainer
 * 0x14809f6  mponentContainer
 */
