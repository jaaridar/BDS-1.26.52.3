/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd24be40
 * Label: string:ZN20StructurePoolElement6singleENSt3__117basic_string_viewIc
 * Body:  [[0d24be30, 0d24be3d] [0d24be40, 0d24be64] [0d24db69, 0d24db7a]]
 * Ghidra: FUN_0d24be40
 */


void FUN_0d24be40(ulong param_1,long param_2,long param_3,long param_4,long param_5)

{
  char in_AL;
  undefined7 in_register_00000001;
  long unaff_RBX;
  byte in_CF;
  
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) + 1 + (uint)in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  for (; param_3 = param_3 + 0x68, param_1 < (ulong)((param_5 - param_4 >> 3) * param_2);
      param_1 = param_1 + 1) {
    *(ulong *)(param_4 + param_3) = CONCAT71(in_register_00000001,in_AL);
    param_4 = *(long *)(unaff_RBX + 0x108);
    param_5 = *(long *)(unaff_RBX + 0x110);
  }
  *(ulong *)(unaff_RBX + 0x1190) = CONCAT71(in_register_00000001,in_AL);
  return;
}


