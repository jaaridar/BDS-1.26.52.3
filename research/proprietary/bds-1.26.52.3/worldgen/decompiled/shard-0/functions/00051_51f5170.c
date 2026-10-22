/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f5170 (ELF vaddr 0x51f5170)
 * Label: VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder::vslot5
 * Body:  [[052f5170, 052f55b5] [052f55c0, 052f56f3]]
 * Ghidra: wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot5
               (long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  code *pcVar7;
  float fVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  float fVar30;
  float fVar31;
  short sStack_7a;
  long lStack_78;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [16];
  uint uStack_4c;
  int iStack_48;
  uint uStack_44;
  long lStack_40;
  long lStack_38;
  
  uVar11 = *(uint *)param_4[1];
  uVar15 = ((uint *)param_4[1])[2];
  fStack_6c = (float)(int)uVar11;
  fStack_70 = (float)(int)uVar15;
  uVar29 = FUN_0d3414e0(*(long *)(param_1 + 8) + 0x38);
  auStack_68._4_4_ = (uint)((ulong)uVar29 >> 0x20) & _UNK_014e7ba4;
  auStack_68._0_4_ = (uint)((float)uVar29 * _DAT_01198c6c) & _DAT_014e7ba0;
  auStack_68._8_4_ = extraout_XMM0_Dc & _UNK_014e7ba8;
  auStack_68._12_4_ = extraout_XMM0_Dd & _UNK_014e7bac;
  fVar25 = (float)FUN_0d3414e0(fStack_6c * _DAT_01198a10,*(undefined8 *)(param_1 + 8));
  if (fVar25 * _DAT_01198358 <= (float)auStack_68._0_4_) {
    auStack_68._0_4_ = fVar25 * _DAT_01198358;
  }
  if ((float)auStack_68._0_4_ <= _DAT_011987fc) {
    return;
  }
  lStack_78 = param_1;
  fVar25 = (float)FUN_0d3414e0(fStack_6c * _DAT_0119862c,*(long *)(param_1 + 8) + 0x70);
  sStack_7a = *(short *)(param_2 + 0x14);
  iStack_48 = (int)sStack_7a;
  plVar4 = *(long **)(param_3 + 0x40);
  uStack_4c = uVar11;
  uStack_44 = uVar15;
  if (plVar4 == (long *)0x0) {
    func_0x04891200();
LAB_052f56ee:
    func_0x0c6e2980();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar26 = (float)((uint)(fVar25 * _DAT_0119858c) & _DAT_014e7ba0) * _DAT_01198850;
  fVar25 = auStack_68._0_4_ * auStack_68._0_4_ * _DAT_0119863c;
  fVar26 = (float)(int)((int)fVar26 + (uint)((float)(int)fVar26 < fVar26)) + _DAT_01198364;
  if (fVar26 <= fVar25) {
    fVar25 = fVar26;
  }
  auStack_68._0_4_ = fVar25;
  fVar27 = (float)(**(code **)(*plVar4 + 0x30))(plVar4,&uStack_4c,&sStack_7a);
  fVar8 = _DAT_01198a44;
  fVar26 = _DAT_0119884c;
  fVar25 = _DAT_01198788;
  fVar27 = (float)(-(uint)(_DAT_01198a9c < fVar27) & (uint)(_DAT_01198458 + (float)auStack_68._0_4_)
                  | ~-(uint)(_DAT_01198a9c < fVar27) & auStack_68._0_4_);
  iVar12 = (int)*(short *)(param_2 + 0x14);
  if (_DAT_01198724 < fVar27) {
    fVar31 = ((float)iVar12 - fVar27) + _DAT_011987d0;
  }
  else {
    fVar31 = 0.0;
  }
  uVar24 = (long)((ulong)uVar11 * 0x2fc20f00000001) >> 0x20 ^ (long)(int)uVar15 * 0x6ebfff5;
  uVar9 = (long)((uVar24 * 0x285b825 + 0xb) * uVar24) >> 0x10 ^
          *(ulong *)(*(long *)(lStack_78 + 8) + 0xb0);
  uVar24 = *(ulong *)(*(long *)(lStack_78 + 8) + 0xb8);
  uVar20 = 0x9e3779b97f4a7c15;
  if (uVar9 != 0 || uVar24 != 0) {
    uVar20 = uVar9;
  }
  uVar22 = 0x6a09e667f3bcc909;
  if (uVar9 != 0 || uVar24 != 0) {
    uVar22 = uVar24;
  }
  uVar24 = uVar22 ^ uVar20;
  uVar14 = uVar24 << 0x15 ^ (uVar20 << 0x31 | uVar20 >> 0xf) ^ uVar24;
  uVar9 = uVar24 << 0x1c | uVar24 >> 0x24;
  lVar1 = uVar14 + uVar9;
  uVar9 = uVar9 ^ uVar14;
  uVar24 = uVar9 << 0x15 ^ (uVar14 << 0x31 | uVar14 >> 0xf) ^ uVar9;
  uVar9 = uVar9 << 0x1c | uVar9 >> 0x24;
  lVar1 = (ulong)(((int)lVar1 * 0x20000 | (uint)((ulong)lVar1 >> 0x2f)) + (int)uVar14) * 10;
  uVar11 = (uint)lVar1;
  while (uVar11 < 6) {
    lVar1 = uVar9 + uVar24;
    iVar3 = (int)uVar24;
    uVar9 = uVar9 ^ uVar24;
    uVar24 = uVar9 << 0x15 ^ (uVar24 << 0x31 | uVar24 >> 0xf) ^ uVar9;
    uVar9 = uVar9 << 0x1c | uVar9 >> 0x24;
    lVar1 = (ulong)(iVar3 + ((int)lVar1 * 0x20000 | (uint)((ulong)lVar1 >> 0x2f))) * 10;
    uVar11 = (uint)lVar1;
  }
  plVar4 = (long *)param_4[4];
  uVar15 = *(uint *)param_4[1] & 0xf;
  uVar11 = ((uint *)param_4[1])[2] & 0xf;
  plVar5 = (long *)*plVar4;
  lStack_40 = param_2;
  lStack_38 = param_3;
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    if (lVar10 != plVar5[1]) {
      uVar14 = (ulong)(uVar11 << 4 | uVar15);
      if ((ulong)(plVar5[1] - lVar10 >> 1) <= uVar14) goto LAB_052f56ee;
      sVar17 = *(short *)(lVar10 + uVar14 * 2) - (short)plVar4[1];
      goto LAB_052f547c;
    }
  }
  sVar17 = (short)plVar4[1];
LAB_052f547c:
  fVar28 = (float)(-(uint)(_DAT_01198724 < fVar27) & (uint)((float)iVar12 + fVar27));
  fVar30 = _DAT_011983f0 + fVar28;
  fVar27 = (float)(int)sVar17;
  if ((float)(int)sVar17 <= fVar30) {
    fVar27 = fVar30;
  }
  iVar18 = (int)fVar27;
  auStack_68._0_8_ = param_4;
  iVar3 = *(int *)((long)param_4 + 0x14);
  if (iVar3 <= iVar18) {
    iVar19 = (int)fVar28;
    iVar13 = (int)((ulong)lVar1 >> 0x20) + iVar12 + 0x12;
    plVar4 = (long *)*param_4;
    iVar21 = (((int)(uVar22 + uVar20) * 0x20000 | (uint)(uVar22 + uVar20 >> 0x2f)) + (int)uVar20 >>
             0x1e) + 2;
    iVar16 = (uVar15 * (int)plVar4[3] + uVar11) * *(int *)((long)plVar4 + 0x14);
    lVar1 = *plVar4;
    if ((fVar31 != 0.0) || (NAN(fVar31))) {
      iVar23 = 0;
      do {
        uVar20 = (ulong)(uint)(iVar16 + iVar18);
        cVar2 = **(char **)(*(long *)(*(long *)(lVar1 + uVar20 * 8) + 0x68) + 0x20);
        if ((cVar2 == '\0') && (iVar18 < iVar19)) {
          lVar10 = ((uVar24 + uVar9) * 0x20000 | uVar24 + uVar9 >> 0x2f) + uVar24;
          uVar9 = uVar9 ^ uVar24;
          uVar24 = (uVar24 << 0x31 | uVar24 >> 0xf) ^ uVar9 << 0x15 ^ uVar9;
          uVar9 = uVar9 << 0x1c | uVar9 >> 0x24;
          if (fVar26 < (float)(uint)((ulong)lVar10 >> 0x28) * fVar8) {
LAB_052f560a:
            if ((iVar21 < iVar23) || (iVar18 <= iVar13)) {
              *(undefined8 *)(lVar1 + uVar20 * 8) = *(undefined8 *)(lStack_78 + 0x10);
            }
            else {
              *(undefined8 *)(lVar1 + uVar20 * 8) = *(undefined8 *)(lStack_78 + 0x18);
              iVar23 = iVar23 + 1;
            }
          }
        }
        else if ((cVar2 == '\x05') && (((int)fVar31 < iVar18 && (iVar18 < iVar12)))) {
          lVar10 = ((uVar24 + uVar9) * 0x20000 | uVar24 + uVar9 >> 0x2f) + uVar24;
          uVar9 = uVar9 ^ uVar24;
          uVar24 = (uVar24 << 0x31 | uVar24 >> 0xf) ^ uVar9 << 0x15 ^ uVar9;
          uVar9 = uVar9 << 0x1c | uVar9 >> 0x24;
          if (fVar25 < (float)(uint)((ulong)lVar10 >> 0x28) * fVar8) goto LAB_052f560a;
        }
        bVar6 = iVar3 < iVar18;
        iVar18 = iVar18 + -1;
      } while (bVar6);
    }
    else {
      iVar12 = 0;
      do {
        uVar20 = (ulong)(uint)(iVar16 + iVar18);
        if ((**(char **)(*(long *)(*(long *)(lVar1 + uVar20 * 8) + 0x68) + 0x20) == '\0') &&
           (iVar18 < iVar19)) {
          lVar10 = ((uVar24 + uVar9) * 0x20000 | uVar24 + uVar9 >> 0x2f) + uVar24;
          uVar9 = uVar9 ^ uVar24;
          uVar24 = (uVar24 << 0x31 | uVar24 >> 0xf) ^ uVar9 << 0x15 ^ uVar9;
          uVar9 = uVar9 << 0x1c | uVar9 >> 0x24;
          if (fVar26 < (float)(uint)((ulong)lVar10 >> 0x28) * fVar8) {
            if ((iVar21 < iVar12) || (iVar18 <= iVar13)) {
              *(undefined8 *)(lVar1 + uVar20 * 8) = *(undefined8 *)(lStack_78 + 0x10);
            }
            else {
              *(undefined8 *)(lVar1 + uVar20 * 8) = *(undefined8 *)(lStack_78 + 0x18);
              iVar12 = iVar12 + 1;
            }
          }
        }
        bVar6 = iVar3 < iVar18;
        iVar18 = iVar18 + -1;
      } while (bVar6);
    }
  }
  func_0x0c852de0(param_2,param_3,param_4);
  return;
}


