/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a4e5e0 (ELF vaddr 0x494e5e0)
 * Label: string:M-spline for continentalness: {:.2f}
 * Body:  [[04a4e5e0, 04a4eec4] [04a4eed0, 04a4efdd] [04a4efe0, 04a4f077] [04a4f08e, 04a4f0ac] [04a4f146, 04a4f1bf]]
 * Ghidra: FUN_04a4e5e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a4e5e0(float param_1,long param_2,char param_3)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  float fVar13;
  float fVar14;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float afStack_1c0 [2];
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 **ppuStack_198;
  float fStack_190;
  float fStack_18c;
  undefined4 uStack_188;
  float afStack_184 [3];
  long lStack_178;
  long lStack_170;
  long lStack_168;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  byte bStack_150;
  undefined7 uStack_14f;
  undefined8 uStack_140;
  undefined1 auStack_138 [120];
  uint uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [120];
  
  puStack_1e8 = (undefined1 *)0x0;
  puStack_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  afStack_1c0[1] = -1.0;
  fVar13 = _DAT_011986e0 * (_DAT_011983f0 - param_1);
  fStack_1cc = _DAT_011983f0 - fVar13;
  fVar14 = (_DAT_011983f0 - param_1) * _DAT_01198780;
  afStack_184[2] = _DAT_01198454 * fStack_1cc + fVar14;
  if (afStack_184[2] <= _DAT_01198800) {
    afStack_184[2] = _DAT_01198800;
  }
  afStack_184[1] = 1.0;
  fStack_1c4 = fStack_1cc + fVar14;
  if (fStack_1c4 <= 0.0) {
    fStack_1c4 = 0.0;
  }
  fStack_154 = fVar13 / (_DAT_01198628 * fStack_1cc) + _DAT_01198bd4;
  afStack_184[0] = fStack_1c4;
  fStack_15c = param_1;
  if ((fStack_154 <= _DAT_0119849c) || (_DAT_011983f0 <= fStack_154)) {
    fVar14 = (fStack_1c4 - afStack_184[2]) * _DAT_011986e0;
    fStack_1c8 = fVar14;
    if (param_3 == '\0') {
      puVar5 = (undefined1 *)
               func_0x04a6b290(&puStack_1e8,afStack_1c0 + 1,afStack_184 + 2,&fStack_1c8);
      puVar11 = puStack_1e8;
LAB_04a4ec73:
      puStack_1e8 = puVar11;
      puStack_1e0 = puVar5;
      if (puVar5 < puStack_1d8) {
        func_0x04a6b420(_DAT_011983f0,fStack_1c4,puVar5,&fStack_1c8);
        goto LAB_04a4ec9a;
      }
      puStack_1e0 = (undefined1 *)
                    func_0x04a6b290(&puStack_1e8,afStack_184 + 1,afStack_184,&fStack_1c8);
      goto LAB_04a4ecbf;
    }
    fVar13 = _DAT_011987c4;
    if (_DAT_011987c4 <= afStack_184[2]) {
      fVar13 = afStack_184[2];
    }
    puStack_1b8 = (undefined1 *)((ulong)puStack_1b8 & 0xffffffff00000000);
    fStack_1cc = afStack_184[2];
    puVar5 = (undefined1 *)func_0x04a6bc10(fVar13,&puStack_1e8,afStack_1c0 + 1,&puStack_1b8);
    fVar14 = fVar14 + fStack_1cc;
    puStack_1e0 = puVar5;
    if (puVar5 < puStack_1d8) {
      func_0x04a6bef0(0,puVar5,&fStack_1c8);
      puVar5 = puVar5 + 0xa8;
      puVar11 = puStack_1e8;
      goto LAB_04a4ec73;
    }
    puVar5 = puVar5 + -(long)puStack_1e8;
    uVar8 = ((long)puVar5 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (uVar8 < 0x186186186186187) {
      lVar9 = (long)puStack_1d8 - (long)puStack_1e8 >> 3;
      uVar2 = lVar9 * -0x6186186186186186;
      if (uVar8 < uVar2) {
        uVar8 = uVar2;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar9 * -0x30c30c30c30c30c3)) {
        uVar8 = 0x186186186186186;
      }
      ppuStack_198 = &puStack_1e8;
      if (uVar8 == 0) {
        puVar11 = (undefined1 *)0x0;
      }
      else {
        if (0x186186186186186 < uVar8) goto LAB_04a4f071;
        puVar11 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8 * 0xa8);
        if (puVar11 == (undefined1 *)0x0) {
          func_0x0eec74c0(extraout_XMM0_Da,fVar14,uVar8 * 0xa8,0);
          puVar11 = (undefined1 *)0x0;
        }
      }
      puStack_1b0 = puVar5 + (long)puVar11;
      puStack_1a0 = puVar11 + uVar8 * 0xa8;
      puStack_1b8 = puVar11;
      puStack_1a8 = puStack_1b0;
      func_0x04a6bef0(0,fVar14,puStack_1b0,&fStack_1c8);
      puVar5 = puStack_1a8 + 0xa8;
      puVar11 = puStack_1b0 + ((long)puStack_1e8 - (long)puStack_1e0);
      puStack_1a8 = puVar5;
      func_0x04a6b630(puStack_1e8,puStack_1e0,puVar11);
      puVar10 = puStack_1d8;
      puVar4 = puStack_1e8;
      puStack_1d8 = puStack_1a0;
      if (puStack_1e8 != (undefined1 *)0x0) {
        lVar9 = (long)puVar10 - (long)puStack_1e8;
        puStack_1e8 = puVar11;
        puStack_1e0 = puVar5;
        func_0x0412a280(puVar4,lVar9);
        puVar11 = puStack_1e8;
      }
      goto LAB_04a4ec73;
    }
  }
  else {
    fStack_190 = _DAT_011988a4 * fStack_1cc + fVar14;
    if (fStack_190 <= _DAT_01198800) {
      fStack_190 = _DAT_01198800;
    }
    fStack_1c8 = (fStack_190 - afStack_184[2]) * _DAT_011987f8;
    fStack_18c = fStack_154;
    puVar5 = (undefined1 *)func_0x04a6b290(&puStack_1e8,afStack_1c0 + 1,afStack_184 + 2,&fStack_1c8)
    ;
    puStack_1b8 = (undefined1 *)((ulong)puStack_1b8 & 0xffffffff00000000);
    puStack_1e0 = puVar5;
    if (puVar5 < puStack_1d8) {
      func_0x04a6b950(_DAT_01198b34,fStack_190,puVar5,&puStack_1b8);
      puVar5 = puVar5 + 0xa8;
    }
    else {
      puVar5 = (undefined1 *)func_0x04a6b7c0(_DAT_01198b34,fStack_190,&puStack_1e8,&puStack_1b8);
    }
    fVar13 = _DAT_01198c64 * fStack_1cc + fVar14;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    puStack_1b8 = (undefined1 *)((ulong)puStack_1b8 & 0xffffffff00000000);
    puStack_1e0 = puVar5;
    if (puVar5 < puStack_1d8) {
      func_0x04a6b950(_DAT_0119849c,puVar5,&puStack_1b8);
      puVar5 = puVar5 + 0xa8;
    }
    else {
      puVar5 = (undefined1 *)func_0x04a6b7c0(_DAT_0119849c,fVar13,&puStack_1e8,&puStack_1b8);
    }
    fVar14 = (_DAT_0119862c + fStack_18c) * _DAT_01198628 * fStack_1cc + fVar14;
    fVar13 = (float)((uint)_DAT_01198800 & -(uint)(fStack_18c < _DAT_011988a0));
    if (fVar14 <= fVar13) {
      fVar14 = fVar13;
    }
    afStack_1c0[0] = (fStack_1c4 - fVar14) / (_DAT_011983f0 - fStack_18c);
    fVar13 = _DAT_011984dc + fStack_18c;
    uStack_188 = 0;
    puStack_1e0 = puVar5;
    fStack_158 = fVar14;
    if (puVar5 < puStack_1d8) {
      uVar12 = func_0x04a6bab0(puVar5,&uStack_188);
      puVar5 = puVar5 + 0xa8;
      puVar10 = puStack_1e8;
LAB_04a4eb44:
      puStack_1e8 = puVar10;
      puStack_1e0 = puVar5;
      if (puVar5 < puStack_1d8) {
        func_0x04a6b420(fStack_18c,puVar5,afStack_1c0);
        puVar5 = puVar5 + 0xa8;
        puStack_1e0 = puVar5;
        if (puVar5 < puStack_1d8) goto LAB_04a4ebc8;
LAB_04a4eb7c:
        puStack_1e0 = (undefined1 *)
                      func_0x04a6b290(&puStack_1e8,afStack_184 + 1,afStack_184,afStack_1c0);
      }
      else {
        puVar5 = (undefined1 *)
                 func_0x04a6b290(uVar12,fVar14,&puStack_1e8,&fStack_154,&fStack_158,afStack_1c0);
        puStack_1e0 = puVar5;
        if (puStack_1d8 <= puVar5) goto LAB_04a4eb7c;
LAB_04a4ebc8:
        puStack_1e0 = puVar5;
        func_0x04a6b420(_DAT_011983f0,fStack_1c4,puVar5,afStack_1c0);
LAB_04a4ec9a:
        puStack_1e0 = puVar5 + 0xa8;
      }
LAB_04a4ecbf:
      puStack_1b8 = (undefined1 *)(double)fStack_15c;
      func_0x0470d9a0(&bStack_150,&UNK_01309f32,0x24,10,&puStack_1b8);
      uVar3 = _DAT_0f556608;
      auStack_138[0] = 0;
      uStack_c0 = 0xffffffff;
      if ((ulong)_DAT_0f556608 != 0xffffffff) {
        puStack_1b8 = auStack_138;
        (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f556608 * 8))(&puStack_1b8,0xf556590);
        uStack_c0 = uVar3;
      }
      if ((DAT_0f556610 & 1) == 0) {
        uStack_a8 = _DAT_0f556620;
        uStack_b8 = CONCAT71(uRam000000000f556611,DAT_0f556610);
        uStack_b0 = _DAT_0f556618;
      }
      else {
        FUN_0412e5e0(&uStack_b8,_DAT_0f556620,_DAT_0f556618);
      }
      puVar11 = puStack_1e0;
      puVar5 = puStack_1e8;
      lStack_178 = 0;
      lStack_170 = 0;
      lStack_168 = 0;
      lVar9 = (long)puStack_1e0 - (long)puStack_1e8;
      if (lVar9 == 0) {
LAB_04a4ee33:
        func_0x04a48d80(auStack_a0,&bStack_150,auStack_138,&lStack_178);
        func_0x049cd640(param_2,auStack_a0);
        *(undefined4 *)(param_2 + 0x78) = 2;
        func_0x04a770f0(param_2 + 0x80,auStack_a0);
        func_0x049cd3b0(auStack_a0);
        lVar9 = lStack_178;
        if (lStack_178 != 0) {
          if (lStack_178 != lStack_170) {
            lVar6 = lStack_170;
            do {
              if ((*(byte *)(lVar6 + -0x20) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar6 + -0x10),
                                *(ulong *)(lVar6 + -0x20) & 0xfffffffffffffffe);
              }
              if ((ulong)*(uint *)(lVar6 + -0x28) != 0xffffffff) {
                (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar6 + -0x28) * 8))
                          (&puStack_1b8,lVar6 + -0xa0);
              }
              *(undefined4 *)(lVar6 + -0x28) = 0xffffffff;
              lVar6 = lVar6 + -0xa8;
            } while (lVar6 != lVar9);
          }
          lStack_170 = lVar9;
          func_0x0412a280(lStack_178,lStack_168 - lStack_178);
        }
        if ((uStack_b8 & 1) != 0) {
          func_0x0412a280(uStack_a8,uStack_b8 & 0xfffffffffffffffe);
        }
        if ((ulong)uStack_c0 != 0xffffffff) {
          (**(code **)(&UNK_0ef53100 + (ulong)uStack_c0 * 8))(&puStack_1b8,auStack_138);
        }
        uStack_c0 = 0xffffffff;
        if ((bStack_150 & 1) != 0) {
          func_0x0412a280(uStack_140,CONCAT71(uStack_14f,bStack_150) & 0xfffffffffffffffe);
        }
        puVar5 = puStack_1e8;
        if (puStack_1e8 != (undefined1 *)0x0) {
          if (puStack_1e8 != puStack_1e0) {
            puVar11 = puStack_1e0;
            do {
              if ((puVar11[-0x20] & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(puVar11 + -0x10),
                                *(ulong *)(puVar11 + -0x20) & 0xfffffffffffffffe);
              }
              if ((ulong)*(uint *)(puVar11 + -0x28) != 0xffffffff) {
                (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(puVar11 + -0x28) * 8))
                          (&puStack_1b8,puVar11 + -0xa0);
              }
              *(undefined4 *)(puVar11 + -0x28) = 0xffffffff;
              puVar11 = puVar11 + -0xa8;
            } while (puVar11 != puVar5);
          }
          puStack_1e0 = puVar5;
          func_0x0412a280(puStack_1e8,(long)puStack_1d8 - (long)puStack_1e8);
        }
        return;
      }
      if ((ulong)((lVar9 >> 3) * -0x30c30c30c30c30c3) < 0x186186186186187) {
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
        if (lVar6 == 0) {
          func_0x0eec74c0(lVar9,0);
        }
        lStack_168 = lVar9 + lVar6;
        lStack_178 = lVar6;
        lStack_170 = lVar6;
        lStack_170 = func_0x04a6c050(&lStack_178,puVar5,puVar11,lVar6);
        goto LAB_04a4ee33;
      }
      func_0x04a6b090();
LAB_04a4f062:
      func_0x04a6b090();
    }
    else {
      puVar5 = puVar5 + -(long)puStack_1e8;
      uVar8 = ((long)puVar5 >> 3) * -0x30c30c30c30c30c3 + 1;
      if (0x186186186186186 < uVar8) goto LAB_04a4f062;
      lVar9 = (long)puStack_1d8 - (long)puStack_1e8 >> 3;
      uVar2 = lVar9 * -0x6186186186186186;
      if (uVar8 < uVar2) {
        uVar8 = uVar2;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar9 * -0x30c30c30c30c30c3)) {
        uVar8 = 0x186186186186186;
      }
      ppuStack_198 = &puStack_1e8;
      if (uVar8 == 0) {
        puVar11 = (undefined1 *)0x0;
LAB_04a4eabe:
        puStack_1b0 = puVar5 + (long)puVar11;
        puStack_1a0 = puVar11 + uVar8 * 0xa8;
        puStack_1b8 = puVar11;
        puStack_1a8 = puStack_1b0;
        func_0x04a6bab0(fVar13,fVar14,puStack_1b0,&uStack_188);
        puVar5 = puStack_1a8 + 0xa8;
        puVar10 = puStack_1b0 + ((long)puStack_1e8 - (long)puStack_1e0);
        puStack_1a8 = puVar5;
        uVar12 = func_0x04a6b630(puStack_1e8,puStack_1e0,puVar10);
        puVar4 = puStack_1d8;
        puVar11 = puStack_1e8;
        puStack_1d8 = puStack_1a0;
        if (puStack_1e8 != (undefined1 *)0x0) {
          lVar9 = (long)puVar4 - (long)puStack_1e8;
          puStack_1e8 = puVar10;
          puStack_1e0 = puVar5;
          uVar12 = func_0x0412a280(puVar11,lVar9);
          puVar10 = puStack_1e8;
        }
        goto LAB_04a4eb44;
      }
      fStack_1cc = fVar13;
      if (uVar8 < 0x186186186186187) {
        puVar11 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8 * 0xa8);
        fVar13 = fStack_1cc;
        if (puVar11 == (undefined1 *)0x0) {
          func_0x0eec74c0(fStack_1cc,fVar14,uVar8 * 0xa8,0);
          puVar11 = (undefined1 *)0x0;
          fVar13 = fStack_1cc;
        }
        goto LAB_04a4eabe;
      }
    }
    FUN_04882eb0();
  }
  func_0x04a6b090();
LAB_04a4f071:
  uVar7 = FUN_04882eb0();
  puStack_1e0 = puVar5;
  func_0x04a49970(&puStack_1e8);
  uVar7 = func_0x0eee2d70(uVar7);
  func_0x04a49970(&puStack_1e8);
  uVar7 = func_0x0eee2d70(uVar7);
  func_0x04a6afc0(&lStack_178,0);
  func_0x049cd2e0(auStack_138);
  if ((bStack_150 & 1) != 0) {
    func_0x0412a280(uStack_140,CONCAT71(uStack_14f,bStack_150) & 0xfffffffffffffffe);
  }
  func_0x04a49970(&puStack_1e8);
  uVar7 = func_0x0eee2d70(uVar7);
  uVar7 = func_0x04882e20(uVar7);
  func_0x04882e20(uVar7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


