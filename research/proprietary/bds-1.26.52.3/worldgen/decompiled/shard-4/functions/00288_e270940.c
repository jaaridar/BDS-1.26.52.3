/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe370940 (ELF vaddr 0xe270940)
 * Label: callee-of:0xe1df5f0
 * Body:  [[0e370940, 0e370b92]]
 * Ghidra: FUN_0e370940
 */


void FUN_0e370940(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 auStack_78 [2];
  code *pcStack_68;
  code *pcStack_60;
  undefined4 uStack_58;
  char cStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int *piStack_38;
  
  if (*(int *)(param_2 + 4) == -0x6e92d98b) {
    puVar5 = param_2;
    if (*(char *)((long)param_2 + 0x24) != '\x02') {
      puVar5 = (undefined8 *)*param_2;
    }
    param_1[2] = param_2[2];
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0x916d2675;
    *(undefined1 *)((long)param_1 + 0x24) = 4;
    *param_1 = puVar5;
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar2;
    param_1[7] = param_2[7];
  }
  else {
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
          if (*piVar8 == -0x6e92d98b) {
            puVar5 = param_2 + 5;
            if (*(char *)((long)param_2 + 0x24) != '\x02') {
              param_2 = (undefined8 *)*param_2;
            }
                    /* WARNING: Could not recover jumptable at 0x0e370b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(piVar8 + 2))(param_1,*puVar5,param_2);
            return;
          }
        }
        piVar8 = *(int **)(lVar6 + 0x18);
        piStack_38 = *(int **)(lVar6 + 0x20);
        if (piVar8 != piStack_38) {
          do {
            lVar6 = (**(code **)(piVar8 + 2))(param_2[5]);
            puVar5 = param_2;
            if (*(char *)((long)param_2 + 0x24) != '\x02') {
              puVar5 = (undefined8 *)*param_2;
            }
            pcVar1 = *(code **)(lVar6 + 0x40);
            uVar2 = param_2[5];
            uVar7 = (**(code **)(piVar8 + 4))(puVar5);
            (*pcVar1)(auStack_78,uVar2,0,uVar7);
            uVar2 = auStack_78[0];
            if (*piVar8 == -0x6e92d98b) {
              *param_1 = 0;
              param_1[2] = pcStack_68;
              param_1[3] = pcStack_60;
              *(undefined4 *)(param_1 + 4) = uStack_58;
              *(char *)((long)param_1 + 0x24) = cStack_54;
              if (cStack_54 != '\0') {
                if (cStack_54 == '\x02') {
                  (*pcStack_68)(5,auStack_78,param_1);
                }
                else {
                  auStack_78[0] = 0;
                  *param_1 = uVar2;
                }
              }
              uVar2 = uStack_40;
              uVar3 = (undefined4)uStack_48;
              uVar4 = uStack_48._4_4_;
              uStack_48 = 0;
              *(undefined4 *)(param_1 + 5) = uStack_50;
              *(undefined4 *)((long)param_1 + 0x2c) = uStack_4c;
              *(undefined4 *)(param_1 + 6) = uVar3;
              *(undefined4 *)((long)param_1 + 0x34) = uVar4;
              uStack_40 = 0;
              param_1[7] = uVar2;
              if (pcStack_60 == (code *)0x0) {
                return;
              }
              (*pcStack_60)(auStack_78);
              return;
            }
            FUN_0e370940(param_1,auStack_78);
            lVar6 = param_1[7];
            if ((lVar6 == 0) && ((code *)param_1[3] != (code *)0x0)) {
              (*(code *)param_1[3])(param_1);
            }
            if (pcStack_60 != (code *)0x0) {
              (*pcStack_60)(auStack_78);
            }
            if (lVar6 != 0) {
              return;
            }
            piVar8 = piVar8 + 6;
          } while (piVar8 != piStack_38);
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
  }
  return;
}


