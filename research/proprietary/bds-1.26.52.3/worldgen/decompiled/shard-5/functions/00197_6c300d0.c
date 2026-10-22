/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6d300d0 (ELF vaddr 0x6c300d0)
 * Label: caller-of-callee
 * Body:  [[06d300d0, 06d30487] [06d304a7, 06d304fd] [06d3054c, 06d3076c] [06d307c3, 06d311b0] [06d311c0, 06d31668] [06d318b5, 06d318ca]]
 * Ghidra: FUN_06d300d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06d300d0(long *param_1,long *param_2,code *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  byte *pbVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  byte bVar19;
  long *plVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined *puVar23;
  uint *puVar24;
  long lVar25;
  undefined2 *puVar26;
  bool bVar27;
  char cStack_249;
  uint uStack_248;
  undefined1 uStack_244;
  undefined1 auStack_243 [3];
  undefined1 auStack_240 [4];
  undefined4 uStack_23c;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  uint uStack_218;
  undefined4 uStack_208;
  uint uStack_1f8;
  byte bStack_1e8;
  undefined7 uStack_1e7;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  uint *puStack_198;
  long *plStack_190;
  byte bStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined2 uStack_17f;
  undefined1 uStack_17d;
  undefined8 uStack_178;
  byte bStack_170;
  undefined4 uStack_16f;
  undefined1 uStack_16b;
  undefined2 uStack_16a;
  undefined8 uStack_160;
  byte bStack_158;
  undefined4 uStack_157;
  undefined3 uStack_153;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  undefined1 uStack_12c;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  undefined1 uStack_128;
  undefined2 auStack_127 [3];
  undefined8 uStack_120;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  puVar24 = (uint *)(auStack_240 + 1);
  puVar26 = auStack_127;
  lVar13 = param_2[2];
  uVar11 = *(uint *)(param_2 + 3);
  plVar14 = (long *)(*(long *)(lVar13 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x40) - *(long *)(lVar13 + 0x38)) >> 3)
                            - 1U & 0xacb47b38) * 8);
  do {
    if (*plVar14 == -1) {
      return;
    }
    lVar25 = *plVar14 * 0x20;
    plVar14 = (long *)(*(long *)(lVar13 + 0x50) + lVar25);
  } while (*(int *)(*(long *)(lVar13 + 0x50) + 8 + lVar25) != -0x534b84c8);
  if (plVar14 == *(long **)(lVar13 + 0x58)) {
    return;
  }
  lVar13 = plVar14[2];
  if (lVar13 == 0) {
    return;
  }
  uVar18 = (ulong)((uVar11 & 0x3ffff) >> 0xb);
  if ((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3) <= uVar18) {
    return;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8);
  if (lVar13 == 0) {
    return;
  }
  if (0x3fffe < (uVar11 & 0xfffc0000 ^ *(uint *)(lVar13 + (ulong)(uVar11 & 0x7ff) * 4))) {
    return;
  }
  plStack_1d0 = param_1;
  pcStack_140 = param_3;
  uStack_138 = param_4;
  lVar13 = (**(code **)(*param_2 + 0x6b0))(param_2);
  if (lVar13 == 0) {
    return;
  }
  plStack_190 = (long *)param_2[0x3a];
  lVar13 = (**(code **)(*plStack_190 + 0x568))();
  lStack_1c8 = lVar13;
  if ((*(char *)(lVar13 + 0x394) == '\0') && (*(char *)(lVar13 + 0x451) == '\0')) {
    lVar25 = func_0x0d2279e0(lVar13 + 0x518,0xf71d6f8);
    if ((lVar25 == 0) && (lVar25 = func_0x0d2279e0(lVar13 + 0x4f0,0xf71d6f8), lVar25 == 0)) {
      bVar27 = true;
    }
    else {
      bVar27 = true;
      if (*(int *)(lVar25 + 0x50) == 5) {
        bVar27 = *(int *)(lVar25 + 0x38) != 1;
      }
    }
  }
  else {
    bVar27 = false;
  }
  (**(code **)(*plStack_1d0 + 0x488))(plStack_1d0,param_2,bVar27);
  plVar14 = (long *)(**(code **)(*param_2 + 0x6b0))(param_2);
  puVar15 = (uint *)(**(code **)(*plVar14 + 0x70))(plVar14);
  uVar9 = (**(code **)(*param_2 + 0x6b8))(param_2);
  bStack_170 = 8;
  uStack_16f = 0x65646f4d;
  uStack_16b = 0;
  uVar10 = (**(code **)(*plStack_190 + 0x468))();
  func_0x06d1a4b0(puVar15,uVar9,&bStack_170,uVar10);
  uStack_1bc = uVar9;
  puStack_198 = puVar15;
  if ((bStack_170 & 1) != 0) {
    func_0x0412a280(uStack_160,
                    CONCAT26(uStack_16a,CONCAT15(uStack_16b,CONCAT41(uStack_16f,bStack_170))) &
                    0xfffffffffffffffe);
  }
  puVar15 = puStack_198;
  uVar9 = uStack_1bc;
  bStack_158 = 6;
  uStack_157 = 0x6d6944;
  lVar13 = param_2[2];
  uVar11 = *(uint *)(param_2 + 3);
  plVar14 = (long *)(*(long *)(lVar13 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x40) - *(long *)(lVar13 + 0x38)) >> 3)
                            - 1U & 0xaf993816) * 8);
  do {
    lVar25 = *plVar14;
    if (lVar25 == -1) {
      plVar20 = *(long **)(lVar13 + 0x58);
      plVar14 = plVar20;
      goto LAB_06d30358;
    }
    plVar14 = (long *)(*(long *)(lVar13 + 0x50) + lVar25 * 0x20);
  } while (*(int *)(*(long *)(lVar13 + 0x50) + (lVar25 * 8 + 2) * 4) != -0x5066c7ea);
  plVar20 = *(long **)(lVar13 + 0x58);
LAB_06d30358:
  if ((plVar14 == plVar20) || (lVar13 = plVar14[2], lVar13 == 0)) {
LAB_06d315e2:
    func_0x04890760();
LAB_06d315e7:
    func_0x04931450();
LAB_06d315ec:
    func_0x04931450();
LAB_06d315f1:
    func_0x04931450();
LAB_06d315f6:
    iVar12 = func_0x04108328(&DAT_0f6b4900);
    if (iVar12 != 0) {
      func_0x0b5facf0(0xf6b45f0);
      func_0x0eee2f40(&UNK_0b5fb030,0xf6b45f0,0xf53dab8);
      FUN_0410844d(&DAT_0f6b4900);
      puVar24 = puStack_198;
    }
  }
  else {
    uVar18 = (ulong)((uVar11 & 0x3ffff) >> 0xb);
    if (((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3) <= uVar18) ||
       (((lVar25 = *(long *)(*(long *)(lVar13 + 8) + uVar18 * 8), lVar25 == 0 ||
         (uVar4 = *(uint *)(lVar25 + (ulong)(uVar11 & 0x7ff) * 4),
         0x3fffe < (uVar11 & 0xfffc0000 ^ uVar4))) ||
        (lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)(uVar4 >> 4 & 0x3ff8)), lVar13 == 0)))
       ) goto LAB_06d315e2;
    uStack_130 = *(uint *)(lVar13 + (ulong)(uVar4 & 0x7f) * 4);
    func_0x06d1dff0(puStack_198,uStack_1bc,&bStack_158,&uStack_130);
    if ((bStack_158 & 1) != 0) {
      func_0x0412a280(uStack_148,
                      CONCAT35(uStack_153,CONCAT41(uStack_157,bStack_158)) & 0xfffffffffffffffe);
    }
    bStack_188 = 0x14;
    uStack_187 = 0x75636966666944;
    uStack_180 = 0x6c;
    uStack_17f = 0x7974;
    uStack_17d = 0;
    uVar10 = (**(code **)(*plStack_190 + 0x128))();
    lVar13 = lStack_1c8;
    switch(uVar10) {
    case 0:
      uStack_130 = 0x41455010;
      uStack_12c = 0x43;
      uStack_12b = 0x4645;
      uStack_129 = 0x55;
      uStack_128 = 0x4c;
      break;
    case 1:
      uStack_130 = 0x53414508;
      uStack_12c = 0x59;
      puVar26 = &uStack_12b;
      break;
    case 2:
      uStack_12b = 0x4c41;
      uStack_130 = 0x524f4e0c;
      uStack_12c = 0x4d;
      puVar26 = (undefined2 *)&uStack_129;
      break;
    case 3:
      uStack_130 = 0x52414808;
      uStack_12c = 0x44;
      puVar26 = &uStack_12b;
      break;
    default:
      uStack_12b = 0x574f;
      uStack_129 = 0x4e;
      uStack_130 = 0x4b4e550e;
      uStack_12c = 0x4e;
      puVar26 = (undefined2 *)&uStack_128;
    }
    *(undefined1 *)puVar26 = 0;
    func_0x06d186a0(puVar15,&bStack_188,&uStack_130,0xb);
    plVar14 = plStack_190;
    if ((uStack_130 & 1) != 0) {
      func_0x0412a280(uStack_120,
                      CONCAT17(uStack_129,CONCAT25(uStack_12b,CONCAT14(uStack_12c,uStack_130))) &
                      0xfffffffffffffffe);
    }
    if ((bStack_188 & 1) != 0) {
      func_0x0412a280(uStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
    }
    func_0x06d2fef0(plStack_1d0);
    bStack_1e8 = 0x16;
    uStack_1e7 = 0x6f4c646c726f57;
    uStack_1e0 = 0x64656461;
    uStack_1dc = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    auStack_243._0_2_ = 0;
    auStack_243[2] = 0;
    auStack_240 = (undefined1  [4])0x0;
    uStack_23c = 0;
    uStack_238 = (byte *)0x0;
    plStack_230 = (long *)0x0;
    uStack_228 = (long *)CONCAT44(uStack_228._4_4_,0x3f800000);
    func_0x06d11ff0(puVar15,&uStack_248,uVar9,&uStack_1b8);
    func_0x06d0cfa0(&uStack_130,uVar9,&bStack_1e8,&uStack_248,0x800);
    func_0x06d72260(&uStack_248);
    (*pcStack_140)(uStack_138,puVar15,&uStack_130);
    (**(code **)(*plVar14 + 0x8b0))(&uStack_248,plVar14);
    func_0x06cfd170(&uStack_130,&UNK_013e2a0b,&uStack_248,9,1);
    if ((uStack_248 & 1) != 0) {
      func_0x0412a280(uStack_238,
                      CONCAT17(auStack_243[2],
                               CONCAT25(auStack_243._0_2_,CONCAT14(uStack_244,uStack_248))) &
                      0xfffffffffffffffe);
    }
    lVar25 = func_0x0d2279e0(lVar13 + 0x518,0xf71d538);
    if (((lVar25 == 0) && (lVar25 = func_0x0d2279e0(lVar13 + 0x4f0,0xf71d538), lVar25 == 0)) ||
       (*(int *)(lVar25 + 0x50) != 7)) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(lVar25 + 0x38);
    }
    uStack_248 = (uint)uVar16;
    uStack_244 = (undefined1)((ulong)uVar16 >> 0x20);
    auStack_243._0_2_ = (undefined2)((ulong)uVar16 >> 0x28);
    auStack_243[2] = (undefined1)((ulong)uVar16 >> 0x38);
    func_0x06d07ae0(&uStack_130,&UNK_01360432,&uStack_248,0xb);
    uVar9 = (**(code **)(*plVar14 + 0x128))(plVar14);
    switch(uVar9) {
    case 0:
      uStack_248 = 0x41455010;
      uStack_244 = 0x43;
      auStack_243._0_2_ = 0x4645;
      auStack_243[2] = 0x55;
      auStack_240[0] = 0x4c;
      break;
    case 1:
      uStack_248 = 0x53414508;
      uStack_244 = 0x59;
      puVar24 = (uint *)auStack_243;
      break;
    case 2:
      auStack_243._0_2_ = 0x4c41;
      uStack_248 = 0x524f4e0c;
      uStack_244 = 0x4d;
      puVar24 = (uint *)(auStack_243 + 2);
      break;
    case 3:
      uStack_248 = 0x52414808;
      uStack_244 = 0x44;
      puVar24 = (uint *)auStack_243;
      break;
    default:
      auStack_243._0_2_ = 0x574f;
      auStack_243[2] = 0x4e;
      uStack_248 = 0x4b4e550e;
      uStack_244 = 0x4e;
      puVar24 = (uint *)auStack_240;
    }
    *(undefined1 *)puVar24 = 0;
    func_0x06cfd170(&uStack_130,&UNK_011a0ab3,&uStack_248,0xb,1);
    if ((uStack_248 & 1) != 0) {
      func_0x0412a280(uStack_238,
                      CONCAT17(auStack_243[2],
                               CONCAT25(auStack_243._0_2_,CONCAT14(uStack_244,uStack_248))) &
                      0xfffffffffffffffe);
    }
    uStack_248._0_1_ = *(undefined1 *)(lVar13 + 0x375);
    func_0x06d06340(&uStack_130,&UNK_012db000,&uStack_248,0xb,1);
    lVar25 = (**(code **)(*plVar14 + 0x568))(plVar14);
    uStack_248._0_1_ = *(int *)(lVar25 + 0x398) == 1;
    func_0x06d06340(&uStack_130,&UNK_01498c3b,&uStack_248,0xb,1);
    lVar25 = (**(code **)(*plVar14 + 0x568))(plVar14);
    uStack_248._0_1_ = *(undefined1 *)(lVar25 + 0x3a4);
    func_0x06d06340(&uStack_130,&UNK_01462e63,&uStack_248,0xb,1);
    lVar25 = (**(code **)(*plVar14 + 0x568))(plVar14);
    uStack_248._0_1_ = *(undefined1 *)(lVar25 + 0x3a5);
    func_0x06d06340(&uStack_130,&UNK_013948bc,&uStack_248,0xb,1);
    lVar25 = (**(code **)(*plVar14 + 0x568))(plVar14);
    uStack_248 = CONCAT31(uStack_248._1_3_,*(int *)(lVar25 + 0x398) == 2);
    func_0x06d06340(&uStack_130,&UNK_012db010,&uStack_248,0xb,1);
    if (*(char *)(lVar13 + 0x18) == '\x01') {
      uVar16 = *(undefined8 *)(lVar13 + 8);
      uVar5 = *(undefined8 *)(lVar13 + 0x10);
      uStack_1f8 = (uint)uVar5 & 0xffff;
      uStack_248 = (uint)((ulong)uVar16 >> 0x20);
      uStack_238 = (byte *)(CONCAT44(uStack_238._4_4_,(int)((ulong)uVar16 >> 0x10)) &
                           0xffffffff0000ffff);
      uStack_228 = (long *)(CONCAT44(uStack_228._4_4_,(int)uVar16) & 0xffffffff0000ffff);
      uStack_218 = (uint)(ushort)((ulong)uVar5 >> 0x30);
      uStack_208 = (undefined4)((ulong)uVar5 >> 0x10);
      func_0x0470d9a0(&bStack_1e8,&UNK_01287ba2,0x28,0x122112,&uStack_248);
      func_0x06cfd170(&uStack_130,&UNK_01416709,&bStack_1e8,0xb,1);
LAB_06d30a5e:
      if ((bStack_1e8 & 1) != 0) {
        func_0x0412a280(uStack_1d8,CONCAT71(uStack_1e7,bStack_1e8) & 0xfffffffffffffffe);
      }
    }
    else if (*(char *)(lVar13 + 0x90) == '\x01') {
      uVar16 = *(undefined8 *)(lVar13 + 0x20);
      uVar5 = *(undefined8 *)(lVar13 + 0x28);
      uStack_1f8 = (uint)uVar5 & 0xffff;
      uStack_248 = (uint)((ulong)uVar16 >> 0x20);
      uStack_238 = (byte *)(CONCAT44(uStack_238._4_4_,(int)((ulong)uVar16 >> 0x10)) &
                           0xffffffff0000ffff);
      uStack_228 = (long *)(CONCAT44(uStack_228._4_4_,(int)uVar16) & 0xffffffff0000ffff);
      uStack_218 = (uint)(ushort)((ulong)uVar5 >> 0x30);
      uStack_208 = (undefined4)((ulong)uVar5 >> 0x10);
      func_0x0470d9a0(&bStack_1e8,&UNK_01287ba2,0x28,0x122112,&uStack_248);
      func_0x06cfd170(&uStack_130,&UNK_0125b3d6,&bStack_1e8,0xb,1);
      goto LAB_06d30a5e;
    }
    lVar25 = (**(code **)(*plVar14 + 0x568))(plVar14);
    uVar18 = *(ulong *)(lVar25 + 0x140);
    uVar22 = 0;
    if (0x3f < uVar18 || (uVar18 & 0x3f) != 0) {
      puVar21 = *(ulong **)(lVar25 + 0x138);
      puVar2 = puVar21 + (uVar18 >> 6);
      do {
        if ((*puVar21 >> (uVar22 & 0x3f) & 1) != 0) {
          uVar22 = 1;
          goto LAB_06d30aee;
        }
        iVar12 = (int)uVar22;
        puVar21 = puVar21 + (iVar12 == 0x3f);
        uVar22 = (ulong)(iVar12 + 1);
        if (iVar12 == 0x3f) {
          uVar22 = 0;
        }
      } while ((uint)uVar22 != ((uint)uVar18 & 0x3f) || puVar21 != puVar2);
      uVar22 = 0;
    }
LAB_06d30aee:
    cStack_249 = (char)uVar22;
    func_0x06d06340(&uStack_130,&UNK_0120b61f,&cStack_249,0xb,1);
    if (cStack_249 == '\x01') {
      func_0x04863060(&uStack_1b8,0);
      if (*(long *)(lVar25 + 0x140) != 0) {
        func_0x04863290(&uStack_248,**(uint **)(lVar25 + 0x138) & 1);
        uVar16 = func_0x04864970(&uStack_1b8,&DAT_0f720e60);
        func_0x04863790(uVar16,&uStack_248);
        func_0x04863610(&uStack_248);
        if (1 < *(ulong *)(lVar25 + 0x140)) {
          func_0x04863290(&uStack_248,(**(uint **)(lVar25 + 0x138) & 2) >> 1);
          uVar16 = func_0x04864970(&uStack_1b8,&DAT_0f720e78);
          func_0x04863790(uVar16,&uStack_248);
          func_0x04863610(&uStack_248);
          if (2 < *(ulong *)(lVar25 + 0x140)) {
            func_0x04863290(&uStack_248,(**(uint **)(lVar25 + 0x138) & 4) >> 2);
            uVar16 = func_0x04864970(&uStack_1b8,&DAT_0f720e90);
            func_0x04863790(uVar16,&uStack_248);
            func_0x04863610(&uStack_248);
            if (3 < *(ulong *)(lVar25 + 0x140)) {
              func_0x04863290(&uStack_248,(**(uint **)(lVar25 + 0x138) & 8) >> 3);
              uVar16 = func_0x04864970(&uStack_1b8,&DAT_0f720ea8);
              func_0x04863790(uVar16,&uStack_248);
              func_0x04863610(&uStack_248);
              if (4 < *(ulong *)(lVar25 + 0x140)) {
                func_0x04863290(&uStack_248,(**(uint **)(lVar25 + 0x138) & 0x10) >> 4);
                uVar16 = func_0x04864970(&uStack_1b8,&DAT_0f720ec0);
                func_0x04863790(uVar16,&uStack_248);
                func_0x04863610(&uStack_248);
                if (5 < *(ulong *)(lVar25 + 0x140)) {
                  func_0x04863290(&uStack_248,(**(uint **)(lVar25 + 0x138) & 0x20) >> 5);
                  uVar16 = func_0x04864970(&uStack_1b8,&DAT_0f720ed8);
                  func_0x04863790(uVar16,&uStack_248);
                  func_0x04863610(&uStack_248);
                  if (6 < *(ulong *)(lVar25 + 0x140)) {
                    func_0x04863290(&uStack_248,(**(uint **)(lVar25 + 0x138) & 0x40) >> 6);
                    uVar16 = func_0x04864970(&uStack_1b8,&DAT_0f720ef0);
                    puVar24 = &uStack_248;
                    func_0x04863790(uVar16,puVar24);
                    func_0x04863610(puVar24);
                    if (7 < *(ulong *)(lVar25 + 0x140)) goto LAB_06d315e2;
                  }
                }
              }
            }
          }
        }
      }
      func_0x04867c60(&uStack_248);
      func_0x04867c90(&bStack_1e8,&uStack_248,&uStack_1b8);
      func_0x06cfd170(&uStack_130,&UNK_011bbdbf,&bStack_1e8,0xb,1);
      if ((bStack_1e8 & 1) != 0) {
        func_0x0412a280(uStack_1d8,CONCAT71(uStack_1e7,bStack_1e8) & 0xfffffffffffffffe);
      }
      uStack_248 = 0xef40ca0;
      uStack_244 = 0;
      auStack_243._0_2_ = 0;
      auStack_243[2] = 0;
      if (((uint)auStack_240 & 1) != 0) {
        func_0x0412a280(plStack_230,CONCAT44(uStack_23c,auStack_240) & 0xfffffffffffffffe);
      }
      func_0x04867c50(&uStack_248);
      func_0x04863610(&uStack_1b8);
    }
    lVar25 = plVar14[0xe0];
    uStack_248 = (uint)lVar25;
    uStack_244 = (undefined1)((ulong)lVar25 >> 0x20);
    auStack_243._0_2_ = (undefined2)((ulong)lVar25 >> 0x28);
    auStack_243[2] = (undefined1)((ulong)lVar25 >> 0x38);
    plVar20 = (long *)plVar14[0xe1];
    auStack_240 = SUB84(plVar20,0);
    uStack_23c = (undefined4)((ulong)plVar20 >> 0x20);
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar20[1] = plVar20[1] + 1;
      UNLOCK();
    }
    uVar18 = 0x1194;
    if (*(ulong *)(lVar25 + 0x10) < 0x1194) {
      uVar18 = *(ulong *)(lVar25 + 0x10);
    }
    func_0x06d07700(&uStack_130,&UNK_0130dc9a,uVar18);
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar1 = plVar20 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    uStack_248 = CONCAT31(uStack_248._1_3_,*(undefined1 *)(lVar13 + 0x90));
    func_0x06d06340(&uStack_130,&UNK_0142ffe7,&uStack_248,0xb,1);
    puVar23 = (undefined *)(lVar13 + 0x70);
    puVar3 = (undefined *)(lVar13 + 0x50);
    puVar17 = puVar3;
    if (((*(char *)(lVar13 + 0x77) == '\0') &&
        ((*(char *)(lVar13 + 0x68) != '\0' ||
         (puVar17 = puVar23, (*(byte *)(lVar13 + 0x56) & 1) != 0)))) &&
       (cVar8 = func_0x04fa7a10(puVar23,puVar3), puVar17 = puVar3, cVar8 != '\0')) {
      puVar17 = puVar23;
    }
    if (((puVar17[6] | puVar17[0x18]) & 1) == 0) {
      puVar17 = &DAT_0f72b850;
    }
    if ((puVar17[0x18] != '\0') || ((puVar17[6] & 1) != 0)) {
      puVar17 = puVar3;
      if ((*(char *)(lVar13 + 0x77) == '\0') &&
         (((*(char *)(lVar13 + 0x68) != '\0' ||
           (puVar17 = puVar23, (*(byte *)(lVar13 + 0x56) & 1) != 0)) &&
          (cVar8 = func_0x04fa7a10(puVar23,puVar3), puVar17 = puVar3, cVar8 != '\0')))) {
        puVar17 = puVar23;
      }
      puVar23 = &DAT_0f72b850;
      if (((puVar17[6] | puVar17[0x18]) & 1) != 0) {
        puVar23 = puVar17;
      }
      if ((puVar23[0x18] == '\0') && ((puVar23[6] & 1) != 0)) {
        func_0x0ee34300(&uStack_248,puVar23);
      }
      else {
        uStack_248 = 0;
        uStack_244 = 0;
        auStack_243._0_2_ = 0;
        auStack_243[2] = 0;
        auStack_240 = (undefined1  [4])0x0;
        uStack_23c = 0;
        uStack_238 = (byte *)0x0;
      }
      func_0x06cfd170(&uStack_130,&UNK_013948a4,&uStack_248,0xb,1);
      if ((uStack_248 & 1) != 0) {
        func_0x0412a280(uStack_238,
                        CONCAT17(auStack_243[2],
                                 CONCAT25(auStack_243._0_2_,CONCAT14(uStack_244,uStack_248))) &
                        0xfffffffffffffffe);
      }
    }
    func_0x0edfde20(&uStack_248,lVar13 + 0x278,0,0x19);
    func_0x06cfd170(&uStack_130,&UNK_01226726,&uStack_248,3,1);
    uVar9 = uStack_1bc;
    if ((uStack_248 & 1) != 0) {
      func_0x0412a280(uStack_238,
                      CONCAT17(auStack_243[2],
                               CONCAT25(auStack_243._0_2_,CONCAT14(uStack_244,uStack_248))) &
                      0xfffffffffffffffe);
    }
    if ((*(byte *)(lVar13 + 0x458) & 1) == 0) {
      uVar18 = (ulong)(*(byte *)(lVar13 + 0x458) >> 1);
    }
    else {
      uVar18 = *(ulong *)(lVar13 + 0x460);
    }
    if (uVar18 != 0) {
      func_0x06cfd170(&uStack_130,&DAT_011f101f,lVar13 + 0x458,0xb,1);
    }
    func_0x06d11c90(&uStack_248,puVar15,uVar9,&UNK_017f45e0);
    func_0x06d0d7b0(&uStack_130,&uStack_248,1);
    func_0x04863610(&plStack_230);
    if ((uStack_248 & 1) != 0) {
      func_0x0412a280(uStack_238,
                      CONCAT17(auStack_243[2],
                               CONCAT25(auStack_243._0_2_,CONCAT14(uStack_244,uStack_248))) &
                      0xfffffffffffffffe);
    }
    if (((char *)plStack_1d0[0x10] != (char *)0x0) && (*(char *)plStack_1d0[0x10] == '\x01')) {
      lVar13 = *(long *)(plStack_1d0[0x12] + 0x20);
      if (*(char *)(lVar13 + 0x180) == '\0') {
        uStack_248 = 0;
        uStack_244 = 0;
        auStack_243._0_2_ = 0;
        auStack_243[2] = 0;
        auStack_240 = (undefined1  [4])0x0;
        uStack_23c = 0;
        uStack_238 = (byte *)0x0;
      }
      else if ((*(byte *)(lVar13 + 0x168) & 1) == 0) {
        uStack_238 = *(byte **)(lVar13 + 0x178);
        uStack_248 = *(uint *)(lVar13 + 0x168);
        uVar9 = *(undefined4 *)(lVar13 + 0x16c);
        auStack_240 = *(undefined1 (*) [4])(lVar13 + 0x170);
        uStack_23c = *(undefined4 *)(lVar13 + 0x174);
        uStack_244 = (undefined1)uVar9;
        auStack_243._0_2_ = (undefined2)((uint)uVar9 >> 8);
        auStack_243[2] = (undefined1)((uint)uVar9 >> 0x18);
      }
      else {
        func_0x0412e5e0(&uStack_248,*(undefined8 *)(lVar13 + 0x178),*(undefined8 *)(lVar13 + 0x170))
        ;
      }
      func_0x06cfd170(&uStack_130,&UNK_0128e4ca,&uStack_248,0xb,1);
      if ((uStack_248 & 1) != 0) {
        func_0x0412a280(uStack_238,
                        CONCAT17(auStack_243[2],
                                 CONCAT25(auStack_243._0_2_,CONCAT14(uStack_244,uStack_248))) &
                        0xfffffffffffffffe);
      }
    }
    lVar13 = (**(code **)(*plVar14 + 0xac0))(plVar14);
    puVar24 = *(uint **)(lVar13 + 0x18);
    puVar15 = *(uint **)(lVar13 + 0x20);
    if (puVar24 != puVar15) {
      do {
        cVar8 = *(char *)((long)puVar24 + 1);
        if (cVar8 == '\x03') {
          if (puVar24[2] != 3) goto LAB_06d315ec;
          uStack_248 = puVar24[1];
          func_0x06d31c50(&uStack_130,&UNK_011f1032,puVar24 + 4,&uStack_248);
        }
        else if (cVar8 == '\x02') {
          if (puVar24[2] != 2) goto LAB_06d315e7;
          uStack_248 = puVar24[1];
          func_0x06d31fb0(&uStack_130,&UNK_011f1032,puVar24 + 4,&uStack_248);
        }
        else if (cVar8 == '\x01') {
          if (puVar24[2] != 1) goto LAB_06d315f1;
          uStack_248 = CONCAT31(uStack_248._1_3_,(char)puVar24[1]);
          func_0x06d31900(&uStack_130,&UNK_011f1032,puVar24 + 4,&uStack_248);
        }
        puVar24 = puVar24 + 0x3c;
      } while (puVar24 != puVar15);
    }
    plVar14 = plStack_190;
    cVar8 = (**(code **)(*plStack_190 + 0x9f0))(plStack_190);
    uStack_248 = 0x121f641;
    if (cVar8 != '\0') {
      uStack_248 = 0x147a17d;
    }
    uStack_244 = 0;
    auStack_243._0_2_ = 0;
    auStack_243[2] = 0;
    func_0x06d171e0(&uStack_130,&UNK_01226730,&uStack_248,0xb,1);
    lVar13 = (**(code **)(*plVar14 + 0x568))(plVar14);
    if (*(char *)(lVar13 + 0x55c) == '\x01') {
      uVar11 = *(uint *)(lVar13 + 0x558);
    }
    else {
      lVar25 = func_0x0d2279e0(lVar13 + 0x518,0xf71d720);
      if ((lVar25 == 0) && (lVar25 = func_0x0d2279e0(lVar13 + 0x4f0,0xf71d720), lVar25 == 0)) {
        uVar11 = 1;
      }
      else {
        uVar11 = 1;
        if (*(int *)(lVar25 + 0x50) == 4) {
          uVar11 = *(uint *)(lVar25 + 0x38);
        }
      }
    }
    uVar18 = 6;
    if (uVar11 < 6) {
      uVar18 = (ulong)uVar11;
    }
    bStack_1e8 = (byte)(&UNK_017f45f8 + *(int *)(&UNK_017f45f8 + uVar18 * 4));
    uStack_1e7 = (undefined7)((ulong)(&UNK_017f45f8 + *(int *)(&UNK_017f45f8 + uVar18 * 4)) >> 8);
    func_0x06d171e0(&uStack_130,&UNK_013948d1,&bStack_1e8,0xb,1);
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    plVar14 = _DAT_0f5523a0;
    pbVar7 = _DAT_0f552398;
    if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
      uVar16 = func_0x0eee02f0(0xf5522b8);
      func_0x041084d6(&DAT_0f6b4900);
      func_0x06d0d580(&uStack_130);
      func_0x0eee2d70(uVar16);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar19 = 1;
    if (_DAT_0f5523a0 != (long *)0x0) {
      LOCK();
      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
      UNLOCK();
      bVar19 = *pbVar7;
    }
    plVar20 = _DAT_0f5523a8;
    uStack_248 = 0xf5522b8;
    uStack_244 = 0;
    auStack_243._0_2_ = 0;
    auStack_243[2] = 0;
    auStack_240[0] = 1;
    uStack_238 = pbVar7;
    plStack_230 = plVar14;
    uStack_228 = _DAT_0f5523a8;
    if (((bVar19 & 1) == 0) &&
       (cVar8 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar11 = (**(code **)(*plVar20 + 0x390))(plVar20);
    uStack_238 = (byte *)0x0;
    plStack_230 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar20 = plVar14 + 1;
      lVar13 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
      plVar14 = plStack_230;
      uStack_228 = (long *)0x0;
      if (plStack_230 != (long *)0x0) {
        LOCK();
        plVar20 = plStack_230 + 1;
        lVar13 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_230 + 0x10))(plStack_230);
          func_0x0412c2d0(plVar14);
        }
      }
    }
    if (auStack_240[0] == '\x01') {
      func_0x0eee02f0(CONCAT17(auStack_243[2],
                               CONCAT25(auStack_243._0_2_,CONCAT14(uStack_244,uStack_248))));
    }
    if ((uVar11 & 0x100) == 0) {
      uStack_248 = 2;
      func_0x06d07510(&uStack_130,&UNK_01498c49,&uStack_248,0xb,1);
    }
    else {
      uStack_248 = uVar11 & 0xff;
      func_0x06d07510(&uStack_130,&UNK_01498c49,&uStack_248,0xb,1);
    }
    puVar24 = puStack_198;
    func_0x06d32300(&uStack_130,3);
    if (DAT_0f6b4900 == '\0') goto LAB_06d315f6;
  }
  uVar11 = 8;
  if (DAT_0f6b48e8 == '\x01') {
    if (DAT_0f6b48ea == '\x01') {
      if ((_DAT_0f6b48e0 == (long *)0x0) ||
         (iVar12 = (**(code **)(*_DAT_0f6b48e0 + 0x260))(_DAT_0f6b48e0,8), iVar12 == 0)) {
        uVar11 = (uint)DAT_0f6b48e9;
        goto LAB_06d3159f;
      }
    }
    else if (DAT_0f6b48eb != '\x01') {
      if (DAT_0f6b48ec == '\x01') {
        uVar11 = DAT_0f6b48e9 | 4;
      }
      else {
        uVar11 = 6;
        if (DAT_0f6b48ed == '\0') {
          uVar11 = (DAT_0f6b48ee ^ 1) * 2 + 7;
        }
      }
      goto LAB_06d3159f;
    }
    uVar11 = DAT_0f6b48e9 | 2;
  }
LAB_06d3159f:
  func_0x06d323c0(&uStack_130,uVar11);
  func_0x06d06910(puVar24,&uStack_130);
  func_0x06d0d580(&uStack_130);
  return;
}


