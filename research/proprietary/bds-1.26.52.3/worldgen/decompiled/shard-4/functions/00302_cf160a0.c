/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0160a0 (ELF vaddr 0xcf160a0)
 * Label: caller-of-seed
 * Body:  [[0d0160a0, 0d01610c]]
 * Ghidra: FUN_0d0160a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d0160a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x60;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x60) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f433680;
  func_0x0d016120(param_1,&UNK_0d0162a0,0,0);
  func_0x0d016580(param_1,&UNK_0d016700,0,0);
  return;
}


