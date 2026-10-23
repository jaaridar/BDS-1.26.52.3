# FUN_0529bef0

- entry: `0x529bef0`
- body size: 640 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0529bef0(long param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uStack_a20;
  undefined *puStack_a18;
  undefined *puStack_a10;
  uint uStack_a08;
  uint uStack_a04;
  uint auStack_a00 [623];
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined **ppuStack_20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = (param_2 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * param_2 + lVar3;
  lVar2 = (lVar2 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar2 + lVar3;
  *(long *)(param_1 + 8) = (lVar2 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar2 + lVar3;
  uStack_a08 = (int)param_2 + *(int *)(param_1 + 0x18);
  puStack_a18 = &UNK_0f147b18;
  ppuStack_20 = &puStack_a10;
  puStack_a10 = &UNK_0f5356d0;
  uStack_30 = 0x100000000000000;
  uStack_3c = 0;
  uStack_38 = 0;
  lVar3 = 7;
  uVar5 = uStack_a08;
  while( true ) {
    uVar4 = ((ulong)((uVar5 >> 0x1e ^ uVar5) * 0x6c078965) + lVar3) - 6;
    uVar5 = (uint)uVar4;
    *(uint *)((long)&uStack_a20 + lVar3 * 4 + 4) = uVar5;
    if (lVar3 == 0x193) break;
    uVar5 = ((int)lVar3 + ((uint)(uVar4 >> 0x1e) & 3 ^ uVar5) * 0x6c078965) - 5;
    *(uint *)((long)&puStack_a18 + lVar3 * 4) = uVar5;
    lVar3 = lVar3 + 2;
  }
  uStack_44 = 0x18e00000270;
  uStack_28 = 1;
  uStack_a20 = 0x529c015;
  uStack_a04 = uStack_a08;
  puVar1 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar1 == (undefined4 *)0x0) {
    uStack_a20 = 0x529c15a;
    FUN_0eec74c0(0x28,0);
  }
  *puVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  uStack_a20 = 0x529c04d;
  FUN_0d341b00(puVar1,&puStack_a18,0,0);
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 **)(param_1 + 0x20) = puVar1;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 8);
    if (lVar2 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
      uStack_a20 = 0x529c073;
      thunk_FUN_0ee326a0(lVar2,*(long *)(lVar3 + 0x18) - lVar2);
    }
    uStack_a20 = 0x529c080;
    thunk_FUN_0ee326a0(lVar3,0x28);
  }
  uStack_a20 = 0x529c096;
  puVar1 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar1 == (undefined4 *)0x0) {
    uStack_a20 = 0x529c16b;
    FUN_0eec74c0(0x28,0);
  }
  *puVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  uStack_a20 = 0x529c0ce;
  FUN_0d341b00(puVar1,&puStack_a18,0,0);
  lVar3 = *(long *)(param_1 + 0x28);
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 8);
    if (lVar2 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
      uStack_a20 = 0x529c0f4;
      thunk_FUN_0ee326a0(lVar2,*(long *)(lVar3 + 0x18) - lVar2);
    }
    uStack_a20 = 0x529c101;
    thunk_FUN_0ee326a0(lVar3,0x28);
  }
  *(float *)(param_1 + 0x30) =
       _DAT_011988b0 /
       (float)((_DAT_014f0478 / (double)(*(int *)(param_1 + 0x1c) + 1) + _DAT_014f0478) *
              _DAT_014f0518);
  return;
}


```
