/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2a5240
 * Label: FlatWorldGenerator::vslot42
 * Body:  [[0d2a5240, 0d2a527f] [0d2a5281, 0d2a528e]]
 * Ghidra: wg_FlatWorldGenerator__vslot42
 */


void wg_FlatWorldGenerator__vslot42(void)

{
  code *pcVar1;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000020 = 0xd2a5276;
  func_0x05d864e0();
  uStack0000000000000020 = 0xd2a527e;
  func_0x0ee386e0();
  uStack0000000000000020 = 0xd2a5286;
  func_0x0ee386e0();
  uStack0000000000000020 = 0xd2a528e;
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


