/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb0e3c90 (ELF vaddr 0xafe3c90)
 * Label: caller-of-callee
 * Body:  [[0b0e3c90, 0b0e50c9] [0b0e50d0, 0b0e50f1] [0b0e5100, 0b0e5303] [0b0e5310, 0b0e5331] [0b0e5340, 0b0e6cb1] [0b0e7068, 0b0e7096] [0b0e70a4, 0b0e7201]]
 * Ghidra: FUN_0b0e3c90
 */


/* WARNING: Possible PIC construction at 0x0b0e4ea9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0b0e669e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0b0e71c2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0b0e71c7) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b0e3c90(undefined8 *param_1)

{
  undefined2 uVar1;
  long *****ppppplVar2;
  undefined8 *puVar3;
  long ******pppppplVar4;
  ushort uVar5;
  long ******pppppplVar6;
  long *******ppppppplVar7;
  long ******pppppplVar8;
  char cVar9;
  long *plVar10;
  ulong uVar11;
  long ******pppppplVar12;
  long ******pppppplVar13;
  long *****ppppplVar14;
  undefined8 *puVar15;
  long ******pppppplVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *******ppppppplVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  long *****ppppplVar25;
  long *******ppppppplStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  long *******ppppppplStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long *******ppppppplStack_2b8;
  short sStack_2b0;
  short sStack_2ae;
  short sStack_2ac;
  undefined2 uStack_2aa;
  ulong uStack_2a8;
  ulong uStack_2a0;
  short sStack_298;
  short sStack_296;
  short sStack_294;
  undefined2 uStack_292;
  ulong uStack_290;
  ulong uStack_288;
  long *******ppppppplStack_280;
  long *******ppppppplStack_278;
  ulong uStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined2 uStack_238;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  ulong uStack_208;
  ulong uStack_200;
  undefined2 uStack_1f8;
  undefined8 *puStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined2 uStack_1b8;
  long ******pppppplStack_1a8;
  long ******pppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  uint uStack_180;
  undefined4 uStack_17c;
  long ******pppppplStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 *puStack_160;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_118;
  undefined1 uStack_108;
  undefined2 uStack_106;
  undefined1 uStack_104;
  long *******ppppppplStack_f8;
  undefined8 uStack_f0;
  long ******pppppplStack_e8;
  undefined8 *puStack_e0;
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
  
  func_0x05d54750(&sStack_2b0,&UNK_0f299970);
  puVar15 = (undefined8 *)param_1[7];
  ppppppplStack_2e8 =
       (long *******)CONCAT26(uStack_2aa,CONCAT24(sStack_2ac,CONCAT22(sStack_2ae,sStack_2b0)));
  if (*(char *)((long)puVar15 + 6) == '\0') {
    *puVar15 = ppppppplStack_2e8;
    if ((puVar15[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar15[1] & 0xff00ffffffffffff) - 8);
    }
    puVar15[1] = 0;
    uVar23 = uStack_2a8;
    if ((uStack_2a8 & 0x80000000000000) != 0) {
      uVar23 = uStack_2a8 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar23 - 8);
      lVar17 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar15[1] = uVar23;
    if ((puVar15[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar15[2] & 0xff00ffffffffffff) - 8);
    }
    puVar15[2] = 0;
    uVar23 = uStack_2a0;
    if ((uStack_2a0 & 0x80000000000000) != 0) {
      uVar23 = uStack_2a0 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar23 - 8);
      lVar17 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar15[2] = uVar23;
    ppppppplStack_2e8 =
         (long *******)CONCAT26(uStack_2aa,CONCAT24(sStack_2ac,CONCAT22(sStack_2ae,sStack_2b0)));
  }
  ppppppplStack_2b8 = (long *******)*param_1;
  pppppplStack_1a0 =
       (long ******)CONCAT71(pppppplStack_1a0._1_7_,*(undefined1 *)((long)param_1 + 0x94));
  uStack_2e0 = uStack_2a8;
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    uVar23 = uStack_2a8 & 0xff00ffffffffffff;
    lVar18 = *(long *)(uVar23 - 8);
    lVar17 = lVar18 + 9;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar10 = lVar18;
    func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
    *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
    uStack_2e0 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_2d8 = 0;
  uVar23 = uStack_2a0;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    uVar23 = uStack_2a0 & 0xff00ffffffffffff;
    lVar18 = *(long *)(uVar23 - 8);
    lVar17 = lVar18 + 9;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar10 = lVar18;
    func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
    *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
    uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puStack_1f0 = param_1 + 8;
  uVar22 = param_1[9];
  uVar11 = uVar22 & 0x80000000000000;
  uVar5 = (ushort)(uVar22 >> 0x30);
  uStack_2d8 = uVar23;
  if (uVar11 == 0) {
    if ((uVar22 & 0x7f000000000000) == 0) goto LAB_0b0e405d;
    uVar19 = (ulong)(uVar5 & 0x7f);
LAB_0b0e4012:
    if ((((uVar19 != 4) || (*(int *)(uVar22 & 0xff00ffffffffffff) != 0x61746562)) ||
        (*(short *)(param_1 + 8) != 9999)) ||
       ((*(short *)((long)param_1 + 0x42) != 9999 || (*(short *)((long)param_1 + 0x44) != 9999))))
    goto LAB_0b0e405d;
LAB_0b0e42b9:
    if (uVar11 == 0) {
      if ((uVar22 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar5 & 0x7f);
LAB_0b0e42f0:
        uVar20 = 3;
        if ((((uVar19 == 4) &&
             (piVar24 = (int *)(uVar22 & 0xff00ffffffffffff), *piVar24 == 0x61746562)) &&
            (*(short *)(param_1 + 8) == 9999)) &&
           ((*(short *)((long)param_1 + 0x42) == 9999 && (*(short *)((long)param_1 + 0x44) == 9999))
           )) {
          ppppppplStack_2e8 = (long *******)*puStack_1f0;
          if ((uStack_2e0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8)
            ;
            uVar22 = param_1[9];
            piVar24 = (int *)(uVar22 & 0xff00ffffffffffff);
            uVar11 = uVar22 & 0x80000000000000;
          }
          uStack_2e0 = 0;
          if (uVar11 != 0) {
            lVar18 = *(long *)(piVar24 + -2);
            lVar17 = lVar18 + 9;
            plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
            if (lVar17 != 0 && plVar10 == (long *)0x0) {
              func_0x0eec74c0(lVar17,8);
            }
            *plVar10 = lVar18;
            func_0x0eee2f00(plVar10 + 1,piVar24,lVar18);
            *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
            uVar22 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_2e0 = uVar22;
          if ((uStack_2d8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2d8 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_2d8 = 0;
          uVar23 = param_1[10];
          uVar20 = 3;
          if ((uVar23 & 0x80000000000000) != 0) {
            lVar18 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
            lVar17 = lVar18 + 9;
            plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8,3);
            if (lVar17 != 0 && plVar10 == (long *)0x0) {
              func_0x0eec74c0(lVar17,8);
            }
            *plVar10 = lVar18;
            func_0x0eee2f00(plVar10 + 1,uVar23 & 0xff00ffffffffffff,lVar18);
            *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
            uVar20 = 3;
            uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
        }
        goto LAB_0b0e4522;
      }
    }
    else {
      uVar19 = *(ulong *)((uVar22 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0b0e42f0;
    }
    uVar20 = 3;
  }
  else {
    uVar19 = *(ulong *)((uVar22 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0b0e4012;
LAB_0b0e405d:
    if ((uStack_2a8 & 0x80000000000000) != 0) {
      uVar19 = *(ulong *)((uStack_2a8 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0b0e40a3;
      goto LAB_0b0e42b9;
    }
    if ((uStack_2a8 & 0x7f000000000000) == 0) goto LAB_0b0e42b9;
    uVar19 = (ulong)((ushort)(uStack_2a8 >> 0x30) & 0x7f);
LAB_0b0e40a3:
    if (((uVar19 != 4) || (*(int *)(uStack_2a8 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_2b0 != 9999 || ((sStack_2ae != 9999 || (sStack_2ac != 9999)))))) goto LAB_0b0e42b9;
    puVar15 = (undefined8 *)param_1[1];
    ppppppplStack_2e8 = (long *******)*puVar15;
    if ((uStack_2e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
    }
    uStack_2e0 = 0;
    uVar23 = puVar15[1];
    if ((uVar23 & 0x80000000000000) != 0) {
      lVar18 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
      lVar17 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar23 & 0xff00ffffffffffff,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2e0 = uVar23;
    if ((uStack_2d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2d8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2d8 = 0;
    uVar23 = puVar15[2];
    uVar20 = 1;
    if ((uVar23 & 0x80000000000000) != 0) {
      lVar18 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
      lVar17 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8,1);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar23 & 0xff00ffffffffffff,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar20 = 1;
      uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
LAB_0b0e4522:
  uStack_2d8 = uVar23;
  func_0x0d6b3300(&ppppppplStack_1e8,puStack_1f0,&ppppppplStack_2e8,uVar20);
  if ((param_1[5] == 0) &&
     (cVar9 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_011e0a3a),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar10 = param_1 + 5;
  pppppplVar13 = (long ******)(param_1 + 2);
  if (((char *)param_1[2] == (char *)0x0) || (*(char *)param_1[2] != '\x01')) {
    cVar9 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_011e0a3a);
    if (cVar9 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppplVar25 = (long *****)*plVar10;
    if ((*pppppplVar13 == (long *****)0x0) &&
       (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    ppppplVar25 = (long *****)*plVar10;
  }
  if ((*(char *)*pppppplVar13 == '\0') &&
     (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar20 = param_1[4];
  pppppplVar12 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppppplVar12 == (long ******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppppppplStack_280 = (long *******)param_1[8];
  ppppppplVar21 = (long *******)param_1[9];
  pppppplStack_1a8 = pppppplVar13;
  ppppppplStack_f8 = ppppppplStack_280;
  uStack_f0 = uVar20;
  plStack_40 = plVar10;
  ppppplStack_38 = ppppplVar25;
  if (((ulong)ppppppplVar21 & 0x80000000000000) != 0) {
    lVar18 = *(long *)(((ulong)ppppppplVar21 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar18 + 9;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar10 = lVar18;
    func_0x0eee2f00(plVar10 + 1,(ulong)ppppppplVar21 & 0xff00ffffffffffff,lVar18);
    *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
    ppppppplVar21 = (long *******)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_270 = 0;
  ppppppplStack_218 = (long *******)param_1[10];
  if (((ulong)ppppppplStack_218 & 0x80000000000000) != 0) {
    lVar18 = *(long *)(((ulong)ppppppplStack_218 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar18 + 9;
    ppppppplStack_278 = ppppppplVar21;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar10 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar10 = lVar18;
    func_0x0eee2f00(plVar10 + 1,(ulong)ppppppplStack_218 & 0xff00ffffffffffff,lVar18);
    *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
    ppppppplStack_218 = (long *******)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000)
    ;
  }
  uStack_170 = uStack_1c0;
  pppppplStack_178 = (long ******)uStack_1c8;
  ppppppplStack_188 = (long *******)uStack_1d8;
  ppppppplStack_190 = ppppppplStack_1e0;
  uStack_238 = uStack_1b8;
  uVar1 = *(undefined2 *)((long)param_1 + 0x92);
  ppppppplStack_278 = (long *******)0x0;
  uStack_270 = 0;
  ppppppplStack_268 = ppppppplStack_1e8;
  ppppppplStack_1e0 = (long *******)0x0;
  ppppppplStack_198 = ppppppplStack_1e8;
  ppppppplStack_260 = (long *******)0x0;
  ppppppplStack_258 = (long *******)0x0;
  uStack_1d8 = 0;
  uStack_250 = uStack_1d0;
  uStack_180 = (uint)uStack_1d0;
  uStack_17c = uStack_1d0._4_4_;
  uStack_248 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_240 = 0;
  uStack_168 = CONCAT22(uStack_168._2_2_,uStack_1b8);
  ppppppplStack_228 = ppppppplStack_f8;
  ppppppplStack_220 = ppppppplVar21;
  func_0x0d6a8a30(pppppplVar12,uStack_f0,&ppppppplStack_228,&ppppppplStack_198);
  if ((uStack_170 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_170 & 0xff00ffffffffffff) - 8);
  }
  uStack_170 = 0;
  if (((ulong)pppppplStack_178 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppplStack_178 & 0xff00ffffffffffff) - 8);
  }
  pppppplStack_178 = (long ******)0x0;
  if (((ulong)ppppppplStack_188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_188 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_188 = (long *******)0x0;
  if (((ulong)ppppppplStack_190 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_190 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_190 = (long *******)0x0;
  if (((ulong)ppppppplStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_218 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_218 = (long *******)0x0;
  if (((ulong)ppppppplStack_220 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_220 & 0xff00ffffffffffff) - 8);
  }
  *pppppplVar12 = (long *****)&UNK_0f2820c8;
  pppppplVar12[0xe] = ppppplStack_38;
  *(undefined2 *)(pppppplVar12 + 0xf) = uVar1;
  *(undefined1 *)((long)pppppplVar12 + 0x7a) = pppppplStack_1a0._0_1_;
  ppppppplStack_198 = (long *******)pppppplVar12;
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
  if ((uStack_2d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2d8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2d8 = 0;
  if ((uStack_2e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
  }
  if (ppppppplStack_198 != (long *******)0x0) {
    pppppplVar13 = *ppppppplStack_2b8;
    pppppplVar12 = ppppppplStack_2b8[1];
    while ((pppppplVar13 != pppppplVar12 &&
           (cVar9 = func_0x04fa7a10(*pppppplVar13 + 4,ppppppplStack_198 + 7), cVar9 != '\0'))) {
      pppppplVar13 = pppppplVar13 + 1;
    }
    func_0x0d6af860(ppppppplStack_2b8,pppppplVar13,&ppppppplStack_198);
    ppppppplVar21 = ppppppplStack_198;
    ppppppplStack_198 = (long *******)0x0;
    if (ppppppplVar21 != (long *******)0x0) {
      (*(code *)(*ppppppplVar21)[1])();
    }
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  if ((uStack_2a8 & 0x80000000000000) == 0) {
    if ((uStack_2a8 & 0x7f000000000000) == 0) goto LAB_0b0e4cec;
    uVar23 = (ulong)((ushort)(uStack_2a8 >> 0x30) & 0x7f);
LAB_0b0e4cb3:
    if ((((uVar23 != 4) || (*(int *)(uStack_2a8 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_2b0 != 9999)) || ((sStack_2ae != 9999 || (sStack_2ac != 9999)))) goto LAB_0b0e4cec;
LAB_0b0e542b:
    pppppplStack_e8 = (long ******)*param_1;
    puStack_e0 = (undefined8 *)param_1[1];
    pcStack_d8 = (char *)param_1[2];
    uStack_d0 = param_1[3];
    *pppppplStack_1a8 = (long *****)0x0;
    pppppplStack_1a8[1] = (long *****)0x0;
    pppppplStack_c8 = (long ******)param_1[4];
    param_1[4] = 0;
    puStack_b0 = (undefined8 *)plStack_40[2];
    uStack_c0 = (undefined4)*plStack_40;
    uStack_bc = *(undefined4 *)((long)plStack_40 + 4);
    uStack_b8 = (undefined4)plStack_40[1];
    uStack_b4 = *(undefined4 *)((long)plStack_40 + 0xc);
    uStack_a8 = (long *******)
                CONCAT26(uStack_2aa,CONCAT24(sStack_2ac,CONCAT22(sStack_2ae,sStack_2b0)));
    uStack_a0 = 0;
    uVar23 = uStack_2a8;
    if ((uStack_2a8 & 0x80000000000000) != 0) {
      uVar23 = uStack_2a8 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar23 - 8);
      lVar17 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_98 = 0;
    uVar22 = uStack_2a0;
    uStack_a0 = uVar23;
    if ((uStack_2a0 & 0x80000000000000) != 0) {
      uVar23 = uStack_2a0 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar23 - 8);
      lVar17 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar22 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_68 = 0;
    uStack_58 = 1;
    uStack_56 = 0xfffc;
    uStack_54 = 1;
    uStack_98 = uVar22;
    func_0x05d54750(&sStack_298,&UNK_0f299998);
    puVar15 = puStack_b0;
    ppppppplVar21 =
         (long *******)CONCAT26(uStack_292,CONCAT24(sStack_294,CONCAT22(sStack_296,sStack_298)));
    if (*(char *)((long)puStack_b0 + 6) == '\0') {
      *puStack_b0 = ppppppplVar21;
      if ((puStack_b0[1] & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puStack_b0[1] & 0xff00ffffffffffff) - 8);
      }
      puVar15[1] = 0;
      uVar23 = uStack_290;
      if ((uStack_290 & 0x80000000000000) != 0) {
        uVar23 = uStack_290 & 0xff00ffffffffffff;
        lVar18 = *(long *)(uVar23 - 8);
        lVar17 = lVar18 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
        if (lVar17 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar17,8);
        }
        *plVar10 = lVar18;
        func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
        *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
        uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      puVar15[1] = uVar23;
      if ((puVar15[2] & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar15[2] & 0xff00ffffffffffff) - 8);
      }
      puVar15[2] = 0;
      uVar23 = uStack_288;
      if ((uStack_288 & 0x80000000000000) != 0) {
        uVar23 = uStack_288 & 0xff00ffffffffffff;
        lVar18 = *(long *)(uVar23 - 8);
        lVar17 = lVar18 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
        if (lVar17 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar17,8);
        }
        *plVar10 = lVar18;
        func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
        *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
        uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      puVar15[2] = uVar23;
      ppppppplVar21 =
           (long *******)CONCAT26(uStack_292,CONCAT24(sStack_294,CONCAT22(sStack_296,sStack_298)));
    }
    pppppplVar13 = pppppplStack_e8;
    puStack_1f0 = (undefined8 *)CONCAT71(puStack_1f0._1_7_,uStack_54);
    uStack_2c8 = uStack_290;
    ppppppplStack_2d0 = ppppppplVar21;
    if ((uStack_290 & 0x80000000000000) != 0) {
      uVar23 = uStack_290 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar23 - 8);
      lVar17 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uStack_2c8 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2c0 = 0;
    uVar23 = uStack_288;
    if ((uStack_288 & 0x80000000000000) != 0) {
      uVar23 = uStack_288 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar23 - 8);
      lVar17 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar15 = puStack_e0;
    uVar22 = uStack_a0 & 0x80000000000000;
    uVar5 = (ushort)(uStack_a0 >> 0x30);
    uStack_2c0 = uVar23;
    if (uVar22 == 0) {
      if ((uStack_a0 & 0x7f000000000000) == 0) goto LAB_0b0e592f;
      uVar11 = (ulong)(uVar5 & 0x7f);
LAB_0b0e58e7:
      if ((((uVar11 != 4) || (*(int *)(uStack_a0 & 0xff00ffffffffffff) != 0x61746562)) ||
          ((short)uStack_a8 != 9999)) || ((uStack_a8._2_2_ != 9999 || (uStack_a8._4_2_ != 9999))))
      goto LAB_0b0e592f;
LAB_0b0e5b48:
      if (uVar22 == 0) {
        if ((uStack_a0 & 0x7f000000000000) != 0) {
          uVar11 = (ulong)(uVar5 & 0x7f);
LAB_0b0e5b7f:
          uVar20 = 3;
          if ((((uVar11 == 4) &&
               (piVar24 = (int *)(uStack_a0 & 0xff00ffffffffffff), *piVar24 == 0x61746562)) &&
              ((short)uStack_a8 == 9999)) &&
             ((uStack_a8._2_2_ == 9999 && (uStack_a8._4_2_ == 9999)))) {
            ppppppplStack_2d0 = uStack_a8;
            if ((uStack_2c8 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
              piVar24 = (int *)(uStack_a0 & 0xff00ffffffffffff);
              uVar22 = uStack_a0 & 0x80000000000000;
            }
            uStack_2c8 = 0;
            uVar23 = uStack_a0;
            if (uVar22 != 0) {
              lVar18 = *(long *)(piVar24 + -2);
              lVar17 = lVar18 + 9;
              plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
              if (lVar17 != 0 && plVar10 == (long *)0x0) {
                func_0x0eec74c0(lVar17,8);
              }
              *plVar10 = lVar18;
              func_0x0eee2f00(plVar10 + 1,piVar24,lVar18);
              *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
              uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
            }
            uStack_2c8 = uVar23;
            if ((uStack_2c0 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
            }
            uStack_2c0 = 0;
            uVar20 = 3;
            uVar23 = uStack_98;
            if ((uStack_98 & 0x80000000000000) != 0) {
              uVar23 = uStack_98 & 0xff00ffffffffffff;
              lVar18 = *(long *)(uVar23 - 8);
              lVar17 = lVar18 + 9;
              plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8,3);
              if (lVar17 != 0 && plVar10 == (long *)0x0) {
                func_0x0eec74c0(lVar17,8);
              }
              *plVar10 = lVar18;
              func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
              *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
              uVar20 = 3;
              uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
            }
          }
          goto LAB_0b0e5d7c;
        }
      }
      else {
        uVar11 = *(ulong *)((uStack_a0 & 0xff00ffffffffffff) - 8);
        if (uVar11 != 0) goto LAB_0b0e5b7f;
      }
      uVar20 = 3;
    }
    else {
      uVar11 = *(ulong *)((uStack_a0 & 0xff00ffffffffffff) - 8);
      if (uVar11 != 0) goto LAB_0b0e58e7;
LAB_0b0e592f:
      if ((uStack_290 & 0x80000000000000) != 0) {
        uVar11 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
        if (uVar11 != 0) goto LAB_0b0e5975;
        goto LAB_0b0e5b48;
      }
      if ((uStack_290 & 0x7f000000000000) == 0) goto LAB_0b0e5b48;
      uVar11 = (ulong)((ushort)(uStack_290 >> 0x30) & 0x7f);
LAB_0b0e5975:
      if (((uVar11 != 4) || (*(int *)(uStack_290 & 0xff00ffffffffffff) != 0x61746562)) ||
         ((sStack_298 != 9999 || ((sStack_296 != 9999 || (sStack_294 != 9999))))))
      goto LAB_0b0e5b48;
      ppppppplStack_2d0 = (long *******)*puStack_e0;
      if ((uStack_2c8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
      }
      uStack_2c8 = 0;
      uVar23 = puVar15[1];
      if ((uVar23 & 0x80000000000000) != 0) {
        lVar18 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
        lVar17 = lVar18 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
        if (lVar17 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar17,8);
        }
        *plVar10 = lVar18;
        func_0x0eee2f00(plVar10 + 1,uVar23 & 0xff00ffffffffffff,lVar18);
        *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
        uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      uStack_2c8 = uVar23;
      if ((uStack_2c0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
      }
      uStack_2c0 = 0;
      uVar23 = puVar15[2];
      uVar20 = 1;
      if ((uVar23 & 0x80000000000000) != 0) {
        lVar18 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
        lVar17 = lVar18 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8,1);
        if (lVar17 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar17,8);
        }
        *plVar10 = lVar18;
        func_0x0eee2f00(plVar10 + 1,uVar23 & 0xff00ffffffffffff,lVar18);
        *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
        uVar20 = 1;
        uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
    }
LAB_0b0e5d7c:
    uStack_2c0 = uVar23;
    func_0x0d6b3300(&ppppppplStack_228,&uStack_a8,&ppppppplStack_2d0,uVar20);
    if ((CONCAT44(uStack_bc,uStack_c0) == 0) &&
       (cVar9 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_0136b1a8),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pcStack_d8 == (char *)0x0) || (*pcStack_d8 != '\x01')) {
      cVar9 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_0136b1a8);
      if (cVar9 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      pppppplVar12 = (long ******)CONCAT44(uStack_bc,uStack_c0);
      if ((pcStack_d8 == (char *)0x0) &&
         (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
         cVar9 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    else {
      pppppplVar12 = (long ******)CONCAT44(uStack_bc,uStack_c0);
    }
    if ((*pcStack_d8 == '\0') &&
       (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppplVar6 = pppppplStack_c8;
    ppppppplVar21 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (ppppppplVar21 == (long *******)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    pppppplStack_1a8 = pppppplVar6;
    ppppppplStack_2e8 = uStack_a8;
    ppppppplStack_2b8 = uStack_a8;
    uVar23 = uStack_a0;
    pppppplStack_1a0 = pppppplVar12;
    if ((uStack_a0 & 0x80000000000000) != 0) {
      uVar23 = uStack_a0 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar23 - 8);
      lVar17 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2d8 = 0;
    uVar22 = uStack_98;
    if ((uStack_98 & 0x80000000000000) != 0) {
      uVar22 = uStack_98 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar22 - 8);
      lVar17 = lVar18 + 9;
      uStack_2e0 = uVar23;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar22,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar22 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uVar1 = uStack_56;
    uStack_240 = uStack_200;
    uStack_248 = uStack_208;
    ppppppplStack_258 = ppppppplStack_218;
    ppppppplStack_260 = ppppppplStack_220;
    uStack_1b8 = uStack_1f8;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    ppppppplStack_1e8 = ppppppplStack_228;
    ppppppplStack_220 = (long *******)0x0;
    ppppppplStack_218 = (long *******)0x0;
    ppppppplStack_268 = ppppppplStack_228;
    ppppppplStack_1e0 = (long *******)0x0;
    uStack_1d8 = 0;
    uStack_250 = CONCAT44(uStack_20c,uStack_210);
    uStack_1c8 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1c0 = 0;
    uStack_238 = uStack_1f8;
    ppppppplStack_280 = ppppppplStack_2b8;
    ppppppplStack_278 = (long *******)uVar23;
    uStack_270 = uVar22;
    func_0x0d6a8a30(ppppppplVar21,pppppplStack_1a8,&ppppppplStack_280,&ppppppplStack_268);
    if ((uStack_240 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_240 & 0xff00ffffffffffff) - 8);
    }
    uStack_240 = 0;
    if ((uStack_248 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_248 & 0xff00ffffffffffff) - 8);
    }
    uStack_248 = 0;
    if (((ulong)ppppppplStack_258 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppplStack_258 & 0xff00ffffffffffff) - 8);
    }
    ppppppplStack_258 = (long *******)0x0;
    if (((ulong)ppppppplStack_260 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppplStack_260 & 0xff00ffffffffffff) - 8);
    }
    ppppppplStack_260 = (long *******)0x0;
    if ((uStack_270 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
    }
    uStack_270 = 0;
    if (((ulong)ppppppplStack_278 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppplStack_278 & 0xff00ffffffffffff) - 8);
    }
    *ppppppplVar21 = (long ******)&UNK_0f281f30;
    ppppppplVar21[0xe] = pppppplStack_1a0;
    *(undefined2 *)(ppppppplVar21 + 0xf) = uVar1;
    *(undefined1 *)((long)ppppppplVar21 + 0x7a) = puStack_1f0._0_1_;
    ppppppplStack_268 = ppppppplVar21;
    if ((uStack_200 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
    }
    uStack_200 = 0;
    if ((uStack_208 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
    }
    uStack_208 = 0;
    if (((ulong)ppppppplStack_218 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppplStack_218 & 0xff00ffffffffffff) - 8);
    }
    ppppppplStack_218 = (long *******)0x0;
    if (((ulong)ppppppplStack_220 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppplStack_220 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_2c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
    }
    uStack_2c0 = 0;
    if ((uStack_2c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
    }
    if (ppppppplStack_268 != (long *******)0x0) {
      ppppplVar25 = *pppppplVar13;
      ppppplVar14 = pppppplVar13[1];
      while ((ppppplVar25 != ppppplVar14 &&
             (cVar9 = func_0x04fa7a10(*ppppplVar25 + 4,ppppppplStack_268 + 7), cVar9 != '\0'))) {
        ppppplVar25 = ppppplVar25 + 1;
      }
      func_0x0d6af860(pppppplVar13,ppppplVar25,&ppppppplStack_268);
      ppppppplVar21 = ppppppplStack_268;
      ppppppplStack_268 = (long *******)0x0;
      if (ppppppplVar21 != (long *******)0x0) {
        (*(code *)(*ppppppplVar21)[1])();
      }
    }
    pppppplVar13 = pppppplStack_e8;
    uStack_58 = 0;
    if ((uStack_290 & 0x80000000000000) == 0) {
      if ((uStack_290 & 0x7f000000000000) != 0) {
        uVar23 = (ulong)((ushort)(uStack_290 >> 0x30) & 0x7f);
LAB_0b0e64ad:
        if ((((uVar23 == 4) && (*(int *)(uStack_290 & 0xff00ffffffffffff) == 0x61746562)) &&
            (sStack_298 == 9999)) && ((sStack_296 == 9999 && (sStack_294 == 9999))))
        goto LAB_0b0e67ba;
      }
    }
    else {
      uVar23 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
      if (uVar23 != 0) goto LAB_0b0e64ad;
    }
    if (((pcStack_d8 == (char *)0x0) || (*pcStack_d8 == '\0')) &&
       (cVar9 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_012fdea2),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((CONCAT44(uStack_b4,uStack_b8) == 0) &&
       (cVar9 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_012fdea2),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppplVar6 = (long ******)CONCAT44(uStack_b4,uStack_b8);
    if ((pcStack_d8 == (char *)0x0) &&
       (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*pcStack_d8 == '\0') &&
       (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppplVar8 = pppppplStack_c8;
    ppppppplVar21 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (ppppppplVar21 == (long *******)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(ppppppplVar21,&uStack_a8,&sStack_298);
    ppppppplVar21[8] = (long ******)0x0;
    ppppppplVar21[9] = (long ******)0x0;
    ppppppplVar21[10] = (long ******)0x0;
    pppppplVar16 = (long ******)pppppplVar8[1];
    pppppplVar4 = (long ******)pppppplVar8[2];
    if (pppppplVar4 == (long ******)0x0) {
      ppppppplVar21[8] = pppppplVar16;
      ppppppplVar21[9] = (long ******)0x0;
    }
    else {
      LOCK();
      pppppplVar4[1] = (long *****)((long)pppppplVar4[1] + 1);
      UNLOCK();
      pppppplVar12 = ppppppplVar21[9];
      ppppppplVar21[8] = pppppplVar16;
      ppppppplVar21[9] = pppppplVar4;
      if (pppppplVar12 != (long ******)0x0) {
        LOCK();
        pppppplVar16 = pppppplVar12 + 1;
        ppppplVar25 = *pppppplVar16;
        *pppppplVar16 = (long *****)((long)*pppppplVar16 + -1);
        UNLOCK();
        if (ppppplVar25 == (long *****)0x0) {
          (*(code *)(*pppppplVar12)[2])(pppppplVar12);
          goto SUB_0412c2d0;
        }
        pppppplVar16 = ppppppplVar21[8];
      }
    }
    if ((pppppplVar16 != (long ******)0x0) &&
       (ppppppplVar21[10] = pppppplVar8, *(char *)pppppplVar16 != '\0')) {
      ppppppplVar21[0xe] = (long ******)0x0;
      ppppppplVar21[0xf] = (long ******)0x0;
      ppppppplVar21[0xc] = (long ******)0x0;
      ppppppplVar21[0xd] = (long ******)0x0;
      *(undefined4 *)(ppppppplVar21 + 0x10) = 0x3f800000;
      *(undefined1 *)(ppppppplVar21 + 0x12) = 0;
      *(undefined1 *)(ppppppplVar21 + 0x24) = 0;
      *ppppppplVar21 = (long ******)&UNK_0f281fe8;
      ppppppplVar21[0x2a] = (long ******)0x0;
      ppppppplVar21[0x30] = (long ******)0x0;
      ppppppplVar21[0x32] = pppppplVar6;
      if ((_DAT_0f6b1120 == 0) &&
         (cVar9 = func_0x0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
         cVar9 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      puVar3 = *(undefined8 **)(_DAT_0f6b1120 + 0x130);
      for (puVar15 = *(undefined8 **)(_DAT_0f6b1120 + 0x128); puVar15 != puVar3;
          puVar15 = puVar15 + 1) {
        (*(code *)*puVar15)(ppppppplVar21);
      }
      ppppppplStack_268 = ppppppplVar21;
      func_0x0d6afb30(pppppplVar13,&ppppppplStack_268);
      if (ppppppplStack_268 != (long *******)0x0) {
        (*(code *)(*ppppppplStack_268)[1])();
      }
LAB_0b0e67ba:
      ppppppplStack_198 = (long *******)pppppplStack_e8;
      ppppppplStack_190 = (long *******)puStack_e0;
      ppppppplStack_188 = (long *******)pcStack_d8;
      uStack_180 = (undefined4)uStack_d0;
      uStack_17c = uStack_d0._4_4_;
      pcStack_d8 = (char *)0x0;
      uStack_d0 = 0;
      pppppplStack_178 = pppppplStack_c8;
      pppppplStack_c8 = (long ******)0x0;
      uStack_170 = CONCAT44(uStack_bc,uStack_c0);
      uStack_168 = uStack_b8;
      uStack_164 = uStack_b4;
      puStack_160 = puStack_b0;
      uStack_150 = 0;
      uVar23 = uStack_290;
      if ((uStack_290 & 0x80000000000000) != 0) {
        uVar23 = uStack_290 & 0xff00ffffffffffff;
        lVar18 = *(long *)(uVar23 - 8);
        lVar17 = lVar18 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
        if (lVar17 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar17,8);
        }
        *plVar10 = lVar18;
        func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
        *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
        uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      uStack_148 = 0;
      uVar22 = uStack_288;
      uStack_150 = uVar23;
      if ((uStack_288 & 0x80000000000000) != 0) {
        uVar23 = uStack_288 & 0xff00ffffffffffff;
        lVar18 = *(long *)(uVar23 - 8);
        lVar17 = lVar18 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
        if (lVar17 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar17,8);
        }
        *plVar10 = lVar18;
        func_0x0eee2f00(plVar10 + 1,uVar23,lVar18);
        *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
        uVar22 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      uStack_118 = 0;
      uStack_108 = 1;
      uStack_106 = 0xfffc;
      uStack_104 = 1;
      uStack_148 = uVar22;
      func_0x0b0e7380(&ppppppplStack_198);
      func_0x0b0ea970(&ppppppplStack_198);
      if ((uStack_288 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_288 & 0xff00ffffffffffff) - 8);
      }
      uStack_288 = 0;
      if ((uStack_290 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
      }
      func_0x0b0e7220(&pppppplStack_e8);
      if ((uStack_2a0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a0 & 0xff00ffffffffffff) - 8);
      }
      uStack_2a0 = 0;
      if ((uStack_2a8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
      }
      return;
    }
  }
  else {
    uVar23 = *(ulong *)((uStack_2a8 & 0xff00ffffffffffff) - 8);
    if (uVar23 != 0) goto LAB_0b0e4cb3;
LAB_0b0e4cec:
    ppppppplStack_2b8 = (long *******)*param_1;
    if ((((char *)param_1[2] == (char *)0x0) || (*(char *)param_1[2] == '\0')) &&
       (cVar9 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_011abb42),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((param_1[6] == 0) &&
       (cVar9 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_011abb42),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppppplVar21 = (long *******)param_1[6];
    if ((param_1[2] == 0) &&
       (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*pppppplStack_1a8 == '\0') &&
       (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppplVar25 = (long *****)param_1[4];
    pppppplVar13 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (pppppplVar13 == (long ******)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(pppppplVar13,puStack_1f0,&sStack_2b0);
    pppppplVar13[8] = (long *****)0x0;
    pppppplVar13[9] = (long *****)0x0;
    pppppplVar13[10] = (long *****)0x0;
    ppppplVar14 = (long *****)ppppplVar25[1];
    ppppplVar2 = (long *****)ppppplVar25[2];
    if (ppppplVar2 == (long *****)0x0) {
      pppppplVar13[8] = ppppplVar14;
      pppppplVar13[9] = (long *****)0x0;
    }
    else {
      LOCK();
      ppppplVar2[1] = (long ****)((long)ppppplVar2[1] + 1);
      UNLOCK();
      pppppplVar12 = (long ******)pppppplVar13[9];
      pppppplVar13[8] = ppppplVar14;
      pppppplVar13[9] = ppppplVar2;
      if (pppppplVar12 != (long ******)0x0) {
        LOCK();
        pppppplVar6 = pppppplVar12 + 1;
        ppppplVar14 = *pppppplVar6;
        *pppppplVar6 = (long *****)((long)*pppppplVar6 + -1);
        UNLOCK();
        if (ppppplVar14 == (long *****)0x0) {
          (*(code *)(*pppppplVar12)[2])(pppppplVar12);
          goto SUB_0412c2d0;
        }
        ppppplVar14 = pppppplVar13[8];
      }
    }
    if ((ppppplVar14 != (long *****)0x0) &&
       (pppppplVar13[10] = ppppplVar25, *(char *)ppppplVar14 != '\0')) {
      pppppplVar13[0xe] = (long *****)0x0;
      pppppplVar13[0xf] = (long *****)0x0;
      pppppplVar13[0xc] = (long *****)0x0;
      pppppplVar13[0xd] = (long *****)0x0;
      *(undefined4 *)(pppppplVar13 + 0x10) = 0x3f800000;
      *(undefined1 *)(pppppplVar13 + 0x12) = 0;
      *(undefined1 *)(pppppplVar13 + 0x24) = 0;
      *pppppplVar13 = (long *****)&UNK_0f282180;
      pppppplVar13[0x2a] = (long *****)0x0;
      pppppplVar13[0x30] = (long *****)0x0;
      pppppplVar13[0x32] = (long *****)ppppppplVar21;
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar20 = _UNK_011ab9fd;
      *(ulong *)((long)puVar15 + 0xb) = CONCAT35(_UNK_011ab9fa,_DAT_011ab9f5);
      *(undefined8 *)((long)puVar15 + 0x13) = uVar20;
      uVar20 = CONCAT53(_DAT_011ab9f5,_UNK_011ab9f2);
      *puVar15 = _DAT_011ab9ea;
      puVar15[1] = uVar20;
      *(undefined1 *)((long)puVar15 + 0x1b) = 0;
      ppppppplStack_268 = (long *******)0x0;
      ppppppplStack_260 = (long *******)0x0;
      ppppppplStack_258 = (long *******)0x0;
      ppppppplStack_1e0 = (long *******)((ulong)ppppppplStack_1e0 & 0xffffffffffffff00);
      ppppppplStack_1e8 = (long *******)&ppppppplStack_268;
      ppppppplVar21 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (ppppppplVar21 == (long *******)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      ppppppplStack_258 = ppppppplVar21 + 6;
      ppppppplStack_190 = (long *******)&ppppppplStack_280;
      uStack_180 = uStack_180 & 0xffffff00;
      *ppppppplVar21 = (long ******)0x656e6f706d6f6314;
      ppppppplVar21[1] = (long ******)0x73746e;
      ppppppplStack_228 = ppppppplVar21 + 3;
      ppppppplStack_280 = ppppppplVar21;
      ppppppplStack_268 = ppppppplVar21;
      ppppppplStack_260 = ppppppplVar21;
      ppppppplStack_198 = (long *******)&ppppppplStack_268;
      ppppppplStack_188 = (long *******)&ppppppplStack_228;
      FUN_0412e5e0(ppppppplStack_228,puVar15,0x1b);
      ppppppplStack_260 = ppppppplStack_228 + 3;
      ppppppplStack_1e8 = (long *******)0x0;
      ppppppplStack_1e0 = (long *******)0x0;
      uStack_1d8 = 0;
      func_0x0b297dd0(pppppplVar13,&ppppppplStack_268,&ppppppplStack_1e8);
      ppppppplVar7 = ppppppplStack_1e8;
      ppppppplVar21 = ppppppplStack_1e0;
      if (ppppppplStack_1e8 != (long *******)0x0) {
        for (; ppppppplVar7 != ppppppplVar21; ppppppplVar21 = ppppppplVar21 + -3) {
          if (((ulong)ppppppplVar21[-3] & 1) != 0) {
            thunk_FUN_0ee326a0(ppppppplVar21[-1],(ulong)ppppppplVar21[-3] & 0xfffffffffffffffe);
          }
        }
        ppppppplStack_1e0 = ppppppplVar7;
        thunk_FUN_0ee326a0(ppppppplVar7,uStack_1d8 - (long)ppppppplVar7);
      }
      ppppppplVar7 = ppppppplStack_268;
      ppppppplVar21 = ppppppplStack_260;
      if (ppppppplStack_268 != (long *******)0x0) {
        for (; ppppppplVar7 != ppppppplVar21; ppppppplVar21 = ppppppplVar21 + -3) {
          if (((ulong)ppppppplVar21[-3] & 1) != 0) {
            thunk_FUN_0ee326a0(ppppppplVar21[-1],(ulong)ppppppplVar21[-3] & 0xfffffffffffffffe);
          }
        }
        ppppppplStack_260 = ppppppplVar7;
        thunk_FUN_0ee326a0(ppppppplStack_268,(long)ppppppplStack_258 - (long)ppppppplStack_268);
      }
      thunk_FUN_0ee326a0(puVar15,0x20);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar20 = _UNK_011ab9fd;
      *(ulong *)((long)puVar15 + 0xb) = CONCAT35(_UNK_011ab9fa,_DAT_011ab9f5);
      *(undefined8 *)((long)puVar15 + 0x13) = uVar20;
      uVar20 = CONCAT53(_DAT_011ab9f5,_UNK_011ab9f2);
      *puVar15 = _DAT_011ab9ea;
      puVar15[1] = uVar20;
      *(undefined1 *)((long)puVar15 + 0x1b) = 0;
      ppppppplStack_228 = (long *******)0x0;
      ppppppplStack_220 = (long *******)0x0;
      ppppppplStack_218 = (long *******)0x0;
      ppppppplStack_278 = (long *******)((ulong)ppppppplStack_278 & 0xffffffffffffff00);
      ppppppplStack_280 = (long *******)&ppppppplStack_228;
      ppppppplStack_2d0 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (ppppppplStack_2d0 == (long *******)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      ppppppplStack_218 = ppppppplStack_2d0 + 9;
      ppppppplStack_190 = (long *******)&ppppppplStack_2d0;
      ppppppplStack_188 = (long *******)&ppppppplStack_2e8;
      uStack_180 = uStack_180 & 0xffffff00;
      *ppppppplStack_2d0 = (long ******)0x656e6f706d6f6320;
      ppppppplStack_2d0[1] = (long ******)0x70756f72675f746e;
      ppppppplStack_2d0[2] = (long ******)0x73;
      ppppppplStack_2d0[3] = (long ******)&UNK_03020106;
      ppppppplStack_2e8 = ppppppplStack_2d0 + 6;
      ppppppplStack_2d0[4] = (long ******)0x0;
      ppppppplStack_2d0[5] = (long ******)0x0;
      ppppppplStack_228 = ppppppplStack_2d0;
      ppppppplStack_220 = ppppppplStack_2d0;
      ppppppplStack_198 = (long *******)&ppppppplStack_228;
      FUN_0412e5e0(ppppppplStack_2e8,puVar15,0x1b);
      ppppppplStack_220 = ppppppplStack_2e8 + 3;
      ppppppplStack_198 = (long *******)0x0;
      ppppppplStack_190 = (long *******)0x0;
      ppppppplStack_188 = (long *******)0x0;
      func_0x0b297dd0(pppppplVar13,&ppppppplStack_228,&ppppppplStack_198);
      ppppppplVar7 = ppppppplStack_198;
      ppppppplVar21 = ppppppplStack_190;
      if (ppppppplStack_198 != (long *******)0x0) {
        for (; ppppppplVar7 != ppppppplVar21; ppppppplVar21 = ppppppplVar21 + -3) {
          if (((ulong)ppppppplVar21[-3] & 1) != 0) {
            thunk_FUN_0ee326a0(ppppppplVar21[-1],(ulong)ppppppplVar21[-3] & 0xfffffffffffffffe);
          }
        }
        thunk_FUN_0ee326a0(ppppppplVar7,(long)ppppppplStack_188 - (long)ppppppplVar7);
      }
      ppppppplVar7 = ppppppplStack_228;
      ppppppplVar21 = ppppppplStack_220;
      if (ppppppplStack_228 != (long *******)0x0) {
        for (; ppppppplVar7 != ppppppplVar21; ppppppplVar21 = ppppppplVar21 + -3) {
          if (((ulong)ppppppplVar21[-3] & 1) != 0) {
            thunk_FUN_0ee326a0(ppppppplVar21[-1],(ulong)ppppppplVar21[-3] & 0xfffffffffffffffe);
          }
        }
        ppppppplStack_220 = ppppppplVar7;
        thunk_FUN_0ee326a0(ppppppplStack_228,(long)ppppppplStack_218 - (long)ppppppplStack_228);
      }
      thunk_FUN_0ee326a0(puVar15,0x20);
      if ((_DAT_0f6b1120 == 0) &&
         (cVar9 = func_0x0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
         cVar9 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      puVar3 = *(undefined8 **)(_DAT_0f6b1120 + 0x118);
      for (puVar15 = *(undefined8 **)(_DAT_0f6b1120 + 0x110); puVar15 != puVar3;
          puVar15 = puVar15 + 1) {
        (*(code *)*puVar15)(pppppplVar13);
      }
      ppppppplStack_198 = (long *******)pppppplVar13;
      func_0x0d6afb30(ppppppplStack_2b8,&ppppppplStack_198);
      if (ppppppplStack_198 != (long *******)0x0) {
        (*(code *)(*ppppppplStack_198)[1])();
      }
      goto LAB_0b0e542b;
    }
  }
  lVar17 = FUN_04890760();
  (*(code *)(*ppppppplVar21)[1])(ppppppplVar21);
  func_0x0ee386e0(&uStack_288);
  func_0x0ee386e0(&uStack_290);
  func_0x0b0e7220(&pppppplStack_e8);
  func_0x0ee386e0(&uStack_2a0);
  func_0x0ee386e0(&uStack_2a8);
  func_0x0eee2d70();
  plVar10 = *(long **)(lVar17 + 0x80);
  if (plVar10 == (long *)(lVar17 + 0x60)) {
    lVar18 = 0x20;
LAB_0b0e70f3:
    (**(code **)(*plVar10 + lVar18))();
    uVar23 = *(ulong *)(lVar17 + 0x50);
  }
  else {
    lVar18 = 0x28;
    if (plVar10 != (long *)0x0) goto LAB_0b0e70f3;
    uVar23 = *(ulong *)(lVar17 + 0x50);
  }
  if ((uVar23 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar23 & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(lVar17 + 0x50) = 0;
  if ((*(ulong *)(lVar17 + 0x48) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(lVar17 + 0x48) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(lVar17 + 0x48) = 0;
  pppppplVar12 = *(long *******)(lVar17 + 0x18);
  *(undefined8 *)(lVar17 + 0x10) = 0;
  *(undefined8 *)(lVar17 + 0x18) = 0;
  if (pppppplVar12 == (long ******)0x0) {
    *(undefined8 *)(lVar17 + 0x20) = 0;
    return;
  }
  LOCK();
  pppppplVar13 = pppppplVar12 + 1;
  ppppplVar25 = *pppppplVar13;
  *pppppplVar13 = (long *****)((long)*pppppplVar13 + -1);
  UNLOCK();
  if (ppppplVar25 != (long *****)0x0) {
    pppppplVar12 = *(long *******)(lVar17 + 0x18);
    *(undefined8 *)(lVar17 + 0x20) = 0;
    if (pppppplVar12 != (long ******)0x0) {
      LOCK();
      pppppplVar13 = pppppplVar12 + 1;
      ppppplVar25 = *pppppplVar13;
      *pppppplVar13 = (long *****)((long)*pppppplVar13 + -1);
      UNLOCK();
      if (ppppplVar25 == (long *****)0x0) {
        (*(code *)(*pppppplVar12)[2])(pppppplVar12);
        goto SUB_0412c2d0;
      }
    }
    return;
  }
  (*(code *)(*pppppplVar12)[2])(pppppplVar12);
SUB_0412c2d0:
  if (pppppplVar12[2] != (long *****)0x0) {
    LOCK();
    pppppplVar13 = pppppplVar12 + 2;
    ppppplVar25 = *pppppplVar13;
    *pppppplVar13 = (long *****)((long)*pppppplVar13 + -1);
    UNLOCK();
    if (ppppplVar25 != (long *****)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*pppppplVar12)[4])();
  return;
}



/* ---- referenced strings ----
 * 0x11ab9ea  minecraft:experience_reward
 * 0x11ab9f5  xperience_reward
 */
