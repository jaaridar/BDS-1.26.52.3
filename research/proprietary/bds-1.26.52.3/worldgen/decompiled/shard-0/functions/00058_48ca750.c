/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49ca750 (ELF vaddr 0x48ca750)
 * Label: XoroshiroRandom::vslot3
 * Body:  [[049ca750, 049ca7da]]
 * Ghidra: wg_XoroshiroRandom__vslot3
 */


ulong wg_XoroshiroRandom__vslot3(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 8);
  lVar1 = *(ulong *)(param_1 + 0x10) + uVar3;
  uVar4 = *(ulong *)(param_1 + 0x10) ^ uVar3;
  uVar5 = uVar4 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar4;
  *(ulong *)(param_1 + 8) = uVar5;
  uVar4 = uVar4 << 0x1c | uVar4 >> 0x24;
  *(ulong *)(param_1 + 0x10) = uVar4;
  uVar3 = (ulong)(((int)lVar1 * 0x20000 | (uint)((ulong)lVar1 >> 0x2f)) + (int)uVar3) *
          (ulong)param_2;
  if (((uint)uVar3 < param_2) && ((uint)uVar3 < -param_2 % param_2)) {
    do {
      lVar1 = uVar4 + uVar5;
      iVar2 = (int)uVar5;
      uVar4 = uVar4 ^ uVar5;
      uVar5 = (uVar5 << 0x31 | uVar5 >> 0xf) ^ uVar4 << 0x15 ^ uVar4;
      uVar4 = uVar4 << 0x1c | uVar4 >> 0x24;
      uVar3 = (ulong)(iVar2 + ((int)lVar1 * 0x20000 | (uint)((ulong)lVar1 >> 0x2f))) *
              (ulong)param_2;
    } while ((uint)uVar3 < -param_2 % param_2);
    *(ulong *)(param_1 + 8) = uVar5;
    *(ulong *)(param_1 + 0x10) = uVar4;
  }
  return uVar3 >> 0x20;
}


