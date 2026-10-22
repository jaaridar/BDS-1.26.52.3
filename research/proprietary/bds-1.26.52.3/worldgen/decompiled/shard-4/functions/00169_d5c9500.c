/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6c9500 (ELF vaddr 0xd5c9500)
 * Label: callee-of:0x82ea790
 * Body:  [[0d6c9500, 0d6c9575]]
 * Ghidra: FUN_0d6c9500
 */


void FUN_0d6c9500(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uStack_11;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_0d6c9500(param_1,*param_2);
    FUN_0d6c9500(param_1,param_2[1]);
    if ((ulong)*(uint *)(param_2 + 0xc) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(param_2 + 0xc) * 8))(&uStack_11,param_2 + 7);
    }
    *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      func_0x0412a280(param_2[6],param_2[4] & 0xfffffffffffffffe);
    }
    func_0x0412a280(param_2,0x68);
  }
  return;
}


