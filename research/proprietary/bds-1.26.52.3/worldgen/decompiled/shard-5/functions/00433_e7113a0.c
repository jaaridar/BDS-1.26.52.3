/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8113a0 (ELF vaddr 0xe7113a0)
 * Label: caller-of-callee
 * Body:  [[0e8113a0, 0e8115ce] [0e8115d0, 0e81179c] [0e8117a0, 0e8118bb] [0e8118c0, 0e811907] [0e811910, 0e8119bd] [0e8119c0, 0e811a0d] [0e811a10, 0e811a33] [0e811a40, 0e811e21] [0e811e30, 0e811e68] [0e811e70, 0e811f0b] [0e811f10, 0e811f62] [0e811f70, 0e811f92] [0e811fa0, 0e811fe4] [0e811ff0, 0e812016] [0e812020, 0e8121c8] [0e8121d0, 0e812309] [0e812310, 0e812576]]
 * Ghidra: FUN_0e8113a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e8113a0(void)

{
  byte bVar1;
  byte ****ppppbVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte *****pppppbVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  byte *******pppppppbVar10;
  byte ******ppppppbVar11;
  ulong uVar12;
  long *plVar13;
  byte ******ppppppbVar14;
  byte *****pppppbVar15;
  byte ******ppppppbVar16;
  byte *****pppppbVar17;
  byte ******ppppppbVar18;
  long lVar19;
  ulong uVar20;
  bool bVar21;
  float fVar22;
  undefined1 auVar23 [16];
  long *plStack_1b0;
  undefined1 auStack_1a8 [8];
  ulong uStack_1a0;
  byte ******ppppppbStack_198;
  byte *******pppppppbStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  int iStack_168;
  char cStack_164;
  undefined8 uStack_160;
  long lStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  byte *****pppppbStack_118;
  byte *****pppppbStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_b8;
  long *plStack_b0;
  byte *****pppppbStack_a0;
  byte *******pppppppbStack_98;
  undefined4 uStack_90;
  byte *****pppppbStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plStack_1b0 = &lStack_130;
  uStack_108 = 0;
  uStack_e8 = 0;
  uStack_e6 = 0;
  uStack_e0 = 0;
  uStack_de = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  uStack_ee = 0;
  pppppbStack_118 = (byte *****)0x0;
  pppppbStack_110 = (byte *****)0x0;
  lStack_128 = 0;
  lStack_120 = 0;
  plStack_138 = (long *)0x0;
  lStack_130 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_140 = (long *)0x0;
  uStack_100 = 0x3f600000;
  func_0x048af640(plStack_1b0,8);
  uStack_e8 = 0;
  uStack_e6 = 0;
  uStack_e0 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  uStack_ee = 0;
  puStack_148 = &UNK_0f534768;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef44a60;
  plStack_140 = plVar8 + 3;
  *(undefined1 *)(plVar8 + 3) = 1;
  puStack_148 = &UNK_0ef471f0;
  plStack_138 = plVar8;
  if (DAT_0f761888 == '\0') goto LAB_0e8124ec;
LAB_0e811492:
  func_0x0e7f63e0(&puStack_148);
  if ((DAT_0f741ee0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f741ee0), iVar7 != 0)) {
    func_0x0df641a0(0xf741ec8);
    FUN_0410844d(&DAT_0f741ee0);
  }
  pppppbVar17 = (byte *****)
                (lStack_130 +
                (ulong)((int)((ulong)(lStack_128 - lStack_130) >> 3) - 1U & _DAT_0f741ecc) * 8);
  do {
    ppppbVar2 = *pppppbVar17;
    if (ppppbVar2 == (byte ****)0xffffffffffffffff) goto LAB_0e81150c;
    pppppbVar17 = pppppbStack_118 + (long)ppppbVar2 * 3;
  } while (*(uint *)(pppppbStack_118 + (long)ppppbVar2 * 3 + 1) != _DAT_0f741ecc);
  if (pppppbVar17 == pppppbStack_110) {
LAB_0e81150c:
    pppppppbStack_188 = (byte *******)0x0;
    plStack_180 = (long *)0x0;
    func_0x048b1dc0(&pppppppbStack_188);
    pppppppbStack_98 = pppppppbStack_188;
    plStack_1b0 = plStack_180;
  }
  else {
    pppppppbStack_98 = (byte *******)pppppbVar17[2];
  }
  if (pppppppbStack_98 == (byte *******)0x0) {
    lVar9 = func_0x048aead0(plStack_1b0);
    if (*(long *)(lVar9 + 0x78) == 0) goto LAB_0e811d25;
    lVar9 = func_0x048aead0(plStack_1b0);
    pppppbVar17 = *(byte ******)(*(long *)(lVar9 + 0x78) + 0x48);
    lVar9 = func_0x048aead0(plStack_1b0);
    pppppbVar15 = *(byte ******)(*(long *)(lVar9 + 0x78) + 0x50);
    pppppbVar6 = pppppbVar15;
    if (pppppbVar17 == pppppbVar15) goto LAB_0e811d25;
  }
  else {
    ppppppbVar16 = pppppppbStack_98[0xf];
    if (ppppppbVar16 == (byte ******)0x0) goto LAB_0e811d25;
    pppppbVar17 = ppppppbVar16[9];
    pppppbVar15 = ppppppbVar16[10];
    pppppbVar6 = pppppbVar15;
    if (pppppbVar17 == pppppbVar15) goto LAB_0e811d25;
  }
  do {
    pppppbStack_a0 = pppppbVar6;
    uStack_90 = *(undefined4 *)pppppbVar17;
    pppppbStack_88 = pppppbVar17;
    plStack_80 = plStack_1b0;
    plVar8 = (long *)(*(code *)pppppbVar17[7])();
    if (*(uint *)(*plVar8 + 4) == _DAT_0f741ecc) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      pcStack_60 = (code *)0x0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x05d84ba0(&uStack_78);
      func_0x05d9a920(&pppppppbStack_188,&pppppbStack_88,&uStack_78);
      uVar4 = uStack_160;
      pppppppbVar10 = pppppppbStack_188;
      if (cStack_164 == '\x02') {
        pppppppbVar10 = (byte *******)&pppppppbStack_188;
      }
      if (pppppppbVar10 == (byte *******)0x0 || iStack_168 != -0xac02810) {
        if (lStack_158 == 0) {
          (*pcStack_150)(0,&pppppppbStack_188,0);
        }
        pppppppbVar10 = pppppppbStack_188;
        if (cStack_164 == '\x02') {
          pppppppbVar10 = (byte *******)&pppppppbStack_188;
        }
        pppppppbVar10 = (byte *******)func_0x0488e200(uVar4,lStack_158,0xf53fd7f0,pppppppbVar10);
      }
      uVar5 = uStack_90;
      bVar1 = *(byte *)pppppppbVar10;
      pppppppbVar10 = pppppppbStack_98;
      if (pppppppbStack_98 == (byte *******)0x0) {
        pppppppbVar10 = (byte *******)func_0x048aead0(plStack_1b0,0,uStack_90);
      }
      plVar8 = (long *)func_0x048b0c90(plStack_1b0,pppppppbVar10,uVar5,1);
      plVar13 = plStack_1b0;
      if (plVar8 == (long *)0x0) {
        plStack_d8 = (long *)0x0;
        plStack_d0 = (long *)0x0;
        func_0x048b0d20(&plStack_d8);
        plStack_b8 = plStack_d8;
        plStack_b0 = plStack_d0;
        plVar8 = plStack_b8;
        plVar13 = plStack_b0;
        if (plStack_d8 != (long *)0x0) goto LAB_0e81175f;
        auStack_1a8 = (undefined1  [8])((ulong)auStack_1a8 & 0xffffffffffffff00);
        uVar12 = 0;
        ppppppbVar16 = (byte ******)(auStack_1a8 + 1);
      }
      else {
LAB_0e81175f:
        plStack_b0 = plVar13;
        plStack_b8 = plVar8;
        auVar23 = func_0x0ed6ae90(&plStack_b8);
        uVar12 = auVar23._8_8_;
        if (0xfffffffffffffff7 < uVar12) break;
        if (uVar12 < 0x17) {
          auStack_1a8[0] = auVar23[8] * '\x02';
          ppppppbVar16 = (byte ******)(auStack_1a8 + 1);
          if (uVar12 == 0) {
            uVar12 = 0;
            goto LAB_0e8117f9;
          }
        }
        else {
          uVar20 = (uVar12 | 7) + 1;
          if ((uVar12 | 7) == 0x17) {
            uVar20 = 0x1a;
          }
          ppppppbVar16 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
          if (ppppppbVar16 == (byte ******)0x0) {
            func_0x0eec74c0(uVar20,0);
          }
          auStack_1a8 = (undefined1  [8])(uVar20 | 1);
          uStack_1a0 = uVar12;
          ppppppbStack_198 = ppppppbVar16;
        }
        func_0x0eee2ee0(ppppppbVar16,auVar23._0_8_,uVar12);
      }
LAB_0e8117f9:
      ppppppbVar14 = _DAT_0f761868;
      ppppppbVar18 = (byte ******)(ulong)bVar1;
      *(undefined1 *)((long)ppppppbVar16 + uVar12) = 0;
      if (_DAT_0f761868 != (byte ******)0x0) {
        uVar12 = (long)_DAT_0f761868 - ((ulong)_DAT_0f761868 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
        uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar12 >> 0x38 < 2) {
          ppppppbVar16 = (byte ******)(ulong)((uint)bVar1 & (int)_DAT_0f761868 - 1U);
        }
        else {
          ppppppbVar16 = ppppppbVar18;
          if (_DAT_0f761868 <= ppppppbVar18) {
            ppppppbVar16 = (byte ******)(ulong)(byte)(bVar1 % (byte)_DAT_0f761868);
          }
        }
        plVar8 = *(long **)(_DAT_0f761860 + (long)ppppppbVar16 * 8);
        if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
          if ((byte)(uVar12 >> 0x38) < 2) {
            do {
              if ((byte ******)plVar8[1] == ppppppbVar18) {
                if (*(byte *)(plVar8 + 2) == bVar1) goto LAB_0e811c41;
              }
              else if ((byte ******)((ulong)plVar8[1] & (long)_DAT_0f761868 - 1U) != ppppppbVar16)
              break;
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
          else {
            do {
              ppppppbVar11 = (byte ******)plVar8[1];
              if (ppppppbVar11 == ppppppbVar18) {
                if (*(byte *)(plVar8 + 2) == bVar1) goto LAB_0e811c41;
              }
              else {
                if (_DAT_0f761868 <= ppppppbVar11) {
                  if (((ulong)ppppppbVar11 | (ulong)_DAT_0f761868) >> 0x20 == 0) {
                    if ((byte ******)
                        (((ulong)ppppppbVar11 & 0xffffffff) % ((ulong)_DAT_0f761868 & 0xffffffff))
                        == ppppppbVar16) goto LAB_0e8118c9;
                    break;
                  }
                  ppppppbVar11 = (byte ******)((ulong)ppppppbVar11 % (ulong)_DAT_0f761868);
                }
                if (ppppppbVar11 != ppppppbVar16) break;
              }
LAB_0e8118c9:
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
      }
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      plStack_d0 = (long *)&DAT_0f761860;
      uStack_c8 = 1;
      *plVar8 = 0;
      plVar8[1] = (long)ppppppbVar18;
      *(byte *)(plVar8 + 2) = bVar1;
      plVar8[5] = (long)ppppppbStack_198;
      plVar8[3] = (long)auStack_1a8;
      plVar8[4] = uStack_1a0;
      auStack_1a8 = (undefined1  [8])0x0;
      uStack_1a0 = 0;
      ppppppbStack_198 = (byte ******)0x0;
      plStack_d8 = plVar8;
      if ((long)ppppppbVar14 < 0) {
        fVar22 = (float)ppppppbVar14;
        if (ppppppbVar14 != (byte ******)0x0) goto LAB_0e811a23;
LAB_0e811a40:
        uVar12 = 1;
        if ((byte ******)0x2 < ppppppbVar14) {
          uVar12 = (ulong)(((ulong)ppppppbVar14 & (long)ppppppbVar14 - 1U) != 0);
        }
        ppppppbVar14 = (byte ******)((long)ppppppbVar14 * 2 | uVar12);
        fVar22 = (float)func_0x0eee3ab0((float)(_DAT_0f761878 + 1) / _DAT_0f761880);
        ppppppbVar16 = (byte ******)
                       ((long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22);
        if (ppppppbVar16 < ppppppbVar14) {
          ppppppbVar16 = ppppppbVar14;
        }
        ppppppbVar14 = (byte ******)0x2;
        if ((ppppppbVar16 == (byte ******)0x1) ||
           (ppppppbVar14 = ppppppbVar16, ((ulong)ppppppbVar16 & (long)ppppppbVar16 - 1U) == 0)) {
          bVar21 = ppppppbVar14 < _DAT_0f761868;
          if (ppppppbVar14 <= _DAT_0f761868) goto LAB_0e811ae9;
LAB_0e811aaf:
          func_0x0e8137c0(&DAT_0f761860,ppppppbVar14);
        }
        else {
          ppppppbVar14 = (byte ******)func_0x0412c3f0();
          bVar21 = ppppppbVar14 < _DAT_0f761868;
          if (_DAT_0f761868 < ppppppbVar14) goto LAB_0e811aaf;
LAB_0e811ae9:
          ppppppbVar16 = _DAT_0f761868;
          if (bVar21) {
            fVar22 = (float)func_0x0eee3ab0((float)_DAT_0f761878 / _DAT_0f761880);
            ppppppbVar11 = (byte ******)
                           ((long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22);
            if ((ppppppbVar16 < (byte ******)0x3) ||
               (uVar12 = (long)ppppppbVar16 - ((ulong)ppppppbVar16 >> 1 & 0x5555555555555555),
               uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
               1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              ppppppbVar11 = (byte ******)func_0x0412c3f0(ppppppbVar11);
            }
            else if ((byte ******)0x1 < ppppppbVar11) {
              lVar9 = 0x3f;
              if ((long)ppppppbVar11 - 1U != 0) {
                for (; (long)ppppppbVar11 - 1U >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              ppppppbVar11 = (byte ******)(1L << (-((byte)lVar9 ^ 0x3f) & 0x3f));
            }
            if (ppppppbVar14 <= ppppppbVar11) {
              ppppppbVar14 = ppppppbVar11;
            }
            if (ppppppbVar14 < ppppppbVar16) goto LAB_0e811aaf;
          }
        }
        ppppppbVar14 = _DAT_0f761868;
        if (((ulong)_DAT_0f761868 & (long)_DAT_0f761868 - 1U) == 0) {
          ppppppbVar16 = (byte ******)(ulong)((uint)bVar1 & (int)_DAT_0f761868 - 1U);
        }
        else {
          ppppppbVar16 = ppppppbVar18;
          if ((_DAT_0f761868 <= ppppppbVar18) && (_DAT_0f761868 <= ppppppbVar18)) {
            ppppppbVar16 = (byte ******)((ulong)ppppppbVar18 % ((ulong)_DAT_0f761868 & 0xffffffff));
          }
        }
      }
      else {
        fVar22 = (float)(long)ppppppbVar14;
        if (ppppppbVar14 == (byte ******)0x0) goto LAB_0e811a40;
LAB_0e811a23:
        if (fVar22 * _DAT_0f761880 < (float)(_DAT_0f761878 + 1)) goto LAB_0e811a40;
      }
      lVar9 = _DAT_0f761860;
      plVar13 = *(long **)(_DAT_0f761860 + (long)ppppppbVar16 * 8);
      if (plVar13 == (long *)0x0) {
        *plVar8 = (long)_DAT_0f761870;
        _DAT_0f761870 = plVar8;
        *(undefined **)(lVar9 + (long)ppppppbVar16 * 8) = &DAT_0f761870;
        if (*plVar8 != 0) {
          ppppppbVar16 = *(byte *******)(*plVar8 + 8);
          if (((ulong)ppppppbVar14 & (long)ppppppbVar14 - 1U) == 0) {
            *(long **)(lVar9 + ((ulong)ppppppbVar16 & (long)ppppppbVar14 - 1U) * 8) = plVar8;
          }
          else {
            if (ppppppbVar14 <= ppppppbVar16) {
              if (((ulong)ppppppbVar16 | (ulong)ppppppbVar14) >> 0x20 == 0) {
                *(long **)(lVar9 + (((ulong)ppppppbVar16 & 0xffffffff) %
                                   ((ulong)ppppppbVar14 & 0xffffffff)) * 8) = plVar8;
                goto LAB_0e811c3a;
              }
              ppppppbVar16 = (byte ******)((ulong)ppppppbVar16 % (ulong)ppppppbVar14);
            }
            *(long **)(lVar9 + (long)ppppppbVar16 * 8) = plVar8;
          }
        }
      }
      else {
        *plVar8 = *plVar13;
        *plVar13 = (long)plVar8;
      }
LAB_0e811c3a:
      _DAT_0f761878 = _DAT_0f761878 + 1;
LAB_0e811c41:
      if (((ulong)auStack_1a8 & 1) != 0) {
        func_0x0412a280(ppppppbStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
      }
      pppppbVar15 = pppppbStack_a0;
      if (pcStack_170 != (code *)0x0) {
        (*pcStack_170)(&pppppppbStack_188);
      }
      if (pcStack_60 != (code *)0x0) {
        (*pcStack_60)(&uStack_78);
      }
    }
    pppppbVar17 = pppppbVar17 + 0xd;
    pppppbVar6 = pppppbStack_a0;
    if (pppppbVar17 == pppppbVar15) goto LAB_0e811d25;
  } while( true );
  func_0x04882e30();
LAB_0e8124ec:
  iVar7 = func_0x04108328(&DAT_0f761888);
  if (iVar7 != 0) {
    _DAT_0f761870 = (long *)0x0;
    _DAT_0f761878 = 0;
    _DAT_0f761860 = 0;
    _DAT_0f761868 = (byte ******)0x0;
    _DAT_0f761880 = 1.0;
    func_0x0eee2f40(&UNK_0e8126c0,&DAT_0f761860,0xf53dab8);
    FUN_0410844d(&DAT_0f761888);
  }
  goto LAB_0e811492;
LAB_0e811d25:
  _DAT_0f7617e0 = (byte *******)0x0;
  _DAT_0f7617e8 = 0;
  _DAT_0f7617d0 = 0;
  _DAT_0f7617d8 = (byte ******)0x0;
  _DAT_0f7617f0 = _DAT_0f761880;
  ppppppbVar16 = _DAT_0f761868;
  ppppppbVar14 = (byte ******)0x2;
  if (_DAT_0f761868 != (byte ******)0x1) {
    if (((ulong)_DAT_0f761868 & (long)_DAT_0f761868 - 1U) == 0) {
      bVar21 = false;
      ppppppbVar14 = _DAT_0f761868;
      if (_DAT_0f761868 == (byte ******)0x0) {
LAB_0e8123bc:
        ppppppbVar11 = _DAT_0f7617d8;
        ppppppbVar18 = _DAT_0f7617d8;
        plVar8 = _DAT_0f761870;
        plVar13 = plStack_138;
        if (!bVar21) goto joined_r0x0e811d8a;
        fVar22 = (float)func_0x0eee3ab0((float)_DAT_0f7617e8 / _DAT_0f7617f0);
        ppppppbVar14 = (byte ******)
                       ((long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22);
        if ((ppppppbVar11 < (byte ******)0x3) ||
           (uVar12 = (long)ppppppbVar11 - ((ulong)ppppppbVar11 >> 1 & 0x5555555555555555),
           uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
           1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          ppppppbVar14 = (byte ******)func_0x0412c3f0(ppppppbVar14);
          if (ppppppbVar14 < ppppppbVar16) {
            ppppppbVar14 = ppppppbVar16;
          }
        }
        else {
          if ((byte ******)0x1 < ppppppbVar14) {
            lVar9 = 0x3f;
            if ((long)ppppppbVar14 - 1U != 0) {
              for (; (long)ppppppbVar14 - 1U >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            ppppppbVar14 = (byte ******)(1L << (-((byte)lVar9 ^ 0x3f) & 0x3f));
          }
          if (ppppppbVar14 < ppppppbVar16) {
            ppppppbVar14 = ppppppbVar16;
          }
        }
        ppppppbVar18 = _DAT_0f7617d8;
        plVar8 = _DAT_0f761870;
        plVar13 = plStack_138;
        if (ppppppbVar11 <= ppppppbVar14) goto joined_r0x0e811d8a;
      }
    }
    else {
      ppppppbVar16 = (byte ******)func_0x0412c3f0(_DAT_0f761868,2);
      bVar21 = ppppppbVar16 < _DAT_0f7617d8;
      ppppppbVar14 = ppppppbVar16;
      if (ppppppbVar16 <= _DAT_0f7617d8) goto LAB_0e8123bc;
    }
  }
  func_0x0e8137c0(&DAT_0f7617d0,ppppppbVar14);
  ppppppbVar18 = _DAT_0f7617d8;
  plVar8 = _DAT_0f761870;
  plVar13 = plStack_138;
joined_r0x0e811d8a:
  do {
    _DAT_0f7617d8 = ppppppbVar18;
    plStack_138 = plVar13;
    if (plVar8 == (long *)0x0) {
      puStack_148 = &UNK_0f534768;
      if (plVar13 == (long *)0x0) {
        *(undefined1 *)plStack_140 = 0;
      }
      else {
        *(undefined1 *)plStack_140 = 0;
        LOCK();
        plVar8 = plVar13 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          func_0x0412c2d0(plVar13);
        }
      }
      lVar9 = lStack_f8;
      if (lStack_f8 != 0) {
        for (lVar19 = CONCAT62(uStack_ee,uStack_f0); lVar9 != lVar19; lVar19 = lVar19 + -0x38) {
          if ((*(byte *)(lVar19 + -0x38) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar19 + -0x28),
                            *(ulong *)(lVar19 + -0x38) & 0xfffffffffffffffe);
          }
        }
        uStack_f0 = (undefined2)lVar9;
        uStack_ee = (undefined6)((ulong)lVar9 >> 0x10);
        func_0x0412a280(lStack_f8,CONCAT62(uStack_e6,uStack_e8) - lStack_f8);
      }
      pppppppbStack_188 = (byte *******)&pppppbStack_118;
      func_0x048b0f50(&pppppppbStack_188);
      if (lStack_130 != 0) {
        lStack_128 = lStack_130;
        func_0x0412a280(lStack_130,lStack_120 - lStack_130);
      }
      return;
    }
    bVar1 = *(byte *)(plVar8 + 2);
    ppppppbVar14 = (byte ******)(ulong)bVar1;
    if (ppppppbVar18 != (byte ******)0x0) {
      uVar12 = (long)ppppppbVar18 - ((ulong)ppppppbVar18 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar12 >> 0x38 < 2) {
        ppppppbVar16 = (byte ******)(ulong)((uint)bVar1 & (int)ppppppbVar18 - 1U);
      }
      else {
        ppppppbVar16 = ppppppbVar14;
        if (ppppppbVar18 <= ppppppbVar14) {
          ppppppbVar16 = (byte ******)(ulong)(byte)(bVar1 % (byte)ppppppbVar18);
        }
      }
      plVar13 = *(long **)(_DAT_0f7617d0 + (long)ppppppbVar16 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if ((byte)(uVar12 >> 0x38) < 2) {
          do {
            if ((byte ******)plVar13[1] == ppppppbVar14) {
              if (*(byte *)(plVar13 + 2) == bVar1) goto LAB_0e812211;
            }
            else if ((byte ******)((ulong)plVar13[1] & (long)ppppppbVar18 - 1U) != ppppppbVar16)
            break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            ppppppbVar11 = (byte ******)plVar13[1];
            if (ppppppbVar11 == ppppppbVar14) {
              if (*(byte *)(plVar13 + 2) == bVar1) goto LAB_0e812211;
            }
            else {
              if (ppppppbVar18 <= ppppppbVar11) {
                if (((ulong)ppppppbVar11 | (ulong)ppppppbVar18) >> 0x20 == 0) {
                  if ((byte ******)
                      (((ulong)ppppppbVar11 & 0xffffffff) % ((ulong)ppppppbVar18 & 0xffffffff)) ==
                      ppppppbVar16) goto LAB_0e811f1a;
                  break;
                }
                ppppppbVar11 = (byte ******)((ulong)ppppppbVar11 % (ulong)ppppppbVar18);
              }
              if (ppppppbVar11 != ppppppbVar16) break;
            }
LAB_0e811f1a:
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    pppppppbVar10 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (pppppppbVar10 == (byte *******)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plStack_180 = (long *)&DAT_0f7617d0;
    uStack_178 = 0;
    *pppppppbVar10 = (byte ******)0x0;
    pppppppbVar10[1] = ppppppbVar14;
    *(byte *)(pppppppbVar10 + 2) = *(byte *)(plVar8 + 2);
    pppppppbStack_188 = pppppppbVar10;
    if ((*(byte *)(plVar8 + 3) & 1) == 0) {
      pppppppbVar10[5] = (byte ******)plVar8[5];
      ppppppbVar11 = (byte ******)plVar8[4];
      pppppppbVar10[3] = (byte ******)plVar8[3];
      pppppppbVar10[4] = ppppppbVar11;
    }
    else {
      func_0x0412e5e0(pppppppbVar10 + 3,plVar8[5],plVar8[4]);
    }
    uStack_178 = CONCAT71(uStack_178._1_7_,1);
    if ((long)ppppppbVar18 < 0) {
      fVar22 = (float)ppppppbVar18;
      if (ppppppbVar18 != (byte ******)0x0) goto LAB_0e812006;
LAB_0e812020:
      uVar12 = 1;
      if ((byte ******)0x2 < ppppppbVar18) {
        uVar12 = (ulong)(((ulong)ppppppbVar18 & (long)ppppppbVar18 - 1U) != 0);
      }
      ppppppbVar18 = (byte ******)((long)ppppppbVar18 * 2 | uVar12);
      fVar22 = (float)func_0x0eee3ab0((float)(_DAT_0f7617e8 + 1) / _DAT_0f7617f0);
      ppppppbVar16 = (byte ******)
                     ((long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22);
      if (ppppppbVar16 < ppppppbVar18) {
        ppppppbVar16 = ppppppbVar18;
      }
      ppppppbVar18 = (byte ******)0x2;
      if ((ppppppbVar16 == (byte ******)0x1) ||
         (ppppppbVar18 = ppppppbVar16, ((ulong)ppppppbVar16 & (long)ppppppbVar16 - 1U) == 0)) {
        bVar21 = ppppppbVar18 < _DAT_0f7617d8;
        ppppppbVar16 = _DAT_0f7617d8;
        if (ppppppbVar18 <= _DAT_0f7617d8) goto LAB_0e8120b4;
LAB_0e812090:
        func_0x0e8137c0(&DAT_0f7617d0,ppppppbVar18);
      }
      else {
        ppppppbVar18 = (byte ******)func_0x0412c3f0();
        bVar21 = ppppppbVar18 < _DAT_0f7617d8;
        ppppppbVar16 = _DAT_0f7617d8;
        if (_DAT_0f7617d8 < ppppppbVar18) goto LAB_0e812090;
LAB_0e8120b4:
        ppppppbVar16 = _DAT_0f7617d8;
        if (bVar21) {
          fVar22 = (float)func_0x0eee3ab0((float)_DAT_0f7617e8 / _DAT_0f7617f0);
          ppppppbVar11 = (byte ******)
                         ((long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22);
          if ((ppppppbVar16 < (byte ******)0x3) ||
             (uVar12 = (long)ppppppbVar16 - ((ulong)ppppppbVar16 >> 1 & 0x5555555555555555),
             uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
             1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            ppppppbVar11 = (byte ******)func_0x0412c3f0(ppppppbVar11);
          }
          else if ((byte ******)0x1 < ppppppbVar11) {
            lVar9 = 0x3f;
            if ((long)ppppppbVar11 - 1U != 0) {
              for (; (long)ppppppbVar11 - 1U >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            ppppppbVar11 = (byte ******)(1L << (-((byte)lVar9 ^ 0x3f) & 0x3f));
          }
          if (ppppppbVar18 <= ppppppbVar11) {
            ppppppbVar18 = ppppppbVar11;
          }
          if (ppppppbVar18 < ppppppbVar16) goto LAB_0e812090;
        }
      }
      ppppppbVar18 = _DAT_0f7617d8;
      if (((ulong)_DAT_0f7617d8 & (long)_DAT_0f7617d8 - 1U) == 0) {
        ppppppbVar11 = (byte ******)(ulong)((uint)bVar1 & (int)_DAT_0f7617d8 - 1U);
      }
      else {
        ppppppbVar11 = ppppppbVar14;
        if ((_DAT_0f7617d8 <= ppppppbVar14) && (_DAT_0f7617d8 <= ppppppbVar14)) {
          ppppppbVar11 = (byte ******)((ulong)ppppppbVar14 % ((ulong)_DAT_0f7617d8 & 0xffffffff));
        }
      }
    }
    else {
      fVar22 = (float)(long)ppppppbVar18;
      if (ppppppbVar18 == (byte ******)0x0) goto LAB_0e812020;
LAB_0e812006:
      ppppppbVar11 = ppppppbVar16;
      if (fVar22 * _DAT_0f7617f0 < (float)(_DAT_0f7617e8 + 1)) goto LAB_0e812020;
    }
    lVar9 = _DAT_0f7617d0;
    puVar3 = *(undefined8 **)(_DAT_0f7617d0 + (long)ppppppbVar11 * 8);
    if (puVar3 == (undefined8 *)0x0) {
      *pppppppbVar10 = (byte ******)_DAT_0f7617e0;
      _DAT_0f7617e0 = pppppppbVar10;
      *(undefined **)(lVar9 + (long)ppppppbVar11 * 8) = &DAT_0f7617e0;
      if (*pppppppbVar10 != (byte ******)0x0) {
        ppppppbVar14 = (byte ******)(*pppppppbVar10)[1];
        if (((ulong)ppppppbVar18 & (long)ppppppbVar18 - 1U) == 0) {
          *(byte ********)(lVar9 + ((ulong)ppppppbVar14 & (long)ppppppbVar18 - 1U) * 8) =
               pppppppbVar10;
        }
        else {
          if (ppppppbVar18 <= ppppppbVar14) {
            if (((ulong)ppppppbVar14 | (ulong)ppppppbVar18) >> 0x20 == 0) {
              *(byte ********)
               (lVar9 + (((ulong)ppppppbVar14 & 0xffffffff) % ((ulong)ppppppbVar18 & 0xffffffff)) *
                        8) = pppppppbVar10;
              goto LAB_0e81220a;
            }
            ppppppbVar14 = (byte ******)((ulong)ppppppbVar14 % (ulong)ppppppbVar18);
          }
          *(byte ********)(lVar9 + (long)ppppppbVar14 * 8) = pppppppbVar10;
        }
      }
    }
    else {
      *pppppppbVar10 = (byte ******)*puVar3;
      *puVar3 = pppppppbVar10;
    }
LAB_0e81220a:
    _DAT_0f7617e8 = _DAT_0f7617e8 + 1;
LAB_0e812211:
    ppppppbVar18 = _DAT_0f7617d8;
    plVar8 = (long *)*plVar8;
    plVar13 = plStack_138;
  } while( true );
}


