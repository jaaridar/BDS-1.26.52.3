/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48cad70
 * Label: EditorCustomBiomeSource::vslot1
 * Body:  [[048cace8, 048cace9] [048cad70, 048cad94] [048cad9a, 048cad9a]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot1
 */


/* WARNING: Possible PIC construction at 0x048cad76: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x048cad7b) */
/* WARNING: Removing unreachable block (ram,0x048cace8) */
/* WARNING: Removing unreachable block (ram,0x048cad84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_EditorCustomBiomeSource__vslot1(long param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  bool in_PF;
  
  if (in_PF) {
    if (param_1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
    }
    return in_RAX;
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


