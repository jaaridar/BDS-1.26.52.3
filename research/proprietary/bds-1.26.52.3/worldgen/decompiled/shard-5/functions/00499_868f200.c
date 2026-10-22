/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x878f200 (ELF vaddr 0x868f200)
 * Label: caller-of-callee
 * Body:  [[0878f200, 087906c9] [08791570, 08791752]]
 * Ghidra: FUN_0878f200
 */


/* WARNING: Possible PIC construction at 0x0878f431: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0878f200(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [8];
  long *plVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  code *pcVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *******pppppppuVar21;
  undefined8 unaff_RBX;
  undefined8 ******ppppppuVar22;
  byte bVar23;
  undefined8 unaff_RBP;
  long *plVar24;
  undefined8 ******ppppppuVar25;
  undefined *puVar26;
  byte *pbVar27;
  undefined1 uVar28;
  undefined8 *unaff_R12;
  uint uVar29;
  undefined8 *unaff_R13;
  ulong unaff_R14;
  long *unaff_R15;
  bool bVar30;
  undefined1 auStack_208 [88];
  undefined8 uStack_1b0;
  char cStack_1a1;
  uint *puStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  code *pcStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  byte bStack_158;
  undefined8 *puStack_148;
  long *plStack_140;
  undefined1 auStack_138 [8];
  long *plStack_130;
  code *pcStack_128;
  code *pcStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  byte bStack_f8;
  undefined *puStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
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
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined1 auStack_40 [16];
  
  pcVar16 = (code *)param_3[7];
  uVar14 = unaff_R14;
  plStack_140 = param_5;
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar30 = false;
    }
    else {
      uStack_1b0 = 0x878f252;
      (*(code *)param_3[3])(param_3);
      bVar30 = (undefined *)param_3[7] == &UNK_08791780;
    }
    param_3[2] = &UNK_08791860;
    *(undefined4 *)(param_3 + 4) = 0xe68e1a5c;
    param_3[3] = &UNK_087919a0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0x878f2a2;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1b0 = 0x8790604;
      func_0x0eec74c0(0x18,0);
      uVar14 = 0;
    }
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    *param_3 = puVar4;
    pcVar16 = (code *)&UNK_08791780;
    param_3[7] = &UNK_08791780;
    if (bVar30) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    if (lVar8 == 0) goto LAB_0878f2e8;
LAB_0878f2ff:
    bVar23 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0878f2ff;
LAB_0878f2e8:
    uVar14 = param_3[5];
    uStack_1b0 = 0x878f2f6;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0878f2ff;
    uStack_1b0 = 0x878f331;
    lVar8 = func_0x048aead0(uVar14);
    bVar23 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar23 & 1) == 0) goto SUB_08791570;
  unaff_R13 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    unaff_R13 = &uStack_198;
    uStack_1b0 = 0x878f45d;
    func_0x048b1dc0(unaff_R13);
    puVar4 = uStack_198;
    uVar14 = uStack_190;
joined_r0x0878f469:
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1b0 = 0x878f477;
      puVar4 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar4 = (undefined8 *)*unaff_R13;
    if (puVar4 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1b0 = 0x878f35c;
      (*(code *)param_3[7])(0,param_3,0);
      puVar4 = (undefined8 *)*unaff_R13;
      goto joined_r0x0878f469;
    }
  }
  puStack_148 = (undefined8 *)puVar4[0xd];
  uStack_1b0 = 0x878f37b;
  bVar23 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar7 = plStack_140;
  if ((bVar23 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0x878f436;
    unaff_RBX = param_4;
    unaff_R12 = param_3;
    unaff_R14 = uVar14;
    unaff_R15 = param_2;
SUB_08791570:
    plVar7 = plStack_140;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x1971e5a4) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x87915cf;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x87915f1;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xe68e1a5c,puVar4);
    }
    lVar8 = *plVar7;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x8791601;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x48),lVar8);
    bVar23 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar23 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x879161e;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar23;
    if ((uVar14 >> 0x20 & 1) == 0) {
      uVar11 = param_3[5];
      uVar29 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar29;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8791655;
      cVar2 = func_0x08791d60(param_2,uVar11,puVar13,param_4,plVar7,2);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar28 = 2;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar29;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
    }
    else {
      if ((uVar14 & 0xfffffffe) != 0) {
        lVar8 = *plVar7;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x87916c1;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x50));
        if ((*(ulong *)((long)register0x00000020 + -0x50) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x87916e5;
        (*pcVar16)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x50) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar11 = param_3[5];
      uVar29 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x58) = uVar14;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar29;
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8791716;
      cVar2 = func_0x08791d60(param_2,uVar11,puVar13,param_4,plVar7,uVar14 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar28 = *(undefined1 *)((long)register0x00000020 + -0x58);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar29;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8791744;
    func_0x08791f30(param_2,uVar11,puVar13,param_4,plVar7,uVar28);
    return;
  }
  if (bVar23 != 1) {
    uStack_198 = (undefined8 *)0x120000012f2525;
    uStack_1b0 = 0x878f4af;
    func_0x0ed5ffe0(*plStack_140,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0x878f4d7;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0x878f3b2;
  uStack_b8 = param_4;
  func_0x0ed6d600(&lStack_68,*plStack_140);
  puStack_1a0 = (uint *)param_3[5];
  lStack_b0 = *plVar7;
  ppppppuVar22 = (undefined8 ******)((long)puStack_148 + 9);
  bVar30 = (*(byte *)(puStack_148 + 1) & 1) == 0;
  ppppppuVar25 = (undefined8 ******)puStack_148[3];
  if (bVar30) {
    ppppppuVar25 = ppppppuVar22;
  }
  uVar14 = (ulong)(*(byte *)(puStack_148 + 1) >> 1);
  if (!bVar30) {
    uVar14 = puStack_148[2];
  }
  plStack_c0 = param_2;
  if (ppppppuVar25 == (undefined8 ******)0x0) {
    puStack_e8 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_e8 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar25 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar14 + 9;
    cStack_1a1 = lVar8 == 0;
    uStack_1b0 = 0x878f518;
    puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar6 == (ulong *)0x0 && cStack_1a1 == '\0') {
      uStack_1b0 = 0x8790619;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar6 = uVar14;
    uStack_1b0 = 0x878f543;
    func_0x0eee2f00(puVar6 + 1,ppppppuVar25,uVar14);
    *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
    puStack_e8 = (undefined *)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  plVar7 = plStack_c0;
  uStack_1b0 = 0x878f58a;
  puVar5 = (uint *)func_0x0ed6d180(lStack_b0,&puStack_e8,0);
  if (((ulong)puStack_e8 & 0x80000000000000) != 0) {
    uStack_1b0 = 0x878f5bc;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_e8 & 0xff00ffffffffffff) - 8);
  }
  puStack_e8 = (undefined *)0x0;
  bVar30 = (*(byte *)(puStack_148 + 1) & 1) == 0;
  ppppppuVar25 = (undefined8 ******)puStack_148[3];
  if (bVar30) {
    ppppppuVar25 = ppppppuVar22;
  }
  uVar14 = (ulong)(*(byte *)(puStack_148 + 1) >> 1);
  if (!bVar30) {
    uVar14 = puStack_148[2];
  }
  uStack_1b0 = 0x878f5f0;
  cVar2 = (**(code **)(*plVar7 + 0xb8))(plVar7,ppppppuVar25,uVar14);
  if (cVar2 == '\0') {
    uStack_1b0 = 0x878f74c;
    _auStack_138 = (*(code *)*puStack_148)(puStack_1a0);
    uStack_1b0 = 0x878f774;
    func_0x0ed8bc80(&uStack_198,auStack_138,*(undefined1 *)(lStack_b0 + 0x2aa));
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
      lVar8 = uVar14 + 9;
      uStack_1b0 = 0x878f7c7;
      puStack_1a0 = puVar5;
      puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar6 == (ulong *)0x0) {
        uStack_1b0 = 0x879062b;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar6 = uVar14;
      uStack_1b0 = 0x878f7f7;
      func_0x0eee2f00(puVar6 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      puVar5 = puStack_1a0;
    }
    uStack_1b0 = 0x878f9b3;
    func_0x0ed5ffe0(lStack_b0,8,&pppppppuStack_a8);
    plVar7 = plStack_c0;
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0x878f9ea;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1b0 = 0x878fa10;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0x878f60e;
    (**(code **)(*plVar7 + 0x80))(auStack_138,plVar7,0x40);
    bStack_158 = bStack_f8;
    if (bStack_f8 == 1) {
      pcStack_188 = pcStack_128;
      uStack_198 = (undefined8 *)auStack_138;
      uStack_190 = (ulong)plStack_130;
LAB_0878f8a1:
      uVar14 = (ulong)((byte)uStack_198 >> 1);
      pcVar16 = (code *)((long)&uStack_198 + 1);
      if (((ulong)uStack_198 & 1) != 0) {
        uVar14 = uStack_190;
        pcVar16 = pcStack_188;
      }
      if (uVar14 != 0) {
        uStack_1b0 = 0x878f8cd;
        plVar7 = (long *)func_0x0eee3290();
        pcVar17 = pcVar16;
        for (uVar19 = uVar14 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar17 = *(code *)(*plVar7 + (ulong)(byte)*pcVar17 * 4);
          pcVar17 = pcVar17 + 1;
        }
        if (3 < uVar14) {
          do {
            *pcVar17 = *(code *)(*plVar7 + (ulong)(byte)*pcVar17 * 4);
            pcVar17[1] = *(code *)(*plVar7 + (ulong)(byte)pcVar17[1] * 4);
            pcVar17[2] = *(code *)(*plVar7 + (ulong)(byte)pcVar17[2] * 4);
            pcVar17[3] = *(code *)(*plVar7 + (ulong)(byte)pcVar17[3] * 4);
            pcVar17 = pcVar17 + 4;
          } while (pcVar17 != pcVar16 + uVar14);
        }
      }
      plVar7 = plStack_c0;
      if (((byte)uStack_198 & 1) == 0) {
        pcStack_c8 = pcStack_188;
        uStack_d8 = uStack_198;
        uStack_d0 = uStack_190;
      }
      else {
        uStack_1b0 = 0x878fa4b;
        func_0x0412e5e0(&uStack_d8,pcStack_188,uStack_190);
      }
    }
    else {
      uStack_198 = (undefined8 *)auStack_138;
      uStack_190 = (ulong)plStack_130;
      pcStack_188 = pcStack_128;
      pcStack_180 = pcStack_120;
      uStack_178 = lStack_118;
      pcStack_128 = (code *)0x0;
      pcStack_120 = (code *)0x0;
      lStack_118 = 0;
      lStack_170 = lStack_110;
      uStack_168 = uStack_108;
      puStack_160 = puStack_100;
      lStack_110 = 0;
      uStack_108 = 0;
      puStack_100 = (undefined *)0x0;
      uStack_1b0 = 0x878f894;
      func_0x048e6d60(auStack_138);
      if ((bStack_158 & 1) != 0) goto LAB_0878f8a1;
      pppppppuStack_a8 = (undefined8 *******)puStack_148[3];
      uStack_a0 = puStack_148[2];
      if ((*(byte *)(puStack_148 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar22;
        uStack_a0 = (ulong)(*(byte *)(puStack_148 + 1) >> 1);
      }
      uStack_1b0 = 0x878f690;
      func_0x0470d9a0(auStack_138,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar7 = (long *)((ulong)auStack_138 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_138 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar7 = plStack_130;
        pcVar16 = pcStack_128;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar7 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar7 + 9;
        uStack_1b0 = 0x878f6e6;
        puStack_1a0 = puVar5;
        puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar6 == (ulong *)0x0) {
          uStack_1b0 = 0x879063d;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar6 = (ulong)plVar7;
        uStack_1b0 = 0x878f716;
        func_0x0eee2f00(puVar6 + 1,pcVar16,plVar7);
        *(undefined1 *)((long)puVar6 + (long)plVar7 + 8U) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        puVar5 = puStack_1a0;
      }
      uStack_1b0 = 0x878fa90;
      func_0x0ed5ffe0(lStack_b0,8,&pppppppuStack_a8);
      plVar7 = plStack_c0;
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0x878fac7;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_138 & 1) != 0) {
        uStack_1b0 = 0x878faf0;
        func_0x0412a280(pcStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
      }
      uStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    if (bStack_158 == 1) {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1b0 = 0x878fb28;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      uStack_1b0 = 0x878fb34;
      func_0x048e6d60(&uStack_198);
    }
  }
  uStack_1b0 = 0x878fb40;
  (**(code **)(*plVar7 + 0xd0))(plVar7);
  lVar8 = *(long *)(puVar5 + 2);
  uVar29 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar29;
  if (puVar5[0x48] == 0) {
    uVar15 = puVar5[4];
LAB_0878fb87:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1b0 = 0x878fbb2;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_198,lVar1 + -0x18);
      uVar15 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar29)
          && (uVar15 = puVar5[4], uVar29 == uVar15 - 1)) goto LAB_0878fb87;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0x878fbfa;
    auStack_40 = (*(code *)*puStack_148)();
    uVar11 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      uVar14 = uStack_d0;
      pcVar16 = pcStack_c8;
    }
    if (uVar14 == 0) {
      uVar29 = 0x811c9dc5;
    }
    else {
      uVar19 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar29 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uVar29 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uVar29 = ((int)(char)pcVar16[uVar20 + 3] ^
                   ((int)(char)pcVar16[uVar20 + 2] ^
                   ((int)(char)pcVar16[uVar20 + 1] ^
                   ((int)(char)pcVar16[uVar20] ^ uVar29) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar19 != 0) {
        uVar14 = 0;
        do {
          uVar29 = ((int)(char)pcVar16[uVar14 + uVar20] ^ uVar29) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar19 != uVar14);
      }
    }
    if (lVar8 == 0) {
      uStack_1b0 = 0x878fcf3;
      lVar8 = func_0x048aead0(uVar11);
    }
    uStack_1b0 = 0x878fd06;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar11,lVar8,uVar29,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_198 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_1b0 = 0x878fd37;
      func_0x048b0d20(&uStack_198);
      puStack_58 = uStack_198;
      uStack_50 = uStack_190;
      if (uStack_198 == (undefined8 *)0x0) {
        lVar8 = *plStack_140;
        uStack_1b0 = 0x879040f;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1b0 = 0x8790425;
        uVar11 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar14 = uStack_d0;
          pcVar16 = pcStack_c8;
        }
        uStack_1b0 = 0x8790456;
        uVar11 = func_0x0412f8c0(uVar11,pcVar16,uVar14);
        uStack_1b0 = 0x879046a;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar30 = (*pbVar12 & 1) != 0;
        pbVar27 = pbVar12 + 1;
        if (bVar30) {
          pbVar27 = *(byte **)(pbVar12 + 0x10);
        }
        uVar14 = (ulong)(*pbVar12 >> 1);
        if (bVar30) {
          uVar14 = *(ulong *)(pbVar12 + 8);
        }
        auStack_138 = (undefined1  [8])0x0;
        uStack_1b0 = 0x879049c;
        func_0x0ee387f0(auStack_138,pbVar27,uVar14,1);
        uStack_1b0 = 0x87904ae;
        func_0x0ed5ffe0(lVar8,8,auStack_138);
        uStack_1b0 = 0x87904b8;
        FUN_0ee386e0(auStack_138);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1b0 = 0x87904d6;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0879059d;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    uStack_168 = 0;
    puStack_160 = (undefined *)0x0;
    uStack_178 = 0;
    lStack_170 = 0;
    pcStack_188 = (code *)0x0;
    pcStack_180 = (code *)0x0;
    uStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1b0 = 0x878fd71;
    func_0x05d84ba0(&uStack_198);
    uStack_1b0 = 0x878fd8b;
    func_0x05d9a920(&pppppppuStack_a8,&puStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1b0 = 0x878fd9c;
      (*pcStack_180)(&uStack_198);
    }
    bVar30 = (*(byte *)(puStack_148 + 1) & 1) != 0;
    if (bVar30) {
      ppppppuVar22 = (undefined8 ******)puStack_148[3];
    }
    uVar14 = (ulong)(*(byte *)(puStack_148 + 1) >> 1);
    if (bVar30) {
      uVar14 = puStack_148[2];
    }
    if (uVar14 == 0) {
      uVar29 = 0x811c9dc5;
    }
    else {
      uVar19 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar29 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uVar29 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uVar29 = ((int)*(char *)((long)ppppppuVar22 + uVar20 + 3) ^
                   ((int)*(char *)((long)ppppppuVar22 + uVar20 + 2) ^
                   ((int)*(char *)((long)ppppppuVar22 + uVar20 + 1) ^
                   ((int)*(char *)((long)ppppppuVar22 + uVar20) ^ uVar29) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar19 != 0) {
        uVar14 = 0;
        do {
          uVar29 = ((int)*(char *)((long)ppppppuVar22 + uVar14 + uVar20) ^ uVar29) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar19 != uVar14);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x1971e5a4) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1b0 = 0x878fea2;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      uStack_1b0 = 0x878fec6;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xe68e1a5c,puVar4);
    }
    plVar24 = (long *)param_3[5];
    puStack_148 = puVar13;
    if (DAT_0f5dce18 == '\0') {
      uStack_1b0 = 0x879064e;
      iVar3 = func_0x04108328(&DAT_0f5dce18);
      if (iVar3 != 0) {
        uStack_1b0 = 0x879065b;
        func_0x0878a960();
        uStack_1b0 = 0x8790675;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dcd98,0xf53dab8);
        uStack_1b0 = 0x8790681;
        FUN_0410844d(&DAT_0f5dce18);
      }
    }
    plVar18 = (long *)(*plVar24 +
                      (ulong)((int)((ulong)(plVar24[1] - *plVar24) >> 3) - 1U &
                             *(uint *)(_DAT_0f5dcd98 + 4)) * 8);
    do {
      lVar8 = *plVar18;
      if (lVar8 == -1) {
        plVar10 = (long *)plVar24[4];
        plVar18 = plVar10;
        goto LAB_0878ff44;
      }
      plVar18 = (long *)(plVar24[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar24[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dcd98 + 4));
    plVar10 = (long *)plVar24[4];
LAB_0878ff44:
    if (plVar18 == plVar10) {
      puVar26 = &DAT_0f5dcd98;
    }
    else {
      puVar26 = (undefined *)plVar18[2];
    }
    uStack_1b0 = 0x878ff66;
    auVar9 = (undefined1  [8])func_0x048b0c90(plVar24,puVar26,uVar29,1);
    plStack_e0 = plVar24;
    if (auVar9 == (undefined1  [8])0x0) {
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1b0 = 0x878ff7d;
      func_0x048b0d20(auStack_138);
      auVar9 = auStack_138;
      plStack_e0 = plStack_130;
    }
    uStack_108 = 0;
    puStack_100 = (undefined *)0x0;
    lStack_118 = 0;
    lStack_110 = 0;
    pcStack_128 = (code *)0x0;
    pcStack_120 = (code *)0x0;
    auStack_138 = (undefined1  [8])0x0;
    plStack_130 = (long *)0x0;
    uStack_1b0 = 0x878ffc1;
    puStack_e8 = (undefined *)auVar9;
    func_0x05d84ba0(auStack_138);
    uStack_1b0 = 0x878ffd8;
    func_0x05d9a920(&uStack_198,&puStack_e8,auStack_138);
    if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
        bVar30 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar21 = pppppppuStack_a8;
        if (cStack_84 == '\x02') {
          pppppppuVar21 = &pppppppuStack_a8;
        }
        uStack_1b0 = 0x87905e9;
        lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar21);
        bVar30 = lVar8 != 0;
      }
    }
    else {
      bVar30 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1b0 = 0x8790017;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_120 != (code *)0x0) {
      uStack_1b0 = 0x879002b;
      (*pcStack_120)(auStack_138);
    }
    if (bVar30) {
      lStack_170 = param_3[5];
      *puStack_148 = 0;
      *(undefined4 *)(puStack_148 + 2) = 0;
      pcStack_188 = (code *)&UNK_0878ac10;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x3b4972281);
      uStack_198 = puStack_148;
      uStack_168 = 0;
      puStack_160 = &UNK_0878ab30;
      lStack_118 = plStack_140[4];
      auStack_138 = (undefined1  [8])*plStack_140;
      plStack_130 = (long *)plStack_140[1];
      pcStack_128 = (code *)plStack_140[2];
      pcStack_120 = (code *)plStack_140[3];
      plVar24 = (long *)plStack_140[2];
      if (plVar24 == (long *)0x0) {
        pcStack_128 = (code *)0x0;
      }
      else {
        uStack_1b0 = 0x87900c7;
        pcStack_128 = (code *)(**(code **)(*plVar24 + 0x30))(plVar24,0);
      }
      puStack_e8 = &UNK_0f12afd8;
      uStack_1b0 = 0x87901bd;
      func_0x0ed75bc0(&puStack_e8,plVar7,&uStack_198,uStack_b8,auStack_138);
      if (pcStack_180 != (code *)0x0) {
        uStack_1b0 = 0x87901d2;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar24 = (long *)param_3[5];
      if (DAT_0f5dced0 == '\0') {
        uStack_1b0 = 0x8790692;
        iVar3 = func_0x04108328(&DAT_0f5dced0);
        if (iVar3 != 0) {
          uStack_1b0 = 0x879069f;
          func_0x0878bc70();
          uStack_1b0 = 0x87906b9;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dce50,0xf53dab8);
          uStack_1b0 = 0x87906c5;
          FUN_0410844d(&DAT_0f5dced0);
        }
      }
      plVar18 = (long *)(*plVar24 +
                        (ulong)((int)((ulong)(plVar24[1] - *plVar24) >> 3) - 1U &
                               *(uint *)(_DAT_0f5dce50 + 4)) * 8);
      do {
        lVar8 = *plVar18;
        if (lVar8 == -1) {
          plVar10 = (long *)plVar24[4];
          plVar18 = plVar10;
          goto LAB_08790134;
        }
        plVar18 = (long *)(plVar24[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar24[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dce50 + 4));
      plVar10 = (long *)plVar24[4];
LAB_08790134:
      if (plVar18 == plVar10) {
        puVar26 = &DAT_0f5dce50;
      }
      else {
        puVar26 = (undefined *)plVar18[2];
      }
      uStack_1b0 = 0x87901ee;
      auVar9 = (undefined1  [8])func_0x048b0c90(plVar24,puVar26,uVar29,1);
      if (auVar9 == (undefined1  [8])0x0) {
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1b0 = 0x8790205;
        func_0x048b0d20(auStack_138);
        auVar9 = auStack_138;
        plVar24 = plStack_130;
      }
      uStack_108 = 0;
      puStack_100 = (undefined *)0x0;
      lStack_118 = 0;
      lStack_110 = 0;
      pcStack_128 = (code *)0x0;
      pcStack_120 = (code *)0x0;
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1b0 = 0x8790249;
      puStack_e8 = (undefined *)auVar9;
      plStack_e0 = plVar24;
      func_0x05d84ba0(auStack_138);
      uStack_1b0 = 0x8790260;
      func_0x05d9a920(&uStack_198,&puStack_e8,auStack_138);
      if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
          bVar30 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar21 = &pppppppuStack_a8;
          if (cStack_84 != '\x02') {
            pppppppuVar21 = pppppppuStack_a8;
          }
          uStack_1b0 = 0x879052f;
          lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar21);
          bVar30 = lVar8 != 0;
        }
      }
      else {
        bVar30 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1b0 = 0x879029f;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_120 != (code *)0x0) {
        uStack_1b0 = 0x87902b3;
        (*pcStack_120)(auStack_138);
      }
      if (bVar30) {
        lStack_170 = param_3[5];
        *puStack_148 = 0;
        puStack_148[1] = 0;
        *(undefined1 *)((long)puStack_148 + 0xe) = 1;
        *(undefined4 *)(puStack_148 + 2) = 1;
        pcStack_188 = (code *)&UNK_0878bf30;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x32da3027e);
        uStack_198 = puStack_148;
        uStack_168 = 0;
        puStack_160 = &UNK_0878be50;
        lStack_118 = plStack_140[4];
        auStack_138 = (undefined1  [8])*plStack_140;
        plStack_130 = (long *)plStack_140[1];
        pcStack_128 = (code *)plStack_140[2];
        pcStack_120 = (code *)plStack_140[3];
        plVar24 = (long *)plStack_140[2];
        if (plVar24 == (long *)0x0) {
          pcStack_128 = (code *)0x0;
        }
        else {
          uStack_1b0 = 0x8790354;
          pcStack_128 = (code *)(**(code **)(*plVar24 + 0x30))(plVar24,1);
        }
        puStack_e8 = &UNK_0f12b058;
        uStack_1b0 = 0x8790575;
        func_0x0ed75bc0(&puStack_e8,plVar7,&uStack_198,uStack_b8,auStack_138);
        if (pcStack_180 != (code *)0x0) {
          uStack_1b0 = 0x8790586;
          (*pcStack_180)(&uStack_198);
        }
      }
      else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
              (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
        uStack_198 = (undefined8 *)0x2300000149614c;
        uStack_1b0 = 0x87903b4;
        func_0x0ed5ffe0(*plStack_140,8,&uStack_198);
        if (((ulong)uStack_198 & 0x80000000000000) != 0) {
          uStack_1b0 = 0x87903e0;
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
        }
        uStack_198 = (undefined8 *)0x0;
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1b0 = 0x879059d;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_0879059d:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1b0 = 0x87905c4;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


