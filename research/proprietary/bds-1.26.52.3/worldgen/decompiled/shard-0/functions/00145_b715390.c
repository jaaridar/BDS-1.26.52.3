/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb815390 (ELF vaddr 0xb715390)
 * Label: string:Invalid Custom Biome Source
 * Body:  [[0b815390, 0b81594c]]
 * Ghidra: FUN_0b815390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b815390(long *param_1,undefined8 param_2,long *param_3,long *param_4,int param_5)

{
  undefined8 ****ppppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *****pppppuVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
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
  undefined8 ***pppuStack_100;
  undefined1 uStack_f8;
  undefined4 uStack_f7;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  char cStack_bc;
  long lStack_a8;
  
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
  lVar13 = param_3[5];
  lStack_168 = param_3[6];
  param_3[6] = 0;
  pcStack_160 = (code *)param_3[7];
  param_3[7] = 0;
  lStack_170 = lVar13;
  if (cStack_174 != '\x04') {
    pppppuVar7 = (undefined8 *****)appppuStack_198[0];
    if (cStack_174 == '\x02') {
      pppppuVar7 = appppuStack_198;
    }
    if ((iStack_178 == -0x7695f1a4) && (pppppuVar7 != (undefined8 *****)0x0)) {
LAB_0b81551c:
      if ((int)param_4[4] == 0x5010ec25) {
        bVar15 = false;
      }
      else {
        func_0x0b812580(&puStack_e0,param_4);
        if ((lStack_a8 != 0) && ((byte)(cStack_bc - 1U) < 2)) {
          func_0x048b0900(param_4,&puStack_e0);
        }
        if (pcStack_c8 != (code *)0x0) {
          (*pcStack_c8)(&puStack_e0);
        }
        if (lStack_a8 == 0) goto LAB_0b815457;
        bVar15 = (int)param_4[4] != 0x5010ec25;
      }
      lVar13 = lStack_170;
      cVar6 = *(char *)((long)param_4 + 0x24);
      plVar9 = (long *)*param_4;
      plVar8 = plVar9;
      if (cVar6 == '\x02') {
        plVar8 = param_4;
      }
      if ((bool)(plVar8 == (long *)0x0 | bVar15)) {
        lVar11 = param_4[5];
        lVar12 = param_4[6];
        if (lVar12 == 0) {
          (*(code *)param_4[7])(0,param_4,0);
          lVar12 = param_4[6];
          cVar6 = *(char *)((long)param_4 + 0x24);
          plVar9 = (long *)*param_4;
        }
        if (cVar6 == '\x02') {
          plVar9 = param_4;
        }
        plVar8 = (long *)func_0x0488e200(lVar11,lVar12,0x5010ec25,plVar9);
      }
      if ((pppppuVar7[7] == (undefined8 ****)0x0) ||
         (plVar9 = (long *)func_0x0412c300(), plVar9 == (long *)0x0)) {
        plVar9 = (long *)0x0;
LAB_0b81570d:
        puStack_1a0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_1a0 == (undefined4 *)0x0) {
          FUN_0eec74c0(0x20,0);
        }
        uVar5 = _UNK_01266568;
        auStack_1b0[0] = 0x21;
        auStack_1b0[1] = 0x1b;
        *(ulong *)((long)puStack_1a0 + 0xb) =
             CONCAT35(_UNK_01266565,CONCAT41(_UNK_01266561,DAT_01266560));
        *(undefined8 *)((long)puStack_1a0 + 0x13) = uVar5;
        uVar4 = _UNK_01266561;
        uVar3 = _UNK_0126655d;
        uVar2 = _UNK_01266559;
        *puStack_1a0 = _DAT_01266555;
        puStack_1a0[1] = uVar2;
        puStack_1a0[2] = uVar3;
        puStack_1a0[3] = uVar4;
        *(undefined1 *)((long)puStack_1a0 + 0x1b) = 0;
        uStack_f8 = 10;
        uStack_f7 = _DAT_013f776f;
        uStack_f3 = DAT_013f7773;
        uStack_f2 = 0;
        func_0x0d858ce0(&puStack_e0,&uStack_f8,auStack_1b0);
        uStack_158 = CONCAT71(uStack_158._1_7_,1);
        func_0x05e91e00(&uStack_150,&puStack_e0);
        func_0x048fb670(&puStack_e0);
        if ((auStack_1b0[0] & 1) != 0) {
          func_0x0412a280(puStack_1a0,auStack_1b0[0] & 0xfffffffffffffffe);
        }
      }
      else {
        ppppuVar1 = pppppuVar7[6];
        if (ppppuVar1 == (undefined8 ****)0x0) goto LAB_0b81570d;
        lStack_108 = lVar13;
        puStack_e0 = &uStack_d8;
        uStack_d8 = 0;
        uStack_d0 = 0;
        lVar13 = *plVar8;
        pppuStack_100 = ppppuVar1;
        if (plVar8[1] != lVar13) {
          lVar11 = 0;
          uVar14 = 0;
          do {
            func_0x0b766990(lVar13 + lVar11,&puStack_e0);
            uVar14 = uVar14 + 1;
            lVar13 = *plVar8;
            lVar11 = lVar11 + 0x48;
          } while (uVar14 < (ulong)((plVar8[1] - lVar13 >> 3) * -0x71c71c71c71c71c7));
        }
        (*(code *)(*pppuStack_100)[7])(pppuStack_100,&puStack_e0);
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
        func_0x0b807720(&puStack_e0,uStack_d8);
        lVar13 = lStack_108;
      }
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar11 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          func_0x0412c2d0(plVar9);
        }
      }
      *param_1 = 0;
      param_1[2] = (long)&UNK_065cc250;
      *(undefined4 *)(param_1 + 4) = 0x4efbe0f9;
      param_1[3] = (long)&UNK_065cc420;
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      puVar10 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar10 == (undefined1 *)0x0) {
        FUN_0eec74c0(0x48,0);
      }
      uVar5 = uStack_150;
      *puVar10 = (undefined1)uStack_158;
      *(undefined8 *)(puVar10 + 8) = 0;
      *(code **)(puVar10 + 0x18) = pcStack_140;
      *(code **)(puVar10 + 0x20) = pcStack_138;
      *(undefined4 *)(puVar10 + 0x28) = (undefined4)uStack_130;
      puVar10[0x2c] = uStack_130._4_1_;
      if (uStack_130._4_1_ != '\0') {
        if (uStack_130._4_1_ == '\x02') {
          (*pcStack_140)(5,&uStack_150);
        }
        else {
          uStack_150 = 0;
          *(undefined8 *)(puVar10 + 8) = uVar5;
        }
      }
      uVar5 = uStack_118;
      uVar2 = (undefined4)uStack_120;
      uVar3 = uStack_120._4_4_;
      uStack_120 = 0;
      *(undefined4 *)(puVar10 + 0x30) = (undefined4)uStack_128;
      *(undefined4 *)(puVar10 + 0x34) = uStack_128._4_4_;
      *(undefined4 *)(puVar10 + 0x38) = uVar2;
      *(undefined4 *)(puVar10 + 0x3c) = uVar3;
      uStack_118 = 0;
      *(undefined8 *)(puVar10 + 0x40) = uVar5;
      *param_1 = (long)puVar10;
      param_1[5] = lVar13;
      param_1[6] = 0;
      param_1[7] = (long)&UNK_065cc1b0;
      if (pcStack_138 != (code *)0x0) {
        (*pcStack_138)(&uStack_150);
      }
      goto LAB_0b81548c;
    }
    if (pcStack_160 != (code *)0x0) {
      if (lStack_168 == 0) {
        (*pcStack_160)(0,appppuStack_198,0);
      }
      pppppuVar7 = (undefined8 *****)appppuStack_198[0];
      if (cStack_174 == '\x02') {
        pppppuVar7 = appppuStack_198;
      }
      pppppuVar7 = (undefined8 *****)func_0x0488e200(lVar13,lStack_168,0x896a0e5c,pppppuVar7);
      if (pppppuVar7 != (undefined8 *****)0x0) goto LAB_0b81551c;
    }
  }
LAB_0b815457:
  param_1[2] = (long)&UNK_0488e0b0;
  *(undefined4 *)(param_1 + 4) = 0x48b5725f;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[5] = lStack_170;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0b81548c:
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
