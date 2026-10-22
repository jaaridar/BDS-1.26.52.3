/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52bd680 (ELF vaddr 0x51bd680)
 * Label: callee-of:0x5188b10
 * Body:  [[052bd680, 052bdacb] [0eee2ee0, 0eee2ee5]]
 * Ghidra: FUN_052bd680
 */


/* WARNING: Possible PIC construction at 0x052bd7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052bd9db: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x052bd7ad) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_052bd680(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  
  lVar24 = *param_1;
  puVar17 = (undefined8 *)param_1[1];
  if (param_1[2] - (long)puVar17 >> 3 < (long)param_5) {
    uVar14 = ((long)puVar17 - lVar24 >> 3) + param_5;
    if (uVar14 >> 0x3d == 0) {
      uVar19 = param_1[2] - lVar24;
      uVar22 = (long)uVar19 >> 2;
      if (uVar22 <= uVar14) {
        uVar22 = uVar14;
      }
      if (0x7ffffffffffffff7 < uVar19) {
        uVar22 = 0x1fffffffffffffff;
      }
      if (uVar22 == 0) {
        lVar15 = 0;
      }
      else {
        if (0x1fffffffffffffff < uVar22) goto LAB_052bdac6;
        lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22 * 8);
        if (lVar15 == 0) {
          lVar15 = 0;
          func_0x0eec74c0(uVar22 * 8,0);
        }
      }
      lVar23 = (long)param_2 - lVar24;
      puVar18 = (undefined8 *)(lVar15 + uVar22 * 8);
      lVar15 = lVar15 + lVar23;
      func_0x0eee2f00(lVar15,param_3,param_5 * 8);
      lVar1 = lVar15 + param_5 * 8;
      func_0x0eee2f00(lVar1,param_2,(long)puVar17 - (long)param_2);
      param_1[1] = (long)param_2;
      lVar15 = lVar15 + (lVar23 >> 3) * -8;
      func_0x0eee2f00(lVar15,lVar24,lVar23);
      *param_1 = lVar15;
      param_1[1] = ((long)puVar17 - (long)param_2) + lVar1;
      param_1[2] = (long)puVar18;
      if (lVar24 == 0) {
        return puVar18;
      }
      if (lVar24 != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar24);
      }
      return puVar18;
    }
    func_0x052a3b00();
LAB_052bdac6:
    func_0x04882eb0();
    pcVar4 = (code *)swi(3);
    puVar17 = (undefined8 *)(*pcVar4)();
    return puVar17;
  }
  lVar24 = (long)puVar17 - (long)param_2;
  if (lVar24 >> 3 < (long)param_5) {
    lVar15 = param_4 - ((long)param_3 + lVar24);
    puVar18 = (undefined8 *)((long)param_3 + lVar24);
    puVar21 = puVar17;
    if (lVar15 != 0) goto SUB_0eee2ee0;
    param_1[1] = (long)puVar17;
    if (lVar24 >> 3 < 1) {
      return param_3;
    }
    puVar16 = param_2 + param_5;
    puVar18 = puVar17 + -param_5;
    if (puVar18 < puVar17) {
      puVar20 = (undefined8 *)((long)param_2 + (param_4 - (long)(param_3 + param_5)) + 8);
      if (puVar20 < puVar17) {
        puVar20 = puVar17;
      }
      uVar14 = (~param_4 + (long)puVar20 + (long)param_3 + param_5 * 8) - (long)param_2;
      if (3 < param_5 && 0x37 < uVar14) {
        uVar22 = (uVar14 >> 3) + 1;
        uVar19 = uVar22 & 0xfffffffffffffffc;
        puVar18 = puVar18 + uVar19;
        puVar21 = puVar17 + uVar19;
        lVar15 = (param_4 + 0x10) - (long)param_3;
        lVar1 = param_5 * -8 + ((param_4 + 0x10) - (long)param_3);
        uVar14 = 0;
        do {
          puVar3 = (undefined4 *)((long)param_2 + uVar14 * 8 + lVar1 + -0x10);
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar7 = puVar3[3];
          puVar2 = (undefined4 *)((long)param_2 + uVar14 * 8 + lVar1);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          puVar2 = (undefined4 *)((long)param_2 + uVar14 * 8 + lVar15 + -0x10);
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2 = (undefined4 *)((long)param_2 + uVar14 * 8 + lVar15);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          uVar14 = uVar14 + 4;
        } while (uVar19 != uVar14);
        if (uVar22 == uVar19) goto LAB_052bda73;
      }
      do {
        *puVar21 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar21 = puVar21 + 1;
      } while (puVar18 < puVar17);
    }
LAB_052bda73:
    param_1[1] = (long)puVar21;
    if (puVar17 != puVar16) {
      puVar16 = (undefined8 *)func_0x0eee2ee0(puVar16,param_2);
    }
    lVar15 = lVar24;
    puVar18 = param_3;
    puVar21 = param_2;
    if (puVar17 == param_2) {
      return puVar16;
    }
    goto SUB_0eee2ee0;
  }
  puVar18 = puVar17 + -param_5;
  puVar21 = puVar17;
  if (puVar18 < puVar17) {
    puVar16 = puVar17 + (1 - param_5);
    if (puVar17 + (1 - param_5) < puVar17) {
      puVar16 = puVar17;
    }
    uVar14 = (long)puVar16 + ~(ulong)puVar17 + param_5 * 8;
    if (3 < param_5 && 0x37 < uVar14) {
      uVar14 = (uVar14 >> 3) + 1;
      uVar22 = uVar14 & 0xfffffffffffffffc;
      puVar18 = puVar18 + uVar22;
      puVar21 = puVar17 + uVar22;
      uVar19 = 0;
      do {
        puVar20 = puVar17 + (uVar19 - param_5);
        uVar5 = *(undefined4 *)((long)puVar20 + 4);
        uVar6 = *(undefined4 *)(puVar20 + 1);
        uVar7 = *(undefined4 *)((long)puVar20 + 0xc);
        uVar12 = puVar17[(uVar19 + 2) - param_5];
        uVar13 = (puVar17 + ((uVar19 + 2) - param_5))[1];
        puVar16 = puVar17 + uVar19;
        *(undefined4 *)puVar16 = *(undefined4 *)puVar20;
        *(undefined4 *)((long)puVar16 + 4) = uVar5;
        *(undefined4 *)(puVar16 + 1) = uVar6;
        *(undefined4 *)((long)puVar16 + 0xc) = uVar7;
        puVar17[uVar19 + 2] = uVar12;
        (puVar17 + uVar19 + 2)[1] = uVar13;
        uVar19 = uVar19 + 4;
      } while (uVar22 != uVar19);
      if (uVar14 == uVar22) goto LAB_052bd9c3;
    }
    do {
      *puVar21 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar21 = puVar21 + 1;
    } while (puVar18 < puVar17);
  }
LAB_052bd9c3:
  param_1[1] = (long)puVar21;
  lVar15 = param_5 * 8;
  puVar18 = param_3;
  puVar21 = param_2;
  if (puVar17 != param_2 + param_5) {
    lVar15 = (long)puVar17 - (long)(param_2 + param_5);
    puVar18 = param_2;
    puVar21 = (undefined8 *)((long)puVar17 - lVar15);
  }
SUB_0eee2ee0:
  puVar17 = (undefined8 *)(*(code *)PTR_memmove_0f546508)(puVar21,puVar18,lVar15);
  return puVar17;
}


