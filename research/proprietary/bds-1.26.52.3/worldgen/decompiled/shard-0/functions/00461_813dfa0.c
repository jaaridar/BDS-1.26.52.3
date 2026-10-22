/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x823dfa0 (ELF vaddr 0x813dfa0)
 * Label: caller-of-callee
 * Body:  [[0823dfa0, 0823e8ba] [0823e8c0, 0823fa58] [082411f0, 08241490]]
 * Ghidra: FUN_0823dfa0
 */


/* WARNING: Possible PIC construction at 0x0823e1d3: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0823dfa0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  uint *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auVar10 [8];
  undefined8 uVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  code *pcVar17;
  code *pcVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  undefined8 unaff_RBX;
  undefined8 ******ppppppuVar21;
  byte bVar22;
  uint uVar23;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar24;
  long lVar25;
  byte *pbVar26;
  undefined *puVar27;
  long *unaff_R12;
  long *unaff_R13;
  long *unaff_R14;
  undefined8 *unaff_R15;
  bool bVar28;
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
  char cStack_159;
  uint *puStack_158;
  long *plStack_150;
  undefined *puStack_148;
  long *plStack_140;
  undefined1 auStack_138 [8];
  long *plStack_130;
  code *pcStack_128;
  code *pcStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  char cStack_f8;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  code *pcStack_a0;
  int iStack_98;
  char cStack_94;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  uint uStack_60;
  long *plStack_58;
  ulong uStack_50;
  undefined1 auStack_40 [16];
  
  pcVar17 = (code *)param_3[7];
  plStack_e8 = param_5;
  if (pcVar17 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar28 = false;
    }
    else {
      uStack_1b0 = 0x823dff5;
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_0823d630;
    }
    param_3[2] = (long)&UNK_0823d710;
    *(undefined4 *)(param_3 + 4) = 0xd6f1cf72;
    param_3[3] = (long)&UNK_0823d930;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0x823e045;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      uStack_1b0 = 0x823f90b;
      func_0x0eec74c0(0x20,0);
    }
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *param_3 = lVar7;
    pcVar17 = (code *)&UNK_0823d630;
    param_3[7] = (long)&UNK_0823d630;
    if (bVar28) {
      lVar7 = param_3[6];
    }
    else {
      lVar7 = 0;
    }
    param_3[6] = lVar7;
    if (lVar7 == 0) goto LAB_0823e084;
LAB_0823e09a:
    bVar22 = *(byte *)(lVar7 + 0x1a);
  }
  else {
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_0823e09a;
LAB_0823e084:
    lVar25 = param_3[5];
    uStack_1b0 = 0x823e092;
    (*pcVar17)(0,param_3,0);
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_0823e09a;
    uStack_1b0 = 0x823e0cf;
    lVar7 = func_0x048aead0(lVar25);
    bVar22 = *(byte *)(lVar7 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_082411f0;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0x823e1fc;
    func_0x048b1dc0(&uStack_1a8);
    plVar4 = uStack_1a8;
    uVar15 = uStack_1a0;
    unaff_R14 = &uStack_1a8;
joined_r0x0823e207:
    if (plVar4 == (long *)0x0) {
      uStack_1b0 = 0x823e215;
      plVar4 = (long *)func_0x048aead0(uVar15);
    }
  }
  else {
    plVar4 = (long *)*unaff_R14;
    if (plVar4 == (long *)0x0) {
      uVar15 = param_3[5];
      uStack_1b0 = 0x823e0f9;
      (*(code *)param_3[7])(0,param_3,0);
      plVar4 = (long *)*unaff_R14;
      goto joined_r0x0823e207;
    }
  }
  unaff_R15 = (undefined8 *)plVar4[0xd];
  uStack_1b0 = 0x823e113;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar4 = plStack_e8;
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0x823e1d8;
    unaff_RBX = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
SUB_082411f0:
    plVar9 = plStack_e8;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    plVar4 = (long *)*param_3;
    plVar14 = plVar4;
    if (cVar2 == '\x02') {
      plVar14 = param_3;
    }
    if (plVar14 == (long *)0x0 || (int)param_3[4] != -0x290e308e) {
      lVar7 = param_3[5];
      lVar25 = param_3[6];
      if (lVar25 == 0) {
        pcVar17 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x824124f;
        (*pcVar17)(0,param_3,0);
        lVar25 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        plVar4 = (long *)*param_3;
      }
      if (cVar2 == '\x02') {
        plVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x8241271;
      plVar14 = (long *)func_0x0488e200(lVar7,lVar25,0xd6f1cf72,plVar4);
    }
    lVar7 = *plVar9;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x8241281;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar7);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar17 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x824129e;
    uVar15 = (*pcVar17)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar15 >> 0x20 & 1) == 0) {
      lVar7 = param_3[5];
      uVar8 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x82412d9;
      cVar2 = func_0x082414c0(param_2,lVar7,plVar14,param_4,plVar9,4);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8241306;
      cVar2 = func_0x082416d0(param_2,lVar7,plVar14,param_4,plVar9,4);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8241333;
      cVar2 = func_0x082418f0(param_2,lVar7,plVar14,param_4,plVar9,4);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar15 = 4;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
    }
    else {
      if ((uVar15 & 0xfffffffc) != 0) {
        lVar7 = *plVar9;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x824139b;
        func_0x0ed5ffe0(lVar7,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar17 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x82413c3;
        (*pcVar17)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      lVar7 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x50) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x82413fd;
      cVar2 = func_0x082414c0(param_2,lVar7,plVar14,param_4,plVar9,uVar15 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar15 = uVar15 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x824142a;
      cVar2 = func_0x082416d0(param_2,lVar7,plVar14,param_4,plVar9,uVar15);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8241453;
      cVar2 = func_0x082418f0(param_2,lVar7,plVar14,param_4,plVar9,uVar15);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x824148b;
    func_0x08241b00(param_2,lVar7,plVar14,param_4,plVar9,uVar15);
    return;
  }
  if (bVar22 != 1) {
    uStack_1a8 = (long *)0x120000012f2525;
    uStack_1b0 = 0x823e24d;
    func_0x0ed5ffe0(*plStack_e8,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0x823e270;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0x823e152;
  plStack_150 = param_2;
  uStack_e0 = param_4;
  func_0x0ed6d600(&lStack_68,*plStack_e8);
  puStack_158 = (uint *)param_3[5];
  lStack_78 = *plVar4;
  ppppppuVar21 = (undefined8 ******)((long)unaff_R15 + 9);
  bVar28 = (*(byte *)(unaff_R15 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)unaff_R15[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar15 = (ulong)(*(byte *)(unaff_R15 + 1) >> 1);
  if (!bVar28) {
    uVar15 = unaff_R15[2];
  }
  puStack_70 = unaff_R15;
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_148 = (undefined *)((ulong)((uint)uVar15 & 0x7f) << 0x30);
  }
  else if (uVar15 < 0x80) {
    puStack_148 = (undefined *)(uVar15 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar7 = uVar15 + 9;
    cStack_159 = lVar7 == 0;
    uStack_1b0 = 0x823e2b1;
    puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
    if (puVar6 == (ulong *)0x0 && cStack_159 == '\0') {
      uStack_1b0 = 0x823f920;
      func_0x0eec74c0(lVar7,8);
    }
    *puVar6 = uVar15;
    uStack_1b0 = 0x823e2dd;
    func_0x0eee2f00(puVar6 + 1,ppppppuVar24,uVar15);
    *(undefined1 *)((long)puVar6 + uVar15 + 8) = 0;
    puStack_148 = (undefined *)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1b0 = 0x823e316;
  puVar5 = (uint *)func_0x0ed6d180(lStack_78,&puStack_148,0);
  plVar4 = plStack_150;
  if (((ulong)puStack_148 & 0x80000000000000) != 0) {
    uStack_1b0 = 0x823e34a;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_148 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar1 = puStack_70;
  puStack_148 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_70[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar15 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar28) {
    uVar15 = puStack_70[2];
  }
  uStack_1b0 = 0x823e380;
  cVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,ppppppuVar24,uVar15);
  if (cVar2 == '\0') {
    uStack_1b0 = 0x823e49b;
    _auStack_138 = (*(code *)*puVar1)(puStack_158);
    uStack_1b0 = 0x823e4c1;
    func_0x0ed8bc80(&uStack_1a8,auStack_138,*(undefined1 *)(lStack_78 + 0x2aa));
    uVar15 = (ulong)uStack_1a8 >> 1 & 0x7f;
    pcVar17 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      uVar15 = uStack_1a0;
      pcVar17 = pcStack_198;
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (pcVar17 == (code *)0x0) {
      pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)uVar15 & 0x7f) << 0x30);
    }
    else {
      lVar7 = uVar15 + 9;
      uStack_1b0 = 0x823e515;
      puStack_158 = puVar5;
      puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
      if (lVar7 != 0 && puVar6 == (ulong *)0x0) {
        uStack_1b0 = 0x823f932;
        func_0x0eec74c0(lVar7,8);
      }
      *puVar6 = uVar15;
      uStack_1b0 = 0x823e545;
      func_0x0eee2f00(puVar6 + 1,pcVar17,uVar15);
      *(undefined1 *)((long)puVar6 + uVar15 + 8) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      puVar5 = puStack_158;
    }
    uStack_1b0 = 0x823e6e0;
    func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
    plVar4 = plStack_150;
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0x823e714;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0x823e738;
      thunk_FUN_0ee326a0(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_d8 = (long *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0x823e39f;
    (**(code **)(*plVar4 + 0x80))(auStack_138,plVar4,0x40);
    cStack_168 = cStack_f8;
    if (cStack_f8 == '\0') {
      uStack_1a8 = (long *)auStack_138;
      uStack_1a0 = (ulong)plStack_130;
      pcStack_198 = pcStack_128;
      pcStack_190 = pcStack_120;
      uStack_188 = lStack_118;
      lStack_180 = lStack_110;
      lStack_178 = lStack_108;
      puStack_170 = puStack_100;
      pppppppuStack_b8 = (undefined8 *******)puVar1[3];
      uStack_b0 = puVar1[2];
      if ((*(byte *)(puVar1 + 1) & 1) == 0) {
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar21;
        uStack_b0 = (ulong)(*(byte *)(puVar1 + 1) >> 1);
      }
      uStack_1b0 = 0x823e5f7;
      FUN_0470d9a0(auStack_138,&UNK_01377405,0x15,0xd,&pppppppuStack_b8);
      plVar4 = (long *)((ulong)auStack_138 >> 1 & 0x7f);
      pcVar17 = (code *)(auStack_138 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar4 = plStack_130;
        pcVar17 = pcStack_128;
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (pcVar17 == (code *)0x0) {
        pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)plVar4 & 0x7f) << 0x30);
      }
      else {
        lVar7 = (long)plVar4 + 9;
        uStack_1b0 = 0x823e64f;
        puStack_158 = puVar5;
        puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
        if (lVar7 != 0 && puVar6 == (ulong *)0x0) {
          uStack_1b0 = 0x823f944;
          func_0x0eec74c0(lVar7,8);
        }
        *puVar6 = (ulong)plVar4;
        uStack_1b0 = 0x823e67f;
        func_0x0eee2f00(puVar6 + 1,pcVar17,plVar4);
        *(undefined1 *)((long)puVar6 + (long)plVar4 + 8U) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        puVar5 = puStack_158;
      }
      uStack_1b0 = 0x823e7b1;
      func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
      plVar4 = plStack_150;
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0x823e7e5;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_138 & 1) != 0) {
        uStack_1b0 = 0x823e80e;
        thunk_FUN_0ee326a0(pcStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
      }
      uStack_d8 = (long *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_198 = pcStack_128;
      uStack_1a8 = (long *)auStack_138;
      uStack_1a0 = (ulong)plStack_130;
      plVar9 = (long *)(ulong)(byte)(auStack_138[0] >> 1);
      pcVar17 = (code *)((long)&uStack_1a8 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar9 = plStack_130;
        pcVar17 = pcStack_128;
      }
      bVar22 = auStack_138[0];
      if (plVar9 != (long *)0x0) {
        uStack_1b0 = 0x823e3ee;
        plVar14 = (long *)func_0x0eee3290();
        pcVar18 = pcVar17;
        for (uVar15 = (ulong)plVar9 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar18 = *(code *)(*plVar14 + (ulong)(byte)*pcVar18 * 4);
          pcVar18 = pcVar18 + 1;
        }
        if (3 < plVar9) {
          do {
            *pcVar18 = *(code *)(*plVar14 + (ulong)(byte)*pcVar18 * 4);
            pcVar18[1] = *(code *)(*plVar14 + (ulong)(byte)pcVar18[1] * 4);
            pcVar18[2] = *(code *)(*plVar14 + (ulong)(byte)pcVar18[2] * 4);
            pcVar18[3] = *(code *)(*plVar14 + (ulong)(byte)pcVar18[3] * 4);
            pcVar18 = pcVar18 + 4;
          } while (pcVar18 != pcVar17 + (long)plVar9);
        }
        bVar22 = (byte)uStack_1a8;
      }
      if ((bVar22 & 1) == 0) {
        pcStack_c8 = pcStack_198;
        uStack_d8 = uStack_1a8;
        uStack_d0 = uStack_1a0;
      }
      else {
        uStack_1b0 = 0x823e76b;
        FUN_0412e5e0(&uStack_d8,pcStack_198,uStack_1a0);
      }
    }
    lVar7 = lStack_180;
    if (cStack_168 == '\x01') {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0x823e848;
        thunk_FUN_0ee326a0(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_180 != 0) {
        while (lVar7 != lStack_178) {
          uStack_1b0 = 0x823e87c;
          func_0x048b3e80(lStack_178 + -0x40);
          lStack_178 = lStack_178 + -0x40;
        }
        lStack_178 = lVar7;
        uStack_1b0 = 0x823e898;
        thunk_FUN_0ee326a0(lStack_180,(long)puStack_170 - lStack_180);
      }
      pcVar18 = pcStack_198;
      pcVar17 = pcStack_190;
      if (pcStack_198 != (code *)0x0) {
        for (; pcVar18 != pcVar17; pcVar17 = pcVar17 + -0x50) {
          if ((pcVar17[-8] == (code)0x1) && (((byte)pcVar17[-0x30] & 1) != 0)) {
            uStack_1b0 = 0x823e8e8;
            thunk_FUN_0ee326a0(*(undefined8 *)(pcVar17 + -0x20),
                               *(ulong *)(pcVar17 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_190 = pcVar18;
        uStack_1b0 = 0x823e901;
        thunk_FUN_0ee326a0(pcStack_198,uStack_188 - (long)pcStack_198);
      }
    }
  }
  uStack_1b0 = 0x823e918;
  (**(code **)(*plVar4 + 0xd0))(plVar4);
  lVar7 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar7 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar16 = puVar5[4];
LAB_0823e95a:
    lVar25 = lVar7 + (ulong)uVar16 * 0x20;
    uVar15 = (ulong)*(uint *)(lVar7 + -0x10 + (ulong)uVar16 * 0x20);
    if (uVar15 != 0xffffffff) {
      uStack_1b0 = 0x823e983;
      (**(code **)(&UNK_0f4e40d0 + uVar15 * 8))(&uStack_1a8,lVar25 + -0x18);
      uVar16 = puVar5[4];
    }
    *(undefined4 *)(lVar25 + -0x10) = 0xffffffff;
    puVar5[4] = uVar16 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar16 = puVar5[4], uVar23 == uVar16 - 1)) goto LAB_0823e95a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0x823e9c2;
    auStack_40 = (*(code *)*puStack_70)();
    uVar11 = auStack_40._8_8_;
    lVar7 = auStack_40._0_8_;
    uVar15 = (ulong)uStack_d8 >> 1 & 0x7f;
    pcVar17 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      uVar15 = uStack_d0;
      pcVar17 = pcStack_c8;
    }
    if (uVar15 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar15 & 3);
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
      if (uVar8 != 0) {
        uVar15 = 0;
        do {
          uVar23 = ((int)(char)pcVar17[uVar15 + uVar19] ^ uVar23) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar8 != uVar15);
      }
    }
    if (lVar7 == 0) {
      uStack_1b0 = 0x823eab1;
      lVar7 = func_0x048aead0(uVar11);
    }
    uStack_1b0 = 0x823eac3;
    plStack_58 = (long *)func_0x048b0c90(uVar11,lVar7,uVar23,1);
    if (plStack_58 == (long *)0x0) {
      uStack_1a8 = (long *)0x0;
      uStack_1a0 = 0;
      uStack_1b0 = 0x823eaf1;
      func_0x048b0d20(&uStack_1a8);
      plStack_58 = uStack_1a8;
      uStack_50 = uStack_1a0;
      if (uStack_1a8 == (long *)0x0) {
        lVar7 = *plStack_e8;
        uStack_1b0 = 0x823f193;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar7 + 0x2aa));
        uStack_1b0 = 0x823f1a7;
        uVar11 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        uVar15 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar17 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar15 = uStack_d0;
          pcVar17 = pcStack_c8;
        }
        uStack_1b0 = 0x823f1d3;
        uVar11 = func_0x0412f8c0(uVar11,pcVar17,uVar15);
        uStack_1b0 = 0x823f1e7;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar28 = (*pbVar12 & 1) != 0;
        pbVar26 = pbVar12 + 1;
        if (bVar28) {
          pbVar26 = *(byte **)(pbVar12 + 0x10);
        }
        uVar15 = (ulong)(*pbVar12 >> 1);
        if (bVar28) {
          uVar15 = *(ulong *)(pbVar12 + 8);
        }
        auStack_138 = (undefined1  [8])0x0;
        uStack_1b0 = 0x823f219;
        func_0x0ee387f0(auStack_138,pbVar26,uVar15,1);
        uStack_1b0 = 0x823f22b;
        func_0x0ed5ffe0(lVar7,8,auStack_138);
        uStack_1b0 = 0x823f235;
        func_0x0ee386e0(auStack_138);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0x823f251;
          thunk_FUN_0ee326a0(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_0823f888;
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
    uStack_1b0 = 0x823eb26;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0x823eb3e;
    func_0x05d9a920(&pppppppuStack_b8,&plStack_58,&uStack_1a8);
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x823eb4d;
      (*pcStack_190)(&uStack_1a8);
    }
    bVar28 = (*(byte *)(puStack_70 + 1) & 1) != 0;
    if (bVar28) {
      ppppppuVar21 = (undefined8 ******)puStack_70[3];
    }
    uVar15 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
    if (bVar28) {
      uVar15 = puStack_70[2];
    }
    if (uVar15 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar15 & 3);
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
      if (uVar8 != 0) {
        uVar15 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar21 + uVar15 + uVar19) ^ uVar23) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar8 != uVar15);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    plVar4 = (long *)*param_3;
    plVar9 = plVar4;
    if (cVar2 == '\x02') {
      plVar9 = param_3;
    }
    if (plVar9 == (long *)0x0 || (int)param_3[4] != -0x290e308e) {
      lVar7 = param_3[5];
      lVar25 = param_3[6];
      if (lVar25 == 0) {
        uStack_1b0 = 0x823ec4e;
        (*(code *)param_3[7])(0,param_3,0);
        lVar25 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        plVar4 = (long *)*param_3;
      }
      if (cVar2 == '\x02') {
        plVar4 = param_3;
      }
      uStack_1b0 = 0x823ec70;
      plVar9 = (long *)func_0x0488e200(lVar7,lVar25,0xd6f1cf72,plVar4);
    }
    plVar4 = (long *)param_3[5];
    if (DAT_0f5cb778 == '\0') {
      uStack_1b0 = 0x823f955;
      iVar3 = func_0x04108328(&DAT_0f5cb778);
      if (iVar3 != 0) {
        uStack_1b0 = 0x823f962;
        func_0x08234b20();
        uStack_1b0 = 0x823f97c;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cb6f8,0xf53dab8);
        uStack_1b0 = 0x823f988;
        func_0x0410844d(&DAT_0f5cb778);
      }
    }
    plVar14 = (long *)(*plVar4 +
                      (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                             *(uint *)(_DAT_0f5cb6f8 + 4)) * 8);
    do {
      lVar7 = *plVar14;
      if (lVar7 == -1) {
        plVar13 = (long *)plVar4[4];
        plVar14 = plVar13;
        goto LAB_0823ecd4;
      }
      plVar14 = (long *)(plVar4[3] + lVar7 * 0x18);
    } while (*(uint *)(plVar4[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f5cb6f8 + 4));
    plVar13 = (long *)plVar4[4];
LAB_0823ecd4:
    if (plVar14 == plVar13) {
      puVar27 = &DAT_0f5cb6f8;
    }
    else {
      puVar27 = (undefined *)plVar14[2];
    }
    uStack_1b0 = 0x823ecf5;
    auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar27,uVar23,1);
    plStack_140 = plVar4;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1b0 = 0x823ed0c;
      func_0x048b0d20(auStack_138);
      auVar10 = auStack_138;
      plStack_140 = plStack_130;
    }
    lStack_108 = 0;
    puStack_100 = (undefined *)0x0;
    lStack_118 = 0;
    lStack_110 = 0;
    pcStack_128 = (code *)0x0;
    pcStack_120 = (code *)0x0;
    auStack_138 = (undefined1  [8])0x0;
    plStack_130 = (long *)0x0;
    uStack_1b0 = 0x823ed4a;
    puStack_148 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_138);
    uStack_1b0 = 0x823ed5c;
    func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
    if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
        bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        pppppppuVar20 = pppppppuStack_b8;
        if (cStack_94 == '\x02') {
          pppppppuVar20 = &pppppppuStack_b8;
        }
        uStack_1b0 = 0x823f7d1;
        lVar7 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
        bVar28 = lVar7 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x823ed9a;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_120 != (code *)0x0) {
      uStack_1b0 = 0x823edae;
      (*pcStack_120)(auStack_138);
    }
    if (bVar28) {
      lVar7 = param_3[5];
      if ((ulong)*(uint *)(plVar9 + 3) != 0xffffffff) {
        uStack_1b0 = 0x823eddc;
        (**(code **)(&UNK_0f10a7c8 + (ulong)*(uint *)(plVar9 + 3) * 8))(auStack_138,plVar9);
      }
      *(undefined4 *)(plVar9 + 3) = 0;
      pcStack_198 = (code *)&UNK_08234dd0;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x39613ab4c);
      lStack_178 = 0;
      puStack_170 = &UNK_08234cf0;
      lStack_118 = plStack_e8[4];
      auStack_138 = (undefined1  [8])*plStack_e8;
      plStack_130 = (long *)plStack_e8[1];
      pcStack_128 = (code *)plStack_e8[2];
      pcStack_120 = (code *)plStack_e8[3];
      plVar4 = (long *)plStack_e8[2];
      lStack_180 = lVar7;
      if (plVar4 == (long *)0x0) {
        pcStack_128 = (code *)0x0;
        uStack_1a8 = plVar9;
      }
      else {
        uStack_1b0 = 0x823ee61;
        uStack_1a8 = plVar9;
        pcStack_128 = (code *)(**(code **)(*plVar4 + 0x30))(plVar4,0);
      }
      puStack_148 = &UNK_0f10f398;
      uStack_1b0 = 0x823f159;
      func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_e0,auStack_138);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x823f16c;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar4 = (long *)param_3[5];
      if (DAT_0f5cb830 == '\0') {
        uStack_1b0 = 0x823f999;
        iVar3 = func_0x04108328(&DAT_0f5cb830);
        if (iVar3 != 0) {
          uStack_1b0 = 0x823f9a6;
          func_0x08235c60();
          uStack_1b0 = 0x823f9c0;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cb7b0,0xf53dab8);
          uStack_1b0 = 0x823f9cc;
          func_0x0410844d(&DAT_0f5cb830);
        }
      }
      plVar14 = (long *)(*plVar4 +
                        (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                               *(uint *)(_DAT_0f5cb7b0 + 4)) * 8);
      do {
        lVar7 = *plVar14;
        if (lVar7 == -1) {
          plVar13 = (long *)plVar4[4];
          plVar14 = plVar13;
          goto LAB_0823eed4;
        }
        plVar14 = (long *)(plVar4[3] + lVar7 * 0x18);
      } while (*(uint *)(plVar4[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f5cb7b0 + 4));
      plVar13 = (long *)plVar4[4];
LAB_0823eed4:
      if (plVar14 == plVar13) {
        puVar27 = &DAT_0f5cb7b0;
      }
      else {
        puVar27 = (undefined *)plVar14[2];
      }
      uStack_1b0 = 0x823ef31;
      auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar27,uVar23,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1b0 = 0x823ef48;
        func_0x048b0d20(auStack_138);
        auVar10 = auStack_138;
        plVar4 = plStack_130;
      }
      lStack_108 = 0;
      puStack_100 = (undefined *)0x0;
      lStack_118 = 0;
      lStack_110 = 0;
      pcStack_128 = (code *)0x0;
      pcStack_120 = (code *)0x0;
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1b0 = 0x823ef86;
      puStack_148 = (undefined *)auVar10;
      plStack_140 = plVar4;
      func_0x05d84ba0(auStack_138);
      uStack_1b0 = 0x823ef98;
      func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
      if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
          bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          pppppppuVar20 = pppppppuStack_b8;
          if (cStack_94 == '\x02') {
            pppppppuVar20 = &pppppppuStack_b8;
          }
          uStack_1b0 = 0x823f8d2;
          lVar7 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
          bVar28 = lVar7 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x823efd6;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_120 != (code *)0x0) {
        uStack_1b0 = 0x823efea;
        (*pcStack_120)(auStack_138);
      }
      if (bVar28) {
        lVar7 = param_3[5];
        if ((ulong)*(uint *)(plVar9 + 3) != 0xffffffff) {
          uStack_1b0 = 0x823f018;
          (**(code **)(&UNK_0f10a7c8 + (ulong)*(uint *)(plVar9 + 3) * 8))(auStack_138,plVar9);
        }
        plVar9[1] = 0;
        plVar9[2] = 0;
        *plVar9 = (long)(plVar9 + 1);
        *(undefined4 *)(plVar9 + 3) = 1;
        pcStack_198 = (code *)&UNK_08235f70;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x368bd5d32);
        lStack_178 = 0;
        puStack_170 = &UNK_08235e90;
        lStack_118 = plStack_e8[4];
        auStack_138 = (undefined1  [8])*plStack_e8;
        plStack_130 = (long *)plStack_e8[1];
        pcStack_128 = (code *)plStack_e8[2];
        pcStack_120 = (code *)plStack_e8[3];
        plVar4 = (long *)plStack_e8[2];
        lStack_180 = lVar7;
        if (plVar4 == (long *)0x0) {
          pcStack_128 = (code *)0x0;
          uStack_1a8 = plVar9;
        }
        else {
          uStack_1b0 = 0x823f0b0;
          uStack_1a8 = plVar9;
          pcStack_128 = (code *)(**(code **)(*plVar4 + 0x30))(plVar4,1);
        }
        puStack_148 = &UNK_0f10f418;
        uStack_1b0 = 0x823f4d2;
        func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_e0,auStack_138);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x823f4e5;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else {
        plVar4 = (long *)param_3[5];
        if (DAT_0f5cba88 == '\0') {
          uStack_1b0 = 0x823f9dd;
          iVar3 = func_0x04108328(&DAT_0f5cba88);
          if (iVar3 != 0) {
            uStack_1b0 = 0x823f9ea;
            func_0x08239830();
            uStack_1b0 = 0x823fa04;
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cba08,0xf53dab8);
            uStack_1b0 = 0x823fa10;
            func_0x0410844d(&DAT_0f5cba88);
          }
        }
        plVar14 = (long *)(*plVar4 +
                          (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                                 *(uint *)(_DAT_0f5cba08 + 4)) * 8);
        do {
          lVar7 = *plVar14;
          if (lVar7 == -1) {
            plVar13 = (long *)plVar4[4];
            plVar14 = plVar13;
            goto LAB_0823f26a;
          }
          plVar14 = (long *)(plVar4[3] + lVar7 * 0x18);
        } while (*(uint *)(plVar4[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f5cba08 + 4));
        plVar13 = (long *)plVar4[4];
LAB_0823f26a:
        if (plVar14 == plVar13) {
          puVar27 = &DAT_0f5cba08;
        }
        else {
          puVar27 = (undefined *)plVar14[2];
        }
        uStack_1b0 = 0x823f2c7;
        auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar27,uVar23,1);
        if (auVar10 == (undefined1  [8])0x0) {
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1b0 = 0x823f2de;
          func_0x048b0d20(auStack_138);
          auVar10 = auStack_138;
          plVar4 = plStack_130;
        }
        lStack_108 = 0;
        puStack_100 = (undefined *)0x0;
        lStack_118 = 0;
        lStack_110 = 0;
        pcStack_128 = (code *)0x0;
        pcStack_120 = (code *)0x0;
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1b0 = 0x823f31c;
        puStack_148 = (undefined *)auVar10;
        plStack_140 = plVar4;
        func_0x05d84ba0(auStack_138);
        uStack_1b0 = 0x823f32e;
        func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
        if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
          if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
            bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
          }
          else {
            pppppppuVar20 = pppppppuStack_b8;
            if (cStack_94 == '\x02') {
              pppppppuVar20 = &pppppppuStack_b8;
            }
            uStack_1b0 = 0x823f8f0;
            lVar7 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
            bVar28 = lVar7 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x823f36c;
          (*pcStack_190)(&uStack_1a8);
        }
        if (pcStack_120 != (code *)0x0) {
          uStack_1b0 = 0x823f380;
          (*pcStack_120)(auStack_138);
        }
        if (bVar28) {
          lVar7 = param_3[5];
          if ((ulong)*(uint *)(plVar9 + 3) != 0xffffffff) {
            uStack_1b0 = 0x823f3ae;
            (**(code **)(&UNK_0f10a7c8 + (ulong)*(uint *)(plVar9 + 3) * 8))(auStack_138,plVar9);
          }
          *(undefined4 *)(plVar9 + 3) = 2;
          pcStack_198 = (code *)&UNK_08239ae0;
          pcStack_190 = (code *)0x0;
          uStack_188 = CONCAT35(uStack_188._5_3_,0x3fd7a0584);
          lStack_178 = 0;
          puStack_170 = &UNK_08239a00;
          lStack_118 = plStack_e8[4];
          auStack_138 = (undefined1  [8])*plStack_e8;
          plStack_130 = (long *)plStack_e8[1];
          pcStack_128 = (code *)plStack_e8[2];
          pcStack_120 = (code *)plStack_e8[3];
          plVar4 = (long *)plStack_e8[2];
          lStack_180 = lVar7;
          if (plVar4 == (long *)0x0) {
            pcStack_128 = (code *)0x0;
            uStack_1a8 = plVar9;
          }
          else {
            uStack_1b0 = 0x823f436;
            uStack_1a8 = plVar9;
            pcStack_128 = (code *)(**(code **)(*plVar4 + 0x30))(plVar4,2);
          }
          puStack_148 = &UNK_0f10f498;
          uStack_1b0 = 0x823f79a;
          func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_e0,auStack_138);
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x823f7ad;
            (*pcStack_190)(&uStack_1a8);
          }
        }
        else {
          plVar4 = (long *)param_3[5];
          if (DAT_0f5cbb40 == '\0') {
            uStack_1b0 = 0x823fa21;
            iVar3 = func_0x04108328(&DAT_0f5cbb40);
            if (iVar3 != 0) {
              uStack_1b0 = 0x823fa2e;
              func_0x0823a970();
              uStack_1b0 = 0x823fa48;
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cbac0,0xf53dab8);
              uStack_1b0 = 0x823fa54;
              func_0x0410844d(&DAT_0f5cbb40);
            }
          }
          plVar14 = (long *)(*plVar4 +
                            (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                                   *(uint *)(_DAT_0f5cbac0 + 4)) * 8);
          do {
            lVar7 = *plVar14;
            if (lVar7 == -1) {
              plVar13 = (long *)plVar4[4];
              plVar14 = plVar13;
              goto LAB_0823f4fe;
            }
            plVar14 = (long *)(plVar4[3] + lVar7 * 0x18);
          } while (*(uint *)(plVar4[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f5cbac0 + 4));
          plVar13 = (long *)plVar4[4];
LAB_0823f4fe:
          if (plVar14 == plVar13) {
            puVar27 = &DAT_0f5cbac0;
          }
          else {
            puVar27 = (undefined *)plVar14[2];
          }
          uStack_1b0 = 0x823f55b;
          auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar27,uVar23,1);
          if (auVar10 == (undefined1  [8])0x0) {
            auStack_138 = (undefined1  [8])0x0;
            plStack_130 = (long *)0x0;
            uStack_1b0 = 0x823f572;
            func_0x048b0d20(auStack_138);
            auVar10 = auStack_138;
            plVar4 = plStack_130;
          }
          lStack_108 = 0;
          puStack_100 = (undefined *)0x0;
          lStack_118 = 0;
          lStack_110 = 0;
          pcStack_128 = (code *)0x0;
          pcStack_120 = (code *)0x0;
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1b0 = 0x823f5b0;
          puStack_148 = (undefined *)auVar10;
          plStack_140 = plVar4;
          func_0x05d84ba0(auStack_138);
          uStack_1b0 = 0x823f5c2;
          func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
          if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0)))
          {
            if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
              bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
            }
            else {
              pppppppuVar20 = &pppppppuStack_b8;
              if (cStack_94 != '\x02') {
                pppppppuVar20 = pppppppuStack_b8;
              }
              uStack_1b0 = 0x823f822;
              lVar7 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
              bVar28 = lVar7 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x823f5ff;
            (*pcStack_190)(&uStack_1a8);
          }
          if (pcStack_120 != (code *)0x0) {
            uStack_1b0 = 0x823f613;
            (*pcStack_120)(auStack_138);
          }
          if (bVar28) {
            lVar7 = param_3[5];
            if ((ulong)*(uint *)(plVar9 + 3) != 0xffffffff) {
              uStack_1b0 = 0x823f640;
              (**(code **)(&UNK_0f10a7c8 + (ulong)*(uint *)(plVar9 + 3) * 8))(auStack_138,plVar9);
            }
            *(undefined4 *)(plVar9 + 3) = 3;
            pcStack_198 = (code *)&UNK_0823ac20;
            pcStack_190 = (code *)0x0;
            uStack_188 = CONCAT35(uStack_188._5_3_,0x3492be2f7);
            lStack_178 = 0;
            puStack_170 = &UNK_0823ab40;
            lStack_118 = plStack_e8[4];
            auStack_138 = (undefined1  [8])*plStack_e8;
            plStack_130 = (long *)plStack_e8[1];
            pcStack_128 = (code *)plStack_e8[2];
            pcStack_120 = (code *)plStack_e8[3];
            plVar4 = (long *)plStack_e8[2];
            lStack_180 = lVar7;
            if (plVar4 == (long *)0x0) {
              pcStack_128 = (code *)0x0;
              uStack_1a8 = plVar9;
            }
            else {
              uStack_1b0 = 0x823f6c8;
              uStack_1a8 = plVar9;
              pcStack_128 = (code *)(**(code **)(*plVar4 + 0x30))(plVar4,3);
            }
            puStack_148 = &UNK_0f10f518;
            uStack_1b0 = 0x823f862;
            func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_e0,auStack_138);
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0x823f871;
              (*pcStack_190)(&uStack_1a8);
            }
          }
          else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                  (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
            uStack_1a8 = (long *)0x2300000149614c;
            uStack_1b0 = 0x823f72d;
            func_0x0ed5ffe0(*plStack_e8,8,&uStack_1a8);
            if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
              uStack_1b0 = 0x823f758;
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
            }
            uStack_1a8 = (long *)0x0;
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1b0 = 0x823f888;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_0823f888:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1b0 = 0x823f8af;
    thunk_FUN_0ee326a0(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


