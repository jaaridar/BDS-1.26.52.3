/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5354ab0 (ELF vaddr 0x5254ab0)
 * Label: SurfaceMaterialAdjustmentsBiomeComponentGlue::vslot3
 * Body:  [[05354ab0, 05354b98] [05354ba0, 05354e59] [05354e60, 05354f28] [05354f30, 053551f9]]
 * Ghidra: wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot3
               (long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 **ppuStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 auStack_b0 [2];
  uint uStack_a8;
  undefined4 auStack_a0 [2];
  uint uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  long lStack_58;
  long *plStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  puStack_40 = (undefined8 *)*param_3;
  if (*(char *)((long)param_3 + 0x24) == '\x02') {
    puStack_40 = param_3;
  }
  lStack_48 = param_1;
  if (puStack_40 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x46d8d269) {
    uVar10 = param_3[5];
    lVar8 = param_3[6];
    if (lVar8 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar8 = param_3[6];
    }
    puStack_40 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0x46d8d269);
  }
  lVar8 = func_0x0535dfa0(param_2 + 0x170);
  if ((*(char *)(puStack_40 + 4) == '\x01') &&
     (lVar15 = *(long *)(lStack_48 + 8), *(long *)(lStack_48 + 0x10) != lVar15)) {
    plStack_50 = (long *)(lVar8 + 8);
    lVar12 = 0x1c4;
    lVar11 = 0x28;
    uStack_38 = 0;
    lStack_58 = lVar8;
    do {
      lVar3 = puStack_40[1];
      if ((ulong)((puStack_40[2] - lVar3 >> 3) * -0x7dc11f7047dc11f7) <= uStack_38) {
        func_0x0535b5c0();
LAB_05355184:
        func_0x04931450();
        plVar7 = plStack_c8;
LAB_05355189:
        plStack_c8 = plVar7;
        func_0x0533f340();
LAB_0535518e:
        uVar10 = FUN_04882eb0();
        uVar10 = FUN_04882e20(uVar10);
        uVar10 = FUN_04882e20(uVar10);
        uVar10 = FUN_04882e20(uVar10);
        uVar10 = FUN_04882e20(uVar10);
        func_0x0533f350(&puStack_e8);
        FUN_05355200(&uStack_c0);
        uVar10 = func_0x0eee2d70(uVar10);
        uVar10 = FUN_04882e20(uVar10);
        uVar10 = FUN_04882e20(uVar10);
        FUN_05355200(&uStack_c0);
        func_0x0eee2d70(uVar10);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_c0 = 0;
      auStack_b0[0] = 0;
      uStack_a8 = 1;
      auStack_a0[0] = 0;
      uStack_98 = 1;
      puStack_90 = &UNK_0efa53a0;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_bc = (undefined4)_DAT_014eae60;
      uStack_b8 = (undefined4)((ulong)_DAT_014eae60 >> 0x20);
      if (*(char *)(lVar3 + -0x184 + lVar12) == '\x01') {
        uStack_88 = *(undefined8 *)(lVar15 + -0x28 + lVar11);
        if (*(char *)(lVar3 + -0x13c + lVar12) == '\x01') goto LAB_05354e79;
LAB_05354c89:
        if (*(char *)(lVar3 + -0xf4 + lVar12) != '\x01') goto LAB_05354c98;
LAB_05354e92:
        uStack_78 = *(undefined8 *)(lVar15 + -0x18 + lVar11);
        if (*(char *)(lVar3 + -0xac + lVar12) == '\x01') goto LAB_05354eae;
LAB_05354ca7:
        if (*(char *)(lVar3 + -100 + lVar12) != '\x01') goto LAB_05354cb3;
LAB_05354ec7:
        uVar10 = *(undefined8 *)(lVar15 + -8 + lVar11);
        uStack_68 = (undefined4)uVar10;
        uStack_64 = (undefined4)((ulong)uVar10 >> 0x20);
        if (*(char *)(lVar3 + -0x54 + lVar12) == '\x01') goto LAB_05354ee8;
LAB_05354cc7:
        if (*(char *)(lVar3 + -0xc + lVar12) == '\x01') goto LAB_05354cd8;
LAB_05354f00:
        auStack_b0[0] = 0xff7fffff;
        auStack_a0[0] = 0x7f7fffff;
        cVar2 = *(char *)(lVar3 + lVar12);
        uVar6 = uStack_a8;
        plVar7 = plStack_c8;
        plStack_c8 = plStack_50;
      }
      else {
        if (*(char *)(lVar3 + -0x13c + lVar12) != '\x01') goto LAB_05354c89;
LAB_05354e79:
        uStack_80 = *(undefined8 *)(lVar15 + -0x20 + lVar11);
        if (*(char *)(lVar3 + -0xf4 + lVar12) == '\x01') goto LAB_05354e92;
LAB_05354c98:
        if (*(char *)(lVar3 + -0xac + lVar12) != '\x01') goto LAB_05354ca7;
LAB_05354eae:
        uVar10 = *(undefined8 *)(lVar15 + -0x10 + lVar11);
        uStack_70 = (undefined4)uVar10;
        uStack_6c = (undefined4)((ulong)uVar10 >> 0x20);
        if (*(char *)(lVar3 + -100 + lVar12) == '\x01') goto LAB_05354ec7;
LAB_05354cb3:
        if (*(char *)(lVar3 + -0x54 + lVar12) != '\x01') goto LAB_05354cc7;
LAB_05354ee8:
        uVar10 = *(undefined8 *)(lVar3 + -0x5c + lVar12);
        uStack_bc = (undefined4)uVar10;
        uStack_b8 = (undefined4)((ulong)uVar10 >> 0x20);
        if (*(char *)(lVar3 + -0xc + lVar12) != '\x01') goto LAB_05354f00;
LAB_05354cd8:
        if ((undefined8 *)(lVar15 + lVar11) != (undefined8 *)auStack_b0) {
          uVar13 = (ulong)*(uint *)(lVar15 + 8 + lVar11);
          puStack_e8 = (undefined8 *)auStack_b0;
          puStack_e0 = (undefined8 *)auStack_b0;
          if (uVar13 == 0xffffffff) goto LAB_05355184;
          ppuStack_f0 = &puStack_e8;
          (**(code **)(&UNK_0f2bc850 + uVar13 * 8))(&ppuStack_f0);
        }
        if ((undefined8 *)(lVar15 + lVar11 + 0x18) != (undefined8 *)auStack_a0) {
          uVar13 = (ulong)*(uint *)(lVar15 + 0x20 + lVar11);
          puStack_e8 = (undefined8 *)auStack_a0;
          puStack_e0 = (undefined8 *)auStack_a0;
          if (uVar13 == 0xffffffff) goto LAB_05355184;
          ppuStack_f0 = &puStack_e8;
          (**(code **)(&UNK_0f2bc850 + uVar13 * 8))(&ppuStack_f0);
        }
        cVar2 = *(char *)(lVar3 + lVar12);
        uVar6 = uStack_a8;
        plVar7 = plStack_c8;
        plStack_c8 = plStack_50;
      }
      uStack_c0 = _DAT_011983f0;
      if (cVar2 == '\x01') {
        uStack_c0 = *(undefined4 *)(lVar3 + -4 + lVar12);
      }
      puVar9 = *(undefined8 **)(lVar8 + 0x10);
      plStack_50 = plStack_c8;
      uStack_a8 = uVar6;
      if (puVar9 < *(undefined8 **)(lVar8 + 0x18)) {
        *(undefined4 *)(puVar9 + 1) = uStack_b8;
        *puVar9 = CONCAT44(uStack_bc,uStack_c0);
        *(undefined1 *)(puVar9 + 2) = 0;
        *(undefined4 *)(puVar9 + 3) = 0xffffffff;
        if ((ulong)uVar6 != 0xffffffff) {
          puStack_e8 = puVar9 + 2;
          plStack_c8 = plVar7;
          (**(code **)(&UNK_0efa59d0 + (ulong)uVar6 * 8))(&puStack_e8,auStack_b0);
          *(uint *)(puVar9 + 3) = uVar6;
          plVar7 = plStack_c8;
        }
        plStack_c8 = plVar7;
        uVar6 = uStack_98;
        *(undefined1 *)(puVar9 + 4) = 0;
        *(undefined4 *)(puVar9 + 5) = 0xffffffff;
        if ((ulong)uStack_98 != 0xffffffff) {
          puStack_e8 = puVar9 + 4;
          (**(code **)(&UNK_0efa59d0 + (ulong)uStack_98 * 8))(&puStack_e8,auStack_a0);
          *(uint *)(puVar9 + 5) = uVar6;
        }
        puVar9[6] = &UNK_0efa53a0;
        *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_88;
        *(undefined4 *)((long)puVar9 + 0x3c) = uStack_88._4_4_;
        *(undefined4 *)(puVar9 + 8) = (undefined4)uStack_80;
        *(undefined4 *)((long)puVar9 + 0x44) = uStack_80._4_4_;
        puVar9[9] = uStack_78;
        puVar9[10] = CONCAT44(uStack_6c,uStack_70);
        *(ulong *)((long)puVar9 + 0x54) = CONCAT44(uStack_68,uStack_6c);
        *(ulong *)((long)puVar9 + 0x5c) = CONCAT44(uStack_60,uStack_64);
        puVar9 = puVar9 + 0xd;
        lVar8 = lStack_58;
      }
      else {
        lVar15 = (long)puVar9 - *plStack_c8;
        uVar13 = (lVar15 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar13) goto LAB_05355189;
        lVar8 = (long)*(undefined8 **)(lVar8 + 0x18) - *plStack_c8 >> 3;
        uVar5 = lVar8 * -0x6276276276276276;
        if (uVar13 < uVar5) {
          uVar13 = uVar5;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar8 * 0x4ec4ec4ec4ec4ec5)) {
          uVar13 = 0x276276276276276;
        }
        if (uVar13 == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          if (0x276276276276276 < uVar13) goto LAB_0535518e;
          puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 0x68);
          if (puVar9 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar13 * 0x68,0);
            puVar9 = (undefined8 *)0x0;
          }
        }
        uVar6 = uStack_a8;
        puVar1 = (undefined8 *)((long)puVar9 + lVar15);
        puStack_d0 = puVar9 + uVar13 * 0xd;
        *(undefined4 *)((long)puVar9 + lVar15 + 8) = uStack_b8;
        *(ulong *)((long)puVar9 + lVar15) = CONCAT44(uStack_bc,uStack_c0);
        *(undefined1 *)((long)puVar9 + lVar15 + 0x10) = 0;
        *(undefined4 *)((long)puVar9 + lVar15 + 0x18) = 0xffffffff;
        puStack_e8 = puVar9;
        puStack_e0 = puVar1;
        puStack_d8 = puVar1;
        if ((ulong)uStack_a8 != 0xffffffff) {
          ppuStack_f0 = (undefined8 **)((long)puVar9 + lVar15 + 0x10);
          (**(code **)(&UNK_0efa59d0 + (ulong)uStack_a8 * 8))(&ppuStack_f0,auStack_b0);
          *(uint *)(puVar1 + 3) = uVar6;
        }
        uVar6 = uStack_98;
        *(undefined1 *)(puVar1 + 4) = 0;
        *(undefined4 *)(puVar1 + 5) = 0xffffffff;
        if ((ulong)uStack_98 != 0xffffffff) {
          ppuStack_f0 = (undefined8 **)(puVar1 + 4);
          (**(code **)(&UNK_0efa59d0 + (ulong)uStack_98 * 8))(&ppuStack_f0,auStack_a0);
          *(uint *)(puVar1 + 5) = uVar6;
        }
        lVar8 = lStack_58;
        puVar1[6] = &UNK_0efa53a0;
        *(undefined4 *)(puVar1 + 7) = (undefined4)uStack_88;
        *(undefined4 *)((long)puVar1 + 0x3c) = uStack_88._4_4_;
        *(undefined4 *)(puVar1 + 8) = (undefined4)uStack_80;
        *(undefined4 *)((long)puVar1 + 0x44) = uStack_80._4_4_;
        *(undefined4 *)(puVar1 + 9) = (undefined4)uStack_78;
        *(undefined4 *)((long)puVar1 + 0x4c) = uStack_78._4_4_;
        *(undefined4 *)(puVar1 + 10) = uStack_70;
        *(undefined4 *)((long)puVar1 + 0x54) = uStack_6c;
        *(undefined4 *)((long)puVar1 + 0x54) = uStack_6c;
        *(undefined4 *)(puVar1 + 0xb) = uStack_68;
        *(undefined4 *)((long)puVar1 + 0x5c) = uStack_64;
        *(undefined4 *)(puVar1 + 0xc) = uStack_60;
        puStack_d8 = puVar1 + 0xd;
        lVar14 = (*(long *)(lStack_58 + 8) - *(long *)(lStack_58 + 0x10)) + (long)puVar1;
        func_0x0533f400(plStack_50,*(long *)(lStack_58 + 8),*(long *)(lStack_58 + 0x10),lVar14);
        puVar9 = puStack_d8;
        lVar15 = *(long *)(lVar8 + 8);
        lVar3 = *(long *)(lVar8 + 0x18);
        *(long *)(lVar8 + 8) = lVar14;
        *(undefined8 **)(lVar8 + 0x10) = puStack_d8;
        *(undefined8 **)(lVar8 + 0x18) = puStack_d0;
        if (lVar15 != 0) {
          func_0x0412a280(lVar15,lVar3 - lVar15);
        }
      }
      *(undefined8 **)(lVar8 + 0x10) = puVar9;
      if ((ulong)uStack_98 != 0xffffffff) {
        (**(code **)(&UNK_0efa59c0 + (ulong)uStack_98 * 8))(&puStack_e8,auStack_a0);
      }
      uStack_98 = 0xffffffff;
      if ((ulong)uStack_a8 != 0xffffffff) {
        (**(code **)(&UNK_0efa59c0 + (ulong)uStack_a8 * 8))(&puStack_e8,auStack_b0);
      }
      uStack_38 = uStack_38 + 1;
      lVar15 = *(long *)(lStack_48 + 8);
      lVar12 = lVar12 + 0x1c8;
      lVar11 = lVar11 + 0x58;
    } while (uStack_38 < (ulong)((*(long *)(lStack_48 + 0x10) - lVar15 >> 3) * 0x2e8ba2e8ba2e8ba3));
  }
  return;
}


