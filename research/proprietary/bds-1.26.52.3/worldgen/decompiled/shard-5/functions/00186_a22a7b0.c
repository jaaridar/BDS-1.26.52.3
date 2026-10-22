/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa32a7b0 (ELF vaddr 0xa22a7b0)
 * Label: string:PlaceJigsawError
 * Body:  [[0a32a7b0, 0a32b325] [0a32b3ae, 0a32b3c0] [0a32b420, 0a32b447]]
 * Ghidra: FUN_0a32a7b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0a32a7b0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                   int param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_220;
  ulong uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined4 uStack_1dc;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  byte bStack_1b8;
  undefined4 uStack_1b7;
  undefined4 uStack_1b3;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined1 uStack_1a7;
  undefined6 uStack_1a6;
  undefined8 *****apppppuStack_1a0 [2];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  char cStack_17c;
  long lStack_178;
  long lStack_170;
  code *pcStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 auStack_140 [2];
  code *pcStack_130;
  code *pcStack_128;
  undefined4 uStack_120;
  char cStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  code *pcStack_e8;
  char cStack_dc;
  long lStack_c8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_38;
  
  if (param_5 != 6) {
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
  apppppuStack_1a0[0] = (undefined8 ******)0x0;
  uStack_190 = *(undefined4 *)(param_3 + 2);
  uStack_18c = *(undefined4 *)((long)param_3 + 0x14);
  uStack_188 = *(undefined4 *)(param_3 + 3);
  uStack_184 = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_180 = *(int *)(param_3 + 4);
  cStack_17c = *(char *)((long)param_3 + 0x24);
  if (cStack_17c != '\0') {
    if (cStack_17c == '\x02') {
      (*(code *)param_3[2])(5,param_3,apppppuStack_1a0);
    }
    else {
      apppppuStack_1a0[0] = (undefined8 *****)*param_3;
      *param_3 = 0;
    }
  }
  lVar6 = param_3[5];
  lStack_170 = param_3[6];
  param_3[6] = 0;
  pcStack_168 = (code *)param_3[7];
  param_3[7] = 0;
  lStack_178 = lVar6;
  if (cStack_17c != '\x04') {
    if ((iStack_180 == 0x4e67fd3e) &&
       (cStack_17c == '\x02' || (undefined8 ******)apppppuStack_1a0[0] != (undefined8 ******)0x0)) {
LAB_0a32a978:
      if (*(int *)(param_4 + 4) != -0x5db38b49) {
        func_0x0488e290(&uStack_100,param_4);
        lVar6 = lStack_c8;
        if ((lStack_c8 != 0) && ((byte)(cStack_dc - 1U) < 2)) {
          func_0x048b0900(param_4,&uStack_100);
        }
        if (pcStack_e8 != (code *)0x0) {
          (*pcStack_e8)(&uStack_100);
        }
        if (lVar6 == 0) goto LAB_0a32a895;
      }
      puVar15 = param_4 + 8;
      if (*(int *)(param_4 + 0xc) != -0x5db38b49) {
        func_0x0488e290(&uStack_100,puVar15);
        lVar6 = lStack_c8;
        if ((lStack_c8 != 0) && ((byte)(cStack_dc - 1U) < 2)) {
          func_0x048b0900(puVar15,&uStack_100);
        }
        if (pcStack_e8 != (code *)0x0) {
          (*pcStack_e8)(&uStack_100);
        }
        if (lVar6 == 0) goto LAB_0a32a895;
      }
      puVar1 = param_4 + 0x10;
      if (*(int *)(param_4 + 0x14) != -0x6a1681a2) {
        func_0x0490d170(&uStack_100,puVar1);
        lVar6 = lStack_c8;
        if ((lStack_c8 != 0) && ((byte)(cStack_dc - 1U) < 2)) {
          func_0x048b0900(puVar1,&uStack_100);
        }
        if (pcStack_e8 != (code *)0x0) {
          (*pcStack_e8)(&uStack_100);
        }
        if (lVar6 == 0) goto LAB_0a32a895;
      }
      plVar13 = param_4 + 0x18;
      if (*(int *)(param_4 + 0x1c) != -0x7dcd93b3) {
        func_0x0912ae90(&uStack_100,plVar13);
        lVar6 = lStack_c8;
        if ((lStack_c8 != 0) && ((byte)(cStack_dc - 1U) < 2)) {
          func_0x048b0900(plVar13,&uStack_100);
        }
        if (pcStack_e8 != (code *)0x0) {
          (*pcStack_e8)(&uStack_100);
        }
        if (lVar6 == 0) goto LAB_0a32a895;
      }
      plStack_1f8 = param_4 + 0x20;
      if (*(int *)(param_4 + 0x24) != 0x2b3c5682) {
        func_0x05da2d20(&uStack_100,plStack_1f8);
        lVar6 = lStack_c8;
        if ((lStack_c8 != 0) && ((byte)(cStack_dc - 1U) < 2)) {
          func_0x048b0900(plStack_1f8,&uStack_100);
        }
        if (pcStack_e8 != (code *)0x0) {
          (*pcStack_e8)(&uStack_100);
        }
        if (lVar6 == 0) goto LAB_0a32a895;
      }
      uStack_208 = (byte *)(param_4 + 0x28);
      if (*(int *)(param_4 + 0x2c) != 0x36e75053) {
        func_0x0a32b5d0(&uStack_100,uStack_208);
        if ((lStack_c8 != 0) && ((byte)(cStack_dc - 1U) < 2)) {
          func_0x048b0900(uStack_208,&uStack_100);
        }
        if (pcStack_e8 != (code *)0x0) {
          (*pcStack_e8)(&uStack_100);
        }
        if (lStack_c8 == 0) goto LAB_0a32a895;
      }
      lStack_160 = lStack_178;
      cVar5 = *(char *)((long)param_4 + 0x24);
      puVar7 = (undefined8 *)*param_4;
      puStack_150 = puVar7;
      if (cVar5 == '\x02') {
        puStack_150 = param_4;
      }
      if (puStack_150 == (undefined8 *)0x0 || *(int *)(param_4 + 4) != -0x5db38b49) {
        uVar12 = param_4[5];
        lVar6 = param_4[6];
        if (lVar6 == 0) {
          (*(code *)param_4[7])(0,param_4,0);
          lVar6 = param_4[6];
          cVar5 = *(char *)((long)param_4 + 0x24);
          puVar7 = (undefined8 *)*param_4;
        }
        if (cVar5 == '\x02') {
          puVar7 = param_4;
        }
        puStack_150 = (undefined8 *)func_0x0488e200(uVar12,lVar6,0xa24c74b7,puVar7);
      }
      cVar5 = *(char *)((long)param_4 + 100);
      puVar7 = (undefined8 *)param_4[8];
      puStack_158 = puVar7;
      if (cVar5 == '\x02') {
        puStack_158 = puVar15;
      }
      if (puStack_158 == (undefined8 *)0x0 || *(int *)(param_4 + 0xc) != -0x5db38b49) {
        uVar12 = param_4[0xd];
        lVar6 = param_4[0xe];
        if (lVar6 == 0) {
          (*(code *)param_4[0xf])(0,puVar15,0);
          lVar6 = param_4[0xe];
          cVar5 = *(char *)((long)param_4 + 100);
          puVar7 = (undefined8 *)param_4[8];
        }
        if (cVar5 == '\x02') {
          puVar7 = puVar15;
        }
        puStack_158 = (undefined8 *)func_0x0488e200(uVar12,lVar6,0xa24c74b7,puVar7);
      }
      cVar5 = *(char *)((long)param_4 + 0xa4);
      puVar15 = (undefined8 *)param_4[0x10];
      puVar7 = puVar15;
      if (cVar5 == '\x02') {
        puVar7 = puVar1;
      }
      if (puVar7 == (undefined8 *)0x0 || *(int *)(param_4 + 0x14) != -0x6a1681a2) {
        uVar12 = param_4[0x15];
        lVar6 = param_4[0x16];
        if (lVar6 == 0) {
          (*(code *)param_4[0x17])(0,puVar1,0);
          lVar6 = param_4[0x16];
          cVar5 = *(char *)((long)param_4 + 0xa4);
          puVar15 = (undefined8 *)param_4[0x10];
        }
        if (cVar5 == '\x02') {
          puVar15 = puVar1;
        }
        puVar7 = (undefined8 *)func_0x0488e200(uVar12,lVar6,0x95e97e5e,puVar15);
      }
      uStack_1dc = *(undefined4 *)puVar7;
      cVar5 = *(char *)((long)param_4 + 0xe4);
      plVar9 = (long *)param_4[0x18];
      plVar8 = plVar9;
      if (cVar5 == '\x02') {
        plVar8 = plVar13;
      }
      if (plVar8 == (long *)0x0 || *(int *)(param_4 + 0x1c) != -0x7dcd93b3) {
        uVar12 = param_4[0x1d];
        lVar6 = param_4[0x1e];
        if (lVar6 == 0) {
          (*(code *)param_4[0x1f])(0,plVar13,0);
          lVar6 = param_4[0x1e];
          cVar5 = *(char *)((long)param_4 + 0xe4);
          plVar9 = (long *)param_4[0x18];
        }
        if (cVar5 == '\x02') {
          plVar9 = plVar13;
        }
        plVar8 = (long *)func_0x0488e200(uVar12,lVar6,0x82326c4d,plVar9);
      }
      cVar5 = *(char *)((long)param_4 + 0x124);
      plVar13 = (long *)param_4[0x20];
      plVar9 = plVar13;
      if (cVar5 == '\x02') {
        plVar9 = plStack_1f8;
      }
      if (plVar9 == (long *)0x0 || *(int *)(param_4 + 0x24) != 0x2b3c5682) {
        uVar12 = param_4[0x25];
        lVar6 = param_4[0x26];
        if (lVar6 == 0) {
          (*(code *)param_4[0x27])(0,plStack_1f8,0);
          lVar6 = param_4[0x26];
          cVar5 = *(char *)((long)param_4 + 0x124);
          plVar13 = (long *)param_4[0x20];
        }
        if (cVar5 == '\x02') {
          plVar13 = plStack_1f8;
        }
        plVar9 = (long *)func_0x0488e200(uVar12,lVar6,0x2b3c5682,plVar13);
      }
      cVar5 = *(char *)((long)param_4 + 0x164);
      pbVar16 = (byte *)param_4[0x28];
      pbVar10 = pbVar16;
      if (cVar5 == '\x02') {
        pbVar10 = uStack_208;
      }
      if (pbVar10 == (byte *)0x0 || *(int *)(param_4 + 0x2c) != 0x36e75053) {
        uVar12 = param_4[0x2d];
        lVar6 = param_4[0x2e];
        if (lVar6 == 0) {
          (*(code *)param_4[0x2f])(0,uStack_208,0);
          lVar6 = param_4[0x2e];
          cVar5 = *(char *)((long)param_4 + 0x164);
          pbVar16 = (byte *)param_4[0x28];
        }
        if (cVar5 == '\x02') {
          pbVar16 = uStack_208;
        }
        pbVar10 = (byte *)func_0x0488e200(uVar12,lVar6,0x36e75053,pbVar16);
      }
      bVar20 = 0;
      if (pbVar10[6] == 1) {
        if (pbVar10[5] != 0) {
          bVar20 = pbVar10[4];
        }
        bVar21 = *pbVar10 & pbVar10[1];
        bVar18 = pbVar10[3] ^ 1 | pbVar10[2];
      }
      else {
        bVar18 = 1;
        bVar21 = 0;
      }
      lVar6 = plVar9[1];
      uStack_208 = (byte *)*plVar9;
      uStack_200 = 0;
      plStack_1f8 = (long *)func_0x0eee4390();
      fVar22 = (float)func_0x0eee4390(uStack_208._4_4_);
      uStack_100 = CONCAT44((int)fVar22,(int)plStack_1f8._0_4_);
      fVar22 = (float)func_0x0eee4390((int)lVar6);
      iStack_f8 = (int)fVar22;
      if (*(int *)((undefined8 *)*plVar8 + 1) == (int)plVar8[1]) {
        uVar12 = *(undefined8 *)*plVar8;
      }
      else {
        uVar12 = 0;
      }
      lVar6 = func_0x08d4ed60(uVar12,plVar8[2],(int)plVar8[3]);
      func_0x09cb07e0(&uStack_50,puStack_150,puStack_158,(int)(char)uStack_1dc,&uStack_100,bVar21,
                      bVar18 & 1,*(undefined8 *)(lVar6 + 0x40),bVar20);
      if (cStack_38 == '\x01') {
        func_0x0a2ad7b0(auStack_148,&uStack_50);
      }
      else {
        auVar23 = func_0x0a2ad860(uStack_50,uStack_48);
        uVar17 = auVar23._8_8_;
        if (0xfffffffffffffff7 < uVar17) {
          uVar12 = func_0x04882e30();
          FUN_0412a280(uVar17,uStack_220 & 0xfffffffffffffffe);
          if ((code *)CONCAT44(uStack_184,uStack_188) != (code *)0x0) {
            (*(code *)CONCAT44(uStack_184,uStack_188))(apppppuStack_1a0);
          }
          uVar12 = func_0x0eee2d70(uVar12);
          func_0x04882e20(uVar12);
          pcVar2 = (code *)swi(3);
          plVar13 = (long *)(*pcVar2)();
          return plVar13;
        }
        if (uVar17 < 0x17) {
          uStack_220 = CONCAT71(uStack_220._1_7_,auVar23[8] * '\x02');
          lVar6 = (long)&uStack_220 + 1;
          if (uVar17 != 0) goto LAB_0a32b0cf;
        }
        else {
          uVar19 = 0x1a;
          if ((uVar17 | 7) != 0x17) {
            uVar19 = (uVar17 | 7) + 1;
          }
          lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
          if (lVar6 == 0) {
            func_0x0eec74c0(uVar19,0);
          }
          uStack_220 = uVar19 | 1;
          uStack_218 = uVar17;
          lStack_210 = lVar6;
LAB_0a32b0cf:
          func_0x0eee2ee0(lVar6,auVar23._0_8_,uVar17);
        }
        uVar19 = uStack_220;
        *(undefined1 *)(lVar6 + uVar17) = 0;
        if ((uStack_220 & 1) == 0) {
          lStack_1c8 = lStack_210;
          uStack_1d8 = uStack_220;
          uStack_1d0 = uStack_218;
        }
        else {
          func_0x0412e5e0(&uStack_1d8,lStack_210,uStack_218);
        }
        bStack_1b8 = 0x20;
        uStack_1b7 = _DAT_014030d8;
        uStack_1b3 = _UNK_014030dc;
        uStack_1af = _UNK_014030e0;
        uStack_1ab = _UNK_014030e4;
        uStack_1a7 = 0;
        func_0x0d858ce0(&uStack_100,&bStack_1b8,&uStack_1d8);
        if ((bStack_1b8 & 1) != 0) {
          FUN_0412a280(CONCAT62(uStack_1a6,CONCAT11(uStack_1a7,uStack_1ab._3_1_)),
                       CONCAT35((undefined3)uStack_1b3,CONCAT41(uStack_1b7,bStack_1b8)) &
                       0xfffffffffffffffe);
        }
        auStack_148[0] = 1;
        func_0x0a32c7d0(auStack_140,&uStack_100);
        func_0x048fb670(&uStack_100);
        if ((uStack_1d8 & 1) != 0) {
          FUN_0412a280(lStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
        }
        if ((uVar19 & 1) != 0) {
          FUN_0412a280(lStack_210,uStack_220 & 0xfffffffffffffffe);
        }
      }
      *param_1 = 0;
      param_1[2] = (long)&UNK_0a3289c0;
      *(undefined4 *)(param_1 + 4) = 0xcf44468d;
      param_1[3] = (long)&UNK_0a328ca0;
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      puVar11 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar11 == (undefined1 *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      uVar12 = auStack_140[0];
      *puVar11 = auStack_148[0];
      *(undefined8 *)(puVar11 + 8) = 0;
      *(code **)(puVar11 + 0x18) = pcStack_130;
      *(code **)(puVar11 + 0x20) = pcStack_128;
      *(undefined4 *)(puVar11 + 0x28) = uStack_120;
      puVar11[0x2c] = cStack_11c;
      if (cStack_11c != '\0') {
        if (cStack_11c == '\x02') {
          (*pcStack_130)(5,auStack_140);
        }
        else {
          auStack_140[0] = 0;
          *(undefined8 *)(puVar11 + 8) = uVar12;
        }
      }
      uVar12 = uStack_108;
      uVar3 = (undefined4)uStack_110;
      uVar4 = uStack_110._4_4_;
      uStack_110 = 0;
      *(undefined4 *)(puVar11 + 0x30) = uStack_118;
      *(undefined4 *)(puVar11 + 0x34) = uStack_114;
      *(undefined4 *)(puVar11 + 0x38) = uVar3;
      *(undefined4 *)(puVar11 + 0x3c) = uVar4;
      uStack_108 = 0;
      *(undefined8 *)(puVar11 + 0x40) = uVar12;
      *param_1 = (long)puVar11;
      param_1[5] = lStack_160;
      param_1[6] = 0;
      param_1[7] = (long)&UNK_0a328850;
      if (pcStack_128 != (code *)0x0) {
        (*pcStack_128)(auStack_140);
      }
      goto LAB_0a32a8cd;
    }
    if (pcStack_168 != (code *)0x0) {
      if (lStack_170 == 0) {
        (*pcStack_168)(0,apppppuStack_1a0,0);
      }
      ppppppuVar14 = apppppuStack_1a0;
      if (cStack_17c != '\x02') {
        ppppppuVar14 = (undefined8 ******)apppppuStack_1a0[0];
      }
      lVar6 = func_0x0488e200(lVar6,lStack_170,0x4e67fd3e,ppppppuVar14);
      if (lVar6 != 0) goto LAB_0a32a978;
    }
  }
LAB_0a32a895:
  param_1[2] = (long)&UNK_0488e0b0;
  *(undefined4 *)(param_1 + 4) = 0x48b5725f;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[5] = lStack_178;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0a32a8cd:
  if ((code *)CONCAT44(uStack_184,uStack_188) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_184,uStack_188))(apppppuStack_1a0);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x14030d8  PlaceJigsawError
 */
