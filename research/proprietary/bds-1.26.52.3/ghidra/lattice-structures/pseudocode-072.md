# FUN_0470d9a0

- entry: `0x470d9a0`
- body size: 221 bytes
- callers: `FUN_04e60d90`, `FUN_04fbd340`, `FUN_09cba670`

```c

ulong * FUN_0470d9a0(ulong *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined1 *puStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined1 auStack_228 [504];
  
  uStack_240 = 0;
  puStack_230 = &UNK_05a971f0;
  uStack_238 = 500;
  puStack_248 = auStack_228;
  func_0x0470de60(&puStack_248);
  uVar2 = uStack_240;
  puVar1 = puStack_248;
  if (uStack_240 < 0x17) {
    *(char *)param_1 = (char)uStack_240 * '\x02';
    pcVar3 = (char *)((long)param_1 + 1);
    if (uStack_240 == 0) {
      *pcVar3 = '\0';
      goto joined_r0x0470da79;
    }
  }
  else {
    uVar4 = 0x1a;
    if ((uStack_240 | 7) != 0x17) {
      uVar4 = (uStack_240 | 7) + 1;
    }
    pcVar3 = (char *)FUN_0ee32660(uVar4);
    param_1[2] = (ulong)pcVar3;
    *param_1 = uVar4 | 1;
    param_1[1] = uVar2;
  }
  memmove(pcVar3,puVar1,uVar2);
  pcVar3[uVar2] = '\0';
joined_r0x0470da79:
  if (puStack_248 != auStack_228) {
    func_0x0ee326a0();
  }
  return param_1;
}


```
