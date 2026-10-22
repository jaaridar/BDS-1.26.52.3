/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ca480 (ELF vaddr 0xc5ca480)
 * Label: JigsawBlock::vslot8
 * Body:  [[0c6ca480, 0c6ca5be]]
 * Ghidra: wg_JigsawBlock__vslot8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_JigsawBlock__vslot8
          (undefined8 param_1,float param_2,long *param_3,long param_4,undefined8 param_5,
          undefined8 *param_6,undefined8 *param_7)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 *puVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined8 uVar5;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar13;
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pcVar1 = *(char **)(param_4 + 0x88);
  if (pcVar1 == (char *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*param_3 + 0x50))(param_3,param_4,param_7);
    lVar3 = func_0x0c8452b0(param_4);
    if (lVar3 == 0) {
      fVar10 = 0.0;
      fVar13 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      param_2 = 0.0;
    }
    else {
      func_0x0cd4eb50(lVar3,param_6);
      fVar10 = extraout_XMM0_Da_00;
      fVar13 = extraout_XMM0_Db_00;
      fVar17 = extraout_XMM0_Dc_00;
      fVar18 = extraout_XMM0_Dd_00;
    }
    fVar8 = *(float *)(puVar4 + 1) + (float)*(int *)(param_6 + 1) + param_2;
    fVar14 = (float)*(int *)(param_6 + 1) + param_2 + *(float *)((long)puVar4 + 0x14);
    fVar9 = fVar8;
    if (fVar14 <= fVar8) {
      fVar9 = fVar14;
    }
    fVar10 = (float)(int)*param_6 + fVar10;
    fVar13 = (float)(int)((ulong)*param_6 >> 0x20) + fVar13;
    uVar11 = *puVar4;
    fVar15 = (float)*(undefined8 *)((long)puVar4 + 0xc);
    fVar16 = (float)((ulong)*(undefined8 *)((long)puVar4 + 0xc) >> 0x20);
  }
  else {
    fVar8 = _DAT_0f72b524;
    fVar9 = _DAT_0f72b518;
    uVar11 = _DAT_0f72b510;
    uVar5 = _DAT_0f72b51c;
    if (*pcVar1 != '\x01') goto LAB_0c6ca59f;
    lVar3 = func_0x0c8452b0(param_4);
    if (lVar3 == 0) {
      fVar10 = 0.0;
      fVar13 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      param_2 = 0.0;
    }
    else {
      func_0x0cd4eb50(lVar3,param_6);
      fVar10 = extraout_XMM0_Da;
      fVar13 = extraout_XMM0_Db;
      fVar17 = extraout_XMM0_Dc;
      fVar18 = extraout_XMM0_Dd;
    }
    fVar8 = *(float *)(pcVar1 + 0x24) + (float)*(int *)(param_6 + 1) + param_2;
    fVar14 = (float)*(int *)(param_6 + 1) + param_2 + *(float *)(pcVar1 + 0x30);
    fVar9 = fVar8;
    if (fVar14 <= fVar8) {
      fVar9 = fVar14;
    }
    fVar10 = (float)(int)*param_6 + fVar10;
    fVar13 = (float)(int)((ulong)*param_6 >> 0x20) + fVar13;
    uVar11 = *(undefined8 *)(pcVar1 + 0x1c);
    fVar15 = (float)*(undefined8 *)(pcVar1 + 0x28);
    fVar16 = (float)((ulong)*(undefined8 *)(pcVar1 + 0x28) >> 0x20);
  }
  auVar6._0_8_ = CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar13,(float)uVar11 + fVar10);
  auVar6._8_4_ = fVar17 + 0.0 + 0.0;
  auVar6._12_4_ = fVar18 + 0.0 + 0.0;
  fVar17 = fVar17 + 0.0 + 0.0;
  fVar18 = fVar18 + 0.0 + 0.0;
  auVar12._8_4_ = auVar6._8_4_;
  auVar12._0_8_ = auVar6._0_8_;
  auVar12._12_4_ = auVar6._12_4_;
  auVar7._4_4_ = fVar16 + fVar13;
  auVar7._0_4_ = fVar15 + fVar10;
  auVar7._8_4_ = fVar17;
  auVar7._12_4_ = fVar18;
  auVar12 = minps(auVar12,auVar7);
  auVar2._4_4_ = fVar16 + fVar13;
  auVar2._0_4_ = fVar15 + fVar10;
  auVar2._8_4_ = fVar17;
  auVar2._12_4_ = fVar18;
  auVar7 = maxps(auVar6,auVar2);
  uVar11 = auVar12._0_8_;
  uVar5 = auVar7._0_8_;
  if (fVar8 <= fVar14) {
    fVar8 = fVar14;
  }
LAB_0c6ca59f:
  *param_7 = uVar11;
  *(float *)(param_7 + 1) = fVar9;
  *(undefined8 *)((long)param_7 + 0xc) = uVar5;
  *(float *)((long)param_7 + 0x14) = fVar8;
  return param_7;
}


