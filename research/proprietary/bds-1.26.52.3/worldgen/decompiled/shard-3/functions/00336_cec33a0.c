/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfc33a0 (ELF vaddr 0xcec33a0)
 * Label: caller-of-seed
 * Body:  [[0cfc33a0, 0cfc3447]]
 * Ghidra: FUN_0cfc33a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cfc33a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f42a738;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0cfc3460(param_1,&UNK_0cfc35e0,0,0);
  func_0x0cfc3650(param_1,&UNK_0cfc37d0,0,0);
  return;
}


