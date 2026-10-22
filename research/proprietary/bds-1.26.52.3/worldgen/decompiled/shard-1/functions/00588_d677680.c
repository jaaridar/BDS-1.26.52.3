/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd777680 (ELF vaddr 0xd677680)
 * Label: caller-of-callee
 * Body:  [[0d777680, 0d777f00] [0d777f10, 0d778092]]
 * Ghidra: FUN_0d777680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0d777680(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  byte bStack_188;
  undefined7 uStack_187;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  byte bStack_168;
  byte bStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  byte bStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulong uStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  byte bStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong uStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  byte bStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *param_3;
  uStack_30 = param_3[1];
  plStack_138 = (long *)0x0;
  plStack_130 = (long *)0x0;
  if ((DAT_0f7b8fb8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f7b8fb8), iVar12 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_d8 = (undefined4)uStack_38;
  uStack_d4 = uStack_38._4_4_;
  uStack_d0 = (undefined4)uStack_30;
  uStack_cc = uStack_30._4_4_;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_1a8,&DAT_0f7b8f98,&uStack_d8,&plStack_138,0x121,0);
  plVar10 = plStack_138;
  puVar14 = uStack_190;
  uVar9 = _UNK_0f482b94;
  uVar8 = _UNK_0f482b90;
  uVar7 = _UNK_0f482b8c;
  uVar6 = _UNK_0f482b84;
  uVar5 = _UNK_0f482b80;
  uVar4 = _UNK_0f482b7c;
  uVar3 = _DAT_0f482b78;
  bStack_48 = bStack_168;
  if (bStack_168 == 0) {
    uStack_88 = uStack_1a8;
    uStack_84 = uStack_1a4;
    uStack_80 = uStack_1a0;
    uStack_7c = uStack_19c;
    uStack_78 = CONCAT44(uStack_194,uStack_198);
    puStack_70 = uStack_190;
    puStack_68 = (undefined4 *)CONCAT71(uStack_187,bStack_188);
    uStack_60 = uStack_180;
    uStack_58 = uStack_178;
    uStack_50 = uStack_170;
    uStack_198 = _DAT_0f482b88;
    uStack_194 = _UNK_0f482b8c;
    uStack_190 = (undefined4 *)CONCAT44(_UNK_0f482b94,_UNK_0f482b90);
    uStack_1a8 = _DAT_0f482b78;
    uStack_1a4 = _UNK_0f482b7c;
    uStack_1a0 = _UNK_0f482b80;
    uStack_19c = _UNK_0f482b84;
    bStack_188 = 0;
    bStack_160 = 0;
    if (puVar14 < puStack_68) {
      puVar14[4] = _DAT_0f482b88;
      puVar14[5] = uVar7;
      puVar14[6] = uVar8;
      puVar14[7] = uVar9;
      *puVar14 = uVar3;
      puVar14[1] = uVar4;
      puVar14[2] = uVar5;
      puVar14[3] = uVar6;
      *(undefined1 *)(puVar14 + 8) = 0;
      *(undefined1 *)(puVar14 + 0x12) = 0;
      puVar14 = puVar14 + 0x14;
    }
    else {
      puStack_70 = (undefined4 *)func_0x0489d2c0(&uStack_78,&uStack_1a8);
      puVar14 = puStack_70;
      if (((bStack_160 & 1) != 0) && ((bStack_188 & 1) != 0)) {
        func_0x0412a280(uStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
        puVar14 = puStack_70;
      }
    }
    uVar13 = uStack_50;
    uVar18 = uStack_58;
    uVar2 = uStack_60;
    puVar17 = puStack_68;
    uVar16 = uStack_78;
    uStack_78 = 0;
    puStack_70 = (undefined4 *)0x0;
    puStack_68 = (undefined4 *)0x0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    *(undefined4 *)param_1 = uStack_88;
    *(undefined4 *)((long)param_1 + 4) = uStack_84;
    *(undefined4 *)(param_1 + 1) = uStack_80;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_7c;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[2] = uVar16;
    param_1[3] = (ulong)puVar14;
    param_1[4] = (ulong)puVar17;
    param_1[5] = uVar2;
    param_1[6] = uVar18;
    param_1[7] = uVar13;
    goto LAB_0d777daa;
  }
  uStack_40 = 0;
  lVar1 = plStack_138[3];
  if (lVar1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = lVar1 + 8;
    func_0x0412d770(lVar19);
  }
  (**(code **)(*plVar10 + 0x78))(&uStack_1a8,plVar10,&uStack_40);
  if (lVar1 != 0) {
    func_0x0412d790(lVar19);
  }
  uVar16 = uStack_40;
  puVar14 = uStack_190;
  uVar9 = _UNK_0f482bb4;
  uVar8 = _UNK_0f482bb0;
  uVar7 = _UNK_0f482bac;
  uVar6 = _UNK_0f482ba4;
  uVar5 = _UNK_0f482ba0;
  uVar4 = _UNK_0f482b9c;
  uVar3 = _DAT_0f482b98;
  bStack_98 = bStack_168;
  if (bStack_168 == 0) {
    uStack_d8 = uStack_1a8;
    uStack_d4 = uStack_1a4;
    uStack_d0 = uStack_1a0;
    uStack_cc = uStack_19c;
    uStack_c8 = CONCAT44(uStack_194,uStack_198);
    puStack_c0 = uStack_190;
    puStack_b8 = (undefined4 *)CONCAT71(uStack_187,bStack_188);
    uStack_b0 = uStack_180;
    uStack_a8 = uStack_178;
    uStack_a0 = uStack_170;
    uStack_198 = _DAT_0f482ba8;
    uStack_194 = _UNK_0f482bac;
    uStack_190 = (undefined4 *)CONCAT44(_UNK_0f482bb4,_UNK_0f482bb0);
    uStack_1a8 = _DAT_0f482b98;
    uStack_1a4 = _UNK_0f482b9c;
    uStack_1a0 = _UNK_0f482ba0;
    uStack_19c = _UNK_0f482ba4;
    bStack_188 = 0;
    bStack_160 = 0;
    if (puVar14 < puStack_b8) {
      puVar14[4] = _DAT_0f482ba8;
      puVar14[5] = uVar7;
      puVar14[6] = uVar8;
      puVar14[7] = uVar9;
      *puVar14 = uVar3;
      puVar14[1] = uVar4;
      puVar14[2] = uVar5;
      puVar14[3] = uVar6;
      *(undefined1 *)(puVar14 + 8) = 0;
      *(undefined1 *)(puVar14 + 0x12) = 0;
      puVar14 = puVar14 + 0x14;
    }
    else {
      puStack_c0 = (undefined4 *)func_0x0489d2c0(&uStack_c8,&uStack_1a8);
      puVar14 = puStack_c0;
      if (((bStack_160 & 1) != 0) && ((bStack_188 & 1) != 0)) {
        func_0x0412a280(uStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
        puVar14 = puStack_c0;
      }
    }
    uVar13 = uStack_a0;
    uVar18 = uStack_a8;
    uVar2 = uStack_b0;
    puVar17 = puStack_b8;
    uVar16 = uStack_c8;
    uStack_c8 = 0;
    puStack_c0 = (undefined4 *)0x0;
    puStack_b8 = (undefined4 *)0x0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *(undefined4 *)param_1 = uStack_d8;
    *(undefined4 *)((long)param_1 + 4) = uStack_d4;
    *(undefined4 *)(param_1 + 1) = uStack_d0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_cc;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[2] = uVar16;
    param_1[3] = (ulong)puVar14;
    param_1[4] = (ulong)puVar17;
    param_1[5] = uVar2;
    param_1[6] = uVar18;
    param_1[7] = uVar13;
    uVar16 = uStack_b0;
  }
  else if (uStack_40 < 0x7fffffff) {
    uVar2 = (long)&uStack_158 + 1;
    if (uStack_40 < 0x17) {
      uStack_158 = CONCAT71(uStack_158._1_7_,(char)uStack_40 * '\x02');
      uVar13 = uVar2;
      if (uStack_40 != 0) goto LAB_0d777a56;
    }
    else {
      uVar18 = 0x1a;
      if ((uStack_40 | 7) != 0x17) {
        uVar18 = (uStack_40 | 7) + 1;
      }
      uVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
      if (uVar13 == 0) {
        func_0x0eec74c0(uVar18,0);
      }
      uStack_158 = uVar18 | 1;
      uStack_150 = uVar16;
      uStack_148 = uVar13;
LAB_0d777a56:
      func_0x0eee2dd0(uVar13,0,uVar16);
    }
    *(undefined1 *)(uVar13 + uVar16) = 0;
    uVar16 = uStack_158 >> 1 & 0x7f;
    if ((uStack_158 & 1) != 0) {
      uVar16 = uStack_150;
      uVar2 = uStack_148;
    }
    func_0x0ee76a70(&uStack_1a8,plStack_138,uVar2,uVar16);
    puVar14 = uStack_190;
    uVar9 = _UNK_0f482bf4;
    uVar8 = _UNK_0f482bf0;
    uVar7 = _UNK_0f482bec;
    uVar6 = _UNK_0f482be4;
    uVar5 = _UNK_0f482be0;
    uVar4 = _UNK_0f482bdc;
    uVar3 = _DAT_0f482bd8;
    bStack_e8 = bStack_168;
    if (bStack_168 == 0) {
      uStack_128._0_4_ = uStack_1a8;
      uStack_128._4_4_ = uStack_1a4;
      uStack_120._0_4_ = uStack_1a0;
      uStack_120._4_4_ = uStack_19c;
      uStack_118 = CONCAT44(uStack_194,uStack_198);
      uStack_110 = uStack_190;
      puStack_108 = (undefined4 *)CONCAT71(uStack_187,bStack_188);
      uStack_100 = uStack_180;
      uStack_f8 = uStack_178;
      uStack_f0 = uStack_170;
      uStack_198 = _DAT_0f482be8;
      uStack_194 = _UNK_0f482bec;
      uStack_190 = (undefined4 *)CONCAT44(_UNK_0f482bf4,_UNK_0f482bf0);
      uStack_1a8 = _DAT_0f482bd8;
      uStack_1a4 = _UNK_0f482bdc;
      uStack_1a0 = _UNK_0f482be0;
      uStack_19c = _UNK_0f482be4;
      bStack_188 = 0;
      bStack_160 = 0;
      if (puVar14 < puStack_108) {
        puVar14[4] = _DAT_0f482be8;
        puVar14[5] = uVar7;
        puVar14[6] = uVar8;
        puVar14[7] = uVar9;
        *puVar14 = uVar3;
        puVar14[1] = uVar4;
        puVar14[2] = uVar5;
        puVar14[3] = uVar6;
        *(undefined1 *)(puVar14 + 8) = 0;
        *(undefined1 *)(puVar14 + 0x12) = 0;
        puVar14 = puVar14 + 0x14;
      }
      else {
        uStack_110 = (undefined4 *)func_0x0489d2c0(&uStack_118,&uStack_1a8);
        puVar14 = uStack_110;
        if (((bStack_160 & 1) != 0) && ((bStack_188 & 1) != 0)) {
          func_0x0412a280(uStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
          puVar14 = uStack_110;
        }
      }
      uVar13 = uStack_f0;
      uVar18 = uStack_f8;
      uVar2 = uStack_100;
      puVar17 = puStack_108;
      uVar16 = uStack_118;
      uStack_118 = 0;
      uStack_110 = (undefined4 *)0x0;
      puStack_108 = (undefined4 *)0x0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      *(undefined4 *)param_1 = (undefined4)uStack_128;
      *(undefined4 *)((long)param_1 + 4) = uStack_128._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_120;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_120._4_4_;
      *(undefined1 *)(param_1 + 8) = 0;
      param_1[2] = uVar16;
      param_1[3] = (ulong)puVar14;
      param_1[4] = (ulong)puVar17;
      param_1[5] = uVar2;
      param_1[6] = uVar18;
      param_1[7] = uVar13;
      lVar1 = uStack_100;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 1;
      param_1[2] = uStack_148;
      *param_1 = uStack_158;
      param_1[1] = uStack_150;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      lVar1 = uStack_100;
    }
    uStack_100 = lVar1;
    if ((bStack_e8 & 1) == 0) {
      lVar19 = uStack_f8;
      if (lVar1 != 0) {
        while (lVar1 != lVar19) {
          func_0x048b3e80(lVar19 + -0x40);
          lVar19 = lVar19 + -0x40;
        }
        uStack_f8 = lVar1;
        func_0x0412a280(uStack_100,uStack_f0 - uStack_100);
      }
      lVar19 = uStack_118;
      lVar1 = (long)uStack_110;
      if (uStack_118 != 0) {
        for (; lVar19 != lVar1; lVar1 = lVar1 + -0x50) {
          if ((*(char *)(lVar1 + -8) == '\x01') && ((*(byte *)(lVar1 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar1 + -0x20),
                            *(ulong *)(lVar1 + -0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_110 = (undefined4 *)lVar19;
        func_0x0412a280(uStack_118,(long)puStack_108 - uStack_118);
      }
    }
    uVar16 = uStack_b0;
    if ((uStack_158 & 1) != 0) {
      func_0x0412a280(uStack_148,uStack_158 & 0xfffffffffffffffe);
      uVar16 = uStack_b0;
    }
  }
  else {
    uVar15 = func_0x0412dc70();
    func_0x0d7775c0(&uStack_128,0x1b,uVar15);
    uVar16 = uStack_f0;
    puVar14 = puStack_108;
    *param_1 = uStack_128;
    param_1[1] = uStack_120;
    uVar3 = (undefined4)uStack_118;
    uVar4 = uStack_118._4_4_;
    uVar5 = (undefined4)uStack_110;
    uVar6 = uStack_110._4_4_;
    uStack_118 = 0;
    uStack_110 = (undefined4 *)0x0;
    puStack_108 = (undefined4 *)0x0;
    uVar7 = (undefined4)uStack_100;
    uVar8 = uStack_100._4_4_;
    uVar9 = (undefined4)uStack_f8;
    uVar11 = uStack_f8._4_4_;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 2) = uVar3;
    *(undefined4 *)((long)param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 3) = uVar5;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar6;
    param_1[4] = (ulong)puVar14;
    *(undefined4 *)(param_1 + 5) = uVar7;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar8;
    *(undefined4 *)(param_1 + 6) = uVar9;
    *(undefined4 *)((long)param_1 + 0x34) = uVar11;
    param_1[7] = uVar16;
    func_0x048e6d60(&uStack_128);
    uVar16 = uStack_b0;
  }
  uStack_b0 = uVar16;
  if (bStack_98 == 0) {
    lVar1 = uStack_a8;
    if (uVar16 != 0) {
      while (uVar16 != lVar1) {
        func_0x048b3e80(lVar1 + -0x40);
        lVar1 = lVar1 + -0x40;
      }
      uStack_a8 = uVar16;
      func_0x0412a280(uStack_b0,uStack_a0 - uStack_b0);
    }
    uVar16 = uStack_c8;
    puVar14 = puStack_c0;
    if (uStack_c8 != 0) {
      for (; (undefined4 *)uVar16 != puVar14; puVar14 = (undefined4 *)((long)puVar14 - 0x50)) {
        if ((*(char *)((long)puVar14 - 8) == '\x01') && ((*(byte *)((long)puVar14 - 0x30) & 1) != 0)
           ) {
          func_0x0412a280(*(undefined8 *)((long)puVar14 - 0x20),
                          *(ulong *)((long)puVar14 - 0x30) & 0xfffffffffffffffe);
        }
      }
      puStack_c0 = (undefined4 *)uVar16;
      func_0x0412a280(uStack_c8,(long)puStack_b8 - uStack_c8);
    }
  }
LAB_0d777daa:
  uVar16 = uStack_60;
  if (bStack_48 == 0) {
    uVar2 = uStack_58;
    if (uStack_60 != 0) {
      while (uVar16 != uVar2) {
        func_0x048b3e80(uVar2 + -0x40);
        uVar2 = uVar2 + -0x40;
      }
      uStack_58 = uVar16;
      func_0x0412a280(uStack_60,uStack_50 - uStack_60);
    }
    uVar16 = uStack_78;
    puVar14 = puStack_70;
    if (uStack_78 != 0) {
      for (; (undefined4 *)uVar16 != puVar14; puVar14 = (undefined4 *)((long)puVar14 - 0x50)) {
        if ((*(char *)((long)puVar14 - 8) == '\x01') && ((*(byte *)((long)puVar14 - 0x30) & 1) != 0)
           ) {
          func_0x0412a280(*(undefined8 *)((long)puVar14 - 0x20),
                          *(ulong *)((long)puVar14 - 0x30) & 0xfffffffffffffffe);
        }
      }
      puStack_70 = (undefined4 *)uVar16;
      func_0x0412a280(uStack_78,(long)puStack_68 - uStack_78);
    }
  }
  if ((plStack_138 != (long *)0x0) &&
     (func_0x0ee56810(&uStack_1a8,&plStack_138), uVar16 = uStack_180, bStack_168 == 0)) {
    if (uStack_180 != 0) {
      while (uVar16 != uStack_178) {
        func_0x048b3e80(uStack_178 - 0x40);
        uStack_178 = uStack_178 - 0x40;
      }
      uStack_178 = uVar16;
      func_0x0412a280(uStack_180,uStack_170 - uStack_180);
    }
    puVar14 = (undefined4 *)CONCAT44(uStack_194,uStack_198);
    if (puVar14 != (undefined4 *)0x0) {
      puVar17 = puVar14;
      puVar20 = uStack_190;
      if (puVar14 != uStack_190) {
        do {
          if ((*(char *)(puVar20 + -2) == '\x01') && ((*(byte *)(puVar20 + -0xc) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar20 + -8),
                            *(ulong *)(puVar20 + -0xc) & 0xfffffffffffffffe);
          }
          puVar20 = puVar20 + -0x14;
        } while (puVar20 != puVar14);
        puVar17 = (undefined4 *)CONCAT44(uStack_194,uStack_198);
      }
      uStack_190 = puVar14;
      func_0x0412a280(puVar17,CONCAT71(uStack_187,bStack_188) - (long)puVar17);
    }
  }
  plVar10 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  plVar10 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  return param_1;
}


