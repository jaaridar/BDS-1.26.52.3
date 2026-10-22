/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1bf3c0
 * Label: br::worldgen::StructureProcessor::vslot4
 * Body:  [[0d1bf3c0, 0d1bf3f5]]
 * Ghidra: wg_br__worldgen__StructureProcessor__vslot4
 */


/* WARNING: Possible PIC construction at 0x0d1bf3e3: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d1bf3e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__StructureProcessor__vslot4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&UNK_0f457ac8;
  *param_1 = &UNK_0f457ac8;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    puVar2 = (undefined8 *)param_1[5];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd1bf3e8;
    param_1 = puVar2;
  }
  *(undefined8 **)((long)register0x00000020 + -8) = puVar2;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


