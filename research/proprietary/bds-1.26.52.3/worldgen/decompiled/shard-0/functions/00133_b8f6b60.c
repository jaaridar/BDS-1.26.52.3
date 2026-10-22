/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb9f6b60 (ELF vaddr 0xb8f6b60)
 * Label: string:Editor::Services::EditorJigsawService
 * Body:  [[0b9f6b60, 0b9f9420] [0b9f9430, 0b9f96b6] [0b9f96c0, 0b9f9802] [0b9f9810, 0b9f9952] [0b9f9960, 0b9f9f91] [0b9fa11a, 0b9fa16a] [0b9fa528, 0b9fa539] [0b9fa654, 0b9fa66a]]
 * Ghidra: FUN_0b9f6b60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b9f6b60(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_RBX;
  long *unaff_R12;
  long *plVar16;
  long *plVar17;
  undefined8 unaff_R15;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined1 uStack_16b;
  undefined2 uStack_16a;
  undefined1 uStack_168;
  undefined5 uStack_167;
  undefined1 uStack_162;
  undefined1 uStack_161;
  code *pcStack_160;
  undefined4 uStack_158;
  undefined1 uStack_154;
  long *plStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  long *plStack_110;
  long lStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  long **pplStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  code *pcStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long **pplStack_78;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  lVar10 = param_2[0x1f];
  plStack_48 = param_2;
  if (lVar10 == 0) {
    func_0x04890760();
LAB_0b9f9d41:
    FUN_0eec74c0(0x140,0);
  }
  else {
    unaff_R12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
    unaff_RBX = param_1;
    unaff_R15 = param_3;
    if (unaff_R12 == (long *)0x0) goto LAB_0b9f9d41;
  }
  puStack_38 = unaff_RBX;
  func_0x05f93660(unaff_R12,unaff_R15,lVar10);
  *unaff_R12 = (long)&UNK_0f2f3638;
  unaff_R12[3] = (long)&UNK_0f2f36d8;
  unaff_R12[4] = (long)&UNK_0f2f3710;
  unaff_R12[8] = (long)&UNK_0f2f3738;
  unaff_R12[0x20] = 0;
  unaff_R12[0x21] = 0;
  unaff_R12[0x22] = 0;
  unaff_R12[0x23] = 0;
  unaff_R12[0x24] = 0;
  unaff_R12[0x25] = 0;
  *(undefined1 *)(unaff_R12 + 0x26) = 0;
  unaff_R12[0x27] = lVar10;
  plVar16 = plStack_48 + 7;
  plStack_138 = plVar16;
  plStack_40 = unaff_R12;
  plStack_130 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plStack_130 == (long *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  plStack_130[1] = 0;
  plStack_130[2] = 0;
  *plStack_130 = (long)&UNK_0f2f5ef8;
  plStack_130[3] = (long)plVar16;
  plStack_150 = (long *)CONCAT44(DAT_0f54fd90_4,_DAT_0f54fd90);
  plStack_98 = plVar16;
  plStack_90 = plStack_130;
  if (plStack_150 == (long *)0x0) {
    func_0x048b0de0(&uStack_f8,&plStack_98);
    _DAT_0f54fd90 = (undefined4)uStack_f8;
    DAT_0f54fd90_4 = uStack_f8._4_4_;
    uVar4 = (undefined4)uStack_f0;
    uVar5 = uStack_f0._4_4_;
    uStack_f8 = (long *)0x0;
    uStack_f0 = (long *)0x0;
    plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar4;
    uRam000000000f54fd9c = uVar5;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar18 = plVar11 + 1;
      lVar10 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_f0;
    if (uStack_f0 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_f0 + 1;
      lVar10 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
        func_0x0412c2d0(plVar11);
      }
    }
    plStack_150 = (long *)CONCAT44(DAT_0f54fd90_4,_DAT_0f54fd90);
    plStack_98 = plStack_138;
    plStack_90 = plStack_130;
  }
  uStack_168 = 0x40;
  uStack_167 = 0x6074e;
  uStack_162 = 0;
  uStack_161 = 0;
  uStack_158 = 0xdb1a9b08;
  pcStack_160 = (code *)0x0;
  uStack_154 = 2;
  uStack_148 = 0;
  puStack_140 = &UNK_06074da0;
  uStack_f8 = (long *)&UNK_0f2f5f48;
  plStack_138 = (long *)0x0;
  plStack_130 = (long *)0x0;
  pplStack_d8 = (long **)&uStack_f8;
  uStack_178 = plVar16;
  func_0x06074290(unaff_R12 + 9,&uStack_178,&uStack_f8,&plStack_98);
  plVar16 = plStack_90;
  if (plStack_90 == (long *)0x0) {
LAB_0b9f6de0:
    if (pplStack_d8 != (long **)&uStack_f8) goto LAB_0b9f6ded;
LAB_0b9f6e21:
    lVar10 = 0x20;
LAB_0b9f6e26:
    (**(code **)((long)*pplStack_d8 + lVar10))();
  }
  else {
    LOCK();
    plVar11 = plStack_90 + 1;
    lVar10 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar10 != 0) goto LAB_0b9f6de0;
    (**(code **)(*plStack_90 + 0x10))(plStack_90);
    func_0x0412c2d0(plVar16);
    if (pplStack_d8 == (long **)&uStack_f8) goto LAB_0b9f6e21;
LAB_0b9f6ded:
    lVar10 = 0x28;
    if (pplStack_d8 != (long **)0x0) goto LAB_0b9f6e26;
  }
  if (pcStack_160 != (code *)0x0) {
    (*pcStack_160)(&uStack_178);
  }
  plVar16 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_130 + 1;
    lVar10 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar11 = (long *)(**(code **)(*unaff_R12 + 0x30))(unaff_R12);
  plVar16 = *(long **)(plStack_48[0x1a] + 0xc0);
  plStack_b8 = plVar16;
  plStack_b0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plStack_b0 == (long *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  plStack_b0[1] = 0;
  plStack_b0[2] = 0;
  *plStack_b0 = (long)&UNK_0f2f5fc8;
  plStack_b0[3] = (long)plVar16;
  plVar18 = (long *)CONCAT44(DAT_0f54fd90_4,_DAT_0f54fd90);
  plStack_68 = plVar16;
  plStack_60 = plStack_b0;
  if (plVar18 == (long *)0x0) {
    func_0x048b0de0(&uStack_178,&uStack_f8);
    uVar5 = uStack_170;
    _DAT_0f54fd90 = uStack_178;
    uVar4 = CONCAT22(uStack_16a,CONCAT11(uStack_16b,uStack_16c));
    uStack_178._0_4_ = 0;
    uStack_178._4_4_ = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_16b = 0;
    uStack_16a = 0;
    plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar5;
    uRam000000000f54fd9c = uVar4;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar17 = plVar18 + 1;
      lVar10 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar17 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
    plVar18 = _DAT_0f54fd90;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar18 = plVar17 + 1;
      lVar10 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      plVar18 = _DAT_0f54fd90;
      if (lVar10 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
        plVar18 = _DAT_0f54fd90;
      }
    }
    plStack_68 = plStack_b8;
    plStack_60 = plStack_b0;
  }
  puStack_128 = &UNK_0ba681e0;
  uStack_118 = 0xab4a970c;
  pcStack_120 = (code *)0x0;
  uStack_114 = 2;
  lStack_108 = 0;
  pcStack_100 = (code *)&UNK_0ba68080;
  plStack_98 = (long *)&UNK_0f2f6018;
  pplStack_78 = &plStack_98;
  plStack_b8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_138 = plVar16;
  plStack_110 = plVar18;
  if (plVar18 == (long *)0x0) {
    _DAT_0f54fd90 = plVar18;
    func_0x048b0de0(&uStack_178,&uStack_f8);
    uVar5 = uStack_170;
    plVar18 = uStack_178;
    uVar4 = CONCAT22(uStack_16a,CONCAT11(uStack_16b,uStack_16c));
    uStack_178._0_4_ = 0;
    uStack_178._4_4_ = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_16b = 0;
    uStack_16a = 0;
    plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar5;
    uRam000000000f54fd9c = uVar4;
    _DAT_0f54fd90 = plVar18;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar18 = plVar16 + 1;
      lVar10 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
      }
    }
    plVar16 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
    plVar18 = _DAT_0f54fd90;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar18 = plVar16 + 1;
      lVar10 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      plVar18 = _DAT_0f54fd90;
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
        plVar18 = _DAT_0f54fd90;
      }
    }
  }
  _DAT_0f54fd90 = plVar18;
  if (DAT_0f6c5288 == '\0') {
    iVar9 = func_0x04108328(&DAT_0f6c5288);
    if (iVar9 != 0) {
      func_0x0ba67d10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6c5208,0xf53dab8);
      func_0x0410844d(&DAT_0f6c5288);
    }
  }
  plVar16 = (long *)(*plVar18 +
                    (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                           *(uint *)(_DAT_0f6c5208 + 4)) * 8);
  do {
    lVar10 = *plVar16;
    if (lVar10 == -1) goto LAB_0b9f70f0;
    plVar16 = (long *)(plVar18[3] + lVar10 * 0x18);
  } while (*(uint *)(plVar18[3] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f6c5208 + 4));
  if (plVar16 == (long *)plVar18[4]) {
LAB_0b9f70f0:
    plVar16 = (long *)&DAT_0f6c5208;
  }
  else {
    plVar16 = (long *)plVar16[2];
  }
  uStack_178._0_4_ = 0;
  uStack_178._4_4_ = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_16b = 0;
  uStack_16a = 0;
  func_0x048b1dc0(&uStack_178);
  plStack_50 = plVar11;
  if (plVar18 != (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170))))
  {
LAB_0b9f7174:
    plVar11 = plStack_110;
    if (pcStack_100 == (code *)0x0) {
      uStack_178._0_4_ = 0;
      uStack_178._4_4_ = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_16b = 0;
      uStack_16a = 0;
      func_0x048b1dc0(&uStack_178);
      plVar11 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
      lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
      if (lVar10 != 0) goto LAB_0b9f71aa;
LAB_0b9f7214:
      lVar10 = func_0x048aead0(plVar11);
      bVar1 = *(byte *)(lVar10 + 0x19);
      plVar11 = plStack_110;
      lVar10 = lStack_108;
    }
    else {
      lVar10 = lStack_108;
      if (lStack_108 == 0) {
        (*pcStack_100)(0,&plStack_138,0);
        lVar10 = lStack_108;
        if (lStack_108 == 0) goto LAB_0b9f7214;
      }
LAB_0b9f71aa:
      bVar1 = *(byte *)(lVar10 + 0x19);
      plVar11 = plStack_110;
      lVar10 = lStack_108;
    }
    plStack_110 = plVar11;
    lStack_108 = lVar10;
    if ((bVar1 & 1) == 0) {
      if (pcStack_100 == (code *)0x0) {
        uStack_178._0_4_ = 0;
        uStack_178._4_4_ = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_16b = 0;
        uStack_16a = 0;
        func_0x048b1dc0(&uStack_178);
        plVar11 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
joined_r0x0b9f7242:
        if (lVar10 != 0) goto LAB_0b9f71e6;
        lVar10 = func_0x048aead0(plVar11);
        bVar1 = *(byte *)(lVar10 + 0x19);
      }
      else {
        if (lVar10 == 0) {
          (*pcStack_100)(0,&plStack_138,0);
          lVar10 = lStack_108;
          goto joined_r0x0b9f7242;
        }
LAB_0b9f71e6:
        bVar1 = *(byte *)(lVar10 + 0x19);
      }
      if ((bVar1 & 2) == 0) goto LAB_0b9f73aa;
    }
    if (pplStack_78 == (long **)0x0) {
LAB_0b9f72a8:
      puStack_e8 = &UNK_0488e0b0;
      pcStack_e0 = (code *)0x0;
      pplStack_d8 = (long **)CONCAT35(pplStack_d8._5_3_,0x48b5725f);
      uStack_f8 = (long *)0x0;
      plStack_d0 = plStack_110;
      plStack_c8 = (long *)0x0;
      pcStack_c0 = (code *)0x0;
      if (pcStack_100 == (code *)0x0) {
LAB_0b9f7362:
        plStack_a8 = (long *)0x0;
        plStack_a0 = (long *)0x0;
        func_0x048b1dc0(&plStack_a8);
        plVar17 = plStack_a8;
        plVar11 = plStack_a0;
      }
      else {
        (*pcStack_100)(0x100,&plStack_138,&uStack_f8);
        plVar11 = plStack_d0;
        if (pcStack_c0 == (code *)0x0) goto LAB_0b9f7362;
        plVar17 = plStack_c8;
        if (plStack_c8 == (long *)0x0) {
          (*pcStack_c0)(0,&uStack_f8,0);
          plVar17 = plStack_c8;
        }
      }
      if (pcStack_e0 != (code *)0x0) {
        (*pcStack_e0)(&uStack_f8);
      }
      if (plVar11 != plVar18) goto LAB_0b9f73aa;
      if (plVar17 == (long *)0x0) {
        lVar10 = func_0x048aead0(plVar11);
        iVar9 = *(int *)(lVar10 + 8);
        if (plVar16 != (long *)0x0) goto LAB_0b9f7713;
LAB_0b9f904b:
        lVar10 = func_0x048aead0(plVar18);
        if (iVar9 != *(int *)(lVar10 + 8)) goto LAB_0b9f73aa;
        plVar16 = (long *)func_0x048aead0(plVar18);
      }
      else {
        iVar9 = (int)plVar17[1];
        if (plVar16 == (long *)0x0) goto LAB_0b9f904b;
LAB_0b9f7713:
        if (iVar9 != (int)plVar16[1]) goto LAB_0b9f73aa;
      }
      uVar2 = *(uint *)(*plVar16 + 4);
      plVar18 = plStack_50 + 1;
      plVar16 = (long *)plStack_50[1];
      plVar11 = plVar18;
      if (plVar16 != (long *)0x0) {
        do {
          if (*(uint *)(plVar16 + 4) >= uVar2) {
            plVar11 = plVar16;
          }
          plVar16 = (long *)plVar16[*(uint *)(plVar16 + 4) < uVar2];
        } while (plVar16 != (long *)0x0);
        if ((plVar11 != plVar18) && (*(uint *)(plVar11 + 4) <= uVar2)) goto LAB_0b9f73aa;
      }
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (lVar10 == 0) {
        FUN_0eec74c0(0x80,0);
      }
      if (pplStack_78 == (long **)0x0) {
        pplStack_d8 = (long **)0x0;
      }
      else if (pplStack_78 == &plStack_98) {
        pplStack_d8 = (long **)&uStack_f8;
        (*(code *)(*pplStack_78)[3])();
      }
      else {
        pplStack_d8 = pplStack_78;
        pplStack_78 = (long **)0x0;
      }
      plStack_a8 = plStack_68;
      plStack_a0 = plStack_60;
      plStack_68 = (long *)0x0;
      plStack_60 = (long *)0x0;
      func_0x049e8ab0(lVar10,&plStack_138,&uStack_f8,&plStack_a8);
      plVar16 = plStack_a0;
      lStack_180 = lVar10;
      if (plStack_a0 != (long *)0x0) {
        LOCK();
        plVar11 = plStack_a0 + 1;
        lVar10 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          func_0x0412c2d0(plVar16);
        }
      }
      if (pplStack_d8 == (long **)&uStack_f8) {
        lVar10 = 0x20;
LAB_0b9f9412:
        (**(code **)((long)*pplStack_d8 + lVar10))();
      }
      else {
        lVar10 = 0x28;
        if (pplStack_d8 != (long **)0x0) goto LAB_0b9f9412;
      }
      plVar16 = (long *)*plVar18;
      while (plVar11 = plVar18, plVar16 != (long *)0x0) {
        while (plVar18 = plVar16, *(uint *)(plVar18 + 4) <= uVar2) {
          if (uVar2 <= *(uint *)(plVar18 + 4)) goto LAB_0b9f94f3;
          plVar16 = (long *)plVar18[1];
          if ((long *)plVar18[1] == (long *)0x0) {
            plVar11 = plVar18 + 1;
            goto LAB_0b9f9458;
          }
        }
        plVar16 = (long *)*plVar18;
      }
LAB_0b9f9458:
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar16 == (long *)0x0) {
        FUN_0eec74c0(0x30,0);
      }
      plVar17 = plStack_50;
      *(uint *)(plVar16 + 4) = uVar2;
      plVar16[5] = 0;
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[2] = (long)plVar18;
      *plVar11 = (long)plVar16;
      if (*(long *)*plStack_50 != 0) {
        *plStack_50 = *(long *)*plStack_50;
      }
      func_0x048bed00(plStack_50[1],plVar16);
      plVar17[2] = plVar17[2] + 1;
      plVar18 = plVar16;
LAB_0b9f94f3:
      lVar15 = lStack_180;
      lStack_180 = 0;
      lVar10 = plVar18[5];
      plVar18[5] = lVar15;
      if (lVar10 == 0) goto LAB_0b9f73aa;
      plVar16 = *(long **)(lVar10 + 0x78);
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar11 = plVar16 + 1;
        lVar15 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      plVar16 = *(long **)(lVar10 + 0x60);
      if (plVar16 == (long *)(lVar10 + 0x40)) {
        lVar15 = 0x20;
LAB_0b9f955c:
        (**(code **)(*plVar16 + lVar15))();
      }
      else {
        lVar15 = 0x28;
        if (plVar16 != (long *)0x0) goto LAB_0b9f955c;
      }
      if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
        (**(code **)(lVar10 + 0x18))(lVar10);
      }
      func_0x0412a280(lVar10,0x80);
      lVar10 = lStack_180;
      lStack_180 = 0;
      if (lVar10 == 0) goto LAB_0b9f73aa;
      plVar16 = *(long **)(lVar10 + 0x78);
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar11 = plVar16 + 1;
        lVar15 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      plVar16 = *(long **)(lVar10 + 0x60);
      if (plVar16 == (long *)(lVar10 + 0x40)) {
        lVar15 = 0x20;
LAB_0b9f95de:
        (**(code **)(*plVar16 + lVar15))();
      }
      else {
        lVar15 = 0x28;
        if (plVar16 != (long *)0x0) goto LAB_0b9f95de;
      }
      if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
        (**(code **)(lVar10 + 0x18))(lVar10);
      }
      func_0x0412a280(lVar10,0x80);
      goto LAB_0b9f73aa;
    }
    func_0x049e8590(&uStack_178,&plStack_138);
    if (pplStack_78 != (long **)0x0) {
      cVar8 = (*(code *)(*pplStack_78)[6])(pplStack_78,&uStack_178);
      if (pcStack_160 != (code *)0x0) {
        (*pcStack_160)(&uStack_178);
      }
      if (cVar8 == '\0') goto LAB_0b9f73aa;
      goto LAB_0b9f72a8;
    }
    func_0x04891200();
LAB_0b9f9f11:
    func_0x04891200();
LAB_0b9f9f16:
    func_0x04891200();
    goto LAB_0b9f9f1b;
  }
  if (plVar16 == (long *)0x0) {
    lVar10 = func_0x048aead0(plVar18);
    iVar9 = *(int *)(lVar10 + 8);
    lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    if (lVar10 != 0) goto LAB_0b9f7142;
LAB_0b9f7161:
    lVar10 = func_0x048aead0(CONCAT26(uStack_16a,
                                      CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170))));
    if (iVar9 != *(int *)(lVar10 + 8)) goto LAB_0b9f7174;
  }
  else {
    iVar9 = (int)plVar16[1];
    lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    if (lVar10 == 0) goto LAB_0b9f7161;
LAB_0b9f7142:
    if (iVar9 != *(int *)(lVar10 + 8)) goto LAB_0b9f7174;
  }
LAB_0b9f73aa:
  plVar16 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_60 + 1;
    lVar10 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar16 = plStack_40;
  if (pplStack_78 == &plStack_98) {
    lVar10 = 0x20;
LAB_0b9f7422:
    (**(code **)((long)*pplStack_78 + lVar10))();
  }
  else {
    lVar10 = 0x28;
    if (pplStack_78 != (long **)0x0) goto LAB_0b9f7422;
  }
  if (pcStack_120 != (code *)0x0) {
    (*pcStack_120)(&plStack_138);
  }
  plVar11 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_b0 + 1;
    lVar10 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      func_0x0412c2d0(plVar11);
    }
  }
  uVar12 = (**(code **)(*plStack_48 + 0x10))();
  lVar10 = func_0x060af310(uVar12);
  if (lVar10 != 0) {
    uVar12 = (**(code **)(*plVar16 + 0x30))(plVar16);
    func_0x060afe20(uVar12,lVar10);
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar12 = _UNK_01266adb;
  plVar11 = plStack_48 + 3;
  uStack_168 = SUB81(puVar13,0);
  uStack_167 = (undefined5)((ulong)puVar13 >> 8);
  uStack_162 = (undefined1)((ulong)puVar13 >> 0x30);
  uStack_161 = (undefined1)((ulong)puVar13 >> 0x38);
  uStack_178._0_4_ = 0x21;
  uStack_178._4_4_ = 0;
  uStack_170 = 0x1c;
  uStack_16c = 0;
  uStack_16b = 0;
  uStack_16a = 0;
  *(ulong *)(puVar13 + 3) = CONCAT44(_UNK_01266ad7,_DAT_01266ad3);
  *(undefined8 *)(puVar13 + 5) = uVar12;
  uVar6 = _DAT_01266ad3;
  uVar5 = _UNK_01266acf;
  uVar4 = _UNK_01266acb;
  *puVar13 = _DAT_01266ac7;
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  puVar13[3] = uVar6;
  *(undefined1 *)(puVar13 + 7) = 0;
  lVar10 = func_0x067a7670(plVar11,&uStack_178);
  func_0x0412a280(puVar13,0x20);
  plStack_50 = plVar11;
  if (lVar10 != 0) {
    plVar11 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16);
    plVar18 = (long *)(lVar10 + 0x30);
    plStack_b8 = plVar18;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar16 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = (long)&UNK_0f2f6098;
    plVar16[3] = (long)plVar18;
    plVar17 = plVar18;
    if (_DAT_0f54fd90 == (long *)0x0) {
      plStack_b0 = plVar16;
      func_0x048b0de0(&uStack_178,&uStack_f8);
      uVar7 = uStack_170;
      uVar6 = uStack_178._4_4_;
      uVar5 = (undefined4)uStack_178;
      uVar4 = CONCAT22(uStack_16a,CONCAT11(uStack_16b,uStack_16c));
      uStack_178._0_4_ = 0;
      uStack_178._4_4_ = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_16b = 0;
      uStack_16a = 0;
      plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd90 = uVar5;
      DAT_0f54fd90_4 = uVar6;
      _DAT_0f54fd98 = uVar7;
      uRam000000000f54fd9c = uVar4;
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      plVar16 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      plVar17 = plStack_b8;
      plVar16 = plStack_b0;
    }
    puStack_128 = &UNK_0ba68980;
    uStack_118 = 0x88e064ba;
    pcStack_120 = (code *)0x0;
    uStack_114 = 2;
    lStack_108 = 0;
    pcStack_100 = (code *)&UNK_0ba68820;
    plStack_98 = (long *)&UNK_0f2f60e8;
    pplStack_78 = &plStack_98;
    plStack_b8 = (long *)0x0;
    plStack_b0 = (long *)0x0;
    plStack_138 = plVar18;
    plStack_110 = _DAT_0f54fd90;
    plStack_68 = plVar17;
    plStack_60 = plVar16;
    auVar19 = func_0x06caf730();
    plVar18 = auVar19._8_8_;
    plVar16 = auVar19._0_8_;
    uStack_178._0_4_ = 0;
    uStack_178._4_4_ = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_16b = 0;
    uStack_16a = 0;
    func_0x048b1dc0(&uStack_178);
    plStack_58 = plVar11;
    if (plVar18 == (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)))
       ) {
      if (plVar16 == (long *)0x0) {
        lVar10 = func_0x048aead0(plVar18);
        iVar9 = *(int *)(lVar10 + 8);
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        if (lVar10 != 0) goto LAB_0b9f76f4;
LAB_0b9f7737:
        lVar10 = func_0x048aead0(CONCAT26(uStack_16a,
                                          CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170))));
        if (iVar9 != *(int *)(lVar10 + 8)) goto LAB_0b9f774a;
      }
      else {
        iVar9 = (int)plVar16[1];
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        if (lVar10 == 0) goto LAB_0b9f7737;
LAB_0b9f76f4:
        if (iVar9 != *(int *)(lVar10 + 8)) goto LAB_0b9f774a;
      }
    }
    else {
LAB_0b9f774a:
      plVar11 = plStack_110;
      if (pcStack_100 == (code *)0x0) {
        uStack_178._0_4_ = 0;
        uStack_178._4_4_ = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_16b = 0;
        uStack_16a = 0;
        func_0x048b1dc0(&uStack_178);
        plVar11 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        if (lVar10 != 0) goto LAB_0b9f7788;
LAB_0b9f77f2:
        lVar10 = func_0x048aead0(plVar11);
        bVar1 = *(byte *)(lVar10 + 0x19);
        plVar11 = plStack_110;
        lVar10 = lStack_108;
      }
      else {
        lVar10 = lStack_108;
        if (lStack_108 == 0) {
          (*pcStack_100)(0,&plStack_138,0);
          lVar10 = lStack_108;
          if (lStack_108 == 0) goto LAB_0b9f77f2;
        }
LAB_0b9f7788:
        bVar1 = *(byte *)(lVar10 + 0x19);
        plVar11 = plStack_110;
        lVar10 = lStack_108;
      }
      plStack_110 = plVar11;
      lStack_108 = lVar10;
      if ((bVar1 & 1) == 0) {
        if (pcStack_100 == (code *)0x0) {
          uStack_178._0_4_ = 0;
          uStack_178._4_4_ = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_16b = 0;
          uStack_16a = 0;
          func_0x048b1dc0(&uStack_178);
          plVar11 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170))
                                    );
          lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
joined_r0x0b9f7820:
          if (lVar10 != 0) goto LAB_0b9f77c4;
          lVar10 = func_0x048aead0(plVar11);
          bVar1 = *(byte *)(lVar10 + 0x19);
        }
        else {
          if (lVar10 == 0) {
            (*pcStack_100)(0,&plStack_138,0);
            lVar10 = lStack_108;
            goto joined_r0x0b9f7820;
          }
LAB_0b9f77c4:
          bVar1 = *(byte *)(lVar10 + 0x19);
        }
        if ((bVar1 & 2) == 0) goto LAB_0b9f797c;
      }
      if (pplStack_78 != (long **)0x0) {
        func_0x049e8590(&uStack_178,&plStack_138);
        if (pplStack_78 == (long **)0x0) goto LAB_0b9f9f11;
        cVar8 = (*(code *)(*pplStack_78)[6])(pplStack_78,&uStack_178);
        if (pcStack_160 != (code *)0x0) {
          (*pcStack_160)(&uStack_178);
        }
        if (cVar8 == '\0') goto LAB_0b9f797c;
      }
      puStack_e8 = &UNK_0488e0b0;
      pcStack_e0 = (code *)0x0;
      pplStack_d8 = (long **)CONCAT35(pplStack_d8._5_3_,0x48b5725f);
      uStack_f8 = (long *)0x0;
      plStack_d0 = plStack_110;
      plStack_c8 = (long *)0x0;
      pcStack_c0 = (code *)0x0;
      if (pcStack_100 == (code *)0x0) {
LAB_0b9f7934:
        plStack_a8 = (long *)0x0;
        plStack_a0 = (long *)0x0;
        func_0x048b1dc0(&plStack_a8);
        plVar17 = plStack_a8;
        plVar11 = plStack_a0;
      }
      else {
        (*pcStack_100)(0x100,&plStack_138,&uStack_f8);
        plVar11 = plStack_d0;
        if (pcStack_c0 == (code *)0x0) goto LAB_0b9f7934;
        plVar17 = plStack_c8;
        if (plStack_c8 == (long *)0x0) {
          (*pcStack_c0)(0,&uStack_f8,0);
          plVar17 = plStack_c8;
        }
      }
      if (pcStack_e0 != (code *)0x0) {
        (*pcStack_e0)(&uStack_f8);
      }
      if (plVar11 == plVar18) {
        if (plVar17 == (long *)0x0) {
          plVar17 = (long *)func_0x048aead0(plVar11);
        }
        lVar10 = plVar17[1];
        if (plVar16 == (long *)0x0) {
          lVar15 = func_0x048aead0(plVar18);
          if ((int)lVar10 == *(int *)(lVar15 + 8)) {
            plVar16 = (long *)func_0x048aead0(plVar18);
            goto LAB_0b9f912c;
          }
        }
        else if ((int)lVar10 == (int)plVar16[1]) {
LAB_0b9f912c:
          uVar2 = *(uint *)(*plVar16 + 4);
          plVar18 = plStack_58 + 1;
          plVar16 = (long *)plStack_58[1];
          plVar11 = plVar18;
          if (plVar16 != (long *)0x0) {
            do {
              if (*(uint *)(plVar16 + 4) >= uVar2) {
                plVar11 = plVar16;
              }
              plVar16 = (long *)plVar16[*(uint *)(plVar16 + 4) < uVar2];
            } while (plVar16 != (long *)0x0);
            if ((plVar11 != plVar18) && (*(uint *)(plVar11 + 4) <= uVar2)) goto LAB_0b9f797c;
          }
          lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
          if (lVar10 == 0) {
            FUN_0eec74c0(0x80,0);
          }
          if (pplStack_78 == (long **)0x0) {
            pplStack_d8 = (long **)0x0;
          }
          else if (pplStack_78 == &plStack_98) {
            pplStack_d8 = (long **)&uStack_f8;
            (*(code *)(*pplStack_78)[3])();
          }
          else {
            pplStack_d8 = pplStack_78;
            pplStack_78 = (long **)0x0;
          }
          plStack_a8 = plStack_68;
          plStack_a0 = plStack_60;
          plStack_68 = (long *)0x0;
          plStack_60 = (long *)0x0;
          func_0x049e8ab0(lVar10,&plStack_138,&uStack_f8,&plStack_a8);
          plVar16 = plStack_a0;
          lStack_180 = lVar10;
          if (plStack_a0 != (long *)0x0) {
            LOCK();
            plVar11 = plStack_a0 + 1;
            lVar10 = *plVar11;
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              func_0x0412c2d0(plVar16);
            }
          }
          if (pplStack_d8 == (long **)&uStack_f8) {
            lVar10 = 0x20;
LAB_0b9f96a8:
            (**(code **)((long)*pplStack_d8 + lVar10))();
          }
          else {
            lVar10 = 0x28;
            if (pplStack_d8 != (long **)0x0) goto LAB_0b9f96a8;
          }
          plVar16 = (long *)*plVar18;
          while (plVar11 = plVar18, plVar16 != (long *)0x0) {
            while (plVar18 = plVar16, *(uint *)(plVar18 + 4) <= uVar2) {
              if (uVar2 <= *(uint *)(plVar18 + 4)) goto LAB_0b9f99ed;
              plVar16 = (long *)plVar18[1];
              if ((long *)plVar18[1] == (long *)0x0) {
                plVar11 = plVar18 + 1;
                goto LAB_0b9f96e8;
              }
            }
            plVar16 = (long *)*plVar18;
          }
LAB_0b9f96e8:
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
          if (plVar16 == (long *)0x0) {
            FUN_0eec74c0(0x30,0);
          }
          plVar17 = plStack_58;
          *(uint *)(plVar16 + 4) = uVar2;
          plVar16[5] = 0;
          *plVar16 = 0;
          plVar16[1] = 0;
          plVar16[2] = (long)plVar18;
          *plVar11 = (long)plVar16;
          if (*(long *)*plStack_58 != 0) {
            *plStack_58 = *(long *)*plStack_58;
          }
          func_0x048bed00(plStack_58[1],plVar16);
          plVar17[2] = plVar17[2] + 1;
          plVar18 = plVar16;
LAB_0b9f99ed:
          lVar15 = lStack_180;
          lStack_180 = 0;
          lVar10 = plVar18[5];
          plVar18[5] = lVar15;
          if (lVar10 != 0) {
            plVar16 = *(long **)(lVar10 + 0x78);
            if (plVar16 != (long *)0x0) {
              LOCK();
              plVar11 = plVar16 + 1;
              lVar15 = *plVar11;
              *plVar11 = *plVar11 + -1;
              UNLOCK();
              if (lVar15 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
                func_0x0412c2d0(plVar16);
              }
            }
            plVar16 = *(long **)(lVar10 + 0x60);
            if (plVar16 == (long *)(lVar10 + 0x40)) {
              lVar15 = 0x20;
LAB_0b9f9a56:
              (**(code **)(*plVar16 + lVar15))();
            }
            else {
              lVar15 = 0x28;
              if (plVar16 != (long *)0x0) goto LAB_0b9f9a56;
            }
            if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
              (**(code **)(lVar10 + 0x18))(lVar10);
            }
            func_0x0412a280(lVar10,0x80);
            lVar10 = lStack_180;
            lStack_180 = 0;
            if (lVar10 != 0) {
              plVar16 = *(long **)(lVar10 + 0x78);
              if (plVar16 != (long *)0x0) {
                LOCK();
                plVar11 = plVar16 + 1;
                lVar15 = *plVar11;
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (lVar15 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                  func_0x0412c2d0(plVar16);
                }
              }
              plVar16 = *(long **)(lVar10 + 0x60);
              if (plVar16 == (long *)(lVar10 + 0x40)) {
                lVar15 = 0x20;
LAB_0b9f9cc0:
                (**(code **)(*plVar16 + lVar15))();
              }
              else {
                lVar15 = 0x28;
                if (plVar16 != (long *)0x0) goto LAB_0b9f9cc0;
              }
              if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
                (**(code **)(lVar10 + 0x18))(lVar10);
              }
              func_0x0412a280(lVar10,0x80);
            }
          }
        }
      }
    }
LAB_0b9f797c:
    plVar16 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_60 + 1;
      lVar10 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        func_0x0412c2d0(plVar16);
      }
    }
    plVar16 = plStack_40;
    plVar11 = plStack_50;
    if (pplStack_78 == &plStack_98) {
      lVar10 = 0x20;
LAB_0b9f79f4:
      (**(code **)((long)*pplStack_78 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (pplStack_78 != (long **)0x0) goto LAB_0b9f79f4;
    }
    if (pcStack_120 != (code *)0x0) {
      (*pcStack_120)(&plStack_138);
    }
    plVar18 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_b0 + 1;
      lVar10 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        func_0x0412c2d0(plVar18);
      }
    }
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uVar12 = _UNK_014218e3;
  uStack_168 = SUB81(puVar13,0);
  uStack_167 = (undefined5)((ulong)puVar13 >> 8);
  uStack_162 = (undefined1)((ulong)puVar13 >> 0x30);
  uStack_161 = (undefined1)((ulong)puVar13 >> 0x38);
  uStack_178._0_4_ = 0x29;
  uStack_178._4_4_ = 0;
  uStack_170 = 0x21;
  uStack_16c = 0;
  uStack_16b = 0;
  uStack_16a = 0;
  *(undefined8 *)(puVar13 + 4) = _DAT_014218db;
  *(undefined8 *)(puVar13 + 6) = uVar12;
  uVar6 = _UNK_014218d7;
  uVar5 = _UNK_014218d3;
  uVar4 = _UNK_014218cf;
  *puVar13 = _DAT_014218cb;
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  puVar13[3] = uVar6;
  *(undefined2 *)(puVar13 + 8) = 0x65;
  lVar10 = func_0x067a7670(plVar11,&uStack_178);
  func_0x0412a280(puVar13,0x28);
  if (lVar10 != 0) {
    plVar11 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16);
    plVar18 = (long *)(lVar10 + 0x28);
    plStack_b8 = plVar18;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar16 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = (long)&UNK_0f2f6168;
    plVar16[3] = (long)plVar18;
    plVar17 = plVar18;
    if (_DAT_0f54fd90 == (long *)0x0) {
      plStack_b0 = plVar16;
      func_0x048b0de0(&uStack_178,&uStack_f8);
      uVar7 = uStack_170;
      uVar6 = uStack_178._4_4_;
      uVar5 = (undefined4)uStack_178;
      uVar4 = CONCAT22(uStack_16a,CONCAT11(uStack_16b,uStack_16c));
      uStack_178._0_4_ = 0;
      uStack_178._4_4_ = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_16b = 0;
      uStack_16a = 0;
      plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd90 = uVar5;
      DAT_0f54fd90_4 = uVar6;
      _DAT_0f54fd98 = uVar7;
      uRam000000000f54fd9c = uVar4;
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      plVar16 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      plVar17 = plStack_b8;
      plVar16 = plStack_b0;
    }
    puStack_128 = &UNK_0ba69120;
    uStack_118 = 0x246ce171;
    pcStack_120 = (code *)0x0;
    uStack_114 = 2;
    lStack_108 = 0;
    pcStack_100 = (code *)&UNK_0ba68fc0;
    plStack_98 = (long *)&UNK_0f2f61b8;
    pplStack_78 = &plStack_98;
    plStack_b8 = (long *)0x0;
    plStack_b0 = (long *)0x0;
    plStack_138 = plVar18;
    plStack_110 = _DAT_0f54fd90;
    plStack_68 = plVar17;
    plStack_60 = plVar16;
    auVar19 = func_0x06b5b890();
    plVar18 = auVar19._8_8_;
    plVar16 = auVar19._0_8_;
    uStack_178._0_4_ = 0;
    uStack_178._4_4_ = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_16b = 0;
    uStack_16a = 0;
    func_0x048b1dc0(&uStack_178);
    plStack_58 = plVar11;
    if (plVar18 == (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)))
       ) {
      if (plVar16 == (long *)0x0) {
        lVar10 = func_0x048aead0(plVar18);
        iVar9 = *(int *)(lVar10 + 8);
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        if (lVar10 != 0) goto LAB_0b9f7c82;
LAB_0b9f7cce:
        lVar10 = func_0x048aead0(CONCAT26(uStack_16a,
                                          CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170))));
        if (iVar9 != *(int *)(lVar10 + 8)) goto LAB_0b9f7ce1;
      }
      else {
        iVar9 = (int)plVar16[1];
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        if (lVar10 == 0) goto LAB_0b9f7cce;
LAB_0b9f7c82:
        if (iVar9 != *(int *)(lVar10 + 8)) goto LAB_0b9f7ce1;
      }
    }
    else {
LAB_0b9f7ce1:
      plVar11 = plStack_110;
      if (pcStack_100 == (code *)0x0) {
        uStack_178._0_4_ = 0;
        uStack_178._4_4_ = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_16b = 0;
        uStack_16a = 0;
        func_0x048b1dc0(&uStack_178);
        plVar11 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        if (lVar10 != 0) goto LAB_0b9f7d1f;
LAB_0b9f7d89:
        lVar10 = func_0x048aead0(plVar11);
        bVar1 = *(byte *)(lVar10 + 0x19);
        plVar11 = plStack_110;
        lVar10 = lStack_108;
      }
      else {
        lVar10 = lStack_108;
        if (lStack_108 == 0) {
          (*pcStack_100)(0,&plStack_138,0);
          lVar10 = lStack_108;
          if (lStack_108 == 0) goto LAB_0b9f7d89;
        }
LAB_0b9f7d1f:
        bVar1 = *(byte *)(lVar10 + 0x19);
        plVar11 = plStack_110;
        lVar10 = lStack_108;
      }
      plStack_110 = plVar11;
      lStack_108 = lVar10;
      if ((bVar1 & 1) == 0) {
        if (pcStack_100 == (code *)0x0) {
          uStack_178._0_4_ = 0;
          uStack_178._4_4_ = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_16b = 0;
          uStack_16a = 0;
          func_0x048b1dc0(&uStack_178);
          plVar11 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170))
                                    );
          lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
joined_r0x0b9f7db7:
          if (lVar10 != 0) goto LAB_0b9f7d5b;
          lVar10 = func_0x048aead0(plVar11);
          bVar1 = *(byte *)(lVar10 + 0x19);
        }
        else {
          if (lVar10 == 0) {
            (*pcStack_100)(0,&plStack_138,0);
            lVar10 = lStack_108;
            goto joined_r0x0b9f7db7;
          }
LAB_0b9f7d5b:
          bVar1 = *(byte *)(lVar10 + 0x19);
        }
        if ((bVar1 & 2) == 0) goto LAB_0b9f7f13;
      }
      if (pplStack_78 != (long **)0x0) {
        func_0x049e8590(&uStack_178,&plStack_138);
        if (pplStack_78 == (long **)0x0) goto LAB_0b9f9f16;
        cVar8 = (*(code *)(*pplStack_78)[6])(pplStack_78,&uStack_178);
        if (pcStack_160 != (code *)0x0) {
          (*pcStack_160)(&uStack_178);
        }
        if (cVar8 == '\0') goto LAB_0b9f7f13;
      }
      puStack_e8 = &UNK_0488e0b0;
      pcStack_e0 = (code *)0x0;
      pplStack_d8 = (long **)CONCAT35(pplStack_d8._5_3_,0x48b5725f);
      uStack_f8 = (long *)0x0;
      plStack_d0 = plStack_110;
      plStack_c8 = (long *)0x0;
      pcStack_c0 = (code *)0x0;
      if (pcStack_100 == (code *)0x0) {
LAB_0b9f7ecb:
        plStack_a8 = (long *)0x0;
        plStack_a0 = (long *)0x0;
        func_0x048b1dc0(&plStack_a8);
        plVar17 = plStack_a8;
        plVar11 = plStack_a0;
      }
      else {
        (*pcStack_100)(0x100,&plStack_138,&uStack_f8);
        plVar11 = plStack_d0;
        if (pcStack_c0 == (code *)0x0) goto LAB_0b9f7ecb;
        plVar17 = plStack_c8;
        if (plStack_c8 == (long *)0x0) {
          (*pcStack_c0)(0,&uStack_f8,0);
          plVar17 = plStack_c8;
        }
      }
      if (pcStack_e0 != (code *)0x0) {
        (*pcStack_e0)(&uStack_f8);
      }
      if (plVar11 == plVar18) {
        if (plVar17 == (long *)0x0) {
          plVar17 = (long *)func_0x048aead0(plVar11);
        }
        lVar10 = plVar17[1];
        if (plVar16 == (long *)0x0) {
          lVar15 = func_0x048aead0(plVar18);
          if ((int)lVar10 == *(int *)(lVar15 + 8)) {
            plVar16 = (long *)func_0x048aead0(plVar18);
            goto LAB_0b9f91ec;
          }
        }
        else if ((int)lVar10 == (int)plVar16[1]) {
LAB_0b9f91ec:
          uVar2 = *(uint *)(*plVar16 + 4);
          plVar18 = plStack_58 + 1;
          plVar16 = (long *)plStack_58[1];
          plVar11 = plVar18;
          if (plVar16 != (long *)0x0) {
            do {
              if (*(uint *)(plVar16 + 4) >= uVar2) {
                plVar11 = plVar16;
              }
              plVar16 = (long *)plVar16[*(uint *)(plVar16 + 4) < uVar2];
            } while (plVar16 != (long *)0x0);
            if ((plVar11 != plVar18) && (*(uint *)(plVar11 + 4) <= uVar2)) goto LAB_0b9f7f13;
          }
          lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
          if (lVar10 == 0) {
            FUN_0eec74c0(0x80,0);
          }
          if (pplStack_78 == (long **)0x0) {
            pplStack_d8 = (long **)0x0;
          }
          else if (pplStack_78 == &plStack_98) {
            pplStack_d8 = (long **)&uStack_f8;
            (*(code *)(*pplStack_78)[3])();
          }
          else {
            pplStack_d8 = pplStack_78;
            pplStack_78 = (long **)0x0;
          }
          plStack_a8 = plStack_68;
          plStack_a0 = plStack_60;
          plStack_68 = (long *)0x0;
          plStack_60 = (long *)0x0;
          func_0x049e8ab0(lVar10,&plStack_138,&uStack_f8,&plStack_a8);
          plVar16 = plStack_a0;
          lStack_180 = lVar10;
          if (plStack_a0 != (long *)0x0) {
            LOCK();
            plVar11 = plStack_a0 + 1;
            lVar10 = *plVar11;
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              func_0x0412c2d0(plVar16);
            }
          }
          if (pplStack_d8 == (long **)&uStack_f8) {
            lVar10 = 0x20;
LAB_0b9f97f4:
            (**(code **)((long)*pplStack_d8 + lVar10))();
          }
          else {
            lVar10 = 0x28;
            if (pplStack_d8 != (long **)0x0) goto LAB_0b9f97f4;
          }
          plVar16 = (long *)*plVar18;
          while (plVar11 = plVar18, plVar16 != (long *)0x0) {
            while (plVar18 = plVar16, *(uint *)(plVar18 + 4) <= uVar2) {
              if (uVar2 <= *(uint *)(plVar18 + 4)) goto LAB_0b9f9ae1;
              plVar16 = (long *)plVar18[1];
              if ((long *)plVar18[1] == (long *)0x0) {
                plVar11 = plVar18 + 1;
                goto LAB_0b9f9838;
              }
            }
            plVar16 = (long *)*plVar18;
          }
LAB_0b9f9838:
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
          if (plVar16 == (long *)0x0) {
            FUN_0eec74c0(0x30,0);
          }
          plVar17 = plStack_58;
          *(uint *)(plVar16 + 4) = uVar2;
          plVar16[5] = 0;
          *plVar16 = 0;
          plVar16[1] = 0;
          plVar16[2] = (long)plVar18;
          *plVar11 = (long)plVar16;
          if (*(long *)*plStack_58 != 0) {
            *plStack_58 = *(long *)*plStack_58;
          }
          func_0x048bed00(plStack_58[1],plVar16);
          plVar17[2] = plVar17[2] + 1;
          plVar18 = plVar16;
LAB_0b9f9ae1:
          lVar15 = lStack_180;
          lStack_180 = 0;
          lVar10 = plVar18[5];
          plVar18[5] = lVar15;
          if (lVar10 != 0) {
            plVar16 = *(long **)(lVar10 + 0x78);
            if (plVar16 != (long *)0x0) {
              LOCK();
              plVar11 = plVar16 + 1;
              lVar15 = *plVar11;
              *plVar11 = *plVar11 + -1;
              UNLOCK();
              if (lVar15 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
                func_0x0412c2d0(plVar16);
              }
            }
            plVar16 = *(long **)(lVar10 + 0x60);
            if (plVar16 == (long *)(lVar10 + 0x40)) {
              lVar15 = 0x20;
LAB_0b9f9b4a:
              (**(code **)(*plVar16 + lVar15))();
            }
            else {
              lVar15 = 0x28;
              if (plVar16 != (long *)0x0) goto LAB_0b9f9b4a;
            }
            if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
              (**(code **)(lVar10 + 0x18))(lVar10);
            }
            func_0x0412a280(lVar10,0x80);
            lVar10 = lStack_180;
            lStack_180 = 0;
            if (lVar10 != 0) {
              plVar16 = *(long **)(lVar10 + 0x78);
              if (plVar16 != (long *)0x0) {
                LOCK();
                plVar11 = plVar16 + 1;
                lVar15 = *plVar11;
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (lVar15 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                  func_0x0412c2d0(plVar16);
                }
              }
              plVar16 = *(long **)(lVar10 + 0x60);
              if (plVar16 == (long *)(lVar10 + 0x40)) {
                lVar15 = 0x20;
LAB_0b9f9ceb:
                (**(code **)(*plVar16 + lVar15))();
              }
              else {
                lVar15 = 0x28;
                if (plVar16 != (long *)0x0) goto LAB_0b9f9ceb;
              }
              if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
                (**(code **)(lVar10 + 0x18))(lVar10);
              }
              func_0x0412a280(lVar10,0x80);
            }
          }
        }
      }
    }
LAB_0b9f7f13:
    plVar16 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_60 + 1;
      lVar10 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        func_0x0412c2d0(plVar16);
      }
    }
    plVar16 = plStack_40;
    plVar11 = plStack_50;
    if (pplStack_78 == &plStack_98) {
      lVar10 = 0x20;
LAB_0b9f7f8b:
      (**(code **)((long)*pplStack_78 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (pplStack_78 != (long **)0x0) goto LAB_0b9f7f8b;
    }
    if (pcStack_120 != (code *)0x0) {
      (*pcStack_120)(&plStack_138);
    }
    plVar18 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_b0 + 1;
      lVar10 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        func_0x0412c2d0(plVar18);
      }
    }
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar12 = _UNK_011fc991;
  uStack_168 = SUB81(puVar13,0);
  uStack_167 = (undefined5)((ulong)puVar13 >> 8);
  uStack_162 = (undefined1)((ulong)puVar13 >> 0x30);
  uStack_161 = (undefined1)((ulong)puVar13 >> 0x38);
  uStack_178._0_4_ = 0x21;
  uStack_178._4_4_ = 0;
  uStack_170 = 0x1f;
  uStack_16c = 0;
  uStack_16b = 0;
  uStack_16a = 0;
  *(ulong *)((long)puVar13 + 0xf) = CONCAT71(_UNK_011fc98a,DAT_011fc989);
  *(undefined8 *)((long)puVar13 + 0x17) = uVar12;
  uVar6 = _UNK_011fc986;
  uVar5 = _UNK_011fc982;
  uVar4 = _UNK_011fc97e;
  *puVar13 = _DAT_011fc97a;
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  puVar13[3] = uVar6;
  *(undefined1 *)((long)puVar13 + 0x1f) = 0;
  lVar10 = func_0x067a7670(plVar11,&uStack_178);
  func_0x0412a280(puVar13,0x20);
  if (lVar10 != 0) {
    uVar12 = (**(code **)(*plVar16 + 0x30))(plVar16);
    plVar17 = (long *)(lVar10 + 0x28);
    plStack_138 = plVar17;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar18 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    plVar18[1] = 0;
    plVar18[2] = 0;
    *plVar18 = (long)&UNK_0f2f6238;
    plVar18[3] = (long)plVar17;
    plVar14 = plVar17;
    if (_DAT_0f54fd90 == (long *)0x0) {
      plStack_130 = plVar18;
      func_0x048b0de0(&uStack_f8,&plStack_98);
      _DAT_0f54fd90 = (undefined4)uStack_f8;
      DAT_0f54fd90_4 = uStack_f8._4_4_;
      uVar4 = (undefined4)uStack_f0;
      uVar5 = uStack_f0._4_4_;
      uStack_f8 = (long *)0x0;
      uStack_f0 = (long *)0x0;
      plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar4;
      uRam000000000f54fd9c = uVar5;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar18 = plVar11 + 1;
        lVar10 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
      }
      plVar11 = uStack_f0;
      if (uStack_f0 != (long *)0x0) {
        LOCK();
        plVar18 = uStack_f0 + 1;
        lVar10 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
          func_0x0412c2d0(plVar11);
        }
      }
      plVar14 = plStack_138;
      plVar11 = plStack_50;
      plVar18 = plStack_130;
    }
    uStack_168 = 0x80;
    uStack_167 = 0xb7377;
    uStack_162 = 0;
    uStack_161 = 0;
    uStack_158 = 0x26e89d95;
    pcStack_160 = (code *)0x0;
    uStack_154 = 2;
    uStack_148 = 0;
    puStack_140 = &UNK_0b7376e0;
    uStack_f8 = (long *)&UNK_0f2f6288;
    plStack_138 = (long *)0x0;
    plStack_130 = (long *)0x0;
    plStack_150 = _DAT_0f54fd90;
    pplStack_d8 = (long **)&uStack_f8;
    plStack_98 = plVar14;
    plStack_90 = plVar18;
    uStack_178 = plVar17;
    func_0x0b737030(uVar12,&uStack_178,&uStack_f8,&plStack_98);
    plVar18 = plStack_90;
    if (plStack_90 == (long *)0x0) {
LAB_0b9f8205:
      if (pplStack_d8 != (long **)&uStack_f8) goto LAB_0b9f8212;
LAB_0b9f8246:
      lVar10 = 0x20;
LAB_0b9f824b:
      (**(code **)((long)*pplStack_d8 + lVar10))();
    }
    else {
      LOCK();
      plVar17 = plStack_90 + 1;
      lVar10 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar10 != 0) goto LAB_0b9f8205;
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      func_0x0412c2d0(plVar18);
      if (pplStack_d8 == (long **)&uStack_f8) goto LAB_0b9f8246;
LAB_0b9f8212:
      lVar10 = 0x28;
      if (pplStack_d8 != (long **)0x0) goto LAB_0b9f824b;
    }
    if (pcStack_160 != (code *)0x0) {
      (*pcStack_160)(&uStack_178);
    }
    plVar18 = plStack_130;
    if (plStack_130 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_130 + 1;
      lVar10 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        func_0x0412c2d0(plVar18);
      }
    }
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar12 = _UNK_012e633b;
  uStack_168 = SUB81(puVar13,0);
  uStack_167 = (undefined5)((ulong)puVar13 >> 8);
  uStack_162 = (undefined1)((ulong)puVar13 >> 0x30);
  uStack_161 = (undefined1)((ulong)puVar13 >> 0x38);
  uStack_178._0_4_ = 0x21;
  uStack_178._4_4_ = 0;
  uStack_170 = 0x19;
  uStack_16c = 0;
  uStack_16b = 0;
  uStack_16a = 0;
  *(ulong *)((long)puVar13 + 9) = CONCAT17(UNK_012e633a,CONCAT43(_UNK_012e6336,_DAT_012e6333));
  *(undefined8 *)((long)puVar13 + 0x11) = uVar12;
  uVar6 = _UNK_012e6336;
  uVar5 = _UNK_012e6332;
  uVar4 = _UNK_012e632e;
  *puVar13 = _DAT_012e632a;
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  puVar13[3] = uVar6;
  *(undefined1 *)((long)puVar13 + 0x19) = 0;
  lVar10 = func_0x067a7670(plVar11,&uStack_178);
  func_0x0412a280(puVar13,0x20);
  if (lVar10 != 0) {
    uVar12 = (**(code **)(*plVar16 + 0x30))(plVar16);
    func_0x0b6f9390(uVar12,lVar10 + 0x48);
  }
  uStack_178._0_4_ = CONCAT31((int3)_DAT_011ac869,0x2a);
  uStack_178._5_3_ = (undefined3)_UNK_011ac86d;
  uStack_178._4_4_ = CONCAT31(uStack_178._5_3_,(char)((uint)_DAT_011ac869 >> 0x18));
  uStack_170._1_3_ = (undefined3)_UNK_011ac871;
  uStack_170 = CONCAT31(uStack_170._1_3_,(char)((uint)_UNK_011ac86d >> 0x18));
  uStack_16c = (undefined1)((uint)_UNK_011ac871 >> 0x18);
  uStack_16b = (undefined1)_UNK_011ac875;
  uStack_16a = 0x5342;
  uStack_168 = 0x65;
  uStack_167 = 0x6563697672;
  uStack_162 = 0;
  lVar10 = func_0x067a7670(plVar11,&uStack_178);
  if (lVar10 != 0) {
    plVar11 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16);
    plVar18 = (long *)(lVar10 + 0x50);
    plStack_b8 = plVar18;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar16 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = (long)&UNK_0f2f6308;
    plVar16[3] = (long)plVar18;
    plVar17 = plVar18;
    if (_DAT_0f54fd90 == (long *)0x0) {
      plStack_b0 = plVar16;
      func_0x048b0de0(&uStack_178,&uStack_f8);
      uVar7 = uStack_170;
      uVar6 = uStack_178._4_4_;
      uVar5 = (undefined4)uStack_178;
      uVar4 = CONCAT22(uStack_16a,CONCAT11(uStack_16b,uStack_16c));
      uStack_178._0_4_ = 0;
      uStack_178._4_4_ = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_16b = 0;
      uStack_16a = 0;
      plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd90 = uVar5;
      DAT_0f54fd90_4 = uVar6;
      _DAT_0f54fd98 = uVar7;
      uRam000000000f54fd9c = uVar4;
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      plVar16 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      plVar17 = plStack_b8;
      plVar16 = plStack_b0;
    }
    puStack_128 = &UNK_0ba69bd0;
    uStack_118 = 0xcbed646f;
    pcStack_120 = (code *)0x0;
    uStack_114 = 2;
    lStack_108 = 0;
    pcStack_100 = (code *)&UNK_0ba69a70;
    plStack_98 = (long *)&UNK_0f2f6358;
    pplStack_78 = &plStack_98;
    plStack_b8 = (long *)0x0;
    plStack_b0 = (long *)0x0;
    plStack_138 = plVar18;
    plStack_110 = _DAT_0f54fd90;
    plStack_68 = plVar17;
    plStack_60 = plVar16;
    auVar19 = func_0x0b742d20();
    plVar18 = auVar19._8_8_;
    plVar16 = auVar19._0_8_;
    uStack_178._0_4_ = 0;
    uStack_178._4_4_ = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_16b = 0;
    uStack_16a = 0;
    func_0x048b1dc0(&uStack_178);
    plStack_58 = plVar11;
    if (plVar18 == (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)))
       ) {
      if (plVar16 == (long *)0x0) {
        lVar10 = func_0x048aead0(plVar18);
        iVar9 = *(int *)(lVar10 + 8);
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        if (lVar10 != 0) goto LAB_0b9f8525;
LAB_0b9f8571:
        lVar10 = func_0x048aead0(CONCAT26(uStack_16a,
                                          CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170))));
        if (iVar9 != *(int *)(lVar10 + 8)) goto LAB_0b9f8584;
      }
      else {
        iVar9 = (int)plVar16[1];
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        if (lVar10 == 0) goto LAB_0b9f8571;
LAB_0b9f8525:
        if (iVar9 != *(int *)(lVar10 + 8)) goto LAB_0b9f8584;
      }
    }
    else {
LAB_0b9f8584:
      plVar11 = plStack_110;
      if (pcStack_100 == (code *)0x0) {
        uStack_178._0_4_ = 0;
        uStack_178._4_4_ = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_16b = 0;
        uStack_16a = 0;
        func_0x048b1dc0(&uStack_178);
        plVar11 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
        lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        if (lVar10 != 0) goto LAB_0b9f85c2;
LAB_0b9f862c:
        lVar10 = func_0x048aead0(plVar11);
        bVar1 = *(byte *)(lVar10 + 0x19);
        plVar11 = plStack_110;
        lVar10 = lStack_108;
      }
      else {
        lVar10 = lStack_108;
        if (lStack_108 == 0) {
          (*pcStack_100)(0,&plStack_138,0);
          lVar10 = lStack_108;
          if (lStack_108 == 0) goto LAB_0b9f862c;
        }
LAB_0b9f85c2:
        bVar1 = *(byte *)(lVar10 + 0x19);
        plVar11 = plStack_110;
        lVar10 = lStack_108;
      }
      plStack_110 = plVar11;
      lStack_108 = lVar10;
      if ((bVar1 & 1) == 0) {
        if (pcStack_100 == (code *)0x0) {
          uStack_178._0_4_ = 0;
          uStack_178._4_4_ = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_16b = 0;
          uStack_16a = 0;
          func_0x048b1dc0(&uStack_178);
          plVar11 = (long *)CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT14(uStack_16c,uStack_170))
                                    );
          lVar10 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
joined_r0x0b9f865a:
          if (lVar10 != 0) goto LAB_0b9f85fe;
          lVar10 = func_0x048aead0(plVar11);
          bVar1 = *(byte *)(lVar10 + 0x19);
        }
        else {
          if (lVar10 == 0) {
            (*pcStack_100)(0,&plStack_138,0);
            lVar10 = lStack_108;
            goto joined_r0x0b9f865a;
          }
LAB_0b9f85fe:
          bVar1 = *(byte *)(lVar10 + 0x19);
        }
        if ((bVar1 & 2) == 0) goto LAB_0b9f87b6;
      }
      if (pplStack_78 != (long **)0x0) {
        func_0x049e8590(&uStack_178,&plStack_138);
        if (pplStack_78 == (long **)0x0) {
LAB_0b9f9f1b:
          uVar12 = func_0x04891200();
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          uVar12 = FUN_04882e20(uVar12);
          func_0x049e8660(&lStack_180);
          func_0x049e8470(&plStack_68);
          lVar10 = 0x20;
          if ((pplStack_78 == &plStack_98) || (lVar10 = 0x28, pplStack_78 != (long **)0x0)) {
            (**(code **)((long)*pplStack_78 + lVar10))();
          }
          if (pcStack_120 != (code *)0x0) {
            (*pcStack_120)(&plStack_138);
          }
          func_0x049e8470(&plStack_b8);
          (**(code **)(*plStack_40 + 8))();
          _Unwind_Resume(uVar12);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar8 = (*(code *)(*pplStack_78)[6])(pplStack_78,&uStack_178);
        if (pcStack_160 != (code *)0x0) {
          (*pcStack_160)(&uStack_178);
        }
        if (cVar8 == '\0') goto LAB_0b9f87b6;
      }
      puStack_e8 = &UNK_0488e0b0;
      pcStack_e0 = (code *)0x0;
      pplStack_d8 = (long **)CONCAT35(pplStack_d8._5_3_,0x48b5725f);
      uStack_f8 = (long *)0x0;
      plStack_d0 = plStack_110;
      plStack_c8 = (long *)0x0;
      pcStack_c0 = (code *)0x0;
      if (pcStack_100 == (code *)0x0) {
LAB_0b9f876e:
        plStack_a8 = (long *)0x0;
        plStack_a0 = (long *)0x0;
        func_0x048b1dc0(&plStack_a8);
        plVar17 = plStack_a8;
        plVar11 = plStack_a0;
      }
      else {
        (*pcStack_100)(0x100,&plStack_138,&uStack_f8);
        plVar11 = plStack_d0;
        if (pcStack_c0 == (code *)0x0) goto LAB_0b9f876e;
        plVar17 = plStack_c8;
        if (plStack_c8 == (long *)0x0) {
          (*pcStack_c0)(0,&uStack_f8,0);
          plVar17 = plStack_c8;
        }
      }
      if (pcStack_e0 != (code *)0x0) {
        (*pcStack_e0)(&uStack_f8);
      }
      if (plVar11 == plVar18) {
        if (plVar17 == (long *)0x0) {
          plVar17 = (long *)func_0x048aead0(plVar11);
        }
        lVar10 = plVar17[1];
        if (plVar16 == (long *)0x0) {
          lVar15 = func_0x048aead0(plVar18);
          if ((int)lVar10 == *(int *)(lVar15 + 8)) {
            plVar16 = (long *)func_0x048aead0(plVar18);
            goto LAB_0b9f92ac;
          }
        }
        else if ((int)lVar10 == (int)plVar16[1]) {
LAB_0b9f92ac:
          plVar11 = plStack_58;
          uVar2 = *(uint *)(*plVar16 + 4);
          plVar17 = plStack_58 + 1;
          plVar16 = (long *)plStack_58[1];
          plVar18 = plVar17;
          if (plVar16 != (long *)0x0) {
            do {
              if (*(uint *)(plVar16 + 4) >= uVar2) {
                plVar18 = plVar16;
              }
              plVar16 = (long *)plVar16[*(uint *)(plVar16 + 4) < uVar2];
            } while (plVar16 != (long *)0x0);
            if ((plVar18 != plVar17) && (*(uint *)(plVar18 + 4) <= uVar2)) goto LAB_0b9f87b6;
          }
          lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
          if (lVar10 == 0) {
            FUN_0eec74c0(0x80,0);
          }
          if (pplStack_78 == (long **)0x0) {
            pplStack_d8 = (long **)0x0;
          }
          else if (pplStack_78 == &plStack_98) {
            pplStack_d8 = (long **)&uStack_f8;
            (*(code *)(*pplStack_78)[3])();
          }
          else {
            pplStack_d8 = pplStack_78;
            pplStack_78 = (long **)0x0;
          }
          plStack_a8 = plStack_68;
          plStack_a0 = plStack_60;
          plStack_68 = (long *)0x0;
          plStack_60 = (long *)0x0;
          func_0x049e8ab0(lVar10,&plStack_138,&uStack_f8,&plStack_a8);
          plVar16 = plStack_a0;
          lStack_180 = lVar10;
          if (plStack_a0 != (long *)0x0) {
            LOCK();
            plVar18 = plStack_a0 + 1;
            lVar10 = *plVar18;
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              func_0x0412c2d0(plVar16);
            }
          }
          if (pplStack_d8 == (long **)&uStack_f8) {
            lVar10 = 0x20;
LAB_0b9f9944:
            (**(code **)((long)*pplStack_d8 + lVar10))();
          }
          else {
            lVar10 = 0x28;
            if (pplStack_d8 != (long **)0x0) goto LAB_0b9f9944;
          }
          plVar16 = (long *)*plVar17;
          while (plVar18 = plVar17, plVar16 != (long *)0x0) {
            while (plVar17 = plVar16, *(uint *)(plVar17 + 4) <= uVar2) {
              if (uVar2 <= *(uint *)(plVar17 + 4)) goto LAB_0b9f9bd5;
              plVar16 = (long *)plVar17[1];
              if ((long *)plVar17[1] == (long *)0x0) {
                plVar18 = plVar17 + 1;
                goto LAB_0b9f9988;
              }
            }
            plVar16 = (long *)*plVar17;
          }
LAB_0b9f9988:
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
          if (plVar16 == (long *)0x0) {
            FUN_0eec74c0(0x30,0);
          }
          *(uint *)(plVar16 + 4) = uVar2;
          plVar16[5] = 0;
          *plVar16 = 0;
          plVar16[1] = 0;
          plVar16[2] = (long)plVar17;
          *plVar18 = (long)plVar16;
          if (*(long *)*plVar11 != 0) {
            *plVar11 = *(long *)*plVar11;
          }
          func_0x048bed00(plVar11[1],plVar16);
          plVar11[2] = plVar11[2] + 1;
          plVar17 = plVar16;
LAB_0b9f9bd5:
          lVar15 = lStack_180;
          lStack_180 = 0;
          lVar10 = plVar17[5];
          plVar17[5] = lVar15;
          if (lVar10 != 0) {
            plVar16 = *(long **)(lVar10 + 0x78);
            if (plVar16 != (long *)0x0) {
              LOCK();
              plVar11 = plVar16 + 1;
              lVar15 = *plVar11;
              *plVar11 = *plVar11 + -1;
              UNLOCK();
              if (lVar15 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
                func_0x0412c2d0(plVar16);
              }
            }
            plVar16 = *(long **)(lVar10 + 0x60);
            if (plVar16 == (long *)(lVar10 + 0x40)) {
              lVar15 = 0x20;
LAB_0b9f9c3e:
              (**(code **)(*plVar16 + lVar15))();
            }
            else {
              lVar15 = 0x28;
              if (plVar16 != (long *)0x0) goto LAB_0b9f9c3e;
            }
            if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
              (**(code **)(lVar10 + 0x18))(lVar10);
            }
            func_0x0412a280(lVar10,0x80);
            lVar10 = lStack_180;
            lStack_180 = 0;
            if (lVar10 != 0) {
              plVar16 = *(long **)(lVar10 + 0x78);
              if (plVar16 != (long *)0x0) {
                LOCK();
                plVar11 = plVar16 + 1;
                lVar15 = *plVar11;
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (lVar15 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                  func_0x0412c2d0(plVar16);
                }
              }
              plVar16 = *(long **)(lVar10 + 0x60);
              if (plVar16 == (long *)(lVar10 + 0x40)) {
                lVar15 = 0x20;
LAB_0b9f9d16:
                (**(code **)(*plVar16 + lVar15))();
              }
              else {
                lVar15 = 0x28;
                if (plVar16 != (long *)0x0) goto LAB_0b9f9d16;
              }
              if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
                (**(code **)(lVar10 + 0x18))(lVar10);
              }
              func_0x0412a280(lVar10,0x80);
            }
          }
        }
      }
    }
LAB_0b9f87b6:
    plVar16 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_60 + 1;
      lVar10 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        func_0x0412c2d0(plVar16);
      }
    }
    plVar16 = plStack_40;
    plVar11 = plStack_50;
    if (pplStack_78 == &plStack_98) {
      lVar10 = 0x20;
LAB_0b9f882e:
      (**(code **)((long)*pplStack_78 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (pplStack_78 != (long **)0x0) goto LAB_0b9f882e;
    }
    if (pcStack_120 != (code *)0x0) {
      (*pcStack_120)(&plStack_138);
    }
    plVar18 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_b0 + 1;
      lVar10 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        func_0x0412c2d0(plVar18);
      }
    }
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uVar12 = _UNK_014afd9a;
  uStack_168 = SUB81(puVar13,0);
  uStack_167 = (undefined5)((ulong)puVar13 >> 8);
  uStack_162 = (undefined1)((ulong)puVar13 >> 0x30);
  uStack_161 = (undefined1)((ulong)puVar13 >> 0x38);
  uStack_178._0_4_ = 0x29;
  uStack_178._4_4_ = 0;
  uStack_170 = 0x25;
  uStack_16c = 0;
  uStack_16b = 0;
  uStack_16a = 0;
  *(undefined8 *)(puVar13 + 4) = _DAT_014afd92;
  *(undefined8 *)(puVar13 + 6) = uVar12;
  uVar6 = _UNK_014afd8e;
  uVar5 = _UNK_014afd8a;
  uVar4 = _UNK_014afd86;
  *puVar13 = _DAT_014afd82;
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  puVar13[3] = uVar6;
  *(undefined8 *)((long)puVar13 + 0x1d) = 0x6563697672655377;
  *(undefined1 *)((long)puVar13 + 0x25) = 0;
  lVar10 = func_0x067a7670(plVar11,&uStack_178);
  func_0x0412a280(puVar13,0x28);
  if (lVar10 != 0) {
    uVar12 = (**(code **)(*plVar16 + 0x30))(plVar16);
    plVar18 = (long *)(lVar10 + 0x28);
    plStack_138 = plVar18;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar11 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0f2f63d8;
    plVar11[3] = (long)plVar18;
    plVar17 = plVar18;
    if (_DAT_0f54fd90 == (long *)0x0) {
      plStack_130 = plVar11;
      func_0x048b0de0(&uStack_f8,&plStack_98);
      _DAT_0f54fd90 = (undefined4)uStack_f8;
      DAT_0f54fd90_4 = uStack_f8._4_4_;
      uVar4 = (undefined4)uStack_f0;
      uVar5 = uStack_f0._4_4_;
      uStack_f8 = (long *)0x0;
      uStack_f0 = (long *)0x0;
      plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar4;
      uRam000000000f54fd9c = uVar5;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar17 = plVar11 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
      }
      plVar11 = uStack_f0;
      if (uStack_f0 != (long *)0x0) {
        LOCK();
        plVar17 = uStack_f0 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
          func_0x0412c2d0(plVar11);
        }
      }
      plVar17 = plStack_138;
      plVar11 = plStack_130;
    }
    uStack_168 = 0x60;
    uStack_167 = 0x63379;
    uStack_162 = 0;
    uStack_161 = 0;
    uStack_158 = 0x28fe92ce;
    pcStack_160 = (code *)0x0;
    uStack_154 = 2;
    uStack_148 = 0;
    puStack_140 = &UNK_063378c0;
    uStack_f8 = (long *)&UNK_0f2f6428;
    plStack_138 = (long *)0x0;
    plStack_130 = (long *)0x0;
    plStack_150 = _DAT_0f54fd90;
    pplStack_d8 = (long **)&uStack_f8;
    plStack_98 = plVar17;
    plStack_90 = plVar11;
    uStack_178 = plVar18;
    func_0x06336db0(uVar12,&uStack_178,&uStack_f8,&plStack_98);
    plVar11 = plStack_90;
    if (plStack_90 == (long *)0x0) {
LAB_0b9f8aae:
      if (pplStack_d8 != (long **)&uStack_f8) goto LAB_0b9f8abb;
LAB_0b9f8aef:
      lVar10 = 0x20;
LAB_0b9f8af4:
      (**(code **)((long)*pplStack_d8 + lVar10))();
    }
    else {
      LOCK();
      plVar18 = plStack_90 + 1;
      lVar10 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar10 != 0) goto LAB_0b9f8aae;
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      func_0x0412c2d0(plVar11);
      if (pplStack_d8 == (long **)&uStack_f8) goto LAB_0b9f8aef;
LAB_0b9f8abb:
      lVar10 = 0x28;
      if (pplStack_d8 != (long **)0x0) goto LAB_0b9f8af4;
    }
    if (pcStack_160 != (code *)0x0) {
      (*pcStack_160)(&uStack_178);
    }
    plVar11 = plStack_130;
    if (plStack_130 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_130 + 1;
      lVar10 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        func_0x0412c2d0(plVar11);
      }
    }
  }
  uVar12 = (**(code **)(*plStack_48 + 0x10))();
  plVar11 = (long *)func_0x0b950610(uVar12);
  if (plVar11 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar16 + 0x30))(plVar16);
    plStack_138 = plVar11;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar18 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    plVar18[1] = 0;
    plVar18[2] = 0;
    *plVar18 = (long)&UNK_0f2f64a8;
    plVar18[3] = (long)plVar11;
    plVar17 = plVar11;
    if (_DAT_0f54fd90 == (long *)0x0) {
      plStack_130 = plVar18;
      func_0x048b0de0(&uStack_f8,&plStack_98);
      _DAT_0f54fd90 = (undefined4)uStack_f8;
      DAT_0f54fd90_4 = uStack_f8._4_4_;
      uVar4 = (undefined4)uStack_f0;
      uVar5 = uStack_f0._4_4_;
      uStack_f8 = (long *)0x0;
      uStack_f0 = (long *)0x0;
      plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar4;
      uRam000000000f54fd9c = uVar5;
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar17 = plVar18 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          func_0x0412c2d0(plVar18);
        }
      }
      plVar18 = uStack_f0;
      if (uStack_f0 != (long *)0x0) {
        LOCK();
        plVar17 = uStack_f0 + 1;
        lVar10 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
          func_0x0412c2d0(plVar18);
        }
      }
      plVar17 = plStack_138;
      plVar18 = plStack_130;
    }
    uStack_168 = 0x80;
    uStack_167 = 0xba6a6;
    uStack_162 = 0;
    uStack_161 = 0;
    uStack_158 = 0x925ef17f;
    pcStack_160 = (code *)0x0;
    uStack_154 = 2;
    uStack_178._0_4_ = SUB84(plVar11,0);
    uStack_178._4_4_ = (undefined4)((ulong)plVar11 >> 0x20);
    uStack_148 = 0;
    puStack_140 = &UNK_0ba6a520;
    uStack_f8 = (long *)&UNK_0f2f64f8;
    plStack_138 = (long *)0x0;
    plStack_130 = (long *)0x0;
    plStack_150 = _DAT_0f54fd90;
    pplStack_d8 = (long **)&uStack_f8;
    plStack_98 = plVar17;
    plStack_90 = plVar18;
    func_0x049e7e20(uVar12,&uStack_178,&uStack_f8,&plStack_98);
    plVar11 = plStack_90;
    if (plStack_90 == (long *)0x0) {
LAB_0b9f8d06:
      if (pplStack_d8 != (long **)&uStack_f8) goto LAB_0b9f8d13;
LAB_0b9f8d47:
      lVar10 = 0x20;
LAB_0b9f8d4c:
      (**(code **)((long)*pplStack_d8 + lVar10))();
    }
    else {
      LOCK();
      plVar18 = plStack_90 + 1;
      lVar10 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar10 != 0) goto LAB_0b9f8d06;
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      func_0x0412c2d0(plVar11);
      if (pplStack_d8 == (long **)&uStack_f8) goto LAB_0b9f8d47;
LAB_0b9f8d13:
      lVar10 = 0x28;
      if (pplStack_d8 != (long **)0x0) goto LAB_0b9f8d4c;
    }
    if (pcStack_160 != (code *)0x0) {
      (*pcStack_160)(&uStack_178);
    }
    plVar11 = plStack_130;
    uStack_178 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    if (plStack_130 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_130 + 1;
      lVar10 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      uStack_178 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
      if (lVar10 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        func_0x0412c2d0(plVar11);
      }
    }
  }
  uVar12 = (**(code **)(*plStack_48 + 0x10))();
  plVar11 = (long *)func_0x0b955110(uVar12);
  if (plVar11 == (long *)0x0) goto LAB_0b9f8fea;
  uVar12 = (**(code **)(*plVar16 + 0x30))(plVar16);
  plStack_138 = plVar11;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f2f6578;
  plVar18[3] = (long)plVar11;
  plVar17 = plVar11;
  if (_DAT_0f54fd90 == (long *)0x0) {
    plStack_130 = plVar18;
    func_0x048b0de0(&uStack_f8,&plStack_98);
    _DAT_0f54fd90 = (undefined4)uStack_f8;
    DAT_0f54fd90_4 = uStack_f8._4_4_;
    uVar4 = (undefined4)uStack_f0;
    uVar5 = uStack_f0._4_4_;
    uStack_f8 = (long *)0x0;
    uStack_f0 = (long *)0x0;
    plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar4;
    uRam000000000f54fd9c = uVar5;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar17 = plVar18 + 1;
      lVar10 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = uStack_f0;
    if (uStack_f0 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_f0 + 1;
      lVar10 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar17 = plStack_138;
    plVar18 = plStack_130;
  }
  uStack_168 = 0x70;
  uStack_167 = 0xba6b4;
  uStack_162 = 0;
  uStack_161 = 0;
  uStack_158 = 0x7cac68fd;
  pcStack_160 = (code *)0x0;
  uStack_154 = 2;
  uStack_178._0_4_ = SUB84(plVar11,0);
  uStack_178._4_4_ = (undefined4)((ulong)plVar11 >> 0x20);
  uStack_148 = 0;
  puStack_140 = &UNK_0ba6b310;
  uStack_f8 = (long *)&UNK_0f2f65c8;
  plStack_138 = (long *)0x0;
  plStack_130 = (long *)0x0;
  plStack_150 = _DAT_0f54fd90;
  pplStack_d8 = (long **)&uStack_f8;
  plStack_98 = plVar17;
  plStack_90 = plVar18;
  func_0x0ba6ac60(uVar12,&uStack_178,&uStack_f8,&plStack_98);
  plVar11 = plStack_90;
  if (plStack_90 == (long *)0x0) {
LAB_0b9f8f60:
    if (pplStack_d8 != (long **)&uStack_f8) goto LAB_0b9f8f6d;
LAB_0b9f8fa1:
    lVar10 = 0x20;
LAB_0b9f8fa6:
    (**(code **)((long)*pplStack_d8 + lVar10))();
  }
  else {
    LOCK();
    plVar18 = plStack_90 + 1;
    lVar10 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar10 != 0) goto LAB_0b9f8f60;
    (**(code **)(*plStack_90 + 0x10))(plStack_90);
    func_0x0412c2d0(plVar11);
    if (pplStack_d8 == (long **)&uStack_f8) goto LAB_0b9f8fa1;
LAB_0b9f8f6d:
    lVar10 = 0x28;
    if (pplStack_d8 != (long **)0x0) goto LAB_0b9f8fa6;
  }
  if (pcStack_160 != (code *)0x0) {
    (*pcStack_160)(&uStack_178);
  }
  plVar11 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_130 + 1;
    lVar10 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      func_0x0412c2d0(plVar11);
    }
  }
LAB_0b9f8fea:
  *puStack_38 = plVar16;
  return;
}



/* ---- referenced strings ----
 * 0x11ac869  EditorPrefabDBService
 * 0x11fc97a  EditorStructureDBManagerService
 * 0x11fc989  DBManagerService
 * 0x1266ac7  EditorPlaytestManagerService
 * 0x1266ad3  stManagerService
 * 0x12e632a  StructureDataCacheService
 * 0x12e6333  DataCacheService
 * 0x14218cb  EditorExportProjectManagerService
 * 0x14218db  ectManagerService
 * 0x14afd82  Editor::Services::EditorJigsawService
 * 0x14afd92  ::EditorJigsawService
 */
