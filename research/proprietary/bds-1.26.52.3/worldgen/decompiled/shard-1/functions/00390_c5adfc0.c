/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6adfc0 (ELF vaddr 0xc5adfc0)
 * Label: caller-of-seed
 * Body:  [[0c6adfc0, 0c6ae0a8]]
 * Ghidra: FUN_0c6adfc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6adfc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3bf1e0;
  *(bool *)(param_1 + 0x75) = param_4 == 0;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  func_0x0c6ae0c0(param_1,&UNK_0c6ae240,0,0);
  func_0x0c6ae310(param_1,&UNK_0c6ae490,0,0);
  func_0x0c6ae730(param_1,&UNK_0c6ae8b0,0,0);
  func_0x0c6ae920(param_1,&UNK_0c6aeaa0,0,0);
  func_0x0c6af2b0(param_1,&UNK_0c6af430,0,0);
  return;
}


