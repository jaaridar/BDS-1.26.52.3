/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1be660
 * Label: br::worldgen::processors::Rule::vslot2
 * Body:  [[0d1be660, 0d1be6bd]]
 * Ghidra: wg_br__worldgen__processors__Rule__vslot2
 */


bool wg_br__worldgen__processors__Rule__vslot2(void)

{
  int in_EAX;
  long unaff_RBX;
  int unaff_EBP;
  int unaff_R12D;
  undefined8 *unaff_R13;
  long *unaff_R14;
  undefined8 *unaff_R15;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  float extraout_XMM0_Da;
  long unaff_retaddr;
  long in_stack_00000010;
  
  while( true ) {
    if (!(bool)in_ZF && in_OF == in_SF) {
      unaff_R12D = in_EAX;
    }
    unaff_R15 = unaff_R15 + 1;
    if (unaff_R15 == unaff_R13) break;
    in_EAX = func_0x0c021810(0xe,*unaff_R15);
    in_OF = SBORROW4(in_EAX,unaff_R12D);
    in_SF = in_EAX - unaff_R12D < 0;
    in_ZF = in_EAX == unaff_R12D;
  }
  if (unaff_retaddr != 0) {
    func_0x0412a280(unaff_retaddr,in_stack_00000010 - unaff_retaddr);
  }
  if (unaff_EBP < unaff_R12D) {
    unaff_EBP = unaff_R12D;
  }
  (**(code **)(*unaff_R14 + 0x30))();
  return extraout_XMM0_Da <
         (float)unaff_EBP * *(float *)(unaff_RBX + 0x10) + *(float *)(unaff_RBX + 0xc);
}


