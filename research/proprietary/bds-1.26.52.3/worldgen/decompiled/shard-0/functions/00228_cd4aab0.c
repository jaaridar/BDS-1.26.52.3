/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce4aab0 (ELF vaddr 0xcd4aab0)
 * Label: callee-of:0xc5c9fb0
 * Body:  [[0ce4aab0, 0ce4ac1b]]
 * Ghidra: FUN_0ce4aab0
 */


char FUN_0ce4aab0(char *param_1,int *param_2,int *param_3,float *param_4,undefined8 param_5)

{
  char cVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_48;
  float fStack_40;
  undefined8 uStack_3c;
  float fStack_34;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    pfVar2 = *(float **)(param_1 + 0x28);
    for (pfVar6 = *(float **)(param_1 + 0x20); pfVar6 != pfVar2; pfVar6 = pfVar6 + 6) {
      fVar7 = (float)(*param_3 + *param_2);
      fVar9 = *pfVar6 + fVar7;
      fVar7 = fVar7 + pfVar6[3];
      fVar10 = fVar9;
      if (fVar7 <= fVar9) {
        fVar10 = fVar7;
      }
      if (fVar9 <= fVar7) {
        fVar9 = fVar7;
      }
      fVar7 = (float)((int)*(undefined8 *)(param_3 + 1) + (int)*(undefined8 *)(param_2 + 1));
      fVar8 = (float)((int)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20) +
                     (int)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20));
      auVar11._0_8_ =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar6 + 1) >> 0x20) + fVar8,
                    (float)*(undefined8 *)(pfVar6 + 1) + fVar7);
      auVar11._8_8_ = 0;
      fVar7 = (float)*(undefined8 *)(pfVar6 + 4) + fVar7;
      fVar8 = (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20) + fVar8;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar11._0_8_;
      auVar14._4_4_ = fVar8;
      auVar14._0_4_ = fVar7;
      auVar14._8_8_ = 0;
      auVar14 = minps(auVar13,auVar14);
      fVar12 = auVar14._0_4_;
      fStack_40 = auVar14._4_4_;
      uStack_48 = CONCAT44(fVar12,fVar10);
      auVar3._4_4_ = fVar8;
      auVar3._0_4_ = fVar7;
      auVar3._8_8_ = 0;
      auVar14 = maxps(auVar11,auVar3);
      fVar7 = auVar14._0_4_;
      fStack_34 = auVar14._4_4_;
      uStack_3c = CONCAT44(fVar7,fVar9);
      if (((fVar10 < fVar9) &&
          (auVar4._4_4_ = -(uint)(fVar12 < fVar7), auVar4._0_4_ = -(uint)(fVar12 < fVar7),
          auVar4._8_4_ = -(uint)(fStack_40 < fStack_34),
          auVar4._12_4_ = -(uint)(fStack_40 < fStack_34),
          iVar5 = movmskpd(*param_3 + *param_2,auVar4), iVar5 == 3)) &&
         ((param_4 == (float *)0x0 ||
          ((((*param_4 < fVar9 && (fVar10 < param_4[3])) && (param_4[1] < fVar7)) &&
           (((fVar12 < param_4[4] && (param_4[2] < fStack_34)) && (fStack_40 < param_4[5])))))))) {
        func_0x0766a830(param_5,&uStack_48);
      }
    }
  }
  return cVar1;
}


