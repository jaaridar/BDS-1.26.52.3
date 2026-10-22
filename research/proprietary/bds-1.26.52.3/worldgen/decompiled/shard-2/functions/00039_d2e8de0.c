/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2e8de0
 * Label: string:minecraft:tree_feature
 * Body:  [[0d2e8da8, 0d2e8dd9] [0d2e8de0, 0d2e8ff2]]
 * Ghidra: FUN_0d2e8de0
 */


/* WARNING: Instruction at (ram,0x0d2e8de1) overlaps instruction at (ram,0x0d2e8de0)
    */

void FUN_0d2e8de0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong in_RAX;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_RBX;
  int *piVar8;
  undefined8 *unaff_R14;
  char in_SF;
  char in_OF;
  undefined8 auStack_58 [2];
  code *pcStack_48;
  code *pcStack_40;
  undefined4 uStack_38;
  char cStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  int *piStack_18;
  
  if (in_OF == in_SF) {
    puVar5 = (undefined8 *)(in_RAX & 0xffffffffffffff04);
    param_1 = unaff_RBX;
    param_2 = unaff_R14;
  }
  else {
    if (*(int *)(param_2 + 4) != 0x7cf10c1a) {
      if ((code *)param_2[7] != (code *)0x0) {
        if (param_2[6] == 0) {
          (*(code *)param_2[7])(0,param_2,0);
          lVar6 = *(long *)(param_2[6] + 0x78);
        }
        else {
          lVar6 = *(long *)(param_2[6] + 0x78);
        }
        if (lVar6 != 0) {
          for (piVar8 = *(int **)(lVar6 + 0x30); piVar8 != *(int **)(lVar6 + 0x38);
              piVar8 = piVar8 + 4) {
            if (*piVar8 == 0x7cf10c1a) {
              puVar5 = param_2 + 5;
              if (*(char *)((long)param_2 + 0x24) != '\x02') {
                param_2 = (undefined8 *)*param_2;
              }
                    /* WARNING: Could not recover jumptable at 0x0d2e8f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(piVar8 + 2))(param_1,*puVar5,param_2);
              return;
            }
          }
          piVar8 = *(int **)(lVar6 + 0x18);
          piStack_18 = *(int **)(lVar6 + 0x20);
          if (piVar8 != piStack_18) {
            do {
              lVar6 = (**(code **)(piVar8 + 2))(param_2[5]);
              puVar5 = param_2;
              if (*(char *)((long)param_2 + 0x24) != '\x02') {
                puVar5 = (undefined8 *)*param_2;
              }
              pcVar1 = *(code **)(lVar6 + 0x40);
              uVar2 = param_2[5];
              uVar7 = (**(code **)(piVar8 + 4))(puVar5);
              (*pcVar1)(auStack_58,uVar2,0,uVar7);
              uVar2 = auStack_58[0];
              if (*piVar8 == 0x7cf10c1a) {
                *param_1 = 0;
                param_1[2] = pcStack_48;
                param_1[3] = pcStack_40;
                *(undefined4 *)(param_1 + 4) = uStack_38;
                *(char *)((long)param_1 + 0x24) = cStack_34;
                if (cStack_34 != '\0') {
                  if (cStack_34 == '\x02') {
                    (*pcStack_48)(5,auStack_58,param_1);
                  }
                  else {
                    auStack_58[0] = 0;
                    *param_1 = uVar2;
                  }
                }
                uVar2 = uStack_20;
                uVar3 = (undefined4)uStack_28;
                uVar4 = uStack_28._4_4_;
                uStack_28 = 0;
                *(undefined4 *)(param_1 + 5) = uStack_30;
                *(undefined4 *)((long)param_1 + 0x2c) = uStack_2c;
                *(undefined4 *)(param_1 + 6) = uVar3;
                *(undefined4 *)((long)param_1 + 0x34) = uVar4;
                uStack_20 = 0;
                param_1[7] = uVar2;
                if (pcStack_40 == (code *)0x0) {
                  return;
                }
                (*pcStack_40)(auStack_58);
                return;
              }
              func_0x0d2e8da0(param_1,auStack_58);
              lVar6 = param_1[7];
              if ((lVar6 == 0) && ((code *)param_1[3] != (code *)0x0)) {
                (*(code *)param_1[3])(param_1);
              }
              if (pcStack_40 != (code *)0x0) {
                (*pcStack_40)(auStack_58);
              }
              if (lVar6 != 0) {
                return;
              }
              piVar8 = piVar8 + 6;
            } while (piVar8 != piStack_18);
          }
        }
      }
      uVar2 = param_2[5];
      param_1[2] = &UNK_0488e0b0;
      *(undefined4 *)(param_1 + 4) = 0x48b5725f;
      param_1[3] = 0;
      *(undefined1 *)((long)param_1 + 0x24) = 0;
      *param_1 = 0;
      param_1[5] = uVar2;
      param_1[6] = 0;
      param_1[7] = 0;
      return;
    }
    puVar5 = param_2;
    if (*(char *)((long)param_2 + 0x24) != '\x02') {
      puVar5 = (undefined8 *)*param_2;
    }
    param_1[2] = param_2[2];
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0x7cf10c1a;
    *(undefined1 *)((long)param_1 + 0x24) = 4;
  }
  *param_1 = puVar5;
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  param_1[7] = param_2[7];
  return;
}


