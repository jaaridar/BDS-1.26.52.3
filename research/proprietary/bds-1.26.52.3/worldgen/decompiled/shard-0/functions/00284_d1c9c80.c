/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c9c80 (ELF vaddr 0xd1c9c80)
 * Label: callee-of:0xd1cf130
 * Body:  [[0d2c9c80, 0d2c9e3b] [0d2c9e40, 0d2c9ff8] [0d2c9ffd, 0d2ca012]]
 * Ghidra: FUN_0d2c9c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d2c9c80(byte *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  lVar13 = param_2[3];
  pbVar1 = (byte *)(lVar13 + 0xa0);
  if (param_1 != pbVar1) {
    if ((*pbVar1 & 1) != 0) {
      func_0x04885070(param_1,*(undefined8 *)(lVar13 + 0xb0),*(undefined8 *)(lVar13 + 0xa8));
      lVar13 = *(long *)(param_1 + 0x48);
      lVar17 = *(long *)(param_1 + 0x58);
      goto LAB_0d2c9d04;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar13 + 0xb0);
    uVar9 = *(undefined8 *)(lVar13 + 0xa8);
    *(undefined8 *)param_1 = *(undefined8 *)pbVar1;
    *(undefined8 *)(param_1 + 8) = uVar9;
  }
  lVar13 = 0;
  lVar17 = 0;
LAB_0d2c9d04:
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
  uVar9 = param_2[1];
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  *(undefined8 *)(param_1 + 0x24) = uVar9;
  uVar3 = *(undefined4 *)(param_2 + 6);
  uVar9 = param_2[5];
  *(undefined8 *)(param_1 + 0x2c) = param_2[2];
  *(undefined8 *)(param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  param_1[0x40] = *(byte *)((long)param_2 + 0x24);
  puVar11 = (undefined4 *)param_2[7];
  puVar12 = (undefined4 *)param_2[8];
  uVar15 = (long)puVar12 - (long)puVar11;
  if ((ulong)(lVar17 - lVar13) < uVar15) {
    if (0xccccccccccccccc < (ulong)(((long)uVar15 >> 2) * -0x3333333333333333)) {
LAB_0d2c9ff2:
      uVar9 = func_0x0d2e06d0();
      func_0x0d2ca020(param_1);
      func_0x0eee2d70(uVar9);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar10 = *(long *)(param_1 + 0x50);
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
    if (lVar8 == 0) {
      func_0x0eec74c0(uVar15,0);
    }
    func_0x0eee2f00(lVar8,lVar13,lVar10 - lVar13);
    *(long *)(param_1 + 0x48) = lVar8;
    *(long *)(param_1 + 0x50) = lVar8 + (lVar10 - lVar13);
    *(ulong *)(param_1 + 0x58) = uVar15 + lVar8;
    if (lVar13 != 0) {
      func_0x0412a280(lVar13,lVar17 - lVar13);
      puVar11 = (undefined4 *)param_2[7];
      puVar12 = (undefined4 *)param_2[8];
    }
  }
  if (puVar11 != puVar12) {
    puVar16 = *(undefined4 **)(param_1 + 0x50);
    do {
      cVar2 = *(char *)(puVar11 + 4);
      uVar3 = *puVar11;
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      if (*(undefined4 **)(param_1 + 0x58) <= puVar16) {
        lVar13 = *(long *)(param_1 + 0x48);
        lVar17 = (long)puVar16 - lVar13;
        uVar15 = (lVar17 >> 2) * -0x3333333333333333 + 1;
        if (uVar15 < 0xccccccccccccccd) {
          lVar10 = (long)*(undefined4 **)(param_1 + 0x58) - lVar13;
          lVar8 = lVar10 >> 2;
          uVar14 = lVar8 * -0x6666666666666666;
          if (uVar14 <= uVar15) {
            uVar14 = uVar15;
          }
          if (0x666666666666665 < (ulong)(lVar8 * -0x3333333333333333)) {
            uVar14 = 0xccccccccccccccc;
          }
          if (uVar14 < 0xccccccccccccccd) {
            lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 0x14);
            if (lVar8 == 0) {
              func_0x0eec74c0(uVar14 * 0x14,0);
            }
            *(undefined4 *)(lVar8 + lVar17) = uVar3;
            *(undefined4 *)(lVar8 + 4 + lVar17) = uVar4;
            *(undefined4 *)(lVar8 + 8 + lVar17) = uVar5;
            *(undefined4 *)(lVar8 + 0xc + lVar17) = uVar6;
            *(bool *)(lVar8 + 0x10 + lVar17) = cVar2 == '\x01';
            puVar16 = (undefined4 *)(lVar8 + 0x14 + lVar17);
            func_0x0eee2f00(lVar8,lVar13,lVar17);
            *(long *)(param_1 + 0x48) = lVar8;
            *(undefined4 **)(param_1 + 0x50) = puVar16;
            *(ulong *)(param_1 + 0x58) = uVar14 * 0x14 + lVar8;
            if (lVar13 != 0) {
              func_0x0412a280(lVar13,lVar10);
            }
            goto LAB_0d2c9e5a;
          }
        }
        else {
          func_0x0d2e06d0();
        }
        FUN_04882eb0();
        goto LAB_0d2c9ff2;
      }
      *puVar16 = uVar3;
      puVar16[1] = uVar4;
      puVar16[2] = uVar5;
      puVar16[3] = uVar6;
      *(bool *)(puVar16 + 4) = cVar2 == '\x01';
      puVar16 = puVar16 + 5;
LAB_0d2c9e5a:
      *(undefined4 **)(param_1 + 0x50) = puVar16;
      puVar11 = puVar11 + 5;
    } while (puVar11 != puVar12);
  }
  return;
}


