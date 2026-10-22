/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x58b2050 (ELF vaddr 0x57b2050)
 * Label: caller-of-callee
 * Body:  [[058b2050, 058b2857]]
 * Ghidra: FUN_058b2050
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_058b2050(undefined8 param_1,long *param_2,long *param_3,byte *param_4,byte *param_5)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 **ppuVar18;
  bool bVar19;
  undefined1 uStack_191;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte *pbStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_78;
  long *plStack_70;
  
  if (param_2 != (long *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_108 = param_2;
  func_0x04130630(&uStack_130,param_4);
  if (*param_4 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0xcbf29ce484222325;
    uVar8 = func_0x0eee2e90(param_4);
    if (uVar8 != 0) {
      uVar14 = (ulong)((uint)uVar8 & 7);
      if (7 < uVar8) {
        uVar8 = uVar8 & 0xfffffffffffffff8;
        do {
          uVar15 = (((((((uVar15 * 0x100000001b3 ^ (ulong)*param_4) * 0x100000001b3 ^
                        (ulong)param_4[1]) * 0x100000001b3 ^ (ulong)param_4[2]) * 0x100000001b3 ^
                      (ulong)param_4[3]) * 0x100000001b3 ^ (ulong)param_4[4]) * 0x100000001b3 ^
                    (ulong)param_4[5]) * 0x100000001b3 ^ (ulong)param_4[6]) * 0x100000001b3 ^
                   (ulong)param_4[7];
          param_4 = param_4 + 8;
          uVar8 = uVar8 - 8;
        } while (uVar8 != 0);
      }
      if (uVar14 != 0) {
        uVar8 = 0;
        do {
          uVar15 = uVar15 * 0x100000001b3 ^ (ulong)param_4[uVar8];
          uVar8 = uVar8 + 1;
        } while (uVar14 != uVar8);
      }
    }
  }
  lStack_78 = 0;
  plStack_b8 = (long *)&UNK_0efec9b8;
  uStack_138 = uVar15;
  plStack_b0 = param_3;
  plStack_70 = param_3;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_178 = plStack_b8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0efec7e8;
  plStack_b8 = (long *)0x0;
  uStack_170 = plStack_b0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_191,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plStack_188 = plVar9 + 0x11;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0efec838;
  plVar9[0x2e] = 0;
  plVar9[0x2f] = 0;
  plVar9[0x30] = 0;
  plVar9[0x31] = 0;
  plVar9[0x32] = 0;
  plVar9[0x33] = 0;
  plVar9[0x34] = 0;
  *(undefined4 *)(plVar9 + 0x35) = 0x3f800000;
  plVar9[0x36] = 0;
  plVar9[0x37] = 0;
  pbStack_110 = param_5;
  if (plStack_178 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_178)(&plStack_178,plVar9 + 0x36);
    plVar10 = plStack_178;
  }
  plStack_180 = plVar9 + 4;
  plStack_178 = (long *)0x0;
  plVar9[0x36] = (long)plVar10;
  *(undefined1 *)(plVar9 + 0x3e) = 0;
  puVar2 = (uint *)(plVar9 + 0x12);
  if (plStack_188 != (long *)&DAT_0f552138) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar9[0x14] = _DAT_0f552150;
        uVar6 = uRam000000000f55214c;
        uVar5 = _DAT_0f552148;
        uVar4 = uRam000000000f552144;
        *puVar2 = _DAT_0f552140;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        plStack_190 = plVar9 + 0x2e;
        func_0x04885070(puVar2,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar19 = (_DAT_0f552140 & 1) != 0;
      lVar16 = 0xf552141;
      if (bVar19) {
        lVar16 = _DAT_0f552150;
      }
      uVar15 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar19) {
        uVar15 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      plStack_190 = plVar9 + 0x2e;
      func_0x04885120(puVar2,lVar16,uVar15);
    }
  }
  plVar9[0x11] = _DAT_0f552138;
  plVar9[0x15] = 0;
  if (plStack_178 != (long *)0x0) {
    (*(code *)plStack_178[1])(&plStack_178);
  }
  plVar10 = plVar9 + 1;
  if (plStack_b8 != (long *)0x0) {
    (*(code *)plStack_b8[1])(&plStack_b8);
  }
  LOCK();
  *plVar10 = *plVar10 + 1;
  UNLOCK();
  plStack_190 = plVar10;
  plStack_100 = param_3;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0efec918;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[4] = (long)&UNK_0efec968;
  plVar10[0xe] = (long)plStack_180;
  plVar10[0xf] = (long)plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  plStack_178 = plVar10 + 4;
  uStack_170 = plVar10;
  puVar11 = (undefined4 *)func_0x058fecc0(param_1,&uStack_138);
  plVar12 = *(long **)(puVar11 + 0x24);
  if (plVar12 < *(long **)(puVar11 + 0x26)) {
    plVar12[2] = 0;
    plVar12[3] = 0;
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[4] = 0;
    if (plVar12 != plStack_188) {
      if ((*puVar2 & 1) == 0) {
        plVar12[3] = plVar9[0x14];
        lVar16 = plVar9[0x13];
        plVar12[1] = *(long *)puVar2;
        plVar12[2] = lVar16;
      }
      else {
        func_0x04885070(plVar12 + 1,plVar9[0x14],plVar9[0x13]);
      }
    }
    *plVar12 = *plStack_188;
    plVar12[5] = (long)(plVar10 + 4);
    plVar12[6] = (long)plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    plVar12 = plVar12 + 7;
    *(long **)(puVar11 + 0x24) = plVar12;
  }
  else {
    plVar12 = (long *)func_0x05900a80(puVar11 + 0x22,plStack_188,&plStack_178);
  }
  plVar10 = plStack_100;
  pbVar17 = pbStack_110;
  *(long **)(puVar11 + 0x24) = plVar12;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0412c2d0(plVar12);
    }
  }
  plVar12 = uStack_170;
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  if (uStack_170 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_170 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*uStack_170 + 0x10))(uStack_170);
      FUN_0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_190;
  LOCK();
  lVar16 = *plStack_190;
  *plStack_190 = *plStack_190 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0412c2d0(plVar9);
    LOCK();
    lVar16 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plStack_190;
    *plStack_190 = *plStack_190 + -1;
    UNLOCK();
  }
  plVar12 = plStack_108;
  if (lVar16 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0412c2d0(plVar9);
    plVar12 = plStack_108;
  }
  plStack_108 = plVar12;
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,uStack_130 & 0xfffffffffffffffe);
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0412c2d0(plVar12);
      bVar3 = *pbVar17;
      goto joined_r0x058b2646;
    }
  }
  bVar3 = *pbVar17;
joined_r0x058b2646:
  if ((bVar3 & 1) == 0) {
    plStack_178 = plVar10;
    uStack_160 = *(undefined8 *)(pbVar17 + 0x10);
    uStack_170 = *(long **)pbVar17;
    uStack_168 = *(undefined8 *)(pbVar17 + 8);
  }
  else {
    plStack_178 = plVar10;
    func_0x0412e5e0(&uStack_170,*(undefined8 *)(pbVar17 + 0x10),*(undefined8 *)(pbVar17 + 8));
  }
  puStack_f0 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)&UNK_0efec9d0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *puVar13 = plStack_178;
  pbVar17 = (byte *)(puVar13 + 1);
  if (((ulong)uStack_170 & 1) == 0) {
    puVar13[3] = uStack_160;
    *(undefined4 *)pbVar17 = (undefined4)uStack_170;
    *(undefined4 *)((long)puVar13 + 0xc) = uStack_170._4_4_;
    *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_168;
    *(undefined4 *)((long)puVar13 + 0x14) = uStack_168._4_4_;
  }
  else {
    func_0x0412e5e0(pbVar17,uStack_160,uStack_168);
  }
  ppuVar18 = (undefined8 **)(plVar9 + 0x26);
  puStack_f0 = puVar13;
  if (ppuVar18 == &puStack_f8) {
    if ((*pbVar17 & 1) != 0) {
      func_0x0412a280(puVar13[3],puVar13[1] & 0xfffffffffffffffe);
    }
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar13);
  }
  else {
    puVar13 = (undefined8 *)&UNK_0efec9d0;
    if ((*ppuVar18 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar18)[1])(ppuVar18), puVar13 = puStack_f8, puStack_f8 != (undefined8 *)0x0))
    {
      (*(code *)*puVar13)(&puStack_f8,ppuVar18);
      puVar13 = puStack_f8;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    puStack_f8 = (undefined8 *)0x0;
    *ppuVar18 = puVar13;
  }
  if (((ulong)uStack_170 & 1) != 0) {
    func_0x0412a280(uStack_160,(ulong)uStack_170 & 0xfffffffffffffffe);
  }
  return plStack_180;
}


