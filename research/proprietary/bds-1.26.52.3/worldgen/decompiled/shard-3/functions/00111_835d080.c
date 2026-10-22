/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x845d080 (ELF vaddr 0x835d080)
 * Label: JigsawStructureDataPacket::vslot0
 * Body:  [[0845d080, 0845d0a1] [0d6c9500, 0d6c9575]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot0
 */


/* WARNING: Possible PIC construction at 0x0d6c9512: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d6c9517) */
/* WARNING: Removing unreachable block (ram,0x0d6c9530) */
/* WARNING: Removing unreachable block (ram,0x0d6c9543) */
/* WARNING: Removing unreachable block (ram,0x0d6c9550) */
/* WARNING: Removing unreachable block (ram,0x0d6c9561) */

void wg_JigsawStructureDataPacket__vslot0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_RBX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_R14;
  
  *param_1 = &UNK_0f117948;
  param_1[6] = &UNK_0f47e0b0;
  puVar3 = (undefined8 *)param_1[8];
  while( true ) {
    *(undefined8 **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined **)((long)register0x00000020 + -0x18) = &UNK_0f47e0b0;
    if (puVar3 == (undefined8 *)0x0) break;
    puVar1 = (undefined8 *)*puVar3;
    puVar2 = (undefined8 *)((long)register0x00000020 + -0x20);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x20);
    *puVar2 = 0xd6c9517;
    unaff_RBX = puVar3;
    puVar3 = puVar1;
    unaff_R14 = param_1 + 7;
  }
  return;
}


