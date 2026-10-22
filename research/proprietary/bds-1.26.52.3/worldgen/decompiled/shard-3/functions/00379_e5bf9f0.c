/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6bf9f0 (ELF vaddr 0xe5bf9f0)
 * Label: caller-of-callee
 * Body:  [[0e6bf9f0, 0e6c02da] [0e6c02e0, 0e6c0e93] [0e6c1d70, 0e6c1f52]]
 * Ghidra: FUN_0e6bf9f0
 */


/* WARNING: Possible PIC construction at 0x0e6bfc0e: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6bf9f0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  uint *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [8];
  long *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  code *pcVar15;
  code *pcVar16;
  long *plVar17;
  undefined8 *******pppppppuVar18;
  long *unaff_RBX;
  undefined8 ******ppppppuVar19;
  byte bVar20;
  uint uVar21;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  byte *pbVar26;
  ulong uVar27;
  undefined1 uVar28;
  long *unaff_R12;
  long *unaff_R13;
  undefined8 *unaff_R14;
  long *unaff_R15;
  bool bVar29;
  undefined1 auStack_208 [88];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
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
  long *plStack_e0;
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
  long *plStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  pcVar15 = (code *)param_3[7];
  if (pcVar15 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar29 = false;
    }
    else {
      uStack_1b0 = 0xe6bfa40;
      (*(code *)param_3[3])(param_3);
      bVar29 = (undefined *)param_3[7] == &UNK_0e6bebc0;
    }
    param_3[2] = (long)&UNK_0e6beca0;
    *(undefined4 *)(param_3 + 4) = 0xf76a965b;
    param_3[3] = (long)&UNK_0e6bee90;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0xe6bfa90;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      uStack_1b0 = 0xe6c0dce;
      FUN_0eec74c0(0x20,0);
    }
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *param_3 = lVar7;
    pcVar15 = (code *)&UNK_0e6bebc0;
    param_3[7] = (long)&UNK_0e6bebc0;
    if (bVar29) {
      lVar7 = param_3[6];
    }
    else {
      lVar7 = 0;
    }
    param_3[6] = lVar7;
    plVar17 = param_5;
    if (lVar7 == 0) goto LAB_0e6bfacf;
LAB_0e6bfae5:
    bVar20 = *(byte *)(lVar7 + 0x1a);
  }
  else {
    lVar7 = param_3[6];
    plVar17 = unaff_R15;
    if (lVar7 != 0) goto LAB_0e6bfae5;
LAB_0e6bfacf:
    plVar17 = (long *)param_3[5];
    uStack_1b0 = 0xe6bfadd;
    (*pcVar15)(0,param_3,0);
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_0e6bfae5;
    uStack_1b0 = 0xe6bfb15;
    lVar7 = func_0x048aead0(plVar17);
    bVar20 = *(byte *)(lVar7 + 0x1a);
  }
  if ((bVar20 & 1) == 0) goto SUB_0e6c1d70;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (long *)0x0;
    plStack_1a0 = (long *)0x0;
    uStack_1b0 = 0xe6bfc37;
    func_0x048b1dc0(&uStack_1a8);
    plVar12 = uStack_1a8;
    plVar17 = plStack_1a0;
joined_r0x0e6bfc42:
    if (plVar12 == (long *)0x0) {
      uStack_1b0 = 0xe6bfc50;
      plVar12 = (long *)func_0x048aead0(plVar17);
    }
  }
  else {
    plVar12 = (long *)param_3[6];
    if (plVar12 == (long *)0x0) {
      plVar17 = (long *)param_3[5];
      uStack_1b0 = 0xe6bfb3f;
      (*(code *)param_3[7])(0,param_3,0);
      plVar12 = (long *)param_3[6];
      goto joined_r0x0e6bfc42;
    }
  }
  unaff_R14 = (undefined8 *)plVar12[0xd];
  uStack_1b0 = 0xe6bfb59;
  bVar20 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar20 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0xe6bfc13;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = plVar17;
SUB_0e6c1d70:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar17 = (long *)*param_3;
    plVar12 = plVar17;
    if (cVar1 == '\x02') {
      plVar12 = param_3;
    }
    if (plVar12 == (long *)0x0 || (int)param_3[4] != -0x89569a5) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        pcVar15 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6c1dcf;
        (*pcVar15)(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar17 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar17 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6c1df1;
      plVar12 = (long *)func_0x0488e200(lVar7,lVar24,0xf76a965b,plVar17);
    }
    lVar7 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6c1e01;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x48),lVar7);
    bVar20 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar20 | 1;
    pcVar15 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6c1e1e;
    uVar13 = (*pcVar15)(param_2);
    *(byte *)((long)param_2 + 9) = bVar20;
    if ((uVar13 >> 0x20 & 1) == 0) {
      lVar7 = param_3[5];
      uVar21 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar21;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6c1e55;
      cVar1 = func_0x0e6c1f80(param_2,lVar7,plVar12,param_4,param_5,2);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar28 = 2;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar21;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
    }
    else {
      if ((uVar13 & 0xfffffffe) != 0) {
        lVar7 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6c1ec1;
        func_0x0ed5ffe0(lVar7,8,(undefined1 *)((long)register0x00000020 + -0x50));
        if ((*(ulong *)((long)register0x00000020 + -0x50) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar15 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6c1ee5;
        (*pcVar15)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x50) & 0xff00ffffffffffff) - 8);
        return;
      }
      lVar7 = param_3[5];
      uVar21 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x58) = uVar13;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar21;
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6c1f16;
      cVar1 = func_0x0e6c1f80(param_2,lVar7,plVar12,param_4,param_5,uVar13 & 0xff);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar28 = *(undefined1 *)((long)register0x00000020 + -0x58);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar21;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6c1f44;
    func_0x0e6c2180(param_2,lVar7,plVar12,param_4,param_5,uVar28);
    return;
  }
  puStack_b0 = unaff_R14;
  if (bVar20 != 1) {
    uStack_1a8 = (long *)0x120000012f2525;
    uStack_1b0 = 0xe6bfc80;
    func_0x0ed5ffe0(*param_5,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0xe6bfca3;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0xe6bfb98;
  plStack_150 = param_2;
  uStack_c8 = param_4;
  func_0x0ed6d600(&lStack_68,*param_5);
  lStack_48 = param_3[5];
  lStack_b8 = *param_5;
  ppppppuVar19 = (undefined8 ******)((long)puStack_b0 + 9);
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar22 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar22 = ppppppuVar19;
  }
  uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_b0[2];
  }
  plStack_c0 = param_5;
  if (ppppppuVar22 == (undefined8 ******)0x0) {
    puStack_f8 = (undefined *)((ulong)((uint)uVar13 & 0x7f) << 0x30);
  }
  else if (uVar13 < 0x80) {
    puStack_f8 = (undefined *)(uVar13 << 0x30 | (ulong)ppppppuVar22 & 0xff00ffffffffffff);
  }
  else {
    lVar7 = uVar13 + 9;
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,lVar7 == 0);
    uStack_1b0 = 0xe6bfcda;
    puVar3 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
    if (puVar3 == (ulong *)0x0 && (char)puStack_158 == '\0') {
      uStack_1b0 = 0xe6c0de3;
      FUN_0eec74c0(lVar7,8);
    }
    *puVar3 = uVar13;
    uStack_1b0 = 0xe6bfd05;
    func_0x0eee2f00(puVar3 + 1,ppppppuVar22,uVar13);
    *(undefined1 *)((long)puVar3 + uVar13 + 8) = 0;
    puStack_f8 = (undefined *)((ulong)(puVar3 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1b0 = 0xe6bfd44;
  puVar4 = (uint *)func_0x0ed6d180(lStack_b8,&puStack_f8,0);
  plVar17 = plStack_150;
  if (((ulong)puStack_f8 & 0x80000000000000) != 0) {
    uStack_1b0 = 0xe6bfd7b;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_f8 & 0xff00ffffffffffff) - 8);
  }
  puVar6 = puStack_b0;
  puStack_f8 = (undefined *)0x0;
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar22 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar22 = ppppppuVar19;
  }
  uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_b0[2];
  }
  uStack_1b0 = 0xe6bfdb4;
  cVar1 = (**(code **)(*plVar17 + 0xb8))(plVar17,ppppppuVar22,uVar13);
  if (cVar1 == '\0') {
    uStack_1b0 = 0xe6bfed3;
    puStack_158 = puVar4;
    _auStack_148 = (*(code *)*puVar6)(lStack_48);
    uStack_1b0 = 0xe6bfef9;
    func_0x0ed8bc80(&uStack_1a8,auStack_148,*(undefined1 *)(lStack_b8 + 0x2aa));
    plVar17 = (long *)((ulong)uStack_1a8 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      plVar17 = plStack_1a0;
      pcVar15 = pcStack_198;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (pcVar15 == (code *)0x0) {
      pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar17 & 0x7f) << 0x30);
    }
    else {
      lVar7 = (long)plVar17 + 9;
      uStack_1b0 = 0xe6bff48;
      puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
      if (lVar7 != 0 && puVar6 == (undefined8 *)0x0) {
        uStack_1b0 = 0xe6c0df5;
        FUN_0eec74c0(lVar7,8);
      }
      *puVar6 = plVar17;
      uStack_1b0 = 0xe6bff78;
      func_0x0eee2f00(puVar6 + 1,pcVar15,plVar17);
      *(undefined1 *)((long)(puVar6 + 1) + (long)plVar17) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar17 = plStack_150;
    puVar4 = puStack_158;
    uStack_1b0 = 0xe6c0103;
    func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0xe6c013c;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0xe6c0160;
      func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    pcStack_d8 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0xe6bfdd3;
    (**(code **)(*plVar17 + 0x80))(auStack_148,plVar17,0x40);
    cStack_168 = cStack_108;
    if (cStack_108 == '\0') {
      uStack_1a8 = (long *)auStack_148;
      plStack_1a0 = plStack_140;
      pcStack_198 = pcStack_138;
      pcStack_190 = pcStack_130;
      uStack_188 = lStack_128;
      lStack_180 = lStack_120;
      lStack_178 = lStack_118;
      puStack_170 = puStack_110;
      pppppppuStack_a8 = (undefined8 *******)puVar6[3];
      uStack_a0 = puVar6[2];
      if ((*(byte *)(puVar6 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar19;
        uStack_a0 = (ulong)(*(byte *)(puVar6 + 1) >> 1);
      }
      uStack_1b0 = 0xe6c0027;
      puStack_158 = puVar4;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar17 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar15 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar17 = plStack_140;
        pcVar15 = pcStack_138;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar15 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar17 & 0x7f) << 0x30);
      }
      else {
        lVar7 = (long)plVar17 + 9;
        uStack_1b0 = 0xe6c0077;
        puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
        if (lVar7 != 0 && puVar6 == (undefined8 *)0x0) {
          uStack_1b0 = 0xe6c0e07;
          FUN_0eec74c0(lVar7,8);
        }
        *puVar6 = plVar17;
        uStack_1b0 = 0xe6c00a7;
        func_0x0eee2f00(puVar6 + 1,pcVar15,plVar17);
        *(undefined1 *)((long)(puVar6 + 1) + (long)plVar17) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      plVar17 = plStack_150;
      puVar4 = puStack_158;
      uStack_1b0 = 0xe6c01d9;
      func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0xe6c0212;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1b0 = 0xe6c0238;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_e8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      pcStack_d8 = (code *)0x0;
    }
    else {
      pcStack_198 = pcStack_138;
      uStack_1a8 = (long *)auStack_148;
      plStack_1a0 = plStack_140;
      plVar12 = (long *)(ulong)(byte)(auStack_148[0] >> 1);
      pcVar15 = (code *)((long)&uStack_1a8 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar12 = plStack_140;
        pcVar15 = pcStack_138;
      }
      bVar20 = auStack_148[0];
      if (plVar12 != (long *)0x0) {
        uStack_1b0 = 0xe6bfe1f;
        plVar5 = (long *)func_0x0eee3290();
        pcVar16 = pcVar15;
        for (uVar13 = (ulong)plVar12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *(code *)(*plVar5 + (ulong)(byte)*pcVar16 * 4);
          pcVar16 = pcVar16 + 1;
        }
        if ((long *)0x3 < plVar12) {
          do {
            *pcVar16 = *(code *)(*plVar5 + (ulong)(byte)*pcVar16 * 4);
            pcVar16[1] = *(code *)(*plVar5 + (ulong)(byte)pcVar16[1] * 4);
            pcVar16[2] = *(code *)(*plVar5 + (ulong)(byte)pcVar16[2] * 4);
            pcVar16[3] = *(code *)(*plVar5 + (ulong)(byte)pcVar16[3] * 4);
            pcVar16 = pcVar16 + 4;
          } while (pcVar16 != pcVar15 + (long)plVar12);
        }
        bVar20 = (byte)uStack_1a8;
      }
      if ((bVar20 & 1) == 0) {
        pcStack_d8 = pcStack_198;
        uStack_e8 = uStack_1a8;
        plStack_e0 = plStack_1a0;
      }
      else {
        uStack_1b0 = 0xe6c0193;
        func_0x0412e5e0(&uStack_e8,pcStack_198,plStack_1a0);
      }
    }
    lVar7 = lStack_180;
    if (cStack_168 == '\x01') {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0xe6c0272;
        func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_180 != 0) {
        while (lVar7 != lStack_178) {
          uStack_1b0 = 0xe6c029c;
          func_0x048b3e80(lStack_178 + -0x40);
          lStack_178 = lStack_178 + -0x40;
        }
        lStack_178 = lVar7;
        uStack_1b0 = 0xe6c02b8;
        func_0x0412a280(lStack_180,(long)puStack_170 - lStack_180);
      }
      pcVar16 = pcStack_198;
      pcVar15 = pcStack_190;
      if (pcStack_198 != (code *)0x0) {
        for (; pcVar16 != pcVar15; pcVar15 = pcVar15 + -0x50) {
          if ((pcVar15[-8] == (code)0x1) && (((byte)pcVar15[-0x30] & 1) != 0)) {
            uStack_1b0 = 0xe6c0308;
            func_0x0412a280(*(undefined8 *)(pcVar15 + -0x20),
                            *(ulong *)(pcVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_190 = pcVar16;
        uStack_1b0 = 0xe6c0321;
        func_0x0412a280(pcStack_198,uStack_188 - (long)pcStack_198);
      }
    }
  }
  uStack_1b0 = 0xe6c0338;
  (**(code **)(*plVar17 + 0xd0))(plVar17);
  lVar7 = *(long *)(puVar4 + 2);
  uVar21 = *(uint *)(lVar7 + 0x1c + (ulong)*puVar4 * 0x20);
  *puVar4 = uVar21;
  if (puVar4[0x48] == 0) {
    uVar14 = puVar4[4];
LAB_0e6c037a:
    lVar24 = lVar7 + (ulong)uVar14 * 0x20;
    uVar13 = (ulong)*(uint *)(lVar7 + -0x10 + (ulong)uVar14 * 0x20);
    if (uVar13 != 0xffffffff) {
      uStack_1b0 = 0xe6c03a3;
      (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_1a8,lVar24 + -0x18);
      uVar14 = puVar4[4];
    }
    *(undefined4 *)(lVar24 + -0x10) = 0xffffffff;
    puVar4[4] = uVar14 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) != uVar21)
          && (uVar14 = puVar4[4], uVar21 == uVar14 - 1)) goto LAB_0e6c037a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0xe6c03e2;
    auStack_40 = (*(code *)*puStack_b0)();
    uVar10 = auStack_40._8_8_;
    lVar7 = auStack_40._0_8_;
    plVar17 = (long *)((ulong)uStack_e8 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_e8 + 1);
    if (((ulong)uStack_e8 & 1) != 0) {
      plVar17 = plStack_e0;
      pcVar15 = pcStack_d8;
    }
    if (plVar17 == (long *)0x0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)plVar17 & 3);
      if (plVar17 < (long *)0x4) {
        uVar21 = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar27 = 0;
        do {
          uVar21 = ((int)(char)pcVar15[uVar27 + 3] ^
                   ((int)(char)pcVar15[uVar27 + 2] ^
                   ((int)(char)pcVar15[uVar27 + 1] ^
                   ((int)(char)pcVar15[uVar27] ^ uVar21) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar27 = uVar27 + 4;
        } while (((ulong)plVar17 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uVar21 = ((int)(char)pcVar15[uVar23 + uVar27] ^ uVar21) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    if (lVar7 == 0) {
      uStack_1b0 = 0xe6c04d1;
      lVar7 = func_0x048aead0(uVar10);
    }
    uStack_1b0 = 0xe6c04e3;
    plStack_58 = (long *)func_0x048b0c90(uVar10,lVar7,uVar21,1);
    if (plStack_58 == (long *)0x0) {
      uStack_1a8 = (long *)0x0;
      plStack_1a0 = (long *)0x0;
      uStack_1b0 = 0xe6c0511;
      FUN_048b0d20(&uStack_1a8);
      plStack_58 = uStack_1a8;
      plStack_50 = plStack_1a0;
      if (uStack_1a8 == (long *)0x0) {
        lVar7 = *plStack_c0;
        uStack_1b0 = 0xe6c0beb;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar7 + 0x2aa));
        uStack_1b0 = 0xe6c0bff;
        uVar10 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        plVar17 = (long *)((ulong)uStack_e8 >> 1 & 0x7f);
        pcVar15 = (code *)((long)&uStack_e8 + 1);
        if (((ulong)uStack_e8 & 1) != 0) {
          plVar17 = plStack_e0;
          pcVar15 = pcStack_d8;
        }
        uStack_1b0 = 0xe6c0c2b;
        uVar10 = func_0x0412f8c0(uVar10,pcVar15,plVar17);
        uStack_1b0 = 0xe6c0c3f;
        pbVar11 = (byte *)func_0x0412f8c0(uVar10,&UNK_0125506d,1);
        bVar29 = (*pbVar11 & 1) != 0;
        pbVar26 = pbVar11 + 1;
        if (bVar29) {
          pbVar26 = *(byte **)(pbVar11 + 0x10);
        }
        uVar13 = (ulong)(*pbVar11 >> 1);
        if (bVar29) {
          uVar13 = *(ulong *)(pbVar11 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1b0 = 0xe6c0c71;
        func_0x0ee387f0(auStack_148,pbVar26,uVar13,1);
        uStack_1b0 = 0xe6c0c83;
        func_0x0ed5ffe0(lVar7,8,auStack_148);
        uStack_1b0 = 0xe6c0c8d;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0xe6c0ca9;
          func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_0e6c0d69;
      }
    }
    else {
      plStack_50 = (long *)auStack_40._8_8_;
    }
    lStack_178 = 0;
    puStack_170 = (undefined *)0x0;
    uStack_188 = 0;
    lStack_180 = 0;
    pcStack_198 = (code *)0x0;
    pcStack_190 = (code *)0x0;
    uStack_1a8 = (long *)0x0;
    plStack_1a0 = (long *)0x0;
    uStack_1b0 = 0xe6c0546;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0xe6c055e;
    func_0x05d9a920(&pppppppuStack_a8,&plStack_58,&uStack_1a8);
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xe6c056d;
      (*pcStack_190)(&uStack_1a8);
    }
    bVar29 = (*(byte *)(puStack_b0 + 1) & 1) != 0;
    if (bVar29) {
      ppppppuVar19 = (undefined8 ******)puStack_b0[3];
    }
    uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
    if (bVar29) {
      uVar13 = puStack_b0[2];
    }
    if (uVar13 == 0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar27 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uVar21 = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar23 = 0;
        do {
          uVar21 = ((int)*(char *)((long)ppppppuVar19 + uVar23 + 3) ^
                   ((int)*(char *)((long)ppppppuVar19 + uVar23 + 2) ^
                   ((int)*(char *)((long)ppppppuVar19 + uVar23 + 1) ^
                   ((int)*(char *)((long)ppppppuVar19 + uVar23) ^ uVar21) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar27 != 0) {
        uVar13 = 0;
        do {
          uVar21 = ((int)*(char *)((long)ppppppuVar19 + uVar13 + uVar23) ^ uVar21) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar27 != uVar13);
      }
    }
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar17 = (long *)*param_3;
    plVar12 = plVar17;
    if (cVar1 == '\x02') {
      plVar12 = param_3;
    }
    if (plVar12 == (long *)0x0 || (int)param_3[4] != -0x89569a5) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        uStack_1b0 = 0xe6c0670;
        (*(code *)param_3[7])(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar17 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar17 = param_3;
      }
      uStack_1b0 = 0xe6c0692;
      plVar12 = (long *)func_0x0488e200(lVar7,lVar24,0xf76a965b,plVar17);
    }
    plVar17 = (long *)param_3[5];
    if (DAT_0f755dd8 == '\0') {
      uStack_1b0 = 0xe6c0e18;
      iVar2 = func_0x04108328(&DAT_0f755dd8);
      if (iVar2 != 0) {
        uStack_1b0 = 0xe6c0e25;
        func_0x0e550ae0();
        uStack_1b0 = 0xe6c0e3f;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755d58,0xf53dab8);
        uStack_1b0 = 0xe6c0e4b;
        func_0x0410844d(&DAT_0f755dd8);
      }
    }
    plVar5 = (long *)(*plVar17 +
                     (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                            *(uint *)(_DAT_0f755d58 + 4)) * 8);
    do {
      lVar7 = *plVar5;
      if (lVar7 == -1) {
        plVar9 = (long *)plVar17[4];
        plVar5 = plVar9;
        goto LAB_0e6c0704;
      }
      plVar5 = (long *)(plVar17[3] + lVar7 * 0x18);
    } while (*(uint *)(plVar17[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f755d58 + 4));
    plVar9 = (long *)plVar17[4];
LAB_0e6c0704:
    if (plVar5 == plVar9) {
      puVar25 = &DAT_0f755d58;
    }
    else {
      puVar25 = (undefined *)plVar5[2];
    }
    uStack_1b0 = 0xe6c0726;
    auVar8 = (undefined1  [8])func_0x048b0c90(plVar17,puVar25,uVar21,1);
    plStack_f0 = plVar17;
    if (auVar8 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0xe6c073d;
      FUN_048b0d20(auStack_148);
      auVar8 = auStack_148;
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
    uStack_1b0 = 0xe6c077e;
    puStack_f8 = (undefined *)auVar8;
    func_0x05d84ba0(auStack_148);
    uStack_1b0 = 0xe6c0793;
    func_0x05d9a920(&uStack_1a8,&puStack_f8,auStack_148);
    if ((lStack_180 == lStack_80) && ((lStack_70 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_84 == '\0') || ((int)uStack_188 != iStack_88)) {
        bVar29 = cStack_84 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        pppppppuVar18 = pppppppuStack_a8;
        if (cStack_84 == '\x02') {
          pppppppuVar18 = &pppppppuStack_a8;
        }
        uStack_1b0 = 0xe6c0db3;
        lVar7 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar18);
        bVar29 = lVar7 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xe6c07d1;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1b0 = 0xe6c07e2;
      (*pcStack_130)(auStack_148);
    }
    if (bVar29) {
      lVar7 = param_3[5];
      if ((ulong)*(uint *)(plVar12 + 3) != 0xffffffff) {
        uStack_1b0 = 0xe6c080f;
        (**(code **)(&UNK_0f4bdc30 + (ulong)*(uint *)(plVar12 + 3) * 8))(auStack_148,plVar12);
      }
      *(undefined4 *)(plVar12 + 3) = 0;
      pcStack_198 = (code *)&UNK_0e550d90;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x36412d7f1);
      lStack_178 = 0;
      puStack_170 = &UNK_0e550cb0;
      lStack_128 = plStack_c0[4];
      auStack_148 = (undefined1  [8])*plStack_c0;
      plStack_140 = (long *)plStack_c0[1];
      pcStack_138 = (code *)plStack_c0[2];
      pcStack_130 = (code *)plStack_c0[3];
      plVar17 = (long *)plStack_c0[2];
      lStack_180 = lVar7;
      if (plVar17 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
        uStack_1a8 = plVar12;
      }
      else {
        uStack_1b0 = 0xe6c0890;
        uStack_1a8 = plVar12;
        pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,0);
      }
      puStack_f8 = &UNK_0f4c6bb8;
      uStack_1b0 = 0xe6c0bb1;
      func_0x0ed75bc0(&puStack_f8,plStack_150,&uStack_1a8,uStack_c8,auStack_148);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xe6c0bc4;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar17 = (long *)param_3[5];
      if (DAT_0f755e90 == '\0') {
        uStack_1b0 = 0xe6c0e5c;
        iVar2 = func_0x04108328(&DAT_0f755e90);
        if (iVar2 != 0) {
          uStack_1b0 = 0xe6c0e69;
          func_0x0e551b30();
          uStack_1b0 = 0xe6c0e83;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f755e10,0xf53dab8);
          uStack_1b0 = 0xe6c0e8f;
          func_0x0410844d(&DAT_0f755e90);
        }
      }
      plVar5 = (long *)(*plVar17 +
                       (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                              *(uint *)(_DAT_0f755e10 + 4)) * 8);
      do {
        lVar7 = *plVar5;
        if (lVar7 == -1) {
          plVar9 = (long *)plVar17[4];
          plVar5 = plVar9;
          goto LAB_0e6c0904;
        }
        plVar5 = (long *)(plVar17[3] + lVar7 * 0x18);
      } while (*(uint *)(plVar17[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f755e10 + 4));
      plVar9 = (long *)plVar17[4];
LAB_0e6c0904:
      if (plVar5 == plVar9) {
        puVar25 = &DAT_0f755e10;
      }
      else {
        puVar25 = (undefined *)plVar5[2];
      }
      uStack_1b0 = 0xe6c0962;
      auVar8 = (undefined1  [8])func_0x048b0c90(plVar17,puVar25,uVar21,1);
      if (auVar8 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0xe6c0979;
        FUN_048b0d20(auStack_148);
        auVar8 = auStack_148;
        plVar17 = plStack_140;
      }
      lStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0xe6c09ba;
      puStack_f8 = (undefined *)auVar8;
      plStack_f0 = plVar17;
      func_0x05d84ba0(auStack_148);
      uStack_1b0 = 0xe6c09cf;
      func_0x05d9a920(&uStack_1a8,&puStack_f8,auStack_148);
      if ((lStack_180 == lStack_80) && ((lStack_70 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_84 == '\0') || ((int)uStack_188 != iStack_88)) {
          bVar29 = cStack_84 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          pppppppuVar18 = &pppppppuStack_a8;
          if (cStack_84 != '\x02') {
            pppppppuVar18 = pppppppuStack_a8;
          }
          uStack_1b0 = 0xe6c0d00;
          lVar7 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar18);
          bVar29 = lVar7 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xe6c0a0c;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1b0 = 0xe6c0a1d;
        (*pcStack_130)(auStack_148);
      }
      if (bVar29) {
        lVar7 = param_3[5];
        if ((ulong)*(uint *)(plVar12 + 3) != 0xffffffff) {
          uStack_1b0 = 0xe6c0a49;
          (**(code **)(&UNK_0f4bdc30 + (ulong)*(uint *)(plVar12 + 3) * 8))(auStack_148,plVar12);
        }
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[2] = 0;
        *(undefined4 *)(plVar12 + 3) = 1;
        pcStack_198 = (code *)&UNK_0e551e30;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x359308c93);
        lStack_178 = 0;
        puStack_170 = &UNK_0e551d50;
        lStack_128 = plStack_c0[4];
        auStack_148 = (undefined1  [8])*plStack_c0;
        plStack_140 = (long *)plStack_c0[1];
        pcStack_138 = (code *)plStack_c0[2];
        pcStack_130 = (code *)plStack_c0[3];
        plVar17 = (long *)plStack_c0[2];
        lStack_180 = lVar7;
        if (plVar17 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
          uStack_1a8 = plVar12;
        }
        else {
          uStack_1b0 = 0xe6c0adc;
          uStack_1a8 = plVar12;
          pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,1);
        }
        puStack_f8 = &UNK_0f4c6c38;
        uStack_1b0 = 0xe6c0d43;
        func_0x0ed75bc0(&puStack_f8,plStack_150,&uStack_1a8,uStack_c8,auStack_148);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0xe6c0d52;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
              (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
        uStack_1a8 = (long *)0x2300000149614c;
        uStack_1b0 = 0xe6c0b41;
        func_0x0ed5ffe0(*plStack_c0,8,&uStack_1a8);
        if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
          uStack_1b0 = 0xe6c0b6c;
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
        }
        uStack_1a8 = (long *)0x0;
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1b0 = 0xe6c0d69;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_0e6c0d69:
  if (((ulong)uStack_e8 & 1) != 0) {
    uStack_1b0 = 0xe6c0d90;
    func_0x0412a280(pcStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  return;
}


