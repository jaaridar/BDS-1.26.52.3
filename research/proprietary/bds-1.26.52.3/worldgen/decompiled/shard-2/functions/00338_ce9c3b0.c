/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf9c3b0 (ELF vaddr 0xce9c3b0)
 * Label: caller-of-seed
 * Body:  [[0cf9c3b0, 0cf9c466]]
 * Ghidra: FUN_0cf9c3b0
 */


void FUN_0cf9c3b0(undefined8 *param_1)

{
  long lVar1;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f424630;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  param_1[0x21] = 0x2000;
  func_0x0c6cf060(param_1,0xf70b648);
  func_0x0c6cf060(param_1,0xf70e158);
  lVar1 = func_0x0c64edf0(param_1);
  if (lVar1 != 0) {
    *(undefined **)(lVar1 + 8) = &UNK_0cf9c480;
  }
  func_0x0cf9c5d0(param_1,&UNK_0cf9c750,0,0);
  func_0x0c6956b0(param_1,&UNK_0cf9c850,0,0);
  func_0x0cf9c8b0(param_1,&UNK_0cf9ca30,0,0);
  return;
}


