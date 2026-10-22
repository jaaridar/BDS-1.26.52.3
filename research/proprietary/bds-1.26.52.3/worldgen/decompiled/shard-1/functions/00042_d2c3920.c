/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3c3920 (ELF vaddr 0xd2c3920)
 * Label: FlatWorldGenerator::vslot1
 * Body:  [[0d3c3920, 0d3c399a]]
 * Ghidra: wg_FlatWorldGenerator__vslot1
 */


/* WARNING: Possible PIC construction at 0x0d3c397a: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_FlatWorldGenerator__vslot1(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 auStack_20 [2];
  
  param_1[-0xe] = &UNK_0f462370;
  puVar4 = &UNK_0f462548;
  *param_1 = &UNK_0f462548;
  plVar1 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar1 != (long *)0x0) {
    auStack_20[0] = 0xd3c3959;
    puVar4 = (undefined *)(**(code **)(*plVar1 + 8))();
  }
  puVar5 = param_1 + -0xe;
  puVar2 = (undefined8 *)param_1[0x14];
  if (puVar2 == (undefined8 *)0x0) {
    auStack_20[0] = 0xd3c3987;
    puVar4 = (undefined *)wg_WorldGenerator__vslot0(puVar5);
  }
  else {
    param_1[0x15] = puVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0xd3c397f;
    puVar5 = puVar2;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,puVar5);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


