/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d7510 (ELF vaddr 0xd1d7510)
 * Label: br::worldgen::processors::BlockRules::RandomBlockMatch::vslot3
 * Body:  [[0d2d7510, 0d2d75a6]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot3
 */


void wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot3
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_14 [4];
  
  func_0x0ee47730(param_2,&UNK_01219be1,0x13);
  lVar4 = *(long *)(param_1 + 8);
  bVar1 = *(byte *)(lVar4 + 0x90);
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar3 = *(ulong *)(lVar4 + 0x98);
  }
  if (uVar3 != 0xffffffffffffffff) {
    if ((bVar1 & 1) == 0) {
      lVar4 = lVar4 + 0x91;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0xa0);
    }
    if ((uVar3 == 0) || (lVar4 != 0)) {
      func_0x0ee47730(param_2);
      func_0x0ee47730(param_2,auStack_14,4);
      return;
    }
  }
  FUN_04890760();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


