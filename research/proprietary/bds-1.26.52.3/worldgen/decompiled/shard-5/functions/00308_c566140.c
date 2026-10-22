/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc666140 (ELF vaddr 0xc566140)
 * Label: caller-of-seed
 * Body:  [[0c666140, 0c666214]]
 * Ghidra: FUN_0c666140
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c666140(undefined8 *param_1)

{
  long lVar1;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f3ab558;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0x10;
  func_0x0c6cf060(param_1,0xf70e158);
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  lVar1 = func_0x0c64edf0(param_1);
  if (lVar1 != 0) {
    *(undefined **)(lVar1 + 8) = &UNK_0c666230;
  }
  func_0x0c666370(param_1,&UNK_0c6664f0,0,0);
  func_0x0c666500(param_1,&UNK_0c666680,0,0);
  func_0x0c6667f0(param_1,&UNK_0c666970,0,0);
  func_0x0c666980(param_1,&UNK_0c666b00,0,0);
  return;
}


