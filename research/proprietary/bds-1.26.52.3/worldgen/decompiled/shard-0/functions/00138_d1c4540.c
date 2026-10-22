/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c4540 (ELF vaddr 0xd1c4540)
 * Label: br::worldgen::processors::ProtectedBlock::vslot1
 * Body:  [[0d2c4540, 0d2c4575]]
 * Ghidra: wg_br__worldgen__processors__ProtectedBlock__vslot1
 */


/* WARNING: Possible PIC construction at 0x0d2c4563: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d2c4568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__processors__ProtectedBlock__vslot1(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&UNK_0f45e1a8;
  *param_1 = &UNK_0f45e1a8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    puVar2 = (undefined8 *)param_1[4];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd2c4568;
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


