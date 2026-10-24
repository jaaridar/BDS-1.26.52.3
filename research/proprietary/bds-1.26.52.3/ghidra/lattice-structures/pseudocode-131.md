# syscall

- entry: `0xeee2d40`
- body size: 6 bytes
- callers: `FUN_04108328`

```c

void syscall(void)

{
  (*(code *)PTR_syscall_0f546438)();
  return;
}


```
