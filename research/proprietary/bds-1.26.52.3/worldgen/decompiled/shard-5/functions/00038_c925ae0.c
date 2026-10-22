/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca25ae0 (ELF vaddr 0xc925ae0)
 * Label: caller-of-callee
 * Body:  [[0ca25ae0, 0ca27fd8] [0ca27fe0, 0ca2803a] [0ca28040, 0ca280c0] [0ca280d0, 0ca28141] [0ca28150, 0ca281b8] [0ca281c0, 0ca281f1] [0ca28200, 0ca28246] [0ca28250, 0ca282b0] [0ca282c0, 0ca28329] [0ca28330, 0ca28394] [0ca283a0, 0ca283d1] [0ca283e0, 0ca286c0] [0ca286d0, 0ca286e8] [0ca286f0, 0ca28bd5] [0ca28be0, 0ca29a95] [0ca2a164, 0ca2a24a]]
 * Ghidra: FUN_0ca25ae0
 */


/* WARNING: Possible PIC construction at 0x0ca26317: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca26377: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca26442: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca26830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca2686c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca27982: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca279be: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca27a07: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca27a43: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca27fb5: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca28d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca28b11: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0ca27a48) */
/* WARNING: Removing unreachable block (ram,0x0ca279c3) */
/* WARNING: Removing unreachable block (ram,0x0ca28b16) */
/* WARNING: Removing unreachable block (ram,0x0ca28b27) */
/* WARNING: Removing unreachable block (ram,0x0ca279a0) */
/* WARNING: Removing unreachable block (ram,0x0ca279b2) */
/* WARNING: Removing unreachable block (ram,0x0ca26460) */
/* WARNING: Removing unreachable block (ram,0x0ca28b05) */
/* WARNING: Removing unreachable block (ram,0x0ca26359) */
/* WARNING: Removing unreachable block (ram,0x0ca2636b) */
/* WARNING: Removing unreachable block (ram,0x0ca2637c) */
/* WARNING: Removing unreachable block (ram,0x0ca2684e) */
/* WARNING: Removing unreachable block (ram,0x0ca26860) */
/* WARNING: Removing unreachable block (ram,0x0ca27a25) */
/* WARNING: Removing unreachable block (ram,0x0ca27a37) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca25ae0(undefined8 *param_1,undefined8 ******param_2,undefined8 ******param_3,
                 undefined8 ******param_4,byte *param_5,undefined4 param_6,undefined8 *param_7)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  ulong *puVar8;
  undefined8 ******ppppppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *****pppppuVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 ****ppppuVar16;
  long lVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  ulong uVar20;
  undefined8 *******pppppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 unaff_RBX;
  undefined *puVar25;
  undefined8 *******unaff_RBP;
  int *piVar26;
  undefined8 *******pppppppuVar27;
  undefined8 ****ppppuVar28;
  ulong uVar29;
  undefined8 *****pppppuVar30;
  undefined8 ******unaff_R12;
  undefined8 **ppuVar31;
  undefined8 ******ppppppuVar32;
  undefined8 *****pppppuVar33;
  undefined8 ****ppppuVar34;
  ulong uVar35;
  undefined8 uVar36;
  undefined8 *****pppppuVar37;
  bool bVar38;
  float fVar39;
  undefined8 uStack_5d8;
  undefined8 ******ppppppuStack_5d0;
  undefined8 ******ppppppuStack_5c8;
  undefined1 auStack_5b8 [4];
  undefined4 uStack_5b4;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 ******ppppppuStack_5a0;
  undefined8 ******ppppppuStack_598;
  undefined8 ******ppppppuStack_590;
  undefined8 ******ppppppuStack_588;
  char cStack_580;
  undefined8 ******ppppppuStack_570;
  undefined8 ******ppppppuStack_568;
  undefined8 ******ppppppuStack_560;
  undefined8 ******ppppppuStack_558;
  undefined8 ******ppppppuStack_550;
  undefined8 *****pppppuStack_548;
  undefined8 ******ppppppuStack_540;
  undefined1 auStack_538 [8];
  undefined8 *****pppppuStack_530;
  undefined8 ******ppppppuStack_528;
  undefined8 ******ppppppuStack_520;
  undefined8 *puStack_518;
  ulong uStack_510;
  undefined2 uStack_508;
  undefined8 ******ppppppuStack_500;
  undefined8 ******ppppppuStack_4f8;
  undefined8 *puStack_4f0;
  byte *pbStack_4e8;
  undefined8 ******ppppppuStack_4e0;
  undefined8 ******ppppppuStack_4d8;
  undefined8 ******ppppppuStack_4d0;
  undefined8 ****ppppuStack_4c8;
  undefined8 ****ppppuStack_4c0;
  undefined8 ******ppppppuStack_4b8;
  undefined8 ******ppppppuStack_4b0;
  undefined8 ******ppppppuStack_4a8;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  uint uStack_47c;
  undefined2 uStack_478;
  undefined8 uStack_470;
  long *plStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined2 uStack_450;
  undefined8 *****pppppuStack_448;
  undefined8 *****pppppuStack_440;
  undefined8 ******ppppppuStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined2 uStack_420;
  uint uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  uint uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  undefined8 *puStack_3e8;
  undefined8 *******pppppppuStack_3e0;
  undefined8 uStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  undefined8 ******ppppppuStack_3c8;
  int iStack_3c0;
  char cStack_3bc;
  undefined8 ***pppuStack_3b8;
  undefined *puStack_3b0;
  undefined8 ****ppppuStack_398;
  undefined1 uStack_388;
  undefined2 uStack_386;
  undefined1 uStack_384;
  byte bStack_36c;
  undefined8 uStack_360;
  long *plStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *****pppppuStack_330;
  undefined8 *****pppppuStack_328;
  undefined8 ****ppppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2a8;
  undefined8 uStack_278;
  undefined8 *puStack_268;
  undefined8 **ppuStack_260;
  ulong uStack_258;
  undefined8 *****pppppuStack_250;
  undefined8 *****pppppuStack_248;
  undefined8 ******ppppppuStack_240;
  ulong uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 ******ppppppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 *puStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 ******ppppppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  undefined8 ******appppppuStack_1a8 [6];
  undefined8 uStack_178;
  undefined1 uStack_168;
  undefined2 uStack_166;
  undefined1 uStack_164;
  uint uStack_148;
  undefined1 auStack_140 [88];
  undefined8 ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined1 auStack_d8 [8];
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppppuStack_4c0 = (undefined8 ****)CONCAT44(ppppuStack_4c0._4_4_,param_6);
  uStack_418 = 0x206e491e;
  uStack_414 = 0x64617274;
  uStack_410 = 0x69662065;
  uStack_40c = 0x203a656c;
  uStack_408 = uStack_408 & 0xffffff00;
  ppppppuStack_540 = (undefined8 ******)(param_5 + 1);
  bVar38 = (*param_5 & 1) == 0;
  ppppppuVar9 = *(undefined8 *******)(param_5 + 0x10);
  if (bVar38) {
    ppppppuVar9 = ppppppuStack_540;
  }
  ppppppuVar18 = (undefined8 ******)(ulong)(*param_5 >> 1);
  if (!bVar38) {
    ppppppuVar18 = *(undefined8 *******)(param_5 + 8);
  }
  ppppppuStack_570 = param_4;
  ppppppuStack_550 = param_2;
  ppppppuStack_4f8 = param_3;
  if (ppppppuVar18 < (undefined8 ******)0xfffffffffffffff8) {
    ppppppuVar32 = (undefined8 ******)(auStack_5b8 + 1);
    puStack_4f0 = param_1;
    pbStack_4e8 = param_5;
    if (ppppppuVar18 < (undefined8 ******)0x17) {
      _auStack_5b8 = (undefined8 ******)
                     CONCAT71(stack0xfffffffffffffa49,(char)ppppppuVar18 * '\x02');
      ppppppuVar19 = ppppppuVar32;
      if (ppppppuVar18 != (undefined8 ******)0x0) goto LAB_0ca25bf7;
    }
    else {
      uVar35 = 0x1a;
      if (((ulong)ppppppuVar18 | 7) != 0x17) {
        uVar35 = ((ulong)ppppppuVar18 | 7) + 1;
      }
      ppppppuVar19 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
      if (ppppppuVar19 == (undefined8 ******)0x0) {
        func_0x0eec74c0(uVar35,0);
      }
      _auStack_5b8 = (undefined8 ******)(uVar35 | 1);
      uStack_5b0 = ppppppuVar18;
      uStack_5a8 = ppppppuVar19;
LAB_0ca25bf7:
      param_5 = pbStack_4e8;
      func_0x0eee2ee0(ppppppuVar19,ppppppuVar9,ppppppuVar18);
    }
    *(byte *)((long)ppppppuVar19 + (long)ppppppuVar18) = 0;
    ppppppuVar9 = (undefined8 ******)((ulong)_auStack_5b8 >> 1 & 0x7f);
    if (((ulong)_auStack_5b8 & 1) != 0) {
      ppppppuVar9 = uStack_5b0;
      ppppppuVar32 = uStack_5a8;
    }
    puVar8 = (ulong *)func_0x0412f8c0(&uStack_418,ppppppuVar32,ppppppuVar9);
    uStack_2e8 = puVar8[2];
    uStack_2f8 = *puVar8;
    uStack_2f0 = puVar8[1];
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    uVar20 = uStack_2f8 >> 1 & 0x7f;
    uVar35 = (long)&uStack_2f8 + 1;
    if ((uStack_2f8 & 1) != 0) {
      uVar20 = uStack_2f0;
      uVar35 = uStack_2e8;
    }
    auStack_538 = (undefined1  [8])0x0;
    if (uVar35 == 0) {
      auStack_538 = (undefined1  [8])((ulong)((uint)uVar20 & 0x7f) << 0x30);
    }
    else {
      lVar13 = uVar20 + 9;
      puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && puVar8 == (ulong *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *puVar8 = uVar20;
      func_0x0eee2f00(puVar8 + 1,uVar35,uVar20);
      *(undefined1 *)((long)puVar8 + uVar20 + 8) = 0;
      auStack_538 = (undefined1  [8])((ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      param_5 = pbStack_4e8;
    }
    puStack_1f8 = (undefined8 *)((ulong)puStack_1f8 & 0xffffffffffffff00);
    uStack_1e8 = (undefined8 *****)((ulong)uStack_1e8 & 0xffffffffffffff00);
    func_0x0eeb79f0(auStack_98,auStack_538);
    if (((ulong)auStack_538 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)auStack_538 & 0xff00ffffffffffff) - 8);
    }
    auStack_538 = (undefined1  [8])0x0;
    if ((uStack_2f8 & 1) != 0) {
      func_0x0412a280(uStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
    }
    if (((ulong)_auStack_5b8 & 1) != 0) {
      func_0x0412a280(uStack_5a8,(ulong)_auStack_5b8 & 0xfffffffffffffffe);
    }
    if ((uStack_418 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_404,uStack_408),
                      CONCAT44(uStack_414,uStack_418) & 0xfffffffffffffffe);
    }
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    ppppppuStack_a8 = *(undefined8 *******)(param_5 + 0x10);
    uStack_a0 = *(ulong *)(param_5 + 8);
    if ((*param_5 & 1) == 0) {
      ppppppuStack_a8 = ppppppuStack_540;
      uStack_a0 = (ulong)(*param_5 >> 1);
    }
    func_0x0ee35680(auStack_d8,&ppppppuStack_a8);
    cVar6 = (*(code *)(*ppppppuStack_570)[2])(ppppppuStack_570,auStack_d8,&uStack_498);
    if (cVar6 == '\0') {
      puStack_4f0[4] = 0;
      puStack_4f0[5] = 0;
      puStack_4f0[2] = 0;
      puStack_4f0[3] = 0;
      *puStack_4f0 = 0;
      puStack_4f0[1] = 0;
      *(undefined1 *)(puStack_4f0 + 6) = 1;
      goto joined_r0x0ca2975a;
    }
    ppppppuVar9 = (undefined8 ******)(*(code *)(*ppppppuStack_4f8)[0x18c])();
    uStack_470 = *param_7;
    plStack_468 = (long *)param_7[1];
    if (plStack_468 == (long *)0x0) {
      uStack_460 = param_7[2];
    }
    else {
      LOCK();
      plStack_468[1] = plStack_468[1] + 1;
      UNLOCK();
      uStack_460 = param_7[2];
      LOCK();
      plStack_468[1] = plStack_468[1] + 1;
      UNLOCK();
    }
    uStack_478 = 0xd;
    uStack_458 = 0;
    uStack_450 = 0x100;
    puVar25 = &UNK_0f3ec528;
    uStack_360 = uStack_470;
    plStack_358 = plStack_468;
    uStack_350 = uStack_460;
    cVar6 = func_0x05f6fe50(&UNK_0f3ec528,&UNK_0f3ec208);
    if (cVar6 != '\0') {
      puVar25 = &UNK_0f3ec208;
    }
    func_0x05d54750(&puStack_1f8,puVar25);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2e0 = &uStack_2d8;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2a8 = 0;
    uStack_278 = 0;
    puStack_268 = puStack_1f8;
    ppuStack_260 = (undefined8 **)0x0;
    ppuVar31 = ppuStack_1f0;
    ppppppuStack_500 = ppppppuVar9;
    if (((ulong)ppuStack_1f0 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppuStack_1f0 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar35 - 8);
      lVar13 = lVar17 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar10 = lVar17;
      func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
      *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
      ppuVar31 = (undefined8 **)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_258 = 0;
    ppuStack_260 = ppuVar31;
    if (((ulong)uStack_1e8 & 0x80000000000000) == 0) {
      uStack_258 = (ulong)uStack_1e8;
      pppppuStack_250 = (undefined8 *****)0x0;
      pppppuStack_248 = (undefined8 *****)0x0;
      ppppppuStack_240 = (undefined8 ******)0x0;
      uStack_238 = 0;
      puStack_230 = (undefined8 *)0x0;
      uStack_228 = 0;
      ppppppuStack_220 = (undefined8 ******)0x0;
      uStack_218 = 0;
      uStack_210 = 0;
      ppppppuVar9 = ppppppuStack_500;
    }
    else {
      uVar35 = (ulong)uStack_1e8 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar35 - 8);
      lVar13 = lVar17 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar10 = lVar17;
      func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
      ppppppuVar9 = ppppppuStack_500;
      *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
      uStack_258 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      ppppppuStack_220 = (undefined8 ******)0x0;
      uStack_218 = 0;
      puStack_230 = (undefined8 *)0x0;
      uStack_228 = 0;
      ppppppuStack_240 = (undefined8 ******)0x0;
      uStack_238 = 0;
      pppppuStack_250 = (undefined8 *****)0x0;
      pppppuStack_248 = (undefined8 *****)0x0;
      uStack_210 = 0;
      if (((ulong)uStack_1e8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)uStack_1e8 & 0xff00ffffffffffff) - 8);
      }
    }
    uStack_1e8 = (undefined8 *****)0x0;
    if (((ulong)ppuStack_1f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppuStack_1f0 & 0xff00ffffffffffff) - 8);
    }
    lStack_208 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
    if (lStack_208 == 0) {
      func_0x0eec74c0(1,0);
    }
    ppppppuVar18 = (undefined8 ******)pppppuStack_248;
    pppppuStack_250 = (undefined8 *****)0x0;
    pppppuStack_248 = (undefined8 *****)0x0;
    if (ppppppuVar18 != (undefined8 ******)0x0) {
      LOCK();
      plVar10 = (long *)(ppppppuVar18 + 1);
      lVar13 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)((long)*ppppppuVar18 + 0x10))(ppppppuVar18);
        goto SUB_0412c2d0;
      }
    }
    ppppppuStack_240 = (undefined8 ******)0x0;
    pppppuStack_250 = ppppppuVar9[1];
    pppppuStack_248 = ppppppuVar9[2];
    if (pppppuStack_248 != (undefined8 *****)0x0) {
      LOCK();
      pppppuStack_248[1] = (undefined8 ****)((long)pppppuStack_248[1] + 1);
      UNLOCK();
    }
    if (pppppuStack_250 != (undefined8 *****)0x0) {
      ppppppuStack_240 = ppppppuVar9;
    }
    pppppuStack_448 = (undefined8 *****)CONCAT62(pppppuStack_448._2_6_,uStack_478);
    pppppuStack_440 = (undefined8 *****)uStack_470;
    ppppppuStack_438 = (undefined8 ******)plStack_468;
    uStack_470 = 0;
    plStack_468 = (long *)0x0;
    uStack_430 = uStack_460;
    uStack_460 = 0;
    uStack_428 = uStack_458;
    uStack_420 = uStack_450;
    func_0x0ca53090(&uStack_2f8,&pppppuStack_448);
    ppppppuVar18 = ppppppuStack_438;
    pppppuStack_440 = (undefined8 *****)0x0;
    ppppppuStack_438 = (undefined8 ******)0x0;
    if (ppppppuVar18 == (undefined8 ******)0x0) {
      if (puStack_230 != (undefined8 *)0x0) goto LAB_0ca26483;
LAB_0ca264a5:
      uStack_430 = 0;
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar11 = 0;
      puStack_230 = puVar11;
    }
    else {
      LOCK();
      plVar10 = (long *)(ppppppuVar18 + 1);
      lVar13 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)((long)*ppppppuVar18 + 0x10))(ppppppuVar18);
        goto SUB_0412c2d0;
      }
      if (puStack_230 == (undefined8 *)0x0) goto LAB_0ca264a5;
LAB_0ca26483:
      uStack_430 = 0;
      *puStack_230 = 0;
    }
    func_0x05d54750(&ppppppuStack_4e0,&UNK_0f3ec438);
    ppuStack_1f0 = &puStack_268;
    uStack_1e8 = pppppuStack_250;
    uStack_1e0 = pppppuStack_248;
    if (pppppuStack_248 != (undefined8 *****)0x0) {
      LOCK();
      pppppuStack_248[1] = (undefined8 ****)((long)pppppuStack_248[1] + 1);
      UNLOCK();
    }
    ppppppuStack_1d8 = ppppppuStack_240;
    puStack_1f8 = &uStack_2f8;
    if ((uStack_238 == 0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_0131c153),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_1d0 = uStack_238;
    if (puStack_230 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar11 = 0;
      puStack_230 = puVar11;
    }
    pppppppuStack_3e0 = &ppppppuStack_220;
    uStack_418 = (uint)puStack_1f8;
    uStack_414 = (undefined4)((ulong)puStack_1f8 >> 0x20);
    uStack_410 = SUB84(ppuStack_1f0,0);
    uStack_40c = (undefined4)((ulong)ppuStack_1f0 >> 0x20);
    uStack_408 = (uint)uStack_1e8;
    uStack_404 = uStack_1e8._4_4_;
    uStack_400 = (undefined4)uStack_1e0;
    uStack_3fc = uStack_1e0._4_4_;
    uStack_1e8 = (undefined8 *****)0x0;
    uStack_1e0 = (undefined8 *****)0x0;
    uStack_3f8 = ppppppuStack_1d8;
    ppppppuStack_1d8 = (undefined8 ******)0x0;
    uStack_3f0 = (undefined4)uStack_1d0;
    uStack_3ec = uStack_1d0._4_4_;
    uStack_3d8 = ppppppuStack_4e0;
    ppppppuStack_3d0 = (undefined8 ******)0x0;
    ppppppuVar9 = ppppppuStack_4d8;
    puStack_3e8 = puStack_230;
    puStack_1c8 = puStack_230;
    pppppppuStack_1c0 = pppppppuStack_3e0;
    if (((ulong)ppppppuStack_4d8 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppppuStack_4d8 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar35 - 8);
      lVar13 = lVar17 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar10 = lVar17;
      func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
      *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
      ppppppuVar9 = (undefined8 ******)
                    ((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppppuStack_3c8 = (undefined8 ******)0x0;
    ppppppuVar32 = ppppppuStack_4d0;
    ppppppuStack_3d0 = ppppppuVar9;
    if (((ulong)ppppppuStack_4d0 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppppuStack_4d0 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar35 - 8);
      lVar13 = lVar17 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar10 = lVar17;
      func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
      *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
      ppppppuVar32 = (undefined8 ******)
                     ((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppppuVar18 = (undefined8 ******)uStack_1e0;
    ppppuStack_398 = &pppuStack_3b8;
    pppuStack_3b8 = (undefined8 ***)&UNK_0f3ec3b8;
    puStack_3b0 = &UNK_0ca23480;
    uStack_388 = 1;
    uStack_386 = 0xfffc;
    uStack_384 = 1;
    uStack_1e8 = (undefined8 *****)0x0;
    uStack_1e0 = (undefined8 *****)0x0;
    ppppppuStack_3c8 = ppppppuVar32;
    if (ppppppuVar18 != (undefined8 ******)0x0) {
      LOCK();
      plVar10 = (long *)(ppppppuVar18 + 1);
      lVar13 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)((long)*ppppppuVar18 + 0x10))(ppppppuVar18);
        goto SUB_0412c2d0;
      }
      ppppppuStack_1d8 = (undefined8 ******)0x0;
    }
    func_0x05d54750(&uStack_5d8,&UNK_0f3ec528);
    pppppppuVar15 = pppppppuStack_3e0;
    if (*(char *)((long)pppppppuStack_3e0 + 6) == '\0') {
      *pppppppuStack_3e0 = uStack_5d8;
      if (((ulong)pppppppuStack_3e0[1] & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_3e0[1] & 0xff00ffffffffffff) - 8);
      }
      pppppppuVar15[1] = (undefined8 ******)0x0;
      ppppppuVar9 = ppppppuStack_5d0;
      if (((ulong)ppppppuStack_5d0 & 0x80000000000000) != 0) {
        uVar35 = (ulong)ppppppuStack_5d0 & 0xff00ffffffffffff;
        lVar17 = *(long *)(uVar35 - 8);
        lVar13 = lVar17 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
        if (lVar13 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar13,8);
        }
        *plVar10 = lVar17;
        func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
        *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
        ppppppuVar9 = (undefined8 ******)
                      ((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      pppppppuVar15[1] = ppppppuVar9;
      if (((ulong)pppppppuVar15[2] & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuVar15[2] & 0xff00ffffffffffff) - 8);
      }
      pppppppuVar15[2] = (undefined8 ******)0x0;
      ppppppuVar9 = ppppppuStack_5c8;
      if (((ulong)ppppppuStack_5c8 & 0x80000000000000) != 0) {
        uVar35 = (ulong)ppppppuStack_5c8 & 0xff00ffffffffffff;
        lVar17 = *(long *)(uVar35 - 8);
        lVar13 = lVar17 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
        if (lVar13 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar13,8);
        }
        *plVar10 = lVar17;
        func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
        *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
        ppppppuVar9 = (undefined8 ******)
                      ((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      pppppppuVar15[2] = ppppppuVar9;
    }
    puVar11 = (undefined8 *)CONCAT44(uStack_414,uStack_418);
    ppppppuStack_568 = uStack_5d8;
    ppppppuStack_560 = ppppppuStack_5d0;
    if (((ulong)ppppppuStack_5d0 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppppuStack_5d0 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar35 - 8);
      lVar13 = lVar17 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar10 = lVar17;
      func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
      *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
      ppppppuStack_560 =
           (undefined8 ******)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppppuStack_558 = (undefined8 ******)0x0;
    ppppppuVar9 = ppppppuStack_5c8;
    if (((ulong)ppppppuStack_5c8 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppppuStack_5c8 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar35 - 8);
      lVar13 = lVar17 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar10 = lVar17;
      func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
      *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
      ppppppuVar9 = (undefined8 ******)
                    ((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uVar35 = (ulong)ppppppuStack_3d0 & 0x80000000000000;
    uVar3 = (ushort)((ulong)ppppppuStack_3d0 >> 0x30);
    ppppppuStack_558 = ppppppuVar9;
    if (uVar35 == 0) {
      if (((ulong)ppppppuStack_3d0 & 0x7f000000000000) == 0) goto LAB_0ca26c3d;
      uVar20 = (ulong)(uVar3 & 0x7f);
LAB_0ca26beb:
      if ((((uVar20 != 4) || (*(int *)((ulong)ppppppuStack_3d0 & 0xff00ffffffffffff) != 0x61746562))
          || ((short)uStack_3d8 != 9999)) ||
         ((uStack_3d8._2_2_ != 9999 || (uStack_3d8._4_2_ != 9999)))) goto LAB_0ca26c3d;
LAB_0ca26e80:
      if (uVar35 == 0) {
        if (((ulong)ppppppuStack_3d0 & 0x7f000000000000) != 0) {
          uVar20 = (ulong)(uVar3 & 0x7f);
LAB_0ca26eb7:
          uVar36 = 3;
          if ((((uVar20 == 4) &&
               (piVar26 = (int *)((ulong)ppppppuStack_3d0 & 0xff00ffffffffffff),
               *piVar26 == 0x61746562)) && ((short)uStack_3d8 == 9999)) &&
             ((uStack_3d8._2_2_ == 9999 && (uStack_3d8._4_2_ == 9999)))) {
            ppppppuStack_568 = uStack_3d8;
            if (((ulong)ppppppuStack_560 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)ppppppuStack_560 & 0xff00ffffffffffff) - 8);
              piVar26 = (int *)((ulong)ppppppuStack_3d0 & 0xff00ffffffffffff);
              uVar35 = (ulong)ppppppuStack_3d0 & 0x80000000000000;
            }
            ppppppuStack_560 = (undefined8 ******)0x0;
            ppppppuVar9 = ppppppuStack_3d0;
            if (uVar35 != 0) {
              lVar17 = *(long *)(piVar26 + -2);
              lVar13 = lVar17 + 9;
              plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
              if (lVar13 != 0 && plVar10 == (long *)0x0) {
                func_0x0eec74c0(lVar13,8);
              }
              *plVar10 = lVar17;
              func_0x0eee2f00(plVar10 + 1,piVar26,lVar17);
              *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
              ppppppuVar9 = (undefined8 ******)
                            ((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
            }
            ppppppuStack_560 = ppppppuVar9;
            if (((ulong)ppppppuStack_558 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)ppppppuStack_558 & 0xff00ffffffffffff) - 8);
            }
            ppppppuStack_558 = (undefined8 ******)0x0;
            uVar36 = 3;
            ppppppuVar9 = ppppppuStack_3c8;
            if (((ulong)ppppppuStack_3c8 & 0x80000000000000) != 0) {
              uVar35 = (ulong)ppppppuStack_3c8 & 0xff00ffffffffffff;
              lVar17 = *(long *)(uVar35 - 8);
              lVar13 = lVar17 + 9;
              plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
              if (lVar13 != 0 && plVar10 == (long *)0x0) {
                func_0x0eec74c0(lVar13,8);
              }
LAB_0ca270c1:
              *plVar10 = lVar17;
              func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
              *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
              ppppppuVar9 = (undefined8 ******)
                            ((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
            }
          }
          goto LAB_0ca2710b;
        }
      }
      else {
        uVar20 = *(ulong *)(((ulong)ppppppuStack_3d0 & 0xff00ffffffffffff) - 8);
        if (uVar20 != 0) goto LAB_0ca26eb7;
      }
      uVar36 = 3;
    }
    else {
      uVar20 = *(ulong *)(((ulong)ppppppuStack_3d0 & 0xff00ffffffffffff) - 8);
      if (uVar20 != 0) goto LAB_0ca26beb;
LAB_0ca26c3d:
      if (((ulong)ppppppuStack_5d0 & 0x80000000000000) != 0) {
        uVar20 = *(ulong *)(((ulong)ppppppuStack_5d0 & 0xff00ffffffffffff) - 8);
        if (uVar20 != 0) goto LAB_0ca26c83;
        goto LAB_0ca26e80;
      }
      if (((ulong)ppppppuStack_5d0 & 0x7f000000000000) == 0) goto LAB_0ca26e80;
      uVar20 = (ulong)((ushort)((ulong)ppppppuStack_5d0 >> 0x30) & 0x7f);
LAB_0ca26c83:
      if (((uVar20 != 4) || (*(int *)((ulong)ppppppuStack_5d0 & 0xff00ffffffffffff) != 0x61746562))
         || (((short)uStack_5d8 != 9999 ||
             ((uStack_5d8._2_2_ != 9999 || (uStack_5d8._4_2_ != 9999)))))) goto LAB_0ca26e80;
      puVar4 = (undefined8 *)CONCAT44(uStack_40c,uStack_410);
      ppppppuStack_568 = (undefined8 ******)*puVar4;
      if (((ulong)ppppppuStack_560 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppppuStack_560 & 0xff00ffffffffffff) - 8);
      }
      ppppppuStack_560 = (undefined8 ******)0x0;
      ppppppuVar9 = (undefined8 ******)puVar4[1];
      if (((ulong)ppppppuVar9 & 0x80000000000000) != 0) {
        lVar17 = *(long *)(((ulong)ppppppuVar9 & 0xff00ffffffffffff) - 8);
        lVar13 = lVar17 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
        if (lVar13 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar13,8);
        }
        *plVar10 = lVar17;
        func_0x0eee2f00(plVar10 + 1,(ulong)ppppppuVar9 & 0xff00ffffffffffff,lVar17);
        *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
        ppppppuVar9 = (undefined8 ******)
                      ((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      ppppppuStack_560 = ppppppuVar9;
      if (((ulong)ppppppuStack_558 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppppuStack_558 & 0xff00ffffffffffff) - 8);
      }
      ppppppuStack_558 = (undefined8 ******)0x0;
      ppppppuVar9 = (undefined8 ******)puVar4[2];
      uVar36 = 1;
      if (((ulong)ppppppuVar9 & 0x80000000000000) != 0) {
        uVar35 = (ulong)ppppppuVar9 & 0xff00ffffffffffff;
        lVar17 = *(long *)(uVar35 - 8);
        lVar13 = lVar17 + 9;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
        if (lVar13 != 0 && plVar10 == (long *)0x0) {
          func_0x0eec74c0(lVar13,8);
        }
        goto LAB_0ca270c1;
      }
    }
LAB_0ca2710b:
    ppppppuStack_558 = ppppppuVar9;
    unaff_RBP = (undefined8 *******)&uStack_3d8;
    func_0x0d6b3300(auStack_538,unaff_RBP,&ppppppuStack_568,uVar36);
    pppppuVar12 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
    if (pppppuVar12 == (undefined8 *****)0x0) {
      func_0x0eec74c0(0x90,0);
    }
    ppppppuStack_590 = (undefined8 ******)uStack_510;
    ppppppuStack_598 = (undefined8 ******)puStack_518;
    uStack_5a8 = ppppppuStack_528;
    uStack_5b0 = (undefined8 ******)pppppuStack_530;
    pppppuStack_530 = (undefined8 *****)0x0;
    ppppppuStack_528 = (undefined8 ******)0x0;
    _auStack_5b8 = (undefined8 ******)auStack_538;
    ppppppuStack_5a0 = ppppppuStack_520;
    puStack_518 = (undefined8 *)0x0;
    uStack_510 = 0;
    ppppppuStack_588 = (undefined8 ******)CONCAT62(ppppppuStack_588._2_6_,uStack_508);
    func_0x0d6a8c00(pppppuVar12,unaff_RBP,auStack_5b8);
    if (((ulong)ppppppuStack_590 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_590 & 0xff00ffffffffffff) - 8);
    }
    ppppppuStack_590 = (undefined8 ******)0x0;
    if (((ulong)ppppppuStack_598 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_598 & 0xff00ffffffffffff) - 8);
    }
    ppppppuStack_598 = (undefined8 ******)0x0;
    if (((ulong)uStack_5a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_5a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_5a8 = (undefined8 ******)0x0;
    if (((ulong)uStack_5b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_5b0 & 0xff00ffffffffffff) - 8);
    }
    uStack_5b0 = (undefined8 ******)0x0;
    *pppppuVar12 = (undefined8 ****)&UNK_0f3ec288;
    if (ppppuStack_398 == (undefined8 ****)0x0) {
      pppppuVar12[0x10] = (undefined8 ****)0x0;
    }
    else if (ppppuStack_398 == &pppuStack_3b8) {
      pppppuVar12[0x10] = pppppuVar12 + 0xc;
      (*(code *)(*ppppuStack_398)[3])();
    }
    else {
      pppppuVar12[0x10] = ppppuStack_398;
      ppppuStack_398 = (undefined8 ****)0x0;
    }
    _auStack_5b8 = (undefined8 ******)pppppuVar12;
    if ((uStack_510 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_510 & 0xff00ffffffffffff) - 8);
    }
    uStack_510 = 0;
    if (((ulong)puStack_518 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_518 & 0xff00ffffffffffff) - 8);
    }
    puStack_518 = (undefined8 *)0x0;
    if (((ulong)ppppppuStack_528 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_528 & 0xff00ffffffffffff) - 8);
    }
    ppppppuStack_528 = (undefined8 ******)0x0;
    if (((ulong)pppppuStack_530 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppuStack_530 & 0xff00ffffffffffff) - 8);
    }
    if (((ulong)ppppppuStack_558 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_558 & 0xff00ffffffffffff) - 8);
    }
    ppppppuStack_558 = (undefined8 ******)0x0;
    if (((ulong)ppppppuStack_560 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_560 & 0xff00ffffffffffff) - 8);
    }
    ppppppuVar9 = (undefined8 ******)*puVar11;
    unaff_R12 = (undefined8 ******)puVar11[1];
    if (ppppppuVar9 != unaff_R12) {
      do {
        cVar6 = func_0x04fa7a10(*ppppppuVar9 + 4,pppppuVar12 + 7);
        if (cVar6 == '\0') break;
        ppppppuVar9 = ppppppuVar9 + 1;
      } while (ppppppuVar9 != unaff_R12);
    }
    func_0x0d6af860(puVar11,ppppppuVar9,auStack_5b8);
    pppppuVar12 = _auStack_5b8;
    _auStack_5b8 = (undefined8 ******)0x0;
    if (pppppuVar12 != (undefined8 *****)0x0) {
      (*(code *)(*pppppuVar12)[1])();
    }
    uStack_388 = 0;
    if (((ulong)ppppppuStack_5d0 & 0x80000000000000) == 0) {
      if (((ulong)ppppppuStack_5d0 & 0x7f000000000000) == 0) goto LAB_0ca27588;
      uVar35 = (ulong)((ushort)((ulong)ppppppuStack_5d0 >> 0x30) & 0x7f);
LAB_0ca27545:
      if (((uVar35 != 4) || (*(int *)((ulong)ppppppuStack_5d0 & 0xff00ffffffffffff) != 0x61746562))
         || (((short)uStack_5d8 != 9999 ||
             ((uStack_5d8._2_2_ != 9999 || (uStack_5d8._4_2_ != 9999)))))) goto LAB_0ca27588;
    }
    else {
      uVar35 = *(ulong *)(((ulong)ppppppuStack_5d0 & 0xff00ffffffffffff) - 8);
      if (uVar35 != 0) goto LAB_0ca27545;
LAB_0ca27588:
      uVar36 = CONCAT44(uStack_414,uStack_418);
      ppppppuVar9 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
      if (ppppppuVar9 == (undefined8 ******)0x0) {
        func_0x0eec74c0(0x70,0);
      }
      func_0x0d6b23d0(ppppppuVar9,unaff_RBP,&uStack_5d8);
      *ppppppuVar9 = (undefined8 *****)&UNK_0f3ec2c8;
      ppppppuVar9[8] = (undefined8 *****)&UNK_0f3ec308;
      ppppppuVar9[9] = (undefined8 *****)&UNK_0ca247c0;
      ppppppuVar9[0xc] = ppppppuVar9 + 8;
      _auStack_5b8 = ppppppuVar9;
      func_0x0d6afb30(uVar36,auStack_5b8);
      if (_auStack_5b8 != (undefined8 ******)0x0) {
        (*(code *)(*_auStack_5b8)[1])();
      }
    }
    puStack_1f8 = (undefined8 *)CONCAT44(uStack_414,uStack_418);
    ppuStack_1f0 = (undefined8 **)CONCAT44(uStack_40c,uStack_410);
    uStack_1e8 = (undefined8 *****)CONCAT44(uStack_404,uStack_408);
    uStack_1e0 = (undefined8 *****)CONCAT44(uStack_3fc,uStack_400);
    uStack_408 = 0;
    uStack_404 = 0;
    uStack_400 = 0;
    uStack_3fc = 0;
    ppppppuStack_1d8 = uStack_3f8;
    uStack_3f8 = (undefined8 ******)0x0;
    uStack_1d0 = CONCAT44(uStack_3ec,uStack_3f0);
    puStack_1c8 = puStack_3e8;
    pppppppuStack_1c0 = pppppppuStack_3e0;
    ppppppuStack_1b8 = uStack_5d8;
    ppppppuStack_1b0 = (undefined8 ******)0x0;
    ppppppuVar9 = ppppppuStack_5d0;
    if (((ulong)ppppppuStack_5d0 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppppuStack_5d0 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar35 - 8);
      lVar13 = lVar17 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar10 = lVar17;
      func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
      *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
      unaff_R12 = (undefined8 ******)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      ppppppuVar9 = unaff_R12;
    }
    appppppuStack_1a8[0] = (undefined8 ******)0x0;
    ppppppuVar18 = ppppppuStack_5c8;
    ppppppuStack_1b0 = ppppppuVar9;
    if (((ulong)ppppppuStack_5c8 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppppuStack_5c8 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar35 - 8);
      lVar13 = lVar17 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar10 = lVar17;
      func_0x0eee2f00(plVar10 + 1,uVar35,lVar17);
      *(undefined1 *)((long)plVar10 + lVar17 + 8) = 0;
      unaff_R12 = (undefined8 ******)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      ppppppuVar18 = unaff_R12;
    }
    uStack_178 = 0;
    uStack_168 = 1;
    uStack_166 = 0xfffc;
    uStack_164 = 1;
    ppppppuStack_598 = (undefined8 ******)0x0;
    appppppuStack_1a8[0] = ppppppuVar18;
    func_0x0ca53530(&puStack_1f8,auStack_5b8);
    if (ppppppuStack_598 == (undefined8 ******)auStack_5b8) {
      lVar13 = 0x20;
LAB_0ca27839:
      (**(code **)((long)*ppppppuStack_598 + lVar13))();
    }
    else {
      lVar13 = 0x28;
      if (ppppppuStack_598 != (undefined8 ******)0x0) goto LAB_0ca27839;
    }
    func_0x0ca533d0(&puStack_1f8);
    if (((ulong)ppppppuStack_5c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_5c8 & 0xff00ffffffffffff) - 8);
    }
    ppppppuStack_5c8 = (undefined8 ******)0x0;
    if (((ulong)ppppppuStack_5d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_5d0 & 0xff00ffffffffffff) - 8);
    }
    func_0x0ca53270(&uStack_418);
    if (((ulong)ppppppuStack_4d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_4d0 & 0xff00ffffffffffff) - 8);
    }
    ppppppuStack_4d0 = (undefined8 ******)0x0;
    if (((ulong)ppppppuStack_4d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_4d8 & 0xff00ffffffffffff) - 8);
    }
    plVar10 = plStack_358;
    ppppppuVar18 = (undefined8 ******)plStack_468;
    uStack_470 = 0;
    plStack_468 = (long *)0x0;
    if (ppppppuVar18 != (undefined8 ******)0x0) {
      LOCK();
      plVar1 = (long *)(ppppppuVar18 + 1);
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)((long)*ppppppuVar18 + 0x10))(ppppppuVar18);
        goto SUB_0412c2d0;
      }
    }
    uStack_460 = 0;
    uStack_360 = 0;
    plStack_358 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        ppppppuVar18 = (undefined8 ******)plVar10;
        goto SUB_0412c2d0;
      }
    }
    uStack_350 = 0;
    uStack_348 = uStack_498;
    uStack_340 = uStack_490;
    uStack_338 = uStack_488;
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    func_0x0d686f30(&puStack_1f8,&UNK_014a08a1,5,&ppppppuStack_220,&uStack_348);
    if ((uStack_348 & 1) != 0) {
      func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
    }
    _auStack_5b8 = (undefined8 ******)0x1000000000000;
    uStack_5b0 = (undefined8 ******)&UNK_01254d89;
    uStack_310 = 0;
    uStack_5a8 = (undefined8 ******)&UNK_01254d89;
    uStack_318 = 0;
    func_0x0ca5a180(&uStack_418,&uStack_2f8,&puStack_1f8,auStack_5b8,1);
    if (((ulong)uStack_5a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_5a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_5a8 = (undefined8 ******)0x0;
    if (((ulong)uStack_5b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_5b0 & 0xff00ffffffffffff) - 8);
    }
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_80 = 0xffffffff;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    cVar6 = func_0x0d5cf650(&uStack_418,0x11,&uStack_80);
    func_0x05f43a40(&uStack_80);
    if (cVar6 == '\0') {
      func_0x056b3490(1,3,0x11,&UNK_0129bca1);
    }
    if ((uStack_d0 & 1) == 0) {
      uStack_5a8 = ppppppuStack_c0;
      _auStack_5b8 = (undefined8 ******)CONCAT44(uStack_cc,uStack_d0);
      uStack_5b0 = (undefined8 ******)CONCAT44(uStack_c4,uStack_c8);
    }
    else {
      func_0x0412e5e0(auStack_5b8,ppppppuStack_c0,CONCAT44(uStack_c4,uStack_c8));
    }
    ppppuVar16 = ppppppuStack_570[0x13][1];
    while (cVar6 = func_0x0d62c2c0(ppppuVar16,auStack_5b8), cVar6 == '\0') {
      ppppuVar16 = ppppuVar16 + 0x22;
    }
    unaff_RBX = *(*ppppuVar16[0x1d])[1];
    if (DAT_0f5ea4a0 == '\0') goto LAB_0ca29a14;
  }
  else {
    func_0x04882e30();
LAB_0ca29a14:
    iVar7 = func_0x04108328(&DAT_0f5ea4a0);
    if (iVar7 != 0) {
      func_0x08b670e0(&DAT_0f5ea138);
      func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
  }
  func_0x0d5f7010(&ppppppuStack_568,unaff_RBX,&DAT_0f5ea138);
  if (((ulong)_auStack_5b8 & 1) != 0) {
    func_0x0412a280(uStack_5a8,(ulong)_auStack_5b8 & 0xfffffffffffffffe);
  }
  puVar11 = puStack_4f0;
  if (((ulong)ppppppuStack_568 & 1) == 0) {
    puStack_4f0[2] = ppppppuStack_558;
    *puStack_4f0 = ppppppuStack_568;
    puStack_4f0[1] = ppppppuStack_560;
  }
  else {
    func_0x0412e5e0(puStack_4f0,ppppppuStack_558,ppppppuStack_560);
  }
  *(uint *)((long)puVar11 + 0x21) = CONCAT13((undefined1)uStack_40c,uStack_410._1_3_);
  *(uint *)((long)puVar11 + 0x25) = CONCAT13((undefined1)uStack_408,uStack_40c._1_3_);
  *(uint *)((long)puVar11 + 0x29) = CONCAT13((undefined1)uStack_404,uStack_408._1_3_);
  *(uint *)((long)puVar11 + 0x2d) = CONCAT13((undefined1)uStack_400,uStack_404._1_3_);
  *(uint *)(puVar11 + 3) = uStack_418;
  *(undefined4 *)((long)puVar11 + 0x1c) = uStack_414;
  *(undefined4 *)(puVar11 + 4) = uStack_410;
  *(undefined4 *)((long)puVar11 + 0x24) = uStack_40c;
  if ((uStack_3f8._6_1_ != '\x01') || ((bStack_36c & 1) != 0)) {
    if ((*pbStack_4e8 & 1) != 0) {
      ppppppuStack_540 = *(undefined8 *******)(pbStack_4e8 + 0x10);
    }
    _auStack_5b8 = ppppppuStack_540;
    func_0x07026ef0(1,3,0x11,&UNK_011ae74f,auStack_5b8);
LAB_0ca294ef:
    if (((ulong)ppppppuStack_568 & 1) != 0) {
      func_0x0412a280(ppppppuStack_558,(ulong)ppppppuStack_568 & 0xfffffffffffffffe);
    }
    func_0x05d85c50(&pppuStack_3b8);
    if (ppppppuStack_3c8 != (undefined8 ******)0x0) {
      (*(code *)ppppppuStack_3c8)(&pppppppuStack_3e0);
    }
    if (((ulong)puStack_3e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_3e8 & 0xff00ffffffffffff) - 8);
    }
    puStack_3e8 = (undefined8 *)0x0;
    if ((uStack_3ec & 0x800000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT44(uStack_3ec,uStack_3f0) & 0xff00ffffffffffff) - 8);
    }
    func_0x05d85c50(auStack_140);
    if ((ulong)uStack_148 != 0xffffffff) {
      (**(code **)(&UNK_0f3eb988 + (ulong)uStack_148 * 8))(&uStack_418,appppppuStack_1a8);
    }
    uStack_148 = 0xffffffff;
    if (((ulong)pppppppuStack_1c0 & 1) != 0) {
      func_0x0412a280(ppppppuStack_1b0,(ulong)pppppppuStack_1c0 & 0xfffffffffffffffe);
    }
    if (((ulong)puStack_1c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_1c8 & 0xff00ffffffffffff) - 8);
    }
    puStack_1c8 = (undefined8 *)0x0;
    if ((uStack_1d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1d0 = 0;
    if (((ulong)uStack_1e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_1e0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1e0 = (undefined8 *****)0x0;
    if (((ulong)uStack_1e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_1e8 & 0xff00ffffffffffff) - 8);
    }
    lVar13 = lStack_208;
    lStack_208 = 0;
    if (lVar13 != 0) {
      func_0x0412a280(lVar13,1);
    }
    func_0x049091c0(&uStack_2f8);
joined_r0x0ca2975a:
    if ((uStack_d0 & 1) != 0) {
      func_0x0412a280(ppppppuStack_c0,CONCAT44(uStack_cc,uStack_d0) & 0xfffffffffffffffe);
    }
    if ((uStack_498 & 1) != 0) {
      func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
    }
    func_0x0eeb81b0(auStack_98);
    return;
  }
  pppppppuVar15 = pppppppuStack_3e0 + 1;
  pppppppuVar27 = pppppppuStack_3e0 + 2;
  pppppppuVar14 = pppppppuStack_3e0;
  if (cStack_3bc == '\x02') {
    pppppppuVar27 = &ppppppuStack_3d0;
    pppppppuVar15 = unaff_RBP;
    pppppppuVar14 = &pppppppuStack_3e0;
  }
  bVar38 = iStack_3c0 == 0x745803a0;
  pppppppuVar21 = (undefined8 *******)0x0;
  if (bVar38) {
    pppppppuVar21 = pppppppuVar14;
  }
  ppppppuStack_4b8 = *pppppppuVar21;
  pppppppuVar14 = (undefined8 *******)0x8;
  if (bVar38) {
    pppppppuVar14 = pppppppuVar15;
  }
  ppppppuStack_4b0 = *pppppppuVar14;
  pppppppuVar15 = (undefined8 *******)&DAT_00000010;
  if (bVar38) {
    pppppppuVar15 = pppppppuVar27;
  }
  ppppppuStack_4a8 = *pppppppuVar15;
  *pppppppuVar21 = (undefined8 ******)0x0;
  pppppppuVar21[1] = (undefined8 ******)0x0;
  pppppppuVar21[2] = (undefined8 ******)0x0;
  (*(code *)(*ppppppuStack_4f8)[0x189])(&uStack_308);
  func_0x0d6892a0(&ppppppuStack_4e0,&puStack_1f8);
  uStack_5d8 = (undefined8 ******)0x0;
  ppppppuStack_5d0 = (undefined8 ******)0x0;
  ppppppuStack_5c8 = (undefined8 ******)0x0;
  ppppppuVar9 = uStack_5d8;
  ppppppuVar18 = ppppppuStack_5c8;
  if ((long)ppppppuStack_4b0 - (long)ppppppuStack_4b8 == 0) {
LAB_0ca27f0d:
    ppppppuStack_5c8 = ppppppuVar18;
    uStack_5d8 = ppppppuVar9;
    ppppppuStack_e8 = ppppppuStack_4b0;
    if (ppppppuStack_4b8 != ppppppuStack_4b0) {
      uStack_47c = (uint)(byte)ppppuStack_4c0;
      ppppppuVar9 = ppppppuStack_4b8;
      do {
        ppppppuVar18 = (undefined8 ******)plStack_300;
        pppppuVar12 = *ppppppuVar9;
        pppppuVar37 = ppppppuVar9[1];
        unaff_R12 = (undefined8 ******)ppppppuVar9[2];
        *ppppppuVar9 = (undefined8 *****)0x0;
        ppppppuVar9[1] = (undefined8 *****)0x0;
        ppppppuVar9[2] = (undefined8 *****)0x0;
        uStack_430 = CONCAT44(uStack_430._4_4_,*(undefined4 *)(ppppppuVar9 + 3));
        if (plStack_300 != (long *)0x0) {
          LOCK();
          plStack_300[2] = plStack_300[2] + 1;
          UNLOCK();
        }
        pppppuStack_448 = pppppuVar12;
        pppppuStack_440 = pppppuVar37;
        ppppppuStack_438 = unaff_R12;
        ppppppuStack_e0 = ppppppuVar9;
        func_0x0ca1df60(auStack_5b8,&pppppuStack_448,uStack_308,plStack_300,uStack_47c);
        if (ppppppuVar18 != (undefined8 ******)0x0) goto SUB_0412c2d0;
        if (pppppuVar12 != (undefined8 *****)0x0) {
          pppppuVar33 = pppppuVar12;
          pppppuVar23 = pppppuVar12;
          if (pppppuVar12 != pppppuVar37) {
            do {
              pppppuStack_330 = pppppuVar23;
              ppppuVar16 = pppppuVar37[-3];
              if (ppppuVar16 != (undefined8 ****)0x0) {
                ppppuVar34 = pppppuVar37[-2];
                ppppuStack_4c8 = ppppuVar16;
                pppppuVar33 = pppppuVar37;
                if (ppppuVar16 != ppppuVar34) {
                  do {
                    pppppuStack_328 = pppppuVar33;
                    ppppppuVar9 = (undefined8 ******)ppppuVar34[-5];
                    ppppuStack_4c0 = ppppuVar34;
                    if (ppppppuVar9 != (undefined8 ******)0x0) {
                      ppppppuVar18 = (undefined8 ******)ppppuVar34[-4];
                      ppppppuVar32 = ppppppuVar9;
                      if (ppppppuVar9 != ppppppuVar18) {
                        do {
                          ppppppuStack_500 = ppppppuVar32;
                          ppppppuVar32 = ppppppuVar18 + -3;
                          pppppuVar12 = ppppppuVar18[-3];
                          if (pppppuVar12 != (undefined8 *****)0x0) {
                            pppppuVar33 = ppppppuVar18[-2];
                            pppppuVar37 = pppppuVar12;
                            ppppppuStack_570 = ppppppuVar32;
                            if (pppppuVar12 != pppppuVar33) {
                              do {
                                ppppppuStack_4f8 = ppppppuVar18;
                                func_0x04863610(pppppuVar33 + -2);
                                func_0x04863610(pppppuVar33 + -4);
                                if ((ulong)*(uint *)(pppppuVar33 + -6) != 0xffffffff) {
                                  (**(code **)(&UNK_0f3eb9b8 +
                                              (ulong)*(uint *)(pppppuVar33 + -6) * 8))
                                            (auStack_538,pppppuVar33 + -0x1d);
                                }
                                *(undefined4 *)(pppppuVar33 + -6) = 0xffffffff;
                                ppppuVar16 = pppppuVar33[-0x20];
                                if (ppppuVar16 != (undefined8 ****)0x0) {
                                  ppppuVar34 = pppppuVar33[-0x1f];
                                  ppppuVar28 = ppppuVar16;
                                  if (ppppuVar16 != pppppuVar33[-0x1f]) {
                                    do {
                                      ppppuVar28 = ppppuVar34 + -6;
                                      if ((ulong)*(uint *)(ppppuVar34 + -1) != 0xffffffff) {
                                        (**(code **)(&UNK_0f3eb940 +
                                                    (ulong)*(uint *)(ppppuVar34 + -1) * 8))
                                                  (auStack_538,ppppuVar28);
                                      }
                                      *(undefined4 *)(ppppuVar34 + -1) = 0xffffffff;
                                      ppppuVar34 = ppppuVar28;
                                    } while (ppppuVar28 != ppppuVar16);
                                    ppppuVar28 = pppppuVar33[-0x20];
                                  }
                                  pppppuVar33[-0x1f] = ppppuVar16;
                                  func_0x0412a280(ppppuVar28,
                                                  (long)pppppuVar33[-0x1e] - (long)ppppuVar28);
                                }
                                if (((ulong)pppppuVar33[-0x23] & 1) != 0) {
                                  func_0x0412a280(pppppuVar33[-0x21],
                                                  (ulong)pppppuVar33[-0x23] & 0xfffffffffffffffe);
                                }
                                pppppuVar33 = pppppuVar33 + -0x24;
                                ppppppuVar18 = ppppppuStack_4f8;
                              } while (pppppuVar12 != pppppuVar33);
                              pppppuVar37 = *ppppppuStack_570;
                            }
                            ppppppuVar18[-2] = pppppuVar12;
                            func_0x0412a280(pppppuVar37,(long)ppppppuVar18[-1] - (long)pppppuVar37);
                            ppppppuVar32 = ppppppuStack_570;
                            ppppppuVar9 = ppppppuStack_500;
                            ppppuVar34 = ppppuStack_4c0;
                          }
                          ppppppuVar18 = ppppppuVar32;
                          ppppppuVar32 = ppppppuStack_500;
                        } while (ppppppuVar9 != ppppppuVar18);
                        ppppppuVar32 = (undefined8 ******)ppppuVar34[-5];
                        pppppuVar12 = pppppuStack_330;
                        pppppuVar37 = pppppuStack_328;
                      }
                      ppppuVar34[-4] = ppppppuVar9;
                      func_0x0412a280(ppppppuVar32,(long)ppppuVar34[-3] - (long)ppppppuVar32);
                      ppppuVar16 = ppppuStack_4c8;
                    }
                    ppppuStack_320 = ppppuVar34 + -8;
                    ppppppuVar9 = (undefined8 ******)*ppppuStack_320;
                    if (ppppppuVar9 != (undefined8 ******)0x0) {
                      ppppppuVar32 = (undefined8 ******)ppppuVar34[-7];
                      ppppppuVar18 = ppppppuVar9;
                      if (ppppppuVar9 != ppppppuVar32) {
                        do {
                          ppppppuStack_500 = ppppppuVar18;
                          ppppppuVar18 = ppppppuVar32 + -3;
                          pppppuVar12 = ppppppuVar32[-3];
                          if (pppppuVar12 != (undefined8 *****)0x0) {
                            pppppuVar33 = ppppppuVar32[-2];
                            pppppuVar37 = pppppuVar12;
                            ppppppuStack_570 = ppppppuVar18;
                            if (pppppuVar12 != pppppuVar33) {
                              do {
                                ppppppuStack_4f8 = ppppppuVar32;
                                func_0x04863610(pppppuVar33 + -2);
                                func_0x04863610(pppppuVar33 + -4);
                                if ((ulong)*(uint *)(pppppuVar33 + -6) != 0xffffffff) {
                                  (**(code **)(&UNK_0f3eb9b8 +
                                              (ulong)*(uint *)(pppppuVar33 + -6) * 8))
                                            (auStack_538,pppppuVar33 + -0x1d);
                                }
                                *(undefined4 *)(pppppuVar33 + -6) = 0xffffffff;
                                ppppuVar16 = pppppuVar33[-0x20];
                                if (ppppuVar16 != (undefined8 ****)0x0) {
                                  ppppuVar34 = pppppuVar33[-0x1f];
                                  ppppuVar28 = ppppuVar16;
                                  if (ppppuVar16 != pppppuVar33[-0x1f]) {
                                    do {
                                      ppppuVar28 = ppppuVar34 + -6;
                                      if ((ulong)*(uint *)(ppppuVar34 + -1) != 0xffffffff) {
                                        (**(code **)(&UNK_0f3eb940 +
                                                    (ulong)*(uint *)(ppppuVar34 + -1) * 8))
                                                  (auStack_538,ppppuVar28);
                                      }
                                      *(undefined4 *)(ppppuVar34 + -1) = 0xffffffff;
                                      ppppuVar34 = ppppuVar28;
                                    } while (ppppuVar28 != ppppuVar16);
                                    ppppuVar28 = pppppuVar33[-0x20];
                                  }
                                  pppppuVar33[-0x1f] = ppppuVar16;
                                  func_0x0412a280(ppppuVar28,
                                                  (long)pppppuVar33[-0x1e] - (long)ppppuVar28);
                                }
                                if (((ulong)pppppuVar33[-0x23] & 1) != 0) {
                                  func_0x0412a280(pppppuVar33[-0x21],
                                                  (ulong)pppppuVar33[-0x23] & 0xfffffffffffffffe);
                                }
                                pppppuVar33 = pppppuVar33 + -0x24;
                                ppppppuVar32 = ppppppuStack_4f8;
                              } while (pppppuVar12 != pppppuVar33);
                              pppppuVar37 = *ppppppuStack_570;
                            }
                            ppppppuVar32[-2] = pppppuVar12;
                            func_0x0412a280(pppppuVar37,(long)ppppppuVar32[-1] - (long)pppppuVar37);
                            ppppppuVar18 = ppppppuStack_570;
                            ppppppuVar9 = ppppppuStack_500;
                          }
                          ppppppuVar32 = ppppppuVar18;
                          ppppppuVar18 = ppppppuStack_500;
                        } while (ppppppuVar9 != ppppppuVar32);
                        ppppppuVar18 = (undefined8 ******)*ppppuStack_320;
                        pppppuVar12 = pppppuStack_330;
                        pppppuVar37 = pppppuStack_328;
                      }
                      ppppuStack_4c0[-7] = ppppppuVar9;
                      func_0x0412a280(ppppppuVar18,(long)ppppuStack_4c0[-6] - (long)ppppppuVar18);
                      ppppuVar16 = ppppuStack_4c8;
                    }
                    ppppuVar34 = ppppuStack_320;
                    pppppuVar33 = pppppuStack_328;
                  } while (ppppuVar16 != ppppuStack_320);
                  ppppuVar16 = pppppuVar37[-3];
                }
                pppppuVar37[-2] = ppppuStack_4c8;
                func_0x0412a280(ppppuVar16,(long)pppppuVar37[-1] - (long)ppppuVar16);
              }
              pppppuVar37 = pppppuVar37 + -4;
              pppppuVar33 = pppppuStack_448;
              unaff_R12 = ppppppuStack_438;
              pppppuVar23 = pppppuStack_330;
            } while (pppppuVar12 != pppppuVar37);
          }
          unaff_R12 = (undefined8 ******)((long)unaff_R12 - (long)pppppuVar33);
          pppppuStack_440 = pppppuVar12;
          func_0x0412a280(pppppuVar33,unaff_R12);
        }
        cVar6 = cStack_580;
        ppppppuVar18 = uStack_5d8;
        if (cStack_580 == '\x01') {
          ppppppuStack_598 = ppppppuStack_4e0;
          if (((ulong)ppppppuStack_590 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_590 & 0xff00ffffffffffff) - 8);
          }
          ppppppuStack_590 = (undefined8 ******)0x0;
          ppppppuVar9 = ppppppuStack_4d8;
          if (((ulong)ppppppuStack_4d8 & 0x80000000000000) != 0) {
            uVar35 = (ulong)ppppppuStack_4d8 & 0xff00ffffffffffff;
            pppppuVar12 = *(undefined8 ******)(uVar35 - 8);
            lVar13 = (long)pppppuVar12 + 9;
            unaff_R12 = (undefined8 ******)
                        (**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
            if (lVar13 != 0 && unaff_R12 == (undefined8 ******)0x0) {
              func_0x0eec74c0(lVar13,8);
            }
            *unaff_R12 = pppppuVar12;
            func_0x0eee2f00(unaff_R12 + 1,uVar35,pppppuVar12);
            *(byte *)((long)unaff_R12 + (long)(pppppuVar12 + 1)) = 0;
            ppppppuVar9 = (undefined8 ******)
                          ((ulong)(unaff_R12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          ppppppuStack_590 = ppppppuVar9;
          if (((ulong)ppppppuStack_588 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_588 & 0xff00ffffffffffff) - 8);
          }
          ppppppuStack_588 = (undefined8 ******)0x0;
          ppppppuVar9 = ppppppuStack_4d0;
          if (((ulong)ppppppuStack_4d0 & 0x80000000000000) != 0) {
            uVar35 = (ulong)ppppppuStack_4d0 & 0xff00ffffffffffff;
            pppppuVar12 = *(undefined8 ******)(uVar35 - 8);
            lVar13 = (long)pppppuVar12 + 9;
            unaff_R12 = (undefined8 ******)
                        (**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
            if (lVar13 != 0 && unaff_R12 == (undefined8 ******)0x0) {
              func_0x0eec74c0(lVar13,8);
            }
            *unaff_R12 = pppppuVar12;
            func_0x0eee2f00(unaff_R12 + 1,uVar35,pppppuVar12);
            *(byte *)((long)unaff_R12 + (long)(pppppuVar12 + 1)) = 0;
            ppppppuVar9 = (undefined8 ******)
                          ((ulong)(unaff_R12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          ppppppuStack_588 = ppppppuVar9;
          if (cStack_580 == '\0') {
            func_0x048a88b0();
            goto LAB_0ca29a64;
          }
          if (ppppppuStack_5d0 < ppppppuStack_5c8) {
            *(undefined1 (*) [4])ppppppuStack_5d0 = auStack_5b8;
            ppppppuStack_5d0[1] = (undefined8 *****)0x0;
            ppppppuStack_5d0[2] = (undefined8 *****)0x0;
            ppppppuStack_5d0[3] = (undefined8 *****)0x0;
            *(undefined4 *)(ppppppuStack_5d0 + 1) = (undefined4)uStack_5b0;
            *(undefined4 *)((long)ppppppuStack_5d0 + 0xc) = uStack_5b0._4_4_;
            *(undefined4 *)(ppppppuStack_5d0 + 2) = (undefined4)uStack_5a8;
            *(undefined4 *)((long)ppppppuStack_5d0 + 0x14) = uStack_5a8._4_4_;
            ppppppuStack_5d0[3] = ppppppuStack_5a0;
            uStack_5b0 = (undefined8 ******)0x0;
            uStack_5a8 = (undefined8 ******)0x0;
            ppppppuStack_5a0 = (undefined8 ******)0x0;
            ppppppuStack_5d0[4] = ppppppuStack_598;
            ppppppuStack_5d0[5] = (undefined8 *****)0x0;
            ppppppuStack_5d0[5] = ppppppuStack_590;
            ppppppuStack_590 = (undefined8 ******)0x0;
            ppppppuStack_5d0[6] = (undefined8 *****)0x0;
            ppppppuStack_5d0[6] = ppppppuVar9;
            ppppppuStack_588 = (undefined8 ******)0x0;
            ppppppuVar18 = ppppppuStack_5d0 + 7;
            ppppppuVar9 = uStack_5d8;
            ppppppuVar32 = ppppppuStack_5c8;
          }
          else {
            lVar13 = (long)ppppppuStack_5d0 - (long)uStack_5d8;
            uVar35 = (lVar13 >> 3) * 0x6db6db6db6db6db7 + 1;
            if (0x492492492492492 < uVar35) goto LAB_0ca29a69;
            lVar17 = (long)ppppppuStack_5c8 - (long)uStack_5d8 >> 3;
            uVar20 = lVar17 * -0x2492492492492492;
            if (uVar35 < uVar20) {
              uVar35 = uVar20;
            }
            if (0x249249249249248 < (ulong)(lVar17 * 0x6db6db6db6db6db7)) {
              uVar35 = 0x492492492492492;
            }
            puStack_518 = &uStack_5d8;
            if (uVar35 == 0) {
              pppppuVar12 = (undefined8 *****)0x0;
            }
            else {
              if (0x492492492492492 < uVar35) goto LAB_0ca29a73;
              pppppuVar12 = (undefined8 *****)
                            (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 0x38);
              if (pppppuVar12 == (undefined8 *****)0x0) {
                func_0x0eec74c0(uVar35 * 0x38,0);
                pppppuVar12 = (undefined8 *****)0x0;
              }
            }
            pppppuStack_530 = (undefined8 *****)((long)pppppuVar12 + lVar13);
            ppppppuStack_520 = (undefined8 ******)(pppppuVar12 + uVar35 * 7);
            *(undefined1 (*) [4])((long)pppppuVar12 + lVar13) = auStack_5b8;
            puVar11 = (undefined8 *)((long)pppppuVar12 + lVar13 + 8);
            *puVar11 = uStack_5b0;
            puVar11[1] = uStack_5a8;
            *(undefined8 *******)((long)pppppuVar12 + lVar13 + 0x18) = ppppppuStack_5a0;
            uStack_5b0 = (undefined8 ******)0x0;
            uStack_5a8 = (undefined8 ******)0x0;
            ppppppuStack_5a0 = (undefined8 ******)0x0;
            *(undefined8 *******)((long)pppppuVar12 + lVar13 + 0x20) = ppppppuStack_598;
            *(undefined8 *)((long)pppppuVar12 + lVar13 + 0x28) = 0;
            *(undefined8 *******)((long)pppppuVar12 + lVar13 + 0x28) = ppppppuStack_590;
            ppppppuStack_590 = (undefined8 ******)0x0;
            *(undefined8 *)((long)pppppuVar12 + lVar13 + 0x30) = 0;
            *(undefined8 *******)((long)pppppuVar12 + lVar13 + 0x30) = ppppppuStack_588;
            ppppppuStack_588 = (undefined8 ******)0x0;
            ppppppuStack_528 = (undefined8 ******)((long)pppppuVar12 + lVar13 + 0x38);
            ppppppuVar9 = (undefined8 ******)
                          ((long)uStack_5d8 + ((long)pppppuStack_530 - (long)ppppppuStack_5d0));
            auStack_538 = (undefined1  [8])pppppuVar12;
            func_0x0ca35b40(uStack_5d8,ppppppuStack_5d0,ppppppuVar9);
            ppppppuVar18 = ppppppuStack_528;
            ppppppuVar19 = uStack_5d8;
            ppppppuStack_5d0 = ppppppuStack_528;
            ppppppuVar32 = ppppppuStack_520;
            if (uStack_5d8 != (undefined8 ******)0x0) {
              lVar13 = (long)ppppppuStack_5c8 - (long)uStack_5d8;
              uStack_5d8 = ppppppuVar9;
              ppppppuStack_5c8 = ppppppuStack_520;
              func_0x0412a280(ppppppuVar19,lVar13);
              ppppppuVar9 = uStack_5d8;
              ppppppuVar32 = ppppppuStack_5c8;
            }
          }
        }
        else {
          ppppppuVar9 = uStack_5d8;
          ppppppuVar32 = ppppppuStack_5c8;
          if (uStack_5d8 != ppppppuStack_5d0) {
            ppppppuVar19 = ppppppuStack_5d0 + -6;
            do {
              if (((ulong)ppppppuVar19[5] & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)ppppppuVar19[5] & 0xff00ffffffffffff) - 8);
              }
              ppppppuVar19[5] = (undefined8 *****)0x0;
              if (((ulong)ppppppuVar19[4] & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)ppppppuVar19[4] & 0xff00ffffffffffff) - 8);
              }
              ppppppuVar19[4] = (undefined8 *****)0x0;
              if (*ppppppuVar19 != (undefined8 *****)0x0) {
                func_0x09f96780(ppppppuVar19);
                func_0x0412a280(*ppppppuVar19,(long)ppppppuVar19[2] - (long)*ppppppuVar19);
              }
              ppppppuVar22 = ppppppuVar19 + -1;
              ppppppuVar19 = ppppppuVar19 + -7;
              ppppppuVar9 = uStack_5d8;
              ppppppuVar32 = ppppppuStack_5c8;
            } while (ppppppuVar22 != ppppppuVar18);
          }
        }
        ppppppuStack_5c8 = ppppppuVar32;
        uStack_5d8 = ppppppuVar9;
        ppppppuVar9 = ppppppuStack_e0;
        ppppppuStack_5d0 = ppppppuVar18;
        if (cStack_580 == '\x01') {
          if (((ulong)ppppppuStack_588 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_588 & 0xff00ffffffffffff) - 8);
          }
          ppppppuStack_588 = (undefined8 ******)0x0;
          if (((ulong)ppppppuStack_590 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_590 & 0xff00ffffffffffff) - 8);
          }
          ppppppuStack_590 = (undefined8 ******)0x0;
          if (uStack_5b0 != (undefined8 ******)0x0) {
            func_0x09f96780(&uStack_5b0);
            func_0x0412a280(uStack_5b0,(long)ppppppuStack_5a0 - (long)uStack_5b0);
          }
        }
      } while ((cVar6 != '\0') && (ppppppuVar9 = ppppppuVar9 + 4, ppppppuVar9 != ppppppuStack_e8));
    }
    pppppuVar12 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (pppppuVar12 == (undefined8 *****)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    _auStack_5b8 = uStack_5d8;
    uStack_5b0 = ppppppuStack_5d0;
    uStack_5a8 = ppppppuStack_5c8;
    uStack_5d8 = (undefined8 ******)0x0;
    ppppppuStack_5d0 = (undefined8 ******)0x0;
    ppppppuStack_5c8 = (undefined8 ******)0x0;
    bVar38 = (*pbStack_4e8 & 1) == 0;
    ppppppuVar9 = *(undefined8 *******)(pbStack_4e8 + 0x10);
    if (bVar38) {
      ppppppuVar9 = ppppppuStack_540;
    }
    ppppuVar16 = (undefined8 ****)(ulong)(*pbStack_4e8 >> 1);
    if (!bVar38) {
      ppppuVar16 = *(undefined8 *****)(pbStack_4e8 + 8);
    }
    if ((undefined8 ****)0xfffffffffffffff7 < ppppuVar16) goto LAB_0ca29a6e;
    if (ppppuVar16 < (undefined8 ****)0x17) {
      *(char *)pppppuVar12 = (char)ppppuVar16 * '\x02';
      ppppuVar34 = (undefined8 ****)((long)pppppuVar12 + 1);
      if (ppppuVar16 != (undefined8 ****)0x0) goto LAB_0ca28b73;
    }
    else {
      uVar35 = 0x1a;
      if (((ulong)ppppuVar16 | 7) != 0x17) {
        uVar35 = ((ulong)ppppuVar16 | 7) + 1;
      }
      ppppuVar34 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
      if (ppppuVar34 == (undefined8 ****)0x0) {
        func_0x0eec74c0(uVar35,0);
      }
      pppppuVar12[2] = ppppuVar34;
      *pppppuVar12 = (undefined8 ****)(uVar35 | 1);
      pppppuVar12[1] = ppppuVar16;
LAB_0ca28b73:
      func_0x0eee2ee0(ppppuVar34,ppppppuVar9,ppppuVar16);
    }
    ppppppuVar32 = ppppppuStack_550;
    ppppppuVar9 = uStack_5d8;
    *(char *)((long)ppppuVar34 + (long)ppppuVar16) = '\0';
    *(undefined1 (*) [4])(pppppuVar12 + 3) = auStack_5b8;
    *(undefined4 *)((long)pppppuVar12 + 0x1c) = uStack_5b4;
    *(undefined4 *)(pppppuVar12 + 4) = (undefined4)uStack_5b0;
    *(undefined4 *)((long)pppppuVar12 + 0x24) = uStack_5b0._4_4_;
    pppppuVar12[5] = uStack_5a8;
    pppppuStack_548 = pppppuVar12;
    if (uStack_5d8 != (undefined8 ******)0x0) {
      if (uStack_5d8 != ppppppuStack_5d0) {
        ppppppuVar18 = ppppppuStack_5d0 + -6;
        do {
          if (((ulong)ppppppuVar18[5] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuVar18[5] & 0xff00ffffffffffff) - 8);
          }
          ppppppuVar18[5] = (undefined8 *****)0x0;
          if (((ulong)ppppppuVar18[4] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuVar18[4] & 0xff00ffffffffffff) - 8);
          }
          ppppppuVar18[4] = (undefined8 *****)0x0;
          if (*ppppppuVar18 != (undefined8 *****)0x0) {
            func_0x09f96780(ppppppuVar18);
            func_0x0412a280(*ppppppuVar18,(long)ppppppuVar18[2] - (long)*ppppppuVar18);
          }
          ppppppuVar19 = ppppppuVar18 + -1;
          ppppppuVar18 = ppppppuVar18 + -7;
        } while (ppppppuVar19 != ppppppuVar9);
      }
      ppppppuStack_5d0 = ppppppuVar9;
      func_0x0412a280(uStack_5d8,(long)ppppppuStack_5c8 - (long)uStack_5d8);
    }
    if (((ulong)ppppppuStack_4d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_4d0 & 0xff00ffffffffffff) - 8);
    }
    pbVar5 = pbStack_4e8;
    ppppppuStack_4d0 = (undefined8 ******)0x0;
    if (((ulong)ppppppuStack_4d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_4d8 & 0xff00ffffffffffff) - 8);
    }
    ppppppuVar18 = (undefined8 ******)plStack_300;
    if (plStack_300 != (long *)0x0) goto SUB_0412c2d0;
    if (ppppppuStack_4b8 != (undefined8 ******)0x0) {
      func_0x0ca39670(&ppppppuStack_4b8);
      func_0x0412a280(ppppppuStack_4b8,(long)ppppppuStack_4a8 - (long)ppppppuStack_4b8);
    }
    if (pppppuStack_548[3] == pppppuStack_548[4]) {
LAB_0ca294e2:
      pppppuStack_548 = (undefined8 *****)0x0;
      func_0x09f96640(&pppppuStack_548);
      goto LAB_0ca294ef;
    }
    bVar38 = (*pbVar5 & 1) != 0;
    if (bVar38) {
      ppppppuStack_540 = *(undefined8 *******)(pbVar5 + 0x10);
    }
    pppppuVar12 = (undefined8 *****)(ulong)(*pbVar5 >> 1);
    if (bVar38) {
      pppppuVar12 = *(undefined8 ******)(pbVar5 + 8);
    }
    if ((undefined8 *****)0xfffffffffffffff7 < pppppuVar12) goto LAB_0ca29a78;
    if (pppppuVar12 < (undefined8 *****)0x17) {
      auStack_538[0] = (char)pppppuVar12 * '\x02';
      ppppppuVar9 = (undefined8 ******)(auStack_538 + 1);
      if (pppppuVar12 != (undefined8 *****)0x0) goto LAB_0ca28e36;
    }
    else {
      uVar35 = 0x1a;
      if (((ulong)pppppuVar12 | 7) != 0x17) {
        uVar35 = ((ulong)pppppuVar12 | 7) + 1;
      }
      ppppppuVar9 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
      if (ppppppuVar9 == (undefined8 ******)0x0) {
        func_0x0eec74c0(uVar35,0);
      }
      auStack_538 = (undefined1  [8])(uVar35 | 1);
      pppppuStack_530 = pppppuVar12;
      ppppppuStack_528 = ppppppuVar9;
LAB_0ca28e36:
      func_0x0eee2ee0(ppppppuVar9,ppppppuStack_540,pppppuVar12);
    }
    ppppppuStack_570 = (undefined8 ******)(auStack_538 + 1);
    *(byte *)((long)ppppppuVar9 + (long)pppppuVar12) = 0;
    pppppuVar12 = (undefined8 *****)((ulong)auStack_538 >> 1 & 0x7f);
    ppppppuVar9 = ppppppuStack_570;
    if (((ulong)auStack_538 & 1) != 0) {
      pppppuVar12 = pppppuStack_530;
      ppppppuVar9 = ppppppuStack_528;
    }
    ppppppuVar18 = (undefined8 ******)func_0x04883620(auStack_5b8,ppppppuVar9,pppppuVar12);
    ppppppuVar9 = (undefined8 ******)ppppppuVar32[1];
    if (ppppppuVar9 != (undefined8 ******)0x0) {
      uVar35 = (long)ppppppuVar9 - ((ulong)ppppppuVar9 >> 1 & 0x5555555555555555);
      uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333);
      uVar35 = ((uVar35 >> 4) + uVar35 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar35 >> 0x38 < 2) {
        unaff_R12 = (undefined8 ******)((ulong)((long)ppppppuVar9 - 1U) & (ulong)ppppppuVar18);
      }
      else {
        unaff_R12 = ppppppuVar18;
        if (ppppppuVar9 <= ppppppuVar18) {
          if (((ulong)ppppppuVar18 | (ulong)ppppppuVar9) >> 0x20 == 0) {
            unaff_R12 = (undefined8 ******)
                        (((ulong)ppppppuVar18 & 0xffffffff) % ((ulong)ppppppuVar9 & 0xffffffff));
          }
          else {
            unaff_R12 = (undefined8 ******)((ulong)ppppppuVar18 % (ulong)ppppppuVar9);
          }
        }
      }
      if (((*ppppppuVar32)[(long)unaff_R12] != (undefined8 ****)0x0) &&
         (ppppppuVar19 = (undefined8 ******)*(*ppppppuVar32)[(long)unaff_R12],
         ppppppuVar19 != (undefined8 ******)0x0)) {
        if (((ulong)auStack_538 & 1) == 0) {
          pppppuVar12 = (undefined8 *****)((ulong)auStack_538 >> 1 & 0x7f);
        }
        else {
          ppppppuStack_570 = ppppppuStack_528;
          pppppuVar12 = pppppuStack_530;
        }
        if ((byte)(uVar35 >> 0x38) < 2) {
          do {
            if ((undefined8 ******)ppppppuVar19[1] == ppppppuVar18) {
              bVar2 = *(byte *)(ppppppuVar19 + 2);
              if ((bVar2 & 1) == 0) {
                pppppuVar37 = (undefined8 *****)(ulong)(bVar2 >> 1);
              }
              else {
                pppppuVar37 = ppppppuVar19[3];
              }
              if (pppppuVar37 == pppppuVar12) {
                if ((bVar2 & 1) == 0) {
                  pppppuVar37 = (undefined8 *****)((long)ppppppuVar19 + 0x11);
                }
                else {
                  pppppuVar37 = ppppppuVar19[4];
                }
                iVar7 = func_0x0eee3000(pppppuVar37,ppppppuStack_570,pppppuVar12);
                if (iVar7 == 0) goto LAB_0ca29479;
              }
            }
            else {
              ppppppuVar32 = ppppppuStack_550;
              if ((undefined8 ******)((ulong)ppppppuVar19[1] & (ulong)((long)ppppppuVar9 - 1U)) !=
                  unaff_R12) break;
            }
            ppppppuVar19 = (undefined8 ******)*ppppppuVar19;
            ppppppuVar32 = ppppppuStack_550;
          } while (ppppppuVar19 != (undefined8 ******)0x0);
        }
        else {
          do {
            ppppppuVar22 = (undefined8 ******)ppppppuVar19[1];
            if (ppppppuVar22 == ppppppuVar18) {
              bVar2 = *(byte *)(ppppppuVar19 + 2);
              if ((bVar2 & 1) == 0) {
                pppppuVar37 = (undefined8 *****)(ulong)(bVar2 >> 1);
              }
              else {
                pppppuVar37 = ppppppuVar19[3];
              }
              if (pppppuVar37 == pppppuVar12) {
                if ((bVar2 & 1) == 0) {
                  pppppuVar37 = (undefined8 *****)((long)ppppppuVar19 + 0x11);
                }
                else {
                  pppppuVar37 = ppppppuVar19[4];
                }
                iVar7 = func_0x0eee3000(pppppuVar37,ppppppuStack_570,pppppuVar12);
                if (iVar7 == 0) goto LAB_0ca29479;
              }
            }
            else {
              if (ppppppuVar9 <= ppppppuVar22) {
                if (((ulong)ppppppuVar22 | (ulong)ppppppuVar9) >> 0x20 == 0) {
                  ppppppuVar22 = (undefined8 ******)
                                 (((ulong)ppppppuVar22 & 0xffffffff) %
                                 ((ulong)ppppppuVar9 & 0xffffffff));
                }
                else {
                  ppppppuVar22 = (undefined8 ******)((ulong)ppppppuVar22 % (ulong)ppppppuVar9);
                }
              }
              if (ppppppuVar22 != unaff_R12) break;
            }
            ppppppuVar19 = (undefined8 ******)*ppppppuVar19;
          } while (ppppppuVar19 != (undefined8 ******)0x0);
        }
      }
    }
    ppppppuVar19 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (ppppppuVar19 == (undefined8 ******)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uStack_5a8 = (undefined8 ******)0x1;
    *ppppppuVar19 = (undefined8 *****)0x0;
    ppppppuVar19[1] = ppppppuVar18;
    ppppppuVar19[4] = ppppppuStack_528;
    ppppppuVar19[2] = (undefined8 *****)auStack_538;
    ppppppuVar19[3] = pppppuStack_530;
    auStack_538 = (undefined1  [8])0x0;
    pppppuStack_530 = (undefined8 *****)0x0;
    ppppppuStack_528 = (undefined8 ******)0x0;
    ppppppuVar19[5] = (undefined8 *****)0x0;
    uStack_5b0 = ppppppuVar32;
    _auStack_5b8 = ppppppuVar19;
    if ((ppppppuVar9 != (undefined8 ******)0x0) &&
       ((float)((long)ppppppuVar32[3] + 1) <= (float)ppppppuVar9 * *(float *)(ppppppuVar32 + 4))) {
LAB_0ca2945b:
      pppppuVar12 = *ppppppuVar32;
      ppppuVar16 = pppppuVar12[(long)unaff_R12];
      if (ppppuVar16 == (undefined8 ****)0x0) {
        *ppppppuVar19 = ppppppuVar32[2];
        ppppppuVar32[2] = ppppppuVar19;
        pppppuVar12[(long)unaff_R12] = ppppppuVar32 + 2;
        if (*ppppppuVar19 != (undefined8 *****)0x0) {
          ppppppuVar18 = (undefined8 ******)(*ppppppuVar19)[1];
          if (((ulong)ppppppuVar9 & (long)ppppppuVar9 - 1U) == 0) {
            pppppuVar12[(ulong)ppppppuVar18 & (ulong)((long)ppppppuVar9 - 1U)] = ppppppuVar19;
          }
          else {
            if (ppppppuVar9 <= ppppppuVar18) {
              if (((ulong)ppppppuVar18 | (ulong)ppppppuVar9) >> 0x20 == 0) {
                pppppuVar12[((ulong)ppppppuVar18 & 0xffffffff) % ((ulong)ppppppuVar9 & 0xffffffff)]
                     = ppppppuVar19;
                goto LAB_0ca29475;
              }
              ppppppuVar18 = (undefined8 ******)((ulong)ppppppuVar18 % (ulong)ppppppuVar9);
            }
            pppppuVar12[(long)ppppppuVar18] = ppppppuVar19;
          }
        }
      }
      else {
        *ppppppuVar19 = (undefined8 *****)*ppppuVar16;
        *ppppuVar16 = ppppppuVar19;
      }
LAB_0ca29475:
      ppppppuVar32[3] = (undefined8 *****)((long)ppppppuVar32[3] + 1);
LAB_0ca29479:
      pppppuVar37 = pppppuStack_548;
      pppppuStack_548 = (undefined8 *****)0x0;
      pppppuVar12 = ppppppuVar19[5];
      ppppppuVar19[5] = pppppuVar37;
      if (pppppuVar12 != (undefined8 *****)0x0) {
        func_0x09f96640(ppppppuVar19 + 5);
      }
      if (((ulong)auStack_538 & 1) != 0) {
        func_0x0412a280(ppppppuStack_528,(ulong)auStack_538 & 0xfffffffffffffffe);
      }
      pppppuVar12 = pppppuStack_548;
      pppppuStack_548 = (undefined8 *****)0x0;
      if (pppppuVar12 == (undefined8 *****)0x0) goto LAB_0ca294ef;
      goto LAB_0ca294e2;
    }
    uVar35 = 1;
    if ((undefined8 ******)0x2 < ppppppuVar9) {
      uVar35 = (ulong)(((ulong)ppppppuVar9 & (ulong)((long)ppppppuVar9 - 1U)) != 0);
    }
    pppppuVar37 = (undefined8 *****)(uVar35 | (long)ppppppuVar9 * 2);
    fVar39 = (float)func_0x0eee3ab0((float)((long)ppppppuVar32[3] + 1) /
                                    *(float *)(ppppppuVar32 + 4));
    pppppuVar12 = (undefined8 *****)
                  ((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
    if (pppppuVar12 < pppppuVar37) {
      pppppuVar12 = pppppuVar37;
    }
    pppppuVar37 = (undefined8 *****)0x2;
    if ((pppppuVar12 != (undefined8 *****)0x1) &&
       (pppppuVar37 = pppppuVar12, ((ulong)pppppuVar12 & (long)pppppuVar12 - 1U) != 0)) {
      pppppuVar37 = (undefined8 *****)func_0x0412c3f0();
      ppppppuVar32 = ppppppuStack_550;
    }
    pppppuVar12 = ppppppuVar32[1];
    if (pppppuVar37 <= pppppuVar12) {
      if (pppppuVar37 < pppppuVar12) {
        fVar39 = (float)func_0x0eee3ab0((float)ppppppuStack_550[3] /
                                        *(float *)(ppppppuStack_550 + 4));
        pppppuVar33 = (undefined8 *****)
                      ((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
        if ((pppppuVar12 < (undefined8 *****)0x3) ||
           (uVar35 = (long)pppppuVar12 - ((ulong)pppppuVar12 >> 1 & 0x5555555555555555),
           uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333),
           1 < (byte)(((uVar35 >> 4) + uVar35 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          pppppuVar33 = (undefined8 *****)func_0x0412c3f0(pppppuVar33);
        }
        else if ((undefined8 *****)0x1 < pppppuVar33) {
          lVar13 = 0x3f;
          if ((long)pppppuVar33 - 1U != 0) {
            for (; (long)pppppuVar33 - 1U >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          pppppuVar33 = (undefined8 *****)(1L << (-((byte)lVar13 ^ 0x3f) & 0x3f));
        }
        ppppppuVar9 = ppppppuStack_550;
        if (pppppuVar33 < pppppuVar37) {
          pppppuVar33 = pppppuVar37;
        }
        if (pppppuVar33 < pppppuVar12) {
          pppppuVar37 = pppppuVar33;
          if (pppppuVar33 != (undefined8 *****)0x0) goto LAB_0ca291d0;
          pppppuVar12 = *ppppppuStack_550;
          *ppppppuStack_550 = (undefined8 *****)0x0;
          if (pppppuVar12 != (undefined8 *****)0x0) {
            func_0x0412a280(pppppuVar12,(long)ppppppuStack_550[1] << 3);
          }
          ppppppuVar9[1] = (undefined8 *****)0x0;
        }
      }
LAB_0ca2941b:
      ppppppuVar9 = (undefined8 ******)ppppppuStack_550[1];
      ppppppuVar32 = ppppppuStack_550;
      if (((ulong)ppppppuVar9 & (long)ppppppuVar9 - 1U) == 0) {
        unaff_R12 = (undefined8 ******)((ulong)ppppppuVar18 & (ulong)((long)ppppppuVar9 - 1U));
      }
      else {
        unaff_R12 = ppppppuVar18;
        if (ppppppuVar9 <= ppppppuVar18) {
          if (((ulong)ppppppuVar18 | (ulong)ppppppuVar9) >> 0x20 == 0) {
            unaff_R12 = (undefined8 ******)
                        (((ulong)ppppppuVar18 & 0xffffffff) % ((ulong)ppppppuVar9 & 0xffffffff));
          }
          else {
            unaff_R12 = (undefined8 ******)((ulong)ppppppuVar18 % (ulong)ppppppuVar9);
          }
        }
      }
      goto LAB_0ca2945b;
    }
LAB_0ca291d0:
    if ((ulong)pppppuVar37 >> 0x3d == 0) {
      lVar13 = (long)pppppuVar37 * 8;
      pppppuVar12 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
      if (pppppuVar12 == (undefined8 *****)0x0) {
        func_0x0eec74c0(lVar13,0);
      }
      ppppppuVar9 = ppppppuStack_550;
      pppppuVar33 = *ppppppuStack_550;
      *ppppppuStack_550 = pppppuVar12;
      if (pppppuVar33 != (undefined8 *****)0x0) {
        func_0x0412a280(pppppuVar33,(long)ppppppuStack_550[1] << 3);
        pppppuVar12 = *ppppppuVar9;
      }
      ppppppuVar9[1] = pppppuVar37;
      func_0x0eee2dd0(pppppuVar12,0,lVar13);
      pppppuVar33 = ppppppuVar9[2];
      if (pppppuVar33 != (undefined8 *****)0x0) {
        pppppuVar23 = (undefined8 *****)pppppuVar33[1];
        uVar35 = (long)pppppuVar37 - 1;
        if (((ulong)pppppuVar37 & uVar35) == 0) {
          pppppuVar12[(ulong)pppppuVar23 & uVar35] = ppppppuStack_550 + 2;
          uVar20 = (ulong)pppppuVar23 & uVar35;
          while (pppppuVar37 = pppppuVar33, pppppuVar33 = (undefined8 *****)*pppppuVar37,
                pppppuVar33 != (undefined8 *****)0x0) {
            uVar29 = (ulong)pppppuVar33[1] & uVar35;
            if (uVar29 != uVar20) {
              if (pppppuVar12[uVar29] == (undefined8 ****)0x0) {
                pppppuVar12[uVar29] = pppppuVar37;
                uVar20 = uVar29;
              }
              else {
                *pppppuVar37 = *pppppuVar33;
                *pppppuVar33 = (undefined8 ****)*pppppuVar12[uVar29];
                *pppppuVar12[uVar29] = pppppuVar33;
                pppppuVar33 = pppppuVar37;
              }
            }
          }
        }
        else {
          if (pppppuVar37 <= pppppuVar23) {
            if (((ulong)pppppuVar23 | (ulong)pppppuVar37) >> 0x20 == 0) {
              pppppuVar23 = (undefined8 *****)
                            (((ulong)pppppuVar23 & 0xffffffff) % ((ulong)pppppuVar37 & 0xffffffff));
            }
            else {
              pppppuVar23 = (undefined8 *****)((ulong)pppppuVar23 % (ulong)pppppuVar37);
            }
          }
          pppppuVar12[(long)pppppuVar23] = ppppppuStack_550 + 2;
          pppppuVar30 = (undefined8 *****)*pppppuVar33;
          while (pppppuVar30 != (undefined8 *****)0x0) {
            pppppuVar24 = (undefined8 *****)pppppuVar30[1];
            if (pppppuVar37 <= pppppuVar24) {
              if (((ulong)pppppuVar24 | (ulong)pppppuVar37) >> 0x20 == 0) {
                pppppuVar24 = (undefined8 *****)
                              (((ulong)pppppuVar24 & 0xffffffff) % ((ulong)pppppuVar37 & 0xffffffff)
                              );
              }
              else {
                pppppuVar24 = (undefined8 *****)((ulong)pppppuVar24 % (ulong)pppppuVar37);
              }
            }
            if (pppppuVar24 != pppppuVar23) {
              if (pppppuVar12[(long)pppppuVar24] == (undefined8 ****)0x0) {
                pppppuVar12[(long)pppppuVar24] = pppppuVar33;
                pppppuVar23 = pppppuVar24;
              }
              else {
                *pppppuVar33 = *pppppuVar30;
                *pppppuVar30 = (undefined8 ****)*pppppuVar12[(long)pppppuVar24];
                *pppppuVar12[(long)pppppuVar24] = pppppuVar30;
                pppppuVar30 = pppppuVar33;
              }
            }
            pppppuVar33 = pppppuVar30;
            pppppuVar30 = (undefined8 *****)*pppppuVar33;
          }
        }
      }
      goto LAB_0ca2941b;
    }
  }
  else {
    uVar35 = (long)ppppppuStack_4b0 - (long)ppppppuStack_4b8 >> 5;
    if (uVar35 < 0x492492492492493) {
      ppppppuVar9 = (undefined8 ******)
                    (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 0x38);
      if (ppppppuVar9 == (undefined8 ******)0x0) {
        func_0x0eec74c0(uVar35 * 0x38,0);
      }
      ppppppuVar32 = uStack_5d8;
      ppppppuStack_5d0 = ppppppuVar9;
      ppppppuVar18 = ppppppuVar9 + uVar35 * 7;
      if (uStack_5d8 != (undefined8 ******)0x0) {
        lVar13 = (long)ppppppuStack_5c8 - (long)uStack_5d8;
        uStack_5d8 = ppppppuVar9;
        ppppppuStack_5c8 = ppppppuVar9 + uVar35 * 7;
        func_0x0412a280(ppppppuVar32,lVar13);
        ppppppuVar9 = uStack_5d8;
        ppppppuVar18 = ppppppuStack_5c8;
      }
      goto LAB_0ca27f0d;
    }
LAB_0ca29a64:
    func_0x0ca35a30();
LAB_0ca29a69:
    func_0x0ca35a30();
LAB_0ca29a6e:
    func_0x04882e30();
LAB_0ca29a73:
    FUN_04882eb0();
LAB_0ca29a78:
    func_0x04882e30();
  }
  uVar36 = FUN_04882eb0();
  func_0x041084d6(&DAT_0f5ea4a0);
  if (((ulong)_auStack_5b8 & 1) != 0) {
    func_0x0412a280(uStack_5a8,(ulong)_auStack_5b8 & 0xfffffffffffffffe);
  }
  func_0x05ebba90(&uStack_418);
  func_0x05d59d60(&puStack_1f8);
  func_0x0ca2a380(&uStack_2f8);
  if ((uStack_d0 & 1) != 0) {
    func_0x0412a280(ppppppuStack_c0,CONCAT44(uStack_cc,uStack_d0) & 0xfffffffffffffffe);
  }
  if ((uStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  func_0x0eeb81b0(auStack_98);
  uVar36 = func_0x0eee2d70(uVar36);
  uVar36 = func_0x04882e20(uVar36);
  uVar36 = func_0x04882e20(uVar36);
  ppppppuVar18 = (undefined8 ******)func_0x04882e20(uVar36);
  func_0x04882e20();
  if (ppppppuVar18 != (undefined8 ******)0x0) {
    LOCK();
    plVar10 = (long *)(ppppppuVar18 + 1);
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)((long)*ppppppuVar18 + 0x10))();
SUB_0412c2d0:
      if (ppppppuVar18[2] != (undefined8 *****)0x0) {
        LOCK();
        plVar10 = (long *)(ppppppuVar18 + 2);
        lVar13 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar13 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((long)*ppppppuVar18 + 0x20))();
      return;
    }
  }
  return;
}


