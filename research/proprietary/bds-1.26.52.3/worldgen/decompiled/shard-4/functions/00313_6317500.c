/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6417500 (ELF vaddr 0x6317500)
 * Label: caller-of-callee
 * Body:  [[06417500, 06417cb1] [06417cc0, 06417e05]]
 * Ghidra: FUN_06417500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06417500(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  byte unaff_BPL;
  ulong uVar12;
  long unaff_R14;
  bool bVar13;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined4 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  uint uStack_ec;
  uint uStack_e8;
  undefined1 uStack_e4;
  undefined4 auStack_e0 [2];
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  char cStack_38;
  
  func_0x05d2c950();
  uVar2 = _DAT_0f543930;
  uVar5 = func_0x0eee2e90(_DAT_0f543930);
  if (uVar5 < 0xfffffffffffffff8) {
    unaff_R14 = (long)&uStack_1b0 + 1;
    if (uVar5 < 0x17) {
      uStack_1b0 = (undefined *)CONCAT71(uStack_1b0._1_7_,(char)uVar5 * '\x02');
      lVar6 = unaff_R14;
      if (uVar5 != 0) goto LAB_0641759d;
    }
    else {
      uVar12 = 0x1a;
      if ((uVar5 | 7) != 0x17) {
        uVar12 = (uVar5 | 7) + 1;
      }
      lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
      if (lVar6 == 0) {
        func_0x0eec74c0(uVar12,0);
      }
      uStack_1b0 = (undefined *)(uVar12 | 1);
      puStack_1a8 = (undefined1 *)uVar5;
      lStack_1a0 = lVar6;
LAB_0641759d:
      memmove(lVar6,uVar2,uVar5);
    }
    *(undefined1 *)(lVar6 + uVar5) = 0;
    unaff_BPL = (byte)uStack_1b0 & 1;
    param_4 = (undefined1 *)(ulong)((byte)uStack_1b0 >> 1);
    if (((ulong)uStack_1b0 & 1) != 0) {
      param_4 = puStack_1a8;
      unaff_R14 = lStack_1a0;
    }
    if (DAT_0f573f50 == '\0') goto LAB_06417d1a;
  }
  else {
    func_0x04882e30();
LAB_06417d1a:
    iVar4 = FUN_04108328(&DAT_0f573f50);
    if (iVar4 != 0) {
      func_0x0648e1a0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f573ed0,0xf53dab8);
      func_0x0410844d(&DAT_0f573f50);
    }
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f573ed0 + 4)) * 8);
  do {
    lVar6 = *plVar10;
    if (lVar6 == -1) goto LAB_06417630;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f573ed0 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_06417630:
    puVar7 = &DAT_0f573ed0;
    if (iRam000000000f573f30 != -0x2b3da790) goto LAB_06417695;
LAB_0641765b:
    lVar6 = *(long *)(puVar7 + 0x68);
    if (lVar6 == 0) goto LAB_06417695;
    bVar13 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar11 = lVar6 + 9;
    if (bVar13) {
      lVar11 = *(long *)(lVar6 + 0x18);
    }
    uVar5 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar13) {
      uVar5 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0648e670(&lStack_68,param_1,lVar11,uVar5);
    if (unaff_BPL != 0) goto LAB_064176b6;
  }
  else {
    puVar7 = (undefined *)plVar10[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0641765b;
LAB_06417695:
    func_0x0648e670(&lStack_68,param_1,unaff_R14,param_4);
    if (((ulong)uStack_1b0 & 1) != 0) {
LAB_064176b6:
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
  }
  if (cStack_38 != '\0') {
    return;
  }
  func_0x0648ec60(&uStack_1b0,lStack_68 + 0x18);
  if (uStack_198._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)(lStack_1a0 + 0x78) + 0x60);
    iVar4 = *piVar8;
    while (iVar4 != (int)uStack_198) {
      piVar8 = piVar8 + 0x16;
      iVar4 = *piVar8;
    }
    uVar5 = *(ulong *)(piVar8 + 0xc);
    while ((undefined1 *)uVar5 != puStack_1a8) {
      piVar8 = *(int **)(piVar8 + 0xe);
      uVar5 = *(ulong *)(piVar8 + 0xc);
    }
LAB_0641773f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)(lStack_1a0 + 0x78) + 0x48);
      iVar4 = *piVar8;
      while (iVar4 != (int)uStack_198) {
        piVar8 = piVar8 + 0x1a;
        iVar4 = *piVar8;
      }
      goto LAB_0641773f;
    }
    if (uStack_198._4_4_ == 0) {
      *(uint *)(lStack_1a0 + 0x18) = *(uint *)(lStack_1a0 + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f573f70 == '\0') && (iVar4 = FUN_04108328(&DAT_0f573f70), iVar4 != 0)) {
    func_0x0648e2b0();
    func_0x0410844d(&DAT_0f573f70);
  }
  uStack_40 = 0x1fa6788e00000001;
  if ((DAT_0f573f50 == '\0') && (iVar4 = FUN_04108328(&DAT_0f573f50), iVar4 != 0)) {
    func_0x0648e1a0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f573ed0,0xf53dab8);
    func_0x0410844d(&DAT_0f573f50);
  }
  puStack_1a8 = (undefined1 *)(lStack_68 + 0x18);
  plVar10 = (long *)(*(long *)(lStack_68 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_68 + 0x20) - *(long *)(lStack_68 + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f573ed0 + 4)) * 8);
  do {
    lVar6 = *plVar10;
    if (lVar6 == -1) goto LAB_064177d0;
    plVar10 = (long *)(*(long *)(lStack_68 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(lStack_68 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f573ed0 + 4)
          );
  if (plVar10 == *(long **)(lStack_68 + 0x38)) {
LAB_064177d0:
    uStack_1b0 = &DAT_0f573ed0;
  }
  else {
    uStack_1b0 = (undefined *)plVar10[2];
  }
  func_0x0ed621a0(&uStack_1b0,uStack_40._4_4_);
  uStack_1b0 = (undefined *)CONCAT62(uStack_1b0._2_6_,0x10);
  lStack_1a0 = CONCAT44(lStack_1a0._4_4_,uStack_40._4_4_);
  uStack_198 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0x73706f72506d0c;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0x3f600000;
  puStack_1a8 = auStack_60;
  func_0x048afb10(&lStack_158,8);
  uStack_100 = 0;
  lStack_f8 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  uStack_f0 = 0xff00;
  uStack_ec = uStack_ec & 0xffffff00;
  uStack_e8 = uStack_e8 & 0xffffff00;
  uStack_e4 = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f032f98;
  if (uStack_198 != (long *)0x0) {
    lVar6 = *uStack_198;
    uStack_198 = puVar9;
    (**(code **)(lVar6 + 8))();
    puVar9 = uStack_198;
  }
  uStack_198 = puVar9;
  auStack_e0[0] = (undefined4)lStack_1a0;
  plStack_d8 = (long *)0x0;
  uStack_d0 = (long *)((ulong)uStack_d0._4_4_ << 0x20);
  uStack_c8 = 1;
  uStack_c0 = 0;
  puStack_b8 = &UNK_0648f420;
  puStack_b0 = &SUB_048b06d0;
  puStack_a8 = &SUB_05e8c990;
  puStack_a0 = &UNK_0648f430;
  puStack_98 = &UNK_0648f5a0;
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  func_0x048b05a0(puStack_1a8,auStack_e0);
  plVar10 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      func_0x0412c2d0(plVar10);
    }
  }
  puVar3 = puStack_1a8;
  if ((DAT_0f550a20 == '\0') && (iVar4 = FUN_04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_e0[0] = _DAT_0f550a0c;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar6 = lStack_190;
  puVar9 = uStack_198;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef439d0;
  plStack_d8 = plVar10 + 3;
  uStack_198 = (long *)0x0;
  lStack_190 = 0;
  plVar10[3] = (long)puVar9;
  plVar10[4] = lVar6;
  plVar10[7] = lStack_178;
  plVar10[5] = lStack_188;
  plVar10[6] = lStack_180;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  plVar10[10] = lStack_160;
  plVar10[8] = lStack_170;
  plVar10[9] = lStack_168;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  plVar10[0xb] = lStack_158;
  plVar10[0xc] = lStack_150;
  plVar10[0xd] = lStack_148;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  plVar10[0xe] = lStack_140;
  plVar10[0xf] = lStack_138;
  plVar10[0x10] = lStack_130;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  *(undefined4 *)(plVar10 + 0x11) = uStack_128;
  plVar10[0x12] = lStack_120;
  plVar10[0x13] = lStack_118;
  plVar10[0x14] = lStack_110;
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  plVar10[0x17] = lStack_f8;
  *(undefined4 *)(plVar10 + 0x15) = (undefined4)uStack_108;
  *(undefined4 *)((long)plVar10 + 0xac) = uStack_108._4_4_;
  *(undefined4 *)(plVar10 + 0x16) = (undefined4)uStack_100;
  *(undefined4 *)((long)plVar10 + 0xb4) = uStack_100._4_4_;
  uStack_108 = 0;
  uStack_100 = 0;
  lStack_f8 = 0;
  *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_e4,CONCAT43(uStack_e8,uStack_ec._1_3_));
  plVar10[0x18] = CONCAT44(uStack_ec,CONCAT22(uStack_ee,uStack_f0));
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_d0 = plVar10;
  func_0x048afd20(puVar3,auStack_e0);
  plVar10 = uStack_d0;
  if (uStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_d0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      func_0x0412c2d0(plVar10);
    }
  }
  lVar6 = *(long *)(puVar3 + 0x10);
  iVar4 = *(int *)(puVar3 + 0x1c);
  if (iVar4 == 2) {
    piVar8 = *(int **)(*(long *)(lVar6 + 0x78) + 0x60);
    iVar4 = *piVar8;
    while (iVar4 != *(int *)(puVar3 + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar4 = *piVar8;
    }
    for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar3 + 8); piVar8 = *(int **)(piVar8 + 0xe)) {
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | (int)uStack_1b0 << 0x10;
      }
      goto LAB_06417ccd;
    }
    piVar8 = *(int **)(*(long *)(lVar6 + 0x78) + 0x48);
    iVar4 = *piVar8;
    while (iVar4 != *(int *)(puVar3 + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar4 = *piVar8;
    }
  }
  piVar8[4] = piVar8[4] | (int)uStack_1b0 << 0x10;
LAB_06417ccd:
  func_0x048b0bc0(&uStack_198);
  return;
}


