/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc4d34a0
 * Label: string:ZN12_GLOBAL__N_114FilterListAnon20_addFilterDefinitionI26Fil
 * Body:  [[0c4d33ce, 0c4d3439] [0c4d34a0, 0c4d34b1]]
 * Ghidra: FUN_0c4d34a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c4d34a0(void)

{
  undefined4 uVar1;
  undefined8 *unaff_RBX;
  
  func_0x0410844d();
  uVar1 = _DAT_0f6e77d4;
  *unaff_RBX = 0xf6e77d0;
  *(undefined4 *)(unaff_RBX + 1) = uVar1;
  unaff_RBX[2] = 0;
  *(undefined4 *)(unaff_RBX + 3) = 0x80;
  unaff_RBX[4] = 0x18;
  unaff_RBX[5] = &UNK_0c4d32d0;
  unaff_RBX[6] = &UNK_0c4d34c0;
  unaff_RBX[7] = 0;
  unaff_RBX[8] = &UNK_0c4d3550;
  unaff_RBX[9] = 0;
  unaff_RBX[10] = 0;
  *(undefined8 *)((long)unaff_RBX + 0x54) = 0;
  *(undefined8 *)((long)unaff_RBX + 0x5c) = 0;
  unaff_RBX[0xd] = 0;
  unaff_RBX[0xe] = 0;
  unaff_RBX[0xf] = 0;
  return;
}


