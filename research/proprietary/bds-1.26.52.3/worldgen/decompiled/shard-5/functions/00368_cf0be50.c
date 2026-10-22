/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd00be50 (ELF vaddr 0xcf0be50)
 * Label: caller-of-seed
 * Body:  [[0d00be50, 0d00bee3]]
 * Ghidra: FUN_0d00be50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d00be50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *param_1 = &UNK_0f430f28;
  *(undefined1 *)((long)param_1 + 0x131) = 0x20;
  param_1[0x21] = 0x20000;
  lVar1 = func_0x0c64edf0(param_1);
  if (lVar1 != 0) {
    *(undefined **)(lVar1 + 8) = &UNK_0d00bf00;
  }
  func_0x0d00bf40(param_1,&UNK_0d00c0c0,0,0);
  func_0x0d00c0e0(param_1,&UNK_0d00c260,0,0);
  return;
}


