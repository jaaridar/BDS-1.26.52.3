/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1f5270
 * Label: string:Failed to parse jigsaw structure definition '%s'.
 * Body:  [[0d1f5270, 0d1f5668] [0d1f56d4, 0d1f5716] [0d1f593f, 0d1f598c]]
 * Ghidra: FUN_0d1f5270
 */


void FUN_0d1f5270(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_R13;
  bool bVar5;
  long in_stack_00000020;
  undefined1 *puStack0000000000000028;
  undefined8 in_stack_00000048;
  char in_stack_00000050;
  undefined1 in_stack_00000058 [16];
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000088;
  byte bStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 in_stack_000000d0;
  byte bStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 in_stack_000000e8;
  byte bStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 in_stack_00000100;
  byte bStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 in_stack_00000118;
  undefined1 in_stack_00000120;
  byte bStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 in_stack_00000138;
  
  puStack0000000000000028 = param_3;
  lVar3 = (**(code **)(&UNK_0f47e980 + param_4 * 8))(&stack0x00000028);
  if (lVar3 == 0) {
    if (*(char *)(unaff_R13 + 0x430) == '\x01') {
      func_0x048f6240(unaff_R13 + 0x3b0);
      *(undefined1 *)(unaff_R13 + 0x430) = 0;
    }
    goto LAB_0d1f54e4;
  }
  func_0x0d260870(&stack0x000000c0,in_stack_00000088);
  if (*(char *)(unaff_R13 + 0x430) == '\0') {
    *(undefined8 *)(unaff_R13 + 0x3c0) = in_stack_000000d0;
    *(undefined8 *)(unaff_R13 + 0x3b0) = _bStack00000000000000c0;
    *(undefined8 *)(unaff_R13 + 0x3b8) = uStack00000000000000c8;
    _bStack00000000000000c0 = (undefined1  [16])0x0;
    in_stack_000000d0 = 0;
    *(undefined8 *)(unaff_R13 + 0x3d8) = in_stack_000000e8;
    *(undefined8 *)(unaff_R13 + 0x3c8) = _bStack00000000000000d8;
    *(undefined8 *)(unaff_R13 + 0x3d0) = uStack00000000000000e0;
    _bStack00000000000000d8 = (undefined1  [16])0x0;
    in_stack_000000e8 = 0;
    *(undefined8 *)(unaff_R13 + 0x3f0) = in_stack_00000100;
    *(undefined8 *)(unaff_R13 + 0x3e0) = _bStack00000000000000f0;
    *(undefined8 *)(unaff_R13 + 1000) = uStack00000000000000f8;
    _bStack00000000000000f0 = (undefined1  [16])0x0;
    in_stack_00000100 = 0;
    *(undefined8 *)(unaff_R13 + 0x408) = in_stack_00000118;
    *(undefined8 *)(unaff_R13 + 0x3f8) = _bStack0000000000000108;
    *(undefined8 *)(unaff_R13 + 0x400) = uStack0000000000000110;
    _bStack0000000000000108 = (undefined1  [16])0x0;
    in_stack_00000118 = 0;
    *(undefined1 *)(unaff_R13 + 0x410) = in_stack_00000120;
    *(undefined8 *)(unaff_R13 + 0x428) = in_stack_00000138;
    *(undefined8 *)(unaff_R13 + 0x418) = _bStack0000000000000128;
    *(undefined8 *)(unaff_R13 + 0x420) = uStack0000000000000130;
    _bStack0000000000000128 = (undefined1  [16])0x0;
    in_stack_00000138 = 0;
    *(undefined1 *)(unaff_R13 + 0x430) = 1;
LAB_0d1f52db:
    if ((bStack00000000000000f0 & 1) == 0) goto LAB_0d1f52e9;
LAB_0d1f5481:
    func_0x0412a280(in_stack_00000100,_bStack00000000000000f0 & 0xfffffffffffffffe);
    if ((bStack00000000000000d8 & 1) != 0) goto LAB_0d1f54a8;
LAB_0d1f52f7:
  }
  else {
    func_0x07fdb1b0((undefined8 *)(unaff_R13 + 0x3b0),&stack0x000000c0);
    if ((bStack0000000000000128 & 1) == 0) {
    }
    else {
      func_0x0412a280(in_stack_00000138,_bStack0000000000000128 & 0xfffffffffffffffe);
    }
    if ((bStack0000000000000108 & 1) == 0) goto LAB_0d1f52db;
    func_0x0412a280(in_stack_00000118,_bStack0000000000000108 & 0xfffffffffffffffe);
    if ((bStack00000000000000f0 & 1) != 0) goto LAB_0d1f5481;
LAB_0d1f52e9:
    if ((bStack00000000000000d8 & 1) == 0) goto LAB_0d1f52f7;
LAB_0d1f54a8:
    func_0x0412a280(in_stack_000000e8,_bStack00000000000000d8 & 0xfffffffffffffffe);
  }
  if ((bStack00000000000000c0 & 1) != 0) {
    func_0x0412a280(in_stack_000000d0,_bStack00000000000000c0 & 0xfffffffffffffffe);
  }
LAB_0d1f54e4:
  uStack00000000000000c8 = 0x1c;
  _bStack00000000000000c0 = &DAT_011afd99;
  lVar3 = func_0x0d6c97a0();
  if (lVar3 != in_stack_00000020) {
    if ((ulong)*(uint *)(lVar3 + 0x60) == 0xffffffff) {
      func_0x04931450();
      func_0x04931450();
      func_0x04931450();
      func_0x04931450();
      func_0x04931450();
      uVar4 = func_0x04931450();
      uVar4 = func_0x04882e20(uVar4);
      uVar4 = func_0x04882e20(uVar4);
      uVar4 = func_0x04882e20(uVar4);
      uVar4 = func_0x04882e20(uVar4);
      if ((bStack00000000000000c0 & 1) != 0) {
        func_0x0412a280(in_stack_000000d0,_bStack00000000000000c0 & 0xfffffffffffffffe);
        func_0x048c3ac0(&stack0x00000048);
        uVar4 = func_0x0eee2d70(uVar4);
      }
      func_0x048c3ac0(&stack0x00000048);
      func_0x0eee2d70(uVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puStack0000000000000028 = &stack0x00000040;
    lVar3 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar3 + 0x60) * 8))
                      (&stack0x00000028,lVar3 + 0x38);
    if (lVar3 != 0) {
      uStack00000000000000c8 = 0x1c;
      _bStack00000000000000c0 = &DAT_011afd99;
      lVar3 = func_0x0d6c97a0();
      if ((lVar3 == in_stack_00000020) || (*(int *)(lVar3 + 0x60) != 1)) {
        bVar5 = false;
      }
      else {
        bVar5 = *(char *)(lVar3 + 0x40) != '\0';
      }
      *(bool *)(unaff_R13 + 0x4c2) = bVar5;
    }
  }
  uVar4 = in_stack_00000058._8_8_;
  in_stack_00000058 = (undefined1  [16])0x0;
  if ((long *)uVar4 != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(uVar4 + 8);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(long *)uVar4 + 0x10))(uVar4);
      func_0x0412c2d0(uVar4);
      uVar4 = in_stack_00000058._8_8_;
      in_stack_00000068 = 0;
      if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
        in_stack_00000068 = 0;
        LOCK();
        plVar1 = (long *)(in_stack_00000058._8_8_ + 8);
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
          func_0x0412c2d0(uVar4);
        }
      }
    }
    else {
      in_stack_00000068 = 0;
    }
  }
  if (in_stack_00000050 == '\x01') {
    func_0x0eee02f0(in_stack_00000048);
  }
  return;
}


