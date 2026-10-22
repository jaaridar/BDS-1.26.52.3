/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x53452e0 (ELF vaddr 0x52452e0)
 * Label: WorldGenClimateMappingAttributes::vslot1
 * Body:  [[053452e0, 05345317]]
 * Ghidra: wg_WorldGenClimateMappingAttributes__vslot1
 */


/* WARNING: Possible PIC construction at 0x05345305: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0534530a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_WorldGenClimateMappingAttributes__vslot1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_10;
  
  *param_1 = &UNK_0efa5448;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    param_1[2] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x534530a;
    param_1 = puVar1;
  }
  *(undefined8 **)((long)register0x00000020 + -8) = puVar1;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


