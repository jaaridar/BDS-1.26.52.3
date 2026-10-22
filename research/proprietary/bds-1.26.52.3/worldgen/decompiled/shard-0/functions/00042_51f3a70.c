/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f3a70 (ELF vaddr 0x51f3a70)
 * Label: VanillaSurfaceBuilders::NoiseGradientSurfaceBuilder::vslot5
 * Body:  [[052f3a70, 052f3de5] [052f3df0, 052f3e9b] [052f3ea0, 052f3ffe]]
 * Ghidra: wg_VanillaSurfaceBuilders__NoiseGradientSurfaceBuilder__vslot5
 */


/* WARNING: Possible PIC construction at 0x052f3fe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x052f3fe9) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__NoiseGradientSurfaceBuilder__vslot5
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  short *psVar8;
  long *plVar9;
  long lVar10;
  byte *******pppppppbVar11;
  byte bVar12;
  ulong uVar13;
  undefined *unaff_RBX;
  undefined8 uVar14;
  long lVar15;
  short sVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  undefined8 unaff_R14;
  float fVar20;
  float fVar21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  byte *******pppppppbStack_48;
  long *plStack_40;
  long lStack_38;
  
  param_3 = (undefined8 *)*param_3;
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  if ((DAT_0f5573b8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f5573b8), iVar18 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5573b0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f5573b8);
  }
  psVar8 = (short *)*param_3;
  while( true ) {
    if (psVar8 == (short *)param_3[1]) {
      return;
    }
    if (*psVar8 == _DAT_0f5573b0) break;
    psVar8 = psVar8 + 8;
  }
  lVar15 = *(long *)(psVar8 + 4);
  if (lVar15 == 0) {
    return;
  }
  if (*(long *)(lVar15 + 0x70) == 0) {
    return;
  }
  if (*(long *)(lVar15 + 0x20) == *(long *)(lVar15 + 0x28)) {
    uStack_60 = 0x52f3ec5;
    func_0x0412d550(0xf552e80);
    LOCK();
    _DAT_0f552f50 = _DAT_0f552f50 + 1;
    UNLOCK();
    uStack_60 = 0x52f3edc;
    func_0x0412d610(0xf552e80);
    plVar9 = _DAT_0f552f68;
    pppppppbVar11 = _DAT_0f552f60;
    if ((_DAT_0f552f60 == (byte *******)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
      uStack_58 = 0;
      plStack_50 = (long *)((ulong)plStack_50._1_7_ << 8);
      register0x00000020 = (BADSPACEBASE *)&uStack_60;
      uStack_60 = 0x52f3fe9;
      unaff_RBX = &UNK_014c98e9;
      lVar15 = 0xf552e80;
      unaff_R14 = 3;
    }
    else {
      bVar12 = 1;
      if (_DAT_0f552f68 != (long *)0x0) {
        LOCK();
        _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
        UNLOCK();
        bVar12 = *(byte *)pppppppbVar11;
      }
      uStack_58 = 0xf552e80;
      plStack_50 = (long *)CONCAT71(plStack_50._1_7_,1);
      pppppppbStack_48 = pppppppbVar11;
      plStack_40 = plVar9;
      lStack_38 = _DAT_0f552f70;
      if (((bVar12 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
        uStack_60 = 0x52f3f49;
        func_0x0eeb61d0(_DAT_0f552f70,1,3,5,&UNK_014c98e9);
      }
      pppppppbVar11 = (byte *******)&pppppppbStack_48;
      pppppppbStack_48 = (byte *******)0x0;
      plStack_40 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar3 = plVar9 + 1;
        pppppppbVar11 = (byte *******)*plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (pppppppbVar11 == (byte *******)0x0) {
          uStack_60 = 0x52f3f74;
          (**(code **)(*plVar9 + 0x10))(plVar9);
          uStack_60 = 0x52f3f7c;
          pppppppbVar11 = (byte *******)func_0x0412c2d0(plVar9);
        }
        plVar9 = plStack_40;
        lStack_38 = 0;
        if (plStack_40 != (long *)0x0) {
          LOCK();
          plVar3 = plStack_40 + 1;
          pppppppbVar11 = (byte *******)*plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (pppppppbVar11 == (byte *******)0x0) {
            uStack_60 = 0x52f3faa;
            (**(code **)(*plStack_40 + 0x10))(plStack_40);
            uStack_60 = 0x52f3fb2;
            pppppppbVar11 = (byte *******)func_0x0412c2d0(plVar9);
          }
        }
      }
      lVar15 = uStack_58;
      if ((char)plStack_50 != '\x01') {
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(byte ********)((long)register0x00000020 + -0x18) = pppppppbVar11;
    LOCK();
    plVar9 = (long *)(lVar15 + 0xd0);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 != -0x7fffffffffffffff) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee031b;
    func_0x0412d450();
    LOCK();
    *(ulong *)(lVar15 + 0xd0) = *(ulong *)(lVar15 + 0xd0) & 0x7fffffffffffffff;
    UNLOCK();
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0335;
    func_0x0412d520(lVar15);
    uVar14 = *(undefined8 *)(lVar15 + 0xc0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0344;
    func_0x0412d680(uVar14);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0353;
    func_0x0412d6b0(uVar14);
    (*(code *)PTR_pthread_cond_broadcast_0f546458)(lVar15 + 0x90);
    return;
  }
  lStack_38 = *(long *)(lVar15 + 8);
  plStack_40 = *(long **)(lVar15 + 0x10);
  plVar9 = (long *)param_4[4];
  uVar1 = *(uint *)param_4[1];
  uVar2 = ((uint *)param_4[1])[2];
  uVar17 = uVar2 & 0xf;
  plVar3 = (long *)*plVar9;
  if (plVar3 != (long *)0x0) {
    lVar10 = *plVar3;
    if (lVar10 != plVar3[1]) {
      uVar19 = (ulong)(uVar17 << 4 | uVar1 & 0xf);
      if ((ulong)(plVar3[1] - lVar10 >> 1) <= uVar19) {
        func_0x0c6e2980();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      sVar16 = *(short *)(lVar10 + uVar19 * 2) - (short)plVar9[1];
      goto LAB_052f3b52;
    }
  }
  sVar16 = (short)plVar9[1];
LAB_052f3b52:
  iVar18 = (int)param_4[3] + -1;
  if (sVar16 <= iVar18) {
    iVar18 = (int)sVar16;
  }
  if (iVar18 < *(int *)((long)param_4 + 0x14)) {
    return;
  }
  uVar19 = CONCAT44(iVar18,uVar1) & 0xffffffff0000000f;
  uStack_58 = CONCAT44((float)(int)uVar1,(float)(int)uVar2);
  uStack_60 = CONCAT44(uVar2,(undefined4)uStack_60) & 0xfffffffff;
  pppppppbVar11 = (byte *******)_DAT_0f6eaec0;
  plStack_50 = param_4;
  do {
    plVar9 = (long *)*param_4;
    iVar18 = (int)(uVar19 >> 0x20);
    lVar10 = *(long *)(*plVar9 +
                      (ulong)(((int)plVar9[3] * (int)uVar19 + uVar17) *
                              *(int *)((long)plVar9 + 0x14) + iVar18) * 8);
    lVar4 = *(long *)(lVar10 + 0x68);
    if ((byte *******)*(byte *******)(lVar4 + 200) == pppppppbVar11) {
      if ((*(undefined **)(lVar4 + 0xe8) != &DAT_0f6eaec0) || (_DAT_0f6eaee0 != lVar4 + 200)) {
        bVar12 = *(byte *)(lVar4 + 0xd0);
        if ((bVar12 & 1) == 0) {
          uVar13 = (ulong)(bVar12 >> 1);
          if ((DAT_0f6eaec8 & 1) == 0) goto LAB_052f3c7c;
LAB_052f3c9d:
          if (uVar13 != _DAT_0f6eaed0) goto LAB_052f3d10;
        }
        else {
          uVar13 = *(ulong *)(lVar4 + 0xd8);
          if ((DAT_0f6eaec8 & 1) != 0) goto LAB_052f3c9d;
LAB_052f3c7c:
          if (uVar13 != DAT_0f6eaec8 >> 1) goto LAB_052f3d10;
        }
        if ((bVar12 & 1) == 0) {
          lVar5 = lVar4 + 0xd1;
        }
        else {
          lVar5 = *(long *)(lVar4 + 0xe0);
        }
        uVar14 = 0xf6eaec9;
        if ((DAT_0f6eaec8 & 1) != 0) {
          uVar14 = _DAT_0f6eaed8;
        }
        pppppppbStack_48 = pppppppbVar11;
        iVar7 = bcmp(lVar5,uVar14);
        param_4 = plStack_50;
        pppppppbVar11 = pppppppbStack_48;
        uVar17 = uStack_60._4_4_;
        if (iVar7 != 0) goto LAB_052f3d10;
        *(undefined **)(lVar4 + 0xe8) = &DAT_0f6eaec0;
        _DAT_0f6eaee0 = lVar4 + 200;
      }
    }
    else {
LAB_052f3d10:
      *(undefined8 *)(lVar4 + 0xe8) = 0;
      if (*(char *)(*(long *)(lVar4 + 0x20) + 2) == '\0') {
        if ((long *)lStack_38 != plStack_40) {
          plVar9 = *(long **)(lVar15 + 8);
          plVar3 = *(long **)(lVar15 + 0x10);
          if (plVar9 == plVar3) {
LAB_052f3d60:
            if (plVar9 != plVar3) goto LAB_052f3bf0;
          }
          else {
            do {
              if (*plVar9 == lVar10) goto LAB_052f3d60;
              plVar9 = plVar9 + 1;
            } while (plVar9 != plVar3);
          }
        }
        fVar20 = (float)FUN_0d3414e0(uStack_58._4_4_,(float)(*(short *)(param_4[4] + 8) + iVar18),
                                     (undefined4)uStack_58,*(undefined8 *)(lVar15 + 0x70));
        pppppppbVar11 = (byte *******)_DAT_0f6eaec0;
        fVar21 = fVar20;
        if (fVar20 <= _DAT_011985d4) {
          fVar21 = _DAT_011985d4;
        }
        lVar10 = *(long *)(lVar15 + 0x20);
        uVar17 = uStack_60._4_4_;
        if (lVar10 != *(long *)(lVar15 + 0x28)) {
          fVar21 = (float)(-(uint)(_DAT_011983f0 < fVar20) & (uint)_DAT_011983f0 |
                          ~-(uint)(_DAT_011983f0 < fVar20) & (uint)fVar21);
          do {
            if ((*(float *)(lVar10 + 0x1c) <= fVar21 && fVar21 != *(float *)(lVar10 + 0x1c)) &&
               (fVar21 <= *(float *)(lVar10 + 0x20))) {
              if (*(long *)(lVar10 + 0x28) != 0) {
                plVar9 = (long *)*param_4;
                *(long *)(*plVar9 +
                         (ulong)(((int)plVar9[3] * (int)uVar19 + uStack_60._4_4_) *
                                 *(int *)((long)plVar9 + 0x14) + iVar18) * 8) =
                     *(long *)(lVar10 + 0x28);
              }
              break;
            }
            lVar10 = lVar10 + 0x30;
          } while (lVar10 != *(long *)(lVar15 + 0x28));
        }
      }
    }
LAB_052f3bf0:
    uVar19 = uVar19 & 0xffffffff | (uVar19 & 0xffffffff00000000) - 0x100000000;
    if (iVar18 <= *(int *)((long)param_4 + 0x14)) {
      return;
    }
  } while( true );
}


