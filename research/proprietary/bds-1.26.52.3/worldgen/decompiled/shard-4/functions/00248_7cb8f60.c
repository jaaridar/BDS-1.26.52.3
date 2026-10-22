/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7db8f60 (ELF vaddr 0x7cb8f60)
 * Label: caller-of-callee
 * Body:  [[07db8f60, 07dba468] [07dba470, 07dba8a2]]
 * Ghidra: FUN_07db8f60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07db8f60(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined4 auStack_3f0 [2];
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined1 *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  char cStack_288;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  long lStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined1 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  char cStack_108;
  undefined7 uStack_107;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x07dbabd0();
  if ((DAT_0f5bede8 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5bede8), iVar5 != 0)) {
    func_0x07e95070();
    func_0x0410844d(&DAT_0f5bede8);
  }
  uVar14 = _DAT_0f5bede0;
  lVar11 = _DAT_0f5bedd8;
  if ((DAT_0f5bedc8 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5bedc8), iVar5 != 0)) {
    func_0x07e93cf0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5bed48,0xf53dab8);
    func_0x0410844d(&DAT_0f5bedc8);
  }
  lVar9 = param_1 + 0x18;
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5bed48 + 4)) * 8);
  do {
    lVar13 = *plVar8;
    if (lVar13 == -1) goto LAB_07db9002;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5bed48 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_07db9002:
    puVar7 = &DAT_0f5bed48;
    iVar5 = iRam000000000f5beda8;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    iVar5 = *(int *)(puVar7 + 0x60);
  }
  if ((iVar5 == -0x2b3da790) && (lVar13 = *(long *)(puVar7 + 0x68), lVar13 != 0)) {
    bVar15 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar11 = lVar13 + 9;
    if (bVar15) {
      lVar11 = *(long *)(lVar13 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar13 + 0x10);
    }
  }
  func_0x07e94500(&uStack_2b8,param_1,lVar11,uVar14);
  if (cStack_288 == '\0') {
    func_0x07e950f0(&lStack_388,&uStack_2b8,&UNK_012a7470,2,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0c2a88;
    if (plStack_370 != (long *)0x0) {
      lVar11 = *plStack_370;
      plStack_370 = plVar8;
      (**(code **)(lVar11 + 8))();
      plVar8 = plStack_370;
    }
    plStack_370 = plVar8;
    auStack_3f0[0] = (undefined4)uStack_378;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 1;
    uStack_3d0 = 0;
    uStack_3c8 = &UNK_0729f0a0;
    puStack_3c0 = &SUB_048b06d0;
    puStack_3b8 = &SUB_0651e820;
    puStack_3b0 = &UNK_07e956b0;
    puStack_3a8 = &UNK_07e95810;
    uStack_3a0 = 0;
    uStack_398 = 0;
    plStack_390 = (long *)0x0;
    func_0x048b05a0(plStack_380,auStack_3f0);
    plVar8 = plStack_390;
    if (plStack_390 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_390 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_390 + 0x10))(plStack_390);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07e953b0(&lStack_388);
    cStack_108 = cStack_288;
    uStack_118 = uStack_298;
    uStack_114 = uStack_294;
    iStack_110 = iStack_290;
    uStack_10c = uStack_28c;
    uStack_128 = uStack_2a8;
    uStack_124 = uStack_2a4;
    uStack_120 = uStack_2a0;
    uStack_11c = uStack_29c;
    uStack_138 = uStack_2b8;
    uStack_134 = uStack_2b4;
    uStack_130 = uStack_2b0;
    uStack_12c = uStack_2ac;
    func_0x048b0bc0(&plStack_370);
    uStack_178 = uStack_138;
    uStack_174 = uStack_134;
    uStack_170 = uStack_130;
    uStack_16c = uStack_12c;
    uStack_168 = uStack_128;
    uStack_164 = uStack_124;
    uStack_160 = uStack_120;
    uStack_15c = uStack_11c;
    uStack_158 = uStack_118;
    uStack_154 = uStack_114;
    iStack_150 = iStack_110;
    uStack_14c = uStack_10c;
    uStack_148 = CONCAT71(uStack_107,cStack_108);
    func_0x07e950f0(&lStack_388,&uStack_178,&UNK_011bda6d,10,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0c2800;
    if (plStack_370 != (long *)0x0) {
      lVar11 = *plStack_370;
      plStack_370 = plVar8;
      (**(code **)(lVar11 + 8))();
      plVar8 = plStack_370;
    }
    plStack_370 = plVar8;
    auStack_3f0[0] = (undefined4)uStack_378;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 1;
    uStack_3d0 = 0;
    uStack_3c8 = &UNK_072a5d20;
    puStack_3c0 = &SUB_048b06d0;
    puStack_3b8 = &UNK_0651ed40;
    puStack_3b0 = &UNK_07e959e0;
    puStack_3a8 = &UNK_07e95b40;
    uStack_3a0 = 0;
    uStack_398 = 0;
    plStack_390 = (long *)0x0;
    func_0x048b05a0(plStack_380,auStack_3f0);
    plVar8 = plStack_390;
    if (plStack_390 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_390 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_390 + 0x10))(plStack_390);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07e953b0(&lStack_388);
    uStack_c8 = (undefined1)uStack_148;
    uStack_d8 = uStack_158;
    uStack_d4 = uStack_154;
    iStack_d0 = iStack_150;
    uStack_cc = uStack_14c;
    uStack_e8 = uStack_168;
    uStack_e4 = uStack_164;
    uStack_e0 = uStack_160;
    uStack_dc = uStack_15c;
    uStack_f8 = uStack_178;
    uStack_f4 = uStack_174;
    uStack_f0 = uStack_170;
    uStack_ec = uStack_16c;
    func_0x048b0bc0(&plStack_370);
    uStack_1b8 = uStack_f8;
    uStack_1b4 = uStack_f4;
    uStack_1b0 = uStack_f0;
    uStack_1ac = uStack_ec;
    uStack_1a8 = uStack_e8;
    uStack_1a4 = uStack_e4;
    uStack_1a0 = uStack_e0;
    uStack_19c = uStack_dc;
    uStack_198 = uStack_d8;
    uStack_194 = uStack_d4;
    iStack_190 = iStack_d0;
    uStack_18c = uStack_cc;
    uStack_188 = CONCAT71(uStack_c7,uStack_c8);
    func_0x07e950f0(&lStack_388,&uStack_1b8,&UNK_013fe302,9,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012080;
    if (plStack_370 != (long *)0x0) {
      lVar11 = *plStack_370;
      plStack_370 = plVar8;
      (**(code **)(lVar11 + 8))();
      plVar8 = plStack_370;
    }
    plStack_370 = plVar8;
    auStack_3f0[0] = (undefined4)uStack_378;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 1;
    uStack_3d0 = 0;
    uStack_3c8 = &UNK_05dd3ca0;
    puStack_3c0 = &SUB_048b06d0;
    puStack_3b8 = &UNK_05dd3990;
    puStack_3b0 = &UNK_07e95d20;
    puStack_3a8 = &UNK_07e95e80;
    uStack_3a0 = 0;
    uStack_398 = 0;
    plStack_390 = (long *)0x0;
    func_0x048b05a0(plStack_380,auStack_3f0);
    plVar8 = plStack_390;
    if (plStack_390 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_390 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_390 + 0x10))(plStack_390);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07e953b0(&lStack_388);
    uVar2 = uStack_18c;
    iVar5 = iStack_190;
    lVar11 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_b8 = CONCAT44(uStack_1ac,uStack_1b0);
    uStack_b0 = CONCAT44(uStack_1a4,uStack_1a8);
    uStack_a8 = uStack_1a0;
    uStack_a4 = uStack_19c;
    uStack_a0 = uStack_198;
    uStack_9c = uStack_194;
    uVar3 = (undefined1)uStack_188;
    lStack_278 = lVar9;
    lStack_270 = param_1;
    func_0x048b0bc0(&plStack_370);
    if (iVar5 == 4) {
      if ((DAT_0f5bedc8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f5bedc8), iVar6 != 0)) {
        func_0x07e93cf0();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5bed48,0xf53dab8);
        func_0x0410844d(&DAT_0f5bedc8);
      }
      plVar8 = (long *)(*(long *)(lVar11 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f5bed48 + 4)) * 8);
      do {
        lVar9 = *plVar8;
        if (lVar9 == -1) goto LAB_07db965c;
        plVar8 = (long *)(*(long *)(lVar11 + 0x30) + lVar9 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar9 * 0x18) !=
               *(uint *)(_DAT_0f5bed48 + 4));
      if (plVar8 == *(long **)(lVar11 + 0x38)) {
LAB_07db965c:
        puVar7 = &DAT_0f5bed48;
      }
      else {
        puVar7 = (undefined *)plVar8[2];
      }
      lVar9 = func_0x048b1040(lVar11 + 0x18,puVar7,uVar2,1);
      if (lVar9 == 0) {
        lStack_388 = 0;
        plStack_380 = (long *)0x0;
        func_0x048b10d0(&lStack_388);
        lVar13 = *(long *)(lStack_388 + 0x38);
        lVar9 = lStack_388;
        if (lVar13 == 0) goto LAB_07dba446;
LAB_07dba462:
        do {
          lVar9 = lVar13;
          lVar13 = *(long *)(lVar9 + 0x38);
          if (*(long *)(lVar9 + 0x38) == 0) {
            lStack_388 = 0;
            plStack_380 = (long *)0x0;
            func_0x048b10d0(&lStack_388);
            lVar13 = lStack_388;
          }
        } while (lVar13 != 0);
      }
      else {
        lVar13 = *(long *)(lVar9 + 0x38);
        if (*(long *)(lVar9 + 0x38) != 0) goto LAB_07dba462;
LAB_07dba446:
        lStack_388 = 0;
        plStack_380 = (long *)0x0;
        func_0x048b10d0(&lStack_388);
        lVar13 = lStack_388;
        if (lStack_388 != 0) goto LAB_07dba462;
      }
      lVar9 = *(long *)(lVar9 + 0x48);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puVar10[1] = 0xffffffffffffffff;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0xff;
      *puVar10 = &UNK_0f0edce8;
      *(undefined8 *)((long)puVar10 + 0x1c) = 0x7fff00000000;
      *(undefined8 *)((long)puVar10 + 0x24) = 0;
      plVar8 = *(long **)(lVar9 + 8);
      *(undefined8 **)(lVar9 + 8) = puVar10;
joined_r0x07dba503:
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x28))();
      }
    }
    else if (iVar5 == 1) {
      if ((DAT_0f5bedc8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f5bedc8), iVar6 != 0)) {
        func_0x07e93cf0();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5bed48,0xf53dab8);
        func_0x0410844d(&DAT_0f5bedc8);
      }
      plVar8 = (long *)(*(long *)(lVar11 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f5bed48 + 4)) * 8);
      do {
        lVar9 = *plVar8;
        if (lVar9 == -1) goto LAB_07db95db;
        plVar8 = (long *)(*(long *)(lVar11 + 0x30) + lVar9 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar9 * 0x18) !=
               *(uint *)(_DAT_0f5bed48 + 4));
      if (plVar8 == *(long **)(lVar11 + 0x38)) {
LAB_07db95db:
        puVar7 = &DAT_0f5bed48;
      }
      else {
        puVar7 = (undefined *)plVar8[2];
      }
      lVar9 = FUN_048b0c90(lVar11 + 0x18,puVar7,uVar2,1);
      if (lVar9 == 0) {
        lStack_388 = 0;
        plStack_380 = (long *)0x0;
        func_0x048b0d20(&lStack_388);
        lVar9 = lStack_388;
      }
      lVar9 = *(long *)(lVar9 + 0x58);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puVar10[1] = 0xffffffffffffffff;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0xff;
      *puVar10 = &UNK_0f0edce8;
      *(undefined8 *)((long)puVar10 + 0x1c) = 0x7fff00000000;
      *(undefined8 *)((long)puVar10 + 0x24) = 0;
      plVar8 = *(long **)(lVar9 + 8);
      *(undefined8 **)(lVar9 + 8) = puVar10;
      goto joined_r0x07dba503;
    }
    uStack_88 = uStack_a8;
    uStack_84 = uStack_a4;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    uStack_98 = (undefined4)uStack_b8;
    uStack_94 = uStack_b8._4_4_;
    uStack_90 = (undefined4)uStack_b0;
    uStack_8c = uStack_b0._4_4_;
    if ((DAT_0f5bedc8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f5bedc8), iVar6 != 0)) {
      func_0x07e93cf0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5bed48,0xf53dab8);
      func_0x0410844d(&DAT_0f5bedc8);
    }
    plVar8 = (long *)(*(long *)(lVar11 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5bed48 + 4)) * 8);
    do {
      lVar9 = *plVar8;
      if (lVar9 == -1) goto LAB_07db97a0;
      plVar8 = (long *)(*(long *)(lVar11 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5bed48 + 4))
    ;
    if (plVar8 == *(long **)(lVar11 + 0x38)) {
LAB_07db97a0:
      puVar7 = &DAT_0f5bed48;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    if ((1 < iVar5 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120d295),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar9 = FUN_048b0c90(lVar11 + 0x18,puVar7,uVar2,1);
    if (lVar9 == 0) {
      lStack_388 = 0;
      plStack_380 = (long *)0x0;
      func_0x048b0d20(&lStack_388);
      lVar9 = lStack_388;
    }
    *(undefined1 *)(*(long *)(lVar9 + 0x58) + 0xa8) = 1;
    uStack_220 = uStack_98;
    uStack_21c = uStack_94;
    uStack_218 = uStack_90;
    uStack_214 = uStack_8c;
    uStack_210 = uStack_88;
    uStack_20c = uStack_84;
    uStack_208 = uStack_80;
    uStack_204 = uStack_7c;
    iStack_200 = iVar5;
    uStack_1fc = uVar2;
    lStack_228 = lVar11;
    uStack_1f8 = uVar3;
    func_0x07e950f0(&lStack_388,&lStack_228,&UNK_014ce2f8,0xe,0);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0fab30;
    if (plStack_370 != (long *)0x0) {
      lVar11 = *plStack_370;
      plStack_370 = plVar8;
      (**(code **)(lVar11 + 8))();
      plVar8 = plStack_370;
    }
    plStack_370 = plVar8;
    auStack_3f0[0] = (undefined4)uStack_378;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 1;
    uStack_3d0 = 0;
    uStack_3c8 = &UNK_07e97080;
    puStack_3c0 = &SUB_048b06d0;
    puStack_3b8 = &UNK_07e96d60;
    puStack_3b0 = &UNK_07e97140;
    puStack_3a8 = &UNK_07e97460;
    uStack_3a0 = 0;
    uStack_398 = 0;
    plStack_390 = (long *)0x0;
    func_0x048b05a0(plStack_380,auStack_3f0);
    plVar8 = plStack_390;
    if (plStack_390 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_390 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_390 + 0x10))(plStack_390);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07e953b0(&lStack_388);
    uVar3 = uStack_1f8;
    uVar2 = uStack_1fc;
    iVar5 = iStack_200;
    lVar11 = lStack_228;
    uStack_78 = uStack_220;
    uStack_74 = uStack_21c;
    uStack_70 = uStack_218;
    uStack_6c = uStack_214;
    uStack_68 = uStack_210;
    uStack_64 = uStack_20c;
    uStack_60 = uStack_208;
    uStack_5c = uStack_204;
    func_0x048b0bc0(&plStack_370);
    if ((DAT_0f5bedc8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f5bedc8), iVar6 != 0)) {
      func_0x07e93cf0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5bed48,0xf53dab8);
      func_0x0410844d(&DAT_0f5bedc8);
    }
    plVar8 = (long *)(*(long *)(lVar11 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5bed48 + 4)) * 8);
    do {
      lVar9 = *plVar8;
      if (lVar9 == -1) goto LAB_07db9a50;
      plVar8 = (long *)(*(long *)(lVar11 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5bed48 + 4))
    ;
    if (plVar8 == *(long **)(lVar11 + 0x38)) {
LAB_07db9a50:
      puVar7 = &DAT_0f5bed48;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    if ((1 < iVar5 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120d295),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar9 = FUN_048b0c90(lVar11 + 0x18,puVar7,uVar2,1);
    if (lVar9 == 0) {
      lStack_388 = 0;
      plStack_380 = (long *)0x0;
      func_0x048b0d20(&lStack_388);
      lVar9 = lStack_388;
    }
    *(undefined1 *)(*(long *)(lVar9 + 0x58) + 0xa8) = 1;
    lStack_1f0 = lVar11;
    uStack_1e8 = uStack_78;
    uStack_1e4 = uStack_74;
    uStack_1e0 = uStack_70;
    uStack_1dc = uStack_6c;
    uStack_1d8 = uStack_68;
    uStack_1d4 = uStack_64;
    uStack_1d0 = uStack_60;
    uStack_1cc = uStack_5c;
    iStack_1c8 = iVar5;
    uStack_1c4 = uVar2;
    uStack_1c0 = uVar3;
    func_0x07e950f0(&lStack_388,&lStack_1f0,&UNK_0147d7fd,0x10,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012080;
    if (plStack_370 != (long *)0x0) {
      lVar11 = *plStack_370;
      plStack_370 = plVar8;
      (**(code **)(lVar11 + 8))();
      plVar8 = plStack_370;
    }
    plStack_370 = plVar8;
    auStack_3f0[0] = (undefined4)uStack_378;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 1;
    uStack_3d0 = 0;
    uStack_3c8 = &UNK_05dd3ca0;
    puStack_3c0 = &SUB_048b06d0;
    puStack_3b8 = &UNK_05dd3990;
    puStack_3b0 = &UNK_07e978e0;
    puStack_3a8 = &UNK_07e97a40;
    uStack_3a0 = 0;
    uStack_398 = 0;
    plStack_390 = (long *)0x0;
    func_0x048b05a0(plStack_380,auStack_3f0);
    plVar8 = plStack_390;
    if (plStack_390 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_390 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_390 + 0x10))(plStack_390);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07e953b0(&lStack_388);
    uVar3 = uStack_1c0;
    uVar2 = uStack_1c4;
    iVar5 = iStack_1c8;
    lVar11 = lStack_1f0;
    uStack_58 = uStack_1e8;
    uStack_54 = uStack_1e4;
    uStack_50 = uStack_1e0;
    uStack_4c = uStack_1dc;
    uStack_48 = uStack_1d8;
    uStack_44 = uStack_1d4;
    uStack_40 = uStack_1d0;
    uStack_3c = uStack_1cc;
    func_0x048b0bc0(&plStack_370);
    if ((DAT_0f5bedc8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f5bedc8), iVar6 != 0)) {
      func_0x07e93cf0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5bed48,0xf53dab8);
      func_0x0410844d(&DAT_0f5bedc8);
    }
    plVar8 = (long *)(*(long *)(lVar11 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5bed48 + 4)) * 8);
    do {
      lVar9 = *plVar8;
      if (lVar9 == -1) goto LAB_07db9d00;
      plVar8 = (long *)(*(long *)(lVar11 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5bed48 + 4))
    ;
    if (plVar8 == *(long **)(lVar11 + 0x38)) {
LAB_07db9d00:
      puVar7 = &DAT_0f5bed48;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    if ((1 < iVar5 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120d295),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar9 = FUN_048b0c90(lVar11 + 0x18,puVar7,uVar2,1);
    if (lVar9 == 0) {
      lStack_388 = 0;
      plStack_380 = (long *)0x0;
      func_0x048b0d20(&lStack_388);
      lVar9 = lStack_388;
    }
    *(undefined1 *)(*(long *)(lVar9 + 0x58) + 0xa8) = 1;
    lStack_268 = lVar11;
    uStack_260 = (long *)CONCAT44(uStack_54,uStack_58);
    uStack_258 = uStack_50;
    uStack_254 = uStack_4c;
    uStack_250 = uStack_48;
    uStack_24c = uStack_44;
    uStack_248 = uStack_40;
    uStack_244 = uStack_3c;
    iStack_240 = iVar5;
    uStack_23c = uVar2;
    uStack_238 = uVar3;
    func_0x07e950f0(&lStack_388,&lStack_268,&UNK_013fe103,0x10,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    param_1 = lStack_270;
    lVar9 = lStack_278;
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_370 != (long *)0x0) {
      lVar11 = *plStack_370;
      plStack_370 = plVar8;
      (**(code **)(lVar11 + 8))();
      plVar8 = plStack_370;
    }
    plStack_370 = plVar8;
    auStack_3f0[0] = (undefined4)uStack_378;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 1;
    uStack_3d0 = 0;
    uStack_3c8 = &UNK_048b3f30;
    puStack_3c0 = &SUB_048b06d0;
    puStack_3b8 = &SUB_048b2190;
    puStack_3b0 = &UNK_07e97c20;
    puStack_3a8 = &UNK_07e97df0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    plStack_390 = (long *)0x0;
    func_0x048b05a0(plStack_380,auStack_3f0);
    plVar8 = plStack_390;
    if (plStack_390 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_390 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_390 + 0x10))(plStack_390);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07e953b0(&lStack_388);
    func_0x048b0bc0(&plStack_370);
  }
  lVar11 = func_0x07d77a40(lVar9);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar15 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar9 = lVar11 + 9;
    if (bVar15) {
      lVar9 = *(long *)(lVar11 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x07e97fd0(auStack_3f0,param_1,lVar9,uVar14);
  }
  else {
    func_0x07e97fd0(auStack_3f0,param_1,&UNK_0120d11f,0x1a);
  }
  if ((char)puStack_3c0 != '\0') {
    return;
  }
  uStack_3c8 = (undefined *)0x1e1bc4d500000004;
  if ((DAT_0f5bd568 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5bd568), iVar5 != 0)) {
    func_0x07d779d0(0xf5bd550);
    func_0x0410844d(&DAT_0f5bd568);
  }
  lStack_388 = CONCAT44(lStack_388._4_4_,uStack_3c8._4_4_);
  plStack_380 = (long *)0x0;
  uStack_378 = (long *)((ulong)uStack_378._4_4_ << 0x20);
  plStack_370 = (long *)0x1;
  puStack_368 = &SUB_048aead0;
  puStack_360 = &UNK_07e98890;
  puStack_358 = &UNK_07e98950;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  FUN_049057f0(&uStack_3e8,&lStack_388);
  func_0x048aea50(&lStack_388);
  uStack_2a8 = (undefined4)uStack_3d8;
  uStack_2a4 = uStack_3d8._4_4_;
  uStack_2a0 = (int)uStack_3d0;
  uStack_29c = uStack_3d0._4_4_;
  uStack_2b8 = (undefined4)uStack_3e8;
  uStack_2b4 = uStack_3e8._4_4_;
  uStack_2b0 = uStack_3e0;
  uStack_2ac = uStack_3dc;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f0fac18;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = FUN_04108328(&DAT_0f551bc8), iVar5 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  lStack_388 = CONCAT44(lStack_388._4_4_,_DAT_0f551bb4);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  plStack_380 = plVar8 + 3;
  plVar8[3] = (long)puVar10;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  lStack_268 = 0;
  uStack_260 = (long *)0x0;
  uStack_378 = plVar8;
  func_0x048afd20(&uStack_2b8,&lStack_388);
  plVar8 = uStack_378;
  if (uStack_378 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_378 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_378 + 0x10))(uStack_378);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_260;
  if (uStack_260 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_260 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_260 + 0x10))(uStack_260);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((DAT_0f5bd568 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5bd568), iVar5 != 0)) {
    func_0x07d779d0(0xf5bd550);
    func_0x0410844d(&DAT_0f5bd568);
  }
  if (uStack_3d0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(uStack_3d8 + 0x78) + 0x60);
    iVar5 = *piVar12;
    while (iVar5 != (int)uStack_3d0) {
      piVar12 = piVar12 + 0x16;
      iVar5 = *piVar12;
    }
    lVar11 = *(long *)(piVar12 + 0xc);
    while (lVar11 != CONCAT44(uStack_3dc,uStack_3e0)) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar11 = *(long *)(piVar12 + 0xc);
    }
  }
  else {
    if (uStack_3d0._4_4_ != 1) {
      if (uStack_3d0._4_4_ == 0) {
        *(uint *)(uStack_3d8 + 0x18) = *(uint *)(uStack_3d8 + 0x18) | 0x20000;
      }
      goto LAB_07dba1d3;
    }
    piVar12 = *(int **)(*(long *)(uStack_3d8 + 0x78) + 0x48);
    iVar5 = *piVar12;
    while (iVar5 != (int)uStack_3d0) {
      piVar12 = piVar12 + 0x1a;
      iVar5 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 2;
LAB_07dba1d3:
  if ((DAT_0f5bd568 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5bd568), iVar5 != 0)) {
    func_0x07d779d0(0xf5bd550);
    func_0x0410844d(&DAT_0f5bd568);
  }
  lStack_388 = CONCAT44(lStack_388._4_4_,0xbf75c8f8);
  plStack_380 = (long *)0x0;
  uStack_378 = (long *)CONCAT44(uStack_378._4_4_,1);
  plStack_370 = (long *)0x0;
  puStack_368 = &UNK_07e93c30;
  puStack_360 = &SUB_048b06d0;
  puStack_358 = &UNK_07e99380;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  FUN_049057f0(&uStack_3e8,&lStack_388);
  func_0x048aea50(&lStack_388);
  uStack_2a8 = (undefined4)uStack_3d8;
  uStack_2a4 = uStack_3d8._4_4_;
  uStack_2a0 = (int)uStack_3d0;
  uStack_29c = uStack_3d0._4_4_;
  uStack_2b8 = (undefined4)uStack_3e8;
  uStack_2b4 = uStack_3e8._4_4_;
  uStack_2b0 = uStack_3e0;
  uStack_2ac = uStack_3dc;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f0fac18;
  if ((DAT_0f551cb0 == '\0') && (iVar5 = FUN_04108328(&DAT_0f551cb0), iVar5 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  lStack_388 = CONCAT44(lStack_388._4_4_,_DAT_0f551c9c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  plStack_380 = plVar8 + 3;
  plVar8[3] = (long)puVar10;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  lStack_268 = 0;
  uStack_260 = (long *)0x0;
  uStack_378 = plVar8;
  func_0x048afd20(&uStack_2b8,&lStack_388);
  plVar8 = uStack_378;
  if (uStack_378 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_378 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_378 + 0x10))(uStack_378);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_260;
  if (uStack_260 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_260 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_260 + 0x10))(uStack_260);
      func_0x0412c2d0(plVar8);
    }
  }
  return;
}


