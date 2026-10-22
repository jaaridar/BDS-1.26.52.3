/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x77711c0 (ELF vaddr 0x76711c0)
 * Label: caller-of-callee
 * Body:  [[077711c0, 07771aea] [07771af0, 07772cb2] [077744d0, 07774770]]
 * Ghidra: FUN_077711c0
 */


/* WARNING: Possible PIC construction at 0x07771401: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_077711c0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

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
  undefined1 auVar10 [8];
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  code *pcVar17;
  long *plVar18;
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
  undefined8 *unaff_R15;
  bool bVar28;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  char cStack_168;
  char cStack_159;
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
  long *plStack_e8;
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
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined1 auStack_40 [16];
  
  pcVar16 = (code *)param_3[7];
  plStack_e8 = param_5;
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar28 = false;
    }
    else {
      uStack_1b0 = 0x7771215;
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_077747a0;
    }
    param_3[2] = &UNK_07774880;
    *(undefined4 *)(param_3 + 4) = 0xf39e977d;
    param_3[3] = &UNK_07774aa0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0x7771265;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1b0 = 0x7772b65;
      func_0x0eec74c0(0x28,0);
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *param_3 = puVar4;
    pcVar16 = (code *)&UNK_077747a0;
    param_3[7] = &UNK_077747a0;
    if (bVar28) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    if (lVar8 == 0) goto LAB_077712b2;
LAB_077712c8:
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_077712c8;
LAB_077712b2:
    uVar11 = param_3[5];
    uStack_1b0 = 0x77712c0;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_077712c8;
    uStack_1b0 = 0x77712fd;
    lVar8 = func_0x048aead0(uVar11);
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_077744d0;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (undefined8 *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0x777142a;
    func_0x048b1dc0(&uStack_1a8);
    puVar4 = uStack_1a8;
    uVar14 = uStack_1a0;
    unaff_R14 = &uStack_1a8;
joined_r0x07771435:
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1b0 = 0x7771443;
      puVar4 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar4 = (undefined8 *)*unaff_R14;
    if (puVar4 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1b0 = 0x7771327;
      (*(code *)param_3[7])(0,param_3,0);
      puVar4 = (undefined8 *)*unaff_R14;
      goto joined_r0x07771435;
    }
  }
  unaff_R15 = (undefined8 *)puVar4[0xd];
  uStack_1b0 = 0x7771341;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar27 = plStack_e8;
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0x7771406;
    unaff_RBX = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
SUB_077744d0:
    plVar27 = plStack_e8;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0xc616883) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x777452f;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x7774551;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xf39e977d,puVar4);
    }
    lVar8 = *plVar27;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x7774561;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x777457e;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar14 >> 0x20 & 1) == 0) {
      uVar11 = param_3[5];
      uVar9 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x77745b9;
      cVar2 = func_0x07774fd0(param_2,uVar11,puVar13,param_4,plVar27,4);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x77745e6;
      cVar2 = func_0x077751e0(param_2,uVar11,puVar13,param_4,plVar27,4);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x7774613;
      cVar2 = func_0x07775400(param_2,uVar11,puVar13,param_4,plVar27,4);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar14 = 4;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
    }
    else {
      if ((uVar14 & 0xfffffffc) != 0) {
        lVar8 = *plVar27;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x777467b;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x77746a3;
        (*pcVar16)(&DAT_0f5463b0,
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
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x77746dd;
      cVar2 = func_0x07774fd0(param_2,uVar11,puVar13,param_4,plVar27,uVar14 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x777470a;
      cVar2 = func_0x077751e0(param_2,uVar11,puVar13,param_4,plVar27,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x7774733;
      cVar2 = func_0x07775400(param_2,uVar11,puVar13,param_4,plVar27,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x777476b;
    func_0x07775620(param_2,uVar11,puVar13,param_4,plVar27,uVar14);
    return;
  }
  if (bVar22 != 1) {
    uStack_1a8 = (undefined8 *)0x120000012f2525;
    uStack_1b0 = 0x777147b;
    func_0x0ed5ffe0(*plStack_e8,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0x777149e;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0x7771380;
  plStack_150 = param_2;
  uStack_e0 = param_4;
  func_0x0ed6d600(&lStack_68,*plStack_e8);
  puStack_158 = (uint *)param_3[5];
  lStack_78 = *plVar27;
  ppppppuVar21 = (undefined8 ******)((long)unaff_R15 + 9);
  bVar28 = (*(byte *)(unaff_R15 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)unaff_R15[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(unaff_R15 + 1) >> 1);
  if (!bVar28) {
    uVar14 = unaff_R15[2];
  }
  puStack_70 = unaff_R15;
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_148 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_148 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar14 + 9;
    cStack_159 = lVar8 == 0;
    uStack_1b0 = 0x77714df;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar7 == (ulong *)0x0 && cStack_159 == '\0') {
      uStack_1b0 = 0x7772b7a;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar7 = uVar14;
    uStack_1b0 = 0x777150b;
    func_0x0eee2f00(puVar7 + 1,ppppppuVar24,uVar14);
    *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
    puStack_148 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1b0 = 0x7771544;
  puVar5 = (uint *)func_0x0ed6d180(lStack_78,&puStack_148,0);
  plVar27 = plStack_150;
  if (((ulong)puStack_148 & 0x80000000000000) != 0) {
    uStack_1b0 = 0x7771578;
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
  uStack_1b0 = 0x77715ae;
  cVar2 = (**(code **)(*plVar27 + 0xb8))(plVar27,ppppppuVar24,uVar14);
  if (cVar2 == '\0') {
    uStack_1b0 = 0x77716cb;
    _auStack_138 = (*(code *)*puVar4)(puStack_158);
    uStack_1b0 = 0x77716f1;
    func_0x0ed8bc80(&uStack_1a8,auStack_138,*(undefined1 *)(lStack_78 + 0x2aa));
    uVar14 = (ulong)uStack_1a8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      uVar14 = uStack_1a0;
      pcVar16 = pcStack_198;
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (pcVar16 == (code *)0x0) {
      pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
    }
    else {
      lVar8 = uVar14 + 9;
      uStack_1b0 = 0x7771745;
      puStack_158 = puVar5;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
        uStack_1b0 = 0x7772b8c;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = uVar14;
      uStack_1b0 = 0x7771775;
      func_0x0eee2f00(puVar7 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      puVar5 = puStack_158;
    }
    uStack_1b0 = 0x7771910;
    func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
    plVar27 = plStack_150;
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0x7771944;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0x7771968;
      func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0x77715cd;
    (**(code **)(*plVar27 + 0x80))(auStack_138,plVar27,0x40);
    cStack_168 = cStack_f8;
    if (cStack_f8 == '\0') {
      uStack_1a8 = (undefined8 *)auStack_138;
      uStack_1a0 = (ulong)plStack_130;
      pcStack_198 = pcStack_128;
      pcStack_190 = pcStack_120;
      uStack_188 = lStack_118;
      lStack_180 = lStack_110;
      lStack_178 = lStack_108;
      puStack_170 = puStack_100;
      pppppppuStack_b8 = (undefined8 *******)puVar4[3];
      uStack_b0 = puVar4[2];
      if ((*(byte *)(puVar4 + 1) & 1) == 0) {
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar21;
        uStack_b0 = (ulong)(*(byte *)(puVar4 + 1) >> 1);
      }
      uStack_1b0 = 0x7771827;
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
        uStack_1b0 = 0x777187f;
        puStack_158 = puVar5;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
          uStack_1b0 = 0x7772b9e;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = (ulong)plVar27;
        uStack_1b0 = 0x77718af;
        func_0x0eee2f00(puVar7 + 1,pcVar16,plVar27);
        *(undefined1 *)((long)puVar7 + (long)plVar27 + 8U) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        puVar5 = puStack_158;
      }
      uStack_1b0 = 0x77719e1;
      func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
      plVar27 = plStack_150;
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0x7771a15;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_138 & 1) != 0) {
        uStack_1b0 = 0x7771a3e;
        func_0x0412a280(pcStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
      }
      uStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_198 = pcStack_128;
      uStack_1a8 = (undefined8 *)auStack_138;
      uStack_1a0 = (ulong)plStack_130;
      plVar18 = (long *)(ulong)(byte)(auStack_138[0] >> 1);
      pcVar16 = (code *)((long)&uStack_1a8 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar18 = plStack_130;
        pcVar16 = pcStack_128;
      }
      bVar22 = auStack_138[0];
      if (plVar18 != (long *)0x0) {
        uStack_1b0 = 0x777161c;
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
        bVar22 = (byte)uStack_1a8;
      }
      if ((bVar22 & 1) == 0) {
        pcStack_c8 = pcStack_198;
        uStack_d8 = uStack_1a8;
        uStack_d0 = uStack_1a0;
      }
      else {
        uStack_1b0 = 0x777199b;
        func_0x0412e5e0(&uStack_d8,pcStack_198,uStack_1a0);
      }
    }
    lVar8 = lStack_180;
    if (cStack_168 == '\x01') {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0x7771a78;
        func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_180 != 0) {
        while (lVar8 != lStack_178) {
          uStack_1b0 = 0x7771aac;
          FUN_048b3e80(lStack_178 + -0x40);
          lStack_178 = lStack_178 + -0x40;
        }
        lStack_178 = lVar8;
        uStack_1b0 = 0x7771ac8;
        func_0x0412a280(lStack_180,(long)puStack_170 - lStack_180);
      }
      pcVar17 = pcStack_198;
      pcVar16 = pcStack_190;
      if (pcStack_198 != (code *)0x0) {
        for (; pcVar17 != pcVar16; pcVar16 = pcVar16 + -0x50) {
          if ((pcVar16[-8] == (code)0x1) && (((byte)pcVar16[-0x30] & 1) != 0)) {
            uStack_1b0 = 0x7771b18;
            func_0x0412a280(*(undefined8 *)(pcVar16 + -0x20),
                            *(ulong *)(pcVar16 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_190 = pcVar17;
        uStack_1b0 = 0x7771b31;
        func_0x0412a280(pcStack_198,uStack_188 - (long)pcStack_198);
      }
    }
  }
  uStack_1b0 = 0x7771b48;
  (**(code **)(*plVar27 + 0xd0))(plVar27);
  lVar8 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar15 = puVar5[4];
LAB_07771b8a:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1b0 = 0x7771bb3;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_1a8,lVar1 + -0x18);
      uVar15 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar15 = puVar5[4], uVar23 == uVar15 - 1)) goto LAB_07771b8a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0x7771bf2;
    auStack_40 = (*(code *)*puStack_70)();
    uVar11 = auStack_40._8_8_;
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
      uStack_1b0 = 0x7771ce1;
      lVar8 = func_0x048aead0(uVar11);
    }
    uStack_1b0 = 0x7771cf3;
    puStack_58 = (undefined8 *)FUN_048b0c90(uVar11,lVar8,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1a8 = (undefined8 *)0x0;
      uStack_1a0 = 0;
      uStack_1b0 = 0x7771d21;
      func_0x048b0d20(&uStack_1a8);
      puStack_58 = uStack_1a8;
      uStack_50 = uStack_1a0;
      if (uStack_1a8 == (undefined8 *)0x0) {
        lVar8 = *plStack_e8;
        uStack_1b0 = 0x77723d3;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1b0 = 0x77723e7;
        uVar11 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar14 = uStack_d0;
          pcVar16 = pcStack_c8;
        }
        uStack_1b0 = 0x7772413;
        uVar11 = func_0x0412f8c0(uVar11,pcVar16,uVar14);
        uStack_1b0 = 0x7772427;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
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
        uStack_1b0 = 0x7772459;
        func_0x0ee387f0(auStack_138,pbVar25,uVar14,1);
        uStack_1b0 = 0x777246b;
        func_0x0ed5ffe0(lVar8,8,auStack_138);
        uStack_1b0 = 0x7772475;
        func_0x0ee386e0(auStack_138);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0x7772491;
          func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_07772ae2;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    lStack_178 = 0;
    puStack_170 = (undefined *)0x0;
    uStack_188 = 0;
    lStack_180 = 0;
    pcStack_198 = (code *)0x0;
    pcStack_190 = (code *)0x0;
    uStack_1a8 = (undefined8 *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0x7771d56;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0x7771d6e;
    func_0x05d9a920(&pppppppuStack_b8,&puStack_58,&uStack_1a8);
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x7771d7d;
      (*pcStack_190)(&uStack_1a8);
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
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0xc616883) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1b0 = 0x7771e7e;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      uStack_1b0 = 0x7771ea0;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xf39e977d,puVar4);
    }
    plVar27 = (long *)param_3[5];
    if (DAT_0f5aaef0 == '\0') {
      uStack_1b0 = 0x7772baf;
      iVar3 = FUN_04108328(&DAT_0f5aaef0);
      if (iVar3 != 0) {
        uStack_1b0 = 0x7772bbc;
        func_0x0775ad80();
        uStack_1b0 = 0x7772bd6;
        __cxa_atexit(&UNK_048ae800,&DAT_0f5aae70,0xf53dab8);
        uStack_1b0 = 0x7772be2;
        func_0x0410844d(&DAT_0f5aaef0);
      }
    }
    plVar18 = (long *)(*plVar27 +
                      (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                             *(uint *)(_DAT_0f5aae70 + 4)) * 8);
    do {
      lVar8 = *plVar18;
      if (lVar8 == -1) {
        plVar6 = (long *)plVar27[4];
        plVar18 = plVar6;
        goto LAB_07771f04;
      }
      plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5aae70 + 4));
    plVar6 = (long *)plVar27[4];
LAB_07771f04:
    if (plVar18 == plVar6) {
      puVar26 = &DAT_0f5aae70;
    }
    else {
      puVar26 = (undefined *)plVar18[2];
    }
    uStack_1b0 = 0x7771f25;
    auVar10 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
    plStack_140 = plVar27;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1b0 = 0x7771f3c;
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
    uStack_1b0 = 0x7771f7a;
    puStack_148 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_138);
    uStack_1b0 = 0x7771f8c;
    func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
    if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
        bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        pppppppuVar20 = pppppppuStack_b8;
        if (cStack_94 == '\x02') {
          pppppppuVar20 = &pppppppuStack_b8;
        }
        uStack_1b0 = 0x7772a2b;
        lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
        bVar28 = lVar8 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x7771fca;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_120 != (code *)0x0) {
      uStack_1b0 = 0x7771fde;
      (*pcStack_120)(auStack_138);
    }
    if (bVar28) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar13 + 4) != 0xffffffff) {
        uStack_1b0 = 0x777200c;
        (**(code **)(&UNK_0f0e36e8 + (ulong)*(uint *)(puVar13 + 4) * 8))(auStack_138,puVar13);
      }
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *(undefined4 *)(puVar13 + 4) = 0;
      pcStack_198 = (code *)&UNK_0775b080;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x33df2907f);
      lStack_178 = 0;
      puStack_170 = &UNK_0775afa0;
      lStack_118 = plStack_e8[4];
      auStack_138 = (undefined1  [8])*plStack_e8;
      plStack_130 = (long *)plStack_e8[1];
      pcStack_128 = (code *)plStack_e8[2];
      pcStack_120 = (code *)plStack_e8[3];
      plVar27 = (long *)plStack_e8[2];
      lStack_180 = lVar8;
      if (plVar27 == (long *)0x0) {
        pcStack_128 = (code *)0x0;
        uStack_1a8 = puVar13;
      }
      else {
        uStack_1b0 = 0x77720a1;
        uStack_1a8 = puVar13;
        pcStack_128 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,0);
      }
      puStack_148 = &UNK_0f0e4188;
      uStack_1b0 = 0x7772399;
      func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_e0,auStack_138);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x77723ac;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar27 = (long *)param_3[5];
      if (DAT_0f5ab178 == '\0') {
        uStack_1b0 = 0x7772bf3;
        iVar3 = FUN_04108328(&DAT_0f5ab178);
        if (iVar3 != 0) {
          uStack_1b0 = 0x7772c00;
          func_0x0775f560();
          uStack_1b0 = 0x7772c1a;
          __cxa_atexit(&UNK_048ae800,&DAT_0f5ab0f8,0xf53dab8);
          uStack_1b0 = 0x7772c26;
          func_0x0410844d(&DAT_0f5ab178);
        }
      }
      plVar18 = (long *)(*plVar27 +
                        (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                               *(uint *)(_DAT_0f5ab0f8 + 4)) * 8);
      do {
        lVar8 = *plVar18;
        if (lVar8 == -1) {
          plVar6 = (long *)plVar27[4];
          plVar18 = plVar6;
          goto LAB_07772114;
        }
        plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5ab0f8 + 4));
      plVar6 = (long *)plVar27[4];
LAB_07772114:
      if (plVar18 == plVar6) {
        puVar26 = &DAT_0f5ab0f8;
      }
      else {
        puVar26 = (undefined *)plVar18[2];
      }
      uStack_1b0 = 0x7772171;
      auVar10 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1b0 = 0x7772188;
        func_0x048b0d20(auStack_138);
        auVar10 = auStack_138;
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
      uStack_1b0 = 0x77721c6;
      puStack_148 = (undefined *)auVar10;
      plStack_140 = plVar27;
      func_0x05d84ba0(auStack_138);
      uStack_1b0 = 0x77721d8;
      func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
      if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
          bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          pppppppuVar20 = pppppppuStack_b8;
          if (cStack_94 == '\x02') {
            pppppppuVar20 = &pppppppuStack_b8;
          }
          uStack_1b0 = 0x7772b2c;
          lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
          bVar28 = lVar8 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x7772216;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_120 != (code *)0x0) {
        uStack_1b0 = 0x777222a;
        (*pcStack_120)(auStack_138);
      }
      if (bVar28) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar13 + 4) != 0xffffffff) {
          uStack_1b0 = 0x7772258;
          (**(code **)(&UNK_0f0e36e8 + (ulong)*(uint *)(puVar13 + 4) * 8))(auStack_138,puVar13);
        }
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *(undefined4 *)(puVar13 + 4) = 1;
        pcStack_198 = (code *)&UNK_0775f860;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x3257a71dc);
        lStack_178 = 0;
        puStack_170 = &UNK_0775f780;
        lStack_118 = plStack_e8[4];
        auStack_138 = (undefined1  [8])*plStack_e8;
        plStack_130 = (long *)plStack_e8[1];
        pcStack_128 = (code *)plStack_e8[2];
        pcStack_120 = (code *)plStack_e8[3];
        plVar27 = (long *)plStack_e8[2];
        lStack_180 = lVar8;
        if (plVar27 == (long *)0x0) {
          pcStack_128 = (code *)0x0;
          uStack_1a8 = puVar13;
        }
        else {
          uStack_1b0 = 0x77722f0;
          uStack_1a8 = puVar13;
          pcStack_128 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,1);
        }
        puStack_148 = &UNK_0f0e4208;
        uStack_1b0 = 0x777271f;
        func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_e0,auStack_138);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x7772732;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else {
        plVar27 = (long *)param_3[5];
        if (DAT_0f5ab400 == '\0') {
          uStack_1b0 = 0x7772c37;
          iVar3 = FUN_04108328(&DAT_0f5ab400);
          if (iVar3 != 0) {
            uStack_1b0 = 0x7772c44;
            func_0x07764e20();
            uStack_1b0 = 0x7772c5e;
            __cxa_atexit(&UNK_048ae800,&DAT_0f5ab380,0xf53dab8);
            uStack_1b0 = 0x7772c6a;
            func_0x0410844d(&DAT_0f5ab400);
          }
        }
        plVar18 = (long *)(*plVar27 +
                          (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                 *(uint *)(_DAT_0f5ab380 + 4)) * 8);
        do {
          lVar8 = *plVar18;
          if (lVar8 == -1) {
            plVar6 = (long *)plVar27[4];
            plVar18 = plVar6;
            goto LAB_077724aa;
          }
          plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
        } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5ab380 + 4));
        plVar6 = (long *)plVar27[4];
LAB_077724aa:
        if (plVar18 == plVar6) {
          puVar26 = &DAT_0f5ab380;
        }
        else {
          puVar26 = (undefined *)plVar18[2];
        }
        uStack_1b0 = 0x7772507;
        auVar10 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
        if (auVar10 == (undefined1  [8])0x0) {
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1b0 = 0x777251e;
          func_0x048b0d20(auStack_138);
          auVar10 = auStack_138;
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
        uStack_1b0 = 0x777255c;
        puStack_148 = (undefined *)auVar10;
        plStack_140 = plVar27;
        func_0x05d84ba0(auStack_138);
        uStack_1b0 = 0x777256e;
        func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
        if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0))) {
          if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
            bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
          }
          else {
            pppppppuVar20 = pppppppuStack_b8;
            if (cStack_94 == '\x02') {
              pppppppuVar20 = &pppppppuStack_b8;
            }
            uStack_1b0 = 0x7772b4a;
            lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
            bVar28 = lVar8 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x77725ac;
          (*pcStack_190)(&uStack_1a8);
        }
        if (pcStack_120 != (code *)0x0) {
          uStack_1b0 = 0x77725c0;
          (*pcStack_120)(auStack_138);
        }
        if (bVar28) {
          lVar8 = param_3[5];
          if ((ulong)*(uint *)(puVar13 + 4) != 0xffffffff) {
            uStack_1b0 = 0x77725ee;
            (**(code **)(&UNK_0f0e36e8 + (ulong)*(uint *)(puVar13 + 4) * 8))(auStack_138,puVar13);
          }
          puVar13[2] = 0;
          puVar13[3] = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined4 *)(puVar13 + 4) = 2;
          pcStack_198 = (code *)&UNK_07765120;
          pcStack_190 = (code *)0x0;
          uStack_188 = CONCAT35(uStack_188._5_3_,0x3bf980bf7);
          lStack_178 = 0;
          puStack_170 = &UNK_07765040;
          lStack_118 = plStack_e8[4];
          auStack_138 = (undefined1  [8])*plStack_e8;
          plStack_130 = (long *)plStack_e8[1];
          pcStack_128 = (code *)plStack_e8[2];
          pcStack_120 = (code *)plStack_e8[3];
          plVar27 = (long *)plStack_e8[2];
          lStack_180 = lVar8;
          if (plVar27 == (long *)0x0) {
            pcStack_128 = (code *)0x0;
            uStack_1a8 = puVar13;
          }
          else {
            uStack_1b0 = 0x7772683;
            uStack_1a8 = puVar13;
            pcStack_128 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,2);
          }
          puStack_148 = &UNK_0f0e4288;
          uStack_1b0 = 0x77729f4;
          func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_e0,auStack_138);
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x7772a07;
            (*pcStack_190)(&uStack_1a8);
          }
        }
        else {
          plVar27 = (long *)param_3[5];
          if (DAT_0f5ab4b8 == '\0') {
            uStack_1b0 = 0x7772c7b;
            iVar3 = FUN_04108328(&DAT_0f5ab4b8);
            if (iVar3 != 0) {
              uStack_1b0 = 0x7772c88;
              func_0x0776af10();
              uStack_1b0 = 0x7772ca2;
              __cxa_atexit(&UNK_048ae800,&DAT_0f5ab438,0xf53dab8);
              uStack_1b0 = 0x7772cae;
              func_0x0410844d(&DAT_0f5ab4b8);
            }
          }
          plVar18 = (long *)(*plVar27 +
                            (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                   *(uint *)(_DAT_0f5ab438 + 4)) * 8);
          do {
            lVar8 = *plVar18;
            if (lVar8 == -1) {
              plVar6 = (long *)plVar27[4];
              plVar18 = plVar6;
              goto LAB_0777274b;
            }
            plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
          } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5ab438 + 4));
          plVar6 = (long *)plVar27[4];
LAB_0777274b:
          if (plVar18 == plVar6) {
            puVar26 = &DAT_0f5ab438;
          }
          else {
            puVar26 = (undefined *)plVar18[2];
          }
          uStack_1b0 = 0x77727a8;
          auVar10 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
          if (auVar10 == (undefined1  [8])0x0) {
            auStack_138 = (undefined1  [8])0x0;
            plStack_130 = (long *)0x0;
            uStack_1b0 = 0x77727bf;
            func_0x048b0d20(auStack_138);
            auVar10 = auStack_138;
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
          uStack_1b0 = 0x77727fd;
          puStack_148 = (undefined *)auVar10;
          plStack_140 = plVar27;
          func_0x05d84ba0(auStack_138);
          uStack_1b0 = 0x777280f;
          func_0x05d9a920(&uStack_1a8,&puStack_148,auStack_138);
          if ((lStack_180 == lStack_90) && ((lStack_80 != 0) == (puStack_170 != (undefined *)0x0)))
          {
            if ((cStack_94 == '\0') || ((int)uStack_188 != iStack_98)) {
              bVar28 = cStack_94 == '\0' && uStack_188._4_1_ == '\0';
            }
            else {
              pppppppuVar20 = &pppppppuStack_b8;
              if (cStack_94 != '\x02') {
                pppppppuVar20 = pppppppuStack_b8;
              }
              uStack_1b0 = 0x7772a7c;
              lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
              bVar28 = lVar8 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x777284c;
            (*pcStack_190)(&uStack_1a8);
          }
          if (pcStack_120 != (code *)0x0) {
            uStack_1b0 = 0x7772860;
            (*pcStack_120)(auStack_138);
          }
          if (bVar28) {
            lVar8 = param_3[5];
            if ((ulong)*(uint *)(puVar13 + 4) != 0xffffffff) {
              uStack_1b0 = 0x777288d;
              (**(code **)(&UNK_0f0e36e8 + (ulong)*(uint *)(puVar13 + 4) * 8))(auStack_138,puVar13);
            }
            puVar13[2] = 0;
            puVar13[3] = 0;
            *puVar13 = 0;
            puVar13[1] = 0;
            *(undefined4 *)(puVar13 + 4) = 3;
            pcStack_198 = (code *)&UNK_0776b210;
            pcStack_190 = (code *)0x0;
            uStack_188 = CONCAT35(uStack_188._5_3_,0x32170261e);
            lStack_178 = 0;
            puStack_170 = &UNK_0776b130;
            lStack_118 = plStack_e8[4];
            auStack_138 = (undefined1  [8])*plStack_e8;
            plStack_130 = (long *)plStack_e8[1];
            pcStack_128 = (code *)plStack_e8[2];
            pcStack_120 = (code *)plStack_e8[3];
            plVar27 = (long *)plStack_e8[2];
            lStack_180 = lVar8;
            if (plVar27 == (long *)0x0) {
              pcStack_128 = (code *)0x0;
              uStack_1a8 = puVar13;
            }
            else {
              uStack_1b0 = 0x7772922;
              uStack_1a8 = puVar13;
              pcStack_128 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,3);
            }
            puStack_148 = &UNK_0f0e4308;
            uStack_1b0 = 0x7772abc;
            func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_1a8,uStack_e0,auStack_138);
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0x7772acb;
              (*pcStack_190)(&uStack_1a8);
            }
          }
          else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                  (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
            uStack_1a8 = (undefined8 *)0x2300000149614c;
            uStack_1b0 = 0x7772987;
            func_0x0ed5ffe0(*plStack_e8,8,&uStack_1a8);
            if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
              uStack_1b0 = 0x77729b2;
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
            }
            uStack_1a8 = (undefined8 *)0x0;
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1b0 = 0x7772ae2;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_07772ae2:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1b0 = 0x7772b09;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


