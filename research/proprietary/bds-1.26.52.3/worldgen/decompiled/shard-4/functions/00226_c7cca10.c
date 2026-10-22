/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8cca10 (ELF vaddr 0xc7cca10)
 * Label: callee-of:0x6146460
 * Body:  [[0c8cca10, 0c8cca37] [0c8cca40, 0c8cca99] [0c8ccaa0, 0c8ccade] [0c8ccae0, 0c8ccb08]]
 * Ghidra: FUN_0c8cca10
 */


undefined8 FUN_0c8cca10(long param_1,ushort param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 0x380);
  puVar2 = *(undefined8 **)(param_1 + 0x388);
  if ((long)puVar2 - (long)puVar4 == 0) {
    return 0;
  }
  puVar5 = puVar2;
  uVar3 = (long)puVar2 - (long)puVar4 >> 3;
  while( true ) {
    while( true ) {
      uVar6 = uVar3 >> 1;
      puVar1 = puVar4 + uVar6;
      if (param_2 <= *(ushort *)(puVar4[uVar6] + 0x168)) break;
      puVar4 = puVar1 + 1;
      uVar3 = ~uVar6 + uVar3;
      if (uVar3 == 0) {
        return 0;
      }
    }
    if (*(ushort *)(puVar4[uVar6] + 0x168) <= param_2) break;
    puVar5 = puVar1;
    uVar3 = uVar6;
    if (uVar6 == 0) {
      return 0;
    }
  }
  if (uVar3 != 1) {
    do {
      uVar3 = uVar6 >> 1;
      if (*(ushort *)(puVar4[uVar3] + 0x168) < param_2) {
        puVar4 = puVar4 + uVar3 + 1;
        uVar3 = ~uVar3 + uVar6;
      }
      uVar6 = uVar3;
    } while (uVar3 != 0);
  }
  lVar7 = (long)puVar5 - (long)(puVar1 + 1);
  if (lVar7 != 0) {
    puVar5 = puVar1 + 1;
    uVar3 = lVar7 >> 3;
    do {
      uVar6 = uVar3 >> 1;
      if (*(ushort *)(puVar5[uVar6] + 0x168) <= param_2) {
        puVar5 = puVar5 + uVar6 + 1;
        uVar6 = ~uVar6 + uVar3;
      }
      uVar3 = uVar6;
    } while (uVar6 != 0);
  }
  if (puVar4 == puVar5) {
    return 0;
  }
  if (puVar4 == puVar2) {
    return 0;
  }
  return *puVar4;
}


