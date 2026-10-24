# FUN_048655b0

- entry: `0x48655b0`
- body size: 117 bytes
- callers: `FUN_04e5fb80`, `FUN_04fbc500`

```c

undefined8 FUN_048655b0(undefined8 param_1,long *param_2)

{
  long lStack_10;
  
  if ((char)param_2[1] == '\a') {
    if (*param_2 != 0) {
      lStack_10 = *param_2 + 8;
      FUN_04862ce0(param_1,&lStack_10);
      return param_1;
    }
  }
  else if (((char)param_2[1] == '\x06') && (*param_2 != 0)) {
    lStack_10 = *(long *)(*param_2 + 8);
    FUN_04862cf0(param_1,&lStack_10);
    return param_1;
  }
  FUN_04862cd0(param_1);
  return param_1;
}


```
