/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd344620 (ELF vaddr 0xd244620)
 * Label: StructurePoolBlockPredicateCappedArcheologyBlockReplacement::vslot1
 * Body:  [[0d344620, 0d344682]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot1
 */


/* WARNING: Possible PIC construction at 0x0d344640: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot1(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uStack_10;
  
  puVar3 = &UNK_0f460540;
  *param_1 = &UNK_0f460540;
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    *param_1 = &UNK_0f4608b0;
    lVar1 = param_1[5];
    if (lVar1 != 0) {
      param_1[6] = lVar1;
      uStack_10 = 0xd344668;
      func_0x0412a280(lVar1,param_1[7] - lVar1);
    }
    uStack_10 = 0xd344675;
    puVar3 = (undefined *)func_0x050af160(param_1 + 2,param_1[3]);
  }
  else {
    param_1 = (undefined8 *)param_1[0xf];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd344645;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


