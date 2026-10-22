/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495b6e0 (ELF vaddr 0x485b6e0)
 * Label: XoroshiroRandom::vslot10
 * Body:  [[0495b6e0, 0495b7a3]]
 * Ghidra: wg_XoroshiroRandom__vslot10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_XoroshiroRandom__vslot10(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_2 + 8);
  uVar6 = *(ulong *)(param_2 + 0x10);
  uVar4 = uVar6 ^ uVar1;
  uVar3 = uVar4 << 0x15 ^ (uVar1 << 0x31 | uVar1 >> 0xf) ^ uVar4;
  uVar5 = uVar4 << 0x1c | uVar4 >> 0x24;
  uVar4 = uVar3 ^ uVar5;
  *(ulong *)(param_2 + 8) = uVar4 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar4;
  *(ulong *)(param_2 + 0x10) = uVar4 << 0x1c | uVar4 >> 0x24;
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  uVar5 = uVar5 + uVar3;
  uVar6 = uVar6 + uVar1;
  *puVar2 = &UNK_0ef51388;
  puVar2[1] = (uVar6 * 0x20000 | uVar6 >> 0x2f) + uVar1;
  puVar2[2] = (uVar5 * 0x20000 | uVar5 >> 0x2f) + uVar3;
  *param_1 = puVar2;
  return param_1;
}


