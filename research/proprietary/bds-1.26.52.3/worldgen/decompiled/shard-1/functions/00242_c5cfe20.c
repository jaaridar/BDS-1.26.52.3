/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cfe20
 * Label: JigsawBlock::vslot126
 * Body:  [[0c5cfe20, 0c5cfe86]]
 * Ghidra: wg_JigsawBlock__vslot126
 */


void wg_JigsawBlock__vslot126(undefined8 param_1)

{
  long in_RAX;
  undefined8 *puVar1;
  undefined8 *unaff_RBX;
  
  puVar1 = (undefined8 *)(**(code **)(in_RAX + 0x10))(param_1,0x50);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &UNK_0f391de8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[3] = &UNK_0f38dbd0;
  *unaff_RBX = puVar1 + 3;
  unaff_RBX[1] = puVar1;
  return;
}


