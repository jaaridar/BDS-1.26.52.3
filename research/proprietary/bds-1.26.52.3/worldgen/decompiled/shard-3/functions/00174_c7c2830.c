/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8c2830 (ELF vaddr 0xc7c2830)
 * Label: string:minecraft:surface_builder
 * Body:  [[0c8c2830, 0c8c68ab] [0c8c68b0, 0c8c9707] [0c8c9764, 0c8c977f] [0c8c97f6, 0c8c9818] [0c8c9f35, 0c8ca024]]
 * Ghidra: FUN_0c8c2830
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8c2830(long ****param_1,long ***param_2,long *param_3,long **param_4,long **param_5,
                 byte *param_6,byte param_7,long **param_8,long *param_9)

{
  long **pplVar1;
  long *plVar2;
  long **pplVar3;
  ushort uVar4;
  long ****pppplVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  long ***ppplVar12;
  long *plVar13;
  undefined8 ***pppuVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  undefined8 *puVar17;
  undefined8 ****ppppuVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 ****ppppuVar23;
  ulong uVar24;
  long ***ppplVar25;
  long ***ppplVar26;
  byte bVar27;
  long ****pppplVar28;
  long ***ppplVar29;
  int *piVar30;
  undefined8 ****ppppuStack_5a0;
  long ***ppplStack_598;
  long ***ppplStack_590;
  long ****pppplStack_588;
  long ****pppplStack_580;
  long ****pppplStack_578;
  uint uStack_570;
  undefined4 uStack_56c;
  undefined8 *****pppppuStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined8 **ppuStack_550;
  byte bStack_548;
  undefined8 ****ppppuStack_538;
  undefined8 ****ppppuStack_530;
  undefined8 ****ppppuStack_528;
  uint uStack_520;
  undefined4 uStack_51c;
  ulong uStack_518;
  ulong uStack_510;
  undefined2 uStack_508;
  long ****pppplStack_4f8;
  long ****pppplStack_4f0;
  undefined8 ****ppppuStack_4e8;
  long ***ppplStack_4e0;
  long ***ppplStack_4d8;
  long ****pppplStack_4c8;
  long ****pppplStack_4c0;
  byte *pbStack_4b8;
  undefined8 ****ppppuStack_4b0;
  long ***ppplStack_4a8;
  undefined8 uStack_4a0;
  undefined8 ****ppppuStack_498;
  undefined8 uStack_490;
  long ***ppplStack_488;
  long ***ppplStack_480;
  long ****pppplStack_478;
  long ****pppplStack_470;
  long ***ppplStack_468;
  undefined8 uStack_460;
  long ****pppplStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long ****pppplStack_440;
  short sStack_430;
  short sStack_42e;
  short sStack_42c;
  undefined2 uStack_42a;
  long ***ppplStack_428;
  long ***ppplStack_420;
  short sStack_418;
  short sStack_416;
  short sStack_414;
  undefined2 uStack_412;
  long ***ppplStack_410;
  long ***ppplStack_408;
  short sStack_400;
  short sStack_3fe;
  short sStack_3fc;
  undefined2 uStack_3fa;
  long ***ppplStack_3f8;
  long ***ppplStack_3f0;
  undefined2 auStack_3e8 [4];
  long **pplStack_3e0;
  long **pplStack_3d8;
  long **pplStack_3d0;
  long **pplStack_3c8;
  undefined2 uStack_3c0;
  long ****pppplStack_3b8;
  long ****pppplStack_3b0;
  long ***ppplStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  long ****pppplStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  long ****pppplStack_380;
  undefined8 uStack_378;
  long ***ppplStack_370;
  long ***ppplStack_368;
  undefined8 **appuStack_358 [4];
  undefined8 ***pppuStack_338;
  char cStack_328;
  undefined2 uStack_326;
  undefined1 uStack_324;
  undefined2 auStack_310 [4];
  undefined8 uStack_308;
  undefined8 uStack_300;
  long **pplStack_2f8;
  long **pplStack_2f0;
  undefined2 uStack_2e8;
  long **pplStack_2e0;
  long **pplStack_2d8;
  undefined8 ****ppppuStack_2d0;
  long ***ppplStack_2c8;
  long ***ppplStack_2c0;
  long ****pppplStack_2b8;
  long ****pppplStack_2b0;
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  long ****pppplStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  long ****pppplStack_280;
  undefined8 uStack_278;
  long ***ppplStack_270;
  long ***ppplStack_268;
  undefined8 uStack_238;
  undefined1 uStack_228;
  undefined2 uStack_226;
  undefined1 uStack_224;
  long ****pppplStack_218;
  long ****pppplStack_210;
  long ***ppplStack_208;
  long ***ppplStack_200;
  long ****pppplStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  long ****pppplStack_1e0;
  undefined8 uStack_1d8;
  long ***ppplStack_1d0;
  long ***ppplStack_1c8;
  undefined8 uStack_198;
  undefined1 uStack_188;
  undefined2 uStack_186;
  undefined1 uStack_184;
  long ****pppplStack_178;
  long ****pppplStack_170;
  long ***ppplStack_168;
  undefined8 uStack_160;
  long ****pppplStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long ****pppplStack_140;
  undefined8 uStack_138;
  long ***ppplStack_130;
  long ***ppplStack_128;
  undefined8 uStack_f8;
  undefined1 uStack_e8;
  undefined2 uStack_e6;
  undefined1 uStack_e4;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ****pppplStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long ****pppplStack_a0;
  undefined8 uStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  undefined8 **appuStack_78 [4];
  undefined8 ***pppuStack_58;
  undefined1 uStack_48;
  undefined2 uStack_46;
  undefined1 uStack_44;
  
  pppplStack_4f8 = (long ****)param_3;
  pbStack_4b8 = param_6;
  pplStack_2e0 = param_4;
  pplStack_2d8 = param_5;
  func_0x05d54750(&pppplStack_3b8,&UNK_0f0863e8);
  *param_1 = (long ***)0x0;
  param_1[1] = (long ***)0x0;
  param_1[2] = (long ***)0x0;
  param_1[4] = (long ***)0x0;
  param_1[5] = (long ***)0x0;
  param_1[3] = (long ***)(param_1 + 4);
  param_1[10] = (long ***)0x0;
  param_1[0x10] = (long ***)0x0;
  param_1[0x12] = (long ***)pppplStack_3b8;
  param_1[0x13] = (long ***)0x0;
  pppplVar28 = pppplStack_3b0;
  pppplStack_4f0 = param_1;
  if (((ulong)pppplStack_3b0 >> 0x37 & 1) != 0) {
    uVar24 = (ulong)pppplStack_3b0 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    pppplVar28 = (long ****)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppplStack_4f0[0x13] = (long ***)pppplVar28;
  pppplStack_4f0[0x14] = (long ***)0x0;
  if (((ulong)ppplStack_3a8 & 0x80000000000000) == 0) {
    pppplStack_4f0[0x14] = ppplStack_3a8;
    pppplVar28 = pppplStack_4f0 + 0x15;
    pppplStack_4f0[0x15] = (long ***)0x0;
    pppplStack_4f0[0x16] = (long ***)0x0;
    pppplStack_4f0[0x17] = (long ***)0x0;
    pppplStack_4f0[0x18] = (long ***)0x0;
    pppplStack_4f0[0x19] = (long ***)0x0;
    pppplStack_4f0[0x1a] = (long ***)0x0;
    pppplStack_4f0[0x1b] = (long ***)0x0;
    pppplStack_4f0[0x1c] = (long ***)0x0;
    pppplStack_4f0[0x1d] = (long ***)0x0;
  }
  else {
    uVar24 = (ulong)ppplStack_3a8 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    pppplVar28 = pppplStack_4f0 + 0x15;
    pppplStack_4f0[0x14] = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    pppplStack_4f0[0x1b] = (long ***)0x0;
    pppplStack_4f0[0x1c] = (long ***)0x0;
    pppplStack_4f0[0x19] = (long ***)0x0;
    pppplStack_4f0[0x1a] = (long ***)0x0;
    pppplStack_4f0[0x17] = (long ***)0x0;
    pppplStack_4f0[0x18] = (long ***)0x0;
    pppplStack_4f0[0x15] = (long ***)0x0;
    pppplStack_4f0[0x16] = (long ***)0x0;
    pppplStack_4f0[0x1d] = (long ***)0x0;
    if (((ulong)ppplStack_3a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_3a8 & 0xff00ffffffffffff) - 8);
    }
  }
  ppplStack_3a8 = (long ***)0x0;
  if (((ulong)pppplStack_3b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_3b0 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_4c8 = pppplVar28;
  func_0x0e7f40d0(param_2);
  func_0x0e727990(param_2);
  func_0x0e130f60(param_2);
  func_0x0db359f0(param_2);
  pppplStack_3b0 = (long ****)0x0;
  ppplStack_3a8 = (long ***)0x0;
  uVar24 = param_9[1];
  uVar19 = 7;
  if (uVar24 < 7) {
    uVar19 = uVar24;
  }
  pppplStack_3b8 = (long ****)&pppplStack_3b0;
  if (uVar24 != 0) {
    lVar21 = 0xf720e60;
    uVar24 = 0;
    do {
      if ((*(ulong *)(*param_9 + (uVar24 >> 6) * 8) >> (uVar24 & 0x3f) & 1) != 0) {
        func_0x049dcb70(&pppplStack_3b8,lVar21,lVar21);
      }
      uVar24 = uVar24 + 1;
      lVar21 = lVar21 + 0x18;
    } while (uVar19 != uVar24);
  }
  func_0x0eca2170(param_2,&pppplStack_3b8);
  func_0x049dc470(&pppplStack_3b8,pppplStack_3b0);
  func_0x0e97e540(param_2);
  func_0x0d88f060(param_2);
  pplStack_3e0 = (long **)*pppplStack_4f8;
  pplVar3 = (long **)pppplStack_4f8[1];
  if (pplVar3 == (long **)0x0) {
    pppplStack_4c0 = pppplStack_4f8 + 2;
    pplStack_3d0 = (long **)pppplStack_4f8[2];
    auStack_3e8[0] = 0xd;
    pplStack_3d8 = (long **)0x0;
    pplStack_3c8 = (long **)0x0;
  }
  else {
    LOCK();
    pplVar3[1] = (long *)((long)pplVar3[1] + 1);
    UNLOCK();
    pppplStack_4c0 = pppplStack_4f8 + 2;
    pplStack_3d0 = (long **)pppplStack_4f8[2];
    auStack_3e8[0] = 0xd;
    LOCK();
    pplVar3[1] = (long *)((long)pplVar3[1] + 1);
    UNLOCK();
    pplStack_3c8 = (long **)0x0;
    uStack_3c0 = 0x100;
    LOCK();
    pplVar1 = pplVar3 + 1;
    plVar13 = *pplVar1;
    *pplVar1 = (long *)((long)*pplVar1 + -1);
    UNLOCK();
    pplStack_3d8 = pplVar3;
    if (plVar13 == (long *)0x0) {
      (*(code *)(*pplVar3)[2])(pplVar3);
      func_0x0412c2d0(pplVar3);
    }
  }
  uStack_3c0 = CONCAT11((byte)((*(uint *)*param_9 & 2) >> 1) | param_7,1);
  ppplVar26 = pppplStack_4f0[0x16];
  pppplStack_4f0[0x15] = (long ***)0x0;
  pppplStack_4f0[0x16] = (long ***)0x0;
  if (ppplVar26 != (long ***)0x0) {
    LOCK();
    ppplVar29 = ppplVar26 + 1;
    pplVar3 = *ppplVar29;
    *ppplVar29 = (long **)((long)*ppplVar29 + -1);
    UNLOCK();
    if (pplVar3 == (long **)0x0) {
      (*(code *)(*ppplVar26)[2])(ppplVar26);
      func_0x0412c2d0(ppplVar26);
    }
  }
  pppplStack_4f0[0x17] = (long ***)0x0;
  ppplVar26 = (long ***)param_2[1];
  ppplVar29 = (long ***)param_2[2];
  if (ppplVar29 != (long ***)0x0) {
    LOCK();
    ppplVar29[1] = (long **)((long)ppplVar29[1] + 1);
    UNLOCK();
  }
  pppplStack_4f0[0x15] = ppplVar26;
  ppplVar12 = pppplStack_4f0[0x16];
  pppplStack_4f0[0x16] = ppplVar29;
  if (ppplVar12 != (long ***)0x0) {
    LOCK();
    ppplVar26 = ppplVar12 + 1;
    pplVar3 = *ppplVar26;
    *ppplVar26 = (long **)((long)*ppplVar26 + -1);
    UNLOCK();
    if (pplVar3 == (long **)0x0) {
      (*(code *)(*ppplVar12)[2])(ppplVar12);
      func_0x0412c2d0(ppplVar12);
    }
    ppplVar26 = *pppplStack_4c8;
  }
  if (ppplVar26 != (long ***)0x0) {
    pppplStack_4f0[0x17] = param_2;
  }
  auStack_310[0] = auStack_3e8[0];
  uStack_308 = pplStack_3e0;
  uStack_300 = pplStack_3d8;
  pplStack_3e0 = (long **)0x0;
  pplStack_3d8 = (long **)0x0;
  pplStack_2f8 = pplStack_3d0;
  pplStack_3d0 = (long **)0x0;
  uStack_2e8 = uStack_3c0;
  pplStack_2f0 = pplStack_3c8;
  ppplVar26 = pppplStack_4f0[0x18];
  if (ppplVar26 == (long ***)0x0) {
    ppplVar26 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (ppplVar26 == (long ***)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *(undefined2 *)ppplVar26 = auStack_310[0];
    ppplVar26[1] = uStack_308;
    ppplVar26[2] = uStack_300;
    uStack_308 = (long **)0x0;
    uStack_300 = (long **)0x0;
    ppplVar26[3] = pplStack_2f8;
    pplStack_2f8 = (long **)0x0;
    *(undefined2 *)(ppplVar26 + 5) = uStack_2e8;
    ppplVar26[4] = pplStack_2f0;
    ppplVar29 = pppplStack_4f0[0x18];
    pppplStack_4f0[0x18] = ppplVar26;
    if (ppplVar29 != (long ***)0x0) {
      pplVar3 = ppplVar29[2];
      ppplVar29[1] = (long **)0x0;
      ppplVar29[2] = (long **)0x0;
      if (pplVar3 != (long **)0x0) {
        LOCK();
        pplVar1 = pplVar3 + 1;
        plVar13 = *pplVar1;
        *pplVar1 = (long *)((long)*pplVar1 + -1);
        UNLOCK();
        if (plVar13 == (long *)0x0) {
          (*(code *)(*pplVar3)[2])(pplVar3);
          func_0x0412c2d0(pplVar3);
        }
        pplVar3 = ppplVar29[2];
        ppplVar29[3] = (long **)0x0;
        if (pplVar3 != (long **)0x0) {
          LOCK();
          pplVar1 = pplVar3 + 1;
          plVar13 = *pplVar1;
          *pplVar1 = (long *)((long)*pplVar1 + -1);
          UNLOCK();
          if (plVar13 == (long *)0x0) {
            (*(code *)(*pplVar3)[2])(pplVar3);
            func_0x0412c2d0(pplVar3);
          }
        }
      }
      func_0x0412a280(ppplVar29,0x30);
    }
  }
  else {
    *(undefined2 *)ppplVar26 = auStack_3e8[0];
    if (ppplVar26 != (long ***)auStack_310) {
      pplVar3 = ppplVar26[2];
      ppplVar26[1] = (long **)0x0;
      ppplVar26[2] = (long **)0x0;
      if (pplVar3 != (long **)0x0) {
        LOCK();
        pplVar1 = pplVar3 + 1;
        plVar13 = *pplVar1;
        *pplVar1 = (long *)((long)*pplVar1 + -1);
        UNLOCK();
        if (plVar13 == (long *)0x0) {
          (*(code *)(*pplVar3)[2])(pplVar3);
          func_0x0412c2d0(pplVar3);
        }
      }
      ppplVar26[3] = (long **)0x0;
      uVar7 = (undefined4)uStack_308;
      uVar8 = uStack_308._4_4_;
      uVar9 = (undefined4)uStack_300;
      uVar10 = uStack_300._4_4_;
      uStack_308 = (long **)0x0;
      uStack_300 = (long **)0x0;
      pplVar3 = ppplVar26[2];
      *(undefined4 *)(ppplVar26 + 1) = uVar7;
      *(undefined4 *)((long)ppplVar26 + 0xc) = uVar8;
      *(undefined4 *)(ppplVar26 + 2) = uVar9;
      *(undefined4 *)((long)ppplVar26 + 0x14) = uVar10;
      if (pplVar3 != (long **)0x0) {
        LOCK();
        pplVar1 = pplVar3 + 1;
        plVar13 = *pplVar1;
        *pplVar1 = (long *)((long)*pplVar1 + -1);
        UNLOCK();
        if (plVar13 == (long *)0x0) {
          (*(code *)(*pplVar3)[2])(pplVar3);
          func_0x0412c2d0(pplVar3);
        }
      }
      ppplVar26[3] = pplStack_2f8;
      pplStack_2f8 = (long **)0x0;
    }
    *(undefined2 *)(ppplVar26 + 5) = uStack_2e8;
    ppplVar26[4] = pplStack_2f0;
  }
  pplVar3 = uStack_300;
  uStack_308 = (long **)0x0;
  uStack_300 = (long **)0x0;
  if (pplVar3 == (long **)0x0) {
    pplStack_2f8 = (long **)0x0;
  }
  else {
    LOCK();
    pplVar1 = pplVar3 + 1;
    plVar13 = *pplVar1;
    *pplVar1 = (long *)((long)*pplVar1 + -1);
    UNLOCK();
    if (plVar13 == (long *)0x0) {
      (*(code *)(*pplVar3)[2])(pplVar3);
      func_0x0412c2d0(pplVar3);
    }
    plVar13 = (long *)uStack_300;
    pplStack_2f8 = (long **)0x0;
    if (uStack_300 != (long **)0x0) {
      LOCK();
      plVar2 = (long *)(uStack_300 + 1);
      lVar21 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)((long)*uStack_300 + 0x10))(uStack_300);
        func_0x0412c2d0(plVar13);
      }
    }
  }
  func_0x05d54750(&ppppuStack_2d0,&UNK_0f3e27b8);
  pppplStack_470 = pppplStack_4f0 + 0x12;
  bVar27 = *(byte *)*param_9;
  pppplStack_478 = pppplStack_4f0;
  ppplVar26 = pppplStack_4f0[0x15];
  ppplVar29 = pppplStack_4f0[0x16];
  if (ppplVar29 != (long ***)0x0) {
    LOCK();
    ppplVar29[1] = (long **)((long)ppplVar29[1] + 1);
    UNLOCK();
  }
  pppplVar28 = (long ****)pppplStack_4f0[0x17];
  ppplStack_468 = ppplVar26;
  uStack_460 = ppplVar29;
  pppplStack_458 = pppplVar28;
  if ((pppplStack_4f0[0x18] == (long ***)0x0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_012cdad3),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_450 = pppplStack_4f0[0x18];
  ppplVar12 = pppplStack_4f0[0x19];
  if (ppplVar12 == (long ***)0x0) {
    ppplVar12 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (ppplVar12 == (long ***)0x0) {
      func_0x0eec74c0(8,0);
    }
    *ppplVar12 = (long **)0x0;
    pppplStack_4f0[0x19] = ppplVar12;
  }
  pppplStack_440 = pppplStack_4f0 + 0x1b;
  pppplStack_d8 = pppplStack_478;
  pppplStack_d0 = pppplStack_470;
  ppplStack_468 = (long ***)0x0;
  uStack_460 = (long ***)0x0;
  pppplStack_458 = (long ****)0x0;
  uStack_448._0_4_ = SUB84(ppplVar12,0);
  uStack_448._4_4_ = (undefined4)((ulong)ppplVar12 >> 0x20);
  uStack_b0 = (undefined4)uStack_450;
  uStack_ac = uStack_450._4_4_;
  uStack_a8 = (undefined4)uStack_448;
  uStack_a4 = uStack_448._4_4_;
  uStack_98 = ppppuStack_2d0;
  ppplStack_90 = (long ***)0x0;
  ppplVar25 = ppplStack_2c8;
  uStack_448 = ppplVar12;
  ppplStack_c8 = ppplVar26;
  ppplStack_c0 = ppplVar29;
  pppplStack_b8 = pppplVar28;
  pppplStack_a0 = pppplStack_440;
  if (((ulong)ppplStack_2c8 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_2c8 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar25 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplStack_88 = (long ***)0x0;
  ppplVar26 = ppplStack_2c0;
  ppplStack_90 = ppplVar25;
  if (((ulong)ppplStack_2c0 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_2c0 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppplStack_588 = (long ****)&UNK_0c8c0720;
  pppplStack_578 = (long ****)*pppplStack_4f8;
  uStack_570 = (uint)pppplStack_4f8[1];
  uStack_56c = *(undefined4 *)((long)pppplStack_4f8 + 0xc);
  if (pppplStack_4f8[1] != (long ***)0x0) {
    LOCK();
    plVar13 = (long *)((long)pppplStack_4f8[1] + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  pppppuStack_568 = (undefined8 *****)*pppplStack_4c0;
  pppplStack_580 = (long ****)param_2;
  ppplStack_88 = ppplVar26;
  if ((*pbStack_4b8 & 1) == 0) {
    ppuStack_550 = *(undefined8 ***)(pbStack_4b8 + 0x10);
    uStack_560 = *(long ****)pbStack_4b8;
    uStack_558 = *(undefined4 *)(pbStack_4b8 + 8);
    uStack_554 = *(undefined4 *)(pbStack_4b8 + 0xc);
  }
  else {
    func_0x0412e5e0(&uStack_560,*(undefined8 *)(pbStack_4b8 + 0x10),*(undefined8 *)(pbStack_4b8 + 8)
                   );
  }
  bVar27 = bVar27 >> 1 & 1;
  pppuStack_58 = (undefined8 ***)0x0;
  bStack_548 = bVar27;
  pppuVar14 = (undefined8 ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (pppuVar14 == (undefined8 ***)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *pppuVar14 = (undefined8 **)&UNK_0f3e2738;
  pppuVar14[1] = pppplStack_588;
  pppuVar14[2] = pppplStack_580;
  pppuVar14[3] = pppplStack_578;
  pppuVar14[4] = (undefined8 **)CONCAT44(uStack_56c,uStack_570);
  pppuVar14[5] = pppppuStack_568;
  *(undefined4 *)(pppuVar14 + 6) = (undefined4)uStack_560;
  *(undefined4 *)((long)pppuVar14 + 0x34) = uStack_560._4_4_;
  *(undefined4 *)(pppuVar14 + 7) = uStack_558;
  *(undefined4 *)((long)pppuVar14 + 0x3c) = uStack_554;
  pppuVar14[8] = ppuStack_550;
  *(byte *)(pppuVar14 + 9) = bVar27;
  *(undefined4 *)((long)pppuVar14 + 0x49) = 0;
  *(undefined4 *)((long)pppuVar14 + 0x4c) = 0;
  uStack_48 = 1;
  uStack_46 = 0xfffc;
  uStack_44 = 1;
  pppuStack_58 = pppuVar14;
  func_0x05d54750(&sStack_400,&UNK_0f3e2910);
  pppplVar28 = pppplStack_a0;
  ppppuStack_538 =
       (undefined8 ****)CONCAT26(uStack_3fa,CONCAT24(sStack_3fc,CONCAT22(sStack_3fe,sStack_400)));
  if (*(char *)((long)pppplStack_a0 + 6) == '\0') {
    *pppplStack_a0 = (long ***)ppppuStack_538;
    if (((ulong)pppplStack_a0[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplStack_a0[1] & 0xff00ffffffffffff) - 8);
    }
    pppplVar28[1] = (long ***)0x0;
    ppplVar26 = ppplStack_3f8;
    if (((ulong)ppplStack_3f8 & 0x80000000000000) != 0) {
      uVar24 = (ulong)ppplStack_3f8 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar24 - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppplVar28[1] = ppplVar26;
    if (((ulong)pppplVar28[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplVar28[2] & 0xff00ffffffffffff) - 8);
    }
    pppplVar28[2] = (long ***)0x0;
    ppplVar26 = ppplStack_3f0;
    if (((ulong)ppplStack_3f0 & 0x80000000000000) != 0) {
      uVar24 = (ulong)ppplStack_3f0 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar24 - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppplVar28[2] = ppplVar26;
    ppppuStack_538 =
         (undefined8 ****)CONCAT26(uStack_3fa,CONCAT24(sStack_3fc,CONCAT22(sStack_3fe,sStack_400)));
  }
  pppplVar28 = pppplStack_d8;
  ppppuStack_530 = (undefined8 ****)ppplStack_3f8;
  if (((ulong)ppplStack_3f8 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_3f8 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppppuStack_530 = (undefined8 ****)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000)
    ;
  }
  ppppuStack_528 = (undefined8 ****)0x0;
  ppppuVar23 = (undefined8 ****)ppplStack_3f0;
  if (((ulong)ppplStack_3f0 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_3f0 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppppuVar23 = (undefined8 ****)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppplVar15 = pppplStack_d0;
  uVar24 = (ulong)ppplStack_90 & 0x80000000000000;
  uVar4 = (ushort)((ulong)ppplStack_90 >> 0x30);
  ppppuStack_528 = ppppuVar23;
  if (uVar24 == 0) {
    if (((ulong)ppplStack_90 & 0x7f000000000000) == 0) goto LAB_0c8c37d9;
    uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c3791:
    if ((((uVar19 != 4) || (*(int *)((ulong)ppplStack_90 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_98 != 9999)) || ((uStack_98._2_2_ != 9999 || (uStack_98._4_2_ != 9999))))
    goto LAB_0c8c37d9;
LAB_0c8c3a34:
    if (uVar24 == 0) {
      if (((ulong)ppplStack_90 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c3a6b:
        uVar20 = 3;
        if ((((uVar19 == 4) &&
             (piVar30 = (int *)((ulong)ppplStack_90 & 0xff00ffffffffffff), *piVar30 == 0x61746562))
            && ((short)uStack_98 == 9999)) &&
           ((uStack_98._2_2_ == 9999 && (uStack_98._4_2_ == 9999)))) {
          ppppuStack_538 = uStack_98;
          if (((ulong)ppppuStack_530 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppuStack_530 & 0xff00ffffffffffff) - 8);
            piVar30 = (int *)((ulong)ppplStack_90 & 0xff00ffffffffffff);
            uVar24 = (ulong)ppplStack_90 & 0x80000000000000;
          }
          ppppuStack_530 = (undefined8 ****)0x0;
          ppplVar26 = ppplStack_90;
          if (uVar24 != 0) {
            lVar22 = *(long *)(piVar30 + -2);
            lVar21 = lVar22 + 9;
            plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
            if (lVar21 != 0 && plVar13 == (long *)0x0) {
              func_0x0eec74c0(lVar21,8);
            }
            *plVar13 = lVar22;
            func_0x0eee2f00(plVar13 + 1,piVar30,lVar22);
            *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
            ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          ppppuStack_530 = (undefined8 ****)ppplVar26;
          if (((ulong)ppppuStack_528 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppuStack_528 & 0xff00ffffffffffff) - 8);
          }
          ppppuStack_528 = (undefined8 ****)0x0;
          uVar20 = 3;
          ppppuVar23 = (undefined8 ****)ppplStack_88;
          if (((ulong)ppplStack_88 & 0x80000000000000) != 0) {
            uVar24 = (ulong)ppplStack_88 & 0xff00ffffffffffff;
            lVar22 = *(long *)(uVar24 - 8);
            lVar21 = lVar22 + 9;
            plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8,3);
            if (lVar21 != 0 && plVar13 == (long *)0x0) {
              func_0x0eec74c0(lVar21,8);
            }
            *plVar13 = lVar22;
            func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
            *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
            uVar20 = 3;
            ppppuVar23 = (undefined8 ****)
                         ((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
        }
        goto LAB_0c8c3c9e;
      }
    }
    else {
      uVar19 = *(ulong *)(((ulong)ppplStack_90 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0c8c3a6b;
    }
    uVar20 = 3;
  }
  else {
    uVar19 = *(ulong *)(((ulong)ppplStack_90 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0c8c3791;
LAB_0c8c37d9:
    if (((ulong)ppplStack_3f8 & 0x80000000000000) != 0) {
      uVar19 = *(ulong *)(((ulong)ppplStack_3f8 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0c8c3818;
      goto LAB_0c8c3a34;
    }
    if (((ulong)ppplStack_3f8 & 0x7f000000000000) == 0) goto LAB_0c8c3a34;
    uVar19 = (ulong)((ushort)((ulong)ppplStack_3f8 >> 0x30) & 0x7f);
LAB_0c8c3818:
    if (((uVar19 != 4) || (*(int *)((ulong)ppplStack_3f8 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_400 != 9999 || ((sStack_3fe != 9999 || (sStack_3fc != 9999)))))) goto LAB_0c8c3a34;
    ppppuStack_538 = (undefined8 ****)*pppplStack_d0;
    if (((ulong)ppppuStack_530 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppuStack_530 & 0xff00ffffffffffff) - 8);
    }
    ppppuStack_530 = (undefined8 ****)0x0;
    ppplVar26 = pppplVar15[1];
    if (((ulong)ppplVar26 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppplVar26 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar26 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppuStack_530 = (undefined8 ****)ppplVar26;
    if (((ulong)ppppuStack_528 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppuStack_528 & 0xff00ffffffffffff) - 8);
    }
    ppppuStack_528 = (undefined8 ****)0x0;
    ppppuVar23 = (undefined8 ****)pppplVar15[2];
    uVar20 = 1;
    if (((ulong)ppppuVar23 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppppuVar23 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8,1);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppppuVar23 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      uVar20 = 1;
      ppppuVar23 = (undefined8 ****)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0c8c3c9e:
  ppppuStack_528 = ppppuVar23;
  func_0x0d6b3300(&pppplStack_478,&uStack_98,&ppppuStack_538,uVar20);
  ppppuVar23 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (ppppuVar23 == (undefined8 ****)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  uStack_560 = uStack_450;
  pppppuStack_568 = (undefined8 *****)pppplStack_458;
  pppplStack_578 = (long ****)ppplStack_468;
  pppplStack_580 = pppplStack_470;
  pppplStack_470 = (long ****)0x0;
  ppplStack_468 = (long ***)0x0;
  pppplStack_588 = pppplStack_478;
  uStack_570 = (undefined4)uStack_460;
  uStack_56c = uStack_460._4_4_;
  pppplStack_458 = (long ****)0x0;
  uStack_450 = (long ***)0x0;
  uStack_558 = CONCAT22(uStack_558._2_2_,(undefined2)uStack_448);
  func_0x0d6a8c00(ppppuVar23,&uStack_98,&pppplStack_588);
  if (((ulong)uStack_560 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_560 & 0xff00ffffffffffff) - 8);
  }
  uStack_560 = (long ***)0x0;
  if (((ulong)pppppuStack_568 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppuStack_568 & 0xff00ffffffffffff) - 8);
  }
  pppppuStack_568 = (undefined8 *****)0x0;
  if (((ulong)pppplStack_578 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_578 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_578 = (long ****)0x0;
  if (((ulong)pppplStack_580 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_580 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_580 = (long ****)0x0;
  *ppppuVar23 = (undefined8 ***)&UNK_0f3e27f0;
  if (pppuStack_58 == (undefined8 ***)0x0) {
    ppppuVar23[0x10] = (undefined8 ***)0x0;
  }
  else if (pppuStack_58 == appuStack_78) {
    ppppuVar23[0x10] = ppppuVar23 + 0xc;
    (*(code *)(*pppuStack_58)[3])();
  }
  else {
    ppppuVar23[0x10] = pppuStack_58;
    pppuStack_58 = (undefined8 ***)0x0;
  }
  pppplStack_588 = ppppuVar23;
  if (((ulong)uStack_450 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_450 & 0xff00ffffffffffff) - 8);
  }
  uStack_450 = (long ***)0x0;
  if (((ulong)pppplStack_458 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_458 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_458 = (long ****)0x0;
  if (((ulong)ppplStack_468 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_468 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_468 = (long ***)0x0;
  if (((ulong)pppplStack_470 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_470 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)ppppuStack_528 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppuStack_528 & 0xff00ffffffffffff) - 8);
  }
  ppppuStack_528 = (undefined8 ****)0x0;
  if (((ulong)ppppuStack_530 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppuStack_530 & 0xff00ffffffffffff) - 8);
  }
  ppplVar26 = *pppplVar28;
  ppplVar29 = pppplVar28[1];
  if (ppplVar26 != ppplVar29) {
    do {
      cVar11 = FUN_04fa7a10(*ppplVar26 + 4,ppppuVar23 + 7);
      if (cVar11 == '\0') break;
      ppplVar26 = ppplVar26 + 1;
    } while (ppplVar26 != ppplVar29);
  }
  func_0x0d6af860(pppplVar28,ppplVar26,&pppplStack_588);
  pppplVar28 = pppplStack_588;
  pppplStack_588 = (undefined8 ****)0x0;
  if (pppplVar28 != (undefined8 ****)0x0) {
    (*(code *)(*pppplVar28)[1])();
  }
  pppplVar28 = pppplStack_d8;
  uStack_48 = 0;
  if (((ulong)ppplStack_3f8 & 0x80000000000000) == 0) {
    if (((ulong)ppplStack_3f8 & 0x7f000000000000) == 0) goto LAB_0c8c404a;
    uVar24 = (ulong)((ushort)((ulong)ppplStack_3f8 >> 0x30) & 0x7f);
LAB_0c8c4008:
    if (((uVar24 != 4) || (*(int *)((ulong)ppplStack_3f8 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_400 != 9999 || ((sStack_3fe != 9999 || (sStack_3fc != 9999)))))) goto LAB_0c8c404a;
  }
  else {
    uVar24 = *(ulong *)(((ulong)ppplStack_3f8 & 0xff00ffffffffffff) - 8);
    if (uVar24 != 0) goto LAB_0c8c4008;
LAB_0c8c404a:
    ppppuVar23 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (ppppuVar23 == (undefined8 ****)0x0) {
      func_0x0eec74c0(0x70,0);
    }
    func_0x0d6b23d0(ppppuVar23,&uStack_98,&sStack_400);
    *ppppuVar23 = (undefined8 ***)&UNK_0f3e2830;
    ppppuVar23[8] = (undefined8 ***)&UNK_0f3e2870;
    ppppuVar23[9] = (undefined8 ***)&UNK_0c8c1e70;
    ppppuVar23[0xc] = ppppuVar23 + 8;
    pppplStack_588 = ppppuVar23;
    func_0x0d6afb30(pppplVar28,&pppplStack_588);
    if (pppplStack_588 != (undefined8 ****)0x0) {
      (*(code *)(*pppplStack_588)[1])();
    }
  }
  pppplStack_2b8 = pppplStack_d8;
  pppplStack_2b0 = pppplStack_d0;
  ppplStack_2a8 = ppplStack_c8;
  ppplStack_2a0 = ppplStack_c0;
  ppplStack_c8 = (long ***)0x0;
  ppplStack_c0 = (long ***)0x0;
  pppplStack_298 = pppplStack_b8;
  pppplStack_b8 = (long ****)0x0;
  uStack_290 = uStack_b0;
  uStack_28c = uStack_ac;
  uStack_288 = uStack_a8;
  uStack_284 = uStack_a4;
  pppplStack_280 = pppplStack_a0;
  uStack_278 = (undefined8 ****)
               CONCAT26(uStack_3fa,CONCAT24(sStack_3fc,CONCAT22(sStack_3fe,sStack_400)));
  ppplStack_270 = (long ***)0x0;
  ppplVar26 = ppplStack_3f8;
  if (((ulong)ppplStack_3f8 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_3f8 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplStack_268 = (long ***)0x0;
  ppplVar29 = ppplStack_3f0;
  ppplStack_270 = ppplVar26;
  if (((ulong)ppplStack_3f0 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_3f0 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_238 = 0;
  uStack_228 = 1;
  uStack_226 = 0xfffc;
  uStack_224 = 1;
  ppplStack_268 = ppplVar29;
  func_0x05d54750(&sStack_418,&UNK_0f3e2ad0);
  pppplVar28 = pppplStack_280;
  ppppuStack_5a0 =
       (undefined8 ****)CONCAT26(uStack_412,CONCAT24(sStack_414,CONCAT22(sStack_416,sStack_418)));
  if (*(char *)((long)pppplStack_280 + 6) == '\0') {
    *pppplStack_280 = (long ***)ppppuStack_5a0;
    if (((ulong)pppplStack_280[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplStack_280[1] & 0xff00ffffffffffff) - 8);
    }
    pppplVar28[1] = (long ***)0x0;
    ppplVar26 = ppplStack_410;
    if (((ulong)ppplStack_410 & 0x80000000000000) != 0) {
      uVar24 = (ulong)ppplStack_410 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar24 - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppplVar28[1] = ppplVar26;
    if (((ulong)pppplVar28[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplVar28[2] & 0xff00ffffffffffff) - 8);
    }
    pppplVar28[2] = (long ***)0x0;
    ppplVar26 = ppplStack_408;
    if (((ulong)ppplStack_408 & 0x80000000000000) != 0) {
      uVar24 = (ulong)ppplStack_408 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar24 - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppplVar28[2] = ppplVar26;
    ppppuStack_5a0 =
         (undefined8 ****)CONCAT26(uStack_412,CONCAT24(sStack_414,CONCAT22(sStack_416,sStack_418)));
  }
  pppplStack_4f8 = pppplStack_2b8;
  pbStack_4b8 = (byte *)CONCAT71(pbStack_4b8._1_7_,uStack_224);
  ppplStack_598 = ppplStack_410;
  if (((ulong)ppplStack_410 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_410 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplStack_598 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplStack_590 = (long ***)0x0;
  ppplVar26 = ppplStack_408;
  if (((ulong)ppplStack_408 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_408 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppplVar28 = pppplStack_2b0;
  uVar24 = (ulong)ppplStack_270 & 0x80000000000000;
  uVar4 = (ushort)((ulong)ppplStack_270 >> 0x30);
  ppplStack_590 = ppplVar26;
  if (uVar24 == 0) {
    if (((ulong)ppplStack_270 & 0x7f000000000000) == 0) goto LAB_0c8c45df;
    uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c4597:
    if ((((uVar19 != 4) || (*(int *)((ulong)ppplStack_270 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_278 != 9999)) || ((uStack_278._2_2_ != 9999 || (uStack_278._4_2_ != 9999))))
    goto LAB_0c8c45df;
LAB_0c8c47f0:
    if (uVar24 == 0) {
      if (((ulong)ppplStack_270 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c4827:
        uVar20 = 3;
        if ((((uVar19 == 4) &&
             (piVar30 = (int *)((ulong)ppplStack_270 & 0xff00ffffffffffff), *piVar30 == 0x61746562))
            && ((short)uStack_278 == 9999)) &&
           ((uStack_278._2_2_ == 9999 && (uStack_278._4_2_ == 9999)))) {
          ppppuStack_5a0 = uStack_278;
          if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
            piVar30 = (int *)((ulong)ppplStack_270 & 0xff00ffffffffffff);
            uVar24 = (ulong)ppplStack_270 & 0x80000000000000;
          }
          ppplStack_598 = (long ***)0x0;
          ppplVar26 = ppplStack_270;
          if (uVar24 != 0) {
            lVar22 = *(long *)(piVar30 + -2);
            lVar21 = lVar22 + 9;
            plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
            if (lVar21 != 0 && plVar13 == (long *)0x0) {
              func_0x0eec74c0(lVar21,8);
            }
            *plVar13 = lVar22;
            func_0x0eee2f00(plVar13 + 1,piVar30,lVar22);
            *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
            ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          ppplStack_598 = ppplVar26;
          if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
          }
          ppplStack_590 = (long ***)0x0;
          uVar20 = 3;
          ppplVar26 = ppplStack_268;
          if (((ulong)ppplStack_268 & 0x80000000000000) != 0) {
            uVar24 = (ulong)ppplStack_268 & 0xff00ffffffffffff;
            lVar22 = *(long *)(uVar24 - 8);
            lVar21 = lVar22 + 9;
            plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8,3);
            if (lVar21 != 0 && plVar13 == (long *)0x0) {
              func_0x0eec74c0(lVar21,8);
            }
            *plVar13 = lVar22;
            func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
            *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
            uVar20 = 3;
            ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
        }
        goto LAB_0c8c4a24;
      }
    }
    else {
      uVar19 = *(ulong *)(((ulong)ppplStack_270 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0c8c4827;
    }
    uVar20 = 3;
  }
  else {
    uVar19 = *(ulong *)(((ulong)ppplStack_270 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0c8c4597;
LAB_0c8c45df:
    if (((ulong)ppplStack_410 & 0x80000000000000) != 0) {
      uVar19 = *(ulong *)(((ulong)ppplStack_410 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0c8c461e;
      goto LAB_0c8c47f0;
    }
    if (((ulong)ppplStack_410 & 0x7f000000000000) == 0) goto LAB_0c8c47f0;
    uVar19 = (ulong)((ushort)((ulong)ppplStack_410 >> 0x30) & 0x7f);
LAB_0c8c461e:
    if (((uVar19 != 4) || (*(int *)((ulong)ppplStack_410 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_418 != 9999 || ((sStack_416 != 9999 || (sStack_414 != 9999)))))) goto LAB_0c8c47f0;
    ppppuStack_5a0 = (undefined8 ****)*pppplStack_2b0;
    if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
    }
    ppplStack_598 = (long ***)0x0;
    ppplVar26 = pppplVar28[1];
    if (((ulong)ppplVar26 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppplVar26 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar26 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppplStack_598 = ppplVar26;
    if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
    }
    ppplStack_590 = (long ***)0x0;
    ppplVar26 = pppplVar28[2];
    uVar20 = 1;
    if (((ulong)ppplVar26 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppplVar26 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8,1);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar26 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      uVar20 = 1;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0c8c4a24:
  ppplStack_590 = ppplVar26;
  func_0x0d6b3300(&ppppuStack_538,&uStack_278,&ppppuStack_5a0,uVar20);
  if ((CONCAT44(uStack_28c,uStack_290) == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_014bf0de),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((ppplStack_2a8 == (long ***)0x0) || (*(char *)ppplStack_2a8 != '\x01')) {
    cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_014bf0de);
    if (cVar11 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppuVar23 = (undefined8 ****)CONCAT44(uStack_28c,uStack_290);
    if ((ppplStack_2a8 == (long ***)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    ppppuVar23 = (undefined8 ****)CONCAT44(uStack_28c,uStack_290);
  }
  if ((*(char *)ppplStack_2a8 == '\0') &&
     (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppplVar28 = pppplStack_298;
  pppplVar15 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppplVar15 == (long ****)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppppuStack_4b0 = uStack_278;
  pppplStack_4c0 = pppplVar28;
  pppplStack_4c8 = uStack_278;
  ppplVar26 = ppplStack_270;
  ppppuStack_498 = ppppuVar23;
  if (((ulong)ppplStack_270 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_270 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_4a0 = 0;
  ppplStack_4d8 = ppplStack_268;
  if (((ulong)ppplStack_268 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_268 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    ppplStack_4a8 = ppplVar26;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplStack_4d8 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uVar6 = uStack_226;
  uStack_560 = (long ***)uStack_510;
  pppppuStack_568 = (undefined8 *****)uStack_518;
  pppplStack_578 = ppppuStack_528;
  pppplStack_580 = ppppuStack_530;
  uStack_448 = (long ***)CONCAT62(uStack_448._2_6_,uStack_508);
  ppplStack_4a8 = (long ***)0x0;
  uStack_4a0 = 0;
  pppplStack_478 = ppppuStack_538;
  ppppuStack_530 = (undefined8 ****)0x0;
  ppppuStack_528 = (undefined8 ****)0x0;
  pppplStack_588 = ppppuStack_538;
  pppplStack_470 = (undefined8 ****)0x0;
  ppplStack_468 = (long ***)0x0;
  uStack_570 = uStack_520;
  uStack_56c = uStack_51c;
  pppplStack_458 = (long ****)0x0;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_450 = (long ***)0x0;
  uStack_558 = CONCAT22(uStack_558._2_2_,uStack_508);
  ppppuStack_4e8 = pppplStack_4c8;
  ppplStack_4e0 = ppplVar26;
  func_0x0d6a8a30(pppplVar15,pppplStack_4c0,&ppppuStack_4e8,&pppplStack_588);
  if (((ulong)uStack_560 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_560 & 0xff00ffffffffffff) - 8);
  }
  uStack_560 = (long ***)0x0;
  if (((ulong)pppppuStack_568 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppuStack_568 & 0xff00ffffffffffff) - 8);
  }
  pppppuStack_568 = (undefined8 *****)0x0;
  if (((ulong)pppplStack_578 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_578 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_578 = (long ****)0x0;
  if (((ulong)pppplStack_580 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_580 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_580 = (long ****)0x0;
  if (((ulong)ppplStack_4d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_4d8 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_4d8 = (long ***)0x0;
  if (((ulong)ppplStack_4e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_4e0 & 0xff00ffffffffffff) - 8);
  }
  *pppplVar15 = (long ***)&UNK_0f3e2948;
  pppplVar15[0xe] = (long ***)ppppuStack_498;
  *(undefined2 *)(pppplVar15 + 0xf) = uVar6;
  *(undefined1 *)((long)pppplVar15 + 0x7a) = pbStack_4b8._0_1_;
  pppplStack_588 = pppplVar15;
  if ((uStack_510 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_510 & 0xff00ffffffffffff) - 8);
  }
  uStack_510 = 0;
  if ((uStack_518 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_518 & 0xff00ffffffffffff) - 8);
  }
  uStack_518 = 0;
  if (((ulong)ppppuStack_528 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppuStack_528 & 0xff00ffffffffffff) - 8);
  }
  ppppuStack_528 = (undefined8 ****)0x0;
  if (((ulong)ppppuStack_530 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppuStack_530 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_590 = (long ***)0x0;
  if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
  }
  if (pppplStack_588 != (long ****)0x0) {
    ppplVar26 = *pppplStack_4f8;
    ppplVar29 = pppplStack_4f8[1];
    while ((ppplVar26 != ppplVar29 &&
           (cVar11 = FUN_04fa7a10(*ppplVar26 + 4,pppplStack_588 + 7), cVar11 != '\0'))) {
      ppplVar26 = ppplVar26 + 1;
    }
    func_0x0d6af860(pppplStack_4f8,ppplVar26,&pppplStack_588);
    pppplVar28 = pppplStack_588;
    pppplStack_588 = (long ****)0x0;
    if (pppplVar28 != (long ****)0x0) {
      (*(code *)(*pppplVar28)[1])();
    }
  }
  pppplVar28 = pppplStack_2b8;
  uStack_228 = 0;
  if (((ulong)ppplStack_410 & 0x80000000000000) == 0) {
    if (((ulong)ppplStack_410 & 0x7f000000000000) == 0) goto LAB_0c8c5161;
    uVar24 = (ulong)((ushort)((ulong)ppplStack_410 >> 0x30) & 0x7f);
LAB_0c8c511f:
    if ((((uVar24 != 4) || (*(int *)((ulong)ppplStack_410 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_418 != 9999)) || ((sStack_416 != 9999 || (sStack_414 != 9999)))) goto LAB_0c8c5161;
  }
  else {
    uVar24 = *(ulong *)(((ulong)ppplStack_410 & 0xff00ffffffffffff) - 8);
    if (uVar24 != 0) goto LAB_0c8c511f;
LAB_0c8c5161:
    if (((ppplStack_2a8 == (long ***)0x0) || (*(char *)ppplStack_2a8 == '\0')) &&
       (cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_0129b7fb),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((CONCAT44(uStack_284,uStack_288) == 0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_0129b7fb),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((ppplStack_2a8 == (long ***)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)ppplStack_2a8 == '\0') &&
       (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppplVar15 = pppplStack_298;
    pppplVar16 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (pppplVar16 == (long ****)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(pppplVar16,&uStack_278,&sStack_418);
    pppplVar16[8] = (long ***)0x0;
    pppplVar16[9] = (long ***)0x0;
    pppplVar16[10] = (long ***)0x0;
    ppplVar26 = pppplVar15[1];
    ppplVar29 = pppplVar15[2];
    if (ppplVar29 == (long ***)0x0) {
      pppplVar16[8] = ppplVar26;
      pppplVar16[9] = (long ***)0x0;
    }
    else {
      LOCK();
      ppplVar29[1] = (long **)((long)ppplVar29[1] + 1);
      UNLOCK();
      ppplVar12 = pppplVar16[9];
      pppplVar16[8] = ppplVar26;
      pppplVar16[9] = ppplVar29;
      if (ppplVar12 != (long ***)0x0) {
        LOCK();
        ppplVar26 = ppplVar12 + 1;
        pplVar3 = *ppplVar26;
        *ppplVar26 = (long **)((long)*ppplVar26 + -1);
        UNLOCK();
        if (pplVar3 == (long **)0x0) {
          (*(code *)(*ppplVar12)[2])(ppplVar12);
          func_0x0412c2d0(ppplVar12);
        }
        ppplVar26 = pppplVar16[8];
      }
    }
    if ((ppplVar26 == (long ***)0x0) ||
       (pppplVar16[10] = (long ***)pppplVar15, *(char *)ppplVar26 == '\0')) goto LAB_0c8c96c6;
    pppplVar16[0xe] = (long ***)0x0;
    pppplVar16[0xf] = (long ***)0x0;
    pppplVar16[0xc] = (long ***)0x0;
    pppplVar16[0xd] = (long ***)0x0;
    *(undefined4 *)(pppplVar16 + 0x10) = 0x3f800000;
    *(undefined1 *)(pppplVar16 + 0x12) = 0;
    *(undefined1 *)(pppplVar16 + 0x24) = 0;
    *pppplVar16 = (long ***)&UNK_0f3e2a00;
    pppplVar16[0x30] = (long ***)0x0;
    pppplVar16[0x32] = (long ***)0x0;
    pppplVar16[0x2a] = (long ***)(pppplVar16 + 0x26);
    pppplVar16[0x26] = (long ***)&UNK_0f3e2d08;
    pppplVar16[0x27] = (long ***)&UNK_0c8d55e0;
    pppplStack_588 = pppplVar16;
    func_0x0d6afb30(pppplVar28,&pppplStack_588);
    if (pppplStack_588 != (long ****)0x0) {
      (*(code *)(*pppplStack_588)[1])();
    }
  }
  pppplStack_218 = pppplStack_2b8;
  pppplStack_210 = pppplStack_2b0;
  ppplStack_208 = ppplStack_2a8;
  ppplStack_200 = ppplStack_2a0;
  ppplStack_2a8 = (long ***)0x0;
  ppplStack_2a0 = (long ***)0x0;
  pppplStack_1f8 = pppplStack_298;
  pppplStack_298 = (long ****)0x0;
  uStack_1f0 = uStack_290;
  uStack_1ec = uStack_28c;
  uStack_1e8 = uStack_288;
  uStack_1e4 = uStack_284;
  pppplStack_1e0 = pppplStack_280;
  uStack_1d8 = (undefined8 ****)
               CONCAT26(uStack_412,CONCAT24(sStack_414,CONCAT22(sStack_416,sStack_418)));
  ppplStack_1d0 = (long ***)0x0;
  ppplVar26 = ppplStack_410;
  if (((ulong)ppplStack_410 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_410 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplStack_1c8 = (long ***)0x0;
  ppplVar29 = ppplStack_408;
  ppplStack_1d0 = ppplVar26;
  if (((ulong)ppplStack_408 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_408 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_198 = 0;
  uStack_188 = 1;
  uStack_186 = 0xfffc;
  uStack_184 = 1;
  ppplStack_1c8 = ppplVar29;
  func_0x05d54750(&sStack_430,&UNK_0f3e2ec8);
  pppplVar28 = pppplStack_1e0;
  ppppuVar23 = (undefined8 ****)
               CONCAT26(uStack_42a,CONCAT24(sStack_42c,CONCAT22(sStack_42e,sStack_430)));
  if (*(char *)((long)pppplStack_1e0 + 6) == '\0') {
    *pppplStack_1e0 = (long ***)ppppuVar23;
    if (((ulong)pppplStack_1e0[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplStack_1e0[1] & 0xff00ffffffffffff) - 8);
    }
    pppplVar28[1] = (long ***)0x0;
    ppplVar26 = ppplStack_428;
    if (((ulong)ppplStack_428 & 0x80000000000000) != 0) {
      uVar24 = (ulong)ppplStack_428 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar24 - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppplVar28[1] = ppplVar26;
    if (((ulong)pppplVar28[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplVar28[2] & 0xff00ffffffffffff) - 8);
    }
    pppplVar28[2] = (long ***)0x0;
    ppplVar26 = ppplStack_420;
    if (((ulong)ppplStack_420 & 0x80000000000000) != 0) {
      uVar24 = (ulong)ppplStack_420 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar24 - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppplVar28[2] = ppplVar26;
    ppppuVar23 = (undefined8 ****)
                 CONCAT26(uStack_42a,CONCAT24(sStack_42c,CONCAT22(sStack_42e,sStack_430)));
  }
  pppplStack_4f8 = pppplStack_218;
  pbStack_4b8 = (byte *)CONCAT71(pbStack_4b8._1_7_,uStack_184);
  ppplVar26 = ppplStack_428;
  ppppuStack_5a0 = ppppuVar23;
  if (((ulong)ppplStack_428 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_428 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplStack_590 = (long ***)0x0;
  ppplVar29 = ppplStack_420;
  ppplStack_598 = ppplVar26;
  if (((ulong)ppplStack_420 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_420 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppplVar28 = pppplStack_210;
  uVar24 = (ulong)ppplStack_1d0 & 0x80000000000000;
  uVar4 = (ushort)((ulong)ppplStack_1d0 >> 0x30);
  ppplStack_590 = ppplVar29;
  if (uVar24 == 0) {
    if (((ulong)ppplStack_1d0 & 0x7f000000000000) == 0) goto LAB_0c8c58e4;
    uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c589c:
    if ((((uVar19 != 4) || (*(int *)((ulong)ppplStack_1d0 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_1d8 != 9999)) || ((uStack_1d8._2_2_ != 9999 || (uStack_1d8._4_2_ != 9999))))
    goto LAB_0c8c58e4;
LAB_0c8c5af5:
    if (uVar24 == 0) {
      if (((ulong)ppplStack_1d0 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c5b2c:
        uVar20 = 3;
        if ((((uVar19 == 4) &&
             (piVar30 = (int *)((ulong)ppplStack_1d0 & 0xff00ffffffffffff), *piVar30 == 0x61746562))
            && ((short)uStack_1d8 == 9999)) &&
           ((uStack_1d8._2_2_ == 9999 && (uStack_1d8._4_2_ == 9999)))) {
          ppppuStack_5a0 = uStack_1d8;
          if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
            piVar30 = (int *)((ulong)ppplStack_1d0 & 0xff00ffffffffffff);
            uVar24 = (ulong)ppplStack_1d0 & 0x80000000000000;
          }
          ppplStack_598 = (long ***)0x0;
          ppplVar26 = ppplStack_1d0;
          if (uVar24 != 0) {
            lVar22 = *(long *)(piVar30 + -2);
            lVar21 = lVar22 + 9;
            plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
            if (lVar21 != 0 && plVar13 == (long *)0x0) {
              func_0x0eec74c0(lVar21,8);
            }
            *plVar13 = lVar22;
            func_0x0eee2f00(plVar13 + 1,piVar30,lVar22);
            *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
            ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          ppplStack_598 = ppplVar26;
          if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
          }
          ppplStack_590 = (long ***)0x0;
          uVar20 = 3;
          ppplVar29 = ppplStack_1c8;
          if (((ulong)ppplStack_1c8 & 0x80000000000000) != 0) {
            uVar24 = (ulong)ppplStack_1c8 & 0xff00ffffffffffff;
            lVar22 = *(long *)(uVar24 - 8);
            lVar21 = lVar22 + 9;
            plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8,3);
            if (lVar21 != 0 && plVar13 == (long *)0x0) {
              func_0x0eec74c0(lVar21,8);
            }
            *plVar13 = lVar22;
            func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
            *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
            uVar20 = 3;
            ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
        }
        goto LAB_0c8c5d29;
      }
    }
    else {
      uVar19 = *(ulong *)(((ulong)ppplStack_1d0 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0c8c5b2c;
    }
    uVar20 = 3;
  }
  else {
    uVar19 = *(ulong *)(((ulong)ppplStack_1d0 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0c8c589c;
LAB_0c8c58e4:
    if (((ulong)ppplStack_428 & 0x80000000000000) != 0) {
      uVar19 = *(ulong *)(((ulong)ppplStack_428 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0c8c5923;
      goto LAB_0c8c5af5;
    }
    if (((ulong)ppplStack_428 & 0x7f000000000000) == 0) goto LAB_0c8c5af5;
    uVar19 = (ulong)((ushort)((ulong)ppplStack_428 >> 0x30) & 0x7f);
LAB_0c8c5923:
    if (((uVar19 != 4) || (*(int *)((ulong)ppplStack_428 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_430 != 9999 || ((sStack_42e != 9999 || (sStack_42c != 9999)))))) goto LAB_0c8c5af5;
    ppppuStack_5a0 = (undefined8 ****)*pppplStack_210;
    if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
    }
    ppplStack_598 = (long ***)0x0;
    ppplVar26 = pppplVar28[1];
    if (((ulong)ppplVar26 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppplVar26 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar26 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppplStack_598 = ppplVar26;
    if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
    }
    ppplStack_590 = (long ***)0x0;
    ppplVar29 = pppplVar28[2];
    uVar20 = 1;
    if (((ulong)ppplVar29 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppplVar29 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8,1);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar29 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      uVar20 = 1;
      ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0c8c5d29:
  ppplStack_590 = ppplVar29;
  func_0x0d6b3300(&ppppuStack_538,&uStack_1d8,&ppppuStack_5a0,uVar20);
  if ((CONCAT44(uStack_1ec,uStack_1f0) == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_013a21d5),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((ppplStack_208 == (long ***)0x0) || (*(char *)ppplStack_208 != '\x01')) {
    cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_013a21d5);
    if (cVar11 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppuVar23 = (undefined8 ****)CONCAT44(uStack_1ec,uStack_1f0);
    if ((ppplStack_208 == (long ***)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    ppppuVar23 = (undefined8 ****)CONCAT44(uStack_1ec,uStack_1f0);
  }
  if ((*(char *)ppplStack_208 == '\0') &&
     (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppplVar28 = pppplStack_1f8;
  pppplVar15 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppplVar15 == (long ****)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pppplStack_4c0 = pppplVar28;
  ppppuStack_4b0 = uStack_1d8;
  ppplVar26 = ppplStack_1d0;
  pppplStack_4c8 = ppppuVar23;
  if (((ulong)ppplStack_1d0 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_1d0 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_4a0 = 0;
  ppplVar29 = ppplStack_1c8;
  if (((ulong)ppplStack_1c8 & 0x80000000000000) != 0) {
    ppppuStack_498 = uStack_1d8;
    uVar24 = (ulong)ppplStack_1c8 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    ppplStack_4a8 = ppplVar26;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    uStack_1d8 = ppppuStack_498;
  }
  uVar6 = uStack_186;
  uStack_560 = (long ***)uStack_510;
  pppppuStack_568 = (undefined8 *****)uStack_518;
  pppplStack_578 = ppppuStack_528;
  pppplStack_580 = ppppuStack_530;
  uStack_448 = (long ***)CONCAT62(uStack_448._2_6_,uStack_508);
  ppplStack_4a8 = (long ***)0x0;
  uStack_4a0 = 0;
  pppplStack_478 = ppppuStack_538;
  ppppuStack_530 = (undefined8 ****)0x0;
  ppppuStack_528 = (undefined8 ****)0x0;
  pppplStack_588 = ppppuStack_538;
  pppplStack_470 = (undefined8 ****)0x0;
  ppplStack_468 = (long ***)0x0;
  uStack_570 = uStack_520;
  uStack_56c = uStack_51c;
  pppplStack_458 = (long ****)0x0;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_450 = (long ***)0x0;
  uStack_558 = CONCAT22(uStack_558._2_2_,uStack_508);
  ppppuStack_4e8 = uStack_1d8;
  ppplStack_4e0 = ppplVar26;
  ppplStack_4d8 = ppplVar29;
  func_0x0d6a8a30(pppplVar15,pppplStack_4c0,&ppppuStack_4e8,&pppplStack_588);
  if (((ulong)uStack_560 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_560 & 0xff00ffffffffffff) - 8);
  }
  uStack_560 = (long ***)0x0;
  if (((ulong)pppppuStack_568 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppuStack_568 & 0xff00ffffffffffff) - 8);
  }
  pppppuStack_568 = (undefined8 *****)0x0;
  if (((ulong)pppplStack_578 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_578 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_578 = (long ****)0x0;
  if (((ulong)pppplStack_580 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_580 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_580 = (long ****)0x0;
  if (((ulong)ppplStack_4d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_4d8 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_4d8 = (long ***)0x0;
  if (((ulong)ppplStack_4e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_4e0 & 0xff00ffffffffffff) - 8);
  }
  *pppplVar15 = (long ***)&UNK_0f3e2db8;
  pppplVar15[0xe] = (long ***)pppplStack_4c8;
  *(undefined2 *)(pppplVar15 + 0xf) = uVar6;
  *(undefined1 *)((long)pppplVar15 + 0x7a) = pbStack_4b8._0_1_;
  pppplStack_588 = pppplVar15;
  if ((uStack_510 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_510 & 0xff00ffffffffffff) - 8);
  }
  uStack_510 = 0;
  if ((uStack_518 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_518 & 0xff00ffffffffffff) - 8);
  }
  uStack_518 = 0;
  if (((ulong)ppppuStack_528 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppuStack_528 & 0xff00ffffffffffff) - 8);
  }
  ppppuStack_528 = (undefined8 ****)0x0;
  if (((ulong)ppppuStack_530 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppuStack_530 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_590 = (long ***)0x0;
  if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
  }
  if (pppplStack_588 != (long ****)0x0) {
    ppplVar26 = *pppplStack_4f8;
    ppplVar29 = pppplStack_4f8[1];
    while ((ppplVar26 != ppplVar29 &&
           (cVar11 = FUN_04fa7a10(*ppplVar26 + 4,pppplStack_588 + 7), cVar11 != '\0'))) {
      ppplVar26 = ppplVar26 + 1;
    }
    func_0x0d6af860(pppplStack_4f8,ppplVar26,&pppplStack_588);
    pppplVar28 = pppplStack_588;
    pppplStack_588 = (long ****)0x0;
    if (pppplVar28 != (long ****)0x0) {
      (*(code *)(*pppplVar28)[1])();
    }
  }
  pppplVar28 = pppplStack_218;
  uStack_188 = 0;
  if (((ulong)ppplStack_428 & 0x80000000000000) == 0) {
    if (((ulong)ppplStack_428 & 0x7f000000000000) == 0) goto LAB_0c8c6461;
    uVar24 = (ulong)((ushort)((ulong)ppplStack_428 >> 0x30) & 0x7f);
LAB_0c8c641f:
    if ((((uVar24 != 4) || (*(int *)((ulong)ppplStack_428 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_430 != 9999)) || ((sStack_42e != 9999 || (sStack_42c != 9999)))) goto LAB_0c8c6461;
  }
  else {
    uVar24 = *(ulong *)(((ulong)ppplStack_428 & 0xff00ffffffffffff) - 8);
    if (uVar24 != 0) goto LAB_0c8c641f;
LAB_0c8c6461:
    if (((ppplStack_208 == (long ***)0x0) || (*(char *)ppplStack_208 == '\0')) &&
       (cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_0131b9c5),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((CONCAT44(uStack_1e4,uStack_1e8) == 0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_0131b9c5),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((ppplStack_208 == (long ***)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)ppplStack_208 == '\0') &&
       (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppplVar16 = pppplStack_1f8;
    pppplVar15 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (pppplVar15 == (long ****)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(pppplVar15,&uStack_1d8,&sStack_430);
    pppplVar15[8] = (long ***)0x0;
    pppplVar15[9] = (long ***)0x0;
    pppplVar15[10] = (long ***)0x0;
    ppplVar26 = pppplVar16[1];
    ppplVar29 = pppplVar16[2];
    if (ppplVar29 == (long ***)0x0) {
      pppplVar15[8] = ppplVar26;
      pppplVar15[9] = (long ***)0x0;
    }
    else {
      LOCK();
      ppplVar29[1] = (long **)((long)ppplVar29[1] + 1);
      UNLOCK();
      ppplVar12 = pppplVar15[9];
      pppplVar15[8] = ppplVar26;
      pppplVar15[9] = ppplVar29;
      if (ppplVar12 != (long ***)0x0) {
        LOCK();
        ppplVar26 = ppplVar12 + 1;
        pplVar3 = *ppplVar26;
        *ppplVar26 = (long **)((long)*ppplVar26 + -1);
        UNLOCK();
        if (pplVar3 == (long **)0x0) {
          (*(code *)(*ppplVar12)[2])(ppplVar12);
          func_0x0412c2d0(ppplVar12);
        }
        ppplVar26 = pppplVar15[8];
      }
    }
    if ((ppplVar26 == (long ***)0x0) ||
       (pppplVar15[10] = (long ***)pppplVar16, *(char *)ppplVar26 == '\0')) goto LAB_0c8c96c6;
    pppplVar15[0xe] = (long ***)0x0;
    pppplVar15[0xf] = (long ***)0x0;
    pppplVar15[0xc] = (long ***)0x0;
    pppplVar15[0xd] = (long ***)0x0;
    *(undefined4 *)(pppplVar15 + 0x10) = 0x3f800000;
    *(undefined1 *)(pppplVar15 + 0x12) = 0;
    *(undefined1 *)(pppplVar15 + 0x24) = 0;
    *pppplVar15 = (long ***)&UNK_0f3e2df8;
    pppplVar15[0x2a] = (long ***)0x0;
    pppplVar15[0x30] = (long ***)0x0;
    pppplVar15[0x32] = (long ***)0x0;
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar20 = _UNK_01df4741;
    *(ulong *)((long)puVar17 + 9) = CONCAT17(UNK_01df4740,_DAT_01df4739);
    *(undefined8 *)((long)puVar17 + 0x11) = uVar20;
    uVar20 = CONCAT71(_DAT_01df4739,UNK_01df4738);
    *puVar17 = _DAT_01df4730;
    puVar17[1] = uVar20;
    *(undefined1 *)((long)puVar17 + 0x19) = 0;
    ppppuStack_538 = (undefined8 ****)0x0;
    ppppuStack_530 = (undefined8 ****)0x0;
    ppppuStack_528 = (undefined8 ****)0x0;
    pppplStack_470 = (long ****)((ulong)pppplStack_470 & 0xffffffffffffff00);
    pppplStack_478 = (long ****)&ppppuStack_538;
    ppppuVar23 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (ppppuVar23 == (undefined8 ****)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    ppppuStack_528 = ppppuVar23 + 6;
    pppplStack_580 = (long ****)&ppppuStack_4b0;
    pppplStack_578 = (long ****)&ppppuStack_4e8;
    uStack_570 = uStack_570 & 0xffffff00;
    *ppppuVar23 = (undefined8 ***)0x656e6f706d6f6314;
    ppppuVar23[1] = (undefined8 ***)0x73746e;
    ppppuStack_4e8 = ppppuVar23 + 3;
    pppplStack_588 = (long ****)&ppppuStack_538;
    ppppuStack_538 = ppppuVar23;
    ppppuStack_530 = ppppuVar23;
    ppppuStack_4b0 = ppppuVar23;
    func_0x0412e5e0(ppppuStack_4e8,puVar17,0x19);
    ppppuStack_530 = ppppuStack_4e8 + 3;
    pppplStack_588 = (long ****)&UNK_0f3e2f00;
    pppplStack_580 = (long ****)&UNK_0db394f0;
    pppppuStack_568 = &pppplStack_588;
    pppplStack_478 = (undefined8 ****)0x0;
    pppplStack_470 = (undefined8 ****)0x0;
    ppplStack_468 = (long ***)0x0;
    ppppuStack_4e8 = (undefined8 ****)0x0;
    ppplStack_4e0 = (long ***)0x0;
    ppplStack_4d8 = (long ***)0x0;
    func_0x0d6ae430(pppplVar15 + 8,pppppuStack_568,&ppppuStack_538,&pppplStack_478);
    pppplVar5 = pppplStack_478;
    pppplVar16 = pppplStack_470;
    if (pppplStack_478 != (undefined8 ****)0x0) {
      for (; pppplVar5 != pppplVar16; pppplVar16 = pppplVar16 + -3) {
        if (((ulong)pppplVar16[-3] & 1) != 0) {
          func_0x0412a280(pppplVar16[-1],(ulong)pppplVar16[-3] & 0xfffffffffffffffe);
        }
      }
      pppplStack_470 = pppplVar5;
      func_0x0412a280(pppplStack_478,(long)ppplStack_468 - (long)pppplStack_478);
    }
    if (pppppuStack_568 == &pppplStack_588) {
      lVar21 = 0x20;
LAB_0c8c688d:
      (**(code **)((long)*pppppuStack_568 + lVar21))();
      ppppuVar23 = ppppuStack_538;
    }
    else {
      lVar21 = 0x28;
      ppppuVar23 = ppppuStack_538;
      if (pppppuStack_568 != (undefined8 *****)0x0) goto LAB_0c8c688d;
    }
    ppppuStack_538 = ppppuVar23;
    ppppuVar18 = ppppuStack_530;
    if (ppppuVar23 != (undefined8 ****)0x0) {
      for (; ppppuVar23 != ppppuVar18; ppppuVar18 = ppppuVar18 + -3) {
        if (((ulong)ppppuVar18[-3] & 1) != 0) {
          func_0x0412a280(ppppuVar18[-1],(ulong)ppppuVar18[-3] & 0xfffffffffffffffe);
        }
      }
      ppppuStack_530 = ppppuVar23;
      func_0x0412a280(ppppuStack_538,(long)ppppuStack_528 - (long)ppppuStack_538);
    }
    func_0x0412a280(puVar17,0x20);
    pppplStack_588 = pppplVar15;
    func_0x0d6afb30(pppplVar28,&pppplStack_588);
    if (pppplStack_588 != (long ****)0x0) {
      (*(code *)(*pppplStack_588)[1])();
    }
  }
  pppplStack_178 = pppplStack_218;
  pppplStack_170 = pppplStack_210;
  ppplStack_168 = ppplStack_208;
  uStack_160 = ppplStack_200;
  ppplStack_208 = (long ***)0x0;
  ppplStack_200 = (long ***)0x0;
  pppplStack_158 = pppplStack_1f8;
  pppplStack_1f8 = (long ****)0x0;
  uStack_150 = uStack_1f0;
  uStack_14c = uStack_1ec;
  uStack_148 = uStack_1e8;
  uStack_144 = uStack_1e4;
  pppplStack_140 = pppplStack_1e0;
  uStack_138 = (undefined8 ****)
               CONCAT26(uStack_42a,CONCAT24(sStack_42c,CONCAT22(sStack_42e,sStack_430)));
  ppplStack_130 = (long ***)0x0;
  ppplVar26 = ppplStack_428;
  if (((ulong)ppplStack_428 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_428 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplStack_128 = (long ***)0x0;
  ppplVar29 = ppplStack_420;
  ppplStack_130 = ppplVar26;
  if (((ulong)ppplStack_420 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_420 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_f8 = 0;
  uStack_e8 = 1;
  uStack_e6 = 0xfffc;
  uStack_e4 = 1;
  uStack_490 = (undefined8 ****)0x1270f270f270f;
  ppplStack_128 = ppplVar29;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,0xd,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xd,8);
  }
  pppplVar28 = pppplStack_140;
  *puVar17 = 4;
  *(undefined4 *)(puVar17 + 1) = 0x61746562;
  *(undefined1 *)((long)puVar17 + 0xc) = 0;
  ppplStack_488 = (long ***)((ulong)(puVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  ppplStack_480 = (long ***)0x0;
  if (*(char *)((long)pppplStack_140 + 6) == '\0') {
    *pppplStack_140 = (long ***)uStack_490;
    if (((ulong)pppplStack_140[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplStack_140[1] & 0xff00ffffffffffff) - 8);
    }
    pppplVar28[1] = (long ***)0x0;
    ppplVar26 = ppplStack_488;
    if (((ulong)ppplStack_488 & 0x80000000000000) != 0) {
      uVar24 = (ulong)ppplStack_488 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar24 - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppplVar28[1] = ppplVar26;
    if (((ulong)pppplVar28[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplVar28[2] & 0xff00ffffffffffff) - 8);
    }
    pppplVar28[2] = (long ***)0x0;
    ppplVar26 = ppplStack_480;
    if (((ulong)ppplStack_480 & 0x80000000000000) != 0) {
      uVar24 = (ulong)ppplStack_480 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar24 - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppplVar28[2] = ppplVar26;
  }
  pppplStack_4f8 = pppplStack_178;
  pbStack_4b8 = (byte *)CONCAT71(pbStack_4b8._1_7_,uStack_e4);
  ppppuStack_5a0 = uStack_490;
  ppplVar26 = ppplStack_488;
  if (((ulong)ppplStack_488 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_488 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplStack_590 = (long ***)0x0;
  ppplVar29 = ppplStack_480;
  ppplStack_598 = ppplVar26;
  if (((ulong)ppplStack_480 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_480 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppplVar28 = pppplStack_170;
  uVar24 = (ulong)ppplStack_130 & 0x80000000000000;
  uVar4 = (ushort)((ulong)ppplStack_130 >> 0x30);
  ppplStack_590 = ppplVar29;
  if (uVar24 == 0) {
    if (((ulong)ppplStack_130 & 0x7f000000000000) == 0) goto LAB_0c8c6e93;
    uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c6e4b:
    if ((((uVar19 != 4) || (*(int *)((ulong)ppplStack_130 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_138 != 9999)) || ((uStack_138._2_2_ != 9999 || (uStack_138._4_2_ != 9999))))
    goto LAB_0c8c6e93;
LAB_0c8c70a4:
    if (uVar24 == 0) {
      if (((ulong)ppplStack_130 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c70db:
        uVar20 = 3;
        if ((((uVar19 == 4) &&
             (piVar30 = (int *)((ulong)ppplStack_130 & 0xff00ffffffffffff), *piVar30 == 0x61746562))
            && ((short)uStack_138 == 9999)) &&
           ((uStack_138._2_2_ == 9999 && (uStack_138._4_2_ == 9999)))) {
          ppppuStack_5a0 = uStack_138;
          if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
            piVar30 = (int *)((ulong)ppplStack_130 & 0xff00ffffffffffff);
            uVar24 = (ulong)ppplStack_130 & 0x80000000000000;
          }
          ppplStack_598 = (long ***)0x0;
          ppplVar26 = ppplStack_130;
          if (uVar24 != 0) {
            lVar22 = *(long *)(piVar30 + -2);
            lVar21 = lVar22 + 9;
            plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
            if (lVar21 != 0 && plVar13 == (long *)0x0) {
              func_0x0eec74c0(lVar21,8);
            }
            *plVar13 = lVar22;
            func_0x0eee2f00(plVar13 + 1,piVar30,lVar22);
            *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
            ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          ppplStack_598 = ppplVar26;
          if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
          }
          ppplStack_590 = (long ***)0x0;
          uVar20 = 3;
          ppplVar29 = ppplStack_128;
          if (((ulong)ppplStack_128 & 0x80000000000000) != 0) {
            uVar24 = (ulong)ppplStack_128 & 0xff00ffffffffffff;
            lVar22 = *(long *)(uVar24 - 8);
            lVar21 = lVar22 + 9;
            plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8,3);
            if (lVar21 != 0 && plVar13 == (long *)0x0) {
              func_0x0eec74c0(lVar21,8);
            }
            *plVar13 = lVar22;
            func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
            *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
            uVar20 = 3;
            ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
        }
        goto LAB_0c8c72d8;
      }
    }
    else {
      uVar19 = *(ulong *)(((ulong)ppplStack_130 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0c8c70db;
    }
    uVar20 = 3;
  }
  else {
    uVar19 = *(ulong *)(((ulong)ppplStack_130 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0c8c6e4b;
LAB_0c8c6e93:
    if (((ulong)ppplStack_488 & 0x80000000000000) != 0) {
      uVar19 = *(ulong *)(((ulong)ppplStack_488 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0c8c6ed2;
      goto LAB_0c8c70a4;
    }
    if (((ulong)ppplStack_488 & 0x7f000000000000) == 0) goto LAB_0c8c70a4;
    uVar19 = (ulong)((ushort)((ulong)ppplStack_488 >> 0x30) & 0x7f);
LAB_0c8c6ed2:
    if (((uVar19 != 4) || (*(int *)((ulong)ppplStack_488 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)uStack_490 != 9999 || ((uStack_490._2_2_ != 9999 || (uStack_490._4_2_ != 9999))))))
    goto LAB_0c8c70a4;
    ppppuStack_5a0 = (undefined8 ****)*pppplStack_170;
    if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
    }
    ppplStack_598 = (long ***)0x0;
    ppplVar26 = pppplVar28[1];
    if (((ulong)ppplVar26 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppplVar26 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar26 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppplStack_598 = ppplVar26;
    if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
    }
    ppplStack_590 = (long ***)0x0;
    ppplVar29 = pppplVar28[2];
    uVar20 = 1;
    if (((ulong)ppplVar29 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppplVar29 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8,1);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar29 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      uVar20 = 1;
      ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0c8c72d8:
  ppplStack_590 = ppplVar29;
  func_0x0d6b3300(&ppppuStack_538,&uStack_138,&ppppuStack_5a0,uVar20);
  if ((CONCAT44(uStack_14c,uStack_150) == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_012e8309),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((ppplStack_168 == (long ***)0x0) || (*(char *)ppplStack_168 != '\x01')) {
    cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_012e8309);
    if (cVar11 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppuStack_498 = (undefined8 ****)CONCAT44(uStack_14c,uStack_150);
    if ((ppplStack_168 == (long ***)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    ppppuStack_498 = (undefined8 ****)CONCAT44(uStack_14c,uStack_150);
  }
  if ((*(char *)ppplStack_168 == '\0') &&
     (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppplVar28 = pppplStack_158;
  pppplVar15 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppplVar15 == (long ****)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppppuStack_4b0 = uStack_138;
  pppplStack_4c0 = pppplVar28;
  pppplStack_4c8 = uStack_138;
  ppplVar26 = ppplStack_130;
  if (((ulong)ppplStack_130 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_130 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_4a0 = 0;
  ppplVar29 = ppplStack_128;
  if (((ulong)ppplStack_128 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_128 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    ppplStack_4a8 = ppplVar26;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uVar6 = uStack_e6;
  uStack_560 = (long ***)uStack_510;
  pppppuStack_568 = (undefined8 *****)uStack_518;
  pppplStack_578 = ppppuStack_528;
  pppplStack_580 = ppppuStack_530;
  uStack_448 = (long ***)CONCAT62(uStack_448._2_6_,uStack_508);
  ppplStack_4a8 = (long ***)0x0;
  uStack_4a0 = 0;
  pppplStack_478 = ppppuStack_538;
  ppppuStack_530 = (undefined8 ****)0x0;
  ppppuStack_528 = (undefined8 ****)0x0;
  pppplStack_588 = ppppuStack_538;
  pppplStack_470 = (undefined8 ****)0x0;
  ppplStack_468 = (long ***)0x0;
  uStack_570 = uStack_520;
  uStack_56c = uStack_51c;
  pppplStack_458 = (long ****)0x0;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_450 = (long ***)0x0;
  uStack_558 = CONCAT22(uStack_558._2_2_,uStack_508);
  ppppuStack_4e8 = pppplStack_4c8;
  ppplStack_4e0 = ppplVar26;
  ppplStack_4d8 = ppplVar29;
  func_0x0d6a8a30(pppplVar15,pppplStack_4c0,&ppppuStack_4e8,&pppplStack_588);
  if (((ulong)uStack_560 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_560 & 0xff00ffffffffffff) - 8);
  }
  uStack_560 = (long ***)0x0;
  if (((ulong)pppppuStack_568 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppuStack_568 & 0xff00ffffffffffff) - 8);
  }
  pppppuStack_568 = (undefined8 *****)0x0;
  if (((ulong)pppplStack_578 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_578 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_578 = (long ****)0x0;
  if (((ulong)pppplStack_580 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_580 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_580 = (long ****)0x0;
  if (((ulong)ppplStack_4d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_4d8 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_4d8 = (long ***)0x0;
  if (((ulong)ppplStack_4e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_4e0 & 0xff00ffffffffffff) - 8);
  }
  *pppplVar15 = (long ***)&UNK_0f3e2f80;
  pppplVar15[0xe] = (long ***)ppppuStack_498;
  *(undefined2 *)(pppplVar15 + 0xf) = uVar6;
  *(undefined1 *)((long)pppplVar15 + 0x7a) = pbStack_4b8._0_1_;
  pppplStack_588 = pppplVar15;
  if ((uStack_510 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_510 & 0xff00ffffffffffff) - 8);
  }
  uStack_510 = 0;
  if ((uStack_518 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_518 & 0xff00ffffffffffff) - 8);
  }
  uStack_518 = 0;
  if (((ulong)ppppuStack_528 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppuStack_528 & 0xff00ffffffffffff) - 8);
  }
  ppppuStack_528 = (undefined8 ****)0x0;
  if (((ulong)ppppuStack_530 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppuStack_530 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_590 = (long ***)0x0;
  if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
  }
  if (pppplStack_588 != (long ****)0x0) {
    ppplVar26 = *pppplStack_4f8;
    ppplVar29 = pppplStack_4f8[1];
    while ((ppplVar26 != ppplVar29 &&
           (cVar11 = FUN_04fa7a10(*ppplVar26 + 4,pppplStack_588 + 7), cVar11 != '\0'))) {
      ppplVar26 = ppplVar26 + 1;
    }
    func_0x0d6af860(pppplStack_4f8,ppplVar26,&pppplStack_588);
    pppplVar28 = pppplStack_588;
    pppplStack_588 = (long ****)0x0;
    if (pppplVar28 != (long ****)0x0) {
      (*(code *)(*pppplVar28)[1])();
    }
  }
  pppplVar16 = pppplStack_178;
  uStack_e8 = 0;
  if (((ulong)ppplStack_488 & 0x80000000000000) == 0) {
    if (((ulong)ppplStack_488 & 0x7f000000000000) == 0) goto LAB_0c8c7a31;
    uVar24 = (ulong)((ushort)((ulong)ppplStack_488 >> 0x30) & 0x7f);
LAB_0c8c79ef:
    if ((((uVar24 != 4) || (*(int *)((ulong)ppplStack_488 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_490 != 9999)) || ((uStack_490._2_2_ != 9999 || (uStack_490._4_2_ != 9999))))
    goto LAB_0c8c7a31;
  }
  else {
    uVar24 = *(ulong *)(((ulong)ppplStack_488 & 0xff00ffffffffffff) - 8);
    if (uVar24 != 0) goto LAB_0c8c79ef;
LAB_0c8c7a31:
    if (((ppplStack_168 == (long ***)0x0) || (*(char *)ppplStack_168 == '\0')) &&
       (cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_013875da),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((CONCAT44(uStack_144,uStack_148) == 0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_013875da),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((ppplStack_168 == (long ***)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)ppplStack_168 == '\0') &&
       (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppplVar28 = pppplStack_158;
    pppplVar15 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (pppplVar15 == (long ****)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(pppplVar15,&uStack_138,&uStack_490);
    pppplVar15[8] = (long ***)0x0;
    pppplVar15[9] = (long ***)0x0;
    pppplVar15[10] = (long ***)0x0;
    ppplVar26 = pppplVar28[1];
    ppplVar29 = pppplVar28[2];
    if (ppplVar29 == (long ***)0x0) {
      pppplVar15[8] = ppplVar26;
      pppplVar15[9] = (long ***)0x0;
    }
    else {
      LOCK();
      ppplVar29[1] = (long **)((long)ppplVar29[1] + 1);
      UNLOCK();
      ppplVar12 = pppplVar15[9];
      pppplVar15[8] = ppplVar26;
      pppplVar15[9] = ppplVar29;
      if (ppplVar12 != (long ***)0x0) {
        LOCK();
        ppplVar26 = ppplVar12 + 1;
        pplVar3 = *ppplVar26;
        *ppplVar26 = (long **)((long)*ppplVar26 + -1);
        UNLOCK();
        if (pplVar3 == (long **)0x0) {
          (*(code *)(*ppplVar12)[2])(ppplVar12);
          func_0x0412c2d0(ppplVar12);
        }
        ppplVar26 = pppplVar15[8];
      }
    }
    if ((ppplVar26 == (long ***)0x0) ||
       (pppplVar15[10] = (long ***)pppplVar28, *(char *)ppplVar26 == '\0')) {
LAB_0c8c96c6:
      uVar20 = func_0x04890760();
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      FUN_0ee386e0(&ppplStack_4a8);
      func_0x0412a280(pppplVar16,0x80);
      func_0x05d864e0(&ppppuStack_538);
      FUN_0ee386e0(&ppplStack_590);
      FUN_0ee386e0(&ppplStack_598);
      func_0x0c8ca0a0(&pppplStack_3b8);
      func_0x0c8ca200(&pppplStack_178);
      do {
        do {
          FUN_0ee386e0(&ppplStack_420);
          FUN_0ee386e0(&ppplStack_428);
          func_0x0c8ca360(&pppplStack_218);
          FUN_0ee386e0(&ppplStack_408);
          FUN_0ee386e0(&ppplStack_410);
          func_0x0c8ca4c0(&pppplStack_2b8);
          FUN_0ee386e0(&ppplStack_3f0);
          FUN_0ee386e0(&ppplStack_3f8);
          func_0x0c8ca620(&pppplStack_d8);
          FUN_0ee386e0(&ppplStack_2c0);
          FUN_0ee386e0(&ppplStack_2c8);
          func_0x049084c0(auStack_3e8);
          func_0x0c8ca780(pppplStack_4f0);
          uVar20 = func_0x0eee2d70(uVar20);
          pppplVar28 = pppplStack_588;
          pppplStack_588 = (long ****)0x0;
        } while (pppplVar28 == (long ****)0x0);
        (*(code *)(*pppplVar28)[1])();
      } while( true );
    }
    pppplVar15[0xe] = (long ***)0x0;
    pppplVar15[0xf] = (long ***)0x0;
    pppplVar15[0xc] = (long ***)0x0;
    pppplVar15[0xd] = (long ***)0x0;
    *(undefined4 *)(pppplVar15 + 0x10) = 0x3f800000;
    *(undefined1 *)(pppplVar15 + 0x12) = 0;
    *(undefined1 *)(pppplVar15 + 0x24) = 0;
    *pppplVar15 = (long ***)&UNK_0f3e2fc0;
    pppplVar15[0x2a] = (long ***)0x0;
    pppplVar15[0x30] = (long ***)0x0;
    pppplVar15[0x32] = (long ***)0x0;
    pppplStack_588 = pppplVar15;
    func_0x0d6afb30(pppplVar16,&pppplStack_588);
    if (pppplStack_588 != (long ****)0x0) {
      (*(code *)(*pppplStack_588)[1])();
    }
  }
  pppplStack_3b8 = pppplStack_178;
  pppplStack_3b0 = pppplStack_170;
  ppplStack_3a8 = ppplStack_168;
  uStack_3a0 = (undefined4)uStack_160;
  uStack_39c = uStack_160._4_4_;
  ppplStack_168 = (long ***)0x0;
  uStack_160 = (long ***)0x0;
  pppplStack_398 = pppplStack_158;
  pppplStack_158 = (long ****)0x0;
  uStack_390 = uStack_150;
  uStack_38c = uStack_14c;
  uStack_388 = uStack_148;
  uStack_384 = uStack_144;
  pppplStack_380 = pppplStack_140;
  uStack_378 = uStack_490;
  ppplStack_370 = (long ***)0x0;
  ppplVar26 = ppplStack_488;
  if (((ulong)ppplStack_488 & 0x80000000000000) != 0) {
    uVar24 = (ulong)ppplStack_488 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplStack_368 = (long ***)0x0;
  ppplStack_370 = ppplVar26;
  if (((ulong)ppplStack_480 & 0x80000000000000) == 0) {
    ppplStack_368 = ppplStack_480;
    pppuStack_338 = (undefined8 ***)0x0;
    cStack_328 = '\x01';
    uStack_326 = 0xfffc;
    uStack_324 = 1;
  }
  else {
    uVar24 = (ulong)ppplStack_480 & 0xff00ffffffffffff;
    lVar22 = *(long *)(uVar24 - 8);
    lVar21 = lVar22 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar13 = lVar22;
    func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
    *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
    ppplStack_368 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    pppuStack_338 = (undefined8 ***)0x0;
    cStack_328 = '\x01';
    uStack_326 = 0xfffc;
    uStack_324 = 1;
    if (((ulong)ppplStack_480 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_480 & 0xff00ffffffffffff) - 8);
    }
  }
  ppplStack_480 = (long ***)0x0;
  if (((ulong)ppplStack_488 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_488 & 0xff00ffffffffffff) - 8);
  }
  pppuVar14 = pppuStack_338;
  pppplVar28 = pppplStack_3b0;
  if (cStack_328 != '\0') {
    pppplStack_4f8 = pppplStack_3b8;
    pbStack_4b8 = (byte *)CONCAT71(pbStack_4b8._1_7_,uStack_324);
    ppppuStack_5a0 = (undefined8 ****)*pppplStack_3b0;
    ppplVar26 = pppplStack_3b0[1];
    if (((ulong)ppplVar26 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppplVar26 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar26 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppplStack_590 = (long ***)0x0;
    ppplVar29 = pppplVar28[2];
    ppplStack_598 = ppplVar26;
    if (((ulong)ppplVar29 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)ppplVar29 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar29 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppplVar15 = pppplStack_3b0;
    uVar24 = (ulong)ppplStack_370 & 0x80000000000000;
    uVar4 = (ushort)((ulong)ppplStack_370 >> 0x30);
    ppplStack_590 = ppplVar29;
    if (uVar24 == 0) {
      if (((ulong)ppplStack_370 & 0x7f000000000000) == 0) goto LAB_0c8c80df;
      uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c808d:
      if ((((uVar19 != 4) || (*(int *)((ulong)ppplStack_370 & 0xff00ffffffffffff) != 0x61746562)) ||
          ((short)uStack_378 != 9999)) || ((uStack_378._2_2_ != 9999 || (uStack_378._4_2_ != 9999)))
         ) goto LAB_0c8c80df;
LAB_0c8c82ff:
      if (uVar24 == 0) {
        if (((ulong)ppplStack_370 & 0x7f000000000000) != 0) {
          uVar19 = (ulong)(uVar4 & 0x7f);
LAB_0c8c8340:
          if ((((uVar19 == 4) &&
               (piVar30 = (int *)((ulong)ppplStack_370 & 0xff00ffffffffffff), *piVar30 == 0x61746562
               )) && ((short)uStack_378 == 9999)) &&
             ((uStack_378._2_2_ == 9999 && (uStack_378._4_2_ == 9999)))) {
            ppppuStack_5a0 = uStack_378;
            if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
              piVar30 = (int *)((ulong)ppplStack_370 & 0xff00ffffffffffff);
              uVar24 = (ulong)ppplStack_370 & 0x80000000000000;
            }
            ppplStack_598 = (long ***)0x0;
            ppplVar26 = ppplStack_370;
            if (uVar24 != 0) {
              lVar22 = *(long *)(piVar30 + -2);
              lVar21 = lVar22 + 9;
              plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
              if (lVar21 != 0 && plVar13 == (long *)0x0) {
                func_0x0eec74c0(lVar21,8);
              }
              *plVar13 = lVar22;
              func_0x0eee2f00(plVar13 + 1,piVar30,lVar22);
              *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
              ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
            }
            ppplStack_598 = ppplVar26;
            if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
            }
            ppplStack_590 = (long ***)0x0;
            ppplVar29 = ppplStack_368;
            if (((ulong)ppplStack_368 & 0x80000000000000) != 0) {
              uVar24 = (ulong)ppplStack_368 & 0xff00ffffffffffff;
              lVar22 = *(long *)(uVar24 - 8);
              lVar21 = lVar22 + 9;
              plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
              if (lVar21 != 0 && plVar13 == (long *)0x0) {
                func_0x0eec74c0(lVar21,8);
              }
              goto LAB_0c8c8531;
            }
          }
        }
      }
      else {
        uVar19 = *(ulong *)(((ulong)ppplStack_370 & 0xff00ffffffffffff) - 8);
        if (uVar19 != 0) goto LAB_0c8c8340;
      }
    }
    else {
      uVar19 = *(ulong *)(((ulong)ppplStack_370 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0c8c808d;
LAB_0c8c80df:
      ppplVar26 = pppplVar28[1];
      if (((ulong)ppplVar26 & 0x80000000000000) != 0) {
        uVar19 = *(ulong *)(((ulong)ppplVar26 & 0xff00ffffffffffff) - 8);
        if (uVar19 != 0) goto LAB_0c8c8124;
        goto LAB_0c8c82ff;
      }
      if (((ulong)ppplVar26 & 0x7f000000000000) == 0) goto LAB_0c8c82ff;
      uVar19 = (ulong)((ushort)((ulong)ppplVar26 >> 0x30) & 0x7f);
LAB_0c8c8124:
      if (((uVar19 != 4) || (*(int *)((ulong)ppplVar26 & 0xff00ffffffffffff) != 0x61746562)) ||
         ((*(short *)pppplVar28 != 9999 ||
          ((*(short *)((long)pppplVar28 + 2) != 9999 || (*(short *)((long)pppplVar28 + 4) != 9999)))
          ))) goto LAB_0c8c82ff;
      ppppuStack_5a0 = (undefined8 ****)*pppplStack_3b0;
      if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
      }
      ppplStack_598 = (long ***)0x0;
      ppplVar26 = pppplVar15[1];
      if (((ulong)ppplVar26 & 0x80000000000000) != 0) {
        lVar22 = *(long *)(((ulong)ppplVar26 & 0xff00ffffffffffff) - 8);
        lVar21 = lVar22 + 9;
        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
        if (lVar21 != 0 && plVar13 == (long *)0x0) {
          func_0x0eec74c0(lVar21,8);
        }
        *plVar13 = lVar22;
        func_0x0eee2f00(plVar13 + 1,(ulong)ppplVar26 & 0xff00ffffffffffff,lVar22);
        *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
        ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      ppplStack_598 = ppplVar26;
      if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
      }
      ppplStack_590 = (long ***)0x0;
      ppplVar29 = pppplVar15[2];
      if (((ulong)ppplVar29 & 0x80000000000000) == 0) goto LAB_0c8c8571;
      uVar24 = (ulong)ppplVar29 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar24 - 8);
      lVar21 = lVar22 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
LAB_0c8c8531:
      *plVar13 = lVar22;
      func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
      *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
      ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
LAB_0c8c8571:
    ppplStack_590 = ppplVar29;
    func_0x0d6b3300(&ppppuStack_538,&uStack_378,&ppppuStack_5a0,1);
    if (pppuVar14 == (undefined8 ***)0x0) {
      if ((CONCAT44(uStack_38c,uStack_390) == 0) &&
         (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_0124f0ed),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((ppplStack_3a8 == (long ***)0x0) || (*(char *)ppplStack_3a8 != '\x01')) {
        cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_0124f0ed);
        if (cVar11 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
        ppppuVar23 = (undefined8 ****)CONCAT44(uStack_38c,uStack_390);
        if ((ppplStack_3a8 == (long ***)0x0) &&
           (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
           cVar11 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
      else {
        ppppuVar23 = (undefined8 ****)CONCAT44(uStack_38c,uStack_390);
      }
      if ((*(char *)ppplStack_3a8 == '\0') &&
         (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      pppplVar28 = pppplStack_398;
      ppppuVar18 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (ppppuVar18 == (undefined8 ****)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      ppppuStack_4b0 = uStack_378;
      pppplStack_4c0 = pppplVar28;
      pppplStack_4c8 = uStack_378;
      ppplVar26 = ppplStack_370;
      ppppuStack_498 = ppppuVar23;
      if (((ulong)ppplStack_370 & 0x80000000000000) != 0) {
        uVar24 = (ulong)ppplStack_370 & 0xff00ffffffffffff;
        lVar22 = *(long *)(uVar24 - 8);
        lVar21 = lVar22 + 9;
        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
        if (lVar21 != 0 && plVar13 == (long *)0x0) {
          func_0x0eec74c0(lVar21,8);
        }
        *plVar13 = lVar22;
        func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
        *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
        ppplVar26 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      uStack_4a0 = 0;
      ppplVar29 = ppplStack_368;
      if (((ulong)ppplStack_368 & 0x80000000000000) != 0) {
        uVar24 = (ulong)ppplStack_368 & 0xff00ffffffffffff;
        lVar22 = *(long *)(uVar24 - 8);
        lVar21 = lVar22 + 9;
        ppplStack_4a8 = ppplVar26;
        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
        if (lVar21 != 0 && plVar13 == (long *)0x0) {
          func_0x0eec74c0(lVar21,8);
        }
        *plVar13 = lVar22;
        func_0x0eee2f00(plVar13 + 1,uVar24,lVar22);
        *(undefined1 *)((long)plVar13 + lVar22 + 8) = 0;
        ppplVar29 = (long ***)((ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      uVar6 = uStack_326;
      uStack_560 = (long ***)uStack_510;
      pppppuStack_568 = (undefined8 *****)uStack_518;
      pppplStack_578 = ppppuStack_528;
      pppplStack_580 = ppppuStack_530;
      uStack_448 = (long ***)CONCAT62(uStack_448._2_6_,uStack_508);
      ppplStack_4a8 = (long ***)0x0;
      uStack_4a0 = 0;
      pppplStack_478 = ppppuStack_538;
      ppppuStack_530 = (undefined8 ****)0x0;
      ppppuStack_528 = (undefined8 ****)0x0;
      pppplStack_588 = ppppuStack_538;
      pppplStack_470 = (undefined8 ****)0x0;
      ppplStack_468 = (long ***)0x0;
      uStack_570 = uStack_520;
      uStack_56c = uStack_51c;
      pppplStack_458 = (long ****)0x0;
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_450 = (long ***)0x0;
      uStack_558 = CONCAT22(uStack_558._2_2_,uStack_508);
      ppppuStack_4e8 = pppplStack_4c8;
      ppplStack_4e0 = ppplVar26;
      ppplStack_4d8 = ppplVar29;
      func_0x0d6a8a30(ppppuVar18,pppplStack_4c0,&ppppuStack_4e8,&pppplStack_588);
      if (((ulong)uStack_560 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)uStack_560 & 0xff00ffffffffffff) - 8);
      }
      uStack_560 = (long ***)0x0;
      if (((ulong)pppppuStack_568 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppuStack_568 & 0xff00ffffffffffff) - 8);
      }
      pppppuStack_568 = (undefined8 *****)0x0;
      if (((ulong)pppplStack_578 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppplStack_578 & 0xff00ffffffffffff) - 8);
      }
      pppplStack_578 = (long ****)0x0;
      if (((ulong)pppplStack_580 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppplStack_580 & 0xff00ffffffffffff) - 8);
      }
      pppplStack_580 = (long ****)0x0;
      if (((ulong)ppplStack_4d8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppplStack_4d8 & 0xff00ffffffffffff) - 8);
      }
      ppplStack_4d8 = (long ***)0x0;
      if (((ulong)ppplStack_4e0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppplStack_4e0 & 0xff00ffffffffffff) - 8);
      }
      *ppppuVar18 = (undefined8 ***)&UNK_0f3e33f0;
      ppppuVar18[0xe] = ppppuStack_498;
      *(undefined2 *)(ppppuVar18 + 0xf) = uVar6;
      *(undefined1 *)((long)ppppuVar18 + 0x7a) = pbStack_4b8._0_1_;
    }
    else {
      ppppuVar18 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
      if (ppppuVar18 == (undefined8 ****)0x0) {
        func_0x0eec74c0(0x90,0);
      }
      uStack_560 = (long ***)uStack_510;
      pppppuStack_568 = (undefined8 *****)uStack_518;
      pppplStack_578 = ppppuStack_528;
      pppplStack_580 = ppppuStack_530;
      ppppuStack_530 = (undefined8 ****)0x0;
      ppppuStack_528 = (undefined8 ****)0x0;
      pppplStack_588 = ppppuStack_538;
      uStack_570 = uStack_520;
      uStack_56c = uStack_51c;
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_558 = CONCAT22(uStack_558._2_2_,uStack_508);
      func_0x0d6a8c00(ppppuVar18,&uStack_378,&pppplStack_588);
      if (((ulong)uStack_560 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)uStack_560 & 0xff00ffffffffffff) - 8);
      }
      uStack_560 = (long ***)0x0;
      if (((ulong)pppppuStack_568 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppuStack_568 & 0xff00ffffffffffff) - 8);
      }
      pppppuStack_568 = (undefined8 *****)0x0;
      if (((ulong)pppplStack_578 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppplStack_578 & 0xff00ffffffffffff) - 8);
      }
      pppplStack_578 = (long ****)0x0;
      if (((ulong)pppplStack_580 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppplStack_580 & 0xff00ffffffffffff) - 8);
      }
      pppplStack_580 = (long ****)0x0;
      *ppppuVar18 = (undefined8 ***)&UNK_0f3e3430;
      if (pppuStack_338 == (undefined8 ***)0x0) {
        ppppuVar18[0x10] = (undefined8 ***)0x0;
      }
      else if (pppuStack_338 == appuStack_358) {
        ppppuVar18[0x10] = ppppuVar18 + 0xc;
        (*(code *)(*pppuStack_338)[3])();
      }
      else {
        ppppuVar18[0x10] = pppuStack_338;
        pppuStack_338 = (undefined8 ***)0x0;
      }
    }
    pppplStack_588 = ppppuVar18;
    if ((uStack_510 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_510 & 0xff00ffffffffffff) - 8);
    }
    uStack_510 = 0;
    if ((uStack_518 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_518 & 0xff00ffffffffffff) - 8);
    }
    uStack_518 = 0;
    if (((ulong)ppppuStack_528 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppuStack_528 & 0xff00ffffffffffff) - 8);
    }
    ppppuStack_528 = (undefined8 ****)0x0;
    if (((ulong)ppppuStack_530 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppuStack_530 & 0xff00ffffffffffff) - 8);
    }
    if (((ulong)ppplStack_590 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_590 & 0xff00ffffffffffff) - 8);
    }
    ppplStack_590 = (long ***)0x0;
    if (((ulong)ppplStack_598 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppplStack_598 & 0xff00ffffffffffff) - 8);
    }
    ppplVar26 = *pppplStack_4f8;
    ppplVar29 = pppplStack_4f8[1];
    if (ppplVar26 != ppplVar29) {
      do {
        cVar11 = FUN_04fa7a10(*ppplVar26 + 4,ppppuVar18 + 7);
        if (cVar11 == '\0') break;
        ppplVar26 = ppplVar26 + 1;
      } while (ppplVar26 != ppplVar29);
    }
    func_0x0d6af860(pppplStack_4f8,ppplVar26,&pppplStack_588);
    pppplVar28 = pppplStack_588;
    pppplStack_588 = (long ****)0x0;
    if (pppplVar28 != (undefined8 ****)0x0) {
      (*(code *)(*pppplVar28)[1])();
    }
    cStack_328 = '\0';
  }
  func_0x0c8ca0a0(&pppplStack_3b8);
  func_0x0c8ca200(&pppplStack_178);
  if (((ulong)ppplStack_420 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_420 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_420 = (long ***)0x0;
  if (((ulong)ppplStack_428 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_428 & 0xff00ffffffffffff) - 8);
  }
  func_0x0c8ca360(&pppplStack_218);
  if (((ulong)ppplStack_408 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_408 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_408 = (long ***)0x0;
  if (((ulong)ppplStack_410 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_410 & 0xff00ffffffffffff) - 8);
  }
  func_0x0c8ca4c0(&pppplStack_2b8);
  if (((ulong)ppplStack_3f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_3f0 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_3f0 = (long ***)0x0;
  if (((ulong)ppplStack_3f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_3f8 & 0xff00ffffffffffff) - 8);
  }
  func_0x0c8ca620(&pppplStack_d8);
  if (((ulong)ppplStack_2c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_2c0 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_2c0 = (long ***)0x0;
  if (((ulong)ppplStack_2c8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_2c8 & 0xff00ffffffffffff) - 8);
  }
  ppplVar26 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (ppplVar26 == (long ***)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *ppplVar26 = (long **)&UNK_0f3e3470;
  ppplVar26[1] = pplStack_2e0;
  ppplVar26[2] = pplStack_2d8;
  *(byte *)(ppplVar26 + 3) = param_7;
  ppplVar26[4] = param_8;
  pppplVar28 = (long ****)pppplStack_4f0[10];
  pppplStack_4f0[10] = (long ***)0x0;
  if (pppplVar28 == pppplStack_4f0 + 6) {
    lVar21 = 0x20;
LAB_0c8c905f:
    (**(code **)((long)*pppplVar28 + lVar21))();
  }
  else {
    lVar21 = 0x28;
    if (pppplVar28 != (long ****)0x0) goto LAB_0c8c905f;
  }
  pppplStack_4f0[10] = ppplVar26;
  ppplVar26 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (ppplVar26 == (long ***)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  pppplVar15 = pppplStack_4f0;
  *ppplVar26 = (long **)&UNK_0f3e3638;
  ppplVar26[1] = pplStack_2e0;
  ppplVar26[2] = pplStack_2d8;
  *(byte *)(ppplVar26 + 3) = param_7;
  ppplVar26[4] = param_8;
  pppplVar28 = (long ****)pppplStack_4f0[0x10];
  pppplStack_4f0[0x10] = (long ***)0x0;
  if (pppplVar28 == pppplStack_4f0 + 0xc) {
    lVar21 = 0x20;
  }
  else {
    lVar21 = 0x28;
    if (pppplVar28 == (long ****)0x0) goto LAB_0c8c90ff;
  }
  (**(code **)((long)*pppplVar28 + lVar21))();
LAB_0c8c90ff:
  pplVar3 = pplStack_3d8;
  pppplVar15[0x10] = ppplVar26;
  pplStack_3e0 = (long **)0x0;
  pplStack_3d8 = (long **)0x0;
  if (pplVar3 != (long **)0x0) {
    LOCK();
    plVar13 = (long *)(pplVar3 + 1);
    lVar21 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)((long)*pplVar3 + 0x10))(pplVar3);
      func_0x0412c2d0(pplVar3);
    }
    pplVar3 = pplStack_3d8;
    pplStack_3d0 = (long **)0x0;
    if (pplStack_3d8 != (long **)0x0) {
      LOCK();
      plVar13 = (long *)(pplStack_3d8 + 1);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)((long)*pplStack_3d8 + 0x10))(pplStack_3d8);
        func_0x0412c2d0(pplVar3);
      }
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x1df4730  minecraft:surface_builder
 * 0x1df4739  :surface_builder
 */
