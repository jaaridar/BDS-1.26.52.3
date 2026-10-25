# FUN_07ca0560

- entry: `0x7ca0560`
- body size: 358 bytes
- callers: `FUN_09e22e10`

```c

void FUN_07ca0560(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_40;
  undefined1 uStack_38;
  
  ppuStack_48 = &puStack_58;
  ppuStack_40 = &puStack_60;
  uStack_38 = 0;
  puVar3 = param_2;
  puStack_58 = param_4;
  uStack_50 = param_1;
  if (param_2 != param_3) {
    do {
      *param_4 = *puVar3;
      if ((*(byte *)(puVar3 + 2) & 1) == 0) {
        *(undefined8 *)(param_4 + 6) = *(undefined8 *)(puVar3 + 6);
        uVar2 = *(undefined8 *)(puVar3 + 4);
        *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar3 + 2);
        *(undefined8 *)(param_4 + 4) = uVar2;
        puStack_60 = param_4;
      }
      else {
        puStack_60 = param_4;
        FUN_0412e5e0(param_4 + 2,*(undefined8 *)(puVar3 + 6),*(undefined8 *)(puVar3 + 4));
      }
      *(undefined8 *)(param_4 + 8) = 0;
      *(undefined8 *)(param_4 + 10) = 0;
      *(undefined8 *)(param_4 + 0xc) = 0;
      func_0x0488f040(param_4 + 8,*(long *)(puVar3 + 8),*(long *)(puVar3 + 10),
                      (*(long *)(puVar3 + 10) - *(long *)(puVar3 + 8) >> 3) * -0x5555555555555555);
      puVar3 = puVar3 + 0xe;
      param_4 = puStack_60 + 0xe;
      puStack_60 = param_4;
    } while (puVar3 != param_3);
    do {
      lVar1 = *(long *)(param_2 + 8);
      if (lVar1 != 0) {
        lVar5 = *(long *)(param_2 + 10);
        lVar4 = lVar1;
        if (lVar1 != lVar5) {
          do {
            if ((*(byte *)(lVar5 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar5 + -8),
                              *(ulong *)(lVar5 + -0x18) & 0xfffffffffffffffe);
            }
            lVar5 = lVar5 + -0x18;
          } while (lVar5 != lVar1);
          lVar4 = *(long *)(param_2 + 8);
        }
        *(long *)(param_2 + 10) = lVar1;
        func_0x0412a280(lVar4,*(long *)(param_2 + 0xc) - lVar4);
      }
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(param_2 + 6),*(ulong *)(param_2 + 2) & 0xfffffffffffffffe);
      }
      param_2 = param_2 + 0xe;
    } while (param_2 != param_3);
  }
  return;
}


```
