/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b4d750 (ELF vaddr 0x9a4d750)
 * Label: caller-of-callee
 * Body:  [[09b4d750, 09b4d9c0] [09b4d9d0, 09b4da3a] [09b4da40, 09b4dbe7] [09b4dbf0, 09b4ddd1] [09b4dde0, 09b4e100] [09b4e110, 09b4e182] [09b4e190, 09b4e3c0] [09b4e3d0, 09b4e5b9] [09b4e5c0, 09b4e812] [09b4e820, 09b4e881] [09b4e890, 09b4e97a]]
 * Ghidra: FUN_09b4d750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09b4d750(byte *param_1,ulong param_2,char param_3)

{
  long *plVar1;
  long *plVar2;
  byte **ppbVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined1 extraout_DL;
  undefined1 extraout_DL_00;
  ulong uVar13;
  long *plVar14;
  byte *pbVar15;
  byte *pbVar16;
  bool bVar17;
  undefined8 uStack_250;
  char cStack_248;
  byte *pbStack_240;
  long *plStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  byte bStack_210;
  byte *pbStack_208;
  long *plStack_200;
  long lStack_1f8;
  undefined4 uStack_1f0;
  byte *pbStack_1e0;
  byte bStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  byte **ppbStack_1b8;
  ulong uStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  long lStack_198;
  byte *pbStack_188;
  byte *pbStack_180;
  long lStack_178;
  byte **ppbStack_170;
  ulong uStack_168;
  long lStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_108;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  byte **ppbStack_c0;
  ulong uStack_b8;
  byte **ppbStack_b0;
  ulong uStack_a8;
  byte **ppbStack_a0;
  ulong uStack_98;
  byte *pbStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  byte *pbStack_70;
  ulong uStack_68;
  byte *pbStack_60;
  ulong uStack_58;
  byte *pbStack_50;
  ulong uStack_48;
  byte *pbStack_40;
  ulong uStack_38;
  
  pbStack_188 = (byte *)0x0;
  pbStack_180 = (byte *)0x0;
  lStack_178 = 0;
  pbStack_1a8 = (byte *)0x0;
  pbStack_1a0 = (byte *)0x0;
  lStack_198 = 0;
  pbStack_1e0 = param_1 + 1;
  bVar17 = (*param_1 & 1) == 0;
  pbVar15 = *(byte **)(param_1 + 0x10);
  if (bVar17) {
    pbVar15 = pbStack_1e0;
  }
  uVar13 = (ulong)(*param_1 >> 1);
  if (!bVar17) {
    uVar13 = *(ulong *)(param_1 + 8);
  }
  pbStack_1c0 = param_1;
  if (0xe < (long)uVar13) {
    pbVar16 = pbVar15 + uVar13;
    pbVar10 = pbVar15;
    while (pbVar10 = (byte *)func_0x0eee2ef0(pbVar10,0x77,uVar13 - 0xe), pbVar10 != (byte *)0x0) {
      if (*(long *)(pbVar10 + 7) == 0x736574616c706d65 && *(long *)pbVar10 == 0x65745f646c726f77) {
        if (((param_3 == '\0') && (pbVar10 != pbVar16)) && ((long)pbVar10 - (long)pbVar15 != -1)) {
          if ((DAT_0f7b8fb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7b8fb8), iVar9 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
          bVar17 = (*pbStack_1c0 & 1) == 0;
          pbStack_40 = *(byte **)(pbStack_1c0 + 0x10);
          if (bVar17) {
            pbStack_40 = pbStack_1e0;
          }
          uStack_38 = (ulong)(*pbStack_1c0 >> 1);
          if (!bVar17) {
            uStack_38 = *(ulong *)(pbStack_1c0 + 8);
          }
          ppbStack_1b8 = &pbStack_1a8;
          uStack_1b0 = param_2;
          (**(code **)(_DAT_0f7b8f98 + 0xb0))
                    (&uStack_250,&DAT_0f7b8f98,&pbStack_40,0x82,&UNK_09b5e9f0,&ppbStack_1b8);
          pbStack_208 = (byte *)0xff7dafa4fa6fac13;
          plStack_200 = (long *)&UNK_0140f690;
          lStack_1f8 = 1;
          uStack_1f0 = 0x254;
          if (bStack_210 == 0) {
            func_0x0eedea30(&bStack_1d8);
            func_0x0eedeb80(2,0x2d,&uStack_250,&bStack_1d8,&pbStack_208);
            if ((bStack_1d8 & 1) != 0) {
              func_0x0412a280(uStack_1c8,CONCAT71(uStack_1d7,bStack_1d8) & 0xfffffffffffffffe);
            }
          }
          lVar4 = lStack_228;
          if ((bStack_210 & 1) == 0) {
            if (lStack_228 != 0) {
              while (lVar4 != lStack_220) {
                func_0x048b3e80(lStack_220 + -0x40);
                lStack_220 = lStack_220 + -0x40;
              }
              lStack_220 = lVar4;
              func_0x0412a280(lStack_228,lStack_218 - lStack_228);
            }
            pbVar15 = pbStack_240;
            plVar2 = plStack_238;
            if (pbStack_240 != (byte *)0x0) {
              for (; pbVar15 != (byte *)plVar2; plVar2 = plVar2 + -10) {
                if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
                  func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
                }
              }
              plStack_238 = (long *)pbVar15;
              func_0x0412a280(pbStack_240,lStack_230 - (long)pbStack_240);
            }
          }
          pbStack_158 = pbStack_1a0;
          pbVar15 = pbStack_1a8;
          if (pbStack_1a8 != pbStack_1a0) {
            do {
              pbVar16 = pbVar15 + 1;
              pbStack_50 = *(byte **)(pbVar15 + 0x10);
              uStack_48 = *(ulong *)(pbVar15 + 8);
              if ((*pbVar15 & 1) == 0) {
                pbStack_50 = pbVar16;
                uStack_48 = (ulong)(*pbVar15 >> 1);
              }
              uStack_150 = func_0x09b49220(&pbStack_50);
              if ((DAT_0f7b8fb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7b8fb8), iVar9 != 0)) {
                func_0x0ee5ea20(&DAT_0f7b8f98);
                func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
                func_0x0410844d(&DAT_0f7b8fb8);
              }
              bVar17 = (*pbVar15 & 1) == 0;
              pbStack_60 = *(byte **)(pbVar15 + 0x10);
              if (bVar17) {
                pbStack_60 = pbVar16;
              }
              uStack_58 = (ulong)(*pbVar15 >> 1);
              if (!bVar17) {
                uStack_58 = *(ulong *)(pbVar15 + 8);
              }
              (**(code **)(_DAT_0f7b8f98 + 0x20))(&uStack_250,&DAT_0f7b8f98,&pbStack_60);
              pbStack_208 = (byte *)0xff7dafa4fa6fac13;
              plStack_200 = (long *)&UNK_0140f690;
              lStack_1f8 = 1;
              uStack_1f0 = 0x260;
              if (bStack_210 == 0) {
                func_0x0eedea30(&bStack_1d8);
                func_0x0eedeb80(2,0x2d,&uStack_250,&bStack_1d8,&pbStack_208);
                if ((bStack_1d8 & 1) != 0) {
                  func_0x0412a280(uStack_1c8,CONCAT71(uStack_1d7,bStack_1d8) & 0xfffffffffffffffe);
                }
              }
              bVar6 = bStack_210;
              lVar4 = lStack_228;
              if ((bStack_210 & 1) == 0) {
                lVar5 = lStack_220;
                if (lStack_228 != 0) {
                  while (lVar4 != lVar5) {
                    func_0x048b3e80(lVar5 + -0x40);
                    lVar5 = lVar5 + -0x40;
                  }
                  lStack_220 = lVar4;
                  func_0x0412a280(lStack_228,lStack_218 - lStack_228);
                }
                pbVar10 = pbStack_240;
                plVar2 = plStack_238;
                if (pbStack_240 != (byte *)0x0) {
                  for (; pbVar10 != (byte *)plVar2; plVar2 = plVar2 + -10) {
                    if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
                      func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
                    }
                  }
                  plStack_238 = (long *)pbVar10;
                  func_0x0412a280(pbStack_240,lStack_230 - (long)pbStack_240);
                }
              }
              func_0x0412d550(0xf550650);
              LOCK();
              _DAT_0f550720 = _DAT_0f550720 + 1;
              UNLOCK();
              func_0x0412d610(0xf550650);
              plVar2 = _DAT_0f550738;
              pbVar10 = _DAT_0f550730;
              if ((_DAT_0f550730 == (byte *)0x0) || (*_DAT_0f550730 != 1)) {
                uStack_250 = 0;
                cStack_248 = '\0';
                func_0x0eee02f0(0xf550650);
              }
              else {
                bVar12 = 1;
                if (_DAT_0f550738 != (long *)0x0) {
                  LOCK();
                  _DAT_0f550738[1] = _DAT_0f550738[1] + 1;
                  UNLOCK();
                  bVar12 = *pbVar10;
                }
                lVar4 = _DAT_0f550740;
                uStack_250 = 0xf550650;
                cStack_248 = '\x01';
                pbStack_240 = pbVar10;
                plStack_238 = plVar2;
                lStack_230 = _DAT_0f550740;
                plVar14 = plVar2;
                if ((bVar12 & 1) != 0) {
                  pbStack_208 = pbVar10;
                  plStack_200 = plVar2;
                  if (plVar2 != (long *)0x0) {
                    LOCK();
                    plVar2[1] = plVar2[1] + 1;
                    UNLOCK();
                    bVar12 = *pbVar10;
                  }
                  lStack_160 = lVar4;
                  lStack_1f8 = lVar4;
                  if (((bVar12 & 1) == 0) &&
                     (cVar8 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,
                                           &UNK_0128e685), cVar8 != '\0')) {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                  uStack_e8 = 0;
                  uStack_e0 = 0;
                  uStack_d8 = 0;
                  uStack_f8 = 0;
                  uStack_f6 = 0;
                  uStack_f0 = 0;
                  uStack_108 = 0;
                  uStack_100 = 0;
                  uStack_fe = 0;
                  bVar17 = (*pbVar15 & 1) != 0;
                  pbStack_70 = pbVar16;
                  if (bVar17) {
                    pbStack_70 = *(byte **)(pbVar15 + 0x10);
                  }
                  uStack_68 = (ulong)(*pbVar15 >> 1);
                  if (bVar17) {
                    uStack_68 = *(ulong *)(pbVar15 + 8);
                  }
                  uStack_80 = uStack_150;
                  uVar11 = uStack_80;
                  uStack_78 = CONCAT31(uStack_78._1_3_,extraout_DL);
                  uStack_80._0_4_ = (undefined4)uStack_150;
                  uVar7 = (undefined4)uStack_80;
                  uStack_80 = uVar11;
                  func_0x09b495f0(lStack_160,&UNK_013e8fd7,0x1c,&uStack_108,&pbStack_70,bVar6,uVar7,
                                  uStack_78);
                  if ((uStack_e8 & 1) != 0) {
                    func_0x0412a280(uStack_d8,uStack_e8 & 0xfffffffffffffffe);
                  }
                  plVar14 = plStack_238;
                  if ((uStack_108 & 1) != 0) {
                    func_0x0412a280(CONCAT62(uStack_f6,uStack_f8),uStack_108 & 0xfffffffffffffffe);
                    plVar14 = plStack_238;
                  }
                  plStack_200 = (long *)0x0;
                  pbStack_208 = (byte *)0x0;
                  if (plVar2 != (long *)0x0) {
                    plStack_200 = (long *)0x0;
                    pbStack_208 = (byte *)0x0;
                    LOCK();
                    plVar1 = plVar2 + 1;
                    lVar4 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    plStack_238 = plVar14;
                    if (lVar4 == 0) {
                      (**(code **)(*plVar2 + 0x10))(plVar2);
                      FUN_0412c2d0(plVar2);
                    }
                    plVar2 = plStack_200;
                    lStack_1f8 = 0;
                    plVar14 = plStack_238;
                    if (plStack_200 != (long *)0x0) {
                      LOCK();
                      plVar1 = plStack_200 + 1;
                      lVar4 = *plVar1;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (lVar4 == 0) {
                        (**(code **)(*plStack_200 + 0x10))(plStack_200);
                        FUN_0412c2d0(plVar2);
                        plVar14 = plStack_238;
                      }
                    }
                  }
                }
                pbStack_240 = (byte *)0x0;
                plStack_238 = (long *)0x0;
                if (plVar14 != (long *)0x0) {
                  LOCK();
                  plVar2 = plVar14 + 1;
                  lVar4 = *plVar2;
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (lVar4 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                    FUN_0412c2d0(plVar14);
                  }
                  plVar2 = plStack_238;
                  lStack_230 = 0;
                  if (plStack_238 != (long *)0x0) {
                    LOCK();
                    plVar14 = plStack_238 + 1;
                    lVar4 = *plVar14;
                    *plVar14 = *plVar14 + -1;
                    UNLOCK();
                    if (lVar4 == 0) {
                      (**(code **)(*plStack_238 + 0x10))(plStack_238);
                      FUN_0412c2d0(plVar2);
                    }
                  }
                }
              }
              if (cStack_248 == '\x01') {
                func_0x0eee02f0(uStack_250);
              }
              pbVar15 = pbVar15 + 0x18;
            } while (pbVar15 != pbStack_158);
          }
        }
        break;
      }
      pbVar10 = pbVar10 + 1;
      uVar13 = (long)pbVar16 - (long)pbVar10;
      if ((long)uVar13 < 0xf) break;
    }
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7b8fb8), iVar9 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  bVar17 = (*pbStack_1c0 & 1) != 0;
  pbStack_90 = pbStack_1e0;
  if (bVar17) {
    pbStack_90 = *(byte **)(pbStack_1c0 + 0x10);
  }
  uStack_88 = (ulong)(*pbStack_1c0 >> 1);
  if (bVar17) {
    uStack_88 = *(ulong *)(pbStack_1c0 + 8);
  }
  ppbStack_1b8 = &pbStack_188;
  (**(code **)(_DAT_0f7b8f98 + 0xb0))
            (&uStack_250,&DAT_0f7b8f98,&pbStack_90,0x282,&UNK_09b5ebc0,&ppbStack_1b8);
  pbStack_208 = (byte *)0xff7dafa4fa6fac13;
  plStack_200 = (long *)&UNK_0140f690;
  lStack_1f8 = 1;
  uStack_1f0 = 0x286;
  if (bStack_210 == 0) {
    func_0x0eedea30(&bStack_1d8);
    func_0x0eedeb80(2,0x2d,&uStack_250,&bStack_1d8,&pbStack_208);
    if ((bStack_1d8 & 1) != 0) {
      func_0x0412a280(uStack_1c8,CONCAT71(uStack_1d7,bStack_1d8) & 0xfffffffffffffffe);
    }
  }
  lVar4 = lStack_228;
  if ((bStack_210 & 1) == 0) {
    lVar5 = lStack_220;
    if (lStack_228 != 0) {
      while (lVar4 != lVar5) {
        func_0x048b3e80(lVar5 + -0x40);
        lVar5 = lVar5 + -0x40;
      }
      lStack_220 = lVar4;
      func_0x0412a280(lStack_228,lStack_218 - lStack_228);
    }
    pbVar15 = pbStack_240;
    plVar2 = plStack_238;
    if (pbStack_240 != (byte *)0x0) {
      for (; pbVar15 != (byte *)plVar2; plVar2 = plVar2 + -10) {
        if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
          func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_238 = (long *)pbVar15;
      func_0x0412a280(pbStack_240,lStack_230 - (long)pbStack_240);
    }
  }
  if (pbStack_188 != pbStack_180) {
    pbStack_1e0 = pbStack_180;
    pbVar15 = pbStack_180;
    pbVar16 = pbStack_188;
    do {
      if ((DAT_0f7b8fb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7b8fb8), iVar9 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
        pbVar15 = pbStack_1e0;
      }
      ppbVar3 = (byte **)(pbVar16 + 1);
      bVar17 = (*pbVar16 & 1) == 0;
      ppbStack_170 = *(byte ***)(pbVar16 + 0x10);
      if (bVar17) {
        ppbStack_170 = ppbVar3;
      }
      uStack_168 = (ulong)(*pbVar16 >> 1);
      if (!bVar17) {
        uStack_168 = *(ulong *)(pbVar16 + 8);
      }
      cVar8 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&ppbStack_170);
      if (cVar8 != '\0') {
        ppbStack_a0 = *(byte ***)(pbVar16 + 0x10);
        uStack_98 = *(ulong *)(pbVar16 + 8);
        if ((*pbVar16 & 1) == 0) {
          ppbStack_a0 = ppbVar3;
          uStack_98 = (ulong)(*pbVar16 >> 1);
        }
        uVar11 = func_0x09b49220(&ppbStack_a0);
        pbStack_1c0 = (byte *)CONCAT71(pbStack_1c0._1_7_,extraout_DL_00);
        if ((DAT_0f7b8fb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7b8fb8), iVar9 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        bVar17 = (*pbVar16 & 1) == 0;
        ppbStack_b0 = *(byte ***)(pbVar16 + 0x10);
        if (bVar17) {
          ppbStack_b0 = ppbVar3;
        }
        uStack_a8 = (ulong)(*pbVar16 >> 1);
        if (!bVar17) {
          uStack_a8 = *(ulong *)(pbVar16 + 8);
        }
        (**(code **)(_DAT_0f7b8f98 + 0x98))(&uStack_250,&DAT_0f7b8f98,&ppbStack_b0);
        pbStack_208 = (byte *)0xff7dafa4fa6fac13;
        plStack_200 = (long *)&UNK_0140f690;
        lStack_1f8 = 1;
        uStack_1f0 = 0x294;
        if (bStack_210 == 0) {
          ppbStack_1b8 = *(byte ***)(pbVar16 + 0x10);
          uStack_1b0 = *(ulong *)(pbVar16 + 8);
          if ((*pbVar16 & 1) == 0) {
            ppbStack_1b8 = ppbVar3;
            uStack_1b0 = (ulong)(*pbVar16 >> 1);
          }
          func_0x0470d9a0(&bStack_1d8,&UNK_014d352f,0x43,0xd,&ppbStack_1b8);
          func_0x0eedeb80(8,0x10,&uStack_250,&bStack_1d8,&pbStack_208);
          if ((bStack_1d8 & 1) != 0) {
            func_0x0412a280(uStack_1c8,CONCAT71(uStack_1d7,bStack_1d8) & 0xfffffffffffffffe);
          }
        }
        bVar6 = bStack_210;
        lVar4 = lStack_228;
        if ((bStack_210 & 1) == 0) {
          lVar5 = lStack_220;
          if (lStack_228 != 0) {
            while (lVar4 != lVar5) {
              func_0x048b3e80(lVar5 + -0x40);
              lVar5 = lVar5 + -0x40;
            }
            lStack_220 = lVar4;
            func_0x0412a280(lStack_228,lStack_218 - lStack_228);
          }
          pbVar15 = pbStack_240;
          plVar2 = plStack_238;
          if (pbStack_240 != (byte *)0x0) {
            for (; pbVar15 != (byte *)plVar2; plVar2 = plVar2 + -10) {
              if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
                func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
              }
            }
            plStack_238 = (long *)pbVar15;
            func_0x0412a280(pbStack_240,lStack_230 - (long)pbStack_240);
          }
        }
        func_0x0412d550(0xf550650);
        LOCK();
        _DAT_0f550720 = _DAT_0f550720 + 1;
        UNLOCK();
        func_0x0412d610(0xf550650);
        plVar2 = _DAT_0f550738;
        pbVar15 = _DAT_0f550730;
        if ((_DAT_0f550730 == (byte *)0x0) || (*_DAT_0f550730 != 1)) {
          uStack_250 = 0;
          cStack_248 = '\0';
          func_0x0eee02f0(0xf550650);
        }
        else {
          bVar12 = 1;
          if (_DAT_0f550738 != (long *)0x0) {
            LOCK();
            _DAT_0f550738[1] = _DAT_0f550738[1] + 1;
            UNLOCK();
            bVar12 = *pbVar15;
          }
          lVar4 = _DAT_0f550740;
          uStack_250 = 0xf550650;
          cStack_248 = '\x01';
          pbStack_240 = pbVar15;
          plStack_238 = plVar2;
          lStack_230 = _DAT_0f550740;
          plVar14 = plVar2;
          if ((bVar12 & 1) != 0) {
            pbStack_208 = pbVar15;
            plStack_200 = plVar2;
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar2[1] = plVar2[1] + 1;
              UNLOCK();
              bVar12 = *pbVar15;
            }
            lStack_1f8 = lVar4;
            if (((bVar12 & 1) == 0) &&
               (cVar8 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_0128e685),
               cVar8 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            uStack_128 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_138 = 0;
            uStack_136 = 0;
            uStack_130 = 0;
            uStack_148 = 0;
            uStack_140 = 0;
            uStack_13e = 0;
            bVar17 = (*pbVar16 & 1) != 0;
            ppbStack_c0 = ppbVar3;
            if (bVar17) {
              ppbStack_c0 = *(byte ***)(pbVar16 + 0x10);
            }
            uStack_b8 = (ulong)(*pbVar16 >> 1);
            if (bVar17) {
              uStack_b8 = *(ulong *)(pbVar16 + 8);
            }
            uStack_c8 = CONCAT31(uStack_c8._1_3_,pbStack_1c0._0_1_);
            uStack_d0._0_4_ = (undefined4)uVar11;
            uVar7 = (undefined4)uStack_d0;
            uStack_d0 = uVar11;
            func_0x09b495f0(lVar4,&UNK_01451228,0x1b,&uStack_148,&ppbStack_c0,bVar6,uVar7,uStack_c8)
            ;
            if ((uStack_128 & 1) != 0) {
              func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
            }
            plVar14 = plStack_238;
            if ((uStack_148 & 1) != 0) {
              func_0x0412a280(CONCAT62(uStack_136,uStack_138),uStack_148 & 0xfffffffffffffffe);
              plVar14 = plStack_238;
            }
            plStack_200 = (long *)0x0;
            pbStack_208 = (byte *)0x0;
            if (plVar2 != (long *)0x0) {
              plStack_200 = (long *)0x0;
              pbStack_208 = (byte *)0x0;
              LOCK();
              plVar1 = plVar2 + 1;
              lVar4 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              plStack_238 = plVar14;
              if (lVar4 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
                FUN_0412c2d0(plVar2);
              }
              plVar2 = plStack_200;
              lStack_1f8 = 0;
              plVar14 = plStack_238;
              if (plStack_200 != (long *)0x0) {
                LOCK();
                plVar1 = plStack_200 + 1;
                lVar4 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar4 == 0) {
                  (**(code **)(*plStack_200 + 0x10))(plStack_200);
                  FUN_0412c2d0(plVar2);
                  plVar14 = plStack_238;
                }
              }
            }
          }
          pbStack_240 = (byte *)0x0;
          plStack_238 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar2 = plVar14 + 1;
            lVar4 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar4 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              FUN_0412c2d0(plVar14);
              plVar2 = plStack_238;
              lStack_230 = 0;
              if (plStack_238 != (long *)0x0) {
                lStack_230 = 0;
                LOCK();
                plVar14 = plStack_238 + 1;
                lVar4 = *plVar14;
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (lVar4 == 0) {
                  (**(code **)(*plStack_238 + 0x10))(plStack_238);
                  FUN_0412c2d0(plVar2);
                }
              }
            }
            else {
              lStack_230 = 0;
            }
          }
        }
        pbVar15 = pbStack_1e0;
        if (cStack_248 == '\x01') {
          func_0x0eee02f0(uStack_250);
          pbVar15 = pbStack_1e0;
        }
      }
      pbVar16 = pbVar16 + 0x18;
    } while (pbVar16 != pbVar15);
  }
  pbVar16 = pbStack_1a8;
  pbVar15 = pbStack_1a0;
  if (pbStack_1a8 != (byte *)0x0) {
    for (; pbVar16 != pbVar15; pbVar15 = pbVar15 + -0x18) {
      if ((pbVar15[-0x18] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(pbVar15 + -8),
                        *(ulong *)(pbVar15 + -0x18) & 0xfffffffffffffffe);
      }
    }
    pbStack_1a0 = pbVar16;
    func_0x0412a280(pbStack_1a8,lStack_198 - (long)pbStack_1a8);
  }
  pbVar16 = pbStack_188;
  pbVar15 = pbStack_180;
  if (pbStack_188 != (byte *)0x0) {
    for (; pbVar16 != pbVar15; pbVar15 = pbVar15 + -0x18) {
      if ((pbVar15[-0x18] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(pbVar15 + -8),
                        *(ulong *)(pbVar15 + -0x18) & 0xfffffffffffffffe);
      }
    }
    pbStack_180 = pbVar16;
    func_0x0412a280(pbStack_188,lStack_178 - (long)pbStack_188);
  }
  return;
}


