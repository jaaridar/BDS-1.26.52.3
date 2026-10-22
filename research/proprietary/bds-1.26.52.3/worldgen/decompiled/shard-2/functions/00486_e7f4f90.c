/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8f4f90 (ELF vaddr 0xe7f4f90)
 * Label: callee2-of:0xe79e140
 * Body:  [[0e8f4f90, 0e8f5539]]
 * Ghidra: FUN_0e8f4f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e8f4f90(long *param_1,long param_2,undefined8 param_3,long *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uStack_128;
  long *plStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined4 auStack_60 [2];
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  *param_1 = param_2;
  plStack_110 = param_1 + 1;
  func_0x0e8f55b0(plStack_110,param_2 + 0x18);
  *(undefined4 *)(param_1 + 5) = 0;
  if ((DAT_0f763740 == '\0') && (iVar2 = func_0x04108328(&DAT_0f763740), iVar2 != 0)) {
    func_0x0e877800(0xf763728);
    func_0x0410844d(&DAT_0f763740);
  }
  *(uint *)((long)param_1 + 0x2c) = _DAT_0f76372c;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 < (long *)0xfffffffffffffff8) {
    if (param_4 < (long *)0x17) {
      uStack_128 = CONCAT71(uStack_128._1_7_,(char)param_4 * '\x02');
      lVar3 = (long)&uStack_128 + 1;
      if (param_4 != (long *)0x0) goto LAB_0e8f5063;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_128._1_1_ = 0;
    }
    else {
      uVar6 = 0x1a;
      if (((ulong)param_4 | 7) != 0x17) {
        uVar6 = ((ulong)param_4 | 7) + 1;
      }
      lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
      if (lVar3 == 0) {
        func_0x0eec74c0(uVar6,0);
      }
      uStack_128 = uVar6 | 1;
      plStack_120 = param_4;
      lStack_118 = lVar3;
LAB_0e8f5063:
      func_0x0eee2f00(lVar3,param_3,param_4);
      *(undefined1 *)(lVar3 + (long)param_4) = 0;
    }
    if (param_5 == 2) {
      lVar3 = *param_1;
      if ((DAT_0f763740 == '\0') && (iVar2 = func_0x04108328(&DAT_0f763740), iVar2 != 0)) {
        func_0x0e877800(0xf763728);
        func_0x0410844d(&DAT_0f763740);
      }
      plVar5 = (long *)(*(long *)(lVar3 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3
                                    ) - 1U & _DAT_0f76372c) * 8);
      do {
        plVar7 = plVar5;
        lVar1 = *plVar7;
        if (lVar1 == -1) goto LAB_0e8f50e6;
        plVar5 = (long *)(*(long *)(lVar3 + 0x30) + lVar1 * 0x18);
      } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar1 * 0x18) != _DAT_0f76372c);
      *plVar7 = *plVar5;
      func_0x048af970(lVar3 + 0x18);
LAB_0e8f50e6:
      func_0x0e8f55b0(&uStack_108,*param_1 + 0x18);
      plStack_110[2] = (long)plStack_f8;
      plStack_110[3] = lStack_f0;
      *(undefined4 *)plStack_110 = (undefined4)uStack_108;
      *(undefined4 *)((long)plStack_110 + 4) = uStack_108._4_4_;
      *(undefined4 *)(plStack_110 + 1) = (undefined4)uStack_100;
      *(undefined4 *)((long)plStack_110 + 0xc) = uStack_100._4_4_;
    }
    lVar3 = func_0x0e877880(*param_1 + 0x18);
    if ((*(int *)(lVar3 + 0x60) == -0x2b3da790) && (*(long *)(lVar3 + 0x68) != 0)) {
      *(bool *)(param_1 + 6) = param_5 == 0;
      goto joined_r0x0e8f544b;
    }
    param_1 = &lStack_d0;
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_c8 = 0;
    lStack_c0 = 0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    lStack_e8 = 0;
    lStack_e0 = 0;
    plStack_f8 = (long *)0x0;
    lStack_f0 = 0;
    uStack_108 = (long *)0x0;
    uStack_100 = 0;
    lStack_a8 = 0;
    uStack_a0 = 0x3f600000;
    func_0x048afb10(param_1,8);
    uStack_78 = 0;
    lStack_70 = 0;
    lStack_88 = 0;
    uStack_80 = 0;
    lStack_98 = 0;
    lStack_90 = 0;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar4 = &UNK_0f4cfd70;
    if (uStack_108 != (long *)0x0) {
      lVar3 = *uStack_108;
      uStack_108 = puVar4;
      (**(code **)(lVar3 + 8))();
      puVar4 = uStack_108;
    }
    uStack_108 = puVar4;
    param_4 = &uStack_100;
    if ((uStack_100 & 1) == 0) {
      if ((uStack_128 & 1) == 0) {
        lStack_f0 = lStack_118;
        uStack_100 = uStack_128;
        plStack_f8 = plStack_120;
      }
      else {
        func_0x04885070(param_4,lStack_118,plStack_120);
      }
    }
    else {
      plVar5 = (long *)(uStack_128 >> 1 & 0x7f);
      lVar3 = (long)&uStack_128 + 1;
      if ((uStack_128 & 1) != 0) {
        plVar5 = plStack_120;
        lVar3 = lStack_118;
      }
      func_0x04885120(param_4,lVar3,plVar5);
    }
    if (DAT_0f5509f0 == '\0') goto LAB_0e8f54d8;
  }
  else {
    FUN_04882e30();
LAB_0e8f54d8:
    iVar2 = func_0x04108328(&DAT_0f5509f0);
    if (iVar2 != 0) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
  }
  auStack_60[0] = _DAT_0f5509dc;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  puVar4 = uStack_108;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef43980;
  uStack_108 = (undefined8 *)0x0;
  plVar5[3] = (long)puVar4;
  plVar5[6] = param_4[2];
  lVar3 = param_4[1];
  plVar5[4] = *param_4;
  plVar5[5] = lVar3;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  plVar5[7] = lStack_e8;
  plVar5[8] = lStack_e0;
  plVar5[9] = lStack_d8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  plVar5[10] = lStack_d0;
  plVar5[0xb] = lStack_c8;
  plVar5[0xc] = lStack_c0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar5[0xd] = lStack_b8;
  plVar5[0xe] = lStack_b0;
  plVar5[0xf] = lStack_a8;
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  *(undefined4 *)(plVar5 + 0x10) = uStack_a0;
  plVar5[0x11] = lStack_98;
  plVar5[0x12] = lStack_90;
  plVar5[0x13] = lStack_88;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  plVar5[0x16] = lStack_70;
  *(undefined4 *)(plVar5 + 0x14) = (undefined4)uStack_80;
  *(undefined4 *)((long)plVar5 + 0xa4) = uStack_80._4_4_;
  *(undefined4 *)(plVar5 + 0x15) = (undefined4)uStack_78;
  *(undefined4 *)((long)plVar5 + 0xac) = uStack_78._4_4_;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  plStack_58 = plVar5 + 3;
  plStack_50 = plVar5;
  FUN_048afd20(plStack_110,auStack_60);
  plVar5 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar7 = plStack_50 + 1;
    lVar3 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      FUN_0412c2d0(plVar5);
    }
  }
  plVar5 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar7 = plStack_40 + 1;
    lVar3 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x048aeca0(&uStack_108);
joined_r0x0e8f544b:
  if ((uStack_128 & 1) != 0) {
    func_0x0412a280(lStack_118,uStack_128 & 0xfffffffffffffffe);
  }
  return;
}


