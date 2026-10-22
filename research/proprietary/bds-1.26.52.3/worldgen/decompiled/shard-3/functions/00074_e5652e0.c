/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe5652e0
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e5652e0, 0e56537c]]
 * Ghidra: FUN_0e5652e0
 */


void FUN_0e5652e0(long *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 uStack_11;
  
  puVar2 = (ulong *)*param_1;
  uVar1 = (uint)puVar2[3];
  if ((ulong)uVar1 != 0xffffffff) {
    if (uVar1 == 2) {
      if ((*param_2 & 1) != 0) {
        func_0x0412a280(param_2[2],*param_2 & 0xfffffffffffffffe);
      }
      param_2[2] = param_3[2];
      uVar3 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar3;
      *(undefined2 *)param_3 = 0;
      return;
    }
    (**(code **)(&UNK_0f4bde00 + (ulong)uVar1 * 8))(&uStack_11,puVar2);
  }
  *(undefined4 *)(puVar2 + 3) = 0xffffffff;
  puVar2[2] = param_3[2];
  uVar3 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 2;
  return;
}


