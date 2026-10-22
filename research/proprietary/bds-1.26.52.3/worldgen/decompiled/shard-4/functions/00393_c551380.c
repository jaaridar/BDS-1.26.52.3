/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc651380 (ELF vaddr 0xc551380)
 * Label: caller-of-seed
 * Body:  [[0c651380, 0c651639] [0c6ca820, 0c6ca913] [0cc41df0, 0cc41e9f]]
 * Ghidra: FUN_0c651380
 */


/* WARNING: Possible PIC construction at 0x0c65158e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cc41e81: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cc41e86) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c651380(long param_1,long *param_2,undefined4 *param_3,undefined8 param_4)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 *unaff_RBX;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long unaff_R12;
  long *unaff_R13;
  long *unaff_R14;
  undefined *puVar16;
  undefined8 unaff_R15;
  undefined8 uStack_70;
  undefined *puStack_68;
  long *plStack_60;
  undefined4 *puStack_58;
  long *plStack_48;
  
  uStack_70 = 0xc6513a3;
  iVar5 = func_0x0bbfe2d0(param_2 + 1);
  if (iVar5 == -1) {
LAB_0c6513d1:
    uStack_70 = 0xc6513dd;
    lVar7 = (**(code **)(*param_2 + 0x270))(param_2);
    uStack_70 = 0xc6513ed;
    cVar4 = func_0x0c020060(0x10,lVar7);
    if (cVar4 == '\0') goto LAB_0c651446;
    if ((*(long **)(lVar7 + 8) != (long *)0x0) && (lVar7 = **(long **)(lVar7 + 8), lVar7 != 0)) {
      if (*(long *)(lVar7 + 0xe8) == _DAT_0f6e4be8) {
        if ((*(undefined **)(lVar7 + 0x108) == &DAT_0f6e4be8) && (_DAT_0f6e4c08 == lVar7 + 0xe8)) {
LAB_0c651446:
          uStack_70 = 0xc651452;
          plVar8 = (long *)FUN_0412c300(param_2[0x39]);
          plVar2 = (long *)param_2[0x38];
          LOCK();
          plVar9 = plVar8 + 1;
          lVar7 = *plVar9;
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            uStack_70 = 0xc651477;
            (**(code **)(*plVar8 + 0x10))(plVar8);
            uStack_70 = 0xc65147f;
            func_0x0412c2d0(plVar8);
          }
          uStack_70 = 0xc651489;
          plVar9 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2);
          if ((*(byte *)(param_1 + 0x134) & 2) == 0) {
            uStack_70 = 0xc6514a7;
            lVar7 = (**(code **)(*plVar9 + 0x128))(plVar9);
            if (*(char *)(lVar7 + 0x176) != '\x01') {
              puStack_68 = (undefined *)CONCAT44(param_3[1] + -1,*param_3);
              plStack_60 = (long *)CONCAT44(plStack_60._4_4_,param_3[2]);
              uStack_70 = 0xc6514dd;
              lVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,&puStack_68);
              if ((*(char *)(lVar7 + 3) != '\0') || (*(char *)(lVar7 + 2) != '\0')) {
                uStack_70 = 0xc65150a;
                (**(code **)(*plVar9 + 0x1f8))(plVar9,param_2,0xf6e9de0,param_3,param_4);
                uStack_70 = 0xc65151a;
                uVar10 = (**(code **)(*(long *)param_2[0x3a] + 0x628))();
                puStack_68 = &UNK_0f39b2c0;
                uStack_70 = 0xc65153f;
                plStack_60 = param_2;
                puStack_58 = param_3;
                plStack_48 = (long *)&puStack_68;
                func_0x0c618c50(uVar10,&puStack_68);
                if ((undefined **)plStack_48 == &puStack_68) {
                  lVar7 = 0x20;
                }
                else {
                  lVar7 = 0x28;
                  if (plStack_48 == (long *)0x0) goto LAB_0c651575;
                }
                uStack_70 = 0xc651575;
                (**(code **)(*plStack_48 + lVar7))();
LAB_0c651575:
                uStack_70 = 0xc651580;
                uVar10 = func_0x0c651670(plVar9,param_3);
                return uVar10;
              }
              register0x00000020 = (BADSPACEBASE *)&uStack_70;
              uStack_70 = 0xc651593;
              unaff_RBX = param_3;
              unaff_R12 = param_1;
              unaff_R13 = plVar9;
              unaff_R14 = param_2;
              unaff_R15 = param_4;
            }
          }
          goto SUB_0c6ca820;
        }
        bVar1 = *(byte *)(lVar7 + 0xf0);
        if ((bVar1 & 1) == 0) {
          uVar11 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar11 = *(ulong *)(lVar7 + 0xf8);
        }
        uVar14 = _DAT_0f6e4bf8;
        if ((DAT_0f6e4bf0 & 1) == 0) {
          uVar14 = (ulong)(DAT_0f6e4bf0 >> 1);
        }
        if (uVar11 == uVar14) {
          if ((bVar1 & 1) == 0) {
            lVar15 = lVar7 + 0xf1;
          }
          else {
            lVar15 = *(long *)(lVar7 + 0x100);
          }
          uVar10 = _DAT_0f6e4c00;
          if ((DAT_0f6e4bf0 & 1) == 0) {
            uVar10 = 0xf6e4bf1;
          }
          uStack_70 = 0xc6515f2;
          iVar5 = bcmp(lVar15,uVar10);
          if (iVar5 == 0) {
            *(undefined **)(lVar7 + 0x108) = &DAT_0f6e4be8;
            _DAT_0f6e4c08 = lVar7 + 0xe8;
            goto LAB_0c651446;
          }
        }
      }
      *(undefined8 *)(lVar7 + 0x108) = 0;
    }
  }
  else {
    uStack_70 = 0xc6513ba;
    iVar6 = (**(code **)(*(long *)param_2[0x3a] + 0x468))();
    if ((iVar5 != 1) && ((iVar5 != 5 || (iVar6 != 1)))) goto LAB_0c6513d1;
  }
SUB_0c6ca820:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(long **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x18) = unaff_R13;
  *(long *)((long)register0x00000020 + -0x20) = unaff_R12;
  *(undefined4 **)((long)register0x00000020 + -0x28) = unaff_RBX;
  lVar7 = param_2[0x39];
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca842;
  plVar8 = (long *)FUN_0412c300(lVar7);
  plVar2 = (long *)param_2[0x38];
  LOCK();
  plVar9 = plVar8 + 1;
  lVar7 = *plVar9;
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (lVar7 == 0) {
    pcVar3 = *(code **)(*plVar8 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca867;
    (*pcVar3)(plVar8);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca86f;
    func_0x0412c2d0(plVar8);
  }
  pcVar3 = *(code **)(*plVar2 + 0x68);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca879;
  plVar9 = (long *)(*pcVar3)(plVar2);
  pcVar3 = *(code **)(*plVar9 + 0x1f8);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca896;
  (*pcVar3)(plVar9,param_2,0xf6e9de0,param_3,param_4);
  pcVar3 = *(code **)(*(long *)param_2[0x3a] + 0x628);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca8a6;
  uVar10 = (*pcVar3)();
  *(undefined **)((long)register0x00000020 + -0x58) = &UNK_0f39b2c0;
  *(long **)((long)register0x00000020 + -0x50) = param_2;
  *(undefined4 **)((long)register0x00000020 + -0x48) = param_3;
  *(undefined1 **)((long)register0x00000020 + -0x38) =
       (undefined1 *)((long)register0x00000020 + -0x58);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca8ce;
  func_0x0c618c50(uVar10,(undefined1 *)((long)register0x00000020 + -0x58));
  plVar9 = *(long **)((long)register0x00000020 + -0x38);
  if (plVar9 == (long *)((long)register0x00000020 + -0x58)) {
    lVar7 = 0x20;
  }
  else {
    lVar7 = 0x28;
    if (plVar9 == (long *)0x0) goto LAB_0c6ca8ef;
  }
  pcVar3 = *(code **)(*plVar9 + lVar7);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0xc6ca8ef;
  (*pcVar3)();
LAB_0c6ca8ef:
  uVar12 = 1;
  puVar16 = *(undefined **)((long)register0x00000020 + -0x10);
  plVar9 = *(long **)((long)register0x00000020 + -8);
  uVar10 = *(undefined8 *)((long)register0x00000020 + -0x28);
  while( true ) {
    *(long **)((long)register0x00000020 + -8) = plVar9;
    *(undefined **)((long)register0x00000020 + -0x10) = puVar16;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar10;
    puVar16 = &DAT_0f6eaec0;
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
                    (undefined1 *)((long)register0x00000020 + -0x38),uVar12);
    plVar9 = *(long **)((long)register0x00000020 + -0x30);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar7 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        pcVar3 = *(code **)(*plVar9 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e4d;
        (*pcVar3)(plVar9);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e55;
        func_0x0412c2d0(plVar9);
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e67;
    lVar7 = func_0x0cc422f0(0xf6ff9e0,&DAT_0f6eaec0,0,0,0);
    if (lVar7 != 0) break;
    uVar12 = 0;
    puVar13 = (undefined8 *)((long)register0x00000020 + -0x40);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x40);
    *puVar13 = 0xcc41e86;
    uVar10 = 0xf6ff9e0;
  }
  uVar10 = *(undefined8 *)(lVar7 + 0x200);
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e93;
  func_0x0cc465d0((undefined1 *)((long)register0x00000020 + -0x28));
  return uVar10;
}


