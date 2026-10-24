# FUN_04885260

- entry: `0x4885260`
- body size: 252 bytes
- callers: `FUN_09e20de0`

```c

long * FUN_04885260(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  long lStack_48;
  char acStack_40 [16];
  
  func_0x0413afd0(acStack_40,param_1);
  if (acStack_40[0] == '\x01') {
    lVar7 = *(long *)(*param_1 + -0x18);
    lVar6 = (long)param_1 + lVar7;
    uVar2 = *(undefined8 *)((long)param_1 + lVar7 + 0x28);
    uVar1 = *(uint *)((long)param_1 + lVar7 + 8);
    iVar4 = *(int *)((long)param_1 + lVar7 + 0x90);
    if (iVar4 == -1) {
      lStack_48 = lVar6;
      func_0x041442d0(auStack_50,lVar6);
      plVar5 = (long *)func_0x041681f0(auStack_50,0xf547a30);
      cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      FUN_04167a40(auStack_50);
      iVar4 = (int)cVar3;
      *(int *)(lStack_48 + 0x90) = iVar4;
      lVar6 = lStack_48;
    }
    lVar7 = param_2;
    if ((uVar1 & 0xb0) == 0x20) {
      lVar7 = param_3 + param_2;
    }
    lVar6 = func_0x048853c0(uVar2,param_2,lVar7,param_3 + param_2,lVar6,(int)(char)iVar4);
    if (lVar6 == 0) {
      func_0x041446c0((long)param_1 + *(long *)(*param_1 + -0x18),
                      *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) | 5);
    }
  }
  func_0x0413b010(acStack_40);
  return param_1;
}


```
