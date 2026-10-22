/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeaabf20 (ELF vaddr 0xe9abf20)
 * Label: caller-of-callee
 * Body:  [[0eaabf20, 0eaac87a] [0eaac880, 0eaad4f2] [0eaae1d0, 0eaae3b2]]
 * Ghidra: FUN_0eaabf20
 */


/* WARNING: Possible PIC construction at 0x0eaac1af: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eaabf20(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [8];
  long *plVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  code *pcVar17;
  code *pcVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  long *unaff_RBX;
  undefined8 ******ppppppuVar21;
  byte bVar22;
  uint uVar23;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar24;
  long lVar25;
  undefined *puVar26;
  byte *pbVar27;
  undefined1 uVar28;
  long *unaff_R12;
  long *unaff_R13;
  undefined8 *unaff_R14;
  ulong unaff_R15;
  bool bVar29;
  undefined1 auStack_208 [88];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  char cStack_168;
  uint *puStack_158;
  long *plStack_150;
  undefined1 auStack_148 [8];
  long *plStack_140;
  code *pcStack_138;
  code *pcStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  char cStack_108;
  undefined *puStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *******pppppppuStack_a8;
  ulong uStack_a0;
  code *pcStack_90;
  int iStack_88;
  char cStack_84;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  uint uStack_60;
  long *plStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  pcVar17 = (code *)param_3[7];
  uVar15 = unaff_R15;
  if (pcVar17 == (code *)0x0) {
    if ((code *)param_3[3] != (code *)0x0) {
      uStack_1b0 = 0xeaabf6d;
      (*(code *)param_3[3])(param_3);
    }
    param_3[2] = (long)&UNK_0eaaa690;
    *(undefined4 *)(param_3 + 4) = 0x10c77c12;
    param_3[3] = (long)&UNK_0eaaa910;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0xeaabfaa;
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
    if (lVar8 == 0) {
      uStack_1b0 = 0xeaad42a;
      func_0x0eec74c0(0xb0,0);
    }
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    *(undefined8 *)(lVar8 + 0x90) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x98) = 0;
    *(undefined8 *)(lVar8 + 0xa0) = 0;
    *(undefined8 *)(lVar8 + 8) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined2 *)(lVar8 + 0x20) = 0xffff;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined2 *)(lVar8 + 0x48) = 0xffff;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined2 *)(lVar8 + 0x70) = 0xffff;
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    *(undefined8 *)(lVar8 + 0x90) = 0;
    *(undefined2 *)(lVar8 + 0x98) = 0xffff;
    *(undefined4 *)(lVar8 + 0xa8) = 0;
    *param_3 = lVar8;
    puVar26 = (undefined *)param_3[7];
    pcVar17 = (code *)&UNK_0eaaa5b0;
    param_3[7] = (long)&UNK_0eaaa5b0;
    if (puVar26 == &UNK_0eaaa5b0) {
      lVar8 = param_3[6];
      param_3[6] = lVar8;
      if (lVar8 != 0) goto LAB_0eaac086;
    }
    else {
      param_3[6] = 0;
    }
LAB_0eaac070:
    uVar15 = param_3[5];
    uStack_1b0 = 0xeaac07e;
    (*pcVar17)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0eaac086;
    uStack_1b0 = 0xeaac0b6;
    lVar8 = func_0x048aead0(uVar15);
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    if (lVar8 == 0) goto LAB_0eaac070;
LAB_0eaac086:
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_0eaae1d0;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0xeaac1d8;
    func_0x048b1dc0(&uStack_1a8);
    plVar4 = uStack_1a8;
    uVar15 = uStack_1a0;
joined_r0x0eaac1e3:
    if (plVar4 == (long *)0x0) {
      uStack_1b0 = 0xeaac1f1;
      plVar4 = (long *)func_0x048aead0(uVar15);
    }
  }
  else {
    plVar4 = (long *)param_3[6];
    if (plVar4 == (long *)0x0) {
      uVar15 = param_3[5];
      uStack_1b0 = 0xeaac0e0;
      (*(code *)param_3[7])(0,param_3,0);
      plVar4 = (long *)param_3[6];
      goto joined_r0x0eaac1e3;
    }
  }
  unaff_R14 = (undefined8 *)plVar4[0xd];
  uStack_1b0 = 0xeaac0fa;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0xeaac1b4;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = uVar15;
SUB_0eaae1d0:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    plVar4 = (long *)*param_3;
    plVar14 = plVar4;
    if (cVar2 == '\x02') {
      plVar14 = param_3;
    }
    if (plVar14 == (long *)0x0 || (int)param_3[4] != 0x10c77c12) {
      lVar8 = param_3[5];
      lVar25 = param_3[6];
      if (lVar25 == 0) {
        pcVar17 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaae22f;
        (*pcVar17)(0,param_3,0);
        lVar25 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        plVar4 = (long *)*param_3;
      }
      if (cVar2 == '\x02') {
        plVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaae251;
      plVar14 = (long *)func_0x0488e200(lVar8,lVar25,0x10c77c12,plVar4);
    }
    lVar8 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaae261;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x48),lVar8);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar17 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaae27e;
    uVar15 = (*pcVar17)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar15 >> 0x20 & 1) == 0) {
      lVar8 = param_3[5];
      uVar23 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar23;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xeaae2b5;
      cVar2 = func_0x0eaae3e0(param_2,lVar8,plVar14,param_4,param_5,2);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      uVar28 = 2;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar23;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
    }
    else {
      if ((uVar15 & 0xfffffffe) != 0) {
        lVar8 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaae321;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x50));
        if ((*(ulong *)((long)register0x00000020 + -0x50) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar17 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaae345;
        (*pcVar17)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x50) & 0xff00ffffffffffff) - 8);
        return;
      }
      lVar8 = param_3[5];
      uVar23 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x58) = uVar15;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar23;
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xeaae376;
      cVar2 = func_0x0eaae3e0(param_2,lVar8,plVar14,param_4,param_5,uVar15 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      uVar28 = *(undefined1 *)((long)register0x00000020 + -0x58);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar23;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xeaae3a4;
    func_0x0eaae680(param_2,lVar8,plVar14,param_4,param_5,uVar28);
    return;
  }
  puStack_b0 = unaff_R14;
  if (bVar22 != 1) {
    uStack_1a8 = (long *)0x120000012f2525;
    uStack_1b0 = 0xeaac221;
    func_0x0ed5ffe0(*param_5,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0xeaac244;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0xeaac139;
  plStack_150 = param_2;
  uStack_c8 = param_4;
  func_0x0ed6d600(&lStack_68,*param_5);
  lStack_48 = param_3[5];
  lStack_b8 = *param_5;
  ppppppuVar21 = (undefined8 ******)((long)puStack_b0 + 9);
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar15 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar15 = puStack_b0[2];
  }
  plStack_c0 = param_5;
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_f8 = (undefined *)((ulong)((uint)uVar15 & 0x7f) << 0x30);
  }
  else if (uVar15 < 0x80) {
    puStack_f8 = (undefined *)(uVar15 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar15 + 9;
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,lVar8 == 0);
    uStack_1b0 = 0xeaac27b;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar7 == (ulong *)0x0 && (char)puStack_158 == '\0') {
      uStack_1b0 = 0xeaad442;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar7 = uVar15;
    uStack_1b0 = 0xeaac2a6;
    func_0x0eee2f00(puVar7 + 1,ppppppuVar24,uVar15);
    *(undefined1 *)((long)puVar7 + uVar15 + 8) = 0;
    puStack_f8 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1b0 = 0xeaac2e5;
  puVar5 = (uint *)func_0x0ed6d180(lStack_b8,&puStack_f8,0);
  plVar4 = plStack_150;
  if (((ulong)puStack_f8 & 0x80000000000000) != 0) {
    uStack_1b0 = 0xeaac31c;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_f8 & 0xff00ffffffffffff) - 8);
  }
  puVar1 = puStack_b0;
  puStack_f8 = (undefined *)0x0;
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar15 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar15 = puStack_b0[2];
  }
  uStack_1b0 = 0xeaac355;
  cVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,ppppppuVar24,uVar15);
  if (cVar2 == '\0') {
    uStack_1b0 = 0xeaac473;
    puStack_158 = puVar5;
    _auStack_148 = (*(code *)*puVar1)(lStack_48);
    uStack_1b0 = 0xeaac499;
    func_0x0ed8bc80(&uStack_1a8,auStack_148,*(undefined1 *)(lStack_b8 + 0x2aa));
    uVar15 = (ulong)uStack_1a8 >> 1 & 0x7f;
    pcVar17 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      uVar15 = uStack_1a0;
      pcVar17 = pcStack_198;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (pcVar17 == (code *)0x0) {
      pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)uVar15 & 0x7f) << 0x30);
    }
    else {
      lVar8 = uVar15 + 9;
      uStack_1b0 = 0xeaac4e8;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
        uStack_1b0 = 0xeaad454;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = uVar15;
      uStack_1b0 = 0xeaac518;
      func_0x0eee2f00(puVar7 + 1,pcVar17,uVar15);
      *(undefined1 *)((long)puVar7 + uVar15 + 8) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar4 = plStack_150;
    puVar5 = puStack_158;
    uStack_1b0 = 0xeaac6a3;
    func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0xeaac6dc;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0xeaac700;
      thunk_FUN_0ee326a0(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_e8 = (long *)0x0;
    uStack_e0 = 0;
    pcStack_d8 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0xeaac374;
    (**(code **)(*plVar4 + 0x80))(auStack_148,plVar4,0x40);
    cStack_168 = cStack_108;
    if (cStack_108 == '\0') {
      uStack_1a8 = (long *)auStack_148;
      uStack_1a0 = (ulong)plStack_140;
      pcStack_198 = pcStack_138;
      pcStack_190 = pcStack_130;
      uStack_188 = lStack_128;
      lStack_180 = lStack_120;
      lStack_178 = lStack_118;
      puStack_170 = puStack_110;
      pppppppuStack_a8 = (undefined8 *******)puVar1[3];
      uStack_a0 = puVar1[2];
      if ((*(byte *)(puVar1 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar21;
        uStack_a0 = (ulong)(*(byte *)(puVar1 + 1) >> 1);
      }
      uStack_1b0 = 0xeaac5c7;
      puStack_158 = puVar5;
      FUN_0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar4 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar17 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar4 = plStack_140;
        pcVar17 = pcStack_138;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar17 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar4 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar4 + 9;
        uStack_1b0 = 0xeaac617;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
          uStack_1b0 = 0xeaad466;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = (ulong)plVar4;
        uStack_1b0 = 0xeaac647;
        func_0x0eee2f00(puVar7 + 1,pcVar17,plVar4);
        *(undefined1 *)((long)puVar7 + (long)plVar4 + 8U) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      plVar4 = plStack_150;
      puVar5 = puStack_158;
      uStack_1b0 = 0xeaac779;
      func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0xeaac7b2;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1b0 = 0xeaac7d8;
        thunk_FUN_0ee326a0(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_e8 = (long *)0x0;
      uStack_e0 = 0;
      pcStack_d8 = (code *)0x0;
    }
    else {
      pcStack_198 = pcStack_138;
      uStack_1a8 = (long *)auStack_148;
      uStack_1a0 = (ulong)plStack_140;
      plVar14 = (long *)(ulong)(byte)(auStack_148[0] >> 1);
      pcVar17 = (code *)((long)&uStack_1a8 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar14 = plStack_140;
        pcVar17 = pcStack_138;
      }
      bVar22 = auStack_148[0];
      if (plVar14 != (long *)0x0) {
        uStack_1b0 = 0xeaac3c0;
        plVar6 = (long *)func_0x0eee3290();
        pcVar18 = pcVar17;
        for (uVar15 = (ulong)plVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar18 = *(code *)(*plVar6 + (ulong)(byte)*pcVar18 * 4);
          pcVar18 = pcVar18 + 1;
        }
        if (3 < plVar14) {
          do {
            *pcVar18 = *(code *)(*plVar6 + (ulong)(byte)*pcVar18 * 4);
            pcVar18[1] = *(code *)(*plVar6 + (ulong)(byte)pcVar18[1] * 4);
            pcVar18[2] = *(code *)(*plVar6 + (ulong)(byte)pcVar18[2] * 4);
            pcVar18[3] = *(code *)(*plVar6 + (ulong)(byte)pcVar18[3] * 4);
            pcVar18 = pcVar18 + 4;
          } while (pcVar18 != pcVar17 + (long)plVar14);
        }
        bVar22 = (byte)uStack_1a8;
      }
      if ((bVar22 & 1) == 0) {
        pcStack_d8 = pcStack_198;
        uStack_e8 = uStack_1a8;
        uStack_e0 = uStack_1a0;
      }
      else {
        uStack_1b0 = 0xeaac733;
        FUN_0412e5e0(&uStack_e8,pcStack_198,uStack_1a0);
      }
    }
    lVar8 = lStack_180;
    if (cStack_168 == '\x01') {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0xeaac812;
        thunk_FUN_0ee326a0(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_180 != 0) {
        while (lVar8 != lStack_178) {
          uStack_1b0 = 0xeaac83c;
          func_0x048b3e80(lStack_178 + -0x40);
          lStack_178 = lStack_178 + -0x40;
        }
        lStack_178 = lVar8;
        uStack_1b0 = 0xeaac858;
        thunk_FUN_0ee326a0(lStack_180,(long)puStack_170 - lStack_180);
      }
      pcVar18 = pcStack_198;
      pcVar17 = pcStack_190;
      if (pcStack_198 != (code *)0x0) {
        for (; pcVar18 != pcVar17; pcVar17 = pcVar17 + -0x50) {
          if ((pcVar17[-8] == (code)0x1) && (((byte)pcVar17[-0x30] & 1) != 0)) {
            uStack_1b0 = 0xeaac8a8;
            thunk_FUN_0ee326a0(*(undefined8 *)(pcVar17 + -0x20),
                               *(ulong *)(pcVar17 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_190 = pcVar18;
        uStack_1b0 = 0xeaac8c1;
        thunk_FUN_0ee326a0(pcStack_198,uStack_188 - (long)pcStack_198);
      }
    }
  }
  uStack_1b0 = 0xeaac8d8;
  (**(code **)(*plVar4 + 0xd0))(plVar4);
  lVar8 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar16 = puVar5[4];
LAB_0eaac91a:
    lVar25 = lVar8 + (ulong)uVar16 * 0x20;
    uVar15 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar16 * 0x20);
    if (uVar15 != 0xffffffff) {
      uStack_1b0 = 0xeaac943;
      (**(code **)(&UNK_0f4e40d0 + uVar15 * 8))(&uStack_1a8,lVar25 + -0x18);
      uVar16 = puVar5[4];
    }
    *(undefined4 *)(lVar25 + -0x10) = 0xffffffff;
    puVar5[4] = uVar16 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar16 = puVar5[4], uVar23 == uVar16 - 1)) goto LAB_0eaac91a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0xeaac982;
    auStack_40 = (*(code *)*puStack_b0)();
    uVar12 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    uVar15 = (ulong)uStack_e8 >> 1 & 0x7f;
    pcVar17 = (code *)((long)&uStack_e8 + 1);
    if (((ulong)uStack_e8 & 1) != 0) {
      uVar15 = uStack_e0;
      pcVar17 = pcStack_d8;
    }
    if (uVar15 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar23 = ((int)(char)pcVar17[uVar19 + 3] ^
                   ((int)(char)pcVar17[uVar19 + 2] ^
                   ((int)(char)pcVar17[uVar19 + 1] ^
                   ((int)(char)pcVar17[uVar19] ^ uVar23) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar9 != 0) {
        uVar15 = 0;
        do {
          uVar23 = ((int)(char)pcVar17[uVar15 + uVar19] ^ uVar23) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar9 != uVar15);
      }
    }
    if (lVar8 == 0) {
      uStack_1b0 = 0xeaaca71;
      lVar8 = func_0x048aead0(uVar12);
    }
    uStack_1b0 = 0xeaaca83;
    plStack_58 = (long *)func_0x048b0c90(uVar12,lVar8,uVar23,1);
    if (plStack_58 == (long *)0x0) {
      uStack_1a8 = (long *)0x0;
      uStack_1a0 = 0;
      uStack_1b0 = 0xeaacab1;
      func_0x048b0d20(&uStack_1a8);
      plStack_58 = uStack_1a8;
      uStack_50 = uStack_1a0;
      if (uStack_1a8 == (long *)0x0) {
        lVar8 = *plStack_c0;
        uStack_1b0 = 0xeaad244;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1b0 = 0xeaad258;
        uVar12 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        uVar15 = (ulong)uStack_e8 >> 1 & 0x7f;
        pcVar17 = (code *)((long)&uStack_e8 + 1);
        if (((ulong)uStack_e8 & 1) != 0) {
          uVar15 = uStack_e0;
          pcVar17 = pcStack_d8;
        }
        uStack_1b0 = 0xeaad284;
        uVar12 = func_0x0412f8c0(uVar12,pcVar17,uVar15);
        uStack_1b0 = 0xeaad298;
        pbVar13 = (byte *)func_0x0412f8c0(uVar12,&UNK_0125506d,1);
        bVar29 = (*pbVar13 & 1) != 0;
        pbVar27 = pbVar13 + 1;
        if (bVar29) {
          pbVar27 = *(byte **)(pbVar13 + 0x10);
        }
        uVar15 = (ulong)(*pbVar13 >> 1);
        if (bVar29) {
          uVar15 = *(ulong *)(pbVar13 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1b0 = 0xeaad2ca;
        func_0x0ee387f0(auStack_148,pbVar27,uVar15,1);
        uStack_1b0 = 0xeaad2dc;
        func_0x0ed5ffe0(lVar8,8,auStack_148);
        uStack_1b0 = 0xeaad2e6;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0xeaad302;
          thunk_FUN_0ee326a0(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_0eaad3c2;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    lStack_178 = 0;
    puStack_170 = (undefined *)0x0;
    uStack_188 = 0;
    lStack_180 = 0;
    pcStack_198 = (code *)0x0;
    pcStack_190 = (code *)0x0;
    uStack_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0xeaacae6;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0xeaacafe;
    func_0x05d9a920(&pppppppuStack_a8,&plStack_58,&uStack_1a8);
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xeaacb0d;
      (*pcStack_190)(&uStack_1a8);
    }
    bVar29 = (*(byte *)(puStack_b0 + 1) & 1) != 0;
    if (bVar29) {
      ppppppuVar21 = (undefined8 ******)puStack_b0[3];
    }
    uVar15 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
    if (bVar29) {
      uVar15 = puStack_b0[2];
    }
    if (uVar15 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar21 + uVar19 + 3) ^
                   ((int)*(char *)((long)ppppppuVar21 + uVar19 + 2) ^
                   ((int)*(char *)((long)ppppppuVar21 + uVar19 + 1) ^
                   ((int)*(char *)((long)ppppppuVar21 + uVar19) ^ uVar23) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar9 != 0) {
        uVar15 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar21 + uVar15 + uVar19) ^ uVar23) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar9 != uVar15);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    plVar4 = (long *)*param_3;
    plVar14 = plVar4;
    if (cVar2 == '\x02') {
      plVar14 = param_3;
    }
    if (plVar14 == (long *)0x0 || (int)param_3[4] != 0x10c77c12) {
      lVar8 = param_3[5];
      lVar25 = param_3[6];
      if (lVar25 == 0) {
        uStack_1b0 = 0xeaacc10;
        (*(code *)param_3[7])(0,param_3,0);
        lVar25 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        plVar4 = (long *)*param_3;
      }
      if (cVar2 == '\x02') {
        plVar4 = param_3;
      }
      uStack_1b0 = 0xeaacc32;
      plVar14 = (long *)func_0x0488e200(lVar8,lVar25,0x10c77c12,plVar4);
    }
    plVar4 = (long *)param_3[5];
    if (DAT_0f76a668 == '\0') {
      uStack_1b0 = 0xeaad477;
      iVar3 = func_0x04108328(&DAT_0f76a668);
      if (iVar3 != 0) {
        uStack_1b0 = 0xeaad484;
        func_0x0ea8fce0();
        uStack_1b0 = 0xeaad49e;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f76a5e8,0xf53dab8);
        uStack_1b0 = 0xeaad4aa;
        func_0x0410844d(&DAT_0f76a668);
      }
    }
    plVar6 = (long *)(*plVar4 +
                     (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                            *(uint *)(_DAT_0f76a5e8 + 4)) * 8);
    do {
      lVar8 = *plVar6;
      if (lVar8 == -1) {
        plVar11 = (long *)plVar4[4];
        plVar6 = plVar11;
        goto LAB_0eaacca4;
      }
      plVar6 = (long *)(plVar4[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar4[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76a5e8 + 4));
    plVar11 = (long *)plVar4[4];
LAB_0eaacca4:
    if (plVar6 == plVar11) {
      puVar26 = &DAT_0f76a5e8;
    }
    else {
      puVar26 = (undefined *)plVar6[2];
    }
    uStack_1b0 = 0xeaaccc6;
    auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar26,uVar23,1);
    plStack_f0 = plVar4;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0xeaaccdd;
      func_0x048b0d20(auStack_148);
      auVar10 = auStack_148;
      plStack_f0 = plStack_140;
    }
    lStack_118 = 0;
    puStack_110 = (undefined *)0x0;
    lStack_128 = 0;
    lStack_120 = 0;
    pcStack_138 = (code *)0x0;
    pcStack_130 = (code *)0x0;
    auStack_148 = (undefined1  [8])0x0;
    plStack_140 = (long *)0x0;
    uStack_1b0 = 0xeaacd1e;
    puStack_f8 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_148);
    uStack_1b0 = 0xeaacd33;
    func_0x05d9a920(&uStack_1a8,&puStack_f8,auStack_148);
    if ((lStack_180 == lStack_80) && ((lStack_70 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_84 == '\0') || ((int)uStack_188 != iStack_88)) {
        bVar29 = cStack_84 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        pppppppuVar20 = pppppppuStack_a8;
        if (cStack_84 == '\x02') {
          pppppppuVar20 = &pppppppuStack_a8;
        }
        uStack_1b0 = 0xeaad40c;
        lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
        bVar29 = lVar8 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xeaacd71;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1b0 = 0xeaacd82;
      (*pcStack_130)(auStack_148);
    }
    if (bVar29) {
      lVar8 = param_3[5];
      plVar4 = plVar14 + 1;
      if ((ulong)*(uint *)(plVar14 + 0x15) != 0xffffffff) {
        uStack_1b0 = 0xeaacdb6;
        (**(code **)(&UNK_0f4d7428 + (ulong)*(uint *)(plVar14 + 0x15) * 8))(auStack_148,plVar4);
      }
      plVar14[0x13] = 0;
      plVar14[0x14] = 0;
      plVar14[0x11] = 0;
      plVar14[0x12] = 0;
      plVar14[0xf] = 0;
      plVar14[0x10] = 0;
      plVar14[0xd] = 0;
      plVar14[0xe] = 0;
      plVar14[0xb] = 0;
      plVar14[0xc] = 0;
      plVar14[9] = 0;
      plVar14[10] = 0;
      plVar14[7] = 0;
      plVar14[8] = 0;
      plVar14[5] = 0;
      plVar14[6] = 0;
      plVar14[3] = 0;
      plVar14[4] = 0;
      *plVar4 = 0;
      plVar14[2] = 0;
      *(undefined2 *)(plVar14 + 4) = 0xffff;
      plVar14[6] = 0;
      plVar14[7] = 0;
      plVar14[8] = 0;
      *(undefined2 *)(plVar14 + 9) = 0xffff;
      plVar14[0xb] = 0;
      plVar14[0xc] = 0;
      plVar14[0xd] = 0;
      *(undefined2 *)(plVar14 + 0xe) = 0xffff;
      plVar14[0x10] = 0;
      plVar14[0x11] = 0;
      plVar14[0x12] = 0;
      *(undefined2 *)(plVar14 + 0x13) = 0xffff;
      *(undefined4 *)(plVar14 + 0x15) = 0;
      pcStack_198 = (code *)&UNK_0ea90050;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x3d09f13b8);
      lStack_178 = 0;
      puStack_170 = &UNK_0ea8ff70;
      lStack_128 = plStack_c0[4];
      auStack_148 = (undefined1  [8])*plStack_c0;
      plStack_140 = (long *)plStack_c0[1];
      pcStack_138 = (code *)plStack_c0[2];
      pcStack_130 = (code *)plStack_c0[3];
      plVar14 = (long *)plStack_c0[2];
      uStack_1a8 = plVar4;
      lStack_180 = lVar8;
      if (plVar14 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
      }
      else {
        uStack_1b0 = 0xeaaceb9;
        pcStack_138 = (code *)(**(code **)(*plVar14 + 0x30))(plVar14,0);
      }
      puStack_f8 = &UNK_0f4d7138;
      uStack_1b0 = 0xeaad20a;
      func_0x0ed75bc0(&puStack_f8,plStack_150,&uStack_1a8,uStack_c8,auStack_148);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xeaad21d;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar4 = (long *)param_3[5];
      if (DAT_0f76ada0 == '\0') {
        uStack_1b0 = 0xeaad4bb;
        iVar3 = func_0x04108328(&DAT_0f76ada0);
        if (iVar3 != 0) {
          uStack_1b0 = 0xeaad4c8;
          func_0x0eaa5d40();
          uStack_1b0 = 0xeaad4e2;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f76ad20,0xf53dab8);
          uStack_1b0 = 0xeaad4ee;
          func_0x0410844d(&DAT_0f76ada0);
        }
      }
      plVar6 = (long *)(*plVar4 +
                       (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                              *(uint *)(_DAT_0f76ad20 + 4)) * 8);
      do {
        lVar8 = *plVar6;
        if (lVar8 == -1) {
          plVar11 = (long *)plVar4[4];
          plVar6 = plVar11;
          goto LAB_0eaacf34;
        }
        plVar6 = (long *)(plVar4[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar4[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76ad20 + 4));
      plVar11 = (long *)plVar4[4];
LAB_0eaacf34:
      if (plVar6 == plVar11) {
        puVar26 = &DAT_0f76ad20;
      }
      else {
        puVar26 = (undefined *)plVar6[2];
      }
      uStack_1b0 = 0xeaacf92;
      auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar26,uVar23,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0xeaacfa9;
        func_0x048b0d20(auStack_148);
        auVar10 = auStack_148;
        plVar4 = plStack_140;
      }
      lStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0xeaacfea;
      puStack_f8 = (undefined *)auVar10;
      plStack_f0 = plVar4;
      func_0x05d84ba0(auStack_148);
      uStack_1b0 = 0xeaacfff;
      func_0x05d9a920(&uStack_1a8,&puStack_f8,auStack_148);
      if ((lStack_180 == lStack_80) && ((lStack_70 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_84 == '\0') || ((int)uStack_188 != iStack_88)) {
          bVar29 = cStack_84 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          pppppppuVar20 = &pppppppuStack_a8;
          if (cStack_84 != '\x02') {
            pppppppuVar20 = pppppppuStack_a8;
          }
          uStack_1b0 = 0xeaad359;
          lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
          bVar29 = lVar8 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xeaad03c;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1b0 = 0xeaad04d;
        (*pcStack_130)(auStack_148);
      }
      if (bVar29) {
        lVar8 = param_3[5];
        plVar4 = plVar14 + 1;
        if ((ulong)*(uint *)(plVar14 + 0x15) != 0xffffffff) {
          uStack_1b0 = 0xeaad080;
          (**(code **)(&UNK_0f4d7428 + (ulong)*(uint *)(plVar14 + 0x15) * 8))(auStack_148,plVar4);
        }
        plVar14[0xb] = 0;
        plVar14[0xc] = 0;
        plVar14[9] = 0;
        plVar14[10] = 0;
        plVar14[7] = 0;
        plVar14[8] = 0;
        plVar14[5] = 0;
        plVar14[6] = 0;
        plVar14[3] = 0;
        plVar14[4] = 0;
        *plVar4 = 0;
        plVar14[2] = 0;
        plVar14[0xd] = 0;
        *(undefined2 *)(plVar14 + 0xc) = 0xffff;
        *(undefined4 *)(plVar14 + 0x15) = 1;
        pcStack_198 = (code *)&UNK_0eaa6060;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x39fb2ced3);
        lStack_178 = 0;
        puStack_170 = &UNK_0eaa5f80;
        lStack_128 = plStack_c0[4];
        auStack_148 = (undefined1  [8])*plStack_c0;
        plStack_140 = (long *)plStack_c0[1];
        pcStack_138 = (code *)plStack_c0[2];
        pcStack_130 = (code *)plStack_c0[3];
        plVar14 = (long *)plStack_c0[2];
        uStack_1a8 = plVar4;
        lStack_180 = lVar8;
        if (plVar14 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
        }
        else {
          uStack_1b0 = 0xeaad135;
          pcStack_138 = (code *)(**(code **)(*plVar14 + 0x30))(plVar14,1);
        }
        puStack_f8 = &UNK_0f4d7538;
        uStack_1b0 = 0xeaad39c;
        func_0x0ed75bc0(&puStack_f8,plStack_150,&uStack_1a8,uStack_c8,auStack_148);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0xeaad3ab;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
              (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
        uStack_1a8 = (long *)0x2300000149614c;
        uStack_1b0 = 0xeaad19a;
        func_0x0ed5ffe0(*plStack_c0,8,&uStack_1a8);
        if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
          uStack_1b0 = 0xeaad1c5;
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
        }
        uStack_1a8 = (long *)0x0;
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1b0 = 0xeaad3c2;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_0eaad3c2:
  if (((ulong)uStack_e8 & 1) != 0) {
    uStack_1b0 = 0xeaad3e9;
    thunk_FUN_0ee326a0(pcStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  return;
}


