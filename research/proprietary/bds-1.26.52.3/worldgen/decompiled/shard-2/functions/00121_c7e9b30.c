/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7e9b30
 * Label: string:Biomes in Nether are only compatible with following Surface
 * Body:  [[0c7e9b30, 0c7e9b34]]
 * Ghidra: thunk_FUN_0c7e9ed6
 */


void thunk_FUN_0c7e9ed6(void)

{
  code *pcVar1;
  
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


