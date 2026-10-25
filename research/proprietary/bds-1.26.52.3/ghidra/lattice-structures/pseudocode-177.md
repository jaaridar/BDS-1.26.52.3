# FUN_04864970

- entry: `0x4864970`
- body size: 359 bytes
- callers: `FUN_048f0410`, `FUN_048f35b0`

```c

long FUN_04864970(long *param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [16];
  
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  if ((char)param_1[1] != '\a') {
    FUN_04863060(&lStack_58,7);
    FUN_04863060(&lStack_40,0);
    lVar1 = param_1[1];
    lVar5 = *param_1;
    *(undefined1 *)(param_1 + 1) = uStack_50;
    uStack_50 = auStack_38[0];
    *param_1 = lStack_58;
    lStack_58 = lStack_40;
    lStack_40 = lVar5;
    auStack_38[0] = (char)lVar1;
    FUN_04863610(&lStack_40);
    FUN_04863610(&lStack_58);
  }
  lVar1 = *param_1;
  lVar5 = lVar1 + 8;
  lVar6 = *(long *)(lVar1 + 8);
  lVar4 = lVar5;
  if (lVar6 != 0) {
    do {
      uVar2 = strcmp(*(undefined8 *)(lVar6 + 0x20),param_2);
      if (-1 < (int)uVar2) {
        lVar4 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + (ulong)(uVar2 >> 0x1f) * 8);
    } while (lVar6 != 0);
    bVar7 = lVar4 != lVar5;
    lVar5 = lVar4;
    if ((bVar7) && (iVar3 = strcmp(*(undefined8 *)(lVar4 + 0x20),param_2), iVar3 == 0))
    goto LAB_048647cc;
  }
  func_0x04862ea0(auStack_48,param_2);
  FUN_04863060(&lStack_58,0);
  func_0x04862fc0(&lStack_40,auStack_48);
  func_0x048635d0(auStack_38,&lStack_58);
  lVar4 = func_0x04866f50(lVar1,lVar5,&lStack_40,&lStack_40);
  FUN_04863610(auStack_38);
  FUN_04862fd0(&lStack_40);
  FUN_04863610(&lStack_58);
  FUN_04862fd0(auStack_48);
LAB_048647cc:
  return lVar4 + 0x28;
}


```
