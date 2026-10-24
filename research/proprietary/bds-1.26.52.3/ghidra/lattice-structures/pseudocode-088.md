# FUN_048f35b0

- entry: `0x48f35b0`
- body size: 324 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048f35b0(int *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  if (*param_1 != 4) {
    return;
  }
  lVar1 = *(long *)(param_1 + 2);
  uVar3 = strlen(param_2);
  if (0xfffffffffffffff7 < uVar3) {
    uVar5 = FUN_04882e30();
    if ((uStack_58 & 1) != 0) {
      func_0x0412a280(lStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    _Unwind_Resume(uVar5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar3 < 0x17) {
    uStack_58 = CONCAT71(uStack_58._1_7_,(char)uVar3 * '\x02');
    lVar4 = (long)&uStack_58 + 1;
    if (uVar3 == 0) goto LAB_048f365a;
  }
  else {
    uVar6 = 0x1a;
    if ((uVar3 | 7) != 0x17) {
      uVar6 = (uVar3 | 7) + 1;
    }
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (lVar4 == 0) {
      FUN_0eec74c0(uVar6,0);
    }
    uStack_58 = uVar6 | 1;
    uStack_50 = uVar3;
    lStack_48 = lVar4;
  }
  memcpy(lVar4,param_2,uVar3);
LAB_048f365a:
  *(undefined1 *)(lVar4 + uVar3) = 0;
  uVar5 = FUN_04864970(lVar1 + 8,&uStack_58);
  func_0x048630e0(auStack_40,param_3);
  FUN_04863790(uVar5,auStack_40);
  FUN_04863610(auStack_40);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(lStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return;
}


```
