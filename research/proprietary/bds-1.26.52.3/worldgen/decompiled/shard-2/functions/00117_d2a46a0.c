/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3a46a0 (ELF vaddr 0xd2a46a0)
 * Label: FlatWorldGenerator::vslot15
 * Body:  [[0d3a46a0, 0d3a49d9] [0d3a49e0, 0d3a4b02] [0d3a4b10, 0d3a4b51] [0d3a4b60, 0d3a4d67]]
 * Ghidra: wg_FlatWorldGenerator__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FlatWorldGenerator__vslot15(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined4 uStack_18c;
  undefined1 auStack_188 [24];
  long lStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  if (*(char *)(param_1 + 0x150) == '\x01') {
    if ((DAT_0f71ff48 == '\0') && (iVar5 = func_0x04108328(&DAT_0f71ff48), iVar5 != 0)) {
      auStack_158._8_8_ = _DAT_014e1bb0;
      auStack_158._0_8_ = 0xffffffffffffffff;
      auStack_148[8] = 0;
      auStack_148._0_8_ = _UNK_014e1bb8;
      uStack_138 = 0xffffffff00000000;
      uStack_130 = _DAT_014e1bb0;
      uStack_128 = _UNK_014e1bb8;
      uStack_120 = 0;
      uStack_118 = 0xffffffff00000001;
      uStack_110 = _DAT_014e6630;
      uStack_10c = _UNK_014e6634;
      uStack_108 = _UNK_014e6638;
      uStack_104 = _UNK_014e663c;
      uStack_100 = 0;
      uStack_f8 = 0xffffffff;
      uStack_f0 = _DAT_014e1bb0;
      uStack_e8 = _UNK_014e1bb8;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = _DAT_014e1bb0;
      uStack_c8 = _UNK_014e1bb8;
      uStack_c0 = 1;
      uStack_b8 = 1;
      uStack_b0 = _DAT_014e6630;
      uStack_ac = _UNK_014e6634;
      uStack_a8 = _UNK_014e6638;
      uStack_a4 = _UNK_014e663c;
      uStack_a0 = 0;
      uStack_98 = 0x1ffffffff;
      uStack_90 = _DAT_014eb1f0;
      uStack_88 = _UNK_014eb1f8;
      uStack_80 = 0;
      uStack_78 = 0x100000000;
      uStack_70 = _DAT_014eb1f0;
      uStack_68 = _UNK_014eb1f8;
      uStack_60 = 0;
      uStack_58 = 0x100000001;
      uStack_50 = _DAT_014e0dd0;
      uStack_48 = _UNK_014e0dd8;
      uStack_40 = 0;
      func_0x0d3c59d0(auStack_158);
      __cxa_atexit(&UNK_0d3c6160,&DAT_0f71ff20,0xf53dab8);
      FUN_0410844d(&DAT_0f71ff48);
    }
    if (_DAT_0f71ff28 != 0) {
      uVar6 = (long)*(int *)(param_2 + 0x50) + 0x9e3779b9;
      uVar6 = (long)*(int *)(param_2 + 0x54) + 0x9e3779b9 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6;
      uVar7 = _DAT_0f71ff28 - (_DAT_0f71ff28 >> 1 & 0x5555555555555555);
      uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
      uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar7 >> 0x38 < 2) {
        uVar12 = _DAT_0f71ff28 - 1 & uVar6;
      }
      else {
        uVar12 = uVar6;
        if (_DAT_0f71ff28 <= uVar6) {
          uVar12 = uVar6 % _DAT_0f71ff28;
        }
      }
      plVar14 = *(long **)(_DAT_0f71ff20 + uVar12 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if ((byte)(uVar7 >> 0x38) < 2) {
          do {
            if (uVar6 == plVar14[1]) {
              if (plVar14[2] == *(long *)(param_2 + 0x50)) goto LAB_0d3a4a08;
            }
            else if ((plVar14[1] & _DAT_0f71ff28 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar7 = plVar14[1];
            if (uVar6 == uVar7) {
              if (plVar14[2] == *(long *)(param_2 + 0x50)) goto LAB_0d3a4a08;
            }
            else {
              if (_DAT_0f71ff28 <= uVar7) {
                if ((uVar7 | _DAT_0f71ff28) >> 0x20 == 0) {
                  uVar7 = (uVar7 & 0xffffffff) % (_DAT_0f71ff28 & 0xffffffff);
                }
                else {
                  uVar7 = uVar7 % _DAT_0f71ff28;
                }
              }
              if (uVar7 != uVar12) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
  }
  else {
    func_0x0cae2040(param_2,param_1 + 0x128,0);
  }
LAB_0d3a479e:
  func_0x0cafad60(param_2,0);
  if (*(char *)(param_2 + 0x110b) == '\x01') {
    func_0x0cada270(param_2 + 0x120);
  }
  else {
    auVar16 = ZEXT416(*(uint *)(*(long *)(param_1 + 0x158) + 0x168));
    auVar16 = pshuflw(auVar16,auVar16,0);
    uVar15 = auVar16._0_4_;
    *(undefined4 *)(param_2 + 0x120) = uVar15;
    *(undefined4 *)(param_2 + 0x124) = uVar15;
    *(undefined4 *)(param_2 + 0x128) = uVar15;
    *(undefined4 *)(param_2 + 300) = uVar15;
    *(undefined4 *)(param_2 + 0x130) = uVar15;
    *(undefined4 *)(param_2 + 0x134) = uVar15;
    *(undefined4 *)(param_2 + 0x138) = uVar15;
    *(undefined4 *)(param_2 + 0x13c) = uVar15;
    *(undefined4 *)(param_2 + 0x140) = uVar15;
    *(undefined4 *)(param_2 + 0x144) = uVar15;
    *(undefined4 *)(param_2 + 0x148) = uVar15;
    *(undefined4 *)(param_2 + 0x14c) = uVar15;
    *(undefined4 *)(param_2 + 0x150) = uVar15;
    *(undefined4 *)(param_2 + 0x154) = uVar15;
    *(undefined4 *)(param_2 + 0x158) = uVar15;
    *(undefined4 *)(param_2 + 0x15c) = uVar15;
    *(undefined4 *)(param_2 + 0x160) = uVar15;
    *(undefined4 *)(param_2 + 0x164) = uVar15;
    *(undefined4 *)(param_2 + 0x168) = uVar15;
    *(undefined4 *)(param_2 + 0x16c) = uVar15;
    *(undefined4 *)(param_2 + 0x170) = uVar15;
    *(undefined4 *)(param_2 + 0x174) = uVar15;
    *(undefined4 *)(param_2 + 0x178) = uVar15;
    *(undefined4 *)(param_2 + 0x17c) = uVar15;
    *(undefined4 *)(param_2 + 0x180) = uVar15;
    *(undefined4 *)(param_2 + 0x184) = uVar15;
    *(undefined4 *)(param_2 + 0x188) = uVar15;
    *(undefined4 *)(param_2 + 0x18c) = uVar15;
    *(undefined4 *)(param_2 + 400) = uVar15;
    *(undefined4 *)(param_2 + 0x194) = uVar15;
    *(undefined4 *)(param_2 + 0x198) = uVar15;
    *(undefined4 *)(param_2 + 0x19c) = uVar15;
    *(undefined4 *)(param_2 + 0x1a0) = uVar15;
    *(undefined4 *)(param_2 + 0x1a4) = uVar15;
    *(undefined4 *)(param_2 + 0x1a8) = uVar15;
    *(undefined4 *)(param_2 + 0x1ac) = uVar15;
    *(undefined4 *)(param_2 + 0x1b0) = uVar15;
    *(undefined4 *)(param_2 + 0x1b4) = uVar15;
    *(undefined4 *)(param_2 + 0x1b8) = uVar15;
    *(undefined4 *)(param_2 + 0x1bc) = uVar15;
    *(undefined4 *)(param_2 + 0x1c0) = uVar15;
    *(undefined4 *)(param_2 + 0x1c4) = uVar15;
    *(undefined4 *)(param_2 + 0x1c8) = uVar15;
    *(undefined4 *)(param_2 + 0x1cc) = uVar15;
    *(undefined4 *)(param_2 + 0x1d0) = uVar15;
    *(undefined4 *)(param_2 + 0x1d4) = uVar15;
    *(undefined4 *)(param_2 + 0x1d8) = uVar15;
    *(undefined4 *)(param_2 + 0x1dc) = uVar15;
    *(undefined4 *)(param_2 + 0x1e0) = uVar15;
    *(undefined4 *)(param_2 + 0x1e4) = uVar15;
    *(undefined4 *)(param_2 + 0x1e8) = uVar15;
    *(undefined4 *)(param_2 + 0x1ec) = uVar15;
    *(undefined4 *)(param_2 + 0x1f0) = uVar15;
    *(undefined4 *)(param_2 + 500) = uVar15;
    *(undefined4 *)(param_2 + 0x1f8) = uVar15;
    *(undefined4 *)(param_2 + 0x1fc) = uVar15;
    *(undefined4 *)(param_2 + 0x200) = uVar15;
    *(undefined4 *)(param_2 + 0x204) = uVar15;
    *(undefined4 *)(param_2 + 0x208) = uVar15;
    *(undefined4 *)(param_2 + 0x20c) = uVar15;
    *(undefined4 *)(param_2 + 0x210) = uVar15;
    *(undefined4 *)(param_2 + 0x214) = uVar15;
    *(undefined4 *)(param_2 + 0x218) = uVar15;
    *(undefined4 *)(param_2 + 0x21c) = uVar15;
    *(undefined4 *)(param_2 + 0x220) = uVar15;
    *(undefined4 *)(param_2 + 0x224) = uVar15;
    *(undefined4 *)(param_2 + 0x228) = uVar15;
    *(undefined4 *)(param_2 + 0x22c) = uVar15;
    *(undefined4 *)(param_2 + 0x230) = uVar15;
    *(undefined4 *)(param_2 + 0x234) = uVar15;
    *(undefined4 *)(param_2 + 0x238) = uVar15;
    *(undefined4 *)(param_2 + 0x23c) = uVar15;
    *(undefined4 *)(param_2 + 0x240) = uVar15;
    *(undefined4 *)(param_2 + 0x244) = uVar15;
    *(undefined4 *)(param_2 + 0x248) = uVar15;
    *(undefined4 *)(param_2 + 0x24c) = uVar15;
    *(undefined4 *)(param_2 + 0x250) = uVar15;
    *(undefined4 *)(param_2 + 0x254) = uVar15;
    *(undefined4 *)(param_2 + 600) = uVar15;
    *(undefined4 *)(param_2 + 0x25c) = uVar15;
    *(undefined4 *)(param_2 + 0x260) = uVar15;
    *(undefined4 *)(param_2 + 0x264) = uVar15;
    *(undefined4 *)(param_2 + 0x268) = uVar15;
    *(undefined4 *)(param_2 + 0x26c) = uVar15;
    *(undefined4 *)(param_2 + 0x270) = uVar15;
    *(undefined4 *)(param_2 + 0x274) = uVar15;
    *(undefined4 *)(param_2 + 0x278) = uVar15;
    *(undefined4 *)(param_2 + 0x27c) = uVar15;
    *(undefined4 *)(param_2 + 0x280) = uVar15;
    *(undefined4 *)(param_2 + 0x284) = uVar15;
    *(undefined4 *)(param_2 + 0x288) = uVar15;
    *(undefined4 *)(param_2 + 0x28c) = uVar15;
    *(undefined4 *)(param_2 + 0x290) = uVar15;
    *(undefined4 *)(param_2 + 0x294) = uVar15;
    *(undefined4 *)(param_2 + 0x298) = uVar15;
    *(undefined4 *)(param_2 + 0x29c) = uVar15;
    *(undefined4 *)(param_2 + 0x2a0) = uVar15;
    *(undefined4 *)(param_2 + 0x2a4) = uVar15;
    *(undefined4 *)(param_2 + 0x2a8) = uVar15;
    *(undefined4 *)(param_2 + 0x2ac) = uVar15;
    *(undefined4 *)(param_2 + 0x2b0) = uVar15;
    *(undefined4 *)(param_2 + 0x2b4) = uVar15;
    *(undefined4 *)(param_2 + 0x2b8) = uVar15;
    *(undefined4 *)(param_2 + 700) = uVar15;
    *(undefined4 *)(param_2 + 0x2c0) = uVar15;
    *(undefined4 *)(param_2 + 0x2c4) = uVar15;
    *(undefined4 *)(param_2 + 0x2c8) = uVar15;
    *(undefined4 *)(param_2 + 0x2cc) = uVar15;
    *(undefined4 *)(param_2 + 0x2d0) = uVar15;
    *(undefined4 *)(param_2 + 0x2d4) = uVar15;
    *(undefined4 *)(param_2 + 0x2d8) = uVar15;
    *(undefined4 *)(param_2 + 0x2dc) = uVar15;
    *(undefined4 *)(param_2 + 0x2e0) = uVar15;
    *(undefined4 *)(param_2 + 0x2e4) = uVar15;
    *(undefined4 *)(param_2 + 0x2e8) = uVar15;
    *(undefined4 *)(param_2 + 0x2ec) = uVar15;
    *(undefined4 *)(param_2 + 0x2f0) = uVar15;
    *(undefined4 *)(param_2 + 0x2f4) = uVar15;
    *(undefined4 *)(param_2 + 0x2f8) = uVar15;
    *(undefined4 *)(param_2 + 0x2fc) = uVar15;
    *(undefined4 *)(param_2 + 0x300) = uVar15;
    *(undefined4 *)(param_2 + 0x304) = uVar15;
    *(undefined4 *)(param_2 + 0x308) = uVar15;
    *(undefined4 *)(param_2 + 0x30c) = uVar15;
    *(undefined4 *)(param_2 + 0x310) = uVar15;
    *(undefined4 *)(param_2 + 0x314) = uVar15;
    *(undefined4 *)(param_2 + 0x318) = uVar15;
    *(undefined4 *)(param_2 + 0x31c) = uVar15;
  }
  func_0x0cae88c0(param_2);
  if ((*(long **)(param_1 + 0x20) != (long *)0x0) &&
     (cVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x9f0))(), cVar3 != '\0')) {
    *(long *)(param_2 + 0x60) = param_1;
  }
  uVar2 = _UNK_014ea428;
  uVar9 = _DAT_014ea420;
  *(undefined8 *)(param_2 + 0x1180) = _DAT_014ea420;
  *(undefined8 *)(param_2 + 0x1188) = uVar2;
  *(undefined8 *)(param_2 + 0x1170) = uVar9;
  *(undefined8 *)(param_2 + 0x1178) = uVar2;
  *(undefined8 *)(param_2 + 0x1160) = uVar9;
  *(undefined8 *)(param_2 + 0x1168) = uVar2;
  lVar8 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x110) != lVar8) {
    lVar10 = 0;
    uVar6 = 0;
    do {
      *(undefined8 *)(lVar8 + lVar10) = 0x80000000;
      uVar6 = uVar6 + 1;
      lVar8 = *(long *)(param_2 + 0x108);
      lVar10 = lVar10 + 0x68;
    } while (uVar6 < (ulong)((*(long *)(param_2 + 0x110) - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5));
  }
  *(undefined8 *)(param_2 + 0x1190) = 0x80000000;
  func_0x0cae0970(param_2,1,2);
  return;
LAB_0d3a4a08:
  uVar11 = *(uint *)(plVar14 + 4);
  iVar5 = *(int *)((long)plVar14 + 0x24);
  lStack_170 = param_1;
  if (((int)uVar11 < iVar5) && (iVar4 = *(int *)((long)plVar14 + 0x1c), (int)plVar14[3] < iVar4)) {
    do {
      uVar13 = *(uint *)(plVar14 + 3);
      if ((int)uVar13 < iVar4) {
        do {
          auStack_188._0_4_ = uVar13 & 0xff | (uVar11 & 0xff) << 8;
          uVar9 = FUN_0cc41df0(0xf6ff9e0,&DAT_0f71bd88,1);
          auStack_168 = (undefined1  [16])0x0;
          auStack_148 = (undefined1  [16])0x0;
          auStack_158 = (undefined1  [16])0x0;
          uStack_138 = 1;
          func_0x0cadd930(param_2,auStack_188,uVar9,0,auStack_168,auStack_158);
          uVar9 = auStack_168._8_8_;
          if ((long *)auStack_168._8_8_ != (long *)0x0) {
            LOCK();
            plVar1 = (long *)(auStack_168._8_8_ + 8);
            lVar8 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar8 == 0) {
              (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
              func_0x0412c2d0(uVar9);
            }
          }
          uVar13 = uVar13 + 1;
          iVar4 = *(int *)((long)plVar14 + 0x1c);
        } while ((int)uVar13 < iVar4);
        iVar5 = *(int *)((long)plVar14 + 0x24);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar5);
  }
  param_1 = lStack_170;
  if ((char)plVar14[5] != '\0') {
    uStack_18c = 0;
    uVar9 = FUN_0cc41df0(0xf6ff9e0,0xf71bea0,1);
    auStack_188._0_16_ = (undefined1  [16])0x0;
    auStack_148 = (undefined1  [16])0x0;
    auStack_158 = (undefined1  [16])0x0;
    uStack_138 = 1;
    func_0x0cadd930(param_2,&uStack_18c,uVar9,0,auStack_188,auStack_158);
    uVar9 = auStack_188._8_8_;
    if ((long *)auStack_188._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_188._8_8_ + 8);
      lVar8 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*(long *)auStack_188._8_8_ + 0x10))(auStack_188._8_8_);
        func_0x0412c2d0(uVar9);
      }
    }
  }
  goto LAB_0d3a479e;
}


