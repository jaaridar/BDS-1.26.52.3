/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9ee0 (ELF vaddr 0xd1d9ee0)
 * Label: br::worldgen::processors::BlockIgnore::vslot1
 * Body:  [[0d2d9ee0, 0d2d9f17]]
 * Ghidra: wg_br__worldgen__processors__BlockIgnore__vslot1
 */


/* WARNING: Possible PIC construction at 0x0d2d9f05: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d2d9f0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__processors__BlockIgnore__vslot1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_10;
  
  *param_1 = &UNK_0f45f7b8;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    param_1[2] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd2d9f0a;
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


