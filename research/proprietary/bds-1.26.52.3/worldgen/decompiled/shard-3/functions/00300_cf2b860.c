/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd02b860 (ELF vaddr 0xcf2b860)
 * Label: caller-of-seed
 * Body:  [[0d02b860, 0d02b8f8]]
 * Ghidra: FUN_0d02b860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d02b860(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   ((ulong)((uint)(0x4f < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x48) + 8 +
                   _DAT_0f71e690));
  *param_1 = &UNK_0f4382a0;
  *(undefined2 *)((long)param_1 + 0x136) = 0xa00;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  param_1[0x21] = 0x400000;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0d02b910(param_1,&UNK_0d02ba90,0,0);
  func_0x0d02bb10(param_1,&UNK_0d02bc90,0,0);
  return;
}


