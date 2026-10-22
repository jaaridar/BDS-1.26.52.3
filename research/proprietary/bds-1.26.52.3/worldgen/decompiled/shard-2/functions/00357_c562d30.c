/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc662d30 (ELF vaddr 0xc562d30)
 * Label: caller-of-seed
 * Body:  [[0c662d30, 0c662ddb]]
 * Ghidra: FUN_0c662d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c662d30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3aace8;
  func_0x0c6e7950(param_1 + 0x75,param_4);
  *(undefined4 *)(param_1 + 0x32) = _DAT_0f558db8;
  param_1[0x31] = _DAT_0f558db0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_0f558dbc;
  *(undefined4 *)((long)param_1 + 0x19c) = _DAT_0f558dc4;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(byte *)((long)param_1 + 0x10a) = *(byte *)((long)param_1 + 0x10a) | 2;
  func_0x0c662e10(param_1,&UNK_0c662f90,0,0);
  func_0x0c662fe0(param_1,&UNK_0c663160,0,0);
  return;
}


