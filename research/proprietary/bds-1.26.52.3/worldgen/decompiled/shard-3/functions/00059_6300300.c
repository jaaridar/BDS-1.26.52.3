/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6400300 (ELF vaddr 0x6300300)
 * Label: caller-of-callee
 * Body:  [[06400300, 06402170] [06402180, 0640240d]]
 * Ghidra: FUN_06400300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_06400300(byte *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  ushort uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  byte bVar13;
  char cVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 uVar21;
  byte bVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  byte *pbVar27;
  long *plVar28;
  undefined *puVar29;
  bool bVar30;
  undefined8 uStack_368;
  ulong uStack_360;
  undefined *puStack_358;
  long *plStack_350;
  long *plStack_348;
  ulong *puStack_340;
  char *pcStack_338;
  char *pcStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  byte bStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  ulong *puStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined8 uStack_288;
  ulong *puStack_280;
  char *pcStack_278;
  char *pcStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 uStack_208;
  undefined1 uStack_1f8;
  undefined2 uStack_1f6;
  undefined1 uStack_1f4;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  byte bStack_188;
  byte *pbStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_118;
  undefined8 uStack_e8;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  ulong uStack_48;
  byte *pbStack_40;
  ulong uStack_38;
  
  uStack_58 = param_3;
  if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  pbVar27 = param_1 + 1;
  bVar30 = (*param_1 & 1) == 0;
  pbStack_40 = *(byte **)(param_1 + 0x10);
  if (bVar30) {
    pbStack_40 = pbVar27;
  }
  uStack_38 = (ulong)(*param_1 >> 1);
  if (!bVar30) {
    uStack_38 = *(ulong *)(param_1 + 8);
  }
  cVar14 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_40);
  if (cVar14 == '\0') {
    bVar30 = (*param_1 & 1) != 0;
    if (bVar30) {
      pbVar27 = *(byte **)(param_1 + 0x10);
    }
    uVar23 = (ulong)(*param_1 >> 1);
    if (bVar30) {
      uVar23 = *(ulong *)(param_1 + 8);
    }
    if (0xfffffffffffffff7 < uVar23) {
      func_0x04882e30();
      goto LAB_06402370;
    }
    if (uVar23 < 0x17) {
      uStack_288 = (long *)CONCAT71(uStack_288._1_7_,(char)uVar23 * '\x02');
      uVar17 = (long)&uStack_288 + 1;
      if (uVar23 != 0) goto LAB_06400a2b;
    }
    else {
      uVar25 = 0x1a;
      if ((uVar23 | 7) != 0x17) {
        uVar25 = (uVar23 | 7) + 1;
      }
      uVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
      if (uVar17 == 0) {
        FUN_0eec74c0(uVar25,0);
      }
      uStack_288 = (long *)(uVar25 | 1);
      puStack_280 = (ulong *)uVar23;
      pcStack_278 = (char *)uVar17;
LAB_06400a2b:
      func_0x0eee2ee0(uVar17,pbVar27,uVar23);
    }
    *(undefined1 *)(uVar17 + uVar23) = 0;
    puVar18 = (ulong *)func_0x0412f0e0(&uStack_288,0,&UNK_0123edca,0x1f);
    uStack_158 = puVar18[2];
    uStack_168 = *puVar18;
    uStack_160 = puVar18[1];
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    if (((ulong)uStack_288 & 1) != 0) {
      func_0x0412a280(pcStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
    }
    uVar23 = uStack_168;
    puVar2 = *(undefined4 **)(param_2 + 8);
    if (puVar2 < *(undefined4 **)(param_2 + 0x10)) {
      if ((uStack_168 & 1) == 0) {
        *(ulong *)(puVar2 + 4) = uStack_158;
        *puVar2 = (undefined4)uStack_168;
        puVar2[1] = uStack_168._4_4_;
        puVar2[2] = (undefined4)uStack_160;
        puVar2[3] = uStack_160._4_4_;
      }
      else {
        func_0x0412e5e0(puVar2,uStack_158,uStack_160);
      }
      *(undefined4 **)(param_2 + 8) = puVar2 + 6;
      *(undefined4 **)(param_2 + 8) = puVar2 + 6;
    }
    else {
      uVar21 = func_0x04909a40(param_2,&uStack_168);
      *(undefined8 *)(param_2 + 8) = uVar21;
      uVar23 = uStack_168;
    }
    if ((uVar23 & 1) != 0) {
      func_0x0412a280(uStack_158,uStack_168 & 0xfffffffffffffffe);
    }
    bVar22 = 0;
    goto LAB_064021d1;
  }
  pbStack_78 = param_1;
  func_0x05d54750(&uStack_288,&UNK_0f030048);
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  puStack_150 = &uStack_148;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_118 = 0;
  uStack_e8 = 0;
  uStack_d8 = (ulong)uStack_288;
  uStack_d0 = 0;
  puVar18 = puStack_280;
  if (((ulong)puStack_280 >> 0x37 & 1) != 0) {
    uVar23 = (ulong)puStack_280 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar1 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    puVar18 = (ulong *)((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_c8 = 0;
  pbStack_178 = pbVar27;
  uStack_d0 = (ulong)puVar18;
  if (((ulong)pcStack_278 & 0x80000000000000) == 0) {
    uStack_c8 = (ulong)pcStack_278;
    pcStack_c0 = (char *)0x0;
    plStack_b8 = (long *)0x0;
    lStack_b0 = 0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    uVar23 = (ulong)pcStack_278 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar1 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    uStack_c8 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0;
    puStack_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    lStack_b0 = 0;
    puStack_a8 = (undefined8 *)0x0;
    pcStack_c0 = (char *)0x0;
    plStack_b8 = (long *)0x0;
    uStack_80 = 0;
    if (((ulong)pcStack_278 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pcStack_278 & 0xff00ffffffffffff) - 8);
    }
  }
  pcStack_278 = (char *)0x0;
  if (((ulong)puStack_280 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_280 & 0xff00ffffffffffff) - 8)
    ;
  }
  if (DAT_0f774768 == '\0') {
LAB_06402370:
    iVar15 = func_0x04108328(&DAT_0f774768);
    if (iVar15 != 0) {
      func_0x0ed58ba0(0xf7746f8);
      func_0x0eee2f40(&SUB_04904f60,0xf7746f8,0xf53dab8);
      func_0x0410844d(&DAT_0f774768);
    }
  }
  plVar16 = plStack_b8;
  pcStack_c0 = (char *)0x0;
  plStack_b8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar20 = plVar16 + 1;
    lVar1 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar16 = plStack_b8;
  plStack_b8 = (long *)_DAT_0f774708;
  pcStack_c0 = _DAT_0f774700;
  lStack_b0 = 0;
  if (_DAT_0f774708 != (char *)0x0) {
    LOCK();
    *(long *)(_DAT_0f774708 + 8) = *(long *)(_DAT_0f774708 + 8) + 1;
    UNLOCK();
  }
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar20 = plVar16 + 1;
    lVar1 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  if (pcStack_c0 != (char *)0x0) {
    lStack_b0 = 0xf7746f8;
  }
  func_0x05d54750(&puStack_2a8,&UNK_0f030048);
  if (((pcStack_c0 == (char *)0x0) || (*pcStack_c0 == '\0')) &&
     (cVar14 = func_0x0eeddcf0(&UNK_013c6966,&UNK_01259d39,0xf5,&UNK_01259d48,&UNK_0130c798),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_90 = puStack_2a8;
  if ((uStack_88 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_88 & 0xff00ffffffffffff) - 8);
  }
  uStack_88 = 0;
  uVar23 = uStack_2a0;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    uVar23 = uStack_2a0 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar1 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_88 = uVar23;
  if ((uStack_80 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
  }
  uStack_80 = 0;
  uVar23 = uStack_298;
  if ((uStack_298 & 0x80000000000000) != 0) {
    uVar23 = uStack_298 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar1 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  lVar1 = lStack_b0;
  plVar16 = plStack_b8;
  pcVar4 = pcStack_c0;
  puStack_340 = &uStack_d8;
  plStack_348 = &uStack_168;
  pcStack_338 = pcStack_c0;
  pcStack_330 = (char *)plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    LOCK();
    *(long *)((long)plStack_b8 + 8) = *(long *)((long)plStack_b8 + 8) + 1;
    UNLOCK();
  }
  uStack_328 = lStack_b0;
  uStack_320 = puStack_a8;
  uStack_80 = uVar23;
  if (puStack_a8 == (undefined8 *)0x0) {
    uStack_320 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (uStack_320 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *uStack_320 = 0;
  }
  puStack_a8 = uStack_320;
  if (puStack_a0 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = 0;
    puStack_a0 = puVar19;
  }
  ppuStack_310 = &puStack_90;
  uStack_288 = plStack_348;
  puStack_280 = puStack_340;
  pcStack_278 = pcVar4;
  pcStack_270 = (char *)plVar16;
  pcStack_338 = (char *)0x0;
  pcStack_330 = (char *)0x0;
  lStack_268 = lVar1;
  uStack_328 = 0;
  uStack_260 = uStack_320;
  uStack_248 = puStack_2a8;
  uStack_240 = 0;
  uVar23 = uStack_2a0;
  uStack_318 = puStack_a0;
  uStack_258 = puStack_a0;
  ppuStack_250 = ppuStack_310;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    uVar23 = uStack_2a0 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar1 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_238 = 0;
  uVar25 = uStack_298;
  uStack_240 = uVar23;
  lStack_60 = param_2;
  if ((uStack_298 & 0x80000000000000) != 0) {
    uVar23 = uStack_298 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar1 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    uVar25 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar18 = puStack_280;
  uStack_208 = 0;
  uStack_1f8 = 1;
  uStack_1f6 = 0xfffc;
  uStack_1f4 = 1;
  plStack_170 = uStack_288;
  uStack_368 = (undefined *)*puStack_280;
  uStack_360 = puStack_280[1];
  uStack_238 = uVar25;
  if ((uStack_360 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uStack_360 & 0xff00ffffffffffff) - 8);
    lVar1 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uStack_360 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    uStack_360 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puStack_358 = (undefined *)0x0;
  puVar29 = (undefined *)puVar18[2];
  if (((ulong)puVar29 & 0x80000000000000) != 0) {
    lVar24 = *(long *)(((ulong)puVar29 & 0xff00ffffffffffff) - 8);
    lVar1 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,(ulong)puVar29 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    puVar29 = (undefined *)((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  puVar6 = puStack_280;
  uVar23 = uStack_240 & 0x80000000000000;
  uVar3 = (ushort)(uStack_240 >> 0x30);
  puStack_358 = puVar29;
  if (uVar23 == 0) {
    if ((uStack_240 & 0x7f000000000000) == 0) goto LAB_06400f57;
    uVar25 = (ulong)(uVar3 & 0x7f);
LAB_06400f0f:
    if (((uVar25 != 4) || (*(int *)(uStack_240 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)uStack_248 != 9999 || ((uStack_248._2_2_ != 9999 || (uStack_248._4_2_ != 9999))))))
    goto LAB_06400f57;
LAB_06401149:
    if (uVar23 == 0) {
      if ((uStack_240 & 0x7f000000000000) != 0) {
        uVar25 = (ulong)(uVar3 & 0x7f);
LAB_0640118a:
        if (((uVar25 == 4) &&
            (piVar26 = (int *)(uStack_240 & 0xff00ffffffffffff), *piVar26 == 0x61746562)) &&
           (((short)uStack_248 == 9999 && ((uStack_248._2_2_ == 9999 && (uStack_248._4_2_ == 9999)))
            ))) {
          uStack_368 = uStack_248;
          if ((uStack_360 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_360 & 0xff00ffffffffffff) - 8)
            ;
            piVar26 = (int *)(uStack_240 & 0xff00ffffffffffff);
            uVar23 = uStack_240 & 0x80000000000000;
          }
          uStack_360 = 0;
          uVar25 = uStack_240;
          if (uVar23 != 0) {
            lVar24 = *(long *)(piVar26 + -2);
            lVar1 = lVar24 + 9;
            plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
            if (lVar1 != 0 && plVar16 == (long *)0x0) {
              FUN_0eec74c0(lVar1,8);
            }
            *plVar16 = lVar24;
            func_0x0eee2f00(plVar16 + 1,piVar26,lVar24);
            *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
            uVar25 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_360 = uVar25;
          if (((ulong)puStack_358 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)puStack_358 & 0xff00ffffffffffff) - 8);
          }
          puStack_358 = (undefined *)0x0;
          puVar29 = (undefined *)uStack_238;
          if ((uStack_238 & 0x80000000000000) != 0) {
            uVar23 = uStack_238 & 0xff00ffffffffffff;
            lVar24 = *(long *)(uVar23 - 8);
            lVar1 = lVar24 + 9;
            plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
            if (lVar1 != 0 && plVar16 == (long *)0x0) {
              FUN_0eec74c0(lVar1,8);
            }
            goto LAB_0640138c;
          }
        }
      }
    }
    else {
      uVar25 = *(ulong *)((uStack_240 & 0xff00ffffffffffff) - 8);
      if (uVar25 != 0) goto LAB_0640118a;
    }
  }
  else {
    uVar25 = *(ulong *)((uStack_240 & 0xff00ffffffffffff) - 8);
    if (uVar25 != 0) goto LAB_06400f0f;
LAB_06400f57:
    uVar25 = puVar18[1];
    if ((uVar25 & 0x80000000000000) != 0) {
      uVar17 = *(ulong *)((uVar25 & 0xff00ffffffffffff) - 8);
      if (uVar17 != 0) goto LAB_06400f92;
      goto LAB_06401149;
    }
    if ((uVar25 & 0x7f000000000000) == 0) goto LAB_06401149;
    uVar17 = (ulong)((ushort)(uVar25 >> 0x30) & 0x7f);
LAB_06400f92:
    if ((((uVar17 != 4) || (*(int *)(uVar25 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)*puVar18 != 9999)) ||
       ((*(short *)((long)puVar18 + 2) != 9999 || (*(short *)((long)puVar18 + 4) != 9999))))
    goto LAB_06401149;
    uStack_368 = (undefined *)*puStack_280;
    if ((uStack_360 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_360 & 0xff00ffffffffffff) - 8);
    }
    uStack_360 = 0;
    uVar23 = puVar6[1];
    if ((uVar23 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
      lVar1 = lVar24 + 9;
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
      if (lVar1 != 0 && plVar16 == (long *)0x0) {
        FUN_0eec74c0(lVar1,8);
      }
      *plVar16 = lVar24;
      func_0x0eee2f00(plVar16 + 1,uVar23 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
      uVar23 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_360 = uVar23;
    if (((ulong)puStack_358 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_358 & 0xff00ffffffffffff) - 8);
    }
    puStack_358 = (undefined *)0x0;
    puVar29 = (undefined *)puVar6[2];
    if (((ulong)puVar29 & 0x80000000000000) == 0) goto LAB_064013c2;
    uVar23 = (ulong)puVar29 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar1 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
LAB_0640138c:
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    puVar29 = (undefined *)((ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
LAB_064013c2:
  puStack_358 = puVar29;
  func_0x0d6b3300(&plStack_2e8,&uStack_248,&uStack_368,1);
  if ((uStack_260 == (undefined8 *)0x0) &&
     (cVar14 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_013ae566),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_278 == (char *)0x0) || (puVar19 = uStack_260, *pcStack_278 != '\x01')) {
    cVar14 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_013ae566);
    puVar19 = uStack_260;
    if (cVar14 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pcStack_278 == (char *)0x0) &&
       (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*pcStack_278 == '\0') &&
     (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar1 = lStack_268;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar16 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar29 = uStack_248;
  uStack_300 = uStack_248;
  lStack_68 = lVar1;
  uVar23 = uStack_240;
  plStack_350 = plVar16;
  puStack_70 = puVar19;
  if ((uStack_240 & 0x80000000000000) != 0) {
    uVar23 = uStack_240 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar1 = lVar24 + 9;
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar20 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar20 = lVar24;
    func_0x0eee2f00(plVar20 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar20 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_2f0 = 0;
  uStack_1d8 = uStack_238;
  if ((uStack_238 & 0x80000000000000) != 0) {
    uVar25 = uStack_238 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar25 - 8);
    lVar1 = lVar24 + 9;
    uStack_2f8 = uVar23;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar16 == (long *)0x0) {
      FUN_0eec74c0(lVar1,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uVar25,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    uStack_1d8 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    plVar16 = plStack_350;
  }
  uVar12 = uStack_1f6;
  uStack_320 = (undefined8 *)uStack_2c0;
  uStack_328 = uStack_2c8;
  pcStack_338 = (char *)uStack_2d8;
  puStack_340 = puStack_2e0;
  uStack_198 = CONCAT62(uStack_198._2_6_,(undefined2)uStack_2b8);
  puStack_1e8 = puVar29;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  plStack_1c8 = plStack_2e8;
  puStack_2e0 = (ulong *)0x0;
  uStack_2d8 = 0;
  plStack_348 = plStack_2e8;
  puStack_1c0 = (ulong *)0x0;
  uStack_1b8 = 0;
  uStack_1b0 = uStack_2d0;
  pcStack_330 = (char *)uStack_2d0;
  lStack_1a8 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_1a0 = 0;
  uStack_318 = (undefined8 *)CONCAT62(uStack_318._2_6_,(undefined2)uStack_2b8);
  puStack_1e0 = (undefined8 *)uVar23;
  func_0x0d6a8a30(plVar16,lStack_68,&puStack_1e8,&plStack_348);
  pbVar27 = pbStack_178;
  if (((ulong)uStack_320 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_320 & 0xff00ffffffffffff) - 8);
  }
  lVar1 = lStack_60;
  uStack_320 = (undefined8 *)0x0;
  if ((uStack_328 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_328 & 0xff00ffffffffffff) - 8);
  }
  uStack_328 = 0;
  if (((ulong)pcStack_338 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_338 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_338 = (char *)0x0;
  if (((ulong)puStack_340 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_340 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_340 = (ulong *)0x0;
  if ((uStack_1d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1d8 = 0;
  if (((ulong)puStack_1e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_1e0 & 0xff00ffffffffffff) - 8)
    ;
  }
  *plStack_350 = (long)&UNK_0f031bd8;
  plStack_350[0xe] = (long)puStack_70;
  *(undefined2 *)(plStack_350 + 0xf) = uVar12;
  *(undefined1 *)((long)plStack_350 + 0x7a) = 1;
  plStack_348 = plStack_350;
  if ((uStack_2c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
  }
  uStack_2c0 = 0;
  if ((uStack_2c8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2c8 = 0;
  if ((uStack_2d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2d8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2d8 = 0;
  if (((ulong)puStack_2e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_2e0 & 0xff00ffffffffffff) - 8)
    ;
  }
  if (((ulong)puStack_358 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_358 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_358 = (undefined *)0x0;
  if ((uStack_360 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_360 & 0xff00ffffffffffff) - 8);
  }
  plVar16 = (long *)*plStack_170;
  plVar20 = (long *)plStack_170[1];
  if (plVar16 != plVar20) {
    plVar28 = plStack_350 + 7;
    do {
      cVar14 = func_0x04fa7a10(*plVar16 + 0x20,plVar28);
      if (cVar14 == '\0') break;
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar20);
  }
  func_0x0d6af860(plStack_170,plVar16,&plStack_348);
  plVar16 = plStack_348;
  plStack_348 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
  }
  uStack_1f8 = 0;
  func_0x064001a0(&uStack_288);
  if ((uStack_298 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_298 & 0xff00ffffffffffff) - 8);
  }
  uStack_298 = 0;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a0 & 0xff00ffffffffffff) - 8);
  }
  puStack_1e8 = &DAT_0f7b8f98;
  puStack_1e0 = &uStack_168;
  uStack_1d8 = uStack_58;
  lStack_1d0 = lVar1;
  if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    pbVar27 = pbStack_178;
  }
  bVar30 = (*pbStack_78 & 1) != 0;
  pbStack_50 = pbVar27;
  if (bVar30) {
    pbStack_50 = *(byte **)(pbStack_78 + 0x10);
  }
  uStack_48 = (ulong)(*pbStack_78 >> 1);
  if (bVar30) {
    uStack_48 = *(ulong *)(pbStack_78 + 8);
  }
  (**(code **)(_DAT_0f7b8f98 + 0xb0))
            (&plStack_348,&DAT_0f7b8f98,&pbStack_50,0x196,&UNK_06444040,&puStack_1e8);
  if (bStack_308 == 0) {
    plStack_2e8 = plStack_348;
    puStack_2e0 = puStack_340;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x0489ad20(&uStack_2d8,pcStack_338,pcStack_330,
                    ((long)pcStack_330 - (long)pcStack_338 >> 4) * -0x3333333333333333);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    lStack_2b0 = 0;
    func_0x05d8b660(&uStack_2c0,uStack_320,uStack_318,(long)uStack_318 - (long)uStack_320 >> 6);
    func_0x0eede540(&uStack_368,&plStack_2e8);
    puStack_2a8 = (undefined *)((long)&uStack_368 + 1);
    uStack_2a0 = (ulong)uStack_368 >> 1 & 0x7f;
    if (((ulong)uStack_368 & 1) != 0) {
      uStack_2a0 = uStack_360;
      puStack_2a8 = puStack_358;
    }
    func_0x0470d9a0(&uStack_300,&UNK_01273c2c,0x2e,0xd,&puStack_2a8);
    if (((ulong)uStack_368 & 1) != 0) {
      func_0x0412a280(puStack_358,(ulong)uStack_368 & 0xfffffffffffffffe);
    }
    puVar2 = *(undefined4 **)(lVar1 + 8);
    if (puVar2 < *(undefined4 **)(lVar1 + 0x10)) {
      if (((ulong)uStack_300 & 1) == 0) {
        *(undefined8 *)(puVar2 + 4) = uStack_2f0;
        *puVar2 = (undefined4)uStack_300;
        puVar2[1] = uStack_300._4_4_;
        puVar2[2] = (undefined4)uStack_2f8;
        puVar2[3] = uStack_2f8._4_4_;
      }
      else {
        func_0x0412e5e0(puVar2,uStack_2f0,uStack_2f8);
      }
      *(undefined4 **)(lVar1 + 8) = puVar2 + 6;
      *(undefined4 **)(lVar1 + 8) = puVar2 + 6;
    }
    else {
      uVar21 = func_0x04909a40(lVar1,&uStack_300);
      *(undefined8 *)(lVar1 + 8) = uVar21;
    }
    if (((ulong)uStack_300 & 1) != 0) {
      func_0x0412a280(uStack_2f0,(ulong)uStack_300 & 0xfffffffffffffffe);
    }
    uVar25 = uStack_2c0;
    uVar23 = uStack_2b8;
    if (uStack_2c0 != 0) {
      while (uVar25 != uVar23) {
        func_0x048b3e80(uVar23 - 0x40);
        uVar23 = uVar23 - 0x40;
      }
      uStack_2b8 = uVar25;
      func_0x0412a280(uStack_2c0,lStack_2b0 - uStack_2c0);
    }
    uVar25 = uStack_2d8;
    uVar23 = uStack_2d0;
    if (uStack_2d8 != 0) {
      for (; uVar25 != uVar23; uVar23 = uVar23 - 0x50) {
        if ((*(char *)(uVar23 - 8) == '\x01') && ((*(byte *)(uVar23 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(uVar23 - 0x20),
                          *(ulong *)(uVar23 - 0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_2d0 = uVar25;
      func_0x0412a280(uStack_2d8,uStack_2c8 - uStack_2d8);
    }
  }
  uStack_248 = (undefined *)CONCAT71(uStack_248._1_7_,bStack_308);
  if ((bStack_308 & 1) == 0) {
    uStack_288 = plStack_348;
    puStack_280 = puStack_340;
    pcStack_278 = pcStack_338;
    pcStack_270 = pcStack_330;
    lStack_268 = uStack_328;
    pcStack_338 = (char *)0x0;
    pcStack_330 = (char *)0x0;
    uStack_328 = 0;
    uStack_260._0_4_ = SUB84(uStack_320,0);
    uStack_260._4_4_ = uStack_320._4_4_;
    uStack_258._0_4_ = SUB84(uStack_318,0);
    uStack_258._4_4_ = uStack_318._4_4_;
    ppuStack_250 = ppuStack_310;
    uStack_320 = (undefined8 *)0x0;
    uStack_318 = (undefined8 *)0x0;
    ppuStack_310 = (undefined **)0x0;
    func_0x064473f0(&uStack_288);
    ppuStack_190 = ppuStack_250;
    uVar11 = uStack_258._4_4_;
    uVar10 = (undefined4)uStack_258;
    uVar9 = uStack_260._4_4_;
    uVar7 = (undefined4)uStack_260;
    lStack_1a8 = lStack_268;
    uStack_1b0 = (ulong)pcStack_270;
    uStack_1b8 = (ulong)pcStack_278;
    plStack_2e8 = uStack_288;
    puStack_2e0 = puStack_280;
    pcStack_278 = (char *)0x0;
    pcStack_270 = (char *)0x0;
    lStack_268 = 0;
    uStack_260 = (undefined8 *)0x0;
    uStack_258 = (undefined8 *)0x0;
    ppuStack_250 = (undefined **)0x0;
    uStack_2b8 = 0;
    lStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    bStack_188 = 0;
    plStack_1c8 = uStack_288;
    puStack_1c0 = puStack_280;
    uStack_1a0 = CONCAT44(uVar9,uVar7);
    uStack_198 = CONCAT44(uVar11,uVar10);
    func_0x048e6d60(&plStack_2e8);
    if (((ulong)uStack_248 & 1) == 0) goto LAB_06401ee3;
  }
  else {
    bStack_188 = 1;
    plStack_1c8 = (long *)CONCAT71(plStack_1c8._1_7_,1);
    if ((bStack_308 & 1) == 0) {
LAB_06401ee3:
      puVar8 = uStack_260;
      puVar19 = uStack_258;
      if (uStack_260 != (undefined8 *)0x0) {
        while (puVar8 != puVar19) {
          func_0x048b3e80(puVar19 + -8);
          puVar19 = puVar19 + -8;
        }
        uStack_258 = puVar8;
        func_0x0412a280(uStack_260,(long)ppuStack_250 - (long)uStack_260);
      }
      pcVar5 = pcStack_278;
      pcVar4 = pcStack_270;
      if (pcStack_278 != (char *)0x0) {
        for (; pcVar5 != pcVar4; pcVar4 = pcVar4 + -0x50) {
          if ((pcVar4[-8] == '\x01') && ((pcVar4[-0x30] & 1U) != 0)) {
            func_0x0412a280(*(undefined8 *)(pcVar4 + -0x20),
                            *(ulong *)(pcVar4 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_270 = pcVar5;
        func_0x0412a280(pcStack_278,lStack_268 - (long)pcStack_278);
      }
    }
  }
  uStack_288 = (long *)0x250e76836b7ab032;
  puStack_280 = (ulong *)&UNK_0140f690;
  pcStack_278 = (char *)0x1;
  pcStack_270 = (char *)CONCAT44(pcStack_270._4_4_,0xb5);
  if (bStack_188 == 0) {
    func_0x0eedea30(&plStack_2e8);
    func_0x0eedeb80(2,0x2d,&plStack_1c8,&plStack_2e8,&uStack_288);
    if (((ulong)plStack_2e8 & 1) != 0) {
      func_0x0412a280(uStack_2d8,(ulong)plStack_2e8 & 0xfffffffffffffffe);
    }
  }
  bVar22 = bStack_188;
  lVar1 = uStack_1a0;
  bVar13 = (byte)plStack_1c8;
  if ((bStack_188 & 1) == 0) {
    lVar24 = uStack_198;
    if (uStack_1a0 != 0) {
      while (lVar1 != lVar24) {
        func_0x048b3e80(lVar24 + -0x40);
        lVar24 = lVar24 + -0x40;
      }
      uStack_198 = lVar1;
      func_0x0412a280(uStack_1a0,(long)ppuStack_190 - uStack_1a0);
    }
    uVar25 = uStack_1b8;
    uVar23 = uStack_1b0;
    if (uStack_1b8 != 0) {
      for (; uVar25 != uVar23; uVar23 = uVar23 - 0x50) {
        if ((*(char *)(uVar23 - 8) == '\x01') && ((*(byte *)(uVar23 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(uVar23 - 0x20),
                          *(ulong *)(uVar23 - 0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_1b0 = uVar25;
      func_0x0412a280(uStack_1b8,lStack_1a8 - uStack_1b8);
    }
  }
  lVar1 = (long)uStack_320;
  if (bStack_308 == 0) {
    lVar24 = (long)uStack_318;
    if (uStack_320 != (undefined8 *)0x0) {
      while (lVar1 != lVar24) {
        func_0x048b3e80(lVar24 + -0x40);
        lVar24 = lVar24 + -0x40;
      }
      uStack_318 = (undefined8 *)lVar1;
      func_0x0412a280(uStack_320,(long)ppuStack_310 - (long)uStack_320);
    }
    pcVar5 = pcStack_338;
    pcVar4 = pcStack_330;
    if (pcStack_338 != (char *)0x0) {
      for (; pcVar5 != pcVar4; pcVar4 = (char *)((long)pcVar4 - 0x50)) {
        if ((*(char *)((long)pcVar4 - 8) == '\x01') && ((*(byte *)((long)pcVar4 - 0x30) & 1) != 0))
        {
          func_0x0412a280(*(undefined8 *)((long)pcVar4 - 0x20),
                          *(ulong *)((long)pcVar4 - 0x30) & 0xfffffffffffffffe);
        }
      }
      pcStack_330 = pcVar5;
      func_0x0412a280(pcStack_338,uStack_328 - (long)pcStack_338);
    }
  }
  bVar22 = bVar22 & bVar13;
  func_0x064027a0(&uStack_168);
LAB_064021d1:
  return bVar22 & 1;
}


