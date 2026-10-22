/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6d1f80 (ELF vaddr 0xc5d1f80)
 * Label: caller-of-seed
 * Body:  [[0c6d1f80, 0c6d203c]]
 * Ghidra: FUN_0c6d1f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6d1f80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *param_1 = &UNK_0f3c6048;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  *(undefined2 *)((long)param_1 + 0x131) = 0x808;
  param_1[0x31] = _DAT_0f72b528;
  *(undefined4 *)(param_1 + 0x32) = _DAT_0f72b530;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_0f72b534;
  *(undefined4 *)((long)param_1 + 0x19c) = _DAT_0f72b53c;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0c6d2050(param_1,&UNK_0c6d21d0,0,0);
  return;
}


