/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd341b00 (ELF vaddr 0xd241b00)
 * Label: callee-of:0xc752060
 * Body:  [[0d341b00, 0d341bcb] [0d341bd0, 0d34208a] [0d342090, 0d34273f] [0d342757, 0d34276b]]
 * Ghidra: FUN_0d341b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d341b00(uint *param_1,long *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint *puStack_88;
  
  lVar11 = *(long *)(param_1 + 2);
  *(long *)(param_1 + 4) = lVar11;
  uVar7 = *param_1;
  lVar13 = *(long *)(param_1 + 6) - lVar11;
  if ((ulong)((lVar13 >> 3) * 0x2f71aaff02f71ab) < (ulong)(long)(int)uVar7) {
    if ((int)uVar7 < 0) {
LAB_0d342734:
      func_0x052bdad0();
LAB_0d342739:
      uVar6 = func_0x04882eb0();
      *(long *)(puStack_88 + 4) = lVar13;
      func_0x0eee2d70(uVar6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar9 = (long)(int)uVar7 * 0x818;
    lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))();
    if (lVar5 == 0) {
      func_0x0eec74c0(lVar9,0);
    }
    *(long *)(param_1 + 2) = lVar5;
    *(long *)(param_1 + 4) = lVar5;
    *(long *)(param_1 + 6) = lVar5 + lVar9;
    if (lVar11 != 0) {
      func_0x0412a280(lVar11,lVar13);
      uVar7 = *param_1;
    }
  }
  fVar19 = 0.0;
  if (0 < (int)uVar7) {
    pfVar14 = *(float **)(param_1 + 4);
    iVar10 = 0;
    do {
      if (pfVar14 < *(float **)(param_1 + 6)) {
        memset(pfVar14,0,0x815);
        fVar19 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar19 = fVar19 * _DAT_01198344;
        fVar16 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar17 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        *(undefined8 *)(pfVar14 + 0x203) = param_3;
        *(undefined1 *)(pfVar14 + 0x205) = param_4;
        *pfVar14 = fVar19;
        *(ulong *)(pfVar14 + 1) = CONCAT44(fVar17 * _UNK_014e4d64,fVar16 * _DAT_014e4d60);
        uVar6 = _UNK_014e31a8;
        *(undefined8 *)(pfVar14 + 3) = _DAT_014e31a0;
        *(undefined8 *)(pfVar14 + 5) = uVar6;
        uVar6 = _UNK_014e20a8;
        *(undefined8 *)(pfVar14 + 7) = _DAT_014e20a0;
        *(undefined8 *)(pfVar14 + 9) = uVar6;
        uVar6 = _UNK_014e1d28;
        *(undefined8 *)(pfVar14 + 0xb) = _DAT_014e1d20;
        *(undefined8 *)(pfVar14 + 0xd) = uVar6;
        uVar6 = _UNK_014e1d38;
        *(undefined8 *)(pfVar14 + 0xf) = _DAT_014e1d30;
        *(undefined8 *)(pfVar14 + 0x11) = uVar6;
        uVar6 = _UNK_014e21a8;
        *(undefined8 *)(pfVar14 + 0x13) = _DAT_014e21a0;
        *(undefined8 *)(pfVar14 + 0x15) = uVar6;
        uVar6 = _UNK_014e86f8;
        *(undefined8 *)(pfVar14 + 0x17) = _DAT_014e86f0;
        *(undefined8 *)(pfVar14 + 0x19) = uVar6;
        uVar6 = _UNK_014e1248;
        *(undefined8 *)(pfVar14 + 0x1b) = _DAT_014e1240;
        *(undefined8 *)(pfVar14 + 0x1d) = uVar6;
        uVar6 = _UNK_014e52c8;
        *(undefined8 *)(pfVar14 + 0x1f) = _DAT_014e52c0;
        *(undefined8 *)(pfVar14 + 0x21) = uVar6;
        uVar6 = _UNK_014e17d8;
        *(undefined8 *)(pfVar14 + 0x23) = _DAT_014e17d0;
        *(undefined8 *)(pfVar14 + 0x25) = uVar6;
        uVar6 = _UNK_014e1258;
        *(undefined8 *)(pfVar14 + 0x27) = _DAT_014e1250;
        *(undefined8 *)(pfVar14 + 0x29) = uVar6;
        uVar6 = _UNK_014e0de8;
        *(undefined8 *)(pfVar14 + 0x2b) = _DAT_014e0de0;
        *(undefined8 *)(pfVar14 + 0x2d) = uVar6;
        uVar6 = _UNK_014e52d8;
        *(undefined8 *)(pfVar14 + 0x2f) = _DAT_014e52d0;
        *(undefined8 *)(pfVar14 + 0x31) = uVar6;
        uVar6 = _UNK_014e3c48;
        *(undefined8 *)(pfVar14 + 0x33) = _DAT_014e3c40;
        *(undefined8 *)(pfVar14 + 0x35) = uVar6;
        uVar6 = _UNK_014e9bf8;
        *(undefined8 *)(pfVar14 + 0x37) = _DAT_014e9bf0;
        *(undefined8 *)(pfVar14 + 0x39) = uVar6;
        uVar6 = _UNK_014e46f8;
        *(undefined8 *)(pfVar14 + 0x3b) = _DAT_014e46f0;
        *(undefined8 *)(pfVar14 + 0x3d) = uVar6;
        uVar6 = _UNK_014e7c98;
        *(undefined8 *)(pfVar14 + 0x3f) = _DAT_014e7c90;
        *(undefined8 *)(pfVar14 + 0x41) = uVar6;
        uVar6 = _UNK_014e17e8;
        *(undefined8 *)(pfVar14 + 0x43) = _DAT_014e17e0;
        *(undefined8 *)(pfVar14 + 0x45) = uVar6;
        uVar6 = _UNK_014e4708;
        *(undefined8 *)(pfVar14 + 0x47) = _DAT_014e4700;
        *(undefined8 *)(pfVar14 + 0x49) = uVar6;
        uVar6 = _UNK_014e17f8;
        *(undefined8 *)(pfVar14 + 0x4b) = _DAT_014e17f0;
        *(undefined8 *)(pfVar14 + 0x4d) = uVar6;
        uVar6 = _UNK_014e71d8;
        *(undefined8 *)(pfVar14 + 0x4f) = _DAT_014e71d0;
        *(undefined8 *)(pfVar14 + 0x51) = uVar6;
        uVar6 = _UNK_014e4198;
        *(undefined8 *)(pfVar14 + 0x53) = _DAT_014e4190;
        *(undefined8 *)(pfVar14 + 0x55) = uVar6;
        uVar6 = _UNK_014e5c58;
        *(undefined8 *)(pfVar14 + 0x57) = _DAT_014e5c50;
        *(undefined8 *)(pfVar14 + 0x59) = uVar6;
        uVar6 = _UNK_014ea058;
        *(undefined8 *)(pfVar14 + 0x5b) = _DAT_014ea050;
        *(undefined8 *)(pfVar14 + 0x5d) = uVar6;
        uVar6 = _UNK_014e2778;
        *(undefined8 *)(pfVar14 + 0x5f) = _DAT_014e2770;
        *(undefined8 *)(pfVar14 + 0x61) = uVar6;
        uVar6 = _UNK_014e5c68;
        *(undefined8 *)(pfVar14 + 99) = _DAT_014e5c60;
        *(undefined8 *)(pfVar14 + 0x65) = uVar6;
        uVar6 = _UNK_014ea068;
        *(undefined8 *)(pfVar14 + 0x67) = _DAT_014ea060;
        *(undefined8 *)(pfVar14 + 0x69) = uVar6;
        uVar6 = _UNK_014eae28;
        *(undefined8 *)(pfVar14 + 0x6b) = _DAT_014eae20;
        *(undefined8 *)(pfVar14 + 0x6d) = uVar6;
        uVar6 = _UNK_014e36b8;
        *(undefined8 *)(pfVar14 + 0x6f) = _DAT_014e36b0;
        *(undefined8 *)(pfVar14 + 0x71) = uVar6;
        uVar6 = _UNK_014e41a8;
        *(undefined8 *)(pfVar14 + 0x73) = _DAT_014e41a0;
        *(undefined8 *)(pfVar14 + 0x75) = uVar6;
        uVar6 = _UNK_014e8708;
        *(undefined8 *)(pfVar14 + 0x77) = _DAT_014e8700;
        *(undefined8 *)(pfVar14 + 0x79) = uVar6;
        uVar6 = _UNK_014e9148;
        *(undefined8 *)(pfVar14 + 0x7b) = _DAT_014e9140;
        *(undefined8 *)(pfVar14 + 0x7d) = uVar6;
        uVar6 = _UNK_014e2d38;
        *(undefined8 *)(pfVar14 + 0x7f) = _DAT_014e2d30;
        *(undefined8 *)(pfVar14 + 0x81) = uVar6;
        uVar6 = _UNK_014e41b8;
        *(undefined8 *)(pfVar14 + 0x83) = _DAT_014e41b0;
        *(undefined8 *)(pfVar14 + 0x85) = uVar6;
        uVar6 = _UNK_014e7ca8;
        *(undefined8 *)(pfVar14 + 0x87) = _DAT_014e7ca0;
        *(undefined8 *)(pfVar14 + 0x89) = uVar6;
        uVar6 = _UNK_014e5c78;
        *(undefined8 *)(pfVar14 + 0x8b) = _DAT_014e5c70;
        *(undefined8 *)(pfVar14 + 0x8d) = uVar6;
        uVar6 = _UNK_014e1d48;
        *(undefined8 *)(pfVar14 + 0x8f) = _DAT_014e1d40;
        *(undefined8 *)(pfVar14 + 0x91) = uVar6;
        uVar6 = _UNK_014e2d48;
        *(undefined8 *)(pfVar14 + 0x93) = _DAT_014e2d40;
        *(undefined8 *)(pfVar14 + 0x95) = uVar6;
        uVar6 = _UNK_014e3c58;
        *(undefined8 *)(pfVar14 + 0x97) = _DAT_014e3c50;
        *(undefined8 *)(pfVar14 + 0x99) = uVar6;
        uVar6 = _UNK_014e21b8;
        *(undefined8 *)(pfVar14 + 0x9b) = _DAT_014e21b0;
        *(undefined8 *)(pfVar14 + 0x9d) = uVar6;
        uVar6 = _UNK_014e52e8;
        *(undefined8 *)(pfVar14 + 0x9f) = _DAT_014e52e0;
        *(undefined8 *)(pfVar14 + 0xa1) = uVar6;
        uVar6 = _UNK_014e1d58;
        *(undefined8 *)(pfVar14 + 0xa3) = _DAT_014e1d50;
        *(undefined8 *)(pfVar14 + 0xa5) = uVar6;
        uVar6 = _UNK_014e6228;
        *(undefined8 *)(pfVar14 + 0xa7) = _DAT_014e6220;
        *(undefined8 *)(pfVar14 + 0xa9) = uVar6;
        uVar6 = _UNK_014e2d58;
        *(undefined8 *)(pfVar14 + 0xab) = _DAT_014e2d50;
        *(undefined8 *)(pfVar14 + 0xad) = uVar6;
        uVar6 = _UNK_014e4718;
        *(undefined8 *)(pfVar14 + 0xaf) = _DAT_014e4710;
        *(undefined8 *)(pfVar14 + 0xb1) = uVar6;
        uVar6 = _UNK_014e6798;
        *(undefined8 *)(pfVar14 + 0xb3) = _DAT_014e6790;
        *(undefined8 *)(pfVar14 + 0xb5) = uVar6;
        uVar6 = _UNK_014e2d68;
        *(undefined8 *)(pfVar14 + 0xb7) = _DAT_014e2d60;
        *(undefined8 *)(pfVar14 + 0xb9) = uVar6;
        uVar6 = _UNK_014e67a8;
        *(undefined8 *)(pfVar14 + 0xbb) = _DAT_014e67a0;
        *(undefined8 *)(pfVar14 + 0xbd) = uVar6;
        uVar6 = _UNK_014eae38;
        *(undefined8 *)(pfVar14 + 0xbf) = _DAT_014eae30;
        *(undefined8 *)(pfVar14 + 0xc1) = uVar6;
        uVar6 = _UNK_014e7cb8;
        *(undefined8 *)(pfVar14 + 0xc3) = _DAT_014e7cb0;
        *(undefined8 *)(pfVar14 + 0xc5) = uVar6;
        uVar6 = _UNK_014e1808;
        *(undefined8 *)(pfVar14 + 199) = _DAT_014e1800;
        *(undefined8 *)(pfVar14 + 0xc9) = uVar6;
        uVar6 = _UNK_014e36c8;
        *(undefined8 *)(pfVar14 + 0xcb) = _DAT_014e36c0;
        *(undefined8 *)(pfVar14 + 0xcd) = uVar6;
        uVar6 = _UNK_014e1268;
        *(undefined8 *)(pfVar14 + 0xcf) = _DAT_014e1260;
        *(undefined8 *)(pfVar14 + 0xd1) = uVar6;
        uVar6 = _UNK_014e67b8;
        *(undefined8 *)(pfVar14 + 0xd3) = _DAT_014e67b0;
        *(undefined8 *)(pfVar14 + 0xd5) = uVar6;
        uVar6 = _UNK_014e7758;
        *(undefined8 *)(pfVar14 + 0xd7) = _DAT_014e7750;
        *(undefined8 *)(pfVar14 + 0xd9) = uVar6;
        uVar6 = _UNK_014e4728;
        *(undefined8 *)(pfVar14 + 0xdb) = _DAT_014e4720;
        *(undefined8 *)(pfVar14 + 0xdd) = uVar6;
        uVar6 = _UNK_014eae48;
        *(undefined8 *)(pfVar14 + 0xdf) = _DAT_014eae40;
        *(undefined8 *)(pfVar14 + 0xe1) = uVar6;
        uVar6 = _UNK_014e5778;
        *(undefined8 *)(pfVar14 + 0xe3) = _DAT_014e5770;
        *(undefined8 *)(pfVar14 + 0xe5) = uVar6;
        uVar6 = _UNK_014e9c08;
        *(undefined8 *)(pfVar14 + 0xe7) = _DAT_014e9c00;
        *(undefined8 *)(pfVar14 + 0xe9) = uVar6;
        uVar6 = _UNK_014e2788;
        *(undefined8 *)(pfVar14 + 0xeb) = _DAT_014e2780;
        *(undefined8 *)(pfVar14 + 0xed) = uVar6;
        uVar6 = _UNK_014e9c18;
        *(undefined8 *)(pfVar14 + 0xef) = _DAT_014e9c10;
        *(undefined8 *)(pfVar14 + 0xf1) = uVar6;
        uVar6 = _UNK_014ea078;
        *(undefined8 *)(pfVar14 + 0xf3) = _DAT_014ea070;
        *(undefined8 *)(pfVar14 + 0xf5) = uVar6;
        uVar6 = _UNK_014e41c8;
        *(undefined8 *)(pfVar14 + 0xf7) = _DAT_014e41c0;
        *(undefined8 *)(pfVar14 + 0xf9) = uVar6;
        uVar6 = _UNK_014e21c8;
        *(undefined8 *)(pfVar14 + 0xfb) = _DAT_014e21c0;
        *(undefined8 *)(pfVar14 + 0xfd) = uVar6;
        fVar17 = _UNK_014e915c;
        fVar16 = _UNK_014e9158;
        fVar19 = _UNK_014e9154;
        pfVar14[0xff] = _DAT_014e9150;
        pfVar14[0x100] = fVar19;
        pfVar14[0x101] = fVar16;
        pfVar14[0x102] = fVar17;
        lVar11 = 0x100;
        lVar13 = 0;
        do {
          iVar3 = (**(code **)(*param_2 + 0x18))(param_2);
          fVar19 = pfVar14[lVar13 + 3];
          lVar5 = (long)(iVar3 + (int)lVar13);
          pfVar14[lVar13 + 3] = pfVar14[lVar5 + 3];
          pfVar14[lVar5 + 3] = fVar19;
          pfVar14[lVar13 + 0x103] = pfVar14[lVar13 + 3];
          lVar13 = lVar13 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        pfVar14 = pfVar14 + 0x206;
        *(float **)(param_1 + 4) = pfVar14;
      }
      else {
        lVar13 = (long)pfVar14 - *(long *)(param_1 + 2);
        uVar8 = (lVar13 >> 3) * 0x2f71aaff02f71ab + 1;
        puStack_88 = param_1;
        if (0x1fa11caa01fa11 < uVar8) goto LAB_0d342734;
        lVar11 = (long)*(float **)(param_1 + 6) - *(long *)(param_1 + 2) >> 3;
        uVar15 = lVar11 * 0x5ee355fe05ee356;
        if (uVar8 < uVar15) {
          uVar8 = uVar15;
        }
        if (0xfd08e5500fd07 < (ulong)(lVar11 * 0x2f71aaff02f71ab)) {
          uVar8 = 0x1fa11caa01fa11;
        }
        if (uVar8 == 0) {
LAB_0d342128:
          lVar11 = 0;
        }
        else {
          if (0x1fa11caa01fa11 < uVar8) goto LAB_0d342739;
          lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8 * 0x818);
          if (lVar11 == 0) {
            func_0x0eec74c0(uVar8 * 0x818,0);
            goto LAB_0d342128;
          }
        }
        pfVar12 = (float *)(lVar11 + lVar13);
        memset(pfVar12,0,0x815);
        fVar19 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar19 = fVar19 * _DAT_01198344;
        fVar16 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        fVar17 = (float)(**(code **)(*param_2 + 0x30))(param_2);
        *(undefined8 *)(pfVar12 + 0x203) = param_3;
        *(undefined1 *)(pfVar12 + 0x205) = param_4;
        *pfVar12 = fVar19;
        *(ulong *)(pfVar12 + 1) = CONCAT44(fVar17 * _UNK_014e4d64,fVar16 * _DAT_014e4d60);
        uVar6 = _UNK_014e31a8;
        lVar13 = lVar11 + 0xc + lVar13;
        *(undefined8 *)(pfVar12 + 3) = _DAT_014e31a0;
        *(undefined8 *)(pfVar12 + 5) = uVar6;
        uVar6 = _UNK_014e20a8;
        *(undefined8 *)(pfVar12 + 7) = _DAT_014e20a0;
        *(undefined8 *)(pfVar12 + 9) = uVar6;
        uVar6 = _UNK_014e1d28;
        *(undefined8 *)(pfVar12 + 0xb) = _DAT_014e1d20;
        *(undefined8 *)(pfVar12 + 0xd) = uVar6;
        uVar6 = _UNK_014e1d38;
        *(undefined8 *)(pfVar12 + 0xf) = _DAT_014e1d30;
        *(undefined8 *)(pfVar12 + 0x11) = uVar6;
        uVar6 = _UNK_014e21a8;
        *(undefined8 *)(pfVar12 + 0x13) = _DAT_014e21a0;
        *(undefined8 *)(pfVar12 + 0x15) = uVar6;
        uVar6 = _UNK_014e86f8;
        *(undefined8 *)(pfVar12 + 0x17) = _DAT_014e86f0;
        *(undefined8 *)(pfVar12 + 0x19) = uVar6;
        uVar6 = _UNK_014e1248;
        *(undefined8 *)(pfVar12 + 0x1b) = _DAT_014e1240;
        *(undefined8 *)(pfVar12 + 0x1d) = uVar6;
        uVar6 = _UNK_014e52c8;
        *(undefined8 *)(pfVar12 + 0x1f) = _DAT_014e52c0;
        *(undefined8 *)(pfVar12 + 0x21) = uVar6;
        uVar6 = _UNK_014e17d8;
        *(undefined8 *)(pfVar12 + 0x23) = _DAT_014e17d0;
        *(undefined8 *)(pfVar12 + 0x25) = uVar6;
        uVar6 = _UNK_014e1258;
        *(undefined8 *)(pfVar12 + 0x27) = _DAT_014e1250;
        *(undefined8 *)(pfVar12 + 0x29) = uVar6;
        uVar6 = _UNK_014e0de8;
        *(undefined8 *)(pfVar12 + 0x2b) = _DAT_014e0de0;
        *(undefined8 *)(pfVar12 + 0x2d) = uVar6;
        uVar6 = _UNK_014e52d8;
        *(undefined8 *)(pfVar12 + 0x2f) = _DAT_014e52d0;
        *(undefined8 *)(pfVar12 + 0x31) = uVar6;
        uVar6 = _UNK_014e3c48;
        *(undefined8 *)(pfVar12 + 0x33) = _DAT_014e3c40;
        *(undefined8 *)(pfVar12 + 0x35) = uVar6;
        uVar6 = _UNK_014e9bf8;
        *(undefined8 *)(pfVar12 + 0x37) = _DAT_014e9bf0;
        *(undefined8 *)(pfVar12 + 0x39) = uVar6;
        uVar6 = _UNK_014e46f8;
        *(undefined8 *)(pfVar12 + 0x3b) = _DAT_014e46f0;
        *(undefined8 *)(pfVar12 + 0x3d) = uVar6;
        uVar6 = _UNK_014e7c98;
        *(undefined8 *)(pfVar12 + 0x3f) = _DAT_014e7c90;
        *(undefined8 *)(pfVar12 + 0x41) = uVar6;
        uVar6 = _UNK_014e17e8;
        *(undefined8 *)(pfVar12 + 0x43) = _DAT_014e17e0;
        *(undefined8 *)(pfVar12 + 0x45) = uVar6;
        uVar6 = _UNK_014e4708;
        *(undefined8 *)(pfVar12 + 0x47) = _DAT_014e4700;
        *(undefined8 *)(pfVar12 + 0x49) = uVar6;
        uVar6 = _UNK_014e17f8;
        *(undefined8 *)(pfVar12 + 0x4b) = _DAT_014e17f0;
        *(undefined8 *)(pfVar12 + 0x4d) = uVar6;
        uVar6 = _UNK_014e71d8;
        *(undefined8 *)(pfVar12 + 0x4f) = _DAT_014e71d0;
        *(undefined8 *)(pfVar12 + 0x51) = uVar6;
        uVar6 = _UNK_014e4198;
        *(undefined8 *)(pfVar12 + 0x53) = _DAT_014e4190;
        *(undefined8 *)(pfVar12 + 0x55) = uVar6;
        uVar6 = _UNK_014e5c58;
        *(undefined8 *)(pfVar12 + 0x57) = _DAT_014e5c50;
        *(undefined8 *)(pfVar12 + 0x59) = uVar6;
        uVar6 = _UNK_014ea058;
        *(undefined8 *)(pfVar12 + 0x5b) = _DAT_014ea050;
        *(undefined8 *)(pfVar12 + 0x5d) = uVar6;
        uVar6 = _UNK_014e2778;
        *(undefined8 *)(pfVar12 + 0x5f) = _DAT_014e2770;
        *(undefined8 *)(pfVar12 + 0x61) = uVar6;
        uVar6 = _UNK_014e5c68;
        *(undefined8 *)(pfVar12 + 99) = _DAT_014e5c60;
        *(undefined8 *)(pfVar12 + 0x65) = uVar6;
        uVar6 = _UNK_014ea068;
        *(undefined8 *)(pfVar12 + 0x67) = _DAT_014ea060;
        *(undefined8 *)(pfVar12 + 0x69) = uVar6;
        uVar6 = _UNK_014eae28;
        *(undefined8 *)(pfVar12 + 0x6b) = _DAT_014eae20;
        *(undefined8 *)(pfVar12 + 0x6d) = uVar6;
        uVar6 = _UNK_014e36b8;
        *(undefined8 *)(pfVar12 + 0x6f) = _DAT_014e36b0;
        *(undefined8 *)(pfVar12 + 0x71) = uVar6;
        uVar6 = _UNK_014e41a8;
        *(undefined8 *)(pfVar12 + 0x73) = _DAT_014e41a0;
        *(undefined8 *)(pfVar12 + 0x75) = uVar6;
        uVar6 = _UNK_014e8708;
        *(undefined8 *)(pfVar12 + 0x77) = _DAT_014e8700;
        *(undefined8 *)(pfVar12 + 0x79) = uVar6;
        uVar6 = _UNK_014e9148;
        *(undefined8 *)(pfVar12 + 0x7b) = _DAT_014e9140;
        *(undefined8 *)(pfVar12 + 0x7d) = uVar6;
        uVar6 = _UNK_014e2d38;
        *(undefined8 *)(pfVar12 + 0x7f) = _DAT_014e2d30;
        *(undefined8 *)(pfVar12 + 0x81) = uVar6;
        uVar6 = _UNK_014e41b8;
        *(undefined8 *)(pfVar12 + 0x83) = _DAT_014e41b0;
        *(undefined8 *)(pfVar12 + 0x85) = uVar6;
        uVar6 = _UNK_014e7ca8;
        *(undefined8 *)(pfVar12 + 0x87) = _DAT_014e7ca0;
        *(undefined8 *)(pfVar12 + 0x89) = uVar6;
        uVar6 = _UNK_014e5c78;
        *(undefined8 *)(pfVar12 + 0x8b) = _DAT_014e5c70;
        *(undefined8 *)(pfVar12 + 0x8d) = uVar6;
        uVar6 = _UNK_014e1d48;
        *(undefined8 *)(pfVar12 + 0x8f) = _DAT_014e1d40;
        *(undefined8 *)(pfVar12 + 0x91) = uVar6;
        uVar6 = _UNK_014e2d48;
        *(undefined8 *)(pfVar12 + 0x93) = _DAT_014e2d40;
        *(undefined8 *)(pfVar12 + 0x95) = uVar6;
        uVar6 = _UNK_014e3c58;
        *(undefined8 *)(pfVar12 + 0x97) = _DAT_014e3c50;
        *(undefined8 *)(pfVar12 + 0x99) = uVar6;
        uVar6 = _UNK_014e21b8;
        *(undefined8 *)(pfVar12 + 0x9b) = _DAT_014e21b0;
        *(undefined8 *)(pfVar12 + 0x9d) = uVar6;
        uVar6 = _UNK_014e52e8;
        *(undefined8 *)(pfVar12 + 0x9f) = _DAT_014e52e0;
        *(undefined8 *)(pfVar12 + 0xa1) = uVar6;
        uVar6 = _UNK_014e1d58;
        *(undefined8 *)(pfVar12 + 0xa3) = _DAT_014e1d50;
        *(undefined8 *)(pfVar12 + 0xa5) = uVar6;
        uVar6 = _UNK_014e6228;
        *(undefined8 *)(pfVar12 + 0xa7) = _DAT_014e6220;
        *(undefined8 *)(pfVar12 + 0xa9) = uVar6;
        uVar6 = _UNK_014e2d58;
        *(undefined8 *)(pfVar12 + 0xab) = _DAT_014e2d50;
        *(undefined8 *)(pfVar12 + 0xad) = uVar6;
        uVar6 = _UNK_014e4718;
        *(undefined8 *)(pfVar12 + 0xaf) = _DAT_014e4710;
        *(undefined8 *)(pfVar12 + 0xb1) = uVar6;
        uVar6 = _UNK_014e6798;
        *(undefined8 *)(pfVar12 + 0xb3) = _DAT_014e6790;
        *(undefined8 *)(pfVar12 + 0xb5) = uVar6;
        uVar6 = _UNK_014e2d68;
        *(undefined8 *)(pfVar12 + 0xb7) = _DAT_014e2d60;
        *(undefined8 *)(pfVar12 + 0xb9) = uVar6;
        uVar6 = _UNK_014e67a8;
        *(undefined8 *)(pfVar12 + 0xbb) = _DAT_014e67a0;
        *(undefined8 *)(pfVar12 + 0xbd) = uVar6;
        uVar6 = _UNK_014eae38;
        *(undefined8 *)(pfVar12 + 0xbf) = _DAT_014eae30;
        *(undefined8 *)(pfVar12 + 0xc1) = uVar6;
        uVar6 = _UNK_014e7cb8;
        *(undefined8 *)(pfVar12 + 0xc3) = _DAT_014e7cb0;
        *(undefined8 *)(pfVar12 + 0xc5) = uVar6;
        uVar6 = _UNK_014e1808;
        *(undefined8 *)(pfVar12 + 199) = _DAT_014e1800;
        *(undefined8 *)(pfVar12 + 0xc9) = uVar6;
        uVar6 = _UNK_014e36c8;
        *(undefined8 *)(pfVar12 + 0xcb) = _DAT_014e36c0;
        *(undefined8 *)(pfVar12 + 0xcd) = uVar6;
        uVar6 = _UNK_014e1268;
        *(undefined8 *)(pfVar12 + 0xcf) = _DAT_014e1260;
        *(undefined8 *)(pfVar12 + 0xd1) = uVar6;
        uVar6 = _UNK_014e67b8;
        *(undefined8 *)(pfVar12 + 0xd3) = _DAT_014e67b0;
        *(undefined8 *)(pfVar12 + 0xd5) = uVar6;
        uVar6 = _UNK_014e7758;
        *(undefined8 *)(pfVar12 + 0xd7) = _DAT_014e7750;
        *(undefined8 *)(pfVar12 + 0xd9) = uVar6;
        uVar6 = _UNK_014e4728;
        *(undefined8 *)(pfVar12 + 0xdb) = _DAT_014e4720;
        *(undefined8 *)(pfVar12 + 0xdd) = uVar6;
        uVar6 = _UNK_014eae48;
        *(undefined8 *)(pfVar12 + 0xdf) = _DAT_014eae40;
        *(undefined8 *)(pfVar12 + 0xe1) = uVar6;
        uVar6 = _UNK_014e5778;
        *(undefined8 *)(pfVar12 + 0xe3) = _DAT_014e5770;
        *(undefined8 *)(pfVar12 + 0xe5) = uVar6;
        uVar6 = _UNK_014e9c08;
        *(undefined8 *)(pfVar12 + 0xe7) = _DAT_014e9c00;
        *(undefined8 *)(pfVar12 + 0xe9) = uVar6;
        uVar6 = _UNK_014e2788;
        *(undefined8 *)(pfVar12 + 0xeb) = _DAT_014e2780;
        *(undefined8 *)(pfVar12 + 0xed) = uVar6;
        uVar6 = _UNK_014e9c18;
        *(undefined8 *)(pfVar12 + 0xef) = _DAT_014e9c10;
        *(undefined8 *)(pfVar12 + 0xf1) = uVar6;
        uVar6 = _UNK_014ea078;
        *(undefined8 *)(pfVar12 + 0xf3) = _DAT_014ea070;
        *(undefined8 *)(pfVar12 + 0xf5) = uVar6;
        uVar6 = _UNK_014e41c8;
        *(undefined8 *)(pfVar12 + 0xf7) = _DAT_014e41c0;
        *(undefined8 *)(pfVar12 + 0xf9) = uVar6;
        uVar6 = _UNK_014e21c8;
        *(undefined8 *)(pfVar12 + 0xfb) = _DAT_014e21c0;
        *(undefined8 *)(pfVar12 + 0xfd) = uVar6;
        fVar17 = _UNK_014e915c;
        fVar16 = _UNK_014e9158;
        fVar19 = _UNK_014e9154;
        pfVar12[0xff] = _DAT_014e9150;
        pfVar12[0x100] = fVar19;
        pfVar12[0x101] = fVar16;
        pfVar12[0x102] = fVar17;
        uVar15 = 0x100;
        lVar5 = 0;
        do {
          iVar3 = (**(code **)(*param_2 + 0x18))(param_2,uVar15 & 0xffffffff);
          uVar1 = *(undefined4 *)(lVar13 + lVar5 * 4);
          lVar9 = (long)(iVar3 + (int)lVar5);
          *(undefined4 *)(lVar13 + lVar5 * 4) = *(undefined4 *)(lVar13 + lVar9 * 4);
          *(undefined4 *)(lVar13 + lVar9 * 4) = uVar1;
          *(undefined4 *)(lVar13 + 0x400 + lVar5 * 4) = *(undefined4 *)(lVar13 + lVar5 * 4);
          lVar5 = lVar5 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        pfVar14 = pfVar12 + 0x206;
        lVar13 = *(long *)(param_1 + 2);
        lVar5 = (long)pfVar12 - (*(long *)(param_1 + 4) - lVar13);
        func_0x0eee2f00(lVar5,lVar13);
        *(long *)(param_1 + 2) = lVar5;
        *(float **)(param_1 + 4) = pfVar14;
        lVar5 = *(long *)(param_1 + 6);
        *(ulong *)(param_1 + 6) = uVar8 * 0x818 + lVar11;
        if (lVar13 != 0) {
          func_0x0412a280(lVar13,lVar5 - lVar13);
        }
      }
      *(float **)(param_1 + 4) = pfVar14;
      iVar10 = iVar10 + 1;
      uVar7 = *param_1;
      fVar19 = 0.0;
    } while (iVar10 < (int)uVar7);
    if (0 < (int)uVar7) {
      uVar4 = uVar7 & 3;
      fVar16 = _DAT_011983f0;
      if (3 < uVar7) {
        uVar7 = uVar7 & 0x7ffffffc;
        do {
          fVar17 = fVar16 * _DAT_011986e0 * _DAT_011986e0;
          fVar18 = fVar17 * _DAT_011986e0;
          fVar19 = _DAT_011983f0 / fVar18 +
                   _DAT_011983f0 / fVar17 +
                   _DAT_011983f0 / (fVar16 * _DAT_011986e0) + _DAT_011983f0 / fVar16 + fVar19;
          fVar16 = fVar18 * _DAT_011986e0;
          uVar7 = uVar7 - 4;
        } while (uVar7 != 0);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        fVar19 = fVar19 + _DAT_011983f0 / fVar16;
        fVar16 = fVar16 * _DAT_011986e0;
      }
    }
  }
  param_1[8] = (uint)(_DAT_011983f0 / fVar19);
  return;
}


