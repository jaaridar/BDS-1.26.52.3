/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdfa3dd0 (ELF vaddr 0xdea3dd0)
 * Label: caller-of-callee
 * Body:  [[0dfa3dd0, 0dfa46da] [0dfa46e0, 0dfa5675] [0dfa67e0, 0dfa6a80]]
 * Ghidra: FUN_0dfa3dd0
 */


/* WARNING: Possible PIC construction at 0x0dfa3ffd: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dfa3dd0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  uint *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [8];
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  code *pcVar15;
  code *pcVar16;
  long *plVar17;
  undefined8 *******pppppppuVar18;
  long *unaff_RBX;
  undefined8 ******ppppppuVar19;
  byte bVar20;
  uint uVar21;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  undefined *puVar26;
  ulong uVar27;
  long *unaff_R12;
  long *unaff_R13;
  undefined8 *unaff_R14;
  long *unaff_R15;
  bool bVar28;
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
  uint *puStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
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
  long *plStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  pcVar15 = (code *)param_3[7];
  if (pcVar15 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar28 = false;
    }
    else {
      uStack_1a0 = 0xdfa3e20;
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_0df9cf30;
    }
    param_3[2] = (long)&UNK_0df9d010;
    *(undefined4 *)(param_3 + 4) = 0xcb1b0905;
    param_3[3] = (long)&UNK_0df9d5f0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0xdfa3e70;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (lVar7 == 0) {
      uStack_1a0 = 0xdfa55f4;
      func_0x0eec74c0(0x30,0);
    }
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x28) = 0;
    *param_3 = lVar7;
    pcVar15 = (code *)&UNK_0df9cf30;
    param_3[7] = (long)&UNK_0df9cf30;
    if (bVar28) {
      lVar7 = param_3[6];
    }
    else {
      lVar7 = 0;
    }
    param_3[6] = lVar7;
    plVar17 = param_5;
    if (lVar7 == 0) goto LAB_0dfa3ebe;
LAB_0dfa3ed4:
    bVar20 = *(byte *)(lVar7 + 0x1a);
  }
  else {
    lVar7 = param_3[6];
    plVar17 = unaff_R15;
    if (lVar7 != 0) goto LAB_0dfa3ed4;
LAB_0dfa3ebe:
    plVar17 = (long *)param_3[5];
    uStack_1a0 = 0xdfa3ecc;
    (*pcVar15)(0,param_3,0);
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_0dfa3ed4;
    uStack_1a0 = 0xdfa3f04;
    lVar7 = FUN_048aead0(plVar17);
    bVar20 = *(byte *)(lVar7 + 0x1a);
  }
  if ((bVar20 & 1) == 0) goto SUB_0dfa67e0;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0xdfa4026;
    func_0x048b1dc0(&uStack_198);
    plVar12 = uStack_198;
    plVar17 = plStack_190;
joined_r0x0dfa4031:
    if (plVar12 == (long *)0x0) {
      uStack_1a0 = 0xdfa403f;
      plVar12 = (long *)FUN_048aead0(plVar17);
    }
  }
  else {
    plVar12 = (long *)param_3[6];
    if (plVar12 == (long *)0x0) {
      plVar17 = (long *)param_3[5];
      uStack_1a0 = 0xdfa3f2e;
      (*(code *)param_3[7])(0,param_3,0);
      plVar12 = (long *)param_3[6];
      goto joined_r0x0dfa4031;
    }
  }
  unaff_R14 = (undefined8 *)plVar12[0xd];
  uStack_1a0 = 0xdfa3f48;
  bVar20 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar20 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0xdfa4002;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = plVar17;
SUB_0dfa67e0:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar17 = (long *)*param_3;
    plVar12 = plVar17;
    if (cVar1 == '\x02') {
      plVar12 = param_3;
    }
    if (plVar12 == (long *)0x0 || (int)param_3[4] != -0x34e4f6fb) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        pcVar15 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdfa683f;
        (*pcVar15)(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar17 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar17 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdfa6861;
      plVar12 = (long *)FUN_0488e200(lVar7,lVar24,0xcb1b0905,plVar17);
    }
    lVar7 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdfa6871;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar7);
    bVar20 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar20 | 1;
    pcVar15 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdfa688e;
    uVar13 = (*pcVar15)(param_2);
    *(byte *)((long)param_2 + 9) = bVar20;
    if ((uVar13 >> 0x20 & 1) == 0) {
      lVar7 = param_3[5];
      uVar27 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdfa68c9;
      cVar1 = func_0x0dfa6ab0(param_2,lVar7,plVar12,param_4,param_5,4);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdfa68f6;
      cVar1 = func_0x0dfa6cd0(param_2,lVar7,plVar12,param_4,param_5,4);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdfa6923;
      cVar1 = func_0x0dfa6f00(param_2,lVar7,plVar12,param_4,param_5,4);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar13 = 4;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar27;
    }
    else {
      if ((uVar13 & 0xfffffffc) != 0) {
        lVar7 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdfa698b;
        func_0x0ed5ffe0(lVar7,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar15 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xdfa69b3;
        (*pcVar15)(&DAT_0f5463b0,
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
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdfa69ed;
      cVar1 = func_0x0dfa6ab0(param_2,lVar7,plVar12,param_4,param_5,uVar13 & 0xff);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar13 = uVar13 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdfa6a1a;
      cVar1 = func_0x0dfa6cd0(param_2,lVar7,plVar12,param_4,param_5,uVar13);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdfa6a43;
      cVar1 = func_0x0dfa6f00(param_2,lVar7,plVar12,param_4,param_5,uVar13);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xdfa6a7b;
    func_0x0dfa7130(param_2,lVar7,plVar12,param_4,param_5,uVar13);
    return;
  }
  puStack_70 = unaff_R14;
  if (bVar20 != 1) {
    uStack_198 = (long *)0x120000012f2525;
    uStack_1a0 = 0xdfa406f;
    func_0x0ed5ffe0(*param_5,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0xdfa4092;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0xdfa3f87;
  plStack_150 = param_2;
  uStack_e8 = param_4;
  func_0x0ed6d600(&lStack_68,*param_5);
  lStack_48 = param_3[5];
  lStack_78 = *param_5;
  ppppppuVar19 = (undefined8 ******)((long)puStack_70 + 9);
  bVar28 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar22 = (undefined8 ******)puStack_70[3];
  if (bVar28) {
    ppppppuVar22 = ppppppuVar19;
  }
  uVar13 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar28) {
    uVar13 = puStack_70[2];
  }
  plStack_e0 = param_5;
  if (ppppppuVar22 == (undefined8 ******)0x0) {
    puStack_148 = (undefined *)((ulong)((uint)uVar13 & 0x7f) << 0x30);
  }
  else if (uVar13 < 0x80) {
    puStack_148 = (undefined *)(uVar13 << 0x30 | (ulong)ppppppuVar22 & 0xff00ffffffffffff);
  }
  else {
    lVar7 = uVar13 + 9;
    puStack_f0 = (uint *)CONCAT71(puStack_f0._1_7_,lVar7 == 0);
    uStack_1a0 = 0xdfa40cc;
    puVar3 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
    if (puVar3 == (ulong *)0x0 && (char)puStack_f0 == '\0') {
      uStack_1a0 = 0xdfa5609;
      func_0x0eec74c0(lVar7,8);
    }
    *puVar3 = uVar13;
    uStack_1a0 = 0xdfa40fa;
    memcpy(puVar3 + 1,ppppppuVar22,uVar13);
    *(undefined1 *)((long)puVar3 + uVar13 + 8) = 0;
    puStack_148 = (undefined *)((ulong)(puVar3 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0xdfa4133;
  puVar4 = (uint *)func_0x0ed6d180(lStack_78,&puStack_148,0);
  plVar17 = plStack_150;
  if (((ulong)puStack_148 & 0x80000000000000) != 0) {
    uStack_1a0 = 0xdfa4167;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_148 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar6 = puStack_70;
  puStack_148 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar22 = (undefined8 ******)puStack_70[3];
  if (bVar28) {
    ppppppuVar22 = ppppppuVar19;
  }
  uVar13 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar28) {
    uVar13 = puStack_70[2];
  }
  uStack_1a0 = 0xdfa419d;
  cVar1 = (**(code **)(*plVar17 + 0xb8))(plVar17,ppppppuVar22,uVar13);
  if (cVar1 == '\0') {
    uStack_1a0 = 0xdfa42c6;
    puStack_f0 = puVar4;
    _auStack_138 = (*(code *)*puVar6)(lStack_48);
    uStack_1a0 = 0xdfa42ec;
    func_0x0ed8bc80(&uStack_198,auStack_138,*(undefined1 *)(lStack_78 + 0x2aa));
    plVar17 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_198 + 1);
    if (((ulong)uStack_198 & 1) != 0) {
      plVar17 = plStack_190;
      pcVar15 = pcStack_188;
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (pcVar15 == (code *)0x0) {
      pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)plVar17 & 0x7f) << 0x30);
    }
    else {
      lVar7 = (long)plVar17 + 9;
      uStack_1a0 = 0xdfa433b;
      puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
      if (lVar7 != 0 && puVar6 == (undefined8 *)0x0) {
        uStack_1a0 = 0xdfa561b;
        func_0x0eec74c0(lVar7,8);
      }
      *puVar6 = plVar17;
      uStack_1a0 = 0xdfa436a;
      memcpy(puVar6 + 1,pcVar15,plVar17);
      *(undefined1 *)((long)(puVar6 + 1) + (long)plVar17) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar4 = puStack_f0;
    plVar17 = plStack_150;
    uStack_1a0 = 0xdfa4504;
    func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0xdfa4533;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0xdfa4557;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0xdfa41bc;
    (**(code **)(*plVar17 + 0x80))(auStack_138,plVar17,0x40);
    cStack_158 = cStack_f8;
    if (cStack_f8 == '\0') {
      uStack_198 = (long *)auStack_138;
      plStack_190 = plStack_130;
      pcStack_188 = pcStack_128;
      pcStack_180 = pcStack_120;
      uStack_178 = lStack_118;
      lStack_170 = lStack_110;
      lStack_168 = lStack_108;
      puStack_160 = puStack_100;
      pppppppuStack_b8 = (undefined8 *******)puVar6[3];
      uStack_b0 = puVar6[2];
      if ((*(byte *)(puVar6 + 1) & 1) == 0) {
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar19;
        uStack_b0 = (ulong)(*(byte *)(puVar6 + 1) >> 1);
      }
      uStack_1a0 = 0xdfa441c;
      puStack_f0 = puVar4;
      func_0x0470d9a0(auStack_138,&UNK_01377405,0x15,0xd,&pppppppuStack_b8);
      plVar17 = (long *)((ulong)auStack_138 >> 1 & 0x7f);
      pcVar15 = (code *)(auStack_138 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar17 = plStack_130;
        pcVar15 = pcStack_128;
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (pcVar15 == (code *)0x0) {
        pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)plVar17 & 0x7f) << 0x30);
      }
      else {
        lVar7 = (long)plVar17 + 9;
        uStack_1a0 = 0xdfa446c;
        puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
        if (lVar7 != 0 && puVar6 == (undefined8 *)0x0) {
          uStack_1a0 = 0xdfa562d;
          func_0x0eec74c0(lVar7,8);
        }
        *puVar6 = plVar17;
        uStack_1a0 = 0xdfa449b;
        memcpy(puVar6 + 1,pcVar15,plVar17);
        *(undefined1 *)((long)(puVar6 + 1) + (long)plVar17) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      puVar4 = puStack_f0;
      plVar17 = plStack_150;
      uStack_1a0 = 0xdfa45dd;
      func_0x0ed5ffe0(lStack_78,8,&pppppppuStack_b8);
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0xdfa460c;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_138 & 1) != 0) {
        uStack_1a0 = 0xdfa4632;
        func_0x0412a280(pcStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
      }
      uStack_d8 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_188 = pcStack_128;
      uStack_198 = (long *)auStack_138;
      plStack_190 = plStack_130;
      plVar12 = (long *)(ulong)(byte)(auStack_138[0] >> 1);
      pcVar15 = (code *)((long)&uStack_198 + 1);
      if (((ulong)auStack_138 & 1) != 0) {
        plVar12 = plStack_130;
        pcVar15 = pcStack_128;
      }
      bVar20 = auStack_138[0];
      if (plVar12 != (long *)0x0) {
        uStack_1a0 = 0xdfa420c;
        plVar5 = (long *)__ctype_tolower_loc();
        pcVar16 = pcVar15;
        for (uVar13 = (ulong)plVar12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *(code *)(*plVar5 + (ulong)(byte)*pcVar16 * 4);
          pcVar16 = pcVar16 + 1;
        }
        if ((long *)0x3 < plVar12) {
          do {
            *pcVar16 = *(code *)(*plVar5 + (ulong)(byte)*pcVar16 * 4);
            pcVar16[1] = *(code *)(*plVar5 + (ulong)(byte)pcVar16[1] * 4);
            pcVar16[2] = *(code *)(*plVar5 + (ulong)(byte)pcVar16[2] * 4);
            pcVar16[3] = *(code *)(*plVar5 + (ulong)(byte)pcVar16[3] * 4);
            pcVar16 = pcVar16 + 4;
          } while (pcVar16 != pcVar15 + (long)plVar12);
        }
        bVar20 = (byte)uStack_198;
      }
      if ((bVar20 & 1) == 0) {
        pcStack_c8 = pcStack_188;
        uStack_d8 = uStack_198;
        plStack_d0 = plStack_190;
      }
      else {
        uStack_1a0 = 0xdfa458a;
        func_0x0412e5e0(&uStack_d8,pcStack_188,plStack_190);
      }
    }
    lVar7 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0xdfa466c;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar7 != lStack_168) {
          uStack_1a0 = 0xdfa469c;
          func_0x048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar7;
        uStack_1a0 = 0xdfa46b8;
        func_0x0412a280(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar16 = pcStack_188;
      pcVar15 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar16 != pcVar15; pcVar15 = pcVar15 + -0x50) {
          if ((pcVar15[-8] == (code)0x1) && (((byte)pcVar15[-0x30] & 1) != 0)) {
            uStack_1a0 = 0xdfa4708;
            func_0x0412a280(*(undefined8 *)(pcVar15 + -0x20),
                            *(ulong *)(pcVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar16;
        uStack_1a0 = 0xdfa4721;
        func_0x0412a280(pcStack_188,uStack_178 - (long)pcStack_188);
      }
    }
  }
  uStack_1a0 = 0xdfa4738;
  (**(code **)(*plVar17 + 0xd0))(plVar17);
  lVar7 = *(long *)(puVar4 + 2);
  uVar21 = *(uint *)(lVar7 + 0x1c + (ulong)*puVar4 * 0x20);
  *puVar4 = uVar21;
  if (puVar4[0x48] == 0) {
    uVar14 = puVar4[4];
LAB_0dfa477a:
    lVar24 = lVar7 + (ulong)uVar14 * 0x20;
    uVar13 = (ulong)*(uint *)(lVar7 + -0x10 + (ulong)uVar14 * 0x20);
    if (uVar13 != 0xffffffff) {
      uStack_1a0 = 0xdfa47a3;
      (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_198,lVar24 + -0x18);
      uVar14 = puVar4[4];
    }
    *(undefined4 *)(lVar24 + -0x10) = 0xffffffff;
    puVar4[4] = uVar14 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) != uVar21)
          && (uVar14 = puVar4[4], uVar21 == uVar14 - 1)) goto LAB_0dfa477a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0xdfa47e2;
    auStack_40 = (*(code *)*puStack_70)();
    uVar8 = auStack_40._8_8_;
    lVar7 = auStack_40._0_8_;
    plVar17 = (long *)((ulong)uStack_d8 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      plVar17 = plStack_d0;
      pcVar15 = pcStack_c8;
    }
    if (plVar17 == (long *)0x0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)plVar17 & 3);
      if (plVar17 < (long *)0x4) {
        uVar21 = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar27 = 0;
        do {
          uVar21 = ((int)(char)pcVar15[uVar27 + 3] ^
                   ((int)(char)pcVar15[uVar27 + 2] ^
                   ((int)(char)pcVar15[uVar27 + 1] ^
                   ((int)(char)pcVar15[uVar27] ^ uVar21) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar27 = uVar27 + 4;
        } while (((ulong)plVar17 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uVar21 = ((int)(char)pcVar15[uVar23 + uVar27] ^ uVar21) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    if (lVar7 == 0) {
      uStack_1a0 = 0xdfa48d1;
      lVar7 = FUN_048aead0(uVar8);
    }
    uStack_1a0 = 0xdfa48e3;
    plStack_58 = (long *)func_0x048b0c90(uVar8,lVar7,uVar21,1);
    if (plStack_58 == (long *)0x0) {
      uStack_198 = (long *)0x0;
      plStack_190 = (long *)0x0;
      uStack_1a0 = 0xdfa4911;
      func_0x048b0d20(&uStack_198);
      plStack_58 = uStack_198;
      plStack_50 = plStack_190;
      if (uStack_198 == (long *)0x0) {
        lVar7 = *plStack_e0;
        uStack_1a0 = 0xdfa502f;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar7 + 0x2aa));
        uStack_1a0 = 0xdfa5043;
        uVar8 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        plVar17 = (long *)((ulong)uStack_d8 >> 1 & 0x7f);
        pcVar15 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          plVar17 = plStack_d0;
          pcVar15 = pcStack_c8;
        }
        uStack_1a0 = 0xdfa506f;
        uVar8 = func_0x0412f8c0(uVar8,pcVar15,plVar17);
        uStack_1a0 = 0xdfa5083;
        pbVar10 = (byte *)func_0x0412f8c0(uVar8,&UNK_0125506d,1);
        bVar28 = (*pbVar10 & 1) != 0;
        pbVar25 = pbVar10 + 1;
        if (bVar28) {
          pbVar25 = *(byte **)(pbVar10 + 0x10);
        }
        uVar13 = (ulong)(*pbVar10 >> 1);
        if (bVar28) {
          uVar13 = *(ulong *)(pbVar10 + 8);
        }
        auStack_138 = (undefined1  [8])0x0;
        uStack_1a0 = 0xdfa50b5;
        func_0x0ee387f0(auStack_138,pbVar25,uVar13,1);
        uStack_1a0 = 0xdfa50c7;
        func_0x0ed5ffe0(lVar7,8,auStack_138);
        uStack_1a0 = 0xdfa50d1;
        func_0x0ee386e0(auStack_138);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0xdfa50ed;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_0dfa5573;
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
    uStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0xdfa4946;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0xdfa495e;
    func_0x05d9a920(&pppppppuStack_b8,&plStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xdfa496d;
      (*pcStack_180)(&uStack_198);
    }
    bVar28 = (*(byte *)(puStack_70 + 1) & 1) != 0;
    if (bVar28) {
      ppppppuVar19 = (undefined8 ******)puStack_70[3];
    }
    uVar13 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
    if (bVar28) {
      uVar13 = puStack_70[2];
    }
    if (uVar13 == 0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar27 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uVar21 = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar23 = 0;
        do {
          uVar21 = ((int)*(char *)((long)ppppppuVar19 + uVar23 + 3) ^
                   ((int)*(char *)((long)ppppppuVar19 + uVar23 + 2) ^
                   ((int)*(char *)((long)ppppppuVar19 + uVar23 + 1) ^
                   ((int)*(char *)((long)ppppppuVar19 + uVar23) ^ uVar21) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar27 != 0) {
        uVar13 = 0;
        do {
          uVar21 = ((int)*(char *)((long)ppppppuVar19 + uVar13 + uVar23) ^ uVar21) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar27 != uVar13);
      }
    }
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar17 = (long *)*param_3;
    plVar12 = plVar17;
    if (cVar1 == '\x02') {
      plVar12 = param_3;
    }
    if (plVar12 == (long *)0x0 || (int)param_3[4] != -0x34e4f6fb) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        uStack_1a0 = 0xdfa4a70;
        (*(code *)param_3[7])(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar17 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar17 = param_3;
      }
      uStack_1a0 = 0xdfa4a92;
      plVar12 = (long *)FUN_0488e200(lVar7,lVar24,0xcb1b0905,plVar17);
    }
    plVar17 = (long *)param_3[5];
    uStack_1a0 = 0xdfa4aa2;
    uVar8 = func_0x0490fc00(plVar17);
    uStack_1a0 = 0xdfa4ab5;
    auVar9 = (undefined1  [8])func_0x048b0c90(plVar17,uVar8,uVar21,1);
    plStack_140 = plVar17;
    if (auVar9 == (undefined1  [8])0x0) {
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0xdfa4acc;
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
    uStack_1a0 = 0xdfa4b07;
    puStack_148 = (undefined *)auVar9;
    func_0x05d84ba0(auStack_138);
    uStack_1a0 = 0xdfa4b19;
    func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
    if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
        bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar18 = pppppppuStack_b8;
        if (cStack_94 == '\x02') {
          pppppppuVar18 = &pppppppuStack_b8;
        }
        uStack_1a0 = 0xdfa54c0;
        lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar18);
        bVar28 = lVar7 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0xdfa4b56;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_120 != (code *)0x0) {
      uStack_1a0 = 0xdfa4b67;
      (*pcStack_120)(auStack_138);
    }
    if (bVar28) {
      lVar7 = param_3[5];
      plVar17 = plVar12 + 1;
      if ((ulong)*(uint *)(plVar12 + 5) != 0xffffffff) {
        uStack_1a0 = 0xdfa4b97;
        (**(code **)(&UNK_0f4a8018 + (ulong)*(uint *)(plVar12 + 5) * 8))(auStack_138,plVar17);
      }
      *plVar17 = 0;
      plVar12[2] = 0;
      plVar12[3] = 0;
      *(undefined4 *)(plVar12 + 5) = 0;
      pcStack_188 = (code *)&UNK_0490f860;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x37ccc1911);
      lStack_168 = 0;
      puStack_160 = &UNK_0490f7a0;
      lStack_118 = plStack_e0[4];
      auStack_138 = (undefined1  [8])*plStack_e0;
      plStack_130 = (long *)plStack_e0[1];
      pcStack_128 = (code *)plStack_e0[2];
      pcStack_120 = (code *)plStack_e0[3];
      plVar12 = (long *)plStack_e0[2];
      uStack_198 = plVar17;
      lStack_170 = lVar7;
      if (plVar12 == (long *)0x0) {
        pcStack_128 = (code *)0x0;
      }
      else {
        uStack_1a0 = 0xdfa4c27;
        pcStack_128 = (code *)(**(code **)(*plVar12 + 0x30))(plVar12,0);
      }
      puStack_148 = &UNK_0ef474e0;
      uStack_1a0 = 0xdfa4ff5;
      func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e8,auStack_138);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xdfa5008;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar17 = (long *)param_3[5];
      uStack_1a0 = 0xdfa4c46;
      uVar8 = func_0x09285e80(plVar17);
      uStack_1a0 = 0xdfa4c59;
      auVar9 = (undefined1  [8])func_0x048b0c90(plVar17,uVar8,uVar21,1);
      if (auVar9 == (undefined1  [8])0x0) {
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0xdfa4c70;
        func_0x048b0d20(auStack_138);
        auVar9 = auStack_138;
        plVar17 = plStack_130;
      }
      lStack_108 = 0;
      puStack_100 = (undefined *)0x0;
      lStack_118 = 0;
      lStack_110 = 0;
      pcStack_128 = (code *)0x0;
      pcStack_120 = (code *)0x0;
      auStack_138 = (undefined1  [8])0x0;
      plStack_130 = (long *)0x0;
      uStack_1a0 = 0xdfa4cab;
      puStack_148 = (undefined *)auVar9;
      plStack_140 = plVar17;
      func_0x05d84ba0(auStack_138);
      uStack_1a0 = 0xdfa4cbd;
      func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
      if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
          bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar18 = pppppppuStack_b8;
          if (cStack_94 == '\x02') {
            pppppppuVar18 = &pppppppuStack_b8;
          }
          uStack_1a0 = 0xdfa55bd;
          lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar18);
          bVar28 = lVar7 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0xdfa4cfa;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_120 != (code *)0x0) {
        uStack_1a0 = 0xdfa4d0b;
        (*pcStack_120)(auStack_138);
      }
      if (bVar28) {
        lVar7 = param_3[5];
        plVar17 = plVar12 + 1;
        if ((ulong)*(uint *)(plVar12 + 5) != 0xffffffff) {
          uStack_1a0 = 0xdfa4d3b;
          (**(code **)(&UNK_0f4a8018 + (ulong)*(uint *)(plVar12 + 5) * 8))(auStack_138,plVar17);
        }
        *plVar17 = 0;
        plVar12[2] = 0;
        plVar12[3] = 0;
        *(undefined4 *)(plVar12 + 5) = 1;
        pcStack_188 = (code *)&UNK_09286250;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x3c761f98b);
        lStack_168 = 0;
        puStack_160 = &UNK_09286190;
        lStack_118 = plStack_e0[4];
        auStack_138 = (undefined1  [8])*plStack_e0;
        plStack_130 = (long *)plStack_e0[1];
        pcStack_128 = (code *)plStack_e0[2];
        pcStack_120 = (code *)plStack_e0[3];
        plVar12 = (long *)plStack_e0[2];
        uStack_198 = plVar17;
        lStack_170 = lVar7;
        if (plVar12 == (long *)0x0) {
          pcStack_128 = (code *)0x0;
        }
        else {
          uStack_1a0 = 0xdfa4dce;
          pcStack_128 = (code *)(**(code **)(*plVar12 + 0x30))(plVar12,1);
        }
        puStack_148 = &UNK_0f4a7dd8;
        uStack_1a0 = 0xdfa51c0;
        func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e8,auStack_138);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xdfa51d3;
          (*pcStack_180)(&uStack_198);
        }
      }
      else {
        plVar17 = (long *)param_3[5];
        uStack_1a0 = 0xdfa4ded;
        uVar8 = func_0x063f0b80(plVar17);
        uStack_1a0 = 0xdfa4e00;
        auVar9 = (undefined1  [8])func_0x048b0c90(plVar17,uVar8,uVar21,1);
        if (auVar9 == (undefined1  [8])0x0) {
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0xdfa4e17;
          func_0x048b0d20(auStack_138);
          auVar9 = auStack_138;
          plVar17 = plStack_130;
        }
        lStack_108 = 0;
        puStack_100 = (undefined *)0x0;
        lStack_118 = 0;
        lStack_110 = 0;
        pcStack_128 = (code *)0x0;
        pcStack_120 = (code *)0x0;
        auStack_138 = (undefined1  [8])0x0;
        plStack_130 = (long *)0x0;
        uStack_1a0 = 0xdfa4e52;
        puStack_148 = (undefined *)auVar9;
        plStack_140 = plVar17;
        func_0x05d84ba0(auStack_138);
        uStack_1a0 = 0xdfa4e64;
        func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
        if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0))) {
          if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
            bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
          }
          else {
            pppppppuVar18 = pppppppuStack_b8;
            if (cStack_94 == '\x02') {
              pppppppuVar18 = &pppppppuStack_b8;
            }
            uStack_1a0 = 0xdfa55da;
            lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar18);
            bVar28 = lVar7 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0xdfa4ea1;
          (*pcStack_180)(&uStack_198);
        }
        if (pcStack_120 != (code *)0x0) {
          uStack_1a0 = 0xdfa4eb2;
          (*pcStack_120)(auStack_138);
        }
        if (bVar28) {
          lVar7 = param_3[5];
          plVar17 = plVar12 + 1;
          if ((ulong)*(uint *)(plVar12 + 5) != 0xffffffff) {
            uStack_1a0 = 0xdfa4ee2;
            (**(code **)(&UNK_0f4a8018 + (ulong)*(uint *)(plVar12 + 5) * 8))(auStack_138,plVar17);
          }
          *plVar17 = 0;
          plVar12[2] = 0;
          plVar12[3] = 0;
          *(undefined4 *)(plVar12 + 5) = 2;
          pcStack_188 = (code *)&UNK_063f0870;
          pcStack_180 = (code *)0x0;
          uStack_178 = CONCAT35(uStack_178._5_3_,0x3f083fcb6);
          lStack_168 = 0;
          puStack_160 = &UNK_063f07b0;
          lStack_118 = plStack_e0[4];
          auStack_138 = (undefined1  [8])*plStack_e0;
          plStack_130 = (long *)plStack_e0[1];
          pcStack_128 = (code *)plStack_e0[2];
          pcStack_120 = (code *)plStack_e0[3];
          plVar12 = (long *)plStack_e0[2];
          uStack_198 = plVar17;
          lStack_170 = lVar7;
          if (plVar12 == (long *)0x0) {
            pcStack_128 = (code *)0x0;
          }
          else {
            uStack_1a0 = 0xdfa4f75;
            pcStack_128 = (code *)(**(code **)(*plVar12 + 0x30))(plVar12,2);
          }
          puStack_148 = &UNK_0f02e460;
          uStack_1a0 = 0xdfa548a;
          func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e8,auStack_138);
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xdfa549d;
            (*pcStack_180)(&uStack_198);
          }
        }
        else {
          plVar17 = (long *)param_3[5];
          if (DAT_0f741608 == '\0') {
            uStack_1a0 = 0xdfa563e;
            iVar2 = func_0x04108328(&DAT_0f741608);
            if (iVar2 != 0) {
              uStack_1a0 = 0xdfa564b;
              func_0x0df8e810();
              uStack_1a0 = 0xdfa5665;
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f741588,0xf53dab8);
              uStack_1a0 = 0xdfa5671;
              func_0x0410844d(&DAT_0f741608);
            }
          }
          plVar5 = (long *)(*plVar17 +
                           (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                                  *(uint *)(_DAT_0f741588 + 4)) * 8);
          do {
            lVar7 = *plVar5;
            if (lVar7 == -1) {
              plVar11 = (long *)plVar17[4];
              plVar5 = plVar11;
              goto LAB_0dfa51eb;
            }
            plVar5 = (long *)(plVar17[3] + lVar7 * 0x18);
          } while (*(uint *)(plVar17[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f741588 + 4));
          plVar11 = (long *)plVar17[4];
LAB_0dfa51eb:
          if (plVar5 == plVar11) {
            puVar26 = &DAT_0f741588;
          }
          else {
            puVar26 = (undefined *)plVar5[2];
          }
          uStack_1a0 = 0xdfa5249;
          auVar9 = (undefined1  [8])func_0x048b0c90(plVar17,puVar26,uVar21,1);
          if (auVar9 == (undefined1  [8])0x0) {
            auStack_138 = (undefined1  [8])0x0;
            plStack_130 = (long *)0x0;
            uStack_1a0 = 0xdfa5260;
            func_0x048b0d20(auStack_138);
            auVar9 = auStack_138;
            plVar17 = plStack_130;
          }
          lStack_108 = 0;
          puStack_100 = (undefined *)0x0;
          lStack_118 = 0;
          lStack_110 = 0;
          pcStack_128 = (code *)0x0;
          pcStack_120 = (code *)0x0;
          auStack_138 = (undefined1  [8])0x0;
          plStack_130 = (long *)0x0;
          uStack_1a0 = 0xdfa529b;
          puStack_148 = (undefined *)auVar9;
          plStack_140 = plVar17;
          func_0x05d84ba0(auStack_138);
          uStack_1a0 = 0xdfa52ad;
          func_0x05d9a920(&uStack_198,&puStack_148,auStack_138);
          if ((lStack_170 == lStack_90) && ((lStack_80 != 0) == (puStack_160 != (undefined *)0x0)))
          {
            if ((cStack_94 == '\0') || ((int)uStack_178 != iStack_98)) {
              bVar28 = cStack_94 == '\0' && uStack_178._4_1_ == '\0';
            }
            else {
              pppppppuVar18 = &pppppppuStack_b8;
              if (cStack_94 != '\x02') {
                pppppppuVar18 = pppppppuStack_b8;
              }
              uStack_1a0 = 0xdfa5510;
              lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar18);
              bVar28 = lVar7 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_180 != (code *)0x0) {
            uStack_1a0 = 0xdfa52ea;
            (*pcStack_180)(&uStack_198);
          }
          if (pcStack_120 != (code *)0x0) {
            uStack_1a0 = 0xdfa52fb;
            (*pcStack_120)(auStack_138);
          }
          if (bVar28) {
            lVar7 = param_3[5];
            plVar17 = plVar12 + 1;
            if ((ulong)*(uint *)(plVar12 + 5) != 0xffffffff) {
              uStack_1a0 = 0xdfa532b;
              (**(code **)(&UNK_0f4a8018 + (ulong)*(uint *)(plVar12 + 5) * 8))(auStack_138,plVar17);
            }
            plVar12[3] = 0;
            plVar12[4] = 0;
            *plVar17 = 0;
            plVar12[2] = 0;
            *(undefined4 *)(plVar12 + 5) = 3;
            pcStack_188 = (code *)&UNK_0df8eb10;
            pcStack_180 = (code *)0x0;
            uStack_178 = CONCAT35(uStack_178._5_3_,0x3e2b120f8);
            lStack_168 = 0;
            puStack_160 = &UNK_0df8ea30;
            lStack_118 = plStack_e0[4];
            auStack_138 = (undefined1  [8])*plStack_e0;
            plStack_130 = (long *)plStack_e0[1];
            pcStack_128 = (code *)plStack_e0[2];
            pcStack_120 = (code *)plStack_e0[3];
            plVar12 = (long *)plStack_e0[2];
            uStack_198 = plVar17;
            lStack_170 = lVar7;
            if (plVar12 == (long *)0x0) {
              pcStack_128 = (code *)0x0;
            }
            else {
              uStack_1a0 = 0xdfa53bb;
              pcStack_128 = (code *)(**(code **)(*plVar12 + 0x30))(plVar12,3);
            }
            puStack_148 = &UNK_0f4a82a0;
            uStack_1a0 = 0xdfa554d;
            func_0x0ed75bc0(&puStack_148,plStack_150,&uStack_198,uStack_e8,auStack_138);
            if (pcStack_180 != (code *)0x0) {
              uStack_1a0 = 0xdfa555c;
              (*pcStack_180)(&uStack_198);
            }
          }
          else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                  (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
            uStack_198 = (long *)0x2300000149614c;
            uStack_1a0 = 0xdfa5420;
            func_0x0ed5ffe0(*plStack_e0,8,&uStack_198);
            if (((ulong)uStack_198 & 0x80000000000000) != 0) {
              uStack_1a0 = 0xdfa544b;
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
            }
            uStack_198 = (long *)0x0;
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1a0 = 0xdfa5573;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_0dfa5573:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0xdfa559a;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


