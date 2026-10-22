/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcada270 (ELF vaddr 0xc9da270)
 * Label: callee-of:0xc751460
 * Body:  [[0cada270, 0cada2ba] [0cada2c0, 0cada33a]]
 * Ghidra: FUN_0cada270
 */


void FUN_0cada270(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1 + 0x218;
  uStack_38 = 1;
  lStack_40 = lVar1;
  func_0x0412d450(lVar1);
  if (*(long *)(param_1 + 0x208) != *(long *)(param_1 + 0x200)) {
    uVar2 = 0;
    do {
      func_0x0cafcdd0(&uStack_48,param_2);
      plStack_50 = *(long **)(*(long *)(param_1 + 0x200) + (uVar2 & 0xffff) * 8);
      *(undefined8 *)(*(long *)(param_1 + 0x200) + (uVar2 & 0xffff) * 8) = uStack_48;
      func_0x0cafee60(&plStack_50);
      if (plStack_50 != (long *)0x0) {
        (**(code **)(*plStack_50 + 8))();
      }
      uStack_48 = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 3));
  }
  func_0x0412d520(lVar1);
  return;
}


