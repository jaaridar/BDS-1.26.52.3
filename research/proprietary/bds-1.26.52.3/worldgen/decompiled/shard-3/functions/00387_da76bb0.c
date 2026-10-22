/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb76bb0 (ELF vaddr 0xda76bb0)
 * Label: callee2-of:0xda34c00
 * Body:  [[0db76bb0, 0db771f7]]
 * Ghidra: FUN_0db76bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db76bb0(long *param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  long *plStack_108;
  undefined4 auStack_100 [2];
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  *param_1 = param_2;
  plStack_108 = param_1 + 1;
  func_0x0db77280(plStack_108,param_2 + 0x18);
  *(undefined4 *)(param_1 + 5) = 0;
  if ((DAT_0f7368c0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f7368c0), iVar3 != 0)) {
    func_0x0db765c0(0xf7368a8);
    func_0x0410844d(&DAT_0f7368c0);
  }
  *(uint *)((long)param_1 + 0x2c) = _DAT_0f7368ac;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 < 0xfffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_120 = CONCAT71(uStack_120._1_7_,(char)param_4 * '\x02');
      lVar4 = (long)&uStack_120 + 1;
      if (param_4 != 0) goto LAB_0db76c85;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_120._1_1_ = 0;
    }
    else {
      uVar6 = 0x1a;
      if ((param_4 | 7) != 0x17) {
        uVar6 = (param_4 | 7) + 1;
      }
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
      if (lVar4 == 0) {
        FUN_0eec74c0(uVar6,0);
      }
      uStack_120 = uVar6 | 1;
      uStack_118 = param_4;
      lStack_110 = lVar4;
LAB_0db76c85:
      func_0x0eee2f00(lVar4,param_3,param_4);
      *(undefined1 *)(lVar4 + param_4) = 0;
    }
    if (param_5 == 2) {
      lVar4 = *param_1;
      if ((DAT_0f7368c0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f7368c0), iVar3 != 0)) {
        func_0x0db765c0(0xf7368a8);
        func_0x0410844d(&DAT_0f7368c0);
      }
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x18)) >> 3
                                    ) - 1U & _DAT_0f7368ac) * 8);
      do {
        plVar7 = plVar1;
        lVar2 = *plVar7;
        if (lVar2 == -1) goto LAB_0db76d06;
        plVar1 = (long *)(*(long *)(lVar4 + 0x30) + lVar2 * 0x18);
      } while (*(uint *)(*(long *)(lVar4 + 0x30) + 8 + lVar2 * 0x18) != _DAT_0f7368ac);
      *plVar7 = *plVar1;
      func_0x048af970(lVar4 + 0x18);
LAB_0db76d06:
      func_0x0db77280(&uStack_e8,*param_1 + 0x18);
      plStack_108[2] = uStack_d8;
      plStack_108[3] = lStack_d0;
      *(undefined4 *)plStack_108 = (undefined4)uStack_e8;
      *(undefined4 *)((long)plStack_108 + 4) = uStack_e8._4_4_;
      *(undefined4 *)(plStack_108 + 1) = (undefined4)uStack_e0;
      *(undefined4 *)((long)plStack_108 + 0xc) = uStack_e0._4_4_;
    }
    lVar4 = func_0x0db763d0(*param_1 + 0x18);
    if ((*(int *)(lVar4 + 0x60) == -0x2b3da790) && (*(long *)(lVar4 + 0x68) != 0)) {
      *(bool *)(param_1 + 6) = param_5 == 0;
    }
    else {
      lStack_98 = 0;
      lStack_90 = 0;
      lStack_a8 = 0;
      lStack_a0 = 0;
      lStack_b8 = 0;
      lStack_b0 = 0;
      lStack_c8 = 0;
      lStack_c0 = 0;
      uStack_d8 = 0;
      lStack_d0 = 0;
      uStack_e8 = (long *)0x0;
      uStack_e0 = 0;
      lStack_88 = 0;
      uStack_80 = 0x3f600000;
      func_0x048afb10(&lStack_b0,8);
      uStack_58 = 0;
      lStack_50 = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      lStack_78 = 0;
      lStack_70 = 0;
      puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar5 == (undefined8 *)0x0) {
        FUN_0eec74c0(8,0);
      }
      *puVar5 = &UNK_0f493e40;
      if (uStack_e8 != (long *)0x0) {
        lVar4 = *uStack_e8;
        uStack_e8 = puVar5;
        (**(code **)(lVar4 + 8))();
        puVar5 = uStack_e8;
      }
      uStack_e8 = puVar5;
      if ((uStack_e0 & 1) == 0) {
        if ((uStack_120 & 1) == 0) {
          lStack_d0 = lStack_110;
          uStack_e0 = uStack_120;
          uStack_d8 = uStack_118;
        }
        else {
          FUN_04885070(&uStack_e0,lStack_110,uStack_118);
        }
      }
      else {
        uVar6 = uStack_120 >> 1 & 0x7f;
        lVar4 = (long)&uStack_120 + 1;
        if ((uStack_120 & 1) != 0) {
          uVar6 = uStack_118;
          lVar4 = lStack_110;
        }
        func_0x04885120(&uStack_e0,lVar4,uVar6);
      }
      if ((DAT_0f5509f0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f5509f0), iVar3 != 0)) {
        func_0x048afe70(0xf5509d8);
        func_0x0410844d(&DAT_0f5509f0);
      }
      auStack_100[0] = _DAT_0f5509dc;
      plStack_f0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
      if (plStack_f0 == (long *)0x0) {
        FUN_0eec74c0(0xb8,0);
      }
      puVar5 = uStack_e8;
      plStack_f0[1] = 0;
      plStack_f0[2] = 0;
      *plStack_f0 = (long)&UNK_0ef43980;
      plStack_f8 = plStack_f0 + 3;
      uStack_e8 = (long *)0x0;
      plStack_f0[3] = (long)puVar5;
      plStack_f0[6] = lStack_d0;
      plStack_f0[4] = uStack_e0;
      plStack_f0[5] = uStack_d8;
      uStack_e0 = 0;
      uStack_d8 = 0;
      lStack_d0 = 0;
      plStack_f0[7] = lStack_c8;
      plStack_f0[8] = lStack_c0;
      plStack_f0[9] = lStack_b8;
      lStack_c8 = 0;
      lStack_c0 = 0;
      lStack_b8 = 0;
      plStack_f0[10] = lStack_b0;
      plStack_f0[0xb] = lStack_a8;
      plStack_f0[0xc] = lStack_a0;
      lStack_b0 = 0;
      lStack_a8 = 0;
      lStack_a0 = 0;
      plStack_f0[0xd] = lStack_98;
      plStack_f0[0xe] = lStack_90;
      plStack_f0[0xf] = lStack_88;
      lStack_98 = 0;
      lStack_90 = 0;
      lStack_88 = 0;
      *(undefined4 *)(plStack_f0 + 0x10) = uStack_80;
      plStack_f0[0x11] = lStack_78;
      plStack_f0[0x12] = lStack_70;
      plStack_f0[0x13] = lStack_68;
      lStack_78 = 0;
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
      func_0x048afd20(plStack_108,auStack_100);
      plVar1 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        LOCK();
        plVar7 = plStack_f0 + 1;
        lVar4 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          func_0x0412c2d0(plVar1);
        }
      }
      plVar1 = plStack_40;
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plVar7 = plStack_40 + 1;
        lVar4 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          func_0x0412c2d0(plVar1);
        }
      }
      func_0x048aeca0(&uStack_e8);
    }
    func_0x0a7acf20(&uStack_e8,*param_1,&UNK_014d5698,0x18,1);
    if (DAT_0f67b948 != '\0') goto LAB_0db77093;
  }
  else {
    func_0x04882e30();
  }
  iVar3 = func_0x04108328(&DAT_0f67b948);
  if (iVar3 != 0) {
    func_0x0a7adff0(0xf67b930);
    func_0x0410844d(&DAT_0f67b948);
  }
LAB_0db77093:
  auStack_100[0] = _DAT_0f67b934;
  plStack_f8 = (long *)&SUB_0a7ad990;
  plStack_f0 = (long *)&UNK_0db775b0;
  func_0x05da1460(plStack_108);
  if ((uStack_120 & 1) != 0) {
    func_0x0412a280(lStack_110,uStack_120 & 0xfffffffffffffffe);
  }
  return;
}


