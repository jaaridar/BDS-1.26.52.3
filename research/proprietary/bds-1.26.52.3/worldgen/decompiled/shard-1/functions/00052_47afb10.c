/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47afb10
 * Label: callee-of:0x871a310
 * Body:  [[047afb10, 047afb9f]]
 * Ghidra: FUN_047afb10
 */


undefined8 FUN_047afb10(undefined8 param_1,long param_2,undefined8 param_3,byte param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long in_RAX;
  long *unaff_R12;
  undefined8 uVar5;
  long unaff_R14;
  undefined8 in_stack_00000010;
  
  *(byte *)(in_RAX + -0x7b) = *(byte *)(in_RAX + -0x7b) | param_4;
  iVar3 = func_0x04775650(*(undefined4 *)(param_2 + 0x20),param_2,unaff_R12[8]);
  uVar5 = 0;
  if (iVar3 != 0) {
    iVar3 = func_0x047719e0(*(undefined8 *)(unaff_R14 + 0x20));
    pcVar1 = *(code **)(*unaff_R12 + 0x128);
    if (pcVar1 != (code *)0x0) {
      if ((iVar3 == 0) || (pcVar2 = *(code **)(*unaff_R12 + 0x138), pcVar2 == (code *)0x0)) {
        iVar4 = (*pcVar1)();
      }
      else {
        iVar4 = (*pcVar2)();
      }
      if (iVar4 == 0) goto LAB_047afb84;
    }
    *(int *)(unaff_R14 + 0x28) = iVar3;
    uVar5 = 1;
  }
LAB_047afb84:
  func_0x047726d0(in_stack_00000010);
  return uVar5;
}


