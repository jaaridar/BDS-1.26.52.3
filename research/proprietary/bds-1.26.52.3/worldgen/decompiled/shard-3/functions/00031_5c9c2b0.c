/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d9c2b0 (ELF vaddr 0x5c9c2b0)
 * Label: callee-of:0xe3f1ef0
 * Body:  [[05d9c2b0, 05d9c437]]
 * Ghidra: FUN_05d9c2b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_05d9c2b0(long *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar6 = *param_1;
  lVar2 = param_1[1];
  lVar8 = lVar2 - lVar6;
  uVar9 = (lVar8 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar9 < 0x492492492492493) {
    lVar7 = param_1[2] - lVar6 >> 3;
    uVar4 = lVar7 * -0x2492492492492492;
    if (uVar9 < uVar4) {
      uVar9 = uVar4;
    }
    if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
      uVar9 = 0x492492492492492;
    }
    plStack_38 = param_1;
    if (uVar9 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x492492492492492 < uVar9) goto LAB_05d9c41d;
      lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9 * 0x38);
      if (lVar7 == 0) {
        lVar7 = 0;
        FUN_0eec74c0(uVar9 * 0x38,0,lVar2);
      }
    }
    lStack_50 = lVar8 + lVar7;
    uStack_40 = uVar9 * 0x38 + lVar7;
    *(undefined4 *)(lVar7 + lVar8) = *param_2;
    puVar1 = (undefined8 *)(lVar7 + 8 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x18 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar7 + 0x28 + lVar8) = 0x3f800000;
    *(undefined1 *)(lVar7 + 0x30 + lVar8) = 0;
    *(undefined1 *)(lVar7 + 0x34 + lVar8) = 0;
    uStack_48 = lVar7 + 0x38 + lVar8;
    lStack_58 = lVar7;
    func_0x05d9c4f0(param_1,lVar6,lVar2,lVar7);
    lVar8 = uStack_48;
    lVar6 = *param_1;
    lVar2 = param_1[2];
    *param_1 = lVar7;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_48;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_48._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_40;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_40._4_4_;
    if (lVar6 != 0) {
      func_0x0412a280(lVar6,lVar2 - lVar6);
    }
    return lVar8;
  }
  func_0x05d9c4e0();
LAB_05d9c41d:
  uVar5 = func_0x04882eb0();
  func_0x05d9c440(&lStack_58);
  func_0x0eee2d70(uVar5);
  pcVar3 = (code *)swi(3);
  lVar6 = (*pcVar3)();
  return lVar6;
}


