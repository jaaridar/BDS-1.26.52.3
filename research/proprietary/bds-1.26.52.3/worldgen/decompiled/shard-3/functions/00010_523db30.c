/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x523db30
 * Label: VanillaSurfaceBuilders::TheEndSurfaceBuilder::vslot0
 * Body:  [[0523db16, 0523db28] [0523db30, 0523db3a] [0523db7d, 0523db9f] [0523dba1, 0523dba8] [0523efe1, 0523eff5]]
 * Ghidra: wg_VanillaSurfaceBuilders__TheEndSurfaceBuilder__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__TheEndSurfaceBuilder__vslot0
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  long *plVar4;
  undefined4 *in_RAX;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_RDX;
  long *unaff_RBX;
  ulong uVar9;
  ulong in_stack_00008738;
  undefined8 in_stack_00008748;
  byte in_stack_00008750;
  undefined7 in_stack_00008751;
  undefined8 in_stack_00008760;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  char *pcStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  LOCK();
  uVar2 = *in_RAX;
  *in_RAX = (int)in_RAX;
  UNLOCK();
  *param_4 = *param_4 + (char)uVar2;
  if (*param_4 != '\0') {
    param_2 = (undefined8 *)(in_stack_00008738 & 0xfffffffffffffffe);
    func_0x0412a280(in_stack_00008748);
  }
  if ((in_stack_00008750 & 1) != 0) {
    param_2 = (undefined8 *)(CONCAT71(in_stack_00008751,in_stack_00008750) & 0xfffffffffffffffe);
    func_0x0412a280(in_stack_00008760);
  }
  func_0x0eee2d70();
  lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar5 == 0) goto LAB_05249b68;
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
  uVar6 = func_0x0eee2e90(extraout_RDX);
  if (0xfffffffffffffff7 < uVar6) {
    uVar8 = func_0x04882e30();
    if ((uStack_68 & 1) != 0) {
      func_0x0412a280(lStack_58,uStack_68 & 0xfffffffffffffffe);
    }
    func_0x050d26f0(&pcStack_50);
    func_0x0412a280(lVar5,0x108);
    func_0x0eee2d70(uVar8);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plStack_38 = unaff_RBX;
  if (uVar6 < 0x17) {
    uStack_68 = CONCAT71(uStack_68._1_7_,(char)uVar6 * '\x02');
    lVar7 = (long)&uStack_68 + 1;
    if (uVar6 == 0) goto LAB_05249aa2;
  }
  else {
    uVar9 = 0x1a;
    if ((uVar6 | 7) != 0x17) {
      uVar9 = (uVar6 | 7) + 1;
    }
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
    if (lVar7 == 0) {
      func_0x0eec74c0(uVar9,0);
    }
    uStack_68 = uVar9 | 1;
    uStack_60 = uVar6;
    lStack_58 = lVar7;
  }
  func_0x0eee2f00(lVar7,extraout_RDX,uVar6);
LAB_05249aa2:
  *(undefined1 *)(lVar7 + uVar6) = 0;
  func_0x0d336610(lVar5,&pcStack_50,&uStack_68,param_4,0,0,0,3);
  *plStack_38 = lVar5;
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(lStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  plVar4 = plStack_48;
  pcStack_50 = (char *)0x0;
  plStack_48 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
    plVar4 = plStack_48;
    uStack_40 = 0;
    if (plStack_48 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_48 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x0412c2d0(plVar4);
      }
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0523db16 */  TEST byte ptr [RSP + 0x8750],0x1
/* 0523db1e */  JNZ 0x0523efe1
/* 0523db24 */  JMP 0x05249998
/* 0523db30 */  TEST byte ptr [RAX + RDI*0x1],AH
/* 0523db33 */  XCHG dword ptr [RAX],EAX
/* 0523db35 */  ADD byte ptr [RCX],AL
/* 0523db37 */  JZ 0x0523db16
/* 0523db39 */  JMP 0x0523db7d
/* 0523db7d */  MOV RSI,qword ptr [RSP + 0x8738]
/* 0523db85 */  MOV RDI,qword ptr [RSP + 0x8748]
/* 0523db8d */  AND RSI,-0x2
/* 0523db91 */  CALL 0x0412a280
/* 0523db96 */  TEST byte ptr [RSP + 0x8750],0x1
/* 0523db9e */  JZ 0x05249998
/* 0523dba4 */  JMP 0x0523efe1
/* 0523efe1 */  MOV RSI,qword ptr [RSP + 0x8750]
/* 0523efe9 */  MOV RDI,qword ptr [RSP + 0x8760]
/* 0523eff1 */  JMP 0x0524998f
