/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x523dad0
 * Label: VanillaSurfaceBuilders::SwampSurfaceBuilder::vslot1
 * Body:  [[0523dad0, 0523daf7]]
 * Ghidra: wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot1
 */


/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot1
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  long in_RAX;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulong uVar8;
  undefined8 unaff_R15;
  
  *(byte *)(param_1 + -0x74b80000) = *(byte *)(param_1 + -0x74b80000) | (byte)in_RAX;
  *(char *)(in_RAX + -0x7d) = *(char *)(in_RAX + -0x7d) + (char)param_4;
  out(0xfe,(byte)in_RAX);
  __DT_RELA[0x4f3c2]._12_8_ = 0x523dae5;
  func_0x0412a280();
  if ((__DT_RELA[0x4f964].r_offset._4_1_ & 1) != 0) {
    param_2 = (undefined8 *)
              (CONCAT71(__DT_RELA[0x4f964]._5_7_,__DT_RELA[0x4f964].r_offset._4_1_) &
              0xfffffffffffffffe);
    __DT_RELA[0x4f3c2]._12_8_ = 0x5249998;
    func_0x0412a280(__DT_RELA._7823732_8_);
  }
  __DT_RELA[0x4f3c2]._12_8_ = 0x52499a0;
  uVar7 = unaff_RBX;
  func_0x0eee2d70();
  __DT_RELA[0x4f3be]._4_8_ = 0x52499d0;
  __DT_RELA._7789076_8_ = unaff_RBX;
  __DT_RELA[0x4f3c1]._4_8_ = unaff_R12;
  __DT_RELA[0x4f3c1]._12_8_ = unaff_R13;
  __DT_RELA._7789100_8_ = unaff_R14;
  __DT_RELA[0x4f3c2]._4_8_ = unaff_R15;
  __DT_RELA[0x4f3c2]._12_8_ = unaff_RBP;
  lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar4 == 0) goto LAB_05249b68;
  while( true ) {
    pcVar2 = (char *)*param_2;
    __DT_RELA._7789052_8_ = param_2[1];
    __DT_RELA[0x4f3bf]._12_8_ = pcVar2;
    if (__DT_RELA._7789052_8_ != 0) {
      LOCK();
      *(long *)(__DT_RELA._7789052_8_ + 8) = *(long *)(__DT_RELA._7789052_8_ + 8) + 1;
      UNLOCK();
    }
    __DT_RELA[0x4f3c0]._4_8_ = param_2[2];
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) break;
    __DT_RELA[0x4f3be]._4_8_ = 0x5249b68;
    func_0x04890760();
LAB_05249b68:
    __DT_RELA[0x4f3be]._4_8_ = 0x5249b74;
    func_0x0eec74c0(0x108,0);
  }
  __DT_RELA[0x4f3be]._4_8_ = 0x5249a1a;
  uVar5 = func_0x0eee2e90(extraout_RDX);
  if (0xfffffffffffffff7 < uVar5) {
    __DT_RELA[0x4f3be]._4_8_ = 0x5249b8d;
    uVar7 = func_0x04882e30();
    if ((__DT_RELA[0x4f3be]._12_8_ & 1) != 0) {
      __DT_RELA[0x4f3be]._4_8_ = 0x5249ba8;
      func_0x0412a280(__DT_RELA[0x4f3bf]._4_8_,__DT_RELA[0x4f3be]._12_8_ & 0xfffffffffffffffe);
    }
    __DT_RELA[0x4f3be]._4_8_ = 0x5249bb7;
    func_0x050d26f0(0x8717d4);
    __DT_RELA[0x4f3be]._4_8_ = 0x5249bc4;
    func_0x0412a280(lVar4,0x108);
    __DT_RELA[0x4f3be]._4_8_ = 0x5249bcc;
    func_0x0eee2d70(uVar7);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  __DT_RELA[0x4f3c0]._12_8_ = uVar7;
  if (uVar5 < 0x17) {
    __DT_RELA[0x4f3be].r_info._4_1_ = (char)uVar5 * '\x02';
    lVar6 = 0x8717bd;
    if (uVar5 == 0) goto LAB_05249aa2;
  }
  else {
    uVar8 = 0x1a;
    if ((uVar5 | 7) != 0x17) {
      uVar8 = (uVar5 | 7) + 1;
    }
    __DT_RELA[0x4f3be]._4_8_ = 0x5249a76;
    lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
    if (lVar6 == 0) {
      __DT_RELA[0x4f3be]._4_8_ = 0x5249b83;
      func_0x0eec74c0(uVar8,0);
    }
    __DT_RELA[0x4f3be]._12_8_ = uVar8 | 1;
    __DT_RELA._7789028_8_ = uVar5;
    __DT_RELA[0x4f3bf]._4_8_ = lVar6;
  }
  __DT_RELA[0x4f3be]._4_8_ = 0x5249aa2;
  func_0x0eee2f00(lVar6,extraout_RDX,uVar5);
LAB_05249aa2:
  *(undefined1 *)(lVar6 + uVar5) = 0;
  __DT_RELA[0x4f3be]._4_8_ = 3;
  __DT_RELA._7789004_8_ = 0;
  __DT_RELA[0x4f3bd]._12_8_ = 0x5249ac5;
  func_0x0d336610(lVar4,0x8717d4,0x8717bc,param_4,0,0);
  *(long *)__DT_RELA[0x4f3c0]._12_8_ = lVar4;
  if ((__DT_RELA[0x4f3be]._12_8_ & 1) != 0) {
    __DT_RELA[0x4f3be]._4_8_ = 0x5249ae9;
    func_0x0412a280(__DT_RELA[0x4f3bf]._4_8_,__DT_RELA[0x4f3be]._12_8_ & 0xfffffffffffffffe);
  }
  uVar7 = __DT_RELA._7789052_8_;
  __DT_RELA[0x4f3bf]._12_8_ = 0;
  __DT_RELA._7789052_8_ = 0;
  if (uVar7 != 0) {
    LOCK();
    plVar1 = (long *)(uVar7 + 8);
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      __DT_RELA[0x4f3be]._4_8_ = 0x5249b16;
      (**(code **)(*(long *)uVar7 + 0x10))(uVar7);
      __DT_RELA[0x4f3be]._4_8_ = 0x5249b1e;
      func_0x0412c2d0(uVar7);
    }
    uVar7 = __DT_RELA._7789052_8_;
    __DT_RELA[0x4f3c0]._4_8_ = 0;
    if (__DT_RELA._7789052_8_ != 0) {
      LOCK();
      plVar1 = (long *)(__DT_RELA._7789052_8_ + 8);
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        __DT_RELA[0x4f3be]._4_8_ = 0x5249b4c;
        (**(code **)(*(long *)uVar7 + 0x10))(uVar7);
        __DT_RELA[0x4f3be]._4_8_ = 0x5249b54;
        func_0x0412c2d0(uVar7);
      }
    }
  }
  return;
}


