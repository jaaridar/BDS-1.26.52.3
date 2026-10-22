/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412c3f0 (ELF vaddr 0x402c3f0)
 * Label: callee-of:0xc967b50
 * Body:  [[0412c3f0, 0412c4fb] [0412c500, 0412c536] [0412c540, 0412d1b8]]
 * Ghidra: FUN_0412c3f0
 */


ulong FUN_0412c3f0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  
  if (param_1 < 0xd4) {
    uVar2 = 0x30;
    puVar7 = (uint *)&UNK_014ed360;
    do {
      uVar8 = uVar2 >> 1;
      uVar2 = ~uVar8 + uVar2;
      if (param_1 <= puVar7[uVar8]) {
        uVar2 = uVar8;
      }
      puVar9 = puVar7 + uVar8 + 1;
      if (param_1 <= puVar7[uVar8]) {
        puVar9 = puVar7;
      }
      puVar7 = puVar9;
    } while (uVar2 != 0);
    return (ulong)*puVar9;
  }
  if (0xffffffffffffffc5 < param_1) {
    uVar5 = func_0x041086b0(0x10);
    func_0x0412d1c0(uVar5,&UNK_014443c1);
    uVar6 = FUN_041088a0(uVar5,&UNK_0eeeca10,&UNK_0412bd50);
    func_0x04108780(uVar5);
    func_0x0eee2d70(uVar6);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar8 = param_1 / 0xd2;
  uVar2 = 0x30;
  puVar10 = &UNK_014ed420;
  do {
    uVar11 = uVar2 >> 1;
    uVar2 = ~uVar11 + uVar2;
    if (param_1 % 0xd2 <= (ulong)*(uint *)(puVar10 + uVar11 * 4)) {
      uVar2 = uVar11;
    }
    puVar12 = puVar10 + uVar11 * 4 + 4;
    if (param_1 % 0xd2 <= (ulong)*(uint *)(puVar10 + uVar11 * 4)) {
      puVar12 = puVar10;
    }
    puVar10 = puVar12;
  } while (uVar2 != 0);
  lVar13 = (long)(puVar12 + -0x14ed420) >> 2;
  do {
    uVar2 = (ulong)*(uint *)(&UNK_014ed420 + lVar13 * 4) + uVar8 * 0xd2;
    lVar14 = 6;
    do {
      uVar4 = (ulong)*(uint *)(&UNK_014ed35c + lVar14 * 4);
      uVar11 = uVar2;
      if (uVar2 >> 0x20 == 0) {
        uVar11 = uVar2 & 0xffffffff;
      }
      if (uVar11 / uVar4 < uVar4) {
        return uVar2;
      }
      if (uVar2 == (uVar11 / uVar4) * uVar4) goto LAB_0412d140;
      uVar4 = (ulong)*(uint *)(&UNK_014ed360 + lVar14 * 4);
      uVar11 = uVar2;
      if (uVar2 >> 0x20 == 0) {
        uVar11 = uVar2 & 0xffffffff;
      }
      if (uVar11 / uVar4 < uVar4) {
        return uVar2;
      }
      if (uVar2 == (uVar11 / uVar4) * uVar4) goto LAB_0412d140;
      lVar14 = lVar14 + 2;
    } while (lVar14 != 0x30);
    uVar11 = 0x1a3;
    do {
      uVar4 = uVar11 - 0xd0;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar4) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xc6;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xc6) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xc6) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xc4;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xc4) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xc4) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xc0;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xc0) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xc0) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xbe;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xbe) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xbe) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xba;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xba) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xba) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xb4;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xb4) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xb4) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xb2;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xb2) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xb2) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xac;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xac) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xac) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xa8;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xa8) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xa8) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xa6;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xa6) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xa6) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xa2;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0xa2) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0xa2) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x9c;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0x9c) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0x9c) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x96;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0x96) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0x96) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x94;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
        if (uVar3 < uVar11 - 0x94) {
          return uVar2;
        }
      }
      else {
        uVar3 = uVar2 / uVar4;
        if (uVar3 < uVar11 - 0x94) {
          return uVar2;
        }
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x8e;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x8e) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x8a;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x8a) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x88;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x88) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x82;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x82) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x7e;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x7e) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x78;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x78) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x70;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x70) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x6c;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x6c) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x6a;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x6a) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x66;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x66) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 100;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 100) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x60;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x60) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x58;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x58) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x52;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x52) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x4e;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x4e) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x48;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x48) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x46;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x46) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x42;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x42) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x3c;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x3c) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x3a;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x3a) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x34;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x34) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x2e;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x2e) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x2a;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x2a) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x28;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x28) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x24;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x24) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x1e;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x1e) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x1c;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x1c) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x16;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x16) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x12;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x12) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0x10;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0x10) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 0xc;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 0xc) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      uVar4 = uVar11 - 10;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 < uVar11 - 10) {
        return uVar2;
      }
      if (uVar2 == uVar3 * uVar4) break;
      if ((uVar2 | uVar11) >> 0x20 == 0) {
        uVar4 = (uVar2 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar4 = uVar2 / uVar11;
      }
      if (uVar4 < uVar11) {
        return uVar2;
      }
      uVar4 = uVar4 * uVar11;
      uVar11 = uVar11 + 0xd2;
    } while (uVar2 != uVar4);
LAB_0412d140:
    lVar13 = lVar13 + 1;
    bVar15 = lVar13 == 0x30;
    if (bVar15) {
      lVar13 = 0;
    }
    uVar8 = uVar8 + bVar15;
  } while( true );
}


