/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624dd60 (ELF vaddr 0x614dd60)
 * Label: callee-of:0x6146460
 * Body:  [[0624dd60, 0624dd7d] [0624dd80, 0624ddc0]]
 * Ghidra: FUN_0624dd60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0624dd60(long *param_1)

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
      if ((*(byte *)(lVar3 + -0x38) & 1) != 0) {
        in_RAX = FUN_0412a280(*(undefined8 *)(lVar3 + -0x28),
                              *(ulong *)(lVar3 + -0x38) & 0xfffffffffffffffe);
      }
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != lVar1);
    lVar2 = *param_1;
  }
  param_1[1] = lVar1;
  if (lVar2 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar2);
  }
  return in_RAX;
}


