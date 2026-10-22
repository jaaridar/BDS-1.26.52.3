/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc003480 (ELF vaddr 0xbf03480)
 * Label: caller-of-callee
 * Body:  [[0c003480, 0c003631] [0c003640, 0c003da5]]
 * Ghidra: FUN_0c003480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c003480(int *param_1,undefined8 param_2,undefined8 param_3,short param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  int *piStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte bStack_b8;
  undefined1 uStack_b7;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined6 uStack_af;
  undefined1 uStack_a9;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  byte bStack_98;
  undefined5 uStack_97;
  undefined2 uStack_92;
  undefined1 uStack_90;
  undefined5 uStack_8f;
  undefined1 uStack_8a;
  undefined8 uStack_88;
  undefined4 uStack_80;
  byte bStack_78;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_58;
  byte *apbStack_50 [2];
  undefined1 auStack_40 [16];
  
  pbStack_c8 = param_5;
  cVar5 = func_0x04864260(param_3);
  if (cVar5 != '\0') {
LAB_0c0034ad:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  cVar5 = func_0x04864270(param_3);
  piStack_58 = param_1;
  if (cVar5 != '\0') {
    uStack_e8 = (undefined8 *)0x0;
    puStack_e0 = (undefined8 *)0x0;
    piStack_d8 = (int *)0x0;
    func_0x04865530(apbStack_50,param_3);
    func_0x048655b0(auStack_40,param_3);
    pbStack_d0 = pbStack_c8 + 1;
    piVar14 = param_1 + 2;
    do {
      cVar5 = func_0x04862c80(apbStack_50,auStack_40);
      if (cVar5 != '\0') {
        func_0x04862b40(auStack_40);
        func_0x04862b40(apbStack_50);
        piVar18 = piStack_d8;
        puVar11 = puStack_e0;
        puVar12 = uStack_e8;
        uStack_e8 = (undefined8 *)0x0;
        puStack_e0 = (undefined8 *)0x0;
        piStack_d8 = (int *)0x0;
        bStack_b8 = 0;
        uStack_b7 = 0;
        uStack_b6 = 0;
        uStack_b0 = SUB81(puVar12,0);
        uStack_af = (undefined6)((ulong)puVar12 >> 8);
        uStack_a9 = (undefined1)((ulong)puVar12 >> 0x38);
        puStack_a8 = puVar11;
        puStack_a0 = (undefined8 *)piVar18;
        if (puVar12 == puVar11) {
          if ((*pbStack_c8 & 1) != 0) {
            pbStack_d0 = *(byte **)(pbStack_c8 + 0x10);
          }
          apbStack_50[0] = pbStack_d0;
          func_0x07310bf0(1,3,0x19,&UNK_01350b22,apbStack_50);
        }
        piVar4 = piStack_58;
        *piStack_58 = 0;
        piVar14[0] = 0;
        piVar14[1] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        func_0x0c025ec0(piVar14,puVar12,puVar11,
                        ((long)puVar11 - (long)puVar12 >> 3) * -0x5555555555555555);
        *(undefined1 *)(piVar4 + 8) = 1;
        if (puVar12 != (undefined8 *)0x0) {
          if (puVar12 != puVar11) {
            do {
              puVar11 = puVar11 + -3;
              (**(code **)*puVar11)(puVar11);
            } while (puVar11 != puVar12);
            puVar12 = (undefined8 *)CONCAT17(uStack_a9,CONCAT61(uStack_af,uStack_b0));
            piVar18 = (int *)puStack_a0;
          }
          func_0x0412a280(puVar12,(long)piVar18 - (long)puVar12);
        }
LAB_0c0038ba:
        puVar12 = uStack_e8;
        puVar11 = puStack_e0;
        if (uStack_e8 == (undefined8 *)0x0) {
          return;
        }
        while (puVar12 != puVar11) {
          puVar11 = puVar11 + -3;
          (**(code **)*puVar11)(puVar11);
        }
        puStack_e0 = puVar12;
        func_0x0412a280(uStack_e8,(long)piStack_d8 - (long)uStack_e8);
        return;
      }
      uVar7 = func_0x04862b80(apbStack_50);
      func_0x0c001aa0(&bStack_b8,param_2,uVar7,(int)param_4,1,1);
      plVar15 = (long *)CONCAT17(uStack_a9,CONCAT61(uStack_af,uStack_b0));
      if (plVar15 == (long *)0x0) {
LAB_0c003640:
        pbStack_c0 = pbStack_d0;
        if ((*pbStack_c8 & 1) != 0) {
          pbStack_c0 = *(byte **)(pbStack_c8 + 0x10);
        }
        func_0x07230420(1,3,0x19,&UNK_012ffdc1,&pbStack_c0);
        *piStack_58 = 0;
        piVar14[0] = 0;
        piVar14[1] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *(undefined1 *)(piStack_58 + 8) = 1;
        bVar3 = false;
      }
      else {
        cVar5 = (**(code **)(*plVar15 + 0x78))();
        plVar15 = (long *)CONCAT17(uStack_a9,CONCAT61(uStack_af,uStack_b0));
        if (cVar5 != '\0') {
          (**(code **)(*plVar15 + 0x80))(&pbStack_c0);
          pbVar8 = pbStack_c0;
          pbStack_c0 = (byte *)0x0;
          plVar15 = (long *)CONCAT17(uStack_a9,CONCAT61(uStack_af,uStack_b0));
          uStack_b0 = SUB81(pbVar8,0);
          uStack_af = (undefined6)((ulong)pbVar8 >> 8);
          uStack_a9 = (undefined1)((ulong)pbVar8 >> 0x38);
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x90))();
            pbVar8 = pbStack_c0;
            pbStack_c0 = (byte *)0x0;
            if (pbVar8 != (byte *)0x0) {
              (**(code **)(*(long *)pbVar8 + 0x90))();
            }
          }
          plVar15 = (long *)CONCAT17(uStack_a9,CONCAT61(uStack_af,uStack_b0));
        }
        puVar11 = puStack_e0;
        if (plVar15 == (long *)0x0) goto LAB_0c003640;
        if (puStack_e0 < piStack_d8) {
          *puStack_e0 = &UNK_0f3773c0;
          (**(code **)*plVar15)(puStack_e0 + 1);
          *(undefined2 *)(puVar11 + 2) = puStack_a8._0_2_;
          *puVar11 = &UNK_0f0d6548;
          puStack_e0 = puVar11 + 3;
        }
        else {
          puStack_e0 = (undefined8 *)func_0x0c026370(&uStack_e8,&bStack_b8);
        }
        bVar3 = true;
      }
      bStack_b8 = 0xc0;
      uStack_b7 = 0x73;
      uStack_b6 = 0xf37;
      uStack_b4 = 0;
      plVar15 = (long *)CONCAT17(uStack_a9,CONCAT61(uStack_af,uStack_b0));
      uStack_b0 = 0;
      uStack_af = 0;
      uStack_a9 = 0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x90))();
      }
      if (!bVar3) {
        func_0x04862b40(auStack_40);
        func_0x04862b40(apbStack_50);
        goto LAB_0c0038ba;
      }
      func_0x04862ba0(apbStack_50);
    } while( true );
  }
  uVar7 = func_0x048648e0(param_3,&UNK_01205d67);
  cVar5 = func_0x04865490(uVar7);
  if (cVar5 == '\0') {
    if ((*pbStack_c8 & 1) == 0) {
      pbVar8 = pbStack_c8 + 1;
    }
    else {
      pbVar8 = *(byte **)(pbStack_c8 + 0x10);
    }
    bStack_b8 = (byte)pbVar8;
    uStack_b7 = (undefined1)((ulong)pbVar8 >> 8);
    uStack_b6 = (undefined2)((ulong)pbVar8 >> 0x10);
    uStack_b4 = (undefined4)((ulong)pbVar8 >> 0x20);
    func_0x0b61d1c0(1,3,0x19,&UNK_011ada19,&bStack_b8);
    goto LAB_0c0034ad;
  }
  bStack_b8 = 0;
  uStack_b7 = 0;
  FUN_04863cb0(&uStack_e8,uVar7,&bStack_b8);
  if ((bStack_b8 & 1) != 0) {
    func_0x0412a280(puStack_a8,
                    CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(uStack_b7,bStack_b8))) &
                    0xfffffffffffffffe);
  }
  if (((ulong)uStack_e8 & 1) == 0) {
    if ((byte)uStack_e8 >> 1 == 4) goto LAB_0c003949;
  }
  else if (puStack_e0 == (undefined8 *)0x4) {
LAB_0c003949:
    if (((ulong)uStack_e8 & 1) == 0) {
      iVar6 = uStack_e8._1_4_;
    }
    else {
      iVar6 = *piStack_d8;
    }
    if (iVar6 == 0x656e6f4e) {
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      bVar2 = (byte)uStack_e8;
      goto LAB_0c003c4d;
    }
  }
  if ((DAT_0f6d2e58 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d2e58), iVar6 != 0)) {
    bStack_b8 = 0x1c;
    uStack_b7 = 0x41;
    uStack_b6 = 0x776c;
    uStack_b4 = 0x55737961;
    uStack_b0 = 0x6e;
    uStack_af = 0x64656b636f6c;
    uStack_a9 = 0;
    puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,1);
    bStack_98 = 0x1a;
    uStack_97 = 0x6579616c50;
    uStack_92 = 0x4972;
    uStack_90 = 0x6e;
    uStack_8f = 0x7265746157;
    uStack_8a = 0;
    uStack_80 = 2;
    bStack_78 = 0x24;
    uStack_77 = _DAT_012c20fa;
    uStack_73 = _UNK_012c20fe;
    uStack_6f = _UNK_012c2102;
    uStack_6b = _UNK_012c2106;
    uStack_67 = 0x736d;
    uStack_65 = 0;
    uStack_60 = 3;
    func_0x0bfbcc30(&bStack_b8);
    if ((bStack_78 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,uStack_6b._3_1_))),
                      CONCAT35((undefined3)uStack_73,CONCAT41(uStack_77,bStack_78)) &
                      0xfffffffffffffffe);
    }
    if ((bStack_98 & 1) != 0) {
      func_0x0412a280(uStack_88,
                      CONCAT26(uStack_92,CONCAT51(uStack_97,bStack_98)) & 0xfffffffffffffffe);
    }
    if ((bStack_b8 & 1) != 0) {
      func_0x0412a280(puStack_a8,
                      CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(uStack_b7,bStack_b8))) &
                      0xfffffffffffffffe);
    }
    func_0x0eee2f40(&UNK_0bfbd4e0,&DAT_0f6d2e30,0xf53dab8);
    func_0x0410844d(&DAT_0f6d2e58);
  }
  pbStack_d0 = (byte *)((long)&uStack_e8 + 1);
  puVar11 = (undefined8 *)((ulong)uStack_e8 >> 1 & 0x7f);
  piVar14 = (int *)pbStack_d0;
  if (((ulong)uStack_e8 & 1) != 0) {
    puVar11 = puStack_e0;
    piVar14 = piStack_d8;
  }
  uVar9 = FUN_04883620(&bStack_b8,piVar14,puVar11);
  uVar17 = _DAT_0f6d2e38;
  if (_DAT_0f6d2e38 != 0) {
    uVar10 = _DAT_0f6d2e38 - (_DAT_0f6d2e38 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      uVar13 = _DAT_0f6d2e38 - 1 & uVar9;
    }
    else {
      uVar13 = uVar9;
      if (_DAT_0f6d2e38 <= uVar9) {
        if ((uVar9 | _DAT_0f6d2e38) >> 0x20 == 0) {
          uVar13 = (uVar9 & 0xffffffff) % (_DAT_0f6d2e38 & 0xffffffff);
        }
        else {
          uVar13 = uVar9 % _DAT_0f6d2e38;
        }
      }
    }
    plVar15 = *(long **)(_DAT_0f6d2e30 + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      bVar2 = (byte)uStack_e8;
      if (((ulong)uStack_e8 & 1) == 0) {
        puVar11 = (undefined8 *)(ulong)((byte)uStack_e8 >> 1);
      }
      else {
        pbStack_d0 = (byte *)piStack_d8;
        puVar11 = puStack_e0;
      }
      if ((byte)(uVar10 >> 0x38) < 2) {
        uVar17 = _DAT_0f6d2e38 - 1;
        do {
          if (uVar9 == plVar15[1]) {
            bVar1 = *(byte *)(plVar15 + 2);
            if ((bVar1 & 1) == 0) {
              uVar10 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar10 = plVar15[3];
            }
            if ((undefined8 *)uVar10 == puVar11) {
              if ((bVar1 & 1) == 0) {
                lVar16 = (long)plVar15 + 0x11;
              }
              else {
                lVar16 = plVar15[4];
              }
              iVar6 = func_0x0eee3000(lVar16,pbStack_d0,puVar11);
              if (iVar6 == 0) goto LAB_0c003ba7;
            }
          }
          else if ((plVar15[1] & uVar17) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar15[1];
          if (uVar9 == uVar10) {
            bVar1 = *(byte *)(plVar15 + 2);
            if ((bVar1 & 1) == 0) {
              uVar10 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar10 = plVar15[3];
            }
            if ((undefined8 *)uVar10 == puVar11) {
              if ((bVar1 & 1) == 0) {
                lVar16 = (long)plVar15 + 0x11;
              }
              else {
                lVar16 = plVar15[4];
              }
              iVar6 = func_0x0eee3000(lVar16,pbStack_d0,puVar11);
              if (iVar6 == 0) goto LAB_0c003ba7;
            }
          }
          else {
            if (uVar17 <= uVar10) {
              if ((uVar10 | uVar17) >> 0x20 == 0) {
                uVar10 = (uVar10 & 0xffffffff) % (uVar17 & 0xffffffff);
              }
              else {
                uVar10 = uVar10 % uVar17;
              }
            }
            if (uVar10 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  bStack_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
LAB_0c003bf9:
  piVar14 = piStack_58;
  puStack_a0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_a9 = 0;
  uStack_af = 0;
  uStack_b0 = 0;
  if ((*pbStack_c8 & 1) == 0) {
    apbStack_50[0] = pbStack_c8 + 1;
  }
  else {
    apbStack_50[0] = *(byte **)(pbStack_c8 + 0x10);
  }
  func_0x09d49780(1,3,0x19,&UNK_012e7405,apbStack_50);
  iVar6 = 0;
  bVar2 = (byte)uStack_e8;
  goto LAB_0c003c38;
LAB_0c003ba7:
  iVar6 = (int)plVar15[5];
  bStack_b8 = (byte)iVar6;
  uStack_b7 = (undefined1)((uint)iVar6 >> 8);
  uStack_b6 = (undefined2)((uint)iVar6 >> 0x10);
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_a9 = 0;
  puStack_a8 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  piVar14 = piStack_58;
  if (iVar6 == 0) goto LAB_0c003bf9;
LAB_0c003c38:
  *piVar14 = iVar6;
  piVar14[2] = 0;
  piVar14[3] = 0;
  piVar14[4] = 0;
  piVar14[5] = 0;
  piVar14[6] = 0;
  piVar14[7] = 0;
  *(undefined1 *)(piVar14 + 8) = 1;
LAB_0c003c4d:
  if ((bVar2 & 1) != 0) {
    func_0x0412a280(piStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12c20fa  PlayerHasManyItems
 */
