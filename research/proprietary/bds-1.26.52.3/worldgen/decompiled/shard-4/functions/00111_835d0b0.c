/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x845d0b0 (ELF vaddr 0x835d0b0)
 * Label: JigsawStructureDataPacket::vslot1
 * Body:  [[0845d0b0, 0845d0e3]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawStructureDataPacket__vslot1(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_0f117948;
  param_1[6] = &UNK_0f47e0b0;
  uVar1 = FUN_0d6c9500(param_1 + 7,param_1[8]);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


