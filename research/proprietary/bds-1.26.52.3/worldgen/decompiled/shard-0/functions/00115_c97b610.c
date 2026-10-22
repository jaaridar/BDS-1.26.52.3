/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7b610 (ELF vaddr 0xc97b610)
 * Label: _GLOBAL__N_1::WorldGeneratorAnon::StructureAccess::vslot1
 * Body:  [[0ca7b610, 0ca7b619]]
 * Ghidra: wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


