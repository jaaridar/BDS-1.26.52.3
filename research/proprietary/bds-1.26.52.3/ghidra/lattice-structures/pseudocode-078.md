# FUN_0b634790

- entry: `0xb634790`
- body size: 124 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0b634790(uint *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  undefined1 auVar28 [16];
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  uint uStack_fc;
  long *plStack_f8;
  long *plStack_f0;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [34];
  byte bStack_ae;
  
  uStack_108 = (undefined4)_DAT_014e3420;
  iStack_104 = (int)((ulong)_DAT_014e3420 >> 0x20);
  iStack_100 = 0;
  uStack_fc = 0;
  uVar8 = param_1[10];
  iVar24 = 0;
  uVar18 = 0;
  uVar16 = 0;
  lVar20 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar25 = uStack_fc;
  iVar6 = iStack_104;
  iVar7 = iStack_100;
  switch(uVar8) {
  case 0:
    lVar20 = (**(code **)(**(long **)(param_1 + 8) + 0x270))();
    if (((*(char *)((long)param_1 + 0x19) == '\x01') && ((char)param_1[6] == '\x01')) &&
       (*(char *)(lVar20 + 0x22) != '\0')) goto code_r0x0b634819;
    plVar12 = *(long **)(param_1 + 8);
    lVar20 = plVar12[2];
    uVar8 = *(uint *)(plVar12 + 3);
    plVar13 = (long *)(*(long *)(lVar20 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x40) - *(long *)(lVar20 + 0x38)) >>
                                   3) - 1U & 0x4f6ba419) * 8);
    lVar26 = *(long *)(lVar20 + 0x50);
    plVar9 = plVar13;
    do {
      if (*plVar9 == -1) {
        plVar15 = *(long **)(lVar20 + 0x58);
        plVar9 = plVar15;
        goto code_r0x0b635039;
      }
      lVar19 = *plVar9 * 0x20;
      plVar9 = (long *)(lVar26 + lVar19);
    } while (*(int *)(lVar26 + 8 + lVar19) != 0x4f6ba419);
    plVar15 = *(long **)(lVar20 + 0x58);
code_r0x0b635039:
    if ((plVar9 != plVar15) && (lVar20 = plVar9[2], lVar20 != 0)) {
      uVar16 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if ((uVar16 < (ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3)) &&
         (lVar19 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar19 != 0)) {
        uVar25 = *(uint *)(lVar19 + (ulong)(uVar8 & 0x7ff) * 4);
        if (((uVar25 ^ uVar8 & 0xfffc0000) < 0x3ffff) &&
           (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
           lVar20 != 0)) {
          if (*(char *)(lVar20 + (ulong)(uVar25 & 0x7f) * 4) == '?') {
            lVar20 = **(long **)(param_1 + 2);
            if ((*(long **)(param_1 + 2))[1] == lVar20) goto code_r0x0b6365e9;
            plVar9 = *(long **)(plVar12[0xae] + 0xb8);
            (**(code **)(*plVar9 + 0x70))(plVar9,*(undefined4 *)(plVar12[0xae] + 0x10),lVar20,0);
            (**(code **)(*plVar12 + 0x520))(plVar12,0);
            bVar5 = *(byte *)(lVar20 + 0x22);
            uStack_fc = (uint)bVar5;
            iStack_100 = 1;
code_r0x0b63568a:
            uVar18 = (uint)bVar5;
            iVar24 = 1;
          }
          else {
            do {
              lVar20 = *plVar13;
              plVar13 = plVar15;
              if (lVar20 == -1) break;
              lVar20 = lVar20 * 0x20;
              plVar13 = (long *)(lVar26 + lVar20);
            } while (*(int *)(lVar26 + 8 + lVar20) != 0x4f6ba419);
            if (((((plVar13 == plVar15) || (lVar20 = plVar13[2], lVar20 == 0)) ||
                 ((ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3) <= uVar16)) ||
                ((lVar26 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar26 == 0 ||
                 (uVar25 = *(uint *)(lVar26 + (ulong)(uVar8 & 0x7ff) * 4),
                 0x3fffe < (uVar8 & 0xfffc0000 ^ uVar25))))) ||
               (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
               lVar20 == 0)) break;
            iVar24 = 0;
            uVar18 = 0;
            if ((*(byte *)(lVar20 + 1 + (ulong)(uVar25 & 0x7f) * 4) & 1) != 0) {
              lVar20 = **(long **)(param_1 + 2);
              if ((*(long **)(param_1 + 2))[1] == lVar20) goto code_r0x0b6365e9;
              (**(code **)(*plVar12 + 0x268))(plVar12,lVar20);
              uStack_d8 = func_0x0b3cef70(plVar12);
              uStack_dc = 0;
              uStack_e0 = 0;
              func_0x054420e0(auStack_d0,&uStack_d8,lVar20,&uStack_dc,&uStack_e0);
              plVar9 = (long *)func_0x0b3d3460(plVar12);
              (**(code **)(*plVar9 + 0x28))(plVar9,plVar12,auStack_d0,0);
              bVar5 = *(byte *)(lVar20 + 0x22);
              uStack_fc = (uint)bVar5;
              iStack_100 = 1;
              func_0x049c2cb0(auStack_d0);
              goto code_r0x0b63568a;
            }
          }
          uVar3 = uStack_108;
          iVar6 = iStack_104;
          iVar7 = iStack_100;
          uVar25 = uStack_fc;
          if (((ulong)(((*(long **)(param_1 + 2))[1] - **(long **)(param_1 + 2) >> 3) *
                      -0x79435e50d79435e5) < 2) ||
             ((uVar16 = 1, (char)param_1[5] == '\x01' && ((int)param_1[4] < 2)))) goto LAB_0b6364ac;
          goto code_r0x0b6356d1;
        }
      }
    }
    break;
  case 1:
code_r0x0b6356d1:
    plVar9 = (long *)func_0x0bbfc510(*(long *)(param_1 + 8) + 8);
    lVar20 = (**(code **)(*plVar9 + 0x40))(plVar9,1);
    if ((*(char *)((long)param_1 + 0x19) == '\x01') &&
       (((char)param_1[6] == '\x01' && (*(char *)(lVar20 + 0x22) != '\0')))) {
code_r0x0b634819:
      uStack_108 = 3;
      uVar3 = uStack_108;
      iVar6 = iStack_104;
      iVar7 = iStack_100;
      uVar25 = uStack_fc;
LAB_0b6364ac:
      uStack_fc = uVar25;
      iStack_100 = iVar7;
      iStack_104 = iVar6;
      uStack_108 = uVar3;
      auVar28._4_4_ = iStack_104;
      auVar28._0_4_ = uStack_108;
      auVar28._8_4_ = iStack_100;
      auVar28._12_4_ = uStack_fc;
      return auVar28;
    }
    plVar12 = *(long **)(param_1 + 8);
    lVar20 = plVar12[2];
    uVar8 = *(uint *)(plVar12 + 3);
    plVar13 = (long *)(*(long *)(lVar20 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x40) - *(long *)(lVar20 + 0x38)) >>
                                   3) - 1U & 0x4f6ba419) * 8);
    lVar26 = *(long *)(lVar20 + 0x50);
    plVar9 = plVar13;
    do {
      if (*plVar9 == -1) {
        plVar15 = *(long **)(lVar20 + 0x58);
        plVar9 = plVar15;
        goto code_r0x0b635769;
      }
      lVar19 = *plVar9 * 0x20;
      plVar9 = (long *)(lVar26 + lVar19);
    } while (*(int *)(lVar26 + 8 + lVar19) != 0x4f6ba419);
    plVar15 = *(long **)(lVar20 + 0x58);
code_r0x0b635769:
    if ((plVar9 != plVar15) && (lVar20 = plVar9[2], lVar20 != 0)) {
      uVar10 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if ((uVar10 < (ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3)) &&
         (lVar19 = *(long *)(*(long *)(lVar20 + 8) + uVar10 * 8), lVar19 != 0)) {
        uVar25 = *(uint *)(lVar19 + (ulong)(uVar8 & 0x7ff) * 4);
        if (((uVar25 ^ uVar8 & 0xfffc0000) < 0x3ffff) &&
           (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
           lVar20 != 0)) {
          if (*(char *)(lVar20 + (ulong)(uVar25 & 0x7f) * 4) == '?') {
            lVar20 = **(long **)(param_1 + 2);
            uVar10 = ((*(long **)(param_1 + 2))[1] - lVar20 >> 3) * -0x79435e50d79435e5;
            if (uVar10 < uVar16 || uVar10 - uVar16 == 0) goto code_r0x0b6365e9;
            (**(code **)(*plVar12 + 0x278))(plVar12,lVar20 + uVar16 * 0x98);
            uStack_fc = uVar18 + *(byte *)(lVar20 + 0x22 + uVar16 * 0x98);
            iStack_100 = iVar24 + 1;
code_r0x0b6359b4:
            iVar24 = iVar24 + 1;
          }
          else {
            do {
              lVar20 = *plVar13;
              plVar13 = plVar15;
              if (lVar20 == -1) break;
              lVar20 = lVar20 * 0x20;
              plVar13 = (long *)(lVar26 + lVar20);
            } while (*(int *)(lVar26 + 8 + lVar20) != 0x4f6ba419);
            if ((((plVar13 == plVar15) || (lVar20 = plVar13[2], lVar20 == 0)) ||
                ((ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3) <= uVar10)) ||
               (((lVar26 = *(long *)(*(long *)(lVar20 + 8) + uVar10 * 8), lVar26 == 0 ||
                 (uVar25 = *(uint *)(lVar26 + (ulong)(uVar8 & 0x7ff) * 4),
                 0x3fffe < (uVar8 & 0xfffc0000 ^ uVar25))) ||
                (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
                lVar20 == 0)))) break;
            if ((*(byte *)(lVar20 + 1 + (ulong)(uVar25 & 0x7f) * 4) & 1) != 0) {
              lVar20 = **(long **)(param_1 + 2);
              uVar10 = ((*(long **)(param_1 + 2))[1] - lVar20 >> 3) * -0x79435e50d79435e5;
              if (uVar10 < uVar16 || uVar10 - uVar16 == 0) goto code_r0x0b6365e9;
              lVar20 = lVar20 + uVar16 * 0x98;
              (**(code **)(*plVar12 + 0x278))(plVar12,lVar20);
              uVar11 = func_0x0b3cef70(plVar12);
              func_0x0b636620(auStack_d0,uVar11,lVar20,1,0);
              plVar9 = (long *)(**(code **)(*(long *)plVar12[0x3a] + 0xa48))();
              (**(code **)(*plVar9 + 0x18))(plVar9,auStack_d0);
              uStack_fc = uVar18 + *(byte *)(lVar20 + 0x22);
              iStack_100 = iVar24 + 1;
              func_0x049c2cb0(auStack_d0);
              goto code_r0x0b6359b4;
            }
          }
          uVar25 = uStack_fc;
          uVar3 = uStack_108;
          iVar6 = iStack_104;
          iVar7 = iStack_100;
          if ((char)param_1[5] == '\0') {
            lVar20 = **(long **)(param_1 + 2);
            lVar26 = ((*(long **)(param_1 + 2))[1] - lVar20 >> 3) * -0x79435e50d79435e5;
            uVar8 = param_1[4];
            if ((int)uVar8 < 2 && (int)lVar26 <= iVar24) goto LAB_0b6364ac;
          }
          else {
            uVar8 = param_1[4];
            if ((int)uVar8 < 2) goto LAB_0b6364ac;
            lVar20 = **(long **)(param_1 + 2);
            lVar26 = ((*(long **)(param_1 + 2))[1] - lVar20 >> 3) * -0x79435e50d79435e5;
          }
          uVar10 = (ulong)((int)uVar16 + 1);
          uVar16 = lVar26 - uVar10;
          if (uVar16 != 0xffffffffffffffff) {
            uVar21 = (ulong)(uVar8 - iVar24);
            if ((char)param_1[5] == '\0') {
              uVar21 = uVar16 & 0xffffffff;
            }
            func_0x0b6367e0(&uStack_108,*(undefined8 *)(param_1 + 8),uVar16,lVar20 + uVar10 * 0x98,2
                            ,uVar21);
            uVar3 = uStack_108;
            iVar6 = iStack_104;
            iVar7 = iStack_100;
            uVar25 = uStack_fc;
            goto LAB_0b6364ac;
          }
        }
      }
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    plVar9 = (long *)func_0x0bbfc6d0(*(long *)(param_1 + 8) + 8);
    lVar20 = (**(code **)(*plVar9 + 0x40))(plVar9,uVar8 - 2);
    if (((*(char *)((long)param_1 + 0x19) == '\x01') && ((char)param_1[6] == '\x01')) &&
       (*(char *)(lVar20 + 0x22) != '\0')) goto code_r0x0b634819;
    lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    uVar8 = *(uint *)(*(long *)(param_1 + 8) + 0x18);
    plVar9 = (long *)(*(long *)(lVar20 + 0x38) +
                     (ulong)((int)((ulong)(*(long *)(lVar20 + 0x40) - *(long *)(lVar20 + 0x38)) >> 3
                                  ) - 1U & 0x4f6ba419) * 8);
    do {
      if (*plVar9 == -1) {
        plVar13 = *(long **)(lVar20 + 0x58);
        plVar9 = plVar13;
        goto code_r0x0b634879;
      }
      lVar26 = *plVar9 * 0x20;
      plVar9 = (long *)(*(long *)(lVar20 + 0x50) + lVar26);
    } while (*(int *)(*(long *)(lVar20 + 0x50) + 8 + lVar26) != 0x4f6ba419);
    plVar13 = *(long **)(lVar20 + 0x58);
code_r0x0b634879:
    if ((plVar9 != plVar13) && (lVar20 = plVar9[2], lVar20 != 0)) {
      uVar16 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if (((uVar16 < (ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3)) &&
          ((lVar26 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar26 != 0 &&
           (uVar25 = *(uint *)(lVar26 + (ulong)(uVar8 & 0x7ff) * 4),
           (uVar8 & 0xfffc0000 ^ uVar25) < 0x3ffff)))) &&
         (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)), lVar20 != 0)
         ) {
        if ((*(byte *)(lVar20 + 1 + (ulong)(uVar25 & 0x7f) * 4) & 1) == 0) goto code_r0x0b6364a4;
        lVar20 = **(long **)(param_1 + 2);
        lVar26 = (*(long **)(param_1 + 2))[1];
        if ((lVar26 - lVar20 != -0x98) && (lVar26 == 0 || lVar20 != 0)) {
          func_0x0b6367e0(&uStack_108);
          uVar3 = uStack_108;
          iVar6 = iStack_104;
          iVar7 = iStack_100;
          uVar25 = uStack_fc;
          goto LAB_0b6364ac;
        }
      }
    }
    break;
  case 7:
    plVar13 = *(long **)(param_1 + 8);
    lVar20 = plVar13[2];
    uVar8 = *(uint *)(plVar13 + 3);
    plVar9 = (long *)(*(long *)(lVar20 + 0x38) +
                     (ulong)((int)((ulong)(*(long *)(lVar20 + 0x40) - *(long *)(lVar20 + 0x38)) >> 3
                                  ) - 1U & 0x4f6ba419) * 8);
    do {
      if (*plVar9 == -1) {
        plVar12 = *(long **)(lVar20 + 0x58);
        plVar9 = plVar12;
        goto code_r0x0b634eb0;
      }
      lVar26 = *plVar9 * 0x20;
      plVar9 = (long *)(*(long *)(lVar20 + 0x50) + lVar26);
    } while (*(int *)(*(long *)(lVar20 + 0x50) + 8 + lVar26) != 0x4f6ba419);
    plVar12 = *(long **)(lVar20 + 0x58);
code_r0x0b634eb0:
    if ((plVar9 != plVar12) && (lVar20 = plVar9[2], lVar20 != 0)) {
      uVar16 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if ((uVar16 < (ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3)) &&
         (((lVar26 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar26 != 0 &&
           (uVar25 = *(uint *)(lVar26 + (ulong)(uVar8 & 0x7ff) * 4),
           (uVar8 & 0xfffc0000 ^ uVar25) < 0x3ffff)) &&
          (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)), lVar20 != 0
          )))) {
        if (*(char *)(lVar20 + (ulong)(uVar25 & 0x7f) * 4) == '?') {
          lVar26 = plVar13[0xae];
          iVar6 = (**(code **)(**(long **)(lVar26 + 0xb8) + 0xa8))();
          uVar25 = uStack_fc;
          iVar7 = iStack_100;
          if (8 < *param_1) {
            uVar3 = 1;
            iVar6 = 9;
            goto LAB_0b6364ac;
          }
          iVar24 = 0;
          if ((*(ulong *)(param_1 + 4) >> 0x20 & 1) != 0) {
            iVar24 = (int)*(ulong *)(param_1 + 4) + -1;
          }
          if (iVar6 <= (int)(iVar24 + *param_1)) {
            uVar3 = 2;
            goto LAB_0b6364ac;
          }
          lVar20 = (**(code **)(**(long **)(lVar26 + 0xb8) + 0x40))();
          if (((*(char *)((long)param_1 + 0x19) == '\x01') && ((char)param_1[6] == '\x01')) &&
             (*(char *)(lVar20 + 0x22) != '\0')) goto code_r0x0b634819;
          lVar19 = **(long **)(param_1 + 2);
          lVar22 = (*(long **)(param_1 + 2))[1];
          if (lVar19 == lVar22) {
            bVar5 = (byte)param_1[5];
            iVar7 = 0;
            uVar25 = 0;
            lVar20 = 0;
          }
          else {
            uVar8 = *param_1;
            uVar25 = 0;
            lVar20 = 1;
            while( true ) {
              (**(code **)(**(long **)(lVar26 + 0xb8) + 0x70))
                        (*(long **)(lVar26 + 0xb8),uVar8,lVar19,0);
              (**(code **)(*plVar13 + 0x520))(plVar13,0);
              uVar14 = *param_1;
              uVar8 = uVar14 + 1;
              *param_1 = uVar8;
              uVar25 = *(byte *)(lVar19 + 0x22) + uVar25;
              bVar5 = (byte)param_1[5];
              iVar7 = (int)lVar20;
              if (((bVar5 == 1) && ((int)param_1[4] <= iVar7)) ||
                 ((7 < (int)uVar14 || (lVar19 = lVar19 + 0x98, lVar19 == lVar22)))) break;
              lVar20 = lVar20 + 1;
            }
          }
          if ((bVar5 & 1) == 0) {
            uVar8 = (int)((ulong)((*(long **)(param_1 + 2))[1] - **(long **)(param_1 + 2)) >> 3) *
                    0x286bca1b;
          }
          else {
            uVar8 = param_1[4];
          }
          uVar3 = uStack_108;
          iVar6 = iStack_104;
          if ((int)uVar8 <= iVar7) goto LAB_0b6364ac;
          *param_1 = 0;
          iStack_100 = iVar7;
          uStack_fc = uVar25;
          goto code_r0x0b635aca;
        }
        goto code_r0x0b6364a4;
      }
    }
    break;
  case 8:
code_r0x0b635aca:
    iVar24 = iStack_100;
    plVar13 = *(long **)(param_1 + 8);
    lVar26 = plVar13[2];
    uVar8 = *(uint *)(plVar13 + 3);
    lVar19 = *(long *)(lVar26 + 0x38);
    iVar6 = (int)((ulong)(*(long *)(lVar26 + 0x40) - lVar19) >> 3);
    plVar9 = (long *)(lVar19 + (ulong)(iVar6 - 1U & 0x4f6ba419) * 8);
    lVar22 = *(long *)(lVar26 + 0x50);
    plStack_f8 = (long *)CONCAT44(plStack_f8._4_4_,uStack_fc);
    do {
      if (*plVar9 == -1) {
        plVar12 = *(long **)(lVar26 + 0x58);
        plVar9 = plVar12;
        goto code_r0x0b635b29;
      }
      lVar23 = *plVar9 * 0x20;
      plVar9 = (long *)(lVar22 + lVar23);
    } while (*(int *)(lVar22 + 8 + lVar23) != 0x4f6ba419);
    plVar12 = *(long **)(lVar26 + 0x58);
code_r0x0b635b29:
    if ((plVar9 != plVar12) && (lVar26 = plVar9[2], lVar26 != 0)) {
      uVar16 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if ((uVar16 < (ulong)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8) >> 3)) &&
         (lVar23 = *(long *)(*(long *)(lVar26 + 8) + uVar16 * 8), lVar23 != 0)) {
        uVar25 = *(uint *)(lVar23 + (ulong)(uVar8 & 0x7ff) * 4);
        if (((uVar25 ^ uVar8 & 0xfffc0000) < 0x3ffff) &&
           (lVar26 = *(long *)(*(long *)(lVar26 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
           lVar26 != 0)) {
          cVar4 = *(char *)(lVar26 + (ulong)(uVar25 & 0x7f) * 4);
          plVar9 = (long *)(lVar19 + (ulong)(iVar6 - 1U & 0x1779e2c7) * 8);
          do {
            if (*plVar9 == -1) goto code_r0x0b635c5b;
            lVar26 = *plVar9 * 0x20;
            plVar9 = (long *)(lVar22 + lVar26);
          } while (*(int *)(lVar22 + 8 + lVar26) != 0x1779e2c7);
          if ((((plVar9 == plVar12) || (lVar26 = plVar9[2], lVar26 == 0)) ||
              ((ulong)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8) >> 3) <= uVar16)) ||
             ((lVar19 = *(long *)(*(long *)(lVar26 + 8) + uVar16 * 8), lVar19 == 0 ||
              (uVar25 = *(uint *)(lVar19 + (ulong)(uVar8 & 0x7ff) * 4),
              0x3fffe < (uVar8 & 0xfffc0000 ^ uVar25))))) {
code_r0x0b635c5b:
            lVar26 = 0;
          }
          else {
            lVar26 = (ulong)(uVar25 & 0x7f) * 0x1a0 +
                     *(long *)(*(long *)(lVar26 + 0x50) + (ulong)((uVar25 & 0x3ff80) >> 4));
          }
          if ((cVar4 == '?') || (lVar26 != 0)) {
            iVar7 = iVar24;
            if (cVar4 == '?') {
              plStack_f0 = (long *)plVar13[0xae];
              iStack_e4 = (**(code **)(*(long *)plStack_f0[0x17] + 0xa8))();
              iStack_e4 = iStack_e4 + -9;
              uVar8 = *param_1;
              uVar3 = 1;
              iVar6 = iStack_e4;
              iVar7 = iStack_100;
              uVar25 = uStack_fc;
              if (((int)uVar8 < 0) || (iStack_e4 <= (int)uVar8)) goto LAB_0b6364ac;
              iVar27 = 0;
              if ((*(ulong *)(param_1 + 4) >> 0x20 & 1) != 0) {
                iVar27 = (int)*(ulong *)(param_1 + 4) + -1;
              }
              uVar3 = 2;
              if (iStack_e4 <= (int)(iVar27 + uVar8)) goto LAB_0b6364ac;
              iVar27 = uVar8 + 9;
              lVar26 = (**(code **)(*(long *)plStack_f0[0x17] + 0x40))
                                 ((long *)plStack_f0[0x17],iVar27);
              if (((*(char *)((long)param_1 + 0x19) != '\x01') || ((char)param_1[6] != '\x01')) ||
                 (*(char *)(lVar26 + 0x22) == '\0')) {
                lVar26 = **(long **)(param_1 + 2);
                auVar28 = func_0x0b6367b0(lVar20 * 0x98 + lVar26,
                                          ((*(long **)(param_1 + 2))[1] - lVar26 >> 3) *
                                          -0x79435e50d79435e5 - lVar20);
                lVar20 = auVar28._8_8_;
                uVar3 = uStack_108;
                iVar6 = iStack_104;
                iVar7 = iVar24;
                uVar25 = (uint)plStack_f8;
                if (auVar28._0_8_ != 0) {
                  lVar26 = auVar28._0_8_ * 0x98 + lVar20;
                  uVar16 = (ulong)plStack_f8 & 0xffffffff;
                  do {
                    iVar24 = iVar24 + 1;
                    (**(code **)(*(long *)plStack_f0[0x17] + 0x70))
                              ((long *)plStack_f0[0x17],iVar27,lVar20,0);
                    (**(code **)(*plVar13 + 0x520))(plVar13,0);
                    iVar27 = iVar27 + 1;
                    uVar25 = (uint)*(byte *)(lVar20 + 0x22) + (int)uVar16;
                    uVar16 = (ulong)uVar25;
                    uVar3 = uStack_108;
                    iVar6 = iStack_104;
                    iVar7 = iVar24;
                    if ((char)param_1[5] == '\x01') {
                      if ((int)param_1[4] <= iVar24) break;
                    }
                    else if (iStack_e4 <= iVar27) break;
                    if (lVar20 == lVar26) goto code_r0x0b6365e4;
                    lVar20 = lVar20 + 0x98;
                  } while (lVar20 != lVar26);
                }
                goto LAB_0b6364ac;
              }
            }
            else {
              if (lVar26 == 0) goto code_r0x0b6364a4;
              iVar27 = (int)((ulong)(*(long *)(lVar26 + 0x158) - *(long *)(lVar26 + 0x150)) >> 3) *
                       0x286bca1b;
              uVar8 = *param_1;
              uVar3 = 1;
              iVar6 = iVar27;
              uVar25 = uStack_fc;
              if (((long)(int)uVar8 < 0) || (iVar27 <= (int)uVar8)) goto LAB_0b6364ac;
              iVar17 = 0;
              if ((*(ulong *)(param_1 + 4) >> 0x20 & 1) != 0) {
                iVar17 = (int)*(ulong *)(param_1 + 4) + -1;
              }
              uVar3 = 2;
              if (iVar27 <= (int)(iVar17 + uVar8)) goto LAB_0b6364ac;
              if (((*(char *)((long)param_1 + 0x19) != '\x01') || ((char)param_1[6] != '\x01')) ||
                 (*(char *)(*(long *)(lVar26 + 0x150) + 0x22 + (long)(int)uVar8 * 0x98) == '\0')) {
                lVar19 = **(long **)(param_1 + 2);
                auVar28 = func_0x0b6367b0(lVar20 * 0x98 + lVar19,
                                          ((*(long **)(param_1 + 2))[1] - lVar19 >> 3) *
                                          -0x79435e50d79435e5 - lVar20);
                lVar20 = auVar28._8_8_;
                uVar3 = uStack_108;
                iVar6 = iStack_104;
                uVar25 = (uint)plStack_f8;
                if (auVar28._0_8_ != 0) {
                  uVar8 = *param_1;
                  plStack_f0 = (long *)(lVar26 + 0x10);
                  lVar19 = auVar28._0_8_ * 0x98;
                  uVar25 = (uint)plStack_f8;
                  do {
                    iVar24 = iVar24 + 1;
                    if ((-1 < (int)uVar8) &&
                       ((int)uVar8 <
                        (int)((ulong)(*(long *)(lVar26 + 0x158) - *(long *)(lVar26 + 0x150)) >> 3) *
                        0x286bca1b)) {
                      (**(code **)(*plStack_f0 + 0x70))(plStack_f0,uVar8,lVar20,0);
                      uVar8 = *param_1;
                    }
                    uVar8 = uVar8 + 1;
                    *param_1 = uVar8;
                    uVar25 = uVar25 + *(byte *)(lVar20 + 0x22);
                    uVar3 = uStack_108;
                    iVar6 = iStack_104;
                    iVar7 = iVar24;
                    if ((char)param_1[5] == '\x01') {
                      if ((int)param_1[4] <= iVar24) break;
                    }
                    else if (iVar27 <= (int)uVar8) break;
                    if (lVar19 == 0) goto code_r0x0b6365e4;
                    lVar20 = lVar20 + 0x98;
                    lVar19 = lVar19 + -0x98;
                  } while (lVar19 != 0);
                }
                goto LAB_0b6364ac;
              }
            }
            goto code_r0x0b634819;
          }
code_r0x0b6364a4:
          uStack_108 = 0;
          uVar3 = uStack_108;
          iVar6 = iStack_104;
          iVar7 = iStack_100;
          uVar25 = uStack_fc;
          goto LAB_0b6364ac;
        }
      }
    }
    break;
  case 9:
    lVar20 = *(long *)(param_1 + 8);
    lVar26 = *(long *)(lVar20 + 0x10);
    uVar8 = *(uint *)(lVar20 + 0x18);
    plVar9 = (long *)(*(long *)(lVar26 + 0x38) +
                     (ulong)((int)((ulong)(*(long *)(lVar26 + 0x40) - *(long *)(lVar26 + 0x38)) >> 3
                                  ) - 1U & 0x4f6ba419) * 8);
    do {
      if (*plVar9 == -1) {
        plVar13 = *(long **)(lVar26 + 0x58);
        plVar9 = plVar13;
        goto code_r0x0b634d2c;
      }
      lVar19 = *plVar9 * 0x20;
      plVar9 = (long *)(*(long *)(lVar26 + 0x50) + lVar19);
    } while (*(int *)(*(long *)(lVar26 + 0x50) + 8 + lVar19) != 0x4f6ba419);
    plVar13 = *(long **)(lVar26 + 0x58);
code_r0x0b634d2c:
    if ((plVar9 != plVar13) && (lVar26 = plVar9[2], lVar26 != 0)) {
      uVar16 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if ((uVar16 < (ulong)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8) >> 3)) &&
         (((lVar19 = *(long *)(*(long *)(lVar26 + 8) + uVar16 * 8), lVar19 != 0 &&
           (uVar14 = *(uint *)(lVar19 + (ulong)(uVar8 & 0x7ff) * 4),
           (uVar8 & 0xfffc0000 ^ uVar14) < 0x3ffff)) &&
          (lVar26 = *(long *)(*(long *)(lVar26 + 0x50) + (ulong)(uVar14 >> 4 & 0x3ff8)), lVar26 != 0
          )))) {
        if (*(char *)(lVar26 + (ulong)(uVar14 & 0x7f) * 4) != '?') goto code_r0x0b6364a4;
        plVar9 = *(long **)(lVar20 + 0x7b8);
        uVar3 = uStack_108;
        if (plVar9 == (long *)0x0) goto LAB_0b6364ac;
        iVar24 = (**(code **)(*plVar9 + 0xa8))(plVar9);
        uVar8 = *param_1;
        uVar3 = 1;
        iVar6 = iVar24;
        iVar7 = iStack_100;
        uVar25 = uStack_fc;
        if (((int)uVar8 < 0) || (iVar24 <= (int)uVar8)) goto LAB_0b6364ac;
        iVar27 = 0;
        if ((*(ulong *)(param_1 + 4) >> 0x20 & 1) != 0) {
          iVar27 = (int)*(ulong *)(param_1 + 4) + -1;
        }
        uVar3 = 2;
        if (iVar24 <= (int)(iVar27 + uVar8)) goto LAB_0b6364ac;
        lVar20 = (**(code **)(*plVar9 + 0x40))(plVar9);
        if (((*(char *)((long)param_1 + 0x19) != '\x01') || ((char)param_1[6] != '\x01')) ||
           (*(char *)(lVar20 + 0x22) == '\0')) {
          lVar20 = **(long **)(param_1 + 2);
          lVar26 = (*(long **)(param_1 + 2))[1];
          if (lVar20 != lVar26) {
            uVar8 = *param_1;
            uVar25 = 0;
            iVar7 = 1;
            do {
              (**(code **)(*plVar9 + 0x68))(plVar9,uVar8,lVar20);
              uVar8 = *param_1 + 1;
              *param_1 = uVar8;
              uVar25 = *(byte *)(lVar20 + 0x22) + uVar25;
              uVar3 = uStack_108;
              iVar6 = iStack_104;
              if ((char)param_1[5] == '\x01') {
                if ((int)param_1[4] <= iVar7) goto LAB_0b6364ac;
              }
              else if (iVar24 <= (int)uVar8) goto LAB_0b6364ac;
              lVar20 = lVar20 + 0x98;
              if (lVar20 == lVar26) goto LAB_0b6364ac;
              iVar7 = iVar7 + 1;
            } while( true );
          }
          uVar3 = uStack_108;
          iVar6 = iStack_104;
          iVar7 = 0;
          uVar25 = 0;
          goto LAB_0b6364ac;
        }
        goto code_r0x0b634819;
      }
    }
    break;
  case 10:
    lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    uVar8 = *(uint *)(*(long *)(param_1 + 8) + 0x18);
    lVar26 = *(long *)(lVar20 + 0x38);
    iVar6 = (int)((ulong)(*(long *)(lVar20 + 0x40) - lVar26) >> 3);
    plVar13 = (long *)(lVar26 + (ulong)(iVar6 - 1U & 0x4f6ba419) * 8);
    lVar19 = *(long *)(lVar20 + 0x50);
    plVar9 = plVar13;
    do {
      if (*plVar9 == -1) {
        plVar12 = *(long **)(lVar20 + 0x58);
        plVar9 = plVar12;
        goto code_r0x0b634b6f;
      }
      lVar22 = *plVar9 * 0x20;
      plVar9 = (long *)(lVar19 + lVar22);
    } while (*(int *)(lVar19 + 8 + lVar22) != 0x4f6ba419);
    plVar12 = *(long **)(lVar20 + 0x58);
code_r0x0b634b6f:
    if ((plVar9 != plVar12) && (lVar20 = plVar9[2], lVar20 != 0)) {
      uVar16 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if ((uVar16 < (ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3)) &&
         (lVar22 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar22 != 0)) {
        uVar14 = uVar8 & 0x7ff;
        uVar8 = uVar8 & 0xfffc0000;
        uVar25 = *(uint *)(lVar22 + (ulong)uVar14 * 4);
        if (((uVar25 ^ uVar8) < 0x3ffff) &&
           (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
           lVar20 != 0)) {
          if ((~*(uint *)(lVar20 + (ulong)(uVar25 & 0x7f) * 4) & 0x205300) != 0) {
            do {
              lVar20 = *plVar13;
              plVar13 = plVar12;
              if (lVar20 == -1) break;
              lVar20 = lVar20 * 0x20;
              plVar13 = (long *)(lVar19 + lVar20);
            } while (*(int *)(lVar19 + 8 + lVar20) != 0x4f6ba419);
            if (((((plVar13 == plVar12) || (lVar20 = plVar13[2], lVar20 == 0)) ||
                 ((ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3) <= uVar16)) ||
                ((lVar22 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar22 == 0 ||
                 (uVar25 = *(uint *)(lVar22 + (ulong)uVar14 * 4), 0x3fffe < (uVar25 ^ uVar8))))) ||
               (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
               lVar20 == 0)) break;
            if (*(char *)(lVar20 + (ulong)(uVar25 & 0x7f) * 4) != -0x76) goto code_r0x0b6364a4;
          }
          plVar9 = (long *)(lVar26 + (ulong)(iVar6 - 1U & 0x1779e2c7) * 8);
          do {
            lVar20 = *plVar9;
            plVar9 = plVar12;
            if (lVar20 == -1) break;
            lVar20 = lVar20 * 0x20;
            plVar9 = (long *)(lVar19 + lVar20);
          } while (*(int *)(lVar19 + 8 + lVar20) != 0x1779e2c7);
          if (((plVar9 == plVar12) || (lVar20 = plVar9[2], lVar20 == 0)) ||
             (((ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3) <= uVar16 ||
              (((lVar26 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar26 == 0 ||
                (uVar25 = *(uint *)(lVar26 + (ulong)uVar14 * 4), 0x3fffe < (uVar8 ^ uVar25))) ||
               (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)((uVar25 & 0x3ff80) >> 4)),
               lVar20 == 0)))))) goto code_r0x0b6364a4;
          lVar20 = lVar20 + (ulong)(uVar25 & 0x7f) * 0x1a0;
          if (*(char *)((long)param_1 + 0x19) == '\x01') {
            lVar26 = 0xf6e6140;
            if (0 < (int)((ulong)(*(long *)(lVar20 + 0x158) - *(long *)(lVar20 + 0x150)) >> 3) *
                    0x286bca1b) {
              lVar26 = *(long *)(lVar20 + 0x150);
            }
            if (((char)param_1[6] == '\x01') && (*(char *)(lVar26 + 0x22) != '\0'))
            goto code_r0x0b634819;
          }
          lVar26 = **(long **)(param_1 + 2);
          if ((*(long **)(param_1 + 2))[1] == lVar26) goto code_r0x0b6365e9;
          cVar4 = func_0x0c452f70(lVar26,0xf6e3940,0);
          plVar9 = *(long **)(param_1 + 2);
          if (cVar4 == '\0') {
            lVar26 = *plVar9;
            lVar19 = plVar9[1];
            uVar14 = 0;
            iVar24 = 0;
          }
          else {
            *param_1 = 0;
            lVar26 = *plVar9;
            lVar19 = plVar9[1];
            if (lVar19 == lVar26) goto code_r0x0b6365e9;
            if (0 < (int)((ulong)(*(long *)(lVar20 + 0x158) - *(long *)(lVar20 + 0x150)) >> 3) *
                    0x286bca1b) {
              (**(code **)(*(long *)(lVar20 + 0x10) + 0x70))(lVar20 + 0x10,0,lVar26,0);
              lVar26 = **(long **)(param_1 + 2);
              lVar19 = (*(long **)(param_1 + 2))[1];
            }
            if (lVar19 == lVar26) goto code_r0x0b6365e9;
            uVar14 = (uint)*(byte *)(lVar26 + 0x22);
            uStack_fc = (uint)*(byte *)(lVar26 + 0x22);
            iStack_100 = 1;
            iVar24 = 1;
          }
          uVar3 = uStack_108;
          iVar6 = iStack_104;
          iVar7 = iStack_100;
          uVar25 = uStack_fc;
          if (((int)((ulong)(lVar19 - lVar26) >> 3) * 0x286bca1b < 2) ||
             (((char)param_1[5] == '\x01' && ((int)param_1[4] < 2)))) goto LAB_0b6364ac;
          cVar4 = func_0x0b3d0500(*(undefined8 *)(param_1 + 8),0x205317);
          uVar10 = 1;
          if ((cVar4 == '\0') &&
             (cVar4 = func_0x0b3d0500(*(undefined8 *)(param_1 + 8),0x131d), uVar3 = uStack_108,
             iVar6 = iStack_104, iVar7 = iStack_100, uVar25 = uStack_fc, cVar4 == '\0'))
          goto LAB_0b6364ac;
          goto code_r0x0b636137;
        }
      }
    }
    break;
  case 0xb:
code_r0x0b636137:
    lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    uVar8 = *(uint *)(*(long *)(param_1 + 8) + 0x18);
    lVar26 = *(long *)(lVar20 + 0x38);
    iVar6 = (int)((ulong)(*(long *)(lVar20 + 0x40) - lVar26) >> 3);
    plVar9 = (long *)(lVar26 + (ulong)(iVar6 - 1U & 0x4f6ba419) * 8);
    lVar19 = *(long *)(lVar20 + 0x50);
    plVar13 = plVar9;
    do {
      if (*plVar13 == -1) {
        plVar13 = *(long **)(lVar20 + 0x58);
        plVar12 = plVar13;
        goto code_r0x0b636199;
      }
      lVar22 = *plVar13 * 0x20;
      plVar13 = (long *)(lVar19 + lVar22);
    } while (*(int *)(lVar19 + 8 + lVar22) != 0x4f6ba419);
    plVar12 = *(long **)(lVar20 + 0x58);
code_r0x0b636199:
    if ((plVar13 != plVar12) && (lVar20 = plVar13[2], lVar20 != 0)) {
      uVar16 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if ((uVar16 < (ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3)) &&
         (lVar22 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar22 != 0)) {
        uVar18 = uVar8 & 0x7ff;
        uVar8 = uVar8 & 0xfffc0000;
        uVar25 = *(uint *)(lVar22 + (ulong)uVar18 * 4);
        if (((uVar25 ^ uVar8) < 0x3ffff) &&
           (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
           lVar20 != 0)) {
          cVar4 = *(char *)(lVar20 + (ulong)(uVar25 & 0x7f) * 4);
          if (cVar4 != '\x17') {
            do {
              lVar20 = *plVar9;
              plVar9 = plVar12;
              if (lVar20 == -1) break;
              lVar20 = lVar20 * 0x20;
              plVar9 = (long *)(lVar19 + lVar20);
            } while (*(int *)(lVar19 + 8 + lVar20) != 0x4f6ba419);
            if ((((plVar9 == plVar12) || (lVar20 = plVar9[2], lVar20 == 0)) ||
                ((ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3) <= uVar16)) ||
               (((lVar22 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar22 == 0 ||
                 (uVar25 = *(uint *)(lVar22 + (ulong)uVar18 * 4), 0x3fffe < (uVar25 ^ uVar8))) ||
                (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
                lVar20 == 0)))) break;
            if (*(char *)(lVar20 + (ulong)(uVar25 & 0x7f) * 4) != '\x1d') goto code_r0x0b6364a4;
          }
          plVar9 = (long *)(lVar26 + (ulong)(iVar6 - 1U & 0x1779e2c7) * 8);
          do {
            lVar20 = *plVar9;
            plVar9 = plVar12;
            if (lVar20 == -1) break;
            lVar20 = lVar20 * 0x20;
            plVar9 = (long *)(lVar19 + lVar20);
          } while (*(int *)(lVar19 + 8 + lVar20) != 0x1779e2c7);
          if (((plVar9 == plVar12) || (lVar20 = plVar9[2], lVar20 == 0)) ||
             (((ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3) <= uVar16 ||
              (((lVar26 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar26 == 0 ||
                (uVar25 = *(uint *)(lVar26 + (ulong)uVar18 * 4), 0x3fffe < (uVar8 ^ uVar25))) ||
               (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)((uVar25 & 0x3ff80) >> 4)),
               lVar20 == 0)))))) goto code_r0x0b6364a4;
          lVar20 = lVar20 + (ulong)(uVar25 & 0x7f) * 0x1a0;
          uVar8 = (uint)(cVar4 == '\x17');
          if (*(char *)((long)param_1 + 0x19) == '\x01') {
            lVar26 = 0xf6e6140;
            if ((int)uVar8 <
                (int)((ulong)(*(long *)(lVar20 + 0x158) - *(long *)(lVar20 + 0x150)) >> 3) *
                0x286bca1b) {
              lVar26 = (ulong)(cVar4 == '\x17') * 0x98 + *(long *)(lVar20 + 0x150);
            }
            if (((char)param_1[6] == '\x01') && (*(char *)(lVar26 + 0x22) != '\0'))
            goto code_r0x0b634819;
          }
          if (cVar4 == '\x17') {
            lVar26 = **(long **)(param_1 + 2);
            if ((ulong)(((*(long **)(param_1 + 2))[1] - lVar26 >> 3) * -0x79435e50d79435e5) <=
                uVar10) goto code_r0x0b6365e9;
            cVar4 = func_0x0c45c220(lVar26 + uVar10 * 0x98);
            if (cVar4 == '\0') goto code_r0x0b6364c8;
            lVar26 = **(long **)(param_1 + 2);
            if ((ulong)(((*(long **)(param_1 + 2))[1] - lVar26 >> 3) * -0x79435e50d79435e5) <=
                uVar10) goto code_r0x0b6365e9;
            FUN_0c451750(auStack_d0,lVar26 + uVar10 * 0x98);
            iVar6 = (int)((ulong)(*(long *)(lVar20 + 0x158) - *(long *)(lVar20 + 0x150)) >> 3) *
                    0x286bca1b;
            if (1 < iVar6) {
              (**(code **)(*(long *)(lVar20 + 0x10) + 0x70))(lVar20 + 0x10,1,auStack_d0,0);
            }
          }
          else {
code_r0x0b6364c8:
            lVar26 = **(long **)(param_1 + 2);
            if ((ulong)(((*(long **)(param_1 + 2))[1] - lVar26 >> 3) * -0x79435e50d79435e5) <=
                uVar10) goto code_r0x0b6365e9;
            plVar9 = *(long **)(lVar26 + 8 + uVar10 * 0x98);
            uVar3 = uStack_108;
            iVar6 = iStack_104;
            iVar7 = iStack_100;
            uVar25 = uStack_fc;
            if (((plVar9 == (long *)0x0) || (lVar26 = *plVar9, lVar26 == 0)) ||
               (plStack_f8 = *(long **)(lVar26 + 0x138), plStack_f8 == (long *)0x0))
            goto LAB_0b6364ac;
            func_0x04a878b0(auStack_d0,0xf714fb0);
            cVar4 = func_0x0c6ccd60(plStack_f8,auStack_d0);
            uVar3 = uStack_108;
            iVar6 = iStack_104;
            iVar7 = iStack_100;
            uVar25 = uStack_fc;
            if (cVar4 == '\0') goto LAB_0b6364ac;
            lVar26 = **(long **)(param_1 + 2);
            if ((ulong)(((*(long **)(param_1 + 2))[1] - lVar26 >> 3) * -0x79435e50d79435e5) <=
                uVar10) goto code_r0x0b6365e9;
            FUN_0c451750(auStack_d0,lVar26 + uVar10 * 0x98);
            iVar6 = (int)((ulong)(*(long *)(lVar20 + 0x158) - *(long *)(lVar20 + 0x150)) >> 3) *
                    0x286bca1b;
            if ((int)uVar8 < iVar6) {
              (**(code **)(*(long *)(lVar20 + 0x10) + 0x70))(lVar20 + 0x10,uVar8,auStack_d0,0);
            }
          }
          uStack_fc = (uint)bStack_ae;
          if (iVar6 <= (int)uVar8) {
            uStack_fc = 0;
          }
          uStack_fc = uStack_fc + uVar14;
          iStack_100 = iVar24 + 1;
          FUN_049c2320(auStack_d0);
          uVar3 = uStack_108;
          iVar6 = iStack_104;
          iVar7 = iStack_100;
          uVar25 = uStack_fc;
          goto LAB_0b6364ac;
        }
      }
    }
    break;
  case 0xc:
    lVar20 = *(long *)(param_1 + 8);
    lVar26 = *(long *)(lVar20 + 0x10);
    uVar8 = *(uint *)(lVar20 + 0x18);
    lVar19 = *(long *)(lVar26 + 0x38);
    iVar6 = (int)((ulong)(*(long *)(lVar26 + 0x40) - lVar19) >> 3);
    plVar13 = (long *)(lVar19 + (ulong)(iVar6 - 1U & 0x4f6ba419) * 8);
    lVar22 = *(long *)(lVar26 + 0x50);
    plVar9 = plVar13;
    do {
      if (*plVar9 == -1) {
        plVar9 = *(long **)(lVar26 + 0x58);
        plVar12 = plVar9;
        goto code_r0x0b634c4c;
      }
      lVar23 = *plVar9 * 0x20;
      plVar9 = (long *)(lVar22 + lVar23);
    } while (*(int *)(lVar22 + 8 + lVar23) != 0x4f6ba419);
    plVar12 = *(long **)(lVar26 + 0x58);
code_r0x0b634c4c:
    if ((plVar9 != plVar12) && (lVar23 = plVar9[2], lVar23 != 0)) {
      uVar16 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
      if ((uVar16 < (ulong)(*(long *)(lVar23 + 0x10) - *(long *)(lVar23 + 8) >> 3)) &&
         (lVar1 = *(long *)(*(long *)(lVar23 + 8) + uVar16 * 8), lVar1 != 0)) {
        uVar25 = *(uint *)(lVar1 + (ulong)(uVar8 & 0x7ff) * 4);
        if (((uVar25 ^ uVar8 & 0xfffc0000) < 0x3ffff) &&
           (lVar23 = *(long *)(*(long *)(lVar23 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
           lVar23 != 0)) {
          if (*(char *)(lVar23 + (ulong)(uVar25 & 0x7f) * 4) != '\x18') {
            do {
              lVar23 = *plVar13;
              plVar13 = plVar12;
              if (lVar23 == -1) break;
              lVar23 = lVar23 * 0x20;
              plVar13 = (long *)(lVar22 + lVar23);
            } while (*(int *)(lVar22 + 8 + lVar23) != 0x4f6ba419);
            if ((((plVar13 == plVar12) || (lVar23 = plVar13[2], lVar23 == 0)) ||
                ((ulong)(*(long *)(lVar23 + 0x10) - *(long *)(lVar23 + 8) >> 3) <= uVar16)) ||
               (((lVar1 = *(long *)(*(long *)(lVar23 + 8) + uVar16 * 8), lVar1 == 0 ||
                 (uVar25 = *(uint *)(lVar1 + (ulong)(uVar8 & 0x7ff) * 4),
                 0x3fffe < (uVar8 & 0xfffc0000 ^ uVar25))) ||
                (lVar23 = *(long *)(*(long *)(lVar23 + 0x50) + (ulong)(uVar25 >> 4 & 0x3ff8)),
                lVar23 == 0)))) break;
            if (*(char *)(lVar23 + (ulong)(uVar25 & 0x7f) * 4) != '\x19') {
              cVar4 = func_0x0b3d0500(lVar20,0x131d);
              if (cVar4 == '\0') goto code_r0x0b6364a4;
              lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x10);
              uVar8 = *(uint *)(*(long *)(param_1 + 8) + 0x18);
              lVar19 = *(long *)(lVar26 + 0x38);
              lVar22 = *(long *)(lVar26 + 0x50);
              iVar6 = (int)((ulong)(*(long *)(lVar26 + 0x40) - lVar19) >> 3);
            }
          }
          plVar9 = (long *)(lVar19 + (ulong)(iVar6 - 1U & 0x1779e2c7) * 8);
          do {
            if (*plVar9 == -1) goto code_r0x0b6364a4;
            lVar20 = *plVar9 * 0x20;
            plVar9 = (long *)(lVar22 + lVar20);
          } while (*(int *)(lVar22 + 8 + lVar20) != 0x1779e2c7);
          if ((plVar9 != *(long **)(lVar26 + 0x58)) && (lVar20 = plVar9[2], lVar20 != 0)) {
            uVar16 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
            if ((uVar16 < (ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3)) &&
               (((lVar26 = *(long *)(*(long *)(lVar20 + 8) + uVar16 * 8), lVar26 != 0 &&
                 (uVar25 = *(uint *)(lVar26 + (ulong)(uVar8 & 0x7ff) * 4),
                 (uVar8 & 0xfffc0000 ^ uVar25) < 0x3ffff)) &&
                (lVar20 = *(long *)(*(long *)(lVar20 + 0x50) + (ulong)((uVar25 & 0x3ff80) >> 4)),
                lVar20 != 0)))) {
              lVar20 = lVar20 + (ulong)(uVar25 & 0x7f) * 0x1a0;
              iVar24 = (int)((ulong)(*(long *)(lVar20 + 0x158) - *(long *)(lVar20 + 0x150)) >> 3) *
                       0x286bca1b;
              iVar6 = func_0x0b3e53e0();
              if ((char)param_1[0xb] == '\x01') {
                iVar7 = func_0x0b3e54d0(*(undefined8 *)(param_1 + 8));
                iVar24 = iVar24 - iVar6;
                if (iVar7 < iVar24) {
                  iVar24 = iVar7;
                }
              }
              else {
                iVar24 = iVar24 + -1;
              }
              uVar8 = *param_1;
              uVar16 = (ulong)(int)uVar8;
              uVar3 = 1;
              iVar6 = iVar24;
              iVar7 = iStack_100;
              uVar25 = uStack_fc;
              if (((long)uVar16 < 0) || (iVar24 <= (int)uVar8)) goto LAB_0b6364ac;
              uVar10 = *(ulong *)(param_1 + 4);
              iVar27 = 0;
              if ((uVar10 >> 0x20 & 1) != 0) {
                iVar27 = (int)uVar10 + -1;
              }
              uVar3 = 2;
              if (iVar24 <= (int)(iVar27 + uVar8)) goto LAB_0b6364ac;
              if (*(char *)((long)param_1 + 0x19) == '\x01') {
                lVar26 = 0xf6e6140;
                if ((int)uVar8 <
                    (int)((ulong)(*(long *)(lVar20 + 0x158) - *(long *)(lVar20 + 0x150)) >> 3) *
                    0x286bca1b) {
                  lVar26 = uVar16 * 0x98 + *(long *)(lVar20 + 0x150);
                }
                if (((char)param_1[6] == '\x01') && (*(char *)(lVar26 + 0x22) != '\0'))
                goto code_r0x0b634819;
              }
              lVar26 = **(long **)(param_1 + 2);
              lVar19 = (*(long **)(param_1 + 2))[1];
              if (lVar26 != lVar19) {
                uVar10 = uVar10 >> 0x20;
                plStack_f8 = (long *)(lVar20 + 0x10);
                uVar25 = 0;
                iVar7 = 1;
                if ((int)uVar8 < 0) goto code_r0x0b636069;
                do {
                  if ((int)((ulong)(*(long *)(lVar20 + 0x158) - *(long *)(lVar20 + 0x150)) >> 3) *
                      0x286bca1b <= (int)uVar16) goto code_r0x0b636069;
                  (**(code **)(*plStack_f8 + 0x70))(plStack_f8,uVar16,lVar26,0);
                  uVar14 = (uint)*(byte *)(lVar26 + 0x22);
                  uVar8 = *param_1;
                  uVar10 = (ulong)(byte)param_1[5];
                  while( true ) {
                    uVar25 = uVar25 + uVar14;
                    uVar14 = uVar8 + 1;
                    uVar16 = (ulong)uVar14;
                    *param_1 = uVar14;
                    uVar3 = uStack_108;
                    iVar6 = iStack_104;
                    if ((uVar10 & 1) == 0) {
                      if (iVar24 <= (int)uVar8) goto LAB_0b6364ac;
                    }
                    else if ((int)param_1[4] <= iVar7) goto LAB_0b6364ac;
                    lVar26 = lVar26 + 0x98;
                    if (lVar26 == lVar19) goto LAB_0b6364ac;
                    iVar7 = iVar7 + 1;
                    if (-1 < (int)uVar14) break;
code_r0x0b636069:
                    uVar8 = (uint)uVar16;
                    uVar14 = 0;
                  }
                } while( true );
              }
              uVar3 = uStack_108;
              iVar6 = iStack_104;
              iVar7 = 0;
              uVar25 = 0;
              goto LAB_0b6364ac;
            }
          }
          goto code_r0x0b6364a4;
        }
      }
    }
    break;
  default:
    uStack_108 = 4;
    uVar3 = uStack_108;
    goto LAB_0b6364ac;
  }
code_r0x0b6365e4:
  func_0x04890760();
code_r0x0b6365e9:
  uVar11 = func_0x05a95f60();
  FUN_049c2320(auStack_d0);
  uVar11 = _Unwind_Resume(uVar11);
  func_0x049c2cb0(auStack_d0);
  _Unwind_Resume(uVar11);
  pcVar2 = (code *)swi(3);
  auVar28 = (*pcVar2)();
  return auVar28;
}


```
