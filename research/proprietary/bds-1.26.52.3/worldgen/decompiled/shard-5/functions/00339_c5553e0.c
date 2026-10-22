/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6553e0 (ELF vaddr 0xc5553e0)
 * Label: caller-of-seed
 * Body:  [[0c6553e0, 0c655459]]
 * Ghidra: FUN_0c6553e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6553e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  *param_1 = &UNK_0f3a6720;
  *(undefined1 *)((long)param_1 + 0x131) = 0x24;
  param_1[0x21] = 0;
  func_0x0c655470(param_1,&UNK_0c6555f0,0,0);
  return;
}


