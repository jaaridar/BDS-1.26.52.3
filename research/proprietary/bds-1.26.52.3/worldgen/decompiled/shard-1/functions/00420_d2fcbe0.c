/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3fcbe0 (ELF vaddr 0xd2fcbe0)
 * Label: callee-of:0x4de9260
 * Body:  [[0d3fcbe0, 0d3fd205]]
 * Ghidra: FUN_0d3fcbe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3fcbe0(undefined8 param_1)

{
  byte *pbVar1;
  long *plVar2;
  long **pplVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  long *plVar11;
  long **pplVar12;
  long lVar13;
  undefined1 uStack_179;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long **pplStack_148;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte bStack_108;
  undefined4 uStack_107;
  undefined4 uStack_103;
  undefined4 uStack_ff;
  undefined4 uStack_fb;
  undefined4 uStack_f7;
  undefined3 uStack_f3;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined *apuStack_a8 [4];
  undefined **ppuStack_88;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_f3 = 0;
  uStack_f0 = 0;
  bStack_108 = 0x28;
  uStack_107 = _DAT_013d7cf2;
  uStack_103 = _UNK_013d7cf6;
  uStack_ff = _UNK_013d7cfa;
  uStack_fb = _UNK_013d7cfe;
  uStack_f7 = 0x65727574;
  uStack_110 = 0xb7bb130261650f25;
  uStack_70 = 0;
  uStack_e0 = 0;
  lStack_78 = 0;
  plStack_e8 = (long *)&UNK_0f46f230;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  plStack_168 = plStack_e8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f4676f0;
  plStack_160 = (long *)0x0;
  plStack_e8 = (long *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_179,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f467740;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  if (plStack_168 == (long *)0x0) {
    plVar8[0x3a] = 0;
    plVar9 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_168)(&plStack_168,plVar8 + 0x2e);
    plVar9 = plStack_168;
    plStack_168 = (long *)0x0;
    plVar8[0x2e] = (long)plVar9;
    plVar8[0x3a] = 0;
    if ((*(byte *)(plVar8 + 0x12) & 1) == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      func_0x0412a280(plVar8[0x14],plVar8[0x12] & 0xfffffffffffffffe);
      plVar9 = plStack_168;
    }
  }
  pbVar1 = (byte *)(plVar8 + 0x12);
  pbVar1[0] = 0x22;
  uVar6 = _UNK_01207d03;
  uVar5 = _UNK_01207cff;
  uVar4 = _UNK_01207cfb;
  pbVar1[1] = 0x66;
  *(undefined4 *)((long)plVar8 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar8 + 0x96) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x9a) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x9e) = uVar6;
  *(undefined4 *)((long)plVar8 + 0xa2) = 0;
  *(undefined2 *)((long)plVar8 + 0xa6) = 0;
  plVar8[0x11] = 0xf6c39062bb9edf3;
  plVar8[0x15] = 0;
  if (plVar9 != (long *)0x0) {
    (*(code *)plVar9[1])(&plStack_168);
  }
  plVar9 = plVar8 + 1;
  if (plStack_e8 != (long *)0x0) {
    (*(code *)plStack_e8[1])(&plStack_e8);
  }
  LOCK();
  *plVar9 = *plVar9 + 1;
  UNLOCK();
  plStack_170 = plVar9;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plStack_178 = plVar8 + 4;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f467820;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[4] = (long)&UNK_0f467870;
  plVar9[0xe] = (long)plStack_178;
  plVar9[0xf] = (long)plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plStack_168 = plVar9 + 4;
  plStack_160 = plVar9;
  puVar10 = (undefined4 *)func_0x04fbe5f0(param_1,&uStack_110,1);
  plVar2 = plVar8 + 0x11;
  plVar11 = *(long **)(puVar10 + 0x24);
  if (plVar11 < *(long **)(puVar10 + 0x26)) {
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[4] = 0;
    if (plVar11 == plVar2) {
LAB_0d3fcf08:
      *plVar11 = *plVar2;
      plVar11[5] = (long)(plVar9 + 4);
      plVar11[6] = (long)plVar9;
LAB_0d3fcf66:
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*pbVar1 & 1) == 0) {
        plVar11[3] = plVar8[0x14];
        lVar13 = plVar8[0x13];
        plVar11[1] = *(long *)pbVar1;
        plVar11[2] = lVar13;
        goto LAB_0d3fcf08;
      }
      func_0x04885070(plVar11 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar11 = *plVar2;
      plVar11[5] = (long)plStack_168;
      plVar11[6] = (long)plStack_160;
      plVar9 = plStack_160;
      if (plStack_160 != (long *)0x0) goto LAB_0d3fcf66;
    }
    plVar11 = plVar11 + 7;
    *(long **)(puVar10 + 0x24) = plVar11;
  }
  else {
    plVar11 = (long *)func_0x04fc1cf0(puVar10 + 0x22,plVar2,&plStack_168);
  }
  *(long **)(puVar10 + 0x24) = plVar11;
  uVar4 = *puVar10;
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar9 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar9 = *plVar9 + 1;
    UNLOCK();
  }
  plVar9 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar13 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_160;
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  if (plStack_160 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_160 + 1;
    lVar13 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_170;
  LOCK();
  lVar13 = *plStack_170;
  *plStack_170 = *plStack_170 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plStack_170;
    *plStack_170 = *plStack_170 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  apuStack_a8[0] = &UNK_0f46f258;
  ppuStack_88 = apuStack_a8;
  pplVar12 = (long **)(plVar8 + 0x36);
  pplStack_148 = &plStack_168;
  plStack_168 = (long *)&UNK_0f46f258;
  lVar13 = 0x20;
  if (pplVar12 == &plStack_168) {
LAB_0d3fd126:
    plVar8 = plStack_178;
    (**(code **)((long)*pplStack_148 + lVar13))();
  }
  else {
    pplVar3 = (long **)plVar8[0x3a];
    if (pplVar3 == pplVar12) {
      pplStack_148 = (long **)0x0;
      (*(code *)(*pplVar3)[3])(pplVar3,&plStack_168);
      (**(code **)(*(long *)plVar8[0x3a] + 0x20))();
      pplStack_148 = &plStack_168;
      plVar8[0x36] = (long)&UNK_0f46f258;
      plVar8[0x3a] = (long)pplVar12;
      goto LAB_0d3fd126;
    }
    plVar8[0x36] = (long)&UNK_0f46f258;
    pplStack_148 = pplVar3;
    plVar8[0x3a] = (long)pplVar12;
    if ((pplVar3 == &plStack_168) || (lVar13 = 0x28, plVar8 = plStack_178, pplVar3 != (long **)0x0))
    goto LAB_0d3fd126;
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_128);
  if ((uStack_128 & 1) != 0) {
    func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
  }
  if (ppuStack_88 == apuStack_a8) {
    lVar13 = 0x20;
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_88 == (undefined **)0x0) goto joined_r0x0d3fd1e0;
  }
  (**(code **)(*ppuStack_88 + lVar13))();
joined_r0x0d3fd1e0:
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_108 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_f3,CONCAT41(uStack_f7,uStack_fb._3_1_)),
                    CONCAT35((undefined3)uStack_103,CONCAT41(uStack_107,bStack_108)) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x13d7cf2  scan_surface_feature
 */
