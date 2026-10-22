/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6720e0 (ELF vaddr 0xe5720e0)
 * Label: caller-of-callee
 * Body:  [[0e6720e0, 0e6729ea] [0e6729f0, 0e6738c0] [0e674800, 0e674a45]]
 * Ghidra: FUN_0e6720e0
 */


/* WARNING: Possible PIC construction at 0x0e67230c: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6720e0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong *puVar4;
  uint *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auVar9 [8];
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  code *pcVar15;
  code *pcVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *******pppppppuVar19;
  long *unaff_RBX;
  undefined8 ******ppppppuVar20;
  byte bVar21;
  uint uVar22;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar23;
  ulong uVar24;
  byte *pbVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined8 *unaff_R12;
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
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pcVar15 = (code *)param_3[7];
  if (pcVar15 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar29 = false;
    }
    else {
      uStack_1a0 = 0xe672130;
      (*(code *)param_3[3])(param_3);
      bVar29 = (undefined *)param_3[7] == &UNK_0e671350;
    }
    param_3[2] = &UNK_0e671430;
    *(undefined4 *)(param_3 + 4) = 0x6097fd1;
    param_3[3] = &UNK_0e6719b0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0xe672180;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_1a0 = 0xe6737b7;
      FUN_0eec74c0(0x38,0);
    }
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 6) = 0;
    *param_3 = puVar7;
    pcVar15 = (code *)&UNK_0e671350;
    param_3[7] = &UNK_0e671350;
    if (bVar29) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    plVar18 = param_5;
    if (lVar8 == 0) goto LAB_0e6721cd;
LAB_0e6721e3:
    bVar21 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    plVar18 = unaff_R15;
    if (lVar8 != 0) goto LAB_0e6721e3;
LAB_0e6721cd:
    plVar18 = (long *)param_3[5];
    uStack_1a0 = 0xe6721db;
    (*pcVar15)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0e6721e3;
    uStack_1a0 = 0xe672213;
    lVar8 = func_0x048aead0(plVar18);
    bVar21 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar21 & 1) == 0) goto SUB_0e674800;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (undefined8 *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0xe672335;
    func_0x048b1dc0(&uStack_198);
    puVar7 = uStack_198;
    plVar18 = plStack_190;
joined_r0x0e672340:
    if (puVar7 == (undefined8 *)0x0) {
      uStack_1a0 = 0xe67234e;
      puVar7 = (undefined8 *)func_0x048aead0(plVar18);
    }
  }
  else {
    puVar7 = (undefined8 *)param_3[6];
    if (puVar7 == (undefined8 *)0x0) {
      plVar18 = (long *)param_3[5];
      uStack_1a0 = 0xe67223d;
      (*(code *)param_3[7])(0,param_3,0);
      puVar7 = (undefined8 *)param_3[6];
      goto joined_r0x0e672340;
    }
  }
  unaff_R14 = (undefined8 *)puVar7[0xd];
  uStack_1a0 = 0xe672257;
  bVar21 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar21 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0xe672311;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = plVar18;
SUB_0e674800:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar7 = (undefined8 *)*param_3;
    puVar12 = puVar7;
    if (cVar2 == '\x02') {
      puVar12 = param_3;
    }
    if (puVar12 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x6097fd1) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar15 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe67485f;
        (*pcVar15)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar7 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe674881;
      puVar12 = (undefined8 *)func_0x0488e200(uVar10,lVar8,&UNK_06097fd1,puVar7);
    }
    lVar8 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe674891;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar21 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar21 | 1;
    pcVar15 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6748ae;
    uVar13 = (*pcVar15)(param_2);
    *(byte *)((long)param_2 + 9) = bVar21;
    if ((uVar13 >> 0x20 & 1) == 0) {
      uVar10 = param_3[5];
      uVar27 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6748e9;
      cVar2 = func_0x0e674a70(param_2,uVar10,puVar12,param_4,param_5,3);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe674916;
      cVar2 = func_0x0e674c80(param_2,uVar10,puVar12,param_4,param_5,3);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar28 = 3;
    }
    else {
      if (2 < (uint)uVar13) {
        lVar8 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe674a13;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar15 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe674a37;
        (*pcVar15)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar10 = param_3[5];
      uVar27 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x50) = uVar13;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe674977;
      cVar2 = func_0x0e674a70(param_2,uVar10,puVar12,param_4,param_5,uVar13 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(uint *)((long)register0x00000020 + -0x50) =
           (uint)*(byte *)((long)register0x00000020 + -0x50);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6749a9;
      cVar2 = func_0x0e674c80(param_2,uVar10,puVar12,param_4,param_5);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar28 = *(undefined4 *)((long)register0x00000020 + -0x50);
    }
    *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6749d5;
    func_0x0e674ea0(param_2,uVar10,puVar12,param_4,param_5,uVar28);
    return;
  }
  puStack_b0 = unaff_R14;
  if (bVar21 != 1) {
    uStack_198 = (undefined8 *)0x120000012f2525;
    uStack_1a0 = 0xe67237e;
    func_0x0ed5ffe0(*param_5,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0xe6723a1;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0xe672296;
  plStack_148 = param_2;
  uStack_e0 = param_4;
  func_0x0ed6d600(&lStack_68,*param_5);
  uStack_48 = param_3[5];
  lStack_b8 = *param_5;
  ppppppuVar20 = (undefined8 ******)((long)puStack_b0 + 9);
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar23 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar23 = ppppppuVar20;
  }
  uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_b0[2];
  }
  plStack_c0 = param_5;
  if (ppppppuVar23 == (undefined8 ******)0x0) {
    puStack_138 = (undefined *)((ulong)((uint)uVar13 & 0x7f) << 0x30);
  }
  else if (uVar13 < 0x80) {
    puStack_138 = (undefined *)(uVar13 << 0x30 | (ulong)ppppppuVar23 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar13 + 9;
    puStack_140 = (uint *)CONCAT71(puStack_140._1_7_,lVar8 == 0);
    uStack_1a0 = 0xe6723d8;
    puVar4 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar4 == (ulong *)0x0 && (char)puStack_140 == '\0') {
      uStack_1a0 = 0xe6737cc;
      FUN_0eec74c0(lVar8,8);
    }
    *puVar4 = uVar13;
    uStack_1a0 = 0xe672403;
    func_0x0eee2f00(puVar4 + 1,ppppppuVar23,uVar13);
    *(undefined1 *)((long)puVar4 + uVar13 + 8) = 0;
    puStack_138 = (undefined *)((ulong)(puVar4 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0xe67243c;
  puVar5 = (uint *)func_0x0ed6d180(lStack_b8,&puStack_138,0);
  plVar18 = plStack_148;
  if (((ulong)puStack_138 & 0x80000000000000) != 0) {
    uStack_1a0 = 0xe672470;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_138 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar7 = puStack_b0;
  puStack_138 = (undefined *)0x0;
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar23 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar23 = ppppppuVar20;
  }
  uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_b0[2];
  }
  uStack_1a0 = 0xe6724a6;
  cVar2 = (**(code **)(*plVar18 + 0xb8))(plVar18,ppppppuVar23,uVar13);
  if (cVar2 == '\0') {
    uStack_1a0 = 0xe6725d3;
    puStack_140 = puVar5;
    _auStack_128 = (*(code *)*puVar7)(uStack_48);
    uStack_1a0 = 0xe6725f9;
    func_0x0ed8bc80(&uStack_198,auStack_128,*(undefined1 *)(lStack_b8 + 0x2aa));
    plVar18 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_198 + 1);
    if (((ulong)uStack_198 & 1) != 0) {
      plVar18 = plStack_190;
      pcVar15 = pcStack_188;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (pcVar15 == (code *)0x0) {
      pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar18 & 0x7f) << 0x30);
    }
    else {
      lVar8 = (long)plVar18 + 9;
      uStack_1a0 = 0xe672648;
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (undefined8 *)0x0) {
        uStack_1a0 = 0xe6737de;
        FUN_0eec74c0(lVar8,8);
      }
      *puVar7 = plVar18;
      uStack_1a0 = 0xe672677;
      func_0x0eee2f00(puVar7 + 1,pcVar15,plVar18);
      *(undefined1 *)((long)(puVar7 + 1) + (long)plVar18) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar5 = puStack_140;
    plVar18 = plStack_148;
    uStack_1a0 = 0xe672811;
    func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0xe672840;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0xe672864;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    plStack_d0 = (long *)0x0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0xe6724c5;
    (**(code **)(*plVar18 + 0x80))(auStack_128,plVar18,0x40);
    cStack_158 = cStack_e8;
    if (cStack_e8 == '\0') {
      uStack_198 = (undefined8 *)auStack_128;
      plStack_190 = plStack_120;
      pcStack_188 = pcStack_118;
      pcStack_180 = pcStack_110;
      uStack_178 = lStack_108;
      lStack_170 = lStack_100;
      lStack_168 = lStack_f8;
      puStack_160 = puStack_f0;
      pppppppuStack_a8 = (undefined8 *******)puVar7[3];
      uStack_a0 = puVar7[2];
      if ((*(byte *)(puVar7 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar20;
        uStack_a0 = (ulong)(*(byte *)(puVar7 + 1) >> 1);
      }
      uStack_1a0 = 0xe672729;
      puStack_140 = puVar5;
      func_0x0470d9a0(auStack_128,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar18 = (long *)((ulong)auStack_128 >> 1 & 0x7f);
      pcVar15 = (code *)(auStack_128 + 1);
      if (((ulong)auStack_128 & 1) != 0) {
        plVar18 = plStack_120;
        pcVar15 = pcStack_118;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar15 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar18 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar18 + 9;
        uStack_1a0 = 0xe67277c;
        puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (undefined8 *)0x0) {
          uStack_1a0 = 0xe6737f0;
          FUN_0eec74c0(lVar8,8);
        }
        *puVar7 = plVar18;
        uStack_1a0 = 0xe6727ab;
        func_0x0eee2f00(puVar7 + 1,pcVar15,plVar18);
        *(undefined1 *)((long)(puVar7 + 1) + (long)plVar18) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      puVar5 = puStack_140;
      plVar18 = plStack_148;
      uStack_1a0 = 0xe6728e7;
      func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0xe672916;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_128 & 1) != 0) {
        uStack_1a0 = 0xe67293f;
        func_0x0412a280(pcStack_118,(ulong)auStack_128 & 0xfffffffffffffffe);
      }
      uStack_d8 = (undefined8 *)0x0;
      plStack_d0 = (long *)0x0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_188 = pcStack_118;
      uStack_198 = (undefined8 *)auStack_128;
      plStack_190 = plStack_120;
      plVar17 = (long *)(ulong)(byte)(auStack_128[0] >> 1);
      pcVar15 = (code *)((long)&uStack_198 + 1);
      if (((ulong)auStack_128 & 1) != 0) {
        plVar17 = plStack_120;
        pcVar15 = pcStack_118;
      }
      bVar21 = auStack_128[0];
      if (plVar17 != (long *)0x0) {
        uStack_1a0 = 0xe672518;
        plVar6 = (long *)func_0x0eee3290();
        pcVar16 = pcVar15;
        for (uVar13 = (ulong)plVar17 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *(code *)(*plVar6 + (ulong)(byte)*pcVar16 * 4);
          pcVar16 = pcVar16 + 1;
        }
        if ((long *)0x3 < plVar17) {
          do {
            *pcVar16 = *(code *)(*plVar6 + (ulong)(byte)*pcVar16 * 4);
            pcVar16[1] = *(code *)(*plVar6 + (ulong)(byte)pcVar16[1] * 4);
            pcVar16[2] = *(code *)(*plVar6 + (ulong)(byte)pcVar16[2] * 4);
            pcVar16[3] = *(code *)(*plVar6 + (ulong)(byte)pcVar16[3] * 4);
            pcVar16 = pcVar16 + 4;
          } while (pcVar16 != pcVar15 + (long)plVar17);
        }
        bVar21 = (byte)uStack_198;
      }
      if ((bVar21 & 1) == 0) {
        pcStack_c8 = pcStack_188;
        uStack_d8 = uStack_198;
        plStack_d0 = plStack_190;
      }
      else {
        uStack_1a0 = 0xe672897;
        func_0x0412e5e0(&uStack_d8,pcStack_188,plStack_190);
      }
    }
    lVar8 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0xe672979;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar8 != lStack_168) {
          uStack_1a0 = 0xe6729ac;
          func_0x048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar8;
        uStack_1a0 = 0xe6729c8;
        func_0x0412a280(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar16 = pcStack_188;
      pcVar15 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar16 != pcVar15; pcVar15 = pcVar15 + -0x50) {
          if ((pcVar15[-8] == (code)0x1) && (((byte)pcVar15[-0x30] & 1) != 0)) {
            uStack_1a0 = 0xe672a18;
            func_0x0412a280(*(undefined8 *)(pcVar15 + -0x20),
                            *(ulong *)(pcVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar16;
        uStack_1a0 = 0xe672a31;
        func_0x0412a280(pcStack_188,uStack_178 - (long)pcStack_188);
      }
    }
  }
  uStack_1a0 = 0xe672a48;
  (**(code **)(*plVar18 + 0xd0))(plVar18);
  lVar8 = *(long *)(puVar5 + 2);
  uVar22 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar22;
  if (puVar5[0x48] == 0) {
    uVar14 = puVar5[4];
LAB_0e672a8a:
    lVar1 = lVar8 + (ulong)uVar14 * 0x20;
    uVar13 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar14 * 0x20);
    if (uVar13 != 0xffffffff) {
      uStack_1a0 = 0xe672ab3;
      (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_198,lVar1 + -0x18);
      uVar14 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar14 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar22)
          && (uVar14 = puVar5[4], uVar22 == uVar14 - 1)) goto LAB_0e672a8a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0xe672af2;
    auStack_40 = (*(code *)*puStack_b0)();
    uVar10 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    plVar18 = (long *)((ulong)uStack_d8 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      plVar18 = plStack_d0;
      pcVar15 = pcStack_c8;
    }
    if (plVar18 == (long *)0x0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)plVar18 & 3);
      if (plVar18 < (long *)0x4) {
        uVar22 = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar27 = 0;
        do {
          uVar22 = ((int)(char)pcVar15[uVar27 + 3] ^
                   ((int)(char)pcVar15[uVar27 + 2] ^
                   ((int)(char)pcVar15[uVar27 + 1] ^
                   ((int)(char)pcVar15[uVar27] ^ uVar22) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar27 = uVar27 + 4;
        } while (((ulong)plVar18 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar13 != 0) {
        uVar24 = 0;
        do {
          uVar22 = ((int)(char)pcVar15[uVar24 + uVar27] ^ uVar22) * 0x1000193;
          uVar24 = uVar24 + 1;
        } while (uVar13 != uVar24);
      }
    }
    if (lVar8 == 0) {
      uStack_1a0 = 0xe672be1;
      lVar8 = func_0x048aead0(uVar10);
    }
    uStack_1a0 = 0xe672bf3;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar10,lVar8,uVar22,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_198 = (undefined8 *)0x0;
      plStack_190 = (long *)0x0;
      uStack_1a0 = 0xe672c21;
      FUN_048b0d20(&uStack_198);
      puStack_58 = uStack_198;
      plStack_50 = plStack_190;
      if (uStack_198 == (undefined8 *)0x0) {
        lVar8 = *plStack_c0;
        uStack_1a0 = 0xe6732e3;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1a0 = 0xe6732f7;
        uVar10 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        plVar18 = (long *)((ulong)uStack_d8 >> 1 & 0x7f);
        pcVar15 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          plVar18 = plStack_d0;
          pcVar15 = pcStack_c8;
        }
        uStack_1a0 = 0xe673323;
        uVar10 = func_0x0412f8c0(uVar10,pcVar15,plVar18);
        uStack_1a0 = 0xe673337;
        pbVar11 = (byte *)func_0x0412f8c0(uVar10,&UNK_0125506d,1);
        bVar29 = (*pbVar11 & 1) != 0;
        pbVar25 = pbVar11 + 1;
        if (bVar29) {
          pbVar25 = *(byte **)(pbVar11 + 0x10);
        }
        uVar13 = (ulong)(*pbVar11 >> 1);
        if (bVar29) {
          uVar13 = *(ulong *)(pbVar11 + 8);
        }
        auStack_128 = (undefined1  [8])0x0;
        uStack_1a0 = 0xe673369;
        func_0x0ee387f0(auStack_128,pbVar25,uVar13,1);
        uStack_1a0 = 0xe67337b;
        func_0x0ed5ffe0(lVar8,8,auStack_128);
        uStack_1a0 = 0xe673385;
        func_0x0ee386e0(auStack_128);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0xe6733a1;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0e673734;
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
    uStack_198 = (undefined8 *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0xe672c56;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0xe672c6e;
    func_0x05d9a920(&pppppppuStack_a8,&puStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe672c7d;
      (*pcStack_180)(&uStack_198);
    }
    bVar29 = (*(byte *)(puStack_b0 + 1) & 1) != 0;
    if (bVar29) {
      ppppppuVar20 = (undefined8 ******)puStack_b0[3];
    }
    uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
    if (bVar29) {
      uVar13 = puStack_b0[2];
    }
    if (uVar13 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar27 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
        do {
          uVar22 = ((int)*(char *)((long)ppppppuVar20 + uVar24 + 3) ^
                   ((int)*(char *)((long)ppppppuVar20 + uVar24 + 2) ^
                   ((int)*(char *)((long)ppppppuVar20 + uVar24 + 1) ^
                   ((int)*(char *)((long)ppppppuVar20 + uVar24) ^ uVar22) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar27 != 0) {
        uVar13 = 0;
        do {
          uVar22 = ((int)*(char *)((long)ppppppuVar20 + uVar13 + uVar24) ^ uVar22) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar27 != uVar13);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar7 = (undefined8 *)*param_3;
    puVar12 = puVar7;
    if (cVar2 == '\x02') {
      puVar12 = param_3;
    }
    if (puVar12 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x6097fd1) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1a0 = 0xe672d80;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar7 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_3;
      }
      uStack_1a0 = 0xe672da2;
      puVar12 = (undefined8 *)func_0x0488e200(uVar10,lVar8,&UNK_06097fd1,puVar7);
    }
    plVar18 = (long *)param_3[5];
    if (DAT_0f75ac00 == '\0') {
      uStack_1a0 = 0xe673801;
      iVar3 = func_0x04108328(&DAT_0f75ac00);
      if (iVar3 != 0) {
        uStack_1a0 = 0xe67380e;
        func_0x0e623900();
        uStack_1a0 = 0xe673828;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ab80,0xf53dab8);
        uStack_1a0 = 0xe673834;
        func_0x0410844d(&DAT_0f75ac00);
      }
    }
    plVar17 = (long *)(*plVar18 +
                      (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                             *(uint *)(_DAT_0f75ab80 + 4)) * 8);
    do {
      lVar8 = *plVar17;
      if (lVar8 == -1) {
        plVar6 = (long *)plVar18[4];
        plVar17 = plVar6;
        goto LAB_0e672e14;
      }
      plVar17 = (long *)(plVar18[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f75ab80 + 4));
    plVar6 = (long *)plVar18[4];
LAB_0e672e14:
    if (plVar17 == plVar6) {
      puVar26 = &DAT_0f75ab80;
    }
    else {
      puVar26 = (undefined *)plVar17[2];
    }
    uStack_1a0 = 0xe672e36;
    auVar9 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar22,1);
    plStack_130 = plVar18;
    if (auVar9 == (undefined1  [8])0x0) {
      auStack_128 = (undefined1  [8])0x0;
      plStack_120 = (long *)0x0;
      uStack_1a0 = 0xe672e4d;
      FUN_048b0d20(auStack_128);
      auVar9 = auStack_128;
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
    uStack_1a0 = 0xe672e8b;
    puStack_138 = (undefined *)auVar9;
    func_0x05d84ba0(auStack_128);
    uStack_1a0 = 0xe672e9d;
    func_0x05d9a920(&uStack_198,&puStack_138,auStack_128);
    if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
        bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar19 = pppppppuStack_a8;
        if (cStack_84 == '\x02') {
          pppppppuVar19 = &pppppppuStack_a8;
        }
        uStack_1a0 = 0xe67377e;
        lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
        bVar29 = lVar8 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe672edb;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_110 != (code *)0x0) {
      uStack_1a0 = 0xe672eef;
      (*pcStack_110)(auStack_128);
    }
    if (bVar29) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar12 + 6) != 0xffffffff) {
        uStack_1a0 = 0xe672f1c;
        (**(code **)(&UNK_0f4c2f78 + (ulong)*(uint *)(puVar12 + 6) * 8))(auStack_128,puVar12);
      }
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined4 *)(puVar12 + 6) = 0;
      pcStack_188 = (code *)&UNK_0e623c00;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x3c6800b1a);
      lStack_168 = 0;
      puStack_160 = &UNK_0e623b20;
      lStack_108 = plStack_c0[4];
      auStack_128 = (undefined1  [8])*plStack_c0;
      plStack_120 = (long *)plStack_c0[1];
      pcStack_118 = (code *)plStack_c0[2];
      pcStack_110 = (code *)plStack_c0[3];
      plVar18 = (long *)plStack_c0[2];
      lStack_170 = lVar8;
      if (plVar18 == (long *)0x0) {
        pcStack_118 = (code *)0x0;
        uStack_198 = puVar12;
      }
      else {
        uStack_1a0 = 0xe672faf;
        uStack_198 = puVar12;
        pcStack_118 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,0);
      }
      puStack_138 = &UNK_0f4c3af0;
      uStack_1a0 = 0xe6732a9;
      func_0x0ed75bc0(&puStack_138,plStack_148,&uStack_198,uStack_e0,auStack_128);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe6732bc;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar18 = (long *)param_3[5];
      if (DAT_0f75ae28 == '\0') {
        uStack_1a0 = 0xe673845;
        iVar3 = func_0x04108328(&DAT_0f75ae28);
        if (iVar3 != 0) {
          uStack_1a0 = 0xe673852;
          func_0x0e628260();
          uStack_1a0 = 0xe67386c;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ada8,0xf53dab8);
          uStack_1a0 = 0xe673878;
          func_0x0410844d(&DAT_0f75ae28);
        }
      }
      plVar17 = (long *)(*plVar18 +
                        (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                               *(uint *)(_DAT_0f75ada8 + 4)) * 8);
      do {
        lVar8 = *plVar17;
        if (lVar8 == -1) {
          plVar6 = (long *)plVar18[4];
          plVar17 = plVar6;
          goto LAB_0e673024;
        }
        plVar17 = (long *)(plVar18[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f75ada8 + 4));
      plVar6 = (long *)plVar18[4];
LAB_0e673024:
      if (plVar17 == plVar6) {
        puVar26 = &DAT_0f75ada8;
      }
      else {
        puVar26 = (undefined *)plVar17[2];
      }
      uStack_1a0 = 0xe673082;
      auVar9 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar22,1);
      if (auVar9 == (undefined1  [8])0x0) {
        auStack_128 = (undefined1  [8])0x0;
        plStack_120 = (long *)0x0;
        uStack_1a0 = 0xe673099;
        FUN_048b0d20(auStack_128);
        auVar9 = auStack_128;
        plVar18 = plStack_120;
      }
      lStack_f8 = 0;
      puStack_f0 = (undefined *)0x0;
      lStack_108 = 0;
      lStack_100 = 0;
      pcStack_118 = (code *)0x0;
      pcStack_110 = (code *)0x0;
      auStack_128 = (undefined1  [8])0x0;
      plStack_120 = (long *)0x0;
      uStack_1a0 = 0xe6730d7;
      puStack_138 = (undefined *)auVar9;
      plStack_130 = plVar18;
      func_0x05d84ba0(auStack_128);
      uStack_1a0 = 0xe6730e9;
      func_0x05d9a920(&uStack_198,&puStack_138,auStack_128);
      if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
          bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar19 = pppppppuStack_a8;
          if (cStack_84 == '\x02') {
            pppppppuVar19 = &pppppppuStack_a8;
          }
          uStack_1a0 = 0xe67379c;
          lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
          bVar29 = lVar8 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe673127;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_110 != (code *)0x0) {
        uStack_1a0 = 0xe67313b;
        (*pcStack_110)(auStack_128);
      }
      if (bVar29) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar12 + 6) != 0xffffffff) {
          uStack_1a0 = 0xe673168;
          (**(code **)(&UNK_0f4c2f78 + (ulong)*(uint *)(puVar12 + 6) * 8))(auStack_128,puVar12);
        }
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = 0;
        puVar12[1] = 0;
        *(undefined4 *)(puVar12 + 6) = 1;
        pcStack_188 = (code *)&UNK_0e628560;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x37a7ae66c);
        lStack_168 = 0;
        puStack_160 = &UNK_0e628480;
        lStack_108 = plStack_c0[4];
        auStack_128 = (undefined1  [8])*plStack_c0;
        plStack_120 = (long *)plStack_c0[1];
        pcStack_118 = (code *)plStack_c0[2];
        pcStack_110 = (code *)plStack_c0[3];
        plVar18 = (long *)plStack_c0[2];
        lStack_170 = lVar8;
        if (plVar18 == (long *)0x0) {
          pcStack_118 = (code *)0x0;
          uStack_198 = puVar12;
        }
        else {
          uStack_1a0 = 0xe6731fe;
          uStack_198 = puVar12;
          pcStack_118 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,1);
        }
        puStack_138 = &UNK_0f4c3b70;
        uStack_1a0 = 0xe673664;
        func_0x0ed75bc0(&puStack_138,plStack_148,&uStack_198,uStack_e0,auStack_128);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe673677;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar18 = (long *)param_3[5];
        if (DAT_0f75b3f0 == '\0') {
          uStack_1a0 = 0xe673889;
          iVar3 = func_0x04108328(&DAT_0f75b3f0);
          if (iVar3 != 0) {
            uStack_1a0 = 0xe673896;
            func_0x0e637640();
            uStack_1a0 = 0xe6738b0;
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b370,0xf53dab8);
            uStack_1a0 = 0xe6738bc;
            func_0x0410844d(&DAT_0f75b3f0);
          }
        }
        plVar17 = (long *)(*plVar18 +
                          (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                                 *(uint *)(_DAT_0f75b370 + 4)) * 8);
        do {
          lVar8 = *plVar17;
          if (lVar8 == -1) {
            plVar6 = (long *)plVar18[4];
            plVar17 = plVar6;
            goto LAB_0e6733ba;
          }
          plVar17 = (long *)(plVar18[3] + lVar8 * 0x18);
        } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f75b370 + 4));
        plVar6 = (long *)plVar18[4];
LAB_0e6733ba:
        if (plVar17 == plVar6) {
          puVar26 = &DAT_0f75b370;
        }
        else {
          puVar26 = (undefined *)plVar17[2];
        }
        uStack_1a0 = 0xe673418;
        auVar9 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar22,1);
        if (auVar9 == (undefined1  [8])0x0) {
          auStack_128 = (undefined1  [8])0x0;
          plStack_120 = (long *)0x0;
          uStack_1a0 = 0xe67342f;
          FUN_048b0d20(auStack_128);
          auVar9 = auStack_128;
          plVar18 = plStack_120;
        }
        lStack_f8 = 0;
        puStack_f0 = (undefined *)0x0;
        lStack_108 = 0;
        lStack_100 = 0;
        pcStack_118 = (code *)0x0;
        pcStack_110 = (code *)0x0;
        auStack_128 = (undefined1  [8])0x0;
        plStack_120 = (long *)0x0;
        uStack_1a0 = 0xe67346d;
        puStack_138 = (undefined *)auVar9;
        plStack_130 = plVar18;
        func_0x05d84ba0(auStack_128);
        uStack_1a0 = 0xe67347f;
        func_0x05d9a920(&uStack_198,&puStack_138,auStack_128);
        if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
          if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
            bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
          }
          else {
            pppppppuVar19 = &pppppppuStack_a8;
            if (cStack_84 != '\x02') {
              pppppppuVar19 = pppppppuStack_a8;
            }
            uStack_1a0 = 0xe6736ce;
            lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
            bVar29 = lVar8 != 0;
          }
        }
        else {
          bVar29 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe6734bc;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_110 != (code *)0x0) {
          uStack_1a0 = 0xe6734d0;
          (*pcStack_110)(auStack_128);
        }
        if (bVar29) {
          lVar8 = param_3[5];
          if ((ulong)*(uint *)(puVar12 + 6) != 0xffffffff) {
            uStack_1a0 = 0xe6734fc;
            (**(code **)(&UNK_0f4c2f78 + (ulong)*(uint *)(puVar12 + 6) * 8))(auStack_128,puVar12);
          }
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          *(undefined4 *)(puVar12 + 6) = 2;
          pcStack_188 = (code *)&UNK_0e637940;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x307e8005f);
          lStack_168 = 0;
          puStack_160 = &UNK_0e637860;
          lStack_108 = plStack_c0[4];
          auStack_128 = (undefined1  [8])*plStack_c0;
          plStack_120 = (long *)plStack_c0[1];
          pcStack_118 = (code *)plStack_c0[2];
          pcStack_110 = (code *)plStack_c0[3];
          plVar18 = (long *)plStack_c0[2];
          lStack_170 = lVar8;
          if (plVar18 == (long *)0x0) {
            pcStack_118 = (code *)0x0;
            uStack_198 = puVar12;
          }
          else {
            uStack_1a0 = 0xe673592;
            uStack_198 = puVar12;
            pcStack_118 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,2);
          }
          puStack_138 = &UNK_0f4c4f18;
          uStack_1a0 = 0xe67370e;
          func_0x0ed75bc0(&puStack_138,plStack_148,&uStack_198,uStack_e0,auStack_128);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xe67371d;
            (*pcStack_180)(&uStack_198);
          }
        }
        else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
          uStack_198 = (undefined8 *)0x2300000149614c;
          uStack_1a0 = 0xe6735f7;
          func_0x0ed5ffe0(*plStack_c0,8,&uStack_198);
          if (((ulong)uStack_198 & 0x80000000000000) != 0) {
            uStack_1a0 = 0xe673622;
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
          }
          uStack_198 = (undefined8 *)0x0;
        }
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1a0 = 0xe673734;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_0e673734:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0xe67375b;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


