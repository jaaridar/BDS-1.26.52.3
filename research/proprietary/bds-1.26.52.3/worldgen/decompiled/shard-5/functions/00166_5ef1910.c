/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ff1910 (ELF vaddr 0x5ef1910)
 * Label: callee-of:0x82e9c40
 * Body:  [[05ff1910, 05ff196b] [05ff1970, 05ff19b8]]
 * Ghidra: FUN_05ff1910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05ff1910(long param_1)

{
  long lVar1;
  undefined8 in_RAX;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    lVar2 = lVar1;
    if (lVar1 != lVar3) {
      do {
        lVar3 = lVar3 + -0x40;
        func_0x048b3e80(lVar3);
      } while (lVar3 != lVar1);
      lVar2 = *(long *)(param_1 + 0x28);
    }
    *(long *)(param_1 + 0x30) = lVar1;
    in_RAX = FUN_0412a280(lVar2,*(long *)(param_1 + 0x38) - lVar2);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return in_RAX;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = lVar1;
  if (lVar1 != lVar3) {
    do {
      if ((*(char *)(lVar3 + -8) == '\x01') && ((*(byte *)(lVar3 + -0x30) & 1) != 0)) {
        in_RAX = FUN_0412a280(*(undefined8 *)(lVar3 + -0x20),
                              *(ulong *)(lVar3 + -0x30) & 0xfffffffffffffffe);
      }
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != lVar1);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x18) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar2);
  }
  return in_RAX;
}


