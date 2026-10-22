/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8b7ad0 (ELF vaddr 0xe7b7ad0)
 * Label: callee-of:0xe7af270
 * Body:  [[0e8b7ad0, 0e8b811b]]
 * Ghidra: FUN_0e8b7ad0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e8b7ad0(long *param_1,long param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uStack_120;
  ulong *puStack_118;
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
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
  if ((DAT_0f7372d0 == '\0') && (iVar3 = FUN_04108328(&DAT_0f7372d0), iVar3 != 0)) {
    func_0x0db82040(0xf7372b8);
    func_0x0410844d(&DAT_0f7372d0);
  }
  plVar1 = param_1 + 1;
  if ((DAT_0f7372d0 == '\0') && (iVar3 = FUN_04108328(&DAT_0f7372d0), iVar3 != 0)) {
    func_0x0db82040(0xf7372b8,param_2 + 0x18);
    func_0x0410844d(&DAT_0f7372d0);
  }
  plStack_108 = (long *)0xf7372b8;
  uStack_100 = CONCAT44(uStack_100._4_4_,_DAT_0f7372bc);
  puStack_f8 = (ulong *)0x0;
  lStack_f0 = CONCAT44(lStack_f0._4_4_,0x80);
  lStack_e8 = 0xf8;
  puStack_e0 = &SUB_0db80510;
  puStack_d8 = &UNK_0db820b0;
  lStack_d0 = 0;
  puStack_c8 = &UNK_0db823c0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  plStack_98 = (long *)0x0;
  lStack_90 = 0;
  func_0x048aee30(plVar1,param_2 + 0x18,&plStack_108,0x9b973607);
  lVar4 = lStack_90;
  lStack_90 = 0;
  if (lVar4 != 0) {
    func_0x048ae940(lVar4);
    func_0x0412a280(lVar4,0x78);
  }
  plVar5 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_98 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      func_0x0412c2d0(plVar5);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((DAT_0f7372d0 == '\0') && (iVar3 = FUN_04108328(&DAT_0f7372d0), iVar3 != 0)) {
    func_0x0db82040(0xf7372b8);
    func_0x0410844d(&DAT_0f7372d0);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = _DAT_0f7372bc;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 < (ulong *)0xfffffffffffffff8) {
    if (param_4 < (ulong *)0x17) {
      uStack_120 = CONCAT71(uStack_120._1_7_,(char)param_4 * '\x02');
      lVar4 = (long)&uStack_120 + 1;
      if (param_4 != (ulong *)0x0) goto LAB_0e8b7c97;
    }
    else {
      uVar7 = 0x1a;
      if (((ulong)param_4 | 7) != 0x17) {
        uVar7 = ((ulong)param_4 | 7) + 1;
      }
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7);
      if (lVar4 == 0) {
        func_0x0eec74c0(uVar7,0);
      }
      uStack_120 = uVar7 | 1;
      puStack_118 = param_4;
      lStack_110 = lVar4;
LAB_0e8b7c97:
      func_0x0eee2f00(lVar4,param_3,param_4);
    }
    *(undefined1 *)(lVar4 + (long)param_4) = 0;
    lVar4 = func_0x0db80510(*param_1 + 0x18);
    if ((*(int *)(lVar4 + 0x60) == -0x2b3da790) && (*(long *)(lVar4 + 0x68) != 0)) {
      *(undefined1 *)(param_1 + 6) = 1;
      goto joined_r0x0e8b7fe9;
    }
    param_1 = &lStack_d0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    puStack_c8 = (undefined *)0x0;
    lStack_c0 = 0;
    puStack_d8 = (undefined *)0x0;
    lStack_d0 = 0;
    lStack_e8 = 0;
    puStack_e0 = (undefined1 *)0x0;
    puStack_f8 = (ulong *)0x0;
    lStack_f0 = 0;
    plStack_108 = (long *)0x0;
    uStack_100 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x3f600000);
    func_0x048afb10(param_1,8);
    uStack_78 = 0;
    lStack_70 = 0;
    lStack_88 = 0;
    uStack_80 = 0;
    plStack_98 = (long *)0x0;
    lStack_90 = 0;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar5 = (long)&UNK_0f4cef50;
    if (plStack_108 != (long *)0x0) {
      lVar4 = *plStack_108;
      plStack_108 = plVar5;
      (**(code **)(lVar4 + 8))();
      plVar5 = plStack_108;
    }
    plStack_108 = plVar5;
    param_4 = &uStack_100;
    if ((uStack_100 & 1) == 0) {
      if ((uStack_120 & 1) == 0) {
        lStack_f0 = lStack_110;
        uStack_100 = uStack_120;
        puStack_f8 = puStack_118;
      }
      else {
        func_0x04885070(param_4,lStack_110,puStack_118);
      }
    }
    else {
      puVar6 = (ulong *)(uStack_120 >> 1 & 0x7f);
      lVar4 = (long)&uStack_120 + 1;
      if ((uStack_120 & 1) != 0) {
        puVar6 = puStack_118;
        lVar4 = lStack_110;
      }
      FUN_04885120(param_4,lVar4,puVar6);
    }
    if (DAT_0f5509f0 == '\0') goto LAB_0e8b80eb;
  }
  else {
    func_0x04882e30();
LAB_0e8b80eb:
    iVar3 = FUN_04108328(&DAT_0f5509f0);
    if (iVar3 != 0) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
  }
  auStack_60[0] = _DAT_0f5509dc;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  plVar2 = plStack_108;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef43980;
  plStack_108 = (long *)0x0;
  plVar5[3] = (long)plVar2;
  plVar5[6] = param_4[2];
  uVar7 = param_4[1];
  plVar5[4] = *param_4;
  plVar5[5] = uVar7;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  plVar5[7] = lStack_e8;
  plVar5[8] = (long)puStack_e0;
  plVar5[9] = (long)puStack_d8;
  lStack_e8 = 0;
  puStack_e0 = (undefined1 *)0x0;
  puStack_d8 = (undefined *)0x0;
  plVar5[10] = lStack_d0;
  plVar5[0xb] = (long)puStack_c8;
  plVar5[0xc] = lStack_c0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar5[0xd] = CONCAT44(uStack_b4,uStack_b8);
  plVar5[0xe] = CONCAT44(uStack_ac,uStack_b0);
  plVar5[0xf] = CONCAT44(uStack_a4,uStack_a8);
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  *(undefined4 *)(plVar5 + 0x10) = (undefined4)uStack_a0;
  plVar5[0x11] = (long)plStack_98;
  plVar5[0x12] = lStack_90;
  plVar5[0x13] = lStack_88;
  plStack_98 = (long *)0x0;
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
  func_0x048afd20(plVar1,auStack_60);
  plVar1 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    lVar4 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      func_0x0412c2d0(plVar1);
    }
  }
  plVar1 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar5 = plStack_40 + 1;
    lVar4 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar1);
    }
  }
  func_0x048aeca0(&plStack_108);
joined_r0x0e8b7fe9:
  if ((uStack_120 & 1) != 0) {
    func_0x0412a280(lStack_110,uStack_120 & 0xfffffffffffffffe);
  }
  return;
}


