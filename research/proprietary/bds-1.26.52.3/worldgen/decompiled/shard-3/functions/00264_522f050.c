/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x532f050 (ELF vaddr 0x522f050)
 * Label: caller-of-callee
 * Body:  [[0532f050, 0532f0c1] [0532f0d0, 0532f1fc] [0532f200, 0532f21d] [0532f220, 0532f291] [0532f2a0, 0532f4ae] [0532f4b0, 0532f51c] [0532f520, 0532f656] [0532f660, 0532f715] [0532f720, 0532fa5d] [0532fa60, 0532fad0] [0532fae0, 0532fb4b] [0532fb50, 0532fd5e] [0532fd60, 05330272] [05330280, 0533029e] [053302a0, 053303a2] [053303b0, 05330465] [05330470, 0533052e] [05330530, 05330564] [05330570, 0533061d] [05330620, 05330bb8] [05330bc0, 053327b7] [053327c0, 053328fe] [05332900, 05332984] [053329b6, 053329db] [05332bc3, 05332bcd] [05332c08, 05332c16] [05332c2c, 05332c75] [05332cdd, 05332cea]]
 * Ghidra: FUN_0532f050
 */


/* WARNING: Removing unreachable block (ram,0x053301ed) */
/* WARNING: Removing unreachable block (ram,0x05330200) */
/* WARNING: Removing unreachable block (ram,0x0533024b) */
/* WARNING: Removing unreachable block (ram,0x053302e2) */
/* WARNING: Removing unreachable block (ram,0x053302f0) */
/* WARNING: Removing unreachable block (ram,0x0533033b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0532f050(long param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined1 (*pauVar19) [16];
  long *plVar20;
  long *plVar21;
  long *plVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  long *plVar25;
  ushort uVar26;
  int iVar27;
  ulong uVar28;
  undefined1 (*pauVar29) [16];
  byte *pbVar30;
  long *plVar31;
  undefined1 (*pauVar32) [16];
  uint uVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  ulong uVar36;
  undefined1 (*pauVar37) [16];
  undefined7 *puVar38;
  undefined7 *puVar39;
  ulong uVar40;
  byte *pbVar41;
  byte bVar42;
  byte *pbVar43;
  byte *pbVar44;
  short sVar45;
  int iVar46;
  long *in_FS_OFFSET;
  bool bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  byte bStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined2 uStack_30f;
  undefined1 uStack_30d;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  byte bStack_300;
  undefined7 uStack_2ff;
  undefined8 uStack_2f0;
  byte bStack_2e8;
  undefined7 uStack_2e7;
  undefined8 uStack_2d8;
  byte bStack_2d0;
  undefined7 uStack_2cf;
  ulong uStack_2c8;
  undefined7 *puStack_2c0;
  byte bStack_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a0;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  byte *pbStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  byte *pbStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  byte *pbStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  byte bStack_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1e8;
  byte bStack_1e0;
  undefined7 uStack_1df;
  ulong uStack_1d8;
  undefined7 *puStack_1d0;
  byte bStack_1c0;
  undefined7 uStack_1bf;
  undefined8 uStack_1b0;
  byte bStack_198;
  undefined7 uStack_197;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  undefined8 uStack_188;
  ulong uStack_180;
  byte *pbStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long *plStack_c0;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x6d) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0x6c) == '*') {
    return;
  }
  lVar14 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) * 0x4ec4ec4ec4ec4ec5 + -1;
  if ((short)lVar14 < 0) {
    pbVar23 = (byte *)0x0;
  }
  else {
    do {
      lVar16 = lVar14;
      uVar33 = (uint)lVar16;
      lVar14 = (ulong)(uVar33 & 0x7fff) * 0x68 + *(long *)(param_1 + 0x108);
      if ((_DAT_0f6ffb10 == (long *)0x0) &&
         (cVar9 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
         cVar9 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar15 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
      plVar18 = *(long **)(lVar14 + 0x30);
      cVar9 = (**(code **)(*plVar18 + 0x18))(plVar18,uVar15);
      if ((cVar9 == '\0') ||
         ((plVar18 = *(long **)(lVar14 + 0x38), plVar18 != (long *)0x0 &&
          (cVar9 = (**(code **)(*plVar18 + 0x18))(plVar18,uVar15), cVar9 == '\0'))))
      goto LAB_0532f17c;
      lVar14 = lVar16 + -1;
    } while (-1 < (short)(lVar16 + -1));
    uVar33 = (uint)CONCAT62((int6)((ulong)lVar16 >> 0x10),0xffff);
LAB_0532f17c:
    pbVar23 = (byte *)(ulong)(uVar33 * 0x10 + 0x10);
  }
  uStack_38 = func_0x0cc422f0(0xf6ff9e0,0xf714e98,0,0,0);
  uVar15 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
  uStack_338 = (undefined *)((ulong)uStack_338 & 0xffffffffffffff00);
  if (0 < (short)pbVar23) {
    uStack_288 = (undefined8 *)(param_1 + 0x13d0);
    pbStack_258 = pbVar23;
LAB_0532f1f6:
    uStack_338._0_2_ = (ushort)(byte)uStack_338;
LAB_0532f213:
    uStack_338._0_4_ = (uint)(ushort)uStack_338;
    uVar33 = 0;
LAB_0532f232:
    uVar28 = (ulong)(short)((uint)(int)(short)uVar33 >> 4);
    lVar14 = *(long *)(param_1 + 0x108);
    uVar36 = (*(long *)(param_1 + 0x110) - lVar14 >> 3) * 0x4ec4ec4ec4ec4ec5;
    if ((uVar36 < uVar28 || uVar36 - uVar28 == 0) ||
       (plVar18 = *(long **)(lVar14 + 0x30 + uVar28 * 0x68), plVar18 == (long *)0x0)) {
      if ((_DAT_0f6ffb10 == (long *)0x0) &&
         (cVar9 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
         cVar9 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      lVar14 = *(long *)(*_DAT_0f6ffb10 + 0x200);
    }
    else {
      iVar27 = (uint)uStack_338._1_1_ * 0x10 + (uVar33 & 0xf | (uint)(byte)uStack_338 << 8);
      lVar14 = (**(code **)(*plVar18 + 0x20))(plVar18,(short)iVar27,lVar14,iVar27);
    }
    iVar46 = (uint)(byte)uStack_338 + *(int *)(param_1 + 0x38);
    uVar33 = (int)(short)uStack_338._2_2_ + *(int *)(param_1 + 0x3c);
    iVar27 = (uint)uStack_338._1_1_ + *(int *)(param_1 + 0x40);
    puStack_170 = (undefined *)CONCAT44(uVar33,iVar46);
    uStack_168 = CONCAT44(uStack_168._4_4_,iVar27);
    plVar18 = *(long **)(lVar14 + 0x68);
    plVar21 = (long *)plVar18[0x19];
    if (plVar21 == _DAT_0f7149f0) {
      lVar16 = func_0x0cb18130(uStack_288,&uStack_338);
      if ((lVar16 == 0) || (*(long *)(lVar16 + 0x18) == 0)) {
        lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf0);
        if (lVar16 == 0) {
          FUN_0eec74c0(0xf0,0);
        }
        func_0x0cf6f810(lVar16,&puStack_170);
        *(undefined4 *)(lVar16 + 0xd8) = 0xe;
        *(byte *)(lVar16 + 0x4c) = *(byte *)(lVar16 + 0x4c) | 1;
        uVar17 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f7149f0,1);
        lStack_48 = lVar16;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (plVar18 == (long *)0x0) {
          FUN_0eec74c0(0x20,0);
        }
        plVar18[1] = 0;
        plVar18[2] = 0;
        *plVar18 = (long)&UNK_0efa5060;
        plVar18[3] = lVar16;
        lStack_218 = 0;
        pbStack_210 = (byte *)0x0;
        uStack_228 = (undefined *)0x0;
        puStack_220 = (undefined8 *)0x0;
        plStack_208 = (long *)0x1;
        plStack_40 = plVar18;
        func_0x0cadcf50(param_1,&uStack_338,uVar15,uVar17,0,&lStack_48,&uStack_228);
        plVar18 = plStack_40;
        pbVar23 = pbStack_258;
        if (plStack_40 != (long *)0x0) {
          LOCK();
          plVar21 = plStack_40 + 1;
          lVar16 = *plVar21;
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (lVar16 == 0) {
            (**(code **)(*plStack_40 + 0x10))(plStack_40);
            func_0x0412c2d0(plVar18);
          }
        }
      }
    }
    else {
      uVar12 = *(ushort *)(param_1 + 0x6c);
      bVar10 = (byte)uVar12;
      if (plVar21 == _DAT_0f7168e8) {
        if ((((((byte)(uVar12 >> 8) & '\x0f' < (char)bVar10) == 0) &&
             (lVar16 = func_0x0cb18130(uStack_288,&uStack_338), lVar16 != 0)) &&
            (plVar18 = *(long **)(lVar16 + 0x18), plVar18 != (long *)0x0)) &&
           (cVar9 = (**(code **)(*plVar18 + 0x88))(plVar18,0x12), cVar9 != '\0')) {
          *(undefined1 *)((long)plVar18 + 0xea) = 1;
        }
        goto LAB_0532f790;
      }
      if ((char)bVar10 < '\x13' || (uVar12 & 0x100) == 0) {
        plVar22 = (long *)((long)_DAT_0f70d530 - (long)_DAT_0f70d528);
        plVar20 = _DAT_0f70d530;
        if ((plVar22 != (long *)0xfffffffffffffff8) &&
           (plVar22 = (long *)CONCAT71((int7)((ulong)plVar22 >> 8),_DAT_0f70d528 == (long *)0x0),
           _DAT_0f70d528 != (long *)0x0 || _DAT_0f70d530 == (long *)0x0)) {
          plVar20 = _DAT_0f70d528;
          if (_DAT_0f70d530 == _DAT_0f70d528) {
LAB_0532f5bf:
            if (plVar20 == _DAT_0f70d530) goto LAB_0532f5c4;
          }
          else {
            do {
              plVar22 = (long *)*plVar20;
              if (plVar21 == (long *)*plVar22) goto LAB_0532f5bf;
              plVar20 = plVar20 + 1;
            } while (plVar20 != _DAT_0f70d530);
LAB_0532f5c4:
            if (plVar21 != _DAT_0f714b70) {
              cVar9 = (**(code **)(*plVar18 + 0xb0))();
              if (cVar9 != '\0') {
                func_0x05332cf0(param_2,puStack_170,uStack_168 & 0xffffffff,lVar14);
              }
              goto LAB_0532f790;
            }
          }
          puStack_220 = (undefined8 *)CONCAT44(puStack_220._4_4_,iVar27);
          uVar13 = uVar33 + 1;
          bStack_318 = (byte)iVar46;
          bVar10 = bStack_318;
          uStack_317 = (undefined7)(CONCAT44(uVar13,iVar46) >> 8);
          uStack_310 = (undefined1)iVar27;
          uVar4 = uStack_310;
          uStack_30f = (undefined2)((uint)iVar27 >> 8);
          uVar5 = uStack_30f;
          uStack_30d = (undefined1)((uint)iVar27 >> 0x18);
          uVar6 = uStack_30d;
          plVar18 = param_2;
          uStack_228 = puStack_170;
          lVar16 = (**(code **)(*param_2 + 0x10))(param_2,&bStack_318);
          plVar21 = _DAT_0f70d528;
          plVar20 = (long *)((long)_DAT_0f70d530 - (long)_DAT_0f70d528);
          if ((long *)((long)_DAT_0f70d530 - (long)_DAT_0f70d528) != (long *)0xfffffffffffffff8) {
            plVar20 = (long *)(ulong)uVar33;
            do {
              plVar25 = (long *)(ulong)uVar13;
              plVar18 = (long *)CONCAT71((int7)((ulong)plVar18 >> 8),_DAT_0f70d528 == (long *)0x0);
              plVar22 = (long *)CONCAT71((int7)((ulong)plVar22 >> 8),_DAT_0f70d530 != (long *)0x0);
              plVar21 = _DAT_0f70d528;
              if (_DAT_0f70d528 == (long *)0x0 && _DAT_0f70d530 != (long *)0x0) break;
              if (_DAT_0f70d530 == _DAT_0f70d528) {
LAB_0532f660:
                plVar18 = *(long **)(*(long *)(lVar16 + 0x68) + 200);
              }
              else {
                plVar18 = *(long **)(*(long *)(lVar16 + 0x68) + 200);
                do {
                  plVar22 = (long *)*plVar21;
                  if (plVar18 == (long *)*plVar22) {
                    if (plVar21 != _DAT_0f70d530) goto LAB_0532f679;
                    goto LAB_0532f660;
                  }
                  plVar21 = plVar21 + 1;
                } while (plVar21 != _DAT_0f70d530);
              }
              if (plVar18 != _DAT_0f714b70) goto LAB_0532f733;
LAB_0532f679:
              uStack_228 = (undefined *)CONCAT44(uVar13,(undefined4)uStack_228);
              uVar13 = uVar13 + 1;
              uStack_317 = (undefined7)(CONCAT44(uVar13,iVar46) >> 8);
              bStack_318 = bVar10;
              uStack_310 = uVar4;
              uStack_30f = uVar5;
              uStack_30d = uVar6;
              lVar16 = (**(code **)(*param_2 + 0x10))(param_2,&bStack_318);
              plVar18 = (long *)((long)_DAT_0f70d530 - (long)_DAT_0f70d528);
              plVar21 = _DAT_0f70d528;
              plVar20 = plVar25;
              if (plVar18 == (long *)0xfffffffffffffff8) break;
            } while( true );
          }
        }
        auVar48 = func_0x04890760();
        goto LAB_0532faaf;
      }
      if ((bVar10 < 0x14) && ((*(byte *)(plVar18 + 0x21) & 0x10) != 0)) {
        puStack_220 = (undefined8 *)CONCAT44(puStack_220._4_4_,iVar27);
        uStack_228 = puStack_170;
        func_0x0c666f20(plVar18,param_2,&uStack_228);
      }
    }
    goto LAB_0532f790;
  }
LAB_0532fa0e:
  iVar27 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  if (iVar27 == 2) {
    lVar14 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
    plVar21 = *(long **)(lVar14 + 0x380);
    plVar25 = *(long **)(lVar14 + 0x388);
    if ((long)plVar25 - (long)plVar21 != 0) {
      plVar31 = plVar25;
      plVar22 = (long *)((long)plVar25 - (long)plVar21 >> 3);
      do {
        while( true ) {
          auVar48._8_8_ = plVar31;
          auVar48._0_8_ = plVar25;
          plVar18 = (long *)((ulong)plVar22 >> 1);
          plVar20 = plVar21 + (long)plVar18;
          if (*(ushort *)(plVar21[(long)plVar18] + 0x168) < 9) break;
          if (*(ushort *)(plVar21[(long)plVar18] + 0x168) == 9) goto LAB_0532faaf;
          plVar31 = plVar20;
          plVar22 = plVar18;
          if (plVar18 == (long *)0x0) goto LAB_0532fc90;
        }
        plVar21 = plVar20 + 1;
        plVar22 = (long *)(~(ulong)plVar18 + (long)plVar22);
      } while (plVar22 != (long *)0x0);
    }
  }
LAB_0532fc90:
  if (((byte)((ushort)*(undefined2 *)(param_1 + 0x6c) >> 8) &
      '\x01' < (char)*(undefined2 *)(param_1 + 0x6c)) == 0) {
    lVar14 = (**(code **)(**(long **)(param_1 + 0x28) + 0x568))();
    if (*(char *)(lVar14 + 0x55c) == '\x01') {
      iVar27 = *(int *)(lVar14 + 0x558);
    }
    else {
      lVar16 = func_0x0d2279e0(lVar14 + 0x518,0xf71d720);
      if (((lVar16 == 0) && (lVar16 = func_0x0d2279e0(lVar14 + 0x4f0,0xf71d720), lVar16 == 0)) ||
         (*(int *)(lVar16 + 0x50) != 4)) goto LAB_0532fffc;
      iVar27 = *(int *)(lVar16 + 0x38);
    }
    if (iVar27 == 2) {
      lVar14 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
      plVar18 = *(long **)(lVar14 + 0x380);
      plVar21 = *(long **)(lVar14 + 0x388);
      if ((long)plVar21 - (long)plVar18 != 0) {
        plVar20 = plVar21;
        uVar28 = (long)plVar21 - (long)plVar18 >> 3;
LAB_0532fd79:
        do {
          uVar36 = uVar28 >> 1;
          plVar22 = plVar18 + uVar36;
          if (*(short *)(plVar18[uVar36] + 0x168) == 0) goto LAB_0532fd60;
          if (*(short *)(plVar18[uVar36] + 0x168) == 1) {
            if (uVar28 != 1) {
              do {
                uVar28 = uVar36 >> 1;
                if (*(short *)(plVar18[uVar28] + 0x168) == 0) {
                  plVar18 = plVar18 + uVar28 + 1;
                  uVar28 = ~uVar28 + uVar36;
                }
                uVar36 = uVar28;
              } while (uVar28 != 0);
            }
            lVar14 = (long)plVar20 - (long)(plVar22 + 1);
            if (lVar14 != 0) {
              plVar20 = plVar22 + 1;
              uVar28 = lVar14 >> 3;
              do {
                uVar36 = uVar28 >> 1;
                if (*(ushort *)(plVar20[uVar36] + 0x168) < 2) {
                  plVar20 = plVar20 + uVar36 + 1;
                  uVar36 = ~uVar36 + uVar28;
                }
                uVar28 = uVar36;
              } while (uVar36 != 0);
            }
            if (((plVar18 != plVar20) && (plVar18 != plVar21)) && (lVar14 = *plVar18, lVar14 != 0))
            {
              uStack_228 = (undefined *)((ulong)uStack_228 & 0xffffffff00000000);
              cVar9 = '\x01';
              do {
                uStack_228._0_2_ = (ushort)(byte)uStack_228;
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(1,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(2,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(3,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(4,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(5,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(6,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(7,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(8,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(9,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(10,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(0xb,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(0xc,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(0xd,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(0xe,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228._0_2_ = CONCAT11(0xf,(byte)uStack_228);
                func_0x0caf8430(param_1,lVar14,&uStack_228,1);
                uStack_228 = (undefined *)CONCAT62(uStack_228._2_6_,0x1000);
                uStack_228 = (undefined *)CONCAT71(uStack_228._1_7_,cVar9);
                cVar9 = cVar9 + '\x01';
              } while (cVar9 != '\x11');
            }
            break;
          }
          plVar20 = plVar22;
          uVar28 = uVar36;
        } while (uVar36 != 0);
      }
    }
  }
LAB_0532fffc:
  uVar12 = *(ushort *)(param_1 + 0x6c);
  uVar26 = uVar12 & 0x100;
  if ((((byte)(uVar12 >> 8) & '\t' < (char)uVar12) == 0) &&
     (lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x1b0), lVar14 != 0)) {
    lVar14 = *(long *)(lVar14 + 0x78);
    puVar24 = *(undefined8 **)(lVar14 + 0x30);
    puVar35 = *(undefined8 **)(lVar14 + 0x38);
    if (puVar24 != puVar35) {
      uStack_288 = (undefined8 *)(param_1 + 0x1538);
      do {
        plVar18 = (long *)*puVar24;
        cVar9 = (**(code **)(*plVar18 + 0x10))(plVar18);
        if (cVar9 != '\0') {
          uVar50 = *(undefined4 *)(param_1 + 0x40);
          uStack_310 = (undefined1)uVar50;
          uStack_30f = (undefined2)((uint)uVar50 >> 8);
          uStack_30d = (undefined1)((uint)uVar50 >> 0x18);
          bStack_318 = (byte)*(undefined8 *)(param_1 + 0x38);
          uStack_317 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x38) >> 8);
          uStack_304 = *(undefined4 *)(param_1 + 0x4c);
          uStack_30c = (undefined4)*(undefined8 *)(param_1 + 0x44);
          uStack_308 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x44) >> 0x20);
          uStack_228 = &UNK_0f461970;
          puStack_220 = uStack_288;
          pbStack_210 = &bStack_318;
          lStack_218 = param_1;
          plStack_208 = &uStack_228;
          func_0x0d351180(plVar18,pbStack_210,&uStack_228);
          if (plStack_208 == &uStack_228) {
            lVar14 = 0x20;
          }
          else {
            lVar14 = 0x28;
            if (plStack_208 == (long *)0x0) goto LAB_0533007b;
          }
          (**(code **)(*plStack_208 + lVar14))();
        }
LAB_0533007b:
        puVar24 = puVar24 + 1;
      } while (puVar24 != puVar35);
      uVar12 = *(ushort *)(param_1 + 0x6c);
      uVar26 = uVar12 & 0x100;
    }
  }
  if (uVar26 != 0 && '\v' < (char)uVar12) goto LAB_05330352;
  pauVar29 = *(undefined1 (**) [16])(param_1 + 0x1490);
  pauVar19 = *(undefined1 (**) [16])(param_1 + 0x1498);
  pauVar32 = pauVar29;
  while ((pauVar32 != pauVar19 && (pauVar32[1][8] != '\x04'))) {
    pauVar32 = (undefined1 (*) [16])(pauVar32[1] + 0xc);
  }
  pauVar37 = (undefined1 (*) [16])(pauVar32[1] + 0xc);
  if (pauVar37 == pauVar19 || pauVar32 == pauVar19) {
    if (pauVar32 != pauVar19) {
LAB_053301df:
      pauVar19 = pauVar32;
      *(undefined1 (**) [16])(param_1 + 0x1498) = pauVar19;
    }
  }
  else {
    do {
      if (pauVar37[1][8] != '\x04') {
        auVar48 = *pauVar37;
        uVar50 = *(undefined4 *)(*pauVar37 + 0xd);
        uVar51 = *(undefined4 *)(pauVar37[1] + 1);
        uVar52 = *(undefined4 *)(pauVar37[1] + 5);
        *(undefined4 *)(*pauVar32 + 9) = *(undefined4 *)(*pauVar37 + 9);
        *(undefined4 *)(*pauVar32 + 0xd) = uVar50;
        *(undefined4 *)(pauVar32[1] + 1) = uVar51;
        *(undefined4 *)(pauVar32[1] + 5) = uVar52;
        *pauVar32 = auVar48;
        pauVar32 = (undefined1 (*) [16])(pauVar32[1] + 0xc);
      }
      pauVar37 = (undefined1 (*) [16])(pauVar37[1] + 0xc);
    } while (pauVar37 != pauVar19);
    pauVar29 = *(undefined1 (**) [16])(param_1 + 0x1490);
    pauVar19 = *(undefined1 (**) [16])(param_1 + 0x1498);
    if (pauVar32 != pauVar19) goto LAB_053301df;
  }
  while ((pauVar29 != pauVar19 && (pauVar29[1][8] != '\x06'))) {
    pauVar29 = (undefined1 (*) [16])(pauVar29[1] + 0xc);
  }
  if ((pauVar29 != pauVar19) &&
     (pauVar32 = (undefined1 (*) [16])(pauVar29[1] + 0xc), pauVar32 != pauVar19)) {
    do {
      if (pauVar32[1][8] != '\x06') {
        auVar48 = *pauVar32;
        uVar50 = *(undefined4 *)(*pauVar32 + 0xd);
        uVar51 = *(undefined4 *)(pauVar32[1] + 1);
        uVar52 = *(undefined4 *)(pauVar32[1] + 5);
        *(undefined4 *)(*pauVar29 + 9) = *(undefined4 *)(*pauVar32 + 9);
        *(undefined4 *)(*pauVar29 + 0xd) = uVar50;
        *(undefined4 *)(pauVar29[1] + 1) = uVar51;
        *(undefined4 *)(pauVar29[1] + 5) = uVar52;
        *pauVar29 = auVar48;
        pauVar29 = (undefined1 (*) [16])(pauVar29[1] + 0xc);
      }
      pauVar32 = (undefined1 (*) [16])(pauVar32[1] + 0xc);
    } while (pauVar32 != pauVar19);
    pauVar19 = *(undefined1 (**) [16])(param_1 + 0x1498);
  }
  if (pauVar29 != pauVar19) {
    *(undefined1 (**) [16])(param_1 + 0x1498) = pauVar29;
  }
LAB_05330352:
  uVar12 = *(ushort *)(param_1 + 0x6c);
  uVar26 = uVar12 & 0x100;
  if ((((uVar12 & 0x1ff) != 0x105) && (uVar26 != 0)) && (0xfb < (byte)((char)uVar12 - 7U))) {
    iVar27 = 0;
    iVar46 = 0;
    pbVar23 = (byte *)0x0;
    pbVar44 = (byte *)0x0;
    pbStack_258 = (byte *)0x0;
    do {
      iStack_b0 = iVar46 << 4;
      lStack_150 = CONCAT44(lStack_150._4_4_,iVar27);
      uStack_180 = uStack_180 & 0xffffffff00000000;
      iStack_b4 = iVar27;
      iStack_ac = iVar46;
      do {
        lVar14 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) * 0x4ec4ec4ec4ec4ec5
        ;
        if ((short)((short)lVar14 + -1) < 0) {
          uVar33 = 0;
        }
        else {
          uVar33 = (int)lVar14 << 4;
          lVar14 = lVar14 + -2;
          do {
            lVar16 = (ulong)((int)lVar14 + 1U & 0x7fff) * 0x68 + *(long *)(param_1 + 0x108);
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar9 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                        &UNK_013a2901), cVar9 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            uVar15 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
            plVar18 = *(long **)(lVar16 + 0x30);
            cVar9 = (**(code **)(*plVar18 + 0x18))(plVar18,uVar15);
            if ((cVar9 == '\0') ||
               ((plVar18 = *(long **)(lVar16 + 0x38), plVar18 != (long *)0x0 &&
                (cVar9 = (**(code **)(*plVar18 + 0x18))(plVar18,uVar15), cVar9 == '\0')))) {
              if ((short)uVar33 < 0) goto LAB_05330400;
              goto LAB_05330539;
            }
            uVar33 = uVar33 - 0x10;
            sVar45 = (short)lVar14;
            lVar14 = lVar14 + -1;
          } while (-1 < sVar45);
          uVar33 = 0;
        }
LAB_05330539:
        pbStack_178 = (byte *)CONCAT44(pbStack_178._4_4_,(int)uStack_180 * 0x100 + iStack_b0);
        uVar13 = uVar33 & 0xffff;
        iVar27 = uVar33 * 0x10000 + (int)lStack_150;
        pbVar30 = pbVar23;
        do {
          uStack_288 = (undefined8 *)(ulong)uVar13;
          uVar28 = ((ulong)uStack_288 & 0xffff) >> 4;
          uVar36 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) *
                   0x4ec4ec4ec4ec4ec5;
          pbVar23 = pbVar30;
          if ((uVar36 < uVar28 || uVar36 - uVar28 == 0) ||
             (plVar18 = *(long **)(*(long *)(param_1 + 0x108) + 0x30 + uVar28 * 0x68),
             plVar18 == (long *)0x0)) {
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar9 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                        &UNK_013a2901), cVar9 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if (*(long *)(*(long *)(*(long *)(*_DAT_0f6ffb10 + 0x200) + 0x68) + 200) ==
                _DAT_0f714b20) goto LAB_05330699;
          }
          else {
            lVar14 = (**(code **)(*plVar18 + 0x20))
                               (plVar18,uVar13 & 0xf | (uint)pbStack_178 & 0xffff);
            if (*(long *)(*(long *)(lVar14 + 0x68) + 200) == _DAT_0f714b20) {
LAB_05330699:
              if (pbStack_258 <= pbVar44) {
                lVar14 = (long)pbVar44 - (long)pbVar30;
                uVar28 = (lVar14 >> 2) + 1;
                if (uVar28 < 0x4000000000000000) {
                  uVar40 = (long)pbStack_258 - (long)pbVar30;
                  uVar36 = (long)uVar40 >> 1;
                  if ((ulong)((long)uVar40 >> 1) <= uVar28) {
                    uVar36 = uVar28;
                  }
                  if (0x7ffffffffffffffb < uVar40) {
                    uVar36 = 0x3fffffffffffffff;
                  }
                  if (uVar36 < 0x4000000000000000) {
                    lStack_c8 = uVar36 * 4;
                    lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                    if (lVar16 == 0) {
                      FUN_0eec74c0(lStack_c8,0);
                    }
                    pbStack_258 = (byte *)(lVar16 + uVar36 * 4);
                    *(int *)(lVar16 + lVar14) = iVar27;
                    pbVar44 = (byte *)(lVar16 + lVar14 + 4);
                    pbVar23 = (byte *)(lVar16 + lVar14 + (lVar14 >> 2) * -4);
                    func_0x0eee2f00(pbVar23,pbVar30);
                    if (pbVar30 != (byte *)0x0) {
                      func_0x0412a280(pbVar30,uVar40);
                    }
                    goto LAB_0533057b;
                  }
                  func_0x04882eb0();
                }
                func_0x05344840();
                goto LAB_05332964;
              }
              *(int *)pbVar44 = iVar27;
              pbVar44 = pbVar44 + 4;
            }
          }
LAB_0533057b:
          uVar13 = (int)uStack_288 - 1;
          iVar27 = iVar27 + -0x10000;
          pbVar30 = pbVar23;
        } while (0 < (int)uStack_288);
LAB_05330400:
        iVar27 = (int)uStack_180 + 1;
        lStack_150 = CONCAT44(lStack_150._4_4_,(int)lStack_150 + 1);
        uStack_180 = CONCAT44(uStack_180._4_4_,iVar27);
      } while (iVar27 != 0x10);
      iVar46 = iStack_ac + 1;
      iVar27 = iStack_b4 + 0x100;
    } while (iVar46 != 0x10);
    uStack_288 = (undefined8 *)func_0x0cc422f0(0xf6ff9e0,&DAT_0f713f00,0,0,0);
    if (pbVar44 != pbVar23) {
      lVar14 = *in_FS_OFFSET;
      uStack_180 = lVar14 - 0xa40;
      lStack_c8 = -4 - (long)pbVar23;
      pbVar30 = (byte *)0x0;
      do {
        lVar16 = (long)pbVar44 - (long)pbVar23 >> 2;
        lVar16 = lVar16 + (ulong)(lVar16 == 0);
        pbVar41 = pbVar44 + lStack_c8;
        pbVar43 = pbVar23;
        pbStack_178 = pbVar30;
        while( true ) {
          uStack_228 = (undefined *)
                       CONCAT44((int)*(short *)(pbVar43 + 2) + *(int *)(param_1 + 0x3c),
                                (uint)*pbVar43 + *(int *)(param_1 + 0x38));
          puStack_220 = (undefined8 *)
                        CONCAT44(puStack_220._4_4_,(uint)pbVar43[1] + *(int *)(param_1 + 0x40));
          if (*(char *)(lVar14 + -0xca8) == '\0') {
            *(undefined **)(lVar14 + -0x16a8) = &UNK_0f147b18;
            *(undefined1 *)(lVar14 + -0x16a0) = 0;
            *(undefined1 *)(lVar14 + -0xcb8) = 0;
            if (*(char *)(lVar14 + -0x58) == '\0') {
              func_0x0ee49c60(lVar14 + -0xa40);
              *(undefined1 *)(lVar14 + -0x58) = 1;
            }
            *(ulong *)(lVar14 + -0xcb0) = uStack_180;
            lStack_150 = lVar14;
            func_0x0417d010(&UNK_08b54510,lVar14 + -0x16a8,0xf53dab8);
            *(undefined1 *)(lStack_150 + -0xca8) = 1;
          }
          cVar9 = func_0x0c63aaa0(uStack_288,param_2,&uStack_228,lVar14 + -0x16a8,1);
          if (cVar9 != '\0') break;
          pbVar43 = pbVar43 + 4;
          pbVar41 = pbVar41 + -4;
          lVar16 = lVar16 + -1;
          if (lVar16 == 0) {
            if (((ulong)pbStack_178 & 1) == 0) goto LAB_05330a8e;
            goto LAB_053309fc;
          }
        }
        uVar15 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
        bStack_318 = 0;
        uStack_317 = 0;
        uStack_310 = 0;
        uStack_30f = 0;
        uStack_30d = 0;
        uStack_30c = 0;
        lStack_218 = 0;
        pbStack_210 = (byte *)0x0;
        uStack_228 = (undefined *)0x0;
        puStack_220 = (undefined8 *)0x0;
        plStack_208 = (long *)0x1;
        uVar17 = 0;
        func_0x0cadd930(param_1,pbVar43,uVar15,0,&bStack_318,&uStack_228);
        plVar18 = (long *)CONCAT44(uStack_30c,CONCAT13(uStack_30d,CONCAT21(uStack_30f,uStack_310)));
        if (plVar18 != (long *)0x0) {
          LOCK();
          plVar21 = plVar18 + 1;
          lVar16 = *plVar21;
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (lVar16 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            func_0x0412c2d0(plVar18);
          }
        }
        if (pbVar43 + 4 != pbVar44) {
          func_0x0eee2ee0(pbVar43,pbVar43 + 4,pbVar41);
        }
        pbVar44 = pbVar43 + (long)pbVar41;
        pbVar30 = (byte *)CONCAT71((int7)((ulong)uVar17 >> 8),1);
      } while (pbVar44 != pbVar23);
LAB_053309fc:
      uVar17 = _UNK_014e7ba8;
      uVar15 = _DAT_014e7ba0;
      *(undefined8 *)(param_1 + 0x1180) = _DAT_014e7ba0;
      *(undefined8 *)(param_1 + 0x1188) = uVar17;
      *(undefined8 *)(param_1 + 0x1170) = uVar15;
      *(undefined8 *)(param_1 + 0x1178) = uVar17;
      *(undefined8 *)(param_1 + 0x1160) = uVar15;
      *(undefined8 *)(param_1 + 0x1168) = uVar17;
      lVar14 = *(long *)(param_1 + 0x108);
      if (*(long *)(param_1 + 0x110) != lVar14) {
        lVar16 = 0;
        uVar28 = 0;
        do {
          *(undefined8 *)(lVar14 + lVar16) = 0x7fffffff7fffffff;
          uVar28 = uVar28 + 1;
          lVar14 = *(long *)(param_1 + 0x108);
          lVar16 = lVar16 + 0x68;
        } while (uVar28 < (ulong)((*(long *)(param_1 + 0x110) - lVar14 >> 3) * 0x4ec4ec4ec4ec4ec5));
      }
      *(undefined8 *)(param_1 + 0x1190) = 0x7fffffff7fffffff;
      *(undefined2 *)(param_1 + 0x1500) = 0;
    }
    if (pbVar23 != (byte *)0x0) {
LAB_05330a8e:
      func_0x0412a280(pbVar23,(long)pbStack_258 - (long)pbVar23);
    }
    uVar12 = *(ushort *)(param_1 + 0x6c);
    uVar26 = uVar12 & 0x100;
  }
  if (uVar26 == 0 || (char)uVar12 < '\x16') {
    pbVar23 = (byte *)(param_1 + 0x70);
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
      puStack_238 = *(undefined1 **)(param_1 + 0x80);
      uStack_248 = *(undefined8 **)pbVar23;
      uStack_240 = *(ulong *)(param_1 + 0x78);
    }
    else {
      func_0x0412e5e0(&uStack_248,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
    }
    puStack_160 = (undefined1 *)((long)&uStack_248 + 1);
    uStack_158 = (ulong)uStack_248 >> 1 & 0x7f;
    if (((ulong)uStack_248 & 1) != 0) {
      uStack_158 = uStack_240;
      puStack_160 = puStack_238;
    }
    puStack_170 = &UNK_0ef9fd98;
    uStack_168 = 0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    pbStack_178 = pbVar23;
    if (uStack_158 == 0) {
      puVar24 = (undefined8 *)0x0;
    }
    else {
      puVar35 = (undefined8 *)0x0;
      pbStack_258 = (byte *)0x7ffffffffffffff8;
      puVar24 = (undefined8 *)0x0;
      bVar10 = 0;
      do {
        func_0x0d6c71b0(&plStack_340,&puStack_170);
        plVar18 = plStack_340;
        if (plStack_340 != (long *)0x0) {
          uStack_228 = &UNK_013762e9;
          puStack_220 = (undefined8 *)0xa;
          plVar20 = (long *)func_0x0d6c97a0(plStack_340 + 1,&uStack_228);
          plVar21 = plStack_340;
          if (plVar20 != plVar18 + 2) {
            if ((ulong)*(uint *)(plVar20 + 0xc) == 0xffffffff) goto LAB_05332964;
            bStack_318 = (byte)&uStack_338;
            uStack_317 = (undefined7)((ulong)&uStack_338 >> 8);
            lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar20 + 0xc) * 8))
                               (&bStack_318,plVar20 + 7);
            plVar18 = plStack_340;
            plVar21 = plStack_340;
            if (lVar14 != 0) {
              bStack_318 = 0xe9;
              uStack_317 = 0x13762;
              uStack_310 = 10;
              uStack_30f = 0;
              uStack_30d = 0;
              uStack_30c = 0;
              plVar21 = (long *)func_0x0d6c97a0(plStack_340 + 1,&bStack_318);
              if ((plVar21 == plVar18 + 2) || ((int)plVar21[0xc] != 8)) {
                plVar18 = (long *)&UNK_01e79d90;
              }
              else {
                plVar18 = (long *)&UNK_01e79d90;
                if (plVar21 != (long *)0xffffffffffffffc8) {
                  plVar18 = plVar21 + 8;
                }
              }
              func_0x0b04cfb0(&uStack_228,plVar18);
              if (((byte)((ushort)*(undefined2 *)(param_1 + 0x6c) >> 8) &
                  '\r' < (char)*(undefined2 *)(param_1 + 0x6c)) == 0) {
                uStack_288 = puVar24;
                plVar18 = (long *)(**(code **)(*param_2 + 0x150))();
                lVar14 = (**(code **)(*plVar18 + 0x568))(plVar18);
                if (*(char *)(lVar14 + 0x90) == '\0') {
                  uStack_e8 = 0;
                  uStack_e0 = 0;
                  uStack_d8 = 0;
                  func_0x0b04d0a0(&bStack_318,0x5316,&uStack_e8);
                  bVar11 = bStack_2d0;
                  if ((bStack_1e0 & 1) == 0) {
                    uVar28 = (ulong)(bStack_1e0 >> 1);
                    if ((bStack_2d0 & 1) == 0) goto LAB_05330d54;
LAB_05330d8b:
                    if (uVar28 != uStack_2c8) goto LAB_05330dce;
LAB_05330d98:
                    bVar42 = bStack_2d0 & 1;
                    puVar39 = &uStack_1df;
                    if ((bStack_1e0 & 1) == 0) {
                      if (bVar42 == 0) goto LAB_05330dc1;
LAB_05330e64:
                      iVar27 = func_0x0eee3000(puVar39,puStack_2c0);
                    }
                    else {
                      puVar39 = puStack_1d0;
                      if (bVar42 != 0) goto LAB_05330e64;
LAB_05330dc1:
                      iVar27 = func_0x0eee3000(puVar39,&uStack_2cf);
                    }
                    if (iVar27 != 0) goto LAB_05330dce;
                    uVar12 = *(ushort *)(param_1 + 0x6c);
                    if ((bStack_2b0 & 1) != 0) {
                      func_0x0412a280(uStack_2a0,
                                      CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
                      bVar42 = bStack_2d0 & 1;
                    }
                    if (bVar42 != 0) {
                      func_0x0412a280(puStack_2c0,
                                      CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
                    }
                    if ((bStack_2e8 & 1) != 0) {
                      func_0x0412a280(uStack_2d8,
                                      CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
                    }
                    if ((bStack_300 & 1) != 0) {
                      func_0x0412a280(uStack_2f0,
                                      CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
                    }
                    if ((bStack_318 & 1) != 0) {
                      func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                      CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                    }
                    if ((uStack_e8 & 1) != 0) {
                      func_0x0412a280(uStack_d8,uStack_e8 & 0xfffffffffffffffe);
                    }
                    if ((uVar12 & 0x100) == 0 || (char)uVar12 < '\t') {
                      bVar11 = func_0x05333490(plStack_340);
                      bVar10 = bVar10 | bVar11;
                    }
                  }
                  else {
                    uVar28 = uStack_1d8;
                    if ((bStack_2d0 & 1) != 0) goto LAB_05330d8b;
LAB_05330d54:
                    if (uVar28 == bStack_2d0 >> 1) goto LAB_05330d98;
LAB_05330dce:
                    if ((bStack_2b0 & 1) != 0) {
                      func_0x0412a280(uStack_2a0,
                                      CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
                      bVar11 = bStack_2d0;
                    }
                    if ((bVar11 & 1) != 0) {
                      func_0x0412a280(puStack_2c0,
                                      CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
                    }
                    if ((bStack_2e8 & 1) != 0) {
                      func_0x0412a280(uStack_2d8,
                                      CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
                    }
                    if ((bStack_300 & 1) != 0) {
                      func_0x0412a280(uStack_2f0,
                                      CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
                    }
                    if ((bStack_318 & 1) != 0) {
                      func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                      CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                    }
                    if ((uStack_e8 & 1) != 0) {
                      func_0x0412a280(uStack_d8,uStack_e8 & 0xfffffffffffffffe);
                    }
                  }
                  uStack_108 = 0;
                  uStack_100 = 0;
                  uStack_f8 = 0;
                  func_0x0b04d0a0(&bStack_318,0x100030f,&uStack_108);
                  bVar11 = bStack_2d0;
                  if ((bStack_1e0 & 1) == 0) {
                    uVar28 = (ulong)(bStack_1e0 >> 1);
                    if ((bStack_2d0 & 1) == 0) goto LAB_05330fe5;
LAB_05331003:
                    if (uVar28 != uStack_2c8) goto LAB_05331046;
LAB_05331010:
                    bVar42 = bStack_2d0 & 1;
                    puVar39 = &uStack_1df;
                    if ((bStack_1e0 & 1) == 0) {
                      if (bVar42 == 0) goto LAB_05331039;
LAB_053310dc:
                      iVar27 = func_0x0eee3000(puVar39,puStack_2c0);
                    }
                    else {
                      puVar39 = puStack_1d0;
                      if (bVar42 != 0) goto LAB_053310dc;
LAB_05331039:
                      iVar27 = func_0x0eee3000(puVar39,&uStack_2cf);
                    }
                    if (iVar27 != 0) goto LAB_05331046;
                    uVar12 = *(ushort *)(param_1 + 0x6c);
                    if ((bStack_2b0 & 1) != 0) {
                      func_0x0412a280(uStack_2a0,
                                      CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
                      bVar42 = bStack_2d0 & 1;
                    }
                    if (bVar42 != 0) {
                      func_0x0412a280(puStack_2c0,
                                      CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
                    }
                    if ((bStack_2e8 & 1) != 0) {
                      func_0x0412a280(uStack_2d8,
                                      CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
                    }
                    if ((bStack_300 & 1) != 0) {
                      func_0x0412a280(uStack_2f0,
                                      CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
                    }
                    if ((bStack_318 & 1) != 0) {
                      func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                      CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                    }
                    plVar18 = plStack_340;
                    if ((uStack_108 & 1) != 0) {
                      func_0x0412a280(uStack_f8,uStack_108 & 0xfffffffffffffffe);
                      plVar18 = plStack_340;
                    }
                    plStack_340 = plVar18;
                    if (((uVar12 & 0x100) == 0 || (char)uVar12 < '\r') &&
                       (cVar9 = func_0x05334e70(plVar18), cVar9 != '\0')) {
                      bVar11 = func_0x05339120(plVar18,param_2);
                      bVar10 = bVar10 | bVar11;
                    }
                  }
                  else {
                    uVar28 = uStack_1d8;
                    if ((bStack_2d0 & 1) != 0) goto LAB_05331003;
LAB_05330fe5:
                    if (uVar28 == bStack_2d0 >> 1) goto LAB_05331010;
LAB_05331046:
                    if ((bStack_2b0 & 1) != 0) {
                      func_0x0412a280(uStack_2a0,
                                      CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
                      bVar11 = bStack_2d0;
                    }
                    if ((bVar11 & 1) != 0) {
                      func_0x0412a280(puStack_2c0,
                                      CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
                    }
                    if ((bStack_2e8 & 1) != 0) {
                      func_0x0412a280(uStack_2d8,
                                      CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
                    }
                    if ((bStack_300 & 1) != 0) {
                      func_0x0412a280(uStack_2f0,
                                      CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
                    }
                    if ((bStack_318 & 1) != 0) {
                      func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                      CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                    }
                    if ((uStack_108 & 1) != 0) {
                      func_0x0412a280(uStack_f8,uStack_108 & 0xfffffffffffffffe);
                    }
                  }
                  uStack_128 = 0;
                  uStack_120 = 0;
                  uStack_118 = 0;
                  func_0x0b04d0a0(&bStack_318,0x30b2c,&uStack_128);
                  bVar11 = bStack_2d0;
                  if ((bStack_1e0 & 1) == 0) {
                    uVar28 = (ulong)(bStack_1e0 >> 1);
                    if ((bStack_2d0 & 1) == 0) goto LAB_0533125d;
LAB_0533127b:
                    if (uVar28 == uStack_2c8) {
LAB_05331288:
                      bVar42 = bStack_2d0 & 1;
                      puVar39 = &uStack_1df;
                      if ((bStack_1e0 & 1) == 0) {
                        if (bVar42 == 0) goto LAB_053312b1;
LAB_05331354:
                        iVar27 = func_0x0eee3000(puVar39,puStack_2c0);
                      }
                      else {
                        puVar39 = puStack_1d0;
                        if (bVar42 != 0) goto LAB_05331354;
LAB_053312b1:
                        iVar27 = func_0x0eee3000(puVar39,&uStack_2cf);
                      }
                      if (iVar27 == 0) {
                        uVar12 = *(ushort *)(param_1 + 0x6c);
                        if ((bStack_2b0 & 1) != 0) {
                          func_0x0412a280(uStack_2a0,
                                          CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
                          bVar42 = bStack_2d0 & 1;
                        }
                        if (bVar42 != 0) {
                          func_0x0412a280(puStack_2c0,
                                          CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
                        }
                        if ((bStack_2e8 & 1) != 0) {
                          func_0x0412a280(uStack_2d8,
                                          CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
                        }
                        if ((bStack_300 & 1) != 0) {
                          func_0x0412a280(uStack_2f0,
                                          CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
                        }
                        if ((bStack_318 & 1) != 0) {
                          func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                          CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                        }
                        plVar18 = plStack_340;
                        if ((uStack_128 & 1) != 0) {
                          func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
                          plVar18 = plStack_340;
                        }
                        plStack_340 = plVar18;
                        if (((uVar12 & 0x100) == 0 || (char)uVar12 < '\f') &&
                           (cVar9 = func_0x05336ce0(plVar18), cVar9 != '\0')) {
                          bVar11 = func_0x05339120(plVar18,param_2);
                          bVar10 = bVar10 | bVar11;
                        }
                        goto LAB_05331482;
                      }
                    }
                  }
                  else {
                    uVar28 = uStack_1d8;
                    if ((bStack_2d0 & 1) != 0) goto LAB_0533127b;
LAB_0533125d:
                    if (uVar28 == bStack_2d0 >> 1) goto LAB_05331288;
                  }
                  if ((bStack_2b0 & 1) != 0) {
                    func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe)
                    ;
                    bVar11 = bStack_2d0;
                  }
                  if ((bVar11 & 1) != 0) {
                    func_0x0412a280(puStack_2c0,CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe
                                   );
                  }
                  if ((bStack_2e8 & 1) != 0) {
                    func_0x0412a280(uStack_2d8,CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe)
                    ;
                  }
                  if ((bStack_300 & 1) != 0) {
                    func_0x0412a280(uStack_2f0,CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe)
                    ;
                  }
                  if ((bStack_318 & 1) != 0) {
                    func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                    CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                  }
                  if ((uStack_128 & 1) != 0) {
                    func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
                  }
                }
LAB_05331482:
                plVar18 = (long *)(**(code **)(*param_2 + 0x150))();
                lVar14 = (**(code **)(*plVar18 + 0x568))(plVar18);
                puVar24 = uStack_288;
                if (*(char *)(lVar14 + 0x4be) == '\x01') {
                  uStack_68 = 0;
                  uStack_60 = 0;
                  uStack_58 = 0;
                  func_0x0b04d0a0(&bStack_318,0x1000373,&uStack_68);
                  bVar11 = bStack_2d0;
                  if ((bStack_1e0 & 1) == 0) {
                    uVar28 = (ulong)(bStack_1e0 >> 1);
                    if ((bStack_2d0 & 1) == 0) goto LAB_053314fb;
LAB_05331527:
                    if (uVar28 != uStack_2c8) goto LAB_05331502;
LAB_05331534:
                    puVar39 = &uStack_1df;
                    if ((bStack_1e0 & 1) != 0) {
                      puVar39 = puStack_1d0;
                    }
                    puVar38 = &uStack_2cf;
                    if ((bStack_2d0 & 1) != 0) {
                      puVar38 = puStack_2c0;
                    }
                    iVar27 = func_0x0eee3000(puVar39,puVar38);
                    bVar47 = iVar27 == 0;
                  }
                  else {
                    uVar28 = uStack_1d8;
                    if ((bStack_2d0 & 1) != 0) goto LAB_05331527;
LAB_053314fb:
                    if (uVar28 == bStack_2d0 >> 1) goto LAB_05331534;
LAB_05331502:
                    bVar47 = false;
                  }
                  if ((bStack_2b0 & 1) != 0) {
                    func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe)
                    ;
                    bVar11 = bStack_2d0;
                  }
                  if ((bVar11 & 1) != 0) {
                    func_0x0412a280(puStack_2c0,CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe
                                   );
                  }
                  if ((bStack_2e8 & 1) != 0) {
                    func_0x0412a280(uStack_2d8,CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe)
                    ;
                  }
                  if ((bStack_300 & 1) != 0) {
                    func_0x0412a280(uStack_2f0,CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe)
                    ;
                  }
                  if ((bStack_318 & 1) != 0) {
                    func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                    CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                  }
                  plVar18 = plStack_340;
                  if ((uStack_68 & 1) != 0) {
                    func_0x0412a280(uStack_58,uStack_68 & 0xfffffffffffffffe);
                    plVar18 = plStack_340;
                  }
                  plStack_340 = plVar18;
                  if (bVar47) {
                    uStack_338 = &UNK_012a485d;
                    uStack_330 = 0xb;
                    plVar21 = plVar18 + 1;
                    plVar22 = (long *)func_0x0d6c9880(plVar21,&uStack_338);
                    plVar20 = plVar18 + 2;
                    if ((plVar22 != plVar20) && ((int)plVar22[0xc] == 9)) {
                      uStack_338 = &UNK_013762e9;
                      uStack_330 = 10;
                      plVar22 = (long *)func_0x0d6c9880(plVar21,&uStack_338);
                      if (plVar22 != plVar20) {
                        func_0x0d6c9f40(plVar21,plVar22);
                      }
                      bStack_318 = 0x14;
                      uStack_317 = 0x6669746e656469;
                      uStack_310 = 0x69;
                      uStack_30f = 0x7265;
                      uStack_30d = 0;
                      func_0x0bf48ed0(&uStack_338,0x100030f,1);
                      pbStack_270 = &bStack_318;
                      lVar14 = func_0x0d6c9580(plVar21,pbStack_270,&UNK_01563a4f,&pbStack_270,
                                               &pbStack_250);
                      if ((ulong)*(uint *)(lVar14 + 0x60) != 0xffffffff) {
                        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar14 + 0x60) * 8))
                                  (&pbStack_270,lVar14 + 0x38);
                      }
                      uVar17 = uStack_328;
                      uVar15 = uStack_330;
                      puVar2 = uStack_338;
                      uStack_338 = (undefined *)0x0;
                      uStack_330 = 0;
                      uStack_328 = 0;
                      *(undefined **)(lVar14 + 0x38) = &UNK_0f47e5e8;
                      *(undefined **)(lVar14 + 0x40) = puVar2;
                      *(undefined8 *)(lVar14 + 0x48) = uVar15;
                      *(undefined8 *)(lVar14 + 0x50) = uVar17;
                      *(undefined4 *)(lVar14 + 0x60) = 8;
                      if ((bStack_318 & 1) != 0) {
                        func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                        CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                      }
                      plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                      if (plVar22 == (long *)0x0) {
                        FUN_0eec74c0(0x28,0);
                      }
                      *plVar22 = (long)&UNK_0f47e350;
                      plVar22[1] = 0;
                      plVar22[2] = 0;
                      *(undefined8 *)((long)plVar22 + 0x11) = 0;
                      *(undefined8 *)((long)plVar22 + 0x19) = 0;
                      func_0x05338370(&pbStack_270,&UNK_0145f539);
                      pbStack_250 = pbStack_270;
                      func_0x0d6c2370(plVar22,&pbStack_250);
                      if (pbStack_250 != (byte *)0x0) {
                        (**(code **)(*(long *)pbStack_250 + 8))();
                      }
                      pbStack_270 = &UNK_012a485d;
                      uStack_268 = 0xb;
                      plVar25 = (long *)func_0x0d6c9880(plVar21,&pbStack_270);
                      if (plVar25 != plVar20) {
                        func_0x0d6c9f40(plVar21,plVar25);
                      }
                      bStack_198 = 0x16;
                      uStack_197 = 0x74696e69666564;
                      uStack_190 = 0x736e6f69;
                      uStack_18c = 0;
                      plStack_c0 = plVar22;
                      func_0x0d6bb450(plVar18,&bStack_198,&plStack_c0);
                      (**(code **)(*plVar22 + 8))(plVar22);
                      if ((bStack_198 & 1) != 0) {
                        func_0x0412a280(uStack_188,
                                        CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
                      }
                      puVar24 = (undefined8 *)
                                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                      if (puVar24 == (undefined8 *)0x0) {
                        FUN_0eec74c0(0x20,0);
                      }
                      uVar15 = _UNK_012724c9;
                      pbStack_270 = (byte *)0x21;
                      uStack_268 = 0x19;
                      *(ulong *)((long)puVar24 + 9) = CONCAT17(UNK_012724c8,_DAT_012724c1);
                      *(undefined8 *)((long)puVar24 + 0x11) = uVar15;
                      uVar15 = CONCAT71(_DAT_012724c1,UNK_012724c0);
                      *puVar24 = _DAT_012724b8;
                      puVar24[1] = uVar15;
                      *(undefined1 *)((long)puVar24 + 0x19) = 0;
                      puStack_260 = puVar24;
                      func_0x0d6bbef0(plVar18,&pbStack_270,1);
                      bVar10 = 1;
                      if (((ulong)pbStack_270 & 1) != 0) {
                        func_0x0412a280(puStack_260,(ulong)pbStack_270 & 0xfffffffffffffffe);
                      }
                    }
                  }
                  uStack_88 = 0;
                  uStack_80 = 0;
                  uStack_78 = 0;
                  func_0x0b04d0a0(&bStack_318,0x30b74,&uStack_88);
                  bVar11 = bStack_2d0;
                  if ((bStack_1e0 & 1) == 0) {
                    uVar28 = (ulong)(bStack_1e0 >> 1);
                    if ((bStack_2d0 & 1) == 0) goto LAB_053319cb;
LAB_053319f7:
                    if (uVar28 != uStack_2c8) goto LAB_053319d2;
LAB_05331a04:
                    puVar39 = &uStack_1df;
                    if ((bStack_1e0 & 1) != 0) {
                      puVar39 = puStack_1d0;
                    }
                    puVar38 = &uStack_2cf;
                    if ((bStack_2d0 & 1) != 0) {
                      puVar38 = puStack_2c0;
                    }
                    iVar27 = func_0x0eee3000(puVar39,puVar38);
                    bVar47 = iVar27 == 0;
                  }
                  else {
                    uVar28 = uStack_1d8;
                    if ((bStack_2d0 & 1) != 0) goto LAB_053319f7;
LAB_053319cb:
                    if (uVar28 == bStack_2d0 >> 1) goto LAB_05331a04;
LAB_053319d2:
                    bVar47 = false;
                  }
                  if ((bStack_2b0 & 1) != 0) {
                    func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe)
                    ;
                    bVar11 = bStack_2d0;
                  }
                  if ((bVar11 & 1) != 0) {
                    func_0x0412a280(puStack_2c0,CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe
                                   );
                  }
                  if ((bStack_2e8 & 1) != 0) {
                    func_0x0412a280(uStack_2d8,CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe)
                    ;
                  }
                  if ((bStack_300 & 1) != 0) {
                    func_0x0412a280(uStack_2f0,CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe)
                    ;
                  }
                  if ((bStack_318 & 1) != 0) {
                    func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                    CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                  }
                  plVar18 = plStack_340;
                  if ((uStack_88 & 1) != 0) {
                    func_0x0412a280(uStack_78,uStack_88 & 0xfffffffffffffffe);
                    plVar18 = plStack_340;
                  }
                  puVar24 = uStack_288;
                  plStack_340 = plVar18;
                  if (bVar47) {
                    uStack_338 = &UNK_012a485d;
                    uStack_330 = 0xb;
                    plVar21 = plVar18 + 1;
                    plVar22 = (long *)func_0x0d6c9880(plVar21,&uStack_338);
                    plVar20 = plVar18 + 2;
                    puVar24 = uStack_288;
                    if ((plVar22 != plVar20) && ((int)plVar22[0xc] == 9)) {
                      uStack_338 = &UNK_013762e9;
                      uStack_330 = 10;
                      plVar22 = (long *)func_0x0d6c9880(plVar21,&uStack_338);
                      if (plVar22 != plVar20) {
                        func_0x0d6c9f40(plVar21,plVar22);
                      }
                      bStack_318 = 0x14;
                      uStack_317 = 0x6669746e656469;
                      uStack_310 = 0x69;
                      uStack_30f = 0x7265;
                      uStack_30d = 0;
                      func_0x0bf48ed0(&uStack_338,0x30b2c,1);
                      pbStack_270 = &bStack_318;
                      lVar14 = func_0x0d6c9580(plVar21,pbStack_270,&UNK_01563a4f,&pbStack_270,
                                               &pbStack_250);
                      if ((ulong)*(uint *)(lVar14 + 0x60) != 0xffffffff) {
                        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar14 + 0x60) * 8))
                                  (&pbStack_270,lVar14 + 0x38);
                      }
                      uVar17 = uStack_328;
                      uVar15 = uStack_330;
                      puVar2 = uStack_338;
                      uStack_338 = (undefined *)0x0;
                      uStack_330 = 0;
                      uStack_328 = 0;
                      *(undefined **)(lVar14 + 0x38) = &UNK_0f47e5e8;
                      *(undefined **)(lVar14 + 0x40) = puVar2;
                      *(undefined8 *)(lVar14 + 0x48) = uVar15;
                      *(undefined8 *)(lVar14 + 0x50) = uVar17;
                      *(undefined4 *)(lVar14 + 0x60) = 8;
                      if ((bStack_318 & 1) != 0) {
                        func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                        CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                      }
                      plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                      if (plVar22 == (long *)0x0) {
                        FUN_0eec74c0(0x28,0);
                      }
                      *plVar22 = (long)&UNK_0f47e350;
                      plVar22[1] = 0;
                      plVar22[2] = 0;
                      *(undefined8 *)((long)plVar22 + 0x11) = 0;
                      *(undefined8 *)((long)plVar22 + 0x19) = 0;
                      pbVar23 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                      if (pbVar23 == (byte *)0x0) {
                        FUN_0eec74c0(0x20,0);
                      }
                      puVar24 = (undefined8 *)
                                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                      if (puVar24 == (undefined8 *)0x0) {
                        FUN_0eec74c0(0x20,0);
                      }
                      uVar15 = _UNK_011d44ff;
                      *(ulong *)((long)puVar24 + 10) = CONCAT26(_UNK_011d44fd,_DAT_011d44f7);
                      *(undefined8 *)((long)puVar24 + 0x12) = uVar15;
                      uVar15 = CONCAT62(_DAT_011d44f7,_UNK_011d44f5);
                      *puVar24 = _DAT_011d44ed;
                      puVar24[1] = uVar15;
                      *(undefined1 *)((long)puVar24 + 0x1a) = 0;
                      *(undefined **)pbVar23 = &UNK_0f47e5e8;
                      pbVar23[8] = 0x21;
                      pbVar23[9] = 0;
                      pbVar23[10] = 0;
                      pbVar23[0xb] = 0;
                      pbVar23[0xc] = 0;
                      pbVar23[0xd] = 0;
                      pbVar23[0xe] = 0;
                      pbVar23[0xf] = 0;
                      pbVar23[0x10] = 0x1a;
                      pbVar23[0x11] = 0;
                      pbVar23[0x12] = 0;
                      pbVar23[0x13] = 0;
                      pbVar23[0x14] = 0;
                      pbVar23[0x15] = 0;
                      pbVar23[0x16] = 0;
                      pbVar23[0x17] = 0;
                      *(undefined8 **)(pbVar23 + 0x18) = puVar24;
                      pbStack_250 = pbVar23;
                      func_0x0d6c2370(plVar22,&pbStack_250);
                      if (pbStack_250 != (byte *)0x0) {
                        (**(code **)(*(long *)pbStack_250 + 8))();
                      }
                      pbStack_270 = &UNK_012a485d;
                      uStack_268 = 0xb;
                      plVar25 = (long *)func_0x0d6c9880(plVar21,&pbStack_270);
                      if (plVar25 != plVar20) {
                        func_0x0d6c9f40(plVar21,plVar25);
                      }
                      bStack_198 = 0x16;
                      uStack_197 = 0x74696e69666564;
                      uStack_190 = 0x736e6f69;
                      uStack_18c = 0;
                      plStack_c0 = plVar22;
                      func_0x0d6bb450(plVar18,&bStack_198,&plStack_c0);
                      (**(code **)(*plVar22 + 8))(plVar22);
                      if ((bStack_198 & 1) != 0) {
                        func_0x0412a280(uStack_188,
                                        CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
                      }
                      puVar24 = (undefined8 *)
                                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                      if (puVar24 == (undefined8 *)0x0) {
                        FUN_0eec74c0(0x20,0);
                      }
                      uVar15 = _UNK_012724c9;
                      pbStack_270 = (byte *)0x21;
                      uStack_268 = 0x19;
                      *(ulong *)((long)puVar24 + 9) = CONCAT17(UNK_012724c8,_DAT_012724c1);
                      *(undefined8 *)((long)puVar24 + 0x11) = uVar15;
                      uVar15 = CONCAT71(_DAT_012724c1,UNK_012724c0);
                      *puVar24 = _DAT_012724b8;
                      puVar24[1] = uVar15;
                      *(undefined1 *)((long)puVar24 + 0x19) = 0;
                      puStack_260 = puVar24;
                      func_0x0d6bbef0(plVar18,&pbStack_270,1);
                      bVar10 = 1;
                      puVar24 = uStack_288;
                      if (((ulong)pbStack_270 & 1) != 0) {
                        func_0x0412a280(puStack_260,(ulong)pbStack_270 & 0xfffffffffffffffe);
                        puVar24 = uStack_288;
                      }
                    }
                  }
                }
              }
              uStack_148 = 0;
              uStack_140 = 0;
              uStack_138 = 0;
              func_0x0b04d0a0(&bStack_318,0x13d,&uStack_148);
              bVar11 = bStack_2d0;
              if ((bStack_1e0 & 1) == 0) {
                uVar28 = (ulong)(bStack_1e0 >> 1);
                if ((bStack_2d0 & 1) == 0) goto LAB_05331f77;
LAB_05331f95:
                if (uVar28 != uStack_2c8) goto LAB_05331fd8;
LAB_05331fa2:
                bVar42 = bStack_2d0 & 1;
                puVar39 = &uStack_1df;
                if ((bStack_1e0 & 1) == 0) {
                  if (bVar42 == 0) goto LAB_05331fcb;
LAB_05332142:
                  iVar27 = func_0x0eee3000(puVar39,puStack_2c0);
                }
                else {
                  puVar39 = puStack_1d0;
                  if (bVar42 != 0) goto LAB_05332142;
LAB_05331fcb:
                  iVar27 = func_0x0eee3000(puVar39,&uStack_2cf);
                }
                if (iVar27 != 0) goto LAB_05331fd8;
                uVar12 = *(ushort *)(param_1 + 0x6c);
                uStack_288 = puVar24;
                if ((bStack_2b0 & 1) != 0) {
                  func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
                  bVar42 = bStack_2d0 & 1;
                }
                if (bVar42 != 0) {
                  func_0x0412a280(puStack_2c0,CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
                }
                if ((bStack_2e8 & 1) != 0) {
                  func_0x0412a280(uStack_2d8,CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
                }
                if ((bStack_300 & 1) != 0) {
                  func_0x0412a280(uStack_2f0,CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
                }
                if ((bStack_318 & 1) != 0) {
                  func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                  CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                }
                if ((uStack_148 & 1) != 0) {
                  func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
                }
                if ((uVar12 & 0x100) == 0 || (char)uVar12 < '\x16') {
                  bVar11 = func_0x05333d60(plStack_340);
                  bVar10 = bVar10 | bVar11;
                }
                puVar24 = uStack_288;
                if (uStack_288 < puVar35) goto LAB_0533207e;
LAB_053323a5:
                puVar8 = puStack_a8;
                uStack_288 = (undefined8 *)((long)puVar24 - (long)puStack_a8);
                lVar14 = (long)uStack_288 >> 3;
                uVar28 = lVar14 + 1;
                if (0x1fffffffffffffff < uVar28) goto LAB_0533296e;
                pbVar23 = (byte *)((long)puVar35 - (long)puStack_a8);
                uVar36 = (long)pbVar23 >> 2;
                if ((ulong)((long)pbVar23 >> 2) <= uVar28) {
                  uVar36 = uVar28;
                }
                if (pbStack_258 <= pbVar23) {
                  uVar36 = 0x1fffffffffffffff;
                }
                if (0x1fffffffffffffff < uVar36) goto LAB_05332969;
                lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 8);
                if (lVar16 == 0) {
                  FUN_0eec74c0(uVar36 * 8,0);
                }
                plVar18 = plStack_340;
                puVar35 = (undefined8 *)(lVar16 + uVar36 * 8);
                plStack_340 = (long *)0x0;
                *(long **)(lVar16 + (long)uStack_288) = plVar18;
                puVar24 = (undefined8 *)((long)uStack_288 + lVar16 + 8);
                puVar34 = (undefined8 *)((long)uStack_288 + lVar14 * -8 + lVar16);
                func_0x0eee2f00(puVar34,puVar8);
                puStack_a8 = puVar34;
                puStack_98 = puVar35;
                if (puVar8 != (undefined8 *)0x0) {
                  func_0x0412a280(puVar8,pbVar23);
                }
              }
              else {
                uVar28 = uStack_1d8;
                if ((bStack_2d0 & 1) != 0) goto LAB_05331f95;
LAB_05331f77:
                if (uVar28 == bStack_2d0 >> 1) goto LAB_05331fa2;
LAB_05331fd8:
                if ((bStack_2b0 & 1) != 0) {
                  func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
                  bVar11 = bStack_2d0;
                }
                if ((bVar11 & 1) != 0) {
                  func_0x0412a280(puStack_2c0,CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
                }
                if ((bStack_2e8 & 1) != 0) {
                  func_0x0412a280(uStack_2d8,CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
                }
                if ((bStack_300 & 1) != 0) {
                  func_0x0412a280(uStack_2f0,CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
                }
                if ((bStack_318 & 1) != 0) {
                  func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                                  CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
                }
                if ((uStack_148 & 1) != 0) {
                  func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
                }
                puVar35 = puStack_98;
                if (puStack_98 <= puVar24) goto LAB_053323a5;
LAB_0533207e:
                plVar18 = plStack_340;
                plStack_340 = (long *)0x0;
                *puVar24 = plVar18;
                puVar24 = puVar24 + 1;
              }
              puStack_a0 = puVar24;
              if ((bStack_1c0 & 1) != 0) {
                func_0x0412a280(uStack_1b0,CONCAT71(uStack_1bf,bStack_1c0) & 0xfffffffffffffffe);
              }
              if ((bStack_1e0 & 1) != 0) {
                func_0x0412a280(puStack_1d0,CONCAT71(uStack_1df,bStack_1e0) & 0xfffffffffffffffe);
              }
              if ((bStack_1f8 & 1) != 0) {
                func_0x0412a280(uStack_1e8,CONCAT71(uStack_1f7,bStack_1f8) & 0xfffffffffffffffe);
              }
              if (((ulong)pbStack_210 & 1) != 0) {
                func_0x0412a280(uStack_200,(ulong)pbStack_210 & 0xfffffffffffffffe);
              }
              plVar21 = plStack_340;
              if (((ulong)uStack_228 & 1) != 0) {
                func_0x0412a280(lStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
                plVar21 = plStack_340;
              }
            }
          }
          plStack_340 = (long *)0x0;
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 8))(plVar21);
          }
        }
        puVar8 = puStack_a8;
      } while (uStack_158 != uStack_168);
      if ((bVar10 & 1) != 0) {
        if (((ulong)uStack_248 & 1) == 0) {
          uStack_248 = (undefined8 *)((ulong)uStack_248 & 0xffffffffffff0000);
        }
        else {
          *puStack_238 = 0;
          uStack_240 = 0;
        }
        bStack_318 = 0x28;
        uStack_317 = 0xef9fe;
        uStack_310 = SUB81(&uStack_248,0);
        uStack_30f = (undefined2)((ulong)&uStack_248 >> 8);
        uStack_30d = (undefined1)((ulong)&uStack_248 >> 0x18);
        uStack_30c = (undefined4)((ulong)&uStack_248 >> 0x20);
        if ((long)puVar24 - (long)puStack_a8 != 0) {
          lVar16 = (long)puVar24 - (long)puStack_a8 >> 3;
          lVar14 = 0;
          do {
            if (puVar8[lVar14] != 0) {
              uStack_228 = (undefined *)((ulong)uStack_228 & 0xffffffffffff0000);
              func_0x0d6ba180(&uStack_228,puVar8[lVar14],&bStack_318,0);
              if (((ulong)uStack_228 & 1) != 0) {
                func_0x0412a280(lStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
              }
            }
            lVar14 = lVar14 + 1;
          } while (lVar16 + (ulong)(lVar16 == 0) != lVar14);
        }
      }
    }
    puVar7 = puStack_238;
    puVar35 = uStack_248;
    uVar50 = (undefined4)uStack_248;
    uVar51 = uStack_248._4_4_;
    uVar52 = (undefined4)uStack_240;
    uVar53 = uStack_240._4_4_;
    uStack_248 = (undefined8 *)0x0;
    uStack_240 = 0;
    puStack_238 = (undefined1 *)0x0;
    if ((*pbStack_178 & 1) != 0) {
      uStack_288 = puVar35;
      uStack_280 = uVar52;
      uStack_27c = uVar53;
      func_0x0412a280(*(undefined8 *)(param_1 + 0x80),
                      *(ulong *)(param_1 + 0x70) & 0xfffffffffffffffe);
      uVar50 = (undefined4)uStack_288;
      uVar51 = uStack_288._4_4_;
      uVar52 = uStack_280;
      uVar53 = uStack_27c;
    }
    puVar35 = puStack_a8;
    *(undefined4 *)(param_1 + 0x70) = uVar50;
    *(undefined4 *)(param_1 + 0x74) = uVar51;
    *(undefined4 *)(param_1 + 0x78) = uVar52;
    *(undefined4 *)(param_1 + 0x7c) = uVar53;
    *(undefined1 **)(param_1 + 0x80) = puVar7;
    if (puStack_a8 != (undefined8 *)0x0) {
      for (; puVar35 != puVar24; puVar24 = puVar24 + -1) {
        plVar18 = (long *)puVar24[-1];
        puVar24[-1] = 0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
      }
      func_0x0412a280(puVar35,(long)puStack_98 - (long)puVar35);
    }
    if (((ulong)uStack_248 & 1) != 0) {
      func_0x0412a280(puStack_238,(ulong)uStack_248 & 0xfffffffffffffffe);
    }
    if (((byte)((ushort)*(undefined2 *)(param_1 + 0x6c) >> 8) &
        '\x0e' < (char)*(undefined2 *)(param_1 + 0x6c)) == 0) {
      func_0x0c9e6aa0(*(undefined8 *)(param_1 + 0x100),uStack_38);
    }
  }
  return;
LAB_0532f733:
  pbVar23 = pbStack_258;
  if ((int)uVar33 <= (int)plVar20) {
    do {
      lVar16 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_228);
      func_0x0cfc7a20(*(undefined8 *)(lVar16 + 0x68),param_2,&uStack_228,2);
      iVar27 = uStack_228._4_4_;
      uStack_228 = (undefined *)CONCAT44(uStack_228._4_4_ + -1,(undefined4)uStack_228);
      pbVar23 = pbStack_258;
    } while ((int)uVar33 < iVar27);
  }
LAB_0532f790:
  if ((((byte)((ushort)*(undefined2 *)(param_1 + 0x6c) >> 8) &
       ' ' < (char)*(undefined2 *)(param_1 + 0x6c)) == 0) &&
     (*(long *)(*(long *)(lVar14 + 0x68) + 200) == _DAT_0f7150e8)) {
    func_0x0d056c90(*(long *)(lVar14 + 0x68),param_2,&puStack_170);
  }
  if ((((byte)uStack_338 == '\0') || ((byte)uStack_338 == '\x0f')) ||
     ((uStack_338._1_1_ == '\x0f' || (uStack_338._1_1_ == '\0')))) {
    func_0x053331c0(param_2,param_1,(ulong)uStack_338 & 0xff,puStack_170,uStack_168 & 0xffffffff,0);
    func_0x053331c0(param_2,param_1,uStack_338._1_1_,puStack_170);
    if (*(long *)(*(long *)(lVar14 + 0x68) + 200) == _DAT_0f71a0f8) {
      puStack_220 = (undefined8 *)CONCAT44(puStack_220._4_4_,(int)uStack_168);
      if ((((byte)((ushort)*(undefined2 *)(param_1 + 0x6c) >> 8) &
           ' ' < (char)*(undefined2 *)(param_1 + 0x6c)) == 0) &&
         (((byte)uStack_338 == '\x0f' || ((byte)uStack_338 == '\0')))) {
        uStack_228._4_4_ = (int)((ulong)puStack_170 >> 0x20);
        uStack_228 = (undefined *)
                     CONCAT44(uStack_228._4_4_,
                              (-(uint)((byte)uStack_338 == '\0') | 1) + (int)puStack_170);
        cVar9 = (**(code **)(*param_2 + 0x38))(param_2,&uStack_228);
        if (cVar9 != '\0') {
          lVar14 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_228);
          if (*(long *)(*(long *)(lVar14 + 0x68) + 200) == _DAT_0f7150e8) {
            func_0x0d056c90(*(long *)(lVar14 + 0x68),param_2,&uStack_228);
          }
        }
      }
      uStack_228 = puStack_170;
      if ((((byte)((ushort)*(undefined2 *)(param_1 + 0x6c) >> 8) &
           ' ' < (char)*(undefined2 *)(param_1 + 0x6c)) == 0) &&
         ((uStack_338._1_1_ == '\x0f' || (uStack_338._1_1_ == '\0')))) {
        puStack_220 = (undefined8 *)
                      CONCAT44(puStack_220._4_4_,
                               (int)uStack_168 + (-(uint)(uStack_338._1_1_ == '\0') | 1));
        cVar9 = (**(code **)(*param_2 + 0x38))(param_2,&uStack_228);
        if (cVar9 != '\0') {
          lVar14 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_228);
          if (*(long *)(*(long *)(lVar14 + 0x68) + 200) == _DAT_0f7150e8) {
            func_0x0d056c90(*(long *)(lVar14 + 0x68),param_2,&uStack_228);
          }
        }
      }
    }
  }
  puVar2 = uStack_338;
  uVar33 = uStack_338._2_2_ + 1;
  uStack_338._0_4_ = CONCAT22((short)uVar33,(ushort)uStack_338);
  puVar3 = uStack_338;
  if ((short)pbVar23 <= (short)uVar33) goto LAB_0532f200;
  goto LAB_0532f232;
LAB_0532f200:
  uStack_338._1_1_ = SUB81(puVar2,1);
  uStack_338._1_1_ = uStack_338._1_1_ + 1;
  uStack_338._2_6_ = SUB86(puVar3,2);
  uStack_338._0_1_ = (byte)puVar2;
  if (0xf < uStack_338._1_1_) goto LAB_0532f9fb;
  goto LAB_0532f213;
LAB_0532f9fb:
  bVar10 = (byte)uStack_338 + 1;
  uStack_338 = (undefined *)CONCAT71(uStack_338._1_7_,bVar10);
  if (0xf < bVar10) goto LAB_0532fa0e;
  goto LAB_0532f1f6;
LAB_0532faaf:
  plVar25 = auVar48._8_8_;
  if (plVar22 != (long *)0x1) {
    do {
      plVar22 = (long *)((ulong)plVar18 >> 1);
      if (*(ushort *)(plVar21[(long)plVar22] + 0x168) < 9) {
        plVar21 = plVar21 + (long)plVar22 + 1;
        plVar22 = (long *)(~(ulong)plVar22 + (long)plVar18);
      }
      plVar18 = plVar22;
    } while (plVar22 != (long *)0x0);
  }
  lVar14 = (long)plVar25 - (long)(plVar20 + 1);
  if (lVar14 != 0) {
    plVar25 = plVar20 + 1;
    uVar28 = lVar14 >> 3;
    do {
      uVar36 = uVar28 >> 1;
      if (*(ushort *)(plVar25[uVar36] + 0x168) < 10) {
        plVar25 = plVar25 + uVar36 + 1;
        uVar36 = ~uVar36 + uVar28;
      }
      uVar28 = uVar36;
    } while (uVar36 != 0);
  }
  if (((plVar21 != plVar25) && (plVar21 != auVar48._0_8_)) && (*plVar21 != 0)) {
    if (*(char *)(param_1 + 0x110b) == '\x01') {
      func_0x0cada270(param_1 + 0x120);
    }
    else {
      auVar48 = ZEXT416(*(uint *)(*plVar21 + 0x168));
      auVar48 = pshuflw(auVar48,auVar48,0);
      auVar49._0_4_ = auVar48._0_4_;
      auVar49._4_4_ = auVar49._0_4_;
      auVar49._8_4_ = auVar49._0_4_;
      auVar49._12_4_ = auVar49._0_4_;
      *(undefined1 (*) [16])(param_1 + 0x120) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x130) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x140) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x150) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x160) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x170) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x180) = auVar49;
      *(undefined1 (*) [16])(param_1 + 400) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x1a0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x1b0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x1c0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x1d0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x1e0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x1f0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x200) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x210) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x220) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x230) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x240) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x250) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x260) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x270) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x280) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x290) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x2a0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x2b0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x2c0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x2d0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x2e0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x2f0) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x300) = auVar49;
      *(undefined1 (*) [16])(param_1 + 0x310) = auVar49;
    }
  }
  goto LAB_0532fc90;
LAB_0532fd60:
  plVar18 = plVar22 + 1;
  uVar28 = ~uVar36 + uVar28;
  if (uVar28 == 0) goto LAB_0532fffc;
  goto LAB_0532fd79;
LAB_05332964:
  func_0x04931450();
LAB_05332969:
  func_0x04882eb0();
LAB_0533296e:
  uVar15 = func_0x05344850();
  uVar15 = func_0x04882e20(uVar15);
  uVar15 = func_0x04882e20(uVar15);
  if (((ulong)pbStack_270 & 1) != 0) {
    func_0x0412a280(puStack_260,(ulong)pbStack_270 & 0xfffffffffffffffe);
  }
  func_0x04a3a0b0(&uStack_228);
  plVar18 = plStack_340;
  plStack_340 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  func_0x05334490(&puStack_a8);
  if (((ulong)uStack_248 & 1) != 0) {
    func_0x0412a280(puStack_238,(ulong)uStack_248 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar15);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- referenced strings ----
 * 0x11d44ed  +minecraft:zombie_villager
 * 0x11d44f7  :zombie_villager
 * 0x12724b8  force_respawn_v1_villager
 * 0x12724c1  pawn_v1_villager
 */
