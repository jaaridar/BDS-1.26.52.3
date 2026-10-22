/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cc650 (ELF vaddr 0x48cc650)
 * Label: XoroshiroPositionalRandomFactory::vslot3
 * Body:  [[049cc650, 049cc7ea]]
 * Ghidra: wg_XoroshiroPositionalRandomFactory__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_XoroshiroPositionalRandomFactory__vslot3(undefined8 *param_1,long param_2,byte *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long *in_FS_OFFSET;
  ulong uStack_48;
  ulong uStack_40;
  
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar3 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar3;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  lVar1 = lVar2 + -0x1750;
  (**(code **)(*(long *)(lVar2 + -0x1750) + 0x10))(lVar1);
  if ((*param_3 & 1) == 0) {
    pbVar9 = param_3 + 1;
    uVar6 = (uint)(*param_3 >> 1);
  }
  else {
    uVar6 = *(uint *)(param_3 + 8);
    pbVar9 = *(byte **)(param_3 + 0x10);
  }
  (**(code **)(*(long *)(lVar2 + -0x1750) + 0x18))(lVar1,pbVar9,uVar6);
  (**(code **)(*(long *)(lVar2 + -0x1750) + 0x20))(lVar1,&uStack_48);
  uVar10 = *(ulong *)(param_2 + 8);
  uVar8 = *(ulong *)(param_2 + 0x10);
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar8 = uVar8 ^ (uStack_40 >> 0x38 | (uStack_40 & 0xff000000000000) >> 0x28 |
                   (uStack_40 & 0xff0000000000) >> 0x18 | (uStack_40 & 0xff00000000) >> 8 |
                   (uStack_40 & 0xff000000) << 8 | (uStack_40 & 0xff0000) << 0x18 |
                   (uStack_40 & 0xff00) << 0x28 | uStack_40 << 0x38);
  uVar10 = uVar10 ^ (uStack_48 >> 0x38 | (uStack_48 & 0xff000000000000) >> 0x28 |
                     (uStack_48 & 0xff0000000000) >> 0x18 | (uStack_48 & 0xff00000000) >> 8 |
                     (uStack_48 & 0xff000000) << 8 | (uStack_48 & 0xff0000) << 0x18 |
                     (uStack_48 & 0xff00) << 0x28 | uStack_48 << 0x38);
  uVar5 = 0x9e3779b97f4a7c15;
  if (uVar8 != 0 || uVar10 != 0) {
    uVar5 = uVar10;
  }
  uVar7 = 0x6a09e667f3bcc909;
  if (uVar8 != 0 || uVar10 != 0) {
    uVar7 = uVar8;
  }
  *puVar4 = &UNK_0ef512d0;
  puVar4[1] = uVar5;
  puVar4[2] = uVar7;
  puVar4[3] = 0;
  *(undefined1 *)(puVar4 + 4) = 0;
  *param_1 = puVar4;
  return param_1;
}


