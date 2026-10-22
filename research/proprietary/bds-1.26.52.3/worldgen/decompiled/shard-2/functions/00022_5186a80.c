/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286a80 (ELF vaddr 0x5186a80)
 * Label: OverworldGeneratorMultinoise::vslot40
 * Body:  [[0525ae50, 0525ae78] [0525ae80, 0525af02] [05286a80, 05286a8b]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot40
 */


void wg_OverworldGeneratorMultinoise__vslot40(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0xca8);
  func_0x0412d450(puVar5 + 5);
  if (puVar5[3] != 0) {
    puVar6 = (undefined8 *)puVar5[2];
    while (puVar6 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar6;
      plVar4 = (long *)puVar6[4];
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          func_0x0412c2d0(plVar4);
        }
      }
      thunk_FUN_0ee326a0(puVar6);
      puVar6 = puVar3;
    }
    puVar5[2] = 0;
    if (puVar5[1] != 0) {
      func_0x0eee2dd0(*puVar5,0,puVar5[1] << 3);
    }
    puVar5[3] = 0;
  }
  func_0x0412d520(puVar5 + 5);
  return;
}


