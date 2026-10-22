/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7c85e30 (ELF vaddr 0x7b85e30)
 * Label: callee-of:0xe1d0880
 * Body:  [[07c85e30, 07c8616b]]
 * Ghidra: FUN_07c85e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07c85e30(long *param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [32];
  
  *param_1 = param_2;
  plStack_100 = param_1 + 1;
  func_0x07c86170(plStack_100,param_2 + 0x18);
  *(undefined4 *)(param_1 + 5) = 0;
  if ((DAT_0f560cf8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f560cf8), iVar2 != 0)) {
    func_0x05f23820(0xf560ce0);
    func_0x0410844d(&DAT_0f560cf8);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = _DAT_0f560ce4;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0xfffffffffffffff7 < param_4) {
    uVar5 = func_0x04882e30();
    func_0x048afca0(&uStack_a8);
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      func_0x0412a280(lStack_c0,lStack_b0 - lStack_c0);
      uVar5 = func_0x04882e20(uVar5);
    }
    func_0x04882e20(uVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_4 < 0x17) {
    uStack_118 = CONCAT71(uStack_118._1_7_,(char)param_4 * '\x02');
    lVar3 = (long)&uStack_118 + 1;
    if (param_4 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_118._1_1_ = 0;
      goto joined_r0x07c86056;
    }
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
    uStack_118 = uVar6 | 1;
    uStack_110 = param_4;
    lStack_108 = lVar3;
  }
  func_0x0eee2f00(lVar3,param_3,param_4);
  *(undefined1 *)(lVar3 + param_4) = 0;
joined_r0x07c86056:
  if (param_5 == 2) {
    func_0x07c86580(*param_1 + 0x18);
    func_0x07c86170(&uStack_f8,*param_1 + 0x18);
    plStack_100[2] = uStack_e8;
    plStack_100[3] = lStack_e0;
    *(undefined4 *)plStack_100 = (undefined4)uStack_f8;
    *(undefined4 *)((long)plStack_100 + 4) = uStack_f8._4_4_;
    *(undefined4 *)(plStack_100 + 1) = (undefined4)uStack_f0;
    *(undefined4 *)((long)plStack_100 + 0xc) = uStack_f0._4_4_;
  }
  lVar3 = func_0x05f23890(*param_1 + 0x18);
  if ((*(int *)(lVar3 + 0x60) == -0x2b3da790) && (*(long *)(lVar3 + 0x68) != 0)) {
    *(bool *)(param_1 + 6) = param_5 == 0;
  }
  else {
    uStack_a8 = 0;
    uStack_a0 = 0;
    lStack_b8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    lStack_e0 = 0;
    uStack_f8 = (long *)0x0;
    uStack_f0 = 0;
    uStack_98 = 0;
    uStack_90 = 0x3f600000;
    func_0x048afb10(&lStack_c0,8);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar4 = &UNK_0f0f1810;
    if (uStack_f8 != (long *)0x0) {
      lVar3 = *uStack_f8;
      uStack_f8 = puVar4;
      (**(code **)(lVar3 + 8))();
      puVar4 = uStack_f8;
    }
    uStack_f8 = puVar4;
    if ((uStack_f0 & 1) == 0) {
      if ((uStack_118 & 1) == 0) {
        lStack_e0 = lStack_108;
        uStack_f0 = uStack_118;
        uStack_e8 = uStack_110;
      }
      else {
        FUN_04885070(&uStack_f0,lStack_108,uStack_110);
      }
    }
    else {
      uVar6 = uStack_118 >> 1 & 0x7f;
      lVar3 = (long)&uStack_118 + 1;
      if ((uStack_118 & 1) != 0) {
        uVar6 = uStack_110;
        lVar3 = lStack_108;
      }
      func_0x04885120(&uStack_f0,lVar3,uVar6);
    }
    func_0x07c86330(auStack_50,plStack_100,&uStack_f8);
    func_0x048aeca0(&uStack_f8);
  }
  if ((uStack_118 & 1) != 0) {
    func_0x0412a280(lStack_108,uStack_118 & 0xfffffffffffffffe);
  }
  return;
}


