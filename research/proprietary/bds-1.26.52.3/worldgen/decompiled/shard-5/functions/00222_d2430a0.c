/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3430a0 (ELF vaddr 0xd2430a0)
 * Label: callee-of:0x51f0d20
 * Body:  [[0d3430a0, 0d343194] [0d3431a0, 0d34321b] [0d343220, 0d343327] [0d343330, 0d3437a5] [0d3437b0, 0d343d2d]]
 * Ghidra: FUN_0d3430a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3430a0(uint *param_1,long *param_2,char param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  uint *puStack_38;
  
  uVar13 = *param_1;
  lVar19 = *(long *)(param_1 + 6);
  lVar15 = *(long *)(param_1 + 2);
  if ((ulong)((lVar19 - lVar15 >> 2) * -0x6ddb372d3c25c755) < (ulong)(long)(int)uVar13) {
    if ((int)uVar13 < 0) {
LAB_0d343cf4:
      func_0x052bdae0();
LAB_0d343cf9:
      uVar12 = func_0x04882eb0();
      *(long *)(param_1 + 4) = lVar15;
      uVar12 = func_0x0eee2d70(uVar12);
      func_0x0d3457a0(&lStack_58);
      uVar12 = func_0x0eee2d70(uVar12);
      *(long *)(param_1 + 4) = lVar15;
      func_0x0eee2d70(uVar12);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar11 = *(long *)(param_1 + 4);
    lVar16 = (long)(int)uVar13 * 0x80c;
    lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (lVar10 == 0) {
      func_0x0eec74c0(lVar16,0);
    }
    func_0x0eee2f00(lVar10,lVar15,lVar11 - lVar15);
    *(long *)(param_1 + 2) = lVar10;
    *(long *)(param_1 + 4) = (lVar11 - lVar15) + lVar10;
    *(long *)(param_1 + 6) = lVar16 + lVar10;
    if (lVar15 != 0) {
      FUN_0412a280(lVar15,lVar19 - lVar15);
      uVar13 = *param_1;
    }
  }
  fVar23 = 0.0;
  if (0 < (int)uVar13) {
    puVar1 = param_1 + 2;
    puVar17 = *(undefined8 **)(param_1 + 4);
    iVar18 = 0;
    do {
      if (puVar17 < *(undefined8 **)(param_1 + 6)) {
        func_0x0eee2dd0(puVar17,0,0x80c);
        fVar20 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar21 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar22 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar23 = fVar20;
        if (param_3 == '\0') {
          fVar23 = fVar22;
          fVar22 = fVar20;
        }
        *puVar17 = CONCAT44(fVar21 * _UNK_014e4d64,fVar23 * _DAT_014e4d60);
        *(float *)(puVar17 + 1) = fVar22 * _DAT_01198344;
        uVar12 = _UNK_014e31a8;
        *(undefined8 *)((long)puVar17 + 0xc) = _DAT_014e31a0;
        *(undefined8 *)((long)puVar17 + 0x14) = uVar12;
        uVar12 = _UNK_014e20a8;
        *(undefined8 *)((long)puVar17 + 0x1c) = _DAT_014e20a0;
        *(undefined8 *)((long)puVar17 + 0x24) = uVar12;
        uVar12 = _UNK_014e1d28;
        *(undefined8 *)((long)puVar17 + 0x2c) = _DAT_014e1d20;
        *(undefined8 *)((long)puVar17 + 0x34) = uVar12;
        uVar12 = _UNK_014e1d38;
        *(undefined8 *)((long)puVar17 + 0x3c) = _DAT_014e1d30;
        *(undefined8 *)((long)puVar17 + 0x44) = uVar12;
        uVar12 = _UNK_014e21a8;
        *(undefined8 *)((long)puVar17 + 0x4c) = _DAT_014e21a0;
        *(undefined8 *)((long)puVar17 + 0x54) = uVar12;
        uVar12 = _UNK_014e86f8;
        *(undefined8 *)((long)puVar17 + 0x5c) = _DAT_014e86f0;
        *(undefined8 *)((long)puVar17 + 100) = uVar12;
        uVar12 = _UNK_014e1248;
        *(undefined8 *)((long)puVar17 + 0x6c) = _DAT_014e1240;
        *(undefined8 *)((long)puVar17 + 0x74) = uVar12;
        uVar12 = _UNK_014e52c8;
        *(undefined8 *)((long)puVar17 + 0x7c) = _DAT_014e52c0;
        *(undefined8 *)((long)puVar17 + 0x84) = uVar12;
        uVar12 = _UNK_014e17d8;
        *(undefined8 *)((long)puVar17 + 0x8c) = _DAT_014e17d0;
        *(undefined8 *)((long)puVar17 + 0x94) = uVar12;
        uVar12 = _UNK_014e1258;
        *(undefined8 *)((long)puVar17 + 0x9c) = _DAT_014e1250;
        *(undefined8 *)((long)puVar17 + 0xa4) = uVar12;
        uVar12 = _UNK_014e0de8;
        *(undefined8 *)((long)puVar17 + 0xac) = _DAT_014e0de0;
        *(undefined8 *)((long)puVar17 + 0xb4) = uVar12;
        uVar12 = _UNK_014e52d8;
        *(undefined8 *)((long)puVar17 + 0xbc) = _DAT_014e52d0;
        *(undefined8 *)((long)puVar17 + 0xc4) = uVar12;
        uVar12 = _UNK_014e3c48;
        *(undefined8 *)((long)puVar17 + 0xcc) = _DAT_014e3c40;
        *(undefined8 *)((long)puVar17 + 0xd4) = uVar12;
        uVar12 = _UNK_014e9bf8;
        *(undefined8 *)((long)puVar17 + 0xdc) = _DAT_014e9bf0;
        *(undefined8 *)((long)puVar17 + 0xe4) = uVar12;
        uVar12 = _UNK_014e46f8;
        *(undefined8 *)((long)puVar17 + 0xec) = _DAT_014e46f0;
        *(undefined8 *)((long)puVar17 + 0xf4) = uVar12;
        uVar12 = _UNK_014e7c98;
        *(undefined8 *)((long)puVar17 + 0xfc) = _DAT_014e7c90;
        *(undefined8 *)((long)puVar17 + 0x104) = uVar12;
        uVar12 = _UNK_014e17e8;
        *(undefined8 *)((long)puVar17 + 0x10c) = _DAT_014e17e0;
        *(undefined8 *)((long)puVar17 + 0x114) = uVar12;
        uVar12 = _UNK_014e4708;
        *(undefined8 *)((long)puVar17 + 0x11c) = _DAT_014e4700;
        *(undefined8 *)((long)puVar17 + 0x124) = uVar12;
        uVar12 = _UNK_014e17f8;
        *(undefined8 *)((long)puVar17 + 300) = _DAT_014e17f0;
        *(undefined8 *)((long)puVar17 + 0x134) = uVar12;
        uVar12 = _UNK_014e71d8;
        *(undefined8 *)((long)puVar17 + 0x13c) = _DAT_014e71d0;
        *(undefined8 *)((long)puVar17 + 0x144) = uVar12;
        uVar12 = _UNK_014e4198;
        *(undefined8 *)((long)puVar17 + 0x14c) = _DAT_014e4190;
        *(undefined8 *)((long)puVar17 + 0x154) = uVar12;
        uVar12 = _UNK_014e5c58;
        *(undefined8 *)((long)puVar17 + 0x15c) = _DAT_014e5c50;
        *(undefined8 *)((long)puVar17 + 0x164) = uVar12;
        uVar12 = _UNK_014ea058;
        *(undefined8 *)((long)puVar17 + 0x16c) = _DAT_014ea050;
        *(undefined8 *)((long)puVar17 + 0x174) = uVar12;
        uVar12 = _UNK_014e2778;
        *(undefined8 *)((long)puVar17 + 0x17c) = _DAT_014e2770;
        *(undefined8 *)((long)puVar17 + 0x184) = uVar12;
        uVar12 = _UNK_014e5c68;
        *(undefined8 *)((long)puVar17 + 0x18c) = _DAT_014e5c60;
        *(undefined8 *)((long)puVar17 + 0x194) = uVar12;
        uVar12 = _UNK_014ea068;
        *(undefined8 *)((long)puVar17 + 0x19c) = _DAT_014ea060;
        *(undefined8 *)((long)puVar17 + 0x1a4) = uVar12;
        uVar12 = _UNK_014eae28;
        *(undefined8 *)((long)puVar17 + 0x1ac) = _DAT_014eae20;
        *(undefined8 *)((long)puVar17 + 0x1b4) = uVar12;
        uVar12 = _UNK_014e36b8;
        *(undefined8 *)((long)puVar17 + 0x1bc) = _DAT_014e36b0;
        *(undefined8 *)((long)puVar17 + 0x1c4) = uVar12;
        uVar12 = _UNK_014e41a8;
        *(undefined8 *)((long)puVar17 + 0x1cc) = _DAT_014e41a0;
        *(undefined8 *)((long)puVar17 + 0x1d4) = uVar12;
        uVar12 = _UNK_014e8708;
        *(undefined8 *)((long)puVar17 + 0x1dc) = _DAT_014e8700;
        *(undefined8 *)((long)puVar17 + 0x1e4) = uVar12;
        uVar12 = _UNK_014e9148;
        *(undefined8 *)((long)puVar17 + 0x1ec) = _DAT_014e9140;
        *(undefined8 *)((long)puVar17 + 500) = uVar12;
        uVar12 = _UNK_014e2d38;
        *(undefined8 *)((long)puVar17 + 0x1fc) = _DAT_014e2d30;
        *(undefined8 *)((long)puVar17 + 0x204) = uVar12;
        uVar12 = _UNK_014e41b8;
        *(undefined8 *)((long)puVar17 + 0x20c) = _DAT_014e41b0;
        *(undefined8 *)((long)puVar17 + 0x214) = uVar12;
        uVar12 = _UNK_014e7ca8;
        *(undefined8 *)((long)puVar17 + 0x21c) = _DAT_014e7ca0;
        *(undefined8 *)((long)puVar17 + 0x224) = uVar12;
        uVar12 = _UNK_014e5c78;
        *(undefined8 *)((long)puVar17 + 0x22c) = _DAT_014e5c70;
        *(undefined8 *)((long)puVar17 + 0x234) = uVar12;
        uVar12 = _UNK_014e1d48;
        *(undefined8 *)((long)puVar17 + 0x23c) = _DAT_014e1d40;
        *(undefined8 *)((long)puVar17 + 0x244) = uVar12;
        uVar12 = _UNK_014e2d48;
        *(undefined8 *)((long)puVar17 + 0x24c) = _DAT_014e2d40;
        *(undefined8 *)((long)puVar17 + 0x254) = uVar12;
        uVar12 = _UNK_014e3c58;
        *(undefined8 *)((long)puVar17 + 0x25c) = _DAT_014e3c50;
        *(undefined8 *)((long)puVar17 + 0x264) = uVar12;
        uVar12 = _UNK_014e21b8;
        *(undefined8 *)((long)puVar17 + 0x26c) = _DAT_014e21b0;
        *(undefined8 *)((long)puVar17 + 0x274) = uVar12;
        uVar12 = _UNK_014e52e8;
        *(undefined8 *)((long)puVar17 + 0x27c) = _DAT_014e52e0;
        *(undefined8 *)((long)puVar17 + 0x284) = uVar12;
        uVar12 = _UNK_014e1d58;
        *(undefined8 *)((long)puVar17 + 0x28c) = _DAT_014e1d50;
        *(undefined8 *)((long)puVar17 + 0x294) = uVar12;
        uVar12 = _UNK_014e6228;
        *(undefined8 *)((long)puVar17 + 0x29c) = _DAT_014e6220;
        *(undefined8 *)((long)puVar17 + 0x2a4) = uVar12;
        uVar12 = _UNK_014e2d58;
        *(undefined8 *)((long)puVar17 + 0x2ac) = _DAT_014e2d50;
        *(undefined8 *)((long)puVar17 + 0x2b4) = uVar12;
        uVar12 = _UNK_014e4718;
        *(undefined8 *)((long)puVar17 + 700) = _DAT_014e4710;
        *(undefined8 *)((long)puVar17 + 0x2c4) = uVar12;
        uVar12 = _UNK_014e6798;
        *(undefined8 *)((long)puVar17 + 0x2cc) = _DAT_014e6790;
        *(undefined8 *)((long)puVar17 + 0x2d4) = uVar12;
        uVar12 = _UNK_014e2d68;
        *(undefined8 *)((long)puVar17 + 0x2dc) = _DAT_014e2d60;
        *(undefined8 *)((long)puVar17 + 0x2e4) = uVar12;
        uVar12 = _UNK_014e67a8;
        *(undefined8 *)((long)puVar17 + 0x2ec) = _DAT_014e67a0;
        *(undefined8 *)((long)puVar17 + 0x2f4) = uVar12;
        uVar12 = _UNK_014eae38;
        *(undefined8 *)((long)puVar17 + 0x2fc) = _DAT_014eae30;
        *(undefined8 *)((long)puVar17 + 0x304) = uVar12;
        uVar12 = _UNK_014e7cb8;
        *(undefined8 *)((long)puVar17 + 0x30c) = _DAT_014e7cb0;
        *(undefined8 *)((long)puVar17 + 0x314) = uVar12;
        uVar12 = _UNK_014e1808;
        *(undefined8 *)((long)puVar17 + 0x31c) = _DAT_014e1800;
        *(undefined8 *)((long)puVar17 + 0x324) = uVar12;
        uVar12 = _UNK_014e36c8;
        *(undefined8 *)((long)puVar17 + 0x32c) = _DAT_014e36c0;
        *(undefined8 *)((long)puVar17 + 0x334) = uVar12;
        uVar12 = _UNK_014e1268;
        *(undefined8 *)((long)puVar17 + 0x33c) = _DAT_014e1260;
        *(undefined8 *)((long)puVar17 + 0x344) = uVar12;
        uVar12 = _UNK_014e67b8;
        *(undefined8 *)((long)puVar17 + 0x34c) = _DAT_014e67b0;
        *(undefined8 *)((long)puVar17 + 0x354) = uVar12;
        uVar12 = _UNK_014e7758;
        *(undefined8 *)((long)puVar17 + 0x35c) = _DAT_014e7750;
        *(undefined8 *)((long)puVar17 + 0x364) = uVar12;
        uVar12 = _UNK_014e4728;
        *(undefined8 *)((long)puVar17 + 0x36c) = _DAT_014e4720;
        *(undefined8 *)((long)puVar17 + 0x374) = uVar12;
        uVar12 = _UNK_014eae48;
        *(undefined8 *)((long)puVar17 + 0x37c) = _DAT_014eae40;
        *(undefined8 *)((long)puVar17 + 900) = uVar12;
        uVar12 = _UNK_014e5778;
        *(undefined8 *)((long)puVar17 + 0x38c) = _DAT_014e5770;
        *(undefined8 *)((long)puVar17 + 0x394) = uVar12;
        uVar12 = _UNK_014e9c08;
        *(undefined8 *)((long)puVar17 + 0x39c) = _DAT_014e9c00;
        *(undefined8 *)((long)puVar17 + 0x3a4) = uVar12;
        uVar12 = _UNK_014e2788;
        *(undefined8 *)((long)puVar17 + 0x3ac) = _DAT_014e2780;
        *(undefined8 *)((long)puVar17 + 0x3b4) = uVar12;
        uVar12 = _UNK_014e9c18;
        *(undefined8 *)((long)puVar17 + 0x3bc) = _DAT_014e9c10;
        *(undefined8 *)((long)puVar17 + 0x3c4) = uVar12;
        uVar12 = _UNK_014ea078;
        *(undefined8 *)((long)puVar17 + 0x3cc) = _DAT_014ea070;
        *(undefined8 *)((long)puVar17 + 0x3d4) = uVar12;
        uVar12 = _UNK_014e41c8;
        *(undefined8 *)((long)puVar17 + 0x3dc) = _DAT_014e41c0;
        *(undefined8 *)((long)puVar17 + 0x3e4) = uVar12;
        uVar12 = _UNK_014e21c8;
        *(undefined8 *)((long)puVar17 + 0x3ec) = _DAT_014e21c0;
        *(undefined8 *)((long)puVar17 + 0x3f4) = uVar12;
        uVar7 = _UNK_014e915c;
        uVar6 = _UNK_014e9158;
        uVar3 = _UNK_014e9154;
        *(undefined4 *)((long)puVar17 + 0x3fc) = _DAT_014e9150;
        *(undefined4 *)(puVar17 + 0x80) = uVar3;
        *(undefined4 *)((long)puVar17 + 0x404) = uVar6;
        *(undefined4 *)(puVar17 + 0x81) = uVar7;
        lVar19 = 0x100;
        lVar15 = 0;
        do {
          iVar8 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar3 = *(undefined4 *)((long)puVar17 + lVar15 * 4 + 0xc);
          lVar11 = (long)(iVar8 + (int)lVar15);
          *(undefined4 *)((long)puVar17 + lVar15 * 4 + 0xc) =
               *(undefined4 *)((long)puVar17 + lVar11 * 4 + 0xc);
          *(undefined4 *)((long)puVar17 + lVar11 * 4 + 0xc) = uVar3;
          *(undefined4 *)((long)puVar17 + lVar15 * 4 + 0x40c) =
               *(undefined4 *)((long)puVar17 + lVar15 * 4 + 0xc);
          lVar15 = lVar15 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        puVar17 = (undefined8 *)((long)puVar17 + 0x80c);
        *(undefined8 **)(param_1 + 4) = puVar17;
      }
      else {
        lVar15 = (long)puVar17 - *(long *)puVar1;
        uVar14 = (lVar15 >> 2) * -0x6ddb372d3c25c755 + 1;
        if (0x1fd04794a10e6a < uVar14) goto LAB_0d343cf4;
        lVar19 = (long)*(undefined8 **)(param_1 + 6) - *(long *)puVar1 >> 2;
        uVar5 = lVar19 * 0x244991a587b47156;
        if (uVar14 < uVar5) {
          uVar14 = uVar5;
        }
        if (0xfe823ca508734 < (ulong)(lVar19 * -0x6ddb372d3c25c755)) {
          uVar14 = 0x1fd04794a10e6a;
        }
        puStack_38 = puVar1;
        if (uVar14 == 0) {
LAB_0d3432b8:
          lVar19 = 0;
        }
        else {
          if (0x1fd04794a10e6a < uVar14) goto LAB_0d343cf9;
          lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 0x80c);
          if (lVar19 == 0) {
            func_0x0eec74c0(uVar14 * 0x80c,0);
            goto LAB_0d3432b8;
          }
        }
        puVar2 = (undefined8 *)(lVar19 + lVar15);
        lVar11 = uVar14 * 0x80c + lVar19;
        lStack_58 = lVar19;
        puStack_50 = puVar2;
        puStack_48 = puVar2;
        lStack_40 = lVar11;
        func_0x0eee2dd0(puVar2,0,0x80c);
        fVar20 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar21 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar22 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar23 = fVar20;
        if (param_3 == '\0') {
          fVar23 = fVar22;
          fVar22 = fVar20;
        }
        *puVar2 = CONCAT44(fVar21 * _UNK_014e4d64,fVar23 * _DAT_014e4d60);
        *(float *)(puVar2 + 1) = fVar22 * _DAT_01198344;
        uVar12 = _UNK_014e31a8;
        lVar15 = lVar19 + 0xc + lVar15;
        *(undefined8 *)((long)puVar2 + 0xc) = _DAT_014e31a0;
        *(undefined8 *)((long)puVar2 + 0x14) = uVar12;
        uVar12 = _UNK_014e20a8;
        *(undefined8 *)((long)puVar2 + 0x1c) = _DAT_014e20a0;
        *(undefined8 *)((long)puVar2 + 0x24) = uVar12;
        uVar12 = _UNK_014e1d28;
        *(undefined8 *)((long)puVar2 + 0x2c) = _DAT_014e1d20;
        *(undefined8 *)((long)puVar2 + 0x34) = uVar12;
        uVar12 = _UNK_014e1d38;
        *(undefined8 *)((long)puVar2 + 0x3c) = _DAT_014e1d30;
        *(undefined8 *)((long)puVar2 + 0x44) = uVar12;
        uVar12 = _UNK_014e21a8;
        *(undefined8 *)((long)puVar2 + 0x4c) = _DAT_014e21a0;
        *(undefined8 *)((long)puVar2 + 0x54) = uVar12;
        uVar12 = _UNK_014e86f8;
        *(undefined8 *)((long)puVar2 + 0x5c) = _DAT_014e86f0;
        *(undefined8 *)((long)puVar2 + 100) = uVar12;
        uVar12 = _UNK_014e1248;
        *(undefined8 *)((long)puVar2 + 0x6c) = _DAT_014e1240;
        *(undefined8 *)((long)puVar2 + 0x74) = uVar12;
        uVar12 = _UNK_014e52c8;
        *(undefined8 *)((long)puVar2 + 0x7c) = _DAT_014e52c0;
        *(undefined8 *)((long)puVar2 + 0x84) = uVar12;
        uVar12 = _UNK_014e17d8;
        *(undefined8 *)((long)puVar2 + 0x8c) = _DAT_014e17d0;
        *(undefined8 *)((long)puVar2 + 0x94) = uVar12;
        uVar12 = _UNK_014e1258;
        *(undefined8 *)((long)puVar2 + 0x9c) = _DAT_014e1250;
        *(undefined8 *)((long)puVar2 + 0xa4) = uVar12;
        uVar12 = _UNK_014e0de8;
        *(undefined8 *)((long)puVar2 + 0xac) = _DAT_014e0de0;
        *(undefined8 *)((long)puVar2 + 0xb4) = uVar12;
        uVar12 = _UNK_014e52d8;
        *(undefined8 *)((long)puVar2 + 0xbc) = _DAT_014e52d0;
        *(undefined8 *)((long)puVar2 + 0xc4) = uVar12;
        uVar12 = _UNK_014e3c48;
        *(undefined8 *)((long)puVar2 + 0xcc) = _DAT_014e3c40;
        *(undefined8 *)((long)puVar2 + 0xd4) = uVar12;
        uVar12 = _UNK_014e9bf8;
        *(undefined8 *)((long)puVar2 + 0xdc) = _DAT_014e9bf0;
        *(undefined8 *)((long)puVar2 + 0xe4) = uVar12;
        uVar12 = _UNK_014e46f8;
        *(undefined8 *)((long)puVar2 + 0xec) = _DAT_014e46f0;
        *(undefined8 *)((long)puVar2 + 0xf4) = uVar12;
        uVar12 = _UNK_014e7c98;
        *(undefined8 *)((long)puVar2 + 0xfc) = _DAT_014e7c90;
        *(undefined8 *)((long)puVar2 + 0x104) = uVar12;
        uVar12 = _UNK_014e17e8;
        *(undefined8 *)((long)puVar2 + 0x10c) = _DAT_014e17e0;
        *(undefined8 *)((long)puVar2 + 0x114) = uVar12;
        uVar12 = _UNK_014e4708;
        *(undefined8 *)((long)puVar2 + 0x11c) = _DAT_014e4700;
        *(undefined8 *)((long)puVar2 + 0x124) = uVar12;
        uVar12 = _UNK_014e17f8;
        *(undefined8 *)((long)puVar2 + 300) = _DAT_014e17f0;
        *(undefined8 *)((long)puVar2 + 0x134) = uVar12;
        uVar12 = _UNK_014e71d8;
        *(undefined8 *)((long)puVar2 + 0x13c) = _DAT_014e71d0;
        *(undefined8 *)((long)puVar2 + 0x144) = uVar12;
        uVar12 = _UNK_014e4198;
        *(undefined8 *)((long)puVar2 + 0x14c) = _DAT_014e4190;
        *(undefined8 *)((long)puVar2 + 0x154) = uVar12;
        uVar12 = _UNK_014e5c58;
        *(undefined8 *)((long)puVar2 + 0x15c) = _DAT_014e5c50;
        *(undefined8 *)((long)puVar2 + 0x164) = uVar12;
        uVar12 = _UNK_014ea058;
        *(undefined8 *)((long)puVar2 + 0x16c) = _DAT_014ea050;
        *(undefined8 *)((long)puVar2 + 0x174) = uVar12;
        uVar12 = _UNK_014e2778;
        *(undefined8 *)((long)puVar2 + 0x17c) = _DAT_014e2770;
        *(undefined8 *)((long)puVar2 + 0x184) = uVar12;
        uVar12 = _UNK_014e5c68;
        *(undefined8 *)((long)puVar2 + 0x18c) = _DAT_014e5c60;
        *(undefined8 *)((long)puVar2 + 0x194) = uVar12;
        uVar12 = _UNK_014ea068;
        *(undefined8 *)((long)puVar2 + 0x19c) = _DAT_014ea060;
        *(undefined8 *)((long)puVar2 + 0x1a4) = uVar12;
        uVar12 = _UNK_014eae28;
        *(undefined8 *)((long)puVar2 + 0x1ac) = _DAT_014eae20;
        *(undefined8 *)((long)puVar2 + 0x1b4) = uVar12;
        uVar12 = _UNK_014e36b8;
        *(undefined8 *)((long)puVar2 + 0x1bc) = _DAT_014e36b0;
        *(undefined8 *)((long)puVar2 + 0x1c4) = uVar12;
        uVar12 = _UNK_014e41a8;
        *(undefined8 *)((long)puVar2 + 0x1cc) = _DAT_014e41a0;
        *(undefined8 *)((long)puVar2 + 0x1d4) = uVar12;
        uVar12 = _UNK_014e8708;
        *(undefined8 *)((long)puVar2 + 0x1dc) = _DAT_014e8700;
        *(undefined8 *)((long)puVar2 + 0x1e4) = uVar12;
        uVar12 = _UNK_014e9148;
        *(undefined8 *)((long)puVar2 + 0x1ec) = _DAT_014e9140;
        *(undefined8 *)((long)puVar2 + 500) = uVar12;
        uVar12 = _UNK_014e2d38;
        *(undefined8 *)((long)puVar2 + 0x1fc) = _DAT_014e2d30;
        *(undefined8 *)((long)puVar2 + 0x204) = uVar12;
        uVar12 = _UNK_014e41b8;
        *(undefined8 *)((long)puVar2 + 0x20c) = _DAT_014e41b0;
        *(undefined8 *)((long)puVar2 + 0x214) = uVar12;
        uVar12 = _UNK_014e7ca8;
        *(undefined8 *)((long)puVar2 + 0x21c) = _DAT_014e7ca0;
        *(undefined8 *)((long)puVar2 + 0x224) = uVar12;
        uVar12 = _UNK_014e5c78;
        *(undefined8 *)((long)puVar2 + 0x22c) = _DAT_014e5c70;
        *(undefined8 *)((long)puVar2 + 0x234) = uVar12;
        uVar12 = _UNK_014e1d48;
        *(undefined8 *)((long)puVar2 + 0x23c) = _DAT_014e1d40;
        *(undefined8 *)((long)puVar2 + 0x244) = uVar12;
        uVar12 = _UNK_014e2d48;
        *(undefined8 *)((long)puVar2 + 0x24c) = _DAT_014e2d40;
        *(undefined8 *)((long)puVar2 + 0x254) = uVar12;
        uVar12 = _UNK_014e3c58;
        *(undefined8 *)((long)puVar2 + 0x25c) = _DAT_014e3c50;
        *(undefined8 *)((long)puVar2 + 0x264) = uVar12;
        uVar12 = _UNK_014e21b8;
        *(undefined8 *)((long)puVar2 + 0x26c) = _DAT_014e21b0;
        *(undefined8 *)((long)puVar2 + 0x274) = uVar12;
        uVar12 = _UNK_014e52e8;
        *(undefined8 *)((long)puVar2 + 0x27c) = _DAT_014e52e0;
        *(undefined8 *)((long)puVar2 + 0x284) = uVar12;
        uVar12 = _UNK_014e1d58;
        *(undefined8 *)((long)puVar2 + 0x28c) = _DAT_014e1d50;
        *(undefined8 *)((long)puVar2 + 0x294) = uVar12;
        uVar12 = _UNK_014e6228;
        *(undefined8 *)((long)puVar2 + 0x29c) = _DAT_014e6220;
        *(undefined8 *)((long)puVar2 + 0x2a4) = uVar12;
        uVar12 = _UNK_014e2d58;
        *(undefined8 *)((long)puVar2 + 0x2ac) = _DAT_014e2d50;
        *(undefined8 *)((long)puVar2 + 0x2b4) = uVar12;
        uVar12 = _UNK_014e4718;
        *(undefined8 *)((long)puVar2 + 700) = _DAT_014e4710;
        *(undefined8 *)((long)puVar2 + 0x2c4) = uVar12;
        uVar12 = _UNK_014e6798;
        *(undefined8 *)((long)puVar2 + 0x2cc) = _DAT_014e6790;
        *(undefined8 *)((long)puVar2 + 0x2d4) = uVar12;
        uVar12 = _UNK_014e2d68;
        *(undefined8 *)((long)puVar2 + 0x2dc) = _DAT_014e2d60;
        *(undefined8 *)((long)puVar2 + 0x2e4) = uVar12;
        uVar12 = _UNK_014e67a8;
        *(undefined8 *)((long)puVar2 + 0x2ec) = _DAT_014e67a0;
        *(undefined8 *)((long)puVar2 + 0x2f4) = uVar12;
        uVar12 = _UNK_014eae38;
        *(undefined8 *)((long)puVar2 + 0x2fc) = _DAT_014eae30;
        *(undefined8 *)((long)puVar2 + 0x304) = uVar12;
        uVar12 = _UNK_014e7cb8;
        *(undefined8 *)((long)puVar2 + 0x30c) = _DAT_014e7cb0;
        *(undefined8 *)((long)puVar2 + 0x314) = uVar12;
        uVar12 = _UNK_014e1808;
        *(undefined8 *)((long)puVar2 + 0x31c) = _DAT_014e1800;
        *(undefined8 *)((long)puVar2 + 0x324) = uVar12;
        uVar12 = _UNK_014e36c8;
        *(undefined8 *)((long)puVar2 + 0x32c) = _DAT_014e36c0;
        *(undefined8 *)((long)puVar2 + 0x334) = uVar12;
        uVar12 = _UNK_014e1268;
        *(undefined8 *)((long)puVar2 + 0x33c) = _DAT_014e1260;
        *(undefined8 *)((long)puVar2 + 0x344) = uVar12;
        uVar12 = _UNK_014e67b8;
        *(undefined8 *)((long)puVar2 + 0x34c) = _DAT_014e67b0;
        *(undefined8 *)((long)puVar2 + 0x354) = uVar12;
        uVar12 = _UNK_014e7758;
        *(undefined8 *)((long)puVar2 + 0x35c) = _DAT_014e7750;
        *(undefined8 *)((long)puVar2 + 0x364) = uVar12;
        uVar12 = _UNK_014e4728;
        *(undefined8 *)((long)puVar2 + 0x36c) = _DAT_014e4720;
        *(undefined8 *)((long)puVar2 + 0x374) = uVar12;
        uVar12 = _UNK_014eae48;
        *(undefined8 *)((long)puVar2 + 0x37c) = _DAT_014eae40;
        *(undefined8 *)((long)puVar2 + 900) = uVar12;
        uVar12 = _UNK_014e5778;
        *(undefined8 *)((long)puVar2 + 0x38c) = _DAT_014e5770;
        *(undefined8 *)((long)puVar2 + 0x394) = uVar12;
        uVar12 = _UNK_014e9c08;
        *(undefined8 *)((long)puVar2 + 0x39c) = _DAT_014e9c00;
        *(undefined8 *)((long)puVar2 + 0x3a4) = uVar12;
        uVar12 = _UNK_014e2788;
        *(undefined8 *)((long)puVar2 + 0x3ac) = _DAT_014e2780;
        *(undefined8 *)((long)puVar2 + 0x3b4) = uVar12;
        uVar12 = _UNK_014e9c18;
        *(undefined8 *)((long)puVar2 + 0x3bc) = _DAT_014e9c10;
        *(undefined8 *)((long)puVar2 + 0x3c4) = uVar12;
        uVar12 = _UNK_014ea078;
        *(undefined8 *)((long)puVar2 + 0x3cc) = _DAT_014ea070;
        *(undefined8 *)((long)puVar2 + 0x3d4) = uVar12;
        uVar12 = _UNK_014e41c8;
        *(undefined8 *)((long)puVar2 + 0x3dc) = _DAT_014e41c0;
        *(undefined8 *)((long)puVar2 + 0x3e4) = uVar12;
        uVar12 = _UNK_014e21c8;
        *(undefined8 *)((long)puVar2 + 0x3ec) = _DAT_014e21c0;
        *(undefined8 *)((long)puVar2 + 0x3f4) = uVar12;
        uVar7 = _UNK_014e915c;
        uVar6 = _UNK_014e9158;
        uVar3 = _UNK_014e9154;
        *(undefined4 *)((long)puVar2 + 0x3fc) = _DAT_014e9150;
        *(undefined4 *)(puVar2 + 0x80) = uVar3;
        *(undefined4 *)((long)puVar2 + 0x404) = uVar6;
        *(undefined4 *)(puVar2 + 0x81) = uVar7;
        uVar14 = 0x100;
        lVar19 = 0;
        do {
          iVar8 = (**(code **)(*param_2 + 0x18))(param_2,uVar14 & 0xffffffff);
          uVar3 = *(undefined4 *)(lVar15 + lVar19 * 4);
          lVar10 = (long)(iVar8 + (int)lVar19);
          *(undefined4 *)(lVar15 + lVar19 * 4) = *(undefined4 *)(lVar15 + lVar10 * 4);
          *(undefined4 *)(lVar15 + lVar10 * 4) = uVar3;
          *(undefined4 *)(lVar15 + 0x400 + lVar19 * 4) = *(undefined4 *)(lVar15 + lVar19 * 4);
          lVar19 = lVar19 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        puVar17 = (undefined8 *)((long)puVar2 + 0x80c);
        lVar10 = (long)puVar2 - (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
        func_0x0eee2f00(lVar10);
        lVar15 = *(long *)(param_1 + 2);
        lVar19 = *(long *)(param_1 + 6);
        *(long *)(param_1 + 2) = lVar10;
        *(undefined8 **)(param_1 + 4) = puVar17;
        *(long *)(param_1 + 6) = lVar11;
        if (lVar15 != 0) {
          FUN_0412a280(lVar15,lVar19 - lVar15);
        }
      }
      *(undefined8 **)(param_1 + 4) = puVar17;
      iVar18 = iVar18 + 1;
      uVar13 = *param_1;
      fVar23 = 0.0;
    } while (iVar18 < (int)uVar13);
    if (0 < (int)uVar13) {
      uVar9 = uVar13 & 3;
      fVar22 = _DAT_011983f0;
      if (3 < uVar13) {
        uVar13 = uVar13 & 0x7ffffffc;
        do {
          fVar20 = fVar22 * _DAT_011986e0 * _DAT_011986e0;
          fVar21 = fVar20 * _DAT_011986e0;
          fVar23 = _DAT_011983f0 / fVar21 +
                   _DAT_011983f0 / fVar20 +
                   _DAT_011983f0 / (fVar22 * _DAT_011986e0) + _DAT_011983f0 / fVar22 + fVar23;
          fVar22 = fVar21 * _DAT_011986e0;
          uVar13 = uVar13 - 4;
        } while (uVar13 != 0);
      }
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        fVar23 = fVar23 + _DAT_011983f0 / fVar22;
        fVar22 = fVar22 * _DAT_011986e0;
      }
    }
  }
  param_1[8] = (uint)(_DAT_011983f0 / fVar23);
  return;
}


