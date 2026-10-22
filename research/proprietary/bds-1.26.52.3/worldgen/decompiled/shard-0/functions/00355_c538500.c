/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc638500 (ELF vaddr 0xc538500)
 * Label: caller-of-seed
 * Body:  [[0c638500, 0c638587]]
 * Ghidra: FUN_0c638500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c638500(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *param_1 = &UNK_0f39c6b8;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0c6385a0(param_1,&UNK_0c638720,0,0);
  func_0x0c638740(param_1,&UNK_0c6388c0,0,0);
  return;
}


