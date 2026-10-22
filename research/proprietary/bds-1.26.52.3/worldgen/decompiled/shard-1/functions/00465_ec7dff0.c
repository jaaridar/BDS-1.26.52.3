/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xed7dff0 (ELF vaddr 0xec7dff0)
 * Label: caller-of-callee
 * Body:  [[0ed7dff0, 0ed7e4f9] [0ed7e500, 0ed7e767] [0ed7e770, 0ed7ea20] [0ed7ea30, 0ed7eb53] [0ed7eb60, 0ed7ec76] [0ed7ec80, 0ed7efc0] [0ed7efd0, 0ed7f2fd]]
 * Ghidra: FUN_0ed7dff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ed7dff0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,long *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined *puVar13;
  uint uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  code *pcStack_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  long *plStack_180;
  uint *puStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  uint uStack_a0;
  undefined *puStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_78;
  ulong uStack_68;
  long *plStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  
  uStack_50 = param_4;
  uVar8 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((uVar8 & 1) == 0) {
    uStack_e8 = 0x2100000121ec72;
    func_0x0ed5ffe0(*param_5,8,&uStack_e8);
    if ((uStack_e8 >> 0x37 & 1) == 0) {
      return;
    }
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_e8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_110 = (**(code **)(*param_2 + 0x98))(param_2);
  if ((uStack_110 >> 0x20 & 1) == 0) {
    uStack_110 = (**(code **)(*param_2 + 0xa8))(param_2);
  }
  else {
    uStack_110 = uStack_110 & 0xffffffff;
  }
  func_0x0ed6d600(&lStack_a8,*param_5);
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x048b1dc0(&uStack_1d8);
    uStack_d0 = uStack_1d8;
    uStack_c8 = uStack_1d0;
  }
  else {
    uStack_c8 = *(ulong *)(param_3 + 0x28);
    uStack_d0 = *(ulong *)(param_3 + 0x30);
    if (*(ulong *)(param_3 + 0x30) == 0) {
      (**(code **)(param_3 + 0x38))(0,param_3,0);
      uStack_d0 = *(ulong *)(param_3 + 0x30);
    }
  }
  if ((long *)param_5[2] != (long *)0x0) {
    lVar9 = (**(code **)(*(long *)param_5[2] + 0x38))();
    if ((DAT_0f775628 == '\0') && (iVar7 = func_0x04108328(&DAT_0f775628), iVar7 != 0)) {
      func_0x0edc6490();
      func_0x0410844d(&DAT_0f775628);
    }
    if (*(int *)(lVar9 + 4) == _DAT_0f775614) {
      plVar4 = (long *)param_5[2];
      uVar10 = (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar8 = uStack_110;
      if (uVar10 < uStack_110) {
        lVar9 = *param_5;
        uVar11 = (**(code **)(*plVar4 + 0x10))(plVar4);
        func_0x041348b0(&uStack_158,uVar11);
        puStack_98 = (undefined *)((long)&uStack_158 + 1);
        pcStack_90 = (char *)((ulong)uStack_158 >> 1 & 0x7f);
        if (((ulong)uStack_158 & 1) != 0) {
          pcStack_90 = (char *)uStack_150;
          puStack_98 = puStack_148;
        }
        func_0x0470d9a0(&uStack_1d8,&UNK_011d023c,0x33,0xd,&puStack_98);
        uVar8 = uStack_1d8 >> 1 & 0x7f;
        puVar15 = (undefined *)((long)&uStack_1d8 + 1);
        if ((uStack_1d8 & 1) != 0) {
          uVar8 = uStack_1d0;
          puVar15 = puStack_1c8;
        }
        if (puVar15 == (undefined *)0x0) {
          uStack_d8 = (ulong)((uint)uVar8 & 0x7f) << 0x30;
        }
        else {
          lVar18 = uVar8 + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
          if (lVar18 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar18,8);
          }
          *puVar12 = uVar8;
          memcpy(puVar12 + 1,puVar15,uVar8);
          *(undefined1 *)((long)puVar12 + uVar8 + 8) = 0;
          uStack_d8 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(lVar9,0x40,&uStack_d8);
        if ((uStack_d8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
        }
      }
      else {
        uVar10 = (**(code **)(*plVar4 + 0x18))(plVar4);
        if (uVar10 <= uVar8) goto LAB_0ed7e3b7;
        lVar9 = *param_5;
        uVar11 = (**(code **)(*plVar4 + 0x18))(plVar4);
        func_0x041348b0(&uStack_158,uVar11);
        puStack_98 = (undefined *)((long)&uStack_158 + 1);
        pcStack_90 = (char *)((ulong)uStack_158 >> 1 & 0x7f);
        if (((ulong)uStack_158 & 1) != 0) {
          pcStack_90 = (char *)uStack_150;
          puStack_98 = puStack_148;
        }
        func_0x0470d9a0(&uStack_1d8,&UNK_012ba02e,0x2e,0xd,&puStack_98);
        uVar8 = uStack_1d8 >> 1 & 0x7f;
        puVar15 = (undefined *)((long)&uStack_1d8 + 1);
        if ((uStack_1d8 & 1) != 0) {
          uVar8 = uStack_1d0;
          puVar15 = puStack_1c8;
        }
        if (puVar15 == (undefined *)0x0) {
          uStack_e0 = (ulong)((uint)uVar8 & 0x7f) << 0x30;
        }
        else {
          lVar18 = uVar8 + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
          if (lVar18 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar18,8);
          }
          *puVar12 = uVar8;
          memcpy(puVar12 + 1,puVar15,uVar8);
          *(undefined1 *)((long)puVar12 + uVar8 + 8) = 0;
          uStack_e0 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(lVar9,0x40,&uStack_e0);
        if ((uStack_e0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_e0 & 0xff00ffffffffffff) - 8);
        }
      }
      if ((uStack_1d8 & 1) != 0) {
        func_0x0412a280(puStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_158 & 1) == 0) {
        return;
      }
      func_0x0412a280(puStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
      return;
    }
  }
LAB_0ed7e3b7:
  if (uStack_110 != 0) {
    plStack_60 = param_5 + 3;
    uStack_68 = 0x30000001444015;
    uStack_c0 = 0x47000001239082;
    uStack_40 = 0;
    plStack_180 = param_5;
    plStack_f0 = param_2;
    lStack_48 = param_3;
    do {
      if ((*(uint *)(lStack_a8 + 0x2b0) != 0xffffffff) &&
         (uStack_a0 <= *(uint *)(lStack_a8 + 0x2b0))) {
        return;
      }
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      puStack_1e8 = (undefined *)0x0;
      auStack_198._0_8_ = 0;
      auStack_198._8_8_ = 0;
      func_0x048b0d20(auStack_198);
      uVar8 = (**(code **)(*param_2 + 0x98))(param_2);
      if ((uVar8 & 0x100000000) == 0) {
        uVar11 = (**(code **)(*param_2 + 0xc0))(param_2);
        FUN_0412f5e0(&uStack_1f8,uVar11);
        uVar10 = uStack_1f8 >> 1 & 0x7f;
        puVar15 = (undefined *)((long)&uStack_1f8 + 1);
        if ((uStack_1f8 & 1) != 0) {
          uVar10 = uStack_1f0;
          puVar15 = puStack_1e8;
        }
        if (uVar10 == 0) {
          uVar8 = 0x811c9dc5;
        }
        else {
          if (uVar10 < 4) {
            uVar8 = 0x811c9dc5;
            uVar16 = 0;
          }
          else {
            uVar8 = 0x811c9dc5;
            uVar16 = 0;
            do {
              uVar8 = (ulong)(((int)(char)puVar15[uVar16 + 3] ^
                              ((int)(char)puVar15[uVar16 + 2] ^
                              ((int)(char)puVar15[uVar16 + 1] ^
                              ((int)(char)puVar15[uVar16] ^ (uint)uVar8) * 0x1000193) * 0x1000193) *
                              0x1000193) * 0x1000193);
              uVar16 = uVar16 + 4;
            } while ((uVar10 & 0xfffffffffffffffc) != uVar16);
          }
          if ((uVar10 & 3) != 0) {
            uVar17 = 0;
            do {
              uVar8 = (ulong)(((int)(char)puVar15[uVar17 + uVar16] ^ (uint)uVar8) * 0x1000193);
              uVar17 = uVar17 + 1;
            } while (((uint)uVar10 & 3) != uVar17);
          }
        }
        auStack_198 = func_0x0ed7f580(&uStack_d0,uVar8,*(undefined1 *)param_5[1]);
        if ((auStack_198._0_8_ == 0) || ((*(byte *)(auStack_198._0_8_ + 0x12) & 0x20) != 0)) {
          puVar15 = puStack_1e8;
          uVar10 = uStack_1f0;
          if ((uStack_1f8 & 1) == 0) {
            puVar15 = (undefined *)((long)&uStack_1f8 + 1);
            uVar10 = uStack_1f8 >> 1 & 0x7f;
          }
          func_0x0ed7f760(&uStack_1d8,&uStack_d0,&uStack_d0,puVar15,uVar10,*(undefined1 *)param_5[1]
                         );
          auStack_198._8_8_ = puStack_1c8;
          auStack_198._0_8_ = uStack_1d0;
        }
      }
      else {
        auStack_198 = func_0x0ed7f580(&uStack_d0,uVar8 & 0xffffffff,*(undefined1 *)param_5[1]);
        lVar9 = auStack_198._0_8_;
        if (lVar9 != 0) {
          if ((*(byte *)(lVar9 + 0x12) & 0x20) == 0) {
            lVar9 = *(long *)(lVar9 + 0x58);
            puVar12 = (ulong *)(lVar9 + 0x28);
            if (&uStack_1f8 != puVar12) {
              bVar1 = *(byte *)puVar12;
              if ((uStack_1f8 & 1) == 0) {
                if ((bVar1 & 1) == 0) {
                  puStack_1e8 = *(undefined **)(lVar9 + 0x38);
                  uStack_1f8 = *puVar12;
                  uStack_1f0 = *(ulong *)(lVar9 + 0x30);
                }
                else {
                  func_0x04885070(&uStack_1f8,*(undefined8 *)(lVar9 + 0x38),
                                  *(undefined8 *)(lVar9 + 0x30));
                }
              }
              else {
                bVar21 = (bVar1 & 1) != 0;
                lVar18 = lVar9 + 0x29;
                if (bVar21) {
                  lVar18 = *(long *)(lVar9 + 0x38);
                }
                uVar10 = (ulong)(bVar1 >> 1);
                if (bVar21) {
                  uVar10 = *(ulong *)(lVar9 + 0x30);
                }
                func_0x04885120(&uStack_1f8,lVar18,uVar10);
              }
            }
          }
          else {
            (**(code **)(*param_2 + 0xa0))(&uStack_1d8,param_2,0x80);
            if ((char)pcStack_1c0 == '\x01') {
              if ((uStack_1f8 & 1) == 0) {
                if ((uStack_1d8 & 1) == 0) {
                  puStack_1e8 = puStack_1c8;
                  uStack_1f8 = uStack_1d8;
                  uStack_1f0 = uStack_1d0;
                }
                else {
                  func_0x04885070(&uStack_1f8,puStack_1c8,uStack_1d0);
                }
              }
              else {
                uVar10 = uStack_1d8 >> 1 & 0x7f;
                puVar15 = (undefined *)((long)&uStack_1d8 + 1);
                if ((uStack_1d8 & 1) != 0) {
                  uVar10 = uStack_1d0;
                  puVar15 = puStack_1c8;
                }
                func_0x04885120(&uStack_1f8,puVar15,uVar10);
              }
            }
            if (((char)pcStack_1c0 == '\x01') && ((uStack_1d8 & 1) != 0)) {
              func_0x0412a280(puStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
            }
          }
        }
      }
      puStack_178 = (uint *)*param_5;
      puVar15 = puStack_1e8;
      uVar10 = uStack_1f0;
      if ((uStack_1f8 & 1) == 0) {
        puVar15 = (undefined *)((long)&uStack_1f8 + 1);
        uVar10 = uStack_1f8 >> 1 & 0x7f;
      }
      uStack_160 = 0;
      if (puVar15 == (undefined *)0x0) {
        uStack_160 = (uVar10 & 0x7f) << 0x30;
      }
      else {
        lVar9 = uVar10 + 9;
        puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
        if (lVar9 != 0 && puVar12 == (ulong *)0x0) {
          func_0x0eec74c0(lVar9,8);
        }
        *puVar12 = uVar10;
        memcpy(puVar12 + 1,puVar15,uVar10);
        *(undefined1 *)((long)puVar12 + uVar10 + 8) = 0;
        uStack_160 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      puVar19 = puStack_178;
      func_0x0ed6d180(puStack_178,&uStack_160,uVar8 & 0xffffffff | 0x100000000);
      lVar9 = lStack_48;
      param_5 = plStack_180;
      if ((uStack_160 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_160 & 0xff00ffffffffffff) - 8);
      }
      uStack_160 = 0;
      if (auStack_198._0_8_ == 0) {
        uStack_58 = uStack_d0;
        uVar8 = uStack_d0;
        if (uStack_d0 == 0) {
          uVar8 = FUN_048aead0(uStack_c8);
        }
        puVar20 = *(undefined8 **)(*(long *)(uVar8 + 0x68) + 0x70);
        puStack_38 = *(undefined8 **)(*(long *)(uVar8 + 0x68) + 0x78);
        if (puVar20 != puStack_38) {
          uStack_b0 = uStack_1f8 >> 1 & 0x7f;
          puStack_b8 = (undefined *)((long)&uStack_1f8 + 1);
          if ((uStack_1f8 & 1) != 0) {
            uStack_b0 = uStack_1f0;
            puStack_b8 = puStack_1e8;
          }
          puVar15 = puStack_b8 + uStack_b0;
          do {
            lVar9 = puVar20[1];
            if (lVar9 == 0) {
LAB_0ed7ecec:
              uVar8 = uStack_c8;
              uVar2 = *(undefined4 *)(puVar20 + 10);
              uVar10 = uStack_58;
              if (uStack_58 == 0) {
                uVar10 = FUN_048aead0(uStack_c8);
              }
              param_2 = plStack_f0;
              uVar10 = func_0x048b0c90(uVar8,uVar10,uVar2,1);
              param_5 = plStack_180;
              if (uVar10 == 0) {
                uStack_1d8 = 0;
                uStack_1d0 = 0;
                func_0x048b0d20(&uStack_1d8);
                uVar10 = uStack_1d8;
                uVar8 = uStack_1d0;
              }
              auStack_198._8_8_ = uVar8;
              auStack_198._0_8_ = uVar10;
              lVar9 = *param_5;
              uVar8 = uStack_f8;
              uStack_f8 = uStack_c0;
              goto joined_r0x0ed7ed5f;
            }
            if (lVar9 <= (long)uStack_b0) {
              pcVar5 = (char *)*puVar20;
              cVar6 = *pcVar5;
              uVar8 = uStack_b0;
              puVar13 = puStack_b8;
              do {
                if (uVar8 - lVar9 == -1) break;
                puVar13 = (undefined *)func_0x0eee2ef0(puVar13,(int)cVar6);
                if (puVar13 == (undefined *)0x0) break;
                iVar7 = func_0x0eee3000(puVar13,pcVar5,lVar9);
                if (iVar7 == 0) {
                  if (puVar13 == puStack_b8 && puVar13 != puVar15) goto LAB_0ed7ecec;
                  break;
                }
                puVar13 = puVar13 + 1;
                uVar8 = (long)puVar15 - (long)puVar13;
              } while (lVar9 <= (long)uVar8);
            }
            puVar20 = puVar20 + 0xb;
          } while (puVar20 != puStack_38);
        }
        lVar9 = *plStack_180;
        param_5 = plStack_180;
        uVar8 = uStack_f8;
        param_2 = plStack_f0;
        uStack_f8 = uStack_c0;
joined_r0x0ed7ed5f:
        uStack_c0 = uStack_f8;
        if (auStack_198._0_8_ == 0) {
          func_0x0ed5ffe0(lVar9,0x400,&uStack_f8);
          puVar19 = puStack_178;
          if ((uStack_f8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_f8 & 0xff00ffffffffffff) - 8);
          }
          uStack_f8 = 0;
        }
        else {
          lVar18 = *(long *)(auStack_198._0_8_ + 0x58);
          bVar21 = (*(byte *)(lVar18 + 0x10) & 1) != 0;
          uStack_158 = (undefined *)(lVar18 + 0x11);
          if (bVar21) {
            uStack_158 = *(undefined **)(lVar18 + 0x20);
          }
          uStack_150 = (ulong)(*(byte *)(lVar18 + 0x10) >> 1);
          if (bVar21) {
            uStack_150 = *(ulong *)(lVar18 + 0x18);
          }
          uStack_f8 = uVar8;
          func_0x0470d9a0(&uStack_1d8,&UNK_01287a97,0x51,0xd,&uStack_158);
          puVar15 = puStack_1c8;
          uVar8 = uStack_1d0;
          if ((uStack_1d8 & 1) == 0) {
            puVar15 = (undefined *)((long)&uStack_1d8 + 1);
            uVar8 = uStack_1d8 >> 1 & 0x7f;
          }
          uStack_168 = 0;
          if (puVar15 == (undefined *)0x0) {
            uStack_168 = (uVar8 & 0x7f) << 0x30;
          }
          else {
            lVar18 = uVar8 + 9;
            puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
            if (lVar18 != 0 && puVar12 == (ulong *)0x0) {
              func_0x0eec74c0(lVar18,8);
            }
            *puVar12 = uVar8;
            memcpy(puVar12 + 1,puVar15,uVar8);
            *(undefined1 *)((long)puVar12 + uVar8 + 8) = 0;
            uStack_168 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          func_0x0ed5ffe0(lVar9,0x400,&uStack_168);
          puVar19 = puStack_178;
          param_5 = plStack_180;
          if ((uStack_168 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_168 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_168 = 0;
joined_r0x0ed7ef60:
          if ((uStack_1d8 & 1) != 0) {
            func_0x0412a280(puStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
          }
        }
      }
      else {
        puVar20 = *(undefined8 **)(auStack_198._0_8_ + 0x58);
        puVar15 = (undefined *)*param_5;
        if ((puVar15[0x2aa] & *(byte *)((long)puVar20 + 0xa9)) == 0) {
          uStack_100 = uStack_c0;
          func_0x0ed5ffe0(puVar15,0x400,&uStack_100);
          if ((uStack_100 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_100 = 0;
        }
        else {
          if ((*(char *)((long)puVar20 + 0xb4) == '\x01') && (*(char *)param_5[1] == '\0')) {
            uStack_158 = puStack_1e8;
            uStack_150 = uStack_1f0;
            if ((uStack_1f8 & 1) == 0) {
              uStack_158 = (undefined *)((long)&uStack_1f8 + 1);
              uStack_150 = uStack_1f8 >> 1 & 0x7f;
            }
            func_0x0470d9a0(&uStack_1d8,&UNK_012ba05d,0x19,0xd,&uStack_158);
            puVar13 = puStack_1c8;
            uVar8 = uStack_1d0;
            if ((uStack_1d8 & 1) == 0) {
              puVar13 = (undefined *)((long)&uStack_1d8 + 1);
              uVar8 = uStack_1d8 >> 1 & 0x7f;
            }
            uStack_170 = 0;
            if (puVar13 == (undefined *)0x0) {
              uStack_170 = (uVar8 & 0x7f) << 0x30;
            }
            else {
              lVar9 = uVar8 + 9;
              puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
              if (lVar9 != 0 && puVar12 == (ulong *)0x0) {
                func_0x0eec74c0(lVar9,8);
              }
              *puVar12 = uVar8;
              memcpy(puVar12 + 1,puVar13,uVar8);
              *(undefined1 *)((long)puVar12 + uVar8 + 8) = 0;
              uStack_170 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
            }
            func_0x0ed5ffe0(puVar15,0x200,&uStack_170);
            puVar19 = puStack_178;
            param_5 = plStack_180;
            if ((uStack_170 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_170 & 0xff00ffffffffffff) - 8);
            }
            uStack_170 = 0;
            goto joined_r0x0ed7ef60;
          }
          uStack_1b0 = *(undefined8 *)(lVar9 + 0x28);
          puStack_1c8 = &UNK_0488e0b0;
          uStack_1b8 = 0x48b5725f;
          pcStack_1c0 = (code *)0x0;
          uStack_1b4 = 0;
          uStack_1d8 = 0;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          uStack_88 = puVar20[1];
          uStack_80 = (undefined4)*plStack_60;
          uStack_7c = *(undefined1 *)((long)plStack_60 + 4);
          uStack_78 = 1;
          puStack_98 = puVar15;
          pcStack_90 = (char *)param_5[1];
          func_0x0ed75bc0(*puVar20,param_2,&uStack_1d8,uStack_50,&puStack_98);
          if ((*(uint *)(lStack_a8 + 0x2b0) == 0xffffffff) ||
             (*(uint *)(lStack_a8 + 0x2b0) < uStack_a0)) {
            uStack_130 = *(undefined8 *)(lVar9 + 0x28);
            uStack_158 = (undefined *)*param_5;
            puStack_148 = &UNK_07d98e10;
            uStack_138 = 0x685ff748;
            pcStack_140 = (code *)0x0;
            uStack_134 = 4;
            uStack_128 = 0;
            puStack_120 = &UNK_07d98df0;
            cVar6 = func_0x0d6b4100(auStack_198,lVar9,&uStack_1d8,&uStack_158);
            if (pcStack_140 != (code *)0x0) {
              (*pcStack_140)(&uStack_158);
            }
            if (cVar6 == '\0') {
              uStack_108 = uStack_68;
              func_0x0ed5ffe0(*param_5,8,&uStack_108);
              if ((uStack_108 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
              }
              uStack_108 = 0;
            }
          }
          if (pcStack_1c0 != (code *)0x0) {
            (*pcStack_1c0)(&uStack_1d8);
          }
        }
      }
      lVar9 = *(long *)(puVar19 + 2);
      uVar3 = *(uint *)(lVar9 + 0x1c + (ulong)*puVar19 * 0x20);
      *puVar19 = uVar3;
      if (puVar19[0x48] == 0) {
        uVar14 = puVar19[4];
LAB_0ed7efd4:
        lVar18 = lVar9 + (ulong)uVar14 * 0x20;
        uVar8 = (ulong)*(uint *)(lVar9 + -0x10 + (ulong)uVar14 * 0x20);
        if (uVar8 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar8 * 8))(&uStack_1d8,lVar18 + -0x18);
          uVar14 = puVar19[4];
        }
        *(undefined4 *)(lVar18 + -0x10) = 0xffffffff;
        puVar19[4] = uVar14 - 1;
      }
      else if ((*(uint *)(*(long *)(puVar19 + 0x46) + 0x18 + (ulong)(puVar19[0x48] - 1) * 0x30) !=
                uVar3) && (uVar14 = puVar19[4], uVar3 == uVar14 - 1)) goto LAB_0ed7efd4;
      if ((uStack_1f8 & 1) != 0) {
        func_0x0412a280(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
      }
      (**(code **)(*param_2 + 0xd0))(param_2);
      uStack_40 = uStack_40 + 1;
    } while (uStack_40 != uStack_110);
  }
  return;
}


