/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b9ee60 (ELF vaddr 0x9a9ee60)
 * Label: caller-of-callee
 * Body:  [[09b9ee60, 09b9f2f7] [09b9f300, 09b9f4c5] [09b9f4d0, 09b9f573] [09b9f580, 09b9f72b] [09b9f730, 09b9f9dc] [09b9f9e1, 09b9f9f1] [09b9fa16, 09b9fa31] [09b9fa35, 09b9fa7c]]
 * Ghidra: FUN_09b9ee60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_09b9ee60(long *param_1,byte *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  byte bVar12;
  ulong uVar13;
  long *plVar14;
  byte *pbVar15;
  ulong uVar16;
  bool bVar17;
  undefined1 auStack_170 [8];
  ulong uStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined1 auStack_140 [8];
  ulong uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined *puStack_120;
  byte *pbStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  byte bStack_e8;
  char cStack_e0;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  byte bStack_90;
  long **pplStack_88;
  long *plStack_80;
  ulong uStack_78;
  long *plStack_70;
  ulong uStack_68;
  long *plStack_60;
  ulong uStack_58;
  long *plStack_50;
  ulong uStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar9 = _DAT_0f5523a0;
  pbStack_118 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar11 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    if (((ulong)auStack_140 & 1) != 0) {
      func_0x0412a280(plStack_130,(ulong)auStack_140 & 0xfffffffffffffffe);
    }
    if (((ulong)auStack_170 & 1) != 0) {
      func_0x0412a280(plStack_160,(ulong)auStack_170 & 0xfffffffffffffffe);
      uVar11 = func_0x0eee2d70(uVar11);
      uVar11 = func_0x04882e20(uVar11);
      uVar11 = func_0x04882e20(uVar11);
      func_0x048c3ac0(&plStack_128);
    }
    func_0x0eee2d70(uVar11);
    pcVar2 = (code *)swi(3);
    plVar9 = (long *)(*pcVar2)();
    return plVar9;
  }
  bVar12 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar12 = *pbStack_118;
  }
  plVar8 = _DAT_0f5523a8;
  plStack_128 = (long *)0xf5522b8;
  puStack_120 = (undefined *)CONCAT71(puStack_120._1_7_,1);
  plStack_110 = plVar9;
  plStack_108 = _DAT_0f5523a8;
  if (((bVar12 & 1) == 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar6 = (**(code **)(*plVar8 + 0x610))(plVar8);
  plVar8 = (long *)(ulong)uVar6;
  pbStack_118 = (byte *)0x0;
  plStack_110 = (long *)0x0;
  plVar14 = param_1;
  if (plVar9 == (long *)0x0) {
LAB_09b9ef95:
  }
  else {
    LOCK();
    plVar14 = plVar9 + 1;
    lVar1 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    plVar14 = plStack_110;
    plStack_108 = (long *)0x0;
    if (plStack_110 == (long *)0x0) goto LAB_09b9ef95;
    LOCK();
    plVar9 = plStack_110 + 1;
    lVar1 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar1 != 0) goto LAB_09b9ef95;
    (**(code **)(*plStack_110 + 0x10))(plStack_110);
    func_0x0412c2d0(plVar14);
  }
  if ((char)puStack_120 == '\x01') {
    func_0x0eee02f0(plStack_128);
  }
  if ((char)uVar6 != '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    return param_1;
  }
  bVar17 = (*param_2 & 1) == 0;
  pbVar15 = *(byte **)(param_2 + 0x10);
  if (bVar17) {
    pbVar15 = param_2 + 1;
  }
  uVar16 = (ulong)(*param_2 >> 1);
  if (!bVar17) {
    uVar16 = *(ulong *)(param_2 + 8);
  }
  if (uVar16 < 0xfffffffffffffff8) {
    if (uVar16 < 0x17) {
      auStack_170[0] = (char)uVar16 * '\x02';
      plVar8 = (long *)(auStack_170 + 1);
      if (uVar16 != 0) goto LAB_09b9f044;
    }
    else {
      uVar13 = 0x1a;
      if ((uVar16 | 7) != 0x17) {
        uVar13 = (uVar16 | 7) + 1;
      }
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(uVar13,0);
      }
      plVar14 = (long *)(uVar13 | 1);
      auStack_170 = (undefined1  [8])plVar14;
      uStack_168 = uVar16;
      plStack_160 = plVar8;
LAB_09b9f044:
      func_0x0eee2ee0(plVar8,pbVar15,uVar16);
    }
    *(undefined1 *)((long)plVar8 + uVar16) = 0;
    bVar17 = (*param_2 & 1) != 0;
    pbVar15 = param_2 + 1;
    if (bVar17) {
      pbVar15 = *(byte **)(param_2 + 0x10);
    }
    uVar16 = (ulong)(*param_2 >> 1);
    if (bVar17) {
      uVar16 = *(ulong *)(param_2 + 8);
    }
    if (0xfffffffffffffff7 < uVar16) goto LAB_09b9f88e;
    plVar14 = (long *)(auStack_140 + 1);
    if (uVar16 < 0x17) {
      auStack_140[0] = (char)uVar16 * '\x02';
      plVar9 = plVar14;
      if (uVar16 != 0) goto LAB_09b9f0e5;
    }
    else {
      uVar13 = 0x1a;
      if ((uVar16 | 7) != 0x17) {
        uVar13 = (uVar16 | 7) + 1;
      }
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
      if (plVar9 == (long *)0x0) {
        func_0x0eec74c0(uVar13,0);
      }
      auStack_140 = (undefined1  [8])(uVar13 | 1);
      uStack_138 = uVar16;
      plStack_130 = plVar9;
LAB_09b9f0e5:
      func_0x0eee2ee0(plVar9,pbVar15,uVar16);
    }
    *(undefined1 *)((long)plVar9 + uVar16) = 0;
    func_0x0412f8c0(auStack_140,&UNK_011dd7c5,4);
    plVar8 = param_1;
    if (DAT_0f7b8fb8 == '\0') goto LAB_09b9f893;
  }
  else {
    func_0x04882e30();
LAB_09b9f88e:
    func_0x04882e30();
LAB_09b9f893:
    iVar7 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar7 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
      plVar8 = param_1;
    }
  }
  uStack_38 = (ulong)auStack_140 >> 1 & 0x7f;
  plStack_40 = plVar14;
  if (((ulong)auStack_140 & 1) != 0) {
    uStack_38 = uStack_138;
    plStack_40 = plStack_130;
  }
  cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&plStack_40);
  if (cVar5 == '\0') {
    puVar10 = (undefined *)func_0x0412dc70();
    puStack_f8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puStack_f8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    uVar11 = _UNK_014513c3;
    *puStack_f8 = _DAT_014513bb;
    puStack_f8[1] = uVar11;
    *(undefined8 *)((long)puStack_f8 + 0xf) = 0x2179706f63206f74;
    *(undefined1 *)((long)puStack_f8 + 0x17) = 0;
    pbStack_118 = (byte *)_DAT_0f1da970;
    plStack_110 = _UNK_0f1da978;
    plStack_128 = _DAT_0f1da960;
    puStack_120 = (undefined *)_UNK_0f1da968;
    plStack_108 = (long *)0x1b;
    lStack_100 = 0x17;
    bStack_e8 = 0;
    uStack_f0 = uStack_f0 & 0xff000000;
    cStack_e0 = '\x01';
    plStack_158 = (long *)0x0;
    plStack_150 = (long *)0x0;
    plStack_148 = (long *)0x0;
    func_0x0eee17a0(&plStack_158,&plStack_128,auStack_d8,1);
    if ((cStack_e0 == '\x01') && (((ulong)plStack_108 & 1) != 0)) {
      func_0x0412a280(puStack_f8,(ulong)plStack_108 & 0xfffffffffffffffe);
    }
    plStack_d0 = (long *)CONCAT44(plStack_d0._4_4_,0x16);
    plStack_c0 = plStack_158;
    plStack_b8 = plStack_150;
    plStack_b0 = plStack_148;
    plStack_158 = (long *)0x0;
    plStack_150 = (long *)0x0;
    plStack_148 = (long *)0x0;
    lStack_a8 = 0;
    puStack_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    plStack_128 = (long *)0x0;
    puStack_120 = (undefined *)0x0;
    pbStack_118 = (byte *)0x0;
    puStack_c8 = puVar10;
    pplStack_88 = &plStack_128;
    func_0x09ba8cb0(&pplStack_88);
    plVar14 = plStack_158;
    plVar9 = plStack_150;
    if (plStack_158 != (long *)0x0) {
      for (; plVar14 != plVar9; plVar9 = plVar9 + -10) {
        if (((char)plVar9[-1] == '\x01') && ((*(byte *)(plVar9 + -6) & 1) != 0)) {
          func_0x0412a280(plVar9[-4],plVar9[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_150 = plVar14;
      func_0x0412a280(plStack_158,(long)plStack_148 - (long)plStack_158);
    }
    func_0x0ee37ef0(plVar8,&plStack_d0);
    plStack_128 = &lStack_a8;
    func_0x09ba8cb0(&plStack_128);
    plVar3 = plStack_c0;
    pbVar15 = (byte *)plStack_c0;
    plVar9 = plStack_b8;
    plVar14 = plStack_b0;
    if (plStack_c0 == (long *)0x0) goto LAB_09b9f811;
    for (; plStack_c0 = (long *)pbVar15, plStack_b0 = plVar14, plVar3 != plVar9;
        plVar9 = plVar9 + -10) {
      if (((char)plVar9[-1] == '\x01') && ((*(byte *)(plVar9 + -6) & 1) != 0)) {
        func_0x0412a280(plVar9[-4],plVar9[-6] & 0xfffffffffffffffe);
      }
      pbVar15 = (byte *)plStack_c0;
      plVar14 = plStack_b0;
    }
    plStack_b8 = plVar3;
  }
  else {
    if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
      plVar8 = param_1;
    }
    uStack_48 = (ulong)auStack_170 >> 1 & 0x7f;
    plVar9 = (long *)(auStack_170 + 1);
    plStack_50 = plVar9;
    if (((ulong)auStack_170 & 1) != 0) {
      uStack_48 = uStack_168;
      plStack_50 = plStack_160;
    }
    cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&plStack_50);
    if (cVar5 != '\0') {
      if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        FUN_0410844d(&DAT_0f7b8fb8);
        plVar8 = param_1;
      }
      uStack_58 = (ulong)auStack_170 >> 1 & 0x7f;
      plStack_60 = plVar9;
      if (((ulong)auStack_170 & 1) != 0) {
        uStack_58 = uStack_168;
        plStack_60 = plStack_160;
      }
      (**(code **)(_DAT_0f7b8f98 + 0x20))(&plStack_128,&DAT_0f7b8f98,&plStack_60);
      plStack_d0 = (long *)0x4fc0d7b9a17d8c7;
      puStack_c8 = &UNK_0140f690;
      plStack_c0 = (long *)0x1;
      plStack_b8 = (long *)CONCAT44(plStack_b8._4_4_,0x6a);
      if (bStack_e8 == 0) {
        plStack_158 = (long *)0x0;
        plStack_150 = (long *)0x0;
        plStack_148 = (long *)0x0;
        func_0x0eedeb80(2,0x2d,&plStack_128,&plStack_158,&plStack_d0);
        if (((ulong)plStack_158 & 1) != 0) {
          func_0x0412a280(plStack_148,(ulong)plStack_158 & 0xfffffffffffffffe);
        }
      }
      if ((bStack_e8 & 1) == 0) {
        plStack_d0 = &lStack_100;
        func_0x09ba8cb0(&plStack_d0);
        pbVar15 = pbStack_118;
        plVar3 = plStack_110;
        if (pbStack_118 != (byte *)0x0) {
          for (; pbVar15 != (byte *)plVar3; plVar3 = plVar3 + -10) {
            if (((char)plVar3[-1] == '\x01') && ((*(byte *)(plVar3 + -6) & 1) != 0)) {
              func_0x0412a280(plVar3[-4],plVar3[-6] & 0xfffffffffffffffe);
            }
          }
          plStack_110 = (long *)pbVar15;
          func_0x0412a280(pbStack_118,(long)plStack_108 - (long)pbStack_118);
        }
      }
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
      plVar8 = param_1;
    }
    uStack_68 = (ulong)auStack_140 >> 1 & 0x7f;
    plStack_70 = plVar14;
    if (((ulong)auStack_140 & 1) != 0) {
      uStack_68 = uStack_138;
      plStack_70 = plStack_130;
    }
    uStack_78 = (ulong)auStack_170 >> 1 & 0x7f;
    plStack_80 = plVar9;
    if (((ulong)auStack_170 & 1) != 0) {
      uStack_78 = uStack_168;
      plStack_80 = plStack_160;
    }
    (**(code **)(_DAT_0f7b8f98 + 0x48))(&plStack_d0,&DAT_0f7b8f98,&plStack_70,&plStack_80);
    bStack_e8 = bStack_90;
    if (bStack_90 == 1) {
      *(undefined1 *)(plVar8 + 8) = 1;
      goto LAB_09b9f811;
    }
    plStack_128 = plStack_d0;
    puStack_120 = puStack_c8;
    pbStack_118 = (byte *)plStack_c0;
    plStack_110 = plStack_b8;
    plStack_108 = plStack_b0;
    plStack_c0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    plStack_b0 = (long *)0x0;
    plStack_158 = &lStack_a8;
    lStack_100 = lStack_a8;
    puStack_f8 = puStack_a0;
    uStack_f0 = uStack_98;
    lStack_a8 = 0;
    puStack_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    func_0x09ba8cb0(&plStack_158);
    plVar14 = plStack_c0;
    plVar9 = plStack_b8;
    if (plStack_c0 != (long *)0x0) {
      for (; plVar14 != plVar9; plVar9 = plVar9 + -10) {
        if (((char)plVar9[-1] == '\x01') && ((*(byte *)(plVar9 + -6) & 1) != 0)) {
          func_0x0412a280(plVar9[-4],plVar9[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_b8 = plVar14;
      func_0x0412a280(plStack_c0,(long)plStack_b0 - (long)plStack_c0);
    }
    func_0x09b9fa80(&plStack_128);
    func_0x0ee37ef0(plVar8,&plStack_128);
    if ((bStack_e8 & 1) != 0) goto LAB_09b9f811;
    plStack_d0 = &lStack_100;
    func_0x09ba8cb0(&plStack_d0);
    pbVar4 = pbStack_118;
    pbVar15 = pbStack_118;
    plVar9 = plStack_110;
    plVar14 = plStack_108;
    if (pbStack_118 == (byte *)0x0) goto LAB_09b9f811;
    for (; pbStack_118 = pbVar15, plStack_108 = plVar14, pbVar4 != (byte *)plVar9;
        plVar9 = plVar9 + -10) {
      if (((char)plVar9[-1] == '\x01') && ((*(byte *)(plVar9 + -6) & 1) != 0)) {
        func_0x0412a280(plVar9[-4],plVar9[-6] & 0xfffffffffffffffe);
      }
      pbVar15 = pbStack_118;
      plVar14 = plStack_108;
    }
    plStack_110 = (long *)pbVar4;
  }
  func_0x0412a280(pbVar15,(long)plVar14 - (long)pbVar15);
LAB_09b9f811:
  if (((ulong)auStack_140 & 1) != 0) {
    func_0x0412a280(plStack_130,(ulong)auStack_140 & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_170 & 1) != 0) {
    func_0x0412a280(plStack_160,(ulong)auStack_170 & 0xfffffffffffffffe);
  }
  return plVar8;
}



/* ---- referenced strings ----
 * 0x14513bb  No backup file to copy!
 */
