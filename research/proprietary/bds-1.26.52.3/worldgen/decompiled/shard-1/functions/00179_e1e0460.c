/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe1e0460
 * Label: SharedTypes::v1_21_80::BiomeReplacementConstraint::vslot7
 * Body:  [[0e1e0460, 0e1e06a2]]
 * Ghidra: wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot7
 */


void wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot7(undefined8 param_1,long param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 *unaff_RBX;
  undefined8 *unaff_R14;
  undefined8 unaff_retaddr;
  code *in_stack_00000010;
  code *in_stack_00000018;
  undefined4 uStack0000000000000020;
  char cStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  
  if (*(int *)(param_2 + 0x20) == 0x3108a43a) {
    puVar4 = unaff_R14;
    if (*(char *)((long)unaff_R14 + 0x24) != '\x02') {
      puVar4 = (undefined8 *)*unaff_R14;
    }
    unaff_RBX[2] = unaff_R14[2];
    unaff_RBX[3] = 0;
    *(undefined4 *)(unaff_RBX + 4) = 0x3108a43a;
    *(undefined1 *)((long)unaff_RBX + 0x24) = 4;
    *unaff_RBX = puVar4;
    uVar3 = unaff_R14[6];
    unaff_RBX[5] = unaff_R14[5];
    unaff_RBX[6] = uVar3;
    unaff_RBX[7] = unaff_R14[7];
  }
  else {
    if ((code *)unaff_R14[7] != (code *)0x0) {
      if (unaff_R14[6] == 0) {
        (*(code *)unaff_R14[7])(0);
        lVar5 = *(long *)(unaff_R14[6] + 0x78);
      }
      else {
        lVar5 = *(long *)(unaff_R14[6] + 0x78);
      }
      if (lVar5 != 0) {
        for (piVar7 = *(int **)(lVar5 + 0x30); piVar7 != *(int **)(lVar5 + 0x38);
            piVar7 = piVar7 + 4) {
          if (*piVar7 == 0x3108a43a) {
                    /* WARNING: Could not recover jumptable at 0x0e1e0616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(piVar7 + 2))();
            return;
          }
        }
        piVar1 = *(int **)(lVar5 + 0x20);
        for (piVar7 = *(int **)(lVar5 + 0x18); piVar7 != piVar1; piVar7 = piVar7 + 6) {
          lVar5 = (**(code **)(piVar7 + 2))(unaff_R14[5]);
          pcVar2 = *(code **)(lVar5 + 0x40);
          uVar3 = unaff_R14[5];
          uVar6 = (**(code **)(piVar7 + 4))();
          (*pcVar2)(&stack0x00000000,uVar3,0,uVar6);
          if (*piVar7 == 0x3108a43a) {
            *unaff_RBX = 0;
            unaff_RBX[2] = in_stack_00000010;
            unaff_RBX[3] = in_stack_00000018;
            *(undefined4 *)(unaff_RBX + 4) = uStack0000000000000020;
            *(char *)((long)unaff_RBX + 0x24) = cStack0000000000000024;
            if (cStack0000000000000024 != '\0') {
              if (cStack0000000000000024 == '\x02') {
                (*in_stack_00000010)(5,&stack0x00000000);
              }
              else {
                *unaff_RBX = unaff_retaddr;
              }
            }
            *(undefined4 *)(unaff_RBX + 5) = uStack0000000000000028;
            *(undefined4 *)((long)unaff_RBX + 0x2c) = uStack000000000000002c;
            *(undefined4 *)(unaff_RBX + 6) = uStack0000000000000030;
            *(undefined4 *)((long)unaff_RBX + 0x34) = uStack0000000000000034;
            unaff_RBX[7] = in_stack_00000038;
            if (in_stack_00000018 == (code *)0x0) {
              return;
            }
            (*in_stack_00000018)(&stack0x00000000);
            return;
          }
          func_0x0e1e0450();
          lVar5 = unaff_RBX[7];
          if ((lVar5 == 0) && ((code *)unaff_RBX[3] != (code *)0x0)) {
            (*(code *)unaff_RBX[3])();
          }
          if (in_stack_00000018 != (code *)0x0) {
            (*in_stack_00000018)(&stack0x00000000);
          }
          if (lVar5 != 0) {
            return;
          }
        }
      }
    }
    uVar3 = unaff_R14[5];
    unaff_RBX[2] = &UNK_0488e0b0;
    *(undefined4 *)(unaff_RBX + 4) = 0x48b5725f;
    unaff_RBX[3] = 0;
    *(undefined1 *)((long)unaff_RBX + 0x24) = 0;
    *unaff_RBX = 0;
    unaff_RBX[5] = uVar3;
    unaff_RBX[6] = 0;
    unaff_RBX[7] = 0;
  }
  return;
}


