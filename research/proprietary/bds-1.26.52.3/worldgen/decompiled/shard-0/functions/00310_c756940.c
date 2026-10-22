/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc856940 (ELF vaddr 0xc756940)
 * Label: caller-of-seed
 * Body:  [[0c856940, 0c8569a0]]
 * Ghidra: FUN_0c856940
 */


void FUN_0c856940(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3dc9f8;
  *(undefined1 *)((long)param_1 + 0x132) = 5;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  func_0x0c8569c0(param_1,&UNK_0c856b40,0,0);
  return;
}


