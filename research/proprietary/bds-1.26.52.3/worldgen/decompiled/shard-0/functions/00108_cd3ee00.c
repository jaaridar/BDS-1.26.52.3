/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3ee00 (ELF vaddr 0xcd3ee00)
 * Label: JigsawBlockActor::vslot56
 * Body:  [[0ce3ee00, 0ce3ee8f]]
 * Ghidra: wg_JigsawBlockActor__vslot56
 */


bool wg_JigsawBlockActor__vslot56(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar1 = *(byte *)(param_1 + 0xc0);
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 200);
  }
  if (uVar5 == 0) {
    return false;
  }
  if (*(char *)(param_1 + 0xb8) != '\x01') {
    return true;
  }
  bVar2 = *(byte *)(param_1 + 0xa0);
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0xa8);
  }
  if (uVar5 == uVar6) {
    if ((bVar1 & 1) == 0) {
      lVar3 = param_1 + 0xc1;
    }
    else {
      lVar3 = *(long *)(param_1 + 0xd0);
    }
    if ((bVar2 & 1) == 0) {
      param_1 = param_1 + 0xa1;
    }
    else {
      param_1 = *(long *)(param_1 + 0xb0);
    }
    iVar4 = func_0x0eee3000(lVar3,param_1);
    return iVar4 == 0;
  }
  return false;
}


