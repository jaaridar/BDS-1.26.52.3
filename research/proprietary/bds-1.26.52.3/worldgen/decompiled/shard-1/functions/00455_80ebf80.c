/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x81ebf80 (ELF vaddr 0x80ebf80)
 * Label: caller-of-callee
 * Body:  [[081ebf80, 081ec720] [081ec730, 081eea61] [081ef0f0, 081ef5c2]]
 * Ghidra: FUN_081ebf80
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_081ebf80(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auVar12 [8];
  byte *pbVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  code *pcVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *******pppppppuVar22;
  uint uVar23;
  undefined8 ******ppppppuVar24;
  byte *pbVar25;
  undefined *puVar26;
  long *plVar27;
  undefined8 ******ppppppuVar28;
  long lVar29;
  bool bVar30;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  char cStack_178;
  undefined *puStack_168;
  long *plStack_160;
  undefined1 auStack_158 [8];
  long *plStack_150;
  code *pcStack_148;
  code *pcStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  char cStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 *******pppppppuStack_f8;
  ulong uStack_f0;
  code *pcStack_e0;
  int iStack_d8;
  char cStack_d4;
  long lStack_d0;
  long lStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 auStack_40 [16];
  
  puStack_b0 = param_2;
  bVar2 = (**(code **)(*param_1 + 0x18))();
  if ((bVar2 & 2) != 0) {
    cVar3 = *(char *)((long)param_3 + 0x24);
    puVar19 = (undefined8 *)*param_3;
    puVar15 = puVar19;
    if (cVar3 == '\x02') {
      puVar15 = param_3;
    }
    if (puVar15 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x8032240) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_60 = 0x81ef14f;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar3 = *(char *)((long)param_3 + 0x24);
        puVar19 = (undefined8 *)*param_3;
      }
      if (cVar3 == '\x02') {
        puVar19 = param_3;
      }
      uStack_60 = 0x81ef171;
      puVar15 = (undefined8 *)FUN_0488e200(uVar11,lVar8,0xf7fcddc0,puVar19);
    }
    uStack_60 = 0x81ef181;
    func_0x0ed6d600(auStack_40,*param_5);
    bVar2 = *(byte *)(param_1 + 1) | *(byte *)((long)param_1 + 9);
    *(byte *)((long)param_1 + 9) = bVar2 | 1;
    uStack_60 = 0x81ef19e;
    uVar20 = (**(code **)(*param_1 + 0x98))(param_1);
    *(byte *)((long)param_1 + 9) = bVar2;
    if ((uVar20 >> 0x20 & 1) == 0) {
      uVar9 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x81ef1de;
      uStack_60 = uVar9;
      cVar3 = func_0x081eff80(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef20c;
      uStack_60 = uVar9;
      cVar3 = func_0x081f0190(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef23a;
      uStack_60 = uVar9;
      cVar3 = func_0x081f03c0(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef268;
      uStack_60 = uVar9;
      cVar3 = func_0x081f05f0(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef296;
      uStack_60 = uVar9;
      cVar3 = func_0x081f0820(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef2c4;
      uStack_60 = uVar9;
      cVar3 = func_0x081f0a50(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef2f2;
      uStack_60 = uVar9;
      cVar3 = func_0x081f0c70(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef320;
      uStack_60 = uVar9;
      cVar3 = func_0x081f0ea0(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef34e;
      uStack_60 = uVar9;
      cVar3 = func_0x081f10d0(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar20 = 10;
      uStack_60 = uVar9;
    }
    else {
      if (9 < (uint)uVar20) {
        uStack_48 = 0x2d000001258dae;
        uStack_60 = 0x81ef590;
        func_0x0ed5ffe0(*param_5,8,&uStack_48);
        if ((uStack_48 >> 0x37 & 1) == 0) {
          return;
        }
        uStack_60 = 0x81ef5b4;
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
        return;
      }
      uStack_60 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x81ef3b9;
      uStack_50 = uStack_60;
      cVar3 = func_0x081eff80(param_1,param_3[5],puVar15,param_4,param_5,uVar20 & 0xff);
      if (cVar3 != '\0') {
        return;
      }
      uVar20 = uVar20 & 0xff;
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef3ea;
      cVar3 = func_0x081f0190(param_1,param_3[5],puVar15,param_4,param_5,uVar20);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef417;
      cVar3 = func_0x081f03c0(param_1,param_3[5],puVar15,param_4,param_5,uVar20);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef444;
      cVar3 = func_0x081f05f0(param_1,param_3[5],puVar15,param_4,param_5,uVar20);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef471;
      cVar3 = func_0x081f0820(param_1,param_3[5],puVar15,param_4,param_5,uVar20);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef49e;
      cVar3 = func_0x081f0a50(param_1,param_3[5],puVar15,param_4,param_5,uVar20);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef4cb;
      cVar3 = func_0x081f0c70(param_1,param_3[5],puVar15,param_4,param_5,uVar20);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef4f8;
      cVar3 = func_0x081f0ea0(param_1,param_3[5],puVar15,param_4,param_5,uVar20);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x81ef525;
      cVar3 = func_0x081f10d0(param_1,param_3[5],puVar15,param_4,param_5,uVar20);
      if (cVar3 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uStack_60 = uStack_50;
    }
    puStack_68 = puStack_58;
    uStack_70 = 0x81ef552;
    func_0x081f1300(param_1,uVar11,puVar15,param_4,param_5,uVar20);
    return;
  }
  if (bVar2 != 1) {
    uStack_70 = 0x120000012f2525;
    func_0x0ed5ffe0(*param_5,8,&uStack_70);
    if ((uStack_70 >> 0x37 & 1) == 0) {
      return;
    }
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_100 = param_4;
  plStack_b8 = param_1;
  func_0x0ed6d600(&puStack_68,*param_5);
  uStack_48 = param_3[5];
  lVar8 = *param_5;
  ppppppuVar28 = (undefined8 ******)((long)puStack_b0 + 9);
  bVar30 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_b0[3];
  if (bVar30) {
    ppppppuVar24 = ppppppuVar28;
  }
  uVar20 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar30) {
    uVar20 = puStack_b0[2];
  }
  puStack_110 = param_3;
  plStack_108 = param_5;
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_168 = (undefined *)((ulong)((uint)uVar20 & 0x7f) << 0x30);
  }
  else if (uVar20 < 0x80) {
    puStack_168 = (undefined *)(uVar20 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar29 = uVar20 + 9;
    lStack_88 = lVar8;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
    if (puVar7 == (ulong *)0x0 && lVar29 != 0) {
      func_0x0eec74c0(lVar29,8);
    }
    *puVar7 = uVar20;
    memcpy(puVar7 + 1,ppppppuVar24,uVar20);
    *(undefined1 *)((long)puVar7 + uVar20 + 8) = 0;
    puStack_168 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    lVar8 = lStack_88;
  }
  puVar5 = (uint *)func_0x0ed6d180(lVar8,&puStack_168,0);
  plVar27 = plStack_b8;
  if (((ulong)puStack_168 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_168 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_168 = (undefined *)0x0;
  bVar30 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_b0[3];
  if (bVar30) {
    ppppppuVar24 = ppppppuVar28;
  }
  uVar20 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar30) {
    uVar20 = puStack_b0[2];
  }
  cVar3 = (**(code **)(*plVar27 + 0xb8))(plVar27,ppppppuVar24,uVar20);
  if (cVar3 == '\0') {
    _auStack_158 = (*(code *)*puStack_b0)(uStack_48);
    func_0x0ed8bc80(&uStack_1b8,auStack_158,*(undefined1 *)(lVar8 + 0x2aa));
    uVar20 = (ulong)uStack_1b8 >> 1 & 0x7f;
    pcVar1 = (code *)((long)&uStack_1b8 + 1);
    if (((ulong)uStack_1b8 & 1) != 0) {
      uVar20 = uStack_1b0;
      pcVar1 = pcStack_1a8;
    }
    pppppppuStack_f8 = (undefined8 *******)0x0;
    if (pcVar1 == (code *)0x0) {
      pppppppuStack_f8 = (undefined8 *******)((ulong)((uint)uVar20 & 0x7f) << 0x30);
    }
    else {
      lVar29 = uVar20 + 9;
      lStack_88 = lVar8;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
      if (lVar29 != 0 && puVar7 == (ulong *)0x0) {
        func_0x0eec74c0(lVar29,8);
      }
      *puVar7 = uVar20;
      memcpy(puVar7 + 1,pcVar1,uVar20);
      *(undefined1 *)((long)puVar7 + uVar20 + 8) = 0;
      pppppppuStack_f8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      lVar8 = lStack_88;
    }
    plVar27 = plStack_b8;
    func_0x0ed5ffe0(lVar8,8,&pppppppuStack_f8);
    if (((ulong)pppppppuStack_f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_f8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_f8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1b8 & 1) != 0) {
      func_0x0412a280(pcStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
    }
    uStack_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    pcStack_98 = (code *)0x0;
  }
  else {
    (**(code **)(*plVar27 + 0x80))(auStack_158,plVar27,0x40);
    cStack_178 = cStack_118;
    if (cStack_118 == '\0') {
      uStack_1b8 = (undefined8 *)auStack_158;
      uStack_1b0 = (ulong)plStack_150;
      pcStack_1a8 = pcStack_148;
      pcStack_1a0 = pcStack_140;
      uStack_198 = lStack_138;
      lStack_190 = lStack_130;
      lStack_188 = lStack_128;
      puStack_180 = puStack_120;
      pppppppuStack_f8 = (undefined8 *******)puStack_b0[3];
      uStack_f0 = puStack_b0[2];
      if ((*(byte *)(puStack_b0 + 1) & 1) == 0) {
        pppppppuStack_f8 = (undefined8 *******)ppppppuVar28;
        uStack_f0 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
      }
      func_0x0470d9a0(auStack_158,&UNK_01377405,0x15,0xd,&pppppppuStack_f8);
      plVar27 = (long *)((ulong)auStack_158 >> 1 & 0x7f);
      pcVar1 = (code *)(auStack_158 + 1);
      if (((ulong)auStack_158 & 1) != 0) {
        plVar27 = plStack_150;
        pcVar1 = pcStack_148;
      }
      pppppppuStack_f8 = (undefined8 *******)0x0;
      if (pcVar1 == (code *)0x0) {
        pppppppuStack_f8 = (undefined8 *******)((ulong)((uint)plVar27 & 0x7f) << 0x30);
      }
      else {
        lVar29 = (long)plVar27 + 9;
        lStack_88 = lVar8;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
        if (lVar29 != 0 && puVar7 == (ulong *)0x0) {
          func_0x0eec74c0(lVar29,8);
        }
        *puVar7 = (ulong)plVar27;
        memcpy(puVar7 + 1,pcVar1,plVar27);
        *(undefined1 *)((long)puVar7 + (long)plVar27 + 8U) = 0;
        pppppppuStack_f8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        lVar8 = lStack_88;
      }
      plVar27 = plStack_b8;
      func_0x0ed5ffe0(lVar8,8,&pppppppuStack_f8);
      if (((ulong)pppppppuStack_f8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_f8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_f8 = (undefined8 *******)0x0;
      if (((ulong)auStack_158 & 1) != 0) {
        func_0x0412a280(pcStack_148,(ulong)auStack_158 & 0xfffffffffffffffe);
      }
      uStack_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      pcStack_98 = (code *)0x0;
joined_r0x081ec6b9:
      if (cStack_178 == '\x01') goto LAB_081ec5f2;
LAB_081ec6bf:
      lVar8 = lStack_190;
      if (lStack_190 != 0) {
        while (lVar8 != lStack_188) {
          func_0x048b3e80(lStack_188 + -0x40);
          lStack_188 = lStack_188 + -0x40;
        }
        lStack_188 = lVar8;
        func_0x0412a280(lStack_190,(long)puStack_180 - lStack_190);
      }
      pcVar17 = pcStack_1a8;
      pcVar1 = pcStack_1a0;
      if (pcStack_1a8 == (code *)0x0) goto LAB_081ec771;
      for (; pcVar17 != pcVar1; pcVar1 = pcVar1 + -0x50) {
        if ((pcVar1[-8] == (code)0x1) && (((byte)pcVar1[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(pcVar1 + -0x20),
                          *(ulong *)(pcVar1 + -0x30) & 0xfffffffffffffffe);
        }
      }
      pcStack_1a0 = pcVar17;
      uVar20 = uStack_198 - (long)pcStack_1a8;
    }
    else {
      pcStack_1a8 = pcStack_148;
      uStack_1b8 = (undefined8 *)auStack_158;
      uStack_1b0 = (ulong)plStack_150;
      plVar18 = (long *)(ulong)(byte)(auStack_158[0] >> 1);
      pcVar1 = (code *)((long)&uStack_1b8 + 1);
      if (((ulong)auStack_158 & 1) != 0) {
        plVar18 = plStack_150;
        pcVar1 = pcStack_148;
      }
      bVar2 = auStack_158[0];
      if (plVar18 != (long *)0x0) {
        plVar6 = (long *)__ctype_tolower_loc();
        pcVar17 = pcVar1;
        for (uVar20 = (ulong)plVar18 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
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
          } while (pcVar17 != pcVar1 + (long)plVar18);
        }
        bVar2 = (byte)uStack_1b8;
      }
      if ((bVar2 & 1) != 0) {
        func_0x0412e5e0(&uStack_a8,pcStack_1a8,uStack_1b0);
        goto joined_r0x081ec6b9;
      }
      pcStack_98 = pcStack_1a8;
      uStack_a8 = uStack_1b8;
      uStack_a0 = uStack_1b0;
      if (cStack_178 != '\x01') goto LAB_081ec6bf;
LAB_081ec5f2:
      if (((ulong)uStack_1b8 & 1) == 0) goto LAB_081ec771;
      uVar20 = (ulong)uStack_1b8 & 0xfffffffffffffffe;
    }
    func_0x0412a280(pcStack_1a8,uVar20);
  }
LAB_081ec771:
  (**(code **)(*plVar27 + 0xd0))(plVar27);
  lVar8 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar16 = puVar5[4];
LAB_081ec7c0:
    lVar29 = lVar8 + (ulong)uVar16 * 0x20;
    uVar20 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar16 * 0x20);
    if (uVar20 != 0xffffffff) {
      (**(code **)(&UNK_0f4e40d0 + uVar20 * 8))(&uStack_1b8,lVar29 + -0x18);
      uVar16 = puVar5[4];
    }
    *(undefined4 *)(lVar29 + -0x10) = 0xffffffff;
    puVar5[4] = uVar16 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar16 = puVar5[4], uVar23 == uVar16 - 1)) goto LAB_081ec7c0;
  if ((*(uint *)(puStack_68 + 0x56) == 0xffffffff) ||
     (*(uint *)(puStack_68 + 0x56) < (uint)uStack_60)) {
    auStack_40 = (*(code *)*puStack_b0)();
    uVar11 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    uVar20 = (ulong)uStack_a8 >> 1 & 0x7f;
    pcVar1 = (code *)((long)&uStack_a8 + 1);
    if (((ulong)uStack_a8 & 1) != 0) {
      uVar20 = uStack_a0;
      pcVar1 = pcStack_98;
    }
    if (uVar20 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar20 & 3);
      if (uVar20 < 4) {
        uVar23 = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar23 = ((int)(char)pcVar1[uVar21 + 3] ^
                   ((int)(char)pcVar1[uVar21 + 2] ^
                   ((int)(char)pcVar1[uVar21 + 1] ^ ((int)(char)pcVar1[uVar21] ^ uVar23) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while ((uVar20 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar9 != 0) {
        uVar20 = 0;
        do {
          uVar23 = ((int)(char)pcVar1[uVar20 + uVar21] ^ uVar23) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar9 != uVar20);
      }
    }
    if (lVar8 == 0) {
      lVar8 = FUN_048aead0(uVar11);
    }
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar11,lVar8,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1b8 = (undefined8 *)0x0;
      uStack_1b0 = 0;
      func_0x048b0d20(&uStack_1b8);
      puStack_58 = uStack_1b8;
      uStack_50 = uStack_1b0;
      if (uStack_1b8 == (undefined8 *)0x0) {
        lVar8 = *plStack_108;
        func_0x0ed8bc80(&uStack_1b8,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uVar11 = func_0x0412f8c0(&uStack_1b8,&UNK_01479aea,10);
        uVar20 = (ulong)uStack_a8 >> 1 & 0x7f;
        pcVar1 = (code *)((long)&uStack_a8 + 1);
        if (((ulong)uStack_a8 & 1) != 0) {
          uVar20 = uStack_a0;
          pcVar1 = pcStack_98;
        }
        uVar11 = func_0x0412f8c0(uVar11,pcVar1,uVar20);
        pbVar13 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar30 = (*pbVar13 & 1) != 0;
        pbVar25 = pbVar13 + 1;
        if (bVar30) {
          pbVar25 = *(byte **)(pbVar13 + 0x10);
        }
        uVar20 = (ulong)(*pbVar13 >> 1);
        if (bVar30) {
          uVar20 = *(ulong *)(pbVar13 + 8);
        }
        uStack_78 = 0;
        func_0x0ee387f0(&uStack_78,pbVar25,uVar20,1);
        func_0x0ed5ffe0(lVar8,8,&uStack_78);
        func_0x0ee386e0(&uStack_78);
        if (((ulong)uStack_1b8 & 1) != 0) {
          func_0x0412a280(pcStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
        }
        goto LAB_081ee73b;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    lStack_188 = 0;
    puStack_180 = (undefined *)0x0;
    uStack_198 = 0;
    lStack_190 = 0;
    pcStack_1a8 = (code *)0x0;
    pcStack_1a0 = (code *)0x0;
    uStack_1b8 = (undefined8 *)0x0;
    uStack_1b0 = 0;
    func_0x05d84ba0(&uStack_1b8);
    func_0x05d9a920(&pppppppuStack_f8,&puStack_58,&uStack_1b8);
    if (pcStack_1a0 != (code *)0x0) {
      (*pcStack_1a0)(&uStack_1b8);
    }
    puVar19 = puStack_110;
    bVar30 = (*(byte *)(puStack_b0 + 1) & 1) != 0;
    if (bVar30) {
      ppppppuVar28 = (undefined8 ******)puStack_b0[3];
    }
    uVar20 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
    if (bVar30) {
      uVar20 = puStack_b0[2];
    }
    if (uVar20 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar20 & 3);
      if (uVar20 < 4) {
        uVar23 = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar28 + uVar21 + 3) ^
                   ((int)*(char *)((long)ppppppuVar28 + uVar21 + 2) ^
                   ((int)*(char *)((long)ppppppuVar28 + uVar21 + 1) ^
                   ((int)*(char *)((long)ppppppuVar28 + uVar21) ^ uVar23) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while ((uVar20 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar9 != 0) {
        uVar20 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar28 + uVar20 + uVar21) ^ uVar23) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar9 != uVar20);
      }
    }
    cVar3 = *(char *)((long)puStack_110 + 0x24);
    puVar15 = (undefined8 *)*puStack_110;
    puVar10 = puVar15;
    if (cVar3 == '\x02') {
      puVar10 = puStack_110;
    }
    if (puVar10 == (undefined8 *)0x0 || *(int *)(puStack_110 + 4) != -0x8032240) {
      uVar11 = puStack_110[5];
      lVar8 = puStack_110[6];
      if (lVar8 == 0) {
        (*(code *)puStack_110[7])(0,puStack_110,0);
        lVar8 = puVar19[6];
        cVar3 = *(char *)((long)puVar19 + 0x24);
        puVar15 = (undefined8 *)*puVar19;
      }
      if (cVar3 == '\x02') {
        puVar15 = puVar19;
      }
      puVar10 = (undefined8 *)FUN_0488e200(uVar11,lVar8,0xf7fcddc0,puVar15);
    }
    plVar18 = (long *)puVar19[5];
    uVar11 = func_0x07d6d210(plVar18);
    auVar12 = (undefined1  [8])func_0x048b0c90(plVar18,uVar11,uVar23,1);
    plStack_160 = plVar18;
    if (auVar12 == (undefined1  [8])0x0) {
      auStack_158 = (undefined1  [8])0x0;
      plStack_150 = (long *)0x0;
      func_0x048b0d20(auStack_158);
      auVar12 = auStack_158;
      plStack_160 = plStack_150;
    }
    lStack_128 = 0;
    puStack_120 = (undefined *)0x0;
    lStack_138 = 0;
    lStack_130 = 0;
    pcStack_148 = (code *)0x0;
    pcStack_140 = (code *)0x0;
    auStack_158 = (undefined1  [8])0x0;
    plStack_150 = (long *)0x0;
    puStack_168 = (undefined *)auVar12;
    func_0x05d84ba0(auStack_158);
    func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
    if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
      if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
        bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
      }
      else {
        pppppppuVar22 = pppppppuStack_f8;
        if (cStack_d4 == '\x02') {
          pppppppuVar22 = &pppppppuStack_f8;
        }
        lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
        bVar30 = lVar8 != 0;
      }
    }
    else {
      bVar30 = false;
    }
    if (pcStack_1a0 != (code *)0x0) {
      (*pcStack_1a0)(&uStack_1b8);
    }
    if (pcStack_140 != (code *)0x0) {
      (*pcStack_140)(auStack_158);
    }
    if (bVar30) {
      lVar8 = puStack_110[5];
      puVar19 = puVar10 + 1;
      if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
        (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))(auStack_158,puVar19);
      }
      *(undefined4 *)(puVar10 + 8) = 0;
      pcStack_1a8 = (code *)&UNK_07d6d110;
      pcStack_1a0 = (code *)0x0;
      uStack_198 = CONCAT35(uStack_198._5_3_,0x30e9e0e84);
      lStack_188 = 0;
      puStack_180 = &UNK_07d6d0f0;
      lStack_138 = plStack_108[4];
      auStack_158 = (undefined1  [8])*plStack_108;
      plStack_150 = (long *)plStack_108[1];
      pcStack_148 = (code *)plStack_108[2];
      pcStack_140 = (code *)plStack_108[3];
      plVar18 = (long *)plStack_108[2];
      uStack_1b8 = puVar19;
      lStack_190 = lVar8;
      if (plVar18 == (long *)0x0) {
        pcStack_148 = (code *)0x0;
      }
      else {
        pcStack_148 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,0);
      }
      puStack_168 = &UNK_0f4e3b48;
      func_0x0ed75bc0(&puStack_168,plVar27,&uStack_1b8,uStack_100,auStack_158);
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(&uStack_1b8);
      }
    }
    else {
      plVar18 = (long *)puStack_110[5];
      if (DAT_0f5c9798 == '\0') {
        iVar4 = func_0x04108328(&DAT_0f5c9798);
        if (iVar4 != 0) {
          func_0x081ce900();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9718,0xf53dab8);
          func_0x0410844d(&DAT_0f5c9798);
        }
      }
      plVar6 = (long *)(*plVar18 +
                       (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                              *(uint *)(_DAT_0f5c9718 + 4)) * 8);
      do {
        lVar8 = *plVar6;
        if (lVar8 == -1) {
          plVar14 = (long *)plVar18[4];
          plVar6 = plVar14;
          goto LAB_081ecce4;
        }
        plVar6 = (long *)(plVar18[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c9718 + 4));
      plVar14 = (long *)plVar18[4];
LAB_081ecce4:
      if (plVar6 == plVar14) {
        puVar26 = &DAT_0f5c9718;
      }
      else {
        puVar26 = (undefined *)plVar6[2];
      }
      auVar12 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar23,1);
      if (auVar12 == (undefined1  [8])0x0) {
        auStack_158 = (undefined1  [8])0x0;
        plStack_150 = (long *)0x0;
        func_0x048b0d20(auStack_158);
        auVar12 = auStack_158;
        plVar18 = plStack_150;
      }
      lStack_128 = 0;
      puStack_120 = (undefined *)0x0;
      lStack_138 = 0;
      lStack_130 = 0;
      pcStack_148 = (code *)0x0;
      pcStack_140 = (code *)0x0;
      auStack_158 = (undefined1  [8])0x0;
      plStack_150 = (long *)0x0;
      puStack_168 = (undefined *)auVar12;
      plStack_160 = plVar18;
      func_0x05d84ba0(auStack_158);
      func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
      if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
        if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
          bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
        }
        else {
          pppppppuVar22 = pppppppuStack_f8;
          if (cStack_d4 == '\x02') {
            pppppppuVar22 = &pppppppuStack_f8;
          }
          lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
          bVar30 = lVar8 != 0;
        }
      }
      else {
        bVar30 = false;
      }
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(&uStack_1b8);
      }
      if (pcStack_140 != (code *)0x0) {
        (*pcStack_140)(auStack_158);
      }
      if (bVar30) {
        lVar8 = puStack_110[5];
        puVar19 = puVar10 + 1;
        if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
          (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))(auStack_158,puVar19);
        }
        puVar10[3] = 0;
        puVar10[4] = 0;
        *puVar19 = 0;
        puVar10[2] = 0;
        *(undefined4 *)(puVar10 + 5) = 0;
        *(undefined4 *)(puVar10 + 8) = 1;
        pcStack_1a8 = (code *)&UNK_081ceb80;
        pcStack_1a0 = (code *)0x0;
        uStack_198 = CONCAT35(uStack_198._5_3_,0x3d769507c);
        lStack_188 = 0;
        puStack_180 = &UNK_081ceaa0;
        lStack_138 = plStack_108[4];
        auStack_158 = (undefined1  [8])*plStack_108;
        plStack_150 = (long *)plStack_108[1];
        pcStack_148 = (code *)plStack_108[2];
        pcStack_140 = (code *)plStack_108[3];
        plVar18 = (long *)plStack_108[2];
        uStack_1b8 = puVar19;
        lStack_190 = lVar8;
        if (plVar18 == (long *)0x0) {
          pcStack_148 = (code *)0x0;
        }
        else {
          pcStack_148 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,1);
        }
        puStack_168 = &UNK_0f10c940;
        func_0x0ed75bc0(&puStack_168,plVar27,&uStack_1b8,uStack_100,auStack_158);
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(&uStack_1b8);
        }
      }
      else {
        plVar18 = (long *)puStack_110[5];
        if (DAT_0f5c9850 == '\0') {
          iVar4 = func_0x04108328(&DAT_0f5c9850);
          if (iVar4 != 0) {
            func_0x081d1b90();
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c97d0,0xf53dab8);
            func_0x0410844d(&DAT_0f5c9850);
          }
        }
        plVar6 = (long *)(*plVar18 +
                         (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                                *(uint *)(_DAT_0f5c97d0 + 4)) * 8);
        do {
          lVar8 = *plVar6;
          if (lVar8 == -1) {
            plVar14 = (long *)plVar18[4];
            plVar6 = plVar14;
            goto LAB_081ed080;
          }
          plVar6 = (long *)(plVar18[3] + lVar8 * 0x18);
        } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c97d0 + 4));
        plVar14 = (long *)plVar18[4];
LAB_081ed080:
        if (plVar6 == plVar14) {
          puVar26 = &DAT_0f5c97d0;
        }
        else {
          puVar26 = (undefined *)plVar6[2];
        }
        auVar12 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar23,1);
        if (auVar12 == (undefined1  [8])0x0) {
          auStack_158 = (undefined1  [8])0x0;
          plStack_150 = (long *)0x0;
          func_0x048b0d20(auStack_158);
          auVar12 = auStack_158;
          plVar18 = plStack_150;
        }
        lStack_128 = 0;
        puStack_120 = (undefined *)0x0;
        lStack_138 = 0;
        lStack_130 = 0;
        pcStack_148 = (code *)0x0;
        pcStack_140 = (code *)0x0;
        auStack_158 = (undefined1  [8])0x0;
        plStack_150 = (long *)0x0;
        puStack_168 = (undefined *)auVar12;
        plStack_160 = plVar18;
        func_0x05d84ba0(auStack_158);
        func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
        if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
          if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
            bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
          }
          else {
            pppppppuVar22 = pppppppuStack_f8;
            if (cStack_d4 == '\x02') {
              pppppppuVar22 = &pppppppuStack_f8;
            }
            lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
            bVar30 = lVar8 != 0;
          }
        }
        else {
          bVar30 = false;
        }
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(&uStack_1b8);
        }
        if (pcStack_140 != (code *)0x0) {
          (*pcStack_140)(auStack_158);
        }
        if (bVar30) {
          lVar8 = puStack_110[5];
          puVar19 = puVar10 + 1;
          if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
            (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))(auStack_158,puVar19);
          }
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          *puVar19 = 0;
          puVar10[2] = 0;
          puVar10[7] = 0;
          *(undefined4 *)(puVar10 + 8) = 2;
          pcStack_1a8 = (code *)&UNK_081d1e20;
          pcStack_1a0 = (code *)0x0;
          uStack_198 = CONCAT35(uStack_198._5_3_,0x3d09dd714);
          lStack_188 = 0;
          puStack_180 = &UNK_081d1d40;
          lStack_138 = plStack_108[4];
          auStack_158 = (undefined1  [8])*plStack_108;
          plStack_150 = (long *)plStack_108[1];
          pcStack_148 = (code *)plStack_108[2];
          pcStack_140 = (code *)plStack_108[3];
          plVar18 = (long *)plStack_108[2];
          uStack_1b8 = puVar19;
          lStack_190 = lVar8;
          if (plVar18 == (long *)0x0) {
            pcStack_148 = (code *)0x0;
          }
          else {
            pcStack_148 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,2);
          }
          puStack_168 = &UNK_0f10c9c0;
          func_0x0ed75bc0(&puStack_168,plVar27,&uStack_1b8,uStack_100,auStack_158);
          if (pcStack_1a0 != (code *)0x0) {
            (*pcStack_1a0)(&uStack_1b8);
          }
        }
        else {
          plVar18 = (long *)puStack_110[5];
          if (DAT_0f5c9908 == '\0') {
            iVar4 = func_0x04108328(&DAT_0f5c9908);
            if (iVar4 != 0) {
              func_0x081d4c20();
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9888,0xf53dab8);
              func_0x0410844d(&DAT_0f5c9908);
            }
          }
          plVar6 = (long *)(*plVar18 +
                           (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                                  *(uint *)(_DAT_0f5c9888 + 4)) * 8);
          do {
            lVar8 = *plVar6;
            if (lVar8 == -1) {
              plVar14 = (long *)plVar18[4];
              plVar6 = plVar14;
              goto LAB_081ed329;
            }
            plVar6 = (long *)(plVar18[3] + lVar8 * 0x18);
          } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c9888 + 4));
          plVar14 = (long *)plVar18[4];
LAB_081ed329:
          if (plVar6 == plVar14) {
            puVar26 = &DAT_0f5c9888;
          }
          else {
            puVar26 = (undefined *)plVar6[2];
          }
          auVar12 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar23,1);
          if (auVar12 == (undefined1  [8])0x0) {
            auStack_158 = (undefined1  [8])0x0;
            plStack_150 = (long *)0x0;
            func_0x048b0d20(auStack_158);
            auVar12 = auStack_158;
            plVar18 = plStack_150;
          }
          lStack_128 = 0;
          puStack_120 = (undefined *)0x0;
          lStack_138 = 0;
          lStack_130 = 0;
          pcStack_148 = (code *)0x0;
          pcStack_140 = (code *)0x0;
          auStack_158 = (undefined1  [8])0x0;
          plStack_150 = (long *)0x0;
          puStack_168 = (undefined *)auVar12;
          plStack_160 = plVar18;
          func_0x05d84ba0(auStack_158);
          func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
          if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0)))
          {
            if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
              bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
            }
            else {
              pppppppuVar22 = pppppppuStack_f8;
              if (cStack_d4 == '\x02') {
                pppppppuVar22 = &pppppppuStack_f8;
              }
              lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
              bVar30 = lVar8 != 0;
            }
          }
          else {
            bVar30 = false;
          }
          if (pcStack_1a0 != (code *)0x0) {
            (*pcStack_1a0)(&uStack_1b8);
          }
          if (pcStack_140 != (code *)0x0) {
            (*pcStack_140)(auStack_158);
          }
          if (bVar30) {
            lVar8 = puStack_110[5];
            puVar19 = puVar10 + 1;
            if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
              (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))(auStack_158,puVar19);
            }
            *(undefined4 *)(puVar10 + 2) = 0;
            *puVar19 = 0;
            *(undefined4 *)(puVar10 + 8) = 3;
            pcStack_1a8 = (code *)&UNK_081d4e60;
            pcStack_1a0 = (code *)0x0;
            uStack_198 = CONCAT35(uStack_198._5_3_,0x3da571ce8);
            lStack_188 = 0;
            puStack_180 = &UNK_081d4d80;
            lStack_138 = plStack_108[4];
            auStack_158 = (undefined1  [8])*plStack_108;
            plStack_150 = (long *)plStack_108[1];
            pcStack_148 = (code *)plStack_108[2];
            pcStack_140 = (code *)plStack_108[3];
            plVar18 = (long *)plStack_108[2];
            uStack_1b8 = puVar19;
            lStack_190 = lVar8;
            if (plVar18 == (long *)0x0) {
              pcStack_148 = (code *)0x0;
            }
            else {
              pcStack_148 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,3);
            }
            puStack_168 = &UNK_0f10ca40;
            func_0x0ed75bc0(&puStack_168,plVar27,&uStack_1b8,uStack_100,auStack_158);
            if (pcStack_1a0 != (code *)0x0) {
              (*pcStack_1a0)(&uStack_1b8);
            }
          }
          else {
            plVar18 = (long *)puStack_110[5];
            if (DAT_0f5c99c0 == '\0') {
              iVar4 = func_0x04108328(&DAT_0f5c99c0);
              if (iVar4 != 0) {
                func_0x081d5f90();
                func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9940,0xf53dab8);
                func_0x0410844d(&DAT_0f5c99c0);
              }
            }
            plVar6 = (long *)(*plVar18 +
                             (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                                    *(uint *)(_DAT_0f5c9940 + 4)) * 8);
            do {
              lVar8 = *plVar6;
              if (lVar8 == -1) {
                plVar14 = (long *)plVar18[4];
                plVar6 = plVar14;
                goto LAB_081ed5c2;
              }
              plVar6 = (long *)(plVar18[3] + lVar8 * 0x18);
            } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c9940 + 4));
            plVar14 = (long *)plVar18[4];
LAB_081ed5c2:
            if (plVar6 == plVar14) {
              puVar26 = &DAT_0f5c9940;
            }
            else {
              puVar26 = (undefined *)plVar6[2];
            }
            auVar12 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar23,1);
            if (auVar12 == (undefined1  [8])0x0) {
              auStack_158 = (undefined1  [8])0x0;
              plStack_150 = (long *)0x0;
              func_0x048b0d20(auStack_158);
              auVar12 = auStack_158;
              plVar18 = plStack_150;
            }
            lStack_128 = 0;
            puStack_120 = (undefined *)0x0;
            lStack_138 = 0;
            lStack_130 = 0;
            pcStack_148 = (code *)0x0;
            pcStack_140 = (code *)0x0;
            auStack_158 = (undefined1  [8])0x0;
            plStack_150 = (long *)0x0;
            puStack_168 = (undefined *)auVar12;
            plStack_160 = plVar18;
            func_0x05d84ba0(auStack_158);
            func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
            if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))
               ) {
              if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
              }
              else {
                pppppppuVar22 = pppppppuStack_f8;
                if (cStack_d4 == '\x02') {
                  pppppppuVar22 = &pppppppuStack_f8;
                }
                lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                bVar30 = lVar8 != 0;
              }
            }
            else {
              bVar30 = false;
            }
            if (pcStack_1a0 != (code *)0x0) {
              (*pcStack_1a0)(&uStack_1b8);
            }
            if (pcStack_140 != (code *)0x0) {
              (*pcStack_140)(auStack_158);
            }
            if (bVar30) {
              lVar8 = puStack_110[5];
              puVar19 = puVar10 + 1;
              if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
                (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))
                          (auStack_158,puVar19);
              }
              *(undefined4 *)(puVar10 + 2) = 0;
              *puVar19 = 0;
              *(undefined4 *)(puVar10 + 8) = 4;
              pcStack_1a8 = (code *)&UNK_081d61d0;
              pcStack_1a0 = (code *)0x0;
              uStack_198 = CONCAT35(uStack_198._5_3_,0x368cd003f);
              lStack_188 = 0;
              puStack_180 = &UNK_081d60f0;
              lStack_138 = plStack_108[4];
              auStack_158 = (undefined1  [8])*plStack_108;
              plStack_150 = (long *)plStack_108[1];
              pcStack_148 = (code *)plStack_108[2];
              pcStack_140 = (code *)plStack_108[3];
              plVar18 = (long *)plStack_108[2];
              uStack_1b8 = puVar19;
              lStack_190 = lVar8;
              if (plVar18 == (long *)0x0) {
                pcStack_148 = (code *)0x0;
              }
              else {
                pcStack_148 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,4);
              }
              puStack_168 = &UNK_0f10cac0;
              func_0x0ed75bc0(&puStack_168,plVar27,&uStack_1b8,uStack_100,auStack_158);
              if (pcStack_1a0 != (code *)0x0) {
                (*pcStack_1a0)(&uStack_1b8);
              }
            }
            else {
              plVar18 = (long *)puStack_110[5];
              if (DAT_0f5c9a78 == '\0') {
                iVar4 = func_0x04108328(&DAT_0f5c9a78);
                if (iVar4 != 0) {
                  func_0x081d7300();
                  func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c99f8,0xf53dab8);
                  func_0x0410844d(&DAT_0f5c9a78);
                }
              }
              plVar6 = (long *)(*plVar18 +
                               (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                                      *(uint *)(_DAT_0f5c99f8 + 4)) * 8);
              do {
                lVar8 = *plVar6;
                if (lVar8 == -1) {
                  plVar14 = (long *)plVar18[4];
                  plVar6 = plVar14;
                  goto LAB_081ed878;
                }
                plVar6 = (long *)(plVar18[3] + lVar8 * 0x18);
              } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c99f8 + 4));
              plVar14 = (long *)plVar18[4];
LAB_081ed878:
              if (plVar6 == plVar14) {
                puVar26 = &DAT_0f5c99f8;
              }
              else {
                puVar26 = (undefined *)plVar6[2];
              }
              auVar12 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar23,1);
              if (auVar12 == (undefined1  [8])0x0) {
                auStack_158 = (undefined1  [8])0x0;
                plStack_150 = (long *)0x0;
                func_0x048b0d20(auStack_158);
                auVar12 = auStack_158;
                plVar18 = plStack_150;
              }
              lStack_128 = 0;
              puStack_120 = (undefined *)0x0;
              lStack_138 = 0;
              lStack_130 = 0;
              pcStack_148 = (code *)0x0;
              pcStack_140 = (code *)0x0;
              auStack_158 = (undefined1  [8])0x0;
              plStack_150 = (long *)0x0;
              puStack_168 = (undefined *)auVar12;
              plStack_160 = plVar18;
              func_0x05d84ba0(auStack_158);
              func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
              if ((lStack_190 == lStack_d0) &&
                 ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                  bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                }
                else {
                  pppppppuVar22 = pppppppuStack_f8;
                  if (cStack_d4 == '\x02') {
                    pppppppuVar22 = &pppppppuStack_f8;
                  }
                  lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                  bVar30 = lVar8 != 0;
                }
              }
              else {
                bVar30 = false;
              }
              if (pcStack_1a0 != (code *)0x0) {
                (*pcStack_1a0)(&uStack_1b8);
              }
              if (pcStack_140 != (code *)0x0) {
                (*pcStack_140)(auStack_158);
              }
              if (bVar30) {
                lVar8 = puStack_110[5];
                puVar19 = puVar10 + 1;
                if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
                  (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))
                            (auStack_158,puVar19);
                }
                *(undefined1 *)(puVar10 + 1) = 0;
                *(undefined4 *)(puVar10 + 8) = 5;
                pcStack_1a8 = (code *)&UNK_081d7540;
                pcStack_1a0 = (code *)0x0;
                uStack_198 = CONCAT35(uStack_198._5_3_,0x342bf2c8e);
                lStack_188 = 0;
                puStack_180 = &UNK_081d7460;
                lStack_138 = plStack_108[4];
                auStack_158 = (undefined1  [8])*plStack_108;
                plStack_150 = (long *)plStack_108[1];
                pcStack_148 = (code *)plStack_108[2];
                pcStack_140 = (code *)plStack_108[3];
                plVar18 = (long *)plStack_108[2];
                uStack_1b8 = puVar19;
                lStack_190 = lVar8;
                if (plVar18 == (long *)0x0) {
                  pcStack_148 = (code *)0x0;
                }
                else {
                  pcStack_148 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,5);
                }
                puStack_168 = &UNK_0f10cb40;
                func_0x0ed75bc0(&puStack_168,plVar27,&uStack_1b8,uStack_100,auStack_158);
                if (pcStack_1a0 != (code *)0x0) {
                  (*pcStack_1a0)(&uStack_1b8);
                }
              }
              else {
                plVar18 = (long *)puStack_110[5];
                if (DAT_0f5c9b30 == '\0') {
                  iVar4 = func_0x04108328(&DAT_0f5c9b30);
                  if (iVar4 != 0) {
                    func_0x081d8620();
                    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9ab0,0xf53dab8);
                    func_0x0410844d(&DAT_0f5c9b30);
                  }
                }
                plVar6 = (long *)(*plVar18 +
                                 (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                                        *(uint *)(_DAT_0f5c9ab0 + 4)) * 8);
                do {
                  lVar8 = *plVar6;
                  if (lVar8 == -1) {
                    plVar14 = (long *)plVar18[4];
                    plVar6 = plVar14;
                    goto LAB_081edb26;
                  }
                  plVar6 = (long *)(plVar18[3] + lVar8 * 0x18);
                } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c9ab0 + 4));
                plVar14 = (long *)plVar18[4];
LAB_081edb26:
                if (plVar6 == plVar14) {
                  puVar26 = &DAT_0f5c9ab0;
                }
                else {
                  puVar26 = (undefined *)plVar6[2];
                }
                auVar12 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar23,1);
                if (auVar12 == (undefined1  [8])0x0) {
                  auStack_158 = (undefined1  [8])0x0;
                  plStack_150 = (long *)0x0;
                  func_0x048b0d20(auStack_158);
                  auVar12 = auStack_158;
                  plVar18 = plStack_150;
                }
                lStack_128 = 0;
                puStack_120 = (undefined *)0x0;
                lStack_138 = 0;
                lStack_130 = 0;
                pcStack_148 = (code *)0x0;
                pcStack_140 = (code *)0x0;
                auStack_158 = (undefined1  [8])0x0;
                plStack_150 = (long *)0x0;
                puStack_168 = (undefined *)auVar12;
                plStack_160 = plVar18;
                func_0x05d84ba0(auStack_158);
                func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                if ((lStack_190 == lStack_d0) &&
                   ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                  if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                    bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                  }
                  else {
                    pppppppuVar22 = pppppppuStack_f8;
                    if (cStack_d4 == '\x02') {
                      pppppppuVar22 = &pppppppuStack_f8;
                    }
                    lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                    bVar30 = lVar8 != 0;
                    plVar27 = plStack_b8;
                  }
                }
                else {
                  bVar30 = false;
                }
                if (pcStack_1a0 != (code *)0x0) {
                  (*pcStack_1a0)(&uStack_1b8);
                }
                if (pcStack_140 != (code *)0x0) {
                  (*pcStack_140)(auStack_158);
                }
                if (bVar30) {
                  lVar8 = puStack_110[5];
                  puVar19 = puVar10 + 1;
                  if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
                    (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))
                              (auStack_158,puVar19);
                  }
                  *puVar19 = 0;
                  puVar10[2] = 0;
                  *(undefined4 *)(puVar10 + 2) = 0x3f800000;
                  *(undefined1 *)((long)puVar10 + 0x14) = 0x14;
                  *(undefined4 *)(puVar10 + 8) = 6;
                  pcStack_1a8 = (code *)&UNK_081d8860;
                  pcStack_1a0 = (code *)0x0;
                  uStack_198 = CONCAT35(uStack_198._5_3_,0x36cb0b0a7);
                  lStack_188 = 0;
                  puStack_180 = &UNK_081d8780;
                  lStack_138 = plStack_108[4];
                  auStack_158 = (undefined1  [8])*plStack_108;
                  plStack_150 = (long *)plStack_108[1];
                  pcStack_148 = (code *)plStack_108[2];
                  pcStack_140 = (code *)plStack_108[3];
                  plVar18 = (long *)plStack_108[2];
                  uStack_1b8 = puVar19;
                  lStack_190 = lVar8;
                  if (plVar18 == (long *)0x0) {
                    pcStack_148 = (code *)0x0;
                  }
                  else {
                    pcStack_148 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,6);
                  }
                  puStack_168 = &UNK_0f10cbc0;
                  func_0x0ed75bc0(&puStack_168,plVar27,&uStack_1b8,uStack_100,auStack_158);
                  if (pcStack_1a0 != (code *)0x0) {
                    (*pcStack_1a0)(&uStack_1b8);
                  }
                }
                else {
                  plVar18 = (long *)puStack_110[5];
                  if (DAT_0f5c9be8 == '\0') {
                    iVar4 = func_0x04108328(&DAT_0f5c9be8);
                    if (iVar4 != 0) {
                      func_0x081da750();
                      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9b68,0xf53dab8);
                      func_0x0410844d(&DAT_0f5c9be8);
                    }
                  }
                  plVar6 = (long *)(*plVar18 +
                                   (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                                          *(uint *)(_DAT_0f5c9b68 + 4)) * 8);
                  do {
                    lVar8 = *plVar6;
                    if (lVar8 == -1) {
                      plVar14 = (long *)plVar18[4];
                      plVar6 = plVar14;
                      goto LAB_081edde2;
                    }
                    plVar6 = (long *)(plVar18[3] + lVar8 * 0x18);
                  } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5c9b68 + 4))
                  ;
                  plVar14 = (long *)plVar18[4];
LAB_081edde2:
                  if (plVar6 == plVar14) {
                    puVar26 = &DAT_0f5c9b68;
                  }
                  else {
                    puVar26 = (undefined *)plVar6[2];
                  }
                  auVar12 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar23,1);
                  if (auVar12 == (undefined1  [8])0x0) {
                    auStack_158 = (undefined1  [8])0x0;
                    plStack_150 = (long *)0x0;
                    func_0x048b0d20(auStack_158);
                    auVar12 = auStack_158;
                    plVar18 = plStack_150;
                  }
                  lStack_128 = 0;
                  puStack_120 = (undefined *)0x0;
                  lStack_138 = 0;
                  lStack_130 = 0;
                  pcStack_148 = (code *)0x0;
                  pcStack_140 = (code *)0x0;
                  auStack_158 = (undefined1  [8])0x0;
                  plStack_150 = (long *)0x0;
                  puStack_168 = (undefined *)auVar12;
                  plStack_160 = plVar18;
                  func_0x05d84ba0(auStack_158);
                  func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                  if ((lStack_190 == lStack_d0) &&
                     ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                    if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                      bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                    }
                    else {
                      pppppppuVar22 = pppppppuStack_f8;
                      if (cStack_d4 == '\x02') {
                        pppppppuVar22 = &pppppppuStack_f8;
                      }
                      lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                      bVar30 = lVar8 != 0;
                      plVar27 = plStack_b8;
                    }
                  }
                  else {
                    bVar30 = false;
                  }
                  if (pcStack_1a0 != (code *)0x0) {
                    (*pcStack_1a0)(&uStack_1b8);
                  }
                  if (pcStack_140 != (code *)0x0) {
                    (*pcStack_140)(auStack_158);
                  }
                  if (bVar30) {
                    lVar8 = puStack_110[5];
                    puVar19 = puVar10 + 1;
                    if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
                      (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))
                                (auStack_158,puVar19);
                    }
                    *(undefined8 *)((long)puVar10 + 0xc) = 0;
                    *(undefined4 *)(puVar10 + 1) = 0x3f800000;
                    *(undefined4 *)((long)puVar10 + 0x14) = 0x3f800000;
                    *(undefined4 *)(puVar10 + 8) = 7;
                    pcStack_1a8 = (code *)&UNK_081da990;
                    pcStack_1a0 = (code *)0x0;
                    uStack_198 = CONCAT35(uStack_198._5_3_,0x3eabeda7f);
                    lStack_188 = 0;
                    puStack_180 = &UNK_081da8b0;
                    lStack_138 = plStack_108[4];
                    auStack_158 = (undefined1  [8])*plStack_108;
                    plStack_150 = (long *)plStack_108[1];
                    pcStack_148 = (code *)plStack_108[2];
                    pcStack_140 = (code *)plStack_108[3];
                    plVar18 = (long *)plStack_108[2];
                    uStack_1b8 = puVar19;
                    lStack_190 = lVar8;
                    if (plVar18 == (long *)0x0) {
                      pcStack_148 = (code *)0x0;
                    }
                    else {
                      pcStack_148 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,7);
                    }
                    puStack_168 = &UNK_0f10cc40;
                    func_0x0ed75bc0(&puStack_168,plVar27,&uStack_1b8,uStack_100,auStack_158);
                    if (pcStack_1a0 != (code *)0x0) {
                      (*pcStack_1a0)(&uStack_1b8);
                    }
                  }
                  else {
                    plVar18 = (long *)puStack_110[5];
                    if (DAT_0f5c9ca0 == '\0') {
                      iVar4 = func_0x04108328(&DAT_0f5c9ca0);
                      if (iVar4 != 0) {
                        func_0x081dc6e0();
                        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9c20,0xf53dab8);
                        func_0x0410844d(&DAT_0f5c9ca0);
                      }
                    }
                    plVar6 = (long *)(*plVar18 +
                                     (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                                            *(uint *)(_DAT_0f5c9c20 + 4)) * 8);
                    do {
                      lVar8 = *plVar6;
                      if (lVar8 == -1) {
                        plVar14 = (long *)plVar18[4];
                        plVar6 = plVar14;
                        goto LAB_081ee0a3;
                      }
                      plVar6 = (long *)(plVar18[3] + lVar8 * 0x18);
                    } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) !=
                             *(uint *)(_DAT_0f5c9c20 + 4));
                    plVar14 = (long *)plVar18[4];
LAB_081ee0a3:
                    if (plVar6 == plVar14) {
                      puVar26 = &DAT_0f5c9c20;
                    }
                    else {
                      puVar26 = (undefined *)plVar6[2];
                    }
                    auVar12 = (undefined1  [8])func_0x048b0c90(plVar18,puVar26,uVar23,1);
                    if (auVar12 == (undefined1  [8])0x0) {
                      auStack_158 = (undefined1  [8])0x0;
                      plStack_150 = (long *)0x0;
                      func_0x048b0d20(auStack_158);
                      auVar12 = auStack_158;
                      plVar18 = plStack_150;
                    }
                    lStack_128 = 0;
                    puStack_120 = (undefined *)0x0;
                    lStack_138 = 0;
                    lStack_130 = 0;
                    pcStack_148 = (code *)0x0;
                    pcStack_140 = (code *)0x0;
                    auStack_158 = (undefined1  [8])0x0;
                    plStack_150 = (long *)0x0;
                    puStack_168 = (undefined *)auVar12;
                    plStack_160 = plVar18;
                    func_0x05d84ba0(auStack_158);
                    func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                    if ((lStack_190 == lStack_d0) &&
                       ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                      if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                        bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                      }
                      else {
                        pppppppuVar22 = pppppppuStack_f8;
                        if (cStack_d4 == '\x02') {
                          pppppppuVar22 = &pppppppuStack_f8;
                        }
                        lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                        bVar30 = lVar8 != 0;
                        plVar27 = plStack_b8;
                      }
                    }
                    else {
                      bVar30 = false;
                    }
                    if (pcStack_1a0 != (code *)0x0) {
                      (*pcStack_1a0)(&uStack_1b8);
                    }
                    if (pcStack_140 != (code *)0x0) {
                      (*pcStack_140)(auStack_158);
                    }
                    if (bVar30) {
                      lVar8 = puStack_110[5];
                      puVar19 = puVar10 + 1;
                      if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
                        (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))
                                  (auStack_158,puVar19);
                      }
                      puVar10[1] = _DAT_014e5300;
                      puVar10[2] = 0x143f800000;
                      *(undefined4 *)(puVar10 + 8) = 8;
                      pcStack_1a8 = (code *)&UNK_081dc930;
                      pcStack_1a0 = (code *)0x0;
                      uStack_198 = CONCAT35(uStack_198._5_3_,0x3920735b4);
                      lStack_188 = 0;
                      puStack_180 = &UNK_081dc850;
                      lStack_138 = plStack_108[4];
                      auStack_158 = (undefined1  [8])*plStack_108;
                      plStack_150 = (long *)plStack_108[1];
                      pcStack_148 = (code *)plStack_108[2];
                      pcStack_140 = (code *)plStack_108[3];
                      plVar18 = (long *)plStack_108[2];
                      uStack_1b8 = puVar19;
                      lStack_190 = lVar8;
                      if (plVar18 == (long *)0x0) {
                        pcStack_148 = (code *)0x0;
                      }
                      else {
                        pcStack_148 = (code *)(**(code **)(*plVar18 + 0x30))(plVar18,8);
                      }
                      puStack_168 = &UNK_0f10ccc0;
                      func_0x0ed75bc0(&puStack_168,plVar27,&uStack_1b8,uStack_100,auStack_158);
                      if (pcStack_1a0 != (code *)0x0) {
                        (*pcStack_1a0)(&uStack_1b8);
                      }
                    }
                    else {
                      plVar27 = (long *)puStack_110[5];
                      if (DAT_0f5c9d58 == '\0') {
                        iVar4 = func_0x04108328(&DAT_0f5c9d58);
                        if (iVar4 != 0) {
                          func_0x081de370();
                          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9cd8,0xf53dab8);
                          func_0x0410844d(&DAT_0f5c9d58);
                        }
                      }
                      plVar18 = (long *)(*plVar27 +
                                        (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                               *(uint *)(_DAT_0f5c9cd8 + 4)) * 8);
                      do {
                        lVar8 = *plVar18;
                        if (lVar8 == -1) {
                          plVar6 = (long *)plVar27[4];
                          plVar18 = plVar6;
                          goto LAB_081ee368;
                        }
                        plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
                      } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) !=
                               *(uint *)(_DAT_0f5c9cd8 + 4));
                      plVar6 = (long *)plVar27[4];
LAB_081ee368:
                      if (plVar18 == plVar6) {
                        puVar26 = &DAT_0f5c9cd8;
                      }
                      else {
                        puVar26 = (undefined *)plVar18[2];
                      }
                      auVar12 = (undefined1  [8])func_0x048b0c90(plVar27,puVar26,uVar23,1);
                      if (auVar12 == (undefined1  [8])0x0) {
                        auStack_158 = (undefined1  [8])0x0;
                        plStack_150 = (long *)0x0;
                        func_0x048b0d20(auStack_158);
                        auVar12 = auStack_158;
                        plVar27 = plStack_150;
                      }
                      lStack_128 = 0;
                      puStack_120 = (undefined *)0x0;
                      lStack_138 = 0;
                      lStack_130 = 0;
                      pcStack_148 = (code *)0x0;
                      pcStack_140 = (code *)0x0;
                      auStack_158 = (undefined1  [8])0x0;
                      plStack_150 = (long *)0x0;
                      puStack_168 = (undefined *)auVar12;
                      plStack_160 = plVar27;
                      func_0x05d84ba0(auStack_158);
                      func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                      if ((lStack_190 == lStack_d0) &&
                         ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                        if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                          bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                        }
                        else {
                          pppppppuVar22 = &pppppppuStack_f8;
                          if (cStack_d4 != '\x02') {
                            pppppppuVar22 = pppppppuStack_f8;
                          }
                          lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                          bVar30 = lVar8 != 0;
                        }
                      }
                      else {
                        bVar30 = false;
                      }
                      if (pcStack_1a0 != (code *)0x0) {
                        (*pcStack_1a0)(&uStack_1b8);
                      }
                      if (pcStack_140 != (code *)0x0) {
                        (*pcStack_140)(auStack_158);
                      }
                      if (bVar30) {
                        lVar8 = puStack_110[5];
                        puVar19 = puVar10 + 1;
                        if ((ulong)*(uint *)(puVar10 + 8) != 0xffffffff) {
                          (**(code **)(&UNK_0f10a648 + (ulong)*(uint *)(puVar10 + 8) * 8))
                                    (auStack_158,puVar19);
                        }
                        *puVar19 = 0;
                        puVar10[2] = 0;
                        *(undefined4 *)(puVar10 + 2) = 0x3f800000;
                        *(undefined1 *)((long)puVar10 + 0x14) = 0x14;
                        *(undefined4 *)(puVar10 + 8) = 9;
                        pcStack_1a8 = (code *)&UNK_081de5b0;
                        pcStack_1a0 = (code *)0x0;
                        uStack_198 = CONCAT35(uStack_198._5_3_,0x30da932c0);
                        lStack_188 = 0;
                        puStack_180 = &UNK_081de4d0;
                        lStack_138 = plStack_108[4];
                        auStack_158 = (undefined1  [8])*plStack_108;
                        plStack_150 = (long *)plStack_108[1];
                        pcStack_148 = (code *)plStack_108[2];
                        pcStack_140 = (code *)plStack_108[3];
                        plVar27 = (long *)plStack_108[2];
                        uStack_1b8 = puVar19;
                        lStack_190 = lVar8;
                        if (plVar27 == (long *)0x0) {
                          pcStack_148 = (code *)0x0;
                        }
                        else {
                          pcStack_148 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,9);
                        }
                        puStack_168 = &UNK_0f10cd40;
                        func_0x0ed75bc0(&puStack_168,plStack_b8,&uStack_1b8,uStack_100,auStack_158);
                        if (pcStack_1a0 != (code *)0x0) {
                          (*pcStack_1a0)(&uStack_1b8);
                        }
                      }
                      else if ((*(uint *)(puStack_68 + 0x56) == 0xffffffff) ||
                              (*(uint *)(puStack_68 + 0x56) < (uint)uStack_60)) {
                        uStack_80 = 0x2300000149614c;
                        func_0x0ed5ffe0(*plStack_108,8,&uStack_80);
                        if ((uStack_80 & 0x80000000000000) != 0) {
                          (**(code **)(_DAT_0f5463b0 + 0x28))
                                    (&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
                        }
                        uStack_80 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (pcStack_e0 != (code *)0x0) {
      (*pcStack_e0)(&pppppppuStack_f8);
    }
  }
LAB_081ee73b:
  if (((ulong)uStack_a8 & 1) != 0) {
    func_0x0412a280(pcStack_98,(ulong)uStack_a8 & 0xfffffffffffffffe);
  }
  return;
}


