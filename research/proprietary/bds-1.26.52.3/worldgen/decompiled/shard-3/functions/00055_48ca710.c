/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49ca710 (ELF vaddr 0x48ca710)
 * Label: XoroshiroRandom::vslot2
 * Body:  [[049ca710, 049ca742]]
 * Ghidra: wg_XoroshiroRandom__vslot2
 */


int wg_XoroshiroRandom__vslot2(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  lVar1 = *(ulong *)(param_1 + 0x10) + uVar2;
  uVar3 = *(ulong *)(param_1 + 0x10) ^ uVar2;
  *(ulong *)(param_1 + 8) = uVar3 << 0x15 ^ (uVar2 << 0x31 | uVar2 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return ((int)lVar1 * 0x20000 | (uint)((ulong)lVar1 >> 0x2f)) + (int)uVar2;
}


