# FUN_0b63d230

- entry: `0xb63d230`
- body size: 485 bytes
- callers: `FUN_04e5f0c0`

```c

/* WARNING: Possible PIC construction at 0x0b63d318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0b63d31d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0b63d230(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 auStack_20 [2];
  
  *param_1 = &UNK_0f2ccd78;
  if (param_1[1] == _DAT_0f7784f8) {
    bVar2 = *(byte *)(param_1 + 2);
    if ((bVar2 & 1) == 0) {
      uVar7 = (ulong)(bVar2 >> 1);
      if ((DAT_0f778500 & 1) == 0) goto LAB_0b63d266;
LAB_0b63d281:
      if (uVar7 != _DAT_0f778508) goto LAB_0b63d2c5;
    }
    else {
      uVar7 = param_1[3];
      if ((DAT_0f778500 & 1) != 0) goto LAB_0b63d281;
LAB_0b63d266:
      if (uVar7 != DAT_0f778500 >> 1) goto LAB_0b63d2c5;
    }
    if ((bVar2 & 1) == 0) {
      lVar8 = (long)param_1 + 0x11;
      if ((DAT_0f778500 & 1) == 0) goto LAB_0b63d29a;
LAB_0b63d2b5:
      auStack_20[0] = 0xb63d2c1;
      uVar6 = func_0x0eee3000(lVar8,_DAT_0f778510);
      iVar5 = (int)uVar6;
    }
    else {
      lVar8 = param_1[4];
      if ((DAT_0f778500 & 1) != 0) goto LAB_0b63d2b5;
LAB_0b63d29a:
      auStack_20[0] = 0xb63d2a6;
      uVar6 = func_0x0eee3000(lVar8,0xf778501);
      iVar5 = (int)uVar6;
    }
    if (iVar5 != 0) goto LAB_0b63d2c5;
  }
  else {
LAB_0b63d2c5:
    auStack_20[0] = 0xb63d2d2;
    uVar6 = func_0x0b63cba0(param_1 + 1,param_1 + 6);
  }
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0xe);
  }
  else {
    auStack_20[0] = 0xb63d303;
    uVar6 = func_0x0412a280(param_1[0x16],param_1[0x14] & 0xfffffffffffffffe);
    bVar2 = *(byte *)(param_1 + 0xe);
  }
  if ((bVar2 & 1) != 0) {
    lVar8 = param_1[0x10];
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0xb63d31d;
    goto SUB_0412a280;
  }
  plVar3 = (long *)param_1[0xb];
  if (plVar3 == (long *)0x0) {
LAB_0b63d33c:
    uVar7 = param_1[8];
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_0b63d33c;
    auStack_20[0] = 0xb63d3dd;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    auStack_20[0] = 0xb63d3e5;
    func_0x0412c2d0(plVar3);
    uVar7 = param_1[8];
  }
  if ((uVar7 >> 0x37 & 1) != 0) {
    auStack_20[0] = 0xb63d369;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar7 & 0xff00ffffffffffff) - 8);
  }
  uVar6 = 0x80000000000000;
  param_1[8] = 0;
  if ((param_1[7] & 0x80000000000000) != 0) {
    auStack_20[0] = 0xb63d3a6;
    uVar6 = (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[7] & 0xff00ffffffffffff) - 8)
    ;
  }
  param_1[7] = 0;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return uVar6;
  }
  lVar8 = param_1[4];
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = uVar6;
  if (lVar8 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar8);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```
