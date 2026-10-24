# FUN_04865530

- entry: `0x4865530`
- body size: 115 bytes
- callers: `FUN_04e5fb80`

```c

undefined8 FUN_04865530(undefined8 param_1,long *param_2)

{
  undefined8 uStack_10;
  
  if ((char)param_2[1] == '\a') {
    if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
      uStack_10 = *(undefined8 *)*param_2;
      func_0x04862ce0(param_1,&uStack_10);
      return param_1;
    }
  }
  else if (((char)param_2[1] == '\x06') && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
    uStack_10 = *(undefined8 *)*param_2;
    func_0x04862cf0(param_1,&uStack_10);
    return param_1;
  }
  func_0x04862cd0(param_1);
  return param_1;
}


```
