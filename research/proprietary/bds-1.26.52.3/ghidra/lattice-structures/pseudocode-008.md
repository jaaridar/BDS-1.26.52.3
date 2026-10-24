# FUN_04ea15d0

- entry: `0x4ea15d0`
- body size: 243 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Instruction at (ram,0x04ea15d1) overlaps instruction at (ram,0x04ea15d0)
    */

undefined8 FUN_04ea15d0(int *param_1)

{
  ulong uVar1;
  long unaff_RBX;
  long unaff_RBP;
  undefined1 uStack0000000000000020;
  undefined7 uStack0000000000000021;
  long in_stack_00000030;
  byte bStack0000000000000040;
  undefined7 uStack0000000000000041;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000088;
  
  uVar1 = _uStack0000000000000020;
  *param_1 = *param_1 + -1;
  while( true ) {
    func_0x0412f8c0();
    if ((bStack0000000000000040 & 1) != 0) {
      func_0x0412a280(in_stack_00000050,
                      CONCAT71(uStack0000000000000041,bStack0000000000000040) & 0xfffffffffffffffe);
    }
    if (unaff_RBP + 0x38 == unaff_RBX) break;
    if ((*(byte *)(unaff_RBP + 0x40) & 1) == 0) {
      in_stack_00000060 = unaff_RBP + 0x41;
    }
    else {
      in_stack_00000060 = *(long *)(unaff_RBP + 0x50);
    }
    func_0x0470d9a0();
    unaff_RBP = unaff_RBP + 0x38;
  }
  in_stack_00000088 = (long)&stack0x00000020 + 1;
  if ((uVar1 & 1) != 0) {
    in_stack_00000088 = in_stack_00000030;
  }
  func_0x04b0ace0(1,3,in_stack_00000058,&UNK_013c4ba9,&stack0x00000088);
  if ((uVar1 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,
                    CONCAT71(uStack0000000000000021,uStack0000000000000020) & 0xfffffffffffffffe);
  }
  FUN_0eeb81b0(&stack0x00000090);
  return 0;
}


```
