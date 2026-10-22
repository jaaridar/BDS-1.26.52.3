/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9dd3720 (ELF vaddr 0x9cd3720)
 * Label: caller-of-callee
 * Body:  [[09dd3720, 09dd4955]]
 * Ghidra: FUN_09dd3720
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09dd3720(long param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined8 uStack_218;
  long *plStack_210;
  undefined4 *puStack_208;
  undefined4 uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  byte bStack_198;
  ulong uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  byte bStack_150;
  undefined7 uStack_14f;
  long *plStack_148;
  char *pcStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  ulong uStack_118;
  int iStack_110;
  undefined4 uStack_10c;
  char *pcStack_108;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined4 uStack_e4;
  byte bStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  long *plStack_80;
  char *pcStack_78;
  long *plStack_70;
  long alStack_68 [4];
  long *plStack_48;
  
  cVar7 = (**(code **)(*param_2 + 0xd0))(param_2);
  if ((cVar7 == '\a') && (*(char *)(_DAT_0f64ab28 + 0x90) != '\0')) {
    plVar9 = (long *)&DAT_0f6b3a90;
    iVar8 = *(int *)(param_1 + 0x20);
  }
  else {
    lVar16 = func_0x09e0faa0(param_2);
    if (lVar16 == 0) {
      uStack_1d8 = (char *)0x0;
      plStack_1d0 = (long *)0x0;
      plStack_1c8 = (long *)0x0;
      if (*param_3 == 0) {
        return;
      }
      func_0x09e22e10(param_3,&DAT_011ec01f,0x1a,&uStack_1d8,1);
      return;
    }
    plVar9 = (long *)func_0x0b3cf240(lVar16);
    iVar8 = *(int *)(param_1 + 0x20);
  }
  if (iVar8 != 1) {
    uStack_1d8 = (char *)0x0;
    plStack_1d0 = (long *)0x0;
    plStack_1c8 = (long *)0x0;
    if (*param_3 == 0) {
      return;
    }
    func_0x09e22e10(param_3,&UNK_011ddd57,0x29,&uStack_1d8,1);
    return;
  }
  lVar16 = *(long *)(_DAT_0f64ab28 + 0xc0);
  if ((((lVar16 == 0) || (*(char *)(lVar16 + 0x28) != '\x01')) ||
      (*(char **)(lVar16 + 0x30) == (char *)0x0)) ||
     ((**(char **)(lVar16 + 0x30) != '\x01' ||
      (plVar1 = *(long **)(lVar16 + 0x40), plVar1 == (long *)0x0)))) {
LAB_09dd3882:
    uStack_1d8 = (char *)0x0;
    plStack_1d0 = (long *)0x0;
    plStack_1c8 = (long *)0x0;
    if (*param_3 != 0) {
      func_0x09e22e10(param_3,&DAT_011ec01f,0x1a,&uStack_1d8,1);
    }
    return;
  }
  lVar16 = *plVar9;
  iVar8 = *(int *)(param_1 + 0x24);
  cVar7 = (**(code **)(*plVar1 + 0x550))(plVar1);
  if (cVar7 == '\0') goto LAB_09dd3882;
  lStack_128 = _DAT_01d3f2a0;
  uStack_138 = _DAT_01d3f290;
  uStack_134 = _UNK_01d3f294;
  uStack_130 = _UNK_01d3f298;
  uStack_12c = _UNK_01d3f29c;
  if (iVar8 == 3) {
    lStack_128 = _DAT_01d3f2d0;
    uStack_138 = _DAT_01d3f2c0;
    uStack_134 = _UNK_01d3f2c4;
    uStack_130 = _UNK_01d3f2c8;
    uStack_12c = _UNK_01d3f2cc;
    uVar17 = 1;
  }
  else if (iVar8 == 2) {
    uVar17 = 0;
  }
  else {
    if (iVar8 != 1) {
      uStack_1d8 = (char *)0x0;
      plStack_1d0 = (long *)0x0;
      plStack_1c8 = (long *)0x0;
      if (*param_3 != 0) {
        func_0x09e22e10(param_3,&UNK_012fb247,0x2a,&uStack_1d8,1);
      }
      goto LAB_09dd463a;
    }
    lStack_128 = _DAT_01d3f2b8;
    uStack_138 = _DAT_01d3f2a8;
    uStack_134 = _UNK_01d3f2ac;
    uStack_130 = _UNK_01d3f2b0;
    uStack_12c = _UNK_01d3f2b4;
    uVar17 = 2;
  }
  (**(code **)(*plVar1 + 0x5a8))(plVar1);
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar9 = _DAT_0f5523a0;
  pcVar10 = _DAT_0f552398;
  lStack_f0 = lVar16;
  if ((_DAT_0f552398 == (char *)0x0) || (*_DAT_0f552398 != '\x01')) {
    uStack_118 = 0;
    iStack_110 = (uint)iStack_110._1_3_ << 8;
    pcStack_108 = (char *)0x0;
    plStack_100 = (long *)0x0;
    plStack_f8 = (long *)0x0;
    func_0x0eee02f0(0xf5522b8);
    plVar9 = (long *)0x0;
    plVar14 = (long *)0x0;
    pcVar10 = (char *)0x0;
  }
  else {
    if (_DAT_0f5523a0 != (long *)0x0) {
      LOCK();
      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
      UNLOCK();
    }
    uStack_118 = 0xf5522b8;
    iStack_110 = CONCAT31(iStack_110._1_3_,1);
    pcStack_108 = pcVar10;
    plStack_100 = plVar9;
    plStack_f8 = _DAT_0f5523a8;
    plVar14 = _DAT_0f5523a8;
  }
  if (*(char *)(_DAT_0f64ab28 + 0x90) == '\x01') {
    lVar16 = 0x110;
    if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\0')) {
      cVar7 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871);
      lVar16 = 0x110;
LAB_09dd3a7d:
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
  }
  else {
    lVar16 = 0x778;
    if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\0')) {
      cVar7 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871);
      lVar16 = 0x778;
      goto LAB_09dd3a7d;
    }
  }
  (**(code **)(*plVar14 + lVar16))(&uStack_218,plVar14);
  plStack_1d0 = (long *)(uStack_218 >> 1 & 0x7f);
  uStack_1d8 = (char *)((long)&uStack_218 + 1U);
  if ((uStack_218 & 1) != 0) {
    plStack_1d0 = plStack_210;
    uStack_1d8 = (char *)puStack_208;
  }
  plStack_1c8 = (long *)&UNK_01367cd8;
  plStack_1c0 = (long *)0xe;
  func_0x048ad670(&bStack_150,&uStack_1d8,2,0x2f);
  if ((uStack_218 & 1) != 0) {
    func_0x0412a280(puStack_208,uStack_218 & 0xfffffffffffffffe);
  }
  uStack_e4 = uVar17;
  if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  plStack_70 = (long *)(ulong)(bStack_150 >> 1);
  pcStack_78 = (char *)&uStack_14f;
  if ((bStack_150 & 1) != 0) {
    plStack_70 = plStack_148;
    pcStack_78 = pcStack_140;
  }
  cVar7 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&pcStack_78);
  if (cVar7 == '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    plStack_80 = (long *)(ulong)(bStack_150 >> 1);
    pcStack_88 = (char *)&uStack_14f;
    if ((bStack_150 & 1) != 0) {
      plStack_80 = plStack_148;
      pcStack_88 = pcStack_140;
    }
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_1d8,&DAT_0f7b8f98,&pcStack_88);
    uStack_218 = 0x923ea5defed00911;
    plStack_210 = (long *)&UNK_0140f690;
    puStack_208 = (undefined4 *)0x1;
    uStack_200 = 0xa7;
    if (bStack_198 == 0) {
      func_0x0eedea30(&uStack_1f8);
      FUN_0eedeb80(2,0x2d,&uStack_1d8,&uStack_1f8,&uStack_218);
      if ((uStack_1f8 & 1) != 0) {
        func_0x0412a280(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
      }
    }
    lVar16 = lStack_1b0;
    if ((bStack_198 & 1) != 0) goto LAB_09dd3c73;
    if (lStack_1b0 != 0) {
      while (lVar16 != lStack_1a8) {
        func_0x048b3e80(lStack_1a8 + -0x40);
        lStack_1a8 = lStack_1a8 + -0x40;
      }
      lStack_1a8 = lVar16;
      func_0x0412a280(lStack_1b0,lStack_1a0 - lStack_1b0);
    }
    plVar5 = plStack_1c8;
    plVar14 = plStack_1c0;
    if (plStack_1c8 != (long *)0x0) {
      for (; plVar5 != plVar14; plVar14 = plVar14 + -10) {
        if (((char)plVar14[-1] == '\x01') && ((*(byte *)(plVar14 + -6) & 1) != 0)) {
          func_0x0412a280(plVar14[-4],plVar14[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_1c0 = plVar5;
      func_0x0412a280(plStack_1c8,lStack_1b8 - (long)plStack_1c8);
    }
    puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar15 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar2 = _UNK_012483e1;
    uStack_218 = 0x21;
    plStack_210 = (long *)0x1e;
    *(ulong *)((long)puVar15 + 0xe) = CONCAT62(_UNK_012483db,_DAT_012483d9);
    *(undefined8 *)((long)puVar15 + 0x16) = uVar2;
    uVar4 = _UNK_012483d3;
    uVar3 = _UNK_012483cf;
    uVar17 = CONCAT22(_DAT_012483d9,_UNK_012483d7);
    *puVar15 = _DAT_012483cb;
    puVar15[1] = uVar3;
    puVar15[2] = uVar4;
    puVar15[3] = uVar17;
    *(undefined1 *)((long)puVar15 + 0x1e) = 0;
    puStack_208 = puVar15;
    puStack_1e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1e8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    lVar16 = lStack_f0;
    uVar2 = _UNK_011ec031;
    uStack_1f8 = 0x21;
    uStack_1f0 = 0x1a;
    *(ulong *)((long)puStack_1e8 + 10) = CONCAT26(_UNK_011ec02f,_DAT_011ec029);
    *(undefined8 *)((long)puStack_1e8 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_011ec029,_UNK_011ec027);
    *puStack_1e8 = _DAT_011ec01f;
    puStack_1e8[1] = uVar2;
    *(undefined1 *)((long)puStack_1e8 + 0x1a) = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    plStack_1d0 = (long *)0x0;
    plStack_1c8 = (long *)0x0;
    uStack_1d8 = (char *)(ulong)CONCAT16(DAT_01c026f3,
                                         CONCAT24(_DAT_01c026f1,
                                                  CONCAT13(DAT_01c049d3,CONCAT21(_DAT_01c049d1,0xc))
                                                 ));
    func_0x09dd5120(lStack_f0,plVar1,&uStack_1d8,&uStack_218,&uStack_1f8,&uStack_168);
    uVar6 = uStack_168;
    uVar13 = uStack_160;
    if (uStack_168 != 0) {
      for (; uVar6 != uVar13; uVar13 = uVar13 - 0x18) {
        if ((*(byte *)(uVar13 - 0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(uVar13 - 8),*(ulong *)(uVar13 - 0x18) & 0xfffffffffffffffe
                         );
        }
      }
      uStack_160 = uVar6;
      func_0x0412a280(uStack_168,uStack_158 - uStack_168);
      lVar16 = lStack_f0;
    }
    if ((uStack_1f8 & 1) != 0) {
      func_0x0412a280(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
    }
    if ((uStack_218 & 1) != 0) {
      func_0x0412a280(puStack_208,uStack_218 & 0xfffffffffffffffe);
    }
    func_0x09dd4d30(&bStack_150);
    uStack_188 = 0;
    uStack_180 = 0;
    lStack_178 = 0;
  }
  else {
LAB_09dd3c73:
    lVar11 = (**(code **)(*plVar1 + 0x568))(plVar1);
    uStack_90 = func_0x0eee3790(0);
    func_0x0b699120(&bStack_e0,&uStack_90);
    bVar18 = (*(byte *)(lVar11 + 0x278) & 1) != 0;
    lVar16 = lVar11 + 0x279;
    if (bVar18) {
      lVar16 = *(long *)(lVar11 + 0x288);
    }
    uVar13 = (ulong)(*(byte *)(lVar11 + 0x278) >> 1);
    if (bVar18) {
      uVar13 = *(ulong *)(lVar11 + 0x280);
    }
    puVar12 = (ulong *)func_0x0412f0e0(&bStack_e0,0,lVar16,uVar13);
    uStack_158 = puVar12[2];
    uStack_168 = *puVar12;
    uStack_160 = puVar12[1];
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12 = (ulong *)func_0x0412f8c0(&uStack_168,&UNK_01254f0f,1);
    lVar16 = lStack_f0;
    puStack_1e8 = (undefined8 *)puVar12[2];
    uStack_1f8 = *puVar12;
    uStack_1f0 = puVar12[1];
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    bVar18 = (uStack_138 & 1) != 0;
    lVar11 = (long)&uStack_138 + 1;
    if (bVar18) {
      lVar11 = lStack_128;
    }
    uVar13 = (ulong)((byte)uStack_138 >> 1);
    if (bVar18) {
      uVar13 = CONCAT44(uStack_12c,uStack_130);
    }
    puVar12 = (ulong *)func_0x0412f8c0(&uStack_1f8,lVar11,uVar13);
    puStack_208 = (undefined4 *)puVar12[2];
    uStack_218 = *puVar12;
    plStack_210 = (long *)puVar12[1];
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    plStack_1d0 = (long *)(ulong)(bStack_150 >> 1);
    uStack_1d8 = (char *)&uStack_14f;
    if ((bStack_150 & 1) != 0) {
      plStack_1d0 = plStack_148;
      uStack_1d8 = pcStack_140;
    }
    plStack_1c0 = (long *)(uStack_218 >> 1 & 0x7f);
    plStack_1c8 = (long *)((long)&uStack_218 + 1U);
    if ((uStack_218 & 1) != 0) {
      plStack_1c0 = plStack_210;
      plStack_1c8 = (long *)puStack_208;
    }
    func_0x048ad670(&uStack_188,&uStack_1d8,2,0x2f);
    if ((uStack_218 & 1) != 0) {
      func_0x0412a280(puStack_208,uStack_218 & 0xfffffffffffffffe);
    }
    if ((uStack_1f8 & 1) != 0) {
      func_0x0412a280(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
    }
    if ((uStack_168 & 1) != 0) {
      func_0x0412a280(uStack_158,uStack_168 & 0xfffffffffffffffe);
    }
    if ((bStack_e0 & 1) != 0) {
      func_0x0412a280(uStack_d0,CONCAT71(uStack_df,bStack_e0) & 0xfffffffffffffffe);
    }
  }
  if ((bStack_150 & 1) != 0) {
    func_0x0412a280(pcStack_140,CONCAT71(uStack_14f,bStack_150) & 0xfffffffffffffffe);
  }
  pcStack_108 = (char *)0x0;
  plStack_100 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar14 = plVar9 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    plVar9 = plStack_100;
    plStack_f8 = (long *)0x0;
    if (plStack_100 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_100 + 1;
      lVar11 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        func_0x0412c2d0(plVar9);
      }
    }
  }
  if ((char)iStack_110 == '\x01') {
    func_0x0eee02f0(uStack_118);
  }
  uVar13 = uStack_180;
  if ((uStack_188 & 1) == 0) {
    uVar13 = uStack_188 >> 1 & 0x7f;
  }
  if (uVar13 == 0) {
    uStack_1d8 = (char *)0x0;
    plStack_1d0 = (long *)0x0;
    plStack_1c8 = (long *)0x0;
    if (*param_3 != 0) {
      func_0x09e22e10(param_3,&DAT_011ec01f,0x1a,&uStack_1d8,1);
    }
  }
  else {
    (**(code **)(*(long *)(_DAT_0f64ab28 + 0x1b0) + 0x10))(&uStack_1d8,_DAT_0f64ab28 + 0x1b0);
    if ((uStack_1d8 == (char *)0x0) &&
       (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012c832b),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*uStack_1d8 == '\0') &&
       (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012c832b),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar9 = plStack_1c8;
    if ((uStack_188 & 1) == 0) {
      pcStack_108 = (char *)lStack_178;
      uStack_118 = uStack_188;
      iStack_110 = (int)uStack_180;
      uStack_10c = uStack_180._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_118,lStack_178,uStack_180);
    }
    plStack_b8 = plVar1;
    lStack_b0 = lVar16;
    if (((byte)uStack_188 & 1) == 0) {
      lStack_98 = lStack_178;
      uStack_a8 = uStack_188;
      uStack_a0 = uStack_180;
    }
    else {
      func_0x0412e5e0(&uStack_a8,lStack_178,uStack_180);
    }
    plStack_48 = (long *)0x0;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *plVar14 = (long)&UNK_0f1e43e0;
    plVar14[1] = (long)plStack_b8;
    plVar14[2] = lStack_b0;
    plVar14[5] = lStack_98;
    plVar14[3] = uStack_a8;
    plVar14[4] = uStack_a0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    plStack_48 = plVar14;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(0x280,0);
    }
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&UNK_0f1e4460;
    func_0x0eee2dd0(plVar14 + 6,0,0x218);
    plVar14[4] = (long)(plVar14 + 4);
    plVar14[5] = (long)(plVar14 + 4);
    plVar14[7] = 0;
    plVar14[8] = 0;
    plVar14[9] = 0;
    plVar14[10] = 0;
    plVar14[0xb] = 0;
    plVar14[0xc] = 0;
    plVar14[3] = (long)&UNK_0f1e44b0;
    plVar14[0xd] = (long)&UNK_0f1e44e0;
    plVar14[0xf] = (long)(plVar14 + 0xf);
    plVar14[0x10] = (long)(plVar14 + 0xf);
    plVar14[0x12] = 0;
    plVar14[0x13] = 0;
    plVar14[0x14] = 0;
    plVar14[0x15] = 0;
    plVar14[0x16] = 0;
    plVar14[0x17] = 0;
    plVar14[0xe] = (long)&UNK_0f1e45f0;
    plVar14[0x18] = (long)&UNK_0f1e4620;
    plVar14[0x1a] = (long)(plVar14 + 0x1a);
    plVar14[0x1b] = (long)(plVar14 + 0x1a);
    plVar14[0x1d] = 0;
    plVar14[0x1e] = 0;
    plVar14[0x1f] = 0;
    plVar14[0x20] = 0;
    plVar14[0x21] = 0;
    plVar14[0x22] = 0;
    plVar14[0x19] = (long)&UNK_0f1e4730;
    plVar14[0x23] = (long)&UNK_0f1e4760;
    plVar14[0x25] = (long)(plVar14 + 0x25);
    plVar14[0x26] = (long)(plVar14 + 0x25);
    plVar14[0x28] = 0;
    plVar14[0x29] = 0;
    plVar14[0x2a] = 0;
    plVar14[0x2b] = 0;
    plVar14[0x2c] = 0;
    plVar14[0x2d] = 0;
    plVar14[0x24] = (long)&UNK_0f1e45f0;
    plVar14[0x2e] = (long)&UNK_0f1e4620;
    plVar14[0x30] = (long)(plVar14 + 0x30);
    plVar14[0x31] = (long)(plVar14 + 0x30);
    plVar14[0x33] = 0;
    plVar14[0x34] = 0;
    plVar14[0x35] = 0;
    plVar14[0x36] = 0;
    plVar14[0x37] = 0;
    plVar14[0x38] = 0;
    plVar14[0x2f] = (long)&UNK_0f1e4730;
    plVar14[0x39] = (long)&UNK_0f1e4760;
    plVar14[0x3b] = (long)(plVar14 + 0x3b);
    plVar14[0x3c] = (long)(plVar14 + 0x3b);
    plVar14[0x42] = 0;
    plVar14[0x43] = 0;
    plVar14[0x40] = 0;
    plVar14[0x41] = 0;
    plVar14[0x3e] = 0;
    plVar14[0x3f] = 0;
    plVar14[0x3a] = (long)&UNK_0f1e45f0;
    plVar14[0x44] = (long)&UNK_0f1e4620;
    plVar14[0x46] = (long)(plVar14 + 0x46);
    plVar14[0x47] = (long)(plVar14 + 0x46);
    plVar14[0x4d] = 0;
    plVar14[0x4e] = 0;
    plVar14[0x4b] = 0;
    plVar14[0x4c] = 0;
    plVar14[0x49] = 0;
    plVar14[0x4a] = 0;
    plVar14[0x45] = (long)&UNK_0f1e4870;
    plVar14[0x4f] = (long)&UNK_0f1e48a0;
    uStack_218 = 0;
    plStack_210 = (long *)0x0;
    plStack_c8 = plVar14 + 3;
    plStack_c0 = plVar14;
    func_0x0c976460(plVar9,plVar1,0,uStack_e4,&uStack_118,alStack_68,&plStack_c8);
    plVar9 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        func_0x0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_210;
    if (plStack_210 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_210 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_210 + 0x10))(plStack_210);
        func_0x0412c2d0(plVar9);
      }
    }
    if (plStack_48 == alStack_68) {
      lVar16 = 0x20;
LAB_09dd4525:
      (**(code **)(*plStack_48 + lVar16))();
    }
    else {
      lVar16 = 0x28;
      if (plStack_48 != (long *)0x0) goto LAB_09dd4525;
    }
    if ((uStack_a8 & 1) != 0) {
      func_0x0412a280(lStack_98,uStack_a8 & 0xfffffffffffffffe);
    }
    if ((uStack_118 & 1) != 0) {
      func_0x0412a280(pcStack_108,uStack_118 & 0xfffffffffffffffe);
    }
    plVar9 = plStack_1d0;
    uStack_1d8 = (char *)0x0;
    plStack_1d0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
      }
      plVar9 = plStack_1d0;
      plStack_1c8 = (long *)0x0;
      if (plStack_1d0 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_1d0 + 1;
        lVar16 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
          func_0x0412c2d0(plVar9);
        }
      }
    }
    uStack_1d8 = (char *)0x0;
    plStack_1d0 = (long *)0x0;
    plStack_1c8 = (long *)0x0;
    param_3[10] = param_3[10] + 1;
    if ((*param_3 & 0xfffffffd) != 0) {
      func_0x09e22e10(param_3,&UNK_012483a7,0x23,&uStack_1d8,0);
    }
  }
  if ((uStack_188 & 1) != 0) {
    func_0x0412a280(lStack_178,uStack_188 & 0xfffffffffffffffe);
  }
LAB_09dd463a:
  if ((uStack_138 & 1) == 0) {
    return;
  }
  func_0x0412a280(lStack_128,CONCAT44(uStack_134,uStack_138) & 0xfffffffffffffffe);
  return;
}



/* ---- referenced strings ----
 * 0x11ec01f  commands.generic.exception
 * 0x11ec029  eneric.exception
 * 0x12483cb  commands.editor.project.export
 * 0x12483d9  r.project.export
 */
