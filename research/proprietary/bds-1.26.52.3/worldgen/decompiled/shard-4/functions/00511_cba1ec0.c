/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcca1ec0 (ELF vaddr 0xcba1ec0)
 * Label: caller-of-callee
 * Body:  [[0cca1ec0, 0cca1ef7] [0cca1f93, 0cca1f99] [0cca2f05, 0cca2f16]]
 * Ghidra: FUN_0cca1ec0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cca1ec0(undefined4 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  long *******ppppppplVar2;
  undefined8 *puVar3;
  code *pcVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  undefined8 uVar14;
  long *plVar15;
  long ******pppppplVar16;
  undefined8 *puVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  long *******ppppppplVar21;
  long lVar22;
  long *******ppppppplVar23;
  undefined8 *puVar24;
  long *******ppppppplVar25;
  long lVar26;
  bool bVar27;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  undefined1 uStack_70;
  long *******ppppppplStack_68;
  long *******ppppppplStack_60;
  long *******ppppppplStack_58;
  long *******ppppppplStack_50;
  long *******ppppppplStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if (*(char *)((long)param_2 + 0x24) != '\x02') {
    param_2 = (long *)*param_2;
  }
  switch(param_1) {
  case 0:
    param_3 = (long *)0xf7006d8;
    if ((DAT_0f7006f0 == '\0') && (iVar9 = FUN_04108328(&DAT_0f7006f0), iVar9 != 0)) {
      func_0x0cd1f780(0xf7006d8);
      func_0x0410844d(&DAT_0f7006f0);
      param_3 = (long *)0xf7006d8;
    }
    break;
  case 1:
    *param_2 = *param_3;
    lVar10 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = lVar10;
    lVar10 = param_2[2];
    param_2[2] = param_3[2];
    param_3[2] = lVar10;
    param_2[3] = param_3[3];
    lVar10 = param_2[4];
    param_2[4] = param_3[4];
    param_3[4] = lVar10;
    lVar10 = param_2[5];
    param_2[5] = param_3[5];
    param_3[5] = lVar10;
    *(undefined2 *)((long)param_2 + 0x34) = *(undefined2 *)((long)param_3 + 0x34);
    *(int *)(param_2 + 6) = (int)param_3[6];
    param_2[7] = param_3[7];
    lVar10 = param_2[8];
    param_2[8] = param_3[8];
    param_3[8] = lVar10;
    lVar10 = param_2[9];
    param_2[9] = param_3[9];
    param_3[9] = lVar10;
    func_0x0cbb5650(param_2 + 10,param_3 + 10);
    func_0x0cca3100(param_2 + 0x23,param_3 + 0x23);
    lVar10 = param_2[0x2e];
    if (lVar10 != 0) {
      lVar22 = lVar10;
      if (lVar10 != param_2[0x2f]) {
        lVar22 = param_2[0x2f];
        do {
          lVar26 = lVar22 + -0x68;
          func_0x0cc13b10(lVar22 + -0x58);
          if ((ulong)*(uint *)(lVar22 + -0x60) != 0xffffffff) {
            (**(code **)(&UNK_0f3f5cd0 + (ulong)*(uint *)(lVar22 + -0x60) * 8))
                      (&ppppppplStack_88,lVar26);
          }
          *(undefined4 *)(lVar22 + -0x60) = 0xffffffff;
          lVar22 = lVar26;
        } while (lVar26 != lVar10);
        lVar22 = param_2[0x2e];
      }
      param_2[0x2f] = lVar10;
      func_0x0412a280(lVar22,param_2[0x30] - lVar22);
      param_2[0x2e] = 0;
      param_2[0x2f] = 0;
      param_2[0x30] = 0;
    }
    lVar10 = param_3[0x2f];
    param_2[0x2e] = param_3[0x2e];
    param_2[0x2f] = lVar10;
    param_2[0x30] = param_3[0x30];
    param_3[0x2e] = 0;
    param_3[0x2f] = 0;
    param_3[0x30] = 0;
    func_0x0cca3300(param_2 + 0x31,param_3 + 0x31);
    break;
  case 2:
    *param_2 = *param_3;
    if (((ulong)param_2[1] >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_2[1] & 0xff00ffffffffffffU) - 8);
    }
    param_2[1] = 0;
    uVar18 = param_3[1];
    if ((uVar18 & 0x80000000000000) == 0) {
      param_2[1] = uVar18;
      uVar18 = param_2[2];
      if ((uVar18 & 0x80000000000000) == 0) goto code_r0x0cca2002;
code_r0x0cca21e2:
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar18 & 0xff00ffffffffffff) - 8);
      param_2[2] = 0;
      uVar18 = param_3[2];
    }
    else {
      lVar10 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar22 = lVar10 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar22,8);
      if (plVar15 == (long *)0x0 && lVar22 != 0) {
        func_0x0eec74c0(lVar22,8);
      }
      *plVar15 = lVar10;
      func_0x0eee2f00(plVar15 + 1,uVar18 & 0xff00ffffffffffff,lVar10);
      *(undefined1 *)((long)plVar15 + lVar10 + 8) = 0;
      param_2[1] = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      uVar18 = param_2[2];
      if ((uVar18 & 0x80000000000000) != 0) goto code_r0x0cca21e2;
code_r0x0cca2002:
      param_2[2] = 0;
      uVar18 = param_3[2];
    }
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar10 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar22 = lVar10 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar22,8);
      if (plVar15 == (long *)0x0 && lVar22 != 0) {
        func_0x0eec74c0(lVar22,8);
      }
      *plVar15 = lVar10;
      func_0x0eee2f00(plVar15 + 1,uVar18 & 0xff00ffffffffffff,lVar10);
      *(undefined1 *)((long)plVar15 + lVar10 + 8) = 0;
      uVar18 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    param_2[2] = uVar18;
    param_2[3] = param_3[3];
    if ((param_2[4] & 0x80000000000000U) == 0) {
      param_2[4] = 0;
      uVar18 = param_3[4];
      if ((uVar18 & 0x80000000000000) == 0) goto code_r0x0cca22ad;
code_r0x0cca2301:
      lVar10 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar22 = lVar10 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar22,8);
      if (plVar15 == (long *)0x0 && lVar22 != 0) {
        func_0x0eec74c0(lVar22,8);
      }
      *plVar15 = lVar10;
      func_0x0eee2f00(plVar15 + 1,uVar18 & 0xff00ffffffffffff,lVar10);
      *(undefined1 *)((long)plVar15 + lVar10 + 8) = 0;
      param_2[4] = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      uVar18 = param_2[5];
      if ((uVar18 & 0x80000000000000) != 0) goto code_r0x0cca238e;
code_r0x0cca22be:
      param_2[5] = 0;
      uVar18 = param_3[5];
    }
    else {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_2[4] & 0xff00ffffffffffffU) - 8);
      param_2[4] = 0;
      uVar18 = param_3[4];
      if ((uVar18 & 0x80000000000000) != 0) goto code_r0x0cca2301;
code_r0x0cca22ad:
      param_2[4] = uVar18;
      uVar18 = param_2[5];
      if ((uVar18 & 0x80000000000000) == 0) goto code_r0x0cca22be;
code_r0x0cca238e:
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar18 & 0xff00ffffffffffff) - 8);
      param_2[5] = 0;
      uVar18 = param_3[5];
    }
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar10 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar22 = lVar10 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar22,8);
      if (plVar15 == (long *)0x0 && lVar22 != 0) {
        func_0x0eec74c0(lVar22,8);
      }
      *plVar15 = lVar10;
      func_0x0eee2f00(plVar15 + 1,uVar18 & 0xff00ffffffffffff,lVar10);
      *(undefined1 *)((long)plVar15 + lVar10 + 8) = 0;
      uVar18 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    param_2[5] = uVar18;
    *(int *)(param_2 + 6) = (int)param_3[6];
    *(undefined2 *)((long)param_2 + 0x34) = *(undefined2 *)((long)param_3 + 0x34);
    param_2[7] = param_3[7];
    if ((param_2[8] & 0x80000000000000U) == 0) {
      param_2[8] = 0;
      uVar18 = param_3[8];
      if ((uVar18 & 0x80000000000000) == 0) goto code_r0x0cca2469;
code_r0x0cca24bd:
      lVar10 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar22 = lVar10 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar22,8);
      if (plVar15 == (long *)0x0 && lVar22 != 0) {
        func_0x0eec74c0(lVar22,8);
      }
      *plVar15 = lVar10;
      func_0x0eee2f00(plVar15 + 1,uVar18 & 0xff00ffffffffffff,lVar10);
      *(undefined1 *)((long)plVar15 + lVar10 + 8) = 0;
      param_2[8] = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      uVar18 = param_2[9];
      if ((uVar18 & 0x80000000000000) != 0) goto code_r0x0cca254a;
code_r0x0cca247a:
      param_2[9] = 0;
      uVar18 = param_3[9];
    }
    else {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_2[8] & 0xff00ffffffffffffU) - 8);
      param_2[8] = 0;
      uVar18 = param_3[8];
      if ((uVar18 & 0x80000000000000) != 0) goto code_r0x0cca24bd;
code_r0x0cca2469:
      param_2[8] = uVar18;
      uVar18 = param_2[9];
      if ((uVar18 & 0x80000000000000) == 0) goto code_r0x0cca247a;
code_r0x0cca254a:
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar18 & 0xff00ffffffffffff) - 8);
      param_2[9] = 0;
      uVar18 = param_3[9];
    }
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar10 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar22 = lVar10 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar22,8);
      if (plVar15 == (long *)0x0 && lVar22 != 0) {
        func_0x0eec74c0(lVar22,8);
      }
      *plVar15 = lVar10;
      func_0x0eee2f00(plVar15 + 1,uVar18 & 0xff00ffffffffffff,lVar10);
      *(undefined1 *)((long)plVar15 + lVar10 + 8) = 0;
      uVar18 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    param_2[9] = uVar18;
    func_0x0cbb58c0(param_2 + 10,param_3 + 10);
    if (param_2 == param_3) {
      return param_3;
    }
    *(int *)(param_2 + 0x27) = (int)param_3[0x27];
    func_0x08d5c860(param_2 + 0x23,param_3[0x25],0);
    func_0x04ab5020(param_2 + 0x28,param_3[0x28],param_3[0x29],
                    (param_3[0x29] - param_3[0x28] >> 3) * -0x3333333333333333);
    func_0x0cca34a0(param_2 + 0x2b,param_3[0x2b],param_3[0x2c],param_3[0x2c] - param_3[0x2b] >> 4);
    ppppppplVar23 = (long *******)(param_2 + 0x2e);
    ppppppplVar12 = (long *******)param_3[0x2e];
    ppppppplVar2 = (long *******)param_3[0x2f];
    uVar18 = (long)ppppppplVar2 - (long)ppppppplVar12;
    ppppppplVar11 = (long *******)param_2[0x2e];
    lVar10 = param_2[0x30];
    uVar20 = lVar10 - (long)ppppppplVar11;
    if (uVar18 <= uVar20) {
      ppppppplVar25 = (long *******)param_2[0x2f];
      uVar20 = (long)ppppppplVar25 - (long)ppppppplVar11;
      if (uVar20 < uVar18) {
        lVar10 = (long)ppppppplVar25 - (long)ppppppplVar11;
        ppppppplStack_68 = ppppppplVar23;
        if (lVar10 != 0) {
          uVar18 = (long)ppppppplVar11 - (long)ppppppplVar25;
          lVar22 = 0;
          lStack_40 = lVar10;
          uStack_38 = uVar20;
          do {
            if (ppppppplVar12 != ppppppplVar11) {
              ppppppplStack_88 = (long *******)(lVar22 + (long)ppppppplVar11);
              uVar20 = (ulong)*(uint *)((long)ppppppplVar12 + lVar22 + 8);
              ppppppplStack_80 = ppppppplStack_88;
              if (uVar20 == 0xffffffff) goto code_r0x0cca29c5;
              ppppppplStack_60 = (long *******)&ppppppplStack_88;
              (**(code **)(&UNK_0f2bc850 + uVar20 * 8))
                        (&ppppppplStack_60,(long)ppppppplVar12 + lVar22);
              *(undefined4 *)((long)ppppppplVar11 + lVar22 + 0x30) =
                   *(undefined4 *)((long)ppppppplVar12 + lVar22 + 0x30);
              func_0x08d5c860((long)ppppppplVar11 + lVar22 + 0x10,
                              *(undefined8 *)((long)ppppppplVar12 + lVar22 + 0x20),0);
              lVar10 = *(long *)((long)ppppppplVar12 + lVar22 + 0x38);
              lVar26 = *(long *)((long)ppppppplVar12 + lVar22 + 0x40);
              func_0x04ab5020((long)ppppppplVar11 + lVar22 + 0x38,lVar10,lVar26,
                              (lVar26 - lVar10 >> 3) * -0x3333333333333333);
              lVar10 = *(long *)((long)ppppppplVar12 + lVar22 + 0x50);
              lVar26 = *(long *)((long)ppppppplVar12 + lVar22 + 0x58);
              func_0x0cca34a0((long)ppppppplVar11 + lVar22 + 0x50,lVar10,lVar26,lVar26 - lVar10 >> 4
                             );
            }
            lVar22 = lVar22 + 0x68;
          } while (uVar18 + lVar22 != 0);
          ppppppplVar25 = (long *******)param_2[0x2f];
          uVar20 = uStack_38;
          lVar10 = lStack_40;
        }
        ppppppplStack_88 = ppppppplStack_68;
        ppppppplStack_80 = (long *******)&ppppppplStack_50;
        ppppppplStack_78 = (long *******)&ppppppplStack_90;
        uStack_70 = 0;
        ppppppplVar11 = ppppppplVar25;
        ppppppplStack_50 = ppppppplVar25;
        if ((long *******)(uVar20 + (long)ppppppplVar12) != ppppppplVar2) {
          ppppppplVar12 = (long *******)((long)ppppppplVar12 + lVar10 + 0x10);
          do {
            *ppppppplVar11 = (long ******)0x0;
            *(undefined4 *)(ppppppplVar11 + 1) = 0;
            ppppppplStack_90 = ppppppplVar11;
            if (ppppppplVar12 + -2 != ppppppplVar11) {
              ppppppplStack_60 = ppppppplVar11;
              ppppppplStack_58 = ppppppplVar11;
              if ((ulong)*(uint *)(ppppppplVar12 + -1) == 0xffffffff) goto code_r0x0cca2fa8;
              ppppppplStack_48 = (long *******)&ppppppplStack_60;
              (**(code **)(&UNK_0f2bc850 + (ulong)*(uint *)(ppppppplVar12 + -1) * 8))
                        (&ppppppplStack_48);
            }
            func_0x0cc13980(ppppppplVar11 + 2,ppppppplVar12);
            ppppppplVar11 = ppppppplStack_90 + 0xd;
            ppppppplVar23 = ppppppplVar12 + 0xb;
            ppppppplVar12 = ppppppplVar12 + 0xd;
          } while (ppppppplVar23 != ppppppplVar2);
        }
        param_2[0x2f] = (long)ppppppplVar11;
        ppppppplStack_90 = ppppppplVar11;
      }
      else {
        ppppppplStack_68 = ppppppplVar23;
        if (ppppppplVar12 != ppppppplVar2) {
          uVar18 = 0;
          do {
            if (ppppppplVar12 != ppppppplVar11) {
              ppppppplStack_88 = (long *******)((long)ppppppplVar11 + uVar18);
              uVar20 = (ulong)*(uint *)((long)ppppppplVar12 + uVar18 + 8);
              ppppppplStack_80 = ppppppplStack_88;
              if (uVar20 == 0xffffffff) goto code_r0x0cca29c5;
              ppppppplStack_60 = (long *******)&ppppppplStack_88;
              (**(code **)(&UNK_0f2bc850 + uVar20 * 8))
                        (&ppppppplStack_60,(long)ppppppplVar12 + uVar18);
              *(undefined4 *)((long)ppppppplVar11 + uVar18 + 0x30) =
                   *(undefined4 *)((long)ppppppplVar12 + uVar18 + 0x30);
              func_0x08d5c860(uVar18 + 0x10 + (long)ppppppplVar11,
                              *(undefined8 *)((long)ppppppplVar12 + uVar18 + 0x20),0);
              lVar10 = *(long *)((long)ppppppplVar12 + uVar18 + 0x38);
              lVar22 = *(long *)((long)ppppppplVar12 + uVar18 + 0x40);
              func_0x04ab5020(uVar18 + 0x38 + (long)ppppppplVar11,lVar10,lVar22,
                              (lVar22 - lVar10 >> 3) * -0x3333333333333333);
              lVar10 = *(long *)((long)ppppppplVar12 + uVar18 + 0x50);
              lVar22 = *(long *)((long)ppppppplVar12 + uVar18 + 0x58);
              func_0x0cca34a0(uVar18 + 0x50 + (long)ppppppplVar11,lVar10,lVar22,lVar22 - lVar10 >> 4
                             );
            }
            lVar10 = uVar18 + 0x68;
            uVar18 = uVar18 + 0x68;
          } while ((long *******)((long)ppppppplVar12 + lVar10) != ppppppplVar2);
          ppppppplVar25 = (long *******)param_2[0x2f];
          ppppppplVar11 = (long *******)((long)ppppppplVar11 + uVar18);
        }
        if (ppppppplVar11 != ppppppplVar25) {
          do {
            ppppppplVar23 = ppppppplVar25 + -0xd;
            func_0x0cc13b10(ppppppplVar25 + -0xb);
            if ((ulong)*(uint *)(ppppppplVar25 + -0xc) != 0xffffffff) {
              (**(code **)(&UNK_0f3f5cd0 + (ulong)*(uint *)(ppppppplVar25 + -0xc) * 8))
                        (&ppppppplStack_88,ppppppplVar23);
            }
            *(undefined4 *)(ppppppplVar25 + -0xc) = 0xffffffff;
            ppppppplVar25 = ppppppplVar23;
          } while (ppppppplVar23 != ppppppplVar11);
        }
        param_2[0x2f] = (long)ppppppplVar11;
      }
      goto code_r0x0cca2cc2;
    }
    if (ppppppplVar11 != (long *******)0x0) {
      ppppppplVar25 = (long *******)param_2[0x2f];
      ppppppplVar21 = ppppppplVar11;
      ppppppplStack_68 = ppppppplVar23;
      if (ppppppplVar11 != ppppppplVar25) {
        do {
          ppppppplVar23 = ppppppplVar25 + -0xd;
          func_0x0cc13b10(ppppppplVar25 + -0xb);
          if ((ulong)*(uint *)(ppppppplVar25 + -0xc) != 0xffffffff) {
            (**(code **)(&UNK_0f3f5cd0 + (ulong)*(uint *)(ppppppplVar25 + -0xc) * 8))
                      (&ppppppplStack_88,ppppppplVar23);
          }
          *(undefined4 *)(ppppppplVar25 + -0xc) = 0xffffffff;
          ppppppplVar25 = ppppppplVar23;
        } while (ppppppplVar23 != ppppppplVar11);
        goto code_r0x0cca29ca;
      }
      goto code_r0x0cca29e0;
    }
    goto code_r0x0cca2a04;
  case 3:
    if (param_2 != param_3) {
      param_3 = (long *)0x0;
    }
    break;
  case 4:
    param_3[2] = (long)FUN_0cca1ec0;
    *(undefined4 *)(param_3 + 4) = 0x8f63ee73;
    param_3[3] = (long)&UNK_0cca30d0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
    if (lVar10 == 0) {
      func_0x0eec74c0(0x1b0,0);
    }
    func_0x0cca4140(lVar10,param_2);
    *param_3 = lVar10;
  default:
    param_3 = (long *)0x0;
  }
  return param_3;
code_r0x0cca29c5:
  ppppppplStack_88 = ppppppplStack_80;
  func_0x04931450();
code_r0x0cca29ca:
  ppppppplVar21 = (long *******)param_2[0x2e];
  uVar20 = param_2[0x30] - (long)ppppppplVar21;
code_r0x0cca29e0:
  param_2[0x2f] = (long)ppppppplVar11;
  func_0x0412a280(ppppppplVar21,uVar20);
  *ppppppplStack_68 = (long ******)0x0;
  ppppppplStack_68[1] = (long ******)0x0;
  ppppppplStack_68[2] = (long ******)0x0;
  lVar10 = 0;
  ppppppplVar23 = ppppppplStack_68;
code_r0x0cca2a04:
  pbVar19 = (byte *)(((long)uVar18 >> 3) * 0x4ec4ec4ec4ec4ec5);
  ppppppplVar25 = ppppppplVar23;
  if (pbVar19 < (byte *)0x276276276276277) {
    pbVar5 = (byte *)((lVar10 >> 3) * -0x6276276276276276);
    if (pbVar19 < pbVar5) {
      pbVar19 = pbVar5;
    }
    if (0x13b13b13b13b13a < (ulong)((lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      pbVar19 = (byte *)0x276276276276276;
    }
    if (pbVar19 < (byte *)0x276276276276277) {
      ppppppplVar11 =
           (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar19 * 0x68);
      if (ppppppplVar11 == (long *******)0x0) {
        func_0x0eec74c0((long)pbVar19 * 0x68,0);
      }
      param_2[0x2e] = (long)ppppppplVar11;
      param_2[0x2f] = (long)ppppppplVar11;
      param_2[0x30] = (long)(ppppppplVar11 + (long)pbVar19 * 0xd);
      ppppppplStack_80 = (long *******)&ppppppplStack_50;
      ppppppplStack_78 = (long *******)&ppppppplStack_90;
      uStack_70 = 0;
      ppppppplStack_88 = ppppppplVar23;
      ppppppplStack_50 = ppppppplVar11;
      if (ppppppplVar12 == ppppppplVar2) {
        param_2[0x2f] = (long)ppppppplVar11;
        ppppppplStack_90 = ppppppplVar11;
      }
      else {
        ppppppplVar25 = (long *******)&ppppppplStack_48;
        ppppppplVar12 = ppppppplVar12 + 2;
        ppppppplStack_68 = ppppppplVar11;
        do {
          *ppppppplVar11 = (long ******)0x0;
          *(undefined4 *)(ppppppplVar11 + 1) = 0;
          ppppppplStack_90 = ppppppplVar11;
          if (ppppppplVar12 + -2 != ppppppplVar11) {
            ppppppplStack_60 = ppppppplVar11;
            ppppppplStack_58 = ppppppplVar11;
            if ((ulong)*(uint *)(ppppppplVar12 + -1) == 0xffffffff) {
              func_0x04931450();
code_r0x0cca2fa8:
              pbVar19 = &UNK_0f2bc850;
              func_0x04931450();
              goto code_r0x0cca2fad;
            }
            ppppppplStack_48 = (long *******)&ppppppplStack_60;
            (**(code **)(&UNK_0f2bc850 + (ulong)*(uint *)(ppppppplVar12 + -1) * 8))(ppppppplVar25);
          }
          func_0x0cc13980(ppppppplVar11 + 2,ppppppplVar12);
          ppppppplVar11 = ppppppplStack_90 + 0xd;
          ppppppplVar23 = ppppppplVar12 + 0xb;
          ppppppplVar12 = ppppppplVar12 + 0xd;
        } while (ppppppplVar23 != ppppppplVar2);
        param_2[0x2f] = (long)ppppppplVar11;
        ppppppplStack_90 = ppppppplVar11;
      }
code_r0x0cca2cc2:
      ppppppplVar23 = (long *******)(param_2 + 0x31);
      *(int *)(param_2 + 0x35) = (int)param_3[0x35];
      puVar17 = (undefined8 *)param_3[0x33];
      if (param_2[0x32] != 0) {
        memset(param_2[0x31],0,param_2[0x32] << 3);
        puVar24 = (undefined8 *)param_2[0x33];
        param_2[0x33] = 0;
        param_2[0x34] = 0;
        while (puVar24 != (undefined8 *)0x0) {
          if (puVar17 == (undefined8 *)0x0) {
            do {
              puVar17 = (undefined8 *)*puVar24;
              func_0x0b69a770(puVar24 + 5);
              if ((*(byte *)(puVar24 + 2) & 1) != 0) {
                func_0x0412a280(puVar24[4],puVar24[2] & 0xfffffffffffffffe);
              }
              func_0x0412a280(puVar24,0xa8);
              puVar24 = puVar17;
            } while (puVar17 != (undefined8 *)0x0);
            return param_3;
          }
          if (puVar24 != puVar17) {
            pbVar19 = (byte *)(puVar24 + 2);
            bVar1 = *(byte *)(puVar17 + 2);
            if ((*pbVar19 & 1) == 0) {
              if ((bVar1 & 1) == 0) {
                puVar24[4] = puVar17[4];
                uVar6 = *(undefined4 *)((long)puVar17 + 0x14);
                uVar7 = *(undefined4 *)(puVar17 + 3);
                uVar8 = *(undefined4 *)((long)puVar17 + 0x1c);
                *(undefined4 *)pbVar19 = *(undefined4 *)(puVar17 + 2);
                *(undefined4 *)((long)puVar24 + 0x14) = uVar6;
                *(undefined4 *)(puVar24 + 3) = uVar7;
                *(undefined4 *)((long)puVar24 + 0x1c) = uVar8;
              }
              else {
                func_0x04885070(pbVar19,puVar17[4],puVar17[3]);
              }
            }
            else {
              bVar27 = (bVar1 & 1) != 0;
              lVar10 = (long)puVar17 + 0x11;
              if (bVar27) {
                lVar10 = puVar17[4];
              }
              uVar18 = (ulong)(bVar1 >> 1);
              if (bVar27) {
                uVar18 = puVar17[3];
              }
              FUN_04885120(pbVar19,lVar10,uVar18);
            }
          }
          func_0x0cc30750(puVar24 + 5,puVar17 + 5);
          puVar3 = (undefined8 *)*puVar24;
          func_0x0cca37f0(ppppppplVar23,puVar24);
          puVar17 = (undefined8 *)*puVar17;
          puVar24 = puVar3;
        }
      }
      if (puVar17 == (undefined8 *)0x0) {
        return param_3;
      }
      do {
        ppppppplVar12 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
        if (ppppppplVar12 == (long *******)0x0) {
          func_0x0eec74c0(0xa8,0);
        }
        ppppppplStack_78 = (long *******)0x0;
        *ppppppplVar12 = (long ******)0x0;
        ppppppplVar12[1] = (long ******)0x0;
        ppppppplStack_88 = ppppppplVar12;
        ppppppplStack_80 = ppppppplVar23;
        if ((*(byte *)(puVar17 + 2) & 1) == 0) {
          ppppppplVar12[4] = (long ******)puVar17[4];
          uVar6 = *(undefined4 *)((long)puVar17 + 0x14);
          uVar7 = *(undefined4 *)(puVar17 + 3);
          uVar8 = *(undefined4 *)((long)puVar17 + 0x1c);
          *(undefined4 *)(ppppppplVar12 + 2) = *(undefined4 *)(puVar17 + 2);
          *(undefined4 *)((long)ppppppplVar12 + 0x14) = uVar6;
          *(undefined4 *)(ppppppplVar12 + 3) = uVar7;
          *(undefined4 *)((long)ppppppplVar12 + 0x1c) = uVar8;
        }
        else {
          func_0x0412e5e0(ppppppplVar12 + 2,puVar17[4],puVar17[3]);
        }
        func_0x0b6a5920(ppppppplVar12 + 5,puVar17 + 5);
        ppppppplStack_78 = (long *******)CONCAT71(ppppppplStack_78._1_7_,1);
        bVar27 = (*(byte *)(ppppppplVar12 + 2) & 1) != 0;
        pppppplVar13 = (long ******)((long)ppppppplVar12 + 0x11);
        if (bVar27) {
          pppppplVar13 = ppppppplVar12[4];
        }
        pppppplVar16 = (long ******)(ulong)(*(byte *)(ppppppplVar12 + 2) >> 1);
        if (bVar27) {
          pppppplVar16 = ppppppplVar12[3];
        }
        pppppplVar13 = (long ******)func_0x04883620(&ppppppplStack_60,pppppplVar13,pppppplVar16);
        ppppppplVar12[1] = pppppplVar13;
        func_0x0cca37f0(ppppppplVar23,ppppppplStack_88);
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 != (undefined8 *)0x0);
      return param_3;
    }
  }
code_r0x0cca2fad:
  uVar14 = func_0x0cc84ea0();
  func_0x0412a280(ppppppplVar12,0x1b0);
  uVar14 = func_0x0eee2d70(uVar14);
  func_0x0b5be430(ppppppplVar11);
  func_0x0cc84eb0(&ppppppplStack_88);
  param_2[0x2f] = (long)ppppppplVar25;
  uVar14 = func_0x0eee2d70(uVar14);
  func_0x04108700(uVar14);
  func_0x0cca3440(ppppppplVar25);
  uVar14 = func_0x04108a60();
  func_0x04a8b170(ppppppplVar11);
  func_0x0cc84eb0(&ppppppplStack_88);
  param_2[0x2f] = (long)ppppppplStack_68;
  uVar14 = func_0x0eee2d70(uVar14);
  uVar14 = func_0x04882e20(uVar14);
  func_0x04108910();
  uVar14 = func_0x0eee2d70(uVar14);
  uVar14 = func_0x04882e20(uVar14);
  if ((*pbVar19 & 1) != 0) {
    func_0x0412a280(ppppppplVar11[4],(ulong)ppppppplVar11[2] & 0xfffffffffffffffe);
    func_0x0c0ddaf0(&ppppppplStack_88);
    uVar14 = func_0x0eee2d70(uVar14);
    uVar14 = func_0x04882e20(uVar14);
  }
  func_0x0c0ddaf0(&ppppppplStack_88);
  func_0x0eee2d70(uVar14);
  pcVar4 = (code *)swi(3);
  plVar15 = (long *)(*pcVar4)();
  return plVar15;
}


