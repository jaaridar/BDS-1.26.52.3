# FUN_04e7ece0

- entry: `0x4e7ece0`
- body size: 7 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Control flow encountered bad instruction data */

void FUN_04e7ece0(void)

{
  long in_RAX;
  char in_CL;
  
  *(char *)(in_RAX + -0x75) = *(char *)(in_RAX + -0x75) + in_CL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


```
