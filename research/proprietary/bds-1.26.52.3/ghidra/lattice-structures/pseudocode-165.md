# FUN_0c455670

- entry: `0xc455670`
- body size: 1145 bytes
- callers: `FUN_0c4510a0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c455670(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte bVar9;
  long *plVar10;
  undefined4 *puVar11;
  long *in_FS_OFFSET;
  undefined1 auStack_a8 [6];
  byte bStack_a2;
  ulong uStack_a0;
  ulong uStack_98;
  char cStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  ulong uStack_78;
  char cStack_70;
  long lStack_68;
  long lStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  char cStack_40;
  long lStack_38;
  long *plStack_30;
  
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0xb68) == '\0') {
    *(undefined1 *)(lVar2 + -0xb68) = 1;
    FUN_0417d010(&UNK_0ca00780,lVar2 + -0xb78,0xf53dab8);
    lVar3 = *(long *)(lVar2 + -0xb78);
    lVar2 = *(long *)(lVar2 + -0xb70);
  }
  else {
    lVar3 = *(long *)(lVar2 + -0xb78);
    lVar2 = *(long *)(lVar2 + -0xb70);
  }
  if (lVar2 != 0) {
    LOCK();
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    UNLOCK();
    func_0x0412c2d0(lVar2);
  }
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  func_0x0ca14910(&lStack_38,&lStack_68);
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  if ((lVar2 == 0) ||
     (plVar10 = (long *)FUN_0412c300(lVar2), plStack_80 = plVar10, plVar10 == (long *)0x0)) {
    plVar10 = (long *)0x0;
  }
  else {
    uStack_88 = lVar3;
    if (lVar3 != 0) {
      cVar8 = *(char *)(lVar3 + 0x2e8);
      LOCK();
      plVar1 = plVar10 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        func_0x0412c2d0(plVar10);
      }
      if (cVar8 == '\0') goto LAB_0c4559dd;
      func_0x0ca14670(&uStack_88,&lStack_68);
      if (((long *)param_1[1] == (long *)0x0) || (lVar2 = *(long *)param_1[1], lVar2 == 0)) {
        if (param_1[3] != 0) {
          func_0x0d88e390(auStack_a8,*(long *)(param_1[3] + 0x68) + 0x150);
          if ((cStack_90 == '\0') && (cStack_70 == '\0')) {
            bVar9 = 1;
            if (((bStack_a2 & 1) != 0) && (uStack_88._7_1_ == '\0')) {
              bVar9 = func_0x04fa7a10(&uStack_88,auStack_a8);
              bVar9 = bVar9 ^ 1;
            }
          }
          else {
            bVar9 = 0;
          }
          if ((uStack_98 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_98 & 0xff00ffffffffffff) - 8);
          }
          uStack_98 = 0;
          if ((uStack_a0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a0 & 0xff00ffffffffffff) - 8);
          }
          goto LAB_0c4558e3;
        }
      }
      else {
        func_0x0d88e390(auStack_a8,lVar2 + 0x118);
        if ((cStack_90 == '\0') && (cStack_70 == '\0')) {
          bVar9 = 1;
          if (((bStack_a2 & 1) != 0) && (uStack_88._7_1_ == '\0')) {
            bVar9 = func_0x04fa7a10(&uStack_88,auStack_a8);
            bVar9 = bVar9 ^ 1;
          }
        }
        else {
          bVar9 = 0;
        }
        if ((uStack_98 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_98 & 0xff00ffffffffffff) - 8);
        }
        uStack_98 = 0;
        if ((uStack_a0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a0 & 0xff00ffffffffffff) - 8);
        }
LAB_0c4558e3:
        if (bVar9 == 0) {
          puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
          if (puVar11 == (undefined4 *)0x0) {
            FUN_0eec74c0(0x38,0);
          }
          uVar7 = _UNK_01281d0b;
          *(undefined8 *)(puVar11 + 8) = _DAT_01281d03;
          *(undefined8 *)(puVar11 + 10) = uVar7;
          uVar7 = _UNK_01281cfb;
          *(undefined8 *)(puVar11 + 4) = _DAT_01281cf3;
          *(undefined8 *)(puVar11 + 6) = uVar7;
          uVar6 = _UNK_01281cef;
          uVar5 = _UNK_01281ceb;
          uVar4 = _UNK_01281ce7;
          *puVar11 = _DAT_01281ce3;
          puVar11[1] = uVar4;
          puVar11[2] = uVar5;
          puVar11[3] = uVar6;
          *(undefined2 *)(puVar11 + 0xc) = 0x2e6e;
          *(undefined1 *)((long)puVar11 + 0x32) = 0;
          FUN_0412e5e0(&bStack_58,puVar11,0x32);
          cStack_40 = '\x01';
          (**(code **)(*param_1 + 0x28))(param_1,&bStack_58);
          if ((cStack_40 == '\x01') && ((bStack_58 & 1) != 0)) {
            func_0x0412a280(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar11,0x38);
        }
      }
      if ((uStack_78 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_78 & 0xff00ffffffffffff) - 8);
      }
      uStack_78 = 0;
      if (((ulong)plStack_80 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)plStack_80 & 0xff00ffffffffffff) - 8);
      }
      goto LAB_0c4559dd;
    }
  }
  cVar8 = FUN_0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,&UNK_0131c097,&UNK_013bce49);
  if (cVar8 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
LAB_0c4559dd:
  if (lStack_38 != 0) {
    func_0x0412d6b0();
  }
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_30 + 1;
    lVar2 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      func_0x0412c2d0(plStack_30);
    }
  }
  if (lStack_60 != 0) {
    func_0x0412c2d0();
  }
  return;
}


```
