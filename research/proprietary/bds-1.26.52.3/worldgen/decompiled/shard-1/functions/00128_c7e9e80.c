/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7e9e80
 * Label: string:Biomes in Nether are only compatible with following Surface
 * Body:  [[0c7e9e80, 0c7e9e8e] [0c7e9ec6, 0c7e9ede]]
 * Ghidra: FUN_0c7e9e80
 */


void FUN_0c7e9e80(void)

{
  code *pcVar1;
  ulong *unaff_R14;
  byte in_stack_000002a0;
  
  if ((in_stack_000002a0 & 1) != 0) {
    func_0x0412a280(unaff_R14[2],*unaff_R14 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


