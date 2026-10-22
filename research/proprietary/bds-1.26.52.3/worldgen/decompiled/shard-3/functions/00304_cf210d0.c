/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0210d0 (ELF vaddr 0xcf210d0)
 * Label: caller-of-seed
 * Body:  [[0d0210d0, 0d02117f]]
 * Ghidra: FUN_0d0210d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d0210d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f4357d0;
  *(undefined4 *)(param_1 + 0x75) = param_5;
  *(undefined1 *)((long)param_1 + 0x3ac) = param_4;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0x4000;
  *(undefined1 *)((long)param_1 + 0x131) = 4;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0d0211a0(param_1,&UNK_0d021320,0,0);
  func_0x0d021390(param_1,&UNK_0d021510,0,0);
  return;
}


