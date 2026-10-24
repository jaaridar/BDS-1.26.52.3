# FUN_04865230

- entry: `0x4865230`
- body size: 479 bytes
- callers: `FUN_04e3fa40`

```c

long * FUN_04865230(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  bool bVar9;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar3 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((char)lVar3 == '\a') {
    puVar1 = (undefined8 *)*param_2;
    uVar4 = puVar1[2];
    plStack_38 = param_1;
    if (uVar4 != 0) {
      if (0xaaaaaaaaaaaaaaa < uVar4) {
LAB_048653a6:
        uVar5 = func_0x0488efe0();
        FUN_04886070(plStack_38);
        lVar3 = _Unwind_Resume(uVar5);
        if ((uStack_50 & 1) != 0) {
          func_0x0412a280(lStack_40,uStack_50 & 0xfffffffffffffffe);
          FUN_04886070(plStack_38);
          lVar3 = _Unwind_Resume(lVar3);
        }
        FUN_04886070(plStack_38);
        _Unwind_Resume();
        return (long *)(ulong)(*(char *)(lVar3 + 8) == '\x05');
      }
      lVar3 = func_0x0ee32660(uVar4 * 0x18);
      *param_1 = lVar3;
      param_1[1] = lVar3;
      param_1[2] = lVar3 + uVar4 * 0x18;
    }
    puVar6 = (undefined8 *)*puVar1;
    while (puVar6 != puVar1 + 1) {
      uVar5 = puVar6[4];
      uVar4 = strlen(uVar5);
      if (0xfffffffffffffff7 < uVar4) {
        FUN_04882e30();
        goto LAB_048653a6;
      }
      if (uVar4 < 0x17) {
        uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar4 * '\x02');
        lVar3 = (long)&uStack_50 + 1;
        if (uVar4 != 0) goto LAB_0486533b;
      }
      else {
        uVar8 = (uVar4 | 7) + 1;
        if ((uVar4 | 7) == 0x17) {
          uVar8 = 0x1a;
        }
        lVar3 = func_0x0ee32660(uVar8);
        uStack_50 = uVar8 | 1;
        param_1 = plStack_38;
        uStack_48 = uVar4;
        lStack_40 = lVar3;
LAB_0486533b:
        memmove(lVar3,uVar5,uVar4);
      }
      *(undefined1 *)(lVar3 + uVar4) = 0;
      func_0x057d8ed0(param_1,&uStack_50);
      if ((uStack_50 & 1) != 0) {
        func_0x0412a280(lStack_40,uStack_50 & 0xfffffffffffffffe);
      }
      puVar2 = (undefined8 *)puVar6[1];
      puVar7 = puVar6;
      if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)puVar7[2];
          bVar9 = puVar7 != (undefined8 *)*puVar6;
          puVar7 = puVar6;
        } while (bVar9);
      }
      else {
        do {
          puVar6 = puVar2;
          puVar2 = (undefined8 *)*puVar6;
        } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
      }
    }
  }
  return param_1;
}


```
