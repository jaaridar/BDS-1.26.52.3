/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd687070 (ELF vaddr 0xd587070)
 * Label: caller-of-callee
 * Body:  [[0d687070, 0d688069] [0d688070, 0d6883d6] [0d6883e0, 0d688561] [0d688570, 0d688c19]]
 * Ghidra: FUN_0d687070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d687070(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 ulong *param_5)

{
  long *plVar1;
  uint *puVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  char *pcVar16;
  undefined8 uVar17;
  char *pcVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  uint *puVar23;
  long lVar24;
  undefined *puVar25;
  uint *puVar26;
  bool bVar27;
  undefined1 uStack_629;
  undefined8 uStack_628;
  char *pcStack_620;
  char *pcStack_618;
  undefined8 *puStack_608;
  ulong uStack_600;
  undefined4 *puStack_5f8;
  code *pcStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  undefined1 uStack_5bc;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  byte bStack_588;
  ulong uStack_580;
  undefined8 *puStack_578;
  undefined2 uStack_570;
  uint6 uStack_56e;
  undefined2 uStack_568;
  uint6 uStack_566;
  undefined2 uStack_560;
  undefined6 uStack_55e;
  long lStack_558;
  ulong uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  ulong uStack_530;
  undefined *puStack_528;
  code *pcStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  undefined4 uStack_4f0;
  undefined1 uStack_4ec;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined8 uStack_4c0;
  byte bStack_4b8;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  undefined *puStack_498;
  code *pcStack_490;
  undefined8 uStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined1 uStack_45c;
  char cStack_458;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  byte bStack_430;
  undefined1 uStack_42f;
  undefined6 uStack_42e;
  undefined8 uStack_420;
  byte *pbStack_418;
  ulong uStack_410;
  long lStack_408;
  undefined1 uStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  code *pcStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3ac;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  code *pcStack_390;
  undefined4 uStack_388;
  undefined1 uStack_384;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined *puStack_320;
  undefined2 uStack_318;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined2 uStack_304;
  undefined2 uStack_302;
  uint uStack_300;
  undefined2 uStack_2fc;
  undefined2 uStack_2fa;
  char *pcStack_2f8;
  char *pcStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [384];
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  *(undefined8 *)(param_1 + 8) = *param_4;
  uStack_548 = param_2;
  uStack_540 = param_3;
  if ((*(ulong *)(param_1 + 0x10) >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(param_1 + 0x10) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar21 = param_4[1];
  if ((uVar21 & 0x80000000000000) == 0) {
    *(ulong *)(param_1 + 0x10) = uVar21;
    uVar21 = *(ulong *)(param_1 + 0x18);
    if ((uVar21 & 0x80000000000000) != 0) goto LAB_0d6871a9;
LAB_0d687101:
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar21 = param_4[2];
  }
  else {
    lVar13 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
    lVar24 = lVar13 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (plVar11 == (long *)0x0 && lVar24 != 0) {
      FUN_0eec74c0(lVar24,8);
    }
    *plVar11 = lVar13;
    func_0x0eee2f00(plVar11 + 1,uVar21 & 0xff00ffffffffffff,lVar13);
    *(undefined1 *)((long)plVar11 + lVar13 + 8) = 0;
    *(ulong *)(param_1 + 0x10) = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    uVar21 = *(ulong *)(param_1 + 0x18);
    if ((uVar21 & 0x80000000000000) == 0) goto LAB_0d687101;
LAB_0d6871a9:
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar21 & 0xff00ffffffffffff) - 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar21 = param_4[2];
  }
  if ((uVar21 & 0x80000000000000) != 0) {
    lVar13 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
    lVar24 = lVar13 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (plVar11 == (long *)0x0 && lVar24 != 0) {
      FUN_0eec74c0(lVar24,8);
    }
    *plVar11 = lVar13;
    func_0x0eee2f00(plVar11 + 1,uVar21 & 0xff00ffffffffffff,lVar13);
    *(undefined1 *)((long)plVar11 + lVar13 + 8) = 0;
    uVar21 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar25 = (undefined *)0x80000000000000;
  *(ulong *)(param_1 + 0x18) = uVar21;
  bVar27 = ((byte)*param_5 & 1) == 0;
  pbVar19 = (byte *)param_5[2];
  if (bVar27) {
    pbVar19 = (byte *)((long)param_5 + 1);
  }
  uVar21 = (ulong)(byte)((byte)*param_5 >> 1);
  if (!bVar27) {
    uVar21 = param_5[1];
  }
  if ((uVar21 == 0xffffffffffffffff) || (uVar21 != 0 && pbVar19 == (byte *)0x0)) {
    func_0x04890760();
  }
  else {
    cVar10 = func_0x0d681fb0();
    if (cVar10 == '\0') {
      pcStack_618 = (char *)param_5[2];
      uStack_628 = *param_5;
      pcStack_620 = (char *)param_5[1];
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      pcVar16 = (char *)(uStack_628 >> 1 & 0x7f);
      pcVar18 = (char *)((long)&uStack_628 + 1);
      if ((uStack_628 & 1) != 0) {
        pcVar16 = pcStack_620;
        pcVar18 = pcStack_618;
      }
      func_0x0d6af240(&uStack_538,pcVar18,pcVar16);
      if ((char)pcStack_520 == '\x01') {
        if (uStack_538._6_1_ != '\0') {
          puStack_608 = (undefined8 *)0x0;
          uStack_600 = 0;
          puStack_5f8 = (undefined4 *)0x0;
          uStack_308 = (uint)uStack_538;
          uStack_304 = (undefined2)((ulong)uStack_538 >> 0x20);
          uStack_302 = (undefined2)((ulong)uStack_538 >> 0x30);
          uVar21 = uStack_530;
          if ((uStack_530 & 0x80000000000000) != 0) {
            uVar21 = uStack_530 & 0xff00ffffffffffff;
            lVar24 = *(long *)(uVar21 - 8);
            lVar13 = lVar24 + 9;
            plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
            if (lVar13 != 0 && plVar11 == (long *)0x0) {
              FUN_0eec74c0(lVar13,8);
            }
            *plVar11 = lVar24;
            func_0x0eee2f00(plVar11 + 1,uVar21,lVar24);
            *(undefined1 *)((long)plVar11 + lVar24 + 8) = 0;
            uVar21 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_300 = (uint)uVar21;
          uStack_2fc = (undefined2)(uVar21 >> 0x20);
          uStack_2fa = (undefined2)(uVar21 >> 0x30);
          pcStack_2f8 = (char *)0x0;
          puVar25 = puStack_528;
          if (((ulong)puStack_528 & 0x80000000000000) != 0) {
            uVar22 = (ulong)puStack_528 & 0xff00ffffffffffff;
            lVar24 = *(long *)(uVar22 - 8);
            lVar13 = lVar24 + 9;
            plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
            if (lVar13 != 0 && plVar11 == (long *)0x0) {
              FUN_0eec74c0(lVar13,8);
            }
            *plVar11 = lVar24;
            func_0x0eee2f00(plVar11 + 1,uVar22,lVar24);
            *(undefined1 *)((long)plVar11 + lVar24 + 8) = 0;
            puVar25 = (undefined *)((ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          goto LAB_0d687a5a;
        }
        uVar21 = *(ulong *)(param_1 + 0x28);
        uVar22 = *(ulong *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        if ((uVar22 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar22 & 0xff00ffffffffffff) - 8);
        }
        if ((uVar21 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar21 & 0xff00ffffffffffff) - 8);
        }
        uStack_308 = 0;
        uStack_304 = 0;
        uStack_302 = 0;
        uStack_300 = 0;
        uStack_2fc = 0;
        uStack_2fa = 0;
        pcStack_2f8 = (char *)0x0;
        puStack_5f8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_5f8 == (undefined4 *)0x0) {
          FUN_0eec74c0(0x20,0);
        }
        uVar9 = _UNK_0131dd43;
        uVar8 = _UNK_0131dd3f;
        uVar7 = _UNK_0131dd3b;
        puStack_608 = (undefined8 *)0x21;
        uStack_600 = 0x18;
        *puStack_5f8 = _DAT_0131dd37;
        puStack_5f8[1] = uVar7;
        puStack_5f8[2] = uVar8;
        puStack_5f8[3] = uVar9;
        *(undefined8 *)(puStack_5f8 + 4) = 0x6e6f697372657620;
        *(undefined1 *)(puStack_5f8 + 6) = 0;
        func_0x0d6b13c0(param_1 + 0xb8,0x10,&uStack_308,&puStack_608);
        if (((ulong)puStack_608 & 1) != 0) {
          func_0x0412a280(puStack_5f8,(ulong)puStack_608 & 0xfffffffffffffffe);
        }
        lVar13 = CONCAT26(uStack_302,CONCAT24(uStack_304,uStack_308));
        if (lVar13 == 0) goto joined_r0x0d687b5e;
        lVar24 = CONCAT26(uStack_2fa,CONCAT24(uStack_2fc,uStack_300));
        lVar20 = lVar13;
        if (lVar13 != lVar24) {
          do {
            if ((*(byte *)(lVar24 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar24 + -8),
                              *(ulong *)(lVar24 + -0x18) & 0xfffffffffffffffe);
            }
            lVar24 = lVar24 + -0x20;
          } while (lVar24 != lVar13);
          goto LAB_0d68881d;
        }
        goto LAB_0d688825;
      }
      puStack_608 = (undefined8 *)0x0;
      uStack_600 = 0;
      uStack_308 = 0;
      uStack_304 = 0;
      uStack_302 = 0;
      puStack_5f8 = (undefined4 *)0x0;
      uVar21 = 0;
      uStack_538 = (undefined8 *)0x0;
      puVar25 = (undefined *)0;
LAB_0d687a5a:
      *(undefined8 **)(param_1 + 0x20) = uStack_538;
      uVar22 = *(ulong *)(param_1 + 0x28);
      *(ulong *)(param_1 + 0x28) = uVar21;
      uStack_300 = (uint)uVar22;
      uStack_2fc = (undefined2)(uVar22 >> 0x20);
      uStack_2fa = (undefined2)(uVar22 >> 0x30);
      pcStack_2f8 = *(char **)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar25;
      if (((ulong)pcStack_2f8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pcStack_2f8 & 0xff00ffffffffffff) - 8);
        uVar22 = CONCAT26(uStack_2fa,CONCAT24(uStack_2fc,uStack_300));
      }
      pcStack_2f8 = (char *)0x0;
      if ((uVar22 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar22 & 0xff00ffffffffffff) - 8);
      }
      uStack_300 = 0;
      uStack_2fc = 0;
      uStack_2fa = 0;
      if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
        cVar10 = func_0x04fa7a10(param_1 + 0x20,param_1 + 8);
        if (cVar10 == '\0') {
          puVar2 = (uint *)(param_1 + 0x50);
          if ((ulong)*(uint *)(param_1 + 0xb0) != 0xffffffff) {
            (**(code **)(&UNK_0f47d948 + (ulong)*(uint *)(param_1 + 0xb0) * 8))(&uStack_308,puVar2);
          }
          *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x80) = 0;
          *(undefined8 *)(param_1 + 0x88) = 0;
          *(undefined8 *)(param_1 + 0x70) = 0;
          *(undefined8 *)(param_1 + 0x78) = 0;
          *(undefined8 *)(param_1 + 0x60) = 0;
          *(undefined8 *)(param_1 + 0x68) = 0;
          puVar2[0] = 0;
          puVar2[1] = 0;
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x90) = 0;
          *(undefined8 *)(param_1 + 0x98) = 0x400;
          *(undefined4 *)(param_1 + 0xa0) = 0;
          *(undefined8 *)(param_1 + 0xa8) = 0;
          puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (puVar12 == (undefined8 *)0x0) {
            FUN_0eec74c0(0x28,0);
          }
          *puVar12 = 0;
          puVar12[1] = 0x10000;
          puVar12[2] = 0;
          puVar12[3] = 0;
          puVar12[4] = 0;
          *(undefined8 **)(param_1 + 0x60) = puVar12;
          *(undefined8 **)(param_1 + 0x68) = puVar12;
          *(undefined4 *)(param_1 + 0xb0) = 1;
          pcStack_2f0 = (char *)(uStack_628 >> 1 & 0x7f);
          pcVar18 = (char *)((long)&uStack_628 + 1);
          if ((uStack_628 & 1) != 0) {
            pcStack_2f0 = pcStack_620;
            pcVar18 = pcStack_618;
          }
          uStack_308 = (uint)pcVar18;
          uStack_300 = uStack_308;
          uStack_304 = (undefined2)((ulong)pcVar18 >> 0x20);
          uStack_2fc = uStack_304;
          uStack_302 = (undefined2)((ulong)pcVar18 >> 0x30);
          uStack_2fa = uStack_302;
          pcStack_2f8 = pcVar18 + (long)pcStack_2f0;
          puStack_608 = (undefined8 *)&uStack_308;
          if ((pcStack_2f0 != (char *)0x0) && (*pcVar18 == -0x11)) {
            pcVar18 = (char *)((long)&uStack_628 + 2);
            if ((uStack_628 & 1) != 0) {
              pcVar18 = pcStack_618 + 1;
            }
            uStack_308 = (uint)pcVar18;
            uStack_304 = (undefined2)((ulong)pcVar18 >> 0x20);
            uStack_302 = (undefined2)((ulong)pcVar18 >> 0x30);
          }
          if (pcVar18 != pcStack_2f8) {
            if (*pcVar18 == -0x45) {
              pcVar18 = pcVar18 + 1;
              uStack_308 = (uint)pcVar18;
              uStack_304 = (undefined2)((ulong)pcVar18 >> 0x20);
              uStack_302 = (undefined2)((ulong)pcVar18 >> 0x30);
            }
            if ((pcVar18 != pcStack_2f8) && (*pcVar18 == -0x41)) {
              pcVar18 = pcVar18 + 1;
              uStack_308 = (uint)pcVar18;
              uStack_304 = (undefined2)((ulong)pcVar18 >> 0x20);
              uStack_302 = (undefined2)((ulong)pcVar18 >> 0x30);
            }
          }
          func_0x0cb4bfa0(puVar2,&puStack_608);
          if (*(int *)(param_1 + 0xa0) == 0) {
            if ((*(short *)(param_1 + 0x5e) == 3) && (*(int *)(param_1 + 0x50) == 2)) {
              puVar26 = (uint *)(*(ulong *)(param_1 + 0x58) & 0xffffffffffff);
              uVar21 = *(ulong *)(puVar26 + 2);
              bVar27 = (*(ushort *)((long)puVar26 + 0xe) & 0x1000) == 0;
              puVar23 = (uint *)(uVar21 & 0xffffffffffff);
              if (!bVar27) {
                puVar23 = puVar26;
              }
              lVar13 = strlen(puVar23);
              if ((lVar13 == 0xe) &&
                 (*(long *)((long)puVar23 + 6) == 0x6e6f69737265765f &&
                  *(long *)puVar23 == 0x765f74616d726f66)) {
                puVar15 = puVar26 + 8;
                uVar21 = *(ulong *)(puVar26 + 10);
                bVar27 = (*(ushort *)((long)puVar26 + 0x2e) & 0x1000) == 0;
                puVar23 = (uint *)(uVar21 & 0xffffffffffff);
                if (!bVar27) {
                  puVar23 = puVar15;
                }
                lVar13 = strlen(puVar23);
                puVar26 = puVar15;
                if ((lVar13 == 0xe) &&
                   (*(long *)((long)puVar23 + 6) == 0x6e6f69737265765f &&
                    *(long *)puVar23 == 0x765f74616d726f66)) {
                  uStack_2d8 = 0;
                  uStack_2d0 = 0;
                  uStack_2e8 = 0;
                  uStack_2e0 = 0;
                  pcStack_2f8 = (char *)0x0;
                  pcStack_2f0 = (char *)0x0;
                  uStack_308 = 0;
                  uStack_304 = 0;
                  uStack_302 = 0;
                  uStack_300 = 0;
                  uStack_2fc = 0;
                  uStack_2fa = 0;
                  uStack_2c8 = 0;
                  uStack_2c0 = 0x400;
                  uStack_2b8 = 0;
                  uStack_2b0 = 0;
                  pcVar18 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                  if (pcVar18 == (char *)0x0) {
                    FUN_0eec74c0(0x28,0);
                  }
                  pcVar18[0] = '\0';
                  pcVar18[1] = '\0';
                  pcVar18[2] = '\0';
                  pcVar18[3] = '\0';
                  pcVar18[4] = '\0';
                  pcVar18[5] = '\0';
                  pcVar18[6] = '\0';
                  pcVar18[7] = '\0';
                  pcVar18[8] = '\0';
                  pcVar18[9] = '\0';
                  pcVar18[10] = '\x01';
                  pcVar18[0xb] = '\0';
                  pcVar18[0xc] = '\0';
                  pcVar18[0xd] = '\0';
                  pcVar18[0xe] = '\0';
                  pcVar18[0xf] = '\0';
                  pcVar18[0x10] = '\0';
                  pcVar18[0x11] = '\0';
                  pcVar18[0x12] = '\0';
                  pcVar18[0x13] = '\0';
                  pcVar18[0x14] = '\0';
                  pcVar18[0x15] = '\0';
                  pcVar18[0x16] = '\0';
                  pcVar18[0x17] = '\0';
                  pcVar18[0x18] = '\0';
                  pcVar18[0x19] = '\0';
                  pcVar18[0x1a] = '\0';
                  pcVar18[0x1b] = '\0';
                  pcVar18[0x1c] = '\0';
                  pcVar18[0x1d] = '\0';
                  pcVar18[0x1e] = '\0';
                  pcVar18[0x1f] = '\0';
                  pcVar18[0x20] = '\0';
                  pcVar18[0x21] = '\0';
                  pcVar18[0x22] = '\0';
                  pcVar18[0x23] = '\0';
                  pcVar18[0x24] = '\0';
                  pcVar18[0x25] = '\0';
                  pcVar18[0x26] = '\0';
                  pcVar18[0x27] = '\0';
                  pcStack_2f8 = pcVar18;
                  pcStack_2f0 = pcVar18;
                  func_0x0b6c9ad0(puVar2,&uStack_308);
                  func_0x04907660(&uStack_308);
                  uVar21 = *(ulong *)(param_1 + 0x28);
                  uVar22 = *(ulong *)(param_1 + 0x30);
                  *(undefined8 *)(param_1 + 0x20) = 0;
                  *(undefined8 *)(param_1 + 0x28) = 0;
                  *(undefined8 *)(param_1 + 0x30) = 0;
                  if ((uVar22 & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(uVar22 & 0xff00ffffffffffff) - 8);
                  }
                  if ((uVar21 & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(uVar21 & 0xff00ffffffffffff) - 8);
                  }
                  uStack_308 = 0;
                  uStack_304 = 0;
                  uStack_302 = 0;
                  uStack_300 = 0;
                  uStack_2fc = 0;
                  uStack_2fa = 0;
                  pcStack_2f8 = (char *)0x0;
                  puVar14 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                  if (puVar14 == (undefined4 *)0x0) {
                    FUN_0eec74c0(0x38,0);
                  }
                  uVar17 = _UNK_012ea215;
                  puStack_608 = (undefined8 *)0x39;
                  uStack_600 = 0x30;
                  *(undefined8 *)(puVar14 + 8) = _DAT_012ea20d;
                  *(undefined8 *)(puVar14 + 10) = uVar17;
                  uVar17 = _UNK_012ea205;
                  *(undefined8 *)(puVar14 + 4) = _DAT_012ea1fd;
                  *(undefined8 *)(puVar14 + 6) = uVar17;
                  uVar9 = _UNK_012ea1f9;
                  uVar8 = _UNK_012ea1f5;
                  uVar7 = _UNK_012ea1f1;
                  *puVar14 = _DAT_012ea1ed;
                  puVar14[1] = uVar7;
                  puVar14[2] = uVar8;
                  puVar14[3] = uVar9;
                  *(undefined1 *)(puVar14 + 0xc) = 0;
                  puStack_5f8 = puVar14;
                  func_0x0d6b13c0(param_1 + 0xb8,0x10,&uStack_308,&puStack_608);
                  if (((ulong)puStack_608 & 1) != 0) {
                    func_0x0412a280(puStack_5f8,(ulong)puStack_608 & 0xfffffffffffffffe);
                  }
                  lVar13 = CONCAT26(uStack_302,CONCAT24(uStack_304,uStack_308));
                  if (lVar13 == 0) goto joined_r0x0d687b5e;
                  lVar24 = CONCAT26(uStack_2fa,CONCAT24(uStack_2fc,uStack_300));
                  lVar20 = lVar13;
                  if (lVar13 != lVar24) {
                    do {
                      if ((*(byte *)(lVar24 + -0x18) & 1) != 0) {
                        func_0x0412a280(*(undefined8 *)(lVar24 + -8),
                                        *(ulong *)(lVar24 + -0x18) & 0xfffffffffffffffe);
                      }
                      lVar24 = lVar24 + -0x20;
                    } while (lVar24 != lVar13);
                    goto LAB_0d68881d;
                  }
                  goto LAB_0d688825;
                }
              }
              uVar4 = 0xd - ((int)(uVar21 >> 0x10) >> 0x18);
              if (bVar27) {
                uVar4 = *puVar26;
              }
              uVar21 = (ulong)uVar4;
              if (uVar4 < 0x17) {
                uStack_308 = CONCAT31(uStack_308._1_3_,(char)uVar4 * '\x02');
                pcVar18 = (char *)((long)&uStack_308 + 1);
                if (uVar21 != 0) goto LAB_0d688956;
              }
              else {
                lVar13 = 0x1a;
                if ((uVar21 | 7) != 0x17) {
                  lVar13 = (uVar21 | 7) + 1;
                }
                pcVar18 = (char *)func_0x0ee32660(lVar13);
                uStack_308 = (uint)lVar13 | 1;
                uStack_304 = (undefined2)((ulong)lVar13 >> 0x20);
                uStack_302 = 0;
                uStack_2fc = 0;
                uStack_2fa = 0;
                uStack_300 = uVar4;
                pcStack_2f8 = pcVar18;
LAB_0d688956:
                func_0x0eee2ee0(pcVar18,puVar23,uVar21);
              }
              pcVar18[uVar21] = '\0';
              if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(param_1 + 0x48),
                                *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffe);
              }
              *(char **)(param_1 + 0x48) = pcStack_2f8;
              *(uint *)(param_1 + 0x38) = uStack_308;
              *(uint *)(param_1 + 0x3c) = CONCAT22(uStack_302,uStack_304);
              *(uint *)(param_1 + 0x40) = uStack_300;
              *(uint *)(param_1 + 0x44) = CONCAT22(uStack_2fa,uStack_2fc);
              func_0x0d689520(param_1,uStack_548,uStack_540);
              lVar13 = *(long *)puVar2;
              uStack_300 = (uint)((ulong)*(undefined8 *)(param_1 + 0x56) >> 0x10);
              uStack_2fc = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x56) >> 0x30);
              uStack_308 = (uint)lVar13;
              uStack_304 = (undefined2)((ulong)lVar13 >> 0x20);
              uStack_302 = (undefined2)((ulong)lVar13 >> 0x30);
              uVar3 = *(undefined2 *)(param_1 + 0x5e);
              *(undefined2 *)(param_1 + 0x5e) = 0;
              uVar4 = puVar26[5];
              uVar5 = puVar26[6];
              uVar6 = puVar26[7];
              *puVar2 = puVar26[4];
              *(uint *)(param_1 + 0x54) = uVar4;
              *(uint *)(param_1 + 0x58) = uVar5;
              *(uint *)(param_1 + 0x5c) = uVar6;
              *(ulong *)((long)puVar26 + 0x16) =
                   CONCAT26(uStack_2fc,CONCAT42(uStack_300,uStack_302));
              *(long *)(puVar26 + 4) = lVar13;
              *(undefined2 *)((long)puVar26 + 0x1e) = uVar3;
              goto joined_r0x0d687b5e;
            }
            uVar21 = *(ulong *)(param_1 + 0x28);
            uVar22 = *(ulong *)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            if ((uVar22 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar22 & 0xff00ffffffffffff) - 8);
            }
            if ((uVar21 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar21 & 0xff00ffffffffffff) - 8);
            }
            uStack_308 = 0;
            uStack_304 = 0;
            uStack_302 = 0;
            uStack_300 = 0;
            uStack_2fc = 0;
            uStack_2fa = 0;
            pcStack_2f8 = (char *)0x0;
            puVar14 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
            if (puVar14 == (undefined4 *)0x0) {
              FUN_0eec74c0(0x60,0);
            }
            uVar17 = _UNK_012d00be;
            puStack_608 = (undefined8 *)0x61;
            uStack_600 = 0x59;
            *(ulong *)((long)puVar14 + 0x49) = CONCAT17(UNK_012d00bd,_DAT_012d00b6);
            *(undefined8 *)((long)puVar14 + 0x51) = uVar17;
            uVar17 = CONCAT71(_DAT_012d00b6,UNK_012d00b5);
            *(undefined8 *)(puVar14 + 0x10) = _DAT_012d00ad;
            *(undefined8 *)(puVar14 + 0x12) = uVar17;
            uVar17 = _UNK_012d00a5;
            *(undefined8 *)(puVar14 + 0xc) = _DAT_012d009d;
            *(undefined8 *)(puVar14 + 0xe) = uVar17;
            uVar17 = _UNK_012d0095;
            *(undefined8 *)(puVar14 + 8) = _DAT_012d008d;
            *(undefined8 *)(puVar14 + 10) = uVar17;
            uVar17 = _UNK_012d0085;
            *(undefined8 *)(puVar14 + 4) = _DAT_012d007d;
            *(undefined8 *)(puVar14 + 6) = uVar17;
            uVar9 = _UNK_012d0079;
            uVar8 = _UNK_012d0075;
            uVar7 = _UNK_012d0071;
            *puVar14 = _DAT_012d006d;
            puVar14[1] = uVar7;
            puVar14[2] = uVar8;
            puVar14[3] = uVar9;
            *(undefined1 *)((long)puVar14 + 0x59) = 0;
            puStack_5f8 = puVar14;
            func_0x0d6b13c0(param_1 + 0xb8,0x10,&uStack_308,&puStack_608);
            if (((ulong)puStack_608 & 1) != 0) {
              func_0x0412a280(puStack_5f8,(ulong)puStack_608 & 0xfffffffffffffffe);
            }
            lVar13 = CONCAT26(uStack_302,CONCAT24(uStack_304,uStack_308));
            if (lVar13 == 0) goto joined_r0x0d687b5e;
            lVar24 = CONCAT26(uStack_2fa,CONCAT24(uStack_2fc,uStack_300));
            lVar20 = lVar13;
            if (lVar13 != lVar24) {
              do {
                if ((*(byte *)(lVar24 + -0x18) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar24 + -8),
                                  *(ulong *)(lVar24 + -0x18) & 0xfffffffffffffffe);
                }
                lVar24 = lVar24 + -0x20;
              } while (lVar24 != lVar13);
              goto LAB_0d68881d;
            }
          }
          else {
            uVar21 = *(ulong *)(param_1 + 0x28);
            uVar22 = *(ulong *)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            if ((uVar22 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar22 & 0xff00ffffffffffff) - 8);
            }
            if ((uVar21 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar21 & 0xff00ffffffffffff) - 8);
            }
            uStack_308 = 0;
            uStack_304 = 0;
            uStack_302 = 0;
            uStack_300 = 0;
            uStack_2fc = 0;
            uStack_2fa = 0;
            pcStack_2f8 = (char *)0x0;
            if ((ulong)*(uint *)(param_1 + 0xa0) < 0x12) {
              uStack_3a8 = (undefined8 **)
                           (&UNK_01dd5cf8 +
                           *(int *)(&UNK_01dd5cf8 + (ulong)*(uint *)(param_1 + 0xa0) * 4));
            }
            else {
              uStack_3a8 = (undefined8 **)&UNK_01334878;
            }
            func_0x0470d9a0(&puStack_608,&UNK_013894d0,0x2f,0xc,&uStack_3a8);
            func_0x0d6b13c0(param_1 + 0xb8,0x10,&uStack_308,&puStack_608);
            if (((ulong)puStack_608 & 1) != 0) {
              func_0x0412a280(puStack_5f8,(ulong)puStack_608 & 0xfffffffffffffffe);
            }
            lVar13 = CONCAT26(uStack_302,CONCAT24(uStack_304,uStack_308));
            if (lVar13 == 0) goto joined_r0x0d687b5e;
            lVar24 = CONCAT26(uStack_2fa,CONCAT24(uStack_2fc,uStack_300));
            lVar20 = lVar13;
            if (lVar13 != lVar24) {
              do {
                if ((*(byte *)(lVar24 + -0x18) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar24 + -8),
                                  *(ulong *)(lVar24 + -0x18) & 0xfffffffffffffffe);
                }
                lVar24 = lVar24 + -0x20;
              } while (lVar24 != lVar13);
LAB_0d68881d:
              lVar20 = CONCAT26(uStack_302,CONCAT24(uStack_304,uStack_308));
            }
          }
LAB_0d688825:
          uStack_300 = (uint)lVar13;
          uStack_2fc = (undefined2)((ulong)lVar13 >> 0x20);
          uStack_2fa = (undefined2)((ulong)lVar13 >> 0x30);
          func_0x0412a280(lVar20,(long)pcStack_2f8 - lVar20);
          goto joined_r0x0d687b5e;
        }
      }
      if ((ulong)*(uint *)(param_1 + 0xb0) != 0xffffffff) {
        (**(code **)(&UNK_0f47d948 + (ulong)*(uint *)(param_1 + 0xb0) * 8))
                  (&uStack_308,(ulong *)(param_1 + 0x50));
      }
      *(char **)(param_1 + 0x60) = pcStack_618;
      *(ulong *)(param_1 + 0x50) = uStack_628;
      *(char **)(param_1 + 0x58) = pcStack_620;
      uStack_628 = 0;
      pcStack_620 = (char *)0x0;
      pcStack_618 = (char *)0x0;
      *(undefined4 *)(param_1 + 0xb0) = 0;
joined_r0x0d687b5e:
      if ((char)pcStack_520 == '\x01') {
        if (((ulong)puStack_528 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puStack_528 & 0xff00ffffffffffff) - 8);
        }
        puStack_528 = (undefined *)0x0;
        if ((uStack_530 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_530 & 0xff00ffffffffffff) - 8);
        }
      }
      if ((uStack_628 & 1) == 0) {
        return;
      }
      func_0x0412a280(pcStack_618,uStack_628 & 0xfffffffffffffffe);
      return;
    }
    bVar27 = ((byte)*param_5 & 1) != 0;
    pbStack_418 = (byte *)((long)param_5 + 1);
    if (bVar27) {
      pbStack_418 = (byte *)param_5[2];
    }
    uStack_410 = (ulong)(byte)((byte)*param_5 >> 1);
    if (bVar27) {
      uStack_410 = param_5[1];
    }
    lStack_558 = 0;
    puStack_578 = (undefined8 *)0x0;
    uStack_570 = 0;
    uStack_56e = 0;
    uStack_568 = 0;
    uStack_566 = 0;
    uStack_560 = 0;
    puVar25 = &UNK_0f534730;
    puStack_438 = &UNK_0f534730;
    bStack_430 = 0;
    uStack_42f = 0;
    lStack_408 = 0;
    uStack_400 = 0;
    puStack_320 = &UNK_0f4e3460;
    ppuStack_310 = &puStack_438;
    uStack_318 = 0x10;
    uStack_300 = 0xf721a30;
    uStack_2fc = 0;
    uStack_2fa = 0;
    uStack_308 = 0xef46eb0;
    uStack_304 = 0;
    uStack_302 = 0;
    pcStack_2f8 = (char *)CONCAT44(pcStack_2f8._4_4_,0xffffffff);
    pcStack_2f0 = (char *)&uStack_2e0;
    uStack_2e8 = 0x800000000;
    puStack_1e0 = auStack_1d0;
    uStack_1d8 = 0x800000000;
    uStack_50 = 0xfffc;
    uStack_4e = 1;
    uStack_4c = 0xffffffff00000000;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_440 = 0;
    puStack_3f8 = &UNK_0f47dc60;
    puStack_5f8 = (undefined4 *)&UNK_04907260;
    pcStack_5f0 = (code *)0x0;
    lStack_5e8 = CONCAT35(lStack_5e8._5_3_,0x4fafc7320);
    puStack_608 = &uStack_440;
    uStack_5e0 = 0xf721a48;
    uStack_5d8 = 0;
    puStack_5d0 = &UNK_04907240;
    lStack_480 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (lStack_480 == 0) {
      func_0x048b0de0(&uStack_3a8,&uStack_629);
      _DAT_0f54fd90 = (undefined4)uStack_3a8;
      uRam000000000f54fd94 = uStack_3a8._4_4_;
      uVar7 = (undefined4)uStack_3a0;
      uVar8 = uStack_3a0._4_4_;
      uStack_3a8 = (undefined8 **)0x0;
      uStack_3a0 = (long *)0x0;
      plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar7;
      uRam000000000f54fd9c = uVar8;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        lVar13 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
      }
      plVar11 = uStack_3a0;
      if (uStack_3a0 != (long *)0x0) {
        LOCK();
        plVar1 = uStack_3a0 + 1;
        lVar13 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*uStack_3a0 + 0x10))(uStack_3a0);
          func_0x0412c2d0(plVar11);
        }
      }
      lStack_480 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    puStack_498 = &UNK_0d692f60;
    pcStack_490 = (code *)0x0;
    uStack_488 = CONCAT35(uStack_488._5_3_,0x3d82b763e);
    uStack_478 = 0;
    uStack_470 = 0;
    puStack_398 = &UNK_0d692f60;
    pcStack_390 = (code *)0x0;
    uStack_388 = 0xd82b763e;
    uStack_384 = 3;
    puStack_4a8 = (undefined *)0x0;
    uStack_3a8 = &puStack_578;
    uStack_380 = 0xf721a48;
    uStack_378 = 0;
    puStack_370 = &UNK_0d692e80;
    cVar10 = func_0x0ed6b4a0(&uStack_308,&puStack_320,&uStack_3a8,&puStack_608,&puStack_3f8);
    if ((pcStack_390 != (code *)0x0) && ((*pcStack_390)(&uStack_3a8), pcStack_490 != (code *)0x0)) {
      (*pcStack_490)(&puStack_4a8);
    }
    if (pcStack_5f0 != (code *)0x0) {
      (*pcStack_5f0)(&puStack_608);
    }
    if (cVar10 != '\0') {
      lStack_558 = lStack_408;
      bStack_588 = 1;
      uStack_600 = CONCAT62(uStack_56e,uStack_570);
      puStack_608 = puStack_578;
      puStack_5f8 = (undefined4 *)CONCAT62(uStack_566,uStack_568);
      uStack_570 = 0;
      uStack_56e = 0;
      uStack_568 = 0;
      uStack_566 = 0;
      pcStack_5f0 = (code *)CONCAT62(uStack_55e,uStack_560);
      lStack_5e8 = lStack_408;
      goto LAB_0d687649;
    }
  }
  func_0x0d6b2c60(&puStack_3f8,&pcStack_2f8);
  puStack_4a8 = puStack_3f8;
  uStack_4a0 = uStack_3f0;
  puStack_498 = puStack_3e8;
  puStack_3f8 = (undefined *)0x0;
  uStack_3f0 = 0;
  puStack_3e8 = (undefined *)0x0;
  pcStack_490 = pcStack_3e0;
  uStack_488 = uStack_3d8;
  lStack_480 = lStack_3d0;
  pcStack_3e0 = (code *)0x0;
  uStack_3d8 = 0;
  lStack_3d0 = 0;
  uStack_478 = uStack_3c8;
  uStack_470 = uStack_3c0;
  uStack_468 = uStack_3b8;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_45c = uStack_3ac;
  uStack_460 = uStack_3b0;
  cStack_458 = '\x01';
  func_0x0d682150(&uStack_3a8,&puStack_4a8);
  func_0x0d682350(&puStack_608,&uStack_3a8);
  func_0x0d30a100(&uStack_3a8);
  if (cStack_458 == '\x01') {
    func_0x05d85c50(&puStack_4a8);
  }
  func_0x05d85c50(&puStack_3f8);
LAB_0d687649:
  func_0x0490a470(&uStack_308);
  puStack_438 = puVar25;
  if ((bStack_430 & 1) != 0) {
    func_0x0412a280(uStack_420,
                    CONCAT62(uStack_42e,CONCAT11(uStack_42f,bStack_430)) & 0xfffffffffffffffe);
  }
  if ((uStack_566 & 0x8000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(CONCAT62(uStack_566,uStack_568) & 0xff00ffffffffffff) - 8);
  }
  uStack_568 = 0;
  uStack_566 = 0;
  if ((uStack_56e & 0x8000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(CONCAT62(uStack_56e,uStack_570) & 0xff00ffffffffffff) - 8);
  }
  uStack_308 = 0xd2540e64;
  uStack_304 = 0xd00f;
  uStack_302 = 0x5633;
  uStack_300 = 0x140f690;
  uStack_2fc = 0;
  uStack_2fa = 0;
  pcStack_2f8 = (char *)0x1;
  pcStack_2f0 = (char *)CONCAT44(pcStack_2f0._4_4_,0x45);
  if (bStack_588 == 0) {
    uStack_3a8 = (undefined8 **)0x0;
    uStack_3a0 = (long *)0x0;
    puStack_398 = (undefined *)0x0;
    func_0x0d3099e0(8,0x2d,&puStack_608,&uStack_3a8,&uStack_308);
    if (((ulong)uStack_3a8 & 1) != 0) {
      func_0x0412a280(puStack_398,(ulong)uStack_3a8 & 0xfffffffffffffffe);
    }
  }
  uStack_530 = uStack_600;
  bStack_4b8 = bStack_588;
  if ((bStack_588 & 1) == 0) {
    uStack_538 = puStack_608;
    puStack_528 = (undefined *)puStack_5f8;
    puStack_608 = (undefined8 *)0x0;
    uStack_600 = 0;
    puStack_5f8 = (undefined4 *)0x0;
    pcStack_520 = pcStack_5f0;
    lStack_518 = lStack_5e8;
    uStack_510 = uStack_5e0;
    pcStack_5f0 = (code *)0x0;
    lStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_508 = uStack_5d8;
    puStack_500 = puStack_5d0;
    uStack_4f8 = uStack_5c8;
    uStack_5d8 = 0;
    puStack_5d0 = (undefined *)0x0;
    uStack_5c8 = 0;
    uStack_4f0 = uStack_5c0;
    uStack_4ec = uStack_5bc;
    uStack_4e8 = uStack_5b8;
    uStack_4e0 = uStack_5b0;
    uStack_4d8 = uStack_5a8;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5a8 = 0;
    uStack_4d0 = (undefined4)uStack_5a0;
    uStack_4cc = uStack_5a0._4_4_;
    uStack_4c8 = (undefined4)uStack_598;
    uStack_4c4 = uStack_598._4_4_;
    uStack_4c0 = uStack_590;
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 0;
    func_0x0d30a100(&puStack_608);
  }
  else {
    uStack_600 = 0;
    uStack_538 = puStack_608;
    puStack_528 = (undefined *)puStack_5f8;
    pcStack_520 = pcStack_5f0;
    lStack_518 = lStack_5e8;
  }
  if ((bStack_4b8 & 1) != 0) {
    uStack_580 = *param_5;
    uStack_448 = param_5[1];
    uStack_550 = param_5[2];
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    *(undefined8 **)(param_1 + 0x20) = uStack_538;
    if ((*(ulong *)(param_1 + 0x28) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(param_1 + 0x28) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar21 = uStack_530;
    if ((uStack_530 & 0x80000000000000) != 0) {
      uVar21 = uStack_530 & 0xff00ffffffffffff;
      lVar24 = *(long *)(uVar21 - 8);
      lVar13 = lVar24 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar11 == (long *)0x0) {
        FUN_0eec74c0(lVar13,8);
      }
      *plVar11 = lVar24;
      func_0x0eee2f00(plVar11 + 1,uVar21,lVar24);
      *(undefined1 *)((long)plVar11 + lVar24 + 8) = 0;
      uVar21 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    *(ulong *)(param_1 + 0x28) = uVar21;
    if ((*(ulong *)(param_1 + 0x30) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(param_1 + 0x30) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar25 = puStack_528;
    if (((ulong)puStack_528 & 0x80000000000000) != 0) {
      uVar21 = (ulong)puStack_528 & 0xff00ffffffffffff;
      lVar24 = *(long *)(uVar21 - 8);
      lVar13 = lVar24 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar11 == (long *)0x0) {
        FUN_0eec74c0(lVar13,8);
      }
      *plVar11 = lVar24;
      func_0x0eee2f00(plVar11 + 1,uVar21,lVar24);
      *(undefined1 *)((long)plVar11 + lVar24 + 8) = 0;
      puVar25 = (undefined *)((ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    *(undefined **)(param_1 + 0x30) = puVar25;
    puVar25 = (undefined *)0x0;
    uVar17 = 0;
    if ((ushort)((int)pcStack_520 - 1U) < 0xb) {
      uVar21 = (ulong)((int)pcStack_520 - 1U & 0xffff);
      puVar25 = &UNK_01dd5c74 + *(int *)(&UNK_01dd5c74 + uVar21 * 4);
      uVar17 = *(undefined8 *)(&UNK_01dd5ca0 + uVar21 * 8);
    }
    func_0x0412f5e0(param_1 + 0x38,puVar25,uVar17);
    func_0x0d689520(param_1,uStack_548,uStack_540);
    if ((ulong)*(uint *)(param_1 + 0xb0) != 0xffffffff) {
      (**(code **)(&UNK_0f47d948 + (ulong)*(uint *)(param_1 + 0xb0) * 8))
                (&uStack_308,param_1 + 0x50);
    }
    *(undefined4 *)(param_1 + 0xb0) = 2;
    *(ulong *)(param_1 + 0x50) = uStack_580;
    *(ulong *)(param_1 + 0x58) = uStack_448;
    *(ulong *)(param_1 + 0x60) = uStack_550;
    uVar22 = (ulong)((uint)(uStack_580 >> 1) & 0x7f);
    uVar21 = param_1 + 0x51;
    if ((uStack_580 & 1) != 0) {
      uVar22 = uStack_448;
      uVar21 = uStack_550;
    }
    *(ulong *)(param_1 + 0x68) = uVar21 + lStack_518;
    *(ulong *)(param_1 + 0x70) = uVar22 - lStack_518;
  }
  if ((bStack_4b8 & 1) == 0) {
    func_0x0d30a100(&uStack_538);
  }
  else {
    if (((ulong)puStack_528 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_528 & 0xff00ffffffffffff) - 8);
    }
    puStack_528 = (undefined *)0x0;
    if ((uStack_530 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_530 & 0xff00ffffffffffff) - 8);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x12d006d  A Minecraft Document must have exactly two members: "format_version" and a payload member
 * 0x12d007d  ment must have exactly two members: "format_version" and a payload member
 * 0x12d008d  xactly two members: "format_version" and a payload member
 * 0x12d009d  rs: "format_version" and a payload member
 * 0x12d00ad  ion" and a payload member
 * 0x12d00b6  a payload member
 * 0x12ea1ed  The payload of the Minecraft Document is missing
 * 0x12ea1fd  he Minecraft Document is missing
 * 0x12ea20d  ument is missing
 * 0x131dd37  Malformed format version
 */
