/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x485d790
 * Label: EditorCustomBiomeSource::vslot9
 * Body:  [[0485d790, 0485d7e4] [0485d7f0, 0485d83b]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot9
 */


void wg_EditorCustomBiomeSource__vslot9
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long param_6)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  byte bVar6;
  
  lVar2 = -1;
  do {
    lVar5 = lVar2;
    lVar3 = param_2 + lVar5;
    if (lVar3 == -1) goto LAB_0485d7c9;
  } while ((*(char *)(param_6 + lVar5) != '@') &&
          (lVar2 = lVar5 + -1, *(char *)(param_5 + lVar5) != '@'));
  for (; lVar5 != 0; lVar5 = lVar5 + 1) {
    bVar6 = *(byte *)(param_6 + lVar5);
    if (bVar6 == 0) {
      return;
    }
    bVar1 = *(byte *)(param_5 + lVar5);
    if (bVar6 != bVar1) {
      bVar4 = bVar6 | 0x20;
      if (0x19 < (byte)(bVar6 + 0xbf)) {
        bVar4 = bVar6;
      }
      bVar6 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar6 = bVar1;
      }
      if (bVar4 != bVar6) {
        return;
      }
    }
  }
  if (lVar3 == 0) {
LAB_0485d7c9:
    lVar3 = param_2;
  }
  func_0x0eee3000(param_1,param_3,lVar3);
  return;
}


