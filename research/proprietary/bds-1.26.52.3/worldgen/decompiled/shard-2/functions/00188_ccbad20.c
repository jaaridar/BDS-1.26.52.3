/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcdbad20 (ELF vaddr 0xccbad20)
 * Label: caller-of-callee
 * Body:  [[0cdbad20, 0cdbb769] [0cdbb770, 0cdbbdf1] [0cdbbe00, 0cdbbf0c] [0cdbbf10, 0cdbc1fe]]
 * Ghidra: FUN_0cdbad20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cdbad20(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 uStack_1e0;
  undefined2 uStack_1df;
  undefined1 uStack_1dd;
  undefined4 uStack_1dc;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined4 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined2 uStack_168;
  undefined2 uStack_166;
  uint uStack_164;
  uint uStack_160;
  undefined1 uStack_15c;
  undefined4 auStack_150 [2];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
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
  undefined8 uStack_c0;
  char cStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
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
  undefined7 uStack_37;
  
  func_0x0c6ec470();
  if ((DAT_0f705fb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f705fb0), iVar5 != 0)) {
    func_0x0ce22290();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f705f30,0xf53dab8);
    func_0x0410844d(&DAT_0f705fb0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f705f30 + 4)) * 8);
  do {
    lVar10 = *plVar8;
    if (lVar10 == -1) goto LAB_0cdbada0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f705f30 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0cdbada0:
    puVar6 = &DAT_0f705f30;
    if (iRam000000000f705f90 != -0x2b3da790) goto LAB_0cdbae0d;
LAB_0cdbadcb:
    lVar10 = *(long *)(puVar6 + 0x68);
    if (lVar10 == 0) goto LAB_0cdbae0d;
    bVar15 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar13 = lVar10 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0ce226b0(auStack_150,param_1,lVar13,uVar14);
  }
  else {
    puVar6 = (undefined *)plVar8[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0cdbadcb;
LAB_0cdbae0d:
    func_0x0ce226b0(auStack_150,param_1,&UNK_01387fd9,0x16);
  }
  if ((char)puStack_120 == '\0') {
    uStack_218._4_4_ = (uint)((ulong)uStack_218 >> 0x20);
    uStack_228._4_4_ = (undefined4)((ulong)uStack_228 >> 0x20);
    uStack_128 = (undefined *)0x1e1bc4d500000004;
    if ((DAT_0f705fd0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f705fd0), iVar5 != 0)) {
      func_0x0ce223a0();
      func_0x0410844d(&DAT_0f705fd0);
    }
    uStack_228 = CONCAT44(uStack_228._4_4_,uStack_128._4_4_);
    plStack_220 = (long *)0x0;
    uStack_218 = (long *)((ulong)uStack_218._4_4_ << 0x20);
    uStack_210 = (long *)0x1;
    puStack_208 = &SUB_048aead0;
    puStack_200 = &UNK_049119f0;
    puStack_1f8 = &UNK_0ce231c0;
    lStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    lStack_1d8 = 0;
    func_0x049057f0(&uStack_148,&uStack_228);
    FUN_048aea50(&uStack_228);
    uStack_d8 = (undefined4)uStack_138;
    uStack_d4 = uStack_138._4_4_;
    uStack_d0 = (undefined4)uStack_130;
    uStack_cc = uStack_130._4_4_;
    uStack_e8 = (undefined4)uStack_148;
    uStack_e4 = uStack_148._4_4_;
    uStack_e0 = (undefined4)uStack_140;
    uStack_dc = uStack_140._4_4_;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar7 = &UNK_0ef474e0;
    if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    uStack_228 = CONCAT44(uStack_228._4_4_,_DAT_0f551bb4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef46c48;
    plStack_220 = plVar8 + 3;
    plVar8[3] = (long)puVar7;
    plVar8[4] = 0;
    *(undefined1 *)(plVar8 + 5) = 0xff;
    uStack_a8 = 0;
    uStack_a0 = (long *)0x0;
    uStack_218 = plVar8;
    FUN_048afd20(&uStack_e8,&uStack_228);
    plVar8 = uStack_218;
    if (uStack_218 != (long *)0x0) {
      LOCK();
      plVar11 = uStack_218 + 1;
      lVar10 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_218 + 0x10))(uStack_218);
        FUN_0412c2d0(plVar8);
      }
    }
    plVar8 = uStack_a0;
    if (uStack_a0 != (long *)0x0) {
      LOCK();
      plVar11 = uStack_a0 + 1;
      lVar10 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
        FUN_0412c2d0(plVar8);
      }
    }
  }
  if ((DAT_0f706068 == '\0') && (iVar5 = func_0x04108328(&DAT_0f706068), iVar5 != 0)) {
    func_0x0ce23ed0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f705fe8,0xf53dab8);
    func_0x0410844d(&DAT_0f706068);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f705fe8 + 4)) * 8);
  do {
    lVar10 = *plVar8;
    if (lVar10 == -1) goto LAB_0cdbb060;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f705fe8 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0cdbb060:
    puVar6 = &DAT_0f705fe8;
    if (iRam000000000f706048 != -0x2b3da790) goto LAB_0cdbb0cd;
LAB_0cdbb08b:
    lVar10 = *(long *)(puVar6 + 0x68);
    if (lVar10 == 0) goto LAB_0cdbb0cd;
    bVar15 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar13 = lVar10 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0ce24550(&uStack_e8,param_1,lVar13,uVar14);
  }
  else {
    puVar6 = (undefined *)plVar8[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0cdbb08b;
LAB_0cdbb0cd:
    func_0x0ce24550(&uStack_e8,param_1,&UNK_014bfc97,0x19);
  }
  if (cStack_b8 == '\0') {
    uStack_140._4_4_ = (uint)((ulong)uStack_140 >> 0x20);
    func_0x0ce24b40(&uStack_228,CONCAT44(uStack_e4,uStack_e8) + 0x18);
    if (uStack_210._4_4_ == 2) {
      piVar9 = *(int **)(uStack_218[0xf] + 0x60);
      iVar5 = *piVar9;
      while (iVar5 != (int)uStack_210) {
        piVar9 = piVar9 + 0x16;
        iVar5 = *piVar9;
      }
      plVar8 = *(long **)(piVar9 + 0xc);
      while (plVar8 != plStack_220) {
        piVar9 = *(int **)(piVar9 + 0xe);
        plVar8 = *(long **)(piVar9 + 0xc);
      }
LAB_0cdbb15f:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
    }
    else {
      if (uStack_210._4_4_ == 1) {
        piVar9 = *(int **)(uStack_218[0xf] + 0x48);
        iVar5 = *piVar9;
        while (iVar5 != (int)uStack_210) {
          piVar9 = piVar9 + 0x1a;
          iVar5 = *piVar9;
        }
        goto LAB_0cdbb15f;
      }
      if (uStack_210._4_4_ == 0) {
        *(uint *)(uStack_218 + 3) = *(uint *)(uStack_218 + 3) | 0x40000;
      }
    }
    func_0x0ce25100(&uStack_228,&uStack_e8,&UNK_012b4f6d,0xd);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f406188;
    if (uStack_210 != (long *)0x0) {
      lVar10 = *uStack_210;
      uStack_210 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_210;
    }
    uStack_210 = plVar8;
    auStack_150[0] = (undefined4)uStack_218;
    uStack_148 = (long *)0x0;
    uStack_140 = (long *)((ulong)uStack_140._4_4_ << 0x20);
    uStack_138 = 1;
    uStack_130 = 0;
    uStack_128 = &UNK_0ce258a0;
    puStack_120 = &SUB_048b06d0;
    puStack_118 = &UNK_0ce221d0;
    puStack_110 = &UNK_0ce25960;
    puStack_108 = &UNK_0ce25ac0;
    uStack_100 = 0;
    uStack_f8 = 0;
    plStack_f0 = (long *)0x0;
    func_0x048b05a0(plStack_220,auStack_150);
    plVar8 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_f0 + 1;
      lVar10 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        FUN_0412c2d0(plVar8);
      }
    }
    func_0x0ce253b0(&uStack_228);
    cStack_38 = cStack_b8;
    uStack_48 = uStack_c8;
    uStack_44 = uStack_c4;
    iStack_40 = (int)uStack_c0;
    uStack_3c = uStack_c0._4_4_;
    uStack_58 = uStack_d8;
    uStack_54 = uStack_d4;
    uStack_50 = uStack_d0;
    uStack_4c = uStack_cc;
    uStack_68 = uStack_e8;
    uStack_64 = uStack_e4;
    uStack_60 = uStack_e0;
    uStack_5c = uStack_dc;
    func_0x048b0bc0(&uStack_210);
    uStack_a8 = CONCAT44(uStack_64,uStack_68);
    uStack_a0 = (long *)CONCAT44(uStack_5c,uStack_60);
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    iStack_80 = iStack_40;
    uStack_7c = uStack_3c;
    uStack_78 = CONCAT71(uStack_37,cStack_38);
    func_0x0ce24b40(&uStack_228,uStack_a8 + 0x18);
    if (uStack_210._4_4_ == 2) {
      piVar9 = *(int **)(uStack_218[0xf] + 0x60);
      iVar5 = *piVar9;
      while (iVar5 != (int)uStack_210) {
        piVar9 = piVar9 + 0x16;
        iVar5 = *piVar9;
      }
      plVar8 = *(long **)(piVar9 + 0xc);
      while (plVar8 != plStack_220) {
        piVar9 = *(int **)(piVar9 + 0xe);
        plVar8 = *(long **)(piVar9 + 0xc);
      }
LAB_0cdbb3ef:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
    }
    else {
      if (uStack_210._4_4_ == 1) {
        piVar9 = *(int **)(uStack_218[0xf] + 0x48);
        iVar5 = *piVar9;
        while (iVar5 != (int)uStack_210) {
          piVar9 = piVar9 + 0x1a;
          iVar5 = *piVar9;
        }
        goto LAB_0cdbb3ef;
      }
      if (uStack_210._4_4_ == 0) {
        *(uint *)(uStack_218 + 3) = *(uint *)(uStack_218 + 3) | 0x40000;
      }
    }
    func_0x0ce25100(&uStack_228,&uStack_a8,&UNK_013f0aa6,0xc);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f353348;
    if (uStack_210 != (long *)0x0) {
      lVar10 = *uStack_210;
      uStack_210 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_210;
    }
    uStack_210 = plVar8;
    auStack_150[0] = (undefined4)uStack_218;
    uStack_148 = (long *)0x0;
    uStack_140 = (long *)((ulong)uStack_140 & 0xffffffff00000000);
    uStack_138 = 1;
    uStack_130 = 0;
    uStack_128 = &UNK_0c0f3360;
    puStack_120 = &SUB_048b06d0;
    puStack_118 = &UNK_08f1fdc0;
    puStack_110 = &UNK_0ce25f30;
    puStack_108 = &UNK_0ce26250;
    uStack_100 = 0;
    uStack_f8 = 0;
    plStack_f0 = (long *)0x0;
    func_0x048b05a0(plStack_220,auStack_150);
    plVar8 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_f0 + 1;
      lVar10 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        FUN_0412c2d0(plVar8);
      }
    }
    func_0x0ce253b0(&uStack_228);
    uVar3 = uStack_7c;
    iVar5 = iStack_80;
    lVar10 = uStack_a8;
    func_0x048b0bc0(&uStack_210);
    if (iVar5 == 4) {
      if ((DAT_0f706068 == '\0') && (iVar5 = func_0x04108328(&DAT_0f706068), iVar5 != 0)) {
        func_0x0ce23ed0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f705fe8,0xf53dab8);
        func_0x0410844d(&DAT_0f706068);
      }
      plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f705fe8 + 4)) * 8);
      do {
        lVar13 = *plVar8;
        if (lVar13 == -1) goto LAB_0cdbb638;
        plVar8 = (long *)(*(long *)(lVar10 + 0x30) + lVar13 * 0x18);
      } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar13 * 0x18) !=
               *(uint *)(_DAT_0f705fe8 + 4));
      if (plVar8 == *(long **)(lVar10 + 0x38)) {
LAB_0cdbb638:
        puVar6 = &DAT_0f705fe8;
      }
      else {
        puVar6 = (undefined *)plVar8[2];
      }
      lVar10 = func_0x048b1040(lVar10 + 0x18,puVar6,uVar3,1);
      if (lVar10 == 0) {
        uStack_228 = 0;
        plStack_220 = (long *)0x0;
        func_0x048b10d0(&uStack_228);
        lVar13 = *(long *)(uStack_228 + 0x38);
        lVar10 = uStack_228;
      }
      else {
        lVar13 = *(long *)(lVar10 + 0x38);
      }
      if (lVar13 != 0) goto LAB_0cdbb775;
      uStack_228 = 0;
      plStack_220 = (long *)0x0;
      func_0x048b10d0(&uStack_228);
      lVar4 = uStack_228;
      while (lVar13 = lVar4, lVar13 != 0) {
LAB_0cdbb775:
        lVar10 = lVar13;
        lVar4 = *(long *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) == 0) {
          uStack_228 = 0;
          plStack_220 = (long *)0x0;
          func_0x048b10d0(&uStack_228);
          lVar4 = uStack_228;
        }
      }
      lVar10 = *(long *)(lVar10 + 0x48);
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar7 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar5 != 1) goto LAB_0cdbb7fd;
      if ((DAT_0f706068 == '\0') && (iVar5 = func_0x04108328(&DAT_0f706068), iVar5 != 0)) {
        func_0x0ce23ed0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f705fe8,0xf53dab8);
        func_0x0410844d(&DAT_0f706068);
      }
      plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f705fe8 + 4)) * 8);
      do {
        lVar13 = *plVar8;
        if (lVar13 == -1) goto LAB_0cdbb5c8;
        plVar8 = (long *)(*(long *)(lVar10 + 0x30) + lVar13 * 0x18);
      } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar13 * 0x18) !=
               *(uint *)(_DAT_0f705fe8 + 4));
      if (plVar8 == *(long **)(lVar10 + 0x38)) {
LAB_0cdbb5c8:
        puVar6 = &DAT_0f705fe8;
      }
      else {
        puVar6 = (undefined *)plVar8[2];
      }
      lVar10 = func_0x048b0c90(lVar10 + 0x18,puVar6,uVar3,1);
      if (lVar10 == 0) {
        uStack_228 = 0;
        plStack_220 = (long *)0x0;
        func_0x048b0d20(&uStack_228);
        lVar10 = uStack_228;
      }
      lVar10 = *(long *)(lVar10 + 0x58);
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar7 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar7[1] = 0x40;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0xff;
    *puVar7 = &UNK_0f4e3cf0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *(undefined8 *)((long)puVar7 + 0x29) = 0;
    *(undefined8 *)((long)puVar7 + 0x31) = 0;
    plVar8 = *(long **)(lVar10 + 8);
    *(undefined8 **)(lVar10 + 8) = puVar7;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x28))();
    }
  }
LAB_0cdbb7fd:
  lVar10 = func_0x0ce26430(param_1 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar15 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar13 = lVar10 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0ce26b80(&uStack_e8,param_1,lVar13,uVar14);
  }
  else {
    func_0x0ce26b80(&uStack_e8,param_1,&UNK_0129c26b,0x22);
  }
  if (cStack_b8 != '\0') {
    return;
  }
  func_0x0ce270c0(&uStack_228,CONCAT44(uStack_e4,uStack_e8) + 0x18);
  if (uStack_210._4_4_ == 2) {
    piVar9 = *(int **)(uStack_218[0xf] + 0x60);
    iVar5 = *piVar9;
    while (iVar5 != (int)uStack_210) {
      piVar9 = piVar9 + 0x16;
      iVar5 = *piVar9;
    }
    plVar8 = *(long **)(piVar9 + 0xc);
    while (plVar8 != plStack_220) {
      piVar9 = *(int **)(piVar9 + 0xe);
      plVar8 = *(long **)(piVar9 + 0xc);
    }
LAB_0cdbb8df:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
  }
  else {
    if (uStack_210._4_4_ == 1) {
      piVar9 = *(int **)(uStack_218[0xf] + 0x48);
      iVar5 = *piVar9;
      while (iVar5 != (int)uStack_210) {
        piVar9 = piVar9 + 0x1a;
        iVar5 = *piVar9;
      }
      goto LAB_0cdbb8df;
    }
    if (uStack_210._4_4_ == 0) {
      *(uint *)(uStack_218 + 3) = *(uint *)(uStack_218 + 3) | 0x40000;
    }
  }
  if ((DAT_0f707140 == '\0') && (iVar5 = func_0x04108328(&DAT_0f707140), iVar5 != 0)) {
    func_0x0ce26620(0xf707128);
    func_0x0410844d(&DAT_0f707140);
  }
  uStack_c0 = 0x80e0d0b700000001;
  lVar10 = CONCAT44(uStack_e4,uStack_e8) + 0x18;
  uStack_228 = func_0x0ce26430(lVar10);
  plStack_220 = (long *)lVar10;
  FUN_0ed621a0(&uStack_228,uStack_c0._4_4_);
  plStack_220 = (long *)&uStack_e0;
  uStack_228 = CONCAT62(uStack_228._2_6_,0x10);
  uStack_218 = (long *)CONCAT44(uStack_218._4_4_,uStack_c0._4_4_);
  uStack_210 = (long *)0x0;
  puStack_208 = (undefined1 *)0x0;
  puStack_200 = (undefined *)0x0;
  puStack_1f8 = (undefined *)0x0;
  lStack_1f0 = 0;
  uStack_1e8 = 0x6e6f6314;
  uStack_1e4 = 0x69746964;
  uStack_1e0 = 0x6f;
  uStack_1df = 0x736e;
  uStack_1dd = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  uStack_1a0 = 0x3f600000;
  func_0x048afb10(&lStack_1d0,8);
  uStack_178 = 0;
  lStack_170 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  uStack_168 = 0xff00;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_160 = uStack_160 & 0xffffff00;
  uStack_15c = 0;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f406270;
  if (uStack_210 != (long *)0x0) {
    lVar10 = *uStack_210;
    uStack_210 = puVar7;
    (**(code **)(lVar10 + 8))();
    puVar7 = uStack_210;
  }
  uStack_210 = puVar7;
  auStack_150[0] = (undefined4)uStack_218;
  uStack_148 = (long *)0x0;
  uStack_140 = (long *)((ulong)uStack_140 & 0xffffffff00000000);
  uStack_138 = 1;
  uStack_130 = 0;
  uStack_128 = &UNK_0ce2aab0;
  puStack_120 = &SUB_048b06d0;
  puStack_118 = &UNK_0ce292f0;
  puStack_110 = &UNK_0ce2ab70;
  puStack_108 = &UNK_0ce2ad30;
  uStack_100 = 0;
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  func_0x048b05a0(plStack_220,auStack_150);
  plVar8 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_f0 + 1;
    lVar10 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_220;
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_150[0] = _DAT_0f550a0c;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  puVar2 = puStack_208;
  puVar7 = uStack_210;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef439d0;
  uStack_148 = plVar11 + 3;
  uStack_210 = (long *)0x0;
  puStack_208 = (undefined1 *)0x0;
  plVar11[3] = (long)puVar7;
  plVar11[4] = (long)puVar2;
  plVar11[7] = lStack_1f0;
  plVar11[5] = (long)puStack_200;
  plVar11[6] = (long)puStack_1f8;
  puStack_200 = (undefined *)0x0;
  puStack_1f8 = (undefined *)0x0;
  lStack_1f0 = 0;
  plVar11[10] = lStack_1d8;
  plVar11[8] = CONCAT44(uStack_1e4,uStack_1e8);
  plVar11[9] = CONCAT44(uStack_1dc,CONCAT13(uStack_1dd,CONCAT21(uStack_1df,uStack_1e0)));
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1df = 0;
  uStack_1dd = 0;
  uStack_1dc = 0;
  lStack_1d8 = 0;
  plVar11[0xb] = lStack_1d0;
  plVar11[0xc] = lStack_1c8;
  plVar11[0xd] = lStack_1c0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  plVar11[0xe] = lStack_1b8;
  plVar11[0xf] = lStack_1b0;
  plVar11[0x10] = lStack_1a8;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  *(undefined4 *)(plVar11 + 0x11) = uStack_1a0;
  plVar11[0x12] = lStack_198;
  plVar11[0x13] = lStack_190;
  plVar11[0x14] = lStack_188;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  plVar11[0x17] = lStack_170;
  *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_180;
  *(undefined4 *)((long)plVar11 + 0xac) = uStack_180._4_4_;
  *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_178;
  *(undefined4 *)((long)plVar11 + 0xb4) = uStack_178._4_4_;
  uStack_180 = 0;
  uStack_178 = 0;
  lStack_170 = 0;
  *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_15c,CONCAT43(uStack_160,uStack_164._1_3_));
  plVar11[0x18] = CONCAT44(uStack_164,CONCAT22(uStack_166,uStack_168));
  uStack_a8 = 0;
  uStack_a0 = (long *)0x0;
  uStack_140 = plVar11;
  FUN_048afd20(plVar8,auStack_150);
  plVar11 = uStack_140;
  if (uStack_140 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_140 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_140 + 0x10))(uStack_140);
      FUN_0412c2d0(plVar11);
    }
  }
  plVar11 = uStack_a0;
  if (uStack_a0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_a0 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
      FUN_0412c2d0(plVar11);
    }
  }
  lVar10 = *(long *)((long)plVar8 + 0x10);
  iVar5 = *(int *)((long)plVar8 + 0x1c);
  if (iVar5 == 2) {
    piVar9 = *(int **)(*(long *)(lVar10 + 0x78) + 0x60);
    iVar5 = *piVar9;
    while (iVar5 != *(int *)((long)plVar8 + 0x18)) {
      piVar9 = piVar9 + 0x16;
      iVar5 = *piVar9;
    }
    for (; *(long *)(piVar9 + 0xc) != *(long *)((long)plVar8 + 8); piVar9 = *(int **)(piVar9 + 0xe))
    {
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) | (int)uStack_228 << 0x10;
      }
      goto LAB_0cdbbe0d;
    }
    piVar9 = *(int **)(*(long *)(lVar10 + 0x78) + 0x48);
    iVar5 = *piVar9;
    while (iVar5 != *(int *)((long)plVar8 + 0x18)) {
      piVar9 = piVar9 + 0x1a;
      iVar5 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | (int)uStack_228 << 0x10;
LAB_0cdbbe0d:
  lVar10 = CONCAT44(uStack_e4,uStack_e8);
  iVar5 = (int)uStack_c0;
  uVar3 = uStack_c0._4_4_;
  func_0x048b0bc0(&uStack_210);
  if (iVar5 == 4) {
    lVar10 = lVar10 + 0x18;
    uVar12 = func_0x0ce26430(lVar10);
    lVar10 = func_0x048b1040(lVar10,uVar12,uVar3,1);
    if (lVar10 == 0) {
      uStack_228 = 0;
      plStack_220 = (long *)0x0;
      func_0x048b10d0(&uStack_228);
      lVar13 = *(long *)(uStack_228 + 0x38);
      lVar10 = uStack_228;
    }
    else {
      lVar13 = *(long *)(lVar10 + 0x38);
    }
    if (lVar13 != 0) goto LAB_0cdbbf15;
    uStack_228 = 0;
    plStack_220 = (long *)0x0;
    func_0x048b10d0(&uStack_228);
    lVar4 = uStack_228;
    while (lVar13 = lVar4, lVar13 != 0) {
LAB_0cdbbf15:
      lVar10 = lVar13;
      lVar4 = *(long *)(lVar13 + 0x38);
      if (*(long *)(lVar13 + 0x38) == 0) {
        uStack_228 = 0;
        plStack_220 = (long *)0x0;
        func_0x048b10d0(&uStack_228);
        lVar4 = uStack_228;
      }
    }
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar5 != 1) {
      return;
    }
    lVar10 = lVar10 + 0x18;
    uVar12 = func_0x0ce26430(lVar10);
    lVar10 = func_0x048b0c90(lVar10,uVar12,uVar3,1);
    if (lVar10 == 0) {
      uStack_228 = 0;
      plStack_220 = (long *)0x0;
      func_0x048b0d20(&uStack_228);
      lVar10 = uStack_228;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar7[1] = 0x40;
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 0xff;
  *puVar7 = &UNK_0f4e3cf0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(undefined8 *)((long)puVar7 + 0x29) = 0;
  *(undefined8 *)((long)puVar7 + 0x31) = 0;
  plVar8 = *(long **)(lVar10 + 8);
  *(undefined8 **)(lVar10 + 8) = puVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}


