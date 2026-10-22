/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4b9d4e0 (ELF vaddr 0x4a9d4e0)
 * Label: caller-of-callee
 * Body:  [[04b9d4e0, 04b9d928] [04b9d930, 04b9d997] [04b9d9a0, 04b9e07d] [04b9e080, 04b9e0be] [04b9e0c0, 04b9e2dc] [04b9e3c0, 04b9e3ed] [04b9e413, 04b9e481]]
 * Ghidra: FUN_04b9d4e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_04b9d4e0(long param_1,ulong *param_2,byte *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong *puVar24;
  long lVar25;
  long *plVar26;
  ulong *puVar27;
  long lVar28;
  byte *pbVar29;
  uint *puVar30;
  ulong uVar31;
  undefined4 *puVar32;
  ulong uVar33;
  undefined8 *puVar34;
  bool bVar35;
  undefined1 uStack_189;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_158;
  ulong *puStack_150;
  undefined8 *puStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  undefined8 *puStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long *plStack_100;
  long *plStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  ulong *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong *puStack_c0;
  undefined8 *puStack_b8;
  ulong *puStack_b0;
  long lStack_78;
  ulong *puStack_70;
  
  uStack_178 = 0;
  lStack_170 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  plStack_168 = (long *)0x0;
  func_0x04130630(&uStack_180,param_3);
  if (*param_3 == 0) {
    uVar33 = 0;
  }
  else {
    uVar33 = 0xcbf29ce484222325;
    uVar15 = strlen(param_3);
    if (uVar15 != 0) {
      uVar23 = (ulong)((uint)uVar15 & 7);
      if (7 < uVar15) {
        uVar15 = uVar15 & 0xfffffffffffffff8;
        do {
          uVar33 = (((((((uVar33 * 0x100000001b3 ^ (ulong)*param_3) * 0x100000001b3 ^
                        (ulong)param_3[1]) * 0x100000001b3 ^ (ulong)param_3[2]) * 0x100000001b3 ^
                      (ulong)param_3[3]) * 0x100000001b3 ^ (ulong)param_3[4]) * 0x100000001b3 ^
                    (ulong)param_3[5]) * 0x100000001b3 ^ (ulong)param_3[6]) * 0x100000001b3 ^
                   (ulong)param_3[7];
          param_3 = param_3 + 8;
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
      }
      if (uVar23 != 0) {
        uVar15 = 0;
        do {
          uVar33 = uVar33 * 0x100000001b3 ^ (ulong)param_3[uVar15];
          uVar15 = uVar15 + 1;
        } while (uVar23 != uVar15);
      }
    }
  }
  lStack_78 = 0;
  puStack_b8 = (undefined8 *)&UNK_0ef60d48;
  uStack_188 = uVar33;
  puStack_b0 = param_2;
  puStack_70 = param_2;
  puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (puVar16 == (ulong *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  puStack_148 = puStack_b8;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = (ulong)&UNK_0ef60b20;
  puStack_b8 = (undefined8 *)0x0;
  puStack_140 = puStack_b0;
  puVar16[4] = (ulong)&UNK_0f2ccd78;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  *(undefined1 *)(puVar16 + 0xd) = 0;
  func_0x04aa75f0(puVar16 + 0xe,&uStack_189,&UNK_01254d89);
  *(undefined1 *)(puVar16 + 0x10) = 0;
  puVar16[0x11] = 0;
  puVar16[0x12] = 0;
  puVar16[0x13] = 0;
  puVar16[0x14] = 0;
  puVar16[0x15] = 0;
  puVar16[0x16] = 0;
  puVar16[0x17] = 0xffffffff;
  puVar16[0x26] = 0;
  puVar16[0x27] = 0;
  puVar16[0x18] = 0;
  puVar16[0x19] = 0;
  puVar16[0x1a] = 0;
  puVar16[0x1b] = 0;
  puVar16[0x1c] = 0;
  puVar16[0x1d] = 0;
  puVar16[0x1e] = 0;
  puVar16[0x1f] = 0;
  puVar16[4] = (ulong)&UNK_0ef60b70;
  puVar16[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(puVar16 + 0x2f) = 1;
  puVar16[0x30] = 0;
  puVar16[0x31] = 0;
  if (puStack_148 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_148)(&puStack_148,puVar16 + 0x30);
    puVar17 = puStack_148;
  }
  puVar27 = puVar16 + 4;
  puStack_148 = (undefined8 *)0x0;
  puVar16[0x30] = (ulong)puVar17;
  puStack_f0 = puVar16 + 0x12;
  if (puVar16 + 0x11 == (ulong *)&DAT_0f552078) {
    puVar16[0x15] = 0;
  }
  else {
    if ((*puStack_f0 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        puVar16[0x14] = _DAT_0f552090;
        uVar10 = uRam000000000f55208c;
        uVar9 = _DAT_0f552088;
        uVar8 = uRam000000000f552084;
        *(uint *)puStack_f0 = _DAT_0f552080;
        *(undefined4 *)((long)puVar16 + 0x94) = uVar8;
        *(undefined4 *)(puVar16 + 0x13) = uVar9;
        *(undefined4 *)((long)puVar16 + 0x9c) = uVar10;
      }
      else {
        FUN_04885070(puStack_f0,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar35 = (_DAT_0f552080 & 1) != 0;
      uVar33 = 0xf552081;
      if (bVar35) {
        uVar33 = _DAT_0f552090;
      }
      uVar15 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar35) {
        uVar15 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puStack_f0,uVar33,uVar15);
    }
    puVar16[0x11] = _DAT_0f552078;
    puVar16[0x15] = 0;
    if (puStack_148 != (undefined8 *)0x0) {
      (*(code *)puStack_148[1])(&puStack_148);
    }
  }
  puVar24 = puVar16 + 1;
  if (puStack_b8 != (undefined8 *)0x0) {
    (*(code *)puStack_b8[1])(&puStack_b8);
  }
  LOCK();
  *puVar24 = *puVar24 + 1;
  UNLOCK();
  puStack_150 = puVar16 + 0x11;
  puStack_e0 = puVar24;
  plStack_158 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_158 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  uVar15 = uStack_188;
  plStack_158[1] = 0;
  plStack_158[2] = 0;
  *plStack_158 = (long)&UNK_0ef60c50;
  plStack_158[6] = 0;
  plStack_158[7] = 0;
  plStack_158[4] = (long)&UNK_0ef60ca0;
  plStack_158[0xe] = (long)puVar27;
  plStack_158[0xf] = (long)puVar16;
  LOCK();
  puVar16[1] = puVar16[1] + 1;
  UNLOCK();
  plStack_d8 = plStack_158 + 1;
  uStack_e8 = *(ulong *)(param_1 + 0xb8);
  uVar33 = *(ulong *)(param_1 + 0xc0);
  puVar24 = puVar16;
  plStack_100 = plStack_158;
  lStack_d0 = param_1;
  puStack_c0 = puVar27;
  if (uStack_e8 != uVar33) {
    if ((uStack_180 & 1) == 0) {
      lStack_c8 = (long)&uStack_180 + 1;
      uVar23 = uStack_180 >> 1 & 0x7f;
    }
    else {
      lStack_c8 = lStack_170;
      uVar23 = uStack_178;
    }
    plStack_f8 = plStack_168;
    puVar24 = &uStack_188;
    lVar28 = uStack_e8 + 0x19;
    do {
      if (*(ulong *)(lVar28 + -9) == uVar15) {
        if ((*(ulong **)(lVar28 + 0x17) == puVar24) && ((long *)(lVar28 + -9) == plStack_f8)) {
LAB_04b9dde5:
          puVar32 = (undefined4 *)(lVar28 + -0x19);
          plVar26 = plStack_100;
          goto LAB_04b9ddf1;
        }
        bVar4 = *(byte *)(lVar28 + -1);
        if ((bVar4 & 1) == 0) {
          uVar31 = (ulong)(bVar4 >> 1);
        }
        else {
          uVar31 = *(ulong *)(lVar28 + 7);
        }
        if (uVar31 == uVar23) {
          lVar21 = lVar28;
          if ((bVar4 & 1) != 0) {
            lVar21 = *(long *)(lVar28 + 0xf);
          }
          iVar14 = func_0x0eee3000(lVar21,lStack_c8,uVar23);
          if (iVar14 == 0) {
            *(ulong **)(lVar28 + 0x17) = puVar24;
            plStack_168 = (long *)(lVar28 + -9);
            goto LAB_04b9dde5;
          }
        }
      }
      *(undefined8 *)(lVar28 + 0x17) = 0;
      uVar31 = lVar28 + 0x8f;
      lVar28 = lVar28 + 0xa8;
    } while (uVar31 != uVar33);
  }
  lVar28 = lStack_d0;
  if (uVar33 < *(ulong *)(lStack_d0 + 200)) {
    func_0x04b9fbc0(uVar33);
    puVar27 = (ulong *)(uVar33 + 0xa8);
    *(ulong **)(lVar28 + 0xc0) = puVar27;
LAB_04b9dc60:
    *(ulong **)(lVar28 + 0xc0) = puVar27;
    func_0x0b63b6d0(puVar27[-0x15],&uStack_188);
    lVar21 = *(long *)(lVar28 + 0xc0);
    *(undefined1 *)(lVar21 + -7) = *(undefined1 *)(lVar28 + 0x60);
    if ((ulong *)(lVar21 + -0x98) != &uStack_188) {
      pbVar29 = (byte *)(lVar21 + -0x90);
      if ((*pbVar29 & 1) == 0) {
        if ((uStack_180 & 1) == 0) {
          *(long *)(lVar21 + -0x80) = lStack_170;
          *(undefined4 *)pbVar29 = (undefined4)uStack_180;
          *(undefined4 *)(lVar21 + -0x8c) = uStack_180._4_4_;
          *(undefined4 *)(lVar21 + -0x88) = (undefined4)uStack_178;
          *(undefined4 *)(lVar21 + -0x84) = uStack_178._4_4_;
        }
        else {
          FUN_04885070(pbVar29,lStack_170,uStack_178);
        }
      }
      else {
        uVar33 = uStack_180 >> 1 & 0x7f;
        lVar20 = (long)&uStack_180 + 1;
        if ((uStack_180 & 1) != 0) {
          uVar33 = uStack_178;
          lVar20 = lStack_170;
        }
        func_0x04885120(pbVar29,lVar20,uVar33);
      }
    }
    *(ulong *)(lVar21 + -0x98) = uStack_188;
    *(undefined8 *)(lVar21 + -0x78) = 0;
    func_0x04aa9390(&puStack_148,&uStack_180,*(undefined1 *)(lVar28 + 0x60));
    lVar21 = *(long *)(lVar28 + 0xc0);
    func_0x04167a70(lVar21 + -0x70,&puStack_148);
    *(ulong **)(lVar21 + -0x68) = puStack_140;
    *(ulong **)(lVar21 + -0x60) = puStack_138;
    *(undefined8 **)(lVar21 + -0x58) = puStack_130;
    *(long **)(lVar21 + -0x50) = plStack_128;
    uVar8 = (undefined4)uStack_120;
    uVar9 = uStack_120._4_4_;
    uVar10 = (undefined4)uStack_118;
    uVar13 = uStack_118._4_4_;
    uStack_120 = 0;
    uStack_118 = (long *)0x0;
    plVar26 = *(long **)(lVar21 + -0x40);
    *(undefined4 *)(lVar21 + -0x48) = uVar8;
    *(undefined4 *)(lVar21 + -0x44) = uVar9;
    *(undefined4 *)(lVar21 + -0x40) = uVar10;
    *(undefined4 *)(lVar21 + -0x3c) = uVar13;
    if (plVar26 != (long *)0x0) {
      LOCK();
      plVar6 = plVar26 + 1;
      lVar20 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        func_0x0412c2d0(plVar26);
      }
    }
    plVar26 = plStack_100;
    plVar6 = uStack_118;
    *(undefined8 *)(lVar21 + -0x38) = uStack_110;
    if (uStack_118 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_118 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_118 + 0x10))(uStack_118);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x04167a40(&puStack_148);
    lVar28 = *(long *)(lVar28 + 0xc0);
    *(undefined1 *)(lVar28 + -8) = 0;
    puVar32 = (undefined4 *)(lVar28 + -0xa8);
LAB_04b9ddf1:
    puVar24 = (ulong *)(plVar26 + 4);
    puVar27 = *(ulong **)(puVar32 + 0x24);
    if (puVar27 < *(ulong **)(puVar32 + 0x26)) {
      puVar27[2] = 0;
      puVar27[3] = 0;
      *puVar27 = 0;
      puVar27[1] = 0;
      puVar27[4] = 0;
      if (puVar27 != puStack_150) {
        if ((*puStack_f0 & 1) == 0) {
          puVar27[3] = puStack_f0[2];
          uVar33 = puStack_f0[1];
          puVar27[1] = *puStack_f0;
          puVar27[2] = uVar33;
        }
        else {
          FUN_04885070(puVar27 + 1,puVar16[0x14],puVar16[0x13]);
        }
      }
      *puVar27 = *puStack_150;
      puVar27[5] = (ulong)puVar24;
      puVar27[6] = (ulong)plStack_158;
      LOCK();
      plStack_158[1] = plStack_158[1] + 1;
      UNLOCK();
      puVar27 = puVar27 + 7;
      *(ulong **)(puVar32 + 0x24) = puVar27;
      goto LAB_04b9e114;
    }
    lVar28 = (long)puVar27 - *(long *)(puVar32 + 0x22);
    pbVar29 = (byte *)((lVar28 >> 3) * 0x6db6db6db6db6db7 + 1);
    if (pbVar29 < (byte *)0x492492492492493) {
      lVar21 = (long)*(ulong **)(puVar32 + 0x26) - *(long *)(puVar32 + 0x22) >> 3;
      pbVar7 = (byte *)(lVar21 * -0x2492492492492492);
      if (pbVar29 < pbVar7) {
        pbVar29 = pbVar7;
      }
      plStack_128 = (long *)(puVar32 + 0x22);
      if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
        pbVar29 = (byte *)0x492492492492492;
      }
      plStack_f8 = plStack_128;
      if (pbVar29 == (byte *)0x0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
        if ((byte *)0x492492492492492 < pbVar29) goto LAB_04b9e2a4;
        puVar17 = (undefined8 *)
                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar29 * 0x38);
        if (puVar17 == (undefined8 *)0x0) {
          FUN_0eec74c0((long)pbVar29 * 0x38,0);
          puVar17 = (undefined8 *)0x0;
        }
      }
      puVar27 = (ulong *)((long)puVar17 + lVar28);
      puStack_130 = puVar17 + (long)pbVar29 * 7;
      puVar34 = (undefined8 *)((long)puVar17 + lVar28 + 0x10);
      *puVar34 = 0;
      puVar34[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar28) = 0;
      ((undefined8 *)((long)puVar17 + lVar28))[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar28 + 0x20) = 0;
      puStack_138 = puVar27;
      puStack_148 = puVar17;
      puStack_140 = puVar27;
      if (puVar27 != puStack_150) {
        puVar30 = (uint *)((long)puVar17 + lVar28 + 8);
        if ((*puStack_f0 & 1) == 0) {
          *(ulong *)((long)puVar17 + lVar28 + 0x18) = puStack_f0[2];
          uVar11 = *(uint *)((long)puStack_f0 + 4);
          uVar33 = puStack_f0[1];
          uVar12 = *(uint *)((long)puStack_f0 + 0xc);
          *puVar30 = (uint)*puStack_f0;
          *(uint *)((long)puVar17 + lVar28 + 0xc) = uVar11;
          *(uint *)((long)puVar17 + lVar28 + 0x10) = (uint)uVar33;
          *(uint *)((long)puVar17 + lVar28 + 0x14) = uVar12;
        }
        else {
          FUN_04885070(puVar30,puVar16[0x14],puVar16[0x13]);
        }
      }
      plVar26 = plStack_f8;
      *puVar27 = *puStack_150;
      puVar27[5] = (ulong)puVar24;
      puVar27[6] = (ulong)plStack_158;
      LOCK();
      plStack_158[1] = plStack_158[1] + 1;
      UNLOCK();
      puStack_138 = puStack_138 + 7;
      puVar34 = *(undefined8 **)(puVar32 + 0x22);
      puVar5 = *(undefined8 **)(puVar32 + 0x24);
      puVar17 = (undefined8 *)((long)puStack_140 + ((long)puVar34 - (long)puVar5));
      puVar18 = puVar17;
      puVar22 = puVar34;
      if ((long)puVar34 - (long)puVar5 != 0) {
        do {
          puVar18[2] = 0;
          puVar18[3] = 0;
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18[4] = 0;
          puVar18[3] = puVar22[3];
          uVar19 = puVar22[2];
          puVar18[1] = puVar22[1];
          puVar18[2] = uVar19;
          *(undefined2 *)(puVar22 + 1) = 0;
          *puVar18 = *puVar22;
          uVar19 = puVar22[6];
          puVar18[5] = puVar22[5];
          puVar18[6] = uVar19;
          puVar22[5] = 0;
          puVar22[6] = 0;
          puVar22 = puVar22 + 7;
          puVar18 = puVar18 + 7;
        } while (puVar22 != puVar5);
        do {
          plVar6 = (long *)puVar34[6];
          if (plVar6 == (long *)0x0) {
LAB_04b9e0a5:
            bVar4 = *(byte *)(puVar34 + 1);
          }
          else {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar28 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar28 != 0) goto LAB_04b9e0a5;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            func_0x0412c2d0(plVar6);
            bVar4 = *(byte *)(puVar34 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar34[3],puVar34[1] & 0xfffffffffffffffe);
          }
          puVar34 = puVar34 + 7;
        } while (puVar34 != puVar5);
        puVar34 = (undefined8 *)*plVar26;
      }
      puVar27 = puStack_138;
      *(undefined8 **)(puVar32 + 0x22) = puVar17;
      *(ulong **)(puVar32 + 0x24) = puStack_138;
      lVar28 = *(long *)(puVar32 + 0x26);
      *(undefined8 **)(puVar32 + 0x26) = puStack_130;
      if (puVar34 != (undefined8 *)0x0) {
        func_0x0412a280(puVar34,lVar28 - (long)puVar34);
      }
LAB_04b9e114:
      puVar24 = puStack_e0;
      *(ulong **)(puVar32 + 0x24) = puVar27;
      uVar8 = *puVar32;
      uVar9 = puVar32[1];
      uVar10 = puVar32[2];
      uVar13 = puVar32[3];
      if (*(long *)(puVar32 + 2) != 0) {
        LOCK();
        plVar26 = (long *)(*(long *)(puVar32 + 2) + 8);
        *plVar26 = *plVar26 + 1;
        UNLOCK();
      }
      plVar26 = (long *)puVar16[0xf];
      *(undefined4 *)(puVar16 + 0xe) = uVar8;
      *(undefined4 *)((long)puVar16 + 0x74) = uVar9;
      *(undefined4 *)(puVar16 + 0xf) = uVar10;
      *(undefined4 *)((long)puVar16 + 0x7c) = uVar13;
      if (plVar26 != (long *)0x0) {
        LOCK();
        plVar6 = plVar26 + 1;
        lVar28 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          func_0x0412c2d0(plVar26);
        }
      }
      plVar26 = plStack_158;
      *(undefined1 *)(puVar16 + 0x10) = *(undefined1 *)((long)puVar32 + 0xa1);
      LOCK();
      lVar28 = *plStack_d8;
      *plStack_d8 = *plStack_d8 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        func_0x0412c2d0(plVar26);
        LOCK();
        uVar33 = *puVar24;
        *puVar24 = *puVar24 - 1;
        UNLOCK();
      }
      else {
        LOCK();
        uVar33 = *puVar24;
        *puVar24 = *puVar24 - 1;
        UNLOCK();
      }
      if (uVar33 == 0) {
        (**(code **)(*puVar16 + 0x10))(puVar16);
        func_0x0412c2d0(puVar16);
        LOCK();
        uVar33 = *puVar24;
        *puVar24 = *puVar24 - 1;
        UNLOCK();
      }
      else {
        LOCK();
        uVar33 = *puVar24;
        *puVar24 = *puVar24 - 1;
        UNLOCK();
      }
      if (uVar33 == 0) {
        (**(code **)(*puVar16 + 0x10))(puVar16);
        func_0x0412c2d0(puVar16);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      puVar16 = puStack_c0;
      if ((uStack_180 & 1) != 0) {
        func_0x0412a280(lStack_170,uStack_180 & 0xfffffffffffffffe);
      }
      return puVar16;
    }
  }
  else {
    lVar21 = uVar33 - uStack_e8;
    pbVar29 = (byte *)((lVar21 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((byte *)0x186186186186186 < pbVar29) goto LAB_04b9e2ae;
    lVar20 = (long)(*(ulong *)(lStack_d0 + 200) - uStack_e8) >> 3;
    pbVar7 = (byte *)(lVar20 * -0x6186186186186186);
    if (pbVar29 < pbVar7) {
      pbVar29 = pbVar7;
    }
    plVar26 = (long *)(lStack_d0 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar20 * -0x30c30c30c30c30c3)) {
      pbVar29 = (byte *)0x186186186186186;
    }
    plStack_128 = plVar26;
    if (pbVar29 == (byte *)0x0) {
      puVar17 = (undefined8 *)0x0;
LAB_04b9da8f:
      puStack_140 = (ulong *)(lVar21 + (long)puVar17);
      puStack_130 = puVar17 + (long)pbVar29 * 0x15;
      puStack_148 = puVar17;
      puStack_138 = puStack_140;
      func_0x04b9fbc0(puStack_140);
      puVar27 = puStack_138 + 0x15;
      lVar21 = *(long *)(lVar28 + 0xb8);
      lVar28 = *(long *)(lVar28 + 0xc0);
      lVar20 = (lVar21 - lVar28) + (long)puStack_140;
      if (lVar21 != lVar28) {
        lVar25 = 0;
        do {
          uVar19 = ((undefined8 *)(lVar21 + lVar25))[1];
          *(undefined8 *)(lVar20 + lVar25) = *(undefined8 *)(lVar21 + lVar25);
          ((undefined8 *)(lVar20 + lVar25))[1] = uVar19;
          *(undefined8 *)(lVar21 + lVar25) = 0;
          ((undefined8 *)(lVar21 + lVar25))[1] = 0;
          puVar17 = (undefined8 *)(lVar20 + 0x20 + lVar25);
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17 = (undefined8 *)(lVar20 + 0x10 + lVar25);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar20 + 0x30 + lVar25) = 0;
          *(undefined8 *)(lVar20 + 0x28 + lVar25) = *(undefined8 *)(lVar21 + 0x28 + lVar25);
          puVar32 = (undefined4 *)(lVar21 + 0x18 + lVar25);
          uVar8 = puVar32[1];
          uVar9 = puVar32[2];
          uVar10 = puVar32[3];
          puVar3 = (undefined4 *)(lVar20 + 0x18 + lVar25);
          *puVar3 = *puVar32;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(undefined2 *)(lVar21 + 0x18 + lVar25) = 0;
          *(undefined8 *)(lVar20 + 0x10 + lVar25) = *(undefined8 *)(lVar21 + 0x10 + lVar25);
          func_0x04167a20(lVar20 + lVar25 + 0x38,lVar21 + lVar25 + 0x38);
          puVar17 = (undefined8 *)(lVar21 + 0x40 + lVar25);
          uVar19 = puVar17[1];
          puVar34 = (undefined8 *)(lVar20 + 0x40 + lVar25);
          *puVar34 = *puVar17;
          puVar34[1] = uVar19;
          puVar17 = (undefined8 *)(lVar21 + 0x50 + lVar25);
          uVar19 = puVar17[1];
          puVar34 = (undefined8 *)(lVar20 + 0x50 + lVar25);
          *puVar34 = *puVar17;
          puVar34[1] = uVar19;
          puVar17 = (undefined8 *)(lVar21 + 0x60 + lVar25);
          uVar19 = puVar17[1];
          puVar34 = (undefined8 *)(lVar20 + 0x60 + lVar25);
          *puVar34 = *puVar17;
          puVar34[1] = uVar19;
          puVar17 = (undefined8 *)(lVar21 + 0x60 + lVar25);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar20 + 0x70 + lVar25) = *(undefined8 *)(lVar21 + 0x70 + lVar25);
          puVar17 = (undefined8 *)(lVar21 + 0x78 + lVar25);
          uVar19 = puVar17[1];
          puVar34 = (undefined8 *)(lVar20 + 0x78 + lVar25);
          *puVar34 = *puVar17;
          puVar34[1] = uVar19;
          puVar17 = (undefined8 *)(lVar20 + 0x88 + lVar25);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar20 + 0x98 + lVar25) = 0;
          puVar32 = (undefined4 *)(lVar21 + 0x88 + lVar25);
          uVar8 = puVar32[1];
          uVar9 = puVar32[2];
          uVar10 = puVar32[3];
          puVar3 = (undefined4 *)(lVar20 + 0x88 + lVar25);
          *puVar3 = *puVar32;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(undefined8 *)(lVar20 + 0x98 + lVar25) = *(undefined8 *)(lVar21 + 0x98 + lVar25);
          puVar17 = (undefined8 *)(lVar21 + 0x88 + lVar25);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar21 + 0x98 + lVar25) = 0;
          *(undefined2 *)(lVar20 + 0xa0 + lVar25) = *(undefined2 *)(lVar21 + 0xa0 + lVar25);
          lVar2 = lVar21 + lVar25;
          lVar25 = lVar25 + 0xa8;
        } while (lVar2 + 0xa8 != lVar28);
        do {
          func_0x04b9d380(lVar21);
          lVar21 = lVar21 + 0xa8;
        } while (lVar21 != lVar28);
        lVar21 = *plVar26;
      }
      lVar28 = lStack_d0;
      *(long *)(lStack_d0 + 0xb8) = lVar20;
      *(ulong **)(lStack_d0 + 0xc0) = puVar27;
      lVar20 = *(long *)(lStack_d0 + 200);
      *(undefined8 **)(lStack_d0 + 200) = puStack_130;
      if (lVar21 != 0) {
        func_0x0412a280(lVar21,lVar20 - lVar21);
      }
      goto LAB_04b9dc60;
    }
    if (pbVar29 < (byte *)0x186186186186187) {
      puVar17 = (undefined8 *)
                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar29 * 0xa8);
      if (puVar17 == (undefined8 *)0x0) {
        FUN_0eec74c0((long)pbVar29 * 0xa8,0);
        puVar17 = (undefined8 *)0x0;
      }
      goto LAB_04b9da8f;
    }
LAB_04b9e2a4:
    func_0x04882eb0();
  }
  func_0x04b9fe00();
LAB_04b9e2ae:
  uVar19 = func_0x04b9fd30();
  if ((*pbVar29 & 1) != 0) {
    func_0x0412a280(puVar24[3],puVar24[1] & 0xfffffffffffffffe);
  }
  func_0x04b9fd40(&puStack_148);
  plVar26 = plStack_158;
  LOCK();
  lVar28 = *plStack_d8;
  *plStack_d8 = *plStack_d8 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plStack_158 + 0x10))(plStack_158);
    func_0x0412c2d0(plVar26);
  }
  func_0x04b9e490(puVar16);
  func_0x04b9e4c0(puVar16);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_180 & 1) != 0) goto LAB_04b9e3c7;
  do {
    do {
      uVar19 = func_0x0eee2d70(uVar19);
    } while ((uStack_180 & 1) == 0);
LAB_04b9e3c7:
    func_0x0412a280(lStack_170,uStack_180 & 0xfffffffffffffffe);
  } while( true );
}


