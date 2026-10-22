/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x60aeeb0 (ELF vaddr 0x5faeeb0)
 * Label: callee-of:0x6146460
 * Body:  [[060aeeb0, 060af2ab] [060af2ce, 060af308]]
 * Ghidra: FUN_060aeeb0
 */


void FUN_060aeeb0(undefined8 param_1,char param_2,undefined1 param_3,undefined8 param_4,long param_5
                 ,undefined1 param_6)

{
  code *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puStack_1e0;
  undefined1 uStack_1d1;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [56];
  uint uStack_190;
  undefined1 auStack_188 [56];
  uint uStack_150;
  char cStack_148;
  undefined1 auStack_140 [56];
  uint uStack_108;
  undefined1 auStack_100 [56];
  uint uStack_c8;
  char cStack_c0;
  undefined1 auStack_b8 [56];
  uint uStack_80;
  undefined1 auStack_78 [56];
  uint uStack_40;
  char cStack_38;
  
  uStack_1d0 = param_4;
  plVar3 = (long *)func_0x060af310();
  if (plVar3 != (long *)0x0) {
    if ((ulong)*(uint *)(param_5 + 0x90) == 0xffffffff) {
      uVar6 = FUN_04931450();
      uVar6 = func_0x04882e20(uVar6);
      uVar6 = func_0x04882e20(uVar6);
      uVar6 = func_0x04882e20(uVar6);
      uVar6 = func_0x04882e20(uVar6);
      uVar6 = func_0x04882e20(uVar6);
      uVar6 = func_0x04882e20(uVar6);
      func_0x060a99b0(auStack_140);
      func_0x060a99b0(auStack_b8);
      uVar6 = func_0x0eee2d70(uVar6);
      func_0x060a99b0(auStack_b8);
      uVar6 = func_0x0eee2d70(uVar6);
      func_0x04882e20(uVar6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puStack_1e0 = &uStack_1d1;
    (**(code **)(&UNK_0f01ba78 + (ulong)*(uint *)(param_5 + 0x90) * 8))
              (auStack_b8,&puStack_1e0,param_5 + 8);
    uVar2 = uStack_80;
    if (param_2 == '\x01') {
      auStack_1c8[0] = 0;
      uStack_190 = 0xffffffff;
      if ((ulong)uStack_80 != 0xffffffff) {
        puStack_1e0 = auStack_1c8;
        (**(code **)(&UNK_0f01ba88 + (ulong)uStack_80 * 8))(&puStack_1e0,auStack_b8);
        uStack_190 = uVar2;
      }
      uVar2 = uStack_40;
      auStack_188[0] = 0;
      cStack_148 = '\0';
      if (cStack_38 == '\x01') {
        uStack_150 = 0xffffffff;
        if ((ulong)uStack_40 != 0xffffffff) {
          puStack_1e0 = auStack_188;
          (**(code **)(&UNK_0f01ba88 + (ulong)uStack_40 * 8))(&puStack_1e0,auStack_78);
          uStack_150 = uVar2;
        }
        cStack_148 = '\x01';
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,auStack_1c8,0,param_3,uStack_1d0,param_6);
      if (cStack_148 == '\x01') {
        if ((ulong)uStack_150 != 0xffffffff) {
          (**(code **)(&UNK_0f01ba58 + (ulong)uStack_150 * 8))(&puStack_1e0,auStack_188);
        }
        uStack_150 = 0xffffffff;
      }
      if ((ulong)uStack_190 != 0xffffffff) {
        (**(code **)(&UNK_0f01ba58 + (ulong)uStack_190 * 8))(&puStack_1e0,auStack_1c8);
      }
      uStack_190 = 0xffffffff;
    }
    else if (((param_2 == '\0') &&
             (plVar4 = (long *)func_0x0607ba60(param_1), plVar4 != (long *)0x0)) &&
            (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), uVar2 = uStack_80, lVar5 != 0)) {
      auStack_140[0] = 0;
      uStack_108 = 0xffffffff;
      if ((ulong)uStack_80 != 0xffffffff) {
        puStack_1e0 = auStack_140;
        (**(code **)(&UNK_0f01ba88 + (ulong)uStack_80 * 8))(&puStack_1e0,auStack_b8);
        uStack_108 = uVar2;
      }
      uVar2 = uStack_40;
      auStack_100[0] = 0;
      cStack_c0 = '\0';
      if (cStack_38 == '\x01') {
        uStack_c8 = 0xffffffff;
        if ((ulong)uStack_40 != 0xffffffff) {
          puStack_1e0 = auStack_100;
          (**(code **)(&UNK_0f01ba88 + (ulong)uStack_40 * 8))(&puStack_1e0,auStack_78);
          uStack_c8 = uVar2;
        }
        cStack_c0 = '\x01';
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,auStack_140,lVar5,param_3,uStack_1d0,param_6);
      if (cStack_c0 == '\x01') {
        if ((ulong)uStack_c8 != 0xffffffff) {
          (**(code **)(&UNK_0f01ba58 + (ulong)uStack_c8 * 8))(&puStack_1e0,auStack_100);
        }
        uStack_c8 = 0xffffffff;
      }
      if ((ulong)uStack_108 != 0xffffffff) {
        (**(code **)(&UNK_0f01ba58 + (ulong)uStack_108 * 8))(&puStack_1e0,auStack_140);
      }
      uStack_108 = 0xffffffff;
    }
    if (cStack_38 == '\x01') {
      if ((ulong)uStack_40 != 0xffffffff) {
        (**(code **)(&UNK_0f01ba58 + (ulong)uStack_40 * 8))(&puStack_1e0,auStack_78);
      }
      uStack_40 = 0xffffffff;
    }
    if ((ulong)uStack_80 != 0xffffffff) {
      (**(code **)(&UNK_0f01ba58 + (ulong)uStack_80 * 8))(&puStack_1e0,auStack_b8);
    }
  }
  return;
}


