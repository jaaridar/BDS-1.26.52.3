/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5faa50 (ELF vaddr 0xd4faa50)
 * Label: caller-of-callee
 * Body:  [[0d5faa50, 0d5fc857] [0d5fc860, 0d5fc8fa] [0d5fc900, 0d5fcd0d] [0d5fcd10, 0d5fcdb4] [0d5fcdc0, 0d5fd0d8] [0d5fd0e0, 0d5fd5f6] [0d5fda34, 0d5fda56] [0d5fdb67, 0d5fdbb7]]
 * Ghidra: FUN_0d5faa50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d5faa50(long *param_1,long param_2,undefined8 ****param_3,undefined8 ******param_4,
                   undefined8 ****param_5,undefined8 param_6)

{
  byte bVar1;
  long lVar2;
  undefined7 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined7 *puVar10;
  undefined1 auVar11 [15];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  char cVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 ******ppppppuVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  undefined1 (*pauVar22) [16];
  undefined8 ****ppppuVar23;
  undefined8 *****pppppuVar24;
  long lVar25;
  ulong uVar26;
  undefined8 ***pppuVar27;
  undefined8 *******pppppppuVar28;
  ulong uVar29;
  undefined8 *****pppppuVar30;
  long lVar31;
  undefined8 ****ppppuVar32;
  undefined8 ****ppppuVar33;
  undefined *puVar34;
  undefined8 ******ppppppuVar35;
  code *pcVar36;
  undefined8 *******pppppppuVar37;
  long *plVar38;
  ulong uVar39;
  long *plVar40;
  undefined8 ******ppppppuVar41;
  ulong uVar42;
  undefined8 ******ppppppuVar43;
  bool bVar44;
  float fVar45;
  undefined1 *puVar46;
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 *puVar49;
  long lVar50;
  float fVar51;
  undefined8 uStack_698;
  byte bStack_678;
  undefined7 uStack_677;
  undefined8 ******ppppppuStack_670;
  char cStack_668;
  uint7 uStack_667;
  undefined8 ******ppppppuStack_660;
  undefined1 auStack_658 [16];
  undefined8 *puStack_648;
  undefined8 *******pppppppuStack_640;
  undefined8 ******ppppppuStack_638;
  undefined8 ******ppppppuStack_630;
  undefined8 ******ppppppuStack_628;
  undefined4 uStack_620;
  undefined1 uStack_61c;
  undefined1 auStack_618 [16];
  undefined1 auStack_608 [16];
  undefined1 auStack_5f8 [16];
  undefined1 auStack_5e8 [2];
  undefined2 uStack_5e6;
  undefined1 uStack_5e4;
  undefined1 auStack_5e3 [11];
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  undefined1 uStack_5cc;
  undefined8 ****ppppuStack_5c0;
  undefined1 auStack_5b8 [16];
  undefined8 uStack_5a8;
  undefined1 auStack_598 [9];
  undefined2 uStack_58f;
  undefined5 uStack_58d;
  double dStack_588;
  undefined8 ******ppppppuStack_580;
  undefined8 uStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *******pppppppuStack_560;
  undefined8 uStack_558;
  undefined8 ******ppppppuStack_550;
  code *pcStack_548;
  int iStack_540;
  char cStack_53c;
  undefined1 auStack_538 [16];
  code *pcStack_528;
  undefined1 auStack_520 [12];
  undefined4 uStack_514;
  undefined8 uStack_510;
  undefined1 auStack_508 [2];
  undefined2 uStack_506;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 uStack_4f8;
  undefined4 uStack_4f0;
  byte bStack_4ec;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined1 auStack_498 [16];
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined1 auStack_478 [16];
  undefined8 ***apppuStack_468 [4];
  undefined8 ****ppppuStack_448;
  undefined8 uStack_418;
  undefined1 auStack_408 [8];
  undefined8 ******ppppppuStack_400;
  ulong uStack_3f8;
  undefined1 auStack_3f0 [16];
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [16];
  undefined1 auStack_3c0 [16];
  undefined8 uStack_3b0;
  undefined1 (*pauStack_3a8) [16];
  undefined1 auStack_398 [16];
  undefined8 uStack_388;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  undefined4 uStack_350;
  byte bStack_34c;
  undefined8 uStack_348;
  undefined8 ******ppppppuStack_340;
  code *pcStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined4 uStack_300;
  byte bStack_2fc;
  undefined8 *****pppppuStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  uint7 uStack_2e7;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  undefined1 auStack_2d8 [8];
  ulong uStack_2d0;
  ulong uStack_2c8;
  byte bStack_2c0;
  undefined7 uStack_2bf;
  char cStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [96];
  uint uStack_248;
  undefined1 auStack_240 [88];
  undefined8 ******ppppppuStack_1e8;
  undefined8 ******ppppppuStack_1e0;
  undefined8 ******ppppppuStack_1d8;
  char cStack_1c2;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 *******apppppppuStack_1b0 [3];
  code *pcStack_198;
  int iStack_190;
  char cStack_18c;
  undefined1 auStack_188 [76];
  byte bStack_13c;
  undefined8 ****ppppuStack_138;
  undefined *puStack_130;
  undefined8 ****ppppuStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_d8 [88];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  ppppppuVar18 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2f0);
  if (ppppppuVar18 == (undefined8 ******)0x0) {
    FUN_0eec74c0(0x2f0,0);
  }
  func_0x0d5f4150(ppppppuVar18,0);
  *param_1 = (long)ppppppuVar18;
  *(int *)(ppppppuVar18 + 4) = *(int *)param_4;
  if (ppppppuVar18 + 4 != param_4) {
    ppppppuVar35 = ppppppuVar18 + 5;
    bVar1 = *(byte *)(param_4 + 1);
    if (((ulong)*ppppppuVar35 & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        ppppppuVar18[7] = param_4[3];
        pppppuVar24 = param_4[2];
        *ppppppuVar35 = param_4[1];
        ppppppuVar18[6] = pppppuVar24;
      }
      else {
        FUN_04885070(ppppppuVar35,param_4[3],param_4[2]);
      }
    }
    else {
      bVar44 = (bVar1 & 1) != 0;
      pppppuVar24 = (undefined8 *****)((long)param_4 + 9);
      if (bVar44) {
        pppppuVar24 = param_4[3];
      }
      pppppuVar30 = (undefined8 *****)(ulong)(bVar1 >> 1);
      if (bVar44) {
        pppppuVar30 = param_4[2];
      }
      func_0x04885120(ppppppuVar35,pppppuVar24,pppppuVar30);
    }
  }
  pppppuVar24 = param_4[5];
  ppppppuVar18[8] = param_4[4];
  ppppppuVar18[9] = pppppuVar24;
  iVar16 = (*(code *)(*param_3)[0xc])(param_3);
  *(bool *)((long)ppppppuVar18 + 0x19) = iVar16 == 1;
  auStack_5b8 = (undefined1  [16])0x0;
  uStack_5a8 = 0;
  cVar15 = (*(code *)(*param_3)[9])(param_3,0xf721990,auStack_5b8,0);
  ppppuStack_5c0 = param_3;
  uStack_698 = param_5;
  if ((cVar15 == '\0') &&
     (cVar15 = (*(code *)(*param_3)[9])(param_3,0xf7219e0,auStack_5b8,0), cVar15 == '\0')) {
    auStack_498 = (undefined1  [16])0x0;
    puStack_488 = (undefined1 *)0x0;
    uStack_2f0._0_4_ = 0;
    uStack_2f0._4_4_ = 0;
    uStack_2e8 = 0;
    uStack_2e7 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    auStack_2d8 = (undefined1  [8])0x200000004;
    pppppuStack_2f8 = (undefined8 *****)&UNK_0f47b778;
    func_0x0d5eed10(param_5,&pppppuStack_2f8);
    ppppppuVar35 = ppppppuVar18;
LAB_0d5fc6a4:
    if (*(int *)param_4 == 1) goto LAB_0d5fd365;
    func_0x0ee34180(&bStack_678,ppppppuVar18 + 0x25);
    lVar31 = *(long *)(param_2 + 0x40);
    ppppppuVar41 = ppppppuVar18;
    if (lVar31 != 0) {
      func_0x0412d550(lVar31);
      ppppppuVar18 = (undefined8 ******)(ulong)(bStack_678 >> 1);
      puVar3 = &uStack_677;
      puVar10 = puVar3;
      if ((bStack_678 & 1) != 0) {
        ppppppuVar18 = ppppppuStack_670;
        puVar10 = (undefined7 *)CONCAT71(uStack_667,cStack_668);
      }
      ppppuVar21 = (undefined8 ****)FUN_04883620(&pppppuStack_2f8,puVar10,ppppppuVar18);
      ppppuVar33 = *(undefined8 *****)(lVar31 + 0x98);
      uStack_698._4_4_ = (uint)((ulong)param_5 >> 0x20);
      if (ppppuVar33 == (undefined8 ****)0x0) {
        uVar17 = (undefined4)CONCAT71((int7)((ulong)ppppuVar21 >> 8),1);
      }
      else {
        uVar42 = (long)ppppuVar33 - ((ulong)ppppuVar33 >> 1 & 0x5555555555555555);
        uVar42 = (uVar42 >> 2 & 0x3333333333333333) + (uVar42 & 0x3333333333333333);
        uVar42 = (uVar42 >> 4) + uVar42 & 0xf0f0f0f0f0f0f0f;
        uVar29 = uVar42 * 0x101010101010101;
        uVar17 = (undefined4)CONCAT71((int7)(uVar42 >> 8),1);
        if (uVar29 >> 0x38 < 2) {
          param_3 = (undefined8 ****)((ulong)((long)ppppuVar33 + -1) & (ulong)ppppuVar21);
          plVar19 = *(long **)(*(long *)(lVar31 + 0x90) + (long)param_3 * 8);
        }
        else if (ppppuVar21 < ppppuVar33) {
          plVar19 = *(long **)(*(long *)(lVar31 + 0x90) + (long)ppppuVar21 * 8);
          param_3 = ppppuVar21;
        }
        else if (((ulong)ppppuVar21 | (ulong)ppppuVar33) >> 0x20 == 0) {
          param_3 = (undefined8 ****)
                    (((ulong)ppppuVar21 & 0xffffffff) % ((ulong)ppppuVar33 & 0xffffffff));
          plVar19 = *(long **)(*(long *)(lVar31 + 0x90) + (long)param_3 * 8);
        }
        else {
          param_3 = (undefined8 ****)((ulong)ppppuVar21 % (ulong)ppppuVar33);
          plVar19 = *(long **)(*(long *)(lVar31 + 0x90) + (long)param_3 * 8);
        }
        if (plVar19 != (long *)0x0) {
          uStack_698 = (undefined8 ****)CONCAT44(uStack_698._4_4_,uVar17);
          plVar19 = (long *)*plVar19;
          if (plVar19 != (long *)0x0) {
            if ((bStack_678 & 1) == 0) {
              ppppppuVar35 = (undefined8 ******)(ulong)(bStack_678 >> 1);
            }
            else {
              puVar3 = (undefined7 *)CONCAT71(uStack_667,cStack_668);
              ppppppuVar35 = ppppppuStack_670;
            }
            if ((byte)(uVar29 >> 0x38) < 2) {
              ppppuVar33 = (undefined8 ****)((long)ppppuVar33 + -1);
              do {
                if (ppppuVar21 == (undefined8 ****)plVar19[1]) {
                  bVar1 = *(byte *)(plVar19 + 2);
                  if ((bVar1 & 1) == 0) {
                    ppppppuVar18 = (undefined8 ******)(ulong)(bVar1 >> 1);
                  }
                  else {
                    ppppppuVar18 = (undefined8 ******)plVar19[3];
                  }
                  if (ppppppuVar18 == ppppppuVar35) {
                    if ((bVar1 & 1) == 0) {
                      lVar50 = (long)plVar19 + 0x11;
                    }
                    else {
                      lVar50 = plVar19[4];
                    }
                    iVar16 = func_0x0eee3000(lVar50,puVar3,ppppppuVar35);
                    if (iVar16 == 0) goto LAB_0d5fc941;
                  }
                }
                else if ((undefined8 ****)((ulong)plVar19[1] & (ulong)ppppuVar33) != param_3) break;
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
            else {
              do {
                ppppuVar23 = (undefined8 ****)plVar19[1];
                if (ppppuVar21 == ppppuVar23) {
                  bVar1 = *(byte *)(plVar19 + 2);
                  if ((bVar1 & 1) == 0) {
                    ppppppuVar18 = (undefined8 ******)(ulong)(bVar1 >> 1);
                  }
                  else {
                    ppppppuVar18 = (undefined8 ******)plVar19[3];
                  }
                  if (ppppppuVar18 == ppppppuVar35) {
                    if ((bVar1 & 1) == 0) {
                      lVar50 = (long)plVar19 + 0x11;
                    }
                    else {
                      lVar50 = plVar19[4];
                    }
                    iVar16 = func_0x0eee3000(lVar50,puVar3,ppppppuVar35);
                    if (iVar16 == 0) goto LAB_0d5fc941;
                  }
                }
                else {
                  if (ppppuVar33 <= ppppuVar23) {
                    if (((ulong)ppppuVar23 | (ulong)ppppuVar33) >> 0x20 == 0) {
                      ppppuVar23 = (undefined8 ****)
                                   (((ulong)ppppuVar23 & 0xffffffff) %
                                   ((ulong)ppppuVar33 & 0xffffffff));
                    }
                    else {
                      ppppuVar23 = (undefined8 ****)((ulong)ppppuVar23 % (ulong)ppppuVar33);
                    }
                  }
                  if (ppppuVar23 != param_3) break;
                }
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
          }
          ppppuVar21 = (undefined8 ****)0x0;
          goto LAB_0d5fc978;
        }
      }
      uStack_698 = (undefined8 ****)CONCAT44(uStack_698._4_4_,uVar17);
      ppppuVar21 = (undefined8 ****)0x0;
      goto LAB_0d5fc978;
    }
    goto LAB_0d5fc98b;
  }
  auStack_498 = (undefined1  [16])0x0;
  puStack_488 = (undefined1 *)0x0;
  uStack_4e8 = auStack_5b8._0_8_;
  uStack_4e0 = auStack_5b8._8_8_;
  uStack_4d8 = uStack_5a8;
  auStack_5b8 = (undefined1  [16])0x0;
  uStack_5a8 = 0;
  func_0x0d689160(&pppppuStack_2f8,auStack_498,&uStack_4e8);
  if ((uStack_4e8 & 1) != 0) {
    func_0x0412a280(uStack_4d8,uStack_4e8 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_488 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_488 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_488 = (undefined1 *)0x0;
  if ((auStack_498._8_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_498._8_8_ & 0xff00ffffffffffff) - 8);
  }
  lVar31 = *(long *)(param_2 + 0x20);
  puVar34 = &UNK_0f47c390;
  cVar15 = func_0x05f6fe50(&UNK_0f47c390,&UNK_0f47c3b8);
  if (cVar15 != '\0') {
    puVar34 = &UNK_0f47c3b8;
  }
  func_0x05d54750(&bStack_678,puVar34);
  auStack_498 = (undefined1  [16])0x0;
  puStack_488 = (undefined1 *)0x0;
  puStack_480 = auStack_478;
  auStack_478 = (undefined1  [16])0x0;
  ppppuStack_448 = (undefined8 ****)0x0;
  uStack_418 = 0;
  ppppppuStack_400 = (undefined8 ******)0x0;
  ppppppuVar35 = ppppppuStack_670;
  if (((ulong)ppppppuStack_670 & 0x80000000000000) != 0) {
    uVar42 = (ulong)ppppppuStack_670 & 0xff00ffffffffffff;
    lVar25 = *(long *)(uVar42 - 8);
    lVar50 = lVar25 + 9;
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar50,8);
    if (lVar50 != 0 && plVar19 == (long *)0x0) {
      FUN_0eec74c0(lVar50,8);
    }
    *plVar19 = lVar25;
    func_0x0eee2f00(plVar19 + 1,uVar42,lVar25);
    *(undefined1 *)((long)plVar19 + lVar25 + 8) = 0;
    ppppppuVar35 = (undefined8 ******)((ulong)(plVar19 + 1) & 0xff00ffffffffffff | 0x80000000000000)
    ;
  }
  uStack_3f8 = 0;
  ppppppuStack_400 = ppppppuVar35;
  if ((uStack_667 & 0x800000000000) == 0) {
    auStack_3f0 = (undefined1  [16])0x0;
    auStack_3e0 = (undefined1  [16])0x0;
    auStack_3d0 = (undefined1  [16])0x0;
    auStack_3c0 = (undefined1  [16])0x0;
    uStack_3b0 = 0;
    uStack_3f8 = CONCAT71(uStack_667,cStack_668);
  }
  else {
    uVar42 = CONCAT71(uStack_667,cStack_668) & 0xff00ffffffffffff;
    lVar25 = *(long *)(uVar42 - 8);
    lVar50 = lVar25 + 9;
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar50,8);
    if (lVar50 != 0 && plVar19 == (long *)0x0) {
      FUN_0eec74c0(lVar50,8);
    }
    *plVar19 = lVar25;
    func_0x0eee2f00(plVar19 + 1,uVar42,lVar25);
    *(undefined1 *)((long)plVar19 + lVar25 + 8) = 0;
    uStack_3f8 = (ulong)(plVar19 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    auStack_3c0 = (undefined1  [16])0x0;
    auStack_3d0 = (undefined1  [16])0x0;
    auStack_3e0 = (undefined1  [16])0x0;
    auStack_3f0 = (undefined1  [16])0x0;
    uStack_3b0 = 0;
    if ((uStack_667 & 0x800000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT71(uStack_667,cStack_668) & 0xff00ffffffffffff) - 8);
    }
  }
  cStack_668 = 0;
  uStack_667 = 0;
  if (((ulong)ppppppuStack_670 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_670 & 0xff00ffffffffffff) - 8);
  }
  pauStack_3a8 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (pauStack_3a8 == (undefined1 (*) [16])0x0) {
    FUN_0eec74c0(0x28,0);
  }
  pauStack_3a8[1] = (undefined1  [16])0x0;
  *pauStack_3a8 = (undefined1  [16])0x0;
  *(undefined8 *)pauStack_3a8[2] = 0;
  uVar12 = auStack_3f0._8_8_;
  auStack_3f0 = (undefined1  [16])0x0;
  if ((long *)uVar12 != (long *)0x0) {
    LOCK();
    plVar19 = (long *)(uVar12 + 8);
    lVar50 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*(long *)uVar12 + 0x10))(uVar12);
      func_0x0412c2d0(uVar12);
    }
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auStack_3e0._8_8_;
  auStack_3e0 = auVar14 << 0x40;
  lVar50 = *(long *)*(undefined1 (*) [16])(lVar31 + 8);
  auVar14 = *(undefined1 (*) [16])(lVar31 + 8);
  if (*(long *)(lVar31 + 0x10) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(lVar31 + 0x10) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  uVar12 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar19 = (long *)(auStack_3f0._8_8_ + 8);
    lVar50 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      lVar50 = *(long *)auStack_3f0._8_8_;
      auStack_3f0 = auVar14;
      (**(code **)(lVar50 + 0x10))(uVar12);
      func_0x0412c2d0(uVar12);
      auVar14 = auStack_3f0;
    }
    auStack_3f0 = auVar14;
    lVar50 = auStack_3f0._0_8_;
    auVar14 = auStack_3f0;
  }
  auStack_3f0 = auVar14;
  if (lVar50 != 0) {
    auStack_3e0._0_8_ = lVar31;
  }
  if ((undefined8 *)auStack_3e0._8_8_ == (undefined8 *)0x0) {
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar20 = 0;
    auStack_3e0._8_8_ = puVar20;
    if ((undefined8 *)auStack_3d0._0_8_ == (undefined8 *)0x0) goto LAB_0d5fb080;
LAB_0d5fb039:
    *(undefined8 *)auStack_3d0._0_8_ = 0;
  }
  else {
    *(undefined8 *)auStack_3e0._8_8_ = 0;
    if ((undefined8 *)auStack_3d0._0_8_ != (undefined8 *)0x0) goto LAB_0d5fb039;
LAB_0d5fb080:
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar20 = 0;
    auStack_3d0._0_8_ = puVar20;
  }
  ppppuVar33 = ppppuStack_448;
  pppuVar27 = (undefined8 ***)&UNK_0f47c3f0;
  ppppuStack_138 = (undefined8 ****)&UNK_0f47c3f0;
  puStack_130 = &UNK_0d61b120;
  ppppuStack_118 = &ppppuStack_138;
  ppppuStack_448 = (undefined8 ****)0x0;
  if (ppppuVar33 == apppuStack_468) {
    lVar31 = 0x20;
LAB_0d5fb114:
    (**(code **)((long)*ppppuVar33 + lVar31))(ppppuVar33);
    if (ppppuStack_118 == (undefined8 ****)0x0) {
      ppppuStack_448 = (undefined8 ****)0x0;
    }
    else {
      if ((undefined8 *****)ppppuStack_118 == &ppppuStack_138) {
        pppuVar27 = *ppppuStack_118;
        goto LAB_0d5fb1d2;
      }
      ppppuStack_448 = ppppuStack_118;
      ppppuStack_118 = (undefined8 ****)0x0;
    }
  }
  else {
    lVar31 = 0x28;
    if (ppppuVar33 != (undefined8 ****)0x0) goto LAB_0d5fb114;
LAB_0d5fb1d2:
    ppppuStack_448 = apppuStack_468;
    (*(code *)pppuVar27[3])(ppppuStack_118,apppuStack_468);
    if ((undefined8 *****)ppppuStack_118 == &ppppuStack_138) {
      lVar31 = 0x20;
    }
    else {
      lVar31 = 0x28;
      if (ppppuStack_118 == (undefined8 ****)0x0) goto LAB_0d5fb20c;
    }
    (**(code **)((long)*ppppuStack_118 + lVar31))();
  }
LAB_0d5fb20c:
  pauVar22 = pauStack_3a8;
  func_0x05d54750(&uStack_348,&UNK_0f47c680);
  ppppppuStack_670 = (undefined8 ******)auStack_408;
  bStack_678 = (byte)auStack_498;
  uStack_677 = (undefined7)((ulong)auStack_498 >> 8);
  uVar12 = auStack_3f0._0_8_;
  ppppppuVar35 = (undefined8 ******)auStack_3f0._8_8_;
  cStack_668 = auStack_3f0[0];
  uStack_667 = auStack_3f0._1_7_;
  ppppppuStack_660 = (undefined8 ******)auStack_3f0._8_8_;
  if ((undefined8 ******)auStack_3f0._8_8_ != (undefined8 ******)0x0) {
    LOCK();
    *(undefined8 ******)(auStack_3f0._8_8_ + 8) =
         (undefined8 *****)((long)*(undefined8 ******)(auStack_3f0._8_8_ + 8) + 1);
    UNLOCK();
  }
  uVar13 = auStack_3e0._0_8_;
  auStack_658._0_8_ = auStack_3e0._0_8_;
  if ((undefined8 *)auStack_3e0._8_8_ == (undefined8 *)0x0) {
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar20 = 0;
    auStack_3e0._8_8_ = puVar20;
    auStack_658._8_8_ = puVar20;
    puStack_648 = (undefined8 *)auStack_3d0._0_8_;
  }
  else {
    auStack_658._8_8_ = auStack_3e0._8_8_;
    puStack_648 = (undefined8 *)auStack_3d0._0_8_;
  }
  if (puStack_648 == (undefined8 *)0x0) {
    puStack_648 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puStack_648 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puStack_648 = 0;
    auStack_3d0._0_8_ = puStack_648;
  }
  puStack_570 = (undefined8 *)auStack_658._8_8_;
  pppppppuStack_640 = (undefined8 *******)auStack_3c0;
  auStack_598._1_7_ = uStack_677;
  auStack_598[0] = bStack_678;
  stack0xfffffffffffffa70 = ppppppuStack_670;
  dStack_588 = (double)uVar12;
  ppppppuStack_580 = ppppppuVar35;
  cStack_668 = 0;
  uStack_667 = 0;
  ppppppuStack_660 = (undefined8 ******)0x0;
  uStack_578 = uVar13;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auStack_658._8_8_;
  auStack_658 = auVar9 << 0x40;
  uStack_558 = uStack_348;
  ppppppuStack_550 = (undefined8 ******)0x0;
  ppppppuVar41 = ppppppuStack_340;
  puStack_568 = puStack_648;
  pppppppuStack_560 = pppppppuStack_640;
  if (((ulong)ppppppuStack_340 & 0x80000000000000) != 0) {
    uVar42 = (ulong)ppppppuStack_340 & 0xff00ffffffffffff;
    lVar50 = *(long *)(uVar42 - 8);
    lVar31 = lVar50 + 9;
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar31,8);
    if (lVar31 != 0 && plVar19 == (long *)0x0) {
      FUN_0eec74c0(lVar31,8);
    }
    *plVar19 = lVar50;
    func_0x0eee2f00(plVar19 + 1,uVar42,lVar50);
    *(undefined1 *)((long)plVar19 + lVar50 + 8) = 0;
    ppppppuVar35 = (undefined8 ******)((ulong)(plVar19 + 1) & 0xff00ffffffffffff | 0x80000000000000)
    ;
    ppppppuVar41 = ppppppuVar35;
  }
  pcStack_548 = (code *)0x0;
  pcVar36 = pcStack_338;
  ppppppuStack_550 = ppppppuVar41;
  if (((ulong)pcStack_338 & 0x80000000000000) != 0) {
    uVar42 = (ulong)pcStack_338 & 0xff00ffffffffffff;
    pppppuVar24 = *(undefined8 ******)(uVar42 - 8);
    lVar31 = (long)pppppuVar24 + 9;
    ppppppuVar35 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar31,8);
    if (lVar31 != 0 && ppppppuVar35 == (undefined8 ******)0x0) {
      FUN_0eec74c0(lVar31,8);
    }
    *ppppppuVar35 = pppppuVar24;
    func_0x0eee2f00(ppppppuVar35 + 1,uVar42,pppppuVar24);
    *(undefined1 *)((long)ppppppuVar35 + (long)(pppppuVar24 + 1)) = 0;
    pcVar36 = (code *)((ulong)(ppppppuVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  stack0xfffffffffffffae8 = 0;
  pcStack_548 = pcVar36;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar20 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x38,0);
  }
  auVar11 = stack0xfffffffffffffaf9;
  auVar47._8_4_ = (int)pauVar22;
  auVar47._0_8_ = pauVar22;
  auVar47._12_4_ = (int)((ulong)pauVar22 >> 0x20);
  puVar49 = *pauVar22 + _DAT_014e1c10;
  lVar50 = _UNK_014e1c18 + auVar47._8_8_;
  puVar46 = *pauVar22 + _DAT_014e2650;
  lVar31 = auVar47._8_8_ + _UNK_014e2658;
  *puVar20 = &UNK_0f47c600;
  puVar20[1] = &UNK_0d614100;
  puVar20[2] = pauVar22;
  puVar20[3] = puVar46;
  puVar20[4] = lVar31;
  puVar20[5] = puVar49;
  puVar20[6] = lVar50;
  stack0xfffffffffffffae8 = puVar20;
  auStack_508[0] = 1;
  uStack_506 = 0xfffc;
  stack0xfffffffffffffafd = auVar11._4_11_;
  uStack_504._0_1_ = 1;
  func_0x05d54750(&ppppppuStack_1e8,&UNK_0f47c390);
  pppppppuVar28 = pppppppuStack_560;
  if (*(char *)((long)pppppppuStack_560 + 6) == '\0') {
    *pppppppuStack_560 = ppppppuStack_1e8;
    if (((ulong)pppppppuStack_560[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_560[1] & 0xff00ffffffffffff) - 8);
    }
    pppppppuVar28[1] = (undefined8 ******)0x0;
    ppppppuVar41 = ppppppuStack_1e0;
    if (((ulong)ppppppuStack_1e0 & 0x80000000000000) != 0) {
      uVar42 = (ulong)ppppppuStack_1e0 & 0xff00ffffffffffff;
      lVar50 = *(long *)(uVar42 - 8);
      lVar31 = lVar50 + 9;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar31,8);
      if (lVar31 != 0 && plVar19 == (long *)0x0) {
        FUN_0eec74c0(lVar31,8);
      }
      *plVar19 = lVar50;
      func_0x0eee2f00(plVar19 + 1,uVar42,lVar50);
      *(undefined1 *)((long)plVar19 + lVar50 + 8) = 0;
      ppppppuVar41 = (undefined8 ******)
                     ((ulong)(plVar19 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      ppppppuVar35 = ppppppuVar41;
    }
    pppppppuVar28[1] = ppppppuVar41;
    if (((ulong)pppppppuVar28[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuVar28[2] & 0xff00ffffffffffff) - 8);
    }
    pppppppuVar28[2] = (undefined8 ******)0x0;
    ppppppuVar41 = ppppppuStack_1d8;
    if (((ulong)ppppppuStack_1d8 & 0x80000000000000) != 0) {
      uVar42 = (ulong)ppppppuStack_1d8 & 0xff00ffffffffffff;
      lVar50 = *(long *)(uVar42 - 8);
      lVar31 = lVar50 + 9;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar31,8);
      if (lVar31 != 0 && plVar19 == (long *)0x0) {
        FUN_0eec74c0(lVar31,8);
      }
      *plVar19 = lVar50;
      func_0x0eee2f00(plVar19 + 1,uVar42,lVar50);
      *(undefined1 *)((long)plVar19 + lVar50 + 8) = 0;
      ppppppuVar41 = (undefined8 ******)
                     ((ulong)(plVar19 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      ppppppuVar35 = ppppppuVar41;
    }
    pppppppuVar28[2] = ppppppuVar41;
  }
  uVar12 = auStack_598._0_8_;
  func_0x0d64b5b0(auStack_398,auStack_598,0,&ppppppuStack_1e8,3,(undefined1)uStack_504);
  if (auStack_398._0_8_ != 0) {
    plVar19 = *(long **)uVar12;
    plVar38 = *(long **)(uVar12 + 8);
    if (plVar19 != plVar38) {
      ppppppuVar35 = (undefined8 ******)(auStack_398._0_8_ + 0x38);
      do {
        cVar15 = func_0x04fa7a10(*plVar19 + 0x20,ppppppuVar35);
        if (cVar15 == '\0') break;
        plVar19 = plVar19 + 1;
      } while (plVar19 != plVar38);
    }
    func_0x0d6af860(uVar12,plVar19,auStack_398);
    uVar12 = auStack_398._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auStack_398._8_8_;
    auStack_398 = auVar4 << 0x40;
    if ((long *)uVar12 != (long *)0x0) {
      (**(code **)(*(long *)uVar12 + 8))();
    }
  }
  auStack_658._0_8_ = uStack_578;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffaf9;
  _auStack_508 = auVar5 << 8;
  bStack_678 = auStack_598[0];
  uStack_677 = auStack_598._1_7_;
  ppppppuStack_670 = stack0xfffffffffffffa70;
  cStack_668 = SUB81(dStack_588,0);
  uStack_667 = (uint7)((ulong)dStack_588 >> 8);
  ppppppuStack_660 = ppppppuStack_580;
  dStack_588 = 0.0;
  ppppppuStack_580 = (undefined8 ******)0x0;
  uStack_578 = 0;
  auStack_658._8_8_ = puStack_570;
  puStack_648 = puStack_568;
  pppppppuStack_640 = pppppppuStack_560;
  ppppppuStack_638 = ppppppuStack_1e8;
  ppppppuStack_630 = (undefined8 ******)0x0;
  ppppppuVar41 = ppppppuStack_1e0;
  if (((ulong)ppppppuStack_1e0 & 0x80000000000000) != 0) {
    uVar42 = (ulong)ppppppuStack_1e0 & 0xff00ffffffffffff;
    lVar50 = *(long *)(uVar42 - 8);
    lVar31 = lVar50 + 9;
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar31,8);
    if (lVar31 != 0 && plVar19 == (long *)0x0) {
      FUN_0eec74c0(lVar31,8);
    }
    *plVar19 = lVar50;
    func_0x0eee2f00(plVar19 + 1,uVar42,lVar50);
    *(undefined1 *)((long)plVar19 + lVar50 + 8) = 0;
    ppppppuVar41 = (undefined8 ******)((ulong)(plVar19 + 1) & 0xff00ffffffffffff | 0x80000000000000)
    ;
    ppppppuVar35 = ppppppuVar41;
  }
  ppppppuStack_628 = (undefined8 ******)0x0;
  ppppppuVar43 = ppppppuStack_1d8;
  ppppppuStack_630 = ppppppuVar41;
  if (((ulong)ppppppuStack_1d8 & 0x80000000000000) != 0) {
    uVar42 = (ulong)ppppppuStack_1d8 & 0xff00ffffffffffff;
    pppppuVar24 = *(undefined8 ******)(uVar42 - 8);
    lVar31 = (long)pppppuVar24 + 9;
    ppppppuVar35 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar31,8);
    if (lVar31 != 0 && ppppppuVar35 == (undefined8 ******)0x0) {
      FUN_0eec74c0(lVar31,8);
    }
    *ppppppuVar35 = pppppuVar24;
    func_0x0eee2f00(ppppppuVar35 + 1,uVar42,pppppuVar24);
    *(undefined1 *)((long)ppppppuVar35 + (long)(pppppuVar24 + 1)) = 0;
    ppppppuVar43 = (undefined8 ******)
                   ((ulong)(ppppppuVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  auVar11 = stack0xfffffffffffffa19;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auStack_5f8._8_8_;
  auStack_5f8 = auVar6 << 0x40;
  auStack_5e8[0] = 1;
  uStack_5e6 = 0xfffc;
  auStack_5e3 = auVar11._4_11_;
  uStack_5e4 = 1;
  plVar19 = (long *)CONCAT71(uStack_677,bStack_678);
  ppppppuStack_628 = ppppppuVar43;
  func_0x0d64b5b0(auStack_398,&bStack_678,1,ppppppuStack_670,1,1);
  if (auStack_398._0_8_ != 0) {
    plVar38 = (long *)*plVar19;
    plVar40 = (long *)plVar19[1];
    if (plVar38 != plVar40) {
      ppppppuVar35 = (undefined8 ******)(auStack_398._0_8_ + 0x38);
      do {
        cVar15 = func_0x04fa7a10(*plVar38 + 0x20,ppppppuVar35);
        if (cVar15 == '\0') break;
        plVar38 = plVar38 + 1;
      } while (plVar38 != plVar40);
    }
    func_0x0d6af860(plVar19,plVar38,auStack_398);
    uVar12 = auStack_398._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auStack_398._8_8_;
    auStack_398 = auVar7 << 0x40;
    if ((long *)uVar12 != (long *)0x0) {
      (**(code **)(*(long *)uVar12 + 8))();
    }
  }
  auVar8[0xf] = 0;
  auVar8._0_15_ = stack0xfffffffffffffa19;
  _auStack_5e8 = auVar8 << 8;
  func_0x0d64b450(&bStack_678);
  if (((ulong)ppppppuStack_1d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_1d8 & 0xff00ffffffffffff) - 8);
  }
  param_3 = ppppuStack_5c0;
  ppppppuStack_1d8 = (undefined8 ******)0x0;
  if (((ulong)ppppppuStack_1e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_1e0 & 0xff00ffffffffffff) - 8);
  }
  func_0x0d64b450(auStack_598);
  if (((ulong)pcStack_338 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_338 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_338 = (code *)0x0;
  if (((ulong)ppppppuStack_340 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_340 & 0xff00ffffffffffff) - 8);
  }
  ppppppuVar41 = (undefined8 ******)(param_2 + 0x28);
  *(undefined8 *)*pauStack_3a8 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *******)(*pauStack_3a8 + 8) = ppppppuVar18;
  *(undefined8 *****)pauStack_3a8[1] = param_5;
  *(undefined8 *)(pauStack_3a8[1] + 8) = param_6;
  *(undefined8 *******)pauStack_3a8[2] = ppppppuVar41;
  uStack_4b0 = 0x1000000000000;
  puStack_4a8 = &UNK_01254d89;
  puStack_4a0 = &UNK_01254d89;
  uStack_4c8 = 0x1000000000003;
  puStack_4c0 = &UNK_01254d89;
  puStack_4b8 = &UNK_01254d89;
  ppppppuVar43 = (undefined8 ******)auStack_498;
  func_0x0d6afff0(auStack_598,ppppppuVar43,&pppppuStack_2f8,&uStack_4b0,1);
  if (((uStack_578._6_1_ != 1) || ((bStack_4ec & 1) != 0)) ||
     (ppppuStack_448 == (undefined8 ****)0x0)) {
LAB_0d5fbc4a:
    uVar13 = uStack_4f8;
    uVar12 = uStack_510;
    pcVar36 = pcStack_528;
    if (((~uStack_578._6_1_ | bStack_4ec) & 1) == 0) {
      func_0x05ebb920(&bStack_678,auStack_598);
      func_0x05ebb920(&ppppppuStack_1e8,&bStack_678);
      func_0x05d85c50(auStack_618);
      if (ppppppuStack_628 != (undefined8 ******)0x0) {
        (*(code *)ppppppuStack_628)(&pppppppuStack_640);
      }
      if (((ulong)puStack_648 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_648 & 0xff00ffffffffffff) - 8);
      }
      puStack_648 = (undefined8 *)0x0;
      if ((auStack_658._8_8_ & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(auStack_658._8_8_ & 0xff00ffffffffffff) - 8);
      }
      auStack_658._8_8_ = 0;
    }
    else {
      uStack_348 = auStack_538._0_8_;
      ppppppuStack_340 = (undefined8 ******)auStack_538._8_8_;
      auStack_538 = (undefined1  [16])0x0;
      pcStack_528 = (code *)0x0;
      uStack_330 = auStack_520._0_4_;
      uStack_32c = auStack_520._4_4_;
      uStack_328 = auStack_520._8_4_;
      uStack_324 = uStack_514;
      _auStack_520 = (undefined1  [16])0x0;
      uStack_510 = 0;
      uStack_318 = _auStack_508;
      uStack_314 = uStack_504;
      uStack_310 = uStack_500;
      uStack_30c = uStack_4fc;
      _auStack_508 = (undefined1  [16])0x0;
      uStack_4f8 = 0;
      bStack_34c = bStack_4ec;
      uStack_350 = uStack_4f0;
      pcStack_338 = pcVar36;
      auStack_398 = (undefined1  [16])0x0;
      uStack_388 = 0;
      uStack_320 = uVar12;
      auStack_380 = (undefined1  [16])0x0;
      uStack_370 = 0;
      uStack_308 = uVar13;
      auStack_368 = (undefined1  [16])0x0;
      uStack_358 = 0;
      uStack_300 = uStack_4f0;
      bStack_2fc = bStack_4ec;
      bStack_678 = 0;
      uStack_677 = 0;
      ppppppuStack_670 = (undefined8 ******)0x0;
      cStack_668 = '\0';
      uStack_667 = 0;
      ppppppuStack_660._0_1_ = 1;
      auStack_658 = (undefined1  [16])0x0;
      puStack_648 = (undefined8 *)0x0;
      ppppppuStack_630 = (undefined8 ******)&UNK_0488e0b0;
      uStack_620 = 0x48b5725f;
      ppppppuStack_628 = (undefined8 ******)0x0;
      uStack_61c = 0;
      pppppppuStack_640 = (undefined8 *******)0x0;
      _auStack_5e8 = (undefined1  [16])0x0;
      auStack_5f8 = (undefined1  [16])0x0;
      auStack_608 = (undefined1  [16])0x0;
      auStack_618 = (undefined1  [16])0x0;
      uStack_5d8 = 0;
      uStack_5d0 = 0xfefffffc;
      uStack_5cc = 0;
      func_0x0c4a4310(auStack_618,&uStack_348);
      ppppppuStack_660 = (undefined8 ******)((ulong)ppppppuStack_660._1_7_ << 8);
      func_0x05ebb920(&ppppuStack_138,&bStack_678);
      func_0x05d85c50(auStack_618);
      if (ppppppuStack_628 != (undefined8 ******)0x0) {
        (*(code *)ppppppuStack_628)(&pppppppuStack_640);
      }
      if (((ulong)puStack_648 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_648 & 0xff00ffffffffffff) - 8);
      }
      puStack_648 = (undefined8 *)0x0;
      if ((auStack_658._8_8_ & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(auStack_658._8_8_ & 0xff00ffffffffffff) - 8);
      }
      auStack_658._8_8_ = 0;
      func_0x05d85c50(&uStack_348);
      func_0x05ebb920(&bStack_678,&ppppuStack_138);
      func_0x05ebb920(&ppppppuStack_1e8,&bStack_678);
      func_0x05d85c50(auStack_618);
      if (ppppppuStack_628 != (undefined8 ******)0x0) {
        (*(code *)ppppppuStack_628)(&pppppppuStack_640);
      }
      if (((ulong)puStack_648 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_648 & 0xff00ffffffffffff) - 8);
      }
      puStack_648 = (undefined8 *)0x0;
      if ((auStack_658._8_8_ & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(auStack_658._8_8_ & 0xff00ffffffffffff) - 8);
      }
      auStack_658._8_8_ = 0;
      func_0x05d85c50(auStack_d8);
      if (pcStack_e8 != (code *)0x0) {
        (*pcStack_e8)(auStack_100);
      }
      if ((uStack_108 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
      }
      uStack_108 = 0;
      if ((uStack_110 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_110 & 0xff00ffffffffffff) - 8);
      }
      uStack_110 = 0;
      func_0x05d85c50(auStack_398);
    }
    func_0x05d85c50(auStack_538);
    if (pcStack_548 != (code *)0x0) {
      (*pcStack_548)(&pppppppuStack_560);
    }
    if (((ulong)puStack_568 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_568 & 0xff00ffffffffffff) - 8);
    }
    puStack_568 = (undefined8 *)0x0;
    if (((ulong)puStack_570 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_570 & 0xff00ffffffffffff) - 8);
    }
    func_0x0d6892a0(&bStack_678,&pppppuStack_2f8);
    cVar15 = func_0x04fa7a10(&bStack_678,&uStack_4c8);
    if ((uStack_667 & 0x800000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT71(uStack_667,cStack_668) & 0xff00ffffffffffff) - 8);
    }
    cStack_668 = '\0';
    uStack_667 = 0;
    if (((ulong)ppppppuStack_670 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_670 & 0xff00ffffffffffff) - 8);
    }
    if (cVar15 == '\0') {
      if ((cStack_1c2 == '\x01') && ((bStack_13c & 1) == 0)) {
        if (cStack_18c == '\x02') {
          apppppppuStack_1b0[0] = apppppppuStack_1b0;
        }
        pppppppuVar28 = (undefined8 *******)0x0;
        if (iStack_190 == -0x479c68ca) {
          pppppppuVar28 = apppppppuStack_1b0[0];
        }
        func_0x0d5fdbc0(pppppppuVar28,ppppppuVar18,param_5,param_6,ppppppuVar41);
      }
      else {
        _auStack_598 = (undefined1  [16])0x0;
        dStack_588 = 0.0;
        ppppppuStack_670 = (undefined8 ******)0x0;
        cStack_668 = '\0';
        uStack_667 = 0;
        ppppppuStack_660 = (undefined8 ******)0x0;
        auStack_658._0_8_ = 0x200000006;
        bStack_678 = 0x78;
        uStack_677 = 0xf47b7;
        func_0x0d5eed10(param_5,&bStack_678);
      }
      uStack_80 = 0xffffffff;
      auStack_78 = (undefined1  [16])0x0;
      auStack_68 = (undefined1  [16])0x0;
      auStack_58 = (undefined1  [16])0x0;
      auStack_48 = (undefined1  [16])0x0;
      uStack_38 = 0;
      func_0x0d5ceda0(auStack_188,0x24,&uStack_80);
      func_0x05f43a40(&uStack_80);
    }
    if (*(char *)((long)ppppppuVar18 + 0x159) == '\b') {
      ppppppuVar41 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2f8);
      if (ppppppuVar41 == (undefined8 ******)0x0) {
        FUN_0eec74c0(0x2f8,0);
      }
      func_0x0d5f4a10(ppppppuVar41,ppppppuVar18);
      auVar14 = _auStack_598;
      *ppppppuVar41 = (undefined8 *****)&UNK_0f47b6c8;
      *(undefined4 *)(ppppppuVar41 + 0x5e) = 0xffffffff;
      *(undefined1 *)((long)ppppppuVar41 + 0x2f4) = 0;
      bStack_678 = 0;
      uStack_677 = 0;
      ppppppuStack_670 = (undefined8 ******)0x0;
      cStack_668 = '\0';
      uStack_667 = 0;
      auStack_598._1_8_ = 0x61642e6c6576656c;
      auStack_598[0] = 0x12;
      uStack_58d = auVar14._11_5_;
      uStack_58f = 0x74;
      cVar15 = (*(code *)(*param_3)[9])(param_3,auStack_598,&bStack_678,0);
      if ((auStack_598[0] & 1) != 0) {
        func_0x0412a280(dStack_588,auStack_598._0_8_ & 0xfffffffffffffffe);
      }
      if ((cVar15 != '\0') &&
         (uVar42 = (**(code **)(**(long **)(param_2 + 0x18) + 0x20))
                             (*(long **)(param_2 + 0x18),&bStack_678), (uVar42 & 0x100000000) != 0))
      {
        *(int *)(ppppppuVar41 + 0x5e) = (int)uVar42;
      }
      if ((bStack_678 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_667,cStack_668),
                        CONCAT71(uStack_677,bStack_678) & 0xfffffffffffffffe);
      }
      *param_1 = (long)ppppppuVar41;
      (*(code *)(*ppppppuVar18)[1])();
      ppppppuVar18 = ppppppuVar41;
LAB_0d5fc40a:
      ppppppuVar18[0x10] = ppppppuVar18[0x25];
      ppppppuVar18[0x11] = ppppppuVar18[0x26];
      *(bool *)(ppppppuVar18 + 0x12) =
           ppppppuVar18[0x26] != (undefined8 *****)0x0 ||
           ppppppuVar18[0x25] != (undefined8 *****)0x0;
    }
    else {
      (*(code *)(*param_3)[0x14])(&bStack_678,param_3);
      if (cStack_668 != '\x01') goto LAB_0d5fc40a;
      *(undefined1 *)(ppppppuVar18 + 0x12) = 1;
      ppppppuVar18[0x10] = (undefined8 *****)CONCAT71(uStack_677,bStack_678);
      ppppppuVar18[0x11] = ppppppuStack_670;
    }
    func_0x05d85c50(auStack_188);
    if (pcStack_198 != (code *)0x0) {
      (*pcStack_198)(apppppppuStack_1b0);
    }
    if ((uStack_1b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1b8 = 0;
    if ((uStack_1c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
    }
    if (((ulong)puStack_4b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_4b8 & 0xff00ffffffffffff) - 8);
    }
    puStack_4b8 = (undefined *)0x0;
    if (((ulong)puStack_4c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_4c0 & 0xff00ffffffffffff) - 8);
    }
    if (((ulong)puStack_4a0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_4a0 & 0xff00ffffffffffff) - 8);
    }
    puStack_4a0 = (undefined *)0x0;
    if (((ulong)puStack_4a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_4a8 & 0xff00ffffffffffff) - 8);
    }
    pauVar22 = pauStack_3a8;
    pauStack_3a8 = (undefined1 (*) [16])0x0;
    if (pauVar22 != (undefined1 (*) [16])0x0) {
      func_0x0412a280(pauVar22,0x28);
    }
    func_0x0d637270(auStack_498);
    func_0x05d85c50(auStack_240);
    if ((ulong)uStack_248 != 0xffffffff) {
      (**(code **)(&UNK_0f47baf0 + (ulong)uStack_248 * 8))(auStack_498,auStack_2a8);
    }
    uStack_248 = 0xffffffff;
    if ((bStack_2c0 & 1) != 0) {
      func_0x0412a280(uStack_2b0,CONCAT71(uStack_2bf,bStack_2c0) & 0xfffffffffffffffe);
    }
    if ((uStack_2c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2c8 = 0;
    if ((uStack_2d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2d0 & 0xff00ffffffffffff) - 8);
    }
    uStack_2d0 = 0;
    if ((uStack_2dc & 0x800000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT44(uStack_2dc,uStack_2e0) & 0xff00ffffffffffff) - 8);
    }
    uStack_2e0 = 0;
    uStack_2dc = 0;
    if ((uStack_2e7 & 0x800000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT71(uStack_2e7,uStack_2e8) & 0xff00ffffffffffff) - 8);
    }
    goto LAB_0d5fc6a4;
  }
  lVar31 = func_0x0417cc60();
  if (ppppuStack_448 != (undefined8 ****)0x0) {
    pppppppuVar28 = pppppppuStack_560;
    if (cStack_53c == '\x02') {
      pppppppuVar28 = &pppppppuStack_560;
    }
    pppppppuVar37 = (undefined8 *******)0x0;
    if (iStack_540 == -0x479c68ca) {
      pppppppuVar37 = pppppppuVar28;
    }
    (*(code *)(*ppppuStack_448)[6])(ppppuStack_448,pppppppuVar37,auStack_538);
    lVar50 = func_0x0417cc60();
    dStack_588 = (double)(lVar50 - lVar31) / _DAT_014f0138;
    ppppppuStack_580 =
         (undefined8 ******)
         CONCAT71(ppppppuStack_580._1_7_,(byte)ppppppuStack_580 & ~bStack_4ec & uStack_578._6_1_);
    goto LAB_0d5fbc4a;
  }
  func_0x04891200();
LAB_0d5fd588:
  iVar16 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar16 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98,ppppppuVar43);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    ppppppuVar43 = param_4;
  }
LAB_0d5fc9bc:
  func_0x0ee35a00(auStack_498,ppppppuVar43);
  bVar44 = (auStack_498[0] & 1) != 0;
  auStack_598._0_8_ = auStack_498 + 1;
  if (bVar44) {
    auStack_598._0_8_ = puStack_488;
  }
  unique0x10002e5f = (undefined8 ******)(ulong)(auStack_498[0] >> 1);
  if (bVar44) {
    unique0x10002e67 = (undefined8 ******)auStack_498._8_8_;
  }
  (**(code **)(_DAT_0f7b8f98 + 0x120))(&pppppuStack_2f8,&DAT_0f7b8f98,auStack_598,&ppppuStack_138);
  if (cStack_2b8 == '\0') {
    func_0x048e6d60(&pppppuStack_2f8);
  }
  if ((auStack_498[0] & 1) != 0) {
    func_0x0412a280(puStack_488,auStack_498._0_8_ & 0xfffffffffffffffe);
  }
  ppppuVar33 = (undefined8 ****)0x0;
  ppppuVar21 = (undefined8 ****)((ulong)ppppuStack_138 & 0xffffffff);
  param_3 = (undefined8 ****)((ulong)ppppuStack_138 >> 8);
  if (cStack_2b8 == '\0') {
    ppppuVar21 = ppppuVar33;
    param_3 = ppppuVar33;
  }
LAB_0d5fca87:
  ppppppuVar41[0x17] = ppppppuVar35;
  ppppuVar21 = (undefined8 ****)((ulong)ppppuVar21 & 0xff | (long)param_3 << 8);
  if (ppppuVar21 != (undefined8 ****)0x0) {
    pppppuStack_2f8 = (undefined8 *****)0x0;
    uStack_2f0._0_4_ = 0;
    uStack_2e8 = 0;
    uStack_2e7 = 0;
    uStack_2dc = 0;
    uStack_2c8 = 0;
    uStack_2f0._4_4_ = 1;
    uStack_2e0 = 1;
    stack0xfffffffffffffd2c = SUB1612((undefined1  [16])0x0,4);
    auStack_2d8._0_4_ = 0xffffffff;
    ppppuStack_138 = ppppuVar21;
    lVar31 = func_0x0eee3bc0(&ppppuStack_138,(undefined1 (*) [16])&pppppuStack_2f8);
    pauVar22 = (undefined1 (*) [16])&UNK_01e7a0d0;
    if (lVar31 != 0) {
      pauVar22 = (undefined1 (*) [16])&pppppuStack_2f8;
    }
    auStack_498 = *pauVar22;
    puStack_488 = *(undefined1 **)pauVar22[1];
    puStack_480 = *(undefined1 **)(pauVar22[1] + 8);
    auStack_478 = pauVar22[2];
    apppuStack_468[0] = *(undefined8 ****)pauVar22[3];
    func_0x0ee165c0(&pppppuStack_2f8,auStack_498,0);
    if (((ulong)ppppppuVar41[0x18] & 1) != 0) {
      func_0x0412a280(ppppppuVar41[0x1a],(ulong)ppppppuVar41[0x18] & 0xfffffffffffffffe);
    }
    ppppppuVar41[0x1a] = (undefined8 *****)CONCAT71(uStack_2e7,uStack_2e8);
    ppppppuVar41[0x18] = pppppuStack_2f8;
    ppppppuVar41[0x19] = (undefined8 *****)CONCAT44(uStack_2f0._4_4_,(undefined4)uStack_2f0);
  }
  lVar31 = *(long *)(param_2 + 0x40);
  if (lVar31 != 0) {
    func_0x0412d450();
    ppppppuVar18 = (undefined8 ******)(ulong)(bStack_678 >> 1);
    puVar3 = &uStack_677;
    puVar10 = puVar3;
    if ((bStack_678 & 1) != 0) {
      ppppppuVar18 = ppppppuStack_670;
      puVar10 = (undefined7 *)CONCAT71(uStack_667,cStack_668);
    }
    ppppuStack_5c0 = ppppuVar21;
    ppppuVar23 = (undefined8 ****)FUN_04883620(&pppppuStack_2f8,puVar10,ppppppuVar18);
    plVar19 = (long *)(lVar31 + 0x90);
    ppppuVar21 = *(undefined8 *****)(lVar31 + 0x98);
    if (ppppuVar21 != (undefined8 ****)0x0) {
      uVar42 = (long)ppppuVar21 - ((ulong)ppppuVar21 >> 1 & 0x5555555555555555);
      uVar42 = (uVar42 >> 2 & 0x3333333333333333) + (uVar42 & 0x3333333333333333);
      uVar42 = ((uVar42 >> 4) + uVar42 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar42 >> 0x38 < 2) {
        uStack_698 = (undefined8 ****)((long)ppppuVar21 - 1U & (ulong)ppppuVar23);
      }
      else {
        uStack_698 = ppppuVar23;
        if (ppppuVar21 <= ppppuVar23) {
          if (((ulong)ppppuVar23 | (ulong)ppppuVar21) >> 0x20 == 0) {
            uStack_698 = (undefined8 ****)
                         (((ulong)ppppuVar23 & 0xffffffff) % ((ulong)ppppuVar21 & 0xffffffff));
          }
          else {
            uStack_698 = (undefined8 ****)((ulong)ppppuVar23 % (ulong)ppppuVar21);
          }
        }
      }
      plVar38 = *(long **)(*plVar19 + (long)uStack_698 * 8);
      if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
        if ((bStack_678 & 1) == 0) {
          ppppppuVar18 = (undefined8 ******)(ulong)(bStack_678 >> 1);
        }
        else {
          puVar3 = (undefined7 *)CONCAT71(uStack_667,cStack_668);
          ppppppuVar18 = ppppppuStack_670;
        }
        if ((byte)(uVar42 >> 0x38) < 2) {
          do {
            if ((undefined8 ****)plVar38[1] == ppppuVar23) {
              bVar1 = *(byte *)(plVar38 + 2);
              if ((bVar1 & 1) == 0) {
                ppppppuVar41 = (undefined8 ******)(ulong)(bVar1 >> 1);
              }
              else {
                ppppppuVar41 = (undefined8 ******)plVar38[3];
              }
              if (ppppppuVar41 == ppppppuVar18) {
                if ((bVar1 & 1) == 0) {
                  lVar50 = (long)plVar38 + 0x11;
                }
                else {
                  lVar50 = plVar38[4];
                }
                iVar16 = func_0x0eee3000(lVar50,puVar3,ppppppuVar18);
                if (iVar16 == 0) goto LAB_0d5fce06;
              }
            }
            else if ((undefined8 ****)((ulong)plVar38[1] & (long)ppppuVar21 - 1U) != uStack_698)
            break;
            plVar38 = (long *)*plVar38;
          } while (plVar38 != (long *)0x0);
        }
        else {
          do {
            ppppuVar32 = (undefined8 ****)plVar38[1];
            if (ppppuVar32 == ppppuVar23) {
              bVar1 = *(byte *)(plVar38 + 2);
              if ((bVar1 & 1) == 0) {
                ppppppuVar41 = (undefined8 ******)(ulong)(bVar1 >> 1);
              }
              else {
                ppppppuVar41 = (undefined8 ******)plVar38[3];
              }
              if (ppppppuVar41 == ppppppuVar18) {
                if ((bVar1 & 1) == 0) {
                  lVar50 = (long)plVar38 + 0x11;
                }
                else {
                  lVar50 = plVar38[4];
                }
                iVar16 = func_0x0eee3000(lVar50,puVar3,ppppppuVar18);
                if (iVar16 == 0) goto LAB_0d5fce06;
              }
            }
            else {
              if (ppppuVar21 <= ppppuVar32) {
                if (((ulong)ppppuVar32 | (ulong)ppppuVar21) >> 0x20 == 0) {
                  ppppuVar32 = (undefined8 ****)
                               (((ulong)ppppuVar32 & 0xffffffff) % ((ulong)ppppuVar21 & 0xffffffff))
                  ;
                }
                else {
                  ppppuVar32 = (undefined8 ****)((ulong)ppppuVar32 % (ulong)ppppuVar21);
                }
              }
              if (ppppuVar32 != uStack_698) break;
            }
            plVar38 = (long *)*plVar38;
          } while (plVar38 != (long *)0x0);
        }
      }
    }
    pppppuVar24 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (pppppuVar24 == (undefined8 *****)0x0) {
      FUN_0eec74c0(0x40,0);
    }
    uStack_2e8 = 0;
    uStack_2e7 = 0;
    *pppppuVar24 = (undefined8 ****)0x0;
    pppppuVar24[1] = ppppuVar23;
    pppppuStack_2f8 = pppppuVar24;
    uStack_2f0 = plVar19;
    if ((bStack_678 & 1) == 0) {
      pppppuVar24[4] = (undefined8 ****)CONCAT71(uStack_667,cStack_668);
      pppppuVar24[2] = (undefined8 ****)CONCAT71(uStack_677,bStack_678);
      pppppuVar24[3] = ppppppuStack_670;
    }
    else {
      func_0x0412e5e0(pppppuVar24 + 2,CONCAT71(uStack_667,cStack_668),ppppppuStack_670);
    }
    pppppuVar24[5] = ppppuStack_5c0;
    pppppuVar24[6] = ppppppuVar35;
    pppppuVar24[7] = (undefined8 ****)(((ulong)ppppuVar33 & 0xffffffffffffff00) + 1);
    uStack_2e8 = 1;
    fVar45 = (float)(*(long *)(lVar31 + 0xa8) + 1);
    if ((long)ppppuVar21 < 0) {
      fVar51 = (float)ppppuVar21;
      fVar48 = *(float *)(lVar31 + 0xb0);
      if (ppppuVar21 != (undefined8 ****)0x0) goto LAB_0d5fcf42;
LAB_0d5fcfa6:
      uVar42 = 1;
      if ((undefined8 ****)0x2 < ppppuVar21) {
        uVar42 = (ulong)(((ulong)ppppuVar21 & (long)ppppuVar21 - 1U) != 0);
      }
      uVar42 = uVar42 | (long)ppppuVar21 * 2;
      fVar45 = (float)func_0x0eee3ab0(fVar45 / fVar48);
      uVar29 = (long)(fVar45 - _DAT_01198778) & (long)fVar45 >> 0x3f | (long)fVar45;
      if (uVar29 < uVar42) {
        uVar29 = uVar42;
      }
      uVar42 = 2;
      if ((uVar29 == 1) || (uVar42 = uVar29, (uVar29 & uVar29 - 1) == 0)) {
        uVar29 = *(ulong *)(lVar31 + 0x98);
        bVar44 = uVar42 < uVar29;
        uVar39 = uVar42;
        if (uVar42 <= uVar29) goto LAB_0d5fd148;
LAB_0d5fd02b:
        if (uVar42 >> 0x3d != 0) {
          plVar19 = (long *)func_0x04882eb0();
          func_0x041084d6(&DAT_0f7b8fb8);
          if ((bStack_678 & 1) != 0) {
            func_0x0412a280(CONCAT71(uStack_667,cStack_668),
                            CONCAT71(uStack_677,bStack_678) & 0xfffffffffffffffe);
          }
          if ((auStack_5b8[0] & 1) != 0) {
            func_0x0412a280(uStack_5a8,auStack_5b8._0_8_ & 0xfffffffffffffffe);
          }
          plVar38 = (long *)*param_1;
          *param_1 = 0;
          if (plVar38 == (long *)0x0) {
            plVar38 = plVar19;
            func_0x0eee2d70();
          }
          (**(code **)(*plVar38 + 8))();
          func_0x0eee2d70(plVar19);
          pcVar36 = (code *)swi(3);
          plVar19 = (long *)(*pcVar36)();
          return plVar19;
        }
        lVar50 = uVar42 * 8;
        lVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar50);
        if (lVar25 == 0) {
          FUN_0eec74c0(lVar50,0);
        }
        lVar2 = *plVar19;
        *plVar19 = lVar25;
        if (lVar2 != 0) {
          func_0x0412a280(lVar2,*(long *)(lVar31 + 0x98) << 3);
          lVar25 = *(long *)(lVar31 + 0x90);
        }
        *(ulong *)(lVar31 + 0x98) = uVar42;
        func_0x0eee2dd0(lVar25,0,lVar50);
        plVar38 = *(long **)(lVar31 + 0xa0);
        if (plVar38 != (long *)0x0) {
          uVar39 = plVar38[1];
          uVar29 = uVar42 - 1;
          if ((uVar42 & uVar29) == 0) {
            *(long *)(lVar25 + (uVar39 & uVar29) * 8) = lVar31 + 0xa0;
            uVar42 = uVar39 & uVar29;
            while (plVar40 = plVar38, plVar38 = (long *)*plVar40, plVar38 != (long *)0x0) {
              uVar39 = plVar38[1] & uVar29;
              if (uVar39 != uVar42) {
                if (*(long *)(lVar25 + uVar39 * 8) == 0) {
                  *(long **)(lVar25 + uVar39 * 8) = plVar40;
                  uVar42 = uVar39;
                }
                else {
                  *plVar40 = *plVar38;
                  *plVar38 = **(undefined8 **)(lVar25 + uVar39 * 8);
                  **(long **)(lVar25 + uVar39 * 8) = (long)plVar38;
                  plVar38 = plVar40;
                }
              }
            }
          }
          else {
            if (uVar42 <= uVar39) {
              if ((uVar39 | uVar42) >> 0x20 == 0) {
                uVar39 = (uVar39 & 0xffffffff) % (uVar42 & 0xffffffff);
              }
              else {
                uVar39 = uVar39 % uVar42;
              }
            }
            *(long *)(lVar25 + uVar39 * 8) = lVar31 + 0xa0;
            plVar40 = (long *)*plVar38;
            while (plVar40 != (long *)0x0) {
              uVar29 = plVar40[1];
              if (uVar42 <= uVar29) {
                if ((uVar29 | uVar42) >> 0x20 == 0) {
                  uVar29 = (uVar29 & 0xffffffff) % (uVar42 & 0xffffffff);
                }
                else {
                  uVar29 = uVar29 % uVar42;
                }
              }
              if (uVar29 != uVar39) {
                if (*(long *)(lVar25 + uVar29 * 8) == 0) {
                  *(long **)(lVar25 + uVar29 * 8) = plVar38;
                  uVar39 = uVar29;
                }
                else {
                  *plVar38 = *plVar40;
                  *plVar40 = **(long **)(lVar25 + uVar29 * 8);
                  **(undefined8 **)(lVar25 + uVar29 * 8) = plVar40;
                  plVar40 = plVar38;
                }
              }
              plVar38 = plVar40;
              plVar40 = (long *)*plVar38;
            }
          }
        }
      }
      else {
        uVar42 = func_0x0412c3f0();
        uVar29 = *(ulong *)(lVar31 + 0x98);
        bVar44 = uVar42 < uVar29;
        uVar39 = uVar42;
        if (uVar29 < uVar42) goto LAB_0d5fd02b;
LAB_0d5fd148:
        if (bVar44) {
          fVar45 = (float)func_0x0eee3ab0((float)*(ulong *)(lVar31 + 0xa8) /
                                          *(float *)(lVar31 + 0xb0));
          uVar42 = (long)(fVar45 - _DAT_01198778) & (long)fVar45 >> 0x3f | (long)fVar45;
          if ((uVar29 < 3) ||
             (uVar26 = uVar29 - (uVar29 >> 1 & 0x5555555555555555),
             uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333),
             1 < (byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar42 = func_0x0412c3f0(uVar42);
          }
          else if (1 < uVar42) {
            lVar50 = 0x3f;
            if (uVar42 - 1 != 0) {
              for (; uVar42 - 1 >> lVar50 == 0; lVar50 = lVar50 + -1) {
              }
            }
            uVar42 = 1L << (-((byte)lVar50 ^ 0x3f) & 0x3f);
          }
          if (uVar42 < uVar39) {
            uVar42 = uVar39;
          }
          if (uVar42 < uVar29) {
            if (uVar42 != 0) goto LAB_0d5fd02b;
            lVar50 = *plVar19;
            *plVar19 = 0;
            if (lVar50 != 0) {
              func_0x0412a280(lVar50,*(long *)(lVar31 + 0x98) << 3);
            }
            *(undefined8 *)(lVar31 + 0x98) = 0;
          }
        }
      }
      ppppuVar21 = *(undefined8 *****)(lVar31 + 0x98);
      if (((ulong)ppppuVar21 & (long)ppppuVar21 - 1U) != 0) {
        if (ppppuVar21 <= ppppuVar23) {
          if (((ulong)ppppuVar23 | (ulong)ppppuVar21) >> 0x20 == 0) {
            uStack_698 = (undefined8 ****)
                         (((ulong)ppppuVar23 & 0xffffffff) % ((ulong)ppppuVar21 & 0xffffffff));
            lVar50 = *plVar19;
            plVar19 = *(long **)(lVar50 + (long)uStack_698 * 8);
            goto joined_r0x0d5fd3b1;
          }
          ppppuVar23 = (undefined8 ****)((ulong)ppppuVar23 % (ulong)ppppuVar21);
        }
        lVar50 = *plVar19;
        plVar19 = *(long **)(lVar50 + (long)ppppuVar23 * 8);
        uStack_698 = ppppuVar23;
        goto joined_r0x0d5fd330;
      }
      uStack_698 = (undefined8 ****)((ulong)ppppuVar23 & (long)ppppuVar21 - 1U);
      lVar50 = *plVar19;
      plVar19 = *(long **)(lVar50 + (long)uStack_698 * 8);
joined_r0x0d5fd3b1:
      if (plVar19 != (long *)0x0) goto LAB_0d5fd336;
LAB_0d5fcf61:
      *pppppuVar24 = *(undefined8 *****)(lVar31 + 0xa0);
      *(undefined8 ******)(lVar31 + 0xa0) = pppppuVar24;
      *(long *)(lVar50 + (long)uStack_698 * 8) = lVar31 + 0xa0;
      if (*pppppuVar24 != (undefined8 ****)0x0) {
        ppppuVar33 = (undefined8 ****)(*pppppuVar24)[1];
        if (((ulong)ppppuVar21 & (long)ppppuVar21 - 1U) == 0) {
          *(undefined8 ******)(lVar50 + ((ulong)ppppuVar33 & (long)ppppuVar21 - 1U) * 8) =
               pppppuVar24;
        }
        else {
          if (ppppuVar21 <= ppppuVar33) {
            if (((ulong)ppppuVar33 | (ulong)ppppuVar21) >> 0x20 == 0) {
              *(undefined8 ******)
               (lVar50 + (((ulong)ppppuVar33 & 0xffffffff) % ((ulong)ppppuVar21 & 0xffffffff)) * 8)
                   = pppppuVar24;
              goto LAB_0d5fd33f;
            }
            ppppuVar33 = (undefined8 ****)((ulong)ppppuVar33 % (ulong)ppppuVar21);
          }
          *(undefined8 ******)(lVar50 + (long)ppppuVar33 * 8) = pppppuVar24;
        }
      }
    }
    else {
      fVar51 = (float)(long)ppppuVar21;
      fVar48 = *(float *)(lVar31 + 0xb0);
      if (ppppuVar21 == (undefined8 ****)0x0) goto LAB_0d5fcfa6;
LAB_0d5fcf42:
      if (fVar51 * fVar48 < fVar45) goto LAB_0d5fcfa6;
      lVar50 = *plVar19;
      plVar19 = *(long **)(lVar50 + (long)uStack_698 * 8);
joined_r0x0d5fd330:
      if (plVar19 == (long *)0x0) goto LAB_0d5fcf61;
LAB_0d5fd336:
      *pppppuVar24 = (undefined8 ****)*plVar19;
      *plVar19 = (long)pppppuVar24;
    }
LAB_0d5fd33f:
    *(long *)(lVar31 + 0xa8) = *(long *)(lVar31 + 0xa8) + 1;
LAB_0d5fd346:
    func_0x0412d520(lVar31);
  }
  if ((bStack_678 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_667,cStack_668),
                    CONCAT71(uStack_677,bStack_678) & 0xfffffffffffffffe);
  }
LAB_0d5fd365:
  if ((auStack_5b8[0] & 1) != 0) {
    func_0x0412a280(uStack_5a8,auStack_5b8._0_8_ & 0xfffffffffffffffe);
  }
  return param_1;
LAB_0d5fc941:
  ppppuVar21 = (undefined8 ****)(ulong)*(byte *)(plVar19 + 5);
  param_3 = (undefined8 ****)(ulong)*(uint7 *)((long)plVar19 + 0x29);
  ppppppuVar35 = (undefined8 ******)plVar19[6];
  ppppuVar33 = (undefined8 ****)plVar19[7];
  uStack_698 = (undefined8 ****)((ulong)uStack_698._4_4_ << 0x20);
LAB_0d5fc978:
  FUN_0412d610(lVar31);
  if ((char)uStack_698 != '\0') {
LAB_0d5fc98b:
    ppppppuVar35 = (undefined8 ******)(*(code *)(*ppppuStack_5c0)[2])();
    ppppuStack_138 = (undefined8 ****)0x0;
    ppppppuVar43 = param_4;
    if (DAT_0f7b8fb8 == '\0') goto LAB_0d5fd588;
    goto LAB_0d5fc9bc;
  }
  goto LAB_0d5fca87;
LAB_0d5fce06:
  plVar38[5] = (long)ppppuStack_5c0;
  plVar38[6] = (long)ppppppuVar35;
  *(undefined1 *)(plVar38 + 7) = 1;
  goto LAB_0d5fd346;
}


