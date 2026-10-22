/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc829870 (ELF vaddr 0xc729870)
 * Label: caller-of-seed
 * Body:  [[0c829870, 0c829916]]
 * Ghidra: FUN_0c829870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c829870(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x40 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x40));
  *param_1 = &UNK_0f3d7ae8;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  func_0x0c829930(param_1,&UNK_0c829ab0,0,0);
  func_0x0c82a6c0(param_1,&UNK_0c82a840,0,0);
  func_0x0c82a8b0(param_1,&UNK_0c82aa30,0,0);
  return;
}


