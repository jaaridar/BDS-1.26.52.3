/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6216240 (ELF vaddr 0x6116240)
 * Label: caller-of-callee
 * Body:  [[06216240, 06216951] [06216960, 062174dc]]
 * Ghidra: FUN_06216240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06216240(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined4 auStack_258 [2];
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined *puStack_1f0;
  undefined4 *puStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined2 uStack_1a7;
  undefined1 uStack_1a5;
  undefined4 uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined4 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  uint uStack_12c;
  uint uStack_128;
  undefined1 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  char cStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char cStack_b8;
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
  char cStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  if ((DAT_0f56bf10 == '\0') && (iVar8 = func_0x04108328(&DAT_0f56bf10), iVar8 != 0)) {
    func_0x062cbb30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56be90,0xf53dab8);
    func_0x0410844d(&DAT_0f56bf10);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f56be90 + 4)) * 8);
  do {
    lVar3 = *plVar11;
    if (lVar3 == -1) goto LAB_062162b0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f56be90 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_062162b0:
    puVar9 = &DAT_0f56be90;
    if (iRam000000000f56bef0 != -0x2b3da790) goto LAB_0621631d;
LAB_062162db:
    lVar3 = *(long *)(puVar9 + 0x68);
    if (lVar3 == 0) goto LAB_0621631d;
    bVar17 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar15 = lVar3 + 9;
    if (bVar17) {
      lVar15 = *(long *)(lVar3 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar17) {
      uVar14 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x062cc1b0(&uStack_120,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_062162db;
LAB_0621631d:
    func_0x062cc1b0(&uStack_120,param_1,&UNK_014afd03,0x25);
  }
  if (cStack_f0 == '\0') {
    uStack_248._4_4_ = (uint)((ulong)uStack_248 >> 0x20);
    func_0x062cc7a0(&puStack_1f0,CONCAT44(uStack_11c,uStack_120) + 0x18);
    if (uStack_1d8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x60);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_1d8) {
        piVar13 = piVar13 + 0x16;
        iVar8 = *piVar13;
      }
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
      while (puVar12 != puStack_1e8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        puVar12 = *(undefined4 **)(piVar13 + 0xc);
      }
LAB_062163af:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (uStack_1d8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x48);
        iVar8 = *piVar13;
        while (iVar8 != (int)uStack_1d8) {
          piVar13 = piVar13 + 0x1a;
          iVar8 = *piVar13;
        }
        goto LAB_062163af;
      }
      if (uStack_1d8._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    if ((DAT_0f56bf30 == '\0') && (iVar8 = func_0x04108328(&DAT_0f56bf30), iVar8 != 0)) {
      func_0x062cbc40();
      func_0x0410844d(&DAT_0f56bf30);
    }
    uStack_f8 = 0x28a5a83e00000001;
    lVar3 = CONCAT44(uStack_11c,uStack_120);
    if ((DAT_0f56bf10 == '\0') && (iVar8 = func_0x04108328(&DAT_0f56bf10), iVar8 != 0)) {
      func_0x062cbb30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f56be90,0xf53dab8);
      func_0x0410844d(&DAT_0f56bf10);
    }
    puStack_1e8 = (undefined4 *)(lVar3 + 0x18);
    plVar11 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f56be90 + 4)) * 8);
    do {
      lVar15 = *plVar11;
      if (lVar15 == -1) goto LAB_06216440;
      plVar11 = (long *)(*(long *)(lVar3 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f56be90 + 4))
    ;
    if (plVar11 == *(long **)(lVar3 + 0x38)) {
LAB_06216440:
      puStack_1f0 = &DAT_0f56be90;
    }
    else {
      puStack_1f0 = (undefined *)plVar11[2];
    }
    func_0x0ed621a0(&puStack_1f0,uStack_f8._4_4_);
    puStack_1f0 = (undefined *)CONCAT62(puStack_1f0._2_6_,0x10);
    uStack_1e0 = uStack_f8._4_4_;
    uStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1b0 = 0x14;
    uStack_1af = 0x6669746e656469;
    uStack_1a8 = 0x69;
    uStack_1a7 = 0x7265;
    uStack_1a5 = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    uStack_168 = 0x3f600000;
    puStack_1e8 = &uStack_118;
    func_0x048afb10(&lStack_198,8);
    uStack_140 = 0;
    lStack_138 = 0;
    lStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    lStack_158 = 0;
    uStack_130 = 0xff00;
    uStack_12c = uStack_12c & 0xffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    uStack_124 = 0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f012348;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = puVar10;
      (**(code **)(lVar3 + 8))();
      puVar10 = uStack_1d8;
    }
    uStack_1d8 = puVar10;
    auStack_258[0] = uStack_1e0;
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248._4_4_ << 0x20);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_05ea71a0;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_05e9fca0;
    puStack_218 = &UNK_062ccd50;
    puStack_210 = &UNK_062ccf60;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(puStack_1e8,auStack_258);
    plVar11 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_1f8 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar11);
      }
    }
    puVar12 = puStack_1e8;
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_258[0] = _DAT_0f550a0c;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar3 = lStack_1d0;
    puVar10 = uStack_1d8;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef439d0;
    plStack_250 = plVar11 + 3;
    uStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    plVar11[3] = (long)puVar10;
    plVar11[4] = lVar3;
    plVar11[7] = lStack_1b8;
    plVar11[5] = lStack_1c8;
    plVar11[6] = lStack_1c0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    plVar11[10] = lStack_1a0;
    plVar11[8] = CONCAT71(uStack_1af,uStack_1b0);
    plVar11[9] = CONCAT44(uStack_1a4,CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,uStack_1a8)));
    uStack_1b0 = 0;
    uStack_1af = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    lStack_1a0 = 0;
    plVar11[0xb] = lStack_198;
    plVar11[0xc] = lStack_190;
    plVar11[0xd] = lStack_188;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    plVar11[0xe] = lStack_180;
    plVar11[0xf] = lStack_178;
    plVar11[0x10] = lStack_170;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    *(undefined4 *)(plVar11 + 0x11) = uStack_168;
    plVar11[0x12] = lStack_160;
    plVar11[0x13] = lStack_158;
    plVar11[0x14] = lStack_150;
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    plVar11[0x17] = lStack_138;
    *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_148;
    *(undefined4 *)((long)plVar11 + 0xac) = uStack_148._4_4_;
    *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_140;
    *(undefined4 *)((long)plVar11 + 0xb4) = uStack_140._4_4_;
    uStack_148 = 0;
    uStack_140 = 0;
    lStack_138 = 0;
    *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_124,CONCAT43(uStack_128,uStack_12c._1_3_));
    plVar11[0x18] = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
    uStack_68 = 0;
    uStack_60 = (long *)0x0;
    uStack_248 = plVar11;
    func_0x048afd20(puVar12,auStack_258);
    plVar11 = uStack_248;
    if (uStack_248 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_248 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*uStack_248 + 0x10))(uStack_248);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_60;
    if (uStack_60 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_60 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*uStack_60 + 0x10))(uStack_60);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar3 = *(long *)(puVar12 + 4);
    iVar8 = puVar12[7];
    if (iVar8 == 2) {
      piVar13 = *(int **)(*(long *)(lVar3 + 0x78) + 0x60);
      iVar8 = *piVar13;
      while (iVar8 != puVar12[6]) {
        piVar13 = piVar13 + 0x16;
        iVar8 = *piVar13;
      }
      for (; *(long *)(piVar13 + 0xc) != *(long *)(puVar12 + 2); piVar13 = *(int **)(piVar13 + 0xe))
      {
      }
LAB_0621696a:
      piVar13[4] = piVar13[4] | (int)puStack_1f0 << 0x10;
    }
    else {
      if (iVar8 == 1) {
        piVar13 = *(int **)(*(long *)(lVar3 + 0x78) + 0x48);
        iVar8 = *piVar13;
        while (iVar8 != puVar12[6]) {
          piVar13 = piVar13 + 0x1a;
          iVar8 = *piVar13;
        }
        goto LAB_0621696a;
      }
      if (iVar8 == 0) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | (int)puStack_1f0 << 0x10;
      }
    }
    FUN_048b0bc0(&uStack_1d8);
  }
  puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar12 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar7 = _UNK_01224181;
  *(undefined8 *)(puVar12 + 8) = _DAT_01224179;
  *(undefined8 *)(puVar12 + 10) = uVar7;
  uVar7 = _UNK_01224171;
  *(undefined8 *)(puVar12 + 4) = _DAT_01224169;
  *(undefined8 *)(puVar12 + 6) = uVar7;
  uVar6 = _UNK_01224165;
  uVar5 = _UNK_01224161;
  uVar4 = _UNK_0122415d;
  *puVar12 = _DAT_01224159;
  puVar12[1] = uVar4;
  puVar12[2] = uVar5;
  puVar12[3] = uVar6;
  *(undefined8 *)((long)puVar12 + 0x2e) = 0x64616f6c79615061;
  *(undefined1 *)((long)puVar12 + 0x36) = 0;
  if ((DAT_0f56b068 == '\0') && (iVar8 = func_0x04108328(&DAT_0f56b068), iVar8 != 0)) {
    func_0x06294250();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56afe8,0xf53dab8);
    func_0x0410844d(&DAT_0f56b068);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f56afe8 + 4)) * 8);
  do {
    lVar3 = *plVar11;
    if (lVar3 == -1) goto LAB_06216a20;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f56afe8 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_06216a20:
    puVar9 = &DAT_0f56afe8;
    if (iRam000000000f56b048 != -0x2b3da790) goto LAB_06216a7b;
LAB_06216a4b:
    lVar3 = *(long *)(puVar9 + 0x68);
    if (lVar3 == 0) goto LAB_06216a7b;
    bVar17 = (*(byte *)(lVar3 + 8) & 1) != 0;
    puVar16 = (undefined4 *)(lVar3 + 9);
    if (bVar17) {
      puVar16 = *(undefined4 **)(lVar3 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar17) {
      uVar14 = *(ulong *)(lVar3 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_06216a4b;
LAB_06216a7b:
    uVar14 = 0x36;
    puVar16 = puVar12;
  }
  func_0x062cd130(&uStack_120,param_1,puVar16,uVar14);
  thunk_FUN_0ee326a0(puVar12,0x38);
  if (cStack_f0 != '\0') {
    return;
  }
  func_0x062cd720(&puStack_1f0,CONCAT44(uStack_11c,uStack_120) + 0x18);
  if (uStack_1d8._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_1d8) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    puVar12 = *(undefined4 **)(piVar13 + 0xc);
    while (puVar12 != puStack_1e8) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
    }
LAB_06216b1f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_1d8._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x48);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_1d8) {
        piVar13 = piVar13 + 0x1a;
        iVar8 = *piVar13;
      }
      goto LAB_06216b1f;
    }
    if (uStack_1d8._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x062cdcf0(&puStack_1f0,&uStack_120,&UNK_0128cb06,9);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef42d08;
  if (uStack_1d8 != (long *)0x0) {
    lVar3 = *uStack_1d8;
    uStack_1d8 = plVar11;
    (**(code **)(lVar3 + 8))();
    plVar11 = uStack_1d8;
  }
  uStack_1d8 = plVar11;
  auStack_258[0] = uStack_1e0;
  plStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 1;
  uStack_238 = 0;
  puStack_230 = &UNK_048b06c0;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &SUB_048b02c0;
  puStack_218 = &UNK_062ce2a0;
  puStack_210 = &UNK_062ce400;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(puStack_1e8,auStack_258);
  plVar11 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1f8 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x062cdfa0(&puStack_1f0);
  cStack_b8 = cStack_f0;
  uStack_c8 = uStack_100;
  uStack_c4 = uStack_fc;
  uStack_c0 = (undefined4)uStack_f8;
  uStack_bc = uStack_f8._4_4_;
  uStack_d8 = uStack_110;
  uStack_d4 = uStack_10c;
  uStack_d0 = uStack_108;
  uStack_cc = uStack_104;
  uStack_e8 = uStack_120;
  uStack_e4 = uStack_11c;
  uStack_e0 = uStack_118;
  uStack_dc = uStack_114;
  FUN_048b0bc0(&uStack_1d8);
  func_0x062cd720(&puStack_1f0,CONCAT44(uStack_e4,uStack_e8) + 0x18);
  if (uStack_1d8._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_1d8) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    puVar12 = *(undefined4 **)(piVar13 + 0xc);
    while (puVar12 != puStack_1e8) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
    }
LAB_06216d4f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_1d8._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x48);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_1d8) {
        piVar13 = piVar13 + 0x1a;
        iVar8 = *piVar13;
      }
      goto LAB_06216d4f;
    }
    if (uStack_1d8._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x062cdcf0(&puStack_1f0,&uStack_e8,&UNK_0144987c,10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef44b00;
  if (uStack_1d8 != (long *)0x0) {
    lVar3 = *uStack_1d8;
    uStack_1d8 = plVar11;
    (**(code **)(lVar3 + 8))();
    plVar11 = uStack_1d8;
  }
  uStack_1d8 = plVar11;
  auStack_258[0] = uStack_1e0;
  plStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 1;
  uStack_238 = 0;
  puStack_230 = &UNK_048b3f30;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &SUB_048b2190;
  puStack_218 = &UNK_062ce5e0;
  puStack_210 = &UNK_062ce7b0;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(puStack_1e8,auStack_258);
  plVar11 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1f8 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x062cdfa0(&puStack_1f0);
  cStack_78 = cStack_b8;
  uStack_88 = uStack_c8;
  uStack_84 = uStack_c4;
  uStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
  uStack_98 = uStack_d8;
  uStack_94 = uStack_d4;
  uStack_90 = uStack_d0;
  uStack_8c = uStack_cc;
  uStack_a8 = uStack_e8;
  uStack_a4 = uStack_e4;
  uStack_a0 = uStack_e0;
  uStack_9c = uStack_dc;
  FUN_048b0bc0(&uStack_1d8);
  func_0x062cd720(&puStack_1f0,CONCAT44(uStack_a4,uStack_a8) + 0x18);
  if (uStack_1d8._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_1d8) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    puVar12 = *(undefined4 **)(piVar13 + 0xc);
    while (puVar12 != puStack_1e8) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
    }
LAB_06216f7f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_1d8._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x48);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_1d8) {
        piVar13 = piVar13 + 0x1a;
        iVar8 = *piVar13;
      }
      goto LAB_06216f7f;
    }
    if (uStack_1d8._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x062cdcf0(&puStack_1f0,&uStack_a8,&UNK_012d45e0,7);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f025a60;
  if (uStack_1d8 != (long *)0x0) {
    lVar3 = *uStack_1d8;
    uStack_1d8 = plVar11;
    (**(code **)(lVar3 + 8))();
    plVar11 = uStack_1d8;
  }
  uStack_1d8 = plVar11;
  auStack_258[0] = uStack_1e0;
  plStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 1;
  uStack_238 = 0;
  puStack_230 = &UNK_062cebd0;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &UNK_062cba70;
  puStack_218 = &UNK_062cec90;
  puStack_210 = &UNK_062ceea0;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(puStack_1e8,auStack_258);
  plVar11 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1f8 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x062cdfa0(&puStack_1f0);
  cStack_38 = cStack_78;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  uStack_58 = uStack_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_68 = CONCAT44(uStack_a4,uStack_a8);
  uStack_60 = (long *)CONCAT44(uStack_9c,uStack_a0);
  FUN_048b0bc0(&uStack_1d8);
  func_0x062cd720(&puStack_1f0,uStack_68 + 0x18);
  if (uStack_1d8._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_1d8) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    puVar12 = *(undefined4 **)(piVar13 + 0xc);
    while (puVar12 != puStack_1e8) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
    }
  }
  else {
    if (uStack_1d8._4_4_ != 1) {
      if (uStack_1d8._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_062171b3;
    }
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x48);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_1d8) {
      piVar13 = piVar13 + 0x1a;
      iVar8 = *piVar13;
    }
  }
  *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
LAB_062171b3:
  func_0x062cdcf0(&puStack_1f0,&uStack_68,&UNK_0146090e,0xb);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0ef46ef8;
  if (uStack_1d8 != (long *)0x0) {
    lVar3 = *uStack_1d8;
    uStack_1d8 = puVar10;
    (**(code **)(lVar3 + 8))();
    puVar10 = uStack_1d8;
  }
  uStack_1d8 = puVar10;
  auStack_258[0] = uStack_1e0;
  plStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 1;
  uStack_238 = 0;
  puStack_230 = &UNK_04906f70;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &SUB_04906c50;
  puStack_218 = &UNK_062cf320;
  puStack_210 = &UNK_062cf480;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(puStack_1e8,auStack_258);
  plVar11 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1f8 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x062cdfa0(&puStack_1f0);
  FUN_048b0bc0(&uStack_1d8);
  return;
}



/* ---- referenced strings ----
 * 0x1224159  Editor::Network::DataTransferServiceRequestDataPayload
 * 0x1224169  :DataTransferServiceRequestDataPayload
 * 0x1224179  viceRequestDataPayload
 */
