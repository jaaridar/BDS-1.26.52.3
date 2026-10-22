/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a5e300 (ELF vaddr 0x495e300)
 * Label: BiomeSource3d::vslot1
 * Body:  [[04a5e300, 04a5e36b]]
 * Ghidra: wg_BiomeSource3d__vslot1
 */


/* WARNING: Possible PIC construction at 0x04a5e340: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_BiomeSource3d__vslot1(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uStack_10;
  
  puVar3 = &UNK_0ef52f68;
  *param_1 = &UNK_0ef52f68;
  if ((*(char *)(param_1 + 0x19) == '\x01') && (param_1[0x13] != 0)) {
    uStack_10 = 0x4a5e32f;
    puVar3 = (undefined *)func_0x04a67380(param_1 + 0x13);
    param_1 = (undefined8 *)param_1[0x13];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x4a5e345;
  }
  else {
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      uStack_10 = 0x4a5e35e;
      puVar3 = (undefined *)func_0x0412a280(lVar1,param_1[4] - lVar1);
    }
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


