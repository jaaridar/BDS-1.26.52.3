# FUN_048f0410

- entry: `0x48f0410`
- body size: 451 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048f0410(int *param_1,undefined8 param_2,uint *param_3)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if (*param_1 != 4) {
    return;
  }
  lVar2 = *(long *)(param_1 + 2);
  uVar4 = strlen(param_2);
  if (0xfffffffffffffff7 < uVar4) {
    uVar6 = FUN_04882e30();
    while ((uStack_70 & 1) == 0) {
      _Unwind_Resume(uVar6);
      func_0x0412a280(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
    }
    func_0x0412a280(lStack_60,uStack_70 & 0xfffffffffffffffe);
    _Unwind_Resume(uVar6);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar4 < 0x17) {
    uStack_70 = CONCAT71(uStack_70._1_7_,(char)uVar4 * '\x02');
    lVar5 = (long)&uStack_70 + 1;
    if (uVar4 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_70._1_1_ = 0;
      bVar1 = (byte)*param_3;
      goto joined_r0x048f04e3;
    }
  }
  else {
    uVar7 = 0x1a;
    if ((uVar4 | 7) != 0x17) {
      uVar7 = (uVar4 | 7) + 1;
    }
    lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7);
    if (lVar5 == 0) {
      FUN_0eec74c0(uVar7,0);
    }
    uStack_70 = uVar7 | 1;
    uStack_68 = uVar4;
    lStack_60 = lVar5;
  }
  memcpy(lVar5,param_2,uVar4);
  *(undefined1 *)(lVar5 + uVar4) = 0;
  bVar1 = (byte)*param_3;
joined_r0x048f04e3:
  if ((bVar1 & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_3 + 4);
    uStack_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
  }
  else {
    FUN_0412e5e0(&uStack_58,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 2));
  }
  uVar6 = func_0x04864970(lVar2 + 8,&uStack_70);
  func_0x048631d0(auStack_40,&uStack_58);
  FUN_04863790(uVar6,auStack_40);
  FUN_04863610(auStack_40);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
  }
  if ((uStack_70 & 1) != 0) {
    func_0x0412a280(lStack_60,uStack_70 & 0xfffffffffffffffe);
  }
  return;
}


```
