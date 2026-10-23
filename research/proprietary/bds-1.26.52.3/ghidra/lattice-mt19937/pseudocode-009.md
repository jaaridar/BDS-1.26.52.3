# FUN_0eec74c0

- entry: `0xeec74c0`
- body size: 129 bytes
- callers: `FUN_0d33fd60`, `FUN_0d3430a0`

```c

void FUN_0eec74c0(ulong param_1,undefined8 param_2)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  
  if (DAT_0f7b9d08 == '\0') {
    DAT_0f7b9d08 = '\x01';
    puVar2 = &UNK_013a8e32;
    if (0x1f400000 < param_1) {
      puVar2 = &UNK_012a0bfc;
    }
    cVar1 = func_0x0eeddcf0(puVar2,&UNK_01198d5e,0x47,&UNK_0145bad8,&UNK_01306baf,param_1,param_2,
                            0x1f400000);
    if (cVar1 != '\0') {
      UNRECOVERED_JUMPTABLE = (code *)&UNK_0eec7550;
      if (0x1f400000 < param_1) {
        UNRECOVERED_JUMPTABLE = (code *)&UNK_0eede830;
      }
                    /* WARNING: Could not recover jumptable at 0x0eec753d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}


```
