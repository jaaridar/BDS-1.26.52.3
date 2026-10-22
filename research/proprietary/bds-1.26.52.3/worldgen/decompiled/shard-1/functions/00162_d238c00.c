/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd338c00 (ELF vaddr 0xd238c00)
 * Label: string:auto StructurePoolElement::place(BlockSource &, BlockPos, Bl
 * Body:  [[0d338c00, 0d338f0e] [0d338f10, 0d338fb8] [0d338fc0, 0d339025] [0d339030, 0d3390e4] [0d3390f0, 0d3391cd] [0d3391d4, 0d3391e9]]
 * Ghidra: FUN_0d338c00
 */


/* WARNING: Removing unreachable block (ram,0x0d338d08) */
/* WARNING: Removing unreachable block (ram,0x0d338d19) */
/* WARNING: Removing unreachable block (ram,0x0d338d28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d338c00(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 *param_7,undefined1 param_8,
                  undefined8 param_9,char param_10,char param_11)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  undefined4 *puVar20;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  uint uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  undefined4 uStack_64;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lStack_78 = param_1;
  if (*(int *)(param_1 + 0x40) != -1) {
    uStack_c0 = SUB81(&lStack_78,0);
    uStack_bf = (undefined1)((ulong)&lStack_78 >> 8);
    uStack_be = (undefined2)((ulong)&lStack_78 >> 0x10);
    uStack_bc = (undefined4)((ulong)&lStack_78 >> 0x20);
    func_0x0eedc720(param_1 + 0x40,&UNK_0d34a8e0,&uStack_c0);
  }
  lVar17 = _DAT_0f71ec88;
  if (*(char *)(param_1 + 0x78) == '\0') {
LAB_0d33916b:
    func_0x048a88b0();
LAB_0d339170:
    func_0x0eeddcf0(&UNK_01219c11,&UNK_01424ae3,0x2ca,&UNK_01234b55,&UNK_013d7b7e);
    _DAT_00000000 = 0xdeadc0de;
  }
  else {
    uStack_bf = 0;
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = *param_7;
    uStack_ac = param_7[1];
    uStack_a8 = param_7[2];
    uStack_a4 = param_7[3];
    uStack_a0 = *(undefined8 *)(param_7 + 4);
    uStack_c0 = param_8;
    uStack_98 = (uint)(param_11 == '\0');
    lStack_78 = _DAT_0f71ec88;
    plStack_70 = _DAT_0f71ec90;
    if (_DAT_0f71ec90 != (long *)0x0) {
      LOCK();
      _DAT_0f71ec90[1] = _DAT_0f71ec90[1] + 1;
      UNLOCK();
    }
    if (lVar17 == 0) {
LAB_0d339157:
      func_0x04890760();
      func_0x04890760();
LAB_0d339161:
      func_0x04890760();
LAB_0d339166:
      func_0x04890760();
      goto LAB_0d33916b;
    }
    uStack_64 = param_4;
    uStack_40 = param_2;
    uStack_38 = param_3;
    plStack_88 = (long *)func_0x0d2db730(&plStack_90,&lStack_78);
    plVar1 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_70 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 != 0) goto LAB_0d338d68;
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      func_0x0412c2d0(plVar1);
      plVar1 = plStack_90;
      plVar16 = plStack_80;
      if (param_10 == '\x01') goto LAB_0d338d72;
LAB_0d338f9c:
      plStack_80 = plVar16;
      plStack_90 = plVar1;
      puVar6 = (undefined4 *)(*(undefined8 **)(param_1 + 0xf0))[1];
      for (puVar20 = (undefined4 *)**(undefined8 **)(param_1 + 0xf0); puVar20 != puVar6;
          puVar20 = puVar20 + 4) {
        while (plStack_80 <= plStack_88) {
          plStack_88 = (long *)func_0x0d345390(&plStack_90,puVar20);
          puVar20 = puVar20 + 4;
          if (puVar20 == puVar6) goto LAB_0d339007;
        }
        lVar17 = *(long *)(puVar20 + 2);
        uVar8 = puVar20[1];
        uVar9 = puVar20[2];
        uVar10 = puVar20[3];
        *(undefined4 *)plStack_88 = *puVar20;
        *(undefined4 *)((long)plStack_88 + 4) = uVar8;
        *(undefined4 *)(plStack_88 + 1) = uVar9;
        *(undefined4 *)((long)plStack_88 + 0xc) = uVar10;
        if (lVar17 != 0) {
          LOCK();
          plVar1 = (long *)(lVar17 + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        plStack_88 = plStack_88 + 2;
      }
LAB_0d339007:
      puVar13 = (undefined8 *)FUN_0d3ad330(*(undefined1 *)(param_1 + 0xe8));
      puVar6 = (undefined4 *)puVar13[1];
      for (puVar20 = (undefined4 *)*puVar13; puVar20 != puVar6; puVar20 = puVar20 + 4) {
        if (plStack_88 < plStack_80) {
          lVar17 = *(long *)(puVar20 + 2);
          uVar8 = puVar20[1];
          uVar9 = puVar20[2];
          uVar10 = puVar20[3];
          *(undefined4 *)plStack_88 = *puVar20;
          *(undefined4 *)((long)plStack_88 + 4) = uVar8;
          *(undefined4 *)(plStack_88 + 1) = uVar9;
          *(undefined4 *)((long)plStack_88 + 0xc) = uVar10;
          if (lVar17 != 0) {
            LOCK();
            plVar1 = (long *)(lVar17 + 8);
            *plVar1 = *plVar1 + 1;
            UNLOCK();
          }
          plStack_88 = plStack_88 + 2;
        }
        else {
          plStack_88 = (long *)func_0x0d345390(&plStack_90,puVar20);
        }
      }
      lVar17 = *(long *)(param_1 + 0x50);
      if (lVar17 != 0 && *(int *)(param_1 + 0x58) == 0) {
LAB_0d3390ae:
        uVar14 = func_0x0d3ad660(lVar17,uStack_40,uStack_38,uStack_64,param_5,param_6,&uStack_c0,
                                 param_9);
        plVar1 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          uVar14 = uVar14 & 0xffffffff;
          for (plVar16 = plStack_88; plVar1 != plVar16; plVar16 = plVar16 + -2) {
            plVar18 = (long *)plVar16[-1];
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar5 = plVar18 + 1;
              lVar17 = *plVar5;
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                func_0x0412c2d0(plVar18);
              }
            }
          }
          plStack_88 = plVar1;
          func_0x0412a280(plStack_90,(long)plStack_80 - (long)plStack_90);
        }
        return uVar14;
      }
      if ((*(int *)(param_1 + 0x58) == 1) && (lVar17 != 0)) {
        lVar17 = lVar17 + 8;
        goto LAB_0d3390ae;
      }
      goto LAB_0d339170;
    }
LAB_0d338d68:
    plVar1 = plStack_90;
    plVar16 = plStack_80;
    if (param_10 != '\x01') goto LAB_0d338f9c;
LAB_0d338d72:
    lVar17 = _DAT_0f71ec98;
    uStack_48 = param_5;
    if (plStack_88 < plStack_80) {
      *plStack_88 = _DAT_0f71ec98;
      lVar11 = _DAT_0f71eca0;
      plStack_88[1] = _DAT_0f71eca0;
      if (lVar11 != 0) {
        LOCK();
        plVar1 = (long *)(lVar11 + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
        lVar17 = *plStack_88;
      }
      if (lVar17 == 0) goto LAB_0d339161;
      plVar1 = plStack_90;
      plStack_88 = plStack_88 + 2;
      plVar16 = plStack_80;
      goto LAB_0d338f9c;
    }
    lVar17 = (long)plStack_88 - (long)plStack_90;
    uVar14 = (lVar17 >> 4) + 1;
    if (uVar14 >> 0x3c == 0) {
      uVar19 = (long)plStack_80 - (long)plStack_90 >> 3;
      if (uVar19 <= uVar14) {
        uVar19 = uVar14;
      }
      if (0x7fffffffffffffef < (ulong)((long)plStack_80 - (long)plStack_90)) {
        uVar19 = 0xfffffffffffffff;
      }
      if (uVar19 == 0) {
        lVar11 = 0;
      }
      else {
        if (0xfffffffffffffff < uVar19) goto LAB_0d3391a8;
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 << 4);
        if (lVar11 == 0) {
          lVar11 = 0;
          func_0x0eec74c0(uVar19 << 4,0);
        }
      }
      plVar16 = plStack_88;
      lVar12 = _DAT_0f71ec98;
      *(long *)(lVar11 + lVar17) = _DAT_0f71ec98;
      lVar3 = _DAT_0f71eca0;
      *(long *)(lVar11 + 8 + lVar17) = _DAT_0f71eca0;
      if (lVar3 != 0) {
        LOCK();
        plVar1 = (long *)(lVar3 + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      if (lVar12 == 0) goto LAB_0d339166;
      plVar1 = (long *)(lVar17 + lVar11 + ((long)plStack_90 - (long)plStack_88));
      lStack_58 = lVar11;
      uStack_50 = uVar19;
      if ((long)plStack_90 - (long)plStack_88 != 0) {
        lVar12 = 0;
        do {
          lVar3 = *(long *)((long)plStack_90 + lVar12);
          *(long *)((long)plVar1 + lVar12) = lVar3;
          lVar4 = *(long *)((long)plStack_90 + lVar12 + 8);
          *(long *)((long)plVar1 + lVar12 + 8) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          if (lVar3 == 0) {
            func_0x04890760();
            goto LAB_0d339157;
          }
          lVar3 = lVar12 + 0x10;
          lVar12 = lVar12 + 0x10;
          plVar18 = plStack_90;
          lVar4 = param_1;
        } while ((long *)((long)plStack_90 + lVar3) != plStack_88);
        do {
          lStack_60 = lVar4;
          plVar5 = (long *)plVar18[1];
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar12 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              func_0x0412c2d0(plVar5);
            }
          }
          plVar18 = plVar18 + 2;
          param_1 = lStack_60;
          lVar4 = lStack_60;
        } while (plVar18 != plVar16);
      }
      plVar16 = (long *)(lStack_58 + uStack_50 * 0x10);
      plVar18 = (long *)(lVar17 + lVar11 + 0x10);
      param_5 = uStack_48;
      plStack_88 = plVar18;
      if (plStack_90 != (long *)0x0) {
        lVar17 = (long)plStack_80 - (long)plStack_90;
        plVar5 = plStack_90;
        plStack_90 = plVar1;
        plStack_80 = plVar16;
        func_0x0412a280(plVar5,lVar17);
        param_5 = uStack_48;
        plVar1 = plStack_90;
        plStack_88 = plVar18;
        plVar16 = plStack_80;
      }
      goto LAB_0d338f9c;
    }
  }
  func_0x0d2d9fd0();
LAB_0d3391a8:
  uVar15 = FUN_04882eb0();
  func_0x05192370(&lStack_78);
  func_0x0d3391f0(&uStack_c0);
  uVar15 = func_0x0eee2d70(uVar15);
  func_0x0d3391f0(&uStack_c0);
  func_0x0eee2d70(uVar15);
  pcVar7 = (code *)swi(3);
  uVar14 = (*pcVar7)();
  return uVar14;
}


