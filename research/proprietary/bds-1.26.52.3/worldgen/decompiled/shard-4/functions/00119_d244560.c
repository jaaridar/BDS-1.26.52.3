/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd344560 (ELF vaddr 0xd244560)
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot1
 * Body:  [[0d344560, 0d3445a1]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot1
 */


/* WARNING: Possible PIC construction at 0x0d344582: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uStack_10;
  
  puVar3 = &UNK_0f4608b0;
  *param_1 = &UNK_0f4608b0;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 == (undefined8 *)0x0) {
    uStack_10 = 0xd344594;
    puVar3 = (undefined *)func_0x050af160(param_1 + 2,param_1[3]);
  }
  else {
    param_1[6] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd344587;
    param_1 = puVar1;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


