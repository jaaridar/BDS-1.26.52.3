/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc694230 (ELF vaddr 0xc594230)
 * Label: caller-of-seed
 * Body:  [[0c694230, 0c694307]]
 * Ghidra: FUN_0c694230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c694230(undefined8 *param_1)

{
  func_0x0c694320(param_1);
  *param_1 = &UNK_0f3b7fa0;
  *(undefined1 *)((long)param_1 + 0x131) = 0x3c;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  param_1[0x31] = (ulong)_DAT_01198904;
  *(undefined4 *)(param_1 + 0x32) = 0x3e400000;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e5fb0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f500000;
  func_0x0c694520(param_1,&UNK_0c6946a0,0,1);
  func_0x0c694c70(param_1,&UNK_0c694df0,0,1);
  func_0x0c694e50(param_1,&UNK_0c694fd0,0,0);
  return;
}


