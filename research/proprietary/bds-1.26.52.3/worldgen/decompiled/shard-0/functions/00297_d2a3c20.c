/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3a3c20 (ELF vaddr 0xd2a3c20)
 * Label: caller-of-seed
 * Body:  [[0d3a3c20, 0d3a3d5b] [0d3a3d60, 0d3a3dc2] [0d3a3dd0, 0d3a3e8c] [0d3a3e90, 0d3a3ef2] [0d3a3f00, 0d3a4037] [0d3a4040, 0d3a406e] [0d3a4070, 0d3a40b7] [0d3a40c0, 0d3a439b] [0d3a43a0, 0d3a44b7] [0d3a44c0, 0d3a44f1] [0d3a4500, 0d3a455e] [0d3a45e6, 0d3a4698]]
 * Ghidra: FUN_0d3a3c20
 */


/* WARNING: Possible PIC construction at 0x0d3a4328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d3a434e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d3a4454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d3a45f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d3a465b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d3a4181: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d3a4660) */
/* WARNING: Removing unreachable block (ram,0x0d3a4697) */
/* WARNING: Removing unreachable block (ram,0x0d3a4686) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d3a3c20(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  short sVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long *plStack_98;
  undefined4 auStack_88 [2];
  long *plStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined8 uStack_70;
  ushort uStack_68;
  undefined1 auStack_60 [24];
  long *plStack_48;
  undefined1 auStack_40 [16];
  
  func_0x0ca70a10();
  *param_1 = &UNK_0f462370;
  param_1[0xe] = &UNK_0f462548;
  plVar14 = param_1 + 0x22;
  param_1[0x2c] = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(short *)(param_1 + 0x2d) = (short)(int)param_2[0x15] + 1;
  uVar5 = (**(code **)(*(long *)param_2[0x14] + 0x568))();
  auStack_88[0] = 0;
  plStack_80 = (long *)0x0;
  uStack_78 = 0;
  uStack_76 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x04863060(auStack_60,0);
  cVar2 = func_0x0d3a6530(auStack_88,param_4,uVar5);
  if (cVar2 == '\0') {
    func_0x0d3a5d30(auStack_40,uVar5);
    func_0x0d3a6530(auStack_88,auStack_40,uVar5);
    func_0x04863610(auStack_40);
  }
  plVar20 = *(long **)(**(long **)(param_1[4] + 0x3b8) + 0x380);
  plVar9 = *(long **)(**(long **)(param_1[4] + 0x3b8) + 0x388);
  if ((long)plVar9 - (long)plVar20 != 0) {
    plVar15 = plVar9;
    uVar7 = (long)plVar9 - (long)plVar20 >> 3;
LAB_0d3a3d79:
    do {
      uVar16 = uVar7 >> 1;
      plVar13 = plVar20 + uVar16;
      if (*(ushort *)(plVar20[uVar16] + 0x168) < uStack_68) goto LAB_0d3a3d60;
      if (*(ushort *)(plVar20[uVar16] + 0x168) <= uStack_68) {
        if (uVar7 != 1) {
          do {
            uVar7 = uVar16 >> 1;
            if (*(ushort *)(plVar20[uVar7] + 0x168) < uStack_68) {
              plVar20 = plVar20 + uVar7 + 1;
              uVar7 = ~uVar7 + uVar16;
            }
            uVar16 = uVar7;
          } while (uVar7 != 0);
        }
        lVar19 = (long)plVar15 - (long)(plVar13 + 1);
        if (lVar19 != 0) {
          plVar15 = plVar13 + 1;
          uVar7 = lVar19 >> 3;
          do {
            uVar16 = uVar7 >> 1;
            if (*(ushort *)(plVar15[uVar16] + 0x168) <= uStack_68) {
              plVar15 = plVar15 + uVar16 + 1;
              uVar16 = ~uVar16 + uVar7;
            }
            uVar7 = uVar16;
          } while (uVar16 != 0);
        }
        if ((plVar20 == plVar15) || (plVar20 == plVar9)) break;
        lVar19 = *plVar20;
        param_1[0x2b] = lVar19;
        if (lVar19 == 0) goto LAB_0d3a3e31;
        goto LAB_0d3a3f3e;
      }
      plVar15 = plVar13;
      uVar7 = uVar16;
    } while (uVar16 != 0);
  }
LAB_0d3a3e1f:
  param_1[0x2b] = 0;
LAB_0d3a3e31:
  func_0x04b02330(0,1,5,&UNK_014a683c);
  lVar19 = **(long **)(param_1[4] + 0x3b8);
  uVar3 = (**(code **)(*param_2 + 0xd0))(param_2);
  plVar20 = *(long **)(lVar19 + 0x380);
  plVar9 = *(long **)(lVar19 + 0x388);
  if ((long)plVar9 - (long)plVar20 != 0) {
    plVar15 = plVar9;
    uVar7 = (long)plVar9 - (long)plVar20 >> 3;
LAB_0d3a3ea9:
    do {
      uVar16 = uVar7 >> 1;
      plVar13 = plVar20 + uVar16;
      if (*(ushort *)(plVar20[uVar16] + 0x168) < uVar3) goto LAB_0d3a3e90;
      if (*(ushort *)(plVar20[uVar16] + 0x168) <= uVar3) {
        if (uVar7 != 1) {
          do {
            uVar7 = uVar16 >> 1;
            if (*(ushort *)(plVar20[uVar7] + 0x168) < uVar3) {
              plVar20 = plVar20 + uVar7 + 1;
              uVar7 = ~uVar7 + uVar16;
            }
            uVar16 = uVar7;
          } while (uVar7 != 0);
        }
        lVar19 = (long)plVar15 - (long)(plVar13 + 1);
        if (lVar19 != 0) {
          plVar15 = plVar13 + 1;
          uVar7 = lVar19 >> 3;
          do {
            uVar16 = uVar7 >> 1;
            if (*(ushort *)(plVar15[uVar16] + 0x168) <= uVar3) {
              plVar15 = plVar15 + uVar16 + 1;
              uVar16 = ~uVar16 + uVar7;
            }
            uVar7 = uVar16;
          } while (uVar16 != 0);
        }
        if ((plVar20 == plVar15) || (plVar20 == plVar9)) goto LAB_0d3a3f38;
        lVar19 = *plVar20;
        break;
      }
      plVar15 = plVar13;
      uVar7 = uVar16;
      lVar19 = 0;
    } while (uVar16 != 0);
    goto LAB_0d3a3f3b;
  }
LAB_0d3a3f38:
  lVar19 = 0;
LAB_0d3a3f3b:
  param_1[0x2b] = lVar19;
LAB_0d3a3f3e:
  *(bool *)(param_1 + 0x2a) = plStack_80 == (long *)CONCAT62(uStack_76,uStack_78);
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *puVar6 = &UNK_0f3dc940;
  puVar6[1] = lVar19;
  plVar20 = (long *)param_1[0x2c];
  param_1[0x2c] = puVar6;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 8))();
  }
  lVar19 = param_2[0x15];
  if ((_DAT_0f6ffb10 == (long *)0x0) &&
     (cVar2 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
     cVar2 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar1 = *(long *)(*_DAT_0f6ffb10 + 0x200);
  plStack_48 = (long *)CONCAT62(uStack_76,uStack_78);
  if (plStack_80 == plStack_48) {
    lStack_c0 = 0;
    lVar19 = 0;
    plStack_98 = (long *)0x0;
    plVar9 = (long *)0x0;
    plVar20 = (long *)0x0;
    goto LAB_0d3a4380;
  }
  iVar4 = (short)lVar19 + 1;
  plVar15 = (long *)0x0;
  plVar9 = (long *)0x0;
  plVar20 = (long *)0x0;
  plVar13 = plStack_80;
  do {
    if (0 < (int)plVar13[1]) {
      iVar18 = 0;
      plVar11 = plVar15;
      do {
        if (plVar20 <= plVar9) {
          lVar19 = (long)plVar9 - (long)plVar11;
          puVar6 = (undefined8 *)(lVar19 >> 3);
          uVar7 = (long)puVar6 + 1;
          if (uVar7 < 0x2000000000000000) {
            uVar16 = (long)plVar20 - (long)plVar11 >> 2;
            if (uVar16 <= uVar7) {
              uVar16 = uVar7;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plVar20 - (long)plVar11)) {
              uVar16 = 0x1fffffffffffffff;
            }
            plStack_98 = plVar11;
            if (uVar16 < 0x2000000000000000) {
              lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
              if (lVar12 == 0) {
                func_0x0eec74c0(uVar16 * 8,0);
              }
              plVar20 = (long *)(lVar12 + uVar16 * 8);
              *(long *)(lVar12 + lVar19) = *plVar13;
              plVar9 = (long *)(lVar12 + lVar19 + 8);
              plVar15 = (long *)(lVar12 + lVar19 + (long)puVar6 * -8);
              plVar8 = (long *)func_0x0eee2f00(plVar15,plVar11);
              if (plVar11 == (long *)0x0) {
                if (*(long *)(*plVar13 + 0x110) != *(long *)(lVar1 + 0x110)) goto LAB_0d3a4070;
                goto LAB_0d3a408b;
              }
              goto SUB_0412a280;
            }
          }
          else {
            func_0x052e7cc0();
          }
          FUN_04882eb0();
          goto LAB_0d3a454d;
        }
        *plVar9 = *plVar13;
        plVar9 = plVar9 + 1;
        plVar15 = plVar11;
        if (*(long *)(*plVar13 + 0x110) != *(long *)(lVar1 + 0x110)) {
LAB_0d3a4070:
          sVar10 = *(short *)(param_1 + 0x2d);
          if ((int)sVar10 < iVar4 + iVar18) {
            sVar10 = (short)(iVar4 + iVar18);
          }
          *(short *)(param_1 + 0x2d) = sVar10;
        }
LAB_0d3a408b:
        iVar18 = iVar18 + 1;
        plVar11 = plVar15;
      } while (iVar18 < (int)plVar13[1]);
      iVar4 = iVar4 + iVar18;
    }
    plVar13 = plVar13 + 2;
  } while (plVar13 != plStack_48);
  uVar7 = (long)plVar9 - (long)plVar15;
  lVar19 = (long)plVar9 - (long)plVar15;
  plVar11 = plVar15;
  do {
    lStack_c0 = (long)uVar7 >> 3;
    plStack_98 = plVar11;
    if ((lVar19 != 0) && ((uVar7 & 0x78) == 0)) {
      uVar7 = lVar19 * 0x20;
      plVar20 = (long *)param_1[0x22];
      plVar8 = (long *)param_1[0x23];
      uVar16 = (long)plVar8 - (long)plVar20 >> 3;
      if (uVar7 < uVar16 || uVar7 - uVar16 == 0) {
        if (uVar7 < uVar16) {
          plVar8 = plVar20 + lVar19 * 0x20;
          param_1[0x23] = plVar8;
        }
      }
      else {
        func_0x0ca7b2e0(plVar14);
        plVar20 = (long *)param_1[0x22];
        plVar8 = (long *)param_1[0x23];
      }
      sVar10 = *(short *)(param_1[5] + 0xa8);
      lVar12 = (long)plVar8 - (long)plVar20;
      uStack_b8 = (undefined4)lVar1;
      uStack_b4 = (undefined4)((ulong)lVar1 >> 0x20);
      if (lVar12 == 0) goto LAB_0d3a42bc;
      plVar14 = plVar20;
      if (lVar12 - 8U < 0x18) goto LAB_0d3a42b0;
      uVar7 = (lVar12 - 8U >> 3) + 1;
      uVar16 = uVar7 & 0xfffffffffffffffc;
      plVar14 = plVar20 + uVar16;
      uVar17 = 0;
      do {
        plVar9 = plVar20 + uVar17;
        *(undefined4 *)plVar9 = uStack_b8;
        *(undefined4 *)((long)plVar9 + 4) = uStack_b4;
        *(undefined4 *)(plVar9 + 1) = uStack_b8;
        *(undefined4 *)((long)plVar9 + 0xc) = uStack_b4;
        plVar9 = plVar20 + uVar17 + 2;
        *(undefined4 *)plVar9 = uStack_b8;
        *(undefined4 *)((long)plVar9 + 4) = uStack_b4;
        *(undefined4 *)(plVar9 + 1) = uStack_b8;
        *(undefined4 *)((long)plVar9 + 0xc) = uStack_b4;
        uVar17 = uVar17 + 4;
      } while (uVar16 != uVar17);
      if (uVar7 != uVar16) {
LAB_0d3a42b0:
        do {
          *(undefined4 *)plVar14 = uStack_b8;
          *(undefined4 *)((long)plVar14 + 4) = uStack_b4;
          plVar14 = plVar14 + 1;
        } while (plVar14 != (long *)((long)plVar20 + lVar12));
      }
LAB_0d3a42bc:
      param_1[0x25] = plVar20;
      param_1[0x26] = (long *)((long)plVar20 + lVar12);
      *(undefined4 *)(param_1 + 0x27) = 0x10;
      *(int *)((long)param_1 + 0x13c) = (int)lStack_c0;
      *(undefined4 *)(param_1 + 0x28) = 0x10;
      *(int *)((long)param_1 + 0x144) = (int)sVar10;
      *(undefined4 *)(param_1 + 0x29) = uStack_b8;
      *(undefined4 *)((long)param_1 + 0x14c) = uStack_b4;
      if (plVar20 != plVar8) {
        do {
          plVar8 = (long *)func_0x0eee2ee0(plVar20,plVar11,lVar19);
          plVar20 = (long *)((long)plVar20 + lVar19);
        } while (plVar20 != (long *)param_1[0x23]);
      }
      if (plVar11 == (long *)0x0) {
        plVar8 = (long *)func_0x04863610(auStack_60);
        if (plStack_80 == (long *)0x0) {
          return plVar8;
        }
        uStack_78 = SUB82(plStack_80,0);
        uStack_76 = (undefined6)((ulong)plStack_80 >> 0x10);
        plVar11 = plStack_80;
      }
      goto SUB_0412a280;
    }
LAB_0d3a4380:
    if (plVar9 < plVar20) {
      *plVar9 = lVar1;
      plVar15 = plStack_98;
    }
    else {
      plVar9 = (long *)(lStack_c0 + 1);
      puVar6 = param_1;
      if ((long *)0x1fffffffffffffff < plVar9) goto LAB_0d3a454d;
      plVar11 = (long *)((long)plVar20 - (long)plStack_98 >> 2);
      if (plVar11 <= plVar9) {
        plVar11 = plVar9;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)plVar20 - (long)plStack_98)) {
        plVar11 = (long *)0x1fffffffffffffff;
      }
      if ((long *)0x1fffffffffffffff < plVar11) goto LAB_0d3a4552;
      lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar11 * 8);
      if (lVar12 == 0) {
        func_0x0eec74c0((long)plVar11 * 8,0);
      }
      plVar20 = (long *)((long)plVar11 * 8 + lVar12);
      *(long *)(lVar12 + lVar19) = lVar1;
      plVar9 = (long *)(lVar19 + lVar12);
      plVar15 = (long *)(lVar19 + lVar12 + lStack_c0 * -8);
      plVar8 = (long *)func_0x0eee2f00(plVar15,plStack_98,lVar19);
      plVar11 = plStack_98;
      if (plStack_98 != (long *)0x0) goto SUB_0412a280;
    }
    plVar9 = plVar9 + 1;
    uVar7 = (long)plVar9 - (long)plVar15;
    lVar19 = (long)plVar9 - (long)plVar15;
    plVar11 = plVar15;
  } while( true );
LAB_0d3a3d60:
  plVar20 = plVar13 + 1;
  uVar7 = ~uVar16 + uVar7;
  if (uVar7 == 0) goto LAB_0d3a3e1f;
  goto LAB_0d3a3d79;
LAB_0d3a3e90:
  plVar20 = plVar13 + 1;
  uVar7 = ~uVar16 + uVar7;
  lVar19 = 0;
  if (uVar7 == 0) goto LAB_0d3a3f3b;
  goto LAB_0d3a3ea9;
LAB_0d3a454d:
  func_0x052e7cc0();
  plVar11 = plStack_98;
LAB_0d3a4552:
  plVar8 = (long *)FUN_04882eb0();
  if (plVar11 == (long *)0x0) {
    func_0x0d3a4670(auStack_88);
    plVar20 = (long *)puVar6[0x2c];
    puVar6[0x2c] = 0;
    if (plVar20 != (long *)0x0) goto LAB_0d3a4637;
    plVar11 = (long *)*plVar14;
    while (plVar11 == (long *)0x0) {
      func_0x0ca70460(puVar6);
      plVar20 = plVar8;
      func_0x0eee2d70();
LAB_0d3a4637:
      (**(code **)(*plVar20 + 8))();
      plVar11 = (long *)*plVar14;
    }
    puVar6[0x23] = plVar11;
    plVar8 = plVar14;
  }
SUB_0412a280:
  if (plVar11 != (long *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plVar11);
  }
  return plVar8;
}


