/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd00a200 (ELF vaddr 0xcf0a200)
 * Label: caller-of-seed
 * Body:  [[0d00a200, 0d00a288]]
 * Ghidra: FUN_0d00a200
 */


void FUN_0d00a200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *in_R8;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f42fc08;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  if (param_1 + 0x75 != in_R8) {
    if ((*(byte *)(in_R8 + 1) & 1) == 0) {
      param_1[0x78] = in_R8[3];
      uVar1 = in_R8[2];
      param_1[0x76] = in_R8[1];
      param_1[0x77] = uVar1;
    }
    else {
      func_0x04885070(param_1 + 0x76,in_R8[3],in_R8[2]);
    }
  }
  param_1[0x75] = *in_R8;
  return;
}


