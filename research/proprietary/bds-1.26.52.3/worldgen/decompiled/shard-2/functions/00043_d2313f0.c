/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3313f0 (ELF vaddr 0xd2313f0)
 * Label: StructurePoolBlockPredicateCappedArcheologyBlockReplacement::vslot10
 * Body:  [[0d3313f0, 0d331479]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot10
 */


bool wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot10
               (long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  
  cVar4 = func_0x0d331480();
  if (cVar4 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x68);
    if ((bVar1 & 1) == 0) {
      uVar6 = (ulong)(bVar1 >> 1);
      bVar2 = *(byte *)(param_2 + 0x68);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x70);
      bVar2 = *(byte *)(param_2 + 0x68);
    }
    if ((bVar2 & 1) == 0) {
      uVar3 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar3 = *(ulong *)(param_2 + 0x70);
    }
    if (uVar6 == uVar3) {
      if ((bVar1 & 1) == 0) {
        param_1 = param_1 + 0x69;
      }
      else {
        param_1 = *(long *)(param_1 + 0x78);
      }
      if ((bVar2 & 1) == 0) {
        param_2 = param_2 + 0x69;
      }
      else {
        param_2 = *(long *)(param_2 + 0x78);
      }
      iVar5 = func_0x0eee3000(param_1,param_2);
      return iVar5 == 0;
    }
  }
  return false;
}


