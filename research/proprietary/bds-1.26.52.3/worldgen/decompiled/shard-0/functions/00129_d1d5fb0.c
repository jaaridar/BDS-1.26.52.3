/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d5fb0 (ELF vaddr 0xd1d5fb0)
 * Label: br::worldgen::processors::BlockEntity::Passthrough::vslot2
 * Body:  [[0d2d5fb0, 0d2d6028]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__Passthrough__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_br__worldgen__processors__BlockEntity__Passthrough__vslot2
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 == 0) {
    *param_1 = 0;
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar1 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *puVar1 = &UNK_0f47e0b0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = puVar1 + 2;
    *param_1 = puVar1;
    func_0x0d6bd5f0(puVar1,param_4);
  }
  return param_1;
}


