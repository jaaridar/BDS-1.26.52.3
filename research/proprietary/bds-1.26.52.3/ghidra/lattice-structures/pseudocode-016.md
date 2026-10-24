# FUN_04fd3a62

- entry: `0x4fd3a62`
- body size: 42 bytes
- callers: (none in the analysed set)

```c

void FUN_04fd3a62(void)

{
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  
  func_0x0412a280();
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
  }
  return;
}


```
