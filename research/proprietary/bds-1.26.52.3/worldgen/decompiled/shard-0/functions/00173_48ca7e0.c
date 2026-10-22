/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49ca7e0 (ELF vaddr 0x48ca7e0)
 * Label: XoroshiroRandom::vslot4
 * Body:  [[049ca7e0, 049ca813]]
 * Ghidra: wg_XoroshiroRandom__vslot4
 */


long wg_XoroshiroRandom__vslot4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x10) + uVar2;
  uVar3 = *(ulong *)(param_1 + 0x10) ^ uVar2;
  *(ulong *)(param_1 + 8) = uVar3 << 0x15 ^ (uVar2 << 0x31 | uVar2 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return (uVar1 * 0x20000 | uVar1 >> 0x2f) + uVar2;
}


