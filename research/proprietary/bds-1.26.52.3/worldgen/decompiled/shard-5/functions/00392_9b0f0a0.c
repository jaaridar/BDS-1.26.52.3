/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9c0f0a0 (ELF vaddr 0x9b0f0a0)
 * Label: caller-of-callee
 * Body:  [[09c0f0a0, 09c0f473] [09c0f480, 09c0f4a9] [09c0f4b0, 09c10261] [09c10270, 09c10299] [09c102a0, 09c10bc0]]
 * Ghidra: FUN_09c0f0a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_09c0f0a0(long *param_1,long param_2,byte *param_3,long *param_4,undefined8 param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  uint *puStack_280;
  long *plStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  char cStack_258;
  char cStack_250;
  undefined1 auStack_248 [8];
  uint *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  ulong uStack_1e8;
  byte bStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  char cStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_170;
  long *plStack_168;
  byte *pbStack_160;
  undefined8 *puStack_158;
  uint *puStack_150;
  long lStack_148;
  undefined *puStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  uint *puStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  char cStack_58;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  (**(code **)(*(long *)(param_2 + 0x10) + 0x10))(&plStack_40,param_2 + 0x10);
  if (plStack_40 == (long *)0x0) {
    if (DAT_0f720568 == '\0') goto LAB_09c10b43;
LAB_09c0f15e:
    plStack_288 = _DAT_0f1df340;
    puStack_280 = (uint *)_UNK_0f1df348;
    uStack_298 = _DAT_0f1df330;
    plStack_290 = _UNK_0f1df338;
    plStack_278 = (long *)((ulong)plStack_278 & 0xffffffffffffff00);
    cStack_250 = '\0';
    uStack_238 = (uint *)0x0;
    uStack_230 = (long *)0x0;
    lStack_228 = 0;
    func_0x0eee17a0(&uStack_238,&uStack_298,auStack_248,1);
    if ((cStack_250 == '\x01') && (((ulong)plStack_278 & 1) != 0)) {
      func_0x0412a280(lStack_268,(ulong)plStack_278 & 0xfffffffffffffffe);
    }
    lVar11 = lStack_228;
    plVar13 = uStack_230;
    puVar7 = uStack_238;
    uStack_d8 = 0x18;
    uStack_d0 = 0xf5450c0;
    uStack_98 = 0x18;
    uStack_94 = uStack_d4;
    uStack_90 = 0xf5450c0;
    lStack_c8 = 0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    cStack_58 = '\0';
    puStack_88 = uStack_238;
    plStack_80 = uStack_230;
    lStack_78 = lStack_228;
    lStack_70 = 0;
    lStack_68 = 0;
    lStack_60 = 0;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0f1dfb08;
    lStack_68 = 0;
    lStack_60 = 0;
    lStack_78 = 0;
    lStack_70 = 0;
    puStack_88 = (uint *)0x0;
    plStack_80 = (long *)0x0;
    *(undefined4 *)(plVar8 + 6) = uStack_d8;
    *(undefined4 *)((long)plVar8 + 0x34) = uStack_d4;
    *(undefined4 *)(plVar8 + 7) = (undefined4)uStack_d0;
    *(undefined4 *)((long)plVar8 + 0x3c) = uStack_d0._4_4_;
    plVar8[8] = (long)puVar7;
    plVar8[9] = (long)plVar13;
    plVar8[10] = lVar11;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    plVar8[3] = (long)&UNK_0f1dfb58;
    *(undefined1 *)(plVar8 + 0xe) = 0;
    *(undefined1 *)(plVar8 + 0xf) = 1;
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar8[2] = plVar8[2] + 1;
    UNLOCK();
    plVar8[4] = (long)(plVar8 + 4);
    plVar8[5] = (long)plVar8;
    LOCK();
    plVar13 = plVar8 + 1;
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
    lVar11 = lStack_70;
    *param_1 = (long)(plVar8 + 3);
    param_1[1] = (long)plVar8;
    if (cStack_58 == '\0') {
      lVar16 = lStack_68;
      if (lStack_70 != 0) {
        while (lVar11 != lVar16) {
          func_0x048b3e80(lVar16 + -0x40);
          lVar16 = lVar16 + -0x40;
        }
        lStack_68 = lVar11;
        func_0x0412a280(lStack_70,lStack_60 - lStack_70);
      }
      puVar7 = puStack_88;
      plVar13 = plStack_80;
      if (puStack_88 != (uint *)0x0) {
        for (; puVar7 != (uint *)plVar13; plVar13 = (long *)((long)plVar13 + -0x50)) {
          if ((*(char *)((long)plVar13 + -8) == '\x01') &&
             ((*(byte *)((long)plVar13 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)((long)plVar13 + -0x20),
                            *(ulong *)((long)plVar13 + -0x30) & 0xfffffffffffffffe);
          }
        }
        plStack_80 = (long *)puVar7;
        func_0x0412a280(puVar7,lStack_78 - (long)puVar7);
      }
    }
    lVar16 = lStack_b0;
    lVar11 = lStack_a8;
    if (lStack_b0 != 0) {
      while (lVar16 != lVar11) {
        func_0x048b3e80(lVar11 + -0x40);
        lVar11 = lVar11 + -0x40;
      }
      lStack_a8 = lVar16;
      func_0x0412a280(lStack_b0,lStack_a0 - lStack_b0);
    }
    lVar14 = lStack_c8;
    lVar11 = lStack_c0;
    lVar16 = lStack_b8;
    if (lStack_c8 == 0) goto LAB_09c10a59;
    for (; lStack_b8 = lVar16, lVar14 != lVar11; lVar11 = lVar11 + -0x50) {
      if ((*(char *)(lVar11 + -8) == '\x01') && ((*(byte *)(lVar11 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar11 + -0x20),
                        *(ulong *)(lVar11 + -0x30) & 0xfffffffffffffffe);
      }
      lVar16 = lStack_b8;
    }
    lStack_c0 = lVar14;
  }
  else {
    plVar13 = plStack_40;
    if (param_3[0x18] == 1) {
      func_0x09c0ad40(&plStack_e8,plStack_40[0x38],param_3,0);
      plVar13 = (long *)plStack_40[0x3a];
      uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffffffffff00);
      cStack_1c0 = '\0';
      bVar2 = param_3[0x18];
      if (bVar2 == 1) {
        if ((*param_3 & 1) == 0) {
          uStack_1c8 = *(ulong *)(param_3 + 0x10);
          uStack_1d8 = *(long **)param_3;
          uStack_1d0 = *(long **)(param_3 + 8);
        }
        else {
          func_0x0412e5e0(&uStack_1d8,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
        }
        cStack_1c0 = '\x01';
      }
      plVar10 = plStack_e0;
      plVar8 = plStack_e8;
      plStack_168 = plStack_40;
      puStack_118 = &UNK_01451441;
      uStack_110 = 0x7d;
      uStack_108 = _DAT_0f778528;
      uStack_100 = 0xffffffff00000001;
      uStack_f8 = 0;
      uStack_f0 = 0;
      plStack_1b8 = plStack_e8;
      plStack_1b0 = plStack_e0;
      plStack_e8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      uStack_1f8 = uStack_1f8 & 0xffffff00;
      bStack_1e0 = 0;
      pbStack_160 = param_3;
      if (bVar2 != 0) {
        if (((ulong)uStack_1d8 & 1) == 0) {
          uStack_1e8 = uStack_1c8;
          uStack_1f8 = (uint)uStack_1d8;
          uStack_1f4 = uStack_1d8._4_4_;
          uStack_1f0 = (uint)uStack_1d0;
          uStack_1ec = uStack_1d0._4_4_;
        }
        else {
          func_0x0412e5e0(&uStack_1f8,uStack_1c8,uStack_1d0);
        }
        bStack_1e0 = 1;
      }
      plStack_1a8 = plVar8;
      plStack_1a0 = plVar10;
      plStack_1b8 = (long *)0x0;
      plStack_1b0 = (long *)0x0;
      puStack_150 = (uint *)0x0;
      puStack_158 = (undefined8 *)&UNK_0f1dd0d8;
      puVar7 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar7 == (uint *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *(undefined1 *)puVar7 = 0;
      *(undefined1 *)(puVar7 + 6) = 0;
      if (bStack_1e0 == 1) {
        if ((uStack_1f8 & 1) == 0) {
          *(ulong *)(puVar7 + 4) = uStack_1e8;
          *puVar7 = uStack_1f8;
          puVar7[1] = uStack_1f4;
          puVar7[2] = uStack_1f0;
          puVar7[3] = uStack_1ec;
        }
        else {
          func_0x0412e5e0(puVar7,uStack_1e8,CONCAT44(uStack_1ec,uStack_1f0));
        }
        *(undefined1 *)(puVar7 + 6) = 1;
      }
      puStack_150 = puVar7;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x160);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(0x160,0);
      }
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&UNK_0f1dcee8;
      if (plVar13 == (long *)0x0) goto LAB_09c10ac9;
      puVar7 = (uint *)(plVar8 + 4);
      uStack_238 = (uint *)0x0;
      uStack_230 = (long *)0x0;
      if (puStack_158 == (undefined8 *)0x0) {
        uStack_238 = (uint *)0x0;
      }
      else {
        (*(code *)*puStack_158)(&puStack_158,&uStack_238);
        uStack_238 = (uint *)puStack_158;
      }
      puStack_158 = (undefined8 *)0x0;
      func_0x0ee25c30(puVar7,plVar13,&puStack_118,1);
      uStack_298 = (uint *)0x0;
      plStack_290 = (long *)0x0;
      if (uStack_238 == (uint *)0x0) {
        uStack_298 = (uint *)0x0;
      }
      else {
        (**(code **)uStack_238)(&uStack_238,&uStack_298);
        uStack_298 = uStack_238;
      }
      uStack_238 = (uint *)0x0;
      plVar8[0x13] = 0;
      plVar8[0x14] = 0;
      plVar8[0x12] = (long)&UNK_0f1dd020;
      plVar8[0x16] = 0;
      plVar8[0x17] = 0;
      if (uStack_298 == (uint *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        (**(code **)uStack_298)(&uStack_298,plVar8 + 0x16);
        puVar9 = (undefined8 *)uStack_298;
      }
      uStack_298 = (uint *)0x0;
      plVar8[0x16] = (long)puVar9;
      *(undefined4 *)(plVar8 + 0x1e) = 0;
      *(undefined1 *)((long)plVar8 + 0xf4) = 1;
      *(undefined2 *)(plVar8 + 0x1f) = 0;
      plVar8[4] = (long)&UNK_0f1dcf38;
      plVar8[0x12] = (long)&UNK_0f1dcf88;
      plVar8[0x20] = 0;
      plVar8[0x21] = 0;
      plVar8[0x22] = 0;
      plVar8[0x23] = 0;
      plVar8[0x24] = 0;
      *(undefined4 *)(plVar8 + 0x25) = 1;
      plVar8[0x2a] = 0;
      plVar8[0x2b] = 0;
      plVar8[0x26] = 0;
      plVar8[0x27] = 0;
      *(undefined8 *)((long)plVar8 + 0x139) = 0;
      *(undefined8 *)((long)plVar8 + 0x141) = 0;
      if (puVar9 == (undefined8 *)0x0) {
        puStack_240 = (uint *)(plVar8 + 0x26);
        cVar5 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_012e1c3a);
        if (cVar5 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
      if (uStack_238 != (uint *)0x0) {
        (**(code **)((long)uStack_238 + 8))(&uStack_238);
      }
      plVar10 = plVar8 + 1;
      if (plVar8[0x14] == 0) {
        LOCK();
        plVar8[1] = plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar8[2] = plVar8[2] + 1;
        UNLOCK();
        plVar8[0x13] = (long)(plVar8 + 0x13);
        plVar8[0x14] = (long)plVar8;
        LOCK();
        lVar11 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
joined_r0x09c0f92a:
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
      }
      else if (*(long *)(plVar8[0x14] + 8) == -1) {
        LOCK();
        plVar8[1] = plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar8[2] = plVar8[2] + 1;
        UNLOCK();
        plVar8[0x13] = (long)(plVar8 + 0x13);
        plVar8[0x14] = (long)plVar8;
        func_0x0412c2d0();
        LOCK();
        lVar11 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        goto joined_r0x09c0f92a;
      }
      LOCK();
      plVar8[1] = plVar8[1] + 1;
      UNLOCK();
      uStack_238 = puVar7;
      uStack_230 = plVar8;
      plStack_170 = plVar10;
      (**(code **)(*plVar13 + 0x20))(plVar13,&uStack_238);
      plVar10 = uStack_230;
      puStack_240 = puVar7;
      plStack_48 = plVar13;
      if (uStack_230 != (long *)0x0) {
        LOCK();
        plVar13 = uStack_230 + 1;
        lVar11 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar11 != 0) goto LAB_09c0f99d;
        (**(code **)(*uStack_230 + 0x10))(uStack_230);
        func_0x0412c2d0(plVar10);
        if (plStack_1a8 != (long *)0x0) goto LAB_09c0f9ae;
LAB_09c0fb92:
        plVar13 = plStack_48;
        if (puStack_158 != (undefined8 *)0x0) {
          (*(code *)puStack_158[1])(&puStack_158);
        }
        plVar10 = plStack_1a0;
        puVar7 = puStack_240;
        if (plStack_1a0 != (long *)0x0) {
          LOCK();
          plVar15 = plStack_1a0 + 1;
          lVar11 = *plVar15;
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
            func_0x0412c2d0(plVar10);
          }
        }
        plVar10 = plStack_170;
        uStack_238 = puVar7;
        LOCK();
        plVar8[1] = plVar8[1] + 1;
        UNLOCK();
        iVar6 = (int)plVar13[0x10];
        uStack_230 = plVar8;
        if (iVar6 != 1) {
          if (iVar6 == 3) {
            *(undefined4 *)(plVar8 + 10) = 0;
          }
          else if (iVar6 == 2) {
            (**(code **)(*(long *)puVar7 + 0x10))(puVar7);
            goto LAB_09c0fc79;
          }
          uStack_298 = puVar7;
          LOCK();
          plVar8[1] = plVar8[1] + 1;
          UNLOCK();
          plStack_290 = plVar8;
          (**(code **)(*plVar13 + 0x28))(plVar13,&uStack_298,0);
          plVar13 = plStack_290;
          if (plStack_290 != (long *)0x0) {
            LOCK();
            plVar15 = plStack_290 + 1;
            lVar11 = *plVar15;
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plStack_290 + 0x10))(plStack_290);
              func_0x0412c2d0(plVar13);
            }
          }
        }
LAB_09c0fc79:
        plVar13 = uStack_230;
        if (uStack_230 != (long *)0x0) {
          LOCK();
          plVar15 = uStack_230 + 1;
          lVar11 = *plVar15;
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*uStack_230 + 0x10))(uStack_230);
            func_0x0412c2d0(plVar13);
          }
        }
        if (((bStack_1e0 & 1) != 0) && ((uStack_1f8 & 1) != 0)) {
          func_0x0412a280(uStack_1e8,CONCAT44(uStack_1f4,uStack_1f8) & 0xfffffffffffffffe);
        }
        plVar13 = plStack_1b0;
        if (plStack_1b0 == (long *)0x0) {
LAB_09c0fcf9:
          LOCK();
          lVar11 = *plVar10;
          *plVar10 = *plVar10 + -1;
          UNLOCK();
        }
        else {
          LOCK();
          plVar15 = plStack_1b0 + 1;
          lVar11 = *plVar15;
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (lVar11 != 0) goto LAB_09c0fcf9;
          (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
          func_0x0412c2d0(plVar13);
          LOCK();
          lVar11 = *plVar10;
          *plVar10 = *plVar10 + -1;
          UNLOCK();
        }
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
        if ((cStack_1c0 == '\x01') && (((ulong)uStack_1d8 & 1) != 0)) {
          func_0x0412a280(uStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
        }
        plVar8 = plStack_e0;
        param_3 = pbStack_160;
        plVar13 = plStack_168;
        if (plStack_e0 != (long *)0x0) {
          LOCK();
          plVar10 = plStack_e0 + 1;
          lVar11 = *plVar10;
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            func_0x0412c2d0(plVar8);
          }
        }
        goto LAB_09c0fd89;
      }
LAB_09c0f99d:
      if (plStack_1a8 == (long *)0x0) goto LAB_09c0fb92;
LAB_09c0f9ae:
      plVar10 = plStack_1a8;
      func_0x09c32430(puStack_240,0,0,0);
      uVar4 = uStack_f8;
      plVar13 = plStack_1a0;
      plStack_1a8 = (long *)0x0;
      plStack_1a0 = (long *)0x0;
      plStack_188 = plVar10;
      plStack_180 = plVar13;
      plStack_198 = (long *)0x0;
      plStack_190 = (long *)0x0;
      func_0x0412d680(plVar8 + 0x20);
      *(undefined1 *)(plVar8 + 0x29) = uVar4;
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar13[1] = plVar13[1] + 1;
        UNLOCK();
      }
      plVar8[0x2a] = (long)plVar10;
      plVar10 = (long *)plVar8[0x2b];
      plVar8[0x2b] = (long)plVar13;
      if (plVar10 != (long *)0x0) {
        LOCK();
        plVar15 = plVar10 + 1;
        lVar11 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          func_0x0412c2d0(plVar10);
        }
      }
      pthread_mutex_unlock(plVar8 + 0x20);
      if (plVar8[0x14] != 0) {
        plVar13 = (long *)plVar8[0x13];
        plVar10 = (long *)func_0x0412c300();
        if (plVar10 != (long *)0x0) {
          plVar15 = plVar13 + -0xf;
          if (plVar13 == (long *)0x0) {
            plVar15 = (long *)0x0;
          }
          LOCK();
          plVar10[2] = plVar10[2] + 1;
          UNLOCK();
          LOCK();
          plVar13 = plVar10 + 1;
          lVar11 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            func_0x0412c2d0(plVar10);
          }
          uStack_298 = (uint *)&UNK_0f1dd068;
          plStack_290 = plVar15;
          plStack_288 = plVar10;
          plStack_278 = &uStack_298;
          (**(code **)(*plStack_188 + 0x30))(plStack_188,&uStack_298);
          if (plStack_278 == &uStack_298) {
            lVar11 = 0x20;
LAB_09c0fb2c:
            (**(code **)(*plStack_278 + lVar11))();
          }
          else {
            lVar11 = 0x28;
            if (plStack_278 != (long *)0x0) goto LAB_09c0fb2c;
          }
          plVar13 = plStack_180;
          if (plStack_180 != (long *)0x0) {
            LOCK();
            plVar10 = plStack_180 + 1;
            lVar11 = *plVar10;
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plStack_180 + 0x10))(plStack_180);
              func_0x0412c2d0(plVar13);
            }
          }
          plVar13 = plStack_190;
          if (plStack_190 != (long *)0x0) {
            LOCK();
            plVar10 = plStack_190 + 1;
            lVar11 = *plVar10;
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plStack_190 + 0x10))(plStack_190);
              func_0x0412c2d0(plVar13);
            }
          }
          goto LAB_09c0fb92;
        }
      }
LAB_09c10b3e:
      func_0x04891290();
      param_1 = plVar13;
LAB_09c10b43:
      iVar6 = func_0x04108328(&DAT_0f720568);
      if (iVar6 != 0) {
        func_0x0eee2f40(&UNK_041369a0,0xf5450c0,0xf53dab8);
        FUN_0410844d(&DAT_0f720568);
      }
      goto LAB_09c0f15e;
    }
LAB_09c0fd89:
    func_0x0412d680(plVar13 + 3);
    lVar11 = plVar13[8];
    pthread_mutex_unlock(plVar13 + 3);
    if (lVar11 != 0) {
      if (param_3[0x18] != 0) {
        lVar11 = plVar13[0x38];
        uStack_1f8 = uStack_1f8 & 0xffffff00;
        uStack_1e8 = uStack_1e8 & 0xffffffffffffff00;
        uVar12 = func_0x0412dd40();
        func_0x09c0af10(lVar11,param_4,param_3,0,uVar12,param_6,uStack_1f8,uStack_1f0,uStack_1e8);
      }
      puVar7 = (uint *)plVar13[0x3a];
      (**(code **)(*plVar13 + 0x10))(&plStack_1b8,plVar13,param_4);
      plStack_190 = plStack_1b0;
      plStack_198 = plStack_1b8;
      puStack_118 = &UNK_01451441;
      uStack_110 = 0x7d;
      uStack_108 = _DAT_0f778528;
      uStack_100 = 0xffffffff00000001;
      uStack_f8 = 0;
      uStack_f0 = 0;
      plStack_1b8 = (long *)0x0;
      plStack_1b0 = (long *)0x0;
      plStack_1a8 = (long *)0x0;
      plStack_1a0 = (long *)0x0;
      puStack_150 = (uint *)0x0;
      puStack_158 = (undefined8 *)&UNK_0f1dd340;
      param_4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x180);
      if (param_4 == (long *)0x0) goto LAB_09c10ace;
      while( true ) {
        param_4[1] = 0;
        param_4[2] = 0;
        *param_4 = (long)&UNK_0f1dd100;
        if (puVar7 != (uint *)0x0) break;
LAB_09c10ac9:
        func_0x04890760();
LAB_09c10ace:
        func_0x0eec74c0(0x180,0);
      }
      puVar1 = (uint *)(param_4 + 4);
      uStack_238 = (uint *)0x0;
      uStack_230 = (long *)0x0;
      if (puStack_158 == (undefined8 *)0x0) {
        uStack_238 = (uint *)0x0;
      }
      else {
        (*(code *)*puStack_158)(&puStack_158,&uStack_238);
        uStack_238 = (uint *)puStack_158;
      }
      puStack_158 = (undefined8 *)0x0;
      func_0x0ee25c30(puVar1,puVar7,&puStack_118,1);
      uStack_298 = (uint *)0x0;
      plStack_290 = (long *)0x0;
      if (uStack_238 == (uint *)0x0) {
        uStack_298 = (uint *)0x0;
      }
      else {
        (**(code **)uStack_238)(&uStack_238,&uStack_298);
        uStack_298 = uStack_238;
      }
      uStack_238 = (uint *)0x0;
      param_4[0x13] = 0;
      param_4[0x14] = 0;
      param_4[0x12] = (long)&UNK_0f1dd288;
      param_4[0x16] = 0;
      param_4[0x17] = 0;
      if (uStack_298 == (uint *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        (**(code **)uStack_298)(&uStack_298,param_4 + 0x16);
        puVar9 = (undefined8 *)uStack_298;
      }
      pbVar17 = (byte *)(param_4 + 0x12);
      uStack_298 = (uint *)0x0;
      param_4[0x16] = (long)puVar9;
      *(undefined4 *)(param_4 + 0x1e) = 0;
      lVar11 = func_0x0412dd40();
      param_4[0x1f] = lVar11;
      *(undefined1 *)(param_4 + 0x20) = 1;
      *(undefined1 *)(param_4 + 0x21) = 0;
      *(undefined1 *)(param_4 + 0x23) = 0;
      param_4[4] = (long)&UNK_0f1dd150;
      param_4[0x12] = (long)&UNK_0f1dd1a0;
      param_4[0x24] = 0;
      param_4[0x25] = 0;
      param_4[0x26] = 0;
      param_4[0x27] = 0;
      param_4[0x28] = 0;
      *(undefined4 *)(param_4 + 0x29) = 1;
      param_4[0x2e] = 0;
      param_4[0x2f] = 0;
      param_4[0x2a] = 0;
      param_4[0x2b] = 0;
      *(undefined8 *)((long)param_4 + 0x159) = 0;
      *(undefined8 *)((long)param_4 + 0x161) = 0;
      if ((puVar9 == (undefined8 *)0x0) &&
         (cVar5 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_0138057f),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if (uStack_238 != (uint *)0x0) {
        (**(code **)((long)uStack_238 + 8))(&uStack_238);
      }
      plVar13 = param_4 + 1;
      if (param_4[0x14] == 0) {
        LOCK();
        param_4[1] = param_4[1] + 1;
        UNLOCK();
        LOCK();
        param_4[2] = param_4[2] + 1;
        UNLOCK();
        param_4[0x13] = (long)(param_4 + 0x13);
        param_4[0x14] = (long)param_4;
        LOCK();
        lVar11 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
joined_r0x09c104fe:
        if (lVar11 == 0) {
          (**(code **)(*param_4 + 0x10))(param_4);
          func_0x0412c2d0(param_4);
        }
      }
      else if (*(long *)(param_4[0x14] + 8) == -1) {
        LOCK();
        param_4[1] = param_4[1] + 1;
        UNLOCK();
        LOCK();
        param_4[2] = param_4[2] + 1;
        UNLOCK();
        param_4[0x13] = (long)(param_4 + 0x13);
        param_4[0x14] = (long)param_4;
        func_0x0412c2d0();
        LOCK();
        lVar11 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        goto joined_r0x09c104fe;
      }
      LOCK();
      param_4[1] = param_4[1] + 1;
      UNLOCK();
      puStack_240 = puVar7;
      uStack_238 = puVar1;
      uStack_230 = param_4;
      plStack_168 = plVar13;
      (**(code **)(*(long *)puVar7 + 0x20))(puVar7,&uStack_238);
      plVar13 = uStack_230;
      if (uStack_230 == (long *)0x0) {
LAB_09c10568:
        if (plStack_198 == (long *)0x0) goto LAB_09c10778;
LAB_09c10579:
        plVar8 = plStack_198;
        pbStack_160 = pbVar17;
        func_0x09c337c0(puVar1,0,0,0);
        uVar4 = uStack_f8;
        plVar10 = plStack_190;
        plVar13 = param_4 + 0x24;
        plStack_198 = (long *)0x0;
        plStack_190 = (long *)0x0;
        uStack_1d8 = plVar8;
        uStack_1d0 = plVar10;
        plStack_188 = (long *)0x0;
        plStack_180 = (long *)0x0;
        func_0x0412d680(plVar13);
        *(undefined1 *)(param_4 + 0x2d) = uVar4;
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar10[1] = plVar10[1] + 1;
          UNLOCK();
        }
        param_4[0x2e] = (long)plVar8;
        plVar8 = (long *)param_4[0x2f];
        param_4[0x2f] = (long)plVar10;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          lVar11 = *plVar10;
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            func_0x0412c2d0(plVar8);
          }
        }
        pthread_mutex_unlock(plVar13);
        if (param_4[0x14] != 0) {
          lVar11 = param_4[0x13];
          plVar8 = (long *)func_0x0412c300();
          if (plVar8 != (long *)0x0) {
            plVar13 = (long *)(lVar11 + -0x78);
            if (lVar11 == 0) {
              plVar13 = (long *)0x0;
            }
            LOCK();
            plVar8[2] = plVar8[2] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar8 + 1;
            lVar11 = *plVar10;
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              func_0x0412c2d0(plVar8);
            }
            uStack_298 = (uint *)&UNK_0f1dd2d0;
            plStack_290 = plVar13;
            plStack_288 = plVar8;
            plStack_278 = &uStack_298;
            (**(code **)(*uStack_1d8 + 0x30))(uStack_1d8,&uStack_298);
            pbVar17 = pbStack_160;
            if (plStack_278 == &uStack_298) {
              lVar11 = 0x20;
LAB_09c10712:
              (**(code **)(*plStack_278 + lVar11))();
              plVar13 = uStack_1d0;
            }
            else {
              lVar11 = 0x28;
              plVar13 = uStack_1d0;
              if (plStack_278 != (long *)0x0) goto LAB_09c10712;
            }
            uStack_1d0 = plVar13;
            if (plVar13 != (long *)0x0) {
              LOCK();
              plVar8 = plVar13 + 1;
              lVar11 = *plVar8;
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (lVar11 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                func_0x0412c2d0(plVar13);
              }
            }
            plVar13 = plStack_180;
            if (plStack_180 != (long *)0x0) {
              LOCK();
              plVar8 = plStack_180 + 1;
              lVar11 = *plVar8;
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (lVar11 == 0) {
                (**(code **)(*plStack_180 + 0x10))(plStack_180);
                func_0x0412c2d0(plVar13);
              }
            }
            goto LAB_09c10778;
          }
        }
        func_0x04891290();
      }
      else {
        LOCK();
        plVar8 = uStack_230 + 1;
        lVar11 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar11 != 0) goto LAB_09c10568;
        (**(code **)(*uStack_230 + 0x10))(uStack_230);
        func_0x0412c2d0(plVar13);
        if (plStack_198 != (long *)0x0) goto LAB_09c10579;
LAB_09c10778:
        if (puStack_158 != (undefined8 *)0x0) {
          (*(code *)puStack_158[1])(&puStack_158);
        }
        plVar13 = plStack_190;
        if (plStack_190 != (long *)0x0) {
          LOCK();
          plVar8 = plStack_190 + 1;
          lVar11 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*plStack_190 + 0x10))(plStack_190);
            func_0x0412c2d0(plVar13);
          }
        }
        LOCK();
        param_4[1] = param_4[1] + 1;
        UNLOCK();
        uVar3 = puStack_240[0x20];
        uStack_238 = puVar1;
        uStack_230 = param_4;
        if (uVar3 != 1) {
          if (uVar3 == 3) {
            *(undefined4 *)(param_4 + 10) = 0;
          }
          else if (uVar3 == 2) {
            (**(code **)(*(long *)puVar1 + 0x10))(puVar1);
            goto LAB_09c10851;
          }
          LOCK();
          param_4[1] = param_4[1] + 1;
          UNLOCK();
          uStack_298 = puVar1;
          plStack_290 = param_4;
          (**(code **)(*(long *)puStack_240 + 0x28))(puStack_240,&uStack_298,0);
          plVar13 = plStack_290;
          if (plStack_290 != (long *)0x0) {
            LOCK();
            plVar8 = plStack_290 + 1;
            lVar11 = *plVar8;
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plStack_290 + 0x10))(plStack_290);
              func_0x0412c2d0(plVar13);
            }
          }
        }
LAB_09c10851:
        plVar13 = uStack_230;
        if (uStack_230 != (long *)0x0) {
          LOCK();
          plVar8 = uStack_230 + 1;
          lVar11 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*uStack_230 + 0x10))(uStack_230);
            func_0x0412c2d0(plVar13);
          }
        }
        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
        if (plVar13 == (long *)0x0) {
          func_0x0eec74c0(0x98,0);
        }
        plVar13[1] = 0;
        plVar13[2] = 0;
        *plVar13 = (long)&UNK_0f1dd388;
        plVar13[6] = 0;
        plVar13[7] = 0;
        plVar13[8] = 0;
        plVar13[9] = 0;
        *(undefined8 *)((long)plVar13 + 0x4a) = 0;
        *(undefined8 *)((long)plVar13 + 0x52) = 0;
        plVar13[0xc] = (long)pbVar17;
        plVar13[0xd] = (long)param_4;
        plVar13[0xe] = 0;
        plVar13[0xf] = 0;
        plVar13[0x10] = 0;
        plVar13[0x11] = 0;
        plVar13[0x12] = 0;
        plVar13[3] = (long)&UNK_0f1dd3d8;
        LOCK();
        plVar13[1] = plVar13[1] + 1;
        UNLOCK();
        LOCK();
        plVar13[2] = plVar13[2] + 1;
        UNLOCK();
        plVar13[4] = (long)(plVar13 + 4);
        plVar13[5] = (long)plVar13;
        LOCK();
        plVar8 = plVar13 + 1;
        lVar11 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar11 != 0) {
          plVar8 = (long *)plVar13[0xc];
          if (plVar8 != (long *)0x0) goto LAB_09c10927;
LAB_09c109b5:
          func_0x0412d680(plVar13 + 6);
          *(undefined1 *)((long)plVar13 + 0x59) = 1;
          pthread_mutex_unlock(plVar13 + 6);
          plVar8 = plStack_1a0;
joined_r0x09c109de:
          plStack_1a0 = plVar8;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar10 = plVar8 + 1;
            lVar11 = *plVar10;
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              func_0x0412c2d0(plVar8);
            }
          }
          plVar8 = plStack_1b0;
          *param_1 = (long)(plVar13 + 3);
          param_1[1] = (long)plVar13;
          if (plStack_1b0 != (long *)0x0) {
            LOCK();
            plVar13 = plStack_1b0 + 1;
            lVar11 = *plVar13;
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
              func_0x0412c2d0(plVar8);
            }
          }
          goto LAB_09c10a59;
        }
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
        plVar8 = (long *)plVar13[0xc];
        if (plVar8 == (long *)0x0) goto LAB_09c109b5;
LAB_09c10927:
        if (plVar13[5] != 0) {
          lVar11 = plVar13[4];
          plVar10 = (long *)func_0x0412c300();
          if (plVar10 != (long *)0x0) {
            plStack_290 = (long *)(lVar11 + -8);
            if (lVar11 == 0) {
              plStack_290 = (long *)0x0;
            }
            uStack_298 = (uint *)&UNK_0f1dd498;
            plStack_288 = plVar10;
            plStack_278 = &uStack_298;
            (**(code **)(*plVar8 + 0x30))(plVar8,&uStack_298);
            if (plStack_278 == &uStack_298) {
              lVar11 = 0x20;
            }
            else {
              lVar11 = 0x28;
              plVar8 = plStack_1a0;
              if (plStack_278 == (long *)0x0) goto joined_r0x09c109de;
            }
            (**(code **)(*plStack_278 + lVar11))();
            plVar8 = plStack_1a0;
            goto joined_r0x09c109de;
          }
        }
      }
      func_0x04891290();
      goto LAB_09c10b3e;
    }
    if (param_3[0x18] != 0) {
      lVar11 = plVar13[0x38];
      puStack_118 = (undefined *)((ulong)puStack_118 & 0xffffffffffffff00);
      uStack_108 = uStack_108 & 0xffffffffffffff00;
      uStack_298 = (uint *)((ulong)uStack_298 & 0xffffffffffff0000);
      uVar12 = func_0x0412dc70();
      func_0x09c0af10(lVar11,&uStack_298,param_3,0x58,uVar12,param_6,puStack_118._0_4_,
                      (undefined4)uStack_110,uStack_108);
      if (((ulong)uStack_298 & 1) != 0) {
        func_0x0412a280(plStack_288,(ulong)uStack_298 & 0xfffffffffffffffe);
      }
    }
    if ((DAT_0f720568 == '\0') && (iVar6 = func_0x04108328(&DAT_0f720568), iVar6 != 0)) {
      func_0x0eee2f40(&UNK_041369a0,0xf5450c0,0xf53dab8);
      FUN_0410844d(&DAT_0f720568);
    }
    plStack_288 = (long *)_DAT_0f1dfa68;
    puStack_280 = (uint *)_UNK_0f1dfa70;
    uStack_298 = (uint *)_DAT_0f1dfa58;
    plStack_290 = (long *)_UNK_0f1dfa60;
    plStack_278 = (long *)((ulong)plStack_278 & 0xffffffffffffff00);
    cStack_250 = '\0';
    puStack_158 = (undefined8 *)0x0;
    puStack_150 = (uint *)0x0;
    lStack_148 = 0;
    func_0x0eee17a0(&puStack_158,&uStack_298,auStack_248,1);
    if ((cStack_250 == '\x01') && (((ulong)plStack_278 & 1) != 0)) {
      func_0x0412a280(lStack_268,(ulong)plStack_278 & 0xfffffffffffffffe);
    }
    lVar11 = lStack_148;
    puVar7 = puStack_150;
    puVar9 = puStack_158;
    uStack_238 = (uint *)CONCAT44(uStack_238._4_4_,0x19);
    uStack_230 = (long *)0xf5450c0;
    uStack_298 = (uint *)CONCAT44(uStack_238._4_4_,0x19);
    plStack_290 = (long *)0xf5450c0;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    lStack_210 = 0;
    lStack_208 = 0;
    lStack_200 = 0;
    cStack_258 = '\0';
    plStack_288 = puStack_158;
    puStack_280 = puStack_150;
    plStack_278 = (long *)lStack_148;
    lStack_270 = 0;
    lStack_268 = 0;
    lStack_260 = 0;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0f1dfb08;
    lStack_268 = 0;
    lStack_260 = 0;
    plStack_278 = (long *)0x0;
    lStack_270 = 0;
    plStack_288 = (long *)0x0;
    puStack_280 = (uint *)0x0;
    *(undefined4 *)(plVar13 + 6) = (undefined4)uStack_238;
    *(undefined4 *)((long)plVar13 + 0x34) = uStack_238._4_4_;
    *(undefined4 *)(plVar13 + 7) = (undefined4)uStack_230;
    *(undefined4 *)((long)plVar13 + 0x3c) = uStack_230._4_4_;
    plVar13[8] = (long)puVar9;
    plVar13[9] = (long)puVar7;
    plVar13[10] = lVar11;
    plVar13[0xb] = 0;
    plVar13[0xc] = 0;
    plVar13[0xd] = 0;
    plVar13[3] = (long)&UNK_0f1dfb58;
    *(undefined1 *)(plVar13 + 0xe) = 0;
    *(undefined1 *)(plVar13 + 0xf) = 1;
    LOCK();
    plVar13[1] = plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar13[2] = plVar13[2] + 1;
    UNLOCK();
    plVar13[4] = (long)(plVar13 + 4);
    plVar13[5] = (long)plVar13;
    LOCK();
    plVar8 = plVar13 + 1;
    lVar11 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
    lVar11 = lStack_270;
    *param_1 = (long)(plVar13 + 3);
    param_1[1] = (long)plVar13;
    if (cStack_258 == '\0') {
      lVar16 = lStack_268;
      if (lStack_270 != 0) {
        while (lVar11 != lVar16) {
          func_0x048b3e80(lVar16 + -0x40);
          lVar16 = lVar16 + -0x40;
        }
        lStack_268 = lVar11;
        func_0x0412a280(lStack_270,lStack_260 - lStack_270);
      }
      plVar13 = plStack_288;
      puVar7 = puStack_280;
      if (plStack_288 != (long *)0x0) {
        for (; (uint *)plVar13 != puVar7; puVar7 = (uint *)((long)puVar7 + -0x50)) {
          if (((char)*(long *)((long)puVar7 + -8) == '\x01') &&
             ((*(byte *)((long)puVar7 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(long *)((long)puVar7 + -0x20),
                            *(ulong *)((long)puVar7 + -0x30) & 0xfffffffffffffffe);
          }
        }
        puStack_280 = (uint *)plVar13;
        func_0x0412a280(plVar13,(long)plStack_278 - (long)plVar13);
      }
    }
    lVar16 = lStack_210;
    lVar11 = lStack_208;
    if (lStack_210 != 0) {
      while (lVar16 != lVar11) {
        func_0x048b3e80(lVar11 + -0x40);
        lVar11 = lVar11 + -0x40;
      }
      func_0x0412a280(lStack_210,lStack_200 - lStack_210);
    }
    lVar14 = lStack_228;
    lVar11 = lStack_220;
    lVar16 = lStack_218;
    if (lStack_228 == 0) goto LAB_09c10a59;
    for (; lStack_218 = lVar16, lVar14 != lVar11; lVar11 = lVar11 + -0x50) {
      if ((*(char *)(lVar11 + -8) == '\x01') && ((*(byte *)(lVar11 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar11 + -0x20),
                        *(ulong *)(lVar11 + -0x30) & 0xfffffffffffffffe);
      }
      lVar16 = lStack_218;
    }
  }
  func_0x0412a280(lVar14,lVar16 - lVar14);
LAB_09c10a59:
  if (plStack_38 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_38 + 1;
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      func_0x0412c2d0(plStack_38);
    }
  }
  return param_1;
}


