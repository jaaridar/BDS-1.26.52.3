/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd028580 (ELF vaddr 0xcf28580)
 * Label: caller-of-seed
 * Body:  [[0d028580, 0d0285d9]]
 * Ghidra: FUN_0d028580
 */


void FUN_0d028580(undefined8 *param_1)

{
  long lVar1;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f436938;
  *(uint *)((long)param_1 + 0x109) = *(uint *)((long)param_1 + 0x109) | 0x1000200;
  *(undefined4 *)(param_1 + 0x29) = 0x3f4ccccd;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  *(undefined1 *)((long)param_1 + 0x132) = 3;
  lVar1 = func_0x0d0285f0(param_1,&UNK_0d028770,0,0);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}


