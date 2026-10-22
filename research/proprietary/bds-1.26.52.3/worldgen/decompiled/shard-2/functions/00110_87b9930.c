/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x87b9930
 * Label: string:Factory<Type> cereal::BasicFactory<BiomeTemperatureCategory>
 * Body:  [[087b9930, 087b9b22]]
 * Ghidra: FUN_087b9930
 */


void FUN_087b9930(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,byte param_6)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *in_RAX;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *unaff_RBX;
  undefined8 *unaff_RBP;
  int *piVar11;
  long unaff_R14;
  
  *param_1 = *param_1 >> 4 | *param_1 << 4;
  *in_RAX = (code)((char)*in_RAX + (char)in_RAX);
  *(char *)(param_4 + -0x75) = *(char *)(param_4 + -0x75) + (char)param_4;
  pcVar1 = in_RAX + -0x7b;
  *pcVar1 = (code)((byte)*pcVar1 ^ param_6);
  if (*pcVar1 == (code)0x0) {
    *unaff_RBP = 0x87b995b;
    (*in_RAX)(0);
    lVar8 = *(long *)(*(long *)(unaff_R14 + 0x30) + 0x78);
  }
  else {
    lVar8 = *(long *)(param_4 + 0x78);
  }
  if (lVar8 != 0) {
    for (piVar11 = *(int **)(lVar8 + 0x30); piVar11 != *(int **)(lVar8 + 0x38);
        piVar11 = piVar11 + 4) {
      if (*piVar11 == -0x14978dca) {
                    /* WARNING: Could not recover jumptable at 0x087b9a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(piVar11 + 2))();
        return;
      }
    }
    piVar11 = *(int **)(lVar8 + 0x18);
    piVar3 = *(int **)(lVar8 + 0x20);
    unaff_RBP[9] = piVar3;
    if (piVar11 != piVar3) {
      do {
        uVar4 = *(undefined8 *)(unaff_R14 + 0x28);
        pcVar1 = *(code **)(piVar11 + 2);
        *unaff_RBP = 0x87b99b8;
        lVar8 = (*pcVar1)(uVar4);
        pcVar1 = *(code **)(lVar8 + 0x40);
        uVar4 = *(undefined8 *)(unaff_R14 + 0x28);
        pcVar10 = *(code **)(piVar11 + 4);
        *unaff_RBP = 0x87b99d1;
        uVar9 = (*pcVar10)();
        *unaff_RBP = 0x87b99de;
        (*pcVar1)(unaff_RBP + 1,uVar4,0,uVar9);
        if (*piVar11 == -0x14978dca) {
          *unaff_RBX = 0;
          pcVar1 = (code *)unaff_RBP[3];
          unaff_RBX[2] = pcVar1;
          pcVar10 = (code *)unaff_RBP[4];
          unaff_RBX[3] = pcVar10;
          *(undefined4 *)(unaff_RBX + 4) = *(undefined4 *)(unaff_RBP + 5);
          cVar2 = *(char *)((long)unaff_RBP + 0x2c);
          *(char *)((long)unaff_RBX + 0x24) = cVar2;
          if (cVar2 != '\0') {
            if (cVar2 == '\x02') {
              *unaff_RBP = 0x87b9ad6;
              (*pcVar1)(5,unaff_RBP + 1);
              pcVar10 = (code *)unaff_RBP[4];
            }
            else {
              uVar4 = unaff_RBP[1];
              unaff_RBP[1] = 0;
              *unaff_RBX = uVar4;
            }
          }
          uVar5 = *(undefined4 *)((long)unaff_RBP + 0x34);
          uVar6 = *(undefined4 *)(unaff_RBP + 7);
          uVar7 = *(undefined4 *)((long)unaff_RBP + 0x3c);
          unaff_RBP[7] = 0;
          *(undefined4 *)(unaff_RBX + 5) = *(undefined4 *)(unaff_RBP + 6);
          *(undefined4 *)((long)unaff_RBX + 0x2c) = uVar5;
          *(undefined4 *)(unaff_RBX + 6) = uVar6;
          *(undefined4 *)((long)unaff_RBX + 0x34) = uVar7;
          uVar4 = unaff_RBP[8];
          unaff_RBP[8] = 0;
          unaff_RBX[7] = uVar4;
          if (pcVar10 == (code *)0x0) {
            return;
          }
          *unaff_RBP = 0x87b9b1e;
          (*pcVar10)(unaff_RBP + 1);
          return;
        }
        *unaff_RBP = 0x87b99f7;
        func_0x087b98d0();
        lVar8 = unaff_RBX[7];
        if ((lVar8 == 0) && (pcVar1 = (code *)unaff_RBX[3], pcVar1 != (code *)0x0)) {
          *unaff_RBP = 0x87b9a0e;
          (*pcVar1)();
        }
        if ((code *)unaff_RBP[4] != (code *)0x0) {
          *unaff_RBP = 0x87b9a1d;
          (*(code *)unaff_RBP[4])(unaff_RBP + 1);
        }
        if (lVar8 != 0) {
          return;
        }
        piVar11 = piVar11 + 6;
      } while (piVar11 != (int *)unaff_RBP[9]);
    }
  }
  uVar4 = *(undefined8 *)(unaff_R14 + 0x28);
  unaff_RBX[2] = &UNK_0488e0b0;
  *(undefined4 *)(unaff_RBX + 4) = 0x48b5725f;
  unaff_RBX[3] = 0;
  *(undefined1 *)((long)unaff_RBX + 0x24) = 0;
  *unaff_RBX = 0;
  unaff_RBX[5] = uVar4;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = 0;
  return;
}


