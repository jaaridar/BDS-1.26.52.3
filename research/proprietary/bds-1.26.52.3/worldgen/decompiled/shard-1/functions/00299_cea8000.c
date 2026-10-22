/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfa8000 (ELF vaddr 0xcea8000)
 * Label: caller-of-seed
 * Body:  [[0cfa8000, 0cfa80f8]]
 * Ghidra: FUN_0cfa8000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cfa8000(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f4238f0;
  *(undefined4 *)(param_1 + 0x75) = 8;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  param_1[0x31] = _DAT_014ea0f0;
  *(undefined4 *)(param_1 + 0x32) = 0x3eb33333;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e5d90;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f266666;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x132) = 7;
  func_0x0cf99820(param_1,&UNK_0cf999a0,0,0);
  func_0x0cf9a230(param_1,&UNK_0cf9a3b0,0,0);
  *param_1 = &UNK_0f425ff8;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  return;
}


