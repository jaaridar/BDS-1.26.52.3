/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb813a20 (ELF vaddr 0xb713a20)
 * Label: caller-of-callee
 * Body:  [[0b813a20, 0b814173]]
 * Ghidra: FUN_0b813a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b813a20(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 ******ppppppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  float fVar16;
  ulong auStack_1d0 [2];
  undefined4 *puStack_1c0;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 auStack_188 [2];
  code *pcStack_178;
  code *pcStack_170;
  undefined4 uStack_168;
  char cStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 ******appppppuStack_148 [2];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  char cStack_124;
  long lStack_120;
  long lStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  int iStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  undefined4 uStack_e8;
  char cStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_5 != 1) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x05d84ba0(param_1);
    return param_1;
  }
  appppppuStack_148[0] = (undefined8 *******)0x0;
  uStack_138 = (undefined4)param_3[2];
  uStack_134 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_130 = (undefined4)param_3[3];
  uStack_12c = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_128 = (int)param_3[4];
  cStack_124 = *(char *)((long)param_3 + 0x24);
  if (cStack_124 != '\0') {
    if (cStack_124 == '\x02') {
      (*(code *)param_3[2])(5,param_3,appppppuStack_148);
    }
    else {
      appppppuStack_148[0] = (undefined8 ******)*param_3;
      *param_3 = 0;
    }
  }
  lVar2 = param_3[5];
  lStack_120 = lVar2;
  lStack_118 = param_3[6];
  param_3[6] = 0;
  pcStack_110 = (code *)param_3[7];
  param_3[7] = 0;
  pppppppuVar9 = (undefined8 *******)appppppuStack_148[0];
  if (cStack_124 == '\x02') {
    pppppppuVar9 = appppppuStack_148;
  }
  if ((iStack_128 != -0x7695f1a4) || (pppppppuVar9 == (undefined8 *******)0x0)) {
    if (pcStack_110 != (code *)0x0) {
      if (lStack_118 == 0) {
        (*pcStack_110)(0,appppppuStack_148,0);
      }
      pppppppuVar9 = (undefined8 *******)appppppuStack_148[0];
      if (cStack_124 == '\x02') {
        pppppppuVar9 = appppppuStack_148;
      }
      pppppppuVar9 = (undefined8 *******)func_0x0488e200(lVar2,lStack_118,0x896a0e5c,pppppppuVar9);
      if (pppppppuVar9 != (undefined8 *******)0x0) goto LAB_0b813b86;
    }
LAB_0b813db3:
    param_1[2] = (long)&UNK_0488e0b0;
    *(undefined4 *)(param_1 + 4) = 0x48b5725f;
    param_1[3] = 0;
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    *param_1 = 0;
    param_1[5] = lStack_120;
    param_1[6] = 0;
    param_1[7] = 0;
    goto LAB_0b813fea;
  }
LAB_0b813b86:
  if (*(int *)(param_4 + 4) == 0x2b3c5682) {
    bVar15 = false;
  }
  else {
    func_0x05da2d20(&uStack_108,param_4);
    lVar2 = lStack_d0;
    if ((lStack_d0 != 0) && ((byte)(cStack_e4 - 1U) < 2)) {
      func_0x048b0900(param_4,&uStack_108);
    }
    if (pcStack_f0 != (code *)0x0) {
      (*pcStack_f0)(&uStack_108);
    }
    if (lVar2 == 0) goto LAB_0b813db3;
    bVar15 = *(int *)(param_4 + 4) != 0x2b3c5682;
  }
  lVar2 = lStack_120;
  cVar8 = *(char *)((long)param_4 + 0x24);
  puVar14 = (undefined8 *)*param_4;
  puVar10 = puVar14;
  if (cVar8 == '\x02') {
    puVar10 = param_4;
  }
  if ((bool)(puVar10 == (undefined8 *)0x0 | bVar15)) {
    uVar3 = param_4[5];
    lVar12 = param_4[6];
    if (lVar12 == 0) {
      (*(code *)param_4[7])(0,param_4,0);
      lVar12 = param_4[6];
      cVar8 = *(char *)((long)param_4 + 0x24);
      puVar14 = (undefined8 *)*param_4;
    }
    if (cVar8 == '\x02') {
      puVar14 = param_4;
    }
    puVar10 = (undefined8 *)func_0x0488e200(uVar3,lVar12,0x2b3c5682,puVar14);
  }
  if ((pppppppuVar9[7] == (undefined8 ******)0x0) ||
     (plVar11 = (long *)func_0x0412c300(), plVar11 == (long *)0x0)) {
    plVar11 = (long *)0x0;
LAB_0b813df3:
    puStack_1c0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1c0 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_01266568;
    auStack_1d0[0] = 0x21;
    auStack_1d0[1] = 0x1b;
    *(ulong *)((long)puStack_1c0 + 0xb) =
         CONCAT35(_UNK_01266565,CONCAT41(_UNK_01266561,DAT_01266560));
    *(undefined8 *)((long)puStack_1c0 + 0x13) = uVar3;
    uVar7 = _UNK_01266561;
    uVar6 = _UNK_0126655d;
    uVar5 = _UNK_01266559;
    *puStack_1c0 = _DAT_01266555;
    puStack_1c0[1] = uVar5;
    puStack_1c0[2] = uVar6;
    puStack_1c0[3] = uVar7;
    *(undefined1 *)((long)puStack_1c0 + 0x1b) = 0;
    uStack_1b0._0_5_ = CONCAT41(_DAT_013f776f,10);
    uStack_1b0._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_1b0);
    uStack_1b0._0_7_ = (uint7)(uint6)uStack_1b0;
    func_0x0d858ce0(&uStack_108,&uStack_1b0,auStack_1d0);
    uStack_190 = 1;
    func_0x05e91e00(auStack_188,&uStack_108);
    func_0x048fb670(&uStack_108);
    if ((auStack_1d0[0] & 1) != 0) {
      func_0x0412a280(puStack_1c0,auStack_1d0[0] & 0xfffffffffffffffe);
    }
    if (plVar11 != (long *)0x0) goto LAB_0b813ec1;
  }
  else {
    ppppppuVar4 = pppppppuVar9[6];
    if (ppppppuVar4 == (undefined8 ******)0x0) goto LAB_0b813df3;
    uStack_1b4 = *(undefined4 *)(puVar10 + 1);
    uStack_58 = *puVar10;
    uStack_50 = 0;
    uStack_48 = func_0x0eee4390();
    fVar16 = (float)func_0x0eee4390(uStack_58._4_4_);
    uStack_108 = CONCAT44((int)fVar16,(int)(float)uStack_48);
    fVar16 = (float)func_0x0eee4390(uStack_1b4);
    iStack_100 = (int)fVar16;
    lVar12 = (*(code *)(*ppppppuVar4)[5])(ppppppuVar4,&uStack_108);
    if (lVar12 == 0) {
      puStack_1c0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_1c0 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_01266568;
      auStack_1d0[0] = 0x21;
      auStack_1d0[1] = 0x1b;
      *(ulong *)((long)puStack_1c0 + 0xb) =
           CONCAT35(_UNK_01266565,CONCAT41(_UNK_01266561,DAT_01266560));
      *(undefined8 *)((long)puStack_1c0 + 0x13) = uVar3;
      uVar7 = _UNK_01266561;
      uVar6 = _UNK_0126655d;
      uVar5 = _UNK_01266559;
      *puStack_1c0 = _DAT_01266555;
      puStack_1c0[1] = uVar5;
      puStack_1c0[2] = uVar6;
      puStack_1c0[3] = uVar7;
      *(undefined1 *)((long)puStack_1c0 + 0x1b) = 0;
      uStack_1b0._0_5_ = CONCAT41(_DAT_013f776f,10);
      uStack_1b0._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_1b0);
      uStack_1b0._0_7_ = (uint7)(uint6)uStack_1b0;
      func_0x0d858ce0(&uStack_108,&uStack_1b0,auStack_1d0);
      uStack_190 = 1;
      func_0x05e91e00(auStack_188,&uStack_108);
      func_0x048fb670(&uStack_108);
      if ((auStack_1d0[0] & 1) != 0) {
        func_0x0412a280(puStack_1c0,auStack_1d0[0] & 0xfffffffffffffffe);
      }
    }
    else {
      uStack_198 = (*(code *)(*ppppppuVar4)[3])(ppppppuVar4);
      uStack_1b0 = pppppppuVar9[4];
      uStack_1a8 = *(undefined4 *)(pppppppuVar9 + 5);
      lStack_1a0 = lVar12;
      func_0x09730d00(&uStack_108,&uStack_1b0);
      uVar3 = uStack_108;
      uStack_190 = 0;
      auStack_188[0] = 0;
      pcStack_178 = pcStack_f8;
      pcStack_170 = pcStack_f0;
      uStack_168 = uStack_e8;
      cStack_164 = cStack_e4;
      if (cStack_e4 != '\0') {
        if (cStack_e4 == '\x02') {
          (*pcStack_f8)(5,&uStack_108,auStack_188);
        }
        else {
          uStack_108 = 0;
          auStack_188[0] = uVar3;
        }
      }
      lStack_150 = lStack_d0;
      uStack_158 = uStack_d8;
      uStack_160 = uStack_e0;
      uStack_15c = uStack_dc;
      uStack_d8 = 0;
      lStack_d0 = 0;
      if (pcStack_f0 != (code *)0x0) {
        (*pcStack_f0)(&uStack_108);
      }
    }
LAB_0b813ec1:
    LOCK();
    plVar1 = plVar11 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  *param_1 = 0;
  param_1[2] = (long)&UNK_0b8145d0;
  *(undefined4 *)(param_1 + 4) = 0x167d50da;
  param_1[3] = (long)&UNK_0b8148b0;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  puVar13 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar13 == (undefined1 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uVar3 = auStack_188[0];
  *puVar13 = uStack_190;
  *(undefined8 *)(puVar13 + 8) = 0;
  *(code **)(puVar13 + 0x18) = pcStack_178;
  *(code **)(puVar13 + 0x20) = pcStack_170;
  *(undefined4 *)(puVar13 + 0x28) = uStack_168;
  puVar13[0x2c] = cStack_164;
  if (cStack_164 != '\0') {
    if (cStack_164 == '\x02') {
      (*pcStack_178)(5,auStack_188);
    }
    else {
      auStack_188[0] = 0;
      *(undefined8 *)(puVar13 + 8) = uVar3;
    }
  }
  lVar12 = lStack_150;
  uVar5 = (undefined4)uStack_158;
  uVar6 = uStack_158._4_4_;
  uStack_158 = 0;
  *(undefined4 *)(puVar13 + 0x30) = uStack_160;
  *(undefined4 *)(puVar13 + 0x34) = uStack_15c;
  *(undefined4 *)(puVar13 + 0x38) = uVar5;
  *(undefined4 *)(puVar13 + 0x3c) = uVar6;
  lStack_150 = 0;
  *(long *)(puVar13 + 0x40) = lVar12;
  *param_1 = (long)puVar13;
  param_1[5] = lVar2;
  param_1[6] = 0;
  param_1[7] = (long)&UNK_0b814460;
  if (pcStack_170 != (code *)0x0) {
    (*pcStack_170)(auStack_188);
  }
LAB_0b813fea:
  if ((code *)CONCAT44(uStack_12c,uStack_130) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_12c,uStack_130))(appppppuStack_148);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x1266555  Invalid Custom Biome Source
 * 0x1266560  tom Biome Source
 * 0x13f776f  Error
 */
