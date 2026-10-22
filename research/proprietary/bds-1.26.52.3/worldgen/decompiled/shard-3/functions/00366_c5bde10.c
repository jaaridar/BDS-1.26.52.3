/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6bde10 (ELF vaddr 0xc5bde10)
 * Label: caller-of-seed
 * Body:  [[0c6bde10, 0c6bdeb1]]
 * Ghidra: FUN_0c6bde10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6bde10(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3c3600;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  param_1[0x21] = 0x10000000;
  func_0x0c6bded0(param_1,&UNK_0c6be050,0,0);
  func_0x0c6be1e0(param_1,&UNK_0c6be360,0,0);
  func_0x0c6bea30(param_1,&UNK_0c6bebb0,0,0);
  return;
}


