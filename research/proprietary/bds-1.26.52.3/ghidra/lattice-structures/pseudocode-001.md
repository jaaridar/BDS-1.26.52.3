# FUN_04e3e760

- entry: `0x4e3e760`
- body size: 89 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Instruction at (ram,0x04e3e761) overlaps instruction at (ram,0x04e3e760)
    */

void FUN_04e3e760(void)

{
  byte bVar1;
  code *pcVar2;
  char in_AL;
  byte *in_RCX;
  long unaff_RBX;
  byte *in_stack_00000010;
  
  *in_RCX = *in_RCX + in_AL;
  bVar1 = *in_RCX;
  while (bVar1 == 0) {
    while( true ) {
      func_0x0eee2d70();
      func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x68),
                      *(ulong *)(unaff_RBX + 0x58) & 0xfffffffffffffffe);
      if (*(long *)(unaff_RBX + 0x40) == 0) break;
      func_0x0412a280(*(long *)(unaff_RBX + 0x40),*(long *)(unaff_RBX + 0x50) << 3);
      if ((*in_stack_00000010 & 1) != 0) goto LAB_04e3e79f;
    }
    bVar1 = *in_stack_00000010 & 1;
  }
LAB_04e3e79f:
  func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x28),
                  *(ulong *)(unaff_RBX + 0x18) & 0xfffffffffffffffe);
  func_0x0eee2d70();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


```
