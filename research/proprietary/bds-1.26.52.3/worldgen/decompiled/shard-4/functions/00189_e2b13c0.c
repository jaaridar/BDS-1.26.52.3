/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3b13c0 (ELF vaddr 0xe2b13c0)
 * Label: caller-of-callee
 * Body:  [[0e3b13c0, 0e3b1a95] [0e3b1aa0, 0e3b1fbd] [0e3b1fc0, 0e3b1ff4] [0e3b2000, 0e3b2aaf]]
 * Ghidra: FUN_0e3b13c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3b13c0(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  long *plVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  bool bVar21;
  undefined2 uStack_1fc;
  undefined1 uStack_1fa;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined *puStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 *puStack_78;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  char cStack_58;
  undefined8 uStack_48;
  long *plStack_40;
  
  func_0x0e3bb0c0();
  if ((DAT_0f7513e0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f7513e0), iVar8 != 0)) {
    func_0x0e40b040();
    __cxa_atexit(&UNK_048ae800,&DAT_0f751360,0xf53dab8);
    func_0x0410844d(&DAT_0f7513e0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f751360 + 4)) * 8);
  do {
    lVar15 = *plVar11;
    if (lVar15 == -1) goto LAB_0e3b1440;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f751360 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e3b1440:
    puVar10 = &DAT_0f751360;
    if (iRam000000000f7513c0 != -0x2b3da790) goto LAB_0e3b14a7;
LAB_0e3b146b:
    lVar15 = *(long *)(puVar10 + 0x68);
    if (lVar15 == 0) goto LAB_0e3b14a7;
    bVar21 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar18 = lVar15 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar15 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar21) {
      uVar17 = *(ulong *)(lVar15 + 0x10);
    }
    FUN_0e40b730(&uStack_1f8,param_1,lVar18,uVar17);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3b146b;
LAB_0e3b14a7:
    FUN_0e40b730(&uStack_1f8,param_1,&UNK_0145a322,10);
  }
  if ((char)puStack_1c8 == '\0') {
    func_0x0e40bd20(&puStack_158,uStack_1f8 + 0x18);
    if (uStack_140._4_4_ == 2) {
      piVar16 = *(int **)(*(long *)((long)uStack_148 + 0x78) + 0x60);
      iVar8 = *piVar16;
      while (iVar8 != (int)uStack_140) {
        piVar16 = piVar16 + 0x16;
        iVar8 = *piVar16;
      }
      plVar11 = *(long **)(piVar16 + 0xc);
      while (plVar11 != plStack_150) {
        piVar16 = *(int **)(piVar16 + 0xe);
        plVar11 = *(long **)(piVar16 + 0xc);
      }
LAB_0e3b153f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (uStack_140._4_4_ == 1) {
        piVar16 = *(int **)(*(long *)((long)uStack_148 + 0x78) + 0x48);
        iVar8 = *piVar16;
        while (iVar8 != (int)uStack_140) {
          piVar16 = piVar16 + 0x1a;
          iVar8 = *piVar16;
        }
        goto LAB_0e3b153f;
      }
      if (uStack_140._4_4_ == 0) {
        *(uint *)((long)uStack_148 + 0x18) = *(uint *)((long)uStack_148 + 0x18) | 0x40000;
      }
    }
    func_0x0e40c2d0(&puStack_158,&uStack_1f8,&UNK_01456eaf,0xd,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0ef46ce8;
    if (uStack_140 != (code *)0x0) {
      lVar15 = *(long *)uStack_140;
      uStack_140 = (code *)plVar11;
      (**(code **)(lVar15 + 8))();
      plVar11 = (long *)uStack_140;
    }
    uStack_140 = (code *)plVar11;
    uStack_1c0 = (undefined4)uStack_148;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1a8 = 1;
    uStack_1a0 = 0;
    uStack_198 = &UNK_0490ce30;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_0490cb20;
    puStack_180 = &UNK_0e40c890;
    puStack_178 = &UNK_0e40c9f0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(plStack_150,&uStack_1c0);
    plVar11 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e40c590(&puStack_158);
    cStack_58 = (char)puStack_1c8;
    uStack_68 = iStack_1d8;
    uStack_64 = iStack_1d4;
    iStack_60 = (int)uStack_1d0;
    uStack_5c = uStack_1d0._4_4_;
    puStack_78 = uStack_1e8;
    iStack_70 = (undefined4)uStack_1e0;
    iStack_6c = uStack_1e0._4_4_;
    uStack_88 = uStack_1f8;
    uStack_80 = CONCAT44(uStack_1ec,uStack_1f0);
    func_0x048b0bc0(&uStack_140);
    func_0x0e40c2d0(&puStack_158,&uStack_88,&UNK_01409aac,6,1);
    pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar12 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar12 = &UNK_0f4b97e0;
    if (uStack_140 != (code *)0x0) {
      lVar15 = *(long *)uStack_140;
      uStack_140 = pcVar12;
      (**(code **)(lVar15 + 8))();
      pcVar12 = uStack_140;
    }
    uStack_140 = pcVar12;
    uStack_1c0 = (undefined4)uStack_148;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1a8 = 1;
    uStack_1a0 = 0;
    uStack_198 = &UNK_0e40ff90;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &UNK_0e40ea30;
    puStack_180 = &UNK_0e410050;
    puStack_178 = &UNK_0e4102b0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(plStack_150,&uStack_1c0);
    plVar11 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e40c590(&puStack_158);
    uVar4 = uStack_5c;
    iVar8 = iStack_60;
    uVar17 = uStack_88;
    func_0x048b0bc0(&uStack_140);
    if (iVar8 == 4) {
      if ((DAT_0f7513e0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f7513e0), iVar8 != 0)) {
        func_0x0e40b040();
        __cxa_atexit(&UNK_048ae800,&DAT_0f751360,0xf53dab8);
        func_0x0410844d(&DAT_0f7513e0);
      }
      plVar11 = (long *)(*(long *)(uVar17 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar17 + 0x20) - *(long *)(uVar17 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f751360 + 4)) * 8);
      do {
        lVar15 = *plVar11;
        if (lVar15 == -1) goto LAB_0e3b1918;
        plVar11 = (long *)(*(long *)(uVar17 + 0x30) + lVar15 * 0x18);
      } while (*(uint *)(*(long *)(uVar17 + 0x30) + 8 + lVar15 * 0x18) !=
               *(uint *)(_DAT_0f751360 + 4));
      if (plVar11 == *(long **)(uVar17 + 0x38)) {
LAB_0e3b1918:
        puVar10 = &DAT_0f751360;
      }
      else {
        puVar10 = (undefined *)plVar11[2];
      }
      puVar10 = (undefined *)func_0x048b1040(uVar17 + 0x18,puVar10,uVar4,1);
      if (puVar10 == (undefined *)0x0) {
        puStack_158 = (undefined *)0x0;
        plStack_150 = (long *)0x0;
        func_0x048b10d0(&puStack_158);
        puVar14 = *(undefined **)(puStack_158 + 0x38);
        puVar10 = puStack_158;
        if (puVar14 == (undefined *)0x0) goto LAB_0e3b1a67;
LAB_0e3b1a8c:
        do {
          puVar10 = puVar14;
          puVar14 = *(undefined **)(puVar10 + 0x38);
          if (*(undefined **)(puVar10 + 0x38) == (undefined *)0x0) {
            puStack_158 = (undefined *)0x0;
            plStack_150 = (long *)0x0;
            func_0x048b10d0(&puStack_158);
            puVar14 = puStack_158;
          }
        } while (puVar14 != (undefined *)0x0);
      }
      else {
        puVar14 = *(undefined **)(puVar10 + 0x38);
        if (*(undefined **)(puVar10 + 0x38) != (undefined *)0x0) goto LAB_0e3b1a8c;
LAB_0e3b1a67:
        puStack_158 = (undefined *)0x0;
        plStack_150 = (long *)0x0;
        func_0x048b10d0(&puStack_158);
        puVar14 = puStack_158;
        if (puStack_158 != (undefined *)0x0) goto LAB_0e3b1a8c;
      }
      lVar15 = *(long *)(puVar10 + 0x48);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar8 != 1) goto LAB_0e3b1b3d;
      if ((DAT_0f7513e0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f7513e0), iVar8 != 0)) {
        func_0x0e40b040();
        __cxa_atexit(&UNK_048ae800,&DAT_0f751360,0xf53dab8);
        func_0x0410844d(&DAT_0f7513e0);
      }
      plVar11 = (long *)(*(long *)(uVar17 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar17 + 0x20) - *(long *)(uVar17 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f751360 + 4)) * 8);
      do {
        lVar15 = *plVar11;
        if (lVar15 == -1) goto LAB_0e3b18a8;
        plVar11 = (long *)(*(long *)(uVar17 + 0x30) + lVar15 * 0x18);
      } while (*(uint *)(*(long *)(uVar17 + 0x30) + 8 + lVar15 * 0x18) !=
               *(uint *)(_DAT_0f751360 + 4));
      if (plVar11 == *(long **)(uVar17 + 0x38)) {
LAB_0e3b18a8:
        puVar10 = &DAT_0f751360;
      }
      else {
        puVar10 = (undefined *)plVar11[2];
      }
      puVar10 = (undefined *)FUN_048b0c90(uVar17 + 0x18,puVar10,uVar4,1);
      if (puVar10 == (undefined *)0x0) {
        puStack_158 = (undefined *)0x0;
        plStack_150 = (long *)0x0;
        func_0x048b0d20(&puStack_158);
        puVar10 = puStack_158;
      }
      lVar15 = *(long *)(puVar10 + 0x58);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar13[1] = 0xffffffffffffffff;
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0xff;
    *puVar13 = &UNK_0f4e3cf0;
    puVar13[4] = 1;
    puVar13[5] = 0;
    puVar13[6] = 0;
    *(undefined1 *)(puVar13 + 7) = 0;
    plVar11 = *(long **)(lVar15 + 8);
    *(undefined8 **)(lVar15 + 8) = puVar13;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x28))();
    }
  }
LAB_0e3b1b3d:
  if ((DAT_0f751668 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751668), iVar8 != 0)) {
    func_0x0e4107f0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f7515e8,0xf53dab8);
    func_0x0410844d(&DAT_0f751668);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7515e8 + 4)) * 8);
  do {
    lVar15 = *plVar11;
    if (lVar15 == -1) goto LAB_0e3b1ba0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f7515e8 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e3b1ba0:
    puVar10 = &DAT_0f7515e8;
    if (iRam000000000f751648 != -0x2b3da790) goto LAB_0e3b1c1c;
LAB_0e3b1bcb:
    lVar15 = *(long *)(puVar10 + 0x68);
    if (lVar15 == 0) goto LAB_0e3b1c1c;
    bVar21 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar18 = lVar15 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar15 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar21) {
      uVar17 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e410ec0(&uStack_1f8,param_1,lVar18,uVar17);
    if ((char)puStack_1c8 != '\0') goto LAB_0e3b1c02;
LAB_0e3b1c3c:
    func_0x0e411a20(&puStack_158,&uStack_1f8,&UNK_012a2b50,6);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f4b99d0;
    if (uStack_140 != (code *)0x0) {
      lVar15 = *(long *)uStack_140;
      uStack_140 = (code *)plVar11;
      (**(code **)(lVar15 + 8))();
      plVar11 = (long *)uStack_140;
    }
    uStack_140 = (code *)plVar11;
    uStack_1c0 = (undefined4)uStack_148;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1a8 = 1;
    uStack_1a0 = 0;
    uStack_198 = &UNK_0e415360;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &UNK_0e413e60;
    puStack_180 = &UNK_0e415420;
    puStack_178 = &UNK_0e4156b0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(plStack_150,&uStack_1c0);
    plVar11 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e411cd0(&puStack_158);
    cStack_58 = (char)puStack_1c8;
    uStack_68 = iStack_1d8;
    uStack_64 = iStack_1d4;
    iStack_60 = (int)uStack_1d0;
    uStack_5c = uStack_1d0._4_4_;
    puStack_78 = uStack_1e8;
    iStack_70 = (undefined4)uStack_1e0;
    iStack_6c = uStack_1e0._4_4_;
    uStack_88 = uStack_1f8;
    uStack_80 = CONCAT44(uStack_1ec,uStack_1f0);
    func_0x048b0bc0(&uStack_140);
    func_0x0e411a20(&puStack_158,&uStack_88,&UNK_013374c7,0x12);
    pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar12 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar12 = &UNK_0f012080;
    if (uStack_140 != (code *)0x0) {
      lVar15 = *(long *)uStack_140;
      uStack_140 = pcVar12;
      (**(code **)(lVar15 + 8))();
      pcVar12 = uStack_140;
    }
    uStack_140 = pcVar12;
    uStack_1c0 = (undefined4)uStack_148;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1a8 = 1;
    uStack_1a0 = 0;
    uStack_198 = &UNK_05dd3ca0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &UNK_05dd3990;
    puStack_180 = &UNK_0e415b20;
    puStack_178 = &UNK_0e415c80;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(plStack_150,&uStack_1c0);
    plVar11 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e411cd0(&puStack_158);
    func_0x048b0bc0(&uStack_140);
    lVar15 = func_0x0ca58240(param_1 + 0x18);
    if (*(int *)(lVar15 + 0x60) != -0x2b3da790) goto LAB_0e3b1f4c;
LAB_0e3b1f10:
    lVar15 = *(long *)(lVar15 + 0x68);
    if (lVar15 == 0) goto LAB_0e3b1f4c;
    bVar21 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar18 = lVar15 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar15 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar21) {
      uVar17 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e415e60(&uStack_1c0,param_1,lVar18,uVar17);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3b1bcb;
LAB_0e3b1c1c:
    func_0x0e410ec0(&uStack_1f8,param_1,&UNK_01343f77,9);
    if ((char)puStack_1c8 == '\0') goto LAB_0e3b1c3c;
LAB_0e3b1c02:
    lVar15 = func_0x0ca58240(param_1 + 0x18);
    if (*(int *)(lVar15 + 0x60) == -0x2b3da790) goto LAB_0e3b1f10;
LAB_0e3b1f4c:
    func_0x0e415e60(&uStack_1c0,param_1,&UNK_013205ef,0xb);
  }
  if ((char)puStack_190 != '\0') {
    return;
  }
  lVar18 = CONCAT44(uStack_1bc,uStack_1c0) + 0x18;
  lVar15 = func_0x0ca58240(lVar18);
  pbVar3 = *(byte **)(CONCAT44(uStack_1bc,uStack_1c0) + 0x58);
  for (pbVar20 = *(byte **)(CONCAT44(uStack_1bc,uStack_1c0) + 0x50); pbVar20 != pbVar3;
      pbVar20 = pbVar20 + 0x38) {
    bVar2 = *pbVar20;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e3b200a;
    }
    else if (*(long *)(pbVar20 + 8) == 0x24) {
LAB_0e3b200a:
      if ((bVar2 & 1) == 0) {
        pbVar19 = pbVar20 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar20 + 0x10);
      }
      iVar8 = bcmp(&DAT_014518a9,pbVar19,0x24);
      if (iVar8 == 0) break;
    }
  }
  if (pbVar20 == pbVar3) {
LAB_0e3b203a:
    if ((int)uStack_198 == 0) {
      if ((*(int *)(lVar15 + 0x60) != -0x2b3da790) || (*(long *)(lVar15 + 0x68) == 0))
      goto LAB_0e3b20b0;
      lVar15 = *(long *)(lVar15 + 0x68) + 0x38;
    }
    else {
      puVar10 = (undefined *)FUN_048b0c90(lVar18,lVar15,uStack_198._4_4_,1);
      if (puVar10 == (undefined *)0x0) {
        puStack_158 = (undefined *)0x0;
        plStack_150 = (long *)0x0;
        func_0x048b0d20(&puStack_158);
        puVar10 = puStack_158;
        if (puStack_158 == (undefined *)0x0) goto LAB_0e3b20b0;
      }
      if ((*(int *)(puVar10 + 0x50) == -0x45dcb126) && (*(long *)(puVar10 + 0x58) != 0)) {
        lVar15 = *(long *)(puVar10 + 0x58) + 0x40;
      }
      else {
LAB_0e3b20b0:
        lVar15 = 0;
      }
    }
    uStack_1f8 = 0;
    uStack_1e8 = (undefined4 *)&UNK_048b4ab0;
    iStack_1d8 = 0xd33bd9c5;
    uStack_1e0 = (code *)&UNK_048b49f0;
    iStack_1d4 = CONCAT31(iStack_1d4._1_3_,1);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *plVar11 = 0x5420656461725416;
    *(undefined4 *)(plVar11 + 1) = 0x656c6261;
    *(undefined1 *)((long)plVar11 + 0xc) = 0;
    *(undefined2 *)((long)plVar11 + 0xd) = uStack_1fc;
    *(undefined1 *)((long)plVar11 + 0xf) = uStack_1fa;
    plVar11[2] = 0;
    *(undefined2 *)(plVar11 + 3) = 0x800;
    plVar11[4] = 0x1001e00150001;
    plVar11[5] = (long)&UNK_01254d89;
    plVar11[6] = (long)&UNK_01254d89;
    puStack_158 = &UNK_048b46e0;
    uStack_140 = (code *)&UNK_048b4ab0;
    uStack_138 = (code *)&UNK_048b49f0;
    uStack_130 = (undefined *)CONCAT35(uStack_130._5_3_,0x1d33bd9c5);
    uStack_1f8 = 0;
    plStack_150 = plVar11;
    puStack_78 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_78 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar7 = _UNK_014518c1;
    uStack_88 = 0x29;
    uStack_80 = 0x24;
    *(undefined8 *)(puStack_78 + 4) = _DAT_014518b9;
    *(undefined8 *)(puStack_78 + 6) = uVar7;
    uVar6 = _UNK_014518b5;
    uVar5 = _UNK_014518b1;
    uVar4 = _UNK_014518ad;
    *puStack_78 = _DAT_014518a9;
    puStack_78[1] = uVar4;
    puStack_78[2] = uVar5;
    puStack_78[3] = uVar6;
    puStack_78[8] = 0x5d797472;
    *(undefined1 *)(puStack_78 + 9) = 0;
    lVar15 = func_0x048b5060(lVar15,&uStack_88);
    *(undefined **)(lVar15 + 0x20) = &UNK_048b46e0;
    pcVar12 = (code *)&UNK_048b49f0;
    if ((undefined **)(lVar15 + 0x20) != &puStack_158) {
      puVar13 = (undefined8 *)(lVar15 + 0x28);
      if (*(code **)(lVar15 + 0x40) == (code *)0x0) {
LAB_0e3b2287:
        plVar11 = plStack_150;
        plStack_150 = (long *)0x0;
        *puVar13 = plVar11;
      }
      else {
        (**(code **)(lVar15 + 0x40))(puVar13);
        if (uStack_130._4_1_ != '\0') {
          if (uStack_130._4_1_ != '\x02') goto LAB_0e3b2287;
          (*uStack_140)(5,&plStack_150,puVar13);
        }
      }
      *(int *)(lVar15 + 0x38) = (int)uStack_140;
      *(int *)(lVar15 + 0x3c) = uStack_140._4_4_;
      *(undefined4 *)(lVar15 + 0x40) = (undefined4)uStack_138;
      *(undefined4 *)(lVar15 + 0x44) = uStack_138._4_4_;
      *(undefined4 *)(lVar15 + 0x48) = (undefined4)uStack_130;
      *(char *)(lVar15 + 0x4c) = uStack_130._4_1_;
      pcVar12 = uStack_138;
    }
    if ((uStack_88 & 1) != 0) {
      func_0x0412a280(puStack_78,uStack_88 & 0xfffffffffffffffe);
      pcVar12 = uStack_138;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(&plStack_150);
    }
    if (uStack_1e0 != (code *)0x0) {
      (*uStack_1e0)(&uStack_1f8);
    }
  }
  else {
    iVar8 = *(int *)(pbVar20 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar9 = FUN_04108328(&DAT_0f550768), iVar9 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar8 == _DAT_0f550754) goto LAB_0e3b203a;
  }
  iStack_1d8 = (int)uStack_1a0;
  iStack_1d4 = uStack_1a0._4_4_;
  puStack_1c8 = puStack_190;
  uStack_1e8 = (undefined4 *)CONCAT44(uStack_1ac,uStack_1b0);
  uStack_1e0 = (code *)lStack_1a8;
  uStack_1f8 = CONCAT44(uStack_1bc,uStack_1c0);
  uStack_1f0 = (undefined4)uStack_1b8;
  uStack_1ec = uStack_1b8._4_4_;
  uStack_1d0 = 0x1e1bc4d500000004;
  if ((DAT_0f6ed558 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ed558), iVar8 != 0)) {
    func_0x0ca56500(0xf6ed540);
    func_0x0410844d(&DAT_0f6ed558);
  }
  puStack_158 = (undefined *)CONCAT44(puStack_158._4_4_,uStack_1d0._4_4_);
  plStack_150 = (long *)0x0;
  uStack_148 = (long *)((ulong)uStack_148._4_4_ << 0x20);
  uStack_140 = (code *)0x1;
  uStack_138 = (code *)&SUB_048aead0;
  uStack_130 = &UNK_0e416710;
  puStack_128 = &UNK_0e4167d0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  FUN_049057f0(&uStack_1f0,&puStack_158);
  func_0x048aea50(&puStack_158);
  puStack_78 = (undefined4 *)uStack_1e0;
  iStack_70 = iStack_1d8;
  iStack_6c = iStack_1d4;
  uStack_88 = CONCAT44(uStack_1ec,uStack_1f0);
  uStack_80 = (long)uStack_1e8;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4b9bd0;
  if ((DAT_0f551bc8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f551bc8), iVar8 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  puStack_158 = (undefined *)CONCAT44(puStack_158._4_4_,_DAT_0f551bb4);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef46c48;
  plStack_150 = plVar11 + 3;
  plVar11[3] = (long)puVar13;
  plVar11[4] = 0;
  *(undefined1 *)(plVar11 + 5) = 0xff;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_148 = plVar11;
  func_0x048afd20(&uStack_88,&puStack_158);
  plVar11 = uStack_148;
  if (uStack_148 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_148 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_148 + 0x10))(uStack_148);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar11);
    }
  }
  if ((DAT_0f6ed558 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ed558), iVar8 != 0)) {
    func_0x0ca56500(0xf6ed540);
    func_0x0410844d(&DAT_0f6ed558);
  }
  if (iStack_1d4 == 2) {
    piVar16 = *(int **)(*(long *)((long)uStack_1e0 + 0x78) + 0x60);
    iVar8 = *piVar16;
    while (iVar8 != iStack_1d8) {
      piVar16 = piVar16 + 0x16;
      iVar8 = *piVar16;
    }
    lVar15 = *(long *)(piVar16 + 0xc);
    while ((undefined4 *)lVar15 != uStack_1e8) {
      piVar16 = *(int **)(piVar16 + 0xe);
      lVar15 = *(long *)(piVar16 + 0xc);
    }
  }
  else {
    if (iStack_1d4 != 1) {
      if (iStack_1d4 == 0) {
        *(uint *)((long)uStack_1e0 + 0x18) = *(uint *)((long)uStack_1e0 + 0x18) | 0x20000;
      }
      goto LAB_0e3b2593;
    }
    piVar16 = *(int **)(*(long *)((long)uStack_1e0 + 0x78) + 0x48);
    iVar8 = *piVar16;
    while (iVar8 != iStack_1d8) {
      piVar16 = piVar16 + 0x1a;
      iVar8 = *piVar16;
    }
  }
  *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 2;
LAB_0e3b2593:
  if ((DAT_0f6ed558 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ed558), iVar8 != 0)) {
    func_0x0ca56500(0xf6ed540);
    func_0x0410844d(&DAT_0f6ed558);
  }
  puStack_158 = (undefined *)CONCAT44(puStack_158._4_4_,0xbf75c8f8);
  plStack_150 = (long *)0x0;
  uStack_148 = (long *)((ulong)uStack_148 & 0xffffffff00000000);
  uStack_140 = (code *)0x0;
  uStack_138 = (code *)&UNK_0e416a10;
  uStack_130 = &SUB_048b06d0;
  puStack_128 = &UNK_0e419350;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  FUN_049057f0(&uStack_1f0,&puStack_158);
  func_0x048aea50(&puStack_158);
  puStack_78 = (undefined4 *)uStack_1e0;
  iStack_70 = iStack_1d8;
  iStack_6c = iStack_1d4;
  uStack_88 = CONCAT44(uStack_1ec,uStack_1f0);
  uStack_80 = (long)uStack_1e8;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4b9bd0;
  if ((DAT_0f551cb0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f551cb0), iVar8 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  puStack_158 = (undefined *)CONCAT44(puStack_158._4_4_,_DAT_0f551c9c);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef46c98;
  plStack_150 = plVar11 + 3;
  plVar11[3] = (long)puVar13;
  *(undefined1 *)(plVar11 + 4) = 0xff;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_148 = plVar11;
  func_0x048afd20(&uStack_88,&puStack_158);
  plVar11 = uStack_148;
  if (uStack_148 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_148 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_148 + 0x10))(uStack_148);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar11);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
