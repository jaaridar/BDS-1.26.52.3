/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6e80350 (ELF vaddr 0x6d80350)
 * Label: caller-of-callee
 * Body:  [[06e80350, 06e8049b] [06e804a0, 06e805ca] [06e805d0, 06e80806] [06e80810, 06e80845] [06e80850, 06e808bd] [06e808c0, 06e808d9] [06e808e0, 06e809aa] [06e809b0, 06e809c3] [06e809d0, 06e80c48] [06e80c50, 06e80e1d] [06e80eac, 06e80ede]]
 * Ghidra: FUN_06e80350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06e80350(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  bool bVar18;
  float fVar19;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  long *plStack_1b8;
  ulong uStack_1b0;
  float fStack_1a8;
  char cStack_1a0;
  undefined8 uStack_198;
  undefined2 uStack_190;
  long *plStack_188;
  long *plStack_180;
  ulong *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 *puStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  uint uStack_40;
  
  puStack_1d0 = &UNK_0f096708;
  uStack_1c8 = uStack_1c8 & 0xffffffffffffff00;
  cStack_1a0 = '\0';
  uStack_198 = 0x100000000;
  uStack_190 = 0;
  puStack_148 = param_2;
  func_0x0bf0b810(param_1,&uStack_198,&UNK_011a1060,&UNK_013c28d2);
  func_0x0bf0b680(param_1,&uStack_190,&UNK_0144b33e,(undefined1)uStack_190);
  func_0x0bf0b680(param_1,(long)&uStack_190 + 1,&UNK_0120bb18,uStack_190._1_1_);
  uVar8 = func_0x048648e0(param_1,&UNK_013fcdde);
  uVar6 = func_0x04863e00(uVar8,1);
  uStack_198 = CONCAT44(uVar6,(undefined4)uStack_198);
  uVar8 = func_0x04864680(param_1,&UNK_01394e8c);
  cVar5 = func_0x04864260(uVar8);
  if ((cVar5 == '\0') && (cVar5 = func_0x04864290(uVar8), cVar5 != '\0')) {
    if (cStack_1a0 == '\x01') {
      func_0x06ef7b20(&uStack_1c8);
    }
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    fStack_1a8 = 1.0;
    cStack_1a0 = '\x01';
    func_0x04865630(auStack_158,uVar8);
    func_0x048656b0(auStack_168,uVar8);
LAB_06e804b5:
    cVar5 = func_0x04862c80(auStack_158,auStack_168);
    if (cVar5 == '\0') {
      uStack_130 = uStack_130 & 0xffffffff00000000;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      puStack_138 = &UNK_0f299f40;
      uVar8 = func_0x04862b80(auStack_158);
      cVar5 = func_0x0b05abc0(&puStack_138,&uStack_f8,uVar8);
      if (cVar5 != '\0') {
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0x3f800000;
        uStack_40 = 2;
        func_0x0b031f70(&uStack_f8,&puStack_138);
        uVar8 = func_0x04862ca0(auStack_158);
        plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe8);
        if (plVar9 == (long *)0x0) {
          func_0x0eec74c0(0xe8,0);
        }
        puStack_178 = &uStack_1c8;
        uStack_170 = 0;
        *plVar9 = 0;
        plVar9[1] = 0;
        plStack_180 = plVar9;
        uVar10 = func_0x0eee2e90(uVar8);
        if (0xfffffffffffffff7 < uVar10) {
          uVar8 = FUN_04882e30();
          uVar8 = func_0x04882e20(uVar8);
          func_0x04862b40(auStack_158);
          puStack_1d0 = &UNK_0f096708;
          if (cStack_1a0 == '\x01') {
            func_0x06ef7b20(&uStack_1c8);
          }
          func_0x0eee2d70(uVar8);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar10 < 0x17) {
          *(char *)(plVar9 + 2) = (char)uVar10 * '\x02';
          lVar11 = (long)plVar9 + 0x11;
          if (uVar10 != 0) goto LAB_06e8061d;
        }
        else {
          uVar12 = (uVar10 | 7) + 1;
          if ((uVar10 | 7) == 0x17) {
            uVar12 = 0x1a;
          }
          lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
          if (lVar11 == 0) {
            func_0x0eec74c0(uVar12,0);
          }
          plVar9[4] = lVar11;
          plVar9[2] = uVar12 | 1;
          plVar9[3] = uVar10;
LAB_06e8061d:
          func_0x0eee2ee0(lVar11,uVar8,uVar10);
        }
        uVar4 = uStack_40;
        *(undefined1 *)(lVar11 + uVar10) = 0;
        *(undefined1 *)(plVar9 + 5) = 0;
        *(undefined4 *)(plVar9 + 0x1c) = 0xffffffff;
        if ((ulong)uStack_40 != 0xffffffff) {
          plStack_188 = plVar9 + 5;
          (**(code **)(&UNK_0f096608 + (ulong)uStack_40 * 8))(&plStack_188,&uStack_f8);
          *(uint *)(plVar9 + 0x1c) = uVar4;
        }
        uStack_170 = CONCAT71(uStack_170._1_7_,1);
        bVar18 = (*(byte *)(plVar9 + 2) & 1) != 0;
        lVar11 = (long)plVar9 + 0x11;
        if (bVar18) {
          lVar11 = plVar9[4];
        }
        uVar10 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
        if (bVar18) {
          uVar10 = plVar9[3];
        }
        lVar11 = func_0x04883620(&plStack_188,lVar11,uVar10);
        plVar3 = plStack_180;
        plVar9[1] = lVar11;
        lVar11 = (long)plStack_180 + 0x11;
        bVar18 = (*(byte *)(plStack_180 + 2) & 1) == 0;
        lVar17 = plStack_180[4];
        if (bVar18) {
          lVar17 = lVar11;
        }
        uVar10 = (ulong)(*(byte *)(plStack_180 + 2) >> 1);
        if (!bVar18) {
          uVar10 = plStack_180[3];
        }
        uVar12 = func_0x04883620(&plStack_188,lVar17,uVar10);
        uVar10 = uStack_1c0;
        plVar3[1] = uVar12;
        if (uStack_1c0 != 0) {
          uVar14 = uStack_1c0 - (uStack_1c0 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
          uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar14 >> 0x38 < 2) {
            uVar15 = uStack_1c0 - 1 & uVar12;
            plVar9 = *(long **)(uStack_1c8 + uVar15 * 8);
          }
          else if (uVar12 < uStack_1c0) {
            plVar9 = *(long **)(uStack_1c8 + uVar12 * 8);
            uVar15 = uVar12;
          }
          else if ((uVar12 | uStack_1c0) >> 0x20 == 0) {
            uVar15 = (uVar12 & 0xffffffff) % (uStack_1c0 & 0xffffffff);
            plVar9 = *(long **)(uStack_1c8 + uVar15 * 8);
          }
          else {
            plVar9 = *(long **)(uStack_1c8 + (uVar12 % uStack_1c0) * 8);
            uVar15 = uVar12 % uStack_1c0;
          }
          if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
            if ((*(byte *)(plVar3 + 2) & 1) == 0) {
              uVar16 = (ulong)(*(byte *)(plVar3 + 2) >> 1);
            }
            else {
              uVar16 = plVar3[3];
              lVar11 = plVar3[4];
            }
            if ((byte)(uVar14 >> 0x38) < 2) {
              uVar14 = uStack_1c0 - 1;
              uStack_140 = uVar14;
              do {
                if (plVar9[1] == uVar12) {
                  bVar1 = *(byte *)(plVar9 + 2);
                  if ((bVar1 & 1) == 0) {
                    uVar13 = (ulong)(bVar1 >> 1);
                  }
                  else {
                    uVar13 = plVar9[3];
                  }
                  if (uVar13 == uVar16) {
                    if ((bVar1 & 1) == 0) {
                      lVar17 = (long)plVar9 + 0x11;
                    }
                    else {
                      lVar17 = plVar9[4];
                    }
                    iVar7 = func_0x0eee3000(lVar17,lVar11,uVar16);
                    uVar14 = uStack_140;
                    if (iVar7 == 0) goto LAB_06e80906;
                  }
                }
                else if ((plVar9[1] & uVar14) != uVar15) break;
                plVar9 = (long *)*plVar9;
              } while (plVar9 != (long *)0x0);
            }
            else {
              do {
                uVar14 = plVar9[1];
                if (uVar14 == uVar12) {
                  bVar1 = *(byte *)(plVar9 + 2);
                  if ((bVar1 & 1) == 0) {
                    uVar14 = (ulong)(bVar1 >> 1);
                  }
                  else {
                    uVar14 = plVar9[3];
                  }
                  if (uVar14 == uVar16) {
                    if ((bVar1 & 1) == 0) {
                      lVar17 = (long)plVar9 + 0x11;
                    }
                    else {
                      lVar17 = plVar9[4];
                    }
                    iVar7 = func_0x0eee3000(lVar17,lVar11,uVar16);
                    if (iVar7 == 0) goto LAB_06e80906;
                  }
                }
                else {
                  if (uVar10 <= uVar14) {
                    if ((uVar14 | uVar10) >> 0x20 == 0) {
                      uVar14 = (uVar14 & 0xffffffff) % (uVar10 & 0xffffffff);
                    }
                    else {
                      uVar14 = uVar14 % uVar10;
                    }
                  }
                  if (uVar14 != uVar15) break;
                }
                plVar9 = (long *)*plVar9;
              } while (plVar9 != (long *)0x0);
            }
          }
        }
        if ((uVar10 != 0) && ((float)(uStack_1b0 + 1) <= (float)uVar10 * fStack_1a8))
        goto LAB_06e80bc0;
        uVar12 = 1;
        if (2 < uVar10) {
          uVar12 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar12 = uVar10 * 2 | uVar12;
        fVar19 = (float)func_0x0eee3ab0((float)(uStack_1b0 + 1) / fStack_1a8);
        uVar14 = (long)(fVar19 - _DAT_01198778) & (long)fVar19 >> 0x3f | (long)fVar19;
        if (uVar14 < uVar12) {
          uVar14 = uVar12;
        }
        uVar12 = 2;
        if ((uVar14 == 1) || (uVar12 = uVar14, (uVar14 & uVar14 - 1) == 0)) {
          bVar18 = uVar12 < uVar10;
          if (uVar12 <= uVar10) goto LAB_06e80ac7;
LAB_06e80aa3:
          func_0x06fe3760(&uStack_1c8,uVar12);
        }
        else {
          uVar12 = func_0x0412c3f0();
          bVar18 = uVar12 < uStack_1c0;
          uVar10 = uStack_1c0;
          if (uStack_1c0 < uVar12) goto LAB_06e80aa3;
LAB_06e80ac7:
          if (bVar18) {
            fVar19 = (float)func_0x0eee3ab0((float)uStack_1b0 / fStack_1a8);
            uVar14 = (long)(fVar19 - _DAT_01198778) & (long)fVar19 >> 0x3f | (long)fVar19;
            if ((uVar10 < 3) ||
               (uVar15 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
               uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
               1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar14 = func_0x0412c3f0(uVar14);
            }
            else if (1 < uVar14) {
              lVar11 = 0x3f;
              if (uVar14 - 1 != 0) {
                for (; uVar14 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              uVar14 = 1L << (-((byte)lVar11 ^ 0x3f) & 0x3f);
            }
            if (uVar12 <= uVar14) {
              uVar12 = uVar14;
            }
            if (uVar12 < uVar10) goto LAB_06e80aa3;
          }
        }
LAB_06e80bc0:
        uVar10 = plVar3[1];
        uVar12 = uStack_1c0 - (uStack_1c0 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
        uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar12 >> 0x38 < 2) {
          uVar10 = uVar10 & uStack_1c0 - 1;
          plVar9 = *(long **)(uStack_1c8 + uVar10 * 8);
          if (plVar9 != (long *)0x0) goto LAB_06e80c7e;
LAB_06e80cd5:
          *plVar3 = (long)plStack_1b8;
          *(long ***)(uStack_1c8 + uVar10 * 8) = &plStack_1b8;
          plStack_1b8 = plVar3;
          if (*plVar3 == 0) goto LAB_06e80c8b;
          uVar10 = *(ulong *)(*plVar3 + 8);
          if ((byte)(uVar12 >> 0x38) < 2) {
            uVar10 = uVar10 & uStack_1c0 - 1;
          }
          else if (uStack_1c0 <= uVar10) {
            if ((uVar10 | uStack_1c0) >> 0x20 == 0) {
              uVar10 = (uVar10 & 0xffffffff) % (uStack_1c0 & 0xffffffff);
            }
            else {
              uVar10 = uVar10 % uStack_1c0;
            }
          }
          *(long **)(uStack_1c8 + uVar10 * 8) = plVar3;
          uStack_1b0 = uStack_1b0 + 1;
          plStack_1b8 = plVar3;
        }
        else {
          if (uVar10 < uStack_1c0) {
LAB_06e80c70:
            plVar9 = *(long **)(uStack_1c8 + uVar10 * 8);
          }
          else {
            if ((uVar10 | uStack_1c0) >> 0x20 != 0) {
              uVar10 = uVar10 % uStack_1c0;
              goto LAB_06e80c70;
            }
            uVar10 = (uVar10 & 0xffffffff) % (uStack_1c0 & 0xffffffff);
            plVar9 = *(long **)(uStack_1c8 + uVar10 * 8);
          }
          if (plVar9 == (long *)0x0) goto LAB_06e80cd5;
LAB_06e80c7e:
          *plVar3 = *plVar9;
          *plVar9 = (long)plVar3;
LAB_06e80c8b:
          uStack_1b0 = uStack_1b0 + 1;
        }
        goto joined_r0x06e80c9f;
      }
      goto LAB_06e804a0;
    }
    func_0x04862b40(auStack_168);
    func_0x04862b40(auStack_158);
  }
  puStack_138 = &UNK_012c1367;
  uStack_130 = 0xf;
  func_0x06fe3940(&uStack_f8,puStack_148,*puStack_148,puStack_148[3],puStack_148[1],puStack_148[4],
                  &puStack_138,&puStack_1d0);
  puStack_1d0 = &UNK_0f096708;
  if (cStack_1a0 == '\x01') {
    func_0x06ef7b20(&uStack_1c8);
  }
  return;
LAB_06e80906:
  plVar9 = plStack_180;
  plStack_180 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    if ((char)uStack_170 == '\x01') {
      if ((ulong)*(uint *)(plVar9 + 0x1c) != 0xffffffff) {
        (**(code **)(&UNK_0f0965f0 + (ulong)*(uint *)(plVar9 + 0x1c) * 8))(&plStack_188,plVar9 + 5);
      }
      *(undefined4 *)(plVar9 + 0x1c) = 0xffffffff;
      if ((*(byte *)(plVar9 + 2) & 1) != 0) {
        func_0x0412a280(plVar9[4],plVar9[2] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(plVar9,0xe8);
  }
joined_r0x06e80c9f:
  if ((ulong)uStack_40 != 0xffffffff) {
    (**(code **)(&UNK_0f0965f0 + (ulong)uStack_40 * 8))(&plStack_180,&uStack_f8);
  }
LAB_06e804a0:
  func_0x049d2400(&puStack_138);
  func_0x04862ba0(auStack_158);
  goto LAB_06e804b5;
}


