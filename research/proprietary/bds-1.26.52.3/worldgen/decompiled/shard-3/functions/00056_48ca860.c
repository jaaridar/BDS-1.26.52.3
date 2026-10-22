/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49ca860 (ELF vaddr 0x48ca860)
 * Label: XoroshiroRandom::vslot6
 * Body:  [[049ca860, 049ca8a3]]
 * Ghidra: wg_XoroshiroRandom__vslot6
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float wg_XoroshiroRandom__vslot6(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x10) + uVar2;
  uVar3 = *(ulong *)(param_1 + 0x10) ^ uVar2;
  *(ulong *)(param_1 + 8) = uVar3 << 0x15 ^ (uVar2 << 0x31 | uVar2 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return (float)(uint)((uVar1 * 0x20000 | uVar1 >> 0x2f) + uVar2 >> 0x28) * _DAT_01198a44;
}


