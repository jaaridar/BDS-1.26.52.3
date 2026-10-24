# FUN_04862b80

- entry: `0x4862b80`
- body size: 18 bytes
- callers: `FUN_04e5fb80`, `FUN_04fbc500`

```c

undefined8 * FUN_04862b80(long *param_1)

{
  if ((char)param_1[1] == '\x01') {
    return *(undefined8 **)*param_1;
  }
  return (undefined8 *)*param_1 + 5;
}


```
