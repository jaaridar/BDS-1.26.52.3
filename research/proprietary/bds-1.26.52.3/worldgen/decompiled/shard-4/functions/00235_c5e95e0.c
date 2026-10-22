/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e95e0 (ELF vaddr 0xc5e95e0)
 * Label: callee-of:0x49bead0
 * Body:  [[0c6e95e0, 0c6e961d] [0c6e9620, 0c6e974d] [0c6e9750, 0c6e9948] [0c6e9b00, 0c6e9d5f] [0c6e9d90, 0c6ea024]]
 * Ghidra: FUN_0c6e95e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0c6e95e0(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  undefined8 *puVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  undefined8 in_RAX;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 unaff_RBX;
  long lVar20;
  undefined8 unaff_R12;
  bool bVar21;
  undefined1 uStack_209;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined **ppuStack_128;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined7 uStack_27;
  
  uStack_28 = (undefined1)in_RAX;
  uStack_27 = (undefined7)((ulong)in_RAX >> 8);
  bVar1 = *(byte *)(param_1 + 0x89);
  if (bVar1 == 1) {
    uStack_30 = 0xc6e9602;
    uStack_2c = 0;
    lVar10 = pthread_self();
    lVar3 = *(long *)(param_1 + 0x90);
    LOCK();
    lVar12 = *(long *)(param_1 + 0xa0);
    bVar21 = lVar3 == lVar12;
    if (bVar21) {
      *(long *)(param_1 + 0xa0) = lVar10;
      lVar12 = lVar3;
    }
    UNLOCK();
    if (!bVar21) {
      iVar14 = 3000;
      do {
        while( true ) {
          if ((lVar12 == lVar10) && (iVar9 = *(int *)(param_1 + 0x98) + 1, iVar9 != -1)) {
            *(int *)(param_1 + 0x98) = iVar9;
            cVar8 = *(char *)(param_1 + 0x89);
            goto joined_r0x0c6e96f5;
          }
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          lVar3 = *(long *)(param_1 + 0x90);
          LOCK();
          lVar12 = *(long *)(param_1 + 0xa0);
          bVar21 = lVar3 == lVar12;
          if (bVar21) {
            *(long *)(param_1 + 0xa0) = lVar10;
            lVar12 = lVar3;
          }
          UNLOCK();
          if (bVar21) goto LAB_0c6e9668;
        }
        uStack_30 = 0xc6e9625;
        uStack_2c = 0;
        func_0x0eee35d0();
        iVar14 = 0;
        lVar3 = *(long *)(param_1 + 0x90);
        LOCK();
        lVar12 = *(long *)(param_1 + 0xa0);
        bVar21 = lVar3 == lVar12;
        if (bVar21) {
          *(long *)(param_1 + 0xa0) = lVar10;
          lVar12 = lVar3;
        }
        UNLOCK();
      } while (!bVar21);
    }
LAB_0c6e9668:
    *(undefined4 *)(param_1 + 0x98) = 1;
    cVar8 = *(char *)(param_1 + 0x89);
joined_r0x0c6e96f5:
    if (cVar8 == '\x01') {
      uStack_30 = 0xc6e9691;
      uStack_2c = 0;
      func_0x0c6eb860(param_1,1);
    }
    if (*(long *)(param_1 + 0xa0) == lVar10) {
      iVar14 = *(int *)(param_1 + 0x98);
      if (iVar14 == 1) {
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x90);
      }
      else {
        if (iVar14 == 0) goto LAB_0c6e96ad;
        *(int *)(param_1 + 0x98) = iVar14 + -1;
      }
    }
    else {
LAB_0c6e96ad:
      uStack_30 = 0xc6e96d5;
      uStack_2c = 0;
      cVar8 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
      if (cVar8 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    bVar1 = *(byte *)(param_1 + 0x89);
  }
  if ((bVar1 & 1) == 0) {
LAB_0c6e9857:
    cVar8 = *(char *)(param_1 + 0x88);
  }
  else {
    uStack_30 = 0xc6e9732;
    uStack_2c = 0;
    lVar10 = pthread_self();
    lVar3 = *(long *)(param_1 + 0x90);
    LOCK();
    lVar12 = *(long *)(param_1 + 0xa0);
    bVar21 = lVar3 == lVar12;
    if (bVar21) {
      *(long *)(param_1 + 0xa0) = lVar10;
      lVar12 = lVar3;
    }
    UNLOCK();
    if (!bVar21) {
      iVar14 = 3000;
      do {
        while( true ) {
          if ((lVar12 == lVar10) && (iVar9 = *(int *)(param_1 + 0x98) + 1, iVar9 != -1)) {
            *(int *)(param_1 + 0x98) = iVar9;
            cVar8 = *(char *)(param_1 + 0x89);
            goto joined_r0x0c6e9836;
          }
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          lVar3 = *(long *)(param_1 + 0x90);
          LOCK();
          lVar12 = *(long *)(param_1 + 0xa0);
          bVar21 = lVar3 == lVar12;
          if (bVar21) {
            *(long *)(param_1 + 0xa0) = lVar10;
            lVar12 = lVar3;
          }
          UNLOCK();
          if (bVar21) goto LAB_0c6e9798;
        }
        uStack_30 = 0xc6e9755;
        uStack_2c = 0;
        func_0x0eee35d0();
        iVar14 = 0;
        lVar3 = *(long *)(param_1 + 0x90);
        LOCK();
        lVar12 = *(long *)(param_1 + 0xa0);
        bVar21 = lVar3 == lVar12;
        if (bVar21) {
          *(long *)(param_1 + 0xa0) = lVar10;
          lVar12 = lVar3;
        }
        UNLOCK();
      } while (!bVar21);
    }
LAB_0c6e9798:
    *(undefined4 *)(param_1 + 0x98) = 1;
    cVar8 = *(char *)(param_1 + 0x89);
joined_r0x0c6e9836:
    if (cVar8 == '\x01') {
      uStack_30 = 0xc6e97c1;
      uStack_2c = 0;
      func_0x0c6eb860(param_1,1);
    }
    if (*(long *)(param_1 + 0xa0) == lVar10) {
      iVar14 = *(int *)(param_1 + 0x98);
      if (iVar14 == 1) {
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x90);
        goto LAB_0c6e9857;
      }
      if (iVar14 == 0) goto LAB_0c6e97e1;
      *(int *)(param_1 + 0x98) = iVar14 + -1;
      cVar8 = *(char *)(param_1 + 0x88);
    }
    else {
LAB_0c6e97e1:
      uStack_30 = 0xc6e9809;
      uStack_2c = 0;
      cVar8 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
      if (cVar8 == '\0') goto LAB_0c6e9857;
      _DAT_00000000 = 0xdeadc0de;
      cVar8 = *(char *)(param_1 + 0x88);
    }
  }
  if (cVar8 != '\x01') {
    return false;
  }
  iVar14 = *(int *)(param_1 + 0x78);
  uStack_188 = (undefined4)param_2;
  uStack_184 = (undefined4)((ulong)param_2 >> 0x20);
  if (iVar14 == 2) {
    lVar12 = *(long *)(param_1 + 0x80);
    if (lVar12 == 0) {
      return false;
    }
    uStack_28 = (undefined1)unaff_R12;
    uStack_27 = (undefined7)((ulong)unaff_R12 >> 8);
    uStack_30 = (undefined4)unaff_RBX;
    uStack_2c = (undefined4)((ulong)unaff_RBX >> 0x20);
    uStack_38 = (undefined4)lVar12;
    uStack_34 = (undefined4)((ulong)lVar12 >> 0x20);
    plVar11 = *(long **)(param_1 + 0x60);
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar11 == plVar5) {
      return false;
    }
    lVar12 = *(long *)(lVar12 + 0x68);
    lVar3 = *(long *)(param_2 + 0x68);
    if (*(long *)(lVar12 + 200) != *(long *)(lVar3 + 200)) goto LAB_0c6e9ff5;
    if ((*(long *)(lVar12 + 0xe8) == lVar3 + 200) && (*(long *)(lVar3 + 0xe8) == lVar12 + 200))
    goto LAB_0c6e9e03;
    bVar1 = *(byte *)(lVar12 + 0xd0);
    if ((bVar1 & 1) == 0) {
      uVar13 = (ulong)(bVar1 >> 1);
      uVar15 = (ulong)*(byte *)(lVar3 + 0xd0);
      if ((*(byte *)(lVar3 + 0xd0) & 1) == 0) goto LAB_0c6e9f88;
LAB_0c6e9fa5:
      if (uVar13 != *(ulong *)(lVar3 + 0xd8)) goto LAB_0c6e9ff5;
    }
    else {
      uVar13 = *(ulong *)(lVar12 + 0xd8);
      uVar15 = (ulong)*(byte *)(lVar3 + 0xd0);
      if ((*(byte *)(lVar3 + 0xd0) & 1) != 0) goto LAB_0c6e9fa5;
LAB_0c6e9f88:
      if (uVar13 != uVar15 >> 1) goto LAB_0c6e9ff5;
    }
    if ((bVar1 & 1) == 0) {
      lVar10 = lVar12 + 0xd1;
      if ((uVar15 & 1) == 0) goto LAB_0c6e9fc6;
LAB_0c6e9fe0:
      lVar20 = *(long *)(lVar3 + 0xe0);
    }
    else {
      lVar10 = *(long *)(lVar12 + 0xe0);
      if ((uVar15 & 1) != 0) goto LAB_0c6e9fe0;
LAB_0c6e9fc6:
      lVar20 = lVar3 + 0xd1;
    }
    uStack_40 = 0xc6e9fed;
    uStack_3c = 0;
    uStack_38 = uStack_188;
    uStack_34 = uStack_184;
    iVar14 = bcmp(lVar10,lVar20);
    param_2 = CONCAT44(uStack_34,uStack_38);
    if (iVar14 == 0) {
      *(long *)(lVar12 + 0xe8) = lVar3 + 200;
      *(long *)(lVar3 + 0xe8) = lVar12 + 200;
LAB_0c6e9e03:
      do {
        lVar3 = *(long *)(param_2 + 0x68);
        uVar13 = *(ulong *)(*plVar11 + 8);
        lVar12 = lVar3 + 0x1b0;
        lVar20 = *(long *)(lVar3 + 0x1b0);
        lVar18 = lVar12;
        lVar10 = lVar20;
        if (lVar20 == 0) {
LAB_0c6e9e53:
          plVar19 = *(long **)(lVar3 + 0x350);
          while( true ) {
            if (plVar19 == *(long **)(lVar3 + 0x358)) {
              return false;
            }
            if (*(ulong *)(*(long *)(*plVar19 + 8) + 8) == uVar13) break;
            plVar19 = plVar19 + 2;
          }
        }
        else {
          do {
            bVar21 = *(ulong *)(lVar10 + 0x20) < uVar13;
            if (!bVar21) {
              lVar18 = lVar10;
            }
            lVar10 = *(long *)(lVar10 + (ulong)bVar21 * 8);
          } while (lVar10 != 0);
          if ((lVar18 == lVar12) || (uVar13 < *(ulong *)(lVar18 + 0x20))) goto LAB_0c6e9e53;
        }
        uVar2 = *(uint *)(plVar11 + 1);
        lVar10 = lVar12;
        if (lVar20 == 0) {
LAB_0c6e9ec3:
          for (plVar19 = *(long **)(lVar3 + 0x350); plVar19 != *(long **)(lVar3 + 0x358);
              plVar19 = plVar19 + 2) {
            puVar6 = (undefined8 *)*plVar19;
            if (*(ulong *)(puVar6[1] + 8) == uVar13) {
              uStack_40 = 0xc6e9f15;
              uStack_3c = 0;
              uVar13 = (**(code **)*puVar6)(puVar6,lVar3);
              uVar16 = (uint)uVar13;
              if ((uVar13 >> 0x20 & 1) == 0) {
                uVar16 = 0;
              }
              goto joined_r0x0c6e9f26;
            }
          }
          if (uVar2 != 0) {
            return false;
          }
        }
        else {
          do {
            bVar21 = *(ulong *)(lVar20 + 0x20) < uVar13;
            if (!bVar21) {
              lVar10 = lVar20;
            }
            lVar20 = *(long *)(lVar20 + (ulong)bVar21 * 8);
          } while (lVar20 != 0);
          if ((lVar10 == lVar12) || (uVar13 < *(ulong *)(lVar10 + 0x20))) goto LAB_0c6e9ec3;
          cVar8 = (char)*(undefined4 *)(lVar10 + 0x2c);
          uVar16 = (uint)(*(ushort *)(param_2 + 0x128) >>
                         (((char)*(undefined4 *)(lVar10 + 0x30) - cVar8) + 1U & 0x1f)) &
                   0xffffU >> (0x10U - cVar8 & 0x1f);
joined_r0x0c6e9f26:
          if (uVar2 != uVar16) {
            return false;
          }
        }
        plVar11 = plVar11 + 2;
        if (plVar11 == plVar5) {
          return true;
        }
      } while( true );
    }
LAB_0c6e9ff5:
    *(undefined8 *)(lVar12 + 0xe8) = 0;
    return false;
  }
  if (iVar14 == 1) {
    if (*(long *)(param_1 + 0x80) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x80) + 0x68) == *(long *)(param_2 + 0x68)) {
        return true;
      }
      if (*(char *)(param_1 + 0x30) == '\x01') {
        uStack_30 = 0xc6e98cd;
        uStack_2c = 0;
        plVar11 = (long *)func_0x0cc440f0(0xf6ff9e0,param_1 + 8);
        if ((undefined8 *)*plVar11 != (undefined8 *)plVar11[1]) {
          puVar6 = (undefined8 *)*plVar11;
          do {
            puVar17 = puVar6 + 1;
            if (*(long *)(*(long *)(param_2 + 0x68) + 200) == *(long *)*puVar6) {
              return (bool)1;
            }
            puVar6 = puVar17;
          } while (puVar17 != (undefined8 *)plVar11[1]);
          return (bool)0;
        }
      }
    }
    return false;
  }
  if (iVar14 != 0) {
    return false;
  }
  pfVar4 = *(float **)(param_1 + 0x38);
  if (pfVar4 == (float *)0x0) {
    return false;
  }
  uStack_1e8 = 0;
  lStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1d8 = 3;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  puStack_148 = &UNK_0f325c88;
  puStack_140 = &UNK_0bccfd60;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_f0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0x3f800000;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_108 = 0x3f800000;
  fVar7 = _DAT_0f6b4ca8;
  ppuStack_128 = &puStack_148;
  if (pfVar4[2] == 0.0) {
    plVar11 = *(long **)pfVar4;
    if (plVar11 == (long *)0x0) goto LAB_0c6e9cb6;
    lVar12 = (**(code **)(*plVar11 + 0x18))(plVar11,&uStack_208);
    bVar21 = (bool)(-(*(float *)(lVar12 + 8) != 0.0) & 1);
    if (uStack_4c._4_4_ != 0xffffffff) goto LAB_0c6e9cbf;
  }
  else {
    if (pfVar4[2] == 1.4013e-45) {
      fVar7 = *pfVar4;
    }
LAB_0c6e9cb6:
    bVar21 = (bool)(-(fVar7 != 0.0) & 1);
    uStack_4c._4_4_ = 0;
LAB_0c6e9cbf:
    (**(code **)(&UNK_0f2be788 + (ulong)uStack_4c._4_4_ * 8))(&uStack_209,&uStack_88);
  }
  uStack_4c = CONCAT44(0xffffffff,(undefined4)uStack_4c);
  if (uStack_a4 >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_a4 >> 0x20) * 8))(&uStack_209,&uStack_e0);
  }
  uStack_a4 = CONCAT44(0xffffffff,(undefined4)uStack_a4);
  if (ppuStack_128 == &puStack_148) {
    lVar12 = 0x20;
  }
  else {
    lVar12 = 0x28;
    if (ppuStack_128 == (undefined **)0x0) goto joined_r0x0c6e9d5c;
  }
  (**(code **)(*ppuStack_128 + lVar12))();
joined_r0x0c6e9d5c:
  if (lStack_1e0 != 0) {
    func_0x0412c2d0();
  }
  return bVar21;
}


