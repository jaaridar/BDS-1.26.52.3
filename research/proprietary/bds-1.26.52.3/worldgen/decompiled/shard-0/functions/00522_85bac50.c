/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x86bac50 (ELF vaddr 0x85bac50)
 * Label: caller-of-callee
 * Body:  [[086bac50, 086bb371] [086bb380, 086bb9b1] [086bb9c0, 086bc371] [086bc380, 086bccc9]]
 * Ghidra: FUN_086bac50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_086bac50(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  bool bVar10;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined4 uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined4 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  uint uStack_f4;
  uint uStack_f0;
  undefined1 uStack_ec;
  undefined4 auStack_e8 [2];
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  char cStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  func_0x078ee140();
  if ((DAT_0f5dc350 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc350), iVar4 != 0)) {
    func_0x08766cd0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc2d0,0xf53dab8);
    func_0x0410844d(&DAT_0f5dc350);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5dc2d0 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_086bacd0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5dc2d0 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_086bacd0:
    puVar5 = &DAT_0f5dc2d0;
    if (iRam000000000f5dc330 != -0x2b3da790) goto LAB_086bad23;
LAB_086bacfb:
    lVar2 = *(long *)(puVar5 + 0x68);
    if (lVar2 == 0) goto LAB_086bad23;
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar5 = (undefined *)(lVar2 + 9);
    if (bVar10) {
      puVar5 = *(undefined **)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_086bacfb;
LAB_086bad23:
    puVar5 = &UNK_01227728;
    uVar7 = 4;
  }
  func_0x087670b0(&puStack_1b8,param_1,puVar5,uVar7);
  if ((DAT_0f5dc408 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc408), iVar4 != 0)) {
    func_0x08767c80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc388,0xf53dab8);
    func_0x0410844d(&DAT_0f5dc408);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5dc388 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_086bada0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5dc388 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_086bada0:
    puVar5 = &DAT_0f5dc388;
    if (iRam000000000f5dc3e8 != -0x2b3da790) goto LAB_086bae0d;
LAB_086badcb:
    lVar2 = *(long *)(puVar5 + 0x68);
    if (lVar2 == 0) goto LAB_086bae0d;
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x087680a0(&lStack_80,param_1,lVar9,uVar7);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_086badcb;
LAB_086bae0d:
    func_0x087680a0(&lStack_80,param_1,&UNK_011b5cc3,9);
  }
  if (cStack_50 == '\0') {
    uStack_d8._4_4_ = (uint)((ulong)uStack_d8 >> 0x20);
    if ((DAT_0f5dc428 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc428), iVar4 != 0)) {
      func_0x08767d90();
      func_0x0410844d(&DAT_0f5dc428);
    }
    lVar2 = lStack_80;
    uStack_58 = 0x74f576af00000001;
    if ((DAT_0f5dc408 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc408), iVar4 != 0)) {
      func_0x08767c80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc388,0xf53dab8);
      func_0x0410844d(&DAT_0f5dc408);
    }
    puStack_1b0 = (undefined1 *)(lVar2 + 0x18);
    plVar6 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5dc388 + 4)) * 8);
    do {
      lVar9 = *plVar6;
      if (lVar9 == -1) goto LAB_086baed0;
      plVar6 = (long *)(*(long *)(lVar2 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5dc388 + 4));
    if (plVar6 == *(long **)(lVar2 + 0x38)) {
LAB_086baed0:
      puStack_1b8 = &DAT_0f5dc388;
    }
    else {
      puStack_1b8 = (undefined *)plVar6[2];
    }
    func_0x0ed621a0(&puStack_1b8,uStack_58._4_4_);
    puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
    uStack_1a8 = uStack_58._4_4_;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0x656d756c6f560c;
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0x3f600000;
    puStack_1b0 = auStack_78;
    func_0x048afb10(&lStack_160,8);
    uStack_108 = 0;
    lStack_100 = 0;
    lStack_118 = 0;
    uStack_110 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    uStack_f8 = 0xff00;
    uStack_f4 = uStack_f4 & 0xffffff00;
    uStack_f0 = uStack_f0 & 0xffffff00;
    uStack_ec = 0;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0126a0;
    if (plStack_1a0 != (long *)0x0) {
      lVar2 = *plStack_1a0;
      plStack_1a0 = plVar6;
      (**(code **)(lVar2 + 8))();
      plVar6 = plStack_1a0;
    }
    plStack_1a0 = plVar6;
    auStack_e8[0] = uStack_1a8;
    plStack_e0 = (long *)0x0;
    uStack_d8 = (long *)((ulong)uStack_d8._4_4_ << 0x20);
    uStack_d0 = 1;
    uStack_c8 = 0;
    puStack_c0 = &UNK_05daeda0;
    puStack_b8 = &SUB_048b06d0;
    puStack_b0 = &SUB_05daea90;
    puStack_a8 = &UNK_08768bb0;
    puStack_a0 = &UNK_08768d10;
    uStack_98 = 0;
    uStack_90 = 0;
    plStack_88 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e8);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_88 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        func_0x0412c2d0(plVar6);
      }
    }
    puVar3 = puStack_1b0;
    if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_e8[0] = _DAT_0f550a0c;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar2 = lStack_198;
    plVar1 = plStack_1a0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef439d0;
    plStack_e0 = plVar6 + 3;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    plVar6[3] = (long)plVar1;
    plVar6[4] = lVar2;
    plVar6[7] = lStack_180;
    plVar6[5] = lStack_190;
    plVar6[6] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    plVar6[10] = lStack_168;
    plVar6[8] = lStack_178;
    plVar6[9] = uStack_170;
    lStack_178 = 0;
    uStack_170 = 0;
    lStack_168 = 0;
    plVar6[0xb] = lStack_160;
    plVar6[0xc] = lStack_158;
    plVar6[0xd] = lStack_150;
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    plVar6[0xe] = lStack_148;
    plVar6[0xf] = lStack_140;
    plVar6[0x10] = lStack_138;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    *(undefined4 *)(plVar6 + 0x11) = uStack_130;
    plVar6[0x12] = lStack_128;
    plVar6[0x13] = lStack_120;
    plVar6[0x14] = lStack_118;
    lStack_128 = 0;
    lStack_120 = 0;
    lStack_118 = 0;
    plVar6[0x17] = lStack_100;
    *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_110;
    *(undefined4 *)((long)plVar6 + 0xac) = uStack_110._4_4_;
    *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_108;
    *(undefined4 *)((long)plVar6 + 0xb4) = uStack_108._4_4_;
    uStack_110 = 0;
    uStack_108 = 0;
    lStack_100 = 0;
    *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_ec,CONCAT43(uStack_f0,uStack_f4._1_3_));
    plVar6[0x18] = CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8));
    uStack_48 = 0;
    plStack_40 = (long *)0x0;
    uStack_d8 = plVar6;
    func_0x048afd20(puVar3,auStack_e8);
    plVar6 = uStack_d8;
    if (uStack_d8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_d8 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        func_0x0412c2d0(plVar6);
      }
    }
    lVar2 = *(long *)(puVar3 + 0x10);
    iVar4 = *(int *)(puVar3 + 0x1c);
    if (iVar4 == 2) {
      piVar8 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
      iVar4 = *piVar8;
      while (iVar4 != *(int *)(puVar3 + 0x18)) {
        piVar8 = piVar8 + 0x16;
        iVar4 = *piVar8;
      }
      for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar3 + 8); piVar8 = *(int **)(piVar8 + 0xe)) {
      }
LAB_086bb38a:
      piVar8[4] = piVar8[4] | (int)puStack_1b8 << 0x10;
    }
    else {
      if (iVar4 == 1) {
        piVar8 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
        iVar4 = *piVar8;
        while (iVar4 != *(int *)(puVar3 + 0x18)) {
          piVar8 = piVar8 + 0x1a;
          iVar4 = *piVar8;
        }
        goto LAB_086bb38a;
      }
      if (iVar4 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)puStack_1b8 << 0x10;
      }
    }
    FUN_048b0bc0(&plStack_1a0);
  }
  if ((DAT_0f5dc4c0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc4c0), iVar4 != 0)) {
    func_0x08768fa0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc440,0xf53dab8);
    func_0x0410844d(&DAT_0f5dc4c0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5dc440 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_086bb3f0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5dc440 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_086bb3f0:
    puVar5 = &DAT_0f5dc440;
    if (iRam000000000f5dc4a0 != -0x2b3da790) goto LAB_086bb45d;
LAB_086bb41b:
    lVar2 = *(long *)(puVar5 + 0x68);
    if (lVar2 == 0) goto LAB_086bb45d;
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x087693c0(&lStack_80,param_1,lVar9,uVar7);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_086bb41b;
LAB_086bb45d:
    func_0x087693c0(&lStack_80,param_1,&UNK_014cfc1e,8);
  }
  if (cStack_50 == '\0') {
    if ((DAT_0f5dc4e0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc4e0), iVar4 != 0)) {
      func_0x087690b0();
      func_0x0410844d(&DAT_0f5dc4e0);
    }
    lVar2 = lStack_80;
    uStack_58 = 0x785a815100000001;
    if ((DAT_0f5dc4c0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc4c0), iVar4 != 0)) {
      func_0x08768fa0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc440,0xf53dab8);
      func_0x0410844d(&DAT_0f5dc4c0);
    }
    puStack_1b0 = (undefined1 *)(lVar2 + 0x18);
    plVar6 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5dc440 + 4)) * 8);
    do {
      lVar9 = *plVar6;
      if (lVar9 == -1) goto LAB_086bb520;
      plVar6 = (long *)(*(long *)(lVar2 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5dc440 + 4));
    if (plVar6 == *(long **)(lVar2 + 0x38)) {
LAB_086bb520:
      puStack_1b8 = &DAT_0f5dc440;
    }
    else {
      puStack_1b8 = (undefined *)plVar6[2];
    }
    func_0x0ed621a0(&puStack_1b8,uStack_58._4_4_);
    puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
    uStack_1a8 = uStack_58._4_4_;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = CONCAT17(lStack_178._7_1_,0x68637469500a);
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0x3f600000;
    puStack_1b0 = auStack_78;
    func_0x048afb10(&lStack_160,8);
    uStack_108 = 0;
    lStack_100 = 0;
    lStack_118 = 0;
    uStack_110 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    uStack_f8 = 0xff00;
    uStack_f4 = uStack_f4 & 0xffffff00;
    uStack_f0 = uStack_f0 & 0xffffff00;
    uStack_ec = 0;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0126a0;
    if (plStack_1a0 != (long *)0x0) {
      lVar2 = *plStack_1a0;
      plStack_1a0 = plVar6;
      (**(code **)(lVar2 + 8))();
      plVar6 = plStack_1a0;
    }
    plStack_1a0 = plVar6;
    auStack_e8[0] = uStack_1a8;
    plStack_e0 = (long *)0x0;
    uStack_d8 = (long *)((ulong)uStack_d8 & 0xffffffff00000000);
    uStack_d0 = 1;
    uStack_c8 = 0;
    puStack_c0 = &UNK_05daeda0;
    puStack_b8 = &SUB_048b06d0;
    puStack_b0 = &SUB_05daea90;
    puStack_a8 = &UNK_08769ed0;
    puStack_a0 = &UNK_0876a030;
    uStack_98 = 0;
    uStack_90 = 0;
    plStack_88 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e8);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_88 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        func_0x0412c2d0(plVar6);
      }
    }
    puVar3 = puStack_1b0;
    if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_e8[0] = _DAT_0f550a0c;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar2 = lStack_198;
    plVar1 = plStack_1a0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef439d0;
    plStack_e0 = plVar6 + 3;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    plVar6[3] = (long)plVar1;
    plVar6[4] = lVar2;
    plVar6[7] = lStack_180;
    plVar6[5] = lStack_190;
    plVar6[6] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    plVar6[10] = lStack_168;
    plVar6[8] = lStack_178;
    plVar6[9] = uStack_170;
    lStack_178 = 0;
    uStack_170 = 0;
    lStack_168 = 0;
    plVar6[0xb] = lStack_160;
    plVar6[0xc] = lStack_158;
    plVar6[0xd] = lStack_150;
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    plVar6[0xe] = lStack_148;
    plVar6[0xf] = lStack_140;
    plVar6[0x10] = lStack_138;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    *(undefined4 *)(plVar6 + 0x11) = uStack_130;
    plVar6[0x12] = lStack_128;
    plVar6[0x13] = lStack_120;
    plVar6[0x14] = lStack_118;
    lStack_128 = 0;
    lStack_120 = 0;
    lStack_118 = 0;
    plVar6[0x17] = lStack_100;
    *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_110;
    *(undefined4 *)((long)plVar6 + 0xac) = uStack_110._4_4_;
    *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_108;
    *(undefined4 *)((long)plVar6 + 0xb4) = uStack_108._4_4_;
    uStack_110 = 0;
    uStack_108 = 0;
    lStack_100 = 0;
    *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_ec,CONCAT43(uStack_f0,uStack_f4._1_3_));
    plVar6[0x18] = CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8));
    uStack_48 = 0;
    plStack_40 = (long *)0x0;
    uStack_d8 = plVar6;
    func_0x048afd20(puVar3,auStack_e8);
    plVar6 = uStack_d8;
    if (uStack_d8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_d8 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        func_0x0412c2d0(plVar6);
      }
    }
    lVar2 = *(long *)(puVar3 + 0x10);
    iVar4 = *(int *)(puVar3 + 0x1c);
    if (iVar4 == 2) {
      piVar8 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
      iVar4 = *piVar8;
      while (iVar4 != *(int *)(puVar3 + 0x18)) {
        piVar8 = piVar8 + 0x16;
        iVar4 = *piVar8;
      }
      for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar3 + 8); piVar8 = *(int **)(piVar8 + 0xe)) {
      }
LAB_086bb9ca:
      piVar8[4] = piVar8[4] | (int)puStack_1b8 << 0x10;
    }
    else {
      if (iVar4 == 1) {
        piVar8 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
        iVar4 = *piVar8;
        while (iVar4 != *(int *)(puVar3 + 0x18)) {
          piVar8 = piVar8 + 0x1a;
          iVar4 = *piVar8;
        }
        goto LAB_086bb9ca;
      }
      if (iVar4 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)puStack_1b8 << 0x10;
      }
    }
    FUN_048b0bc0(&plStack_1a0);
  }
  if ((DAT_0f5dc578 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc578), iVar4 != 0)) {
    func_0x0876a2c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc4f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5dc578);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5dc4f8 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_086bba30;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5dc4f8 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_086bba30:
    puVar5 = &DAT_0f5dc4f8;
    if (iRam000000000f5dc558 != -0x2b3da790) goto LAB_086bba9d;
LAB_086bba5b:
    lVar2 = *(long *)(puVar5 + 0x68);
    if (lVar2 == 0) goto LAB_086bba9d;
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0876a6f0(&lStack_80,param_1,lVar9,uVar7);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_086bba5b;
LAB_086bba9d:
    func_0x0876a6f0(&lStack_80,param_1,&UNK_014ce0b2,4);
  }
  if (cStack_50 == '\0') {
    func_0x0876b200(&puStack_1b8,&lStack_80,&UNK_0120e854,8);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0126a0;
    if (plStack_1a0 != (long *)0x0) {
      lVar2 = *plStack_1a0;
      plStack_1a0 = plVar6;
      (**(code **)(lVar2 + 8))();
      plVar6 = plStack_1a0;
    }
    plStack_1a0 = plVar6;
    auStack_e8[0] = uStack_1a8;
    plStack_e0 = (long *)0x0;
    uStack_d8 = (long *)((ulong)uStack_d8 & 0xffffffff00000000);
    uStack_d0 = 1;
    uStack_c8 = 0;
    puStack_c0 = &UNK_05daeda0;
    puStack_b8 = &SUB_048b06d0;
    puStack_b0 = &SUB_05daea90;
    puStack_a8 = &UNK_0876b7b0;
    puStack_a0 = &UNK_0876b910;
    uStack_98 = 0;
    uStack_90 = 0;
    plStack_88 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e8);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_88 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0876b4b0(&puStack_1b8);
    FUN_048b0bc0(&plStack_1a0);
    func_0x0876b200(&puStack_1b8,&lStack_80,&UNK_01278cea,0xd);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0126a0;
    if (plStack_1a0 != (long *)0x0) {
      lVar2 = *plStack_1a0;
      plStack_1a0 = plVar6;
      (**(code **)(lVar2 + 8))();
      plVar6 = plStack_1a0;
    }
    plStack_1a0 = plVar6;
    auStack_e8[0] = uStack_1a8;
    plStack_e0 = (long *)0x0;
    uStack_d8 = (long *)((ulong)uStack_d8 & 0xffffffff00000000);
    uStack_d0 = 1;
    uStack_c8 = 0;
    puStack_c0 = &UNK_05daeda0;
    puStack_b8 = &SUB_048b06d0;
    puStack_b0 = &SUB_05daea90;
    puStack_a8 = &UNK_0876bae0;
    puStack_a0 = &UNK_0876bc40;
    uStack_98 = 0;
    uStack_90 = 0;
    plStack_88 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e8);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_88 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0876b4b0(&puStack_1b8);
    FUN_048b0bc0(&plStack_1a0);
  }
  if ((DAT_0f5dc630 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc630), iVar4 != 0)) {
    func_0x0876bee0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc5b0,0xf53dab8);
    func_0x0410844d(&DAT_0f5dc630);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5dc5b0 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_086bbda0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5dc5b0 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_086bbda0:
    puVar5 = &DAT_0f5dc5b0;
    if (iRam000000000f5dc610 != -0x2b3da790) goto LAB_086bbe0d;
LAB_086bbdcb:
    lVar2 = *(long *)(puVar5 + 0x68);
    if (lVar2 == 0) goto LAB_086bbe0d;
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0876c300(&lStack_80,param_1,lVar9,uVar7);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_086bbdcb;
LAB_086bbe0d:
    func_0x0876c300(&lStack_80,param_1,&UNK_014cfc27,6);
  }
  if (cStack_50 != '\0') goto LAB_086bc392;
  if ((DAT_0f5dc650 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc650), iVar4 != 0)) {
    func_0x0876bff0();
    func_0x0410844d(&DAT_0f5dc650);
  }
  uStack_58 = 0x7e12f48a00000001;
  if ((DAT_0f5dc630 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc630), iVar4 != 0)) {
    func_0x0876bee0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc5b0,0xf53dab8);
    func_0x0410844d(&DAT_0f5dc630);
  }
  puStack_1b0 = (undefined1 *)(lStack_80 + 0x18);
  plVar6 = (long *)(*(long *)(lStack_80 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_80 + 0x20) - *(long *)(lStack_80 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5dc5b0 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_086bbed0;
    plVar6 = (long *)(*(long *)(lStack_80 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lStack_80 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5dc5b0 + 4)
          );
  if (plVar6 == *(long **)(lStack_80 + 0x38)) {
LAB_086bbed0:
    puStack_1b8 = &DAT_0f5dc5b0;
  }
  else {
    puStack_1b8 = (undefined *)plVar6[2];
  }
  func_0x0ed621a0(&puStack_1b8,uStack_58._4_4_);
  puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
  uStack_1a8 = uStack_58._4_4_;
  plStack_1a0 = (long *)0x0;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0x73646e6f6365530e;
  uStack_170 = uStack_170 & 0xffffffffffffff00;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  uStack_130 = 0x3f600000;
  puStack_1b0 = auStack_78;
  func_0x048afb10(&lStack_160,8);
  uStack_108 = 0;
  lStack_100 = 0;
  lStack_118 = 0;
  uStack_110 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_f8 = 0xff00;
  uStack_f4 = uStack_f4 & 0xffffff00;
  uStack_f0 = uStack_f0 & 0xffffff00;
  uStack_ec = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0126a0;
  if (plStack_1a0 != (long *)0x0) {
    lVar2 = *plStack_1a0;
    plStack_1a0 = plVar6;
    (**(code **)(lVar2 + 8))();
    plVar6 = plStack_1a0;
  }
  plStack_1a0 = plVar6;
  auStack_e8[0] = uStack_1a8;
  plStack_e0 = (long *)0x0;
  uStack_d8 = (long *)((ulong)uStack_d8 & 0xffffffff00000000);
  uStack_d0 = 1;
  uStack_c8 = 0;
  puStack_c0 = &UNK_05daeda0;
  puStack_b8 = &SUB_048b06d0;
  puStack_b0 = &SUB_05daea90;
  puStack_a8 = &UNK_0876ce10;
  puStack_a0 = &UNK_0876cf70;
  uStack_98 = 0;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  func_0x048b05a0(puStack_1b0,auStack_e8);
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_88 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      func_0x0412c2d0(plVar6);
    }
  }
  puVar3 = puStack_1b0;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_e8[0] = _DAT_0f550a0c;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar2 = lStack_198;
  plVar1 = plStack_1a0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  plStack_e0 = plVar6 + 3;
  plStack_1a0 = (long *)0x0;
  lStack_198 = 0;
  plVar6[3] = (long)plVar1;
  plVar6[4] = lVar2;
  plVar6[7] = lStack_180;
  plVar6[5] = lStack_190;
  plVar6[6] = lStack_188;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  plVar6[10] = lStack_168;
  plVar6[8] = lStack_178;
  plVar6[9] = uStack_170;
  lStack_178 = 0;
  uStack_170 = 0;
  lStack_168 = 0;
  plVar6[0xb] = lStack_160;
  plVar6[0xc] = lStack_158;
  plVar6[0xd] = lStack_150;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  plVar6[0xe] = lStack_148;
  plVar6[0xf] = lStack_140;
  plVar6[0x10] = lStack_138;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  *(undefined4 *)(plVar6 + 0x11) = uStack_130;
  plVar6[0x12] = lStack_128;
  plVar6[0x13] = lStack_120;
  plVar6[0x14] = lStack_118;
  lStack_128 = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  plVar6[0x17] = lStack_100;
  *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_110;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack_110._4_4_;
  *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_108;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack_108._4_4_;
  uStack_110 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_ec,CONCAT43(uStack_f0,uStack_f4._1_3_));
  plVar6[0x18] = CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8));
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_d8 = plVar6;
  func_0x048afd20(puVar3,auStack_e8);
  plVar6 = uStack_d8;
  if (uStack_d8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_d8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar6);
    }
  }
  lVar2 = *(long *)(puVar3 + 0x10);
  iVar4 = *(int *)(puVar3 + 0x1c);
  if (iVar4 == 2) {
    piVar8 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar4 = *piVar8;
    while (iVar4 != *(int *)(puVar3 + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar4 = *piVar8;
    }
    for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar3 + 8); piVar8 = *(int **)(piVar8 + 0xe)) {
    }
LAB_086bc38a:
    piVar8[4] = piVar8[4] | (int)puStack_1b8 << 0x10;
  }
  else {
    if (iVar4 == 1) {
      piVar8 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
      iVar4 = *piVar8;
      while (iVar4 != *(int *)(puVar3 + 0x18)) {
        piVar8 = piVar8 + 0x1a;
        iVar4 = *piVar8;
      }
      goto LAB_086bc38a;
    }
    if (iVar4 == 0) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)puStack_1b8 << 0x10;
    }
  }
  FUN_048b0bc0(&plStack_1a0);
LAB_086bc392:
  if ((DAT_0f5dc6e8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc6e8), iVar4 != 0)) {
    func_0x0876d200();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc668,0xf53dab8);
    func_0x0410844d(&DAT_0f5dc6e8);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5dc668 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_086bc3f0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5dc668 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_086bc3f0:
    puVar5 = &DAT_0f5dc668;
    iVar4 = iRam000000000f5dc6c8;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar2 = *(long *)((long)puVar5 + 0x68), lVar2 != 0)) {
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar5 = (undefined *)(lVar2 + 9);
    if (bVar10) {
      puVar5 = *(undefined **)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar5 = &UNK_0134742b;
    uVar7 = 5;
  }
  func_0x0876d5e0(&puStack_1b8,param_1,puVar5,uVar7);
  if ((DAT_0f5dc7a0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc7a0), iVar4 != 0)) {
    func_0x0876e1b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc720,0xf53dab8);
    func_0x0410844d(&DAT_0f5dc7a0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5dc720 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_086bc4c0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5dc720 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_086bc4c0:
    puVar5 = &DAT_0f5dc720;
    iVar4 = iRam000000000f5dc780;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar2 = *(long *)(puVar5 + 0x68), lVar2 != 0)) {
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar5 = (undefined *)(lVar2 + 9);
    if (bVar10) {
      puVar5 = *(undefined **)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar5 = &UNK_013ff8ac;
    uVar7 = 6;
  }
  func_0x0876e590(&puStack_1b8,param_1,puVar5,uVar7);
  if ((DAT_0f5dc210 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dc210), iVar4 != 0)) {
    func_0x087651b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc190,0xf53dab8);
    func_0x0410844d(&DAT_0f5dc210);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5dc190 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_086bc590;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5dc190 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_086bc590:
    puVar5 = &DAT_0f5dc190;
    iVar4 = iRam000000000f5dc1f0;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar2 = *(long *)(puVar5 + 0x68), lVar2 != 0)) {
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0876f0a0(&lStack_80,param_1,lVar9,uVar7);
  }
  else {
    func_0x0876f0a0(&lStack_80,param_1,&UNK_012922f6,0x27);
  }
  if (cStack_50 == '\0') {
    func_0x0876fc30(&puStack_1b8,&lStack_80,&UNK_0125c4c2,0x13,1);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f10d618;
    if (plStack_1a0 != (long *)0x0) {
      lVar2 = *plStack_1a0;
      plStack_1a0 = plVar6;
      (**(code **)(lVar2 + 8))();
      plVar6 = plStack_1a0;
    }
    plStack_1a0 = plVar6;
    auStack_e8[0] = uStack_1a8;
    plStack_e0 = (long *)0x0;
    uStack_d8 = (long *)((ulong)uStack_d8 & 0xffffffff00000000);
    uStack_d0 = 1;
    uStack_c8 = 0;
    puStack_c0 = &UNK_08202a20;
    puStack_b8 = &SUB_048b06d0;
    puStack_b0 = &SUB_079567f0;
    puStack_a8 = &UNK_087701f0;
    puStack_a0 = &UNK_08770350;
    uStack_98 = 0;
    uStack_90 = 0;
    plStack_88 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e8);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_88 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0876fef0(&puStack_1b8);
    FUN_048b0bc0(&plStack_1a0);
    func_0x086bdc50(&puStack_1b8,&lStack_80,&UNK_01227728,4);
    func_0x086bdc50(&puStack_1b8,&lStack_80,&UNK_011b5cc3,9);
    func_0x086bdc50(&puStack_1b8,&lStack_80,&UNK_014cfc1e,8);
    func_0x086bdc50(&puStack_1b8,&lStack_80,&UNK_014ce0b2,4);
    func_0x086bdc50(&puStack_1b8,&lStack_80,&UNK_014cfc27,6);
    func_0x086bdc50(&puStack_1b8,&lStack_80,&UNK_0134742b,5);
    func_0x086bdc50(&puStack_1b8,&lStack_80,&UNK_013ff8ac,6);
  }
  return;
}


