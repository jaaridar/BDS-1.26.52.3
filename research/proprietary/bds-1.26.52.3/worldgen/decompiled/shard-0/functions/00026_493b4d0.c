/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493b4d0
 * Label: BiomeSource3d::vslot8
 * Body:  [[0493b4a0, 0493b4ce] [0493b4d0, 0493b4fe] [0493b500, 0493b576]]
 * Ghidra: wg_BiomeSource3d__vslot8
 */


long wg_BiomeSource3d__vslot8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_RBX;
  long unaff_RBP;
  long unaff_R12;
  long unaff_R13;
  long *plVar4;
  long *unaff_R14;
  long *unaff_R15;
  long unaff_retaddr;
  long in_stack_00000008;
  long *in_stack_00000010;
  
  do {
    *(long *)(unaff_R13 + 0x20) = unaff_R13;
    (**(code **)(*(long *)unaff_R14[4] + 0x18))((long *)unaff_R14[4],unaff_R13);
    lVar3 = unaff_R13;
    plVar4 = unaff_R14;
    while( true ) {
      while( true ) {
        unaff_R14 = plVar4 + 6;
        unaff_R13 = lVar3 + 0x30;
        if (unaff_R14 == unaff_R15) goto LAB_0493b514;
        plVar1 = (long *)plVar4[10];
        if (plVar1 != (long *)0x0) break;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        lVar3 = unaff_R13;
        plVar4 = unaff_R14;
      }
      if (unaff_R14 == plVar1) break;
      *(long **)(lVar3 + 0x50) = plVar1;
      plVar4[10] = 0;
      lVar3 = unaff_R13;
      plVar4 = unaff_R14;
    }
  } while( true );
LAB_0493b514:
  plVar4 = (long *)unaff_RBX[4];
  if (unaff_RBX == plVar4) {
    lVar3 = 0x20;
LAB_0493b505:
    (**(code **)(*plVar4 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (plVar4 != (long *)0x0) goto LAB_0493b505;
  }
  unaff_RBX = unaff_RBX + 6;
  if (unaff_RBX == unaff_R15) {
    lVar3 = *in_stack_00000010;
    *in_stack_00000010 = in_stack_00000008;
    in_stack_00000010[1] = unaff_R12 + 0x30;
    lVar2 = in_stack_00000010[2];
    in_stack_00000010[2] = unaff_retaddr + unaff_RBP * 0x30;
    if (lVar3 != 0) {
      func_0x0412a280(lVar3,lVar2 - lVar3);
    }
    return unaff_R12 + 0x30;
  }
  goto LAB_0493b514;
}


