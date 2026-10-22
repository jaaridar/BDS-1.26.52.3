/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x89874d0 (ELF vaddr 0x88874d0)
 * Label: caller-of-callee
 * Body:  [[089874d0, 0898925c] [0898ae50, 0898b152]]
 * Ghidra: FUN_089874d0
 */


/* WARNING: Possible PIC construction at 0x0898772a: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_089874d0(undefined8 param_1,long *******param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long *****ppppplVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [8];
  undefined8 uVar11;
  byte *pbVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  code *pcVar17;
  code *pcVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long *******ppppppplVar22;
  ulong unaff_RBX;
  byte bVar23;
  uint uVar24;
  undefined8 unaff_RBP;
  long ******pppppplVar25;
  byte *pbVar26;
  undefined *puVar27;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
  long *******unaff_R15;
  long *******ppppppplVar28;
  bool bVar29;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  byte bStack_168;
  undefined *puStack_158;
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
  long *plStack_f8;
  undefined8 uStack_f0;
  long *******ppppppplStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long *******ppppppplStack_b8;
  ulong uStack_b0;
  code *pcStack_a0;
  int iStack_98;
  char cStack_94;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  long ******pppppplStack_70;
  long lStack_68;
  uint uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pcVar17 = (code *)param_3[7];
  plStack_f8 = param_5;
  if (pcVar17 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      uVar15 = 0;
    }
    else {
      uStack_1b0 = 0x8987522;
      (*(code *)param_3[3])(param_3);
      uVar15 = CONCAT71((int7)(unaff_RBX >> 8),(undefined *)param_3[7] == &UNK_0898b180);
    }
    param_3[2] = &UNK_0898b260;
    *(undefined4 *)(param_3 + 4) = 0x94963d88;
    param_3[3] = &UNK_0898b480;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0x8987572;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar5 == (undefined8 *)0x0) {
      uStack_1b0 = 0x89890cb;
      func_0x0eec74c0(0x50,0);
    }
    *puVar5 = 0xffffffff;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 9) = 0;
    *param_3 = puVar5;
    pcVar17 = (code *)&UNK_0898b180;
    param_3[7] = &UNK_0898b180;
    if ((char)uVar15 == '\0') {
      param_3[6] = 0;
    }
    else {
      lVar9 = param_3[6];
      param_3[6] = lVar9;
      if (lVar9 != 0) goto LAB_089875ea;
    }
LAB_089875d4:
    uVar15 = param_3[5];
    uStack_1b0 = 0x89875e2;
    (*pcVar17)(0,param_3,0);
    lVar9 = param_3[6];
    if (lVar9 != 0) goto LAB_089875ea;
    uStack_1b0 = 0x898761f;
    lVar9 = FUN_048aead0(uVar15);
    bVar23 = *(byte *)(lVar9 + 0x1a);
  }
  else {
    lVar9 = param_3[6];
    uVar15 = unaff_RBX;
    if (lVar9 == 0) goto LAB_089875d4;
LAB_089875ea:
    bVar23 = *(byte *)(lVar9 + 0x1a);
  }
  if ((bVar23 & 1) == 0) goto SUB_0898ae50;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (undefined8 *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0x8987753;
    func_0x048b1dc0(&uStack_1a8);
    puVar5 = uStack_1a8;
    uVar15 = uStack_1a0;
joined_r0x0898775e:
    if (puVar5 == (undefined8 *)0x0) {
      uStack_1b0 = 0x898776c;
      puVar5 = (undefined8 *)FUN_048aead0(uVar15);
    }
  }
  else {
    puVar5 = (undefined8 *)param_3[6];
    if (puVar5 == (undefined8 *)0x0) {
      uVar15 = param_3[5];
      uStack_1b0 = 0x8987649;
      (*(code *)param_3[7])(0,param_3,0);
      puVar5 = (undefined8 *)param_3[6];
      goto joined_r0x0898775e;
    }
  }
  unaff_R14 = (undefined8 *)puVar5[0xd];
  uStack_1b0 = 0x8987662;
  bVar23 = (*(code *)(*param_2)[3])(param_2);
  plVar8 = plStack_f8;
  if ((bVar23 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0x898772f;
    unaff_RBX = uVar15;
    unaff_R12 = param_3;
    unaff_R13 = param_4;
    unaff_R15 = param_2;
SUB_0898ae50:
    plVar8 = plStack_f8;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long ********)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar3 = *(char *)((long)param_3 + 0x24);
    puVar5 = (undefined8 *)*param_3;
    puVar14 = puVar5;
    if (cVar3 == '\x02') {
      puVar14 = param_3;
    }
    if (puVar14 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x6b69c278) {
      uVar11 = param_3[5];
      lVar9 = param_3[6];
      if (lVar9 == 0) {
        pcVar17 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x898aeaf;
        (*pcVar17)(0,param_3,0);
        lVar9 = param_3[6];
        cVar3 = *(char *)((long)param_3 + 0x24);
        puVar5 = (undefined8 *)*param_3;
      }
      if (cVar3 == '\x02') {
        puVar5 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x898aed1;
      puVar14 = (undefined8 *)FUN_0488e200(uVar11,lVar9,0x94963d88,puVar5);
    }
    lVar9 = *plVar8;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x898aee1;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar9);
    bVar23 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar23 | 1;
    ppppplVar2 = (*param_2)[0x13];
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x898aefe;
    uVar15 = (*(code *)ppppplVar2)(param_2);
    *(byte *)((long)param_2 + 9) = bVar23;
    if ((uVar15 >> 0x20 & 1) == 0) {
      uVar11 = param_3[5];
      uVar20 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar20;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x898af39;
      cVar3 = func_0x0898b8e0(param_2,uVar11,puVar14,param_4,plVar8,5);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar20;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x898af66;
      cVar3 = func_0x0898bb00(param_2,uVar11,puVar14,param_4,plVar8,5);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar20;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x898af93;
      cVar3 = func_0x0898bd30(param_2,uVar11,puVar14,param_4,plVar8,5);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar20;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x898afc0;
      cVar3 = func_0x0898bf50(param_2,uVar11,puVar14,param_4,plVar8,5);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar15 = 5;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar20;
    }
    else {
      if (4 < (uint)uVar15) {
        lVar9 = *plVar8;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x898b120;
        func_0x0ed5ffe0(lVar9,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar17 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x898b144;
        (*pcVar17)(&DAT_0f5463b0,
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
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x898b02a;
      cVar3 = func_0x0898b8e0(param_2,uVar11,puVar14,param_4,plVar8,uVar15 & 0xff);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar15 = uVar15 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x898b05b;
      cVar3 = func_0x0898bb00(param_2,uVar11,puVar14,param_4,plVar8,uVar15);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x898b088;
      cVar3 = func_0x0898bd30(param_2,uVar11,puVar14,param_4,plVar8,uVar15);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x898b0b5;
      cVar3 = func_0x0898bf50(param_2,uVar11,puVar14,param_4,plVar8,uVar15);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x898b0e2;
    func_0x0898c170(param_2,uVar11,puVar14,param_4,plVar8,uVar15);
    return;
  }
  if (bVar23 != 1) {
    uStack_1a8 = (undefined8 *)0x120000012f2525;
    uStack_1b0 = 0x89877a4;
    func_0x0ed5ffe0(*plStack_f8,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0x89877c7;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0x89876a4;
  uStack_f0 = param_4;
  ppppppplStack_e8 = param_2;
  func_0x0ed6d600(&lStack_68,*plStack_f8);
  uStack_48 = param_3[5];
  lStack_78 = *plVar8;
  pppppplStack_70 = (long ******)((long)unaff_R14 + 9);
  bVar29 = (*(byte *)(unaff_R14 + 1) & 1) == 0;
  pppppplVar25 = (long ******)unaff_R14[3];
  if (bVar29) {
    pppppplVar25 = pppppplStack_70;
  }
  uVar15 = (ulong)(*(byte *)(unaff_R14 + 1) >> 1);
  if (!bVar29) {
    uVar15 = unaff_R14[2];
  }
  puStack_e0 = unaff_R14;
  if (pppppplVar25 == (long ******)0x0) {
    puStack_158 = (undefined *)((ulong)((uint)uVar15 & 0x7f) << 0x30);
  }
  else if (uVar15 < 0x80) {
    puStack_158 = (undefined *)(uVar15 << 0x30 | (ulong)pppppplVar25 & 0xff00ffffffffffff);
  }
  else {
    lVar9 = uVar15 + 9;
    uStack_1b0 = 0x8987807;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
    if (puVar7 == (ulong *)0x0 && lVar9 != 0) {
      uStack_1b0 = 0x89890e0;
      func_0x0eec74c0(lVar9,8);
    }
    *puVar7 = uVar15;
    uStack_1b0 = 0x8987831;
    memcpy(puVar7 + 1,pppppplVar25,uVar15);
    *(undefined1 *)((long)puVar7 + uVar15 + 8) = 0;
    puStack_158 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  lVar9 = lStack_78;
  puVar5 = puStack_e0;
  uStack_1b0 = 0x8987875;
  puVar6 = (uint *)func_0x0ed6d180(lStack_78,&puStack_158,0);
  ppppppplVar28 = ppppppplStack_e8;
  if (((ulong)puStack_158 & 0x80000000000000) != 0) {
    uStack_1b0 = 0x89878ac;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_158 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_158 = (undefined *)0x0;
  bVar29 = (*(byte *)(puVar5 + 1) & 1) == 0;
  pppppplVar25 = (long ******)puVar5[3];
  if (bVar29) {
    pppppplVar25 = pppppplStack_70;
  }
  uVar15 = (ulong)(*(byte *)(puVar5 + 1) >> 1);
  if (!bVar29) {
    uVar15 = puVar5[2];
  }
  uStack_1b0 = 0x89878de;
  cVar3 = (*(code *)(*ppppppplVar28)[0x17])(ppppppplVar28,pppppplVar25,uVar15);
  if (cVar3 == '\0') {
    uStack_1b0 = 0x8987a33;
    _auStack_148 = (*(code *)*puVar5)(uStack_48);
    uStack_1b0 = 0x8987a51;
    func_0x0ed8bc80(&uStack_1a8,auStack_148,*(undefined1 *)(lVar9 + 0x2aa));
    uVar15 = (ulong)uStack_1a8 >> 1 & 0x7f;
    pcVar17 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      uVar15 = uStack_1a0;
      pcVar17 = pcStack_198;
    }
    ppppppplStack_b8 = (long *******)0x0;
    if (pcVar17 == (code *)0x0) {
      ppppppplStack_b8 = (long *******)((ulong)((uint)uVar15 & 0x7f) << 0x30);
    }
    else {
      lVar9 = uVar15 + 9;
      uStack_1b0 = 0x8987aa0;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && puVar7 == (ulong *)0x0) {
        uStack_1b0 = 0x89890f2;
        func_0x0eec74c0(lVar9,8);
      }
      *puVar7 = uVar15;
      uStack_1b0 = 0x8987ad0;
      memcpy(puVar7 + 1,pcVar17,uVar15);
      *(undefined1 *)((long)puVar7 + uVar15 + 8) = 0;
      ppppppplStack_b8 = (long *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000)
      ;
      lVar9 = lStack_78;
    }
    ppppppplVar28 = ppppppplStack_e8;
    uStack_1b0 = 0x8987c71;
    func_0x0ed5ffe0(lVar9,8,&ppppppplStack_b8);
    puVar5 = puStack_e0;
    if (((ulong)ppppppplStack_b8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0x8987cb2;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppplStack_b8 & 0xff00ffffffffffff) - 8);
    }
    ppppppplStack_b8 = (long *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0x8987cd6;
      func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0x89878fc;
    (*(code *)(*ppppppplVar28)[0x10])(auStack_148,ppppppplVar28,0x40);
    bStack_168 = bStack_108;
    if (bStack_108 == 1) {
      pcStack_198 = pcStack_138;
      uStack_1a8 = (undefined8 *)auStack_148;
      uStack_1a0 = (ulong)plStack_140;
LAB_08987b76:
      uVar15 = (ulong)((byte)uStack_1a8 >> 1);
      pcVar17 = (code *)((long)&uStack_1a8 + 1);
      if (((ulong)uStack_1a8 & 1) != 0) {
        uVar15 = uStack_1a0;
        pcVar17 = pcStack_198;
      }
      if (uVar15 != 0) {
        uStack_1b0 = 0x8987b9d;
        plVar8 = (long *)__ctype_tolower_loc();
        pcVar18 = pcVar17;
        for (uVar20 = uVar15 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar18 = *(code *)(*plVar8 + (ulong)(byte)*pcVar18 * 4);
          pcVar18 = pcVar18 + 1;
        }
        if (3 < uVar15) {
          do {
            *pcVar18 = *(code *)(*plVar8 + (ulong)(byte)*pcVar18 * 4);
            pcVar18[1] = *(code *)(*plVar8 + (ulong)(byte)pcVar18[1] * 4);
            pcVar18[2] = *(code *)(*plVar8 + (ulong)(byte)pcVar18[2] * 4);
            pcVar18[3] = *(code *)(*plVar8 + (ulong)(byte)pcVar18[3] * 4);
            pcVar18 = pcVar18 + 4;
          } while (pcVar18 != pcVar17 + uVar15);
        }
      }
      if (((byte)uStack_1a8 & 1) == 0) {
        pcStack_c8 = pcStack_198;
        uStack_d8 = uStack_1a8;
        uStack_d0 = uStack_1a0;
        puVar5 = puStack_e0;
      }
      else {
        uStack_1b0 = 0x8987d09;
        func_0x0412e5e0(&uStack_d8,pcStack_198,uStack_1a0);
        puVar5 = puStack_e0;
      }
    }
    else {
      uStack_1a8 = (undefined8 *)auStack_148;
      uStack_1a0 = (ulong)plStack_140;
      pcStack_198 = pcStack_138;
      pcStack_190 = pcStack_130;
      uStack_188 = lStack_128;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      lStack_128 = 0;
      lStack_180 = lStack_120;
      uStack_178 = uStack_118;
      puStack_170 = puStack_110;
      lStack_120 = 0;
      uStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      uStack_1b0 = 0x8987b69;
      func_0x048e6d60(auStack_148);
      if ((bStack_168 & 1) != 0) goto LAB_08987b76;
      ppppppplStack_b8 = (long *******)puVar5[3];
      uStack_b0 = puVar5[2];
      if ((*(byte *)(puVar5 + 1) & 1) == 0) {
        ppppppplStack_b8 = (long *******)pppppplStack_70;
        uStack_b0 = (ulong)(*(byte *)(puVar5 + 1) >> 1);
      }
      uStack_1b0 = 0x898797b;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&ppppppplStack_b8);
      plVar8 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar17 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar8 = plStack_140;
        pcVar17 = pcStack_138;
      }
      ppppppplStack_b8 = (long *******)0x0;
      if (pcVar17 == (code *)0x0) {
        ppppppplStack_b8 = (long *******)((ulong)((uint)plVar8 & 0x7f) << 0x30);
      }
      else {
        lVar9 = (long)plVar8 + 9;
        uStack_1b0 = 0x89879cb;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
        if (lVar9 != 0 && puVar7 == (ulong *)0x0) {
          uStack_1b0 = 0x8989104;
          func_0x0eec74c0(lVar9,8);
        }
        *puVar7 = (ulong)plVar8;
        uStack_1b0 = 0x89879fb;
        memcpy(puVar7 + 1,pcVar17,plVar8);
        *(undefined1 *)((long)puVar7 + (long)plVar8 + 8U) = 0;
        ppppppplStack_b8 =
             (long *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        lVar9 = lStack_78;
      }
      ppppppplVar28 = ppppppplStack_e8;
      uStack_1b0 = 0x8987d46;
      func_0x0ed5ffe0(lVar9,8,&ppppppplStack_b8);
      puVar5 = puStack_e0;
      if (((ulong)ppppppplStack_b8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0x8987d87;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppppplStack_b8 & 0xff00ffffffffffff) - 8);
      }
      ppppppplStack_b8 = (long *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1b0 = 0x8987dad;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    if (bStack_168 == 1) {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0x8987de3;
        func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      uStack_1b0 = 0x8987ded;
      func_0x048e6d60(&uStack_1a8);
    }
  }
  uStack_1b0 = 0x8987df9;
  (*(code *)(*ppppppplVar28)[0x1a])(ppppppplVar28);
  lVar9 = *(long *)(puVar6 + 2);
  uVar24 = *(uint *)(lVar9 + 0x1c + (ulong)*puVar6 * 0x20);
  *puVar6 = uVar24;
  if (puVar6[0x48] == 0) {
    uVar16 = puVar6[4];
LAB_08987e40:
    lVar1 = lVar9 + (ulong)uVar16 * 0x20;
    uVar15 = (ulong)*(uint *)(lVar9 + -0x10 + (ulong)uVar16 * 0x20);
    if (uVar15 != 0xffffffff) {
      uStack_1b0 = 0x8987e69;
      (**(code **)(&UNK_0f4e40d0 + uVar15 * 8))(&uStack_1a8,lVar1 + -0x18);
      uVar16 = puVar6[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar6[4] = uVar16 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar6 + 0x46) + 0x18 + (ulong)(puVar6[0x48] - 1) * 0x30) != uVar24)
          && (uVar16 = puVar6[4], uVar24 == uVar16 - 1)) goto LAB_08987e40;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0x8987ea2;
    auStack_40 = (*(code *)*puVar5)();
    uVar11 = auStack_40._8_8_;
    lVar9 = auStack_40._0_8_;
    uVar15 = (ulong)uStack_d8 >> 1 & 0x7f;
    pcVar17 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      uVar15 = uStack_d0;
      pcVar17 = pcStack_c8;
    }
    if (uVar15 == 0) {
      uVar24 = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
        uVar24 = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uVar24 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar24 = ((int)(char)pcVar17[uVar21 + 3] ^
                   ((int)(char)pcVar17[uVar21 + 2] ^
                   ((int)(char)pcVar17[uVar21 + 1] ^
                   ((int)(char)pcVar17[uVar21] ^ uVar24) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar21 = uVar21 + 4;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar20 != 0) {
        uVar15 = 0;
        do {
          uVar24 = ((int)(char)pcVar17[uVar15 + uVar21] ^ uVar24) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar20 != uVar15);
      }
    }
    if (lVar9 == 0) {
      uStack_1b0 = 0x8987f91;
      lVar9 = FUN_048aead0(uVar11);
    }
    uStack_1b0 = 0x8987fa3;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar11,lVar9,uVar24,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1a8 = (undefined8 *)0x0;
      uStack_1a0 = 0;
      uStack_1b0 = 0x8987fd1;
      func_0x048b0d20(&uStack_1a8);
      puStack_58 = uStack_1a8;
      uStack_50 = uStack_1a0;
      if (uStack_1a8 == (undefined8 *)0x0) {
        lVar9 = *plStack_f8;
        uStack_1b0 = 0x898869e;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar9 + 0x2aa));
        uStack_1b0 = 0x89886b2;
        uVar11 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        uVar15 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar17 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar15 = uStack_d0;
          pcVar17 = pcStack_c8;
        }
        uStack_1b0 = 0x89886de;
        uVar11 = func_0x0412f8c0(uVar11,pcVar17,uVar15);
        uStack_1b0 = 0x89886f2;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar29 = (*pbVar12 & 1) != 0;
        pbVar26 = pbVar12 + 1;
        if (bVar29) {
          pbVar26 = *(byte **)(pbVar12 + 0x10);
        }
        uVar15 = (ulong)(*pbVar12 >> 1);
        if (bVar29) {
          uVar15 = *(ulong *)(pbVar12 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1b0 = 0x8988724;
        func_0x0ee387f0(auStack_148,pbVar26,uVar15,1);
        uStack_1b0 = 0x8988736;
        func_0x0ed5ffe0(lVar9,8,auStack_148);
        uStack_1b0 = 0x8988740;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0x898875c;
          func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_08989048;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    uStack_178 = 0;
    puStack_170 = (undefined *)0x0;
    uStack_188 = 0;
    lStack_180 = 0;
    pcStack_198 = (code *)0x0;
    pcStack_190 = (code *)0x0;
    uStack_1a8 = (undefined8 *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0x8988006;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0x8988021;
    func_0x05d9a920(&ppppppplStack_b8,&puStack_58,&uStack_1a8);
    pppppplVar25 = pppppplStack_70;
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x8988038;
      (*pcStack_190)(&uStack_1a8);
    }
    bVar29 = (*(byte *)(puStack_e0 + 1) & 1) != 0;
    if (bVar29) {
      pppppplVar25 = (long ******)puStack_e0[3];
    }
    uVar15 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
    if (bVar29) {
      uVar15 = puStack_e0[2];
    }
    if (uVar15 == 0) {
      uVar24 = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
        uVar24 = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uVar24 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar24 = ((int)*(char *)((long)pppppplVar25 + uVar21 + 3) ^
                   ((int)*(char *)((long)pppppplVar25 + uVar21 + 2) ^
                   ((int)*(char *)((long)pppppplVar25 + uVar21 + 1) ^
                   ((int)*(char *)((long)pppppplVar25 + uVar21) ^ uVar24) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar20 != 0) {
        uVar15 = 0;
        do {
          uVar24 = ((int)*(char *)((long)pppppplVar25 + uVar15 + uVar21) ^ uVar24) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar20 != uVar15);
      }
    }
    cVar3 = *(char *)((long)param_3 + 0x24);
    puVar5 = (undefined8 *)*param_3;
    puVar14 = puVar5;
    if (cVar3 == '\x02') {
      puVar14 = param_3;
    }
    ppppppplStack_e8 = (long *******)&ppppppplStack_b8;
    if (puVar14 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x6b69c278) {
      uVar11 = param_3[5];
      lVar9 = param_3[6];
      if (lVar9 == 0) {
        uStack_1b0 = 0x898813f;
        (*(code *)param_3[7])(0,param_3,0);
        lVar9 = param_3[6];
        cVar3 = *(char *)((long)param_3 + 0x24);
        puVar5 = (undefined8 *)*param_3;
      }
      if (cVar3 == '\x02') {
        puVar5 = param_3;
      }
      uStack_1b0 = 0x8988161;
      puVar14 = (undefined8 *)FUN_0488e200(uVar11,lVar9,0x94963d88,puVar5);
    }
    plVar8 = (long *)param_3[5];
    if (DAT_0f5e4690 == '\0') {
      uStack_1b0 = 0x8989115;
      iVar4 = func_0x04108328(&DAT_0f5e4690);
      if (iVar4 != 0) {
        uStack_1b0 = 0x8989122;
        func_0x0897c010();
        uStack_1b0 = 0x898913c;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4610,0xf53dab8);
        uStack_1b0 = 0x8989148;
        func_0x0410844d(&DAT_0f5e4690);
      }
    }
    plVar19 = (long *)(*plVar8 +
                      (ulong)((int)((ulong)(plVar8[1] - *plVar8) >> 3) - 1U &
                             *(uint *)(_DAT_0f5e4610 + 4)) * 8);
    do {
      lVar9 = *plVar19;
      if (lVar9 == -1) {
        plVar13 = (long *)plVar8[4];
        plVar19 = plVar13;
        goto LAB_089881d4;
      }
      plVar19 = (long *)(plVar8[3] + lVar9 * 0x18);
    } while (*(uint *)(plVar8[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5e4610 + 4));
    plVar13 = (long *)plVar8[4];
LAB_089881d4:
    if (plVar19 == plVar13) {
      puVar27 = &DAT_0f5e4610;
    }
    else {
      puVar27 = (undefined *)plVar19[2];
    }
    uStack_1b0 = 0x89881f5;
    auVar10 = (undefined1  [8])func_0x048b0c90(plVar8,puVar27,uVar24,1);
    plStack_150 = plVar8;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0x898820c;
      func_0x048b0d20(auStack_148);
      auVar10 = auStack_148;
      plStack_150 = plStack_140;
    }
    uStack_118 = 0;
    puStack_110 = (undefined *)0x0;
    lStack_128 = 0;
    lStack_120 = 0;
    pcStack_138 = (code *)0x0;
    pcStack_130 = (code *)0x0;
    auStack_148 = (undefined1  [8])0x0;
    plStack_140 = (long *)0x0;
    uStack_1b0 = 0x8988247;
    puStack_158 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_148);
    uStack_1b0 = 0x8988259;
    func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
    if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
        bVar29 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        ppppppplVar22 = ppppppplStack_b8;
        if (cStack_94 == '\x02') {
          ppppppplVar22 = (long *******)&ppppppplStack_b8;
        }
        uStack_1b0 = 0x8988ca4;
        lVar9 = (*pcStack_198)(3,&uStack_1a8,ppppppplVar22);
        bVar29 = lVar9 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x8988297;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1b0 = 0x89882a8;
      (*pcStack_130)(auStack_148);
    }
    if (bVar29) {
      lVar9 = param_3[5];
      if ((ulong)*(uint *)(puVar14 + 9) != 0xffffffff) {
        uStack_1b0 = 0x89882d6;
        (**(code **)(&UNK_0f132068 + (ulong)*(uint *)(puVar14 + 9) * 8))(auStack_148,puVar14);
      }
      *puVar14 = 0xffffffff;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      *(undefined4 *)(puVar14 + 9) = 0;
      pcStack_198 = (code *)&UNK_0897c320;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x364481245);
      uStack_178 = 0;
      puStack_170 = &UNK_0897c240;
      lStack_128 = plStack_f8[4];
      auStack_148 = (undefined1  [8])*plStack_f8;
      plStack_140 = (long *)plStack_f8[1];
      pcStack_138 = (code *)plStack_f8[2];
      pcStack_130 = (code *)plStack_f8[3];
      plVar8 = (long *)plStack_f8[2];
      lStack_180 = lVar9;
      if (plVar8 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
        uStack_1a8 = puVar14;
      }
      else {
        uStack_1b0 = 0x898836e;
        uStack_1a8 = puVar14;
        pcStack_138 = (code *)(**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
      puStack_158 = &UNK_0f1341e8;
      uStack_1b0 = 0x8988664;
      func_0x0ed75bc0(&puStack_158,ppppppplVar28,&uStack_1a8,uStack_f0,auStack_148);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x8988677;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar8 = (long *)param_3[5];
      if (DAT_0f5e4748 == '\0') {
        uStack_1b0 = 0x8989159;
        iVar4 = func_0x04108328(&DAT_0f5e4748);
        if (iVar4 != 0) {
          uStack_1b0 = 0x8989166;
          func_0x0897e3c0();
          uStack_1b0 = 0x8989180;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e46c8,0xf53dab8);
          uStack_1b0 = 0x898918c;
          func_0x0410844d(&DAT_0f5e4748);
        }
      }
      plVar19 = (long *)(*plVar8 +
                        (ulong)((int)((ulong)(plVar8[1] - *plVar8) >> 3) - 1U &
                               *(uint *)(_DAT_0f5e46c8 + 4)) * 8);
      do {
        lVar9 = *plVar19;
        if (lVar9 == -1) {
          plVar13 = (long *)plVar8[4];
          plVar19 = plVar13;
          goto LAB_089883e4;
        }
        plVar19 = (long *)(plVar8[3] + lVar9 * 0x18);
      } while (*(uint *)(plVar8[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5e46c8 + 4));
      plVar13 = (long *)plVar8[4];
LAB_089883e4:
      if (plVar19 == plVar13) {
        puVar27 = &DAT_0f5e46c8;
      }
      else {
        puVar27 = (undefined *)plVar19[2];
      }
      uStack_1b0 = 0x8988441;
      auVar10 = (undefined1  [8])func_0x048b0c90(plVar8,puVar27,uVar24,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0x8988458;
        func_0x048b0d20(auStack_148);
        auVar10 = auStack_148;
        plVar8 = plStack_140;
      }
      uStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0x8988493;
      puStack_158 = (undefined *)auVar10;
      plStack_150 = plVar8;
      func_0x05d84ba0(auStack_148);
      uStack_1b0 = 0x89884a5;
      func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
      if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
          bVar29 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          ppppppplVar22 = ppppppplStack_b8;
          if (cStack_94 == '\x02') {
            ppppppplVar22 = (long *******)&ppppppplStack_b8;
          }
          uStack_1b0 = 0x8988f8e;
          lVar9 = (*pcStack_198)(3,&uStack_1a8,ppppppplVar22);
          bVar29 = lVar9 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x89884e3;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1b0 = 0x89884f4;
        (*pcStack_130)(auStack_148);
      }
      if (bVar29) {
        lVar9 = param_3[5];
        if ((ulong)*(uint *)(puVar14 + 9) != 0xffffffff) {
          uStack_1b0 = 0x8988522;
          (**(code **)(&UNK_0f132068 + (ulong)*(uint *)(puVar14 + 9) * 8))(auStack_148,puVar14);
        }
        *puVar14 = 0xffffffff;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        *(undefined4 *)(puVar14 + 9) = 1;
        pcStack_198 = (code *)&UNK_0897e6d0;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x30af26afa);
        uStack_178 = 0;
        puStack_170 = &UNK_0897e5f0;
        lStack_128 = plStack_f8[4];
        auStack_148 = (undefined1  [8])*plStack_f8;
        plStack_140 = (long *)plStack_f8[1];
        pcStack_138 = (code *)plStack_f8[2];
        pcStack_130 = (code *)plStack_f8[3];
        plVar8 = (long *)plStack_f8[2];
        lStack_180 = lVar9;
        if (plVar8 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
          uStack_1a8 = puVar14;
        }
        else {
          uStack_1b0 = 0x89885bd;
          uStack_1a8 = puVar14;
          pcStack_138 = (code *)(**(code **)(*plVar8 + 0x30))(plVar8,1);
        }
        puStack_158 = &UNK_0f134268;
        uStack_1b0 = 0x89889d2;
        func_0x0ed75bc0(&puStack_158,ppppppplVar28,&uStack_1a8,uStack_f0,auStack_148);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x89889e5;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else {
        plVar8 = (long *)param_3[5];
        if (DAT_0f5e4800 == '\0') {
          uStack_1b0 = 0x898919d;
          iVar4 = func_0x04108328(&DAT_0f5e4800);
          if (iVar4 != 0) {
            uStack_1b0 = 0x89891aa;
            func_0x08980770();
            uStack_1b0 = 0x89891c4;
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4780,0xf53dab8);
            uStack_1b0 = 0x89891d0;
            func_0x0410844d(&DAT_0f5e4800);
          }
        }
        plVar19 = (long *)(*plVar8 +
                          (ulong)((int)((ulong)(plVar8[1] - *plVar8) >> 3) - 1U &
                                 *(uint *)(_DAT_0f5e4780 + 4)) * 8);
        do {
          lVar9 = *plVar19;
          if (lVar9 == -1) {
            plVar13 = (long *)plVar8[4];
            plVar19 = plVar13;
            goto LAB_08988775;
          }
          plVar19 = (long *)(plVar8[3] + lVar9 * 0x18);
        } while (*(uint *)(plVar8[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5e4780 + 4));
        plVar13 = (long *)plVar8[4];
LAB_08988775:
        if (plVar19 == plVar13) {
          puVar27 = &DAT_0f5e4780;
        }
        else {
          puVar27 = (undefined *)plVar19[2];
        }
        uStack_1b0 = 0x89887d2;
        auVar10 = (undefined1  [8])func_0x048b0c90(plVar8,puVar27,uVar24,1);
        if (auVar10 == (undefined1  [8])0x0) {
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1b0 = 0x89887e9;
          func_0x048b0d20(auStack_148);
          auVar10 = auStack_148;
          plVar8 = plStack_140;
        }
        uStack_118 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_128 = 0;
        lStack_120 = 0;
        pcStack_138 = (code *)0x0;
        pcStack_130 = (code *)0x0;
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0x8988824;
        puStack_158 = (undefined *)auVar10;
        plStack_150 = plVar8;
        func_0x05d84ba0(auStack_148);
        uStack_1b0 = 0x8988836;
        func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
        if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
          if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
            bVar29 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
          }
          else {
            ppppppplVar22 = ppppppplStack_b8;
            if (cStack_94 == '\x02') {
              ppppppplVar22 = (long *******)&ppppppplStack_b8;
            }
            uStack_1b0 = 0x8989092;
            lVar9 = (*pcStack_198)(3,&uStack_1a8,ppppppplVar22);
            bVar29 = lVar9 != 0;
          }
        }
        else {
          bVar29 = false;
        }
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x8988874;
          (*pcStack_190)(&uStack_1a8);
        }
        if (pcStack_130 != (code *)0x0) {
          uStack_1b0 = 0x8988885;
          (*pcStack_130)(auStack_148);
        }
        if (bVar29) {
          lVar9 = param_3[5];
          if ((ulong)*(uint *)(puVar14 + 9) != 0xffffffff) {
            uStack_1b0 = 0x89888b3;
            (**(code **)(&UNK_0f132068 + (ulong)*(uint *)(puVar14 + 9) * 8))(auStack_148,puVar14);
          }
          *(undefined4 *)puVar14 = 0xffffffff;
          *(undefined4 *)(puVar14 + 9) = 2;
          pcStack_198 = (code *)&UNK_08980a30;
          pcStack_190 = (code *)0x0;
          uStack_188 = CONCAT35(uStack_188._5_3_,0x31dc1a80e);
          uStack_178 = 0;
          puStack_170 = &UNK_08980950;
          lStack_128 = plStack_f8[4];
          auStack_148 = (undefined1  [8])*plStack_f8;
          plStack_140 = (long *)plStack_f8[1];
          pcStack_138 = (code *)plStack_f8[2];
          pcStack_130 = (code *)plStack_f8[3];
          plVar8 = (long *)plStack_f8[2];
          lStack_180 = lVar9;
          if (plVar8 == (long *)0x0) {
            pcStack_138 = (code *)0x0;
            uStack_1a8 = puVar14;
          }
          else {
            uStack_1b0 = 0x8988940;
            uStack_1a8 = puVar14;
            pcStack_138 = (code *)(**(code **)(*plVar8 + 0x30))(plVar8,2);
          }
          puStack_158 = &UNK_0f1342e8;
          uStack_1b0 = 0x8988c5b;
          func_0x0ed75bc0(&puStack_158,ppppppplVar28,&uStack_1a8,uStack_f0,auStack_148);
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x8988c6e;
            (*pcStack_190)(&uStack_1a8);
          }
        }
        else {
          plVar8 = (long *)param_3[5];
          if (DAT_0f5e48b8 == '\0') {
            uStack_1b0 = 0x89891e1;
            iVar4 = func_0x04108328(&DAT_0f5e48b8);
            if (iVar4 != 0) {
              uStack_1b0 = 0x89891ee;
              func_0x08981a90();
              uStack_1b0 = 0x8989208;
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4838,0xf53dab8);
              uStack_1b0 = 0x8989214;
              func_0x0410844d(&DAT_0f5e48b8);
            }
          }
          plVar19 = (long *)(*plVar8 +
                            (ulong)((int)((ulong)(plVar8[1] - *plVar8) >> 3) - 1U &
                                   *(uint *)(_DAT_0f5e4838 + 4)) * 8);
          do {
            lVar9 = *plVar19;
            if (lVar9 == -1) {
              plVar13 = (long *)plVar8[4];
              plVar19 = plVar13;
              goto LAB_089889fe;
            }
            plVar19 = (long *)(plVar8[3] + lVar9 * 0x18);
          } while (*(uint *)(plVar8[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5e4838 + 4));
          plVar13 = (long *)plVar8[4];
LAB_089889fe:
          if (plVar19 == plVar13) {
            puVar27 = &DAT_0f5e4838;
          }
          else {
            puVar27 = (undefined *)plVar19[2];
          }
          uStack_1b0 = 0x8988a5b;
          auVar10 = (undefined1  [8])func_0x048b0c90(plVar8,puVar27,uVar24,1);
          if (auVar10 == (undefined1  [8])0x0) {
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1b0 = 0x8988a72;
            func_0x048b0d20(auStack_148);
            auVar10 = auStack_148;
            plVar8 = plStack_140;
          }
          uStack_118 = 0;
          puStack_110 = (undefined *)0x0;
          lStack_128 = 0;
          lStack_120 = 0;
          pcStack_138 = (code *)0x0;
          pcStack_130 = (code *)0x0;
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1b0 = 0x8988aad;
          puStack_158 = (undefined *)auVar10;
          plStack_150 = plVar8;
          func_0x05d84ba0(auStack_148);
          uStack_1b0 = 0x8988abf;
          func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
          if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0)))
          {
            if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
              bVar29 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
            }
            else {
              ppppppplVar22 = ppppppplStack_b8;
              if (cStack_94 == '\x02') {
                ppppppplVar22 = (long *******)&ppppppplStack_b8;
              }
              uStack_1b0 = 0x89890b0;
              lVar9 = (*pcStack_198)(3,&uStack_1a8,ppppppplVar22);
              bVar29 = lVar9 != 0;
            }
          }
          else {
            bVar29 = false;
          }
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x8988afd;
            (*pcStack_190)(&uStack_1a8);
          }
          if (pcStack_130 != (code *)0x0) {
            uStack_1b0 = 0x8988b0e;
            (*pcStack_130)(auStack_148);
          }
          if (bVar29) {
            lVar9 = param_3[5];
            if ((ulong)*(uint *)(puVar14 + 9) != 0xffffffff) {
              uStack_1b0 = 0x8988b3c;
              (**(code **)(&UNK_0f132068 + (ulong)*(uint *)(puVar14 + 9) * 8))(auStack_148,puVar14);
            }
            *puVar14 = 0xffffffffffffffff;
            *(undefined4 *)(puVar14 + 9) = 3;
            pcStack_198 = (code *)&UNK_08981d40;
            pcStack_190 = (code *)0x0;
            uStack_188 = CONCAT35(uStack_188._5_3_,0x3d61fbaef);
            uStack_178 = 0;
            puStack_170 = &UNK_08981c60;
            lStack_128 = plStack_f8[4];
            auStack_148 = (undefined1  [8])*plStack_f8;
            plStack_140 = (long *)plStack_f8[1];
            pcStack_138 = (code *)plStack_f8[2];
            pcStack_130 = (code *)plStack_f8[3];
            plVar8 = (long *)plStack_f8[2];
            lStack_180 = lVar9;
            if (plVar8 == (long *)0x0) {
              pcStack_138 = (code *)0x0;
              uStack_1a8 = puVar14;
            }
            else {
              uStack_1b0 = 0x8988bc9;
              uStack_1a8 = puVar14;
              pcStack_138 = (code *)(**(code **)(*plVar8 + 0x30))(plVar8,3);
            }
            puStack_158 = &UNK_0f134368;
            uStack_1b0 = 0x8988f57;
            func_0x0ed75bc0(&puStack_158,ppppppplVar28,&uStack_1a8,uStack_f0,auStack_148);
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0x8988f6a;
              (*pcStack_190)(&uStack_1a8);
            }
          }
          else {
            plVar8 = (long *)param_3[5];
            if (DAT_0f5e4970 == '\0') {
              uStack_1b0 = 0x8989225;
              iVar4 = func_0x04108328(&DAT_0f5e4970);
              if (iVar4 != 0) {
                uStack_1b0 = 0x8989232;
                func_0x089836a0();
                uStack_1b0 = 0x898924c;
                func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e48f0,0xf53dab8);
                uStack_1b0 = 0x8989258;
                func_0x0410844d(&DAT_0f5e4970);
              }
            }
            plVar19 = (long *)(*plVar8 +
                              (ulong)((int)((ulong)(plVar8[1] - *plVar8) >> 3) - 1U &
                                     *(uint *)(_DAT_0f5e48f0 + 4)) * 8);
            do {
              lVar9 = *plVar19;
              if (lVar9 == -1) {
                plVar13 = (long *)plVar8[4];
                plVar19 = plVar13;
                goto LAB_08988c87;
              }
              plVar19 = (long *)(plVar8[3] + lVar9 * 0x18);
            } while (*(uint *)(plVar8[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5e48f0 + 4));
            plVar13 = (long *)plVar8[4];
LAB_08988c87:
            if (plVar19 == plVar13) {
              puVar27 = &DAT_0f5e48f0;
            }
            else {
              puVar27 = (undefined *)plVar19[2];
            }
            uStack_1b0 = 0x8988d02;
            auVar10 = (undefined1  [8])func_0x048b0c90(plVar8,puVar27,uVar24,1);
            if (auVar10 == (undefined1  [8])0x0) {
              auStack_148 = (undefined1  [8])0x0;
              plStack_140 = (long *)0x0;
              uStack_1b0 = 0x8988d19;
              func_0x048b0d20(auStack_148);
              auVar10 = auStack_148;
              plVar8 = plStack_140;
            }
            uStack_118 = 0;
            puStack_110 = (undefined *)0x0;
            lStack_128 = 0;
            lStack_120 = 0;
            pcStack_138 = (code *)0x0;
            pcStack_130 = (code *)0x0;
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1b0 = 0x8988d54;
            puStack_158 = (undefined *)auVar10;
            plStack_150 = plVar8;
            func_0x05d84ba0(auStack_148);
            uStack_1b0 = 0x8988d66;
            func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
            if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))
               ) {
              if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
                bVar29 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
              }
              else {
                if (cStack_94 != '\x02') {
                  ppppppplStack_e8 = ppppppplStack_b8;
                }
                uStack_1b0 = 0x8988fe7;
                lVar9 = (*pcStack_198)(3,&uStack_1a8,ppppppplStack_e8);
                bVar29 = lVar9 != 0;
              }
            }
            else {
              bVar29 = false;
            }
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0x8988da3;
              (*pcStack_190)(&uStack_1a8);
            }
            if (pcStack_130 != (code *)0x0) {
              uStack_1b0 = 0x8988db4;
              (*pcStack_130)(auStack_148);
            }
            if (bVar29) {
              lVar9 = param_3[5];
              if ((ulong)*(uint *)(puVar14 + 9) != 0xffffffff) {
                uStack_1b0 = 0x8988de1;
                (**(code **)(&UNK_0f132068 + (ulong)*(uint *)(puVar14 + 9) * 8))
                          (auStack_148,puVar14);
              }
              puVar14[6] = 0;
              puVar14[7] = 0;
              puVar14[4] = 0;
              puVar14[5] = 0;
              puVar14[2] = 0;
              puVar14[3] = 0;
              *puVar14 = 0;
              puVar14[1] = 0;
              puVar14[8] = 0;
              *(undefined4 *)(puVar14 + 9) = 4;
              pcStack_198 = (code *)&UNK_089839b0;
              pcStack_190 = (code *)0x0;
              uStack_188 = CONCAT35(uStack_188._5_3_,0x3de515088);
              uStack_178 = 0;
              puStack_170 = &UNK_089838d0;
              lStack_128 = plStack_f8[4];
              auStack_148 = (undefined1  [8])*plStack_f8;
              plStack_140 = (long *)plStack_f8[1];
              pcStack_138 = (code *)plStack_f8[2];
              pcStack_130 = (code *)plStack_f8[3];
              plVar8 = (long *)plStack_f8[2];
              lStack_180 = lVar9;
              if (plVar8 == (long *)0x0) {
                pcStack_138 = (code *)0x0;
                uStack_1a8 = puVar14;
              }
              else {
                uStack_1b0 = 0x8988e85;
                uStack_1a8 = puVar14;
                pcStack_138 = (code *)(**(code **)(*plVar8 + 0x30))(plVar8,4);
              }
              puStack_158 = &UNK_0f1343e8;
              uStack_1b0 = 0x8989022;
              func_0x0ed75bc0(&puStack_158,ppppppplVar28,&uStack_1a8,uStack_f0,auStack_148);
              if (pcStack_190 != (code *)0x0) {
                uStack_1b0 = 0x8989031;
                (*pcStack_190)(&uStack_1a8);
              }
            }
            else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                    (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
              uStack_1a8 = (undefined8 *)0x2300000149614c;
              uStack_1b0 = 0x8988eef;
              func_0x0ed5ffe0(*plStack_f8,8,&uStack_1a8);
              if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
                uStack_1b0 = 0x8988f1a;
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
      uStack_1b0 = 0x8989048;
      (*pcStack_a0)(&ppppppplStack_b8);
    }
  }
LAB_08989048:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1b0 = 0x898906f;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


