/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6b19e0 (ELF vaddr 0xc5b19e0)
 * Label: caller-of-seed
 * Body:  [[0c6b19e0, 0c6b1a72]]
 * Ghidra: FUN_0c6b19e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6b19e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3bfe88;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  *(undefined1 *)((long)param_1 + 0x132) = 3;
  func_0x0c6b1a90(param_1,&UNK_0c6b1c10,0,0);
  func_0x0c6b1d80(param_1,&UNK_0c6b1f00,0,0);
  func_0x0c6b1f20(param_1,&UNK_0c6b20a0,0,0);
  return;
}


