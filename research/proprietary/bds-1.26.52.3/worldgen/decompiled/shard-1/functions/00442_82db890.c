/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83db890 (ELF vaddr 0x82db890)
 * Label: caller-of-callee
 * Body:  [[083db890, 083dc18a] [083dc190, 083dcd0d] [083ddb80, 083ddd62]]
 * Ghidra: FUN_083db890
 */


/* WARNING: Possible PIC construction at 0x083dbab4: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_083db890(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
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
  undefined *puVar25;
  byte *pbVar26;
  ulong uVar27;
  undefined1 uVar28;
  undefined8 *unaff_R12;
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
      uStack_1b0 = 0x83db8e0;
      (*(code *)param_3[3])(param_3);
      bVar29 = (undefined *)param_3[7] == &UNK_083db2c0;
    }
    param_3[2] = &UNK_083db3a0;
    *(undefined4 *)(param_3 + 4) = 0x628b5c5a;
    param_3[3] = &UNK_083db4e0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0x83db930;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x14);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_1b0 = 0x83dcc48;
      func_0x0eec74c0(0x14,0);
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 2) = 0;
    *param_3 = puVar7;
    pcVar15 = (code *)&UNK_083db2c0;
    param_3[7] = &UNK_083db2c0;
    if (bVar29) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    plVar18 = param_5;
    if (lVar8 == 0) goto LAB_083db975;
LAB_083db98b:
    bVar21 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    plVar18 = unaff_R15;
    if (lVar8 != 0) goto LAB_083db98b;
LAB_083db975:
    plVar18 = (long *)param_3[5];
    uStack_1b0 = 0x83db983;
    (*pcVar15)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_083db98b;
    uStack_1b0 = 0x83db9bb;
    lVar8 = FUN_048aead0(plVar18);
    bVar21 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar21 & 1) == 0) goto SUB_083ddb80;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (undefined8 *)0x0;
    plStack_1a0 = (long *)0x0;
    uStack_1b0 = 0x83dbadd;
    func_0x048b1dc0(&uStack_1a8);
    puVar7 = uStack_1a8;
    plVar18 = plStack_1a0;
joined_r0x083dbae8:
    if (puVar7 == (undefined8 *)0x0) {
      uStack_1b0 = 0x83dbaf6;
      puVar7 = (undefined8 *)FUN_048aead0(plVar18);
    }
  }
  else {
    puVar7 = (undefined8 *)param_3[6];
    if (puVar7 == (undefined8 *)0x0) {
      plVar18 = (long *)param_3[5];
      uStack_1b0 = 0x83db9e5;
      (*(code *)param_3[7])(0,param_3,0);
      puVar7 = (undefined8 *)param_3[6];
      goto joined_r0x083dbae8;
    }
  }
  unaff_R14 = (undefined8 *)puVar7[0xd];
  uStack_1b0 = 0x83db9ff;
  bVar21 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar21 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0x83dbab9;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = plVar18;
SUB_083ddb80:
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
    if (puVar12 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x628b5c5a) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar15 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x83ddbdf;
        (*pcVar15)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar7 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x83ddc01;
      puVar12 = (undefined8 *)FUN_0488e200(uVar10,lVar8,0x628b5c5a,puVar7);
    }
    lVar8 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x83ddc11;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x48),lVar8);
    bVar21 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar21 | 1;
    pcVar15 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x83ddc2e;
    uVar13 = (*pcVar15)(param_2);
    *(byte *)((long)param_2 + 9) = bVar21;
    if ((uVar13 >> 0x20 & 1) == 0) {
      uVar10 = param_3[5];
      uVar22 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x83ddc65;
      cVar2 = func_0x083ddd90(param_2,uVar10,puVar12,param_4,param_5,2);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar28 = 2;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
    }
    else {
      if ((uVar13 & 0xfffffffe) != 0) {
        lVar8 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x83ddcd1;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x50));
        if ((*(ulong *)((long)register0x00000020 + -0x50) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar15 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x83ddcf5;
        (*pcVar15)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x50) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar10 = param_3[5];
      uVar22 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x58) = uVar13;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x83ddd26;
      cVar2 = func_0x083ddd90(param_2,uVar10,puVar12,param_4,param_5,uVar13 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar28 = *(undefined1 *)((long)register0x00000020 + -0x58);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x83ddd54;
    func_0x083ddf60(param_2,uVar10,puVar12,param_4,param_5,uVar28);
    return;
  }
  puStack_b0 = unaff_R14;
  if (bVar21 != 1) {
    uStack_1a8 = (undefined8 *)0x120000012f2525;
    uStack_1b0 = 0x83dbb26;
    func_0x0ed5ffe0(*param_5,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0x83dbb49;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0x83dba3e;
  plStack_150 = param_2;
  uStack_c8 = param_4;
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
    puStack_148 = (undefined *)((ulong)((uint)uVar13 & 0x7f) << 0x30);
  }
  else if (uVar13 < 0x80) {
    puStack_148 = (undefined *)(uVar13 << 0x30 | (ulong)ppppppuVar23 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar13 + 9;
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,lVar8 == 0);
    uStack_1b0 = 0x83dbb80;
    puVar4 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar4 == (ulong *)0x0 && (char)puStack_158 == '\0') {
      uStack_1b0 = 0x83dcc5d;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar4 = uVar13;
    uStack_1b0 = 0x83dbbab;
    memcpy(puVar4 + 1,ppppppuVar23,uVar13);
    *(undefined1 *)((long)puVar4 + uVar13 + 8) = 0;
    puStack_148 = (undefined *)((ulong)(puVar4 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1b0 = 0x83dbbe4;
  puVar5 = (uint *)func_0x0ed6d180(lStack_b8,&puStack_148,0);
  plVar18 = plStack_150;
  if (((ulong)puStack_148 & 0x80000000000000) != 0) {
    uStack_1b0 = 0x83dbc18;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_148 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar7 = puStack_b0;
  puStack_148 = (undefined *)0x0;
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar23 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar23 = ppppppuVar20;
  }
  uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_b0[2];
  }
  uStack_1b0 = 0x83dbc4e;
  cVar2 = (**(code **)(*plVar18 + 0xb8))(plVar18,ppppppuVar23,uVar13);
  if (cVar2 == '\0') {
    uStack_1b0 = 0x83dbd73;
    puStack_158 = puVar5;
    _auStack_138 = (*(code *)*puVar7)(uStack_48);
    uStack_1b0 = 0x83dbd99;
    func_0x0ed8bc80(&uStack_1a8,auStack_138,*(undefined1 *)(lStack_b8 + 0x2aa));
    plVar18 = (long *)((ulong)uStack_1a8 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      plVar18 = plStack_1a0;
      pcVar15 = pcStack_198;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (pcVar15 == (code *)0x0) {
      pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar18 & 0x7f) << 0x30);
    }
    else {
      lVar8 = (long)plVar18 + 9;
      uStack_1b0 = 0x83dbde8;
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (undefined8 *)0x0) {
        uStack_1b0 = 0x83dcc6f;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = plVar18;
      uStack_1b0 = 0x83dbe18;
      memcpy(puVar7 + 1,pcVar15,plVar18);
      *(undefined1 *)((long)(puVar7 + 1) + (long)plVar18) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar18 = plStack_150;
    puVar5 = puStack_158;
    uStack_1b0 = 0x83dbfa9;
    func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0x83dbfe2;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0x83dc006;
      func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_e8 = (undefined8 *)0x0;
    plStack_e0 = (long *)0x0;
    pcStack_d8 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0x83dbc6d;
    (**(code **)(*plVar18 + 0x80))(auStack_138,plVar18,0x40);
    cStack_168 = cStack_f8;
    if (cStack_f8 == '\0') {
      uStack_1a8 = (undefined8 *)auStack_138;
      plStack_1a0 = plStack_130;
      pcStack_198 = pcStack_128;
      pcStack_190 = pcStack_120;
      uStack_188 = lStack_118;
      lStack_180 = lStack_110;
      lStack_178 = lStack_108;
      puStack_170 = puStack_100;
      pppppppuStack_a8 = (undefined8 *******)puVar7[3];
      uStack_a0 = puVar7[2];
      if ((*(byte *)(puVar7 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar20;
        uStack_a0 = (ulong)(*(byte *)(puVar7 + 1) >> 1);
      }
      uStack_1b0 = 0x83dbeca;
      puStack_158 = puVar5;
      func_0x0470d9a0(auStack_138,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar18 = (long *)((ulong)auStack_138 >> 1 & 0x7f);
      pcVar15 = (code *)(auStack_138 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar18 = plStack_130;
        pcVar15 = pcStack_128;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar15 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar18 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar18 + 9;
        uStack_1b0 = 0x83dbf1d;
        puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (undefined8 *)0x0) {
          uStack_1b0 = 0x83dcc81;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = plVar18;
        uStack_1b0 = 0x83dbf4d;
        memcpy(puVar7 + 1,pcVar15,plVar18);
        *(undefined1 *)((long)(puVar7 + 1) + (long)plVar18) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      plVar18 = plStack_150;
      puVar5 = puStack_158;
      uStack_1b0 = 0x83dc07f;
      func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0x83dc0b8;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_138 & 1) != 0) {
        uStack_1b0 = 0x83dc0e1;
        func_0x0412a280(pcStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
      }
      uStack_e8 = (undefined8 *)0x0;
      plStack_e0 = (long *)0x0;
      pcStack_d8 = (code *)0x0;
    }
    else {
      pcStack_198 = pcStack_128;
      uStack_1a8 = (undefined8 *)auStack_138;
      plStack_1a0 = plStack_130;
      plVar17 = (long *)(ulong)(byte)(auStack_138[0] >> 1);
      pcVar15 = (code *)((long)&uStack_1a8 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar17 = plStack_130;
        pcVar15 = pcStack_128;
      }
      bVar21 = auStack_138[0];
      if (plVar17 != (long *)0x0) {
        uStack_1b0 = 0x83dbcbc;
        plVar6 = (long *)__ctype_tolower_loc();
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
        bVar21 = (byte)uStack_1a8;
      }
      if ((bVar21 & 1) == 0) {
        pcStack_d8 = pcStack_198;
        uStack_e8 = uStack_1a8;
        plStack_e0 = plStack_1a0;
      }
      else {
        uStack_1b0 = 0x83dc039;
        func_0x0412e5e0(&uStack_e8,pcStack_198,plStack_1a0);
      }
    }
    lVar8 = lStack_180;
    if (cStack_168 == '\x01') {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0x83dc11b;
        func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_180 != 0) {
        while (lVar8 != lStack_178) {
          uStack_1b0 = 0x83dc14c;
          func_0x048b3e80(lStack_178 + -0x40);
          lStack_178 = lStack_178 + -0x40;
        }
        lStack_178 = lVar8;
        uStack_1b0 = 0x83dc168;
        func_0x0412a280(lStack_180,(long)puStack_170 - lStack_180);
      }
      pcVar16 = pcStack_198;
      pcVar15 = pcStack_190;
      if (pcStack_198 != (code *)0x0) {
        for (; pcVar16 != pcVar15; pcVar15 = pcVar15 + -0x50) {
          if ((pcVar15[-8] == (code)0x1) && (((byte)pcVar15[-0x30] & 1) != 0)) {
            uStack_1b0 = 0x83dc1b8;
            func_0x0412a280(*(undefined8 *)(pcVar15 + -0x20),
                            *(ulong *)(pcVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_190 = pcVar16;
        uStack_1b0 = 0x83dc1d1;
        func_0x0412a280(pcStack_198,uStack_188 - (long)pcStack_198);
      }
    }
  }
  uStack_1b0 = 0x83dc1e8;
  (**(code **)(*plVar18 + 0xd0))(plVar18);
  lVar8 = *(long *)(puVar5 + 2);
  uVar22 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar22;
  if (puVar5[0x48] == 0) {
    uVar14 = puVar5[4];
LAB_083dc22a:
    lVar1 = lVar8 + (ulong)uVar14 * 0x20;
    uVar13 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar14 * 0x20);
    if (uVar13 != 0xffffffff) {
      uStack_1b0 = 0x83dc253;
      (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_1a8,lVar1 + -0x18);
      uVar14 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar14 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar22)
          && (uVar14 = puVar5[4], uVar22 == uVar14 - 1)) goto LAB_083dc22a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0x83dc292;
    auStack_40 = (*(code *)*puStack_b0)();
    uVar10 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    plVar18 = (long *)((ulong)uStack_e8 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_e8 + 1);
    if (((ulong)uStack_e8 & 1) != 0) {
      plVar18 = plStack_e0;
      pcVar15 = pcStack_d8;
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
      uStack_1b0 = 0x83dc381;
      lVar8 = FUN_048aead0(uVar10);
    }
    uStack_1b0 = 0x83dc393;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar10,lVar8,uVar22,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1a8 = (undefined8 *)0x0;
      plStack_1a0 = (long *)0x0;
      uStack_1b0 = 0x83dc3c1;
      func_0x048b0d20(&uStack_1a8);
      puStack_58 = uStack_1a8;
      plStack_50 = plStack_1a0;
      if (uStack_1a8 == (undefined8 *)0x0) {
        lVar8 = *plStack_c0;
        uStack_1b0 = 0x83dca68;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1b0 = 0x83dca7c;
        uVar10 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        plVar18 = (long *)((ulong)uStack_e8 >> 1 & 0x7f);
        pcVar15 = (code *)((long)&uStack_e8 + 1);
        if (((ulong)uStack_e8 & 1) != 0) {
          plVar18 = plStack_e0;
          pcVar15 = pcStack_d8;
        }
        uStack_1b0 = 0x83dcaa8;
        uVar10 = func_0x0412f8c0(uVar10,pcVar15,plVar18);
        uStack_1b0 = 0x83dcabc;
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
        auStack_138 = (undefined1  [8])0x0;
        uStack_1b0 = 0x83dcaee;
        func_0x0ee387f0(auStack_138,pbVar26,uVar13,1);
        uStack_1b0 = 0x83dcb00;
        func_0x0ed5ffe0(lVar8,8,auStack_138);
        uStack_1b0 = 0x83dcb0a;
        func_0x0ee386e0(auStack_138);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0x83dcb26;
          func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_083dcbe3;
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
    uStack_1a8 = (undefined8 *)0x0;
    plStack_1a0 = (long *)0x0;
    uStack_1b0 = 0x83dc3f6;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0x83dc40e;
    func_0x05d9a920(&pppppppuStack_a8,&puStack_58,&uStack_1a8);
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x83dc41d;
      (*pcStack_190)(&uStack_1a8);
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
    if (puVar12 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x628b5c5a) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1b0 = 0x83dc520;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar7 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_3;
      }
      uStack_1b0 = 0x83dc542;
      puVar12 = (undefined8 *)FUN_0488e200(uVar10,lVar8,0x628b5c5a,puVar7);
    }
    plVar18 = (long *)param_3[5];
    if (DAT_0f5d0df8 == '\0') {
      uStack_1b0 = 0x83dcc92;
      iVar3 = func_0x04108328(&DAT_0f5d0df8);
      if (iVar3 != 0) {
        uStack_1b0 = 0x83dcc9f;
        func_0x083d6a40();
        uStack_1b0 = 0x83dccb9;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0d78,0xf53dab8);
        uStack_1b0 = 0x83dccc5;
        func_0x0410844d(&DAT_0f5d0df8);
      }
    }
    plVar17 = (long *)(*plVar18 +
                      (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                             *(uint *)(_DAT_0f5d0d78 + 4)) * 8);
    do {
      lVar8 = *plVar17;
      if (lVar8 == -1) {
        plVar6 = (long *)plVar18[4];
        plVar17 = plVar6;
        goto LAB_083dc5b4;
      }
      plVar17 = (long *)(plVar18[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5d0d78 + 4));
    plVar6 = (long *)plVar18[4];
LAB_083dc5b4:
    if (plVar17 == plVar6) {
      puVar25 = &DAT_0f5d0d78;
    }
    else {
      puVar25 = (undefined *)plVar17[2];
    }
    uStack_1b0 = 0x83dc5d6;
    auVar9 = (undefined1  [8])func_0x048b0c90(plVar18,puVar25,uVar22,1);
    plStack_140 = plVar18;
    if (auVar9 == (undefined1  [8])0x0) {
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1b0 = 0x83dc5ed;
      func_0x048b0d20(auStack_138);
      auVar9 = auStack_138;
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
    uStack_1b0 = 0x83dc62b;
    puStack_148 = (undefined *)auVar9;
    func_0x05d84ba0(auStack_138);
    uStack_1b0 = 0x83dc63d;
    func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
    if ((lStack_180 == lStack_80) && ((lStack_70 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_84 == '\0') || ((int)uStack_188 != iStack_88)) {
        bVar29 = cStack_84 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        pppppppuVar19 = pppppppuStack_a8;
        if (cStack_84 == '\x02') {
          pppppppuVar19 = &pppppppuStack_a8;
        }
        uStack_1b0 = 0x83dcc2d;
        lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar19);
        bVar29 = lVar8 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x83dc67b;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_120 != (code *)0x0) {
      uStack_1b0 = 0x83dc68f;
      (*pcStack_120)(auStack_138);
    }
    if (bVar29) {
      lStack_180 = param_3[5];
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined4 *)(puVar12 + 2) = 0;
      pcStack_198 = (code *)&UNK_083d6cf0;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x34439aed1);
      lStack_178 = 0;
      puStack_170 = &UNK_083d6c10;
      lStack_118 = plStack_c0[4];
      auStack_138 = (undefined1  [8])*plStack_c0;
      plStack_130 = (long *)plStack_c0[1];
      pcStack_128 = (code *)plStack_c0[2];
      pcStack_120 = (code *)plStack_c0[3];
      plVar18 = (long *)plStack_c0[2];
      if (plVar18 == (long *)0x0) {
        pcStack_128 = (code *)0x0;
        uStack_1a8 = puVar12;
      }
      else {
        uStack_1b0 = 0x83dc728;
        uStack_1a8 = puVar12;
        pcStack_128 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,0);
      }
      puStack_148 = &UNK_0f117720;
      uStack_1b0 = 0x83dc827;
      func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_c8,auStack_138);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x83dc83a;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar18 = (long *)param_3[5];
      if (DAT_0f5d0eb0 == '\0') {
        uStack_1b0 = 0x83dccd6;
        iVar3 = func_0x04108328(&DAT_0f5d0eb0);
        if (iVar3 != 0) {
          uStack_1b0 = 0x83dcce3;
          func_0x083d8910();
          uStack_1b0 = 0x83dccfd;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0e30,0xf53dab8);
          uStack_1b0 = 0x83dcd09;
          func_0x0410844d(&DAT_0f5d0eb0);
        }
      }
      plVar17 = (long *)(*plVar18 +
                        (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                               *(uint *)(_DAT_0f5d0e30 + 4)) * 8);
      do {
        lVar8 = *plVar17;
        if (lVar8 == -1) {
          plVar6 = (long *)plVar18[4];
          plVar17 = plVar6;
          goto LAB_083dc7a4;
        }
        plVar17 = (long *)(plVar18[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5d0e30 + 4));
      plVar6 = (long *)plVar18[4];
LAB_083dc7a4:
      if (plVar17 == plVar6) {
        puVar25 = &DAT_0f5d0e30;
      }
      else {
        puVar25 = (undefined *)plVar17[2];
      }
      uStack_1b0 = 0x83dc856;
      auVar9 = (undefined1  [8])func_0x048b0c90(plVar18,puVar25,uVar22,1);
      if (auVar9 == (undefined1  [8])0x0) {
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1b0 = 0x83dc86d;
        func_0x048b0d20(auStack_138);
        auVar9 = auStack_138;
        plVar18 = plStack_130;
      }
      lStack_108 = 0;
      puStack_100 = (undefined *)0x0;
      lStack_118 = 0;
      lStack_110 = 0;
      pcStack_128 = (code *)0x0;
      pcStack_120 = (code *)0x0;
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1b0 = 0x83dc8ab;
      puStack_148 = (undefined *)auVar9;
      plStack_140 = plVar18;
      func_0x05d84ba0(auStack_138);
      uStack_1b0 = 0x83dc8bd;
      func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
      if ((lStack_180 == lStack_80) && ((lStack_70 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_84 == '\0') || ((int)uStack_188 != iStack_88)) {
          bVar29 = cStack_84 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          pppppppuVar19 = &pppppppuStack_a8;
          if (cStack_84 != '\x02') {
            pppppppuVar19 = pppppppuStack_a8;
          }
          uStack_1b0 = 0x83dcb7d;
          lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar19);
          bVar29 = lVar8 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x83dc8fa;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_120 != (code *)0x0) {
        uStack_1b0 = 0x83dc90e;
        (*pcStack_120)(auStack_138);
      }
      if (bVar29) {
        lStack_180 = param_3[5];
        *(undefined4 *)puVar12 = 1;
        *(undefined4 *)(puVar12 + 2) = 1;
        pcStack_198 = (code *)&UNK_083d8bd0;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x336fe7024);
        lStack_178 = 0;
        puStack_170 = &UNK_083d8af0;
        lStack_118 = plStack_c0[4];
        auStack_138 = (undefined1  [8])*plStack_c0;
        plStack_130 = (long *)plStack_c0[1];
        pcStack_128 = (code *)plStack_c0[2];
        pcStack_120 = (code *)plStack_c0[3];
        plVar18 = (long *)plStack_c0[2];
        if (plVar18 == (long *)0x0) {
          pcStack_128 = (code *)0x0;
          uStack_1a8 = puVar12;
        }
        else {
          uStack_1b0 = 0x83dc9a9;
          uStack_1a8 = puVar12;
          pcStack_128 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,1);
        }
        puStack_148 = &UNK_0f1177a0;
        uStack_1b0 = 0x83dcbbd;
        func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_c8,auStack_138);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x83dcbcc;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
              (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
        uStack_1a8 = (undefined8 *)0x2300000149614c;
        uStack_1b0 = 0x83dca0e;
        func_0x0ed5ffe0(*plStack_c0,8,&uStack_1a8);
        if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
          uStack_1b0 = 0x83dca39;
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
        }
        uStack_1a8 = (undefined8 *)0x0;
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1b0 = 0x83dcbe3;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_083dcbe3:
  if (((ulong)uStack_e8 & 1) != 0) {
    uStack_1b0 = 0x83dcc0a;
    func_0x0412a280(pcStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  return;
}


