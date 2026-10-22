/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1f5ad0 (ELF vaddr 0xd0f5ad0)
 * Label: caller-of-callee
 * Body:  [[0d1f5ad0, 0d1f62a0] [0d1f62b0, 0d1f6460] [0d1f6470, 0d1f6905] [0d1f6909, 0d1f6926] [0d1f694b, 0d1f6959] [0d1f695d, 0d1f6978] [0d1f6980, 0d1f698e] [0d1f69a4, 0d1f6a6c]]
 * Ghidra: FUN_0d1f5ad0
 */


/* WARNING: Possible PIC construction at 0x0d1f5bf3: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d1f5bf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte ** FUN_0d1f5ad0(byte **param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  byte **ppbVar15;
  undefined8 uVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  bool bVar22;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  byte *pbStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  byte *pbStack_2f0;
  byte bStack_2e8;
  long *plStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  byte *pbStack_2a8;
  ulong uStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  byte bStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  byte *pbStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  byte *pbStack_220;
  byte bStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  byte *pbStack_1d0;
  byte bStack_1c8;
  ulong uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  byte *pbStack_1a0;
  char cStack_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte *pbStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  byte *pbStack_168;
  byte bStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar18 = &uStack_328;
  plStack_2d8 = (long *)0x0;
  plStack_2d0 = (long *)0x0;
  bVar22 = (*param_2 & 1) != 0;
  pbVar17 = param_2 + 1;
  if (bVar22) {
    pbVar17 = *(byte **)(param_2 + 0x10);
  }
  uVar21 = (ulong)(*param_2 >> 1);
  if (bVar22) {
    uVar21 = *(ulong *)(param_2 + 8);
  }
  if (DAT_0f7b8fb8 == '\0') {
    uStack_330 = 0xd1f6879;
    iVar13 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar13 != 0) {
      uStack_330 = 0xd1f688d;
      func_0x0ee5ea20(&DAT_0f7b8f98);
      uStack_330 = 0xd1f68a7;
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      uStack_330 = 0xd1f68b3;
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  }
  uStack_330 = 0xd1f5b59;
  uStack_258 = pbVar17;
  uStack_250 = uVar21;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_208,&DAT_0f7b8f98,&uStack_258,&plStack_2d8,0x121,0);
  plVar3 = plStack_2d8;
  bStack_268 = bStack_1c8;
  if (bStack_1c8 == 0) {
    pbStack_2a8 = uStack_208;
    uStack_2a0 = uStack_200;
    lStack_298 = uStack_1f8;
    lStack_290 = uStack_1f0;
    lStack_288 = (long)pbStack_1e8;
    lStack_280 = uStack_1e0;
    lStack_278 = uStack_1d8;
    lStack_270 = (long)pbStack_1d0;
    ppbVar15 = &pbStack_2a8;
    puVar18 = &uStack_330;
    uStack_330 = 0xd1f5bf8;
SUB_0d1f69e0:
    uVar10 = _UNK_0f45acc4;
    uVar9 = _UNK_0f45acc0;
    uVar8 = _UNK_0f45acbc;
    uVar7 = _UNK_0f45acb4;
    uVar6 = _UNK_0f45acb0;
    uVar5 = _UNK_0f45acac;
    uVar4 = _DAT_0f45aca8;
    *(byte ***)((long)puVar18 + -8) = param_1;
    *(undefined4 *)((long)puVar18 + -0x48) = _DAT_0f45acb8;
    *(undefined4 *)((long)puVar18 + -0x44) = _UNK_0f45acbc;
    *(undefined4 *)((long)puVar18 + -0x40) = _UNK_0f45acc0;
    *(undefined4 *)((long)puVar18 + -0x3c) = _UNK_0f45acc4;
    *(undefined4 *)((long)puVar18 + -0x58) = _DAT_0f45aca8;
    *(undefined4 *)((long)puVar18 + -0x54) = _UNK_0f45acac;
    *(undefined4 *)((long)puVar18 + -0x50) = _UNK_0f45acb0;
    *(undefined4 *)((long)puVar18 + -0x4c) = _UNK_0f45acb4;
    *(undefined1 *)((long)puVar18 + -0x38) = 0;
    *(undefined1 *)((long)puVar18 + -0x10) = 0;
    pbVar17 = ppbVar15[3];
    if (pbVar17 < ppbVar15[4]) {
      *(undefined4 *)(pbVar17 + 0x10) = _DAT_0f45acb8;
      *(undefined4 *)(pbVar17 + 0x14) = uVar8;
      *(undefined4 *)(pbVar17 + 0x18) = uVar9;
      *(undefined4 *)(pbVar17 + 0x1c) = uVar10;
      *(undefined4 *)pbVar17 = uVar4;
      *(undefined4 *)(pbVar17 + 4) = uVar5;
      *(undefined4 *)(pbVar17 + 8) = uVar6;
      *(undefined4 *)(pbVar17 + 0xc) = uVar7;
      pbVar17[0x20] = 0;
      pbVar17[0x48] = 0;
      ppbVar15[3] = pbVar17 + 0x50;
    }
    else {
      *(undefined8 *)((long)puVar18 + -0x60) = 0xd1f6a3f;
      pbVar17 = (byte *)func_0x0489d2c0(ppbVar15 + 2,(undefined1 *)((long)puVar18 + -0x58));
      bVar2 = *(byte *)((long)puVar18 + -0x10);
      ppbVar15[3] = pbVar17;
      if (((bVar2 & 1) != 0) && ((*(byte *)((long)puVar18 + -0x38) & 1) != 0)) {
        *(undefined8 *)((long)puVar18 + -0x60) = 0xd1f6a64;
        thunk_FUN_0ee326a0(*(undefined8 *)((long)puVar18 + -0x28),
                           *(ulong *)((long)puVar18 + -0x38) & 0xfffffffffffffffe);
        return ppbVar15;
      }
    }
    return ppbVar15;
  }
  uStack_210 = 0;
  lVar14 = plStack_2d8[3];
  if (lVar14 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = lVar14 + 8;
    uStack_330 = 0xd1f5b96;
    func_0x0412d770(lVar20);
  }
  uStack_330 = 0xd1f5cb1;
  (**(code **)(*plVar3 + 0x78))(&uStack_258,plVar3,&uStack_210);
  if (lVar14 != 0) {
    uStack_330 = 0xd1f5cbe;
    func_0x0412d790(lVar20);
  }
  uVar21 = uStack_210;
  bStack_1c8 = bStack_218;
  if (bStack_218 == 0) {
    uStack_208 = uStack_258;
    uStack_200 = uStack_250;
    uStack_1f8._0_4_ = (undefined4)uStack_248;
    uStack_1f8._4_4_ = uStack_248._4_4_;
    uStack_1f0._0_4_ = (undefined4)uStack_240;
    uStack_1f0._4_4_ = uStack_240._4_4_;
    pbStack_1e8 = pbStack_238;
    uStack_1e0._0_4_ = (undefined4)uStack_230;
    uStack_1e0._4_4_ = uStack_230._4_4_;
    uStack_1d8._0_4_ = (undefined4)uStack_228;
    uStack_1d8._4_4_ = uStack_228._4_4_;
    pbStack_1d0 = pbStack_220;
    uStack_330 = 0xd1f5d7b;
    func_0x0d1f6aa0(&uStack_208);
    pbVar11 = pbStack_1d0;
    uVar12 = uStack_1d8._4_4_;
    uVar10 = (undefined4)uStack_1d8;
    uVar9 = uStack_1e0._4_4_;
    uVar8 = (undefined4)uStack_1e0;
    pbVar17 = pbStack_1e8;
    uVar7 = uStack_1f0._4_4_;
    uVar6 = (undefined4)uStack_1f0;
    uVar5 = uStack_1f8._4_4_;
    uVar4 = (undefined4)uStack_1f8;
    uStack_b8 = (undefined4)uStack_208;
    uStack_b4 = uStack_208._4_4_;
    uStack_b0 = (undefined4)uStack_200;
    uStack_ac = uStack_200._4_4_;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    pbStack_1e8 = (byte *)0x0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    pbStack_1d0 = (byte *)0x0;
    *(undefined4 *)param_1 = (undefined4)uStack_208;
    *(undefined4 *)((long)param_1 + 4) = uStack_208._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_200;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_200._4_4_;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 2) = uVar4;
    *(undefined4 *)((long)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    param_1[4] = pbVar17;
    *(undefined4 *)(param_1 + 5) = uVar8;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar9;
    *(undefined4 *)(param_1 + 6) = uVar10;
    *(undefined4 *)((long)param_1 + 0x34) = uVar12;
    param_1[7] = pbVar11;
    uStack_330 = 0xd1f5e12;
    ppbVar15 = (byte **)func_0x048e6d60(&uStack_b8);
    goto LAB_0d1f6594;
  }
  if (0xfffffffffffffff7 < uStack_210) {
    uStack_330 = 0xd1f68bd;
    uVar16 = func_0x04882e30();
    uStack_330 = 0xd1f68cc;
    func_0x041084d6(&DAT_0f7b8fb8);
    uStack_330 = 0xd1f68d6;
    func_0x048f9be0(&plStack_2d8);
    uStack_330 = 0xd1f68de;
    uVar16 = func_0x0eee2d70(uVar16);
    if ((uStack_1c0 & 1) != 0) {
      uStack_330 = 0xd1f6904;
      thunk_FUN_0ee326a0(uStack_1b0,uStack_1c0 & 0xfffffffffffffffe);
    }
    uStack_330 = 0xd1f6916;
    func_0x0489d550(&pbStack_1a0);
    if (bStack_2e8 == 0) {
      uStack_330 = 0xd1f6925;
      func_0x05ff1910(&uStack_328);
    }
    uStack_330 = 0xd1f6958;
    func_0x0ee38090(&uStack_258);
    if ((uStack_2c0 & 1) != 0) {
      uStack_330 = 0xd1f6977;
      thunk_FUN_0ee326a0(lStack_2b0,uStack_2c0 & 0xfffffffffffffffe);
    }
    uStack_330 = 0xd1f698d;
    func_0x0ee38090(&uStack_208);
    uStack_330 = 0xd1f69b1;
    func_0x0ee38090(&pbStack_2a8);
    uStack_330 = 0xd1f69bb;
    func_0x048f9be0(&plStack_2d8);
    uStack_330 = 0xd1f69c3;
    uVar16 = func_0x0eee2d70(uVar16);
    uStack_330 = 0xd1f69cb;
    param_1 = (byte **)FUN_04882e20(uVar16);
    uStack_330 = 0xd1f69d8;
    func_0x048f9be0(&plStack_2d8);
    uStack_330 = 0xd1f69e0;
    ppbVar15 = param_1;
    func_0x0eee2d70();
    goto SUB_0d1f69e0;
  }
  if (uStack_210 < 0x17) {
    uStack_2c0 = CONCAT71(uStack_2c0._1_7_,(char)uStack_210 * '\x02');
    lVar14 = (long)&uStack_2c0 + 1;
    if (uStack_210 != 0) goto LAB_0d1f5e62;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_2c0._1_1_ = 0;
  }
  else {
    uVar19 = 0x1a;
    if ((uStack_210 | 7) != 0x17) {
      uVar19 = (uStack_210 | 7) + 1;
    }
    uStack_330 = 0xd1f5e43;
    lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
    if (lVar14 == 0) {
      uStack_330 = 0xd1f6868;
      func_0x0eec74c0(uVar19,0);
    }
    uStack_2c0 = uVar19 | 1;
    uStack_2b8 = uVar21;
    lStack_2b0 = lVar14;
LAB_0d1f5e62:
    uStack_330 = 0xd1f5e72;
    func_0x0eee2dd0(lVar14,0xff,uVar21);
    *(undefined1 *)(lVar14 + uVar21) = 0;
  }
  lVar14 = lStack_2b0;
  if ((uStack_2c0 & 1) == 0) {
    lVar14 = (long)&uStack_2c0 + 1;
  }
  uStack_330 = 0xd1f5e9d;
  func_0x0ee76a70(&uStack_328,plStack_2d8,lVar14,uStack_210);
  bStack_218 = bStack_2e8;
  if (bStack_2e8 == 0) {
    uStack_258 = uStack_328;
    uStack_250 = uStack_320;
    uStack_248._0_4_ = SUB84(uStack_318,0);
    uStack_248._4_4_ = uStack_318._4_4_;
    uStack_240._0_4_ = SUB84(uStack_310,0);
    uStack_240._4_4_ = uStack_310._4_4_;
    pbStack_238 = pbStack_308;
    uStack_230._0_4_ = (undefined4)uStack_300;
    uStack_230._4_4_ = uStack_300._4_4_;
    uStack_228._0_4_ = (undefined4)uStack_2f8;
    uStack_228._4_4_ = uStack_2f8._4_4_;
    pbStack_220 = pbStack_2f0;
    uStack_330 = 0xd1f6163;
    func_0x0d1f6b60(&uStack_258);
    pbVar11 = pbStack_220;
    uVar12 = uStack_228._4_4_;
    uVar10 = (undefined4)uStack_228;
    uVar9 = uStack_230._4_4_;
    uVar8 = (undefined4)uStack_230;
    pbVar17 = pbStack_238;
    uVar7 = uStack_240._4_4_;
    uVar6 = (undefined4)uStack_240;
    uVar5 = uStack_248._4_4_;
    uVar4 = (undefined4)uStack_248;
    uStack_f8 = (undefined4)uStack_258;
    uStack_f4 = uStack_258._4_4_;
    uStack_f0 = (undefined4)uStack_250;
    uStack_ec = uStack_250._4_4_;
    uStack_248 = 0;
    uStack_240 = 0;
    pbStack_238 = (byte *)0x0;
    uStack_230 = 0;
    uStack_228 = 0;
    pbStack_220 = (byte *)0x0;
    *(undefined4 *)param_1 = (undefined4)uStack_258;
    *(undefined4 *)((long)param_1 + 4) = uStack_258._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_250;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_250._4_4_;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 2) = uVar4;
    *(undefined4 *)((long)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    param_1[4] = pbVar17;
    *(undefined4 *)(param_1 + 5) = uVar8;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar9;
    *(undefined4 *)(param_1 + 6) = uVar10;
    *(undefined4 *)((long)param_1 + 0x34) = uVar12;
    param_1[7] = pbVar11;
    uStack_330 = 0xd1f61fa;
    ppbVar15 = (byte **)func_0x048e6d60(&uStack_f8);
  }
  else {
    uStack_330 = 0xd1f5ec3;
    func_0x0ee56810(&pbStack_1a0,&plStack_2d8);
    uStack_1c0 = 0x8d213925abf529f1;
    puStack_1b8 = &UNK_0140f690;
    uStack_1b0 = 1;
    uStack_1a8 = 0x120;
    if (bStack_160 == 0) {
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_330 = 0xd1f5f45;
      func_0x0eedeb80(2,0x2d,&pbStack_1a0,&uStack_158,&uStack_1c0);
      if ((uStack_158 & 1) != 0) {
        uStack_330 = 0xd1f5f68;
        thunk_FUN_0ee326a0(uStack_148,uStack_158 & 0xfffffffffffffffe);
      }
    }
    bStack_2e8 = bStack_160;
    if ((bStack_160 & 1) == 0) {
      uStack_320 = CONCAT71(uStack_197,cStack_198);
      uStack_328 = pbStack_1a0;
      uStack_318 = (long *)uStack_190;
      uStack_310 = uStack_188;
      pbStack_308 = pbStack_180;
      uStack_300 = CONCAT44(uStack_174,uStack_178);
      uStack_2f8 = CONCAT44(uStack_16c,uStack_170);
      pbStack_2f0 = pbStack_168;
      uStack_330 = 0xd1f5fc8;
      func_0x0412d550(0xf550650);
      LOCK();
      _DAT_0f550720 = _DAT_0f550720 + 1;
      UNLOCK();
      uStack_330 = 0xd1f5fdf;
      func_0x0412d610(0xf550650);
      plVar3 = _DAT_0f550738;
      pbVar17 = _DAT_0f550730;
      if ((_DAT_0f550730 == (byte *)0x0) || (*_DAT_0f550730 != 1)) {
        pbStack_1a0 = (byte *)0x0;
        cStack_198 = '\0';
        uStack_330 = 0xd1f621f;
        FUN_0eee02f0(0xf550650);
      }
      else {
        bVar2 = 1;
        if (_DAT_0f550738 != (long *)0x0) {
          LOCK();
          _DAT_0f550738[1] = _DAT_0f550738[1] + 1;
          UNLOCK();
          bVar2 = *pbVar17;
        }
        pbVar11 = _DAT_0f550740;
        pbStack_1a0 = (byte *)0xf550650;
        cStack_198 = '\x01';
        uStack_190 = pbVar17;
        uStack_188 = plVar3;
        pbStack_180 = _DAT_0f550740;
        if ((bVar2 & 1) != 0) {
          uStack_330 = 0xd1f6054;
          func_0x0eede540(&uStack_1c0,&uStack_328);
          uStack_330 = 0xd1f606e;
          (**(code **)(*(long *)pbVar11 + 0x940))(pbVar11,&uStack_1c0,param_3,0);
          if ((uStack_1c0 & 1) != 0) {
            uStack_330 = 0xd1f6091;
            thunk_FUN_0ee326a0(uStack_1b0,uStack_1c0 & 0xfffffffffffffffe);
          }
        }
        uStack_190 = (byte *)0x0;
        uStack_188 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar14 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            uStack_330 = 0xd1f60c5;
            (**(code **)(*plVar3 + 0x10))(plVar3);
            uStack_330 = 0xd1f60cd;
            func_0x0412c2d0(plVar3);
          }
          plVar3 = uStack_188;
          pbStack_180 = (byte *)0x0;
          if (uStack_188 != (long *)0x0) {
            LOCK();
            plVar1 = uStack_188 + 1;
            lVar14 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              uStack_330 = 0xd1f6109;
              (**(code **)(*uStack_188 + 0x10))(uStack_188);
              uStack_330 = 0xd1f6111;
              func_0x0412c2d0(plVar3);
            }
          }
        }
      }
      if (cStack_198 == '\x01') {
        uStack_330 = 0xd1f6236;
        FUN_0eee02f0(pbStack_1a0);
      }
    }
    lVar14 = uStack_300;
    if ((bStack_2e8 & 1) == 0) {
      if (uStack_300 != 0) {
        while (lVar14 != uStack_2f8) {
          uStack_330 = 0xd1f626c;
          func_0x048b3e80(uStack_2f8 + -0x40);
          uStack_2f8 = uStack_2f8 + -0x40;
        }
        uStack_2f8 = lVar14;
        uStack_330 = 0xd1f6288;
        thunk_FUN_0ee326a0(uStack_300,(long)pbStack_2f0 - uStack_300);
      }
      plVar1 = uStack_318;
      plVar3 = uStack_310;
      if (uStack_318 != (long *)0x0) {
        for (; plVar1 != plVar3; plVar3 = plVar3 + -10) {
          if (((char)plVar3[-1] == '\x01') && ((*(byte *)(plVar3 + -6) & 1) != 0)) {
            uStack_330 = 0xd1f62dc;
            thunk_FUN_0ee326a0(plVar3[-4],plVar3[-6] & 0xfffffffffffffffe);
          }
        }
        uStack_310 = plVar1;
        uStack_330 = 0xd1f62f5;
        thunk_FUN_0ee326a0(uStack_318,(long)pbStack_308 - (long)uStack_318);
      }
    }
    uStack_330 = 0xd1f630a;
    func_0x0d1ef1a0(&pbStack_1a0,&uStack_2c0,param_4);
    bStack_2e8 = bStack_160;
    if (bStack_160 == 0) {
      uStack_320 = CONCAT71(uStack_197,cStack_198);
      uStack_328 = pbStack_1a0;
      uStack_318._0_4_ = SUB84(uStack_190,0);
      uStack_318._4_4_ = uStack_190._4_4_;
      uStack_310._0_4_ = SUB84(uStack_188,0);
      uStack_310._4_4_ = uStack_188._4_4_;
      pbStack_308 = pbStack_180;
      uStack_300._0_4_ = uStack_178;
      uStack_300._4_4_ = uStack_174;
      uStack_2f8._0_4_ = uStack_170;
      uStack_2f8._4_4_ = uStack_16c;
      pbStack_2f0 = pbStack_168;
      uStack_330 = 0xd1f6372;
      func_0x0d1f6c20(&uStack_328);
      pbVar11 = pbStack_2f0;
      uVar12 = uStack_2f8._4_4_;
      uVar10 = (undefined4)uStack_2f8;
      uVar9 = uStack_300._4_4_;
      uVar8 = (undefined4)uStack_300;
      pbVar17 = pbStack_308;
      uVar7 = uStack_310._4_4_;
      uVar6 = (undefined4)uStack_310;
      uVar5 = uStack_318._4_4_;
      uVar4 = (undefined4)uStack_318;
      uStack_138 = (undefined4)uStack_328;
      uStack_134 = uStack_328._4_4_;
      uStack_130 = (undefined4)uStack_320;
      uStack_12c = uStack_320._4_4_;
      uStack_318 = (long *)0x0;
      uStack_310 = (long *)0x0;
      pbStack_308 = (byte *)0x0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      pbStack_2f0 = (byte *)0x0;
      *(undefined4 *)param_1 = (undefined4)uStack_328;
      *(undefined4 *)((long)param_1 + 4) = uStack_328._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_320;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_320._4_4_;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 2) = uVar4;
      *(undefined4 *)((long)param_1 + 0x14) = uVar5;
      *(undefined4 *)(param_1 + 3) = uVar6;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
      param_1[4] = pbVar17;
      *(undefined4 *)(param_1 + 5) = uVar8;
      *(undefined4 *)((long)param_1 + 0x2c) = uVar9;
      *(undefined4 *)(param_1 + 6) = uVar10;
      *(undefined4 *)((long)param_1 + 0x34) = uVar12;
      param_1[7] = pbVar11;
      uStack_330 = 0xd1f63ed;
      func_0x048e6d60(&uStack_138);
      lVar14 = uStack_300;
    }
    else {
      *(byte *)(param_1 + 8) = bStack_160;
      lVar14 = uStack_300;
    }
    ppbVar15 = (byte **)(ulong)bStack_2e8;
    uStack_300 = lVar14;
    if ((bStack_2e8 & 1) == 0) {
      lVar20 = uStack_2f8;
      if (lVar14 != 0) {
        while (lVar14 != lVar20) {
          uStack_330 = 0xd1f642c;
          func_0x048b3e80(lVar20 + -0x40);
          lVar20 = lVar20 + -0x40;
        }
        uStack_330 = 0xd1f6448;
        uStack_2f8 = lVar14;
        ppbVar15 = (byte **)thunk_FUN_0ee326a0(uStack_300,(long)pbStack_2f0 - uStack_300);
      }
      plVar1 = uStack_318;
      plVar3 = uStack_310;
      if (uStack_318 != (long *)0x0) {
        for (; plVar1 != plVar3; plVar3 = plVar3 + -10) {
          if (((char)plVar3[-1] == '\x01') && ((*(byte *)(plVar3 + -6) & 1) != 0)) {
            uStack_330 = 0xd1f6498;
            thunk_FUN_0ee326a0(plVar3[-4],plVar3[-6] & 0xfffffffffffffffe);
          }
        }
        uStack_310 = plVar1;
        uStack_330 = 0xd1f64b1;
        ppbVar15 = (byte **)thunk_FUN_0ee326a0(uStack_318,(long)pbStack_308 - (long)uStack_318);
      }
    }
  }
  lVar14 = uStack_230;
  if (bStack_218 == 0) {
    lVar20 = uStack_228;
    if (uStack_230 != 0) {
      while (lVar14 != lVar20) {
        uStack_330 = 0xd1f64ec;
        func_0x048b3e80(lVar20 + -0x40);
        lVar20 = lVar20 + -0x40;
      }
      uStack_228 = lVar14;
      uStack_330 = 0xd1f6511;
      ppbVar15 = (byte **)thunk_FUN_0ee326a0(uStack_230,(long)pbStack_220 - uStack_230);
    }
    lVar20 = uStack_248;
    lVar14 = uStack_240;
    if (uStack_248 != 0) {
      for (; lVar20 != lVar14; lVar14 = lVar14 + -0x50) {
        if ((*(char *)(lVar14 + -8) == '\x01') && ((*(byte *)(lVar14 + -0x30) & 1) != 0)) {
          uStack_330 = 0xd1f6558;
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar14 + -0x20),
                             *(ulong *)(lVar14 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_240 = lVar20;
      uStack_330 = 0xd1f657a;
      ppbVar15 = (byte **)thunk_FUN_0ee326a0(uStack_248,(long)pbStack_238 - uStack_248);
    }
  }
  if ((uStack_2c0 & 1) != 0) {
    uStack_330 = 0xd1f6594;
    ppbVar15 = (byte **)thunk_FUN_0ee326a0(lStack_2b0,uStack_2c0 & 0xfffffffffffffffe);
  }
LAB_0d1f6594:
  lVar14 = uStack_1e0;
  if (bStack_1c8 == 0) {
    lVar20 = uStack_1d8;
    if (uStack_1e0 != 0) {
      while (lVar14 != lVar20) {
        uStack_330 = 0xd1f65cc;
        func_0x048b3e80(lVar20 + -0x40);
        lVar20 = lVar20 + -0x40;
      }
      uStack_1d8 = lVar14;
      uStack_330 = 0xd1f65f1;
      ppbVar15 = (byte **)thunk_FUN_0ee326a0(uStack_1e0,(long)pbStack_1d0 - uStack_1e0);
    }
    lVar20 = uStack_1f8;
    lVar14 = uStack_1f0;
    if (uStack_1f8 != 0) {
      for (; lVar20 != lVar14; lVar14 = lVar14 + -0x50) {
        if ((*(char *)(lVar14 + -8) == '\x01') && ((*(byte *)(lVar14 + -0x30) & 1) != 0)) {
          uStack_330 = 0xd1f6638;
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar14 + -0x20),
                             *(ulong *)(lVar14 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_1f0 = lVar20;
      uStack_330 = 0xd1f665a;
      ppbVar15 = (byte **)thunk_FUN_0ee326a0(uStack_1f8,(long)pbStack_1e8 - uStack_1f8);
    }
  }
  lVar14 = lStack_280;
  if (bStack_268 == 0) {
    if (lStack_280 != 0) {
      while (lVar14 != lStack_278) {
        uStack_330 = 0xd1f669c;
        func_0x048b3e80(lStack_278 + -0x40);
        lStack_278 = lStack_278 + -0x40;
      }
      lStack_278 = lVar14;
      uStack_330 = 0xd1f66c1;
      ppbVar15 = (byte **)thunk_FUN_0ee326a0(lStack_280,lStack_270 - lStack_280);
    }
    lVar20 = lStack_298;
    lVar14 = lStack_290;
    if (lStack_298 != 0) {
      for (; lVar20 != lVar14; lVar14 = lVar14 + -0x50) {
        if ((*(char *)(lVar14 + -8) == '\x01') && ((*(byte *)(lVar14 + -0x30) & 1) != 0)) {
          uStack_330 = 0xd1f6708;
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar14 + -0x20),
                             *(ulong *)(lVar14 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lStack_290 = lVar20;
      uStack_330 = 0xd1f672a;
      ppbVar15 = (byte **)thunk_FUN_0ee326a0(lStack_298,lStack_288 - lStack_298);
    }
  }
  if (plStack_2d8 != (long *)0x0) {
    uStack_330 = 0xd1f6748;
    ppbVar15 = (byte **)func_0x0ee56810(&pbStack_2a8,&plStack_2d8);
    lVar14 = lStack_280;
    if (bStack_268 == 0) {
      lVar20 = lStack_278;
      if (lStack_280 != 0) {
        while (lVar14 != lVar20) {
          uStack_330 = 0xd1f678c;
          func_0x048b3e80(lVar20 + -0x40);
          lVar20 = lVar20 + -0x40;
        }
        lStack_278 = lVar14;
        uStack_330 = 0xd1f67b1;
        ppbVar15 = (byte **)thunk_FUN_0ee326a0(lStack_280,lStack_270 - lStack_280);
      }
      lVar20 = lStack_298;
      lVar14 = lStack_290;
      if (lStack_298 != 0) {
        for (; lVar20 != lVar14; lVar14 = lVar14 + -0x50) {
          if ((*(char *)(lVar14 + -8) == '\x01') && ((*(byte *)(lVar14 + -0x30) & 1) != 0)) {
            uStack_330 = 0xd1f67f8;
            thunk_FUN_0ee326a0(*(undefined8 *)(lVar14 + -0x20),
                               *(ulong *)(lVar14 + -0x30) & 0xfffffffffffffffe);
          }
        }
        lStack_290 = lVar20;
        uStack_330 = 0xd1f681a;
        ppbVar15 = (byte **)thunk_FUN_0ee326a0(lStack_298,lStack_288 - lStack_298);
      }
    }
  }
  plVar3 = plStack_2d0;
  plStack_2d0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    uStack_330 = 0xd1f6833;
    ppbVar15 = (byte **)(**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_2d8;
  plStack_2d8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    uStack_330 = 0xd1f684c;
    ppbVar15 = (byte **)(**(code **)(*plVar3 + 8))();
  }
  return ppbVar15;
}


