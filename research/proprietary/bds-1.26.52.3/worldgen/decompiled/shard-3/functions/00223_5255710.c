/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5355710 (ELF vaddr 0x5255710)
 * Label: callee-of:0x51f0250
 * Body:  [[05355710, 053558a1]]
 * Ghidra: FUN_05355710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_05355710(undefined1 (*param_1) [16],long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  param_1[7] = (undefined1  [16])0x0;
  param_1[6] = (undefined1  [16])0x0;
  param_1[5] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  if (((long)_DAT_0f713d30 - (long)_DAT_0f713d28 == -8) ||
     (_DAT_0f713d30 != (undefined8 *)0x0 && _DAT_0f713d28 == (undefined8 *)0x0)) {
    func_0x04890760();
    pcVar1 = (code *)swi(3);
    pauVar5 = (undefined1 (*) [16])(*pcVar1)();
    return pauVar5;
  }
  if (_DAT_0f713d30 != _DAT_0f713d28) {
    uVar4 = 0;
    puVar8 = _DAT_0f713d28;
    do {
      if (*(long *)(*(long *)(param_2 + 0x68) + 200) == *(long *)*puVar8) {
        if (puVar8 == _DAT_0f713d30) goto LAB_05355826;
        uVar4 = 0;
        goto LAB_053557d0;
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != _DAT_0f713d30);
    goto LAB_05355816;
  }
LAB_05355826:
  uVar6 = 0x10;
  uVar3 = 0;
  goto LAB_05355836;
  while (uVar4 < (ulong)((long)_DAT_0f713d30 - (long)_DAT_0f713d28 >> 3)) {
LAB_053557d0:
    uVar3 = uVar4;
    uVar2 = FUN_0cc41df0(0xf6ff9e0,_DAT_0f713d28[uVar3],1);
    *(undefined8 *)(*param_1 + uVar3 * 8) = uVar2;
    uVar4 = uVar3 + 1;
    if (0xe < uVar3) break;
  }
  if (0xe < uVar3) {
    return param_1;
  }
LAB_05355816:
  uVar6 = 0x10 - uVar4;
  uVar3 = uVar4;
  if (uVar6 < 4) goto LAB_05355880;
LAB_05355836:
  uVar7 = uVar6 & 0xfffffffffffffffc;
  auVar10._8_4_ = (int)param_2;
  auVar10._0_8_ = param_2;
  auVar10._12_4_ = (int)((ulong)param_2 >> 0x20);
  uVar4 = uVar3 + uVar7;
  uVar9 = 0;
  do {
    *(undefined1 (*) [16])(*param_1 + uVar9 * 8 + uVar3 * 8) = auVar10;
    *(undefined1 (*) [16])(param_1[1] + uVar9 * 8 + uVar3 * 8) = auVar10;
    uVar9 = uVar9 + 4;
  } while (uVar7 != uVar9);
  if (uVar6 == uVar7) {
    return param_1;
  }
LAB_05355880:
  do {
    *(long *)(*param_1 + uVar4 * 8) = param_2;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x10);
  return param_1;
}


