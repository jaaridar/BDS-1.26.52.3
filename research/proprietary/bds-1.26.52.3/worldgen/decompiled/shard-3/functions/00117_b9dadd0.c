/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb9dadd0
 * Label: string:ZN9Scripting8internal19BaseScriptComponentC1IN6Editor12Scrip
 * Body:  [[0b9dadaf, 0b9dadc4] [0b9dadd0, 0b9dae20]]
 * Ghidra: FUN_0b9dadd0
 */


void FUN_0b9dadd0(void)

{
  undefined8 in_RAX;
  long in_RCX;
  ulong uVar1;
  long unaff_RBX;
  ulong unaff_RBP;
  long unaff_R14;
  long *unaff_R15;
  
  *(long **)(unaff_RBX + 0x10) = unaff_R15;
  *(undefined8 *)(in_RCX + unaff_R14 * 8) = in_RAX;
  if (*unaff_R15 != 0) {
    uVar1 = *(ulong *)(*unaff_R15 + 8);
    if ((unaff_RBP & unaff_RBP - 1) == 0) {
      *(long **)(in_RCX + (uVar1 & unaff_RBP - 1) * 8) = unaff_R15;
    }
    else {
      if (unaff_RBP <= uVar1) {
        if ((uVar1 | unaff_RBP) >> 0x20 == 0) {
          *(long **)(in_RCX + ((uVar1 & 0xffffffff) % (unaff_RBP & 0xffffffff)) * 8) = unaff_R15;
          goto LAB_0b9dadaf;
        }
        uVar1 = uVar1 % unaff_RBP;
      }
      *(long **)(in_RCX + uVar1 * 8) = unaff_R15;
    }
  }
LAB_0b9dadaf:
  *(long *)(unaff_RBX + 0x18) = *(long *)(unaff_RBX + 0x18) + 1;
  return;
}


