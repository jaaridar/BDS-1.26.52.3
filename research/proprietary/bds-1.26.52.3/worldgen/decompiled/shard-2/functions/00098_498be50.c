/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x498be50
 * Label: string:Cave placement is only valid in the "pregeneration_pass" pla
 * Body:  [[0498be50, 0498c1ed]]
 * Ghidra: FUN_0498be50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0498be50(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  long *plVar6;
  long *unaff_RBX;
  undefined8 *puVar7;
  undefined8 *unaff_R12;
  long *unaff_R13;
  long *unaff_R14;
  long *plVar8;
  undefined4 uStack000000000000000c;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined2 in_stack_00000030;
  undefined2 uStack0000000000000032;
  undefined4 uStack0000000000000034;
  long *in_stack_00000038;
  long *in_stack_00000040;
  undefined *in_stack_00000048;
  long *in_stack_00000050;
  undefined2 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined1 in_stack_00000078;
  undefined1 uStack0000000000000079;
  undefined6 uStack000000000000007a;
  undefined2 in_stack_00000080;
  undefined6 uStack0000000000000082;
  undefined *in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  undefined *in_stack_000000d8;
  long *in_stack_000000e0;
  uint in_stack_00000100;
  byte bStack0000000000000110;
  undefined7 uStack0000000000000111;
  undefined8 in_stack_00000120;
  undefined8 *in_stack_00000128;
  undefined8 *in_stack_00000130;
  long in_stack_00000138;
  
  unaff_R14[1] = unaff_R14[1] + 1;
  LOCK();
  unaff_R14[1] = unaff_R14[1] + 1;
  UNLOCK();
  unaff_RBX[0xab] = (long)unaff_R13;
  plVar8 = (long *)unaff_RBX[0xac];
  unaff_RBX[0xac] = (long)unaff_R14;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((unaff_RBX[0xad] == 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_011c8bac,&UNK_01455e68,0x1904,&UNK_012ff8ca,&UNK_01232102),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  in_stack_00000098 = (undefined *)unaff_RBX[0xab];
  func_0x0bc5d450(unaff_RBX[0xad],&stack0x00000098);
  plVar8 = in_stack_00000050;
  if (in_stack_00000050 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000050 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*in_stack_00000050 + 0x10))(in_stack_00000050);
      func_0x0412c2d0(plVar8);
    }
  }
  (**(code **)(*unaff_R13 + 0x20))();
  uStack00000000000000a0 = *(undefined4 *)(unaff_R12 + 1);
  in_stack_00000098 = (undefined *)*unaff_R12;
  in_stack_000000a8 = 0;
  uStack000000000000000c = uStack00000000000000a4;
  func_0x09f73da0();
  LOCK();
  lVar1 = *in_stack_00000020;
  *in_stack_00000020 = *in_stack_00000020 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*unaff_R14 + 0x10))();
    func_0x0412c2d0();
  }
  uVar2 = *unaff_R12;
  in_stack_00000028._4_4_ = (undefined4)uVar2;
  in_stack_00000030 = (undefined2)((ulong)uVar2 >> 0x20);
  uStack0000000000000032 = (undefined2)((ulong)uVar2 >> 0x30);
  uStack0000000000000034 = *(undefined4 *)(unaff_R12 + 1);
  in_stack_00000050 = (long *)0x100000002;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000048 = &UNK_0f126ab8;
  uStack0000000000000079 = 0x24;
  uStack000000000000007a = CONCAT42(in_stack_00000028._4_4_,in_stack_00000028._2_2_);
  uStack0000000000000082 =
       (undefined6)(CONCAT44(uStack0000000000000034,(int)((ulong)uVar2 >> 0x20)) >> 0x10);
  in_stack_00000080 = in_stack_00000030;
  (**(code **)(*unaff_RBX + 0x728))();
  plVar8 = (long *)unaff_RBX[0xac];
  if (plVar8 != (long *)0x0) {
    plVar3 = (long *)unaff_RBX[0xab];
    LOCK();
    plVar8[2] = plVar8[2] + 1;
    UNLOCK();
    plVar6 = (long *)func_0x0412c300(plVar8);
    in_stack_00000040 = plVar6;
    if (plVar6 != (long *)0x0) {
      in_stack_00000038 = plVar3;
      func_0x0412c2d0(plVar8);
      if (plVar3 != (long *)0x0) {
        cVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x085b8d50(&stack0x00000098,(int)cVar5);
        (**(code **)(*unaff_RBX + 0x728))();
        puVar4 = in_stack_00000128;
        in_stack_00000098 = &UNK_0f125f78;
        puVar7 = in_stack_00000130;
        if (in_stack_00000128 != (undefined8 *)0x0) {
          while (puVar4 != puVar7) {
            puVar7 = puVar7 + -10;
            (**(code **)*puVar7)(puVar7);
          }
          in_stack_00000130 = puVar4;
          func_0x0412a280(in_stack_00000128,in_stack_00000138 - (long)in_stack_00000128);
        }
        in_stack_000000d8 = &UNK_0ef51ad8;
        if ((bStack0000000000000110 & 1) != 0) {
          func_0x0412a280(in_stack_00000120,
                          CONCAT71(uStack0000000000000111,bStack0000000000000110) &
                          0xfffffffffffffffe);
        }
        if ((ulong)in_stack_00000100 != 0xffffffff) {
          (**(code **)(&UNK_0ef4a6a8 + (ulong)in_stack_00000100 * 8))
                    (&stack0x0000001b,&stack0x000000f0);
        }
        plVar8 = in_stack_000000e0;
        in_stack_00000100 = 0xffffffff;
        in_stack_000000d8 = &UNK_0f3773c0;
        in_stack_000000e0 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x90))();
        }
        plVar6 = in_stack_00000040;
        if (in_stack_00000040 == (long *)0x0) {
          return;
        }
      }
      LOCK();
      plVar8 = plVar6 + 1;
      lVar1 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar1 != 0) {
        return;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar8 = plVar6;
    }
    func_0x0412c2d0(plVar8);
  }
  return;
}


