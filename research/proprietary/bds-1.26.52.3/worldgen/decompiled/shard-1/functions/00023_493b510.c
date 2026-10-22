/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493b510
 * Label: BiomeSource3d::vslot9
 * Body:  [[0493b500, 0493b50e] [0493b510, 0493b576]]
 * Ghidra: wg_BiomeSource3d__vslot9
 */


long wg_BiomeSource3d__vslot9(int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_RBX;
  long unaff_RBP;
  long unaff_R12;
  long unaff_R13;
  long *unaff_R14;
  long *unaff_R15;
  bool bVar4;
  long unaff_retaddr;
  
  bVar4 = (int)unaff_RBX == param_1;
  do {
    if (bVar4) {
      lVar3 = *unaff_R14;
      *unaff_R14 = unaff_R13;
      unaff_R14[1] = unaff_R12 + 0x30;
      lVar2 = unaff_R14[2];
      unaff_R14[2] = unaff_retaddr + unaff_RBP * 0x30;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,lVar2 - lVar3);
      }
      return unaff_R12 + 0x30;
    }
    plVar1 = (long *)unaff_RBX[4];
    if (unaff_RBX == plVar1) {
      lVar3 = 0x20;
LAB_0493b505:
      (**(code **)(*plVar1 + lVar3))();
    }
    else {
      lVar3 = 0x28;
      if (plVar1 != (long *)0x0) goto LAB_0493b505;
    }
    unaff_RBX = unaff_RBX + 6;
    bVar4 = unaff_RBX == unaff_R15;
  } while( true );
}


