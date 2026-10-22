/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5f23890 (ELF vaddr 0x5e23890)
 * Label: callee-of:0xe1d0880
 * Body:  [[05f23890, 05f2396c]]
 * Ghidra: FUN_05f23890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_05f23890(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if ((DAT_0f560cd8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f560cd8), iVar2 != 0)) {
    func_0x05f23970(&DAT_0f560c58);
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f560c58,0xf53dab8);
    func_0x0410844d(&DAT_0f560cd8);
  }
  plVar3 = (long *)(*param_1 +
                   (ulong)((int)((ulong)(param_1[1] - *param_1) >> 3) - 1U &
                          *(uint *)(_DAT_0f560c58 + 4)) * 8);
  do {
    lVar1 = *plVar3;
    if (lVar1 == -1) goto LAB_05f238f0;
    plVar3 = (long *)(param_1[3] + lVar1 * 0x18);
  } while (*(uint *)(param_1[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f560c58 + 4));
  if (plVar3 != (long *)param_1[4]) {
    return (undefined *)plVar3[2];
  }
LAB_05f238f0:
  return &DAT_0f560c58;
}


