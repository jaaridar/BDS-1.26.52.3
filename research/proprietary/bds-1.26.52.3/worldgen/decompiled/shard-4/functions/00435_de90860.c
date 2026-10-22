/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdf90860 (ELF vaddr 0xde90860)
 * Label: caller-of-callee
 * Body:  [[0df90860, 0df9117a] [0df91180, 0df920fb] [0df94600, 0df948a0]]
 * Ghidra: FUN_0df90860
 */


/* WARNING: Possible PIC construction at 0x0df90a90: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0df90860(undefined8 param_1,long *param_2,undefined8 *param_3,ulong param_4,long *param_5)

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
  undefined8 uVar10;
  undefined1 auVar11 [8];
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  code *pcVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  ulong unaff_RBX;
  undefined8 ******ppppppuVar21;
  byte bVar22;
  uint uVar23;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar24;
  byte *pbVar25;
  undefined *puVar26;
  undefined8 *unaff_R12;
  long *unaff_R13;
  long *plVar27;
  undefined8 *unaff_R14;
  ulong unaff_R15;
  bool bVar28;
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
  long *plStack_f0;
  uint *puStack_e8;
  ulong uStack_e0;
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
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pcVar16 = (code *)param_3[7];
  plStack_f0 = param_5;
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar28 = false;
    }
    else {
      uStack_1a0 = 0xdf908b5;
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_0df948d0;
    }
    param_3[2] = &UNK_0df949b0;
    *(undefined4 *)(param_3 + 4) = 0xee142d52;
    param_3[3] = &UNK_0df94bd0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0xdf90905;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1a0 = 0xdf9207a;
      func_0x0eec74c0(0x20,0);
    }
    *(undefined8 *)((long)puVar4 + 0xc) = 0;
    *(undefined8 *)((long)puVar4 + 0x14) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    *param_3 = puVar4;
    pcVar16 = (code *)&UNK_0df948d0;
    param_3[7] = &UNK_0df948d0;
    if (bVar28) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    uVar14 = param_4;
    if (lVar8 == 0) goto LAB_0df90947;
LAB_0df9095d:
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    uVar14 = unaff_R15;
    if (lVar8 != 0) goto LAB_0df9095d;
LAB_0df90947:
    uVar14 = param_3[5];
    uStack_1a0 = 0xdf90955;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0df9095d;
    uStack_1a0 = 0xdf90992;
    lVar8 = func_0x048aead0(uVar14);
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_0df94600;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1a0 = 0xdf90ab9;
    func_0x048b1dc0(&uStack_198);
    puVar4 = uStack_198;
    uVar14 = uStack_190;
joined_r0x0df90ac4:
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1a0 = 0xdf90ad2;
      puVar4 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar4 = (undefined8 *)param_3[6];
    if (puVar4 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1a0 = 0xdf909bc;
      (*(code *)param_3[7])(0,param_3,0);
      puVar4 = (undefined8 *)param_3[6];
      goto joined_r0x0df90ac4;
    }
  }
  unaff_R14 = (undefined8 *)puVar4[0xd];
  uStack_1a0 = 0xdf909d6;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar27 = plStack_f0;
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0xdf90a95;
    unaff_RBX = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = uVar14;
SUB_0df94600:
    plVar27 = plStack_f0;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x11ebd2ae) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdf9465f;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdf94681;
      puVar13 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0xee142d52,puVar4);
    }
    lVar8 = *plVar27;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdf94691;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdf946ae;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar14 >> 0x20 & 1) == 0) {
      uVar10 = param_3[5];
      uVar9 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdf946e9;
      cVar2 = func_0x0df94f40(param_2,uVar10,puVar13,param_4,plVar27,4);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdf94716;
      cVar2 = func_0x0df95150(param_2,uVar10,puVar13,param_4,plVar27,4);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdf94743;
      cVar2 = func_0x0df95370(param_2,uVar10,puVar13,param_4,plVar27,4);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar14 = 4;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
    }
    else {
      if ((uVar14 & 0xfffffffc) != 0) {
        lVar8 = *plVar27;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdf947ab;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdf947d3;
        (*pcVar16)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x50) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdf9480d;
      cVar2 = func_0x0df94f40(param_2,uVar10,puVar13,param_4,plVar27,uVar14 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdf9483a;
      cVar2 = func_0x0df95150(param_2,uVar10,puVar13,param_4,plVar27,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdf94863;
      cVar2 = func_0x0df95370(param_2,uVar10,puVar13,param_4,plVar27,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdf9489b;
    func_0x0df95590(param_2,uVar10,puVar13,param_4,plVar27,uVar14);
    return;
  }
  puStack_70 = unaff_R14;
  if (bVar22 != 1) {
    uStack_198 = (undefined8 *)0x120000012f2525;
    uStack_1a0 = 0xdf90b0a;
    func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0xdf90b2d;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0xdf90a1d;
  plStack_150 = param_2;
  uStack_e0 = param_4;
  func_0x0ed6d600(&lStack_68,*plStack_f0);
  uStack_48 = param_3[5];
  lStack_78 = *plVar27;
  ppppppuVar21 = (undefined8 ******)((long)puStack_70 + 9);
  bVar28 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_70[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar28) {
    uVar14 = puStack_70[2];
  }
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_148 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_148 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar14 + 9;
    puStack_e8 = (uint *)CONCAT71(puStack_e8._1_7_,lVar8 == 0);
    uStack_1a0 = 0xdf90b67;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar7 == (ulong *)0x0 && (char)puStack_e8 == '\0') {
      uStack_1a0 = 0xdf9208f;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar7 = uVar14;
    uStack_1a0 = 0xdf90b95;
    func_0x0eee2f00(puVar7 + 1,ppppppuVar24,uVar14);
    *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
    puStack_148 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0xdf90bce;
  puVar5 = (uint *)func_0x0ed6d180(lStack_78,&puStack_148,0);
  plVar27 = plStack_150;
  if (((ulong)puStack_148 & 0x80000000000000) != 0) {
    uStack_1a0 = 0xdf90c02;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_148 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar4 = puStack_70;
  puStack_148 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_70[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar28) {
    uVar14 = puStack_70[2];
  }
  uStack_1a0 = 0xdf90c38;
  cVar2 = (**(code **)(*plVar27 + 0xb8))(plVar27,ppppppuVar24,uVar14);
  if (cVar2 == '\0') {
    uStack_1a0 = 0xdf90d66;
    puStack_e8 = puVar5;
    _auStack_138 = (*(code *)*puVar4)(uStack_48);
    uStack_1a0 = 0xdf90d8c;
    func_0x0ed8bc80(&uStack_198,auStack_138,*(undefined1 *)(lStack_78 + 0x2aa));
    uVar14 = (ulong)uStack_198 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_198 + 1);
    if (((ulong)uStack_198 & 1) != 0) {
      uVar14 = uStack_190;
      pcVar16 = pcStack_188;
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (pcVar16 == (code *)0x0) {
      pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
    }
    else {
      lVar8 = uVar14 + 9;
      uStack_1a0 = 0xdf90ddb;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
        uStack_1a0 = 0xdf920a1;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = uVar14;
      uStack_1a0 = 0xdf90e0a;
      func_0x0eee2f00(puVar7 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar5 = puStack_e8;
    uStack_1a0 = 0xdf90f9f;
    func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
    plVar27 = plStack_150;
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0xdf90fd3;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0xdf90ff7;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0xdf90c57;
    (**(code **)(*plVar27 + 0x80))(auStack_138,plVar27,0x40);
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
      pppppppuStack_b8 = (undefined8 *******)puVar4[3];
      uStack_b0 = puVar4[2];
      if ((*(byte *)(puVar4 + 1) & 1) == 0) {
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar21;
        uStack_b0 = (ulong)(*(byte *)(puVar4 + 1) >> 1);
      }
      uStack_1a0 = 0xdf90ebc;
      puStack_e8 = puVar5;
      func_0x0470d9a0(auStack_138,&UNK_01377405,0x15,0xd,&pppppppuStack_b8);
      plVar27 = (long *)((ulong)auStack_138 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_138 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar27 = plStack_130;
        pcVar16 = pcStack_128;
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)plVar27 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar27 + 9;
        uStack_1a0 = 0xdf90f0c;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
          uStack_1a0 = 0xdf920b3;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = (ulong)plVar27;
        uStack_1a0 = 0xdf90f3b;
        func_0x0eee2f00(puVar7 + 1,pcVar16,plVar27);
        *(undefined1 *)((long)puVar7 + (long)plVar27 + 8U) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      puVar5 = puStack_e8;
      uStack_1a0 = 0xdf91078;
      func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
      plVar27 = plStack_150;
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0xdf910ac;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_138 & 1) != 0) {
        uStack_1a0 = 0xdf910d2;
        func_0x0412a280(pcStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
      }
      uStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_188 = pcStack_128;
      uStack_198 = (undefined8 *)auStack_138;
      uStack_190 = (ulong)plStack_130;
      plVar18 = (long *)(ulong)(byte)(auStack_138[0] >> 1);
      pcVar16 = (code *)((long)&uStack_198 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar18 = plStack_130;
        pcVar16 = pcStack_128;
      }
      bVar22 = auStack_138[0];
      if (plVar18 != (long *)0x0) {
        uStack_1a0 = 0xdf90ca7;
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
        bVar22 = (byte)uStack_198;
      }
      if ((bVar22 & 1) == 0) {
        pcStack_c8 = pcStack_188;
        uStack_d8 = uStack_198;
        uStack_d0 = uStack_190;
      }
      else {
        uStack_1a0 = 0xdf9102a;
        func_0x0412e5e0(&uStack_d8,pcStack_188,uStack_190);
      }
    }
    lVar8 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0xdf9110c;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar8 != lStack_168) {
          uStack_1a0 = 0xdf9113c;
          FUN_048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar8;
        uStack_1a0 = 0xdf91158;
        func_0x0412a280(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar17 = pcStack_188;
      pcVar16 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar17 != pcVar16; pcVar16 = pcVar16 + -0x50) {
          if ((pcVar16[-8] == (code)0x1) && (((byte)pcVar16[-0x30] & 1) != 0)) {
            uStack_1a0 = 0xdf911a8;
            func_0x0412a280(*(undefined8 *)(pcVar16 + -0x20),
                            *(ulong *)(pcVar16 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar17;
        uStack_1a0 = 0xdf911c1;
        func_0x0412a280(pcStack_188,uStack_178 - (long)pcStack_188);
      }
    }
  }
  uStack_1a0 = 0xdf911d8;
  (**(code **)(*plVar27 + 0xd0))(plVar27);
  lVar8 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar15 = puVar5[4];
LAB_0df9121a:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1a0 = 0xdf91243;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_198,lVar1 + -0x18);
      uVar15 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar15 = puVar5[4], uVar23 == uVar15 - 1)) goto LAB_0df9121a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0xdf91282;
    auStack_40 = (*(code *)*puStack_70)();
    uVar10 = auStack_40._8_8_;
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
      uStack_1a0 = 0xdf91371;
      lVar8 = func_0x048aead0(uVar10);
    }
    uStack_1a0 = 0xdf91383;
    puStack_58 = (undefined8 *)FUN_048b0c90(uVar10,lVar8,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_198 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_1a0 = 0xdf913b1;
      func_0x048b0d20(&uStack_198);
      puStack_58 = uStack_198;
      uStack_50 = uStack_190;
      if (uStack_198 == (undefined8 *)0x0) {
        lVar8 = *plStack_f0;
        uStack_1a0 = 0xdf91abc;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1a0 = 0xdf91ad0;
        uVar10 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar14 = uStack_d0;
          pcVar16 = pcStack_c8;
        }
        uStack_1a0 = 0xdf91afc;
        uVar10 = func_0x0412f8c0(uVar10,pcVar16,uVar14);
        uStack_1a0 = 0xdf91b10;
        pbVar12 = (byte *)func_0x0412f8c0(uVar10,&UNK_0125506d,1);
        bVar28 = (*pbVar12 & 1) != 0;
        pbVar25 = pbVar12 + 1;
        if (bVar28) {
          pbVar25 = *(byte **)(pbVar12 + 0x10);
        }
        uVar14 = (ulong)(*pbVar12 >> 1);
        if (bVar28) {
          uVar14 = *(ulong *)(pbVar12 + 8);
        }
        auStack_138 = (undefined1  [8])0x0;
        uStack_1a0 = 0xdf91b42;
        func_0x0ee387f0(auStack_138,pbVar25,uVar14,1);
        uStack_1a0 = 0xdf91b54;
        func_0x0ed5ffe0(lVar8,8,auStack_138);
        uStack_1a0 = 0xdf91b5e;
        func_0x0ee386e0(auStack_138);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0xdf91b7a;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0df91ff9;
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
    uStack_1a0 = 0xdf913e6;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0xdf913fe;
    func_0x05d9a920(&pppppppuStack_b8,&puStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xdf9140d;
      (*pcStack_180)(&uStack_198);
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
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x11ebd2ae) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1a0 = 0xdf9150e;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      uStack_1a0 = 0xdf91530;
      puVar13 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0xee142d52,puVar4);
    }
    plVar27 = (long *)param_3[5];
    uStack_1a0 = 0xdf91540;
    uVar10 = func_0x0490fc00(plVar27);
    uStack_1a0 = 0xdf91552;
    auVar11 = (undefined1  [8])FUN_048b0c90(plVar27,uVar10,uVar23,1);
    plStack_140 = plVar27;
    if (auVar11 == (undefined1  [8])0x0) {
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0xdf91569;
      func_0x048b0d20(auStack_138);
      auVar11 = auStack_138;
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
    uStack_1a0 = 0xdf915a4;
    puStack_148 = (undefined *)auVar11;
    func_0x05d84ba0(auStack_138);
    uStack_1a0 = 0xdf915b6;
    func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
    if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
        bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar20 = pppppppuStack_b8;
        if (cStack_94 == '\x02') {
          pppppppuVar20 = &pppppppuStack_b8;
        }
        uStack_1a0 = 0xdf91f46;
        lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
        bVar28 = lVar8 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xdf915f3;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_120 != (code *)0x0) {
      uStack_1a0 = 0xdf91604;
      (*pcStack_120)(auStack_138);
    }
    if (bVar28) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar13 + 3) != 0xffffffff) {
        uStack_1a0 = 0xdf91631;
        (**(code **)(&UNK_0f4a7c18 + (ulong)*(uint *)(puVar13 + 3) * 8))(auStack_138,puVar13);
      }
      *(undefined8 *)((long)puVar13 + 0xc) = 0;
      *(undefined8 *)((long)puVar13 + 0x14) = 0;
      *puVar13 = 0;
      puVar13[1] = 0;
      pcStack_188 = (code *)&UNK_0490f860;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x37ccc1911);
      lStack_168 = 0;
      puStack_160 = &UNK_0490f7a0;
      lStack_118 = plStack_f0[4];
      auStack_138 = (undefined1  [8])*plStack_f0;
      plStack_130 = (long *)plStack_f0[1];
      pcStack_128 = (code *)plStack_f0[2];
      pcStack_120 = (code *)plStack_f0[3];
      plVar27 = (long *)plStack_f0[2];
      lStack_170 = lVar8;
      if (plVar27 == (long *)0x0) {
        pcStack_128 = (code *)0x0;
        uStack_198 = puVar13;
      }
      else {
        uStack_1a0 = 0xdf916b8;
        uStack_198 = puVar13;
        pcStack_128 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,0);
      }
      puStack_148 = &UNK_0ef474e0;
      uStack_1a0 = 0xdf91a82;
      func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xdf91a95;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar27 = (long *)param_3[5];
      uStack_1a0 = 0xdf916d7;
      uVar10 = func_0x09285e80(plVar27);
      uStack_1a0 = 0xdf916e9;
      auVar11 = (undefined1  [8])FUN_048b0c90(plVar27,uVar10,uVar23,1);
      if (auVar11 == (undefined1  [8])0x0) {
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0xdf91700;
        func_0x048b0d20(auStack_138);
        auVar11 = auStack_138;
        plVar27 = plStack_130;
      }
      lStack_108 = 0;
      puStack_100 = (undefined *)0x0;
      lStack_118 = 0;
      lStack_110 = 0;
      pcStack_128 = (code *)0x0;
      pcStack_120 = (code *)0x0;
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0xdf9173b;
      puStack_148 = (undefined *)auVar11;
      plStack_140 = plVar27;
      func_0x05d84ba0(auStack_138);
      uStack_1a0 = 0xdf9174d;
      func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
      if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
          bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar20 = pppppppuStack_b8;
          if (cStack_94 == '\x02') {
            pppppppuVar20 = &pppppppuStack_b8;
          }
          uStack_1a0 = 0xdf92043;
          lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
          bVar28 = lVar8 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xdf9178a;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_120 != (code *)0x0) {
        uStack_1a0 = 0xdf9179b;
        (*pcStack_120)(auStack_138);
      }
      if (bVar28) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar13 + 3) != 0xffffffff) {
          uStack_1a0 = 0xdf917c8;
          (**(code **)(&UNK_0f4a7c18 + (ulong)*(uint *)(puVar13 + 3) * 8))(auStack_138,puVar13);
        }
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *(undefined4 *)(puVar13 + 3) = 1;
        pcStack_188 = (code *)&UNK_09286250;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x3c761f98b);
        lStack_168 = 0;
        puStack_160 = &UNK_09286190;
        lStack_118 = plStack_f0[4];
        auStack_138 = (undefined1  [8])*plStack_f0;
        plStack_130 = (long *)plStack_f0[1];
        pcStack_128 = (code *)plStack_f0[2];
        pcStack_120 = (code *)plStack_f0[3];
        plVar27 = (long *)plStack_f0[2];
        lStack_170 = lVar8;
        if (plVar27 == (long *)0x0) {
          pcStack_128 = (code *)0x0;
          uStack_198 = puVar13;
        }
        else {
          uStack_1a0 = 0xdf9185d;
          uStack_198 = puVar13;
          pcStack_128 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,1);
        }
        puStack_148 = &UNK_0f4a7dd8;
        uStack_1a0 = 0xdf91c4d;
        func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xdf91c60;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar27 = (long *)param_3[5];
        uStack_1a0 = 0xdf9187c;
        uVar10 = func_0x063f0b80(plVar27);
        uStack_1a0 = 0xdf9188e;
        auVar11 = (undefined1  [8])FUN_048b0c90(plVar27,uVar10,uVar23,1);
        if (auVar11 == (undefined1  [8])0x0) {
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0xdf918a5;
          func_0x048b0d20(auStack_138);
          auVar11 = auStack_138;
          plVar27 = plStack_130;
        }
        lStack_108 = 0;
        puStack_100 = (undefined *)0x0;
        lStack_118 = 0;
        lStack_110 = 0;
        pcStack_128 = (code *)0x0;
        pcStack_120 = (code *)0x0;
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0xdf918e0;
        puStack_148 = (undefined *)auVar11;
        plStack_140 = plVar27;
        func_0x05d84ba0(auStack_138);
        uStack_1a0 = 0xdf918f2;
        func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
        if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0))) {
          if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
            bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
          }
          else {
            pppppppuVar20 = pppppppuStack_b8;
            if (cStack_94 == '\x02') {
              pppppppuVar20 = &pppppppuStack_b8;
            }
            uStack_1a0 = 0xdf92060;
            lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
            bVar28 = lVar8 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xdf9192f;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_120 != (code *)0x0) {
          uStack_1a0 = 0xdf91940;
          (*pcStack_120)(auStack_138);
        }
        if (bVar28) {
          lVar8 = param_3[5];
          if ((ulong)*(uint *)(puVar13 + 3) != 0xffffffff) {
            uStack_1a0 = 0xdf9196d;
            (**(code **)(&UNK_0f4a7c18 + (ulong)*(uint *)(puVar13 + 3) * 8))(auStack_138,puVar13);
          }
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          *(undefined4 *)(puVar13 + 3) = 2;
          pcStack_188 = (code *)&UNK_063f0870;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x3f083fcb6);
          lStack_168 = 0;
          puStack_160 = &UNK_063f07b0;
          lStack_118 = plStack_f0[4];
          auStack_138 = (undefined1  [8])*plStack_f0;
          plStack_130 = (long *)plStack_f0[1];
          pcStack_128 = (code *)plStack_f0[2];
          pcStack_120 = (code *)plStack_f0[3];
          plVar27 = (long *)plStack_f0[2];
          lStack_170 = lVar8;
          if (plVar27 == (long *)0x0) {
            pcStack_128 = (code *)0x0;
            uStack_198 = puVar13;
          }
          else {
            uStack_1a0 = 0xdf91a02;
            uStack_198 = puVar13;
            pcStack_128 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,2);
          }
          puStack_148 = &UNK_0f02e460;
          uStack_1a0 = 0xdf91f10;
          func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xdf91f23;
            (*pcStack_180)(&uStack_198);
          }
        }
        else {
          plVar27 = (long *)param_3[5];
          if (DAT_0f741580 == '\0') {
            uStack_1a0 = 0xdf920c4;
            iVar3 = FUN_04108328(&DAT_0f741580);
            if (iVar3 != 0) {
              uStack_1a0 = 0xdf920d1;
              func_0x0df8ccf0();
              uStack_1a0 = 0xdf920eb;
              __cxa_atexit(&UNK_048ae800,&DAT_0f741500,0xf53dab8);
              uStack_1a0 = 0xdf920f7;
              func_0x0410844d(&DAT_0f741580);
            }
          }
          plVar18 = (long *)(*plVar27 +
                            (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                   *(uint *)(_DAT_0f741500 + 4)) * 8);
          do {
            lVar8 = *plVar18;
            if (lVar8 == -1) {
              plVar6 = (long *)plVar27[4];
              plVar18 = plVar6;
              goto LAB_0df91c78;
            }
            plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
          } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f741500 + 4));
          plVar6 = (long *)plVar27[4];
LAB_0df91c78:
          if (plVar18 == plVar6) {
            puVar26 = &DAT_0f741500;
          }
          else {
            puVar26 = (undefined *)plVar18[2];
          }
          uStack_1a0 = 0xdf91cd5;
          auVar11 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
          if (auVar11 == (undefined1  [8])0x0) {
            auStack_138 = (undefined1  [8])0x0;
            plStack_130 = (long *)0x0;
            uStack_1a0 = 0xdf91cec;
            func_0x048b0d20(auStack_138);
            auVar11 = auStack_138;
            plVar27 = plStack_130;
          }
          lStack_108 = 0;
          puStack_100 = (undefined *)0x0;
          lStack_118 = 0;
          lStack_110 = 0;
          pcStack_128 = (code *)0x0;
          pcStack_120 = (code *)0x0;
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0xdf91d27;
          puStack_148 = (undefined *)auVar11;
          plStack_140 = plVar27;
          func_0x05d84ba0(auStack_138);
          uStack_1a0 = 0xdf91d39;
          func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
          if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0)))
          {
            if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
              bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
            }
            else {
              pppppppuVar20 = &pppppppuStack_b8;
              if (cStack_94 != '\x02') {
                pppppppuVar20 = pppppppuStack_b8;
              }
              uStack_1a0 = 0xdf91f96;
              lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
              bVar28 = lVar8 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xdf91d76;
            (*pcStack_180)(&uStack_198);
          }
          if (pcStack_120 != (code *)0x0) {
            uStack_1a0 = 0xdf91d87;
            (*pcStack_120)(auStack_138);
          }
          if (bVar28) {
            lVar8 = param_3[5];
            if ((ulong)*(uint *)(puVar13 + 3) != 0xffffffff) {
              uStack_1a0 = 0xdf91db4;
              (**(code **)(&UNK_0f4a7c18 + (ulong)*(uint *)(puVar13 + 3) * 8))(auStack_138,puVar13);
            }
            *puVar13 = 0;
            *(undefined4 *)(puVar13 + 3) = 3;
            pcStack_188 = (code *)&UNK_0df8cf20;
            pcStack_180 = (code *)0x0;
            uStack_178 = CONCAT35(uStack_178._5_3_,0x34d04a751);
            lStack_168 = 0;
            puStack_160 = &UNK_0df8ce40;
            lStack_118 = plStack_f0[4];
            auStack_138 = (undefined1  [8])*plStack_f0;
            plStack_130 = (long *)plStack_f0[1];
            pcStack_128 = (code *)plStack_f0[2];
            pcStack_120 = (code *)plStack_f0[3];
            plVar27 = (long *)plStack_f0[2];
            lStack_170 = lVar8;
            if (plVar27 == (long *)0x0) {
              pcStack_128 = (code *)0x0;
              uStack_198 = puVar13;
            }
            else {
              uStack_1a0 = 0xdf91e41;
              uStack_198 = puVar13;
              pcStack_128 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,3);
            }
            puStack_148 = &UNK_0f4a7ee0;
            uStack_1a0 = 0xdf91fd3;
            func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
            if (pcStack_180 != (code *)0x0) {
              uStack_1a0 = 0xdf91fe2;
              (*pcStack_180)(&uStack_198);
            }
          }
          else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                  (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
            uStack_198 = (undefined8 *)0x2300000149614c;
            uStack_1a0 = 0xdf91ea6;
            func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
            if (((ulong)uStack_198 & 0x80000000000000) != 0) {
              uStack_1a0 = 0xdf91ed1;
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
            }
            uStack_198 = (undefined8 *)0x0;
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1a0 = 0xdf91ff9;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_0df91ff9:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0xdf92020;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


