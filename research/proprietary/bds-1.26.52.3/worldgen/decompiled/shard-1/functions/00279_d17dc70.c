/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd27dc70 (ELF vaddr 0xd17dc70)
 * Label: callee-of:0xc96a5d0
 * Body:  [[0d27dc70, 0d27e067] [0d27e070, 0d27e1cb]]
 * Ghidra: FUN_0d27dc70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d27dc70(long *param_1,ulong param_2,int param_3)

{
  long *plVar1;
  short sVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  float fVar18;
  undefined8 *puStack_68;
  long *plStack_60;
  undefined8 **ppuStack_48;
  
  lVar4 = func_0x0d27db60();
  if (lVar4 != 0) {
    return lVar4;
  }
  plVar1 = param_1 + 0xd;
  func_0x0412d680();
  uVar11 = param_3 << 7 & 0xffff0000U | (uint)(param_2 >> 9) & 0xffff;
  plVar12 = (long *)(*param_1 +
                    (ulong)((int)((ulong)(param_1[1] - *param_1) >> 3) - 1U & uVar11) * 8);
  do {
    lVar4 = *plVar12;
    if (lVar4 == -1) goto LAB_0d27dd12;
    plVar12 = (long *)(param_1[3] + lVar4 * 0x18);
  } while (*(uint *)(param_1[3] + 8 + lVar4 * 0x18) != uVar11);
  if (plVar12 == (long *)param_1[4]) {
LAB_0d27dd12:
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x70,0);
    }
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 4) = 0x3f800000;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    lVar4 = param_1[0xc];
    sVar2 = *(short *)((long)param_1 + 0x62);
    uVar10 = (int)(short)(param_2 >> 9) << 9;
    uVar16 = (param_3 << 7) >> 7;
    puVar5[0xb] = (long)CONCAT24((short)lVar4,uVar10);
    *(uint *)(puVar5 + 0xc) = uVar16 & 0xfffffe00;
    *(ulong *)((long)puVar5 + 100) =
         ((long)sVar2 << 0x20) + ((long)(short)lVar4 << 0x20) + (ulong)uVar10 + 0x1ff;
    *(uint *)((long)puVar5 + 0x6c) = uVar16 | 0x1ff;
    puVar5[10] = param_1[0x2b];
    lVar4 = *param_1;
    uVar14 = param_1[1] - lVar4;
    uVar8 = (ulong)(uVar11 & (int)(uVar14 >> 3) - 1U);
    plVar12 = (long *)(lVar4 + uVar8 * 8);
    plVar15 = (long *)param_1[3];
    plVar7 = plVar12;
    do {
      lVar6 = *plVar7;
      puStack_68 = puVar5;
      if (lVar6 == -1) {
        plVar17 = (long *)param_1[4];
        goto LAB_0d27de30;
      }
      plVar7 = plVar15 + lVar6 * 3;
    } while (*(uint *)(plVar15 + lVar6 * 3 + 1) != uVar11);
    plVar17 = (long *)param_1[4];
    if (plVar7 == plVar17) {
LAB_0d27de30:
      if (plVar17 < (long *)param_1[5]) {
        *plVar17 = *plVar12;
        *(uint *)(plVar17 + 1) = uVar11;
        puStack_68 = (undefined8 *)0x0;
        plVar17[2] = (long)puVar5;
        plVar12 = plVar17 + 3;
        plVar7 = plVar15;
      }
      else {
        lVar4 = (long)plVar17 - (long)plVar15;
        uVar14 = (lVar4 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          func_0x0d29b8b0();
LAB_0d27e190:
          uVar9 = func_0x04882eb0();
          func_0x0d280200(&puStack_68);
          func_0x0412d6b0(plVar1);
          uVar9 = func_0x0eee2d70(uVar9);
          func_0x0412d6b0(plVar1);
          func_0x0eee2d70(uVar9);
          pcVar3 = (code *)swi(3);
          lVar4 = (*pcVar3)();
          return lVar4;
        }
        lVar6 = param_1[5] - (long)plVar15 >> 3;
        uVar13 = lVar6 * 0x5555555555555556;
        if (uVar14 < uVar13) {
          uVar14 = uVar13;
        }
        if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
          uVar14 = 0xaaaaaaaaaaaaaaa;
        }
        if (0xaaaaaaaaaaaaaaa < uVar14) goto LAB_0d27e190;
        plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
        if (plVar7 == (long *)0x0) {
          func_0x0eec74c0(uVar14 * 0x18,0);
        }
        *(long *)((long)plVar7 + lVar4) = *plVar12;
        *(uint *)((long)plVar7 + lVar4 + 8) = uVar11;
        puStack_68 = (undefined8 *)0x0;
        *(undefined8 **)((long)plVar7 + lVar4 + 0x10) = puVar5;
        plVar12 = (long *)((long)plVar7 + lVar4 + 0x18);
        if (plVar15 != plVar17) {
          lVar4 = 0;
          do {
            *(undefined8 *)((long)plVar7 + lVar4) = *(undefined8 *)((long)plVar15 + lVar4);
            *(undefined4 *)((long)plVar7 + lVar4 + 8) = *(undefined4 *)((long)plVar15 + lVar4 + 8);
            uVar9 = *(undefined8 *)((long)plVar15 + lVar4 + 0x10);
            *(undefined8 *)((long)plVar15 + lVar4 + 0x10) = 0;
            *(undefined8 *)((long)plVar7 + lVar4 + 0x10) = uVar9;
            lVar6 = lVar4 + 0x18;
            lVar4 = lVar4 + 0x18;
          } while ((long *)((long)plVar15 + lVar6) != plVar17);
          do {
            lVar4 = plVar15[2];
            plVar15[2] = 0;
            if (lVar4 != 0) {
              func_0x0ca74450(lVar4);
              func_0x0412a280(lVar4,0x70);
            }
            plVar15 = plVar15 + 3;
          } while (plVar15 != plVar17);
          plVar15 = (long *)param_1[3];
        }
        param_1[3] = (long)plVar7;
        param_1[4] = (long)plVar12;
        lVar4 = param_1[5];
        param_1[5] = (long)(plVar7 + uVar14 * 3);
        if (plVar15 != (long *)0x0) {
          func_0x0412a280(plVar15,lVar4 - (long)plVar15);
          plVar7 = (long *)param_1[3];
        }
        lVar4 = *param_1;
        uVar14 = param_1[1] - lVar4;
      }
      param_1[4] = (long)plVar12;
      uVar13 = ((long)plVar12 - (long)plVar7 >> 3) * -0x5555555555555555;
      *(ulong *)(lVar4 + uVar8 * 8) = uVar13 - 1;
      fVar18 = (float)(ulong)((long)uVar14 >> 3) * *(float *)(param_1 + 6);
      uVar8 = (ulong)fVar18;
      uVar8 = (long)(fVar18 - _DAT_01198778) & (long)uVar8 >> 0x3f | uVar8;
      if (uVar8 <= uVar13 && uVar13 - uVar8 != 0) {
        func_0x0d29af10(param_1,(long)uVar14 >> 2);
      }
    }
    else {
      lVar4 = plVar7[2];
      plVar7[2] = (long)puVar5;
      if (lVar4 != 0) {
        func_0x0ca74450(lVar4);
        func_0x0412a280(lVar4,0x70);
      }
    }
  }
  else {
    puVar5 = (undefined8 *)plVar12[2];
  }
  lVar4 = func_0x0d280230(puVar5,param_2,param_3);
  puStack_68 = (undefined8 *)&UNK_0f45d890;
  plStack_60 = param_1;
  ppuStack_48 = &puStack_68;
  func_0x0d29bfd0(&puStack_68,lVar4);
  if (ppuStack_48 == &puStack_68) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (ppuStack_48 == (undefined8 **)0x0) goto LAB_0d27deed;
  }
  (**(code **)((long)*ppuStack_48 + lVar6))();
LAB_0d27deed:
  func_0x0412d6b0(plVar1);
  return lVar4;
}


