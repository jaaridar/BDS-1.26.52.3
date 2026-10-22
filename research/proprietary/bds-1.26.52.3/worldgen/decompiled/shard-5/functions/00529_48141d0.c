/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49141d0 (ELF vaddr 0x48141d0)
 * Label: caller-of-callee
 * Body:  [[049141d0, 04914287] [04914290, 04914311] [04914320, 049146a6] [049146b0, 0491489c] [049148a0, 04914a0a] [04914a99, 04914ab9]]
 * Ghidra: FUN_049141d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_049141d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  undefined7 *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  byte bStack_460;
  undefined7 uStack_45f;
  undefined *puStack_458;
  undefined7 *puStack_450;
  long lStack_448;
  ulong uStack_440;
  ulong *puStack_438;
  ulong *puStack_430;
  ulong *puStack_428;
  ulong *puStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  byte bStack_3f8;
  
  if (*(char *)(param_1 + 0x28) != '\x01') {
    plVar7 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x558))();
    (**(code **)(**(long **)(param_1 + 8) + 0x8b0))(&puStack_488);
    (**(code **)(*plVar7 + 0xb8))(&puStack_438,plVar7,&puStack_488,0);
    puVar12 = _DAT_0f551100;
    puVar3 = _DAT_0f551108;
    if (_DAT_0f551100 != (ulong *)0x0) {
      for (; puVar12 != puVar3; puVar3 = puVar3 + -4) {
        if ((puVar3[-4] & 1) != 0) {
          func_0x0412a280(puVar3[-2],puVar3[-4] & 0xfffffffffffffffe);
        }
      }
      _DAT_0f551108 = puVar12;
      func_0x0412a280(_DAT_0f551100,(long)_DAT_0f551110 - (long)_DAT_0f551100);
    }
    _DAT_0f551100 = puStack_438;
    _DAT_0f551108 = puStack_430;
    _DAT_0f551110 = puStack_428;
    puStack_438 = (ulong *)0x0;
    puStack_430 = (ulong *)0x0;
    puStack_428 = (ulong *)0x0;
    if (((ulong)puStack_488 & 1) != 0) {
      func_0x0412a280(puStack_478,(ulong)puStack_488 & 0xfffffffffffffffe);
    }
    **(undefined1 **)(param_1 + 0x18) = 1;
    uVar8 = (ulong)DAT_0f778530;
    uVar10 = _DAT_0f778538;
    goto LAB_0491488b;
  }
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  lStack_4b8 = 0;
  plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  puVar3 = _DAT_0f551108;
  uVar10 = _DAT_0f778538;
  if ((plVar7 != (long *)0x0) &&
     (cVar5 = (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined8 *)(param_1 + 8),&uStack_4c8),
     puVar3 = _DAT_0f551108, uVar10 = _DAT_0f778538, cVar5 != '\0')) {
    plVar7 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x558))();
    (**(code **)(**(long **)(param_1 + 8) + 0x8b0))(&puStack_488);
    (**(code **)(*plVar7 + 0xb8))(&puStack_438,plVar7,&puStack_488,0);
    puVar12 = _DAT_0f551100;
    puVar3 = _DAT_0f551108;
    if (_DAT_0f551100 != (ulong *)0x0) {
      for (; puVar12 != puVar3; puVar3 = puVar3 + -4) {
        if ((puVar3[-4] & 1) != 0) {
          func_0x0412a280(puVar3[-2],puVar3[-4] & 0xfffffffffffffffe);
        }
      }
      _DAT_0f551108 = puVar12;
      func_0x0412a280(_DAT_0f551100,(long)_DAT_0f551110 - (long)_DAT_0f551100);
    }
    _DAT_0f551100 = puStack_438;
    _DAT_0f551108 = puStack_430;
    _DAT_0f551110 = puStack_428;
    puStack_438 = (ulong *)0x0;
    puStack_430 = (ulong *)0x0;
    puStack_428 = (ulong *)0x0;
    if (((ulong)puStack_488 & 1) != 0) {
      func_0x0412a280(puStack_478,(ulong)puStack_488 & 0xfffffffffffffffe);
    }
    if ((uStack_4c8 & 1) == 0) {
      plVar7 = *(long **)(param_1 + 8);
      if ((byte)uStack_4c8 >> 1 != 0) goto LAB_04914489;
    }
    else {
      plVar7 = *(long **)(param_1 + 8);
      if (uStack_4c0 != 0) {
LAB_04914489:
        uStack_468 = 0;
        if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        uStack_440 = uStack_4c8 >> 1 & 0x7f;
        lStack_448 = (long)&uStack_4c8 + 1;
        if ((uStack_4c8 & 1) != 0) {
          uStack_440 = uStack_4c0;
          lStack_448 = lStack_4b8;
        }
        (**(code **)(_DAT_0f7b8f98 + 0x100))(&puStack_438,&DAT_0f7b8f98,&lStack_448,&uStack_468);
        puStack_488 = (undefined7 *)0xd83aee8a61c96799;
        puStack_480 = &UNK_0140f690;
        puStack_478 = (undefined *)0x1;
        uStack_470 = CONCAT44(uStack_470._4_4_,0x2e);
        if (bStack_3f8 == 0) {
          uStack_4a8 = 0;
          uStack_4a0 = 0;
          uStack_498 = 0;
          func_0x0eedeb80(2,0x2d,&puStack_438,&uStack_4a8,&puStack_488);
          if ((uStack_4a8 & 1) != 0) {
            func_0x0412a280(uStack_498,uStack_4a8 & 0xfffffffffffffffe);
          }
        }
        lVar2 = lStack_410;
        if ((bStack_3f8 & 1) != 0) {
          (**(code **)(*plVar7 + 0x8b0))(&bStack_460,plVar7);
          puStack_488 = &uStack_45f;
          puStack_480 = (undefined *)(ulong)(bStack_460 >> 1);
          if ((bStack_460 & 1) != 0) {
            puStack_480 = puStack_458;
            puStack_488 = puStack_450;
          }
          puStack_478 = &UNK_013c4a7c;
          uStack_470 = 0x11;
          func_0x049151c0(&puStack_438,&puStack_488,2,0x2f);
          uVar8 = func_0x0eee2e90(&puStack_438);
          if (0xfffffffffffffff7 < uVar8) {
            uVar10 = func_0x04882e30();
            func_0x041084d6(&DAT_0f7b8fb8);
            if ((uStack_4c8 & 1) != 0) {
              func_0x0412a280(lStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
            }
            func_0x0eee2d70(uVar10);
            pcVar1 = (code *)swi(3);
            auVar13 = (*pcVar1)();
            return auVar13;
          }
          if (uVar8 < 0x17) {
            uStack_4a8 = CONCAT71(uStack_4a8._1_7_,(char)uVar8 * '\x02');
            uVar9 = (long)&uStack_4a8 + 1;
            if (uVar8 != 0) goto LAB_0491472a;
          }
          else {
            uVar11 = 0x1a;
            if ((uVar8 | 7) != 0x17) {
              uVar11 = (uVar8 | 7) + 1;
            }
            uVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
            if (uVar9 == 0) {
              func_0x0eec74c0(uVar11,0);
            }
            uStack_4a8 = uVar11 | 1;
            uStack_4a0 = uVar8;
            uStack_498 = uVar9;
LAB_0491472a:
            func_0x0eee2f00(uVar9,&puStack_438,uVar8);
          }
          uVar11 = uStack_4a8;
          puVar3 = _DAT_0f551108;
          *(undefined1 *)(uVar9 + uVar8) = 0;
          uVar4 = uStack_468;
          uVar9 = uStack_498;
          uVar8 = uStack_4a0;
          if (_DAT_0f551108 < _DAT_0f551110) {
            uStack_4a8 = 0;
            uStack_4a0 = 0;
            uStack_498 = 0;
            if ((uVar11 & 1) == 0) {
              *_DAT_0f551108 = uVar11;
              _DAT_0f551108[1] = uVar8;
              _DAT_0f551108[2] = uVar9;
              _DAT_0f551108[3] = uStack_468;
            }
            else {
              func_0x0412e5e0(_DAT_0f551108,uVar9);
              puVar3[3] = uVar4;
              func_0x0412a280(uVar9,uVar11 & 0xfffffffffffffffe);
            }
            _DAT_0f551108 = puVar3 + 4;
joined_r0x04914929:
            if ((bStack_460 & 1) != 0) goto LAB_0491492f;
LAB_049147c8:
            if ((_DAT_0f551120 & 1) != 0) goto LAB_04914953;
LAB_049147d9:
            if (((byte)uStack_4c8 & 1) == 0) {
              _DAT_0f551130 = lStack_4b8;
              _DAT_0f551120 = (uint)uStack_4c8;
              uRam000000000f551124 = uStack_4c8._4_4_;
              uRam000000000f551128 = (undefined4)uStack_4c0;
              uRam000000000f55112c = uStack_4c0._4_4_;
            }
            else {
              func_0x04885070(&DAT_0f551120,lStack_4b8,uStack_4c0);
            }
          }
          else {
            _DAT_0f551108 = (ulong *)func_0x04914ed0(&DAT_0f551100,&uStack_4a8,&uStack_468);
            if ((uStack_4a8 & 1) != 0) {
              func_0x0412a280(uStack_498,uStack_4a8 & 0xfffffffffffffffe);
              goto joined_r0x04914929;
            }
            if ((bStack_460 & 1) == 0) goto LAB_049147c8;
LAB_0491492f:
            func_0x0412a280(puStack_450,CONCAT71(uStack_45f,bStack_460) & 0xfffffffffffffffe);
            if ((_DAT_0f551120 & 1) == 0) goto LAB_049147d9;
LAB_04914953:
            uVar8 = (ulong)((byte)uStack_4c8 >> 1);
            lVar2 = (long)&uStack_4c8 + 1;
            if (((byte)uStack_4c8 & 1) != 0) {
              uVar8 = uStack_4c0;
              lVar2 = lStack_4b8;
            }
            func_0x04885120(&DAT_0f551120,lVar2,uVar8);
          }
          **(undefined1 **)(param_1 + 0x18) = 1;
          puVar3 = _DAT_0f551108;
          uVar10 = _DAT_0f778538;
          goto joined_r0x0491486d;
        }
        if (lStack_410 != 0) {
          while (lVar2 != lStack_408) {
            func_0x048b3e80(lStack_408 + -0x40);
            lStack_408 = lStack_408 + -0x40;
          }
          lStack_408 = lVar2;
          func_0x0412a280(lStack_410,lStack_400 - lStack_410);
        }
        puVar12 = puStack_428;
        puVar3 = puStack_420;
        if (puStack_428 != (ulong *)0x0) {
          for (; puVar12 != puVar3; puVar3 = puVar3 + -10) {
            if (((char)puVar3[-1] == '\x01') && ((puVar3[-6] & 1) != 0)) {
              func_0x0412a280(puVar3[-4],puVar3[-6] & 0xfffffffffffffffe);
            }
          }
          puStack_420 = puVar12;
          func_0x0412a280(puStack_428,lStack_418 - (long)puStack_428);
        }
        plVar7 = *(long **)(param_1 + 8);
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x558))(plVar7);
    (**(code **)(*plVar7 + 0xc0))(plVar7);
    func_0x04914ac0(&uStack_4c8);
    puVar3 = _DAT_0f551100;
    for (puVar12 = _DAT_0f551108; uVar10 = _DAT_0f778538, puVar3 != puVar12; puVar12 = puVar12 + -4)
    {
      if ((puVar12[-4] & 1) != 0) {
        func_0x0412a280(puVar12[-2],puVar12[-4] & 0xfffffffffffffffe);
      }
    }
  }
joined_r0x0491486d:
  _DAT_0f551108 = puVar3;
  uVar8 = (ulong)(uint)DAT_0f778530;
  _DAT_0f778538 = uVar10;
  if ((uStack_4c8 & 1) != 0) {
    uVar8 = (ulong)(uint)DAT_0f778530;
    func_0x0412a280(lStack_4b8,uStack_4c8 & 0xfffffffffffffffe,uVar10);
  }
LAB_0491488b:
  auVar13._8_8_ = uVar10;
  auVar13._0_8_ = uVar8;
  return auVar13;
}


