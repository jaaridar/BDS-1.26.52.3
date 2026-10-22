/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9c7abc0 (ELF vaddr 0x9b7abc0)
 * Label: callee-of:0x5188770
 * Body:  [[09c7abc0, 09c7ae21]]
 * Ghidra: FUN_09c7abc0
 */


undefined1  [16] FUN_09c7abc0(int param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined8 uStack_78;
  uint uStack_70;
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  uint uStack_38;
  
  if (*(long **)(param_3 + 0x1b0) == (long *)0x0) {
    uVar8 = 0;
    uStack_78 = 0;
  }
  else {
    plVar6 = (long *)(**(code **)(**(long **)(param_3 + 0x1b0) + 0x188))();
    iVar5 = (int)*(short *)(param_3 + 0xa8);
    uStack_50 = param_2 + -4000;
    iStack_4c = param_1 + 4000;
    iStack_48 = (int)*(short *)(param_3 + 0xaa);
    iStack_44 = param_2 + 4000;
    uStack_58 = CONCAT44(iVar5 + 5,param_1 + -4000);
    uStack_68 = CONCAT44(iVar5 + (((iStack_48 - iVar5) - ((iStack_48 - iVar5) + -4 >> 0x1f)) + -4 >>
                                 1) + 5,param_1);
    uStack_60 = param_2;
    auVar10 = func_0x0c84fdf0(param_4,plVar6,&uStack_68,&uStack_58,0x40);
    uStack_78 = auVar10._0_8_;
    uStack_70 = auVar10._8_4_;
    auVar11 = auVar10._0_12_;
    uStack_5c = CONCAT31(uStack_5c._1_3_,auVar10[0xc]);
    if ((auVar10._8_8_ >> 0x20 & 1) != 0) {
      uStack_68 = uStack_78;
      uStack_60 = uStack_70;
      sVar4 = func_0x0c8508f0(param_3,&uStack_68);
      iVar5 = (int)sVar4;
      uStack_78 = CONCAT44(iVar5,(int)uStack_78);
      uStack_50 = uStack_70;
      uStack_58 = uStack_78;
      iStack_4c = CONCAT31(iStack_4c._1_3_,1);
      uVar7 = (**(code **)(*plVar6 + 0x58))(plVar6,&uStack_58);
      plVar1 = *(long **)(param_4 + 0x20);
      if (plVar1 == (long *)0x0) {
        func_0x04891200();
        pcVar2 = (code *)swi(3);
        auVar10 = (*pcVar2)();
        return auVar10;
      }
      cVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar7);
      if (cVar3 != '\0') {
        uVar8 = (ulong)uStack_70 | 0x100000000;
        goto LAB_09c7ad29;
      }
      iVar9 = (int)*(short *)(param_3 + 0xa8);
      uStack_50 = uStack_70 - 0x40;
      iStack_4c = (int)uStack_78 + 0x40;
      iStack_44 = uStack_70 + 0x40;
      uStack_40 = CONCAT44(iVar9 + (((iVar5 - iVar9) - ((iVar5 - iVar9) + -4 >> 0x1f)) + -4 >> 1) +
                           5,(int)uStack_78);
      uStack_38 = uStack_70;
      uStack_58 = CONCAT44(iVar9 + 5,(int)uStack_78 + -0x40);
      iStack_48 = iVar5;
      auVar10 = func_0x0c84fdf0(param_4,plVar6,&uStack_40,&uStack_58,0x10);
      uStack_78 = auVar10._0_8_;
      uStack_70 = auVar10._8_4_;
      auVar11 = auVar10._0_12_;
      uStack_5c = CONCAT31(uStack_5c._1_3_,auVar10[0xc]);
      if ((auVar10._8_8_ & 0x100000000) != 0) {
        uStack_68 = uStack_78;
        uStack_60 = uStack_70;
        auVar11 = func_0x0c850e00(param_3,&uStack_78,param_4,0x10);
        uStack_5c = CONCAT31(uStack_5c._1_3_,1);
      }
    }
    uStack_60 = auVar11._8_4_;
    uStack_78 = auVar11._0_8_;
    uVar8 = CONCAT44(uStack_5c,uStack_60);
  }
LAB_09c7ad29:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uStack_78;
  return auVar10;
}


