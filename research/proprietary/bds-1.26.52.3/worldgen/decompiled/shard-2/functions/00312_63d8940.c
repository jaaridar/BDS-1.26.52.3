/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x64d8940 (ELF vaddr 0x63d8940)
 * Label: caller-of-callee
 * Body:  [[064d8940, 064d8eb1] [064d8ec0, 064d98e7] [064d98f0, 064d9a86]]
 * Ghidra: FUN_064d8940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_064d8940(long param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  bool bVar13;
  undefined4 auStack_260 [2];
  long *plStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  long lStack_1f8;
  undefined4 *puStack_1f0;
  undefined4 uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined6 uStack_1ae;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined4 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined2 uStack_138;
  undefined2 uStack_136;
  uint uStack_134;
  uint uStack_130;
  undefined1 uStack_12c;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
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
  int iStack_80;
  undefined4 uStack_7c;
  char cStack_78;
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
  int iStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  lVar7 = param_1 + 0x18;
  lVar5 = func_0x0631c870(lVar7);
  if ((*(int *)(lVar5 + 0x60) == -0x2b3da790) && (lVar5 = *(long *)(lVar5 + 0x68), lVar5 != 0)) {
    bVar13 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar12 = lVar5 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar5 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar13) {
      uVar10 = *(ulong *)(lVar5 + 0x10);
    }
    func_0x065a0760(&uStack_120,param_1,lVar12,uVar10);
    if (cStack_f0 == '\0') goto LAB_064d89e6;
LAB_064d89a6:
    lVar5 = func_0x06522f30(lVar7);
    if (*(int *)(lVar5 + 0x60) == -0x2b3da790) goto LAB_064d8ee3;
LAB_064d8f3a:
    func_0x065a12f0(&uStack_120,param_1,&UNK_01327db6,0x23);
    if (cStack_f0 != '\0') goto LAB_064d8f20;
LAB_064d8f60:
    func_0x065a1b50(&lStack_1f8,&uStack_120,&UNK_013425cb);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f01ae00;
    if (plStack_1e0 != (long *)0x0) {
      lVar5 = *plStack_1e0;
      plStack_1e0 = plVar6;
      (**(code **)(lVar5 + 8))();
      plVar6 = plStack_1e0;
    }
    plStack_1e0 = plVar6;
    auStack_260[0] = uStack_1e8;
    plStack_258 = (long *)0x0;
    uStack_250 = (long *)((ulong)uStack_250 & 0xffffffff00000000);
    uStack_248 = 1;
    uStack_240 = 0;
    puStack_238 = &UNK_06046510;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0602fbb0;
    puStack_220 = &UNK_065a2020;
    puStack_218 = &UNK_065a2180;
    uStack_210 = 0;
    uStack_208 = 0;
    plStack_200 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,auStack_260);
    plVar6 = plStack_200;
    if (plStack_200 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_200 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_200 + 0x10))(plStack_200);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x065a1d20(&lStack_1f8);
    cStack_b8 = cStack_f0;
    uStack_c8 = uStack_100;
    uStack_c4 = uStack_fc;
    iStack_c0 = (int)uStack_f8;
    uStack_bc = uStack_f8._4_4_;
    uStack_d8 = uStack_110;
    uStack_d4 = uStack_10c;
    uStack_d0 = uStack_108;
    uStack_cc = uStack_104;
    uStack_e8 = CONCAT44(uStack_11c,uStack_120);
    uStack_e0 = (long *)CONCAT44(uStack_114,uStack_118);
    func_0x048b0bc0(&plStack_1e0);
    func_0x065a1b50(&lStack_1f8,&uStack_e8,&UNK_0119ed3b);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f012080;
    if (plStack_1e0 != (long *)0x0) {
      lVar5 = *plStack_1e0;
      plStack_1e0 = plVar6;
      (**(code **)(lVar5 + 8))();
      plVar6 = plStack_1e0;
    }
    plStack_1e0 = plVar6;
    auStack_260[0] = uStack_1e8;
    plStack_258 = (long *)0x0;
    uStack_250 = (long *)((ulong)uStack_250 & 0xffffffff00000000);
    uStack_248 = 1;
    uStack_240 = 0;
    puStack_238 = &UNK_05dd3ca0;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_05dd3990;
    puStack_220 = &UNK_065a2350;
    puStack_218 = &UNK_065a24b0;
    uStack_210 = 0;
    uStack_208 = 0;
    plStack_200 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,auStack_260);
    plVar6 = plStack_200;
    if (plStack_200 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_200 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_200 + 0x10))(plStack_200);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x065a1d20(&lStack_1f8);
    func_0x048b0bc0(&plStack_1e0);
    lVar7 = func_0x06521710(lVar7);
    if (*(int *)(lVar7 + 0x60) == -0x2b3da790) goto LAB_064d9203;
LAB_064d9245:
    func_0x065a2690(&uStack_120,param_1,&UNK_012f38e2,0x21);
  }
  else {
    func_0x065a0760(&uStack_120,param_1,&UNK_014cb72e,0x26);
    if (cStack_f0 != '\0') goto LAB_064d89a6;
LAB_064d89e6:
    if ((DAT_0f56d9a8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f56d9a8), iVar4 != 0)) {
      func_0x0631c800(0xf56d990);
      func_0x0410844d(&DAT_0f56d9a8);
    }
    uStack_f8 = 0x7d12866000000001;
    lVar5 = CONCAT44(uStack_11c,uStack_120) + 0x18;
    lStack_1f8 = func_0x0631c870(lVar5);
    puStack_1f0 = (undefined4 *)lVar5;
    FUN_0ed621a0(&lStack_1f8,uStack_f8._4_4_);
    puStack_1f0 = &uStack_118;
    lStack_1f8 = CONCAT62(lStack_1f8._2_6_,1);
    uStack_1e8 = uStack_f8._4_4_;
    plStack_1e0 = (long *)0x0;
    lStack_1d8 = 0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    uStack_1b8 = 0x10;
    uStack_1b7 = 0x496d6165727473;
    uStack_1b0 = 100;
    uStack_1af = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    uStack_170 = 0x3f600000;
    func_0x048afb10(&lStack_1a0,8);
    uStack_148 = 0;
    lStack_140 = 0;
    lStack_158 = 0;
    uStack_150 = 0;
    lStack_168 = 0;
    lStack_160 = 0;
    uStack_138 = 0xff00;
    uStack_134 = uStack_134 & 0xffffff00;
    uStack_130 = uStack_130 & 0xffffff00;
    uStack_12c = 0;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f01ae00;
    if (plStack_1e0 != (long *)0x0) {
      lVar5 = *plStack_1e0;
      plStack_1e0 = plVar6;
      (**(code **)(lVar5 + 8))();
      plVar6 = plStack_1e0;
    }
    plStack_1e0 = plVar6;
    auStack_260[0] = uStack_1e8;
    plStack_258 = (long *)0x0;
    uStack_250 = (long *)((ulong)uStack_250._4_4_ << 0x20);
    uStack_248 = 1;
    uStack_240 = 0;
    puStack_238 = &UNK_06046510;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0602fbb0;
    puStack_220 = &UNK_065a0fc0;
    puStack_218 = &UNK_065a1120;
    uStack_210 = 0;
    uStack_208 = 0;
    plStack_200 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,auStack_260);
    plVar6 = plStack_200;
    if (plStack_200 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_200 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_200 + 0x10))(plStack_200);
        FUN_0412c2d0(plVar6);
      }
    }
    puVar2 = puStack_1f0;
    if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_260[0] = _DAT_0f550a0c;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar5 = lStack_1d8;
    plVar1 = plStack_1e0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef439d0;
    plStack_258 = plVar6 + 3;
    plStack_1e0 = (long *)0x0;
    lStack_1d8 = 0;
    plVar6[3] = (long)plVar1;
    plVar6[4] = lVar5;
    plVar6[7] = lStack_1c0;
    plVar6[5] = lStack_1d0;
    plVar6[6] = lStack_1c8;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    plVar6[10] = lStack_1a8;
    plVar6[8] = CONCAT71(uStack_1b7,uStack_1b8);
    plVar6[9] = CONCAT62(uStack_1ae,CONCAT11(uStack_1af,uStack_1b0));
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    uStack_1b0 = 0;
    uStack_1af = 0;
    uStack_1ae = 0;
    lStack_1a8 = 0;
    plVar6[0xb] = lStack_1a0;
    plVar6[0xc] = lStack_198;
    plVar6[0xd] = lStack_190;
    lStack_1a0 = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    plVar6[0xe] = lStack_188;
    plVar6[0xf] = lStack_180;
    plVar6[0x10] = lStack_178;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    *(undefined4 *)(plVar6 + 0x11) = uStack_170;
    plVar6[0x12] = lStack_168;
    plVar6[0x13] = lStack_160;
    plVar6[0x14] = lStack_158;
    lStack_168 = 0;
    lStack_160 = 0;
    lStack_158 = 0;
    plVar6[0x17] = lStack_140;
    *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_150;
    *(undefined4 *)((long)plVar6 + 0xac) = uStack_150._4_4_;
    *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_148;
    *(undefined4 *)((long)plVar6 + 0xb4) = uStack_148._4_4_;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_140 = 0;
    *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_12c,CONCAT43(uStack_130,uStack_134._1_3_));
    plVar6[0x18] = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
    uStack_e8 = 0;
    uStack_e0 = (long *)0x0;
    uStack_250 = plVar6;
    FUN_048afd20(puVar2,auStack_260);
    plVar6 = uStack_250;
    if (uStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_250 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*uStack_250 + 0x10))(uStack_250);
        FUN_0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_e0;
    if (uStack_e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_e0 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
        FUN_0412c2d0(plVar6);
      }
    }
    lVar5 = *(long *)(puVar2 + 4);
    iVar4 = puVar2[7];
    if (iVar4 == 2) {
      piVar11 = *(int **)(*(long *)(lVar5 + 0x78) + 0x60);
      iVar4 = *piVar11;
      while (iVar4 != puVar2[6]) {
        piVar11 = piVar11 + 0x16;
        iVar4 = *piVar11;
      }
      for (; *(long *)(piVar11 + 0xc) != *(long *)(puVar2 + 2); piVar11 = *(int **)(piVar11 + 0xe))
      {
      }
LAB_064d8eca:
      piVar11[4] = piVar11[4] | (int)lStack_1f8 << 0x10;
    }
    else {
      if (iVar4 == 1) {
        piVar11 = *(int **)(*(long *)(lVar5 + 0x78) + 0x48);
        iVar4 = *piVar11;
        while (iVar4 != puVar2[6]) {
          piVar11 = piVar11 + 0x1a;
          iVar4 = *piVar11;
        }
        goto LAB_064d8eca;
      }
      if (iVar4 == 0) {
        *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) | (int)lStack_1f8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1e0);
    lVar5 = func_0x06522f30(lVar7);
    if (*(int *)(lVar5 + 0x60) != -0x2b3da790) goto LAB_064d8f3a;
LAB_064d8ee3:
    lVar5 = *(long *)(lVar5 + 0x68);
    if (lVar5 == 0) goto LAB_064d8f3a;
    bVar13 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar12 = lVar5 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar5 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar13) {
      uVar10 = *(ulong *)(lVar5 + 0x10);
    }
    func_0x065a12f0(&uStack_120,param_1,lVar12,uVar10);
    if (cStack_f0 == '\0') goto LAB_064d8f60;
LAB_064d8f20:
    lVar7 = func_0x06521710(lVar7);
    if (*(int *)(lVar7 + 0x60) != -0x2b3da790) goto LAB_064d9245;
LAB_064d9203:
    lVar7 = *(long *)(lVar7 + 0x68);
    if (lVar7 == 0) goto LAB_064d9245;
    bVar13 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar5 = lVar7 + 9;
    if (bVar13) {
      lVar5 = *(long *)(lVar7 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar13) {
      uVar10 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x065a2690(&uStack_120,param_1,lVar5,uVar10);
  }
  if (cStack_f0 != '\0') {
    return;
  }
  func_0x065a2f40(&lStack_1f8,&uStack_120,&UNK_013425cb,8);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f01ae00;
  if (plStack_1e0 != (long *)0x0) {
    lVar7 = *plStack_1e0;
    plStack_1e0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_1e0;
  }
  plStack_1e0 = plVar6;
  auStack_260[0] = uStack_1e8;
  plStack_258 = (long *)0x0;
  uStack_250 = (long *)((ulong)uStack_250 & 0xffffffff00000000);
  uStack_248 = 1;
  uStack_240 = 0;
  puStack_238 = &UNK_06046510;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &UNK_0602fbb0;
  puStack_220 = &UNK_065a3430;
  puStack_218 = &UNK_065a3590;
  uStack_210 = 0;
  uStack_208 = 0;
  plStack_200 = (long *)0x0;
  func_0x048b05a0(puStack_1f0,auStack_260);
  plVar6 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_200 + 0x10))(plStack_200);
      FUN_0412c2d0(plVar6);
    }
  }
  func_0x065a3130(&lStack_1f8);
  cStack_78 = cStack_f0;
  uStack_88 = uStack_100;
  uStack_84 = uStack_fc;
  iStack_80 = (int)uStack_f8;
  uStack_7c = uStack_f8._4_4_;
  uStack_98 = uStack_110;
  uStack_94 = uStack_10c;
  uStack_90 = uStack_108;
  uStack_8c = uStack_104;
  uStack_a8 = uStack_120;
  uStack_a4 = uStack_11c;
  uStack_a0 = uStack_118;
  uStack_9c = uStack_114;
  func_0x048b0bc0(&plStack_1e0);
  func_0x065a2f40(&lStack_1f8,&uStack_a8,&UNK_0119ed3b,8);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f012080;
  if (plStack_1e0 != (long *)0x0) {
    lVar7 = *plStack_1e0;
    plStack_1e0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_1e0;
  }
  plStack_1e0 = plVar6;
  auStack_260[0] = uStack_1e8;
  plStack_258 = (long *)0x0;
  uStack_250 = (long *)((ulong)uStack_250 & 0xffffffff00000000);
  uStack_248 = 1;
  uStack_240 = 0;
  puStack_238 = &UNK_05dd3ca0;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &UNK_05dd3990;
  puStack_220 = &UNK_065a3760;
  puStack_218 = &UNK_065a38c0;
  uStack_210 = 0;
  uStack_208 = 0;
  plStack_200 = (long *)0x0;
  func_0x048b05a0(puStack_1f0,auStack_260);
  plVar6 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_200 + 0x10))(plStack_200);
      FUN_0412c2d0(plVar6);
    }
  }
  func_0x065a3130(&lStack_1f8);
  cStack_38 = cStack_78;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  iStack_40 = iStack_80;
  uStack_3c = uStack_7c;
  uStack_58 = uStack_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_68 = uStack_a8;
  uStack_64 = uStack_a4;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  func_0x048b0bc0(&plStack_1e0);
  func_0x065a2f40(&lStack_1f8,&uStack_68,&UNK_01414c86,7);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (plStack_1e0 != (long *)0x0) {
    lVar7 = *plStack_1e0;
    plStack_1e0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_1e0;
  }
  plStack_1e0 = plVar6;
  auStack_260[0] = uStack_1e8;
  plStack_258 = (long *)0x0;
  uStack_250 = (long *)((ulong)uStack_250 & 0xffffffff00000000);
  uStack_248 = 1;
  uStack_240 = 0;
  puStack_238 = &UNK_04906f70;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &UNK_04906c50;
  puStack_220 = &UNK_065a3aa0;
  puStack_218 = &UNK_065a3c00;
  uStack_210 = 0;
  uStack_208 = 0;
  plStack_200 = (long *)0x0;
  func_0x048b05a0(puStack_1f0,auStack_260);
  plVar6 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_200 + 0x10))(plStack_200);
      FUN_0412c2d0(plVar6);
    }
  }
  func_0x065a3130(&lStack_1f8);
  cStack_b8 = cStack_38;
  uStack_c8 = uStack_48;
  uStack_c4 = uStack_44;
  iStack_c0 = iStack_40;
  uStack_bc = uStack_3c;
  uStack_d8 = uStack_58;
  uStack_d4 = uStack_54;
  uStack_d0 = uStack_50;
  uStack_cc = uStack_4c;
  uStack_e8 = CONCAT44(uStack_64,uStack_68);
  uStack_e0 = (long *)CONCAT44(uStack_5c,uStack_60);
  func_0x048b0bc0(&plStack_1e0);
  func_0x065a2f40(&lStack_1f8,&uStack_e8,&UNK_012bef24,7);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0409f0;
  if (plStack_1e0 != (long *)0x0) {
    lVar7 = *plStack_1e0;
    plStack_1e0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_1e0;
  }
  plStack_1e0 = plVar6;
  auStack_260[0] = uStack_1e8;
  plStack_258 = (long *)0x0;
  uStack_250 = (long *)((ulong)uStack_250 & 0xffffffff00000000);
  uStack_248 = 1;
  uStack_240 = 0;
  puStack_238 = &UNK_065a65e0;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &UNK_065a52f0;
  puStack_220 = &UNK_065a65f0;
  puStack_218 = &UNK_065a67e0;
  uStack_210 = 0;
  uStack_208 = 0;
  plStack_200 = (long *)0x0;
  func_0x048b05a0(puStack_1f0,auStack_260);
  plVar6 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_200 + 0x10))(plStack_200);
      FUN_0412c2d0(plVar6);
    }
  }
  func_0x065a3130(&lStack_1f8);
  uVar3 = uStack_bc;
  iVar4 = iStack_c0;
  lVar7 = uStack_e8;
  func_0x048b0bc0(&plStack_1e0);
  if (iVar4 != 4) {
    if (iVar4 != 1) {
      return;
    }
    lVar7 = lVar7 + 0x18;
    uVar8 = func_0x06521710(lVar7);
    lVar7 = func_0x048b0c90(lVar7,uVar8,uVar3,1);
    if (lVar7 == 0) {
      lStack_1f8 = 0;
      puStack_1f0 = (undefined4 *)0x0;
      func_0x048b0d20(&lStack_1f8);
      lVar7 = lStack_1f8;
    }
    lVar7 = *(long *)(lVar7 + 0x58);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_064d993e;
  }
  lVar7 = lVar7 + 0x18;
  uVar8 = func_0x06521710(lVar7);
  lVar7 = func_0x048b1040(lVar7,uVar8,uVar3,1);
  if (lVar7 == 0) {
    lStack_1f8 = 0;
    puStack_1f0 = (undefined4 *)0x0;
    func_0x048b10d0(&lStack_1f8);
    lVar5 = *(long *)(lStack_1f8 + 0x38);
    lVar7 = lStack_1f8;
    if (lVar5 == 0) goto LAB_064d98c5;
LAB_064d98e1:
    do {
      lVar7 = lVar5;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (*(long *)(lVar7 + 0x38) == 0) {
        lStack_1f8 = 0;
        puStack_1f0 = (undefined4 *)0x0;
        func_0x048b10d0(&lStack_1f8);
        lVar5 = lStack_1f8;
      }
    } while (lVar5 != 0);
  }
  else {
    lVar5 = *(long *)(lVar7 + 0x38);
    if (*(long *)(lVar7 + 0x38) != 0) goto LAB_064d98e1;
LAB_064d98c5:
    lStack_1f8 = 0;
    puStack_1f0 = (undefined4 *)0x0;
    func_0x048b10d0(&lStack_1f8);
    lVar5 = lStack_1f8;
    if (lStack_1f8 != 0) goto LAB_064d98e1;
  }
  lVar7 = *(long *)(lVar7 + 0x48);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_064d993e:
  puVar9[1] = 0x2000000;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 0xff;
  *puVar9 = &UNK_0f4e3cf0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *(undefined8 *)((long)puVar9 + 0x29) = 0;
  *(undefined8 *)((long)puVar9 + 0x31) = 0;
  plVar6 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar9;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
  return;
}


