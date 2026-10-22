/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3445c0 (ELF vaddr 0xd2445c0)
 * Label: StructurePoolBlockPredicateCappedArcheologyBlockReplacement::vslot0
 * Body:  [[050af160, 050af1c5] [0d3445c0, 0d344618]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot0
 */


/* WARNING: Possible PIC construction at 0x050af172: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x050af177) */
/* WARNING: Removing unreachable block (ram,0x050af189) */
/* WARNING: Removing unreachable block (ram,0x050af19a) */
/* WARNING: Removing unreachable block (ram,0x050af1a0) */
/* WARNING: Removing unreachable block (ram,0x050af1b1) */
/* WARNING: Removing unreachable block (ram,0x0412a280) */
/* WARNING: Removing unreachable block (ram,0x0ee326a0) */
/* WARNING: Removing unreachable block (ram,0x0ee326a6) */
/* WARNING: Removing unreachable block (ram,0x0ee326ba) */

void wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *unaff_RBX;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_R14;
  
  *param_1 = &UNK_0f460540;
  if ((*(byte *)(param_1 + 0xd) & 1) != 0) {
    FUN_0412a280(param_1[0xf],param_1[0xd] & 0xfffffffffffffffe);
  }
  puVar3 = &UNK_0f4608b0;
  *param_1 = &UNK_0f4608b0;
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    param_1[6] = lVar2;
    puVar3 = (undefined *)FUN_0412a280(lVar2,param_1[7] - lVar2);
  }
  puVar5 = (undefined8 *)param_1[3];
  while (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined **)((long)register0x00000020 + -0x18) = puVar3;
    puVar1 = (undefined8 *)*puVar5;
    puVar4 = (undefined8 *)((long)register0x00000020 + -0x20);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x20);
    *puVar4 = 0x50af177;
    unaff_RBX = puVar5;
    puVar5 = puVar1;
    unaff_R14 = param_1 + 2;
  }
  return;
}


