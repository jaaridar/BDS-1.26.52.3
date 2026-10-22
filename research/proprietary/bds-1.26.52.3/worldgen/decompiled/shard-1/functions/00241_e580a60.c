/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe680a60 (ELF vaddr 0xe580a60)
 * Label: caller-of-callee
 * Body:  [[0e680a60, 0e68139a] [0e6813a0, 0e682570] [0e6836e0, 0e683980]]
 * Ghidra: FUN_0e680a60
 */


/* WARNING: Possible PIC construction at 0x0e680ca5: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e680a60(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  uint *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auVar10 [8];
  undefined8 uVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  code *pcVar17;
  code *pcVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  undefined8 unaff_RBX;
  undefined8 ******ppppppuVar21;
  byte bVar22;
  uint uVar23;
  long *unaff_RBP;
  undefined8 ******ppppppuVar24;
  long lVar25;
  byte *pbVar26;
  undefined *puVar27;
  long *unaff_R12;
  undefined8 unaff_R13;
  long *unaff_R14;
  undefined8 *unaff_R15;
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
  undefined8 uStack_e0;
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
  long *plStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  pcVar17 = (code *)param_3[7];
  plStack_f0 = param_5;
  if (pcVar17 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar28 = false;
    }
    else {
      uStack_1a0 = 0xe680ab5;
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_0e67f4a0;
    }
    param_3[2] = (long)&UNK_0e67f580;
    *(undefined4 *)(param_3 + 4) = 0xc8535574;
    param_3[3] = (long)&UNK_0e680170;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0xe680b05;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (lVar7 == 0) {
      uStack_1a0 = 0xe682423;
      func_0x0eec74c0(0x40,0);
    }
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x38) = 0;
    *param_3 = lVar7;
    pcVar17 = (code *)&UNK_0e67f4a0;
    param_3[7] = (long)&UNK_0e67f4a0;
    if (bVar28) {
      lVar7 = param_3[6];
    }
    else {
      lVar7 = 0;
    }
    param_3[6] = lVar7;
    if (lVar7 == 0) goto LAB_0e680b53;
LAB_0e680b69:
    bVar22 = *(byte *)(lVar7 + 0x1a);
  }
  else {
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_0e680b69;
LAB_0e680b53:
    lVar25 = param_3[5];
    uStack_1a0 = 0xe680b61;
    (*pcVar17)(0,param_3,0);
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_0e680b69;
    uStack_1a0 = 0xe680b9e;
    lVar7 = FUN_048aead0(lVar25);
    bVar22 = *(byte *)(lVar7 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_0e6836e0;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (long *)0x0;
    uStack_190 = 0;
    uStack_1a0 = 0xe680cce;
    func_0x048b1dc0(&uStack_198);
    plVar4 = uStack_198;
    uVar15 = uStack_190;
    unaff_R14 = &uStack_198;
joined_r0x0e680cd9:
    if (plVar4 == (long *)0x0) {
      uStack_1a0 = 0xe680ce7;
      plVar4 = (long *)FUN_048aead0(uVar15);
    }
  }
  else {
    plVar4 = (long *)*unaff_R14;
    if (plVar4 == (long *)0x0) {
      uVar15 = param_3[5];
      uStack_1a0 = 0xe680bc8;
      (*(code *)param_3[7])(0,param_3,0);
      plVar4 = (long *)*unaff_R14;
      goto joined_r0x0e680cd9;
    }
  }
  unaff_R15 = (undefined8 *)plVar4[0xd];
  uStack_1a0 = 0xe680be2;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar4 = plStack_f0;
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0xe680caa;
    unaff_RBX = param_4;
    unaff_RBP = param_2;
    unaff_R12 = param_3;
SUB_0e6836e0:
    plVar9 = plStack_f0;
    *(long **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    plVar4 = (long *)*param_3;
    plVar14 = plVar4;
    if (cVar2 == '\x02') {
      plVar14 = param_3;
    }
    if (plVar14 == (long *)0x0 || (int)param_3[4] != -0x37acaa8c) {
      lVar7 = param_3[5];
      lVar25 = param_3[6];
      if (lVar25 == 0) {
        pcVar17 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe68373f;
        (*pcVar17)(0,param_3,0);
        lVar25 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        plVar4 = (long *)*param_3;
      }
      if (cVar2 == '\x02') {
        plVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe683761;
      plVar14 = (long *)FUN_0488e200(lVar7,lVar25,0xc8535574,plVar4);
    }
    lVar7 = *plVar9;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe683771;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar7);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar17 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe68378e;
    uVar15 = (*pcVar17)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar15 >> 0x20 & 1) == 0) {
      lVar7 = param_3[5];
      uVar8 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6837c9;
      cVar2 = func_0x0e6839b0(param_2,lVar7,plVar14,param_4,plVar9,4);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6837f6;
      cVar2 = func_0x0e683bd0(param_2,lVar7,plVar14,param_4,plVar9,4);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe683823;
      cVar2 = func_0x0e683e00(param_2,lVar7,plVar14,param_4,plVar9,4);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar15 = 4;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
    }
    else {
      if ((uVar15 & 0xfffffffc) != 0) {
        lVar7 = *plVar9;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe68388b;
        func_0x0ed5ffe0(lVar7,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar17 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6838b3;
        (*pcVar17)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      lVar7 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x50) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6838ed;
      cVar2 = func_0x0e6839b0(param_2,lVar7,plVar14,param_4,plVar9,uVar15 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar15 = uVar15 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe68391a;
      cVar2 = func_0x0e683bd0(param_2,lVar7,plVar14,param_4,plVar9,uVar15);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe683943;
      cVar2 = func_0x0e683e00(param_2,lVar7,plVar14,param_4,plVar9,uVar15);
      if (cVar2 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe68397b;
    func_0x0e684030(param_2,lVar7,plVar14,param_4,plVar9,uVar15);
    return;
  }
  if (bVar22 != 1) {
    uStack_198 = (long *)0x120000012f2525;
    uStack_1a0 = 0xe680d1f;
    func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0xe680d42;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0xe680c1c;
  uStack_e0 = param_4;
  func_0x0ed6d600(&lStack_68,*plStack_f0);
  lStack_48 = param_3[5];
  lStack_78 = *plVar4;
  ppppppuVar21 = (undefined8 ******)((long)unaff_R15 + 9);
  bVar28 = (*(byte *)(unaff_R15 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)unaff_R15[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar15 = (ulong)(*(byte *)(unaff_R15 + 1) >> 1);
  if (!bVar28) {
    uVar15 = unaff_R15[2];
  }
  plStack_150 = param_2;
  puStack_70 = unaff_R15;
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_148 = (undefined *)((ulong)((uint)uVar15 & 0x7f) << 0x30);
  }
  else if (uVar15 < 0x80) {
    puStack_148 = (undefined *)(uVar15 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar7 = uVar15 + 9;
    puStack_e8 = (uint *)CONCAT71(puStack_e8._1_7_,lVar7 == 0);
    uStack_1a0 = 0xe680d86;
    puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
    if (puVar6 == (ulong *)0x0 && (char)puStack_e8 == '\0') {
      uStack_1a0 = 0xe682438;
      func_0x0eec74c0(lVar7,8);
    }
    *puVar6 = uVar15;
    uStack_1a0 = 0xe680db5;
    memcpy(puVar6 + 1,ppppppuVar24,uVar15);
    *(undefined1 *)((long)puVar6 + uVar15 + 8) = 0;
    puStack_148 = (undefined *)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  plVar4 = plStack_150;
  uStack_1a0 = 0xe680df3;
  puVar5 = (uint *)func_0x0ed6d180(lStack_78,&puStack_148,0);
  if (((ulong)puStack_148 & 0x80000000000000) != 0) {
    uStack_1a0 = 0xe680e22;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_148 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar1 = puStack_70;
  puStack_148 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_70[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar15 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar28) {
    uVar15 = puStack_70[2];
  }
  uStack_1a0 = 0xe680e58;
  cVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,ppppppuVar24,uVar15);
  if (cVar2 == '\0') {
    uStack_1a0 = 0xe680f86;
    puStack_e8 = puVar5;
    _auStack_138 = (*(code *)*puVar1)(lStack_48);
    uStack_1a0 = 0xe680fac;
    func_0x0ed8bc80(&uStack_198,auStack_138,*(undefined1 *)(lStack_78 + 0x2aa));
    uVar15 = (ulong)uStack_198 >> 1 & 0x7f;
    pcVar17 = (code *)((long)&uStack_198 + 1);
    if (((ulong)uStack_198 & 1) != 0) {
      uVar15 = uStack_190;
      pcVar17 = pcStack_188;
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (pcVar17 == (code *)0x0) {
      pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)uVar15 & 0x7f) << 0x30);
    }
    else {
      lVar7 = uVar15 + 9;
      uStack_1a0 = 0xe680ffb;
      puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
      if (lVar7 != 0 && puVar6 == (ulong *)0x0) {
        uStack_1a0 = 0xe68244a;
        func_0x0eec74c0(lVar7,8);
      }
      *puVar6 = uVar15;
      uStack_1a0 = 0xe68102b;
      memcpy(puVar6 + 1,pcVar17,uVar15);
      *(undefined1 *)((long)puVar6 + uVar15 + 8) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      plVar4 = plStack_150;
    }
    uStack_1a0 = 0xe6811c3;
    func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
    puVar5 = puStack_e8;
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0xe6811fa;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0xe68121e;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (long *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0xe680e77;
    (**(code **)(*plVar4 + 0x80))(auStack_138,plVar4,0x40);
    cStack_158 = cStack_f8;
    if (cStack_f8 == '\0') {
      uStack_198 = (long *)auStack_138;
      uStack_190 = (ulong)plStack_130;
      pcStack_188 = pcStack_128;
      pcStack_180 = pcStack_120;
      uStack_178 = lStack_118;
      lStack_170 = lStack_110;
      lStack_168 = lStack_108;
      puStack_160 = puStack_100;
      pppppppuStack_b8 = (undefined8 *******)puVar1[3];
      uStack_b0 = puVar1[2];
      if ((*(byte *)(puVar1 + 1) & 1) == 0) {
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar21;
        uStack_b0 = (ulong)(*(byte *)(puVar1 + 1) >> 1);
      }
      uStack_1a0 = 0xe6810e2;
      puStack_e8 = puVar5;
      func_0x0470d9a0(auStack_138,&UNK_01377405,0x15,0xd,&pppppppuStack_b8);
      plVar9 = (long *)((ulong)auStack_138 >> 1 & 0x7f);
      pcVar17 = (code *)(auStack_138 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar9 = plStack_130;
        pcVar17 = pcStack_128;
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (pcVar17 == (code *)0x0) {
        pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)plVar9 & 0x7f) << 0x30);
      }
      else {
        lVar7 = (long)plVar9 + 9;
        uStack_1a0 = 0xe681132;
        puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
        if (lVar7 != 0 && puVar6 == (ulong *)0x0) {
          uStack_1a0 = 0xe68245c;
          func_0x0eec74c0(lVar7,8);
        }
        *puVar6 = (ulong)plVar9;
        uStack_1a0 = 0xe681162;
        memcpy(puVar6 + 1,pcVar17,plVar9);
        *(undefined1 *)((long)puVar6 + (long)plVar9 + 8U) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        plVar4 = plStack_150;
      }
      uStack_1a0 = 0xe681297;
      func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
      puVar5 = puStack_e8;
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0xe6812ce;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_138 & 1) != 0) {
        uStack_1a0 = 0xe6812f4;
        func_0x0412a280(pcStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
      }
      uStack_d8 = (long *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_188 = pcStack_128;
      uStack_198 = (long *)auStack_138;
      uStack_190 = (ulong)plStack_130;
      plVar9 = (long *)(ulong)(byte)(auStack_138[0] >> 1);
      pcVar17 = (code *)((long)&uStack_198 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar9 = plStack_130;
        pcVar17 = pcStack_128;
      }
      bVar22 = auStack_138[0];
      if (plVar9 != (long *)0x0) {
        uStack_1a0 = 0xe680ec7;
        plVar14 = (long *)__ctype_tolower_loc();
        pcVar18 = pcVar17;
        for (uVar15 = (ulong)plVar9 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar18 = *(code *)(*plVar14 + (ulong)(byte)*pcVar18 * 4);
          pcVar18 = pcVar18 + 1;
        }
        if (3 < plVar9) {
          do {
            *pcVar18 = *(code *)(*plVar14 + (ulong)(byte)*pcVar18 * 4);
            pcVar18[1] = *(code *)(*plVar14 + (ulong)(byte)pcVar18[1] * 4);
            pcVar18[2] = *(code *)(*plVar14 + (ulong)(byte)pcVar18[2] * 4);
            pcVar18[3] = *(code *)(*plVar14 + (ulong)(byte)pcVar18[3] * 4);
            pcVar18 = pcVar18 + 4;
          } while (pcVar18 != pcVar17 + (long)plVar9);
        }
        bVar22 = (byte)uStack_198;
      }
      if ((bVar22 & 1) == 0) {
        pcStack_c8 = pcStack_188;
        uStack_d8 = uStack_198;
        uStack_d0 = uStack_190;
      }
      else {
        uStack_1a0 = 0xe681251;
        func_0x0412e5e0(&uStack_d8,pcStack_188,uStack_190);
      }
    }
    lVar7 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0xe68132e;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar7 != lStack_168) {
          uStack_1a0 = 0xe68135c;
          func_0x048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar7;
        uStack_1a0 = 0xe681378;
        func_0x0412a280(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar18 = pcStack_188;
      pcVar17 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar18 != pcVar17; pcVar17 = pcVar17 + -0x50) {
          if ((pcVar17[-8] == (code)0x1) && (((byte)pcVar17[-0x30] & 1) != 0)) {
            uStack_1a0 = 0xe6813c8;
            func_0x0412a280(*(undefined8 *)(pcVar17 + -0x20),
                            *(ulong *)(pcVar17 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar18;
        uStack_1a0 = 0xe6813e1;
        func_0x0412a280(pcStack_188,uStack_178 - (long)pcStack_188);
      }
    }
  }
  uStack_1a0 = 0xe6813f8;
  (**(code **)(*plVar4 + 0xd0))(plVar4);
  lVar7 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar7 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar16 = puVar5[4];
LAB_0e68143f:
    lVar25 = lVar7 + (ulong)uVar16 * 0x20;
    uVar15 = (ulong)*(uint *)(lVar7 + -0x10 + (ulong)uVar16 * 0x20);
    if (uVar15 != 0xffffffff) {
      uStack_1a0 = 0xe681468;
      (**(code **)(&UNK_0f4e40d0 + uVar15 * 8))(&uStack_198,lVar25 + -0x18);
      uVar16 = puVar5[4];
    }
    *(undefined4 *)(lVar25 + -0x10) = 0xffffffff;
    puVar5[4] = uVar16 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar16 = puVar5[4], uVar23 == uVar16 - 1)) goto LAB_0e68143f;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0xe6814a9;
    auStack_40 = (*(code *)*puStack_70)();
    uVar11 = auStack_40._8_8_;
    lVar7 = auStack_40._0_8_;
    uVar15 = (ulong)uStack_d8 >> 1 & 0x7f;
    pcVar17 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      uVar15 = uStack_d0;
      pcVar17 = pcStack_c8;
    }
    if (uVar15 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar23 = ((int)(char)pcVar17[uVar19 + 3] ^
                   ((int)(char)pcVar17[uVar19 + 2] ^
                   ((int)(char)pcVar17[uVar19 + 1] ^
                   ((int)(char)pcVar17[uVar19] ^ uVar23) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar8 != 0) {
        uVar15 = 0;
        do {
          uVar23 = ((int)(char)pcVar17[uVar15 + uVar19] ^ uVar23) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar8 != uVar15);
      }
    }
    if (lVar7 == 0) {
      uStack_1a0 = 0xe6815a1;
      lVar7 = FUN_048aead0(uVar11);
    }
    uStack_1a0 = 0xe6815b3;
    plStack_58 = (long *)func_0x048b0c90(uVar11,lVar7,uVar23,1);
    if (plStack_58 == (long *)0x0) {
      uStack_198 = (long *)0x0;
      uStack_190 = 0;
      uStack_1a0 = 0xe6815e1;
      func_0x048b0d20(&uStack_198);
      plStack_58 = uStack_198;
      uStack_50 = uStack_190;
      if (uStack_198 == (long *)0x0) {
        lVar7 = *plStack_f0;
        uStack_1a0 = 0xe681ca0;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar7 + 0x2aa));
        uStack_1a0 = 0xe681cb4;
        uVar11 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        uVar15 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar17 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar15 = uStack_d0;
          pcVar17 = pcStack_c8;
        }
        uStack_1a0 = 0xe681ce0;
        uVar11 = func_0x0412f8c0(uVar11,pcVar17,uVar15);
        uStack_1a0 = 0xe681cf4;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar28 = (*pbVar12 & 1) != 0;
        pbVar26 = pbVar12 + 1;
        if (bVar28) {
          pbVar26 = *(byte **)(pbVar12 + 0x10);
        }
        uVar15 = (ulong)(*pbVar12 >> 1);
        if (bVar28) {
          uVar15 = *(ulong *)(pbVar12 + 8);
        }
        auStack_138 = (undefined1  [8])0x0;
        uStack_1a0 = 0xe681d26;
        func_0x0ee387f0(auStack_138,pbVar26,uVar15,1);
        uStack_1a0 = 0xe681d38;
        func_0x0ed5ffe0(lVar7,8,auStack_138);
        uStack_1a0 = 0xe681d42;
        func_0x0ee386e0(auStack_138);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0xe681d5e;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0e6823a0;
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
    uStack_1a0 = 0xe681616;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0xe68162e;
    func_0x05d9a920(&pppppppuStack_b8,&plStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe68163d;
      (*pcStack_180)(&uStack_198);
    }
    bVar28 = (*(byte *)(puStack_70 + 1) & 1) != 0;
    if (bVar28) {
      ppppppuVar21 = (undefined8 ******)puStack_70[3];
    }
    uVar15 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
    if (bVar28) {
      uVar15 = puStack_70[2];
    }
    if (uVar15 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
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
        } while ((uVar15 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar8 != 0) {
        uVar15 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar21 + uVar15 + uVar19) ^ uVar23) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar8 != uVar15);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    plVar4 = (long *)*param_3;
    plVar9 = plVar4;
    if (cVar2 == '\x02') {
      plVar9 = param_3;
    }
    if (plVar9 == (long *)0x0 || (int)param_3[4] != -0x37acaa8c) {
      lVar7 = param_3[5];
      lVar25 = param_3[6];
      if (lVar25 == 0) {
        uStack_1a0 = 0xe681740;
        (*(code *)param_3[7])(0,param_3,0);
        lVar25 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        plVar4 = (long *)*param_3;
      }
      if (cVar2 == '\x02') {
        plVar4 = param_3;
      }
      uStack_1a0 = 0xe681762;
      plVar9 = (long *)FUN_0488e200(lVar7,lVar25,0xc8535574,plVar4);
    }
    plVar4 = (long *)param_3[5];
    if (DAT_0f7560b8 == '\0') {
      uStack_1a0 = 0xe68246d;
      iVar3 = func_0x04108328(&DAT_0f7560b8);
      if (iVar3 != 0) {
        uStack_1a0 = 0xe68247a;
        func_0x0e55cb60();
        uStack_1a0 = 0xe682494;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f756038,0xf53dab8);
        uStack_1a0 = 0xe6824a0;
        func_0x0410844d(&DAT_0f7560b8);
      }
    }
    plVar14 = (long *)(*plVar4 +
                      (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                             *(uint *)(_DAT_0f756038 + 4)) * 8);
    do {
      lVar7 = *plVar14;
      if (lVar7 == -1) {
        plVar13 = (long *)plVar4[4];
        plVar14 = plVar13;
        goto LAB_0e6817d4;
      }
      plVar14 = (long *)(plVar4[3] + lVar7 * 0x18);
    } while (*(uint *)(plVar4[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f756038 + 4));
    plVar13 = (long *)plVar4[4];
LAB_0e6817d4:
    if (plVar14 == plVar13) {
      puVar27 = &DAT_0f756038;
    }
    else {
      puVar27 = (undefined *)plVar14[2];
    }
    uStack_1a0 = 0xe6817f6;
    auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar27,uVar23,1);
    plStack_140 = plVar4;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0xe68180d;
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
    uStack_1a0 = 0xe681848;
    puStack_148 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_138);
    uStack_1a0 = 0xe68185a;
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
        uStack_1a0 = 0xe6822ec;
        lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
        bVar28 = lVar7 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe681898;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_120 != (code *)0x0) {
      uStack_1a0 = 0xe6818a9;
      (*pcStack_120)(auStack_138);
    }
    if (bVar28) {
      lVar7 = param_3[5];
      plVar4 = plVar9 + 1;
      if ((ulong)*(uint *)(plVar9 + 7) != 0xffffffff) {
        uStack_1a0 = 0xe6818da;
        (**(code **)(&UNK_0f4c2f58 + (ulong)*(uint *)(plVar9 + 7) * 8))(auStack_138,plVar4);
      }
      *plVar4 = 0;
      plVar9[2] = 0;
      plVar9[3] = 0;
      *(undefined4 *)(plVar9 + 7) = 0;
      pcStack_188 = (code *)&UNK_0e55ce60;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x325067308);
      lStack_168 = 0;
      puStack_160 = &UNK_0e55cd80;
      lStack_118 = plStack_f0[4];
      auStack_138 = (undefined1  [8])*plStack_f0;
      plStack_130 = (long *)plStack_f0[1];
      pcStack_128 = (code *)plStack_f0[2];
      pcStack_120 = (code *)plStack_f0[3];
      plVar9 = (long *)plStack_f0[2];
      uStack_198 = plVar4;
      lStack_170 = lVar7;
      if (plVar9 == (long *)0x0) {
        pcStack_128 = (code *)0x0;
      }
      else {
        uStack_1a0 = 0xe68196a;
        pcStack_128 = (code *)(**(code **)(*plVar9 + 0x30))(plVar9,0);
      }
      puStack_148 = &UNK_0f4be368;
      uStack_1a0 = 0xe681c66;
      func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe681c79;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar4 = (long *)param_3[5];
      if (DAT_0f7563f8 == '\0') {
        uStack_1a0 = 0xe6824b1;
        iVar3 = func_0x04108328(&DAT_0f7563f8);
        if (iVar3 != 0) {
          uStack_1a0 = 0xe6824be;
          func_0x0e563270();
          uStack_1a0 = 0xe6824d8;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f756378,0xf53dab8);
          uStack_1a0 = 0xe6824e4;
          func_0x0410844d(&DAT_0f7563f8);
        }
      }
      plVar14 = (long *)(*plVar4 +
                        (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                               *(uint *)(_DAT_0f756378 + 4)) * 8);
      do {
        lVar7 = *plVar14;
        if (lVar7 == -1) {
          plVar13 = (long *)plVar4[4];
          plVar14 = plVar13;
          goto LAB_0e6819e4;
        }
        plVar14 = (long *)(plVar4[3] + lVar7 * 0x18);
      } while (*(uint *)(plVar4[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f756378 + 4));
      plVar13 = (long *)plVar4[4];
LAB_0e6819e4:
      if (plVar14 == plVar13) {
        puVar27 = &DAT_0f756378;
      }
      else {
        puVar27 = (undefined *)plVar14[2];
      }
      uStack_1a0 = 0xe681a42;
      auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar27,uVar23,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0xe681a59;
        func_0x048b0d20(auStack_138);
        auVar10 = auStack_138;
        plVar4 = plStack_130;
      }
      lStack_108 = 0;
      puStack_100 = (undefined *)0x0;
      lStack_118 = 0;
      lStack_110 = 0;
      pcStack_128 = (code *)0x0;
      pcStack_120 = (code *)0x0;
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0xe681a94;
      puStack_148 = (undefined *)auVar10;
      plStack_140 = plVar4;
      func_0x05d84ba0(auStack_138);
      uStack_1a0 = 0xe681aa6;
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
          uStack_1a0 = 0xe6823ea;
          lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
          bVar28 = lVar7 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe681ae4;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_120 != (code *)0x0) {
        uStack_1a0 = 0xe681af5;
        (*pcStack_120)(auStack_138);
      }
      if (bVar28) {
        lVar7 = param_3[5];
        plVar4 = plVar9 + 1;
        if ((ulong)*(uint *)(plVar9 + 7) != 0xffffffff) {
          uStack_1a0 = 0xe681b26;
          (**(code **)(&UNK_0f4c2f58 + (ulong)*(uint *)(plVar9 + 7) * 8))(auStack_138,plVar4);
        }
        *plVar4 = 0;
        plVar9[2] = 0;
        plVar9[3] = 0;
        *(undefined4 *)(plVar9 + 7) = 1;
        pcStack_188 = (code *)&UNK_0e563570;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x3d8b033af);
        lStack_168 = 0;
        puStack_160 = &UNK_0e563490;
        lStack_118 = plStack_f0[4];
        auStack_138 = (undefined1  [8])*plStack_f0;
        plStack_130 = (long *)plStack_f0[1];
        pcStack_128 = (code *)plStack_f0[2];
        pcStack_120 = (code *)plStack_f0[3];
        plVar9 = (long *)plStack_f0[2];
        uStack_198 = plVar4;
        lStack_170 = lVar7;
        if (plVar9 == (long *)0x0) {
          pcStack_128 = (code *)0x0;
        }
        else {
          uStack_1a0 = 0xe681bb9;
          pcStack_128 = (code *)(**(code **)(*plVar9 + 0x30))(plVar9,1);
        }
        puStack_148 = &UNK_0f4be468;
        uStack_1a0 = 0xe681fe5;
        func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe681ff8;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar4 = (long *)param_3[5];
        if (DAT_0f756000 == '\0') {
          uStack_1a0 = 0xe6824f5;
          iVar3 = func_0x04108328(&DAT_0f756000);
          if (iVar3 != 0) {
            uStack_1a0 = 0xe682502;
            func_0x0e557c10();
            uStack_1a0 = 0xe68251c;
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f755f80,0xf53dab8);
            uStack_1a0 = 0xe682528;
            func_0x0410844d(&DAT_0f756000);
          }
        }
        plVar14 = (long *)(*plVar4 +
                          (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                                 *(uint *)(_DAT_0f755f80 + 4)) * 8);
        do {
          lVar7 = *plVar14;
          if (lVar7 == -1) {
            plVar13 = (long *)plVar4[4];
            plVar14 = plVar13;
            goto LAB_0e681d77;
          }
          plVar14 = (long *)(plVar4[3] + lVar7 * 0x18);
        } while (*(uint *)(plVar4[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f755f80 + 4));
        plVar13 = (long *)plVar4[4];
LAB_0e681d77:
        if (plVar14 == plVar13) {
          puVar27 = &DAT_0f755f80;
        }
        else {
          puVar27 = (undefined *)plVar14[2];
        }
        uStack_1a0 = 0xe681dd5;
        auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar27,uVar23,1);
        if (auVar10 == (undefined1  [8])0x0) {
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0xe681dec;
          func_0x048b0d20(auStack_138);
          auVar10 = auStack_138;
          plVar4 = plStack_130;
        }
        lStack_108 = 0;
        puStack_100 = (undefined *)0x0;
        lStack_118 = 0;
        lStack_110 = 0;
        pcStack_128 = (code *)0x0;
        pcStack_120 = (code *)0x0;
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0xe681e27;
        puStack_148 = (undefined *)auVar10;
        plStack_140 = plVar4;
        func_0x05d84ba0(auStack_138);
        uStack_1a0 = 0xe681e39;
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
            uStack_1a0 = 0xe682408;
            lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
            bVar28 = lVar7 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe681e77;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_120 != (code *)0x0) {
          uStack_1a0 = 0xe681e88;
          (*pcStack_120)(auStack_138);
        }
        if (bVar28) {
          lVar7 = param_3[5];
          plVar4 = plVar9 + 1;
          if ((ulong)*(uint *)(plVar9 + 7) != 0xffffffff) {
            uStack_1a0 = 0xe681eb9;
            (**(code **)(&UNK_0f4c2f58 + (ulong)*(uint *)(plVar9 + 7) * 8))(auStack_138,plVar4);
          }
          *plVar4 = 0;
          plVar9[2] = 0;
          plVar9[3] = 0;
          *(undefined4 *)(plVar9 + 7) = 2;
          pcStack_188 = (code *)&UNK_0e557f10;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x353280e1b);
          lStack_168 = 0;
          puStack_160 = &UNK_0e557e30;
          lStack_118 = plStack_f0[4];
          auStack_138 = (undefined1  [8])*plStack_f0;
          plStack_130 = (long *)plStack_f0[1];
          pcStack_128 = (code *)plStack_f0[2];
          pcStack_120 = (code *)plStack_f0[3];
          plVar9 = (long *)plStack_f0[2];
          uStack_198 = plVar4;
          lStack_170 = lVar7;
          if (plVar9 == (long *)0x0) {
            pcStack_128 = (code *)0x0;
          }
          else {
            uStack_1a0 = 0xe681f4c;
            pcStack_128 = (code *)(**(code **)(*plVar9 + 0x30))(plVar9,2);
          }
          puStack_148 = &UNK_0f4be3e8;
          uStack_1a0 = 0xe6822b5;
          func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xe6822c8;
            (*pcStack_180)(&uStack_198);
          }
        }
        else {
          plVar4 = (long *)param_3[5];
          if (DAT_0f756568 == '\0') {
            uStack_1a0 = 0xe682539;
            iVar3 = func_0x04108328(&DAT_0f756568);
            if (iVar3 != 0) {
              uStack_1a0 = 0xe682546;
              func_0x0e56a4e0();
              uStack_1a0 = 0xe682560;
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f7564e8,0xf53dab8);
              uStack_1a0 = 0xe68256c;
              func_0x0410844d(&DAT_0f756568);
            }
          }
          plVar14 = (long *)(*plVar4 +
                            (ulong)((int)((ulong)(plVar4[1] - *plVar4) >> 3) - 1U &
                                   *(uint *)(_DAT_0f7564e8 + 4)) * 8);
          do {
            lVar7 = *plVar14;
            if (lVar7 == -1) {
              plVar13 = (long *)plVar4[4];
              plVar14 = plVar13;
              goto LAB_0e682011;
            }
            plVar14 = (long *)(plVar4[3] + lVar7 * 0x18);
          } while (*(uint *)(plVar4[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7564e8 + 4));
          plVar13 = (long *)plVar4[4];
LAB_0e682011:
          if (plVar14 == plVar13) {
            puVar27 = &DAT_0f7564e8;
          }
          else {
            puVar27 = (undefined *)plVar14[2];
          }
          uStack_1a0 = 0xe68206f;
          auVar10 = (undefined1  [8])func_0x048b0c90(plVar4,puVar27,uVar23,1);
          if (auVar10 == (undefined1  [8])0x0) {
            auStack_138 = (undefined1  [8])0x0;
            plStack_130 = (long *)0x0;
            uStack_1a0 = 0xe682086;
            func_0x048b0d20(auStack_138);
            auVar10 = auStack_138;
            plVar4 = plStack_130;
          }
          lStack_108 = 0;
          puStack_100 = (undefined *)0x0;
          lStack_118 = 0;
          lStack_110 = 0;
          pcStack_128 = (code *)0x0;
          pcStack_120 = (code *)0x0;
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0xe6820c1;
          puStack_148 = (undefined *)auVar10;
          plStack_140 = plVar4;
          func_0x05d84ba0(auStack_138);
          uStack_1a0 = 0xe6820d3;
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
              uStack_1a0 = 0xe68233d;
              lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
              bVar28 = lVar7 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xe682110;
            (*pcStack_180)(&uStack_198);
          }
          if (pcStack_120 != (code *)0x0) {
            uStack_1a0 = 0xe682121;
            (*pcStack_120)(auStack_138);
          }
          if (bVar28) {
            lVar7 = param_3[5];
            plVar4 = plVar9 + 1;
            if ((ulong)*(uint *)(plVar9 + 7) != 0xffffffff) {
              uStack_1a0 = 0xe682151;
              (**(code **)(&UNK_0f4c2f58 + (ulong)*(uint *)(plVar9 + 7) * 8))(auStack_138,plVar4);
            }
            plVar9[5] = 0;
            plVar9[6] = 0;
            plVar9[3] = 0;
            plVar9[4] = 0;
            *plVar4 = 0;
            plVar9[2] = 0;
            *(undefined4 *)(plVar9 + 7) = 3;
            pcStack_188 = (code *)&UNK_0e56a7e0;
            pcStack_180 = (code *)0x0;
            uStack_178 = CONCAT35(uStack_178._5_3_,0x37115412d);
            lStack_168 = 0;
            puStack_160 = &UNK_0e56a700;
            lStack_118 = plStack_f0[4];
            auStack_138 = (undefined1  [8])*plStack_f0;
            plStack_130 = (long *)plStack_f0[1];
            pcStack_128 = (code *)plStack_f0[2];
            pcStack_120 = (code *)plStack_f0[3];
            plVar9 = (long *)plStack_f0[2];
            uStack_198 = plVar4;
            lStack_170 = lVar7;
            if (plVar9 == (long *)0x0) {
              pcStack_128 = (code *)0x0;
            }
            else {
              uStack_1a0 = 0xe6821e6;
              pcStack_128 = (code *)(**(code **)(*plVar9 + 0x30))(plVar9,3);
            }
            puStack_148 = &UNK_0f4c5438;
            uStack_1a0 = 0xe68237a;
            func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
            if (pcStack_180 != (code *)0x0) {
              uStack_1a0 = 0xe682389;
              (*pcStack_180)(&uStack_198);
            }
          }
          else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                  (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
            uStack_198 = (long *)0x2300000149614c;
            uStack_1a0 = 0xe68224b;
            func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
            if (((ulong)uStack_198 & 0x80000000000000) != 0) {
              uStack_1a0 = 0xe682276;
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
            }
            uStack_198 = (long *)0x0;
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1a0 = 0xe6823a0;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_0e6823a0:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0xe6823c7;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


