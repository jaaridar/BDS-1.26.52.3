/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f4f20 (ELF vaddr 0x51f4f20)
 * Label: callee-of:0x51f40e0
 * Body:  [[052f4f20, 052f4fc7]]
 * Ghidra: FUN_052f4f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_052f4f20(long *param_1)

{
  long lVar1;
  undefined8 in_RAX;
  
  lVar1 = param_1[0x11];
  if (lVar1 != 0) {
    param_1[0x12] = lVar1;
    in_RAX = thunk_FUN_0ee326a0(lVar1,param_1[0x13] - lVar1);
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    param_1[0xf] = lVar1;
    in_RAX = thunk_FUN_0ee326a0(lVar1,param_1[0x10] - lVar1);
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
    in_RAX = thunk_FUN_0ee326a0(lVar1,param_1[0xc] - lVar1);
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    param_1[8] = lVar1;
    in_RAX = thunk_FUN_0ee326a0(lVar1,param_1[9] - lVar1);
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    in_RAX = thunk_FUN_0ee326a0(lVar1,param_1[5] - lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return in_RAX;
  }
  return in_RAX;
}


