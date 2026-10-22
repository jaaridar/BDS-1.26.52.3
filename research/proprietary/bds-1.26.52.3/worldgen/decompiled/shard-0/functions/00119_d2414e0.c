/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3414e0 (ELF vaddr 0xd2414e0)
 * Label: callee-of:0x5188b10
 * Body:  [[0d3414e0, 0d341543] [0d341550, 0d3416a7] [0d3416b0, 0d3417c3]]
 * Ghidra: FUN_0d3414e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0d3414e0(float param_1,float param_2,float param_3,undefined8 *param_4)

{
  float fVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_64;
  float fStack_60;
  
  pfVar3 = (float *)*param_4;
  fStack_64 = 0.0;
  fStack_60 = 0.0;
  if (param_4[1] - (long)pfVar3 != 0) {
    lVar2 = (param_4[1] - (long)pfVar3 >> 2) * 0x7e3f1f8fc7e3f1f9;
    lVar2 = lVar2 + (ulong)(lVar2 == 0);
    fStack_60 = 0.0;
    do {
      if (*(char *)(pfVar3 + 0x48) == '\x01') {
        fVar7 = pfVar3[0x45];
        fVar1 = *pfVar3;
        fVar9 = param_2 * fVar7 + pfVar3[1];
        fVar8 = fVar7 * param_3 + pfVar3[2];
        fVar4 = (float)func_0x0eee4390();
        fVar5 = (float)func_0x0eee4390(fVar9);
        fVar6 = (float)func_0x0eee4390(fVar8);
        fVar7 = (float)func_0x0d3417d0((param_1 * fVar7 + fVar1) - (float)(int)fVar4,
                                       fVar9 - (float)(int)fVar5,fVar8 - (float)(int)fVar6,pfVar3,
                                       (int)fVar4,(int)fVar5,(int)fVar6);
        fStack_60 = fStack_60 + fVar7 * pfVar3[0x47];
      }
      pfVar3 = pfVar3 + 0x49;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  pfVar3 = (float *)param_4[3];
  if (param_4[4] - (long)pfVar3 != 0) {
    param_1 = param_1 * _DAT_011988fc;
    param_2 = param_2 * _DAT_011988fc;
    param_3 = param_3 * _DAT_011988fc;
    lVar2 = (param_4[4] - (long)pfVar3 >> 2) * 0x7e3f1f8fc7e3f1f9;
    lVar2 = lVar2 + (ulong)(lVar2 == 0);
    fStack_64 = 0.0;
    do {
      if (*(char *)(pfVar3 + 0x48) == '\x01') {
        fVar7 = pfVar3[0x45];
        fVar1 = *pfVar3;
        fVar9 = param_2 * fVar7 + pfVar3[1];
        fVar8 = fVar7 * param_3 + pfVar3[2];
        fVar4 = (float)func_0x0eee4390();
        fVar5 = (float)func_0x0eee4390(fVar9);
        fVar6 = (float)func_0x0eee4390(fVar8);
        fVar7 = (float)func_0x0d3417d0((param_1 * fVar7 + fVar1) - (float)(int)fVar4,
                                       fVar9 - (float)(int)fVar5,fVar8 - (float)(int)fVar6,pfVar3,
                                       (int)fVar4,(int)fVar5,(int)fVar6);
        fStack_64 = fStack_64 + fVar7 * pfVar3[0x47];
      }
      pfVar3 = pfVar3 + 0x49;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return (fStack_60 + fStack_64) * *(float *)(param_4 + 6);
}


