/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d8420 (ELF vaddr 0xd1d8420)
 * Label: br::worldgen::processors::Capped::vslot5
 * Body:  [[0d2d8420, 0d2d8513]]
 * Ghidra: wg_br__worldgen__processors__Capped__vslot5
 */


void wg_br__worldgen__processors__Capped__vslot5(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 **ppuStack_48;
  long *plStack_40;
  long **pplStack_38;
  
  func_0x0ee47730(param_2,&UNK_01302535,7);
  (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),param_2);
  plStack_40 = (long *)0x0;
  if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
    ppuStack_48 = &pplStack_38;
    pplStack_38 = &plStack_40;
    (**(code **)(&UNK_0f45e4a8 + (ulong)*(uint *)(param_1 + 0x30) * 8))(&ppuStack_48,param_1 + 0x20)
    ;
    uVar2 = (**(code **)(*plStack_40 + 0x20))();
    ppuStack_48 = (undefined8 **)CONCAT44(ppuStack_48._4_4_,uVar2);
    func_0x0ee47730(param_2,&ppuStack_48,4);
    plStack_40 = (long *)0x0;
    if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
      ppuStack_48 = &pplStack_38;
      pplStack_38 = &plStack_40;
      (**(code **)(&UNK_0f45e498 + (ulong)*(uint *)(param_1 + 0x30) * 8))
                (&ppuStack_48,param_1 + 0x20);
      uVar2 = (**(code **)(*plStack_40 + 0x18))();
      ppuStack_48 = (undefined8 **)CONCAT44(ppuStack_48._4_4_,uVar2);
      func_0x0ee47730(param_2,&ppuStack_48,4);
      return;
    }
  }
  plStack_40 = (long *)0x0;
  pplStack_38 = &plStack_40;
  FUN_04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


