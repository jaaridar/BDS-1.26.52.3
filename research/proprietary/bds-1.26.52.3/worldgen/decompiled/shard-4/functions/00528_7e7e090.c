/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7f7e090 (ELF vaddr 0x7e7e090)
 * Label: caller-of-callee
 * Body:  [[07f7e090, 07f7fb8d] [07f813b0, 07f81650]]
 * Ghidra: FUN_07f7e090
 */


/* WARNING: Possible PIC construction at 0x07f7e2d7: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07f7e090(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

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
  undefined8 unaff_RBX;
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
  undefined8 uStack_e8;
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
  uVar14 = unaff_R15;
  plStack_f0 = param_5;
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] != (code *)0x0) {
      uStack_1a0 = 0x7f7e0e2;
      (*(code *)param_3[3])(param_3);
    }
    param_3[2] = &UNK_07f7b9a0;
    *(undefined4 *)(param_3 + 4) = 0xba1f7f05;
    param_3[3] = &UNK_07f7bbb0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0x7f7e11f;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar5 == (undefined8 *)0x0) {
      uStack_1a0 = 0x7f7fa3d;
      func_0x0eec74c0(0x50,0);
    }
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0xffffffffffffffff;
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
    *(undefined4 *)(puVar5 + 9) = 0;
    *param_3 = puVar5;
    puVar26 = (undefined *)param_3[7];
    pcVar16 = (code *)&UNK_07f7b8c0;
    param_3[7] = &UNK_07f7b8c0;
    if (puVar26 == &UNK_07f7b8c0) {
      lVar8 = param_3[6];
      param_3[6] = lVar8;
      if (lVar8 != 0) goto LAB_07f7e1a4;
    }
    else {
      param_3[6] = 0;
    }
LAB_07f7e18e:
    uVar14 = param_3[5];
    uStack_1a0 = 0x7f7e19c;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_07f7e1a4;
    uStack_1a0 = 0x7f7e1d9;
    lVar8 = func_0x048aead0(uVar14);
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    if (lVar8 == 0) goto LAB_07f7e18e;
LAB_07f7e1a4:
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_07f813b0;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1a0 = 0x7f7e300;
    func_0x048b1dc0(&uStack_198);
    puVar5 = uStack_198;
    uVar14 = uStack_190;
    unaff_R14 = &uStack_198;
joined_r0x07f7e30b:
    if (puVar5 == (undefined8 *)0x0) {
      uStack_1a0 = 0x7f7e319;
      puVar5 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar5 = (undefined8 *)*unaff_R14;
    if (puVar5 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1a0 = 0x7f7e203;
      (*(code *)param_3[7])(0,param_3,0);
      puVar5 = (undefined8 *)*unaff_R14;
      goto joined_r0x07f7e30b;
    }
  }
  puStack_e0 = (undefined8 *)puVar5[0xd];
  uStack_1a0 = 0x7f7e225;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar27 = plStack_f0;
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0x7f7e2dc;
    unaff_RBX = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = uVar14;
SUB_07f813b0:
    plVar27 = plStack_f0;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar3 = *(char *)((long)param_3 + 0x24);
    puVar5 = (undefined8 *)*param_3;
    puVar13 = puVar5;
    if (cVar3 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x45e080fb) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x7f8140f;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar3 = *(char *)((long)param_3 + 0x24);
        puVar5 = (undefined8 *)*param_3;
      }
      if (cVar3 == '\x02') {
        puVar5 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x7f81431;
      puVar13 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0xba1f7f05,puVar5);
    }
    lVar8 = *plVar27;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x7f81441;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x7f8145e;
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
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x7f81499;
      cVar3 = func_0x07f81680(param_2,uVar10,puVar13,param_4,plVar27,4);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar18;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x7f814c6;
      cVar3 = func_0x07f818a0(param_2,uVar10,puVar13,param_4,plVar27,4);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar18;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x7f814f3;
      cVar3 = func_0x07f81ae0(param_2,uVar10,puVar13,param_4,plVar27,4);
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
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x7f8155b;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x7f81583;
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
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x7f815bd;
      cVar3 = func_0x07f81680(param_2,uVar10,puVar13,param_4,plVar27,uVar14 & 0xff);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x7f815ea;
      cVar3 = func_0x07f818a0(param_2,uVar10,puVar13,param_4,plVar27,uVar14);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x7f81613;
      cVar3 = func_0x07f81ae0(param_2,uVar10,puVar13,param_4,plVar27,uVar14);
      if (cVar3 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x7f8164b;
    func_0x07f81d20(param_2,uVar10,puVar13,param_4,plVar27,uVar14);
    return;
  }
  if (bVar22 != 1) {
    uStack_198 = (undefined8 *)0x120000012f2525;
    uStack_1a0 = 0x7f7e351;
    func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0x7f7e374;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0x7f7e264;
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
    uStack_1a0 = 0x7f7e3ae;
    puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar6 == (ulong *)0x0 && (char)puStack_78 == '\0') {
      uStack_1a0 = 0x7f7fa55;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar6 = uVar14;
    uStack_1a0 = 0x7f7e3dc;
    func_0x0eee2f00(puVar6 + 1,ppppppuVar24,uVar14);
    *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
    puStack_100 = (undefined *)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0x7f7e41b;
  puStack_78 = (uint *)func_0x0ed6d180(lStack_70,&puStack_100,0);
  plVar27 = plStack_150;
  if (((ulong)puStack_100 & 0x80000000000000) != 0) {
    uStack_1a0 = 0x7f7e457;
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
  uStack_1a0 = 0x7f7e48f;
  cVar3 = (**(code **)(*plVar27 + 0xb8))(plVar27,ppppppuVar24,uVar14);
  if (cVar3 == '\0') {
    uStack_1a0 = 0x7f7e5e5;
    _auStack_148 = (*(code *)*puStack_e0)(uStack_48);
    uStack_1a0 = 0x7f7e60b;
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
      uStack_1a0 = 0x7f7e65a;
      puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar6 == (ulong *)0x0) {
        uStack_1a0 = 0x7f7fa67;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar6 = uVar14;
      uStack_1a0 = 0x7f7e689;
      func_0x0eee2f00(puVar6 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_1a0 = 0x7f7e823;
    func_0x0ed5ffe0(lStack_70,8,&pppppppuStack_b8);
    plVar27 = plStack_150;
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0x7f7e857;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0x7f7e87b;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0x7f7e4ae;
    (**(code **)(*plVar27 + 0x80))(auStack_148,plVar27,0x40);
    bStack_158 = bStack_108;
    if (bStack_108 == 1) {
      pcStack_188 = pcStack_138;
      uStack_198 = (undefined8 *)auStack_148;
      uStack_190 = (ulong)plStack_140;
LAB_07f7e71b:
      uVar14 = (ulong)((byte)uStack_198 >> 1);
      pcVar16 = (code *)((long)&uStack_198 + 1);
      if (((ulong)uStack_198 & 1) != 0) {
        uVar14 = uStack_190;
        pcVar16 = pcStack_188;
      }
      if (uVar14 != 0) {
        uStack_1a0 = 0x7f7e749;
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
        uStack_1a0 = 0x7f7e8ae;
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
      uStack_1a0 = 0x7f7e70e;
      func_0x048e6d60(auStack_148);
      if ((bStack_158 & 1) != 0) goto LAB_07f7e71b;
      pppppppuStack_b8 = (undefined8 *******)puStack_e0[3];
      uStack_b0 = puStack_e0[2];
      if ((*(byte *)(puStack_e0 + 1) & 1) == 0) {
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar21;
        uStack_b0 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
      }
      uStack_1a0 = 0x7f7e52f;
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
        uStack_1a0 = 0x7f7e57f;
        puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar6 == (ulong *)0x0) {
          uStack_1a0 = 0x7f7fa79;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar6 = (ulong)plVar27;
        uStack_1a0 = 0x7f7e5ae;
        func_0x0eee2f00(puVar6 + 1,pcVar16,plVar27);
        *(undefined1 *)((long)puVar6 + (long)plVar27 + 8U) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      uStack_1a0 = 0x7f7e8ed;
      func_0x0ed5ffe0(lStack_70,8,&pppppppuStack_b8);
      plVar27 = plStack_150;
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0x7f7e921;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1a0 = 0x7f7e947;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    if (bStack_158 == 1) {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0x7f7e97d;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      uStack_1a0 = 0x7f7e987;
      func_0x048e6d60(&uStack_198);
    }
  }
  uStack_1a0 = 0x7f7e994;
  (**(code **)(*plVar27 + 0xd0))(plVar27);
  puVar2 = puStack_78;
  lVar8 = *(long *)(puStack_78 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puStack_78 * 0x20);
  *puStack_78 = uVar23;
  if (puStack_78[0x48] == 0) {
    uVar15 = puStack_78[4];
LAB_07f7e9e3:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1a0 = 0x7f7ea0c;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_198,lVar1 + -0x18);
      uVar15 = puVar2[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar2[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puStack_78 + 0x46) + 0x18 + (ulong)(puStack_78[0x48] - 1) * 0x30) !=
            uVar23) && (uVar15 = puStack_78[4], uVar23 == uVar15 - 1)) goto LAB_07f7e9e3;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0x7f7ea4d;
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
      uStack_1a0 = 0x7f7eb41;
      lVar8 = func_0x048aead0(uVar10);
    }
    uStack_1a0 = 0x7f7eb53;
    puStack_58 = (undefined8 *)FUN_048b0c90(uVar10,lVar8,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_198 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_1a0 = 0x7f7eb81;
      func_0x048b0d20(&uStack_198);
      puStack_58 = uStack_198;
      uStack_50 = uStack_190;
      if (uStack_198 == (undefined8 *)0x0) {
        lVar8 = *plStack_f0;
        uStack_1a0 = 0x7f7f266;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1a0 = 0x7f7f27a;
        uVar10 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar14 = uStack_d0;
          pcVar16 = pcStack_c8;
        }
        uStack_1a0 = 0x7f7f2a6;
        uVar10 = func_0x0412f8c0(uVar10,pcVar16,uVar14);
        uStack_1a0 = 0x7f7f2ba;
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
        uStack_1a0 = 0x7f7f2ec;
        func_0x0ee387f0(auStack_148,pbVar25,uVar14,1);
        uStack_1a0 = 0x7f7f2fe;
        func_0x0ed5ffe0(lVar8,8,auStack_148);
        uStack_1a0 = 0x7f7f308;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0x7f7f324;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_07f7f9b7;
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
    uStack_1a0 = 0x7f7ebb6;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0x7f7ebce;
    func_0x05d9a920(&pppppppuStack_b8,&puStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x7f7ebdd;
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
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x45e080fb) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1a0 = 0x7f7ecde;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar3 = *(char *)((long)param_3 + 0x24);
        puVar5 = (undefined8 *)*param_3;
      }
      if (cVar3 == '\x02') {
        puVar5 = param_3;
      }
      uStack_1a0 = 0x7f7ed00;
      puVar13 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0xba1f7f05,puVar5);
    }
    plVar27 = (long *)param_3[5];
    if (DAT_0f5c1af0 == '\0') {
      uStack_1a0 = 0x7f7fa8a;
      iVar4 = FUN_04108328(&DAT_0f5c1af0);
      if (iVar4 != 0) {
        uStack_1a0 = 0x7f7fa97;
        func_0x07f6fea0();
        uStack_1a0 = 0x7f7fab1;
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c1a70,0xf53dab8);
        uStack_1a0 = 0x7f7fabd;
        func_0x0410844d(&DAT_0f5c1af0);
      }
    }
    plVar7 = (long *)(*plVar27 +
                     (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                            *(uint *)(_DAT_0f5c1a70 + 4)) * 8);
    do {
      lVar8 = *plVar7;
      if (lVar8 == -1) {
        plVar12 = (long *)plVar27[4];
        plVar7 = plVar12;
        goto LAB_07f7ed64;
      }
      plVar7 = (long *)(plVar27[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c1a70 + 4));
    plVar12 = (long *)plVar27[4];
LAB_07f7ed64:
    if (plVar7 == plVar12) {
      puVar26 = &DAT_0f5c1a70;
    }
    else {
      puVar26 = (undefined *)plVar7[2];
    }
    uStack_1a0 = 0x7f7ed85;
    auVar9 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
    plStack_f8 = plVar27;
    if (auVar9 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1a0 = 0x7f7ed9c;
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
    uStack_1a0 = 0x7f7edda;
    puStack_100 = (undefined *)auVar9;
    func_0x05d84ba0(auStack_148);
    uStack_1a0 = 0x7f7edef;
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
        uStack_1a0 = 0x7f7f8fd;
        lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
        bVar28 = lVar8 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x7f7ee2d;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1a0 = 0x7f7ee3e;
      (*pcStack_130)(auStack_148);
    }
    if (bVar28) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar13 + 9) != 0xffffffff) {
        uStack_1a0 = 0x7f7ee6c;
        (**(code **)(&UNK_0f0fc7f0 + (ulong)*(uint *)(puVar13 + 9) * 8))(auStack_148,puVar13);
      }
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *puVar13 = 0xffffffffffffffff;
      puVar13[1] = 0;
      *(undefined4 *)(puVar13 + 9) = 0;
      pcStack_188 = (code *)&UNK_07f701b0;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x31bc3af8d);
      uStack_168 = 0;
      puStack_160 = &UNK_07f700d0;
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
        uStack_1a0 = 0x7f7ef08;
        uStack_198 = puVar13;
        pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,0);
      }
      puStack_100 = &UNK_0f0fe560;
      uStack_1a0 = 0x7f7f22c;
      func_0x0ed75bc0(&puStack_100,plStack_150,&uStack_198,uStack_e8,auStack_148);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x7f7f23f;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar27 = (long *)param_3[5];
      if (DAT_0f5c1ba8 == '\0') {
        uStack_1a0 = 0x7f7face;
        iVar4 = FUN_04108328(&DAT_0f5c1ba8);
        if (iVar4 != 0) {
          uStack_1a0 = 0x7f7fadb;
          func_0x07f72360();
          uStack_1a0 = 0x7f7faf5;
          __cxa_atexit(&UNK_048ae800,&DAT_0f5c1b28,0xf53dab8);
          uStack_1a0 = 0x7f7fb01;
          func_0x0410844d(&DAT_0f5c1ba8);
        }
      }
      plVar7 = (long *)(*plVar27 +
                       (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                              *(uint *)(_DAT_0f5c1b28 + 4)) * 8);
      do {
        lVar8 = *plVar7;
        if (lVar8 == -1) {
          plVar12 = (long *)plVar27[4];
          plVar7 = plVar12;
          goto LAB_07f7ef84;
        }
        plVar7 = (long *)(plVar27[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c1b28 + 4));
      plVar12 = (long *)plVar27[4];
LAB_07f7ef84:
      if (plVar7 == plVar12) {
        puVar26 = &DAT_0f5c1b28;
      }
      else {
        puVar26 = (undefined *)plVar7[2];
      }
      uStack_1a0 = 0x7f7efe1;
      auVar9 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
      if (auVar9 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1a0 = 0x7f7eff8;
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
      uStack_1a0 = 0x7f7f036;
      puStack_100 = (undefined *)auVar9;
      plStack_f8 = plVar27;
      func_0x05d84ba0(auStack_148);
      uStack_1a0 = 0x7f7f04b;
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
          uStack_1a0 = 0x7f7fa01;
          lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
          bVar28 = lVar8 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x7f7f089;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1a0 = 0x7f7f09a;
        (*pcStack_130)(auStack_148);
      }
      if (bVar28) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar13 + 9) != 0xffffffff) {
          uStack_1a0 = 0x7f7f0c8;
          (**(code **)(&UNK_0f0fc7f0 + (ulong)*(uint *)(puVar13 + 9) * 8))(auStack_148,puVar13);
        }
        puVar13[5] = 0;
        *puVar13 = 0xffffffffffffffff;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        *(undefined4 *)(puVar13 + 5) = 0;
        puVar13[6] = 0xffffffffffffffff;
        *(undefined4 *)(puVar13 + 9) = 1;
        pcStack_188 = (code *)&UNK_07f72680;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x38fbbebca);
        uStack_168 = 0;
        puStack_160 = &UNK_07f725a0;
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
          uStack_1a0 = 0x7f7f177;
          uStack_198 = puVar13;
          pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,1);
        }
        puStack_100 = &UNK_0f0fe5e0;
        uStack_1a0 = 0x7f7f5cf;
        func_0x0ed75bc0(&puStack_100,plStack_150,&uStack_198,uStack_e8,auStack_148);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0x7f7f5e2;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar27 = (long *)param_3[5];
        if (DAT_0f5c1c60 == '\0') {
          uStack_1a0 = 0x7f7fb12;
          iVar4 = FUN_04108328(&DAT_0f5c1c60);
          if (iVar4 != 0) {
            uStack_1a0 = 0x7f7fb1f;
            func_0x07f74eb0();
            uStack_1a0 = 0x7f7fb39;
            __cxa_atexit(&UNK_048ae800,&DAT_0f5c1be0,0xf53dab8);
            uStack_1a0 = 0x7f7fb45;
            func_0x0410844d(&DAT_0f5c1c60);
          }
        }
        plVar7 = (long *)(*plVar27 +
                         (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                *(uint *)(_DAT_0f5c1be0 + 4)) * 8);
        do {
          lVar8 = *plVar7;
          if (lVar8 == -1) {
            plVar12 = (long *)plVar27[4];
            plVar7 = plVar12;
            goto LAB_07f7f33d;
          }
          plVar7 = (long *)(plVar27[3] + lVar8 * 0x18);
        } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c1be0 + 4));
        plVar12 = (long *)plVar27[4];
LAB_07f7f33d:
        if (plVar7 == plVar12) {
          puVar26 = &DAT_0f5c1be0;
        }
        else {
          puVar26 = (undefined *)plVar7[2];
        }
        uStack_1a0 = 0x7f7f39a;
        auVar9 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
        if (auVar9 == (undefined1  [8])0x0) {
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1a0 = 0x7f7f3b1;
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
        uStack_1a0 = 0x7f7f3ef;
        puStack_100 = (undefined *)auVar9;
        plStack_f8 = plVar27;
        func_0x05d84ba0(auStack_148);
        uStack_1a0 = 0x7f7f404;
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
            uStack_1a0 = 0x7f7fa1f;
            lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
            bVar28 = lVar8 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0x7f7f442;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_130 != (code *)0x0) {
          uStack_1a0 = 0x7f7f453;
          (*pcStack_130)(auStack_148);
        }
        if (bVar28) {
          lVar8 = param_3[5];
          if ((ulong)*(uint *)(puVar13 + 9) != 0xffffffff) {
            uStack_1a0 = 0x7f7f481;
            (**(code **)(&UNK_0f0fc7f0 + (ulong)*(uint *)(puVar13 + 9) * 8))(auStack_148,puVar13);
          }
          puVar13[5] = 0;
          *puVar13 = 0xffffffffffffffff;
          puVar13[1] = 0;
          puVar13[2] = 0;
          puVar13[3] = 0;
          puVar13[4] = 0;
          *(undefined4 *)(puVar13 + 5) = 0;
          puVar13[6] = 0xffffffffffffffff;
          *(undefined4 *)(puVar13 + 9) = 2;
          pcStack_188 = (code *)&UNK_07f751d0;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x3966a5308);
          uStack_168 = 0;
          puStack_160 = &UNK_07f750f0;
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
            uStack_1a0 = 0x7f7f530;
            uStack_198 = puVar13;
            pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,2);
          }
          puStack_100 = &UNK_0f0fe660;
          uStack_1a0 = 0x7f7f8c6;
          func_0x0ed75bc0(&puStack_100,plStack_150,&uStack_198,uStack_e8,auStack_148);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0x7f7f8d9;
            (*pcStack_180)(&uStack_198);
          }
        }
        else {
          plVar27 = (long *)param_3[5];
          if (DAT_0f5c1d18 == '\0') {
            uStack_1a0 = 0x7f7fb56;
            iVar4 = FUN_04108328(&DAT_0f5c1d18);
            if (iVar4 != 0) {
              uStack_1a0 = 0x7f7fb63;
              func_0x07f77560();
              uStack_1a0 = 0x7f7fb7d;
              __cxa_atexit(&UNK_048ae800,&DAT_0f5c1c98,0xf53dab8);
              uStack_1a0 = 0x7f7fb89;
              func_0x0410844d(&DAT_0f5c1d18);
            }
          }
          plVar7 = (long *)(*plVar27 +
                           (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                  *(uint *)(_DAT_0f5c1c98 + 4)) * 8);
          do {
            lVar8 = *plVar7;
            if (lVar8 == -1) {
              plVar12 = (long *)plVar27[4];
              plVar7 = plVar12;
              goto LAB_07f7f5fb;
            }
            plVar7 = (long *)(plVar27[3] + lVar8 * 0x18);
          } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c1c98 + 4));
          plVar12 = (long *)plVar27[4];
LAB_07f7f5fb:
          if (plVar7 == plVar12) {
            puVar26 = &DAT_0f5c1c98;
          }
          else {
            puVar26 = (undefined *)plVar7[2];
          }
          uStack_1a0 = 0x7f7f658;
          auVar9 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
          if (auVar9 == (undefined1  [8])0x0) {
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1a0 = 0x7f7f66f;
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
          uStack_1a0 = 0x7f7f6ad;
          puStack_100 = (undefined *)auVar9;
          plStack_f8 = plVar27;
          func_0x05d84ba0(auStack_148);
          uStack_1a0 = 0x7f7f6c2;
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
              uStack_1a0 = 0x7f7f94e;
              lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
              bVar28 = lVar8 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0x7f7f6ff;
            (*pcStack_180)(&uStack_198);
          }
          if (pcStack_130 != (code *)0x0) {
            uStack_1a0 = 0x7f7f710;
            (*pcStack_130)(auStack_148);
          }
          if (bVar28) {
            lVar8 = param_3[5];
            if ((ulong)*(uint *)(puVar13 + 9) != 0xffffffff) {
              uStack_1a0 = 0x7f7f73d;
              (**(code **)(&UNK_0f0fc7f0 + (ulong)*(uint *)(puVar13 + 9) * 8))(auStack_148,puVar13);
            }
            puVar13[5] = 0;
            *puVar13 = 0xffffffffffffffff;
            puVar13[6] = 0;
            puVar13[7] = 0;
            puVar13[8] = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            *(undefined4 *)(puVar13 + 5) = 0;
            *(undefined4 *)(puVar13 + 9) = 3;
            pcStack_188 = (code *)&UNK_07f77880;
            pcStack_180 = (code *)0x0;
            uStack_178 = CONCAT35(uStack_178._5_3_,0x3b29a5719);
            uStack_168 = 0;
            puStack_160 = &UNK_07f777a0;
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
              uStack_1a0 = 0x7f7f7f1;
              uStack_198 = puVar13;
              pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,3);
            }
            puStack_100 = &UNK_0f0fe6e0;
            uStack_1a0 = 0x7f7f991;
            func_0x0ed75bc0(&puStack_100,plStack_150,&uStack_198,uStack_e8,auStack_148);
            if (pcStack_180 != (code *)0x0) {
              uStack_1a0 = 0x7f7f9a0;
              (*pcStack_180)(&uStack_198);
            }
          }
          else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                  (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
            uStack_198 = (undefined8 *)0x2300000149614c;
            uStack_1a0 = 0x7f7f856;
            func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
            if (((ulong)uStack_198 & 0x80000000000000) != 0) {
              uStack_1a0 = 0x7f7f881;
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
            }
            uStack_198 = (undefined8 *)0x0;
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1a0 = 0x7f7f9b7;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_07f7f9b7:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0x7f7f9de;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


