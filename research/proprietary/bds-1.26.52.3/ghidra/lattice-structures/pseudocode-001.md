# FUN_040c0bcb

- entry: `0x40c0bcb`
- body size: 6 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Control flow encountered bad instruction data */

void FUN_040c0bcb(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  char in_AL;
  long unaff_RBX;
  
  pcVar1 = (char *)(unaff_RBX + param_3 * 8);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


```
