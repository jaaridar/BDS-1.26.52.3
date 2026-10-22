/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9e55b60 (ELF vaddr 0x9d55b60)
 * Label: caller-of-callee
 * Body:  [[09e55b60, 09e5641c] [09e56574, 09e5662d]]
 * Ghidra: FUN_09e55b60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09e55b60(undefined8 param_1,byte *******param_2,byte *******param_3,byte *param_4,
                 byte *******param_5)

{
  byte *****pppppbVar1;
  long *plVar2;
  byte ****ppppbVar3;
  byte *******pppppppbVar4;
  byte *****pppppbVar5;
  byte ***pppbVar6;
  byte *****pppppbVar7;
  code *pcVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  byte *****pppppbVar15;
  byte ****ppppbVar16;
  byte ******ppppppbVar17;
  undefined4 *puVar18;
  byte *****pppppbVar19;
  byte *******pppppppbVar20;
  undefined8 uVar21;
  ulong uVar22;
  byte *******pppppppbVar23;
  ulong uVar24;
  bool bVar25;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte *****pppppbStack_168;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_150;
  undefined8 uStack_148;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  byte *****pppppbStack_108;
  undefined1 uStack_100;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte ****ppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  
  if (param_2 != (byte *******)0x0) {
    LOCK();
    param_2[1] = (byte ******)((long)param_2[1] + 1);
    UNLOCK();
  }
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  pppppppbStack_160 = param_2;
  func_0x04130630(&uStack_190,param_4);
  if (*param_4 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = 0xcbf29ce484222325;
    uVar14 = func_0x0eee2e90(param_4);
    if (uVar14 != 0) {
      uVar22 = (ulong)((uint)uVar14 & 7);
      if (7 < uVar14) {
        uVar14 = uVar14 & 0xfffffffffffffff8;
        do {
          uVar24 = (((((((uVar24 * 0x100000001b3 ^ (ulong)*param_4) * 0x100000001b3 ^
                        (ulong)param_4[1]) * 0x100000001b3 ^ (ulong)param_4[2]) * 0x100000001b3 ^
                      (ulong)param_4[3]) * 0x100000001b3 ^ (ulong)param_4[4]) * 0x100000001b3 ^
                    (ulong)param_4[5]) * 0x100000001b3 ^ (ulong)param_4[6]) * 0x100000001b3 ^
                   (ulong)param_4[7];
          param_4 = param_4 + 8;
          uVar14 = uVar14 - 8;
        } while (uVar14 != 0);
      }
      if (uVar22 != 0) {
        uVar14 = 0;
        do {
          uVar24 = uVar24 * 0x100000001b3 ^ (ulong)param_4[uVar14];
          uVar14 = uVar14 + 1;
        } while (uVar22 != uVar14);
      }
    }
  }
  pppppppbStack_78 = (byte *******)0x0;
  pppppppbStack_f8 = (byte *******)&UNK_0f1f10a0;
  uStack_198 = uVar24;
  pppppppbStack_f0 = param_3;
  pppppppbStack_70 = param_3;
  pppppbVar15 = (byte *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (pppppbVar15 == (byte *****)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  pppppppbStack_158 = pppppppbStack_f8;
  pppppbVar15[1] = (byte ****)0x0;
  pppppbVar15[2] = (byte ****)0x0;
  *pppppbVar15 = (byte ****)&UNK_0f1f0ed0;
  pppppppbStack_f8 = (byte *******)0x0;
  pppppppbStack_150 = pppppppbStack_f0;
  pppppbVar15[4] = (byte ****)&UNK_0f2ccd78;
  pppppbVar15[5] = (byte ****)0x0;
  pppppbVar15[6] = (byte ****)0x0;
  pppppbVar15[7] = (byte ****)0x0;
  pppppbVar15[8] = (byte ****)0x0;
  pppppbVar15[9] = (byte ****)0x0;
  pppppbVar15[10] = (byte ****)0x0;
  pppppbVar15[0xb] = (byte ****)0x0;
  pppppbVar15[0xc] = (byte ****)0x0;
  *(undefined1 *)(pppppbVar15 + 0xd) = 0;
  FUN_04aa75f0(pppppbVar15 + 0xe,&pppppbStack_108,&UNK_01254d89);
  *(undefined1 *)(pppppbVar15 + 0x10) = 0;
  pppppbVar15[0x11] = (byte ****)0x0;
  pppppbVar15[0x12] = (byte ****)0x0;
  pppppbVar15[0x13] = (byte ****)0x0;
  pppppbVar15[0x14] = (byte ****)0x0;
  pppppbVar15[0x15] = (byte ****)0x0;
  pppppbVar15[0x16] = (byte ****)0x0;
  pppppbVar15[0x17] = (byte ****)0xffffffff;
  pppppbVar15[0x26] = (byte ****)0x0;
  pppppbVar15[0x27] = (byte ****)0x0;
  pppppbVar15[0x18] = (byte ****)0x0;
  pppppbVar15[0x19] = (byte ****)0x0;
  pppppbVar15[0x1a] = (byte ****)0x0;
  pppppbVar15[0x1b] = (byte ****)0x0;
  pppppbVar15[0x1c] = (byte ****)0x0;
  pppppbVar15[0x1d] = (byte ****)0x0;
  pppppbVar15[0x1e] = (byte ****)0x0;
  pppppbVar15[0x1f] = (byte ****)0x0;
  pppppbVar15[4] = (byte ****)&UNK_0f1f0f20;
  pppppbVar15[0x2e] = (byte ****)0x0;
  pppppbVar15[0x2f] = (byte ****)0x0;
  pppppppbStack_110 = param_3;
  if (pppppppbStack_158 == (byte *******)0x0) {
    pppppppbVar20 = (byte *******)0x0;
  }
  else {
    (*(code *)*pppppppbStack_158)(&pppppppbStack_158,pppppbVar15 + 0x2e);
    pppppppbVar20 = pppppppbStack_158;
  }
  pppppbStack_168 = pppppbVar15 + 4;
  pppppppbStack_158 = (byte *******)0x0;
  pppppbVar15[0x2e] = (byte ****)pppppppbVar20;
  pppppbStack_108 = pppppbVar15 + 0x36;
  pppppbVar15[0x36] = (byte ****)0x0;
  pppppbVar15[0x37] = (byte ****)0x0;
  pppppbVar15[0x38] = (byte ****)0x0;
  uStack_100 = 0;
  ppppbVar16 = (byte ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (ppppbVar16 == (byte ****)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  pppppbVar7 = pppppbVar15 + 0x11;
  pppppbVar15[0x36] = ppppbVar16;
  pppppbVar15[0x38] = ppppbVar16 + 5;
  ppppbVar16[4] = (byte ***)0x0;
  ppppbVar16[1] = (byte ***)0x746c75616665640e;
  ppppbVar16[2] = (byte ***)0x0;
  ppppbVar16[3] = (byte ***)0x0;
  *ppppbVar16 = (byte ***)0xdead4915c9c6c0d8;
  pppppbVar15[0x37] = ppppbVar16 + 5;
  pppppbVar5 = pppppbVar15 + 0x12;
  if (pppppbVar7 != (byte *****)&DAT_0f5520d8) {
    if (((ulong)*pppppbVar5 & 1) == 0) {
      if ((_DAT_0f5520e0 & 1) == 0) {
        pppppbVar15[0x14] = _DAT_0f5520f0;
        uVar12 = uRam000000000f5520ec;
        uVar11 = _DAT_0f5520e8;
        uVar10 = uRam000000000f5520e4;
        *(uint *)pppppbVar5 = _DAT_0f5520e0;
        *(undefined4 *)((long)pppppbVar15 + 0x94) = uVar10;
        *(undefined4 *)(pppppbVar15 + 0x13) = uVar11;
        *(undefined4 *)((long)pppppbVar15 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(pppppbVar5,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
      }
    }
    else {
      bVar25 = (_DAT_0f5520e0 & 1) != 0;
      ppppbVar16 = (byte ****)0xf5520e1;
      if (bVar25) {
        ppppbVar16 = _DAT_0f5520f0;
      }
      uVar24 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
      if (bVar25) {
        uVar24 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
      }
      func_0x04885120(pppppbVar5,ppppbVar16,uVar24);
    }
  }
  pppppbVar15[0x11] = _DAT_0f5520d8;
  pppppbVar15[0x15] = (byte ****)0x0;
  if (pppppppbStack_158 != (byte *******)0x0) {
    (*(code *)pppppppbStack_158[1])(&pppppppbStack_158);
  }
  pppppbVar1 = pppppbVar15 + 1;
  if (pppppppbStack_f8 != (byte *******)0x0) {
    (*(code *)pppppppbStack_f8[1])(&pppppppbStack_f8);
  }
  LOCK();
  *pppppbVar1 = (byte ****)((long)*pppppbVar1 + 1);
  UNLOCK();
  pppppppbStack_118 = param_5;
  ppppppbVar17 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppppbVar17 == (byte ******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppppppbVar17[1] = (byte *****)0x0;
  ppppppbVar17[2] = (byte *****)0x0;
  *ppppppbVar17 = (byte *****)&UNK_0f1f1000;
  ppppppbVar17[6] = (byte *****)0x0;
  ppppppbVar17[7] = (byte *****)0x0;
  ppppppbVar17[4] = (byte *****)&UNK_0f1f1050;
  ppppppbVar17[0xe] = pppppbStack_168;
  ppppppbVar17[0xf] = pppppbVar15;
  LOCK();
  pppppbVar15[1] = (byte ****)((long)pppppbVar15[1] + 1);
  UNLOCK();
  pppppppbStack_158 = (byte *******)(ppppppbVar17 + 4);
  pppppppbStack_150 = (byte *******)ppppppbVar17;
  puVar18 = (undefined4 *)func_0x09f00280(param_1,&uStack_198);
  pppppbVar19 = *(byte ******)(puVar18 + 0x24);
  if (pppppbVar19 < *(byte ******)(puVar18 + 0x26)) {
    pppppbVar19[2] = (byte ****)0x0;
    pppppbVar19[3] = (byte ****)0x0;
    *pppppbVar19 = (byte ****)0x0;
    pppppbVar19[1] = (byte ****)0x0;
    pppppbVar19[4] = (byte ****)0x0;
    if (pppppbVar19 != pppppbVar7) {
      if (((ulong)*pppppbVar5 & 1) == 0) {
        pppppbVar19[3] = pppppbVar15[0x14];
        ppppbVar16 = pppppbVar15[0x13];
        pppppbVar19[1] = *pppppbVar5;
        pppppbVar19[2] = ppppbVar16;
      }
      else {
        func_0x04885070(pppppbVar19 + 1,pppppbVar15[0x14],pppppbVar15[0x13]);
      }
    }
    *pppppbVar19 = *pppppbVar7;
    pppppbVar19[5] = (byte ****)(ppppppbVar17 + 4);
    pppppbVar19[6] = (byte ****)ppppppbVar17;
    LOCK();
    ppppppbVar17[1] = (byte *****)((long)ppppppbVar17[1] + 1);
    UNLOCK();
    pppppbVar19 = pppppbVar19 + 7;
    *(byte ******)(puVar18 + 0x24) = pppppbVar19;
  }
  else {
    pppppbVar19 = (byte *****)func_0x09f028a0(puVar18 + 0x22,pppppbVar7,&pppppppbStack_158);
  }
  pppppppbVar23 = pppppppbStack_118;
  pppppppbVar20 = pppppppbStack_160;
  *(byte ******)(puVar18 + 0x24) = pppppbVar19;
  uVar10 = *puVar18;
  uVar11 = puVar18[1];
  uVar12 = puVar18[2];
  uVar13 = puVar18[3];
  if (*(long *)(puVar18 + 2) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(puVar18 + 2) + 8);
    *plVar2 = *plVar2 + 1;
    UNLOCK();
  }
  ppppbVar16 = pppppbVar15[0xf];
  *(undefined4 *)(pppppbVar15 + 0xe) = uVar10;
  *(undefined4 *)((long)pppppbVar15 + 0x74) = uVar11;
  *(undefined4 *)(pppppbVar15 + 0xf) = uVar12;
  *(undefined4 *)((long)pppppbVar15 + 0x7c) = uVar13;
  if (ppppbVar16 != (byte ****)0x0) {
    LOCK();
    ppppbVar3 = ppppbVar16 + 1;
    pppbVar6 = *ppppbVar3;
    *ppppbVar3 = (byte ***)((long)*ppppbVar3 + -1);
    UNLOCK();
    if (pppbVar6 == (byte ***)0x0) {
      (*(code *)(*ppppbVar16)[2])(ppppbVar16);
      func_0x0412c2d0(ppppbVar16);
    }
  }
  pppppppbVar4 = pppppppbStack_150;
  *(undefined1 *)(pppppbVar15 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
  if (pppppppbStack_150 != (byte *******)0x0) {
    LOCK();
    ppppppbVar17 = (byte ******)(pppppppbStack_150 + 1);
    pppppbVar7 = *ppppppbVar17;
    *ppppppbVar17 = (byte *****)((long)*ppppppbVar17 + -1);
    UNLOCK();
    if (pppppbVar7 == (byte *****)0x0) {
      (*(code *)(*pppppppbStack_150)[2])(pppppppbStack_150);
      func_0x0412c2d0(pppppppbVar4);
    }
  }
  LOCK();
  ppppbVar16 = *pppppbVar1;
  *pppppbVar1 = (byte ****)((long)*pppppbVar1 + -1);
  UNLOCK();
  if (ppppbVar16 == (byte ****)0x0) {
    (*(code *)(*pppppbVar15)[2])(pppppbVar15);
    func_0x0412c2d0(pppppbVar15);
    LOCK();
    ppppbVar16 = *pppppbVar1;
    *pppppbVar1 = (byte ****)((long)*pppppbVar1 + -1);
    UNLOCK();
  }
  else {
    LOCK();
    ppppbVar16 = *pppppbVar1;
    *pppppbVar1 = (byte ****)((long)*pppppbVar1 + -1);
    UNLOCK();
  }
  if (ppppbVar16 == (byte ****)0x0) {
    (*(code *)(*pppppbVar15)[2])(pppppbVar15);
    func_0x0412c2d0(pppppbVar15);
  }
  if (pppppppbStack_78 != (byte *******)0x0) {
    (*(code *)pppppppbStack_78[1])(&pppppppbStack_78);
  }
  if ((uStack_190 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_180,uStack_190 & 0xfffffffffffffffe);
  }
  if (pppppppbVar20 != (byte *******)0x0) {
    LOCK();
    pppppppbVar4 = pppppppbVar20 + 1;
    ppppppbVar17 = *pppppppbVar4;
    *pppppppbVar4 = (byte ******)((long)*pppppppbVar4 + -1);
    UNLOCK();
    if (ppppppbVar17 == (byte ******)0x0) {
      (*(code *)(*pppppppbVar20)[2])(pppppppbVar20);
      func_0x0412c2d0(pppppppbVar20);
    }
  }
  pppppppbStack_158 = pppppppbStack_110;
  pppppppbStack_150 = (byte *******)0x0;
  uStack_148 = (ulong)uStack_148._4_4_ << 0x20;
  if (&pppppppbStack_150 != (byte ********)pppppppbVar23) {
    pppppppbStack_f8 = (byte *******)&pppppppbStack_150;
    pppppppbStack_f0 = (byte *******)&pppppppbStack_150;
    if ((ulong)*(uint *)(pppppppbVar23 + 1) == 0xffffffff) {
      func_0x04931450();
      goto LAB_09e563f0;
    }
    pppppppbStack_78 = (byte *******)&pppppppbStack_f8;
    (**(code **)(&UNK_0f2bc850 + (ulong)*(uint *)(pppppppbVar23 + 1) * 8))
              (&pppppppbStack_78,pppppppbVar23);
  }
  pppppppbStack_b0 = (byte *******)0x0;
  ppppbStack_b8 = (byte ****)&UNK_0f1f10b8;
  pppppppbVar20 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (pppppppbVar20 == (byte *******)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *pppppppbVar20 = (byte ******)pppppppbStack_158;
  pppppppbVar20[1] = (byte ******)0x0;
  *(undefined4 *)(pppppppbVar20 + 2) = 0;
  if ((byte ********)pppppppbVar20 != &pppppppbStack_158) {
    pppppppbVar23 = pppppppbVar20 + 1;
    pppppppbStack_f8 = pppppppbVar23;
    pppppppbStack_f0 = pppppppbVar23;
    if ((uStack_148 & 0xffffffff) == 0xffffffff) {
LAB_09e563f0:
      uVar21 = func_0x04931450();
      if (((ulong)*pppppppbVar20 & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppbVar23[3],(ulong)pppppppbVar23[1] & 0xfffffffffffffffe);
      }
      *(byte ********)(puVar18 + 0x24) = pppppppbVar23;
      LOCK();
      lVar9 = uStack_148 - 1;
      UNLOCK();
      bVar25 = uStack_148 == 0;
      uStack_148 = lVar9;
      if (bVar25) {
        (*(code *)pppppppbStack_150[2])(&pppppppbStack_150);
        func_0x0412c2d0(&pppppppbStack_150);
      }
      LOCK();
      ppppbVar16 = *pppppbVar1;
      *pppppbVar1 = (byte ****)((long)*pppppbVar1 + -1);
      UNLOCK();
      if (ppppbVar16 == (byte ****)0x0) {
        (*(code *)(*pppppbVar15)[2])(pppppbVar15);
        func_0x0412c2d0(pppppbVar15);
      }
      LOCK();
      ppppbVar16 = *pppppbVar1;
      *pppppbVar1 = (byte ****)((long)*pppppbVar1 + -1);
      UNLOCK();
      if (ppppbVar16 == (byte ****)0x0) {
        (*(code *)(*pppppbVar15)[2])(pppppbVar15);
        func_0x0412c2d0(pppppbVar15);
      }
      if (pppppppbStack_78 != (byte *******)0x0) {
        (*(code *)pppppppbStack_78[1])(&pppppppbStack_78);
      }
      if ((uStack_190 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_180,uStack_190 & 0xfffffffffffffffe);
      }
      func_0x09e55b30(pppppppbStack_160);
      func_0x0eee2d70(uVar21);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pppppppbStack_78 = (byte *******)&pppppppbStack_f8;
    (**(code **)(&UNK_0f2bc850 + (uStack_148 & 0xffffffff) * 8))
              (&pppppppbStack_78,&pppppppbStack_150);
  }
  pppppbVar15 = pppppbVar15 + 0x26;
  pppppppbStack_b0 = pppppppbVar20;
  if (pppppbVar15 == &ppppbStack_b8) {
    if (ppppbStack_b8 != (byte ****)0x0) {
      (*(code *)ppppbStack_b8[1])(&ppppbStack_b8);
    }
  }
  else {
    if (*pppppbVar15 != (byte ****)0x0) {
      (*(code *)(*pppppbVar15)[1])(pppppbVar15);
    }
    if (ppppbStack_b8 == (byte ****)0x0) {
      ppppbVar16 = (byte ****)0x0;
    }
    else {
      (*(code *)*ppppbStack_b8)(&ppppbStack_b8,pppppbVar15);
      ppppbVar16 = ppppbStack_b8;
    }
    ppppbStack_b8 = (byte ****)0x0;
    *pppppbVar15 = ppppbVar16;
  }
  if ((uStack_148 & 0xffffffff) != 0xffffffff) {
    (**(code **)(&UNK_0f1e7f38 + (uStack_148 & 0xffffffff) * 8))
              (&pppppppbStack_f8,&pppppppbStack_150);
  }
  return;
}


