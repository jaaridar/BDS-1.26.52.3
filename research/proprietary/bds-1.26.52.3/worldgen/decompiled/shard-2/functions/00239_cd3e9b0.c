/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3e9b0
 * Label: JigsawBlockActor::vslot4
 * Body:  [[0cd3e9b0, 0cd3e9c2]]
 * Ghidra: wg_JigsawBlockActor__vslot4
 */


void wg_JigsawBlockActor__vslot4(void)

{
  code *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  func_0x0412a280();
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


