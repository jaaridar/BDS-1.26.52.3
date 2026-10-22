/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x523d940
 * Label: VanillaSurfaceBuilders::MesaSurfaceBuilder::vslot0
 * Body:  [[0523d903, 0523d915] [0523d940, 0523d95c] [0523d96a, 0523d995] [0523ef6f, 0523ef83]]
 * Ghidra: wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot0
 */


/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot0
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined1 *param_5)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  long in_RAX;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 extraout_RDX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulong uVar9;
  undefined8 unaff_R15;
  
  *(char *)(in_RAX + -0x75) = *(char *)(in_RAX + -0x75) + (char)param_4;
  uVar8 = (ulong)(byte)((char)param_4 + (char)((ulong)param_4 >> 8));
  *param_5 = *param_5;
  if ((__DT_RELA[0x4745f].r_offset._4_1_ & 1) != 0) {
    param_2 = (undefined8 *)
              (CONCAT71(__DT_RELA[0x4745f]._5_7_,__DT_RELA[0x4745f].r_offset._4_1_) &
              0xfffffffffffffffe);
    __DT_RELA[0x46ec2]._12_8_ = 0x523d983;
    func_0x0412a280(__DT_RELA._7006460_8_,param_2,param_3,uVar8);
  }
  if ((__DT_RELA[0x47460].r_offset._4_1_ & 1) != 0) {
    param_2 = (undefined8 *)
              (CONCAT71(__DT_RELA[0x47460]._5_7_,__DT_RELA[0x47460].r_offset._4_1_) &
              0xfffffffffffffffe);
    __DT_RELA[0x46ec2]._12_8_ = 0x5249998;
    func_0x0412a280(__DT_RELA._7006484_8_);
  }
  __DT_RELA[0x46ec2]._12_8_ = 0x52499a0;
  lVar6 = in_RAX;
  func_0x0eee2d70();
  __DT_RELA[0x46ebe]._4_8_ = 0x52499d0;
  __DT_RELA._6971924_8_ = in_RAX;
  __DT_RELA[0x46ec1]._4_8_ = unaff_R12;
  __DT_RELA[0x46ec1]._12_8_ = unaff_R13;
  __DT_RELA._6971948_8_ = unaff_R14;
  __DT_RELA[0x46ec2]._4_8_ = unaff_R15;
  __DT_RELA[0x46ec2]._12_8_ = unaff_RBP;
  lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar4 == 0) goto LAB_05249b68;
  while( true ) {
    pcVar2 = (char *)*param_2;
    __DT_RELA._6971900_8_ = param_2[1];
    __DT_RELA[0x46ebf]._12_8_ = pcVar2;
    if (__DT_RELA._6971900_8_ != 0) {
      LOCK();
      *(long *)(__DT_RELA._6971900_8_ + 8) = *(long *)(__DT_RELA._6971900_8_ + 8) + 1;
      UNLOCK();
    }
    __DT_RELA[0x46ec0]._4_8_ = param_2[2];
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) break;
    __DT_RELA[0x46ebe]._4_8_ = 0x5249b68;
    func_0x04890760();
LAB_05249b68:
    __DT_RELA[0x46ebe]._4_8_ = 0x5249b74;
    func_0x0eec74c0(0x108,0);
  }
  __DT_RELA[0x46ebe]._4_8_ = 0x5249a1a;
  uVar5 = func_0x0eee2e90(extraout_RDX);
  if (0xfffffffffffffff7 < uVar5) {
    __DT_RELA[0x46ebe]._4_8_ = 0x5249b8d;
    uVar7 = func_0x04882e30();
    if ((__DT_RELA[0x46ebe]._12_8_ & 1) != 0) {
      __DT_RELA[0x46ebe]._4_8_ = 0x5249ba8;
      func_0x0412a280(__DT_RELA[0x46ebf]._4_8_,__DT_RELA[0x46ebe]._12_8_ & 0xfffffffffffffffe);
    }
    __DT_RELA[0x46ebe]._4_8_ = 0x5249bb7;
    func_0x050d26f0(0x7a9fd4);
    __DT_RELA[0x46ebe]._4_8_ = 0x5249bc4;
    func_0x0412a280(lVar4,0x108);
    __DT_RELA[0x46ebe]._4_8_ = 0x5249bcc;
    func_0x0eee2d70(uVar7);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  __DT_RELA[0x46ec0]._12_8_ = lVar6;
  if (uVar5 < 0x17) {
    __DT_RELA[0x46ebe].r_info._4_1_ = (char)uVar5 * '\x02';
    lVar6 = 0x7a9fbd;
    if (uVar5 == 0) goto LAB_05249aa2;
  }
  else {
    uVar9 = 0x1a;
    if ((uVar5 | 7) != 0x17) {
      uVar9 = (uVar5 | 7) + 1;
    }
    __DT_RELA[0x46ebe]._4_8_ = 0x5249a76;
    lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
    if (lVar6 == 0) {
      __DT_RELA[0x46ebe]._4_8_ = 0x5249b83;
      func_0x0eec74c0(uVar9,0);
    }
    __DT_RELA[0x46ebe]._12_8_ = uVar9 | 1;
    __DT_RELA._6971876_8_ = uVar5;
    __DT_RELA[0x46ebf]._4_8_ = lVar6;
  }
  __DT_RELA[0x46ebe]._4_8_ = 0x5249aa2;
  func_0x0eee2f00(lVar6,extraout_RDX,uVar5);
LAB_05249aa2:
  *(undefined1 *)(lVar6 + uVar5) = 0;
  __DT_RELA[0x46ebe]._4_8_ = 3;
  __DT_RELA._6971852_8_ = 0;
  __DT_RELA[0x46ebd]._12_8_ = 0x5249ac5;
  func_0x0d336610(lVar4,0x7a9fd4,0x7a9fbc,uVar8,0,0);
  *(long *)__DT_RELA[0x46ec0]._12_8_ = lVar4;
  if ((__DT_RELA[0x46ebe]._12_8_ & 1) != 0) {
    __DT_RELA[0x46ebe]._4_8_ = 0x5249ae9;
    func_0x0412a280(__DT_RELA[0x46ebf]._4_8_,__DT_RELA[0x46ebe]._12_8_ & 0xfffffffffffffffe);
  }
  uVar7 = __DT_RELA._6971900_8_;
  __DT_RELA[0x46ebf]._12_8_ = 0;
  __DT_RELA._6971900_8_ = 0;
  if (uVar7 != 0) {
    LOCK();
    plVar1 = (long *)(uVar7 + 8);
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      __DT_RELA[0x46ebe]._4_8_ = 0x5249b16;
      (**(code **)(*(long *)uVar7 + 0x10))(uVar7);
      __DT_RELA[0x46ebe]._4_8_ = 0x5249b1e;
      func_0x0412c2d0(uVar7);
    }
    uVar7 = __DT_RELA._6971900_8_;
    __DT_RELA[0x46ec0]._4_8_ = 0;
    if (__DT_RELA._6971900_8_ != 0) {
      LOCK();
      plVar1 = (long *)(__DT_RELA._6971900_8_ + 8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        __DT_RELA[0x46ebe]._4_8_ = 0x5249b4c;
        (**(code **)(*(long *)uVar7 + 0x10))(uVar7);
        __DT_RELA[0x46ebe]._4_8_ = 0x5249b54;
        func_0x0412c2d0(uVar7);
      }
    }
  }
  return;
}


