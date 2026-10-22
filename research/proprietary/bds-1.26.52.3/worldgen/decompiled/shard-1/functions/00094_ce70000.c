/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf70000 (ELF vaddr 0xce70000)
 * Label: JigsawBlockActor::vslot4
 * Body:  [[0cf70000, 0cf70066]]
 * Ghidra: wg_JigsawBlockActor__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 wg_JigsawBlockActor__vslot4(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar2 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  *puVar2 = 4;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,puVar2);
  func_0x0412a280(puVar2,1);
  return uVar1;
}


