/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb715390
 * Label: string:Invalid Custom Biome Source
 * Body:  [[0b715390, 0b715466] [0b715470, 0b71549d] [0b715500, 0b715793]]
 * Ghidra: FUN_0b715390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b715390(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  char cVar6;
  char *in_RAX;
  char *in_RCX;
  long unaff_RBX;
  undefined8 unaff_RBP;
  long *unaff_R12;
  char in_CF;
  ulong unaff_retaddr;
  undefined8 in_stack_00000010;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000058;
  long *in_stack_00000060;
  undefined *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined1 in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_000000c8;
  undefined *in_stack_000000d0;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  byte in_stack_00000110;
  
  cVar6 = (char)in_RAX;
  *in_RCX = *in_RCX + cVar6 + in_CF;
  *in_RAX = *in_RAX + cVar6;
  if (cVar6 == '\0') {
    func_0x0eedea30();
    func_0x0eedeb80(2,0x2d,&stack0x000000d0);
    if ((unaff_retaddr & 1) != 0) {
      func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
    }
    in_RAX = (char *)(ulong)in_stack_00000110;
  }
  if (((ulong)in_RAX & 1) == 0) {
    if (in_stack_000000f8 != 0) {
      while (in_stack_000000f8 != in_stack_00000100) {
        in_stack_00000100 = in_stack_00000100 + -0x40;
        func_0x048b3e80(in_stack_00000100);
      }
      func_0x0412a280(in_stack_000000f8,in_stack_00000108 - in_stack_000000f8);
    }
    if (in_stack_000000e0 != 0) {
      for (; in_stack_000000e0 != in_stack_000000e8; in_stack_000000e8 = in_stack_000000e8 + -0x50)
      {
        if ((*(char *)(in_stack_000000e8 + -8) == '\x01') &&
           ((*(byte *)(in_stack_000000e8 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_000000e8 + -0x20),
                          *(ulong *)(in_stack_000000e8 + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_000000e0,in_stack_000000f0 - in_stack_000000e0);
    }
  }
  in_stack_000000d0 = (undefined *)unaff_RBP;
  if ((*(byte *)(unaff_RBX + 0x20) & 1) != 0) {
    in_stack_000000d0 = (undefined *)*(undefined8 *)(unaff_RBX + 0x30);
  }
  func_0x0ee590f0(&stack0x00000088,0x10);
  func_0x0ee5e270(in_stack_000000b8,&stack0x000000d0,(ulong)in_stack_00000088 & 0xffff);
  in_stack_00000088 = &UNK_01406d36;
  in_stack_00000090 = 0xc;
  in_stack_00000098 = _DAT_0f778528;
  in_stack_000000a0 = 0xffffffff00000001;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = func_0x0417cc60();
  in_stack_000000b0 = in_stack_000000b0 + 1000000000;
  (**(code **)(*unaff_R12 + 0x48))();
  in_stack_00000040 = 0;
  in_stack_00000048 = (long *)0x0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = (long *)0x0;
  in_stack_000000d0 = &UNK_0f2d12a8;
  func_0x048a4fd0(&stack0x00000020);
  if (in_stack_000000d0 != (undefined *)0x0) {
    (**(code **)(in_stack_000000d0 + 8))(&stack0x000000d0);
  }
  plVar5 = in_stack_00000048;
  if (in_stack_00000048 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000048 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_00000048 + 0x10))(in_stack_00000048);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = in_stack_00000028;
  in_stack_00000058 = in_stack_00000020;
  in_stack_00000060 = in_stack_00000028;
  if (in_stack_00000028 != (long *)0x0) {
    LOCK();
    in_stack_00000028[1] = in_stack_00000028[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(unaff_RBX + 0x1e8);
  if (iVar4 != 1) {
    if (iVar4 == 3) {
      *(undefined4 *)(in_stack_00000020 + 6) = 0;
    }
    else if (iVar4 == 2) {
      (**(code **)(*in_stack_00000020 + 0x10))();
      goto LAB_0b7156f8;
    }
    if (in_stack_00000028 != (long *)0x0) {
      LOCK();
      in_stack_00000028[1] = in_stack_00000028[1] + 1;
      UNLOCK();
    }
    (**(code **)(*unaff_R12 + 0x28))();
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        func_0x0412c2d0(plVar5);
      }
    }
  }
LAB_0b7156f8:
  plVar5 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000060 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar1 = in_stack_000000c8;
  plVar5 = in_stack_00000028;
  if (in_stack_000000c8 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_000000c8 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_000000c8 + 0x10))(in_stack_000000c8);
      func_0x0412c2d0(plVar1);
    }
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  return;
}


