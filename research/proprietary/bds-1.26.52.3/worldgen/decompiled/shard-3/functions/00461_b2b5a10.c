/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb3b5a10 (ELF vaddr 0xb2b5a10)
 * Label: caller-of-callee
 * Body:  [[0b3b5a10, 0b3b5bc0] [0b3b5bd0, 0b3b60cd] [0b3b60d0, 0b3b6234] [0b3b6240, 0b3b6383] [0b3b6390, 0b3b6bb6] [0b3b6d22, 0b3b6d52]]
 * Ghidra: FUN_0b3b5a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0b3b5a10(long param_1)

{
  undefined8 **ppuVar1;
  float fVar2;
  undefined8 *puVar3;
  uint uVar4;
  char *pcVar5;
  long *plVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  byte *pbVar11;
  char cVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 **ppuVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long *plStack_118;
  ulong uStack_110;
  long *plStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  byte *pbStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  byte *pbStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  char cStack_88;
  byte *pbStack_80;
  undefined8 **ppuStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puStack_60;
  char cStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((DAT_0f6b30b0 == '\0') && (iVar16 = func_0x04108328(&DAT_0f6b30b0), iVar16 != 0)) {
    _DAT_0f6b2f80 = func_0x0eecbd00(&UNK_012658c2,8,0);
    DAT_0f6b2f88 = 1;
    _DAT_0f6b2f90 = &UNK_014a26d9;
    _DAT_0f6b2f98 = &UNK_014a26d9;
    _DAT_0f6b2fa0 = 0x10;
    DAT_0f6b2fa8 = 1;
    _DAT_0f6b2fb0 = 0;
    _DAT_0f6b2fb8 = _DAT_0f2a6f18;
    uRam000000000f6b2fc0 = _UNK_0f2a6f20;
    _DAT_0f6b2fc8 = _DAT_0f2a6f28;
    uRam000000000f6b2fd0 = _UNK_0f2a6f30;
    _DAT_0f6b2fd8 = 0;
    DAT_0f6b3008 = 0;
    _DAT_0f6b3010 = 0;
    _DAT_0f6b2fe8 = 0;
    uRam000000000f6b2ff0 = 0;
    DAT_0f6b2ff8 = 0;
    _DAT_0f6b3070 = 0;
    uRam000000000f6b3078 = 0;
    _DAT_0f6b3080 = 0;
    DAT_0f6b3068 = 0;
    _DAT_0f6b3038 = 0;
    uRam000000000f6b3040 = 0;
    _DAT_0f6b3028 = 0;
    uRam000000000f6b3030 = 0;
    _DAT_0f6b3018 = 0;
    uRam000000000f6b3020 = 0;
    _DAT_0f6b3048 = 0;
    _DAT_0f6b3058 = &UNK_01e80174;
    _DAT_0f6b3060 = 5;
    _DAT_0f6b3088 = 0;
    DAT_0f6b3090 = 0;
    DAT_0f6b30a0 = 0;
    _DAT_0f6b30a8 = 0;
    func_0x0eee2f40(&UNK_08b30de0,&DAT_0f6b2f80,0xf53dab8);
    func_0x0410844d(&DAT_0f6b30b0);
  }
  puStack_60 = &DAT_0f6b2f80;
  cStack_58 = 0;
  uStack_48 = 0;
  puStack_f0 = (undefined8 *)((ulong)puStack_f0 & 0xffffffffffffff00);
  cStack_c0 = '\0';
  cVar12 = func_0x0eecc050(&DAT_0f6b2f80,auStack_50,&puStack_f0);
  if ((cStack_c0 == '\x01') && (((ulong)puStack_f0 & 1) != 0)) {
    func_0x0412a280(pbStack_e0,(ulong)puStack_f0 & 0xfffffffffffffffe);
  }
  cStack_58 = cVar12;
  lStack_38 = func_0x0417cc60();
  if ((*(long *)(param_1 + 0xc0) == 0) ||
     (lVar19 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48), lVar19 == 0)) {
    uVar15 = 0;
    bVar10 = false;
  }
  else {
    pcVar5 = *(char **)(lVar19 + 0x18);
    plVar23 = *(long **)(lVar19 + 0x20);
    if (plVar23 != (long *)0x0) {
      LOCK();
      plVar23[1] = plVar23[1] + 1;
      UNLOCK();
    }
    if (pcVar5 == (char *)0x0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = *pcVar5;
    }
    if (plVar23 != (long *)0x0) {
      LOCK();
      plVar6 = plVar23 + 1;
      lVar19 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
      }
    }
    bVar10 = false;
    uVar15 = 0;
    if (cVar12 != '\0') {
      lVar19 = 0;
      if (0 < *(long *)(param_1 + 0xa8)) {
        lVar18 = func_0x0417cc60();
        if (*(int *)(param_1 + 0xf0) != 1) {
          cVar12 = func_0x0eeddcf0(&UNK_0141a78b,&UNK_0136474d,0x2a,&UNK_011bf7ae,&UNK_012797ec);
          if (cVar12 != '\0') {
            _DAT_00000000 = 0xdeadc0de;
          }
          if (*(int *)(param_1 + 0xf0) != 1) {
LAB_0b3b6b96:
            uVar21 = func_0x04931450();
            func_0x041084d6(&DAT_0f6b30b0);
            uVar21 = func_0x0eee2d70(uVar21);
            func_0x0eecc380(&puStack_60);
            uVar21 = func_0x0eee2d70(uVar21);
            func_0x0eecc380(&puStack_60);
            func_0x0eee2d70(uVar21);
            pcVar7 = (code *)swi(3);
            uVar14 = (*pcVar7)();
            return (bool)uVar14;
          }
        }
        lVar19 = *(long *)(param_1 + 0xe8);
        plVar23 = *(long **)(lVar19 + 0x90);
        plVar6 = *(long **)(lVar19 + 0x98);
        if (plVar23 != plVar6) {
          uVar25 = 0;
          uStack_110 = 0;
          uVar29 = 0;
          lStack_68 = lVar18;
          do {
            lVar24 = *plVar23;
            lVar19 = lVar18 - *(long *)(lVar24 + 0x128);
            uVar20 = uVar29;
            if (*(long *)(param_1 + 0xa8) * 1000000000 < lVar19) {
              if (uStack_110 <= uVar25) {
                lVar18 = uVar25 - uVar29;
                uVar20 = (lVar18 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
                if (uVar20 < 0x1745d1745d1745e) {
                  lStack_40 = uStack_110 - uVar29;
                  uVar31 = (lStack_40 >> 4) * 0x5d1745d1745d1746;
                  if (uVar20 < uVar31) {
                    uVar20 = uVar31;
                  }
                  if (0xba2e8ba2e8ba2d < (ulong)((lStack_40 >> 4) * 0x2e8ba2e8ba2e8ba3)) {
                    uVar20 = 0x1745d1745d1745d;
                  }
                  if (uVar20 < 0x1745d1745d1745e) {
                    lVar30 = uVar20 * 0xb0;
                    lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar30);
                    if (lVar19 == 0) {
                      FUN_0eec74c0(lVar30,0);
                    }
                    func_0x0eee2f00(lVar19 + lVar18,lVar24,0xb0);
                    lVar24 = SUB168(SEXT816(lVar18) * SEXT816(-0x2e8ba2e8ba2e8ba3),8);
                    uVar20 = ((lVar24 >> 5) - (lVar24 >> 0x3f)) * 0xb0 + lVar19 + lVar18;
                    uVar31 = uVar20;
                    for (uVar27 = uVar29; uVar27 != uVar25; uVar27 = uVar27 + 0xb0) {
                      func_0x0eee2f00(uVar31,uVar27,0xb0);
                      uVar31 = uVar31 + 0xb0;
                    }
                    uStack_110 = lVar30 + lVar19;
                    uVar25 = lVar19 + lVar18 + 0xb0;
                    lVar18 = lStack_68;
                    if (uVar29 != 0) {
                      lVar19 = func_0x0412a280(uVar29,lStack_40);
                      lVar18 = lStack_68;
                    }
                    goto LAB_0b3b5bf2;
                  }
                  func_0x04882eb0();
                }
                func_0x08b30e50();
                goto LAB_0b3b6b96;
              }
              lVar19 = func_0x0eee2f00(uVar25,lVar24,0xb0);
              uVar25 = uVar25 + 0xb0;
            }
LAB_0b3b5bf2:
            plVar23 = plVar23 + 1;
            uVar29 = uVar20;
          } while (plVar23 != plVar6);
          for (; uVar29 != uVar25; uVar29 = uVar29 + 0xb0) {
            lVar19 = func_0x0b3b6d60(param_1,uVar29,0x39);
          }
          plStack_118 = plVar6;
          if (uVar20 != 0) {
            lVar19 = func_0x0412a280(uVar20,uStack_110 - uVar20);
          }
        }
      }
      uVar15 = (undefined4)CONCAT71((int7)((ulong)lVar19 >> 8),1);
      bVar10 = true;
    }
  }
  plStack_118 = (long *)CONCAT44(plStack_118._4_4_,uVar15);
  lVar19 = *(long *)(param_1 + 0x110);
  uVar4 = *(uint *)(*(long *)(param_1 + 0xd8) + 4);
  if ((DAT_0f5a9a80 == '\0') && (iVar16 = func_0x04108328(&DAT_0f5a9a80), iVar16 != 0)) {
    func_0x075755e0(0xf5a9a68);
    func_0x0410844d(&DAT_0f5a9a80);
  }
  plVar23 = (long *)(*(long *)(lVar19 + 0x28) +
                    (ulong)((int)((ulong)(*(long *)(lVar19 + 0x30) - *(long *)(lVar19 + 0x28)) >> 3)
                            - 1U & _DAT_0f5a9a6c) * 8);
  do {
    if (*plVar23 == -1) goto LAB_0b3b5ee7;
    lVar18 = *plVar23 * 0x30;
    plVar23 = (long *)(*(long *)(lVar19 + 0x40) + lVar18);
  } while (*(uint *)(*(long *)(lVar19 + 0x40) + 8 + lVar18) != _DAT_0f5a9a6c);
  if (((plVar23 != *(long **)(lVar19 + 0x48)) && ((int)plVar23[5] == -0x243f43f)) &&
     (plVar6 = (long *)plVar23[2],
     *(char *)((long)plVar23 + 0x2c) != '\x04' && plVar6 != (long *)0x0)) {
    fVar2 = *(float *)(*(long *)(param_1 + 0xd8) + 0x1c);
    *(float *)(*(long *)(param_1 + 0xd8) + 0x1c) = fVar2 - (float)(int)fVar2;
    *plVar6 = *plVar6 + (long)(int)((int)fVar2 + uVar4);
  }
LAB_0b3b5ee7:
  plStack_f8 = (long *)(ulong)uVar4;
  if (uVar4 == 0) {
    func_0x0b3b5730(param_1);
    lVar19 = *(long *)(param_1 + 0xc0);
    ppuVar22 = (undefined8 **)0x0;
    if (((lVar19 != 0) && (*(char *)(lVar19 + 0x28) == '\x01')) &&
       ((*(char **)(lVar19 + 0x30) != (char *)0x0 &&
        ((**(char **)(lVar19 + 0x30) == '\x01' && (*(long **)(lVar19 + 0x40) != (long *)0x0)))))) {
      (**(code **)(**(long **)(lVar19 + 0x40) + 0xc70))();
    }
  }
  else {
    uVar28 = uVar4;
    if (bVar10) {
      do {
        func_0x0eec76b0(&DAT_0f5463d0,8);
        lVar19 = func_0x0417cc60();
        if ((DAT_0f6b2968 == '\0') && (iVar16 = func_0x04108328(&DAT_0f6b2968), iVar16 != 0)) {
          func_0x0eee2f40(&UNK_048dfa30,0xf544a60,0xf53dab8);
          func_0x0410844d(&DAT_0f6b2968);
        }
        uVar21 = func_0x0eee2fc0();
        func_0x048dfa50(&uStack_b8,0xf544a60,uVar21);
        puStack_f0 = (undefined8 *)0x6;
        puStack_e8 = (undefined8 *)&UNK_0f2be708;
        pbStack_e0 = (byte *)0x0;
        plStack_d8 = (long *)0x0;
        uStack_c8 = func_0x0417cc60();
        lStack_d0 = CONCAT71(lStack_d0._1_7_,1);
        func_0x0eec76b0(&DAT_0f5463d0,2);
        ppuVar22 = (undefined8 **)func_0x0417cc60();
        (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
        if (*(long *)(param_1 + 0xc0) != 0) {
          func_0x0b5ac010();
        }
        plVar23 = *(long **)(param_1 + 0x88);
        if (plVar23 != (long *)0x0) {
          lVar18 = func_0x0417cc60();
          ppuStack_90 = (undefined8 **)(lVar18 - (long)ppuVar22);
          (**(code **)(*plVar23 + 0x18))(plVar23,&ppuStack_90);
        }
        _DAT_0f6470e0 = func_0x0417cc60();
        _DAT_0f6470e0 = _DAT_0f6470e0 - (long)ppuVar22;
        func_0x0412d550(0xf5508c0);
        LOCK();
        _DAT_0f550990 = _DAT_0f550990 + 1;
        UNLOCK();
        FUN_0412d610(0xf5508c0);
        plVar23 = _DAT_0f5509a8;
        pbVar11 = _DAT_0f5509a0;
        if ((_DAT_0f5509a0 == (byte *)0x0) || (*_DAT_0f5509a0 != 1)) {
          ppuStack_90 = (undefined8 **)0x0;
          cStack_88 = '\0';
          func_0x0eee02f0(0xf5508c0);
        }
        else {
          bVar13 = 1;
          if (_DAT_0f5509a8 != (long *)0x0) {
            LOCK();
            _DAT_0f5509a8[1] = _DAT_0f5509a8[1] + 1;
            UNLOCK();
            bVar13 = *pbVar11;
          }
          lVar18 = _DAT_0f5509b0;
          ppuStack_90 = (undefined8 **)0xf5508c0;
          cStack_88 = '\x01';
          pbStack_80 = pbVar11;
          ppuStack_78 = (undefined8 **)plVar23;
          lStack_70 = _DAT_0f5509b0;
          if ((bVar13 & 1) != 0) {
            lVar24 = func_0x0417cc60();
            func_0x0cb2a340(lVar18 + 0x78,lVar24 - lVar19);
          }
          pbStack_80 = (byte *)0x0;
          ppuStack_78 = (undefined8 **)0x0;
          ppuVar22 = (undefined8 **)0x0;
          if (plVar23 != (long *)0x0) {
            LOCK();
            plVar6 = plVar23 + 1;
            lVar19 = *plVar6;
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (lVar19 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
              func_0x0412c2d0(plVar23);
              ppuVar22 = ppuStack_78;
              lStack_70 = 0;
              if (ppuStack_78 != (undefined8 **)0x0) {
                lStack_70 = 0;
                LOCK();
                ppuVar1 = ppuStack_78 + 1;
                puVar3 = *ppuVar1;
                *ppuVar1 = (undefined8 *)((long)*ppuVar1 + -1);
                UNLOCK();
                if (puVar3 == (undefined8 *)0x0) {
                  (*(code *)(*ppuStack_78)[2])(ppuStack_78);
                  func_0x0412c2d0(ppuVar22);
                }
              }
            }
            else {
              ppuVar22 = (undefined8 **)0x0;
              lStack_70 = 0;
            }
          }
        }
        if (cStack_88 == '\x01') {
          func_0x0eee02f0(ppuStack_90);
        }
        func_0x0b5fb220(&puStack_f0);
        func_0x048dff30(&uStack_b8);
        func_0x0b3b5730(param_1);
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    else {
      ppuVar22 = &puStack_f0;
      do {
        func_0x0eec76b0(&DAT_0f5463d0,8);
        if ((DAT_0f6b2960 == '\0') && (iVar16 = func_0x04108328(&DAT_0f6b2960), iVar16 != 0)) {
          func_0x0eee2f40(&UNK_048dfa30,0xf544a00,0xf53dab8);
          func_0x0410844d(&DAT_0f6b2960);
        }
        func_0x048dfa50(&uStack_b8,0xf544a00,_DAT_0f6467c0);
        puStack_f0 = (undefined8 *)0x5;
        puStack_e8 = (undefined8 *)&UNK_0f2be708;
        pbStack_e0 = (byte *)0x0;
        plStack_d8 = (long *)0x0;
        uStack_c8 = func_0x0417cc60();
        lStack_d0 = CONCAT71(lStack_d0._1_7_,1);
        (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
        if (*(long *)(param_1 + 0xc0) != 0) {
          func_0x0b5ac010();
        }
        func_0x0b5fb220(ppuVar22);
        func_0x048dff30(&uStack_b8);
        func_0x0b3b5730(param_1);
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
  }
  iVar16 = *(int *)(*(long *)(param_1 + 0xe0) + 4);
  if (iVar16 != 0) {
    if (bVar10) {
      iVar26 = 0;
      ppuVar22 = &puStack_f0;
      do {
        lVar19 = func_0x0417cc60();
        if ((DAT_0f6b2978 == '\0') && (iVar17 = func_0x04108328(&DAT_0f6b2978), iVar17 != 0)) {
          func_0x0eee2f40(&UNK_048dfa30,0xf544b20,0xf53dab8);
          func_0x0410844d(&DAT_0f6b2978);
        }
        uVar21 = func_0x0eee2fc0();
        func_0x048dfa50(ppuVar22,0xf544b20,uVar21);
        if (*(char *)(param_1 + 0x92) == '\x01') {
          (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          *(undefined1 *)(param_1 + 0x92) = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                  (*(long **)(param_1 + 0x18),iVar26,iVar16 + -1);
        func_0x0412d550(0xf5508c0);
        LOCK();
        _DAT_0f550990 = _DAT_0f550990 + 1;
        UNLOCK();
        FUN_0412d610(0xf5508c0);
        plVar23 = _DAT_0f5509a8;
        pbVar11 = _DAT_0f5509a0;
        if ((_DAT_0f5509a0 == (byte *)0x0) || (*_DAT_0f5509a0 != 1)) {
          uStack_b8 = 0;
          lStack_b0 = (ulong)lStack_b0._1_7_ << 8;
          func_0x0eee02f0(0xf5508c0);
        }
        else {
          bVar13 = 1;
          if (_DAT_0f5509a8 != (long *)0x0) {
            LOCK();
            _DAT_0f5509a8[1] = _DAT_0f5509a8[1] + 1;
            UNLOCK();
            bVar13 = *pbVar11;
          }
          lVar18 = _DAT_0f5509b0;
          uStack_b8 = 0xf5508c0;
          lStack_b0 = CONCAT71(lStack_b0._1_7_,1);
          pbStack_a8 = pbVar11;
          plStack_a0 = plVar23;
          lStack_98 = _DAT_0f5509b0;
          if ((bVar13 & 1) != 0) {
            lVar24 = func_0x0417cc60();
            func_0x0cb2a340(lVar18 + 0xa8,lVar24 - lVar19);
          }
          pbStack_a8 = (byte *)0x0;
          plStack_a0 = (long *)0x0;
          if (plVar23 != (long *)0x0) {
            LOCK();
            plVar6 = plVar23 + 1;
            lVar19 = *plVar6;
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (lVar19 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
              func_0x0412c2d0(plVar23);
              plVar23 = plStack_a0;
              lStack_98 = 0;
              if (plStack_a0 != (long *)0x0) {
                lStack_98 = 0;
                LOCK();
                plVar6 = plStack_a0 + 1;
                lVar19 = *plVar6;
                *plVar6 = *plVar6 + -1;
                UNLOCK();
                if (lVar19 == 0) {
                  (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
                  func_0x0412c2d0(plVar23);
                }
              }
            }
            else {
              lStack_98 = 0;
            }
          }
        }
        if ((char)lStack_b0 == '\x01') {
          func_0x0eee02f0(uStack_b8);
        }
        func_0x048dff30(ppuVar22);
        iVar26 = iVar26 + 1;
      } while (iVar16 != iVar26);
    }
    else {
      iVar26 = 0;
      ppuVar22 = &puStack_f0;
      do {
        if ((DAT_0f6b2970 == '\0') && (iVar17 = func_0x04108328(&DAT_0f6b2970), iVar17 != 0)) {
          func_0x0eee2f40(&UNK_048dfa30,0xf544ac0,0xf53dab8);
          func_0x0410844d(&DAT_0f6b2970);
        }
        func_0x048dfa50(ppuVar22,0xf544ac0,_DAT_0f6467c0);
        if (*(char *)(param_1 + 0x92) == '\x01') {
          (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          *(undefined1 *)(param_1 + 0x92) = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                  (*(long **)(param_1 + 0x18),iVar26,iVar16 + -1);
        func_0x048dff30(ppuVar22);
        iVar26 = iVar26 + 1;
      } while (iVar16 != iVar26);
    }
  }
  lVar18 = func_0x0417cc60();
  lVar19 = *(long *)(param_1 + 0xc0);
  if (lVar19 == 0) {
    lStack_b0 = 0;
  }
  else if ((((*(char *)(lVar19 + 0x28) == '\x01') && (*(char **)(lVar19 + 0x30) != (char *)0x0)) &&
           (**(char **)(lVar19 + 0x30) != '\0')) && (*(long **)(lVar19 + 0x40) != (long *)0x0)) {
    lStack_b0 = (**(code **)(**(long **)(lVar19 + 0x40) + 0xa28))();
  }
  else {
    lStack_b0 = 0;
  }
  puVar3 = (undefined8 *)(ulong)uVar4;
  uStack_b8 = CONCAT71(uStack_b8._1_7_,(char)uVar15);
  puStack_f0 = &uStack_b8;
  puStack_e8 = puStack_f0;
  if ((ulong)*(uint *)(param_1 + 0xf0) == 0xffffffff) {
    lVar19 = func_0x04931450();
  }
  else {
    ppuStack_90 = &puStack_f0;
    (**(code **)(&UNK_0f2a7cd8 + (ulong)*(uint *)(param_1 + 0xf0) * 8))(&ppuStack_90,param_1 + 0xe8)
    ;
    if (0 < (int)uVar4) {
      _DAT_0f6470e8 = func_0x0417cc60();
      _DAT_0f6470e8 = _DAT_0f6470e8 - lVar18;
    }
    ppuVar22 = (undefined8 **)func_0x0417cc60();
    lVar19 = func_0x0417cc60();
    if (DAT_0f778830 != '\0') goto LAB_0b3b66be;
  }
  iVar26 = func_0x04108328(&DAT_0f778830);
  if (iVar26 != 0) {
    _DAT_0f778828 = func_0x0417cc60();
    func_0x0410844d(&DAT_0f778830);
  }
LAB_0b3b66be:
  dVar8 = (double)(lVar19 - _DAT_0f778828) / _DAT_014f0138;
  *(double *)(param_1 + 0x98) = dVar8 - *(double *)(param_1 + 0xa0);
  *(double *)(param_1 + 0xa0) = dVar8;
  lVar19 = *(long *)(param_1 + 0xc0);
  bVar9 = true;
  if ((((lVar19 != 0) && (*(char *)(lVar19 + 0x28) == '\x01')) &&
      ((*(char **)(lVar19 + 0x30) != (char *)0x0 &&
       ((**(char **)(lVar19 + 0x30) == '\x01' &&
        (plVar23 = *(long **)(lVar19 + 0x40), bVar9 = true, plVar23 != (long *)0x0)))))) &&
     (cVar12 = (**(code **)(*plVar23 + 0x550))(plVar23), cVar12 != '\0')) {
    plVar23 = (long *)(**(code **)(*plVar23 + 0x560))(plVar23);
    (**(code **)(*plVar23 + 0x80))(&puStack_f0,plVar23);
    plStack_118 = (long *)((ulong)puStack_e8 >> 8);
    puVar3 = puStack_e8;
    plStack_f8 = plStack_d8;
    bVar9 = false;
    if ((*(char *)(param_1 + 0x91) == '\0') && ((int)puStack_f0 == 1)) {
      *(undefined2 *)(param_1 + 0x91) = 0x101;
      bVar9 = false;
    }
  }
  if (bVar10) {
    func_0x0412d550(0xf5508c0);
    LOCK();
    _DAT_0f550990 = _DAT_0f550990 + 1;
    UNLOCK();
    FUN_0412d610(0xf5508c0);
    plVar23 = _DAT_0f5509a8;
    pbVar11 = _DAT_0f5509a0;
    if ((_DAT_0f5509a0 == (byte *)0x0) || (*_DAT_0f5509a0 != 1)) {
      puStack_f0 = (undefined8 *)0x0;
      puStack_e8 = (undefined8 *)((ulong)puStack_e8._1_7_ << 8);
      func_0x0eee02f0(0xf5508c0);
    }
    else {
      bVar13 = 1;
      if (_DAT_0f5509a8 != (long *)0x0) {
        LOCK();
        _DAT_0f5509a8[1] = _DAT_0f5509a8[1] + 1;
        UNLOCK();
        bVar13 = *pbVar11;
      }
      lVar19 = _DAT_0f5509b0;
      puStack_f0 = (undefined8 *)0xf5508c0;
      puStack_e8 = (undefined8 *)CONCAT71(puStack_e8._1_7_,1);
      pbStack_e0 = pbVar11;
      plStack_d8 = plVar23;
      lStack_d0 = _DAT_0f5509b0;
      if ((bVar13 & 1) != 0) {
        func_0x0cb2a340(_DAT_0f5509b0 + 0xd8,(long)ppuVar22 - lVar18);
        if ((*pbVar11 == 0) &&
           (cVar12 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_01330b20),
           cVar12 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar18 = func_0x0417cc60();
        func_0x0cb2a340(lVar19 + 0x48,lVar18 - lStack_38);
      }
      pbStack_e0 = (byte *)0x0;
      plStack_d8 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        LOCK();
        plVar6 = plVar23 + 1;
        lVar19 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          func_0x0412c2d0(plVar23);
        }
        plVar23 = plStack_d8;
        lStack_d0 = 0;
        if (plStack_d8 != (long *)0x0) {
          LOCK();
          plVar6 = plStack_d8 + 1;
          lVar19 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            func_0x0412c2d0(plVar23);
          }
        }
      }
    }
    if ((char)puStack_e8 == '\x01') {
      func_0x0eee02f0(puStack_f0);
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x0d53a4d0();
  }
  if (!bVar9 && ((ulong)puVar3 & 1) != 0) {
    func_0x0412a280(plStack_f8,(ulong)((byte)puVar3 & 0xfe) | (long)plStack_118 << 8);
  }
  if (cStack_58 == '\x01') {
    func_0x0eec86b0(&DAT_0f5463d0,auStack_50,puStack_60 + 0x60);
  }
  return iVar16 != 0;
}


