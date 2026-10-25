# FUN_04136630

- entry: `0x4136630`
- body size: 863 bytes
- callers: `FUN_09e20be0`

```c

byte * FUN_04136630(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (999999 < param_2) {
    if (99999999 < param_2) {
      if (param_2 < 1000000000) {
        *param_1 = (byte)(param_2 / 100000000) | 0x30;
        *(undefined2 *)(param_1 + 1) =
             *(undefined2 *)(&UNK_014edb10 + ((ulong)(param_2 % 100000000) / 1000000) * 2);
        uVar1 = (param_2 % 100000000) % 1000000;
        *(undefined2 *)(param_1 + 3) = *(undefined2 *)(&UNK_014edb10 + ((ulong)uVar1 / 10000) * 2);
        uVar1 = uVar1 % 10000;
        *(undefined2 *)(param_1 + 5) = *(undefined2 *)(&UNK_014edb10 + (ulong)(uVar1 / 100) * 2);
        *(undefined2 *)(param_1 + 7) = *(undefined2 *)(&UNK_014edb10 + (ulong)(uVar1 % 100) * 2);
        return param_1 + 9;
      }
      *(undefined2 *)param_1 = *(undefined2 *)(&UNK_014edb10 + (ulong)(param_2 / 100000000) * 2);
      *(undefined2 *)(param_1 + 2) =
           *(undefined2 *)(&UNK_014edb10 + ((ulong)(param_2 % 100000000) / 1000000) * 2);
      uVar1 = (param_2 % 100000000) % 1000000;
      *(undefined2 *)(param_1 + 4) = *(undefined2 *)(&UNK_014edb10 + ((ulong)uVar1 / 10000) * 2);
      uVar1 = uVar1 % 10000;
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(&UNK_014edb10 + (ulong)(uVar1 / 100) * 2);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(&UNK_014edb10 + (ulong)(uVar1 % 100) * 2);
      return param_1 + 10;
    }
    if (param_2 < 10000000) {
      *param_1 = (char)((ulong)param_2 / 1000000) + 0x30;
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)(&UNK_014edb10 + ((ulong)(param_2 % 1000000) / 10000) * 2);
      uVar1 = (param_2 % 1000000) % 10000;
      *(undefined2 *)(param_1 + 3) = *(undefined2 *)(&UNK_014edb10 + (ulong)(uVar1 / 100) * 2);
      *(undefined2 *)(param_1 + 5) = *(undefined2 *)(&UNK_014edb10 + (ulong)(uVar1 % 100) * 2);
      return param_1 + 7;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&UNK_014edb10 + (ulong)(param_2 / 1000000) * 2);
    *(undefined2 *)(param_1 + 2) =
         *(undefined2 *)(&UNK_014edb10 + ((ulong)(param_2 % 1000000) / 10000) * 2);
    uVar1 = (param_2 % 1000000) % 10000;
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(&UNK_014edb10 + (ulong)(uVar1 / 100) * 2);
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(&UNK_014edb10 + (ulong)(uVar1 % 100) * 2);
    return param_1 + 8;
  }
  if (9999 < param_2) {
    if (param_2 < 100000) {
      *param_1 = (byte)((ulong)param_2 / 10000) | 0x30;
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)(&UNK_014edb10 + (ulong)((param_2 % 10000) / 100) * 2);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)(&UNK_014edb10 + (ulong)((param_2 % 10000) % 100) * 2);
      return param_1 + 5;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&UNK_014edb10 + (ulong)(param_2 / 10000) * 2);
    *(undefined2 *)(param_1 + 2) =
         *(undefined2 *)(&UNK_014edb10 + (ulong)((param_2 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)(&UNK_014edb10 + (ulong)((param_2 % 10000) % 100) * 2);
    return param_1 + 6;
  }
  if (param_2 < 100) {
    if (param_2 < 10) {
      *param_1 = (byte)param_2 | 0x30;
      return param_1 + 1;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&UNK_014edb10 + (ulong)param_2 * 2);
    return param_1 + 2;
  }
  uVar1 = (param_2 & 0xffff) / 100;
  if (param_2 < 1000) {
    *param_1 = (byte)uVar1 | 0x30;
    *(undefined2 *)(param_1 + 1) =
         *(undefined2 *)(&UNK_014edb10 + (ulong)(param_2 + uVar1 * -100 & 0xffff) * 2);
    return param_1 + 3;
  }
  *(undefined2 *)param_1 = *(undefined2 *)(&UNK_014edb10 + (ulong)uVar1 * 2);
  *(undefined2 *)(param_1 + 2) =
       *(undefined2 *)(&UNK_014edb10 + (ulong)(param_2 + uVar1 * -100 & 0xffff) * 2);
  return param_1 + 4;
}


```
