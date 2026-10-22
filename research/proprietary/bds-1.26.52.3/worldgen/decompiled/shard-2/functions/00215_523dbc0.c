/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x523dbc0
 * Label: JigsawBlock::vslot39
 * Body:  [[0523dbc0, 0523dbd9] [0523dc2e, 0523dc59] [0523f007, 0523f01b] [0524998f, 05249ba9] [05249bad, 05249bcc]]
 * Ghidra: wg_JigsawBlock__vslot39
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot39
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  long *unaff_RBX;
  ulong uVar8;
  bool in_ZF;
  ulong in_stack_00008760;
  undefined8 in_stack_00008770;
  byte in_stack_00008778;
  undefined7 in_stack_00008779;
  undefined8 in_stack_00008788;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  char *pcStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  if (!in_ZF) {
    param_2 = (undefined8 *)(in_stack_00008760 & 0xfffffffffffffffe);
    func_0x0412a280(in_stack_00008770);
  }
  if ((in_stack_00008778 & 1) != 0) {
    param_2 = (undefined8 *)(CONCAT71(in_stack_00008779,in_stack_00008778) & 0xfffffffffffffffe);
    func_0x0412a280(in_stack_00008788);
  }
  func_0x0eee2d70();
  lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar4 == 0) goto LAB_05249b68;
  while( true ) {
    pcStack_58 = (char *)*param_2;
    plStack_50 = (long *)param_2[1];
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plStack_50[1] = plStack_50[1] + 1;
      UNLOCK();
    }
    uStack_48 = param_2[2];
    if ((pcStack_58 != (char *)0x0) && (*pcStack_58 != '\0')) break;
    func_0x04890760();
LAB_05249b68:
    func_0x0eec74c0(0x108,0);
  }
  uVar5 = func_0x0eee2e90(extraout_RDX);
  if (0xfffffffffffffff7 < uVar5) {
    uVar7 = func_0x04882e30();
    if ((uStack_70 & 1) != 0) {
      func_0x0412a280(lStack_60,uStack_70 & 0xfffffffffffffffe);
    }
    func_0x050d26f0(&pcStack_58);
    func_0x0412a280(lVar4,0x108);
    func_0x0eee2d70(uVar7);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plStack_40 = unaff_RBX;
  if (uVar5 < 0x17) {
    uStack_70 = CONCAT71(uStack_70._1_7_,(char)uVar5 * '\x02');
    lVar6 = (long)&uStack_70 + 1;
    if (uVar5 == 0) goto LAB_05249aa2;
  }
  else {
    uVar8 = 0x1a;
    if ((uVar5 | 7) != 0x17) {
      uVar8 = (uVar5 | 7) + 1;
    }
    lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
    if (lVar6 == 0) {
      func_0x0eec74c0(uVar8,0);
    }
    uStack_70 = uVar8 | 1;
    uStack_68 = uVar5;
    lStack_60 = lVar6;
  }
  func_0x0eee2f00(lVar6,extraout_RDX,uVar5);
LAB_05249aa2:
  *(undefined1 *)(lVar6 + uVar5) = 0;
  func_0x0d336610(lVar4,&pcStack_58,&uStack_70,param_4,0,0,0,3);
  *plStack_40 = lVar4;
  if ((uStack_70 & 1) != 0) {
    func_0x0412a280(lStack_60,uStack_70 & 0xfffffffffffffffe);
  }
  plVar3 = plStack_50;
  pcStack_58 = (char *)0x0;
  plStack_50 = (long *)0x0;
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
    plVar3 = plStack_50;
    uStack_48 = 0;
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  return;
}


