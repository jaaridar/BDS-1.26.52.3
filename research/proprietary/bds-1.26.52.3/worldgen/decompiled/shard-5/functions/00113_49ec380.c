/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4aec380 (ELF vaddr 0x49ec380)
 * Label: NoSurfaceOreFeature::vslot1
 * Body:  [[04aec380, 04aec3bc]]
 * Ghidra: wg_NoSurfaceOreFeature__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_NoSurfaceOreFeature__vslot1(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_0ef568d8;
  FUN_04abe980(param_1 + 0x2d);
  FUN_04abe980(param_1 + 0x18);
  uVar1 = FUN_04abe980(param_1 + 3);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


