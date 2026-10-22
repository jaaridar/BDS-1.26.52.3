/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495e290
 * Label: BiomeSource3d::vslot0
 * Body:  [[0495dd2f, 0495e28b] [0495e290, 0495e4bb] [0495e4c0, 0495e589] [0495e5bd, 0495e7b3] [0495e7be, 0495e865]]
 * Ghidra: wg_BiomeSource3d__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_BiomeSource3d__vslot0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char *in_RAX;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_RBX;
  long *unaff_RBP;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long unaff_R14;
  long lVar13;
  ulong unaff_R15;
  float fVar14;
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
code_r0x0495e294:
  unaff_RBP[3] = (long)&UNK_049dbfb0;
  *(undefined4 *)(unaff_RBP + 5) = 0xbc042ba4;
  unaff_RBP[4] = (long)&UNK_049dc0b0;
  *(undefined1 *)((long)unaff_RBP + 0x2c) = 1;
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar6 = in_stack_00000018;
  if (in_stack_00000018 == (undefined8 *)0x0) {
    do {
      func_0x04890760();
      func_0x0eec74c0(unaff_R15,0);
      lVar11 = in_stack_00000088;
      in_stack_00000080 = puVar6 + unaff_R14;
      *(long **)((long)puVar6 + (long)in_stack_00000018) = unaff_RBP;
      puVar12 = (undefined8 *)((long)in_stack_00000018 + (long)puVar6) + 1;
      lVar13 = (long)in_stack_00000018 + (long)puVar6 + (long)unaff_RBX * -8;
      func_0x0eee2f00(lVar13,in_stack_00000088,in_stack_00000018);
      *(long *)(in_stack_00000020 + 0x20) = lVar13;
      *(undefined8 **)(in_stack_00000020 + 0x28) = puVar12;
      *(undefined8 **)(in_stack_00000020 + 0x30) = in_stack_00000080;
      if (lVar11 != 0) {
        func_0x0412a280(lVar11,in_stack_00000078);
      }
      *(undefined8 **)(in_stack_00000020 + 0x28) = puVar12;
      in_stack_00000018[0xb] = *(undefined8 *)((long)in_stack_00000018 + (long)puVar6);
      if (in_stack_00000008 != (long *)0x0) {
        func_0x0412c2d0();
      }
      if ((DAT_0f554c00 == '\0') && (iVar5 = func_0x04108328(&DAT_0f554c00), iVar5 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f554bf8 = _DAT_0f555218;
        _DAT_0f555218 = _DAT_0f555218 + 1;
        func_0x0410844d(&DAT_0f554c00);
      }
      *(short *)(in_stack_00000018 + 5) = _DAT_0f554bf8;
      if ((DAT_0f554c10 == '\0') && (iVar5 = func_0x04108328(&DAT_0f554c10), iVar5 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f554c08 = _DAT_0f555218;
        _DAT_0f555218 = _DAT_0f555218 + 1;
        func_0x0410844d(&DAT_0f554c10);
      }
      *(short *)((long)in_stack_00000018 + 0x2a) = _DAT_0f554c08;
      if ((DAT_0f554cc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f554cc8), iVar5 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f554cc0 = _DAT_0f555218;
        _DAT_0f555218 = _DAT_0f555218 + 1;
        func_0x0410844d(&DAT_0f554cc8);
      }
      *(short *)((long)in_stack_00000018 + 0x2c) = _DAT_0f554cc0;
      if ((DAT_0f554c20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f554c20), iVar5 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f554c18 = _DAT_0f555218;
        _DAT_0f555218 = _DAT_0f555218 + 1;
        func_0x0410844d(&DAT_0f554c20);
      }
      *(short *)((long)in_stack_00000018 + 0x2e) = _DAT_0f554c18;
      if ((DAT_0f554e58 == '\0') && (iVar5 = func_0x04108328(&DAT_0f554e58), iVar5 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f554e50 = _DAT_0f555218;
        _DAT_0f555218 = _DAT_0f555218 + 1;
        func_0x0410844d(&DAT_0f554e58);
      }
      *(short *)((long)in_stack_00000018 + 0x32) = _DAT_0f554e50;
      in_stack_00000060 = 0;
      in_stack_00000068 = (long *)0x0;
      if ((in_stack_00000010[1] == 0) ||
         (in_stack_00000008 = (long *)func_0x0412c300(), in_stack_00000068 = in_stack_00000008,
         in_stack_00000008 == (long *)0x0)) {
        in_stack_00000008 = (long *)0x0;
        unaff_R14 = 0;
      }
      else {
        unaff_R14 = *in_stack_00000010;
        in_stack_00000060 = unaff_R14;
      }
      puVar12 = *(undefined8 **)(in_stack_00000020 + 0x28);
      for (puVar6 = *(undefined8 **)(in_stack_00000020 + 0x20); puVar6 != puVar12;
          puVar6 = puVar6 + 1) {
        (**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,unaff_R14);
      }
      uVar1 = *in_stack_00000028;
      uVar2 = in_stack_00000028[1];
      *in_stack_00000028 = 0;
      in_stack_00000028[1] = 0;
      uVar3 = in_stack_00000028[2];
      in_stack_00000028[2] = 0;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b0 = uVar1;
      in_stack_000000b8 = uVar2;
      in_stack_000000c0 = uVar3;
      in_stack_00000018 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (in_stack_00000018 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *in_stack_00000018 = &UNK_0ef4b228;
      in_stack_00000018[1] = uVar1;
      in_stack_00000018[2] = uVar2;
      in_stack_00000018[3] = uVar3;
      plVar8 = *(long **)(in_stack_00000020 + 0x18);
      *(undefined8 **)(in_stack_00000020 + 0x18) = in_stack_00000018;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
        in_stack_00000018 = *(undefined8 **)(in_stack_00000020 + 0x18);
      }
      if ((DAT_0f5543a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5543a0), iVar5 != 0)) {
        func_0x049dbde0(0xf554388);
        func_0x0410844d(&DAT_0f5543a0);
      }
      in_stack_00000028 = (undefined8 *)(unaff_R14 + 0x28);
      lVar11 = 0xffffffff;
      plVar8 = (long *)(*(long *)(unaff_R14 + 0x28) +
                       (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) -
                                            *(long *)(unaff_R14 + 0x28)) >> 3) - 1U & _DAT_0f55438c)
                       * 8);
      in_stack_00000010 = (long *)(unaff_R14 + 0x40);
      do {
        if (*plVar8 == -1) goto LAB_0495e16f;
        lVar13 = *plVar8 * 0x30;
        plVar8 = (long *)(*(long *)(unaff_R14 + 0x40) + lVar13);
      } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar13) != _DAT_0f55438c);
      if ((((plVar8 != *(long **)(unaff_R14 + 0x48)) && (*(char *)((long)plVar8 + 0x2c) != '\x04'))
          && ((int)plVar8[5] == -0x43fbd45c)) && (plVar8[2] != 0)) {
        if ((DAT_0f5543a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5543a0), iVar5 != 0)) {
          func_0x049dbde0(0xf554388);
          func_0x0410844d(&DAT_0f5543a0);
        }
        plVar8 = (long *)(*(long *)(unaff_R14 + 0x28) +
                         (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) -
                                              *(long *)(unaff_R14 + 0x28)) >> 3) - 1U &
                                _DAT_0f55438c) * 8);
        do {
          if (*plVar8 == -1) goto LAB_0495e16f;
          lVar13 = *plVar8 * 0x30;
          plVar8 = (long *)(*(long *)(unaff_R14 + 0x40) + lVar13);
        } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar13) != _DAT_0f55438c);
        if (((plVar8 != *(long **)(unaff_R14 + 0x48)) && (*(char *)((long)plVar8 + 0x2c) != '\x04'))
           && (((int)plVar8[5] == -0x43fbd45c && (plVar8[2] != 0)))) {
          if (DAT_0f5543a0 == '\0') goto LAB_0495e7f4;
          goto LAB_0495e09a;
        }
      }
LAB_0495e16f:
      if ((DAT_0f5543a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5543a0), iVar5 != 0)) {
        func_0x049dbde0(0xf554388);
        func_0x0410844d(&DAT_0f5543a0);
      }
      plVar8 = (long *)(*(long *)(unaff_R14 + 0x28) +
                       (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) -
                                            *(long *)(unaff_R14 + 0x28)) >> 3) + (int)lVar11 &
                              _DAT_0f55438c) * 8);
      do {
        if (*plVar8 == -1) goto LAB_0495e1ec;
        lVar13 = *plVar8 * 0x30;
        plVar8 = (long *)(*(long *)(unaff_R14 + 0x40) + lVar13);
      } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar13) != _DAT_0f55438c);
      if ((((plVar8 != *(long **)(unaff_R14 + 0x48)) && (*(char *)((long)plVar8 + 0x2c) != '\x04'))
          && ((int)plVar8[5] == -0x43fbd45c)) && (plVar8[2] != 0)) goto LAB_0495e534;
LAB_0495e1ec:
      if ((DAT_0f5543a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5543a0), iVar5 != 0)) {
        func_0x049dbde0(0xf554388);
        func_0x0410844d(&DAT_0f5543a0);
      }
      uVar4 = _DAT_0f55438c;
      puVar6 = (undefined8 *)(ulong)_DAT_0f55438c;
      unaff_R15 = (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) - *(long *)(unaff_R14 + 0x28))
                               >> 3) + (int)lVar11 & _DAT_0f55438c);
      plVar8 = (long *)(*(long *)(unaff_R14 + 0x28) + unaff_R15 * 8);
      lVar13 = *(long *)(unaff_R14 + 0x40);
      plVar9 = plVar8;
      do {
        if (*plVar9 == -1) {
          unaff_RBP = *(long **)(unaff_R14 + 0x48);
          goto LAB_0495e26b;
        }
        lVar11 = *plVar9 * 0x30;
        plVar9 = (long *)(lVar13 + lVar11);
      } while (*(uint *)(lVar13 + 8 + lVar11) != _DAT_0f55438c);
      unaff_RBP = *(long **)(unaff_R14 + 0x48);
      if (plVar9 != unaff_RBP) goto LAB_0495e534;
LAB_0495e26b:
      if (unaff_RBP < *(long **)(unaff_R14 + 0x50)) {
        unaff_RBX = (long *)0xaaaaaaaaaaaaaaab;
        *unaff_RBP = *plVar8;
        *(uint *)(unaff_RBP + 1) = uVar4;
        unaff_RBP[2] = 0;
        goto code_r0x0495e294;
      }
      lVar11 = (long)unaff_RBP - lVar13;
      unaff_RBX = (long *)((lVar11 >> 4) * -0x5555555555555555 + 1);
      if ((long *)0x555555555555555 < unaff_RBX) goto LAB_0495e7ef;
      lVar13 = (long)*(long **)(unaff_R14 + 0x50) - lVar13 >> 4;
      plVar9 = (long *)(lVar13 * 0x5555555555555556);
      if (unaff_RBX < plVar9) {
        unaff_RBX = plVar9;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
        unaff_RBX = (long *)0x555555555555555;
      }
      in_stack_00000050 = in_stack_00000010;
      if (unaff_RBX == (long *)0x0) {
        lVar13 = 0;
      }
      else {
        if ((long *)0x555555555555555 < unaff_RBX) {
          lVar13 = func_0x04882eb0();
          goto LAB_0495e82a;
        }
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
        if (lVar13 == 0) {
          func_0x0eec74c0((long)unaff_RBX * 0x30,0);
          lVar13 = 0;
        }
      }
      in_stack_00000020 = lVar13 + lVar11;
      in_stack_00000048 = (long)unaff_RBX * 0x30 + lVar13;
      *(long *)(lVar13 + lVar11) = *plVar8;
      *(uint *)(lVar13 + 8 + lVar11) = uVar4;
      *(undefined8 *)(lVar13 + 0x10 + lVar11) = 0;
      *(undefined **)(lVar13 + 0x18 + lVar11) = &UNK_049dbfb0;
      *(undefined4 *)(lVar13 + 0x28 + lVar11) = 0xbc042ba4;
      *(undefined **)(lVar13 + 0x20 + lVar11) = &UNK_049dc0b0;
      *(undefined1 *)(lVar13 + 0x2c + lVar11) = 1;
      in_stack_00000030 = lVar13;
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000020;
      unaff_RBP = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (unaff_RBP == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *unaff_RBP = (long)in_stack_00000018;
    } while (in_stack_00000018 == (undefined8 *)0x0);
    *(long **)(in_stack_00000020 + 0x10) = unaff_RBP;
    in_stack_00000040 = in_stack_00000020 + 0x30;
    func_0x049dc0d0(in_stack_00000010,&stack0x00000030);
    lVar11 = in_stack_00000038;
    plVar8 = *(long **)(unaff_R14 + 0x48);
    while (lVar13 = in_stack_00000040, lVar11 != lVar13) {
      in_stack_00000040 = lVar13 + -0x30;
      if (*(code **)(lVar13 + -0x10) != (code *)0x0) {
        (**(code **)(lVar13 + -0x10))(lVar13 + -0x20);
      }
    }
    in_stack_00000040 = lVar13;
    if (in_stack_00000030 != 0) {
      func_0x0412a280(in_stack_00000030,in_stack_00000048 - in_stack_00000030);
    }
    unaff_RBX = (long *)0xaaaaaaaaaaaaaaab;
  }
  else {
    unaff_RBP[2] = (long)puVar6;
    plVar8 = unaff_RBP + 6;
    *(long **)(unaff_R14 + 0x48) = plVar8;
  }
  *(long **)(unaff_R14 + 0x48) = plVar8;
  uVar10 = ((long)plVar8 - *(long *)(unaff_R14 + 0x40) >> 4) * (long)unaff_RBX;
  lVar11 = *(long *)(unaff_R14 + 0x28);
  *(ulong *)(lVar11 + unaff_R15 * 8) = uVar10 - 1;
  lVar11 = *(long *)(unaff_R14 + 0x30) - lVar11;
  fVar14 = (float)(ulong)(lVar11 >> 3) * *(float *)(unaff_R14 + 0x58);
  uVar7 = (ulong)fVar14;
  uVar7 = (long)(fVar14 - _DAT_01198778) & (long)uVar7 >> 0x3f | uVar7;
  if (uVar7 <= uVar10 && uVar10 - uVar7 != 0) {
    func_0x049dc2d0(in_stack_00000028,lVar11 >> 2);
  }
LAB_0495e534:
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  if (in_stack_00000008 != (long *)0x0) {
    LOCK();
    plVar8 = in_stack_00000008 + 1;
    lVar11 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000008 + 0x10))(in_stack_00000008);
      func_0x0412c2d0(in_stack_00000008);
    }
  }
  return;
LAB_0495e7ef:
  func_0x049dc2c0();
LAB_0495e7f4:
  iVar5 = func_0x04108328(&DAT_0f5543a0);
  if (iVar5 != 0) {
    func_0x049dbde0(0xf554388);
    func_0x0410844d(&DAT_0f5543a0);
  }
LAB_0495e09a:
  unaff_RBX = (long *)(*(long *)(unaff_R14 + 0x28) +
                      (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) -
                                           *(long *)(unaff_R14 + 0x28)) >> 3) + (int)lVar11 &
                             _DAT_0f55438c) * 8);
  do {
    if (*unaff_RBX == -1) goto LAB_0495e16f;
    lVar13 = *unaff_RBX * 0x30;
    unaff_RBX = (long *)(*(long *)(unaff_R14 + 0x40) + lVar13);
  } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar13) != _DAT_0f55438c);
  if (unaff_RBX != *(long **)(unaff_R14 + 0x48)) {
    lVar13 = (*(code *)unaff_RBX[3])(0,unaff_RBX + 2,0);
    if (DAT_0f5543a0 == '\0') {
LAB_0495e82a:
      iVar5 = func_0x04108328(&DAT_0f5543a0);
      if (iVar5 != 0) {
        func_0x049dbde0(0xf554388);
        func_0x0410844d(&DAT_0f5543a0);
      }
    }
    if (*(uint *)(lVar13 + 4) == _DAT_0f55438c) {
      plVar8 = (long *)(*(long *)(unaff_R14 + 0x28) +
                       (ulong)((int)((ulong)(*(long *)(unaff_R14 + 0x30) -
                                            *(long *)(unaff_R14 + 0x28)) >> 3) + (int)lVar11 &
                              *(uint *)(unaff_RBX + 1)) * 8);
      do {
        plVar9 = plVar8;
        lVar13 = *plVar9;
        if (lVar13 == -1) goto LAB_0495e16f;
        lVar13 = lVar13 * 0x30;
        plVar8 = (long *)(*(long *)(unaff_R14 + 0x40) + lVar13);
      } while (*(uint *)(*(long *)(unaff_R14 + 0x40) + 8 + lVar13) != *(uint *)(unaff_RBX + 1));
      *plVar9 = *plVar8;
      func_0x049dbe50(in_stack_00000028);
    }
  }
  goto LAB_0495e16f;
}


