/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca42e80 (ELF vaddr 0xc942e80)
 * Label: caller-of-callee
 * Body:  [[0ca42e80, 0ca45d7e] [0ca45ed4, 0ca45ef1] [0ca45f6d, 0ca45f8f] [0ca45fe8, 0ca46055]]
 * Ghidra: FUN_0ca42e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca42e80(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined2 uVar3;
  char cVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  short sStack_2b8;
  short sStack_2b6;
  short sStack_2b4;
  undefined2 uStack_2b2;
  long *plStack_2b0;
  ulong uStack_2a8;
  short sStack_2a0;
  short sStack_29e;
  short sStack_29c;
  undefined2 uStack_29a;
  long *plStack_298;
  ulong uStack_290;
  long *plStack_288;
  long *plStack_280;
  ulong uStack_278;
  long *plStack_270;
  long *plStack_268;
  ulong uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined2 uStack_240;
  long *plStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulong uStack_218;
  ulong uStack_210;
  undefined2 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  ulong uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  char *pcStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  undefined8 uStack_168;
  undefined1 uStack_158;
  undefined2 uStack_156;
  undefined1 uStack_154;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulong uStack_108;
  ulong uStack_100;
  undefined2 uStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  undefined8 uStack_68;
  undefined1 uStack_58;
  undefined2 uStack_56;
  undefined1 uStack_54;
  long lStack_40;
  long lStack_38;
  
  func_0x05d54750(&sStack_2b8,&UNK_0f3ec648);
  plVar8 = (long *)param_1[7];
  plStack_270 = (long *)CONCAT26(uStack_2b2,CONCAT24(sStack_2b4,CONCAT22(sStack_2b6,sStack_2b8)));
  if (*(char *)((long)plVar8 + 6) == '\0') {
    *plVar8 = (long)plStack_270;
    if ((plVar8[1] & 0x80000000000000U) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar8[1] & 0xff00ffffffffffffU) - 8);
    }
    plVar8[1] = 0;
    plVar5 = plStack_2b0;
    if (((ulong)plStack_2b0 & 0x80000000000000) != 0) {
      uVar16 = (ulong)plStack_2b0 & 0xff00ffffffffffff;
      lVar14 = *(long *)(uVar16 - 8);
      lVar18 = lVar14 + 9;
      plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar5 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar5 = lVar14;
      func_0x0eee2f00(plVar5 + 1,uVar16,lVar14);
      *(undefined1 *)((long)plVar5 + lVar14 + 8) = 0;
      plVar5 = (long *)((ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar8[1] = (long)plVar5;
    if ((plVar8[2] & 0x80000000000000U) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar8[2] & 0xff00ffffffffffffU) - 8);
    }
    plVar8[2] = 0;
    uVar16 = uStack_2a8;
    if ((uStack_2a8 & 0x80000000000000) != 0) {
      uVar16 = uStack_2a8 & 0xff00ffffffffffff;
      lVar14 = *(long *)(uVar16 - 8);
      lVar18 = lVar14 + 9;
      plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar5 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar5 = lVar14;
      func_0x0eee2f00(plVar5 + 1,uVar16,lVar14);
      *(undefined1 *)((long)plVar5 + lVar14 + 8) = 0;
      uVar16 = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    plVar8[2] = uVar16;
    plStack_270 = (long *)CONCAT26(uStack_2b2,CONCAT24(sStack_2b4,CONCAT22(sStack_2b6,sStack_2b8)));
  }
  plVar8 = (long *)*param_1;
  plStack_268 = plStack_2b0;
  if (((ulong)plStack_2b0 & 0x80000000000000) != 0) {
    uVar16 = (ulong)plStack_2b0 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar5 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar5 = lVar14;
    func_0x0eee2f00(plVar5 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar5 + lVar14 + 8) = 0;
    plStack_268 = (long *)((ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_260 = 0;
  uVar16 = uStack_2a8;
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    uVar16 = uStack_2a8 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar5 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar5 = lVar14;
    func_0x0eee2f00(plVar5 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar5 + lVar14 + 8) = 0;
    uVar16 = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar5 = param_1 + 8;
  plVar17 = (long *)param_1[9];
  uVar6 = (ulong)plVar17 & 0x80000000000000;
  uVar2 = (ushort)((ulong)plVar17 >> 0x30);
  uStack_260 = uVar16;
  if (uVar6 == 0) {
    if (((ulong)plVar17 & 0x7f000000000000) == 0) goto LAB_0ca4321a;
    uVar11 = (ulong)(uVar2 & 0x7f);
LAB_0ca431de:
    if ((((uVar11 != 4) || (*(int *)((ulong)plVar17 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)param_1[8] != 9999)) ||
       ((*(short *)((long)param_1 + 0x42) != 9999 || (*(short *)((long)param_1 + 0x44) != 9999))))
    goto LAB_0ca4321a;
LAB_0ca4347f:
    if (uVar6 == 0) {
      if (((ulong)plVar17 & 0x7f000000000000) != 0) {
        uVar11 = (ulong)(uVar2 & 0x7f);
LAB_0ca434b6:
        uVar12 = 3;
        if ((((uVar11 == 4) &&
             (piVar15 = (int *)((ulong)plVar17 & 0xff00ffffffffffff), *piVar15 == 0x61746562)) &&
            ((short)param_1[8] == 9999)) &&
           ((*(short *)((long)param_1 + 0x42) == 9999 && (*(short *)((long)param_1 + 0x44) == 9999))
           )) {
          plStack_270 = (long *)*plVar5;
          if (((ulong)plStack_268 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)plStack_268 & 0xff00ffffffffffff) - 8);
            plVar17 = (long *)param_1[9];
            piVar15 = (int *)((ulong)plVar17 & 0xff00ffffffffffff);
            uVar6 = (ulong)plVar17 & 0x80000000000000;
          }
          plStack_268 = (long *)0x0;
          if (uVar6 != 0) {
            lVar14 = *(long *)(piVar15 + -2);
            lVar18 = lVar14 + 9;
            plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
            if (lVar18 != 0 && plVar17 == (long *)0x0) {
              FUN_0eec74c0(lVar18,8);
            }
            *plVar17 = lVar14;
            func_0x0eee2f00(plVar17 + 1,piVar15,lVar14);
            *(undefined1 *)((long)plVar17 + lVar14 + 8) = 0;
            plVar17 = (long *)((ulong)(plVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          plStack_268 = plVar17;
          if ((uStack_260 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_260 = 0;
          uVar16 = param_1[10];
          uVar12 = 3;
          if ((uVar16 & 0x80000000000000) != 0) {
            lVar14 = *(long *)((uVar16 & 0xff00ffffffffffff) - 8);
            lVar18 = lVar14 + 9;
            plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8,3);
            if (lVar18 != 0 && plVar17 == (long *)0x0) {
              FUN_0eec74c0(lVar18,8);
            }
            *plVar17 = lVar14;
            func_0x0eee2f00(plVar17 + 1,uVar16 & 0xff00ffffffffffff,lVar14);
            *(undefined1 *)((long)plVar17 + lVar14 + 8) = 0;
            uVar12 = 3;
            uVar16 = (ulong)(plVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
        }
        goto LAB_0ca436e5;
      }
    }
    else {
      uVar11 = *(ulong *)(((ulong)plVar17 & 0xff00ffffffffffff) - 8);
      if (uVar11 != 0) goto LAB_0ca434b6;
    }
    uVar12 = 3;
  }
  else {
    uVar11 = *(ulong *)(((ulong)plVar17 & 0xff00ffffffffffff) - 8);
    if (uVar11 != 0) goto LAB_0ca431de;
LAB_0ca4321a:
    if (((ulong)plStack_2b0 & 0x80000000000000) != 0) {
      uVar11 = *(ulong *)(((ulong)plStack_2b0 & 0xff00ffffffffffff) - 8);
      if (uVar11 != 0) goto LAB_0ca43260;
      goto LAB_0ca4347f;
    }
    if (((ulong)plStack_2b0 & 0x7f000000000000) == 0) goto LAB_0ca4347f;
    uVar11 = (ulong)((ushort)((ulong)plStack_2b0 >> 0x30) & 0x7f);
LAB_0ca43260:
    if (((uVar11 != 4) || (*(int *)((ulong)plStack_2b0 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_2b8 != 9999 || ((sStack_2b6 != 9999 || (sStack_2b4 != 9999)))))) goto LAB_0ca4347f;
    plStack_2c0 = (long *)param_1[1];
    plStack_270 = (long *)*plStack_2c0;
    if (((ulong)plStack_268 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_268 & 0xff00ffffffffffff) - 8);
    }
    plStack_268 = (long *)0x0;
    plVar17 = (long *)plStack_2c0[1];
    if (((ulong)plVar17 & 0x80000000000000) != 0) {
      lVar14 = *(long *)(((ulong)plVar17 & 0xff00ffffffffffff) - 8);
      lVar18 = lVar14 + 9;
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar7 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar7 = lVar14;
      func_0x0eee2f00(plVar7 + 1,(ulong)plVar17 & 0xff00ffffffffffff,lVar14);
      *(undefined1 *)((long)plVar7 + lVar14 + 8) = 0;
      plVar17 = (long *)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plStack_268 = plVar17;
    if ((uStack_260 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
    }
    uStack_260 = 0;
    uVar16 = plStack_2c0[2];
    uVar12 = 1;
    if ((uVar16 & 0x80000000000000) != 0) {
      lVar14 = *(long *)((uVar16 & 0xff00ffffffffffff) - 8);
      lVar18 = lVar14 + 9;
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8,1);
      if (lVar18 != 0 && plVar17 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar17 = lVar14;
      func_0x0eee2f00(plVar17 + 1,uVar16 & 0xff00ffffffffffff,lVar14);
      *(undefined1 *)((long)plVar17 + lVar14 + 8) = 0;
      uVar12 = 1;
      uVar16 = (ulong)(plVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
LAB_0ca436e5:
  uStack_260 = uVar16;
  func_0x0d6b3300(&plStack_238,plVar5,&plStack_270,uVar12);
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (plVar17 == (long *)0x0) {
    FUN_0eec74c0(0x90,0);
  }
  uStack_1c0 = uStack_210;
  uStack_1c8 = uStack_218;
  pcStack_1d8 = (char *)uStack_228;
  plStack_1e0 = (long *)uStack_230;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_1d0 = uStack_220;
  uStack_1cc = uStack_21c;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_1b8 = CONCAT22(uStack_1b8._2_2_,uStack_208);
  func_0x0d6a8c00(plVar17,plVar5,&plStack_1e8);
  if ((uStack_1c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
  }
  uStack_1c0 = 0;
  if ((uStack_1c8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1c8 = 0;
  if (((ulong)pcStack_1d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_1d8 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_1d8 = (char *)0x0;
  if (((ulong)plStack_1e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_1e0 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_1e0 = (long *)0x0;
  *plVar17 = (long)&UNK_0f3ebf90;
  plVar7 = (long *)param_1[0x10];
  if (plVar7 == (long *)0x0) {
    plVar17[0x10] = 0;
  }
  else if (plVar7 == param_1 + 0xc) {
    plVar17[0x10] = (long)(plVar17 + 0xc);
    (**(code **)(*(long *)param_1[0x10] + 0x18))();
  }
  else {
    plVar17[0x10] = (long)plVar7;
    param_1[0x10] = 0;
  }
  plStack_1e8 = plVar17;
  if ((uStack_210 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_210 & 0xff00ffffffffffff) - 8);
  }
  uStack_210 = 0;
  if ((uStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
  }
  uStack_218 = 0;
  if ((uStack_228 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
  }
  uStack_228 = 0;
  if ((uStack_230 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_260 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
  }
  uStack_260 = 0;
  if (((ulong)plStack_268 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_268 & 0xff00ffffffffffff) - 8)
    ;
  }
  plVar7 = (long *)*plVar8;
  plVar1 = (long *)plVar8[1];
  if (plVar7 != plVar1) {
    do {
      cVar4 = func_0x04fa7a10(*plVar7 + 0x20,plVar17 + 7);
      if (cVar4 == '\0') break;
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  func_0x0d6af860(plVar8,plVar7,&plStack_1e8);
  plVar8 = plStack_1e8;
  plStack_1e8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (((ulong)plStack_2b0 & 0x80000000000000) == 0) {
    if (((ulong)plStack_2b0 & 0x7f000000000000) == 0) goto LAB_0ca43ab9;
    uVar16 = (ulong)((ushort)((ulong)plStack_2b0 >> 0x30) & 0x7f);
LAB_0ca43a80:
    if (((uVar16 != 4) || (*(int *)((ulong)plStack_2b0 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_2b8 != 9999 || ((sStack_2b6 != 9999 || (sStack_2b4 != 9999)))))) goto LAB_0ca43ab9;
  }
  else {
    uVar16 = *(ulong *)(((ulong)plStack_2b0 & 0xff00ffffffffffff) - 8);
    if (uVar16 != 0) goto LAB_0ca43a80;
LAB_0ca43ab9:
    lVar18 = *param_1;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (plVar8 == (long *)0x0) {
      FUN_0eec74c0(0x70,0);
    }
    func_0x0d6b23d0(plVar8,plVar5,&sStack_2b8);
    *plVar8 = (long)&UNK_0f3ebfd0;
    plVar8[8] = (long)&UNK_0f3ec010;
    plVar8[9] = (long)&UNK_0c4a45c0;
    plVar8[0xc] = (long)(plVar8 + 8);
    plStack_1e8 = plVar8;
    func_0x0d6afb30(lVar18,&plStack_1e8);
    if (plStack_1e8 != (long *)0x0) {
      (**(code **)(*plStack_1e8 + 8))();
    }
  }
  plStack_e8 = (long *)*param_1;
  plStack_e0 = (long *)param_1[1];
  pcStack_d8 = (char *)param_1[2];
  uStack_d0 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lStack_c8 = param_1[4];
  param_1[4] = 0;
  plStack_b0 = (long *)param_1[7];
  uStack_c0 = (undefined4)param_1[5];
  uStack_bc = *(undefined4 *)((long)param_1 + 0x2c);
  uStack_b8 = (undefined4)param_1[6];
  uStack_b4 = *(undefined4 *)((long)param_1 + 0x34);
  uStack_a8 = (long *)CONCAT26(uStack_2b2,CONCAT24(sStack_2b4,CONCAT22(sStack_2b6,sStack_2b8)));
  plStack_a0 = (long *)0x0;
  plVar8 = plStack_2b0;
  if (((ulong)plStack_2b0 & 0x80000000000000) != 0) {
    uVar16 = (ulong)plStack_2b0 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar8 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar8 = lVar14;
    func_0x0eee2f00(plVar8 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
    plVar8 = (long *)((ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_98 = 0;
  uVar16 = uStack_2a8;
  plStack_a0 = plVar8;
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    uVar16 = uStack_2a8 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar8 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar8 = lVar14;
    func_0x0eee2f00(plVar8 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
    uVar16 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_68 = 0;
  uStack_58 = 1;
  uStack_56 = 0xfffc;
  uStack_54 = 1;
  uStack_98 = uVar16;
  func_0x05d54750(&sStack_2a0,&UNK_0f3ec768);
  plVar8 = plStack_b0;
  plVar5 = (long *)CONCAT26(uStack_29a,CONCAT24(sStack_29c,CONCAT22(sStack_29e,sStack_2a0)));
  if (*(char *)((long)plStack_b0 + 6) == '\0') {
    *plStack_b0 = (long)plVar5;
    if ((plStack_b0[1] & 0x80000000000000U) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plStack_b0[1] & 0xff00ffffffffffffU) - 8);
    }
    plVar8[1] = 0;
    plVar5 = plStack_298;
    if (((ulong)plStack_298 & 0x80000000000000) != 0) {
      uVar16 = (ulong)plStack_298 & 0xff00ffffffffffff;
      lVar14 = *(long *)(uVar16 - 8);
      lVar18 = lVar14 + 9;
      plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar5 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar5 = lVar14;
      func_0x0eee2f00(plVar5 + 1,uVar16,lVar14);
      *(undefined1 *)((long)plVar5 + lVar14 + 8) = 0;
      plVar5 = (long *)((ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar8[1] = (long)plVar5;
    if ((plVar8[2] & 0x80000000000000U) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar8[2] & 0xff00ffffffffffffU) - 8);
    }
    plVar8[2] = 0;
    uVar16 = uStack_290;
    if ((uStack_290 & 0x80000000000000) != 0) {
      uVar16 = uStack_290 & 0xff00ffffffffffff;
      lVar14 = *(long *)(uVar16 - 8);
      lVar18 = lVar14 + 9;
      plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar5 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar5 = lVar14;
      func_0x0eee2f00(plVar5 + 1,uVar16,lVar14);
      *(undefined1 *)((long)plVar5 + lVar14 + 8) = 0;
      uVar16 = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    plVar8[2] = uVar16;
    plVar5 = (long *)CONCAT26(uStack_29a,CONCAT24(sStack_29c,CONCAT22(sStack_29e,sStack_2a0)));
  }
  plVar17 = plStack_e8;
  plStack_140 = (long *)CONCAT71(plStack_140._1_7_,uStack_54);
  plVar7 = plStack_298;
  plStack_270 = plVar5;
  if (((ulong)plStack_298 & 0x80000000000000) != 0) {
    uVar16 = (ulong)plStack_298 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar8 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar8 = lVar14;
    func_0x0eee2f00(plVar8 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
    plVar8 = (long *)((ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    plVar7 = plVar8;
  }
  uStack_260 = 0;
  uVar16 = uStack_290;
  plStack_268 = plVar7;
  if ((uStack_290 & 0x80000000000000) != 0) {
    uVar16 = uStack_290 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar8 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar8 = lVar14;
    func_0x0eee2f00(plVar8 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
    uVar16 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar5 = plStack_e0;
  uVar6 = (ulong)plStack_a0 & 0x80000000000000;
  uVar2 = (ushort)((ulong)plStack_a0 >> 0x30);
  uStack_260 = uVar16;
  if (uVar6 == 0) {
    if (((ulong)plStack_a0 & 0x7f000000000000) == 0) goto LAB_0ca44065;
    uVar11 = (ulong)(uVar2 & 0x7f);
LAB_0ca4401d:
    if ((((uVar11 != 4) || (*(int *)((ulong)plStack_a0 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_a8 != 9999)) || ((uStack_a8._2_2_ != 9999 || (uStack_a8._4_2_ != 9999))))
    goto LAB_0ca44065;
LAB_0ca442c1:
    if (uVar6 == 0) {
      if (((ulong)plStack_a0 & 0x7f000000000000) != 0) {
        uVar11 = (ulong)(uVar2 & 0x7f);
LAB_0ca442f8:
        uVar12 = 3;
        if ((((uVar11 == 4) &&
             (piVar15 = (int *)((ulong)plStack_a0 & 0xff00ffffffffffff), *piVar15 == 0x61746562)) &&
            ((short)uStack_a8 == 9999)) && ((uStack_a8._2_2_ == 9999 && (uStack_a8._4_2_ == 9999))))
        {
          plStack_270 = uStack_a8;
          if (((ulong)plStack_268 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)plStack_268 & 0xff00ffffffffffff) - 8);
            piVar15 = (int *)((ulong)plStack_a0 & 0xff00ffffffffffff);
            uVar6 = (ulong)plStack_a0 & 0x80000000000000;
          }
          plStack_268 = (long *)0x0;
          plVar5 = plStack_a0;
          if (uVar6 != 0) {
            plVar8 = *(long **)(piVar15 + -2);
            lVar18 = (long)plVar8 + 9;
            puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
            if (lVar18 != 0 && puVar9 == (undefined8 *)0x0) {
              FUN_0eec74c0(lVar18,8);
            }
            *puVar9 = plVar8;
            func_0x0eee2f00(puVar9 + 1,piVar15,plVar8);
            *(undefined1 *)((long)(puVar9 + 1) + (long)plVar8) = 0;
            plVar5 = (long *)((ulong)(puVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          plStack_268 = plVar5;
          if ((uStack_260 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_260 = 0;
          uVar12 = 3;
          uVar16 = uStack_98;
          if ((uStack_98 & 0x80000000000000) != 0) {
            uVar16 = uStack_98 & 0xff00ffffffffffff;
            lVar14 = *(long *)(uVar16 - 8);
            lVar18 = lVar14 + 9;
            plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8,3);
            if (lVar18 != 0 && plVar8 == (long *)0x0) {
              FUN_0eec74c0(lVar18,8);
            }
            *plVar8 = lVar14;
            func_0x0eee2f00(plVar8 + 1,uVar16,lVar14);
            *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
            uVar12 = 3;
            uVar16 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
        }
        goto LAB_0ca44539;
      }
    }
    else {
      uVar11 = *(ulong *)(((ulong)plStack_a0 & 0xff00ffffffffffff) - 8);
      if (uVar11 != 0) goto LAB_0ca442f8;
    }
    uVar12 = 3;
  }
  else {
    uVar11 = *(ulong *)(((ulong)plStack_a0 & 0xff00ffffffffffff) - 8);
    if (uVar11 != 0) goto LAB_0ca4401d;
LAB_0ca44065:
    if (((ulong)plStack_298 & 0x80000000000000) != 0) {
      uVar11 = *(ulong *)(((ulong)plStack_298 & 0xff00ffffffffffff) - 8);
      if (uVar11 != 0) goto LAB_0ca440ab;
      goto LAB_0ca442c1;
    }
    if (((ulong)plStack_298 & 0x7f000000000000) == 0) goto LAB_0ca442c1;
    uVar11 = (ulong)((ushort)((ulong)plStack_298 >> 0x30) & 0x7f);
LAB_0ca440ab:
    if (((uVar11 != 4) || (*(int *)((ulong)plStack_298 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_2a0 != 9999 || ((sStack_29e != 9999 || (sStack_29c != 9999)))))) goto LAB_0ca442c1;
    plStack_270 = (long *)*plStack_e0;
    if (((ulong)plStack_268 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_268 & 0xff00ffffffffffff) - 8);
    }
    plStack_268 = (long *)0x0;
    plVar7 = (long *)plVar5[1];
    if (((ulong)plVar7 & 0x80000000000000) != 0) {
      lVar14 = *(long *)(((ulong)plVar7 & 0xff00ffffffffffff) - 8);
      lVar18 = lVar14 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar8 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar8 = lVar14;
      func_0x0eee2f00(plVar8 + 1,(ulong)plVar7 & 0xff00ffffffffffff,lVar14);
      *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
      plVar7 = (long *)((ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plStack_268 = plVar7;
    if ((uStack_260 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
    }
    uStack_260 = 0;
    uVar16 = plVar5[2];
    uVar12 = 1;
    if ((uVar16 & 0x80000000000000) != 0) {
      lVar14 = *(long *)((uVar16 & 0xff00ffffffffffff) - 8);
      lVar18 = lVar14 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8,1);
      if (lVar18 != 0 && plVar8 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar8 = lVar14;
      func_0x0eee2f00(plVar8 + 1,uVar16 & 0xff00ffffffffffff,lVar14);
      *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
      uVar12 = 1;
      uVar16 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
LAB_0ca44539:
  uStack_260 = uVar16;
  func_0x0d6b3300(&plStack_238,&uStack_a8,&plStack_270,uVar12);
  if ((CONCAT44(uStack_bc,uStack_c0) == 0) &&
     (cVar4 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_01423532),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_d8 == (char *)0x0) || (*pcStack_d8 != '\x01')) {
    cVar4 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_01423532);
    if (cVar4 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar12 = CONCAT44(uStack_bc,uStack_c0);
    if ((pcStack_d8 == (char *)0x0) &&
       (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    uVar12 = CONCAT44(uStack_bc,uStack_c0);
  }
  if ((*pcStack_d8 == '\0') &&
     (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  func_0x0ca49bb0(&plStack_128,&uStack_a8,&plStack_238,lStack_c8,uVar12,&uStack_56,&plStack_140);
  plStack_200 = plStack_128;
  if ((uStack_210 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_210 & 0xff00ffffffffffff) - 8);
  }
  uStack_210 = 0;
  if ((uStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
  }
  uStack_218 = 0;
  if ((uStack_228 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
  }
  uStack_228 = 0;
  if ((uStack_230 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_260 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
  }
  uStack_260 = 0;
  if (((ulong)plStack_268 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_268 & 0xff00ffffffffffff) - 8)
    ;
  }
  if (plStack_200 != (long *)0x0) {
    plVar5 = (long *)*plVar17;
    plVar7 = (long *)plVar17[1];
    while ((plVar5 != plVar7 &&
           (cVar4 = func_0x04fa7a10(*plVar5 + 0x20,plStack_200 + 7), cVar4 != '\0'))) {
      plVar5 = plVar5 + 1;
    }
    func_0x0d6af860(plVar17,plVar5,&plStack_200);
    plVar5 = plStack_200;
    plStack_200 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = plStack_e8;
  uStack_58 = 0;
  if (((ulong)plStack_298 & 0x80000000000000) == 0) {
    if (((ulong)plStack_298 & 0x7f000000000000) == 0) goto LAB_0ca448f6;
    uVar16 = (ulong)((ushort)((ulong)plStack_298 >> 0x30) & 0x7f);
LAB_0ca448bd:
    if ((((uVar16 != 4) || (*(int *)((ulong)plStack_298 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_2a0 != 9999)) || ((sStack_29e != 9999 || (sStack_29c != 9999)))) goto LAB_0ca448f6;
  }
  else {
    uVar16 = *(ulong *)(((ulong)plStack_298 & 0xff00ffffffffffff) - 8);
    if (uVar16 != 0) goto LAB_0ca448bd;
LAB_0ca448f6:
    if (((pcStack_d8 == (char *)0x0) || (*pcStack_d8 == '\0')) &&
       (cVar4 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_01456f59),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((CONCAT44(uStack_b4,uStack_b8) == 0) &&
       (cVar4 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_01456f59),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pcStack_d8 == (char *)0x0) &&
       (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*pcStack_d8 == '\0') &&
       (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar18 = lStack_c8;
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (plVar17 == (long *)0x0) {
      FUN_0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(plVar17,&uStack_a8,&sStack_2a0);
    plVar17[8] = 0;
    plVar17[9] = 0;
    plVar17[10] = 0;
    pcVar10 = *(char **)(lVar18 + 8);
    lVar14 = *(long *)(lVar18 + 0x10);
    if (lVar14 == 0) {
      plVar17[8] = (long)pcVar10;
      plVar17[9] = 0;
    }
    else {
      LOCK();
      *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
      UNLOCK();
      plVar7 = (long *)plVar17[9];
      plVar17[8] = (long)pcVar10;
      plVar17[9] = lVar14;
      if (plVar7 != (long *)0x0) {
        plVar8 = plVar17 + 8;
        LOCK();
        plVar1 = plVar7 + 1;
        lVar14 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
        pcVar10 = (char *)*plVar8;
      }
    }
    if ((pcVar10 == (char *)0x0) || (plVar17[10] = lVar18, *pcVar10 == '\0')) {
      uVar12 = func_0x04890760();
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uVar12 = func_0x04882e20(uVar12);
      uStack_2c8 = func_0x04882e20(uVar12);
      func_0x0ee386e0(&plStack_138);
      func_0x0412a280(plStack_2c0,0x80);
      func_0x05d864e0(&plStack_128);
      func_0x0ee386e0(&uStack_278);
      func_0x0ee386e0(&plStack_280);
      func_0x0ca46320(&plStack_1e8);
      func_0x0ee386e0(&uStack_290);
      func_0x0ee386e0(&plStack_298);
      func_0x0ca461c0(&plStack_e8);
      do {
        do {
          func_0x0ee386e0(&uStack_2a8);
          func_0x0ee386e0(&plStack_2b0);
          uStack_2c8 = func_0x0eee2d70(uStack_2c8);
          plStack_1e8 = (long *)0x0;
        } while (plVar8 == (long *)0x0);
        (**(code **)(*plVar8 + 8))(plVar8);
      } while( true );
    }
    plVar17[0xe] = 0;
    plVar17[0xf] = 0;
    plVar17[0xc] = 0;
    plVar17[0xd] = 0;
    *(undefined4 *)(plVar17 + 0x10) = 0x3f800000;
    *(undefined1 *)(plVar17 + 0x12) = 0;
    *(undefined1 *)(plVar17 + 0x24) = 0;
    *plVar17 = (long)&UNK_0f3ebeb0;
    plVar17[0x2a] = 0;
    plVar17[0x30] = 0;
    plVar17[0x32] = 0;
    plStack_238 = plVar17;
    func_0x0d6afb30(plVar5,&plStack_238);
    if (plStack_238 != (long *)0x0) {
      (**(code **)(*plStack_238 + 8))();
    }
  }
  plStack_1e8 = plStack_e8;
  plStack_1e0 = plStack_e0;
  pcStack_1d8 = pcStack_d8;
  uStack_1d0 = (undefined4)uStack_d0;
  uStack_1cc = uStack_d0._4_4_;
  pcStack_d8 = (char *)0x0;
  uStack_d0 = 0;
  uStack_1c8 = lStack_c8;
  lStack_c8 = 0;
  uStack_1c0 = CONCAT44(uStack_bc,uStack_c0);
  uStack_1b8 = uStack_b8;
  uStack_1b4 = uStack_b4;
  plStack_1b0 = plStack_b0;
  uStack_1a8 = (long *)CONCAT26(uStack_29a,CONCAT24(sStack_29c,CONCAT22(sStack_29e,sStack_2a0)));
  plStack_1a0 = (long *)0x0;
  plVar8 = plStack_298;
  if (((ulong)plStack_298 & 0x80000000000000) != 0) {
    uVar16 = (ulong)plStack_298 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar8 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar8 = lVar14;
    func_0x0eee2f00(plVar8 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
    plVar8 = (long *)((ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_198 = 0;
  uVar16 = uStack_290;
  plStack_1a0 = plVar8;
  if ((uStack_290 & 0x80000000000000) != 0) {
    uVar16 = uStack_290 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar8 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar8 = lVar14;
    func_0x0eee2f00(plVar8 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
    uVar16 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar5 = plStack_1e0;
  plVar8 = plStack_1e8;
  uStack_168 = 0;
  uStack_158 = 1;
  uStack_156 = 0xfffc;
  uStack_154 = 1;
  plStack_288 = (long *)*plStack_1e0;
  plStack_280 = (long *)plStack_1e0[1];
  uStack_198 = uVar16;
  if (((ulong)plStack_280 & 0x80000000000000) != 0) {
    lVar14 = *(long *)(((ulong)plStack_280 & 0xff00ffffffffffff) - 8);
    lVar18 = lVar14 + 9;
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar17 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar17 = lVar14;
    func_0x0eee2f00(plVar17 + 1,(ulong)plStack_280 & 0xff00ffffffffffff,lVar14);
    *(undefined1 *)((long)plVar17 + lVar14 + 8) = 0;
    plStack_280 = (long *)((ulong)(plVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_278 = 0;
  uVar16 = plVar5[2];
  if ((uVar16 & 0x80000000000000) != 0) {
    lVar14 = *(long *)((uVar16 & 0xff00ffffffffffff) - 8);
    lVar18 = lVar14 + 9;
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar17 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar17 = lVar14;
    func_0x0eee2f00(plVar17 + 1,uVar16 & 0xff00ffffffffffff,lVar14);
    *(undefined1 *)((long)plVar17 + lVar14 + 8) = 0;
    uVar16 = (ulong)(plVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar17 = plStack_1e0;
  uVar6 = (ulong)plStack_1a0 & 0x80000000000000;
  uVar2 = (ushort)((ulong)plStack_1a0 >> 0x30);
  uStack_278 = uVar16;
  if (uVar6 == 0) {
    if (((ulong)plStack_1a0 & 0x7f000000000000) == 0) goto LAB_0ca44ecb;
    uVar11 = (ulong)(uVar2 & 0x7f);
LAB_0ca44e83:
    if ((((uVar11 != 4) || (*(int *)((ulong)plStack_1a0 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_1a8 != 9999)) || ((uStack_1a8._2_2_ != 9999 || (uStack_1a8._4_2_ != 9999))))
    goto LAB_0ca44ecb;
LAB_0ca450b5:
    if (uVar6 == 0) {
      if (((ulong)plStack_1a0 & 0x7f000000000000) == 0) goto LAB_0ca452d4;
      uVar11 = (ulong)(uVar2 & 0x7f);
    }
    else {
      uVar11 = *(ulong *)(((ulong)plStack_1a0 & 0xff00ffffffffffff) - 8);
      if (uVar11 == 0) goto LAB_0ca452d4;
    }
    if ((((uVar11 != 4) ||
         (piVar15 = (int *)((ulong)plStack_1a0 & 0xff00ffffffffffff), *piVar15 != 0x61746562)) ||
        ((short)uStack_1a8 != 9999)) || ((uStack_1a8._2_2_ != 9999 || (uStack_1a8._4_2_ != 9999))))
    goto LAB_0ca452d4;
    plStack_288 = uStack_1a8;
    if (((ulong)plStack_280 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_280 & 0xff00ffffffffffff) - 8);
      piVar15 = (int *)((ulong)plStack_1a0 & 0xff00ffffffffffff);
      uVar6 = (ulong)plStack_1a0 & 0x80000000000000;
    }
    plStack_280 = (long *)0x0;
    plVar5 = plStack_1a0;
    if (uVar6 != 0) {
      lVar14 = *(long *)(piVar15 + -2);
      lVar18 = lVar14 + 9;
      plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar5 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar5 = lVar14;
      func_0x0eee2f00(plVar5 + 1,piVar15,lVar14);
      *(undefined1 *)((long)plVar5 + lVar14 + 8) = 0;
      plVar5 = (long *)((ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plStack_280 = plVar5;
    if ((uStack_278 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
    }
    uStack_278 = 0;
    uVar16 = uStack_198;
    if ((uStack_198 & 0x80000000000000) == 0) goto LAB_0ca452d4;
    uVar16 = uStack_198 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar5 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
  }
  else {
    uVar11 = *(ulong *)(((ulong)plStack_1a0 & 0xff00ffffffffffff) - 8);
    if (uVar11 != 0) goto LAB_0ca44e83;
LAB_0ca44ecb:
    uVar11 = plVar5[1];
    if ((uVar11 & 0x80000000000000) != 0) {
      uVar13 = *(ulong *)((uVar11 & 0xff00ffffffffffff) - 8);
      if (uVar13 != 0) goto LAB_0ca44f10;
      goto LAB_0ca450b5;
    }
    if ((uVar11 & 0x7f000000000000) == 0) goto LAB_0ca450b5;
    uVar13 = (ulong)((ushort)(uVar11 >> 0x30) & 0x7f);
LAB_0ca44f10:
    if (((uVar13 != 4) || (*(int *)(uVar11 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)*plVar5 != 9999 ||
        ((*(short *)((long)plVar5 + 2) != 9999 || (*(short *)((long)plVar5 + 4) != 9999))))))
    goto LAB_0ca450b5;
    plStack_288 = (long *)*plStack_1e0;
    if (((ulong)plStack_280 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_280 & 0xff00ffffffffffff) - 8);
    }
    plStack_280 = (long *)0x0;
    plVar5 = (long *)plVar17[1];
    if (((ulong)plVar5 & 0x80000000000000) != 0) {
      lVar14 = *(long *)(((ulong)plVar5 & 0xff00ffffffffffff) - 8);
      lVar18 = lVar14 + 9;
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar7 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar7 = lVar14;
      func_0x0eee2f00(plVar7 + 1,(ulong)plVar5 & 0xff00ffffffffffff,lVar14);
      *(undefined1 *)((long)plVar7 + lVar14 + 8) = 0;
      plVar5 = (long *)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plStack_280 = plVar5;
    if ((uStack_278 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
    }
    uStack_278 = 0;
    uVar16 = plVar17[2];
    if ((uVar16 & 0x80000000000000) == 0) goto LAB_0ca452d4;
    uVar16 = uVar16 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar5 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
  }
  *plVar5 = lVar14;
  func_0x0eee2f00(plVar5 + 1,uVar16,lVar14);
  *(undefined1 *)((long)plVar5 + lVar14 + 8) = 0;
  uVar16 = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
LAB_0ca452d4:
  uStack_278 = uVar16;
  func_0x0d6b3300(&plStack_128,&uStack_1a8,&plStack_288,1);
  if ((uStack_1c0 == 0) &&
     (cVar4 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_012b4936),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_1d8 == (char *)0x0) || (lVar18 = uStack_1c0, *pcStack_1d8 != '\x01')) {
    cVar4 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_012b4936);
    lVar18 = uStack_1c0;
    if (cVar4 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pcStack_1d8 == (char *)0x0) &&
       (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*pcStack_1d8 == '\0') &&
     (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar16 = uStack_1c8;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plStack_140 = uStack_1a8;
  lStack_38 = uVar16;
  plVar17 = plStack_1a0;
  lStack_40 = lVar18;
  if (((ulong)plStack_1a0 & 0x80000000000000) != 0) {
    uVar16 = (ulong)plStack_1a0 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar17 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar17 = lVar14;
    func_0x0eee2f00(plVar17 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar17 + lVar14 + 8) = 0;
    plVar17 = (long *)((ulong)(plVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_130 = 0;
  uStack_1f0 = uStack_198;
  if ((uStack_198 & 0x80000000000000) != 0) {
    uVar16 = uStack_198 & 0xff00ffffffffffff;
    lVar14 = *(long *)(uVar16 - 8);
    lVar18 = lVar14 + 9;
    plStack_138 = plVar17;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
    if (lVar18 != 0 && plVar7 == (long *)0x0) {
      FUN_0eec74c0(lVar18,8);
    }
    *plVar7 = lVar14;
    func_0x0eee2f00(plVar7 + 1,uVar16,lVar14);
    *(undefined1 *)((long)plVar7 + lVar14 + 8) = 0;
    uStack_1f0 = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_210 = uStack_100;
  uStack_218 = uStack_108;
  uStack_228 = uStack_118;
  uStack_230 = uStack_120;
  uVar3 = uStack_156;
  uStack_240 = uStack_f8;
  plStack_200 = uStack_1a8;
  plStack_138 = (long *)0x0;
  uStack_130 = 0;
  plStack_270 = plStack_128;
  uStack_120 = 0;
  uStack_118 = 0;
  plStack_238 = plStack_128;
  plStack_268 = (long *)0x0;
  uStack_260 = 0;
  uStack_220 = uStack_110;
  uStack_21c = uStack_10c;
  uStack_250 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_248 = 0;
  uStack_208 = uStack_f8;
  plStack_1f8 = plVar17;
  func_0x0d6a8a30(plVar5,lStack_38,&plStack_200,&plStack_238);
  if ((uStack_210 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_210 & 0xff00ffffffffffff) - 8);
  }
  uStack_210 = 0;
  if ((uStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
  }
  uStack_218 = 0;
  if ((uStack_228 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
  }
  uStack_228 = 0;
  if ((uStack_230 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
  }
  uStack_230 = 0;
  if ((uStack_1f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f0 & 0xff00ffffffffffff) - 8);
  }
  uStack_1f0 = 0;
  if (((ulong)plStack_1f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_1f8 & 0xff00ffffffffffff) - 8)
    ;
  }
  *plVar5 = (long)&UNK_0f3ebdf8;
  plVar5[0xe] = lStack_40;
  *(undefined2 *)(plVar5 + 0xf) = uVar3;
  *(undefined1 *)((long)plVar5 + 0x7a) = 1;
  plStack_238 = plVar5;
  if ((uStack_100 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8);
  }
  uStack_100 = 0;
  if ((uStack_108 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
  }
  uStack_108 = 0;
  if ((uStack_118 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_118 & 0xff00ffffffffffff) - 8);
  }
  uStack_118 = 0;
  if ((uStack_120 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_278 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
  }
  uStack_278 = 0;
  if (((ulong)plStack_280 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_280 & 0xff00ffffffffffff) - 8)
    ;
  }
  plVar17 = (long *)*plVar8;
  plVar7 = (long *)plVar8[1];
  if (plVar17 != plVar7) {
    do {
      cVar4 = func_0x04fa7a10(*plVar17 + 0x20,plVar5 + 7);
      if (cVar4 == '\0') break;
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar7);
  }
  func_0x0d6af860(plVar8,plVar17,&plStack_238);
  plVar8 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  uStack_158 = 0;
  func_0x0ca46320(&plStack_1e8);
  if ((uStack_290 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
  }
  uStack_290 = 0;
  if (((ulong)plStack_298 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_298 & 0xff00ffffffffffff) - 8)
    ;
  }
  func_0x0ca461c0(&plStack_e8);
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a8 = 0;
  if (((ulong)plStack_2b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_2b0 & 0xff00ffffffffffff) - 8)
    ;
  }
  return;
}


