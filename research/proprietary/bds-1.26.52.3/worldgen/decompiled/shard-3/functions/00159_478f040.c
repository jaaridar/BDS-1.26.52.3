/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x478f040
 * Label: callee-of:0x517a720
 * Body:  [[0478f040, 0478f0b4] [0478f106, 0478f1be]]
 * Ghidra: FUN_0478f040
 */


int FUN_0478f040(void)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_R15;
  long unaff_retaddr;
  
  iVar3 = func_0x047db120();
  iVar4 = -1;
  if (iVar3 < 1) goto LAB_0478f1a8;
  lVar1 = *(long *)(*(long *)(unaff_R15 + 0x40) + 0x10);
  if ((lVar1 == 0) || (pcVar2 = *(code **)(lVar1 + 0xb0), pcVar2 == (code *)0x0)) {
LAB_0478f10a:
    func_0x047653a0(*(undefined8 *)(unaff_R15 + 0x18),&stack0x00000000,&UNK_0ef1d110);
    if (unaff_retaddr == 0) goto LAB_0478f1a8;
    iVar3 = func_0x047ca650();
    func_0x047f29a0(unaff_retaddr,&UNK_014111da,0x2f7);
    if (iVar3 < 1) goto LAB_0478f1a8;
    iVar4 = func_0x047db3d0();
    if (0 < iVar4) goto LAB_0478f1a8;
    uVar6 = 0x98;
    uVar5 = 0x9e;
    uVar7 = 0x2ff;
  }
  else {
    iVar3 = (*pcVar2)(*(long *)(unaff_R15 + 0x40),5,1);
    if (iVar3 == -2) {
      uVar6 = 0xaa;
      uVar5 = 0x7d;
      uVar7 = 0xe7;
    }
    else {
      if (0 < iVar3) goto LAB_0478f10a;
      uVar6 = 0xaa;
      uVar5 = 0x6f;
      uVar7 = 0xeb;
    }
  }
  func_0x047c6f20(0x2e,uVar6,uVar5,&UNK_014111da,uVar7);
LAB_0478f1a8:
  func_0x047ca3f0();
  return iVar4;
}


