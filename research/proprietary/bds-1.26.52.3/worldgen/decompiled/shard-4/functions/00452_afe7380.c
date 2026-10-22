/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb0e7380 (ELF vaddr 0xafe7380)
 * Label: caller-of-callee
 * Body:  [[0b0e7380, 0b0e9bd9] [0b0e9be0, 0b0e9c01] [0b0e9c10, 0b0e9dfe] [0b0e9e00, 0b0e9e25] [0b0e9e30, 0b0ea4c8] [0b0ea936, 0b0ea963]]
 * Ghidra: FUN_0b0e7380
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b0e7380(undefined8 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *puVar9;
  code *pcVar10;
  ushort uVar11;
  undefined8 *******pppppppuVar12;
  char cVar13;
  long *plVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 ****ppppuVar22;
  undefined8 *****pppppuVar23;
  int *piVar24;
  undefined8 *******pppppppuVar25;
  undefined8 ***pppuVar26;
  undefined8 *******pppppppuStack_350;
  undefined8 *******pppppppuStack_348;
  undefined8 ***pppuStack_340;
  undefined8 *******pppppppuStack_338;
  undefined8 *******pppppppuStack_330;
  undefined8 *******pppppppuStack_328;
  undefined8 *******pppppppuStack_320;
  undefined8 *******pppppppuStack_318;
  undefined8 ***pppuStack_310;
  short sStack_308;
  short sStack_306;
  short sStack_304;
  undefined2 uStack_302;
  undefined8 *******pppppppuStack_300;
  undefined8 ***pppuStack_2f8;
  short sStack_2f0;
  short sStack_2ee;
  short sStack_2ec;
  undefined2 uStack_2ea;
  undefined8 *******pppppppuStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined8 *******pppppppuStack_2d8;
  long *plStack_2d0;
  undefined8 *******pppppppuStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  undefined8 *******pppppppuStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined2 uStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 *******pppppppuStack_288;
  undefined8 *******pppppppuStack_280;
  ulong uStack_278;
  uint uStack_270;
  undefined4 uStack_26c;
  ulong uStack_268;
  ulong uStack_260;
  undefined2 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined8 *******pppppppuStack_248;
  undefined8 *******pppppppuStack_240;
  undefined8 *******pppppppuStack_238;
  uint uStack_230;
  undefined4 uStack_22c;
  ulong uStack_228;
  ulong uStack_220;
  undefined2 uStack_218;
  undefined8 *****pppppuStack_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 uStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 uStack_170;
  undefined8 *****pppppuStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 ****ppppuStack_150;
  undefined8 uStack_148;
  undefined8 *******pppppppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 uStack_108;
  undefined1 uStack_f8;
  undefined2 uStack_f6;
  undefined1 uStack_f4;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 ****ppppuStack_a0;
  undefined8 *******pppppppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_58;
  undefined1 uStack_48;
  undefined2 uStack_46;
  undefined1 uStack_44;
  
  func_0x05d54750(&sStack_308,&UNK_0f2999c0);
  puVar18 = (undefined8 *)param_1[7];
  pppppppuStack_350 =
       (undefined8 *******)CONCAT26(uStack_302,CONCAT24(sStack_304,CONCAT22(sStack_306,sStack_308)))
  ;
  if (*(char *)((long)puVar18 + 6) == '\0') {
    *puVar18 = pppppppuStack_350;
    if ((puVar18[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar18[1] & 0xff00ffffffffffff) - 8);
    }
    puVar18[1] = 0;
    pppppppuVar25 = pppppppuStack_300;
    if (((ulong)pppppppuStack_300 & 0x80000000000000) != 0) {
      uVar21 = (ulong)pppppppuStack_300 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar21 - 8);
      lVar1 = lVar4 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
      if (lVar1 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *plVar14 = lVar4;
      func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
      *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
      pppppppuVar25 =
           (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar18[1] = pppppppuVar25;
    if ((puVar18[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar18[2] & 0xff00ffffffffffff) - 8);
    }
    puVar18[2] = 0;
    pppuVar26 = pppuStack_2f8;
    if (((ulong)pppuStack_2f8 & 0x80000000000000) != 0) {
      uVar21 = (ulong)pppuStack_2f8 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar21 - 8);
      lVar1 = lVar4 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
      if (lVar1 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *plVar14 = lVar4;
      func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
      *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
      pppuVar26 = (undefined8 ***)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar18[2] = pppuVar26;
    pppppppuStack_350 =
         (undefined8 *******)
         CONCAT26(uStack_302,CONCAT24(sStack_304,CONCAT22(sStack_306,sStack_308)));
  }
  pppppuStack_250 = (undefined8 *****)*param_1;
  uVar2 = *(undefined1 *)((long)param_1 + 0x94);
  pppppppuStack_348 = pppppppuStack_300;
  if (((ulong)pppppppuStack_300 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppppppuStack_300 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppppppuStack_348 =
         (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppuStack_340 = (undefined8 ***)0x0;
  pppuVar26 = pppuStack_2f8;
  if (((ulong)pppuStack_2f8 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppuStack_2f8 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppuVar26 = (undefined8 ***)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppppppuStack_2d8 = (undefined8 *******)(param_1 + 8);
  pppppppuVar25 = (undefined8 *******)param_1[9];
  uVar21 = (ulong)pppppppuVar25 & 0x80000000000000;
  uVar11 = (ushort)((ulong)pppppppuVar25 >> 0x30);
  pppuStack_340 = pppuVar26;
  if (uVar21 == 0) {
    if (((ulong)pppppppuVar25 & 0x7f000000000000) == 0) goto LAB_0b0e774d;
    uVar19 = (ulong)(uVar11 & 0x7f);
LAB_0b0e7702:
    if ((((uVar19 != 4) || (*(int *)((ulong)pppppppuVar25 & 0xff00ffffffffffff) != 0x61746562)) ||
        (*(short *)(param_1 + 8) != 9999)) ||
       ((*(short *)((long)param_1 + 0x42) != 9999 || (*(short *)((long)param_1 + 0x44) != 9999))))
    goto LAB_0b0e774d;
LAB_0b0e79a9:
    if (uVar21 == 0) {
      if (((ulong)pppppppuVar25 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar11 & 0x7f);
LAB_0b0e79e0:
        uVar20 = 3;
        if ((((uVar19 == 4) &&
             (piVar24 = (int *)((ulong)pppppppuVar25 & 0xff00ffffffffffff), *piVar24 == 0x61746562))
            && (*(short *)(param_1 + 8) == 9999)) &&
           ((*(short *)((long)param_1 + 0x42) == 9999 && (*(short *)((long)param_1 + 0x44) == 9999))
           )) {
          pppppppuStack_350 = (undefined8 *******)*pppppppuStack_2d8;
          if (((ulong)pppppppuStack_348 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppppuStack_348 & 0xff00ffffffffffff) - 8);
            pppppppuVar25 = (undefined8 *******)param_1[9];
            piVar24 = (int *)((ulong)pppppppuVar25 & 0xff00ffffffffffff);
            uVar21 = (ulong)pppppppuVar25 & 0x80000000000000;
          }
          pppppppuStack_348 = (undefined8 *******)0x0;
          if (uVar21 != 0) {
            lVar4 = *(long *)(piVar24 + -2);
            lVar1 = lVar4 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
            if (lVar1 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar1,8);
            }
            *plVar14 = lVar4;
            func_0x0eee2f00(plVar14 + 1,piVar24,lVar4);
            *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
            pppppppuVar25 =
                 (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          pppppppuStack_348 = pppppppuVar25;
          if (((ulong)pppuStack_340 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppuStack_340 & 0xff00ffffffffffff) - 8);
          }
          pppuStack_340 = (undefined8 ***)0x0;
          pppuVar26 = (undefined8 ***)param_1[10];
          uVar20 = 3;
          if (((ulong)pppuVar26 & 0x80000000000000) != 0) {
            lVar4 = *(long *)(((ulong)pppuVar26 & 0xff00ffffffffffff) - 8);
            lVar1 = lVar4 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8,3);
            if (lVar1 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar1,8);
            }
            *plVar14 = lVar4;
            func_0x0eee2f00(plVar14 + 1,(ulong)pppuVar26 & 0xff00ffffffffffff,lVar4);
            *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
            uVar20 = 3;
            pppuVar26 = (undefined8 ***)
                        ((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
        }
        goto LAB_0b0e7c21;
      }
    }
    else {
      uVar19 = *(ulong *)(((ulong)pppppppuVar25 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0b0e79e0;
    }
    uVar20 = 3;
  }
  else {
    uVar19 = *(ulong *)(((ulong)pppppppuVar25 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0b0e7702;
LAB_0b0e774d:
    if (((ulong)pppppppuStack_300 & 0x80000000000000) != 0) {
      uVar19 = *(ulong *)(((ulong)pppppppuStack_300 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0b0e7793;
      goto LAB_0b0e79a9;
    }
    if (((ulong)pppppppuStack_300 & 0x7f000000000000) == 0) goto LAB_0b0e79a9;
    uVar19 = (ulong)((ushort)((ulong)pppppppuStack_300 >> 0x30) & 0x7f);
LAB_0b0e7793:
    if (((uVar19 != 4) || (*(int *)((ulong)pppppppuStack_300 & 0xff00ffffffffffff) != 0x61746562))
       || ((sStack_308 != 9999 || ((sStack_306 != 9999 || (sStack_304 != 9999))))))
    goto LAB_0b0e79a9;
    puVar18 = (undefined8 *)param_1[1];
    pppppppuStack_350 = (undefined8 *******)*puVar18;
    if (((ulong)pppppppuStack_348 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_348 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_348 = (undefined8 *******)0x0;
    pppppppuVar25 = (undefined8 *******)puVar18[1];
    if (((ulong)pppppppuVar25 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)pppppppuVar25 & 0xff00ffffffffffff) - 8);
      lVar1 = lVar4 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
      if (lVar1 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *plVar14 = lVar4;
      func_0x0eee2f00(plVar14 + 1,(ulong)pppppppuVar25 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
      pppppppuVar25 =
           (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppppppuStack_348 = pppppppuVar25;
    if (((ulong)pppuStack_340 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppuStack_340 & 0xff00ffffffffffff) - 8);
    }
    pppuStack_340 = (undefined8 ***)0x0;
    pppuVar26 = (undefined8 ***)puVar18[2];
    uVar20 = 1;
    if (((ulong)pppuVar26 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)pppuVar26 & 0xff00ffffffffffff) - 8);
      lVar1 = lVar4 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8,1);
      if (lVar1 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *plVar14 = lVar4;
      func_0x0eee2f00(plVar14 + 1,(ulong)pppuVar26 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
      uVar20 = 1;
      pppuVar26 = (undefined8 ***)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0b0e7c21:
  pppuStack_340 = pppuVar26;
  func_0x0d6b3300(&pppppppuStack_2c8,pppppppuStack_2d8,&pppppppuStack_350,uVar20);
  if ((param_1[5] == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_01265447),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppppuStack_290 = (undefined8 *****)(param_1 + 5);
  plStack_2d0 = param_1 + 2;
  if (((char *)param_1[2] == (char *)0x0) || (*(char *)param_1[2] != '\x01')) {
    cVar13 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_01265447);
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppuStack_1a0 = (undefined8 *****)*pppppuStack_290;
    if ((*plStack_2d0 == 0) &&
       (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    pppppuStack_1a0 = (undefined8 *****)*pppppuStack_290;
  }
  if ((*(char *)*plStack_2d0 == '\0') &&
     (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar20 = param_1[4];
  ppppppuVar15 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppppuVar15 == (undefined8 ******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pppppppuStack_338 = (undefined8 *******)param_1[8];
  pppppppuVar25 = (undefined8 *******)param_1[9];
  pppppppuStack_198 = pppppppuStack_338;
  uStack_190 = uVar20;
  if (((ulong)pppppppuVar25 & 0x80000000000000) != 0) {
    lVar4 = *(long *)(((ulong)pppppppuVar25 & 0xff00ffffffffffff) - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,(ulong)pppppppuVar25 & 0xff00ffffffffffff,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppppppuVar25 =
         (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppppppuStack_328 = (undefined8 *******)0x0;
  uStack_278 = param_1[10];
  if ((uStack_278 & 0x80000000000000) != 0) {
    lVar4 = *(long *)((uStack_278 & 0xff00ffffffffffff) - 8);
    lVar1 = lVar4 + 9;
    pppppppuStack_330 = pppppppuVar25;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uStack_278 & 0xff00ffffffffffff,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    uStack_278 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_220 = uStack_2a0;
  uStack_228 = uStack_2a8;
  pppppppuStack_238 = pppppppuStack_2b8;
  pppppppuStack_240 = pppppppuStack_2c0;
  uStack_a8 = CONCAT22(uStack_a8._2_2_,uStack_298);
  uVar3 = *(undefined2 *)((long)param_1 + 0x92);
  pppppppuStack_330 = (undefined8 *******)0x0;
  pppppppuStack_328 = (undefined8 *******)0x0;
  pppppppuStack_d8 = pppppppuStack_2c8;
  pppppppuStack_2c0 = (undefined8 *******)0x0;
  pppppppuStack_248 = pppppppuStack_2c8;
  puStack_d0 = (undefined8 *)0x0;
  pcStack_c8 = (char *)0x0;
  pppppppuStack_2b8 = (undefined8 *******)0x0;
  uStack_c0 = uStack_2b0;
  uStack_230 = (uint)uStack_2b0;
  uStack_22c = uStack_2b0._4_4_;
  pppppuStack_b8 = (undefined8 *****)0x0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_b0 = 0;
  uStack_218 = uStack_298;
  pppppppuStack_288 = pppppppuStack_198;
  pppppppuStack_280 = pppppppuVar25;
  func_0x0d6a8a30(ppppppuVar15,uStack_190,&pppppppuStack_288,&pppppppuStack_248);
  if ((uStack_220 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
  }
  uStack_220 = 0;
  if ((uStack_228 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
  }
  uStack_228 = 0;
  if (((ulong)pppppppuStack_238 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_238 & 0xff00ffffffffffff) - 8);
  }
  pppppppuStack_238 = (undefined8 *******)0x0;
  if (((ulong)pppppppuStack_240 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_240 & 0xff00ffffffffffff) - 8);
  }
  pppppppuStack_240 = (undefined8 *******)0x0;
  if ((uStack_278 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
  }
  uStack_278 = 0;
  if (((ulong)pppppppuStack_280 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_280 & 0xff00ffffffffffff) - 8);
  }
  *ppppppuVar15 = (undefined8 *****)&UNK_0f281d98;
  ppppppuVar15[0xe] = pppppuStack_1a0;
  *(undefined2 *)(ppppppuVar15 + 0xf) = uVar3;
  *(undefined1 *)((long)ppppppuVar15 + 0x7a) = uVar2;
  pppppppuStack_248 = (undefined8 *******)ppppppuVar15;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a0 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a0 = 0;
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a8 = 0;
  if (((ulong)pppppppuStack_2b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_2b8 & 0xff00ffffffffffff) - 8);
  }
  pppppppuStack_2b8 = (undefined8 *******)0x0;
  if (((ulong)pppppppuStack_2c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_2c0 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)pppuStack_340 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppuStack_340 & 0xff00ffffffffffff) - 8);
  }
  pppuStack_340 = (undefined8 ***)0x0;
  if (((ulong)pppppppuStack_348 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_348 & 0xff00ffffffffffff) - 8);
  }
  if (pppppppuStack_248 != (undefined8 *******)0x0) {
    ppppuVar22 = *pppppuStack_250;
    ppppuVar5 = pppppuStack_250[1];
    while ((ppppuVar22 != ppppuVar5 &&
           (cVar13 = func_0x04fa7a10(*ppppuVar22 + 4,pppppppuStack_248 + 7), cVar13 != '\0'))) {
      ppppuVar22 = ppppuVar22 + 1;
    }
    func_0x0d6af860(pppppuStack_250,ppppuVar22,&pppppppuStack_248);
    pppppppuVar25 = pppppppuStack_248;
    pppppppuStack_248 = (undefined8 *******)0x0;
    if (pppppppuVar25 != (undefined8 *******)0x0) {
      (*(code *)(*pppppppuVar25)[1])();
    }
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (((ulong)pppppppuStack_300 & 0x80000000000000) == 0) {
    if (((ulong)pppppppuStack_300 & 0x7f000000000000) == 0) goto LAB_0b0e842f;
    uVar21 = (ulong)((ushort)((ulong)pppppppuStack_300 >> 0x30) & 0x7f);
LAB_0b0e83f6:
    if ((((uVar21 != 4) || (*(int *)((ulong)pppppppuStack_300 & 0xff00ffffffffffff) != 0x61746562))
        || (sStack_308 != 9999)) || ((sStack_306 != 9999 || (sStack_304 != 9999))))
    goto LAB_0b0e842f;
  }
  else {
    uVar21 = *(ulong *)(((ulong)pppppppuStack_300 & 0xff00ffffffffffff) - 8);
    if (uVar21 != 0) goto LAB_0b0e83f6;
LAB_0b0e842f:
    uVar20 = *param_1;
    if ((((char *)param_1[2] == (char *)0x0) || (*(char *)param_1[2] == '\0')) &&
       (cVar13 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_01486ce4),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((param_1[6] == 0) &&
       (cVar13 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_01486ce4),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppuVar23 = (undefined8 *****)param_1[6];
    if ((param_1[2] == 0) &&
       (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*plStack_2d0 == '\0') &&
       (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppuVar6 = (undefined8 *****)param_1[4];
    ppppppuVar15 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (ppppppuVar15 == (undefined8 ******)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(ppppppuVar15,pppppppuStack_2d8,&sStack_308);
    ppppppuVar15[8] = (undefined8 *****)0x0;
    ppppppuVar15[9] = (undefined8 *****)0x0;
    ppppppuVar15[10] = (undefined8 *****)0x0;
    pppppuVar17 = (undefined8 *****)pppppuVar6[1];
    pppppuVar7 = (undefined8 *****)pppppuVar6[2];
    if (pppppuVar7 == (undefined8 *****)0x0) {
      ppppppuVar15[8] = pppppuVar17;
      ppppppuVar15[9] = (undefined8 *****)0x0;
    }
    else {
      LOCK();
      pppppuVar7[1] = (undefined8 ****)((long)pppppuVar7[1] + 1);
      UNLOCK();
      pppppuVar8 = ppppppuVar15[9];
      ppppppuVar15[8] = pppppuVar17;
      ppppppuVar15[9] = pppppuVar7;
      if (pppppuVar8 != (undefined8 *****)0x0) {
        LOCK();
        pppppuVar17 = pppppuVar8 + 1;
        ppppuVar22 = *pppppuVar17;
        *pppppuVar17 = (undefined8 ****)((long)*pppppuVar17 + -1);
        UNLOCK();
        if (ppppuVar22 == (undefined8 ****)0x0) {
          (*(code *)(*pppppuVar8)[2])(pppppuVar8);
          func_0x0412c2d0(pppppuVar8);
        }
        pppppuVar17 = ppppppuVar15[8];
      }
    }
    if ((pppppuVar17 == (undefined8 *****)0x0) ||
       (ppppppuVar15[10] = pppppuVar6, *(char *)pppppuVar17 == '\0')) goto LAB_0b0ea4bf;
    ppppppuVar15[0xe] = (undefined8 *****)0x0;
    ppppppuVar15[0xf] = (undefined8 *****)0x0;
    ppppppuVar15[0xc] = (undefined8 *****)0x0;
    ppppppuVar15[0xd] = (undefined8 *****)0x0;
    *(undefined4 *)(ppppppuVar15 + 0x10) = 0x3f800000;
    *(undefined1 *)(ppppppuVar15 + 0x12) = 0;
    *(undefined1 *)(ppppppuVar15 + 0x24) = 0;
    *ppppppuVar15 = (undefined8 *****)&UNK_0f281e50;
    ppppppuVar15[0x2a] = (undefined8 *****)0x0;
    ppppppuVar15[0x30] = (undefined8 *****)0x0;
    ppppppuVar15[0x32] = pppppuVar23;
    if ((_DAT_0f6b1120 == 0) &&
       (cVar13 = func_0x0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar9 = *(undefined8 **)(_DAT_0f6b1120 + 0x148);
    for (puVar18 = *(undefined8 **)(_DAT_0f6b1120 + 0x140); puVar18 != puVar9; puVar18 = puVar18 + 1
        ) {
      (*(code *)*puVar18)(ppppppuVar15);
    }
    pppppppuStack_248 = (undefined8 *******)ppppppuVar15;
    func_0x0d6afb30(uVar20,&pppppppuStack_248);
    if (pppppppuStack_248 != (undefined8 *******)0x0) {
      (*(code *)(*pppppppuStack_248)[1])();
    }
  }
  ppppppuStack_188 = (undefined8 ******)*param_1;
  puStack_180 = (undefined8 *)param_1[1];
  pcStack_178 = (char *)param_1[2];
  uStack_170 = param_1[3];
  *plStack_2d0 = 0;
  plStack_2d0[1] = 0;
  pppppuStack_168 = (undefined8 *****)param_1[4];
  param_1[4] = 0;
  ppppuStack_150 = pppppuStack_290[2];
  uStack_160 = *(undefined4 *)pppppuStack_290;
  uStack_15c = *(undefined4 *)((long)pppppuStack_290 + 4);
  uStack_158 = *(undefined4 *)(pppppuStack_290 + 1);
  uStack_154 = *(undefined4 *)((long)pppppuStack_290 + 0xc);
  uStack_148 = (undefined8 *******)
               CONCAT26(uStack_302,CONCAT24(sStack_304,CONCAT22(sStack_306,sStack_308)));
  pppppppuStack_140 = (undefined8 *******)0x0;
  pppppppuVar25 = pppppppuStack_300;
  if (((ulong)pppppppuStack_300 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppppppuStack_300 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppppppuVar25 =
         (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppuStack_138 = (undefined8 ***)0x0;
  pppuVar26 = pppuStack_2f8;
  pppppppuStack_140 = pppppppuVar25;
  if (((ulong)pppuStack_2f8 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppuStack_2f8 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppuVar26 = (undefined8 ***)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_108 = 0;
  uStack_f8 = 1;
  uStack_f6 = 0xfffc;
  uStack_f4 = 1;
  pppuStack_138 = pppuVar26;
  func_0x05d54750(&sStack_2f0,&UNK_0f2999e8);
  ppppuVar22 = ppppuStack_150;
  pppppppuStack_320 =
       (undefined8 *******)CONCAT26(uStack_2ea,CONCAT24(sStack_2ec,CONCAT22(sStack_2ee,sStack_2f0)))
  ;
  if (*(char *)((long)ppppuStack_150 + 6) == '\0') {
    *ppppuStack_150 = pppppppuStack_320;
    if (((ulong)ppppuStack_150[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppuStack_150[1] & 0xff00ffffffffffff) - 8);
    }
    ppppuVar22[1] = (undefined8 ***)0x0;
    pppppppuVar25 = pppppppuStack_2e8;
    if (((ulong)pppppppuStack_2e8 & 0x80000000000000) != 0) {
      uVar21 = (ulong)pppppppuStack_2e8 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar21 - 8);
      lVar1 = lVar4 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
      if (lVar1 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *plVar14 = lVar4;
      func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
      *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
      pppppppuVar25 =
           (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppuVar22[1] = pppppppuVar25;
    if (((ulong)ppppuVar22[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppuVar22[2] & 0xff00ffffffffffff) - 8);
    }
    ppppuVar22[2] = (undefined8 ***)0x0;
    pppuVar26 = pppuStack_2e0;
    if (((ulong)pppuStack_2e0 & 0x80000000000000) != 0) {
      uVar21 = (ulong)pppuStack_2e0 & 0xff00ffffffffffff;
      lVar4 = *(long *)(uVar21 - 8);
      lVar1 = lVar4 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
      if (lVar1 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *plVar14 = lVar4;
      func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
      *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
      pppuVar26 = (undefined8 ***)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppuVar22[2] = pppuVar26;
    pppppppuStack_320 =
         (undefined8 *******)
         CONCAT26(uStack_2ea,CONCAT24(sStack_2ec,CONCAT22(sStack_2ee,sStack_2f0)));
  }
  ppppppuVar15 = ppppppuStack_188;
  plStack_2d0 = (long *)CONCAT71(plStack_2d0._1_7_,uStack_f4);
  pppppppuStack_318 = pppppppuStack_2e8;
  if (((ulong)pppppppuStack_2e8 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppppppuStack_2e8 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppppppuStack_318 =
         (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppuStack_310 = (undefined8 ***)0x0;
  pppuVar26 = pppuStack_2e0;
  if (((ulong)pppuStack_2e0 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppuStack_2e0 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppuVar26 = (undefined8 ***)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  puVar18 = puStack_180;
  uVar21 = (ulong)pppppppuStack_140 & 0x80000000000000;
  uVar11 = (ushort)((ulong)pppppppuStack_140 >> 0x30);
  pppuStack_310 = pppuVar26;
  if (uVar21 == 0) {
    if (((ulong)pppppppuStack_140 & 0x7f000000000000) == 0) goto LAB_0b0e8c2a;
    uVar19 = (ulong)(uVar11 & 0x7f);
LAB_0b0e8be2:
    if ((((uVar19 != 4) || (*(int *)((ulong)pppppppuStack_140 & 0xff00ffffffffffff) != 0x61746562))
        || ((short)uStack_148 != 9999)) ||
       ((uStack_148._2_2_ != 9999 || (uStack_148._4_2_ != 9999)))) goto LAB_0b0e8c2a;
LAB_0b0e8e46:
    if (uVar21 == 0) {
      if (((ulong)pppppppuStack_140 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar11 & 0x7f);
LAB_0b0e8e7d:
        uVar20 = 3;
        if ((((uVar19 == 4) &&
             (piVar24 = (int *)((ulong)pppppppuStack_140 & 0xff00ffffffffffff),
             *piVar24 == 0x61746562)) && ((short)uStack_148 == 9999)) &&
           ((uStack_148._2_2_ == 9999 && (uStack_148._4_2_ == 9999)))) {
          pppppppuStack_320 = uStack_148;
          if (((ulong)pppppppuStack_318 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppppuStack_318 & 0xff00ffffffffffff) - 8);
            piVar24 = (int *)((ulong)pppppppuStack_140 & 0xff00ffffffffffff);
            uVar21 = (ulong)pppppppuStack_140 & 0x80000000000000;
          }
          pppppppuStack_318 = (undefined8 *******)0x0;
          pppppppuVar25 = pppppppuStack_140;
          if (uVar21 != 0) {
            lVar4 = *(long *)(piVar24 + -2);
            lVar1 = lVar4 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
            if (lVar1 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar1,8);
            }
            *plVar14 = lVar4;
            func_0x0eee2f00(plVar14 + 1,piVar24,lVar4);
            *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
            pppppppuVar25 =
                 (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          pppppppuStack_318 = pppppppuVar25;
          if (((ulong)pppuStack_310 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppuStack_310 & 0xff00ffffffffffff) - 8);
          }
          pppuStack_310 = (undefined8 ***)0x0;
          uVar20 = 3;
          pppuVar26 = pppuStack_138;
          if (((ulong)pppuStack_138 & 0x80000000000000) != 0) {
            uVar21 = (ulong)pppuStack_138 & 0xff00ffffffffffff;
            lVar4 = *(long *)(uVar21 - 8);
            lVar1 = lVar4 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8,3);
            if (lVar1 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar1,8);
            }
            *plVar14 = lVar4;
            func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
            *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
            uVar20 = 3;
            pppuVar26 = (undefined8 ***)
                        ((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
        }
        goto LAB_0b0e907a;
      }
    }
    else {
      uVar19 = *(ulong *)(((ulong)pppppppuStack_140 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0b0e8e7d;
    }
    uVar20 = 3;
  }
  else {
    uVar19 = *(ulong *)(((ulong)pppppppuStack_140 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0b0e8be2;
LAB_0b0e8c2a:
    if (((ulong)pppppppuStack_2e8 & 0x80000000000000) != 0) {
      uVar19 = *(ulong *)(((ulong)pppppppuStack_2e8 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0b0e8c73;
      goto LAB_0b0e8e46;
    }
    if (((ulong)pppppppuStack_2e8 & 0x7f000000000000) == 0) goto LAB_0b0e8e46;
    uVar19 = (ulong)((ushort)((ulong)pppppppuStack_2e8 >> 0x30) & 0x7f);
LAB_0b0e8c73:
    if (((uVar19 != 4) || (*(int *)((ulong)pppppppuStack_2e8 & 0xff00ffffffffffff) != 0x61746562))
       || ((sStack_2f0 != 9999 || ((sStack_2ee != 9999 || (sStack_2ec != 9999))))))
    goto LAB_0b0e8e46;
    pppppppuStack_320 = (undefined8 *******)*puStack_180;
    if (((ulong)pppppppuStack_318 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_318 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_318 = (undefined8 *******)0x0;
    pppppppuVar25 = (undefined8 *******)puVar18[1];
    if (((ulong)pppppppuVar25 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)pppppppuVar25 & 0xff00ffffffffffff) - 8);
      lVar1 = lVar4 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
      if (lVar1 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *plVar14 = lVar4;
      func_0x0eee2f00(plVar14 + 1,(ulong)pppppppuVar25 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
      pppppppuVar25 =
           (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppppppuStack_318 = pppppppuVar25;
    if (((ulong)pppuStack_310 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppuStack_310 & 0xff00ffffffffffff) - 8);
    }
    pppuStack_310 = (undefined8 ***)0x0;
    pppuVar26 = (undefined8 ***)puVar18[2];
    uVar20 = 1;
    if (((ulong)pppuVar26 & 0x80000000000000) != 0) {
      lVar4 = *(long *)(((ulong)pppuVar26 & 0xff00ffffffffffff) - 8);
      lVar1 = lVar4 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8,1);
      if (lVar1 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *plVar14 = lVar4;
      func_0x0eee2f00(plVar14 + 1,(ulong)pppuVar26 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
      uVar20 = 1;
      pppuVar26 = (undefined8 ***)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0b0e907a:
  pppuStack_310 = pppuVar26;
  func_0x0d6b3300(&pppppppuStack_288,&uStack_148,&pppppppuStack_320,uVar20);
  if ((CONCAT44(uStack_15c,uStack_160) == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_012e5321),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_178 == (char *)0x0) || (*pcStack_178 != '\x01')) {
    cVar13 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_012e5321);
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppuVar23 = (undefined8 *****)CONCAT44(uStack_15c,uStack_160);
    if ((pcStack_178 == (char *)0x0) &&
       (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    pppppuVar23 = (undefined8 *****)CONCAT44(uStack_15c,uStack_160);
  }
  if ((*pcStack_178 == '\0') &&
     (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppppuVar6 = pppppuStack_168;
  ppppppuVar16 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppppuVar16 == (undefined8 ******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pppppppuStack_350 = uStack_148;
  pppppuStack_290 = pppppuVar6;
  pppppppuStack_2d8 = uStack_148;
  pppppppuVar25 = pppppppuStack_140;
  pppppuStack_250 = pppppuVar23;
  if (((ulong)pppppppuStack_140 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppppppuStack_140 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppppppuVar25 =
         (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppuStack_340 = (undefined8 ***)0x0;
  pppuVar26 = pppuStack_138;
  if (((ulong)pppuStack_138 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppuStack_138 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    pppppppuStack_348 = pppppppuVar25;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppuVar26 = (undefined8 ***)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uVar3 = uStack_f6;
  uStack_220 = uStack_260;
  uStack_228 = uStack_268;
  pppppppuStack_238 = (undefined8 *******)uStack_278;
  pppppppuStack_240 = pppppppuStack_280;
  uStack_298 = uStack_258;
  pppppppuStack_348 = (undefined8 *******)0x0;
  pppuStack_340 = (undefined8 ***)0x0;
  pppppppuStack_2c8 = pppppppuStack_288;
  pppppppuStack_280 = (undefined8 *******)0x0;
  uStack_278 = 0;
  pppppppuStack_248 = pppppppuStack_288;
  pppppppuStack_2c0 = (undefined8 *******)0x0;
  pppppppuStack_2b8 = (undefined8 *******)0x0;
  uStack_230 = uStack_270;
  uStack_22c = uStack_26c;
  uStack_2a8 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_2a0 = 0;
  uStack_218 = uStack_258;
  pppppppuStack_338 = pppppppuStack_2d8;
  pppppppuStack_330 = pppppppuVar25;
  pppppppuStack_328 = (undefined8 *******)pppuVar26;
  func_0x0d6a8a30(ppppppuVar16,pppppuStack_290,&pppppppuStack_338,&pppppppuStack_248);
  if ((uStack_220 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
  }
  uStack_220 = 0;
  if ((uStack_228 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
  }
  uStack_228 = 0;
  if (((ulong)pppppppuStack_238 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_238 & 0xff00ffffffffffff) - 8);
  }
  pppppppuStack_238 = (undefined8 *******)0x0;
  if (((ulong)pppppppuStack_240 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_240 & 0xff00ffffffffffff) - 8);
  }
  pppppppuStack_240 = (undefined8 *******)0x0;
  if (((ulong)pppppppuStack_328 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_328 & 0xff00ffffffffffff) - 8);
  }
  pppppppuStack_328 = (undefined8 *******)0x0;
  if (((ulong)pppppppuStack_330 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_330 & 0xff00ffffffffffff) - 8);
  }
  *ppppppuVar16 = (undefined8 *****)&UNK_0f281c00;
  ppppppuVar16[0xe] = pppppuStack_250;
  *(undefined2 *)(ppppppuVar16 + 0xf) = uVar3;
  *(undefined1 *)((long)ppppppuVar16 + 0x7a) = plStack_2d0._0_1_;
  pppppppuStack_248 = (undefined8 *******)ppppppuVar16;
  if ((uStack_260 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
  }
  uStack_260 = 0;
  if ((uStack_268 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
  }
  uStack_268 = 0;
  if ((uStack_278 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
  }
  uStack_278 = 0;
  if (((ulong)pppppppuStack_280 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_280 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)pppuStack_310 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppuStack_310 & 0xff00ffffffffffff) - 8);
  }
  pppuStack_310 = (undefined8 ***)0x0;
  if (((ulong)pppppppuStack_318 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_318 & 0xff00ffffffffffff) - 8);
  }
  if (pppppppuStack_248 != (undefined8 *******)0x0) {
    pppppuVar23 = *ppppppuVar15;
    pppppuVar6 = ppppppuVar15[1];
    while ((pppppuVar23 != pppppuVar6 &&
           (cVar13 = func_0x04fa7a10(*pppppuVar23 + 4,pppppppuStack_248 + 7), cVar13 != '\0'))) {
      pppppuVar23 = pppppuVar23 + 1;
    }
    func_0x0d6af860(ppppppuVar15,pppppuVar23,&pppppppuStack_248);
    pppppppuVar25 = pppppppuStack_248;
    pppppppuStack_248 = (undefined8 *******)0x0;
    if (pppppppuVar25 != (undefined8 *******)0x0) {
      (*(code *)(*pppppppuVar25)[1])();
    }
  }
  ppppppuVar16 = ppppppuStack_188;
  uStack_f8 = 0;
  if (((ulong)pppppppuStack_2e8 & 0x80000000000000) == 0) {
    if (((ulong)pppppppuStack_2e8 & 0x7f000000000000) != 0) {
      uVar21 = (ulong)((ushort)((ulong)pppppppuStack_2e8 >> 0x30) & 0x7f);
LAB_0b0e97c2:
      if ((((uVar21 == 4) && (*(int *)((ulong)pppppppuStack_2e8 & 0xff00ffffffffffff) == 0x61746562)
           ) && (sStack_2f0 == 9999)) && ((sStack_2ee == 9999 && (sStack_2ec == 9999))))
      goto LAB_0b0e9f19;
    }
  }
  else {
    uVar21 = *(ulong *)(((ulong)pppppppuStack_2e8 & 0xff00ffffffffffff) - 8);
    if (uVar21 != 0) goto LAB_0b0e97c2;
  }
  if (((pcStack_178 == (char *)0x0) || (*pcStack_178 == '\0')) &&
     (cVar13 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_012985e5),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((CONCAT44(uStack_154,uStack_158) == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_012985e5),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppppuVar23 = (undefined8 *****)CONCAT44(uStack_154,uStack_158);
  if ((pcStack_178 == (char *)0x0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*pcStack_178 == '\0') &&
     (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppppuVar6 = pppppuStack_168;
  ppppppuVar15 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
  if (ppppppuVar15 == (undefined8 ******)0x0) {
    func_0x0eec74c0(0x1a0,0);
  }
  func_0x0d6b23d0(ppppppuVar15,&uStack_148,&sStack_2f0);
  ppppppuVar15[8] = (undefined8 *****)0x0;
  ppppppuVar15[9] = (undefined8 *****)0x0;
  ppppppuVar15[10] = (undefined8 *****)0x0;
  pppppuVar17 = (undefined8 *****)pppppuVar6[1];
  pppppuVar7 = (undefined8 *****)pppppuVar6[2];
  if (pppppuVar7 == (undefined8 *****)0x0) {
    ppppppuVar15[8] = pppppuVar17;
    ppppppuVar15[9] = (undefined8 *****)0x0;
  }
  else {
    LOCK();
    pppppuVar7[1] = (undefined8 ****)((long)pppppuVar7[1] + 1);
    UNLOCK();
    pppppuVar8 = ppppppuVar15[9];
    ppppppuVar15[8] = pppppuVar17;
    ppppppuVar15[9] = pppppuVar7;
    if (pppppuVar8 != (undefined8 *****)0x0) {
      LOCK();
      pppppuVar17 = pppppuVar8 + 1;
      ppppuVar22 = *pppppuVar17;
      *pppppuVar17 = (undefined8 ****)((long)*pppppuVar17 + -1);
      UNLOCK();
      if (ppppuVar22 == (undefined8 ****)0x0) {
        (*(code *)(*pppppuVar8)[2])(pppppuVar8);
        func_0x0412c2d0(pppppuVar8);
      }
      pppppuVar17 = ppppppuVar15[8];
    }
  }
  if ((pppppuVar17 == (undefined8 *****)0x0) ||
     (ppppppuVar15[10] = pppppuVar6, *(char *)pppppuVar17 == '\0')) {
LAB_0b0ea4bf:
    uVar20 = func_0x04890760();
    (*(code *)(*ppppppuVar15)[1])(ppppppuVar15);
    func_0x0ee386e0(&pppuStack_2f8);
    func_0x0ee386e0(&pppppppuStack_300);
    func_0x0eee2d70(uVar20);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  ppppppuVar15[0xe] = (undefined8 *****)0x0;
  ppppppuVar15[0xf] = (undefined8 *****)0x0;
  ppppppuVar15[0xc] = (undefined8 *****)0x0;
  ppppppuVar15[0xd] = (undefined8 *****)0x0;
  *(undefined4 *)(ppppppuVar15 + 0x10) = 0x3f800000;
  *(undefined1 *)(ppppppuVar15 + 0x12) = 0;
  *(undefined1 *)(ppppppuVar15 + 0x24) = 0;
  *ppppppuVar15 = (undefined8 *****)&UNK_0f281cb8;
  ppppppuVar15[0x2a] = (undefined8 *****)0x0;
  ppppppuVar15[0x30] = (undefined8 *****)0x0;
  ppppppuVar15[0x32] = pppppuVar23;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar20 = _UNK_0143b898;
  *(ulong *)((long)puVar18 + 0xc) = CONCAT44(_UNK_0143b894,_DAT_0143b890);
  *(undefined8 *)((long)puVar18 + 0x14) = uVar20;
  uVar20 = CONCAT44(_DAT_0143b890,_UNK_0143b88c);
  *puVar18 = _DAT_0143b884;
  puVar18[1] = uVar20;
  *(undefined1 *)((long)puVar18 + 0x1c) = 0;
  pppppppuStack_2c8 = (undefined8 *******)0x0;
  pppppppuStack_2c0 = (undefined8 *******)0x0;
  pppppppuStack_2b8 = (undefined8 *******)0x0;
  pppppppuStack_288 = &pppppppuStack_2c8;
  pppppppuStack_280 = (undefined8 *******)((ulong)pppppppuStack_280 & 0xffffffffffffff00);
  pppppppuVar25 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (pppppppuVar25 == (undefined8 *******)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  pppppppuStack_2b8 = pppppppuVar25 + 6;
  pppppppuStack_248 = &pppppppuStack_2c8;
  pppppppuStack_240 = &pppppppuStack_350;
  pppppppuStack_238 = &pppppppuStack_338;
  uStack_230 = uStack_230 & 0xffffff00;
  *pppppppuVar25 = (undefined8 ******)0x656e6f706d6f6314;
  pppppppuVar25[1] = (undefined8 ******)0x73746e;
  pppppppuStack_338 = pppppppuVar25 + 3;
  pppppppuStack_350 = pppppppuVar25;
  pppppppuStack_2c8 = pppppppuVar25;
  pppppppuStack_2c0 = pppppppuVar25;
  func_0x0412e5e0(pppppppuStack_338,puVar18,0x1c);
  pppppppuStack_2c0 = pppppppuStack_338 + 3;
  pppppppuStack_288 = (undefined8 *******)0x0;
  pppppppuStack_280 = (undefined8 *******)0x0;
  uStack_278 = 0;
  func_0x0b298560(ppppppuVar15,&pppppppuStack_2c8,&pppppppuStack_288);
  pppppppuVar12 = pppppppuStack_288;
  pppppppuVar25 = pppppppuStack_280;
  if (pppppppuStack_288 != (undefined8 *******)0x0) {
    for (; pppppppuVar12 != pppppppuVar25; pppppppuVar25 = pppppppuVar25 + -3) {
      if (((ulong)pppppppuVar25[-3] & 1) != 0) {
        func_0x0412a280(pppppppuVar25[-1],(ulong)pppppppuVar25[-3] & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_280 = pppppppuVar12;
    func_0x0412a280(pppppppuVar12,uStack_278 - (long)pppppppuVar12);
  }
  pppppppuVar12 = pppppppuStack_2c8;
  pppppppuVar25 = pppppppuStack_2c0;
  if (pppppppuStack_2c8 != (undefined8 *******)0x0) {
    for (; pppppppuVar12 != pppppppuVar25; pppppppuVar25 = pppppppuVar25 + -3) {
      if (((ulong)pppppppuVar25[-3] & 1) != 0) {
        func_0x0412a280(pppppppuVar25[-1],(ulong)pppppppuVar25[-3] & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_2c0 = pppppppuVar12;
    func_0x0412a280(pppppppuStack_2c8,(long)pppppppuStack_2b8 - (long)pppppppuStack_2c8);
  }
  func_0x0412a280(puVar18,0x20);
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar20 = _UNK_0143b898;
  *(ulong *)((long)puVar18 + 0xc) = CONCAT44(_UNK_0143b894,_DAT_0143b890);
  *(undefined8 *)((long)puVar18 + 0x14) = uVar20;
  uVar20 = CONCAT44(_DAT_0143b890,_UNK_0143b88c);
  *puVar18 = _DAT_0143b884;
  puVar18[1] = uVar20;
  *(undefined1 *)((long)puVar18 + 0x1c) = 0;
  pppppppuStack_338 = (undefined8 *******)0x0;
  pppppppuStack_330 = (undefined8 *******)0x0;
  pppppppuStack_328 = (undefined8 *******)0x0;
  pppppppuStack_350 = &pppppppuStack_338;
  pppppppuStack_348 = (undefined8 *******)((ulong)pppppppuStack_348 & 0xffffffffffffff00);
  pppppppuStack_e0 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (pppppppuStack_e0 == (undefined8 *******)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  pppppppuStack_328 = pppppppuStack_e0 + 9;
  pppppppuStack_248 = &pppppppuStack_338;
  pppppppuStack_240 = &pppppppuStack_e0;
  pppppppuStack_238 = &pppppppuStack_320;
  uStack_230 = uStack_230 & 0xffffff00;
  *pppppppuStack_e0 = (undefined8 ******)0x656e6f706d6f6320;
  pppppppuStack_e0[1] = (undefined8 ******)0x70756f72675f746e;
  pppppppuStack_e0[2] = (undefined8 ******)0x73;
  pppppppuStack_e0[3] = (undefined8 ******)&UNK_03020106;
  pppppppuStack_320 = pppppppuStack_e0 + 6;
  pppppppuStack_e0[4] = (undefined8 ******)0x0;
  pppppppuStack_e0[5] = (undefined8 ******)0x0;
  pppppppuStack_338 = pppppppuStack_e0;
  pppppppuStack_330 = pppppppuStack_e0;
  func_0x0412e5e0(pppppppuStack_320,puVar18,0x1c);
  pppppppuStack_330 = pppppppuStack_320 + 3;
  pppppppuStack_248 = (undefined8 *******)0x0;
  pppppppuStack_240 = (undefined8 *******)0x0;
  pppppppuStack_238 = (undefined8 *******)0x0;
  func_0x0b298560(ppppppuVar15,&pppppppuStack_338,&pppppppuStack_248);
  pppppppuVar12 = pppppppuStack_248;
  pppppppuVar25 = pppppppuStack_240;
  if (pppppppuStack_248 != (undefined8 *******)0x0) {
    for (; pppppppuVar12 != pppppppuVar25; pppppppuVar25 = pppppppuVar25 + -3) {
      if (((ulong)pppppppuVar25[-3] & 1) != 0) {
        func_0x0412a280(pppppppuVar25[-1],(ulong)pppppppuVar25[-3] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(pppppppuVar12,(long)pppppppuStack_238 - (long)pppppppuVar12);
  }
  pppppppuVar12 = pppppppuStack_338;
  pppppppuVar25 = pppppppuStack_330;
  if (pppppppuStack_338 != (undefined8 *******)0x0) {
    for (; pppppppuVar12 != pppppppuVar25; pppppppuVar25 = pppppppuVar25 + -3) {
      if (((ulong)pppppppuVar25[-3] & 1) != 0) {
        func_0x0412a280(pppppppuVar25[-1],(ulong)pppppppuVar25[-3] & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_330 = pppppppuVar12;
    func_0x0412a280(pppppppuStack_338,(long)pppppppuStack_328 - (long)pppppppuStack_338);
  }
  func_0x0412a280(puVar18,0x20);
  if ((_DAT_0f6b1120 == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar9 = *(undefined8 **)(_DAT_0f6b1120 + 0x160);
  for (puVar18 = *(undefined8 **)(_DAT_0f6b1120 + 0x158); puVar18 != puVar9; puVar18 = puVar18 + 1)
  {
    (*(code *)*puVar18)(ppppppuVar15);
  }
  pppppppuStack_248 = (undefined8 *******)ppppppuVar15;
  func_0x0d6afb30(ppppppuVar16,&pppppppuStack_248);
  if (pppppppuStack_248 != (undefined8 *******)0x0) {
    (*(code *)(*pppppppuStack_248)[1])();
  }
LAB_0b0e9f19:
  pppppppuStack_d8 = (undefined8 *******)ppppppuStack_188;
  puStack_d0 = puStack_180;
  pcStack_c8 = pcStack_178;
  uStack_c0 = uStack_170;
  pcStack_178 = (char *)0x0;
  uStack_170 = 0;
  pppppuStack_b8 = pppppuStack_168;
  pppppuStack_168 = (undefined8 *****)0x0;
  uStack_b0 = CONCAT44(uStack_15c,uStack_160);
  uStack_a8 = uStack_158;
  uStack_a4 = uStack_154;
  ppppuStack_a0 = ppppuStack_150;
  pppppppuStack_90 = (undefined8 *******)0x0;
  pppppppuVar25 = pppppppuStack_2e8;
  if (((ulong)pppppppuStack_2e8 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppppppuStack_2e8 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppppppuVar25 =
         (undefined8 *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppuStack_88 = (undefined8 ***)0x0;
  pppuVar26 = pppuStack_2e0;
  pppppppuStack_90 = pppppppuVar25;
  if (((ulong)pppuStack_2e0 & 0x80000000000000) != 0) {
    uVar21 = (ulong)pppuStack_2e0 & 0xff00ffffffffffff;
    lVar4 = *(long *)(uVar21 - 8);
    lVar1 = lVar4 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar14 = lVar4;
    func_0x0eee2f00(plVar14 + 1,uVar21,lVar4);
    *(undefined1 *)((long)plVar14 + lVar4 + 8) = 0;
    pppuVar26 = (undefined8 ***)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_58 = 0;
  uStack_48 = 1;
  uStack_46 = 0xfffc;
  uStack_44 = 1;
  pppuStack_88 = pppuVar26;
  func_0x05d54750(&pppppppuStack_2c8,&UNK_0f299a38);
  func_0x0b0fe1a0(&pppppppuStack_248,&pppppppuStack_d8,&pppppppuStack_2c8);
  func_0x0b0ead90(&pppppppuStack_248);
  func_0x0b0ef040(&pppppppuStack_248);
  if (((ulong)pppppppuStack_2b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_2b8 & 0xff00ffffffffffff) - 8);
  }
  pppppppuStack_2b8 = (undefined8 *******)0x0;
  if (((ulong)pppppppuStack_2c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_2c0 & 0xff00ffffffffffff) - 8);
  }
  func_0x0b0eac30(&pppppppuStack_d8);
  if (((ulong)pppuStack_2e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppuStack_2e0 & 0xff00ffffffffffff) - 8);
  }
  pppuStack_2e0 = (undefined8 ***)0x0;
  if (((ulong)pppppppuStack_2e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_2e8 & 0xff00ffffffffffff) - 8);
  }
  func_0x0b0eaad0(&ppppppuStack_188);
  if (((ulong)pppuStack_2f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppuStack_2f8 & 0xff00ffffffffffff) - 8);
  }
  pppuStack_2f8 = (undefined8 ***)0x0;
  if (((ulong)pppppppuStack_300 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppuStack_300 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x143b884  minecraft:pushable_by_entity
 * 0x143b890  shable_by_entity
 */
