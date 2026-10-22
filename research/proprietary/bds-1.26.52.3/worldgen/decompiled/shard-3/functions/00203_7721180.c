/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7821180 (ELF vaddr 0x7721180)
 * Label: caller-of-callee
 * Body:  [[07821180, 07821a99] [07821aa0, 07822221] [07822230, 0782260b]]
 * Ghidra: FUN_07821180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07821180(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  bool bVar15;
  long lStack_188;
  long *plStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 uStack_50;
  char cStack_48;
  long lStack_38;
  
  if ((DAT_0f5af800 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af800), iVar5 != 0)) {
    func_0x0787f9a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5af780,0xf53dab8);
    func_0x0410844d(&DAT_0f5af800);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5af780 + 4)) * 8);
  do {
    lVar9 = *plVar8;
    if (lVar9 == -1) goto LAB_07821200;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5af780 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_07821200:
    puVar6 = &DAT_0f5af780;
    if (iRam000000000f5af7e0 != -0x2b3da790) goto LAB_07821282;
LAB_0782122b:
    lVar9 = *(long *)(puVar6 + 0x68);
    if (lVar9 == 0) goto LAB_07821282;
    bVar15 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar10 = lVar9 + 9;
    if (bVar15) {
      lVar10 = *(long *)(lVar9 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0787f190(&uStack_78,param_1,lVar10,uVar14);
    if (cStack_48 != '\0') goto LAB_07821268;
LAB_078212a8:
    uStack_50 = 0x1e1bc4d500000004;
    if ((DAT_0f5af820 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af820), iVar5 != 0)) {
      func_0x0787fab0();
      func_0x0410844d(&DAT_0f5af820);
    }
    puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,uStack_50._4_4_);
    uStack_170 = (long *)0x0;
    uStack_168 = (long *)((ulong)uStack_168._4_4_ << 0x20);
    uStack_160 = 1;
    puStack_158 = &SUB_048aead0;
    puStack_150 = &UNK_04905970;
    puStack_148 = &UNK_07880c40;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    plStack_128 = (long *)0x0;
    func_0x049057f0(&uStack_70,&puStack_178);
    func_0x048aea50(&puStack_178);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar7 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
      FUN_04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,_DAT_0f551bb4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar8 == (long *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef46c48;
    uStack_170 = plVar8 + 3;
    plVar8[3] = (long)puVar7;
    plVar8[4] = 0;
    *(undefined1 *)(plVar8 + 5) = 0xff;
    lStack_188 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = plVar8;
    lStack_38 = param_1 + 0x18;
    func_0x048afd20(&puStack_f8,&puStack_178);
    plVar8 = uStack_168;
    if (uStack_168 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_168 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_168 + 0x10))(uStack_168);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = plStack_180;
    if (plStack_180 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_180 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_180 + 0x10))(plStack_180);
        func_0x0412c2d0(plVar8);
      }
    }
    if ((DAT_0f5af820 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af820), iVar5 != 0)) {
      func_0x0787fab0();
      func_0x0410844d(&DAT_0f5af820);
    }
    if (iStack_54 == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_5c,uStack_60) + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != iStack_58) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar9 = *(long *)(piVar11 + 0xc);
      while (lVar9 != CONCAT44(uStack_64,uStack_68)) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar9 = *(long *)(piVar11 + 0xc);
      }
LAB_078214df:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
    }
    else {
      if (iStack_54 == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_5c,uStack_60) + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != iStack_58) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_078214df;
      }
      if (iStack_54 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_5c,uStack_60) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
    }
    if ((DAT_0f5af820 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af820), iVar5 != 0)) {
      func_0x0787fab0();
      func_0x0410844d(&DAT_0f5af820);
    }
    puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,0xbf75c8f8);
    uStack_170 = (long *)0x0;
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,1);
    uStack_160 = 0;
    puStack_158 = &SUB_048b2190;
    puStack_150 = &SUB_048b06d0;
    puStack_148 = &UNK_07880e60;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    plStack_128 = (long *)0x0;
    func_0x049057f0(&uStack_70,&puStack_178);
    func_0x048aea50(&puStack_178);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar7 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551cb0), iVar5 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,_DAT_0f551c9c);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar8 == (long *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef46c98;
    uStack_170 = plVar8 + 3;
    plVar8[3] = (long)puVar7;
    *(undefined1 *)(plVar8 + 4) = 0xff;
    lStack_188 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = plVar8;
    func_0x048afd20(&puStack_f8,&puStack_178);
    plVar8 = uStack_168;
    if (uStack_168 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_168 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_168 + 0x10))(uStack_168);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = plStack_180;
    if (plStack_180 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_180 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_180 + 0x10))(plStack_180);
        func_0x0412c2d0(plVar8);
      }
    }
    lVar9 = CONCAT44(uStack_74,uStack_78);
    iVar5 = (int)uStack_50;
    uVar3 = uStack_50._4_4_;
    uStack_d8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_80 = 0;
    uStack_f0 = 0xffffffffffffffff;
    uStack_e8 = 0;
    uStack_e0 = 0xff;
    puStack_f8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_d8);
    uStack_d0 = func_0x041681f0(&uStack_d8,0xf547a30);
    uStack_c8 = func_0x041681f0(&uStack_d8,0xf547770);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_f0 = 0x4000;
    uStack_170 = (long *)0x4000;
    uStack_168 = (long *)uStack_e8;
    uStack_160 = CONCAT71(uStack_160._1_7_,(undefined1)uStack_e0);
    puStack_178 = &UNK_0f4e3c70;
    func_0x04167a20(&puStack_158,&uStack_d8);
    puStack_150 = (undefined *)uStack_d0;
    puStack_148 = (undefined *)uStack_c8;
    uStack_140 = uStack_c0;
    uStack_138 = (undefined4)uStack_b8;
    uStack_134 = uStack_b8._4_4_;
    uStack_130 = uStack_b0;
    plStack_128 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      LOCK();
      plStack_a8[1] = plStack_a8[1] + 1;
      UNLOCK();
    }
    uStack_120 = uStack_a0;
    if ((uStack_98 & 1) == 0) {
      uStack_108 = uStack_88;
      uStack_118 = uStack_98;
      uStack_110 = uStack_90;
    }
    else {
      func_0x0412e5e0(&uStack_118,uStack_88,uStack_90);
    }
    uStack_100 = uStack_80;
    if (iVar5 == 4) {
      if ((DAT_0f5af800 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af800), iVar5 != 0)) {
        func_0x0787f9a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5af780,0xf53dab8);
        func_0x0410844d(&DAT_0f5af800);
      }
      plVar8 = (long *)(*(long *)(lVar9 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3
                                    ) - 1U & *(uint *)(_DAT_0f5af780 + 4)) * 8);
      do {
        lVar10 = *plVar8;
        if (lVar10 == -1) goto LAB_07821948;
        plVar8 = (long *)(*(long *)(lVar9 + 0x30) + lVar10 * 0x18);
      } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar10 * 0x18) !=
               *(uint *)(_DAT_0f5af780 + 4));
      if (plVar8 == *(long **)(lVar9 + 0x38)) {
LAB_07821948:
        puVar6 = &DAT_0f5af780;
      }
      else {
        puVar6 = (undefined *)plVar8[2];
      }
      lVar9 = func_0x048b1040(lVar9 + 0x18,puVar6,uVar3,1);
      if (lVar9 == 0) {
        lStack_188 = 0;
        plStack_180 = (long *)0x0;
        func_0x048b10d0(&lStack_188);
        lVar10 = *(long *)(lStack_188 + 0x38);
        lVar9 = lStack_188;
      }
      else {
        lVar10 = *(long *)(lVar9 + 0x38);
      }
      if (lVar10 != 0) goto LAB_07821aa5;
      lStack_188 = 0;
      plStack_180 = (long *)0x0;
      func_0x048b10d0(&lStack_188);
      lVar4 = lStack_188;
      while (lVar10 = lVar4, lVar10 != 0) {
LAB_07821aa5:
        lVar9 = lVar10;
        lVar4 = *(long *)(lVar10 + 0x38);
        if (*(long *)(lVar10 + 0x38) == 0) {
          lStack_188 = 0;
          plStack_180 = (long *)0x0;
          func_0x048b10d0(&lStack_188);
          lVar4 = lStack_188;
        }
      }
      lVar9 = *(long *)(lVar9 + 0x48);
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
LAB_07821aec:
      *(undefined1 *)(puVar7 + 3) = (undefined1)uStack_160;
      *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_170;
      *(undefined4 *)((long)puVar7 + 0xc) = uStack_170._4_4_;
      *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_168;
      *(uint *)((long)puVar7 + 0x14) = uStack_168._4_4_;
      *puVar7 = &UNK_0f4e3c70;
      func_0x04167a20(puVar7 + 4,&puStack_158);
      puVar7[5] = puStack_150;
      puVar7[6] = puStack_148;
      puVar7[7] = uStack_140;
      puVar7[8] = CONCAT44(uStack_134,uStack_138);
      puVar7[9] = uStack_130;
      puVar7[10] = plStack_128;
      uStack_130 = 0;
      plStack_128 = (long *)0x0;
      puVar7[0xb] = uStack_120;
      puVar7[0xe] = uStack_108;
      *(undefined4 *)(puVar7 + 0xc) = (undefined4)uStack_118;
      *(undefined4 *)((long)puVar7 + 100) = uStack_118._4_4_;
      *(undefined4 *)(puVar7 + 0xd) = (undefined4)uStack_110;
      *(undefined4 *)((long)puVar7 + 0x6c) = uStack_110._4_4_;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      puVar7[0xf] = uStack_100;
      plVar8 = *(long **)(lVar9 + 8);
      *(undefined8 **)(lVar9 + 8) = puVar7;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x28))();
      }
    }
    else if (iVar5 == 1) {
      if ((DAT_0f5af800 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af800), iVar5 != 0)) {
        func_0x0787f9a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5af780,0xf53dab8);
        func_0x0410844d(&DAT_0f5af800);
      }
      plVar8 = (long *)(*(long *)(lVar9 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3
                                    ) - 1U & *(uint *)(_DAT_0f5af780 + 4)) * 8);
      do {
        lVar10 = *plVar8;
        if (lVar10 == -1) goto LAB_078218c8;
        plVar8 = (long *)(*(long *)(lVar9 + 0x30) + lVar10 * 0x18);
      } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar10 * 0x18) !=
               *(uint *)(_DAT_0f5af780 + 4));
      if (plVar8 == *(long **)(lVar9 + 0x38)) {
LAB_078218c8:
        puVar6 = &DAT_0f5af780;
      }
      else {
        puVar6 = (undefined *)plVar8[2];
      }
      lVar9 = func_0x048b0c90(lVar9 + 0x18,puVar6,uVar3,1);
      if (lVar9 == 0) {
        lStack_188 = 0;
        plStack_180 = (long *)0x0;
        FUN_048b0d20(&lStack_188);
        lVar9 = lStack_188;
      }
      lVar9 = *(long *)(lVar9 + 0x58);
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      goto LAB_07821aec;
    }
    puStack_178 = &UNK_0f4e3c70;
    if ((uStack_118 & 1) != 0) {
      func_0x0412a280(uStack_108,uStack_118 & 0xfffffffffffffffe);
    }
    plVar8 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_128 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x04167a40(&puStack_158);
    puStack_f8 = &UNK_0f4e3c70;
    if ((uStack_98 & 1) != 0) {
      func_0x0412a280(uStack_88,uStack_98 & 0xfffffffffffffffe);
    }
    plVar8 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_a8 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x04167a40(&uStack_d8);
    lVar9 = func_0x07880460(lStack_38);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_07821cb3;
LAB_07821c71:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_07821cb3;
    bVar15 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar10 = lVar9 + 9;
    if (bVar15) {
      lVar10 = *(long *)(lVar9 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x07886650(&puStack_f8,param_1,lVar10,uVar14);
  }
  else {
    puVar6 = (undefined *)plVar8[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0782122b;
LAB_07821282:
    func_0x0787f190(&uStack_78,param_1,&UNK_011a1a53,8);
    if (cStack_48 == '\0') goto LAB_078212a8;
LAB_07821268:
    lVar9 = func_0x07880460(param_1 + 0x18);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_07821c71;
LAB_07821cb3:
    func_0x07886650(&puStack_f8,param_1,&UNK_011a1a53,8);
  }
  if ((char)uStack_c8 != '\0') {
    return;
  }
  uStack_d0 = 0x1e1bc4d500000004;
  if ((DAT_0f5af850 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af850), iVar5 != 0)) {
    func_0x07880340(0xf5af838);
    func_0x0410844d(&DAT_0f5af850);
  }
  puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,uStack_d0._4_4_);
  uStack_170 = (long *)0x0;
  uStack_168 = (long *)((ulong)uStack_168 & 0xffffffff00000000);
  uStack_160 = 1;
  puStack_158 = &SUB_048aead0;
  puStack_150 = &UNK_07886f20;
  puStack_148 = &UNK_07886fe0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  plStack_128 = (long *)0x0;
  func_0x049057f0(&uStack_f0,&puStack_178);
  func_0x048aea50(&puStack_178);
  uStack_68 = (undefined4)uStack_e0;
  uStack_64 = uStack_e0._4_4_;
  uStack_60 = (int)uStack_d8;
  uStack_5c = uStack_d8._4_4_;
  uStack_78 = (undefined4)uStack_f0;
  uStack_74 = uStack_f0._4_4_;
  uStack_70 = (undefined4)uStack_e8;
  uStack_6c = uStack_e8._4_4_;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f0e9d38;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,_DAT_0f551bb4);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  uStack_170 = plVar8 + 3;
  plVar8[3] = (long)puVar7;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  lStack_188 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = plVar8;
  func_0x048afd20(&uStack_78,&puStack_178);
  plVar8 = uStack_168;
  if (uStack_168 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_168 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_168 + 0x10))(uStack_168);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((DAT_0f5af850 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af850), iVar5 != 0)) {
    func_0x07880340(0xf5af838);
    func_0x0410844d(&DAT_0f5af850);
  }
  if (uStack_d8._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(uStack_e0 + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != (int)uStack_d8) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    uVar14 = *(ulong *)(piVar11 + 0xc);
    while (uVar14 != uStack_e8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      uVar14 = *(ulong *)(piVar11 + 0xc);
    }
LAB_07821f0f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
  }
  else {
    if (uStack_d8._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(uStack_e0 + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_d8) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_07821f0f;
    }
    if (uStack_d8._4_4_ == 0) {
      *(uint *)(uStack_e0 + 0x18) = *(uint *)(uStack_e0 + 0x18) | 0x20000;
    }
  }
  if ((DAT_0f5af850 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5af850), iVar5 != 0)) {
    func_0x07880340(0xf5af838);
    func_0x0410844d(&DAT_0f5af850);
  }
  puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,0xbf75c8f8);
  uStack_170 = (long *)0x0;
  uStack_168 = (long *)CONCAT44(uStack_168._4_4_,1);
  uStack_160 = 0;
  puStack_158 = &UNK_0787f8e0;
  puStack_150 = &SUB_048b06d0;
  puStack_148 = &UNK_07887340;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  plStack_128 = (long *)0x0;
  func_0x049057f0(&uStack_f0,&puStack_178);
  func_0x048aea50(&puStack_178);
  uStack_68 = (undefined4)uStack_e0;
  uStack_64 = uStack_e0._4_4_;
  uStack_60 = (int)uStack_d8;
  uStack_5c = uStack_d8._4_4_;
  uStack_78 = (undefined4)uStack_f0;
  uStack_74 = uStack_f0._4_4_;
  uStack_70 = (undefined4)uStack_e8;
  uStack_6c = uStack_e8._4_4_;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f0e9d38;
  if ((DAT_0f551cb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551cb0), iVar5 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,_DAT_0f551c9c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  uStack_170 = plVar8 + 3;
  plVar8[3] = (long)puVar7;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  lStack_188 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = plVar8;
  func_0x048afd20(&uStack_78,&puStack_178);
  plVar8 = uStack_168;
  if (uStack_168 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_168 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_168 + 0x10))(uStack_168);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      func_0x0412c2d0(plVar8);
    }
  }
  uVar3 = uStack_d0._4_4_;
  if ((int)uStack_d0 != 4) {
    if ((int)uStack_d0 != 1) {
      return;
    }
    puVar6 = puStack_f8 + 0x18;
    uVar12 = func_0x07880460(puVar6);
    puVar6 = (undefined *)func_0x048b0c90(puVar6,uVar12,uVar3,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_178 = (undefined *)0x0;
      uStack_170 = (long *)0x0;
      FUN_048b0d20(&puStack_178);
      puVar6 = puStack_178;
    }
    lVar9 = *(long *)(puVar6 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    goto LAB_0782227e;
  }
  puVar6 = puStack_f8 + 0x18;
  uVar12 = func_0x07880460(puVar6);
  puVar6 = (undefined *)func_0x048b1040(puVar6,uVar12,uVar3,1);
  if (puVar6 == (undefined *)0x0) {
    puStack_178 = (undefined *)0x0;
    uStack_170 = (long *)0x0;
    func_0x048b10d0(&puStack_178);
    puVar13 = *(undefined **)(puStack_178 + 0x38);
    puVar6 = puStack_178;
    if (puVar13 == (undefined *)0x0) goto LAB_078221ff;
LAB_0782221b:
    do {
      puVar6 = puVar13;
      puVar13 = *(undefined **)(puVar6 + 0x38);
      if (*(undefined **)(puVar6 + 0x38) == (undefined *)0x0) {
        puStack_178 = (undefined *)0x0;
        uStack_170 = (long *)0x0;
        func_0x048b10d0(&puStack_178);
        puVar13 = puStack_178;
      }
    } while (puVar13 != (undefined *)0x0);
  }
  else {
    puVar13 = *(undefined **)(puVar6 + 0x38);
    if (*(undefined **)(puVar6 + 0x38) != (undefined *)0x0) goto LAB_0782221b;
LAB_078221ff:
    puStack_178 = (undefined *)0x0;
    uStack_170 = (long *)0x0;
    func_0x048b10d0(&puStack_178);
    puVar13 = puStack_178;
    if (puStack_178 != (undefined *)0x0) goto LAB_0782221b;
  }
  lVar9 = *(long *)(puVar6 + 0x48);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
LAB_0782227e:
  puVar7[1] = 0xffffffffffffffff;
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 0xff;
  *puVar7 = &UNK_0f0e9af8;
  plVar8 = *(long **)(lVar9 + 8);
  *(undefined8 **)(lVar9 + 8) = puVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}


