# FUN_04863060

- entry: `0x4863060`
- body size: 30 bytes
- callers: `FUN_0e40207f`

```c

void FUN_04863060(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *(char *)(param_1 + 1) = (char)param_2;
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
    *param_1 = 0;
    return;
  case 5:
    *(undefined1 *)param_1 = 0;
    break;
  case 6:
    puVar1 = (undefined8 *)func_0x0ee32660(0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *param_1 = puVar1;
    return;
  case 7:
    plVar2 = (long *)func_0x0ee32660(0x18);
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = (long)(plVar2 + 1);
    *param_1 = plVar2;
    return;
  }
  return;
}


```
