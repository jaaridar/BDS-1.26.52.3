/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4ab5520 (ELF vaddr 0x49b5520)
 * Label: callee-of:0x6146460
 * Body:  [[04ab5520, 04ab5539] [04ab5540, 04ab5569]]
 * Ghidra: FUN_04ab5520
 */


void FUN_04ab5520(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar1 = **(long **)(param_1 + 8);
    for (lVar2 = **(long **)(param_1 + 0x10); lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
      if ((*(byte *)(lVar2 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar2 + -0x10),
                        *(ulong *)(lVar2 + -0x20) & 0xfffffffffffffffe);
      }
    }
  }
  return;
}


