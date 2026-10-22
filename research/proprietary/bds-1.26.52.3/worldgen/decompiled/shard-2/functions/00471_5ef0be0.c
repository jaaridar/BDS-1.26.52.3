/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ff0be0 (ELF vaddr 0x5ef0be0)
 * Label: caller-of-callee
 * Body:  [[05ff0be0, 05ff11d2] [05ff11e0, 05ff1253] [05ff1260, 05ff15ab]]
 * Ghidra: FUN_05ff0be0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_05ff0be0(long param_1,undefined8 *param_2,uint *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined7 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  bool bVar16;
  byte bStack_338;
  undefined1 uStack_337;
  undefined6 uStack_336;
  ulong uStack_330;
  undefined1 *puStack_328;
  uint uStack_31c;
  undefined4 uStack_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  byte *pbStack_308;
  byte bStack_2f8;
  undefined7 uStack_2f7;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  uint uStack_2dc;
  long lStack_2d8;
  byte bStack_2d0;
  undefined7 uStack_2cf;
  undefined *puStack_2c8;
  undefined7 *puStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined *puStack_2a8;
  byte bStack_2a0;
  undefined1 uStack_29f;
  undefined6 uStack_29e;
  undefined8 uStack_290;
  byte bStack_288;
  undefined7 uStack_287;
  ulong uStack_280;
  undefined7 *puStack_278;
  undefined1 auStack_270 [16];
  undefined7 *puStack_260;
  ulong uStack_258;
  byte *pbStack_250;
  ulong uStack_248;
  byte *pbStack_240;
  ulong uStack_238;
  undefined7 *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  byte bStack_1e0;
  undefined *apuStack_188 [6];
  undefined8 uStack_158;
  undefined7 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  
  if ((*param_3 & 1) == 0) {
    pbStack_308 = *(byte **)(param_3 + 4);
    uStack_318 = *param_3;
    uStack_314 = param_3[1];
    uStack_310 = param_3[2];
    uStack_30c = param_3[3];
  }
  else {
    func_0x0412e5e0(&uStack_318,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 2));
  }
  bVar16 = (uStack_318 & 1) == 0;
  pbVar1 = (byte *)((long)&uStack_318 + 1);
  uStack_220 = pbStack_308;
  if (bVar16) {
    uStack_220 = pbVar1;
  }
  uStack_218 = (ulong)((byte)uStack_318 >> 1);
  if (!bVar16) {
    uStack_218 = CONCAT44(uStack_30c,uStack_310);
  }
  puStack_210 = &UNK_014ca950;
  puStack_208 = (undefined *)0xd;
  func_0x048ad670(&bStack_2d0,&uStack_220,2,0x2f);
  if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  puStack_228 = (undefined *)(ulong)(bStack_2d0 >> 1);
  puStack_230 = &uStack_2cf;
  if ((bStack_2d0 & 1) != 0) {
    puStack_228 = puStack_2c8;
    puStack_230 = puStack_2c0;
  }
  cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_230);
  if (cVar5 == '\0') goto LAB_05ff1186;
  uStack_238 = CONCAT44(uStack_30c,uStack_310);
  pbStack_240 = pbStack_308;
  if ((uStack_318 & 1) == 0) {
    pbStack_240 = pbVar1;
    uStack_238 = (ulong)((byte)uStack_318 >> 1);
  }
  func_0x05ff17b0(&uStack_220,&pbStack_240);
  if (((ulong)uStack_220 & 1) == 0) {
    puStack_2a8 = puStack_210;
    uStack_2b8 = (uint)uStack_220;
    uStack_2b4 = uStack_220._4_4_;
    uStack_2b0 = (undefined4)uStack_218;
    uStack_2ac = uStack_218._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_2b8,puStack_210,uStack_218);
    if (((ulong)uStack_220 & 1) != 0) {
      func_0x0412a280(puStack_210,(ulong)uStack_220 & 0xfffffffffffffffe);
    }
  }
  pbVar2 = (byte *)*param_2;
  bVar16 = (*pbVar2 & 1) != 0;
  uStack_220 = pbVar2 + 1;
  if (bVar16) {
    uStack_220 = *(byte **)(pbVar2 + 0x10);
  }
  uStack_218 = (ulong)(*pbVar2 >> 1);
  if (bVar16) {
    uStack_218 = *(ulong *)(pbVar2 + 8);
  }
  bVar16 = (uStack_2b8 & 1) != 0;
  puStack_210 = (undefined *)((long)&uStack_2b8 + 1);
  if (bVar16) {
    puStack_210 = puStack_2a8;
  }
  puStack_208 = (undefined *)(ulong)((byte)uStack_2b8 >> 1);
  if (bVar16) {
    puStack_208 = (undefined *)CONCAT44(uStack_2ac,uStack_2b0);
  }
  func_0x048ad670(&bStack_288,&uStack_220,2,0x2f);
  if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  bVar16 = (uStack_318 & 1) != 0;
  pbStack_250 = pbVar1;
  if (bVar16) {
    pbStack_250 = pbStack_308;
  }
  uStack_248 = (ulong)((byte)uStack_318 >> 1);
  if (bVar16) {
    uStack_248 = CONCAT44(uStack_30c,uStack_310);
  }
  puStack_260 = &uStack_287;
  uStack_258 = (ulong)(bStack_288 >> 1);
  if ((bStack_288 & 1) != 0) {
    uStack_258 = uStack_280;
    puStack_260 = puStack_278;
  }
  (**(code **)(_DAT_0f7b8f98 + 0xe0))(&uStack_220,&DAT_0f7b8f98,&pbStack_250,&puStack_260);
  puStack_f0 = (undefined7 *)0x98dba2dc850bd434;
  puStack_e8 = &UNK_0140f690;
  uStack_e0 = 1;
  uStack_d8 = 0x52;
  if (bStack_1e0 == 0) {
    func_0x0eedea30(&bStack_2f8);
    func_0x0eedeb80(2,0x2d,&uStack_220,&bStack_2f8,&puStack_f0);
    if ((bStack_2f8 & 1) != 0) {
      func_0x0412a280(uStack_2e8,CONCAT71(uStack_2f7,bStack_2f8) & 0xfffffffffffffffe);
    }
  }
  puVar14 = puStack_208;
  puVar3 = puStack_210;
  if ((bStack_1e0 & 1) == 0) {
    lVar4 = param_1;
    if (lStack_1f8 != 0) {
      while (lStack_2d8 = lVar4, lStack_1f8 != lStack_1f0) {
        func_0x048b3e80(lStack_1f0 + -0x40);
        lVar4 = lStack_2d8;
        lStack_1f0 = lStack_1f0 + -0x40;
      }
      func_0x0412a280(lStack_1f8,lStack_1e8 - lStack_1f8);
      param_1 = lStack_2d8;
    }
    if (puVar3 != (undefined *)0x0) {
      for (; puVar3 != puVar14; puVar14 = puVar14 + -0x50) {
        if ((puVar14[-8] == '\x01') && ((puVar14[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(puVar14 + -0x20),
                          *(ulong *)(puVar14 + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(puVar3,lStack_200 - (long)puVar3);
    }
  }
  else {
    puStack_e8 = (undefined *)(ulong)(bStack_2d0 >> 1);
    puStack_f0 = &uStack_2cf;
    if ((bStack_2d0 & 1) != 0) {
      puStack_e8 = puStack_2c8;
      puStack_f0 = puStack_2c0;
    }
    uStack_158 = 0;
    apuStack_188[0] = &UNK_0eeed250;
    func_0x0ee5df20(&uStack_220,&UNK_0ef44650,&puStack_f0,8);
    uStack_220 = &UNK_0ef445e8;
    apuStack_188[0] = &UNK_0ef44638;
    puStack_210 = &UNK_0ef44610;
    func_0x04863060(auStack_270,0);
    func_0x0485e1c0(&puStack_f0);
    cVar5 = func_0x0485e6a0(&puStack_f0,&uStack_220,auStack_270,0);
    if (cVar5 != '\0') {
      uVar9 = func_0x04864680(auStack_270,&UNK_013aa5c6);
      uVar10 = func_0x048648e0(uVar9,&UNK_01377950);
      bStack_338 = 0;
      uStack_337 = 0;
      func_0x04863cb0(&bStack_2f8,uVar10,&bStack_338);
      if ((bStack_338 & 1) != 0) {
        func_0x0412a280(puStack_328,
                        CONCAT62(uStack_336,CONCAT11(uStack_337,bStack_338)) & 0xfffffffffffffffe);
      }
      uVar9 = func_0x048648e0(uVar9,&UNK_013236a8);
      if ((bStack_2f8 & 1) == 0) {
        if (bStack_2f8 >> 1 != 0) goto LAB_05ff1217;
      }
      else if (uStack_2f0 != 0) {
LAB_05ff1217:
        cVar5 = func_0x04864270(uVar9);
        if ((cVar5 != '\0') && (uVar6 = func_0x048641f0(uVar9), 2 < uVar6)) {
          uStack_2dc = 0;
          uStack_31c = 0;
          lStack_2d8 = param_1;
          for (uVar6 = 0; uVar7 = func_0x048641f0(param_2[1]), uVar6 < uVar7; uVar6 = uVar6 + 1) {
            uVar10 = func_0x04864540(param_2[1],uVar6);
            cVar5 = func_0x04864290(uVar10);
            if (cVar5 != '\0') {
              uVar11 = func_0x04864680(uVar10,&UNK_013417de);
              bStack_2a0 = 0;
              uStack_29f = 0;
              func_0x04863cb0(&bStack_338,uVar11,&bStack_2a0);
              if ((bStack_2a0 & 1) != 0) {
                func_0x0412a280(uStack_290,
                                CONCAT62(uStack_29e,CONCAT11(uStack_29f,bStack_2a0)) &
                                0xfffffffffffffffe);
              }
              if ((bStack_338 & 1) == 0) {
                uVar13 = (ulong)(bStack_338 >> 1);
                if ((bStack_2f8 & 1) == 0) goto LAB_05ff12ff;
LAB_05ff131e:
                bVar16 = true;
                if (uVar13 == uStack_2f0) {
LAB_05ff132f:
                  bVar16 = true;
                  puVar15 = &uStack_337;
                  if ((bStack_338 & 1) == 0) {
                    if ((bStack_2f8 & 1) == 0) goto LAB_05ff1347;
LAB_05ff135c:
                    iVar8 = func_0x0eee3000(puVar15,uStack_2e8);
                  }
                  else {
                    puVar15 = puStack_328;
                    if ((bStack_2f8 & 1) != 0) goto LAB_05ff135c;
LAB_05ff1347:
                    iVar8 = func_0x0eee3000(puVar15,&uStack_2f7);
                  }
                  if (iVar8 == 0) {
                    uVar11 = func_0x04864680(uVar10,&UNK_013236a8);
                    uVar11 = func_0x04863c90(uVar11,uVar9);
                    if ((char)uVar11 == '\0') {
                      uStack_31c = (uint)CONCAT71((int7)((ulong)uVar11 >> 8),1);
                      bVar16 = false;
                    }
                    else {
                      uVar10 = func_0x04864680(uVar10,&UNK_013236a8);
                      uVar10 = func_0x04863740(uVar10,uVar9);
                      uVar12 = (undefined7)((ulong)uVar10 >> 8);
                      uStack_2dc = (uint)CONCAT71(uVar12,1);
                      bVar16 = false;
                      uStack_31c = (uint)CONCAT71(uVar12,1);
                    }
                  }
                }
              }
              else {
                uVar13 = uStack_330;
                if ((bStack_2f8 & 1) != 0) goto LAB_05ff131e;
LAB_05ff12ff:
                bVar16 = true;
                if (uVar13 == bStack_2f8 >> 1) goto LAB_05ff132f;
              }
              if ((bStack_338 & 1) != 0) {
                func_0x0412a280(puStack_328,
                                CONCAT62(uStack_336,CONCAT11(uStack_337,bStack_338)) &
                                0xfffffffffffffffe);
              }
              if (!bVar16) break;
            }
          }
          if ((uStack_31c & 1) == 0) {
            func_0x04863060(&bStack_338,0);
            param_1 = lStack_2d8;
            func_0x048631d0(&bStack_2a0,&bStack_2f8);
            uVar10 = func_0x04864680(&bStack_338,&UNK_013417de);
            func_0x04863790(uVar10,&bStack_2a0);
            func_0x04863610(&bStack_2a0);
            uVar10 = func_0x04864680(&bStack_338,&UNK_013236a8);
            func_0x04863740(uVar10,uVar9);
            func_0x04864a50(param_2[1],&bStack_338);
            func_0x04863610(&bStack_338);
          }
          else {
            param_1 = lStack_2d8;
            if ((uStack_2dc & 1) == 0) goto LAB_05ff1479;
          }
          *(undefined1 *)param_2[2] = 1;
        }
      }
LAB_05ff1479:
      if ((bStack_2f8 & 1) != 0) {
        func_0x0412a280(uStack_2e8,CONCAT71(uStack_2f7,bStack_2f8) & 0xfffffffffffffffe);
      }
    }
    func_0x0485e2d0(&puStack_f0);
    func_0x04863610(auStack_270);
    uStack_220 = &UNK_0ef446c8;
    apuStack_188[0] = &UNK_0ef44718;
    puStack_210 = &UNK_0ef446f0;
    func_0x0ee5c730(&puStack_208);
    func_0x0413c8a0(&uStack_220,&UNK_0ef44658);
    func_0x04138180(apuStack_188);
  }
  if ((bStack_288 & 1) != 0) {
    func_0x0412a280(puStack_278,CONCAT71(uStack_287,bStack_288) & 0xfffffffffffffffe);
  }
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(puStack_2a8,CONCAT44(uStack_2b4,uStack_2b8) & 0xfffffffffffffffe);
  }
LAB_05ff1186:
  if ((bStack_2d0 & 1) != 0) {
    func_0x0412a280(puStack_2c0,CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
  }
  if ((uStack_318 & 1) != 0) {
    func_0x0412a280(pbStack_308,CONCAT44(uStack_314,uStack_318) & 0xfffffffffffffffe);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return param_1;
}


