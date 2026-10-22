/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3ee90 (ELF vaddr 0xcd3ee90)
 * Label: JigsawBlockActor::vslot13
 * Body:  [[0ce3ee90, 0ce3ef16]]
 * Ghidra: wg_JigsawBlockActor__vslot13
 */


bool wg_JigsawBlockActor__vslot13(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x90);
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x98);
  }
  if (uVar5 == 0) {
    return false;
  }
  if (*(char *)(param_1 + 0x88) != '\x01') {
    return true;
  }
  bVar2 = *(byte *)(param_1 + 0x70);
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x78);
  }
  if (uVar5 == uVar6) {
    if ((bVar1 & 1) == 0) {
      lVar3 = param_1 + 0x91;
    }
    else {
      lVar3 = *(long *)(param_1 + 0xa0);
    }
    if ((bVar2 & 1) == 0) {
      param_1 = param_1 + 0x71;
    }
    else {
      param_1 = *(long *)(param_1 + 0x80);
    }
    iVar4 = func_0x0eee3000(lVar3,param_1);
    return iVar4 == 0;
  }
  return false;
}


