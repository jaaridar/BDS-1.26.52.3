/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfb5cc0 (ELF vaddr 0xceb5cc0)
 * Label: string:minecraft:jigsaw
 * Body:  [[0cfb5cc0, 0cfb5e8c] [0cfb5e90, 0cfb5ec0] [0cfb5ed0, 0cfb5ee8] [0cfb5ef0, 0cfb60c7] [0cfb60d0, 0cfb6102] [0cfb6110, 0cfb6137] [0cfb6140, 0cfb6329] [0cfb6330, 0cfb6362] [0cfb6370, 0cfb638d] [0cfb6390, 0cfb772d] [0cfb7d51, 0cfb7d63] [0cfb7da3, 0cfb7e3c]]
 * Ghidra: FUN_0cfb5cc0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cfb5cc0(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined5 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  byte bStack_200;
  undefined4 uStack_1ff;
  undefined1 uStack_1fb;
  undefined2 uStack_1fa;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  undefined4 uStack_1e7;
  undefined1 uStack_1e3;
  undefined2 uStack_1e2;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined4 uStack_1de;
  undefined2 uStack_1da;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [5];
  undefined4 uStack_1c3;
  undefined4 uStack_1bf;
  undefined4 uStack_1bb;
  undefined2 uStack_1b7;
  undefined1 uStack_1b5;
  undefined4 uStack_1b4;
  long lStack_1b0;
  long *plStack_1a8;
  ulong auStack_198 [2];
  undefined8 uStack_188;
  long lStack_180;
  undefined4 uStack_176;
  undefined2 uStack_172;
  long *plStack_170;
  long lStack_168;
  byte bStack_160;
  undefined4 uStack_15f;
  undefined4 uStack_15b;
  undefined4 uStack_157;
  undefined2 uStack_153;
  undefined1 uStack_151;
  undefined1 uStack_150;
  undefined6 uStack_14f;
  undefined1 uStack_149;
  byte bStack_148;
  undefined4 uStack_147;
  undefined4 uStack_143;
  undefined4 uStack_13f;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  undefined1 uStack_138;
  undefined6 uStack_137;
  undefined1 uStack_131;
  byte bStack_130;
  undefined4 uStack_12f;
  undefined4 uStack_12b;
  undefined4 uStack_127;
  undefined4 uStack_123;
  undefined4 uStack_11f;
  undefined3 uStack_11b;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined4 *puStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined4 *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined4 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined4 *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined4 *puStack_60;
  byte bStack_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined1 uStack_47;
  undefined6 uStack_46;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = func_0x0b697930(param_1,1,0x10,0);
  bStack_200 = 8;
  uStack_1ff = 0x656d616e;
  uStack_1fb = 0;
  bStack_58 = 0x20;
  uStack_57 = _DAT_01457e1d;
  uStack_53 = _UNK_01457e21;
  uStack_4f = _UNK_01457e25;
  uStack_4b = _UNK_01457e29;
  uStack_47 = 0;
  uVar7 = func_0x0b694de0(&uStack_38,&bStack_200,&bStack_58);
  auStack_198[0] = 0x7365746174730c;
  uStack_40 = param_1;
  plVar8 = (long *)func_0x0b6953d0(uVar7,auStack_198);
  plVar15 = (long *)*plVar8;
  plVar13 = (long *)plVar15[1];
  plVar17 = (long *)plVar15[2];
  plStack_170 = plVar8;
  if (plVar13 < plVar17) {
    *plVar13 = (long)&UNK_0f42da88;
    plVar13[4] = (long)plVar13;
    plVar13 = plVar13 + 6;
    plVar8 = plVar15;
LAB_0cfb5f76:
    plVar15[1] = (long)plVar13;
    bStack_1e8 = 0x10;
    uStack_1e7 = 0x61746f72;
    uStack_1e3 = 0x74;
    uStack_1e2 = 0x6f69;
    uStack_1e0 = 0x6e;
    uStack_1df = 0;
    uStack_1da = uStack_172;
    uStack_1de = uStack_176;
    uVar14 = plVar8[1];
    if (uVar14 < (ulong)plVar8[2]) {
      func_0x0cfd2790(uVar14,&bStack_1e8);
      lVar20 = uVar14 + 0x30;
      plVar8[1] = lVar20;
LAB_0cfb61ac:
      plVar8[1] = lVar20;
      if ((bStack_1e8 & 1) != 0) {
        func_0x0412a280(uStack_1d8,
                        CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8))) &
                        0xfffffffffffffffe);
      }
      lVar20 = *plStack_170;
      bStack_1e8 = 0x10;
      uStack_1e7 = 0x61746f72;
      uStack_1e3 = 0x74;
      uStack_1e2 = 0x6f69;
      uStack_1e0 = 0x6e;
      uStack_1df = 0;
      uStack_1de = uStack_176;
      uStack_1da = uStack_172;
      uVar14 = *(ulong *)(lVar20 + 0x20);
      uStack_1d0 = 0;
      if (uVar14 < *(ulong *)(lVar20 + 0x28)) {
        func_0x0cfd2af0(uVar14,&bStack_1e8);
        lVar18 = uVar14 + 0x30;
        *(long *)(lVar20 + 0x20) = lVar18;
LAB_0cfb63ed:
        *(long *)(lVar20 + 0x20) = lVar18;
        uVar7 = uStack_40;
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
          uVar7 = uStack_40;
        }
        uStack_40 = uVar7;
        if ((auStack_198[0] & 1) != 0) {
          func_0x0412a280(uStack_188,auStack_198[0] & 0xfffffffffffffffe);
        }
        if ((bStack_58 & 1) != 0) {
          uStack_4b._3_1_ = (undefined1)((uint)uStack_4b >> 0x18);
          uVar4 = CONCAT11(uStack_47,uStack_4b._3_1_);
          func_0x0412a280(CONCAT62(uStack_46,uVar4),
                          CONCAT35((undefined3)uStack_53,CONCAT41(uStack_57,bStack_58)) &
                          0xfffffffffffffffe);
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        bStack_130 = 0x26;
        uStack_12f = _DAT_013531dd;
        uStack_12b = _UNK_013531e1;
        uStack_127 = _UNK_013531e5;
        uStack_123 = CONCAT13(0x66,(int3)_UNK_013531e9);
        uStack_11f = 0x657269;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&bStack_130);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 8;
        auStack_1c8._1_4_ = 0xf42dc;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((bStack_130 & 1) != 0) {
          uStack_123._3_1_ = (undefined1)((uint)uStack_123 >> 0x18);
          uVar3 = CONCAT41(uStack_11f,uStack_123._3_1_);
          func_0x0412a280(CONCAT35(uStack_11b,uVar3),
                          CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,bStack_130)) &
                          0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        puStack_60 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puStack_60 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar11 = _UNK_014c0809;
        uStack_70 = 0x29;
        uStack_68 = 0x20;
        *(undefined8 *)(puStack_60 + 4) = _DAT_014c0801;
        *(undefined8 *)(puStack_60 + 6) = uVar11;
        uVar6 = _UNK_014c07fd;
        uVar5 = _UNK_014c07f9;
        uVar2 = _UNK_014c07f5;
        *puStack_60 = _DAT_014c07f1;
        puStack_60[1] = uVar2;
        puStack_60[2] = uVar5;
        puStack_60[3] = uVar6;
        *(undefined1 *)(puStack_60 + 8) = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&uStack_70);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 0x88;
        auStack_1c8._1_4_ = 0xf42dc;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((uStack_70 & 1) != 0) {
          func_0x0412a280(puStack_60,uStack_70 & 0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        puStack_78 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_78 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar11 = _UNK_0136f08b;
        uStack_88 = 0x21;
        uStack_80 = 0x1b;
        *(ulong *)((long)puStack_78 + 0xb) =
             CONCAT35(_UNK_0136f088,CONCAT41(_UNK_0136f084,DAT_0136f083));
        *(undefined8 *)((long)puStack_78 + 0x13) = uVar11;
        uVar6 = _UNK_0136f084;
        uVar5 = _UNK_0136f080;
        uVar2 = _UNK_0136f07c;
        *puStack_78 = _DAT_0136f078;
        puStack_78[1] = uVar2;
        puStack_78[2] = uVar5;
        puStack_78[3] = uVar6;
        *(undefined1 *)((long)puStack_78 + 0x1b) = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&uStack_88);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 8;
        auStack_1c8._1_4_ = 0xf42dd;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((uStack_88 & 1) != 0) {
          func_0x0412a280(puStack_78,uStack_88 & 0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        puStack_90 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_90 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar11 = _UNK_013384cf;
        uStack_a0 = 0x21;
        uStack_98 = 0x1d;
        *(ulong *)((long)puStack_90 + 0xd) = CONCAT53(_UNK_013384ca,_DAT_013384c7);
        *(undefined8 *)((long)puStack_90 + 0x15) = uVar11;
        uVar6 = _UNK_013384c6;
        uVar5 = _UNK_013384c2;
        uVar2 = _UNK_013384be;
        *puStack_90 = _DAT_013384ba;
        puStack_90[1] = uVar2;
        puStack_90[2] = uVar5;
        puStack_90[3] = uVar6;
        *(undefined1 *)((long)puStack_90 + 0x1d) = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&uStack_a0);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 0x88;
        auStack_1c8._1_4_ = 0xf42dd;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((uStack_a0 & 1) != 0) {
          func_0x0412a280(puStack_90,uStack_a0 & 0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        bStack_148 = 0x2c;
        uStack_137 = 0x6b636f6c625f;
        uStack_147 = _DAT_01458167;
        uStack_143 = _UNK_0145816b;
        uStack_13f = _UNK_0145816f;
        uStack_13b = (undefined2)_UNK_01458173;
        uStack_139 = (undefined1)((uint)_UNK_01458173 >> 0x10);
        uStack_138 = (undefined1)((uint)_UNK_01458173 >> 0x18);
        uStack_131 = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&bStack_148);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 8;
        auStack_1c8._1_4_ = 0xf42de;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((bStack_148 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_131,CONCAT61(uStack_137,uStack_138)),
                          CONCAT35((undefined3)uStack_143,CONCAT41(uStack_147,bStack_148)) &
                          0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        puStack_a8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_a8 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar11 = _UNK_013021f5;
        uStack_b8 = 0x21;
        uStack_b0 = 0x1f;
        *(ulong *)((long)puStack_a8 + 0xf) = CONCAT71(_UNK_013021ee,DAT_013021ed);
        *(undefined8 *)((long)puStack_a8 + 0x17) = uVar11;
        uVar6 = _UNK_013021ea;
        uVar5 = _UNK_013021e6;
        uVar2 = _UNK_013021e2;
        *puStack_a8 = _DAT_013021de;
        puStack_a8[1] = uVar2;
        puStack_a8[2] = uVar5;
        puStack_a8[3] = uVar6;
        *(undefined1 *)((long)puStack_a8 + 0x1f) = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&uStack_b8);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 0x88;
        auStack_1c8._1_4_ = 0xf42de;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((uStack_b8 & 1) != 0) {
          func_0x0412a280(puStack_a8,uStack_b8 & 0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        puStack_c0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_c0 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar11 = _UNK_011e47c2;
        uStack_d0 = 0x21;
        uStack_c8 = 0x19;
        *(ulong *)((long)puStack_c0 + 9) =
             CONCAT17(UNK_011e47c1,CONCAT43(_UNK_011e47bd,_DAT_011e47ba));
        *(undefined8 *)((long)puStack_c0 + 0x11) = uVar11;
        uVar6 = _UNK_011e47bd;
        uVar5 = _UNK_011e47b9;
        uVar2 = _UNK_011e47b5;
        *puStack_c0 = _DAT_011e47b1;
        puStack_c0[1] = uVar2;
        puStack_c0[2] = uVar5;
        puStack_c0[3] = uVar6;
        *(undefined1 *)((long)puStack_c0 + 0x19) = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&uStack_d0);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 8;
        auStack_1c8._1_4_ = 0xf42df;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((uStack_d0 & 1) != 0) {
          func_0x0412a280(puStack_c0,uStack_d0 & 0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        bStack_160 = 0x2c;
        uStack_14f = 0x6b636f6c625f;
        uStack_15f = _DAT_0131d57e;
        uStack_15b = _UNK_0131d582;
        uStack_157 = _UNK_0131d586;
        uStack_153 = (undefined2)_UNK_0131d58a;
        uStack_151 = (undefined1)((uint)_UNK_0131d58a >> 0x10);
        uStack_150 = (undefined1)((uint)_UNK_0131d58a >> 0x18);
        uStack_149 = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&bStack_160);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 0x88;
        auStack_1c8._1_4_ = 0xf42df;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((bStack_160 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_149,CONCAT61(uStack_14f,uStack_150)),
                          CONCAT35((undefined3)uStack_15b,CONCAT41(uStack_15f,bStack_160)) &
                          0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        puStack_d8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_d8 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar11 = _UNK_014a63e4;
        uStack_e8 = 0x21;
        uStack_e0 = 0x1b;
        *(ulong *)((long)puStack_d8 + 0xb) =
             CONCAT35(_UNK_014a63e1,CONCAT41(_UNK_014a63dd,DAT_014a63dc));
        *(undefined8 *)((long)puStack_d8 + 0x13) = uVar11;
        uVar6 = _UNK_014a63dd;
        uVar5 = _UNK_014a63d9;
        uVar2 = _UNK_014a63d5;
        *puStack_d8 = _DAT_014a63d1;
        puStack_d8[1] = uVar2;
        puStack_d8[2] = uVar5;
        puStack_d8[3] = uVar6;
        *(undefined1 *)((long)puStack_d8 + 0x1b) = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&uStack_e8);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 8;
        auStack_1c8._1_4_ = 0xf42e0;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((uStack_e8 & 1) != 0) {
          func_0x0412a280(puStack_d8,uStack_e8 & 0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        puStack_f0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_f0 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar11 = _UNK_012344f6;
        uStack_100 = 0x21;
        uStack_f8 = 0x19;
        *(ulong *)((long)puStack_f0 + 9) =
             CONCAT17(UNK_012344f5,CONCAT43(_UNK_012344f1,_DAT_012344ee));
        *(undefined8 *)((long)puStack_f0 + 0x11) = uVar11;
        uVar6 = _UNK_012344f1;
        uVar5 = _UNK_012344ed;
        uVar2 = _UNK_012344e9;
        *puStack_f0 = _DAT_012344e5;
        puStack_f0[1] = uVar2;
        puStack_f0[2] = uVar5;
        puStack_f0[3] = uVar6;
        *(undefined1 *)((long)puStack_f0 + 0x19) = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&uStack_100);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 0x88;
        auStack_1c8._1_4_ = 0xf42e0;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((uStack_100 & 1) != 0) {
          func_0x0412a280(puStack_f0,uStack_100 & 0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        auStack_198[0] = func_0x0b697930(uVar7,1,0x10,0);
        bStack_1e8 = 8;
        uStack_1e7 = 0x656d616e;
        uStack_1e3 = 0;
        puStack_108 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_108 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar11 = _UNK_014dbd82;
        uStack_118 = 0x21;
        uStack_110 = 0x1e;
        *(ulong *)((long)puStack_108 + 0xe) = CONCAT62(_UNK_014dbd7c,_DAT_014dbd7a);
        *(undefined8 *)((long)puStack_108 + 0x16) = uVar11;
        uVar6 = _UNK_014dbd74;
        uVar5 = _UNK_014dbd70;
        uVar2 = CONCAT22(_DAT_014dbd7a,_UNK_014dbd78);
        *puStack_108 = _DAT_014dbd6c;
        puStack_108[1] = uVar5;
        puStack_108[2] = uVar6;
        puStack_108[3] = uVar2;
        *(undefined1 *)((long)puStack_108 + 0x1e) = 0;
        uVar11 = func_0x0b694de0(auStack_198,&bStack_1e8,&uStack_118);
        bStack_200 = 8;
        uStack_1ff = 0x656d616e;
        uStack_1fb = 0;
        auStack_1c8[0] = 8;
        auStack_1c8._1_4_ = 0xf42e1;
        uStack_1c3 = uStack_1c3 & 0xff000000;
        plStack_1a8 = (long *)auStack_1c8;
        func_0x0b695d20(uVar11,&bStack_200,auStack_1c8);
        if (plStack_1a8 == (long *)auStack_1c8) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        else if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x28))();
        }
        if ((bStack_200 & 1) != 0) {
          func_0x0412a280(uStack_1f0,
                          CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200)))
                          & 0xfffffffffffffffe);
        }
        if ((uStack_118 & 1) != 0) {
          func_0x0412a280(puStack_108,uStack_118 & 0xfffffffffffffffe);
        }
        if ((bStack_1e8 & 1) != 0) {
          func_0x0412a280(uStack_1d8,
                          CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8)))
                          & 0xfffffffffffffffe);
        }
        puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar12 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar11 = _UNK_0140a8c4;
        uStack_1bb._3_1_ = (byte)puVar12;
        uStack_1b7 = (undefined2)((ulong)puVar12 >> 8);
        uStack_1b5 = (undefined1)((ulong)puVar12 >> 0x18);
        uStack_1b4 = (undefined4)((ulong)puVar12 >> 0x20);
        auStack_1c8[0] = 0x21;
        auStack_1c8._1_4_ = 0;
        uStack_1c3 = 0x19000000;
        uStack_1bf = 0;
        uStack_1bb = (uint)uStack_1bb._3_1_ << 0x18;
        *(ulong *)((long)puVar12 + 9) = CONCAT17(UNK_0140a8c3,CONCAT43(_UNK_0140a8bf,_DAT_0140a8bc))
        ;
        *(undefined8 *)((long)puVar12 + 0x11) = uVar11;
        uVar6 = _UNK_0140a8bf;
        uVar5 = _UNK_0140a8bb;
        uVar2 = _UNK_0140a8b7;
        *puVar12 = _DAT_0140a8b3;
        puVar12[1] = uVar2;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        *(undefined1 *)((long)puVar12 + 0x19) = 0;
        func_0x0cfc12d0(uVar7,auStack_1c8);
        func_0x0412a280(puVar12,0x20);
        puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar12 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar11 = _UNK_01282ed1;
        uStack_1bb._3_1_ = (byte)puVar12;
        uStack_1b7 = (undefined2)((ulong)puVar12 >> 8);
        uStack_1b5 = (undefined1)((ulong)puVar12 >> 0x18);
        uStack_1b4 = (undefined4)((ulong)puVar12 >> 0x20);
        auStack_1c8[0] = 0x31;
        auStack_1c8._1_4_ = 0;
        uStack_1c3 = 0x28000000;
        uStack_1bf = 0;
        uStack_1bb = (uint)uStack_1bb._3_1_ << 0x18;
        *(undefined8 *)(puVar12 + 4) = _DAT_01282ec9;
        *(undefined8 *)(puVar12 + 6) = uVar11;
        uVar6 = _UNK_01282ec5;
        uVar5 = _UNK_01282ec1;
        uVar2 = _UNK_01282ebd;
        *puVar12 = _DAT_01282eb9;
        puVar12[1] = uVar2;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        *(undefined8 *)(puVar12 + 8) = 0x6c6c61775f6b6369;
        *(undefined1 *)(puVar12 + 10) = 0;
        func_0x0cfc12d0(uVar7,auStack_1c8);
        func_0x0412a280(puVar12,0x30);
        puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar12 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar11 = _UNK_011e45ba;
        uStack_1bb._3_1_ = (byte)puVar12;
        uStack_1b7 = (undefined2)((ulong)puVar12 >> 8);
        uStack_1b5 = (undefined1)((ulong)puVar12 >> 0x18);
        uStack_1b4 = (undefined4)((ulong)puVar12 >> 0x20);
        auStack_1c8[0] = 0x29;
        auStack_1c8._1_4_ = 0;
        uStack_1c3 = 0x22000000;
        uStack_1bf = 0;
        uStack_1bb = (uint)uStack_1bb._3_1_ << 0x18;
        *(undefined8 *)(puVar12 + 4) = _DAT_011e45b2;
        *(undefined8 *)(puVar12 + 6) = uVar11;
        uVar6 = _UNK_011e45ae;
        uVar5 = _UNK_011e45aa;
        uVar2 = _UNK_011e45a6;
        *puVar12 = _DAT_011e45a2;
        puVar12[1] = uVar2;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        *(undefined2 *)(puVar12 + 8) = 0x6c6c;
        *(undefined1 *)((long)puVar12 + 0x22) = 0;
        func_0x0cfc12d0(uVar7,auStack_1c8);
        func_0x0412a280(puVar12,0x28);
        auStack_1c8[0] = 0x22;
        auStack_1c8._1_4_ = _DAT_014a603d;
        uStack_1c3 = _UNK_014a6041;
        uStack_1bf = _UNK_014a6045;
        uStack_1bb = _UNK_014a6049;
        uStack_1b7 = 0x65;
        func_0x0cfc14e0(uVar7,auStack_1c8);
        auStack_1c8[0] = 0x24;
        auStack_1c8._1_4_ = _DAT_0124fe2a;
        uStack_1c3 = _UNK_0124fe2e;
        uStack_1bf = _UNK_0124fe32;
        uStack_1bb = _UNK_0124fe36;
        uStack_1b7 = 0x7473;
        uStack_1b5 = 0;
        func_0x0cfc14e0(uVar7,auStack_1c8);
        return;
      }
      plVar15 = (long *)(lVar20 + 0x18);
      lVar18 = uVar14 - *plVar15;
      uVar14 = (lVar18 >> 4) * -0x5555555555555555 + 1;
      if (uVar14 < 0x555555555555556) {
        lVar9 = (long)(*(ulong *)(lVar20 + 0x28) - *plVar15) >> 4;
        uVar1 = lVar9 * 0x5555555555555556;
        if (uVar14 < uVar1) {
          uVar14 = uVar1;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
          uVar14 = 0x555555555555555;
        }
        plStack_1a8 = plVar15;
        if (uVar14 == 0) {
          lVar9 = 0;
        }
        else {
          if (0x555555555555555 < uVar14) goto LAB_0cfb7717;
          lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 0x30);
          if (lVar9 == 0) {
            func_0x0eec74c0(uVar14 * 0x30,0);
            lVar9 = 0;
          }
        }
        auStack_1c8[0] = (undefined1)lVar9;
        auStack_1c8._1_4_ = (undefined4)((ulong)lVar9 >> 8);
        uStack_1c3._0_3_ = (undefined3)((ulong)lVar9 >> 0x28);
        lVar18 = lVar18 + lVar9;
        uStack_1bb._3_1_ = (byte)lVar18;
        uStack_1b7 = (undefined2)((ulong)lVar18 >> 8);
        uStack_1b5 = (undefined1)((ulong)lVar18 >> 0x18);
        uStack_1b4 = (undefined4)((ulong)lVar18 >> 0x20);
        uStack_1c3 = CONCAT13(uStack_1bb._3_1_,(undefined3)uStack_1c3);
        uStack_1bf = (undefined4)((ulong)lVar18 >> 8);
        uStack_1bb._0_3_ = (undefined3)((ulong)lVar18 >> 0x28);
        lStack_1b0 = uVar14 * 0x30 + lVar9;
        plStack_170 = plVar15;
        func_0x0cfd2af0(lVar18,&bStack_1e8);
        lVar18 = CONCAT44(uStack_1b4,CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1bb._3_1_)));
        plVar15 = *(long **)(lVar20 + 0x18);
        plVar13 = *(long **)(lVar20 + 0x20);
        lVar9 = (long)plVar15 +
                (CONCAT35((undefined3)uStack_1bb,CONCAT41(uStack_1bf,uStack_1c3._3_1_)) -
                (long)plVar13);
        lVar10 = lVar9;
        plVar17 = plVar15;
        if (plVar15 != plVar13) {
          do {
            lStack_180 = lVar9;
            plVar8 = (long *)plVar17[4];
            if (plVar8 == (long *)0x0) {
              *(undefined8 *)(lVar10 + 0x20) = 0;
            }
            else if (plVar17 == plVar8) {
              *(long *)(lVar10 + 0x20) = lVar10;
              (**(code **)(*(long *)plVar17[4] + 0x18))((long *)plVar17[4],lVar10);
            }
            else {
              *(long **)(lVar10 + 0x20) = plVar8;
              plVar17[4] = 0;
            }
            lVar9 = lStack_180;
            plVar17 = plVar17 + 6;
            lVar10 = lVar10 + 0x30;
          } while (plVar17 != plVar13);
          do {
            plVar17 = (long *)plVar15[4];
            if (plVar15 == plVar17) {
              lVar10 = 0x20;
LAB_0cfb6395:
              (**(code **)(*plVar17 + lVar10))();
            }
            else {
              lVar10 = 0x28;
              if (plVar17 != (long *)0x0) goto LAB_0cfb6395;
            }
            plVar15 = plVar15 + 6;
          } while (plVar15 != plVar13);
          plVar15 = (long *)*plStack_170;
        }
        lVar18 = lVar18 + 0x30;
        *(long *)(lVar20 + 0x18) = lVar9;
        *(long *)(lVar20 + 0x20) = lVar18;
        lVar9 = *(long *)(lVar20 + 0x28);
        *(long *)(lVar20 + 0x28) = lStack_1b0;
        if (plVar15 != (long *)0x0) {
          func_0x0412a280(plVar15,lVar9 - (long)plVar15);
        }
        goto LAB_0cfb63ed;
      }
LAB_0cfb7708:
      func_0x0b6a3830();
      goto LAB_0cfb770d;
    }
    lVar20 = uVar14 - *plVar8;
    uVar14 = (lVar20 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar14) goto LAB_0cfb7703;
    lVar18 = plVar8[2] - *plVar8 >> 4;
    uVar1 = lVar18 * 0x5555555555555556;
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar14 = 0x555555555555555;
    }
    plStack_1a8 = plVar8;
    if (uVar14 == 0) {
      lStack_1b0 = 0;
LAB_0cfb606b:
      auStack_1c8[0] = (undefined1)lStack_1b0;
      auStack_1c8._1_4_ = (undefined4)((ulong)lStack_1b0 >> 8);
      uStack_1c3._0_3_ = (undefined3)((ulong)lStack_1b0 >> 0x28);
      lVar20 = lVar20 + lStack_1b0;
      uStack_1bb._3_1_ = (byte)lVar20;
      uStack_1b7 = (undefined2)((ulong)lVar20 >> 8);
      uStack_1b5 = (undefined1)((ulong)lVar20 >> 0x18);
      uStack_1b4 = (undefined4)((ulong)lVar20 >> 0x20);
      uStack_1c3 = CONCAT13(uStack_1bb._3_1_,(undefined3)uStack_1c3);
      uStack_1bf = (undefined4)((ulong)lVar20 >> 8);
      uStack_1bb._0_3_ = (undefined3)((ulong)lVar20 >> 0x28);
      lStack_1b0 = uVar14 * 0x30 + lStack_1b0;
      func_0x0cfd2790(lVar20,&bStack_1e8);
      lVar20 = CONCAT44(uStack_1b4,CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1bb._3_1_)));
      plVar13 = (long *)*plVar8;
      plVar15 = (long *)plVar8[1];
      lVar18 = (long)plVar13 +
               (CONCAT35((undefined3)uStack_1bb,CONCAT41(uStack_1bf,uStack_1c3._3_1_)) -
               (long)plVar15);
      plVar17 = plVar13;
      lVar9 = lVar18;
      if (plVar13 != plVar15) {
        do {
          lStack_180 = lVar18;
          plVar16 = (long *)plVar17[4];
          if (plVar16 == (long *)0x0) {
            *(undefined8 *)(lVar9 + 0x20) = 0;
          }
          else if (plVar17 == plVar16) {
            *(long *)(lVar9 + 0x20) = lVar9;
            (**(code **)(*(long *)plVar17[4] + 0x18))((long *)plVar17[4],lVar9);
          }
          else {
            *(long **)(lVar9 + 0x20) = plVar16;
            plVar17[4] = 0;
          }
          lVar18 = lStack_180;
          plVar17 = plVar17 + 6;
          lVar9 = lVar9 + 0x30;
        } while (plVar17 != plVar15);
        do {
          plVar17 = (long *)plVar13[4];
          if (plVar13 == plVar17) {
            lVar9 = 0x20;
LAB_0cfb6145:
            (**(code **)(*plVar17 + lVar9))();
          }
          else {
            lVar9 = 0x28;
            if (plVar17 != (long *)0x0) goto LAB_0cfb6145;
          }
          plVar13 = plVar13 + 6;
        } while (plVar13 != plVar15);
        plVar13 = (long *)*plVar8;
      }
      lVar20 = lVar20 + 0x30;
      *plVar8 = lVar18;
      plVar8[1] = lVar20;
      lVar18 = plVar8[2];
      plVar8[2] = lStack_1b0;
      if (plVar13 != (long *)0x0) {
        func_0x0412a280(plVar13,lVar18 - (long)plVar13);
      }
      goto LAB_0cfb61ac;
    }
    if (uVar14 < 0x555555555555556) {
      lStack_1b0 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 0x30);
      if (lStack_1b0 == 0) {
        func_0x0eec74c0(uVar14 * 0x30,0);
        lStack_1b0 = 0;
      }
      goto LAB_0cfb606b;
    }
  }
  else {
    plVar16 = (long *)*plVar15;
    lVar20 = (long)plVar13 - (long)plVar16;
    uVar14 = (lVar20 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar14) {
      func_0x0b6a24d0();
LAB_0cfb7703:
      func_0x0b6a24d0();
      goto LAB_0cfb7708;
    }
    lVar18 = (long)plVar17 - (long)plVar16 >> 4;
    uVar1 = lVar18 * 0x5555555555555556;
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar14 = 0x555555555555555;
    }
    lStack_180 = lVar20;
    if (uVar14 == 0) {
      lVar20 = 0;
LAB_0cfb5e60:
      *(undefined **)(lVar20 + lStack_180) = &UNK_0f42da88;
      *(long *)(lVar20 + 0x20 + lStack_180) = lVar20 + lStack_180;
      plVar19 = plVar16;
      lVar18 = lVar20;
      if (plVar16 != plVar13) {
        do {
          lStack_168 = lVar18;
          plVar17 = (long *)plVar19[4];
          if (plVar17 == (long *)0x0) {
            *(undefined8 *)(lVar20 + 0x20) = 0;
          }
          else if (plVar19 == plVar17) {
            *(long *)(lVar20 + 0x20) = lVar20;
            (**(code **)(*plVar17 + 0x18))(plVar17,lVar20);
          }
          else {
            *(long **)(lVar20 + 0x20) = plVar17;
            plVar19[4] = 0;
          }
          plVar8 = plStack_170;
          plVar19 = plVar19 + 6;
          lVar20 = lVar20 + 0x30;
          lVar18 = lStack_168;
        } while (plVar19 != plVar13);
        do {
          plVar17 = (long *)plVar16[4];
          if (plVar16 == plVar17) {
            lVar20 = 0x20;
LAB_0cfb5ef5:
            (**(code **)(*plVar17 + lVar20))();
          }
          else {
            lVar20 = 0x28;
            if (plVar17 != (long *)0x0) goto LAB_0cfb5ef5;
          }
          plVar16 = plVar16 + 6;
        } while (plVar16 != plVar13);
        plVar16 = (long *)*plVar15;
        plVar17 = (long *)plVar15[2];
        lVar20 = lStack_168;
      }
      plVar13 = (long *)(lVar20 + lStack_180 + 0x30);
      *plVar15 = lVar20;
      plVar15[1] = (long)plVar13;
      plVar15[2] = uVar14 * 0x30 + lVar20;
      if (plVar16 != (long *)0x0) {
        func_0x0412a280(plVar16,(long)plVar17 - (long)plVar16);
      }
      plVar8 = (long *)*plVar8;
      goto LAB_0cfb5f76;
    }
    if (uVar14 < 0x555555555555556) {
      lStack_168 = uVar14 * 0x30;
      lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar20 == 0) {
        func_0x0eec74c0(lStack_168,0);
        lVar20 = 0;
      }
      goto LAB_0cfb5e60;
    }
LAB_0cfb770d:
    func_0x04882eb0();
  }
  func_0x04882eb0();
LAB_0cfb7717:
  uVar7 = func_0x04882eb0();
  func_0x0b6a37c0(auStack_1c8);
  if ((bStack_1e8 & 1) != 0) {
    func_0x0412a280(uStack_1d8,
                    CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,bStack_1e8))) &
                    0xfffffffffffffffe);
  }
  if ((auStack_198[0] & 1) != 0) goto LAB_0cfb7dea;
  do {
    do {
      if ((bStack_58 & 1) != 0) {
        uStack_4b._3_1_ = (undefined1)((uint)uStack_4b >> 0x18);
        uVar4 = CONCAT11(uStack_47,uStack_4b._3_1_);
        func_0x0412a280(CONCAT62(uStack_46,uVar4),
                        CONCAT35((undefined3)uStack_53,CONCAT41(uStack_57,bStack_58)) &
                        0xfffffffffffffffe);
      }
      if ((bStack_200 & 1) != 0) {
        func_0x0412a280(uStack_1f0,
                        CONCAT26(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,bStack_200))) &
                        0xfffffffffffffffe);
      }
      uVar7 = _Unwind_Resume(uVar7);
    } while ((auStack_198[0] & 1) == 0);
LAB_0cfb7dea:
    func_0x0412a280(uStack_188,auStack_198[0] & 0xfffffffffffffffe);
  } while( true );
}



/* ---- referenced strings ----
 * 0x11e47b1  minecraft:soul_soil_block
 * 0x11e47ba  :soul_soil_block
 * 0x12344e5  minecraft:lodestone_block
 * 0x12344ee  :lodestone_block
 * 0x1282eb9  minecraft:polished_blackstone_brick_wall
 * 0x1282ec9  ed_blackstone_brick_wall
 * 0x13021de  minecraft:polished_basalt_block
 * 0x13021ed  hed_basalt_block
 * 0x131d57e  minecraft:target_block
 * 0x13384ba  minecraft:weeping_vines_block
 * 0x13384c7  ping_vines_block
 * 0x13531dd  minecraft:blue_fire
 * 0x136f078  minecraft:shroomlight_block
 * 0x136f083  hroomlight_block
 * 0x140a8b3  minecraft:blackstone_wall
 * 0x140a8bc  :blackstone_wall
 * 0x1457e1d  minecraft:jigsaw
 * 0x1458167  minecraft:basalt_block
 * 0x14a63d1  minecraft:crimson_trap_door
 * 0x14a63dc  rimson_trap_door
 * 0x14c07f1  minecraft:blue_nether_wart_block
 * 0x14c0801  ether_wart_block
 * 0x14dbd6c  minecraft:twisting_vines_block
 * 0x14dbd7a  ting_vines_block
 */
