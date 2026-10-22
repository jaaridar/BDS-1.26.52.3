/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9071b0 (ELF vaddr 0xe8071b0)
 * Label: caller-of-callee
 * Body:  [[0e9071b0, 0e907baa] [0e907bb0, 0e90931b] [0e90a6d0, 0e90aa36]]
 * Ghidra: FUN_0e9071b0
 */


/* WARNING: Possible PIC construction at 0x0e9074ba: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9071b0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  code *pcVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *******pppppppuVar19;
  undefined8 unaff_RBX;
  undefined8 ******ppppppuVar20;
  byte bVar21;
  uint uVar22;
  long *unaff_RBP;
  undefined8 ******ppppppuVar23;
  byte *pbVar24;
  long *unaff_R12;
  long unaff_R13;
  long *unaff_R14;
  undefined8 *unaff_R15;
  bool bVar25;
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
  undefined *puStack_158;
  long lStack_150;
  undefined1 auStack_148 [16];
  code *pcStack_138;
  code *pcStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  char cStack_108;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  uint *puStack_e0;
  undefined8 *******pppppppuStack_d8;
  ulong uStack_d0;
  code *pcStack_c0;
  int iStack_b8;
  char cStack_b4;
  long lStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  uint uStack_60;
  long *plStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  pcVar11 = (code *)param_3[7];
  plStack_f0 = param_5;
  if (pcVar11 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar25 = false;
    }
    else {
      uStack_1b0 = 0xe907205;
      (*(code *)param_3[3])(param_3);
      bVar25 = (undefined *)param_3[7] == &UNK_0e9065b0;
    }
    param_3[2] = (long)&UNK_0e906690;
    *(undefined4 *)(param_3 + 4) = 0x5d71cb60;
    param_3[3] = (long)&UNK_0e9068a0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0xe907255;
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d8);
    if (lVar8 == 0) {
      uStack_1b0 = 0xe9092e1;
      func_0x0eec74c0(0x1d8,0);
    }
    lVar3 = 0;
    uStack_1b0 = 0xe907273;
    memset(lVar8,0,0x148);
    *(undefined4 *)(lVar8 + 0x40) = 0x3f800000;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined4 *)(lVar8 + 0x80) = 0x3f800000;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    *(undefined8 *)(lVar8 + 0x90) = 0;
    *(undefined8 *)(lVar8 + 0x98) = 0;
    *(undefined8 *)(lVar8 + 0xa0) = 0;
    *(undefined8 *)(lVar8 + 0xa8) = 0;
    *(undefined8 *)(lVar8 + 0xb0) = 0;
    *(undefined8 *)(lVar8 + 0xb8) = 0;
    *(undefined4 *)(lVar8 + 0xc0) = 0x3f800000;
    *(undefined8 *)(lVar8 + 200) = 0;
    *(undefined8 *)(lVar8 + 0xd0) = 0;
    *(undefined8 *)(lVar8 + 0xd8) = 0;
    *(undefined8 *)(lVar8 + 0xe0) = 0;
    *(undefined8 *)(lVar8 + 0xe8) = 0;
    *(undefined8 *)(lVar8 + 0xf0) = 0;
    *(undefined8 *)(lVar8 + 0xf8) = 0;
    *(undefined4 *)(lVar8 + 0x100) = 0x3f800000;
    *(undefined8 *)(lVar8 + 0x128) = 0;
    *(undefined8 *)(lVar8 + 0x130) = 0;
    *(undefined8 *)(lVar8 + 0x118) = 0;
    *(undefined8 *)(lVar8 + 0x120) = 0;
    *(undefined8 *)(lVar8 + 0x108) = 0;
    *(undefined8 *)(lVar8 + 0x110) = 0;
    *(undefined8 *)(lVar8 + 0x138) = 0;
    *(undefined4 *)(lVar8 + 0x140) = 0x3f800000;
    *(undefined4 *)(lVar8 + 0x1d0) = 0;
    *param_3 = lVar8;
    pcVar11 = (code *)&UNK_0e9065b0;
    param_3[7] = (long)&UNK_0e9065b0;
    if (bVar25) {
      lVar3 = param_3[6];
    }
    param_3[6] = lVar3;
    if (lVar3 == 0) goto LAB_0e907360;
LAB_0e907376:
    bVar21 = *(byte *)(lVar3 + 0x1a);
  }
  else {
    lVar3 = param_3[6];
    if (lVar3 != 0) goto LAB_0e907376;
LAB_0e907360:
    lVar8 = param_3[5];
    uStack_1b0 = 0xe90736e;
    (*pcVar11)(0,param_3,0);
    lVar3 = param_3[6];
    if (lVar3 != 0) goto LAB_0e907376;
    uStack_1b0 = 0xe9073ac;
    lVar3 = func_0x048aead0(lVar8);
    bVar21 = *(byte *)(lVar3 + 0x1a);
  }
  if ((bVar21 & 1) == 0) goto SUB_0e90a6d0;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0xe9074e3;
    func_0x048b1dc0(&uStack_1a8);
    plVar4 = uStack_1a8;
    uVar14 = uStack_1a0;
    unaff_R14 = &uStack_1a8;
joined_r0x0e9074ee:
    if (plVar4 == (long *)0x0) {
      uStack_1b0 = 0xe9074fc;
      plVar4 = (long *)func_0x048aead0(uVar14);
    }
  }
  else {
    plVar4 = (long *)*unaff_R14;
    if (plVar4 == (long *)0x0) {
      uVar14 = param_3[5];
      uStack_1b0 = 0xe9073da;
      (*(code *)param_3[7])(0,param_3,0);
      plVar4 = (long *)*unaff_R14;
      goto joined_r0x0e9074ee;
    }
  }
  unaff_R15 = (undefined8 *)plVar4[0xd];
  uStack_1b0 = 0xe9073f4;
  bVar21 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar4 = plStack_f0;
  if ((bVar21 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0xe9074bf;
    unaff_RBX = param_4;
    unaff_RBP = param_2;
    unaff_R12 = param_3;
    unaff_R13 = lVar3;
SUB_0e90a6d0:
    plVar6 = plStack_f0;
    *(long **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    plVar4 = (long *)*param_3;
    plVar13 = plVar4;
    if (cVar2 == '\x02') {
      plVar13 = param_3;
    }
    if (plVar13 == (long *)0x0 || (int)param_3[4] != 0x5d71cb60) {
      lVar8 = param_3[5];
      lVar3 = param_3[6];
      if (lVar3 == 0) {
        pcVar11 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe90a72f;
        (*pcVar11)(0,param_3,0);
        lVar3 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        plVar4 = (long *)*param_3;
      }
      if (cVar2 == '\x02') {
        plVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe90a751;
      plVar13 = (long *)func_0x0488e200(lVar8,lVar3,0x5d71cb60,plVar4);
    }
    lVar8 = *plVar6;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe90a761;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar21 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar21 | 1;
    pcVar11 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe90a77e;
    uVar14 = (*pcVar11)(param_2);
    *(byte *)((long)param_2 + 9) = bVar21;
    if ((uVar14 >> 0x20 & 1) == 0) {
      lVar8 = param_3[5];
      uVar17 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar17;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a7be;
      cVar2 = func_0x0e90aa60(param_2,lVar8,plVar13,param_4,plVar6,6);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar17;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a7ec;
      cVar2 = func_0x0e90ad30(param_2,lVar8,plVar13,param_4,plVar6,6);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar17;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a81a;
      cVar2 = func_0x0e90b010(param_2,lVar8,plVar13,param_4,plVar6,6);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar17;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a848;
      cVar2 = func_0x0e90b350(param_2,lVar8,plVar13,param_4,plVar6,6);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar17;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a876;
      cVar2 = func_0x0e90b630(param_2,lVar8,plVar13,param_4,plVar6,6);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      uVar14 = 6;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar17;
    }
    else {
      if (5 < (uint)uVar14) {
        lVar8 = *plVar6;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe90aa04;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar11 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe90aa28;
        (*pcVar11)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      lVar8 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x50) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a8e1;
      cVar2 = func_0x0e90aa60(param_2,lVar8,plVar13,param_4,plVar6,uVar14 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a912;
      cVar2 = func_0x0e90ad30(param_2,lVar8,plVar13,param_4,plVar6,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a93f;
      cVar2 = func_0x0e90b010(param_2,lVar8,plVar13,param_4,plVar6,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a96c;
      cVar2 = func_0x0e90b350(param_2,lVar8,plVar13,param_4,plVar6,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a999;
      cVar2 = func_0x0e90b630(param_2,lVar8,plVar13,param_4,plVar6,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      lVar8 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe90a9c6;
    func_0x0e90b8c0(param_2,lVar8,plVar13,param_4,plVar6,uVar14);
    return;
  }
  if (bVar21 != 1) {
    uStack_1a8 = (long *)0x120000012f2525;
    uStack_1b0 = 0xe907534;
    func_0x0ed5ffe0(*plStack_f0,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0xe907557;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0xe90742e;
  uStack_f8 = param_4;
  func_0x0ed6d600(&lStack_68,*plStack_f0);
  lStack_48 = param_3[5];
  lStack_78 = *plVar4;
  ppppppuVar20 = (undefined8 ******)((long)unaff_R15 + 9);
  bVar25 = (*(byte *)(unaff_R15 + 1) & 1) == 0;
  ppppppuVar23 = (undefined8 ******)unaff_R15[3];
  if (bVar25) {
    ppppppuVar23 = ppppppuVar20;
  }
  uVar14 = (ulong)(*(byte *)(unaff_R15 + 1) >> 1);
  if (!bVar25) {
    uVar14 = unaff_R15[2];
  }
  plStack_e8 = param_2;
  puStack_70 = unaff_R15;
  if (ppppppuVar23 == (undefined8 ******)0x0) {
    puStack_158 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_158 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar23 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar14 + 9;
    puStack_e0 = (uint *)CONCAT71(puStack_e0._1_7_,lVar8 == 0);
    uStack_1b0 = 0xe90759b;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar7 == (ulong *)0x0 && (char)puStack_e0 == '\0') {
      uStack_1b0 = 0xe9092f3;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar7 = uVar14;
    uStack_1b0 = 0xe9075ca;
    func_0x0eee2f00(puVar7 + 1,ppppppuVar23,uVar14);
    *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
    puStack_158 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  plVar4 = plStack_e8;
  uStack_1b0 = 0xe90760b;
  puVar5 = (uint *)func_0x0ed6d180(lStack_78,&puStack_158,0);
  if (((ulong)puStack_158 & 0x80000000000000) != 0) {
    uStack_1b0 = 0xe90763a;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_158 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar1 = puStack_70;
  puStack_158 = (undefined *)0x0;
  bVar25 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar23 = (undefined8 ******)puStack_70[3];
  if (bVar25) {
    ppppppuVar23 = ppppppuVar20;
  }
  uVar14 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar25) {
    uVar14 = puStack_70[2];
  }
  uStack_1b0 = 0xe907670;
  cVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,ppppppuVar23,uVar14);
  if (cVar2 == '\0') {
    uStack_1b0 = 0xe907796;
    puStack_e0 = puVar5;
    auStack_148 = (*(code *)*puVar1)(lStack_48);
    uStack_1b0 = 0xe9077bc;
    func_0x0ed8bc80(&uStack_1a8,auStack_148,*(undefined1 *)(lStack_78 + 0x2aa));
    uVar14 = (ulong)uStack_1a8 >> 1 & 0x7f;
    pcVar11 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      uVar14 = uStack_1a0;
      pcVar11 = pcStack_198;
    }
    pppppppuStack_d8 = (undefined8 *******)0x0;
    if (pcVar11 == (code *)0x0) {
      pppppppuStack_d8 = (undefined8 *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
    }
    else {
      lVar8 = uVar14 + 9;
      uStack_1b0 = 0xe90780b;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
        uStack_1b0 = 0xe909305;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = uVar14;
      uStack_1b0 = 0xe90783b;
      func_0x0eee2f00(puVar7 + 1,pcVar11,uVar14);
      *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
      pppppppuStack_d8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      plVar4 = plStack_e8;
    }
    uStack_1b0 = 0xe9079d9;
    func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_d8);
    puVar5 = puStack_e0;
    if (((ulong)pppppppuStack_d8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0xe907a10;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_d8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_d8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0xe907a34;
      func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_98 = (long *)0x0;
    uStack_90 = 0;
    pcStack_88 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0xe90768f;
    (**(code **)(*plVar4 + 0x80))(auStack_148,plVar4,0x40);
    cStack_168 = cStack_108;
    if (cStack_108 == '\0') {
      uStack_1a8 = (long *)auStack_148._0_8_;
      uStack_1a0 = auStack_148._8_8_;
      pcStack_198 = pcStack_138;
      pcStack_190 = pcStack_130;
      uStack_188 = lStack_128;
      lStack_180 = lStack_120;
      lStack_178 = lStack_118;
      puStack_170 = puStack_110;
      pppppppuStack_d8 = (undefined8 *******)puVar1[3];
      uStack_d0 = puVar1[2];
      if ((*(byte *)(puVar1 + 1) & 1) == 0) {
        pppppppuStack_d8 = (undefined8 *******)ppppppuVar20;
        uStack_d0 = (ulong)(*(byte *)(puVar1 + 1) >> 1);
      }
      uStack_1b0 = 0xe9078f5;
      puStack_e0 = puVar5;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_d8);
      uVar14 = (ulong)auStack_148._0_8_ >> 1 & 0x7f;
      pcVar11 = (code *)(auStack_148 + 1);
      if ((auStack_148._0_8_ & 1) != 0) {
        uVar14 = auStack_148._8_8_;
        pcVar11 = pcStack_138;
      }
      pppppppuStack_d8 = (undefined8 *******)0x0;
      if (pcVar11 == (code *)0x0) {
        pppppppuStack_d8 = (undefined8 *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
      }
      else {
        lVar8 = uVar14 + 9;
        uStack_1b0 = 0xe907945;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
          uStack_1b0 = 0xe909317;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = uVar14;
        uStack_1b0 = 0xe907975;
        func_0x0eee2f00(puVar7 + 1,pcVar11,uVar14);
        *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
        pppppppuStack_d8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        plVar4 = plStack_e8;
      }
      uStack_1b0 = 0xe907aad;
      func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_d8);
      puVar5 = puStack_e0;
      if (((ulong)pppppppuStack_d8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0xe907ae4;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_d8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_d8 = (undefined8 *******)0x0;
      if ((auStack_148._0_8_ & 1) != 0) {
        uStack_1b0 = 0xe907b0a;
        func_0x0412a280(pcStack_138,auStack_148._0_8_ & 0xfffffffffffffffe);
      }
      uStack_98 = (long *)0x0;
      uStack_90 = 0;
      pcStack_88 = (code *)0x0;
    }
    else {
      pcStack_198 = pcStack_138;
      uStack_1a8 = (long *)auStack_148._0_8_;
      uStack_1a0 = auStack_148._8_8_;
      uVar14 = (ulong)(byte)((byte)auStack_148._0_8_ >> 1);
      pcVar11 = (code *)((long)&uStack_1a8 + 1);
      if ((auStack_148._0_8_ & 1) != 0) {
        uVar14 = auStack_148._8_8_;
        pcVar11 = pcStack_138;
      }
      bVar21 = (byte)auStack_148._0_8_;
      if (uVar14 != 0) {
        uStack_1b0 = 0xe9076db;
        plVar6 = (long *)func_0x0eee3290();
        pcVar16 = pcVar11;
        for (uVar17 = uVar14 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar16 = *(code *)(*plVar6 + (ulong)(byte)*pcVar16 * 4);
          pcVar16 = pcVar16 + 1;
        }
        if (3 < uVar14) {
          do {
            *pcVar16 = *(code *)(*plVar6 + (ulong)(byte)*pcVar16 * 4);
            pcVar16[1] = *(code *)(*plVar6 + (ulong)(byte)pcVar16[1] * 4);
            pcVar16[2] = *(code *)(*plVar6 + (ulong)(byte)pcVar16[2] * 4);
            pcVar16[3] = *(code *)(*plVar6 + (ulong)(byte)pcVar16[3] * 4);
            pcVar16 = pcVar16 + 4;
          } while (pcVar16 != pcVar11 + uVar14);
        }
        bVar21 = (byte)uStack_1a8;
      }
      if ((bVar21 & 1) == 0) {
        pcStack_88 = pcStack_198;
        uStack_98 = uStack_1a8;
        uStack_90 = uStack_1a0;
      }
      else {
        uStack_1b0 = 0xe907a67;
        func_0x0412e5e0(&uStack_98,pcStack_198,uStack_1a0);
      }
    }
    lVar8 = lStack_180;
    if (cStack_168 == '\x01') {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0xe907b44;
        func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_180 != 0) {
        while (lVar8 != lStack_178) {
          uStack_1b0 = 0xe907b6c;
          FUN_048b3e80(lStack_178 + -0x40);
          lStack_178 = lStack_178 + -0x40;
        }
        lStack_178 = lVar8;
        uStack_1b0 = 0xe907b88;
        func_0x0412a280(lStack_180,(long)puStack_170 - lStack_180);
      }
      pcVar16 = pcStack_198;
      pcVar11 = pcStack_190;
      if (pcStack_198 != (code *)0x0) {
        for (; pcVar16 != pcVar11; pcVar11 = pcVar11 + -0x50) {
          if ((pcVar11[-8] == (code)0x1) && (((byte)pcVar11[-0x30] & 1) != 0)) {
            uStack_1b0 = 0xe907bd8;
            func_0x0412a280(*(undefined8 *)(pcVar11 + -0x20),
                            *(ulong *)(pcVar11 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_190 = pcVar16;
        uStack_1b0 = 0xe907bf1;
        func_0x0412a280(pcStack_198,uStack_188 - (long)pcStack_198);
      }
    }
  }
  uStack_1b0 = 0xe907c08;
  (**(code **)(*plVar4 + 0xd0))(plVar4);
  lVar8 = *(long *)(puVar5 + 2);
  uVar22 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar22;
  if (puVar5[0x48] == 0) {
    uVar15 = puVar5[4];
LAB_0e907c4f:
    lVar3 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1b0 = 0xe907c78;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_1a8,lVar3 + -0x18);
      uVar15 = puVar5[4];
    }
    *(undefined4 *)(lVar3 + -0x10) = 0xffffffff;
    puVar5[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar22)
          && (uVar15 = puVar5[4], uVar22 == uVar15 - 1)) goto LAB_0e907c4f;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0xe907cb9;
    auStack_40 = (*(code *)*puStack_70)();
    uVar9 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    uVar14 = (ulong)uStack_98 >> 1 & 0x7f;
    pcVar11 = (code *)((long)&uStack_98 + 1);
    if (((ulong)uStack_98 & 1) != 0) {
      uVar14 = uStack_90;
      pcVar11 = pcStack_88;
    }
    if (uVar14 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar22 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar22 = ((int)(char)pcVar11[uVar18 + 3] ^
                   ((int)(char)pcVar11[uVar18 + 2] ^
                   ((int)(char)pcVar11[uVar18 + 1] ^
                   ((int)(char)pcVar11[uVar18] ^ uVar22) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar17 != 0) {
        uVar14 = 0;
        do {
          uVar22 = ((int)(char)pcVar11[uVar14 + uVar18] ^ uVar22) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar17 != uVar14);
      }
    }
    if (lVar8 == 0) {
      uStack_1b0 = 0xe907db1;
      lVar8 = func_0x048aead0(uVar9);
    }
    uStack_1b0 = 0xe907dc3;
    plStack_58 = (long *)FUN_048b0c90(uVar9,lVar8,uVar22,1);
    if (plStack_58 == (long *)0x0) {
      uStack_1a8 = (long *)0x0;
      uStack_1a0 = 0;
      uStack_1b0 = 0xe907df1;
      func_0x048b0d20(&uStack_1a8);
      plStack_58 = uStack_1a8;
      uStack_50 = uStack_1a0;
      if (uStack_1a8 == (long *)0x0) {
        lVar8 = *plStack_f0;
        uStack_1b0 = 0xe9087ae;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1b0 = 0xe9087c2;
        uVar9 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_98 >> 1 & 0x7f;
        pcVar11 = (code *)((long)&uStack_98 + 1);
        if (((ulong)uStack_98 & 1) != 0) {
          uVar14 = uStack_90;
          pcVar11 = pcStack_88;
        }
        uStack_1b0 = 0xe9087ee;
        uVar9 = func_0x0412f8c0(uVar9,pcVar11,uVar14);
        uStack_1b0 = 0xe908802;
        pbVar12 = (byte *)func_0x0412f8c0(uVar9,&UNK_0125506d,1);
        bVar25 = (*pbVar12 & 1) != 0;
        pbVar24 = pbVar12 + 1;
        if (bVar25) {
          pbVar24 = *(byte **)(pbVar12 + 0x10);
        }
        uVar14 = (ulong)(*pbVar12 >> 1);
        if (bVar25) {
          uVar14 = *(ulong *)(pbVar12 + 8);
        }
        auStack_148._0_8_ = 0;
        uStack_1b0 = 0xe908834;
        func_0x0ee387f0(auStack_148,pbVar24,uVar14,1);
        uStack_1b0 = 0xe908846;
        func_0x0ed5ffe0(lVar8,8,auStack_148);
        uStack_1b0 = 0xe908850;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0xe90886c;
          func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_0e909263;
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
    uStack_1b0 = 0xe907e26;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0xe907e3e;
    func_0x05d9a920(&pppppppuStack_d8,&plStack_58,&uStack_1a8);
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xe907e4d;
      (*pcStack_190)(&uStack_1a8);
    }
    bVar25 = (*(byte *)(puStack_70 + 1) & 1) != 0;
    if (bVar25) {
      ppppppuVar20 = (undefined8 ******)puStack_70[3];
    }
    uVar14 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
    if (bVar25) {
      uVar14 = puStack_70[2];
    }
    if (uVar14 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar22 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar22 = ((int)*(char *)((long)ppppppuVar20 + uVar18 + 3) ^
                   ((int)*(char *)((long)ppppppuVar20 + uVar18 + 2) ^
                   ((int)*(char *)((long)ppppppuVar20 + uVar18 + 1) ^
                   ((int)*(char *)((long)ppppppuVar20 + uVar18) ^ uVar22) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar17 != 0) {
        uVar14 = 0;
        do {
          uVar22 = ((int)*(char *)((long)ppppppuVar20 + uVar14 + uVar18) ^ uVar22) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar17 != uVar14);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    plVar4 = (long *)*param_3;
    plVar6 = plVar4;
    if (cVar2 == '\x02') {
      plVar6 = param_3;
    }
    if (plVar6 == (long *)0x0 || (int)param_3[4] != 0x5d71cb60) {
      lVar8 = param_3[5];
      lVar3 = param_3[6];
      if (lVar3 == 0) {
        uStack_1b0 = 0xe907f4e;
        (*(code *)param_3[7])(0,param_3,0);
        lVar3 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        plVar4 = (long *)*param_3;
      }
      if (cVar2 == '\x02') {
        plVar4 = param_3;
      }
      uStack_1b0 = 0xe907f70;
      plVar6 = (long *)func_0x0488e200(lVar8,lVar3,0x5d71cb60,plVar4);
    }
    lVar8 = param_3[5];
    uStack_1b0 = 0xe907f80;
    uVar9 = func_0x0db80190(lVar8);
    uStack_1b0 = 0xe907f92;
    puVar10 = (undefined *)FUN_048b0c90(lVar8,uVar9,uVar22,1);
    lStack_150 = lVar8;
    if (puVar10 == (undefined *)0x0) {
      auStack_148._0_8_ = (undefined *)0x0;
      auStack_148._8_8_ = 0;
      uStack_1b0 = 0xe907fa9;
      func_0x048b0d20(auStack_148);
      puVar10 = (undefined *)auStack_148._0_8_;
      lStack_150 = auStack_148._8_8_;
    }
    lStack_118 = 0;
    puStack_110 = (undefined *)0x0;
    lStack_128 = 0;
    lStack_120 = 0;
    pcStack_138 = (code *)0x0;
    pcStack_130 = (code *)0x0;
    auStack_148._0_8_ = 0;
    auStack_148._8_8_ = 0;
    uStack_1b0 = 0xe907fe4;
    puStack_158 = puVar10;
    func_0x05d84ba0(auStack_148);
    uStack_1b0 = 0xe907ff6;
    func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
    if ((lStack_180 == lStack_b0) && ((lStack_a0 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_b4 == '\0') || ((int)uStack_188 != iStack_b8)) {
        bVar25 = cStack_b4 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        pppppppuVar19 = pppppppuStack_d8;
        if (cStack_b4 == '\x02') {
          pppppppuVar19 = &pppppppuStack_d8;
        }
        uStack_1b0 = 0xe908fcd;
        lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar19);
        bVar25 = lVar8 != 0;
      }
    }
    else {
      bVar25 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xe908033;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1b0 = 0xe908044;
      (*pcStack_130)(auStack_148);
    }
    plVar4 = plStack_e8;
    if (bVar25) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(plVar6 + 0x3a) != 0xffffffff) {
        uStack_1b0 = 0xe90807c;
        (**(code **)(&UNK_0f4ceea0 + (ulong)*(uint *)(plVar6 + 0x3a) * 8))(auStack_148,plVar6);
      }
      pcVar11 = (code *)0x0;
      uStack_1b0 = 0xe90808e;
      memset(plVar6,0,0x148);
      *(undefined4 *)(plVar6 + 8) = 0x3f800000;
      plVar6[9] = 0;
      plVar6[10] = 0;
      plVar6[0xb] = 0;
      plVar6[0xc] = 0;
      plVar6[0xd] = 0;
      plVar6[0xe] = 0;
      plVar6[0xf] = 0;
      *(undefined4 *)(plVar6 + 0x10) = 0x3f800000;
      plVar6[0x11] = 0;
      plVar6[0x12] = 0;
      plVar6[0x13] = 0;
      plVar6[0x14] = 0;
      plVar6[0x15] = 0;
      plVar6[0x16] = 0;
      plVar6[0x17] = 0;
      *(undefined4 *)(plVar6 + 0x18) = 0x3f800000;
      plVar6[0x19] = 0;
      plVar6[0x1a] = 0;
      plVar6[0x1b] = 0;
      plVar6[0x1c] = 0;
      plVar6[0x1d] = 0;
      plVar6[0x1e] = 0;
      plVar6[0x1f] = 0;
      *(undefined4 *)(plVar6 + 0x20) = 0x3f800000;
      plVar6[0x25] = 0;
      plVar6[0x26] = 0;
      plVar6[0x23] = 0;
      plVar6[0x24] = 0;
      plVar6[0x21] = 0;
      plVar6[0x22] = 0;
      plVar6[0x27] = 0;
      *(undefined4 *)(plVar6 + 0x28) = 0x3f800000;
      *(undefined4 *)(plVar6 + 0x3a) = 0;
      pcStack_198 = (code *)&UNK_0db809c0;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x3bc891592);
      lStack_178 = 0;
      puStack_170 = &UNK_0db809a0;
      lStack_128 = plStack_f0[4];
      auStack_148._0_8_ = *plStack_f0;
      auStack_148._8_8_ = plStack_f0[1];
      pcStack_138 = (code *)plStack_f0[2];
      pcStack_130 = (code *)plStack_f0[3];
      plVar13 = (long *)plStack_f0[2];
      uStack_1a8 = plVar6;
      lStack_180 = lVar8;
      if (plVar13 != (long *)0x0) {
        uStack_1b0 = 0xe9081ca;
        pcVar11 = (code *)(**(code **)(*plVar13 + 0x30))(plVar13,0);
      }
      puStack_158 = &UNK_0f497fe8;
      uStack_1b0 = 0xe908774;
      pcStack_138 = pcVar11;
      func_0x0ed75bc0(&puStack_158,plVar4,&uStack_1a8,uStack_f8,auStack_148);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xe908787;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      lVar8 = param_3[5];
      uStack_1b0 = 0xe9081e7;
      uVar9 = func_0x0db80270(lVar8);
      uStack_1b0 = 0xe9081f9;
      puVar10 = (undefined *)FUN_048b0c90(lVar8,uVar9,uVar22,1);
      if (puVar10 == (undefined *)0x0) {
        auStack_148._0_8_ = (undefined *)0x0;
        auStack_148._8_8_ = 0;
        uStack_1b0 = 0xe908210;
        func_0x048b0d20(auStack_148);
        puVar10 = (undefined *)auStack_148._0_8_;
        lVar8 = auStack_148._8_8_;
      }
      lStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148._0_8_ = 0;
      auStack_148._8_8_ = 0;
      uStack_1b0 = 0xe90824b;
      puStack_158 = puVar10;
      lStack_150 = lVar8;
      func_0x05d84ba0(auStack_148);
      uStack_1b0 = 0xe90825d;
      func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
      if ((lStack_180 == lStack_b0) && ((lStack_a0 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_b4 == '\0') || ((int)uStack_188 != iStack_b8)) {
          bVar25 = cStack_b4 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          pppppppuVar19 = pppppppuStack_d8;
          if (cStack_b4 == '\x02') {
            pppppppuVar19 = &pppppppuStack_d8;
          }
          uStack_1b0 = 0xe9090fb;
          lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar19);
          bVar25 = lVar8 != 0;
        }
      }
      else {
        bVar25 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xe90829a;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1b0 = 0xe9082ab;
        (*pcStack_130)(auStack_148);
      }
      plVar4 = plStack_e8;
      if (bVar25) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(plVar6 + 0x3a) != 0xffffffff) {
          uStack_1b0 = 0xe9082e3;
          (**(code **)(&UNK_0f4ceea0 + (ulong)*(uint *)(plVar6 + 0x3a) * 8))(auStack_148,plVar6);
        }
        pcVar11 = (code *)0x0;
        uStack_1b0 = 0xe9082f5;
        memset(plVar6,0,0x148);
        *(undefined4 *)(plVar6 + 8) = 0x3f800000;
        plVar6[9] = 0;
        plVar6[10] = 0;
        plVar6[0xb] = 0;
        plVar6[0xc] = 0;
        plVar6[0xd] = 0;
        plVar6[0xe] = 0;
        plVar6[0xf] = 0;
        *(undefined4 *)(plVar6 + 0x10) = 0x3f800000;
        plVar6[0x11] = 0;
        plVar6[0x12] = 0;
        plVar6[0x13] = 0;
        plVar6[0x14] = 0;
        plVar6[0x15] = 0;
        plVar6[0x16] = 0;
        plVar6[0x17] = 0;
        *(undefined4 *)(plVar6 + 0x18) = 0x3f800000;
        plVar6[0x19] = 0;
        plVar6[0x1a] = 0;
        plVar6[0x1b] = 0;
        plVar6[0x1c] = 0;
        plVar6[0x1d] = 0;
        plVar6[0x1e] = 0;
        plVar6[0x1f] = 0;
        *(undefined4 *)(plVar6 + 0x20) = 0x3f800000;
        plVar6[0x25] = 0;
        plVar6[0x26] = 0;
        plVar6[0x23] = 0;
        plVar6[0x24] = 0;
        plVar6[0x21] = 0;
        plVar6[0x22] = 0;
        plVar6[0x27] = 0;
        *(undefined4 *)(plVar6 + 0x28) = 0x3f800000;
        *(undefined4 *)(plVar6 + 0x3a) = 1;
        pcStack_198 = (code *)&UNK_0db81060;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x348ab7c50);
        lStack_178 = 0;
        puStack_170 = &UNK_0db81040;
        lStack_128 = plStack_f0[4];
        auStack_148._0_8_ = *plStack_f0;
        auStack_148._8_8_ = plStack_f0[1];
        pcStack_138 = (code *)plStack_f0[2];
        pcStack_130 = (code *)plStack_f0[3];
        plVar13 = (long *)plStack_f0[2];
        uStack_1a8 = plVar6;
        lStack_180 = lVar8;
        if (plVar13 != (long *)0x0) {
          uStack_1b0 = 0xe908434;
          pcVar11 = (code *)(**(code **)(*plVar13 + 0x30))(plVar13,1);
        }
        puStack_158 = &UNK_0f498060;
        uStack_1b0 = 0xe908b49;
        pcStack_138 = pcVar11;
        func_0x0ed75bc0(&puStack_158,plVar4,&uStack_1a8,uStack_f8,auStack_148);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0xe908b5c;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else {
        lVar8 = param_3[5];
        uStack_1b0 = 0xe908451;
        uVar9 = func_0x0db80350(lVar8);
        uStack_1b0 = 0xe908463;
        puVar10 = (undefined *)FUN_048b0c90(lVar8,uVar9,uVar22,1);
        if (puVar10 == (undefined *)0x0) {
          auStack_148._0_8_ = (undefined *)0x0;
          auStack_148._8_8_ = 0;
          uStack_1b0 = 0xe90847a;
          func_0x048b0d20(auStack_148);
          puVar10 = (undefined *)auStack_148._0_8_;
          lVar8 = auStack_148._8_8_;
        }
        lStack_118 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_128 = 0;
        lStack_120 = 0;
        pcStack_138 = (code *)0x0;
        pcStack_130 = (code *)0x0;
        auStack_148._0_8_ = 0;
        auStack_148._8_8_ = 0;
        uStack_1b0 = 0xe9084b5;
        puStack_158 = puVar10;
        lStack_150 = lVar8;
        func_0x05d84ba0(auStack_148);
        uStack_1b0 = 0xe9084c7;
        func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
        if ((lStack_180 == lStack_b0) && ((lStack_a0 != 0) == (puStack_170 != (undefined *)0x0))) {
          if ((cStack_b4 == '\0') || ((int)uStack_188 != iStack_b8)) {
            bVar25 = cStack_b4 == '\0' && uStack_188._4_1_ == '\0';
          }
          else {
            pppppppuVar19 = pppppppuStack_d8;
            if (cStack_b4 == '\x02') {
              pppppppuVar19 = &pppppppuStack_d8;
            }
            uStack_1b0 = 0xe9091a0;
            lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar19);
            bVar25 = lVar8 != 0;
          }
        }
        else {
          bVar25 = false;
        }
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0xe908504;
          (*pcStack_190)(&uStack_1a8);
        }
        if (pcStack_130 != (code *)0x0) {
          uStack_1b0 = 0xe908515;
          (*pcStack_130)(auStack_148);
        }
        plVar4 = plStack_e8;
        if (bVar25) {
          lVar8 = param_3[5];
          if ((ulong)*(uint *)(plVar6 + 0x3a) != 0xffffffff) {
            uStack_1b0 = 0xe90854d;
            (**(code **)(&UNK_0f4ceea0 + (ulong)*(uint *)(plVar6 + 0x3a) * 8))(auStack_148,plVar6);
          }
          pcVar11 = (code *)0x0;
          uStack_1b0 = 0xe90855f;
          memset(plVar6,0,0x1d0);
          *(undefined4 *)(plVar6 + 8) = 0x3f800000;
          plVar6[9] = 0;
          plVar6[10] = 0;
          plVar6[0xb] = 0;
          plVar6[0xc] = 0;
          plVar6[0xd] = 0;
          plVar6[0xe] = 0;
          plVar6[0xf] = 0;
          *(undefined4 *)(plVar6 + 0x10) = 0x3f800000;
          plVar6[0x11] = 0;
          plVar6[0x12] = 0;
          plVar6[0x13] = 0;
          plVar6[0x14] = 0;
          plVar6[0x15] = 0;
          plVar6[0x16] = 0;
          plVar6[0x17] = 0;
          *(undefined4 *)(plVar6 + 0x18) = 0x3f800000;
          plVar6[0x19] = 0;
          plVar6[0x1a] = 0;
          plVar6[0x1b] = 0;
          plVar6[0x1c] = 0;
          plVar6[0x1d] = 0;
          plVar6[0x1e] = 0;
          plVar6[0x1f] = 0;
          *(undefined4 *)(plVar6 + 0x20) = 0x3f800000;
          plVar6[0x25] = 0;
          plVar6[0x26] = 0;
          plVar6[0x23] = 0;
          plVar6[0x24] = 0;
          plVar6[0x21] = 0;
          plVar6[0x22] = 0;
          plVar6[0x27] = 0;
          *(undefined4 *)(plVar6 + 0x28) = 0x3f800000;
          plVar6[0x29] = 0;
          plVar6[0x2a] = 0;
          plVar6[0x2b] = 0;
          plVar6[0x2c] = 0;
          plVar6[0x2d] = 0;
          plVar6[0x2e] = 0;
          plVar6[0x2f] = 0;
          *(undefined4 *)(plVar6 + 0x30) = 0x3f800000;
          plVar6[0x31] = 0;
          plVar6[0x32] = 0;
          plVar6[0x33] = 0;
          plVar6[0x34] = 0;
          plVar6[0x35] = 0;
          plVar6[0x36] = 0;
          plVar6[0x37] = 0;
          *(undefined4 *)(plVar6 + 0x38) = 0x3f800000;
          *(undefined4 *)(plVar6 + 0x3a) = 2;
          pcStack_198 = (code *)&UNK_0db81630;
          pcStack_190 = (code *)0x0;
          uStack_188 = CONCAT35(uStack_188._5_3_,0x3e38fe1a6);
          lStack_178 = 0;
          puStack_170 = &UNK_0db81610;
          lStack_128 = plStack_f0[4];
          auStack_148._0_8_ = *plStack_f0;
          auStack_148._8_8_ = plStack_f0[1];
          pcStack_138 = (code *)plStack_f0[2];
          pcStack_130 = (code *)plStack_f0[3];
          plVar13 = (long *)plStack_f0[2];
          uStack_1a8 = plVar6;
          lStack_180 = lVar8;
          if (plVar13 != (long *)0x0) {
            uStack_1b0 = 0xe9086fa;
            pcVar11 = (code *)(**(code **)(*plVar13 + 0x30))(plVar13,2);
          }
          puStack_158 = &UNK_0f4980d8;
          uStack_1b0 = 0xe908df9;
          pcStack_138 = pcVar11;
          func_0x0ed75bc0(&puStack_158,plVar4,&uStack_1a8,uStack_f8,auStack_148);
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0xe908e0c;
            (*pcStack_190)(&uStack_1a8);
          }
        }
        else {
          lVar8 = param_3[5];
          uStack_1b0 = 0xe90888a;
          uVar9 = func_0x0db80430(lVar8);
          uStack_1b0 = 0xe90889c;
          puVar10 = (undefined *)FUN_048b0c90(lVar8,uVar9,uVar22,1);
          if (puVar10 == (undefined *)0x0) {
            auStack_148._0_8_ = (undefined *)0x0;
            auStack_148._8_8_ = 0;
            uStack_1b0 = 0xe9088b3;
            func_0x048b0d20(auStack_148);
            puVar10 = (undefined *)auStack_148._0_8_;
            lVar8 = auStack_148._8_8_;
          }
          lStack_118 = 0;
          puStack_110 = (undefined *)0x0;
          lStack_128 = 0;
          lStack_120 = 0;
          pcStack_138 = (code *)0x0;
          pcStack_130 = (code *)0x0;
          auStack_148._0_8_ = 0;
          auStack_148._8_8_ = 0;
          uStack_1b0 = 0xe9088ee;
          puStack_158 = puVar10;
          lStack_150 = lVar8;
          func_0x05d84ba0(auStack_148);
          uStack_1b0 = 0xe908900;
          func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
          if ((lStack_180 == lStack_b0) && ((lStack_a0 != 0) == (puStack_170 != (undefined *)0x0)))
          {
            if ((cStack_b4 == '\0') || ((int)uStack_188 != iStack_b8)) {
              bVar25 = cStack_b4 == '\0' && uStack_188._4_1_ == '\0';
            }
            else {
              pppppppuVar19 = pppppppuStack_d8;
              if (cStack_b4 == '\x02') {
                pppppppuVar19 = &pppppppuStack_d8;
              }
              uStack_1b0 = 0xe9092ad;
              lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar19);
              bVar25 = lVar8 != 0;
            }
          }
          else {
            bVar25 = false;
          }
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0xe90893d;
            (*pcStack_190)(&uStack_1a8);
          }
          if (pcStack_130 != (code *)0x0) {
            uStack_1b0 = 0xe90894e;
            (*pcStack_130)(auStack_148);
          }
          plVar4 = plStack_e8;
          if (bVar25) {
            lVar8 = param_3[5];
            if ((ulong)*(uint *)(plVar6 + 0x3a) != 0xffffffff) {
              uStack_1b0 = 0xe908986;
              (**(code **)(&UNK_0f4ceea0 + (ulong)*(uint *)(plVar6 + 0x3a) * 8))(auStack_148,plVar6)
              ;
            }
            pcVar11 = (code *)0x0;
            uStack_1b0 = 0xe908998;
            memset(plVar6,0,0x150);
            *(undefined4 *)(plVar6 + 8) = 0x3f800000;
            plVar6[9] = 0;
            plVar6[10] = 0;
            plVar6[0xb] = 0;
            plVar6[0xc] = 0;
            plVar6[0xd] = 0;
            plVar6[0xe] = 0;
            plVar6[0xf] = 0;
            *(undefined4 *)(plVar6 + 0x10) = 0x3f800000;
            plVar6[0x11] = 0;
            plVar6[0x12] = 0;
            plVar6[0x13] = 0;
            plVar6[0x14] = 0;
            plVar6[0x15] = 0;
            plVar6[0x16] = 0;
            plVar6[0x17] = 0;
            *(undefined4 *)(plVar6 + 0x18) = 0x3f800000;
            plVar6[0x19] = 0;
            plVar6[0x1a] = 0;
            plVar6[0x1b] = 0;
            plVar6[0x1c] = 0;
            plVar6[0x1d] = 0;
            plVar6[0x1e] = 0;
            plVar6[0x1f] = 0;
            *(undefined4 *)(plVar6 + 0x20) = 0x3f800000;
            plVar6[0x25] = 0;
            plVar6[0x26] = 0;
            plVar6[0x23] = 0;
            plVar6[0x24] = 0;
            plVar6[0x21] = 0;
            plVar6[0x22] = 0;
            plVar6[0x27] = 0;
            *(undefined4 *)(plVar6 + 0x28) = 0x3f800000;
            *(undefined4 *)(plVar6 + 0x3a) = 3;
            pcStack_198 = (code *)&UNK_0db81c70;
            pcStack_190 = (code *)0x0;
            uStack_188 = CONCAT35(uStack_188._5_3_,0x3eb89c7a4);
            lStack_178 = 0;
            puStack_170 = &UNK_0db81c50;
            lStack_128 = plStack_f0[4];
            auStack_148._0_8_ = *plStack_f0;
            auStack_148._8_8_ = plStack_f0[1];
            pcStack_138 = (code *)plStack_f0[2];
            pcStack_130 = (code *)plStack_f0[3];
            plVar13 = (long *)plStack_f0[2];
            uStack_1a8 = plVar6;
            lStack_180 = lVar8;
            if (plVar13 != (long *)0x0) {
              uStack_1b0 = 0xe908ad7;
              pcVar11 = (code *)(**(code **)(*plVar13 + 0x30))(plVar13,3);
            }
            puStack_158 = &UNK_0f498150;
            uStack_1b0 = 0xe90903a;
            pcStack_138 = pcVar11;
            func_0x0ed75bc0(&puStack_158,plVar4,&uStack_1a8,uStack_f8,auStack_148);
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0xe90904d;
              (*pcStack_190)(&uStack_1a8);
            }
          }
          else {
            lVar8 = param_3[5];
            uStack_1b0 = 0xe908b7a;
            uVar9 = func_0x0db80510(lVar8);
            uStack_1b0 = 0xe908b8c;
            puVar10 = (undefined *)FUN_048b0c90(lVar8,uVar9,uVar22,1);
            if (puVar10 == (undefined *)0x0) {
              auStack_148._0_8_ = (undefined *)0x0;
              auStack_148._8_8_ = 0;
              uStack_1b0 = 0xe908ba3;
              func_0x048b0d20(auStack_148);
              puVar10 = (undefined *)auStack_148._0_8_;
              lVar8 = auStack_148._8_8_;
            }
            lStack_118 = 0;
            puStack_110 = (undefined *)0x0;
            lStack_128 = 0;
            lStack_120 = 0;
            pcStack_138 = (code *)0x0;
            pcStack_130 = (code *)0x0;
            auStack_148._0_8_ = 0;
            auStack_148._8_8_ = 0;
            uStack_1b0 = 0xe908bde;
            puStack_158 = puVar10;
            lStack_150 = lVar8;
            func_0x05d84ba0(auStack_148);
            uStack_1b0 = 0xe908bf0;
            func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
            if ((lStack_180 == lStack_b0) && ((lStack_a0 != 0) == (puStack_170 != (undefined *)0x0))
               ) {
              if ((cStack_b4 == '\0') || ((int)uStack_188 != iStack_b8)) {
                bVar25 = cStack_b4 == '\0' && uStack_188._4_1_ == '\0';
              }
              else {
                pppppppuVar19 = pppppppuStack_d8;
                if (cStack_b4 == '\x02') {
                  pppppppuVar19 = &pppppppuStack_d8;
                }
                uStack_1b0 = 0xe9092ca;
                lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar19);
                bVar25 = lVar8 != 0;
              }
            }
            else {
              bVar25 = false;
            }
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0xe908c2d;
              (*pcStack_190)(&uStack_1a8);
            }
            if (pcStack_130 != (code *)0x0) {
              uStack_1b0 = 0xe908c3e;
              (*pcStack_130)(auStack_148);
            }
            plVar4 = plStack_e8;
            if (bVar25) {
              lVar8 = param_3[5];
              if ((ulong)*(uint *)(plVar6 + 0x3a) != 0xffffffff) {
                uStack_1b0 = 0xe908c76;
                (**(code **)(&UNK_0f4ceea0 + (ulong)*(uint *)(plVar6 + 0x3a) * 8))
                          (auStack_148,plVar6);
              }
              plVar6[0xc] = 0;
              plVar6[0xd] = 0;
              plVar6[0x14] = 0;
              plVar6[0x15] = 0;
              plVar6[0x1c] = 0;
              plVar6[0x1d] = 0;
              plVar6[0x1a] = 0;
              plVar6[0x1b] = 0;
              plVar6[0x18] = 0;
              plVar6[0x19] = 0;
              plVar6[0x16] = 0;
              plVar6[0x17] = 0;
              plVar6[0x12] = 0;
              plVar6[0x13] = 0;
              plVar6[0x10] = 0;
              plVar6[0x11] = 0;
              plVar6[10] = 0;
              plVar6[0xb] = 0;
              plVar6[8] = 0;
              plVar6[9] = 0;
              plVar6[6] = 0;
              plVar6[7] = 0;
              plVar6[4] = 0;
              plVar6[5] = 0;
              plVar6[2] = 0;
              plVar6[3] = 0;
              *plVar6 = 0;
              plVar6[1] = 0;
              plVar6[0xe] = 0;
              plVar6[0xf] = 0;
              plVar6[0x1e] = 0;
              *(undefined4 *)(plVar6 + 0xd) = 0x3f800000;
              plVar6[0x14] = 0;
              *(undefined4 *)(plVar6 + 0x15) = 0x3f800000;
              *(undefined4 *)(plVar6 + 0x3a) = 4;
              pcStack_198 = (code *)&UNK_0db821d0;
              pcStack_190 = (code *)0x0;
              uStack_188 = CONCAT35(uStack_188._5_3_,0x39b973607);
              lStack_178 = 0;
              puStack_170 = &UNK_0db821b0;
              lStack_128 = plStack_f0[4];
              auStack_148._0_8_ = *plStack_f0;
              auStack_148._8_8_ = plStack_f0[1];
              pcStack_138 = (code *)plStack_f0[2];
              pcStack_130 = (code *)plStack_f0[3];
              plVar13 = (long *)plStack_f0[2];
              lStack_180 = lVar8;
              if (plVar13 == (long *)0x0) {
                pcStack_138 = (code *)0x0;
                uStack_1a8 = plVar6;
              }
              else {
                uStack_1b0 = 0xe908d8a;
                uStack_1a8 = plVar6;
                pcStack_138 = (code *)(**(code **)(*plVar13 + 0x30))(plVar13,4);
              }
              puStack_158 = &UNK_0f4981c8;
              uStack_1b0 = 0xe90916a;
              func_0x0ed75bc0(&puStack_158,plVar4,&uStack_1a8,uStack_f8,auStack_148);
              if (pcStack_190 != (code *)0x0) {
                uStack_1b0 = 0xe90917d;
                (*pcStack_190)(&uStack_1a8);
              }
            }
            else {
              lVar8 = param_3[5];
              uStack_1b0 = 0xe908e2a;
              uVar9 = func_0x0db805f0(lVar8);
              uStack_1b0 = 0xe908e3c;
              puVar10 = (undefined *)FUN_048b0c90(lVar8,uVar9,uVar22,1);
              if (puVar10 == (undefined *)0x0) {
                auStack_148._0_8_ = (undefined *)0x0;
                auStack_148._8_8_ = 0;
                uStack_1b0 = 0xe908e53;
                func_0x048b0d20(auStack_148);
                puVar10 = (undefined *)auStack_148._0_8_;
                lVar8 = auStack_148._8_8_;
              }
              lStack_118 = 0;
              puStack_110 = (undefined *)0x0;
              lStack_128 = 0;
              lStack_120 = 0;
              pcStack_138 = (code *)0x0;
              pcStack_130 = (code *)0x0;
              auStack_148._0_8_ = 0;
              auStack_148._8_8_ = 0;
              uStack_1b0 = 0xe908e8e;
              puStack_158 = puVar10;
              lStack_150 = lVar8;
              func_0x05d84ba0(auStack_148);
              uStack_1b0 = 0xe908ea0;
              func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
              if ((lStack_180 == lStack_b0) &&
                 ((lStack_a0 != 0) == (puStack_170 != (undefined *)0x0))) {
                if ((cStack_b4 == '\0') || ((int)uStack_188 != iStack_b8)) {
                  bVar25 = cStack_b4 == '\0' && uStack_188._4_1_ == '\0';
                }
                else {
                  pppppppuVar19 = &pppppppuStack_d8;
                  if (cStack_b4 != '\x02') {
                    pppppppuVar19 = pppppppuStack_d8;
                  }
                  uStack_1b0 = 0xe9091f0;
                  lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar19);
                  bVar25 = lVar8 != 0;
                }
              }
              else {
                bVar25 = false;
              }
              plVar4 = plStack_e8;
              if (pcStack_190 != (code *)0x0) {
                uStack_1b0 = 0xe908ee5;
                (*pcStack_190)(&uStack_1a8);
              }
              if (pcStack_130 != (code *)0x0) {
                uStack_1b0 = 0xe908ef6;
                (*pcStack_130)(auStack_148);
              }
              if (bVar25) {
                lVar8 = param_3[5];
                if ((ulong)*(uint *)(plVar6 + 0x3a) != 0xffffffff) {
                  uStack_1b0 = 0xe908f26;
                  (**(code **)(&UNK_0f4ceea0 + (ulong)*(uint *)(plVar6 + 0x3a) * 8))
                            (auStack_148,plVar6);
                }
                *(undefined4 *)(plVar6 + 0x3a) = 5;
                pcStack_198 = (code *)&UNK_0db82630;
                pcStack_190 = (code *)0x0;
                uStack_188 = CONCAT35(uStack_188._5_3_,0x3f8a86e18);
                lStack_178 = 0;
                puStack_170 = &UNK_0db82610;
                lStack_128 = plStack_f0[4];
                auStack_148._0_8_ = *plStack_f0;
                auStack_148._8_8_ = plStack_f0[1];
                pcStack_138 = (code *)plStack_f0[2];
                pcStack_130 = (code *)plStack_f0[3];
                plVar13 = (long *)plStack_f0[2];
                lStack_180 = lVar8;
                if (plVar13 == (long *)0x0) {
                  pcStack_138 = (code *)0x0;
                  uStack_1a8 = plVar6;
                }
                else {
                  uStack_1b0 = 0xe908fae;
                  uStack_1a8 = plVar6;
                  pcStack_138 = (code *)(**(code **)(*plVar13 + 0x30))(plVar13,5);
                }
                puStack_158 = &UNK_0f498240;
                uStack_1b0 = 0xe90923d;
                func_0x0ed75bc0(&puStack_158,plVar4,&uStack_1a8,uStack_f8,auStack_148);
                if (pcStack_190 != (code *)0x0) {
                  uStack_1b0 = 0xe90924c;
                  (*pcStack_190)(&uStack_1a8);
                }
              }
              else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                      (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
                uStack_1a8 = (long *)0x2300000149614c;
                uStack_1b0 = 0xe9090b1;
                func_0x0ed5ffe0(*plStack_f0,8,&uStack_1a8);
                if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
                  uStack_1b0 = 0xe9090dc;
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
                }
                uStack_1a8 = (long *)0x0;
              }
            }
          }
        }
      }
    }
    if (pcStack_c0 != (code *)0x0) {
      uStack_1b0 = 0xe909263;
      (*pcStack_c0)(&pppppppuStack_d8);
    }
  }
LAB_0e909263:
  if (((ulong)uStack_98 & 1) != 0) {
    uStack_1b0 = 0xe90928a;
    func_0x0412a280(pcStack_88,(ulong)uStack_98 & 0xfffffffffffffffe);
  }
  return;
}


