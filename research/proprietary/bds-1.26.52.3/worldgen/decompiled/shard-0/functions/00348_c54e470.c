/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc64e470 (ELF vaddr 0xc54e470)
 * Label: caller-of-seed
 * Body:  [[0c64e470, 0c64e4bf]]
 * Ghidra: FUN_0c64e470
 */


void FUN_0c64e470(undefined8 *param_1)

{
  long lVar1;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f3a4558;
  *(undefined4 *)(param_1 + 0x29) = 0x3f4ccccd;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  *(undefined1 *)((long)param_1 + 0x132) = 3;
  lVar1 = func_0x0c64e4e0(param_1,&UNK_0c64e660,0,0);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}


