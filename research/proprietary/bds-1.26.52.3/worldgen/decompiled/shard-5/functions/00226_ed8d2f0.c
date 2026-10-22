/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee8d2f0 (ELF vaddr 0xed8d2f0)
 * Label: caller-of-callee
 * Body:  [[0ee8d2f0, 0ee8d3ea] [0ee8d3f0, 0ee8d74b] [0ee8d750, 0ee8d784] [0ee8d790, 0ee8d7fc] [0ee8d800, 0ee8d818] [0ee8d820, 0ee8db92] [0ee8dba0, 0ee8dbec] [0ee8dbf0, 0ee8dd9d] [0ee8dda0, 0ee8df2d] [0ee8df30, 0ee8df3c] [0ee8df40, 0ee8e066] [0ee8e070, 0ee8e258] [0ee8e260, 0ee8e294] [0ee8e2a0, 0ee8e309] [0ee8e310, 0ee8e328] [0ee8e330, 0ee8e423] [0ee8e430, 0ee8e447] [0ee8e450, 0ee8e48e] [0ee8e490, 0ee8e6f3] [0ee8e700, 0ee8e7d6] [0ee8e7e0, 0ee8e8d4] [0ee8e8e0, 0ee8e9d6] [0ee8e9e0, 0ee8ea8b] [0ee8ea90, 0ee8eac8] [0ee8ead0, 0ee8eb45] [0ee8eb50, 0ee8eb6a] [0ee8eb70, 0ee8ebb5] [0ee8ebc0, 0ee8ec61] [0ee8ec70, 0ee8ecac] [0ee8ecb0, 0ee8ed22] [0ee8ed30, 0ee8ef01] [0ee8ef10, 0ee8f064] [0ee8f070, 0ee8f0a0] [0ee8f0b0, 0ee8f12b] [0ee8f130, 0ee8f232] [0ee8f240, 0ee8f27b] [0ee8f280, 0ee8f300] [0ee8f310, 0ee8f94e] [0ee8f951, 0ee8f964] [0ee8fa3e, 0ee8fa5f] [0ee8fa83, 0ee8faf6]]
 * Ghidra: FUN_0ee8d2f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee8d2f0(long *param_1,undefined8 *param_2,long *param_3,long param_4,undefined4 param_5)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  byte bVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  ulong uStack_d98;
  undefined8 uStack_d88;
  long *plStack_d80;
  ulong uStack_d78;
  undefined4 uStack_d70;
  undefined4 uStack_d6c;
  undefined4 uStack_d68;
  undefined4 uStack_d64;
  byte bStack_d60;
  ulong uStack_d58;
  ulong uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d38;
  long *plStack_d30;
  ulong uStack_d28;
  long *plStack_d20;
  undefined8 uStack_d18;
  long *plStack_d10;
  ulong uStack_d08;
  long lStack_d00;
  byte bStack_cd8;
  ulong uStack_cc8;
  undefined4 uStack_cbc;
  long *plStack_cb8;
  long *plStack_cb0;
  undefined8 uStack_ca8;
  undefined4 uStack_ca0;
  long *plStack_c98;
  long *plStack_c90;
  ulong uStack_c88;
  ulong uStack_c80;
  undefined8 *puStack_c78;
  long *plStack_c70;
  undefined8 *puStack_c68;
  long *plStack_c60;
  undefined8 *puStack_c58;
  long *plStack_c50;
  undefined8 uStack_c48;
  long *plStack_c40;
  ulong uStack_c38;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  undefined4 uStack_c28;
  undefined4 uStack_c24;
  undefined1 uStack_c20;
  long *plStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  long lStack_830;
  long *plStack_440;
  undefined1 auStack_438 [1032];
  
  uStack_cbc = param_5;
  func_0x0ee8d1f0();
  if (param_3[1] == *param_3) {
    return;
  }
  param_1[9] = param_4;
  plVar17 = (long *)param_2[1];
  plStack_c98 = param_3;
  if ((long *)0xfffffffffffffff7 < plVar17) goto LAB_0ee8f948;
  uVar12 = *param_2;
  if (plVar17 < (long *)0x17) {
    uStack_840 = (long *)CONCAT71(uStack_840._1_7_,(char)plVar17 * '\x02');
    lVar7 = (long)&uStack_840 + 1;
    if (plVar17 != (long *)0x0) goto LAB_0ee8d4f7;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_840._1_1_ = 0;
    bVar25 = *(byte *)(param_1 + 10);
  }
  else {
    uVar21 = 0x1a;
    if (((ulong)plVar17 | 7) != 0x17) {
      uVar21 = ((ulong)plVar17 | 7) + 1;
    }
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
    if (lVar7 == 0) {
      func_0x0eec74c0(uVar21,0);
    }
    uStack_840 = (long *)(uVar21 | 1);
    uStack_838 = plVar17;
    lStack_830 = lVar7;
LAB_0ee8d4f7:
    func_0x0eee2ee0(lVar7,uVar12,plVar17);
    *(undefined1 *)(lVar7 + (long)plVar17) = 0;
    bVar25 = *(byte *)(param_1 + 10);
  }
  if ((bVar25 & 1) != 0) {
    func_0x0412a280(param_1[0xc],param_1[10] & 0xfffffffffffffffe);
  }
  param_1[0xc] = lStack_830;
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_840;
  *(undefined4 *)((long)param_1 + 0x54) = uStack_840._4_4_;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_838;
  *(undefined4 *)((long)param_1 + 0x5c) = uStack_838._4_4_;
  param_1[8] = (plStack_c98[1] - *plStack_c98 >> 4) * -0x5555555555555555;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
LAB_0ee8d542:
    func_0x0eee2dd0(auStack_438,0,0x408);
  }
  else {
    pcVar3 = (char *)*param_2;
    plVar17 = (long *)0x0;
    lVar13 = lVar7;
    pcVar22 = pcVar3;
    pcVar23 = pcVar3;
    pcVar24 = pcVar3;
    do {
      if (((*pcVar24 == '\\') || (*pcVar24 == '/')) &&
         (plVar17 < (long *)0x40 && 0 < (long)pcVar23 - (long)pcVar22)) {
        (&uStack_840)[(long)plVar17 * 2] = pcVar22;
        (&uStack_838)[(long)plVar17 * 2] = (long)pcVar23 - (long)pcVar22;
        plVar17 = (long *)((long)plVar17 + 1);
        pcVar22 = pcVar24 + (lVar13 != 0);
      }
      pcVar24 = pcVar24 + 1;
      pcVar23 = pcVar23 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if (plVar17 < (long *)0x40 && 0 < (long)(pcVar3 + (lVar7 - (long)pcVar22))) {
      (&uStack_840)[(long)plVar17 * 2] = pcVar22;
      (&uStack_838)[(long)plVar17 * 2] = pcVar3 + (lVar7 - (long)pcVar22);
      plVar17 = (long *)((long)plVar17 + 1);
    }
    else {
      plStack_440 = plVar17;
      if (plVar17 == (long *)0x0) goto LAB_0ee8d542;
    }
    plStack_440 = plVar17;
    func_0x049151c0(auStack_438,&uStack_840,(undefined *)((long)plVar17 + -1),0x2f);
  }
  plVar17 = (long *)func_0x0eee2e90(auStack_438);
  if ((long *)0xfffffffffffffff7 < plVar17) goto LAB_0ee8f948;
  if (plVar17 < (long *)0x17) {
    uStack_c48 = (long *)CONCAT71(uStack_c48._1_7_,(char)plVar17 * '\x02');
    uVar5 = (long)&uStack_c48 + 1;
    if (plVar17 != (long *)0x0) goto LAB_0ee8d5ec;
  }
  else {
    uVar21 = 0x1a;
    if (((ulong)plVar17 | 7) != 0x17) {
      uVar21 = ((ulong)plVar17 | 7) + 1;
    }
    uVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
    if (uVar5 == 0) {
      func_0x0eec74c0(uVar21,0);
    }
    uStack_c48 = (long *)(uVar21 | 1);
    plStack_c40 = plVar17;
    uStack_c38 = uVar5;
LAB_0ee8d5ec:
    func_0x0eee2f00(uVar5,auStack_438,plVar17);
  }
  *(undefined1 *)(uVar5 + (long)plVar17) = 0;
  plVar17 = (long *)((ulong)uStack_c48 >> 1 & 0x7f);
  uVar21 = (long)&uStack_c48 + 1U;
  if (((ulong)uStack_c48 & 1) != 0) {
    plVar17 = plStack_c40;
    uVar21 = uStack_c38;
  }
  uVar5 = func_0x04883620(&uStack_840,uVar21,plVar17);
  uVar21 = param_1[1];
  if (uVar21 != 0) {
    uVar18 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
    uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar18 >> 0x38 < 2) {
      uStack_d98 = uVar21 - 1 & uVar5;
    }
    else {
      uStack_d98 = uVar5;
      if (uVar21 <= uVar5) {
        if ((uVar5 | uVar21) >> 0x20 == 0) {
          uStack_d98 = (uVar5 & 0xffffffff) % (uVar21 & 0xffffffff);
        }
        else {
          uStack_d98 = uVar5 % uVar21;
        }
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + uStack_d98 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar10, plVar17 != (long *)0x0)) {
      bVar25 = (byte)uStack_c48 & 1;
      uVar19 = uStack_c38;
      plVar8 = plStack_c40;
      if (((ulong)uStack_c48 & 1) == 0) {
        uVar19 = (long)&uStack_c48 + 1U;
        plVar8 = (long *)(ulong)((byte)uStack_c48 >> 1);
      }
      if ((byte)(uVar18 >> 0x38) < 2) {
        do {
          if (plVar17[1] == uVar5) {
            bVar2 = *(byte *)(plVar17 + 2);
            if ((bVar2 & 1) == 0) {
              plVar14 = (long *)(ulong)(bVar2 >> 1);
            }
            else {
              plVar14 = (long *)plVar17[3];
            }
            if (plVar14 == plVar8) {
              if ((bVar2 & 1) == 0) {
                lVar7 = (long)plVar17 + 0x11;
              }
              else {
                lVar7 = plVar17[4];
              }
              iVar4 = func_0x0eee3000(lVar7,uVar19,plVar8);
              if (iVar4 == 0) goto LAB_0ee8db38;
            }
          }
          else if ((plVar17[1] & uVar21 - 1) != uStack_d98) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar17[1];
          if (uVar18 == uVar5) {
            bVar2 = *(byte *)(plVar17 + 2);
            if ((bVar2 & 1) == 0) {
              plVar14 = (long *)(ulong)(bVar2 >> 1);
            }
            else {
              plVar14 = (long *)plVar17[3];
            }
            if (plVar14 == plVar8) {
              if ((bVar2 & 1) == 0) {
                lVar7 = (long)plVar17 + 0x11;
              }
              else {
                lVar7 = plVar17[4];
              }
              iVar4 = func_0x0eee3000(lVar7,uVar19,plVar8);
              if (iVar4 == 0) goto LAB_0ee8db38;
            }
          }
          else {
            if (uVar21 <= uVar18) {
              if ((uVar18 | uVar21) >> 0x20 == 0) {
                uVar18 = (uVar18 & 0xffffffff) % (uVar21 & 0xffffffff);
              }
              else {
                uVar18 = uVar18 % uVar21;
              }
            }
            if (uVar18 != uStack_d98) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  lStack_830 = 1;
  *plVar17 = 0;
  plVar17[1] = uVar5;
  plVar17[4] = uStack_c38;
  plVar17[2] = (long)uStack_c48;
  plVar17[3] = (long)plStack_c40;
  uStack_c48 = (long *)0x0;
  plStack_c40 = (long *)0x0;
  uStack_c38 = 0;
  plVar17[5] = 0;
  uStack_840 = plVar17;
  uStack_838 = param_1;
  if ((long)uVar21 < 0) {
    fVar28 = (float)uVar21;
    fVar27 = *(float *)(param_1 + 4);
    if (uVar21 != 0) goto LAB_0ee8d93b;
LAB_0ee8d94c:
    uVar18 = 1;
    if (2 < uVar21) {
      uVar18 = (ulong)((uVar21 & uVar21 - 1) != 0);
    }
    uVar18 = uVar18 | uVar21 * 2;
    fVar27 = (float)func_0x0eee3ab0((float)(param_1[3] + 1) / fVar27);
    uVar21 = (long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27;
    if (uVar21 < uVar18) {
      uVar21 = uVar18;
    }
    uVar18 = 2;
    if ((uVar21 == 1) || (uVar18 = uVar21, (uVar21 & uVar21 - 1) == 0)) {
      uVar21 = param_1[1];
      bVar26 = uVar18 < uVar21;
      if (uVar18 <= uVar21) goto LAB_0ee8d9dd;
LAB_0ee8d9bc:
      func_0x06124c40(param_1,uVar18);
    }
    else {
      uVar18 = func_0x0412c3f0();
      uVar21 = param_1[1];
      bVar26 = uVar18 < uVar21;
      if (uVar21 < uVar18) goto LAB_0ee8d9bc;
LAB_0ee8d9dd:
      if (bVar26) {
        fVar27 = (float)func_0x0eee3ab0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar19 = (long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27;
        if ((uVar21 < 3) ||
           (uVar15 = uVar21 - (uVar21 >> 1 & 0x5555555555555555),
           uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
           1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar19 = func_0x0412c3f0(uVar19);
        }
        else if (1 < uVar19) {
          lVar7 = 0x3f;
          if (uVar19 - 1 != 0) {
            for (; uVar19 - 1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          uVar19 = 1L << (-((byte)lVar7 ^ 0x3f) & 0x3f);
        }
        if (uVar18 <= uVar19) {
          uVar18 = uVar19;
        }
        if (uVar18 < uVar21) goto LAB_0ee8d9bc;
      }
    }
    uVar21 = param_1[1];
    if ((uVar21 & uVar21 - 1) == 0) {
      uStack_d98 = uVar5 & uVar21 - 1;
    }
    else {
      uStack_d98 = uVar5;
      if (uVar21 <= uVar5) {
        if ((uVar5 | uVar21) >> 0x20 == 0) {
          uStack_d98 = (uVar5 & 0xffffffff) % (uVar21 & 0xffffffff);
        }
        else {
          uStack_d98 = uVar5 % uVar21;
        }
      }
    }
  }
  else {
    fVar28 = (float)(long)uVar21;
    fVar27 = *(float *)(param_1 + 4);
    if (uVar21 == 0) goto LAB_0ee8d94c;
LAB_0ee8d93b:
    if (fVar28 * fVar27 < (float)(param_1[3] + 1)) goto LAB_0ee8d94c;
  }
  lVar7 = *param_1;
  plVar8 = *(long **)(lVar7 + uStack_d98 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar17 = param_1[2];
    param_1[2] = (long)plVar17;
    *(long **)(lVar7 + uStack_d98 * 8) = param_1 + 2;
    if (*plVar17 != 0) {
      uVar5 = *(ulong *)(*plVar17 + 8);
      if ((uVar21 & uVar21 - 1) == 0) {
        *(long **)(lVar7 + (uVar5 & uVar21 - 1) * 8) = plVar17;
      }
      else {
        if (uVar21 <= uVar5) {
          if ((uVar5 | uVar21) >> 0x20 == 0) {
            *(long **)(lVar7 + ((uVar5 & 0xffffffff) % (uVar21 & 0xffffffff)) * 8) = plVar17;
            goto LAB_0ee8db27;
          }
          uVar5 = uVar5 % uVar21;
        }
        *(long **)(lVar7 + uVar5 * 8) = plVar17;
      }
    }
  }
  else {
    *plVar17 = *plVar8;
    *plVar8 = (long)plVar17;
  }
LAB_0ee8db27:
  param_1[3] = param_1[3] + 1;
  bVar25 = (byte)uStack_c48 & 1;
LAB_0ee8db38:
  plVar17[5] = -1;
  if (bVar25 != 0) {
    func_0x0412a280(uStack_c38,(ulong)uStack_c48 & 0xfffffffffffffffe);
  }
  plStack_d20 = param_1 + 5;
  func_0x0ee45240(plStack_d20,param_1[8]);
  if (param_1[8] != 0) {
    plStack_c90 = param_1 + 2;
    uVar21 = 0;
LAB_0ee8dbb5:
    puVar11 = (ulong *)(*plStack_c98 + uVar21 * 0x30);
    uStack_c88 = uVar21;
    if ((*(byte *)(*plStack_c98 + uVar21 * 0x30) & 1) == 0) {
      uStack_d78 = puVar11[2];
      uStack_d88 = *puVar11;
      plStack_d80 = (long *)puVar11[1];
    }
    else {
      func_0x0412e5e0(&uStack_d88,puVar11[2],puVar11[1]);
    }
    bStack_d60 = (byte)puVar11[5];
    uStack_d70 = (undefined4)puVar11[3];
    uStack_d6c = *(undefined4 *)((long)puVar11 + 0x1c);
    uStack_d68 = (undefined4)puVar11[4];
    uStack_d64 = *(undefined4 *)((long)puVar11 + 0x24);
    func_0x0eee2dd0(&uStack_840,0,0x408);
    if ((char)uStack_cbc == '\0') {
      func_0x0eee2dd0(&uStack_c48,0,0x408);
      plVar17 = (long *)(uStack_d88 >> 1 & 0x7f);
      uVar21 = (long)&uStack_d88 + 1;
      if ((uStack_d88 & 1) != 0) {
        plVar17 = plStack_d80;
        uVar21 = uStack_d78;
      }
      if (plVar17 < (long *)0x400) {
        if (plVar17 != (long *)0x0) {
          func_0x0eee2ee0(&uStack_c48,uVar21,plVar17);
        }
        plStack_848 = plVar17;
        *(undefined1 *)((long)&uStack_c48 + (long)plVar17) = 0;
      }
      if ((DAT_0f7b8fb8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7b8fb8), iVar4 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      puStack_c78 = &uStack_c48;
      plStack_c70 = plStack_848;
      (**(code **)(_DAT_0f7b8f98 + 0x180))(&uStack_d18,&DAT_0f7b8f98,&uStack_840,&puStack_c78);
      plStack_cb8 = (long *)0x89d9f70b8d3c57f7;
      plStack_cb0 = (long *)&UNK_0140f690;
      uStack_ca8 = 1;
      uStack_ca0 = 0x3e;
      if (bStack_cd8 == 0) {
        uStack_d58 = 0;
        uStack_d50 = 0;
        uStack_d48 = 0;
        func_0x0eedeb80(2,0x2d,&uStack_d18,&uStack_d58,&plStack_cb8);
        if ((uStack_d58 & 1) != 0) {
          func_0x0412a280(uStack_d48);
        }
      }
      if ((bStack_cd8 & 1) != 0) goto LAB_0ee8def9;
      func_0x048e6d60(&uStack_d18);
      goto LAB_0ee8f32b;
    }
    func_0x0eee2dd0(&uStack_c48,0,0x408);
    plVar17 = (long *)(uStack_d88 >> 1 & 0x7f);
    uVar21 = (long)&uStack_d88 + 1;
    if ((uStack_d88 & 1) != 0) {
      plVar17 = plStack_d80;
      uVar21 = uStack_d78;
    }
    if (plVar17 < (long *)0x400) {
      if (plVar17 != (long *)0x0) {
        func_0x0eee2ee0(&uStack_c48,uVar21,plVar17);
      }
      plStack_848 = plVar17;
      *(undefined1 *)((long)&uStack_c48 + (long)plVar17) = 0;
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7b8fb8), iVar4 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    puStack_c68 = &uStack_c48;
    plStack_c60 = plStack_848;
    (**(code **)(_DAT_0f7b8f98 + 0x178))(&uStack_d18,&DAT_0f7b8f98,&uStack_840,&puStack_c68);
    plStack_cb8 = (long *)0x89d9f70b8d3c57f7;
    plStack_cb0 = (long *)&UNK_0140f690;
    uStack_ca8 = 1;
    uStack_ca0 = 0x3a;
    if (bStack_cd8 == 0) {
      uStack_d58 = 0;
      uStack_d50 = 0;
      uStack_d48 = 0;
      func_0x0eedeb80(2,0x2d,&uStack_d18,&uStack_d58,&plStack_cb8);
      if ((uStack_d58 & 1) != 0) {
        func_0x0412a280(uStack_d48);
      }
    }
    if ((bStack_cd8 & 1) == 0) {
      func_0x048e6d60(&uStack_d18);
    }
LAB_0ee8def9:
    plVar17 = plStack_440;
    if (plStack_440 == (long *)0x0) goto LAB_0ee8f32b;
    if (plStack_440 < (long *)0xfffffffffffffff8) {
      if (plStack_440 < (long *)0x17) {
        uStack_c48 = (long *)CONCAT71(uStack_c48._1_7_,(char)plStack_440 * '\x02');
        uVar5 = (long)&uStack_c48 + 1;
      }
      else {
        uVar21 = ((ulong)plStack_440 | 7) + 1;
        if (((ulong)plStack_440 | 7) == 0x17) {
          uVar21 = 0x1a;
        }
        uVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
        if (uVar5 == 0) {
          func_0x0eec74c0(uVar21,0);
        }
        uStack_c48 = (long *)(uVar21 | 1);
        plStack_c40 = plVar17;
        uStack_c38 = uVar5;
      }
      func_0x0eee2f00(uVar5,&uStack_840,plVar17);
      *(undefined1 *)(uVar5 + (long)plVar17) = 0;
      if ((uStack_d88 & 1) != 0) {
        func_0x0412a280(uStack_d78,uStack_d88 & 0xfffffffffffffffe);
      }
      uStack_d78 = uStack_c38;
      uStack_d88 = (ulong)uStack_c48;
      plStack_d80 = plStack_c40;
      uVar21 = uStack_c38;
      if (((ulong)uStack_c48 & 1) == 0) {
        uVar21 = (long)&uStack_d88 + 1;
      }
      lVar7 = param_1[6];
      lVar13 = param_1[5];
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      uStack_c38 = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      uStack_c48 = plVar17;
      plStack_c40 = param_1;
      uVar5 = func_0x0eee2e90(uVar21);
      if (0xfffffffffffffff7 < uVar5) {
LAB_0ee8f93e:
        func_0x04882e30();
        goto LAB_0ee8f943;
      }
      if (uVar5 < 0x17) {
        *(char *)(plVar17 + 2) = (char)uVar5 * '\x02';
        lVar6 = (long)plVar17 + 0x11;
        if (uVar5 != 0) goto LAB_0ee8e0bd;
      }
      else {
        uVar18 = (uVar5 | 7) + 1;
        if ((uVar5 | 7) == 0x17) {
          uVar18 = 0x1a;
        }
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
        if (lVar6 == 0) {
          func_0x0eec74c0(uVar18,0);
        }
        plVar17[4] = lVar6;
        plVar17[2] = uVar18 | 1;
        plVar17[3] = uVar5;
LAB_0ee8e0bd:
        func_0x0eee2ee0(lVar6,uVar21,uVar5);
      }
      uVar21 = (lVar7 - lVar13 >> 4) * -0x5555555555555555;
      *(undefined1 *)(lVar6 + uVar5) = 0;
      plVar17[5] = uVar21;
      uStack_c38 = CONCAT71(uStack_c38._1_7_,1);
      bVar26 = (*(byte *)(plVar17 + 2) & 1) != 0;
      lVar7 = (long)plVar17 + 0x11;
      if (bVar26) {
        lVar7 = plVar17[4];
      }
      uVar5 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
      if (bVar26) {
        uVar5 = plVar17[3];
      }
      lVar7 = func_0x04883620(&uStack_d18,lVar7,uVar5);
      plVar8 = uStack_c48;
      plVar17[1] = lVar7;
      lVar7 = (long)uStack_c48 + 0x11;
      bVar26 = (*(byte *)(uStack_c48 + 2) & 1) == 0;
      lVar13 = uStack_c48[4];
      if (bVar26) {
        lVar13 = lVar7;
      }
      uVar5 = (ulong)(*(byte *)(uStack_c48 + 2) >> 1);
      if (!bVar26) {
        uVar5 = uStack_c48[3];
      }
      uVar18 = func_0x04883620(&uStack_d18,lVar13,uVar5);
      plVar8[1] = uVar18;
      uVar5 = param_1[1];
      if (uVar5 != 0) {
        uVar19 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
        uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
        uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar19 >> 0x38 < 2) {
          uVar15 = uVar5 - 1 & uVar18;
        }
        else {
          uVar15 = uVar18;
          if (uVar5 <= uVar18) {
            if ((uVar18 | uVar5) >> 0x20 == 0) {
              uVar15 = (uVar18 & 0xffffffff) % (uVar5 & 0xffffffff);
            }
            else {
              uVar15 = uVar18 % uVar5;
            }
          }
        }
        plVar17 = *(long **)(*param_1 + uVar15 * 8);
        if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
          if ((*(byte *)(plVar8 + 2) & 1) == 0) {
            uVar21 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
          }
          else {
            uVar21 = plVar8[3];
            lVar7 = plVar8[4];
          }
          if ((byte)(uVar19 >> 0x38) < 2) {
            do {
              if (plVar17[1] == uVar18) {
                bVar25 = *(byte *)(plVar17 + 2);
                if ((bVar25 & 1) == 0) {
                  uVar19 = (ulong)(bVar25 >> 1);
                }
                else {
                  uVar19 = plVar17[3];
                }
                if (uVar19 == uVar21) {
                  if ((bVar25 & 1) == 0) {
                    lVar13 = (long)plVar17 + 0x11;
                  }
                  else {
                    lVar13 = plVar17[4];
                  }
                  iVar4 = func_0x0eee3000(lVar13,lVar7,uVar21);
                  if (iVar4 == 0) goto LAB_0ee8e356;
                }
              }
              else if ((plVar17[1] & uVar5 - 1) != uVar15) break;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              uVar19 = plVar17[1];
              if (uVar19 == uVar18) {
                bVar25 = *(byte *)(plVar17 + 2);
                if ((bVar25 & 1) == 0) {
                  uVar19 = (ulong)(bVar25 >> 1);
                }
                else {
                  uVar19 = plVar17[3];
                }
                if (uVar19 == uVar21) {
                  if ((bVar25 & 1) == 0) {
                    lVar13 = (long)plVar17 + 0x11;
                  }
                  else {
                    lVar13 = plVar17[4];
                  }
                  iVar4 = func_0x0eee3000(lVar13,lVar7,uVar21);
                  if (iVar4 == 0) goto LAB_0ee8e356;
                }
              }
              else {
                if (uVar5 <= uVar19) {
                  if ((uVar19 | uVar5) >> 0x20 == 0) {
                    uVar19 = (uVar19 & 0xffffffff) % (uVar5 & 0xffffffff);
                  }
                  else {
                    uVar19 = uVar19 % uVar5;
                  }
                }
                if (uVar19 != uVar15) break;
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
      }
      if (-1 < (long)uVar5) {
        fVar28 = (float)(long)uVar5;
        fVar27 = *(float *)(param_1 + 4);
        if (uVar5 == 0) goto LAB_0ee8e4b3;
LAB_0ee8e4a6:
        if (fVar28 * fVar27 < (float)(param_1[3] + 1)) goto LAB_0ee8e4b3;
        goto LAB_0ee8e640;
      }
      fVar28 = (float)uVar5;
      fVar27 = *(float *)(param_1 + 4);
      if (uVar5 != 0) goto LAB_0ee8e4a6;
LAB_0ee8e4b3:
      uVar18 = 1;
      if (2 < uVar5) {
        uVar18 = (ulong)((uVar5 & uVar5 - 1) != 0);
      }
      uVar18 = uVar5 * 2 | uVar18;
      fVar27 = (float)func_0x0eee3ab0((float)(param_1[3] + 1) / fVar27);
      uVar19 = (long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27;
      if (uVar19 < uVar18) {
        uVar19 = uVar18;
      }
      uVar18 = 2;
      if ((uVar19 == 1) || (uVar18 = uVar19, (uVar19 & uVar19 - 1) == 0)) {
        bVar26 = uVar18 < uVar5;
        if (uVar18 <= uVar5) goto LAB_0ee8e53e;
LAB_0ee8e51d:
        func_0x06124c40(param_1,uVar18);
      }
      else {
        uVar18 = func_0x0412c3f0();
        uVar5 = param_1[1];
        bVar26 = uVar18 < uVar5;
        if (uVar5 < uVar18) goto LAB_0ee8e51d;
LAB_0ee8e53e:
        if (bVar26) {
          fVar27 = (float)func_0x0eee3ab0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          uVar19 = (long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27;
          if ((uVar5 < 3) ||
             (uVar15 = uVar5 - (uVar5 >> 1 & 0x5555555555555555),
             uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
             1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar19 = func_0x0412c3f0(uVar19);
          }
          else if (1 < uVar19) {
            lVar7 = 0x3f;
            if (uVar19 - 1 != 0) {
              for (; uVar19 - 1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar19 = 1L << (-((byte)lVar7 ^ 0x3f) & 0x3f);
          }
          if (uVar18 <= uVar19) {
            uVar18 = uVar19;
          }
          if (uVar18 < uVar5) goto LAB_0ee8e51d;
        }
      }
LAB_0ee8e640:
      plVar17 = plStack_440;
      uVar5 = param_1[1];
      uVar18 = plVar8[1];
      uVar19 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
      uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar19 >> 0x38 < 2) {
        uVar18 = uVar18 & uVar5 - 1;
        lVar7 = *param_1;
        plVar14 = *(long **)(lVar7 + uVar18 * 8);
        if (plVar14 != (long *)0x0) goto LAB_0ee8e72d;
LAB_0ee8e6be:
        *plVar8 = *plStack_c90;
        *plStack_c90 = (long)plVar8;
        *(long **)(lVar7 + uVar18 * 8) = plStack_c90;
        if (*plVar8 != 0) {
          uVar18 = *(ulong *)(*plVar8 + 8);
          if ((byte)(uVar19 >> 0x38) < 2) {
            *(long **)(lVar7 + (uVar18 & uVar5 - 1) * 8) = plVar8;
          }
          else {
            if (uVar5 <= uVar18) {
              if ((uVar18 | uVar5) >> 0x20 == 0) {
                *(long **)(lVar7 + ((uVar18 & 0xffffffff) % (uVar5 & 0xffffffff)) * 8) = plVar8;
                goto LAB_0ee8e736;
              }
              uVar18 = uVar18 % uVar5;
            }
            *(long **)(lVar7 + uVar18 * 8) = plVar8;
          }
        }
      }
      else {
        if (uVar18 < uVar5) {
LAB_0ee8e720:
          lVar7 = *param_1;
          plVar14 = *(long **)(lVar7 + uVar18 * 8);
        }
        else {
          if ((uVar18 | uVar5) >> 0x20 != 0) {
            uVar18 = uVar18 % uVar5;
            goto LAB_0ee8e720;
          }
          uVar18 = (uVar18 & 0xffffffff) % (uVar5 & 0xffffffff);
          lVar7 = *param_1;
          plVar14 = *(long **)(lVar7 + uVar18 * 8);
        }
        if (plVar14 == (long *)0x0) goto LAB_0ee8e6be;
LAB_0ee8e72d:
        *plVar8 = *plVar14;
        *plVar14 = (long)plVar8;
      }
LAB_0ee8e736:
      param_1[3] = param_1[3] + 1;
      if ((DAT_0f7b8fb8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7b8fb8), iVar4 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      puStack_c58 = &uStack_840;
      plStack_c50 = plVar17;
      (**(code **)(_DAT_0f7b8f98 + 0x168))(&uStack_d58,&DAT_0f7b8f98,&puStack_c58);
      if (1 < (ulong)(((long)(uStack_d50 - uStack_d58) >> 3) * -0x5555555555555555)) {
        uStack_c28 = 0;
        uStack_c24 = 0;
        uStack_c20 = 0;
        uStack_c38 = 0;
        uStack_c30 = 0;
        uStack_c2c = 0;
        uStack_c48 = (long *)0x0;
        plStack_c40 = (long *)0x0;
        uVar5 = uStack_d50;
LAB_0ee8e7ed:
        if (uVar5 - 0x18 != uStack_d58) {
          lVar7 = uVar5 - 0x2f;
          if ((*(byte *)(uVar5 - 0x30) & 1) != 0) {
            lVar7 = *(long *)(uVar5 - 0x20);
          }
          plVar17 = (long *)func_0x0eee2e90(lVar7);
          if (plVar17 < (long *)0xfffffffffffffff8) {
            if (plVar17 < (long *)0x17) {
              uStack_d38 = (long *)CONCAT71(uStack_d38._1_7_,(char)plVar17 * '\x02');
              uVar19 = (long)&uStack_d38 + 1;
              if (plVar17 != (long *)0x0) goto LAB_0ee8e88e;
            }
            else {
              uVar18 = ((ulong)plVar17 | 7) + 1;
              if (((ulong)plVar17 | 7) == 0x17) {
                uVar18 = 0x1a;
              }
              uVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
              if (uVar19 == 0) {
                func_0x0eec74c0(uVar18,0);
              }
              uStack_d38 = (long *)(uVar18 | 1);
              plStack_d30 = plVar17;
              uStack_d28 = uVar19;
LAB_0ee8e88e:
              func_0x0eee2ee0(uVar19,lVar7,plVar17);
            }
            *(undefined1 *)(uVar19 + (long)plVar17) = 0;
            lVar7 = param_1[6];
            lVar13 = param_1[5];
            bVar25 = (byte)uStack_d38 & 1;
            if (((ulong)uStack_d38 & 1) == 0) {
              uStack_d08 = uStack_d28;
              uStack_d18 = uStack_d38;
              plStack_d10 = plStack_d30;
            }
            else {
              func_0x0412e5e0(&uStack_d18,uStack_d28,plStack_d30);
            }
            lStack_d00 = (lVar7 - lVar13 >> 4) * -0x5555555555555555;
            plVar17 = (long *)((ulong)uStack_d18 >> 1 & 0x7f);
            uVar18 = (long)&uStack_d18 + 1;
            if (((ulong)uStack_d18 & 1) != 0) {
              plVar17 = plStack_d10;
              uVar18 = uStack_d08;
            }
            uVar19 = func_0x04883620(&plStack_cb8,uVar18,plVar17);
            plVar17 = uStack_d18;
            uVar18 = param_1[1];
            if (uVar18 != 0) {
              uVar21 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
              uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333);
              uVar15 = ((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar15 >> 0x38 < 2) {
                uVar21 = uVar18 - 1 & uVar19;
                puVar10 = *(undefined8 **)(*param_1 + uVar21 * 8);
              }
              else {
                uVar21 = uVar19;
                if (uVar18 <= uVar19) {
                  if ((uVar19 | uVar18) >> 0x20 == 0) {
                    uVar21 = (uVar19 & 0xffffffff) % (uVar18 & 0xffffffff);
                    puVar10 = *(undefined8 **)(*param_1 + uVar21 * 8);
                    goto joined_r0x0ee8ea1b;
                  }
                  uVar21 = uVar19 % uVar18;
                }
                puVar10 = *(undefined8 **)(*param_1 + uVar21 * 8);
              }
joined_r0x0ee8ea1b:
              if ((puVar10 != (undefined8 *)0x0) &&
                 (plVar8 = (long *)*puVar10, plVar8 != (long *)0x0)) {
                uStack_cc8 = uStack_d08;
                plVar14 = plStack_d10;
                if (((ulong)uStack_d18 & 1) == 0) {
                  uStack_cc8 = (long)&uStack_d18 + 1;
                  plVar14 = (long *)((ulong)uStack_d18 >> 1 & 0x7f);
                }
                if ((byte)(uVar15 >> 0x38) < 2) {
                  uVar15 = uVar18 - 1;
                  uStack_c80 = uVar15;
                  do {
                    if (plVar8[1] == uVar19) {
                      bVar2 = *(byte *)(plVar8 + 2);
                      if ((bVar2 & 1) == 0) {
                        plVar16 = (long *)(ulong)(bVar2 >> 1);
                      }
                      else {
                        plVar16 = (long *)plVar8[3];
                      }
                      if (plVar16 == plVar14) {
                        if ((bVar2 & 1) == 0) {
                          lVar7 = (long)plVar8 + 0x11;
                        }
                        else {
                          lVar7 = plVar8[4];
                        }
                        iVar4 = func_0x0eee3000(lVar7,uStack_cc8,plVar14);
                        uVar15 = uStack_c80;
                        if (iVar4 == 0) goto LAB_0ee8eba1;
                      }
                    }
                    else if ((plVar8[1] & uVar15) != uVar21) break;
                    plVar8 = (long *)*plVar8;
                  } while (plVar8 != (long *)0x0);
                }
                else {
                  do {
                    uVar15 = plVar8[1];
                    if (uVar15 == uVar19) {
                      bVar2 = *(byte *)(plVar8 + 2);
                      if ((bVar2 & 1) == 0) {
                        plVar16 = (long *)(ulong)(bVar2 >> 1);
                      }
                      else {
                        plVar16 = (long *)plVar8[3];
                      }
                      if (plVar16 == plVar14) {
                        if ((bVar2 & 1) == 0) {
                          lVar7 = (long)plVar8 + 0x11;
                        }
                        else {
                          lVar7 = plVar8[4];
                        }
                        iVar4 = func_0x0eee3000(lVar7,uStack_cc8,plVar14);
                        if (iVar4 == 0) goto LAB_0ee8eba1;
                      }
                    }
                    else {
                      if (uVar18 <= uVar15) {
                        if ((uVar15 | uVar18) >> 0x20 == 0) {
                          uVar15 = (uVar15 & 0xffffffff) % (uVar18 & 0xffffffff);
                        }
                        else {
                          uVar15 = uVar15 % uVar18;
                        }
                      }
                      if (uVar15 != uVar21) break;
                    }
                    plVar8 = (long *)*plVar8;
                  } while (plVar8 != (long *)0x0);
                }
              }
            }
            plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (plVar8 == (long *)0x0) {
              func_0x0eec74c0(0x30);
            }
            uStack_ca8 = 1;
            *plVar8 = 0;
            plVar8[1] = uVar19;
            plVar8[4] = uStack_d08;
            plVar8[2] = (long)uStack_d18;
            plVar8[3] = (long)plStack_d10;
            uStack_d18 = (long *)0x0;
            plStack_d10 = (long *)0x0;
            uStack_d08 = 0;
            plVar8[5] = lStack_d00;
            plStack_cb8 = plVar8;
            plStack_cb0 = param_1;
            if ((long)uVar18 < 0) {
              fVar28 = (float)uVar18;
              fVar27 = *(float *)(param_1 + 4);
              if (uVar18 != 0) goto LAB_0ee8ecc1;
LAB_0ee8ed30:
              uVar15 = 1;
              if (2 < uVar18) {
                uVar15 = (ulong)((uVar18 & uVar18 - 1) != 0);
              }
              uVar15 = uVar18 * 2 | uVar15;
              fVar27 = (float)func_0x0eee3ab0((float)(param_1[3] + 1) / fVar27);
              uVar18 = (long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27;
              if (uVar18 < uVar15) {
                uVar18 = uVar15;
              }
              uVar15 = 2;
              if ((uVar18 == 1) || (uVar15 = uVar18, (uVar18 & uVar18 - 1) == 0)) {
                uVar18 = param_1[1];
                bVar26 = uVar15 < uVar18;
                if (uVar15 <= uVar18) goto LAB_0ee8edbd;
LAB_0ee8ed9c:
                func_0x06124c40(param_1);
              }
              else {
                uVar15 = func_0x0412c3f0();
                uVar18 = param_1[1];
                bVar26 = uVar15 < uVar18;
                if (uVar18 < uVar15) goto LAB_0ee8ed9c;
LAB_0ee8edbd:
                if (bVar26) {
                  fVar27 = (float)func_0x0eee3ab0((float)(ulong)param_1[3] / *(float *)(param_1 + 4)
                                                 );
                  uVar9 = (long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27;
                  if ((uVar18 < 3) ||
                     (uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
                     uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333),
                     1 < (byte)(((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar9 = func_0x0412c3f0(uVar9);
                  }
                  else if (1 < uVar9) {
                    lVar7 = 0x3f;
                    if (uVar9 - 1 != 0) {
                      for (; uVar9 - 1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                      }
                    }
                    uVar9 = 1L << (-((byte)lVar7 ^ 0x3f) & 0x3f);
                  }
                  if (uVar15 <= uVar9) {
                    uVar15 = uVar9;
                  }
                  if (uVar15 < uVar18) goto LAB_0ee8ed9c;
                }
              }
              uVar18 = param_1[1];
              if ((uVar18 & uVar18 - 1) != 0) {
                if (uVar18 <= uVar19) {
                  if ((uVar19 | uVar18) >> 0x20 == 0) {
                    uVar19 = (uVar19 & 0xffffffff) % (uVar18 & 0xffffffff);
                    lVar7 = *param_1;
                    plVar17 = *(long **)(lVar7 + uVar19 * 8);
                    goto joined_r0x0ee8f1ea;
                  }
                  uVar19 = uVar19 % uVar18;
                }
                lVar7 = *param_1;
                plVar17 = *(long **)(lVar7 + uVar19 * 8);
                goto joined_r0x0ee8ecd8;
              }
              uVar19 = uVar19 & uVar18 - 1;
              lVar7 = *param_1;
              plVar17 = *(long **)(lVar7 + uVar19 * 8);
joined_r0x0ee8f1ea:
              if (plVar17 != (long *)0x0) goto LAB_0ee8ef41;
LAB_0ee8ecde:
              *plVar8 = *plStack_c90;
              *plStack_c90 = (long)plVar8;
              *(long **)(lVar7 + uVar19 * 8) = plStack_c90;
              if (*plVar8 != 0) {
                uVar19 = *(ulong *)(*plVar8 + 8);
                if ((uVar18 & uVar18 - 1) == 0) {
                  *(long **)(lVar7 + (uVar19 & uVar18 - 1) * 8) = plVar8;
                }
                else {
                  if (uVar18 <= uVar19) {
                    if ((uVar19 | uVar18) >> 0x20 == 0) {
                      *(long **)(lVar7 + ((uVar19 & 0xffffffff) % (uVar18 & 0xffffffff)) * 8) =
                           plVar8;
                      goto LAB_0ee8ef50;
                    }
                    uVar19 = uVar19 % uVar18;
                  }
                  *(long **)(lVar7 + uVar19 * 8) = plVar8;
                }
              }
            }
            else {
              fVar28 = (float)(long)uVar18;
              fVar27 = *(float *)(param_1 + 4);
              if (uVar18 == 0) goto LAB_0ee8ed30;
LAB_0ee8ecc1:
              if (fVar28 * fVar27 < (float)(param_1[3] + 1)) goto LAB_0ee8ed30;
              lVar7 = *param_1;
              plVar17 = *(long **)(lVar7 + uVar21 * 8);
              uVar19 = uVar21;
joined_r0x0ee8ecd8:
              if (plVar17 == (long *)0x0) goto LAB_0ee8ecde;
LAB_0ee8ef41:
              *plVar8 = *plVar17;
              *plVar17 = (long)plVar8;
            }
LAB_0ee8ef50:
            param_1[3] = param_1[3] + 1;
            uVar21 = CONCAT71((int7)(uVar21 >> 8),1);
            plVar17 = uStack_d18;
            goto joined_r0x0ee8ebab;
          }
          func_0x04882e30();
          goto LAB_0ee8f939;
        }
        goto LAB_0ee8f240;
      }
      goto LAB_0ee8f268;
    }
LAB_0ee8f943:
    func_0x04882e30();
    goto LAB_0ee8f948;
  }
LAB_0ee8f58f:
  plVar17 = (long *)func_0x0eee2e90(auStack_438);
  if ((long *)0xfffffffffffffff7 < plVar17) {
LAB_0ee8f948:
    uVar12 = func_0x04882e30();
    func_0x041084d6(&DAT_0f7b8fb8);
    do {
      if ((uStack_d88 & 1) != 0) {
        func_0x0412a280(uStack_d78,uStack_d88 & 0xfffffffffffffffe);
      }
      func_0x0eee2d70(uVar12);
      func_0x0412a280(uStack_d08,(ulong)uStack_d18 & 0xfffffffffffffffe);
      if (((ulong)uStack_d38 & 1) != 0) {
        func_0x0412a280(uStack_d28,(ulong)uStack_d38 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_c48 & 1) != 0) {
        func_0x0412a280(uStack_c38,(ulong)uStack_c48 & 0xfffffffffffffffe);
      }
      func_0x048e6e10(&uStack_d58);
    } while( true );
  }
  if (plVar17 < (long *)0x17) {
    uStack_840 = (long *)CONCAT71(uStack_840._1_7_,(char)plVar17 * '\x02');
    lVar7 = (long)&uStack_840 + 1;
    if (plVar17 != (long *)0x0) goto LAB_0ee8f61d;
  }
  else {
    uVar21 = 0x1a;
    if (((ulong)plVar17 | 7) != 0x17) {
      uVar21 = ((ulong)plVar17 | 7) + 1;
    }
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
    if (lVar7 == 0) {
      func_0x0eec74c0(uVar21,0);
    }
    uStack_840 = (long *)(uVar21 | 1);
    uStack_838 = plVar17;
    lStack_830 = lVar7;
LAB_0ee8f61d:
    func_0x0eee2f00(lVar7,auStack_438,plVar17);
  }
  *(undefined1 *)(lVar7 + (long)plVar17) = 0;
  plVar17 = (long *)func_0x0cbaf8a0(param_1,&uStack_840);
  if (plVar17 == (long *)0x0) goto LAB_0ee8f880;
  uVar21 = param_1[1];
  uVar5 = plVar17[1];
  uVar18 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
  uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar18 >> 0x38 < 2) {
    uVar5 = uVar5 & uVar21 - 1;
  }
  else if (uVar21 <= uVar5) {
    if ((uVar5 | uVar21) >> 0x20 == 0) {
      uVar5 = (uVar5 & 0xffffffff) % (uVar21 & 0xffffffff);
    }
    else {
      uVar5 = uVar5 % uVar21;
    }
  }
  lVar7 = *param_1;
  plVar8 = *(long **)(lVar7 + uVar5 * 8);
  do {
    plVar14 = plVar8;
    plVar8 = (long *)*plVar14;
  } while ((long *)*plVar14 != plVar17);
  bVar25 = (byte)(uVar18 >> 0x38);
  if (plVar14 == param_1 + 2) {
LAB_0ee8f7aa:
    if (*plVar17 != 0) {
      uVar18 = *(ulong *)(*plVar17 + 8);
      if (bVar25 < 2) {
        uVar18 = uVar18 & uVar21 - 1;
      }
      else if (uVar21 <= uVar18) {
        if ((uVar18 | uVar21) >> 0x20 == 0) {
          uVar18 = (uVar18 & 0xffffffff) % (uVar21 & 0xffffffff);
        }
        else {
          uVar18 = uVar18 % uVar21;
        }
      }
      if (uVar18 == uVar5) goto LAB_0ee8f800;
    }
    *(undefined8 *)(lVar7 + uVar5 * 8) = 0;
  }
  else {
    uVar18 = plVar14[1];
    if (bVar25 < 2) {
      uVar18 = uVar18 & uVar21 - 1;
    }
    else if (uVar21 <= uVar18) {
      if ((uVar18 | uVar21) >> 0x20 == 0) {
        uVar18 = (uVar18 & 0xffffffff) % (uVar21 & 0xffffffff);
      }
      else {
        uVar18 = uVar18 % uVar21;
      }
    }
    if (uVar18 != uVar5) goto LAB_0ee8f7aa;
  }
LAB_0ee8f800:
  lVar13 = *plVar17;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    uVar18 = *(ulong *)(lVar13 + 8);
    if (bVar25 < 2) {
      uVar18 = uVar18 & uVar21 - 1;
    }
    else if (uVar21 <= uVar18) {
      if ((uVar18 | uVar21) >> 0x20 == 0) {
        uVar18 = (uVar18 & 0xffffffff) % (uVar21 & 0xffffffff);
      }
      else {
        uVar18 = uVar18 % uVar21;
      }
    }
    if (uVar18 != uVar5) {
      *(long **)(lVar7 + uVar18 * 8) = plVar14;
      lVar13 = *plVar17;
    }
  }
  *plVar14 = lVar13;
  *plVar17 = 0;
  param_1[3] = param_1[3] + -1;
  if ((*(byte *)(plVar17 + 2) & 1) != 0) {
    func_0x0412a280(plVar17[4],plVar17[2] & 0xfffffffffffffffe);
  }
  func_0x0412a280(plVar17,0x30);
LAB_0ee8f880:
  if (((ulong)uStack_840 & 1) != 0) {
    func_0x0412a280(lStack_830,(ulong)uStack_840 & 0xfffffffffffffffe);
  }
  param_1[8] = (param_1[6] - param_1[5] >> 4) * -0x5555555555555555;
  return;
LAB_0ee8e356:
  plVar8 = uStack_c48;
  uStack_c48 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    if (((char)uStack_c38 == '\x01') && ((*(byte *)(plVar8 + 2) & 1) != 0)) {
      func_0x0412a280(plVar8[4],plVar8[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar8);
  }
  if (plVar17[5] != -1) {
    lVar7 = plVar17[5] * 0x30;
    puVar11 = (ulong *)(*plStack_d20 + lVar7);
    bVar25 = *(byte *)(*plStack_d20 + 0x28 + lVar7);
    if ((bStack_d60 & 1) == 0) {
      if ((bVar25 & 1) == 0) {
        if (puVar11 != &uStack_d88) {
          if ((*puVar11 & 1) == 0) {
            if ((uStack_d88 & 1) == 0) {
              puVar11[2] = uStack_d78;
              *puVar11 = uStack_d88;
              puVar11[1] = (ulong)plStack_d80;
            }
            else {
              func_0x04885070(puVar11,uStack_d78,plStack_d80);
            }
          }
          else {
            plVar17 = (long *)(ulong)((byte)uStack_d88 >> 1);
            uVar21 = (long)&uStack_d88 + 1;
            if ((uStack_d88 & 1) != 0) {
              plVar17 = plStack_d80;
              uVar21 = uStack_d78;
            }
            func_0x04885120(puVar11,uVar21,plVar17);
          }
        }
        *(byte *)(puVar11 + 5) = bStack_d60;
        *(undefined4 *)(puVar11 + 3) = uStack_d70;
        *(undefined4 *)((long)puVar11 + 0x1c) = uStack_d6c;
        *(undefined4 *)(puVar11 + 4) = uStack_d68;
        *(undefined4 *)((long)puVar11 + 0x24) = uStack_d64;
      }
    }
    else if ((bVar25 & 1) == 0) {
      if (puVar11 != &uStack_d88) {
        if ((*puVar11 & 1) == 0) {
          if ((uStack_d88 & 1) == 0) {
            puVar11[2] = uStack_d78;
            *puVar11 = uStack_d88;
            puVar11[1] = (ulong)plStack_d80;
          }
          else {
            func_0x04885070(puVar11,uStack_d78,plStack_d80);
          }
        }
        else {
          plVar17 = (long *)(ulong)((byte)uStack_d88 >> 1);
          uVar21 = (long)&uStack_d88 + 1;
          if ((uStack_d88 & 1) != 0) {
            plVar17 = plStack_d80;
            uVar21 = uStack_d78;
          }
          func_0x04885120(puVar11,uVar21,plVar17);
        }
      }
      *(byte *)(puVar11 + 5) = bStack_d60;
      *(undefined4 *)(puVar11 + 3) = uStack_d70;
      *(undefined4 *)((long)puVar11 + 0x1c) = uStack_d6c;
      *(undefined4 *)(puVar11 + 4) = uStack_d68;
      *(undefined4 *)((long)puVar11 + 0x24) = uStack_d64;
      *(byte *)(puVar11 + 5) = bStack_d60 & 0xfe;
    }
  }
  goto LAB_0ee8f32b;
LAB_0ee8eba1:
  uVar21 = 0;
joined_r0x0ee8ebab:
  if (((ulong)plVar17 & 1) != 0) {
    func_0x0412a280(uStack_d08);
  }
  if ((char)uVar21 == '\0') {
    if (plVar8[5] != -1) {
      pbVar1 = (byte *)(*plStack_d20 + 0x28 + plVar8[5] * 0x30);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    goto LAB_0ee8f193;
  }
  bVar26 = (*(byte *)(uVar5 - 0x30) & 1) != 0;
  lVar7 = uVar5 - 0x2f;
  if (bVar26) {
    lVar7 = *(long *)(uVar5 - 0x20);
  }
  plVar17 = (long *)(ulong)(*(byte *)(uVar5 - 0x30) >> 1);
  if (bVar26) {
    plVar17 = *(long **)(uVar5 - 0x28);
  }
  if ((long *)0xfffffffffffffff7 < plVar17) {
LAB_0ee8f939:
    func_0x04882e30();
    goto LAB_0ee8f93e;
  }
  if (plVar17 < (long *)0x17) {
    uStack_d18 = (long *)CONCAT71(uStack_d18._1_7_,(char)plVar17 * '\x02');
    uVar19 = (long)&uStack_d18 + 1;
    if (plVar17 != (long *)0x0) goto LAB_0ee8f104;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_d18._1_1_ = 0;
  }
  else {
    uVar18 = ((ulong)plVar17 | 7) + 1;
    if (((ulong)plVar17 | 7) == 0x17) {
      uVar18 = 0x1a;
    }
    uVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
    if (uVar19 == 0) {
      func_0x0eec74c0(uVar18,0);
    }
    uStack_d18 = (long *)(uVar18 | 1);
    plStack_d10 = plVar17;
    uStack_d08 = uVar19;
LAB_0ee8f104:
    func_0x0eee2ee0(uVar19,lVar7,plVar17);
    *(undefined1 *)(uVar19 + (long)plVar17) = 0;
  }
  if (((ulong)uStack_c48 & 1) != 0) {
    func_0x0412a280(uStack_c38);
  }
  uStack_c38 = uStack_d08;
  uStack_c48 = uStack_d18;
  plStack_c40 = plStack_d10;
  puVar10 = (undefined8 *)param_1[6];
  if (puVar10 < (undefined8 *)param_1[7]) {
    if (((ulong)uStack_d18 & 1) == 0) {
      puVar10[2] = uStack_d08;
      *puVar10 = uStack_d18;
      puVar10[1] = plStack_d10;
    }
    else {
      func_0x0412e5e0(puVar10,uStack_d08,plStack_d10);
    }
    *(undefined1 *)(puVar10 + 5) = uStack_c20;
    *(undefined4 *)(puVar10 + 3) = uStack_c30;
    *(undefined4 *)((long)puVar10 + 0x1c) = uStack_c2c;
    *(undefined4 *)(puVar10 + 4) = uStack_c28;
    *(undefined4 *)((long)puVar10 + 0x24) = uStack_c24;
    puVar10 = puVar10 + 6;
    param_1[6] = (long)puVar10;
  }
  else {
    puVar10 = (undefined8 *)func_0x0ee4ba50(plStack_d20);
  }
  param_1[6] = (long)puVar10;
  bVar25 = (byte)uStack_d38 & 1;
LAB_0ee8f193:
  if (bVar25 != 0) {
    func_0x0412a280(uStack_d28);
  }
  uVar5 = uVar5 - 0x18;
  if ((char)uVar21 == '\0') goto LAB_0ee8f240;
  goto LAB_0ee8e7ed;
LAB_0ee8f240:
  if (((ulong)uStack_c48 & 1) != 0) {
    func_0x0412a280(uStack_c38);
  }
LAB_0ee8f268:
  uVar5 = uStack_d58;
  uVar21 = uStack_d50;
  if (uStack_d58 != 0) {
    for (; uVar5 != uVar21; uVar21 = uVar21 - 0x18) {
      if ((*(byte *)(uVar21 - 0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar21 - 8),*(ulong *)(uVar21 - 0x18) & 0xfffffffffffffffe);
      }
    }
    uStack_d50 = uVar5;
    func_0x0412a280();
  }
  puVar11 = (ulong *)param_1[6];
  if (puVar11 < (ulong *)param_1[7]) {
    puVar11[2] = uStack_d78;
    *puVar11 = uStack_d88;
    puVar11[1] = (ulong)plStack_d80;
    uStack_d88 = 0;
    plStack_d80 = (long *)0x0;
    uStack_d78 = 0;
    *(byte *)(puVar11 + 5) = bStack_d60;
    *(undefined4 *)(puVar11 + 3) = uStack_d70;
    *(undefined4 *)((long)puVar11 + 0x1c) = uStack_d6c;
    *(undefined4 *)(puVar11 + 4) = uStack_d68;
    *(undefined4 *)((long)puVar11 + 0x24) = uStack_d64;
    puVar11 = puVar11 + 6;
  }
  else {
    puVar11 = (ulong *)func_0x0ee9bc90(plStack_d20);
  }
  param_1[6] = (long)puVar11;
LAB_0ee8f32b:
  if ((uStack_d88 & 1) != 0) {
    func_0x0412a280(uStack_d78);
  }
  uVar21 = uStack_c88 + 1;
  if ((ulong)param_1[8] <= uVar21) goto LAB_0ee8f58f;
  goto LAB_0ee8dbb5;
}


