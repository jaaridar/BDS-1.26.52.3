/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6b5fd80 (ELF vaddr 0x6a5fd80)
 * Label: caller-of-callee
 * Body:  [[06b5fd80, 06b601dc] [06b601e0, 06b60432] [06b60440, 06b60516]]
 * Ghidra: FUN_06b5fd80
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06b5fd80(long param_1,uint *param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  ulong uStack_1e0;
  ulong **ppuStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong *puStack_198;
  undefined8 uStack_190;
  undefined4 *puStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  ulong *puStack_170;
  ulong *puStack_168;
  code *pcStack_160;
  undefined4 uStack_158;
  undefined1 uStack_154;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 *puStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  code *pcStack_108;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  ulong **ppuStack_c8;
  ulong **ppuStack_c0;
  ulong **ppuStack_b8;
  ulong uStack_b0;
  uint uStack_38;
  
  uVar3 = *param_2;
  uVar13 = *param_3;
  uVar4 = param_3[1];
  uStack_1b8 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (uVar3 == 0) {
    uStack_d8 = *(undefined8 *)(param_1 + 0x10);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = (long *)0x0;
    pcStack_108 = (code *)0x0;
    uStack_1e0 = uVar13;
    if ((DAT_0f569528 & 1) == 0) {
      uStack_110 = _DAT_0f569538;
      uStack_120 = (long *)CONCAT71(uRam000000000f569529,DAT_0f569528);
      uStack_118 = _DAT_0f569530;
    }
    else {
      func_0x04885070(&uStack_120,_DAT_0f569538,_DAT_0f569530);
    }
    uStack_128 = _DAT_0f569520;
    puStack_178 = (ulong *)0x0;
    puStack_170 = (ulong *)0x0;
    puStack_168 = (ulong *)0x0;
    uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
    ppuStack_1d8 = &puStack_178;
    puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar12 == (ulong *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puStack_168 = puVar12 + 5;
    ppuStack_b8 = &puStack_198;
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[4] = 0;
    puStack_1f8 = puVar12;
    puStack_198 = puVar12;
    puStack_178 = puVar12;
    ppuStack_c8 = &puStack_178;
    ppuStack_c0 = &puStack_1f8;
    if (puVar12 != &uStack_128) {
      if (((ulong)uStack_120 & 1) == 0) {
        puVar12[3] = uStack_110;
        *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_120;
        *(undefined4 *)((long)puVar12 + 0xc) = uStack_120._4_4_;
        *(undefined4 *)(puVar12 + 2) = (undefined4)uStack_118;
        *(undefined4 *)((long)puVar12 + 0x14) = uStack_118._4_4_;
        ppuStack_c0 = &puStack_1f8;
      }
      else {
        puStack_170 = puVar12;
        ppuStack_c0 = &puStack_1f8;
        func_0x04885070(puVar12 + 1,uStack_110,uStack_118);
      }
    }
    *puVar12 = uStack_128;
    puStack_170 = puStack_198 + 5;
    if ((DAT_0f5ea4a0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5ea4a0), iVar11 != 0)) {
      func_0x08b670e0(&DAT_0f5ea138);
      __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
    uVar13 = uStack_1e0;
    puStack_188 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_188 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar10 = _UNK_013944b7;
    puStack_198 = (ulong *)0x29;
    uStack_190 = 0x21;
    *(undefined8 *)(puStack_188 + 4) = _DAT_013944af;
    *(undefined8 *)(puStack_188 + 6) = uVar10;
    uVar9 = _UNK_013944ab;
    uVar8 = _UNK_013944a7;
    uVar7 = _UNK_013944a3;
    *puStack_188 = _DAT_0139449f;
    puStack_188[1] = uVar7;
    puStack_188[2] = uVar8;
    puStack_188[3] = uVar9;
    *(undefined2 *)(puStack_188 + 8) = 0x65;
    if ((uVar13 & 1) == 0) {
      uStack_1b0 = uVar13;
      uStack_1a0 = uStack_1b8;
      uStack_1a8 = uVar4;
    }
    else {
      func_0x0412e5e0(&uStack_1b0,uStack_1b8,uVar4);
    }
    puStack_1f8 = (ulong *)0x0;
    puStack_1f0 = (ulong *)0x0;
    puStack_1e8 = (ulong *)0x0;
    plStack_130 = (long *)((ulong)plStack_130 & 0xffffffffffffff00);
    puStack_138 = (undefined1 *)&puStack_1f8;
    puStack_180 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puStack_180 == (ulong *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    puStack_1e8 = puStack_180 + 3;
    ppuStack_c0 = &puStack_d0;
    ppuStack_b8 = &puStack_180;
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    puStack_1f8 = puStack_180;
    puStack_d0 = puStack_180;
    if ((uStack_1b0 & 1) == 0) {
      puStack_180[2] = uStack_1a0;
      *puStack_180 = uStack_1b0;
      puStack_180[1] = uStack_1a8;
      ppuStack_c8 = &puStack_1f8;
    }
    else {
      puStack_1f0 = puStack_180;
      ppuStack_c8 = &puStack_1f8;
      func_0x0412e5e0(puStack_180,uStack_1a0,uStack_1a8);
    }
    puStack_1f0 = puStack_180 + 3;
    puStack_138 = (undefined1 *)0x0;
    plStack_130 = (long *)0x0;
    (**(code **)(_DAT_0f5ea138 + 0x88))
              (&ppuStack_1d8,&DAT_0f5ea138,&puStack_198,&puStack_1f8,&puStack_138);
    uStack_b0 = uStack_1c8;
    ppuStack_c0 = ppuStack_1d8;
    ppuStack_b8 = (ulong **)uStack_1d0;
    ppuStack_1d8 = (ulong **)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_38 = 0;
    func_0x060aeeb0(uStack_d8,0,0,&puStack_178,&ppuStack_c8,3);
    if ((ulong)uStack_38 != 0xffffffff) {
      (**(code **)(&UNK_0f071d28 + (ulong)uStack_38 * 8))(&puStack_180,&ppuStack_c0);
    }
    uStack_38 = 0xffffffff;
    if (((ulong)ppuStack_1d8 & 1) != 0) {
      func_0x0412a280(uStack_1c8,(ulong)ppuStack_1d8 & 0xfffffffffffffffe);
    }
    plVar5 = plStack_130;
    if (plStack_130 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_130 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        func_0x0412c2d0(plVar5);
      }
    }
    puVar6 = puStack_1f8;
    puVar12 = puStack_1f0;
    if (puStack_1f8 != (ulong *)0x0) {
      for (; puVar6 != puVar12; puVar12 = puVar12 + -3) {
        if ((puVar12[-3] & 1) != 0) {
          func_0x0412a280(puVar12[-1],puVar12[-3] & 0xfffffffffffffffe);
        }
      }
      puStack_1f0 = puVar6;
      func_0x0412a280(puStack_1f8,(long)puStack_1e8 - (long)puStack_1f8);
    }
    if ((uStack_1b0 & 1) != 0) {
      func_0x0412a280(uStack_1a0,uStack_1b0 & 0xfffffffffffffffe);
    }
    puVar6 = puStack_178;
    puVar12 = puStack_170;
    if (((ulong)puStack_198 & 1) != 0) {
      func_0x0412a280(puStack_188,(ulong)puStack_198 & 0xfffffffffffffffe);
      puVar6 = puStack_178;
      puVar12 = puStack_170;
    }
    puStack_178 = puVar6;
    puStack_170 = puVar12;
    if (puVar6 != (ulong *)0x0) {
      for (; puVar6 != puVar12; puVar12 = puVar12 + -5) {
        if ((puVar12[-4] & 1) != 0) {
          func_0x0412a280(puVar12[-2],puVar12[-4] & 0xfffffffffffffffe);
        }
      }
      puStack_170 = puVar6;
      func_0x0412a280(puStack_178,(long)puStack_168 - (long)puStack_178);
    }
    if (((ulong)uStack_120 & 1) != 0) {
      func_0x0412a280(uStack_110,(ulong)uStack_120 & 0xfffffffffffffffe);
    }
  }
  lStack_150 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lStack_150 == 0) {
    func_0x048b0de0(&uStack_128,&ppuStack_1d8);
    _DAT_0f54fd90 = (undefined4)uStack_128;
    uRam000000000f54fd94 = uStack_128._4_4_;
    uVar7 = (undefined4)uStack_120;
    uVar8 = uStack_120._4_4_;
    uStack_128 = 0;
    uStack_120 = (long *)0x0;
    plVar5 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar7;
    uRam000000000f54fd9c = uVar8;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        func_0x0412c2d0(plVar5);
      }
    }
    plVar5 = uStack_120;
    if (uStack_120 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_120 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_120 + 0x10))(uStack_120);
        func_0x0412c2d0(plVar5);
      }
    }
    lStack_150 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puStack_168 = (ulong *)&UNK_06b5f700;
  uStack_158 = 0xee88fc7b;
  pcStack_160 = (code *)0x0;
  uStack_154 = 2;
  puStack_178 = (ulong *)(ulong)uVar3;
  uStack_148 = 0;
  puStack_140 = &UNK_06b5f620;
  func_0x0d81d5c0(&uStack_128,param_1 + 0x30,&puStack_178);
  if (pcStack_160 != (code *)0x0) {
    (*pcStack_160)(&puStack_178);
  }
  if (pcStack_108 != (code *)0x0) {
    (*pcStack_108)(&uStack_120);
  }
  if ((uVar13 & 1) != 0) {
    func_0x0412a280(uStack_1b8,uVar13 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x139449f  editor.logging.worldExportMessage
 * 0x13944af  orldExportMessage
 */
