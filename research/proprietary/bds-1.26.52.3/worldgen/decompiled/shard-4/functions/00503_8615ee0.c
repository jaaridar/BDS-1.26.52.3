/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8715ee0 (ELF vaddr 0x8615ee0)
 * Label: caller-of-callee
 * Body:  [[08715ee0, 0871798c] [087191e0, 08719480]]
 * Ghidra: FUN_08715ee0
 */


/* WARNING: Possible PIC construction at 0x0871611b: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08715ee0(undefined8 param_1,long *param_2,undefined8 *param_3,ulong param_4,long *param_5)

{
  long lVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [8];
  undefined8 uVar10;
  byte *pbVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  code *pcVar17;
  ulong uVar18;
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
  undefined8 uStack_168;
  undefined *puStack_160;
  byte bStack_158;
  long *plStack_150;
  undefined1 auStack_148 [8];
  long *plStack_140;
  code *pcStack_138;
  code *pcStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  byte bStack_108;
  undefined *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  undefined8 *puStack_e0;
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
  uint *puStack_78;
  long lStack_70;
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
      uStack_1a0 = 0x8715f35;
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_087194b0;
    }
    param_3[2] = &UNK_08719590;
    *(undefined4 *)(param_3 + 4) = 0xd6ea9074;
    param_3[3] = &UNK_087197b0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0x8715f85;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar5 == (undefined8 *)0x0) {
      uStack_1a0 = 0x871783f;
      func_0x0eec74c0(0x40,0);
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    *param_3 = puVar5;
    pcVar16 = (code *)&UNK_087194b0;
    param_3[7] = &UNK_087194b0;
    if (bVar28) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    uVar14 = param_4;
    if (lVar8 == 0) goto LAB_08715fd2;
LAB_08715fe8:
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    uVar14 = unaff_R15;
    if (lVar8 != 0) goto LAB_08715fe8;
LAB_08715fd2:
    uVar14 = param_3[5];
    uStack_1a0 = 0x8715fe0;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_08715fe8;
    uStack_1a0 = 0x871601d;
    lVar8 = func_0x048aead0(uVar14);
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_087191e0;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1a0 = 0x8716144;
    func_0x048b1dc0(&uStack_198);
    puVar5 = uStack_198;
    uVar14 = uStack_190;
    unaff_R14 = &uStack_198;
joined_r0x0871614f:
    if (puVar5 == (undefined8 *)0x0) {
      uStack_1a0 = 0x871615d;
      puVar5 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar5 = (undefined8 *)*unaff_R14;
    if (puVar5 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1a0 = 0x8716047;
      (*(code *)param_3[7])(0,param_3,0);
      puVar5 = (undefined8 *)*unaff_R14;
      goto joined_r0x0871614f;
    }
  }
  puStack_e0 = (undefined8 *)puVar5[0xd];
  uStack_1a0 = 0x8716069;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar27 = plStack_f0;
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0x8716120;
    unaff_RBX = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = uVar14;
SUB_087191e0:
    plVar27 = plStack_f0;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar3 = *(char *)((long)param_3 + 0x24);
    puVar5 = (undefined8 *)*param_3;
    puVar13 = puVar5;
    if (cVar3 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x29156f8c) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x871923f;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar3 = *(char *)((long)param_3 + 0x24);
        puVar5 = (undefined8 *)*param_3;
      }
      if (cVar3 == '\x02') {
        puVar5 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x8719261;
      puVar13 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0xd6ea9074,puVar5);
    }
    lVar8 = *plVar27;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x8719271;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x871928e;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar14 >> 0x20 & 1) == 0) {
      uVar10 = param_3[5];
      uVar18 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar18;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x87192c9;
      cVar3 = func_0x08719de0(param_2,uVar10,puVar13,param_4,plVar27,4);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar18;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x87192f6;
      cVar3 = func_0x08719ff0(param_2,uVar10,puVar13,param_4,plVar27,4);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar18;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8719323;
      cVar3 = func_0x0871a230(param_2,uVar10,puVar13,param_4,plVar27,4);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar14 = 4;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar18;
    }
    else {
      if ((uVar14 & 0xfffffffc) != 0) {
        lVar8 = *plVar27;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x871938b;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x87193b3;
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
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x87193ed;
      cVar3 = func_0x08719de0(param_2,uVar10,puVar13,param_4,plVar27,uVar14 & 0xff);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x871941a;
      cVar3 = func_0x08719ff0(param_2,uVar10,puVar13,param_4,plVar27,uVar14);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8719443;
      cVar3 = func_0x0871a230(param_2,uVar10,puVar13,param_4,plVar27,uVar14);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x871947b;
    func_0x0871a460(param_2,uVar10,puVar13,param_4,plVar27,uVar14);
    return;
  }
  if (bVar22 != 1) {
    uStack_198 = (undefined8 *)0x120000012f2525;
    uStack_1a0 = 0x8716195;
    func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0x87161b8;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0x87160a8;
  plStack_150 = param_2;
  uStack_e8 = param_4;
  func_0x0ed6d600(&lStack_68,*plStack_f0);
  uStack_48 = param_3[5];
  lStack_70 = *plVar27;
  ppppppuVar21 = (undefined8 ******)((long)puStack_e0 + 9);
  bVar28 = (*(byte *)(puStack_e0 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_e0[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
  if (!bVar28) {
    uVar14 = puStack_e0[2];
  }
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_100 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_100 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar14 + 9;
    puStack_78 = (uint *)CONCAT71(puStack_78._1_7_,lVar8 == 0);
    uStack_1a0 = 0x87161f2;
    puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar6 == (ulong *)0x0 && (char)puStack_78 == '\0') {
      uStack_1a0 = 0x8717854;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar6 = uVar14;
    uStack_1a0 = 0x8716220;
    func_0x0eee2f00(puVar6 + 1,ppppppuVar24,uVar14);
    *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
    puStack_100 = (undefined *)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0x871625f;
  puStack_78 = (uint *)func_0x0ed6d180(lStack_70,&puStack_100,0);
  plVar27 = plStack_150;
  if (((ulong)puStack_100 & 0x80000000000000) != 0) {
    uStack_1a0 = 0x871629b;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_100 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_100 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_e0 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_e0[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
  if (!bVar28) {
    uVar14 = puStack_e0[2];
  }
  uStack_1a0 = 0x87162d3;
  cVar3 = (**(code **)(*plVar27 + 0xb8))(plVar27,ppppppuVar24,uVar14);
  if (cVar3 == '\0') {
    uStack_1a0 = 0x8716429;
    _auStack_148 = (*(code *)*puStack_e0)(uStack_48);
    uStack_1a0 = 0x871644f;
    func_0x0ed8bc80(&uStack_198,auStack_148,*(undefined1 *)(lStack_70 + 0x2aa));
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
      uStack_1a0 = 0x871649e;
      puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar6 == (ulong *)0x0) {
        uStack_1a0 = 0x8717866;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar6 = uVar14;
      uStack_1a0 = 0x87164cd;
      func_0x0eee2f00(puVar6 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_1a0 = 0x8716663;
    func_0x0ed5ffe0(lStack_70,8,&pppppppuStack_b8);
    plVar27 = plStack_150;
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0x8716697;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0x87166bb;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0x87162f2;
    (**(code **)(*plVar27 + 0x80))(auStack_148,plVar27,0x40);
    bStack_158 = bStack_108;
    if (bStack_108 == 1) {
      pcStack_188 = pcStack_138;
      uStack_198 = (undefined8 *)auStack_148;
      uStack_190 = (ulong)plStack_140;
LAB_0871655f:
      uVar14 = (ulong)((byte)uStack_198 >> 1);
      pcVar16 = (code *)((long)&uStack_198 + 1);
      if (((ulong)uStack_198 & 1) != 0) {
        uVar14 = uStack_190;
        pcVar16 = pcStack_188;
      }
      if (uVar14 != 0) {
        uStack_1a0 = 0x8716589;
        plVar7 = (long *)func_0x0eee3290();
        pcVar17 = pcVar16;
        for (uVar18 = uVar14 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
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
      if (((byte)uStack_198 & 1) == 0) {
        pcStack_c8 = pcStack_188;
        uStack_d8 = uStack_198;
        uStack_d0 = uStack_190;
      }
      else {
        uStack_1a0 = 0x87166ee;
        func_0x0412e5e0(&uStack_d8,pcStack_188,uStack_190);
      }
    }
    else {
      uStack_198 = (undefined8 *)auStack_148;
      uStack_190 = (ulong)plStack_140;
      pcStack_188 = pcStack_138;
      pcStack_180 = pcStack_130;
      uStack_178 = lStack_128;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      lStack_128 = 0;
      lStack_170 = lStack_120;
      uStack_168 = uStack_118;
      puStack_160 = puStack_110;
      lStack_120 = 0;
      uStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      uStack_1a0 = 0x8716552;
      func_0x048e6d60(auStack_148);
      if ((bStack_158 & 1) != 0) goto LAB_0871655f;
      pppppppuStack_b8 = (undefined8 *******)puStack_e0[3];
      uStack_b0 = puStack_e0[2];
      if ((*(byte *)(puStack_e0 + 1) & 1) == 0) {
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar21;
        uStack_b0 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
      }
      uStack_1a0 = 0x8716373;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_b8);
      plVar27 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar27 = plStack_140;
        pcVar16 = pcStack_138;
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)plVar27 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar27 + 9;
        uStack_1a0 = 0x87163c3;
        puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar6 == (ulong *)0x0) {
          uStack_1a0 = 0x8717878;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar6 = (ulong)plVar27;
        uStack_1a0 = 0x87163f2;
        func_0x0eee2f00(puVar6 + 1,pcVar16,plVar27);
        *(undefined1 *)((long)puVar6 + (long)plVar27 + 8U) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      uStack_1a0 = 0x871672d;
      func_0x0ed5ffe0(lStack_70,8,&pppppppuStack_b8);
      plVar27 = plStack_150;
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0x8716761;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1a0 = 0x8716787;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    if (bStack_158 == 1) {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0x87167bd;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      uStack_1a0 = 0x87167c7;
      func_0x048e6d60(&uStack_198);
    }
  }
  uStack_1a0 = 0x87167d4;
  (**(code **)(*plVar27 + 0xd0))(plVar27);
  puVar2 = puStack_78;
  lVar8 = *(long *)(puStack_78 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puStack_78 * 0x20);
  *puStack_78 = uVar23;
  if (puStack_78[0x48] == 0) {
    uVar15 = puStack_78[4];
LAB_08716823:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1a0 = 0x871684c;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_198,lVar1 + -0x18);
      uVar15 = puVar2[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar2[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puStack_78 + 0x46) + 0x18 + (ulong)(puStack_78[0x48] - 1) * 0x30) !=
            uVar23) && (uVar15 = puStack_78[4], uVar23 == uVar15 - 1)) goto LAB_08716823;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0x871688d;
    auStack_40 = (*(code *)*puStack_e0)();
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
      uVar18 = (ulong)((uint)uVar14 & 3);
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
      if (uVar18 != 0) {
        uVar14 = 0;
        do {
          uVar23 = ((int)(char)pcVar16[uVar14 + uVar19] ^ uVar23) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar18 != uVar14);
      }
    }
    if (lVar8 == 0) {
      uStack_1a0 = 0x8716981;
      lVar8 = func_0x048aead0(uVar10);
    }
    uStack_1a0 = 0x8716993;
    puStack_58 = (undefined8 *)FUN_048b0c90(uVar10,lVar8,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_198 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_1a0 = 0x87169c1;
      func_0x048b0d20(&uStack_198);
      puStack_58 = uStack_198;
      uStack_50 = uStack_190;
      if (uStack_198 == (undefined8 *)0x0) {
        lVar8 = *plStack_f0;
        uStack_1a0 = 0x8717086;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1a0 = 0x871709a;
        uVar10 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar14 = uStack_d0;
          pcVar16 = pcStack_c8;
        }
        uStack_1a0 = 0x87170c6;
        uVar10 = func_0x0412f8c0(uVar10,pcVar16,uVar14);
        uStack_1a0 = 0x87170da;
        pbVar11 = (byte *)func_0x0412f8c0(uVar10,&UNK_0125506d,1);
        bVar28 = (*pbVar11 & 1) != 0;
        pbVar25 = pbVar11 + 1;
        if (bVar28) {
          pbVar25 = *(byte **)(pbVar11 + 0x10);
        }
        uVar14 = (ulong)(*pbVar11 >> 1);
        if (bVar28) {
          uVar14 = *(ulong *)(pbVar11 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1a0 = 0x871710c;
        func_0x0ee387f0(auStack_148,pbVar25,uVar14,1);
        uStack_1a0 = 0x871711e;
        func_0x0ed5ffe0(lVar8,8,auStack_148);
        uStack_1a0 = 0x8717128;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0x8717144;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_087177bc;
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
    uStack_1a0 = 0x87169f6;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0x8716a0e;
    func_0x05d9a920(&pppppppuStack_b8,&puStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x8716a1d;
      (*pcStack_180)(&uStack_198);
    }
    bVar28 = (*(byte *)(puStack_e0 + 1) & 1) != 0;
    if (bVar28) {
      ppppppuVar21 = (undefined8 ******)puStack_e0[3];
    }
    uVar14 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
    if (bVar28) {
      uVar14 = puStack_e0[2];
    }
    if (uVar14 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar18 = (ulong)((uint)uVar14 & 3);
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
      if (uVar18 != 0) {
        uVar14 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar21 + uVar14 + uVar19) ^ uVar23) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar18 != uVar14);
      }
    }
    cVar3 = *(char *)((long)param_3 + 0x24);
    puVar5 = (undefined8 *)*param_3;
    puVar13 = puVar5;
    if (cVar3 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x29156f8c) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1a0 = 0x8716b1e;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar3 = *(char *)((long)param_3 + 0x24);
        puVar5 = (undefined8 *)*param_3;
      }
      if (cVar3 == '\x02') {
        puVar5 = param_3;
      }
      uStack_1a0 = 0x8716b40;
      puVar13 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0xd6ea9074,puVar5);
    }
    plVar27 = (long *)param_3[5];
    if (DAT_0f5da1d0 == '\0') {
      uStack_1a0 = 0x8717889;
      iVar4 = FUN_04108328(&DAT_0f5da1d0);
      if (iVar4 != 0) {
        uStack_1a0 = 0x8717896;
        func_0x087080f0();
        uStack_1a0 = 0x87178b0;
        __cxa_atexit(&UNK_048ae800,&DAT_0f5da150,0xf53dab8);
        uStack_1a0 = 0x87178bc;
        func_0x0410844d(&DAT_0f5da1d0);
      }
    }
    plVar7 = (long *)(*plVar27 +
                     (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                            *(uint *)(_DAT_0f5da150 + 4)) * 8);
    do {
      lVar8 = *plVar7;
      if (lVar8 == -1) {
        plVar12 = (long *)plVar27[4];
        plVar7 = plVar12;
        goto LAB_08716ba4;
      }
      plVar7 = (long *)(plVar27[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5da150 + 4));
    plVar12 = (long *)plVar27[4];
LAB_08716ba4:
    if (plVar7 == plVar12) {
      puVar26 = &DAT_0f5da150;
    }
    else {
      puVar26 = (undefined *)plVar7[2];
    }
    uStack_1a0 = 0x8716bc5;
    auVar9 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
    plStack_f8 = plVar27;
    if (auVar9 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1a0 = 0x8716bdc;
      func_0x048b0d20(auStack_148);
      auVar9 = auStack_148;
      plStack_f8 = plStack_140;
    }
    uStack_118 = 0;
    puStack_110 = (undefined *)0x0;
    lStack_128 = 0;
    lStack_120 = 0;
    pcStack_138 = (code *)0x0;
    pcStack_130 = (code *)0x0;
    auStack_148 = (undefined1  [8])0x0;
    plStack_140 = (long *)0x0;
    uStack_1a0 = 0x8716c1a;
    puStack_100 = (undefined *)auVar9;
    func_0x05d84ba0(auStack_148);
    uStack_1a0 = 0x8716c2f;
    func_0x05d9a920(&uStack_198,&puStack_100,auStack_148);
    if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
        bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar20 = pppppppuStack_b8;
        if (cStack_94 == '\x02') {
          pppppppuVar20 = &pppppppuStack_b8;
        }
        uStack_1a0 = 0x8717702;
        lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
        bVar28 = lVar8 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x8716c6d;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1a0 = 0x8716c7e;
      (*pcStack_130)(auStack_148);
    }
    if (bVar28) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar13 + 7) != 0xffffffff) {
        uStack_1a0 = 0x8716cac;
        (**(code **)(&UNK_0f127020 + (ulong)*(uint *)(puVar13 + 7) * 8))(auStack_148,puVar13);
      }
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *(undefined4 *)(puVar13 + 7) = 0;
      pcStack_188 = (code *)&UNK_087083f0;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x3946de034);
      uStack_168 = 0;
      puStack_160 = &UNK_08708310;
      lStack_128 = plStack_f0[4];
      auStack_148 = (undefined1  [8])*plStack_f0;
      plStack_140 = (long *)plStack_f0[1];
      pcStack_138 = (code *)plStack_f0[2];
      pcStack_130 = (code *)plStack_f0[3];
      plVar27 = (long *)plStack_f0[2];
      lStack_170 = lVar8;
      if (plVar27 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
        uStack_198 = puVar13;
      }
      else {
        uStack_1a0 = 0x8716d3b;
        uStack_198 = puVar13;
        pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,0);
      }
      puStack_100 = &UNK_0f1278d0;
      uStack_1a0 = 0x871704c;
      func_0x0ed75bc0(&puStack_100,plStack_150,&uStack_198,uStack_e8,auStack_148);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x871705f;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar27 = (long *)param_3[5];
      if (DAT_0f5da458 == '\0') {
        uStack_1a0 = 0x87178cd;
        iVar4 = FUN_04108328(&DAT_0f5da458);
        if (iVar4 != 0) {
          uStack_1a0 = 0x87178da;
          func_0x0870d320();
          uStack_1a0 = 0x87178f4;
          __cxa_atexit(&UNK_048ae800,&DAT_0f5da3d8,0xf53dab8);
          uStack_1a0 = 0x8717900;
          func_0x0410844d(&DAT_0f5da458);
        }
      }
      plVar7 = (long *)(*plVar27 +
                       (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                              *(uint *)(_DAT_0f5da3d8 + 4)) * 8);
      do {
        lVar8 = *plVar7;
        if (lVar8 == -1) {
          plVar12 = (long *)plVar27[4];
          plVar7 = plVar12;
          goto LAB_08716db4;
        }
        plVar7 = (long *)(plVar27[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5da3d8 + 4));
      plVar12 = (long *)plVar27[4];
LAB_08716db4:
      if (plVar7 == plVar12) {
        puVar26 = &DAT_0f5da3d8;
      }
      else {
        puVar26 = (undefined *)plVar7[2];
      }
      uStack_1a0 = 0x8716e11;
      auVar9 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
      if (auVar9 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1a0 = 0x8716e28;
        func_0x048b0d20(auStack_148);
        auVar9 = auStack_148;
        plVar27 = plStack_140;
      }
      uStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1a0 = 0x8716e66;
      puStack_100 = (undefined *)auVar9;
      plStack_f8 = plVar27;
      func_0x05d84ba0(auStack_148);
      uStack_1a0 = 0x8716e7b;
      func_0x05d9a920(&uStack_198,&puStack_100,auStack_148);
      if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
          bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar20 = pppppppuStack_b8;
          if (cStack_94 == '\x02') {
            pppppppuVar20 = &pppppppuStack_b8;
          }
          uStack_1a0 = 0x8717806;
          lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
          bVar28 = lVar8 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x8716eb9;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1a0 = 0x8716eca;
        (*pcStack_130)(auStack_148);
      }
      if (bVar28) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar13 + 7) != 0xffffffff) {
          uStack_1a0 = 0x8716ef8;
          (**(code **)(&UNK_0f127020 + (ulong)*(uint *)(puVar13 + 7) * 8))(auStack_148,puVar13);
        }
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[4] = 0;
        *(undefined4 *)(puVar13 + 3) = 0xffffffff;
        *(undefined4 *)(puVar13 + 4) = 0x3f800000;
        *(undefined1 *)((long)puVar13 + 0x24) = 1;
        *(undefined4 *)(puVar13 + 7) = 1;
        pcStack_188 = (code *)&UNK_0870d640;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x3631470ba);
        uStack_168 = 0;
        puStack_160 = &UNK_0870d560;
        lStack_128 = plStack_f0[4];
        auStack_148 = (undefined1  [8])*plStack_f0;
        plStack_140 = (long *)plStack_f0[1];
        pcStack_138 = (code *)plStack_f0[2];
        pcStack_130 = (code *)plStack_f0[3];
        plVar27 = (long *)plStack_f0[2];
        lStack_170 = lVar8;
        if (plVar27 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
          uStack_198 = puVar13;
        }
        else {
          uStack_1a0 = 0x8716fa4;
          uStack_198 = puVar13;
          pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,1);
        }
        puStack_100 = &UNK_0f127950;
        uStack_1a0 = 0x87173e4;
        func_0x0ed75bc0(&puStack_100,plStack_150,&uStack_198,uStack_e8,auStack_148);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0x87173f7;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar27 = (long *)param_3[5];
        if (DAT_0f5da510 == '\0') {
          uStack_1a0 = 0x8717911;
          iVar4 = FUN_04108328(&DAT_0f5da510);
          if (iVar4 != 0) {
            uStack_1a0 = 0x871791e;
            func_0x0870f610();
            uStack_1a0 = 0x8717938;
            __cxa_atexit(&UNK_048ae800,&DAT_0f5da490,0xf53dab8);
            uStack_1a0 = 0x8717944;
            func_0x0410844d(&DAT_0f5da510);
          }
        }
        plVar7 = (long *)(*plVar27 +
                         (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                *(uint *)(_DAT_0f5da490 + 4)) * 8);
        do {
          lVar8 = *plVar7;
          if (lVar8 == -1) {
            plVar12 = (long *)plVar27[4];
            plVar7 = plVar12;
            goto LAB_0871715d;
          }
          plVar7 = (long *)(plVar27[3] + lVar8 * 0x18);
        } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5da490 + 4));
        plVar12 = (long *)plVar27[4];
LAB_0871715d:
        if (plVar7 == plVar12) {
          puVar26 = &DAT_0f5da490;
        }
        else {
          puVar26 = (undefined *)plVar7[2];
        }
        uStack_1a0 = 0x87171ba;
        auVar9 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
        if (auVar9 == (undefined1  [8])0x0) {
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1a0 = 0x87171d1;
          func_0x048b0d20(auStack_148);
          auVar9 = auStack_148;
          plVar27 = plStack_140;
        }
        uStack_118 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_128 = 0;
        lStack_120 = 0;
        pcStack_138 = (code *)0x0;
        pcStack_130 = (code *)0x0;
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1a0 = 0x871720f;
        puStack_100 = (undefined *)auVar9;
        plStack_f8 = plVar27;
        func_0x05d84ba0(auStack_148);
        uStack_1a0 = 0x8717224;
        func_0x05d9a920(&uStack_198,&puStack_100,auStack_148);
        if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0))) {
          if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
            bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
          }
          else {
            pppppppuVar20 = pppppppuStack_b8;
            if (cStack_94 == '\x02') {
              pppppppuVar20 = &pppppppuStack_b8;
            }
            uStack_1a0 = 0x8717824;
            lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
            bVar28 = lVar8 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0x8717262;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_130 != (code *)0x0) {
          uStack_1a0 = 0x8717273;
          (*pcStack_130)(auStack_148);
        }
        if (bVar28) {
          lVar8 = param_3[5];
          if ((ulong)*(uint *)(puVar13 + 7) != 0xffffffff) {
            uStack_1a0 = 0x87172a1;
            (**(code **)(&UNK_0f127020 + (ulong)*(uint *)(puVar13 + 7) * 8))(auStack_148,puVar13);
          }
          puVar13[2] = 0;
          puVar13[3] = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined4 *)(puVar13 + 3) = 0xffffffff;
          puVar13[4] = 0;
          puVar13[5] = 0;
          puVar13[6] = 0;
          *(undefined4 *)(puVar13 + 7) = 2;
          pcStack_188 = (code *)&UNK_0870f920;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x363f4e0d6);
          uStack_168 = 0;
          puStack_160 = &UNK_0870f840;
          lStack_128 = plStack_f0[4];
          auStack_148 = (undefined1  [8])*plStack_f0;
          plStack_140 = (long *)plStack_f0[1];
          pcStack_138 = (code *)plStack_f0[2];
          pcStack_130 = (code *)plStack_f0[3];
          plVar27 = (long *)plStack_f0[2];
          lStack_170 = lVar8;
          if (plVar27 == (long *)0x0) {
            pcStack_138 = (code *)0x0;
            uStack_198 = puVar13;
          }
          else {
            uStack_1a0 = 0x8717345;
            uStack_198 = puVar13;
            pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,2);
          }
          puStack_100 = &UNK_0f1279d0;
          uStack_1a0 = 0x87176cb;
          func_0x0ed75bc0(&puStack_100,plStack_150,&uStack_198,uStack_e8,auStack_148);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0x87176de;
            (*pcStack_180)(&uStack_198);
          }
        }
        else {
          plVar27 = (long *)param_3[5];
          if (DAT_0f5da5c8 == '\0') {
            uStack_1a0 = 0x8717955;
            iVar4 = FUN_04108328(&DAT_0f5da5c8);
            if (iVar4 != 0) {
              uStack_1a0 = 0x8717962;
              func_0x08711e10();
              uStack_1a0 = 0x871797c;
              __cxa_atexit(&UNK_048ae800,&DAT_0f5da548,0xf53dab8);
              uStack_1a0 = 0x8717988;
              func_0x0410844d(&DAT_0f5da5c8);
            }
          }
          plVar7 = (long *)(*plVar27 +
                           (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                  *(uint *)(_DAT_0f5da548 + 4)) * 8);
          do {
            lVar8 = *plVar7;
            if (lVar8 == -1) {
              plVar12 = (long *)plVar27[4];
              plVar7 = plVar12;
              goto LAB_08717410;
            }
            plVar7 = (long *)(plVar27[3] + lVar8 * 0x18);
          } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5da548 + 4));
          plVar12 = (long *)plVar27[4];
LAB_08717410:
          if (plVar7 == plVar12) {
            puVar26 = &DAT_0f5da548;
          }
          else {
            puVar26 = (undefined *)plVar7[2];
          }
          uStack_1a0 = 0x871746d;
          auVar9 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
          if (auVar9 == (undefined1  [8])0x0) {
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1a0 = 0x8717484;
            func_0x048b0d20(auStack_148);
            auVar9 = auStack_148;
            plVar27 = plStack_140;
          }
          uStack_118 = 0;
          puStack_110 = (undefined *)0x0;
          lStack_128 = 0;
          lStack_120 = 0;
          pcStack_138 = (code *)0x0;
          pcStack_130 = (code *)0x0;
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1a0 = 0x87174c2;
          puStack_100 = (undefined *)auVar9;
          plStack_f8 = plVar27;
          func_0x05d84ba0(auStack_148);
          uStack_1a0 = 0x87174d7;
          func_0x05d9a920(&uStack_198,&puStack_100,auStack_148);
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
              uStack_1a0 = 0x8717753;
              lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
              bVar28 = lVar8 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0x8717514;
            (*pcStack_180)(&uStack_198);
          }
          if (pcStack_130 != (code *)0x0) {
            uStack_1a0 = 0x8717525;
            (*pcStack_130)(auStack_148);
          }
          if (bVar28) {
            lVar8 = param_3[5];
            if ((ulong)*(uint *)(puVar13 + 7) != 0xffffffff) {
              uStack_1a0 = 0x8717552;
              (**(code **)(&UNK_0f127020 + (ulong)*(uint *)(puVar13 + 7) * 8))(auStack_148,puVar13);
            }
            puVar13[2] = 0;
            puVar13[3] = 0;
            *puVar13 = 0;
            puVar13[1] = 0;
            *(undefined4 *)(puVar13 + 3) = 0xffffffff;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            *(undefined4 *)(puVar13 + 7) = 3;
            pcStack_188 = (code *)&UNK_08712120;
            pcStack_180 = (code *)0x0;
            uStack_178 = CONCAT35(uStack_178._5_3_,0x344149ffd);
            uStack_168 = 0;
            puStack_160 = &UNK_08712040;
            lStack_128 = plStack_f0[4];
            auStack_148 = (undefined1  [8])*plStack_f0;
            plStack_140 = (long *)plStack_f0[1];
            pcStack_138 = (code *)plStack_f0[2];
            pcStack_130 = (code *)plStack_f0[3];
            plVar27 = (long *)plStack_f0[2];
            lStack_170 = lVar8;
            if (plVar27 == (long *)0x0) {
              pcStack_138 = (code *)0x0;
              uStack_198 = puVar13;
            }
            else {
              uStack_1a0 = 0x87175f6;
              uStack_198 = puVar13;
              pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,3);
            }
            puStack_100 = &UNK_0f127a50;
            uStack_1a0 = 0x8717796;
            func_0x0ed75bc0(&puStack_100,plStack_150,&uStack_198,uStack_e8,auStack_148);
            if (pcStack_180 != (code *)0x0) {
              uStack_1a0 = 0x87177a5;
              (*pcStack_180)(&uStack_198);
            }
          }
          else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                  (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
            uStack_198 = (undefined8 *)0x2300000149614c;
            uStack_1a0 = 0x871765b;
            func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
            if (((ulong)uStack_198 & 0x80000000000000) != 0) {
              uStack_1a0 = 0x8717686;
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
            }
            uStack_198 = (undefined8 *)0x0;
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1a0 = 0x87177bc;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_087177bc:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0x87177e3;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


