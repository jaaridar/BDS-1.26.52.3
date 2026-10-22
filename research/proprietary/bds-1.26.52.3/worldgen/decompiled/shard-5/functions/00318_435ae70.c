/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x445ae70 (ELF vaddr 0x435ae70)
 * Label: caller-of-callee
 * Body:  [[0445ae70, 0445b18c] [0445b190, 0445b208] [0445b210, 0445b2ee] [0445b2f0, 0445b339] [0445b340, 0445c822] [0445c830, 0445ca73] [0445ca80, 0445cb55] [0445cb60, 0445cc23] [0445cc30, 0445cce3] [0445ccf0, 0445cdf8] [0445ce00, 0445cee7] [0445cef0, 0445cf0d] [0445cf10, 0445d11a] [0445d120, 0445d16a] [0445d170, 0445d1ab] [0445d1b0, 0445d1c3] [0445d1d0, 0445d1db] [0445d1e0, 0445d222] [0445d230, 0445d255] [0445d260, 0445d2b8] [0445d2c0, 0445d302] [0445d310, 0445d323] [0445d330, 0445d385] [0445d390, 0445d408] [0445d410, 0445d437] [0445d440, 0445d453] [0445d460, 0445d480] [0445d490, 0445d4cb] [0445d4d0, 0445d4e3] [0445d4f0, 0445d554] [0445d560, 0445d595] [0445d5a0, 0445d641] [0445d650, 0445d685] [0445d690, 0445d705] [0445d710, 0445d768] [0445d770, 0445d905] [0445d910, 0445d98e] [0445d990, 0445d9d2] [0445d9e0, 0445da0e] [0445da10, 0445dbbe] [0445dbc0, 0445dc06] [0445dc10, 0445dcd1] [0445dce0, 0445dda5] [0445ddb0, 0445de2a] [0445de30, 0445deb6] [0445dec0, 0445ded2] [0445dee0, 0445df1e] [0445df20, 0445df32] [0445df40, 0445df79] [0445df80, 0445df92] [0445dfa0, 0445dff2] [0445e000, 0445e0b3] [0445e0c0, 0445e1bd] [0445e1c0, 0445e22c] [0445e230, 0445e2b4] [0445e2c0, 0445e344] [0445e350, 0445e38a] [0445e390, 0445e6f8] [0445e700, 0445e733] [0445e740, 0445e7d3] [0445e7e0, 0445e815] [0445e820, 0445e9e6] [0445e9f0, 0445edd7] [0445ede0, 0445f4e5]]
 * Ghidra: FUN_0445ae70
 */


/* WARNING: Removing unreachable block (ram,0x0445cf71) */
/* WARNING: Removing unreachable block (ram,0x0445cf90) */
/* WARNING: Removing unreachable block (ram,0x0445cfac) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0445ae70(uint *******param_1,uint *******param_2,int param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,undefined8 *param_7,long *param_8,byte *param_9,
                  undefined1 *param_10,uint *param_11,long *param_12,long param_13,long *param_14,
                  long param_15)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  uint *******pppppppuVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint *******pppppppuVar13;
  uint *puVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  uint ******ppppppuVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong extraout_RDX;
  uint ******ppppppuVar20;
  undefined1 auVar21 [8];
  undefined1 auVar22 [8];
  ulong *puVar23;
  long lVar24;
  uint uVar25;
  uint ******ppppppuVar26;
  uint ******ppppppuVar27;
  uint ******ppppppuVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  long lVar32;
  ulong *puVar33;
  ulong uVar34;
  uint *******pppppppuVar35;
  long lVar36;
  long lVar37;
  bool bVar38;
  undefined1 auVar39 [4];
  uint uVar40;
  uint uVar41;
  undefined1 auStack_598 [4];
  uint uStack_594;
  undefined8 uStack_590;
  uint *******pppppppuStack_588;
  uint *******pppppppuStack_580;
  uint *******pppppppuStack_578;
  int iStack_570;
  undefined1 uStack_569;
  undefined1 auStack_568 [4];
  uint uStack_564;
  undefined8 uStack_560;
  uint *******pppppppuStack_558;
  uint *******pppppppuStack_548;
  uint *******pppppppuStack_540;
  undefined8 uStack_538;
  uint *******pppppppuStack_530;
  uint *******pppppppuStack_528;
  ulong *puStack_518;
  ulong *puStack_510;
  ulong *puStack_508;
  undefined1 auStack_4f8 [8];
  uint *******pppppppuStack_4f0;
  uint *******pppppppuStack_4e8;
  uint *******pppppppuStack_4d8;
  long lStack_4d0;
  uint *******pppppppuStack_4c8;
  uint *******pppppppuStack_4c0;
  long lStack_4b8;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  undefined1 auStack_468 [4];
  uint uStack_464;
  uint uStack_460;
  uint uStack_45c;
  uint *******pppppppuStack_458;
  uint *******pppppppuStack_448;
  uint *******pppppppuStack_440;
  uint *******pppppppuStack_438;
  uint *******pppppppuStack_430;
  uint *******pppppppuStack_428;
  uint *******pppppppuStack_420;
  undefined1 auStack_418 [8];
  uint *******pppppppuStack_410;
  uint *******pppppppuStack_408;
  ulong uStack_400;
  undefined8 uStack_3f0;
  uint *******pppppppuStack_338;
  uint *******pppppppuStack_330;
  uint *******pppppppuStack_328;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  long lStack_2f8;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  undefined1 auStack_2c8 [4];
  uint uStack_2c4;
  undefined8 uStack_2c0;
  uint *******pppppppuStack_2b8;
  long lStack_2b0;
  undefined1 auStack_2a0 [80];
  undefined1 auStack_250 [40];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [8];
  long lStack_208;
  long lStack_200;
  byte bStack_1f0;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  undefined4 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte bStack_d0;
  undefined4 uStack_cf;
  undefined4 uStack_cb;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  undefined2 uStack_bf;
  undefined5 uStack_bd;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined7 uStack_9f;
  uint *******pppppppuStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  uint *******pppppppuStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  uint *******pppppppuStack_60;
  uint *******pppppppuStack_58;
  uint *******pppppppuStack_50;
  undefined8 uStack_48;
  uint *******pppppppuStack_40;
  uint *******pppppppuStack_38;
  
  pppppppuStack_580 = param_2;
  pppppppuStack_578 = param_1;
  iStack_570 = param_3;
  uStack_318 = param_5;
  lStack_310 = param_6;
  uStack_ec = param_4;
  if ((param_3 == 0) && (param_12 != (long *)0x0)) {
    pppppppuVar15 = (uint *******)*param_7;
    pppppppuStack_540 = (uint *******)param_7[1];
    if (pppppppuVar15 != pppppppuStack_540) {
      pppppppuStack_4d8 = (uint *******)(param_12 + 0x22);
      do {
        uVar25 = *(uint *)pppppppuVar15;
        lVar8 = param_12[0x22];
        lVar32 = param_12[0x23];
        lVar36 = lVar8;
        if (lVar8 != lVar32) {
          do {
            func_0x04214fd0(auStack_2c8,lVar36);
            uVar40 = uStack_2c0._4_4_;
            func_0x04214ea0(auStack_2c8);
            lVar8 = lVar36;
            if (uVar40 == uVar25) break;
            lVar36 = lVar36 + 0xd8;
            lVar8 = lVar32;
          } while (lVar36 != lVar32);
          lVar32 = param_12[0x23];
        }
        if (uVar25 < 0x13 && (-1 < (int)uVar25 && lVar8 == lVar32)) {
          lVar8 = (ulong)uVar25 * 3;
          pppppppuVar16 = *(uint ********)(&UNK_0ef04490 + (ulong)uVar25 * 0x18);
          pppppppuVar10 = (uint *******)func_0x0eee2e90(pppppppuVar16);
          if ((uint *******)0xfffffffffffffff7 < pppppppuVar10) {
            func_0x04882e30();
            goto LAB_0445f2f6;
          }
          pppppppuStack_548 = pppppppuVar16;
          if (pppppppuVar10 < (uint *******)0x17) {
            auStack_418[0] = (char)pppppppuVar10 * '\x02';
            pppppppuVar16 = (uint *******)(auStack_418 + 1);
            if (pppppppuVar10 != (uint *******)0x0) goto LAB_0445cbae;
          }
          else {
            lVar32 = ((ulong)pppppppuVar10 | 7) + 1;
            if (((ulong)pppppppuVar10 | 7) == 0x17) {
              lVar32 = 0x1a;
            }
            lStack_4d0 = lVar8;
            pppppppuVar16 = (uint *******)FUN_0ee32660(lVar32);
            auStack_418 = (undefined1  [8])(lVar32 + 1);
            lVar8 = lStack_4d0;
            pppppppuStack_410 = pppppppuVar10;
            pppppppuStack_408 = pppppppuVar16;
LAB_0445cbae:
            func_0x0eee2ee0(pppppppuVar16,pppppppuStack_548,pppppppuVar10);
          }
          *(byte *)((long)pppppppuVar16 + (long)pppppppuVar10) = 0;
          func_0x04216c50(auStack_2c8,uVar25,auStack_418,*(undefined4 *)(&UNK_0ef04498 + lVar8 * 8),
                          *(undefined8 *)(&UNK_0ef044a0 + lVar8 * 8));
          uVar30 = param_12[0x23];
          if (uVar30 < (ulong)param_12[0x24]) {
            func_0x04214fd0(uVar30,auStack_2c8);
            lVar8 = uVar30 + 0xd8;
            param_12[0x23] = lVar8;
          }
          else {
            lVar8 = func_0x04212fa0(pppppppuStack_4d8,auStack_2c8);
          }
          param_12[0x23] = lVar8;
          func_0x04214ea0(auStack_2c8);
          if (((ulong)auStack_418 & 1) != 0) {
            func_0x0412a280(pppppppuStack_408,(ulong)auStack_418 & 0xfffffffffffffffe);
          }
        }
        pppppppuVar15 = (uint *******)((long)pppppppuVar15 + 4);
      } while (pppppppuVar15 != pppppppuStack_540);
    }
  }
  pppppppuStack_338 = (uint *******)0x0;
  pppppppuStack_330 = (uint *******)0x0;
  pppppppuStack_328 = (uint *******)0x0;
  uStack_488 = 0;
  uStack_480 = 0;
  lStack_478 = 0;
  puStack_518 = (ulong *)0x0;
  puStack_510 = (ulong *)0x0;
  puStack_508 = (ulong *)0x0;
  pppppppuStack_58 = (uint *******)0x0;
  pppppppuStack_50 = (uint *******)0x0;
  uStack_48 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  uStack_308 = 0;
  uStack_300 = 0;
  lStack_2f8 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  auStack_4f8 = (undefined1  [8])0x0;
  pppppppuStack_4f0 = (uint *******)0x0;
  pppppppuStack_4e8 = (uint *******)0x0;
  pppppppuStack_4c8 = (uint *******)0x0;
  pppppppuStack_4c0 = (uint *******)0x0;
  lStack_4b8 = 0;
  pppppppuStack_428 = (uint *******)0x0;
  pppppppuStack_420 = (uint *******)0x0;
  pppppppuStack_438 = (uint *******)0x0;
  pppppppuStack_430 = (uint *******)0x0;
  pppppppuStack_448 = (uint *******)0x0;
  pppppppuStack_440 = (uint *******)0x0;
  pppppppuStack_100 = (uint *******)(param_13 + 0x4c);
  pppppppuStack_f8 = (uint *******)(param_13 + 0x50);
  lStack_4d0 = param_13 + 0x30;
  pppppppuStack_548 = (uint *******)(param_13 + 0x18);
  pppppppuStack_540 = (uint *******)(param_12 + 0xf);
  pppppppuStack_4d8 = (uint *******)(param_12 + 5);
  pppppppuVar15 = pppppppuStack_580;
LAB_0445aff0:
  pppppppuVar10 = pppppppuStack_4c0;
  pppppppuVar16 = (uint *******)*param_8;
  if (((((uint *******)((long)pppppppuVar16 + 2) <= pppppppuVar15) &&
       (*(byte *)((long)pppppppuStack_578 + (long)pppppppuVar16) == 0x6d)) &&
      (((byte *)((long)pppppppuStack_578 + 1))[(long)pppppppuVar16] == 0x3d)) ||
     (uVar30 = (long)pppppppuVar15 - (long)pppppppuVar16,
     pppppppuVar15 < pppppppuVar16 || uVar30 == 0)) {
    _auStack_2c8 = (undefined1  [8])&uStack_2c0;
    uStack_2c0 = (uint *******)0x0;
    pppppppuStack_2b8 = (uint *******)0x0;
    auStack_418 = (undefined1  [8])&pppppppuStack_410;
    pppppppuStack_410 = (uint *******)0x0;
    pppppppuStack_408 = (uint *******)0x0;
    pppppppuVar15 = pppppppuStack_4c0;
    if (pppppppuStack_4c8 != pppppppuStack_4c0) {
      pppppppuVar15 = pppppppuStack_4c8;
      do {
        func_0x049dcb70(auStack_418,pppppppuVar15,pppppppuVar15);
        if ((extraout_RDX & 1) == 0) {
          func_0x049dcb70(auStack_2c8,pppppppuVar15,pppppppuVar15);
        }
        pppppppuVar15 = pppppppuVar15 + 10;
      } while (pppppppuVar15 != pppppppuVar10);
      pppppppuVar15 = pppppppuStack_4c0;
      if (pppppppuStack_2b8 != (uint *******)0x0) {
        pppppppuStack_548 = pppppppuStack_4c0;
        pppppppuVar16 = pppppppuStack_4c8;
        if ((long)pppppppuStack_4c0 - (long)pppppppuStack_4c8 == 0) {
LAB_0445ce28:
          pppppppuVar15 = pppppppuStack_4c0;
          if (pppppppuVar16 == pppppppuStack_548) goto LAB_0445d019;
        }
        else {
          pppppppuStack_540 = uStack_2c0;
          if (uStack_2c0 != (uint *******)0x0) {
            pppppppuStack_580 = pppppppuStack_4c8;
            do {
              bVar38 = (*(byte *)pppppppuVar16 & 1) != 0;
              ppppppuVar27 = (uint ******)((long)pppppppuVar16 + 1);
              if (bVar38) {
                ppppppuVar27 = pppppppuVar16[2];
              }
              pppppppuVar15 = pppppppuStack_540;
              pppppppuStack_578 = pppppppuVar16;
              ppppppuVar17 = (uint ******)(ulong)(*(byte *)pppppppuVar16 >> 1);
              if (bVar38) {
                ppppppuVar17 = pppppppuVar16[1];
              }
              do {
                bVar38 = (*(byte *)(pppppppuVar15 + 4) & 1) != 0;
                ppppppuVar28 = (uint ******)((long)pppppppuVar15 + 0x21);
                if (bVar38) {
                  ppppppuVar28 = pppppppuVar15[6];
                }
                ppppppuVar20 = (uint ******)(ulong)(*(byte *)(pppppppuVar15 + 4) >> 1);
                if (bVar38) {
                  ppppppuVar20 = pppppppuVar15[5];
                }
                ppppppuVar26 = ppppppuVar17;
                if (ppppppuVar20 < ppppppuVar17) {
                  ppppppuVar26 = ppppppuVar20;
                }
                iVar7 = func_0x0eee2ff0(ppppppuVar27,ppppppuVar28,ppppppuVar26);
                if (iVar7 == 0) {
                  if (ppppppuVar20 <= ppppppuVar17) goto LAB_0445ce05;
                }
                else if (-1 < iVar7) {
LAB_0445ce05:
                  iVar7 = func_0x0eee2ff0(ppppppuVar28,ppppppuVar27,ppppppuVar26);
                  pppppppuVar16 = pppppppuStack_578;
                  if (iVar7 == 0) {
                    if (ppppppuVar17 <= ppppppuVar20) goto LAB_0445ce28;
                  }
                  else if (-1 < iVar7) goto LAB_0445ce28;
                  pppppppuVar15 = pppppppuVar15 + 1;
                }
                pppppppuVar15 = (uint *******)*pppppppuVar15;
              } while (pppppppuVar15 != (uint *******)0x0);
              pppppppuVar16 = pppppppuStack_578 + 10;
            } while (pppppppuVar16 != pppppppuStack_548);
            goto LAB_0445ce28;
          }
          pppppppuVar16 =
               pppppppuStack_4c8 +
               ((((long)pppppppuStack_4c0 - (long)pppppppuStack_4c8) - 0x50U) / 0x50) * 10 + 10;
          if (pppppppuVar16 == pppppppuStack_4c0) goto LAB_0445d019;
        }
        pppppppuVar15 = pppppppuVar16 + 10;
        pppppppuVar10 = pppppppuStack_548;
        pppppppuVar35 = pppppppuVar16;
        if (pppppppuVar15 != pppppppuStack_548) {
LAB_0445ce5f:
          do {
            pppppppuStack_578 = pppppppuVar15;
            pppppppuStack_540 = pppppppuVar16;
            if (uStack_2c0 != (uint *******)0x0) {
              bVar38 = (*(byte *)pppppppuVar15 & 1) != 0;
              ppppppuVar27 = (uint ******)((long)pppppppuVar35 + 0x51);
              if (bVar38) {
                ppppppuVar27 = pppppppuVar35[0xc];
              }
              pppppppuVar16 = uStack_2c0;
              ppppppuVar17 = (uint ******)(ulong)(*(byte *)pppppppuVar15 >> 1);
              if (bVar38) {
                ppppppuVar17 = pppppppuVar35[0xb];
              }
              do {
                bVar38 = (*(byte *)(pppppppuVar16 + 4) & 1) != 0;
                ppppppuVar28 = (uint ******)((long)pppppppuVar16 + 0x21);
                if (bVar38) {
                  ppppppuVar28 = pppppppuVar16[6];
                }
                ppppppuVar20 = (uint ******)(ulong)(*(byte *)(pppppppuVar16 + 4) >> 1);
                if (bVar38) {
                  ppppppuVar20 = pppppppuVar16[5];
                }
                ppppppuVar26 = ppppppuVar17;
                if (ppppppuVar20 < ppppppuVar17) {
                  ppppppuVar26 = ppppppuVar20;
                }
                iVar7 = func_0x0eee2ff0(ppppppuVar27,ppppppuVar28,ppppppuVar26);
                if (iVar7 == 0) {
                  if (ppppppuVar20 <= ppppppuVar17) goto LAB_0445cef5;
                }
                else if (-1 < iVar7) {
LAB_0445cef5:
                  iVar7 = func_0x0eee2ff0(ppppppuVar28,ppppppuVar27,ppppppuVar26);
                  if (iVar7 == 0) {
                    if (ppppppuVar20 < ppppppuVar17) goto LAB_0445cea3;
                  }
                  else if (iVar7 < 0) {
LAB_0445cea3:
                    pppppppuVar16 = pppppppuVar16 + 1;
                    goto LAB_0445cea7;
                  }
                  pppppppuVar15 = pppppppuStack_578 + 10;
                  pppppppuVar16 = pppppppuStack_540;
                  pppppppuVar10 = pppppppuStack_4c0;
                  pppppppuVar35 = pppppppuStack_578;
                  if (pppppppuVar15 != pppppppuStack_548) goto LAB_0445ce5f;
                  goto LAB_0445cf4e;
                }
LAB_0445cea7:
                pppppppuVar16 = (uint *******)*pppppppuVar16;
              } while (pppppppuVar16 != (uint *******)0x0);
            }
            pppppppuVar16 = pppppppuStack_540;
            pppppppuVar35 = pppppppuStack_578;
            func_0x04238940(pppppppuStack_540,pppppppuStack_578);
            pppppppuVar16 = pppppppuVar16 + 10;
            pppppppuVar15 = pppppppuVar35 + 10;
            pppppppuVar10 = pppppppuStack_4c0;
          } while (pppppppuVar15 != pppppppuStack_548);
        }
LAB_0445cf4e:
        pppppppuVar15 = pppppppuStack_4c0;
        if (pppppppuVar16 != pppppppuVar10) {
          while (pppppppuVar15 = pppppppuVar16, pppppppuVar16 != pppppppuVar10) {
            pppppppuVar10 = pppppppuVar10 + -10;
            func_0x042388b0(pppppppuVar10);
          }
        }
      }
    }
LAB_0445d019:
    pppppppuStack_4c0 = pppppppuVar15;
    func_0x049dc470(auStack_418,pppppppuStack_410);
    func_0x049dc470(auStack_2c8,uStack_2c0);
    uStack_538 = (uint *******)0x0;
    pppppppuStack_530 = (uint *******)0x0;
    pppppppuStack_528 = (uint *******)0x0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    cVar5 = func_0x04424470(&pppppppuStack_448);
    if (cVar5 != '\0') {
      cVar5 = func_0x041d8380();
      if (cVar5 == '\0') {
        func_0x04489e60(&UNK_01dcf1d5,&UNK_013dce14,0x5a50,&UNK_013dceba);
      }
      goto LAB_0445dadb;
    }
    uStack_2c0 = (uint *******)0x0;
    pppppppuStack_2b8 = (uint *******)0x0;
    _auStack_2c8 = (undefined1  [8])&uStack_2c0;
    func_0x04424490(auStack_418,&pppppppuStack_448);
    func_0x04424490(auStack_598,&pppppppuStack_430);
    pppppppuVar15 = pppppppuStack_410;
    auVar22 = auStack_418;
    pppppppuVar16 = pppppppuStack_410;
    if ((auStack_418 == (undefined1  [8])pppppppuStack_410) ||
       (auVar21 = auStack_418, _auStack_598 == uStack_590)) goto LAB_0445d277;
LAB_0445d140:
    pppppppuVar16 = uStack_590;
    if (_auStack_598 != uStack_590) {
      if ((*(byte *)auVar21 & 1) == 0) {
        ppppppuVar27 = (uint ******)(ulong)(*(byte *)auVar21 >> 1);
        pppppppuVar10 = _auStack_598 + 2;
        do {
          bVar2 = *(byte *)(pppppppuVar10 + -2);
          if ((bVar2 & 1) == 0) {
            ppppppuVar17 = (uint ******)(ulong)(bVar2 >> 1);
          }
          else {
            ppppppuVar17 = pppppppuVar10[-1];
          }
          if (ppppppuVar17 == ppppppuVar27) {
            if ((bVar2 & 1) == 0) {
              ppppppuVar17 = (uint ******)((long)pppppppuVar10 + -0xf);
            }
            else {
              ppppppuVar17 = *pppppppuVar10;
            }
            iVar7 = func_0x0eee3000(ppppppuVar17,(byte *)((long)auVar21 + 1),ppppppuVar27);
            if (iVar7 == 0) goto LAB_0445d120;
          }
          pppppppuVar35 = pppppppuVar10 + 2;
          pppppppuVar10 = pppppppuVar10 + 4;
        } while (pppppppuVar35 != pppppppuVar16);
      }
      else {
        ppppppuVar27 = *(uint *******)((long)auVar21 + 8);
        pppppppuVar10 = _auStack_598 + 2;
        do {
          bVar2 = *(byte *)(pppppppuVar10 + -2);
          if ((bVar2 & 1) == 0) {
            ppppppuVar17 = (uint ******)(ulong)(bVar2 >> 1);
          }
          else {
            ppppppuVar17 = pppppppuVar10[-1];
          }
          if (ppppppuVar17 == ppppppuVar27) {
            if ((bVar2 & 1) == 0) {
              ppppppuVar17 = (uint ******)((long)pppppppuVar10 + -0xf);
            }
            else {
              ppppppuVar17 = *pppppppuVar10;
            }
            iVar7 = func_0x0eee3000(ppppppuVar17,*(uint *******)((long)auVar21 + 0x10),ppppppuVar27)
            ;
            if (iVar7 == 0) goto LAB_0445d120;
          }
          pppppppuVar35 = pppppppuVar10 + 2;
          pppppppuVar10 = pppppppuVar10 + 4;
        } while (pppppppuVar35 != pppppppuVar16);
      }
    }
    goto LAB_0445d133;
  }
  pppppppuVar10 = (uint *******)((long)pppppppuStack_578 + (long)pppppppuVar16);
  lVar8 = memchr(pppppppuVar10,10,uVar30);
  if ((lVar8 != 0) && (lVar8 = lVar8 - (long)pppppppuStack_578, lVar8 != -1)) {
    uVar29 = lVar8 - (long)pppppppuVar16;
    if (uVar30 < (ulong)(lVar8 - (long)pppppppuVar16)) {
      uVar29 = uVar30;
    }
    if ((uVar29 == 0) ||
       (pppppppuVar35 =
             (uint *******)(uVar29 - (*(byte *)((long)pppppppuVar10 + (uVar29 - 1)) == 0xd)),
       pppppppuVar35 < (uint *******)0x3)) goto LAB_0445c715;
    bVar2 = *(byte *)pppppppuVar10;
    plVar9 = (long *)func_0x0eee38c0();
    if ((((*(byte *)(*plVar9 + 1 + (ulong)bVar2 * 2) & 2) == 0) ||
        (*(byte *)((long)pppppppuVar10 + 1) != 0x3d)) ||
       ((bVar2 != 0x73 && (*(byte *)((long)pppppppuVar10 + 2) == 0x20)))) goto LAB_0445c715;
    *param_8 = lVar8 + 1;
    pppppppuStack_588 = (uint *******)CONCAT71(pppppppuStack_588._1_7_,1);
    bVar2 = *(byte *)pppppppuVar10;
    _auStack_598 = pppppppuVar10;
    uStack_590 = pppppppuVar35;
    if (bVar2 != 0x61) {
      if (bVar2 == 99) {
        if (*(byte *)((long)pppppppuVar10 + 1) != 0x3d) goto LAB_0445b340;
        func_0x044a1b90(auStack_2c8);
        cVar5 = func_0x044585d0(_auStack_598,uStack_590,auStack_2c8,param_15);
        iVar7 = 1;
        auVar22 = _auStack_2c8;
        pppppppuVar16 = pppppppuStack_2b8;
        if (cVar5 != '\0') {
          iVar7 = 2;
          func_0x044a1f10(pppppppuStack_540,auStack_2c8);
          auVar22 = _auStack_2c8;
          pppppppuVar16 = pppppppuStack_2b8;
        }
      }
      else {
        if ((bVar2 != 0x62) || (*(byte *)((long)pppppppuVar10 + 1) != 0x3d)) {
LAB_0445b340:
          cVar5 = func_0x041d8380();
          if (cVar5 == '\0') {
            func_0x04489e60(&UNK_014fe77f,&UNK_013dce14,0x52a0,&UNK_012bb08e);
          }
          goto LAB_0445aff0;
        }
        auStack_418 = (undefined1  [8])0x0;
        pppppppuStack_410 = (uint *******)0x0;
        pppppppuStack_408 = (uint *******)0x0;
        _auStack_568 = (uint *******)0x0;
        uStack_560 = (uint *******)0x0;
        pppppppuStack_558 = (uint *******)0x0;
        cVar5 = func_0x044aea90((byte *)((long)pppppppuVar10 + 2),(byte *)((long)pppppppuVar35 + -2)
                                ,0x3a,auStack_568);
        pppppppuVar16 = uStack_590;
        pppppppuVar15 = _auStack_598;
        if (cVar5 == '\0') {
          pppppppuStack_2b8 = (uint *******)FUN_0ee32660(0x40);
          uVar12 = _UNK_01492a26;
          *(ulong *)((long)pppppppuStack_2b8 + 0x2f) = CONCAT71(_UNK_01492a1f,DAT_01492a1e);
          *(undefined8 *)((long)pppppppuStack_2b8 + 0x37) = uVar12;
          ppppppuVar27 = (uint ******)CONCAT17(DAT_01492a1e,_UNK_01492a17);
          pppppppuStack_2b8[4] = _DAT_01492a0f;
          pppppppuStack_2b8[5] = ppppppuVar27;
          ppppppuVar27 = _UNK_01492a07;
          pppppppuStack_2b8[2] = _DAT_014929ff;
          pppppppuStack_2b8[3] = ppppppuVar27;
          uVar41 = _UNK_014929fb;
          uVar40 = _UNK_014929f7;
          uVar25 = _UNK_014929f3;
          *(uint *)pppppppuStack_2b8 = _DAT_014929ef;
          *(uint *)((long)pppppppuStack_2b8 + 4) = uVar25;
          *(uint *)(pppppppuStack_2b8 + 1) = uVar40;
          *(uint *)((long)pppppppuStack_2b8 + 0xc) = uVar41;
          *(byte *)((long)pppppppuStack_2b8 + 0x3f) = 0;
          _auStack_2c8 = (undefined1  [8])0x41;
          uStack_2c0 = (uint *******)0x3f;
          func_0x044525e0(pppppppuVar15,pppppppuVar16,0,auStack_2c8);
          if (((ulong)_auStack_2c8 & 1) != 0) {
            func_0x0412a280(pppppppuStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
          }
          iVar7 = 1;
        }
        else {
          pppppppuVar10 = (uint *******)func_0x0eee2e90(&UNK_014fc588);
          pppppppuVar15 = _auStack_568;
          pppppppuVar16 = (uint *******)((ulong)_auStack_568 >> 1 & 0x7f);
          if (((ulong)_auStack_568 & 1) == 0) {
            if (pppppppuVar10 == pppppppuVar16) goto LAB_0445b635;
LAB_0445b662:
            pppppppuVar35 = (uint *******)func_0x0eee2e90(&UNK_014fc58b);
            if (((ulong)pppppppuVar15 & 1) != 0) {
              pppppppuVar16 = uStack_560;
            }
            iVar7 = 2;
            if (pppppppuVar35 == pppppppuVar16) {
              if (pppppppuVar35 == (uint *******)0xffffffffffffffff) goto LAB_0445f319;
              pppppppuVar16 = (uint *******)(auStack_568 + 1);
              if (((ulong)pppppppuVar15 & 1) != 0) {
                pppppppuVar16 = pppppppuStack_558;
              }
              iVar6 = func_0x0eee3000(pppppppuVar16,&UNK_014fc58b,pppppppuVar35);
              if (iVar6 == 0) goto LAB_0445b6b9;
            }
          }
          else {
            if (pppppppuVar10 != uStack_560) goto LAB_0445b662;
LAB_0445b635:
            if (pppppppuVar10 == (uint *******)0xffffffffffffffff) goto LAB_0445f30f;
            pppppppuVar35 = (uint *******)(auStack_568 + 1);
            if (((ulong)_auStack_568 & 1) != 0) {
              pppppppuVar35 = pppppppuStack_558;
            }
            iVar7 = func_0x0eee3000(pppppppuVar35,&UNK_014fc588,pppppppuVar10);
            if (iVar7 != 0) goto LAB_0445b662;
LAB_0445b6b9:
            uStack_4a8 = uStack_4a8 & 0xffffffff00000000;
            pppppppuVar16 = (uint *******)((ulong)auStack_418 >> 1 & 0x7f);
            pppppppuVar15 = (uint *******)(auStack_418 + 1);
            if (((ulong)auStack_418 & 1) != 0) {
              pppppppuVar16 = pppppppuStack_410;
              pppppppuVar15 = pppppppuStack_408;
            }
            cVar5 = func_0x044529e0(_auStack_598,uStack_590,pppppppuVar15,pppppppuVar16,&uStack_4a8,
                                    param_15);
            pppppppuVar15 = _auStack_568;
            iVar7 = 1;
            if (cVar5 != '\0') {
              pppppppuVar16 = (uint *******)((ulong)_auStack_568 >> 1 & 0x7f);
              if (((ulong)_auStack_568 & 1) == 0) {
                if (pppppppuVar10 == pppppppuVar16) goto LAB_0445b8f0;
LAB_0445b743:
                uVar25 = (uint)uStack_4a8;
              }
              else {
                if (pppppppuVar10 != uStack_560) goto LAB_0445b743;
LAB_0445b8f0:
                if (pppppppuVar10 == (uint *******)0xffffffffffffffff) goto LAB_0445f328;
                pppppppuVar35 = (uint *******)(auStack_568 + 1);
                if (((ulong)_auStack_568 & 1) != 0) {
                  pppppppuVar35 = pppppppuStack_558;
                }
                iVar6 = func_0x0eee3000(pppppppuVar35,&UNK_014fc588,pppppppuVar10);
                uVar25 = (uint)uStack_4a8;
                if ((uint)uStack_4a8 == 0xffffffff && iVar6 == 0) {
                  cVar5 = func_0x0d567a50();
                  iVar7 = 2;
                  if (cVar5 == '\0') {
                    func_0x04489e60(&UNK_01dcf1d5,&UNK_013dce14,0x51aa,&UNK_01492a2f);
                  }
                  goto LAB_0445bd61;
                }
              }
              if ((int)uVar25 < 0) {
                if (((ulong)pppppppuVar15 & 1) != 0) {
                  pppppppuVar16 = uStack_560;
                }
                pppppppuVar10 = (uint *******)((long)pppppppuVar16 + 2);
                if ((uint *******)0xfffffffffffffff7 < pppppppuVar10) goto LAB_0445f332;
                pppppppuStack_40 = _auStack_598;
                pppppppuStack_38 = uStack_590;
                if (pppppppuVar10 < (uint *******)0x17) {
                  pppppppuStack_530 = (uint *******)0x0;
                  pppppppuStack_528 = (uint *******)0x0;
                  uStack_538 = (uint *******)(ulong)CONCAT21(0x3d62,(char)pppppppuVar10 * '\x02');
                  pbVar31 = (byte *)((long)&uStack_538 + 3);
                  if (pppppppuVar16 != (uint *******)0x0) goto LAB_0445bc1d;
                }
                else {
                  uVar30 = ((ulong)pppppppuVar10 | 7) + 1;
                  if (((ulong)pppppppuVar10 | 7) == 0x17) {
                    uVar30 = 0x1a;
                  }
                  pppppppuStack_528 = (uint *******)FUN_0ee32660(uVar30);
                  uStack_538 = (uint *******)(uVar30 | 1);
                  *(undefined2 *)pppppppuStack_528 = 0x3d62;
                  pbVar31 = (byte *)((long)pppppppuStack_528 + 2);
                  pppppppuStack_530 = pppppppuVar10;
LAB_0445bc1d:
                  pppppppuVar10 = (uint *******)(auStack_568 + 1);
                  if (((ulong)pppppppuVar15 & 1) != 0) {
                    pppppppuVar10 = pppppppuStack_558;
                  }
                  func_0x0eee2ee0(pbVar31,pppppppuVar10,pppppppuVar16);
                }
                pbVar31[(long)pppppppuVar16] = 0;
                puVar11 = (undefined8 *)func_0x0412f8c0(&uStack_538,&UNK_011b6076,0x19);
                pppppppuStack_2b8 = (uint *******)puVar11[2];
                _auStack_2c8 = (undefined1  [8])*puVar11;
                uStack_2c0 = (uint *******)puVar11[1];
                *puVar11 = 0;
                puVar11[1] = 0;
                puVar11[2] = 0;
                func_0x044525e0(pppppppuStack_40,pppppppuStack_38,0,auStack_2c8);
                if (((ulong)_auStack_2c8 & 1) != 0) {
                  func_0x0412a280(pppppppuStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
                }
                pppppppuVar15 = uStack_538;
                pppppppuVar16 = pppppppuStack_528;
                if (((ulong)uStack_538 & 1) == 0) goto LAB_0445bd61;
              }
              else {
                if (((ulong)pppppppuVar15 & 1) != 0) {
                  pppppppuVar16 = uStack_560;
                }
                if (pppppppuVar10 == pppppppuVar16) {
                  if (pppppppuVar10 == (uint *******)0xffffffffffffffff) goto LAB_0445f337;
                  pppppppuVar16 = (uint *******)(auStack_568 + 1);
                  if (((ulong)pppppppuVar15 & 1) != 0) {
                    pppppppuVar16 = pppppppuStack_558;
                  }
                  iVar7 = func_0x0eee3000(pppppppuVar16,&UNK_014fc588,pppppppuVar10);
                  if (iVar7 == 0) {
                    if (0x20c49a < uVar25) {
                      uVar25 = 0x20c49b;
                    }
                    uVar25 = uVar25 * 1000;
                    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uVar25);
                  }
                }
                *(uint *)((long)param_12 + 0x24) = uVar25;
                if (((ulong)pppppppuVar15 & 1) == 0) {
                  pppppppuStack_458 = pppppppuStack_558;
                  auStack_468 = auStack_568;
                  uStack_464 = uStack_564;
                  uStack_460 = (uint)uStack_560;
                  uStack_45c = uStack_560._4_4_;
                }
                else {
                  func_0x0412e5e0(auStack_468,pppppppuStack_558,uStack_560);
                }
                if (pppppppuStack_4d8 != (uint *******)auStack_468) {
                  if (((ulong)*pppppppuStack_4d8 & 1) == 0) {
                    if (((uint)auStack_468 & 1) == 0) {
                      pppppppuStack_4d8[2] = (uint ******)pppppppuStack_458;
                      *(undefined1 (*) [4])pppppppuStack_4d8 = auStack_468;
                      *(uint *)((long)pppppppuStack_4d8 + 4) = uStack_464;
                      *(uint *)(pppppppuStack_4d8 + 1) = uStack_460;
                      *(uint *)((long)pppppppuStack_4d8 + 0xc) = uStack_45c;
                    }
                    else {
                      func_0x04885070(pppppppuStack_4d8,pppppppuStack_458,
                                      CONCAT44(uStack_45c,uStack_460));
                    }
                  }
                  else {
                    bVar38 = ((uint)auStack_468 & 1) == 0;
                    pppppppuVar15 = pppppppuStack_458;
                    if (bVar38) {
                      pppppppuVar15 = (uint *******)(auStack_468 + 1);
                    }
                    uVar30 = (ulong)(auStack_468[0] >> 1);
                    if (!bVar38) {
                      uVar30 = CONCAT44(uStack_45c,uStack_460);
                    }
                    func_0x04885120(pppppppuStack_4d8,pppppppuVar15,uVar30);
                  }
                }
                iVar7 = 2;
                if (((uint)auStack_468 & 1) == 0) goto LAB_0445bd61;
                pppppppuVar15 = (uint *******)CONCAT44(uStack_464,auStack_468);
                pppppppuVar16 = pppppppuStack_458;
              }
              func_0x0412a280(pppppppuVar16,(ulong)pppppppuVar15 & 0xfffffffffffffffe);
            }
          }
        }
LAB_0445bd61:
        pppppppuVar15 = pppppppuStack_580;
        auVar22 = auStack_418;
        pppppppuVar16 = pppppppuStack_408;
        if (((ulong)_auStack_568 & 1) != 0) {
          func_0x0412a280(pppppppuStack_558,(ulong)_auStack_568 & 0xfffffffffffffffe);
          pppppppuVar15 = pppppppuStack_580;
          auVar22 = auStack_418;
          pppppppuVar16 = pppppppuStack_408;
        }
      }
      if (((ulong)auVar22 & 1) != 0) {
        func_0x0412a280(pppppppuVar16,(ulong)auVar22 & 0xfffffffffffffffe);
      }
      if (iVar7 == 2) goto LAB_0445aff0;
      goto LAB_0445c783;
    }
    if (*(byte *)((long)pppppppuVar10 + 1) != 0x3d) goto LAB_0445b340;
    pbVar31 = (byte *)((long)pppppppuVar10 + 2);
    pbVar1 = (byte *)((long)pppppppuVar35 + -2);
    pbVar18 = (byte *)0x3;
    if (pbVar1 < (byte *)0x3) {
      pbVar18 = pbVar1;
    }
    iVar7 = func_0x0eee3000(pbVar31,&UNK_0150be14,pbVar18);
    if ((((byte *)0x2 < pbVar1) && (iVar7 == 0)) &&
       ((pppppppuVar35 == (uint *******)0x5 ||
        ((*(byte *)((long)pppppppuVar10 + 5) == 0x3a || (*(byte *)((long)pppppppuVar10 + 5) == 0x20)
         ))))) {
      cVar5 = func_0x04458ac0(pppppppuVar10,pppppppuVar35,&UNK_0150be14,3,&uStack_488,param_15);
      pppppppuVar15 = pppppppuStack_580;
      if (cVar5 == '\0') goto LAB_0445c783;
      uVar30 = uStack_488 >> 1 & 0x7f;
      lVar8 = (long)&uStack_488 + 1;
      if ((uStack_488 & 1) != 0) {
        uVar30 = uStack_480;
        lVar8 = lStack_478;
      }
      if (uVar30 != 0) {
        uVar29 = 0;
        do {
          bVar2 = *(byte *)(lVar8 + uVar29);
          if ((((0x2e < (ulong)bVar2) || ((0x6cfa00000000U >> ((ulong)bVar2 & 0x3f) & 1) == 0)) &&
              (0x20 < (byte)(bVar2 + 0xa2))) &&
             ((9 < (byte)(bVar2 - 0x30) && (0x19 < (byte)(bVar2 + 0xbf))))) {
            auStack_418 = (undefined1  [8])0x0;
            pppppppuStack_410 = (uint *******)0x0;
            pppppppuStack_408 = (uint *******)0x0;
            func_0x0412f8c0(auStack_418,&UNK_013dcedf,0x28);
            func_0x0412f8c0(auStack_418,&UNK_0150be14,3);
            pppppppuStack_2b8 = pppppppuStack_408;
            uStack_2c0 = pppppppuStack_410;
            _auStack_2c8 = auStack_418;
            auStack_418 = (undefined1  [8])0x0;
            pppppppuStack_410 = (uint *******)0x0;
            pppppppuStack_408 = (uint *******)0x0;
            func_0x044525e0(pppppppuVar10,pppppppuVar35,0,auStack_2c8,param_15);
            auVar22 = auStack_418;
            pppppppuVar15 = pppppppuStack_408;
            if (((ulong)_auStack_2c8 & 1) != 0) {
              func_0x0412a280(pppppppuStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
              auVar22 = auStack_418;
              pppppppuVar15 = pppppppuStack_408;
            }
            goto joined_r0x0445e545;
          }
          uVar29 = uVar29 + 1;
        } while (uVar30 != uVar29);
      }
      if (param_9 != (byte *)&uStack_488) {
        if ((*param_9 & 1) == 0) {
          if ((uStack_488 & 1) == 0) {
            *(long *)(param_9 + 0x10) = lStack_478;
            *(undefined4 *)param_9 = (undefined4)uStack_488;
            *(undefined4 *)(param_9 + 4) = uStack_488._4_4_;
            *(undefined4 *)(param_9 + 8) = (undefined4)uStack_480;
            *(undefined4 *)(param_9 + 0xc) = uStack_480._4_4_;
          }
          else {
            func_0x04885070(param_9,lStack_478,uStack_480);
          }
        }
        else {
          func_0x04885120(param_9,lVar8);
        }
      }
      goto LAB_0445aff0;
    }
    pbVar18 = (byte *)0xb;
    if (pbVar1 < (byte *)0xb) {
      pbVar18 = pbVar1;
    }
    iVar7 = func_0x0eee3000(pbVar31,&UNK_0150be08,pbVar18);
    if ((((byte *)0xa < pbVar1) && (iVar7 == 0)) &&
       ((pppppppuVar35 == (uint *******)0xd ||
        ((*(byte *)((long)pppppppuVar10 + 0xd) == 0x3a ||
         (*(byte *)((long)pppppppuVar10 + 0xd) == 0x20)))))) {
      *param_10 = 1;
      pppppppuVar15 = pppppppuStack_580;
      goto LAB_0445aff0;
    }
    pbVar19 = (byte *)0x9;
    if (pbVar1 < (byte *)0x9) {
      pbVar19 = pbVar1;
    }
    iVar7 = func_0x0eee3000(pbVar31,&UNK_0150bd8e,pbVar19);
    if ((((byte *)0x8 < pbVar1) && (iVar7 == 0)) &&
       ((pppppppuVar35 == (uint *******)0xb ||
        ((*(byte *)((long)pppppppuVar10 + 0xb) == 0x3a ||
         (*(byte *)((long)pppppppuVar10 + 0xb) == 0x20)))))) {
      func_0x041b3bf0(auStack_2c8);
      cVar5 = func_0x044515b0(_auStack_598,uStack_590,auStack_2c8,param_15,0);
      pppppppuVar15 = pppppppuStack_580;
      if (cVar5 == '\0') {
        func_0x041b48c0(auStack_2c8);
        goto LAB_0445c783;
      }
      auStack_418 = (undefined1  [8])0x0;
      pppppppuStack_410 = (uint *******)0x0;
      pppppppuStack_408 = (uint *******)0x0;
      func_0x041b5ac0(auStack_228,auStack_418 + 1,0);
      if (((ulong)auStack_418 & 1) != 0) {
        func_0x0412a280(pppppppuStack_408,(ulong)auStack_418 & 0xfffffffffffffffe);
      }
      auStack_418 = (undefined1  [8])0x0;
      pppppppuStack_410 = (uint *******)0x0;
      pppppppuStack_408 = (uint *******)0x0;
      func_0x041b5ac0(auStack_210,auStack_418 + 1,0);
      if (((ulong)auStack_418 & 1) != 0) {
        func_0x0412a280(pppppppuStack_408,(ulong)auStack_418 & 0xfffffffffffffffe);
      }
      pppppppuVar16 = pppppppuStack_330;
      if (pppppppuStack_330 < pppppppuStack_328) {
        func_0x041b42e0(pppppppuStack_330,auStack_2c8);
        pppppppuStack_330 = pppppppuVar16 + 0x36;
      }
      else {
        pppppppuStack_330 = (uint *******)func_0x04241780(&pppppppuStack_338,auStack_2c8);
      }
      func_0x041b48c0(auStack_2c8);
      goto LAB_0445aff0;
    }
    iVar7 = func_0x0eee3000(pbVar31,&UNK_0150be48,pbVar19);
    if (((pbVar1 < (byte *)0x9) || (iVar7 != 0)) ||
       ((pppppppuVar35 != (uint *******)0xb &&
        ((*(byte *)((long)pppppppuVar10 + 0xb) != 0x3a &&
         (*(byte *)((long)pppppppuVar10 + 0xb) != 0x20)))))) {
      pbVar19 = (byte *)0x7;
      if (pbVar1 < (byte *)0x7) {
        pbVar19 = pbVar1;
      }
      iVar7 = func_0x0eee3000(pbVar31,&UNK_0150be52,pbVar19);
      if ((((byte *)0x6 < pbVar1) && (iVar7 == 0)) &&
         ((pppppppuVar35 == (uint *******)0x9 ||
          ((*(byte *)((long)pppppppuVar10 + 9) == 0x3a ||
           (*(byte *)((long)pppppppuVar10 + 9) == 0x20)))))) {
        cVar5 = func_0x04458ac0(pppppppuVar10,pppppppuVar35,&UNK_0150be52,7,lStack_4d0,param_15);
        pppppppuVar15 = pppppppuStack_580;
        goto LAB_0445ba4c;
      }
      iVar7 = func_0x0eee3000(pbVar31,&UNK_0150be5a,pbVar18);
      if ((((byte *)0xa < pbVar1) && (iVar7 == 0)) &&
         ((pppppppuVar35 == (uint *******)0xd ||
          ((*(byte *)((long)pppppppuVar10 + 0xd) == 0x3a ||
           (*(byte *)((long)pppppppuVar10 + 0xd) == 0x20)))))) {
        cVar5 = func_0x04458bb0(pppppppuVar10,pppppppuVar35,param_13,param_15);
        pppppppuVar15 = pppppppuStack_580;
        goto LAB_0445ba4c;
      }
      cVar5 = func_0x04458a40(pppppppuVar10,pppppppuVar35,&UNK_0150bf53,4);
      pppppppuVar15 = pppppppuStack_580;
      if (cVar5 != '\0') {
        cVar5 = func_0x04461af0(_auStack_598,uStack_590,iStack_570,param_12,param_15);
        goto LAB_0445ba4c;
      }
      cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150be66,0xb);
      if (cVar5 != '\0') {
        _auStack_2c8 = (undefined1  [8])0x0;
        cVar5 = func_0x04458de0(_auStack_598,uStack_590,auStack_2c8,param_15);
        if (cVar5 == '\0') {
          func_0x042da460(auStack_2c8);
          goto LAB_0445c783;
        }
        func_0x04465a00(pppppppuStack_f8,auStack_2c8);
        func_0x042da460(auStack_2c8);
        goto LAB_0445aff0;
      }
      cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150be72,5);
      if (cVar5 != '\0') {
        cVar5 = func_0x04459150(_auStack_598,uStack_590,pppppppuStack_100,param_15);
        goto LAB_0445ba4c;
      }
      cVar5 = func_0x0441ab50(uStack_318,lStack_310);
      if (cVar5 == '\x01' && iStack_570 == 2) {
        cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150be80,9);
        if (cVar5 == '\0') {
          cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150be90,0x10);
          if (cVar5 == '\0') {
            func_0x04458a40(_auStack_598,uStack_590,&UNK_0150be78,7);
          }
          else {
            cVar5 = func_0x04462080(_auStack_598,uStack_590,auStack_2c8,param_15);
            if (cVar5 == '\0') goto LAB_0445c783;
            lVar8 = (**(code **)(*param_12 + 0x38))();
            *(undefined1 (*) [4])(lVar8 + 0x130) = auStack_2c8;
          }
        }
        else {
          lVar8 = (**(code **)(*param_12 + 0x38))();
          pppppppuVar10 = uStack_590;
          pppppppuVar16 = _auStack_598;
          if (*(char *)(lVar8 + 0x128) == '\x01') {
            func_0x04160690(&bStack_70,&UNK_013c2b86);
            func_0x04452d00(pppppppuVar16,pppppppuVar10,&bStack_70,param_15);
            if ((bStack_70 & 1) != 0) {
              auVar22 = (undefined1  [8])CONCAT71(uStack_6f,bStack_70);
              goto LAB_0445c77a;
            }
            goto LAB_0445c783;
          }
          cVar5 = func_0x04461e50(_auStack_598,uStack_590,auStack_2c8,param_15);
          if (cVar5 == '\0') goto LAB_0445c783;
          lVar8 = (**(code **)(*param_12 + 0x38))();
          *(undefined1 (*) [4])(lVar8 + 300) = auStack_2c8;
        }
        goto LAB_0445aff0;
      }
      cVar5 = func_0x0441ac60(uStack_318,lStack_310);
      if (cVar5 == '\0') {
        cVar5 = func_0x041d8380();
        if (cVar5 == '\0') {
          func_0x04489e60(&UNK_014fe77f,&UNK_013dce14,0x5910,&UNK_012bb08e,auStack_598);
        }
        goto LAB_0445aff0;
      }
      cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150beca,8);
      if (cVar5 != '\0') {
        *(undefined1 *)(param_12 + 4) = 1;
        goto LAB_0445aff0;
      }
      cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bed3,10);
      if (cVar5 != '\0') {
        *(undefined1 *)((long)param_12 + 0x21) = 1;
        goto LAB_0445aff0;
      }
      cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bf00,0x13);
      if (cVar5 != '\0') {
        *(undefined1 *)((long)param_12 + 0x22) = 1;
        goto LAB_0445aff0;
      }
      cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bf14,10);
      if (cVar5 == '\0') {
        cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bf25,4);
        if (cVar5 == '\0') {
          cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bf36,6);
          pppppppuVar16 = uStack_590;
          pppppppuVar15 = _auStack_598;
          if (cVar5 == '\0') {
            uVar12 = func_0x0eee2e90(&UNK_014fc276);
            cVar5 = func_0x04458a40(pppppppuVar15,pppppppuVar16,&UNK_014fc276,uVar12);
            if (cVar5 == '\0') {
              cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bf45,0xd);
              if (cVar5 == '\0') {
                cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bf3d,7);
                pppppppuVar16 = uStack_590;
                pppppppuVar15 = _auStack_598;
                if (cVar5 == '\0') {
                  uVar12 = func_0x0eee2e90(&UNK_014fc270);
                  cVar5 = func_0x04458a40(pppppppuVar15,pppppppuVar16,&UNK_014fc270,uVar12);
                  if (cVar5 != '\0') {
                    cVar5 = func_0x04458ac0(_auStack_598,uStack_590,&UNK_014fc270,uVar12,&uStack_308
                                            ,param_15);
                    pppppppuVar15 = pppppppuStack_580;
                    goto LAB_0445ba4c;
                  }
                  cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150beaa,8);
                  if (cVar5 != '\0') {
                    *(undefined4 *)((long)param_12 + 0x74) = 1;
                    pppppppuVar15 = pppppppuStack_580;
                    goto LAB_0445aff0;
                  }
                  cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150beb3,8);
                  if (cVar5 != '\0') {
                    *(undefined4 *)((long)param_12 + 0x74) = 2;
                    pppppppuVar15 = pppppppuStack_580;
                    goto LAB_0445aff0;
                  }
                  cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bea1,8);
                  if (cVar5 != '\0') {
                    *(undefined4 *)((long)param_12 + 0x74) = 3;
                    pppppppuVar15 = pppppppuStack_580;
                    goto LAB_0445aff0;
                  }
                  cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bebc,8);
                  if (cVar5 != '\0') {
                    *(undefined4 *)((long)param_12 + 0x74) = 0;
                    pppppppuVar15 = pppppppuStack_580;
                    goto LAB_0445aff0;
                  }
                  cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bd60,0x12);
                  if (cVar5 != '\0') {
                    pppppppuVar15 = pppppppuStack_580;
                    if ((int)param_12[0x18] != 1) {
                      *(undefined4 *)(param_12 + 0x18) = 2;
                    }
                    goto LAB_0445aff0;
                  }
                  cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bf2f,6);
                  if (cVar5 != '\0') {
                    func_0x0421c460(auStack_2c8);
                    cVar5 = func_0x04459510(_auStack_598,uStack_590,auStack_2c8,param_15);
                    if (cVar5 == '\0') goto LAB_0445f33c;
                    func_0x04465ae0(param_12,auStack_2c8);
                    func_0x0421c5a0(auStack_2c8);
                    pppppppuVar15 = pppppppuStack_580;
                    goto LAB_0445aff0;
                  }
                  cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bede,0xd);
                  if (cVar5 == '\0') {
                    cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150bec5,4);
                    if (cVar5 != '\0') {
                      cVar5 = func_0x04464150(_auStack_598,uStack_590,&lStack_118,auStack_4f8,
                                              param_15);
                      if (cVar5 == '\0') goto LAB_0445c783;
                      *(byte *)param_11 = (byte)*param_11 | 1;
                      pppppppuVar15 = pppppppuStack_580;
                      goto LAB_0445aff0;
                    }
                    cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_012d4ff0,3);
                    if (cVar5 != '\0') {
                      if (uStack_590 < (uint *******)0x7) {
                        cVar5 = func_0x041c74a0();
                        pppppppuVar15 = pppppppuStack_580;
                        if (cVar5 == '\0') {
                          func_0x04489e60(&UNK_014fe77f,&UNK_013dce14,0x5779,&UNK_0133e18d,
                                          auStack_598);
                        }
                      }
                      else {
                        func_0x044683d0(auStack_2c8,&uStack_569,param_12,
                                        (byte *)((long)_auStack_598 + 6),
                                        (byte *)((long)uStack_590 + -6));
                        if (auStack_2c8 == (undefined1  [4])0x0) {
                          func_0x042387f0(auStack_418,auStack_2a0);
                          func_0x04465b60(&pppppppuStack_4c8,auStack_418);
                          func_0x042388b0(auStack_418);
                        }
                        else {
                          cVar5 = func_0x041c74a0();
                          if (cVar5 == '\0') {
                            uVar12 = func_0x041c1480(auStack_2c8);
                            func_0x04489e60(&UNK_01502d6b,&UNK_013dce14,0x57c1,&UNK_01205862,
                                            auStack_598,&UNK_011ea4ba,uVar12);
                          }
                        }
                        func_0x04465bb0(auStack_2c8);
                        pppppppuVar15 = pppppppuStack_580;
                      }
                      goto LAB_0445aff0;
                    }
                    cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_012a1dea,9);
                    pppppppuVar16 = uStack_590;
                    pppppppuVar15 = _auStack_598;
                    if (cVar5 == '\0') {
                      cVar5 = func_0x04458a40(_auStack_598,uStack_590,&UNK_0150be43,4);
                      pppppppuVar15 = pppppppuStack_580;
                      if ((cVar5 == '\0') && (cVar5 = func_0x041d8380(), cVar5 == '\0')) {
                        func_0x04489e60(&UNK_014fe77f,&UNK_013dce14,0x58e8,&UNK_012bb08e,auStack_598
                                       );
                      }
                      goto LAB_0445aff0;
                    }
                    if (uStack_590 < (uint *******)0xd) {
                      func_0x04160690(&bStack_88,&UNK_013a9e34);
                      func_0x04452d00(pppppppuVar15,pppppppuVar16,&bStack_88,param_15);
                      if ((bStack_88 & 1) != 0) {
                        auVar22 = (undefined1  [8])CONCAT71(uStack_87,bStack_88);
                        pppppppuStack_60 = pppppppuStack_78;
                        goto LAB_0445c77a;
                      }
                      goto LAB_0445c783;
                    }
                    cVar5 = func_0x04424470(&pppppppuStack_448);
                    pppppppuVar16 = uStack_590;
                    pppppppuVar15 = _auStack_598;
                    if (cVar5 != '\0') {
                      if (uStack_590 < (uint *******)0xc) {
                        func_0x04882ef0(&UNK_01306d2f);
                      }
                      else {
                        func_0x04466aa0(auStack_2c8,&uStack_569,(uint *)((long)_auStack_598 + 0xc),
                                        (uint *)((long)uStack_590 + -0xc));
                        if (auStack_2c8 == (undefined1  [4])0x0) {
                          func_0x04465be0(&pppppppuStack_448,auStack_2a0);
                          func_0x04465c50(auStack_2c8);
                          pppppppuVar15 = pppppppuStack_580;
                          goto LAB_0445aff0;
                        }
                      }
                      pppppppuVar16 = uStack_590;
                      pppppppuVar15 = _auStack_598;
                      func_0x04160690(auStack_418,&UNK_0138e45a);
                      uVar12 = func_0x041c1480(auStack_2c8);
                      func_0x06272e70(&bStack_b8,auStack_418,uVar12);
                      func_0x04452d00(pppppppuVar15,pppppppuVar16,&bStack_b8,param_15);
                      if ((bStack_b8 & 1) != 0) {
                        func_0x0412a280(uStack_a8,CONCAT71(uStack_b7,bStack_b8) & 0xfffffffffffffffe
                                       );
                      }
                      if (((ulong)auStack_418 & 1) != 0) {
                        func_0x0412a280(pppppppuStack_408,(ulong)auStack_418 & 0xfffffffffffffffe);
                      }
                      func_0x04465c50(auStack_2c8);
                      goto LAB_0445c783;
                    }
                    func_0x04160690(&bStack_a0,&UNK_0142a0ee);
                    func_0x04452d00(pppppppuVar15,pppppppuVar16,&bStack_a0,param_15);
                    if ((bStack_a0 & 1) == 0) goto LAB_0445c783;
                    auVar22 = (undefined1  [8])CONCAT71(uStack_9f,bStack_a0);
                    pppppppuStack_60 = pppppppuStack_90;
                  }
                  else {
                    _auStack_2c8 = (undefined1  [8])0x0;
                    uStack_2c0 = (uint *******)0x0;
                    pppppppuStack_2b8 = (uint *******)0x0;
                    cVar5 = func_0x04458ac0(_auStack_598,uStack_590,&UNK_0150bede,0xd,auStack_2c8,
                                            param_15);
                    auVar22 = _auStack_2c8;
                    pppppppuVar15 = pppppppuStack_2b8;
                    if (cVar5 != '\0') {
                      iVar7 = func_0x04130450(auStack_2c8,&UNK_0150beec);
                      if (iVar7 == 0) {
                        *(undefined1 *)(param_12 + 0xe) = 1;
                      }
                      pppppppuVar15 = pppppppuStack_580;
                      if (((ulong)_auStack_2c8 & 1) != 0) {
                        func_0x0412a280(pppppppuStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
                        pppppppuVar15 = pppppppuStack_580;
                      }
                      goto LAB_0445aff0;
                    }
joined_r0x0445e545:
                    pppppppuStack_60 = pppppppuVar15;
                    if (((ulong)auVar22 & 1) == 0) goto LAB_0445c783;
                  }
                  goto LAB_0445c77a;
                }
                cVar5 = func_0x04463df0(_auStack_598,uStack_590,iStack_570,param_12,param_15);
                pppppppuVar15 = pppppppuStack_580;
              }
              else {
                cVar5 = func_0x04463ae0(_auStack_598,uStack_590,iStack_570,param_12,param_15);
                pppppppuVar15 = pppppppuStack_580;
              }
            }
            else {
              cVar5 = func_0x04458ac0(_auStack_598,uStack_590,&UNK_014fc276,uVar12,&uStack_2e8,
                                      param_15);
              pppppppuVar15 = pppppppuStack_580;
            }
          }
          else {
            cVar5 = func_0x044632a0(_auStack_598,uStack_590,iStack_570,param_7,param_12,param_15);
            pppppppuVar15 = pppppppuStack_580;
          }
        }
        else {
          cVar5 = func_0x04462790(_auStack_598,uStack_590,&pppppppuStack_58,param_11,param_15);
          pppppppuVar15 = pppppppuStack_580;
        }
      }
      else {
        cVar5 = func_0x04462250(_auStack_598,uStack_590,&lStack_e8,param_15);
      }
    }
    else {
      cVar5 = func_0x04458ac0(pppppppuVar10,pppppppuVar35,&UNK_0150be48,9,pppppppuStack_548,param_15
                             );
      pppppppuVar15 = pppppppuStack_580;
    }
LAB_0445ba4c:
    if (cVar5 == '\0') goto LAB_0445c783;
    goto LAB_0445aff0;
  }
LAB_0445c715:
  _auStack_598 = (uint *******)((ulong)_auStack_598 & 0xffffffffffffff00);
  pppppppuStack_588 = (uint *******)((ulong)pppppppuStack_588 & 0xffffffffffffff00);
  bStack_d0 = 0x22;
  uStack_cf = _DAT_011ea4a8;
  uStack_cb = _UNK_011ea4ac;
  uStack_c7 = _UNK_011ea4b0;
  uStack_c3 = _UNK_011ea4b4;
  uStack_bf = 0x2e;
  func_0x044525e0(pppppppuStack_578,pppppppuVar15,pppppppuVar16,&bStack_d0,param_15);
  if ((bStack_d0 & 1) == 0) goto LAB_0445c783;
  auVar22 = (undefined1  [8])CONCAT35((undefined3)uStack_cb,CONCAT41(uStack_cf,bStack_d0));
  pppppppuStack_60 = (uint *******)CONCAT53(uStack_bd,CONCAT21(uStack_bf,uStack_c3._3_1_));
LAB_0445c77a:
  func_0x0412a280(pppppppuStack_60,(ulong)auVar22 & 0xfffffffffffffffe);
  goto LAB_0445c783;
LAB_0445d120:
  func_0x049dcb70(auStack_2c8,auVar21,auVar21);
LAB_0445d133:
  auVar21 = (undefined1  [8])((long)auVar21 + 0x20);
  auVar22 = auStack_418;
  pppppppuVar16 = pppppppuStack_410;
  if (auVar21 == (undefined1  [8])pppppppuVar15) goto LAB_0445d277;
  goto LAB_0445d140;
LAB_0445d277:
  for (; pppppppuVar10 = pppppppuStack_4c0, pppppppuVar15 = uStack_590, pppppppuVar35 = _auStack_598
      , auVar22 != (undefined1  [8])pppppppuVar16; auVar22 = (undefined1  [8])((long)auVar22 + 0x20)
      ) {
    if (pppppppuStack_4c8 != pppppppuStack_4c0) {
      if ((*(byte *)auVar22 & 1) == 0) {
        ppppppuVar27 = (uint ******)(ulong)(*(byte *)auVar22 >> 1);
        pppppppuVar15 = pppppppuStack_4c8 + 3;
        do {
          bVar2 = *(byte *)(pppppppuVar15 + -3);
          if ((bVar2 & 1) == 0) {
            ppppppuVar17 = (uint ******)(ulong)(bVar2 >> 1);
          }
          else {
            ppppppuVar17 = pppppppuVar15[-2];
          }
          if (ppppppuVar27 == ppppppuVar17) {
            if ((bVar2 & 1) == 0) {
              ppppppuVar17 = (uint ******)((long)pppppppuVar15 + -0x17);
            }
            else {
              ppppppuVar17 = pppppppuVar15[-1];
            }
            iVar7 = func_0x0eee3000((byte *)((long)auVar22 + 1),ppppppuVar17,ppppppuVar27);
            if (iVar7 == 0 && *(uint *)pppppppuVar15 == 0) goto LAB_0445d273;
          }
          pppppppuVar35 = pppppppuVar15 + 7;
          pppppppuVar15 = pppppppuVar15 + 10;
        } while (pppppppuVar35 != pppppppuVar10);
      }
      else {
        ppppppuVar27 = *(uint *******)((long)auVar22 + 8);
        pppppppuVar15 = pppppppuStack_4c8 + 3;
        do {
          bVar2 = *(byte *)(pppppppuVar15 + -3);
          if ((bVar2 & 1) == 0) {
            ppppppuVar17 = (uint ******)(ulong)(bVar2 >> 1);
          }
          else {
            ppppppuVar17 = pppppppuVar15[-2];
          }
          if (ppppppuVar27 == ppppppuVar17) {
            if ((bVar2 & 1) == 0) {
              ppppppuVar17 = (uint ******)((long)pppppppuVar15 + -0x17);
            }
            else {
              ppppppuVar17 = pppppppuVar15[-1];
            }
            iVar7 = func_0x0eee3000(*(uint *******)((long)auVar22 + 0x10),ppppppuVar17,ppppppuVar27)
            ;
            if (iVar7 == 0 && *(uint *)pppppppuVar15 == 0) goto LAB_0445d273;
          }
          pppppppuVar35 = pppppppuVar15 + 7;
          pppppppuVar15 = pppppppuVar15 + 10;
        } while (pppppppuVar35 != pppppppuVar10);
      }
    }
    func_0x049dcb70(auStack_2c8,auVar22,auVar22);
LAB_0445d273:
  }
  for (; pppppppuVar16 = pppppppuStack_4c0, pppppppuVar35 != pppppppuVar15;
      pppppppuVar35 = pppppppuVar35 + 4) {
    if (pppppppuStack_4c8 != pppppppuStack_4c0) {
      if ((*(byte *)pppppppuVar35 & 1) == 0) {
        ppppppuVar27 = (uint ******)(ulong)(*(byte *)pppppppuVar35 >> 1);
        pppppppuVar10 = pppppppuStack_4c8 + 3;
        do {
          bVar2 = *(byte *)(pppppppuVar10 + -3);
          if ((bVar2 & 1) == 0) {
            ppppppuVar17 = (uint ******)(ulong)(bVar2 >> 1);
          }
          else {
            ppppppuVar17 = pppppppuVar10[-2];
          }
          if (ppppppuVar27 == ppppppuVar17) {
            if ((bVar2 & 1) == 0) {
              ppppppuVar17 = (uint ******)((long)pppppppuVar10 + -0x17);
            }
            else {
              ppppppuVar17 = pppppppuVar10[-1];
            }
            iVar7 = func_0x0eee3000((byte *)((long)pppppppuVar35 + 1),ppppppuVar17,ppppppuVar27);
            if ((iVar7 == 0) && (*(uint *)pppppppuVar10 == 1)) goto LAB_0445d3c3;
          }
          pppppppuVar13 = pppppppuVar10 + 7;
          pppppppuVar10 = pppppppuVar10 + 10;
        } while (pppppppuVar13 != pppppppuVar16);
      }
      else {
        ppppppuVar27 = pppppppuVar35[1];
        pppppppuVar10 = pppppppuStack_4c8 + 3;
        do {
          bVar2 = *(byte *)(pppppppuVar10 + -3);
          if ((bVar2 & 1) == 0) {
            ppppppuVar17 = (uint ******)(ulong)(bVar2 >> 1);
          }
          else {
            ppppppuVar17 = pppppppuVar10[-2];
          }
          if (ppppppuVar27 == ppppppuVar17) {
            if ((bVar2 & 1) == 0) {
              ppppppuVar17 = (uint ******)((long)pppppppuVar10 + -0x17);
            }
            else {
              ppppppuVar17 = pppppppuVar10[-1];
            }
            iVar7 = func_0x0eee3000(pppppppuVar35[2],ppppppuVar17,ppppppuVar27);
            if ((iVar7 == 0) && (*(uint *)pppppppuVar10 == 1)) goto LAB_0445d3c3;
          }
          pppppppuVar13 = pppppppuVar10 + 7;
          pppppppuVar10 = pppppppuVar10 + 10;
        } while (pppppppuVar13 != pppppppuVar16);
      }
    }
    func_0x049dcb70(auStack_2c8,pppppppuVar35,pppppppuVar35);
LAB_0445d3c3:
  }
  func_0x04465690(auStack_568,auStack_2c8,pppppppuStack_448,pppppppuStack_440);
  pppppppuVar16 = pppppppuStack_448;
  pppppppuVar15 = pppppppuStack_440;
  if (pppppppuStack_448 != (uint *******)0x0) {
    while (pppppppuVar10 = pppppppuVar15, pppppppuVar16 != pppppppuVar10) {
      pppppppuVar15 = pppppppuVar10 + -3;
      ppppppuVar27 = pppppppuVar10[-3];
      if (ppppppuVar27 != (uint ******)0x0) {
        ppppppuVar17 = pppppppuVar10[-2];
        ppppppuVar28 = ppppppuVar27;
        if (ppppppuVar27 != ppppppuVar17) {
          do {
            if (((ulong)ppppppuVar17[-4] & 1) != 0) {
              func_0x0412a280(ppppppuVar17[-2],(ulong)ppppppuVar17[-4] & 0xfffffffffffffffe);
            }
            ppppppuVar17 = ppppppuVar17 + -4;
          } while (ppppppuVar17 != ppppppuVar27);
          ppppppuVar28 = *pppppppuVar15;
        }
        pppppppuVar10[-2] = ppppppuVar27;
        func_0x0412a280(ppppppuVar28,(long)pppppppuVar10[-1] - (long)ppppppuVar28);
      }
    }
    pppppppuStack_440 = pppppppuVar16;
    func_0x0412a280(pppppppuStack_448,(long)pppppppuStack_438 - (long)pppppppuStack_448);
  }
  pppppppuStack_448 = _auStack_568;
  pppppppuStack_440 = uStack_560;
  pppppppuStack_438 = pppppppuStack_558;
  func_0x04465690(auStack_568,auStack_2c8,pppppppuStack_430,pppppppuStack_428);
  pppppppuVar16 = pppppppuStack_430;
  pppppppuVar15 = pppppppuStack_428;
  if (pppppppuStack_430 != (uint *******)0x0) {
    while (pppppppuVar10 = pppppppuVar15, pppppppuVar16 != pppppppuVar10) {
      pppppppuVar15 = pppppppuVar10 + -3;
      ppppppuVar27 = pppppppuVar10[-3];
      if (ppppppuVar27 != (uint ******)0x0) {
        ppppppuVar17 = pppppppuVar10[-2];
        ppppppuVar28 = ppppppuVar27;
        if (ppppppuVar27 != ppppppuVar17) {
          do {
            if (((ulong)ppppppuVar17[-4] & 1) != 0) {
              func_0x0412a280(ppppppuVar17[-2],(ulong)ppppppuVar17[-4] & 0xfffffffffffffffe);
            }
            ppppppuVar17 = ppppppuVar17 + -4;
          } while (ppppppuVar17 != ppppppuVar27);
          ppppppuVar28 = *pppppppuVar15;
        }
        pppppppuVar10[-2] = ppppppuVar27;
        func_0x0412a280(ppppppuVar28,(long)pppppppuVar10[-1] - (long)ppppppuVar28);
      }
    }
    pppppppuStack_428 = pppppppuVar16;
    func_0x0412a280(pppppppuStack_430,(long)pppppppuStack_420 - (long)pppppppuStack_430);
  }
  pppppppuVar16 = _auStack_598;
  pppppppuStack_430 = _auStack_568;
  pppppppuStack_428 = uStack_560;
  pppppppuStack_420 = pppppppuStack_558;
  pppppppuVar15 = uStack_590;
  if (_auStack_598 != (uint *******)0x0) {
    for (; pppppppuVar16 != pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -4) {
      if (((ulong)pppppppuVar15[-4] & 1) != 0) {
        func_0x0412a280(pppppppuVar15[-2],(ulong)pppppppuVar15[-4] & 0xfffffffffffffffe);
      }
    }
    uStack_590 = pppppppuVar16;
    func_0x0412a280(_auStack_598,(long)pppppppuStack_588 - (long)_auStack_598);
  }
  auVar22 = auStack_418;
  pppppppuVar15 = pppppppuStack_410;
  if (auStack_418 != (undefined1  [8])0x0) {
    for (; auVar22 != (undefined1  [8])pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -4) {
      if (((ulong)pppppppuVar15[-4] & 1) != 0) {
        func_0x0412a280(pppppppuVar15[-2],(ulong)pppppppuVar15[-4] & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_410 = (uint *******)auVar22;
    func_0x0412a280(auStack_418,(long)pppppppuStack_408 - (long)auStack_418);
  }
  func_0x049dc470(auStack_2c8,uStack_2c0);
  pppppppuVar15 = pppppppuStack_4c0;
  uStack_2c0 = (uint *******)0x0;
  pppppppuStack_2b8 = (uint *******)0x0;
  _auStack_2c8 = (undefined1  [8])&uStack_2c0;
  if (pppppppuStack_4c8 != pppppppuStack_4c0) {
    pppppppuVar16 = pppppppuStack_4c8;
    do {
      auStack_418 = (undefined1  [8])pppppppuVar16;
      lVar8 = func_0x04465e80(auStack_2c8,pppppppuVar16,&UNK_01563a4f,auStack_418,auStack_598);
      func_0x04238940(lVar8 + 0x38,pppppppuVar16);
      pppppppuVar16 = pppppppuVar16 + 10;
    } while (pppppppuVar16 != pppppppuVar15);
  }
  func_0x04424490(auStack_418,&pppppppuStack_448);
  pppppppuVar15 = pppppppuStack_410;
  if (auStack_418 != (undefined1  [8])pppppppuStack_410) {
    auVar22 = auStack_418;
    do {
      while( true ) {
        lVar8 = func_0x04466090(auStack_2c8,auVar22);
        pppppppuVar16 = pppppppuStack_530;
        if (pppppppuStack_528 <= pppppppuStack_530) break;
        func_0x042387f0(pppppppuStack_530,lVar8 + 0x38);
        pppppppuStack_530 = pppppppuVar16 + 10;
        auVar22 = (undefined1  [8])((long)auVar22 + 0x20);
        if (auVar22 == (undefined1  [8])pppppppuVar15) goto LAB_0445d8ef;
      }
      pppppppuStack_530 = (uint *******)func_0x0440c980(&uStack_538,lVar8 + 0x38);
      auVar22 = (undefined1  [8])((long)auVar22 + 0x20);
    } while (auVar22 != (undefined1  [8])pppppppuVar15);
  }
LAB_0445d8ef:
  auVar22 = auStack_418;
  pppppppuVar15 = pppppppuStack_410;
  if (auStack_418 != (undefined1  [8])0x0) {
    for (; auVar22 != (undefined1  [8])pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -4) {
      if (((ulong)pppppppuVar15[-4] & 1) != 0) {
        func_0x0412a280(pppppppuVar15[-2],(ulong)pppppppuVar15[-4] & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_410 = (uint *******)auVar22;
    func_0x0412a280(auStack_418,(long)pppppppuStack_408 - (long)auStack_418);
  }
  func_0x04424490(auStack_418,&pppppppuStack_430);
  pppppppuVar15 = pppppppuStack_410;
  if (auStack_418 != (undefined1  [8])pppppppuStack_410) {
    auVar22 = auStack_418;
    do {
      lVar8 = func_0x04466090(auStack_2c8,auVar22);
      uVar30 = uStack_4a0;
      if (uStack_4a0 < uStack_498) {
        func_0x042387f0(uStack_4a0,lVar8 + 0x38);
        uStack_4a0 = uVar30 + 0x50;
      }
      else {
        uStack_4a0 = func_0x0440c980(&uStack_4a8,lVar8 + 0x38);
      }
      auVar22 = (undefined1  [8])((long)auVar22 + 0x20);
    } while (auVar22 != (undefined1  [8])pppppppuVar15);
  }
  auVar22 = auStack_418;
  pppppppuVar15 = pppppppuStack_410;
  if (auStack_418 != (undefined1  [8])0x0) {
    for (; auVar22 != (undefined1  [8])pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -4) {
      if (((ulong)pppppppuVar15[-4] & 1) != 0) {
        func_0x0412a280(pppppppuVar15[-2],(ulong)pppppppuVar15[-4] & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_410 = (uint *******)auVar22;
    func_0x0412a280(auStack_418,(long)pppppppuStack_408 - (long)auStack_418);
  }
  if ((uint ********)(param_12 + 0x19) != &pppppppuStack_448) {
    func_0x0440cbe0();
    func_0x0440cbe0(param_12 + 0x1c,pppppppuStack_430,pppppppuStack_428,
                    ((long)pppppppuStack_428 - (long)pppppppuStack_430 >> 3) * -0x5555555555555555);
  }
  func_0x04466180(auStack_2c8,uStack_2c0);
LAB_0445dadb:
  if ((ulong *)(param_12 + 0x1f) != &uStack_4a8) {
    func_0x04237a30();
  }
  pppppppuStack_578 = pppppppuStack_50;
  if (pppppppuStack_58 != pppppppuStack_50) {
    pppppppuStack_f8 = (uint *******)(auStack_4f8 + 1);
    pppppppuVar15 = (uint *******)(ulong)(auStack_4f8[0] >> 1);
    if (((ulong)auStack_4f8 & 1) != 0) {
      pppppppuVar15 = pppppppuStack_4f0;
      pppppppuStack_f8 = pppppppuStack_4e8;
    }
    lStack_310 = 0x1a;
    if (((ulong)pppppppuVar15 | 7) != 0x17) {
      lStack_310 = ((ulong)pppppppuVar15 | 7) + 1;
    }
    pppppppuStack_100 = (uint *******)(lStack_310 + 1);
    uStack_318 = CONCAT44(uStack_318._4_4_,(int)pppppppuVar15 * 2);
    pppppppuStack_548 = (uint *******)CONCAT44(pppppppuStack_548._4_4_,*param_11);
    pppppppuVar16 = pppppppuStack_58;
    uVar25 = *param_11;
    pppppppuStack_540 = pppppppuVar15;
    do {
      if ((*(byte *)(pppppppuVar16 + 1) & 1) == 0) {
        if (*(byte *)(pppppppuVar16 + 1) >> 1 == 0) goto LAB_0445dc17;
      }
      else if (pppppppuVar16[2] == (uint ******)0x0) {
LAB_0445dc17:
        cVar5 = func_0x0d567a50();
        if (cVar5 == '\0') {
          func_0x04489e60(&UNK_014fe033,&UNK_013dce14,0x1102,&UNK_014453e7,*(uint *)pppppppuVar16);
        }
      }
      auStack_418 = (undefined1  [8])0x0;
      pppppppuStack_410 = (uint *******)0x0;
      pppppppuStack_408 = (uint *******)0x0;
      _auStack_598 = (uint *******)0x0;
      uStack_590 = (uint *******)0x0;
      pppppppuStack_588 = (uint *******)0x0;
      if ((uVar25 & 1) == 0) {
        if ((uVar25 & 2) == 0) {
          if (uVar25 == 0) {
            auStack_418 = (undefined1  [8])FUN_0ee32660(0x18);
            pppppppuStack_410 = (uint *******)((long)auStack_418 + 0x18);
            *(uint *******)auStack_418 = (uint ******)0x746c75616665640e;
            *(byte *)((long)auStack_418 + 8) = 0;
            *(uint *******)((long)auStack_418 + 0x10) = (uint ******)0x0;
            pppppppuStack_408 = pppppppuStack_410;
          }
        }
        else {
          pppppppuStack_410 = (uint *******)func_0x04909a40(auStack_418,pppppppuVar16 + 4);
          pppppppuVar15 = pppppppuVar16 + 7;
          if ((uint *******)auStack_598 != pppppppuVar15) {
            bVar2 = *(byte *)pppppppuVar15;
            if (((ulong)_auStack_598 & 1) != 0) {
              bVar38 = (bVar2 & 1) != 0;
              ppppppuVar27 = (uint ******)((long)pppppppuVar16 + 0x39);
              if (bVar38) {
                ppppppuVar27 = pppppppuVar16[9];
              }
              ppppppuVar17 = (uint ******)(ulong)(bVar2 >> 1);
              if (bVar38) {
                ppppppuVar17 = pppppppuVar16[8];
              }
              func_0x04885120(auStack_598,ppppppuVar27,ppppppuVar17);
              goto LAB_0445dd89;
            }
            if ((bVar2 & 1) != 0) {
              func_0x04885070(auStack_598,pppppppuVar16[9],pppppppuVar16[8]);
              goto LAB_0445dd89;
            }
            pppppppuStack_588 = (uint *******)pppppppuVar16[9];
            auVar39 = (undefined1  [4])*(uint *)pppppppuVar15;
            uVar25 = *(uint *)((long)pppppppuVar16 + 0x3c);
            uVar40 = *(uint *)(pppppppuVar16 + 8);
            uVar41 = *(uint *)((long)pppppppuVar16 + 0x44);
            goto LAB_0445dd84;
          }
        }
      }
      else {
        func_0x0490ae00(auStack_418,lStack_118,lStack_110,
                        (lStack_110 - lStack_118 >> 3) * -0x5555555555555555);
        if ((uint *******)0xfffffffffffffff7 < pppppppuVar15) goto LAB_0445f2fb;
        if (pppppppuVar15 < (uint *******)0x17) {
          _auStack_2c8 = (undefined1  [8])CONCAT71(stack0xfffffffffffffd39,(char)uStack_318);
          pppppppuVar10 = (uint *******)(auStack_2c8 + 1);
          if (pppppppuVar15 != (uint *******)0x0) goto LAB_0445e030;
                    /* WARNING: Ignoring partial resolution of indirect */
          auStack_2c8[1] = 0;
        }
        else {
          pppppppuVar10 = (uint *******)FUN_0ee32660(lStack_310);
          _auStack_2c8 = (undefined1  [8])pppppppuStack_100;
          uStack_2c0 = pppppppuVar15;
          pppppppuStack_2b8 = pppppppuVar10;
LAB_0445e030:
          func_0x0eee2f00(pppppppuVar10,pppppppuStack_f8,pppppppuVar15);
          *(byte *)((long)pppppppuVar10 + (long)pppppppuVar15) = 0;
        }
        if (((ulong)_auStack_598 & 1) != 0) {
          func_0x0412a280(pppppppuStack_588,(ulong)_auStack_598 & 0xfffffffffffffffe);
        }
        pppppppuStack_588 = pppppppuStack_2b8;
        auVar39 = auStack_2c8;
        uVar25 = uStack_2c4;
        uVar40 = (uint)uStack_2c0;
        uVar41 = uStack_2c0._4_4_;
LAB_0445dd84:
        _auStack_598 = (uint *******)CONCAT44(uVar25,auVar39);
        uStack_590 = (uint *******)CONCAT44(uVar41,uVar40);
      }
LAB_0445dd89:
      if (((ulong)_auStack_598 & 1) == 0) {
        pppppppuStack_558 = pppppppuStack_588;
        _auStack_568 = _auStack_598;
        uStack_560 = uStack_590;
      }
      else {
        func_0x0412e5e0(auStack_568,pppppppuStack_588,uStack_590);
      }
      puVar4 = puStack_510;
      pppppppuVar35 = pppppppuStack_558;
      pppppppuVar10 = uStack_560;
      pppppppuVar15 = _auStack_568;
      _auStack_2c8 = (undefined1  [8])_auStack_568;
      uStack_2c0 = uStack_560;
      pppppppuStack_2b8 = pppppppuStack_558;
      _auStack_568 = (uint *******)0x0;
      uStack_560 = (uint *******)0x0;
      pppppppuStack_558 = (uint *******)0x0;
      puVar23 = puStack_518;
      if (puStack_518 == puStack_510) {
        if (((ulong)pppppppuVar15 & 1) != 0) goto LAB_0445de3c;
      }
      else if (((ulong)pppppppuVar15 & 1) == 0) {
        uVar30 = (ulong)pppppppuVar15 >> 1 & 0x7f;
        do {
          bVar2 = (byte)*puVar23;
          if ((bVar2 & 1) == 0) {
            uVar29 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar29 = puVar23[1];
          }
          if (uVar29 == uVar30) {
            if ((bVar2 & 1) == 0) {
              pbVar31 = (byte *)((long)puVar23 + 1);
            }
            else {
              pbVar31 = (byte *)puVar23[2];
            }
            iVar7 = func_0x0eee3000(pbVar31,auStack_2c8 + 1,uVar30);
            if (iVar7 == 0) break;
          }
          puVar23 = puVar23 + 0x12;
        } while (puVar23 != puVar4);
      }
      else {
        do {
          bVar2 = (byte)*puVar23;
          if ((bVar2 & 1) == 0) {
            pppppppuVar15 = (uint *******)(ulong)(bVar2 >> 1);
          }
          else {
            pppppppuVar15 = (uint *******)puVar23[1];
          }
          if (pppppppuVar15 == pppppppuVar10) {
            if ((bVar2 & 1) == 0) {
              pbVar31 = (byte *)((long)puVar23 + 1);
            }
            else {
              pbVar31 = (byte *)puVar23[2];
            }
            iVar7 = func_0x0eee3000(pbVar31,pppppppuVar35,pppppppuVar10);
            if (iVar7 == 0) break;
          }
          puVar23 = puVar23 + 0x12;
        } while (puVar23 != puVar4);
LAB_0445de3c:
        func_0x0412a280(pppppppuVar35,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
        if (((ulong)_auStack_568 & 1) != 0) {
          func_0x0412a280(pppppppuStack_558,(ulong)_auStack_568 & 0xfffffffffffffffe);
        }
      }
      if (puVar23 == puStack_510) {
        func_0x04235650(auStack_2c8);
        puVar4 = puStack_510;
        if (puStack_510 < puStack_508) {
          func_0x04235940(puStack_510,auStack_2c8);
          puStack_510 = puVar4 + 0x12;
        }
        else {
          puStack_510 = (ulong *)func_0x044661e0(&puStack_518,auStack_2c8);
        }
        func_0x04235a30(auStack_2c8);
        puVar23 = puStack_510 + -0x12;
      }
      puVar14 = (uint *)puVar23[4];
      if (puVar14 < (uint *)puVar23[5]) {
        *puVar14 = *(uint *)pppppppuVar16;
        puVar14 = puVar14 + 1;
      }
      else {
        pppppppuVar15 = (uint *******)puVar23[3];
        lVar8 = (long)puVar14 - (long)pppppppuVar15;
        uVar30 = (lVar8 >> 2) + 1;
        if (0x3fffffffffffffff < uVar30) goto LAB_0445f300;
        lStack_4d0 = CONCAT44(lStack_4d0._4_4_,*(uint *)pppppppuVar16);
        uVar34 = (long)puVar23[5] - (long)pppppppuVar15;
        uVar29 = (long)uVar34 >> 1;
        if ((ulong)((long)uVar34 >> 1) <= uVar30) {
          uVar29 = uVar30;
        }
        if (0x7ffffffffffffffb < uVar34) {
          uVar29 = 0x3fffffffffffffff;
        }
        pppppppuStack_580 = pppppppuVar15;
        if (0x3fffffffffffffff < uVar29) goto LAB_0445f2f6;
        lVar32 = FUN_0ee32660(uVar29 * 4);
        pppppppuVar15 = pppppppuStack_580;
        *(undefined4 *)(lVar32 + lVar8) = (undefined4)lStack_4d0;
        puVar14 = (uint *)(lVar32 + lVar8 + 4);
        uVar30 = lVar32 + lVar8 + (lVar8 >> 2) * -4;
        pppppppuStack_4d8 = pppppppuVar16;
        func_0x0eee2f00(uVar30,pppppppuStack_580,lVar8);
        puVar23[3] = uVar30;
        puVar23[4] = (ulong)puVar14;
        puVar23[5] = lVar32 + uVar29 * 4;
        pppppppuVar16 = pppppppuStack_4d8;
        if (pppppppuVar15 != (uint *******)0x0) {
          func_0x0412a280(pppppppuVar15,uVar34);
          pppppppuVar16 = pppppppuStack_4d8;
        }
      }
      pppppppuVar15 = pppppppuVar16 + 1;
      puVar23[4] = (ulong)puVar14;
      pppppppuVar10 = (uint *******)(puVar23 + 9);
      if (pppppppuVar10 != pppppppuVar15) {
        bVar2 = *(byte *)pppppppuVar15;
        if (((ulong)*pppppppuVar10 & 1) == 0) {
          if ((bVar2 & 1) == 0) {
            puVar23[0xb] = (ulong)pppppppuVar16[3];
            uVar25 = *(uint *)((long)pppppppuVar16 + 0xc);
            uVar40 = *(uint *)(pppppppuVar16 + 2);
            uVar41 = *(uint *)((long)pppppppuVar16 + 0x14);
            *(uint *)pppppppuVar10 = *(uint *)pppppppuVar15;
            *(uint *)((long)puVar23 + 0x4c) = uVar25;
            *(uint *)(puVar23 + 10) = uVar40;
            *(uint *)((long)puVar23 + 0x54) = uVar41;
          }
          else {
            func_0x04885070(pppppppuVar10,pppppppuVar16[3],pppppppuVar16[2]);
          }
        }
        else {
          bVar38 = (bVar2 & 1) != 0;
          ppppppuVar27 = (uint ******)((long)pppppppuVar16 + 9);
          if (bVar38) {
            ppppppuVar27 = pppppppuVar16[3];
          }
          ppppppuVar17 = (uint ******)(ulong)(bVar2 >> 1);
          if (bVar38) {
            ppppppuVar17 = pppppppuVar16[2];
          }
          func_0x04885120(pppppppuVar10,ppppppuVar27,ppppppuVar17);
        }
      }
      func_0x04237270(puVar23,auStack_418);
      if (puVar23 != (ulong *)auStack_598) {
        if ((*puVar23 & 1) == 0) {
          if (((ulong)_auStack_598 & 1) == 0) {
            puVar23[2] = (ulong)pppppppuStack_588;
            *(undefined1 (*) [4])puVar23 = auStack_598;
            *(uint *)((long)puVar23 + 4) = uStack_594;
            *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_590;
            *(undefined4 *)((long)puVar23 + 0xc) = uStack_590._4_4_;
          }
          else {
            func_0x04885070(puVar23,pppppppuStack_588,uStack_590);
          }
        }
        else {
          pppppppuVar10 = (uint *******)((ulong)_auStack_598 >> 1 & 0x7f);
          pppppppuVar15 = (uint *******)(auStack_598 + 1);
          if (((ulong)_auStack_598 & 1) != 0) {
            pppppppuVar10 = uStack_590;
            pppppppuVar15 = pppppppuStack_588;
          }
          func_0x04885120(puVar23,pppppppuVar15,pppppppuVar10);
        }
      }
      if (((ulong)_auStack_598 & 1) != 0) {
        func_0x0412a280(pppppppuStack_588,(ulong)_auStack_598 & 0xfffffffffffffffe);
      }
      auVar22 = auStack_418;
      pppppppuVar15 = pppppppuStack_540;
      pppppppuVar10 = pppppppuStack_410;
      if (auStack_418 != (undefined1  [8])0x0) {
        for (; auVar22 != (undefined1  [8])pppppppuVar10; pppppppuVar10 = pppppppuVar10 + -3) {
          if (((ulong)pppppppuVar10[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar10[-1],(ulong)pppppppuVar10[-3] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_410 = (uint *******)auVar22;
        func_0x0412a280(auStack_418,(long)pppppppuStack_408 - (long)auStack_418);
      }
      puVar4 = puStack_510;
      pppppppuVar16 = pppppppuVar16 + 10;
      uVar25 = (uint)pppppppuStack_548;
    } while (pppppppuVar16 != pppppppuStack_578);
    lVar32 = lStack_e8;
    lVar8 = lStack_e0;
    if (puStack_518 != puStack_510) {
      puVar23 = puStack_518;
      do {
        if (((byte)*puVar23 & 1) == 0) {
          if ((byte)((byte)*puVar23 >> 1) == 0) goto LAB_0445e397;
        }
        else if (puVar23[1] == 0) {
LAB_0445e397:
          func_0x04487190(auStack_2c8,8);
          if ((*puVar23 & 1) != 0) {
            func_0x0412a280(puVar23[2],*puVar23 & 0xfffffffffffffffe);
          }
          puVar23[2] = (ulong)pppppppuStack_2b8;
          *(undefined1 (*) [4])puVar23 = auStack_2c8;
          *(uint *)((long)puVar23 + 4) = uStack_2c4;
          *(uint *)(puVar23 + 1) = (uint)uStack_2c0;
          *(uint *)((long)puVar23 + 0xc) = uStack_2c0._4_4_;
        }
        puVar23 = puVar23 + 0x12;
        lVar32 = lStack_e8;
        lVar8 = lStack_e0;
      } while (puVar23 != puVar4);
    }
LAB_0445e704:
    for (; puVar4 = puStack_510, lVar32 != lVar8; lVar32 = lVar32 + 0x30) {
      if ((*(undefined4 **)(lVar32 + 0x18) != *(undefined4 **)(lVar32 + 0x20)) &&
         (puStack_518 != puStack_510)) {
        uVar3 = **(undefined4 **)(lVar32 + 0x18);
        puVar23 = puStack_518 + 6;
        do {
          uVar30 = puVar23[-2];
          uVar29 = func_0x0eee3020(puVar23[-3],uVar3,(long)(uVar30 - puVar23[-3]) >> 2);
          if (uVar29 != uVar30 && uVar29 != 0) {
            uVar30 = puVar23[1];
            if (uVar30 < puVar23[2]) {
              func_0x04235130(uVar30,lVar32);
              uVar30 = uVar30 + 0x30;
              puVar23[1] = uVar30;
            }
            else {
              uVar30 = func_0x04237e70(puVar23,lVar32);
            }
            puVar23[1] = uVar30;
          }
          puVar33 = puVar23 + 0xc;
          puVar23 = puVar23 + 0x12;
        } while (puVar33 != puVar4);
      }
    }
    if (puStack_518 != puStack_510) {
      uVar30 = param_12[0xc];
      puVar23 = puStack_518;
      do {
        if (uVar30 < (ulong)param_12[0xd]) {
          func_0x04235680(uVar30,puVar23);
          uVar30 = uVar30 + 0x90;
          param_12[0xc] = uVar30;
        }
        else {
          uVar30 = func_0x043c5430(param_12 + 0xb,puVar23);
        }
        param_12[0xc] = uVar30;
        puVar23 = puVar23 + 0x12;
      } while (puVar23 != puVar4);
    }
    _auStack_598 = (uint *******)0x0;
    uStack_590 = (uint *******)0x0;
    pppppppuStack_588 = (uint *******)0x0;
    lVar8 = param_12[0x22];
    lVar32 = param_12[0x23];
    _auStack_2c8 = (undefined1  [8])auStack_598;
    uStack_2c0 = (uint *******)((ulong)uStack_2c0 & 0xffffffffffffff00);
    lVar36 = lVar32 - lVar8;
    if (lVar36 != 0) {
      if (0x12f684bda12f684 < (ulong)((lVar36 >> 3) * -0x7b425ed097b425ed)) goto LAB_0445f314;
      pppppppuVar15 = (uint *******)FUN_0ee32660(lVar36);
      pppppppuStack_588 = (uint *******)(lVar36 + (long)pppppppuVar15);
      lVar36 = 0;
      _auStack_598 = pppppppuVar15;
      uStack_590 = pppppppuVar15;
      do {
        lVar24 = lVar36;
        func_0x04214fd0((byte *)((long)pppppppuVar15 + lVar24),lVar8 + lVar24);
        pppppppuVar16 = _auStack_598;
        lVar36 = lVar24 + 0xd8;
      } while (lVar8 + lVar24 + 0xd8 != lVar32);
      uStack_590 = (uint *******)((long)pppppppuVar15 + lVar24 + 0xd8);
      if (uStack_590 != _auStack_598) {
        lVar8 = 0;
LAB_0445e920:
        if (*(int *)((long)_auStack_598 + lVar8 + 0xc) != -1) goto code_r0x0445e92c;
        pbVar31 = (byte *)((long)_auStack_598 + lVar8);
        func_0x04214fd0(auStack_418,pbVar31);
        pppppppuVar10 = uStack_590;
        pppppppuVar15 = (uint *******)(lVar8 + 0xd8 + (long)pppppppuVar16);
        while (pppppppuVar15 != pppppppuVar10) {
          func_0x04215680(pbVar31,pbVar31 + 0xd8);
          pppppppuVar15 = (uint *******)(pbVar31 + 0x1b0);
          pbVar31 = pbVar31 + 0xd8;
        }
        pppppppuVar15 = uStack_590;
        while ((uint *******)
               ((byte *)((long)pppppppuVar16 + lVar8) +
               (long)(pbVar31 + (-lVar8 - (long)pppppppuVar16))) != pppppppuVar15) {
          pppppppuVar15 = pppppppuVar15 + -0x1b;
          (*(code *)**pppppppuVar15)(pppppppuVar15);
        }
        uStack_590 = (uint *******)
                     ((byte *)((long)pppppppuVar16 + lVar8) +
                     (long)(pbVar31 + (-lVar8 - (long)pppppppuVar16)));
        func_0x042152b0(auStack_2c8,auStack_418);
        bStack_1f0 = 1;
        func_0x04214ea0(auStack_418);
        pppppppuVar15 = uStack_590;
        if ((bStack_1f0 & 1) != 0) {
          if ((_auStack_598 != uStack_590) &&
             (lVar8 = lStack_208, lVar32 = lStack_200, pppppppuVar16 = _auStack_598,
             lStack_208 != lStack_200)) {
            do {
              for (; lVar36 = lStack_200, lVar8 != lStack_200; lVar8 = lVar8 + 0x30) {
                lStack_200 = lVar32;
                func_0x04215fd0(pppppppuVar16,lVar8);
                lVar32 = lStack_200;
                lStack_200 = lVar36;
              }
              pppppppuVar16 = (uint *******)((long)pppppppuVar16 + 0xd8);
              lVar8 = lStack_208;
              lStack_200 = lVar32;
            } while (pppppppuVar16 != pppppppuVar15);
          }
          auStack_418._0_5_ = 0x6b636106;
          uStack_400 = 0x6266636308;
          cVar5 = func_0x04214a00(&lStack_208,auStack_418);
          if ((uStack_400 & 1) != 0) {
            func_0x0412a280(uStack_3f0,uStack_400 & 0xfffffffffffffffe);
          }
          if (((ulong)auStack_418 & 1) != 0) {
            func_0x0412a280(pppppppuStack_408,(ulong)auStack_418 & 0xfffffffffffffffe);
          }
          if (cVar5 != '\0') {
            *(undefined1 *)((long)param_12 + 0x23) = 1;
          }
          if (param_12 + 0x22 != (long *)auStack_598) {
            func_0x041c74b0(param_12 + 0x22,_auStack_598,uStack_590,
                            ((long)uStack_590 - (long)_auStack_598 >> 3) * -0x7b425ed097b425ed);
          }
        }
        goto LAB_0445e95a;
      }
    }
LAB_0445e94a:
    _auStack_2c8 = (undefined1  [8])((ulong)_auStack_2c8 & 0xffffffffffffff00);
    bStack_1f0 = 0;
LAB_0445e95a:
    if (bStack_1f0 == 1) {
      func_0x04214ea0(auStack_2c8);
    }
    pppppppuVar16 = _auStack_598;
    pppppppuVar15 = uStack_590;
    if (_auStack_598 != (uint *******)0x0) {
      while (pppppppuVar16 != pppppppuVar15) {
        pppppppuVar15 = pppppppuVar15 + -0x1b;
        (*(code *)**pppppppuVar15)(pppppppuVar15);
      }
      uStack_590 = pppppppuVar16;
      func_0x0412a280(_auStack_598,(long)pppppppuStack_588 - (long)_auStack_598);
    }
    lVar8 = param_12[0x22];
    lVar32 = param_12[0x23];
    if (lVar8 != lVar32) {
      do {
        func_0x04214fd0(auStack_2c8,lVar8);
        lVar36 = lStack_2b0;
        if (((ulong)pppppppuStack_2b8 & 1) == 0) {
          bVar2 = (byte)pppppppuStack_2b8 >> 1;
          func_0x04214ea0(auStack_2c8);
          if (bVar2 == 0) goto LAB_0445ea3f;
        }
        else {
          func_0x04214ea0(auStack_2c8);
          if (lVar36 == 0) {
LAB_0445ea3f:
            pppppppuStack_2b8 = (uint *******)FUN_0ee32660(0x28);
            ppppppuVar27 = _UNK_014453dd;
            pppppppuStack_2b8[2] = _DAT_014453d5;
            pppppppuStack_2b8[3] = ppppppuVar27;
            uVar41 = _UNK_014453d1;
            uVar40 = _UNK_014453cd;
            uVar25 = _UNK_014453c9;
            *(uint *)pppppppuStack_2b8 = _DAT_014453c5;
            *(uint *)((long)pppppppuStack_2b8 + 4) = uVar25;
            *(uint *)(pppppppuStack_2b8 + 1) = uVar40;
            *(uint *)((long)pppppppuStack_2b8 + 0xc) = uVar41;
            *(undefined2 *)(pppppppuStack_2b8 + 4) = 0x2e;
            _auStack_2c8 = (undefined1  [8])0x29;
            uStack_2c0 = (uint *******)0x21;
            auStack_418 = (undefined1  [8])&UNK_01254d89;
            pppppppuStack_410 = (uint *******)0x0;
            cVar5 = func_0x0d591420();
            if (cVar5 == '\0') {
              func_0x04489e60(&UNK_01503b3e,&UNK_013dce14,0x813,&UNK_01288eb6,auStack_418,
                              &UNK_01492a7e,auStack_2c8);
            }
            if (param_15 == 0) {
              if (((ulong)_auStack_2c8 & 1) != 0) {
                func_0x0412a280(pppppppuStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
              }
            }
            else {
              func_0x0412f5e0(param_15,auStack_418,pppppppuStack_410);
              if ((*(byte *)(param_15 + 0x18) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(param_15 + 0x28),
                                *(ulong *)(param_15 + 0x18) & 0xfffffffffffffffe);
              }
              *(uint ********)(param_15 + 0x28) = pppppppuStack_2b8;
              *(undefined1 (*) [4])(param_15 + 0x18) = auStack_2c8;
              *(uint *)(param_15 + 0x1c) = uStack_2c4;
              *(uint *)(param_15 + 0x20) = (uint)uStack_2c0;
              *(uint *)(param_15 + 0x24) = uStack_2c0._4_4_;
            }
            uVar30 = 0;
            uVar29 = uStack_4a8;
            goto joined_r0x0445efd8;
          }
        }
        lVar8 = lVar8 + 0xd8;
      } while (lVar8 != lVar32);
    }
    if (iStack_570 == 0) {
      pppppppuVar15 = (uint *******)func_0x0eee2e90(&UNK_014fc276);
      if ((uint *******)0xfffffffffffffff7 < pppppppuVar15) goto LAB_0445f31e;
      if (pppppppuVar15 < (uint *******)0x17) {
        _auStack_2c8 = (undefined1  [8])
                       CONCAT71(stack0xfffffffffffffd39,(char)pppppppuVar15 * '\x02');
        pppppppuVar16 = (uint *******)(auStack_2c8 + 1);
        if (pppppppuVar15 != (uint *******)0x0) goto LAB_0445ec38;
      }
      else {
        uVar30 = 0x1a;
        if (((ulong)pppppppuVar15 | 7) != 0x17) {
          uVar30 = ((ulong)pppppppuVar15 | 7) + 1;
        }
        pppppppuVar16 = (uint *******)FUN_0ee32660(uVar30);
        _auStack_2c8 = (undefined1  [8])(uVar30 | 1);
        uStack_2c0 = pppppppuVar15;
        pppppppuStack_2b8 = pppppppuVar16;
LAB_0445ec38:
        func_0x0eee2f00(pppppppuVar16,&UNK_014fc276,pppppppuVar15);
      }
      bVar38 = (uStack_2e8 & 1) != 0;
      lVar8 = (long)&uStack_2e8 + 1;
      if (bVar38) {
        lVar8 = lStack_2d8;
      }
      *(byte *)((long)pppppppuVar16 + (long)pppppppuVar15) = 0;
      uVar30 = uStack_2e8 >> 1 & 0x7f;
      if (bVar38) {
        uVar30 = uStack_2e0;
      }
      func_0x044648f0(auStack_2c8,lVar8,uVar30,param_12);
      if (((ulong)_auStack_2c8 & 1) != 0) {
        func_0x0412a280(pppppppuStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
      }
      pppppppuVar15 = (uint *******)func_0x0eee2e90(&UNK_014fc270);
      if ((uint *******)0xfffffffffffffff7 < pppppppuVar15) goto LAB_0445f323;
      if (pppppppuVar15 < (uint *******)0x17) {
        _auStack_2c8 = (undefined1  [8])
                       CONCAT71(stack0xfffffffffffffd39,(char)pppppppuVar15 * '\x02');
        pppppppuVar16 = (uint *******)(auStack_2c8 + 1);
        if (pppppppuVar15 != (uint *******)0x0) goto LAB_0445ed27;
      }
      else {
        uVar30 = 0x1a;
        if (((ulong)pppppppuVar15 | 7) != 0x17) {
          uVar30 = ((ulong)pppppppuVar15 | 7) + 1;
        }
        pppppppuVar16 = (uint *******)FUN_0ee32660(uVar30);
        _auStack_2c8 = (undefined1  [8])(uVar30 | 1);
        uStack_2c0 = pppppppuVar15;
        pppppppuStack_2b8 = pppppppuVar16;
LAB_0445ed27:
        func_0x0eee2f00(pppppppuVar16,&UNK_014fc270,pppppppuVar15);
      }
      bVar38 = (uStack_308 & 1) != 0;
      lVar8 = (long)&uStack_308 + 1;
      if (bVar38) {
        lVar8 = lStack_2f8;
      }
      *(byte *)((long)pppppppuVar16 + (long)pppppppuVar15) = 0;
      uVar30 = uStack_308 >> 1 & 0x7f;
      if (bVar38) {
        uVar30 = uStack_300;
      }
      func_0x044648f0(auStack_2c8,lVar8,uVar30,param_12);
      if (((ulong)_auStack_2c8 & 1) != 0) {
        func_0x0412a280(pppppppuStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_578 = pppppppuStack_330;
    pppppppuVar15 = pppppppuStack_338;
    if (pppppppuStack_338 != pppppppuStack_330) {
      pppppppuStack_540 = (uint *******)(param_13 + 0x19);
      pppppppuStack_548 = (uint *******)(param_13 + 0x31);
      do {
        while( true ) {
          bVar38 = (*(byte *)(param_13 + 0x18) & 1) == 0;
          pppppppuVar16 = *(uint ********)(param_13 + 0x28);
          if (bVar38) {
            pppppppuVar16 = pppppppuStack_540;
          }
          uVar30 = (ulong)(*(byte *)(param_13 + 0x18) >> 1);
          if (!bVar38) {
            uVar30 = *(ulong *)(param_13 + 0x20);
          }
          func_0x041b5ac0(pppppppuVar15 + 0x14,pppppppuVar16,uVar30);
          bVar38 = (*(byte *)(param_13 + 0x30) & 1) == 0;
          pppppppuVar16 = *(uint ********)(param_13 + 0x40);
          if (bVar38) {
            pppppppuVar16 = pppppppuStack_548;
          }
          uVar30 = (ulong)(*(byte *)(param_13 + 0x30) >> 1);
          if (!bVar38) {
            uVar30 = *(ulong *)(param_13 + 0x38);
          }
          func_0x041b5ac0(pppppppuVar15 + 0x17,pppppppuVar16,uVar30);
          pppppppuVar16 = (uint *******)FUN_0ee32660(0x1d0);
          uVar30 = uStack_488 >> 1 & 0x7f;
          lVar8 = (long)&uStack_488 + 1;
          if ((uStack_488 & 1) != 0) {
            uVar30 = uStack_480;
            lVar8 = lStack_478;
          }
          func_0x041c2810(pppppppuVar16,lVar8,uVar30,uStack_ec,pppppppuVar15);
          puVar11 = (undefined8 *)param_14[1];
          _auStack_2c8 = (undefined1  [8])pppppppuVar16;
          if (puVar11 < (undefined8 *)param_14[2]) break;
          lVar8 = *param_14;
          lVar32 = (long)puVar11 - lVar8;
          uVar30 = (lVar32 >> 3) + 1;
          pppppppuStack_580 = pppppppuVar15;
          if (0x1fffffffffffffff < uVar30) goto LAB_0445f305;
          uVar34 = param_14[2] - lVar8;
          uVar29 = (long)uVar34 >> 2;
          if ((ulong)((long)uVar34 >> 2) <= uVar30) {
            uVar29 = uVar30;
          }
          if (0x7ffffffffffffff7 < uVar34) {
            uVar29 = 0x1fffffffffffffff;
          }
          if (0x1fffffffffffffff < uVar29) goto LAB_0445f30a;
          lStack_4d0 = lVar8;
          lVar36 = FUN_0ee32660(uVar29 * 8);
          lVar8 = lStack_4d0;
          *(uint ********)(lVar36 + lVar32) = pppppppuVar16;
          lVar37 = lVar36 + lVar32 + 8;
          lVar24 = lVar36 + lVar32 + (lVar32 >> 3) * -8;
          func_0x0eee2f00(lVar24,lStack_4d0,lVar32);
          *param_14 = lVar24;
          param_14[1] = lVar37;
          param_14[2] = lVar36 + uVar29 * 8;
          if (lVar8 != 0) {
            func_0x0412a280(lVar8,uVar34);
          }
          param_14[1] = lVar37;
          pppppppuVar15 = pppppppuStack_580 + 0x36;
          if (pppppppuVar15 == pppppppuStack_578) goto LAB_0445ef96;
        }
        *puVar11 = pppppppuVar16;
        param_14[1] = (long)(puVar11 + 1);
        pppppppuVar15 = pppppppuVar15 + 0x36;
      } while (pppppppuVar15 != pppppppuStack_578);
    }
LAB_0445ef96:
    uVar30 = CONCAT71((int7)((ulong)pppppppuVar15 >> 8),1);
    uVar29 = uStack_4a8;
joined_r0x0445efd8:
    uStack_4a8 = uVar29;
    uVar34 = uStack_4a0;
    if (uVar29 != 0) {
      while (uVar29 != uVar34) {
        func_0x042388b0(uVar34 - 0x50);
        uVar34 = uVar34 - 0x50;
      }
      uStack_4a0 = uVar29;
      func_0x0412a280(uStack_4a8,uStack_498 - uStack_4a8);
    }
    pppppppuVar16 = uStack_538;
    pppppppuVar15 = pppppppuStack_530;
    if (uStack_538 != (uint *******)0x0) {
      while (pppppppuVar16 != pppppppuVar15) {
        func_0x042388b0(pppppppuVar15 + -10);
        pppppppuVar15 = pppppppuVar15 + -10;
      }
      pppppppuStack_530 = pppppppuVar16;
      func_0x0412a280(uStack_538,(long)pppppppuStack_528 - (long)uStack_538);
    }
    goto LAB_0445c785;
  }
  lVar32 = lStack_e8;
  lVar8 = lStack_e0;
  if ((iStack_570 == 2) || ((*param_11 & 1) == 0)) goto LAB_0445e704;
  pppppppuVar16 = (uint *******)(ulong)(auStack_4f8[0] >> 1);
  pppppppuVar15 = pppppppuStack_4f0;
  if (((ulong)auStack_4f8 & 1) == 0) {
    pppppppuVar15 = pppppppuVar16;
  }
  bVar2 = auStack_4f8[0];
  if (pppppppuVar15 == (uint *******)0x0) {
    func_0x04487190(auStack_2c8,8);
    if (((ulong)auStack_4f8 & 1) != 0) {
      func_0x0412a280(pppppppuStack_4e8,(ulong)auStack_4f8 & 0xfffffffffffffffe);
    }
    pppppppuStack_4e8 = pppppppuStack_2b8;
    bVar2 = SUB81(_auStack_2c8,0);
    auStack_4f8 = _auStack_2c8;
    pppppppuStack_4f0 = uStack_2c0;
    pppppppuVar16 = (uint *******)(ulong)(bVar2 >> 1);
  }
  pppppppuVar15 = pppppppuStack_4f0;
  pppppppuVar10 = pppppppuStack_4e8;
  if ((bVar2 & 1) == 0) {
    pppppppuVar15 = pppppppuVar16;
    pppppppuVar10 = (uint *******)(auStack_4f8 + 1);
  }
  func_0x04235650(auStack_2c8);
  if ((pppppppuVar15 == (uint *******)0x0) && (uStack_538 == pppppppuStack_530)) {
    cVar5 = func_0x041c74a0();
    if (cVar5 == '\0') {
      func_0x04489e60(&UNK_01dcf1d5,&UNK_013dce14,0x1049,&UNK_0123a750);
    }
LAB_0445e6da:
    func_0x04235a30(auStack_2c8);
    lVar32 = lStack_e8;
    lVar8 = lStack_e0;
    goto LAB_0445e704;
  }
  func_0x04237270(auStack_2c8,&lStack_118);
  if (pppppppuVar15 < (uint *******)0xfffffffffffffff8) {
    if (pppppppuVar15 < (uint *******)0x17) {
      auStack_418[0] = (char)pppppppuVar15 * '\x02';
      pppppppuVar16 = (uint *******)(auStack_418 + 1);
      if (pppppppuVar15 != (uint *******)0x0) goto LAB_0445e608;
    }
    else {
      uVar30 = 0x1a;
      if (((ulong)pppppppuVar15 | 7) != 0x17) {
        uVar30 = ((ulong)pppppppuVar15 | 7) + 1;
      }
      pppppppuVar16 = (uint *******)FUN_0ee32660(uVar30);
      auStack_418 = (undefined1  [8])(uVar30 | 1);
      pppppppuStack_410 = pppppppuVar15;
      pppppppuStack_408 = pppppppuVar16;
LAB_0445e608:
      func_0x0eee2f00(pppppppuVar16,pppppppuVar10,pppppppuVar15);
    }
    *(byte *)((long)pppppppuVar16 + (long)pppppppuVar15) = 0;
    if (((ulong)_auStack_2c8 & 1) != 0) {
      func_0x0412a280(pppppppuStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
    }
    pppppppuStack_2b8 = pppppppuStack_408;
    _auStack_2c8 = auStack_418;
    uStack_2c0 = pppppppuStack_410;
    func_0x04237a30(auStack_250,uStack_538,pppppppuStack_530,
                    ((long)pppppppuStack_530 - (long)uStack_538 >> 4) * -0x3333333333333333);
    puVar4 = puStack_510;
    if (puStack_510 < puStack_508) {
      func_0x04235680(puStack_510,auStack_2c8);
      puStack_510 = puVar4 + 0x12;
    }
    else {
      puStack_510 = (ulong *)func_0x043c5430(&puStack_518,auStack_2c8);
    }
    goto LAB_0445e6da;
  }
  goto LAB_0445f32d;
code_r0x0445e92c:
  pbVar31 = (byte *)(lVar8 + (long)_auStack_598);
  lVar8 = lVar8 + 0xd8;
  if ((byte *)((long)pppppppuVar15 + lVar24) == pbVar31) goto LAB_0445e94a;
  goto LAB_0445e920;
LAB_0445f2f6:
  FUN_04882eb0();
LAB_0445f2fb:
  func_0x04882e30();
LAB_0445f300:
  func_0x0533ee50();
LAB_0445f305:
  func_0x0d598be0();
LAB_0445f30a:
  FUN_04882eb0();
LAB_0445f30f:
  func_0x04882ee0();
LAB_0445f314:
  func_0x041c77a0();
LAB_0445f319:
  func_0x04882ee0();
LAB_0445f31e:
  func_0x04882e30();
LAB_0445f323:
  func_0x04882e30();
LAB_0445f328:
  func_0x04882ee0();
LAB_0445f32d:
  func_0x04882e30();
LAB_0445f332:
  func_0x04882e30();
LAB_0445f337:
  func_0x04882ee0();
LAB_0445f33c:
  func_0x0421c5a0(auStack_2c8);
LAB_0445c783:
  uVar30 = 0;
LAB_0445c785:
  func_0x04419b50(&pppppppuStack_448);
  pppppppuVar16 = pppppppuStack_4c8;
  pppppppuVar15 = pppppppuStack_4c0;
  if (pppppppuStack_4c8 != (uint *******)0x0) {
    while (pppppppuVar16 != pppppppuVar15) {
      func_0x042388b0(pppppppuVar15 + -10);
      pppppppuVar15 = pppppppuVar15 + -10;
    }
    pppppppuStack_4c0 = pppppppuVar16;
    func_0x0412a280(pppppppuStack_4c8,lStack_4b8 - (long)pppppppuStack_4c8);
  }
  if (((ulong)auStack_4f8 & 1) != 0) {
    func_0x0412a280(pppppppuStack_4e8,(ulong)auStack_4f8 & 0xfffffffffffffffe);
  }
  lVar32 = lStack_118;
  lVar8 = lStack_110;
  if (lStack_118 != 0) {
    for (; lVar32 != lVar8; lVar8 = lVar8 + -0x18) {
      if ((*(byte *)(lVar8 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar8 + -8),*(ulong *)(lVar8 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_110 = lVar32;
    func_0x0412a280(lStack_118,lStack_108 - lStack_118);
  }
  if ((uStack_308 & 1) != 0) {
    func_0x0412a280(lStack_2f8,uStack_308 & 0xfffffffffffffffe);
  }
  lVar8 = lStack_e8;
  if ((uStack_2e8 & 1) != 0) {
    func_0x0412a280(lStack_2d8,uStack_2e8 & 0xfffffffffffffffe);
    lVar8 = lStack_e8;
  }
  lStack_e8 = lVar8;
  lVar32 = lStack_e0;
  if (lVar8 != 0) {
    while (lVar8 != lVar32) {
      func_0x04235260(lVar32 + -0x30);
      lVar32 = lVar32 + -0x30;
    }
    lStack_e0 = lVar8;
    func_0x0412a280(lStack_e8,lStack_d8 - lStack_e8);
  }
  func_0x04464c40(&pppppppuStack_58);
  puVar23 = puStack_518;
  puVar4 = puStack_510;
  if (puStack_518 != (ulong *)0x0) {
    while (puVar23 != puVar4) {
      func_0x04235a30(puVar4 + -0x12);
      puVar4 = puVar4 + -0x12;
    }
    puStack_510 = puVar23;
    func_0x0412a280(puStack_518,(long)puStack_508 - (long)puStack_518);
  }
  if ((uStack_488 & 1) != 0) {
    func_0x0412a280(lStack_478,uStack_488 & 0xfffffffffffffffe);
  }
  pppppppuVar16 = pppppppuStack_338;
  pppppppuVar15 = pppppppuStack_330;
  if (pppppppuStack_338 != (uint *******)0x0) {
    while (pppppppuVar16 != pppppppuVar15) {
      func_0x041b48c0(pppppppuVar15 + -0x36);
      pppppppuVar15 = pppppppuVar15 + -0x36;
    }
    pppppppuStack_330 = pppppppuVar16;
    func_0x0412a280(pppppppuStack_338,(long)pppppppuStack_328 - (long)pppppppuStack_338);
  }
  return uVar30 & 0xffffffff;
}



/* ---- referenced strings ----
 * 0x11ea4a8  Invalid SDP line.
 * 0x14453c5  Failed to parse codecs correctly.
 * 0x14453d5  codecs correctly.
 * 0x14929ef  b= syntax error, does not match b=<modifier>:<bandwidth-value>.
 * 0x14929ff   does not match b=<modifier>:<bandwidth-value>.
 * 0x1492a0f  b=<modifier>:<bandwidth-value>.
 * 0x1492a1e  andwidth-value>.
 */
