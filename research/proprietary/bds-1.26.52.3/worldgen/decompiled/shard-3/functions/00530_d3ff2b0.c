/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4ff2b0 (ELF vaddr 0xd3ff2b0)
 * Label: caller-of-callee
 * Body:  [[0d4ff2b0, 0d500b12]]
 * Ghidra: FUN_0d4ff2b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d4ff2b0(long *param_1,long param_2,long param_3)

{
  char *pcVar1;
  long *plVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined2 uVar9;
  char cVar10;
  long *plVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  long lStack_238;
  ulong uStack_230;
  ulong uStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  char *pcStack_208;
  long lStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined2 auStack_1b0 [4];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined2 uStack_188;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long *plStack_168;
  long *plStack_160;
  char *pcStack_158;
  long lStack_150;
  long lStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long *plStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_e8;
  undefined1 uStack_d8;
  undefined2 uStack_d6;
  undefined1 uStack_d4;
  long *plStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined2 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  func_0x05d54750(&plStack_168,&UNK_0f0863e8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = (long)(param_1 + 4);
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = (long)plStack_168;
  param_1[0x13] = 0;
  plVar11 = plStack_160;
  plStack_220 = param_1;
  if (((ulong)plStack_160 >> 0x37 & 1) != 0) {
    uVar19 = (ulong)plStack_160 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar19 - 8);
    lVar12 = lVar21 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar11 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar11 = lVar21;
    func_0x0eee2f00(plVar11 + 1,uVar19,lVar21);
    *(undefined1 *)((long)plVar11 + lVar21 + 8) = 0;
    plVar11 = (long *)((ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  plStack_220[0x13] = (long)plVar11;
  plStack_220[0x14] = 0;
  if (((ulong)pcStack_158 & 0x80000000000000) == 0) {
    plStack_220[0x14] = (long)pcStack_158;
    plVar15 = plStack_220 + 0x15;
    plStack_220[0x15] = 0;
    plStack_220[0x16] = 0;
    plStack_220[0x17] = 0;
    plStack_220[0x18] = 0;
    plStack_220[0x19] = 0;
    plStack_220[0x1a] = 0;
    plStack_220[0x1b] = 0;
    plStack_220[0x1c] = 0;
    plStack_220[0x1d] = 0;
    plVar17 = plStack_220;
  }
  else {
    plStack_1d0 = plStack_220 + 0x13;
    uVar19 = (ulong)pcStack_158 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar19 - 8);
    lVar12 = lVar21 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar11 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar11 = lVar21;
    func_0x0eee2f00(plVar11 + 1,uVar19,lVar21);
    plVar17 = plStack_220;
    *(undefined1 *)((long)plVar11 + lVar21 + 8) = 0;
    plVar15 = plStack_220 + 0x15;
    plStack_220[0x14] = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    plStack_220[0x1b] = 0;
    plStack_220[0x1c] = 0;
    plStack_220[0x19] = 0;
    plStack_220[0x1a] = 0;
    plStack_220[0x17] = 0;
    plStack_220[0x18] = 0;
    plStack_220[0x15] = 0;
    plStack_220[0x16] = 0;
    plStack_220[0x1d] = 0;
    if (((ulong)pcStack_158 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pcStack_158 & 0xff00ffffffffffff) - 8);
    }
  }
  pcStack_158 = (char *)0x0;
  if (((ulong)plStack_160 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_160 & 0xff00ffffffffffff) - 8)
    ;
  }
  plVar17[0x1e] = param_3;
  plVar11 = (long *)plVar17[0x16];
  plVar17[0x15] = 0;
  plVar17[0x16] = 0;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar17[0x17] = 0;
  lVar12 = *(long *)(param_2 + 8);
  lVar21 = *(long *)(param_2 + 0x10);
  if (lVar21 != 0) {
    LOCK();
    *(long *)(lVar21 + 8) = *(long *)(lVar21 + 8) + 1;
    UNLOCK();
  }
  plVar17[0x15] = lVar12;
  plVar11 = (long *)plVar17[0x16];
  plVar17[0x16] = lVar21;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
    lVar12 = *plVar15;
  }
  if (lVar12 != 0) {
    plVar17[0x17] = param_2;
  }
  auStack_1b0[0] = 0xffff;
  uStack_1a8 = 0;
  uStack_1a0 = (long *)0x0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0x100;
  puVar13 = (undefined2 *)plVar17[0x18];
  if (puVar13 == (undefined2 *)0x0) {
    puVar13 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar13 == (undefined2 *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    *puVar13 = auStack_1b0[0];
    *(undefined8 *)(puVar13 + 4) = uStack_1a8;
    *(long **)(puVar13 + 8) = uStack_1a0;
    uStack_1a8 = 0;
    uStack_1a0 = (long *)0x0;
    *(undefined8 *)(puVar13 + 0xc) = uStack_198;
    uStack_198 = 0;
    puVar13[0x14] = uStack_188;
    *(undefined8 *)(puVar13 + 0x10) = uStack_190;
    lVar12 = plVar17[0x18];
    plVar17[0x18] = (long)puVar13;
    if (lVar12 != 0) {
      plVar11 = *(long **)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 8) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar21 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
        plVar11 = *(long **)(lVar12 + 0x10);
        *(undefined8 *)(lVar12 + 0x18) = 0;
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar2 = plVar11 + 1;
          lVar21 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar21 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            func_0x0412c2d0(plVar11);
          }
        }
      }
      func_0x0412a280(lVar12,0x30);
    }
  }
  else {
    *puVar13 = 0xffff;
    if (puVar13 != auStack_1b0) {
      plVar11 = *(long **)(puVar13 + 8);
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 8) = 0;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar12 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
      }
      *(undefined8 *)(puVar13 + 0xc) = 0;
      uVar4 = (undefined4)uStack_1a8;
      uVar5 = uStack_1a8._4_4_;
      uVar6 = (undefined4)uStack_1a0;
      uVar7 = uStack_1a0._4_4_;
      uStack_1a8 = 0;
      uStack_1a0 = (long *)0x0;
      plVar11 = *(long **)(puVar13 + 8);
      *(undefined4 *)(puVar13 + 4) = uVar4;
      *(undefined4 *)(puVar13 + 6) = uVar5;
      *(undefined4 *)(puVar13 + 8) = uVar6;
      *(undefined4 *)(puVar13 + 10) = uVar7;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar12 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
      }
      *(undefined8 *)(puVar13 + 0xc) = uStack_198;
    }
    uStack_198 = 0;
    puVar13[0x14] = uStack_188;
    *(undefined8 *)(puVar13 + 0x10) = uStack_190;
  }
  plVar11 = uStack_1a0;
  uStack_1a8 = 0;
  uStack_1a0 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    uStack_198 = 0;
  }
  else {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
    plVar11 = uStack_1a0;
    uStack_198 = 0;
    if (uStack_1a0 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_1a0 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_1a0 + 0x10))(uStack_1a0);
        func_0x0412c2d0(plVar11);
      }
    }
  }
  func_0x05d54750(&lStack_1c8,&UNK_0f472a58);
  if ((((char *)*plVar15 == (char *)0x0) || (*(char *)*plVar15 == '\0')) &&
     (cVar10 = func_0x0eeddcf0(&UNK_013c6966,&UNK_01259d39,0xf5,&UNK_01259d48,&UNK_0135397a),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar17[0x1b] = lStack_1c8;
  if ((plVar17[0x1c] & 0x80000000000000U) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar17[0x1c] & 0xff00ffffffffffffU) - 8);
  }
  plVar17[0x1c] = 0;
  uVar19 = uStack_1c0;
  if ((uStack_1c0 & 0x80000000000000) != 0) {
    uVar19 = uStack_1c0 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar19 - 8);
    lVar12 = lVar21 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar11 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar11 = lVar21;
    func_0x0eee2f00(plVar11 + 1,uVar19,lVar21);
    *(undefined1 *)((long)plVar11 + lVar21 + 8) = 0;
    uVar19 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar17[0x1c] = uVar19;
  if ((plVar17[0x1d] & 0x80000000000000U) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar17[0x1d] & 0xff00ffffffffffffU) - 8);
  }
  plVar17[0x1d] = 0;
  uVar19 = uStack_1b8;
  if ((uStack_1b8 & 0x80000000000000) != 0) {
    uVar19 = uStack_1b8 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar19 - 8);
    lVar12 = lVar21 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar11 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar11 = lVar21;
    func_0x0eee2f00(plVar11 + 1,uVar19,lVar21);
    *(undefined1 *)((long)plVar11 + lVar21 + 8) = 0;
    uVar19 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plStack_210 = plVar17 + 0x12;
  plVar17[0x1d] = uVar19;
  pcVar1 = (char *)plVar17[0x15];
  lVar12 = plVar17[0x16];
  if (lVar12 != 0) {
    LOCK();
    *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  lVar21 = plVar17[0x17];
  plStack_218 = plVar17;
  pcStack_208 = pcVar1;
  lStack_200 = lVar12;
  uStack_1f8 = lVar21;
  if ((plVar17[0x18] == 0) &&
     (cVar10 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_014585bd),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_1f0 = plVar17[0x18];
  puVar14 = (undefined8 *)plVar17[0x19];
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar14 = 0;
    plVar17[0x19] = (long)puVar14;
  }
  plStack_1e0 = plVar17 + 0x1b;
  plStack_168 = plStack_218;
  plStack_160 = plStack_210;
  pcStack_208 = (char *)0x0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1e8._0_4_ = SUB84(puVar14,0);
  uStack_1e8._4_4_ = (undefined4)((ulong)puVar14 >> 0x20);
  uStack_140 = (undefined4)uStack_1f0;
  uStack_13c = uStack_1f0._4_4_;
  uStack_138 = (undefined4)uStack_1e8;
  uStack_134 = uStack_1e8._4_4_;
  uStack_128 = lStack_1c8;
  uStack_120 = 0;
  uVar19 = uStack_1c0;
  uStack_1e8 = puVar14;
  pcStack_158 = pcVar1;
  lStack_150 = lVar12;
  lStack_148 = lVar21;
  plStack_130 = plStack_1e0;
  if ((uStack_1c0 & 0x80000000000000) != 0) {
    uVar19 = uStack_1c0 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar19 - 8);
    lVar12 = lVar21 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar11 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar11 = lVar21;
    func_0x0eee2f00(plVar11 + 1,uVar19,lVar21);
    *(undefined1 *)((long)plVar11 + lVar21 + 8) = 0;
    uVar19 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_118 = 0;
  uVar20 = uStack_1b8;
  uStack_120 = uVar19;
  if ((uStack_1b8 & 0x80000000000000) != 0) {
    uVar19 = uStack_1b8 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar19 - 8);
    lVar12 = lVar21 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar11 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar11 = lVar21;
    func_0x0eee2f00(plVar11 + 1,uVar19,lVar21);
    *(undefined1 *)((long)plVar11 + lVar21 + 8) = 0;
    uVar20 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar11 = plStack_160;
  uStack_e8 = 0;
  uStack_d8 = 1;
  uStack_d6 = 0xfbf8;
  uStack_d4 = 1;
  lStack_238 = *plStack_160;
  uStack_230 = plStack_160[1];
  plStack_70 = plStack_168;
  uStack_118 = uVar20;
  if ((uStack_230 & 0x80000000000000) != 0) {
    lVar21 = *(long *)((uStack_230 & 0xff00ffffffffffff) - 8);
    lVar12 = lVar21 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar15 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar15 = lVar21;
    func_0x0eee2f00(plVar15 + 1,uStack_230 & 0xff00ffffffffffff,lVar21);
    *(undefined1 *)((long)plVar15 + lVar21 + 8) = 0;
    uStack_230 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_228 = 0;
  uVar19 = plVar11[2];
  if ((uVar19 & 0x80000000000000) != 0) {
    lVar21 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
    lVar12 = lVar21 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar15 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar15 = lVar21;
    func_0x0eee2f00(plVar15 + 1,uVar19 & 0xff00ffffffffffff,lVar21);
    *(undefined1 *)((long)plVar15 + lVar21 + 8) = 0;
    uVar19 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar15 = plStack_160;
  uVar20 = uStack_120 & 0x80000000000000;
  uVar3 = (ushort)(uStack_120 >> 0x30);
  uStack_228 = uVar19;
  if (uVar20 == 0) {
    if ((uStack_120 & 0x7f000000000000) == 0) goto LAB_0d4ffeaf;
    uVar16 = (ulong)(uVar3 & 0x7f);
LAB_0d4ffe67:
    if (((uVar16 != 4) || (*(int *)(uStack_120 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)uStack_128 != 9999 || ((uStack_128._2_2_ != 9999 || (uStack_128._4_2_ != 9999))))))
    goto LAB_0d4ffeaf;
LAB_0d5000ae:
    if (uVar20 == 0) {
      if ((uStack_120 & 0x7f000000000000) == 0) goto LAB_0d5002f9;
      uVar16 = (ulong)(uVar3 & 0x7f);
    }
    else {
      uVar16 = *(ulong *)((uStack_120 & 0xff00ffffffffffff) - 8);
      if (uVar16 == 0) goto LAB_0d5002f9;
    }
    if (((uVar16 != 4) ||
        (piVar22 = (int *)(uStack_120 & 0xff00ffffffffffff), *piVar22 != 0x61746562)) ||
       (((short)uStack_128 != 9999 || ((uStack_128._2_2_ != 9999 || (uStack_128._4_2_ != 9999))))))
    goto LAB_0d5002f9;
    lStack_238 = uStack_128;
    if ((uStack_230 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
      piVar22 = (int *)(uStack_120 & 0xff00ffffffffffff);
      uVar20 = uStack_120 & 0x80000000000000;
    }
    uStack_230 = 0;
    uVar19 = uStack_120;
    if (uVar20 != 0) {
      lVar21 = *(long *)(piVar22 + -2);
      lVar12 = lVar21 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        FUN_0eec74c0(lVar12,8);
      }
      *plVar11 = lVar21;
      func_0x0eee2f00(plVar11 + 1,piVar22,lVar21);
      *(undefined1 *)((long)plVar11 + lVar21 + 8) = 0;
      uVar19 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_230 = uVar19;
    if ((uStack_228 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
    }
    uStack_228 = 0;
    uVar19 = uStack_118;
    if ((uStack_118 & 0x80000000000000) == 0) goto LAB_0d5002f9;
    uVar19 = uStack_118 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar19 - 8);
    lVar12 = lVar21 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar11 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
  }
  else {
    uVar16 = *(ulong *)((uStack_120 & 0xff00ffffffffffff) - 8);
    if (uVar16 != 0) goto LAB_0d4ffe67;
LAB_0d4ffeaf:
    uVar16 = plVar11[1];
    if ((uVar16 & 0x80000000000000) != 0) {
      uVar18 = *(ulong *)((uVar16 & 0xff00ffffffffffff) - 8);
      if (uVar18 != 0) goto LAB_0d4ffee0;
      goto LAB_0d5000ae;
    }
    if ((uVar16 & 0x7f000000000000) == 0) goto LAB_0d5000ae;
    uVar18 = (ulong)((ushort)(uVar16 >> 0x30) & 0x7f);
LAB_0d4ffee0:
    if ((((uVar18 != 4) || (*(int *)(uVar16 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)*plVar11 != 9999)) ||
       ((*(short *)((long)plVar11 + 2) != 9999 || (*(short *)((long)plVar11 + 4) != 9999))))
    goto LAB_0d5000ae;
    lStack_238 = *plStack_160;
    if ((uStack_230 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
    }
    uStack_230 = 0;
    uVar19 = plVar15[1];
    if ((uVar19 & 0x80000000000000) != 0) {
      lVar21 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
      lVar12 = lVar21 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        FUN_0eec74c0(lVar12,8);
      }
      *plVar11 = lVar21;
      func_0x0eee2f00(plVar11 + 1,uVar19 & 0xff00ffffffffffff,lVar21);
      *(undefined1 *)((long)plVar11 + lVar21 + 8) = 0;
      uVar19 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_230 = uVar19;
    if ((uStack_228 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
    }
    uStack_228 = 0;
    uVar19 = plVar15[2];
    if ((uVar19 & 0x80000000000000) == 0) goto LAB_0d5002f9;
    uVar19 = uVar19 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar19 - 8);
    lVar12 = lVar21 + 9;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar11 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
  }
  *plVar11 = lVar21;
  func_0x0eee2f00(plVar11 + 1,uVar19,lVar21);
  *(undefined1 *)((long)plVar11 + lVar21 + 8) = 0;
  uVar19 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
LAB_0d5002f9:
  uStack_228 = uVar19;
  func_0x0d6b3300(&plStack_c8,&uStack_128,&lStack_238,1);
  if ((CONCAT44(uStack_13c,uStack_140) == 0) &&
     (cVar10 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_012cf8c1),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_158 == (char *)0x0) || (*pcStack_158 != '\x01')) {
    cVar10 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_012cf8c1);
    if (cVar10 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar12 = CONCAT44(uStack_13c,uStack_140);
    if ((pcStack_158 == (char *)0x0) &&
       (cVar10 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    lVar12 = CONCAT44(uStack_13c,uStack_140);
  }
  if ((*pcStack_158 == '\0') &&
     (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar21 = lStack_148;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar11 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  lVar8 = uStack_128;
  plStack_1d0 = (long *)lVar21;
  lStack_90 = uStack_128;
  uVar19 = uStack_120;
  lStack_78 = lVar12;
  if ((uStack_120 & 0x80000000000000) != 0) {
    uVar19 = uStack_120 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar19 - 8);
    lVar12 = lVar21 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar15 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar15 = lVar21;
    func_0x0eee2f00(plVar15 + 1,uVar19,lVar21);
    *(undefined1 *)((long)plVar15 + lVar21 + 8) = 0;
    uVar19 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_80 = 0;
  uStack_170 = uStack_118;
  if ((uStack_118 & 0x80000000000000) != 0) {
    uVar20 = uStack_118 & 0xff00ffffffffffff;
    lVar21 = *(long *)(uVar20 - 8);
    lVar12 = lVar21 + 9;
    uStack_88 = uVar19;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar15 == (long *)0x0) {
      FUN_0eec74c0(lVar12,8);
    }
    *plVar15 = lVar21;
    func_0x0eee2f00(plVar15 + 1,uVar20,lVar21);
    *(undefined1 *)((long)plVar15 + lVar21 + 8) = 0;
    uStack_170 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_1f0 = uStack_a0;
  uStack_1f8 = uStack_a8;
  pcStack_208 = (char *)uStack_b8;
  plStack_210 = (long *)uStack_c0;
  uVar9 = uStack_d6;
  uStack_38 = uStack_98;
  lStack_180 = lVar8;
  uStack_88 = 0;
  uStack_80 = 0;
  plStack_68 = plStack_c8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  plStack_218 = plStack_c8;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_40 = 0;
  uStack_1e8 = (undefined8 *)CONCAT62(uStack_1e8._2_6_,uStack_98);
  uStack_178 = uVar19;
  func_0x0d6a8a30(plVar11,plStack_1d0,&lStack_180,&plStack_218);
  if ((uStack_1f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f0 & 0xff00ffffffffffff) - 8);
  }
  uStack_1f0 = 0;
  if ((uStack_1f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1f8 = 0;
  if (((ulong)pcStack_208 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_208 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_208 = (char *)0x0;
  if (((ulong)plStack_210 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_210 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_210 = (long *)0x0;
  if ((uStack_170 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_170 & 0xff00ffffffffffff) - 8);
  }
  uStack_170 = 0;
  if ((uStack_178 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_178 & 0xff00ffffffffffff) - 8);
  }
  *plVar11 = (long)&UNK_0f474468;
  plVar11[0xe] = lStack_78;
  *(undefined2 *)(plVar11 + 0xf) = uVar9;
  *(undefined1 *)((long)plVar11 + 0x7a) = 1;
  plStack_218 = plVar11;
  if ((uStack_a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a0 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = plStack_70;
  uStack_a0 = 0;
  if ((uStack_a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_a8 = 0;
  if ((uStack_b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & 0xff00ffffffffffff) - 8);
  }
  uStack_b8 = 0;
  if ((uStack_c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c0 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_228 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
  }
  uStack_228 = 0;
  if ((uStack_230 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
  }
  plVar17 = (long *)*plVar15;
  plVar2 = (long *)plVar15[1];
  if (plVar17 != plVar2) {
    do {
      cVar10 = func_0x04fa7a10(*plVar17 + 0x20,plVar11 + 7);
      if (cVar10 == '\0') break;
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar2);
  }
  func_0x0d6af860(plVar15,plVar17,&plStack_218);
  plVar11 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  uStack_d8 = 0;
  func_0x0d500d60(&plStack_168);
  if ((uStack_1b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1b8 = 0;
  if ((uStack_1c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
  }
  return;
}


