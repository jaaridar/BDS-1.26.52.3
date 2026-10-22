/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca69620 (ELF vaddr 0xc969620)
 * Label: Dimension::vslot41
 * Body:  [[0ca69620, 0ca69688]]
 * Ghidra: wg_Dimension__vslot41
 */


void wg_Dimension__vslot41(long *param_1)

{
  long lVar1;
  undefined *apuStack_48 [4];
  long *plStack_28;
  
  func_0x0ca63830();
  (**(code **)(*param_1 + 0x30))(param_1);
  apuStack_48[0] = &UNK_0f3edb10;
  plStack_28 = (long *)apuStack_48;
  func_0x0ee29460(param_1[0x31],apuStack_48);
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


