/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xed5ffe0 (ELF vaddr 0xec5ffe0)
 * Label: callee-of:0xe055e60
 * Body:  [[0ed5ffe0, 0ed601bf]]
 * Ghidra: FUN_0ed5ffe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ed5ffe0(undefined4 *param_1,undefined4 param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined2 auStack_68 [4];
  ulong uStack_60;
  uint uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  ulong uStack_38;
  
  auStack_68[0] = (undefined2)param_2;
  uVar2 = *param_3;
  *param_3 = 0;
  uStack_60 = 0;
  uVar5 = uVar2 & 0xff00ffffffffffff;
  uVar7 = uVar2;
  uStack_38 = uVar2;
  if ((uVar2 >> 0x37 & 1) != 0) {
    lVar3 = *(long *)(uVar5 - 8);
    lVar1 = lVar3 + 9;
    uStack_6c = param_2;
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar4 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar4 = lVar3;
    memcpy(plVar4 + 1,uVar5,lVar3);
    *(undefined1 *)((long)plVar4 + lVar3 + 8) = 0;
    uVar7 = (ulong)(plVar4 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    param_2 = uStack_6c;
  }
  uStack_58 = 1;
  uStack_50 = *param_1;
  puStack_48 = param_1 + 2;
  uStack_40 = param_1[0xab];
  puVar6 = (ushort *)((ulong)(uint)param_1[0x48] * 0x30 + *(long *)(param_1 + 0x46));
  if (param_1[0x48] == param_1[0x49]) {
    uStack_60 = uVar7;
    func_0x0ed9a750(param_1 + 0x46,puVar6,1,auStack_68);
    if (uStack_58 == 0xffffffff) goto LAB_0ed60143;
  }
  else {
    *puVar6 = (ushort)param_2;
    *(ulong *)(puVar6 + 4) = uVar7;
    uStack_60 = 0;
    puVar6[8] = 1;
    puVar6[9] = 0;
    *(undefined4 *)(puVar6 + 0xc) = uStack_50;
    *(undefined4 *)(puVar6 + 0xe) = uStack_4c;
    *(undefined4 **)(puVar6 + 0x10) = puStack_48;
    *(undefined4 *)(puVar6 + 0x14) = uStack_40;
    param_1[0x48] = param_1[0x48] + 1;
  }
  (**(code **)(&UNK_0f4e40d0 + (ulong)uStack_58 * 8))(&uStack_6d,&uStack_60);
LAB_0ed60143:
  uStack_58 = 0xffffffff;
  if ((uVar2 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar5 - 8);
  }
  if ((*(ushort *)(param_1 + 0xaa) & (ushort)param_2) != 0) {
    param_1[0xac] = param_1[0xab];
  }
  return;
}


