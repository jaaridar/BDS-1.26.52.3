# FUN_0d292640

- entry: `0xd292640`
- body size: 1188 bytes
- callers: `FUN_09db9c20`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d292640(undefined8 *param_1,long param_2,int *param_3,long *param_4,char param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plStack_68;
  long *plStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar12 = *(undefined8 **)(param_2 + 0x60);
  if (puVar12 != *(undefined8 **)(param_2 + 0x68)) {
    do {
      plVar13 = (long *)*puVar12;
      if ((int)*plVar13 == 0) {
        if (plVar13[1] == *(long *)(param_3 + 2)) goto LAB_0d2926ba;
      }
      else if ((((int)plVar13[2] == param_3[4]) && (*(int *)((long)plVar13 + 0x14) == param_3[5]))
              && ((int)plVar13[3] == param_3[6])) {
LAB_0d2926ba:
        plVar10 = (long *)puVar12[1];
        if (plVar10 == (long *)0x0) {
          *param_1 = plVar13;
          *(char *)((long)plVar13 + 0x3c) = param_5;
          plStack_60 = (long *)0x0;
          bVar5 = true;
          plStack_68 = plVar13;
          goto LAB_0d2929e3;
        }
        LOCK();
        plVar10[1] = plVar10[1] + 1;
        UNLOCK();
        *param_1 = plVar13;
        param_1[1] = plVar10;
        goto LAB_0d2929c9;
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != *(undefined8 **)(param_2 + 0x68));
  }
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
  if (plVar10 == (long *)0x0) {
    FUN_0eec74c0(0x70,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0f45de48;
  iVar2 = *param_3;
  *(int *)(plVar10 + 3) = iVar2;
  plVar10[4] = -1;
  plVar10[5] = 0;
  *(undefined4 *)(plVar10 + 6) = 0;
  if (iVar2 == 0) {
    plVar10[4] = *(long *)(param_3 + 2);
  }
  else {
    *(int *)(plVar10 + 6) = param_3[6];
    plVar10[5] = *(long *)(param_3 + 4);
  }
  *(undefined1 *)(plVar10 + 7) = 1;
  uVar7 = _UNK_014e2bbc;
  uVar6 = _UNK_014e2bb8;
  uVar9 = _UNK_014e2bb4;
  *(undefined4 *)((long)plVar10 + 0x3c) = _DAT_014e2bb0;
  *(undefined4 *)(plVar10 + 8) = uVar9;
  *(undefined4 *)((long)plVar10 + 0x44) = uVar6;
  *(undefined4 *)(plVar10 + 9) = uVar7;
  *(undefined8 *)((long)plVar10 + 0x4c) = 0;
  *(undefined1 *)((long)plVar10 + 0x54) = 0;
  uVar9 = (**(code **)(*param_4 + 0x98))(param_4);
  *(undefined4 *)(plVar10 + 0xb) = uVar9;
  lVar11 = (**(code **)(*param_4 + 0x130))(param_4);
  if ((*(long *)(lVar11 + 0x1a8) == 0) &&
     (cVar8 = FUN_0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,&UNK_012cdf98),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar16 = *(undefined8 *)(lVar11 + 0x1a8);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x240);
  if (puVar12 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x240,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0f0409a0;
  func_0x0cb341f0(puVar12 + 4,uVar16,0);
  plVar10[0xc] = (long)(puVar12 + 4);
  plVar10[0xd] = (long)puVar12;
  plVar13 = (long *)(**(code **)(*param_4 + 0x150))(param_4);
  uStack_58 = (undefined4)plVar10[0xc];
  uStack_54 = *(undefined4 *)((long)plVar10 + 100);
  uStack_50 = (undefined4)plVar10[0xd];
  uStack_4c = *(undefined4 *)((long)plVar10 + 0x6c);
  if (plVar10[0xd] != 0) {
    LOCK();
    plVar1 = (long *)(plVar10[0xd] + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  (**(code **)(*plVar13 + 0x6d0))(plVar13,&uStack_58);
  plVar13 = plVar10 + 3;
  if (CONCAT44(uStack_4c,uStack_50) != 0) {
    func_0x0412c2d0();
  }
  *param_1 = plVar13;
  param_1[1] = plVar10;
  puVar12 = *(undefined8 **)(param_2 + 0x68);
  if (puVar12 < *(undefined8 **)(param_2 + 0x70)) {
    *puVar12 = plVar13;
    puVar12[1] = plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    puVar12 = puVar12 + 2;
  }
  else {
    lVar11 = (long)puVar12 - *(long *)(param_2 + 0x60);
    uVar17 = (lVar11 >> 4) + 1;
    if (uVar17 >> 0x3c != 0) {
      func_0x0d298dd0();
LAB_0d292a9d:
      uVar16 = FUN_04882eb0();
      if (CONCAT44(uStack_4c,uStack_50) != 0) {
        func_0x0412c2d0();
      }
      func_0x064bd3a0(plVar10 + 0xc);
      func_0x0412c1f0(plVar10);
      func_0x0412a280(plVar10,0x70);
      func_0x0c4668c0(param_1);
      _Unwind_Resume(uVar16);
      pcVar4 = (code *)swi(3);
      puVar12 = (undefined8 *)(*pcVar4)();
      return puVar12;
    }
    uVar14 = (long)*(undefined8 **)(param_2 + 0x70) - *(long *)(param_2 + 0x60);
    uVar18 = (long)uVar14 >> 3;
    if (uVar18 <= uVar17) {
      uVar18 = uVar17;
    }
    if (0x7fffffffffffffef < uVar14) {
      uVar18 = 0xfffffffffffffff;
    }
    if (uVar18 == 0) {
      lVar15 = 0;
    }
    else {
      if (0xfffffffffffffff < uVar18) goto LAB_0d292a9d;
      lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 << 4);
      if (lVar15 == 0) {
        FUN_0eec74c0(uVar18 << 4,0);
        lVar15 = 0;
      }
    }
    *(long **)(lVar15 + lVar11) = plVar13;
    *(long **)(lVar15 + 8 + lVar11) = plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    lVar3 = *(long *)(param_2 + 0x60);
    lStack_40 = *(long *)(param_2 + 0x70);
    puVar12 = (undefined8 *)(lVar11 + lVar15 + 0x10);
    lStack_38 = (lVar15 + lVar11) - (*(long *)(param_2 + 0x68) - lVar3);
    memcpy(lStack_38,lVar3);
    *(long *)(param_2 + 0x60) = lStack_38;
    *(undefined8 **)(param_2 + 0x68) = puVar12;
    *(ulong *)(param_2 + 0x70) = uVar18 * 0x10 + lVar15;
    if (lVar3 != 0) {
      func_0x0412a280(lVar3,lStack_40 - lVar3);
    }
  }
  *(undefined8 **)(param_2 + 0x68) = puVar12;
LAB_0d2929c9:
  *(char *)((long)plVar13 + 0x3c) = param_5;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  bVar5 = false;
  plStack_68 = plVar13;
  plStack_60 = plVar10;
LAB_0d2929e3:
  plVar13 = plStack_60;
  func_0x0d291860(param_2,param_4,&plStack_68);
  if (!bVar5) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((0x10 < (uint)(int)param_5) || ((0x12041U >> ((int)param_5 & 0x1fU) & 1) == 0)) {
    *(undefined2 *)(param_2 + 0x79) = 0x101;
  }
  return param_1;
}


```
