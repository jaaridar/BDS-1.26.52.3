/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc67cd60 (ELF vaddr 0xc57cd60)
 * Label: caller-of-seed
 * Body:  [[0c67cd60, 0c67cde8]]
 * Ghidra: FUN_0c67cd60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c67cd60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3b1f48;
  *(undefined1 *)((long)param_1 + 0x131) = 0xd;
  func_0x0c67ce00(param_1,&UNK_0c67cf80,0,0);
  func_0x0c67d0c0(param_1,&UNK_0c67d240,0,0);
  func_0x0c67d290(param_1,&UNK_0c67d410,0,0);
  return;
}


