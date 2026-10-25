# FUN_04862ba0

- entry: `0x4862ba0`
- body size: 61 bytes
- callers: `FUN_04e5fb80`, `FUN_04fbc500`

```c

void FUN_04862ba0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  plVar2 = (long *)*param_1 + 1;
  if ((char)param_1[1] == '\0') {
    plVar3 = (long *)*param_1;
    plVar1 = (long *)*plVar2;
    if ((long *)*plVar2 == (long *)0x0) {
      do {
        plVar2 = (long *)plVar3[2];
        bVar4 = plVar3 != (long *)*plVar2;
        plVar3 = plVar2;
      } while (bVar4);
    }
    else {
      do {
        plVar2 = plVar1;
        plVar1 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  *param_1 = (long)plVar2;
  return;
}


```
