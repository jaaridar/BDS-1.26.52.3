/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdd86270 (ELF vaddr 0xdc86270)
 * Label: caller-of-callee
 * Body:  [[0dd86270, 0dd86962]]
 * Ghidra: FUN_0dd86270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dd86270(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined4 auStack_100 [2];
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  *param_1 = param_2;
  if ((DAT_0f736f38 == '\0') && (iVar3 = FUN_04108328(&DAT_0f736f38), iVar3 != 0)) {
    func_0x0dbb6680(0xf736f20);
    func_0x0410844d(&DAT_0f736f38);
  }
  plVar1 = param_1 + 1;
  if ((DAT_0f736f38 == '\0') && (iVar3 = FUN_04108328(&DAT_0f736f38), iVar3 != 0)) {
    func_0x0dbb6680(0xf736f20,param_2 + 0x18);
    func_0x0410844d(&DAT_0f736f38);
  }
  plStack_e8 = (long *)0xf736f20;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,_DAT_0f736f24);
  uStack_d8 = 0;
  lStack_d0 = CONCAT44(lStack_d0._4_4_,0x80);
  lStack_c8 = 0x30;
  puStack_c0 = &SUB_0dbb6590;
  puStack_b8 = &UNK_0dbb6800;
  lStack_b0 = 0;
  puStack_a8 = &UNK_0dbb6cf0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  lStack_70 = 0;
  func_0x048aee30(plVar1,param_2 + 0x18,&plStack_e8,0xd9c4204c);
  lVar4 = lStack_70;
  lStack_70 = 0;
  if (lVar4 != 0) {
    func_0x048ae940(lVar4);
    func_0x0412a280(lVar4,0x78);
  }
  plVar5 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_78 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      func_0x0412c2d0(plVar5);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((DAT_0f736f38 == '\0') && (iVar3 = FUN_04108328(&DAT_0f736f38), iVar3 != 0)) {
    func_0x0dbb6680(0xf736f20);
    func_0x0410844d(&DAT_0f736f38);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = _DAT_0f736f24;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 < 0xfffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_118 = CONCAT71(uStack_118._1_7_,(char)param_4 * '\x02');
      lVar4 = (long)&uStack_118 + 1;
      if (param_4 != 0) goto LAB_0dd86446;
    }
    else {
      uVar6 = 0x1a;
      if ((param_4 | 7) != 0x17) {
        uVar6 = (param_4 | 7) + 1;
      }
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
      if (lVar4 == 0) {
        func_0x0eec74c0(uVar6,0);
      }
      uStack_118 = uVar6 | 1;
      uStack_110 = param_4;
      lStack_108 = lVar4;
LAB_0dd86446:
      func_0x0eee2f00(lVar4,param_3,param_4);
    }
    *(undefined1 *)(lVar4 + param_4) = 0;
    lVar4 = func_0x0dbb6590(*param_1 + 0x18);
    if ((*(int *)(lVar4 + 0x60) == -0x2b3da790) && (*(long *)(lVar4 + 0x68) != 0)) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
    else {
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      puStack_a8 = (undefined *)0x0;
      lStack_a0 = 0;
      puStack_b8 = (undefined *)0x0;
      lStack_b0 = 0;
      lStack_c8 = 0;
      puStack_c0 = (undefined1 *)0x0;
      uStack_d8 = 0;
      lStack_d0 = 0;
      plStack_e8 = (long *)0x0;
      uStack_e0 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = CONCAT44(uStack_80._4_4_,0x3f600000);
      func_0x048afb10(&lStack_b0,8);
      uStack_58 = 0;
      lStack_50 = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      plStack_78 = (long *)0x0;
      lStack_70 = 0;
      plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar5 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar5 = (long)&UNK_0f49d840;
      if (plStack_e8 != (long *)0x0) {
        lVar4 = *plStack_e8;
        plStack_e8 = plVar5;
        (**(code **)(lVar4 + 8))();
        plVar5 = plStack_e8;
      }
      plStack_e8 = plVar5;
      if ((uStack_e0 & 1) == 0) {
        if ((uStack_118 & 1) == 0) {
          lStack_d0 = lStack_108;
          uStack_e0 = uStack_118;
          uStack_d8 = uStack_110;
        }
        else {
          func_0x04885070(&uStack_e0,lStack_108,uStack_110);
        }
      }
      else {
        uVar6 = uStack_118 >> 1 & 0x7f;
        lVar4 = (long)&uStack_118 + 1;
        if ((uStack_118 & 1) != 0) {
          uVar6 = uStack_110;
          lVar4 = lStack_108;
        }
        FUN_04885120(&uStack_e0,lVar4,uVar6);
      }
      if ((DAT_0f5509f0 == '\0') && (iVar3 = FUN_04108328(&DAT_0f5509f0), iVar3 != 0)) {
        func_0x048afe70(0xf5509d8);
        func_0x0410844d(&DAT_0f5509f0);
      }
      auStack_100[0] = _DAT_0f5509dc;
      plStack_f0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
      if (plStack_f0 == (long *)0x0) {
        func_0x0eec74c0(0xb8,0);
      }
      plVar5 = plStack_e8;
      plStack_f0[1] = 0;
      plStack_f0[2] = 0;
      *plStack_f0 = (long)&UNK_0ef43980;
      plStack_f8 = plStack_f0 + 3;
      plStack_e8 = (long *)0x0;
      plStack_f0[3] = (long)plVar5;
      plStack_f0[6] = lStack_d0;
      plStack_f0[4] = uStack_e0;
      plStack_f0[5] = uStack_d8;
      uStack_e0 = 0;
      uStack_d8 = 0;
      lStack_d0 = 0;
      plStack_f0[7] = lStack_c8;
      plStack_f0[8] = (long)puStack_c0;
      plStack_f0[9] = (long)puStack_b8;
      lStack_c8 = 0;
      puStack_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined *)0x0;
      plStack_f0[10] = lStack_b0;
      plStack_f0[0xb] = (long)puStack_a8;
      plStack_f0[0xc] = lStack_a0;
      lStack_b0 = 0;
      puStack_a8 = (undefined *)0x0;
      lStack_a0 = 0;
      plStack_f0[0xd] = CONCAT44(uStack_94,uStack_98);
      plStack_f0[0xe] = CONCAT44(uStack_8c,uStack_90);
      plStack_f0[0xf] = CONCAT44(uStack_84,uStack_88);
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      *(undefined4 *)(plStack_f0 + 0x10) = (undefined4)uStack_80;
      plStack_f0[0x11] = (long)plStack_78;
      plStack_f0[0x12] = lStack_70;
      plStack_f0[0x13] = lStack_68;
      plStack_78 = (long *)0x0;
      lStack_70 = 0;
      lStack_68 = 0;
      plStack_f0[0x16] = lStack_50;
      *(undefined4 *)(plStack_f0 + 0x14) = (undefined4)uStack_60;
      *(undefined4 *)((long)plStack_f0 + 0xa4) = uStack_60._4_4_;
      *(undefined4 *)(plStack_f0 + 0x15) = (undefined4)uStack_58;
      *(undefined4 *)((long)plStack_f0 + 0xac) = uStack_58._4_4_;
      uStack_60 = 0;
      uStack_58 = 0;
      lStack_50 = 0;
      uStack_48 = 0;
      plStack_40 = (long *)0x0;
      func_0x048afd20(plVar1,auStack_100);
      plVar5 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        LOCK();
        plVar2 = plStack_f0 + 1;
        lVar4 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          func_0x0412c2d0(plVar5);
        }
      }
      plVar5 = plStack_40;
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plVar2 = plStack_40 + 1;
        lVar4 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          func_0x0412c2d0(plVar5);
        }
      }
      func_0x048aeca0(&plStack_e8);
    }
    func_0x0a7acf20(&plStack_e8,*param_1,&UNK_014d5698,0x18,1);
    if (DAT_0f67b948 != '\0') goto LAB_0dd867bd;
  }
  else {
    func_0x04882e30();
  }
  iVar3 = FUN_04108328(&DAT_0f67b948);
  if (iVar3 != 0) {
    func_0x0a7adff0(0xf67b930);
    func_0x0410844d(&DAT_0f67b948);
  }
LAB_0dd867bd:
  auStack_100[0] = _DAT_0f67b934;
  plStack_f8 = (long *)&SUB_0a7ad990;
  plStack_f0 = (long *)&UNK_0dd86b50;
  func_0x05da1460(plVar1);
  if ((uStack_118 & 1) != 0) {
    func_0x0412a280(lStack_108,uStack_118 & 0xfffffffffffffffe);
  }
  return;
}


