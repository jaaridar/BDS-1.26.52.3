/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6475a0 (ELF vaddr 0xe5475a0)
 * Label: caller-of-callee
 * Body:  [[0e6475a0, 0e647eba] [0e647ec0, 0e648fd3] [0e64a6c0, 0e64a960]]
 * Ghidra: FUN_0e6475a0
 */


/* WARNING: Possible PIC construction at 0x0e6477c2: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6475a0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
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
  long *unaff_RBP;
  long *plVar24;
  undefined8 ******ppppppuVar25;
  byte *pbVar26;
  undefined *puVar27;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
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
      uStack_1a0 = 0xe6475f2;
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_0e64a990;
    }
    param_3[2] = &UNK_0e64aa70;
    *(undefined4 *)(param_3 + 4) = 0x8b208dcf;
    param_3[3] = 0;
    *(undefined1 *)((long)param_3 + 0x24) = 2;
    *(undefined2 *)param_3 = 0;
    *(undefined4 *)((long)param_3 + 4) = 0;
    pcVar16 = (code *)&UNK_0e64a990;
    param_3[7] = &UNK_0e64a990;
    if (bVar28) {
      lVar8 = param_3[6];
      param_3[6] = lVar8;
      if (lVar8 != 0) goto LAB_0e647686;
    }
    else {
      param_3[6] = 0;
    }
LAB_0e647670:
    uVar11 = param_3[5];
    uStack_1a0 = 0xe64767e;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0e647686;
    uStack_1a0 = 0xe6476bb;
    lVar8 = func_0x048aead0(uVar11);
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    if (lVar8 == 0) goto LAB_0e647670;
LAB_0e647686:
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_0e64a6c0;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1a0 = 0xe6477eb;
    func_0x048b1dc0(&uStack_198);
    puVar4 = uStack_198;
    uVar14 = uStack_190;
    unaff_R14 = &uStack_198;
joined_r0x0e6477f6:
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1a0 = 0xe647804;
      puVar4 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar4 = (undefined8 *)*unaff_R14;
    if (puVar4 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1a0 = 0xe6476e5;
      (*(code *)param_3[7])(0,param_3,0);
      puVar4 = (undefined8 *)*unaff_R14;
      goto joined_r0x0e6477f6;
    }
  }
  unaff_R15 = (undefined8 *)puVar4[0xd];
  uStack_1a0 = 0xe6476ff;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar24 = plStack_f0;
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0xe6477c7;
    unaff_RBX = param_4;
    unaff_RBP = param_2;
    unaff_R12 = param_3;
SUB_0e64a6c0:
    plVar24 = plStack_f0;
    *(long **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x74df7231) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe64a71f;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe64a741;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0x8b208dcf,puVar4);
    }
    lVar8 = *plVar24;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe64a751;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe64a76e;
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
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe64a7a9;
      cVar2 = func_0x0e64aea0(param_2,uVar11,puVar13,param_4,plVar24,4);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe64a7d6;
      cVar2 = func_0x0e64b070(param_2,uVar11,puVar13,param_4,plVar24,4);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe64a803;
      cVar2 = func_0x0e64b250(param_2,uVar11,puVar13,param_4,plVar24,4);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar14 = 4;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
    }
    else {
      if ((uVar14 & 0xfffffffc) != 0) {
        lVar8 = *plVar24;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe64a86b;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe64a893;
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
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe64a8cd;
      cVar2 = func_0x0e64aea0(param_2,uVar11,puVar13,param_4,plVar24,uVar14 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe64a8fa;
      cVar2 = func_0x0e64b070(param_2,uVar11,puVar13,param_4,plVar24,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe64a923;
      cVar2 = func_0x0e64b250(param_2,uVar11,puVar13,param_4,plVar24,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe64a95b;
    func_0x0e64b430(param_2,uVar11,puVar13,param_4,plVar24,uVar14);
    return;
  }
  if (bVar22 != 1) {
    uStack_198 = (undefined8 *)0x120000012f2525;
    uStack_1a0 = 0xe64783c;
    func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0xe64785f;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0xe647739;
  uStack_e0 = param_4;
  func_0x0ed6d600(&lStack_68,*plStack_f0);
  uStack_48 = param_3[5];
  lStack_78 = *plVar24;
  ppppppuVar21 = (undefined8 ******)((long)unaff_R15 + 9);
  bVar28 = (*(byte *)(unaff_R15 + 1) & 1) == 0;
  ppppppuVar25 = (undefined8 ******)unaff_R15[3];
  if (bVar28) {
    ppppppuVar25 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(unaff_R15 + 1) >> 1);
  if (!bVar28) {
    uVar14 = unaff_R15[2];
  }
  plStack_150 = param_2;
  puStack_70 = unaff_R15;
  if (ppppppuVar25 == (undefined8 ******)0x0) {
    puStack_148 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_148 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar25 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar14 + 9;
    puStack_e8 = (uint *)CONCAT71(puStack_e8._1_7_,lVar8 == 0);
    uStack_1a0 = 0xe6478a3;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar7 == (ulong *)0x0 && (char)puStack_e8 == '\0') {
      uStack_1a0 = 0xe648e9b;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar7 = uVar14;
    uStack_1a0 = 0xe6478d2;
    func_0x0eee2f00(puVar7 + 1,ppppppuVar25,uVar14);
    *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
    puStack_148 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  plVar24 = plStack_150;
  uStack_1a0 = 0xe647910;
  puVar5 = (uint *)func_0x0ed6d180(lStack_78,&puStack_148,0);
  if (((ulong)puStack_148 & 0x80000000000000) != 0) {
    uStack_1a0 = 0xe64793f;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_148 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar4 = puStack_70;
  puStack_148 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar25 = (undefined8 ******)puStack_70[3];
  if (bVar28) {
    ppppppuVar25 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar28) {
    uVar14 = puStack_70[2];
  }
  uStack_1a0 = 0xe647975;
  cVar2 = (**(code **)(*plVar24 + 0xb8))(plVar24,ppppppuVar25,uVar14);
  if (cVar2 == '\0') {
    uStack_1a0 = 0xe647aa6;
    puStack_e8 = puVar5;
    _auStack_138 = (*(code *)*puVar4)(uStack_48);
    uStack_1a0 = 0xe647acc;
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
      uStack_1a0 = 0xe647b1b;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
        uStack_1a0 = 0xe648ead;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = uVar14;
      uStack_1a0 = 0xe647b4b;
      func_0x0eee2f00(puVar7 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      plVar24 = plStack_150;
    }
    uStack_1a0 = 0xe647ce3;
    func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
    puVar5 = puStack_e8;
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0xe647d1a;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0xe647d3e;
      thunk_FUN_0ee326a0(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0xe647994;
    (**(code **)(*plVar24 + 0x80))(auStack_138,plVar24,0x40);
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
      uStack_1a0 = 0xe647c02;
      puStack_e8 = puVar5;
      FUN_0470d9a0(auStack_138,&UNK_01377405,0x15,0xd,&pppppppuStack_b8);
      plVar18 = (long *)((ulong)auStack_138 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_138 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar18 = plStack_130;
        pcVar16 = pcStack_128;
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)plVar18 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar18 + 9;
        uStack_1a0 = 0xe647c52;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
          uStack_1a0 = 0xe648ebf;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = (ulong)plVar18;
        uStack_1a0 = 0xe647c82;
        func_0x0eee2f00(puVar7 + 1,pcVar16,plVar18);
        *(undefined1 *)((long)puVar7 + (long)plVar18 + 8U) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        plVar24 = plStack_150;
      }
      uStack_1a0 = 0xe647db7;
      func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
      puVar5 = puStack_e8;
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0xe647dee;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_138 & 1) != 0) {
        uStack_1a0 = 0xe647e14;
        thunk_FUN_0ee326a0(pcStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
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
        uStack_1a0 = 0xe6479e4;
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
        uStack_1a0 = 0xe647d71;
        FUN_0412e5e0(&uStack_d8,pcStack_188,uStack_190);
      }
    }
    lVar8 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0xe647e4e;
        thunk_FUN_0ee326a0(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar8 != lStack_168) {
          uStack_1a0 = 0xe647e7c;
          func_0x048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar8;
        uStack_1a0 = 0xe647e98;
        thunk_FUN_0ee326a0(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar17 = pcStack_188;
      pcVar16 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar17 != pcVar16; pcVar16 = pcVar16 + -0x50) {
          if ((pcVar16[-8] == (code)0x1) && (((byte)pcVar16[-0x30] & 1) != 0)) {
            uStack_1a0 = 0xe647ee8;
            thunk_FUN_0ee326a0(*(undefined8 *)(pcVar16 + -0x20),
                               *(ulong *)(pcVar16 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar17;
        uStack_1a0 = 0xe647f01;
        thunk_FUN_0ee326a0(pcStack_188,uStack_178 - (long)pcStack_188);
      }
    }
  }
  uStack_1a0 = 0xe647f18;
  (**(code **)(*plVar24 + 0xd0))(plVar24);
  lVar8 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar15 = puVar5[4];
LAB_0e647f5f:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1a0 = 0xe647f88;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_198,lVar1 + -0x18);
      uVar15 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar15 = puVar5[4], uVar23 == uVar15 - 1)) goto LAB_0e647f5f;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0xe647fc9;
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
      uStack_1a0 = 0xe6480c1;
      lVar8 = func_0x048aead0(uVar11);
    }
    uStack_1a0 = 0xe6480d3;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar11,lVar8,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_198 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_1a0 = 0xe648101;
      func_0x048b0d20(&uStack_198);
      puStack_58 = uStack_198;
      uStack_50 = uStack_190;
      if (uStack_198 == (undefined8 *)0x0) {
        lVar8 = *plStack_f0;
        uStack_1a0 = 0xe648766;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1a0 = 0xe64877a;
        uVar11 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar14 = uStack_d0;
          pcVar16 = pcStack_c8;
        }
        uStack_1a0 = 0xe6487a6;
        uVar11 = func_0x0412f8c0(uVar11,pcVar16,uVar14);
        uStack_1a0 = 0xe6487ba;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar28 = (*pbVar12 & 1) != 0;
        pbVar26 = pbVar12 + 1;
        if (bVar28) {
          pbVar26 = *(byte **)(pbVar12 + 0x10);
        }
        uVar14 = (ulong)(*pbVar12 >> 1);
        if (bVar28) {
          uVar14 = *(ulong *)(pbVar12 + 8);
        }
        auStack_138 = (undefined1  [8])0x0;
        uStack_1a0 = 0xe6487ec;
        func_0x0ee387f0(auStack_138,pbVar26,uVar14,1);
        uStack_1a0 = 0xe6487fe;
        func_0x0ed5ffe0(lVar8,8,auStack_138);
        uStack_1a0 = 0xe648808;
        func_0x0ee386e0(auStack_138);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0xe648824;
          thunk_FUN_0ee326a0(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0e648e1a;
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
    uStack_1a0 = 0xe648136;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0xe64814e;
    func_0x05d9a920(&pppppppuStack_b8,&puStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe64815d;
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
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x74df7231) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1a0 = 0xe648260;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      uStack_1a0 = 0xe648282;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0x8b208dcf,puVar4);
    }
    plVar24 = (long *)param_3[5];
    if (DAT_0f75b730 == '\0') {
      uStack_1a0 = 0xe648ed0;
      iVar3 = func_0x04108328(&DAT_0f75b730);
      if (iVar3 != 0) {
        uStack_1a0 = 0xe648edd;
        func_0x0e640fc0();
        uStack_1a0 = 0xe648ef7;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b6b0,0xf53dab8);
        uStack_1a0 = 0xe648f03;
        func_0x0410844d(&DAT_0f75b730);
      }
    }
    plVar18 = (long *)(*plVar24 +
                      (ulong)((int)((ulong)(plVar24[1] - *plVar24) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b6b0 + 4)) * 8);
    do {
      lVar8 = *plVar18;
      if (lVar8 == -1) {
        plVar6 = (long *)plVar24[4];
        plVar18 = plVar6;
        goto LAB_0e6482f4;
      }
      plVar18 = (long *)(plVar24[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar24[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f75b6b0 + 4));
    plVar6 = (long *)plVar24[4];
LAB_0e6482f4:
    if (plVar18 == plVar6) {
      puVar27 = &DAT_0f75b6b0;
    }
    else {
      puVar27 = (undefined *)plVar18[2];
    }
    uStack_1a0 = 0xe648316;
    auVar10 = (undefined1  [8])func_0x048b0c90(plVar24,puVar27,uVar23,1);
    plStack_140 = plVar24;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0xe64832d;
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
    uStack_1a0 = 0xe648368;
    puStack_148 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_138);
    uStack_1a0 = 0xe64837a;
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
        uStack_1a0 = 0xe648d66;
        lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
        bVar28 = lVar8 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xe6483b8;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_120 != (code *)0x0) {
      uStack_1a0 = 0xe6483c9;
      (*pcStack_120)(auStack_138);
    }
    if (bVar28) {
      lStack_170 = param_3[5];
      *(undefined2 *)puVar13 = 0;
      *(undefined4 *)((long)puVar13 + 4) = 0;
      pcStack_188 = (code *)&UNK_0e641280;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x3e257d9d2);
      lStack_168 = 0;
      puStack_160 = &UNK_0e6411a0;
      lStack_118 = plStack_f0[4];
      auStack_138 = (undefined1  [8])*plStack_f0;
      plStack_130 = (long *)plStack_f0[1];
      pcStack_128 = (code *)plStack_f0[2];
      pcStack_120 = (code *)plStack_f0[3];
      plVar24 = (long *)plStack_f0[2];
      if (plVar24 == (long *)0x0) {
        pcStack_128 = (code *)0x0;
        uStack_198 = puVar13;
      }
      else {
        uStack_1a0 = 0xe64845e;
        uStack_198 = puVar13;
        pcStack_128 = (code *)(**(code **)(*plVar24 + 0x30))(plVar24,0);
      }
      puStack_148 = &UNK_0f4c41b0;
      uStack_1a0 = 0xe648554;
      func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe648567;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar24 = (long *)param_3[5];
      if (DAT_0f75b7e8 == '\0') {
        uStack_1a0 = 0xe648f14;
        iVar3 = func_0x04108328(&DAT_0f75b7e8);
        if (iVar3 != 0) {
          uStack_1a0 = 0xe648f21;
          func_0x0e6422d0();
          uStack_1a0 = 0xe648f3b;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b768,0xf53dab8);
          uStack_1a0 = 0xe648f47;
          func_0x0410844d(&DAT_0f75b7e8);
        }
      }
      plVar18 = (long *)(*plVar24 +
                        (ulong)((int)((ulong)(plVar24[1] - *plVar24) >> 3) - 1U &
                               *(uint *)(_DAT_0f75b768 + 4)) * 8);
      do {
        lVar8 = *plVar18;
        if (lVar8 == -1) {
          plVar6 = (long *)plVar24[4];
          plVar18 = plVar6;
          goto LAB_0e6484d4;
        }
        plVar18 = (long *)(plVar24[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar24[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f75b768 + 4));
      plVar6 = (long *)plVar24[4];
LAB_0e6484d4:
      if (plVar18 == plVar6) {
        puVar27 = &DAT_0f75b768;
      }
      else {
        puVar27 = (undefined *)plVar18[2];
      }
      uStack_1a0 = 0xe648583;
      auVar10 = (undefined1  [8])func_0x048b0c90(plVar24,puVar27,uVar23,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0xe64859a;
        func_0x048b0d20(auStack_138);
        auVar10 = auStack_138;
        plVar24 = plStack_130;
      }
      lStack_108 = 0;
      puStack_100 = (undefined *)0x0;
      lStack_118 = 0;
      lStack_110 = 0;
      pcStack_128 = (code *)0x0;
      pcStack_120 = (code *)0x0;
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0xe6485d5;
      puStack_148 = (undefined *)auVar10;
      plStack_140 = plVar24;
      func_0x05d84ba0(auStack_138);
      uStack_1a0 = 0xe6485e7;
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
          uStack_1a0 = 0xe648e64;
          lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
          bVar28 = lVar8 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xe648625;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_120 != (code *)0x0) {
        uStack_1a0 = 0xe648636;
        (*pcStack_120)(auStack_138);
      }
      if (bVar28) {
        lStack_170 = param_3[5];
        *(undefined2 *)puVar13 = 0;
        *(undefined4 *)((long)puVar13 + 4) = 1;
        pcStack_188 = (code *)&UNK_0e642590;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x3c8fb3b91);
        lStack_168 = 0;
        puStack_160 = &UNK_0e6424b0;
        lStack_118 = plStack_f0[4];
        auStack_138 = (undefined1  [8])*plStack_f0;
        plStack_130 = (long *)plStack_f0[1];
        pcStack_128 = (code *)plStack_f0[2];
        pcStack_120 = (code *)plStack_f0[3];
        plVar24 = (long *)plStack_f0[2];
        if (plVar24 == (long *)0x0) {
          pcStack_128 = (code *)0x0;
          uStack_198 = puVar13;
        }
        else {
          uStack_1a0 = 0xe6486ce;
          uStack_198 = puVar13;
          pcStack_128 = (code *)(**(code **)(*plVar24 + 0x30))(plVar24,1);
        }
        puStack_148 = &UNK_0f4c4230;
        uStack_1a0 = 0xe6488bd;
        func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe6488d0;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar24 = (long *)param_3[5];
        if (DAT_0f75b8a0 == '\0') {
          uStack_1a0 = 0xe648f58;
          iVar3 = func_0x04108328(&DAT_0f75b8a0);
          if (iVar3 != 0) {
            uStack_1a0 = 0xe648f65;
            func_0x0e6435e0();
            uStack_1a0 = 0xe648f7f;
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b820,0xf53dab8);
            uStack_1a0 = 0xe648f8b;
            func_0x0410844d(&DAT_0f75b8a0);
          }
        }
        plVar18 = (long *)(*plVar24 +
                          (ulong)((int)((ulong)(plVar24[1] - *plVar24) >> 3) - 1U &
                                 *(uint *)(_DAT_0f75b820 + 4)) * 8);
        do {
          lVar8 = *plVar18;
          if (lVar8 == -1) {
            plVar6 = (long *)plVar24[4];
            plVar18 = plVar6;
            goto LAB_0e64883d;
          }
          plVar18 = (long *)(plVar24[3] + lVar8 * 0x18);
        } while (*(uint *)(plVar24[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f75b820 + 4));
        plVar6 = (long *)plVar24[4];
LAB_0e64883d:
        if (plVar18 == plVar6) {
          puVar27 = &DAT_0f75b820;
        }
        else {
          puVar27 = (undefined *)plVar18[2];
        }
        uStack_1a0 = 0xe6488ec;
        auVar10 = (undefined1  [8])func_0x048b0c90(plVar24,puVar27,uVar23,1);
        if (auVar10 == (undefined1  [8])0x0) {
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0xe648903;
          func_0x048b0d20(auStack_138);
          auVar10 = auStack_138;
          plVar24 = plStack_130;
        }
        lStack_108 = 0;
        puStack_100 = (undefined *)0x0;
        lStack_118 = 0;
        lStack_110 = 0;
        pcStack_128 = (code *)0x0;
        pcStack_120 = (code *)0x0;
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0xe64893e;
        puStack_148 = (undefined *)auVar10;
        plStack_140 = plVar24;
        func_0x05d84ba0(auStack_138);
        uStack_1a0 = 0xe648950;
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
            uStack_1a0 = 0xe648e82;
            lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
            bVar28 = lVar8 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xe64898e;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_120 != (code *)0x0) {
          uStack_1a0 = 0xe64899f;
          (*pcStack_120)(auStack_138);
        }
        if (bVar28) {
          lStack_170 = param_3[5];
          *(undefined2 *)puVar13 = 0;
          *(undefined4 *)((long)puVar13 + 4) = 2;
          pcStack_188 = (code *)&UNK_0e6438a0;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x39394caa5);
          lStack_168 = 0;
          puStack_160 = &UNK_0e6437c0;
          lStack_118 = plStack_f0[4];
          auStack_138 = (undefined1  [8])*plStack_f0;
          plStack_130 = (long *)plStack_f0[1];
          pcStack_128 = (code *)plStack_f0[2];
          pcStack_120 = (code *)plStack_f0[3];
          plVar24 = (long *)plStack_f0[2];
          if (plVar24 == (long *)0x0) {
            pcStack_128 = (code *)0x0;
            uStack_198 = puVar13;
          }
          else {
            uStack_1a0 = 0xe648a37;
            uStack_198 = puVar13;
            pcStack_128 = (code *)(**(code **)(*plVar24 + 0x30))(plVar24,2);
          }
          puStack_148 = &UNK_0f4c42b0;
          uStack_1a0 = 0xe648b32;
          func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xe648b45;
            (*pcStack_180)(&uStack_198);
          }
        }
        else {
          plVar24 = (long *)param_3[5];
          if (DAT_0f75b958 == '\0') {
            uStack_1a0 = 0xe648f9c;
            iVar3 = func_0x04108328(&DAT_0f75b958);
            if (iVar3 != 0) {
              uStack_1a0 = 0xe648fa9;
              func_0x0e6448f0();
              uStack_1a0 = 0xe648fc3;
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b8d8,0xf53dab8);
              uStack_1a0 = 0xe648fcf;
              func_0x0410844d(&DAT_0f75b958);
            }
          }
          plVar18 = (long *)(*plVar24 +
                            (ulong)((int)((ulong)(plVar24[1] - *plVar24) >> 3) - 1U &
                                   *(uint *)(_DAT_0f75b8d8 + 4)) * 8);
          do {
            lVar8 = *plVar18;
            if (lVar8 == -1) {
              plVar6 = (long *)plVar24[4];
              plVar18 = plVar6;
              goto LAB_0e648ab2;
            }
            plVar18 = (long *)(plVar24[3] + lVar8 * 0x18);
          } while (*(uint *)(plVar24[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f75b8d8 + 4));
          plVar6 = (long *)plVar24[4];
LAB_0e648ab2:
          if (plVar18 == plVar6) {
            puVar27 = &DAT_0f75b8d8;
          }
          else {
            puVar27 = (undefined *)plVar18[2];
          }
          uStack_1a0 = 0xe648b61;
          auVar10 = (undefined1  [8])func_0x048b0c90(plVar24,puVar27,uVar23,1);
          if (auVar10 == (undefined1  [8])0x0) {
            auStack_138 = (undefined1  [8])0x0;
            plStack_130 = (long *)0x0;
            uStack_1a0 = 0xe648b78;
            func_0x048b0d20(auStack_138);
            auVar10 = auStack_138;
            plVar24 = plStack_130;
          }
          lStack_108 = 0;
          puStack_100 = (undefined *)0x0;
          lStack_118 = 0;
          lStack_110 = 0;
          pcStack_128 = (code *)0x0;
          pcStack_120 = (code *)0x0;
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0xe648bb3;
          puStack_148 = (undefined *)auVar10;
          plStack_140 = plVar24;
          func_0x05d84ba0(auStack_138);
          uStack_1a0 = 0xe648bc5;
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
              uStack_1a0 = 0xe648db7;
              lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar20);
              bVar28 = lVar8 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xe648c02;
            (*pcStack_180)(&uStack_198);
          }
          if (pcStack_120 != (code *)0x0) {
            uStack_1a0 = 0xe648c13;
            (*pcStack_120)(auStack_138);
          }
          if (bVar28) {
            lStack_170 = param_3[5];
            *(undefined2 *)puVar13 = 0;
            *(undefined4 *)((long)puVar13 + 4) = 3;
            pcStack_188 = (code *)&UNK_0e644bb0;
            pcStack_180 = (code *)0x0;
            uStack_178 = CONCAT35(uStack_178._5_3_,0x360da6ff2);
            lStack_168 = 0;
            puStack_160 = &UNK_0e644ad0;
            lStack_118 = plStack_f0[4];
            auStack_138 = (undefined1  [8])*plStack_f0;
            plStack_130 = (long *)plStack_f0[1];
            pcStack_128 = (code *)plStack_f0[2];
            pcStack_120 = (code *)plStack_f0[3];
            plVar24 = (long *)plStack_f0[2];
            if (plVar24 == (long *)0x0) {
              pcStack_128 = (code *)0x0;
              uStack_198 = puVar13;
            }
            else {
              uStack_1a0 = 0xe648caa;
              uStack_198 = puVar13;
              pcStack_128 = (code *)(**(code **)(*plVar24 + 0x30))(plVar24,3);
            }
            puStack_148 = &UNK_0f4c4330;
            uStack_1a0 = 0xe648df4;
            func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e0,auStack_138);
            if (pcStack_180 != (code *)0x0) {
              uStack_1a0 = 0xe648e03;
              (*pcStack_180)(&uStack_198);
            }
          }
          else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                  (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
            uStack_198 = (undefined8 *)0x2300000149614c;
            uStack_1a0 = 0xe648d0f;
            func_0x0ed5ffe0(*plStack_f0,8,&uStack_198);
            if (((ulong)uStack_198 & 0x80000000000000) != 0) {
              uStack_1a0 = 0xe648d3a;
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
            }
            uStack_198 = (undefined8 *)0x0;
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1a0 = 0xe648e1a;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_0e648e1a:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0xe648e41;
    thunk_FUN_0ee326a0(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


