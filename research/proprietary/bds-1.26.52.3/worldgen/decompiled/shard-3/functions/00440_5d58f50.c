/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5e58f50 (ELF vaddr 0x5d58f50)
 * Label: caller-of-callee
 * Body:  [[05e58f50, 05e59710] [05e59720, 05e5bb1f] [05e5c1b0, 05e5c682]]
 * Ghidra: FUN_05e58f50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05e58f50(long *param_1,undefined8 *******param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [8];
  undefined8 uVar12;
  byte *pbVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  code *pcVar17;
  undefined8 ******ppppppuVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 ******ppppppuVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *******pppppppuVar24;
  uint uVar25;
  undefined *puVar26;
  byte *pbVar27;
  undefined8 ******ppppppuVar28;
  long lVar29;
  long *plVar30;
  bool bVar31;
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
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  code *pcStack_e0;
  int iStack_d8;
  char cStack_d4;
  long lStack_d0;
  long lStack_c0;
  long *plStack_b8;
  undefined8 *******pppppppuStack_b0;
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
  
  bVar2 = (**(code **)(*param_1 + 0x18))();
  if ((bVar2 & 2) != 0) {
    cVar3 = *(char *)((long)param_3 + 0x24);
    puVar5 = (undefined8 *)*param_3;
    puVar15 = puVar5;
    if (cVar3 == '\x02') {
      puVar15 = param_3;
    }
    if (puVar15 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x79eac1c6) {
      uVar12 = param_3[5];
      lVar9 = param_3[6];
      if (lVar9 == 0) {
        uStack_60 = 0x5e5c20f;
        (*(code *)param_3[7])(0,param_3,0);
        lVar9 = param_3[6];
        cVar3 = *(char *)((long)param_3 + 0x24);
        puVar5 = (undefined8 *)*param_3;
      }
      if (cVar3 == '\x02') {
        puVar5 = param_3;
      }
      uStack_60 = 0x5e5c231;
      puVar15 = (undefined8 *)func_0x0488e200(uVar12,lVar9,0x79eac1c6,puVar5);
    }
    uStack_60 = 0x5e5c241;
    func_0x0ed6d600(auStack_40,*param_5);
    bVar2 = *(byte *)(param_1 + 1) | *(byte *)((long)param_1 + 9);
    *(byte *)((long)param_1 + 9) = bVar2 | 1;
    uStack_60 = 0x5e5c25e;
    uVar22 = (**(code **)(*param_1 + 0x98))(param_1);
    *(byte *)((long)param_1 + 9) = bVar2;
    if ((uVar22 >> 0x20 & 1) == 0) {
      uVar23 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x5e5c29e;
      uStack_60 = uVar23;
      cVar3 = func_0x05e5d0e0(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c2cc;
      uStack_60 = uVar23;
      cVar3 = func_0x05e5d2f0(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c2fa;
      uStack_60 = uVar23;
      cVar3 = func_0x05e5d510(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c328;
      uStack_60 = uVar23;
      cVar3 = func_0x05e5d730(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c356;
      uStack_60 = uVar23;
      cVar3 = func_0x05e5d950(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c384;
      uStack_60 = uVar23;
      cVar3 = func_0x05e5db70(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c3b2;
      uStack_60 = uVar23;
      cVar3 = func_0x05e5dda0(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c3e0;
      uStack_60 = uVar23;
      cVar3 = func_0x05e5dfc0(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c40e;
      uStack_60 = uVar23;
      cVar3 = func_0x05e5e1e0(param_1,param_3[5],puVar15,param_4,param_5,10);
      if (cVar3 != '\0') {
        return;
      }
      uVar12 = param_3[5];
      uVar22 = 10;
      uStack_60 = uVar23;
    }
    else {
      if (9 < (uint)uVar22) {
        uStack_48 = 0x2d000001258dae;
        uStack_60 = 0x5e5c650;
        func_0x0ed5ffe0(*param_5,8,&uStack_48);
        if ((uStack_48 >> 0x37 & 1) == 0) {
          return;
        }
        uStack_60 = 0x5e5c674;
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
        return;
      }
      uStack_60 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x5e5c479;
      uStack_50 = uStack_60;
      cVar3 = func_0x05e5d0e0(param_1,param_3[5],puVar15,param_4,param_5,uVar22 & 0xff);
      if (cVar3 != '\0') {
        return;
      }
      uVar22 = uVar22 & 0xff;
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c4aa;
      cVar3 = func_0x05e5d2f0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c4d7;
      cVar3 = func_0x05e5d510(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c504;
      cVar3 = func_0x05e5d730(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c531;
      cVar3 = func_0x05e5d950(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c55e;
      cVar3 = func_0x05e5db70(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c58b;
      cVar3 = func_0x05e5dda0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c5b8;
      cVar3 = func_0x05e5dfc0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e5c5e5;
      cVar3 = func_0x05e5e1e0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uVar12 = param_3[5];
      uStack_60 = uStack_50;
    }
    puStack_68 = puStack_58;
    uStack_70 = 0x5e5c612;
    func_0x05e5e410(param_1,uVar12,puVar15,param_4,param_5,uVar22);
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
  uStack_110 = param_4;
  func_0x0ed6d600(&puStack_68,*param_5);
  uStack_48 = param_3[5];
  lVar9 = *param_5;
  ppppppuVar28 = (undefined8 ******)((long)param_2 + 9);
  bVar31 = (*(byte *)(param_2 + 1) & 1) == 0;
  ppppppuVar18 = param_2[3];
  if (bVar31) {
    ppppppuVar18 = ppppppuVar28;
  }
  ppppppuVar21 = (undefined8 ******)(ulong)(*(byte *)(param_2 + 1) >> 1);
  if (!bVar31) {
    ppppppuVar21 = param_2[2];
  }
  plStack_108 = param_5;
  puStack_100 = param_3;
  plStack_b8 = param_1;
  pppppppuStack_b0 = param_2;
  if (ppppppuVar18 == (undefined8 ******)0x0) {
    puStack_168 = (undefined *)((ulong)((uint)ppppppuVar21 & 0x7f) << 0x30);
  }
  else if (ppppppuVar21 < (undefined8 ******)0x80) {
    puStack_168 = (undefined *)
                  ((long)ppppppuVar21 << 0x30 | (ulong)ppppppuVar18 & 0xff00ffffffffffff);
  }
  else {
    lVar29 = (long)ppppppuVar21 + 9;
    lStack_88 = lVar9;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
    if (puVar5 == (undefined8 *)0x0 && lVar29 != 0) {
      FUN_0eec74c0(lVar29,8);
    }
    *puVar5 = ppppppuVar21;
    func_0x0eee2f00(puVar5 + 1,ppppppuVar18,ppppppuVar21);
    *(undefined1 *)((long)puVar5 + (long)(ppppppuVar21 + 1)) = 0;
    puStack_168 = (undefined *)((ulong)(puVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    lVar9 = lStack_88;
  }
  plVar30 = plStack_b8;
  puVar6 = (uint *)func_0x0ed6d180(lVar9,&puStack_168,0);
  puVar5 = puStack_100;
  if (((ulong)puStack_168 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_168 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_168 = (undefined *)0x0;
  bVar31 = (*(byte *)(pppppppuStack_b0 + 1) & 1) == 0;
  ppppppuVar18 = pppppppuStack_b0[3];
  if (bVar31) {
    ppppppuVar18 = ppppppuVar28;
  }
  ppppppuVar21 = (undefined8 ******)(ulong)(*(byte *)(pppppppuStack_b0 + 1) >> 1);
  if (!bVar31) {
    ppppppuVar21 = pppppppuStack_b0[2];
  }
  cVar3 = (**(code **)(*plVar30 + 0xb8))(plVar30,ppppppuVar18,ppppppuVar21);
  if (cVar3 == '\0') {
    _auStack_158 = (*(code *)*pppppppuStack_b0)(uStack_48);
    func_0x0ed8bc80(&uStack_1b8,auStack_158,*(undefined1 *)(lVar9 + 0x2aa));
    uVar22 = (ulong)uStack_1b8 >> 1 & 0x7f;
    pcVar1 = (code *)((long)&uStack_1b8 + 1);
    if (((ulong)uStack_1b8 & 1) != 0) {
      uVar22 = uStack_1b0;
      pcVar1 = pcStack_1a8;
    }
    pppppppuStack_f8 = (undefined8 *******)0x0;
    if (pcVar1 == (code *)0x0) {
      pppppppuStack_f8 = (undefined8 *******)((ulong)((uint)uVar22 & 0x7f) << 0x30);
    }
    else {
      lVar29 = uVar22 + 9;
      lStack_88 = lVar9;
      puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
      if (lVar29 != 0 && puVar8 == (ulong *)0x0) {
        FUN_0eec74c0(lVar29,8);
      }
      *puVar8 = uVar22;
      func_0x0eee2f00(puVar8 + 1,pcVar1,uVar22);
      *(undefined1 *)((long)puVar8 + uVar22 + 8) = 0;
      pppppppuStack_f8 =
           (undefined8 *******)((ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      lVar9 = lStack_88;
    }
    plVar30 = plStack_b8;
    func_0x0ed5ffe0(lVar9,8,&pppppppuStack_f8);
    puVar5 = puStack_100;
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
    (**(code **)(*plVar30 + 0x80))(auStack_158,plVar30,0x40);
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
      pppppppuStack_f8 = (undefined8 *******)pppppppuStack_b0[3];
      ppppppuStack_f0 = pppppppuStack_b0[2];
      if ((*(byte *)(pppppppuStack_b0 + 1) & 1) == 0) {
        pppppppuStack_f8 = (undefined8 *******)ppppppuVar28;
        ppppppuStack_f0 = (undefined8 ******)(ulong)(*(byte *)(pppppppuStack_b0 + 1) >> 1);
      }
      func_0x0470d9a0(auStack_158,&UNK_01377405,0x15,0xd);
      plVar30 = (long *)((ulong)auStack_158 >> 1 & 0x7f);
      pcVar1 = (code *)(auStack_158 + 1);
      if (((ulong)auStack_158 & 1) != 0) {
        plVar30 = plStack_150;
        pcVar1 = pcStack_148;
      }
      pppppppuStack_f8 = (undefined8 *******)0x0;
      if (pcVar1 == (code *)0x0) {
        pppppppuStack_f8 = (undefined8 *******)((ulong)((uint)plVar30 & 0x7f) << 0x30);
      }
      else {
        lVar29 = (long)plVar30 + 9;
        lStack_88 = lVar9;
        puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
        if (lVar29 != 0 && puVar8 == (ulong *)0x0) {
          FUN_0eec74c0(lVar29,8);
        }
        *puVar8 = (ulong)plVar30;
        func_0x0eee2f00(puVar8 + 1,pcVar1,plVar30);
        *(undefined1 *)((long)puVar8 + (long)plVar30 + 8U) = 0;
        pppppppuStack_f8 =
             (undefined8 *******)((ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        lVar9 = lStack_88;
      }
      plVar30 = plStack_b8;
      func_0x0ed5ffe0(lVar9,8,&pppppppuStack_f8);
      puVar5 = puStack_100;
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
joined_r0x05e596a9:
      if (cStack_178 == '\x01') goto LAB_05e595da;
LAB_05e596af:
      lVar9 = lStack_190;
      if (lStack_190 != 0) {
        while (lVar9 != lStack_188) {
          func_0x048b3e80(lStack_188 + -0x40);
          lStack_188 = lStack_188 + -0x40;
        }
        lStack_188 = lVar9;
        func_0x0412a280(lStack_190,(long)puStack_180 - lStack_190);
      }
      pcVar17 = pcStack_1a8;
      pcVar1 = pcStack_1a0;
      if (pcStack_1a8 == (code *)0x0) goto LAB_05e59761;
      for (; pcVar17 != pcVar1; pcVar1 = pcVar1 + -0x50) {
        if ((pcVar1[-8] == (code)0x1) && (((byte)pcVar1[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(pcVar1 + -0x20),
                          *(ulong *)(pcVar1 + -0x30) & 0xfffffffffffffffe);
        }
      }
      pcStack_1a0 = pcVar17;
      uVar22 = uStack_198 - (long)pcStack_1a8;
    }
    else {
      pcStack_1a8 = pcStack_148;
      uStack_1b8 = (undefined8 *)auStack_158;
      uStack_1b0 = (ulong)plStack_150;
      plVar20 = (long *)(ulong)(byte)(auStack_158[0] >> 1);
      pcVar1 = (code *)((long)&uStack_1b8 + 1);
      if (((ulong)auStack_158 & 1) != 0) {
        plVar20 = plStack_150;
        pcVar1 = pcStack_148;
      }
      bVar2 = auStack_158[0];
      if (plVar20 != (long *)0x0) {
        plVar7 = (long *)func_0x0eee3290();
        pcVar17 = pcVar1;
        for (uVar22 = (ulong)plVar20 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
          *pcVar17 = *(code *)(*plVar7 + (ulong)(byte)*pcVar17 * 4);
          pcVar17 = pcVar17 + 1;
        }
        if (3 < plVar20) {
          do {
            *pcVar17 = *(code *)(*plVar7 + (ulong)(byte)*pcVar17 * 4);
            pcVar17[1] = *(code *)(*plVar7 + (ulong)(byte)pcVar17[1] * 4);
            pcVar17[2] = *(code *)(*plVar7 + (ulong)(byte)pcVar17[2] * 4);
            pcVar17[3] = *(code *)(*plVar7 + (ulong)(byte)pcVar17[3] * 4);
            pcVar17 = pcVar17 + 4;
          } while (pcVar17 != pcVar1 + (long)plVar20);
        }
        bVar2 = (byte)uStack_1b8;
      }
      if ((bVar2 & 1) != 0) {
        func_0x0412e5e0(&uStack_a8,pcStack_1a8,uStack_1b0);
        goto joined_r0x05e596a9;
      }
      pcStack_98 = pcStack_1a8;
      uStack_a8 = uStack_1b8;
      uStack_a0 = uStack_1b0;
      if (cStack_178 != '\x01') goto LAB_05e596af;
LAB_05e595da:
      if (((ulong)uStack_1b8 & 1) == 0) goto LAB_05e59761;
      uVar22 = (ulong)uStack_1b8 & 0xfffffffffffffffe;
    }
    func_0x0412a280(pcStack_1a8,uVar22);
  }
LAB_05e59761:
  (**(code **)(*plVar30 + 0xd0))(plVar30);
  lVar9 = *(long *)(puVar6 + 2);
  uVar25 = *(uint *)(lVar9 + 0x1c + (ulong)*puVar6 * 0x20);
  *puVar6 = uVar25;
  if (puVar6[0x48] == 0) {
    uVar16 = puVar6[4];
LAB_05e597af:
    lVar29 = lVar9 + (ulong)uVar16 * 0x20;
    uVar22 = (ulong)*(uint *)(lVar9 + -0x10 + (ulong)uVar16 * 0x20);
    if (uVar22 != 0xffffffff) {
      (**(code **)(&UNK_0f4e40d0 + uVar22 * 8))(&uStack_1b8,lVar29 + -0x18);
      uVar16 = puVar6[4];
    }
    *(undefined4 *)(lVar29 + -0x10) = 0xffffffff;
    puVar6[4] = uVar16 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar6 + 0x46) + 0x18 + (ulong)(puVar6[0x48] - 1) * 0x30) != uVar25)
          && (uVar16 = puVar6[4], uVar25 == uVar16 - 1)) goto LAB_05e597af;
  if ((*(uint *)(puStack_68 + 0x56) == 0xffffffff) ||
     (*(uint *)(puStack_68 + 0x56) < (uint)uStack_60)) {
    auStack_40 = (*(code *)*pppppppuStack_b0)(puVar5[5]);
    uVar12 = auStack_40._8_8_;
    lVar9 = auStack_40._0_8_;
    uVar22 = (ulong)uStack_a8 >> 1 & 0x7f;
    pcVar1 = (code *)((long)&uStack_a8 + 1);
    if (((ulong)uStack_a8 & 1) != 0) {
      uVar22 = uStack_a0;
      pcVar1 = pcStack_98;
    }
    if (uVar22 == 0) {
      uVar25 = 0x811c9dc5;
    }
    else {
      uVar23 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        uVar25 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar25 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar25 = ((int)(char)pcVar1[uVar19 + 3] ^
                   ((int)(char)pcVar1[uVar19 + 2] ^
                   ((int)(char)pcVar1[uVar19 + 1] ^ ((int)(char)pcVar1[uVar19] ^ uVar25) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar23 != 0) {
        uVar22 = 0;
        do {
          uVar25 = ((int)(char)pcVar1[uVar22 + uVar19] ^ uVar25) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar23 != uVar22);
      }
    }
    if (lVar9 == 0) {
      lVar9 = func_0x048aead0(uVar12);
    }
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar12,lVar9,uVar25,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1b8 = (undefined8 *)0x0;
      uStack_1b0 = 0;
      FUN_048b0d20(&uStack_1b8);
      puStack_58 = uStack_1b8;
      uStack_50 = uStack_1b0;
      if (uStack_1b8 == (undefined8 *)0x0) {
        lVar9 = *plStack_108;
        func_0x0ed8bc80(&uStack_1b8,auStack_40,*(undefined1 *)(lVar9 + 0x2aa));
        uVar12 = func_0x0412f8c0(&uStack_1b8,&UNK_01479aea,10);
        uVar22 = (ulong)uStack_a8 >> 1 & 0x7f;
        pcVar1 = (code *)((long)&uStack_a8 + 1);
        if (((ulong)uStack_a8 & 1) != 0) {
          uVar22 = uStack_a0;
          pcVar1 = pcStack_98;
        }
        uVar12 = func_0x0412f8c0(uVar12,pcVar1,uVar22);
        pbVar13 = (byte *)func_0x0412f8c0(uVar12,&UNK_0125506d,1);
        bVar31 = (*pbVar13 & 1) != 0;
        pbVar27 = pbVar13 + 1;
        if (bVar31) {
          pbVar27 = *(byte **)(pbVar13 + 0x10);
        }
        uVar22 = (ulong)(*pbVar13 >> 1);
        if (bVar31) {
          uVar22 = *(ulong *)(pbVar13 + 8);
        }
        uStack_78 = 0;
        func_0x0ee387f0(&uStack_78,pbVar27,uVar22,1);
        func_0x0ed5ffe0(lVar9,8,&uStack_78);
        func_0x0ee386e0(&uStack_78);
        if (((ulong)uStack_1b8 & 1) != 0) {
          func_0x0412a280(pcStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
        }
        goto LAB_05e5b7b1;
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
    bVar31 = (*(byte *)(pppppppuStack_b0 + 1) & 1) != 0;
    if (bVar31) {
      ppppppuVar28 = pppppppuStack_b0[3];
    }
    ppppppuVar18 = (undefined8 ******)(ulong)(*(byte *)(pppppppuStack_b0 + 1) >> 1);
    if (bVar31) {
      ppppppuVar18 = pppppppuStack_b0[2];
    }
    if (ppppppuVar18 == (undefined8 ******)0x0) {
      uVar25 = 0x811c9dc5;
    }
    else {
      uVar22 = (ulong)((uint)ppppppuVar18 & 3);
      if (ppppppuVar18 < (undefined8 ******)0x4) {
        uVar25 = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uVar25 = 0x811c9dc5;
        uVar23 = 0;
        do {
          uVar25 = ((int)*(char *)((long)ppppppuVar28 + uVar23 + 3) ^
                   ((int)*(char *)((long)ppppppuVar28 + uVar23 + 2) ^
                   ((int)*(char *)((long)ppppppuVar28 + uVar23 + 1) ^
                   ((int)*(char *)((long)ppppppuVar28 + uVar23) ^ uVar25) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)ppppppuVar18 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar22 != 0) {
        uVar19 = 0;
        do {
          uVar25 = ((int)*(char *)((long)ppppppuVar28 + uVar19 + uVar23) ^ uVar25) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar22 != uVar19);
      }
    }
    cVar3 = *(char *)((long)puVar5 + 0x24);
    puVar15 = (undefined8 *)*puVar5;
    puVar10 = puVar15;
    if (cVar3 == '\x02') {
      puVar10 = puVar5;
    }
    if (puVar10 == (undefined8 *)0x0 || *(int *)(puVar5 + 4) != 0x79eac1c6) {
      uVar12 = puVar5[5];
      lVar9 = puVar5[6];
      if (lVar9 == 0) {
        (*(code *)puVar5[7])(0,puVar5,0);
        lVar9 = puVar5[6];
        cVar3 = *(char *)((long)puVar5 + 0x24);
        puVar15 = (undefined8 *)*puVar5;
      }
      if (cVar3 == '\x02') {
        puVar15 = puVar5;
      }
      puVar10 = (undefined8 *)func_0x0488e200(uVar12,lVar9,0x79eac1c6,puVar15);
    }
    plVar20 = (long *)puVar5[5];
    pppppppuStack_b0 = &pppppppuStack_f8;
    if (DAT_0f55cc38 == '\0') {
      iVar4 = func_0x04108328(&DAT_0f55cc38);
      if (iVar4 != 0) {
        func_0x05e53850();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f55cbb8,0xf53dab8);
        func_0x0410844d(&DAT_0f55cc38);
      }
    }
    plVar7 = (long *)(*plVar20 +
                     (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                            *(uint *)(_DAT_0f55cbb8 + 4)) * 8);
    do {
      lVar9 = *plVar7;
      if (lVar9 == -1) goto LAB_05e59b40;
      plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
    } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f55cbb8 + 4));
    if (plVar7 == (long *)plVar20[4]) {
LAB_05e59b40:
      puVar26 = &DAT_0f55cbb8;
    }
    else {
      puVar26 = (undefined *)plVar7[2];
    }
    auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
    plStack_160 = plVar20;
    if (auVar11 == (undefined1  [8])0x0) {
      auStack_158 = (undefined1  [8])0x0;
      plStack_150 = (long *)0x0;
      FUN_048b0d20(auStack_158);
      auVar11 = auStack_158;
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
    puStack_168 = (undefined *)auVar11;
    func_0x05d84ba0(auStack_158);
    func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
    if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
      if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
        bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
      }
      else {
        pppppppuVar24 = pppppppuStack_f8;
        if (cStack_d4 == '\x02') {
          pppppppuVar24 = &pppppppuStack_f8;
        }
        lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar24);
        bVar31 = lVar9 != 0;
      }
    }
    else {
      bVar31 = false;
    }
    if (pcStack_1a0 != (code *)0x0) {
      (*pcStack_1a0)(&uStack_1b8);
    }
    if (pcStack_140 != (code *)0x0) {
      (*pcStack_140)(auStack_158);
    }
    if (bVar31) {
      lVar9 = puVar5[5];
      if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
        (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))(auStack_158,puVar10);
      }
      *(undefined8 *)((long)puVar10 + 0x1c) = 0;
      *(undefined8 *)((long)puVar10 + 0x24) = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined4 *)(puVar10 + 0xc) = 0;
      pcStack_1a8 = (code *)&UNK_05e534c0;
      pcStack_1a0 = (code *)0x0;
      uStack_198 = CONCAT35(uStack_198._5_3_,0x302cf1c72);
      lStack_188 = 0;
      puStack_180 = &UNK_05e533e0;
      lStack_138 = plStack_108[4];
      auStack_158 = (undefined1  [8])*plStack_108;
      plStack_150 = (long *)plStack_108[1];
      pcStack_148 = (code *)plStack_108[2];
      pcStack_140 = (code *)plStack_108[3];
      plVar20 = (long *)plStack_108[2];
      lStack_190 = lVar9;
      if (plVar20 == (long *)0x0) {
        pcStack_148 = (code *)0x0;
        uStack_1b8 = puVar10;
      }
      else {
        uStack_1b8 = puVar10;
        pcStack_148 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,0);
      }
      puStack_168 = &UNK_0f00d228;
      func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(&uStack_1b8);
      }
    }
    else {
      plVar20 = (long *)puVar5[5];
      if (DAT_0f55ccf0 == '\0') {
        iVar4 = func_0x04108328(&DAT_0f55ccf0);
        if (iVar4 != 0) {
          func_0x05e54120();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f55cc70,0xf53dab8);
          func_0x0410844d(&DAT_0f55ccf0);
        }
      }
      plVar7 = (long *)(*plVar20 +
                       (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                              *(uint *)(_DAT_0f55cc70 + 4)) * 8);
      do {
        lVar9 = *plVar7;
        if (lVar9 == -1) {
          plVar14 = (long *)plVar20[4];
          plVar7 = plVar14;
          goto LAB_05e59d54;
        }
        plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
      } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f55cc70 + 4));
      plVar14 = (long *)plVar20[4];
LAB_05e59d54:
      if (plVar7 == plVar14) {
        puVar26 = &DAT_0f55cc70;
      }
      else {
        puVar26 = (undefined *)plVar7[2];
      }
      auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
      if (auVar11 == (undefined1  [8])0x0) {
        auStack_158 = (undefined1  [8])0x0;
        plStack_150 = (long *)0x0;
        FUN_048b0d20(auStack_158);
        auVar11 = auStack_158;
        plVar20 = plStack_150;
      }
      lStack_128 = 0;
      puStack_120 = (undefined *)0x0;
      lStack_138 = 0;
      lStack_130 = 0;
      pcStack_148 = (code *)0x0;
      pcStack_140 = (code *)0x0;
      auStack_158 = (undefined1  [8])0x0;
      plStack_150 = (long *)0x0;
      puStack_168 = (undefined *)auVar11;
      plStack_160 = plVar20;
      func_0x05d84ba0(auStack_158);
      func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
      if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
        if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
          bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
        }
        else {
          pppppppuVar24 = pppppppuStack_f8;
          if (cStack_d4 == '\x02') {
            pppppppuVar24 = &pppppppuStack_f8;
          }
          lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar24);
          bVar31 = lVar9 != 0;
        }
      }
      else {
        bVar31 = false;
      }
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(&uStack_1b8);
      }
      if (pcStack_140 != (code *)0x0) {
        (*pcStack_140)(auStack_158);
      }
      if (bVar31) {
        lVar9 = puVar5[5];
        if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
          (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))(auStack_158,puVar10);
        }
        puVar10[2] = 0;
        puVar10[3] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[4] = 0;
        *(undefined4 *)(puVar10 + 0xc) = 1;
        pcStack_1a8 = (code *)&UNK_05e53da0;
        pcStack_1a0 = (code *)0x0;
        uStack_198 = CONCAT35(uStack_198._5_3_,0x3d7341c67);
        lStack_188 = 0;
        puStack_180 = &UNK_05e53cc0;
        lStack_138 = plStack_108[4];
        auStack_158 = (undefined1  [8])*plStack_108;
        plStack_150 = (long *)plStack_108[1];
        pcStack_148 = (code *)plStack_108[2];
        pcStack_140 = (code *)plStack_108[3];
        plVar20 = (long *)plStack_108[2];
        lStack_190 = lVar9;
        if (plVar20 == (long *)0x0) {
          pcStack_148 = (code *)0x0;
          uStack_1b8 = puVar10;
        }
        else {
          uStack_1b8 = puVar10;
          pcStack_148 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,1);
        }
        puStack_168 = &UNK_0f00d2a8;
        func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(&uStack_1b8);
        }
      }
      else {
        plVar20 = (long *)puVar5[5];
        if (DAT_0f55cda8 == '\0') {
          iVar4 = func_0x04108328(&DAT_0f55cda8);
          if (iVar4 != 0) {
            func_0x05e549a0();
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f55cd28,0xf53dab8);
            func_0x0410844d(&DAT_0f55cda8);
          }
        }
        plVar7 = (long *)(*plVar20 +
                         (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                *(uint *)(_DAT_0f55cd28 + 4)) * 8);
        do {
          lVar9 = *plVar7;
          if (lVar9 == -1) {
            plVar14 = (long *)plVar20[4];
            plVar7 = plVar14;
            goto LAB_05e5a0f1;
          }
          plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
        } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f55cd28 + 4));
        plVar14 = (long *)plVar20[4];
LAB_05e5a0f1:
        if (plVar7 == plVar14) {
          puVar26 = &DAT_0f55cd28;
        }
        else {
          puVar26 = (undefined *)plVar7[2];
        }
        auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
        if (auVar11 == (undefined1  [8])0x0) {
          auStack_158 = (undefined1  [8])0x0;
          plStack_150 = (long *)0x0;
          FUN_048b0d20(auStack_158);
          auVar11 = auStack_158;
          plVar20 = plStack_150;
        }
        lStack_128 = 0;
        puStack_120 = (undefined *)0x0;
        lStack_138 = 0;
        lStack_130 = 0;
        pcStack_148 = (code *)0x0;
        pcStack_140 = (code *)0x0;
        auStack_158 = (undefined1  [8])0x0;
        plStack_150 = (long *)0x0;
        puStack_168 = (undefined *)auVar11;
        plStack_160 = plVar20;
        func_0x05d84ba0(auStack_158);
        func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
        if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
          if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
            bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
          }
          else {
            pppppppuVar24 = pppppppuStack_f8;
            if (cStack_d4 == '\x02') {
              pppppppuVar24 = &pppppppuStack_f8;
            }
            lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar24);
            bVar31 = lVar9 != 0;
          }
        }
        else {
          bVar31 = false;
        }
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(&uStack_1b8);
        }
        if (pcStack_140 != (code *)0x0) {
          (*pcStack_140)(auStack_158);
        }
        if (bVar31) {
          lVar9 = puVar5[5];
          if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
            (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))(auStack_158,puVar10);
          }
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined4 *)(puVar10 + 0xc) = 2;
          pcStack_1a8 = (code *)&UNK_05e54660;
          pcStack_1a0 = (code *)0x0;
          uStack_198 = CONCAT35(uStack_198._5_3_,0x3e36af24c);
          lStack_188 = 0;
          puStack_180 = &UNK_05e54580;
          lStack_138 = plStack_108[4];
          auStack_158 = (undefined1  [8])*plStack_108;
          plStack_150 = (long *)plStack_108[1];
          pcStack_148 = (code *)plStack_108[2];
          pcStack_140 = (code *)plStack_108[3];
          plVar20 = (long *)plStack_108[2];
          lStack_190 = lVar9;
          if (plVar20 == (long *)0x0) {
            pcStack_148 = (code *)0x0;
            uStack_1b8 = puVar10;
          }
          else {
            uStack_1b8 = puVar10;
            pcStack_148 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,2);
          }
          puStack_168 = &UNK_0f00d328;
          func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
          if (pcStack_1a0 != (code *)0x0) {
            (*pcStack_1a0)(&uStack_1b8);
          }
        }
        else {
          plVar20 = (long *)puVar5[5];
          if (DAT_0f55ce60 == '\0') {
            iVar4 = func_0x04108328(&DAT_0f55ce60);
            if (iVar4 != 0) {
              func_0x05e55260();
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f55cde0,0xf53dab8);
              func_0x0410844d(&DAT_0f55ce60);
            }
          }
          plVar7 = (long *)(*plVar20 +
                           (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                  *(uint *)(_DAT_0f55cde0 + 4)) * 8);
          do {
            lVar9 = *plVar7;
            if (lVar9 == -1) {
              plVar14 = (long *)plVar20[4];
              plVar7 = plVar14;
              goto LAB_05e5a389;
            }
            plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
          } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f55cde0 + 4));
          plVar14 = (long *)plVar20[4];
LAB_05e5a389:
          if (plVar7 == plVar14) {
            puVar26 = &DAT_0f55cde0;
          }
          else {
            puVar26 = (undefined *)plVar7[2];
          }
          auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
          if (auVar11 == (undefined1  [8])0x0) {
            auStack_158 = (undefined1  [8])0x0;
            plStack_150 = (long *)0x0;
            FUN_048b0d20(auStack_158);
            auVar11 = auStack_158;
            plVar20 = plStack_150;
          }
          lStack_128 = 0;
          puStack_120 = (undefined *)0x0;
          lStack_138 = 0;
          lStack_130 = 0;
          pcStack_148 = (code *)0x0;
          pcStack_140 = (code *)0x0;
          auStack_158 = (undefined1  [8])0x0;
          plStack_150 = (long *)0x0;
          puStack_168 = (undefined *)auVar11;
          plStack_160 = plVar20;
          func_0x05d84ba0(auStack_158);
          func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
          if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0)))
          {
            if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
              bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
            }
            else {
              pppppppuVar24 = pppppppuStack_f8;
              if (cStack_d4 == '\x02') {
                pppppppuVar24 = &pppppppuStack_f8;
              }
              lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar24);
              bVar31 = lVar9 != 0;
            }
          }
          else {
            bVar31 = false;
          }
          if (pcStack_1a0 != (code *)0x0) {
            (*pcStack_1a0)(&uStack_1b8);
          }
          if (pcStack_140 != (code *)0x0) {
            (*pcStack_140)(auStack_158);
          }
          if (bVar31) {
            lVar9 = puVar5[5];
            if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
              (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))
                        (auStack_158,puVar10);
            }
            puVar10[2] = 0;
            puVar10[3] = 0;
            *puVar10 = 0;
            puVar10[1] = 0;
            *(undefined4 *)(puVar10 + 4) = 0;
            *(undefined4 *)(puVar10 + 0xc) = 3;
            pcStack_1a8 = (code *)&UNK_05e54ef0;
            pcStack_1a0 = (code *)0x0;
            uStack_198 = CONCAT35(uStack_198._5_3_,0x3560a005f);
            lStack_188 = 0;
            puStack_180 = &UNK_05e54e10;
            lStack_138 = plStack_108[4];
            auStack_158 = (undefined1  [8])*plStack_108;
            plStack_150 = (long *)plStack_108[1];
            pcStack_148 = (code *)plStack_108[2];
            pcStack_140 = (code *)plStack_108[3];
            plVar20 = (long *)plStack_108[2];
            lStack_190 = lVar9;
            if (plVar20 == (long *)0x0) {
              pcStack_148 = (code *)0x0;
              uStack_1b8 = puVar10;
            }
            else {
              uStack_1b8 = puVar10;
              pcStack_148 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,3);
            }
            puStack_168 = &UNK_0f00d3a8;
            func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
            if (pcStack_1a0 != (code *)0x0) {
              (*pcStack_1a0)(&uStack_1b8);
            }
          }
          else {
            plVar20 = (long *)puVar5[5];
            if (DAT_0f55cf18 == '\0') {
              iVar4 = func_0x04108328(&DAT_0f55cf18);
              if (iVar4 != 0) {
                func_0x05e55bc0();
                func_0x0eee2f40(&UNK_048ae800,&DAT_0f55ce98,0xf53dab8);
                func_0x0410844d(&DAT_0f55cf18);
              }
            }
            plVar7 = (long *)(*plVar20 +
                             (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                    *(uint *)(_DAT_0f55ce98 + 4)) * 8);
            do {
              lVar9 = *plVar7;
              if (lVar9 == -1) {
                plVar14 = (long *)plVar20[4];
                plVar7 = plVar14;
                goto LAB_05e5a61f;
              }
              plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
            } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f55ce98 + 4));
            plVar14 = (long *)plVar20[4];
LAB_05e5a61f:
            if (plVar7 == plVar14) {
              puVar26 = &DAT_0f55ce98;
            }
            else {
              puVar26 = (undefined *)plVar7[2];
            }
            auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
            if (auVar11 == (undefined1  [8])0x0) {
              auStack_158 = (undefined1  [8])0x0;
              plStack_150 = (long *)0x0;
              FUN_048b0d20(auStack_158);
              auVar11 = auStack_158;
              plVar20 = plStack_150;
            }
            lStack_128 = 0;
            puStack_120 = (undefined *)0x0;
            lStack_138 = 0;
            lStack_130 = 0;
            pcStack_148 = (code *)0x0;
            pcStack_140 = (code *)0x0;
            auStack_158 = (undefined1  [8])0x0;
            plStack_150 = (long *)0x0;
            puStack_168 = (undefined *)auVar11;
            plStack_160 = plVar20;
            func_0x05d84ba0(auStack_158);
            func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
            if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))
               ) {
              if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
              }
              else {
                pppppppuVar24 = pppppppuStack_f8;
                if (cStack_d4 == '\x02') {
                  pppppppuVar24 = &pppppppuStack_f8;
                }
                lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar24);
                bVar31 = lVar9 != 0;
              }
            }
            else {
              bVar31 = false;
            }
            if (pcStack_1a0 != (code *)0x0) {
              (*pcStack_1a0)(&uStack_1b8);
            }
            if (pcStack_140 != (code *)0x0) {
              (*pcStack_140)(auStack_158);
            }
            if (bVar31) {
              lVar9 = puVar5[5];
              if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
                (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))
                          (auStack_158,puVar10);
              }
              puVar10[6] = 0;
              puVar10[7] = 0;
              puVar10[4] = 0;
              puVar10[5] = 0;
              puVar10[2] = 0;
              puVar10[3] = 0;
              *puVar10 = 0;
              puVar10[1] = 0;
              *(undefined4 *)(puVar10 + 0xc) = 4;
              pcStack_1a8 = (code *)&UNK_05e557b0;
              pcStack_1a0 = (code *)0x0;
              uStack_198 = CONCAT35(uStack_198._5_3_,0x338f49e2f);
              lStack_188 = 0;
              puStack_180 = &UNK_05e556d0;
              lStack_138 = plStack_108[4];
              auStack_158 = (undefined1  [8])*plStack_108;
              plStack_150 = (long *)plStack_108[1];
              pcStack_148 = (code *)plStack_108[2];
              pcStack_140 = (code *)plStack_108[3];
              plVar20 = (long *)plStack_108[2];
              lStack_190 = lVar9;
              if (plVar20 == (long *)0x0) {
                pcStack_148 = (code *)0x0;
                uStack_1b8 = puVar10;
              }
              else {
                uStack_1b8 = puVar10;
                pcStack_148 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,4);
              }
              puStack_168 = &UNK_0f00d428;
              func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
              if (pcStack_1a0 != (code *)0x0) {
                (*pcStack_1a0)(&uStack_1b8);
              }
            }
            else {
              plVar20 = (long *)puVar5[5];
              if (DAT_0f55cfd0 == '\0') {
                iVar4 = func_0x04108328(&DAT_0f55cfd0);
                if (iVar4 != 0) {
                  func_0x05e56550();
                  func_0x0eee2f40(&UNK_048ae800,&DAT_0f55cf50,0xf53dab8);
                  func_0x0410844d(&DAT_0f55cfd0);
                }
              }
              plVar7 = (long *)(*plVar20 +
                               (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                      *(uint *)(_DAT_0f55cf50 + 4)) * 8);
              do {
                lVar9 = *plVar7;
                if (lVar9 == -1) {
                  plVar14 = (long *)plVar20[4];
                  plVar7 = plVar14;
                  goto LAB_05e5a8d5;
                }
                plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
              } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f55cf50 + 4));
              plVar14 = (long *)plVar20[4];
LAB_05e5a8d5:
              if (plVar7 == plVar14) {
                puVar26 = &DAT_0f55cf50;
              }
              else {
                puVar26 = (undefined *)plVar7[2];
              }
              auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
              if (auVar11 == (undefined1  [8])0x0) {
                auStack_158 = (undefined1  [8])0x0;
                plStack_150 = (long *)0x0;
                FUN_048b0d20(auStack_158);
                auVar11 = auStack_158;
                plVar20 = plStack_150;
              }
              lStack_128 = 0;
              puStack_120 = (undefined *)0x0;
              lStack_138 = 0;
              lStack_130 = 0;
              pcStack_148 = (code *)0x0;
              pcStack_140 = (code *)0x0;
              auStack_158 = (undefined1  [8])0x0;
              plStack_150 = (long *)0x0;
              puStack_168 = (undefined *)auVar11;
              plStack_160 = plVar20;
              func_0x05d84ba0(auStack_158);
              func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
              if ((lStack_190 == lStack_d0) &&
                 ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                  bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                }
                else {
                  pppppppuVar24 = pppppppuStack_f8;
                  if (cStack_d4 == '\x02') {
                    pppppppuVar24 = &pppppppuStack_f8;
                  }
                  lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar24);
                  bVar31 = lVar9 != 0;
                }
              }
              else {
                bVar31 = false;
              }
              if (pcStack_1a0 != (code *)0x0) {
                (*pcStack_1a0)(&uStack_1b8);
              }
              if (pcStack_140 != (code *)0x0) {
                (*pcStack_140)(auStack_158);
              }
              if (bVar31) {
                lVar9 = puVar5[5];
                if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
                  (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))
                            (auStack_158,puVar10);
                }
                puVar10[6] = 0;
                puVar10[7] = 0;
                puVar10[4] = 0;
                puVar10[5] = 0;
                puVar10[2] = 0;
                puVar10[3] = 0;
                *puVar10 = 0;
                puVar10[1] = 0;
                *(undefined4 *)(puVar10 + 8) = 0;
                *(undefined4 *)(puVar10 + 0xc) = 5;
                pcStack_1a8 = (code *)&UNK_05e56110;
                pcStack_1a0 = (code *)0x0;
                uStack_198 = CONCAT35(uStack_198._5_3_,0x3f7e31327);
                lStack_188 = 0;
                puStack_180 = &UNK_05e56030;
                lStack_138 = plStack_108[4];
                auStack_158 = (undefined1  [8])*plStack_108;
                plStack_150 = (long *)plStack_108[1];
                pcStack_148 = (code *)plStack_108[2];
                pcStack_140 = (code *)plStack_108[3];
                plVar20 = (long *)plStack_108[2];
                lStack_190 = lVar9;
                if (plVar20 == (long *)0x0) {
                  pcStack_148 = (code *)0x0;
                  uStack_1b8 = puVar10;
                }
                else {
                  uStack_1b8 = puVar10;
                  pcStack_148 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,5);
                }
                puStack_168 = &UNK_0f00d4a8;
                func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
                if (pcStack_1a0 != (code *)0x0) {
                  (*pcStack_1a0)(&uStack_1b8);
                }
              }
              else {
                plVar20 = (long *)puVar5[5];
                if (DAT_0f55d088 == '\0') {
                  iVar4 = func_0x04108328(&DAT_0f55d088);
                  if (iVar4 != 0) {
                    func_0x05e56ec0();
                    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55d008,0xf53dab8);
                    func_0x0410844d(&DAT_0f55d088);
                  }
                }
                plVar7 = (long *)(*plVar20 +
                                 (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                        *(uint *)(_DAT_0f55d008 + 4)) * 8);
                do {
                  lVar9 = *plVar7;
                  if (lVar9 == -1) {
                    plVar14 = (long *)plVar20[4];
                    plVar7 = plVar14;
                    goto LAB_05e5ab93;
                  }
                  plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
                } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f55d008 + 4));
                plVar14 = (long *)plVar20[4];
LAB_05e5ab93:
                if (plVar7 == plVar14) {
                  puVar26 = &DAT_0f55d008;
                }
                else {
                  puVar26 = (undefined *)plVar7[2];
                }
                auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
                if (auVar11 == (undefined1  [8])0x0) {
                  auStack_158 = (undefined1  [8])0x0;
                  plStack_150 = (long *)0x0;
                  FUN_048b0d20(auStack_158);
                  auVar11 = auStack_158;
                  plVar20 = plStack_150;
                }
                lStack_128 = 0;
                puStack_120 = (undefined *)0x0;
                lStack_138 = 0;
                lStack_130 = 0;
                pcStack_148 = (code *)0x0;
                pcStack_140 = (code *)0x0;
                auStack_158 = (undefined1  [8])0x0;
                plStack_150 = (long *)0x0;
                puStack_168 = (undefined *)auVar11;
                plStack_160 = plVar20;
                func_0x05d84ba0(auStack_158);
                func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                if ((lStack_190 == lStack_d0) &&
                   ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                  if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                    bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                  }
                  else {
                    pppppppuVar24 = pppppppuStack_f8;
                    if (cStack_d4 == '\x02') {
                      pppppppuVar24 = &pppppppuStack_f8;
                    }
                    lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar24);
                    bVar31 = lVar9 != 0;
                    puVar5 = puStack_100;
                    plVar30 = plStack_b8;
                  }
                }
                else {
                  bVar31 = false;
                }
                if (pcStack_1a0 != (code *)0x0) {
                  (*pcStack_1a0)(&uStack_1b8);
                }
                if (pcStack_140 != (code *)0x0) {
                  (*pcStack_140)(auStack_158);
                }
                if (bVar31) {
                  lVar9 = puVar5[5];
                  if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
                    (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))
                              (auStack_158,puVar10);
                  }
                  puVar10[6] = 0;
                  puVar10[7] = 0;
                  puVar10[4] = 0;
                  puVar10[5] = 0;
                  puVar10[2] = 0;
                  puVar10[3] = 0;
                  *puVar10 = 0;
                  puVar10[1] = 0;
                  *(undefined4 *)(puVar10 + 0xc) = 6;
                  pcStack_1a8 = (code *)&UNK_05e56ab0;
                  pcStack_1a0 = (code *)0x0;
                  uStack_198 = CONCAT35(uStack_198._5_3_,0x3ba0d869e);
                  lStack_188 = 0;
                  puStack_180 = &UNK_05e569d0;
                  lStack_138 = plStack_108[4];
                  auStack_158 = (undefined1  [8])*plStack_108;
                  plStack_150 = (long *)plStack_108[1];
                  pcStack_148 = (code *)plStack_108[2];
                  pcStack_140 = (code *)plStack_108[3];
                  plVar20 = (long *)plStack_108[2];
                  lStack_190 = lVar9;
                  if (plVar20 == (long *)0x0) {
                    pcStack_148 = (code *)0x0;
                    uStack_1b8 = puVar10;
                  }
                  else {
                    uStack_1b8 = puVar10;
                    pcStack_148 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,6);
                  }
                  puStack_168 = &UNK_0f00d528;
                  func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
                  if (pcStack_1a0 != (code *)0x0) {
                    (*pcStack_1a0)(&uStack_1b8);
                  }
                }
                else {
                  plVar20 = (long *)puVar5[5];
                  if (DAT_0f55d140 == '\0') {
                    iVar4 = func_0x04108328(&DAT_0f55d140);
                    if (iVar4 != 0) {
                      func_0x05e57820();
                      func_0x0eee2f40(&UNK_048ae800,&DAT_0f55d0c0,0xf53dab8);
                      func_0x0410844d(&DAT_0f55d140);
                    }
                  }
                  plVar7 = (long *)(*plVar20 +
                                   (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                          *(uint *)(_DAT_0f55d0c0 + 4)) * 8);
                  do {
                    lVar9 = *plVar7;
                    if (lVar9 == -1) {
                      plVar14 = (long *)plVar20[4];
                      plVar7 = plVar14;
                      goto LAB_05e5ae49;
                    }
                    plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
                  } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f55d0c0 + 4))
                  ;
                  plVar14 = (long *)plVar20[4];
LAB_05e5ae49:
                  if (plVar7 == plVar14) {
                    puVar26 = &DAT_0f55d0c0;
                  }
                  else {
                    puVar26 = (undefined *)plVar7[2];
                  }
                  auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
                  if (auVar11 == (undefined1  [8])0x0) {
                    auStack_158 = (undefined1  [8])0x0;
                    plStack_150 = (long *)0x0;
                    FUN_048b0d20(auStack_158);
                    auVar11 = auStack_158;
                    plVar20 = plStack_150;
                  }
                  lStack_128 = 0;
                  puStack_120 = (undefined *)0x0;
                  lStack_138 = 0;
                  lStack_130 = 0;
                  pcStack_148 = (code *)0x0;
                  pcStack_140 = (code *)0x0;
                  auStack_158 = (undefined1  [8])0x0;
                  plStack_150 = (long *)0x0;
                  puStack_168 = (undefined *)auVar11;
                  plStack_160 = plVar20;
                  func_0x05d84ba0(auStack_158);
                  func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                  if ((lStack_190 == lStack_d0) &&
                     ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                    if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                      bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                    }
                    else {
                      pppppppuVar24 = pppppppuStack_f8;
                      if (cStack_d4 == '\x02') {
                        pppppppuVar24 = &pppppppuStack_f8;
                      }
                      lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar24);
                      bVar31 = lVar9 != 0;
                      puVar5 = puStack_100;
                      plVar30 = plStack_b8;
                    }
                  }
                  else {
                    bVar31 = false;
                  }
                  if (pcStack_1a0 != (code *)0x0) {
                    (*pcStack_1a0)(&uStack_1b8);
                  }
                  if (pcStack_140 != (code *)0x0) {
                    (*pcStack_140)(auStack_158);
                  }
                  if (bVar31) {
                    lVar9 = puVar5[5];
                    if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
                      (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))
                                (auStack_158,puVar10);
                    }
                    puVar10[6] = 0;
                    puVar10[7] = 0;
                    puVar10[4] = 0;
                    puVar10[5] = 0;
                    puVar10[2] = 0;
                    puVar10[3] = 0;
                    *puVar10 = 0;
                    puVar10[1] = 0;
                    *(undefined4 *)(puVar10 + 0xc) = 7;
                    pcStack_1a8 = (code *)&UNK_05e57410;
                    pcStack_1a0 = (code *)0x0;
                    uStack_198 = CONCAT35(uStack_198._5_3_,0x3bc29e523);
                    lStack_188 = 0;
                    puStack_180 = &UNK_05e57330;
                    lStack_138 = plStack_108[4];
                    auStack_158 = (undefined1  [8])*plStack_108;
                    plStack_150 = (long *)plStack_108[1];
                    pcStack_148 = (code *)plStack_108[2];
                    pcStack_140 = (code *)plStack_108[3];
                    plVar20 = (long *)plStack_108[2];
                    lStack_190 = lVar9;
                    if (plVar20 == (long *)0x0) {
                      pcStack_148 = (code *)0x0;
                      uStack_1b8 = puVar10;
                    }
                    else {
                      uStack_1b8 = puVar10;
                      pcStack_148 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,7);
                    }
                    puStack_168 = &UNK_0f00d5a8;
                    func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
                    if (pcStack_1a0 != (code *)0x0) {
                      (*pcStack_1a0)(&uStack_1b8);
                    }
                  }
                  else {
                    plVar20 = (long *)puVar5[5];
                    if (DAT_0f55d1f8 == '\0') {
                      iVar4 = func_0x04108328(&DAT_0f55d1f8);
                      if (iVar4 != 0) {
                        func_0x05e581c0();
                        func_0x0eee2f40(&UNK_048ae800,&DAT_0f55d178,0xf53dab8);
                        func_0x0410844d(&DAT_0f55d1f8);
                      }
                    }
                    plVar7 = (long *)(*plVar20 +
                                     (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                            *(uint *)(_DAT_0f55d178 + 4)) * 8);
                    do {
                      lVar9 = *plVar7;
                      if (lVar9 == -1) {
                        plVar14 = (long *)plVar20[4];
                        plVar7 = plVar14;
                        goto LAB_05e5b0ff;
                      }
                      plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
                    } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) !=
                             *(uint *)(_DAT_0f55d178 + 4));
                    plVar14 = (long *)plVar20[4];
LAB_05e5b0ff:
                    if (plVar7 == plVar14) {
                      puVar26 = &DAT_0f55d178;
                    }
                    else {
                      puVar26 = (undefined *)plVar7[2];
                    }
                    auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
                    if (auVar11 == (undefined1  [8])0x0) {
                      auStack_158 = (undefined1  [8])0x0;
                      plStack_150 = (long *)0x0;
                      FUN_048b0d20(auStack_158);
                      auVar11 = auStack_158;
                      plVar20 = plStack_150;
                    }
                    lStack_128 = 0;
                    puStack_120 = (undefined *)0x0;
                    lStack_138 = 0;
                    lStack_130 = 0;
                    pcStack_148 = (code *)0x0;
                    pcStack_140 = (code *)0x0;
                    auStack_158 = (undefined1  [8])0x0;
                    plStack_150 = (long *)0x0;
                    puStack_168 = (undefined *)auVar11;
                    plStack_160 = plVar20;
                    func_0x05d84ba0(auStack_158);
                    func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                    if ((lStack_190 == lStack_d0) &&
                       ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                      if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                        bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                      }
                      else {
                        pppppppuVar24 = pppppppuStack_f8;
                        if (cStack_d4 == '\x02') {
                          pppppppuVar24 = &pppppppuStack_f8;
                        }
                        lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar24);
                        bVar31 = lVar9 != 0;
                        puVar5 = puStack_100;
                        plVar30 = plStack_b8;
                      }
                    }
                    else {
                      bVar31 = false;
                    }
                    if (pcStack_1a0 != (code *)0x0) {
                      (*pcStack_1a0)(&uStack_1b8);
                    }
                    if (pcStack_140 != (code *)0x0) {
                      (*pcStack_140)(auStack_158);
                    }
                    if (bVar31) {
                      lVar9 = puVar5[5];
                      if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
                        (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))
                                  (auStack_158,puVar10);
                      }
                      puVar10[6] = 0;
                      puVar10[7] = 0;
                      puVar10[4] = 0;
                      puVar10[5] = 0;
                      puVar10[2] = 0;
                      puVar10[3] = 0;
                      *puVar10 = 0;
                      puVar10[1] = 0;
                      puVar10[8] = 0;
                      *(undefined4 *)(puVar10 + 0xc) = 8;
                      pcStack_1a8 = (code *)&UNK_05e57d70;
                      pcStack_1a0 = (code *)0x0;
                      uStack_198 = CONCAT35(uStack_198._5_3_,0x380d233aa);
                      lStack_188 = 0;
                      puStack_180 = &UNK_05e57c90;
                      lStack_138 = plStack_108[4];
                      auStack_158 = (undefined1  [8])*plStack_108;
                      plStack_150 = (long *)plStack_108[1];
                      pcStack_148 = (code *)plStack_108[2];
                      pcStack_140 = (code *)plStack_108[3];
                      plVar20 = (long *)plStack_108[2];
                      lStack_190 = lVar9;
                      if (plVar20 == (long *)0x0) {
                        pcStack_148 = (code *)0x0;
                        uStack_1b8 = puVar10;
                      }
                      else {
                        uStack_1b8 = puVar10;
                        pcStack_148 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,8);
                      }
                      puStack_168 = &UNK_0f00d628;
                      func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
                      if (pcStack_1a0 != (code *)0x0) {
                        (*pcStack_1a0)(&uStack_1b8);
                      }
                    }
                    else {
                      plVar30 = (long *)puVar5[5];
                      if (DAT_0f55d2b0 == '\0') {
                        iVar4 = func_0x04108328(&DAT_0f55d2b0);
                        if (iVar4 != 0) {
                          func_0x05e58d10();
                          func_0x0eee2f40(&UNK_048ae800,&DAT_0f55d230,0xf53dab8);
                          func_0x0410844d(&DAT_0f55d2b0);
                        }
                      }
                      plVar20 = (long *)(*plVar30 +
                                        (ulong)((int)((ulong)(plVar30[1] - *plVar30) >> 3) - 1U &
                                               *(uint *)(_DAT_0f55d230 + 4)) * 8);
                      do {
                        lVar9 = *plVar20;
                        if (lVar9 == -1) {
                          plVar7 = (long *)plVar30[4];
                          plVar20 = plVar7;
                          goto LAB_05e5b3bd;
                        }
                        plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                      } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                               *(uint *)(_DAT_0f55d230 + 4));
                      plVar7 = (long *)plVar30[4];
LAB_05e5b3bd:
                      if (plVar20 == plVar7) {
                        puVar26 = &DAT_0f55d230;
                      }
                      else {
                        puVar26 = (undefined *)plVar20[2];
                      }
                      auVar11 = (undefined1  [8])func_0x048b0c90(plVar30,puVar26,uVar25,1);
                      if (auVar11 == (undefined1  [8])0x0) {
                        auStack_158 = (undefined1  [8])0x0;
                        plStack_150 = (long *)0x0;
                        FUN_048b0d20(auStack_158);
                        auVar11 = auStack_158;
                        plVar30 = plStack_150;
                      }
                      lStack_128 = 0;
                      puStack_120 = (undefined *)0x0;
                      lStack_138 = 0;
                      lStack_130 = 0;
                      pcStack_148 = (code *)0x0;
                      pcStack_140 = (code *)0x0;
                      auStack_158 = (undefined1  [8])0x0;
                      plStack_150 = (long *)0x0;
                      puStack_168 = (undefined *)auVar11;
                      plStack_160 = plVar30;
                      func_0x05d84ba0(auStack_158);
                      func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                      if (lStack_190 == lStack_d0) {
                        puVar5 = puStack_100;
                        if ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0)) {
                          if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                            bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                          }
                          else {
                            if (cStack_d4 != '\x02') {
                              pppppppuStack_b0 = pppppppuStack_f8;
                            }
                            lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuStack_b0);
                            bVar31 = lVar9 != 0;
                            puVar5 = puStack_100;
                          }
                        }
                        else {
                          bVar31 = false;
                        }
                      }
                      else {
                        bVar31 = false;
                      }
                      if (pcStack_1a0 != (code *)0x0) {
                        (*pcStack_1a0)(&uStack_1b8);
                      }
                      if (pcStack_140 != (code *)0x0) {
                        (*pcStack_140)(auStack_158);
                      }
                      if (bVar31) {
                        lVar9 = puVar5[5];
                        if ((ulong)*(uint *)(puVar10 + 0xc) != 0xffffffff) {
                          (**(code **)(&UNK_0f00ce68 + (ulong)*(uint *)(puVar10 + 0xc) * 8))
                                    (auStack_158,puVar10);
                        }
                        puVar10[10] = 0;
                        puVar10[0xb] = 0;
                        puVar10[8] = 0;
                        puVar10[9] = 0;
                        puVar10[6] = 0;
                        puVar10[7] = 0;
                        puVar10[4] = 0;
                        puVar10[5] = 0;
                        puVar10[2] = 0;
                        puVar10[3] = 0;
                        *puVar10 = 0;
                        puVar10[1] = 0;
                        *(undefined4 *)(puVar10 + 0xc) = 9;
                        pcStack_1a8 = (code *)&UNK_05e58720;
                        pcStack_1a0 = (code *)0x0;
                        uStack_198 = CONCAT35(uStack_198._5_3_,0x38998423c);
                        lStack_188 = 0;
                        puStack_180 = &UNK_05e58640;
                        lStack_138 = plStack_108[4];
                        auStack_158 = (undefined1  [8])*plStack_108;
                        plStack_150 = (long *)plStack_108[1];
                        pcStack_148 = (code *)plStack_108[2];
                        pcStack_140 = (code *)plStack_108[3];
                        plVar30 = (long *)plStack_108[2];
                        lStack_190 = lVar9;
                        if (plVar30 == (long *)0x0) {
                          pcStack_148 = (code *)0x0;
                          uStack_1b8 = puVar10;
                        }
                        else {
                          uStack_1b8 = puVar10;
                          pcStack_148 = (code *)(**(code **)(*plVar30 + 0x30))(plVar30,9);
                        }
                        puStack_168 = &UNK_0f00d6a8;
                        func_0x0ed75bc0(&puStack_168,plStack_b8,&uStack_1b8,uStack_110,auStack_158);
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
LAB_05e5b7b1:
  if (((ulong)uStack_a8 & 1) != 0) {
    func_0x0412a280(pcStack_98,(ulong)uStack_a8 & 0xfffffffffffffffe);
  }
  return;
}


