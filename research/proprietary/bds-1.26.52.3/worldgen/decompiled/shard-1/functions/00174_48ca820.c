/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49ca820 (ELF vaddr 0x48ca820)
 * Label: XoroshiroRandom::vslot5
 * Body:  [[049ca820, 049ca854]]
 * Ghidra: wg_XoroshiroRandom__vslot5
 */


uint wg_XoroshiroRandom__vslot5(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = uVar2 ^ uVar1;
  *(ulong *)(param_1 + 8) = uVar3 << 0x15 ^ (uVar1 << 0x31 | uVar1 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return (uint)(uVar2 + uVar1 >> 0x2f) + (int)uVar1 & 0xffffff01;
}


