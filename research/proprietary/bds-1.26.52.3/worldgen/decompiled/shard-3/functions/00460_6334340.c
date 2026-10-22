/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6434340 (ELF vaddr 0x6334340)
 * Label: caller-of-callee
 * Body:  [[06434340, 064343b5] [064343c0, 064343f3] [06434400, 06434ded] [06434df0, 06435376] [0643538a, 064353b9] [064353ff, 0643545a] [064355f1, 0643561f] [06435649, 0643567e]]
 * Ghidra: FUN_06434340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06434340(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long **pplVar11;
  undefined8 *puVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  undefined2 uStack_590;
  undefined1 uStack_58e;
  undefined1 uStack_58d;
  undefined4 uStack_58c;
  char cStack_588;
  byte bStack_580;
  undefined8 *puStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  byte bStack_528;
  long *plStack_518;
  long **pplStack_510;
  long *plStack_508;
  long *plStack_500;
  long *plStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  char cStack_4d8;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  long *plStack_4b8;
  undefined4 uStack_4b0;
  char cStack_4a8;
  long *plStack_498;
  long *plStack_490;
  byte bStack_480;
  undefined1 auStack_47f [15];
  long *plStack_470;
  long *plStack_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  long lStack_458;
  long *plStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined *puStack_430;
  long *plStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  uint uStack_418;
  undefined4 uStack_414;
  long lStack_400;
  byte bStack_298;
  undefined8 uStack_38;
  
  func_0x05d73aa0(&bStack_480,param_2[1],param_2[2],(int)param_2[3],&UNK_0142d099,3);
  plVar18 = (long *)(ulong)(bStack_480 >> 1);
  plVar19 = (long *)auStack_47f;
  if ((bStack_480 & 1) != 0) {
    plVar18 = (long *)auStack_47f._7_8_;
    plVar19 = plStack_470;
  }
  puStack_578 = (undefined8 *)0x0;
  for (puVar16 = *(undefined8 **)(param_1 + 0x60); puVar16 != (undefined8 *)0x0;
      puVar16 = (undefined8 *)*puVar16) {
    bVar1 = *(byte *)(puVar16 + 2);
    if ((bVar1 & 1) == 0) {
      if (plVar18 != (long *)(ulong)(bVar1 >> 1)) goto LAB_064343d7;
LAB_06434409:
      if ((bVar1 & 1) == 0) {
        lVar21 = (long)puVar16 + 0x11;
      }
      else {
        lVar21 = puVar16[4];
      }
      iVar14 = func_0x0eee3000(plVar19,lVar21,plVar18);
      if (iVar14 != 0) goto LAB_064343d7;
      uStack_5c8 = (long *)(param_1 + 0x78);
      uStack_5c0 = *(long ***)(param_1 + 0x478);
      uStack_5b8 = plVar19;
      uStack_5b0 = (code *)plVar18;
      func_0x049151c0(&lStack_438,&uStack_5c8,2,0x2f);
      if ((*(long *)(param_1 + 0x480) == 0) &&
         (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01461253),
         cVar13 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(param_1 + 0x480) == '\0') &&
         (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01461253),
         cVar13 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_440 = uStack_38;
      plStack_448 = &lStack_438;
      (**(code **)(**(long **)(param_1 + 0x490) + 0x60))
                (&uStack_5c8,*(long **)(param_1 + 0x490),&plStack_448);
      pplVar11 = uStack_5c0;
      plVar25 = uStack_5c8;
      cStack_4d8 = cStack_588;
      if (cStack_588 == '\0') {
        plStack_518 = uStack_5c8;
        pplStack_510 = uStack_5c0;
        plStack_508 = uStack_5b8;
        plStack_500 = (long *)uStack_5b0;
        plStack_4f8 = uStack_5a8;
        lStack_4f0 = uStack_5a0;
        lStack_4e8 = lStack_598;
        lStack_4e0 = CONCAT44(uStack_58c,CONCAT13(uStack_58d,CONCAT12(uStack_58e,uStack_590)));
        plStack_498 = plVar19;
        plStack_490 = plVar18;
        func_0x0470d9a0(&plStack_468,&UNK_0123ee38,0x1d,0xd,&plStack_498);
        uVar10 = _UNK_0f0317cc;
        uVar9 = _UNK_0f0317c8;
        uVar8 = _UNK_0f0317c4;
        uVar7 = _UNK_0f0317bc;
        uVar6 = _UNK_0f0317b8;
        uVar4 = _UNK_0f0317b4;
        uVar15 = _DAT_0f0317b0;
        uStack_5c8 = (long *)CONCAT44(_UNK_0f0317b4,_DAT_0f0317b0);
        uStack_5c0 = (long **)CONCAT44(_UNK_0f0317bc,_UNK_0f0317b8);
        uStack_5b8 = (long *)CONCAT44(_UNK_0f0317c4,_DAT_0f0317c0);
        uStack_5b0 = (code *)CONCAT44(_UNK_0f0317cc,_UNK_0f0317c8);
        uStack_5a8 = plStack_468;
        uStack_5a0 = CONCAT44(uStack_45c,uStack_460);
        lStack_598 = lStack_458;
        uStack_58e = 1;
        uStack_590 = 8;
        cStack_588 = '\x01';
        uStack_58c = 0x2b;
        bStack_580 = 1;
        if (plStack_500 < plStack_4f8) {
          *(undefined4 *)(plStack_500 + 2) = _DAT_0f0317c0;
          *(undefined4 *)((long)plStack_500 + 0x14) = uVar8;
          *(undefined4 *)(plStack_500 + 3) = uVar9;
          *(undefined4 *)((long)plStack_500 + 0x1c) = uVar10;
          *(undefined4 *)plStack_500 = uVar15;
          *(undefined4 *)((long)plStack_500 + 4) = uVar4;
          *(undefined4 *)(plStack_500 + 1) = uVar6;
          *(undefined4 *)((long)plStack_500 + 0xc) = uVar7;
          plStack_500[6] = lStack_458;
          plStack_500[4] = (long)plStack_468;
          plStack_500[5] = uStack_5a0;
          uStack_5a8 = (long *)0x0;
          uStack_5a0 = 0;
          lStack_598 = 0;
          *(undefined1 *)(plStack_500 + 8) = 1;
          plStack_500[7] = CONCAT44(0x2b,CONCAT13(uStack_58d,0x10008));
          *(undefined1 *)(plStack_500 + 9) = 1;
          plStack_550 = plStack_500 + 10;
        }
        else {
          plStack_500 = (long *)func_0x0489d2c0(&plStack_508,&uStack_5c8);
          plStack_550 = plStack_500;
          if (((bStack_580 & 1) != 0) && (((ulong)uStack_5a8 & 1) != 0)) {
            func_0x0412a280(lStack_598,(ulong)uStack_5a8 & 0xfffffffffffffffe);
            plStack_550 = plStack_500;
          }
        }
        lStack_530 = lStack_4e0;
        lStack_538 = lStack_4e8;
        lStack_540 = lStack_4f0;
        plStack_548 = plStack_4f8;
        plStack_558 = plStack_508;
        plStack_508 = (long *)0x0;
        plStack_500 = (long *)0x0;
        plStack_4f8 = (long *)0x0;
        lStack_4f0 = 0;
        lStack_4e8 = 0;
        lStack_4e0 = 0;
        bStack_528 = 0;
        uStack_568 = plStack_518;
        uStack_560 = pplStack_510;
      }
      else {
        plStack_570 = uStack_5b8;
        plStack_518 = (long *)0x0;
        pplStack_510 = (long **)0x0;
        plStack_508 = (long *)0x0;
        uVar15 = func_0x05d73cd0(plVar19,plVar18);
        plVar19 = plStack_570;
        if (((ulong)plVar25 & 1) == 0) {
          uStack_5b8 = plStack_570;
          uVar23 = (ulong)plVar25 & 0xffffffff;
          uStack_5c8 = plVar25;
          uStack_5c0 = pplVar11;
        }
        else {
          func_0x0412e5e0(&uStack_5c8,plStack_570,pplVar11);
          uVar23 = (ulong)uStack_5c8 & 0xff;
        }
        uStack_5b0 = (code *)CONCAT44(uStack_5b0._4_4_,uVar15);
        uStack_5a8 = (long *)CONCAT71(uStack_5a8._1_7_,1);
        bStack_528 = 1;
        uStack_568 = (long *)((ulong)uStack_568 & 0xffffffffffffff00);
        uVar5 = (ulong)plStack_548 >> 8;
        plStack_548 = (long *)((ulong)plStack_548 & 0xffffffffffffff00);
        if ((uVar23 & 1) == 0) {
          plStack_558 = uStack_5b8;
          uStack_568 = uStack_5c8;
          uStack_560 = uStack_5c0;
          plStack_550 = (long *)CONCAT44(plStack_550._4_4_,uVar15);
          plStack_548 = (long *)CONCAT71((int7)uVar5,1);
        }
        else {
          func_0x0412e5e0(&uStack_568,uStack_5b8,uStack_5c0);
          plStack_550 = (long *)CONCAT44(plStack_550._4_4_,(undefined4)uStack_5b0);
          plStack_548 = (long *)CONCAT71(plStack_548._1_7_,1);
          if ((((ulong)uStack_5a8 & 1) != 0) && (((ulong)uStack_5c8 & 1) != 0)) {
            func_0x0412a280(uStack_5b8,(ulong)uStack_5c8 & 0xfffffffffffffffe);
          }
        }
        if (((ulong)plVar25 & 1) != 0) {
          func_0x0412a280(plVar19,(ulong)plVar25 & 0xfffffffffffffffe);
        }
      }
      lVar21 = lStack_4f0;
      if (cStack_4d8 != '\x01') {
        lVar17 = lStack_4e8;
        if (lStack_4f0 != 0) {
          while (lVar21 != lVar17) {
            func_0x048b3e80(lVar17 + -0x40);
            lVar17 = lVar17 + -0x40;
          }
          lStack_4e8 = lVar21;
          func_0x0412a280(lStack_4f0,lStack_4e0 - lStack_4f0);
        }
        plVar18 = plStack_508;
        plVar19 = plStack_500;
        if (plStack_508 != (long *)0x0) {
          for (; plVar18 != plVar19; plVar19 = plVar19 + -10) {
            if (((char)plVar19[-1] == '\x01') && ((*(byte *)(plVar19 + -6) & 1) != 0)) {
              func_0x0412a280(plVar19[-4],plVar19[-6] & 0xfffffffffffffffe);
            }
          }
          plStack_500 = plVar18;
          uVar23 = (long)plStack_4f8 - (long)plStack_508;
LAB_06434c49:
          func_0x0412a280(plStack_508,uVar23);
        }
LAB_06434c4e:
        lStack_438 = -0x796688d8990206f1;
        puStack_430 = &UNK_0140f690;
        plStack_428 = (long *)0x1;
        uStack_420 = 0xbc;
        if ((bStack_528 & 1) == 0) {
          func_0x0eedea30(&uStack_5c8);
          func_0x0eedeb80(2,0x2d,&uStack_568,&uStack_5c8,&lStack_438);
          if (((ulong)uStack_5c8 & 1) != 0) {
            func_0x0412a280(uStack_5b8,(ulong)uStack_5c8 & 0xfffffffffffffffe);
          }
        }
        uStack_4c8 = uStack_4c8 & 0xffffff00;
        cStack_4a8 = '\0';
        if (((bStack_528 & 1) != 0) && (((ulong)plStack_548 & 1) != 0)) {
          if (((ulong)uStack_568 & 1) == 0) {
            plStack_4b8 = plStack_558;
            uStack_4c8 = (uint)uStack_568;
            uStack_4c4 = uStack_568._4_4_;
            uStack_4c0 = (undefined4)uStack_560;
            uStack_4bc = uStack_560._4_4_;
          }
          else {
            func_0x0412e5e0(&uStack_4c8,plStack_558,uStack_560);
          }
          uStack_4b0 = plStack_550._0_4_;
          cStack_4a8 = '\x01';
        }
        lVar21 = lStack_540;
        if ((bStack_528 & 1) == 0) {
          lVar17 = lStack_538;
          if (lStack_540 != 0) {
            while (lVar21 != lVar17) {
              func_0x048b3e80(lVar17 + -0x40);
              lVar17 = lVar17 + -0x40;
            }
            lStack_538 = lVar21;
            func_0x0412a280(lStack_540,lStack_530 - lStack_540);
          }
          plVar18 = plStack_558;
          plVar19 = plStack_550;
          if (plStack_558 != (long *)0x0) {
            for (; plVar18 != plVar19; plVar19 = plVar19 + -10) {
              if (((char)plVar19[-1] == '\x01') && ((*(byte *)(plVar19 + -6) & 1) != 0)) {
                func_0x0412a280(plVar19[-4],plVar19[-6] & 0xfffffffffffffffe);
              }
            }
            plStack_550 = plVar18;
            uVar23 = (long)plStack_548 - (long)plStack_558;
            goto LAB_06434e33;
          }
        }
        else if ((((ulong)plStack_548 & 1) != 0) && (((ulong)uStack_568 & 1) != 0)) {
          uVar23 = (ulong)uStack_568 & 0xfffffffffffffffe;
LAB_06434e33:
          func_0x0412a280(plStack_558,uVar23);
        }
        goto LAB_0643442b;
      }
      if (((ulong)plStack_518 & 1) == 0) goto LAB_06434c4e;
      uVar23 = (ulong)plStack_518 & 0xfffffffffffffffe;
      goto LAB_06434c49;
    }
    if (plVar18 == (long *)puVar16[3]) goto LAB_06434409;
LAB_064343d7:
  }
  bStack_528 = 1;
  uStack_4c8 = uStack_4c8 & 0xffffff00;
  cStack_4a8 = '\0';
LAB_0643442b:
  plVar19 = param_2 + 1;
  if (cStack_4a8 == '\x01') {
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x48,0);
    }
    lVar21 = param_2[3];
    if ((uStack_4c8 & 1) == 0) {
      plStack_428 = plStack_4b8;
      lStack_438 = CONCAT44(uStack_4c4,uStack_4c8);
      puStack_430 = (undefined *)CONCAT44(uStack_4bc,uStack_4c0);
    }
    else {
      func_0x0412e5e0(&lStack_438,plStack_4b8,CONCAT44(uStack_4bc,uStack_4c0));
    }
    uStack_420 = uStack_4b0;
    uStack_418 = 0;
    *puVar16 = &UNK_0f008710;
    uVar15 = *(undefined4 *)((long)param_2 + 0xc);
    lVar17 = param_2[2];
    uVar4 = *(undefined4 *)((long)param_2 + 0x14);
    *(int *)(puVar16 + 1) = (int)*plVar19;
    *(undefined4 *)((long)puVar16 + 0xc) = uVar15;
    *(int *)(puVar16 + 2) = (int)lVar17;
    *(undefined4 *)((long)puVar16 + 0x14) = uVar4;
    *(int *)(puVar16 + 3) = (int)lVar21;
    *(undefined1 *)(puVar16 + 4) = 0;
    *(undefined4 *)(puVar16 + 8) = 0xffffffff;
    uStack_5c8 = puVar16 + 4;
    (*_UNK_0f009608)(&uStack_5c8,&lStack_438);
    *(undefined4 *)(puVar16 + 8) = 0;
    puVar12 = puVar16;
    if ((ulong)uStack_418 != 0xffffffff) {
      (**(code **)(&UNK_0f036ae8 + (ulong)uStack_418 * 8))(&uStack_5c8,&lStack_438);
    }
  }
  else {
    lVar21 = *(long *)(param_1 + 0x18);
    auVar27 = func_0x064aa9c0();
    puVar22 = auVar27._8_8_;
    plVar18 = auVar27._0_8_;
    lStack_438 = 0;
    puStack_430 = (undefined *)0x0;
    func_0x048b1dc0(&lStack_438);
    plVar25 = param_2;
    if (puVar22 == puStack_430) {
      plStack_570 = param_2;
      if (plVar18 == (long *)0x0) {
        lVar17 = func_0x048aead0(puVar22);
        iVar14 = *(int *)(lVar17 + 8);
        lVar17 = lStack_438;
      }
      else {
        iVar14 = (int)plVar18[1];
        lVar17 = lStack_438;
      }
      lStack_438 = lVar17;
      if (lVar17 == 0) {
        lVar17 = func_0x048aead0(puStack_430);
      }
      plVar25 = plStack_570;
      if (iVar14 != *(int *)(lVar17 + 8)) goto LAB_06434504;
    }
    else {
LAB_06434504:
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)func_0x048aead0(puVar22);
        lVar17 = *(long *)(lVar21 + 8);
      }
      else {
        lVar17 = *(long *)(lVar21 + 8);
      }
      if (lVar17 != 0) {
        uVar2 = *(uint *)(*plVar18 + 4);
        lVar24 = lVar21 + 8;
        do {
          bVar26 = *(uint *)(lVar17 + 0x20) < uVar2;
          if (!bVar26) {
            lVar24 = lVar17;
          }
          lVar17 = *(long *)(lVar17 + (ulong)bVar26 * 8);
        } while (lVar17 != 0);
        if ((lVar24 != lVar21 + 8) && (*(uint *)(lVar24 + 0x20) <= uVar2)) {
          lVar21 = *(long *)(lVar24 + 0x28);
          if (*(long *)(lVar21 + 0x60) != 0) {
            func_0x049e8590(&lStack_438,lVar21);
            plVar18 = *(long **)(lVar21 + 0x60);
            if (plVar18 == (long *)0x0) {
              uVar20 = func_0x04891200();
              uVar20 = func_0x04882e20(uVar20);
              func_0x05f19550(plVar25);
              func_0x05f19510(&uStack_5c8);
              func_0x0412a280(lVar21,0x48);
              plVar19 = plStack_498;
              if (((ulong)plStack_518 & 1) != 0) {
                func_0x0412a280(plStack_508,(ulong)plStack_518 & 0xfffffffffffffffe);
                plVar19 = plStack_498;
              }
              if (plVar19 == (long *)0x0) {
                plStack_498 = (long *)0x0;
              }
              else {
                plStack_498 = (long *)0x0;
                (**(code **)(*plVar19 + 8))();
              }
              if (bStack_298 == 1) {
                func_0x05d645d0(&lStack_438);
              }
              if ((cStack_4a8 == '\x01') && ((uStack_4c8 & 1) != 0)) {
                func_0x0412a280(plStack_4b8,CONCAT44(uStack_4c4,uStack_4c8) & 0xfffffffffffffffe);
              }
              func_0x06437420(&puStack_578);
              if ((bStack_480 & 1) != 0) {
                func_0x0412a280(plStack_470,
                                CONCAT71(auStack_47f._0_7_,bStack_480) & 0xfffffffffffffffe);
              }
              func_0x0eee2d70(uVar20);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            cVar13 = (**(code **)(*plVar18 + 0x30))(plVar18,&lStack_438);
            if ((code *)CONCAT44(uStack_41c,uStack_420) != (code *)0x0) {
              (*(code *)CONCAT44(uStack_41c,uStack_420))(&lStack_438);
            }
            if (cVar13 == '\0') goto LAB_064350a9;
          }
          func_0x06075860(&uStack_5c8,*(undefined8 *)(lVar24 + 0x28));
          if ((int)uStack_5a8 == 0x487d2c5a) {
LAB_06434882:
            lVar21 = uStack_5a0;
            if (uStack_5a8._4_1_ == '\x04') goto LAB_0643488f;
            plVar18 = uStack_5c8;
            if (uStack_5a8._4_1_ == '\x02') {
              plVar18 = &uStack_5c8;
            }
            if (plVar18 == (long *)0x0 || (int)uStack_5a8 != 0x487d2c5a) {
              pcVar3 = (code *)CONCAT44(uStack_58c,
                                        CONCAT13(uStack_58d,CONCAT12(uStack_58e,uStack_590)));
              if (pcVar3 == (code *)0x0) goto LAB_0643488f;
              if (lStack_598 == 0) {
                (*pcVar3)(0,&uStack_5c8,0);
              }
              plVar18 = uStack_5c8;
              if (uStack_5a8._4_1_ == '\x02') {
                plVar18 = &uStack_5c8;
              }
              plVar18 = (long *)func_0x0488e200(lVar21,lStack_598,0x487d2c5a,plVar18);
            }
          }
          else {
            func_0x064b1e80(&lStack_438,&uStack_5c8);
            if ((lStack_400 != 0) && ((byte)((char)uStack_414 - 1U) < 2)) {
              func_0x048b0900(&uStack_5c8,&lStack_438);
            }
            if ((code *)CONCAT44(uStack_41c,uStack_420) != (code *)0x0) {
              (*(code *)CONCAT44(uStack_41c,uStack_420))(&lStack_438);
            }
            if (lStack_400 != 0) goto LAB_06434882;
LAB_0643488f:
            plVar18 = (long *)0x0;
          }
          if (uStack_5b0 != (code *)0x0) {
            (*uStack_5b0)(&uStack_5c8);
          }
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x38))(&lStack_438,plVar18,plVar19);
            if (bStack_298 == 1) {
              (**(code **)(lStack_438 + 0x30))(&plStack_498,&lStack_438);
              plStack_518 = (long *)0x0;
              pplStack_510 = (long **)0x0;
              plStack_508 = (long *)0x0;
              uStack_568 = (long *)&UNK_0ef9fe28;
              uStack_560 = &plStack_518;
              if (plStack_498 != (long *)0x0) {
                uStack_5c8 = (long *)((ulong)uStack_5c8 & 0xffffffffffff0000);
                func_0x0d6ba180(&uStack_5c8,plStack_498,&uStack_568,0);
                if (((ulong)uStack_5c8 & 1) != 0) {
                  func_0x0412a280(uStack_5b8,(ulong)uStack_5c8 & 0xfffffffffffffffe);
                }
              }
              puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
              if (puVar16 == (undefined8 *)0x0) {
                FUN_0eec74c0(0x48,0);
              }
              lVar21 = plVar25[3];
              uStack_5b8 = plStack_508;
              uStack_5c8 = plStack_518;
              uStack_5c0 = pplStack_510;
              plStack_518 = (long *)0x0;
              pplStack_510 = (long **)0x0;
              plStack_508 = (long *)0x0;
              uStack_5a8 = (long *)CONCAT44(uStack_5a8._4_4_,1);
              *puVar16 = &UNK_0f008710;
              uVar15 = *(undefined4 *)((long)param_2 + 0xc);
              lVar17 = param_2[2];
              uVar4 = *(undefined4 *)((long)param_2 + 0x14);
              *(int *)(puVar16 + 1) = (int)*plVar19;
              *(undefined4 *)((long)puVar16 + 0xc) = uVar15;
              *(int *)(puVar16 + 2) = (int)lVar17;
              *(undefined4 *)((long)puVar16 + 0x14) = uVar4;
              *(int *)(puVar16 + 3) = (int)lVar21;
              *(undefined1 *)(puVar16 + 4) = 0;
              *(undefined4 *)(puVar16 + 8) = 0xffffffff;
              plStack_468 = puVar16 + 4;
              (*_UNK_0f009610)(&plStack_468,&uStack_5c8);
              *(undefined4 *)(puVar16 + 8) = 1;
              if (((ulong)uStack_5a8 & 0xffffffff) != 0xffffffff) {
                (**(code **)(&UNK_0f036ae8 + ((ulong)uStack_5a8 & 0xffffffff) * 8))
                          (&plStack_468,&uStack_5c8);
              }
              puStack_578 = puVar16;
              if (((ulong)plStack_518 & 1) != 0) {
                func_0x0412a280(plStack_508,(ulong)plStack_518 & 0xfffffffffffffffe);
              }
              plVar18 = plStack_498;
              plStack_498 = (long *)0x0;
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            else {
              puVar16 = (undefined8 *)0x0;
            }
            puVar12 = puStack_578;
            if ((bStack_298 & 1) != 0) {
              func_0x05d645d0(&lStack_438);
              puVar12 = puStack_578;
            }
            goto LAB_064350ac;
          }
        }
      }
    }
LAB_064350a9:
    puVar16 = (undefined8 *)0x0;
    puVar12 = puStack_578;
  }
LAB_064350ac:
  puStack_578 = puVar12;
  if ((cStack_4a8 == '\x01') && ((uStack_4c8 & 1) != 0)) {
    func_0x0412a280(plStack_4b8,CONCAT44(uStack_4c4,uStack_4c8) & 0xfffffffffffffffe);
  }
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x48,0);
    }
    puVar16[2] = 0;
    puVar16[3] = 0;
    puVar16[8] = 0;
    *puVar16 = &UNK_0f008710;
    puVar16[4] = 0;
    puVar16[5] = 0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    *(undefined4 *)(puVar16 + 8) = 0;
    uVar15 = *(undefined4 *)((long)param_2 + 0xc);
    lVar21 = param_2[2];
    uVar4 = *(undefined4 *)((long)param_2 + 0x14);
    *(int *)(puVar16 + 1) = (int)*plVar19;
    *(undefined4 *)((long)puVar16 + 0xc) = uVar15;
    *(int *)(puVar16 + 2) = (int)lVar21;
    *(undefined4 *)((long)puVar16 + 0x14) = uVar4;
    puStack_578 = puVar16;
  }
  plVar19 = (long *)func_0x05f9fd40(*(undefined8 *)(param_1 + 0x18));
  if (plVar19 != (long *)0x0) {
    if ((DAT_0f5753a0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f5753a0), iVar14 != 0)) {
      _DAT_0f575370 = &UNK_0f036b08;
      _DAT_0f575390 = (long *)&DAT_0f575370;
      func_0x0eee2f40(&UNK_062619b0,&DAT_0f575370,0xf53dab8);
      func_0x0410844d(&DAT_0f5753a0);
    }
    uVar20 = _DAT_0f5435e8;
    if (_DAT_0f575390 == (long *)0x0) {
      uStack_5a8 = (long *)0x0;
    }
    else if (_DAT_0f575390 == (long *)&DAT_0f575370) {
      uStack_5a8 = &uStack_5c8;
      (**(code **)(_DAT_0f575370 + 0x18))(&DAT_0f575370);
    }
    else {
      uStack_5a8 = (long *)(**(code **)(*_DAT_0f575390 + 0x10))();
    }
    uVar20 = (**(code **)(*plVar19 + 0x48))(plVar19,uVar20,&uStack_5c8);
    if (uStack_5a8 == &uStack_5c8) {
      lVar21 = 0x20;
LAB_064351e8:
      (**(code **)(*uStack_5a8 + lVar21))();
    }
    else {
      lVar21 = 0x28;
      if (uStack_5a8 != (long *)0x0) goto LAB_064351e8;
    }
    (**(code **)(*plVar19 + 0x50))(&lStack_438,plVar19,puVar16,uVar20);
    if ((code *)CONCAT44(uStack_414,uStack_418) != (code *)0x0) {
      (*(code *)CONCAT44(uStack_414,uStack_418))(&puStack_430);
    }
    puVar16 = puStack_578;
    puStack_578 = (undefined8 *)0x0;
    if (puVar16 == (undefined8 *)0x0) goto LAB_06435262;
  }
  puStack_578 = (undefined8 *)0x0;
  if ((ulong)*(uint *)(puVar16 + 8) != 0xffffffff) {
    (**(code **)(&UNK_0f036ae8 + (ulong)*(uint *)(puVar16 + 8) * 8))(&lStack_438,puVar16 + 4);
  }
  func_0x0412a280(puVar16,0x48);
LAB_06435262:
  if ((bStack_480 & 1) != 0) {
    func_0x0412a280(plStack_470,CONCAT71(auStack_47f._0_7_,bStack_480) & 0xfffffffffffffffe);
  }
  return;
}


