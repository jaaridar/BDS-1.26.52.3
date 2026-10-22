/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f3680 (ELF vaddr 0x51f3680)
 * Label: VanillaSurfaceBuilders::NoiseGradientSurfaceBuilder::vslot3
 * Body:  [[052f3680, 052f39c4]]
 * Ghidra: wg_VanillaSurfaceBuilders__NoiseGradientSurfaceBuilder__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__NoiseGradientSurfaceBuilder__vslot3
               (long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *in_FS_OFFSET;
  undefined *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    if ((DAT_0f5573b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5573b8), iVar5 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5573b0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573b8);
    }
    for (psVar6 = (short *)*param_2; psVar6 != (short *)param_2[1]; psVar6 = psVar6 + 8) {
      if (*psVar6 == _DAT_0f5573b0) {
        lVar2 = *(long *)(psVar6 + 4);
        if (lVar2 == 0) {
          return;
        }
        uVar7 = *(ulong *)(param_1 + 8) ^ 0x6a09e667f3bcc909;
        uVar9 = (uVar7 >> 0x1e ^ uVar7) * -0x40a7b892e31b1a47;
        uVar9 = (uVar9 >> 0x1b ^ uVar9) * -0x6b2fb644ecceee15;
        uVar9 = uVar9 >> 0x1f ^ uVar9;
        uVar7 = (uVar7 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar7 + 0x9e3779b97f4a7c15) *
                -0x40a7b892e31b1a47;
        uVar7 = (uVar7 >> 0x1b ^ uVar7) * -0x6b2fb644ecceee15;
        uVar7 = uVar7 >> 0x1f ^ uVar7;
        if (uVar7 == 0 && uVar9 == 0) {
          uVar9 = 0x9e3779b97f4a7c15;
          uVar7 = 0x6a09e667f3bcc909;
        }
        uVar11 = uVar7 ^ uVar9;
        uVar13 = uVar11 << 0x15 ^ (uVar9 << 0x31 | uVar9 >> 0xf) ^ uVar11;
        uVar11 = (uVar11 << 0x1c | uVar11 >> 0x24) + uVar13;
        lVar8 = *in_FS_OFFSET;
        if (*(char *)(lVar8 + -0x16b0) == '\0') {
          *(undefined1 *)(lVar8 + -0x16b0) = 1;
          *(undefined **)(lVar8 + -0x1750) = &UNK_0f53bd88;
          *(undefined8 *)(lVar8 + -0x1738) = 0x1032547698badcfe;
          uVar4 = _UNK_014e11d8;
          *(undefined8 *)(lVar8 + -0x1748) = _DAT_014e11d0;
          *(undefined8 *)(lVar8 + -0x1740) = uVar4;
          *(undefined8 *)(lVar8 + -0x1730) = 0;
          *(undefined8 *)(lVar8 + -0x1728) = 0;
          *(undefined8 *)(lVar8 + -0x1720) = 0;
          *(undefined8 *)(lVar8 + -0x1718) = 0;
          *(undefined8 *)(lVar8 + -0x1710) = 0;
          *(undefined8 *)(lVar8 + -0x1708) = 0;
          *(undefined8 *)(lVar8 + -0x1700) = 0;
          *(undefined8 *)(lVar8 + -0x16f8) = 0;
          *(undefined8 *)(lVar8 + -0x16f0) = 0;
          *(undefined8 *)(lVar8 + -0x16e8) = 0;
          *(undefined8 *)(lVar8 + -0x16e0) = 0;
          *(undefined8 *)(lVar8 + -0x16d8) = 0;
          *(undefined8 *)(lVar8 + -0x16d0) = 0;
          *(undefined8 *)(lVar8 + -0x16c8) = 0;
          *(undefined8 *)(lVar8 + -0x16c0) = 0;
          *(undefined8 *)(lVar8 + -0x16b8) = 0;
        }
        lVar1 = lVar8 + -0x1750;
        (**(code **)(*(long *)(lVar8 + -0x1750) + 0x10))(lVar1);
        if ((*(byte *)(lVar2 + 0x38) & 1) == 0) {
          lVar12 = lVar2 + 0x39;
          uVar10 = (uint)(*(byte *)(lVar2 + 0x38) >> 1);
        }
        else {
          lVar12 = *(long *)(lVar2 + 0x48);
          uVar10 = *(uint *)(lVar2 + 0x40);
        }
        (**(code **)(*(long *)(lVar8 + -0x1750) + 0x18))(lVar1,lVar12,uVar10);
        (**(code **)(*(long *)(lVar8 + -0x1750) + 0x20))(lVar1,&uStack_48);
        uStack_68 = (uStack_48 >> 0x38 | (uStack_48 & 0xff000000000000) >> 0x28 |
                     (uStack_48 & 0xff0000000000) >> 0x18 | (uStack_48 & 0xff00000000) >> 8 |
                     (uStack_48 & 0xff000000) << 8 | (uStack_48 & 0xff0000) << 0x18 |
                     (uStack_48 & 0xff00) << 0x28 | uStack_48 << 0x38) ^
                    ((uVar9 + uVar7) * 0x20000 | uVar9 + uVar7 >> 0x2f) + uVar9;
        uStack_60 = (uStack_40 >> 0x38 | (uStack_40 & 0xff000000000000) >> 0x28 |
                     (uStack_40 & 0xff0000000000) >> 0x18 | (uStack_40 & 0xff00000000) >> 8 |
                     (uStack_40 & 0xff000000) << 8 | (uStack_40 & 0xff0000) << 0x18 |
                     (uStack_40 & 0xff00) << 0x28 | uStack_40 << 0x38) ^
                    (uVar11 * 0x20000 | uVar11 >> 0x2f) + uVar13;
        puStack_70 = &UNK_0ef512d0;
        if (uStack_60 == 0 && uStack_68 == 0) {
          uStack_68 = 0x9e3779b97f4a7c15;
          uStack_60 = 0x6a09e667f3bcc909;
        }
        uStack_58 = 0;
        uStack_50 = 0;
        lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (lVar8 == 0) {
          func_0x0eec74c0(0x38,0);
        }
        func_0x0d3411f0(lVar8,&puStack_70,*(undefined4 *)(lVar2 + 0x50),lVar2 + 0x58,1);
        plVar3 = *(long **)(lVar2 + 0x70);
        *(long *)(lVar2 + 0x70) = lVar8;
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar2 = plVar3[3];
        if (lVar2 != 0) {
          plVar3[4] = lVar2;
          func_0x0412a280(lVar2,plVar3[5] - lVar2);
        }
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          plVar3[1] = lVar2;
          func_0x0412a280(lVar2,plVar3[2] - lVar2);
        }
        func_0x0412a280(plVar3,0x38);
        return;
      }
    }
  }
  return;
}


