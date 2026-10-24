# FUN_04e4ad40

- entry: `0x4e4ad40`
- body size: 3 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Control flow encountered bad instruction data */

void FUN_04e4ad40(void)

{
  long in_RAX;
  
  *(int *)(in_RAX + -0x7f) = *(int *)(in_RAX + -0x7f) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


```
