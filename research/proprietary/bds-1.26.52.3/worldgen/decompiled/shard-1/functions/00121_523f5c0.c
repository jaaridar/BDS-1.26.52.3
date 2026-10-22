/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533f5c0 (ELF vaddr 0x523f5c0)
 * Label: SurfaceMaterialAttributes::vslot1
 * Body:  [[0533f5c0, 0533f5c9]]
 * Ghidra: wg_SurfaceMaterialAttributes__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SurfaceMaterialAttributes__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


