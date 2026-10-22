/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83ea790 (ELF vaddr 0x82ea790)
 * Label: JigsawStructureDataPacket::vslot16
 * Body:  [[083ea790, 083eabb3] [083eabc0, 083eb1e3] [083eb1f0, 083eb23e]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot16
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_JigsawStructureDataPacket__vslot16
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 **ppuVar12;
  long lVar13;
  int iVar14;
  byte bVar15;
  byte bVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined *puStack_218;
  undefined4 **ppuStack_210;
  undefined4 *puStack_208;
  undefined4 *puStack_200;
  undefined4 *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  byte bStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  byte bStack_188;
  byte bStack_180;
  undefined *puStack_178;
  undefined4 **ppuStack_170;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  undefined4 *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  byte bStack_138;
  undefined *puStack_128;
  undefined4 **ppuStack_120;
  undefined4 *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined4 **ppuStack_100;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  undefined4 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  byte bStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined4 *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  byte bStack_78;
  long lStack_68;
  undefined4 *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined4 **ppuStack_40;
  
  (**(code **)(*param_2 + 0x10))(param_2);
  iVar14 = (**(code **)(*param_2 + 0x68))(param_2);
  if ((1 < iVar14 - 3U) && (iVar14 != 5)) {
    puStack_128 = &UNK_0f47e0b0;
    puStack_118 = (undefined4 *)0x0;
    uStack_110 = 0;
    ppuStack_120 = &puStack_118;
    func_0x0d6bd910(&uStack_1c8,param_3);
    bStack_c8 = bStack_188;
    bStack_1d8 = bStack_188;
    puVar18 = puStack_1a8;
    lVar3 = lStack_1a0;
    lVar1 = lStack_198;
    lVar13 = lStack_190;
    puStack_218 = uStack_1c8;
    ppuStack_100 = uStack_1c0;
    puStack_208 = uStack_1b8;
    puStack_200 = uStack_1b0;
    if (bStack_188 == 1) {
      puStack_108 = &UNK_0f47e0b0;
      puStack_f8 = uStack_1b8;
      puStack_f0 = uStack_1b0;
      ppuVar12 = &puStack_f8;
      if (uStack_1b0 != (undefined4 *)0x0) {
        uStack_1c0 = (undefined4 **)&uStack_1b8;
        *(undefined4 ***)(uStack_1b8 + 4) = &puStack_f8;
        uStack_1b8 = (undefined4 *)0x0;
        uStack_1b0 = (undefined4 *)0x0;
        ppuVar12 = ppuStack_100;
      }
      ppuStack_100 = ppuVar12;
      uStack_1c8 = &UNK_0f47e0b0;
      func_0x0d6c9500(&uStack_1c0,uStack_1b8);
      bStack_1d8 = bStack_c8;
      puVar18 = puStack_e8;
      lVar3 = lStack_e0;
      lVar1 = lStack_d8;
      lVar13 = lStack_d0;
      puStack_218 = puStack_108;
      puStack_208 = puStack_f8;
      puStack_200 = puStack_f0;
    }
    lStack_d0 = lVar13;
    lStack_d8 = lVar1;
    lStack_e0 = lVar3;
    bStack_c8 = bStack_1d8;
    if ((bStack_1d8 & 1) == 0) {
      puStack_f8 = (undefined4 *)0x0;
      puStack_f0 = (undefined4 *)0x0;
      puStack_e8 = (undefined4 *)0x0;
      ppuStack_210 = ppuStack_100;
      puStack_1f8 = puVar18;
      lStack_1f0 = lStack_e0;
      lStack_1e8 = lStack_d8;
      lStack_1e0 = lStack_d0;
      puStack_108 = puStack_218;
    }
    else {
      puStack_218 = &UNK_0f47e0b0;
      ppuStack_210 = &puStack_208;
      puStack_f8 = puStack_208;
      puStack_f0 = puStack_200;
      if (puStack_200 != (undefined4 *)0x0) {
        *(undefined4 ***)((long)puStack_208 + 0x10) = ppuStack_210;
        puStack_f8 = (undefined4 *)0x0;
        puStack_f0 = (undefined4 *)0x0;
        ppuStack_210 = ppuStack_100;
        ppuStack_100 = &puStack_f8;
      }
      puStack_108 = &UNK_0f47e0b0;
      puStack_e8 = puVar18;
      func_0x0d6c9500(&ppuStack_100,puStack_f8);
    }
    if ((bStack_1d8 & 1) == 0) {
      func_0x083ed6d0(&puStack_218);
      lStack_190 = lStack_1e0;
      lStack_198 = lStack_1e8;
      lStack_1a0 = lStack_1f0;
      puStack_1a8 = puStack_1f8;
      uStack_1b0 = puStack_200;
      uStack_1b8 = puStack_208;
      puStack_108 = puStack_218;
      ppuStack_100 = ppuStack_210;
      puStack_208 = (undefined4 *)0x0;
      puStack_200 = (undefined4 *)0x0;
      puStack_1f8 = (undefined4 *)0x0;
      lStack_1f0 = 0;
      lStack_1e8 = 0;
      lStack_1e0 = 0;
      uStack_1c8 = puStack_218;
      uStack_1c0 = ppuStack_210;
      puStack_f8 = (undefined4 *)0x0;
      puStack_f0 = (undefined4 *)0x0;
      puStack_e8 = (undefined4 *)0x0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      bStack_188 = 0;
      func_0x048e6d60(&puStack_108);
      ppuVar12 = ppuStack_210;
      lVar3 = lStack_1f0;
    }
    else {
      func_0x0d6c9500(&ppuStack_120,puStack_118);
      uStack_1b0 = puStack_200;
      uStack_1b8 = puStack_208;
      lVar3 = lStack_1f0;
      if (puStack_200 == (undefined4 *)0x0) {
        bStack_188 = 1;
        uStack_1c8 = &UNK_0f47e0b0;
        uStack_1c0 = (undefined4 **)&uStack_1b8;
        uStack_1b0 = (undefined4 *)0x0;
        puStack_200 = (undefined4 *)0x0;
        uStack_110 = 0;
        ppuVar12 = ppuStack_210;
        ppuStack_120 = &puStack_118;
        puStack_118 = puStack_208;
      }
      else {
        puStack_208 = (undefined4 *)0x0;
        puStack_200 = (undefined4 *)0x0;
        bStack_188 = 1;
        uStack_1c8 = &UNK_0f47e0b0;
        *(undefined8 **)(uStack_1b8 + 4) = &uStack_1b8;
        puStack_118 = (undefined4 *)0x0;
        uStack_110 = 0;
        ppuVar12 = &puStack_208;
        uStack_1c0 = ppuStack_210;
        ppuStack_120 = &puStack_118;
      }
    }
    ppuStack_210 = ppuVar12;
    lStack_1f0 = lVar3;
    if (bStack_1d8 == 1) {
      puStack_218 = &UNK_0f47e0b0;
      func_0x0d6c9500(&ppuStack_210,puStack_208);
    }
    else {
      lVar1 = lStack_1e8;
      if (lVar3 != 0) {
        while (lVar3 != lVar1) {
          func_0x048b3e80(lVar1 + -0x40);
          lVar1 = lVar1 + -0x40;
        }
        lStack_1e8 = lVar3;
        func_0x0412a280(lStack_1f0,lStack_1e0 - lStack_1f0);
      }
      puVar17 = puStack_208;
      puVar18 = puStack_200;
      if (puStack_208 != (undefined4 *)0x0) {
        for (; puVar17 != puVar18; puVar18 = puVar18 + -0x14) {
          if ((*(char *)(puVar18 + -2) == '\x01') && ((*(byte *)(puVar18 + -0xc) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar18 + -8),
                            *(ulong *)(puVar18 + -0xc) & 0xfffffffffffffffe);
          }
        }
        puStack_200 = puVar17;
        func_0x0412a280(puStack_208,(long)puStack_1f8 - (long)puStack_208);
      }
    }
    puStack_128 = &UNK_0f47e0b0;
    func_0x0d6c9500(&ppuStack_120,puStack_118);
    bStack_1d8 = bStack_188;
    puStack_168 = uStack_1b8;
    puStack_160 = uStack_1b0;
    puVar18 = puStack_1a8;
    lVar3 = lStack_1a0;
    lVar1 = lStack_198;
    lVar13 = lStack_190;
    puStack_218 = uStack_1c8;
    ppuStack_210 = uStack_1c0;
    if (bStack_188 == 1) {
      puStack_218 = &UNK_0f47e0b0;
      puStack_208 = uStack_1b8;
      puStack_200 = uStack_1b0;
      ppuVar12 = &puStack_208;
      if (uStack_1b0 != (undefined4 *)0x0) {
        uStack_1c0 = (undefined4 **)&uStack_1b8;
        *(undefined4 ***)(uStack_1b8 + 4) = &puStack_208;
        uStack_1b8 = (undefined4 *)0x0;
        uStack_1b0 = (undefined4 *)0x0;
        ppuVar12 = ppuStack_210;
      }
      ppuStack_210 = ppuVar12;
      uStack_1c8 = &UNK_0f47e0b0;
      func_0x0d6c9500(&uStack_1c0,uStack_1b8);
      puStack_168 = puStack_208;
      puStack_160 = puStack_200;
      puVar18 = puStack_1f8;
      lVar3 = lStack_1f0;
      lVar1 = lStack_1e8;
      lVar13 = lStack_1e0;
    }
    lStack_1e0 = lVar13;
    lStack_1e8 = lVar1;
    lStack_1f0 = lVar3;
    bStack_138 = bStack_1d8;
    if ((bStack_1d8 & 1) == 0) {
      puStack_208 = (undefined4 *)0x0;
      puStack_200 = (undefined4 *)0x0;
      puStack_1f8 = (undefined4 *)0x0;
      puStack_178 = puStack_218;
      ppuStack_170 = ppuStack_210;
      puStack_158 = puVar18;
      lStack_150 = lStack_1f0;
      lStack_148 = lStack_1e8;
      lStack_140 = lStack_1e0;
    }
    else {
      puStack_178 = &UNK_0f47e0b0;
      ppuStack_170 = &puStack_168;
      ppuVar12 = ppuStack_210;
      puStack_208 = puStack_168;
      puStack_200 = puStack_160;
      if (puStack_160 != (undefined4 *)0x0) {
        *(undefined4 ***)(puStack_168 + 4) = ppuStack_170;
        puStack_208 = (undefined4 *)0x0;
        puStack_200 = (undefined4 *)0x0;
        ppuVar12 = &puStack_208;
        ppuStack_170 = ppuStack_210;
      }
      ppuStack_210 = ppuVar12;
      puStack_218 = &UNK_0f47e0b0;
      puStack_1f8 = puVar18;
      func_0x0d6c9500(&ppuStack_210,puStack_208);
    }
    if ((bStack_138 & 1) == 0) {
      func_0x0848e3f0(&puStack_178);
      puVar17 = puStack_158;
      puVar18 = puStack_160;
      uStack_1c8 = puStack_178;
      uStack_1c0 = ppuStack_170;
      puStack_60 = puStack_168;
      puStack_168 = (undefined4 *)0x0;
      puStack_160 = (undefined4 *)0x0;
      puStack_158 = (undefined4 *)0x0;
      lStack_58 = lStack_150;
      lStack_50 = lStack_148;
      lStack_68 = lStack_140;
      lStack_150 = 0;
      lStack_148 = 0;
      lStack_140 = 0;
      puStack_48 = puStack_178;
      ppuStack_40 = ppuStack_170;
      lStack_198 = 0;
      lStack_190 = 0;
      puStack_1a8 = (undefined4 *)0x0;
      lStack_1a0 = 0;
      uStack_1b8 = (undefined4 *)0x0;
      uStack_1b0 = (undefined4 *)0x0;
      func_0x048e6d60(&uStack_1c8);
      bVar16 = 0;
      bVar15 = 0;
      lVar3 = lStack_150;
    }
    else {
      func_0x0d6c9500(param_2 + 7,param_2[8]);
      param_2[7] = (long)ppuStack_170;
      param_2[8] = (long)puStack_168;
      param_2[9] = (long)puStack_160;
      if (puStack_160 == (undefined4 *)0x0) {
        param_2[7] = (long)(param_2 + 8);
      }
      else {
        ppuStack_170 = &puStack_168;
        *(long **)(puStack_168 + 4) = param_2 + 8;
        puStack_168 = (undefined4 *)0x0;
        puStack_160 = (undefined4 *)0x0;
      }
      lStack_58 = 0;
      lStack_50 = 0;
      puStack_48 = (undefined *)0x0;
      ppuStack_40 = (undefined4 **)0x0;
      bVar16 = 1;
      bVar15 = 1;
      puVar18 = (undefined4 *)0x0;
      puVar17 = (undefined4 *)0x0;
      lStack_68 = 0;
      puStack_60 = (undefined4 *)0x0;
      lVar3 = lStack_150;
    }
    lStack_150 = lVar3;
    if (bStack_138 == 1) {
      puStack_178 = &UNK_0f47e0b0;
      func_0x0d6c9500(&ppuStack_170,puStack_168);
      bVar16 = bVar15;
    }
    else {
      lVar1 = lStack_148;
      if (lVar3 != 0) {
        while (lVar3 != lVar1) {
          func_0x048b3e80(lVar1 + -0x40);
          lVar1 = lVar1 + -0x40;
        }
        lStack_148 = lVar3;
        func_0x0412a280(lStack_150,lStack_140 - lStack_150);
      }
      puVar11 = puStack_168;
      puVar2 = puStack_160;
      if (puStack_168 != (undefined4 *)0x0) {
        for (; puVar11 != puVar2; puVar2 = puVar2 + -0x14) {
          if ((*(char *)(puVar2 + -2) == '\x01') && ((*(byte *)(puVar2 + -0xc) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar2 + -8),
                            *(ulong *)(puVar2 + -0xc) & 0xfffffffffffffffe);
          }
        }
        puStack_160 = puVar11;
        func_0x0412a280(puStack_168,(long)puStack_158 - (long)puStack_168);
      }
    }
    uVar10 = _UNK_0f11ef2c;
    uVar9 = _UNK_0f11ef28;
    uVar8 = _UNK_0f11ef24;
    uVar7 = _UNK_0f11ef1c;
    uVar6 = _UNK_0f11ef18;
    uVar5 = _UNK_0f11ef14;
    uVar4 = _DAT_0f11ef10;
    bStack_78 = bVar16;
    if (bVar16 == 0) {
      uStack_b8 = puStack_48;
      uStack_b0 = ppuStack_40;
      puStack_a8 = puStack_60;
      lStack_90 = lStack_58;
      lStack_88 = lStack_50;
      lStack_80 = lStack_68;
      uStack_1b8 = (undefined4 *)CONCAT44(_UNK_0f11ef24,_DAT_0f11ef20);
      uStack_1b0 = (undefined4 *)CONCAT44(_UNK_0f11ef2c,_UNK_0f11ef28);
      uStack_1c8 = (undefined *)CONCAT44(_UNK_0f11ef14,_DAT_0f11ef10);
      uStack_1c0 = (undefined4 **)CONCAT44(_UNK_0f11ef1c,_UNK_0f11ef18);
      puStack_1a8 = (undefined4 *)((ulong)puStack_1a8 & 0xffffffffffffff00);
      bStack_180 = 0;
      if (puVar18 < puVar17) {
        puVar18[4] = _DAT_0f11ef20;
        puVar18[5] = uVar8;
        puVar18[6] = uVar9;
        puVar18[7] = uVar10;
        *puVar18 = uVar4;
        puVar18[1] = uVar5;
        puVar18[2] = uVar6;
        puVar18[3] = uVar7;
        *(undefined1 *)(puVar18 + 8) = 0;
        *(undefined1 *)(puVar18 + 0x12) = 0;
        puVar18 = puVar18 + 0x14;
        puStack_98 = puVar17;
      }
      else {
        puStack_a0 = puVar18;
        puStack_98 = puVar17;
        puStack_a0 = (undefined4 *)func_0x0489d2c0(&puStack_a8,&uStack_1c8);
        puVar18 = puStack_a0;
        if (((bStack_180 & 1) != 0) && (((ulong)puStack_1a8 & 1) != 0)) {
          func_0x0412a280(lStack_198,(ulong)puStack_1a8 & 0xfffffffffffffffe);
          puVar18 = puStack_a0;
        }
      }
      lVar13 = lStack_80;
      lVar1 = lStack_88;
      lVar3 = lStack_90;
      puVar2 = puStack_98;
      puVar17 = puStack_a8;
      puStack_a8 = (undefined4 *)0x0;
      puStack_a0 = (undefined4 *)0x0;
      puStack_98 = (undefined4 *)0x0;
      lStack_90 = 0;
      lStack_88 = 0;
      lStack_80 = 0;
      *(undefined4 *)param_1 = (undefined4)uStack_b8;
      *(undefined4 *)((long)param_1 + 4) = uStack_b8._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_b0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_b0._4_4_;
      *(undefined1 *)(param_1 + 8) = 0;
      param_1[2] = puVar17;
      param_1[3] = puVar18;
      param_1[4] = puVar2;
      param_1[5] = lVar3;
      param_1[6] = lVar1;
      param_1[7] = lVar13;
      bVar16 = bStack_78 & 1;
      lVar3 = lStack_90;
    }
    else {
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[8] = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      lVar3 = lStack_90;
    }
    if (bVar16 == 0) {
      lStack_90 = lVar3;
      lVar1 = lStack_88;
      if (lVar3 != 0) {
        while (lVar3 != lVar1) {
          func_0x048b3e80(lVar1 + -0x40);
          lVar1 = lVar1 + -0x40;
        }
        lStack_88 = lVar3;
        func_0x0412a280(lStack_90,lStack_80 - lStack_90);
      }
      puVar17 = puStack_a8;
      puVar18 = puStack_a0;
      if (puStack_a8 != (undefined4 *)0x0) {
        for (; puVar17 != puVar18; puVar18 = puVar18 + -0x14) {
          if ((*(char *)(puVar18 + -2) == '\x01') && ((*(byte *)(puVar18 + -0xc) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar18 + -8),
                            *(ulong *)(puVar18 + -0xc) & 0xfffffffffffffffe);
          }
        }
        puStack_a0 = puVar17;
        func_0x0412a280(puStack_a8,(long)puStack_98 - (long)puStack_a8);
      }
    }
    return param_1;
  }
  func_0x0848dd60(param_1,param_4,param_3,param_2 + 6);
  return param_1;
}


