/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9e32bb0 (ELF vaddr 0x9d32bb0)
 * Label: caller-of-callee
 * Body:  [[09e32bb0, 09e33ae3] [09e33d8e, 09e33e4b] [09e33f25, 09e33f34]]
 * Ghidra: FUN_09e32bb0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09e32bb0(undefined8 *param_1)

{
  long *plVar1;
  byte ****ppppbVar2;
  byte ******ppppppbVar3;
  long *plVar4;
  byte *****pppppbVar5;
  byte ***pppbVar6;
  byte *****pppppbVar7;
  byte *****pppppbVar8;
  long lVar9;
  byte *******pppppppbVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte *****pppppbVar16;
  long *******ppppppplVar17;
  byte ****ppppbVar18;
  byte ******ppppppbVar19;
  undefined4 *puVar20;
  byte *****pppppbVar21;
  byte *******pppppppbVar22;
  byte *****pppppbVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  byte *******pppppppbVar27;
  bool bVar28;
  undefined8 uStack_1a0;
  byte bStack_198;
  undefined7 uStack_197;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *******ppppppplStack_178;
  byte ******ppppppbStack_170;
  undefined8 uStack_168;
  undefined4 auStack_138 [2];
  uint uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  byte *******pppppppbStack_108;
  byte *******pppppppbStack_100;
  byte ****ppppbStack_c8;
  byte *******pppppppbStack_c0;
  byte *****pppppbStack_88;
  undefined1 uStack_80;
  long *******ppppppplStack_78;
  undefined8 uStack_70;
  
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_128);
  if ((uStack_128 & 1) != 0) {
    func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
  }
  uVar25 = *param_1;
  pppppppbVar10 = (byte *******)param_1[1];
  if (pppppppbVar10 != (byte *******)0x0) {
    LOCK();
    pppppppbVar10[1] = (byte ******)((long)pppppppbVar10[1] + 1);
    UNLOCK();
    LOCK();
    pppppppbVar10[1] = (byte ******)((long)pppppppbVar10[1] + 1);
    UNLOCK();
  }
  uStack_130 = 1;
  auStack_138[0] = 0x3f800000;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  bStack_198 = 0x10;
  uStack_197 = 0x61767265746e69;
  uStack_190 = 0x6c;
  uStack_1a0 = 0x9e85e7a27b8f12ca;
  uStack_70 = 0x18;
  pppppppbStack_100 = (byte *******)0x18;
  ppppppplStack_78 = (long *******)0x0;
  pppppppbStack_108 = (byte *******)&UNK_0f1e7f08;
  pppppbVar16 = (byte *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (pppppbVar16 == (byte *****)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  ppppppplStack_178 = (long *******)pppppppbStack_108;
  pppppbVar16[1] = (byte ****)0x0;
  pppppbVar16[2] = (byte ****)0x0;
  *pppppbVar16 = (byte ****)&UNK_0f1e7ce0;
  pppppppbStack_108 = (byte *******)0x0;
  ppppppbStack_170 = (byte ******)pppppppbStack_100;
  pppppbVar16[4] = (byte ****)&UNK_0f2ccd78;
  pppppbVar16[5] = (byte ****)0x0;
  pppppbVar16[6] = (byte ****)0x0;
  pppppbVar16[7] = (byte ****)0x0;
  pppppbVar16[8] = (byte ****)0x0;
  pppppbVar16[9] = (byte ****)0x0;
  pppppbVar16[10] = (byte ****)0x0;
  pppppbVar16[0xb] = (byte ****)0x0;
  pppppbVar16[0xc] = (byte ****)0x0;
  *(undefined1 *)(pppppbVar16 + 0xd) = 0;
  func_0x04aa75f0(pppppbVar16 + 0xe,&pppppbStack_88,&UNK_01254d89);
  *(undefined1 *)(pppppbVar16 + 0x10) = 0;
  pppppbVar16[0x11] = (byte ****)0x0;
  pppppbVar16[0x12] = (byte ****)0x0;
  pppppbVar16[0x13] = (byte ****)0x0;
  pppppbVar16[0x14] = (byte ****)0x0;
  pppppbVar16[0x15] = (byte ****)0x0;
  pppppbVar16[0x16] = (byte ****)0x0;
  pppppbVar16[0x17] = (byte ****)0xffffffff;
  pppppbVar16[0x26] = (byte ****)0x0;
  pppppbVar16[0x27] = (byte ****)0x0;
  pppppbVar16[0x18] = (byte ****)0x0;
  pppppbVar16[0x19] = (byte ****)0x0;
  pppppbVar16[0x1a] = (byte ****)0x0;
  pppppbVar16[0x1b] = (byte ****)0x0;
  pppppbVar16[0x1c] = (byte ****)0x0;
  pppppbVar16[0x1d] = (byte ****)0x0;
  pppppbVar16[0x1e] = (byte ****)0x0;
  pppppbVar16[0x1f] = (byte ****)0x0;
  pppppbVar16[4] = (byte ****)&UNK_0f1e7d30;
  pppppbVar16[0x2e] = (byte ****)0x0;
  pppppbVar16[0x2f] = (byte ****)0x0;
  if (ppppppplStack_178 == (long *******)0x0) {
    ppppppplVar17 = (long *******)0x0;
  }
  else {
    (*(code *)*ppppppplStack_178)(&ppppppplStack_178,pppppbVar16 + 0x2e);
    ppppppplVar17 = ppppppplStack_178;
  }
  pppppbVar8 = pppppbVar16 + 4;
  ppppppplStack_178 = (long *******)0x0;
  pppppbVar16[0x2e] = (byte ****)ppppppplVar17;
  pppppbStack_88 = pppppbVar16 + 0x36;
  pppppbVar16[0x36] = (byte ****)0x0;
  pppppbVar16[0x37] = (byte ****)0x0;
  pppppbVar16[0x38] = (byte ****)0x0;
  uStack_80 = 0;
  ppppbVar18 = (byte ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (ppppbVar18 == (byte ****)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  pppppbVar7 = pppppbVar16 + 0x11;
  pppppbVar16[0x36] = ppppbVar18;
  pppppbVar16[0x38] = ppppbVar18 + 5;
  ppppbVar18[4] = (byte ***)0x0;
  ppppbVar18[1] = (byte ***)0x746c75616665640e;
  ppppbVar18[2] = (byte ***)0x0;
  ppppbVar18[3] = (byte ***)0x0;
  *ppppbVar18 = (byte ***)0xdead4915c9c6c0d8;
  pppppbVar16[0x37] = ppppbVar18 + 5;
  pppppbVar5 = pppppbVar16 + 0x12;
  if (pppppbVar7 != (byte *****)&DAT_0f5520d8) {
    if (((ulong)*pppppbVar5 & 1) == 0) {
      if ((_DAT_0f5520e0 & 1) == 0) {
        pppppbVar16[0x14] = _DAT_0f5520f0;
        uVar14 = uRam000000000f5520ec;
        uVar13 = _DAT_0f5520e8;
        uVar12 = uRam000000000f5520e4;
        *(uint *)pppppbVar5 = _DAT_0f5520e0;
        *(undefined4 *)((long)pppppbVar16 + 0x94) = uVar12;
        *(undefined4 *)(pppppbVar16 + 0x13) = uVar13;
        *(undefined4 *)((long)pppppbVar16 + 0x9c) = uVar14;
      }
      else {
        func_0x04885070(pppppbVar5,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
      }
    }
    else {
      bVar28 = (_DAT_0f5520e0 & 1) != 0;
      ppppbVar18 = (byte ****)0xf5520e1;
      if (bVar28) {
        ppppbVar18 = _DAT_0f5520f0;
      }
      uVar26 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
      if (bVar28) {
        uVar26 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
      }
      func_0x04885120(pppppbVar5,ppppbVar18,uVar26);
    }
  }
  pppppbVar16[0x11] = _DAT_0f5520d8;
  pppppbVar16[0x15] = (byte ****)0x0;
  if (ppppppplStack_178 != (long *******)0x0) {
    (*(code *)ppppppplStack_178[1])(&ppppppplStack_178);
  }
  pppppbVar23 = pppppbVar16 + 1;
  if (pppppppbStack_108 != (byte *******)0x0) {
    (*(code *)pppppppbStack_108[1])(&pppppppbStack_108);
  }
  LOCK();
  *pppppbVar23 = (byte ****)((long)*pppppbVar23 + 1);
  UNLOCK();
  puStack_110 = param_1;
  ppppppbVar19 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppppbVar19 == (byte ******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppppppbVar19[1] = (byte *****)0x0;
  ppppppbVar19[2] = (byte *****)0x0;
  *ppppppbVar19 = (byte *****)&UNK_0f1e7e10;
  ppppppbVar19[6] = (byte *****)0x0;
  ppppppbVar19[7] = (byte *****)0x0;
  ppppppbVar19[4] = (byte *****)&UNK_0f1e7e60;
  ppppppbVar19[0xe] = pppppbVar8;
  ppppppbVar19[0xf] = pppppbVar16;
  LOCK();
  pppppbVar16[1] = (byte ****)((long)pppppbVar16[1] + 1);
  UNLOCK();
  ppppppplVar17 = (long *******)(ppppppbVar19 + 4);
  ppppppplStack_178 = ppppppplVar17;
  ppppppbStack_170 = ppppppbVar19;
  puVar20 = (undefined4 *)func_0x09e6c9d0(uVar25,&uStack_1a0);
  pppppbVar21 = *(byte ******)(puVar20 + 0x24);
  if (pppppbVar21 < *(byte ******)(puVar20 + 0x26)) {
    pppppbVar21[2] = (byte ****)0x0;
    pppppbVar21[3] = (byte ****)0x0;
    *pppppbVar21 = (byte ****)0x0;
    pppppbVar21[1] = (byte ****)0x0;
    pppppbVar21[4] = (byte ****)0x0;
    if (pppppbVar21 != pppppbVar7) {
      if (((ulong)*pppppbVar5 & 1) == 0) {
        pppppbVar21[3] = pppppbVar16[0x14];
        ppppbVar18 = pppppbVar16[0x13];
        pppppbVar21[1] = *pppppbVar5;
        pppppbVar21[2] = ppppbVar18;
      }
      else {
        func_0x04885070(pppppbVar21 + 1,pppppbVar16[0x14],pppppbVar16[0x13]);
      }
    }
    *pppppbVar21 = *pppppbVar7;
    pppppbVar21[5] = (byte ****)ppppppplVar17;
    pppppbVar21[6] = (byte ****)ppppppbVar19;
    LOCK();
    ppppppbVar19[1] = (byte *****)((long)ppppppbVar19[1] + 1);
    UNLOCK();
    pppppbVar21 = pppppbVar21 + 7;
    *(byte ******)(puVar20 + 0x24) = pppppbVar21;
  }
  else {
    pppppbVar21 = (byte *****)func_0x09e6ec10(puVar20 + 0x22,pppppbVar7,&ppppppplStack_178);
  }
  *(byte ******)(puVar20 + 0x24) = pppppbVar21;
  uVar12 = *puVar20;
  uVar13 = puVar20[1];
  uVar14 = puVar20[2];
  uVar15 = puVar20[3];
  if (*(long *)(puVar20 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar20 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  ppppbVar18 = pppppbVar16[0xf];
  *(undefined4 *)(pppppbVar16 + 0xe) = uVar12;
  *(undefined4 *)((long)pppppbVar16 + 0x74) = uVar13;
  *(undefined4 *)(pppppbVar16 + 0xf) = uVar14;
  *(undefined4 *)((long)pppppbVar16 + 0x7c) = uVar15;
  if (ppppbVar18 != (byte ****)0x0) {
    LOCK();
    ppppbVar2 = ppppbVar18 + 1;
    pppbVar6 = *ppppbVar2;
    *ppppbVar2 = (byte ***)((long)*ppppbVar2 + -1);
    UNLOCK();
    if (pppbVar6 == (byte ***)0x0) {
      (*(code *)(*ppppbVar18)[2])(ppppbVar18);
      FUN_0412c2d0(ppppbVar18);
    }
  }
  ppppppbVar19 = ppppppbStack_170;
  *(undefined1 *)(pppppbVar16 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
  if (ppppppbStack_170 != (byte ******)0x0) {
    LOCK();
    ppppppbVar3 = ppppppbStack_170 + 1;
    pppppbVar7 = *ppppppbVar3;
    *ppppppbVar3 = (byte *****)((long)*ppppppbVar3 + -1);
    UNLOCK();
    if (pppppbVar7 == (byte *****)0x0) {
      (*(code *)(*ppppppbStack_170)[2])(ppppppbStack_170);
      FUN_0412c2d0(ppppppbVar19);
    }
  }
  LOCK();
  ppppbVar18 = *pppppbVar23;
  *pppppbVar23 = (byte ****)((long)*pppppbVar23 + -1);
  UNLOCK();
  if (ppppbVar18 == (byte ****)0x0) {
    (*(code *)(*pppppbVar16)[2])(pppppbVar16);
    FUN_0412c2d0(pppppbVar16);
    LOCK();
    pppppppbVar22 = (byte *******)*pppppbVar23;
    *pppppbVar23 = (byte ****)((long)*pppppbVar23 + -1);
    UNLOCK();
  }
  else {
    LOCK();
    pppppppbVar22 = (byte *******)*pppppbVar23;
    *pppppbVar23 = (byte ****)((long)*pppppbVar23 + -1);
    UNLOCK();
  }
  if (pppppppbVar22 == (byte *******)0x0) {
    (*(code *)(*pppppbVar16)[2])(pppppbVar16);
    FUN_0412c2d0(pppppbVar16);
  }
  if (ppppppplStack_78 != (long *******)0x0) {
    (*(code *)ppppppplStack_78[1])(&ppppppplStack_78);
  }
  if ((bStack_198 & 1) != 0) {
    func_0x0412a280(uStack_188,CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
  }
  if (pppppppbVar10 != (byte *******)0x0) {
    LOCK();
    pppppppbVar27 = pppppppbVar10 + 1;
    ppppppbVar19 = *pppppppbVar27;
    *pppppppbVar27 = (byte ******)((long)*pppppppbVar27 + -1);
    UNLOCK();
    if (ppppppbVar19 == (byte ******)0x0) {
      (*(code *)(*pppppppbVar10)[2])(pppppppbVar10);
      FUN_0412c2d0(pppppppbVar10);
    }
  }
  ppppppplStack_178 = (long *******)0x18;
  ppppppbStack_170 = (byte ******)0x0;
  uStack_168 = (ulong)uStack_168._4_4_ << 0x20;
  pppppppbStack_108 = &ppppppbStack_170;
  pppppppbStack_100 = &ppppppbStack_170;
  if ((ulong)uStack_130 != 0xffffffff) {
    ppppppplVar17 = (long *******)&pppppppbStack_108;
    ppppppplStack_78 = ppppppplVar17;
    (**(code **)(&UNK_0f2bc850 + (ulong)uStack_130 * 8))(&ppppppplStack_78,auStack_138);
    pppppppbStack_c0 = (byte *******)0x0;
    ppppbStack_c8 = (byte ****)&UNK_0f1e7f20;
    pppppppbVar22 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppppppbVar22 == (byte *******)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *pppppppbVar22 = (byte ******)ppppppplStack_178;
    pppppppbVar22[1] = (byte ******)0x0;
    *(undefined4 *)(pppppppbVar22 + 2) = 0;
    if ((long ********)pppppppbVar22 != &ppppppplStack_178) {
      pppppppbStack_108 = pppppppbVar22 + 1;
      pppppppbVar27 = pppppppbStack_108;
      pppppppbStack_100 = pppppppbStack_108;
      if ((uStack_168 & 0xffffffff) == 0xffffffff) goto LAB_09e33ab7;
      ppppppplStack_78 = ppppppplVar17;
      (**(code **)(&UNK_0f2bc850 + (uStack_168 & 0xffffffff) * 8))
                (&ppppppplStack_78,&ppppppbStack_170);
    }
    puVar24 = puStack_110;
    pppppbVar16 = pppppbVar16 + 0x26;
    pppppppbStack_c0 = pppppppbVar22;
    if (pppppbVar16 == &ppppbStack_c8) {
      if (ppppbStack_c8 != (byte ****)0x0) {
        (*(code *)ppppbStack_c8[1])(&ppppbStack_c8);
      }
    }
    else {
      if (*pppppbVar16 != (byte ****)0x0) {
        (*(code *)(*pppppbVar16)[1])(pppppbVar16);
      }
      if (ppppbStack_c8 == (byte ****)0x0) {
        ppppbVar18 = (byte ****)0x0;
      }
      else {
        (*(code *)*ppppbStack_c8)(&ppppbStack_c8,pppppbVar16);
        ppppbVar18 = ppppbStack_c8;
      }
      ppppbStack_c8 = (byte ****)0x0;
      *pppppbVar16 = ppppbVar18;
    }
    if ((uStack_168 & 0xffffffff) != 0xffffffff) {
      (**(code **)(&UNK_0f1e7f38 + (uStack_168 & 0xffffffff) * 8))
                (&pppppppbStack_108,&ppppppbStack_170);
    }
    if ((ulong)uStack_130 != 0xffffffff) {
      (**(code **)(&UNK_0f1e7f38 + (ulong)uStack_130 * 8))(&ppppppplStack_178,auStack_138);
    }
    if (pppppppbVar10 != (byte *******)0x0) {
      LOCK();
      pppppppbVar22 = pppppppbVar10 + 1;
      ppppppbVar19 = *pppppppbVar22;
      *pppppppbVar22 = (byte ******)((long)*pppppppbVar22 + -1);
      UNLOCK();
      if (ppppppbVar19 == (byte ******)0x0) {
        (*(code *)(*pppppppbVar10)[2])(pppppppbVar10);
        FUN_0412c2d0(pppppppbVar10);
      }
    }
    uVar25 = *puVar24;
    plVar1 = (long *)puVar24[1];
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar1[1] = plVar1[1] + 1;
      UNLOCK();
      LOCK();
      plVar1[1] = plVar1[1] + 1;
      UNLOCK();
    }
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    bStack_198 = 0x16;
    uStack_197 = 0x655f646e756f73;
    uStack_190 = 0x746e6576;
    uStack_1a0 = 0xbd98125e61ce4e93;
    ppppppplStack_78 = (long *******)0x0;
    uStack_70 = 0;
    pppppppbStack_100 = (byte *******)0x0;
    pppppppbStack_108 = (byte *******)&UNK_0f1e8128;
    pppppbVar16 = (byte *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
    if (pppppbVar16 == (byte *****)0x0) {
      func_0x0eec74c0(0x200,0);
    }
    ppppppplStack_178 = (long *******)pppppppbStack_108;
    pppppbVar16[1] = (byte ****)0x0;
    pppppbVar16[2] = (byte ****)0x0;
    *pppppbVar16 = (byte ****)&UNK_0f1e7f58;
    pppppppbStack_108 = (byte *******)0x0;
    ppppppbStack_170 = (byte ******)pppppppbStack_100;
    pppppbVar16[4] = (byte ****)&UNK_0f2ccd78;
    pppppbVar16[5] = (byte ****)0x0;
    pppppbVar16[6] = (byte ****)0x0;
    pppppbVar16[7] = (byte ****)0x0;
    pppppbVar16[8] = (byte ****)0x0;
    pppppbVar16[9] = (byte ****)0x0;
    pppppbVar16[10] = (byte ****)0x0;
    pppppbVar16[0xb] = (byte ****)0x0;
    pppppbVar16[0xc] = (byte ****)0x0;
    *(undefined1 *)(pppppbVar16 + 0xd) = 0;
    func_0x04aa75f0(pppppbVar16 + 0xe,&pppppbStack_88,&UNK_01254d89);
    *(undefined1 *)(pppppbVar16 + 0x10) = 0;
    pppppbVar8 = pppppbVar16 + 0x11;
    pppppbVar16[0x11] = (byte ****)0x0;
    pppppbVar16[0x12] = (byte ****)0x0;
    pppppbVar16[0x13] = (byte ****)0x0;
    pppppbVar16[0x14] = (byte ****)0x0;
    pppppbVar16[0x15] = (byte ****)0x0;
    pppppbVar16[0x16] = (byte ****)0x0;
    pppppbVar16[0x17] = (byte ****)0xffffffff;
    pppppbVar16[0x26] = (byte ****)0x0;
    pppppbVar16[0x27] = (byte ****)0x0;
    pppppbVar16[0x18] = (byte ****)0x0;
    pppppbVar16[0x19] = (byte ****)0x0;
    pppppbVar16[0x1a] = (byte ****)0x0;
    pppppbVar16[0x1b] = (byte ****)0x0;
    pppppbVar16[0x1c] = (byte ****)0x0;
    pppppbVar16[0x1d] = (byte ****)0x0;
    pppppbVar16[0x1e] = (byte ****)0x0;
    pppppbVar16[0x1f] = (byte ****)0x0;
    pppppbVar16[4] = (byte ****)&UNK_0f1e7fa8;
    pppppbVar16[0x2e] = (byte ****)0x0;
    pppppbVar16[0x2f] = (byte ****)0x0;
    pppppbVar16[0x30] = (byte ****)0x0;
    pppppbVar16[0x31] = (byte ****)0x0;
    pppppbVar16[0x32] = (byte ****)0x0;
    pppppbVar16[0x33] = (byte ****)0x0;
    pppppbVar16[0x34] = (byte ****)0x0;
    *(undefined4 *)(pppppbVar16 + 0x35) = 0x3f800000;
    pppppbVar16[0x36] = (byte ****)0x0;
    pppppbVar16[0x37] = (byte ****)0x0;
    if (ppppppplStack_178 == (long *******)0x0) {
      ppppppplVar17 = (long *******)0x0;
    }
    else {
      (*(code *)*ppppppplStack_178)(&ppppppplStack_178,pppppbVar16 + 0x36);
      ppppppplVar17 = ppppppplStack_178;
    }
    ppppppplStack_178 = (long *******)0x0;
    pppppbVar16[0x36] = (byte ****)ppppppplVar17;
    *(undefined1 *)(pppppbVar16 + 0x3e) = 0;
    pppppbVar7 = pppppbVar16 + 0x12;
    if (pppppbVar8 != (byte *****)&DAT_0f552138) {
      if (((ulong)*pppppbVar7 & 1) == 0) {
        if ((_DAT_0f552140 & 1) == 0) {
          pppppbVar16[0x14] = _DAT_0f552150;
          uVar14 = uRam000000000f55214c;
          uVar13 = _DAT_0f552148;
          uVar12 = uRam000000000f552144;
          *(uint *)pppppbVar7 = _DAT_0f552140;
          *(undefined4 *)((long)pppppbVar16 + 0x94) = uVar12;
          *(undefined4 *)(pppppbVar16 + 0x13) = uVar13;
          *(undefined4 *)((long)pppppbVar16 + 0x9c) = uVar14;
        }
        else {
          func_0x04885070(pppppbVar7,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
        }
      }
      else {
        bVar28 = (_DAT_0f552140 & 1) != 0;
        ppppbVar18 = (byte ****)0xf552141;
        if (bVar28) {
          ppppbVar18 = _DAT_0f552150;
        }
        uVar26 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
        if (bVar28) {
          uVar26 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
        }
        func_0x04885120(pppppbVar7,ppppbVar18,uVar26);
      }
    }
    pppppbVar16[0x11] = _DAT_0f552138;
    pppppbVar16[0x15] = (byte ****)0x0;
    if (ppppppplStack_178 != (long *******)0x0) {
      (*(code *)ppppppplStack_178[1])(&ppppppplStack_178);
    }
    pppppbVar5 = pppppbVar16 + 1;
    if (pppppppbStack_108 != (byte *******)0x0) {
      (*(code *)pppppppbStack_108[1])(&pppppppbStack_108);
    }
    LOCK();
    *pppppbVar5 = (byte ****)((long)*pppppbVar5 + 1);
    UNLOCK();
    ppppppbVar19 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (ppppppbVar19 == (byte ******)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    ppppppbVar19[1] = (byte *****)0x0;
    ppppppbVar19[2] = (byte *****)0x0;
    *ppppppbVar19 = (byte *****)&UNK_0f1e8088;
    ppppppbVar19[6] = (byte *****)0x0;
    ppppppbVar19[7] = (byte *****)0x0;
    ppppppbVar19[4] = (byte *****)&UNK_0f1e80d8;
    ppppppbVar19[0xe] = pppppbVar16 + 4;
    ppppppbVar19[0xf] = pppppbVar16;
    LOCK();
    pppppbVar16[1] = (byte ****)((long)pppppbVar16[1] + 1);
    UNLOCK();
    ppppppplStack_178 = (long *******)(ppppppbVar19 + 4);
    ppppppbStack_170 = ppppppbVar19;
    puVar20 = (undefined4 *)func_0x09e6c9d0(uVar25,&uStack_1a0);
    pppppbVar23 = *(byte ******)(puVar20 + 0x24);
    if (pppppbVar23 < *(byte ******)(puVar20 + 0x26)) {
      pppppbVar23[2] = (byte ****)0x0;
      pppppbVar23[3] = (byte ****)0x0;
      *pppppbVar23 = (byte ****)0x0;
      pppppbVar23[1] = (byte ****)0x0;
      pppppbVar23[4] = (byte ****)0x0;
      if (pppppbVar23 != pppppbVar8) {
        if (((ulong)*pppppbVar7 & 1) == 0) {
          pppppbVar23[3] = pppppbVar16[0x14];
          ppppbVar18 = pppppbVar16[0x13];
          pppppbVar23[1] = *pppppbVar7;
          pppppbVar23[2] = ppppbVar18;
        }
        else {
          func_0x04885070(pppppbVar23 + 1,pppppbVar16[0x14],pppppbVar16[0x13]);
        }
      }
      *pppppbVar23 = *pppppbVar8;
      pppppbVar23[5] = (byte ****)(ppppppbVar19 + 4);
      pppppbVar23[6] = (byte ****)ppppppbVar19;
      LOCK();
      ppppppbVar19[1] = (byte *****)((long)ppppppbVar19[1] + 1);
      UNLOCK();
      pppppbVar23 = pppppbVar23 + 7;
      *(byte ******)(puVar20 + 0x24) = pppppbVar23;
    }
    else {
      pppppbVar23 = (byte *****)func_0x09e6ec10(puVar20 + 0x22,pppppbVar8,&ppppppplStack_178);
    }
    *(byte ******)(puVar20 + 0x24) = pppppbVar23;
    uVar12 = *puVar20;
    uVar13 = puVar20[1];
    uVar14 = puVar20[2];
    uVar15 = puVar20[3];
    if (*(long *)(puVar20 + 2) != 0) {
      LOCK();
      plVar4 = (long *)(*(long *)(puVar20 + 2) + 8);
      *plVar4 = *plVar4 + 1;
      UNLOCK();
    }
    ppppbVar18 = pppppbVar16[0xf];
    *(undefined4 *)(pppppbVar16 + 0xe) = uVar12;
    *(undefined4 *)((long)pppppbVar16 + 0x74) = uVar13;
    *(undefined4 *)(pppppbVar16 + 0xf) = uVar14;
    *(undefined4 *)((long)pppppbVar16 + 0x7c) = uVar15;
    if (ppppbVar18 != (byte ****)0x0) {
      LOCK();
      ppppbVar2 = ppppbVar18 + 1;
      pppbVar6 = *ppppbVar2;
      *ppppbVar2 = (byte ***)((long)*ppppbVar2 + -1);
      UNLOCK();
      if (pppbVar6 == (byte ***)0x0) {
        (*(code *)(*ppppbVar18)[2])(ppppbVar18);
        FUN_0412c2d0(ppppbVar18);
      }
    }
    ppppppbVar19 = ppppppbStack_170;
    *(undefined1 *)(pppppbVar16 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
    if (ppppppbStack_170 != (byte ******)0x0) {
      LOCK();
      ppppppbVar3 = ppppppbStack_170 + 1;
      pppppbVar8 = *ppppppbVar3;
      *ppppppbVar3 = (byte *****)((long)*ppppppbVar3 + -1);
      UNLOCK();
      if (pppppbVar8 == (byte *****)0x0) {
        (*(code *)(*ppppppbStack_170)[2])(ppppppbStack_170);
        FUN_0412c2d0(ppppppbVar19);
      }
    }
    LOCK();
    ppppbVar18 = *pppppbVar5;
    *pppppbVar5 = (byte ****)((long)*pppppbVar5 + -1);
    UNLOCK();
    if (ppppbVar18 == (byte ****)0x0) {
      (*(code *)(*pppppbVar16)[2])(pppppbVar16);
      FUN_0412c2d0(pppppbVar16);
      LOCK();
      ppppbVar18 = *pppppbVar5;
      *pppppbVar5 = (byte ****)((long)*pppppbVar5 + -1);
      UNLOCK();
    }
    else {
      LOCK();
      ppppbVar18 = *pppppbVar5;
      *pppppbVar5 = (byte ****)((long)*pppppbVar5 + -1);
      UNLOCK();
    }
    if (ppppbVar18 == (byte ****)0x0) {
      (*(code *)(*pppppbVar16)[2])(pppppbVar16);
      FUN_0412c2d0(pppppbVar16);
    }
    if (ppppppplStack_78 != (long *******)0x0) {
      (*(code *)ppppppplStack_78[1])(&ppppppplStack_78);
    }
    if ((bStack_198 & 1) != 0) {
      func_0x0412a280(uStack_188,CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
    }
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar4 = plVar1 + 1;
      lVar9 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0412c2d0(plVar1);
      }
    }
    pppppppbStack_c0 = (byte *******)0x0;
    ppppbStack_c8 = (byte ****)&UNK_0f1e8140;
    puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    pppppbVar16 = pppppbVar16 + 0x26;
    *puVar24 = 0;
    puVar24[1] = 0x6562747261656812;
    puVar24[2] = 0x7461;
    pppppppbStack_c0 = (byte *******)puVar24;
    if (pppppbVar16 == &ppppbStack_c8) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar24);
    }
    else {
      ppppbVar18 = (byte ****)&UNK_0f1e8140;
      if ((*pppppbVar16 == (byte ****)0x0) ||
         ((*(code *)(*pppppbVar16)[1])(pppppbVar16), ppppbVar18 = ppppbStack_c8,
         ppppbStack_c8 != (byte ****)0x0)) {
        (*(code *)*ppppbVar18)(&ppppbStack_c8,pppppbVar16);
        *pppppbVar16 = ppppbStack_c8;
      }
      else {
        *pppppbVar16 = (byte ****)0x0;
      }
    }
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar4 = plVar1 + 1;
      lVar9 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0412c2d0(plVar1);
      }
    }
    return;
  }
  func_0x04931450();
  pppppppbVar27 = pppppppbVar10;
LAB_09e33ab7:
  uVar25 = func_0x04931450();
  if (((ulong)*pppppppbVar27 & 1) != 0) {
    func_0x0412a280(pppppppbVar22[3],(ulong)pppppppbVar22[1] & 0xfffffffffffffffe);
  }
  ppppppplVar17[0x12] = (long ******)pppppppbVar22;
  LOCK();
  lVar9 = uStack_168 - 1;
  UNLOCK();
  bVar28 = uStack_168 == 0;
  uStack_168 = lVar9;
  if (bVar28) {
    (*(code *)ppppppbStack_170[2])(&ppppppbStack_170);
    FUN_0412c2d0(&ppppppbStack_170);
  }
  LOCK();
  ppppbVar18 = *pppppbVar8;
  *pppppbVar8 = (byte ****)((long)*pppppbVar8 + -1);
  UNLOCK();
  if (ppppbVar18 == (byte ****)0x0) {
    (*(code *)(*pppppbVar16)[2])(pppppbVar16);
    FUN_0412c2d0(pppppbVar16);
  }
  LOCK();
  ppppbVar18 = *pppppbVar8;
  *pppppbVar8 = (byte ****)((long)*pppppbVar8 + -1);
  UNLOCK();
  if (ppppbVar18 == (byte ****)0x0) {
    (*(code *)(*pppppbVar16)[2])(pppppbVar16);
    FUN_0412c2d0(pppppbVar16);
  }
  if (ppppppplStack_78 != (long *******)0x0) {
    (*(code *)ppppppplStack_78[1])(&ppppppplStack_78);
  }
  if ((bStack_198 & 1) != 0) {
    func_0x0412a280(uStack_188,CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
  }
  func_0x09e33f40(pppppbVar23);
  func_0x09e33f40(pppppbVar23);
  func_0x0eee2d70(uVar25);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


