/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7e4e700
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[07e4e700, 07e4e971]]
 * Ghidra: FUN_07e4e700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07e4e700(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  ulong uStack_58;
  ulong uStack_50;
  long alStack_48 [3];
  
  uVar2 = *(undefined8 *)(*param_1 + 0x28);
  uVar3 = func_0x07e1ce80(uVar2);
  lVar4 = func_0x048b0c90(uVar2,uVar3,*(undefined4 *)param_1[1],1);
  if (lVar4 == 0) {
    alStack_48[0] = 0;
    alStack_48[1] = 0;
    func_0x048b0d20(alStack_48);
    if (alStack_48[0] == 0) {
      lVar4 = param_1[3];
      lVar9 = *(undefined8 *)param_1[2];
      bVar11 = (*(byte *)(lVar4 + 8) & 1) != 0;
      uVar7 = lVar4 + 9;
      if (bVar11) {
        uVar7 = *(ulong *)(lVar4 + 0x18);
      }
      uVar10 = (ulong)(*(byte *)(lVar4 + 8) >> 1);
      if (bVar11) {
        uVar10 = *(ulong *)(lVar4 + 0x10);
      }
      if (uVar7 == 0) {
        uStack_50 = (ulong)((uint)uVar10 & 0x7f) << 0x30;
      }
      else if (uVar10 < 0x80) {
        uStack_50 = uVar10 << 0x30 | uVar7 & 0xff00ffffffffffff;
      }
      else {
        lVar4 = uVar10 + 9;
        alStack_48[2] = lVar9;
        puVar5 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar4,8);
        if (puVar5 == (ulong *)0x0 && lVar4 != 0) {
          func_0x0eec74c0(lVar4,8);
        }
        *puVar5 = uVar10;
        func_0x0eee2f00(puVar5 + 1,uVar7,uVar10);
        *(undefined1 *)((long)puVar5 + uVar10 + 8) = 0;
        uStack_50 = (ulong)(puVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        lVar9 = alStack_48[2];
      }
      puVar6 = (uint *)func_0x0ed6d180(lVar9,&uStack_50,0);
      if ((uStack_50 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
      }
      uStack_50 = 0;
      uStack_58 = 0x3000000139169d;
      func_0x0ed5ffe0(*(undefined8 *)param_1[2],8,&uStack_58);
      if ((uStack_58 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_58 & 0xff00ffffffffffff) - 8);
      }
      uStack_58 = 0;
      lVar4 = *(long *)(puVar6 + 2);
      uVar1 = *(uint *)(lVar4 + 0x1c + (ulong)*puVar6 * 0x20);
      *puVar6 = uVar1;
      if (puVar6[0x48] == 0) {
        uVar8 = puVar6[4];
      }
      else {
        if (*(uint *)(*(long *)(puVar6 + 0x46) + 0x18 + (ulong)(puVar6[0x48] - 1) * 0x30) == uVar1)
        {
          return;
        }
        uVar8 = puVar6[4];
        if (uVar1 != uVar8 - 1) {
          return;
        }
      }
      lVar9 = lVar4 + (ulong)uVar8 * 0x20;
      uVar7 = (ulong)*(uint *)(lVar4 + -0x10 + (ulong)uVar8 * 0x20);
      if (uVar7 != 0xffffffff) {
        (**(code **)(&UNK_0f4e40d0 + uVar7 * 8))(alStack_48,lVar9 + -0x18);
        uVar8 = puVar6[4];
      }
      *(undefined4 *)(lVar9 + -0x10) = 0xffffffff;
      puVar6[4] = uVar8 - 1;
    }
  }
  return;
}


