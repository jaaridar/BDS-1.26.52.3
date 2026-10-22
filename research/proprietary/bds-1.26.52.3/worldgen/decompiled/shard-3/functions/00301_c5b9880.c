/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6b9880 (ELF vaddr 0xc5b9880)
 * Label: caller-of-seed
 * Body:  [[0c6b9880, 0c6b9920]]
 * Ghidra: FUN_0c6b9880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6b9880(undefined8 *param_1,undefined8 param_2,undefined4 param_3,ushort param_4)

{
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *param_1 = &UNK_0f3c2d90;
  *(ushort *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x131) = 0x1a;
  if (param_4 < 3) {
    *(undefined4 *)((ulong)param_4 * 4 + 0xf6ea430) = param_3;
  }
  func_0x0c6b9940(param_1,&UNK_0c6b9ac0,0,0);
  func_0x0c6ba040(param_1,&UNK_0c6ba1c0,0,0);
  func_0x0c6ba1e0(param_1,&UNK_0c6ba360,0,0);
  return;
}


