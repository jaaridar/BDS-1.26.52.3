# FUN_0412e5e0

- entry: `0x412e5e0`
- body size: 119 bytes
- callers: `FUN_04909a40`, `FUN_04e84570`, `FUN_04fbbda0`

```c

void FUN_0412e5e0(long *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_3 < 0x17) {
    *(char *)param_1 = (char)param_3 * '\x02';
    pcVar3 = (char *)((long)param_1 + 1);
  }
  else {
    if (0xfffffffffffffff7 < param_3) {
      FUN_04882e30();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar2 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      lVar2 = (param_3 | 7) + 1;
    }
    pcVar3 = (char *)FUN_0ee32660(lVar2);
    param_1[2] = (long)pcVar3;
    *param_1 = lVar2 + 1;
    param_1[1] = param_3;
  }
  (*(code *)PTR_memmove_0f546508)(pcVar3,param_2,param_3 + 1);
  return;
}


```
