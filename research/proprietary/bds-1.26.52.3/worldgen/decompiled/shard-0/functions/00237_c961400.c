/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca61400 (ELF vaddr 0xc961400)
 * Label: Dimension::vslot18
 * Body:  [[0ca61400, 0ca6143b]]
 * Ghidra: wg_Dimension__vslot18
 */


void wg_Dimension__vslot18(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1dc);
  if ((*(int *)(param_1 + 0x1d8) <= iVar1) && (*(long *)(param_1 + 0xd0) != 0)) {
    func_0x0d1576a0(*(undefined8 *)(param_1 + 0x1d0));
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x1dc) = iVar1 + 1;
  return;
}


