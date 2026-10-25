# FUN_0c46a3d0

- entry: `0xc46a3d0`
- body size: 2662 bytes
- callers: `FUN_09db9c20`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c46a3d0(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_40;
  long lStack_38;
  
  lVar11 = param_1[0x14];
  iVar2 = (**(code **)(*param_1 + 0x18))();
  if (iVar2 != *(int *)(param_2 + 0x28)) {
    return;
  }
  uVar7 = *(ulong *)(param_2 + 8);
  plVar3 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  plVar8 = plVar3;
  if (plVar3 == (long *)0x0) goto LAB_0c46ae2e;
  do {
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0f371790;
    plVar8[3] = 0;
    plVar8[4] = lVar11;
    plVar8[5] = uVar7;
    lVar4 = 0;
    lVar10 = 0x1000000000;
    lVar11 = 0;
LAB_0c46a497:
    iVar9 = (int)((ulong)lVar10 >> 0x20) - (int)((ulong)lVar4 >> 0x20);
    uVar7 = lVar11 << 0x24;
    plVar3 = (long *)(uVar7 + 0x1000000000);
    uVar6 = (ulong)(uint)((int)lVar11 << 0xb);
    piVar5 = (int *)(uVar6 * 4 + *(long *)(param_2 + 0x30));
    iVar2 = iVar9;
    while (lStack_40 = lVar10, lStack_38 = lVar4, piVar5 != (int *)0x0) {
      uStack_70 = SUB84(plVar8,0);
      uStack_6c = (undefined4)((ulong)plVar8 >> 0x20);
      if (((((*piVar5 != 0) || (piVar5[1] != 0)) || (piVar5[2] != 0)) ||
          (((piVar5[3] != 0 || (piVar5[4] != 0)) ||
           ((piVar5[5] != 0 || ((piVar5[6] != 0 || (piVar5[7] != 0)))))))) ||
         ((piVar5[8] != 0 ||
          (((((piVar5[9] != 0 || (piVar5[10] != 0)) || (piVar5[0xb] != 0)) ||
            ((piVar5[0xc] != 0 || (piVar5[0xd] != 0)))) ||
           ((piVar5[0xe] != 0 || (piVar5[0xf] != 0)))))))) goto LAB_0c46a5f0;
      piVar5 = piVar5 + 0x80;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) goto code_r0x0c46a585;
    }
    func_0x04890760();
LAB_0c46ae2e:
    FUN_0eec74c0(0x30,0);
    plVar8 = plVar3;
  } while( true );
code_r0x0c46a585:
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
  }
  func_0x0c469a90(param_1,param_2,uVar7,uVar7 + 0x1000000010,&uStack_58);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
LAB_0c46a5f0:
  piVar5 = (int *)(*(long *)(param_2 + 0x30) + uVar6 * 4 + 0x40);
  iVar2 = iVar9;
  do {
    if (((((*piVar5 != 0) || (piVar5[1] != 0)) ||
         ((piVar5[2] != 0 ||
          (((((piVar5[3] != 0 || (piVar5[4] != 0)) || (piVar5[5] != 0)) ||
            ((piVar5[6] != 0 || (piVar5[7] != 0)))) || (piVar5[8] != 0)))))) ||
        ((piVar5[9] != 0 || (piVar5[10] != 0)))) ||
       (((piVar5[0xb] != 0 || (((piVar5[0xc] != 0 || (piVar5[0xd] != 0)) || (piVar5[0xe] != 0)))) ||
        (piVar5[0xf] != 0)))) goto LAB_0c46a720;
    piVar5 = piVar5 + 0x80;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
  }
  func_0x0c469a90(param_1,param_2,uVar7 | 0x10,(ulong)plVar3 | 0x20,&uStack_58);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
LAB_0c46a720:
  piVar5 = (int *)(*(long *)(param_2 + 0x30) + uVar6 * 4 + 0x80);
  iVar2 = iVar9;
  do {
    if (((((*piVar5 != 0) || (piVar5[1] != 0)) ||
         ((piVar5[2] != 0 || ((piVar5[3] != 0 || (piVar5[4] != 0)))))) ||
        ((piVar5[5] != 0 || (((piVar5[6] != 0 || (piVar5[7] != 0)) || (piVar5[8] != 0)))))) ||
       (((piVar5[9] != 0 || (piVar5[10] != 0)) ||
        ((((piVar5[0xb] != 0 || ((piVar5[0xc] != 0 || (piVar5[0xd] != 0)))) || (piVar5[0xe] != 0))
         || (piVar5[0xf] != 0)))))) goto LAB_0c46a840;
    piVar5 = piVar5 + 0x80;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
  }
  func_0x0c469a90(param_1,param_2,uVar7 | 0x20,(ulong)plVar3 | 0x30,&uStack_58);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
LAB_0c46a840:
  piVar5 = (int *)(*(long *)(param_2 + 0x30) + uVar6 * 4 + 0xc0);
  iVar2 = iVar9;
  do {
    if (((((*piVar5 != 0) || (piVar5[1] != 0)) || (piVar5[2] != 0)) ||
        ((piVar5[3] != 0 || (piVar5[4] != 0)))) ||
       (((piVar5[5] != 0 || ((piVar5[6] != 0 || (piVar5[7] != 0)))) ||
        ((piVar5[8] != 0 ||
         ((((piVar5[9] != 0 || (piVar5[10] != 0)) || (piVar5[0xb] != 0)) ||
          (((piVar5[0xc] != 0 || (piVar5[0xd] != 0)) || ((piVar5[0xe] != 0 || (piVar5[0xf] != 0)))))
          ))))))) goto LAB_0c46a960;
    piVar5 = piVar5 + 0x80;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
  }
  func_0x0c469a90(param_1,param_2,uVar7 | 0x30,(ulong)plVar3 | 0x40,&uStack_58);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
LAB_0c46a960:
  piVar5 = (int *)(*(long *)(param_2 + 0x30) + uVar6 * 4 + 0x100);
  iVar2 = iVar9;
  do {
    if ((((*piVar5 != 0) || (piVar5[1] != 0)) ||
        ((piVar5[2] != 0 || (((piVar5[3] != 0 || (piVar5[4] != 0)) || (piVar5[5] != 0)))))) ||
       ((((piVar5[6] != 0 || (piVar5[7] != 0)) || (piVar5[8] != 0)) ||
        (((piVar5[9] != 0 || (piVar5[10] != 0)) ||
         ((piVar5[0xb] != 0 ||
          ((((piVar5[0xc] != 0 || (piVar5[0xd] != 0)) || (piVar5[0xe] != 0)) || (piVar5[0xf] != 0)))
          ))))))) goto LAB_0c46aa80;
    piVar5 = piVar5 + 0x80;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
  }
  func_0x0c469a90(param_1,param_2,uVar7 | 0x40,(ulong)plVar3 | 0x50,&uStack_58);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
LAB_0c46aa80:
  piVar5 = (int *)(*(long *)(param_2 + 0x30) + uVar6 * 4 + 0x140);
  iVar2 = iVar9;
  do {
    if (((*piVar5 != 0) || (piVar5[1] != 0)) ||
       ((((piVar5[2] != 0 || ((piVar5[3] != 0 || (piVar5[4] != 0)))) || (piVar5[5] != 0)) ||
        ((((piVar5[6] != 0 || (piVar5[7] != 0)) || (piVar5[8] != 0)) ||
         (((((piVar5[9] != 0 || (piVar5[10] != 0)) ||
            ((piVar5[0xb] != 0 || ((piVar5[0xc] != 0 || (piVar5[0xd] != 0)))))) ||
           (piVar5[0xe] != 0)) || (piVar5[0xf] != 0)))))))) goto LAB_0c46aba0;
    piVar5 = piVar5 + 0x80;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
  }
  func_0x0c469a90(param_1,param_2,uVar7 | 0x50,(ulong)plVar3 | 0x60,&uStack_58);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
LAB_0c46aba0:
  piVar5 = (int *)(*(long *)(param_2 + 0x30) + uVar6 * 4 + 0x180);
  iVar2 = iVar9;
  do {
    if (((((*piVar5 != 0) || (piVar5[1] != 0)) || (piVar5[2] != 0)) ||
        ((piVar5[3] != 0 || (piVar5[4] != 0)))) ||
       ((((piVar5[5] != 0 || ((piVar5[6] != 0 || (piVar5[7] != 0)))) ||
         ((piVar5[8] != 0 ||
          (((((piVar5[9] != 0 || (piVar5[10] != 0)) || (piVar5[0xb] != 0)) ||
            ((piVar5[0xc] != 0 || (piVar5[0xd] != 0)))) || (piVar5[0xe] != 0)))))) ||
        (piVar5[0xf] != 0)))) goto LAB_0c46acc0;
    piVar5 = piVar5 + 0x80;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
  }
  func_0x0c469a90(param_1,param_2,uVar7 | 0x60,(ulong)plVar3 | 0x70,&uStack_58);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
LAB_0c46acc0:
  piVar5 = (int *)(*(long *)(param_2 + 0x30) + uVar6 * 4 + 0x1c0);
  do {
    if (((((*piVar5 != 0) || (piVar5[1] != 0)) ||
         ((piVar5[2] != 0 || (((piVar5[3] != 0 || (piVar5[4] != 0)) || (piVar5[5] != 0)))))) ||
        (((piVar5[6] != 0 || (piVar5[7] != 0)) ||
         ((piVar5[8] != 0 ||
          (((piVar5[9] != 0 || (piVar5[10] != 0)) ||
           ((piVar5[0xb] != 0 || (((piVar5[0xc] != 0 || (piVar5[0xd] != 0)) || (piVar5[0xe] != 0))))
           )))))))) || (piVar5[0xf] != 0)) goto LAB_0c46a470;
    piVar5 = piVar5 + 0x80;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
  }
  func_0x0c469a90(param_1,param_2,uVar7 | 0x70,(ulong)plVar3 | 0x80,&uStack_58);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar4 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
LAB_0c46a470:
  lVar11 = lVar11 + 1;
  lVar10 = lStack_40 + 0x1000000000;
  lVar4 = lStack_38 + 0x1000000000;
  if (lVar11 == 8) {
    if (plVar8 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 != 0) {
      return;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    return;
  }
  goto LAB_0c46a497;
}


```
