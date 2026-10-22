/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4886070 (ELF vaddr 0x4786070)
 * Label: callee-of:0x517a720
 * Body:  [[04886070, 0488608d] [04886090, 048860d0]]
 * Ghidra: FUN_04886070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04886070(long *param_1)

{
  long lVar1;
  undefined8 in_RAX;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX;
  }
  lVar3 = param_1[1];
  lVar2 = lVar1;
  if (lVar1 != lVar3) {
    do {
      if ((*(byte *)(lVar3 + -0x18) & 1) != 0) {
        in_RAX = FUN_0412a280(*(undefined8 *)(lVar3 + -8),
                              *(ulong *)(lVar3 + -0x18) & 0xfffffffffffffffe);
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != lVar1);
    lVar2 = *param_1;
  }
  param_1[1] = lVar1;
  if (lVar2 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar2);
  }
  return in_RAX;
}


