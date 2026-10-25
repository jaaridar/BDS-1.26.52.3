# FUN_04e84580

- entry: `0x4e84580`
- body size: 7 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Control flow encountered bad instruction data */

void FUN_04e84580(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  *param_1 = *param_1 + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


```
