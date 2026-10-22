/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa004b70 (ELF vaddr 0x9f04b70)
 * Label: caller-of-callee
 * Body:  [[0a004b70, 0a005510] [0a005520, 0a005709] [0a005710, 0a0057ab]]
 * Ghidra: FUN_0a004b70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0a004b70(long param_1)

{
  byte *pbVar1;
  undefined7 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  byte *pbVar18;
  bool bVar19;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte bStack_188;
  undefined7 uStack_187;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  byte bStack_168;
  byte bStack_160;
  long *plStack_158;
  long *plStack_150;
  byte *pbStack_148;
  ulong uStack_140;
  undefined4 *puStack_138;
  undefined4 *puStack_130;
  undefined4 *puStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  byte bStack_100;
  undefined7 uStack_ff;
  ulong uStack_f8;
  undefined7 *puStack_f0;
  byte *pbStack_e8;
  ulong uStack_e0;
  undefined4 *puStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  byte bStack_a8;
  byte *pbStack_98;
  ulong uStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  byte bStack_58;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  byte bStack_38;
  undefined7 uStack_37;
  undefined8 uStack_28;
  
  pbVar1 = *(byte **)(param_1 + 8);
  (**(code **)(**(long **)(pbVar1 + 0x18) + 0x10))(auStack_50);
  func_0x04867c60(&puStack_40);
  func_0x04867c90(&bStack_100,&puStack_40,auStack_50);
  plStack_158 = (long *)0x0;
  plStack_150 = (long *)0x0;
  bVar19 = (*pbVar1 & 1) != 0;
  pbVar18 = pbVar1 + 1;
  if (bVar19) {
    pbVar18 = *(byte **)(pbVar1 + 0x10);
  }
  uVar16 = (ulong)(*pbVar1 >> 1);
  if (bVar19) {
    uVar16 = *(ulong *)(pbVar1 + 8);
  }
  if (((_DAT_0f7b8ad0 == 1) && (*_DAT_0f7b8ac8 == 'w')) ||
     ((_DAT_0f7b8ae0 == 1 && (*_DAT_0f7b8ad8 == 'w')))) {
    lVar15 = 0xf7b8ab8;
  }
  else if (((_DAT_0f7b8b10 == 1) && (*_DAT_0f7b8b08 == 'w')) ||
          ((_DAT_0f7b8b20 == 1 && (*_DAT_0f7b8b18 == 'w')))) {
    lVar15 = 0xf7b8af8;
  }
  else if (((_DAT_0f7b8b50 == 1) && (*_DAT_0f7b8b48 == 'w')) ||
          ((_DAT_0f7b8b60 == 1 && (*_DAT_0f7b8b58 == 'w')))) {
    lVar15 = 0xf7b8b38;
  }
  else if (((_DAT_0f7b8b90 == 1) && (*_DAT_0f7b8b88 == 'w')) ||
          ((_DAT_0f7b8ba0 == 1 && (*_DAT_0f7b8b98 == 'w')))) {
    lVar15 = 0xf7b8b78;
  }
  else if (((_DAT_0f7b8bd0 == 1) && (*_DAT_0f7b8bc8 == 'w')) ||
          ((_DAT_0f7b8be0 == 1 && (*_DAT_0f7b8bd8 == 'w')))) {
    lVar15 = 0xf7b8bb8;
  }
  else if (((_DAT_0f7b8c10 == 1) && (*_DAT_0f7b8c08 == 'w')) ||
          ((_DAT_0f7b8c20 == 1 && (*_DAT_0f7b8c18 == 'w')))) {
    lVar15 = 0xf7b8bf8;
  }
  else if (((_DAT_0f7b8c50 == 1) && (*_DAT_0f7b8c48 == 'w')) ||
          ((_DAT_0f7b8c60 == 1 && (*_DAT_0f7b8c58 == 'w')))) {
    lVar15 = 0xf7b8c38;
  }
  else if (((_DAT_0f7b8c90 == 1) && (*_DAT_0f7b8c88 == 'w')) ||
          ((_DAT_0f7b8ca0 == 1 && (*_DAT_0f7b8c98 == 'w')))) {
    lVar15 = 0xf7b8c78;
  }
  else if (((_DAT_0f7b8cd0 == 1) && (*_DAT_0f7b8cc8 == 'w')) ||
          ((_DAT_0f7b8ce0 == 1 && (*_DAT_0f7b8cd8 == 'w')))) {
    lVar15 = 0xf7b8cb8;
  }
  else if (((_DAT_0f7b8d10 == 1) && (*_DAT_0f7b8d08 == 'w')) ||
          ((_DAT_0f7b8d20 == 1 && (*_DAT_0f7b8d18 == 'w')))) {
    lVar15 = 0xf7b8cf8;
  }
  else if (((_DAT_0f7b8d50 == 1) && (*_DAT_0f7b8d48 == 'w')) ||
          ((_DAT_0f7b8d60 == 1 && (*_DAT_0f7b8d58 == 'w')))) {
    lVar15 = 0xf7b8d38;
  }
  else if (((_DAT_0f7b8d90 == 1) && (*_DAT_0f7b8d88 == 'w')) ||
          ((_DAT_0f7b8da0 == 1 && (*_DAT_0f7b8d98 == 'w')))) {
    lVar15 = 0xf7b8d78;
  }
  else if (((_DAT_0f7b8dd0 == 1) && (*_DAT_0f7b8dc8 == 'w')) ||
          ((_DAT_0f7b8de0 == 1 && (*_DAT_0f7b8dd8 == 'w')))) {
    lVar15 = 0xf7b8db8;
  }
  else if (((_DAT_0f7b8e10 == 1) && (*_DAT_0f7b8e08 == 'w')) ||
          ((_DAT_0f7b8e20 == 1 && (*_DAT_0f7b8e18 == 'w')))) {
    lVar15 = 0xf7b8df8;
  }
  else if (((_DAT_0f7b8e50 == 1) && (*_DAT_0f7b8e48 == 'w')) ||
          ((_DAT_0f7b8e60 == 1 && (*_DAT_0f7b8e58 == 'w')))) {
    lVar15 = 0xf7b8e38;
  }
  else if (((_DAT_0f7b8e90 == 1) && (*_DAT_0f7b8e88 == 'w')) ||
          ((_DAT_0f7b8ea0 == 1 && (*_DAT_0f7b8e98 == 'w')))) {
    lVar15 = 0xf7b8e78;
  }
  else {
    if (((_DAT_0f7b8ed0 != 1) || (*_DAT_0f7b8ec8 != 'w')) &&
       ((uVar17 = (uint)CONCAT62((int6)((ulong)pbVar1 >> 0x10),0x100), _DAT_0f7b8ee0 != 1 ||
        (*_DAT_0f7b8ed8 != 'w')))) goto LAB_0a004f92;
    lVar15 = 0xf7b8eb8;
  }
  uVar17 = (uint)*(ushort *)(lVar15 + 0x30);
LAB_0a004f92:
  if ((DAT_0f7b8fb8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7b8fb8), iVar14 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
  }
  pbStack_98 = pbVar18;
  uStack_90 = uVar16;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_1a8,&DAT_0f7b8f98,&pbStack_98,&plStack_158,uVar17,0);
  puVar4 = uStack_190;
  uVar11 = _UNK_0f1f9ddc;
  uVar10 = _UNK_0f1f9dd8;
  uVar9 = _UNK_0f1f9dd4;
  uVar8 = _UNK_0f1f9dcc;
  uVar7 = _UNK_0f1f9dc8;
  uVar6 = _UNK_0f1f9dc4;
  uVar5 = _DAT_0f1f9dc0;
  bStack_a8 = bStack_168;
  if (bStack_168 == 0) {
    pbStack_e8 = uStack_1a8;
    uStack_e0 = (ulong)uStack_1a0;
    puStack_d8 = uStack_198;
    puStack_d0 = uStack_190;
    puStack_c8 = (undefined4 *)CONCAT71(uStack_187,bStack_188);
    lStack_c0 = lStack_180;
    lStack_b8 = lStack_178;
    lStack_b0 = lStack_170;
    uStack_198 = (undefined4 *)CONCAT44(_UNK_0f1f9dd4,_DAT_0f1f9dd0);
    uStack_190 = (undefined4 *)CONCAT44(_UNK_0f1f9ddc,_UNK_0f1f9dd8);
    uStack_1a8 = (byte *)CONCAT44(_UNK_0f1f9dc4,_DAT_0f1f9dc0);
    uStack_1a0 = (undefined *)CONCAT44(_UNK_0f1f9dcc,_UNK_0f1f9dc8);
    bStack_188 = 0;
    bStack_160 = 0;
    if (puVar4 < puStack_c8) {
      puVar4[4] = _DAT_0f1f9dd0;
      puVar4[5] = uVar9;
      puVar4[6] = uVar10;
      puVar4[7] = uVar11;
      *puVar4 = uVar5;
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
      puVar4[3] = uVar8;
      *(undefined1 *)(puVar4 + 8) = 0;
      *(undefined1 *)(puVar4 + 0x12) = 0;
      puStack_130 = puVar4 + 0x14;
    }
    else {
      puStack_d0 = (undefined4 *)func_0x0489d2c0(&puStack_d8,&uStack_1a8);
      puStack_130 = puStack_d0;
      if (((bStack_160 & 1) != 0) && ((bStack_188 & 1) != 0)) {
        func_0x0412a280(lStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
        puStack_130 = puStack_d0;
      }
    }
    lStack_110 = lStack_b0;
    lStack_118 = lStack_b8;
    lStack_120 = lStack_c0;
    puStack_128 = puStack_c8;
    puStack_138 = puStack_d8;
    puStack_d8 = (undefined4 *)0x0;
    puStack_d0 = (undefined4 *)0x0;
    puStack_c8 = (undefined4 *)0x0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    lStack_b0 = 0;
    uStack_108 = uStack_108 & 0xffffffffffffff00;
    pbStack_148 = pbStack_e8;
    uStack_140 = uStack_e0;
  }
  else {
    uVar16 = (ulong)(bStack_100 >> 1);
    puVar2 = &uStack_ff;
    if ((bStack_100 & 1) != 0) {
      uVar16 = uStack_f8;
      puVar2 = puStack_f0;
    }
    func_0x0ee76e70(&uStack_1a8,plStack_158,puVar2,uVar16);
    puVar4 = uStack_190;
    uVar11 = _UNK_0f1f9dfc;
    uVar10 = _UNK_0f1f9df8;
    uVar9 = _UNK_0f1f9df4;
    uVar8 = _UNK_0f1f9dec;
    uVar7 = _UNK_0f1f9de8;
    uVar6 = _UNK_0f1f9de4;
    uVar5 = _DAT_0f1f9de0;
    bStack_58 = bStack_168;
    if (bStack_168 == 0) {
      pbStack_98 = uStack_1a8;
      uStack_90 = (ulong)uStack_1a0;
      puStack_88 = uStack_198;
      puStack_80 = uStack_190;
      puStack_78 = (undefined4 *)CONCAT71(uStack_187,bStack_188);
      lStack_70 = lStack_180;
      lStack_68 = lStack_178;
      lStack_60 = lStack_170;
      uStack_198 = (undefined4 *)CONCAT44(_UNK_0f1f9df4,_DAT_0f1f9df0);
      uStack_190 = (undefined4 *)CONCAT44(_UNK_0f1f9dfc,_UNK_0f1f9df8);
      uStack_1a8 = (byte *)CONCAT44(_UNK_0f1f9de4,_DAT_0f1f9de0);
      uStack_1a0 = (undefined *)CONCAT44(_UNK_0f1f9dec,_UNK_0f1f9de8);
      bStack_188 = 0;
      bStack_160 = 0;
      if (puVar4 < puStack_78) {
        puVar4[4] = _DAT_0f1f9df0;
        puVar4[5] = uVar9;
        puVar4[6] = uVar10;
        puVar4[7] = uVar11;
        *puVar4 = uVar5;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined1 *)(puVar4 + 8) = 0;
        *(undefined1 *)(puVar4 + 0x12) = 0;
        puStack_130 = puVar4 + 0x14;
      }
      else {
        puStack_80 = (undefined4 *)func_0x0489d2c0(&puStack_88,&uStack_1a8);
        puStack_130 = puStack_80;
        if (((bStack_160 & 1) != 0) && ((bStack_188 & 1) != 0)) {
          func_0x0412a280(lStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
          puStack_130 = puStack_80;
        }
      }
      lStack_110 = lStack_60;
      lStack_118 = lStack_68;
      lStack_120 = lStack_70;
      puStack_128 = puStack_78;
      puStack_138 = puStack_88;
      puStack_88 = (undefined4 *)0x0;
      puStack_80 = (undefined4 *)0x0;
      puStack_78 = (undefined4 *)0x0;
      lStack_70 = 0;
      lStack_68 = 0;
      lStack_60 = 0;
      uStack_108 = uStack_108 & 0xffffffffffffff00;
      lVar15 = lStack_70;
      pbStack_148 = pbStack_98;
      uStack_140 = uStack_90;
    }
    else {
      pbStack_148 = (byte *)0x0;
      uStack_140 = 0;
      puStack_138 = (undefined4 *)0x0;
      puStack_130 = (undefined4 *)0x0;
      puStack_128 = (undefined4 *)0x0;
      lStack_120 = 0;
      lStack_118 = 0;
      lStack_110 = 0;
      uStack_108 = 1;
      lVar15 = lStack_70;
    }
    lStack_70 = lVar15;
    if ((bStack_58 & 1) == 0) {
      lVar3 = lStack_68;
      if (lVar15 != 0) {
        while (lVar15 != lVar3) {
          func_0x048b3e80(lVar3 + -0x40);
          lVar3 = lVar3 + -0x40;
        }
        lStack_68 = lVar15;
        func_0x0412a280(lStack_70,lStack_60 - lStack_70);
      }
      puVar12 = puStack_88;
      puVar4 = puStack_80;
      if (puStack_88 != (undefined4 *)0x0) {
        for (; puVar12 != puVar4; puVar4 = puVar4 + -0x14) {
          if ((*(char *)(puVar4 + -2) == '\x01') && ((*(byte *)(puVar4 + -0xc) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar4 + -8),
                            *(ulong *)(puVar4 + -0xc) & 0xfffffffffffffffe);
          }
        }
        puStack_80 = puVar12;
        func_0x0412a280(puStack_88,(long)puStack_78 - (long)puStack_88);
      }
    }
  }
  lVar15 = lStack_c0;
  if (bStack_a8 == 0) {
    lVar3 = lStack_b8;
    if (lStack_c0 != 0) {
      while (lVar15 != lVar3) {
        func_0x048b3e80(lVar3 + -0x40);
        lVar3 = lVar3 + -0x40;
      }
      lStack_b8 = lVar15;
      func_0x0412a280(lStack_c0,lStack_b0 - lStack_c0);
    }
    puVar12 = puStack_d8;
    puVar4 = puStack_d0;
    if (puStack_d8 != (undefined4 *)0x0) {
      for (; puVar12 != puVar4; puVar4 = puVar4 + -0x14) {
        if ((*(char *)(puVar4 + -2) == '\x01') && ((*(byte *)(puVar4 + -0xc) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(puVar4 + -8),
                          *(ulong *)(puVar4 + -0xc) & 0xfffffffffffffffe);
        }
      }
      puStack_d0 = puVar12;
      func_0x0412a280(puStack_d8,(long)puStack_c8 - (long)puStack_d8);
    }
  }
  if ((plStack_158 != (long *)0x0) &&
     (func_0x0ee56810(&uStack_1a8,&plStack_158), lVar15 = lStack_180, bStack_168 == 0)) {
    if (lStack_180 != 0) {
      while (lVar15 != lStack_178) {
        func_0x048b3e80(lStack_178 + -0x40);
        lStack_178 = lStack_178 + -0x40;
      }
      lStack_178 = lVar15;
      func_0x0412a280(lStack_180,lStack_170 - lStack_180);
    }
    puVar12 = uStack_198;
    puVar4 = uStack_190;
    if (uStack_198 != (undefined4 *)0x0) {
      for (; puVar12 != puVar4; puVar4 = puVar4 + -0x14) {
        if ((*(char *)(puVar4 + -2) == '\x01') && ((*(byte *)(puVar4 + -0xc) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(puVar4 + -8),
                          *(ulong *)(puVar4 + -0xc) & 0xfffffffffffffffe);
        }
      }
      uStack_190 = puVar12;
      func_0x0412a280(uStack_198,CONCAT71(uStack_187,bStack_188) - (long)uStack_198);
    }
  }
  plVar13 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_158;
  plStack_158 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if ((bStack_100 & 1) != 0) {
    func_0x0412a280(puStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
  }
  puStack_40 = &UNK_0ef40ca0;
  if ((bStack_38 & 1) != 0) {
    func_0x0412a280(uStack_28,CONCAT71(uStack_37,bStack_38) & 0xfffffffffffffffe);
  }
  func_0x04867c50(&puStack_40);
  func_0x04863610(auStack_50);
  uStack_1a8 = (byte *)0x3772a32ecefe9f60;
  uStack_1a0 = &UNK_0140f690;
  uStack_198 = (undefined4 *)0x1;
  uStack_190 = (undefined4 *)CONCAT44(uStack_190._4_4_,0x3a);
  if ((byte)uStack_108 == 0) {
    func_0x0eedea30(&pbStack_e8);
    func_0x0eedeb80(2,0x2d,&pbStack_148,&pbStack_e8,&uStack_1a8);
    if (((ulong)pbStack_e8 & 1) != 0) {
      func_0x0412a280(puStack_d8,(ulong)pbStack_e8 & 0xfffffffffffffffe);
    }
  }
  lVar15 = lStack_120;
  if (((byte)uStack_108 & 1) == 0) {
    lVar3 = lStack_118;
    if (lStack_120 != 0) {
      while (lVar15 != lVar3) {
        func_0x048b3e80(lVar3 + -0x40);
        lVar3 = lVar3 + -0x40;
      }
      lStack_118 = lVar15;
      func_0x0412a280(lStack_120,lStack_110 - lStack_120);
    }
    puVar12 = puStack_138;
    puVar4 = puStack_130;
    if (puStack_138 != (undefined4 *)0x0) {
      for (; puVar12 != puVar4; puVar4 = puVar4 + -0x14) {
        if ((*(char *)(puVar4 + -2) == '\x01') && ((*(byte *)(puVar4 + -0xc) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(puVar4 + -8),
                          *(ulong *)(puVar4 + -0xc) & 0xfffffffffffffffe);
        }
      }
      puStack_130 = puVar12;
      func_0x0412a280(puStack_138,(long)puStack_128 - (long)puStack_138);
    }
  }
  return;
}


