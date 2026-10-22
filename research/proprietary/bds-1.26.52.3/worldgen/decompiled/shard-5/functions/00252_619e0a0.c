/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x629e0a0 (ELF vaddr 0x619e0a0)
 * Label: callee-of:0x6146460
 * Body:  [[0629e0a0, 0629e255]]
 * Ghidra: FUN_0629e0a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0629e0a0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  lVar7 = param_1[1] - *param_1;
  uVar8 = (lVar7 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar8) {
    func_0x0629e2d0();
LAB_0629e23b:
    uVar5 = func_0x04882eb0();
    func_0x0629e260(&lStack_50);
    func_0x0eee2d70(uVar5);
    pcVar2 = (code *)swi(3);
    lVar7 = (*pcVar2)();
    return lVar7;
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  uVar3 = lVar6 * 0x1c71c71c71c71c72;
  if (uVar8 < uVar3) {
    uVar8 = uVar3;
  }
  if (0x1c71c71c71c71c6 < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
    uVar8 = 0x38e38e38e38e38e;
  }
  plStack_30 = param_1;
  if (uVar8 != 0) {
    if (0x38e38e38e38e38e < uVar8) goto LAB_0629e23b;
    lStack_50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8 * 0x48);
    if (lStack_50 != 0) goto LAB_0629e157;
    func_0x0eec74c0(uVar8 * 0x48,0);
  }
  lStack_50 = 0;
LAB_0629e157:
  lStack_48 = lStack_50 + lVar7;
  uStack_38 = lStack_50 + uVar8 * 0x48;
  *(undefined4 *)(lStack_50 + 8 + lVar7) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lStack_50 + lVar7) = *param_2;
  *(undefined8 *)(lStack_50 + 0x20 + lVar7) = param_2[4];
  uVar5 = param_2[3];
  puVar1 = (undefined8 *)(lStack_50 + 0x10 + lVar7);
  *puVar1 = param_2[2];
  puVar1[1] = uVar5;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(lStack_50 + 0x30 + lVar7) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(lStack_50 + 0x28 + lVar7) = param_2[5];
  *(undefined4 *)(lStack_50 + 0x3c + lVar7) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined8 *)(lStack_50 + 0x34 + lVar7) = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined1 *)(lStack_50 + 0x40 + lVar7) = *(undefined1 *)(param_2 + 8);
  uStack_40 = lStack_50 + 0x48 + lVar7;
  lVar9 = (*param_1 - param_1[1]) + lStack_48;
  func_0x0629e2e0(param_1,*param_1,param_1[1],lVar9);
  lVar4 = uStack_40;
  lVar7 = *param_1;
  lVar6 = param_1[2];
  *param_1 = lVar9;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_40._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_38;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_38._4_4_;
  if (lVar7 != 0) {
    FUN_0412a280(lVar7,lVar6 - lVar7);
  }
  return lVar4;
}


