/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb924110 (ELF vaddr 0xb824110)
 * Label: string:WorldGeneratorType
 * Body:  [[0b924110, 0b9243b0] [0b9243c0, 0b9244cc] [0b9244d0, 0b92451e]]
 * Ghidra: FUN_0b924110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b924110(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  undefined2 uStack_ef;
  undefined1 uStack_ed;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined2 uStack_e7;
  undefined1 uStack_e5;
  undefined4 uStack_e4;
  undefined1 uStack_d9;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_f8 = CONCAT31((int3)_DAT_01231a96,0x24);
  uStack_f4 = (undefined1)((ulong)_DAT_01231a96 >> 0x18);
  uStack_f3 = (undefined1)((ulong)_DAT_01231a96 >> 0x20);
  uStack_f2 = (undefined1)((ulong)_DAT_01231a96 >> 0x28);
  uStack_f1 = (undefined1)((ulong)_DAT_01231a96 >> 0x30);
  uStack_f0 = (undefined1)((ulong)_DAT_01231a96 >> 0x38);
  uStack_ef = (undefined2)_UNK_01231a9e;
  uStack_ed = (undefined1)((ulong)_UNK_01231a9e >> 0x10);
  uStack_ec = (undefined4)((ulong)_UNK_01231a9e >> 0x18);
  uStack_e8 = (undefined1)((ulong)_UNK_01231a9e >> 0x38);
  uStack_e7 = 0x6570;
  uStack_e5 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  func_0x048b1dc0(&lStack_90);
  uStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  if ((uStack_a8 & 1) == 0) {
    lStack_98 = CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8)));
    uStack_a8 = CONCAT44(CONCAT13(uStack_f1,CONCAT12(uStack_f2,CONCAT11(uStack_f3,uStack_f4))),
                         uStack_f8);
    uStack_a0 = CONCAT44(uStack_ec,CONCAT13(uStack_ed,CONCAT21(uStack_ef,uStack_f0)));
  }
  else {
    FUN_04885120(&uStack_a8,(long)&uStack_f8 + 1,0x12);
  }
  lVar8 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar8 == 0) {
    func_0x048b0de0(&uStack_48,&uStack_d9);
    _DAT_0f54fd90 = (undefined4)uStack_48;
    uRam000000000f54fd94 = uStack_48._4_4_;
    uVar5 = (undefined4)uStack_40;
    uVar6 = uStack_40._4_4_;
    uStack_48 = 0;
    uStack_40 = (long *)0x0;
    plVar2 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar5;
    uRam000000000f54fd9c = uVar6;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        func_0x0412c2d0(plVar2);
      }
    }
    plVar2 = uStack_40;
    if (uStack_40 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_40 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_40 + 0x10))(uStack_40);
        func_0x0412c2d0(plVar2);
      }
    }
    lVar8 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  lStack_90 = func_0x07aedbe0(lVar8);
  uStack_80 = 1;
  lStack_88 = lVar8;
  if ((uStack_f8 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8))),
                       CONCAT17(uStack_f1,
                                CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT14(uStack_f4,uStack_f8))
                                        )) & 0xfffffffffffffffe);
  }
  uStack_f8 = 0x65764f12;
  uStack_f4 = 0x72;
  uStack_f3 = 0x77;
  uStack_f2 = 0x6f;
  uStack_f1 = 0x72;
  uStack_f0 = 0x6c;
  uStack_ef = 100;
  uVar7 = func_0x0b924580(&lStack_d8,&uStack_f8,1);
  func_0x064e40a0(uVar7);
  uStack_f8 = 0x616c4608;
  uStack_f4 = 0x74;
  uStack_f3 = 0;
  uVar7 = func_0x0b924580(&lStack_d8,&uStack_f8,2);
  func_0x064e40a0(uVar7);
  uStack_f8 = 0x74654e0c;
  uStack_f4 = 0x68;
  uStack_f3 = 0x65;
  uStack_f2 = 0x72;
  uStack_f1 = 0;
  uVar7 = func_0x0b924580(&lStack_d8,&uStack_f8,3);
  func_0x064e40a0(uVar7);
  uStack_f8 = 0x6568540c;
  uStack_f4 = 0x45;
  uStack_f3 = 0x6e;
  uStack_f2 = 100;
  uStack_f1 = 0;
  uVar7 = func_0x0b924580(&lStack_d8,&uStack_f8,4);
  func_0x064e40a0(uVar7);
  uStack_f8 = 0x696f5608;
  uStack_f4 = 100;
  uStack_f3 = 0;
  uVar7 = func_0x0b924580(&lStack_d8,&uStack_f8,5);
  func_0x064e40a0(uVar7);
  func_0x064e40a0(&lStack_d8);
  lVar3 = lStack_c0;
  lVar8 = lStack_b8;
  if (lStack_c0 != 0) {
    for (; lVar3 != lVar8; lVar8 = lVar8 + -0x30) {
      if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar8 + -0x10),
                           *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_b8 = lVar3;
    thunk_FUN_0ee326a0(lStack_c0,lStack_b0 - lStack_c0);
  }
  lVar4 = lStack_c8;
  lVar3 = lStack_d0;
  lVar8 = lStack_d8;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  *param_1 = lVar8;
  param_1[1] = lVar3;
  param_1[2] = lVar4;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  param_1[5] = lStack_98;
  param_1[3] = uStack_a8;
  param_1[4] = uStack_a0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  *(undefined1 *)(param_1 + 8) = uStack_80;
  param_1[6] = lStack_90;
  param_1[7] = lStack_88;
  param_1[9] = lStack_78;
  param_1[10] = lStack_70;
  param_1[0xb] = lStack_68;
  lStack_78 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_60;
  *(undefined4 *)((long)param_1 + 100) = uStack_60._4_4_;
  *(undefined4 *)(param_1 + 0xd) = (undefined4)uStack_58;
  *(undefined4 *)((long)param_1 + 0x6c) = uStack_58._4_4_;
  param_1[0xe] = lStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  func_0x0652e0f0(&lStack_c0);
  lVar3 = lStack_d8;
  lVar8 = lStack_d0;
  if (lStack_d8 != 0) {
    for (; lVar3 != lVar8; lVar8 = lVar8 + -0x30) {
      if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar8 + -0x10),
                           *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_d0 = lVar3;
    thunk_FUN_0ee326a0(lStack_d8,lStack_c8 - lStack_d8);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x1231a96  WorldGeneratorType
 */
