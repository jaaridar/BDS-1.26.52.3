/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb815e10 (ELF vaddr 0xb715e10)
 * Label: string:Invalid Custom Biome Source
 * Body:  [[0b815e10, 0b816403]]
 * Ghidra: FUN_0b815e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b815e10(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *****pppppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong auStack_1b0 [2];
  undefined4 *puStack_1a0;
  undefined8 ****appppuStack_198 [2];
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  char cStack_174;
  long lStack_170;
  long lStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined1 uStack_100;
  undefined4 uStack_ff;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *pcStack_d0;
  char cStack_c4;
  long lStack_b0;
  
  if (param_5 != 2) {
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
  appppuStack_198[0] = (undefined8 *****)0x0;
  uStack_188 = (undefined4)param_3[2];
  uStack_184 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_180 = (undefined4)param_3[3];
  uStack_17c = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_178 = (int)param_3[4];
  cStack_174 = *(char *)((long)param_3 + 0x24);
  if (cStack_174 != '\0') {
    if (cStack_174 == '\x02') {
      (*(code *)param_3[2])(5,param_3,appppuStack_198);
    }
    else {
      appppuStack_198[0] = (undefined8 ****)*param_3;
      *param_3 = 0;
    }
  }
  lVar15 = param_3[5];
  lStack_168 = param_3[6];
  param_3[6] = 0;
  pcStack_160 = (code *)param_3[7];
  param_3[7] = 0;
  lStack_170 = lVar15;
  if (cStack_174 != '\x04') {
    pppppuVar9 = (undefined8 *****)appppuStack_198[0];
    if (cStack_174 == '\x02') {
      pppppuVar9 = appppuStack_198;
    }
    if ((iStack_178 == -0x7695f1a4) && (pppppuVar9 != (undefined8 *****)0x0)) {
LAB_0b815f9c:
      if (*(int *)(param_4 + 4) != -0x5db38b49) {
        func_0x0488e290(&uStack_e8,param_4);
        lVar15 = lStack_b0;
        if ((lStack_b0 != 0) && ((byte)(cStack_c4 - 1U) < 2)) {
          func_0x048b0900(param_4,&uStack_e8);
        }
        if (pcStack_d0 != (code *)0x0) {
          (*pcStack_d0)(&uStack_e8);
        }
        if (lVar15 == 0) goto LAB_0b815ed7;
      }
      puVar1 = param_4 + 8;
      if (*(int *)(param_4 + 0xc) != 0x6f32e810) {
        func_0x066ab6c0(&uStack_e8,puVar1);
        if ((lStack_b0 != 0) && ((byte)(cStack_c4 - 1U) < 2)) {
          func_0x048b0900(puVar1,&uStack_e8);
        }
        if (pcStack_d0 != (code *)0x0) {
          (*pcStack_d0)(&uStack_e8);
        }
        if (lStack_b0 == 0) goto LAB_0b815ed7;
      }
      lStack_108 = lStack_170;
      cVar8 = *(char *)((long)param_4 + 0x24);
      puVar14 = (undefined8 *)*param_4;
      puVar10 = puVar14;
      if (cVar8 == '\x02') {
        puVar10 = param_4;
      }
      if (puVar10 == (undefined8 *)0x0 || *(int *)(param_4 + 4) != -0x5db38b49) {
        uVar3 = param_4[5];
        lVar15 = param_4[6];
        if (lVar15 == 0) {
          (*(code *)param_4[7])(0,param_4,0);
          lVar15 = param_4[6];
          cVar8 = *(char *)((long)param_4 + 0x24);
          puVar14 = (undefined8 *)*param_4;
        }
        if (cVar8 == '\x02') {
          puVar14 = param_4;
        }
        puVar10 = (undefined8 *)func_0x0488e200(uVar3,lVar15,0xa24c74b7,puVar14);
      }
      cVar8 = *(char *)((long)param_4 + 100);
      puVar14 = (undefined8 *)param_4[8];
      puVar11 = puVar14;
      if (cVar8 == '\x02') {
        puVar11 = puVar1;
      }
      if (puVar11 == (undefined8 *)0x0 || *(int *)(param_4 + 0xc) != 0x6f32e810) {
        uVar3 = param_4[0xd];
        lVar15 = param_4[0xe];
        if (lVar15 == 0) {
          (*(code *)param_4[0xf])(0,puVar1,0);
          lVar15 = param_4[0xe];
          cVar8 = *(char *)((long)param_4 + 100);
          puVar14 = (undefined8 *)param_4[8];
        }
        if (cVar8 == '\x02') {
          puVar14 = puVar1;
        }
        puVar11 = (undefined8 *)func_0x0488e200(uVar3,lVar15,0x6f32e810,puVar14);
      }
      if ((pppppuVar9[7] == (undefined8 ****)0x0) ||
         (plVar12 = (long *)func_0x0412c300(), plVar12 == (long *)0x0)) {
        plVar12 = (long *)0x0;
LAB_0b8161bc:
        puStack_1a0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_1a0 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar3 = _UNK_01266568;
        auStack_1b0[0] = 0x21;
        auStack_1b0[1] = 0x1b;
        *(ulong *)((long)puStack_1a0 + 0xb) =
             CONCAT35(_UNK_01266565,CONCAT41(_UNK_01266561,DAT_01266560));
        *(undefined8 *)((long)puStack_1a0 + 0x13) = uVar3;
        uVar7 = _UNK_01266561;
        uVar6 = _UNK_0126655d;
        uVar5 = _UNK_01266559;
        *puStack_1a0 = _DAT_01266555;
        puStack_1a0[1] = uVar5;
        puStack_1a0[2] = uVar6;
        puStack_1a0[3] = uVar7;
        *(undefined1 *)((long)puStack_1a0 + 0x1b) = 0;
        uStack_100 = 10;
        uStack_ff = _DAT_013f776f;
        uStack_fb = DAT_013f7773;
        uStack_fa = 0;
        func_0x0d858ce0(&uStack_e8,&uStack_100,auStack_1b0);
        uStack_158 = CONCAT71(uStack_158._1_7_,1);
        func_0x05e91e00(&uStack_150,&uStack_e8);
        func_0x048fb670(&uStack_e8);
        if ((auStack_1b0[0] & 1) != 0) {
          func_0x0412a280(puStack_1a0,auStack_1b0[0] & 0xfffffffffffffffe);
        }
        if (plVar12 != (long *)0x0) goto LAB_0b816299;
      }
      else {
        ppppuVar4 = pppppuVar9[6];
        if (ppppuVar4 == (undefined8 ****)0x0) goto LAB_0b8161bc;
        uStack_e8 = *(undefined4 *)(puVar11 + 1);
        uStack_e4 = *(undefined4 *)((long)puVar11 + 0xc);
        uStack_e0 = *(undefined4 *)(puVar11 + 2);
        uStack_dc = *(undefined4 *)((long)puVar11 + 0x14);
        (*(code *)(*ppppuVar4)[8])(ppppuVar4,puVar10,&uStack_e8);
        uStack_128 = 0;
        uStack_120 = 0;
        pcStack_138 = (code *)0x0;
        uStack_130 = 0;
        uStack_148 = 0;
        pcStack_140 = (code *)0x0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_118 = 0;
        func_0x05d84ba0(&uStack_150);
LAB_0b816299:
        LOCK();
        plVar2 = plVar12 + 1;
        lVar15 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          func_0x0412c2d0(plVar12);
        }
      }
      *param_1 = 0;
      param_1[2] = (long)&UNK_065cc250;
      *(undefined4 *)(param_1 + 4) = 0x4efbe0f9;
      param_1[3] = (long)&UNK_065cc420;
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      puVar13 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar13 == (undefined1 *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      uVar3 = uStack_150;
      *puVar13 = (undefined1)uStack_158;
      *(undefined8 *)(puVar13 + 8) = 0;
      *(code **)(puVar13 + 0x18) = pcStack_140;
      *(code **)(puVar13 + 0x20) = pcStack_138;
      *(undefined4 *)(puVar13 + 0x28) = (undefined4)uStack_130;
      puVar13[0x2c] = uStack_130._4_1_;
      if (uStack_130._4_1_ != '\0') {
        if (uStack_130._4_1_ == '\x02') {
          (*pcStack_140)(5,&uStack_150);
        }
        else {
          uStack_150 = 0;
          *(undefined8 *)(puVar13 + 8) = uVar3;
        }
      }
      uVar3 = uStack_118;
      uVar5 = (undefined4)uStack_120;
      uVar6 = uStack_120._4_4_;
      uStack_120 = 0;
      *(undefined4 *)(puVar13 + 0x30) = (undefined4)uStack_128;
      *(undefined4 *)(puVar13 + 0x34) = uStack_128._4_4_;
      *(undefined4 *)(puVar13 + 0x38) = uVar5;
      *(undefined4 *)(puVar13 + 0x3c) = uVar6;
      uStack_118 = 0;
      *(undefined8 *)(puVar13 + 0x40) = uVar3;
      *param_1 = (long)puVar13;
      param_1[5] = lStack_108;
      param_1[6] = 0;
      param_1[7] = (long)&UNK_065cc1b0;
      if (pcStack_138 != (code *)0x0) {
        (*pcStack_138)(&uStack_150);
      }
      goto LAB_0b815f0c;
    }
    if (pcStack_160 != (code *)0x0) {
      if (lStack_168 == 0) {
        (*pcStack_160)(0,appppuStack_198,0);
      }
      pppppuVar9 = (undefined8 *****)appppuStack_198[0];
      if (cStack_174 == '\x02') {
        pppppuVar9 = appppuStack_198;
      }
      pppppuVar9 = (undefined8 *****)func_0x0488e200(lVar15,lStack_168,0x896a0e5c,pppppuVar9);
      if (pppppuVar9 != (undefined8 *****)0x0) goto LAB_0b815f9c;
    }
  }
LAB_0b815ed7:
  param_1[2] = (long)&UNK_0488e0b0;
  *(undefined4 *)(param_1 + 4) = 0x48b5725f;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[5] = lStack_170;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0b815f0c:
  if ((code *)CONCAT44(uStack_17c,uStack_180) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_17c,uStack_180))(appppuStack_198);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x1266555  Invalid Custom Biome Source
 * 0x1266560  tom Biome Source
 * 0x13f776f  Error
 */
