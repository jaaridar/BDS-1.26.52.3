/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca696c0 (ELF vaddr 0xc9696c0)
 * Label: Dimension::vslot25
 * Body:  [[0ca696c0, 0ca69730]]
 * Ghidra: wg_Dimension__vslot25
 */


void wg_Dimension__vslot25(long param_1)

{
  long lVar1;
  undefined *apuStack_48 [4];
  long *plStack_28;
  
  func_0x0ca63830(param_1 + -8);
  (**(code **)(*(long *)(param_1 + -8) + 0x30))(param_1 + -8);
  apuStack_48[0] = &UNK_0f3edb10;
  plStack_28 = (long *)apuStack_48;
  func_0x0ee29460(*(undefined8 *)(param_1 + 0x180),apuStack_48);
  if ((undefined **)plStack_28 == apuStack_48) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (plStack_28 == (long *)0x0) {
      return;
    }
  }
  (**(code **)(*plStack_28 + lVar1))();
  return;
}


