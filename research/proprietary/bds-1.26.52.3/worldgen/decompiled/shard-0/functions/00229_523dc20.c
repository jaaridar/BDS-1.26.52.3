/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x523dc20
 * Label: JigsawBlock::vslot53
 * Body:  [[0523dc20, 0523dc3f] [0523dc41, 0523dc59]]
 * Ghidra: wg_JigsawBlock__vslot53
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot53
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  uint in_EAX;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_RDX;
  long *unaff_RBX;
  ulong uVar10;
  ulong in_stack_00008768;
  undefined8 in_stack_00008778;
  byte in_stack_00008780;
  undefined7 in_stack_00008781;
  undefined8 in_stack_00008790;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  char *pcStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar5 = in_EAX | 0xf6c38948;
  LOCK();
  uVar2 = *(uint *)(ulong)uVar5;
  *(uint *)(ulong)uVar5 = uVar5;
  UNLOCK();
  *param_4 = *param_4 + (char)uVar2;
  if (*param_4 != '\0') {
    param_2 = (undefined8 *)(in_stack_00008768 & 0xfffffffffffffffe);
    func_0x0412a280(in_stack_00008778);
  }
  if ((in_stack_00008780 & 1) != 0) {
    param_2 = (undefined8 *)(CONCAT71(in_stack_00008781,in_stack_00008780) & 0xfffffffffffffffe);
    func_0x0412a280(in_stack_00008790);
  }
  func_0x0eee2d70();
  lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar6 == 0) goto LAB_05249b68;
  while( true ) {
    pcStack_50 = (char *)*param_2;
    plStack_48 = (long *)param_2[1];
    if (plStack_48 != (long *)0x0) {
      LOCK();
      plStack_48[1] = plStack_48[1] + 1;
      UNLOCK();
    }
    uStack_40 = param_2[2];
    if ((pcStack_50 != (char *)0x0) && (*pcStack_50 != '\0')) break;
    func_0x04890760();
LAB_05249b68:
    func_0x0eec74c0(0x108,0);
  }
  uVar7 = func_0x0eee2e90(extraout_RDX);
  if (0xfffffffffffffff7 < uVar7) {
    uVar9 = func_0x04882e30();
    if ((uStack_68 & 1) != 0) {
      func_0x0412a280(lStack_58,uStack_68 & 0xfffffffffffffffe);
    }
    func_0x050d26f0(&pcStack_50);
    func_0x0412a280(lVar6,0x108);
    func_0x0eee2d70(uVar9);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plStack_38 = unaff_RBX;
  if (uVar7 < 0x17) {
    uStack_68 = CONCAT71(uStack_68._1_7_,(char)uVar7 * '\x02');
    lVar8 = (long)&uStack_68 + 1;
    if (uVar7 == 0) goto LAB_05249aa2;
  }
  else {
    uVar10 = 0x1a;
    if ((uVar7 | 7) != 0x17) {
      uVar10 = (uVar7 | 7) + 1;
    }
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
    if (lVar8 == 0) {
      func_0x0eec74c0(uVar10,0);
    }
    uStack_68 = uVar10 | 1;
    uStack_60 = uVar7;
    lStack_58 = lVar8;
  }
  func_0x0eee2f00(lVar8,extraout_RDX,uVar7);
LAB_05249aa2:
  *(undefined1 *)(lVar8 + uVar7) = 0;
  func_0x0d336610(lVar6,&pcStack_50,&uStack_68,param_4,0,0,0,3);
  *plStack_38 = lVar6;
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(lStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  plVar4 = plStack_48;
  pcStack_50 = (char *)0x0;
  plStack_48 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
    plVar4 = plStack_48;
    uStack_40 = 0;
    if (plStack_48 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_48 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x0412c2d0(plVar4);
      }
    }
  }
  return;
}


