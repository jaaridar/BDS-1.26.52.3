/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x523dbd0
 * Label: JigsawBlock::vslot40
 * Body:  [[0523dbc7, 0523dbce] [0523dbd0, 0523dbeb]]
 * Ghidra: wg_JigsawBlock__vslot40
 */


/* WARNING: Instruction at (ram,0x0523dbd5) overlaps instruction at (ram,0x0523dbd4)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot40(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 extraout_RDX;
  long *unaff_RBX;
  undefined8 *puVar9;
  ulong uVar10;
  byte in_stack_00008768;
  undefined7 in_stack_00008769;
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
  
  uVar8 = (ulong)(byte)((char)param_4 + (char)((ulong)param_4 >> 8));
  puVar9 = (undefined8 *)0x480000bd;
  (**(code **)((ulong)*param_1 + 0x78))();
  if ((in_stack_00008768 & 1) != 0) {
    puVar9 = (undefined8 *)(CONCAT71(in_stack_00008769,in_stack_00008768) & 0xfffffffffffffffe);
    func_0x0412a280(in_stack_00008778);
  }
  if ((in_stack_00008780 & 1) != 0) {
    puVar9 = (undefined8 *)(CONCAT71(in_stack_00008781,in_stack_00008780) & 0xfffffffffffffffe);
    func_0x0412a280(in_stack_00008790);
  }
  func_0x0eee2d70();
  lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar4 == 0) goto LAB_05249b68;
  while( true ) {
    pcStack_50 = (char *)*puVar9;
    plStack_48 = (long *)puVar9[1];
    if (plStack_48 != (long *)0x0) {
      LOCK();
      plStack_48[1] = plStack_48[1] + 1;
      UNLOCK();
    }
    uStack_40 = puVar9[2];
    if ((pcStack_50 != (char *)0x0) && (*pcStack_50 != '\0')) break;
    func_0x04890760();
LAB_05249b68:
    func_0x0eec74c0(0x108,0);
  }
  uVar5 = func_0x0eee2e90(extraout_RDX);
  if (0xfffffffffffffff7 < uVar5) {
    uVar7 = func_0x04882e30();
    if ((uStack_68 & 1) != 0) {
      func_0x0412a280(lStack_58,uStack_68 & 0xfffffffffffffffe);
    }
    func_0x050d26f0(&pcStack_50);
    func_0x0412a280(lVar4,0x108);
    func_0x0eee2d70(uVar7);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plStack_38 = unaff_RBX;
  if (uVar5 < 0x17) {
    uStack_68 = CONCAT71(uStack_68._1_7_,(char)uVar5 * '\x02');
    lVar6 = (long)&uStack_68 + 1;
    if (uVar5 == 0) goto LAB_05249aa2;
  }
  else {
    uVar10 = 0x1a;
    if ((uVar5 | 7) != 0x17) {
      uVar10 = (uVar5 | 7) + 1;
    }
    lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
    if (lVar6 == 0) {
      func_0x0eec74c0(uVar10,0);
    }
    uStack_68 = uVar10 | 1;
    uStack_60 = uVar5;
    lStack_58 = lVar6;
  }
  func_0x0eee2f00(lVar6,extraout_RDX,uVar5);
LAB_05249aa2:
  *(undefined1 *)(lVar6 + uVar5) = 0;
  func_0x0d336610(lVar4,&pcStack_50,&uStack_68,uVar8,0,0,0,3);
  *plStack_38 = lVar4;
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(lStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  plVar3 = plStack_48;
  pcStack_50 = (char *)0x0;
  plStack_48 = (long *)0x0;
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
    plVar3 = plStack_48;
    uStack_40 = 0;
    if (plStack_48 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_48 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  return;
}


