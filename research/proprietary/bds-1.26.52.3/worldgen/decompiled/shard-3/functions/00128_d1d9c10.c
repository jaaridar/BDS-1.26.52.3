/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9c10 (ELF vaddr 0xd1d9c10)
 * Label: br::worldgen::processors::BlockEntity::AppendLoot::vslot1
 * Body:  [[0d2d9c10, 0d2d9c45]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot1
 */


/* WARNING: Possible PIC construction at 0x0d2d9c33: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d2d9c38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot1(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&UNK_0f45f788;
  *param_1 = &UNK_0f45f788;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    puVar2 = (undefined8 *)param_1[3];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd2d9c38;
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


