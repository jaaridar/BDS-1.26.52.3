/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x86794d0 (ELF vaddr 0x85794d0)
 * Label: caller-of-callee
 * Body:  [[086794d0, 08679e0a] [08679e10, 0867b2c4] [0867ce10, 0867d112]]
 * Ghidra: FUN_086794d0
 */


/* WARNING: Possible PIC construction at 0x08679722: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_086794d0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
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
  long *unaff_RBP;
  long *plVar24;
  undefined8 ******ppppppuVar25;
  undefined *puVar26;
  byte *pbVar27;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
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
  undefined *puStack_158;
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
  undefined8 uStack_100;
  uint *puStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 *******pppppppuStack_e0;
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
  undefined8 *puStack_70;
  long lStack_68;
  uint uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pcVar16 = (code *)param_3[7];
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar28 = false;
    }
    else {
      uStack_1b0 = 0x8679520;
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_0867d140;
    }
    param_3[2] = &UNK_0867d220;
    *(undefined4 *)(param_3 + 4) = 0xb3559726;
    param_3[3] = &UNK_0867d450;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0x8679570;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf0);
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1b0 = 0x867b1ff;
      func_0x0eec74c0(0xf0,0);
    }
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 4) = 0x3f800000;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined4 *)(puVar4 + 0x1d) = 0;
    *param_3 = puVar4;
    pcVar16 = (code *)&UNK_0867d140;
    param_3[7] = &UNK_0867d140;
    if (bVar28) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    if (lVar8 == 0) goto LAB_086795d7;
LAB_086795ed:
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_086795ed;
LAB_086795d7:
    uVar11 = param_3[5];
    uStack_1b0 = 0x86795e5;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_086795ed;
    uStack_1b0 = 0x867961d;
    lVar8 = func_0x048aead0(uVar11);
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_0867ce10;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (undefined8 *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0x867974b;
    func_0x048b1dc0(&uStack_1a8);
    puVar4 = uStack_1a8;
    uVar14 = uStack_1a0;
    unaff_R14 = &uStack_1a8;
joined_r0x08679756:
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1b0 = 0x8679764;
      puVar4 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar4 = (undefined8 *)*unaff_R14;
    if (puVar4 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1b0 = 0x8679647;
      (*(code *)param_3[7])(0,param_3,0);
      puVar4 = (undefined8 *)*unaff_R14;
      goto joined_r0x08679756;
    }
  }
  unaff_R15 = (undefined8 *)puVar4[0xd];
  uStack_1b0 = 0x8679661;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0x8679727;
    unaff_RBX = param_5;
    unaff_RBP = param_2;
    unaff_R12 = param_3;
    unaff_R13 = param_4;
SUB_0867ce10:
    *(long **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x4caa68da) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x867ce6f;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x867ce91;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xb3559726,puVar4);
    }
    lVar8 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x867cea1;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x867cebe;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar14 >> 0x20 & 1) == 0) {
      uVar11 = param_3[5];
      uVar9 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x867cef9;
      cVar2 = func_0x0867da90(param_2,uVar11,puVar13,param_4,param_5,5);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x867cf26;
      cVar2 = func_0x0867dcc0(param_2,uVar11,puVar13,param_4,param_5,5);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x867cf53;
      cVar2 = func_0x0867df00(param_2,uVar11,puVar13,param_4,param_5,5);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x867cf80;
      cVar2 = func_0x0867e1d0(param_2,uVar11,puVar13,param_4,param_5,5);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar14 = 5;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
    }
    else {
      if (4 < (uint)uVar14) {
        lVar8 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x867d0e0;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x867d104;
        (*pcVar16)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x50) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x867cfea;
      cVar2 = func_0x0867da90(param_2,uVar11,puVar13,param_4,param_5,uVar14 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x867d01b;
      cVar2 = func_0x0867dcc0(param_2,uVar11,puVar13,param_4,param_5,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x867d048;
      cVar2 = func_0x0867df00(param_2,uVar11,puVar13,param_4,param_5,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x867d075;
      cVar2 = func_0x0867e1d0(param_2,uVar11,puVar13,param_4,param_5,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x867d0a2;
    func_0x0867e470(param_2,uVar11,puVar13,param_4,param_5,uVar14);
    return;
  }
  if (bVar22 != 1) {
    uStack_1a8 = (undefined8 *)0x120000012f2525;
    uStack_1b0 = 0x8679794;
    func_0x0ed5ffe0(*param_5,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0x86797b7;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0x8679693;
  uStack_100 = param_4;
  func_0x0ed6d600(&lStack_68,*param_5);
  uStack_48 = param_3[5];
  pppppppuStack_e0 = (undefined8 *******)*param_5;
  ppppppuVar21 = (undefined8 ******)((long)unaff_R15 + 9);
  bVar28 = (*(byte *)(unaff_R15 + 1) & 1) == 0;
  ppppppuVar25 = (undefined8 ******)unaff_R15[3];
  if (bVar28) {
    ppppppuVar25 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(unaff_R15 + 1) >> 1);
  if (!bVar28) {
    uVar14 = unaff_R15[2];
  }
  plStack_f0 = param_2;
  plStack_e8 = param_5;
  puStack_70 = unaff_R15;
  if (ppppppuVar25 == (undefined8 ******)0x0) {
    puStack_158 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_158 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar25 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar14 + 9;
    puStack_f8 = (uint *)CONCAT71(puStack_f8._1_7_,lVar8 == 0);
    uStack_1b0 = 0x86797fb;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar7 == (ulong *)0x0 && (char)puStack_f8 == '\0') {
      uStack_1b0 = 0x867b214;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar7 = uVar14;
    uStack_1b0 = 0x867982a;
    func_0x0eee2f00(puVar7 + 1,ppppppuVar25,uVar14);
    *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
    puStack_158 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  plVar24 = plStack_f0;
  uStack_1b0 = 0x867986b;
  puVar5 = (uint *)func_0x0ed6d180(pppppppuStack_e0,&puStack_158,0);
  if (((ulong)puStack_158 & 0x80000000000000) != 0) {
    uStack_1b0 = 0x867989a;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_158 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar4 = puStack_70;
  puStack_158 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar25 = (undefined8 ******)puStack_70[3];
  if (bVar28) {
    ppppppuVar25 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar28) {
    uVar14 = puStack_70[2];
  }
  uStack_1b0 = 0x86798d0;
  cVar2 = (**(code **)(*plVar24 + 0xb8))(plVar24,ppppppuVar25,uVar14);
  if (cVar2 == '\0') {
    uStack_1b0 = 0x86799f6;
    puStack_f8 = puVar5;
    _auStack_148 = (*(code *)*puVar4)(uStack_48);
    uStack_1b0 = 0x8679a1c;
    func_0x0ed8bc80(&uStack_1a8,auStack_148,*(undefined1 *)((long)pppppppuStack_e0 + 0x2aa));
    uVar14 = (ulong)uStack_1a8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      uVar14 = uStack_1a0;
      pcVar16 = pcStack_198;
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (pcVar16 == (code *)0x0) {
      pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
    }
    else {
      lVar8 = uVar14 + 9;
      uStack_1b0 = 0x8679a6b;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
        uStack_1b0 = 0x867b226;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = uVar14;
      uStack_1b0 = 0x8679a9b;
      func_0x0eee2f00(puVar7 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      plVar24 = plStack_f0;
    }
    uStack_1b0 = 0x8679c39;
    func_0x0ed5ffe0(pppppppuStack_e0,8,&pppppppuStack_b8);
    puVar5 = puStack_f8;
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0x8679c70;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0x8679c94;
      thunk_FUN_0ee326a0(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0x86798ef;
    (**(code **)(*plVar24 + 0x80))(auStack_148,plVar24,0x40);
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
      pppppppuStack_b8 = (undefined8 *******)puVar4[3];
      uStack_b0 = puVar4[2];
      if ((*(byte *)(puVar4 + 1) & 1) == 0) {
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar21;
        uStack_b0 = (ulong)(*(byte *)(puVar4 + 1) >> 1);
      }
      uStack_1b0 = 0x8679b55;
      puStack_f8 = puVar5;
      FUN_0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_b8);
      plVar18 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar18 = plStack_140;
        pcVar16 = pcStack_138;
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)plVar18 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar18 + 9;
        uStack_1b0 = 0x8679ba5;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
          uStack_1b0 = 0x867b238;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = (ulong)plVar18;
        uStack_1b0 = 0x8679bd5;
        func_0x0eee2f00(puVar7 + 1,pcVar16,plVar18);
        *(undefined1 *)((long)puVar7 + (long)plVar18 + 8U) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        plVar24 = plStack_f0;
      }
      uStack_1b0 = 0x8679d0d;
      func_0x0ed5ffe0(pppppppuStack_e0,8,&pppppppuStack_b8);
      puVar5 = puStack_f8;
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0x8679d44;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1b0 = 0x8679d6a;
        thunk_FUN_0ee326a0(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
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
        uStack_1b0 = 0x867993b;
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
        pcStack_c8 = pcStack_198;
        uStack_d8 = uStack_1a8;
        uStack_d0 = uStack_1a0;
      }
      else {
        uStack_1b0 = 0x8679cc7;
        FUN_0412e5e0(&uStack_d8,pcStack_198,uStack_1a0);
      }
    }
    lVar8 = lStack_180;
    if (cStack_168 == '\x01') {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0x8679da4;
        thunk_FUN_0ee326a0(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_180 != 0) {
        while (lVar8 != lStack_178) {
          uStack_1b0 = 0x8679dcc;
          func_0x048b3e80(lStack_178 + -0x40);
          lStack_178 = lStack_178 + -0x40;
        }
        lStack_178 = lVar8;
        uStack_1b0 = 0x8679de8;
        thunk_FUN_0ee326a0(lStack_180,(long)puStack_170 - lStack_180);
      }
      pcVar17 = pcStack_198;
      pcVar16 = pcStack_190;
      if (pcStack_198 != (code *)0x0) {
        for (; pcVar17 != pcVar16; pcVar16 = pcVar16 + -0x50) {
          if ((pcVar16[-8] == (code)0x1) && (((byte)pcVar16[-0x30] & 1) != 0)) {
            uStack_1b0 = 0x8679e38;
            thunk_FUN_0ee326a0(*(undefined8 *)(pcVar16 + -0x20),
                               *(ulong *)(pcVar16 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_190 = pcVar17;
        uStack_1b0 = 0x8679e51;
        thunk_FUN_0ee326a0(pcStack_198,uStack_188 - (long)pcStack_198);
      }
    }
  }
  uStack_1b0 = 0x8679e68;
  (**(code **)(*plVar24 + 0xd0))(plVar24);
  lVar8 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar15 = puVar5[4];
LAB_08679eaf:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1b0 = 0x8679ed8;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_1a8,lVar1 + -0x18);
      uVar15 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar15 = puVar5[4], uVar23 == uVar15 - 1)) goto LAB_08679eaf;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0x8679f19;
    auStack_40 = (*(code *)*puStack_70)();
    uVar11 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      uVar14 = uStack_d0;
      pcVar16 = pcStack_c8;
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
      uStack_1b0 = 0x867a011;
      lVar8 = func_0x048aead0(uVar11);
    }
    uStack_1b0 = 0x867a023;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar11,lVar8,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1a8 = (undefined8 *)0x0;
      uStack_1a0 = 0;
      uStack_1b0 = 0x867a051;
      func_0x048b0d20(&uStack_1a8);
      puStack_58 = uStack_1a8;
      uStack_50 = uStack_1a0;
      if (uStack_1a8 == (undefined8 *)0x0) {
        lVar8 = *plStack_e8;
        uStack_1b0 = 0x867a936;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1b0 = 0x867a94a;
        uVar11 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar14 = uStack_d0;
          pcVar16 = pcStack_c8;
        }
        uStack_1b0 = 0x867a976;
        uVar11 = func_0x0412f8c0(uVar11,pcVar16,uVar14);
        uStack_1b0 = 0x867a98a;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar28 = (*pbVar12 & 1) != 0;
        pbVar27 = pbVar12 + 1;
        if (bVar28) {
          pbVar27 = *(byte **)(pbVar12 + 0x10);
        }
        uVar14 = (ulong)(*pbVar12 >> 1);
        if (bVar28) {
          uVar14 = *(ulong *)(pbVar12 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1b0 = 0x867a9bc;
        func_0x0ee387f0(auStack_148,pbVar27,uVar14,1);
        uStack_1b0 = 0x867a9ce;
        func_0x0ed5ffe0(lVar8,8,auStack_148);
        uStack_1b0 = 0x867a9d8;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0x867a9f4;
          thunk_FUN_0ee326a0(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_0867b17e;
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
    uStack_1b0 = 0x867a086;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0x867a0a1;
    func_0x05d9a920(&pppppppuStack_b8,&puStack_58,&uStack_1a8);
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x867a0b0;
      (*pcStack_190)(&uStack_1a8);
    }
    bVar28 = (*(byte *)(puStack_70 + 1) & 1) != 0;
    if (bVar28) {
      ppppppuVar21 = (undefined8 ******)puStack_70[3];
    }
    uVar14 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
    if (bVar28) {
      uVar14 = puStack_70[2];
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
    pppppppuStack_e0 = &pppppppuStack_b8;
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x4caa68da) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1b0 = 0x867a1ae;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      uStack_1b0 = 0x867a1d0;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xb3559726,puVar4);
    }
    plVar24 = (long *)param_3[5];
    if (DAT_0f5d9988 == '\0') {
      uStack_1b0 = 0x867b249;
      iVar3 = func_0x04108328(&DAT_0f5d9988);
      if (iVar3 != 0) {
        uStack_1b0 = 0x867b256;
        func_0x08674670();
        uStack_1b0 = 0x867b270;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d9908,0xf53dab8);
        uStack_1b0 = 0x867b27c;
        func_0x0410844d(&DAT_0f5d9988);
      }
    }
    plVar18 = (long *)(*plVar24 +
                      (ulong)((int)((ulong)(plVar24[1] - *plVar24) >> 3) - 1U &
                             *(uint *)(_DAT_0f5d9908 + 4)) * 8);
    do {
      lVar8 = *plVar18;
      if (lVar8 == -1) {
        plVar6 = (long *)plVar24[4];
        plVar18 = plVar6;
        goto LAB_0867a234;
      }
      plVar18 = (long *)(plVar24[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar24[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5d9908 + 4));
    plVar6 = (long *)plVar24[4];
LAB_0867a234:
    if (plVar18 == plVar6) {
      puVar26 = &DAT_0f5d9908;
    }
    else {
      puVar26 = (undefined *)plVar18[2];
    }
    uStack_1b0 = 0x867a255;
    auVar10 = (undefined1  [8])func_0x048b0c90(plVar24,puVar26,uVar23,1);
    plStack_150 = plVar24;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0x867a26c;
      func_0x048b0d20(auStack_148);
      auVar10 = auStack_148;
      plStack_150 = plStack_140;
    }
    lStack_118 = 0;
    puStack_110 = (undefined *)0x0;
    lStack_128 = 0;
    lStack_120 = 0;
    pcStack_138 = (code *)0x0;
    pcStack_130 = (code *)0x0;
    auStack_148 = (undefined1  [8])0x0;
    plStack_140 = (long *)0x0;
    uStack_1b0 = 0x867a2a7;
    puStack_158 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_148);
    uStack_1b0 = 0x867a2b9;
    func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
    if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
        bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        pppppppuVar20 = pppppppuStack_b8;
        if (cStack_94 == '\x02') {
          pppppppuVar20 = &pppppppuStack_b8;
        }
        uStack_1b0 = 0x867b01f;
        lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
        bVar28 = lVar8 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x867a2f7;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1b0 = 0x867a308;
      (*pcStack_130)(auStack_148);
    }
    plVar24 = plStack_f0;
    if (bVar28) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar13 + 0x1d) != 0xffffffff) {
        uStack_1b0 = 0x867a341;
        (**(code **)(&UNK_0f120888 + (ulong)*(uint *)(puVar13 + 0x1d) * 8))(auStack_148,puVar13);
      }
      puVar13[2] = 0;
      puVar13[3] = 0;
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[4] = 0;
      *(undefined4 *)(puVar13 + 4) = 0x3f800000;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      *(undefined4 *)(puVar13 + 0x1d) = 0;
      pcStack_198 = (code *)&UNK_08674910;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x383317aae);
      lStack_178 = 0;
      puStack_170 = &UNK_08674830;
      lStack_128 = plStack_e8[4];
      auStack_148 = (undefined1  [8])*plStack_e8;
      plStack_140 = (long *)plStack_e8[1];
      pcStack_138 = (code *)plStack_e8[2];
      pcStack_130 = (code *)plStack_e8[3];
      plVar18 = (long *)plStack_e8[2];
      lStack_180 = lVar8;
      if (plVar18 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
        uStack_1a8 = puVar13;
      }
      else {
        uStack_1b0 = 0x867a3f0;
        uStack_1a8 = puVar13;
        pcStack_138 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,0);
      }
      puStack_158 = &UNK_0f1253b0;
      uStack_1b0 = 0x867a8fc;
      func_0x0ed75bc0(&puStack_158,plVar24,&uStack_1a8,uStack_100,auStack_148);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x867a90f;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar24 = (long *)param_3[5];
      if (DAT_0f5d9a40 == '\0') {
        uStack_1b0 = 0x867b28d;
        iVar3 = func_0x04108328(&DAT_0f5d9a40);
        if (iVar3 != 0) {
          uStack_1b0 = 0x867b29a;
          func_0x08675bc0();
          uStack_1b0 = 0x867b2b4;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d99c0,0xf53dab8);
          uStack_1b0 = 0x867b2c0;
          func_0x0410844d(&DAT_0f5d9a40);
        }
      }
      plVar18 = (long *)(*plVar24 +
                        (ulong)((int)((ulong)(plVar24[1] - *plVar24) >> 3) - 1U &
                               *(uint *)(_DAT_0f5d99c0 + 4)) * 8);
      do {
        lVar8 = *plVar18;
        if (lVar8 == -1) {
          plVar6 = (long *)plVar24[4];
          plVar18 = plVar6;
          goto LAB_0867a464;
        }
        plVar18 = (long *)(plVar24[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar24[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5d99c0 + 4));
      plVar6 = (long *)plVar24[4];
LAB_0867a464:
      if (plVar18 == plVar6) {
        puVar26 = &DAT_0f5d99c0;
      }
      else {
        puVar26 = (undefined *)plVar18[2];
      }
      uStack_1b0 = 0x867a4c1;
      auVar10 = (undefined1  [8])func_0x048b0c90(plVar24,puVar26,uVar23,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0x867a4d8;
        func_0x048b0d20(auStack_148);
        auVar10 = auStack_148;
        plVar24 = plStack_140;
      }
      lStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0x867a513;
      puStack_158 = (undefined *)auVar10;
      plStack_150 = plVar24;
      func_0x05d84ba0(auStack_148);
      uStack_1b0 = 0x867a525;
      func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
      if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
          bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          pppppppuVar20 = pppppppuStack_b8;
          if (cStack_94 == '\x02') {
            pppppppuVar20 = &pppppppuStack_b8;
          }
          uStack_1b0 = 0x867b0c5;
          lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
          bVar28 = lVar8 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x867a562;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1b0 = 0x867a573;
        (*pcStack_130)(auStack_148);
      }
      plVar24 = plStack_f0;
      if (bVar28) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar13 + 0x1d) != 0xffffffff) {
          uStack_1b0 = 0x867a5ab;
          (**(code **)(&UNK_0f120888 + (ulong)*(uint *)(puVar13 + 0x1d) * 8))(auStack_148,puVar13);
        }
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[4] = 0;
        *(undefined4 *)(puVar13 + 4) = 0x3f800000;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        *(undefined4 *)(puVar13 + 0x1d) = 1;
        pcStack_198 = (code *)&UNK_08675e60;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x3b5635e13);
        lStack_178 = 0;
        puStack_170 = &UNK_08675d80;
        lStack_128 = plStack_e8[4];
        auStack_148 = (undefined1  [8])*plStack_e8;
        plStack_140 = (long *)plStack_e8[1];
        pcStack_138 = (code *)plStack_e8[2];
        pcStack_130 = (code *)plStack_e8[3];
        plVar18 = (long *)plStack_e8[2];
        lStack_180 = lVar8;
        if (plVar18 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
          uStack_1a8 = puVar13;
        }
        else {
          uStack_1b0 = 0x867a65d;
          uStack_1a8 = puVar13;
          pcStack_138 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,1);
        }
        puStack_158 = &UNK_0f125430;
        uStack_1b0 = 0x867ac9d;
        func_0x0ed75bc0(&puStack_158,plVar24,&uStack_1a8,uStack_100,auStack_148);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x867acb0;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else {
        plVar24 = (long *)param_3[5];
        uStack_1b0 = 0x867a677;
        uVar11 = func_0x07e672d0(plVar24);
        uStack_1b0 = 0x867a689;
        auVar10 = (undefined1  [8])func_0x048b0c90(plVar24,uVar11,uVar23,1);
        if (auVar10 == (undefined1  [8])0x0) {
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1b0 = 0x867a6a0;
          func_0x048b0d20(auStack_148);
          auVar10 = auStack_148;
          plVar24 = plStack_140;
        }
        lStack_118 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_128 = 0;
        lStack_120 = 0;
        pcStack_138 = (code *)0x0;
        pcStack_130 = (code *)0x0;
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0x867a6db;
        puStack_158 = (undefined *)auVar10;
        plStack_150 = plVar24;
        func_0x05d84ba0(auStack_148);
        uStack_1b0 = 0x867a6ed;
        func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
        if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
          if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
            bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
          }
          else {
            pppppppuVar20 = pppppppuStack_b8;
            if (cStack_94 == '\x02') {
              pppppppuVar20 = &pppppppuStack_b8;
            }
            uStack_1b0 = 0x867b1c8;
            lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
            bVar28 = lVar8 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x867a72a;
          (*pcStack_190)(&uStack_1a8);
        }
        if (pcStack_130 != (code *)0x0) {
          uStack_1b0 = 0x867a73b;
          (*pcStack_130)(auStack_148);
        }
        plVar24 = plStack_f0;
        if (bVar28) {
          lVar8 = param_3[5];
          if ((ulong)*(uint *)(puVar13 + 0x1d) != 0xffffffff) {
            uStack_1b0 = 0x867a773;
            (**(code **)(&UNK_0f120888 + (ulong)*(uint *)(puVar13 + 0x1d) * 8))(auStack_148,puVar13)
            ;
          }
          *(undefined4 *)(puVar13 + 1) = 2;
          puVar13[2] = 0;
          puVar13[3] = 0;
          puVar13[4] = 0;
          puVar13[5] = 0;
          *(undefined4 *)(puVar13 + 6) = 0x3f800000;
          puVar13[7] = 0;
          puVar13[8] = 0;
          puVar13[9] = 0;
          *puVar13 = &UNK_0f386cf8;
          *(undefined4 *)(puVar13 + 10) = 0;
          *(undefined1 *)((long)puVar13 + 0x54) = 0;
          *(undefined4 *)((long)puVar13 + 0x6c) = 0;
          *(undefined1 *)(puVar13 + 0xe) = 0;
          puVar13[0xb] = 0;
          puVar13[0xc] = 0;
          *(undefined1 *)(puVar13 + 0xd) = 0;
          puVar13[0x10] = 0;
          *(undefined2 *)(puVar13 + 0x11) = 0;
          puVar13[0xf] = &UNK_0ef51ad8;
          *(undefined1 *)((long)puVar13 + 0x8a) = 0;
          *(undefined4 *)(puVar13 + 0x12) = 0;
          *(undefined4 *)(puVar13 + 0x14) = 0;
          *(undefined4 *)(puVar13 + 0x15) = 0;
          puVar13[0x1a] = 0;
          puVar13[0x1b] = 0;
          puVar13[0x18] = 0;
          puVar13[0x19] = 0;
          puVar13[0x16] = 0;
          puVar13[0x17] = 0;
          *(undefined2 *)(puVar13 + 0x1c) = 0;
          *(undefined4 *)(puVar13 + 0x1d) = 2;
          pcStack_198 = (code *)&UNK_07e67740;
          pcStack_190 = (code *)0x0;
          uStack_188 = CONCAT35(uStack_188._5_3_,0x35167ce45);
          lStack_178 = 0;
          puStack_170 = &UNK_07e67600;
          lStack_128 = plStack_e8[4];
          auStack_148 = (undefined1  [8])*plStack_e8;
          plStack_140 = (long *)plStack_e8[1];
          pcStack_138 = (code *)plStack_e8[2];
          pcStack_130 = (code *)plStack_e8[3];
          plVar18 = (long *)plStack_e8[2];
          lStack_180 = lVar8;
          if (plVar18 == (long *)0x0) {
            pcStack_138 = (code *)0x0;
            uStack_1a8 = puVar13;
          }
          else {
            uStack_1b0 = 0x867a8bf;
            uStack_1a8 = puVar13;
            pcStack_138 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,2);
          }
          puStack_158 = &UNK_0f115c38;
          uStack_1b0 = 0x867af5e;
          func_0x0ed75bc0(&puStack_158,plVar24,&uStack_1a8,uStack_100,auStack_148);
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x867af71;
            (*pcStack_190)(&uStack_1a8);
          }
        }
        else {
          plVar24 = (long *)param_3[5];
          uStack_1b0 = 0x867aa13;
          uVar11 = func_0x07e707a0(plVar24);
          uStack_1b0 = 0x867aa25;
          auVar10 = (undefined1  [8])func_0x048b0c90(plVar24,uVar11,uVar23,1);
          if (auVar10 == (undefined1  [8])0x0) {
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1b0 = 0x867aa3c;
            func_0x048b0d20(auStack_148);
            auVar10 = auStack_148;
            plVar24 = plStack_140;
          }
          lStack_118 = 0;
          puStack_110 = (undefined *)0x0;
          lStack_128 = 0;
          lStack_120 = 0;
          pcStack_138 = (code *)0x0;
          pcStack_130 = (code *)0x0;
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1b0 = 0x867aa77;
          puStack_158 = (undefined *)auVar10;
          plStack_150 = plVar24;
          func_0x05d84ba0(auStack_148);
          uStack_1b0 = 0x867aa89;
          func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
          if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0)))
          {
            if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
              bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
            }
            else {
              pppppppuVar20 = pppppppuStack_b8;
              if (cStack_94 == '\x02') {
                pppppppuVar20 = &pppppppuStack_b8;
              }
              uStack_1b0 = 0x867b1e5;
              lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
              bVar28 = lVar8 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x867aac6;
            (*pcStack_190)(&uStack_1a8);
          }
          if (pcStack_130 != (code *)0x0) {
            uStack_1b0 = 0x867aad7;
            (*pcStack_130)(auStack_148);
          }
          plVar24 = plStack_f0;
          if (bVar28) {
            lVar8 = param_3[5];
            if ((ulong)*(uint *)(puVar13 + 0x1d) != 0xffffffff) {
              uStack_1b0 = 0x867ab0f;
              (**(code **)(&UNK_0f120888 + (ulong)*(uint *)(puVar13 + 0x1d) * 8))
                        (auStack_148,puVar13);
            }
            *(undefined4 *)(puVar13 + 1) = 3;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            *(undefined4 *)(puVar13 + 6) = 0x3f800000;
            puVar13[7] = 0;
            puVar13[8] = 0;
            puVar13[9] = 0;
            puVar13[10] = 0;
            *puVar13 = &UNK_0f386c68;
            puVar13[0xb] = 0xffffffff00000000;
            puVar13[0xd] = 0;
            *(undefined2 *)(puVar13 + 0xe) = 0;
            puVar13[0xc] = &UNK_0ef51ad8;
            *(undefined1 *)((long)puVar13 + 0x72) = 0;
            *(undefined4 *)(puVar13 + 0xf) = 0;
            *(undefined4 *)(puVar13 + 0x11) = 0;
            *(undefined4 *)(puVar13 + 0x12) = 0;
            puVar13[0x17] = 0;
            puVar13[0x18] = 0;
            puVar13[0x15] = 0;
            puVar13[0x16] = 0;
            puVar13[0x13] = 0;
            puVar13[0x14] = 0;
            *(undefined4 *)(puVar13 + 0x1d) = 3;
            pcStack_198 = (code *)&UNK_07e70bb0;
            pcStack_190 = (code *)0x0;
            uStack_188 = CONCAT35(uStack_188._5_3_,0x361166c11);
            lStack_178 = 0;
            puStack_170 = &UNK_07e70aa0;
            lStack_128 = plStack_e8[4];
            auStack_148 = (undefined1  [8])*plStack_e8;
            plStack_140 = (long *)plStack_e8[1];
            pcStack_138 = (code *)plStack_e8[2];
            pcStack_130 = (code *)plStack_e8[3];
            plVar18 = (long *)plStack_e8[2];
            lStack_180 = lVar8;
            if (plVar18 == (long *)0x0) {
              pcStack_138 = (code *)0x0;
              uStack_1a8 = puVar13;
            }
            else {
              uStack_1b0 = 0x867ac2c;
              uStack_1a8 = puVar13;
              pcStack_138 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,3);
            }
            puStack_158 = &UNK_0f1254b8;
            uStack_1b0 = 0x867b08f;
            func_0x0ed75bc0(&puStack_158,plVar24,&uStack_1a8,uStack_100,auStack_148);
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0x867b0a2;
              (*pcStack_190)(&uStack_1a8);
            }
          }
          else {
            plVar24 = (long *)param_3[5];
            uStack_1b0 = 0x867acce;
            uVar11 = func_0x07e05110(plVar24);
            uStack_1b0 = 0x867ace0;
            auVar10 = (undefined1  [8])func_0x048b0c90(plVar24,uVar11,uVar23,1);
            if (auVar10 == (undefined1  [8])0x0) {
              auStack_148 = (undefined1  [8])0x0;
              plStack_140 = (long *)0x0;
              uStack_1b0 = 0x867acf7;
              func_0x048b0d20(auStack_148);
              auVar10 = auStack_148;
              plVar24 = plStack_140;
            }
            lStack_118 = 0;
            puStack_110 = (undefined *)0x0;
            lStack_128 = 0;
            lStack_120 = 0;
            pcStack_138 = (code *)0x0;
            pcStack_130 = (code *)0x0;
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1b0 = 0x867ad32;
            puStack_158 = (undefined *)auVar10;
            plStack_150 = plVar24;
            func_0x05d84ba0(auStack_148);
            uStack_1b0 = 0x867ad44;
            func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
            plVar24 = plStack_f0;
            if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))
               ) {
              if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
                bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
              }
              else {
                if (cStack_94 != '\x02') {
                  pppppppuStack_e0 = pppppppuStack_b8;
                }
                uStack_1b0 = 0x867b11d;
                lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuStack_e0);
                bVar28 = lVar8 != 0;
              }
            }
            else {
              bVar28 = false;
            }
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0x867ad89;
              (*pcStack_190)(&uStack_1a8);
            }
            if (pcStack_130 != (code *)0x0) {
              uStack_1b0 = 0x867ad9a;
              (*pcStack_130)(auStack_148);
            }
            if (bVar28) {
              lVar8 = param_3[5];
              if ((ulong)*(uint *)(puVar13 + 0x1d) != 0xffffffff) {
                uStack_1b0 = 0x867adca;
                (**(code **)(&UNK_0f120888 + (ulong)*(uint *)(puVar13 + 0x1d) * 8))
                          (auStack_148,puVar13);
              }
              *(undefined4 *)(puVar13 + 1) = 4;
              puVar13[2] = 0;
              puVar13[3] = 0;
              puVar13[4] = 0;
              puVar13[5] = 0;
              *(undefined4 *)(puVar13 + 6) = 0x3f800000;
              puVar13[7] = 0;
              puVar13[8] = 0;
              puVar13[9] = 0;
              *puVar13 = &UNK_0f386d40;
              puVar13[10] = 0xffffffff00000000;
              puVar13[0xc] = 0;
              *(undefined2 *)(puVar13 + 0xd) = 0;
              puVar13[0xb] = &UNK_0ef51ad8;
              *(undefined1 *)((long)puVar13 + 0x6a) = 0;
              *(undefined4 *)(puVar13 + 0xe) = 0;
              *(undefined4 *)(puVar13 + 0x10) = 0;
              *(undefined4 *)(puVar13 + 0x11) = 0;
              puVar13[0x12] = 0;
              puVar13[0x13] = 0;
              puVar13[0x14] = 0;
              puVar13[0x15] = 0;
              *(undefined4 *)(puVar13 + 0x16) = 0;
              *(undefined4 *)(puVar13 + 0x1d) = 4;
              pcStack_198 = (code *)&UNK_07e05540;
              pcStack_190 = (code *)0x0;
              uStack_188 = CONCAT35(uStack_188._5_3_,0x3743a5dcf);
              lStack_178 = 0;
              puStack_170 = &UNK_07e05420;
              lStack_128 = plStack_e8[4];
              auStack_148 = (undefined1  [8])*plStack_e8;
              plStack_140 = (long *)plStack_e8[1];
              pcStack_138 = (code *)plStack_e8[2];
              pcStack_130 = (code *)plStack_e8[3];
              plVar18 = (long *)plStack_e8[2];
              lStack_180 = lVar8;
              if (plVar18 == (long *)0x0) {
                pcStack_138 = (code *)0x0;
                uStack_1a8 = puVar13;
              }
              else {
                uStack_1b0 = 0x867aeed;
                uStack_1a8 = puVar13;
                pcStack_138 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,4);
              }
              puStack_158 = &UNK_0f125538;
              uStack_1b0 = 0x867b158;
              func_0x0ed75bc0(&puStack_158,plVar24,&uStack_1a8,uStack_100,auStack_148);
              if (pcStack_190 != (code *)0x0) {
                uStack_1b0 = 0x867b167;
                (*pcStack_190)(&uStack_1a8);
              }
            }
            else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                    (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
              uStack_1a8 = (undefined8 *)0x2300000149614c;
              uStack_1b0 = 0x867afd5;
              func_0x0ed5ffe0(*plStack_e8,8,&uStack_1a8);
              if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
                uStack_1b0 = 0x867b000;
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
              }
              uStack_1a8 = (undefined8 *)0x0;
            }
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1b0 = 0x867b17e;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_0867b17e:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1b0 = 0x867b1a5;
    thunk_FUN_0ee326a0(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


