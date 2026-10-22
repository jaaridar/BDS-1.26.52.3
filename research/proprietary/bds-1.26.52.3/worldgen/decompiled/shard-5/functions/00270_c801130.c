/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc901130 (ELF vaddr 0xc801130)
 * Label: callee-of:0xc961580
 * Body:  [[0c901130, 0c901243]]
 * Ghidra: FUN_0c901130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c901130(long param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0xe0) == '\x01') {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    fVar1 = *(float *)(param_1 + 0x38);
    fVar8 = *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x34) = fVar1;
    *(float *)(param_1 + 0x40) = fVar8;
    fVar2 = _DAT_011983f0;
    fVar6 = *(float *)(param_1 + 0x48);
    if (fVar6 <= fVar8) {
      fVar7 = fVar8 + _DAT_011984dc;
      if (fVar8 + _DAT_011984dc <= fVar6) {
        fVar7 = fVar6;
      }
    }
    else {
      fVar7 = fVar8 + _DAT_0119884c;
      if (fVar6 <= fVar8 + _DAT_0119884c) {
        fVar7 = fVar6;
      }
    }
    fVar8 = fVar7;
    if (fVar7 <= 0.0) {
      fVar8 = 0.0;
    }
    *(uint *)(param_1 + 0x44) =
         -(uint)(_DAT_011983f0 < fVar7) & (uint)_DAT_011983f0 |
         ~-(uint)(_DAT_011983f0 < fVar7) & (uint)fVar8;
    fVar8 = *(float *)(param_1 + 0x3c);
    if (fVar8 <= fVar1) {
      fVar6 = fVar1 + _DAT_011984dc;
      if (fVar1 + _DAT_011984dc <= fVar8) {
        fVar6 = fVar8;
      }
    }
    else {
      fVar6 = fVar1 + _DAT_0119884c;
      if (fVar8 <= fVar1 + _DAT_0119884c) {
        fVar6 = fVar8;
      }
    }
    uVar5 = -(uint)(fVar2 < fVar6);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    *(uint *)(param_1 + 0x38) = uVar5 & (uint)fVar2 | ~uVar5 & (uint)fVar6;
    cVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x58) + 0xa0) + 0x9f0))();
    if (cVar3 == '\0') {
      func_0x0c901250(param_1);
      lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x58) + 0xa0) + 0x568))();
      *(undefined4 *)(lVar4 + 0x32c) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(lVar4 + 0x334) = *(undefined4 *)(param_1 + 0x44);
    }
    if (0 < *(int *)(param_1 + 0x50)) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    }
  }
  return;
}


