/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d6c60 (ELF vaddr 0xd1d6c60)
 * Label: br::worldgen::processors::BlockIgnore::vslot5
 * Body:  [[0d2d6c60, 0d2d6c88] [0d2d6c90, 0d2d6cb7] [0d2d6cc0, 0d2d6cdb] [0d2d6ce0, 0d2d6cfb]]
 * Ghidra: wg_br__worldgen__processors__BlockIgnore__vslot5
 */


void wg_br__worldgen__processors__BlockIgnore__vslot5(long param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  func_0x0ee47730(param_2,&UNK_01458364,0xd);
  plVar5 = *(long **)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar5 == plVar2) {
      return;
    }
    lVar4 = *plVar5;
    bVar1 = *(byte *)(lVar4 + 0x90);
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(lVar4 + 0x98);
    }
    if (uVar3 == 0xffffffffffffffff) break;
    if ((bVar1 & 1) == 0) {
      lVar4 = lVar4 + 0x91;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0xa0);
    }
    if ((uVar3 != 0) && (lVar4 == 0)) break;
    func_0x0ee47730(param_2);
    plVar5 = plVar5 + 1;
  }
  func_0x04890760();
  return;
}


