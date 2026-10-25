# FUN_0c44fd30

- entry: `0xc44fd30`
- body size: 852 bytes
- callers: `FUN_0c4510a0`, `FUN_0c467270`, `FUN_0c4fac60`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c44fd30(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  short *psVar4;
  long lVar5;
  undefined *puStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  short asStack_100 [8];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_a8;
  undefined *puStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_28;
  
  lVar5 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
LAB_0c44fe66:
    plVar1 = *(long **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (plVar1 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0c44fe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  puStack_120 = &UNK_01ce48c1;
  plStack_118 = (long *)0xb;
  lVar2 = func_0x0d6c9880(lVar5 + 8,&puStack_120);
  if ((lVar2 == lVar5 + 0x10) || (*(int *)(lVar2 + 0x60) != 10)) goto LAB_0c44fe66;
  func_0x0c44ed40(&puStack_120);
  puStack_120 = &UNK_0f36e858;
  func_0x0c45ade0(&puStack_120,lVar2 + 0x38);
  if ((plStack_118 != (long *)0x0) && (plVar1 = (long *)*plStack_118, plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x358))(plVar1,&puStack_120);
    psVar4 = (short *)(lStack_108 + 0x128);
    if (asStack_100[0] == 0x7fff) {
      psVar4 = asStack_100;
    }
    if (lStack_108 == 0) {
      psVar4 = asStack_100;
    }
    if (*psVar4 == 0x7fff) {
      asStack_100[0] = 0;
    }
    if ((plStack_118 != (long *)0x0) && (*plStack_118 != 0)) {
      func_0x0c44ed40(&puStack_a0);
      puStack_a0 = &UNK_0f36e858;
      func_0x0c44f4e0(&puStack_a0,&puStack_120);
      goto LAB_0c44fea4;
    }
  }
  func_0x0c44ed40(&puStack_a0);
  puStack_a0 = &UNK_0f36e858;
LAB_0c44fea4:
  plVar1 = plStack_a8;
  puStack_120 = &UNK_0f36e918;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    func_0x0412a280(lStack_d0,lStack_c0 - lStack_d0);
  }
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    func_0x0412a280(lStack_f0,lStack_e0 - lStack_f0);
  }
  plVar1 = plStack_110;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (plStack_118 != (long *)0x0) {
    LOCK();
    *(int *)((long)plStack_118 + 0xc) = *(int *)((long)plStack_118 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)plStack_118 + 0xc) < 1) && (*plStack_118 == 0)) &&
       (plStack_118 != (long *)0x0)) {
      func_0x0412a280(plStack_118,0x10);
    }
  }
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  func_0x0c44ed40(puVar3);
  *puVar3 = &UNK_0f36e858;
  func_0x0c44f4e0(puVar3,&puStack_a0);
  plVar1 = *(long **)(param_1 + 0x78);
  *(undefined8 **)(param_1 + 0x78) = puVar3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_28;
  puStack_a0 = &UNK_0f36e918;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    func_0x0412a280(lStack_50,lStack_40 - lStack_50);
  }
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    func_0x0412a280(lStack_70,lStack_60 - lStack_70);
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (plStack_98 == (long *)0x0) {
    return;
  }
  LOCK();
  *(int *)((long)plStack_98 + 0xc) = *(int *)((long)plStack_98 + 0xc) + -1;
  UNLOCK();
  if (0 < *(int *)((long)plStack_98 + 0xc)) {
    return;
  }
  if (*plStack_98 != 0) {
    return;
  }
  if (plStack_98 == (long *)0x0) {
    return;
  }
  func_0x0412a280(plStack_98,0x10);
  return;
}


```
