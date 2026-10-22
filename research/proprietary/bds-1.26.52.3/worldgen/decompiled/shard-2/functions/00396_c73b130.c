/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc83b130 (ELF vaddr 0xc73b130)
 * Label: caller-of-seed
 * Body:  [[0c6ca820, 0c6ca913] [0c83b130, 0c83b67f] [0cc41df0, 0cc41e9f]]
 * Ghidra: FUN_0c83b130
 */


/* WARNING: Possible PIC construction at 0x0cc41e81: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c83b655: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cc41e86) */
/* WARNING: Removing unreachable block (ram,0x0c83b65a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c83b130(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 unaff_RBX;
  undefined8 *puVar13;
  ulong uVar14;
  long *unaff_R12;
  long *unaff_R13;
  undefined8 *unaff_R14;
  undefined *puVar15;
  long *unaff_R15;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  char cStack_ce;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uStack_110 = 0xc83b159;
  plVar8 = (long *)func_0x0412c300(param_2[0x39]);
  plVar10 = (long *)param_2[0x38];
  LOCK();
  plVar9 = plVar8 + 1;
  lVar7 = *plVar9;
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (lVar7 == 0) {
    uStack_110 = 0xc83b17e;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uStack_110 = 0xc83b186;
    func_0x0412c2d0(plVar8);
  }
  uStack_110 = 0xc83b190;
  plVar9 = (long *)(**(code **)(*plVar10 + 0x68))(plVar10);
  uStack_110 = 0xc83b19f;
  plVar8 = (long *)(**(code **)(*plVar9 + 0x150))(plVar9);
  uStack_110 = 0xc83b1ab;
  cVar2 = (**(code **)(*plVar8 + 0x9f0))(plVar8);
  if (cVar2 == '\0') {
    uStack_110 = 0xc83b1df;
    uStack_f8 = param_1;
    iVar4 = func_0x0bbfe2d0(param_2 + 1);
    if (iVar4 == -1) {
LAB_0c83b297:
      uStack_110 = 0xc83b2a3;
      lVar7 = (**(code **)(*param_2 + 0x270))(param_2);
      if ((*(undefined8 **)(lVar7 + 8) == (undefined8 *)0x0) ||
         (plVar10 = (long *)**(undefined8 **)(lVar7 + 8), plVar10 == (long *)0x0)) {
LAB_0c83b5a2:
        uStack_110 = 0xc83b5ae;
        uVar6 = (**(code **)(*param_2 + 0x270))(param_2);
        uStack_110 = 0xc83b5bb;
        cVar2 = func_0x0c020060(0x10,uVar6);
        uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
        uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
        if (cVar2 != '\0') goto LAB_0c83b647;
      }
      else {
        if (plVar10[0x1d] != _DAT_0f6e4be8) {
LAB_0c83b596:
          plVar10[0x21] = 0;
          goto LAB_0c83b5a2;
        }
        if (((undefined *)plVar10[0x21] != &DAT_0f6e4be8) || (_DAT_0f6e4c08 != plVar10 + 0x1d)) {
          bVar3 = *(byte *)(plVar10 + 0x1e);
          if ((bVar3 & 1) == 0) {
            uVar12 = (ulong)(bVar3 >> 1);
          }
          else {
            uVar12 = plVar10[0x1f];
          }
          uVar14 = _DAT_0f6e4bf8;
          if ((DAT_0f6e4bf0 & 1) == 0) {
            uVar14 = (ulong)(DAT_0f6e4bf0 >> 1);
          }
          if (uVar12 == uVar14) {
            if ((bVar3 & 1) == 0) {
              lVar7 = (long)plVar10 + 0xf1;
            }
            else {
              lVar7 = plVar10[0x20];
            }
            uVar6 = _DAT_0f6e4c00;
            if ((DAT_0f6e4bf0 & 1) == 0) {
              uVar6 = 0xf6e4bf1;
            }
            uStack_110 = 0xc83b587;
            iVar4 = func_0x0eee3000(lVar7,uVar6);
            if (iVar4 == 0) {
              plVar10[0x21] = (long)&DAT_0f6e4be8;
              _DAT_0f6e4c08 = plVar10 + 0x1d;
              goto LAB_0c83b5c3;
            }
          }
          goto LAB_0c83b596;
        }
      }
LAB_0c83b5c3:
      uStack_110 = 0xc83b5d3;
      lVar7 = (**(code **)(*plVar9 + 0x138))(plVar9,param_3);
      uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
      uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
      if (lVar7 != 0) {
        uStack_f0 = (undefined *)
                    (CONCAT71(uStack_f0._1_7_,*(undefined1 *)param_3) & 0xffffffffffffff0f);
        uStack_f0 = (undefined *)
                    (CONCAT62(uStack_f0._2_6_,
                              CONCAT11(*(undefined1 *)(param_3 + 1),(undefined1)uStack_f0)) &
                    0xffffffffffff0fff);
        uStack_f0._0_4_ =
             CONCAT22(*(short *)((long)param_3 + 4) - *(short *)((long)plVar9 + 0x42),
                      (undefined2)uStack_f0);
        uStack_110 = 0xc83b613;
        lVar7 = func_0x0cb18130(lVar7 + 0x13d0,&uStack_f0);
        uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58);
        uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
        if ((lVar7 != 0) &&
           (plVar10 = *(long **)(lVar7 + 0x18),
           uStack_58 = CONCAT44(uStack_58._4_4_,(float)uStack_58),
           uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48), plVar10 != (long *)0x0)) {
          uStack_110 = 0xc83b633;
          cVar2 = (**(code **)(*plVar10 + 0x88))(plVar10,0x2b);
          if (cVar2 != '\0') {
            uStack_110 = 0xc83b647;
            func_0x0cf72ef0(plVar10,plVar9,1);
          }
        }
      }
    }
    else {
      uStack_110 = 0xc83b1fa;
      iVar5 = (**(code **)(*(long *)param_2[0x3a] + 0x468))();
      if ((iVar4 != 1) && ((iVar4 != 5 || (iVar5 != 1)))) goto LAB_0c83b297;
      uStack_110 = 0xc83b221;
      lVar7 = (**(code **)(*plVar9 + 0x138))(plVar9,param_3);
      if (lVar7 == 0) {
LAB_0c83b315:
        plVar8 = (long *)0x0;
      }
      else {
        uStack_108 = CONCAT71(uStack_108._1_7_,*(undefined1 *)param_3) & 0xffffffffffffff0f;
        uStack_108 = CONCAT62(uStack_108._2_6_,
                              CONCAT11(*(undefined1 *)(param_3 + 1),(undefined1)uStack_108)) &
                     0xffffffffffff0fff;
        uStack_108._0_4_ =
             CONCAT22(*(short *)((long)param_3 + 4) - *(short *)((long)plVar9 + 0x42),
                      (undefined2)uStack_108);
        uStack_110 = 0xc83b262;
        lVar7 = func_0x0cb18130(lVar7 + 0x13d0,&uStack_108);
        if ((lVar7 == 0) || (plVar10 = *(long **)(lVar7 + 0x18), plVar10 == (long *)0x0))
        goto LAB_0c83b315;
        uStack_110 = 0xc83b28a;
        cVar2 = (**(code **)(*plVar10 + 0x88))(plVar10,0x2b);
        plVar8 = (long *)0x0;
        if (cVar2 != '\0') {
          plVar8 = plVar10;
        }
      }
      uStack_110 = 0xc83b324;
      func_0x0c83b850(&uStack_f0,param_4,plVar8);
      if (plStack_e0 != (long *)0x0) {
        uStack_110 = 0xc83b33f;
        bVar3 = (**(code **)(*plVar9 + 0x1d0))(plVar9,0);
        if ((bVar3 & cStack_ce != '\0') == 1) {
          uStack_110 = 0xc83b35e;
          plVar8 = (long *)(**(code **)(*plVar9 + 0x150))(plVar9);
          uStack_110 = 0xc83b36d;
          plVar10 = (long *)(**(code **)(*plVar8 + 0xa78))(plVar8);
          uStack_110 = 0xc83b379;
          uStack_48 = (**(code **)(*plVar10 + 0x30))(plVar10);
          uStack_110 = 0xc83b38b;
          uStack_58 = (**(code **)(*plVar10 + 0x30))(plVar10);
          uStack_110 = 0xc83b39d;
          fStack_fc = (float)(**(code **)(*plVar10 + 0x30))(plVar10);
          uStack_110 = 0xc83b3b0;
          plVar8 = (long *)(**(code **)(*plVar8 + 0xb0))(plVar8);
          fStack_100 = (float)*(int *)(param_3 + 1) + fStack_fc * _DAT_01198c10 + _DAT_01198788;
          uStack_108 = CONCAT44((float)(int)((ulong)*param_3 >> 0x20) +
                                (float)uStack_58 * _DAT_01198c10 + _DAT_01198788,
                                (float)(int)*param_3 +
                                (float)uStack_48 * _DAT_01198c10 + _DAT_01198788);
          uStack_110 = 0xc83b438;
          (**(code **)(*plVar8 + 0x50))(plVar8,plVar9,&uStack_f0,0,&uStack_108,10);
        }
      }
      uStack_f0 = &UNK_0f371da8;
      if ((ulong)uStack_60 != 0xffffffff) {
        uStack_110 = 0xc83b46a;
        (**(code **)(&UNK_0f3db678 + (ulong)uStack_60 * 8))(&uStack_108,auStack_70);
      }
      plVar8 = plStack_78;
      uStack_60 = 0xffffffff;
      uStack_f0 = &UNK_0f36e918;
      plStack_78 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        uStack_110 = 0xc83b4a0;
        (**(code **)(*plVar8 + 8))();
      }
      if (lStack_a0 != 0) {
        lStack_98 = lStack_a0;
        uStack_110 = 0xc83b4bc;
        func_0x0412a280(lStack_a0,lStack_90 - lStack_a0);
      }
      if (lStack_c0 != 0) {
        lStack_b8 = lStack_c0;
        uStack_110 = 0xc83b4d8;
        func_0x0412a280(lStack_c0,lStack_b0 - lStack_c0);
      }
      plVar8 = plStack_e0;
      plStack_e0 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        uStack_110 = 0xc83b4f1;
        (**(code **)(*plVar8 + 8))();
      }
      if (plStack_e8 != (long *)0x0) {
        LOCK();
        *(int *)((long)plStack_e8 + 0xc) = *(int *)((long)plStack_e8 + 0xc) + -1;
        UNLOCK();
        if (((*(int *)((long)plStack_e8 + 0xc) < 1) && (*plStack_e8 == 0)) &&
           (plStack_e8 != (long *)0x0)) {
          uStack_110 = 0xc83b530;
          func_0x0412a280(plStack_e8,0x10);
        }
      }
    }
LAB_0c83b647:
    register0x00000020 = (BADSPACEBASE *)&uStack_110;
    uStack_110 = 0xc83b65a;
    unaff_RBX = param_4;
    unaff_R12 = plVar10;
    unaff_R13 = plVar9;
    unaff_R14 = param_3;
    unaff_R15 = param_2;
  }
  *(long **)((long)register0x00000020 + -8) = unaff_R15;
  *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x18) = unaff_R13;
  *(long **)((long)register0x00000020 + -0x20) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_RBX;
  lVar7 = param_2[0x39];
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca842;
  plVar8 = (long *)func_0x0412c300(lVar7);
  plVar10 = (long *)param_2[0x38];
  LOCK();
  plVar9 = plVar8 + 1;
  lVar7 = *plVar9;
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (lVar7 == 0) {
    pcVar1 = *(code **)(*plVar8 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca867;
    (*pcVar1)(plVar8);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca86f;
    func_0x0412c2d0(plVar8);
  }
  pcVar1 = *(code **)(*plVar10 + 0x68);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca879;
  plVar9 = (long *)(*pcVar1)(plVar10);
  pcVar1 = *(code **)(*plVar9 + 0x1f8);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca896;
  (*pcVar1)(plVar9,param_2,0xf6e9de0,param_3,param_4);
  pcVar1 = *(code **)(*(long *)param_2[0x3a] + 0x628);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca8a6;
  uVar6 = (*pcVar1)();
  *(undefined **)((long)register0x00000020 + -0x58) = &UNK_0f39b2c0;
  *(long **)((long)register0x00000020 + -0x50) = param_2;
  *(undefined8 **)((long)register0x00000020 + -0x48) = param_3;
  *(undefined1 **)((long)register0x00000020 + -0x38) =
       (undefined1 *)((long)register0x00000020 + -0x58);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca8ce;
  func_0x0c618c50(uVar6,(undefined1 *)((long)register0x00000020 + -0x58));
  plVar9 = *(long **)((long)register0x00000020 + -0x38);
  if (plVar9 == (long *)((long)register0x00000020 + -0x58)) {
    lVar7 = 0x20;
  }
  else {
    lVar7 = 0x28;
    if (plVar9 == (long *)0x0) goto LAB_0c6ca8ef;
  }
  pcVar1 = *(code **)(*plVar9 + lVar7);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca8ef;
  (*pcVar1)();
LAB_0c6ca8ef:
  uVar11 = 1;
  puVar15 = *(undefined **)((long)register0x00000020 + -0x10);
  plVar9 = *(long **)((long)register0x00000020 + -8);
  uVar6 = *(undefined8 *)((long)register0x00000020 + -0x28);
  while( true ) {
    *(long **)((long)register0x00000020 + -8) = plVar9;
    *(undefined **)((long)register0x00000020 + -0x10) = puVar15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar6;
    puVar15 = &DAT_0f6eaec0;
    *(undefined4 *)((long)register0x00000020 + -0x38) = uRam000000000f6ffb28;
    *(undefined4 *)((long)register0x00000020 + -0x34) = uRam000000000f6ffb2c;
    *(undefined4 *)((long)register0x00000020 + -0x30) = uRam000000000f6ffb30;
    *(undefined4 *)((long)register0x00000020 + -0x2c) = uRam000000000f6ffb34;
    if (CONCAT44(uRam000000000f6ffb34,uRam000000000f6ffb30) != 0) {
      LOCK();
      plVar9 = (long *)(CONCAT44(uRam000000000f6ffb34,uRam000000000f6ffb30) + 8);
      *plVar9 = *plVar9 + 1;
      UNLOCK();
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e28;
    func_0x0cc46520((undefined1 *)((long)register0x00000020 + -0x28),
                    (undefined1 *)((long)register0x00000020 + -0x38),uVar11);
    plVar9 = *(long **)((long)register0x00000020 + -0x30);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar7 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        pcVar1 = *(code **)(*plVar9 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e4d;
        (*pcVar1)(plVar9);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e55;
        func_0x0412c2d0(plVar9);
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e67;
    lVar7 = func_0x0cc422f0(0xf6ff9e0,&DAT_0f6eaec0,0,0,0);
    if (lVar7 != 0) break;
    uVar11 = 0;
    puVar13 = (undefined8 *)((long)register0x00000020 + -0x40);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x40);
    *puVar13 = 0xcc41e86;
    uVar6 = 0xf6ff9e0;
  }
  uVar6 = *(undefined8 *)(lVar7 + 0x200);
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e93;
  func_0x0cc465d0((undefined1 *)((long)register0x00000020 + -0x28));
  return uVar6;
}



/* ---- referenced strings ----
 * 0x1198c10  333?
 */
