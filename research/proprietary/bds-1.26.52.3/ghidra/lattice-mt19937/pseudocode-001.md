# FUN_0ee4a030

- entry: `0xee4a030`
- body size: 426 bytes
- callers: `FUN_08b5a9c0`, `FUN_08b5aa40`

```c

uint FUN_0ee4a030(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x9cc);
  uVar4 = (ulong)uVar6;
  if ((int)uVar6 < 0x271) {
    if (uVar6 == 0x270) goto LAB_0ee4a0a7;
    if (0xe2 < (int)uVar6) {
      if (uVar6 < 0x26f) {
        uVar2 = *(uint *)(param_1 + 0x10 + uVar4 * 4);
        *(uint *)(param_1 + 0xc + uVar4 * 4) =
             *(uint *)(&UNK_014f0860 + (ulong)(uVar2 & 1) * 4) ^
             *(uint *)(param_1 + 0xc + (ulong)(uVar6 - 0xe3) * 4) ^
             (uVar2 & 0x7ffffffe | *(uint *)(param_1 + 0xc + uVar4 * 4) & 0x80000000) >> 1;
      }
      else {
        *(uint *)(param_1 + 0x9c8) =
             *(uint *)(&UNK_014f0860 + (ulong)(*(uint *)(param_1 + 0xc) & 1) * 4) ^
             *(uint *)(param_1 + 0x63c) ^
             (*(uint *)(param_1 + 0xc) & 0x7ffffffe | *(uint *)(param_1 + 0x9c8) & 0x80000000) >> 1;
      }
      goto LAB_0ee4a114;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0x1571;
    *(undefined4 *)(param_1 + 0x9cc) = 1;
    iVar3 = 1;
    do {
      uVar6 = *(uint *)(param_1 + 8 + (long)iVar3 * 4);
      *(uint *)(param_1 + 0xc + (long)iVar3 * 4) = (uVar6 >> 0x1e ^ uVar6) * 0x6c078965 + iVar3;
      iVar1 = *(int *)(param_1 + 0x9cc);
      iVar3 = iVar1 + 1;
      *(int *)(param_1 + 0x9cc) = iVar3;
    } while (iVar1 < 0x26f);
    *(undefined4 *)(param_1 + 0x9d0) = 0x270;
LAB_0ee4a0a7:
    *(undefined4 *)(param_1 + 0x9cc) = 0;
    uVar6 = 0;
  }
  lVar5 = (long)(int)uVar6;
  uVar6 = *(uint *)(param_1 + 0x10 + lVar5 * 4);
  *(uint *)(param_1 + 0xc + lVar5 * 4) =
       *(uint *)(&UNK_014f0860 + (ulong)(uVar6 & 1) * 4) ^ *(uint *)(param_1 + 0x640 + lVar5 * 4) ^
       (uVar6 & 0x7ffffffe | *(uint *)(param_1 + 0xc + lVar5 * 4) & 0x80000000) >> 1;
  lVar5 = (long)*(int *)(param_1 + 0x9d0);
  if (lVar5 < 0x270) {
    uVar6 = *(uint *)(param_1 + 8 + lVar5 * 4);
    *(uint *)(param_1 + 0xc + lVar5 * 4) =
         (uVar6 >> 0x1e ^ uVar6) * 0x6c078965 + *(int *)(param_1 + 0x9d0);
    *(int *)(param_1 + 0x9d0) = *(int *)(param_1 + 0x9d0) + 1;
  }
LAB_0ee4a114:
  iVar3 = *(int *)(param_1 + 0x9cc);
  *(int *)(param_1 + 0x9cc) = iVar3 + 1;
  uVar6 = *(uint *)(param_1 + 0xc + (long)iVar3 * 4);
  uVar6 = uVar6 >> 0xb ^ uVar6;
  uVar6 = (uVar6 & 0x13a58ad) << 7 ^ uVar6;
  uVar6 = (uVar6 & 0x1df8c) << 0xf ^ uVar6;
  return uVar6 >> 0x12 ^ uVar6;
}


```
