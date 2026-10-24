# FUN_04863480

- entry: `0x4863480`
- body size: 48 bytes
- callers: `FUN_04863610`, `FUN_04864e50`, `FUN_04864f30`

```c

void FUN_04863480(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  lVar4 = param_2[1];
  *(char *)(param_1 + 1) = (char)lVar4;
  switch((char)lVar4) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x05':
    *param_1 = *param_2;
    break;
  case '\x04':
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 == (undefined8 *)0x0) {
      *param_1 = 0;
    }
    else {
      lVar4 = FUN_0ee32660(8);
      func_0x04862ea0(lVar4,*puVar1);
      *param_1 = lVar4;
    }
    break;
  case '\x06':
    lVar4 = func_0x048632a0(param_1,*param_2);
    *param_1 = lVar4;
    break;
  case '\a':
    plVar3 = (long *)FUN_0ee32660(0x18);
    puVar1 = (undefined8 *)*param_2;
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)(plVar3 + 1);
    puVar5 = (undefined8 *)*puVar1;
    while (puVar5 != puVar1 + 1) {
      func_0x04866a70(plVar3,plVar3 + 1,puVar5 + 4);
      puVar2 = (undefined8 *)puVar5[1];
      puVar6 = puVar5;
      if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
        do {
          puVar5 = (undefined8 *)puVar6[2];
          bVar7 = puVar6 != (undefined8 *)*puVar5;
          puVar6 = puVar5;
        } while (bVar7);
      }
      else {
        do {
          puVar5 = puVar2;
          puVar2 = (undefined8 *)*puVar5;
        } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
      }
    }
    *param_1 = (long)plVar3;
  }
  return;
}


```
