/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1c8f20
 * Label: string:Identifier '%s' failed validation when registering jigsaw st
 * Body:  [[0d1c8f20, 0d1c8f2b] [0d1c8f6c, 0d1c8ff3]]
 * Ghidra: FUN_0d1c8f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1c8f20(undefined4 param_1)

{
  undefined8 uVar1;
  char in_AL;
  undefined8 *puVar2;
  undefined8 *unaff_RBX;
  undefined8 *unaff_R14;
  char in_CF;
  char cStack0000000000000008;
  undefined3 uStack0000000000000009;
  undefined4 uStack000000000000000c;
  
  _cStack0000000000000008 = CONCAT31(uStack0000000000000009,cStack0000000000000008 + in_AL + in_CF);
  uStack000000000000000c = param_1;
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar1 = unaff_R14[1];
  puVar2[1] = *unaff_R14;
  puVar2[2] = uVar1;
  puVar2[3] = unaff_R14[2];
  *unaff_R14 = 0;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  *puVar2 = &UNK_0f4585a8;
  *(undefined4 *)(puVar2 + 4) = _cStack0000000000000008;
  *(undefined4 *)((long)puVar2 + 0x24) = uStack000000000000000c;
  *unaff_RBX = puVar2;
  func_0x04863610(&stack0x00000010);
  return;
}


