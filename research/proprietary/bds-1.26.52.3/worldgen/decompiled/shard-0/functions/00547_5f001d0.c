/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x60001d0 (ELF vaddr 0x5f001d0)
 * Label: caller-of-callee
 * Body:  [[060001d0, 06000838]]
 * Ghidra: FUN_060001d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_060001d0(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int unaff_EBX;
  long *plVar8;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
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
  puStack_110 = param_1 + 1;
  func_0x060008b0(puStack_110,param_2 + 0x18);
  *(undefined4 *)(param_1 + 5) = 0;
  if ((DAT_0f562138 == '\0') && (iVar2 = func_0x04108328(&DAT_0f562138), iVar2 != 0)) {
    func_0x05fffac0();
    func_0x0410844d(&DAT_0f562138);
  }
  *(uint *)((long)param_1 + 0x2c) = _DAT_0f562124;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 < 0xfffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_128 = CONCAT71(uStack_128._1_7_,(char)param_4 * '\x02');
      lVar3 = (long)&uStack_128 + 1;
      if (param_4 != 0) goto LAB_060002a8;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_128._1_1_ = 0;
    }
    else {
      uVar7 = 0x1a;
      if ((param_4 | 7) != 0x17) {
        uVar7 = (param_4 | 7) + 1;
      }
      lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7);
      if (lVar3 == 0) {
        func_0x0eec74c0(uVar7,0);
      }
      uStack_128 = uVar7 | 1;
      uStack_120 = param_4;
      lStack_118 = lVar3;
LAB_060002a8:
      func_0x0eee2f00(lVar3,param_3,param_4);
      *(undefined1 *)(lVar3 + param_4) = 0;
    }
    if (param_5 == 2) {
      uVar7 = *param_1;
      if ((DAT_0f562138 == '\0') && (iVar2 = func_0x04108328(&DAT_0f562138), iVar2 != 0)) {
        func_0x05fffac0();
        func_0x0410844d(&DAT_0f562138);
      }
      plVar6 = (long *)(*(long *)(uVar7 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(uVar7 + 0x20) - *(long *)(uVar7 + 0x18)) >> 3
                                    ) - 1U & _DAT_0f562124) * 8);
      do {
        plVar8 = plVar6;
        lVar3 = *plVar8;
        if (lVar3 == -1) goto LAB_06000336;
        plVar6 = (long *)(*(long *)(uVar7 + 0x30) + lVar3 * 0x18);
      } while (*(uint *)(*(long *)(uVar7 + 0x30) + 8 + lVar3 * 0x18) != _DAT_0f562124);
      *plVar8 = *plVar6;
      func_0x048af970(uVar7 + 0x18);
LAB_06000336:
      func_0x060008b0(&uStack_108,*param_1 + 0x18);
      puStack_110[2] = uStack_f8;
      puStack_110[3] = uStack_f0;
      *(undefined4 *)puStack_110 = (undefined4)uStack_108;
      *(undefined4 *)((long)puStack_110 + 4) = uStack_108._4_4_;
      *(undefined4 *)(puStack_110 + 1) = (undefined4)uStack_100;
      *(undefined4 *)((long)puStack_110 + 0xc) = uStack_100._4_4_;
    }
    iVar2 = -1;
    param_4 = *param_1;
    unaff_EBX = -1;
    if (DAT_0f562118 != '\0') goto LAB_0600036f;
  }
  else {
    func_0x04882e30();
  }
  iVar2 = unaff_EBX;
  iVar1 = func_0x04108328(&DAT_0f562118);
  if (iVar1 != 0) {
    func_0x05fff9b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f562098,0xf53dab8);
    func_0x0410844d(&DAT_0f562118);
  }
LAB_0600036f:
  plVar6 = (long *)(*(long *)(param_4 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18)) >> 3
                                ) + iVar2 & *(uint *)(_DAT_0f562098 + 4)) * 8);
  do {
    lVar3 = *plVar6;
    if (lVar3 == -1) goto LAB_060003c0;
    plVar6 = (long *)(*(long *)(param_4 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_4 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f562098 + 4));
  if (plVar6 == *(long **)(param_4 + 0x38)) {
LAB_060003c0:
    puVar4 = &DAT_0f562098;
    iVar2 = iRam000000000f5620f8;
  }
  else {
    puVar4 = (undefined *)plVar6[2];
    iVar2 = *(int *)(puVar4 + 0x60);
  }
  if ((iVar2 == -0x2b3da790) && (*(long *)(puVar4 + 0x68) != 0)) {
    *(bool *)(param_1 + 6) = param_5 == 0;
  }
  else {
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_c8 = 0;
    lStack_c0 = 0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    lStack_e8 = 0;
    lStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = (long *)0x0;
    uStack_100 = 0;
    lStack_a8 = 0;
    uStack_a0 = 0x3f600000;
    func_0x048afb10(&lStack_d0,8);
    uStack_78 = 0;
    lStack_70 = 0;
    lStack_88 = 0;
    uStack_80 = 0;
    lStack_98 = 0;
    lStack_90 = 0;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar5 = &UNK_0f017cd8;
    if (uStack_108 != (long *)0x0) {
      lVar3 = *uStack_108;
      uStack_108 = puVar5;
      (**(code **)(lVar3 + 8))();
      puVar5 = uStack_108;
    }
    uStack_108 = puVar5;
    if ((uStack_100 & 1) == 0) {
      if ((uStack_128 & 1) == 0) {
        uStack_f0 = lStack_118;
        uStack_100 = uStack_128;
        uStack_f8 = uStack_120;
      }
      else {
        func_0x04885070(&uStack_100,lStack_118,uStack_120);
      }
    }
    else {
      uVar7 = uStack_128 >> 1 & 0x7f;
      lVar3 = (long)&uStack_128 + 1;
      if ((uStack_128 & 1) != 0) {
        uVar7 = uStack_120;
        lVar3 = lStack_118;
      }
      func_0x04885120(&uStack_100,lVar3,uVar7);
    }
    if ((DAT_0f5509f0 == '\0') && (iVar2 = func_0x04108328(&DAT_0f5509f0), iVar2 != 0)) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
    auStack_60[0] = _DAT_0f5509dc;
    plStack_50 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
    if (plStack_50 == (long *)0x0) {
      func_0x0eec74c0(0xb8,0);
    }
    puVar5 = uStack_108;
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = (long)&UNK_0ef43980;
    plStack_58 = plStack_50 + 3;
    uStack_108 = (long *)0x0;
    plStack_50[3] = (long)puVar5;
    plStack_50[6] = uStack_f0;
    plStack_50[4] = uStack_100;
    plStack_50[5] = uStack_f8;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    plStack_50[7] = lStack_e8;
    plStack_50[8] = lStack_e0;
    plStack_50[9] = lStack_d8;
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    plStack_50[10] = lStack_d0;
    plStack_50[0xb] = lStack_c8;
    plStack_50[0xc] = lStack_c0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lStack_c0 = 0;
    plStack_50[0xd] = lStack_b8;
    plStack_50[0xe] = lStack_b0;
    plStack_50[0xf] = lStack_a8;
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_a8 = 0;
    *(undefined4 *)(plStack_50 + 0x10) = uStack_a0;
    plStack_50[0x11] = lStack_98;
    plStack_50[0x12] = lStack_90;
    plStack_50[0x13] = lStack_88;
    lStack_98 = 0;
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
    func_0x048afd20(puStack_110,auStack_60);
    plVar6 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar8 = plStack_50 + 1;
      lVar3 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar8 = plStack_40 + 1;
      lVar3 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x048aeca0(&uStack_108);
  }
  if ((uStack_128 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_118,uStack_128 & 0xfffffffffffffffe);
  }
  return;
}


