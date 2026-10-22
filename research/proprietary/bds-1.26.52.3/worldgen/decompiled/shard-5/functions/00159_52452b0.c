/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x53452b0 (ELF vaddr 0x52452b0)
 * Label: WorldGenClimateMappingAttributes::vslot0
 * Body:  [[053452b0, 053452d6]]
 * Ghidra: wg_WorldGenClimateMappingAttributes__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_WorldGenClimateMappingAttributes__vslot0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &UNK_0efa5448;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    param_1[2] = lVar1;
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return param_1;
  }
  return param_1;
}


