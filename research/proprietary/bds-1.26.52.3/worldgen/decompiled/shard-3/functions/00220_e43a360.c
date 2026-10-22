/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe53a360 (ELF vaddr 0xe43a360)
 * Label: callee-of:0xe4118a0
 * Body:  [[0e53a360, 0e53aa55]]
 * Ghidra: FUN_0e53a360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e53a360(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long *plStack_98;
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
  if ((DAT_0f7556c8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f7556c8), iVar2 != 0)) {
    func_0x0e53a030();
    func_0x0410844d(&DAT_0f7556c8);
  }
  if ((DAT_0f7556c8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f7556c8), iVar2 != 0)) {
    func_0x0e53a030();
    func_0x0410844d(&DAT_0f7556c8);
  }
  plStack_108 = (long *)&DAT_0f7556b0;
  uStack_100 = CONCAT44(uStack_100._4_4_,_DAT_0f7556b4);
  uStack_f8 = 0;
  lStack_f0 = CONCAT44(lStack_f0._4_4_,0x40);
  lStack_e8 = 1;
  puStack_e0 = &UNK_0e539e60;
  puStack_d8 = &UNK_0e53a0b0;
  puStack_d0 = &UNK_0e53a290;
  puStack_c8 = &UNK_0e53a2b0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  plStack_98 = (long *)0x0;
  lStack_90 = 0;
  func_0x048aee30(param_1 + 1,param_2 + 0x18,&plStack_108,0xe459193c);
  lVar3 = lStack_90;
  lStack_90 = 0;
  if (lVar3 != 0) {
    func_0x048ae940(lVar3);
    func_0x0412a280(lVar3,0x78);
  }
  plVar5 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_98 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      func_0x0412c2d0(plVar5);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((DAT_0f7556c8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f7556c8), iVar2 != 0)) {
    func_0x0e53a030();
    func_0x0410844d(&DAT_0f7556c8);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = _DAT_0f7556b4;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 < 0xfffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_120 = CONCAT71(uStack_120._1_7_,(char)param_4 * '\x02');
      lVar3 = (long)&uStack_120 + 1;
      if (param_4 != 0) goto LAB_0e53a52a;
    }
    else {
      uVar6 = 0x1a;
      if ((param_4 | 7) != 0x17) {
        uVar6 = (param_4 | 7) + 1;
      }
      lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
      if (lVar3 == 0) {
        FUN_0eec74c0(uVar6,0);
      }
      uStack_120 = uVar6 | 1;
      uStack_118 = param_4;
      lStack_110 = lVar3;
LAB_0e53a52a:
      func_0x0eee2f00(lVar3,param_3,param_4);
    }
    *(undefined1 *)(lVar3 + param_4) = 0;
    param_4 = *param_1;
    if (DAT_0f7556a8 != '\0') goto LAB_0e53a550;
  }
  else {
    func_0x04882e30();
  }
  iVar2 = func_0x04108328(&DAT_0f7556a8);
  if (iVar2 != 0) {
    func_0x0e539f20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755628,0xf53dab8);
    func_0x0410844d(&DAT_0f7556a8);
  }
LAB_0e53a550:
  plVar5 = (long *)(*(long *)(param_4 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f755628 + 4)) * 8);
  do {
    lVar3 = *plVar5;
    if (lVar3 == -1) goto LAB_0e53a5a0;
    plVar5 = (long *)(*(long *)(param_4 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_4 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f755628 + 4));
  if (plVar5 == *(long **)(param_4 + 0x38)) {
LAB_0e53a5a0:
    puVar4 = &DAT_0f755628;
    iVar2 = iRam000000000f755688;
  }
  else {
    puVar4 = (undefined *)plVar5[2];
    iVar2 = *(int *)(puVar4 + 0x60);
  }
  if ((iVar2 == -0x2b3da790) && (*(long *)(puVar4 + 0x68) != 0)) {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    puStack_c8 = (undefined *)0x0;
    lStack_c0 = 0;
    puStack_d8 = (undefined *)0x0;
    puStack_d0 = (undefined *)0x0;
    lStack_e8 = 0;
    puStack_e0 = (undefined *)0x0;
    uStack_f8 = 0;
    lStack_f0 = 0;
    plStack_108 = (long *)0x0;
    uStack_100 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x3f600000);
    func_0x048afb10(&puStack_d0,8);
    uStack_78 = 0;
    lStack_70 = 0;
    lStack_88 = 0;
    uStack_80 = 0;
    plStack_98 = (long *)0x0;
    lStack_90 = 0;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar5 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar5 = (long)&UNK_0f4bd6d0;
    if (plStack_108 != (long *)0x0) {
      lVar3 = *plStack_108;
      plStack_108 = plVar5;
      (**(code **)(lVar3 + 8))();
      plVar5 = plStack_108;
    }
    plStack_108 = plVar5;
    if ((uStack_100 & 1) == 0) {
      if ((uStack_120 & 1) == 0) {
        lStack_f0 = lStack_110;
        uStack_100 = uStack_120;
        uStack_f8 = uStack_118;
      }
      else {
        FUN_04885070(&uStack_100,lStack_110,uStack_118);
      }
    }
    else {
      uVar6 = uStack_120 >> 1 & 0x7f;
      lVar3 = (long)&uStack_120 + 1;
      if ((uStack_120 & 1) != 0) {
        uVar6 = uStack_118;
        lVar3 = lStack_110;
      }
      func_0x04885120(&uStack_100,lVar3,uVar6);
    }
    if ((DAT_0f5509f0 == '\0') && (iVar2 = func_0x04108328(&DAT_0f5509f0), iVar2 != 0)) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
    auStack_60[0] = _DAT_0f5509dc;
    plStack_50 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
    if (plStack_50 == (long *)0x0) {
      FUN_0eec74c0(0xb8,0);
    }
    plVar5 = plStack_108;
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = (long)&UNK_0ef43980;
    plStack_58 = plStack_50 + 3;
    plStack_108 = (long *)0x0;
    plStack_50[3] = (long)plVar5;
    plStack_50[6] = lStack_f0;
    plStack_50[4] = uStack_100;
    plStack_50[5] = uStack_f8;
    uStack_100 = 0;
    uStack_f8 = 0;
    lStack_f0 = 0;
    plStack_50[7] = lStack_e8;
    plStack_50[8] = (long)puStack_e0;
    plStack_50[9] = (long)puStack_d8;
    lStack_e8 = 0;
    puStack_e0 = (undefined *)0x0;
    puStack_d8 = (undefined *)0x0;
    plStack_50[10] = (long)puStack_d0;
    plStack_50[0xb] = (long)puStack_c8;
    plStack_50[0xc] = lStack_c0;
    puStack_d0 = (undefined *)0x0;
    puStack_c8 = (undefined *)0x0;
    lStack_c0 = 0;
    plStack_50[0xd] = CONCAT44(uStack_b4,uStack_b8);
    plStack_50[0xe] = CONCAT44(uStack_ac,uStack_b0);
    plStack_50[0xf] = CONCAT44(uStack_a4,uStack_a8);
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    *(undefined4 *)(plStack_50 + 0x10) = (undefined4)uStack_a0;
    plStack_50[0x11] = (long)plStack_98;
    plStack_50[0x12] = lStack_90;
    plStack_50[0x13] = lStack_88;
    plStack_98 = (long *)0x0;
    lStack_90 = 0;
    lStack_88 = 0;
    plStack_50[0x16] = lStack_70;
    *(undefined4 *)(plStack_50 + 0x14) = (undefined4)uStack_80;
    *(undefined4 *)((long)plStack_50 + 0xa4) = uStack_80._4_4_;
    *(undefined4 *)(plStack_50 + 0x15) = (undefined4)uStack_78;
    *(undefined4 *)((long)plStack_50 + 0xac) = uStack_78._4_4_;
    uStack_80 = 0;
    uStack_78 = 0;
    lStack_70 = 0;
    uStack_48 = 0;
    plStack_40 = (long *)0x0;
    func_0x048afd20(param_1 + 1,auStack_60);
    plVar5 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        func_0x0412c2d0(plVar5);
      }
    }
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        func_0x0412c2d0(plVar5);
      }
    }
    func_0x048aeca0(&plStack_108);
  }
  if ((uStack_120 & 1) != 0) {
    func_0x0412a280(lStack_110,uStack_120 & 0xfffffffffffffffe);
  }
  return;
}


