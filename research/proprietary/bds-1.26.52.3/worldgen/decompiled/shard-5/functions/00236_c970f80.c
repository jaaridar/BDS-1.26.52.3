/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca70f80 (ELF vaddr 0xc970f80)
 * Label: callee-of:0x517c470
 * Body:  [[0ca70f80, 0ca71058] [0ca71060, 0ca7113b] [0ca71140, 0ca711ef]]
 * Ghidra: FUN_0ca70f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca70f80(long param_1,long *param_2,long param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 uStack_c9;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long *plStack_48;
  
  uStack_c8 = param_5;
  uStack_c4 = param_6;
  plVar3 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
  (**(code **)(*plVar3 + 0xc48))(&uStack_a8,plVar3);
  auStack_c0[0] = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  lVar2 = CONCAT44(uStack_9c,uStack_a0);
  uStack_68 = uStack_a8;
  uStack_64 = uStack_a4;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  if (lVar2 == 0) {
    func_0x0ca11350(auStack_c0,&uStack_68);
    lVar2 = CONCAT44(uStack_9c,uStack_a0);
  }
  else {
    LOCK();
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    UNLOCK();
    func_0x0ca11350(auStack_c0,&uStack_68);
    FUN_0412c2d0(lVar2);
    lVar2 = CONCAT44(uStack_9c,uStack_a0);
  }
  if (lVar2 != 0) {
    FUN_0412c2d0();
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x30);
  puStack_90 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x38);
  if (puVar7 != puStack_90) {
    do {
      uVar1 = *puVar7;
      lVar2 = *(long *)(param_3 + 0x9f8);
      if (*(char *)(lVar2 + 0x9e7) == '\x01') {
        *(uint *)(lVar2 + 8) = param_4;
        *(undefined2 *)(lVar2 + 0x9e4) = 0;
        *(undefined4 *)(lVar2 + 0x9d4) = 0;
        *(undefined8 *)(lVar2 + 0x9d8) = 0;
        *(uint *)(lVar2 + 0xc) = param_4;
        lVar4 = 5;
        uVar5 = param_4;
        while( true ) {
          uVar6 = ((ulong)((uVar5 >> 0x1e ^ uVar5) * 0x6c078965) + lVar4) - 4;
          uVar5 = (uint)uVar6;
          *(uint *)(lVar2 + -4 + lVar4 * 4) = uVar5;
          if (lVar4 == 0x191) break;
          uVar5 = (((uint)(uVar6 >> 0x1e) & 3 ^ uVar5) * 0x6c078965 + (int)lVar4) - 3;
          *(uint *)(lVar2 + lVar4 * 4) = uVar5;
          lVar4 = lVar4 + 2;
        }
        *(undefined8 *)(lVar2 + 0x9cc) = 0x18e00000270;
      }
      uStack_c9 = 0;
      lStack_88 = (**(code **)(*param_2 + 0x140))(param_2,uStack_c8,uStack_c4);
      if (lStack_88 != 0) {
        uStack_78 = *(undefined4 *)(lStack_88 + 0x40);
        uStack_80 = *(undefined8 *)(lStack_88 + 0x38);
        uStack_6c = *(undefined4 *)(lStack_88 + 0x4c);
        uStack_74 = *(undefined8 *)(lStack_88 + 0x44);
        plVar3 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (plVar3 == (long *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        *plVar3 = (long)&UNK_0f461860;
        plVar3[1] = (long)param_2;
        plVar3[2] = param_3;
        plVar3[3] = (long)&uStack_80;
        plVar3[4] = (long)&uStack_c9;
        plVar3[5] = (long)&lStack_88;
        plStack_48 = plVar3;
        func_0x0d351180(uVar1,&uStack_80,&uStack_68);
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puStack_90);
  }
  func_0x0ca11610(auStack_c0);
  if (lStack_b0 != 0) {
    FUN_0412c2d0();
  }
  return;
}


