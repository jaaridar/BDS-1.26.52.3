/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6518e0 (ELF vaddr 0xc5518e0)
 * Label: caller-of-seed
 * Body:  [[0c6518e0, 0c651993]]
 * Ghidra: FUN_0c6518e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6518e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar2 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar2));
  *param_1 = &UNK_0f3a5638;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  if (param_1 + 0x75 != param_4) {
    if ((*(byte *)(param_4 + 1) & 1) == 0) {
      param_1[0x78] = param_4[3];
      uVar1 = param_4[2];
      param_1[0x76] = param_4[1];
      param_1[0x77] = uVar1;
    }
    else {
      func_0x04885070(param_1 + 0x76,param_4[3],param_4[2]);
    }
  }
  param_1[0x75] = *param_4;
  return;
}


