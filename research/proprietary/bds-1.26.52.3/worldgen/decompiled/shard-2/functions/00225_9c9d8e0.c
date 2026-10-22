/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9d9d8e0 (ELF vaddr 0x9c9d8e0)
 * Label: caller-of-callee
 * Body:  [[09d9d8e0, 09d9e0be] [09d9e0c0, 09d9e48d] [09d9e490, 09d9e9c2] [09d9e9da, 09d9ea23] [09d9eb08, 09d9eb12] [09d9eb4e, 09d9eb63]]
 * Ghidra: FUN_09d9d8e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09d9d8e0(long param_1,ulong *param_2,long param_3,byte param_4,ushort param_5,
                 ushort param_6)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  int *piVar7;
  int *piVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte bVar14;
  ushort uVar15;
  undefined8 *******pppppppuVar16;
  ulong *puVar17;
  char cVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined8 uVar25;
  byte bVar26;
  undefined8 ****ppppuVar27;
  long lVar28;
  int *piVar29;
  long lVar30;
  int *piVar31;
  undefined8 *****pppppuVar32;
  long lVar33;
  int *piVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 ******ppppppuVar38;
  undefined8 *******pppppppuVar39;
  undefined8 *******pppppppuVar40;
  int *piVar41;
  bool bVar42;
  byte bStack_20b;
  ushort uStack_20a;
  undefined8 *******pppppppuStack_208;
  undefined8 *******pppppppuStack_200;
  undefined8 *******pppppppuStack_1f8;
  long lStack_1f0;
  int iStack_1e4;
  ulong uStack_1e0;
  long lStack_1d8;
  ulong *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined1 auStack_1a8 [8];
  undefined8 ******ppppppuStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined1 auStack_190 [8];
  undefined8 ******ppppppuStack_188;
  undefined8 ******ppppppuStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  byte bStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  undefined1 auStack_118 [8];
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *******pppppppuStack_70;
  long lStack_68;
  undefined8 *******pppppppuStack_60;
  undefined8 *******pppppppuStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  bVar42 = ((byte)*param_2 & 1) != 0;
  auStack_118 = (undefined1  [8])((long)param_2 + 1);
  if (bVar42) {
    auStack_118 = (undefined1  [8])param_2[2];
  }
  pppppppuStack_110 = (undefined8 *******)(ulong)(byte)((byte)*param_2 >> 1);
  if (bVar42) {
    pppppppuStack_110 = (undefined8 *******)param_2[1];
  }
  bStack_20b = param_4;
  lStack_1f0 = param_1;
  lStack_1d8 = param_3;
  puStack_1d0 = param_2;
  func_0x0470d9a0(auStack_1a8,&UNK_012fb1c1,0x15,0xd,auStack_118);
  ppppppuVar23 = ppppppuStack_198;
  ppppppuVar38 = ppppppuStack_1a0;
  if (((ulong)auStack_1a8 & 1) == 0) {
    ppppppuVar23 = (undefined8 ******)(auStack_1a8 + 1);
    ppppppuVar38 = (undefined8 ******)((ulong)auStack_1a8 >> 1 & 0x7f);
  }
  pppppppuStack_208 = (undefined8 *******)0x0;
  if (ppppppuVar23 == (undefined8 ******)0x0) {
    pppppppuStack_208 = (undefined8 *******)((ulong)((uint)ppppppuVar38 & 0x7f) << 0x30);
  }
  else {
    puVar1 = (undefined1 *)((long)ppppppuVar38 + 9);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,puVar1,8);
    if (puVar1 != (undefined1 *)0x0 && puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(puVar1,8);
    }
    *puVar20 = ppppppuVar38;
    func_0x0eee2f00(puVar20 + 1,ppppppuVar23,ppppppuVar38);
    *(undefined1 *)((long)(puVar20 + 1) + (long)ppppppuVar38) = 0;
    pppppppuStack_208 =
         (undefined8 *******)((ulong)(puVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppppppuVar40 = (undefined8 *******)0xff00ffffffffffff;
  auStack_118 = (undefined1  [8])((ulong)auStack_118 & 0xffffffffffffff00);
  pppppppuStack_108 = (undefined8 *******)((ulong)pppppppuStack_108 & 0xffffffffffffff00);
  func_0x0eeb79f0(auStack_48,&pppppppuStack_208);
  puVar17 = puStack_1d0;
  if (((ulong)pppppppuStack_208 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_208 & 0xff00ffffffffffff) - 8);
  }
  pppppppuStack_208 = (undefined8 *******)0x0;
  if (((ulong)auStack_1a8 & 1) != 0) {
    func_0x0412a280(ppppppuStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
  }
  uStack_20a = param_6 | param_5;
  uVar37 = *(long *)(lStack_1f0 + 0x70) - *(long *)(lStack_1f0 + 0x68);
  func_0x09d9bd50(&iStack_1e4,lStack_1f0,puVar17);
  if (iStack_1e4 == 0) goto LAB_09d9e8a9;
  plVar4 = *(long **)(lStack_1f0 + 0x380);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,puVar17,&uStack_20a,&bStack_20b);
  }
  func_0x0412d550(0xf5a3810);
  LOCK();
  _DAT_0f5a38e0 = _DAT_0f5a38e0 + 1;
  UNLOCK();
  func_0x0412d610(0xf5a3810);
  ppppppuVar38 = _DAT_0f5a38f8;
  pbVar13 = _DAT_0f5a38f0;
  if ((_DAT_0f5a38f0 == (byte *)0x0) || (*_DAT_0f5a38f0 != 1)) goto LAB_09d9e9a0;
  bVar26 = 1;
  if (_DAT_0f5a38f8 != (undefined8 ******)0x0) {
    LOCK();
    _DAT_0f5a38f8[1] = (undefined8 *****)((long)_DAT_0f5a38f8[1] + 1);
    UNLOCK();
    bVar26 = *pbVar13;
  }
  ppppppuVar23 = _DAT_0f5a3900;
  auStack_118 = (undefined1  [8])0xf5a3810;
  pppppppuStack_110 = (undefined8 *******)CONCAT71(pppppppuStack_110._1_7_,1);
  pppppppuStack_108 = (undefined8 *******)pbVar13;
  ppppppuStack_100 = ppppppuVar38;
  ppppppuStack_f8 = _DAT_0f5a3900;
  if (((bVar26 & 1) == 0) &&
     (cVar18 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_0120b832),
     cVar18 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppppuVar5 = ppppppuVar23[4];
  for (pppppuVar32 = ppppppuVar23[3]; (pppppuVar32 != pppppuVar5 && (*(int *)pppppuVar32 != 4));
      pppppuVar32 = pppppuVar32 + 0x10) {
  }
  if ((pppppuVar32 == pppppuVar5) ||
     (ppppuVar6 = pppppuVar32[1], pppppuVar32[1] == (undefined8 ****)0x0)) {
    cVar18 = '\0';
    pppppppuStack_108 = (undefined8 *******)0x0;
    ppppppuStack_100 = (undefined8 ******)0x0;
    if (ppppppuVar38 != (undefined8 ******)0x0) goto LAB_09d9dc41;
LAB_09d9dc90:
  }
  else {
    do {
      ppppuVar27 = ppppuVar6;
      ppppuVar6 = (undefined8 ****)ppppuVar27[1][0x34];
    } while (ppppuVar6 != (undefined8 ****)0x0);
    cVar18 = *(char *)(ppppuVar27 + 2);
    pppppppuStack_108 = (undefined8 *******)0x0;
    ppppppuStack_100 = (undefined8 ******)0x0;
    if (ppppppuVar38 == (undefined8 ******)0x0) goto LAB_09d9dc90;
LAB_09d9dc41:
    ppppppuStack_100 = (undefined8 ******)0x0;
    pppppppuStack_108 = (undefined8 *******)0x0;
    LOCK();
    ppppppuVar23 = ppppppuVar38 + 1;
    pppppuVar32 = *ppppppuVar23;
    *ppppppuVar23 = (undefined8 *****)((long)*ppppppuVar23 + -1);
    UNLOCK();
    if (pppppuVar32 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuVar38)[2])(ppppppuVar38);
      FUN_0412c2d0(ppppppuVar38);
    }
    ppppppuVar23 = ppppppuStack_100;
    ppppppuStack_f8 = (undefined8 ******)0x0;
    if (ppppppuStack_100 == (undefined8 ******)0x0) goto LAB_09d9dc90;
    LOCK();
    ppppppuVar24 = ppppppuStack_100 + 1;
    pppppuVar32 = *ppppppuVar24;
    *ppppppuVar24 = (undefined8 *****)((long)*ppppppuVar24 + -1);
    UNLOCK();
    if (pppppuVar32 != (undefined8 *****)0x0) goto LAB_09d9dc90;
    (*(code *)(*ppppppuStack_100)[2])(ppppppuStack_100);
    FUN_0412c2d0(ppppppuVar23);
  }
  pppppppuVar40 = _DAT_0f5447f8;
  if ((char)pppppppuStack_110 == '\x01') {
    func_0x0eee02f0(auStack_118);
    pppppppuVar40 = _DAT_0f5447f8;
  }
  if (cVar18 != '\0') {
    uStack_20a = uStack_20a & 0xfff1;
  }
  _DAT_0f5447f8 = pppppppuVar40;
  if ((~uStack_20a & 0xe) != 0) {
    pppppppuVar21 = (undefined8 *******)func_0x0eee2e90(pppppppuVar40);
    if ((undefined8 *******)0xfffffffffffffff7 < pppppppuVar21) goto LAB_09d9e953;
    if (pppppppuVar21 < (undefined8 *******)0x17) {
      auStack_118[0] = (char)pppppppuVar21 * '\x02';
      pppppppuVar22 = (undefined8 *******)(auStack_118 + 1);
      if (pppppppuVar21 == (undefined8 *******)0x0) goto LAB_09d9dd9e;
    }
    else {
      uVar35 = 0x1a;
      if (((ulong)pppppppuVar21 | 7) != 0x17) {
        uVar35 = ((ulong)pppppppuVar21 | 7) + 1;
      }
      pppppppuVar22 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
      if (pppppppuVar22 == (undefined8 *******)0x0) {
        func_0x0eec74c0(uVar35,0);
      }
      auStack_118 = (undefined1  [8])(uVar35 | 1);
      pppppppuStack_110 = pppppppuVar21;
      pppppppuStack_108 = pppppppuVar22;
    }
    func_0x0eee2ee0(pppppppuVar22,pppppppuVar40,pppppppuVar21);
LAB_09d9dd9e:
    *(undefined1 *)((long)pppppppuVar22 + (long)pppppppuVar21) = 0;
    uVar35 = (ulong)iStack_1e4;
    auStack_1a8 = (undefined1  [8])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (auStack_1a8 == (undefined1  [8])0x0) {
      func_0x0eec74c0(0x10,0);
    }
    ppppppuStack_1a0 = (undefined8 ******)((long)auStack_1a8 + 0x10);
    *(undefined8 ******)auStack_1a8 = (undefined8 *****)(uVar35 & 0xffffffffe00fffff);
    *(undefined8 ******)((long)auStack_1a8 + 8) = (undefined8 *****)0x0;
    ppppppuVar38 = (undefined8 ******)(auStack_1a8 + 1);
    ppppppuStack_198 = ppppppuStack_1a0;
    if (DAT_0f551b88 == '\0') goto LAB_09d9e958;
    goto LAB_09d9de12;
  }
LAB_09d9e137:
  bVar26 = (byte)*puVar17;
  if ((bVar26 & 1) == 0) {
    pppppppuStack_1f8 = (undefined8 *******)puVar17[2];
    pppppppuStack_208 = (undefined8 *******)*puVar17;
    pppppppuStack_200 = (undefined8 *******)puVar17[1];
  }
  else {
    func_0x0412e5e0(&pppppppuStack_208,puVar17[2],puVar17[1]);
    bVar26 = (byte)*puVar17;
  }
  iVar19 = iStack_1e4;
  uVar15 = uStack_20a;
  bVar14 = bStack_20b;
  ppppppuVar38 = (undefined8 ******)(*(long *)(lStack_1f0 + 0x70) - *(long *)(lStack_1f0 + 0x68));
  if ((bVar26 & 1) == 0) {
    ppppppuStack_198 = (undefined8 ******)puVar17[2];
    auStack_1a8 = (undefined1  [8])*puVar17;
    ppppppuStack_1a0 = (undefined8 ******)puVar17[1];
  }
  else {
    func_0x0412e5e0(auStack_1a8,puVar17[2],puVar17[1]);
  }
  ppppppuVar23 = (undefined8 ******)func_0x0eee2e90(lStack_1d8);
  if ((undefined8 ******)0xfffffffffffffff7 < ppppppuVar23) {
    FUN_04882e30();
LAB_09d9e953:
    FUN_04882e30();
LAB_09d9e958:
    iVar19 = func_0x04108328(&DAT_0f551b88);
    if (iVar19 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f551b82 = _DAT_0f551b80;
      _DAT_0f551b80 = _DAT_0f551b80 + 1;
      func_0x0410844d(&DAT_0f551b88);
    }
LAB_09d9de12:
    func_0x09d9eb70(&pppppppuStack_208,lStack_1f0,auStack_118,auStack_1a8,_DAT_0f551b82,
                    &UNK_09d77520,0);
    if (auStack_1a8 != (undefined1  [8])0x0) {
      ppppppuStack_1a0 = (undefined8 ******)auStack_1a8;
      func_0x0412a280(auStack_1a8,(long)ppppppuStack_198 - (long)auStack_1a8);
    }
    if (((ulong)auStack_118 & 1) != 0) {
      func_0x0412a280(pppppppuStack_108,(ulong)auStack_118 & 0xfffffffffffffffe);
    }
    pppppppuVar40 = _DAT_0f5447f8;
    if (bStack_20b == 0) goto LAB_09d9deb2;
    cVar18 = ((2 < bStack_20b) * '\x02' | (byte)~(byte)uStack_20a >> 7) + 2;
    goto LAB_09d9debc;
  }
  puStack_1d0 = (ulong *)CONCAT62(puStack_1d0._2_6_,uVar15);
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,iVar19);
  if (ppppppuVar23 < (undefined8 ******)0x17) {
    auStack_190[0] = (char)ppppppuVar23 * '\x02';
    ppppppuVar24 = (undefined8 ******)(auStack_190 + 1);
    if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_09d9e25c;
  }
  else {
    uVar35 = 0x1a;
    if (((ulong)ppppppuVar23 | 7) != 0x17) {
      uVar35 = ((ulong)ppppppuVar23 | 7) + 1;
    }
    ppppppuVar24 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
    if (ppppppuVar24 == (undefined8 ******)0x0) {
      func_0x0eec74c0(uVar35,0);
    }
    auStack_190 = (undefined1  [8])(uVar35 | 1);
    iVar19 = (int)uStack_1e0;
    ppppppuStack_188 = ppppppuVar23;
    ppppppuStack_180 = ppppppuVar24;
LAB_09d9e25c:
    func_0x0eee2ee0(ppppppuVar24,lStack_1d8,ppppppuVar23);
  }
  pppppppuVar16 = pppppppuStack_1f8;
  pppppppuVar22 = pppppppuStack_200;
  pppppppuVar21 = pppppppuStack_208;
  lVar28 = ((long)ppppppuVar38 >> 5) * -0x5555555555555555 +
           ((long)uVar37 >> 5) * 0x5555555555555555;
  *(undefined1 *)((long)ppppppuVar24 + (long)ppppppuVar23) = 0;
  bStack_148 = bVar14;
  uStack_140 = 0;
  uStack_13c = CONCAT22(uStack_13c._2_2_,puStack_1d0._0_2_);
  uStack_138 = 0xffffffffffffffff;
  uStack_130 = 0xffffffff;
  uStack_12c = CONCAT31(uStack_12c._1_3_,1);
  auStack_118 = (undefined1  [8])pppppppuStack_208;
  pppppppuStack_110 = pppppppuStack_200;
  pppppppuStack_108 = pppppppuStack_1f8;
  pppppppuStack_208 = (undefined8 *******)0x0;
  pppppppuStack_200 = (undefined8 *******)0x0;
  pppppppuStack_1f8 = (undefined8 *******)0x0;
  ppppppuStack_100 = (undefined8 ******)auStack_1a8;
  ppppppuStack_f8 = ppppppuStack_1a0;
  ppppppuStack_f0 = ppppppuStack_198;
  auStack_1a8 = (undefined1  [8])0x0;
  ppppppuStack_1a0 = (undefined8 ******)0x0;
  ppppppuStack_198 = (undefined8 ******)0x0;
  ppppppuStack_d8 = ppppppuStack_180;
  ppppppuStack_e8 = (undefined8 ******)auStack_190;
  ppppppuStack_e0 = ppppppuStack_188;
  auStack_190 = (undefined1  [8])0x0;
  ppppppuStack_188 = (undefined8 ******)0x0;
  ppppppuStack_180 = (undefined8 ******)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_178 = 0;
  uStack_170 = 0;
  lStack_168 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_1d8 = CONCAT71(lStack_1d8._1_7_,bVar14);
  bStack_a0 = bVar14;
  uStack_98 = 0;
  uStack_94 = uStack_13c;
  uStack_90 = 0xffffffff;
  uStack_8c = 0xffffffff;
  uStack_88 = CONCAT44(uStack_12c,0xffffffff);
  ppppppuVar38 = *(undefined8 *******)(lStack_1f0 + 0x1c0);
  iStack_144 = iVar19;
  lStack_128 = lVar28;
  iStack_9c = iVar19;
  uStack_80 = lVar28;
  if (ppppppuVar38 == (undefined8 ******)0x0) {
    ppppppuVar23 = (undefined8 ******)(lStack_1f0 + 0x1c0);
    ppppppuVar24 = ppppppuVar23;
  }
  else {
    pppppppuVar40 = (undefined8 *******)(auStack_118 + 1);
    pppppppuVar39 = (undefined8 *******)((ulong)pppppppuVar21 >> 1 & 0x7f);
    if (((ulong)pppppppuVar21 & 1) != 0) {
      pppppppuVar40 = pppppppuVar16;
      pppppppuVar39 = pppppppuVar22;
    }
    do {
      while( true ) {
        ppppppuVar24 = ppppppuVar38;
        bVar42 = (*(byte *)(ppppppuVar24 + 4) & 1) != 0;
        pppppuVar32 = (undefined8 *****)((long)ppppppuVar24 + 0x21);
        if (bVar42) {
          pppppuVar32 = ppppppuVar24[6];
        }
        pppppppuVar21 = (undefined8 *******)(ulong)(*(byte *)(ppppppuVar24 + 4) >> 1);
        if (bVar42) {
          pppppppuVar21 = (undefined8 *******)ppppppuVar24[5];
        }
        pppppppuVar22 = pppppppuVar39;
        if (pppppppuVar21 < pppppppuVar39) {
          pppppppuVar22 = pppppppuVar21;
        }
        iVar19 = func_0x0eee2ff0(pppppppuVar40,pppppuVar32,pppppppuVar22);
        if (iVar19 != 0) break;
        if (pppppppuVar39 < pppppppuVar21) goto LAB_09d9e440;
LAB_09d9e495:
        iVar19 = func_0x0eee2ff0(pppppuVar32,pppppppuVar40,pppppppuVar22);
        if (iVar19 == 0) {
          if (pppppppuVar39 <= pppppppuVar21) goto LAB_09d9e612;
        }
        else if (-1 < iVar19) goto LAB_09d9e612;
        ppppppuVar38 = (undefined8 ******)ppppppuVar24[1];
        if ((undefined8 ******)ppppppuVar24[1] == (undefined8 ******)0x0) {
          ppppppuVar23 = ppppppuVar24 + 1;
          goto LAB_09d9e4d2;
        }
      }
      if (-1 < iVar19) goto LAB_09d9e495;
LAB_09d9e440:
      ppppppuVar38 = (undefined8 ******)*ppppppuVar24;
      ppppppuVar23 = ppppppuVar24;
    } while ((undefined8 ******)*ppppppuVar24 != (undefined8 ******)0x0);
  }
LAB_09d9e4d2:
  pppppppuVar40 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
  if (pppppppuVar40 == (undefined8 *******)0x0) {
    func_0x0eec74c0(0xc0,0);
  }
  lVar28 = lStack_1f0;
  pppppppuVar40[6] = pppppppuStack_108;
  pppppppuVar40[4] = (undefined8 ******)auStack_118;
  pppppppuVar40[5] = pppppppuStack_110;
  auStack_118 = (undefined1  [8])0x0;
  pppppppuStack_110 = (undefined8 *******)0x0;
  pppppppuStack_108 = (undefined8 *******)0x0;
  pppppppuVar40[9] = ppppppuStack_f0;
  pppppppuVar40[7] = ppppppuStack_100;
  pppppppuVar40[8] = ppppppuStack_f8;
  ppppppuStack_100 = (undefined8 ******)0x0;
  ppppppuStack_f8 = (undefined8 ******)0x0;
  ppppppuStack_f0 = (undefined8 ******)0x0;
  pppppppuVar40[0xc] = ppppppuStack_d8;
  pppppppuVar40[10] = ppppppuStack_e8;
  pppppppuVar40[0xb] = ppppppuStack_e0;
  ppppppuStack_e8 = (undefined8 ******)0x0;
  ppppppuStack_e0 = (undefined8 ******)0x0;
  ppppppuStack_d8 = (undefined8 ******)0x0;
  pppppppuVar40[0xd] = (undefined8 ******)0x0;
  pppppppuVar40[0xe] = (undefined8 ******)0x0;
  pppppppuVar40[0xf] = (undefined8 ******)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  pppppppuVar40[0x10] = (undefined8 ******)0x0;
  pppppppuVar40[0x11] = (undefined8 ******)0x0;
  pppppppuVar40[0x12] = (undefined8 ******)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  *(undefined1 *)(pppppppuVar40 + 0x13) = (undefined1)lStack_1d8;
  *(int *)((long)pppppppuVar40 + 0x9c) = (int)uStack_1e0;
  *(undefined4 *)(pppppppuVar40 + 0x14) = 0;
  *(undefined4 *)((long)pppppppuVar40 + 0xa4) = uStack_94;
  *(undefined4 *)(pppppppuVar40 + 0x15) = uStack_90;
  *(undefined4 *)((long)pppppppuVar40 + 0xac) = uStack_8c;
  *(undefined4 *)(pppppppuVar40 + 0x16) = (undefined4)uStack_88;
  *(undefined4 *)(pppppppuVar40 + 0x16) = (undefined4)uStack_88;
  *(undefined4 *)((long)pppppppuVar40 + 0xb4) = uStack_88._4_4_;
  *(undefined4 *)(pppppppuVar40 + 0x17) = (undefined4)uStack_80;
  *(undefined4 *)((long)pppppppuVar40 + 0xbc) = uStack_80._4_4_;
  *pppppppuVar40 = (undefined8 ******)0x0;
  pppppppuVar40[1] = (undefined8 ******)0x0;
  pppppppuVar40[2] = ppppppuVar24;
  *ppppppuVar23 = pppppppuVar40;
  if (**(long **)(lStack_1f0 + 0x1b8) != 0) {
    *(long *)(lStack_1f0 + 0x1b8) = **(long **)(lStack_1f0 + 0x1b8);
  }
  func_0x048bed00(*(undefined8 *)(lStack_1f0 + 0x1c0),pppppppuVar40);
  *(long *)(lVar28 + 0x1c8) = *(long *)(lVar28 + 0x1c8) + 1;
LAB_09d9e612:
  func_0x09d9fd60(auStack_118);
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    func_0x0412a280(lStack_160,lStack_150 - lStack_160);
  }
  lVar28 = lStack_1f0;
  if (lStack_178 != 0) {
    func_0x09de48b0(&lStack_178);
    func_0x0412a280(lStack_178,lStack_168 - lStack_178);
  }
  if (((ulong)auStack_190 & 1) != 0) {
    func_0x0412a280(ppppppuStack_180,(ulong)auStack_190 & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_1a8 & 1) != 0) {
    func_0x0412a280(ppppppuStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
  }
  if (((ulong)pppppppuStack_208 & 1) != 0) {
    func_0x0412a280(pppppppuStack_1f8,(ulong)pppppppuStack_208 & 0xfffffffffffffffe);
  }
  piVar7 = *(int **)(lVar28 + 0x1a8);
  if (piVar7 < *(int **)(lVar28 + 0x1b0)) {
    *piVar7 = iStack_1e4;
    piVar41 = piVar7 + 1;
LAB_09d9e8a2:
    *(int **)(lVar28 + 0x1a8) = piVar41;
LAB_09d9e8a9:
    func_0x0eeb81b0(auStack_48);
    return;
  }
  piVar8 = *(int **)(lVar28 + 0x1a0);
  lVar33 = (long)piVar7 - (long)piVar8;
  lVar30 = lVar33 >> 2;
  pppppppuVar21 = (undefined8 *******)(lVar30 + 1);
  if ((ulong)pppppppuVar21 >> 0x3e == 0) {
    puStack_1d0 = (ulong *)CONCAT44(puStack_1d0._4_4_,iStack_1e4);
    uStack_1e0 = (long)*(int **)(lVar28 + 0x1b0) - (long)piVar8;
    pppppppuVar40 = (undefined8 *******)((long)uStack_1e0 >> 1);
    if ((undefined8 *******)((long)uStack_1e0 >> 1) <= pppppppuVar21) {
      pppppppuVar40 = pppppppuVar21;
    }
    if (0x7ffffffffffffffb < uStack_1e0) {
      pppppppuVar40 = (undefined8 *******)0x3fffffffffffffff;
    }
    lStack_1d8 = lVar30;
    if (pppppppuVar40 < (undefined8 *******)0x4000000000000000) {
      lStack_68 = (long)pppppppuVar40 * 4;
      lVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar28 == 0) {
        func_0x0eec74c0(lStack_68,0);
      }
      *(undefined4 *)(lVar28 + lVar33) = puStack_1d0._0_4_;
      piVar41 = (int *)(lVar28 + lVar33 + 4);
      piVar29 = (int *)(lVar28 + lVar33 + lStack_1d8 * -4);
      if (piVar8 != piVar7) {
        piVar31 = piVar8;
        piVar34 = piVar29;
        if ((0x4b < lVar33 - 4U) &&
           (0x1f < (ulong)((long)piVar7 + (lVar28 - (lVar33 + (long)piVar8 * 2))))) {
          uVar35 = (lVar33 - 4U >> 2) + 1;
          uVar37 = uVar35 & 0x7ffffffffffffff8;
          piVar31 = piVar8 + uVar37;
          piVar34 = piVar29 + uVar37;
          lVar30 = lVar33 + lStack_1d8 * -4 + lVar28;
          uVar36 = 0;
          do {
            piVar2 = piVar8 + uVar36;
            iVar19 = piVar2[1];
            iVar10 = piVar2[2];
            iVar11 = piVar2[3];
            uVar25 = *(undefined8 *)(piVar8 + uVar36 + 4);
            uVar12 = *(undefined8 *)(piVar8 + uVar36 + 4 + 2);
            piVar3 = (int *)(lVar30 + uVar36 * 4);
            *piVar3 = *piVar2;
            piVar3[1] = iVar19;
            piVar3[2] = iVar10;
            piVar3[3] = iVar11;
            puVar20 = (undefined8 *)(lVar30 + 0x10 + uVar36 * 4);
            *puVar20 = uVar25;
            puVar20[1] = uVar12;
            uVar36 = uVar36 + 8;
          } while (uVar37 != uVar36);
          if (uVar35 == uVar37) goto LAB_09d9e871;
        }
        do {
          *piVar34 = *piVar31;
          piVar31 = piVar31 + 1;
          piVar34 = piVar34 + 1;
        } while (piVar31 != piVar7);
      }
LAB_09d9e871:
      *(int **)(lStack_1f0 + 0x1a0) = piVar29;
      *(int **)(lStack_1f0 + 0x1a8) = piVar41;
      *(long *)(lStack_1f0 + 0x1b0) = lVar28 + (long)pppppppuVar40 * 4;
      lVar28 = lStack_1f0;
      if (piVar8 != (int *)0x0) {
        func_0x0412a280(piVar8,uStack_1e0);
        lVar28 = lStack_1f0;
      }
      goto LAB_09d9e8a2;
    }
  }
  else {
    func_0x09de48a0();
  }
  func_0x04882eb0();
LAB_09d9e99b:
  FUN_04882e30();
LAB_09d9e9a0:
  uVar25 = func_0x0eee02f0(0xf5a3810);
  func_0x0488eff0(auStack_118);
  pppppppuStack_200 = pppppppuVar40;
  func_0x0488ef50(&pppppppuStack_58);
  if ((uStack_1c8 & 1) != 0) {
    func_0x0412a280(ppppppuStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_1a8 & 1) != 0) {
    func_0x0412a280(ppppppuStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
  }
  func_0x0eeb81b0(auStack_48);
  func_0x0eee2d70(uVar25);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
LAB_09d9deb2:
  cVar18 = '\x01';
  if ((char)(byte)uStack_20a < '\0') goto LAB_09d9e137;
LAB_09d9debc:
  ppppppuVar23 = (undefined8 ******)func_0x0eee2e90(_DAT_0f5447f8);
  if ((undefined8 ******)0xfffffffffffffff7 < ppppppuVar23) goto LAB_09d9e99b;
  if (ppppppuVar23 < (undefined8 ******)0x17) {
    auStack_1a8[0] = (char)ppppppuVar23 * '\x02';
    if (ppppppuVar23 == (undefined8 ******)0x0) {
      *(undefined1 *)ppppppuVar38 = 0;
      bVar26 = (byte)*puVar17;
      goto joined_r0x09d9df98;
    }
  }
  else {
    uVar35 = 0x1a;
    if (((ulong)ppppppuVar23 | 7) != 0x17) {
      uVar35 = ((ulong)ppppppuVar23 | 7) + 1;
    }
    uStack_1e0 = uVar37;
    ppppppuVar38 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
    if (ppppppuVar38 == (undefined8 ******)0x0) {
      func_0x0eec74c0(uVar35,0);
    }
    auStack_1a8 = (undefined1  [8])(uVar35 | 1);
    uVar37 = uStack_1e0;
    ppppppuStack_1a0 = ppppppuVar23;
    ppppppuStack_198 = ppppppuVar38;
  }
  func_0x0eee2ee0(ppppppuVar38,pppppppuVar40,ppppppuVar23);
  *(undefined1 *)((long)ppppppuVar38 + (long)ppppppuVar23) = 0;
  bVar26 = (byte)*puVar17;
joined_r0x09d9df98:
  if ((bVar26 & 1) == 0) {
    ppppppuStack_1b8 = (undefined8 ******)puVar17[2];
    uStack_1c8 = *puVar17;
    uStack_1c0 = puVar17[1];
  }
  else {
    func_0x0412e5e0(&uStack_1c8,puVar17[2],puVar17[1]);
  }
  pppppppuStack_208 = (undefined8 *******)0x0;
  pppppppuStack_200 = (undefined8 *******)0x0;
  pppppppuStack_1f8 = (undefined8 *******)0x0;
  uStack_50 = 0;
  pppppppuStack_58 = &pppppppuStack_208;
  pppppppuVar40 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (pppppppuVar40 == (undefined8 *******)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  pppppppuStack_1f8 = pppppppuVar40 + 3;
  pppppppuStack_110 = &pppppppuStack_60;
  pppppppuStack_108 = &pppppppuStack_70;
  ppppppuStack_100 = (undefined8 ******)((ulong)ppppppuStack_100 & 0xffffffffffffff00);
  auStack_118 = (undefined1  [8])&pppppppuStack_208;
  pppppppuStack_208 = pppppppuVar40;
  pppppppuStack_70 = pppppppuVar40;
  pppppppuStack_60 = pppppppuVar40;
  if ((uStack_1c8 & 1) == 0) {
    pppppppuVar40[2] = ppppppuStack_1b8;
    *(undefined4 *)pppppppuVar40 = (undefined4)uStack_1c8;
    *(undefined4 *)((long)pppppppuVar40 + 4) = uStack_1c8._4_4_;
    *(undefined4 *)(pppppppuVar40 + 1) = (undefined4)uStack_1c0;
    *(undefined4 *)((long)pppppppuVar40 + 0xc) = uStack_1c0._4_4_;
  }
  else {
    pppppppuStack_200 = pppppppuVar40;
    func_0x0412e5e0(pppppppuVar40,ppppppuStack_1b8,uStack_1c0);
  }
  pppppppuStack_200 = pppppppuStack_70 + 3;
  func_0x09d9f270(lStack_1f0,auStack_1a8,&pppppppuStack_208,cVar18);
  pppppppuVar21 = pppppppuStack_208;
  pppppppuVar40 = pppppppuStack_200;
  if (pppppppuStack_208 != (undefined8 *******)0x0) {
    for (; pppppppuVar21 != pppppppuVar40; pppppppuVar40 = pppppppuVar40 + -3) {
      if (((ulong)pppppppuVar40[-3] & 1) != 0) {
        func_0x0412a280(pppppppuVar40[-1],(ulong)pppppppuVar40[-3] & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_200 = pppppppuVar21;
    func_0x0412a280(pppppppuStack_208,(long)pppppppuStack_1f8 - (long)pppppppuStack_208);
  }
  if ((uStack_1c8 & 1) != 0) {
    func_0x0412a280(ppppppuStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_1a8 & 1) != 0) {
    func_0x0412a280(ppppppuStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
  }
  goto LAB_09d9e137;
}


