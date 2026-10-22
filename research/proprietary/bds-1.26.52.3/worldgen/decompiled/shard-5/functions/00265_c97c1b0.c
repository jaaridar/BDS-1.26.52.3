/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7c1b0 (ELF vaddr 0xc97c1b0)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0ca7c1b0, 0ca7c1ed] [0ca7c1f0, 0ca7c232] [0ca7c240, 0ca7c283]]
 * Ghidra: FUN_0ca7c1b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ca7c1b0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 in_RAX;
  long lVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)param_1[2];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    lVar1 = puVar4[4];
    if (lVar1 != 0) {
      lVar6 = puVar4[5];
      lVar5 = lVar1;
      if (lVar1 != lVar6) {
        do {
          plVar3 = *(long **)(lVar6 + -8);
          *(undefined8 *)(lVar6 + -8) = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          if ((*(byte *)(lVar6 + -0x20) & 1) != 0) {
            FUN_0412a280(*(undefined8 *)(lVar6 + -0x10),
                         *(ulong *)(lVar6 + -0x20) & 0xfffffffffffffffe);
          }
          lVar6 = lVar6 + -0x30;
        } while (lVar6 != lVar1);
        lVar5 = puVar4[4];
      }
      puVar4[5] = lVar1;
      FUN_0412a280(lVar5,puVar4[6] - lVar5);
    }
    in_RAX = FUN_0412a280(puVar4,0x38);
    puVar4 = puVar2;
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return in_RAX;
  }
  return in_RAX;
}


