/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb0da5a0 (ELF vaddr 0xafda5a0)
 * Label: caller-of-callee
 * Body:  [[0b0da5a0, 0b0db970] [0b0db980, 0b0dba11] [0b0dba20, 0b0de881] [0b0deda5, 0b0dedd9] [0b0dede6, 0b0dee2f]]
 * Ghidra: FUN_0b0da5a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b0da5a0(undefined8 *param_1)

{
  long **pplVar1;
  long **pplVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ushort uVar10;
  char cVar11;
  long *plVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long lVar15;
  long ****pppplVar16;
  ulong uVar17;
  undefined8 uVar18;
  long ***ppplVar19;
  long ***ppplVar20;
  long ***ppplVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 *puVar24;
  long ***ppplStack_3a8;
  long **pplStack_3a0;
  long **pplStack_398;
  long ***ppplStack_390;
  long **pplStack_388;
  long **pplStack_380;
  long ***ppplStack_378;
  long ***ppplStack_370;
  long ***ppplStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  undefined2 uStack_348;
  long ***ppplStack_338;
  undefined8 *puStack_330;
  short sStack_328;
  short sStack_326;
  short sStack_324;
  undefined2 uStack_322;
  long **pplStack_320;
  long **pplStack_318;
  short sStack_310;
  short sStack_30e;
  short sStack_30c;
  undefined2 uStack_30a;
  long **pplStack_308;
  long **pplStack_300;
  short sStack_2f8;
  short sStack_2f6;
  short sStack_2f4;
  undefined2 uStack_2f2;
  long **pplStack_2f0;
  long **pplStack_2e8;
  long ***ppplStack_2e0;
  long **pplStack_2d8;
  long **pplStack_2d0;
  long **pplStack_2c8;
  long **pplStack_2c0;
  long ***ppplStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined2 uStack_288;
  long ***ppplStack_278;
  long **pplStack_270;
  long **pplStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  ulong uStack_258;
  ulong uStack_250;
  undefined2 uStack_248;
  long ****pppplStack_238;
  long ***ppplStack_230;
  char *pcStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long ****pppplStack_218;
  long **pplStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 *puStack_200;
  long **pplStack_1f0;
  long **pplStack_1e8;
  undefined8 uStack_1b8;
  undefined1 uStack_1a8;
  undefined2 uStack_1a6;
  undefined1 uStack_1a4;
  long ***ppplStack_198;
  long ***ppplStack_190;
  char *pcStack_188;
  undefined8 uStack_180;
  long **pplStack_178;
  undefined8 uStack_170;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  long **pplStack_150;
  long **pplStack_148;
  undefined8 uStack_118;
  undefined1 uStack_108;
  undefined2 uStack_106;
  undefined1 uStack_104;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  long **pplStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  undefined8 uStack_68;
  undefined1 uStack_58;
  undefined2 uStack_56;
  undefined1 uStack_54;
  long *plStack_48;
  long **pplStack_40;
  undefined8 *puStack_38;
  
  func_0x05d54750(&sStack_328,&UNK_0f299a10);
  puVar24 = (undefined8 *)param_1[7];
  ppplStack_3a8 =
       (long ***)CONCAT26(uStack_322,CONCAT24(sStack_324,CONCAT22(sStack_326,sStack_328)));
  if (*(char *)((long)puVar24 + 6) == '\0') {
    *puVar24 = ppplStack_3a8;
    if ((puVar24[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar24[1] & 0xff00ffffffffffff) - 8);
    }
    puVar24[1] = 0;
    ppplVar19 = (long ***)pplStack_320;
    if (((ulong)pplStack_320 & 0x80000000000000) != 0) {
      uVar22 = (ulong)pplStack_320 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar22 - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar24[1] = ppplVar19;
    if ((puVar24[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar24[2] & 0xff00ffffffffffff) - 8);
    }
    puVar24[2] = 0;
    ppplVar19 = (long ***)pplStack_318;
    if (((ulong)pplStack_318 & 0x80000000000000) != 0) {
      uVar22 = (ulong)pplStack_318 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar22 - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar24[2] = ppplVar19;
    ppplStack_3a8 =
         (long ***)CONCAT26(uStack_322,CONCAT24(sStack_324,CONCAT22(sStack_326,sStack_328)));
  }
  puStack_38 = (undefined8 *)*param_1;
  pplStack_2c0 = (long **)CONCAT71(pplStack_2c0._1_7_,*(undefined1 *)((long)param_1 + 0x94));
  pplStack_3a0 = pplStack_320;
  if (((ulong)pplStack_320 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_320 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    pplStack_3a0 = (long **)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplStack_398 = (long **)0x0;
  ppplVar19 = (long ***)pplStack_318;
  if (((ulong)pplStack_318 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_318 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  puStack_330 = param_1 + 8;
  ppplVar20 = (long ***)param_1[9];
  uVar22 = (ulong)ppplVar20 & 0x80000000000000;
  uVar10 = (ushort)((ulong)ppplVar20 >> 0x30);
  pplStack_398 = (long **)ppplVar19;
  if (uVar22 == 0) {
    if (((ulong)ppplVar20 & 0x7f000000000000) == 0) goto LAB_0b0da98b;
    uVar17 = (ulong)(uVar10 & 0x7f);
LAB_0b0da94f:
    if ((((uVar17 != 4) || (*(int *)((ulong)ppplVar20 & 0xff00ffffffffffff) != 0x61746562)) ||
        (*(short *)(param_1 + 8) != 9999)) ||
       ((*(short *)((long)param_1 + 0x42) != 9999 || (*(short *)((long)param_1 + 0x44) != 9999))))
    goto LAB_0b0da98b;
LAB_0b0dabf8:
    if (uVar22 == 0) {
      if (((ulong)ppplVar20 & 0x7f000000000000) != 0) {
        uVar17 = (ulong)(uVar10 & 0x7f);
LAB_0b0dac2f:
        uVar18 = 3;
        if ((((uVar17 == 4) &&
             (piVar23 = (int *)((ulong)ppplVar20 & 0xff00ffffffffffff), *piVar23 == 0x61746562)) &&
            (*(short *)(param_1 + 8) == 9999)) &&
           ((*(short *)((long)param_1 + 0x42) == 9999 && (*(short *)((long)param_1 + 0x44) == 9999))
           )) {
          ppplStack_3a8 = (long ***)*puStack_330;
          if (((ulong)pplStack_3a0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pplStack_3a0 & 0xff00ffffffffffff) - 8);
            ppplVar20 = (long ***)param_1[9];
            piVar23 = (int *)((ulong)ppplVar20 & 0xff00ffffffffffff);
            uVar22 = (ulong)ppplVar20 & 0x80000000000000;
          }
          pplStack_3a0 = (long **)0x0;
          if (uVar22 != 0) {
            lVar4 = *(long *)(piVar23 + -2);
            lVar15 = lVar4 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
            if (lVar15 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar15,8);
            }
            *plVar12 = lVar4;
            func_0x0eee2f00(plVar12 + 1,piVar23,lVar4);
            *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
            ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          pplStack_3a0 = (long **)ppplVar20;
          if (((ulong)pplStack_398 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pplStack_398 & 0xff00ffffffffffff) - 8);
          }
          pplStack_398 = (long **)0x0;
          ppplVar19 = (long ***)param_1[10];
          uVar18 = 3;
          if (((ulong)ppplVar19 & 0x80000000000000) != 0) {
            lVar4 = *(long *)(((ulong)ppplVar19 & 0xff00ffffffffffff) - 8);
            lVar15 = lVar4 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8,3);
            if (lVar15 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar15,8);
            }
            *plVar12 = lVar4;
            func_0x0eee2f00(plVar12 + 1,(ulong)ppplVar19 & 0xff00ffffffffffff,lVar4);
            *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
            uVar18 = 3;
            ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
        }
        goto LAB_0b0dae57;
      }
    }
    else {
      uVar17 = *(ulong *)(((ulong)ppplVar20 & 0xff00ffffffffffff) - 8);
      if (uVar17 != 0) goto LAB_0b0dac2f;
    }
    uVar18 = 3;
  }
  else {
    uVar17 = *(ulong *)(((ulong)ppplVar20 & 0xff00ffffffffffff) - 8);
    if (uVar17 != 0) goto LAB_0b0da94f;
LAB_0b0da98b:
    if (((ulong)pplStack_320 & 0x80000000000000) != 0) {
      uVar17 = *(ulong *)(((ulong)pplStack_320 & 0xff00ffffffffffff) - 8);
      if (uVar17 != 0) goto LAB_0b0da9d4;
      goto LAB_0b0dabf8;
    }
    if (((ulong)pplStack_320 & 0x7f000000000000) == 0) goto LAB_0b0dabf8;
    uVar17 = (ulong)((ushort)((ulong)pplStack_320 >> 0x30) & 0x7f);
LAB_0b0da9d4:
    if (((uVar17 != 4) || (*(int *)((ulong)pplStack_320 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_328 != 9999 || ((sStack_326 != 9999 || (sStack_324 != 9999)))))) goto LAB_0b0dabf8;
    puVar24 = (undefined8 *)param_1[1];
    ppplStack_3a8 = (long ***)*puVar24;
    if (((ulong)pplStack_3a0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pplStack_3a0 & 0xff00ffffffffffff) - 8);
    }
    pplStack_3a0 = (long **)0x0;
    ppplVar19 = (long ***)puVar24[1];
    if (((ulong)ppplVar19 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)ppplVar19 & 0xff00ffffffffffff) - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,(ulong)ppplVar19 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pplStack_3a0 = (long **)ppplVar19;
    if (((ulong)pplStack_398 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pplStack_398 & 0xff00ffffffffffff) - 8);
    }
    pplStack_398 = (long **)0x0;
    ppplVar19 = (long ***)puVar24[2];
    uVar18 = 1;
    if (((ulong)ppplVar19 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)ppplVar19 & 0xff00ffffffffffff) - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8,1);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,(ulong)ppplVar19 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      uVar18 = 1;
      ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0b0dae57:
  pplStack_398 = (long **)ppplVar19;
  func_0x0d6b3300(&ppplStack_378,puStack_330,&ppplStack_3a8,uVar18);
  if ((param_1[5] == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_014a2320),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar12 = param_1 + 5;
  ppplVar19 = (long ***)(param_1 + 2);
  if (((char *)param_1[2] == (char *)0x0) || (*(char *)param_1[2] != '\x01')) {
    cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_014a2320);
    if (cVar11 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppplVar20 = (long ***)*plVar12;
    if ((*ppplVar19 == (long **)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    ppplVar20 = (long ***)*plVar12;
  }
  if ((*(char *)*ppplVar19 == '\0') &&
     (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  ppplStack_338 = (long ***)param_1[4];
  pppplVar13 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppplVar13 == (long ****)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppplStack_278 = (long ***)param_1[8];
  uVar22 = param_1[9];
  pplStack_2c8 = (long **)ppplVar19;
  ppplStack_f0 = ppplStack_278;
  plStack_48 = plVar12;
  pplStack_40 = (long **)ppplVar20;
  if ((uVar22 & 0x80000000000000) != 0) {
    lVar4 = *(long *)((uVar22 & 0xff00ffffffffffff) - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22 & 0xff00ffffffffffff,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    uVar22 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  pplStack_268 = (long **)0x0;
  uStack_2a8 = param_1[10];
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    lVar4 = *(long *)((uStack_2a8 & 0xff00ffffffffffff) - 8);
    lVar15 = lVar4 + 9;
    pplStack_270 = (long **)uVar22;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uStack_2a8 & 0xff00ffffffffffff,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    uStack_2a8 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  pplStack_210 = (long **)uStack_350;
  pppplStack_218 = (long ****)uStack_358;
  pcStack_228 = (char *)ppplStack_368;
  ppplStack_230 = ppplStack_370;
  uStack_168 = uStack_348;
  uVar3 = *(undefined2 *)((long)param_1 + 0x92);
  pplStack_270 = (long **)0x0;
  pplStack_268 = (long **)0x0;
  ppplStack_198 = ppplStack_378;
  ppplStack_370 = (long ***)0x0;
  pppplStack_238 = (long ****)ppplStack_378;
  ppplStack_190 = (long ***)0x0;
  pcStack_188 = (char *)0x0;
  ppplStack_368 = (long ***)0x0;
  uStack_180 = uStack_360;
  uStack_220 = (undefined4)uStack_360;
  uStack_21c = uStack_360._4_4_;
  pplStack_178 = (long **)0x0;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_170 = (long ***)0x0;
  uStack_208 = CONCAT22(uStack_208._2_2_,uStack_348);
  ppplStack_2b8 = ppplStack_f0;
  uStack_2b0 = uVar22;
  func_0x0d6a8a30(pppplVar13,ppplStack_338,&ppplStack_2b8,&pppplStack_238);
  if (((ulong)pplStack_210 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_210 & 0xff00ffffffffffff) - 8);
  }
  pplStack_210 = (long **)0x0;
  if (((ulong)pppplStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_218 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_218 = (long ****)0x0;
  if (((ulong)pcStack_228 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_228 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_228 = (char *)0x0;
  if (((ulong)ppplStack_230 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_230 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_230 = (long ***)0x0;
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a8 = 0;
  if ((uStack_2b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b0 & 0xff00ffffffffffff) - 8);
  }
  *pppplVar13 = (long ***)&UNK_0f282a58;
  pppplVar13[0xe] = (long ***)pplStack_40;
  *(undefined2 *)(pppplVar13 + 0xf) = uVar3;
  *(undefined1 *)((long)pppplVar13 + 0x7a) = pplStack_2c0._0_1_;
  pppplStack_238 = pppplVar13;
  if ((uStack_350 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_350 & 0xff00ffffffffffff) - 8);
  }
  puVar24 = puStack_38;
  uStack_350 = 0;
  if ((uStack_358 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_358 & 0xff00ffffffffffff) - 8);
  }
  uStack_358 = 0;
  if (((ulong)ppplStack_368 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_368 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_368 = (long ***)0x0;
  if (((ulong)ppplStack_370 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_370 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)pplStack_398 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_398 & 0xff00ffffffffffff) - 8);
  }
  pplStack_398 = (long **)0x0;
  if (((ulong)pplStack_3a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_3a0 & 0xff00ffffffffffff) - 8);
  }
  if (pppplStack_238 != (long ****)0x0) {
    plVar12 = (long *)*puVar24;
    plVar5 = (long *)puVar24[1];
    while ((plVar12 != plVar5 &&
           (cVar11 = func_0x04fa7a10(*plVar12 + 0x20,pppplStack_238 + 7), cVar11 != '\0'))) {
      plVar12 = plVar12 + 1;
    }
    func_0x0d6af860(puVar24,plVar12,&pppplStack_238);
    pppplVar13 = pppplStack_238;
    pppplStack_238 = (long ****)0x0;
    if (pppplVar13 != (long ****)0x0) {
      (*(code *)(*pppplVar13)[1])();
    }
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (((ulong)pplStack_320 & 0x80000000000000) == 0) {
    if (((ulong)pplStack_320 & 0x7f000000000000) == 0) goto LAB_0b0db5f6;
    uVar22 = (ulong)((ushort)((ulong)pplStack_320 >> 0x30) & 0x7f);
LAB_0b0db5b4:
    if ((((uVar22 != 4) || (*(int *)((ulong)pplStack_320 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_328 != 9999)) || ((sStack_326 != 9999 || (sStack_324 != 9999)))) goto LAB_0b0db5f6;
  }
  else {
    uVar22 = *(ulong *)(((ulong)pplStack_320 & 0xff00ffffffffffff) - 8);
    if (uVar22 != 0) goto LAB_0b0db5b4;
LAB_0b0db5f6:
    uVar18 = *param_1;
    if ((((char *)param_1[2] == (char *)0x0) || (*(char *)param_1[2] == '\0')) &&
       (cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_01383f11),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((param_1[6] == 0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_01383f11),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppplVar19 = (long ***)param_1[6];
    if ((param_1[2] == 0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*pplStack_2c8 == '\0') &&
       (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppplVar20 = (long ***)param_1[4];
    pppplVar13 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (pppplVar13 == (long ****)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(pppplVar13,puStack_330,&sStack_328);
    pppplVar16 = pppplVar13 + 8;
    pppplVar13[8] = (long ***)0x0;
    pppplVar13[9] = (long ***)0x0;
    pppplVar13[10] = (long ***)0x0;
    ppplVar21 = (long ***)ppplVar20[1];
    ppplVar6 = (long ***)ppplVar20[2];
    if (ppplVar6 == (long ***)0x0) {
      pppplVar13[8] = ppplVar21;
      pppplVar13[9] = (long ***)0x0;
    }
    else {
      LOCK();
      ppplVar6[1] = (long **)((long)ppplVar6[1] + 1);
      UNLOCK();
      ppplVar7 = pppplVar13[9];
      pppplVar13[8] = ppplVar21;
      pppplVar13[9] = ppplVar6;
      if (ppplVar7 != (long ***)0x0) {
        LOCK();
        ppplVar21 = ppplVar7 + 1;
        pplVar1 = *ppplVar21;
        *ppplVar21 = (long **)((long)*ppplVar21 + -1);
        UNLOCK();
        if (pplVar1 == (long **)0x0) {
          (*(code *)(*ppplVar7)[2])(ppplVar7);
          func_0x0412c2d0(ppplVar7);
        }
        ppplVar21 = *pppplVar16;
      }
    }
    if ((ppplVar21 == (long ***)0x0) || (pppplVar13[10] = ppplVar20, *(char *)ppplVar21 == '\0'))
    goto LAB_0b0de878;
    pppplVar13[0xe] = (long ***)0x0;
    pppplVar13[0xf] = (long ***)0x0;
    pppplVar13[0xc] = (long ***)0x0;
    pppplVar13[0xd] = (long ***)0x0;
    *(undefined4 *)(pppplVar13 + 0x10) = 0x3f800000;
    *(undefined1 *)(pppplVar13 + 0x12) = 0;
    *(undefined1 *)(pppplVar13 + 0x24) = 0;
    *pppplVar13 = (long ***)&UNK_0f282b40;
    pppplVar13[0x2a] = (long ***)0x0;
    pppplVar13[0x30] = (long ***)0x0;
    pppplVar13[0x32] = ppplVar19;
    if ((_DAT_0f6b1120 == 0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppplStack_378 = (long ***)0x0;
    ppplStack_370 = (long ***)0x0;
    ppplStack_368 = (long ***)0x0;
    pppplStack_238 = &ppplStack_378;
    ppplStack_230 = (long ***)((ulong)ppplStack_230 & 0xffffffffffffff00);
    pppplVar14 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppplVar14 == (long ****)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    ppplStack_370 = (long ***)(pppplVar14 + 3);
    *pppplVar14 = (long ***)0x656e6f706d6f6320;
    pppplVar14[1] = (long ***)0x70756f72675f746e;
    pppplVar14[2] = (long ***)0x73;
    pppplStack_238 = (long ****)&UNK_0f281470;
    pppplStack_218 = (long ****)&pppplStack_238;
    ppplStack_198 = (long ***)0x0;
    ppplStack_190 = (long ***)0x0;
    pcStack_188 = (char *)0x0;
    ppplStack_2b8 = (long ***)0x0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    ppplStack_378 = (long ***)pppplVar14;
    ppplStack_368 = ppplStack_370;
    func_0x0d6ae430(pppplVar16,pppplStack_218,&ppplStack_378,&ppplStack_198);
    ppplVar19 = ppplStack_198;
    pppplVar16 = (long ****)ppplStack_190;
    if ((long ****)ppplStack_198 != (long ****)0x0) {
      for (; (long ****)ppplVar19 != pppplVar16; pppplVar16 = pppplVar16 + -3) {
        if (((ulong)pppplVar16[-3] & 1) != 0) {
          func_0x0412a280(pppplVar16[-1],(ulong)pppplVar16[-3] & 0xfffffffffffffffe);
        }
      }
      ppplStack_190 = ppplVar19;
      func_0x0412a280(ppplStack_198,(long)pcStack_188 - (long)ppplStack_198);
    }
    if ((long *****)pppplStack_218 == &pppplStack_238) {
      lVar15 = 0x20;
LAB_0b0db9f3:
      (**(code **)((long)*pppplStack_218 + lVar15))();
      pppplVar16 = (long ****)ppplStack_378;
    }
    else {
      lVar15 = 0x28;
      pppplVar16 = (long ****)ppplStack_378;
      if ((long *****)pppplStack_218 != (long *****)0x0) goto LAB_0b0db9f3;
    }
    ppplStack_378 = (long ***)pppplVar16;
    pppplVar14 = (long ****)ppplStack_370;
    if (pppplVar16 != (long ****)0x0) {
      for (; pppplVar16 != pppplVar14; pppplVar14 = pppplVar14 + -3) {
        if (((ulong)pppplVar14[-3] & 1) != 0) {
          func_0x0412a280(pppplVar14[-1],(ulong)pppplVar14[-3] & 0xfffffffffffffffe);
        }
      }
      ppplStack_370 = (long ***)pppplVar16;
      func_0x0412a280(ppplStack_378,(long)ppplStack_368 - (long)ppplStack_378);
    }
    pppplStack_238 = pppplVar13;
    func_0x0d6afb30(uVar18,&pppplStack_238);
    if (pppplStack_238 != (long ****)0x0) {
      (*(code *)(*pppplStack_238)[1])();
    }
  }
  ppplStack_e8 = (long ***)*param_1;
  ppplStack_e0 = (long ***)param_1[1];
  pcStack_d8 = (char *)param_1[2];
  uStack_d0 = param_1[3];
  *pplStack_2c8 = (long *)0x0;
  pplStack_2c8[1] = (long *)0x0;
  pplStack_c8 = (long **)param_1[4];
  param_1[4] = 0;
  puStack_b0 = (undefined8 *)plStack_48[2];
  uStack_c0 = (undefined4)*plStack_48;
  uStack_bc = *(undefined4 *)((long)plStack_48 + 4);
  uStack_b8 = (undefined4)plStack_48[1];
  uStack_b4 = *(undefined4 *)((long)plStack_48 + 0xc);
  uStack_a8 = (long ****)CONCAT26(uStack_322,CONCAT24(sStack_324,CONCAT22(sStack_326,sStack_328)));
  pplStack_a0 = (long **)0x0;
  ppplVar19 = (long ***)pplStack_320;
  if (((ulong)pplStack_320 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_320 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplStack_98 = (long **)0x0;
  ppplVar20 = (long ***)pplStack_318;
  pplStack_a0 = (long **)ppplVar19;
  if (((ulong)pplStack_318 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_318 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_68 = 0;
  uStack_58 = 1;
  uStack_56 = 0xfffc;
  uStack_54 = 1;
  pplStack_98 = (long **)ppplVar20;
  func_0x05d54750(&sStack_310,&UNK_0f299948);
  puVar24 = puStack_b0;
  ppplStack_390 =
       (long ***)CONCAT26(uStack_30a,CONCAT24(sStack_30c,CONCAT22(sStack_30e,sStack_310)));
  if (*(char *)((long)puStack_b0 + 6) == '\0') {
    *puStack_b0 = ppplStack_390;
    if ((puStack_b0[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puStack_b0[1] & 0xff00ffffffffffff) - 8);
    }
    puVar24[1] = 0;
    ppplVar19 = (long ***)pplStack_308;
    if (((ulong)pplStack_308 & 0x80000000000000) != 0) {
      uVar22 = (ulong)pplStack_308 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar22 - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar24[1] = ppplVar19;
    if ((puVar24[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar24[2] & 0xff00ffffffffffff) - 8);
    }
    puVar24[2] = 0;
    ppplVar19 = (long ***)pplStack_300;
    if (((ulong)pplStack_300 & 0x80000000000000) != 0) {
      uVar22 = (ulong)pplStack_300 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar22 - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar24[2] = ppplVar19;
    ppplStack_390 =
         (long ***)CONCAT26(uStack_30a,CONCAT24(sStack_30c,CONCAT22(sStack_30e,sStack_310)));
  }
  ppplVar19 = ppplStack_e8;
  puStack_330 = (undefined8 *)CONCAT71(puStack_330._1_7_,uStack_54);
  pplStack_388 = pplStack_308;
  if (((ulong)pplStack_308 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_308 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    pplStack_388 = (long **)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplStack_380 = (long **)0x0;
  ppplVar20 = (long ***)pplStack_300;
  if (((ulong)pplStack_300 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_300 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplVar21 = ppplStack_e0;
  uVar22 = (ulong)pplStack_a0 & 0x80000000000000;
  uVar10 = (ushort)((ulong)pplStack_a0 >> 0x30);
  pplStack_380 = (long **)ppplVar20;
  if (uVar22 == 0) {
    if (((ulong)pplStack_a0 & 0x7f000000000000) == 0) goto LAB_0b0dbfa7;
    uVar17 = (ulong)(uVar10 & 0x7f);
LAB_0b0dbf5f:
    if ((((uVar17 != 4) || (*(int *)((ulong)pplStack_a0 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_a8 != 9999)) || ((uStack_a8._2_2_ != 9999 || (uStack_a8._4_2_ != 9999))))
    goto LAB_0b0dbfa7;
LAB_0b0dc1cc:
    if (uVar22 == 0) {
      if (((ulong)pplStack_a0 & 0x7f000000000000) != 0) {
        uVar17 = (ulong)(uVar10 & 0x7f);
LAB_0b0dc203:
        uVar18 = 3;
        if ((((uVar17 == 4) &&
             (piVar23 = (int *)((ulong)pplStack_a0 & 0xff00ffffffffffff), *piVar23 == 0x61746562))
            && ((short)uStack_a8 == 9999)) &&
           ((uStack_a8._2_2_ == 9999 && (uStack_a8._4_2_ == 9999)))) {
          ppplStack_390 = (long ***)uStack_a8;
          if (((ulong)pplStack_388 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pplStack_388 & 0xff00ffffffffffff) - 8);
            piVar23 = (int *)((ulong)pplStack_a0 & 0xff00ffffffffffff);
            uVar22 = (ulong)pplStack_a0 & 0x80000000000000;
          }
          pplStack_388 = (long **)0x0;
          ppplVar20 = (long ***)pplStack_a0;
          if (uVar22 != 0) {
            lVar4 = *(long *)(piVar23 + -2);
            lVar15 = lVar4 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
            if (lVar15 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar15,8);
            }
            *plVar12 = lVar4;
            func_0x0eee2f00(plVar12 + 1,piVar23,lVar4);
            *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
            ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          pplStack_388 = (long **)ppplVar20;
          if (((ulong)pplStack_380 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pplStack_380 & 0xff00ffffffffffff) - 8);
          }
          pplStack_380 = (long **)0x0;
          uVar18 = 3;
          ppplVar20 = (long ***)pplStack_98;
          if (((ulong)pplStack_98 & 0x80000000000000) != 0) {
            uVar22 = (ulong)pplStack_98 & 0xff00ffffffffffff;
            lVar4 = *(long *)(uVar22 - 8);
            lVar15 = lVar4 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8,3);
            if (lVar15 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar15,8);
            }
            *plVar12 = lVar4;
            func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
            *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
            uVar18 = 3;
            ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
        }
        goto LAB_0b0dc400;
      }
    }
    else {
      uVar17 = *(ulong *)(((ulong)pplStack_a0 & 0xff00ffffffffffff) - 8);
      if (uVar17 != 0) goto LAB_0b0dc203;
    }
    uVar18 = 3;
  }
  else {
    uVar17 = *(ulong *)(((ulong)pplStack_a0 & 0xff00ffffffffffff) - 8);
    if (uVar17 != 0) goto LAB_0b0dbf5f;
LAB_0b0dbfa7:
    if (((ulong)pplStack_308 & 0x80000000000000) != 0) {
      uVar17 = *(ulong *)(((ulong)pplStack_308 & 0xff00ffffffffffff) - 8);
      if (uVar17 != 0) goto LAB_0b0dbff0;
      goto LAB_0b0dc1cc;
    }
    if (((ulong)pplStack_308 & 0x7f000000000000) == 0) goto LAB_0b0dc1cc;
    uVar17 = (ulong)((ushort)((ulong)pplStack_308 >> 0x30) & 0x7f);
LAB_0b0dbff0:
    if (((uVar17 != 4) || (*(int *)((ulong)pplStack_308 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_310 != 9999 || ((sStack_30e != 9999 || (sStack_30c != 9999)))))) goto LAB_0b0dc1cc;
    ppplStack_390 = (long ***)*ppplStack_e0;
    if (((ulong)pplStack_388 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pplStack_388 & 0xff00ffffffffffff) - 8);
    }
    pplStack_388 = (long **)0x0;
    ppplVar20 = (long ***)ppplVar21[1];
    if (((ulong)ppplVar20 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)ppplVar20 & 0xff00ffffffffffff) - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,(ulong)ppplVar20 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pplStack_388 = (long **)ppplVar20;
    if (((ulong)pplStack_380 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pplStack_380 & 0xff00ffffffffffff) - 8);
    }
    pplStack_380 = (long **)0x0;
    ppplVar20 = (long ***)ppplVar21[2];
    uVar18 = 1;
    if (((ulong)ppplVar20 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)ppplVar20 & 0xff00ffffffffffff) - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8,1);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,(ulong)ppplVar20 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      uVar18 = 1;
      ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0b0dc400:
  pplStack_380 = (long **)ppplVar20;
  func_0x0d6b3300(&ppplStack_2b8,&uStack_a8,&ppplStack_390,uVar18);
  if ((CONCAT44(uStack_bc,uStack_c0) == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_0124b9de),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_d8 == (char *)0x0) || (*pcStack_d8 != '\x01')) {
    cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_0124b9de);
    if (cVar11 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppplVar20 = (long ***)CONCAT44(uStack_bc,uStack_c0);
    if ((pcStack_d8 == (char *)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    ppplVar20 = (long ***)CONCAT44(uStack_bc,uStack_c0);
  }
  if ((*pcStack_d8 == '\0') &&
     (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pplVar1 = pplStack_c8;
  pppplVar13 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppplVar13 == (long ****)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppplStack_3a8 = (long ***)uStack_a8;
  pplStack_2c8 = pplVar1;
  ppplStack_338 = (long ***)uStack_a8;
  ppplVar21 = (long ***)pplStack_a0;
  pplStack_2c0 = (long **)ppplVar20;
  if (((ulong)pplStack_a0 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_a0 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar21 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplStack_398 = (long **)0x0;
  ppplVar20 = (long ***)pplStack_98;
  if (((ulong)pplStack_98 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_98 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    pplStack_3a0 = (long **)ppplVar21;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uVar3 = uStack_56;
  pplStack_210 = (long **)uStack_290;
  pppplStack_218 = (long ****)uStack_298;
  pcStack_228 = (char *)uStack_2a8;
  ppplStack_230 = (long ***)uStack_2b0;
  uStack_348 = uStack_288;
  pplStack_3a0 = (long **)0x0;
  pplStack_398 = (long **)0x0;
  ppplStack_378 = ppplStack_2b8;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  pppplStack_238 = (long ****)ppplStack_2b8;
  ppplStack_370 = (long ***)0x0;
  ppplStack_368 = (long ***)0x0;
  uStack_360 = uStack_2a0;
  uStack_220 = (undefined4)uStack_2a0;
  uStack_21c = uStack_2a0._4_4_;
  uStack_358 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_350 = 0;
  uStack_208 = CONCAT22(uStack_208._2_2_,uStack_288);
  ppplStack_278 = ppplStack_338;
  pplStack_270 = (long **)ppplVar21;
  pplStack_268 = (long **)ppplVar20;
  func_0x0d6a8a30(pppplVar13,pplStack_2c8,&ppplStack_278,&pppplStack_238);
  if (((ulong)pplStack_210 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_210 & 0xff00ffffffffffff) - 8);
  }
  pplStack_210 = (long **)0x0;
  if (((ulong)pppplStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppplStack_218 & 0xff00ffffffffffff) - 8);
  }
  pppplStack_218 = (long ****)0x0;
  if (((ulong)pcStack_228 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_228 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_228 = (char *)0x0;
  if (((ulong)ppplStack_230 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_230 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_230 = (long ***)0x0;
  if (((ulong)pplStack_268 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_268 & 0xff00ffffffffffff) - 8);
  }
  pplStack_268 = (long **)0x0;
  if (((ulong)pplStack_270 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_270 & 0xff00ffffffffffff) - 8);
  }
  *pppplVar13 = (long ***)&UNK_0f2828c0;
  pppplVar13[0xe] = (long ***)pplStack_2c0;
  *(undefined2 *)(pppplVar13 + 0xf) = uVar3;
  *(undefined1 *)((long)pppplVar13 + 0x7a) = puStack_330._0_1_;
  pppplStack_238 = pppplVar13;
  if ((uStack_290 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
  }
  uStack_290 = 0;
  if ((uStack_298 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_298 & 0xff00ffffffffffff) - 8);
  }
  uStack_298 = 0;
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a8 = 0;
  if ((uStack_2b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b0 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)pplStack_380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_380 & 0xff00ffffffffffff) - 8);
  }
  pplStack_380 = (long **)0x0;
  if (((ulong)pplStack_388 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_388 & 0xff00ffffffffffff) - 8);
  }
  if (pppplStack_238 != (long ****)0x0) {
    ppplVar20 = (long ***)*ppplVar19;
    ppplVar21 = (long ***)ppplVar19[1];
    while ((ppplVar20 != ppplVar21 &&
           (cVar11 = func_0x04fa7a10(*ppplVar20 + 4,pppplStack_238 + 7), cVar11 != '\0'))) {
      ppplVar20 = ppplVar20 + 1;
    }
    func_0x0d6af860(ppplVar19,ppplVar20,&pppplStack_238);
    pppplVar13 = pppplStack_238;
    pppplStack_238 = (long ****)0x0;
    if (pppplVar13 != (long ****)0x0) {
      (*(code *)(*pppplVar13)[1])();
    }
  }
  ppplVar19 = ppplStack_e8;
  uStack_58 = 0;
  if (((ulong)pplStack_308 & 0x80000000000000) == 0) {
    if (((ulong)pplStack_308 & 0x7f000000000000) == 0) goto LAB_0b0dcb82;
    uVar22 = (ulong)((ushort)((ulong)pplStack_308 >> 0x30) & 0x7f);
LAB_0b0dcb40:
    if ((((uVar22 != 4) || (*(int *)((ulong)pplStack_308 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_310 != 9999)) || ((sStack_30e != 9999 || (sStack_30c != 9999)))) goto LAB_0b0dcb82;
  }
  else {
    uVar22 = *(ulong *)(((ulong)pplStack_308 & 0xff00ffffffffffff) - 8);
    if (uVar22 != 0) goto LAB_0b0dcb40;
LAB_0b0dcb82:
    if (((pcStack_d8 == (char *)0x0) || (*pcStack_d8 == '\0')) &&
       (cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_0134e6da),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((CONCAT44(uStack_b4,uStack_b8) == 0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_0134e6da),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppplVar20 = (long ***)CONCAT44(uStack_b4,uStack_b8);
    if ((pcStack_d8 == (char *)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*pcStack_d8 == '\0') &&
       (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pplVar1 = pplStack_c8;
    pppplVar16 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (pppplVar16 == (long ****)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(pppplVar16,&uStack_a8,&sStack_310);
    pppplVar16[8] = (long ***)0x0;
    pppplVar16[9] = (long ***)0x0;
    pppplVar16[10] = (long ***)0x0;
    ppplVar21 = (long ***)pplVar1[1];
    ppplVar6 = (long ***)pplVar1[2];
    if (ppplVar6 == (long ***)0x0) {
      pppplVar16[8] = ppplVar21;
      pppplVar16[9] = (long ***)0x0;
    }
    else {
      LOCK();
      ppplVar6[1] = (long **)((long)ppplVar6[1] + 1);
      UNLOCK();
      ppplVar7 = pppplVar16[9];
      pppplVar16[8] = ppplVar21;
      pppplVar16[9] = ppplVar6;
      if (ppplVar7 != (long ***)0x0) {
        LOCK();
        ppplVar21 = ppplVar7 + 1;
        pplVar2 = *ppplVar21;
        *ppplVar21 = (long **)((long)*ppplVar21 + -1);
        UNLOCK();
        if (pplVar2 == (long **)0x0) {
          (*(code *)(*ppplVar7)[2])(ppplVar7);
          func_0x0412c2d0(ppplVar7);
        }
        ppplVar21 = pppplVar16[8];
      }
    }
    if ((ppplVar21 == (long ***)0x0) ||
       (pppplVar16[10] = (long ***)pplVar1, *(char *)ppplVar21 == '\0')) goto LAB_0b0de878;
    pppplVar16[0xe] = (long ***)0x0;
    pppplVar16[0xf] = (long ***)0x0;
    pppplVar16[0xc] = (long ***)0x0;
    pppplVar16[0xd] = (long ***)0x0;
    *(undefined4 *)(pppplVar16 + 0x10) = 0x3f800000;
    *(undefined1 *)(pppplVar16 + 0x12) = 0;
    *(undefined1 *)(pppplVar16 + 0x24) = 0;
    *pppplVar16 = (long ***)&UNK_0f282978;
    pppplVar16[0x2a] = (long ***)0x0;
    pppplVar16[0x30] = (long ***)0x0;
    pppplVar16[0x32] = ppplVar20;
    if ((_DAT_0f6b1120 == 0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = *(undefined8 **)(_DAT_0f6b1120 + 0xa0);
    for (puVar24 = *(undefined8 **)(_DAT_0f6b1120 + 0x98); puVar24 != puVar8; puVar24 = puVar24 + 1)
    {
      (*(code *)*puVar24)(pppplVar16);
    }
    pppplStack_238 = pppplVar16;
    func_0x0d6afb30(ppplVar19,&pppplStack_238);
    if (pppplStack_238 != (long ****)0x0) {
      (*(code *)(*pppplStack_238)[1])();
    }
  }
  ppplStack_198 = ppplStack_e8;
  ppplStack_190 = ppplStack_e0;
  pcStack_188 = pcStack_d8;
  uStack_180 = uStack_d0;
  pcStack_d8 = (char *)0x0;
  uStack_d0 = 0;
  pplStack_178 = pplStack_c8;
  pplStack_c8 = (long **)0x0;
  uStack_170 = (long ***)CONCAT44(uStack_bc,uStack_c0);
  uStack_168 = (undefined2)uStack_b8;
  uStack_166 = (undefined2)((uint)uStack_b8 >> 0x10);
  uStack_164 = uStack_b4;
  puStack_160 = puStack_b0;
  uStack_158 = (long ****)CONCAT26(uStack_30a,CONCAT24(sStack_30c,CONCAT22(sStack_30e,sStack_310)));
  pplStack_150 = (long **)0x0;
  ppplVar19 = (long ***)pplStack_308;
  if (((ulong)pplStack_308 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_308 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplStack_148 = (long **)0x0;
  ppplVar20 = (long ***)pplStack_300;
  pplStack_150 = (long **)ppplVar19;
  if (((ulong)pplStack_300 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_300 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_118 = 0;
  uStack_108 = 1;
  uStack_106 = 0xfffc;
  uStack_104 = 1;
  pplStack_148 = (long **)ppplVar20;
  func_0x05d54750(&sStack_2f8,&UNK_0f299a88);
  puVar24 = puStack_160;
  ppplStack_2e0 =
       (long ***)CONCAT26(uStack_2f2,CONCAT24(sStack_2f4,CONCAT22(sStack_2f6,sStack_2f8)));
  if (*(char *)((long)puStack_160 + 6) == '\0') {
    *puStack_160 = ppplStack_2e0;
    if ((puStack_160[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puStack_160[1] & 0xff00ffffffffffff) - 8);
    }
    puVar24[1] = 0;
    ppplVar19 = (long ***)pplStack_2f0;
    if (((ulong)pplStack_2f0 & 0x80000000000000) != 0) {
      uVar22 = (ulong)pplStack_2f0 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar22 - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar24[1] = ppplVar19;
    if ((puVar24[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar24[2] & 0xff00ffffffffffff) - 8);
    }
    puVar24[2] = 0;
    ppplVar19 = (long ***)pplStack_2e8;
    if (((ulong)pplStack_2e8 & 0x80000000000000) != 0) {
      uVar22 = (ulong)pplStack_2e8 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar22 - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar24[2] = ppplVar19;
    ppplStack_2e0 =
         (long ***)CONCAT26(uStack_2f2,CONCAT24(sStack_2f4,CONCAT22(sStack_2f6,sStack_2f8)));
  }
  ppplVar19 = ppplStack_198;
  puStack_330 = (undefined8 *)CONCAT71(puStack_330._1_7_,uStack_104);
  pplStack_2d8 = pplStack_2f0;
  if (((ulong)pplStack_2f0 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_2f0 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    pplStack_2d8 = (long **)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplStack_2d0 = (long **)0x0;
  ppplVar20 = (long ***)pplStack_2e8;
  if (((ulong)pplStack_2e8 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_2e8 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppplVar21 = ppplStack_190;
  uVar22 = (ulong)pplStack_150 & 0x80000000000000;
  uVar10 = (ushort)((ulong)pplStack_150 >> 0x30);
  pplStack_2d0 = (long **)ppplVar20;
  if (uVar22 == 0) {
    if (((ulong)pplStack_150 & 0x7f000000000000) == 0) goto LAB_0b0dd38d;
    uVar17 = (ulong)(uVar10 & 0x7f);
LAB_0b0dd345:
    if ((((uVar17 != 4) || (*(int *)((ulong)pplStack_150 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_158 != 9999)) || ((uStack_158._2_2_ != 9999 || (uStack_158._4_2_ != 9999))))
    goto LAB_0b0dd38d;
LAB_0b0dd5c4:
    if (uVar22 == 0) {
      if (((ulong)pplStack_150 & 0x7f000000000000) != 0) {
        uVar17 = (ulong)(uVar10 & 0x7f);
LAB_0b0dd5fb:
        uVar18 = 3;
        if ((((uVar17 == 4) &&
             (piVar23 = (int *)((ulong)pplStack_150 & 0xff00ffffffffffff), *piVar23 == 0x61746562))
            && ((short)uStack_158 == 9999)) &&
           ((uStack_158._2_2_ == 9999 && (uStack_158._4_2_ == 9999)))) {
          ppplStack_2e0 = (long ***)uStack_158;
          if (((ulong)pplStack_2d8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pplStack_2d8 & 0xff00ffffffffffff) - 8);
            piVar23 = (int *)((ulong)pplStack_150 & 0xff00ffffffffffff);
            uVar22 = (ulong)pplStack_150 & 0x80000000000000;
          }
          pplStack_2d8 = (long **)0x0;
          ppplVar20 = (long ***)pplStack_150;
          if (uVar22 != 0) {
            lVar4 = *(long *)(piVar23 + -2);
            lVar15 = lVar4 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
            if (lVar15 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar15,8);
            }
            *plVar12 = lVar4;
            func_0x0eee2f00(plVar12 + 1,piVar23,lVar4);
            *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
            ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          pplStack_2d8 = (long **)ppplVar20;
          if (((ulong)pplStack_2d0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pplStack_2d0 & 0xff00ffffffffffff) - 8);
          }
          pplStack_2d0 = (long **)0x0;
          uVar18 = 3;
          ppplVar20 = (long ***)pplStack_148;
          if (((ulong)pplStack_148 & 0x80000000000000) != 0) {
            uVar22 = (ulong)pplStack_148 & 0xff00ffffffffffff;
            lVar4 = *(long *)(uVar22 - 8);
            lVar15 = lVar4 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8,3);
            if (lVar15 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar15,8);
            }
            *plVar12 = lVar4;
            func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
            *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
            uVar18 = 3;
            ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
        }
        goto LAB_0b0dd80d;
      }
    }
    else {
      uVar17 = *(ulong *)(((ulong)pplStack_150 & 0xff00ffffffffffff) - 8);
      if (uVar17 != 0) goto LAB_0b0dd5fb;
    }
    uVar18 = 3;
  }
  else {
    uVar17 = *(ulong *)(((ulong)pplStack_150 & 0xff00ffffffffffff) - 8);
    if (uVar17 != 0) goto LAB_0b0dd345;
LAB_0b0dd38d:
    if (((ulong)pplStack_2f0 & 0x80000000000000) != 0) {
      uVar17 = *(ulong *)(((ulong)pplStack_2f0 & 0xff00ffffffffffff) - 8);
      if (uVar17 != 0) goto LAB_0b0dd3d6;
      goto LAB_0b0dd5c4;
    }
    if (((ulong)pplStack_2f0 & 0x7f000000000000) == 0) goto LAB_0b0dd5c4;
    uVar17 = (ulong)((ushort)((ulong)pplStack_2f0 >> 0x30) & 0x7f);
LAB_0b0dd3d6:
    if (((uVar17 != 4) || (*(int *)((ulong)pplStack_2f0 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_2f8 != 9999 || ((sStack_2f6 != 9999 || (sStack_2f4 != 9999)))))) goto LAB_0b0dd5c4;
    ppplStack_2e0 = (long ***)*ppplStack_190;
    if (((ulong)pplStack_2d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pplStack_2d8 & 0xff00ffffffffffff) - 8);
    }
    pplStack_2d8 = (long **)0x0;
    ppplVar20 = (long ***)ppplVar21[1];
    if (((ulong)ppplVar20 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)ppplVar20 & 0xff00ffffffffffff) - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,(ulong)ppplVar20 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pplStack_2d8 = (long **)ppplVar20;
    if (((ulong)pplStack_2d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pplStack_2d0 & 0xff00ffffffffffff) - 8);
    }
    pplStack_2d0 = (long **)0x0;
    ppplVar20 = (long ***)ppplVar21[2];
    uVar18 = 1;
    if (((ulong)ppplVar20 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)ppplVar20 & 0xff00ffffffffffff) - 8);
      lVar15 = lVar4 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8,1);
      if (lVar15 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar12 = lVar4;
      func_0x0eee2f00(plVar12 + 1,(ulong)ppplVar20 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
      uVar18 = 1;
      ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0b0dd80d:
  pplStack_2d0 = (long **)ppplVar20;
  func_0x0d6b3300(&ppplStack_278,&uStack_158,&ppplStack_2e0,uVar18);
  if ((uStack_170 == (long ***)0x0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_01298910),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_188 == (char *)0x0) || (ppplVar20 = uStack_170, *pcStack_188 != '\x01')) {
    cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_01298910);
    ppplVar20 = uStack_170;
    if (cVar11 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pcStack_188 == (char *)0x0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*pcStack_188 == '\0') &&
     (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pplVar1 = pplStack_178;
  pppplVar13 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppplVar13 == (long ****)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppplStack_390 = (long ***)uStack_158;
  pplStack_2c8 = pplVar1;
  ppplStack_338 = (long ***)uStack_158;
  ppplVar21 = (long ***)pplStack_150;
  pplStack_2c0 = (long **)ppplVar20;
  if (((ulong)pplStack_150 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_150 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar21 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplStack_380 = (long **)0x0;
  ppplVar20 = (long ***)pplStack_148;
  if (((ulong)pplStack_148 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_148 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    pplStack_388 = (long **)ppplVar21;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uVar3 = uStack_106;
  uStack_350 = uStack_250;
  uStack_358 = uStack_258;
  ppplStack_368 = (long ***)pplStack_268;
  ppplStack_370 = (long ***)pplStack_270;
  uStack_288 = uStack_248;
  pplStack_388 = (long **)0x0;
  pplStack_380 = (long **)0x0;
  ppplStack_2b8 = ppplStack_278;
  pplStack_270 = (long **)0x0;
  pplStack_268 = (long **)0x0;
  ppplStack_378 = ppplStack_278;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_360 = CONCAT44(uStack_25c,uStack_260);
  uStack_298 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_290 = 0;
  uStack_348 = uStack_248;
  ppplStack_3a8 = ppplStack_338;
  pplStack_3a0 = (long **)ppplVar21;
  pplStack_398 = (long **)ppplVar20;
  func_0x0d6a8a30(pppplVar13,pplStack_2c8,&ppplStack_3a8,&ppplStack_378);
  if ((uStack_350 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_350 & 0xff00ffffffffffff) - 8);
  }
  uStack_350 = 0;
  if ((uStack_358 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_358 & 0xff00ffffffffffff) - 8);
  }
  uStack_358 = 0;
  if (((ulong)ppplStack_368 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_368 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_368 = (long ***)0x0;
  if (((ulong)ppplStack_370 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_370 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_370 = (long ***)0x0;
  if (((ulong)pplStack_398 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_398 & 0xff00ffffffffffff) - 8);
  }
  pplStack_398 = (long **)0x0;
  if (((ulong)pplStack_3a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_3a0 & 0xff00ffffffffffff) - 8);
  }
  *pppplVar13 = (long ***)&UNK_0f282728;
  pppplVar13[0xe] = (long ***)pplStack_2c0;
  *(undefined2 *)(pppplVar13 + 0xf) = uVar3;
  *(undefined1 *)((long)pppplVar13 + 0x7a) = puStack_330._0_1_;
  ppplStack_378 = (long ***)pppplVar13;
  if ((uStack_250 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_250 & 0xff00ffffffffffff) - 8);
  }
  uStack_250 = 0;
  if ((uStack_258 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_258 & 0xff00ffffffffffff) - 8);
  }
  uStack_258 = 0;
  if (((ulong)pplStack_268 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_268 & 0xff00ffffffffffff) - 8);
  }
  pplStack_268 = (long **)0x0;
  if (((ulong)pplStack_270 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_270 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)pplStack_2d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_2d0 & 0xff00ffffffffffff) - 8);
  }
  pplStack_2d0 = (long **)0x0;
  if (((ulong)pplStack_2d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_2d8 & 0xff00ffffffffffff) - 8);
  }
  if ((long ****)ppplStack_378 != (long ****)0x0) {
    ppplVar20 = (long ***)*ppplVar19;
    ppplVar21 = (long ***)ppplVar19[1];
    while ((ppplVar20 != ppplVar21 &&
           (cVar11 = func_0x04fa7a10(*ppplVar20 + 4,ppplStack_378 + 7), cVar11 != '\0'))) {
      ppplVar20 = ppplVar20 + 1;
    }
    func_0x0d6af860(ppplVar19,ppplVar20,&ppplStack_378);
    ppplVar19 = ppplStack_378;
    ppplStack_378 = (long ***)0x0;
    if ((long ****)ppplVar19 != (long ****)0x0) {
      (*(code *)(*ppplVar19)[1])();
    }
  }
  ppplVar19 = ppplStack_198;
  uStack_108 = 0;
  if (((ulong)pplStack_2f0 & 0x80000000000000) == 0) {
    if (((ulong)pplStack_2f0 & 0x7f000000000000) != 0) {
      uVar22 = (ulong)((ushort)((ulong)pplStack_2f0 >> 0x30) & 0x7f);
LAB_0b0ddf14:
      if ((((uVar22 == 4) && (*(int *)((ulong)pplStack_2f0 & 0xff00ffffffffffff) == 0x61746562)) &&
          (sStack_2f8 == 9999)) && ((sStack_2f6 == 9999 && (sStack_2f4 == 9999))))
      goto LAB_0b0de231;
    }
  }
  else {
    uVar22 = *(ulong *)(((ulong)pplStack_2f0 & 0xff00ffffffffffff) - 8);
    if (uVar22 != 0) goto LAB_0b0ddf14;
  }
  if (((pcStack_188 == (char *)0x0) || (*pcStack_188 == '\0')) &&
     (cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_011c69b5),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((CONCAT44(uStack_164,CONCAT22(uStack_166,uStack_168)) == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_011c69b5),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  ppplVar20 = (long ***)CONCAT44(uStack_164,CONCAT22(uStack_166,uStack_168));
  if ((pcStack_188 == (char *)0x0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*pcStack_188 == '\0') &&
     (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pplVar1 = pplStack_178;
  pppplVar16 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
  if (pppplVar16 == (long ****)0x0) {
    func_0x0eec74c0(0x1a0,0);
  }
  func_0x0d6b23d0(pppplVar16,&uStack_158,&sStack_2f8);
  pppplVar16[8] = (long ***)0x0;
  pppplVar16[9] = (long ***)0x0;
  pppplVar16[10] = (long ***)0x0;
  ppplVar21 = (long ***)pplVar1[1];
  ppplVar6 = (long ***)pplVar1[2];
  if (ppplVar6 == (long ***)0x0) {
    pppplVar16[8] = ppplVar21;
    pppplVar16[9] = (long ***)0x0;
  }
  else {
    LOCK();
    ppplVar6[1] = (long **)((long)ppplVar6[1] + 1);
    UNLOCK();
    ppplVar7 = pppplVar16[9];
    pppplVar16[8] = ppplVar21;
    pppplVar16[9] = ppplVar6;
    if (ppplVar7 != (long ***)0x0) {
      LOCK();
      ppplVar21 = ppplVar7 + 1;
      pplVar2 = *ppplVar21;
      *ppplVar21 = (long **)((long)*ppplVar21 + -1);
      UNLOCK();
      if (pplVar2 == (long **)0x0) {
        (*(code *)(*ppplVar7)[2])(ppplVar7);
        func_0x0412c2d0(ppplVar7);
      }
      ppplVar21 = pppplVar16[8];
    }
  }
  if ((ppplVar21 == (long ***)0x0) ||
     (pppplVar16[10] = (long ***)pplVar1, *(char *)ppplVar21 == '\0')) {
LAB_0b0de878:
    uVar18 = func_0x04890760();
    (*(code *)(*pppplVar16)[1])(pppplVar16);
    FUN_0ee386e0(&pplStack_2e8);
    FUN_0ee386e0(&pplStack_2f0);
    func_0x0b0df0f0(&ppplStack_198);
    FUN_0ee386e0(&pplStack_300);
    FUN_0ee386e0(&pplStack_308);
    func_0x0b0def90(&ppplStack_e8);
    FUN_0ee386e0(&pplStack_318);
    FUN_0ee386e0(&pplStack_320);
    func_0x0eee2d70(uVar18);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pppplVar16[0xe] = (long ***)0x0;
  pppplVar16[0xf] = (long ***)0x0;
  pppplVar16[0xc] = (long ***)0x0;
  pppplVar16[0xd] = (long ***)0x0;
  *(undefined4 *)(pppplVar16 + 0x10) = 0x3f800000;
  *(undefined1 *)(pppplVar16 + 0x12) = 0;
  *(undefined1 *)(pppplVar16 + 0x24) = 0;
  *pppplVar16 = (long ***)&UNK_0f2827e0;
  pppplVar16[0x2a] = (long ***)0x0;
  pppplVar16[0x30] = (long ***)0x0;
  pppplVar16[0x32] = ppplVar20;
  if ((_DAT_0f6b1120 == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar8 = *(undefined8 **)(_DAT_0f6b1120 + 0xb8);
  for (puVar24 = *(undefined8 **)(_DAT_0f6b1120 + 0xb0); puVar24 != puVar8; puVar24 = puVar24 + 1) {
    (*(code *)*puVar24)(pppplVar16);
  }
  ppplStack_378 = (long ***)pppplVar16;
  func_0x0d6afb30(ppplVar19,&ppplStack_378);
  if ((long ****)ppplStack_378 != (long ****)0x0) {
    (*(code *)(*ppplStack_378)[1])();
  }
LAB_0b0de231:
  pppplStack_238 = (long ****)ppplStack_198;
  ppplStack_230 = ppplStack_190;
  pcStack_228 = pcStack_188;
  uStack_220 = (undefined4)uStack_180;
  uStack_21c = uStack_180._4_4_;
  pcStack_188 = (char *)0x0;
  uStack_180 = 0;
  pppplStack_218 = (long ****)pplStack_178;
  pplStack_178 = (long **)0x0;
  uStack_208 = CONCAT22(uStack_166,uStack_168);
  pplStack_210 = (long **)uStack_170;
  uStack_204 = uStack_164;
  puStack_200 = puStack_160;
  pplStack_1f0 = (long **)0x0;
  ppplVar19 = (long ***)pplStack_2f0;
  if (((ulong)pplStack_2f0 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_2f0 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar19 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplStack_1e8 = (long **)0x0;
  ppplVar20 = (long ***)pplStack_2e8;
  pplStack_1f0 = (long **)ppplVar19;
  if (((ulong)pplStack_2e8 & 0x80000000000000) != 0) {
    uVar22 = (ulong)pplStack_2e8 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar22 - 8);
    lVar15 = lVar4 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar12 = lVar4;
    func_0x0eee2f00(plVar12 + 1,uVar22,lVar4);
    *(undefined1 *)((long)plVar12 + lVar4 + 8) = 0;
    ppplVar20 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1b8 = 0;
  uStack_1a8 = 1;
  uStack_1a6 = 0xfffc;
  uStack_1a4 = 1;
  pplStack_1e8 = (long **)ppplVar20;
  func_0x0b0df250(&pppplStack_238);
  func_0x0b0e3870(&pppplStack_238);
  if (((ulong)pplStack_2e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_2e8 & 0xff00ffffffffffff) - 8);
  }
  pplStack_2e8 = (long **)0x0;
  if (((ulong)pplStack_2f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_2f0 & 0xff00ffffffffffff) - 8);
  }
  func_0x0b0df0f0(&ppplStack_198);
  if (((ulong)pplStack_300 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_300 & 0xff00ffffffffffff) - 8);
  }
  pplStack_300 = (long **)0x0;
  if (((ulong)pplStack_308 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_308 & 0xff00ffffffffffff) - 8);
  }
  func_0x0b0def90(&ppplStack_e8);
  if (((ulong)pplStack_318 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_318 & 0xff00ffffffffffff) - 8);
  }
  pplStack_318 = (long **)0x0;
  if (((ulong)pplStack_320 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_320 & 0xff00ffffffffffff) - 8);
  }
  return;
}


