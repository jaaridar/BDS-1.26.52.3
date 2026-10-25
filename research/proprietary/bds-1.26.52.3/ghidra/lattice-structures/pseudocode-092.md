# FUN_0b634640

- entry: `0xb634640`
- body size: 324 bytes
- callers: `FUN_09cba670`

```c

undefined1  [16] FUN_0b634640(int *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  iVar3 = *param_1;
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
  if (iVar3 < (int)uVar2 && -1 < iVar3) {
    iVar6 = (int)*(ulong *)(param_1 + 4) + -1;
    if ((*(ulong *)(param_1 + 4) >> 0x20 & 1) == 0) {
      iVar6 = 0;
    }
    if (iVar6 + iVar3 < (int)uVar2) {
      lVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x40))(*(long **)(param_1 + 8),*param_1);
      if (((*(char *)((long)param_1 + 0x19) != '\x01') || ((char)param_1[6] != '\x01')) ||
         (*(char *)(lVar4 + 0x22) == '\0')) {
        iVar3 = (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
        lVar4 = **(long **)(param_1 + 2);
        lVar1 = (*(long **)(param_1 + 2))[1];
        uVar2 = 0xffffffff;
        uVar5 = 0;
        if (lVar4 != lVar1) {
          uVar8 = 1;
          do {
            iVar6 = *param_1;
            *param_1 = iVar6 + 1;
            (**(code **)(**(long **)(param_1 + 8) + 0x68))(*(long **)(param_1 + 8),iVar6,lVar4);
            uVar5 = (ulong)((uint)*(byte *)(lVar4 + 0x22) + (int)uVar5);
            lVar4 = lVar4 + 0x98;
            if ((char)param_1[5] == '\x01') {
              if (param_1[4] <= (int)uVar8) goto LAB_0b634773;
            }
            else if (iVar3 <= *param_1) goto LAB_0b634773;
            if (lVar4 == lVar1) goto LAB_0b634773;
            uVar8 = uVar8 + 1;
          } while( true );
        }
        uVar8 = 0;
        uVar7 = 5;
        goto LAB_0b6346c4;
      }
      uVar7 = 3;
      uVar2 = 0xffffffff;
    }
    else {
      uVar7 = 2;
    }
  }
  else {
    uVar7 = 1;
  }
  uVar8 = 0;
  uVar5 = 0;
  goto LAB_0b6346c4;
LAB_0b634773:
  uVar5 = uVar5 << 0x20;
  uVar7 = 5;
LAB_0b6346c4:
  auVar9._8_8_ = uVar8 | uVar5;
  auVar9._0_8_ = (ulong)uVar2 << 0x20 | uVar7;
  return auVar9;
}


```
