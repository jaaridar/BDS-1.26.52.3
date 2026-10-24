# FUN_07c9d400

- entry: `0x7c9d400`
- body size: 148 bytes
- callers: `FUN_09e22e10`

```c

void FUN_07c9d400(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_1;
  for (lVar5 = param_1[1]; lVar1 != lVar5; lVar5 = lVar5 + -0x38) {
    lVar2 = *(long *)(lVar5 + -0x18);
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar5 + -0x10);
      lVar3 = lVar2;
      if (lVar2 != lVar4) {
        do {
          if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar4 + -8),
                            *(ulong *)(lVar4 + -0x18) & 0xfffffffffffffffe);
          }
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != lVar2);
        lVar3 = *(long *)(lVar5 + -0x18);
      }
      *(long *)(lVar5 + -0x10) = lVar2;
      func_0x0412a280(lVar3,*(long *)(lVar5 + -8) - lVar3);
    }
    if ((*(byte *)(lVar5 + -0x30) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar5 + -0x20),*(ulong *)(lVar5 + -0x30) & 0xfffffffffffffffe)
      ;
    }
  }
  param_1[1] = lVar1;
  return;
}


```
