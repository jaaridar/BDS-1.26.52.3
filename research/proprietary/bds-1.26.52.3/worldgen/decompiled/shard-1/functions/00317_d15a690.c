/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd25a690 (ELF vaddr 0xd15a690)
 * Label: caller-of-callee
 * Body:  [[0d25a690, 0d25a754] [0d25a760, 0d25a7bb] [0d25a7c0, 0d25a855] [0d25a860, 0d25a9a0] [0d25a9b0, 0d25a9dc] [0d25a9e0, 0d25aa38] [0d25aa40, 0d25aadb] [0d25aae0, 0d25ac9e] [0d25aca0, 0d25acaa] [0d25acb0, 0d25ad12] [0d25ad20, 0d25b5f7] [0d25b600, 0d25b6f2] [0d25b700, 0d25b99d] [0d25b9a0, 0d25b9e3] [0d25b9f0, 0d25bb6a] [0d25bb70, 0d25bbb3] [0d25bbc0, 0d25bc48]]
 * Ghidra: FUN_0d25a690
 */


/* WARNING: Removing unreachable block (ram,0x0d25b746) */
/* WARNING: Removing unreachable block (ram,0x0d25b760) */
/* WARNING: Removing unreachable block (ram,0x0d25b77c) */
/* WARNING: Removing unreachable block (ram,0x0d25b79a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0d25a690(long *param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  long *plVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined7 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  ushort uVar20;
  byte *pbVar21;
  ulong uVar22;
  bool bVar23;
  ushort uVar24;
  uint uVar25;
  long *unaff_RBP;
  undefined8 *puVar26;
  long *unaff_R14;
  long lVar27;
  undefined8 *puVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte *pbStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  byte bStack_198;
  undefined7 uStack_197;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  byte bStack_178;
  undefined7 uStack_177;
  byte bStack_170;
  undefined1 uStack_16f;
  undefined6 uStack_16e;
  long lStack_168;
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  byte bStack_14c;
  byte bStack_138;
  undefined1 auStack_128 [16];
  undefined8 *puStack_118;
  long lStack_110;
  undefined1 auStack_108 [16];
  byte *pbStack_f8;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  long *plStack_c0;
  byte *pbStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  ulong uStack_a8;
  undefined7 *puStack_a0;
  undefined1 auStack_98 [24];
  long *plStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  if (((*(byte *)((long)param_1 + 0x1d5) & 1) != 0) || ((*(byte *)(param_1 + 0x52) & 1) != 0)) {
    unaff_RBP = (long *)(ulong)DAT_0f778530;
    unaff_R14 = _DAT_0f778538;
    goto LAB_0d25a6c8;
  }
  auStack_128 = (undefined1  [16])0x0;
  puStack_118 = (undefined8 *)0x0;
  plStack_c0 = param_1 + 0x32;
  FUN_0412d680();
  pbStack_1b8 = (byte *)(param_1 + 0x20);
  puStack_1b0 = (undefined *)CONCAT71(puStack_1b0._1_7_,1);
  pbStack_b8 = pbStack_1b8;
  func_0x0412d550();
  plVar17 = (long *)param_1[0x5a];
  plStack_80 = param_1 + 0x5b;
  if (plVar17 != plStack_80) {
    do {
      pauVar1 = (undefined1 (*) [16])(plVar17 + 7);
      lVar27 = *(long *)*pauVar1;
      unaff_RBP = (long *)plVar17[8];
      auVar11 = *pauVar1;
      auStack_68._0_16_ = *pauVar1;
      if (unaff_RBP != (long *)0x0) {
        LOCK();
        unaff_RBP[1] = unaff_RBP[1] + 1;
        UNLOCK();
      }
      bVar3 = *(byte *)(plVar17 + 9);
      unaff_R14 = (long *)(ulong)bVar3;
      uVar5 = *(undefined4 *)((long)plVar17 + 0x4c);
      if ((*(byte *)(plVar17 + 4) & 1) == 0) {
        lStack_168 = plVar17[6];
        lVar18 = plVar17[5];
        bStack_178 = (byte)plVar17[4];
        uStack_177 = (undefined7)((ulong)plVar17[4] >> 8);
        bStack_170 = (byte)lVar18;
        uStack_16f = (undefined1)((ulong)lVar18 >> 8);
        uStack_16e = (undefined6)((ulong)lVar18 >> 0x10);
      }
      else {
        func_0x0412e5e0(&bStack_178,plVar17[6],plVar17[5]);
      }
      auStack_68._0_16_ = (undefined1  [16])0x0;
      uStack_150 = uVar5;
      bStack_14c = bVar3;
      if ((ulong)auStack_128._8_8_ < puStack_118) {
        *(long *)(auStack_128._8_8_ + 0x10) = lStack_168;
        *(ulong *)auStack_128._8_8_ = CONCAT71(uStack_177,bStack_178);
        *(ulong *)(auStack_128._8_8_ + 8) = CONCAT62(uStack_16e,CONCAT11(uStack_16f,bStack_170));
        bStack_178 = 0;
        uStack_177 = 0;
        bStack_170 = 0;
        uStack_16f = 0;
        uStack_16e = 0;
        lStack_168 = 0;
        *(long *)(auStack_128._8_8_ + 0x18) = lVar27;
        *(long **)(auStack_128._8_8_ + 0x20) = unaff_RBP;
        auStack_160 = (undefined1  [16])0x0;
        *(byte *)(auStack_128._8_8_ + 0x2c) = bVar3;
        *(undefined4 *)(auStack_128._8_8_ + 0x28) = uVar5;
        auStack_128._8_8_ = (undefined8 *)(auStack_128._8_8_ + 0x30);
      }
      else {
        auStack_160 = auVar11;
        uVar14 = func_0x0d265f20(auStack_128,&bStack_178);
        uVar10 = auStack_160._8_8_;
        auStack_128._8_8_ = uVar14;
        if ((long *)auStack_160._8_8_ != (long *)0x0) {
          LOCK();
          plVar6 = (long *)(auStack_160._8_8_ + 8);
          lVar27 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar27 == 0) {
            (**(code **)(*(long *)auStack_160._8_8_ + 0x10))(auStack_160._8_8_);
            func_0x0412c2d0(uVar10);
          }
        }
        if ((bStack_178 & 1) != 0) {
          func_0x0412a280(lStack_168,CONCAT71(uStack_177,bStack_178) & 0xfffffffffffffffe);
        }
      }
      uVar10 = auStack_68._8_8_;
      if ((long *)auStack_68._8_8_ == (long *)0x0) {
LAB_0d25a8da:
        plVar6 = (long *)plVar17[1];
        if ((long *)plVar17[1] != (long *)0x0) goto LAB_0d25a8f0;
LAB_0d25a920:
        do {
          plVar13 = (long *)plVar17[2];
          bVar29 = plVar17 != (long *)*plVar13;
          plVar17 = plVar13;
        } while (bVar29);
      }
      else {
        LOCK();
        plVar6 = (long *)(auStack_68._8_8_ + 8);
        lVar27 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar27 != 0) goto LAB_0d25a8da;
        (**(code **)(*(long *)auStack_68._8_8_ + 0x10))(auStack_68._8_8_);
        func_0x0412c2d0(uVar10);
        plVar6 = (long *)plVar17[1];
        if ((long *)plVar17[1] == (long *)0x0) goto LAB_0d25a920;
LAB_0d25a8f0:
        do {
          plVar13 = plVar6;
          plVar6 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      plVar17 = plVar13;
    } while (plVar13 != plStack_80);
  }
  lVar27 = param_1[0x62];
  lStack_50 = param_1[99];
  if (lVar27 != lStack_50) {
    do {
      auStack_d8._0_8_ = lVar27;
      unaff_RBP = (long *)(lVar27 + 0x28);
      plVar17 = *(long **)(lVar27 + 0x20);
      while (plVar17 != unaff_RBP) {
        pauVar1 = (undefined1 (*) [16])(plVar17 + 7);
        lVar27 = *(long *)*pauVar1;
        lVar18 = plVar17[8];
        auVar11 = *pauVar1;
        auStack_78 = *pauVar1;
        if (lVar18 != 0) {
          LOCK();
          *(long *)(lVar18 + 8) = *(long *)(lVar18 + 8) + 1;
          UNLOCK();
        }
        bVar3 = *(byte *)(plVar17 + 9);
        uVar5 = *(undefined4 *)((long)plVar17 + 0x4c);
        if ((*(byte *)(plVar17 + 4) & 1) == 0) {
          lStack_168 = plVar17[6];
          lVar2 = plVar17[5];
          bStack_178 = (byte)plVar17[4];
          uStack_177 = (undefined7)((ulong)plVar17[4] >> 8);
          bStack_170 = (byte)lVar2;
          uStack_16f = (undefined1)((ulong)lVar2 >> 8);
          uStack_16e = (undefined6)((ulong)lVar2 >> 0x10);
        }
        else {
          func_0x0412e5e0(&bStack_178,plVar17[6],plVar17[5]);
        }
        auStack_78 = (undefined1  [16])0x0;
        uStack_150 = uVar5;
        bStack_14c = bVar3;
        if ((ulong)auStack_128._8_8_ < puStack_118) {
          *(long *)(auStack_128._8_8_ + 0x10) = lStack_168;
          *(ulong *)auStack_128._8_8_ = CONCAT71(uStack_177,bStack_178);
          *(ulong *)(auStack_128._8_8_ + 8) = CONCAT62(uStack_16e,CONCAT11(uStack_16f,bStack_170));
          bStack_178 = 0;
          uStack_177 = 0;
          bStack_170 = 0;
          uStack_16f = 0;
          uStack_16e = 0;
          lStack_168 = 0;
          *(long *)(auStack_128._8_8_ + 0x18) = lVar27;
          *(long *)(auStack_128._8_8_ + 0x20) = lVar18;
          auStack_160 = (undefined1  [16])0x0;
          *(byte *)(auStack_128._8_8_ + 0x2c) = bVar3;
          *(undefined4 *)(auStack_128._8_8_ + 0x28) = uVar5;
          auStack_128._8_8_ = (undefined8 *)(auStack_128._8_8_ + 0x30);
        }
        else {
          auStack_160 = auVar11;
          uVar14 = func_0x0d265f20(auStack_128,&bStack_178);
          uVar10 = auStack_160._8_8_;
          auStack_128._8_8_ = uVar14;
          if ((long *)auStack_160._8_8_ != (long *)0x0) {
            LOCK();
            plVar6 = (long *)(auStack_160._8_8_ + 8);
            lVar27 = *plVar6;
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (lVar27 == 0) {
              (**(code **)(*(long *)auStack_160._8_8_ + 0x10))(auStack_160._8_8_);
              func_0x0412c2d0(uVar10);
            }
          }
          if ((bStack_178 & 1) != 0) {
            func_0x0412a280(lStack_168,CONCAT71(uStack_177,bStack_178) & 0xfffffffffffffffe);
          }
        }
        unaff_R14 = (long *)auStack_78._8_8_;
        if ((long *)auStack_78._8_8_ == (long *)0x0) {
LAB_0d25ab59:
          plVar6 = (long *)plVar17[1];
          if ((long *)plVar17[1] != (long *)0x0) goto LAB_0d25ab70;
LAB_0d25aba0:
          do {
            plVar6 = (long *)plVar17[2];
            bVar29 = plVar17 != (long *)*plVar6;
            plVar17 = plVar6;
          } while (bVar29);
        }
        else {
          LOCK();
          plVar6 = (long *)(auStack_78._8_8_ + 8);
          lVar27 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar27 != 0) goto LAB_0d25ab59;
          (**(code **)(*(long *)auStack_78._8_8_ + 0x10))(auStack_78._8_8_);
          func_0x0412c2d0(unaff_R14);
          plVar6 = (long *)plVar17[1];
          if ((long *)plVar17[1] == (long *)0x0) goto LAB_0d25aba0;
LAB_0d25ab70:
          do {
            plVar17 = plVar6;
            plVar6 = (long *)*plVar17;
          } while ((long *)*plVar17 != (long *)0x0);
        }
      }
      lVar27 = auStack_d8._0_8_ + 0x60;
    } while (lVar27 != lStack_50);
  }
  uVar10 = auStack_128._0_8_;
  uVar14 = auStack_128._8_8_;
  if (auStack_128._8_8_ == auStack_128._0_8_) {
    if ((*(byte *)((long)param_1 + 0x1d4) & 1) == 0) {
      lVar27 = param_1[0x39];
      lVar18 = func_0x0417cc60();
      unaff_R14 = (long *)(lVar18 + lVar27);
      unaff_RBP = (long *)0x0;
    }
    else {
      unaff_RBP = (long *)(ulong)DAT_0f778530;
      unaff_R14 = _DAT_0f778538;
    }
  }
  if ((char)puStack_1b0 == '\x01') {
    func_0x0412d610(pbStack_1b8);
  }
  if (uVar14 == uVar10) {
    func_0x0412d6b0(plStack_c0);
    lVar27 = auStack_128._0_8_;
  }
  else {
    func_0x041aab60(auStack_48);
    uVar10 = auStack_128._8_8_;
    if (auStack_128._0_8_ == auStack_128._8_8_) {
      lVar27 = param_1[6];
      auVar30 = (undefined1  [16])0x0;
      auVar11 = auStack_d8;
    }
    else {
      auStack_d8 = (undefined1  [16])0x0;
      pbVar21 = (byte *)auStack_128._0_8_;
      do {
        while (pbVar21[0x2c] == 1) {
          if ((*pbVar21 & 1) == 0) {
            bStack_178 = (byte)(pbVar21 + 1);
            uStack_177 = (undefined7)((ulong)(pbVar21 + 1) >> 8);
            bVar3 = *pbVar21;
            if ((bVar3 & 1) != 0) goto LAB_0d25acc0;
LAB_0d25ac9b:
            uVar15 = (ulong)(bVar3 >> 1);
          }
          else {
            bStack_178 = (byte)*(undefined8 *)(pbVar21 + 0x10);
            uStack_177 = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x10) >> 8);
            bVar3 = *pbVar21;
            if ((bVar3 & 1) == 0) goto LAB_0d25ac9b;
LAB_0d25acc0:
            uVar15 = *(ulong *)(pbVar21 + 8);
          }
          bStack_170 = (byte)uVar15;
          uStack_16f = (undefined1)(uVar15 >> 8);
          uStack_16e = (undefined6)(uVar15 >> 0x10);
          func_0x041aaf70(auStack_48,&bStack_178);
          FUN_0412d680(param_1 + 0x76);
          param_1[0x6f] = param_1[0x6f] + 1;
          func_0x0d2206a0(param_1 + 0x6c);
          func_0x0412d6b0(param_1 + 0x76);
          pbVar21 = pbVar21 + 0x30;
          if (pbVar21 == (byte *)uVar10) goto LAB_0d25addc;
        }
        if ((*pbVar21 & 1) == 0) {
          pbVar19 = pbVar21 + 1;
        }
        else {
          pbVar19 = *(byte **)(pbVar21 + 0x10);
        }
        pbVar7 = *(byte **)(pbVar21 + 0x18);
        bVar3 = *pbVar7;
        uVar14 = *(undefined8 *)(pbVar7 + 8);
        bStack_178 = (byte)pbVar19;
        uStack_177 = (undefined7)((ulong)pbVar19 >> 8);
        if ((*pbVar21 & 1) == 0) {
          bStack_170 = *pbVar21 >> 1;
          uStack_16f = 0;
          uStack_16e = 0;
          if ((*pbVar7 & 1) != 0) goto LAB_0d25ad6c;
LAB_0d25ad4b:
          pbStack_1b8 = pbVar7 + 1;
          bVar4 = *pbVar7;
          if ((bVar4 & 1) == 0) goto LAB_0d25ad5c;
LAB_0d25ad7d:
          puStack_1b0 = *(undefined **)(pbVar7 + 8);
        }
        else {
          uVar8 = *(undefined8 *)(pbVar21 + 8);
          bStack_170 = (byte)uVar8;
          uStack_16f = (undefined1)((ulong)uVar8 >> 8);
          uStack_16e = (undefined6)((ulong)uVar8 >> 0x10);
          if ((*pbVar7 & 1) == 0) goto LAB_0d25ad4b;
LAB_0d25ad6c:
          pbStack_1b8 = *(byte **)(pbVar7 + 0x10);
          bVar4 = *pbVar7;
          if ((bVar4 & 1) != 0) goto LAB_0d25ad7d;
LAB_0d25ad5c:
          puStack_1b0 = (undefined *)(ulong)(bVar4 >> 1);
        }
        func_0x041aaf20(auStack_48,&bStack_178,&pbStack_1b8);
        uVar25 = (uint)uVar14;
        if ((bVar3 & 1) == 0) {
          uVar25 = (uint)(bVar3 >> 1);
        }
        auStack_d8._4_4_ = auStack_d8._4_4_ + uVar25;
        auStack_d8._0_4_ = auStack_d8._0_4_ + _DAT_014e66f0;
        auStack_d8._8_4_ = auStack_d8._8_4_ + _UNK_014e66f4;
        pbVar21 = pbVar21 + 0x30;
      } while (pbVar21 != (byte *)uVar10);
LAB_0d25addc:
      auVar30._0_8_ = auStack_d8._0_8_ & 0xffffffff;
      auVar30._8_4_ = auStack_d8._4_4_;
      auVar30._12_4_ = 0;
      lVar27 = param_1[6];
      auVar11 = auStack_d8;
    }
    auStack_d8 = auVar30;
    if ((lVar27 != 0) && (param_1[4] != 0)) {
      lVar27 = func_0x0417cc60();
      (**(code **)(*(long *)param_1[6] + 0x20))
                (&lStack_110,(long *)param_1[6],param_1[4] + 0x88,auStack_48);
      lVar18 = func_0x0417cc60();
      if (lStack_110 == 0) {
        FUN_0412d680(param_1 + 0x76);
        param_1[0x6c] = auStack_d8._0_8_ + param_1[0x6c];
        param_1[0x6d] = auStack_d8._8_8_ + param_1[0x6d];
        param_1[0x6e] = param_1[0x6e] + (lVar18 - lVar27);
        func_0x0d2206a0(param_1 + 0x6c);
        func_0x0412d6b0(param_1 + 0x76);
        if (lStack_110 != 0) goto LAB_0d25aeed;
        if (*(char *)((long)param_1 + 0x291) == '\x01') {
          *(undefined4 *)(param_1 + 0xd) = 1;
          if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
            *(undefined1 *)(param_1 + 0xe) = 0x1c;
            puVar16 = (undefined8 *)((long)param_1 + 0x71);
          }
          else {
            param_1[0xf] = 0xe;
            puVar16 = (undefined8 *)param_1[0x10];
          }
          *(undefined8 *)((long)puVar16 + 6) = 0x646574707572726f;
          *puVar16 = 0x726f436563726f46;
          *(undefined1 *)((long)puVar16 + 0xe) = 0;
        }
        uVar20 = 0;
        uVar24 = 0;
      }
      else {
LAB_0d25aeed:
        *(undefined4 *)(param_1 + 0xd) = 1;
        if (*(char *)(lStack_110 + 4) == '\x01') {
          bStack_178 = 0x10;
          uStack_177 = 0x6e756f46746f4e;
          bStack_170 = 100;
          uStack_16f = 0;
        }
        else {
          func_0x041b3ad0(&bStack_178,&lStack_110);
        }
        if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
          func_0x0412a280(param_1[0x10],param_1[0xe] & 0xfffffffffffffffe);
        }
        param_1[0x10] = lStack_168;
        param_1[0xe] = CONCAT71(uStack_177,bStack_178);
        param_1[0xf] = CONCAT62(uStack_16e,CONCAT11(uStack_16f,bStack_170));
        auStack_98._0_16_ = (undefined1  [16])0x0;
        pbVar21 = (byte *)(**(code **)(*param_1 + 0x50))(param_1);
        bVar29 = (*pbVar21 & 1) != 0;
        pbStack_1b8 = pbVar21 + 1;
        if (bVar29) {
          pbStack_1b8 = *(byte **)(pbVar21 + 0x10);
        }
        puStack_1b0 = (undefined *)(ulong)(*pbVar21 >> 1);
        if (bVar29) {
          puStack_1b0 = (undefined *)*(ulong *)(pbVar21 + 8);
        }
        func_0x0ee599d0(&bStack_178,auStack_98,&pbStack_1b8);
        pbStack_1b8 = (byte *)0x2d89be07eda29514;
        puStack_1b0 = &UNK_0140f690;
        puStack_1a8 = (undefined *)0x1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x3b6);
        if (bStack_138 == 0) {
          bStack_198 = 0;
          uStack_197 = 0;
          lStack_190 = 0;
          lStack_188 = 0;
          FUN_0eedeb80(0x100000008,0x2d,&bStack_178,&bStack_198,&pbStack_1b8);
          if ((bStack_198 & 1) != 0) {
            func_0x0412a280(lStack_188,CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
          }
          if ((bStack_138 & 1) == 0) goto LAB_0d25b05b;
LAB_0d25afed:
          if (lStack_110 == 0) goto LAB_0d25b0bc;
LAB_0d25b072:
          if (*(char *)(lStack_110 + 4) == '\x02') {
            func_0x041b3ad0(&bStack_b0,&lStack_110);
            uVar15 = (ulong)(bStack_b0 >> 1);
            puVar9 = &uStack_af;
            if ((bStack_b0 & 1) != 0) {
              uVar15 = uStack_a8;
              puVar9 = puStack_a0;
            }
            auStack_e8 = (undefined1  [16])0x0;
            pbVar21 = (byte *)(**(code **)(*param_1 + 0x50))();
            bVar29 = (*pbVar21 & 1) != 0;
            pbStack_1b8 = pbVar21 + 1;
            if (bVar29) {
              pbStack_1b8 = *(byte **)(pbVar21 + 0x10);
            }
            puStack_1b0 = (undefined *)(ulong)(*pbVar21 >> 1);
            if (bVar29) {
              puStack_1b0 = (undefined *)*(ulong *)(pbVar21 + 8);
            }
            puStack_1a8 = &UNK_013d7958;
            uStack_1a0 = 0xd;
            func_0x048ad670(auStack_108,&pbStack_1b8,2,0x2f);
            bVar29 = (auStack_108[0] & 1) != 0;
            pbVar21 = auStack_108 + 1;
            if (bVar29) {
              pbVar21 = pbStack_f8;
            }
            uVar22 = (ulong)(auStack_108[0] >> 1);
            if (bVar29) {
              uVar22 = auStack_108._8_8_;
            }
            if ((DAT_0f7b8fb8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f7b8fb8), iVar12 != 0)) {
              func_0x0ee5ea20(&DAT_0f7b8f98);
              func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
              func_0x0410844d(&DAT_0f7b8fb8);
            }
            pbStack_1b8 = pbVar21;
            puStack_1b0 = (undefined *)uVar22;
            (**(code **)(_DAT_0f7b8f98 + 0x10))
                      (&bStack_178,&DAT_0f7b8f98,&pbStack_1b8,auStack_e8,0x12e,0);
            pbStack_1b8 = (byte *)0x2d89be07eda29514;
            puStack_1b0 = &UNK_0140f690;
            puStack_1a8 = (undefined *)0x1;
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x38b);
            if (bStack_138 == 0) {
              bStack_198 = 0;
              uStack_197 = 0;
              lStack_190 = 0;
              lStack_188 = 0;
              FUN_0eedeb80(0x100000008,0x2d,&bStack_178,&bStack_198,&pbStack_1b8);
              if ((bStack_198 & 1) != 0) {
                func_0x0412a280(lStack_188,CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
              }
              if ((bStack_138 & 1) == 0) goto LAB_0d25b40e;
LAB_0d25b259:
            }
            else {
              if ((bStack_138 & 1) != 0) goto LAB_0d25b259;
LAB_0d25b40e:
              func_0x048e6d60(&bStack_178);
            }
            if ((auStack_108[0] & 1) != 0) {
              func_0x0412a280(pbStack_f8,auStack_108._0_8_ & 0xfffffffffffffffe);
            }
            func_0x0ee76e70(&bStack_178,auStack_e8._0_8_,puVar9,uVar15);
            pbStack_1b8 = (byte *)0x2d89be07eda29514;
            puStack_1b0 = &UNK_0140f690;
            puStack_1a8 = (undefined *)0x1;
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x38e);
            if (bStack_138 == 0) {
              bStack_198 = 0;
              uStack_197 = 0;
              lStack_190 = 0;
              lStack_188 = 0;
              FUN_0eedeb80(2,0x2d,&bStack_178,&bStack_198,&pbStack_1b8);
              if ((bStack_198 & 1) != 0) {
                func_0x0412a280(lStack_188,CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
              }
            }
            if ((bStack_138 & 1) == 0) {
              func_0x048e6d60(&bStack_178);
            }
            func_0x0ee56810(&bStack_178,auStack_e8);
            pbStack_1b8 = (byte *)0x2d89be07eda29514;
            puStack_1b0 = &UNK_0140f690;
            puStack_1a8 = (undefined *)0x1;
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x390);
            if (bStack_138 == 0) {
              bStack_198 = 0;
              uStack_197 = 0;
              lStack_190 = 0;
              lStack_188 = 0;
              FUN_0eedeb80(0x100000008,0x2d,&bStack_178,&bStack_198,&pbStack_1b8);
              if ((bStack_198 & 1) != 0) {
                func_0x0412a280(lStack_188,CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
              }
              if ((bStack_138 & 1) == 0) goto LAB_0d25b48b;
LAB_0d25b366:
            }
            else {
              if ((bStack_138 & 1) != 0) goto LAB_0d25b366;
LAB_0d25b48b:
              func_0x048e6d60(&bStack_178);
            }
            if ((auStack_e8._0_8_ != 0) &&
               (func_0x0ee56810(&bStack_178,auStack_e8), bStack_138 == 0)) {
              func_0x048e6d60(&bStack_178);
            }
            uVar10 = auStack_e8._8_8_;
            auStack_e8._8_8_ = 0;
            if ((long *)uVar10 != (long *)0x0) {
              (**(code **)(*(long *)uVar10 + 8))();
            }
            uVar10 = auStack_e8._0_8_;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = auStack_e8._8_8_;
            auStack_e8 = auVar11 << 0x40;
            if ((long *)uVar10 != (long *)0x0) {
              (**(code **)(*(long *)uVar10 + 8))();
            }
            if ((bStack_b0 & 1) != 0) {
              func_0x0412a280(puStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
            }
            goto LAB_0d25b0cc;
          }
          if (*(char *)(lStack_110 + 4) != '\x05') goto LAB_0d25b0bc;
          uVar10 = auStack_98._0_8_;
          func_0x0ee5bf30(auStack_98._0_8_);
          uVar24 = 0x100;
          uVar20 = 1;
          if ((*(byte *)(uVar10 + 0x18a) & 1) == 0) {
            LOCK();
            *(undefined1 *)(auStack_98._0_8_ + 0x18b) = 1;
            UNLOCK();
            uVar20 = 0;
          }
        }
        else {
          if ((bStack_138 & 1) != 0) goto LAB_0d25afed;
LAB_0d25b05b:
          func_0x048e6d60(&bStack_178);
          if (lStack_110 != 0) goto LAB_0d25b072;
LAB_0d25b0bc:
          LOCK();
          *(undefined1 *)(auStack_98._0_8_ + 0x18b) = 1;
          UNLOCK();
LAB_0d25b0cc:
          uVar20 = 0;
          uVar24 = 0;
        }
        uVar10 = auStack_98._8_8_;
        if ((long *)auStack_98._8_8_ != (long *)0x0) {
          LOCK();
          plVar17 = (long *)(auStack_98._8_8_ + 8);
          lVar27 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar27 == 0) {
            (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
            func_0x0412c2d0(uVar10);
          }
        }
      }
      if ((param_1[0x65] != 0) && ((int)param_1[0xd] == 1)) {
        func_0x0d21fff0(param_1[0x65],param_1 + 0xe,uVar24 | uVar20);
      }
      auVar11 = auStack_d8;
      if (lStack_110 != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
        auVar11 = auStack_d8;
      }
    }
    auStack_d8 = auVar11;
    func_0x041aabf0(auStack_48);
    FUN_0412d450(pbStack_b8);
    uVar10 = auStack_128._8_8_;
    if (auStack_128._0_8_ == auStack_128._8_8_) {
      bVar29 = false;
    }
    else {
      auStack_d8._0_8_ = param_1 + 0x56;
      lVar27 = auStack_128._0_8_;
      bVar23 = false;
      do {
        plVar17 = (long *)func_0x0d1e8520(param_1 + 0x5a,lVar27);
        if (plVar17 == plStack_80) {
          lVar2 = param_1[99];
          for (lVar18 = param_1[0x62]; bVar29 = bVar23, lVar18 != lVar2; lVar18 = lVar18 + 0x60) {
            plVar17 = (long *)func_0x0d1e8520(lVar18 + 0x20,lVar27);
            if ((long *)(lVar18 + 0x28) != plVar17) goto LAB_0d25b635;
          }
        }
        else {
          lVar18 = auStack_d8._0_8_;
LAB_0d25b635:
          bVar29 = true;
          if ((plVar17[7] == *(long *)(lVar27 + 0x18)) &&
             ((char)plVar17[9] == *(char *)(lVar27 + 0x2c))) {
            func_0x0d1e8700(lVar18 + 0x20,plVar17);
            bVar29 = bVar23;
          }
        }
        lVar27 = lVar27 + 0x30;
        bVar23 = bVar29;
      } while (lVar27 != uVar10);
    }
    puVar28 = (undefined8 *)param_1[99];
    for (puVar16 = (undefined8 *)param_1[0x62]; (puVar16 != puVar28 && (puVar16[6] != 0));
        puVar16 = puVar16 + 0xc) {
    }
    puVar26 = puVar16 + 0xc;
    if (puVar26 == puVar28 || puVar16 == puVar28) {
      if (puVar16 != puVar28) {
joined_r0x0d25b7ad:
        while (puVar16 != puVar28) {
          puVar28 = puVar28 + -0xc;
          (**(code **)*puVar28)(puVar28);
        }
        param_1[99] = (long)puVar16;
      }
    }
    else {
      do {
        if (puVar26[6] != 0) {
          func_0x0d266160(puVar16,puVar26);
          puVar16 = puVar16 + 0xc;
        }
        puVar26 = puVar26 + 0xc;
      } while (puVar26 != puVar28);
      puVar28 = (undefined8 *)param_1[99];
      if (puVar16 != puVar28) goto joined_r0x0d25b7ad;
    }
    func_0x0412d520(pbStack_b8);
    func_0x0412d6b0(plStack_c0);
    uVar10 = auStack_128._0_8_;
    for (lVar27 = auStack_128._8_8_; uVar10 != lVar27; lVar27 = lVar27 + -0x30) {
      plVar17 = *(long **)(lVar27 + -0x10);
      if (plVar17 == (long *)0x0) {
LAB_0d25b9c7:
        bVar3 = *(byte *)(lVar27 + -0x30);
      }
      else {
        LOCK();
        plVar6 = plVar17 + 1;
        lVar18 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar18 != 0) goto LAB_0d25b9c7;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
        bVar3 = *(byte *)(lVar27 + -0x30);
      }
      if ((bVar3 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar27 + -0x20),
                        *(ulong *)(lVar27 + -0x30) & 0xfffffffffffffffe);
      }
    }
    auStack_128._8_8_ = uVar10;
    lVar27 = func_0x0417cc60();
    if (param_1[0x6a] <= lVar27) {
      lVar18 = param_1[0x69];
      FUN_0412d680(lVar18 + 0xe0);
      func_0x0d225970(lVar18 + 0x98,*(undefined8 *)(lVar18 + 0x78),lVar18 + 0x80);
      *(undefined8 *)(lVar18 + 0xb0) = *(undefined8 *)(lVar18 + 0x90);
      func_0x0d225970(lVar18 + 0x78,*(undefined8 *)(lVar18 + 0x58),lVar18 + 0x60);
      *(undefined8 *)(lVar18 + 0x90) = *(undefined8 *)(lVar18 + 0x70);
      lVar27 = lVar18 + 0x40;
      func_0x0d225970(lVar18 + 0x58,*(undefined8 *)(lVar18 + 0x38),lVar27);
      *(undefined8 *)(lVar18 + 0x70) = *(undefined8 *)(lVar18 + 0x50);
      func_0x0d1fdc60(&bStack_178,lVar18);
      pbStack_1b8 = (byte *)0x2de3e3af224fcdfa;
      puStack_1b0 = &UNK_0140f690;
      puStack_1a8 = (undefined *)0x1;
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x2b);
      if (bStack_138 == 0) {
        auStack_108 = (undefined1  [16])0x0;
        pbStack_f8 = (byte *)0x0;
        FUN_0eedeb80(2,0x2d,&bStack_178,auStack_108,&pbStack_1b8);
        if ((auStack_108[0] & 1) != 0) {
          func_0x0412a280(pbStack_f8,auStack_108._0_8_ & 0xfffffffffffffffe);
        }
      }
      if ((bStack_138 & 1) == 0) {
        lStack_190 = 0;
        lStack_188 = 0;
        bStack_198 = (byte)&lStack_190;
        uStack_197 = (undefined7)((ulong)&lStack_190 >> 8);
        uStack_180 = 0;
      }
      else {
        lStack_190 = CONCAT62(uStack_16e,CONCAT11(uStack_16f,bStack_170));
        bStack_198 = bStack_178;
        uStack_197 = uStack_177;
        lStack_188 = lStack_168;
        if (lStack_168 == 0) {
          bStack_198 = (byte)&lStack_190;
          uStack_197 = (undefined7)((ulong)&lStack_190 >> 8);
        }
        else {
          *(long **)(lStack_190 + 0x10) = &lStack_190;
          bStack_178 = (byte)&bStack_170;
          uStack_177 = (undefined7)((ulong)&bStack_170 >> 8);
          bStack_170 = 0;
          uStack_16f = 0;
          uStack_16e = 0;
          lStack_168 = 0;
        }
        uStack_180 = auStack_160._0_8_;
      }
      func_0x0d225920((long *)(lVar18 + 0x38),*(undefined8 *)(lVar18 + 0x40));
      *(ulong *)(lVar18 + 0x38) = CONCAT71(uStack_197,bStack_198);
      *(long *)(lVar18 + 0x40) = lStack_190;
      *(long *)(lVar18 + 0x48) = lStack_188;
      if (lStack_188 == 0) {
        *(long *)(lVar18 + 0x38) = lVar27;
      }
      else {
        *(long *)(lStack_190 + 0x10) = lVar27;
        bStack_198 = (byte)&lStack_190;
        uStack_197 = (undefined7)((ulong)&lStack_190 >> 8);
        lStack_190 = 0;
        lStack_188 = 0;
      }
      *(undefined8 *)(lVar18 + 0x50) = uStack_180;
      func_0x0d225920(&bStack_198,lStack_190);
      if (bStack_138 == 1) {
        func_0x0d225920(&bStack_178,CONCAT62(uStack_16e,CONCAT11(uStack_16f,bStack_170)));
      }
      else {
        func_0x048e6d60(&bStack_178);
      }
      func_0x0412d6b0(lVar18 + 0xe0);
      if (param_1[0x65] != 0) {
        func_0x0d2202e0(param_1[0x65],param_1[0x69],1);
      }
      lVar27 = func_0x0417cc60();
      param_1[0x6a] = lVar27 + param_1[0x6b];
    }
    if ((~*(byte *)((long)param_1 + 0x1d4) & 1) != 0 || bVar29) {
      lVar27 = param_1[0x39];
      lVar18 = func_0x0417cc60();
      unaff_R14 = (long *)(lVar18 + lVar27);
      unaff_RBP = (long *)0x0;
      lVar27 = auStack_128._0_8_;
    }
    else {
      unaff_RBP = (long *)(ulong)DAT_0f778530;
      unaff_R14 = _DAT_0f778538;
      lVar27 = auStack_128._0_8_;
    }
  }
  if (lVar27 != 0) {
    lVar18 = auStack_128._8_8_;
    if (lVar27 != auStack_128._8_8_) {
      do {
        plVar17 = *(long **)(lVar18 + -0x10);
        if (plVar17 == (long *)0x0) {
LAB_0d25bb94:
          bVar3 = *(byte *)(lVar18 + -0x30);
        }
        else {
          LOCK();
          plVar6 = plVar17 + 1;
          lVar2 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar2 != 0) goto LAB_0d25bb94;
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
          bVar3 = *(byte *)(lVar18 + -0x30);
        }
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                          *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
        }
        lVar18 = lVar18 + -0x30;
      } while (lVar18 != lVar27);
      lVar27 = auStack_128._0_8_;
    }
    func_0x0412a280(lVar27,(long)puStack_118 - lVar27);
  }
LAB_0d25a6c8:
  auVar31._0_8_ = (ulong)unaff_RBP & 0xffffffff;
  auVar31._8_8_ = unaff_R14;
  return auVar31;
}


