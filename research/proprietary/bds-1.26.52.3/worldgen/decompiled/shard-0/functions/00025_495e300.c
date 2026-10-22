/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495e300
 * Label: BiomeSource3d::vslot1
 * Body:  [[0495dd2f, 0495e2f9] [0495e300, 0495e4bb] [0495e4c0, 0495e589] [0495e5bd, 0495e7b3] [0495e7be, 0495e865]]
 * Ghidra: wg_BiomeSource3d__vslot1
 */


/* WARNING: Instruction at (ram,0x0495e304) overlaps instruction at (ram,0x0495e303)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_BiomeSource3d__vslot1
               (long *param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
               undefined8 param_6,long param_7,undefined8 *param_8,long param_9,long param_10,
               long param_11,long param_12,long *param_13,undefined8 param_14,long param_15,
               long *param_16,undefined8 param_17,undefined8 param_18,undefined8 *param_19,
               long param_20,undefined8 param_21,undefined8 param_22,undefined8 param_23,
               undefined8 param_24,undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_RBP;
  ulong uVar13;
  undefined8 *unaff_R13;
  undefined8 *puVar14;
  long unaff_R14;
  long lVar15;
  ulong unaff_R15;
  float fVar16;
  undefined8 *unaff_retaddr;
  long *plVar17;
  
  uVar10 = (ulong)(in_EAX + 0x48c52948);
  plVar9 = (long *)((ulong)unaff_RBP & 0xffffffff);
  plVar12 = unaff_RBP;
  plVar17 = unaff_RBP;
code_r0x0495e30a:
  plVar11 = (long *)(((long)plVar9 >> 4) * param_2 + 1);
  if (param_3 < plVar11) {
    func_0x049dc2c0();
    goto LAB_0495e7f4;
  }
  uVar10 = ((long)((long)param_4 - uVar10) >> 4) * param_2;
  plVar9 = (long *)(uVar10 * 2);
  if (plVar11 < plVar9) {
    plVar11 = plVar9;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar10) {
    plVar11 = param_3;
  }
  param_13 = plVar17;
  if (plVar11 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    if (param_3 < plVar11) {
      lVar8 = func_0x04882eb0();
      goto LAB_0495e82a;
    }
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (lVar8 == 0) {
      func_0x0eec74c0((long)plVar11 * 0x30,0);
      lVar8 = 0;
    }
  }
  param_7 = lVar8 + (long)plVar12;
  param_12 = (long)plVar11 * 0x30 + lVar8;
  *(long *)(lVar8 + (long)plVar12) = *param_1;
  *(int *)(lVar8 + 8 + (long)plVar12) = (int)unaff_R13;
  *(undefined8 *)(lVar8 + 0x10 + (long)plVar12) = 0;
  *(undefined **)(lVar8 + 0x18 + (long)plVar12) = &UNK_049dbfb0;
  *(undefined4 *)(lVar8 + 0x28 + (long)plVar12) = 0xbc042ba4;
  *(undefined **)(lVar8 + 0x20 + (long)plVar12) = &UNK_049dc0b0;
  *(undefined1 *)(lVar8 + 0x2c + (long)plVar12) = 1;
  param_9 = lVar8;
  param_10 = param_7;
  param_11 = param_7;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)unaff_retaddr;
  if (unaff_retaddr != (undefined8 *)0x0) {
    *(long **)(param_7 + 0x10) = plVar9;
    param_11 = param_7 + 0x30;
    func_0x049dc0d0(plVar17,&param_9);
    lVar8 = param_10;
    plVar9 = *(long **)(unaff_R14 + 0x48);
    while (lVar15 = param_11, lVar8 != lVar15) {
      param_11 = lVar15 + -0x30;
      if (*(code **)(lVar15 + -0x10) != (code *)0x0) {
        (**(code **)(lVar15 + -0x10))(lVar15 + -0x20);
      }
    }
    param_11 = lVar15;
    if (param_9 != 0) {
      func_0x0412a280(param_9,param_12 - param_9);
    }
LAB_0495e489:
    *(long **)(unaff_R14 + 0x48) = plVar9;
    uVar13 = ((long)plVar9 - *(long *)(unaff_R14 + 0x40) >> 4) * -0x5555555555555555;
    lVar8 = *(long *)(unaff_R14 + 0x28);
    *(ulong *)(lVar8 + unaff_R15 * 8) = uVar13 - 1;
    lVar8 = *(long *)(unaff_R14 + 0x30) - lVar8;
    fVar16 = (float)(ulong)(lVar8 >> 3) * *(float *)(unaff_R14 + 0x58);
    uVar10 = (ulong)fVar16;
    uVar10 = (long)(fVar16 - _DAT_01198778) & (long)uVar10 >> 0x3f | uVar10;
    if (uVar10 <= uVar13 && uVar13 - uVar10 != 0) {
      func_0x049dc2d0(param_8,lVar8 >> 2);
    }
LAB_0495e534:
    param_21 = 0;
    param_22 = 0;
    param_23 = 0;
    if (unaff_RBP != (long *)0x0) {
      LOCK();
      plVar17 = unaff_RBP + 1;
      lVar8 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*unaff_RBP + 0x10))(unaff_RBP);
        func_0x0412c2d0(unaff_RBP);
      }
    }
    return;
  }
  do {
    func_0x04890760();
    func_0x0eec74c0(unaff_R15,0);
    lVar8 = param_20;
    param_19 = unaff_R13 + unaff_R14;
    *(long **)((long)unaff_R13 + (long)unaff_retaddr) = plVar9;
    puVar14 = (undefined8 *)((long)unaff_retaddr + (long)unaff_R13) + 1;
    lVar15 = (long)unaff_retaddr + (long)unaff_R13 + (long)plVar11 * -8;
    func_0x0eee2f00(lVar15,param_20,unaff_retaddr);
    *(long *)(param_7 + 0x20) = lVar15;
    *(undefined8 **)(param_7 + 0x28) = puVar14;
    *(undefined8 **)(param_7 + 0x30) = param_19;
    if (lVar8 != 0) {
      func_0x0412a280(lVar8,param_18);
    }
    *(undefined8 **)(param_7 + 0x28) = puVar14;
    unaff_retaddr[0xb] = *(undefined8 *)((long)unaff_retaddr + (long)unaff_R13);
    if (unaff_RBP != (long *)0x0) {
      func_0x0412c2d0();
    }
    if ((DAT_0f554c00 == '\0') && (iVar7 = func_0x04108328(&DAT_0f554c00), iVar7 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f554bf8 = _DAT_0f555218;
      _DAT_0f555218 = _DAT_0f555218 + 1;
      func_0x0410844d(&DAT_0f554c00);
    }
    *(short *)(unaff_retaddr + 5) = _DAT_0f554bf8;
    if ((DAT_0f554c10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f554c10), iVar7 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f554c08 = _DAT_0f555218;
      _DAT_0f555218 = _DAT_0f555218 + 1;
      func_0x0410844d(&DAT_0f554c10);
    }
    *(short *)((long)unaff_retaddr + 0x2a) = _DAT_0f554c08;
    if ((DAT_0f554cc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f554cc8), iVar7 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f554cc0 = _DAT_0f555218;
      _DAT_0f555218 = _DAT_0f555218 + 1;
      func_0x0410844d(&DAT_0f554cc8);
    }
    *(short *)((long)unaff_retaddr + 0x2c) = _DAT_0f554cc0;
    if ((DAT_0f554c20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f554c20), iVar7 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f554c18 = _DAT_0f555218;
      _DAT_0f555218 = _DAT_0f555218 + 1;
      func_0x0410844d(&DAT_0f554c20);
    }
    *(short *)((long)unaff_retaddr + 0x2e) = _DAT_0f554c18;
    if ((DAT_0f554e58 == '\0') && (iVar7 = func_0x04108328(&DAT_0f554e58), iVar7 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f554e50 = _DAT_0f555218;
      _DAT_0f555218 = _DAT_0f555218 + 1;
      func_0x0410844d(&DAT_0f554e58);
    }
    *(short *)((long)unaff_retaddr + 0x32) = _DAT_0f554e50;
    param_15 = 0;
    param_16 = (long *)0x0;
    if ((plVar17[1] == 0) ||
       (unaff_RBP = (long *)func_0x0412c300(), param_16 = unaff_RBP, unaff_RBP == (long *)0x0)) {
      unaff_RBP = (long *)0x0;
      unaff_R14 = 0;
    }
    else {
      unaff_R14 = *plVar17;
      param_15 = unaff_R14;
    }
    puVar1 = *(undefined8 **)(param_7 + 0x28);
    for (puVar14 = *(undefined8 **)(param_7 + 0x20); puVar14 != puVar1; puVar14 = puVar14 + 1) {
      (**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,unaff_R14);
    }
    uVar2 = *param_8;
    uVar3 = param_8[1];
    *param_8 = 0;
    param_8[1] = 0;
    uVar4 = param_8[2];
    param_8[2] = 0;
    param_21 = 0;
    param_22 = 0;
    param_23 = 0;
    param_25 = uVar2;
    param_26 = uVar3;
    param_27 = uVar4;
    unaff_retaddr = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (unaff_retaddr == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *unaff_retaddr = &UNK_0ef4b228;
    unaff_retaddr[1] = uVar2;
    unaff_retaddr[2] = uVar3;
    unaff_retaddr[3] = uVar4;
    plVar17 = *(long **)(param_7 + 0x18);
    *(undefined8 **)(param_7 + 0x18) = unaff_retaddr;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
      unaff_retaddr = *(undefined8 **)(param_7 + 0x18);
    }
    if ((DAT_0f5543a0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5543a0), iVar7 != 0)) {
      func_0x049dbde0(0xf554388);
      func_0x0410844d(&DAT_0f5543a0);
    }
    param_8 = (undefined8 *)(unaff_R14 + 0x28);
    plVar12 = (long *)0xffffffff;
    iVar7 = -1;
    plVar9 = (long *)(*(long *)(unaff_R14 + 0x28) +
                     (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) - *(long *)(unaff_R14 + 0x28)
                                          ) >> 3) - 1U & _DAT_0f55438c) * 8);
    plVar17 = (long *)(unaff_R14 + 0x40);
    do {
      if (*plVar9 == -1) goto LAB_0495e16f;
      lVar8 = *plVar9 * 0x30;
      plVar9 = (long *)(*(long *)(unaff_R14 + 0x40) + lVar8);
    } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar8) != _DAT_0f55438c);
    if ((((plVar9 != *(long **)(unaff_R14 + 0x48)) && (*(char *)((long)plVar9 + 0x2c) != '\x04')) &&
        ((int)plVar9[5] == -0x43fbd45c)) && (plVar9[2] != 0)) {
      if ((DAT_0f5543a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5543a0), iVar6 != 0)) {
        func_0x049dbde0(0xf554388);
        func_0x0410844d(&DAT_0f5543a0);
      }
      plVar9 = (long *)(*(long *)(unaff_R14 + 0x28) +
                       (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) -
                                            *(long *)(unaff_R14 + 0x28)) >> 3) - 1U & _DAT_0f55438c)
                       * 8);
      do {
        if (*plVar9 == -1) goto LAB_0495e16f;
        lVar8 = *plVar9 * 0x30;
        plVar9 = (long *)(*(long *)(unaff_R14 + 0x40) + lVar8);
      } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar8) != _DAT_0f55438c);
      if (((plVar9 != *(long **)(unaff_R14 + 0x48)) && (*(char *)((long)plVar9 + 0x2c) != '\x04'))
         && (((int)plVar9[5] == -0x43fbd45c && (plVar9[2] != 0)))) {
        if (DAT_0f5543a0 == '\0') {
LAB_0495e7f4:
          iVar7 = func_0x04108328(&DAT_0f5543a0);
          if (iVar7 != 0) {
            func_0x049dbde0(0xf554388);
            func_0x0410844d(&DAT_0f5543a0);
          }
        }
        iVar7 = (int)plVar12;
        plVar11 = (long *)(*(long *)(unaff_R14 + 0x28) +
                          (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) -
                                               *(long *)(unaff_R14 + 0x28)) >> 3) + iVar7 &
                                 _DAT_0f55438c) * 8);
        do {
          if (*plVar11 == -1) goto LAB_0495e16f;
          lVar8 = *plVar11 * 0x30;
          plVar11 = (long *)(*(long *)(unaff_R14 + 0x40) + lVar8);
        } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar8) != _DAT_0f55438c);
        if (plVar11 != *(long **)(unaff_R14 + 0x48)) {
          lVar8 = (*(code *)plVar11[3])(0,plVar11 + 2,0);
          if (DAT_0f5543a0 == '\0') {
LAB_0495e82a:
            iVar7 = (int)plVar12;
            iVar6 = func_0x04108328(&DAT_0f5543a0);
            if (iVar6 != 0) {
              func_0x049dbde0(0xf554388);
              func_0x0410844d(&DAT_0f5543a0);
            }
          }
          if (*(uint *)(lVar8 + 4) == _DAT_0f55438c) {
            plVar9 = (long *)(*(long *)(unaff_R14 + 0x28) +
                             (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) -
                                                  *(long *)(unaff_R14 + 0x28)) >> 3) + iVar7 &
                                    *(uint *)(plVar11 + 1)) * 8);
            do {
              plVar12 = plVar9;
              lVar8 = *plVar12;
              if (lVar8 == -1) goto LAB_0495e16f;
              lVar8 = lVar8 * 0x30;
              plVar9 = (long *)(*(long *)(unaff_R14 + 0x40) + lVar8);
            } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar8) != *(uint *)(plVar11 + 1));
            *plVar12 = *plVar9;
            func_0x049dbe50(param_8);
          }
        }
      }
    }
LAB_0495e16f:
    if ((DAT_0f5543a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5543a0), iVar6 != 0)) {
      func_0x049dbde0(0xf554388);
      func_0x0410844d(&DAT_0f5543a0);
    }
    plVar9 = (long *)(*(long *)(unaff_R14 + 0x28) +
                     (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) - *(long *)(unaff_R14 + 0x28)
                                          ) >> 3) + iVar7 & _DAT_0f55438c) * 8);
    do {
      if (*plVar9 == -1) goto LAB_0495e1ec;
      lVar8 = *plVar9 * 0x30;
      plVar9 = (long *)(*(long *)(unaff_R14 + 0x40) + lVar8);
    } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar8) != _DAT_0f55438c);
    if ((((plVar9 != *(long **)(unaff_R14 + 0x48)) && (*(char *)((long)plVar9 + 0x2c) != '\x04')) &&
        ((int)plVar9[5] == -0x43fbd45c)) && (plVar9[2] != 0)) goto LAB_0495e534;
LAB_0495e1ec:
    if ((DAT_0f5543a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5543a0), iVar6 != 0)) {
      func_0x049dbde0(0xf554388);
      func_0x0410844d(&DAT_0f5543a0);
    }
    uVar5 = _DAT_0f55438c;
    unaff_R13 = (undefined8 *)(ulong)_DAT_0f55438c;
    unaff_R15 = (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) - *(long *)(unaff_R14 + 0x28)) >>
                             3) + iVar7 & _DAT_0f55438c);
    param_1 = (long *)(*(long *)(unaff_R14 + 0x28) + unaff_R15 * 8);
    uVar10 = *(ulong *)(unaff_R14 + 0x40);
    plVar12 = param_1;
    do {
      if (*plVar12 == -1) {
        plVar9 = *(long **)(unaff_R14 + 0x48);
        goto LAB_0495e26b;
      }
      lVar8 = *plVar12 * 0x30;
      plVar12 = (long *)(uVar10 + lVar8);
    } while (*(uint *)(uVar10 + 8 + lVar8) != _DAT_0f55438c);
    plVar9 = *(long **)(unaff_R14 + 0x48);
    if (plVar12 != plVar9) goto LAB_0495e534;
LAB_0495e26b:
    param_4 = *(long **)(unaff_R14 + 0x50);
    param_2 = -0x5555555555555555;
    if (param_4 <= plVar9) break;
    plVar11 = (long *)0xaaaaaaaaaaaaaaab;
    *plVar9 = *param_1;
    *(uint *)(plVar9 + 1) = uVar5;
    plVar9[2] = 0;
    plVar9[3] = (long)&UNK_049dbfb0;
    *(undefined4 *)(plVar9 + 5) = 0xbc042ba4;
    plVar9[4] = (long)&UNK_049dc0b0;
    *(undefined1 *)((long)plVar9 + 0x2c) = 1;
    unaff_R13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (unaff_R13 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *unaff_R13 = unaff_retaddr;
    if (unaff_retaddr != (undefined8 *)0x0) {
      plVar9[2] = (long)unaff_R13;
      plVar9 = plVar9 + 6;
      *(long **)(unaff_R14 + 0x48) = plVar9;
      goto LAB_0495e489;
    }
  } while( true );
  param_3 = (long *)0x555555555555555;
  plVar9 = (long *)((long)plVar9 - uVar10);
  plVar12 = plVar9;
  goto code_r0x0495e30a;
}


