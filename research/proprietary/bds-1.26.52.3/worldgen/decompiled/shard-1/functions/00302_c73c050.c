/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc83c050 (ELF vaddr 0xc73c050)
 * Label: caller-of-seed
 * Body:  [[0c83c050, 0c83c0d9]]
 * Ghidra: FUN_0c83c050
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c83c050(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *param_1 = &UNK_0f3da5b8;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x131) = 0x28;
  param_1[0x21] = 0;
  func_0x0c83c0f0(param_1,&UNK_0c83c270,0,0);
  func_0x0c83c2e0(param_1,&UNK_0c83c460,0,0);
  return;
}


