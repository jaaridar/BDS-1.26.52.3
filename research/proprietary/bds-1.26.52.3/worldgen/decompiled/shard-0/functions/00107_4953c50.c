/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4953c50
 * Label: string:minecraft:overworld_height
 * Body:  [[04953c50, 04953c5b] [04953c7e, 04953dab]]
 * Ghidra: FUN_04953c50
 */


/* WARNING: Removing unreachable block (ram,0x04953cbb) */

void FUN_04953c50(undefined8 param_1,ulong param_2)

{
  ulong in_RAX;
  ulong uVar1;
  long lVar2;
  long unaff_RBX;
  ulong uVar3;
  bool in_ZF;
  
  if (in_ZF) {
    param_2 = (in_RAX & 0xffffffff) / (param_2 & 0xffffffff);
  }
  else {
    param_2 = in_RAX / param_2;
  }
  syscall();
  uRam0000000000000009 = *(undefined8 *)(unaff_RBX + 0x38);
  uRam0000000000000011 = param_2;
  *(undefined8 *)(unaff_RBX + 0x38) = 9;
  *(long *)(unaff_RBX + 0x50) = *(long *)(unaff_RBX + 0x50) + param_2;
  uVar3 = *(ulong *)(unaff_RBX + 0x30);
  uVar1 = (uVar3 - uVar3 * param_2) + 0x120;
  if ((uVar1 | uVar3) >> 0x20 == 0) {
    uVar1 = (uVar1 & 0xffffffff) % (uVar3 & 0xffffffff);
  }
  else {
    uVar1 = uVar1 % uVar3;
  }
  *(ulong *)(unaff_RBX + 0x48) = uVar1;
  lVar2 = uVar3 * (param_2 - 1) + 9;
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  *(long *)(unaff_RBX + 0x40) = lVar2;
  uVar3 = *(long *)(unaff_RBX + 0xc0) - *(long *)(unaff_RBX + 0xb8);
  func_0x0eee2f00(0x19 - uVar3,*(long *)(unaff_RBX + 0xb8),uVar3);
  *(ulong *)(unaff_RBX + 0xb8) = 0x19 - uVar3;
  *(undefined8 *)(unaff_RBX + 0xc0) = 0x19;
  *(undefined8 *)(unaff_RBX + 200) = 0x129;
  if (uVar3 < 0x110) {
    func_0x0eee2dd0(0x19,0,0x110 - uVar3);
  }
  else if (uVar3 == 0x110) {
    return;
  }
  *(ulong *)(unaff_RBX + 0xc0) = 0x129 - uVar3;
  return;
}


