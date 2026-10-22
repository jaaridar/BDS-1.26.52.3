/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc65aa70 (ELF vaddr 0xc55aa70)
 * Label: caller-of-seed
 * Body:  [[0c65aa70, 0c65aaf2]]
 * Ghidra: FUN_0c65aa70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c65aa70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *param_1 = &UNK_0f3a7800;
  *(undefined2 *)((long)param_1 + 0x136) = 0xf00;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  func_0x0c65ab10(param_1,&UNK_0c65ac90,0,0);
  return;
}


