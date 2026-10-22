/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb0ead90 (ELF vaddr 0xafead90)
 * Label: caller-of-callee
 * Body:  [[0b0ead90, 0b0ec1c1] [0b0ec1d0, 0b0ec3ca] [0b0ec3d0, 0b0ec3f1] [0b0ec400, 0b0eeac6] [0b0eefcc, 0b0ef001] [0b0ef010, 0b0ef033]]
 * Ghidra: FUN_0b0ead90
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b0ead90(undefined8 *param_1)

{
  long ****pppplVar1;
  undefined2 uVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  undefined8 *puVar5;
  long ******pppppplVar6;
  long ******pppppplVar7;
  code *pcVar8;
  ushort uVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  short *psVar12;
  char cVar13;
  long *plVar14;
  ulong uVar15;
  long ******pppppplVar16;
  long ******pppppplVar17;
  long *****ppppplVar18;
  undefined8 *puVar19;
  long ******pppppplVar20;
  long ******pppppplVar21;
  ulong uVar22;
  undefined8 uVar23;
  long *******ppppppplVar24;
  long lVar25;
  long lVar26;
  long *****ppppplVar27;
  int *piVar28;
  ulong uVar29;
  ulong uVar30;
  long *******ppppppplStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  long *******ppppppplStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  long ******pppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  ulong uStack_2a0;
  long *******ppppppplStack_298;
  long *******ppppppplStack_290;
  long *******ppppppplStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined2 uStack_268;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  ulong uStack_238;
  ulong uStack_230;
  undefined2 uStack_228;
  short sStack_220;
  short sStack_21e;
  short sStack_21c;
  undefined2 uStack_21a;
  ulong uStack_218;
  ulong uStack_210;
  short sStack_208;
  short sStack_206;
  short sStack_204;
  undefined2 uStack_202;
  ulong uStack_200;
  ulong uStack_1f8;
  long ******pppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined2 uStack_1b8;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  uint uStack_190;
  undefined4 uStack_18c;
  long *******ppppppplStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_128;
  undefined1 uStack_118;
  undefined2 uStack_116;
  undefined1 uStack_114;
  long ******pppppplStack_100;
  long *******ppppppplStack_f8;
  undefined8 uStack_f0;
  long ******pppppplStack_e8;
  short *psStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  long ******pppppplStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_68;
  undefined1 uStack_58;
  undefined2 uStack_56;
  undefined1 uStack_54;
  long *plStack_40;
  long *****ppppplStack_38;
  
  func_0x05d54750(&sStack_220,&UNK_0f299a60);
  puVar19 = (undefined8 *)param_1[7];
  ppppppplStack_2d8 =
       (long *******)CONCAT26(uStack_21a,CONCAT24(sStack_21c,CONCAT22(sStack_21e,sStack_220)));
  if (*(char *)((long)puVar19 + 6) == '\0') {
    *puVar19 = ppppppplStack_2d8;
    if ((puVar19[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar19[1] & 0xff00ffffffffffff) - 8);
    }
    puVar19[1] = 0;
    uVar29 = uStack_218;
    if ((uStack_218 & 0x80000000000000) != 0) {
      uVar29 = uStack_218 & 0xff00ffffffffffff;
      lVar26 = *(long *)(uVar29 - 8);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar19[1] = uVar29;
    if ((puVar19[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar19[2] & 0xff00ffffffffffff) - 8);
    }
    puVar19[2] = 0;
    uVar29 = uStack_210;
    if ((uStack_210 & 0x80000000000000) != 0) {
      uVar29 = uStack_210 & 0xff00ffffffffffff;
      lVar26 = *(long *)(uVar29 - 8);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar19[2] = uVar29;
    ppppppplStack_2d8 =
         (long *******)CONCAT26(uStack_21a,CONCAT24(sStack_21c,CONCAT22(sStack_21e,sStack_220)));
  }
  ppppppplStack_2b8 = (long *******)*param_1;
  pppppplStack_100 =
       (long ******)CONCAT71(pppppplStack_100._1_7_,*(undefined1 *)((long)param_1 + 0x94));
  uStack_2d0 = uStack_218;
  if ((uStack_218 & 0x80000000000000) != 0) {
    uVar29 = uStack_218 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uStack_2d0 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_2c8 = 0;
  uVar29 = uStack_210;
  if ((uStack_210 & 0x80000000000000) != 0) {
    uVar29 = uStack_210 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  pppppplStack_2c0 = (long ******)(param_1 + 8);
  uVar30 = param_1[9];
  uVar15 = uVar30 & 0x80000000000000;
  uVar9 = (ushort)(uVar30 >> 0x30);
  uStack_2c8 = uVar29;
  if (uVar15 == 0) {
    if ((uVar30 & 0x7f000000000000) == 0) goto LAB_0b0eb169;
    uVar22 = (ulong)(uVar9 & 0x7f);
LAB_0b0eb121:
    if ((((uVar22 != 4) || (*(int *)(uVar30 & 0xff00ffffffffffff) != 0x61746562)) ||
        (*(short *)(param_1 + 8) != 9999)) ||
       ((*(short *)((long)param_1 + 0x42) != 9999 || (*(short *)((long)param_1 + 0x44) != 9999))))
    goto LAB_0b0eb169;
LAB_0b0eb3d0:
    if (uVar15 == 0) {
      if ((uVar30 & 0x7f000000000000) != 0) {
        uVar22 = (ulong)(uVar9 & 0x7f);
LAB_0b0eb407:
        uVar23 = 3;
        if ((((uVar22 == 4) &&
             (piVar28 = (int *)(uVar30 & 0xff00ffffffffffff), *piVar28 == 0x61746562)) &&
            (*(short *)(param_1 + 8) == 9999)) &&
           ((*(short *)((long)param_1 + 0x42) == 9999 && (*(short *)((long)param_1 + 0x44) == 9999))
           )) {
          ppppppplStack_2d8 = (long *******)*pppppplStack_2c0;
          if ((uStack_2d0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2d0 & 0xff00ffffffffffff) - 8)
            ;
            uVar30 = param_1[9];
            piVar28 = (int *)(uVar30 & 0xff00ffffffffffff);
            uVar15 = uVar30 & 0x80000000000000;
          }
          uStack_2d0 = 0;
          if (uVar15 != 0) {
            lVar26 = *(long *)(piVar28 + -2);
            lVar25 = lVar26 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
            if (lVar25 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar25,8);
            }
            *plVar14 = lVar26;
            func_0x0eee2f00(plVar14 + 1,piVar28,lVar26);
            *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
            uVar30 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_2d0 = uVar30;
          if ((uStack_2c8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_2c8 = 0;
          uVar29 = param_1[10];
          uVar23 = 3;
          if ((uVar29 & 0x80000000000000) != 0) {
            lVar26 = *(long *)((uVar29 & 0xff00ffffffffffff) - 8);
            lVar25 = lVar26 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8,3);
            if (lVar25 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar25,8);
            }
            *plVar14 = lVar26;
            func_0x0eee2f00(plVar14 + 1,uVar29 & 0xff00ffffffffffff,lVar26);
            *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
            uVar23 = 3;
            uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
        }
        goto LAB_0b0eb633;
      }
    }
    else {
      uVar22 = *(ulong *)((uVar30 & 0xff00ffffffffffff) - 8);
      if (uVar22 != 0) goto LAB_0b0eb407;
    }
    uVar23 = 3;
  }
  else {
    uVar22 = *(ulong *)((uVar30 & 0xff00ffffffffffff) - 8);
    if (uVar22 != 0) goto LAB_0b0eb121;
LAB_0b0eb169:
    if ((uStack_218 & 0x80000000000000) != 0) {
      uVar22 = *(ulong *)((uStack_218 & 0xff00ffffffffffff) - 8);
      if (uVar22 != 0) goto LAB_0b0eb1b2;
      goto LAB_0b0eb3d0;
    }
    if ((uStack_218 & 0x7f000000000000) == 0) goto LAB_0b0eb3d0;
    uVar22 = (ulong)((ushort)(uStack_218 >> 0x30) & 0x7f);
LAB_0b0eb1b2:
    if (((uVar22 != 4) || (*(int *)(uStack_218 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_220 != 9999 || ((sStack_21e != 9999 || (sStack_21c != 9999)))))) goto LAB_0b0eb3d0;
    puVar19 = (undefined8 *)param_1[1];
    ppppppplStack_2d8 = (long *******)*puVar19;
    if ((uStack_2d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2d0 & 0xff00ffffffffffff) - 8);
    }
    uStack_2d0 = 0;
    uVar29 = puVar19[1];
    if ((uVar29 & 0x80000000000000) != 0) {
      lVar26 = *(long *)((uVar29 & 0xff00ffffffffffff) - 8);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,uVar29 & 0xff00ffffffffffff,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2d0 = uVar29;
    if ((uStack_2c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2c8 = 0;
    uVar29 = puVar19[2];
    uVar23 = 1;
    if ((uVar29 & 0x80000000000000) != 0) {
      lVar26 = *(long *)((uVar29 & 0xff00ffffffffffff) - 8);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8,1);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,uVar29 & 0xff00ffffffffffff,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar23 = 1;
      uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
LAB_0b0eb633:
  uStack_2c8 = uVar29;
  func_0x0d6b3300(&ppppppplStack_1e8,pppppplStack_2c0,&ppppppplStack_2d8,uVar23);
  if ((param_1[5] == 0) &&
     (cVar13 = FUN_0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_01230451),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar14 = param_1 + 5;
  pppppplVar17 = (long ******)(param_1 + 2);
  if (((char *)param_1[2] == (char *)0x0) || (*(char *)param_1[2] != '\x01')) {
    cVar13 = FUN_0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_01230451);
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppplVar27 = (long *****)*plVar14;
    if ((*pppppplVar17 == (long *****)0x0) &&
       (cVar13 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    ppppplVar27 = (long *****)*plVar14;
  }
  if ((*(char *)*pppppplVar17 == '\0') &&
     (cVar13 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar23 = param_1[4];
  pppppplVar16 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppppplVar16 == (long ******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppppppplStack_2b0 = (long *******)param_1[8];
  ppppppplVar24 = (long *******)param_1[9];
  pppppplStack_1f0 = pppppplVar17;
  ppppppplStack_f8 = ppppppplStack_2b0;
  uStack_f0 = uVar23;
  plStack_40 = plVar14;
  ppppplStack_38 = ppppplVar27;
  if (((ulong)ppppppplVar24 & 0x80000000000000) != 0) {
    lVar26 = *(long *)(((ulong)ppppppplVar24 & 0xff00ffffffffffff) - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,(ulong)ppppppplVar24 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    ppppppplVar24 = (long *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_2a0 = 0;
  ppppppplStack_248 = (long *******)param_1[10];
  if (((ulong)ppppppplStack_248 & 0x80000000000000) != 0) {
    lVar26 = *(long *)(((ulong)ppppppplStack_248 & 0xff00ffffffffffff) - 8);
    lVar25 = lVar26 + 9;
    ppppppplStack_2a8 = ppppppplVar24;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,(ulong)ppppppplStack_248 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    ppppppplStack_248 = (long *******)((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000)
    ;
  }
  uStack_180 = (long *****)uStack_1c0;
  ppppppplStack_188 = (long *******)uStack_1c8;
  ppppppplStack_198 = (long *******)uStack_1d8;
  ppppppplStack_1a0 = ppppppplStack_1e0;
  uStack_268 = uStack_1b8;
  uVar2 = *(undefined2 *)((long)param_1 + 0x92);
  ppppppplStack_2a8 = (long *******)0x0;
  uStack_2a0 = 0;
  ppppppplStack_298 = ppppppplStack_1e8;
  ppppppplStack_1e0 = (long *******)0x0;
  ppppppplStack_1a8 = ppppppplStack_1e8;
  ppppppplStack_290 = (long *******)0x0;
  ppppppplStack_288 = (long *******)0x0;
  uStack_1d8 = 0;
  uStack_280 = uStack_1d0;
  uStack_190 = (uint)uStack_1d0;
  uStack_18c = uStack_1d0._4_4_;
  uStack_278 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_270 = 0;
  uStack_178 = CONCAT22(uStack_178._2_2_,uStack_1b8);
  ppppppplStack_258 = ppppppplStack_f8;
  ppppppplStack_250 = ppppppplVar24;
  func_0x0d6a8a30(pppppplVar16,uStack_f0,&ppppppplStack_258,&ppppppplStack_1a8);
  if (((ulong)uStack_180 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_180 & 0xff00ffffffffffff) - 8);
  }
  uStack_180 = (long *****)0x0;
  if (((ulong)ppppppplStack_188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_188 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_188 = (long *******)0x0;
  if (((ulong)ppppppplStack_198 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_198 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_198 = (long *******)0x0;
  if (((ulong)ppppppplStack_1a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_1a0 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_1a0 = (long *******)0x0;
  if (((ulong)ppppppplStack_248 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_248 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_248 = (long *******)0x0;
  if (((ulong)ppppppplStack_250 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_250 & 0xff00ffffffffffff) - 8);
  }
  *pppppplVar16 = (long *****)&UNK_0f2818d0;
  pppppplVar16[0xe] = ppppplStack_38;
  *(undefined2 *)(pppppplVar16 + 0xf) = uVar2;
  *(undefined1 *)((long)pppppplVar16 + 0x7a) = pppppplStack_100._0_1_;
  ppppppplStack_1a8 = (long *******)pppppplVar16;
  if ((uStack_1c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
  }
  uStack_1c0 = 0;
  if ((uStack_1c8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1c8 = 0;
  if ((uStack_1d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1d8 = 0;
  if (((ulong)ppppppplStack_1e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_1e0 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_2c8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2c8 = 0;
  if ((uStack_2d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2d0 & 0xff00ffffffffffff) - 8);
  }
  if (ppppppplStack_1a8 != (long *******)0x0) {
    pppppplVar17 = *ppppppplStack_2b8;
    pppppplVar16 = ppppppplStack_2b8[1];
    while ((pppppplVar17 != pppppplVar16 &&
           (cVar13 = func_0x04fa7a10(*pppppplVar17 + 4,ppppppplStack_1a8 + 7), cVar13 != '\0'))) {
      pppppplVar17 = pppppplVar17 + 1;
    }
    func_0x0d6af860(ppppppplStack_2b8,pppppplVar17,&ppppppplStack_1a8);
    ppppppplVar24 = ppppppplStack_1a8;
    ppppppplStack_1a8 = (long *******)0x0;
    if (ppppppplVar24 != (long *******)0x0) {
      (*(code *)(*ppppppplVar24)[1])();
    }
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  if ((uStack_218 & 0x80000000000000) == 0) {
    if ((uStack_218 & 0x7f000000000000) == 0) goto LAB_0b0ebde7;
    uVar29 = (ulong)((ushort)(uStack_218 >> 0x30) & 0x7f);
LAB_0b0ebda5:
    if ((((uVar29 != 4) || (*(int *)(uStack_218 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_220 != 9999)) || ((sStack_21e != 9999 || (sStack_21c != 9999)))) goto LAB_0b0ebde7;
  }
  else {
    uVar29 = *(ulong *)((uStack_218 & 0xff00ffffffffffff) - 8);
    if (uVar29 != 0) goto LAB_0b0ebda5;
LAB_0b0ebde7:
    ppppppplStack_2b8 = (long *******)*param_1;
    if ((((char *)param_1[2] == (char *)0x0) || (*(char *)param_1[2] == '\0')) &&
       (cVar13 = FUN_0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_0136ae7d),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((param_1[6] == 0) &&
       (cVar13 = FUN_0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_0136ae7d),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppppplVar24 = (long *******)param_1[6];
    if ((param_1[2] == 0) &&
       (cVar13 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*pppppplStack_1f0 == '\0') &&
       (cVar13 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppplVar27 = (long *****)param_1[4];
    pppppplVar17 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (pppppplVar17 == (long ******)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(pppppplVar17,pppppplStack_2c0,&sStack_220);
    pppppplVar17[8] = (long *****)0x0;
    pppppplVar17[9] = (long *****)0x0;
    pppppplVar17[10] = (long *****)0x0;
    ppppplVar18 = (long *****)ppppplVar27[1];
    ppppplVar3 = (long *****)ppppplVar27[2];
    if (ppppplVar3 == (long *****)0x0) {
      pppppplVar17[8] = ppppplVar18;
      pppppplVar17[9] = (long *****)0x0;
    }
    else {
      LOCK();
      ppppplVar3[1] = (long ****)((long)ppppplVar3[1] + 1);
      UNLOCK();
      ppppplVar4 = pppppplVar17[9];
      pppppplVar17[8] = ppppplVar18;
      pppppplVar17[9] = ppppplVar3;
      if (ppppplVar4 != (long *****)0x0) {
        LOCK();
        ppppplVar18 = ppppplVar4 + 1;
        pppplVar1 = *ppppplVar18;
        *ppppplVar18 = (long ****)((long)*ppppplVar18 + -1);
        UNLOCK();
        if (pppplVar1 == (long ****)0x0) {
          (*(code *)(*ppppplVar4)[2])(ppppplVar4);
          FUN_0412c2d0(ppppplVar4);
        }
        ppppplVar18 = pppppplVar17[8];
      }
    }
    if ((ppppplVar18 == (long *****)0x0) ||
       (pppppplVar17[10] = ppppplVar27, *(char *)ppppplVar18 == '\0')) goto LAB_0b0eeabd;
    pppppplVar17[0xe] = (long *****)0x0;
    pppppplVar17[0xf] = (long *****)0x0;
    pppppplVar17[0xc] = (long *****)0x0;
    pppppplVar17[0xd] = (long *****)0x0;
    *(undefined4 *)(pppppplVar17 + 0x10) = 0x3f800000;
    *(undefined1 *)(pppppplVar17 + 0x12) = 0;
    *(undefined1 *)(pppppplVar17 + 0x24) = 0;
    *pppppplVar17 = (long *****)&UNK_0f281988;
    pppppplVar17[0x2a] = (long *****)0x0;
    pppppplVar17[0x30] = (long *****)0x0;
    pppppplVar17[0x32] = (long *****)ppppppplVar24;
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar23 = _UNK_0123d566;
    puVar19[2] = _DAT_0123d55e;
    puVar19[3] = uVar23;
    uVar23 = _UNK_0123d556;
    *puVar19 = _DAT_0123d54e;
    puVar19[1] = uVar23;
    *(undefined1 *)(puVar19 + 4) = 0;
    ppppppplStack_298 = (long *******)0x0;
    ppppppplStack_290 = (long *******)0x0;
    ppppppplStack_288 = (long *******)0x0;
    ppppppplStack_1e0 = (long *******)((ulong)ppppppplStack_1e0 & 0xffffffffffffff00);
    ppppppplStack_1e8 = (long *******)&ppppppplStack_298;
    ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (ppppppplVar24 == (long *******)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    ppppppplStack_288 = ppppppplVar24 + 6;
    ppppppplStack_1a0 = (long *******)&ppppppplStack_2b0;
    uStack_190 = uStack_190 & 0xffffff00;
    *ppppppplVar24 = (long ******)0x656e6f706d6f6314;
    ppppppplVar24[1] = (long ******)0x73746e;
    ppppppplStack_258 = ppppppplVar24 + 3;
    ppppppplStack_2b0 = ppppppplVar24;
    ppppppplStack_298 = ppppppplVar24;
    ppppppplStack_290 = ppppppplVar24;
    ppppppplStack_1a8 = (long *******)&ppppppplStack_298;
    ppppppplStack_198 = (long *******)&ppppppplStack_258;
    func_0x0412e5e0(ppppppplStack_258,puVar19,0x20);
    ppppppplStack_290 = ppppppplStack_258 + 3;
    ppppppplStack_1e8 = (long *******)0x0;
    ppppppplStack_1e0 = (long *******)0x0;
    uStack_1d8 = 0;
    func_0x0b299bc0(pppppplVar17,&ppppppplStack_298,&ppppppplStack_1e8);
    ppppppplVar10 = ppppppplStack_1e8;
    ppppppplVar24 = ppppppplStack_1e0;
    if (ppppppplStack_1e8 != (long *******)0x0) {
      for (; ppppppplVar10 != ppppppplVar24; ppppppplVar24 = ppppppplVar24 + -3) {
        if (((ulong)ppppppplVar24[-3] & 1) != 0) {
          func_0x0412a280(ppppppplVar24[-1],(ulong)ppppppplVar24[-3] & 0xfffffffffffffffe);
        }
      }
      ppppppplStack_1e0 = ppppppplVar10;
      func_0x0412a280(ppppppplVar10,uStack_1d8 - (long)ppppppplVar10);
    }
    ppppppplVar10 = ppppppplStack_298;
    ppppppplVar24 = ppppppplStack_290;
    if (ppppppplStack_298 != (long *******)0x0) {
      for (; ppppppplVar10 != ppppppplVar24; ppppppplVar24 = ppppppplVar24 + -3) {
        if (((ulong)ppppppplVar24[-3] & 1) != 0) {
          func_0x0412a280(ppppppplVar24[-1],(ulong)ppppppplVar24[-3] & 0xfffffffffffffffe);
        }
      }
      ppppppplStack_290 = ppppppplVar10;
      func_0x0412a280(ppppppplStack_298,(long)ppppppplStack_288 - (long)ppppppplStack_298);
    }
    func_0x0412a280(puVar19,0x28);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar23 = _UNK_0123d566;
    puVar19[2] = _DAT_0123d55e;
    puVar19[3] = uVar23;
    uVar23 = _UNK_0123d556;
    *puVar19 = _DAT_0123d54e;
    puVar19[1] = uVar23;
    *(undefined1 *)(puVar19 + 4) = 0;
    ppppppplStack_258 = (long *******)0x0;
    ppppppplStack_250 = (long *******)0x0;
    ppppppplStack_248 = (long *******)0x0;
    ppppppplStack_2a8 = (long *******)((ulong)ppppppplStack_2a8 & 0xffffffffffffff00);
    ppppppplStack_2b0 = (long *******)&ppppppplStack_258;
    ppppppplStack_2f0 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (ppppppplStack_2f0 == (long *******)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    ppppppplStack_248 = ppppppplStack_2f0 + 9;
    ppppppplStack_1a0 = (long *******)&ppppppplStack_2f0;
    ppppppplStack_198 = (long *******)&ppppppplStack_2d8;
    uStack_190 = uStack_190 & 0xffffff00;
    *ppppppplStack_2f0 = (long ******)0x656e6f706d6f6320;
    ppppppplStack_2f0[1] = (long ******)0x70756f72675f746e;
    ppppppplStack_2f0[2] = (long ******)0x73;
    ppppppplStack_2f0[3] = (long ******)&UNK_03020106;
    ppppppplStack_2d8 = ppppppplStack_2f0 + 6;
    ppppppplStack_2f0[4] = (long ******)0x0;
    ppppppplStack_2f0[5] = (long ******)0x0;
    ppppppplStack_258 = ppppppplStack_2f0;
    ppppppplStack_250 = ppppppplStack_2f0;
    ppppppplStack_1a8 = (long *******)&ppppppplStack_258;
    func_0x0412e5e0(ppppppplStack_2d8,puVar19,0x20);
    ppppppplStack_250 = ppppppplStack_2d8 + 3;
    ppppppplStack_1a8 = (long *******)0x0;
    ppppppplStack_1a0 = (long *******)0x0;
    ppppppplStack_198 = (long *******)0x0;
    func_0x0b299bc0(pppppplVar17,&ppppppplStack_258,&ppppppplStack_1a8);
    ppppppplVar10 = ppppppplStack_1a8;
    ppppppplVar24 = ppppppplStack_1a0;
    if (ppppppplStack_1a8 != (long *******)0x0) {
      for (; ppppppplVar10 != ppppppplVar24; ppppppplVar24 = ppppppplVar24 + -3) {
        if (((ulong)ppppppplVar24[-3] & 1) != 0) {
          func_0x0412a280(ppppppplVar24[-1],(ulong)ppppppplVar24[-3] & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(ppppppplVar10,(long)ppppppplStack_198 - (long)ppppppplVar10);
    }
    ppppppplVar10 = ppppppplStack_258;
    ppppppplVar24 = ppppppplStack_250;
    if (ppppppplStack_258 != (long *******)0x0) {
      for (; ppppppplVar10 != ppppppplVar24; ppppppplVar24 = ppppppplVar24 + -3) {
        if (((ulong)ppppppplVar24[-3] & 1) != 0) {
          func_0x0412a280(ppppppplVar24[-1],(ulong)ppppppplVar24[-3] & 0xfffffffffffffffe);
        }
      }
      ppppppplStack_250 = ppppppplVar10;
      func_0x0412a280(ppppppplStack_258,(long)ppppppplStack_248 - (long)ppppppplStack_258);
    }
    lVar25 = 0x28;
    func_0x0412a280(puVar19,0x28);
    pppppplVar20 = (long ******)&UNK_0f299460;
    ppppppplStack_1a8 = (long *******)&UNK_0f299460;
    pppppplVar21 = pppppplVar17 + 0x26;
    pppppplVar16 = (long ******)pppppplVar17[0x2a];
    pppppplVar17[0x2a] = (long *****)0x0;
    ppppppplStack_188 = (long *******)&ppppppplStack_1a8;
    if (pppppplVar16 == pppppplVar21) {
      lVar25 = 0x20;
LAB_0b0ec499:
      (**(code **)((long)*pppppplVar16 + lVar25))();
      if (ppppppplStack_188 == (long *******)0x0) {
        pppppplVar17[0x2a] = (long *****)0x0;
      }
      else {
        if ((long ********)ppppppplStack_188 == &ppppppplStack_1a8) {
          pppppplVar20 = *ppppppplStack_188;
          goto LAB_0b0ec4d3;
        }
        pppppplVar17[0x2a] = (long *****)ppppppplStack_188;
      }
    }
    else {
      if (pppppplVar16 != (long ******)0x0) goto LAB_0b0ec499;
LAB_0b0ec4d3:
      pppppplVar17[0x2a] = (long *****)pppppplVar21;
      (*(code *)pppppplVar20[3])(ppppppplStack_188,pppppplVar21);
      if ((long ********)ppppppplStack_188 == &ppppppplStack_1a8) {
        lVar25 = 0x20;
      }
      else {
        lVar25 = 0x28;
        if (ppppppplStack_188 == (long *******)0x0) goto LAB_0b0ec50f;
      }
      (**(code **)((long)*ppppppplStack_188 + lVar25))();
    }
LAB_0b0ec50f:
    if ((_DAT_0f6b1120 == 0) &&
       (cVar13 = FUN_0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar5 = *(undefined8 **)(_DAT_0f6b1120 + 400);
    for (puVar19 = *(undefined8 **)(_DAT_0f6b1120 + 0x188); puVar19 != puVar5; puVar19 = puVar19 + 1
        ) {
      (*(code *)*puVar19)(pppppplVar17);
    }
    ppppppplStack_1a8 = (long *******)pppppplVar17;
    func_0x0d6afb30(ppppppplStack_2b8,&ppppppplStack_1a8);
    if (ppppppplStack_1a8 != (long *******)0x0) {
      (*(code *)(*ppppppplStack_1a8)[1])();
    }
  }
  pppppplStack_e8 = (long ******)*param_1;
  psStack_e0 = (short *)param_1[1];
  pcStack_d8 = (char *)param_1[2];
  uStack_d0 = param_1[3];
  *pppppplStack_1f0 = (long *****)0x0;
  pppppplStack_1f0[1] = (long *****)0x0;
  pppppplStack_c8 = (long ******)param_1[4];
  param_1[4] = 0;
  puStack_b0 = (undefined8 *)plStack_40[2];
  uStack_c0 = (undefined4)*plStack_40;
  uStack_bc = *(undefined4 *)((long)plStack_40 + 4);
  uStack_b8 = (undefined4)plStack_40[1];
  uStack_b4 = *(undefined4 *)((long)plStack_40 + 0xc);
  uStack_a8 = (long *******)
              CONCAT26(uStack_21a,CONCAT24(sStack_21c,CONCAT22(sStack_21e,sStack_220)));
  uStack_a0 = 0;
  uVar29 = uStack_218;
  if ((uStack_218 & 0x80000000000000) != 0) {
    uVar29 = uStack_218 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_98 = 0;
  uVar30 = uStack_210;
  uStack_a0 = uVar29;
  if ((uStack_210 & 0x80000000000000) != 0) {
    uVar29 = uStack_210 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar30 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_68 = 0;
  uStack_58 = 1;
  uStack_56 = 0xfffc;
  uStack_54 = 1;
  uStack_98 = uVar30;
  func_0x05d54750(&sStack_208,&UNK_0f299920);
  puVar19 = puStack_b0;
  ppppppplVar24 =
       (long *******)CONCAT26(uStack_202,CONCAT24(sStack_204,CONCAT22(sStack_206,sStack_208)));
  if (*(char *)((long)puStack_b0 + 6) == '\0') {
    *puStack_b0 = ppppppplVar24;
    if ((puStack_b0[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puStack_b0[1] & 0xff00ffffffffffff) - 8);
    }
    puVar19[1] = 0;
    uVar29 = uStack_200;
    if ((uStack_200 & 0x80000000000000) != 0) {
      uVar29 = uStack_200 & 0xff00ffffffffffff;
      lVar26 = *(long *)(uVar29 - 8);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar19[1] = uVar29;
    if ((puVar19[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar19[2] & 0xff00ffffffffffff) - 8);
    }
    puVar19[2] = 0;
    uVar29 = uStack_1f8;
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      uVar29 = uStack_1f8 & 0xff00ffffffffffff;
      lVar26 = *(long *)(uVar29 - 8);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar19[2] = uVar29;
    ppppppplVar24 =
         (long *******)CONCAT26(uStack_202,CONCAT24(sStack_204,CONCAT22(sStack_206,sStack_208)));
  }
  pppppplVar17 = pppppplStack_e8;
  pppppplStack_2c0 = (long ******)CONCAT71(pppppplStack_2c0._1_7_,uStack_54);
  uStack_2e8 = uStack_200;
  ppppppplStack_2f0 = ppppppplVar24;
  if ((uStack_200 & 0x80000000000000) != 0) {
    uVar29 = uStack_200 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uStack_2e8 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_2e0 = 0;
  uVar29 = uStack_1f8;
  if ((uStack_1f8 & 0x80000000000000) != 0) {
    uVar29 = uStack_1f8 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar12 = psStack_e0;
  uVar30 = uStack_a0 & 0x80000000000000;
  uVar9 = (ushort)(uStack_a0 >> 0x30);
  uStack_2e0 = uVar29;
  if (uVar30 == 0) {
    if ((uStack_a0 & 0x7f000000000000) == 0) goto LAB_0b0ecac9;
    uVar15 = (ulong)(uVar9 & 0x7f);
LAB_0b0eca81:
    if ((((uVar15 != 4) || (*(int *)(uStack_a0 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_a8 != 9999)) || ((uStack_a8._2_2_ != 9999 || (uStack_a8._4_2_ != 9999))))
    goto LAB_0b0ecac9;
LAB_0b0eccee:
    if (uVar30 == 0) {
      if ((uStack_a0 & 0x7f000000000000) != 0) {
        uVar15 = (ulong)(uVar9 & 0x7f);
LAB_0b0ecd25:
        uVar23 = 3;
        if ((((uVar15 == 4) &&
             (piVar28 = (int *)(uStack_a0 & 0xff00ffffffffffff), *piVar28 == 0x61746562)) &&
            ((short)uStack_a8 == 9999)) && ((uStack_a8._2_2_ == 9999 && (uStack_a8._4_2_ == 9999))))
        {
          ppppppplStack_2f0 = uStack_a8;
          if ((uStack_2e8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8)
            ;
            piVar28 = (int *)(uStack_a0 & 0xff00ffffffffffff);
            uVar30 = uStack_a0 & 0x80000000000000;
          }
          uStack_2e8 = 0;
          uVar29 = uStack_a0;
          if (uVar30 != 0) {
            lVar26 = *(long *)(piVar28 + -2);
            lVar25 = lVar26 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
            if (lVar25 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar25,8);
            }
            *plVar14 = lVar26;
            func_0x0eee2f00(plVar14 + 1,piVar28,lVar26);
            *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
            uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_2e8 = uVar29;
          if ((uStack_2e0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_2e0 = 0;
          uVar23 = 3;
          uVar29 = uStack_98;
          if ((uStack_98 & 0x80000000000000) != 0) {
            uVar29 = uStack_98 & 0xff00ffffffffffff;
            lVar26 = *(long *)(uVar29 - 8);
            lVar25 = lVar26 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8,3);
            if (lVar25 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar25,8);
            }
            *plVar14 = lVar26;
            func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
            *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
            uVar23 = 3;
            uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
        }
        goto LAB_0b0ecf22;
      }
    }
    else {
      uVar15 = *(ulong *)((uStack_a0 & 0xff00ffffffffffff) - 8);
      if (uVar15 != 0) goto LAB_0b0ecd25;
    }
    uVar23 = 3;
  }
  else {
    uVar15 = *(ulong *)((uStack_a0 & 0xff00ffffffffffff) - 8);
    if (uVar15 != 0) goto LAB_0b0eca81;
LAB_0b0ecac9:
    if ((uStack_200 & 0x80000000000000) != 0) {
      uVar15 = *(ulong *)((uStack_200 & 0xff00ffffffffffff) - 8);
      if (uVar15 != 0) goto LAB_0b0ecb12;
      goto LAB_0b0eccee;
    }
    if ((uStack_200 & 0x7f000000000000) == 0) goto LAB_0b0eccee;
    uVar15 = (ulong)((ushort)(uStack_200 >> 0x30) & 0x7f);
LAB_0b0ecb12:
    if (((uVar15 != 4) || (*(int *)(uStack_200 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_208 != 9999 || ((sStack_206 != 9999 || (sStack_204 != 9999)))))) goto LAB_0b0eccee;
    ppppppplStack_2f0 = *(long ********)psStack_e0;
    if ((uStack_2e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2e8 = 0;
    uVar29 = *(ulong *)(psVar12 + 4);
    if ((uVar29 & 0x80000000000000) != 0) {
      lVar26 = *(long *)((uVar29 & 0xff00ffffffffffff) - 8);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,uVar29 & 0xff00ffffffffffff,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2e8 = uVar29;
    if ((uStack_2e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
    }
    uStack_2e0 = 0;
    uVar29 = *(ulong *)(psVar12 + 8);
    uVar23 = 1;
    if ((uVar29 & 0x80000000000000) != 0) {
      lVar26 = *(long *)((uVar29 & 0xff00ffffffffffff) - 8);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8,1);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,uVar29 & 0xff00ffffffffffff,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar23 = 1;
      uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
LAB_0b0ecf22:
  uStack_2e0 = uVar29;
  func_0x0d6b3300(&ppppppplStack_258,&uStack_a8,&ppppppplStack_2f0,uVar23);
  if ((CONCAT44(uStack_bc,uStack_c0) == 0) &&
     (cVar13 = FUN_0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_0134e353),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_d8 == (char *)0x0) || (*pcStack_d8 != '\x01')) {
    cVar13 = FUN_0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_0134e353);
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppplVar16 = (long ******)CONCAT44(uStack_bc,uStack_c0);
    if ((pcStack_d8 == (char *)0x0) &&
       (cVar13 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    pppppplVar16 = (long ******)CONCAT44(uStack_bc,uStack_c0);
  }
  if ((*pcStack_d8 == '\0') &&
     (cVar13 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppppplVar20 = pppppplStack_c8;
  ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppppplVar24 == (long *******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pppppplStack_1f0 = pppppplVar20;
  ppppppplStack_2d8 = uStack_a8;
  ppppppplStack_2b8 = uStack_a8;
  uVar29 = uStack_a0;
  pppppplStack_100 = pppppplVar16;
  if ((uStack_a0 & 0x80000000000000) != 0) {
    uVar29 = uStack_a0 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_2c8 = 0;
  uVar30 = uStack_98;
  if ((uStack_98 & 0x80000000000000) != 0) {
    uVar30 = uStack_98 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar30 - 8);
    lVar25 = lVar26 + 9;
    uStack_2d0 = uVar29;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar30,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar30 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uVar2 = uStack_56;
  uStack_270 = uStack_230;
  uStack_278 = uStack_238;
  ppppppplStack_288 = ppppppplStack_248;
  ppppppplStack_290 = ppppppplStack_250;
  uStack_1b8 = uStack_228;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  ppppppplStack_1e8 = ppppppplStack_258;
  ppppppplStack_250 = (long *******)0x0;
  ppppppplStack_248 = (long *******)0x0;
  ppppppplStack_298 = ppppppplStack_258;
  ppppppplStack_1e0 = (long *******)0x0;
  uStack_1d8 = 0;
  uStack_280 = CONCAT44(uStack_23c,uStack_240);
  uStack_1c8 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_1c0 = 0;
  uStack_268 = uStack_228;
  ppppppplStack_2b0 = ppppppplStack_2b8;
  ppppppplStack_2a8 = (long *******)uVar29;
  uStack_2a0 = uVar30;
  func_0x0d6a8a30(ppppppplVar24,pppppplStack_1f0,&ppppppplStack_2b0,&ppppppplStack_298);
  if ((uStack_270 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
  }
  uStack_270 = 0;
  if ((uStack_278 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
  }
  uStack_278 = 0;
  if (((ulong)ppppppplStack_288 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_288 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_288 = (long *******)0x0;
  if (((ulong)ppppppplStack_290 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_290 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_290 = (long *******)0x0;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a0 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a0 = 0;
  if (((ulong)ppppppplStack_2a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  *ppppppplVar24 = (long ******)&UNK_0f281738;
  ppppppplVar24[0xe] = pppppplStack_100;
  *(undefined2 *)(ppppppplVar24 + 0xf) = uVar2;
  *(undefined1 *)((long)ppppppplVar24 + 0x7a) = pppppplStack_2c0._0_1_;
  ppppppplStack_298 = ppppppplVar24;
  if ((uStack_230 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
  }
  uStack_230 = 0;
  if ((uStack_238 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_238 & 0xff00ffffffffffff) - 8);
  }
  uStack_238 = 0;
  if (((ulong)ppppppplStack_248 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_248 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_248 = (long *******)0x0;
  if (((ulong)ppppppplStack_250 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_250 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_2e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
  }
  uStack_2e0 = 0;
  if ((uStack_2e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
  }
  if (ppppppplStack_298 != (long *******)0x0) {
    ppppplVar27 = *pppppplVar17;
    ppppplVar18 = pppppplVar17[1];
    while ((ppppplVar27 != ppppplVar18 &&
           (cVar13 = func_0x04fa7a10(*ppppplVar27 + 4,ppppppplStack_298 + 7), cVar13 != '\0'))) {
      ppppplVar27 = ppppplVar27 + 1;
    }
    func_0x0d6af860(pppppplVar17,ppppplVar27,&ppppppplStack_298);
    ppppppplVar24 = ppppppplStack_298;
    ppppppplStack_298 = (long *******)0x0;
    if (ppppppplVar24 != (long *******)0x0) {
      (*(code *)(*ppppppplVar24)[1])();
    }
  }
  pppppplVar17 = pppppplStack_e8;
  uStack_58 = 0;
  if ((uStack_200 & 0x80000000000000) == 0) {
    if ((uStack_200 & 0x7f000000000000) == 0) goto LAB_0b0ed666;
    uVar29 = (ulong)((ushort)(uStack_200 >> 0x30) & 0x7f);
LAB_0b0ed624:
    if ((((uVar29 != 4) || (*(int *)(uStack_200 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_208 != 9999)) || ((sStack_206 != 9999 || (sStack_204 != 9999)))) goto LAB_0b0ed666;
  }
  else {
    uVar29 = *(ulong *)((uStack_200 & 0xff00ffffffffffff) - 8);
    if (uVar29 != 0) goto LAB_0b0ed624;
LAB_0b0ed666:
    if (((pcStack_d8 == (char *)0x0) || (*pcStack_d8 == '\0')) &&
       (cVar13 = FUN_0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_012b0dca),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((CONCAT44(uStack_b4,uStack_b8) == 0) &&
       (cVar13 = FUN_0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_012b0dca),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppplVar16 = (long ******)CONCAT44(uStack_b4,uStack_b8);
    if ((pcStack_d8 == (char *)0x0) &&
       (cVar13 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*pcStack_d8 == '\0') &&
       (cVar13 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppplVar20 = pppppplStack_c8;
    ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (ppppppplVar24 == (long *******)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(ppppppplVar24,&uStack_a8,&sStack_208);
    ppppppplVar24[8] = (long ******)0x0;
    ppppppplVar24[9] = (long ******)0x0;
    ppppppplVar24[10] = (long ******)0x0;
    pppppplVar21 = (long ******)pppppplVar20[1];
    pppppplVar6 = (long ******)pppppplVar20[2];
    if (pppppplVar6 == (long ******)0x0) {
      ppppppplVar24[8] = pppppplVar21;
      ppppppplVar24[9] = (long ******)0x0;
    }
    else {
      LOCK();
      pppppplVar6[1] = (long *****)((long)pppppplVar6[1] + 1);
      UNLOCK();
      pppppplVar7 = ppppppplVar24[9];
      ppppppplVar24[8] = pppppplVar21;
      ppppppplVar24[9] = pppppplVar6;
      if (pppppplVar7 != (long ******)0x0) {
        LOCK();
        pppppplVar21 = pppppplVar7 + 1;
        ppppplVar27 = *pppppplVar21;
        *pppppplVar21 = (long *****)((long)*pppppplVar21 + -1);
        UNLOCK();
        if (ppppplVar27 == (long *****)0x0) {
          (*(code *)(*pppppplVar7)[2])(pppppplVar7);
          FUN_0412c2d0(pppppplVar7);
        }
        pppppplVar21 = ppppppplVar24[8];
      }
    }
    if ((pppppplVar21 == (long ******)0x0) ||
       (ppppppplVar24[10] = pppppplVar20, *(char *)pppppplVar21 == '\0')) {
LAB_0b0eeabd:
      uVar23 = func_0x04890760();
      (*(code *)(*ppppppplVar24)[1])(ppppppplVar24);
      func_0x0ee386e0(&uStack_1f8);
      func_0x0ee386e0(&uStack_200);
      func_0x0b0ef1a0(&pppppplStack_e8);
      func_0x0ee386e0(&uStack_210);
      func_0x0ee386e0(&uStack_218);
      func_0x0eee2d70(uVar23);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    ppppppplVar24[0xe] = (long ******)0x0;
    ppppppplVar24[0xf] = (long ******)0x0;
    ppppppplVar24[0xc] = (long ******)0x0;
    ppppppplVar24[0xd] = (long ******)0x0;
    *(undefined4 *)(ppppppplVar24 + 0x10) = 0x3f800000;
    *(undefined1 *)(ppppppplVar24 + 0x12) = 0;
    *(undefined1 *)(ppppppplVar24 + 0x24) = 0;
    *ppppppplVar24 = (long ******)&UNK_0f2817f0;
    ppppppplVar24[0x2a] = (long ******)0x0;
    ppppppplVar24[0x30] = (long ******)0x0;
    ppppppplVar24[0x32] = pppppplVar16;
    if ((_DAT_0f6b1120 == 0) &&
       (cVar13 = FUN_0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar5 = *(undefined8 **)(_DAT_0f6b1120 + 0x1a8);
    for (puVar19 = *(undefined8 **)(_DAT_0f6b1120 + 0x1a0); puVar19 != puVar5; puVar19 = puVar19 + 1
        ) {
      (*(code *)*puVar19)(ppppppplVar24);
    }
    ppppppplStack_298 = ppppppplVar24;
    func_0x0d6afb30(pppppplVar17,&ppppppplStack_298);
    if (ppppppplStack_298 != (long *******)0x0) {
      (*(code *)(*ppppppplStack_298)[1])();
    }
  }
  ppppppplStack_1a8 = (long *******)pppppplStack_e8;
  ppppppplStack_1a0 = (long *******)psStack_e0;
  ppppppplStack_198 = (long *******)pcStack_d8;
  uStack_190 = (undefined4)uStack_d0;
  uStack_18c = uStack_d0._4_4_;
  pcStack_d8 = (char *)0x0;
  uStack_d0 = 0;
  ppppppplStack_188 = (long *******)pppppplStack_c8;
  pppppplStack_c8 = (long ******)0x0;
  uStack_180 = (long *****)CONCAT44(uStack_bc,uStack_c0);
  uStack_178 = uStack_b8;
  uStack_174 = uStack_b4;
  puStack_170 = puStack_b0;
  uStack_168 = (long ******)
               CONCAT26(uStack_202,CONCAT24(sStack_204,CONCAT22(sStack_206,sStack_208)));
  uStack_160 = 0;
  uVar29 = uStack_200;
  if ((uStack_200 & 0x80000000000000) != 0) {
    uVar29 = uStack_200 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_158 = 0;
  uVar30 = uStack_1f8;
  uStack_160 = uVar29;
  if ((uStack_1f8 & 0x80000000000000) != 0) {
    uVar29 = uStack_1f8 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar30 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  ppppppplVar10 = ppppppplStack_1a0;
  ppppppplVar24 = ppppppplStack_1a8;
  uStack_128 = 0;
  uStack_118 = 1;
  uStack_116 = 0xfffc;
  uStack_114 = 1;
  ppppppplStack_2f0 = (long *******)*ppppppplStack_1a0;
  uVar29 = *(ulong *)((long)ppppppplStack_1a0 + 8);
  uStack_158 = uVar30;
  if ((uVar29 & 0x80000000000000) != 0) {
    lVar26 = *(long *)((uVar29 & 0xff00ffffffffffff) - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_2e0 = 0;
  uVar30 = *(ulong *)((long)ppppppplVar10 + 0x10);
  uStack_2e8 = uVar29;
  if ((uVar30 & 0x80000000000000) != 0) {
    lVar26 = *(long *)((uVar30 & 0xff00ffffffffffff) - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar30 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar30 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  ppppppplVar11 = ppppppplStack_1a0;
  uVar29 = uStack_160 & 0x80000000000000;
  uVar9 = (ushort)(uStack_160 >> 0x30);
  uStack_2e0 = uVar30;
  if (uVar29 == 0) {
    if ((uStack_160 & 0x7f000000000000) == 0) goto LAB_0b0edcc6;
    uVar15 = (ulong)(uVar9 & 0x7f);
LAB_0b0edc7e:
    if ((((uVar15 != 4) || (*(int *)(uStack_160 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_168 != 9999)) || ((uStack_168._2_2_ != 9999 || (uStack_168._4_2_ != 9999))))
    goto LAB_0b0edcc6;
LAB_0b0edeb0:
    if (uVar29 == 0) {
      if ((uStack_160 & 0x7f000000000000) == 0) goto LAB_0b0ee0cf;
      uVar15 = (ulong)(uVar9 & 0x7f);
    }
    else {
      uVar15 = *(ulong *)((uStack_160 & 0xff00ffffffffffff) - 8);
      if (uVar15 == 0) goto LAB_0b0ee0cf;
    }
    if ((((uVar15 != 4) ||
         (piVar28 = (int *)(uStack_160 & 0xff00ffffffffffff), *piVar28 != 0x61746562)) ||
        ((short)uStack_168 != 9999)) || ((uStack_168._2_2_ != 9999 || (uStack_168._4_2_ != 9999))))
    goto LAB_0b0ee0cf;
    ppppppplStack_2f0 = (long *******)uStack_168;
    if ((uStack_2e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
      piVar28 = (int *)(uStack_160 & 0xff00ffffffffffff);
      uVar29 = uStack_160 & 0x80000000000000;
    }
    uStack_2e8 = 0;
    uVar30 = uStack_160;
    if (uVar29 != 0) {
      lVar26 = *(long *)(piVar28 + -2);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,piVar28,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar30 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2e8 = uVar30;
    if ((uStack_2e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
    }
    uStack_2e0 = 0;
    uVar30 = uStack_158;
    if ((uStack_158 & 0x80000000000000) == 0) goto LAB_0b0ee0cf;
    uVar30 = uStack_158 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar30 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
  }
  else {
    uVar15 = *(ulong *)((uStack_160 & 0xff00ffffffffffff) - 8);
    if (uVar15 != 0) goto LAB_0b0edc7e;
LAB_0b0edcc6:
    uVar15 = *(ulong *)((long)ppppppplVar10 + 8);
    if ((uVar15 & 0x80000000000000) != 0) {
      uVar22 = *(ulong *)((uVar15 & 0xff00ffffffffffff) - 8);
      if (uVar22 != 0) goto LAB_0b0edd0b;
      goto LAB_0b0edeb0;
    }
    if ((uVar15 & 0x7f000000000000) == 0) goto LAB_0b0edeb0;
    uVar22 = (ulong)((ushort)(uVar15 >> 0x30) & 0x7f);
LAB_0b0edd0b:
    if (((uVar22 != 4) || (*(int *)(uVar15 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((*(short *)ppppppplVar10 != 9999 ||
        ((*(short *)((long)ppppppplVar10 + 2) != 9999 ||
         (*(short *)((long)ppppppplVar10 + 4) != 9999)))))) goto LAB_0b0edeb0;
    ppppppplStack_2f0 = (long *******)*ppppppplStack_1a0;
    if ((uStack_2e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2e8 = 0;
    uVar29 = *(ulong *)((long)ppppppplVar11 + 8);
    if ((uVar29 & 0x80000000000000) != 0) {
      lVar26 = *(long *)((uVar29 & 0xff00ffffffffffff) - 8);
      lVar25 = lVar26 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar14 = lVar26;
      func_0x0eee2f00(plVar14 + 1,uVar29 & 0xff00ffffffffffff,lVar26);
      *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
      uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2e8 = uVar29;
    if ((uStack_2e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
    }
    uStack_2e0 = 0;
    uVar30 = *(ulong *)((long)ppppppplVar11 + 0x10);
    if ((uVar30 & 0x80000000000000) == 0) goto LAB_0b0ee0cf;
    uVar30 = uVar30 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar30 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
  }
  *plVar14 = lVar26;
  func_0x0eee2f00(plVar14 + 1,uVar30,lVar26);
  *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
  uVar30 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
LAB_0b0ee0cf:
  uStack_2e0 = uVar30;
  func_0x0d6b3300(&ppppppplStack_258,&uStack_168,&ppppppplStack_2f0,1);
  if ((uStack_180 == (long *****)0x0) &&
     (cVar13 = FUN_0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_014bc086),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((ppppppplStack_198 == (long *******)0x0) ||
     (ppppplVar27 = uStack_180, *(char *)ppppppplStack_198 != '\x01')) {
    cVar13 = FUN_0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_014bc086);
    ppppplVar27 = uStack_180;
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((ppppppplStack_198 == (long *******)0x0) &&
       (cVar13 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*(char *)ppppppplStack_198 == '\0') &&
     (cVar13 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  ppppppplVar10 = ppppppplStack_188;
  pppppplVar17 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppppplVar17 == (long ******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppppppplStack_2d8 = (long *******)uStack_168;
  pppppplStack_1f0 = (long ******)ppppppplVar10;
  uVar29 = uStack_160;
  pppppplStack_2c0 = pppppplVar17;
  ppppppplStack_2b8 = (long *******)ppppplVar27;
  if ((uStack_160 & 0x80000000000000) != 0) {
    uVar29 = uStack_160 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar29 - 8);
    lVar25 = lVar26 + 9;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar29,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar29 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_2c8 = 0;
  uVar30 = uStack_158;
  if ((uStack_158 & 0x80000000000000) != 0) {
    uVar30 = uStack_158 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar30 - 8);
    lVar25 = lVar26 + 9;
    uStack_2d0 = uVar29;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar14 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar14 = lVar26;
    func_0x0eee2f00(plVar14 + 1,uVar30,lVar26);
    *(undefined1 *)((long)plVar14 + lVar26 + 8) = 0;
    uVar30 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uVar2 = uStack_116;
  uStack_270 = uStack_230;
  uStack_278 = uStack_238;
  ppppppplStack_288 = ppppppplStack_248;
  ppppppplStack_290 = ppppppplStack_250;
  pppppplVar17 = pppppplStack_2c0;
  uStack_1b8 = uStack_228;
  ppppppplStack_2b0 = (long *******)uStack_168;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  ppppppplStack_1e8 = ppppppplStack_258;
  ppppppplStack_250 = (long *******)0x0;
  ppppppplStack_248 = (long *******)0x0;
  ppppppplStack_298 = ppppppplStack_258;
  ppppppplStack_1e0 = (long *******)0x0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_1c0 = 0;
  uStack_268 = uStack_228;
  ppppppplStack_2a8 = (long *******)uVar29;
  uStack_2a0 = uVar30;
  func_0x0d6a8a30(pppppplStack_2c0,pppppplStack_1f0,&ppppppplStack_2b0,&ppppppplStack_298);
  if ((uStack_270 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
  }
  uStack_270 = 0;
  if ((uStack_278 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
  }
  uStack_278 = 0;
  if (((ulong)ppppppplStack_288 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_288 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_288 = (long *******)0x0;
  if (((ulong)ppppppplStack_290 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_290 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_290 = (long *******)0x0;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a0 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a0 = 0;
  if (((ulong)ppppppplStack_2a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  *pppppplVar17 = (long *****)&UNK_0f2815d8;
  pppppplVar17[0xe] = (long *****)ppppppplStack_2b8;
  *(undefined2 *)(pppppplVar17 + 0xf) = uVar2;
  *(undefined1 *)((long)pppppplVar17 + 0x7a) = 1;
  ppppppplStack_298 = (long *******)pppppplVar17;
  if ((uStack_230 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
  }
  uStack_230 = 0;
  if ((uStack_238 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_238 & 0xff00ffffffffffff) - 8);
  }
  uStack_238 = 0;
  if (((ulong)ppppppplStack_248 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_248 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_248 = (long *******)0x0;
  if (((ulong)ppppppplStack_250 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_250 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_2e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
  }
  uStack_2e0 = 0;
  if ((uStack_2e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
  }
  ppppplVar27 = (long *****)*ppppppplVar24;
  ppppplVar18 = (long *****)ppppppplVar24[1];
  if (ppppplVar27 != ppppplVar18) {
    do {
      cVar13 = func_0x04fa7a10(*ppppplVar27 + 4,pppppplVar17 + 7);
      if (cVar13 == '\0') break;
      ppppplVar27 = ppppplVar27 + 1;
    } while (ppppplVar27 != ppppplVar18);
  }
  func_0x0d6af860(ppppppplVar24,ppppplVar27,&ppppppplStack_298);
  ppppppplVar24 = ppppppplStack_298;
  ppppppplStack_298 = (long *******)0x0;
  if (ppppppplVar24 != (long *******)0x0) {
    (*(code *)(*ppppppplVar24)[1])();
  }
  uStack_118 = 0;
  func_0x0b0ef300(&ppppppplStack_1a8);
  if ((uStack_1f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1f8 = 0;
  if ((uStack_200 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
  }
  func_0x0b0ef1a0(&pppppplStack_e8);
  if ((uStack_210 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_210 & 0xff00ffffffffffff) - 8);
  }
  uStack_210 = 0;
  if ((uStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x123d54e  minecraft:behavior.ranged_attack
 * 0x123d55e  or.ranged_attack
 */
