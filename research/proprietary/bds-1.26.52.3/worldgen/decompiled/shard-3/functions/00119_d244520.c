/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd344520 (ELF vaddr 0xd244520)
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot0
 * Body:  [[050af160, 050af1c5] [0d344520, 0d34455a]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot0
 */


/* WARNING: Possible PIC construction at 0x0d344545: Changing call to branch */
/* WARNING: Possible PIC construction at 0x050af17e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x050af1ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d34454a) */
/* WARNING: Removing unreachable block (ram,0x050af183) */
/* WARNING: Removing unreachable block (ram,0x050af189) */
/* WARNING: Removing unreachable block (ram,0x050af19a) */
/* WARNING: Removing unreachable block (ram,0x050af1b1) */
/* WARNING: Removing unreachable block (ram,0x050af1a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_RBX;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_R14;
  
  *param_1 = &UNK_0f4608b0;
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    param_1[6] = lVar3;
    if (lVar3 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar3);
    }
    return lVar3;
  }
  lVar3 = 0;
  puVar5 = (undefined8 *)param_1[3];
  while (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(long *)((long)register0x00000020 + -0x18) = lVar3;
    uVar1 = *puVar5;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x50af177;
    lVar3 = func_0x050af160(param_1 + 2,uVar1);
    puVar2 = (undefined8 *)puVar5[1];
    puVar4 = (undefined8 *)((long)register0x00000020 + -0x20);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x20);
    *puVar4 = 0x50af183;
    unaff_RBX = puVar5;
    puVar5 = puVar2;
    unaff_R14 = param_1 + 2;
  }
  return lVar3;
}


