/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd356a00 (ELF vaddr 0xd256a00)
 * Label: caller-of-callee
 * Body:  [[0d356a00, 0d356b86] [0d356b90, 0d356bc3] [0d356bd0, 0d356c2a] [0d356c30, 0d356c49] [0d356c50, 0d3579d5] [0d357cf8, 0d357d23]]
 * Ghidra: FUN_0d356a00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0d356a00(long param_1,uint *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  byte *pbVar3;
  code *pcVar4;
  byte bVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  long *plVar16;
  long lVar17;
  uint *puVar18;
  byte *pbVar19;
  ulong uVar20;
  int iVar21;
  byte *pbVar22;
  uint *puVar23;
  ulong uVar24;
  bool bVar25;
  undefined8 uStack_5c8;
  undefined *puStack_5c0;
  ulong uStack_5b8;
  undefined4 uStack_5b0;
  byte *pbStack_5a0;
  undefined8 uStack_598;
  ulong uStack_590;
  long lStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined8 uStack_558;
  ulong uStack_550;
  undefined8 uStack_548;
  undefined *puStack_538;
  ulong *puStack_530;
  ulong uStack_528;
  undefined8 uStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  ulong uStack_4e0;
  uint *puStack_4d8;
  byte *pbStack_4d0;
  long *plStack_4c8;
  byte bStack_4c0;
  undefined4 uStack_4bf;
  undefined1 uStack_4bb;
  undefined2 uStack_4ba;
  undefined8 uStack_4b0;
  uint *puStack_4a8;
  undefined8 uStack_4a0;
  ulong uStack_498;
  long *plStack_490;
  byte bStack_468;
  byte *pbStack_460;
  ulong uStack_458;
  undefined1 auStack_450 [24];
  uint uStack_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  undefined8 uStack_428;
  long *plStack_420;
  
  puVar18 = (uint *)(param_1 + 0x18);
  FUN_0412d550(puVar18);
  pbStack_4d0 = (byte *)((long)param_2 + 1);
  bVar25 = ((byte)*param_2 & 1) == 0;
  pbVar19 = *(byte **)(param_2 + 4);
  if (bVar25) {
    pbVar19 = pbStack_4d0;
  }
  uVar11 = (ulong)(byte)((byte)*param_2 >> 1);
  if (!bVar25) {
    uVar11 = *(ulong *)(param_2 + 2);
  }
  uVar9 = func_0x04883620(&uStack_438,pbVar19,uVar11);
  plStack_4c8 = (long *)(param_1 + 0xa8);
  uVar11 = *(ulong *)(param_1 + 0xb0);
  bVar25 = true;
  puVar23 = param_2;
  if (uVar11 != 0) {
    uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      uVar24 = uVar11 - 1 & uVar9;
    }
    else {
      uVar24 = uVar9;
      if (uVar11 <= uVar9) {
        if ((uVar9 | uVar11) >> 0x20 == 0) {
          uVar24 = (uVar9 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar24 = uVar9 % uVar11;
        }
      }
    }
    puVar13 = *(undefined8 **)(*plStack_4c8 + uVar24 * 8);
    if ((puVar13 != (undefined8 *)0x0) && (puVar23 = (uint *)*puVar13, puVar23 != (uint *)0x0)) {
      bVar5 = (byte)(uVar10 >> 0x38);
      if (((byte)*param_2 & 1) == 0) {
        uVar10 = (ulong)(byte)((byte)*param_2 >> 1);
        pbStack_5a0 = pbStack_4d0;
        if (bVar5 < 2) goto LAB_0d356b82;
LAB_0d356c0f:
        do {
          uVar20 = *(ulong *)(puVar23 + 2);
          if (uVar20 == uVar9) {
            bVar5 = (byte)puVar23[4];
            if ((bVar5 & 1) == 0) {
              uVar20 = (ulong)(bVar5 >> 1);
            }
            else {
              uVar20 = *(ulong *)(puVar23 + 6);
            }
            if (uVar20 == uVar10) {
              if ((bVar5 & 1) == 0) {
                pbVar19 = (byte *)((long)puVar23 + 0x11);
              }
              else {
                pbVar19 = *(byte **)(puVar23 + 8);
              }
              iVar8 = bcmp(pbVar19,pbStack_5a0,uVar10);
              if (iVar8 == 0) goto LAB_0d356c78;
            }
          }
          else {
            if (uVar11 <= uVar20) {
              if ((uVar20 | uVar11) >> 0x20 == 0) {
                uVar20 = (uVar20 & 0xffffffff) % (uVar11 & 0xffffffff);
              }
              else {
                uVar20 = uVar20 % uVar11;
              }
            }
            if (uVar20 != uVar24) break;
          }
          puVar23 = *(uint **)puVar23;
        } while (puVar23 != (uint *)0x0);
      }
      else {
        uVar10 = *(ulong *)(param_2 + 2);
        pbStack_5a0 = *(byte **)(param_2 + 4);
        if (1 < bVar5) goto LAB_0d356c0f;
LAB_0d356b82:
        do {
          if (*(ulong *)(puVar23 + 2) == uVar9) {
            bVar5 = (byte)puVar23[4];
            if ((bVar5 & 1) == 0) {
              uVar20 = (ulong)(bVar5 >> 1);
            }
            else {
              uVar20 = *(ulong *)(puVar23 + 6);
            }
            if (uVar20 == uVar10) {
              if ((bVar5 & 1) == 0) {
                pbVar19 = (byte *)((long)puVar23 + 0x11);
              }
              else {
                pbVar19 = *(byte **)(puVar23 + 8);
              }
              iVar8 = bcmp(pbVar19,pbStack_5a0,uVar10);
              if (iVar8 == 0) goto LAB_0d356c78;
            }
          }
          else if ((*(ulong *)(puVar23 + 2) & uVar11 - 1) != uVar24) break;
          puVar23 = *(uint **)puVar23;
        } while (puVar23 != (uint *)0x0);
      }
      bVar25 = true;
    }
  }
LAB_0d356c91:
  func_0x0412d610(puVar18);
  if (bVar25) {
    if ((*(char **)(param_1 + 0x130) == (char *)0x0) || (**(char **)(param_1 + 0x130) != '\x01'))
    goto LAB_0d357849;
    bStack_4c0 = 8;
    uStack_4bf = 0x74626e2e;
    uStack_4bb = 0;
    bVar25 = ((byte)*param_2 & 1) == 0;
    pbVar19 = *(byte **)(param_2 + 4);
    if (bVar25) {
      pbVar19 = pbStack_4d0;
    }
    uVar11 = (ulong)(byte)((byte)*param_2 >> 1);
    if (!bVar25) {
      uVar11 = *(ulong *)(param_2 + 2);
    }
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      uVar9 = 0;
      pbVar22 = pbVar19;
      do {
        uVar10 = uVar9;
        if (uVar11 == uVar10) goto LAB_0d356d3f;
        pbVar1 = pbVar22 + -1;
        uVar9 = uVar10 + 1;
        pbVar3 = pbVar22 + (uVar11 - 1);
        pbVar22 = pbVar1;
      } while (*pbVar3 != 0x3a);
      if (uVar11 + 1 != uVar9) {
        if (uVar11 <= uVar11 - uVar9) {
LAB_0d3579c2:
          uVar14 = func_0x04882ef0(&UNK_01306d2f);
          if ((bStack_4c0 & 1) != 0) {
            func_0x0412a280(uStack_4b0,
                            CONCAT26(uStack_4ba,CONCAT15(uStack_4bb,CONCAT41(uStack_4bf,bStack_4c0))
                                    ) & 0xfffffffffffffffe);
          }
          func_0x0eee2d70(uVar14);
          pcVar4 = (code *)swi(3);
          puVar18 = (uint *)(*pcVar4)();
          return puVar18;
        }
        pbVar19 = pbVar1 + uVar11 + 1;
        uVar11 = uVar10;
      }
    }
LAB_0d356d3f:
    pbStack_460 = pbVar19;
    uStack_458 = uVar11;
    func_0x0c6c8740(&uStack_5c8,&pbStack_460,&bStack_4c0);
    puStack_4a8 = (uint *)&UNK_0147a988;
    uStack_4a0 = 10;
    uStack_498 = uStack_5b8;
    plStack_490 = (long *)puStack_5c0;
    if (((ulong)uStack_5c8 & 1) == 0) {
      uStack_498 = (long)&uStack_5c8 + 1;
      plStack_490 = (long *)((ulong)uStack_5c8 >> 1 & 0x7f);
    }
    func_0x049151c0(&uStack_438,&puStack_4a8,2,0x2f);
    if (((ulong)uStack_5c8 & 1) != 0) {
      func_0x0412a280(uStack_5b8,(ulong)uStack_5c8 & 0xfffffffffffffffe);
    }
    uStack_518 = 0;
    uStack_510 = 0;
    lStack_508 = 0;
    if ((*(long *)(param_1 + 0x130) == 0) &&
       (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01219c68),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x130) == '\0') &&
       (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01219c68),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar17 = *(long *)(*(long *)(param_1 + 0x140) + 0x98);
    pbVar19 = *(byte **)(lVar17 + 8);
    pbVar22 = *(byte **)(lVar17 + 0x10);
    pbVar1 = pbVar22;
    if (pbVar19 != pbVar22) {
      do {
        pbStack_5a0 = pbVar1;
        if ((*(char *)(**(long **)(pbVar19 + 0xe8) + 0x88) != '\0') &&
           (cVar7 = func_0x0d35f860(&uStack_438,pbVar19,&uStack_518), cVar7 != '\0')) {
          bVar5 = (byte)*param_2;
          if ((bVar5 & 1) == 0) {
            uVar11 = (ulong)(bVar5 >> 1);
          }
          else {
            uVar11 = *(ulong *)(param_2 + 2);
          }
          uVar9 = uVar11 + 0x13;
          if (0xfffffffffffffff7 < uVar9) {
            func_0x04882e30();
            goto LAB_0d3579c2;
          }
          if (uVar9 < 0x17) {
            uStack_550 = 0;
            uStack_548 = (undefined4 *)0x0;
            uStack_558 = (ulong)(byte)((char)uVar9 * '\x02');
          }
          else {
            uVar10 = (uVar9 | 7) + 1;
            if ((uVar9 | 7) == 0x17) {
              uVar10 = 0x1a;
            }
            puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
            if (puVar12 == (undefined4 *)0x0) {
              func_0x0eec74c0(uVar10,0);
            }
            uStack_558 = uVar10 | 1;
            uStack_550 = uVar9;
            uStack_548 = puVar12;
          }
          lVar17 = (long)uStack_548 + 0x13;
          bVar25 = (uStack_558 & 1) == 0;
          puVar12 = uStack_548;
          if (bVar25) {
            puVar12 = (undefined4 *)((long)&uStack_558 + 1);
          }
          *puVar12 = _DAT_0148c32c;
          puVar12[1] = _UNK_0148c330;
          puVar12[2] = _UNK_0148c334;
          puVar12[3] = _UNK_0148c338;
          *(undefined4 *)((long)puVar12 + 0xf) = 0x27206572;
          if (bVar25) {
            lVar17 = (long)&uStack_548 + 4;
          }
          if (uVar11 != 0) {
            pbVar22 = pbStack_4d0;
            if ((bVar5 & 1) != 0) {
              pbVar22 = *(byte **)(param_2 + 4);
            }
            memmove(lVar17,pbVar22,uVar11);
          }
          *(undefined1 *)(lVar17 + uVar11) = 0;
          puVar13 = (undefined8 *)func_0x0412f8c0(&uStack_558,&UNK_0129cc59,0x17);
          uStack_528 = puVar13[2];
          puStack_538 = (undefined *)*puVar13;
          puStack_530 = (ulong *)puVar13[1];
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          uVar14 = (**(code **)(**(long **)(*(long *)(**(long **)(pbVar19 + 0xe8) + 8) + 8) + 0x18))
                             ();
          func_0x0ee35a00(&uStack_578,uVar14);
          lVar17 = (long)&uStack_578 + 1;
          if ((uStack_578 & 1) != 0) {
            lVar17 = lStack_568;
          }
          uVar14 = func_0x0eee2e90(lVar17);
          puVar13 = (undefined8 *)func_0x0412f8c0(&puStack_538,lVar17,uVar14);
          lStack_4e8 = puVar13[2];
          puStack_4f8 = (undefined *)*puVar13;
          uStack_4f0 = puVar13[1];
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          puVar15 = (ulong *)func_0x0412f8c0(&puStack_4f8,&UNK_0125506d,1);
          uStack_5b8 = puVar15[2];
          uStack_5c8 = (uint *)*puVar15;
          puStack_5c0 = (undefined *)puVar15[1];
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[2] = 0;
          uVar11 = uStack_5b8;
          puVar6 = puStack_5c0;
          if (((ulong)uStack_5c8 & 1) == 0) {
            uVar11 = (long)&uStack_5c8 + 1;
            puVar6 = (undefined *)((ulong)uStack_5c8 >> 1 & 0x7f);
          }
          uStack_598 = 0;
          if (uVar11 == 0) {
            uStack_598 = (ulong)((uint)puVar6 & 0x7f) << 0x30;
          }
          else {
            puVar2 = puVar6 + 9;
            puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,puVar2,8);
            if (puVar2 != (undefined *)0x0 && puVar13 == (undefined8 *)0x0) {
              func_0x0eec74c0(puVar2,8);
            }
            *puVar13 = puVar6;
            func_0x0eee2f00(puVar13 + 1,uVar11,puVar6);
            *(undefined1 *)((long)puVar13 + (long)(puVar6 + 8)) = 0;
            uStack_598 = (ulong)(puVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          puStack_4a8 = (uint *)((ulong)puStack_4a8 & 0xffffffffffffff00);
          uStack_498 = uStack_498 & 0xffffffffffffff00;
          func_0x0eeb79f0(auStack_450,&uStack_598);
          if ((uStack_598 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_598 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_598 = 0;
          if (((ulong)uStack_5c8 & 1) == 0) {
            if (((ulong)puStack_4f8 & 1) != 0) goto LAB_0d3572de;
LAB_0d357264:
            if ((uStack_578 & 1) != 0) goto LAB_0d357305;
LAB_0d357272:
            if (((ulong)puStack_538 & 1) != 0) goto LAB_0d35732c;
LAB_0d357280:
            if ((uStack_558 & 1) != 0) goto LAB_0d357353;
LAB_0d35728e:
            if ((uStack_518 & 1) != 0) goto LAB_0d35737a;
LAB_0d35729c:
            lStack_568 = lStack_508;
            uStack_578 = uStack_518;
            uStack_570 = uStack_510;
          }
          else {
            func_0x0412a280(uStack_5b8,(ulong)uStack_5c8 & 0xfffffffffffffffe);
            if (((ulong)puStack_4f8 & 1) == 0) goto LAB_0d357264;
LAB_0d3572de:
            func_0x0412a280(lStack_4e8,(ulong)puStack_4f8 & 0xfffffffffffffffe);
            if ((uStack_578 & 1) == 0) goto LAB_0d357272;
LAB_0d357305:
            func_0x0412a280(lStack_568,uStack_578 & 0xfffffffffffffffe);
            if (((ulong)puStack_538 & 1) == 0) goto LAB_0d357280;
LAB_0d35732c:
            func_0x0412a280(uStack_528,(ulong)puStack_538 & 0xfffffffffffffffe);
            if ((uStack_558 & 1) == 0) goto LAB_0d35728e;
LAB_0d357353:
            func_0x0412a280(uStack_548,uStack_558 & 0xfffffffffffffffe);
            if ((uStack_518 & 1) == 0) goto LAB_0d35729c;
LAB_0d35737a:
            func_0x0412e5e0(&uStack_578,lStack_508,uStack_510);
          }
          uStack_598 = 0;
          uStack_590 = 0;
          lStack_588 = 0;
          cVar7 = func_0x0ee50f60(&uStack_578,&uStack_598);
          if (cVar7 == '\0') {
            puStack_4a8 = &uStack_438;
            func_0x07026ef0(1,3,0x1f,&UNK_012008c0,&puStack_4a8);
            iVar21 = 3;
            iVar8 = 3;
          }
          else {
            plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
            if (plVar16 == (long *)0x0) {
              func_0x0eec74c0(0xb8,0);
            }
            *plVar16 = (long)&UNK_0f4626c0;
            plVar16[1] = (long)&UNK_0f462708;
            plVar16[2] = 0;
            plVar16[3] = 0;
            plVar16[4] = 0;
            plVar16[5] = 0;
            plVar16[6] = 0;
            plVar16[7] = 0;
            plVar16[8] = 0;
            plVar16[9] = 0;
            plVar16[10] = 0;
            *(undefined4 *)(plVar16 + 0xb) = 0x3f800000;
            plVar16[0xc] = 0;
            plVar16[0xd] = 0;
            plVar16[0xe] = 0;
            plVar16[0xf] = 0;
            *(undefined4 *)(plVar16 + 0x10) = 0x3f800000;
            plVar16[0x11] = 0;
            plVar16[0x12] = 0;
            plVar16[0x13] = 0;
            plVar16[0x14] = 0;
            plVar16[0x15] = 0;
            plVar16[0x16] = 0;
            uStack_4e0 = uStack_598 >> 1 & 0x7f;
            lStack_4e8 = (long)&uStack_598 + 1;
            if ((uStack_598 & 1) != 0) {
              uStack_4e0 = uStack_590;
              lStack_4e8 = lStack_588;
            }
            uStack_4f0 = 0;
            puStack_4f8 = &UNK_0f4616a0;
            cVar7 = func_0x0ee11a90(&puStack_4f8);
            if (cVar7 == '\n') {
              func_0x0ee11b50(&puStack_4f8);
              puStack_538 = &UNK_0f47e0b0;
              puStack_530 = &uStack_528;
              uStack_528 = 0;
              uStack_520 = 0;
              func_0x0d6ba250(&puStack_4a8,&puStack_538,&puStack_4f8,0);
              uStack_5c8 = (uint *)0xf43125c26ea3b383;
              puStack_5c0 = &UNK_0140f690;
              uStack_5b8 = 1;
              uStack_5b0 = 0xcb;
              if (bStack_468 == 0) {
                func_0x0eedea30(&uStack_558);
                func_0x0eedeb80(2,0x2d,&puStack_4a8,&uStack_558,&uStack_5c8);
                if ((uStack_558 & 1) != 0) {
                  func_0x0412a280(uStack_548,uStack_558 & 0xfffffffffffffffe);
                }
              }
              if ((bStack_468 & 1) == 0) {
                func_0x048e6d60(&puStack_4a8);
                puStack_538 = &UNK_0f47e0b0;
                func_0x0d6c9500(&puStack_530,uStack_528);
              }
              else {
                FUN_0d3b9e40(plVar16,&puStack_538);
                puStack_538 = &UNK_0f47e0b0;
                func_0x0d6c9500(&puStack_530,uStack_528);
                if (((byte)*param_2 & 1) == 0) {
                  if ((byte)((byte)*param_2 >> 1) != 0) goto LAB_0d3576db;
                }
                else if (*(long *)(param_2 + 2) != 0) {
LAB_0d3576db:
                  puStack_5c0 = (undefined *)CONCAT71(puStack_5c0._1_7_,1);
                  uStack_5c8 = puVar18;
                  func_0x0412d450();
                  if ((*param_2 & 1) == 0) {
                    uStack_498 = *(ulong *)(param_2 + 4);
                    puStack_4a8 = *(uint **)param_2;
                    uStack_4a0 = *(undefined8 *)(param_2 + 2);
                  }
                  else {
                    func_0x0412e5e0(&puStack_4a8,*(undefined8 *)(param_2 + 4),
                                    *(undefined8 *)(param_2 + 2));
                  }
                  plStack_490 = plVar16;
                  lVar17 = func_0x0d38cfc0(plStack_4c8,&puStack_4a8,&puStack_4a8);
                  plVar16 = plStack_490;
                  plStack_490 = (long *)0x0;
                  if (plVar16 != (long *)0x0) {
                    (**(code **)(*plVar16 + 0x18))();
                  }
                  if (((ulong)puStack_4a8 & 1) != 0) {
                    func_0x0412a280(uStack_498,(ulong)puStack_4a8 & 0xfffffffffffffffe);
                  }
                  puStack_4d8 = *(uint **)(lVar17 + 0x28);
                  func_0x0412d520(puVar18);
                  iVar21 = 1;
                  iVar8 = 1;
                  goto joined_r0x0d357615;
                }
              }
            }
            (**(code **)(*plVar16 + 0x18))(plVar16);
            iVar21 = 0;
            iVar8 = 0;
          }
joined_r0x0d357615:
          if ((uStack_598 & 1) != 0) {
            func_0x0412a280(lStack_588,uStack_598 & 0xfffffffffffffffe);
            iVar8 = iVar21;
          }
          if ((uStack_578 & 1) == 0) {
            func_0x0eeb81b0(auStack_450);
            pbVar22 = pbStack_5a0;
          }
          else {
            func_0x0412a280(lStack_568,uStack_578 & 0xfffffffffffffffe);
            func_0x0eeb81b0(auStack_450);
            pbVar22 = pbStack_5a0;
          }
          pbStack_5a0 = pbVar22;
          if ((iVar8 != 3) && (iVar8 != 0)) goto LAB_0d3577ed;
        }
        pbVar19 = pbVar19 + 0x110;
        pbVar1 = pbStack_5a0;
      } while (pbVar19 != pbVar22);
    }
    puStack_4d8 = (uint *)0x0;
LAB_0d3577ed:
    if ((uStack_518 & 1) != 0) {
      func_0x0412a280(lStack_508,uStack_518 & 0xfffffffffffffffe);
    }
    puVar23 = puStack_4d8;
    if ((bStack_4c0 & 1) != 0) {
      func_0x0412a280(uStack_4b0,
                      CONCAT26(uStack_4ba,CONCAT15(uStack_4bb,CONCAT41(uStack_4bf,bStack_4c0))) &
                      0xfffffffffffffffe);
      puVar23 = puStack_4d8;
    }
  }
  if (puVar23 != (uint *)0x0) {
    return puVar23;
  }
LAB_0d357849:
  uStack_4a0 = CONCAT71(uStack_4a0._1_7_,1);
  puStack_4a8 = puVar18;
  func_0x0412d450(puVar18);
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  *plVar16 = (long)&UNK_0f4626c0;
  plVar16[1] = (long)&UNK_0f462708;
  plVar16[2] = 0;
  plVar16[3] = 0;
  plVar16[4] = 0;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  *(undefined4 *)(plVar16 + 0xb) = 0x3f800000;
  plVar16[0xc] = 0;
  plVar16[0xd] = 0;
  plVar16[0xe] = 0;
  plVar16[0xf] = 0;
  *(undefined4 *)(plVar16 + 0x10) = 0x3f800000;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  plVar16[0x13] = 0;
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  if ((*param_2 & 1) == 0) {
    uStack_428 = *(undefined8 *)(param_2 + 4);
    uStack_438 = *param_2;
    uStack_434 = param_2[1];
    uStack_430 = param_2[2];
    uStack_42c = param_2[3];
  }
  else {
    func_0x0412e5e0(&uStack_438,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
  }
  plStack_420 = plVar16;
  lVar17 = func_0x0d38cfc0(plStack_4c8,&uStack_438);
  plVar16 = plStack_420;
  plStack_420 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))();
  }
  if ((uStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,CONCAT44(uStack_434,uStack_438) & 0xfffffffffffffffe);
  }
  puVar23 = *(uint **)(lVar17 + 0x28);
  func_0x0412d520(puVar18);
  return puVar23;
LAB_0d356c78:
  puVar23 = *(uint **)(puVar23 + 10);
  bVar25 = false;
  goto LAB_0d356c91;
}



/* ---- referenced strings ----
 * 0x148c32c  Loading structure '
 */
