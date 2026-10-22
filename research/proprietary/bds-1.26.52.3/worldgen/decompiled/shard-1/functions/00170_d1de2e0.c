/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1de2e0
 * Label: br::worldgen::Structure::vslot0
 * Body:  [[0d1de2e0, 0d1de2fd] [0d1de306, 0d1de337]]
 * Ghidra: wg_br__worldgen__Structure__vslot0
 */


ulong wg_br__worldgen__Structure__vslot0
                (undefined8 param_1,long param_2,long *param_3,undefined8 param_4,byte param_5)

{
  code *pcVar1;
  long in_RAX;
  ulong uVar2;
  char in_SF;
  char in_OF;
  uint uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint in_stack_00000020;
  
  fVar4 = (float)((ulong)param_1 >> 0x20);
  if (in_OF == in_SF) {
    *(byte *)(in_RAX + -0x7b) = *(byte *)(in_RAX + -0x7b) | param_5;
    func_0x0412a280(param_2,(ulong)in_stack_00000020 - param_2);
    func_0x0eee2d70();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  fVar6 = (float)(int)(float)param_1;
  fVar7 = (float)(int)fVar4;
  uVar3 = (int)fVar6 - (uint)((float)param_1 < (float)(int)fVar6);
  iVar5 = (int)fVar7 - (uint)(fVar4 < (float)(int)fVar7);
  if ((int)uVar3 <= iVar5) {
    iVar5 = (**(code **)(*param_3 + 0x18))(param_3,(iVar5 - uVar3) + 1);
    uVar3 = uVar3 + iVar5;
  }
  return (ulong)uVar3;
}


