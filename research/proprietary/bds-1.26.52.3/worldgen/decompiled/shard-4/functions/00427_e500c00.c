/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe600c00 (ELF vaddr 0xe500c00)
 * Label: caller-of-callee
 * Body:  [[0e600c00, 0e60152a] [0e601530, 0e60238b] [0e6049a0, 0e604be5]]
 * Ghidra: FUN_0e600c00
 */


/* WARNING: Possible PIC construction at 0x0e600e55: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e600c00(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
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
  undefined8 uVar9;
  undefined1 auVar10 [8];
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
      uStack_1a0 = 0xe600c50;
      (*(code *)param_3[3])(param_3);
      bVar29 = (undefined *)param_3[7] == &UNK_0e5fdfc0;
    }
    param_3[2] = &UNK_0e5fe0a0;
    *(undefined4 *)(param_3 + 4) = 0x9f6a227d;
    param_3[3] = &UNK_0e5fe2e0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0xe600ca0;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_1a0 = 0xe6022c6;
      func_0x0eec74c0(0xc0,0);
    }
    *(undefined8 *)((long)puVar7 + 0xac) = 0;
    *(undefined8 *)((long)puVar7 + 0xb4) = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *param_3 = puVar7;
    pcVar15 = (code *)&UNK_0e5fdfc0;
    param_3[7] = &UNK_0e5fdfc0;
    if (bVar29) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    plVar18 = param_5;
    if (lVar8 == 0) goto LAB_0e600d16;
LAB_0e600d2c:
    bVar21 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    plVar18 = unaff_R15;
    if (lVar8 != 0) goto LAB_0e600d2c;
LAB_0e600d16:
    plVar18 = (long *)param_3[5];
    uStack_1a0 = 0xe600d24;
    (*pcVar15)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0e600d2c;
    uStack_1a0 = 0xe600d5c;
    lVar8 = func_0x048aead0(plVar18);
    bVar21 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar21 & 1) == 0) goto SUB_0e6049a0;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (undefined8 *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0xe600e7e;
    func_0x048b1dc0(&uStack_198);
    puVar7 = uStack_198;
    plVar18 = plStack_190;
joined_r0x0e600e89:
    if (puVar7 == (undefined8 *)0x0) {
      uStack_1a0 = 0xe600e97;
      puVar7 = (undefined8 *)func_0x048aead0(plVar18);
    }
  }
  else {
    puVar7 = (undefined8 *)param_3[6];
    if (puVar7 == (undefined8 *)0x0) {
      plVar18 = (long *)param_3[5];
      uStack_1a0 = 0xe600d86;
      (*(code *)param_3[7])(0,param_3,0);
      puVar7 = (undefined8 *)param_3[6];
      goto joined_r0x0e600e89;
    }
  }
  unaff_R14 = (undefined8 *)puVar7[0xd];
  uStack_1a0 = 0xe600da0;
  bVar21 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar21 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0xe600e5a;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = plVar18;
SUB_0e6049a0:
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
    if (puVar12 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x6095dd83) {
      uVar9 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar15 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6049ff;
        (*pcVar15)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar7 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe604a21;
      puVar12 = (undefined8 *)func_0x0488e200(uVar9,lVar8,0x9f6a227d,puVar7);
    }
    lVar8 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe604a31;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar21 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar21 | 1;
    pcVar15 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe604a4e;
    uVar13 = (*pcVar15)(param_2);
    *(byte *)((long)param_2 + 9) = bVar21;
    if ((uVar13 >> 0x20 & 1) == 0) {
      uVar9 = param_3[5];
      uVar27 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe604a89;
      cVar2 = func_0x0e604c10(param_2,uVar9,puVar12,param_4,param_5,3);
      if (cVar2 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe604ab6;
      cVar2 = func_0x0e604e50(param_2,uVar9,puVar12,param_4,param_5,3);
      if (cVar2 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      uVar28 = 3;
    }
    else {
      if (2 < (uint)uVar13) {
        lVar8 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe604bb3;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar15 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe604bd7;
        (*pcVar15)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar9 = param_3[5];
      uVar27 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x50) = uVar13;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe604b17;
      cVar2 = func_0x0e604c10(param_2,uVar9,puVar12,param_4,param_5,uVar13 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      *(uint *)((long)register0x00000020 + -0x50) =
           (uint)*(byte *)((long)register0x00000020 + -0x50);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe604b49;
      cVar2 = func_0x0e604e50(param_2,uVar9,puVar12,param_4,param_5);
      if (cVar2 != '\0') {
        return;
      }
      uVar9 = param_3[5];
      uVar28 = *(undefined4 *)((long)register0x00000020 + -0x50);
    }
    *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe604b75;
    func_0x0e605080(param_2,uVar9,puVar12,param_4,param_5,uVar28);
    return;
  }
  puStack_b0 = unaff_R14;
  if (bVar21 != 1) {
    uStack_198 = (undefined8 *)0x120000012f2525;
    uStack_1a0 = 0xe600ec7;
    func_0x0ed5ffe0(*param_5,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0xe600eea;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0xe600ddf;
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
    uStack_1a0 = 0xe600f21;
    puVar4 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar4 == (ulong *)0x0 && (char)puStack_140 == '\0') {
      uStack_1a0 = 0xe6022db;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar4 = uVar13;
    uStack_1a0 = 0xe600f4c;
    func_0x0eee2f00(puVar4 + 1,ppppppuVar23,uVar13);
    *(undefined1 *)((long)puVar4 + uVar13 + 8) = 0;
    puStack_138 = (undefined *)((ulong)(puVar4 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0xe600f85;
  puVar5 = (uint *)func_0x0ed6d180(lStack_b8,&puStack_138,0);
  plVar18 = plStack_148;
  if (((ulong)puStack_138 & 0x80000000000000) != 0) {
    uStack_1a0 = 0xe600fb9;
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
  uStack_1a0 = 0xe600fef;
  cVar2 = (**(code **)(*plVar18 + 0xb8))(plVar18,ppppppuVar23,uVar13);
  if (cVar2 == '\0') {
    uStack_1a0 = 0xe601113;
    puStack_140 = puVar5;
    _auStack_128 = (*(code *)*puVar7)(uStack_48);
    uStack_1a0 = 0xe601139;
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
      uStack_1a0 = 0xe601188;
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (undefined8 *)0x0) {
        uStack_1a0 = 0xe6022ed;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = plVar18;
      uStack_1a0 = 0xe6011b7;
      func_0x0eee2f00(puVar7 + 1,pcVar15,plVar18);
      *(undefined1 *)((long)(puVar7 + 1) + (long)plVar18) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar5 = puStack_140;
    plVar18 = plStack_148;
    uStack_1a0 = 0xe601351;
    func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0xe601380;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0xe6013a4;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    plStack_d0 = (long *)0x0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0xe60100e;
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
      uStack_1a0 = 0xe601269;
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
        uStack_1a0 = 0xe6012bc;
        puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (undefined8 *)0x0) {
          uStack_1a0 = 0xe6022ff;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = plVar18;
        uStack_1a0 = 0xe6012eb;
        func_0x0eee2f00(puVar7 + 1,pcVar15,plVar18);
        *(undefined1 *)((long)(puVar7 + 1) + (long)plVar18) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      puVar5 = puStack_140;
      plVar18 = plStack_148;
      uStack_1a0 = 0xe601427;
      func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0xe601456;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_128 & 1) != 0) {
        uStack_1a0 = 0xe60147f;
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
        uStack_1a0 = 0xe60105d;
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
        uStack_1a0 = 0xe6013d7;
        func_0x0412e5e0(&uStack_d8,pcStack_188,plStack_190);
      }
    }
    lVar8 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0xe6014b9;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar8 != lStack_168) {
          uStack_1a0 = 0xe6014ec;
          FUN_048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar8;
        uStack_1a0 = 0xe601508;
        func_0x0412a280(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar16 = pcStack_188;
      pcVar15 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar16 != pcVar15; pcVar15 = pcVar15 + -0x50) {
          if ((pcVar15[-8] == (code)0x1) && (((byte)pcVar15[-0x30] & 1) != 0)) {
            uStack_1a0 = 0xe601558;
            func_0x0412a280(*(undefined8 *)(pcVar15 + -0x20),
                            *(ulong *)(pcVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar16;
        uStack_1a0 = 0xe601571;
        func_0x0412a280(pcStack_188,uStack_178 - (long)pcStack_188);
      }
    }
  }
  uStack_1a0 = 0xe601588;
  (**(code **)(*plVar18 + 0xd0))(plVar18);
  lVar8 = *(long *)(puVar5 + 2);
  uVar22 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar22;
  if (puVar5[0x48] == 0) {
    uVar14 = puVar5[4];
LAB_0e6015ca:
    lVar1 = lVar8 + (ulong)uVar14 * 0x20;
    uVar13 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar14 * 0x20);
    if (uVar13 != 0xffffffff) {
      uStack_1a0 = 0xe6015f3;
      (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_198,lVar1 + -0x18);
      uVar14 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar14 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar22)
          && (uVar14 = puVar5[4], uVar22 == uVar14 - 1)) goto LAB_0e6015ca;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0xe601632;
    auStack_40 = (*(code *)*puStack_b0)();
    uVar9 = auStack_40._8_8_;
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
      uStack_1a0 = 0xe601721;
      lVar8 = func_0x048aead0(uVar9);
    }
    uStack_1a0 = 0xe601733;
    puStack_58 = (undefined8 *)FUN_048b0c90(uVar9,lVar8,uVar22,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_198 = (undefined8 *)0x0;
      plStack_190 = (long *)0x0;
      uStack_1a0 = 0xe601761;
      func_0x048b0d20(&uStack_198);
      puStack_58 = uStack_198;
      plStack_50 = plStack_190;
      if (uStack_198 == (undefined8 *)0x0) {
        lVar8 = *plStack_c0;
        uStack_1a0 = 0xe601de3;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1a0 = 0xe601df7;
        uVar9 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        plVar18 = (long *)((ulong)uStack_d8 >> 1 & 0x7f);
        pcVar15 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          plVar18 = plStack_d0;
          pcVar15 = pcStack_c8;
        }
        uStack_1a0 = 0xe601e23;
        uVar9 = func_0x0412f8c0(uVar9,pcVar15,plVar18);
        uStack_1a0 = 0xe601e37;
        pbVar11 = (byte *)func_0x0412f8c0(uVar9,&UNK_0125506d,1);
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
        uStack_1a0 = 0xe601e69;
        func_0x0ee387f0(auStack_128,pbVar25,uVar13,1);
        uStack_1a0 = 0xe601e7b;
        func_0x0ed5ffe0(lVar8,8,auStack_128);
        uStack_1a0 = 0xe601e85;
        func_0x0ee386e0(auStack_128);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0xe601ea1;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0e602244;
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
    uStack_1a0 = 0xe601796;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0xe6017ae;
    func_0x05d9a920(&pppppppuStack_a8,&puStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe6017bd;
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
    if (puVar12 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x6095dd83) {
      uVar9 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1a0 = 0xe6018c0;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar7 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_3;
      }
      uStack_1a0 = 0xe6018e2;
      puVar12 = (undefined8 *)func_0x0488e200(uVar9,lVar8,0x9f6a227d,puVar7);
    }
    plVar18 = (long *)param_3[5];
    uStack_1a0 = 0xe6018f2;
    uVar9 = func_0x0b6ac620(plVar18);
    uStack_1a0 = 0xe601905;
    auVar10 = (undefined1  [8])FUN_048b0c90(plVar18,uVar9,uVar22,1);
    plStack_130 = plVar18;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_128 = (undefined1  [8])0x0;
      plStack_120 = (long *)0x0;
      uStack_1a0 = 0xe60191c;
      func_0x048b0d20(auStack_128);
      auVar10 = auStack_128;
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
    uStack_1a0 = 0xe60195a;
    puStack_138 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_128);
    uStack_1a0 = 0xe60196c;
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
        uStack_1a0 = 0xe60228e;
        lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
        bVar29 = lVar8 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe6019a9;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_110 != (code *)0x0) {
      uStack_1a0 = 0xe6019bd;
      (*pcStack_110)(auStack_128);
    }
    if (bVar29) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar12 + 0x17) != 0xffffffff) {
        uStack_1a0 = 0xe6019ec;
        (**(code **)(&UNK_0f4c2320 + (ulong)*(uint *)(puVar12 + 0x17) * 8))(auStack_128,puVar12);
      }
      *(undefined8 *)((long)puVar12 + 0xac) = 0;
      *(undefined8 *)((long)puVar12 + 0xb4) = 0;
      puVar12[0x14] = 0;
      puVar12[0x15] = 0;
      puVar12[0x12] = 0;
      puVar12[0x13] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      pcStack_188 = (code *)&UNK_0b6ac3a0;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x3927cfe15);
      lStack_168 = 0;
      puStack_160 = &UNK_0b6ac380;
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
        uStack_1a0 = 0xe601aa8;
        uStack_198 = puVar12;
        pcStack_118 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,0);
      }
      puStack_138 = &UNK_0f2ce560;
      uStack_1a0 = 0xe601da9;
      func_0x0ed75bc0(&puStack_138,plStack_148,&uStack_198,uStack_e0,auStack_128);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe601dbc;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar18 = (long *)param_3[5];
      if (DAT_0f75a010 == '\0') {
        uStack_1a0 = 0xe602310;
        iVar3 = FUN_04108328(&DAT_0f75a010);
        if (iVar3 != 0) {
          uStack_1a0 = 0xe60231d;
          func_0x0e5fe4a0();
          uStack_1a0 = 0xe602337;
          __cxa_atexit(&UNK_048ae800,&DAT_0f759f90,0xf53dab8);
          uStack_1a0 = 0xe602343;
          func_0x0410844d(&DAT_0f75a010);
        }
      }
      plVar17 = (long *)(*plVar18 +
                        (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                               *(uint *)(_DAT_0f759f90 + 4)) * 8);
      do {
        lVar8 = *plVar17;
        if (lVar8 == -1) {
          plVar6 = (long *)plVar18[4];
          plVar17 = plVar6;
          goto LAB_0e601b24;
        }
        plVar17 = (long *)(plVar18[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f759f90 + 4));
      plVar6 = (long *)plVar18[4];
LAB_0e601b24:
      if (plVar17 == plVar6) {
        puVar26 = &DAT_0f759f90;
      }
      else {
        puVar26 = (undefined *)plVar17[2];
      }
      uStack_1a0 = 0xe601b82;
      auVar10 = (undefined1  [8])FUN_048b0c90(plVar18,puVar26,uVar22,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_128 = (undefined1  [8])0x0;
        plStack_120 = (long *)0x0;
        uStack_1a0 = 0xe601b99;
        func_0x048b0d20(auStack_128);
        auVar10 = auStack_128;
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
      uStack_1a0 = 0xe601bd7;
      puStack_138 = (undefined *)auVar10;
      plStack_130 = plVar18;
      func_0x05d84ba0(auStack_128);
      uStack_1a0 = 0xe601be9;
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
          uStack_1a0 = 0xe6022ab;
          lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
          bVar29 = lVar8 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe601c27;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_110 != (code *)0x0) {
        uStack_1a0 = 0xe601c3b;
        (*pcStack_110)(auStack_128);
      }
      if (bVar29) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar12 + 0x17) != 0xffffffff) {
          uStack_1a0 = 0xe601c6b;
          (**(code **)(&UNK_0f4c2320 + (ulong)*(uint *)(puVar12 + 0x17) * 8))(auStack_128,puVar12);
        }
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(undefined4 *)(puVar12 + 0x17) = 1;
        pcStack_188 = (code *)&UNK_0e5fe870;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x3ae3071c0);
        lStack_168 = 0;
        puStack_160 = &UNK_0e5fe6e0;
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
          uStack_1a0 = 0xe601d04;
          uStack_198 = puVar12;
          pcStack_118 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,1);
        }
        puStack_138 = &UNK_0f4c2988;
        uStack_1a0 = 0xe602174;
        func_0x0ed75bc0(&puStack_138,plStack_148,&uStack_198,uStack_e0,auStack_128);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe602187;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar18 = (long *)param_3[5];
        if (DAT_0f759ea0 == '\0') {
          uStack_1a0 = 0xe602354;
          iVar3 = FUN_04108328(&DAT_0f759ea0);
          if (iVar3 != 0) {
            uStack_1a0 = 0xe602361;
            func_0x0e5f88e0();
            uStack_1a0 = 0xe60237b;
            __cxa_atexit(&UNK_048ae800,&DAT_0f759e20,0xf53dab8);
            uStack_1a0 = 0xe602387;
            func_0x0410844d(&DAT_0f759ea0);
          }
        }
        plVar17 = (long *)(*plVar18 +
                          (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                                 *(uint *)(_DAT_0f759e20 + 4)) * 8);
        do {
          lVar8 = *plVar17;
          if (lVar8 == -1) {
            plVar6 = (long *)plVar18[4];
            plVar17 = plVar6;
            goto LAB_0e601eb9;
          }
          plVar17 = (long *)(plVar18[3] + lVar8 * 0x18);
        } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f759e20 + 4));
        plVar6 = (long *)plVar18[4];
LAB_0e601eb9:
        if (plVar17 == plVar6) {
          puVar26 = &DAT_0f759e20;
        }
        else {
          puVar26 = (undefined *)plVar17[2];
        }
        uStack_1a0 = 0xe601f17;
        auVar10 = (undefined1  [8])FUN_048b0c90(plVar18,puVar26,uVar22,1);
        if (auVar10 == (undefined1  [8])0x0) {
          auStack_128 = (undefined1  [8])0x0;
          plStack_120 = (long *)0x0;
          uStack_1a0 = 0xe601f2e;
          func_0x048b0d20(auStack_128);
          auVar10 = auStack_128;
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
        uStack_1a0 = 0xe601f6c;
        puStack_138 = (undefined *)auVar10;
        plStack_130 = plVar18;
        func_0x05d84ba0(auStack_128);
        uStack_1a0 = 0xe601f7e;
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
            uStack_1a0 = 0xe6021de;
            lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
            bVar29 = lVar8 != 0;
          }
        }
        else {
          bVar29 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe601fbb;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_110 != (code *)0x0) {
          uStack_1a0 = 0xe601fcf;
          (*pcStack_110)(auStack_128);
        }
        if (bVar29) {
          lVar8 = param_3[5];
          if ((ulong)*(uint *)(puVar12 + 0x17) != 0xffffffff) {
            uStack_1a0 = 0xe601ffe;
            (**(code **)(&UNK_0f4c2320 + (ulong)*(uint *)(puVar12 + 0x17) * 8))(auStack_128,puVar12)
            ;
          }
          puVar12[2] = 0;
          puVar12[3] = 0;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[4] = 0;
          *(undefined4 *)(puVar12 + 4) = 0x3f800000;
          *(undefined4 *)(puVar12 + 0x17) = 2;
          pcStack_188 = (code *)&UNK_0e5f8bf0;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x305f73d8a);
          lStack_168 = 0;
          puStack_160 = &UNK_0e5f8b10;
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
            uStack_1a0 = 0xe6020a2;
            uStack_198 = puVar12;
            pcStack_118 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,2);
          }
          puStack_138 = &UNK_0f4c2a88;
          uStack_1a0 = 0xe60221e;
          func_0x0ed75bc0(&puStack_138,plStack_148,&uStack_198,uStack_e0,auStack_128);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xe60222d;
            (*pcStack_180)(&uStack_198);
          }
        }
        else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
          uStack_198 = (undefined8 *)0x2300000149614c;
          uStack_1a0 = 0xe602107;
          func_0x0ed5ffe0(*plStack_c0,8,&uStack_198);
          if (((ulong)uStack_198 & 0x80000000000000) != 0) {
            uStack_1a0 = 0xe602132;
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
          }
          uStack_198 = (undefined8 *)0x0;
        }
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1a0 = 0xe602244;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_0e602244:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0xe60226b;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


