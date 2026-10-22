/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc633a10 (ELF vaddr 0xc533a10)
 * Label: caller-of-seed
 * Body:  [[0c633a10, 0c633af6]]
 * Ghidra: FUN_0c633a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c633a10(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f39b990;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  param_1[0x31] = _DAT_0f6ea000;
  *(undefined4 *)(param_1 + 0x32) = _DAT_0f6ea008;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_0f6ea00c;
  *(undefined4 *)((long)param_1 + 0x19c) = _DAT_0f6ea014;
  *(undefined1 *)((long)param_1 + 0x131) = 0x25;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  func_0x0c633b10(param_1,&UNK_0c633c90,0,0);
  func_0x0c633cb0(param_1,&UNK_0c633e30,0,0);
  func_0x0c634230(param_1,&UNK_0c6343b0,0,0);
  return;
}


