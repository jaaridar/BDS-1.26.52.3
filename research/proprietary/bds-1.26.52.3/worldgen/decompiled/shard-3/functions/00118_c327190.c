/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc327190
 * Label: string:minecraft:cave_spider_spawn_egg
 * Body:  [[0c327190, 0c327214]]
 * Ghidra: FUN_0c327190
 */


void FUN_0c327190(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  long lVar1;
  uint in_EAX;
  long *plVar2;
  uint *puStack0000000000000008;
  
  plVar2 = (long *)((ulong)*param_3 +
                   (ulong)((int)(*(long *)(param_3 + 2) - (ulong)*param_3 >> 3) - 1U & in_EAX) * 8);
  do {
    lVar1 = *plVar2;
    if (lVar1 == -1) break;
    plVar2 = (long *)(*(long *)(param_3 + 6) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_3 + 6) + 8 + lVar1 * 0x18) != in_EAX);
  puStack0000000000000008 = param_3;
  func_0x0ed77060();
  return;
}


