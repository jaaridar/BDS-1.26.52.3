/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cc570 (ELF vaddr 0x48cc570)
 * Label: XoroshiroPositionalRandomFactory::vslot2
 * Body:  [[049cc570, 049cc64c]]
 * Ghidra: wg_XoroshiroPositionalRandomFactory__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_XoroshiroPositionalRandomFactory__vslot2(undefined8 *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *param_3;
  uVar2 = param_3[1];
  uVar4 = *(ulong *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar6 = (long)(int)uVar2 * 0x6ebfff5 ^ (long)(uVar6 * 0x2fc20f00000000 ^ uVar6) >> 0x20;
  uVar4 = (long)((uVar6 * 0x285b825 + 0xb) * uVar6) >> 0x10 ^ uVar4;
  uVar6 = 0x9e3779b97f4a7c15;
  if (uVar4 != 0 || lVar1 != 0) {
    uVar6 = uVar4;
  }
  lVar5 = 0x6a09e667f3bcc909;
  if (uVar4 != 0 || lVar1 != 0) {
    lVar5 = lVar1;
  }
  *puVar3 = &UNK_0ef512d0;
  puVar3[1] = uVar6;
  puVar3[2] = lVar5;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  *param_1 = puVar3;
  return param_1;
}


