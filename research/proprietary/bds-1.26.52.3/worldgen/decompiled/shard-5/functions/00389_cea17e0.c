/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfa17e0 (ELF vaddr 0xcea17e0)
 * Label: caller-of-seed
 * Body:  [[0cfa17e0, 0cfa1889]]
 * Ghidra: FUN_0cfa17e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cfa17e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f4252e0;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0cfa18a0(param_1,&UNK_0cfa1a20,0,0);
  func_0x0cfa1b10(param_1,&UNK_0cfa1c90,0,0);
  return;
}


