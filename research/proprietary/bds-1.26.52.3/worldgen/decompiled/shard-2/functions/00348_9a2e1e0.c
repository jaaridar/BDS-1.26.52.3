/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b2e1e0 (ELF vaddr 0x9a2e1e0)
 * Label: caller-of-callee
 * Body:  [[09b2e1e0, 09b2edf6] [09b2ee00, 09b2efee] [09b2f233, 09b2f262]]
 * Ghidra: FUN_09b2e1e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_09b2e1e0(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *unaff_R13;
  ulong uVar18;
  bool bVar19;
  undefined8 *puStack_178;
  undefined1 auStack_170 [4];
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte *pbStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined *puStack_128;
  long lStack_120;
  undefined **ppuStack_108;
  long *plStack_f0;
  long *plStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  char cStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined **ppuStack_48;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plStack_98 = param_1;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[6] = 0;
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &UNK_0f1d3cd0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *puVar5 = puVar6 + 3;
  puVar5[1] = puVar6;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 6) = 0x3f800000;
  lVar10 = *param_1;
  *param_1 = (long)puVar5;
  if (lVar10 != 0) {
    func_0x09b2dc60(lVar10 + 0x10);
    plVar9 = *(long **)(lVar10 + 8);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar16 = plVar9 + 1;
      lVar15 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0412a280(lVar10,0x38);
  }
  if ((param_2[6] == 0) &&
     (cVar3 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b66ec),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)param_2[6] == '\0') &&
     (cVar3 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b66ec),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar10 = param_2[8];
  bVar19 = (*(byte *)(lVar10 + 0x90) & 1) != 0;
  uStack_158 = (undefined **)(lVar10 + 0x91);
  if (bVar19) {
    uStack_158 = (undefined **)*(long **)(lVar10 + 0xa0);
  }
  uStack_150 = (long *)(ulong)(*(byte *)(lVar10 + 0x90) >> 1);
  if (bVar19) {
    uStack_150 = *(long **)(lVar10 + 0x98);
  }
  pbStack_148 = &UNK_01a195c1;
  plStack_140 = (long *)0xf;
  func_0x048ad670(auStack_170,&uStack_158,2,0x2f);
  puVar5 = param_2 + 1;
  plStack_f0 = (long *)*puVar5;
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar9 = _DAT_0f5523a0;
  pbVar2 = _DAT_0f552398;
  puStack_80 = puVar5;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_09b2efcf;
  bVar12 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar12 = *pbVar2;
  }
  plVar16 = _DAT_0f5523a8;
  uStack_158 = (undefined **)0xf5522b8;
  uStack_150 = (long *)CONCAT71(uStack_150._1_7_,1);
  pbStack_148 = pbVar2;
  plStack_140 = plVar9;
  plStack_138 = _DAT_0f5523a8;
  puStack_88 = param_2;
  if (((bVar12 & 1) == 0) &&
     (cVar3 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar3 = (**(code **)(*plVar16 + 0x600))(plVar16);
  pbStack_148 = (byte *)0x0;
  plStack_140 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
LAB_09b2e520:
  }
  else {
    LOCK();
    plVar16 = plVar9 + 1;
    lVar10 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar10 != 0) {
      plStack_138 = (long *)0x0;
      goto LAB_09b2e520;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0412c2d0(plVar9);
    plVar9 = plStack_140;
    plStack_138 = (long *)0x0;
    if (plStack_140 == (long *)0x0) goto LAB_09b2e520;
    plStack_138 = (long *)0x0;
    LOCK();
    plVar16 = plStack_140 + 1;
    lVar10 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar10 != 0) goto LAB_09b2e520;
    (**(code **)(*plStack_140 + 0x10))(plStack_140);
    FUN_0412c2d0(plVar9);
  }
  if ((char)uStack_150 == '\x01') {
    func_0x0eee02f0(uStack_158);
  }
  if (cVar3 == '\0') {
    puStack_178 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)0x0;
    if (((uint)auStack_170 & 1) == 0) goto LAB_09b2e586;
LAB_09b2e655:
    func_0x0412e5e0(&uStack_158,plStack_160,CONCAT44(uStack_164,uStack_168));
  }
  else {
    func_0x09ae18f0(&plStack_e8,&UNK_09ae1b70);
    if (((ulong)plStack_e8 & 1) == 0) {
      pbStack_148 = (byte *)plStack_d8;
      uStack_158 = (undefined **)plStack_e8;
      uStack_150 = (long *)CONCAT44(uStack_dc,uStack_e0);
    }
    else {
      func_0x0412e5e0(&uStack_158,plStack_d8,CONCAT44(uStack_dc,uStack_e0));
    }
    uVar7 = (**(code **)(*plStack_f0 + 0x28))(plStack_f0,&uStack_158,8,8,0);
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar5 = uVar7;
    if (((ulong)uStack_158 & 1) != 0) {
      func_0x0412a280(pbStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
    if (((ulong)plStack_e8 & 1) != 0) {
      func_0x0412a280(plStack_d8,(ulong)plStack_e8 & 0xfffffffffffffffe);
    }
    puStack_178 = puVar5 + 1;
    if (((uint)auStack_170 & 1) != 0) goto LAB_09b2e655;
LAB_09b2e586:
    pbStack_148 = (byte *)plStack_160;
    uStack_158 = (undefined **)CONCAT44(uStack_16c,auStack_170);
    uStack_150 = (long *)CONCAT44(uStack_164,uStack_168);
  }
  uVar7 = (**(code **)(*plStack_f0 + 0x28))(plStack_f0,&uStack_158,8,6,0);
  uVar17 = (long)puStack_178 - (long)puVar5;
  uVar8 = ((long)uVar17 >> 3) + 1;
  if (uVar8 >> 0x3d == 0) {
    uVar18 = uVar17 >> 2;
    if (uVar17 >> 2 <= uVar8) {
      uVar18 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar17) {
      uVar18 = 0x1fffffffffffffff;
    }
    if (0x1fffffffffffffff < uVar18) goto LAB_09b2ef5b;
    lVar10 = uVar18 * 8;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(lVar10,0);
    }
    *(undefined8 *)((long)plVar9 + uVar17) = uVar7;
    func_0x0eee2f00(plVar9,puVar5,uVar17);
    if (puVar5 != (undefined8 *)0x0) {
      func_0x0412a280(puVar5,uVar17);
    }
    if (((ulong)uStack_158 & 1) != 0) {
      func_0x0412a280(pbStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
    plVar16 = plVar9 + uVar18;
    func_0x09ae18f0(&plStack_e8,&UNK_09ae1c20);
    lStack_a0 = lVar10;
    if (((ulong)plStack_e8 & 1) == 0) {
      pbStack_148 = (byte *)plStack_d8;
      uStack_158 = (undefined **)plStack_e8;
      uStack_150 = (long *)CONCAT44(uStack_dc,uStack_e0);
    }
    else {
      func_0x0412e5e0(&uStack_158,plStack_d8,CONCAT44(uStack_dc,uStack_e0));
    }
    uVar7 = (**(code **)(*plStack_f0 + 0x28))(plStack_f0,&uStack_158,8,8,0);
    if (plVar16 <= (long *)((long)plVar9 + uVar17 + 8)) {
      lVar10 = uVar17 + 8;
      uVar8 = (lVar10 >> 3) + 1;
      if (uVar8 < 0x2000000000000000) {
        if (uVar8 < uVar18 * 2) {
          uVar8 = uVar18 * 2;
        }
        if (uVar18 == 0xfffffffffffffff) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 < 0x2000000000000000) {
          lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8 * 8);
          if (lVar15 == 0) {
            func_0x0eec74c0(uVar8 * 8,0);
          }
          *(undefined8 *)(lVar15 + lVar10) = uVar7;
          plVar13 = (long *)(lVar15 + lVar10 + (lVar10 >> 3) * -8);
          func_0x0eee2f00(plVar13,plVar9,lVar10);
          plVar14 = (long *)(lVar15 + lVar10 + 8);
          plVar16 = (long *)(lVar15 + uVar8 * 8);
          func_0x0412a280(plVar9,lStack_a0);
          plVar9 = plVar13;
          goto joined_r0x09b2e933;
        }
      }
      else {
        func_0x09b0fd20();
      }
      func_0x04882eb0();
LAB_09b2efc5:
      func_0x09b0fd20();
LAB_09b2efca:
      func_0x04882eb0();
LAB_09b2efcf:
      uVar7 = func_0x0eee02f0(0xf5522b8);
      func_0x041084d6(&DAT_0f7b8fb8);
      if (((uint)auStack_170 & 1) != 0) {
        func_0x0412a280(plStack_160,CONCAT44(uStack_16c,auStack_170) & 0xfffffffffffffffe);
      }
      func_0x09aed3d0(plStack_98);
      func_0x0eee2d70(uVar7);
      pcVar1 = (code *)swi(3);
      plVar9 = (long *)(*pcVar1)();
      return plVar9;
    }
    *(undefined8 *)((long)plVar9 + uVar17 + 8) = uVar7;
    plVar14 = (long *)((long)plVar9 + uVar17 + 0x10);
joined_r0x09b2e933:
    if (((ulong)uStack_158 & 1) != 0) {
      func_0x0412a280(pbStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
    if (((ulong)plStack_e8 & 1) != 0) {
      func_0x0412a280(plStack_d8,(ulong)plStack_e8 & 0xfffffffffffffffe);
    }
    lVar10 = (**(code **)(*plStack_f0 + 0x38))(plStack_f0,8);
    if (plVar16 <= plVar14) {
      lVar15 = (long)plVar14 - (long)plVar9;
      uVar8 = (lVar15 >> 3) + 1;
      if (0x1fffffffffffffff < uVar8) goto LAB_09b2efc5;
      uVar18 = (long)plVar16 - (long)plVar9;
      uVar17 = (long)uVar18 >> 2;
      if ((ulong)((long)uVar18 >> 2) <= uVar8) {
        uVar17 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar18) {
        uVar17 = 0x1fffffffffffffff;
      }
      if (uVar17 < 0x2000000000000000) {
        lStack_a0 = uVar17 * 8;
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
        if (lVar11 == 0) {
          func_0x0eec74c0(lStack_a0,0);
        }
        plVar14 = (long *)(lVar11 + lVar15);
        *(long *)(lVar11 + lVar15) = lVar10;
        plVar13 = plVar14 + -(lVar15 >> 3);
        func_0x0eee2f00(plVar13,plVar9,lVar15);
        plVar16 = (long *)(lVar11 + uVar17 * 8);
        func_0x0412a280(plVar9,uVar18);
        goto LAB_09b2e9f5;
      }
      goto LAB_09b2efca;
    }
    *plVar14 = lVar10;
    plVar13 = plVar9;
LAB_09b2e9f5:
    uStack_150 = plVar14 + 1;
    uStack_158 = (undefined **)plVar13;
    pbStack_148 = (byte *)plVar16;
    (**(code **)(*plStack_f0 + 0x58))(&plStack_e8,plStack_f0,&uStack_158);
    puVar5 = puStack_88;
    unaff_R13 = plStack_98;
    plVar16 = plStack_e8;
    plStack_e8 = (long *)0x0;
    plVar9 = (long *)plStack_98[4];
    plStack_98[4] = (long)plVar16;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
      plVar9 = plStack_e8;
      plStack_e8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if (uStack_158 != (undefined **)0x0) {
      uStack_150 = (long *)uStack_158;
      func_0x0412a280(uStack_158,(long)pbStack_148 - (long)uStack_158);
    }
    if (((uint)auStack_170 & 1) == 0) {
      pbStack_148 = (byte *)plStack_160;
      uStack_158 = (undefined **)CONCAT44(uStack_16c,auStack_170);
      uStack_150 = (long *)CONCAT44(uStack_164,uStack_168);
    }
    else {
      func_0x0412e5e0(&uStack_158,plStack_160,CONCAT44(uStack_164,uStack_168));
    }
    func_0x09b4d5a0(&uStack_158);
    if (((ulong)uStack_158 & 1) != 0) {
      func_0x0412a280(pbStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
    if (DAT_0f7b8fb8 == '\0') goto LAB_09b2ef60;
  }
  else {
    func_0x09b0fd20();
LAB_09b2ef5b:
    func_0x04882eb0();
LAB_09b2ef60:
    iVar4 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar4 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      puVar5 = puStack_88;
      unaff_R13 = plStack_98;
    }
  }
  bVar19 = ((uint)auStack_170 & 1) != 0;
  plStack_78 = (long *)(auStack_170 + 1);
  if (bVar19) {
    plStack_78 = plStack_160;
  }
  uStack_70 = (ulong)(auStack_170[0] >> 1);
  if (bVar19) {
    uStack_70 = CONCAT44(uStack_164,uStack_168);
  }
  (**(code **)(_DAT_0f7b8f98 + 0x80))(&plStack_e8,&DAT_0f7b8f98,&plStack_78);
  func_0x09b4b700(&lStack_90,unaff_R13[4],puVar5[2],puVar5 + 3);
  puStack_68 = &UNK_0f1d3d20;
  puStack_60 = puStack_80;
  uStack_158 = &puStack_68;
  plStack_58 = unaff_R13;
  ppuStack_48 = &puStack_68;
  (**(code **)(*(long *)unaff_R13[4] + 0x10))((long *)unaff_R13[4],&UNK_09b5b230,&uStack_158);
  if (ppuStack_48 == &puStack_68) {
    lVar10 = 0x20;
LAB_09b2ebd8:
    (**(code **)(*ppuStack_48 + lVar10))();
  }
  else {
    lVar10 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_09b2ebd8;
  }
  uStack_150 = (long *)*unaff_R13;
  uStack_158 = (undefined **)&UNK_0f1d3db0;
  puStack_128 = &UNK_0f1d3e40;
  plStack_138 = &uStack_158;
  lStack_120 = (long)uStack_150;
  ppuStack_108 = &puStack_128;
  lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (lVar10 == 0) {
    func_0x0eec74c0(0x60,0);
  }
  if (plStack_138 == (long *)0x0) {
    uVar7 = 0;
LAB_09b2ec51:
    *(undefined8 *)(lVar10 + 0x20) = uVar7;
  }
  else {
    if (plStack_138 != &uStack_158) {
      uVar7 = (**(code **)(*plStack_138 + 0x10))();
      goto LAB_09b2ec51;
    }
    *(long *)(lVar10 + 0x20) = lVar10;
    (**(code **)(*plStack_138 + 0x18))(plStack_138,lVar10);
  }
  if (ppuStack_108 == (undefined **)0x0) {
    *(undefined8 *)(lVar10 + 0x50) = 0;
  }
  else if (ppuStack_108 == &puStack_128) {
    *(long *)(lVar10 + 0x50) = lVar10 + 0x30;
    (**(code **)(*ppuStack_108 + 0x18))();
  }
  else {
    uVar7 = (**(code **)(*ppuStack_108 + 0x10))();
    *(undefined8 *)(lVar10 + 0x50) = uVar7;
  }
  plVar9 = (long *)unaff_R13[5];
  unaff_R13[5] = lVar10;
  if (plVar9 != (long *)0x0) {
    plVar16 = (long *)plVar9[10];
    if (plVar16 == plVar9 + 6) {
      lVar10 = 0x20;
LAB_09b2ece3:
      (**(code **)(*plVar16 + lVar10))();
      plVar16 = (long *)plVar9[4];
      if (plVar16 != plVar9) goto LAB_09b2ecd2;
LAB_09b2ecf2:
      lVar10 = 0x20;
LAB_09b2ecf7:
      (**(code **)(*plVar16 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (plVar16 != (long *)0x0) goto LAB_09b2ece3;
      plVar16 = (long *)plVar9[4];
      if (plVar16 == plVar9) goto LAB_09b2ecf2;
LAB_09b2ecd2:
      lVar10 = 0x28;
      if (plVar16 != (long *)0x0) goto LAB_09b2ecf7;
    }
    func_0x0412a280(plVar9,0x60);
  }
  if (ppuStack_108 == &puStack_128) {
    lVar10 = 0x20;
LAB_09b2ee2f:
    (**(code **)(*ppuStack_108 + lVar10))();
    if (plStack_138 != &uStack_158) goto LAB_09b2ed37;
LAB_09b2ee43:
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (ppuStack_108 != (undefined **)0x0) goto LAB_09b2ee2f;
    if (plStack_138 == &uStack_158) goto LAB_09b2ee43;
LAB_09b2ed37:
    lVar10 = 0x28;
    lVar15 = lStack_90;
    if (plStack_138 == (long *)0x0) goto joined_r0x09b2ee65;
  }
  (**(code **)(*plStack_138 + lVar10))();
  lVar15 = lStack_90;
joined_r0x09b2ee65:
  lStack_90 = 0;
  if (lVar15 != 0) {
    lStack_90 = 0;
    func_0x0d67d500(lVar15);
    func_0x0412a280(lVar15,0x40);
  }
  lVar10 = lStack_c0;
  if (cStack_a8 == '\0') {
    if (lStack_c0 != 0) {
      while (lVar10 != lStack_b8) {
        func_0x048b3e80(lStack_b8 + -0x40);
        lStack_b8 = lStack_b8 + -0x40;
      }
      lStack_b8 = lVar10;
      func_0x0412a280(lStack_c0,lStack_b0 - lStack_c0);
    }
    plVar16 = plStack_d8;
    plVar9 = plStack_d0;
    if (plStack_d8 != (long *)0x0) {
      for (; plVar16 != plVar9; plVar9 = plVar9 + -10) {
        if (((char)plVar9[-1] == '\x01') && ((*(byte *)(plVar9 + -6) & 1) != 0)) {
          func_0x0412a280(plVar9[-4],plVar9[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_d0 = plVar16;
      func_0x0412a280(plStack_d8,lStack_c8 - (long)plStack_d8);
    }
  }
  if (((uint)auStack_170 & 1) != 0) {
    func_0x0412a280(plStack_160,CONCAT44(uStack_16c,auStack_170) & 0xfffffffffffffffe);
  }
  return unaff_R13;
}


