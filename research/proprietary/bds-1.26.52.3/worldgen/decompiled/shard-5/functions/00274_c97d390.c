/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7d390 (ELF vaddr 0xc97d390)
 * Label: callee-of:0xc967b50
 * Body:  [[0ca7d390, 0ca7d3c0] [0ca7d3d0, 0ca7d41d]]
 * Ghidra: FUN_0ca7d390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ca7d390(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 in_RAX;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return in_RAX;
  }
  if (((char)param_1[2] == '\x01') && (lVar2 = *(long *)(lVar1 + 0x18), lVar2 != 0)) {
    lVar5 = *(long *)(lVar1 + 0x20);
    lVar4 = lVar2;
    if (lVar2 != lVar5) {
      do {
        plVar3 = *(long **)(lVar5 + -8);
        *(undefined8 *)(lVar5 + -8) = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar5 = lVar5 + -8;
      } while (lVar5 != lVar2);
      lVar4 = *(long *)(lVar1 + 0x18);
    }
    *(long *)(lVar1 + 0x20) = lVar2;
    in_RAX = FUN_0412a280(lVar4,*(long *)(lVar1 + 0x28) - lVar4);
  }
  if (lVar1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
  }
  return in_RAX;
}


