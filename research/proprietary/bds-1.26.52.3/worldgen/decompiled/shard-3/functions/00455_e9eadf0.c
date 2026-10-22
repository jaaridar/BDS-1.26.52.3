/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeaeadf0 (ELF vaddr 0xe9eadf0)
 * Label: caller-of-callee
 * Body:  [[0eaeadf0, 0eaeb73a] [0eaeb740, 0eaec380] [0eaed2d0, 0eaed4b2]]
 * Ghidra: FUN_0eaeadf0
 */


/* WARNING: Possible PIC construction at 0x0eaeb067: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eaeadf0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [8];
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  code *pcVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  long *unaff_RBX;
  undefined8 ******ppppppuVar21;
  byte bVar22;
  uint uVar23;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar24;
  undefined *puVar25;
  byte *pbVar26;
  undefined1 uVar27;
  undefined8 *unaff_R12;
  long *unaff_R13;
  long *plVar28;
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
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pcVar16 = (code *)param_3[7];
  uVar14 = unaff_R15;
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] != (code *)0x0) {
      uStack_1b0 = 0xeaeae3d;
      (*(code *)param_3[3])(param_3);
    }
    param_3[2] = &UNK_0eae8990;
    *(undefined4 *)(param_3 + 4) = 0xed928ce0;
    param_3[3] = &UNK_0eae8bd0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0xeaeae7a;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1b0 = 0xeaec2b8;
      FUN_0eec74c0(0xa0,0);
    }
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    *puVar4 = &UNK_0f47d9c8;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(undefined2 *)(puVar4 + 0xc) = 0xffff;
    *(undefined4 *)(puVar4 + 0xe) = 0x3f800000;
    *(undefined4 *)(puVar4 + 0x12) = 1;
    *(undefined4 *)(puVar4 + 0x13) = 0;
    *param_3 = puVar4;
    puVar25 = (undefined *)param_3[7];
    pcVar16 = (code *)&UNK_0eae88b0;
    param_3[7] = &UNK_0eae88b0;
    if (puVar25 == &UNK_0eae88b0) {
      lVar8 = param_3[6];
      param_3[6] = lVar8;
      if (lVar8 != 0) goto LAB_0eaeaf3e;
    }
    else {
      param_3[6] = 0;
    }
LAB_0eaeaf28:
    uVar14 = param_3[5];
    uStack_1b0 = 0xeaeaf36;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0eaeaf3e;
    uStack_1b0 = 0xeaeaf6e;
    lVar8 = func_0x048aead0(uVar14);
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    if (lVar8 == 0) goto LAB_0eaeaf28;
LAB_0eaeaf3e:
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_0eaed2d0;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (undefined8 *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0xeaeb090;
    func_0x048b1dc0(&uStack_1a8);
    puVar4 = uStack_1a8;
    uVar14 = uStack_1a0;
joined_r0x0eaeb09b:
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1b0 = 0xeaeb0a9;
      puVar4 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar4 = (undefined8 *)param_3[6];
    if (puVar4 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1b0 = 0xeaeaf98;
      (*(code *)param_3[7])(0,param_3,0);
      puVar4 = (undefined8 *)param_3[6];
      goto joined_r0x0eaeb09b;
    }
  }
  unaff_R14 = (undefined8 *)puVar4[0xd];
  uStack_1b0 = 0xeaeafb2;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0xeaeb06c;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = uVar14;
SUB_0eaed2d0:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x126d7320) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaed32f;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaed351;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xed928ce0,puVar4);
    }
    lVar8 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaed361;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x48),lVar8);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaed37e;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar14 >> 0x20 & 1) == 0) {
      uVar11 = param_3[5];
      uVar23 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar23;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xeaed3b5;
      cVar2 = func_0x0eaed4e0(param_2,uVar11,puVar13,param_4,param_5,2);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar27 = 2;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar23;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
    }
    else {
      if ((uVar14 & 0xfffffffe) != 0) {
        lVar8 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaed421;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x50));
        if ((*(ulong *)((long)register0x00000020 + -0x50) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeaed445;
        (*pcVar16)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x50) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar11 = param_3[5];
      uVar23 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x58) = uVar14;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar23;
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xeaed476;
      cVar2 = func_0x0eaed4e0(param_2,uVar11,puVar13,param_4,param_5,uVar14 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar27 = *(undefined1 *)((long)register0x00000020 + -0x58);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar23;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xeaed4a4;
    func_0x0eaed740(param_2,uVar11,puVar13,param_4,param_5,uVar27);
    return;
  }
  puStack_b0 = unaff_R14;
  if (bVar22 != 1) {
    uStack_1a8 = (undefined8 *)0x120000012f2525;
    uStack_1b0 = 0xeaeb0d9;
    func_0x0ed5ffe0(*param_5,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0xeaeb0fc;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0xeaeaff1;
  plStack_150 = param_2;
  uStack_c8 = param_4;
  func_0x0ed6d600(&lStack_68,*param_5);
  uStack_48 = param_3[5];
  lStack_b8 = *param_5;
  ppppppuVar21 = (undefined8 ******)((long)puStack_b0 + 9);
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar14 = puStack_b0[2];
  }
  plStack_c0 = param_5;
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_f8 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_f8 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar14 + 9;
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,lVar8 == 0);
    uStack_1b0 = 0xeaeb133;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar7 == (ulong *)0x0 && (char)puStack_158 == '\0') {
      uStack_1b0 = 0xeaec2d0;
      FUN_0eec74c0(lVar8,8);
    }
    *puVar7 = uVar14;
    uStack_1b0 = 0xeaeb15e;
    func_0x0eee2f00(puVar7 + 1,ppppppuVar24,uVar14);
    *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
    puStack_f8 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1b0 = 0xeaeb19d;
  puVar5 = (uint *)func_0x0ed6d180(lStack_b8,&puStack_f8,0);
  plVar28 = plStack_150;
  if (((ulong)puStack_f8 & 0x80000000000000) != 0) {
    uStack_1b0 = 0xeaeb1d4;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_f8 & 0xff00ffffffffffff) - 8);
  }
  puVar4 = puStack_b0;
  puStack_f8 = (undefined *)0x0;
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar14 = puStack_b0[2];
  }
  uStack_1b0 = 0xeaeb20d;
  cVar2 = (**(code **)(*plVar28 + 0xb8))(plVar28,ppppppuVar24,uVar14);
  if (cVar2 == '\0') {
    uStack_1b0 = 0xeaeb333;
    puStack_158 = puVar5;
    _auStack_148 = (*(code *)*puVar4)(uStack_48);
    uStack_1b0 = 0xeaeb359;
    func_0x0ed8bc80(&uStack_1a8,auStack_148,*(undefined1 *)(lStack_b8 + 0x2aa));
    uVar14 = (ulong)uStack_1a8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      uVar14 = uStack_1a0;
      pcVar16 = pcStack_198;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (pcVar16 == (code *)0x0) {
      pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
    }
    else {
      lVar8 = uVar14 + 9;
      uStack_1b0 = 0xeaeb3a8;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
        uStack_1b0 = 0xeaec2e2;
        FUN_0eec74c0(lVar8,8);
      }
      *puVar7 = uVar14;
      uStack_1b0 = 0xeaeb3d8;
      func_0x0eee2f00(puVar7 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar28 = plStack_150;
    puVar5 = puStack_158;
    uStack_1b0 = 0xeaeb563;
    func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0xeaeb59c;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0xeaeb5c0;
      func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_e8 = (undefined8 *)0x0;
    uStack_e0 = 0;
    pcStack_d8 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0xeaeb22c;
    (**(code **)(*plVar28 + 0x80))(auStack_148,plVar28,0x40);
    cStack_168 = cStack_108;
    if (cStack_108 == '\0') {
      uStack_1a8 = (undefined8 *)auStack_148;
      uStack_1a0 = (ulong)plStack_140;
      pcStack_198 = pcStack_138;
      pcStack_190 = pcStack_130;
      uStack_188 = lStack_128;
      lStack_180 = lStack_120;
      lStack_178 = lStack_118;
      puStack_170 = puStack_110;
      pppppppuStack_a8 = (undefined8 *******)puVar4[3];
      uStack_a0 = puVar4[2];
      if ((*(byte *)(puVar4 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar21;
        uStack_a0 = (ulong)(*(byte *)(puVar4 + 1) >> 1);
      }
      uStack_1b0 = 0xeaeb487;
      puStack_158 = puVar5;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar28 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar28 = plStack_140;
        pcVar16 = pcStack_138;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar28 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar28 + 9;
        uStack_1b0 = 0xeaeb4d7;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
          uStack_1b0 = 0xeaec2f4;
          FUN_0eec74c0(lVar8,8);
        }
        *puVar7 = (ulong)plVar28;
        uStack_1b0 = 0xeaeb507;
        func_0x0eee2f00(puVar7 + 1,pcVar16,plVar28);
        *(undefined1 *)((long)puVar7 + (long)plVar28 + 8U) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      plVar28 = plStack_150;
      puVar5 = puStack_158;
      uStack_1b0 = 0xeaeb639;
      func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0xeaeb672;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1b0 = 0xeaeb698;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      pcStack_d8 = (code *)0x0;
    }
    else {
      pcStack_198 = pcStack_138;
      uStack_1a8 = (undefined8 *)auStack_148;
      uStack_1a0 = (ulong)plStack_140;
      plVar18 = (long *)(ulong)(byte)(auStack_148[0] >> 1);
      pcVar16 = (code *)((long)&uStack_1a8 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar18 = plStack_140;
        pcVar16 = pcStack_138;
      }
      bVar22 = auStack_148[0];
      if (plVar18 != (long *)0x0) {
        uStack_1b0 = 0xeaeb27c;
        plVar6 = (long *)func_0x0eee3290();
        pcVar17 = pcVar16;
        for (uVar14 = (ulong)plVar18 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *(code *)(*plVar6 + (ulong)(byte)*pcVar17 * 4);
          pcVar17 = pcVar17 + 1;
        }
        if (3 < plVar18) {
          do {
            *pcVar17 = *(code *)(*plVar6 + (ulong)(byte)*pcVar17 * 4);
            pcVar17[1] = *(code *)(*plVar6 + (ulong)(byte)pcVar17[1] * 4);
            pcVar17[2] = *(code *)(*plVar6 + (ulong)(byte)pcVar17[2] * 4);
            pcVar17[3] = *(code *)(*plVar6 + (ulong)(byte)pcVar17[3] * 4);
            pcVar17 = pcVar17 + 4;
          } while (pcVar17 != pcVar16 + (long)plVar18);
        }
        bVar22 = (byte)uStack_1a8;
      }
      if ((bVar22 & 1) == 0) {
        pcStack_d8 = pcStack_198;
        uStack_e8 = uStack_1a8;
        uStack_e0 = uStack_1a0;
      }
      else {
        uStack_1b0 = 0xeaeb5f3;
        func_0x0412e5e0(&uStack_e8,pcStack_198,uStack_1a0);
      }
    }
    lVar8 = lStack_180;
    if (cStack_168 == '\x01') {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0xeaeb6d2;
        func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_180 != 0) {
        while (lVar8 != lStack_178) {
          uStack_1b0 = 0xeaeb6fc;
          func_0x048b3e80(lStack_178 + -0x40);
          lStack_178 = lStack_178 + -0x40;
        }
        lStack_178 = lVar8;
        uStack_1b0 = 0xeaeb718;
        func_0x0412a280(lStack_180,(long)puStack_170 - lStack_180);
      }
      pcVar17 = pcStack_198;
      pcVar16 = pcStack_190;
      if (pcStack_198 != (code *)0x0) {
        for (; pcVar17 != pcVar16; pcVar16 = pcVar16 + -0x50) {
          if ((pcVar16[-8] == (code)0x1) && (((byte)pcVar16[-0x30] & 1) != 0)) {
            uStack_1b0 = 0xeaeb768;
            func_0x0412a280(*(undefined8 *)(pcVar16 + -0x20),
                            *(ulong *)(pcVar16 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_190 = pcVar17;
        uStack_1b0 = 0xeaeb781;
        func_0x0412a280(pcStack_198,uStack_188 - (long)pcStack_198);
      }
    }
  }
  uStack_1b0 = 0xeaeb798;
  (**(code **)(*plVar28 + 0xd0))(plVar28);
  lVar8 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar15 = puVar5[4];
LAB_0eaeb7da:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1b0 = 0xeaeb803;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_1a8,lVar1 + -0x18);
      uVar15 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar15 = puVar5[4], uVar23 == uVar15 - 1)) goto LAB_0eaeb7da;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0xeaeb842;
    auStack_40 = (*(code *)*puStack_b0)();
    uVar11 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    uVar14 = (ulong)uStack_e8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_e8 + 1);
    if (((ulong)uStack_e8 & 1) != 0) {
      uVar14 = uStack_e0;
      pcVar16 = pcStack_d8;
    }
    if (uVar14 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar23 = ((int)(char)pcVar16[uVar19 + 3] ^
                   ((int)(char)pcVar16[uVar19 + 2] ^
                   ((int)(char)pcVar16[uVar19 + 1] ^
                   ((int)(char)pcVar16[uVar19] ^ uVar23) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar9 != 0) {
        uVar14 = 0;
        do {
          uVar23 = ((int)(char)pcVar16[uVar14 + uVar19] ^ uVar23) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar9 != uVar14);
      }
    }
    if (lVar8 == 0) {
      uStack_1b0 = 0xeaeb931;
      lVar8 = func_0x048aead0(uVar11);
    }
    uStack_1b0 = 0xeaeb943;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar11,lVar8,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1a8 = (undefined8 *)0x0;
      uStack_1a0 = 0;
      uStack_1b0 = 0xeaeb971;
      FUN_048b0d20(&uStack_1a8);
      puStack_58 = uStack_1a8;
      uStack_50 = uStack_1a0;
      if (uStack_1a8 == (undefined8 *)0x0) {
        lVar8 = *plStack_c0;
        uStack_1b0 = 0xeaec0d2;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1b0 = 0xeaec0e6;
        uVar11 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_e8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_e8 + 1);
        if (((ulong)uStack_e8 & 1) != 0) {
          uVar14 = uStack_e0;
          pcVar16 = pcStack_d8;
        }
        uStack_1b0 = 0xeaec112;
        uVar11 = func_0x0412f8c0(uVar11,pcVar16,uVar14);
        uStack_1b0 = 0xeaec126;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar29 = (*pbVar12 & 1) != 0;
        pbVar26 = pbVar12 + 1;
        if (bVar29) {
          pbVar26 = *(byte **)(pbVar12 + 0x10);
        }
        uVar14 = (ulong)(*pbVar12 >> 1);
        if (bVar29) {
          uVar14 = *(ulong *)(pbVar12 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1b0 = 0xeaec158;
        func_0x0ee387f0(auStack_148,pbVar26,uVar14,1);
        uStack_1b0 = 0xeaec16a;
        func_0x0ed5ffe0(lVar8,8,auStack_148);
        uStack_1b0 = 0xeaec174;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0xeaec190;
          func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_0eaec250;
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
    uStack_1a8 = (undefined8 *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0xeaeb9a6;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0xeaeb9be;
    func_0x05d9a920(&pppppppuStack_a8,&puStack_58,&uStack_1a8);
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xeaeb9cd;
      (*pcStack_190)(&uStack_1a8);
    }
    bVar29 = (*(byte *)(puStack_b0 + 1) & 1) != 0;
    if (bVar29) {
      ppppppuVar21 = (undefined8 ******)puStack_b0[3];
    }
    uVar14 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
    if (bVar29) {
      uVar14 = puStack_b0[2];
    }
    if (uVar14 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
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
        } while ((uVar14 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar9 != 0) {
        uVar14 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar21 + uVar14 + uVar19) ^ uVar23) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar9 != uVar14);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x126d7320) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1b0 = 0xeaebad0;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      uStack_1b0 = 0xeaebaf2;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xed928ce0,puVar4);
    }
    plVar28 = (long *)param_3[5];
    if (DAT_0f76c280 == '\0') {
      uStack_1b0 = 0xeaec305;
      iVar3 = func_0x04108328(&DAT_0f76c280);
      if (iVar3 != 0) {
        uStack_1b0 = 0xeaec312;
        func_0x0eae9750();
        uStack_1b0 = 0xeaec32c;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c200,0xf53dab8);
        uStack_1b0 = 0xeaec338;
        func_0x0410844d(&DAT_0f76c280);
      }
    }
    plVar18 = (long *)(*plVar28 +
                      (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                             *(uint *)(_DAT_0f76c200 + 4)) * 8);
    do {
      lVar8 = *plVar18;
      if (lVar8 == -1) {
        plVar6 = (long *)plVar28[4];
        plVar18 = plVar6;
        goto LAB_0eaebb64;
      }
      plVar18 = (long *)(plVar28[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar28[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76c200 + 4));
    plVar6 = (long *)plVar28[4];
LAB_0eaebb64:
    if (plVar18 == plVar6) {
      puVar25 = &DAT_0f76c200;
    }
    else {
      puVar25 = (undefined *)plVar18[2];
    }
    uStack_1b0 = 0xeaebb86;
    auVar10 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
    plStack_f0 = plVar28;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0xeaebb9d;
      FUN_048b0d20(auStack_148);
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
    uStack_1b0 = 0xeaebbde;
    puStack_f8 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_148);
    uStack_1b0 = 0xeaebbf3;
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
        uStack_1b0 = 0xeaec29a;
        lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
        bVar29 = lVar8 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xeaebc31;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1b0 = 0xeaebc42;
      (*pcStack_130)(auStack_148);
    }
    if (bVar29) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar13 + 0x13) != 0xffffffff) {
        uStack_1b0 = 0xeaebc72;
        (**(code **)(&UNK_0f4d8440 + (ulong)*(uint *)(puVar13 + 0x13) * 8))(auStack_148,puVar13);
      }
      puVar13[0xc] = 0;
      puVar13[0xd] = 0;
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      puVar13[0x10] = 0;
      puVar13[0x11] = 0;
      puVar13[0x12] = 0;
      *puVar13 = &UNK_0f47d9c8;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = 0;
      puVar13[0xb] = 0;
      *(undefined2 *)(puVar13 + 0xc) = 0xffff;
      *(undefined4 *)(puVar13 + 0xe) = 0x3f800000;
      *(undefined4 *)(puVar13 + 0x12) = 1;
      *(undefined4 *)(puVar13 + 0x13) = 0;
      pcStack_198 = (code *)&UNK_0eae9aa0;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x37624b79e);
      lStack_178 = 0;
      puStack_170 = &UNK_0eae99c0;
      lStack_128 = plStack_c0[4];
      auStack_148 = (undefined1  [8])*plStack_c0;
      plStack_140 = (long *)plStack_c0[1];
      pcStack_138 = (code *)plStack_c0[2];
      pcStack_130 = (code *)plStack_c0[3];
      plVar28 = (long *)plStack_c0[2];
      lStack_180 = lVar8;
      if (plVar28 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
        uStack_1a8 = puVar13;
      }
      else {
        uStack_1b0 = 0xeaebd51;
        uStack_1a8 = puVar13;
        pcStack_138 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,0);
      }
      puStack_f8 = &UNK_0f4d8548;
      uStack_1b0 = 0xeaec098;
      func_0x0ed75bc0(&puStack_f8,plStack_150,&uStack_1a8,uStack_c8,auStack_148);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xeaec0ab;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar28 = (long *)param_3[5];
      if (DAT_0f76c338 == '\0') {
        uStack_1b0 = 0xeaec349;
        iVar3 = func_0x04108328(&DAT_0f76c338);
        if (iVar3 != 0) {
          uStack_1b0 = 0xeaec356;
          func_0x0eae9e20();
          uStack_1b0 = 0xeaec370;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c2b8,0xf53dab8);
          uStack_1b0 = 0xeaec37c;
          func_0x0410844d(&DAT_0f76c338);
        }
      }
      plVar18 = (long *)(*plVar28 +
                        (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                               *(uint *)(_DAT_0f76c2b8 + 4)) * 8);
      do {
        lVar8 = *plVar18;
        if (lVar8 == -1) {
          plVar6 = (long *)plVar28[4];
          plVar18 = plVar6;
          goto LAB_0eaebdc4;
        }
        plVar18 = (long *)(plVar28[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar28[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76c2b8 + 4));
      plVar6 = (long *)plVar28[4];
LAB_0eaebdc4:
      if (plVar18 == plVar6) {
        puVar25 = &DAT_0f76c2b8;
      }
      else {
        puVar25 = (undefined *)plVar18[2];
      }
      uStack_1b0 = 0xeaebe22;
      auVar10 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0xeaebe39;
        FUN_048b0d20(auStack_148);
        auVar10 = auStack_148;
        plVar28 = plStack_140;
      }
      lStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0xeaebe7a;
      puStack_f8 = (undefined *)auVar10;
      plStack_f0 = plVar28;
      func_0x05d84ba0(auStack_148);
      uStack_1b0 = 0xeaebe8f;
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
          uStack_1b0 = 0xeaec1e7;
          lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
          bVar29 = lVar8 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xeaebecc;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1b0 = 0xeaebedd;
        (*pcStack_130)(auStack_148);
      }
      if (bVar29) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar13 + 0x13) != 0xffffffff) {
          uStack_1b0 = 0xeaebf0c;
          (**(code **)(&UNK_0f4d8440 + (ulong)*(uint *)(puVar13 + 0x13) * 8))(auStack_148,puVar13);
        }
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        *puVar13 = &UNK_0f47d970;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        *(undefined2 *)(puVar13 + 10) = 0xffff;
        *(undefined4 *)(puVar13 + 0x13) = 1;
        pcStack_198 = (code *)&UNK_0eaea140;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x3e75e3f7f);
        lStack_178 = 0;
        puStack_170 = &UNK_0eaea060;
        lStack_128 = plStack_c0[4];
        auStack_148 = (undefined1  [8])*plStack_c0;
        plStack_140 = (long *)plStack_c0[1];
        pcStack_138 = (code *)plStack_c0[2];
        pcStack_130 = (code *)plStack_c0[3];
        plVar28 = (long *)plStack_c0[2];
        lStack_180 = lVar8;
        if (plVar28 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
          uStack_1a8 = puVar13;
        }
        else {
          uStack_1b0 = 0xeaebfc3;
          uStack_1a8 = puVar13;
          pcStack_138 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,1);
        }
        puStack_f8 = &UNK_0f4d85c8;
        uStack_1b0 = 0xeaec22a;
        func_0x0ed75bc0(&puStack_f8,plStack_150,&uStack_1a8,uStack_c8,auStack_148);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0xeaec239;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
              (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
        uStack_1a8 = (undefined8 *)0x2300000149614c;
        uStack_1b0 = 0xeaec028;
        func_0x0ed5ffe0(*plStack_c0,8,&uStack_1a8);
        if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
          uStack_1b0 = 0xeaec053;
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
        }
        uStack_1a8 = (undefined8 *)0x0;
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1b0 = 0xeaec250;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_0eaec250:
  if (((ulong)uStack_e8 & 1) != 0) {
    uStack_1b0 = 0xeaec277;
    func_0x0412a280(pcStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  return;
}


