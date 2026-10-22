/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6e68050 (ELF vaddr 0x6d68050)
 * Label: caller-of-callee
 * Body:  [[06e68050, 06e681d4] [06e681e0, 06e68b95] [06e68ba0, 06e68c0d] [06e68c10, 06e68e17] [06e68ed4, 06e68ee9]]
 * Ghidra: FUN_06e68050
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06e68050(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long *plVar17;
  ulong uVar18;
  undefined *unaff_RBP;
  byte *pbVar19;
  long unaff_R12;
  undefined1 *puVar20;
  long lVar21;
  bool bVar22;
  byte bStack_178;
  undefined4 uStack_177;
  undefined4 uStack_173;
  undefined4 uStack_16f;
  undefined4 uStack_16b;
  undefined4 uStack_167;
  undefined3 uStack_163;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  uint uStack_d8;
  undefined1 *puStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  uStack_158 = &UNK_0180be59;
  uStack_150 = 6;
  lStack_58 = param_3 + 8;
  lStack_160 = param_1;
  lVar11 = func_0x0d6c97a0(lStack_58,&uStack_158);
  param_3 = param_3 + 0x10;
  lStack_60 = param_2;
  if (lVar11 != param_3) {
    if ((ulong)*(uint *)(lVar11 + 0x60) == 0xffffffff) goto LAB_06e68d9a;
    puStack_c8 = &bStack_178;
    lVar11 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar11 + 0x60) * 8))
                       (&puStack_c8,lVar11 + 0x38);
    if (lVar11 != 0) {
      uStack_158 = &UNK_0180be59;
      uStack_150 = 6;
      lVar11 = func_0x0d6c97a0(lStack_58,&uStack_158);
      if (lVar11 == param_3) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        if (*(int *)(lVar11 + 0x60) == 8) {
          lVar14 = lVar11 + 0x38;
        }
      }
      if (_DAT_0f6cfa68 - _DAT_0f6cfa60 != 0) {
        pbVar13 = &UNK_01e79d90;
        if (lVar14 != 0) {
          pbVar13 = (byte *)(lVar14 + 8);
        }
        lVar11 = (_DAT_0f6cfa68 - _DAT_0f6cfa60 >> 4) * -0x5555555555555555;
        if ((*pbVar13 & 1) == 0) {
          unaff_RBP = (undefined *)(ulong)(*pbVar13 >> 1);
          pbVar13 = pbVar13 + 1;
        }
        else {
          unaff_RBP = *(undefined **)(pbVar13 + 8);
          pbVar13 = *(byte **)(pbVar13 + 0x10);
        }
        plVar17 = (long *)(_DAT_0f6cfa60 + 0x10);
        param_2 = 0;
        do {
          bVar2 = *(byte *)(plVar17 + -2);
          if ((bVar2 & 1) == 0) {
            puVar16 = (undefined *)(ulong)(bVar2 >> 1);
          }
          else {
            puVar16 = (undefined *)plVar17[-1];
          }
          if (puVar16 == unaff_RBP) {
            if ((bVar2 & 1) == 0) {
              lVar14 = (long)plVar17 + -0xf;
            }
            else {
              lVar14 = *plVar17;
            }
            iVar10 = func_0x0eee3000(lVar14,pbVar13,unaff_RBP);
            if (iVar10 == 0) {
              iVar10 = (int)param_2;
              *(int *)(lStack_160 + 8) = iVar10;
              plVar17 = *(long **)(lStack_60 + 0x120);
              unaff_R12 = 0;
              if (plVar17 == (long *)0x0) goto LAB_06e68d95;
              plVar12 = *(long **)(*plVar17 + 0x10);
              cVar8 = (**(code **)(*plVar12 + 0x18))(plVar12);
              if ((cVar8 == '\x02') && (*(int *)((long)plVar12 + 0xc) != iVar10)) {
                *(int *)((long)plVar12 + 0xc) = iVar10;
                uVar9 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if (0x8c < uVar9) {
                  uVar15 = func_0x04882ef0(&UNK_012d4a56);
                  func_0x041084d6(&DAT_0f5ea4a0);
                  func_0x06e69320(&puStack_c8);
                  func_0x0eee2d70(uVar15);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                plVar17[(ulong)(uVar9 >> 6) + 3] =
                     plVar17[(ulong)(uVar9 >> 6) + 3] | 1L << ((byte)uVar9 & 0x3f);
              }
              break;
            }
          }
          param_2 = param_2 + 1;
          plVar17 = plVar17 + 6;
        } while (lVar11 + (ulong)(lVar11 == 0) != param_2);
      }
    }
  }
  param_2 = lStack_58;
  uStack_158 = &UNK_01807971;
  uStack_150 = 0xe;
  lVar11 = func_0x0d6c97a0(lStack_58,&uStack_158);
  unaff_R12 = lStack_60;
  if (lVar11 != param_3) {
    if ((ulong)*(uint *)(lVar11 + 0x60) == 0xffffffff) goto LAB_06e68d9a;
    puStack_c8 = &bStack_178;
    lVar11 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar11 + 0x60) * 8))
                       (&puStack_c8,lVar11 + 0x38);
    if (lVar11 != 0) {
      uStack_158 = &UNK_01807971;
      uStack_150 = 0xe;
      lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
      if (lVar11 == param_3) {
        lVar14 = 0;
        plVar17 = *(long **)(unaff_R12 + 0x120);
      }
      else {
        lVar14 = 0;
        if (*(int *)(lVar11 + 0x60) == 8) {
          lVar14 = lVar11 + 0x38;
        }
        plVar17 = *(long **)(unaff_R12 + 0x120);
      }
      if (plVar17 == (long *)0x0) goto LAB_06e68d95;
      puVar16 = &UNK_01e79d90;
      if (lVar14 != 0) {
        puVar16 = (undefined *)(lVar14 + 8);
      }
      func_0x06e38140(plVar17,*(undefined8 *)(*plVar17 + 800),puVar16);
    }
  }
  uStack_158 = &UNK_01807959;
  uStack_150 = 0xb;
  lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
  if (lVar11 != param_3) {
    if ((ulong)*(uint *)(lVar11 + 0x60) == 0xffffffff) goto LAB_06e68d9a;
    puStack_c8 = &bStack_178;
    lVar11 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar11 + 0x60) * 8))
                       (&puStack_c8,lVar11 + 0x38);
    if (lVar11 != 0) {
      uStack_158 = &UNK_01807959;
      uStack_150 = 0xb;
      lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
      if (lVar11 == param_3) {
        lVar14 = 0;
        plVar17 = *(long **)(unaff_R12 + 0x120);
      }
      else {
        lVar14 = 0;
        if (*(int *)(lVar11 + 0x60) == 8) {
          lVar14 = lVar11 + 0x38;
        }
        plVar17 = *(long **)(unaff_R12 + 0x120);
      }
      if (plVar17 == (long *)0x0) goto LAB_06e68d95;
      puVar16 = &UNK_01e79d90;
      if (lVar14 != 0) {
        puVar16 = (undefined *)(lVar14 + 8);
      }
      func_0x06e38140(plVar17,*(undefined8 *)(*plVar17 + 0x380),puVar16);
    }
  }
  uStack_158 = &UNK_01807989;
  uStack_150 = 7;
  lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
  if (lVar11 != param_3) {
    if ((ulong)*(uint *)(lVar11 + 0x60) == 0xffffffff) goto LAB_06e68d9a;
    puStack_c8 = &bStack_178;
    lVar11 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar11 + 0x60) * 8))
                       (&puStack_c8,lVar11 + 0x38);
    if (lVar11 != 0) {
      uStack_158 = &UNK_01807989;
      uStack_150 = 7;
      lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
      if (lVar11 == param_3) {
        lVar14 = 0;
        plVar17 = *(long **)(unaff_R12 + 0x120);
      }
      else {
        lVar14 = 0;
        if (*(int *)(lVar11 + 0x60) == 8) {
          lVar14 = lVar11 + 0x38;
        }
        plVar17 = *(long **)(unaff_R12 + 0x120);
      }
      if (plVar17 == (long *)0x0) goto LAB_06e68d95;
      puVar16 = &UNK_01e79d90;
      if (lVar14 != 0) {
        puVar16 = (undefined *)(lVar14 + 8);
      }
      func_0x06e38140(plVar17,*(undefined8 *)(*plVar17 + 0x148),puVar16);
      func_0x06e68ef0(lStack_160,unaff_R12);
    }
  }
  unaff_RBP = &UNK_018079a1;
  uStack_158 = &UNK_018079a1;
  uStack_150 = 3;
  lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
  if (lVar11 == param_3) goto LAB_06e6897e;
  if ((ulong)*(uint *)(lVar11 + 0x60) == 0xffffffff) goto LAB_06e68d9a;
  puStack_c8 = &bStack_178;
  lVar11 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar11 + 0x60) * 8))
                     (&puStack_c8,lVar11 + 0x38);
  if (lVar11 == 0) goto LAB_06e6897e;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  puStack_c8 = (undefined *)0x0;
  uStack_c0 = 0;
  if (DAT_0f5ea4a0 == '\0') goto LAB_06e68d9f;
LAB_06e685cd:
  bStack_178 = 0x26;
  uStack_177 = _DAT_01394dfe;
  uStack_173 = _UNK_01394e02;
  uStack_16f = _UNK_01394e06;
  uStack_16b = CONCAT13(0x6d,(int3)_UNK_01394e0a);
  uStack_167 = 0x65726f;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  (**(code **)(_DAT_0f5ea138 + 0x90))(&uStack_158,&DAT_0f5ea138,&bStack_178);
  uVar18 = (ulong)uStack_158 >> 1 & 0x7f;
  lVar11 = (long)&uStack_158 + 1;
  if (((ulong)uStack_158 & 1) != 0) {
    uVar18 = uStack_150;
    lVar11 = lStack_148;
  }
  func_0x0bc88080(&uStack_98,lVar11,uVar18);
  if (((ulong)uStack_158 & 1) != 0) {
    func_0x0412a280(lStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
  }
  plVar17 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_40 + 1;
    lVar11 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      FUN_0412c2d0(plVar17);
    }
  }
  if ((bStack_178 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_163,CONCAT41(uStack_167,uStack_16b._3_1_)),
                    CONCAT35((undefined3)uStack_173,CONCAT41(uStack_177,bStack_178)) &
                    0xfffffffffffffffe);
  }
  uStack_150 = 3;
  uStack_158 = unaff_RBP;
  lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
  if (lVar11 == param_3) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(int *)(lVar11 + 0x60) == 8) {
      lVar14 = lVar11 + 0x38;
    }
  }
  pbVar13 = &UNK_01e79d90;
  if (lVar14 != 0) {
    pbVar13 = (byte *)(lVar14 + 8);
  }
  if ((*pbVar13 & 1) == 0) {
    uVar18 = (ulong)(*pbVar13 >> 1);
    pbVar13 = pbVar13 + 1;
  }
  else {
    uVar18 = *(ulong *)(pbVar13 + 8);
    pbVar13 = *(byte **)(pbVar13 + 0x10);
  }
  func_0x0412f5e0(&puStack_c8,pbVar13,uVar18);
  func_0x0bc87f20(&uStack_158,&puStack_c8);
  if ((uStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,uStack_b0 & 0xfffffffffffffffe);
  }
  lStack_130 = lStack_148;
  uStack_138 = uStack_150;
  puStack_140 = uStack_158;
  unaff_RBP = (undefined *)(lStack_160 + 0x70);
  lStack_148 = lStack_b8;
  uStack_158 = puStack_c8;
  uStack_150 = uStack_c0;
  puStack_c8 = (undefined *)0x0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_118 = uStack_88;
  uStack_128 = uStack_98;
  uStack_120 = uStack_90;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_100 = uStack_70;
  uStack_110 = (undefined4)uStack_80;
  uStack_10c = uStack_80._4_4_;
  uStack_108 = (undefined4)uStack_78;
  uStack_104 = uStack_78._4_4_;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_d8 = 1;
  bStack_178 = (byte)&puStack_50;
  uStack_177 = (undefined4)((ulong)&puStack_50 >> 8);
  uStack_173._0_3_ = (undefined3)((ulong)&puStack_50 >> 0x28);
  puStack_50 = unaff_RBP;
  func_0x0bc8aa70(&bStack_178,&uStack_158);
  uVar7 = uStack_d8;
  puVar20 = *(undefined1 **)(lStack_160 + 0x78);
  if (puVar20 < *(undefined1 **)(lStack_160 + 0x80)) {
    *puVar20 = 0;
    *(undefined4 *)(puVar20 + 0x80) = 0xffffffff;
    if ((ulong)uStack_d8 != 0xffffffff) {
      bStack_178 = (byte)puVar20;
      uStack_177 = (undefined4)((ulong)puVar20 >> 8);
      uStack_173._0_3_ = (undefined3)((ulong)puVar20 >> 0x28);
      (**(code **)(&UNK_0f3162e8 + (ulong)uStack_d8 * 8))(&bStack_178,&uStack_158);
      *(uint *)(puVar20 + 0x80) = uVar7;
    }
    puVar20 = puVar20 + 0x88;
  }
  else {
    puVar20 = (undefined1 *)func_0x06ef4da0(unaff_RBP,&uStack_158);
  }
  *(undefined1 **)(lStack_160 + 0x78) = puVar20;
  if ((ulong)uStack_d8 != 0xffffffff) {
    (**(code **)(&UNK_0f096240 + (ulong)uStack_d8 * 8))(&bStack_178,&uStack_158);
  }
  func_0x0bc89160(&bStack_178,unaff_RBP);
  cVar8 = func_0x04864260(&bStack_178);
  if (cVar8 == '\0') {
    func_0x048654e0(&uStack_158,&bStack_178);
  }
  else {
    uStack_158 = (undefined *)0x0;
    uStack_150 = 0;
    lStack_148 = 0;
  }
  func_0x04863610(&bStack_178);
  plVar17 = *(long **)(unaff_R12 + 0x120);
  if (plVar17 == (long *)0x0) {
LAB_06e68d95:
    func_0x04890760();
  }
  else {
    func_0x06e38140(plVar17,*(undefined8 *)(*plVar17 + 0x148),&uStack_158);
    if (((ulong)uStack_158 & 1) != 0) {
      func_0x0412a280(lStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
    if ((uStack_80 & 1) != 0) {
      func_0x0412a280(uStack_70,uStack_80 & 0xfffffffffffffffe);
    }
    if ((uStack_98 & 1) != 0) {
      func_0x0412a280(uStack_88,uStack_98 & 0xfffffffffffffffe);
    }
    if ((uStack_b0 & 1) != 0) {
      func_0x0412a280(uStack_a0,uStack_b0 & 0xfffffffffffffffe);
    }
    if (((ulong)puStack_c8 & 1) != 0) {
      func_0x0412a280(lStack_b8,(ulong)puStack_c8 & 0xfffffffffffffffe);
    }
LAB_06e6897e:
    uStack_158 = &UNK_018079e9;
    uStack_150 = 9;
    lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
    if (lVar11 == param_3) goto LAB_06e68b2e;
    if ((ulong)*(uint *)(lVar11 + 0x60) != 0xffffffff) goto code_r0x06e689ba;
  }
LAB_06e68d9a:
  func_0x04931450();
LAB_06e68d9f:
  iVar10 = func_0x04108328(&DAT_0f5ea4a0);
  if (iVar10 != 0) {
    func_0x08b670e0(&DAT_0f5ea138);
    func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
    param_2 = lStack_58;
  }
  goto LAB_06e685cd;
code_r0x06e689ba:
  puStack_c8 = &bStack_178;
  lVar11 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar11 + 0x60) * 8))
                     (&puStack_c8,lVar11 + 0x38);
  if (lVar11 != 0) {
    uStack_158 = &UNK_018079e9;
    uStack_150 = 9;
    lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
    if (lVar11 == param_3) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      if (*(int *)(lVar11 + 0x60) == 8) {
        lVar14 = lVar11 + 0x38;
      }
    }
    pbVar13 = &UNK_01e79d90;
    if (lVar14 != 0) {
      pbVar13 = (byte *)(lVar14 + 8);
    }
    pbVar1 = (byte *)(lStack_160 + 200);
    if (pbVar1 != pbVar13) {
      bVar2 = *pbVar13;
      if ((*pbVar1 & 1) == 0) {
        if ((bVar2 & 1) == 0) {
          *(undefined8 *)(lStack_160 + 0xd8) = *(undefined8 *)(pbVar13 + 0x10);
          uVar4 = *(undefined4 *)(pbVar13 + 4);
          uVar5 = *(undefined4 *)(pbVar13 + 8);
          uVar6 = *(undefined4 *)(pbVar13 + 0xc);
          *(undefined4 *)pbVar1 = *(undefined4 *)pbVar13;
          *(undefined4 *)(lStack_160 + 0xcc) = uVar4;
          *(undefined4 *)(lStack_160 + 0xd0) = uVar5;
          *(undefined4 *)(lStack_160 + 0xd4) = uVar6;
        }
        else {
          func_0x04885070(pbVar1,*(undefined8 *)(pbVar13 + 0x10),*(undefined8 *)(pbVar13 + 8));
        }
      }
      else {
        bVar22 = (bVar2 & 1) != 0;
        pbVar19 = pbVar13 + 1;
        if (bVar22) {
          pbVar19 = *(byte **)(pbVar13 + 0x10);
        }
        uVar18 = (ulong)(bVar2 >> 1);
        if (bVar22) {
          uVar18 = *(ulong *)(pbVar13 + 8);
        }
        func_0x04885120(pbVar1,pbVar19,uVar18);
      }
    }
  }
LAB_06e68b2e:
  uStack_158 = &UNK_018079b9;
  uStack_150 = 0x12;
  lVar11 = func_0x0d6c97a0(param_2,&uStack_158);
  if (((lVar11 != param_3) && (*(int *)(lVar11 + 0x60) == 9)) &&
     (lVar14 = *(long *)(lVar11 + 0x40), 0 < (int)((ulong)(*(long *)(lVar11 + 0x48) - lVar14) >> 3))
     ) {
    lStack_160 = lStack_160 + 0xa0;
    lVar21 = 0;
    do {
      plVar17 = *(long **)(lVar14 + lVar21 * 8);
      if ((plVar17 != (long *)0x0) &&
         (cVar8 = (**(code **)(*plVar17 + 0x30))(plVar17), cVar8 == '\n')) {
        uStack_158 = &UNK_018079d1;
        uStack_150 = 8;
        plVar12 = (long *)func_0x0d6c97a0(plVar17 + 1,&uStack_158);
        if ((plVar12 == plVar17 + 2) || ((int)plVar12[0xc] != 4)) {
          lVar14 = 0;
        }
        else {
          lVar14 = plVar12[8];
        }
        bStack_178 = (byte)lVar14;
        uStack_177 = (undefined4)((ulong)lVar14 >> 8);
        uStack_173._0_3_ = (undefined3)((ulong)lVar14 >> 0x28);
        puStack_c8 = &UNK_018079e9;
        uStack_c0 = 9;
        plVar12 = (long *)func_0x0d6c97a0(plVar17 + 1,&puStack_c8);
        if (plVar12 == plVar17 + 2) {
          plVar17 = (long *)0x0;
        }
        else {
          plVar17 = plVar12 + 7;
          if ((int)plVar12[0xc] != 8) {
            plVar17 = (long *)0x0;
          }
        }
        pbVar13 = (byte *)(plVar17 + 1);
        if (plVar17 == (long *)0x0) {
          pbVar13 = &UNK_01e79d90;
        }
        if ((*pbVar13 & 1) == 0) {
          lStack_148 = *(long *)(pbVar13 + 0x10);
          uStack_158 = *(undefined **)pbVar13;
          uStack_150 = *(ulong *)(pbVar13 + 8);
          lVar14 = CONCAT35((undefined3)uStack_173,CONCAT41(uStack_177,bStack_178));
        }
        else {
          func_0x0412e5e0(&uStack_158,*(undefined8 *)(pbVar13 + 0x10),*(undefined8 *)(pbVar13 + 8));
          lVar14 = CONCAT35((undefined3)uStack_173,CONCAT41(uStack_177,bStack_178));
        }
        if (lVar14 != -1) {
          if (((ulong)uStack_158 & 1) == 0) {
            if ((byte)uStack_158 >> 1 != 0) goto LAB_06e68ccb;
          }
          else if (uStack_150 != 0) {
LAB_06e68ccb:
            puStack_c8 = &bStack_178;
            lVar14 = func_0x06fd46c0(lStack_160,&bStack_178,&UNK_01563a4f,&puStack_c8,&puStack_50);
            pbVar13 = (byte *)(lVar14 + 0x18);
            if (pbVar13 != (byte *)&uStack_158) {
              if ((*pbVar13 & 1) == 0) {
                if (((ulong)uStack_158 & 1) == 0) {
                  *(long *)(lVar14 + 0x28) = lStack_148;
                  *(undefined4 *)pbVar13 = (undefined4)uStack_158;
                  *(undefined4 *)(lVar14 + 0x1c) = uStack_158._4_4_;
                  *(undefined4 *)(lVar14 + 0x20) = (undefined4)uStack_150;
                  *(undefined4 *)(lVar14 + 0x24) = uStack_150._4_4_;
                }
                else {
                  func_0x04885070(pbVar13,lStack_148,uStack_150);
                }
              }
              else {
                uVar18 = (ulong)uStack_158 >> 1 & 0x7f;
                lVar14 = (long)&uStack_158 + 1;
                if (((ulong)uStack_158 & 1) != 0) {
                  uVar18 = uStack_150;
                  lVar14 = lStack_148;
                }
                func_0x04885120(pbVar13,lVar14,uVar18);
              }
            }
          }
        }
        if (((ulong)uStack_158 & 1) != 0) {
          func_0x0412a280(lStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
        }
      }
      lVar21 = lVar21 + 1;
      lVar14 = *(long *)(lVar11 + 0x40);
    } while (lVar21 < (int)((ulong)(*(long *)(lVar11 + 0x48) - lVar14) >> 3));
  }
  return;
}



/* ---- referenced strings ----
 * 0x1394dfe  npcscreen.learnmore
 */
