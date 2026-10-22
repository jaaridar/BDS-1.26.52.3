/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5d9a30 (ELF vaddr 0xd4d9a30)
 * Label: caller-of-callee
 * Body:  [[0d5d9a30, 0d5d9cfc] [0d5d9d00, 0d5d9d33] [0d5d9d40, 0d5d9da5] [0d5d9db0, 0d5d9dc8] [0d5d9dd0, 0d5da0fb] [0d5da100, 0d5da138] [0d5da140, 0d5da1ab] [0d5da1b0, 0d5da1c8] [0d5da1d0, 0d5da4fa] [0d5da500, 0d5daa31] [0d5daa40, 0d5daeb8] [0d5dafb1, 0d5db00d]]
 * Ghidra: FUN_0d5d9a30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d5d9a30(undefined8 param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined *puVar19;
  ulong uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined4 uStack_220;
  undefined1 uStack_21c;
  undefined2 uStack_21b;
  undefined1 uStack_219;
  undefined4 uStack_218;
  undefined4 uStack_214;
  long lStack_210;
  long alStack_208 [4];
  long *plStack_1e8;
  long alStack_1d8 [4];
  long *plStack_1b8;
  long lStack_1a0;
  long alStack_198 [4];
  long *plStack_178;
  char *pcStack_160;
  long *plStack_158;
  undefined *puStack_150;
  long alStack_148 [4];
  long *plStack_128;
  long alStack_118 [4];
  long *plStack_f8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long alStack_c8 [4];
  long *plStack_a8;
  undefined *apuStack_98 [4];
  undefined **ppuStack_78;
  undefined *apuStack_68 [4];
  undefined **ppuStack_48;
  
  if ((*param_2 == 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014dc3df),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*param_2 == '\0') &&
     (cVar5 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014dc3df),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  apuStack_68[0] = &UNK_0f47b210;
  ppuStack_48 = apuStack_68;
  apuStack_98[0] = &UNK_0f47b2a0;
  ppuStack_78 = apuStack_98;
  if ((DAT_0f720798 == '\0') && (iVar6 = func_0x04108328(&DAT_0f720798), iVar6 != 0)) {
    func_0x0d5c2800();
    func_0x0eee2f40(&UNK_0d5c2890,&DAT_0f720758,0xf53dab8);
    func_0x0410844d(&DAT_0f720798);
  }
  plVar7 = _DAT_0f720768;
  pcVar4 = _DAT_0f720760;
  plStack_158 = (long *)0x0;
  puStack_150 = (undefined *)0x0;
  if (_DAT_0f720768 != (long *)0x0) {
    LOCK();
    _DAT_0f720768[1] = _DAT_0f720768[1] + 1;
    UNLOCK();
    plStack_158 = plVar7;
  }
  pcStack_160 = pcVar4;
  if (pcVar4 == (char *)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = &DAT_0f720758;
    puStack_150 = &DAT_0f720758;
  }
  uStack_220 = 0x6d656d0c;
  uStack_21c = 0x6f;
  uStack_21b = 0x7972;
  uStack_219 = 0;
  plStack_128 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  plVar7 = (long *)func_0x0d5c2540();
  lStack_1a0 = (long)&uStack_220 + 1;
  bVar21 = (uStack_220 & 1) == 0;
  lVar13 = lStack_210;
  if (bVar21) {
    lVar13 = lStack_1a0;
  }
  uVar17 = (ulong)((byte)uStack_220 >> 1);
  if (!bVar21) {
    uVar17 = CONCAT44(uStack_214,uStack_218);
  }
  uVar8 = func_0x04883620(alStack_208,lVar13,uVar17);
  uVar17 = plVar7[1];
  if (uVar17 != 0) {
    uVar16 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
    uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar16 >> 0x38 < 2) {
      uVar20 = uVar17 - 1 & uVar8;
      plVar12 = *(long **)(*plVar7 + uVar20 * 8);
    }
    else if (uVar8 < uVar17) {
      plVar12 = *(long **)(*plVar7 + uVar8 * 8);
      uVar20 = uVar8;
    }
    else if ((uVar8 | uVar17) >> 0x20 == 0) {
      uVar20 = (uVar8 & 0xffffffff) % (uVar17 & 0xffffffff);
      plVar12 = *(long **)(*plVar7 + uVar20 * 8);
    }
    else {
      plVar12 = *(long **)(*plVar7 + (uVar8 % uVar17) * 8);
      uVar20 = uVar8 % uVar17;
    }
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if ((uStack_220 & 1) == 0) {
        plVar7 = (long *)(ulong)((byte)uStack_220 >> 1);
        lVar13 = (long)&uStack_220 + 1;
      }
      else {
        plVar7 = (long *)CONCAT44(uStack_214,uStack_218);
        lVar13 = lStack_210;
      }
      if ((byte)(uVar16 >> 0x38) < 2) {
        do {
          if (uVar8 == plVar12[1]) {
            bVar1 = *(byte *)(plVar12 + 2);
            if ((bVar1 & 1) == 0) {
              plVar15 = (long *)(ulong)(bVar1 >> 1);
            }
            else {
              plVar15 = (long *)plVar12[3];
            }
            if (plVar15 == plVar7) {
              if ((bVar1 & 1) == 0) {
                lVar11 = (long)plVar12 + 0x11;
              }
              else {
                lVar11 = plVar12[4];
              }
              iVar6 = func_0x0eee3000(lVar11,lVar13,plVar7);
              if (iVar6 == 0) goto LAB_0d5d9df8;
            }
          }
          else if ((plVar12[1] & uVar17 - 1) != uVar20) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar12[1];
          if (uVar8 == uVar16) {
            bVar1 = *(byte *)(plVar12 + 2);
            if ((bVar1 & 1) == 0) {
              plVar15 = (long *)(ulong)(bVar1 >> 1);
            }
            else {
              plVar15 = (long *)plVar12[3];
            }
            if (plVar15 == plVar7) {
              if ((bVar1 & 1) == 0) {
                lVar11 = (long)plVar12 + 0x11;
              }
              else {
                lVar11 = plVar12[4];
              }
              iVar6 = func_0x0eee3000(lVar11,lVar13,plVar7);
              if (iVar6 == 0) goto LAB_0d5d9df8;
            }
          }
          else {
            if (uVar17 <= uVar16) {
              if ((uVar16 | uVar17) >> 0x20 == 0) {
                uVar16 = (uVar16 & 0xffffffff) % (uVar17 & 0xffffffff);
              }
              else {
                uVar16 = uVar16 % uVar17;
              }
            }
            if (uVar16 != uVar20) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  if ((pcVar4 == (char *)0x0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014dc3df),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*pcVar4 == '\0') &&
     (cVar5 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014dc3df),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (ppuStack_48 == (undefined **)0x0) {
    plStack_178 = (long *)0x0;
  }
  else if (ppuStack_48 == apuStack_68) {
    plStack_178 = alStack_198;
    (**(code **)(*ppuStack_48 + 0x18))();
  }
  else {
    plStack_178 = (long *)(**(code **)(*ppuStack_48 + 0x10))();
  }
  if (ppuStack_78 == (undefined **)0x0) {
    plStack_a8 = (long *)0x0;
  }
  else if (ppuStack_78 == apuStack_98) {
    plStack_a8 = alStack_c8;
    (**(code **)(*ppuStack_78 + 0x18))();
  }
  else {
    plStack_a8 = (long *)(**(code **)(*ppuStack_78 + 0x10))();
  }
  if (plStack_178 == (long *)0x0) {
    plStack_1e8 = (long *)0x0;
  }
  else if (plStack_178 == alStack_198) {
    plStack_1e8 = alStack_208;
    (**(code **)(*plStack_178 + 0x18))();
  }
  else {
    plStack_1e8 = plStack_178;
    plStack_178 = (long *)0x0;
  }
  if (plStack_a8 == (long *)0x0) {
    plStack_1b8 = (long *)0x0;
  }
  else if (plStack_a8 == alStack_c8) {
    plStack_1b8 = alStack_1d8;
    (**(code **)(*plStack_a8 + 0x18))();
  }
  else {
    plStack_1b8 = plStack_a8;
    plStack_a8 = (long *)0x0;
  }
  bVar21 = (uStack_220 & 1) == 0;
  lVar13 = lStack_210;
  if (bVar21) {
    lVar13 = (long)&uStack_220 + 1;
  }
  uVar17 = (ulong)((byte)uStack_220 >> 1);
  if (!bVar21) {
    uVar17 = CONCAT44(uStack_214,uStack_218);
  }
  plVar9 = (long *)func_0x04883620(&plStack_e0,lVar13,uVar17);
  plVar12 = (long *)(puVar19 + 0x18);
  plVar15 = *(long **)(puVar19 + 0x20);
  if (plVar15 != (long *)0x0) {
    uVar17 = (long)plVar15 - ((ulong)plVar15 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
    uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar17 >> 0x38 < 2) {
      plVar7 = (long *)((long)plVar15 - 1U & (ulong)plVar9);
      plVar10 = *(long **)(*plVar12 + (long)plVar7 * 8);
    }
    else {
      plVar7 = plVar9;
      if (plVar15 <= plVar9) {
        if (((ulong)plVar9 | (ulong)plVar15) >> 0x20 == 0) {
          plVar7 = (long *)(((ulong)plVar9 & 0xffffffff) % ((ulong)plVar15 & 0xffffffff));
          plVar10 = *(long **)(*plVar12 + (long)plVar7 * 8);
          goto joined_r0x0d5da0ac;
        }
        plVar7 = (long *)((ulong)plVar9 % (ulong)plVar15);
      }
      plVar10 = *(long **)(*plVar12 + (long)plVar7 * 8);
    }
joined_r0x0d5da0ac:
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if ((uStack_220 & 1) == 0) {
        uVar8 = (ulong)((byte)uStack_220 >> 1);
      }
      else {
        uVar8 = CONCAT44(uStack_214,uStack_218);
        lStack_1a0 = lStack_210;
      }
      if ((byte)(uVar17 >> 0x38) < 2) {
        do {
          if ((long *)plVar10[1] == plVar9) {
            bVar1 = *(byte *)(plVar10 + 2);
            if ((bVar1 & 1) == 0) {
              uVar17 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar17 = plVar10[3];
            }
            if (uVar17 == uVar8) {
              if ((bVar1 & 1) == 0) {
                lVar13 = (long)plVar10 + 0x11;
              }
              else {
                lVar13 = plVar10[4];
              }
              iVar6 = func_0x0eee3000(lVar13,lStack_1a0,uVar8);
              if (iVar6 == 0) goto LAB_0d5da76a;
            }
          }
          else if ((long *)((ulong)plVar10[1] & (long)plVar15 - 1U) != plVar7) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          plVar18 = (long *)plVar10[1];
          if (plVar18 == plVar9) {
            bVar1 = *(byte *)(plVar10 + 2);
            if ((bVar1 & 1) == 0) {
              uVar17 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar17 = plVar10[3];
            }
            if (uVar17 == uVar8) {
              if ((bVar1 & 1) == 0) {
                lVar13 = (long)plVar10 + 0x11;
              }
              else {
                lVar13 = plVar10[4];
              }
              iVar6 = func_0x0eee3000(lVar13,lStack_1a0,uVar8);
              if (iVar6 == 0) goto LAB_0d5da76a;
            }
          }
          else {
            if (plVar15 <= plVar18) {
              if (((ulong)plVar18 | (ulong)plVar15) >> 0x20 == 0) {
                plVar18 = (long *)(((ulong)plVar18 & 0xffffffff) % ((ulong)plVar15 & 0xffffffff));
              }
              else {
                plVar18 = (long *)((ulong)plVar18 % (ulong)plVar15);
              }
            }
            if (plVar18 != plVar7) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  plStack_e0 = plVar10;
  plStack_d8 = plVar12;
  uStack_d0 = 0;
  *plVar10 = 0;
  plVar10[1] = (long)plVar9;
  if ((uStack_220 & 1) == 0) {
    plVar10[4] = lStack_210;
    *(uint *)(plVar10 + 2) = uStack_220;
    *(uint *)((long)plVar10 + 0x14) = CONCAT13(uStack_219,CONCAT21(uStack_21b,uStack_21c));
    *(undefined4 *)(plVar10 + 3) = uStack_218;
    *(undefined4 *)((long)plVar10 + 0x1c) = uStack_214;
  }
  else {
    FUN_0412e5e0(plVar10 + 2,lStack_210,CONCAT44(uStack_214,uStack_218));
  }
  if (plStack_1e8 == (long *)0x0) {
    plVar10[10] = 0;
  }
  else if (plStack_1e8 == alStack_208) {
    plVar10[10] = (long)(plVar10 + 6);
    (**(code **)(*plStack_1e8 + 0x18))();
  }
  else {
    plVar10[10] = (long)plStack_1e8;
    plStack_1e8 = (long *)0x0;
  }
  if (plStack_1b8 == (long *)0x0) {
    plVar10[0x10] = 0;
  }
  else if (plStack_1b8 == alStack_1d8) {
    plVar10[0x10] = (long)(plVar10 + 0xc);
    (**(code **)(*plStack_1b8 + 0x18))();
  }
  else {
    plVar10[0x10] = (long)plStack_1b8;
    plStack_1b8 = (long *)0x0;
  }
  uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
  if ((long)plVar15 < 0) {
    fVar23 = (float)plVar15;
    fVar22 = *(float *)(puVar19 + 0x38);
    if (plVar15 != (long *)0x0) goto LAB_0d5da37e;
LAB_0d5da3d9:
    uVar17 = 1;
    if ((long *)0x2 < plVar15) {
      uVar17 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    uVar17 = uVar17 | (long)plVar15 * 2;
    fVar22 = (float)ceilf((float)(*(long *)(puVar19 + 0x30) + 1) / fVar22);
    uVar8 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
    if (uVar8 < uVar17) {
      uVar8 = uVar17;
    }
    uVar17 = 2;
    if ((uVar8 == 1) || (uVar17 = uVar8, (uVar8 & uVar8 - 1) == 0)) {
      uVar8 = *(ulong *)(puVar19 + 0x20);
      bVar21 = uVar17 < uVar8;
      if (uVar17 <= uVar8) goto LAB_0d5da565;
LAB_0d5da45e:
      if (uVar17 >> 0x3d != 0) {
        uVar14 = func_0x04882eb0();
        func_0x041084d6(&DAT_0f720798);
        lVar13 = 0x20;
        if ((ppuStack_78 == apuStack_98) || (lVar13 = 0x28, ppuStack_78 != (undefined **)0x0)) {
          (**(code **)(*ppuStack_78 + lVar13))();
        }
        lVar13 = 0x20;
        if ((ppuStack_48 == apuStack_68) || (lVar13 = 0x28, ppuStack_48 != (undefined **)0x0)) {
          (**(code **)(*ppuStack_48 + lVar13))();
        }
        func_0x0eee2d70(uVar14);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar13 = uVar17 * 8;
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
      if (lVar11 == 0) {
        func_0x0eec74c0(lVar13,0);
      }
      lVar2 = *plVar12;
      *plVar12 = lVar11;
      if (lVar2 != 0) {
        thunk_FUN_0ee326a0(lVar2,*(long *)(puVar19 + 0x20) << 3);
        lVar11 = *(long *)(puVar19 + 0x18);
      }
      *(ulong *)(puVar19 + 0x20) = uVar17;
      func_0x0eee2dd0(lVar11,0,lVar13);
      plVar7 = *(long **)(puVar19 + 0x28);
      if (plVar7 != (long *)0x0) {
        uVar16 = plVar7[1];
        uVar8 = uVar17 - 1;
        if ((uVar17 & uVar8) == 0) {
          *(undefined **)(lVar11 + (uVar16 & uVar8) * 8) = puVar19 + 0x28;
          uVar17 = uVar16 & uVar8;
          while (plVar15 = plVar7, plVar7 = (long *)*plVar15, plVar7 != (long *)0x0) {
            uVar16 = plVar7[1] & uVar8;
            if (uVar16 != uVar17) {
              if (*(long *)(lVar11 + uVar16 * 8) == 0) {
                *(long **)(lVar11 + uVar16 * 8) = plVar15;
                uVar17 = uVar16;
              }
              else {
                *plVar15 = *plVar7;
                *plVar7 = **(undefined8 **)(lVar11 + uVar16 * 8);
                **(long **)(lVar11 + uVar16 * 8) = (long)plVar7;
                plVar7 = plVar15;
              }
            }
          }
        }
        else {
          if (uVar17 <= uVar16) {
            if ((uVar16 | uVar17) >> 0x20 == 0) {
              uVar16 = (uVar16 & 0xffffffff) % (uVar17 & 0xffffffff);
            }
            else {
              uVar16 = uVar16 % uVar17;
            }
          }
          *(undefined **)(lVar11 + uVar16 * 8) = puVar19 + 0x28;
          plVar15 = (long *)*plVar7;
          while (plVar15 != (long *)0x0) {
            uVar8 = plVar15[1];
            if (uVar17 <= uVar8) {
              if ((uVar8 | uVar17) >> 0x20 == 0) {
                uVar8 = (uVar8 & 0xffffffff) % (uVar17 & 0xffffffff);
              }
              else {
                uVar8 = uVar8 % uVar17;
              }
            }
            if (uVar8 != uVar16) {
              if (*(long *)(lVar11 + uVar8 * 8) == 0) {
                *(long **)(lVar11 + uVar8 * 8) = plVar7;
                uVar16 = uVar8;
              }
              else {
                *plVar7 = *plVar15;
                *plVar15 = **(long **)(lVar11 + uVar8 * 8);
                **(undefined8 **)(lVar11 + uVar8 * 8) = plVar15;
                plVar15 = plVar7;
              }
            }
            plVar7 = plVar15;
            plVar15 = (long *)*plVar7;
          }
        }
      }
    }
    else {
      uVar17 = func_0x0412c3f0();
      uVar8 = *(ulong *)(puVar19 + 0x20);
      bVar21 = uVar17 < uVar8;
      if (uVar8 < uVar17) goto LAB_0d5da45e;
LAB_0d5da565:
      if (bVar21) {
        fVar22 = (float)ceilf((float)*(ulong *)(puVar19 + 0x30) / *(float *)(puVar19 + 0x38));
        uVar16 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
        if ((uVar8 < 3) ||
           (uVar20 = uVar8 - (uVar8 >> 1 & 0x5555555555555555),
           uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333),
           1 < (byte)(((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar16 = func_0x0412c3f0(uVar16);
          if (uVar16 < uVar17) {
            uVar16 = uVar17;
          }
        }
        else {
          if (1 < uVar16) {
            lVar13 = 0x3f;
            if (uVar16 - 1 != 0) {
              for (; uVar16 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar16 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
          }
          if (uVar16 < uVar17) {
            uVar16 = uVar17;
          }
        }
        uVar17 = uVar16;
        if (uVar17 < uVar8) {
          if (uVar17 != 0) goto LAB_0d5da45e;
          lVar13 = *plVar12;
          *plVar12 = 0;
          if (lVar13 != 0) {
            thunk_FUN_0ee326a0(lVar13,*(long *)(puVar19 + 0x20) << 3);
          }
          *(undefined8 *)(puVar19 + 0x20) = 0;
        }
      }
    }
    plVar15 = *(long **)(puVar19 + 0x20);
    if (((ulong)plVar15 & (long)plVar15 - 1U) != 0) {
      if (plVar15 <= plVar9) {
        if (((ulong)plVar9 | (ulong)plVar15) >> 0x20 == 0) {
          plVar7 = (long *)(((ulong)plVar9 & 0xffffffff) % ((ulong)plVar15 & 0xffffffff));
          lVar13 = *plVar12;
          plVar12 = *(long **)(lVar13 + (long)plVar7 * 8);
          goto joined_r0x0d5daa05;
        }
        plVar9 = (long *)((ulong)plVar9 % (ulong)plVar15);
      }
      lVar13 = *plVar12;
      plVar12 = *(long **)(lVar13 + (long)plVar9 * 8);
      plVar7 = plVar9;
      goto joined_r0x0d5da756;
    }
    plVar7 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
    lVar13 = *plVar12;
    plVar12 = *(long **)(lVar13 + (long)plVar7 * 8);
joined_r0x0d5daa05:
    if (plVar12 != (long *)0x0) goto LAB_0d5da75c;
LAB_0d5da39b:
    *plVar10 = *(long *)(puVar19 + 0x28);
    *(long **)(puVar19 + 0x28) = plVar10;
    *(undefined **)(lVar13 + (long)plVar7 * 8) = puVar19 + 0x28;
    if (*plVar10 != 0) {
      plVar7 = *(long **)(*plVar10 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        *(long **)(lVar13 + ((ulong)plVar7 & (long)plVar15 - 1U) * 8) = plVar10;
      }
      else {
        if (plVar15 <= plVar7) {
          if (((ulong)plVar7 | (ulong)plVar15) >> 0x20 == 0) {
            *(long **)(lVar13 + (((ulong)plVar7 & 0xffffffff) % ((ulong)plVar15 & 0xffffffff)) * 8)
                 = plVar10;
            goto LAB_0d5da766;
          }
          plVar7 = (long *)((ulong)plVar7 % (ulong)plVar15);
        }
        *(long **)(lVar13 + (long)plVar7 * 8) = plVar10;
      }
    }
  }
  else {
    fVar23 = (float)(long)plVar15;
    fVar22 = *(float *)(puVar19 + 0x38);
    if (plVar15 == (long *)0x0) goto LAB_0d5da3d9;
LAB_0d5da37e:
    if (fVar23 * fVar22 < (float)(*(long *)(puVar19 + 0x30) + 1)) goto LAB_0d5da3d9;
    lVar13 = *plVar12;
    plVar12 = *(long **)(lVar13 + (long)plVar7 * 8);
joined_r0x0d5da756:
    if (plVar12 == (long *)0x0) goto LAB_0d5da39b;
LAB_0d5da75c:
    *plVar10 = *plVar12;
    *plVar12 = (long)plVar10;
  }
LAB_0d5da766:
  *(long *)(puVar19 + 0x30) = *(long *)(puVar19 + 0x30) + 1;
LAB_0d5da76a:
  if (plStack_1b8 == alStack_1d8) {
    lVar13 = 0x20;
LAB_0d5da7dd:
    (**(code **)(*plStack_1b8 + lVar13))();
    if (plStack_1e8 != alStack_208) goto LAB_0d5da795;
LAB_0d5da7f2:
    lVar13 = 0x20;
LAB_0d5da7f7:
    (**(code **)(*plStack_1e8 + lVar13))();
    if (plStack_a8 != alStack_c8) goto LAB_0d5da7b4;
LAB_0d5da812:
    lVar13 = 0x20;
  }
  else {
    lVar13 = 0x28;
    if (plStack_1b8 != (long *)0x0) goto LAB_0d5da7dd;
    if (plStack_1e8 == alStack_208) goto LAB_0d5da7f2;
LAB_0d5da795:
    lVar13 = 0x28;
    if (plStack_1e8 != (long *)0x0) goto LAB_0d5da7f7;
    if (plStack_a8 == alStack_c8) goto LAB_0d5da812;
LAB_0d5da7b4:
    lVar13 = 0x28;
    if (plStack_a8 == (long *)0x0) {
      plVar7 = plStack_178;
      if (plStack_178 != alStack_198) goto LAB_0d5da836;
      goto LAB_0d5dadd9;
    }
  }
  (**(code **)(*plStack_a8 + lVar13))();
  plVar7 = plStack_178;
  if (plStack_178 == alStack_198) goto LAB_0d5dadd9;
LAB_0d5da836:
  lVar13 = 0x28;
  if (plVar7 != (long *)0x0) goto LAB_0d5dadde;
  if (plStack_f8 != alStack_118) goto LAB_0d5da85d;
LAB_0d5dadfd:
  lVar13 = 0x20;
LAB_0d5dae02:
  (**(code **)(*plStack_f8 + lVar13))();
  if (plStack_128 != alStack_148) goto LAB_0d5da884;
LAB_0d5dae21:
  lVar13 = 0x20;
LAB_0d5dae26:
  (**(code **)(*plStack_128 + lVar13))();
joined_r0x0d5dae31:
  if ((uStack_220 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_210,
                       CONCAT17(uStack_219,CONCAT25(uStack_21b,CONCAT14(uStack_21c,uStack_220))) &
                       0xfffffffffffffffe);
  }
  plVar7 = plStack_158;
  pcStack_160 = (char *)0x0;
  plStack_158 = (long *)0x0;
  if (plVar7 == (long *)0x0) {
LAB_0d5da92d:
    if (ppuStack_78 == apuStack_98) goto LAB_0d5da993;
LAB_0d5da942:
    lVar13 = 0x28;
    if (ppuStack_78 != (undefined **)0x0) goto LAB_0d5da998;
    if (ppuStack_48 != apuStack_68) goto LAB_0d5da961;
  }
  else {
    LOCK();
    plVar12 = plVar7 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 != 0) {
      puStack_150 = (undefined *)0x0;
      goto LAB_0d5da92d;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
    plVar7 = plStack_158;
    puStack_150 = (undefined *)0x0;
    if (plStack_158 == (long *)0x0) goto LAB_0d5da92d;
    puStack_150 = (undefined *)0x0;
    LOCK();
    plVar12 = plStack_158 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 != 0) goto LAB_0d5da92d;
    (**(code **)(*plStack_158 + 0x10))(plStack_158);
    func_0x0412c2d0(plVar7);
    if (ppuStack_78 != apuStack_98) goto LAB_0d5da942;
LAB_0d5da993:
    lVar13 = 0x20;
LAB_0d5da998:
    (**(code **)(*ppuStack_78 + lVar13))();
    if (ppuStack_48 != apuStack_68) {
LAB_0d5da961:
      lVar13 = 0x28;
      if (ppuStack_48 == (undefined **)0x0) {
        return;
      }
      goto LAB_0d5da9b8;
    }
  }
  lVar13 = 0x20;
LAB_0d5da9b8:
  (**(code **)(*ppuStack_48 + lVar13))();
  return;
LAB_0d5d9df8:
  plVar7 = (long *)plVar12[10];
  if (plVar7 == (long *)0x0) {
    plStack_1e8 = (long *)0x0;
    if (plStack_128 != alStack_148) {
      plVar7 = (long *)0x0;
      goto LAB_0d5dab06;
    }
LAB_0d5dab18:
    (**(code **)(*plStack_128 + 0x18))();
    (**(code **)(*plStack_128 + 0x20))();
    plStack_128 = plStack_1e8;
    plStack_1e8 = alStack_208;
LAB_0d5dac42:
    lVar13 = 0x20;
LAB_0d5dac47:
    (**(code **)(*plStack_1e8 + lVar13))();
  }
  else {
    if (plVar7 == plVar12 + 6) {
      plStack_1e8 = alStack_208;
      (**(code **)(*plVar7 + 0x18))();
    }
    else {
      plStack_1e8 = (long *)(**(code **)(*plVar7 + 0x10))();
    }
    if (plStack_1e8 == alStack_208) {
      if (plStack_128 == alStack_148) {
        (**(code **)(*plStack_1e8 + 0x18))(plStack_1e8,alStack_198);
        (**(code **)(*plStack_1e8 + 0x20))();
        plStack_1e8 = (long *)0x0;
        (**(code **)(*plStack_128 + 0x18))(plStack_128,alStack_208);
        (**(code **)(*plStack_128 + 0x20))();
        plStack_128 = (long *)0x0;
        plStack_1e8 = alStack_208;
        (**(code **)(alStack_198[0] + 0x18))(alStack_198,alStack_148);
        (**(code **)(alStack_198[0] + 0x20))(alStack_198);
        plStack_128 = alStack_148;
      }
      else {
        (**(code **)(*plStack_1e8 + 0x18))(plStack_1e8,alStack_148);
        (**(code **)(*plStack_1e8 + 0x20))();
        plStack_1e8 = plStack_128;
        plStack_128 = alStack_148;
      }
    }
    else {
      plVar7 = plStack_1e8;
      if (plStack_128 == alStack_148) goto LAB_0d5dab18;
LAB_0d5dab06:
      plStack_1e8 = plStack_128;
      plStack_128 = plVar7;
    }
    if (plStack_1e8 == alStack_208) goto LAB_0d5dac42;
    lVar13 = 0x28;
    if (plStack_1e8 != (long *)0x0) goto LAB_0d5dac47;
  }
  plVar7 = (long *)plVar12[0x10];
  if (plVar7 == (long *)0x0) {
    plStack_1e8 = (long *)0x0;
    if (plStack_f8 == alStack_118) goto LAB_0d5daccf;
    plVar7 = (long *)0x0;
LAB_0d5dacbd:
    plStack_1e8 = plStack_f8;
    plStack_f8 = plVar7;
LAB_0d5dadcb:
    plVar7 = plStack_1e8;
    if (plStack_1e8 != alStack_208) goto LAB_0d5da836;
  }
  else {
    if (plVar7 == plVar12 + 0xc) {
      plStack_1e8 = alStack_208;
      (**(code **)(*plVar7 + 0x18))();
    }
    else {
      plStack_1e8 = (long *)(**(code **)(*plVar7 + 0x10))();
    }
    if (plStack_1e8 == alStack_208) {
      if (plStack_f8 == alStack_118) {
        (**(code **)(*plStack_1e8 + 0x18))(plStack_1e8,alStack_198);
        (**(code **)(*plStack_1e8 + 0x20))();
        plStack_1e8 = (long *)0x0;
        (**(code **)(*plStack_f8 + 0x18))(plStack_f8,alStack_208);
        (**(code **)(*plStack_f8 + 0x20))();
        plStack_f8 = (long *)0x0;
        plStack_1e8 = alStack_208;
        (**(code **)(alStack_198[0] + 0x18))(alStack_198,alStack_118);
        (**(code **)(alStack_198[0] + 0x20))(alStack_198);
        plStack_f8 = alStack_118;
      }
      else {
        (**(code **)(*plStack_1e8 + 0x18))(plStack_1e8,alStack_118);
        (**(code **)(*plStack_1e8 + 0x20))();
        plStack_1e8 = plStack_f8;
        plStack_f8 = alStack_118;
      }
      goto LAB_0d5dadcb;
    }
    plVar7 = plStack_1e8;
    if (plStack_f8 != alStack_118) goto LAB_0d5dacbd;
LAB_0d5daccf:
    (**(code **)(*plStack_f8 + 0x18))();
    (**(code **)(*plStack_f8 + 0x20))();
    plStack_f8 = plStack_1e8;
    plStack_1e8 = alStack_208;
    plVar7 = alStack_208;
  }
LAB_0d5dadd9:
  lVar13 = 0x20;
LAB_0d5dadde:
  (**(code **)(*plVar7 + lVar13))();
  if (plStack_f8 == alStack_118) goto LAB_0d5dadfd;
LAB_0d5da85d:
  lVar13 = 0x28;
  if (plStack_f8 != (long *)0x0) goto LAB_0d5dae02;
  if (plStack_128 == alStack_148) goto LAB_0d5dae21;
LAB_0d5da884:
  lVar13 = 0x28;
  if (plStack_128 != (long *)0x0) goto LAB_0d5dae26;
  goto joined_r0x0d5dae31;
}


