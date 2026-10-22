/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x688bc20 (ELF vaddr 0x678bc20)
 * Label: caller-of-callee
 * Body:  [[0688bc20, 0688c560] [0688c570, 0688dc2f] [06891d60, 06892121]]
 * Ghidra: FUN_0688bc20
 */


/* WARNING: Possible PIC construction at 0x0688be8d: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0688bc20(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *******pppppppuVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [8];
  byte *pbVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  code *pcVar17;
  ulong uVar18;
  ulong unaff_RBX;
  byte bVar19;
  uint uVar20;
  undefined8 unaff_RBP;
  long lVar21;
  uint ******ppppppuVar22;
  byte *pbVar23;
  undefined *puVar24;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
  long *plVar25;
  long *plVar26;
  long *unaff_R15;
  bool bVar27;
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
  uint *******pppppppuStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  uint *******pppppppuStack_d8;
  ulong uStack_d0;
  code *pcStack_c0;
  int iStack_b8;
  char cStack_b4;
  long lStack_b0;
  long lStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  code *pcStack_78;
  uint ******ppppppuStack_70;
  long lStack_68;
  uint uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  pcVar16 = (code *)param_3[7];
  uVar14 = unaff_RBX;
  plStack_e0 = param_5;
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] != (code *)0x0) {
      uStack_1a0 = 0x688bc72;
      (*(code *)param_3[3])(param_3);
    }
    param_3[2] = &UNK_06892230;
    *(undefined4 *)(param_3 + 4) = 0x49801a7d;
    param_3[3] = &UNK_06892440;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0x688bcaf;
    puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
    if (puVar3 == (undefined8 *)0x0) {
      uStack_1a0 = 0x688db89;
      func_0x0eec74c0(0x78,0);
      uVar14 = 0;
    }
    *puVar3 = &UNK_0f011d00;
    uVar9 = _UNK_014e0ea8;
    puVar3[1] = _DAT_014e0ea0;
    puVar3[2] = uVar9;
    puVar3[3] = 0x8000000080000000;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined8 *)((long)puVar3 + 0x3d) = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(undefined1 *)(puVar3 + 0xd) = 0;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    *param_3 = puVar3;
    puVar24 = (undefined *)param_3[7];
    pcVar16 = (code *)&UNK_06892150;
    param_3[7] = &UNK_06892150;
    if (puVar24 == &UNK_06892150) {
      lVar7 = param_3[6];
      param_3[6] = lVar7;
      if (lVar7 != 0) goto LAB_0688bd58;
    }
    else {
      param_3[6] = 0;
    }
LAB_0688bd42:
    uVar14 = param_3[5];
    uStack_1a0 = 0x688bd50;
    (*pcVar16)(0,param_3,0);
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_0688bd58;
    uStack_1a0 = 0x688bd8d;
    lVar7 = func_0x048aead0(uVar14);
    bVar19 = *(byte *)(lVar7 + 0x1a);
  }
  else {
    lVar7 = param_3[6];
    if (lVar7 == 0) goto LAB_0688bd42;
LAB_0688bd58:
    bVar19 = *(byte *)(lVar7 + 0x1a);
  }
  if ((bVar19 & 1) == 0) goto SUB_06891d60;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1a0 = 0x688beb6;
    func_0x048b1dc0(&uStack_198);
    puVar3 = uStack_198;
    uVar14 = uStack_190;
    unaff_R14 = &uStack_198;
joined_r0x0688bec1:
    if (puVar3 == (undefined8 *)0x0) {
      uStack_1a0 = 0x688becf;
      puVar3 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar3 = (undefined8 *)*unaff_R14;
    if (puVar3 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1a0 = 0x688bdb7;
      (*(code *)param_3[7])(0,param_3,0);
      puVar3 = (undefined8 *)*unaff_R14;
      goto joined_r0x0688bec1;
    }
  }
  puStack_90 = (undefined8 *)puVar3[0xd];
  uStack_1a0 = 0x688bdd8;
  bVar19 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar25 = plStack_e0;
  if ((bVar19 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0x688be92;
    unaff_RBX = uVar14;
    unaff_R12 = param_3;
    unaff_R13 = param_4;
    unaff_R15 = param_2;
SUB_06891d60:
    plVar25 = plStack_e0;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar1 = *(char *)((long)param_3 + 0x24);
    puVar3 = (undefined8 *)*param_3;
    puVar13 = puVar3;
    if (cVar1 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x49801a7d) {
      uVar9 = param_3[5];
      lVar7 = param_3[6];
      if (lVar7 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x6891dbf;
        (*pcVar16)(0,param_3,0);
        lVar7 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        puVar3 = (undefined8 *)*param_3;
      }
      if (cVar1 == '\x02') {
        puVar3 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x6891de1;
      puVar13 = (undefined8 *)func_0x0488e200(uVar9,lVar7,0x49801a7d,puVar3);
    }
    lVar7 = *plVar25;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x6891df1;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar7);
    bVar19 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar19 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x6891e0e;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar19;
    if ((uVar14 >> 0x20 & 1) == 0) {
      uVar9 = param_3[5];
      uVar8 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6891e4e;
      cVar1 = func_0x06892af0(param_2,uVar9,puVar13,param_4,plVar25,7);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6891e7c;
      cVar1 = func_0x06892d40(param_2,uVar9,puVar13,param_4,plVar25,7);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6891eaa;
      cVar1 = func_0x06892f60(param_2,uVar9,puVar13,param_4,plVar25,7);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6891ed8;
      cVar1 = func_0x06893180(param_2,uVar9,puVar13,param_4,plVar25,7);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6891f06;
      cVar1 = func_0x068933a0(param_2,uVar9,puVar13,param_4,plVar25,7);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6891f34;
      cVar1 = func_0x068935c0(param_2,uVar9,puVar13,param_4,plVar25,7);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      uVar14 = 7;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
    }
    else {
      if (6 < (uint)uVar14) {
        lVar7 = *plVar25;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x68920ef;
        func_0x0ed5ffe0(lVar7,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x6892113;
        (*pcVar16)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar9 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x50) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6891f9f;
      cVar1 = func_0x06892af0(param_2,uVar9,puVar13,param_4,plVar25,uVar14 & 0xff);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6891fd0;
      cVar1 = func_0x06892d40(param_2,uVar9,puVar13,param_4,plVar25,uVar14);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6891ffd;
      cVar1 = func_0x06892f60(param_2,uVar9,puVar13,param_4,plVar25,uVar14);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x689202a;
      cVar1 = func_0x06893180(param_2,uVar9,puVar13,param_4,plVar25,uVar14);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6892057;
      cVar1 = func_0x068933a0(param_2,uVar9,puVar13,param_4,plVar25,uVar14);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x6892084;
      cVar1 = func_0x068935c0(param_2,uVar9,puVar13,param_4,plVar25,uVar14);
      if (cVar1 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x68920b1;
    func_0x068937e0(param_2,uVar9,puVar13,param_4,plVar25,uVar14);
    return;
  }
  if (bVar19 != 1) {
    uStack_198 = (undefined8 *)0x120000012f2525;
    uStack_1a0 = 0x688bf07;
    func_0x0ed5ffe0(*plStack_e0,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0x688bf2a;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0x688be1a;
  uStack_e8 = param_4;
  plStack_98 = param_2;
  func_0x0ed6d600(&lStack_68,*plStack_e0);
  pppppppuStack_f0 = (uint *******)param_3[5];
  lVar7 = *plVar25;
  ppppppuStack_70 = (uint ******)((long)puStack_90 + 9);
  bVar27 = (*(byte *)(puStack_90 + 1) & 1) == 0;
  ppppppuVar22 = (uint ******)puStack_90[3];
  if (bVar27) {
    ppppppuVar22 = ppppppuStack_70;
  }
  uVar14 = (ulong)(*(byte *)(puStack_90 + 1) >> 1);
  if (!bVar27) {
    uVar14 = puStack_90[2];
  }
  if (ppppppuVar22 == (uint ******)0x0) {
    puStack_148 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_148 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar22 & 0xff00ffffffffffff);
  }
  else {
    lVar21 = uVar14 + 9;
    uStack_1a0 = 0x688bf68;
    lStack_48 = lVar7;
    puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (puVar6 == (ulong *)0x0 && lVar21 != 0) {
      uStack_1a0 = 0x688dbc3;
      func_0x0eec74c0(lVar21,8);
    }
    *puVar6 = uVar14;
    uStack_1a0 = 0x688bf92;
    func_0x0eee2f00(puVar6 + 1,ppppppuVar22,uVar14);
    *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
    puStack_148 = (undefined *)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    lVar7 = lStack_48;
  }
  uStack_1a0 = 0x688bfce;
  pppppppuVar4 = (uint *******)func_0x0ed6d180(lVar7,&puStack_148,0);
  plVar25 = plStack_98;
  if (((ulong)puStack_148 & 0x80000000000000) != 0) {
    uStack_1a0 = 0x688c005;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_148 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_148 = (undefined *)0x0;
  bVar27 = (*(byte *)(puStack_90 + 1) & 1) == 0;
  ppppppuVar22 = (uint ******)puStack_90[3];
  if (bVar27) {
    ppppppuVar22 = ppppppuStack_70;
  }
  uVar14 = (ulong)(*(byte *)(puStack_90 + 1) >> 1);
  if (!bVar27) {
    uVar14 = puStack_90[2];
  }
  uStack_1a0 = 0x688c03e;
  cVar1 = (**(code **)(*plVar25 + 0xb8))(plVar25,ppppppuVar22,uVar14);
  if (cVar1 == '\0') {
    uStack_1a0 = 0x688c15b;
    _auStack_138 = (*(code *)*puStack_90)(pppppppuStack_f0);
    uStack_1a0 = 0x688c179;
    func_0x0ed8bc80(&uStack_198,auStack_138,*(undefined1 *)(lVar7 + 0x2aa));
    uVar14 = (ulong)uStack_198 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_198 + 1);
    if (((ulong)uStack_198 & 1) != 0) {
      uVar14 = uStack_190;
      pcVar16 = pcStack_188;
    }
    pppppppuStack_d8 = (uint *******)0x0;
    if (pcVar16 == (code *)0x0) {
      pppppppuStack_d8 = (uint *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
    }
    else {
      lVar21 = uVar14 + 9;
      uStack_1a0 = 0x688c1d3;
      pppppppuStack_f0 = pppppppuVar4;
      puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && puVar6 == (ulong *)0x0) {
        uStack_1a0 = 0x688dbd5;
        func_0x0eec74c0(lVar21,8);
      }
      *puVar6 = uVar14;
      uStack_1a0 = 0x688c203;
      func_0x0eee2f00(puVar6 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
      pppppppuStack_d8 = (uint *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000)
      ;
      pppppppuVar4 = pppppppuStack_f0;
    }
    plVar25 = plStack_98;
    uStack_1a0 = 0x688c3b3;
    func_0x0ed5ffe0(lVar7,8,&pppppppuStack_d8);
    if (((ulong)pppppppuStack_d8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0x688c3e2;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_d8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_d8 = (uint *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0x688c406;
      thunk_FUN_0ee326a0(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    pcStack_78 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0x688c05c;
    (**(code **)(*plVar25 + 0x80))(auStack_138,plVar25,0x40);
    cStack_158 = cStack_f8;
    if (cStack_f8 == '\0') {
      uStack_198 = (undefined8 *)auStack_138;
      uStack_190 = (ulong)plStack_130;
      pcStack_188 = pcStack_128;
      pcStack_180 = pcStack_120;
      uStack_178 = lStack_118;
      lStack_170 = lStack_110;
      lStack_168 = lStack_108;
      puStack_160 = puStack_100;
      pppppppuStack_d8 = (uint *******)puStack_90[3];
      uStack_d0 = puStack_90[2];
      if ((*(byte *)(puStack_90 + 1) & 1) == 0) {
        pppppppuStack_d8 = (uint *******)ppppppuStack_70;
        uStack_d0 = (ulong)(*(byte *)(puStack_90 + 1) >> 1);
      }
      uStack_1a0 = 0x688c2c1;
      FUN_0470d9a0(auStack_138,&UNK_01377405,0x15,0xd,&pppppppuStack_d8);
      plVar25 = (long *)((ulong)auStack_138 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_138 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar25 = plStack_130;
        pcVar16 = pcStack_128;
      }
      pppppppuStack_d8 = (uint *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_d8 = (uint *******)((ulong)((uint)plVar25 & 0x7f) << 0x30);
      }
      else {
        lVar21 = (long)plVar25 + 9;
        uStack_1a0 = 0x688c31c;
        pppppppuStack_f0 = pppppppuVar4;
        puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
        if (lVar21 != 0 && puVar6 == (ulong *)0x0) {
          uStack_1a0 = 0x688dbe7;
          func_0x0eec74c0(lVar21,8);
        }
        *puVar6 = (ulong)plVar25;
        uStack_1a0 = 0x688c34c;
        func_0x0eee2f00(puVar6 + 1,pcVar16,plVar25);
        *(undefined1 *)((long)puVar6 + (long)plVar25 + 8U) = 0;
        pppppppuStack_d8 =
             (uint *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        pppppppuVar4 = pppppppuStack_f0;
      }
      plVar25 = plStack_98;
      uStack_1a0 = 0x688c478;
      func_0x0ed5ffe0(lVar7,8,&pppppppuStack_d8);
      if (((ulong)pppppppuStack_d8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0x688c4a7;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_d8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_d8 = (uint *******)0x0;
      if (((ulong)auStack_138 & 1) != 0) {
        uStack_1a0 = 0x688c4cd;
        thunk_FUN_0ee326a0(pcStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
      }
      uStack_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      pcStack_78 = (code *)0x0;
    }
    else {
      pcStack_188 = pcStack_128;
      uStack_198 = (undefined8 *)auStack_138;
      uStack_190 = (ulong)plStack_130;
      plVar26 = (long *)(ulong)(byte)(auStack_138[0] >> 1);
      pcVar16 = (code *)((long)&uStack_198 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar26 = plStack_130;
        pcVar16 = pcStack_128;
      }
      bVar19 = auStack_138[0];
      if (plVar26 != (long *)0x0) {
        uStack_1a0 = 0x688c0ac;
        plVar5 = (long *)func_0x0eee3290();
        pcVar17 = pcVar16;
        for (uVar14 = (ulong)plVar26 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *(code *)(*plVar5 + (ulong)(byte)*pcVar17 * 4);
          pcVar17 = pcVar17 + 1;
        }
        if (3 < plVar26) {
          do {
            *pcVar17 = *(code *)(*plVar5 + (ulong)(byte)*pcVar17 * 4);
            pcVar17[1] = *(code *)(*plVar5 + (ulong)(byte)pcVar17[1] * 4);
            pcVar17[2] = *(code *)(*plVar5 + (ulong)(byte)pcVar17[2] * 4);
            pcVar17[3] = *(code *)(*plVar5 + (ulong)(byte)pcVar17[3] * 4);
            pcVar17 = pcVar17 + 4;
          } while (pcVar17 != pcVar16 + (long)plVar26);
        }
        bVar19 = (byte)uStack_198;
      }
      if ((bVar19 & 1) == 0) {
        pcStack_78 = pcStack_188;
        uStack_88 = uStack_198;
        uStack_80 = uStack_190;
      }
      else {
        uStack_1a0 = 0x688c439;
        FUN_0412e5e0(&uStack_88,pcStack_188,uStack_190);
      }
    }
    lVar7 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uVar14 = (ulong)uStack_198 & 0xfffffffffffffffe;
LAB_0688c5ac:
        uStack_1a0 = 0x688c5b1;
        thunk_FUN_0ee326a0(pcStack_188,uVar14);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar7 != lStack_168) {
          uStack_1a0 = 0x688c52c;
          func_0x048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar7;
        uStack_1a0 = 0x688c548;
        thunk_FUN_0ee326a0(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar17 = pcStack_188;
      pcVar16 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar17 != pcVar16; pcVar16 = pcVar16 + -0x50) {
          if ((pcVar16[-8] == (code)0x1) && (((byte)pcVar16[-0x30] & 1) != 0)) {
            uStack_1a0 = 0x688c598;
            thunk_FUN_0ee326a0(*(undefined8 *)(pcVar16 + -0x20),
                               *(ulong *)(pcVar16 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar17;
        uVar14 = uStack_178 - (long)pcStack_188;
        goto LAB_0688c5ac;
      }
    }
  }
  uStack_1a0 = 0x688c5bd;
  (**(code **)(*plVar25 + 0xd0))(plVar25);
  ppppppuVar22 = pppppppuVar4[1];
  uVar20 = *(uint *)((long)ppppppuVar22 + ((ulong)*(uint *)pppppppuVar4 * 8 + 7) * 4);
  *(uint *)pppppppuVar4 = uVar20;
  if (*(uint *)(pppppppuVar4 + 0x24) == 0) {
    uVar15 = *(uint *)(pppppppuVar4 + 2);
LAB_0688c5ff:
    uVar14 = (ulong)uVar15;
    if ((ulong)*(uint *)(ppppppuVar22 + uVar14 * 4 + -2) != 0xffffffff) {
      uStack_1a0 = 0x688c628;
      (**(code **)(&UNK_0f4e40d0 + (ulong)*(uint *)(ppppppuVar22 + uVar14 * 4 + -2) * 8))
                (&uStack_198,ppppppuVar22 + uVar14 * 4 + -3);
      uVar15 = *(uint *)(pppppppuVar4 + 2);
    }
    *(undefined4 *)(ppppppuVar22 + uVar14 * 4 + -2) = 0xffffffff;
    *(uint *)(pppppppuVar4 + 2) = uVar15 - 1;
  }
  else if ((*(uint *)(pppppppuVar4[0x23] + (ulong)(*(uint *)(pppppppuVar4 + 0x24) - 1) * 6 + 3) !=
            uVar20) && (uVar15 = *(uint *)(pppppppuVar4 + 2), uVar20 == uVar15 - 1))
  goto LAB_0688c5ff;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0x688c666;
    auStack_40 = (*(code *)*puStack_90)();
    uVar9 = auStack_40._8_8_;
    lVar7 = auStack_40._0_8_;
    uVar14 = (ulong)uStack_88 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_88 + 1);
    if (((ulong)uStack_88 & 1) != 0) {
      uVar14 = uStack_80;
      pcVar16 = pcStack_78;
    }
    if (uVar14 == 0) {
      uVar20 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar20 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar20 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar20 = ((int)(char)pcVar16[uVar18 + 3] ^
                   ((int)(char)pcVar16[uVar18 + 2] ^
                   ((int)(char)pcVar16[uVar18 + 1] ^
                   ((int)(char)pcVar16[uVar18] ^ uVar20) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar14 = 0;
        do {
          uVar20 = ((int)(char)pcVar16[uVar14 + uVar18] ^ uVar20) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar8 != uVar14);
      }
    }
    if (lVar7 == 0) {
      uStack_1a0 = 0x688c761;
      lVar7 = func_0x048aead0(uVar9);
    }
    uStack_1a0 = 0x688c773;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar9,lVar7,uVar20,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_198 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_1a0 = 0x688c7a1;
      func_0x048b0d20(&uStack_198);
      puStack_58 = uStack_198;
      uStack_50 = uStack_190;
      if (uStack_198 == (undefined8 *)0x0) {
        lVar7 = *plStack_e0;
        uStack_1a0 = 0x688cee8;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar7 + 0x2aa));
        uStack_1a0 = 0x688cefc;
        uVar9 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_88 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_88 + 1);
        if (((ulong)uStack_88 & 1) != 0) {
          uVar14 = uStack_80;
          pcVar16 = pcStack_78;
        }
        uStack_1a0 = 0x688cf28;
        uVar9 = func_0x0412f8c0(uVar9,pcVar16,uVar14);
        uStack_1a0 = 0x688cf3c;
        pbVar11 = (byte *)func_0x0412f8c0(uVar9,&UNK_0125506d,1);
        bVar27 = (*pbVar11 & 1) != 0;
        pbVar23 = pbVar11 + 1;
        if (bVar27) {
          pbVar23 = *(byte **)(pbVar11 + 0x10);
        }
        uVar14 = (ulong)(*pbVar11 >> 1);
        if (bVar27) {
          uVar14 = *(ulong *)(pbVar11 + 8);
        }
        auStack_138 = (undefined1  [8])0x0;
        uStack_1a0 = 0x688cf6e;
        func_0x0ee387f0(auStack_138,pbVar23,uVar14,1);
        uStack_1a0 = 0x688cf80;
        func_0x0ed5ffe0(lVar7,8,auStack_138);
        uStack_1a0 = 0x688cf8a;
        func_0x0ee386e0(auStack_138);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0x688cfa6;
          thunk_FUN_0ee326a0(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0688db25;
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
    uStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1a0 = 0x688c7d6;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0x688c7f1;
    func_0x05d9a920(&pppppppuStack_d8,&puStack_58,&uStack_198);
    ppppppuVar22 = ppppppuStack_70;
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x688c808;
      (*pcStack_180)(&uStack_198);
    }
    bVar27 = (*(byte *)(puStack_90 + 1) & 1) != 0;
    if (bVar27) {
      ppppppuVar22 = (uint ******)puStack_90[3];
    }
    uVar14 = (ulong)(*(byte *)(puStack_90 + 1) >> 1);
    if (bVar27) {
      uVar14 = puStack_90[2];
    }
    if (uVar14 == 0) {
      uVar20 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar20 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar20 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar20 = ((int)*(char *)((long)ppppppuVar22 + uVar18 + 3) ^
                   ((int)*(char *)((long)ppppppuVar22 + uVar18 + 2) ^
                   ((int)*(char *)((long)ppppppuVar22 + uVar18 + 1) ^
                   ((int)*(char *)((long)ppppppuVar22 + uVar18) ^ uVar20) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar14 = 0;
        do {
          uVar20 = ((int)*(char *)((long)ppppppuVar22 + uVar14 + uVar18) ^ uVar20) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar8 != uVar14);
      }
    }
    cVar1 = *(char *)((long)param_3 + 0x24);
    puVar3 = (undefined8 *)*param_3;
    puVar13 = puVar3;
    if (cVar1 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x49801a7d) {
      uVar9 = param_3[5];
      lVar7 = param_3[6];
      if (lVar7 == 0) {
        uStack_1a0 = 0x688c8ff;
        (*(code *)param_3[7])(0,param_3,0);
        lVar7 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        puVar3 = (undefined8 *)*param_3;
      }
      if (cVar1 == '\x02') {
        puVar3 = param_3;
      }
      uStack_1a0 = 0x688c921;
      puVar13 = (undefined8 *)func_0x0488e200(uVar9,lVar7,0x49801a7d,puVar3);
    }
    plVar26 = (long *)param_3[5];
    uStack_1a0 = 0x688c931;
    uVar9 = func_0x05dda4c0(plVar26);
    uStack_1a0 = 0x688c943;
    auVar10 = (undefined1  [8])func_0x048b0c90(plVar26,uVar9,uVar20,1);
    plStack_140 = plVar26;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0x688c95a;
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
    uStack_1a0 = 0x688c995;
    puStack_148 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_138);
    uStack_1a0 = 0x688c9a7;
    func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
    pppppppuStack_f0 = (uint *******)&pppppppuStack_d8;
    if ((lStack_170 == lStack_b0) && ((lStack_a0 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_b4 == '\0') || ((int)uStack_178 != iStack_b8)) {
        bVar27 = cStack_b4 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar4 = pppppppuStack_d8;
        if (cStack_b4 == '\x02') {
          pppppppuVar4 = (uint *******)&pppppppuStack_d8;
        }
        uStack_1a0 = 0x688d475;
        lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar4);
        bVar27 = lVar7 != 0;
      }
    }
    else {
      bVar27 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x688c9ec;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_120 != (code *)0x0) {
      uStack_1a0 = 0x688c9fd;
      (*pcStack_120)(auStack_138);
    }
    if (bVar27) {
      lVar7 = param_3[5];
      if ((ulong)*(uint *)(puVar13 + 0xe) != 0xffffffff) {
        uStack_1a0 = 0x688ca2a;
        (**(code **)(&UNK_0f04c100 + (ulong)*(uint *)(puVar13 + 0xe) * 8))(auStack_138,puVar13);
      }
      *puVar13 = &UNK_0f011d00;
      uVar9 = _UNK_014e0ea8;
      puVar13[1] = _DAT_014e0ea0;
      puVar13[2] = uVar9;
      puVar13[3] = 0x8000000080000000;
      *(undefined1 *)(puVar13 + 10) = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      *(undefined8 *)((long)puVar13 + 0x3d) = 0;
      puVar13[0xb] = 0;
      puVar13[0xc] = 0;
      *(undefined1 *)(puVar13 + 0xd) = 0;
      *(undefined4 *)(puVar13 + 0xe) = 0;
      pcStack_188 = (code *)&UNK_05dda260;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x3e8753671);
      lStack_168 = 0;
      puStack_160 = &UNK_05dda240;
      lStack_118 = plStack_e0[4];
      auStack_138 = (undefined1  [8])*plStack_e0;
      plStack_130 = (long *)plStack_e0[1];
      pcStack_128 = (code *)plStack_e0[2];
      pcStack_120 = (code *)plStack_e0[3];
      plVar26 = (long *)plStack_e0[2];
      lStack_170 = lVar7;
      if (plVar26 == (long *)0x0) {
        pcStack_128 = (code *)0x0;
        uStack_198 = puVar13;
      }
      else {
        uStack_1a0 = 0x688caf5;
        uStack_198 = puVar13;
        pcStack_128 = (code *)(**(code **)(*plVar26 + 0x30))(plVar26,0);
      }
      puStack_148 = &UNK_0f00a8c8;
      uStack_1a0 = 0x688ceae;
      func_0x0ed75bc0(&puStack_148,plVar25,&uStack_198,uStack_e8,auStack_138);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x688cec1;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar26 = (long *)param_3[5];
      uStack_1a0 = 0x688cb0f;
      uVar9 = func_0x05f23890(plVar26);
      uStack_1a0 = 0x688cb21;
      auVar10 = (undefined1  [8])func_0x048b0c90(plVar26,uVar9,uVar20,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0x688cb38;
        func_0x048b0d20(auStack_138);
        auVar10 = auStack_138;
        plVar26 = plStack_130;
      }
      lStack_108 = 0;
      puStack_100 = (undefined *)0x0;
      lStack_118 = 0;
      lStack_110 = 0;
      pcStack_128 = (code *)0x0;
      pcStack_120 = (code *)0x0;
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0x688cb73;
      puStack_148 = (undefined *)auVar10;
      plStack_140 = plVar26;
      func_0x05d84ba0(auStack_138);
      uStack_1a0 = 0x688cb85;
      func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
      if ((lStack_170 == lStack_b0) && ((lStack_a0 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_b4 == '\0') || ((int)uStack_178 != iStack_b8)) {
          bVar27 = cStack_b4 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar4 = pppppppuStack_d8;
          if (cStack_b4 == '\x02') {
            pppppppuVar4 = (uint *******)&pppppppuStack_d8;
          }
          uStack_1a0 = 0x688d52c;
          lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar4);
          bVar27 = lVar7 != 0;
        }
      }
      else {
        bVar27 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x688cbc2;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_120 != (code *)0x0) {
        uStack_1a0 = 0x688cbd3;
        (*pcStack_120)(auStack_138);
      }
      if (bVar27) {
        lVar7 = param_3[5];
        if ((ulong)*(uint *)(puVar13 + 0xe) != 0xffffffff) {
          uStack_1a0 = 0x688cc00;
          (**(code **)(&UNK_0f04c100 + (ulong)*(uint *)(puVar13 + 0xe) * 8))(auStack_138,puVar13);
        }
        *(undefined4 *)(puVar13 + 1) = 0;
        *puVar13 = 0;
        *(undefined4 *)(puVar13 + 0xe) = 1;
        pcStack_188 = (code *)&UNK_05f23740;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x358b9cf98);
        lStack_168 = 0;
        puStack_160 = &UNK_05f23720;
        lStack_118 = plStack_e0[4];
        auStack_138 = (undefined1  [8])*plStack_e0;
        plStack_130 = (long *)plStack_e0[1];
        pcStack_128 = (code *)plStack_e0[2];
        pcStack_120 = (code *)plStack_e0[3];
        plVar26 = (long *)plStack_e0[2];
        lStack_170 = lVar7;
        if (plVar26 == (long *)0x0) {
          pcStack_128 = (code *)0x0;
          uStack_198 = puVar13;
        }
        else {
          uStack_1a0 = 0x688cc95;
          uStack_198 = puVar13;
          pcStack_128 = (code *)(**(code **)(*plVar26 + 0x30))(plVar26,1);
        }
        puStack_148 = &UNK_0f011f18;
        uStack_1a0 = 0x688d1bb;
        func_0x0ed75bc0(&puStack_148,plVar25,&uStack_198,uStack_e8,auStack_138);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0x688d1ce;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar26 = (long *)param_3[5];
        uStack_1a0 = 0x688ccaf;
        uVar9 = func_0x06352240(plVar26);
        uStack_1a0 = 0x688ccc1;
        auVar10 = (undefined1  [8])func_0x048b0c90(plVar26,uVar9,uVar20,1);
        if (auVar10 == (undefined1  [8])0x0) {
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0x688ccd8;
          func_0x048b0d20(auStack_138);
          auVar10 = auStack_138;
          plVar26 = plStack_130;
        }
        lStack_108 = 0;
        puStack_100 = (undefined *)0x0;
        lStack_118 = 0;
        lStack_110 = 0;
        pcStack_128 = (code *)0x0;
        pcStack_120 = (code *)0x0;
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0x688cd13;
        puStack_148 = (undefined *)auVar10;
        plStack_140 = plVar26;
        func_0x05d84ba0(auStack_138);
        uStack_1a0 = 0x688cd25;
        func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
        if ((lStack_170 == lStack_b0) && ((lStack_a0 != 0) == (puStack_160 != (undefined *)0x0))) {
          if ((cStack_b4 == '\0') || ((int)uStack_178 != iStack_b8)) {
            bVar27 = cStack_b4 == '\0' && uStack_178._4_1_ == '\0';
          }
          else {
            pppppppuVar4 = pppppppuStack_d8;
            if (cStack_b4 == '\x02') {
              pppppppuVar4 = (uint *******)&pppppppuStack_d8;
            }
            uStack_1a0 = 0x688d9b5;
            lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar4);
            bVar27 = lVar7 != 0;
          }
        }
        else {
          bVar27 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0x688cd62;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_120 != (code *)0x0) {
          uStack_1a0 = 0x688cd73;
          (*pcStack_120)(auStack_138);
        }
        if (bVar27) {
          lVar7 = param_3[5];
          if ((ulong)*(uint *)(puVar13 + 0xe) != 0xffffffff) {
            uStack_1a0 = 0x688cda0;
            (**(code **)(&UNK_0f04c100 + (ulong)*(uint *)(puVar13 + 0xe) * 8))(auStack_138,puVar13);
          }
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          *(undefined4 *)(puVar13 + 0xe) = 2;
          pcStack_188 = (code *)&UNK_06351ec0;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x3800f0dc8);
          lStack_168 = 0;
          puStack_160 = &UNK_06351e00;
          lStack_118 = plStack_e0[4];
          auStack_138 = (undefined1  [8])*plStack_e0;
          plStack_130 = (long *)plStack_e0[1];
          pcStack_128 = (code *)plStack_e0[2];
          pcStack_120 = (code *)plStack_e0[3];
          plVar26 = (long *)plStack_e0[2];
          lStack_170 = lVar7;
          if (plVar26 == (long *)0x0) {
            pcStack_128 = (code *)0x0;
            uStack_198 = puVar13;
          }
          else {
            uStack_1a0 = 0x688ce35;
            uStack_198 = puVar13;
            pcStack_128 = (code *)(**(code **)(*plVar26 + 0x30))(plVar26,2);
          }
          puStack_148 = &UNK_0f029c78;
          uStack_1a0 = 0x688d3e3;
          func_0x0ed75bc0(&puStack_148,plVar25,&uStack_198,uStack_e8,auStack_138);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0x688d3f6;
            (*pcStack_180)(&uStack_198);
          }
        }
        else {
          plVar26 = (long *)param_3[5];
          uStack_1a0 = 0x688cfc4;
          uVar9 = func_0x05da26d0(plVar26);
          uStack_1a0 = 0x688cfd6;
          auVar10 = (undefined1  [8])func_0x048b0c90(plVar26,uVar9,uVar20,1);
          if (auVar10 == (undefined1  [8])0x0) {
            auStack_138 = (undefined1  [8])0x0;
            plStack_130 = (long *)0x0;
            uStack_1a0 = 0x688cfed;
            func_0x048b0d20(auStack_138);
            auVar10 = auStack_138;
            plVar26 = plStack_130;
          }
          lStack_108 = 0;
          puStack_100 = (undefined *)0x0;
          lStack_118 = 0;
          lStack_110 = 0;
          pcStack_128 = (code *)0x0;
          pcStack_120 = (code *)0x0;
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0x688d028;
          puStack_148 = (undefined *)auVar10;
          plStack_140 = plVar26;
          func_0x05d84ba0(auStack_138);
          uStack_1a0 = 0x688d03a;
          func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
          if ((lStack_170 == lStack_b0) && ((lStack_a0 != 0) == (puStack_160 != (undefined *)0x0)))
          {
            if ((cStack_b4 == '\0') || ((int)uStack_178 != iStack_b8)) {
              bVar27 = cStack_b4 == '\0' && uStack_178._4_1_ == '\0';
            }
            else {
              pppppppuVar4 = pppppppuStack_d8;
              if (cStack_b4 == '\x02') {
                pppppppuVar4 = (uint *******)&pppppppuStack_d8;
              }
              uStack_1a0 = 0x688da5a;
              lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar4);
              bVar27 = lVar7 != 0;
            }
          }
          else {
            bVar27 = false;
          }
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0x688d077;
            (*pcStack_180)(&uStack_198);
          }
          if (pcStack_120 != (code *)0x0) {
            uStack_1a0 = 0x688d088;
            (*pcStack_120)(auStack_138);
          }
          if (bVar27) {
            lVar7 = param_3[5];
            if ((ulong)*(uint *)(puVar13 + 0xe) != 0xffffffff) {
              uStack_1a0 = 0x688d0b5;
              (**(code **)(&UNK_0f04c100 + (ulong)*(uint *)(puVar13 + 0xe) * 8))
                        (auStack_138,puVar13);
            }
            *(undefined4 *)(puVar13 + 1) = 0;
            *puVar13 = 0;
            *(undefined4 *)(puVar13 + 0xe) = 3;
            pcStack_188 = (code *)&UNK_05da2570;
            pcStack_180 = (code *)0x0;
            uStack_178 = CONCAT35(uStack_178._5_3_,0x32b3c5682);
            lStack_168 = 0;
            puStack_160 = &UNK_05da2550;
            lStack_118 = plStack_e0[4];
            auStack_138 = (undefined1  [8])*plStack_e0;
            plStack_130 = (long *)plStack_e0[1];
            pcStack_128 = (code *)plStack_e0[2];
            pcStack_120 = (code *)plStack_e0[3];
            plVar26 = (long *)plStack_e0[2];
            lStack_170 = lVar7;
            if (plVar26 == (long *)0x0) {
              pcStack_128 = (code *)0x0;
              uStack_198 = puVar13;
            }
            else {
              uStack_1a0 = 0x688d14a;
              uStack_198 = puVar13;
              pcStack_128 = (code *)(**(code **)(*plVar26 + 0x30))(plVar26,3);
            }
            puStack_148 = &UNK_0f0124a8;
            uStack_1a0 = 0x688d4e4;
            func_0x0ed75bc0(&puStack_148,plVar25,&uStack_198,uStack_e8,auStack_138);
            if (pcStack_180 != (code *)0x0) {
              uStack_1a0 = 0x688d4f7;
              (*pcStack_180)(&uStack_198);
            }
          }
          else {
            plVar26 = (long *)param_3[5];
            uStack_1a0 = 0x688d1ec;
            uVar9 = func_0x0637cce0(plVar26);
            uStack_1a0 = 0x688d1fe;
            auVar10 = (undefined1  [8])func_0x048b0c90(plVar26,uVar9,uVar20,1);
            if (auVar10 == (undefined1  [8])0x0) {
              auStack_138 = (undefined1  [8])0x0;
              plStack_130 = (long *)0x0;
              uStack_1a0 = 0x688d215;
              func_0x048b0d20(auStack_138);
              auVar10 = auStack_138;
              plVar26 = plStack_130;
            }
            lStack_108 = 0;
            puStack_100 = (undefined *)0x0;
            lStack_118 = 0;
            lStack_110 = 0;
            pcStack_128 = (code *)0x0;
            pcStack_120 = (code *)0x0;
            auStack_138 = (undefined1  [8])0x0;
            plStack_130 = (long *)0x0;
            uStack_1a0 = 0x688d250;
            puStack_148 = (undefined *)auVar10;
            plStack_140 = plVar26;
            func_0x05d84ba0(auStack_138);
            uStack_1a0 = 0x688d262;
            func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
            if ((lStack_170 == lStack_b0) && ((lStack_a0 != 0) == (puStack_160 != (undefined *)0x0))
               ) {
              if ((cStack_b4 == '\0') || ((int)uStack_178 != iStack_b8)) {
                bVar27 = cStack_b4 == '\0' && uStack_178._4_1_ == '\0';
              }
              else {
                pppppppuVar4 = pppppppuStack_d8;
                if (cStack_b4 == '\x02') {
                  pppppppuVar4 = (uint *******)&pppppppuStack_d8;
                }
                uStack_1a0 = 0x688db6f;
                lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar4);
                bVar27 = lVar7 != 0;
              }
            }
            else {
              bVar27 = false;
            }
            if (pcStack_180 != (code *)0x0) {
              uStack_1a0 = 0x688d29f;
              (*pcStack_180)(&uStack_198);
            }
            if (pcStack_120 != (code *)0x0) {
              uStack_1a0 = 0x688d2b0;
              (*pcStack_120)(auStack_138);
            }
            if (bVar27) {
              lVar7 = param_3[5];
              if ((ulong)*(uint *)(puVar13 + 0xe) != 0xffffffff) {
                uStack_1a0 = 0x688d2dd;
                (**(code **)(&UNK_0f04c100 + (ulong)*(uint *)(puVar13 + 0xe) * 8))
                          (auStack_138,puVar13);
              }
              *puVar13 = 0;
              puVar13[1] = 0;
              puVar13[2] = 0;
              *(undefined4 *)(puVar13 + 0xe) = 4;
              pcStack_188 = (code *)&UNK_0637c950;
              pcStack_180 = (code *)0x0;
              uStack_178 = CONCAT35(uStack_178._5_3_,0x3ab901266);
              lStack_168 = 0;
              puStack_160 = &UNK_0637c890;
              lStack_118 = plStack_e0[4];
              auStack_138 = (undefined1  [8])*plStack_e0;
              plStack_130 = (long *)plStack_e0[1];
              pcStack_128 = (code *)plStack_e0[2];
              pcStack_120 = (code *)plStack_e0[3];
              plVar26 = (long *)plStack_e0[2];
              lStack_170 = lVar7;
              if (plVar26 == (long *)0x0) {
                pcStack_128 = (code *)0x0;
                uStack_198 = puVar13;
              }
              else {
                uStack_1a0 = 0x688d372;
                uStack_198 = puVar13;
                pcStack_128 = (code *)(**(code **)(*plVar26 + 0x30))(plVar26,4);
              }
              puStack_148 = &UNK_0f02e818;
              uStack_1a0 = 0x688d8f4;
              func_0x0ed75bc0(&puStack_148,plVar25,&uStack_198,uStack_e8,auStack_138);
              if (pcStack_180 != (code *)0x0) {
                uStack_1a0 = 0x688d907;
                (*pcStack_180)(&uStack_198);
              }
            }
            else {
              plVar26 = (long *)param_3[5];
              if (DAT_0f588c40 == '\0') {
                uStack_1a0 = 0x688dbf8;
                iVar2 = func_0x04108328(&DAT_0f588c40);
                if (iVar2 != 0) {
                  uStack_1a0 = 0x688dc05;
                  func_0x06890630();
                  uStack_1a0 = 0x688dc1f;
                  func_0x0eee2f40(&UNK_048ae800,&DAT_0f588bc0,0xf53dab8);
                  uStack_1a0 = 0x688dc2b;
                  func_0x0410844d(&DAT_0f588c40);
                }
              }
              plVar5 = (long *)(*plVar26 +
                               (ulong)((int)((ulong)(plVar26[1] - *plVar26) >> 3) - 1U &
                                      *(uint *)(_DAT_0f588bc0 + 4)) * 8);
              do {
                lVar7 = *plVar5;
                if (lVar7 == -1) {
                  plVar12 = (long *)plVar26[4];
                  plVar5 = plVar12;
                  goto LAB_0688d50f;
                }
                plVar5 = (long *)(plVar26[3] + lVar7 * 0x18);
              } while (*(uint *)(plVar26[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f588bc0 + 4));
              plVar12 = (long *)plVar26[4];
LAB_0688d50f:
              if (plVar5 == plVar12) {
                puVar24 = &DAT_0f588bc0;
              }
              else {
                puVar24 = (undefined *)plVar5[2];
              }
              uStack_1a0 = 0x688d589;
              auVar10 = (undefined1  [8])func_0x048b0c90(plVar26,puVar24,uVar20,1);
              if (auVar10 == (undefined1  [8])0x0) {
                auStack_138 = (undefined1  [8])0x0;
                plStack_130 = (long *)0x0;
                uStack_1a0 = 0x688d5a0;
                func_0x048b0d20(auStack_138);
                auVar10 = auStack_138;
                plVar26 = plStack_130;
              }
              lStack_108 = 0;
              puStack_100 = (undefined *)0x0;
              lStack_118 = 0;
              lStack_110 = 0;
              pcStack_128 = (code *)0x0;
              pcStack_120 = (code *)0x0;
              auStack_138 = (undefined1  [8])0x0;
              plStack_130 = (long *)0x0;
              uStack_1a0 = 0x688d5db;
              puStack_148 = (undefined *)auVar10;
              plStack_140 = plVar26;
              func_0x05d84ba0(auStack_138);
              uStack_1a0 = 0x688d5ed;
              func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
              if ((lStack_170 == lStack_b0) &&
                 ((lStack_a0 != 0) == (puStack_160 != (undefined *)0x0))) {
                if ((cStack_b4 == '\0') || ((int)uStack_178 != iStack_b8)) {
                  bVar27 = cStack_b4 == '\0' && uStack_178._4_1_ == '\0';
                }
                else {
                  pppppppuVar4 = pppppppuStack_d8;
                  if (cStack_b4 == '\x02') {
                    pppppppuVar4 = (uint *******)&pppppppuStack_d8;
                  }
                  uStack_1a0 = 0x688dba3;
                  lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar4);
                  bVar27 = lVar7 != 0;
                  plVar25 = plStack_98;
                }
              }
              else {
                bVar27 = false;
              }
              if (pcStack_180 != (code *)0x0) {
                uStack_1a0 = 0x688d62a;
                (*pcStack_180)(&uStack_198);
              }
              if (pcStack_120 != (code *)0x0) {
                uStack_1a0 = 0x688d63b;
                (*pcStack_120)(auStack_138);
              }
              if (bVar27) {
                lVar7 = param_3[5];
                if ((ulong)*(uint *)(puVar13 + 0xe) != 0xffffffff) {
                  uStack_1a0 = 0x688d668;
                  (**(code **)(&UNK_0f04c100 + (ulong)*(uint *)(puVar13 + 0xe) * 8))
                            (auStack_138,puVar13);
                }
                puVar13[2] = 0;
                puVar13[3] = 0;
                *puVar13 = 0;
                puVar13[1] = 0;
                *(undefined4 *)(puVar13 + 4) = 0x3f800000;
                *(undefined4 *)(puVar13 + 0xe) = 5;
                pcStack_188 = (code *)&UNK_06890140;
                pcStack_180 = (code *)0x0;
                uStack_178 = CONCAT35(uStack_178._5_3_,0x30636ec9c);
                lStack_168 = 0;
                puStack_160 = &UNK_0688ffb0;
                lStack_118 = plStack_e0[4];
                auStack_138 = (undefined1  [8])*plStack_e0;
                plStack_130 = (long *)plStack_e0[1];
                pcStack_128 = (code *)plStack_e0[2];
                pcStack_120 = (code *)plStack_e0[3];
                plVar26 = (long *)plStack_e0[2];
                lStack_170 = lVar7;
                if (plVar26 == (long *)0x0) {
                  pcStack_128 = (code *)0x0;
                  uStack_198 = puVar13;
                }
                else {
                  uStack_1a0 = 0x688d702;
                  uStack_198 = puVar13;
                  pcStack_128 = (code *)(**(code **)(*plVar26 + 0x30))(plVar26,5);
                }
                puStack_148 = &UNK_0f0579f8;
                uStack_1a0 = 0x688da24;
                func_0x0ed75bc0(&puStack_148,plVar25,&uStack_198,uStack_e8,auStack_138);
                if (pcStack_180 != (code *)0x0) {
                  uStack_1a0 = 0x688da37;
                  (*pcStack_180)(&uStack_198);
                }
              }
              else {
                plVar26 = (long *)param_3[5];
                uStack_1a0 = 0x688d71c;
                uVar9 = func_0x05e255f0(plVar26);
                uStack_1a0 = 0x688d72e;
                auVar10 = (undefined1  [8])func_0x048b0c90(plVar26,uVar9,uVar20,1);
                if (auVar10 == (undefined1  [8])0x0) {
                  auStack_138 = (undefined1  [8])0x0;
                  plStack_130 = (long *)0x0;
                  uStack_1a0 = 0x688d745;
                  func_0x048b0d20(auStack_138);
                  auVar10 = auStack_138;
                  plVar26 = plStack_130;
                }
                lStack_108 = 0;
                puStack_100 = (undefined *)0x0;
                lStack_118 = 0;
                lStack_110 = 0;
                pcStack_128 = (code *)0x0;
                pcStack_120 = (code *)0x0;
                auStack_138 = (undefined1  [8])0x0;
                plStack_130 = (long *)0x0;
                uStack_1a0 = 0x688d780;
                puStack_148 = (undefined *)auVar10;
                plStack_140 = plVar26;
                func_0x05d84ba0(auStack_138);
                uStack_1a0 = 0x688d792;
                func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
                if ((lStack_170 == lStack_b0) &&
                   ((lStack_a0 != 0) == (puStack_160 != (undefined *)0x0))) {
                  if ((cStack_b4 == '\0') || ((int)uStack_178 != iStack_b8)) {
                    bVar27 = cStack_b4 == '\0' && uStack_178._4_1_ == '\0';
                  }
                  else {
                    if (cStack_b4 != '\x02') {
                      pppppppuStack_f0 = pppppppuStack_d8;
                    }
                    uStack_1a0 = 0x688dab2;
                    lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuStack_f0);
                    bVar27 = lVar7 != 0;
                    plVar25 = plStack_98;
                  }
                }
                else {
                  bVar27 = false;
                }
                if (pcStack_180 != (code *)0x0) {
                  uStack_1a0 = 0x688d7d9;
                  (*pcStack_180)(&uStack_198);
                }
                if (pcStack_120 != (code *)0x0) {
                  uStack_1a0 = 0x688d7ea;
                  (*pcStack_120)(auStack_138);
                }
                if (bVar27) {
                  lVar7 = param_3[5];
                  if ((ulong)*(uint *)(puVar13 + 0xe) != 0xffffffff) {
                    uStack_1a0 = 0x688d817;
                    (**(code **)(&UNK_0f04c100 + (ulong)*(uint *)(puVar13 + 0xe) * 8))
                              (auStack_138,puVar13);
                  }
                  *puVar13 = &UNK_0f435c20;
                  puVar13[1] = 0;
                  puVar13[2] = 0;
                  puVar13[3] = 0;
                  *(undefined4 *)(puVar13 + 0xe) = 6;
                  pcStack_188 = (code *)&UNK_05e253e0;
                  pcStack_180 = (code *)0x0;
                  uStack_178 = CONCAT35(uStack_178._5_3_,0x33ac15362);
                  lStack_168 = 0;
                  puStack_160 = &UNK_05e253c0;
                  lStack_118 = plStack_e0[4];
                  auStack_138 = (undefined1  [8])*plStack_e0;
                  plStack_130 = (long *)plStack_e0[1];
                  pcStack_128 = (code *)plStack_e0[2];
                  pcStack_120 = (code *)plStack_e0[3];
                  plVar26 = (long *)plStack_e0[2];
                  lStack_170 = lVar7;
                  if (plVar26 == (long *)0x0) {
                    pcStack_128 = (code *)0x0;
                    uStack_198 = puVar13;
                  }
                  else {
                    uStack_1a0 = 0x688d8b7;
                    uStack_198 = puVar13;
                    pcStack_128 = (code *)(**(code **)(*plVar26 + 0x30))(plVar26,6);
                  }
                  puStack_148 = &UNK_0f00bc90;
                  uStack_1a0 = 0x688daff;
                  func_0x0ed75bc0(&puStack_148,plVar25,&uStack_198,uStack_e8,auStack_138);
                  if (pcStack_180 != (code *)0x0) {
                    uStack_1a0 = 0x688db0e;
                    (*pcStack_180)(&uStack_198);
                  }
                }
                else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                        (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
                  uStack_198 = (undefined8 *)0x2300000149614c;
                  uStack_1a0 = 0x688d96b;
                  func_0x0ed5ffe0(*plStack_e0,8,&uStack_198);
                  if (((ulong)uStack_198 & 0x80000000000000) != 0) {
                    uStack_1a0 = 0x688d996;
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
                  }
                  uStack_198 = (undefined8 *)0x0;
                }
              }
            }
          }
        }
      }
    }
    if (pcStack_c0 != (code *)0x0) {
      uStack_1a0 = 0x688db25;
      (*pcStack_c0)(&pppppppuStack_d8);
    }
  }
LAB_0688db25:
  if (((ulong)uStack_88 & 1) != 0) {
    uStack_1a0 = 0x688db4c;
    thunk_FUN_0ee326a0(pcStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
  }
  return;
}


