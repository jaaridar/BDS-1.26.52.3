# FUN_04e9d850

- entry: `0x4e9d850`
- body size: 273 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Instruction at (ram,0x04e9d854) overlaps instruction at (ram,0x04e9d853)
    */

void FUN_04e9d850(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long unaff_RBP;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  ulong in_stack_00000040;
  undefined8 in_stack_00000050;
  byte bStack0000000000000070;
  undefined7 uStack0000000000000071;
  undefined8 in_stack_00000080;
  long in_stack_00000098;
  long in_stack_000000a8;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000c0;
  
  *(int *)(unaff_RBP + 0x46) = *(int *)(unaff_RBP + 0x46) + param_2;
  do {
    while( true ) {
      _Unwind_Resume();
      func_0x0412a280(in_stack_000000c0,in_stack_000000b0 & 0xfffffffffffffffe);
      if (in_stack_00000098 == 0) break;
      func_0x0412a280(in_stack_00000098,in_stack_000000a8 << 3);
      if ((bStack0000000000000070 & 1) != 0) goto code_r0x04e9d89c;
    }
  } while ((bStack0000000000000070 & 1) == 0);
code_r0x04e9d89c:
  func_0x0412a280(in_stack_00000080,
                  CONCAT71(uStack0000000000000071,bStack0000000000000070) & 0xfffffffffffffffe);
  uVar1 = _Unwind_Resume();
  func_0x04e9c980(&stack0x00000058);
  uVar1 = _Unwind_Resume(uVar1);
joined_r0x04e9d8d7:
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000040 & 1) != 0) goto LAB_04e9d8f3;
  func_0x04e9c980(&stack0x00000058);
  _Unwind_Resume(uVar1);
  goto LAB_04e9d942;
LAB_04e9d8f3:
  func_0x0412a280(in_stack_00000050,in_stack_00000040 & 0xfffffffffffffffe);
  func_0x04e9c980(&stack0x00000058);
  uVar1 = _Unwind_Resume(uVar1);
  if ((in_stack_00000008 & 1) != 0) {
LAB_04e9d942:
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  goto joined_r0x04e9d8d7;
}


```
