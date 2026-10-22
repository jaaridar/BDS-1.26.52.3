/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0a64b0 (ELF vaddr 0xcfa64b0)
 * Label: caller-of-callee
 * Body:  [[0d0a64b0, 0d0a6ee7] [0d0a6ef0, 0d0a6f58] [0d0a6f60, 0d0a7675] [0d0a7680, 0d0a76bd] [0d0a76c0, 0d0a7ac2] [0d0a7d6c, 0d0a7d7b] [0d0a7e3c, 0d0a7ec6]]
 * Ghidra: FUN_0d0a64b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d0a64b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long **pplVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined3 uVar14;
  int iVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 **ppuVar27;
  undefined1 *puVar28;
  byte *pbVar29;
  byte *pbVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  long *plVar34;
  uint *puVar35;
  bool bVar36;
  long *plStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  long *plStack_250;
  byte *pbStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long lStack_220;
  undefined1 auStack_218 [4];
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 uStack_208;
  undefined7 uStack_207;
  byte *pbStack_200;
  long *plStack_1f8;
  byte *pbStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  byte *pbStack_1d8;
  long *plStack_1d0;
  byte bStack_1c8;
  undefined6 uStack_1c7;
  undefined1 uStack_1c1;
  undefined1 uStack_1c0;
  undefined6 uStack_1bf;
  undefined1 uStack_1b9;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined2 uStack_19f;
  undefined1 uStack_19d;
  undefined4 uStack_19c;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint *puStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_110;
  long *plStack_108;
  undefined1 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  plVar34 = (long *)0xcbf29ce484222325;
  uVar22 = *param_2;
  plStack_158 = (long *)0x0;
  uStack_150 = _DAT_01d8fb58;
  uStack_148 = _UNK_01d8fb60;
  uStack_140 = 0;
  uStack_138 = 0;
  pbVar33 = (byte *)((long)&uStack_150 + 1);
  uVar16 = func_0x0eee2e90(pbVar33);
  if (uVar16 != 0) {
    uVar23 = (ulong)((uint)uVar16 & 7);
    if (7 < uVar16) {
      uVar16 = uVar16 & 0xfffffffffffffff8;
      do {
        plVar34 = (long *)(((((((((long)plVar34 * 0x100000001b3 ^ (ulong)*pbVar33) * 0x100000001b3 ^
                                (ulong)pbVar33[1]) * 0x100000001b3 ^ (ulong)pbVar33[2]) *
                               0x100000001b3 ^ (ulong)pbVar33[3]) * 0x100000001b3 ^
                             (ulong)pbVar33[4]) * 0x100000001b3 ^ (ulong)pbVar33[5]) * 0x100000001b3
                           ^ (ulong)pbVar33[6]) * 0x100000001b3 ^ (ulong)pbVar33[7]);
        pbVar33 = pbVar33 + 8;
        uVar16 = uVar16 - 8;
      } while (uVar16 != 0);
    }
    if (uVar23 != 0) {
      uVar16 = 0;
      do {
        plVar34 = (long *)((long)plVar34 * 0x100000001b3 ^ (ulong)pbVar33[uVar16]);
        uVar16 = uVar16 + 1;
      } while (uVar23 != uVar16);
    }
  }
  plStack_f8 = (long *)&UNK_0f4528c0;
  plStack_158 = plVar34;
  uStack_f0 = param_3;
  plVar34 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar34 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar34[1] = 0;
  plVar34[2] = 0;
  *plVar34 = (long)&UNK_0f4526d8;
  plStack_268 = (long *)0x0;
  pbStack_260 = (byte *)0x0;
  if (plStack_f8 == (long *)0x0) {
    plStack_268 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_f8)(&plStack_f8,&plStack_268);
    plStack_268 = plStack_f8;
  }
  plStack_f8 = (long *)0x0;
  plVar34[4] = (long)&UNK_0f2ccd78;
  plVar34[5] = 0;
  plVar34[6] = 0;
  plVar34[7] = 0;
  plVar34[8] = 0;
  plVar34[9] = 0;
  plVar34[10] = 0;
  plVar34[0xb] = 0;
  plVar34[0xc] = 0;
  *(undefined1 *)(plVar34 + 0xd) = 0;
  func_0x04aa75f0(plVar34 + 0xe,&lStack_b8,&UNK_01254d89);
  *(undefined1 *)(plVar34 + 0x10) = 0;
  plVar18 = plVar34 + 0x11;
  plVar34[0x11] = 0;
  plVar34[0x12] = 0;
  plVar34[0x13] = 0;
  plVar34[0x14] = 0;
  plVar34[0x15] = 0;
  plVar34[0x16] = 0;
  plVar34[0x17] = 0xffffffff;
  plVar34[0x26] = 0;
  plVar34[0x27] = 0;
  plVar34[0x18] = 0;
  plVar34[0x19] = 0;
  plVar34[0x1a] = 0;
  plVar34[0x1b] = 0;
  plVar34[0x1c] = 0;
  plVar34[0x1d] = 0;
  plVar34[0x1e] = 0;
  plVar34[0x1f] = 0;
  plVar34[4] = (long)&UNK_0f452728;
  pplVar1 = (long **)(plVar34 + 0x2e);
  plVar34[0x2e] = 0;
  plVar34[0x2f] = 0;
  *(undefined1 *)(plVar34 + 0x36) = 0;
  if (pplVar1 != &plStack_268) {
    if (plStack_268 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_268)(&plStack_268,pplVar1);
      plVar20 = plStack_268;
    }
    plStack_268 = (long *)0x0;
    *pplVar1 = plVar20;
  }
  puVar35 = (uint *)(plVar34 + 0x12);
  if (plVar18 != (long *)&DAT_0f552108) {
    if ((*puVar35 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar34[0x14] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar35 = _DAT_0f552110;
        *(undefined4 *)((long)plVar34 + 0x94) = uVar7;
        *(undefined4 *)(plVar34 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar34 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar35,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar36 = (_DAT_0f552110 & 1) != 0;
      lVar31 = 0xf552111;
      if (bVar36) {
        lVar31 = _DAT_0f552120;
      }
      uVar16 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar36) {
        uVar16 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(puVar35,lVar31,uVar16);
    }
  }
  plVar20 = plVar34 + 1;
  plVar34[0x11] = _DAT_0f552108;
  plVar34[0x15] = 0;
  if (plStack_268 != (long *)0x0) {
    (*(code *)plStack_268[1])(&plStack_268);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  pbVar33 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar33 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar33 + 8) = 0;
  *(long *)((long)pbVar33 + 0x10) = 0;
  *(undefined **)pbVar33 = &UNK_0f452820;
  *(long *)((long)pbVar33 + 0x30) = 0;
  *(long *)((long)pbVar33 + 0x38) = 0;
  *(undefined **)((long)pbVar33 + 0x20) = &UNK_0f452870;
  *(long **)((long)pbVar33 + 0x70) = plVar34 + 4;
  *(long **)((long)pbVar33 + 0x78) = plVar34;
  LOCK();
  plVar34[1] = plVar34[1] + 1;
  UNLOCK();
  plStack_268 = (long *)((long)pbVar33 + 0x20);
  pbStack_260 = pbVar33;
  plStack_228 = plVar34 + 4;
  puVar17 = (undefined4 *)func_0x0d106550(uVar22,&plStack_158,0);
  plVar21 = *(long **)(puVar17 + 0x24);
  if (plVar21 < *(long **)(puVar17 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 == plVar18) {
LAB_0d0a68ae:
      *plVar21 = *plVar18;
      plVar21[5] = (long)pbVar33 + 0x20;
      plVar21[6] = (long)pbVar33;
LAB_0d0a692a:
      LOCK();
      *(long *)((long)pbVar33 + 8) = *(long *)((long)pbVar33 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puVar35 & 1) == 0) {
        plVar21[3] = plVar34[0x14];
        lVar31 = plVar34[0x13];
        plVar21[1] = *(long *)puVar35;
        plVar21[2] = lVar31;
        goto LAB_0d0a68ae;
      }
      func_0x04885070(plVar21 + 1,plVar34[0x14],plVar34[0x13]);
      *plVar21 = *plVar18;
      plVar21[5] = (long)plStack_268;
      plVar21[6] = (long)pbStack_260;
      pbVar33 = pbStack_260;
      if (pbStack_260 != (byte *)0x0) goto LAB_0d0a692a;
    }
    plVar21 = plVar21 + 7;
    *(long **)(puVar17 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x0d109c80(puVar17 + 0x22,plVar18,&plStack_268);
  }
  plVar18 = plStack_228;
  *(long **)(puVar17 + 0x24) = plVar21;
  uVar7 = *puVar17;
  uVar8 = puVar17[1];
  uVar9 = puVar17[2];
  uVar10 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar21 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar21 = *plVar21 + 1;
    UNLOCK();
  }
  plVar21 = (long *)plVar34[0xf];
  *(undefined4 *)(plVar34 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar34 + 0x74) = uVar8;
  *(undefined4 *)(plVar34 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar34 + 0x7c) = uVar10;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar3 = plVar21 + 1;
    lVar31 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  pbVar33 = pbStack_260;
  *(undefined1 *)(plVar34 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  if (pbStack_260 != (byte *)0x0) {
    LOCK();
    plVar21 = (long *)((long)pbStack_260 + 8);
    lVar31 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*(long *)pbStack_260 + 0x10))(pbStack_260);
      func_0x0412c2d0(pbVar33);
    }
  }
  LOCK();
  lVar31 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar31 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
    func_0x0412c2d0(plVar34);
    LOCK();
    lVar31 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar31 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar31 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
    func_0x0412c2d0(plVar34);
  }
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  plVar34 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,&uStack_178);
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if (plStack_f8 != (long *)0x0) {
    (*(code *)plStack_f8[1])(&plStack_f8);
  }
  if ((uStack_150 & 1) != 0) {
    func_0x0412a280(uStack_140,uStack_150 & 0xfffffffffffffffe);
  }
  uStack_207 = 0;
  pbStack_200 = (byte *)0x0;
  auStack_218._1_3_ = (undefined3)_DAT_0147c4a4;
  auStack_218[0] = 0x20;
  uStack_214._1_3_ = (undefined3)_UNK_0147c4a8;
  uStack_214 = CONCAT31(uStack_214._1_3_,(char)((uint)_DAT_0147c4a4 >> 0x18));
  uStack_210._1_3_ = (undefined3)_UNK_0147c4ac;
  uStack_210 = CONCAT31(uStack_210._1_3_,(char)((uint)_UNK_0147c4a8 >> 0x18));
  uStack_20c._1_3_ = (undefined3)_UNK_0147c4b0;
  uStack_20c = CONCAT31(uStack_20c._1_3_,(char)((uint)_UNK_0147c4ac >> 0x18));
  uStack_208 = (undefined1)((uint)_UNK_0147c4b0 >> 0x18);
  lStack_220 = 0x442724424c86d8ea;
  uStack_b0 = 0;
  uStack_150 = 0;
  lStack_b8 = 0;
  plStack_158 = (long *)&UNK_0f44e418;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1f0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x1f0,0);
  }
  plStack_268 = plStack_158;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f44e1c0;
  pbStack_260 = (byte *)(uStack_150 & 0xff);
  plStack_158 = (long *)0x0;
  plVar18[4] = (long)&UNK_0f2ccd78;
  plVar18[5] = 0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  *(undefined1 *)(plVar18 + 0xd) = 0;
  func_0x04aa75f0(plVar18 + 0xe,&plStack_108,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  plVar18[0x11] = 0;
  plVar18[0x12] = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[0x16] = 0;
  plVar18[0x17] = 0xffffffff;
  plVar18[0x26] = 0;
  plVar18[0x27] = 0;
  plVar18[0x18] = 0;
  plVar18[0x19] = 0;
  plVar18[0x1a] = 0;
  plVar18[0x1b] = 0;
  plVar18[0x1c] = 0;
  plVar18[0x1d] = 0;
  plVar18[0x1e] = 0;
  plVar18[0x1f] = 0;
  plVar18[4] = (long)&UNK_0f44e210;
  plVar18[0x2e] = 0;
  plVar18[0x2f] = 0;
  if (plStack_268 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_268)(&plStack_268,plVar18 + 0x2e);
    plVar20 = plStack_268;
  }
  plStack_1d0 = plVar18 + 4;
  plStack_268 = (long *)0x0;
  plVar18[0x2e] = (long)plVar20;
  plStack_108 = plVar18 + 0x36;
  plVar18[0x36] = 0;
  plVar18[0x37] = 0;
  plVar18[0x38] = 0;
  uStack_100 = 0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  pbStack_1d8 = (byte *)(plVar18 + 0x11);
  plVar18[0x36] = (long)puVar19;
  plVar18[0x38] = (long)(puVar19 + 5);
  puVar19[4] = 0;
  puVar19[1] = 0x746c75616665640e;
  puVar19[2] = 0;
  puVar19[3] = 0;
  *puVar19 = 0xdead4915c9c6c0d8;
  plVar18[0x37] = (long)(puVar19 + 5);
  plVar18[0x39] = -1;
  plVar18[0x3a] = 0x1fffffffffff;
  plVar18[0x3b] = 0;
  plVar18[0x3c] = 0;
  plVar18[0x3d] = 0;
  puVar35 = (uint *)(plVar18 + 0x12);
  if (pbStack_1d8 != &DAT_0f5520d8) {
    if ((*puVar35 & 1) == 0) {
      if ((_DAT_0f5520e0 & 1) == 0) {
        plVar18[0x14] = _DAT_0f5520f0;
        uVar9 = uRam000000000f5520ec;
        uVar8 = _DAT_0f5520e8;
        uVar7 = uRam000000000f5520e4;
        *puVar35 = _DAT_0f5520e0;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar7;
        *(undefined4 *)(plVar18 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar35,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
      }
    }
    else {
      bVar36 = (_DAT_0f5520e0 & 1) != 0;
      lVar31 = 0xf5520e1;
      if (bVar36) {
        lVar31 = _DAT_0f5520f0;
      }
      uVar16 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
      if (bVar36) {
        uVar16 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
      }
      FUN_04885120(puVar35,lVar31,uVar16);
    }
  }
  plVar18[0x11] = _DAT_0f5520d8;
  plVar18[0x15] = 0;
  if (plStack_268 != (long *)0x0) {
    (*(code *)plStack_268[1])(&plStack_268);
  }
  plVar20 = plVar18 + 1;
  if (plStack_158 != (long *)0x0) {
    (*(code *)plStack_158[1])(&plStack_158);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puStack_160 = puVar35;
  plStack_110 = plVar20;
  plStack_1f8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_1f8 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar32 = pbStack_200;
  lVar31 = lStack_220;
  plStack_1f8[1] = 0;
  plStack_1f8[2] = 0;
  *plStack_1f8 = (long)&UNK_0f44e320;
  plStack_1f8[6] = 0;
  plStack_1f8[7] = 0;
  plStack_1f8[4] = (long)&UNK_0f44e370;
  plStack_1f8[0xe] = (long)plStack_1d0;
  plStack_1f8[0xf] = (long)plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  plStack_1e0 = plStack_1f8 + 1;
  pbStack_1f0 = (byte *)plVar34[0x17];
  pbVar33 = (byte *)plVar34[0x18];
  plStack_1e8 = plStack_1f8;
  if (pbStack_1f0 != pbVar33) {
    if (((uint)auStack_218 & 1) == 0) {
      uVar16 = (ulong)(auStack_218[0] >> 1);
      plStack_228 = (long *)(auStack_218 + 1);
    }
    else {
      uVar16 = CONCAT44(uStack_20c,uStack_210);
      plStack_228 = (long *)CONCAT71(uStack_207,uStack_208);
    }
    pbVar30 = pbStack_1f0 + 0x19;
    do {
      if (*(long *)(pbVar30 + -9) == lVar31) {
        if ((*(long **)(pbVar30 + 0x17) == &lStack_220) && (pbVar30 + -9 == pbVar32)) {
LAB_0d0a73c9:
          pbVar30 = pbVar30 + -0x19;
          plVar20 = plStack_1e8;
          goto LAB_0d0a73da;
        }
        bVar4 = pbVar30[-1];
        if ((bVar4 & 1) == 0) {
          uVar23 = (ulong)(bVar4 >> 1);
        }
        else {
          uVar23 = *(ulong *)(pbVar30 + 7);
        }
        if (uVar23 == uVar16) {
          pbVar29 = pbVar30;
          if ((bVar4 & 1) != 0) {
            pbVar29 = *(byte **)(pbVar30 + 0xf);
          }
          iVar15 = bcmp(pbVar29,plStack_228,uVar16);
          if (iVar15 == 0) {
            *(long **)(pbVar30 + 0x17) = &lStack_220;
            pbStack_200 = pbVar30 + -9;
            goto LAB_0d0a73c9;
          }
        }
      }
      pbVar30[0x17] = 0;
      pbVar30[0x18] = 0;
      pbVar30[0x19] = 0;
      pbVar30[0x1a] = 0;
      pbVar30[0x1b] = 0;
      pbVar30[0x1c] = 0;
      pbVar30[0x1d] = 0;
      pbVar30[0x1e] = 0;
      pbVar29 = pbVar30 + 0x8f;
      pbVar30 = pbVar30 + 0xa8;
    } while (pbVar29 != pbVar33);
  }
  if (pbVar33 < (byte *)plVar34[0x19]) {
    func_0x0d0df770(pbVar33);
    pbVar33 = pbVar33 + 0xa8;
    plVar34[0x18] = (long)pbVar33;
LAB_0d0a722e:
    plVar34[0x18] = (long)pbVar33;
    func_0x0b63b6d0(*(undefined8 *)(pbVar33 + -0xa8),&lStack_220);
    lVar31 = plVar34[0x18];
    *(char *)(lVar31 + -7) = (char)plVar34[0xc];
    if ((long *)(lVar31 + -0x98) != &lStack_220) {
      puVar35 = (uint *)(lVar31 + -0x90);
      if ((*(byte *)puVar35 & 1) == 0) {
        if (((uint)auStack_218 & 1) == 0) {
          *(ulong *)(lVar31 + -0x80) = CONCAT71(uStack_207,uStack_208);
          *puVar35 = (uint)auStack_218;
          *(undefined4 *)(lVar31 + -0x8c) = uStack_214;
          *(undefined4 *)(lVar31 + -0x88) = uStack_210;
          *(undefined4 *)(lVar31 + -0x84) = uStack_20c;
        }
        else {
          func_0x04885070(puVar35,CONCAT71(uStack_207,uStack_208),CONCAT44(uStack_20c,uStack_210));
        }
      }
      else {
        bVar36 = ((uint)auStack_218 & 1) != 0;
        puVar28 = auStack_218 + 1;
        if (bVar36) {
          puVar28 = (undefined1 *)CONCAT71(uStack_207,uStack_208);
        }
        uVar16 = (ulong)(auStack_218[0] >> 1);
        if (bVar36) {
          uVar16 = CONCAT44(uStack_20c,uStack_210);
        }
        FUN_04885120(puVar35,puVar28,uVar16);
      }
    }
    *(long *)(lVar31 + -0x98) = lStack_220;
    *(undefined8 *)(lVar31 + -0x78) = 0;
    func_0x04aa9390(&plStack_268,auStack_218,(char)plVar34[0xc]);
    lVar31 = plVar34[0x18];
    func_0x04167a70(lVar31 + -0x70,&plStack_268);
    *(byte **)(lVar31 + -0x68) = pbStack_260;
    *(byte **)(lVar31 + -0x60) = pbStack_258;
    *(long **)(lVar31 + -0x58) = plStack_250;
    *(byte **)(lVar31 + -0x50) = pbStack_248;
    uVar7 = (undefined4)uStack_240;
    uVar8 = uStack_240._4_4_;
    uVar9 = (undefined4)uStack_238;
    uVar10 = uStack_238._4_4_;
    uStack_240 = 0;
    uStack_238 = (byte *)0x0;
    plVar20 = *(long **)(lVar31 + -0x40);
    *(undefined4 *)(lVar31 + -0x48) = uVar7;
    *(undefined4 *)(lVar31 + -0x44) = uVar8;
    *(undefined4 *)(lVar31 + -0x40) = uVar9;
    *(undefined4 *)(lVar31 + -0x3c) = uVar10;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar21 = plVar20 + 1;
      lVar24 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = plStack_1e8;
    pbVar33 = uStack_238;
    *(undefined8 *)(lVar31 + -0x38) = uStack_230;
    if (uStack_238 != (byte *)0x0) {
      LOCK();
      pbVar32 = uStack_238 + 8;
      lVar31 = *(long *)pbVar32;
      *(long *)pbVar32 = *(long *)pbVar32 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*(long *)uStack_238 + 0x10))(uStack_238);
        func_0x0412c2d0(pbVar33);
      }
    }
    func_0x04167a40(&plStack_268);
    lVar31 = plVar34[0x18];
    *(undefined1 *)(lVar31 + -8) = 0;
    pbVar30 = (byte *)(lVar31 + -0xa8);
LAB_0d0a73da:
    pbVar29 = pbStack_1d8;
    pbVar32 = *(byte **)(pbVar30 + 0x90);
    if (pbVar32 < *(byte **)(pbVar30 + 0x98)) {
      pbVar32[0x10] = 0;
      pbVar32[0x11] = 0;
      pbVar32[0x12] = 0;
      pbVar32[0x13] = 0;
      pbVar32[0x14] = 0;
      pbVar32[0x15] = 0;
      pbVar32[0x16] = 0;
      pbVar32[0x17] = 0;
      pbVar32[0x18] = 0;
      pbVar32[0x19] = 0;
      pbVar32[0x1a] = 0;
      pbVar32[0x1b] = 0;
      pbVar32[0x1c] = 0;
      pbVar32[0x1d] = 0;
      pbVar32[0x1e] = 0;
      pbVar32[0x1f] = 0;
      pbVar32[0] = 0;
      pbVar32[1] = 0;
      pbVar32[2] = 0;
      pbVar32[3] = 0;
      pbVar32[4] = 0;
      pbVar32[5] = 0;
      pbVar32[6] = 0;
      pbVar32[7] = 0;
      pbVar32[8] = 0;
      pbVar32[9] = 0;
      pbVar32[10] = 0;
      pbVar32[0xb] = 0;
      pbVar32[0xc] = 0;
      pbVar32[0xd] = 0;
      pbVar32[0xe] = 0;
      pbVar32[0xf] = 0;
      pbVar32[0x20] = 0;
      pbVar32[0x21] = 0;
      pbVar32[0x22] = 0;
      pbVar32[0x23] = 0;
      pbVar32[0x24] = 0;
      pbVar32[0x25] = 0;
      pbVar32[0x26] = 0;
      pbVar32[0x27] = 0;
      if (pbVar32 != pbStack_1d8) {
        if ((*puStack_160 & 1) == 0) {
          *(undefined8 *)(pbVar32 + 0x18) = *(undefined8 *)(puStack_160 + 4);
          uVar22 = *(undefined8 *)(puStack_160 + 2);
          *(undefined8 *)(pbVar32 + 8) = *(undefined8 *)puStack_160;
          *(undefined8 *)(pbVar32 + 0x10) = uVar22;
        }
        else {
          func_0x04885070(pbVar32 + 8,plVar18[0x14],plVar18[0x13]);
        }
      }
      *(undefined8 *)pbVar32 = *(undefined8 *)pbVar29;
      *(long **)(pbVar32 + 0x28) = plVar20 + 4;
      *(long **)(pbVar32 + 0x30) = plStack_1f8;
      LOCK();
      plStack_1f8[1] = plStack_1f8[1] + 1;
      UNLOCK();
      pbVar32 = pbVar32 + 0x38;
      *(byte **)(pbVar30 + 0x90) = pbVar32;
      plVar20 = plStack_1e0;
      goto LAB_0d0a7725;
    }
    lVar31 = (long)pbVar32 - *(long *)(pbVar30 + 0x88);
    uVar16 = (lVar31 >> 3) * 0x6db6db6db6db6db7 + 1;
    plVar21 = plVar18;
    if (uVar16 < 0x492492492492493) {
      lVar24 = (long)*(byte **)(pbVar30 + 0x98) - *(long *)(pbVar30 + 0x88) >> 3;
      uVar23 = lVar24 * -0x2492492492492492;
      if (uVar16 < uVar23) {
        uVar16 = uVar23;
      }
      pbVar32 = pbVar30 + 0x88;
      if (0x249249249249248 < (ulong)(lVar24 * 0x6db6db6db6db6db7)) {
        uVar16 = 0x492492492492492;
      }
      pbStack_248 = pbVar32;
      if (uVar16 == 0) {
        plVar21 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar16) goto LAB_0d0a7a89;
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 0x38);
        if (plVar21 == (long *)0x0) {
          func_0x0eec74c0(uVar16 * 0x38,0);
          plVar21 = (long *)0x0;
        }
      }
      pbVar33 = (byte *)((long)plVar21 + lVar31);
      plStack_250 = plVar21 + uVar16 * 7;
      puVar19 = (undefined8 *)((long)plVar21 + lVar31 + 0x10);
      *puVar19 = 0;
      puVar19[1] = 0;
      *(undefined8 *)((long)plVar21 + lVar31) = 0;
      ((undefined8 *)((long)plVar21 + lVar31))[1] = 0;
      *(undefined8 *)((long)plVar21 + lVar31 + 0x20) = 0;
      pbStack_258 = pbVar33;
      plStack_268 = plVar21;
      pbStack_260 = pbVar33;
      if (pbVar33 != pbStack_1d8) {
        puVar35 = (uint *)((long)plVar21 + lVar31 + 8);
        if ((*puStack_160 & 1) == 0) {
          *(undefined8 *)((long)plVar21 + lVar31 + 0x18) = *(undefined8 *)(puStack_160 + 4);
          uVar11 = puStack_160[1];
          uVar12 = puStack_160[2];
          uVar13 = puStack_160[3];
          *puVar35 = *puStack_160;
          *(uint *)((long)plVar21 + lVar31 + 0xc) = uVar11;
          *(uint *)((long)plVar21 + lVar31 + 0x10) = uVar12;
          *(uint *)((long)plVar21 + lVar31 + 0x14) = uVar13;
        }
        else {
          func_0x04885070(puVar35,plVar18[0x14],plVar18[0x13]);
        }
      }
      *(undefined8 *)pbVar33 = *(undefined8 *)pbStack_1d8;
      *(long **)(pbVar33 + 0x28) = plVar20 + 4;
      *(long **)(pbVar33 + 0x30) = plStack_1f8;
      LOCK();
      plStack_1f8[1] = plStack_1f8[1] + 1;
      UNLOCK();
      pbStack_258 = pbStack_258 + 0x38;
      puVar19 = *(undefined8 **)(pbVar30 + 0x88);
      puVar5 = *(undefined8 **)(pbVar30 + 0x90);
      pbVar33 = pbStack_260 + ((long)puVar19 - (long)puVar5);
      pbVar29 = pbVar33;
      puVar25 = puVar19;
      if ((long)puVar19 - (long)puVar5 != 0) {
        do {
          pbVar29[0x10] = 0;
          pbVar29[0x11] = 0;
          pbVar29[0x12] = 0;
          pbVar29[0x13] = 0;
          pbVar29[0x14] = 0;
          pbVar29[0x15] = 0;
          pbVar29[0x16] = 0;
          pbVar29[0x17] = 0;
          pbVar29[0x18] = 0;
          pbVar29[0x19] = 0;
          pbVar29[0x1a] = 0;
          pbVar29[0x1b] = 0;
          pbVar29[0x1c] = 0;
          pbVar29[0x1d] = 0;
          pbVar29[0x1e] = 0;
          pbVar29[0x1f] = 0;
          pbVar29[0] = 0;
          pbVar29[1] = 0;
          pbVar29[2] = 0;
          pbVar29[3] = 0;
          pbVar29[4] = 0;
          pbVar29[5] = 0;
          pbVar29[6] = 0;
          pbVar29[7] = 0;
          pbVar29[8] = 0;
          pbVar29[9] = 0;
          pbVar29[10] = 0;
          pbVar29[0xb] = 0;
          pbVar29[0xc] = 0;
          pbVar29[0xd] = 0;
          pbVar29[0xe] = 0;
          pbVar29[0xf] = 0;
          pbVar29[0x20] = 0;
          pbVar29[0x21] = 0;
          pbVar29[0x22] = 0;
          pbVar29[0x23] = 0;
          pbVar29[0x24] = 0;
          pbVar29[0x25] = 0;
          pbVar29[0x26] = 0;
          pbVar29[0x27] = 0;
          *(undefined8 *)(pbVar29 + 0x18) = puVar25[3];
          uVar22 = puVar25[2];
          *(undefined8 *)(pbVar29 + 8) = puVar25[1];
          *(undefined8 *)(pbVar29 + 0x10) = uVar22;
          *(undefined2 *)(puVar25 + 1) = 0;
          *(undefined8 *)pbVar29 = *puVar25;
          uVar22 = puVar25[6];
          *(undefined8 *)(pbVar29 + 0x28) = puVar25[5];
          *(undefined8 *)(pbVar29 + 0x30) = uVar22;
          puVar25[5] = 0;
          puVar25[6] = 0;
          puVar25 = puVar25 + 7;
          pbVar29 = pbVar29 + 0x38;
        } while (puVar25 != puVar5);
        do {
          plVar20 = (long *)puVar19[6];
          if (plVar20 == (long *)0x0) {
LAB_0d0a76a4:
            bVar4 = *(byte *)(puVar19 + 1);
          }
          else {
            LOCK();
            plVar21 = plVar20 + 1;
            lVar31 = *plVar21;
            *plVar21 = *plVar21 + -1;
            UNLOCK();
            if (lVar31 != 0) goto LAB_0d0a76a4;
            (**(code **)(*plVar20 + 0x10))(plVar20);
            func_0x0412c2d0(plVar20);
            bVar4 = *(byte *)(puVar19 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar19[3],puVar19[1] & 0xfffffffffffffffe);
          }
          puVar19 = puVar19 + 7;
        } while (puVar19 != puVar5);
        puVar19 = *(undefined8 **)pbVar32;
      }
      plVar20 = plStack_1e0;
      pbVar32 = pbStack_258;
      *(byte **)(pbVar30 + 0x88) = pbVar33;
      *(byte **)(pbVar30 + 0x90) = pbStack_258;
      lVar31 = *(long *)(pbVar30 + 0x98);
      *(long **)(pbVar30 + 0x98) = plStack_250;
      if (puVar19 != (undefined8 *)0x0) {
        func_0x0412a280(puVar19,lVar31 - (long)puVar19);
      }
LAB_0d0a7725:
      *(byte **)(pbVar30 + 0x90) = pbVar32;
      uVar7 = *(undefined4 *)pbVar30;
      uVar8 = *(undefined4 *)(pbVar30 + 4);
      uVar9 = *(undefined4 *)(pbVar30 + 8);
      uVar10 = *(undefined4 *)(pbVar30 + 0xc);
      if (*(long *)(pbVar30 + 8) != 0) {
        LOCK();
        plVar21 = (long *)(*(long *)(pbVar30 + 8) + 8);
        *plVar21 = *plVar21 + 1;
        UNLOCK();
      }
      plVar21 = (long *)plVar18[0xf];
      *(undefined4 *)(plVar18 + 0xe) = uVar7;
      *(undefined4 *)((long)plVar18 + 0x74) = uVar8;
      *(undefined4 *)(plVar18 + 0xf) = uVar9;
      *(undefined4 *)((long)plVar18 + 0x7c) = uVar10;
      if (plVar21 != (long *)0x0) {
        LOCK();
        plVar3 = plVar21 + 1;
        lVar31 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
        }
      }
      plVar21 = plStack_1f8;
      *(byte *)(plVar18 + 0x10) = pbVar30[0xa1];
      LOCK();
      lVar31 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar21);
      }
      plVar20 = plStack_110;
      LOCK();
      lVar31 = *plStack_110;
      *plStack_110 = *plStack_110 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
        LOCK();
        lVar31 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar31 = *plStack_110;
        *plStack_110 = *plStack_110 + -1;
        UNLOCK();
      }
      if (lVar31 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
      if (lStack_b8 != 0) {
        (**(code **)(lStack_b8 + 8))(&lStack_b8);
      }
      if (((uint)auStack_218 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_207,uStack_208),
                        CONCAT44(uStack_214,auStack_218) & 0xfffffffffffffffe);
      }
      plVar20 = plStack_1d0;
      *(byte *)(plVar18 + 0x3a) = *(byte *)(plVar18 + 0x3a) & 0x7f;
      bStack_1b0 = 0x24;
      uStack_1af = _DAT_011e0e1a;
      uStack_1ab = _UNK_011e0e1e;
      uStack_1a7 = _UNK_011e0e22;
      uStack_1a3 = _UNK_011e0e26;
      uStack_19f = 0x7974;
      uStack_19d = 0;
      func_0x0d0a7ed0(plStack_1d0,&bStack_1b0);
      bStack_1c8 = 0x1c;
      uStack_1c7 = 0x2e7972657571;
      uStack_1c1 = 0x70;
      uStack_1c0 = 0x72;
      uStack_1bf = 0x79747265706f;
      uStack_1b9 = 0;
      func_0x0d0a7ed0(plVar20,&bStack_1c8);
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      (**(code **)(*plVar20 + 0x10))(plVar20,&uStack_198);
      if ((uStack_198 & 1) != 0) {
        func_0x0412a280(uStack_188,uStack_198 & 0xfffffffffffffffe);
      }
      if ((bStack_1c8 & 1) != 0) {
        func_0x0412a280(uStack_1b8,
                        CONCAT17(uStack_1c1,CONCAT61(uStack_1c7,bStack_1c8)) & 0xfffffffffffffffe);
      }
      if ((bStack_1b0 & 1) != 0) {
        uStack_1a3._3_1_ = (undefined1)((uint)uStack_1a3 >> 0x18);
        uVar14 = CONCAT21(uStack_19f,uStack_1a3._3_1_);
        func_0x0412a280(CONCAT44(uStack_19c,CONCAT13(uStack_19d,uVar14)),
                        CONCAT35((undefined3)uStack_1ab,CONCAT41(uStack_1af,bStack_1b0)) &
                        0xfffffffffffffffe);
      }
      uStack_70 = 0;
      puStack_78 = (undefined8 *)&UNK_0f4528d8;
      ppuVar27 = (undefined8 **)(plVar34 + 0x1a);
      if (ppuVar27 != &puStack_78) {
        if ((*ppuVar27 == (undefined8 *)0x0) ||
           ((*(code *)(*ppuVar27)[1])(ppuVar27), puStack_78 != (undefined8 *)0x0)) {
          (*(code *)*puStack_78)(&puStack_78,ppuVar27);
        }
        else {
          puStack_78 = (undefined8 *)0x0;
        }
        *ppuVar27 = puStack_78;
      }
      return;
    }
  }
  else {
    pbVar33 = pbVar33 + -(long)pbStack_1f0;
    uVar16 = ((long)pbVar33 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar16) goto LAB_0d0a7a93;
    lVar31 = plVar34[0x19] - (long)pbStack_1f0 >> 3;
    uVar23 = lVar31 * -0x6186186186186186;
    if (uVar16 < uVar23) {
      uVar16 = uVar23;
    }
    pbVar32 = (byte *)(plVar34 + 0x17);
    if (0xc30c30c30c30c2 < (ulong)(lVar31 * -0x30c30c30c30c30c3)) {
      uVar16 = 0x186186186186186;
    }
    pbStack_248 = pbVar32;
    if (uVar16 == 0) {
      plVar20 = (long *)0x0;
LAB_0d0a704d:
      pbStack_260 = pbVar33 + (long)plVar20;
      plStack_250 = plVar20 + uVar16 * 0x15;
      plStack_268 = plVar20;
      pbStack_258 = pbStack_260;
      func_0x0d0df770(pbStack_260);
      pbVar33 = pbStack_258 + 0xa8;
      lVar31 = plVar34[0x17];
      lVar24 = plVar34[0x18];
      pbVar30 = pbStack_260 + (lVar31 - lVar24);
      if (lVar31 != lVar24) {
        lVar26 = 0;
        do {
          uVar22 = ((undefined8 *)(lVar31 + lVar26))[1];
          *(undefined8 *)(pbVar30 + lVar26) = *(undefined8 *)(lVar31 + lVar26);
          *(undefined8 *)(pbVar30 + lVar26 + 8) = uVar22;
          *(undefined8 *)(lVar31 + lVar26) = 0;
          ((undefined8 *)(lVar31 + lVar26))[1] = 0;
          pbVar29 = pbVar30 + lVar26 + 0x20;
          pbVar29[0] = 0;
          pbVar29[1] = 0;
          pbVar29[2] = 0;
          pbVar29[3] = 0;
          pbVar29[4] = 0;
          pbVar29[5] = 0;
          pbVar29[6] = 0;
          pbVar29[7] = 0;
          pbVar29[8] = 0;
          pbVar29[9] = 0;
          pbVar29[10] = 0;
          pbVar29[0xb] = 0;
          pbVar29[0xc] = 0;
          pbVar29[0xd] = 0;
          pbVar29[0xe] = 0;
          pbVar29[0xf] = 0;
          pbVar29 = pbVar30 + lVar26 + 0x10;
          pbVar29[0] = 0;
          pbVar29[1] = 0;
          pbVar29[2] = 0;
          pbVar29[3] = 0;
          pbVar29[4] = 0;
          pbVar29[5] = 0;
          pbVar29[6] = 0;
          pbVar29[7] = 0;
          pbVar29[8] = 0;
          pbVar29[9] = 0;
          pbVar29[10] = 0;
          pbVar29[0xb] = 0;
          pbVar29[0xc] = 0;
          pbVar29[0xd] = 0;
          pbVar29[0xe] = 0;
          pbVar29[0xf] = 0;
          pbVar29 = pbVar30 + lVar26 + 0x30;
          pbVar29[0] = 0;
          pbVar29[1] = 0;
          pbVar29[2] = 0;
          pbVar29[3] = 0;
          pbVar29[4] = 0;
          pbVar29[5] = 0;
          pbVar29[6] = 0;
          pbVar29[7] = 0;
          *(undefined8 *)(pbVar30 + lVar26 + 0x28) = *(undefined8 *)(lVar31 + 0x28 + lVar26);
          puVar17 = (undefined4 *)(lVar31 + 0x18 + lVar26);
          uVar7 = puVar17[1];
          uVar8 = puVar17[2];
          uVar9 = puVar17[3];
          pbVar29 = pbVar30 + lVar26 + 0x18;
          *(undefined4 *)pbVar29 = *puVar17;
          *(undefined4 *)(pbVar29 + 4) = uVar7;
          *(undefined4 *)(pbVar29 + 8) = uVar8;
          *(undefined4 *)(pbVar29 + 0xc) = uVar9;
          *(undefined2 *)(lVar31 + 0x18 + lVar26) = 0;
          *(undefined8 *)(pbVar30 + lVar26 + 0x10) = *(undefined8 *)(lVar31 + 0x10 + lVar26);
          FUN_04167a20(pbVar30 + lVar26 + 0x38,lVar26 + lVar31 + 0x38);
          puVar19 = (undefined8 *)(lVar31 + 0x40 + lVar26);
          uVar22 = puVar19[1];
          *(undefined8 *)(pbVar30 + lVar26 + 0x40) = *puVar19;
          *(undefined8 *)(pbVar30 + lVar26 + 0x40 + 8) = uVar22;
          puVar19 = (undefined8 *)(lVar31 + 0x50 + lVar26);
          uVar22 = puVar19[1];
          *(undefined8 *)(pbVar30 + lVar26 + 0x50) = *puVar19;
          *(undefined8 *)(pbVar30 + lVar26 + 0x50 + 8) = uVar22;
          puVar19 = (undefined8 *)(lVar31 + 0x60 + lVar26);
          uVar22 = puVar19[1];
          *(undefined8 *)(pbVar30 + lVar26 + 0x60) = *puVar19;
          *(undefined8 *)(pbVar30 + lVar26 + 0x60 + 8) = uVar22;
          puVar19 = (undefined8 *)(lVar31 + 0x60 + lVar26);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(pbVar30 + lVar26 + 0x70) = *(undefined8 *)(lVar31 + 0x70 + lVar26);
          puVar19 = (undefined8 *)(lVar31 + 0x78 + lVar26);
          uVar22 = puVar19[1];
          *(undefined8 *)(pbVar30 + lVar26 + 0x78) = *puVar19;
          *(undefined8 *)(pbVar30 + lVar26 + 0x78 + 8) = uVar22;
          pbVar29 = pbVar30 + lVar26 + 0x88;
          pbVar29[0] = 0;
          pbVar29[1] = 0;
          pbVar29[2] = 0;
          pbVar29[3] = 0;
          pbVar29[4] = 0;
          pbVar29[5] = 0;
          pbVar29[6] = 0;
          pbVar29[7] = 0;
          pbVar29[8] = 0;
          pbVar29[9] = 0;
          pbVar29[10] = 0;
          pbVar29[0xb] = 0;
          pbVar29[0xc] = 0;
          pbVar29[0xd] = 0;
          pbVar29[0xe] = 0;
          pbVar29[0xf] = 0;
          pbVar29 = pbVar30 + lVar26 + 0x98;
          pbVar29[0] = 0;
          pbVar29[1] = 0;
          pbVar29[2] = 0;
          pbVar29[3] = 0;
          pbVar29[4] = 0;
          pbVar29[5] = 0;
          pbVar29[6] = 0;
          pbVar29[7] = 0;
          puVar17 = (undefined4 *)(lVar31 + 0x88 + lVar26);
          uVar7 = puVar17[1];
          uVar8 = puVar17[2];
          uVar9 = puVar17[3];
          pbVar29 = pbVar30 + lVar26 + 0x88;
          *(undefined4 *)pbVar29 = *puVar17;
          *(undefined4 *)(pbVar29 + 4) = uVar7;
          *(undefined4 *)(pbVar29 + 8) = uVar8;
          *(undefined4 *)(pbVar29 + 0xc) = uVar9;
          *(undefined8 *)(pbVar30 + lVar26 + 0x98) = *(undefined8 *)(lVar31 + 0x98 + lVar26);
          puVar19 = (undefined8 *)(lVar31 + 0x88 + lVar26);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(lVar31 + 0x98 + lVar26) = 0;
          *(undefined2 *)(pbVar30 + lVar26 + 0xa0) = *(undefined2 *)(lVar31 + 0xa0 + lVar26);
          lVar2 = lVar26 + lVar31;
          lVar26 = lVar26 + 0xa8;
        } while (lVar2 + 0xa8 != lVar24);
        do {
          func_0x0d0df8f0(lVar31);
          lVar31 = lVar31 + 0xa8;
        } while (lVar31 != lVar24);
        lVar31 = *(long *)pbVar32;
      }
      plVar34[0x17] = (long)pbVar30;
      plVar34[0x18] = (long)pbVar33;
      lVar24 = plVar34[0x19];
      plVar34[0x19] = (long)plStack_250;
      if (lVar31 != 0) {
        func_0x0412a280(lVar31,lVar24 - lVar31);
      }
      goto LAB_0d0a722e;
    }
    plVar21 = plVar34;
    if (uVar16 < 0x186186186186187) {
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 0xa8);
      if (plVar20 == (long *)0x0) {
        func_0x0eec74c0(uVar16 * 0xa8,0);
        plVar20 = (long *)0x0;
      }
      goto LAB_0d0a704d;
    }
LAB_0d0a7a89:
    func_0x04882eb0();
  }
  func_0x0d0dfb10();
  plVar34 = plVar21;
LAB_0d0a7a93:
  uVar22 = func_0x0d0df8e0();
  if ((*pbVar33 & 1) != 0) {
    func_0x0412a280(plVar34[3],plVar34[1] & 0xfffffffffffffffe);
  }
  func_0x0d0dfa50(&plStack_268);
  plVar34 = plStack_1f8;
  LOCK();
  lVar31 = *plStack_1e0;
  *plStack_1e0 = *plStack_1e0 + -1;
  UNLOCK();
  if (lVar31 == 0) {
    (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
    func_0x0412c2d0(plVar34);
  }
  func_0x0d0dd6b0(plVar18);
  func_0x0d0dd6e0(plVar18);
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if (((uint)auStack_218 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_207,uStack_208),
                    CONCAT44(uStack_214,auStack_218) & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar22);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



/* ---- referenced strings ----
 * 0x11e0e1a  query.has_property
 * 0x147c4a4  [a-zA-Z0-9_.:-]+
 */
