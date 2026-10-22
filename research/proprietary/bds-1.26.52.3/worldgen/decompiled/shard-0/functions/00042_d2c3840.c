/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3c3840 (ELF vaddr 0xd2c3840)
 * Label: FlatWorldGenerator::vslot1
 * Body:  [[0d3c3840, 0d3c38ad]]
 * Ghidra: wg_FlatWorldGenerator__vslot1
 */


/* WARNING: Possible PIC construction at 0x0d3c3893: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_FlatWorldGenerator__vslot1(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uStack_10;
  
  *param_1 = &UNK_0f462370;
  puVar4 = &UNK_0f462548;
  param_1[0xe] = &UNK_0f462548;
  plVar1 = (long *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (plVar1 != (long *)0x0) {
    uStack_10 = 0xd3c3876;
    puVar4 = (undefined *)(**(code **)(*plVar1 + 8))();
  }
  puVar2 = (undefined8 *)param_1[0x22];
  if (puVar2 == (undefined8 *)0x0) {
    uStack_10 = 0xd3c38a0;
    puVar4 = (undefined *)func_0x0ca70460(param_1);
  }
  else {
    param_1[0x23] = puVar2;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd3c3898;
    param_1 = puVar2;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


