/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5264a10 (ELF vaddr 0x5164a10)
 * Label: caller-of-callee
 * Body:  [[05264a10, 05264e9b] [05264ea0, 05264f3e]]
 * Ghidra: FUN_05264a10
 */


byte FUN_05264a10(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  int iStack_2e8;
  int iStack_2e4;
  long lStack_2e0;
  long *plStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  byte bStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined2 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined2 uStack_200;
  undefined6 uStack_1fe;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  undefined2 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [232];
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  
  func_0x0412d550(param_2 + 0x22);
  lVar13 = param_2[0x34];
  lVar5 = param_2[0x35];
  func_0x0412d610(param_2 + 0x22);
  iStack_2e8 = (int)lVar13 + 1;
  iStack_2e4 = (int)lVar5 + 1;
  (**(code **)(*param_2 + 0x20))(&lStack_2e0,param_2,&iStack_2e8);
  lVar13 = lStack_2e0;
  func_0x0ca8a1f0(&lStack_2d0,*(undefined8 *)(*(long *)(lStack_2e0 + 0x30) + 0x198),
                  lStack_2e0 + 0x50,param_2);
  bVar6 = bStack_2b8;
  if (bStack_2b8 != 0) {
    func_0x0c9d0c10(auStack_1a0,param_2[4],param_2[5],param_2,0,1,1,0);
    uStack_1f8 = 0;
    uStack_1f6 = 0;
    uStack_1f0 = 0;
    lStack_208 = 0;
    uStack_200 = 0;
    uStack_1fe = 0;
    lStack_218 = 0;
    lStack_210 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_238 = 0;
    lStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    lStack_260 = 0;
    lStack_278 = 0;
    lStack_270 = 0;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    lStack_258 = 0;
    uStack_250 = 1;
    puStack_b0 = &uStack_248;
    puStack_b8 = &uStack_2a8;
    plVar11 = (long *)func_0x052be380(param_1 + 0x150);
    uVar12 = (**(code **)(**(long **)(param_1 + 0x20) + 0x438))();
    lVar5 = plVar11[0x13f];
    if (*(char *)(lVar5 + 0x9e7) == '\x01') {
      *(int *)(lVar5 + 8) = (int)uVar12;
      *(undefined2 *)(lVar5 + 0x9e4) = 0;
      *(undefined4 *)(lVar5 + 0x9d4) = 0;
      *(undefined8 *)(lVar5 + 0x9d8) = 0;
      *(int *)(lVar5 + 0xc) = (int)uVar12;
      lVar14 = 5;
      while( true ) {
        uVar12 = ((ulong)(((uint)(uVar12 >> 0x1e) & 3 ^ (uint)uVar12) * 0x6c078965) + lVar14) - 4;
        uVar8 = (uint)uVar12;
        *(uint *)(lVar5 + -4 + lVar14 * 4) = uVar8;
        if (lVar14 == 0x191) break;
        uVar8 = (((uint)(uVar12 >> 0x1e) & 3 ^ uVar8) * 0x6c078965 + (int)lVar14) - 3;
        uVar12 = (ulong)uVar8;
        *(uint *)(lVar5 + lVar14 * 4) = uVar8;
        lVar14 = lVar14 + 2;
      }
      *(undefined8 *)(lVar5 + 0x9cc) = 0x18e00000270;
    }
    iVar9 = (**(code **)(*plVar11 + 0x10))(plVar11);
    iVar10 = (**(code **)(*plVar11 + 0x10))(plVar11);
    iVar2 = *(int *)(lVar13 + 0x50);
    iVar3 = *(int *)(lVar13 + 0x54);
    uVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x438))();
    func_0x0ca70f80(param_1,auStack_1a0,plVar11,
                    uVar8 ^ iVar3 * (iVar10 - (iVar10 >> 0x1f) | 1U) +
                            iVar2 * (iVar9 - (iVar9 >> 0x1f) | 1U),*(undefined4 *)(lVar13 + 0x50),
                    *(undefined4 *)(lVar13 + 0x54));
    func_0x0ca72420(param_1,auStack_1a0,plVar11,*(undefined4 *)(lVar13 + 0x50),
                    *(undefined4 *)(lVar13 + 0x54));
    puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x30);
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x38);
    if (puVar15 != puVar4) {
      lStack_2b0 = lStack_2e0 + 0x1538;
      do {
        plVar11 = (long *)*puVar15;
        cVar7 = (**(code **)(*plVar11 + 0x10))(plVar11);
        if (cVar7 != '\0') {
          uStack_1b0 = *(undefined4 *)(lStack_2e0 + 0x40);
          uStack_1b8 = *(undefined8 *)(lStack_2e0 + 0x38);
          uStack_1a4 = *(undefined4 *)(lStack_2e0 + 0x4c);
          uStack_1ac = *(undefined8 *)(lStack_2e0 + 0x44);
          puStack_1e8 = &UNK_0f461970;
          lStack_1e0 = lStack_2b0;
          lStack_1d8 = lStack_2e0;
          puStack_1d0 = &uStack_1b8;
          ppuStack_1c8 = &puStack_1e8;
          func_0x0d351180(plVar11,puStack_1d0,&puStack_1e8);
          if (ppuStack_1c8 == &puStack_1e8) {
            lVar13 = 0x20;
          }
          else {
            lVar13 = 0x28;
            if (ppuStack_1c8 == (undefined **)0x0) goto LAB_05264cdd;
          }
          (**(code **)(*ppuStack_1c8 + lVar13))();
        }
LAB_05264cdd:
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar4);
    }
    if (lStack_268 != 0) {
      lStack_260 = lStack_268;
      func_0x0412a280(lStack_268,lStack_258 - lStack_268);
    }
    if (lStack_280 != 0) {
      lStack_278 = lStack_280;
      func_0x0412a280(lStack_280,lStack_270 - lStack_280);
    }
    if (lStack_298 != 0) {
      lStack_290 = lStack_298;
      func_0x0412a280(lStack_298,lStack_288 - lStack_298);
    }
    if (lStack_208 != 0) {
      uStack_200 = (undefined2)lStack_208;
      uStack_1fe = (undefined6)((ulong)lStack_208 >> 0x10);
      func_0x0412a280(lStack_208,CONCAT62(uStack_1f6,uStack_1f8) - lStack_208);
    }
    if (lStack_220 != 0) {
      lStack_218 = lStack_220;
      func_0x0412a280(lStack_220,lStack_210 - lStack_220);
    }
    if (lStack_238 != 0) {
      lStack_230 = lStack_238;
      func_0x0412a280(lStack_238,lStack_228 - lStack_238);
    }
    func_0x0c9d0f40(auStack_1a0);
  }
  lVar13 = lStack_2d0;
  if (((bStack_2b8 & 1) != 0) && (lVar5 = lStack_2c8, lStack_2d0 != 0)) {
    for (; lVar13 != lVar5; lVar5 = lVar5 + -0x20) {
      if (*(char *)(lVar5 + -8) == '\x01') {
        func_0x0412d6b0(*(undefined8 *)(lVar5 + -0x10));
      }
      plVar11 = *(long **)(lVar5 + -0x18);
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        lVar14 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
      }
    }
    lStack_2c8 = lVar13;
    func_0x0412a280(lStack_2d0,lStack_2c0 - lStack_2d0);
  }
  if (plStack_2d8 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_2d8 + 1;
    lVar13 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
      func_0x0412c2d0(plStack_2d8);
    }
  }
  return bVar6;
}


