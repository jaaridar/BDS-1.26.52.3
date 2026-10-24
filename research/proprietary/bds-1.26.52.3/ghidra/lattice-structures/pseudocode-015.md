# FUN_04fd38b0

- entry: `0x4fd38b0`
- body size: 190 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Instruction at (ram,0x04fd38fa) overlaps instruction at (ram,0x04fd38f7)
    */

void FUN_04fd38b0(long param_1,ulong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  long unaff_RBP;
  bool in_OF;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  ulong in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000080;
  
  if (in_OF) {
    piVar1 = (int *)(unaff_RBP + 0x48 + param_1);
    *piVar1 = *piVar1 + (int)param_2;
    goto LAB_04fd38ff_4;
  }
  func_0x0412a280(in_stack_00000080,param_2 & 0xfffffffffffffffe);
  uVar2 = _Unwind_Resume();
  func_0x04fd2990(&stack0x00000058);
  unaff_RBX = _Unwind_Resume(uVar2);
joined_r0x04fd38e7:
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000040 & 1) != 0) goto LAB_04fd38ff_4;
  func_0x04fd2990(&stack0x00000058);
  _Unwind_Resume(unaff_RBX);
  goto LAB_04fd3952;
LAB_04fd38ff_4:
  func_0x0412a280(in_stack_00000050,in_stack_00000040 & 0xfffffffffffffffe);
  func_0x04fd2990(&stack0x00000058);
  unaff_RBX = _Unwind_Resume(unaff_RBX);
  if ((in_stack_00000008 & 1) != 0) {
LAB_04fd3952:
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  goto joined_r0x04fd38e7;
}


```
