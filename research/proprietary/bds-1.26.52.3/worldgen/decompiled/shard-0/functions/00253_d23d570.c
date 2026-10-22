/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd33d570 (ELF vaddr 0xd23d570)
 * Label: callee-of:0x61416e0
 * Body:  [[0d33d570, 0d33d5d8] [0d33d5e0, 0d33d713] [0d33d720, 0d33da6f] [0d33da73, 0d33da9c]]
 * Ghidra: FUN_0d33d570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d33d570(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long ***ppplVar10;
  undefined8 uVar11;
  long *plVar12;
  long **pplVar13;
  long lVar14;
  long **pplVar15;
  long *plVar16;
  ulong uVar17;
  bool bVar18;
  long ***ppplStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_b8;
  char *pcStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long **pplStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lStack_80 = *(long *)(param_1 + 0x1a8);
  if (lStack_80 == 0) {
    return;
  }
  lStack_b8 = param_1;
  uStack_78 = param_3;
  puStack_70 = param_2;
  FUN_0d2c8290(&lStack_58);
  if (plStack_48 != (long *)0x0) {
    lStack_68 = lStack_b8 + 0x28;
    plVar12 = plStack_48;
    do {
      bVar18 = (*(byte *)(plVar12 + 2) & 1) != 0;
      lVar9 = (long)plVar12 + 0x11;
      if (bVar18) {
        lVar9 = plVar12[4];
      }
      uVar17 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
      if (bVar18) {
        uVar17 = plVar12[3];
      }
      plStack_d8 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      lStack_c8 = 0;
      plVar16 = (long *)plVar12[5];
      plVar2 = (long *)plVar12[6];
      pplStack_98 = &plStack_d8;
      uStack_90 = 0;
      lVar14 = (long)plVar2 - (long)plVar16;
      if (lVar14 != 0) {
        lStack_60 = lVar9;
        if (lVar14 < 0) goto LAB_0d33d9f4;
        plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar14);
        if (plVar8 == (long *)0x0) {
          func_0x0eec74c0(lVar14,0);
        }
        lStack_c8 = lVar14 + (long)plVar8;
        plStack_d0 = plVar8;
        do {
          lVar9 = *plVar16;
          *plStack_d0 = lVar9;
          lVar14 = plVar16[1];
          plStack_d0[1] = lVar14;
          if (lVar14 != 0) {
            LOCK();
            *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
            UNLOCK();
            lVar9 = *plStack_d0;
          }
          plStack_d8 = plVar8;
          if (lVar9 == 0) goto LAB_0d33d9ef;
          plVar16 = plVar16 + 2;
          plStack_d0 = plStack_d0 + 2;
          lVar9 = lStack_60;
        } while (plVar16 != plVar2);
      }
      func_0x0d382c20(lStack_68,lVar9,uVar17,&plStack_d8);
      plVar2 = plStack_d8;
      plVar16 = plStack_d0;
      if (plStack_d8 != (long *)0x0) {
        for (; plVar2 != plVar16; plVar16 = plVar16 + -2) {
          plVar8 = (long *)plVar16[-1];
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar9 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar9 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              func_0x0412c2d0(plVar8);
            }
          }
        }
        plStack_d0 = plVar2;
        func_0x0412a280(plStack_d8,lStack_c8 - (long)plStack_d8);
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  pcStack_b0 = (char *)*puStack_70;
  plStack_a8 = (long *)puStack_70[1];
  if (plStack_a8 != (long *)0x0) {
    LOCK();
    plStack_a8[1] = plStack_a8[1] + 1;
    UNLOCK();
  }
  uStack_a0 = puStack_70[2];
  plVar8 = plStack_d0;
  if ((pcStack_b0 == (char *)0x0) || (*pcStack_b0 == '\0')) {
LAB_0d33d9ef:
    plStack_d0 = plVar8;
    func_0x04890760();
LAB_0d33d9f4:
    uVar11 = func_0x0d2d9fd0();
    func_0x050d26f0(&pcStack_b0);
    func_0x0d2c8ef0(&lStack_58);
    uVar11 = func_0x0eee2d70(uVar11);
    func_0x0525eb60(&pplStack_98);
    func_0x0d2c8ef0(&lStack_58);
    uVar11 = func_0x0eee2d70(uVar11);
    func_0x051922d0(&plStack_d8);
    func_0x0d2c8ef0(&lStack_58);
    uVar11 = func_0x0eee2d70(uVar11);
    func_0x050d2790(&ppplStack_e0);
    ppplStack_e0 = &pplStack_98;
    func_0x0d2dfe00(&ppplStack_e0);
    func_0x0d2c8ef0(&lStack_58);
    func_0x0eee2d70(uVar11);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  func_0x0d2c8f20(&pplStack_98,lStack_80 + 0x18,&pcStack_b0,lStack_b8,uStack_78);
  plVar12 = plStack_a8;
  pcStack_b0 = (char *)0x0;
  plStack_a8 = (long *)0x0;
  if (plVar12 == (long *)0x0) {
    uStack_a0 = 0;
    pplVar15 = (long **)CONCAT71(uStack_8f,uStack_90);
    if (pplStack_98 == pplVar15) goto LAB_0d33d98a;
  }
  else {
    LOCK();
    plVar16 = plVar12 + 1;
    lVar9 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
    plVar12 = plStack_a8;
    uStack_a0 = 0;
    if (plStack_a8 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_a8 + 1;
      lVar9 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        func_0x0412c2d0(plVar12);
      }
    }
    pplVar15 = (long **)CONCAT71(uStack_8f,uStack_90);
    if (pplStack_98 == pplVar15) goto LAB_0d33d98a;
  }
  pplVar13 = pplStack_98;
  do {
    ppplVar10 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (ppplVar10 == (long ***)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    ppplVar10[2] = (long **)pplVar13[2];
    pplVar3 = (long **)pplVar13[1];
    *ppplVar10 = (long **)*pplVar13;
    ppplVar10[1] = pplVar3;
    *pplVar13 = (long *)0x0;
    pplVar13[1] = (long *)0x0;
    pplVar13[2] = (long *)0x0;
    pplVar3 = (long **)pplVar13[4];
    ppplVar10[3] = (long **)pplVar13[3];
    ppplVar10[4] = pplVar3;
    ppplVar10[5] = (long **)pplVar13[5];
    pplVar13[3] = (long *)0x0;
    pplVar13[4] = (long *)0x0;
    pplVar13[5] = (long *)0x0;
    ppplVar10[8] = (long **)pplVar13[8];
    uVar5 = *(undefined4 *)((long)pplVar13 + 0x34);
    uVar6 = *(undefined4 *)(pplVar13 + 7);
    uVar7 = *(undefined4 *)((long)pplVar13 + 0x3c);
    *(undefined4 *)(ppplVar10 + 6) = *(undefined4 *)(pplVar13 + 6);
    *(undefined4 *)((long)ppplVar10 + 0x34) = uVar5;
    *(undefined4 *)(ppplVar10 + 7) = uVar6;
    *(undefined4 *)((long)ppplVar10 + 0x3c) = uVar7;
    pplVar13[6] = (long *)0x0;
    pplVar13[7] = (long *)0x0;
    pplVar13[8] = (long *)0x0;
    ppplStack_e0 = ppplVar10;
    func_0x0d3301c0(lStack_b8,&ppplStack_e0);
    ppplVar10 = ppplStack_e0;
    ppplStack_e0 = (long ***)0x0;
    if (ppplVar10 != (long ***)0x0) {
      if (((ulong)ppplVar10[6] & 1) != 0) {
        func_0x0412a280(ppplVar10[8],(ulong)ppplVar10[6] & 0xfffffffffffffffe);
      }
      pplVar3 = ppplVar10[3];
      if (pplVar3 != (long **)0x0) {
        ppplVar10[4] = pplVar3;
        func_0x0412a280(pplVar3,(long)ppplVar10[5] - (long)pplVar3);
      }
      if (((ulong)*ppplVar10 & 1) != 0) {
        func_0x0412a280(ppplVar10[2],(ulong)*ppplVar10 & 0xfffffffffffffffe);
      }
      func_0x0412a280(ppplVar10,0x48);
    }
    pplVar13 = pplVar13 + 9;
  } while (pplVar13 != pplVar15);
LAB_0d33d98a:
  ppplStack_e0 = &pplStack_98;
  func_0x0d2dfe00(&ppplStack_e0);
  func_0x0d2e9040(&lStack_58,plStack_48);
  lVar9 = lStack_58;
  lStack_58 = 0;
  if (lVar9 != 0) {
    func_0x0412a280(lVar9,lStack_50 << 3);
  }
  return;
}


