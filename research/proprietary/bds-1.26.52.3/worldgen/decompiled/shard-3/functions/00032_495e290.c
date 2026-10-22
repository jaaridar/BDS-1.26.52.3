/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a5e290 (ELF vaddr 0x495e290)
 * Label: BiomeSource3d::vslot0
 * Body:  [[04a5e290, 04a5e2f0]]
 * Ghidra: wg_BiomeSource3d__vslot0
 */


/* WARNING: Possible PIC construction at 0x04a5e2d0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_BiomeSource3d__vslot0(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0ef52f68;
  *param_1 = &UNK_0ef52f68;
  if ((*(char *)(param_1 + 0x19) == '\x01') && (param_1[0x13] != 0)) {
    uStack_10 = 0x4a5e2bf;
    puVar2 = (undefined *)func_0x04a67380(param_1 + 0x13);
    lVar3 = param_1[0x13];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x4a5e2d5;
  }
  else {
    lVar3 = param_1[2];
    if (lVar3 == 0) {
      return puVar2;
    }
    param_1[3] = lVar3;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


