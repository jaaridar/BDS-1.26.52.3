# FUN_04862ca0

- entry: `0x4862ca0`
- body size: 22 bytes
- callers: `FUN_04e5fb80`, `FUN_04fbc500`

```c

undefined * FUN_04862ca0(long *param_1)

{
  if ((char)param_1[1] != '\0') {
    return &UNK_01254d89;
  }
  return *(undefined **)(*param_1 + 0x20);
}


```
