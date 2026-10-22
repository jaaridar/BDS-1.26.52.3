/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49caa60 (ELF vaddr 0x48caa60)
 * Label: XoroshiroRandom::vslot9
 * Body:  [[049caa60, 049caade]]
 * Ghidra: wg_XoroshiroRandom__vslot9
 */


void wg_XoroshiroRandom__vslot9(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar1 = *(ulong *)(param_1 + 0x10);
    if (param_2 != 1) {
      uVar2 = param_2 & 0xfffffffe;
      do {
        uVar1 = uVar1 ^ uVar3;
        uVar3 = uVar1 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar1;
        uVar1 = (uVar1 << 0x1c | uVar1 >> 0x24) ^ uVar3;
        uVar3 = uVar1 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar1;
        uVar1 = uVar1 << 0x1c | uVar1 >> 0x24;
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      uVar1 = uVar1 ^ uVar3;
      uVar3 = uVar1 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar1;
      uVar1 = uVar1 << 0x1c | uVar1 >> 0x24;
    }
    *(ulong *)(param_1 + 8) = uVar3;
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return;
}


