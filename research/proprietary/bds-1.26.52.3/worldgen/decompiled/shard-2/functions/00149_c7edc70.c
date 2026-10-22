/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8edc70 (ELF vaddr 0xc7edc70)
 * Label: string:minecraft:biome
 * Body:  [[05881fa0, 058820fe] [0c8edc70, 0c8ee24e] [0c8ee250, 0c8ee27e] [0c8ee280, 0c8ee48e] [0eee02f0, 0eee0369] [0eee2d80, 0eee2d85]]
 * Ghidra: FUN_0c8edc70
 */


/* WARNING: Possible PIC construction at 0x058820e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x058820e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8edc70(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  byte *****pppppbVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *unaff_RBX;
  long *plVar13;
  long lVar14;
  byte bVar15;
  undefined8 unaff_R14;
  undefined7 *puVar16;
  undefined1 uStack_3c9;
  ulong uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 *puStack_378;
  ulong uStack_370;
  ulong uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  byte bStack_2e8;
  undefined7 uStack_2e7;
  ulong uStack_2e0;
  undefined7 *puStack_2d8;
  uint uStack_238;
  undefined1 auStack_230 [16];
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_208;
  ulong uStack_200;
  byte bStack_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [96];
  uint uStack_180;
  undefined1 auStack_178 [80];
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_60;
  long lStack_58;
  char cStack_50;
  byte ****ppppbStack_48;
  long *plStack_40;
  long lStack_38;
  
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if ((((DAT_0f5a2e68 != '\0') ||
       (lVar14 = *(long *)(param_1 + 8), *(char *)(lVar14 + 0x18) != '\0')) ||
      (((DAT_0f5a2e56 & 1) != 0 &&
       ((*(char *)(lVar14 + 7) == '\0' && (cVar6 = func_0x04fa7a10(lVar14,0xf5a2e50), cVar6 != '\0')
        ))))) && (*(char *)(**(long **)(*(long *)(param_1 + 0x10) + 0xe8) + 0x88) == '\0')) {
    uStack_60 = 0x5881fc5;
    func_0x0412d550(0xf552e80);
    LOCK();
    _DAT_0f552f50 = _DAT_0f552f50 + 1;
    UNLOCK();
    uStack_60 = 0x5881fdc;
    func_0x0412d610(0xf552e80);
    plVar13 = _DAT_0f552f68;
    pppppbVar8 = _DAT_0f552f60;
    if ((_DAT_0f552f60 == (byte *****)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
      lStack_58 = 0;
      cStack_50 = '\0';
      register0x00000020 = (BADSPACEBASE *)&uStack_60;
      uStack_60 = 0x58820e9;
      unaff_RBX = &UNK_011e303a;
      lVar14 = 0xf552e80;
      unaff_R14 = 3;
    }
    else {
      bVar15 = 1;
      if (_DAT_0f552f68 != (long *)0x0) {
        LOCK();
        _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
        UNLOCK();
        bVar15 = *(byte *)pppppbVar8;
      }
      lStack_58 = 0xf552e80;
      cStack_50 = '\x01';
      ppppbStack_48 = (byte ****)pppppbVar8;
      plStack_40 = plVar13;
      lStack_38 = _DAT_0f552f70;
      if (((bVar15 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
        uStack_60 = 0x5882049;
        func_0x0eeb61d0(_DAT_0f552f70,1,3,5,&UNK_011e303a);
      }
      pppppbVar8 = &ppppbStack_48;
      ppppbStack_48 = (byte ****)0x0;
      plStack_40 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        pppppbVar8 = (byte *****)*plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (pppppbVar8 == (byte *****)0x0) {
          uStack_60 = 0x5882074;
          (**(code **)(*plVar13 + 0x10))(plVar13);
          uStack_60 = 0x588207c;
          pppppbVar8 = (byte *****)func_0x0412c2d0(plVar13);
        }
        plVar13 = plStack_40;
        lStack_38 = 0;
        if (plStack_40 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_40 + 1;
          pppppbVar8 = (byte *****)*plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (pppppbVar8 == (byte *****)0x0) {
            uStack_60 = 0x58820aa;
            (**(code **)(*plStack_40 + 0x10))(plStack_40);
            uStack_60 = 0x58820b2;
            pppppbVar8 = (byte *****)func_0x0412c2d0(plVar13);
          }
        }
      }
      lVar14 = lStack_58;
      if (cStack_50 != '\x01') {
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(byte ******)((long)register0x00000020 + -0x18) = pppppbVar8;
    LOCK();
    plVar13 = (long *)(lVar14 + 0xd0);
    lVar2 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar2 != -0x7fffffffffffffff) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee031b;
    func_0x0412d450();
    LOCK();
    *(ulong *)(lVar14 + 0xd0) = *(ulong *)(lVar14 + 0xd0) & 0x7fffffffffffffff;
    UNLOCK();
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0335;
    func_0x0412d520(lVar14);
    uVar10 = *(undefined8 *)(lVar14 + 0xc0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0344;
    func_0x0412d680(uVar10);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0353;
    func_0x0412d6b0(uVar10);
    (*(code *)PTR_pthread_cond_broadcast_0f546458)(lVar14 + 0x90);
    return;
  }
  uStack_3c8 = 0;
  lStack_3c0 = 0;
  uStack_3b8 = 0;
  cVar6 = func_0x0d62a0d0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xe8),param_2,&uStack_3c8,
                          *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x108));
  uVar11 = uStack_3c8 & 0xff;
  if (cVar6 == '\0') goto LAB_0c8ee415;
  if ((uStack_3c8 & 1) == 0) {
    if ((byte)uStack_3c8 >> 1 == 0) goto LAB_0c8ee415;
  }
  else if (lStack_3c0 == 0) goto LAB_0c8ee415;
  uStack_128 = 0x1007800150001;
  puStack_120 = &UNK_01254d89;
  uStack_380 = 0;
  puStack_118 = &UNK_01254d89;
  uStack_388 = 0;
  uStack_3a8 = uStack_3c8;
  lStack_3a0 = lStack_3c0;
  uStack_398 = uStack_3b8;
  uStack_3c8 = 0;
  lStack_3c0 = 0;
  uStack_3b8 = 0;
  func_0x0d686f30(auStack_230,&UNK_0128206d,0xf,&uStack_128,&uStack_3a8);
  if ((uStack_3a8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_118 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_118 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_118 = (undefined *)0x0;
  if (((ulong)puStack_120 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_120 & 0xff00ffffffffffff) - 8)
    ;
  }
  uStack_388 = 0;
  uStack_380 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  plVar13 = (long *)puVar5[1];
  uStack_328 = *puVar5;
  plStack_320 = (long *)puVar5[1];
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar13[1] = plVar13[1] + 1;
    UNLOCK();
  }
  uStack_318 = puVar5[2];
  func_0x0c8c2830(&uStack_128,uVar4,&uStack_328,*(undefined8 *)(param_1 + 0x28),uVar10,param_2,
                  *(undefined1 *)(**(long **)(*(long *)(param_1 + 0x10) + 0xe8) + 0x88),
                  *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  uStack_328 = 0;
  plStack_320 = (long *)0x0;
  if (plVar13 == (long *)0x0) {
    uStack_318 = 0;
  }
  else {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
    param_2 = plStack_320;
    uStack_318 = 0;
    if (plStack_320 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_320 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_320 + 0x10))(plStack_320);
        func_0x0412c2d0(param_2);
      }
    }
  }
  if (*(char *)(**(long **)(*(long *)(param_1 + 0x10) + 0xe8) + 0x88) == '\x01') {
    puStack_378 = (undefined1 *)0x0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x0c8ec5e0(&bStack_2e8,&uStack_128,auStack_230,&puStack_378,2);
    if ((uStack_368 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_368 & 0xff00ffffffffffff) - 8);
    }
    uStack_368 = 0;
    if ((uStack_370 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_370 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    puStack_378 = (undefined1 *)0x0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x0c8ec5e0(&bStack_2e8,&uStack_128,auStack_230,&puStack_378,1);
    if ((uStack_368 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_368 & 0xff00ffffffffffff) - 8);
    }
    uStack_368 = 0;
    if ((uStack_370 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_370 & 0xff00ffffffffffff) - 8);
    }
  }
  if ((ulong)uStack_238 == 0xffffffff) {
LAB_0c8ee43f:
    FUN_04931450();
LAB_0c8ee444:
    iVar7 = func_0x04108328(&DAT_0f5ea4a0);
    if (iVar7 != 0) {
      func_0x08b670e0(0xf5ea138);
      __cxa_atexit(&UNK_08b673f0,0xf5ea138,0xf53dab8);
      FUN_0410844d(&DAT_0f5ea4a0);
    }
LAB_0c8ee1fb:
    func_0x0d5f7010(&bStack_2e8,param_1,0xf5ea138);
    plVar13 = (long *)param_2[0x15];
    if (plVar13 != (long *)0x0) {
      bVar15 = bStack_2e8 & 1;
      uVar11 = (ulong)(bStack_2e8 >> 1);
      puVar16 = &uStack_2e7;
      if (bVar15 != 0) {
        uVar11 = uStack_2e0;
        puVar16 = puStack_2d8;
      }
      do {
        bVar3 = *(byte *)(plVar13 + 2);
        if ((bVar3 & 1) == 0) {
          uVar12 = (ulong)(bVar3 >> 1);
        }
        else {
          uVar12 = plVar13[3];
        }
        if (uVar12 == uVar11) {
          if ((bVar3 & 1) == 0) {
            lVar14 = (long)plVar13 + 0x11;
          }
          else {
            lVar14 = plVar13[4];
          }
          iVar7 = func_0x0eee3000(lVar14,puVar16,uVar11);
          if (iVar7 == 0) goto LAB_0c8ee2ba;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    func_0x04907e30(param_2 + 0x13,&bStack_2e8);
    bVar15 = bStack_2e8 & 1;
LAB_0c8ee2ba:
    if (bVar15 != 0) {
      thunk_FUN_0ee326a0(puStack_2d8,CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
    }
  }
  else {
    param_2 = (long *)&UNK_0f3e36c8;
    puStack_378 = &uStack_3c9;
    puVar9 = (undefined4 *)
             (**(code **)(&UNK_0f3e36c8 + (ulong)uStack_238 * 8))(&puStack_378,&bStack_2e8);
    uStack_308 = *puVar9;
    uStack_304 = puVar9[1];
    uStack_300 = puVar9[2];
    uStack_2fc = puVar9[3];
    uStack_2f8 = puVar9[4];
    uStack_2f4 = puVar9[5];
    uStack_2f0 = puVar9[6];
    uStack_2ec = puVar9[7];
    if ((ulong)uStack_238 == 0xffffffff) goto LAB_0c8ee43f;
    puStack_378 = &uStack_3c9;
    uVar10 = (**(code **)(&UNK_0f3e36c8 + (ulong)uStack_238 * 8))(&puStack_378,&bStack_2e8);
    puStack_378 = (undefined1 *)0xffffffff;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x0d5cf650(uVar10,5,&puStack_378);
    func_0x05f43a40(&puStack_378);
    if ((ulong)uStack_238 != 0xffffffff) {
      (**(code **)(&UNK_0f3e3090 + (ulong)uStack_238 * 8))(&uStack_3c9,&bStack_2e8);
    }
    func_0x0d6b1c60(*(undefined8 *)(param_1 + 0x48),&uStack_308);
    if ((char)uStack_2f0 == '\x01') {
      param_2 = *(long **)(param_1 + 0x48);
      param_1 = **(long **)(**(long **)(*(long *)(param_1 + 0x10) + 0xe8) + 8);
      if (DAT_0f5ea4a0 == '\0') goto LAB_0c8ee444;
      goto LAB_0c8ee1fb;
    }
  }
  func_0x0c8ca780(&uStack_128);
  func_0x05d85c50(auStack_178);
  if ((ulong)uStack_180 != 0xffffffff) {
    (**(code **)(&UNK_0f3e3760 + (ulong)uStack_180 * 8))(&uStack_128,auStack_1e0);
  }
  uStack_180 = 0xffffffff;
  if ((bStack_1f8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_1e8,CONCAT71(uStack_1f7,bStack_1f8) & 0xfffffffffffffffe);
  }
  if ((uStack_200 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
  }
  uStack_200 = 0;
  if ((uStack_208 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
  }
  uStack_208 = 0;
  if ((uStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
  }
  uStack_218 = 0;
  if ((uStack_220 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
  }
  uVar11 = uStack_3c8 & 0xff;
LAB_0c8ee415:
  if ((uVar11 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
  }
  return;
}


