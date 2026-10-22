/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32720
 * Label: WorldGenerator::vslot10
 * Body:  [[0ca32720, 0ca3273e]]
 * Ghidra: wg_WorldGenerator__vslot10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot10(undefined8 param_1,ulong param_2)

{
  long unaff_RBX;
  
  if ((param_2 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_2 & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x30) = 0;
  if ((*(ulong *)(unaff_RBX + 0x28) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(unaff_RBX + 0x28) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x28) = 0;
  return;
}


