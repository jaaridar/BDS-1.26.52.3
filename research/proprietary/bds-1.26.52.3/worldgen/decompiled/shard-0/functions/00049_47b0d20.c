/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47b0d20
 * Label: callee-of:0x7e0b3b0
 * Body:  [[047b0cc1, 047b0cfa] [047b0d20, 047b0e58]]
 * Ghidra: FUN_047b0d20
 */


uint FUN_047b0d20(void)

{
  char *pcVar1;
  int iVar2;
  long in_RCX;
  long unaff_R15;
  undefined8 in_stack_00000008;
  code *in_stack_00000010;
  undefined8 in_stack_00000020;
  code *in_stack_00000028;
  undefined8 in_stack_00000030;
  
  pcVar1 = (char *)(in_RCX * 5 + -1);
  *pcVar1 = *pcVar1 + (char)in_RCX;
  iVar2 = (*in_stack_00000028)();
  if (iVar2 != 0) {
    iVar2 = (*in_stack_00000010)();
    if (iVar2 != 0) {
      if (*(int *)(unaff_R15 + 0x70) == 0) {
        iVar2 = (*in_stack_00000010)();
        if (iVar2 == 0) goto LAB_047b0e34;
        iVar2 = func_0x04775950();
      }
      else {
        iVar2 = func_0x04775df0(in_stack_00000008);
        if (iVar2 == 0) goto LAB_047b0e34;
        iVar2 = func_0x04775950(in_stack_00000008,in_stack_00000008);
        if (iVar2 == 0) goto LAB_047b0e34;
        iVar2 = func_0x04775c10();
      }
      if (iVar2 != 0) {
        iVar2 = (*in_stack_00000010)();
        if (iVar2 != 0) {
          iVar2 = (*in_stack_00000010)();
          if (iVar2 != 0) {
            iVar2 = func_0x04775950();
            if (iVar2 != 0) {
              iVar2 = (*in_stack_00000028)();
              if (iVar2 != 0) {
                iVar2 = func_0x04771420(in_stack_00000008);
                in_stack_00000020._4_4_ = (uint)(iVar2 == 0);
              }
            }
          }
        }
      }
    }
  }
LAB_047b0e34:
  func_0x047729b0();
  func_0x047726d0(in_stack_00000030);
  return in_stack_00000020._4_4_;
}


