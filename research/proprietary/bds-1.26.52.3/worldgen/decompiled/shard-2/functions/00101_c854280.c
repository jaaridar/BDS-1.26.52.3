/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc854280
 * Label: string:WorldGenBelowZeroFixed
 * Body:  [[0c854220, 0c854325]]
 * Ghidra: FUN_0c854280
 */


void FUN_0c854280(undefined8 param_1,int param_2,long param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long *unaff_RBX;
  int unaff_EBP;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_R12D;
  int unaff_R13D;
  long *unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  
  do {
    iVar2 = param_2;
    for (uVar5 = unaff_R13D - param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined8 *)(param_3 + (ulong)(uint)(param_4 + iVar2) * 8) = unaff_R15;
      iVar2 = iVar2 + 1;
    }
    if ((uint)(param_2 - unaff_R13D) < 0xfffffffd) {
      uVar5 = param_4 + iVar2;
      iVar2 = unaff_R13D - iVar2;
      do {
        *(undefined8 *)(param_3 + (ulong)uVar5 * 8) = unaff_R15;
        *(undefined8 *)(param_3 + (ulong)(uVar5 + 1) * 8) = unaff_R15;
        *(undefined8 *)(param_3 + (ulong)(uVar5 + 2) * 8) = unaff_R15;
        *(undefined8 *)(param_3 + (ulong)(uVar5 + 3) * 8) = unaff_R15;
        uVar5 = uVar5 + 4;
        iVar2 = iVar2 + -4;
      } while (iVar2 != 0);
    }
    do {
      do {
        unaff_R12D = unaff_R12D + 1;
        if (unaff_R12D == 0x10) {
          unaff_EBP = unaff_EBP + 1;
          if (unaff_EBP == 0x10) {
            return;
          }
          unaff_R12D = 0;
        }
        unaff_R13D = *(int *)((long)unaff_RBX + 0x14);
        uVar5 = (**(code **)(*unaff_R14 + 0x18))();
      } while (uVar5 == 0xffffffff);
      param_4 = ((int)unaff_RBX[3] * unaff_EBP + unaff_R12D) * *(int *)((long)unaff_RBX + 0x14);
      iVar2 = ~uVar5 + unaff_R13D;
      param_3 = *unaff_RBX;
      uVar4 = uVar5 + 1;
      param_2 = iVar2;
      if ((uVar4 < 10) || ((param_4 + unaff_R13D) - 1U < uVar5)) break;
      uVar6 = uVar4 & 0xfffffffc;
      param_2 = iVar2 + uVar6;
      uVar3 = iVar2 + param_4;
      uVar5 = uVar6;
      do {
        puVar1 = (undefined8 *)(param_3 + (ulong)uVar3 * 8);
        *puVar1 = unaff_retaddr;
        puVar1[1] = param_7;
        puVar1 = (undefined8 *)(param_3 + 0x10 + (ulong)uVar3 * 8);
        *puVar1 = unaff_retaddr;
        puVar1[1] = param_7;
        uVar3 = uVar3 + 4;
        uVar5 = uVar5 - 4;
      } while (uVar5 != 0);
    } while (uVar4 == uVar6);
  } while( true );
}


