/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6a6fa0 (ELF vaddr 0xc5a6fa0)
 * Label: caller-of-seed
 * Body:  [[0c6a6fa0, 0c6a7046]]
 * Ghidra: FUN_0c6a6fa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6a6fa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *param_1 = &UNK_0f3bed78;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0x10000000;
  *(undefined1 *)((long)param_1 + 0x131) = 0x10;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0c6a7060(param_1,&UNK_0c6a71e0,0,0);
  func_0x0c6a7390(param_1,&UNK_0c6a7510,0,0);
  func_0x0c6a7cc0(param_1,&UNK_0c6a7e40,0,0);
  return;
}


