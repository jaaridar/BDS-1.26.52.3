/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9f494d0 (ELF vaddr 0x9e494d0)
 * Label: callee-of:0xca31410
 * Body:  [[09f494d0, 09f49520]]
 * Ghidra: FUN_09f494d0
 */


void FUN_09f494d0(long *param_1)

{
  long lVar1;
  long lStack_10;
  
  lStack_10 = *param_1;
  *param_1 = 0;
  if (lStack_10 != 0) {
    func_0x0cb06830(*(long *)(lStack_10 + 0x30) + 0x328,&lStack_10);
    lVar1 = lStack_10;
    if (lStack_10 != 0) {
      func_0x0cadbac0(lStack_10);
      func_0x0412a280(lVar1,0x18b0);
    }
  }
  return;
}


