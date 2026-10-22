/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1be540
 * Label: br::worldgen::processors::ProtectedBlock::vslot2
 * Body:  [[0d1be540, 0d1be58f]]
 * Ghidra: wg_br__worldgen__processors__ProtectedBlock__vslot2
 */


void wg_br__worldgen__processors__ProtectedBlock__vslot2
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long in_RAX;
  undefined8 *puVar1;
  undefined8 *unaff_RBX;
  undefined4 unaff_retaddr;
  
  puVar1 = (undefined8 *)
           (**(code **)(in_RAX + 0x10))(param_1,0x10,param_3,param_4 + *(char *)(in_RAX + -0x73));
  if (puVar1 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *(undefined1 *)(puVar1 + 1) = 1;
  *puVar1 = &UNK_0f457be0;
  *(undefined4 *)((long)puVar1 + 0xc) = unaff_retaddr;
  *unaff_RBX = puVar1;
  return;
}


