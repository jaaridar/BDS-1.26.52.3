/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb06fc0 (ELF vaddr 0xea06fc0)
 * Label: caller-of-callee
 * Body:  [[0eb06fc0, 0eb0775d]]
 * Ghidra: FUN_0eb06fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb06fc0(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
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
  undefined *puStack_c0;
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
  if ((DAT_0f76cae8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76cae8), iVar3 != 0)) {
    func_0x0eb06940();
    func_0x0410844d(&DAT_0f76cae8);
  }
  puVar1 = param_1 + 1;
  if ((DAT_0f76cae8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76cae8), iVar3 != 0)) {
    func_0x0eb06940();
    func_0x0410844d(&DAT_0f76cae8);
  }
  plStack_e8 = (long *)&DAT_0f76cad0;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,_DAT_0f76cad4);
  uStack_d8 = 0;
  lStack_d0 = CONCAT44(lStack_d0._4_4_,0x80);
  lStack_c8 = 0x30;
  puStack_c0 = &UNK_0eb06770;
  puStack_b8 = &UNK_0eb069c0;
  lStack_b0 = 0;
  puStack_a8 = &UNK_0eb06f30;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  lStack_70 = 0;
  FUN_048aee30(puVar1,param_2 + 0x18,&plStack_e8,0xd7817a27);
  lVar4 = lStack_70;
  lStack_70 = 0;
  if (lVar4 != 0) {
    func_0x048ae940(lVar4);
    thunk_FUN_0ee326a0(lVar4,0x78);
  }
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_78 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      func_0x0412c2d0(plVar6);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((DAT_0f76cae8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76cae8), iVar3 != 0)) {
    func_0x0eb06940();
    func_0x0410844d(&DAT_0f76cae8);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = _DAT_0f76cad4;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 < 0xfffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_118 = CONCAT71(uStack_118._1_7_,(char)param_4 * '\x02');
      lVar4 = (long)&uStack_118 + 1;
      if (param_4 != 0) goto LAB_0eb07196;
    }
    else {
      uVar7 = 0x1a;
      if ((param_4 | 7) != 0x17) {
        uVar7 = (param_4 | 7) + 1;
      }
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7);
      if (lVar4 == 0) {
        func_0x0eec74c0(uVar7,0);
      }
      uStack_118 = uVar7 | 1;
      uStack_110 = param_4;
      lStack_108 = lVar4;
LAB_0eb07196:
      func_0x0eee2f00(lVar4,param_3,param_4);
    }
    *(undefined1 *)(lVar4 + param_4) = 0;
    param_4 = *param_1;
    if (DAT_0f76cac8 != '\0') goto LAB_0eb071bc;
  }
  else {
    func_0x04882e30();
  }
  iVar3 = func_0x04108328(&DAT_0f76cac8);
  if (iVar3 != 0) {
    func_0x0eb06830();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76ca48,0xf53dab8);
    func_0x0410844d(&DAT_0f76cac8);
  }
LAB_0eb071bc:
  plVar6 = (long *)(*(long *)(param_4 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76ca48 + 4)) * 8);
  do {
    lVar4 = *plVar6;
    if (lVar4 == -1) goto LAB_0eb07210;
    plVar6 = (long *)(*(long *)(param_4 + 0x30) + lVar4 * 0x18);
  } while (*(uint *)(*(long *)(param_4 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f76ca48 + 4));
  if (plVar6 == *(long **)(param_4 + 0x38)) {
LAB_0eb07210:
    puVar5 = &DAT_0f76ca48;
    iVar3 = iRam000000000f76caa8;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar3 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar3 == -0x2b3da790) && (*(long *)(puVar5 + 0x68) != 0)) {
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
    puStack_c0 = (undefined *)0x0;
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
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f4d8d58;
    if (plStack_e8 != (long *)0x0) {
      lVar4 = *plStack_e8;
      plStack_e8 = plVar6;
      (**(code **)(lVar4 + 8))();
      plVar6 = plStack_e8;
    }
    plStack_e8 = plVar6;
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
      uVar7 = uStack_118 >> 1 & 0x7f;
      lVar4 = (long)&uStack_118 + 1;
      if ((uStack_118 & 1) != 0) {
        uVar7 = uStack_110;
        lVar4 = lStack_108;
      }
      func_0x04885120(&uStack_e0,lVar4,uVar7);
    }
    if ((DAT_0f5509f0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f5509f0), iVar3 != 0)) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
    auStack_100[0] = _DAT_0f5509dc;
    plStack_f0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
    if (plStack_f0 == (long *)0x0) {
      func_0x0eec74c0(0xb8,0);
    }
    plVar6 = plStack_e8;
    plStack_f0[1] = 0;
    plStack_f0[2] = 0;
    *plStack_f0 = (long)&UNK_0ef43980;
    plStack_f8 = plStack_f0 + 3;
    plStack_e8 = (long *)0x0;
    plStack_f0[3] = (long)plVar6;
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
    puStack_c0 = (undefined *)0x0;
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
    func_0x048afd20(puVar1,auStack_100);
    plVar6 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_f0 + 1;
      lVar4 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_40 + 1;
      lVar4 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x048aeca0(&plStack_e8);
  }
  func_0x0a7acf20(&plStack_e8,*param_1,&UNK_014d5698,0x18,1);
  if ((DAT_0f67b948 == '\0') && (iVar3 = func_0x04108328(&DAT_0f67b948), iVar3 != 0)) {
    func_0x0a7adff0(0xf67b930);
    func_0x0410844d(&DAT_0f67b948);
  }
  auStack_100[0] = _DAT_0f67b934;
  plStack_f8 = (long *)&SUB_0a7ad990;
  plStack_f0 = (long *)&UNK_0eb07a00;
  func_0x05da1460(puVar1);
  if ((uStack_118 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_108,uStack_118 & 0xfffffffffffffffe);
  }
  return;
}


