/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8770ba0 (ELF vaddr 0x8670ba0)
 * Label: caller-of-callee
 * Body:  [[08770ba0, 08772dbd] [08775210, 087755d1]]
 * Ghidra: FUN_08770ba0
 */


/* WARNING: Possible PIC construction at 0x08770dbf: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08770ba0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
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
  undefined8 uVar10;
  byte *pbVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  code *pcVar17;
  undefined8 ******ppppppuVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 ******ppppppuVar21;
  ulong uVar22;
  undefined8 *******pppppppuVar23;
  ulong unaff_RBX;
  byte bVar24;
  uint uVar25;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar26;
  byte *pbVar27;
  undefined *puVar28;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  undefined8 *******unaff_R14;
  long *plVar29;
  long *unaff_R15;
  bool bVar30;
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
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  code *pcStack_d0;
  int iStack_c8;
  char cStack_c4;
  long lStack_c0;
  long lStack_b0;
  long *plStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  code *pcStack_88;
  undefined8 ******ppppppuStack_78;
  long lStack_70;
  long lStack_68;
  uint uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pcVar16 = (code *)param_3[7];
  uVar14 = unaff_RBX;
  plStack_f8 = param_5;
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar30 = false;
    }
    else {
      uStack_1b0 = 0x8770bf2;
      (*(code *)param_3[3])(param_3);
      bVar30 = (undefined *)param_3[7] == &UNK_08775600;
    }
    param_3[2] = &UNK_087756e0;
    *(undefined4 *)(param_3 + 4) = 0x59f37a56;
    param_3[3] = 0;
    *(undefined1 *)((long)param_3 + 0x24) = 2;
    *(undefined4 *)(param_3 + 1) = 0;
    pcVar16 = (code *)&UNK_08775600;
    param_3[7] = &UNK_08775600;
    if (bVar30) {
      lVar8 = param_3[6];
      param_3[6] = lVar8;
      if (lVar8 != 0) goto LAB_08770c7f;
    }
    else {
      param_3[6] = 0;
    }
LAB_08770c69:
    uVar14 = param_3[5];
    uStack_1b0 = 0x8770c77;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_08770c7f;
    uStack_1b0 = 0x8770cb4;
    lVar8 = func_0x048aead0(uVar14);
    bVar24 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    if (lVar8 == 0) goto LAB_08770c69;
LAB_08770c7f:
    bVar24 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar24 & 1) == 0) goto SUB_08775210;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (undefined8 *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0x8770de8;
    func_0x048b1dc0(&uStack_1a8);
    puVar4 = uStack_1a8;
    uVar14 = uStack_1a0;
joined_r0x08770df3:
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1b0 = 0x8770e01;
      puVar4 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar4 = (undefined8 *)param_3[6];
    if (puVar4 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1b0 = 0x8770cde;
      (*(code *)param_3[7])(0,param_3,0);
      puVar4 = (undefined8 *)param_3[6];
      goto joined_r0x08770df3;
    }
  }
  unaff_R14 = (undefined8 *******)puVar4[0xd];
  uStack_1b0 = 0x8770cf7;
  bVar24 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar29 = plStack_f8;
  if ((bVar24 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0x8770dc4;
    unaff_RBX = uVar14;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R15 = param_2;
SUB_08775210:
    plVar29 = plStack_f8;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 ********)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x59f37a56) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x877526f;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x8775291;
      puVar13 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0x59f37a56,puVar4);
    }
    lVar8 = *plVar29;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x87752a1;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar24 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar24 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x87752be;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar24;
    if ((uVar14 >> 0x20 & 1) == 0) {
      uVar10 = param_3[5];
      uVar22 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x87752fe;
      cVar2 = func_0x08775c40(param_2,uVar10,puVar13,param_4,plVar29,7);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x877532c;
      cVar2 = func_0x08775e10(param_2,uVar10,puVar13,param_4,plVar29,7);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x877535a;
      cVar2 = func_0x08775ff0(param_2,uVar10,puVar13,param_4,plVar29,7);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8775388;
      cVar2 = func_0x087761d0(param_2,uVar10,puVar13,param_4,plVar29,7);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x87753b6;
      cVar2 = func_0x087763b0(param_2,uVar10,puVar13,param_4,plVar29,7);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x87753e4;
      cVar2 = func_0x08776590(param_2,uVar10,puVar13,param_4,plVar29,7);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar14 = 7;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar22;
    }
    else {
      if (6 < (uint)uVar14) {
        lVar8 = *plVar29;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x877559f;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x87755c3;
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
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x877544f;
      cVar2 = func_0x08775c40(param_2,uVar10,puVar13,param_4,plVar29,uVar14 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8775480;
      cVar2 = func_0x08775e10(param_2,uVar10,puVar13,param_4,plVar29,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x87754ad;
      cVar2 = func_0x08775ff0(param_2,uVar10,puVar13,param_4,plVar29,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x87754da;
      cVar2 = func_0x087761d0(param_2,uVar10,puVar13,param_4,plVar29,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8775507;
      cVar2 = func_0x087763b0(param_2,uVar10,puVar13,param_4,plVar29,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8775534;
      cVar2 = func_0x08776590(param_2,uVar10,puVar13,param_4,plVar29,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x8775561;
    func_0x08776770(param_2,uVar10,puVar13,param_4,plVar29,uVar14);
    return;
  }
  if (bVar24 != 1) {
    uStack_1a8 = (undefined8 *)0x120000012f2525;
    uStack_1b0 = 0x8770e39;
    func_0x0ed5ffe0(*plStack_f8,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0x8770e5c;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0x8770d31;
  plStack_a0 = param_2;
  func_0x0ed6d600(&lStack_68,*plStack_f8);
  uStack_48 = param_3[5];
  lStack_70 = *plVar29;
  ppppppuStack_78 = (undefined8 ******)((long)unaff_R14 + 9);
  bVar30 = (*(byte *)(unaff_R14 + 1) & 1) == 0;
  ppppppuVar18 = unaff_R14[3];
  if (bVar30) {
    ppppppuVar18 = ppppppuStack_78;
  }
  ppppppuVar26 = (undefined8 ******)(ulong)(*(byte *)(unaff_R14 + 1) >> 1);
  if (!bVar30) {
    ppppppuVar26 = unaff_R14[2];
  }
  uStack_100 = param_4;
  pppppppuStack_f0 = unaff_R14;
  if (ppppppuVar18 == (undefined8 ******)0x0) {
    puStack_158 = (undefined *)((ulong)((uint)ppppppuVar26 & 0x7f) << 0x30);
  }
  else if (ppppppuVar26 < (undefined8 ******)0x80) {
    puStack_158 = (undefined *)
                  ((long)ppppppuVar26 << 0x30 | (ulong)ppppppuVar18 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = (long)ppppppuVar26 + 9;
    uStack_1b0 = 0x8770e9c;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar4 == (undefined8 *)0x0 && lVar8 != 0) {
      uStack_1b0 = 0x8772bb9;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar4 = ppppppuVar26;
    uStack_1b0 = 0x8770ec6;
    func_0x0eee2f00(puVar4 + 1,ppppppuVar18,ppppppuVar26);
    *(undefined1 *)((long)puVar4 + (long)(ppppppuVar26 + 1)) = 0;
    puStack_158 = (undefined *)((ulong)(puVar4 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  lVar8 = lStack_70;
  uStack_1b0 = 0x8770f02;
  puVar5 = (uint *)func_0x0ed6d180(lStack_70,&puStack_158,0);
  plVar29 = plStack_a0;
  if (((ulong)puStack_158 & 0x80000000000000) != 0) {
    uStack_1b0 = 0x8770f39;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_158 & 0xff00ffffffffffff) - 8)
    ;
  }
  ppppppuVar18 = ppppppuStack_78;
  puStack_158 = (undefined *)0x0;
  bVar30 = (*(byte *)(pppppppuStack_f0 + 1) & 1) == 0;
  ppppppuVar26 = pppppppuStack_f0[3];
  if (bVar30) {
    ppppppuVar26 = ppppppuStack_78;
  }
  ppppppuVar21 = (undefined8 ******)(ulong)(*(byte *)(pppppppuStack_f0 + 1) >> 1);
  if (!bVar30) {
    ppppppuVar21 = pppppppuStack_f0[2];
  }
  uStack_1b0 = 0x8770f75;
  cVar2 = (**(code **)(*plVar29 + 0xb8))(plVar29,ppppppuVar26,ppppppuVar21);
  if (cVar2 == '\0') {
    uStack_1b0 = 0x87710d3;
    _auStack_148 = (*(code *)*pppppppuStack_f0)(uStack_48);
    uStack_1b0 = 0x87710f1;
    func_0x0ed8bc80(&uStack_1a8,auStack_148,*(undefined1 *)(lVar8 + 0x2aa));
    uVar14 = (ulong)uStack_1a8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      uVar14 = uStack_1a0;
      pcVar16 = pcStack_198;
    }
    pppppppuStack_e8 = (undefined8 *******)0x0;
    if (pcVar16 == (code *)0x0) {
      pppppppuStack_e8 = (undefined8 *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
    }
    else {
      lVar8 = uVar14 + 9;
      uStack_1b0 = 0x8771140;
      puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar6 == (ulong *)0x0) {
        uStack_1b0 = 0x8772bcb;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar6 = uVar14;
      uStack_1b0 = 0x8771170;
      func_0x0eee2f00(puVar6 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar6 + uVar14 + 8) = 0;
      pppppppuStack_e8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      lVar8 = lStack_70;
    }
    plVar29 = plStack_a0;
    uStack_1b0 = 0x8771309;
    func_0x0ed5ffe0(lVar8,8,&pppppppuStack_e8);
    if (((ulong)pppppppuStack_e8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0x8771342;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_e8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_e8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0x8771366;
      func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    pcStack_88 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0x8770f93;
    (**(code **)(*plVar29 + 0x80))(auStack_148,plVar29,0x40);
    bStack_168 = bStack_108;
    if (bStack_108 == 1) {
      pcStack_198 = pcStack_138;
      uStack_1a8 = (undefined8 *)auStack_148;
      uStack_1a0 = (ulong)plStack_140;
LAB_08771216:
      uVar14 = (ulong)((byte)uStack_1a8 >> 1);
      pcVar16 = (code *)((long)&uStack_1a8 + 1);
      if (((ulong)uStack_1a8 & 1) != 0) {
        uVar14 = uStack_1a0;
        pcVar16 = pcStack_198;
      }
      if (uVar14 != 0) {
        uStack_1b0 = 0x8771241;
        plVar7 = (long *)func_0x0eee3290();
        pcVar17 = pcVar16;
        for (uVar22 = uVar14 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
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
      if (((byte)uStack_1a8 & 1) == 0) {
        pcStack_88 = pcStack_198;
        uStack_98 = uStack_1a8;
        uStack_90 = uStack_1a0;
      }
      else {
        uStack_1b0 = 0x8771399;
        func_0x0412e5e0(&uStack_98,pcStack_198,uStack_1a0);
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
      uStack_1b0 = 0x8771209;
      func_0x048e6d60(auStack_148);
      if ((bStack_168 & 1) != 0) goto LAB_08771216;
      pppppppuStack_e8 = (undefined8 *******)pppppppuStack_f0[3];
      ppppppuStack_e0 = pppppppuStack_f0[2];
      if ((*(byte *)(pppppppuStack_f0 + 1) & 1) == 0) {
        pppppppuStack_e8 = (undefined8 *******)ppppppuVar18;
        ppppppuStack_e0 = (undefined8 ******)(ulong)(*(byte *)(pppppppuStack_f0 + 1) >> 1);
      }
      uStack_1b0 = 0x8771014;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_e8);
      plVar29 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar29 = plStack_140;
        pcVar16 = pcStack_138;
      }
      pppppppuStack_e8 = (undefined8 *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_e8 = (undefined8 *******)((ulong)((uint)plVar29 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar29 + 9;
        uStack_1b0 = 0x8771064;
        puVar6 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar6 == (ulong *)0x0) {
          uStack_1b0 = 0x8772bdd;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar6 = (ulong)plVar29;
        uStack_1b0 = 0x8771094;
        func_0x0eee2f00(puVar6 + 1,pcVar16,plVar29);
        *(undefined1 *)((long)puVar6 + (long)plVar29 + 8U) = 0;
        pppppppuStack_e8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        lVar8 = lStack_70;
      }
      plVar29 = plStack_a0;
      uStack_1b0 = 0x87713ce;
      func_0x0ed5ffe0(lVar8,8,&pppppppuStack_e8);
      if (((ulong)pppppppuStack_e8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0x8771407;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_e8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_e8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1b0 = 0x877142d;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      pcStack_88 = (code *)0x0;
    }
    if (bStack_168 == 1) {
      if (((ulong)uStack_1a8 & 1) != 0) {
        uStack_1b0 = 0x8771463;
        func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
      uStack_1b0 = 0x877146d;
      func_0x048e6d60(&uStack_1a8);
    }
  }
  uStack_1b0 = 0x8771479;
  (**(code **)(*plVar29 + 0xd0))(plVar29);
  lVar8 = *(long *)(puVar5 + 2);
  uVar25 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar25;
  if (puVar5[0x48] == 0) {
    uVar15 = puVar5[4];
LAB_087714c0:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1b0 = 0x87714e9;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_1a8,lVar1 + -0x18);
      uVar15 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar25)
          && (uVar15 = puVar5[4], uVar25 == uVar15 - 1)) goto LAB_087714c0;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0x8771529;
    auStack_40 = (*(code *)*pppppppuStack_f0)();
    uVar10 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    uVar14 = (ulong)uStack_98 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_98 + 1);
    if (((ulong)uStack_98 & 1) != 0) {
      uVar14 = uStack_90;
      pcVar16 = pcStack_88;
    }
    if (uVar14 == 0) {
      uVar25 = 0x811c9dc5;
    }
    else {
      uVar22 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar25 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar25 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar25 = ((int)(char)pcVar16[uVar19 + 3] ^
                   ((int)(char)pcVar16[uVar19 + 2] ^
                   ((int)(char)pcVar16[uVar19 + 1] ^
                   ((int)(char)pcVar16[uVar19] ^ uVar25) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar22 != 0) {
        uVar14 = 0;
        do {
          uVar25 = ((int)(char)pcVar16[uVar14 + uVar19] ^ uVar25) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar22 != uVar14);
      }
    }
    if (lVar8 == 0) {
      uStack_1b0 = 0x8771621;
      lVar8 = func_0x048aead0(uVar10);
    }
    uStack_1b0 = 0x8771633;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar10,lVar8,uVar25,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1a8 = (undefined8 *)0x0;
      uStack_1a0 = 0;
      uStack_1b0 = 0x8771661;
      func_0x048b0d20(&uStack_1a8);
      puStack_58 = uStack_1a8;
      uStack_50 = uStack_1a0;
      if (uStack_1a8 == (undefined8 *)0x0) {
        lVar8 = *plStack_f8;
        uStack_1b0 = 0x8771cd6;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1b0 = 0x8771cea;
        uVar10 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_98 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_98 + 1);
        if (((ulong)uStack_98 & 1) != 0) {
          uVar14 = uStack_90;
          pcVar16 = pcStack_88;
        }
        uStack_1b0 = 0x8771d16;
        uVar10 = func_0x0412f8c0(uVar10,pcVar16,uVar14);
        uStack_1b0 = 0x8771d2a;
        pbVar11 = (byte *)func_0x0412f8c0(uVar10,&UNK_0125506d,1);
        bVar30 = (*pbVar11 & 1) != 0;
        pbVar27 = pbVar11 + 1;
        if (bVar30) {
          pbVar27 = *(byte **)(pbVar11 + 0x10);
        }
        uVar14 = (ulong)(*pbVar11 >> 1);
        if (bVar30) {
          uVar14 = *(ulong *)(pbVar11 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1b0 = 0x8771d5c;
        func_0x0ee387f0(auStack_148,pbVar27,uVar14,1);
        uStack_1b0 = 0x8771d6e;
        func_0x0ed5ffe0(lVar8,8,auStack_148);
        uStack_1b0 = 0x8771d78;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0x8771d94;
          func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_08772b30;
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
    uStack_1b0 = 0x8771696;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0x87716b1;
    func_0x05d9a920(&pppppppuStack_e8,&puStack_58,&uStack_1a8);
    pppppppuVar23 = pppppppuStack_f0;
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x87716c8;
      (*pcStack_190)(&uStack_1a8);
    }
    bVar30 = (*(byte *)(pppppppuVar23 + 1) & 1) != 0;
    if (bVar30) {
      ppppppuStack_78 = pppppppuVar23[3];
    }
    ppppppuVar18 = (undefined8 ******)(ulong)(*(byte *)(pppppppuVar23 + 1) >> 1);
    if (bVar30) {
      ppppppuVar18 = pppppppuVar23[2];
    }
    if (ppppppuVar18 == (undefined8 ******)0x0) {
      uVar25 = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)ppppppuVar18 & 3);
      if (ppppppuVar18 < (undefined8 ******)0x4) {
        uVar25 = 0x811c9dc5;
        uVar22 = 0;
      }
      else {
        uVar25 = 0x811c9dc5;
        uVar22 = 0;
        do {
          uVar25 = ((int)*(char *)((long)ppppppuStack_78 + uVar22 + 3) ^
                   ((int)*(char *)((long)ppppppuStack_78 + uVar22 + 2) ^
                   ((int)*(char *)((long)ppppppuStack_78 + uVar22 + 1) ^
                   ((int)*(char *)((long)ppppppuStack_78 + uVar22) ^ uVar25) * 0x1000193) *
                   0x1000193) * 0x1000193) * 0x1000193;
          uVar22 = uVar22 + 4;
        } while (((ulong)ppppppuVar18 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar14 != 0) {
        uVar19 = 0;
        do {
          uVar25 = ((int)*(char *)((long)ppppppuStack_78 + uVar19 + uVar22) ^ uVar25) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar14 != uVar19);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x59f37a56) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1b0 = 0x87717e1;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      uStack_1b0 = 0x8771803;
      puVar13 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0x59f37a56,puVar4);
    }
    plVar7 = (long *)param_3[5];
    pppppppuStack_f0 = &pppppppuStack_e8;
    if (DAT_0f5dc350 == '\0') {
      uStack_1b0 = 0x8772bee;
      iVar3 = func_0x04108328(&DAT_0f5dc350);
      if (iVar3 != 0) {
        uStack_1b0 = 0x8772bfb;
        func_0x08766cd0();
        uStack_1b0 = 0x8772c15;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc2d0,0xf53dab8);
        uStack_1b0 = 0x8772c21;
        func_0x0410844d(&DAT_0f5dc350);
      }
    }
    plVar20 = (long *)(*plVar7 +
                      (ulong)((int)((ulong)(plVar7[1] - *plVar7) >> 3) - 1U &
                             *(uint *)(_DAT_0f5dc2d0 + 4)) * 8);
    do {
      lVar8 = *plVar20;
      if (lVar8 == -1) {
        plVar12 = (long *)plVar7[4];
        plVar20 = plVar12;
        goto LAB_08771874;
      }
      plVar20 = (long *)(plVar7[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar7[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dc2d0 + 4));
    plVar12 = (long *)plVar7[4];
LAB_08771874:
    if (plVar20 == plVar12) {
      puVar28 = &DAT_0f5dc2d0;
    }
    else {
      puVar28 = (undefined *)plVar20[2];
    }
    uStack_1b0 = 0x8771896;
    auVar9 = (undefined1  [8])func_0x048b0c90(plVar7,puVar28,uVar25,1);
    plStack_150 = plVar7;
    if (auVar9 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0x87718ad;
      func_0x048b0d20(auStack_148);
      auVar9 = auStack_148;
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
    uStack_1b0 = 0x87718e8;
    puStack_158 = (undefined *)auVar9;
    func_0x05d84ba0(auStack_148);
    uStack_1b0 = 0x87718fa;
    func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
    if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
        bVar30 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        pppppppuVar23 = pppppppuStack_e8;
        if (cStack_c4 == '\x02') {
          pppppppuVar23 = &pppppppuStack_e8;
        }
        uStack_1b0 = 0x87722b0;
        lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar23);
        bVar30 = lVar8 != 0;
      }
    }
    else {
      bVar30 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0x8771938;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1b0 = 0x8771949;
      (*pcStack_130)(auStack_148);
    }
    if (bVar30) {
      lStack_180 = param_3[5];
      *(undefined4 *)(puVar13 + 1) = 0;
      pcStack_198 = (code *)&UNK_08766f80;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x3d2874ec8);
      uStack_178 = 0;
      puStack_170 = &UNK_08766ea0;
      lStack_128 = plStack_f8[4];
      auStack_148 = (undefined1  [8])*plStack_f8;
      plStack_140 = (long *)plStack_f8[1];
      pcStack_138 = (code *)plStack_f8[2];
      pcStack_130 = (code *)plStack_f8[3];
      plVar7 = (long *)plStack_f8[2];
      if (plVar7 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
        uStack_1a8 = puVar13;
      }
      else {
        uStack_1b0 = 0x87719d8;
        uStack_1a8 = puVar13;
        pcStack_138 = (code *)(**(code **)(*plVar7 + 0x30))(plVar7,0);
      }
      puStack_158 = &UNK_0f12a118;
      uStack_1b0 = 0x8771ac2;
      func_0x0ed75bc0(&puStack_158,plVar29,&uStack_1a8,uStack_100,auStack_148);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x8771ad5;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar7 = (long *)param_3[5];
      if (DAT_0f5dc408 == '\0') {
        uStack_1b0 = 0x8772c32;
        iVar3 = func_0x04108328(&DAT_0f5dc408);
        if (iVar3 != 0) {
          uStack_1b0 = 0x8772c3f;
          func_0x08767c80();
          uStack_1b0 = 0x8772c59;
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc388,0xf53dab8);
          uStack_1b0 = 0x8772c65;
          func_0x0410844d(&DAT_0f5dc408);
        }
      }
      plVar20 = (long *)(*plVar7 +
                        (ulong)((int)((ulong)(plVar7[1] - *plVar7) >> 3) - 1U &
                               *(uint *)(_DAT_0f5dc388 + 4)) * 8);
      do {
        lVar8 = *plVar20;
        if (lVar8 == -1) {
          plVar12 = (long *)plVar7[4];
          plVar20 = plVar12;
          goto LAB_08771a44;
        }
        plVar20 = (long *)(plVar7[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar7[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dc388 + 4));
      plVar12 = (long *)plVar7[4];
LAB_08771a44:
      if (plVar20 == plVar12) {
        puVar28 = &DAT_0f5dc388;
      }
      else {
        puVar28 = (undefined *)plVar20[2];
      }
      uStack_1b0 = 0x8771af1;
      auVar9 = (undefined1  [8])func_0x048b0c90(plVar7,puVar28,uVar25,1);
      if (auVar9 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0x8771b08;
        func_0x048b0d20(auStack_148);
        auVar9 = auStack_148;
        plVar7 = plStack_140;
      }
      uStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0x8771b43;
      puStack_158 = (undefined *)auVar9;
      plStack_150 = plVar7;
      func_0x05d84ba0(auStack_148);
      uStack_1b0 = 0x8771b55;
      func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
      if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
          bVar30 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          pppppppuVar23 = pppppppuStack_e8;
          if (cStack_c4 == '\x02') {
            pppppppuVar23 = &pppppppuStack_e8;
          }
          uStack_1b0 = 0x877253d;
          lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar23);
          bVar30 = lVar8 != 0;
        }
      }
      else {
        bVar30 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0x8771b93;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1b0 = 0x8771ba4;
        (*pcStack_130)(auStack_148);
      }
      if (bVar30) {
        lStack_180 = param_3[5];
        *(undefined4 *)puVar13 = 0;
        *(undefined4 *)(puVar13 + 1) = 1;
        pcStack_198 = (code *)&UNK_08767f40;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x338b275b2);
        uStack_178 = 0;
        puStack_170 = &UNK_08767e60;
        lStack_128 = plStack_f8[4];
        auStack_148 = (undefined1  [8])*plStack_f8;
        plStack_140 = (long *)plStack_f8[1];
        pcStack_138 = (code *)plStack_f8[2];
        pcStack_130 = (code *)plStack_f8[3];
        plVar7 = (long *)plStack_f8[2];
        if (plVar7 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
          uStack_1a8 = puVar13;
        }
        else {
          uStack_1b0 = 0x8771c3d;
          uStack_1a8 = puVar13;
          pcStack_138 = (code *)(**(code **)(*plVar7 + 0x30))(plVar7,1);
        }
        puStack_158 = &UNK_0f12a198;
        uStack_1b0 = 0x8771e2b;
        func_0x0ed75bc0(&puStack_158,plVar29,&uStack_1a8,uStack_100,auStack_148);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x8771e3e;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else {
        plVar7 = (long *)param_3[5];
        if (DAT_0f5dc4c0 == '\0') {
          uStack_1b0 = 0x8772c76;
          iVar3 = func_0x04108328(&DAT_0f5dc4c0);
          if (iVar3 != 0) {
            uStack_1b0 = 0x8772c83;
            func_0x08768fa0();
            uStack_1b0 = 0x8772c9d;
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc440,0xf53dab8);
            uStack_1b0 = 0x8772ca9;
            func_0x0410844d(&DAT_0f5dc4c0);
          }
        }
        plVar20 = (long *)(*plVar7 +
                          (ulong)((int)((ulong)(plVar7[1] - *plVar7) >> 3) - 1U &
                                 *(uint *)(_DAT_0f5dc440 + 4)) * 8);
        do {
          lVar8 = *plVar20;
          if (lVar8 == -1) {
            plVar12 = (long *)plVar7[4];
            plVar20 = plVar12;
            goto LAB_08771dad;
          }
          plVar20 = (long *)(plVar7[3] + lVar8 * 0x18);
        } while (*(uint *)(plVar7[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dc440 + 4));
        plVar12 = (long *)plVar7[4];
LAB_08771dad:
        if (plVar20 == plVar12) {
          puVar28 = &DAT_0f5dc440;
        }
        else {
          puVar28 = (undefined *)plVar20[2];
        }
        uStack_1b0 = 0x8771e5a;
        auVar9 = (undefined1  [8])func_0x048b0c90(plVar7,puVar28,uVar25,1);
        if (auVar9 == (undefined1  [8])0x0) {
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1b0 = 0x8771e71;
          func_0x048b0d20(auStack_148);
          auVar9 = auStack_148;
          plVar7 = plStack_140;
        }
        uStack_118 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_128 = 0;
        lStack_120 = 0;
        pcStack_138 = (code *)0x0;
        pcStack_130 = (code *)0x0;
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0x8771eac;
        puStack_158 = (undefined *)auVar9;
        plStack_150 = plVar7;
        func_0x05d84ba0(auStack_148);
        uStack_1b0 = 0x8771ebe;
        func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
        if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))) {
          if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
            bVar30 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
          }
          else {
            pppppppuVar23 = pppppppuStack_e8;
            if (cStack_c4 == '\x02') {
              pppppppuVar23 = &pppppppuStack_e8;
            }
            uStack_1b0 = 0x87727c3;
            lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar23);
            bVar30 = lVar8 != 0;
          }
        }
        else {
          bVar30 = false;
        }
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0x8771efc;
          (*pcStack_190)(&uStack_1a8);
        }
        if (pcStack_130 != (code *)0x0) {
          uStack_1b0 = 0x8771f0d;
          (*pcStack_130)(auStack_148);
        }
        if (bVar30) {
          lStack_180 = param_3[5];
          *(undefined4 *)puVar13 = 0;
          *(undefined4 *)(puVar13 + 1) = 2;
          pcStack_198 = (code *)&UNK_08769260;
          pcStack_190 = (code *)0x0;
          uStack_188 = CONCAT35(uStack_188._5_3_,0x368379ad6);
          uStack_178 = 0;
          puStack_170 = &UNK_08769180;
          lStack_128 = plStack_f8[4];
          auStack_148 = (undefined1  [8])*plStack_f8;
          plStack_140 = (long *)plStack_f8[1];
          pcStack_138 = (code *)plStack_f8[2];
          pcStack_130 = (code *)plStack_f8[3];
          plVar7 = (long *)plStack_f8[2];
          if (plVar7 == (long *)0x0) {
            pcStack_138 = (code *)0x0;
            uStack_1a8 = puVar13;
          }
          else {
            uStack_1b0 = 0x8771fa6;
            uStack_1a8 = puVar13;
            pcStack_138 = (code *)(**(code **)(*plVar7 + 0x30))(plVar7,2);
          }
          puStack_158 = &UNK_0f12a218;
          uStack_1b0 = 0x877209a;
          func_0x0ed75bc0(&puStack_158,plVar29,&uStack_1a8,uStack_100,auStack_148);
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x87720ad;
            (*pcStack_190)(&uStack_1a8);
          }
        }
        else {
          plVar7 = (long *)param_3[5];
          if (DAT_0f5dc578 == '\0') {
            uStack_1b0 = 0x8772cba;
            iVar3 = func_0x04108328(&DAT_0f5dc578);
            if (iVar3 != 0) {
              uStack_1b0 = 0x8772cc7;
              func_0x0876a2c0();
              uStack_1b0 = 0x8772ce1;
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc4f8,0xf53dab8);
              uStack_1b0 = 0x8772ced;
              func_0x0410844d(&DAT_0f5dc578);
            }
          }
          plVar20 = (long *)(*plVar7 +
                            (ulong)((int)((ulong)(plVar7[1] - *plVar7) >> 3) - 1U &
                                   *(uint *)(_DAT_0f5dc4f8 + 4)) * 8);
          do {
            lVar8 = *plVar20;
            if (lVar8 == -1) {
              plVar12 = (long *)plVar7[4];
              plVar20 = plVar12;
              goto LAB_0877201c;
            }
            plVar20 = (long *)(plVar7[3] + lVar8 * 0x18);
          } while (*(uint *)(plVar7[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dc4f8 + 4));
          plVar12 = (long *)plVar7[4];
LAB_0877201c:
          if (plVar20 == plVar12) {
            puVar28 = &DAT_0f5dc4f8;
          }
          else {
            puVar28 = (undefined *)plVar20[2];
          }
          uStack_1b0 = 0x87720c9;
          auVar9 = (undefined1  [8])func_0x048b0c90(plVar7,puVar28,uVar25,1);
          if (auVar9 == (undefined1  [8])0x0) {
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1b0 = 0x87720e0;
            func_0x048b0d20(auStack_148);
            auVar9 = auStack_148;
            plVar7 = plStack_140;
          }
          uStack_118 = 0;
          puStack_110 = (undefined *)0x0;
          lStack_128 = 0;
          lStack_120 = 0;
          pcStack_138 = (code *)0x0;
          pcStack_130 = (code *)0x0;
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1b0 = 0x877211b;
          puStack_158 = (undefined *)auVar9;
          plStack_150 = plVar7;
          func_0x05d84ba0(auStack_148);
          uStack_1b0 = 0x877212d;
          func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
          if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0)))
          {
            if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
              bVar30 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
            }
            else {
              pppppppuVar23 = pppppppuStack_e8;
              if (cStack_c4 == '\x02') {
                pppppppuVar23 = &pppppppuStack_e8;
              }
              uStack_1b0 = 0x8772a6e;
              lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar23);
              bVar30 = lVar8 != 0;
            }
          }
          else {
            bVar30 = false;
          }
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0x877216b;
            (*pcStack_190)(&uStack_1a8);
          }
          if (pcStack_130 != (code *)0x0) {
            uStack_1b0 = 0x877217c;
            (*pcStack_130)(auStack_148);
          }
          if (bVar30) {
            lStack_180 = param_3[5];
            *puVar13 = 0;
            *(undefined4 *)(puVar13 + 1) = 3;
            pcStack_198 = (code *)&UNK_0876a570;
            pcStack_190 = (code *)0x0;
            uStack_188 = CONCAT35(uStack_188._5_3_,0x313525fc6);
            uStack_178 = 0;
            puStack_170 = &UNK_0876a490;
            lStack_128 = plStack_f8[4];
            auStack_148 = (undefined1  [8])*plStack_f8;
            plStack_140 = (long *)plStack_f8[1];
            pcStack_138 = (code *)plStack_f8[2];
            pcStack_130 = (code *)plStack_f8[3];
            plVar7 = (long *)plStack_f8[2];
            if (plVar7 == (long *)0x0) {
              pcStack_138 = (code *)0x0;
              uStack_1a8 = puVar13;
            }
            else {
              uStack_1b0 = 0x8772216;
              uStack_1a8 = puVar13;
              pcStack_138 = (code *)(**(code **)(*plVar7 + 0x30))(plVar7,3);
            }
            puStack_158 = &UNK_0f12a298;
            uStack_1b0 = 0x8772328;
            func_0x0ed75bc0(&puStack_158,plVar29,&uStack_1a8,uStack_100,auStack_148);
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0x877233b;
              (*pcStack_190)(&uStack_1a8);
            }
          }
          else {
            plVar7 = (long *)param_3[5];
            if (DAT_0f5dc630 == '\0') {
              uStack_1b0 = 0x8772cfe;
              iVar3 = func_0x04108328(&DAT_0f5dc630);
              if (iVar3 != 0) {
                uStack_1b0 = 0x8772d0b;
                func_0x0876bee0();
                uStack_1b0 = 0x8772d25;
                func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc5b0,0xf53dab8);
                uStack_1b0 = 0x8772d31;
                func_0x0410844d(&DAT_0f5dc630);
              }
            }
            plVar20 = (long *)(*plVar7 +
                              (ulong)((int)((ulong)(plVar7[1] - *plVar7) >> 3) - 1U &
                                     *(uint *)(_DAT_0f5dc5b0 + 4)) * 8);
            do {
              lVar8 = *plVar20;
              if (lVar8 == -1) {
                plVar12 = (long *)plVar7[4];
                plVar20 = plVar12;
                goto LAB_0877228c;
              }
              plVar20 = (long *)(plVar7[3] + lVar8 * 0x18);
            } while (*(uint *)(plVar7[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dc5b0 + 4));
            plVar12 = (long *)plVar7[4];
LAB_0877228c:
            if (plVar20 == plVar12) {
              puVar28 = &DAT_0f5dc5b0;
            }
            else {
              puVar28 = (undefined *)plVar20[2];
            }
            uStack_1b0 = 0x8772357;
            auVar9 = (undefined1  [8])func_0x048b0c90(plVar7,puVar28,uVar25,1);
            if (auVar9 == (undefined1  [8])0x0) {
              auStack_148 = (undefined1  [8])0x0;
              plStack_140 = (long *)0x0;
              uStack_1b0 = 0x877236e;
              func_0x048b0d20(auStack_148);
              auVar9 = auStack_148;
              plVar7 = plStack_140;
            }
            uStack_118 = 0;
            puStack_110 = (undefined *)0x0;
            lStack_128 = 0;
            lStack_120 = 0;
            pcStack_138 = (code *)0x0;
            pcStack_130 = (code *)0x0;
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1b0 = 0x87723a9;
            puStack_158 = (undefined *)auVar9;
            plStack_150 = plVar7;
            func_0x05d84ba0(auStack_148);
            uStack_1b0 = 0x87723bb;
            func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
            if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))
               ) {
              if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
                bVar30 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
              }
              else {
                pppppppuVar23 = pppppppuStack_e8;
                if (cStack_c4 == '\x02') {
                  pppppppuVar23 = &pppppppuStack_e8;
                }
                uStack_1b0 = 0x8772b7a;
                lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar23);
                bVar30 = lVar8 != 0;
              }
            }
            else {
              bVar30 = false;
            }
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0x87723f9;
              (*pcStack_190)(&uStack_1a8);
            }
            if (pcStack_130 != (code *)0x0) {
              uStack_1b0 = 0x877240a;
              (*pcStack_130)(auStack_148);
            }
            if (bVar30) {
              lStack_180 = param_3[5];
              *(undefined4 *)puVar13 = 0;
              *(undefined4 *)(puVar13 + 1) = 4;
              pcStack_198 = (code *)&UNK_0876c1a0;
              pcStack_190 = (code *)0x0;
              uStack_188 = CONCAT35(uStack_188._5_3_,0x393455771);
              uStack_178 = 0;
              puStack_170 = &UNK_0876c0c0;
              lStack_128 = plStack_f8[4];
              auStack_148 = (undefined1  [8])*plStack_f8;
              plStack_140 = (long *)plStack_f8[1];
              pcStack_138 = (code *)plStack_f8[2];
              pcStack_130 = (code *)plStack_f8[3];
              plVar7 = (long *)plStack_f8[2];
              if (plVar7 == (long *)0x0) {
                pcStack_138 = (code *)0x0;
                uStack_1a8 = puVar13;
              }
              else {
                uStack_1b0 = 0x87724a3;
                uStack_1a8 = puVar13;
                pcStack_138 = (code *)(**(code **)(*plVar7 + 0x30))(plVar7,4);
              }
              puStack_158 = &UNK_0f12a318;
              uStack_1b0 = 0x87725b5;
              func_0x0ed75bc0(&puStack_158,plVar29,&uStack_1a8,uStack_100,auStack_148);
              if (pcStack_190 != (code *)0x0) {
                uStack_1b0 = 0x87725c8;
                (*pcStack_190)(&uStack_1a8);
              }
            }
            else {
              plVar7 = (long *)param_3[5];
              if (DAT_0f5dc6e8 == '\0') {
                uStack_1b0 = 0x8772d42;
                iVar3 = func_0x04108328(&DAT_0f5dc6e8);
                if (iVar3 != 0) {
                  uStack_1b0 = 0x8772d4f;
                  func_0x0876d200();
                  uStack_1b0 = 0x8772d69;
                  func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc668,0xf53dab8);
                  uStack_1b0 = 0x8772d75;
                  func_0x0410844d(&DAT_0f5dc6e8);
                }
              }
              plVar20 = (long *)(*plVar7 +
                                (ulong)((int)((ulong)(plVar7[1] - *plVar7) >> 3) - 1U &
                                       *(uint *)(_DAT_0f5dc668 + 4)) * 8);
              do {
                lVar8 = *plVar20;
                if (lVar8 == -1) {
                  plVar12 = (long *)plVar7[4];
                  plVar20 = plVar12;
                  goto LAB_08772519;
                }
                plVar20 = (long *)(plVar7[3] + lVar8 * 0x18);
              } while (*(uint *)(plVar7[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dc668 + 4));
              plVar12 = (long *)plVar7[4];
LAB_08772519:
              if (plVar20 == plVar12) {
                puVar28 = &DAT_0f5dc668;
              }
              else {
                puVar28 = (undefined *)plVar20[2];
              }
              uStack_1b0 = 0x87725e4;
              auVar9 = (undefined1  [8])func_0x048b0c90(plVar7,puVar28,uVar25,1);
              if (auVar9 == (undefined1  [8])0x0) {
                auStack_148 = (undefined1  [8])0x0;
                plStack_140 = (long *)0x0;
                uStack_1b0 = 0x87725fb;
                func_0x048b0d20(auStack_148);
                auVar9 = auStack_148;
                plVar7 = plStack_140;
              }
              uStack_118 = 0;
              puStack_110 = (undefined *)0x0;
              lStack_128 = 0;
              lStack_120 = 0;
              pcStack_138 = (code *)0x0;
              pcStack_130 = (code *)0x0;
              auStack_148 = (undefined1  [8])0x0;
              plStack_140 = (long *)0x0;
              uStack_1b0 = 0x8772636;
              puStack_158 = (undefined *)auVar9;
              plStack_150 = plVar7;
              func_0x05d84ba0(auStack_148);
              uStack_1b0 = 0x8772648;
              func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
              if ((lStack_180 == lStack_c0) &&
                 ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))) {
                if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
                  bVar30 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
                }
                else {
                  pppppppuVar23 = pppppppuStack_e8;
                  if (cStack_c4 == '\x02') {
                    pppppppuVar23 = &pppppppuStack_e8;
                  }
                  uStack_1b0 = 0x8772b98;
                  lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar23);
                  bVar30 = lVar8 != 0;
                  plVar29 = plStack_a0;
                }
              }
              else {
                bVar30 = false;
              }
              if (pcStack_190 != (code *)0x0) {
                uStack_1b0 = 0x8772686;
                (*pcStack_190)(&uStack_1a8);
              }
              if (pcStack_130 != (code *)0x0) {
                uStack_1b0 = 0x8772697;
                (*pcStack_130)(auStack_148);
              }
              if (bVar30) {
                lStack_180 = param_3[5];
                *(undefined4 *)(puVar13 + 1) = 5;
                pcStack_198 = (code *)&UNK_0876d4b0;
                pcStack_190 = (code *)0x0;
                uStack_188 = CONCAT35(uStack_188._5_3_,0x39e0784e2);
                uStack_178 = 0;
                puStack_170 = &UNK_0876d3d0;
                lStack_128 = plStack_f8[4];
                auStack_148 = (undefined1  [8])*plStack_f8;
                plStack_140 = (long *)plStack_f8[1];
                pcStack_138 = (code *)plStack_f8[2];
                pcStack_130 = (code *)plStack_f8[3];
                plVar7 = (long *)plStack_f8[2];
                if (plVar7 == (long *)0x0) {
                  pcStack_138 = (code *)0x0;
                  uStack_1a8 = puVar13;
                }
                else {
                  uStack_1b0 = 0x8772729;
                  uStack_1a8 = puVar13;
                  pcStack_138 = (code *)(**(code **)(*plVar7 + 0x30))(plVar7,5);
                }
                puStack_158 = &UNK_0f12a398;
                uStack_1b0 = 0x877283b;
                func_0x0ed75bc0(&puStack_158,plVar29,&uStack_1a8,uStack_100,auStack_148);
                if (pcStack_190 != (code *)0x0) {
                  uStack_1b0 = 0x877284e;
                  (*pcStack_190)(&uStack_1a8);
                }
              }
              else {
                plVar7 = (long *)param_3[5];
                if (DAT_0f5dc7a0 == '\0') {
                  uStack_1b0 = 0x8772d86;
                  iVar3 = func_0x04108328(&DAT_0f5dc7a0);
                  if (iVar3 != 0) {
                    uStack_1b0 = 0x8772d93;
                    func_0x0876e1b0();
                    uStack_1b0 = 0x8772dad;
                    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dc720,0xf53dab8);
                    uStack_1b0 = 0x8772db9;
                    func_0x0410844d(&DAT_0f5dc7a0);
                  }
                }
                plVar20 = (long *)(*plVar7 +
                                  (ulong)((int)((ulong)(plVar7[1] - *plVar7) >> 3) - 1U &
                                         *(uint *)(_DAT_0f5dc720 + 4)) * 8);
                do {
                  lVar8 = *plVar20;
                  if (lVar8 == -1) {
                    plVar12 = (long *)plVar7[4];
                    plVar20 = plVar12;
                    goto LAB_0877279f;
                  }
                  plVar20 = (long *)(plVar7[3] + lVar8 * 0x18);
                } while (*(uint *)(plVar7[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dc720 + 4));
                plVar12 = (long *)plVar7[4];
LAB_0877279f:
                if (plVar20 == plVar12) {
                  puVar28 = &DAT_0f5dc720;
                }
                else {
                  puVar28 = (undefined *)plVar20[2];
                }
                uStack_1b0 = 0x877286a;
                auVar9 = (undefined1  [8])func_0x048b0c90(plVar7,puVar28,uVar25,1);
                if (auVar9 == (undefined1  [8])0x0) {
                  auStack_148 = (undefined1  [8])0x0;
                  plStack_140 = (long *)0x0;
                  uStack_1b0 = 0x8772881;
                  func_0x048b0d20(auStack_148);
                  auVar9 = auStack_148;
                  plVar7 = plStack_140;
                }
                uStack_118 = 0;
                puStack_110 = (undefined *)0x0;
                lStack_128 = 0;
                lStack_120 = 0;
                pcStack_138 = (code *)0x0;
                pcStack_130 = (code *)0x0;
                auStack_148 = (undefined1  [8])0x0;
                plStack_140 = (long *)0x0;
                uStack_1b0 = 0x87728bc;
                puStack_158 = (undefined *)auVar9;
                plStack_150 = plVar7;
                func_0x05d84ba0(auStack_148);
                uStack_1b0 = 0x87728ce;
                func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
                if ((lStack_180 == lStack_c0) &&
                   ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))) {
                  if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
                    bVar30 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
                  }
                  else {
                    if (cStack_c4 != '\x02') {
                      pppppppuStack_f0 = pppppppuStack_e8;
                    }
                    uStack_1b0 = 0x8772ac7;
                    lVar8 = (*pcStack_198)(3,&uStack_1a8,pppppppuStack_f0);
                    bVar30 = lVar8 != 0;
                    plVar29 = plStack_a0;
                  }
                }
                else {
                  bVar30 = false;
                }
                if (pcStack_190 != (code *)0x0) {
                  uStack_1b0 = 0x877290b;
                  (*pcStack_190)(&uStack_1a8);
                }
                if (pcStack_130 != (code *)0x0) {
                  uStack_1b0 = 0x877291c;
                  (*pcStack_130)(auStack_148);
                }
                if (bVar30) {
                  lStack_180 = param_3[5];
                  *(undefined4 *)(puVar13 + 1) = 6;
                  pcStack_198 = (code *)&UNK_0876e460;
                  pcStack_190 = (code *)0x0;
                  uStack_188 = CONCAT35(uStack_188._5_3_,0x3daec96e3);
                  uStack_178 = 0;
                  puStack_170 = &UNK_0876e380;
                  lStack_128 = plStack_f8[4];
                  auStack_148 = (undefined1  [8])*plStack_f8;
                  plStack_140 = (long *)plStack_f8[1];
                  pcStack_138 = (code *)plStack_f8[2];
                  pcStack_130 = (code *)plStack_f8[3];
                  plVar7 = (long *)plStack_f8[2];
                  if (plVar7 == (long *)0x0) {
                    pcStack_138 = (code *)0x0;
                    uStack_1a8 = puVar13;
                  }
                  else {
                    uStack_1b0 = 0x87729ad;
                    uStack_1a8 = puVar13;
                    pcStack_138 = (code *)(**(code **)(*plVar7 + 0x30))(plVar7,6);
                  }
                  puStack_158 = &UNK_0f12a418;
                  uStack_1b0 = 0x8772b0a;
                  func_0x0ed75bc0(&puStack_158,plVar29,&uStack_1a8,uStack_100,auStack_148);
                  if (pcStack_190 != (code *)0x0) {
                    uStack_1b0 = 0x8772b19;
                    (*pcStack_190)(&uStack_1a8);
                  }
                }
                else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                        (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
                  uStack_1a8 = (undefined8 *)0x2300000149614c;
                  uStack_1b0 = 0x8772a17;
                  func_0x0ed5ffe0(*plStack_f8,8,&uStack_1a8);
                  if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
                    uStack_1b0 = 0x8772a42;
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
                  }
                  uStack_1a8 = (undefined8 *)0x0;
                }
              }
            }
          }
        }
      }
    }
    if (pcStack_d0 != (code *)0x0) {
      uStack_1b0 = 0x8772b30;
      (*pcStack_d0)(&pppppppuStack_e8);
    }
  }
LAB_08772b30:
  if (((ulong)uStack_98 & 1) != 0) {
    uStack_1b0 = 0x8772b57;
    func_0x0412a280(pcStack_88,(ulong)uStack_98 & 0xfffffffffffffffe);
  }
  return;
}


