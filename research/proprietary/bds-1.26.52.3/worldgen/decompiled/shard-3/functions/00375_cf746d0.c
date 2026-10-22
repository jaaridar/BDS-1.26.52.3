/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0746d0 (ELF vaddr 0xcf746d0)
 * Label: caller-of-seed
 * Body:  [[0d0746d0, 0d074799]]
 * Ghidra: FUN_0d0746d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d0746d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f44a460;
  func_0x0c6e7950(param_1 + 0x75,param_4);
  func_0x0c6e7950(param_1 + 0x8a,param_5);
  *(undefined4 *)(param_1 + 0x32) = _DAT_0f71caa0;
  param_1[0x31] = _DAT_0f71ca98;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_0f71caa4;
  *(undefined4 *)((long)param_1 + 0x19c) = _DAT_0f71caac;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(byte *)((long)param_1 + 0x10a) = *(byte *)((long)param_1 + 0x10a) | 2;
  func_0x0d0747e0(param_1,&UNK_0d074960,0,0);
  func_0x0d074ac0(param_1,&UNK_0d074c40,0,0);
  return;
}


