/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc667f00 (ELF vaddr 0xc567f00)
 * Label: caller-of-seed
 * Body:  [[0c667f00, 0c667f96]]
 * Ghidra: FUN_0c667f00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c667f00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   ((ulong)((uint)(0x4f < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x48) + 8 +
                   _DAT_0f71e690));
  *param_1 = &UNK_0f3ab990;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  param_1[0x21] = 0x400000;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c667fb0(param_1,&UNK_0c668130,0,0);
  func_0x0c668270(param_1,&UNK_0c6683f0,0,0);
  return;
}


