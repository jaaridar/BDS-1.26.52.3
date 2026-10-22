/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c9d20 (ELF vaddr 0xc5c9d20)
 * Label: JigsawBlock::vslot4
 * Body:  [[0c6c9d20, 0c6c9f48]]
 * Ghidra: wg_JigsawBlock__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_JigsawBlock__vslot4
          (undefined8 param_1,float param_2,undefined8 *param_3,long *param_4,long param_5,
          undefined8 param_6,undefined8 *param_7)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Dc;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [8];
  float fStack_30;
  float fStack_2c;
  
  pcVar1 = *(char **)(param_5 + 0x80);
  if (pcVar1 == (char *)0x0) {
    uStack_58 = _DAT_01e7b2b8;
    uStack_60 = _DAT_01e7b2b0;
    uStack_54 = _DAT_01e7b2bc;
    uStack_4c = _DAT_01e7b2c4;
    puVar6 = (undefined8 *)(**(code **)(*param_4 + 0x50))(param_4,param_5,&uStack_60);
    lVar7 = func_0x0c8452b0(param_5);
    if (lVar7 == 0) {
      fVar18 = 0.0;
      fVar20 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      param_2 = 0.0;
    }
    else {
      func_0x0cd4eb50(lVar7,param_7);
      fVar18 = extraout_XMM0_Da;
      fVar20 = extraout_XMM0_Db;
      fVar13 = extraout_XMM0_Dc;
      fVar14 = extraout_XMM0_Dd;
    }
    fVar15 = *(float *)(puVar6 + 1) + (float)*(int *)(param_7 + 1) + param_2;
    fVar16 = (float)*(int *)(param_7 + 1) + param_2 + *(float *)((long)puVar6 + 0x14);
    fVar18 = (float)(int)*param_7 + fVar18;
    fVar20 = (float)(int)((ulong)*param_7 >> 0x20) + fVar20;
    auVar11._0_8_ = CONCAT44((float)((ulong)*puVar6 >> 0x20) + fVar20,(float)*puVar6 + fVar18);
    auVar11._8_4_ = fVar13 + 0.0 + 0.0;
    auVar11._12_4_ = fVar14 + 0.0 + 0.0;
    auVar21._0_4_ = (float)*(undefined8 *)((long)puVar6 + 0xc) + fVar18;
    auVar21._4_4_ = (float)((ulong)*(undefined8 *)((long)puVar6 + 0xc) >> 0x20) + fVar20;
    auVar21._8_4_ = fVar13 + 0.0 + 0.0;
    auVar21._12_4_ = fVar14 + 0.0 + 0.0;
    auVar19._8_4_ = auVar11._8_4_;
    auVar19._0_8_ = auVar11._0_8_;
    auVar19._12_4_ = auVar11._12_4_;
    auVar19 = minps(auVar19,auVar21);
    fVar18 = fVar15;
    if (fVar16 <= fVar15) {
      fVar18 = fVar16;
    }
    *param_3 = auVar19._0_8_;
    *(float *)(param_3 + 1) = fVar18;
    auVar11 = maxps(auVar11,auVar21);
    if (fVar15 <= fVar16) {
      fVar15 = fVar16;
    }
    *(long *)((long)param_3 + 0xc) = auVar11._0_8_;
    *(float *)((long)param_3 + 0x14) = fVar15;
  }
  else if (*pcVar1 == '\0') {
    param_3[2] = _DAT_0f72b520;
    uVar4 = uRam000000000f72b518;
    *param_3 = _DAT_0f72b510;
    param_3[1] = uVar4;
  }
  else {
    fVar18 = _DAT_011987f4;
    fVar20 = _DAT_011988dc;
    _auStack_38 = _DAT_014e1d80;
    _auStack_48 = _DAT_014e3820;
    for (puVar5 = *(ulong **)(pcVar1 + 0x20); puVar5 != *(ulong **)(pcVar1 + 0x28);
        puVar5 = puVar5 + 3) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *puVar5;
      _auStack_38 = minps(_auStack_38,auVar8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulong *)((long)puVar5 + 0xc);
      _auStack_48 = maxps(_auStack_48,auVar9);
      if (*(float *)(puVar5 + 1) <= fVar18) {
        fVar18 = *(float *)(puVar5 + 1);
      }
      if (fVar20 <= *(float *)((long)puVar5 + 0x14)) {
        fVar20 = *(float *)((long)puVar5 + 0x14);
      }
    }
    fVar13 = fVar18;
    lVar7 = func_0x0c8452b0(param_5);
    if (lVar7 == 0) {
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
    }
    else {
      func_0x0cd4eb50(lVar7,param_7);
      fVar14 = extraout_XMM0_Da_00;
      fVar15 = extraout_XMM0_Db_00;
      fVar16 = extraout_XMM0_Dc_00;
      fVar12 = extraout_XMM0_Dd_00;
    }
    fVar18 = fVar18 + (float)*(int *)(param_7 + 1) + fVar13;
    fVar20 = fVar20 + (float)*(int *)(param_7 + 1) + fVar13;
    fVar14 = (float)(int)*param_7 + fVar14;
    fVar15 = (float)(int)((ulong)*param_7 >> 0x20) + fVar15;
    auVar17._0_8_ = CONCAT44((float)auStack_38._4_4_ + fVar15,(float)auStack_38._0_4_ + fVar14);
    auVar17._8_4_ = fStack_30 + fVar16 + 0.0;
    auVar17._12_4_ = fStack_2c + fVar12 + 0.0;
    fVar14 = (float)auStack_48._0_4_ + fVar14;
    fVar15 = (float)auStack_48._4_4_ + fVar15;
    fStack_40 = fStack_40 + fVar16 + 0.0;
    fStack_3c = fStack_3c + fVar12 + 0.0;
    auVar10._8_4_ = auVar17._8_4_;
    auVar10._0_8_ = auVar17._0_8_;
    auVar10._12_4_ = auVar17._12_4_;
    auVar2._4_4_ = fVar15;
    auVar2._0_4_ = fVar14;
    auVar2._8_4_ = fStack_40;
    auVar2._12_4_ = fStack_3c;
    auVar11 = minps(auVar10,auVar2);
    fVar13 = fVar18;
    if (fVar20 <= fVar18) {
      fVar13 = fVar20;
    }
    *param_3 = auVar11._0_8_;
    *(float *)(param_3 + 1) = fVar13;
    auVar3._4_4_ = fVar15;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = fStack_40;
    auVar3._12_4_ = fStack_3c;
    auVar11 = maxps(auVar17,auVar3);
    if (fVar18 <= fVar20) {
      fVar18 = fVar20;
    }
    *(long *)((long)param_3 + 0xc) = auVar11._0_8_;
    *(float *)((long)param_3 + 0x14) = fVar18;
  }
  return param_3;
}


