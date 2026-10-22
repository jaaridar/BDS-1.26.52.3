/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8c0df20 (ELF vaddr 0x8b0df20)
 * Label: caller-of-callee
 * Body:  [[08c0df20, 08c0f6a0] [08c0f6b0, 08c0f908]]
 * Ghidra: FUN_08c0df20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08c0df20(long ***param_1,long param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long ***ppplVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  long *plVar13;
  long ***ppplVar14;
  long *plVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  code *pcVar21;
  undefined1 extraout_DL;
  undefined1 extraout_DL_00;
  ulong uVar22;
  long **pplVar23;
  undefined *puVar24;
  undefined4 *puVar25;
  long **pplVar26;
  undefined4 *puVar27;
  undefined1 auVar28 [16];
  undefined4 *puStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [4];
  undefined4 uStack_21c;
  long **pplStack_218;
  long **pplStack_210;
  long **pplStack_208;
  undefined4 uStack_200;
  char cStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  long ***ppplStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long ***ppplStack_1b0;
  long lStack_1a8;
  undefined4 *puStack_1a0;
  undefined1 auStack_198 [8];
  long ***ppplStack_190;
  long **pplStack_188;
  long *plStack_180;
  int iStack_178;
  undefined *puStack_170;
  uint uStack_168;
  undefined4 uStack_164;
  long *plStack_160;
  int iStack_158;
  undefined4 *puStack_150;
  uint uStack_148;
  undefined1 uStack_144;
  undefined2 uStack_143;
  undefined1 uStack_141;
  char cStack_140;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  uint uStack_118;
  undefined1 uStack_114;
  undefined2 uStack_113;
  undefined1 uStack_111;
  undefined4 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  long **pplStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  long ***ppplStack_c8;
  long *plStack_b0;
  long **pplStack_a8;
  long ***ppplStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  char cStack_88;
  undefined7 uStack_87;
  undefined4 uStack_80;
  char cStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long **pplStack_68;
  long *plStack_60;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_38;
  
  uStack_228 = (long **)((ulong)uStack_228 & 0xffffffffffffff00);
  pplStack_208 = (long **)((ulong)pplStack_208 & 0xffffffffffffff00);
  func_0x08c10050(param_1,&uStack_228);
  ppplStack_1b0 = param_1;
  if (((char)pplStack_208 == '\x01') && (uStack_228 != (long **)0x0)) {
    if (*uStack_228 != (long *)0x0 && (undefined1  [4])*(int *)(uStack_228 + 1) == auStack_220) {
      func_0x0d8569b0(*uStack_228,pplStack_218,(ulong)pplStack_210 & 0xffffffff);
    }
  }
  lVar16 = *(long *)(param_2 + 0x30);
  uStack_228 = (long **)0x0;
  if ((*param_3 & 1) == 0) {
    pplStack_210 = *(long ***)(param_3 + 0x10);
    _auStack_220 = *(long ****)param_3;
    pplStack_218 = *(long ***)(param_3 + 8);
  }
  else {
    func_0x0412e5e0(auStack_220,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  pplStack_208 = (long **)0x0;
  lStack_1a8 = param_2;
  if (((ulong)_auStack_220 & 1) == 0) {
    if (auStack_220[0] >> 1 != 0) goto LAB_08c0e002;
LAB_08c0e0f6:
    pplVar26 = (long **)0x0;
  }
  else {
    if (pplStack_218 == (long **)0x0) goto LAB_08c0e0f6;
LAB_08c0e002:
    if (((ulong)_auStack_220 & 1) == 0) {
      pplVar23 = (long **)(auStack_220 + 1);
      if (pplVar23 != (long **)0x0) goto LAB_08c0e023;
      goto LAB_08c0e0f6;
    }
    pplVar23 = pplStack_210;
    if (pplStack_210 == (long **)0x0) goto LAB_08c0e0f6;
LAB_08c0e023:
    if (*(byte *)pplVar23 == 0) goto LAB_08c0e0f6;
    pplVar26 = (long **)0xcbf29ce484222325;
    uVar20 = func_0x0eee2e90(pplVar23);
    if (uVar20 != 0) {
      uVar22 = (ulong)((uint)uVar20 & 7);
      if (7 < uVar20) {
        uVar20 = uVar20 & 0xfffffffffffffff8;
        do {
          pplVar26 = (long **)(((((((((long)pplVar26 * 0x100000001b3 ^ (ulong)*(byte *)pplVar23) *
                                     0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 1)) *
                                    0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 2)) *
                                   0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 3)) *
                                  0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 4)) *
                                 0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 5)) *
                                0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 6)) *
                               0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 7));
          pplVar23 = pplVar23 + 1;
          uVar20 = uVar20 - 8;
        } while (uVar20 != 0);
      }
      if (uVar22 != 0) {
        uVar20 = 0;
        do {
          pplVar26 = (long **)((long)pplVar26 * 0x100000001b3 ^
                              (ulong)*(byte *)((long)pplVar23 + uVar20));
          uVar20 = uVar20 + 1;
        } while (uVar22 != uVar20);
      }
    }
  }
  uStack_228 = pplVar26;
  cVar11 = func_0x0c6c9670(*(undefined8 *)(lVar16 + 0x68),&uStack_228);
  if (((ulong)_auStack_220 & 1) != 0) {
    func_0x0412a280(pplStack_210,(ulong)_auStack_220 & 0xfffffffffffffffe);
  }
  if (cVar11 == '\0') {
    return;
  }
  lVar16 = *(long *)(lStack_1a8 + 0x30);
  uStack_228 = (long **)0x0;
  if ((*param_3 & 1) == 0) {
    pplStack_210 = *(long ***)(param_3 + 0x10);
    _auStack_220 = *(long ****)param_3;
    pplStack_218 = *(long ***)(param_3 + 8);
  }
  else {
    func_0x0412e5e0(auStack_220,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  pplStack_208 = (long **)0x0;
  if (((ulong)_auStack_220 & 1) == 0) {
    if (auStack_220[0] >> 1 != 0) goto LAB_08c0e19b;
LAB_08c0e285:
    pplVar26 = (long **)0x0;
  }
  else {
    if (pplStack_218 == (long **)0x0) goto LAB_08c0e285;
LAB_08c0e19b:
    if (((ulong)_auStack_220 & 1) == 0) {
      pplVar23 = (long **)(auStack_220 + 1);
      if (pplVar23 != (long **)0x0) goto LAB_08c0e1bc;
      goto LAB_08c0e285;
    }
    pplVar23 = pplStack_210;
    if (pplStack_210 == (long **)0x0) goto LAB_08c0e285;
LAB_08c0e1bc:
    if (*(byte *)pplVar23 == 0) goto LAB_08c0e285;
    pplVar26 = (long **)0xcbf29ce484222325;
    uVar20 = func_0x0eee2e90(pplVar23);
    if (uVar20 != 0) {
      uVar22 = (ulong)((uint)uVar20 & 7);
      if (7 < uVar20) {
        uVar20 = uVar20 & 0xfffffffffffffff8;
        do {
          pplVar26 = (long **)(((((((((long)pplVar26 * 0x100000001b3 ^ (ulong)*(byte *)pplVar23) *
                                     0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 1)) *
                                    0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 2)) *
                                   0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 3)) *
                                  0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 4)) *
                                 0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 5)) *
                                0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 6)) *
                               0x100000001b3 ^ (ulong)*(byte *)((long)pplVar23 + 7));
          pplVar23 = pplVar23 + 1;
          uVar20 = uVar20 - 8;
        } while (uVar20 != 0);
      }
      if (uVar22 != 0) {
        uVar20 = 0;
        do {
          pplVar26 = (long **)((long)pplVar26 * 0x100000001b3 ^
                              (ulong)*(byte *)((long)pplVar23 + uVar20));
          uVar20 = uVar20 + 1;
        } while (uVar22 != uVar20);
      }
    }
  }
  uStack_228 = pplVar26;
  plVar13 = (long *)func_0x0c6c97e0(*(undefined8 *)(lVar16 + 0x68),&uStack_228);
  if (((ulong)_auStack_220 & 1) != 0) {
    func_0x0412a280(pplStack_210,(ulong)_auStack_220 & 0xfffffffffffffffe);
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  if ((*(byte *)(plVar13 + 4) & 1) == 0) {
    pplStack_188 = (long **)plVar13[6];
    auStack_198 = (undefined1  [8])plVar13[4];
    ppplStack_190 = (long ***)plVar13[5];
  }
  else {
    func_0x0412e5e0(auStack_198,plVar13[6],plVar13[5]);
  }
  uStack_108 = (undefined4 *)0x0;
  uStack_100 = (undefined4 *)0x0;
  puStack_f8 = (undefined4 *)0x0;
  lStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (plVar13[2] == 0) {
    puStack_230 = (undefined4 *)0x0;
    puStack_1a0 = (undefined4 *)0x0;
    goto LAB_08c0f64c;
  }
  puStack_230 = (undefined4 *)0x0;
  puVar24 = &UNK_0f47e0b0;
  puStack_1a0 = (undefined4 *)0x0;
  puVar27 = (undefined4 *)0x0;
  puVar19 = (undefined4 *)0x0;
  plStack_60 = plVar13;
  do {
    uStack_228 = (long **)&UNK_0f47e0b0;
    _auStack_220 = &pplStack_218;
    pplStack_218 = (long **)0x0;
    pplStack_210 = (long **)0x0;
    pplVar23 = (long **)auStack_220;
    func_0x0cb8a380(plVar13,&uStack_228,(ulong)puVar27 & 0xffffffff);
    pplStack_a8 = pplStack_188;
    ppplStack_a0 = ppplStack_190;
    if (((ulong)auStack_198 & 1) == 0) {
      pplStack_a8 = (long **)(auStack_198 + 1);
      ppplStack_a0 = (long ***)((ulong)auStack_198 >> 1 & 0x7f);
    }
    ppplVar14 = (long ***)func_0x0d6c9880(pplVar23,&pplStack_a8);
    puVar17 = puVar19;
    puVar25 = puStack_230;
    if (ppplVar14 != &pplStack_218) {
      if ((ulong)*(uint *)(ppplVar14 + 0xc) == 0xffffffff) {
        func_0x04931450();
        goto LAB_08c0f86a;
      }
      pplStack_e8 = &plStack_160;
      plVar15 = (long *)(**(code **)(&UNK_0f47e800 + (ulong)*(uint *)(ppplVar14 + 0xc) * 8))
                                  (&pplStack_e8,ppplVar14 + 7);
      if (plVar15 != (long *)0x0) {
        cVar11 = (**(code **)(*plVar15 + 0x30))(plVar15);
        puVar9 = uStack_100;
        if (cVar11 == '\b') {
          if (uStack_100 < puStack_f8) {
            if ((*(byte *)(plVar15 + 1) & 1) == 0) {
              *(long *)(uStack_100 + 4) = plVar15[3];
              uVar3 = *(undefined4 *)((long)plVar15 + 0xc);
              lVar16 = plVar15[2];
              uVar4 = *(undefined4 *)((long)plVar15 + 0x14);
              *uStack_100 = *(undefined4 *)(plVar15 + 1);
              uStack_100[1] = uVar3;
              uStack_100[2] = (int)lVar16;
              uStack_100[3] = uVar4;
            }
            else {
              func_0x0412e5e0(uStack_100,plVar15[3],plVar15[2]);
            }
            uStack_100 = puVar9 + 6;
          }
          else {
            uStack_100 = (undefined4 *)func_0x04909bd0(&uStack_108);
          }
        }
        else if (cVar11 == '\x03') {
          if (puVar19 < puStack_1a0) {
            *puVar19 = (int)plVar15[1];
            puVar17 = puVar19 + 1;
          }
          else {
            puStack_110 = (undefined4 *)((long)puVar19 - (long)puStack_230);
            puVar19 = (undefined4 *)((long)puStack_110 >> 2);
            pplVar26 = (long **)((long)puVar19 + 1);
            if ((long **)0x3fffffffffffffff < pplVar26) {
LAB_08c0f896:
              func_0x04aa1da0();
              goto LAB_08c0f89b;
            }
            plVar13 = (long *)((long)puStack_1a0 - (long)puStack_230);
            pplVar23 = (long **)((long)plVar13 >> 1);
            if ((long **)((long)plVar13 >> 1) <= pplVar26) {
              pplVar23 = pplVar26;
            }
            if ((long *)0x7ffffffffffffffb < plVar13) {
              pplVar23 = (long **)0x3fffffffffffffff;
            }
            plStack_b0 = plVar13;
            if ((long **)0x3fffffffffffffff < pplVar23) goto LAB_08c0f891;
            lStack_38 = (long)pplVar23 * 4;
            lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (lVar16 == 0) {
              func_0x0eec74c0(lStack_38,0);
            }
            puStack_1a0 = (undefined4 *)((long)pplVar23 * 4 + lVar16);
            *(int *)(lVar16 + (long)puStack_110) = (int)plVar15[1];
            puVar17 = (undefined4 *)((long)puStack_110 + lVar16 + 4);
            puVar25 = (undefined4 *)((long)puStack_110 + (long)puVar19 * -4 + lVar16);
            func_0x0eee2f00(puVar25,puStack_230);
            plVar13 = plStack_60;
            if (puStack_230 != (undefined4 *)0x0) {
              func_0x0412a280(puStack_230,plStack_b0);
              plVar13 = plStack_60;
            }
          }
        }
        else if (cVar11 == '\x01') {
          bVar1 = *(byte *)(plVar15 + 1);
          pplVar23 = (long **)(ulong)bVar1;
          if (uStack_50 == lStack_48 << 6) {
            if ((long)(uStack_50 + 1) < 0) {
              func_0x048acb40();
LAB_08c0f891:
              func_0x04882eb0();
              goto LAB_08c0f896;
            }
            if (uStack_50 < 0x3fffffffffffffff) {
              uVar20 = (uStack_50 & 0x3fffffffffffffc0) + 0x40;
              if (uVar20 < (ulong)(lStack_48 << 7)) {
                uVar20 = lStack_48 << 7;
              }
            }
            else {
              uVar20 = 0x7fffffffffffffff;
            }
            func_0x048ac710(&lStack_58,uVar20);
          }
          uVar22 = 1L << ((byte)uStack_50 & 0x3f);
          uVar20 = uStack_50 >> 6;
          if (bVar1 == 0) {
            uVar22 = ~uVar22 & *(ulong *)(lStack_58 + uVar20 * 8);
          }
          else {
            uVar22 = uVar22 | *(ulong *)(lStack_58 + uVar20 * 8);
          }
          *(ulong *)(lStack_58 + uVar20 * 8) = uVar22;
          uStack_50 = uStack_50 + 1;
        }
      }
    }
    puStack_230 = puVar25;
    uStack_228 = (long **)&UNK_0f47e0b0;
    func_0x0d6c9500(auStack_220,pplStack_218);
    lVar16 = lStack_1a8;
    puVar27 = (undefined4 *)((long)puVar27 + 1);
    puVar19 = puVar17;
  } while (puVar27 < (undefined4 *)plVar13[2]);
  if (uStack_108 == uStack_100) {
    if (puStack_230 == puVar17) {
      if (uStack_50 != 0) {
        func_0x08c101e0(&plStack_160,lStack_1a8);
        iVar12 = _DAT_0f5eaab8;
        pplVar23 = _DAT_0f5eaab0;
        plVar15 = *(long **)(lVar16 + 0x20);
        if ((plVar15 == (long *)0x0) ||
           (*plVar15 == 0 || (int)plVar15[1] != *(int *)(lVar16 + 0x28))) {
          uStack_d8 = CONCAT44(uRam000000000f5eaac4,_DAT_0f5eaac0);
          uStack_d0 = uRam000000000f5eaac8;
          uStack_cc = uRam000000000f5eaacc;
          if (_DAT_0f5eaab0 == (long **)0x0) {
            pplVar23 = (long **)0x0;
          }
          else if (*_DAT_0f5eaab0 != (long *)0x0 && *(int *)(_DAT_0f5eaab0 + 1) == _DAT_0f5eaab8) {
            func_0x0d8568b0(*_DAT_0f5eaab0,uStack_d8);
          }
        }
        else {
          func_0x08d7a6f0(&pplStack_e8,*plVar15,auStack_198,plVar13,&lStack_58,&plStack_160);
          pplVar23 = pplStack_e8;
          iVar12 = (int)plStack_e0;
        }
        ppplStack_a0 = (long ***)CONCAT44(ppplStack_a0._4_4_,iVar12);
        uStack_98 = (undefined4)uStack_d8;
        uStack_94 = uStack_d8._4_4_;
        uStack_90 = uStack_d0;
        uStack_8c = uStack_cc;
        pplStack_e8 = (long **)0x0;
        plStack_e0 = (long *)((ulong)plStack_e0 & 0xffffffff00000000);
        uStack_d8 = 0xffffffffffffff;
        uStack_d0 = uStack_d0 & 0xffffff00;
        cStack_88 = '\x01';
        pplStack_a8 = pplVar23;
        func_0x08c10050(&uStack_228,&pplStack_a8);
        *(undefined1 *)ppplStack_1b0 = (undefined1)uStack_228;
        if (ppplStack_1b0 != (long ***)&uStack_228) {
          ppplVar14 = ppplStack_1b0 + 1;
          if (ppplStack_1b0[4] != (long **)0x0) {
            (*(code *)ppplStack_1b0[4])(ppplVar14);
          }
          ppplVar6 = _auStack_220;
          if (cStack_1fc != '\0') {
            if (cStack_1fc == '\x02') {
              (*(code *)pplStack_210)(5,auStack_220,ppplVar14);
            }
            else {
              _auStack_220 = (long ***)0x0;
              *ppplVar14 = (long **)ppplVar6;
            }
          }
          ppplStack_1b0[3] = pplStack_210;
          ppplStack_1b0[4] = pplStack_208;
          *(undefined4 *)(ppplStack_1b0 + 5) = uStack_200;
          *(char *)((long)ppplStack_1b0 + 0x2c) = cStack_1fc;
        }
        ppplVar14 = ppplStack_1e8;
        uVar3 = (undefined4)uStack_1f0;
        uVar4 = uStack_1f0._4_4_;
        uStack_1f0 = 0;
        *(undefined4 *)(ppplStack_1b0 + 6) = uStack_1f8;
        *(undefined4 *)((long)ppplStack_1b0 + 0x34) = uStack_1f4;
        *(undefined4 *)(ppplStack_1b0 + 7) = uVar3;
        *(undefined4 *)((long)ppplStack_1b0 + 0x3c) = uVar4;
        ppplStack_1e8 = (long ***)0x0;
        ppplStack_1b0[8] = (long **)ppplVar14;
        if (pplStack_208 != (long **)0x0) {
          (*(code *)pplStack_208)(auStack_220);
        }
        if ((cStack_88 == '\x01') && (pplStack_a8 != (long **)0x0)) {
          if (*pplStack_a8 != (long *)0x0 && *(int *)(pplStack_a8 + 1) == (int)ppplStack_a0) {
            func_0x0d8569b0(*pplStack_a8,CONCAT44(uStack_94,uStack_98),uStack_90);
          }
        }
        if ((plStack_160 != (long *)0x0) && (*plStack_160 != 0 && (int)plStack_160[1] == iStack_158)
           ) {
          func_0x0d8569b0(*plStack_160,puStack_150,uStack_148);
        }
      }
      goto LAB_08c0f64c;
    }
    puStack_110 = puVar17;
    func_0x08c101e0(&plStack_180,lStack_1a8);
    iStack_158 = _DAT_0f5eaa90;
    plStack_160 = _DAT_0f5eaa88;
    plVar13 = *(long **)(lVar16 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar2 = *plVar13, lVar2 == 0 || (int)plVar13[1] != *(int *)(lVar16 + 0x28))) {
      uStack_120 = (undefined4 *)CONCAT44(uRam000000000f5eaa9c,_DAT_0f5eaa98);
      uStack_118 = uRam000000000f5eaaa0;
      uStack_114 = (undefined1)uRam000000000f5eaaa4;
      uStack_113 = (undefined2)((uint)uRam000000000f5eaaa4 >> 8);
      uStack_111 = (undefined1)((uint)uRam000000000f5eaaa4 >> 0x18);
      if (_DAT_0f5eaa88 == (long *)0x0) {
        plStack_160 = (long *)0x0;
      }
      else if (*_DAT_0f5eaa88 != 0 && (int)_DAT_0f5eaa88[1] == _DAT_0f5eaa90) {
        func_0x0d8568b0(*_DAT_0f5eaa88,uStack_120);
      }
    }
    else {
      plStack_e0 = (long *)(lVar2 + 0x10);
      uStack_228 = (long **)((ulong)uStack_228 & 0xffffffffffff0000);
      _auStack_220 = (long ***)&UNK_08d778b0;
      pplStack_218 = (long **)&UNK_08d77aa0;
      ppplStack_1e8 = (long ***)0x0;
      uStack_1d8 = 0;
      uStack_1d0 = 0x100000060;
      plStack_1c8 = (long *)0x0;
      pplStack_e8 = (long **)&UNK_0f157a40;
      ppplStack_c8 = &pplStack_e8;
      func_0x065bdd40(&pplStack_e8,&pplStack_208);
      if (ppplStack_c8 == &pplStack_e8) {
        lVar16 = 0x20;
LAB_08c0f025:
        (**(code **)((long)*ppplStack_c8 + lVar16))();
      }
      else {
        lVar16 = 0x28;
        if (ppplStack_c8 != (long ***)0x0) goto LAB_08c0f025;
      }
      puVar19 = (undefined4 *)func_0x0d856c70(lVar2,&uStack_228);
      plVar13 = plStack_1c8;
      plStack_1c8 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
      if (ppplStack_1e8 == &pplStack_208) {
        lVar16 = 0x20;
LAB_08c0f071:
        (**(code **)((long)*ppplStack_1e8 + lVar16))();
      }
      else {
        lVar16 = 0x28;
        if (ppplStack_1e8 != (long ***)0x0) goto LAB_08c0f071;
      }
      lStack_1a8 = CONCAT71(lStack_1a8._1_7_,extraout_DL_00);
      if ((int)puVar19 != -1) {
        uStack_134 = 0x1f4d7939;
        plVar13 = (long *)(*(long *)(lVar2 + 0x70) +
                          (ulong)(((uint)(*(int *)(lVar2 + 0x78) - (int)*(long *)(lVar2 + 0x70)) >>
                                  3) - 1 & 0x1f4d7939) * 8);
        do {
          if (*plVar13 == -1) {
            plVar13 = *(long **)(lVar2 + 0x90);
            plVar15 = plVar13;
            goto LAB_08c0f1c7;
          }
          lVar16 = *plVar13 * 0x20;
          plVar13 = (long *)(*(long *)(lVar2 + 0x88) + lVar16);
        } while (*(int *)(*(long *)(lVar2 + 0x88) + 8 + lVar16) != 0x1f4d7939);
        plVar15 = *(long **)(lVar2 + 0x90);
LAB_08c0f1c7:
        if (plVar13 == plVar15) {
          plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
          if (plVar13 == (long *)0x0) {
            func_0x0eec74c0(0x80,0);
          }
          plVar13[1] = 0;
          plVar13[2] = 0;
          *plVar13 = (long)&UNK_0f157ac0;
          if ((DAT_0f5f19a0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5f19a0), iVar12 != 0)) {
            func_0x08d77fb0(0xf5f1988);
            func_0x0410844d(&DAT_0f5f19a0);
          }
          pplStack_e8 = (long **)(plVar13 + 3);
          plVar13[8] = 0;
          plVar13[9] = 0;
          plVar13[6] = 0;
          plVar13[7] = 0;
          plVar13[4] = 0;
          plVar13[5] = 0;
          plVar13[10] = 0xf5f1988;
          *(undefined1 *)(plVar13 + 0xb) = 1;
          plVar13[0xc] = 0xffffffff;
          plVar13[3] = (long)&UNK_0f157b10;
          plVar13[0xd] = 0;
          plVar13[0xe] = 0;
          plVar13[0xf] = 0;
          plStack_e0 = plVar13;
          func_0x065bf170(lVar2 + 0x70,&uStack_134,&pplStack_e8);
          pplStack_218 = (long **)&UNK_065bf690;
          pplStack_210 = (long **)0x0;
          pplStack_208 = (long **)CONCAT35(pplStack_208._5_3_,0x3145ad657);
          uStack_228 = (long **)(lVar2 + 0x38);
          (*(code *)(*pplStack_e8)[5])(pplStack_e8,&uStack_228);
          if (pplStack_210 != (long **)0x0) {
            (*(code *)pplStack_210)(&uStack_228);
          }
          plVar13 = plStack_e0;
          pplVar23 = pplStack_e8;
          if (plStack_e0 != (long *)0x0) {
            LOCK();
            plVar15 = plStack_e0 + 1;
            lVar16 = *plVar15;
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (lVar16 == 0) {
              (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
              FUN_0412c2d0(plVar13);
            }
          }
        }
        else {
          pplVar23 = (long **)plVar13[2];
        }
        auVar28 = func_0x0d8547a0(pplVar23,puVar19,0,0);
        plStack_b0 = auVar28._0_8_;
        puVar18 = (undefined8 *)func_0x08d79ff0(pplVar23,auVar28._8_8_ + -1);
        if (((ulong)auStack_198 & 1) == 0) {
          pplStack_218 = pplStack_188;
          uStack_228 = (long **)auStack_198;
          _auStack_220 = ppplStack_190;
        }
        else {
          func_0x0412e5e0(&uStack_228,pplStack_188,ppplStack_190);
        }
        puVar24 = puStack_170;
        iVar12 = iStack_178;
        plVar13 = plStack_180;
        uVar7 = (undefined1)uStack_168;
        plStack_180 = (long *)0x0;
        iStack_178 = 0;
        puStack_170 = (undefined *)0xffffffffffffff;
        uVar5 = uStack_168 >> 8;
        uStack_168 = uStack_168 & 0xffffff00;
        *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_228;
        *(undefined4 *)((long)puVar18 + 0xc) = uStack_228._4_4_;
        *(undefined1 (*) [4])(puVar18 + 2) = auStack_220;
        *(undefined4 *)((long)puVar18 + 0x14) = uStack_21c;
        puVar18[3] = pplStack_218;
        puVar18[4] = plVar13;
        *(int *)(puVar18 + 5) = iVar12;
        puVar18[6] = puVar24;
        *(undefined1 *)(puVar18 + 7) = uVar7;
        *(uint *)((long)puVar18 + 0x39) = CONCAT13((undefined1)uStack_164,(int3)uVar5);
        *(undefined4 *)((long)puVar18 + 0x3c) = uStack_164;
        puVar18[8] = plStack_60;
        *puVar18 = &UNK_0f159fa0;
        puVar18[9] = puStack_230;
        puVar18[10] = puStack_110;
        puVar18[0xb] = puStack_1a0;
        puStack_230 = (undefined4 *)0x0;
        puStack_1a0 = (undefined4 *)0x0;
      }
      plStack_160 = *(long **)(lVar2 + 8);
      if (plStack_160 == (long *)0x0) {
        iStack_158 = 0;
      }
      else {
        iStack_158 = (int)plStack_160[1];
      }
      uStack_118 = CONCAT31(uStack_118._1_3_,(undefined1)lStack_1a8);
      uStack_120 = puVar19;
    }
    puStack_150 = uStack_120;
    uStack_148 = uStack_118;
    uStack_144 = uStack_114;
    uStack_143 = uStack_113;
    uStack_141 = uStack_111;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = (undefined4 *)0xffffffffffffff;
    uStack_118 = uStack_118 & 0xffffff00;
    cStack_140 = '\x01';
    func_0x08c10050(&pplStack_a8,&plStack_160);
    *(undefined1 *)ppplStack_1b0 = pplStack_a8._0_1_;
    if (ppplStack_1b0 == &pplStack_a8) {
      pcVar21 = (code *)CONCAT71(uStack_87,cStack_88);
    }
    else {
      ppplVar14 = ppplStack_1b0 + 1;
      if (ppplStack_1b0[4] != (long **)0x0) {
        (*(code *)ppplStack_1b0[4])(ppplVar14);
      }
      ppplVar6 = ppplStack_a0;
      if (cStack_7c != '\0') {
        if (cStack_7c == '\x02') {
          (*(code *)CONCAT44(uStack_8c,uStack_90))(5,&ppplStack_a0,ppplVar14);
        }
        else {
          ppplStack_a0 = (long ***)0x0;
          *ppplVar14 = (long **)ppplVar6;
        }
      }
      pcVar21 = (code *)CONCAT71(uStack_87,cStack_88);
      ppplStack_1b0[3] = (long **)CONCAT44(uStack_8c,uStack_90);
      ppplStack_1b0[4] = (long **)CONCAT71(uStack_87,cStack_88);
      *(undefined4 *)(ppplStack_1b0 + 5) = uStack_80;
      *(char *)((long)ppplStack_1b0 + 0x2c) = cStack_7c;
    }
    pplVar23 = pplStack_68;
    uVar3 = (undefined4)uStack_70;
    uVar4 = uStack_70._4_4_;
    uStack_70 = 0;
    *(undefined4 *)(ppplStack_1b0 + 6) = uStack_78;
    *(undefined4 *)((long)ppplStack_1b0 + 0x34) = uStack_74;
    *(undefined4 *)(ppplStack_1b0 + 7) = uVar3;
    *(undefined4 *)((long)ppplStack_1b0 + 0x3c) = uVar4;
    pplStack_68 = (long **)0x0;
    ppplStack_1b0[8] = pplVar23;
    if (pcVar21 != (code *)0x0) {
      (*pcVar21)(&ppplStack_a0);
    }
    if (((cStack_140 == '\x01') && (plStack_160 != (long *)0x0)) &&
       (*plStack_160 != 0 && (int)plStack_160[1] == iStack_158)) {
      func_0x0d8569b0(*plStack_160,puStack_150,uStack_148);
    }
    if ((plStack_180 != (long *)0x0) && (*plStack_180 != 0 && (int)plStack_180[1] == iStack_178)) {
      func_0x0d8569b0(*plStack_180,puStack_170,uStack_168);
    }
    goto LAB_08c0f64c;
  }
  func_0x08c101e0(&plStack_180,lStack_1a8);
  iStack_158 = _DAT_0f5eaa68;
  plStack_160 = _DAT_0f5eaa60;
  puVar24 = (undefined *)0xffffffffffffff;
  puVar18 = *(undefined8 **)(lVar16 + 0x20);
  if ((puVar18 == (undefined8 *)0x0) ||
     (puVar19 = (undefined4 *)*puVar18,
     puVar19 == (undefined4 *)0x0 || *(int *)(puVar18 + 1) != *(int *)(lVar16 + 0x28))) {
    uStack_120 = (undefined4 *)CONCAT44(uRam000000000f5eaa74,_DAT_0f5eaa70);
    uStack_118 = uRam000000000f5eaa78;
    uStack_114 = (undefined1)uRam000000000f5eaa7c;
    uStack_113 = (undefined2)((uint)uRam000000000f5eaa7c >> 8);
    uStack_111 = (undefined1)((uint)uRam000000000f5eaa7c >> 0x18);
    if (_DAT_0f5eaa60 == (long *)0x0) {
      plStack_160 = (long *)0x0;
    }
    else if (*_DAT_0f5eaa60 != 0 && (int)_DAT_0f5eaa60[1] == _DAT_0f5eaa68) {
      func_0x0d8568b0(*_DAT_0f5eaa60,uStack_120);
    }
  }
  else {
    plStack_e0 = (long *)(puVar19 + 4);
    uStack_228 = (long **)((ulong)uStack_228 & 0xffffffffffff0000);
    _auStack_220 = (long ***)&UNK_08d749f0;
    pplStack_218 = (long **)&UNK_08d74be0;
    ppplStack_1e8 = (long ***)0x0;
    uStack_1d8 = 0;
    uStack_1d0 = 0x100000060;
    plStack_1c8 = (long *)0x0;
    pplStack_e8 = (long **)&UNK_0f1578f0;
    ppplStack_c8 = &pplStack_e8;
    func_0x065bdd40(&pplStack_e8,&pplStack_208);
    if (ppplStack_c8 == &pplStack_e8) {
      lVar16 = 0x20;
LAB_08c0ea2e:
      (**(code **)((long)*ppplStack_c8 + lVar16))();
    }
    else {
      lVar16 = 0x28;
      if (ppplStack_c8 != (long ***)0x0) goto LAB_08c0ea2e;
    }
    puVar17 = (undefined4 *)func_0x0d856c70(puVar19,&uStack_228);
    plVar13 = plStack_1c8;
    plStack_1c8 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    if (ppplStack_1e8 == &pplStack_208) {
      lVar16 = 0x20;
LAB_08c0ea7a:
      (**(code **)((long)*ppplStack_1e8 + lVar16))();
    }
    else {
      lVar16 = 0x28;
      if (ppplStack_1e8 != (long ***)0x0) goto LAB_08c0ea7a;
    }
    lStack_1a8 = CONCAT71(lStack_1a8._1_7_,extraout_DL);
    uStack_120 = puVar17;
    if ((int)puVar17 != -1) {
      pplVar23 = (long **)(puVar19 + 0xe);
      uStack_134 = 0x521beef9;
      puVar27 = puVar19 + 0x1c;
      plVar13 = (long *)(*(long *)(puVar19 + 0x1c) +
                        (ulong)((int)((ulong)(*(long *)(puVar19 + 0x1e) - *(long *)(puVar19 + 0x1c))
                                     >> 3) - 1U & 0x521beef9) * 8);
      do {
        if (*plVar13 == -1) {
          plVar13 = *(long **)(puVar19 + 0x24);
          plVar15 = plVar13;
          goto LAB_08c0eb15;
        }
        lVar16 = *plVar13 * 0x20;
        plVar13 = (long *)(*(long *)(puVar19 + 0x22) + lVar16);
      } while (*(int *)(*(long *)(puVar19 + 0x22) + 8 + lVar16) != 0x521beef9);
      plVar15 = *(long **)(puVar19 + 0x24);
LAB_08c0eb15:
      puStack_110 = puVar17;
      if (plVar13 == plVar15) {
        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (plVar13 == (long *)0x0) {
LAB_08c0f86a:
          func_0x0eec74c0(0x80,0);
        }
        plVar13[1] = 0;
        plVar13[2] = 0;
        *plVar13 = (long)&UNK_0f157970;
        if (DAT_0f5f1c80 == '\0') {
LAB_08c0f89b:
          iVar12 = func_0x04108328(&DAT_0f5f1c80);
          if (iVar12 != 0) {
            func_0x08d750f0(0xf5f1c68);
            func_0x0410844d(&DAT_0f5f1c80);
          }
        }
        pplStack_e8 = (long **)(plVar13 + 3);
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[6] = 0;
        plVar13[7] = 0;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[10] = 0xf5f1c68;
        *(undefined1 *)(plVar13 + 0xb) = 1;
        plVar13[0xc] = 0xffffffff;
        plVar13[3] = (long)&UNK_0f1579c0;
        plVar13[0xd] = 0;
        plVar13[0xe] = 0;
        plVar13[0xf] = 0;
        plStack_e0 = plVar13;
        func_0x065bf170(puVar27,&uStack_134,&pplStack_e8);
        pplStack_218 = (long **)&UNK_065bf690;
        pplStack_210 = (long **)0x0;
        pplStack_208 = (long **)CONCAT35(pplStack_208._5_3_,0x3145ad657);
        uStack_228 = pplVar23;
        (*(code *)(*pplStack_e8)[5])(pplStack_e8,&uStack_228);
        if (pplStack_210 != (long **)0x0) {
          (*(code *)pplStack_210)(&uStack_228);
        }
        plVar13 = plStack_e0;
        pplVar23 = pplStack_e8;
        if (plStack_e0 != (long *)0x0) {
          LOCK();
          plVar15 = plStack_e0 + 1;
          lVar16 = *plVar15;
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (lVar16 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            FUN_0412c2d0(plVar13);
          }
        }
      }
      else {
        pplVar23 = (long **)plVar13[2];
      }
      auVar28 = func_0x0d8547a0(pplVar23,puStack_110,0,0);
      plStack_b0 = auVar28._0_8_;
      puVar18 = (undefined8 *)func_0x08d77120(pplVar23,auVar28._8_8_ + -1);
      if (((ulong)auStack_198 & 1) == 0) {
        pplStack_218 = pplStack_188;
        uStack_228 = (long **)auStack_198;
        _auStack_220 = ppplStack_190;
      }
      else {
        func_0x0412e5e0(&uStack_228,pplStack_188,ppplStack_190);
      }
      puVar27 = puStack_f8;
      iVar12 = iStack_178;
      plVar13 = plStack_180;
      uVar3 = (undefined4)uStack_108;
      uVar4 = uStack_108._4_4_;
      uVar8 = (undefined4)uStack_100;
      uVar10 = uStack_100._4_4_;
      uStack_108 = (undefined4 *)0x0;
      uStack_100 = (undefined4 *)0x0;
      puStack_f8 = (undefined4 *)0x0;
      uVar7 = (undefined1)uStack_168;
      plStack_180 = (long *)0x0;
      iStack_178 = 0;
      uVar5 = uStack_168 >> 8;
      uStack_168 = uStack_168 & 0xffffff00;
      puVar18[1] = uStack_228;
      puVar18[2] = _auStack_220;
      puVar18[3] = pplStack_218;
      puVar18[4] = plVar13;
      *(int *)(puVar18 + 5) = iVar12;
      puVar18[6] = puStack_170;
      *(undefined1 *)(puVar18 + 7) = uVar7;
      *(uint *)((long)puVar18 + 0x39) = CONCAT13((undefined1)uStack_164,(int3)uVar5);
      *(undefined4 *)((long)puVar18 + 0x3c) = uStack_164;
      puVar18[8] = plStack_60;
      *puVar18 = &UNK_0f159fc0;
      *(undefined4 *)(puVar18 + 9) = uVar3;
      *(undefined4 *)((long)puVar18 + 0x4c) = uVar4;
      *(undefined4 *)(puVar18 + 10) = uVar8;
      *(undefined4 *)((long)puVar18 + 0x54) = uVar10;
      puVar18[0xb] = puVar27;
      uStack_120 = puStack_110;
      puStack_170 = puVar24;
    }
    plStack_160 = *(long **)(puVar19 + 2);
    if (plStack_160 == (long *)0x0) {
      iStack_158 = 0;
    }
    else {
      iStack_158 = (int)plStack_160[1];
    }
    uStack_118 = CONCAT31(uStack_118._1_3_,(undefined1)lStack_1a8);
  }
  puStack_150 = uStack_120;
  uStack_148 = uStack_118;
  uStack_144 = uStack_114;
  uStack_143 = uStack_113;
  uStack_141 = uStack_111;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_118 = uStack_118 & 0xffffff00;
  cStack_140 = '\x01';
  uStack_120 = (undefined4 *)puVar24;
  func_0x08c10050(&pplStack_a8,&plStack_160);
  *(undefined1 *)ppplStack_1b0 = pplStack_a8._0_1_;
  if (ppplStack_1b0 == &pplStack_a8) {
    pcVar21 = (code *)CONCAT71(uStack_87,cStack_88);
  }
  else {
    ppplVar14 = ppplStack_1b0 + 1;
    if (ppplStack_1b0[4] != (long **)0x0) {
      (*(code *)ppplStack_1b0[4])(ppplVar14);
    }
    ppplVar6 = ppplStack_a0;
    if (cStack_7c != '\0') {
      if (cStack_7c == '\x02') {
        (*(code *)CONCAT44(uStack_8c,uStack_90))(5,&ppplStack_a0,ppplVar14);
      }
      else {
        ppplStack_a0 = (long ***)0x0;
        *ppplVar14 = (long **)ppplVar6;
      }
    }
    pcVar21 = (code *)CONCAT71(uStack_87,cStack_88);
    ppplStack_1b0[3] = (long **)CONCAT44(uStack_8c,uStack_90);
    ppplStack_1b0[4] = (long **)CONCAT71(uStack_87,cStack_88);
    *(undefined4 *)(ppplStack_1b0 + 5) = uStack_80;
    *(char *)((long)ppplStack_1b0 + 0x2c) = cStack_7c;
  }
  pplVar23 = pplStack_68;
  uVar3 = (undefined4)uStack_70;
  uVar4 = uStack_70._4_4_;
  uStack_70 = 0;
  *(undefined4 *)(ppplStack_1b0 + 6) = uStack_78;
  *(undefined4 *)((long)ppplStack_1b0 + 0x34) = uStack_74;
  *(undefined4 *)(ppplStack_1b0 + 7) = uVar3;
  *(undefined4 *)((long)ppplStack_1b0 + 0x3c) = uVar4;
  pplStack_68 = (long **)0x0;
  ppplStack_1b0[8] = pplVar23;
  if (pcVar21 != (code *)0x0) {
    (*pcVar21)(&ppplStack_a0);
  }
  if (((cStack_140 == '\x01') && (plStack_160 != (long *)0x0)) &&
     (*plStack_160 != 0 && (int)plStack_160[1] == iStack_158)) {
    func_0x0d8569b0(*plStack_160,puStack_150,uStack_148);
  }
  if ((plStack_180 != (long *)0x0) && (*plStack_180 != 0 && (int)plStack_180[1] == iStack_178)) {
    func_0x0d8569b0(*plStack_180,puStack_170,uStack_168);
  }
LAB_08c0f64c:
  if (lStack_58 != 0) {
    func_0x0412a280(lStack_58,lStack_48 << 3);
  }
  if (puStack_230 != (undefined4 *)0x0) {
    func_0x0412a280(puStack_230,(long)puStack_1a0 - (long)puStack_230);
  }
  puVar27 = uStack_108;
  puVar19 = uStack_100;
  if (uStack_108 != (undefined4 *)0x0) {
    for (; puVar27 != puVar19; puVar19 = puVar19 + -6) {
      if ((*(byte *)(puVar19 + -6) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar19 + -2),*(ulong *)(puVar19 + -6) & 0xfffffffffffffffe)
        ;
      }
    }
    uStack_100 = puVar27;
    func_0x0412a280(uStack_108,(long)puStack_f8 - (long)uStack_108);
  }
  if (((ulong)auStack_198 & 1) != 0) {
    func_0x0412a280(pplStack_188,(ulong)auStack_198 & 0xfffffffffffffffe);
  }
  return;
}


