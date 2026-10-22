/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa3279c0 (ELF vaddr 0xa2279c0)
 * Label: string:PlaceJigsawError
 * Body:  [[0a3279c0, 0a328320] [0a3283a6, 0a3283b8] [0a328408, 0a32842c]]
 * Ghidra: FUN_0a3279c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0a3279c0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                   int param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 ******ppppppuVar14;
  long *plVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte bVar18;
  ulong uVar19;
  byte bVar20;
  ulong uVar21;
  byte bVar22;
  byte bVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_210;
  ulong uStack_208;
  long lStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  byte bStack_1d8;
  undefined4 uStack_1d7;
  undefined4 uStack_1d3;
  undefined4 uStack_1cf;
  undefined4 uStack_1cb;
  undefined1 uStack_1c7;
  undefined6 uStack_1c6;
  undefined8 *****apppppuStack_1c0 [2];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  char cStack_19c;
  long lStack_198;
  long lStack_190;
  code *pcStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [8];
  undefined8 auStack_168 [2];
  code *pcStack_158;
  code *pcStack_150;
  undefined4 uStack_148;
  char cStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int iStack_120;
  code *pcStack_110;
  char cStack_104;
  long lStack_f0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_5 != 4) {
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
  apppppuStack_1c0[0] = (undefined8 ******)0x0;
  uStack_1b0 = *(undefined4 *)(param_3 + 2);
  uStack_1ac = *(undefined4 *)((long)param_3 + 0x14);
  uStack_1a8 = *(undefined4 *)(param_3 + 3);
  uStack_1a4 = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_1a0 = *(int *)(param_3 + 4);
  cStack_19c = *(char *)((long)param_3 + 0x24);
  if (cStack_19c != '\0') {
    if (cStack_19c == '\x02') {
      (*(code *)param_3[2])(5,param_3,apppppuStack_1c0);
    }
    else {
      apppppuStack_1c0[0] = (undefined8 *****)*param_3;
      *param_3 = 0;
    }
  }
  lVar7 = param_3[5];
  lStack_190 = param_3[6];
  param_3[6] = 0;
  pcStack_188 = (code *)param_3[7];
  param_3[7] = 0;
  lStack_198 = lVar7;
  if (cStack_19c != '\x04') {
    if ((iStack_1a0 == 0x4e67fd3e) &&
       (cStack_19c == '\x02' || (undefined8 ******)apppppuStack_1c0[0] != (undefined8 ******)0x0)) {
LAB_0a327b6d:
      if (*(int *)(param_4 + 4) != -0x5db38b49) {
        func_0x0488e290(&uStack_128,param_4);
        lVar7 = lStack_f0;
        if ((lStack_f0 != 0) && ((byte)(cStack_104 - 1U) < 2)) {
          func_0x048b0900(param_4,&uStack_128);
        }
        if (pcStack_110 != (code *)0x0) {
          (*pcStack_110)(&uStack_128);
        }
        if (lVar7 == 0) goto LAB_0a327a99;
      }
      plVar13 = param_4 + 8;
      if (*(int *)(param_4 + 0xc) != -0x7dcd93b3) {
        func_0x0912ae90(&uStack_128,plVar13);
        lVar7 = lStack_f0;
        if ((lStack_f0 != 0) && ((byte)(cStack_104 - 1U) < 2)) {
          func_0x048b0900(plVar13,&uStack_128);
        }
        if (pcStack_110 != (code *)0x0) {
          (*pcStack_110)(&uStack_128);
        }
        if (lVar7 == 0) goto LAB_0a327a99;
      }
      puVar1 = param_4 + 0x10;
      if (*(int *)(param_4 + 0x14) != 0x2b3c5682) {
        func_0x05da2d20(&uStack_128,puVar1);
        lVar7 = lStack_f0;
        if ((lStack_f0 != 0) && ((byte)(cStack_104 - 1U) < 2)) {
          func_0x048b0900(puVar1,&uStack_128);
        }
        if (pcStack_110 != (code *)0x0) {
          (*pcStack_110)(&uStack_128);
        }
        if (lVar7 == 0) goto LAB_0a327a99;
      }
      pbVar2 = (byte *)(param_4 + 0x18);
      if (*(int *)(param_4 + 0x1c) != 0x7391145c) {
        func_0x0a3285b0(&uStack_128,pbVar2);
        if ((lStack_f0 != 0) && ((byte)(cStack_104 - 1U) < 2)) {
          func_0x048b0900(pbVar2,&uStack_128);
        }
        if (pcStack_110 != (code *)0x0) {
          (*pcStack_110)(&uStack_128);
        }
        if (lStack_f0 == 0) goto LAB_0a327a99;
      }
      lStack_180 = lStack_198;
      cVar6 = *(char *)((long)param_4 + 0x24);
      puVar16 = (undefined8 *)*param_4;
      puStack_178 = puVar16;
      if (cVar6 == '\x02') {
        puStack_178 = param_4;
      }
      if (puStack_178 == (undefined8 *)0x0 || *(int *)(param_4 + 4) != -0x5db38b49) {
        uVar12 = param_4[5];
        lVar7 = param_4[6];
        if (lVar7 == 0) {
          (*(code *)param_4[7])(0,param_4,0);
          lVar7 = param_4[6];
          cVar6 = *(char *)((long)param_4 + 0x24);
          puVar16 = (undefined8 *)*param_4;
        }
        if (cVar6 == '\x02') {
          puVar16 = param_4;
        }
        puStack_178 = (undefined8 *)func_0x0488e200(uVar12,lVar7,0xa24c74b7,puVar16);
      }
      cVar6 = *(char *)((long)param_4 + 100);
      plVar15 = (long *)param_4[8];
      plVar8 = plVar15;
      if (cVar6 == '\x02') {
        plVar8 = plVar13;
      }
      if (plVar8 == (long *)0x0 || *(int *)(param_4 + 0xc) != -0x7dcd93b3) {
        uVar12 = param_4[0xd];
        lVar7 = param_4[0xe];
        if (lVar7 == 0) {
          (*(code *)param_4[0xf])(0,plVar13,0);
          lVar7 = param_4[0xe];
          cVar6 = *(char *)((long)param_4 + 100);
          plVar15 = (long *)param_4[8];
        }
        if (cVar6 == '\x02') {
          plVar15 = plVar13;
        }
        plVar8 = (long *)func_0x0488e200(uVar12,lVar7,0x82326c4d,plVar15);
      }
      cVar6 = *(char *)((long)param_4 + 0xa4);
      puVar16 = (undefined8 *)param_4[0x10];
      puVar9 = puVar16;
      if (cVar6 == '\x02') {
        puVar9 = puVar1;
      }
      if (puVar9 == (undefined8 *)0x0 || *(int *)(param_4 + 0x14) != 0x2b3c5682) {
        uVar12 = param_4[0x15];
        lVar7 = param_4[0x16];
        if (lVar7 == 0) {
          (*(code *)param_4[0x17])(0,puVar1,0);
          lVar7 = param_4[0x16];
          cVar6 = *(char *)((long)param_4 + 0xa4);
          puVar16 = (undefined8 *)param_4[0x10];
        }
        if (cVar6 == '\x02') {
          puVar16 = puVar1;
        }
        puVar9 = (undefined8 *)func_0x0488e200(uVar12,lVar7,0x2b3c5682,puVar16);
      }
      cVar6 = *(char *)((long)param_4 + 0xe4);
      pbVar17 = (byte *)param_4[0x18];
      pbVar10 = pbVar17;
      if (cVar6 == '\x02') {
        pbVar10 = pbVar2;
      }
      if (pbVar10 == (byte *)0x0 || *(int *)(param_4 + 0x1c) != 0x7391145c) {
        uVar12 = param_4[0x1d];
        lVar7 = param_4[0x1e];
        if (lVar7 == 0) {
          (*(code *)param_4[0x1f])(0,pbVar2,0);
          lVar7 = param_4[0x1e];
          cVar6 = *(char *)((long)param_4 + 0xe4);
          pbVar17 = (byte *)param_4[0x18];
        }
        if (cVar6 == '\x02') {
          pbVar17 = pbVar2;
        }
        pbVar10 = (byte *)func_0x0488e200(uVar12,lVar7,0x7391145c,pbVar17);
      }
      if (pbVar10[8] == 1) {
        bVar18 = 0;
        if (pbVar10[7] != 0) {
          bVar18 = pbVar10[6];
        }
        bVar23 = *pbVar10 & pbVar10[1];
        bVar20 = pbVar10[2] & pbVar10[3];
        bVar22 = pbVar10[5] ^ 1 | pbVar10[4];
      }
      else {
        bVar18 = 0;
        bVar22 = 1;
        bVar20 = 0;
        bVar23 = 0;
      }
      uVar3 = *(undefined4 *)(puVar9 + 1);
      uStack_58 = *puVar9;
      uStack_50 = 0;
      uStack_48 = func_0x0eee4390();
      fVar24 = (float)func_0x0eee4390(uStack_58._4_4_);
      uStack_128 = CONCAT44((int)fVar24,(int)(float)uStack_48);
      fVar24 = (float)func_0x0eee4390(uVar3);
      iStack_120 = (int)fVar24;
      if (*(int *)((undefined8 *)*plVar8 + 1) == (int)plVar8[1]) {
        uVar12 = *(undefined8 *)*plVar8;
      }
      else {
        uVar12 = 0;
      }
      lVar7 = func_0x08d4ed60(uVar12,plVar8[2],(int)plVar8[3]);
      func_0x09cafa60(&uStack_78,puStack_178,&uStack_128,*(undefined8 *)(lVar7 + 0x40),bVar23,bVar20
                      ,bVar22 & 1,bVar18);
      if (cStack_60 == '\x01') {
        func_0x0a2ad7b0(auStack_170,&uStack_78);
      }
      else {
        auVar25 = func_0x0a2ad860(uStack_78,uStack_70);
        uVar19 = auVar25._8_8_;
        if (0xfffffffffffffff7 < uVar19) {
          uVar12 = func_0x04882e30();
          func_0x0412a280(uVar19,uStack_210 & 0xfffffffffffffffe);
          if ((code *)CONCAT44(uStack_1a4,uStack_1a8) != (code *)0x0) {
            (*(code *)CONCAT44(uStack_1a4,uStack_1a8))(apppppuStack_1c0);
          }
          uVar12 = _Unwind_Resume(uVar12);
          func_0x04882e20(uVar12);
          pcVar4 = (code *)swi(3);
          plVar13 = (long *)(*pcVar4)();
          return plVar13;
        }
        if (uVar19 < 0x17) {
          uStack_210 = CONCAT71(uStack_210._1_7_,auVar25[8] * '\x02');
          lVar7 = (long)&uStack_210 + 1;
          if (uVar19 != 0) goto LAB_0a3280d0;
        }
        else {
          uVar21 = 0x1a;
          if ((uVar19 | 7) != 0x17) {
            uVar21 = (uVar19 | 7) + 1;
          }
          lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
          if (lVar7 == 0) {
            func_0x0eec74c0(uVar21,0);
          }
          uStack_210 = uVar21 | 1;
          uStack_208 = uVar19;
          lStack_200 = lVar7;
LAB_0a3280d0:
          func_0x0eee2ee0(lVar7,auVar25._0_8_,uVar19);
        }
        uVar21 = uStack_210;
        *(undefined1 *)(lVar7 + uVar19) = 0;
        if ((uStack_210 & 1) == 0) {
          lStack_1e8 = lStack_200;
          uStack_1f8 = uStack_210;
          uStack_1f0 = uStack_208;
        }
        else {
          func_0x0412e5e0(&uStack_1f8,lStack_200,uStack_208);
        }
        bStack_1d8 = 0x20;
        uStack_1d7 = _DAT_014030d8;
        uStack_1d3 = _UNK_014030dc;
        uStack_1cf = _UNK_014030e0;
        uStack_1cb = _UNK_014030e4;
        uStack_1c7 = 0;
        func_0x0d858ce0(&uStack_128,&bStack_1d8,&uStack_1f8);
        if ((bStack_1d8 & 1) != 0) {
          func_0x0412a280(CONCAT62(uStack_1c6,CONCAT11(uStack_1c7,uStack_1cb._3_1_)),
                          CONCAT35((undefined3)uStack_1d3,CONCAT41(uStack_1d7,bStack_1d8)) &
                          0xfffffffffffffffe);
        }
        auStack_170[0] = 1;
        func_0x0a32c7d0(auStack_168,&uStack_128);
        func_0x048fb670(&uStack_128);
        if ((uStack_1f8 & 1) != 0) {
          func_0x0412a280(lStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
        }
        if ((uVar21 & 1) != 0) {
          func_0x0412a280(lStack_200,uStack_210 & 0xfffffffffffffffe);
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
      uVar12 = auStack_168[0];
      *puVar11 = auStack_170[0];
      *(undefined8 *)(puVar11 + 8) = 0;
      *(code **)(puVar11 + 0x18) = pcStack_158;
      *(code **)(puVar11 + 0x20) = pcStack_150;
      *(undefined4 *)(puVar11 + 0x28) = uStack_148;
      puVar11[0x2c] = cStack_144;
      if (cStack_144 != '\0') {
        if (cStack_144 == '\x02') {
          (*pcStack_158)(5,auStack_168);
        }
        else {
          auStack_168[0] = 0;
          *(undefined8 *)(puVar11 + 8) = uVar12;
        }
      }
      uVar12 = uStack_130;
      uVar3 = (undefined4)uStack_138;
      uVar5 = uStack_138._4_4_;
      uStack_138 = 0;
      *(undefined4 *)(puVar11 + 0x30) = uStack_140;
      *(undefined4 *)(puVar11 + 0x34) = uStack_13c;
      *(undefined4 *)(puVar11 + 0x38) = uVar3;
      *(undefined4 *)(puVar11 + 0x3c) = uVar5;
      uStack_130 = 0;
      *(undefined8 *)(puVar11 + 0x40) = uVar12;
      *param_1 = (long)puVar11;
      param_1[5] = lStack_180;
      param_1[6] = 0;
      param_1[7] = (long)&UNK_0a328850;
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(auStack_168);
      }
      goto LAB_0a327ad1;
    }
    if (pcStack_188 != (code *)0x0) {
      if (lStack_190 == 0) {
        (*pcStack_188)(0,apppppuStack_1c0,0);
      }
      ppppppuVar14 = apppppuStack_1c0;
      if (cStack_19c != '\x02') {
        ppppppuVar14 = (undefined8 ******)apppppuStack_1c0[0];
      }
      lVar7 = func_0x0488e200(lVar7,lStack_190,0x4e67fd3e,ppppppuVar14);
      if (lVar7 != 0) goto LAB_0a327b6d;
    }
  }
LAB_0a327a99:
  param_1[2] = (long)&UNK_0488e0b0;
  *(undefined4 *)(param_1 + 4) = 0x48b5725f;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[5] = lStack_198;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0a327ad1:
  if ((code *)CONCAT44(uStack_1a4,uStack_1a8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_1a4,uStack_1a8))(apppppuStack_1c0);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x14030d8  PlaceJigsawError
 */
