# FUN_0eec74c0

- entry: `0xeec74c0`
- body size: 129 bytes
- callers: `FUN_04885070`, `FUN_04885120`, `FUN_048ac710`, `FUN_048f0410`, `FUN_048f35b0`, `FUN_04e5fb80`, `FUN_04fbc500`, `FUN_08b670e0`, `FUN_09cba670`, `FUN_09cbbb50`, `FUN_09cbbc90`, `FUN_09ce36f0`, `FUN_09e20be0`, `FUN_09e20de0`, `FUN_09e22e10`, `FUN_0c435cf9`, `FUN_0c4510a0`, `FUN_0c8fa2a0`, `FUN_0d293a40`, `FUN_0ee32660`, `FUN_0eeb79f0`, `FUN_0eec09c0`, `FUN_0eee07b0`, `FUN_0eee1060`, `FUN_0eee1580`

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
