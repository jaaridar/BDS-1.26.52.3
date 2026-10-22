/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d64270 (ELF vaddr 0x5c64270)
 * Label: callee-of:0x6146460
 * Body:  [[05d64270, 05d644d6]]
 * Ghidra: FUN_05d64270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d64270(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = (long *)0x0;
  uStack_38 = 0;
  *param_1 = &UNK_0f4621c0;
  if (0xfffffffffffffff7 < param_3) {
    uVar5 = FUN_04882e30();
    FUN_05d644e0(&uStack_48);
    func_0x0eee2d70(uVar5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 < 0x17) {
    *(char *)(param_1 + 1) = (char)param_3 * '\x02';
    lVar4 = (long)param_1 + 9;
    if (param_3 == 0) goto LAB_05d64319;
  }
  else {
    uVar6 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      uVar6 = (param_3 | 7) + 1;
    }
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (lVar4 == 0) {
      FUN_0eec74c0(uVar6,0);
    }
    param_1[3] = lVar4;
    param_1[1] = uVar6 | 1;
    param_1[2] = param_3;
  }
  func_0x0eee2ee0(lVar4,param_2,param_3);
LAB_05d64319:
  plVar3 = uStack_40;
  *(undefined1 *)(lVar4 + param_3) = 0;
  param_1[4] = &UNK_0f462230;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  *(undefined8 *)((long)param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0x19) = (undefined4)uStack_48;
  *(undefined4 *)((long)param_1 + 0xcc) = uStack_48._4_4_;
  *(undefined4 *)(param_1 + 0x1a) = (undefined4)uStack_40;
  *(undefined4 *)((long)param_1 + 0xd4) = uStack_40._4_4_;
  if (uStack_40 != (long *)0x0) {
    LOCK();
    uStack_40[1] = uStack_40[1] + 1;
    UNLOCK();
  }
  param_1[0x1b] = uStack_38;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = param_1 + 0x1e;
  *(undefined1 *)(param_1 + 0x20) = 0;
  uStack_48 = 0;
  uStack_40 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
    plVar3 = uStack_40;
    uStack_38 = 0;
    if (uStack_40 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_40 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*uStack_40 + 0x10))(uStack_40);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  *param_1 = &UNK_0f011c90;
  param_1[0x21] = &UNK_0f011d00;
  uVar5 = _UNK_014e0ea8;
  param_1[0x22] = _DAT_014e0ea0;
  param_1[0x23] = uVar5;
  param_1[0x24] = 0x8000000080000000;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((long)param_1 + 0x145) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  *(ulong *)((long)param_1 + 0x194) = (ulong)_DAT_011985d4;
  return;
}


