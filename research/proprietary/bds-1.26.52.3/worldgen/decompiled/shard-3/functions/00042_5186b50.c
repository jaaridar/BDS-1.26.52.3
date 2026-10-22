/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286b50 (ELF vaddr 0x5186b50)
 * Label: OverworldGeneratorMultinoise::vslot59
 * Body:  [[05286b50, 05286c30]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot59
 */


undefined8 * wg_OverworldGeneratorMultinoise__vslot59(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = (**(code **)(**(long **)(param_2 + 0x20) + 0x440))();
  uVar1 = uVar1 ^ 0x6a09e667f3bcc909;
  uVar3 = (uVar1 >> 0x1e ^ uVar1) * -0x40a7b892e31b1a47;
  uVar3 = (uVar3 >> 0x1b ^ uVar3) * -0x6b2fb644ecceee15;
  uVar3 = uVar3 >> 0x1f ^ uVar3;
  uVar1 = (uVar1 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar1 + 0x9e3779b97f4a7c15) * -0x40a7b892e31b1a47;
  uVar1 = (uVar1 >> 0x1b ^ uVar1) * -0x6b2fb644ecceee15;
  uVar1 = uVar1 >> 0x1f ^ uVar1;
  if (uVar1 == 0 && uVar3 == 0) {
    uVar3 = 0x9e3779b97f4a7c15;
    uVar1 = 0x6a09e667f3bcc909;
  }
  uVar2 = uVar1 ^ uVar3;
  uVar4 = uVar2 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar2;
  uVar2 = (uVar2 << 0x1c | uVar2 >> 0x24) + uVar4;
  *param_1 = &UNK_0ef51388;
  param_1[1] = ((uVar1 + uVar3) * 0x20000 | uVar1 + uVar3 >> 0x2f) + uVar3;
  param_1[2] = (uVar2 * 0x20000 | uVar2 >> 0x2f) + uVar4;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}


