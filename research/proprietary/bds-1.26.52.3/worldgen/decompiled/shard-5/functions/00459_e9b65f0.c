/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeab65f0 (ELF vaddr 0xe9b65f0)
 * Label: caller-of-callee
 * Body:  [[0eab65f0, 0eab6f20] [0eab6f30, 0eab7aa1] [0eab8540, 0eab8722]]
 * Ghidra: FUN_0eab65f0
 */


/* WARNING: Possible PIC construction at 0x0eab685d: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eab65f0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auVar10 [8];
  undefined8 uVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 *******pppppppuVar19;
  long *unaff_RBX;
  undefined8 ******ppppppuVar20;
  byte bVar21;
  uint uVar22;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar23;
  long lVar24;
  undefined *puVar25;
  byte *pbVar26;
  undefined1 uVar27;
  long *unaff_R12;
  long *unaff_R13;
  long *unaff_R14;
  ulong unaff_R15;
  bool bVar28;
  undefined1 auStack_1f8 [88];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  code *pcStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  char cStack_158;
  uint *puStack_150;
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
  long *plStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
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
  
  pcVar16 = (code *)param_3[7];
  uVar14 = unaff_R15;
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] != (code *)0x0) {
      uStack_1a0 = 0xeab663d;
      (*(code *)param_3[3])(param_3);
    }
    param_3[2] = (long)&UNK_0eab4fd0;
    *(undefined4 *)(param_3 + 4) = 0x19b1d972;
    param_3[3] = (long)&UNK_0eab5250;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0xeab667a;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
    if (lVar7 == 0) {
      uStack_1a0 = 0xeab7a1d;
      func_0x0eec74c0(0x88,0);
    }
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x48) = 0;
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined8 *)(lVar7 + 0x68) = 0;
    *(undefined8 *)(lVar7 + 0x70) = 0;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x78) = 0;
    *(undefined2 *)(lVar7 + 0x20) = 0xffff;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined2 *)(lVar7 + 0x48) = 0xffff;
    *(undefined8 *)(lVar7 + 0x58) = 0;
    *(undefined8 *)(lVar7 + 0x60) = 0;
    *(undefined8 *)(lVar7 + 0x68) = 0;
    *(undefined2 *)(lVar7 + 0x70) = 0xffff;
    *(undefined4 *)(lVar7 + 0x80) = 0;
    *param_3 = lVar7;
    puVar25 = (undefined *)param_3[7];
    pcVar16 = (code *)&UNK_0eab4ef0;
    param_3[7] = (long)&UNK_0eab4ef0;
    if (puVar25 == &UNK_0eab4ef0) {
      lVar7 = param_3[6];
      param_3[6] = lVar7;
      if (lVar7 != 0) goto LAB_0eab6731;
    }
    else {
      param_3[6] = 0;
    }
LAB_0eab671b:
    uVar14 = param_3[5];
    uStack_1a0 = 0xeab6729;
    (*pcVar16)(0,param_3,0);
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_0eab6731;
    uStack_1a0 = 0xeab6761;
    lVar7 = func_0x048aead0(uVar14);
    bVar21 = *(byte *)(lVar7 + 0x1a);
  }
  else {
    lVar7 = param_3[6];
    if (lVar7 == 0) goto LAB_0eab671b;
LAB_0eab6731:
    bVar21 = *(byte *)(lVar7 + 0x1a);
  }
  if ((bVar21 & 1) == 0) goto SUB_0eab8540;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (long *)0x0;
    uStack_190 = 0;
    uStack_1a0 = 0xeab6886;
    func_0x048b1dc0(&uStack_198);
    plVar3 = uStack_198;
    uVar14 = uStack_190;
    unaff_R14 = &uStack_198;
joined_r0x0eab6891:
    if (plVar3 == (long *)0x0) {
      uStack_1a0 = 0xeab689f;
      plVar3 = (long *)func_0x048aead0(uVar14);
    }
  }
  else {
    plVar3 = (long *)*unaff_R14;
    if (plVar3 == (long *)0x0) {
      uVar14 = param_3[5];
      uStack_1a0 = 0xeab678b;
      (*(code *)param_3[7])(0,param_3,0);
      plVar3 = (long *)*unaff_R14;
      goto joined_r0x0eab6891;
    }
  }
  puStack_e0 = (undefined8 *)plVar3[0xd];
  uStack_1a0 = 0xeab67ad;
  bVar21 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar21 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0xeab6862;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = uVar14;
SUB_0eab8540:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar3 = (long *)*param_3;
    plVar13 = plVar3;
    if (cVar1 == '\x02') {
      plVar13 = param_3;
    }
    if (plVar13 == (long *)0x0 || (int)param_3[4] != 0x19b1d972) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeab859f;
        (*pcVar16)(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar3 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar3 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeab85c1;
      plVar13 = (long *)func_0x0488e200(lVar7,lVar24,0x19b1d972,plVar3);
    }
    lVar7 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeab85d1;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x48),lVar7);
    bVar21 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar21 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeab85ee;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar21;
    if ((uVar14 >> 0x20 & 1) == 0) {
      lVar7 = param_3[5];
      uVar22 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xeab8625;
      cVar1 = func_0x0eab8750(param_2,lVar7,plVar13,param_4,param_5,2);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar27 = 2;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
    }
    else {
      if ((uVar14 & 0xfffffffe) != 0) {
        lVar7 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeab8691;
        func_0x0ed5ffe0(lVar7,8,(undefined1 *)((long)register0x00000020 + -0x50));
        if ((*(ulong *)((long)register0x00000020 + -0x50) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xeab86b5;
        (*pcVar16)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x50) & 0xff00ffffffffffff) - 8);
        return;
      }
      lVar7 = param_3[5];
      uVar22 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x58) = uVar14;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xeab86e6;
      cVar1 = func_0x0eab8750(param_2,lVar7,plVar13,param_4,param_5,uVar14 & 0xff);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar27 = *(undefined1 *)((long)register0x00000020 + -0x58);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xeab8714;
    func_0x0eab89c0(param_2,lVar7,plVar13,param_4,param_5,uVar27);
    return;
  }
  if (bVar21 != 1) {
    uStack_198 = (long *)0x120000012f2525;
    uStack_1a0 = 0xeab68cf;
    func_0x0ed5ffe0(*param_5,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0xeab68f2;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0xeab67e7;
  plStack_e8 = param_2;
  uStack_c0 = param_4;
  func_0x0ed6d600(&lStack_68,*param_5);
  lStack_48 = param_3[5];
  lStack_b0 = *param_5;
  ppppppuVar20 = (undefined8 ******)((long)puStack_e0 + 9);
  bVar28 = (*(byte *)(puStack_e0 + 1) & 1) == 0;
  ppppppuVar23 = (undefined8 ******)puStack_e0[3];
  if (bVar28) {
    ppppppuVar23 = ppppppuVar20;
  }
  uVar14 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
  if (!bVar28) {
    uVar14 = puStack_e0[2];
  }
  plStack_b8 = param_5;
  if (ppppppuVar23 == (undefined8 ******)0x0) {
    puStack_f8 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_f8 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar23 & 0xff00ffffffffffff);
  }
  else {
    lVar7 = uVar14 + 9;
    puStack_150 = (uint *)CONCAT71(puStack_150._1_7_,lVar7 == 0);
    uStack_1a0 = 0xeab6929;
    puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
    if (puVar6 == (ulong *)0x0 && (char)puStack_150 == '\0') {
      uStack_1a0 = 0xeab7a35;
      func_0x0eec74c0(lVar7,8);
    }
    *puVar6 = uVar14;
    uStack_1a0 = 0xeab6954;
    func_0x0eee2f00(puVar6 + 1,ppppppuVar23,uVar14);
    *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
    puStack_f8 = (undefined *)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0xeab6993;
  puVar4 = (uint *)func_0x0ed6d180(lStack_b0,&puStack_f8,0);
  plVar3 = plStack_e8;
  if (((ulong)puStack_f8 & 0x80000000000000) != 0) {
    uStack_1a0 = 0xeab69cd;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_f8 & 0xff00ffffffffffff) - 8);
  }
  puStack_f8 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_e0 + 1) & 1) == 0;
  ppppppuVar23 = (undefined8 ******)puStack_e0[3];
  if (bVar28) {
    ppppppuVar23 = ppppppuVar20;
  }
  uVar14 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
  if (!bVar28) {
    uVar14 = puStack_e0[2];
  }
  uStack_1a0 = 0xeab6a05;
  cVar1 = (**(code **)(*plVar3 + 0xb8))(plVar3,ppppppuVar23,uVar14);
  if (cVar1 == '\0') {
    uStack_1a0 = 0xeab6b20;
    puStack_150 = puVar4;
    _auStack_148 = (*(code *)*puStack_e0)(lStack_48);
    uStack_1a0 = 0xeab6b46;
    func_0x0ed8bc80(&uStack_198,auStack_148,*(undefined1 *)(lStack_b0 + 0x2aa));
    uVar14 = (ulong)uStack_198 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_198 + 1);
    if (((ulong)uStack_198 & 1) != 0) {
      uVar14 = uStack_190;
      pcVar16 = pcStack_188;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (pcVar16 == (code *)0x0) {
      pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
    }
    else {
      lVar7 = uVar14 + 9;
      uStack_1a0 = 0xeab6b95;
      puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
      if (lVar7 != 0 && puVar6 == (ulong *)0x0) {
        uStack_1a0 = 0xeab7a47;
        func_0x0eec74c0(lVar7,8);
      }
      *puVar6 = uVar14;
      uStack_1a0 = 0xeab6bc5;
      func_0x0eee2f00(puVar6 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      plVar3 = plStack_e8;
    }
    puVar4 = puStack_150;
    uStack_1a0 = 0xeab6d5c;
    func_0x0ed5ffe0(lStack_b0,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0xeab6d95;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0xeab6db9;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (long *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0xeab6a24;
    (**(code **)(*plVar3 + 0x80))(auStack_148,plVar3,0x40);
    cStack_158 = cStack_108;
    if (cStack_108 == '\0') {
      uStack_198 = (long *)auStack_148;
      uStack_190 = (ulong)plStack_140;
      pcStack_188 = pcStack_138;
      pcStack_180 = pcStack_130;
      uStack_178 = lStack_128;
      lStack_170 = lStack_120;
      lStack_168 = lStack_118;
      puStack_160 = puStack_110;
      pppppppuStack_a8 = (undefined8 *******)puStack_e0[3];
      uStack_a0 = puStack_e0[2];
      if ((*(byte *)(puStack_e0 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar20;
        uStack_a0 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
      }
      uStack_1a0 = 0xeab6c7d;
      puStack_150 = puVar4;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar13 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar13 = plStack_140;
        pcVar16 = pcStack_138;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar13 & 0x7f) << 0x30);
      }
      else {
        lVar7 = (long)plVar13 + 9;
        uStack_1a0 = 0xeab6ccd;
        puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
        if (lVar7 != 0 && puVar6 == (ulong *)0x0) {
          uStack_1a0 = 0xeab7a59;
          func_0x0eec74c0(lVar7,8);
        }
        *puVar6 = (ulong)plVar13;
        uStack_1a0 = 0xeab6cfd;
        func_0x0eee2f00(puVar6 + 1,pcVar16,plVar13);
        *(undefined1 *)((long)puVar6 + (long)plVar13 + 8U) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        plVar3 = plStack_e8;
      }
      puVar4 = puStack_150;
      uStack_1a0 = 0xeab6e23;
      func_0x0ed5ffe0(lStack_b0,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0xeab6e5c;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1a0 = 0xeab6e82;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_d8 = (long *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_188 = pcStack_138;
      uStack_198 = (long *)auStack_148;
      uStack_190 = (ulong)plStack_140;
      plVar13 = (long *)(ulong)(byte)(auStack_148[0] >> 1);
      pcVar16 = (code *)((long)&uStack_198 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar13 = plStack_140;
        pcVar16 = pcStack_138;
      }
      bVar21 = auStack_148[0];
      if (plVar13 != (long *)0x0) {
        uStack_1a0 = 0xeab6a70;
        plVar5 = (long *)func_0x0eee3290();
        pcVar17 = pcVar16;
        for (uVar14 = (ulong)plVar13 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *(code *)(*plVar5 + (ulong)(byte)*pcVar17 * 4);
          pcVar17 = pcVar17 + 1;
        }
        if (3 < plVar13) {
          do {
            *pcVar17 = *(code *)(*plVar5 + (ulong)(byte)*pcVar17 * 4);
            pcVar17[1] = *(code *)(*plVar5 + (ulong)(byte)pcVar17[1] * 4);
            pcVar17[2] = *(code *)(*plVar5 + (ulong)(byte)pcVar17[2] * 4);
            pcVar17[3] = *(code *)(*plVar5 + (ulong)(byte)pcVar17[3] * 4);
            pcVar17 = pcVar17 + 4;
          } while (pcVar17 != pcVar16 + (long)plVar13);
        }
        bVar21 = (byte)uStack_198;
      }
      if ((bVar21 & 1) == 0) {
        pcStack_c8 = pcStack_188;
        uStack_d8 = uStack_198;
        uStack_d0 = uStack_190;
      }
      else {
        uStack_1a0 = 0xeab6dec;
        func_0x0412e5e0(&uStack_d8,pcStack_188,uStack_190);
      }
    }
    lVar7 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uVar14 = (ulong)uStack_198 & 0xfffffffffffffffe;
LAB_0eab6f6c:
        uStack_1a0 = 0xeab6f71;
        func_0x0412a280(pcStack_188,uVar14);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar7 != lStack_168) {
          uStack_1a0 = 0xeab6eec;
          func_0x048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar7;
        uStack_1a0 = 0xeab6f08;
        func_0x0412a280(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar17 = pcStack_188;
      pcVar16 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar17 != pcVar16; pcVar16 = pcVar16 + -0x50) {
          if ((pcVar16[-8] == (code)0x1) && (((byte)pcVar16[-0x30] & 1) != 0)) {
            uStack_1a0 = 0xeab6f58;
            func_0x0412a280(*(undefined8 *)(pcVar16 + -0x20),
                            *(ulong *)(pcVar16 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar17;
        uVar14 = uStack_178 - (long)pcStack_188;
        goto LAB_0eab6f6c;
      }
    }
  }
  uStack_1a0 = 0xeab6f7e;
  (**(code **)(*plVar3 + 0xd0))(plVar3);
  lVar7 = *(long *)(puVar4 + 2);
  uVar22 = *(uint *)(lVar7 + 0x1c + (ulong)*puVar4 * 0x20);
  *puVar4 = uVar22;
  if (puVar4[0x48] == 0) {
    uVar15 = puVar4[4];
LAB_0eab6fc0:
    lVar24 = lVar7 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar7 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1a0 = 0xeab6fe9;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_198,lVar24 + -0x18);
      uVar15 = puVar4[4];
    }
    *(undefined4 *)(lVar24 + -0x10) = 0xffffffff;
    puVar4[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) != uVar22)
          && (uVar15 = puVar4[4], uVar22 == uVar15 - 1)) goto LAB_0eab6fc0;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0xeab7028;
    auStack_40 = (*(code *)*puStack_e0)();
    uVar11 = auStack_40._8_8_;
    lVar7 = auStack_40._0_8_;
    uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      uVar14 = uStack_d0;
      pcVar16 = pcStack_c8;
    }
    if (uVar14 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar22 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar22 = ((int)(char)pcVar16[uVar18 + 3] ^
                   ((int)(char)pcVar16[uVar18 + 2] ^
                   ((int)(char)pcVar16[uVar18 + 1] ^
                   ((int)(char)pcVar16[uVar18] ^ uVar22) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar14 = 0;
        do {
          uVar22 = ((int)(char)pcVar16[uVar14 + uVar18] ^ uVar22) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar8 != uVar14);
      }
    }
    if (lVar7 == 0) {
      uStack_1a0 = 0xeab7121;
      lVar7 = func_0x048aead0(uVar11);
    }
    uStack_1a0 = 0xeab7133;
    plStack_58 = (long *)func_0x048b0c90(uVar11,lVar7,uVar22,1);
    if (plStack_58 == (long *)0x0) {
      uStack_198 = (long *)0x0;
      uStack_190 = 0;
      uStack_1a0 = 0xeab7161;
      func_0x048b0d20(&uStack_198);
      plStack_58 = uStack_198;
      uStack_50 = uStack_190;
      if (uStack_198 == (long *)0x0) {
        lVar7 = *plStack_b8;
        uStack_1a0 = 0xeab7840;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar7 + 0x2aa));
        uStack_1a0 = 0xeab7854;
        uVar11 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar14 = uStack_d0;
          pcVar16 = pcStack_c8;
        }
        uStack_1a0 = 0xeab7880;
        uVar11 = func_0x0412f8c0(uVar11,pcVar16,uVar14);
        uStack_1a0 = 0xeab7894;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar28 = (*pbVar12 & 1) != 0;
        pbVar26 = pbVar12 + 1;
        if (bVar28) {
          pbVar26 = *(byte **)(pbVar12 + 0x10);
        }
        uVar14 = (ulong)(*pbVar12 >> 1);
        if (bVar28) {
          uVar14 = *(ulong *)(pbVar12 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1a0 = 0xeab78c6;
        func_0x0ee387f0(auStack_148,pbVar26,uVar14,1);
        uStack_1a0 = 0xeab78d8;
        func_0x0ed5ffe0(lVar7,8,auStack_148);
        uStack_1a0 = 0xeab78e2;
        FUN_0ee386e0(auStack_148);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0xeab78fe;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0eab79b6;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    lStack_168 = 0;
    puStack_160 = (undefined *)0x0;
    uStack_178 = 0;
    lStack_170 = 0;
    pcStack_188 = (code *)0x0;
    pcStack_180 = (code *)0x0;
    uStack_198 = (long *)0x0;
    uStack_190 = 0;
    uStack_1a0 = 0xeab7196;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0xeab71b1;
    func_0x05d9a920(&pppppppuStack_a8,&plStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xeab71c0;
      (*pcStack_180)(&uStack_198);
    }
    bVar28 = (*(byte *)(puStack_e0 + 1) & 1) != 0;
    if (bVar28) {
      ppppppuVar20 = (undefined8 ******)puStack_e0[3];
    }
    uVar14 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
    if (bVar28) {
      uVar14 = puStack_e0[2];
    }
    if (uVar14 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar14 & 3);
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
      if (uVar8 != 0) {
        uVar14 = 0;
        do {
          uVar22 = ((int)*(char *)((long)ppppppuVar20 + uVar14 + uVar18) ^ uVar22) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar8 != uVar14);
      }
    }
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar3 = (long *)*param_3;
    plVar13 = plVar3;
    if (cVar1 == '\x02') {
      plVar13 = param_3;
    }
    if (plVar13 == (long *)0x0 || (int)param_3[4] != 0x19b1d972) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        uStack_1a0 = 0xeab72c0;
        (*(code *)param_3[7])(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar3 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar3 = param_3;
      }
      uStack_1a0 = 0xeab72e2;
      plVar13 = (long *)func_0x0488e200(lVar7,lVar24,0x19b1d972,plVar3);
    }
    plVar3 = (long *)param_3[5];
    if (DAT_0f769410 == '\0') {
      uStack_1a0 = 0xeab7a6a;
      iVar2 = func_0x04108328(&DAT_0f769410);
      if (iVar2 != 0) {
        uStack_1a0 = 0xeab7a77;
        func_0x0ea527d0();
        uStack_1a0 = 0xeab7a91;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f769390,0xf53dab8);
        uStack_1a0 = 0xeab7a9d;
        FUN_0410844d(&DAT_0f769410);
      }
    }
    plVar5 = (long *)(*plVar3 +
                     (ulong)((int)((ulong)(plVar3[1] - *plVar3) >> 3) - 1U &
                            *(uint *)(_DAT_0f769390 + 4)) * 8);
    do {
      lVar7 = *plVar5;
      if (lVar7 == -1) {
        plVar9 = (long *)plVar3[4];
        plVar5 = plVar9;
        goto LAB_0eab7344;
      }
      plVar5 = (long *)(plVar3[3] + lVar7 * 0x18);
    } while (*(uint *)(plVar3[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f769390 + 4));
    plVar9 = (long *)plVar3[4];
LAB_0eab7344:
    if (plVar5 == plVar9) {
      puVar25 = &DAT_0f769390;
    }
    else {
      puVar25 = (undefined *)plVar5[2];
    }
    uStack_1a0 = 0xeab7366;
    auVar10 = (undefined1  [8])func_0x048b0c90(plVar3,puVar25,uVar22,1);
    plStack_f0 = plVar3;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1a0 = 0xeab737d;
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
    uStack_1a0 = 0xeab73bb;
    puStack_f8 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_148);
    uStack_1a0 = 0xeab73d0;
    func_0x05d9a920(&uStack_198,&puStack_f8,auStack_148);
    if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
        bVar28 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar19 = pppppppuStack_a8;
        if (cStack_84 == '\x02') {
          pppppppuVar19 = &pppppppuStack_a8;
        }
        uStack_1a0 = 0xeab7a00;
        lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
        bVar28 = lVar7 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xeab740d;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1a0 = 0xeab741e;
      (*pcStack_130)(auStack_148);
    }
    plVar3 = plStack_e8;
    if (bVar28) {
      lVar7 = param_3[5];
      plVar5 = plVar13 + 1;
      if ((ulong)*(uint *)(plVar13 + 0x10) != 0xffffffff) {
        uStack_1a0 = 0xeab7459;
        (**(code **)(&UNK_0f4d7788 + (ulong)*(uint *)(plVar13 + 0x10) * 8))(auStack_148,plVar5);
      }
      plVar13[0xd] = 0;
      plVar13[0xe] = 0;
      plVar13[0xb] = 0;
      plVar13[0xc] = 0;
      plVar13[9] = 0;
      plVar13[10] = 0;
      plVar13[7] = 0;
      plVar13[8] = 0;
      plVar13[5] = 0;
      plVar13[6] = 0;
      plVar13[3] = 0;
      plVar13[4] = 0;
      *plVar5 = 0;
      plVar13[2] = 0;
      plVar13[0xf] = 0;
      *(undefined2 *)(plVar13 + 4) = 0xffff;
      plVar13[6] = 0;
      plVar13[7] = 0;
      plVar13[8] = 0;
      *(undefined2 *)(plVar13 + 9) = 0xffff;
      plVar13[0xb] = 0;
      plVar13[0xc] = 0;
      plVar13[0xd] = 0;
      *(undefined2 *)(plVar13 + 0xe) = 0xffff;
      *(undefined4 *)(plVar13 + 0x10) = 0;
      pcStack_188 = (code *)&UNK_0ea52bc0;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x39f37f721);
      lStack_168 = 0;
      puStack_160 = &UNK_0ea52a30;
      lStack_128 = plStack_b8[4];
      auStack_148 = (undefined1  [8])*plStack_b8;
      plStack_140 = (long *)plStack_b8[1];
      pcStack_138 = (code *)plStack_b8[2];
      pcStack_130 = (code *)plStack_b8[3];
      plVar13 = (long *)plStack_b8[2];
      uStack_198 = plVar5;
      lStack_170 = lVar7;
      if (plVar13 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
      }
      else {
        uStack_1a0 = 0xeab7531;
        pcStack_138 = (code *)(**(code **)(*plVar13 + 0x30))(plVar13,0);
      }
      puStack_f8 = &UNK_0f4d5c40;
      uStack_1a0 = 0xeab7806;
      func_0x0ed75bc0(&puStack_f8,plVar3,&uStack_198,uStack_c0,auStack_148);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xeab7819;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar3 = (long *)param_3[5];
      uStack_1a0 = 0xeab754b;
      uVar11 = func_0x0b68b830(plVar3);
      uStack_1a0 = 0xeab755e;
      auVar10 = (undefined1  [8])func_0x048b0c90(plVar3,uVar11,uVar22,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1a0 = 0xeab7575;
        func_0x048b0d20(auStack_148);
        auVar10 = auStack_148;
        plVar3 = plStack_140;
      }
      lStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1a0 = 0xeab75b3;
      puStack_f8 = (undefined *)auVar10;
      plStack_f0 = plVar3;
      func_0x05d84ba0(auStack_148);
      uStack_1a0 = 0xeab75cb;
      func_0x05d9a920(&uStack_198,&puStack_f8,auStack_148);
      plVar3 = plStack_e8;
      if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
          bVar28 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar19 = &pppppppuStack_a8;
          if (cStack_84 != '\x02') {
            pppppppuVar19 = pppppppuStack_a8;
          }
          uStack_1a0 = 0xeab794f;
          lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
          bVar28 = lVar7 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xeab7610;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1a0 = 0xeab7621;
        (*pcStack_130)(auStack_148);
      }
      if (bVar28) {
        lVar7 = param_3[5];
        plVar5 = plVar13 + 1;
        if ((ulong)*(uint *)(plVar13 + 0x10) != 0xffffffff) {
          uStack_1a0 = 0xeab7654;
          (**(code **)(&UNK_0f4d7788 + (ulong)*(uint *)(plVar13 + 0x10) * 8))(auStack_148,plVar5);
        }
        plVar13[3] = 0;
        plVar13[4] = 0;
        *plVar5 = 0;
        plVar13[2] = 0;
        plVar13[5] = 0;
        *(undefined2 *)(plVar13 + 4) = 0xffff;
        *(undefined4 *)(plVar13 + 0x10) = 1;
        pcStack_188 = (code *)&UNK_0b68bb50;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x378182224);
        lStack_168 = 0;
        puStack_160 = &UNK_0b68bb30;
        lStack_128 = plStack_b8[4];
        auStack_148 = (undefined1  [8])*plStack_b8;
        plStack_140 = (long *)plStack_b8[1];
        pcStack_138 = (code *)plStack_b8[2];
        pcStack_130 = (code *)plStack_b8[3];
        plVar13 = (long *)plStack_b8[2];
        uStack_198 = plVar5;
        lStack_170 = lVar7;
        if (plVar13 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
        }
        else {
          uStack_1a0 = 0xeab76f2;
          pcStack_138 = (code *)(**(code **)(*plVar13 + 0x30))(plVar13,1);
        }
        puStack_f8 = &UNK_0f2cccf0;
        uStack_1a0 = 0xeab7990;
        func_0x0ed75bc0(&puStack_f8,plVar3,&uStack_198,uStack_c0,auStack_148);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xeab799f;
          (*pcStack_180)(&uStack_198);
        }
      }
      else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
              (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
        uStack_198 = (long *)0x2300000149614c;
        uStack_1a0 = 0xeab775c;
        func_0x0ed5ffe0(*plStack_b8,8,&uStack_198);
        if (((ulong)uStack_198 & 0x80000000000000) != 0) {
          uStack_1a0 = 0xeab7787;
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
        }
        uStack_198 = (long *)0x0;
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1a0 = 0xeab79b6;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_0eab79b6:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0xeab79dd;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


