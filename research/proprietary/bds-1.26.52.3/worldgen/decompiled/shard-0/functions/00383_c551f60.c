/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc651f60 (ELF vaddr 0xc551f60)
 * Label: caller-of-seed
 * Body:  [[0c651f60, 0c65201c]]
 * Ghidra: FUN_0c651f60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c651f60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3a62e0;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  *(undefined1 *)((long)param_1 + 0x131) = 0x11;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c652030(param_1,&UNK_0c6521b0,0,0);
  func_0x0c652270(param_1,&UNK_0c6523f0,0,0);
  func_0x0c652460(param_1,&UNK_0c6525e0,0,0);
  return;
}


