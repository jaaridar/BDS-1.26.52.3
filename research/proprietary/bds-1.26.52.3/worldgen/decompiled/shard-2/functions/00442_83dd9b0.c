/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x84dd9b0 (ELF vaddr 0x83dd9b0)
 * Label: caller-of-callee
 * Body:  [[084dd9b0, 084de170] [084de180, 084e28d3] [084e34f0, 084e3e06]]
 * Ghidra: FUN_084dd9b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_084dd9b0(long *param_1,undefined8 *******param_2,undefined8 *param_3,undefined8 param_4,
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
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  char cStack_188;
  undefined *puStack_178;
  long *plStack_170;
  undefined1 auStack_168 [8];
  long *plStack_160;
  code *pcStack_158;
  code *pcStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined *puStack_130;
  char cStack_128;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  code *pcStack_e0;
  int iStack_d8;
  char cStack_d4;
  long lStack_d0;
  long lStack_c0;
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
    if (puVar15 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x2b00c201) {
      uVar12 = param_3[5];
      lVar9 = param_3[6];
      if (lVar9 == 0) {
        uStack_60 = 0x84e354f;
        (*(code *)param_3[7])(0,param_3,0);
        lVar9 = param_3[6];
        cVar3 = *(char *)((long)param_3 + 0x24);
        puVar5 = (undefined8 *)*param_3;
      }
      if (cVar3 == '\x02') {
        puVar5 = param_3;
      }
      uStack_60 = 0x84e3571;
      puVar15 = (undefined8 *)func_0x0488e200(uVar12,lVar9,0xd4ff3dff,puVar5);
    }
    uStack_60 = 0x84e3581;
    func_0x0ed6d600(auStack_40,*param_5);
    bVar2 = *(byte *)(param_1 + 1) | *(byte *)((long)param_1 + 9);
    *(byte *)((long)param_1 + 9) = bVar2 | 1;
    uStack_60 = 0x84e359e;
    uVar22 = (**(code **)(*param_1 + 0x98))(param_1);
    *(byte *)((long)param_1 + 9) = bVar2;
    if ((uVar22 >> 0x20 & 1) == 0) {
      uVar23 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x84e35de;
      uStack_60 = uVar23;
      cVar3 = func_0x084e4930(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e360c;
      uStack_60 = uVar23;
      cVar3 = func_0x084e4b40(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e363a;
      uStack_60 = uVar23;
      cVar3 = func_0x084e4d60(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3668;
      uStack_60 = uVar23;
      cVar3 = func_0x084e4f80(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3696;
      uStack_60 = uVar23;
      cVar3 = func_0x084e51a0(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e36c4;
      uStack_60 = uVar23;
      cVar3 = func_0x084e53d0(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e36f2;
      uStack_60 = uVar23;
      cVar3 = func_0x084e55f0(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3720;
      uStack_60 = uVar23;
      cVar3 = func_0x084e5810(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e374e;
      uStack_60 = uVar23;
      cVar3 = func_0x084e5a30(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e377c;
      uStack_60 = uVar23;
      cVar3 = func_0x084e5c60(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e37aa;
      uStack_60 = uVar23;
      cVar3 = func_0x084e5e80(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e37d8;
      uStack_60 = uVar23;
      cVar3 = func_0x084e60a0(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3806;
      uStack_60 = uVar23;
      cVar3 = func_0x084e62c0(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3834;
      uStack_60 = uVar23;
      cVar3 = func_0x084e64e0(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3862;
      uStack_60 = uVar23;
      cVar3 = func_0x084e6700(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3890;
      uStack_60 = uVar23;
      cVar3 = func_0x084e6920(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e38be;
      uStack_60 = uVar23;
      cVar3 = func_0x084e6b40(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e38ec;
      uStack_60 = uVar23;
      cVar3 = func_0x084e6d60(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e391a;
      uStack_60 = uVar23;
      cVar3 = func_0x084e6f80(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3948;
      uStack_60 = uVar23;
      cVar3 = func_0x084e71a0(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3976;
      uStack_60 = uVar23;
      cVar3 = func_0x084e73c0(param_1,param_3[5],puVar15,param_4,param_5,0x16);
      if (cVar3 != '\0') {
        return;
      }
      uVar12 = param_3[5];
      uVar22 = 0x16;
      uStack_60 = uVar23;
    }
    else {
      if (0x15 < (uint)uVar22) {
        uStack_48 = 0x2d000001258dae;
        uStack_60 = 0x84e3dd4;
        func_0x0ed5ffe0(*param_5,8,&uStack_48);
        if ((uStack_48 >> 0x37 & 1) == 0) {
          return;
        }
        uStack_60 = 0x84e3df8;
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
        return;
      }
      uStack_60 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x84e39e1;
      uStack_50 = uStack_60;
      cVar3 = func_0x084e4930(param_1,param_3[5],puVar15,param_4,param_5,uVar22 & 0xff);
      if (cVar3 != '\0') {
        return;
      }
      uVar22 = uVar22 & 0xff;
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3a12;
      cVar3 = func_0x084e4b40(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3a3f;
      cVar3 = func_0x084e4d60(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3a6c;
      cVar3 = func_0x084e4f80(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3a99;
      cVar3 = func_0x084e51a0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3ac6;
      cVar3 = func_0x084e53d0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3af3;
      cVar3 = func_0x084e55f0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3b20;
      cVar3 = func_0x084e5810(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3b4d;
      cVar3 = func_0x084e5a30(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3b7a;
      cVar3 = func_0x084e5c60(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3ba7;
      cVar3 = func_0x084e5e80(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3bd4;
      cVar3 = func_0x084e60a0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3c01;
      cVar3 = func_0x084e62c0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3c2e;
      cVar3 = func_0x084e64e0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3c5b;
      cVar3 = func_0x084e6700(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3c88;
      cVar3 = func_0x084e6920(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3cb5;
      cVar3 = func_0x084e6b40(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3ce2;
      cVar3 = func_0x084e6d60(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3d0f;
      cVar3 = func_0x084e6f80(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3d3c;
      cVar3 = func_0x084e71a0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x84e3d69;
      cVar3 = func_0x084e73c0(param_1,param_3[5],puVar15,param_4,param_5,uVar22);
      if (cVar3 != '\0') {
        return;
      }
      uVar12 = param_3[5];
      uStack_60 = uStack_50;
    }
    puStack_68 = puStack_58;
    uStack_70 = 0x84e3d96;
    func_0x084e75e0(param_1,uVar12,puVar15,param_4,param_5,uVar22);
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
  puStack_118 = param_3;
  plStack_108 = param_5;
  plStack_100 = param_1;
  pppppppuStack_b0 = param_2;
  if (ppppppuVar18 == (undefined8 ******)0x0) {
    puStack_178 = (undefined *)((ulong)((uint)ppppppuVar21 & 0x7f) << 0x30);
  }
  else if (ppppppuVar21 < (undefined8 ******)0x80) {
    puStack_178 = (undefined *)
                  ((long)ppppppuVar21 << 0x30 | (ulong)ppppppuVar18 & 0xff00ffffffffffff);
  }
  else {
    lVar29 = (long)ppppppuVar21 + 9;
    lStack_88 = lVar9;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
    if (puVar5 == (undefined8 *)0x0 && lVar29 != 0) {
      func_0x0eec74c0(lVar29,8);
    }
    *puVar5 = ppppppuVar21;
    func_0x0eee2f00(puVar5 + 1,ppppppuVar18,ppppppuVar21);
    *(undefined1 *)((long)puVar5 + (long)(ppppppuVar21 + 1)) = 0;
    puStack_178 = (undefined *)((ulong)(puVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    lVar9 = lStack_88;
  }
  plVar30 = plStack_100;
  puVar6 = (uint *)func_0x0ed6d180(lVar9,&puStack_178,0);
  puVar5 = puStack_118;
  if (((ulong)puStack_178 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_178 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_178 = (undefined *)0x0;
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
    _auStack_168 = (*(code *)*pppppppuStack_b0)(uStack_48);
    func_0x0ed8bc80(&uStack_1c8,auStack_168,*(undefined1 *)(lVar9 + 0x2aa));
    uVar22 = (ulong)uStack_1c8 >> 1 & 0x7f;
    pcVar1 = (code *)((long)&uStack_1c8 + 1);
    if (((ulong)uStack_1c8 & 1) != 0) {
      uVar22 = uStack_1c0;
      pcVar1 = pcStack_1b8;
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
        func_0x0eec74c0(lVar29,8);
      }
      *puVar8 = uVar22;
      func_0x0eee2f00(puVar8 + 1,pcVar1,uVar22);
      *(undefined1 *)((long)puVar8 + uVar22 + 8) = 0;
      pppppppuStack_f8 =
           (undefined8 *******)((ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      lVar9 = lStack_88;
    }
    plVar30 = plStack_100;
    func_0x0ed5ffe0(lVar9,8,&pppppppuStack_f8);
    puVar5 = puStack_118;
    if (((ulong)pppppppuStack_f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_f8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_f8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1c8 & 1) != 0) {
      func_0x0412a280(pcStack_1b8,(ulong)uStack_1c8 & 0xfffffffffffffffe);
    }
    uStack_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    pcStack_98 = (code *)0x0;
  }
  else {
    (**(code **)(*plVar30 + 0x80))(auStack_168,plVar30,0x40);
    cStack_188 = cStack_128;
    if (cStack_128 == '\0') {
      uStack_1c8 = (undefined8 *)auStack_168;
      uStack_1c0 = (ulong)plStack_160;
      pcStack_1b8 = pcStack_158;
      pcStack_1b0 = pcStack_150;
      uStack_1a8 = lStack_148;
      lStack_1a0 = lStack_140;
      lStack_198 = lStack_138;
      puStack_190 = puStack_130;
      pppppppuStack_f8 = (undefined8 *******)pppppppuStack_b0[3];
      ppppppuStack_f0 = pppppppuStack_b0[2];
      if ((*(byte *)(pppppppuStack_b0 + 1) & 1) == 0) {
        pppppppuStack_f8 = (undefined8 *******)ppppppuVar28;
        ppppppuStack_f0 = (undefined8 ******)(ulong)(*(byte *)(pppppppuStack_b0 + 1) >> 1);
      }
      func_0x0470d9a0(auStack_168,&UNK_01377405,0x15,0xd);
      plVar30 = (long *)((ulong)auStack_168 >> 1 & 0x7f);
      pcVar1 = (code *)(auStack_168 + 1);
      if (((ulong)auStack_168 & 1) != 0) {
        plVar30 = plStack_160;
        pcVar1 = pcStack_158;
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
          func_0x0eec74c0(lVar29,8);
        }
        *puVar8 = (ulong)plVar30;
        func_0x0eee2f00(puVar8 + 1,pcVar1,plVar30);
        *(undefined1 *)((long)puVar8 + (long)plVar30 + 8U) = 0;
        pppppppuStack_f8 =
             (undefined8 *******)((ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        lVar9 = lStack_88;
      }
      plVar30 = plStack_100;
      func_0x0ed5ffe0(lVar9,8,&pppppppuStack_f8);
      puVar5 = puStack_118;
      if (((ulong)pppppppuStack_f8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_f8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_f8 = (undefined8 *******)0x0;
      if (((ulong)auStack_168 & 1) != 0) {
        func_0x0412a280(pcStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
      }
      uStack_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      pcStack_98 = (code *)0x0;
joined_r0x084de109:
      if (cStack_188 == '\x01') goto LAB_084de03a;
LAB_084de10f:
      lVar9 = lStack_1a0;
      if (lStack_1a0 != 0) {
        while (lVar9 != lStack_198) {
          func_0x048b3e80(lStack_198 + -0x40);
          lStack_198 = lStack_198 + -0x40;
        }
        lStack_198 = lVar9;
        func_0x0412a280(lStack_1a0,(long)puStack_190 - lStack_1a0);
      }
      pcVar17 = pcStack_1b8;
      pcVar1 = pcStack_1b0;
      if (pcStack_1b8 == (code *)0x0) goto LAB_084de1c1;
      for (; pcVar17 != pcVar1; pcVar1 = pcVar1 + -0x50) {
        if ((pcVar1[-8] == (code)0x1) && (((byte)pcVar1[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(pcVar1 + -0x20),
                          *(ulong *)(pcVar1 + -0x30) & 0xfffffffffffffffe);
        }
      }
      pcStack_1b0 = pcVar17;
      uVar22 = uStack_1a8 - (long)pcStack_1b8;
    }
    else {
      pcStack_1b8 = pcStack_158;
      uStack_1c8 = (undefined8 *)auStack_168;
      uStack_1c0 = (ulong)plStack_160;
      plVar20 = (long *)(ulong)(byte)(auStack_168[0] >> 1);
      pcVar1 = (code *)((long)&uStack_1c8 + 1);
      if (((ulong)auStack_168 & 1) != 0) {
        plVar20 = plStack_160;
        pcVar1 = pcStack_158;
      }
      bVar2 = auStack_168[0];
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
        bVar2 = (byte)uStack_1c8;
      }
      if ((bVar2 & 1) != 0) {
        func_0x0412e5e0(&uStack_a8,pcStack_1b8,uStack_1c0);
        goto joined_r0x084de109;
      }
      pcStack_98 = pcStack_1b8;
      uStack_a8 = uStack_1c8;
      uStack_a0 = uStack_1c0;
      if (cStack_188 != '\x01') goto LAB_084de10f;
LAB_084de03a:
      if (((ulong)uStack_1c8 & 1) == 0) goto LAB_084de1c1;
      uVar22 = (ulong)uStack_1c8 & 0xfffffffffffffffe;
    }
    func_0x0412a280(pcStack_1b8,uVar22);
  }
LAB_084de1c1:
  (**(code **)(*plVar30 + 0xd0))(plVar30);
  lVar9 = *(long *)(puVar6 + 2);
  uVar25 = *(uint *)(lVar9 + 0x1c + (ulong)*puVar6 * 0x20);
  *puVar6 = uVar25;
  if (puVar6[0x48] == 0) {
    uVar16 = puVar6[4];
LAB_084de20f:
    lVar29 = lVar9 + (ulong)uVar16 * 0x20;
    uVar22 = (ulong)*(uint *)(lVar9 + -0x10 + (ulong)uVar16 * 0x20);
    if (uVar22 != 0xffffffff) {
      (**(code **)(&UNK_0f4e40d0 + uVar22 * 8))(&uStack_1c8,lVar29 + -0x18);
      uVar16 = puVar6[4];
    }
    *(undefined4 *)(lVar29 + -0x10) = 0xffffffff;
    puVar6[4] = uVar16 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar6 + 0x46) + 0x18 + (ulong)(puVar6[0x48] - 1) * 0x30) != uVar25)
          && (uVar16 = puVar6[4], uVar25 == uVar16 - 1)) goto LAB_084de20f;
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
      uStack_1c8 = (undefined8 *)0x0;
      uStack_1c0 = 0;
      func_0x048b0d20(&uStack_1c8);
      puStack_58 = uStack_1c8;
      uStack_50 = uStack_1c0;
      if (uStack_1c8 == (undefined8 *)0x0) {
        lVar9 = *plStack_108;
        func_0x0ed8bc80(&uStack_1c8,auStack_40,*(undefined1 *)(lVar9 + 0x2aa));
        uVar12 = func_0x0412f8c0(&uStack_1c8,&UNK_01479aea,10);
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
        if (((ulong)uStack_1c8 & 1) != 0) {
          func_0x0412a280(pcStack_1b8,(ulong)uStack_1c8 & 0xfffffffffffffffe);
        }
        goto LAB_084e238f;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    lStack_198 = 0;
    puStack_190 = (undefined *)0x0;
    uStack_1a8 = 0;
    lStack_1a0 = 0;
    pcStack_1b8 = (code *)0x0;
    pcStack_1b0 = (code *)0x0;
    uStack_1c8 = (undefined8 *)0x0;
    uStack_1c0 = 0;
    func_0x05d84ba0(&uStack_1c8);
    func_0x05d9a920(&pppppppuStack_f8,&puStack_58,&uStack_1c8);
    if (pcStack_1b0 != (code *)0x0) {
      (*pcStack_1b0)(&uStack_1c8);
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
    if (puVar10 == (undefined8 *)0x0 || *(int *)(puVar5 + 4) != -0x2b00c201) {
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
      puVar10 = (undefined8 *)func_0x0488e200(uVar12,lVar9,0xd4ff3dff,puVar15);
    }
    plVar20 = (long *)puVar5[5];
    pppppppuStack_b0 = &pppppppuStack_f8;
    if (DAT_0f5d2950 == '\0') {
      iVar4 = func_0x04108328(&DAT_0f5d2950);
      if (iVar4 != 0) {
        func_0x084a8190();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d28d0,0xf53dab8);
        func_0x0410844d(&DAT_0f5d2950);
      }
    }
    plVar7 = (long *)(*plVar20 +
                     (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                            *(uint *)(_DAT_0f5d28d0 + 4)) * 8);
    do {
      lVar9 = *plVar7;
      if (lVar9 == -1) goto LAB_084de5a0;
      plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
    } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5d28d0 + 4));
    if (plVar7 == (long *)plVar20[4]) {
LAB_084de5a0:
      puVar26 = &DAT_0f5d28d0;
    }
    else {
      puVar26 = (undefined *)plVar7[2];
    }
    auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
    plStack_170 = plVar20;
    if (auVar11 == (undefined1  [8])0x0) {
      auStack_168 = (undefined1  [8])0x0;
      plStack_160 = (long *)0x0;
      func_0x048b0d20(auStack_168);
      auVar11 = auStack_168;
      plStack_170 = plStack_160;
    }
    lStack_138 = 0;
    puStack_130 = (undefined *)0x0;
    lStack_148 = 0;
    lStack_140 = 0;
    pcStack_158 = (code *)0x0;
    pcStack_150 = (code *)0x0;
    auStack_168 = (undefined1  [8])0x0;
    plStack_160 = (long *)0x0;
    puStack_178 = (undefined *)auVar11;
    func_0x05d84ba0(auStack_168);
    func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
    if ((lStack_1a0 == lStack_d0) && ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
      if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
        bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
      }
      else {
        pppppppuVar24 = pppppppuStack_f8;
        if (cStack_d4 == '\x02') {
          pppppppuVar24 = &pppppppuStack_f8;
        }
        lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
        bVar31 = lVar9 != 0;
      }
    }
    else {
      bVar31 = false;
    }
    if (pcStack_1b0 != (code *)0x0) {
      (*pcStack_1b0)(&uStack_1c8);
    }
    if (pcStack_150 != (code *)0x0) {
      (*pcStack_150)(auStack_168);
    }
    if (bVar31) {
      lVar9 = puVar5[5];
      if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
        (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))(auStack_168,puVar10);
      }
      *(undefined1 *)puVar10 = 0;
      *(undefined4 *)(puVar10 + 7) = 0;
      pcStack_1b8 = (code *)&UNK_084a8450;
      pcStack_1b0 = (code *)0x0;
      uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x33bdfcfb6);
      lStack_198 = 0;
      puStack_190 = &UNK_084a8370;
      lStack_148 = plStack_108[4];
      auStack_168 = (undefined1  [8])*plStack_108;
      plStack_160 = (long *)plStack_108[1];
      pcStack_158 = (code *)plStack_108[2];
      pcStack_150 = (code *)plStack_108[3];
      plVar20 = (long *)plStack_108[2];
      lStack_1a0 = lVar9;
      if (plVar20 == (long *)0x0) {
        pcStack_158 = (code *)0x0;
        uStack_1c8 = puVar10;
      }
      else {
        uStack_1c8 = puVar10;
        pcStack_158 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,0);
      }
      puStack_178 = &UNK_0f11b218;
      func_0x0ed75bc0(&puStack_178,plVar30,&uStack_1c8,uStack_110,auStack_168);
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(&uStack_1c8);
      }
    }
    else {
      plVar20 = (long *)puVar5[5];
      if (DAT_0f5d2a08 == '\0') {
        iVar4 = func_0x04108328(&DAT_0f5d2a08);
        if (iVar4 != 0) {
          func_0x084a9740();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2988,0xf53dab8);
          func_0x0410844d(&DAT_0f5d2a08);
        }
      }
      plVar7 = (long *)(*plVar20 +
                       (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                              *(uint *)(_DAT_0f5d2988 + 4)) * 8);
      do {
        lVar9 = *plVar7;
        if (lVar9 == -1) {
          plVar14 = (long *)plVar20[4];
          plVar7 = plVar14;
          goto LAB_084de7a4;
        }
        plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
      } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5d2988 + 4));
      plVar14 = (long *)plVar20[4];
LAB_084de7a4:
      if (plVar7 == plVar14) {
        puVar26 = &DAT_0f5d2988;
      }
      else {
        puVar26 = (undefined *)plVar7[2];
      }
      auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
      if (auVar11 == (undefined1  [8])0x0) {
        auStack_168 = (undefined1  [8])0x0;
        plStack_160 = (long *)0x0;
        func_0x048b0d20(auStack_168);
        auVar11 = auStack_168;
        plVar20 = plStack_160;
      }
      lStack_138 = 0;
      puStack_130 = (undefined *)0x0;
      lStack_148 = 0;
      lStack_140 = 0;
      pcStack_158 = (code *)0x0;
      pcStack_150 = (code *)0x0;
      auStack_168 = (undefined1  [8])0x0;
      plStack_160 = (long *)0x0;
      puStack_178 = (undefined *)auVar11;
      plStack_170 = plVar20;
      func_0x05d84ba0(auStack_168);
      func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
      if ((lStack_1a0 == lStack_d0) && ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
        if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
          bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
        }
        else {
          pppppppuVar24 = pppppppuStack_f8;
          if (cStack_d4 == '\x02') {
            pppppppuVar24 = &pppppppuStack_f8;
          }
          lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
          bVar31 = lVar9 != 0;
        }
      }
      else {
        bVar31 = false;
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(&uStack_1c8);
      }
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(auStack_168);
      }
      if (bVar31) {
        lVar9 = puVar5[5];
        if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
          (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))(auStack_168,puVar10);
        }
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *(undefined4 *)(puVar10 + 7) = 1;
        pcStack_1b8 = (code *)&UNK_084a9a40;
        pcStack_1b0 = (code *)0x0;
        uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x376a99461);
        lStack_198 = 0;
        puStack_190 = &UNK_084a9960;
        lStack_148 = plStack_108[4];
        auStack_168 = (undefined1  [8])*plStack_108;
        plStack_160 = (long *)plStack_108[1];
        pcStack_158 = (code *)plStack_108[2];
        pcStack_150 = (code *)plStack_108[3];
        plVar20 = (long *)plStack_108[2];
        lStack_1a0 = lVar9;
        if (plVar20 == (long *)0x0) {
          pcStack_158 = (code *)0x0;
          uStack_1c8 = puVar10;
        }
        else {
          uStack_1c8 = puVar10;
          pcStack_158 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,1);
        }
        puStack_178 = &UNK_0f11b298;
        func_0x0ed75bc0(&puStack_178,plVar30,&uStack_1c8,uStack_110,auStack_168);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(&uStack_1c8);
        }
      }
      else {
        plVar20 = (long *)puVar5[5];
        if (DAT_0f5d2ac0 == '\0') {
          iVar4 = func_0x04108328(&DAT_0f5d2ac0);
          if (iVar4 != 0) {
            func_0x084ac110();
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2a40,0xf53dab8);
            func_0x0410844d(&DAT_0f5d2ac0);
          }
        }
        plVar7 = (long *)(*plVar20 +
                         (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                *(uint *)(_DAT_0f5d2a40 + 4)) * 8);
        do {
          lVar9 = *plVar7;
          if (lVar9 == -1) {
            plVar14 = (long *)plVar20[4];
            plVar7 = plVar14;
            goto LAB_084deb31;
          }
          plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
        } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5d2a40 + 4));
        plVar14 = (long *)plVar20[4];
LAB_084deb31:
        if (plVar7 == plVar14) {
          puVar26 = &DAT_0f5d2a40;
        }
        else {
          puVar26 = (undefined *)plVar7[2];
        }
        auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
        if (auVar11 == (undefined1  [8])0x0) {
          auStack_168 = (undefined1  [8])0x0;
          plStack_160 = (long *)0x0;
          func_0x048b0d20(auStack_168);
          auVar11 = auStack_168;
          plVar20 = plStack_160;
        }
        lStack_138 = 0;
        puStack_130 = (undefined *)0x0;
        lStack_148 = 0;
        lStack_140 = 0;
        pcStack_158 = (code *)0x0;
        pcStack_150 = (code *)0x0;
        auStack_168 = (undefined1  [8])0x0;
        plStack_160 = (long *)0x0;
        puStack_178 = (undefined *)auVar11;
        plStack_170 = plVar20;
        func_0x05d84ba0(auStack_168);
        func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
        if ((lStack_1a0 == lStack_d0) && ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
          if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
            bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
          }
          else {
            pppppppuVar24 = pppppppuStack_f8;
            if (cStack_d4 == '\x02') {
              pppppppuVar24 = &pppppppuStack_f8;
            }
            lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
            bVar31 = lVar9 != 0;
          }
        }
        else {
          bVar31 = false;
        }
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(&uStack_1c8);
        }
        if (pcStack_150 != (code *)0x0) {
          (*pcStack_150)(auStack_168);
        }
        if (bVar31) {
          lVar9 = puVar5[5];
          if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
            (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))(auStack_168,puVar10);
          }
          *(undefined4 *)puVar10 = 0;
          *(undefined4 *)(puVar10 + 7) = 2;
          pcStack_1b8 = (code *)&UNK_084ac3d0;
          pcStack_1b0 = (code *)0x0;
          uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x32cda6597);
          lStack_198 = 0;
          puStack_190 = &UNK_084ac2f0;
          lStack_148 = plStack_108[4];
          auStack_168 = (undefined1  [8])*plStack_108;
          plStack_160 = (long *)plStack_108[1];
          pcStack_158 = (code *)plStack_108[2];
          pcStack_150 = (code *)plStack_108[3];
          plVar20 = (long *)plStack_108[2];
          lStack_1a0 = lVar9;
          if (plVar20 == (long *)0x0) {
            pcStack_158 = (code *)0x0;
            uStack_1c8 = puVar10;
          }
          else {
            uStack_1c8 = puVar10;
            pcStack_158 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,2);
          }
          puStack_178 = &UNK_0f11b318;
          func_0x0ed75bc0(&puStack_178,plVar30,&uStack_1c8,uStack_110,auStack_168);
          if (pcStack_1b0 != (code *)0x0) {
            (*pcStack_1b0)(&uStack_1c8);
          }
        }
        else {
          plVar20 = (long *)puVar5[5];
          if (DAT_0f5d2b78 == '\0') {
            iVar4 = func_0x04108328(&DAT_0f5d2b78);
            if (iVar4 != 0) {
              func_0x084ad430();
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2af8,0xf53dab8);
              func_0x0410844d(&DAT_0f5d2b78);
            }
          }
          plVar7 = (long *)(*plVar20 +
                           (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                  *(uint *)(_DAT_0f5d2af8 + 4)) * 8);
          do {
            lVar9 = *plVar7;
            if (lVar9 == -1) {
              plVar14 = (long *)plVar20[4];
              plVar7 = plVar14;
              goto LAB_084dedc9;
            }
            plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
          } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5d2af8 + 4));
          plVar14 = (long *)plVar20[4];
LAB_084dedc9:
          if (plVar7 == plVar14) {
            puVar26 = &DAT_0f5d2af8;
          }
          else {
            puVar26 = (undefined *)plVar7[2];
          }
          auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
          if (auVar11 == (undefined1  [8])0x0) {
            auStack_168 = (undefined1  [8])0x0;
            plStack_160 = (long *)0x0;
            func_0x048b0d20(auStack_168);
            auVar11 = auStack_168;
            plVar20 = plStack_160;
          }
          lStack_138 = 0;
          puStack_130 = (undefined *)0x0;
          lStack_148 = 0;
          lStack_140 = 0;
          pcStack_158 = (code *)0x0;
          pcStack_150 = (code *)0x0;
          auStack_168 = (undefined1  [8])0x0;
          plStack_160 = (long *)0x0;
          puStack_178 = (undefined *)auVar11;
          plStack_170 = plVar20;
          func_0x05d84ba0(auStack_168);
          func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
          if ((lStack_1a0 == lStack_d0) && ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0)))
          {
            if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
              bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
            }
            else {
              pppppppuVar24 = pppppppuStack_f8;
              if (cStack_d4 == '\x02') {
                pppppppuVar24 = &pppppppuStack_f8;
              }
              lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
              bVar31 = lVar9 != 0;
            }
          }
          else {
            bVar31 = false;
          }
          if (pcStack_1b0 != (code *)0x0) {
            (*pcStack_1b0)(&uStack_1c8);
          }
          if (pcStack_150 != (code *)0x0) {
            (*pcStack_150)(auStack_168);
          }
          if (bVar31) {
            lVar9 = puVar5[5];
            if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
              (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))(auStack_168,puVar10);
            }
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 7) = 3;
            pcStack_1b8 = (code *)&UNK_084ad6e0;
            pcStack_1b0 = (code *)0x0;
            uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x3498cec7c);
            lStack_198 = 0;
            puStack_190 = &UNK_084ad600;
            lStack_148 = plStack_108[4];
            auStack_168 = (undefined1  [8])*plStack_108;
            plStack_160 = (long *)plStack_108[1];
            pcStack_158 = (code *)plStack_108[2];
            pcStack_150 = (code *)plStack_108[3];
            plVar20 = (long *)plStack_108[2];
            lStack_1a0 = lVar9;
            if (plVar20 == (long *)0x0) {
              pcStack_158 = (code *)0x0;
              uStack_1c8 = puVar10;
            }
            else {
              uStack_1c8 = puVar10;
              pcStack_158 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,3);
            }
            puStack_178 = &UNK_0f11b398;
            func_0x0ed75bc0(&puStack_178,plVar30,&uStack_1c8,uStack_110,auStack_168);
            if (pcStack_1b0 != (code *)0x0) {
              (*pcStack_1b0)(&uStack_1c8);
            }
          }
          else {
            plVar20 = (long *)puVar5[5];
            if (DAT_0f5d2c30 == '\0') {
              iVar4 = func_0x04108328(&DAT_0f5d2c30);
              if (iVar4 != 0) {
                func_0x084af0a0();
                func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2bb0,0xf53dab8);
                func_0x0410844d(&DAT_0f5d2c30);
              }
            }
            plVar7 = (long *)(*plVar20 +
                             (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                    *(uint *)(_DAT_0f5d2bb0 + 4)) * 8);
            do {
              lVar9 = *plVar7;
              if (lVar9 == -1) {
                plVar14 = (long *)plVar20[4];
                plVar7 = plVar14;
                goto LAB_084df052;
              }
              plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
            } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5d2bb0 + 4));
            plVar14 = (long *)plVar20[4];
LAB_084df052:
            if (plVar7 == plVar14) {
              puVar26 = &DAT_0f5d2bb0;
            }
            else {
              puVar26 = (undefined *)plVar7[2];
            }
            auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
            if (auVar11 == (undefined1  [8])0x0) {
              auStack_168 = (undefined1  [8])0x0;
              plStack_160 = (long *)0x0;
              func_0x048b0d20(auStack_168);
              auVar11 = auStack_168;
              plVar20 = plStack_160;
            }
            lStack_138 = 0;
            puStack_130 = (undefined *)0x0;
            lStack_148 = 0;
            lStack_140 = 0;
            pcStack_158 = (code *)0x0;
            pcStack_150 = (code *)0x0;
            auStack_168 = (undefined1  [8])0x0;
            plStack_160 = (long *)0x0;
            puStack_178 = (undefined *)auVar11;
            plStack_170 = plVar20;
            func_0x05d84ba0(auStack_168);
            func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
            if ((lStack_1a0 == lStack_d0) && ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))
               ) {
              if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
              }
              else {
                pppppppuVar24 = pppppppuStack_f8;
                if (cStack_d4 == '\x02') {
                  pppppppuVar24 = &pppppppuStack_f8;
                }
                lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                bVar31 = lVar9 != 0;
              }
            }
            else {
              bVar31 = false;
            }
            if (pcStack_1b0 != (code *)0x0) {
              (*pcStack_1b0)(&uStack_1c8);
            }
            if (pcStack_150 != (code *)0x0) {
              (*pcStack_150)(auStack_168);
            }
            if (bVar31) {
              lVar9 = puVar5[5];
              if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                          (auStack_168,puVar10);
              }
              puVar10[2] = 0;
              puVar10[3] = 0;
              *puVar10 = 0;
              puVar10[1] = 0;
              *(undefined4 *)(puVar10 + 2) = 1;
              puVar10[4] = 0;
              puVar10[5] = 0;
              puVar10[6] = 0;
              *(undefined4 *)(puVar10 + 7) = 4;
              pcStack_1b8 = (code *)&UNK_084af3b0;
              pcStack_1b0 = (code *)0x0;
              uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x39150802e);
              lStack_198 = 0;
              puStack_190 = &UNK_084af2d0;
              lStack_148 = plStack_108[4];
              auStack_168 = (undefined1  [8])*plStack_108;
              plStack_160 = (long *)plStack_108[1];
              pcStack_158 = (code *)plStack_108[2];
              pcStack_150 = (code *)plStack_108[3];
              plVar20 = (long *)plStack_108[2];
              lStack_1a0 = lVar9;
              if (plVar20 == (long *)0x0) {
                pcStack_158 = (code *)0x0;
                uStack_1c8 = puVar10;
              }
              else {
                uStack_1c8 = puVar10;
                pcStack_158 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,4);
              }
              puStack_178 = &UNK_0f11b418;
              func_0x0ed75bc0(&puStack_178,plVar30,&uStack_1c8,uStack_110,auStack_168);
              if (pcStack_1b0 != (code *)0x0) {
                (*pcStack_1b0)(&uStack_1c8);
              }
            }
            else {
              plVar20 = (long *)puVar5[5];
              if (DAT_0f5d2ce8 == '\0') {
                iVar4 = func_0x04108328(&DAT_0f5d2ce8);
                if (iVar4 != 0) {
                  func_0x084b1d80();
                  func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2c68,0xf53dab8);
                  func_0x0410844d(&DAT_0f5d2ce8);
                }
              }
              plVar7 = (long *)(*plVar20 +
                               (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                      *(uint *)(_DAT_0f5d2c68 + 4)) * 8);
              do {
                lVar9 = *plVar7;
                if (lVar9 == -1) {
                  plVar14 = (long *)plVar20[4];
                  plVar7 = plVar14;
                  goto LAB_084df313;
                }
                plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
              } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5d2c68 + 4));
              plVar14 = (long *)plVar20[4];
LAB_084df313:
              if (plVar7 == plVar14) {
                puVar26 = &DAT_0f5d2c68;
              }
              else {
                puVar26 = (undefined *)plVar7[2];
              }
              auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
              if (auVar11 == (undefined1  [8])0x0) {
                auStack_168 = (undefined1  [8])0x0;
                plStack_160 = (long *)0x0;
                func_0x048b0d20(auStack_168);
                auVar11 = auStack_168;
                plVar20 = plStack_160;
              }
              lStack_138 = 0;
              puStack_130 = (undefined *)0x0;
              lStack_148 = 0;
              lStack_140 = 0;
              pcStack_158 = (code *)0x0;
              pcStack_150 = (code *)0x0;
              auStack_168 = (undefined1  [8])0x0;
              plStack_160 = (long *)0x0;
              puStack_178 = (undefined *)auVar11;
              plStack_170 = plVar20;
              func_0x05d84ba0(auStack_168);
              func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
              if ((lStack_1a0 == lStack_d0) &&
                 ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                  bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                }
                else {
                  pppppppuVar24 = pppppppuStack_f8;
                  if (cStack_d4 == '\x02') {
                    pppppppuVar24 = &pppppppuStack_f8;
                  }
                  lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                  bVar31 = lVar9 != 0;
                }
              }
              else {
                bVar31 = false;
              }
              if (pcStack_1b0 != (code *)0x0) {
                (*pcStack_1b0)(&uStack_1c8);
              }
              if (pcStack_150 != (code *)0x0) {
                (*pcStack_150)(auStack_168);
              }
              if (bVar31) {
                lVar9 = puVar5[5];
                if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                  (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                            (auStack_168,puVar10);
                }
                *(undefined4 *)(puVar10 + 1) = 0;
                *puVar10 = 0;
                *(undefined4 *)(puVar10 + 7) = 5;
                pcStack_1b8 = (code *)&UNK_084b2040;
                pcStack_1b0 = (code *)0x0;
                uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x35593c6dc);
                lStack_198 = 0;
                puStack_190 = &UNK_084b1f60;
                lStack_148 = plStack_108[4];
                auStack_168 = (undefined1  [8])*plStack_108;
                plStack_160 = (long *)plStack_108[1];
                pcStack_158 = (code *)plStack_108[2];
                pcStack_150 = (code *)plStack_108[3];
                plVar20 = (long *)plStack_108[2];
                lStack_1a0 = lVar9;
                if (plVar20 == (long *)0x0) {
                  pcStack_158 = (code *)0x0;
                  uStack_1c8 = puVar10;
                }
                else {
                  uStack_1c8 = puVar10;
                  pcStack_158 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,5);
                }
                puStack_178 = &UNK_0f11b498;
                func_0x0ed75bc0(&puStack_178,plVar30,&uStack_1c8,uStack_110,auStack_168);
                if (pcStack_1b0 != (code *)0x0) {
                  (*pcStack_1b0)(&uStack_1c8);
                }
              }
              else {
                plVar20 = (long *)puVar5[5];
                if (DAT_0f5d2da0 == '\0') {
                  iVar4 = func_0x04108328(&DAT_0f5d2da0);
                  if (iVar4 != 0) {
                    func_0x084b3d10();
                    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2d20,0xf53dab8);
                    func_0x0410844d(&DAT_0f5d2da0);
                  }
                }
                plVar7 = (long *)(*plVar20 +
                                 (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                        *(uint *)(_DAT_0f5d2d20 + 4)) * 8);
                do {
                  lVar9 = *plVar7;
                  if (lVar9 == -1) {
                    plVar14 = (long *)plVar20[4];
                    plVar7 = plVar14;
                    goto LAB_084df5c2;
                  }
                  plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
                } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5d2d20 + 4));
                plVar14 = (long *)plVar20[4];
LAB_084df5c2:
                if (plVar7 == plVar14) {
                  puVar26 = &DAT_0f5d2d20;
                }
                else {
                  puVar26 = (undefined *)plVar7[2];
                }
                auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
                if (auVar11 == (undefined1  [8])0x0) {
                  auStack_168 = (undefined1  [8])0x0;
                  plStack_160 = (long *)0x0;
                  func_0x048b0d20(auStack_168);
                  auVar11 = auStack_168;
                  plVar20 = plStack_160;
                }
                lStack_138 = 0;
                puStack_130 = (undefined *)0x0;
                lStack_148 = 0;
                lStack_140 = 0;
                pcStack_158 = (code *)0x0;
                pcStack_150 = (code *)0x0;
                auStack_168 = (undefined1  [8])0x0;
                plStack_160 = (long *)0x0;
                puStack_178 = (undefined *)auVar11;
                plStack_170 = plVar20;
                func_0x05d84ba0(auStack_168);
                func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                if ((lStack_1a0 == lStack_d0) &&
                   ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                  if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                    bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                  }
                  else {
                    pppppppuVar24 = pppppppuStack_f8;
                    if (cStack_d4 == '\x02') {
                      pppppppuVar24 = &pppppppuStack_f8;
                    }
                    lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                    bVar31 = lVar9 != 0;
                    puVar5 = puStack_118;
                    plVar30 = plStack_100;
                  }
                }
                else {
                  bVar31 = false;
                }
                if (pcStack_1b0 != (code *)0x0) {
                  (*pcStack_1b0)(&uStack_1c8);
                }
                if (pcStack_150 != (code *)0x0) {
                  (*pcStack_150)(auStack_168);
                }
                if (bVar31) {
                  lVar9 = puVar5[5];
                  if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                    (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                              (auStack_168,puVar10);
                  }
                  *puVar10 = 0;
                  puVar10[1] = 0;
                  *(undefined4 *)(puVar10 + 7) = 6;
                  pcStack_1b8 = (code *)&UNK_084b3fc0;
                  pcStack_1b0 = (code *)0x0;
                  uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x3ae7334c0);
                  lStack_198 = 0;
                  puStack_190 = &UNK_084b3ee0;
                  lStack_148 = plStack_108[4];
                  auStack_168 = (undefined1  [8])*plStack_108;
                  plStack_160 = (long *)plStack_108[1];
                  pcStack_158 = (code *)plStack_108[2];
                  pcStack_150 = (code *)plStack_108[3];
                  plVar20 = (long *)plStack_108[2];
                  lStack_1a0 = lVar9;
                  if (plVar20 == (long *)0x0) {
                    pcStack_158 = (code *)0x0;
                    uStack_1c8 = puVar10;
                  }
                  else {
                    uStack_1c8 = puVar10;
                    pcStack_158 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,6);
                  }
                  puStack_178 = &UNK_0f11b518;
                  func_0x0ed75bc0(&puStack_178,plVar30,&uStack_1c8,uStack_110,auStack_168);
                  if (pcStack_1b0 != (code *)0x0) {
                    (*pcStack_1b0)(&uStack_1c8);
                  }
                }
                else {
                  plVar20 = (long *)puVar5[5];
                  if (DAT_0f5d2e58 == '\0') {
                    iVar4 = func_0x04108328(&DAT_0f5d2e58);
                    if (iVar4 != 0) {
                      func_0x084b5fb0();
                      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2dd8,0xf53dab8);
                      func_0x0410844d(&DAT_0f5d2e58);
                    }
                  }
                  plVar7 = (long *)(*plVar20 +
                                   (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                          *(uint *)(_DAT_0f5d2dd8 + 4)) * 8);
                  do {
                    lVar9 = *plVar7;
                    if (lVar9 == -1) {
                      plVar14 = (long *)plVar20[4];
                      plVar7 = plVar14;
                      goto LAB_084df869;
                    }
                    plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
                  } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5d2dd8 + 4))
                  ;
                  plVar14 = (long *)plVar20[4];
LAB_084df869:
                  if (plVar7 == plVar14) {
                    puVar26 = &DAT_0f5d2dd8;
                  }
                  else {
                    puVar26 = (undefined *)plVar7[2];
                  }
                  auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
                  if (auVar11 == (undefined1  [8])0x0) {
                    auStack_168 = (undefined1  [8])0x0;
                    plStack_160 = (long *)0x0;
                    func_0x048b0d20(auStack_168);
                    auVar11 = auStack_168;
                    plVar20 = plStack_160;
                  }
                  lStack_138 = 0;
                  puStack_130 = (undefined *)0x0;
                  lStack_148 = 0;
                  lStack_140 = 0;
                  pcStack_158 = (code *)0x0;
                  pcStack_150 = (code *)0x0;
                  auStack_168 = (undefined1  [8])0x0;
                  plStack_160 = (long *)0x0;
                  puStack_178 = (undefined *)auVar11;
                  plStack_170 = plVar20;
                  func_0x05d84ba0(auStack_168);
                  func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                  if ((lStack_1a0 == lStack_d0) &&
                     ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                    if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                      bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                    }
                    else {
                      pppppppuVar24 = pppppppuStack_f8;
                      if (cStack_d4 == '\x02') {
                        pppppppuVar24 = &pppppppuStack_f8;
                      }
                      lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                      bVar31 = lVar9 != 0;
                      puVar5 = puStack_118;
                      plVar30 = plStack_100;
                    }
                  }
                  else {
                    bVar31 = false;
                  }
                  if (pcStack_1b0 != (code *)0x0) {
                    (*pcStack_1b0)(&uStack_1c8);
                  }
                  if (pcStack_150 != (code *)0x0) {
                    (*pcStack_150)(auStack_168);
                  }
                  if (bVar31) {
                    lVar9 = puVar5[5];
                    if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                      (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                                (auStack_168,puVar10);
                    }
                    *puVar10 = 0;
                    puVar10[1] = 0;
                    puVar10[2] = 0;
                    *(undefined4 *)(puVar10 + 7) = 7;
                    pcStack_1b8 = (code *)&UNK_084b62b0;
                    pcStack_1b0 = (code *)0x0;
                    uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x3abe7874f);
                    lStack_198 = 0;
                    puStack_190 = &UNK_084b61d0;
                    lStack_148 = plStack_108[4];
                    auStack_168 = (undefined1  [8])*plStack_108;
                    plStack_160 = (long *)plStack_108[1];
                    pcStack_158 = (code *)plStack_108[2];
                    pcStack_150 = (code *)plStack_108[3];
                    plVar20 = (long *)plStack_108[2];
                    lStack_1a0 = lVar9;
                    if (plVar20 == (long *)0x0) {
                      pcStack_158 = (code *)0x0;
                      uStack_1c8 = puVar10;
                    }
                    else {
                      uStack_1c8 = puVar10;
                      pcStack_158 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,7);
                    }
                    puStack_178 = &UNK_0f11b598;
                    func_0x0ed75bc0(&puStack_178,plVar30,&uStack_1c8,uStack_110,auStack_168);
                    if (pcStack_1b0 != (code *)0x0) {
                      (*pcStack_1b0)(&uStack_1c8);
                    }
                  }
                  else {
                    plVar20 = (long *)puVar5[5];
                    if (DAT_0f5d2f10 == '\0') {
                      iVar4 = func_0x04108328(&DAT_0f5d2f10);
                      if (iVar4 != 0) {
                        func_0x084b8000();
                        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2e90,0xf53dab8);
                        func_0x0410844d(&DAT_0f5d2f10);
                      }
                    }
                    plVar7 = (long *)(*plVar20 +
                                     (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                                            *(uint *)(_DAT_0f5d2e90 + 4)) * 8);
                    do {
                      lVar9 = *plVar7;
                      if (lVar9 == -1) {
                        plVar14 = (long *)plVar20[4];
                        plVar7 = plVar14;
                        goto LAB_084dfb18;
                      }
                      plVar7 = (long *)(plVar20[3] + lVar9 * 0x18);
                    } while (*(uint *)(plVar20[3] + 8 + lVar9 * 0x18) !=
                             *(uint *)(_DAT_0f5d2e90 + 4));
                    plVar14 = (long *)plVar20[4];
LAB_084dfb18:
                    if (plVar7 == plVar14) {
                      puVar26 = &DAT_0f5d2e90;
                    }
                    else {
                      puVar26 = (undefined *)plVar7[2];
                    }
                    auVar11 = (undefined1  [8])func_0x048b0c90(plVar20,puVar26,uVar25,1);
                    if (auVar11 == (undefined1  [8])0x0) {
                      auStack_168 = (undefined1  [8])0x0;
                      plStack_160 = (long *)0x0;
                      func_0x048b0d20(auStack_168);
                      auVar11 = auStack_168;
                      plVar20 = plStack_160;
                    }
                    lStack_138 = 0;
                    puStack_130 = (undefined *)0x0;
                    lStack_148 = 0;
                    lStack_140 = 0;
                    pcStack_158 = (code *)0x0;
                    pcStack_150 = (code *)0x0;
                    auStack_168 = (undefined1  [8])0x0;
                    plStack_160 = (long *)0x0;
                    puStack_178 = (undefined *)auVar11;
                    plStack_170 = plVar20;
                    func_0x05d84ba0(auStack_168);
                    func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                    if ((lStack_1a0 == lStack_d0) &&
                       ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                      if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                        bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                      }
                      else {
                        pppppppuVar24 = pppppppuStack_f8;
                        if (cStack_d4 == '\x02') {
                          pppppppuVar24 = &pppppppuStack_f8;
                        }
                        lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                        bVar31 = lVar9 != 0;
                        puVar5 = puStack_118;
                        plVar30 = plStack_100;
                      }
                    }
                    else {
                      bVar31 = false;
                    }
                    if (pcStack_1b0 != (code *)0x0) {
                      (*pcStack_1b0)(&uStack_1c8);
                    }
                    if (pcStack_150 != (code *)0x0) {
                      (*pcStack_150)(auStack_168);
                    }
                    if (bVar31) {
                      lVar9 = puVar5[5];
                      if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                        (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                                  (auStack_168,puVar10);
                      }
                      puVar10[4] = 0;
                      puVar10[5] = 0;
                      puVar10[2] = 0;
                      puVar10[3] = 0;
                      *puVar10 = 0;
                      puVar10[1] = 0;
                      puVar10[6] = 0;
                      *(undefined4 *)(puVar10 + 7) = 8;
                      pcStack_1b8 = (code *)&UNK_084b8310;
                      pcStack_1b0 = (code *)0x0;
                      uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x3170e7885);
                      lStack_198 = 0;
                      puStack_190 = &UNK_084b8230;
                      lStack_148 = plStack_108[4];
                      auStack_168 = (undefined1  [8])*plStack_108;
                      plStack_160 = (long *)plStack_108[1];
                      pcStack_158 = (code *)plStack_108[2];
                      pcStack_150 = (code *)plStack_108[3];
                      plVar20 = (long *)plStack_108[2];
                      lStack_1a0 = lVar9;
                      if (plVar20 == (long *)0x0) {
                        pcStack_158 = (code *)0x0;
                        uStack_1c8 = puVar10;
                      }
                      else {
                        uStack_1c8 = puVar10;
                        pcStack_158 = (code *)(**(code **)(*plVar20 + 0x30))(plVar20,8);
                      }
                      puStack_178 = &UNK_0f11b618;
                      func_0x0ed75bc0(&puStack_178,plVar30,&uStack_1c8,uStack_110,auStack_168);
                      if (pcStack_1b0 != (code *)0x0) {
                        (*pcStack_1b0)(&uStack_1c8);
                      }
                    }
                    else {
                      plVar30 = (long *)puVar5[5];
                      if (DAT_0f5d2fc8 == '\0') {
                        iVar4 = func_0x04108328(&DAT_0f5d2fc8);
                        if (iVar4 != 0) {
                          func_0x084ba6c0();
                          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2f48,0xf53dab8);
                          func_0x0410844d(&DAT_0f5d2fc8);
                        }
                      }
                      plVar20 = (long *)(*plVar30 +
                                        (ulong)((int)((ulong)(plVar30[1] - *plVar30) >> 3) - 1U &
                                               *(uint *)(_DAT_0f5d2f48 + 4)) * 8);
                      do {
                        lVar9 = *plVar20;
                        if (lVar9 == -1) {
                          plVar7 = (long *)plVar30[4];
                          plVar20 = plVar7;
                          goto LAB_084dfdd1;
                        }
                        plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                      } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                               *(uint *)(_DAT_0f5d2f48 + 4));
                      plVar7 = (long *)plVar30[4];
LAB_084dfdd1:
                      if (plVar20 == plVar7) {
                        puVar26 = &DAT_0f5d2f48;
                      }
                      else {
                        puVar26 = (undefined *)plVar20[2];
                      }
                      auVar11 = (undefined1  [8])func_0x048b0c90(plVar30,puVar26,uVar25,1);
                      if (auVar11 == (undefined1  [8])0x0) {
                        auStack_168 = (undefined1  [8])0x0;
                        plStack_160 = (long *)0x0;
                        func_0x048b0d20(auStack_168);
                        auVar11 = auStack_168;
                        plVar30 = plStack_160;
                      }
                      lStack_138 = 0;
                      puStack_130 = (undefined *)0x0;
                      lStack_148 = 0;
                      lStack_140 = 0;
                      pcStack_158 = (code *)0x0;
                      pcStack_150 = (code *)0x0;
                      auStack_168 = (undefined1  [8])0x0;
                      plStack_160 = (long *)0x0;
                      puStack_178 = (undefined *)auVar11;
                      plStack_170 = plVar30;
                      func_0x05d84ba0(auStack_168);
                      func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                      if (lStack_1a0 == lStack_d0) {
                        puVar5 = puStack_118;
                        if ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0)) {
                          if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                            bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                          }
                          else {
                            pppppppuVar24 = pppppppuStack_f8;
                            if (cStack_d4 == '\x02') {
                              pppppppuVar24 = &pppppppuStack_f8;
                            }
                            lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                            bVar31 = lVar9 != 0;
                            puVar5 = puStack_118;
                          }
                        }
                        else {
                          bVar31 = false;
                        }
                      }
                      else {
                        bVar31 = false;
                      }
                      if (pcStack_1b0 != (code *)0x0) {
                        (*pcStack_1b0)(&uStack_1c8);
                      }
                      if (pcStack_150 != (code *)0x0) {
                        (*pcStack_150)(auStack_168);
                      }
                      if (bVar31) {
                        lVar9 = puVar5[5];
                        if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                          (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                                    (auStack_168,puVar10);
                        }
                        *(undefined4 *)(puVar10 + 1) = 0;
                        *puVar10 = 0;
                        *(undefined4 *)(puVar10 + 7) = 9;
                        pcStack_1b8 = (code *)&UNK_084ba980;
                        pcStack_1b0 = (code *)0x0;
                        uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x362edb450);
                        lStack_198 = 0;
                        puStack_190 = &UNK_084ba8a0;
                        lStack_148 = plStack_108[4];
                        auStack_168 = (undefined1  [8])*plStack_108;
                        plStack_160 = (long *)plStack_108[1];
                        pcStack_158 = (code *)plStack_108[2];
                        pcStack_150 = (code *)plStack_108[3];
                        plVar30 = (long *)plStack_108[2];
                        lStack_1a0 = lVar9;
                        if (plVar30 == (long *)0x0) {
                          pcStack_158 = (code *)0x0;
                          uStack_1c8 = puVar10;
                        }
                        else {
                          uStack_1c8 = puVar10;
                          pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))(plVar30,9);
                        }
                        puStack_178 = &UNK_0f11b698;
                        func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,uStack_110,auStack_168)
                        ;
                        if (pcStack_1b0 != (code *)0x0) {
                          (*pcStack_1b0)(&uStack_1c8);
                        }
                      }
                      else {
                        plVar30 = (long *)puVar5[5];
                        if (DAT_0f5d3080 == '\0') {
                          iVar4 = func_0x04108328(&DAT_0f5d3080);
                          if (iVar4 != 0) {
                            func_0x084bc6b0();
                            func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3000,0xf53dab8);
                            func_0x0410844d(&DAT_0f5d3080);
                          }
                        }
                        plVar20 = (long *)(*plVar30 +
                                          (ulong)((int)((ulong)(plVar30[1] - *plVar30) >> 3) - 1U &
                                                 *(uint *)(_DAT_0f5d3000 + 4)) * 8);
                        do {
                          lVar9 = *plVar20;
                          if (lVar9 == -1) {
                            plVar7 = (long *)plVar30[4];
                            plVar20 = plVar7;
                            goto LAB_084e01a3;
                          }
                          plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                        } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                 *(uint *)(_DAT_0f5d3000 + 4));
                        plVar7 = (long *)plVar30[4];
LAB_084e01a3:
                        if (plVar20 == plVar7) {
                          puVar26 = &DAT_0f5d3000;
                        }
                        else {
                          puVar26 = (undefined *)plVar20[2];
                        }
                        auVar11 = (undefined1  [8])func_0x048b0c90(plVar30,puVar26,uVar25,1);
                        if (auVar11 == (undefined1  [8])0x0) {
                          auStack_168 = (undefined1  [8])0x0;
                          plStack_160 = (long *)0x0;
                          func_0x048b0d20(auStack_168);
                          auVar11 = auStack_168;
                          plVar30 = plStack_160;
                        }
                        lStack_138 = 0;
                        puStack_130 = (undefined *)0x0;
                        lStack_148 = 0;
                        lStack_140 = 0;
                        pcStack_158 = (code *)0x0;
                        pcStack_150 = (code *)0x0;
                        auStack_168 = (undefined1  [8])0x0;
                        plStack_160 = (long *)0x0;
                        puStack_178 = (undefined *)auVar11;
                        plStack_170 = plVar30;
                        func_0x05d84ba0(auStack_168);
                        func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                        if ((lStack_1a0 == lStack_d0) &&
                           ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                          if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                            bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                          }
                          else {
                            pppppppuVar24 = pppppppuStack_f8;
                            if (cStack_d4 == '\x02') {
                              pppppppuVar24 = &pppppppuStack_f8;
                            }
                            lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                            bVar31 = lVar9 != 0;
                          }
                        }
                        else {
                          bVar31 = false;
                        }
                        if (pcStack_1b0 != (code *)0x0) {
                          (*pcStack_1b0)(&uStack_1c8);
                        }
                        if (pcStack_150 != (code *)0x0) {
                          (*pcStack_150)(auStack_168);
                        }
                        if (bVar31) {
                          lVar9 = puStack_118[5];
                          if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                            (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                                      (auStack_168,puVar10);
                          }
                          *(undefined4 *)puVar10 = 0;
                          *(undefined4 *)(puVar10 + 7) = 10;
                          pcStack_1b8 = (code *)&UNK_084bc970;
                          pcStack_1b0 = (code *)0x0;
                          uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x349118b7e);
                          lStack_198 = 0;
                          puStack_190 = &UNK_084bc890;
                          lStack_148 = plStack_108[4];
                          auStack_168 = (undefined1  [8])*plStack_108;
                          plStack_160 = (long *)plStack_108[1];
                          pcStack_158 = (code *)plStack_108[2];
                          pcStack_150 = (code *)plStack_108[3];
                          plVar30 = (long *)plStack_108[2];
                          lStack_1a0 = lVar9;
                          if (plVar30 == (long *)0x0) {
                            pcStack_158 = (code *)0x0;
                            uStack_1c8 = puVar10;
                          }
                          else {
                            uStack_1c8 = puVar10;
                            pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))(plVar30,10);
                          }
                          puStack_178 = &UNK_0f11b718;
                          func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,uStack_110,
                                          auStack_168);
                          if (pcStack_1b0 != (code *)0x0) {
                            (*pcStack_1b0)(&uStack_1c8);
                          }
                        }
                        else {
                          plVar30 = (long *)puStack_118[5];
                          if (DAT_0f5d3138 == '\0') {
                            iVar4 = func_0x04108328(&DAT_0f5d3138);
                            if (iVar4 != 0) {
                              func_0x084be570();
                              func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d30b8,0xf53dab8);
                              func_0x0410844d(&DAT_0f5d3138);
                            }
                          }
                          plVar20 = (long *)(*plVar30 +
                                            (ulong)((int)((ulong)(plVar30[1] - *plVar30) >> 3) - 1U
                                                   & *(uint *)(_DAT_0f5d30b8 + 4)) * 8);
                          do {
                            lVar9 = *plVar20;
                            if (lVar9 == -1) {
                              plVar7 = (long *)plVar30[4];
                              plVar20 = plVar7;
                              goto LAB_084e03ee;
                            }
                            plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                          } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                   *(uint *)(_DAT_0f5d30b8 + 4));
                          plVar7 = (long *)plVar30[4];
LAB_084e03ee:
                          if (plVar20 == plVar7) {
                            puVar26 = &DAT_0f5d30b8;
                          }
                          else {
                            puVar26 = (undefined *)plVar20[2];
                          }
                          auVar11 = (undefined1  [8])func_0x048b0c90(plVar30,puVar26,uVar25,1);
                          if (auVar11 == (undefined1  [8])0x0) {
                            auStack_168 = (undefined1  [8])0x0;
                            plStack_160 = (long *)0x0;
                            func_0x048b0d20(auStack_168);
                            auVar11 = auStack_168;
                            plVar30 = plStack_160;
                          }
                          lStack_138 = 0;
                          puStack_130 = (undefined *)0x0;
                          lStack_148 = 0;
                          lStack_140 = 0;
                          pcStack_158 = (code *)0x0;
                          pcStack_150 = (code *)0x0;
                          auStack_168 = (undefined1  [8])0x0;
                          plStack_160 = (long *)0x0;
                          puStack_178 = (undefined *)auVar11;
                          plStack_170 = plVar30;
                          func_0x05d84ba0(auStack_168);
                          func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                          if ((lStack_1a0 == lStack_d0) &&
                             ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                            if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                              bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                            }
                            else {
                              pppppppuVar24 = pppppppuStack_f8;
                              if (cStack_d4 == '\x02') {
                                pppppppuVar24 = &pppppppuStack_f8;
                              }
                              lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                              bVar31 = lVar9 != 0;
                            }
                          }
                          else {
                            bVar31 = false;
                          }
                          if (pcStack_1b0 != (code *)0x0) {
                            (*pcStack_1b0)(&uStack_1c8);
                          }
                          if (pcStack_150 != (code *)0x0) {
                            (*pcStack_150)(auStack_168);
                          }
                          if (bVar31) {
                            lVar9 = puStack_118[5];
                            if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                              (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                                        (auStack_168,puVar10);
                            }
                            *(undefined4 *)puVar10 = 0;
                            *(undefined4 *)(puVar10 + 7) = 0xb;
                            pcStack_1b8 = (code *)&UNK_084be830;
                            pcStack_1b0 = (code *)0x0;
                            uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x335797420);
                            lStack_198 = 0;
                            puStack_190 = &UNK_084be750;
                            lStack_148 = plStack_108[4];
                            auStack_168 = (undefined1  [8])*plStack_108;
                            plStack_160 = (long *)plStack_108[1];
                            pcStack_158 = (code *)plStack_108[2];
                            pcStack_150 = (code *)plStack_108[3];
                            plVar30 = (long *)plStack_108[2];
                            lStack_1a0 = lVar9;
                            if (plVar30 == (long *)0x0) {
                              pcStack_158 = (code *)0x0;
                              uStack_1c8 = puVar10;
                            }
                            else {
                              uStack_1c8 = puVar10;
                              pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))(plVar30,0xb);
                            }
                            puStack_178 = &UNK_0f11b798;
                            func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,uStack_110,
                                            auStack_168);
                            if (pcStack_1b0 != (code *)0x0) {
                              (*pcStack_1b0)(&uStack_1c8);
                            }
                          }
                          else {
                            plVar30 = (long *)puStack_118[5];
                            if (DAT_0f5d31f0 == '\0') {
                              iVar4 = func_0x04108328(&DAT_0f5d31f0);
                              if (iVar4 != 0) {
                                func_0x084c01a0();
                                func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3170,0xf53dab8);
                                func_0x0410844d(&DAT_0f5d31f0);
                              }
                            }
                            plVar20 = (long *)(*plVar30 +
                                              (ulong)((int)((ulong)(plVar30[1] - *plVar30) >> 3) -
                                                      1U & *(uint *)(_DAT_0f5d3170 + 4)) * 8);
                            do {
                              lVar9 = *plVar20;
                              if (lVar9 == -1) {
                                plVar7 = (long *)plVar30[4];
                                plVar20 = plVar7;
                                goto LAB_084e0682;
                              }
                              plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                            } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                     *(uint *)(_DAT_0f5d3170 + 4));
                            plVar7 = (long *)plVar30[4];
LAB_084e0682:
                            if (plVar20 == plVar7) {
                              puVar26 = &DAT_0f5d3170;
                            }
                            else {
                              puVar26 = (undefined *)plVar20[2];
                            }
                            auVar11 = (undefined1  [8])func_0x048b0c90(plVar30,puVar26,uVar25,1);
                            if (auVar11 == (undefined1  [8])0x0) {
                              auStack_168 = (undefined1  [8])0x0;
                              plStack_160 = (long *)0x0;
                              func_0x048b0d20(auStack_168);
                              auVar11 = auStack_168;
                              plVar30 = plStack_160;
                            }
                            lStack_138 = 0;
                            puStack_130 = (undefined *)0x0;
                            lStack_148 = 0;
                            lStack_140 = 0;
                            pcStack_158 = (code *)0x0;
                            pcStack_150 = (code *)0x0;
                            auStack_168 = (undefined1  [8])0x0;
                            plStack_160 = (long *)0x0;
                            puStack_178 = (undefined *)auVar11;
                            plStack_170 = plVar30;
                            func_0x05d84ba0(auStack_168);
                            func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                            if ((lStack_1a0 == lStack_d0) &&
                               ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                              if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                                bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                              }
                              else {
                                pppppppuVar24 = pppppppuStack_f8;
                                if (cStack_d4 == '\x02') {
                                  pppppppuVar24 = &pppppppuStack_f8;
                                }
                                lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                                bVar31 = lVar9 != 0;
                              }
                            }
                            else {
                              bVar31 = false;
                            }
                            if (pcStack_1b0 != (code *)0x0) {
                              (*pcStack_1b0)(&uStack_1c8);
                            }
                            if (pcStack_150 != (code *)0x0) {
                              (*pcStack_150)(auStack_168);
                            }
                            if (bVar31) {
                              lVar9 = puStack_118[5];
                              if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                                          (auStack_168,puVar10);
                              }
                              *(undefined2 *)puVar10 = 0;
                              *(undefined4 *)(puVar10 + 7) = 0xc;
                              pcStack_1b8 = (code *)&UNK_084c0460;
                              pcStack_1b0 = (code *)0x0;
                              uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x333d6fd3b);
                              lStack_198 = 0;
                              puStack_190 = &UNK_084c0380;
                              lStack_148 = plStack_108[4];
                              auStack_168 = (undefined1  [8])*plStack_108;
                              plStack_160 = (long *)plStack_108[1];
                              pcStack_158 = (code *)plStack_108[2];
                              pcStack_150 = (code *)plStack_108[3];
                              plVar30 = (long *)plStack_108[2];
                              lStack_1a0 = lVar9;
                              if (plVar30 == (long *)0x0) {
                                pcStack_158 = (code *)0x0;
                                uStack_1c8 = puVar10;
                              }
                              else {
                                uStack_1c8 = puVar10;
                                pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))(plVar30,0xc);
                              }
                              puStack_178 = &UNK_0f11b818;
                              func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,uStack_110,
                                              auStack_168);
                              if (pcStack_1b0 != (code *)0x0) {
                                (*pcStack_1b0)(&uStack_1c8);
                              }
                            }
                            else {
                              plVar30 = (long *)puStack_118[5];
                              if (DAT_0f5d32a8 == '\0') {
                                iVar4 = func_0x04108328(&DAT_0f5d32a8);
                                if (iVar4 != 0) {
                                  func_0x084c14c0();
                                  func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3228,0xf53dab8);
                                  func_0x0410844d(&DAT_0f5d32a8);
                                }
                              }
                              plVar20 = (long *)(*plVar30 +
                                                (ulong)((int)((ulong)(plVar30[1] - *plVar30) >> 3) -
                                                        1U & *(uint *)(_DAT_0f5d3228 + 4)) * 8);
                              do {
                                lVar9 = *plVar20;
                                if (lVar9 == -1) {
                                  plVar7 = (long *)plVar30[4];
                                  plVar20 = plVar7;
                                  goto LAB_084e0915;
                                }
                                plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                              } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                       *(uint *)(_DAT_0f5d3228 + 4));
                              plVar7 = (long *)plVar30[4];
LAB_084e0915:
                              if (plVar20 == plVar7) {
                                puVar26 = &DAT_0f5d3228;
                              }
                              else {
                                puVar26 = (undefined *)plVar20[2];
                              }
                              auVar11 = (undefined1  [8])func_0x048b0c90(plVar30,puVar26,uVar25,1);
                              if (auVar11 == (undefined1  [8])0x0) {
                                auStack_168 = (undefined1  [8])0x0;
                                plStack_160 = (long *)0x0;
                                func_0x048b0d20(auStack_168);
                                auVar11 = auStack_168;
                                plVar30 = plStack_160;
                              }
                              lStack_138 = 0;
                              puStack_130 = (undefined *)0x0;
                              lStack_148 = 0;
                              lStack_140 = 0;
                              pcStack_158 = (code *)0x0;
                              pcStack_150 = (code *)0x0;
                              auStack_168 = (undefined1  [8])0x0;
                              plStack_160 = (long *)0x0;
                              puStack_178 = (undefined *)auVar11;
                              plStack_170 = plVar30;
                              func_0x05d84ba0(auStack_168);
                              func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                              if ((lStack_1a0 == lStack_d0) &&
                                 ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                                if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                                  bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                                }
                                else {
                                  pppppppuVar24 = pppppppuStack_f8;
                                  if (cStack_d4 == '\x02') {
                                    pppppppuVar24 = &pppppppuStack_f8;
                                  }
                                  lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                                  bVar31 = lVar9 != 0;
                                }
                              }
                              else {
                                bVar31 = false;
                              }
                              if (pcStack_1b0 != (code *)0x0) {
                                (*pcStack_1b0)(&uStack_1c8);
                              }
                              if (pcStack_150 != (code *)0x0) {
                                (*pcStack_150)(auStack_168);
                              }
                              if (bVar31) {
                                lVar9 = puStack_118[5];
                                if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                  (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                                            (auStack_168,puVar10);
                                }
                                *puVar10 = 0;
                                puVar10[1] = 0;
                                puVar10[2] = 0;
                                *(undefined4 *)(puVar10 + 7) = 0xd;
                                pcStack_1b8 = (code *)&UNK_084c17c0;
                                pcStack_1b0 = (code *)0x0;
                                uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x30bf30c01);
                                lStack_198 = 0;
                                puStack_190 = &UNK_084c16e0;
                                lStack_148 = plStack_108[4];
                                auStack_168 = (undefined1  [8])*plStack_108;
                                plStack_160 = (long *)plStack_108[1];
                                pcStack_158 = (code *)plStack_108[2];
                                pcStack_150 = (code *)plStack_108[3];
                                plVar30 = (long *)plStack_108[2];
                                lStack_1a0 = lVar9;
                                if (plVar30 == (long *)0x0) {
                                  pcStack_158 = (code *)0x0;
                                  uStack_1c8 = puVar10;
                                }
                                else {
                                  uStack_1c8 = puVar10;
                                  pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))(plVar30,0xd);
                                }
                                puStack_178 = &UNK_0f11b898;
                                func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,uStack_110,
                                                auStack_168);
                                if (pcStack_1b0 != (code *)0x0) {
                                  (*pcStack_1b0)(&uStack_1c8);
                                }
                              }
                              else {
                                plVar30 = (long *)puStack_118[5];
                                if (DAT_0f5d3360 == '\0') {
                                  iVar4 = func_0x04108328(&DAT_0f5d3360);
                                  if (iVar4 != 0) {
                                    func_0x084c2a70();
                                    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d32e0,0xf53dab8);
                                    func_0x0410844d(&DAT_0f5d3360);
                                  }
                                }
                                plVar20 = (long *)(*plVar30 +
                                                  (ulong)((int)((ulong)(plVar30[1] - *plVar30) >> 3)
                                                          - 1U & *(uint *)(_DAT_0f5d32e0 + 4)) * 8);
                                do {
                                  lVar9 = *plVar20;
                                  if (lVar9 == -1) {
                                    plVar7 = (long *)plVar30[4];
                                    plVar20 = plVar7;
                                    goto LAB_084e0bb1;
                                  }
                                  plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                                } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                         *(uint *)(_DAT_0f5d32e0 + 4));
                                plVar7 = (long *)plVar30[4];
LAB_084e0bb1:
                                if (plVar20 == plVar7) {
                                  puVar26 = &DAT_0f5d32e0;
                                }
                                else {
                                  puVar26 = (undefined *)plVar20[2];
                                }
                                auVar11 = (undefined1  [8])func_0x048b0c90(plVar30,puVar26,uVar25,1)
                                ;
                                if (auVar11 == (undefined1  [8])0x0) {
                                  auStack_168 = (undefined1  [8])0x0;
                                  plStack_160 = (long *)0x0;
                                  func_0x048b0d20(auStack_168);
                                  auVar11 = auStack_168;
                                  plVar30 = plStack_160;
                                }
                                lStack_138 = 0;
                                puStack_130 = (undefined *)0x0;
                                lStack_148 = 0;
                                lStack_140 = 0;
                                pcStack_158 = (code *)0x0;
                                pcStack_150 = (code *)0x0;
                                auStack_168 = (undefined1  [8])0x0;
                                plStack_160 = (long *)0x0;
                                puStack_178 = (undefined *)auVar11;
                                plStack_170 = plVar30;
                                func_0x05d84ba0(auStack_168);
                                func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                                if ((lStack_1a0 == lStack_d0) &&
                                   ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                                  if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                                    bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                                  }
                                  else {
                                    pppppppuVar24 = pppppppuStack_f8;
                                    if (cStack_d4 == '\x02') {
                                      pppppppuVar24 = &pppppppuStack_f8;
                                    }
                                    lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                                    bVar31 = lVar9 != 0;
                                  }
                                }
                                else {
                                  bVar31 = false;
                                }
                                if (pcStack_1b0 != (code *)0x0) {
                                  (*pcStack_1b0)(&uStack_1c8);
                                }
                                if (pcStack_150 != (code *)0x0) {
                                  (*pcStack_150)(auStack_168);
                                }
                                if (bVar31) {
                                  lVar9 = puStack_118[5];
                                  if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                    (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8))
                                              (auStack_168,puVar10);
                                  }
                                  *(undefined4 *)(puVar10 + 1) = 0;
                                  *puVar10 = 0;
                                  *(undefined4 *)(puVar10 + 7) = 0xe;
                                  pcStack_1b8 = (code *)&UNK_084c2d30;
                                  pcStack_1b0 = (code *)0x0;
                                  uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x319f2e872);
                                  lStack_198 = 0;
                                  puStack_190 = &UNK_084c2c50;
                                  lStack_148 = plStack_108[4];
                                  auStack_168 = (undefined1  [8])*plStack_108;
                                  plStack_160 = (long *)plStack_108[1];
                                  pcStack_158 = (code *)plStack_108[2];
                                  pcStack_150 = (code *)plStack_108[3];
                                  plVar30 = (long *)plStack_108[2];
                                  lStack_1a0 = lVar9;
                                  if (plVar30 == (long *)0x0) {
                                    pcStack_158 = (code *)0x0;
                                    uStack_1c8 = puVar10;
                                  }
                                  else {
                                    uStack_1c8 = puVar10;
                                    pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))
                                                                    (plVar30,0xe);
                                  }
                                  puStack_178 = &UNK_0f11b918;
                                  func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,uStack_110,
                                                  auStack_168);
                                  if (pcStack_1b0 != (code *)0x0) {
                                    (*pcStack_1b0)(&uStack_1c8);
                                  }
                                }
                                else {
                                  plVar30 = (long *)puStack_118[5];
                                  if (DAT_0f5d3418 == '\0') {
                                    iVar4 = func_0x04108328(&DAT_0f5d3418);
                                    if (iVar4 != 0) {
                                      func_0x084c4a00();
                                      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3398,0xf53dab8);
                                      func_0x0410844d(&DAT_0f5d3418);
                                    }
                                  }
                                  plVar20 = (long *)(*plVar30 +
                                                    (ulong)((int)((ulong)(plVar30[1] - *plVar30) >>
                                                                 3) - 1U &
                                                           *(uint *)(_DAT_0f5d3398 + 4)) * 8);
                                  do {
                                    lVar9 = *plVar20;
                                    if (lVar9 == -1) {
                                      plVar7 = (long *)plVar30[4];
                                      plVar20 = plVar7;
                                      goto LAB_084e0e6b;
                                    }
                                    plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                                  } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                           *(uint *)(_DAT_0f5d3398 + 4));
                                  plVar7 = (long *)plVar30[4];
LAB_084e0e6b:
                                  if (plVar20 == plVar7) {
                                    puVar26 = &DAT_0f5d3398;
                                  }
                                  else {
                                    puVar26 = (undefined *)plVar20[2];
                                  }
                                  auVar11 = (undefined1  [8])
                                            func_0x048b0c90(plVar30,puVar26,uVar25,1);
                                  if (auVar11 == (undefined1  [8])0x0) {
                                    auStack_168 = (undefined1  [8])0x0;
                                    plStack_160 = (long *)0x0;
                                    func_0x048b0d20(auStack_168);
                                    auVar11 = auStack_168;
                                    plVar30 = plStack_160;
                                  }
                                  lStack_138 = 0;
                                  puStack_130 = (undefined *)0x0;
                                  lStack_148 = 0;
                                  lStack_140 = 0;
                                  pcStack_158 = (code *)0x0;
                                  pcStack_150 = (code *)0x0;
                                  auStack_168 = (undefined1  [8])0x0;
                                  plStack_160 = (long *)0x0;
                                  puStack_178 = (undefined *)auVar11;
                                  plStack_170 = plVar30;
                                  func_0x05d84ba0(auStack_168);
                                  func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                                  if ((lStack_1a0 == lStack_d0) &&
                                     ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                                    if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                                      bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                                    }
                                    else {
                                      pppppppuVar24 = pppppppuStack_f8;
                                      if (cStack_d4 == '\x02') {
                                        pppppppuVar24 = &pppppppuStack_f8;
                                      }
                                      lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                                      bVar31 = lVar9 != 0;
                                    }
                                  }
                                  else {
                                    bVar31 = false;
                                  }
                                  if (pcStack_1b0 != (code *)0x0) {
                                    (*pcStack_1b0)(&uStack_1c8);
                                  }
                                  if (pcStack_150 != (code *)0x0) {
                                    (*pcStack_150)(auStack_168);
                                  }
                                  if (bVar31) {
                                    lVar9 = puStack_118[5];
                                    if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                      (**(code **)(&UNK_0f118868 + (ulong)*(uint *)(puVar10 + 7) * 8
                                                  ))(auStack_168,puVar10);
                                    }
                                    *(undefined4 *)puVar10 = 0;
                                    *(undefined4 *)(puVar10 + 7) = 0xf;
                                    pcStack_1b8 = (code *)&UNK_084c4cc0;
                                    pcStack_1b0 = (code *)0x0;
                                    uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x3c6eaa6ac);
                                    lStack_198 = 0;
                                    puStack_190 = &UNK_084c4be0;
                                    lStack_148 = plStack_108[4];
                                    auStack_168 = (undefined1  [8])*plStack_108;
                                    plStack_160 = (long *)plStack_108[1];
                                    pcStack_158 = (code *)plStack_108[2];
                                    pcStack_150 = (code *)plStack_108[3];
                                    plVar30 = (long *)plStack_108[2];
                                    lStack_1a0 = lVar9;
                                    if (plVar30 == (long *)0x0) {
                                      pcStack_158 = (code *)0x0;
                                      uStack_1c8 = puVar10;
                                    }
                                    else {
                                      uStack_1c8 = puVar10;
                                      pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))
                                                                      (plVar30,0xf);
                                    }
                                    puStack_178 = &UNK_0f11b998;
                                    func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,uStack_110,
                                                    auStack_168);
                                    if (pcStack_1b0 != (code *)0x0) {
                                      (*pcStack_1b0)(&uStack_1c8);
                                    }
                                  }
                                  else {
                                    plVar30 = (long *)puStack_118[5];
                                    if (DAT_0f5d34d0 == '\0') {
                                      iVar4 = func_0x04108328(&DAT_0f5d34d0);
                                      if (iVar4 != 0) {
                                        func_0x084c5d20();
                                        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3450,0xf53dab8);
                                        func_0x0410844d(&DAT_0f5d34d0);
                                      }
                                    }
                                    plVar20 = (long *)(*plVar30 +
                                                      (ulong)((int)((ulong)(plVar30[1] - *plVar30)
                                                                   >> 3) - 1U &
                                                             *(uint *)(_DAT_0f5d3450 + 4)) * 8);
                                    do {
                                      lVar9 = *plVar20;
                                      if (lVar9 == -1) {
                                        plVar7 = (long *)plVar30[4];
                                        plVar20 = plVar7;
                                        goto LAB_084e111d;
                                      }
                                      plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                                    } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                             *(uint *)(_DAT_0f5d3450 + 4));
                                    plVar7 = (long *)plVar30[4];
LAB_084e111d:
                                    if (plVar20 == plVar7) {
                                      puVar26 = &DAT_0f5d3450;
                                    }
                                    else {
                                      puVar26 = (undefined *)plVar20[2];
                                    }
                                    auVar11 = (undefined1  [8])
                                              func_0x048b0c90(plVar30,puVar26,uVar25,1);
                                    if (auVar11 == (undefined1  [8])0x0) {
                                      auStack_168 = (undefined1  [8])0x0;
                                      plStack_160 = (long *)0x0;
                                      func_0x048b0d20(auStack_168);
                                      auVar11 = auStack_168;
                                      plVar30 = plStack_160;
                                    }
                                    lStack_138 = 0;
                                    puStack_130 = (undefined *)0x0;
                                    lStack_148 = 0;
                                    lStack_140 = 0;
                                    pcStack_158 = (code *)0x0;
                                    pcStack_150 = (code *)0x0;
                                    auStack_168 = (undefined1  [8])0x0;
                                    plStack_160 = (long *)0x0;
                                    puStack_178 = (undefined *)auVar11;
                                    plStack_170 = plVar30;
                                    func_0x05d84ba0(auStack_168);
                                    func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                                    if ((lStack_1a0 == lStack_d0) &&
                                       ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                                      if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                                        bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                                      }
                                      else {
                                        pppppppuVar24 = pppppppuStack_f8;
                                        if (cStack_d4 == '\x02') {
                                          pppppppuVar24 = &pppppppuStack_f8;
                                        }
                                        lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                                        bVar31 = lVar9 != 0;
                                      }
                                    }
                                    else {
                                      bVar31 = false;
                                    }
                                    if (pcStack_1b0 != (code *)0x0) {
                                      (*pcStack_1b0)(&uStack_1c8);
                                    }
                                    if (pcStack_150 != (code *)0x0) {
                                      (*pcStack_150)(auStack_168);
                                    }
                                    if (bVar31) {
                                      lVar9 = puStack_118[5];
                                      if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                        (**(code **)(&UNK_0f118868 +
                                                    (ulong)*(uint *)(puVar10 + 7) * 8))
                                                  (auStack_168,puVar10);
                                      }
                                      *puVar10 = 0;
                                      *(undefined4 *)(puVar10 + 7) = 0x10;
                                      pcStack_1b8 = (code *)&UNK_084c5fd0;
                                      pcStack_1b0 = (code *)0x0;
                                      uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x38d8d9870);
                                      lStack_198 = 0;
                                      puStack_190 = &UNK_084c5ef0;
                                      lStack_148 = plStack_108[4];
                                      auStack_168 = (undefined1  [8])*plStack_108;
                                      plStack_160 = (long *)plStack_108[1];
                                      pcStack_158 = (code *)plStack_108[2];
                                      pcStack_150 = (code *)plStack_108[3];
                                      plVar30 = (long *)plStack_108[2];
                                      lStack_1a0 = lVar9;
                                      if (plVar30 == (long *)0x0) {
                                        pcStack_158 = (code *)0x0;
                                        uStack_1c8 = puVar10;
                                      }
                                      else {
                                        uStack_1c8 = puVar10;
                                        pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))
                                                                        (plVar30,0x10);
                                      }
                                      puStack_178 = &UNK_0f11ba18;
                                      func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,
                                                      uStack_110,auStack_168);
                                      if (pcStack_1b0 != (code *)0x0) {
                                        (*pcStack_1b0)(&uStack_1c8);
                                      }
                                    }
                                    else {
                                      plVar30 = (long *)puStack_118[5];
                                      if (DAT_0f5d3588 == '\0') {
                                        iVar4 = func_0x04108328(&DAT_0f5d3588);
                                        if (iVar4 != 0) {
                                          func_0x084c79a0();
                                          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3508,0xf53dab8);
                                          func_0x0410844d(&DAT_0f5d3588);
                                        }
                                      }
                                      plVar20 = (long *)(*plVar30 +
                                                        (ulong)((int)((ulong)(plVar30[1] - *plVar30)
                                                                     >> 3) - 1U &
                                                               *(uint *)(_DAT_0f5d3508 + 4)) * 8);
                                      do {
                                        lVar9 = *plVar20;
                                        if (lVar9 == -1) {
                                          plVar7 = (long *)plVar30[4];
                                          plVar20 = plVar7;
                                          goto LAB_084e13cf;
                                        }
                                        plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                                      } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                               *(uint *)(_DAT_0f5d3508 + 4));
                                      plVar7 = (long *)plVar30[4];
LAB_084e13cf:
                                      if (plVar20 == plVar7) {
                                        puVar26 = &DAT_0f5d3508;
                                      }
                                      else {
                                        puVar26 = (undefined *)plVar20[2];
                                      }
                                      auVar11 = (undefined1  [8])
                                                func_0x048b0c90(plVar30,puVar26,uVar25,1);
                                      if (auVar11 == (undefined1  [8])0x0) {
                                        auStack_168 = (undefined1  [8])0x0;
                                        plStack_160 = (long *)0x0;
                                        func_0x048b0d20(auStack_168);
                                        auVar11 = auStack_168;
                                        plVar30 = plStack_160;
                                      }
                                      lStack_138 = 0;
                                      puStack_130 = (undefined *)0x0;
                                      lStack_148 = 0;
                                      lStack_140 = 0;
                                      pcStack_158 = (code *)0x0;
                                      pcStack_150 = (code *)0x0;
                                      auStack_168 = (undefined1  [8])0x0;
                                      plStack_160 = (long *)0x0;
                                      puStack_178 = (undefined *)auVar11;
                                      plStack_170 = plVar30;
                                      func_0x05d84ba0(auStack_168);
                                      func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                                      if ((lStack_1a0 == lStack_d0) &&
                                         ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))) {
                                        if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8)) {
                                          bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                                        }
                                        else {
                                          pppppppuVar24 = pppppppuStack_f8;
                                          if (cStack_d4 == '\x02') {
                                            pppppppuVar24 = &pppppppuStack_f8;
                                          }
                                          lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                                          bVar31 = lVar9 != 0;
                                        }
                                      }
                                      else {
                                        bVar31 = false;
                                      }
                                      if (pcStack_1b0 != (code *)0x0) {
                                        (*pcStack_1b0)(&uStack_1c8);
                                      }
                                      if (pcStack_150 != (code *)0x0) {
                                        (*pcStack_150)(auStack_168);
                                      }
                                      if (bVar31) {
                                        lVar9 = puStack_118[5];
                                        if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                          (**(code **)(&UNK_0f118868 +
                                                      (ulong)*(uint *)(puVar10 + 7) * 8))
                                                    (auStack_168,puVar10);
                                        }
                                        *(undefined4 *)puVar10 = 0;
                                        *(undefined4 *)(puVar10 + 7) = 0x11;
                                        pcStack_1b8 = (code *)&UNK_084c7c60;
                                        pcStack_1b0 = (code *)0x0;
                                        uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x30d325dc7);
                                        lStack_198 = 0;
                                        puStack_190 = &UNK_084c7b80;
                                        lStack_148 = plStack_108[4];
                                        auStack_168 = (undefined1  [8])*plStack_108;
                                        plStack_160 = (long *)plStack_108[1];
                                        pcStack_158 = (code *)plStack_108[2];
                                        pcStack_150 = (code *)plStack_108[3];
                                        plVar30 = (long *)plStack_108[2];
                                        lStack_1a0 = lVar9;
                                        if (plVar30 == (long *)0x0) {
                                          pcStack_158 = (code *)0x0;
                                          uStack_1c8 = puVar10;
                                        }
                                        else {
                                          uStack_1c8 = puVar10;
                                          pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))
                                                                          (plVar30,0x11);
                                        }
                                        puStack_178 = &UNK_0f11ba98;
                                        func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,
                                                        uStack_110,auStack_168);
                                        if (pcStack_1b0 != (code *)0x0) {
                                          (*pcStack_1b0)(&uStack_1c8);
                                        }
                                      }
                                      else {
                                        plVar30 = (long *)puStack_118[5];
                                        if (DAT_0f5d3640 == '\0') {
                                          iVar4 = func_0x04108328(&DAT_0f5d3640);
                                          if (iVar4 != 0) {
                                            func_0x084c8cc0();
                                            func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d35c0,0xf53dab8);
                                            func_0x0410844d(&DAT_0f5d3640);
                                          }
                                        }
                                        plVar20 = (long *)(*plVar30 +
                                                          (ulong)((int)((ulong)(plVar30[1] -
                                                                               *plVar30) >> 3) - 1U
                                                                 & *(uint *)(_DAT_0f5d35c0 + 4)) * 8
                                                          );
                                        do {
                                          lVar9 = *plVar20;
                                          if (lVar9 == -1) {
                                            plVar7 = (long *)plVar30[4];
                                            plVar20 = plVar7;
                                            goto LAB_084e1681;
                                          }
                                          plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                                        } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                                 *(uint *)(_DAT_0f5d35c0 + 4));
                                        plVar7 = (long *)plVar30[4];
LAB_084e1681:
                                        if (plVar20 == plVar7) {
                                          puVar26 = &DAT_0f5d35c0;
                                        }
                                        else {
                                          puVar26 = (undefined *)plVar20[2];
                                        }
                                        auVar11 = (undefined1  [8])
                                                  func_0x048b0c90(plVar30,puVar26,uVar25,1);
                                        if (auVar11 == (undefined1  [8])0x0) {
                                          auStack_168 = (undefined1  [8])0x0;
                                          plStack_160 = (long *)0x0;
                                          func_0x048b0d20(auStack_168);
                                          auVar11 = auStack_168;
                                          plVar30 = plStack_160;
                                        }
                                        lStack_138 = 0;
                                        puStack_130 = (undefined *)0x0;
                                        lStack_148 = 0;
                                        lStack_140 = 0;
                                        pcStack_158 = (code *)0x0;
                                        pcStack_150 = (code *)0x0;
                                        auStack_168 = (undefined1  [8])0x0;
                                        plStack_160 = (long *)0x0;
                                        puStack_178 = (undefined *)auVar11;
                                        plStack_170 = plVar30;
                                        func_0x05d84ba0(auStack_168);
                                        func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                                        if ((lStack_1a0 == lStack_d0) &&
                                           ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0)))
                                        {
                                          if ((cStack_d4 == '\0') || ((int)uStack_1a8 != iStack_d8))
                                          {
                                            bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0';
                                          }
                                          else {
                                            pppppppuVar24 = pppppppuStack_f8;
                                            if (cStack_d4 == '\x02') {
                                              pppppppuVar24 = &pppppppuStack_f8;
                                            }
                                            lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                                            bVar31 = lVar9 != 0;
                                          }
                                        }
                                        else {
                                          bVar31 = false;
                                        }
                                        if (pcStack_1b0 != (code *)0x0) {
                                          (*pcStack_1b0)(&uStack_1c8);
                                        }
                                        if (pcStack_150 != (code *)0x0) {
                                          (*pcStack_150)(auStack_168);
                                        }
                                        if (bVar31) {
                                          lVar9 = puStack_118[5];
                                          if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                            (**(code **)(&UNK_0f118868 +
                                                        (ulong)*(uint *)(puVar10 + 7) * 8))
                                                      (auStack_168,puVar10);
                                          }
                                          *puVar10 = 0;
                                          puVar10[1] = 0;
                                          puVar10[2] = 0;
                                          *(undefined4 *)(puVar10 + 7) = 0x12;
                                          pcStack_1b8 = (code *)&UNK_084c8fc0;
                                          pcStack_1b0 = (code *)0x0;
                                          uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x36a7e68f1);
                                          lStack_198 = 0;
                                          puStack_190 = &UNK_084c8ee0;
                                          lStack_148 = plStack_108[4];
                                          auStack_168 = (undefined1  [8])*plStack_108;
                                          plStack_160 = (long *)plStack_108[1];
                                          pcStack_158 = (code *)plStack_108[2];
                                          pcStack_150 = (code *)plStack_108[3];
                                          plVar30 = (long *)plStack_108[2];
                                          lStack_1a0 = lVar9;
                                          if (plVar30 == (long *)0x0) {
                                            pcStack_158 = (code *)0x0;
                                            uStack_1c8 = puVar10;
                                          }
                                          else {
                                            uStack_1c8 = puVar10;
                                            pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))
                                                                            (plVar30,0x12);
                                          }
                                          puStack_178 = &UNK_0f11bb18;
                                          func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,
                                                          uStack_110,auStack_168);
                                          if (pcStack_1b0 != (code *)0x0) {
                                            (*pcStack_1b0)(&uStack_1c8);
                                          }
                                        }
                                        else {
                                          plVar30 = (long *)puStack_118[5];
                                          if (DAT_0f5d36f8 == '\0') {
                                            iVar4 = func_0x04108328(&DAT_0f5d36f8);
                                            if (iVar4 != 0) {
                                              func_0x084ca270();
                                              func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3678,0xf53dab8)
                                              ;
                                              func_0x0410844d(&DAT_0f5d36f8);
                                            }
                                          }
                                          plVar20 = (long *)(*plVar30 +
                                                            (ulong)((int)((ulong)(plVar30[1] -
                                                                                 *plVar30) >> 3) -
                                                                    1U & *(uint *)(_DAT_0f5d3678 + 4
                                                                                  )) * 8);
                                          do {
                                            lVar9 = *plVar20;
                                            if (lVar9 == -1) {
                                              plVar7 = (long *)plVar30[4];
                                              plVar20 = plVar7;
                                              goto LAB_084e193b;
                                            }
                                            plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                                          } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                                   *(uint *)(_DAT_0f5d3678 + 4));
                                          plVar7 = (long *)plVar30[4];
LAB_084e193b:
                                          if (plVar20 == plVar7) {
                                            puVar26 = &DAT_0f5d3678;
                                          }
                                          else {
                                            puVar26 = (undefined *)plVar20[2];
                                          }
                                          auVar11 = (undefined1  [8])
                                                    func_0x048b0c90(plVar30,puVar26,uVar25,1);
                                          if (auVar11 == (undefined1  [8])0x0) {
                                            auStack_168 = (undefined1  [8])0x0;
                                            plStack_160 = (long *)0x0;
                                            func_0x048b0d20(auStack_168);
                                            auVar11 = auStack_168;
                                            plVar30 = plStack_160;
                                          }
                                          lStack_138 = 0;
                                          puStack_130 = (undefined *)0x0;
                                          lStack_148 = 0;
                                          lStack_140 = 0;
                                          pcStack_158 = (code *)0x0;
                                          pcStack_150 = (code *)0x0;
                                          auStack_168 = (undefined1  [8])0x0;
                                          plStack_160 = (long *)0x0;
                                          puStack_178 = (undefined *)auVar11;
                                          plStack_170 = plVar30;
                                          func_0x05d84ba0(auStack_168);
                                          func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                                          if ((lStack_1a0 == lStack_d0) &&
                                             ((lStack_c0 != 0) == (puStack_190 != (undefined *)0x0))
                                             ) {
                                            if ((cStack_d4 == '\0') ||
                                               ((int)uStack_1a8 != iStack_d8)) {
                                              bVar31 = cStack_d4 == '\0' && uStack_1a8._4_1_ == '\0'
                                              ;
                                            }
                                            else {
                                              pppppppuVar24 = pppppppuStack_f8;
                                              if (cStack_d4 == '\x02') {
                                                pppppppuVar24 = &pppppppuStack_f8;
                                              }
                                              lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                                              bVar31 = lVar9 != 0;
                                            }
                                          }
                                          else {
                                            bVar31 = false;
                                          }
                                          if (pcStack_1b0 != (code *)0x0) {
                                            (*pcStack_1b0)(&uStack_1c8);
                                          }
                                          if (pcStack_150 != (code *)0x0) {
                                            (*pcStack_150)(auStack_168);
                                          }
                                          if (bVar31) {
                                            lVar9 = puStack_118[5];
                                            if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                              (**(code **)(&UNK_0f118868 +
                                                          (ulong)*(uint *)(puVar10 + 7) * 8))
                                                        (auStack_168,puVar10);
                                            }
                                            puVar10[2] = 0;
                                            puVar10[3] = 0;
                                            *puVar10 = 0;
                                            puVar10[1] = 0;
                                            *(undefined4 *)(puVar10 + 7) = 0x13;
                                            pcStack_1b8 = (code *)&UNK_084ca570;
                                            pcStack_1b0 = (code *)0x0;
                                            uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x379332a73);
                                            lStack_198 = 0;
                                            puStack_190 = &UNK_084ca490;
                                            lStack_148 = plStack_108[4];
                                            auStack_168 = (undefined1  [8])*plStack_108;
                                            plStack_160 = (long *)plStack_108[1];
                                            pcStack_158 = (code *)plStack_108[2];
                                            pcStack_150 = (code *)plStack_108[3];
                                            plVar30 = (long *)plStack_108[2];
                                            lStack_1a0 = lVar9;
                                            if (plVar30 == (long *)0x0) {
                                              pcStack_158 = (code *)0x0;
                                              uStack_1c8 = puVar10;
                                            }
                                            else {
                                              uStack_1c8 = puVar10;
                                              pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))
                                                                              (plVar30,0x13);
                                            }
                                            puStack_178 = &UNK_0f11bb98;
                                            func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,
                                                            uStack_110,auStack_168);
                                            if (pcStack_1b0 != (code *)0x0) {
                                              (*pcStack_1b0)(&uStack_1c8);
                                            }
                                          }
                                          else {
                                            plVar30 = (long *)puStack_118[5];
                                            if (DAT_0f5d37b0 == '\0') {
                                              iVar4 = func_0x04108328(&DAT_0f5d37b0);
                                              if (iVar4 != 0) {
                                                func_0x084cc120();
                                                func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3730,
                                                                0xf53dab8);
                                                func_0x0410844d(&DAT_0f5d37b0);
                                              }
                                            }
                                            plVar20 = (long *)(*plVar30 +
                                                              (ulong)((int)((ulong)(plVar30[1] -
                                                                                   *plVar30) >> 3) -
                                                                      1U & *(uint *)(_DAT_0f5d3730 +
                                                                                    4)) * 8);
                                            do {
                                              lVar9 = *plVar20;
                                              if (lVar9 == -1) {
                                                plVar7 = (long *)plVar30[4];
                                                plVar20 = plVar7;
                                                goto LAB_084e1c3d;
                                              }
                                              plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                                            } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                                     *(uint *)(_DAT_0f5d3730 + 4));
                                            plVar7 = (long *)plVar30[4];
LAB_084e1c3d:
                                            if (plVar20 == plVar7) {
                                              puVar26 = &DAT_0f5d3730;
                                            }
                                            else {
                                              puVar26 = (undefined *)plVar20[2];
                                            }
                                            auVar11 = (undefined1  [8])
                                                      func_0x048b0c90(plVar30,puVar26,uVar25,1);
                                            if (auVar11 == (undefined1  [8])0x0) {
                                              auStack_168 = (undefined1  [8])0x0;
                                              plStack_160 = (long *)0x0;
                                              func_0x048b0d20(auStack_168);
                                              auVar11 = auStack_168;
                                              plVar30 = plStack_160;
                                            }
                                            lStack_138 = 0;
                                            puStack_130 = (undefined *)0x0;
                                            lStack_148 = 0;
                                            lStack_140 = 0;
                                            pcStack_158 = (code *)0x0;
                                            pcStack_150 = (code *)0x0;
                                            auStack_168 = (undefined1  [8])0x0;
                                            plStack_160 = (long *)0x0;
                                            puStack_178 = (undefined *)auVar11;
                                            plStack_170 = plVar30;
                                            func_0x05d84ba0(auStack_168);
                                            func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                                            if ((lStack_1a0 == lStack_d0) &&
                                               ((lStack_c0 != 0) ==
                                                (puStack_190 != (undefined *)0x0))) {
                                              if ((cStack_d4 == '\0') ||
                                                 ((int)uStack_1a8 != iStack_d8)) {
                                                bVar31 = cStack_d4 == '\0' &&
                                                         uStack_1a8._4_1_ == '\0';
                                              }
                                              else {
                                                pppppppuVar24 = pppppppuStack_f8;
                                                if (cStack_d4 == '\x02') {
                                                  pppppppuVar24 = &pppppppuStack_f8;
                                                }
                                                lVar9 = (*pcStack_1b8)(3,&uStack_1c8,pppppppuVar24);
                                                bVar31 = lVar9 != 0;
                                              }
                                            }
                                            else {
                                              bVar31 = false;
                                            }
                                            if (pcStack_1b0 != (code *)0x0) {
                                              (*pcStack_1b0)(&uStack_1c8);
                                            }
                                            if (pcStack_150 != (code *)0x0) {
                                              (*pcStack_150)(auStack_168);
                                            }
                                            if (bVar31) {
                                              lVar9 = puStack_118[5];
                                              if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                                (**(code **)(&UNK_0f118868 +
                                                            (ulong)*(uint *)(puVar10 + 7) * 8))
                                                          (auStack_168,puVar10);
                                              }
                                              *puVar10 = 0;
                                              puVar10[1] = 0;
                                              *(undefined4 *)(puVar10 + 7) = 0x14;
                                              pcStack_1b8 = (code *)&UNK_084cc3d0;
                                              pcStack_1b0 = (code *)0x0;
                                              uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x33c0ac519);
                                              lStack_198 = 0;
                                              puStack_190 = &UNK_084cc2f0;
                                              lStack_148 = plStack_108[4];
                                              auStack_168 = (undefined1  [8])*plStack_108;
                                              plStack_160 = (long *)plStack_108[1];
                                              pcStack_158 = (code *)plStack_108[2];
                                              pcStack_150 = (code *)plStack_108[3];
                                              plVar30 = (long *)plStack_108[2];
                                              lStack_1a0 = lVar9;
                                              if (plVar30 == (long *)0x0) {
                                                pcStack_158 = (code *)0x0;
                                                uStack_1c8 = puVar10;
                                              }
                                              else {
                                                uStack_1c8 = puVar10;
                                                pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30))
                                                                                (plVar30,0x14);
                                              }
                                              puStack_178 = &UNK_0f11bc18;
                                              func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8,
                                                              uStack_110,auStack_168);
                                              if (pcStack_1b0 != (code *)0x0) {
                                                (*pcStack_1b0)(&uStack_1c8);
                                              }
                                            }
                                            else {
                                              plVar30 = (long *)puStack_118[5];
                                              if (DAT_0f5d3868 == '\0') {
                                                iVar4 = func_0x04108328(&DAT_0f5d3868);
                                                if (iVar4 != 0) {
                                                  func_0x084ce3c0();
                                                  func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d37e8,
                                                                  0xf53dab8);
                                                  func_0x0410844d(&DAT_0f5d3868);
                                                }
                                              }
                                              plVar20 = (long *)(*plVar30 +
                                                                (ulong)((int)((ulong)(plVar30[1] -
                                                                                     *plVar30) >> 3)
                                                                        - 1U & *(uint *)(
                                                  _DAT_0f5d37e8 + 4)) * 8);
                                              do {
                                                lVar9 = *plVar20;
                                                if (lVar9 == -1) {
                                                  plVar7 = (long *)plVar30[4];
                                                  plVar20 = plVar7;
                                                  goto LAB_084e1f3a;
                                                }
                                                plVar20 = (long *)(plVar30[3] + lVar9 * 0x18);
                                              } while (*(uint *)(plVar30[3] + 8 + lVar9 * 0x18) !=
                                                       *(uint *)(_DAT_0f5d37e8 + 4));
                                              plVar7 = (long *)plVar30[4];
LAB_084e1f3a:
                                              if (plVar20 == plVar7) {
                                                puVar26 = &DAT_0f5d37e8;
                                              }
                                              else {
                                                puVar26 = (undefined *)plVar20[2];
                                              }
                                              auVar11 = (undefined1  [8])
                                                        func_0x048b0c90(plVar30,puVar26,uVar25,1);
                                              if (auVar11 == (undefined1  [8])0x0) {
                                                auStack_168 = (undefined1  [8])0x0;
                                                plStack_160 = (long *)0x0;
                                                func_0x048b0d20(auStack_168);
                                                auVar11 = auStack_168;
                                                plVar30 = plStack_160;
                                              }
                                              lStack_138 = 0;
                                              puStack_130 = (undefined *)0x0;
                                              lStack_148 = 0;
                                              lStack_140 = 0;
                                              pcStack_158 = (code *)0x0;
                                              pcStack_150 = (code *)0x0;
                                              auStack_168 = (undefined1  [8])0x0;
                                              plStack_160 = (long *)0x0;
                                              puStack_178 = (undefined *)auVar11;
                                              plStack_170 = plVar30;
                                              func_0x05d84ba0(auStack_168);
                                              func_0x05d9a920(&uStack_1c8,&puStack_178,auStack_168);
                                              if ((lStack_1a0 == lStack_d0) &&
                                                 ((lStack_c0 != 0) ==
                                                  (puStack_190 != (undefined *)0x0))) {
                                                if ((cStack_d4 == '\0') ||
                                                   ((int)uStack_1a8 != iStack_d8)) {
                                                  bVar31 = cStack_d4 == '\0' &&
                                                           uStack_1a8._4_1_ == '\0';
                                                }
                                                else {
                                                  if (cStack_d4 != '\x02') {
                                                    pppppppuStack_b0 = pppppppuStack_f8;
                                                  }
                                                  lVar9 = (*pcStack_1b8)(3,&uStack_1c8,
                                                                         pppppppuStack_b0);
                                                  bVar31 = lVar9 != 0;
                                                }
                                              }
                                              else {
                                                bVar31 = false;
                                              }
                                              if (pcStack_1b0 != (code *)0x0) {
                                                (*pcStack_1b0)(&uStack_1c8);
                                              }
                                              if (pcStack_150 != (code *)0x0) {
                                                (*pcStack_150)(auStack_168);
                                              }
                                              if (bVar31) {
                                                lVar9 = puStack_118[5];
                                                if ((ulong)*(uint *)(puVar10 + 7) != 0xffffffff) {
                                                  (**(code **)(&UNK_0f118868 +
                                                              (ulong)*(uint *)(puVar10 + 7) * 8))
                                                            (auStack_168,puVar10);
                                                }
                                                *(undefined4 *)(puVar10 + 7) = 0x15;
                                                pcStack_1b8 = (code *)&UNK_084ce670;
                                                pcStack_1b0 = (code *)0x0;
                                                uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x30eb36688);
                                                lStack_198 = 0;
                                                puStack_190 = &UNK_084ce590;
                                                lStack_148 = plStack_108[4];
                                                auStack_168 = (undefined1  [8])*plStack_108;
                                                plStack_160 = (long *)plStack_108[1];
                                                pcStack_158 = (code *)plStack_108[2];
                                                pcStack_150 = (code *)plStack_108[3];
                                                plVar30 = (long *)plStack_108[2];
                                                lStack_1a0 = lVar9;
                                                if (plVar30 == (long *)0x0) {
                                                  pcStack_158 = (code *)0x0;
                                                  uStack_1c8 = puVar10;
                                                }
                                                else {
                                                  uStack_1c8 = puVar10;
                                                  pcStack_158 = (code *)(**(code **)(*plVar30 + 0x30
                                                                                    ))(plVar30,0x15)
                                                  ;
                                                }
                                                puStack_178 = &UNK_0f11bc98;
                                                func_0x0ed75bc0(&puStack_178,plStack_100,&uStack_1c8
                                                                ,uStack_110,auStack_168);
                                                if (pcStack_1b0 != (code *)0x0) {
                                                  (*pcStack_1b0)(&uStack_1c8);
                                                }
                                              }
                                              else if ((*(uint *)(puStack_68 + 0x56) == 0xffffffff)
                                                      || (*(uint *)(puStack_68 + 0x56) <
                                                          (uint)uStack_60)) {
                                                uStack_80 = 0x2300000149614c;
                                                func_0x0ed5ffe0(*plStack_108,8,&uStack_80);
                                                if ((uStack_80 & 0x80000000000000) != 0) {
                                                  (**(code **)(_DAT_0f5463b0 + 0x28))
                                                            (&DAT_0f5463b0,
                                                             (uStack_80 & 0xff00ffffffffffff) - 8);
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
      }
    }
    if (pcStack_e0 != (code *)0x0) {
      (*pcStack_e0)(&pppppppuStack_f8);
    }
  }
LAB_084e238f:
  if (((ulong)uStack_a8 & 1) != 0) {
    func_0x0412a280(pcStack_98,(ulong)uStack_a8 & 0xfffffffffffffffe);
  }
  return;
}


