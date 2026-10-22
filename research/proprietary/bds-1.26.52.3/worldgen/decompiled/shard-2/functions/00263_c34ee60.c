/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc44ee60 (ELF vaddr 0xc34ee60)
 * Label: callee-of:0xc5cb4d0
 * Body:  [[0c44ee60, 0c44ef4d]]
 * Ghidra: FUN_0c44ee60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c44ee60(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plStack_20;
  
  *param_1 = &UNK_0f36e918;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x22) = 0x10100;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  func_0x0c455510(param_1,*(undefined8 *)(param_2 + 0x68));
  if (param_4 == 0) {
    plStack_20 = (long *)0x0;
  }
  else {
    plStack_20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_20 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    *plStack_20 = (long)&UNK_0f47e0b0;
    plStack_20[2] = 0;
    plStack_20[3] = 0;
    plStack_20[1] = (long)(plStack_20 + 2);
    func_0x0d6bd5f0(plStack_20,param_4);
  }
  func_0x0c44fd30(param_1,&plStack_20);
  if (plStack_20 != (long *)0x0) {
    (**(code **)(*plStack_20 + 8))();
  }
  func_0x0c455670(param_1);
  return;
}


