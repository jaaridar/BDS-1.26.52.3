/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x85c5890 (ELF vaddr 0x84c5890)
 * Label: caller-of-callee
 * Body:  [[085c5890, 085c68f1] [085c6900, 085c6afc] [085c6b00, 085c6e0b]]
 * Ghidra: FUN_085c5890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_085c5890(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  bool bVar17;
  undefined4 auStack_330 [2];
  long *plStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined1 *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined4 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined4 uStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined2 uStack_27f;
  undefined5 uStack_27d;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined4 uStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined2 uStack_208;
  undefined2 uStack_206;
  uint uStack_204;
  uint uStack_200;
  undefined1 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined1 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  char cStack_188;
  long lStack_180;
  undefined1 auStack_178 [32];
  undefined8 uStack_158;
  char cStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  char cStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  char cStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  if ((DAT_0f5d9be0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d9be0), iVar8 != 0)) {
    func_0x08681770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d9b60,0xf53dab8);
    func_0x0410844d(&DAT_0f5d9be0);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d9b60 + 4)) * 8);
  do {
    lVar16 = *plVar10;
    if (lVar16 == -1) goto LAB_085c5900;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5d9b60 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_085c5900:
    puVar9 = &DAT_0f5d9b60;
    if (iRam000000000f5d9bc0 != -0x2b3da790) goto LAB_085c596d;
LAB_085c592b:
    lVar16 = *(long *)(puVar9 + 0x68);
    if (lVar16 == 0) goto LAB_085c596d;
    bVar17 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar14 = lVar16 + 9;
    if (bVar17) {
      lVar14 = *(long *)(lVar16 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar17) {
      uVar13 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x08685c10(&lStack_180,param_1,lVar14,uVar13);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_085c592b;
LAB_085c596d:
    func_0x08685c10(&lStack_180,param_1,&UNK_0147eee4,0x19);
  }
  if (cStack_150 != '\0') {
    return;
  }
  func_0x07cab540(param_1);
  func_0x07a05590(param_1);
  func_0x0d8a0ff0(param_1);
  if ((DAT_0f5d6150 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d6150), iVar8 != 0)) {
    func_0x085cf410();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d60d0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d6150);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d60d0 + 4)) * 8);
  do {
    lVar16 = *plVar10;
    if (lVar16 == -1) goto LAB_085c5a10;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5d60d0 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_085c5a10:
    puVar9 = &DAT_0f5d60d0;
    if (iRam000000000f5d6130 != -0x2b3da790) goto LAB_085c5a7d;
LAB_085c5a3b:
    lVar16 = *(long *)(puVar9 + 0x68);
    if (lVar16 == 0) goto LAB_085c5a7d;
    bVar17 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar14 = lVar16 + 9;
    if (bVar17) {
      lVar14 = *(long *)(lVar16 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar17) {
      uVar13 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x085cfc30(&uStack_1b8,param_1,lVar14,uVar13);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_085c5a3b;
LAB_085c5a7d:
    func_0x085cfc30(&uStack_1b8,param_1,&UNK_012ddfbb,8);
  }
  if (cStack_188 == '\0') {
    uStack_320._4_4_ = (uint)((ulong)uStack_320 >> 0x20);
    func_0x085d07a0(&puStack_2c8,&uStack_1b8,&UNK_012c1e0e,9);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f012348;
    if (plStack_2b0 != (long *)0x0) {
      lVar16 = *plStack_2b0;
      plStack_2b0 = plVar10;
      (**(code **)(lVar16 + 8))();
      plVar10 = plStack_2b0;
    }
    plStack_2b0 = plVar10;
    auStack_330[0] = uStack_2b8;
    plStack_328 = (long *)0x0;
    uStack_320 = (long *)((ulong)uStack_320._4_4_ << 0x20);
    uStack_318 = 1;
    uStack_310 = 0;
    puStack_308 = &UNK_05ea71a0;
    puStack_300 = &SUB_048b06d0;
    puStack_2f8 = &SUB_05e9fca0;
    puStack_2f0 = &UNK_085d0d50;
    puStack_2e8 = &UNK_085d0f60;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    plStack_2d0 = (long *)0x0;
    FUN_048b05a0(puStack_2c0,auStack_330);
    plVar10 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2d0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x085d0a50(&puStack_2c8);
    cStack_118 = cStack_188;
    uStack_128 = uStack_198;
    uStack_124 = uStack_194;
    iStack_120 = iStack_190;
    uStack_11c = uStack_18c;
    uStack_138 = uStack_1a8;
    uStack_134 = uStack_1a4;
    uStack_130 = uStack_1a0;
    uStack_12c = uStack_19c;
    uStack_148 = (undefined4)uStack_1b8;
    uStack_144 = uStack_1b8._4_4_;
    uStack_140 = (undefined4)uStack_1b0;
    uStack_13c = uStack_1b0._4_4_;
    func_0x048b0bc0(&plStack_2b0);
    func_0x085d07a0(&puStack_2c8,&uStack_148,&UNK_0147ead9,7);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0c2a88;
    if (plStack_2b0 != (long *)0x0) {
      lVar16 = *plStack_2b0;
      plStack_2b0 = plVar10;
      (**(code **)(lVar16 + 8))();
      plVar10 = plStack_2b0;
    }
    plStack_2b0 = plVar10;
    auStack_330[0] = uStack_2b8;
    plStack_328 = (long *)0x0;
    uStack_320 = (long *)((ulong)uStack_320 & 0xffffffff00000000);
    uStack_318 = 1;
    uStack_310 = 0;
    puStack_308 = &UNK_0729f0a0;
    puStack_300 = &SUB_048b06d0;
    puStack_2f8 = &UNK_0651e820;
    puStack_2f0 = &UNK_085d11e0;
    puStack_2e8 = &UNK_085d1340;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    plStack_2d0 = (long *)0x0;
    FUN_048b05a0(puStack_2c0,auStack_330);
    plVar10 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2d0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x085d0a50(&puStack_2c8);
    cStack_98 = cStack_118;
    uStack_a8 = uStack_128;
    uStack_a4 = uStack_124;
    iStack_a0 = iStack_120;
    uStack_9c = uStack_11c;
    uStack_b8 = uStack_138;
    uStack_b4 = uStack_134;
    uStack_b0 = uStack_130;
    uStack_ac = uStack_12c;
    uStack_c8 = uStack_148;
    uStack_c4 = uStack_144;
    uStack_c0 = uStack_140;
    uStack_bc = uStack_13c;
    func_0x048b0bc0(&plStack_2b0);
    uStack_108 = uStack_c8;
    uStack_104 = uStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    iStack_e0 = iStack_a0;
    uStack_dc = uStack_9c;
    uStack_d8 = CONCAT71(uStack_97,cStack_98);
    func_0x085d07a0(&puStack_2c8,&uStack_108,&UNK_01291ed8,0x12);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ef8;
    if (plStack_2b0 != (long *)0x0) {
      lVar16 = *plStack_2b0;
      plStack_2b0 = plVar10;
      (**(code **)(lVar16 + 8))();
      plVar10 = plStack_2b0;
    }
    plStack_2b0 = plVar10;
    auStack_330[0] = uStack_2b8;
    plStack_328 = (long *)0x0;
    uStack_320 = (long *)((ulong)uStack_320 & 0xffffffff00000000);
    uStack_318 = 1;
    uStack_310 = 0;
    puStack_308 = &UNK_04906f70;
    puStack_300 = &SUB_048b06d0;
    puStack_2f8 = &SUB_04906c50;
    puStack_2f0 = &UNK_085d1520;
    puStack_2e8 = &UNK_085d1680;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    plStack_2d0 = (long *)0x0;
    FUN_048b05a0(puStack_2c0,auStack_330);
    plVar10 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2d0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x085d0a50(&puStack_2c8);
    uStack_1c8 = (undefined1)uStack_d8;
    uStack_1d8 = uStack_e8;
    uStack_1d4 = uStack_e4;
    iStack_1d0 = iStack_e0;
    uStack_1cc = uStack_dc;
    uStack_1e8 = uStack_f8;
    uStack_1e4 = uStack_f4;
    uStack_1e0 = uStack_f0;
    uStack_1dc = uStack_ec;
    uStack_1f8 = uStack_108;
    uStack_1f4 = uStack_104;
    uStack_1f0 = uStack_100;
    uStack_1ec = uStack_fc;
    func_0x048b0bc0(&plStack_2b0);
    func_0x085d07a0(&puStack_2c8,&uStack_1f8,&UNK_0137cda6,0xc);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0ef3c0;
    if (plStack_2b0 != (long *)0x0) {
      lVar16 = *plStack_2b0;
      plStack_2b0 = plVar10;
      (**(code **)(lVar16 + 8))();
      plVar10 = plStack_2b0;
    }
    plStack_2b0 = plVar10;
    auStack_330[0] = uStack_2b8;
    plStack_328 = (long *)0x0;
    uStack_320 = (long *)((ulong)uStack_320 & 0xffffffff00000000);
    uStack_318 = 1;
    uStack_310 = 0;
    puStack_308 = &UNK_07b093c0;
    puStack_300 = &SUB_048b06d0;
    puStack_2f8 = &SUB_07b05080;
    puStack_2f0 = &UNK_085d1860;
    puStack_2e8 = &UNK_085d19c0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    plStack_2d0 = (long *)0x0;
    FUN_048b05a0(puStack_2c0,auStack_330);
    plVar10 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2d0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x085d0a50(&puStack_2c8);
    uVar5 = uStack_1c8;
    uVar4 = uStack_1cc;
    iVar8 = iStack_1d0;
    lVar16 = CONCAT44(uStack_1f4,uStack_1f8);
    uStack_88 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_80 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_78 = uStack_1e0;
    uStack_74 = uStack_1dc;
    uStack_70 = uStack_1d8;
    uStack_6c = uStack_1d4;
    func_0x048b0bc0(&plStack_2b0);
    if ((DAT_0f5d6150 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d6150), iVar7 != 0)) {
      func_0x085cf410();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d60d0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d6150);
    }
    plVar10 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5d60d0 + 4)) * 8);
    do {
      lVar14 = *plVar10;
      if (lVar14 == -1) goto LAB_085c6100;
      plVar10 = (long *)(*(long *)(lVar16 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d60d0 + 4)
            );
    if (plVar10 == *(long **)(lVar16 + 0x38)) {
LAB_085c6100:
      puVar9 = &DAT_0f5d60d0;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    if ((1 < iVar8 - 1U) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310ec8),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar9 = (undefined *)func_0x048b0c90(lVar16 + 0x18,puVar9,uVar4,1);
    if (puVar9 == (undefined *)0x0) {
      puStack_2c8 = (undefined *)0x0;
      puStack_2c0 = (undefined1 *)0x0;
      FUN_048b0d20(&puStack_2c8);
      puVar9 = puStack_2c8;
    }
    *(undefined1 *)(*(long *)(puVar9 + 0x58) + 0xa8) = 5;
    uStack_60 = (undefined4)uStack_88;
    uStack_5c = uStack_88._4_4_;
    uStack_58 = (undefined4)uStack_80;
    uStack_54 = uStack_80._4_4_;
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    iStack_40 = iVar8;
    uStack_3c = uVar4;
    uStack_38 = uVar5;
    lStack_68 = lVar16;
    func_0x085d07a0(&puStack_2c8,&lStack_68,&UNK_01363918,0x13);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0f7d80;
    if (plStack_2b0 != (long *)0x0) {
      lVar16 = *plStack_2b0;
      plStack_2b0 = plVar10;
      (**(code **)(lVar16 + 8))();
      plVar10 = plStack_2b0;
    }
    plStack_2b0 = plVar10;
    auStack_330[0] = uStack_2b8;
    plStack_328 = (long *)0x0;
    uStack_320 = (long *)((ulong)uStack_320 & 0xffffffff00000000);
    uStack_318 = 1;
    uStack_310 = 0;
    puStack_308 = &UNK_077e83c0;
    puStack_300 = &SUB_048b06d0;
    puStack_2f8 = &UNK_077e83d0;
    puStack_2f0 = &UNK_085d1e30;
    puStack_2e8 = &UNK_085d1f90;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    plStack_2d0 = (long *)0x0;
    FUN_048b05a0(puStack_2c0,auStack_330);
    plVar10 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2d0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        func_0x0412c2d0(plVar10);
      }
    }
    iVar8 = *(int *)((long)puStack_2c0 + 0x1c);
    if (iVar8 == 2) {
      piVar15 = *(int **)(*(long *)(*(long *)((long)puStack_2c0 + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != *(int *)((long)puStack_2c0 + 0x18)) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      lVar16 = *(long *)(piVar15 + 0xc);
      while (lVar16 != *(long *)((long)puStack_2c0 + 8)) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar16 = *(long *)(piVar15 + 0xc);
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar15 = *(int **)(*(long *)(*(long *)((long)puStack_2c0 + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != *(int *)((long)puStack_2c0 + 0x18)) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar2 = (uint *)(*(long *)((long)puStack_2c0 + 0x10) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
    func_0x085d0a50(&puStack_2c8);
    func_0x048b0bc0(&plStack_2b0);
  }
  if ((DAT_0f5d9b48 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d9b48), iVar8 != 0)) {
    func_0x08680ff0();
    func_0x0410844d(&DAT_0f5d9b48);
  }
  lVar16 = lStack_180;
  uStack_158 = 0xad343ea200000001;
  if ((DAT_0f5d9be0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d9be0), iVar8 != 0)) {
    func_0x08681770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d9b60,0xf53dab8);
    func_0x0410844d(&DAT_0f5d9be0);
  }
  puStack_2c0 = (undefined1 *)(lVar16 + 0x18);
  plVar10 = (long *)(*(long *)(lVar16 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5d9b60 + 4)) * 8);
  do {
    lVar14 = *plVar10;
    if (lVar14 == -1) goto LAB_085c6440;
    plVar10 = (long *)(*(long *)(lVar16 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d9b60 + 4));
  if (plVar10 == *(long **)(lVar16 + 0x38)) {
LAB_085c6440:
    puStack_2c8 = &DAT_0f5d9b60;
  }
  else {
    puStack_2c8 = (undefined *)plVar10[2];
  }
  func_0x0ed621a0(&puStack_2c8,uStack_158._4_4_);
  puStack_2c8 = (undefined *)CONCAT62(puStack_2c8._2_6_,1);
  uStack_2b8 = uStack_158._4_4_;
  plStack_2b0 = (long *)0x0;
  lStack_2a8 = 0;
  lStack_2a0 = 0;
  lStack_298 = 0;
  lStack_290 = 0;
  uStack_288 = 0x12;
  uStack_287 = 0x6144206d657449;
  uStack_280 = 0x74;
  uStack_27f = 0x61;
  lStack_270 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  lStack_258 = 0;
  lStack_250 = 0;
  lStack_248 = 0;
  uStack_240 = 0x3f600000;
  puStack_2c0 = auStack_178;
  func_0x048afb10(&lStack_270,8);
  uStack_218 = 0;
  lStack_210 = 0;
  lStack_228 = 0;
  uStack_220 = 0;
  lStack_238 = 0;
  lStack_230 = 0;
  uStack_208 = 0xff00;
  uStack_204 = uStack_204 & 0xffffff00;
  uStack_200 = uStack_200 & 0xffffff00;
  uStack_1fc = 0;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f125c78;
  if (plStack_2b0 != (long *)0x0) {
    lVar16 = *plStack_2b0;
    plStack_2b0 = plVar10;
    (**(code **)(lVar16 + 8))();
    plVar10 = plStack_2b0;
  }
  plStack_2b0 = plVar10;
  auStack_330[0] = uStack_2b8;
  plStack_328 = (long *)0x0;
  uStack_320 = (long *)((ulong)uStack_320 & 0xffffffff00000000);
  uStack_318 = 1;
  uStack_310 = 0;
  puStack_308 = &UNK_0868a0f0;
  puStack_300 = &SUB_048b06d0;
  puStack_2f8 = &UNK_08688790;
  puStack_2f0 = &UNK_0868a1b0;
  puStack_2e8 = &UNK_0868a480;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  plStack_2d0 = (long *)0x0;
  FUN_048b05a0(puStack_2c0,auStack_330);
  plVar10 = plStack_2d0;
  if (plStack_2d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2d0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
      func_0x0412c2d0(plVar10);
    }
  }
  puVar3 = puStack_2c0;
  if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_330[0] = _DAT_0f550a0c;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar10 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  lVar16 = lStack_2a8;
  plVar1 = plStack_2b0;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef439d0;
  plStack_328 = plVar10 + 3;
  plStack_2b0 = (long *)0x0;
  lStack_2a8 = 0;
  plVar10[3] = (long)plVar1;
  plVar10[4] = lVar16;
  plVar10[7] = lStack_290;
  plVar10[5] = lStack_2a0;
  plVar10[6] = lStack_298;
  lStack_2a0 = 0;
  lStack_298 = 0;
  lStack_290 = 0;
  plVar10[10] = lStack_278;
  plVar10[8] = CONCAT71(uStack_287,uStack_288);
  plVar10[9] = CONCAT53(uStack_27d,CONCAT21(uStack_27f,uStack_280));
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  uStack_27d = 0;
  lStack_278 = 0;
  plVar10[0xb] = lStack_270;
  plVar10[0xc] = lStack_268;
  plVar10[0xd] = lStack_260;
  lStack_270 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  plVar10[0xe] = lStack_258;
  plVar10[0xf] = lStack_250;
  plVar10[0x10] = lStack_248;
  lStack_258 = 0;
  lStack_250 = 0;
  lStack_248 = 0;
  *(undefined4 *)(plVar10 + 0x11) = uStack_240;
  plVar10[0x12] = lStack_238;
  plVar10[0x13] = lStack_230;
  plVar10[0x14] = lStack_228;
  lStack_238 = 0;
  lStack_230 = 0;
  lStack_228 = 0;
  plVar10[0x17] = lStack_210;
  *(undefined4 *)(plVar10 + 0x15) = (undefined4)uStack_220;
  *(undefined4 *)((long)plVar10 + 0xac) = uStack_220._4_4_;
  *(undefined4 *)(plVar10 + 0x16) = (undefined4)uStack_218;
  *(undefined4 *)((long)plVar10 + 0xb4) = uStack_218._4_4_;
  uStack_220 = 0;
  uStack_218 = 0;
  lStack_210 = 0;
  *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_1fc,CONCAT43(uStack_200,uStack_204._1_3_));
  plVar10[0x18] = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
  uStack_1b8 = 0;
  uStack_1b0 = (long *)0x0;
  uStack_320 = plVar10;
  func_0x048afd20(puVar3,auStack_330);
  plVar10 = uStack_320;
  if (uStack_320 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_320 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*uStack_320 + 0x10))(uStack_320);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = uStack_1b0;
  if (uStack_1b0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1b0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*uStack_1b0 + 0x10))(uStack_1b0);
      func_0x0412c2d0(plVar10);
    }
  }
  lVar16 = *(long *)(puVar3 + 0x10);
  iVar8 = *(int *)(puVar3 + 0x1c);
  if (iVar8 == 2) {
    piVar15 = *(int **)(*(long *)(lVar16 + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != *(int *)(puVar3 + 0x18)) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    for (; *(long *)(piVar15 + 0xc) != *(long *)(puVar3 + 8); piVar15 = *(int **)(piVar15 + 0xe)) {
    }
LAB_085c690a:
    piVar15[4] = piVar15[4] | (int)puStack_2c8 << 0x10;
  }
  else {
    if (iVar8 == 1) {
      piVar15 = *(int **)(*(long *)(lVar16 + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != *(int *)(puVar3 + 0x18)) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_085c690a;
    }
    if (iVar8 == 0) {
      *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) | (int)puStack_2c8 << 0x10;
    }
  }
  iVar8 = (int)uStack_158;
  uVar4 = uStack_158._4_4_;
  func_0x048b0bc0(&plStack_2b0);
  if (iVar8 != 4) {
    if (iVar8 != 1) {
      return;
    }
    if ((DAT_0f5d9be0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d9be0), iVar8 != 0)) {
      func_0x08681770();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d9b60,0xf53dab8);
      func_0x0410844d(&DAT_0f5d9be0);
    }
    plVar10 = (long *)(*(long *)(lStack_180 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_180 + 0x20) -
                                           *(long *)(lStack_180 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5d9b60 + 4)) * 8);
    do {
      lVar16 = *plVar10;
      if (lVar16 == -1) goto LAB_085c6998;
      plVar10 = (long *)(*(long *)(lStack_180 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lStack_180 + 0x30) + 8 + lVar16 * 0x18) !=
             *(uint *)(_DAT_0f5d9b60 + 4));
    if (plVar10 == *(long **)(lStack_180 + 0x38)) {
LAB_085c6998:
      puVar9 = &DAT_0f5d9b60;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    puVar9 = (undefined *)func_0x048b0c90(lStack_180 + 0x18,puVar9,uVar4,1);
    if (puVar9 == (undefined *)0x0) {
      puStack_2c8 = (undefined *)0x0;
      puStack_2c0 = (undefined1 *)0x0;
      FUN_048b0d20(&puStack_2c8);
      puVar9 = puStack_2c8;
    }
    lVar16 = *(long *)(puVar9 + 0x58);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar11 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    goto LAB_085c6b4e;
  }
  if ((DAT_0f5d9be0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d9be0), iVar8 != 0)) {
    func_0x08681770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d9b60,0xf53dab8);
    func_0x0410844d(&DAT_0f5d9be0);
  }
  plVar10 = (long *)(*(long *)(lStack_180 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_180 + 0x20) -
                                         *(long *)(lStack_180 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5d9b60 + 4)) * 8);
  do {
    lVar16 = *plVar10;
    if (lVar16 == -1) goto LAB_085c6a08;
    plVar10 = (long *)(*(long *)(lStack_180 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(lStack_180 + 0x30) + 8 + lVar16 * 0x18) !=
           *(uint *)(_DAT_0f5d9b60 + 4));
  if (plVar10 == *(long **)(lStack_180 + 0x38)) {
LAB_085c6a08:
    puVar9 = &DAT_0f5d9b60;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
  }
  puVar9 = (undefined *)func_0x048b1040(lStack_180 + 0x18,puVar9,uVar4,1);
  if (puVar9 == (undefined *)0x0) {
    puStack_2c8 = (undefined *)0x0;
    puStack_2c0 = (undefined1 *)0x0;
    func_0x048b10d0(&puStack_2c8);
    puVar12 = *(undefined **)(puStack_2c8 + 0x38);
    puVar9 = puStack_2c8;
    if (puVar12 == (undefined *)0x0) goto LAB_085c6ada;
LAB_085c6af6:
    do {
      puVar9 = puVar12;
      puVar12 = *(undefined **)(puVar9 + 0x38);
      if (*(undefined **)(puVar9 + 0x38) == (undefined *)0x0) {
        puStack_2c8 = (undefined *)0x0;
        puStack_2c0 = (undefined1 *)0x0;
        func_0x048b10d0(&puStack_2c8);
        puVar12 = puStack_2c8;
      }
    } while (puVar12 != (undefined *)0x0);
  }
  else {
    puVar12 = *(undefined **)(puVar9 + 0x38);
    if (*(undefined **)(puVar9 + 0x38) != (undefined *)0x0) goto LAB_085c6af6;
LAB_085c6ada:
    puStack_2c8 = (undefined *)0x0;
    puStack_2c0 = (undefined1 *)0x0;
    func_0x048b10d0(&puStack_2c8);
    puVar12 = puStack_2c8;
    if (puStack_2c8 != (undefined *)0x0) goto LAB_085c6af6;
  }
  lVar16 = *(long *)(puVar9 + 0x48);
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
LAB_085c6b4e:
  puVar11[1] = 0xffffffffffffffff;
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 0xff;
  *puVar11 = &UNK_0f120980;
  plVar10 = *(long **)(lVar16 + 8);
  *(undefined8 **)(lVar16 + 8) = puVar11;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
  return;
}


