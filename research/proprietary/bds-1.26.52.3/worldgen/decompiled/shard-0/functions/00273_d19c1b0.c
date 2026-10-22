/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd29c1b0 (ELF vaddr 0xd19c1b0)
 * Label: callee-of:0xc961580
 * Body:  [[0d29c1b0, 0d29c3a6]]
 * Ghidra: FUN_0d29c1b0
 */


undefined8 * FUN_0d29c1b0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = param_2[1];
  uVar7 = param_3[1];
  uVar5 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar5 >> 0x38 < 2) {
    uVar7 = uVar7 & uVar1 - 1;
  }
  else if (uVar1 <= uVar7) {
    if ((uVar7 | uVar1) >> 0x20 == 0) {
      uVar7 = (uVar7 & 0xffffffff) % (uVar1 & 0xffffffff);
    }
    else {
      uVar7 = uVar7 % uVar1;
    }
  }
  lVar2 = *param_2;
  plVar4 = *(long **)(lVar2 + uVar7 * 8);
  do {
    plVar6 = plVar4;
    plVar4 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  bVar3 = (byte)(uVar5 >> 0x38);
  if (plVar6 != param_2 + 2) {
    uVar5 = plVar6[1];
    if (bVar3 < 2) {
      uVar5 = uVar5 & uVar1 - 1;
    }
    else if (uVar1 <= uVar5) {
      if ((uVar5 | uVar1) >> 0x20 == 0) {
        uVar5 = (uVar5 & 0xffffffff) % (uVar1 & 0xffffffff);
      }
      else {
        uVar5 = uVar5 % uVar1;
      }
    }
    if (uVar5 == uVar7) goto LAB_0d29c2f8;
  }
  if (*param_3 != 0) {
    uVar5 = *(ulong *)(*param_3 + 8);
    if (bVar3 < 2) {
      uVar5 = uVar5 & uVar1 - 1;
    }
    else if (uVar1 <= uVar5) {
      if ((uVar5 | uVar1) >> 0x20 == 0) {
        uVar5 = (uVar5 & 0xffffffff) % (uVar1 & 0xffffffff);
      }
      else {
        uVar5 = uVar5 % uVar1;
      }
    }
    if (uVar5 == uVar7) goto LAB_0d29c2f8;
  }
  *(undefined8 *)(lVar2 + uVar7 * 8) = 0;
LAB_0d29c2f8:
  lVar8 = *param_3;
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    uVar5 = *(ulong *)(lVar8 + 8);
    if (bVar3 < 2) {
      uVar5 = uVar5 & uVar1 - 1;
    }
    else if (uVar1 <= uVar5) {
      if ((uVar5 | uVar1) >> 0x20 == 0) {
        uVar5 = (uVar5 & 0xffffffff) % (uVar1 & 0xffffffff);
      }
      else {
        uVar5 = uVar5 % uVar1;
      }
    }
    if (uVar5 != uVar7) {
      *(long **)(lVar2 + uVar5 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  *plVar6 = lVar8;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}


