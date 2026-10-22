/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4953b30
 * Label: string:minecraft:overworld_generation_rules
 * Body:  [[04953b30, 04953c4f]]
 * Ghidra: FUN_04953b30
 */


/* WARNING: Instruction at (ram,0x04953b41) overlaps instruction at (ram,0x04953b40)
    */
/* WARNING: Removing unreachable block (ram,0x04953cbb) */

void FUN_04953b30(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  int in_EAX;
  ulong uVar1;
  ulong uVar2;
  long unaff_RBX;
  long lVar3;
  ulong uVar4;
  undefined8 unaff_R14;
  byte *unaff_R15;
  long lVar5;
  bool in_OF;
  undefined4 uVar6;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 auVar7 [16];
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  if (in_OF) {
    *(undefined4 *)(unaff_RBX + 0x68) = 0;
  }
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *(int *)(unaff_RBX + 0x48) = *(int *)(unaff_RBX + 0x48) + in_EAX + (uint)(*unaff_R15 < param_5);
  *(int *)(unaff_RBX + 0x58) = (int)param_1;
  *(undefined4 *)(unaff_RBX + 0x5c) = uVar6;
  *(undefined4 *)(unaff_RBX + 0x60) = in_XMM0_Dc;
  *(undefined4 *)(unaff_RBX + 100) = in_XMM0_Dd;
  *(undefined8 *)(unaff_RBX + 0x68) = 0;
  *(undefined8 *)(unaff_RBX + 0x70) = unaff_R14;
  *(int *)(unaff_RBX + 0x78) = (int)param_1;
  *(undefined4 *)(unaff_RBX + 0x7c) = uVar6;
  *(undefined4 *)(unaff_RBX + 0x80) = in_XMM0_Dc;
  *(undefined4 *)(unaff_RBX + 0x84) = in_XMM0_Dd;
  auVar7 = func_0x0495a140(param_2,8);
  lVar5 = auVar7._0_8_;
  lVar3 = lVar5 - (*(long *)(unaff_RBX + 0x60) - *(long *)(unaff_RBX + 0x58));
  func_0x0eee2f00(lVar3);
  *(long *)(unaff_RBX + 0x58) = lVar3;
  *(long *)(unaff_RBX + 0x60) = lVar5;
  *(long *)(unaff_RBX + 0x68) = lVar5 + auVar7._8_8_ * 4;
  *(undefined8 *)(unaff_RBX + 0x88) = 0;
  *(undefined8 *)(unaff_RBX + 0x90) = 0;
  *(undefined8 *)(unaff_RBX + 0x98) = 0;
  *(undefined8 *)(unaff_RBX + 0xa0) = unaff_R14;
  *(undefined8 *)(unaff_RBX + 0xa8) = 0;
  *(undefined8 *)(unaff_RBX + 0xb0) = 0;
  auVar7 = func_0x0495a2a0(unaff_RBX + 0xa0,0x10);
  lVar5 = auVar7._0_8_;
  lVar3 = lVar5 - (*(long *)(unaff_RBX + 0x90) - *(long *)(unaff_RBX + 0x88));
  func_0x0eee2f00(lVar3);
  *(long *)(unaff_RBX + 0x88) = lVar3;
  *(long *)(unaff_RBX + 0x90) = lVar5;
  *(long *)(unaff_RBX + 0x98) = lVar5 + auVar7._8_8_ * 8;
  *(undefined8 *)(unaff_RBX + 0xb8) = 0;
  *(undefined8 *)(unaff_RBX + 0xc0) = 0;
  *(undefined8 *)(unaff_RBX + 200) = 0;
  *(undefined8 *)(unaff_RBX + 0xd0) = unaff_R14;
  *(undefined8 *)(unaff_RBX + 0xd8) = 0;
  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
  uVar4 = *(ulong *)(unaff_RBX + 0x30);
  if ((*(long *)(unaff_RBX + 0x40) == 0) ||
     (lVar5 = *(long *)(unaff_RBX + 0x48), uVar4 - lVar5 < 0x110)) {
    uVar1 = uVar4 + 0x11f;
    if ((uVar1 | uVar4) >> 0x20 == 0) {
      uVar1 = (uVar1 & 0xffffffff) / (uVar4 & 0xffffffff);
    }
    else {
      uVar1 = uVar1 / uVar4;
    }
    syscall();
    uRam0000000000000009 = *(undefined8 *)(unaff_RBX + 0x38);
    uRam0000000000000011 = uVar1;
    *(undefined8 *)(unaff_RBX + 0x38) = 9;
    *(long *)(unaff_RBX + 0x50) = *(long *)(unaff_RBX + 0x50) + uVar1;
    uVar4 = *(ulong *)(unaff_RBX + 0x30);
    uVar2 = (uVar4 - uVar4 * uVar1) + 0x120;
    if ((uVar2 | uVar4) >> 0x20 == 0) {
      uVar2 = (uVar2 & 0xffffffff) % (uVar4 & 0xffffffff);
    }
    else {
      uVar2 = uVar2 % uVar4;
    }
    *(ulong *)(unaff_RBX + 0x48) = uVar2;
    lVar5 = uVar4 * (uVar1 - 1) + 9;
    if (uVar2 == 0) {
      lVar5 = 0;
    }
    *(long *)(unaff_RBX + 0x40) = lVar5;
    lVar3 = 0x19;
  }
  else {
    lVar3 = *(long *)(unaff_RBX + 0x40) + lVar5;
    *(ulong *)(unaff_RBX + 0x48) = lVar5 + 0x110U;
    if (lVar5 + 0x110U == uVar4) {
      *(undefined8 *)(unaff_RBX + 0x40) = 0;
      *(undefined8 *)(unaff_RBX + 0x48) = 0;
    }
  }
  uVar4 = *(long *)(unaff_RBX + 0xc0) - *(long *)(unaff_RBX + 0xb8);
  lVar5 = lVar3 - uVar4;
  func_0x0eee2f00(lVar5,*(long *)(unaff_RBX + 0xb8),uVar4);
  *(long *)(unaff_RBX + 0xb8) = lVar5;
  *(long *)(unaff_RBX + 0xc0) = lVar3;
  *(long *)(unaff_RBX + 200) = lVar3 + 0x110;
  if (uVar4 < 0x110) {
    func_0x0eee2dd0(lVar3,0,0x110 - uVar4);
    lVar3 = (0x110 - uVar4) + lVar3;
  }
  else {
    if (uVar4 == 0x110) {
      return;
    }
    lVar3 = lVar5 + 0x110;
  }
  *(long *)(unaff_RBX + 0xc0) = lVar3;
  return;
}


