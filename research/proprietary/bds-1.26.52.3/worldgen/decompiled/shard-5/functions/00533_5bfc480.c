/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cfc480 (ELF vaddr 0x5bfc480)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cfc480, 05cfc973]]
 * Ghidra: FUN_05cfc480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_05cfc480(ulong *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined2 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  ulong uVar23;
  undefined2 *puVar24;
  long lStack_58;
  undefined2 *puStack_50;
  undefined2 *puStack_48;
  undefined2 *puStack_40;
  ulong *puStack_38;
  
  puVar13 = (undefined2 *)param_1[1];
  if (puVar13 < (undefined2 *)param_1[2]) {
    uVar3 = *param_3;
    if (param_2 == puVar13) {
      *puVar13 = uVar3;
      param_1[1] = (ulong)(puVar13 + 1);
      return param_2;
    }
    puVar21 = puVar13 + -1;
    puVar17 = puVar13;
    if (puVar21 < puVar13) {
      puVar17 = puVar13 + 1;
      *puVar13 = *puVar21;
    }
    param_1[1] = (ulong)puVar17;
    if (puVar13 == param_2 + 1) goto LAB_05cfc6e5;
    uVar18 = (long)puVar13 + (-4 - (long)param_2);
    if (5 < uVar18) {
      uVar15 = (uVar18 >> 1) + 1;
      if (uVar18 < 0x1e) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar15 & 0xfffffffffffffff0;
        lVar19 = 0;
        do {
          uVar12 = *(undefined8 *)(puVar13 + lVar19 + -0x11);
          uVar8 = *(undefined8 *)((long)(puVar13 + lVar19 + -0x11) + 8);
          uVar9 = *(undefined8 *)((long)(puVar13 + lVar19 + -9) + 8);
          *(undefined8 *)(puVar13 + lVar19 + -8) = *(undefined8 *)(puVar13 + lVar19 + -9);
          *(undefined8 *)((long)(puVar13 + lVar19 + -8) + 8) = uVar9;
          *(undefined8 *)(puVar13 + lVar19 + -0x10) = uVar12;
          *(undefined8 *)((long)(puVar13 + lVar19 + -0x10) + 8) = uVar8;
          lVar19 = lVar19 + -0x10;
        } while (-lVar19 != uVar18);
        if (uVar15 == uVar18) goto LAB_05cfc6e5;
        if ((uVar15 & 0xc) == 0) {
          puVar13 = puVar13 + -uVar18;
          puVar21 = puVar21 + -uVar18;
          goto LAB_05cfc6d0;
        }
      }
      uVar23 = uVar15 & 0xfffffffffffffffc;
      puVar21 = puVar21 + -uVar23;
      lVar19 = -uVar18;
      do {
        *(undefined8 *)(puVar13 + lVar19 + -4) = *(undefined8 *)(puVar13 + lVar19 + -5);
        lVar19 = lVar19 + -4;
      } while (-lVar19 != uVar23);
      puVar13 = puVar13 + -uVar23;
      if (uVar15 == uVar23) goto LAB_05cfc6e5;
    }
LAB_05cfc6d0:
    do {
      puVar17 = puVar21 + -1;
      puVar21 = puVar21 + -1;
      puVar13[-1] = *puVar17;
      puVar13 = puVar13 + -1;
    } while (puVar21 != param_2);
LAB_05cfc6e5:
    *param_2 = uVar3;
    return param_2;
  }
  puVar21 = (undefined2 *)*param_1;
  lVar19 = (long)puVar13 - (long)puVar21 >> 1;
  if (lVar19 < -1) {
    func_0x05cfc9c0();
LAB_05cfc959:
    uVar12 = FUN_04882eb0();
    func_0x05cfc980(&lStack_58);
    func_0x0eee2d70(uVar12);
    pcVar4 = (code *)swi(3);
    puVar13 = (undefined2 *)(*pcVar4)();
    return puVar13;
  }
  uVar18 = lVar19 + 1;
  uVar15 = (long)param_1[2] - (long)puVar21;
  if (uVar18 < uVar15) {
    uVar18 = uVar15;
  }
  uVar23 = 0x7fffffffffffffff;
  if (uVar15 < 0x7ffffffffffffffe) {
    uVar23 = uVar18;
  }
  puStack_38 = param_1;
  if (uVar23 == 0) {
    lVar19 = 0;
    lVar10 = 0;
  }
  else {
    if ((long)uVar23 < 0) goto LAB_05cfc959;
    lVar19 = uVar23 * 2;
    lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
    if (lVar10 == 0) {
      lVar10 = 0;
      func_0x0eec74c0(lVar19,0);
    }
  }
  lVar16 = (long)param_2 - (long)puVar21;
  puStack_50 = (undefined2 *)(lVar10 + lVar16);
  puVar17 = (undefined2 *)(lVar19 + lVar10);
  puVar11 = puStack_50;
  lStack_58 = lVar10;
  puStack_48 = puStack_50;
  puStack_40 = puVar17;
  if (lVar16 == lVar19) {
    if (param_2 == puVar21) {
      puVar11 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,2);
      if (puVar11 == (undefined2 *)0x0) {
        func_0x0eec74c0(2,0);
      }
      puVar17 = puVar11 + 1;
      if (lVar10 != 0) {
        func_0x0412a280(lVar10,lVar16);
        puVar13 = (undefined2 *)param_1[1];
      }
    }
    else {
      puVar11 = (undefined2 *)
                ((long)puStack_50 -
                (((lVar16 >> 1) - ((lVar16 >> 1) + 1 >> 0x3f)) + 1U & 0xfffffffffffffffe));
    }
  }
  *puVar11 = *param_3;
  puVar21 = puVar11 + 1;
  if (param_2 != puVar13) {
    uVar18 = (long)puVar13 + (-2 - (long)param_2);
    puVar20 = param_2;
    puVar14 = puVar21;
    if ((5 < uVar18) && (0x1f < (ulong)((long)puVar11 + (2 - (long)param_2)))) {
      uVar15 = (uVar18 >> 1) + 1;
      if (uVar18 < 0x1e) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar15 & 0xfffffffffffffff0;
        uVar23 = 0;
        do {
          puVar1 = (undefined4 *)(param_2 + uVar23);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar12 = *(undefined8 *)(param_2 + uVar23 + 8);
          uVar8 = *(undefined8 *)((long)(param_2 + uVar23 + 8) + 8);
          puVar2 = (undefined4 *)(puVar11 + uVar23 + 1);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          *(undefined8 *)(puVar11 + uVar23 + 9) = uVar12;
          *(undefined8 *)((long)(puVar11 + uVar23 + 9) + 8) = uVar8;
          uVar23 = uVar23 + 0x10;
        } while (uVar18 != uVar23);
        if (uVar15 == uVar18) goto LAB_05cfc743;
        if ((uVar15 & 0xc) == 0) {
          puVar20 = param_2 + uVar18;
          puVar14 = puVar21 + uVar18;
          goto LAB_05cfc730;
        }
      }
      uVar23 = uVar15 & 0xfffffffffffffffc;
      do {
        *(undefined8 *)(puVar21 + uVar18) = *(undefined8 *)(param_2 + uVar18);
        uVar18 = uVar18 + 4;
      } while (uVar23 != uVar18);
      puVar20 = param_2 + uVar23;
      puVar14 = puVar21 + uVar23;
      if (uVar15 == uVar23) goto LAB_05cfc743;
    }
LAB_05cfc730:
    do {
      *puVar14 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar14 = puVar14 + 1;
    } while (puVar20 != puVar13);
  }
LAB_05cfc743:
  puVar20 = (undefined2 *)*param_1;
  puVar14 = (undefined2 *)((long)puVar11 - ((long)param_2 - (long)puVar20));
  if ((long)param_2 - (long)puVar20 == 0) goto LAB_05cfc8e5;
  uVar18 = ((long)param_2 - (long)puVar20) - 2;
  puVar22 = puVar20;
  puVar24 = puVar14;
  if ((5 < uVar18) && (0x1f < (ulong)((long)puVar11 - (long)param_2))) {
    uVar15 = (uVar18 >> 1) + 1;
    if (uVar18 < 0x1e) {
      uVar18 = 0;
    }
    else {
      lVar19 = (long)param_2 - (long)puVar20 >> 1;
      uVar18 = uVar15 & 0xfffffffffffffff0;
      uVar23 = 0;
      do {
        puVar1 = (undefined4 *)(puVar20 + uVar23);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        uVar12 = *(undefined8 *)(puVar20 + uVar23 + 8);
        uVar8 = *(undefined8 *)((long)(puVar20 + uVar23 + 8) + 8);
        puVar2 = (undefined4 *)(puVar11 + (uVar23 - lVar19));
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(undefined8 *)(puVar11 + ((uVar23 + 8) - lVar19)) = uVar12;
        *(undefined8 *)((long)(puVar11 + ((uVar23 + 8) - lVar19)) + 8) = uVar8;
        uVar23 = uVar23 + 0x10;
      } while (uVar18 != uVar23);
      if (uVar15 == uVar18) goto LAB_05cfc8e5;
      if ((uVar15 & 0xc) == 0) {
        puVar22 = puVar20 + uVar18;
        puVar24 = puVar14 + uVar18;
        goto LAB_05cfc8d0;
      }
    }
    uVar23 = uVar15 & 0xfffffffffffffffc;
    puVar22 = puVar20 + uVar23;
    puVar24 = puVar14 + uVar23;
    do {
      *(undefined8 *)(puVar14 + uVar18) = *(undefined8 *)(puVar20 + uVar18);
      uVar18 = uVar18 + 4;
    } while (uVar23 != uVar18);
    if (uVar15 == uVar23) goto LAB_05cfc8e5;
  }
LAB_05cfc8d0:
  do {
    *puVar24 = *puVar22;
    puVar22 = puVar22 + 1;
    puVar24 = puVar24 + 1;
  } while (puVar22 != param_2);
LAB_05cfc8e5:
  *param_1 = (ulong)puVar14;
  param_1[1] = (long)puVar21 + ((long)puVar13 - (long)param_2);
  uVar18 = param_1[2];
  param_1[2] = (ulong)puVar17;
  if (puVar20 != (undefined2 *)0x0) {
    func_0x0412a280(puVar20,uVar18 - (long)puVar20);
  }
  return puVar11;
}


