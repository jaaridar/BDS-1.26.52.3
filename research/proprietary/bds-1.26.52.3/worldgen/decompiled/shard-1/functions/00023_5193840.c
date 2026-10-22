/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5293840 (ELF vaddr 0x5193840)
 * Label: OverworldGeneratorMultinoise::vslot39
 * Body:  [[05293840, 0529389a]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot39
 */


bool wg_OverworldGeneratorMultinoise__vslot39(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_20;
  long *plStack_18;
  
  func_0x0525af30(&lStack_20,*(undefined8 *)(param_1 + 0xca8),param_2);
  if (plStack_18 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_18 + 0x10))(plStack_18);
      func_0x0412c2d0(plStack_18);
    }
  }
  return lStack_20 != 0;
}


