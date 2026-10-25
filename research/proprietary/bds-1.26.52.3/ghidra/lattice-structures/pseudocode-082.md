# FUN_09ce36f0

- entry: `0x9ce36f0`
- body size: 328 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09ce36f0(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long unaff_RBX;
  undefined8 unaff_R12;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_50;
  undefined8 *puStack_48;
  undefined4 **ppuStack_40;
  undefined1 *puStack_38;
  undefined1 uStack_30;
  
  uStack_50 = 0;
  if (param_4 != 0) {
    puStack_58 = param_1;
    if (param_4 >> 0x3b != 0) {
      uVar6 = func_0x09ce3840();
      func_0x04913f10(&puStack_58);
      uVar6 = _Unwind_Resume(uVar6);
      func_0x04913fa0(&puStack_48);
      *(undefined8 *)(unaff_RBX + 8) = unaff_R12;
      func_0x04913f10(&puStack_58);
      _Unwind_Resume(uVar6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_4 * 0x20);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_0eec74c0(param_4 * 0x20,0);
    }
    *param_1 = puVar5;
    param_1[1] = puVar5;
    param_1[2] = puVar5 + param_4 * 8;
    ppuStack_40 = &puStack_60;
    uStack_30 = 0;
    puStack_38 = (undefined1 *)&puStack_68;
    puStack_60 = puVar5;
    puStack_48 = param_1;
    for (; param_2 != param_3; param_2 = param_2 + 0x20) {
      puStack_68 = puVar5;
      if ((*param_2 & 1) == 0) {
        *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_2 + 0x10);
        uVar2 = *(undefined4 *)(param_2 + 4);
        uVar3 = *(undefined4 *)(param_2 + 8);
        uVar4 = *(undefined4 *)(param_2 + 0xc);
        *puVar5 = *(undefined4 *)param_2;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
      }
      else {
        FUN_0412e5e0(puVar5,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
      puVar5[6] = *(undefined4 *)(param_2 + 0x18);
      puVar5 = puStack_68 + 8;
    }
    param_1[1] = puVar5;
  }
  return;
}


```
