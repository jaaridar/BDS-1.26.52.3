/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfa63b0 (ELF vaddr 0xcea63b0)
 * Label: caller-of-seed
 * Body:  [[0cfa63b0, 0cfa646a]]
 * Ghidra: FUN_0cfa63b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cfa63b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f425bc0;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  func_0x0cfa6480(param_1,&UNK_0cfa6600,0,0);
  func_0x0cfa6880(param_1,&UNK_0cfa6a00,0,0);
  func_0x0cfa6d10(param_1,&UNK_0cfa6e90,0,0);
  return;
}


