/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6a6c20 (ELF vaddr 0xe5a6c20)
 * Label: caller-of-callee
 * Body:  [[0e6a6c20, 0e6a751a] [0e6a7520, 0e6a83e0] [0e6a9760, 0e6a99a5]]
 * Ghidra: FUN_0e6a6c20
 */


/* WARNING: Possible PIC construction at 0x0e6a6e3e: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6a6c20(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  uint *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [8];
  undefined8 uVar9;
  byte *pbVar10;
  long *plVar11;
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
  byte *pbVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined4 uVar28;
  long *unaff_R12;
  long *unaff_R13;
  undefined8 *unaff_R14;
  long *unaff_R15;
  bool bVar29;
  byte abStack_1f0 [80];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  code *pcStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  char cStack_158;
  long *plStack_148;
  uint *puStack_140;
  undefined *puStack_138;
  long *plStack_130;
  undefined1 auStack_128 [8];
  long *plStack_120;
  code *pcStack_118;
  code *pcStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  char cStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  code *pcStack_c8;
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
      uStack_1a0 = 0xe6a6c70;
      (*(code *)param_3[3])(param_3);
      bVar29 = (undefined *)param_3[7] == &UNK_0e6a99d0;
    }
    param_3[2] = (long)&UNK_0e6a9ab0;
    *(undefined4 *)(param_3 + 4) = 0x2d3e8364;
    param_3[3] = (long)&UNK_0e6a9ca0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0xe6a6cc0;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (lVar7 == 0) {
      uStack_1a0 = 0xe6a82d7;
      func_0x0eec74c0(0x40,0);
    }
    *(undefined4 *)(lVar7 + 0x38) = 0;
    *param_3 = lVar7;
    pcVar15 = (code *)&UNK_0e6a99d0;
    param_3[7] = (long)&UNK_0e6a99d0;
    if (bVar29) {
      lVar7 = param_3[6];
    }
    else {
      lVar7 = 0;
    }
    param_3[6] = lVar7;
    plVar17 = param_5;
    if (lVar7 == 0) goto LAB_0e6a6cff;
LAB_0e6a6d15:
    bVar20 = *(byte *)(lVar7 + 0x1a);
  }
  else {
    lVar7 = param_3[6];
    plVar17 = unaff_R15;
    if (lVar7 != 0) goto LAB_0e6a6d15;
LAB_0e6a6cff:
    plVar17 = (long *)param_3[5];
    uStack_1a0 = 0xe6a6d0d;
    (*pcVar15)(0,param_3,0);
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_0e6a6d15;
    uStack_1a0 = 0xe6a6d45;
    lVar7 = FUN_048aead0(plVar17);
    bVar20 = *(byte *)(lVar7 + 0x1a);
  }
  if ((bVar20 & 1) == 0) goto SUB_0e6a9760;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0xe6a6e67;
    func_0x048b1dc0(&uStack_198);
    plVar12 = uStack_198;
    plVar17 = plStack_190;
joined_r0x0e6a6e72:
    if (plVar12 == (long *)0x0) {
      uStack_1a0 = 0xe6a6e80;
      plVar12 = (long *)FUN_048aead0(plVar17);
    }
  }
  else {
    plVar12 = (long *)param_3[6];
    if (plVar12 == (long *)0x0) {
      plVar17 = (long *)param_3[5];
      uStack_1a0 = 0xe6a6d6f;
      (*(code *)param_3[7])(0,param_3,0);
      plVar12 = (long *)param_3[6];
      goto joined_r0x0e6a6e72;
    }
  }
  unaff_R14 = (undefined8 *)plVar12[0xd];
  uStack_1a0 = 0xe6a6d89;
  bVar20 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar20 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0xe6a6e43;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = plVar17;
SUB_0e6a9760:
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
    if (plVar12 == (long *)0x0 || (int)param_3[4] != 0x2d3e8364) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        pcVar15 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6a97bf;
        (*pcVar15)(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar17 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar17 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6a97e1;
      plVar12 = (long *)FUN_0488e200(lVar7,lVar24,0x2d3e8364,plVar17);
    }
    lVar7 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6a97f1;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar7);
    bVar20 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar20 | 1;
    pcVar15 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6a980e;
    uVar13 = (*pcVar15)(param_2);
    *(byte *)((long)param_2 + 9) = bVar20;
    if ((uVar13 >> 0x20 & 1) == 0) {
      lVar7 = param_3[5];
      uVar27 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6a9849;
      cVar1 = func_0x0e6aa090(param_2,lVar7,plVar12,param_4,param_5,3);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6a9876;
      cVar1 = func_0x0e6aa2a0(param_2,lVar7,plVar12,param_4,param_5,3);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar28 = 3;
    }
    else {
      if (2 < (uint)uVar13) {
        lVar7 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6a9973;
        func_0x0ed5ffe0(lVar7,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar15 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6a9997;
        (*pcVar15)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      lVar7 = param_3[5];
      uVar27 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x50) = uVar13;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6a98d7;
      cVar1 = func_0x0e6aa090(param_2,lVar7,plVar12,param_4,param_5,uVar13 & 0xff);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(uint *)((long)register0x00000020 + -0x50) =
           (uint)*(byte *)((long)register0x00000020 + -0x50);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6a9909;
      cVar1 = func_0x0e6aa2a0(param_2,lVar7,plVar12,param_4,param_5);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar28 = *(undefined4 *)((long)register0x00000020 + -0x50);
    }
    *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6a9935;
    func_0x0e6aa4d0(param_2,lVar7,plVar12,param_4,param_5,uVar28);
    return;
  }
  puStack_b0 = unaff_R14;
  if (bVar20 != 1) {
    uStack_198 = (long *)0x120000012f2525;
    uStack_1a0 = 0xe6a6eb0;
    func_0x0ed5ffe0(*param_5,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0xe6a6ed3;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0xe6a6dc8;
  plStack_148 = param_2;
  uStack_e0 = param_4;
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
    puStack_138 = (undefined *)((ulong)((uint)uVar13 & 0x7f) << 0x30);
  }
  else if (uVar13 < 0x80) {
    puStack_138 = (undefined *)(uVar13 << 0x30 | (ulong)ppppppuVar22 & 0xff00ffffffffffff);
  }
  else {
    lVar7 = uVar13 + 9;
    puStack_140 = (uint *)CONCAT71(puStack_140._1_7_,lVar7 == 0);
    uStack_1a0 = 0xe6a6f0a;
    puVar3 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
    if (puVar3 == (ulong *)0x0 && (char)puStack_140 == '\0') {
      uStack_1a0 = 0xe6a82ec;
      func_0x0eec74c0(lVar7,8);
    }
    *puVar3 = uVar13;
    uStack_1a0 = 0xe6a6f35;
    memcpy(puVar3 + 1,ppppppuVar22,uVar13);
    *(undefined1 *)((long)puVar3 + uVar13 + 8) = 0;
    puStack_138 = (undefined *)((ulong)(puVar3 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0xe6a6f6e;
  puVar4 = (uint *)func_0x0ed6d180(lStack_b8,&puStack_138,0);
  plVar17 = plStack_148;
  if (((ulong)puStack_138 & 0x80000000000000) != 0) {
    uStack_1a0 = 0xe6a6fa2;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_138 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar6 = puStack_b0;
  puStack_138 = (undefined *)0x0;
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar22 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar22 = ppppppuVar19;
  }
  uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_b0[2];
  }
  uStack_1a0 = 0xe6a6fd8;
  cVar1 = (**(code **)(*plVar17 + 0xb8))(plVar17,ppppppuVar22,uVar13);
  if (cVar1 == '\0') {
    uStack_1a0 = 0xe6a7103;
    puStack_140 = puVar4;
    _auStack_128 = (*(code *)*puVar6)(lStack_48);
    uStack_1a0 = 0xe6a7129;
    func_0x0ed8bc80(&uStack_198,auStack_128,*(undefined1 *)(lStack_b8 + 0x2aa));
    plVar17 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_198 + 1);
    if (((ulong)uStack_198 & 1) != 0) {
      plVar17 = plStack_190;
      pcVar15 = pcStack_188;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (pcVar15 == (code *)0x0) {
      pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar17 & 0x7f) << 0x30);
    }
    else {
      lVar7 = (long)plVar17 + 9;
      uStack_1a0 = 0xe6a7178;
      puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
      if (lVar7 != 0 && puVar6 == (undefined8 *)0x0) {
        uStack_1a0 = 0xe6a82fe;
        func_0x0eec74c0(lVar7,8);
      }
      *puVar6 = plVar17;
      uStack_1a0 = 0xe6a71a7;
      memcpy(puVar6 + 1,pcVar15,plVar17);
      *(undefined1 *)((long)(puVar6 + 1) + (long)plVar17) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar4 = puStack_140;
    plVar17 = plStack_148;
    uStack_1a0 = 0xe6a7341;
    func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0xe6a7370;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0xe6a7394;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0xe6a6ff7;
    (**(code **)(*plVar17 + 0x80))(auStack_128,plVar17,0x40);
    cStack_158 = cStack_e8;
    if (cStack_e8 == '\0') {
      uStack_198 = (long *)auStack_128;
      plStack_190 = plStack_120;
      pcStack_188 = pcStack_118;
      pcStack_180 = pcStack_110;
      uStack_178 = lStack_108;
      lStack_170 = lStack_100;
      lStack_168 = lStack_f8;
      puStack_160 = puStack_f0;
      pppppppuStack_a8 = (undefined8 *******)puVar6[3];
      uStack_a0 = puVar6[2];
      if ((*(byte *)(puVar6 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar19;
        uStack_a0 = (ulong)(*(byte *)(puVar6 + 1) >> 1);
      }
      uStack_1a0 = 0xe6a7259;
      puStack_140 = puVar4;
      func_0x0470d9a0(auStack_128,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar17 = (long *)((ulong)auStack_128 >> 1 & 0x7f);
      pcVar15 = (code *)(auStack_128 + 1);
      if (((ulong)auStack_128 & 1) != 0) {
        plVar17 = plStack_120;
        pcVar15 = pcStack_118;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar15 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar17 & 0x7f) << 0x30);
      }
      else {
        lVar7 = (long)plVar17 + 9;
        uStack_1a0 = 0xe6a72ac;
        puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
        if (lVar7 != 0 && puVar6 == (undefined8 *)0x0) {
          uStack_1a0 = 0xe6a8310;
          func_0x0eec74c0(lVar7,8);
        }
        *puVar6 = plVar17;
        uStack_1a0 = 0xe6a72db;
        memcpy(puVar6 + 1,pcVar15,plVar17);
        *(undefined1 *)((long)(puVar6 + 1) + (long)plVar17) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      puVar4 = puStack_140;
      plVar17 = plStack_148;
      uStack_1a0 = 0xe6a7417;
      func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0xe6a7446;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_128 & 1) != 0) {
        uStack_1a0 = 0xe6a746f;
        func_0x0412a280(pcStack_118,(ulong)auStack_128 & 0xfffffffffffffffe);
      }
      uStack_d8 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_188 = pcStack_118;
      uStack_198 = (long *)auStack_128;
      plStack_190 = plStack_120;
      plVar12 = (long *)(ulong)(byte)(auStack_128[0] >> 1);
      pcVar15 = (code *)((long)&uStack_198 + 1);
      if (((ulong)auStack_128 & 1) != 0) {
        plVar12 = plStack_120;
        pcVar15 = pcStack_118;
      }
      bVar20 = auStack_128[0];
      if (plVar12 != (long *)0x0) {
        uStack_1a0 = 0xe6a704a;
        plVar5 = (long *)__ctype_tolower_loc();
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
        bVar20 = (byte)uStack_198;
      }
      if ((bVar20 & 1) == 0) {
        pcStack_c8 = pcStack_188;
        uStack_d8 = uStack_198;
        plStack_d0 = plStack_190;
      }
      else {
        uStack_1a0 = 0xe6a73c7;
        func_0x0412e5e0(&uStack_d8,pcStack_188,plStack_190);
      }
    }
    lVar7 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0xe6a74a9;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar7 != lStack_168) {
          uStack_1a0 = 0xe6a74dc;
          func_0x048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar7;
        uStack_1a0 = 0xe6a74f8;
        func_0x0412a280(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar16 = pcStack_188;
      pcVar15 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar16 != pcVar15; pcVar15 = pcVar15 + -0x50) {
          if ((pcVar15[-8] == (code)0x1) && (((byte)pcVar15[-0x30] & 1) != 0)) {
            uStack_1a0 = 0xe6a7548;
            func_0x0412a280(*(undefined8 *)(pcVar15 + -0x20),
                            *(ulong *)(pcVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar16;
        uStack_1a0 = 0xe6a7561;
        func_0x0412a280(pcStack_188,uStack_178 - (long)pcStack_188);
      }
    }
  }
  uStack_1a0 = 0xe6a7578;
  (**(code **)(*plVar17 + 0xd0))(plVar17);
  lVar7 = *(long *)(puVar4 + 2);
  uVar21 = *(uint *)(lVar7 + 0x1c + (ulong)*puVar4 * 0x20);
  *puVar4 = uVar21;
  if (puVar4[0x48] == 0) {
    uVar14 = puVar4[4];
LAB_0e6a75ba:
    lVar24 = lVar7 + (ulong)uVar14 * 0x20;
    uVar13 = (ulong)*(uint *)(lVar7 + -0x10 + (ulong)uVar14 * 0x20);
    if (uVar13 != 0xffffffff) {
      uStack_1a0 = 0xe6a75e3;
      (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_198,lVar24 + -0x18);
      uVar14 = puVar4[4];
    }
    *(undefined4 *)(lVar24 + -0x10) = 0xffffffff;
    puVar4[4] = uVar14 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) != uVar21)
          && (uVar14 = puVar4[4], uVar21 == uVar14 - 1)) goto LAB_0e6a75ba;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0xe6a7622;
    auStack_40 = (*(code *)*puStack_b0)();
    uVar9 = auStack_40._8_8_;
    lVar7 = auStack_40._0_8_;
    plVar17 = (long *)((ulong)uStack_d8 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      plVar17 = plStack_d0;
      pcVar15 = pcStack_c8;
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
      uStack_1a0 = 0xe6a7711;
      lVar7 = FUN_048aead0(uVar9);
    }
    uStack_1a0 = 0xe6a7723;
    plStack_58 = (long *)func_0x048b0c90(uVar9,lVar7,uVar21,1);
    if (plStack_58 == (long *)0x0) {
      uStack_198 = (long *)0x0;
      plStack_190 = (long *)0x0;
      uStack_1a0 = 0xe6a7751;
      func_0x048b0d20(&uStack_198);
      plStack_58 = uStack_198;
      plStack_50 = plStack_190;
      if (uStack_198 == (long *)0x0) {
        lVar7 = *plStack_c0;
        uStack_1a0 = 0xe6a7e03;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar7 + 0x2aa));
        uStack_1a0 = 0xe6a7e17;
        uVar9 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        plVar17 = (long *)((ulong)uStack_d8 >> 1 & 0x7f);
        pcVar15 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          plVar17 = plStack_d0;
          pcVar15 = pcStack_c8;
        }
        uStack_1a0 = 0xe6a7e43;
        uVar9 = func_0x0412f8c0(uVar9,pcVar15,plVar17);
        uStack_1a0 = 0xe6a7e57;
        pbVar10 = (byte *)func_0x0412f8c0(uVar9,&UNK_0125506d,1);
        bVar29 = (*pbVar10 & 1) != 0;
        pbVar25 = pbVar10 + 1;
        if (bVar29) {
          pbVar25 = *(byte **)(pbVar10 + 0x10);
        }
        uVar13 = (ulong)(*pbVar10 >> 1);
        if (bVar29) {
          uVar13 = *(ulong *)(pbVar10 + 8);
        }
        auStack_128 = (undefined1  [8])0x0;
        uStack_1a0 = 0xe6a7e89;
        func_0x0ee387f0(auStack_128,pbVar25,uVar13,1);
        uStack_1a0 = 0xe6a7e9b;
        func_0x0ed5ffe0(lVar7,8,auStack_128);
        uStack_1a0 = 0xe6a7ea5;
        func_0x0ee386e0(auStack_128);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0xe6a7ec1;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0e6a8254;
      }
    }
    else {
      plStack_50 = (long *)auStack_40._8_8_;
    }
    lStack_168 = 0;
    puStack_160 = (undefined *)0x0;
    uStack_178 = 0;
    lStack_170 = 0;
    pcStack_188 = (code *)0x0;
    pcStack_180 = (code *)0x0;
    uStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0xe6a7786;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0xe6a779e;
    func_0x05d9a920(&pppppppuStack_a8,&plStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe6a77ad;
      (*pcStack_180)(&uStack_198);
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
    if (plVar12 == (long *)0x0 || (int)param_3[4] != 0x2d3e8364) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        uStack_1a0 = 0xe6a78b0;
        (*(code *)param_3[7])(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar17 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar17 = param_3;
      }
      uStack_1a0 = 0xe6a78d2;
      plVar12 = (long *)FUN_0488e200(lVar7,lVar24,0x2d3e8364,plVar17);
    }
    plVar17 = (long *)param_3[5];
    if (DAT_0f7550e8 == '\0') {
      uStack_1a0 = 0xe6a8321;
      iVar2 = func_0x04108328(&DAT_0f7550e8);
      if (iVar2 != 0) {
        uStack_1a0 = 0xe6a832e;
        func_0x0e524ba0();
        uStack_1a0 = 0xe6a8348;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755068,0xf53dab8);
        uStack_1a0 = 0xe6a8354;
        func_0x0410844d(&DAT_0f7550e8);
      }
    }
    plVar5 = (long *)(*plVar17 +
                     (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                            *(uint *)(_DAT_0f755068 + 4)) * 8);
    do {
      lVar7 = *plVar5;
      if (lVar7 == -1) {
        plVar11 = (long *)plVar17[4];
        plVar5 = plVar11;
        goto LAB_0e6a7944;
      }
      plVar5 = (long *)(plVar17[3] + lVar7 * 0x18);
    } while (*(uint *)(plVar17[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f755068 + 4));
    plVar11 = (long *)plVar17[4];
LAB_0e6a7944:
    if (plVar5 == plVar11) {
      puVar26 = &DAT_0f755068;
    }
    else {
      puVar26 = (undefined *)plVar5[2];
    }
    uStack_1a0 = 0xe6a7966;
    auVar8 = (undefined1  [8])func_0x048b0c90(plVar17,puVar26,uVar21,1);
    plStack_130 = plVar17;
    if (auVar8 == (undefined1  [8])0x0) {
      auStack_128 = (undefined1  [8])0x0;
      plStack_120 = (long *)0x0;
      uStack_1a0 = 0xe6a797d;
      func_0x048b0d20(auStack_128);
      auVar8 = auStack_128;
      plStack_130 = plStack_120;
    }
    lStack_f8 = 0;
    puStack_f0 = (undefined *)0x0;
    lStack_108 = 0;
    lStack_100 = 0;
    pcStack_118 = (code *)0x0;
    pcStack_110 = (code *)0x0;
    auStack_128 = (undefined1  [8])0x0;
    plStack_120 = (long *)0x0;
    uStack_1a0 = 0xe6a79bb;
    puStack_138 = (undefined *)auVar8;
    func_0x05d84ba0(auStack_128);
    uStack_1a0 = 0xe6a79cd;
    func_0x05d9a920(&uStack_198,&puStack_138,auStack_128);
    if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
        bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar18 = pppppppuStack_a8;
        if (cStack_84 == '\x02') {
          pppppppuVar18 = &pppppppuStack_a8;
        }
        uStack_1a0 = 0xe6a829e;
        lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar18);
        bVar29 = lVar7 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe6a7a0b;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_110 != (code *)0x0) {
      uStack_1a0 = 0xe6a7a1f;
      (*pcStack_110)(auStack_128);
    }
    if (bVar29) {
      lVar7 = param_3[5];
      if ((ulong)*(uint *)(plVar12 + 7) != 0xffffffff) {
        uStack_1a0 = 0xe6a7a4c;
        (**(code **)(&UNK_0f4bd0e0 + (ulong)*(uint *)(plVar12 + 7) * 8))(auStack_128,plVar12);
      }
      *(undefined4 *)(plVar12 + 7) = 0;
      pcStack_188 = (code *)&UNK_0e524e50;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x3e522e3ac);
      lStack_168 = 0;
      puStack_160 = &UNK_0e524d70;
      lStack_108 = plStack_c0[4];
      auStack_128 = (undefined1  [8])*plStack_c0;
      plStack_120 = (long *)plStack_c0[1];
      pcStack_118 = (code *)plStack_c0[2];
      pcStack_110 = (code *)plStack_c0[3];
      plVar17 = (long *)plStack_c0[2];
      lStack_170 = lVar7;
      if (plVar17 == (long *)0x0) {
        pcStack_118 = (code *)0x0;
        uStack_198 = plVar12;
      }
      else {
        uStack_1a0 = 0xe6a7ad0;
        uStack_198 = plVar12;
        pcStack_118 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,0);
      }
      puStack_138 = &UNK_0f4c5fb0;
      uStack_1a0 = 0xe6a7dc9;
      func_0x0ed75bc0(&puStack_138,plStack_148,&uStack_198,uStack_e0,auStack_128);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe6a7ddc;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar17 = (long *)param_3[5];
      if (DAT_0f755310 == '\0') {
        uStack_1a0 = 0xe6a8365;
        iVar2 = func_0x04108328(&DAT_0f755310);
        if (iVar2 != 0) {
          uStack_1a0 = 0xe6a8372;
          func_0x0e529d10();
          uStack_1a0 = 0xe6a838c;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f755290,0xf53dab8);
          uStack_1a0 = 0xe6a8398;
          func_0x0410844d(&DAT_0f755310);
        }
      }
      plVar5 = (long *)(*plVar17 +
                       (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                              *(uint *)(_DAT_0f755290 + 4)) * 8);
      do {
        lVar7 = *plVar5;
        if (lVar7 == -1) {
          plVar11 = (long *)plVar17[4];
          plVar5 = plVar11;
          goto LAB_0e6a7b44;
        }
        plVar5 = (long *)(plVar17[3] + lVar7 * 0x18);
      } while (*(uint *)(plVar17[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f755290 + 4));
      plVar11 = (long *)plVar17[4];
LAB_0e6a7b44:
      if (plVar5 == plVar11) {
        puVar26 = &DAT_0f755290;
      }
      else {
        puVar26 = (undefined *)plVar5[2];
      }
      uStack_1a0 = 0xe6a7ba2;
      auVar8 = (undefined1  [8])func_0x048b0c90(plVar17,puVar26,uVar21,1);
      if (auVar8 == (undefined1  [8])0x0) {
        auStack_128 = (undefined1  [8])0x0;
        plStack_120 = (long *)0x0;
        uStack_1a0 = 0xe6a7bb9;
        func_0x048b0d20(auStack_128);
        auVar8 = auStack_128;
        plVar17 = plStack_120;
      }
      lStack_f8 = 0;
      puStack_f0 = (undefined *)0x0;
      lStack_108 = 0;
      lStack_100 = 0;
      pcStack_118 = (code *)0x0;
      pcStack_110 = (code *)0x0;
      auStack_128 = (undefined1  [8])0x0;
      plStack_120 = (long *)0x0;
      uStack_1a0 = 0xe6a7bf7;
      puStack_138 = (undefined *)auVar8;
      plStack_130 = plVar17;
      func_0x05d84ba0(auStack_128);
      uStack_1a0 = 0xe6a7c09;
      func_0x05d9a920(&uStack_198,&puStack_138,auStack_128);
      if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
          bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar18 = pppppppuStack_a8;
          if (cStack_84 == '\x02') {
            pppppppuVar18 = &pppppppuStack_a8;
          }
          uStack_1a0 = 0xe6a82bc;
          lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar18);
          bVar29 = lVar7 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe6a7c47;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_110 != (code *)0x0) {
        uStack_1a0 = 0xe6a7c5b;
        (*pcStack_110)(auStack_128);
      }
      if (bVar29) {
        lVar7 = param_3[5];
        if ((ulong)*(uint *)(plVar12 + 7) != 0xffffffff) {
          uStack_1a0 = 0xe6a7c88;
          (**(code **)(&UNK_0f4bd0e0 + (ulong)*(uint *)(plVar12 + 7) * 8))(auStack_128,plVar12);
        }
        plVar12[4] = 0;
        plVar12[5] = 0;
        plVar12[2] = 0;
        plVar12[3] = 0;
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[6] = 0;
        *(undefined4 *)(plVar12 + 7) = 1;
        pcStack_188 = (code *)&UNK_0e52a020;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x3dd5b6de1);
        lStack_168 = 0;
        puStack_160 = &UNK_0e529f40;
        lStack_108 = plStack_c0[4];
        auStack_128 = (undefined1  [8])*plStack_c0;
        plStack_120 = (long *)plStack_c0[1];
        pcStack_118 = (code *)plStack_c0[2];
        pcStack_110 = (code *)plStack_c0[3];
        plVar17 = (long *)plStack_c0[2];
        lStack_170 = lVar7;
        if (plVar17 == (long *)0x0) {
          pcStack_118 = (code *)0x0;
          uStack_198 = plVar12;
        }
        else {
          uStack_1a0 = 0xe6a7d26;
          uStack_198 = plVar12;
          pcStack_118 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,1);
        }
        puStack_138 = &UNK_0f4c6030;
        uStack_1a0 = 0xe6a8184;
        func_0x0ed75bc0(&puStack_138,plStack_148,&uStack_198,uStack_e0,auStack_128);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe6a8197;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar17 = (long *)param_3[5];
        if (DAT_0f755480 == '\0') {
          uStack_1a0 = 0xe6a83a9;
          iVar2 = func_0x04108328(&DAT_0f755480);
          if (iVar2 != 0) {
            uStack_1a0 = 0xe6a83b6;
            func_0x0e52f0e0();
            uStack_1a0 = 0xe6a83d0;
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f755400,0xf53dab8);
            uStack_1a0 = 0xe6a83dc;
            func_0x0410844d(&DAT_0f755480);
          }
        }
        plVar5 = (long *)(*plVar17 +
                         (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                                *(uint *)(_DAT_0f755400 + 4)) * 8);
        do {
          lVar7 = *plVar5;
          if (lVar7 == -1) {
            plVar11 = (long *)plVar17[4];
            plVar5 = plVar11;
            goto LAB_0e6a7eda;
          }
          plVar5 = (long *)(plVar17[3] + lVar7 * 0x18);
        } while (*(uint *)(plVar17[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f755400 + 4));
        plVar11 = (long *)plVar17[4];
LAB_0e6a7eda:
        if (plVar5 == plVar11) {
          puVar26 = &DAT_0f755400;
        }
        else {
          puVar26 = (undefined *)plVar5[2];
        }
        uStack_1a0 = 0xe6a7f38;
        auVar8 = (undefined1  [8])func_0x048b0c90(plVar17,puVar26,uVar21,1);
        if (auVar8 == (undefined1  [8])0x0) {
          auStack_128 = (undefined1  [8])0x0;
          plStack_120 = (long *)0x0;
          uStack_1a0 = 0xe6a7f4f;
          func_0x048b0d20(auStack_128);
          auVar8 = auStack_128;
          plVar17 = plStack_120;
        }
        lStack_f8 = 0;
        puStack_f0 = (undefined *)0x0;
        lStack_108 = 0;
        lStack_100 = 0;
        pcStack_118 = (code *)0x0;
        pcStack_110 = (code *)0x0;
        auStack_128 = (undefined1  [8])0x0;
        plStack_120 = (long *)0x0;
        uStack_1a0 = 0xe6a7f8d;
        puStack_138 = (undefined *)auVar8;
        plStack_130 = plVar17;
        func_0x05d84ba0(auStack_128);
        uStack_1a0 = 0xe6a7f9f;
        func_0x05d9a920(&uStack_198,&puStack_138,auStack_128);
        if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
          if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
            bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
          }
          else {
            pppppppuVar18 = &pppppppuStack_a8;
            if (cStack_84 != '\x02') {
              pppppppuVar18 = pppppppuStack_a8;
            }
            uStack_1a0 = 0xe6a81ee;
            lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar18);
            bVar29 = lVar7 != 0;
          }
        }
        else {
          bVar29 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe6a7fdc;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_110 != (code *)0x0) {
          uStack_1a0 = 0xe6a7ff0;
          (*pcStack_110)(auStack_128);
        }
        if (bVar29) {
          lVar7 = param_3[5];
          if ((ulong)*(uint *)(plVar12 + 7) != 0xffffffff) {
            uStack_1a0 = 0xe6a801c;
            (**(code **)(&UNK_0f4bd0e0 + (ulong)*(uint *)(plVar12 + 7) * 8))(auStack_128,plVar12);
          }
          *plVar12 = 0;
          plVar12[1] = 0;
          plVar12[2] = 0;
          *(undefined4 *)(plVar12 + 7) = 2;
          pcStack_188 = (code *)&UNK_0e52f3e0;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x3c4a0dfdd);
          lStack_168 = 0;
          puStack_160 = &UNK_0e52f300;
          lStack_108 = plStack_c0[4];
          auStack_128 = (undefined1  [8])*plStack_c0;
          plStack_120 = (long *)plStack_c0[1];
          pcStack_118 = (code *)plStack_c0[2];
          pcStack_110 = (code *)plStack_c0[3];
          plVar17 = (long *)plStack_c0[2];
          lStack_170 = lVar7;
          if (plVar17 == (long *)0x0) {
            pcStack_118 = (code *)0x0;
            uStack_198 = plVar12;
          }
          else {
            uStack_1a0 = 0xe6a80b2;
            uStack_198 = plVar12;
            pcStack_118 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,2);
          }
          puStack_138 = &UNK_0f4c60b0;
          uStack_1a0 = 0xe6a822e;
          func_0x0ed75bc0(&puStack_138,plStack_148,&uStack_198,uStack_e0,auStack_128);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xe6a823d;
            (*pcStack_180)(&uStack_198);
          }
        }
        else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
          uStack_198 = (long *)0x2300000149614c;
          uStack_1a0 = 0xe6a8117;
          func_0x0ed5ffe0(*plStack_c0,8,&uStack_198);
          if (((ulong)uStack_198 & 0x80000000000000) != 0) {
            uStack_1a0 = 0xe6a8142;
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
          }
          uStack_198 = (long *)0x0;
        }
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1a0 = 0xe6a8254;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_0e6a8254:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0xe6a827b;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


