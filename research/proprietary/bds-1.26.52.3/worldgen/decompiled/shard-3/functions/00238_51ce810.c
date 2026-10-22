/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52ce810 (ELF vaddr 0x51ce810)
 * Label: callee-of:0x517cd10
 * Body:  [[052ce810, 052ce95a] [052ce960, 052ceb5a] [052ceb60, 052cebbe] [052cebc0, 052cec3b] [052cec40, 052ced4d] [052ced50, 052cef42] [052cef50, 052cef60] [052cef70, 052cf341] [052cf350, 052d081e]]
 * Ghidra: FUN_052ce810
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_052ce810(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uStack_950;
  int iStack_948;
  long *plStack_940;
  undefined8 uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  undefined8 *puStack_900;
  ulong uStack_8f8;
  long lStack_8f0;
  ulong uStack_8e8;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  int iStack_8d4;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  long lStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  long lStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  undefined8 *puStack_860;
  ulong uStack_858;
  long lStack_850;
  ulong uStack_848;
  int iStack_83c;
  undefined8 uStack_838;
  undefined8 uStack_830;
  uint auStack_828 [33];
  undefined1 auStack_7a2 [1906];
  
  iVar19 = *(int *)((long)param_3 + 4);
  lStack_8f0 = param_1;
  sVar3 = (**(code **)(*param_2 + 0x110))(param_2);
  if (sVar3 + 4 < iVar19) {
    iVar19 = *(int *)(param_3 + 1);
    uStack_830._0_4_ = (int)*param_3 + -8;
    uStack_830._4_4_ = (int)((ulong)*param_3 >> 0x20);
    iVar20 = uStack_830._4_4_;
    auStack_828[0] = iVar19 - 8U;
    sVar3 = (**(code **)(*param_2 + 0x110))(param_2);
    uVar11 = iVar19 - 8U;
    if (sVar3 < iVar20) {
      do {
        lVar4 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_830);
        iVar20 = uStack_830._4_4_;
        uVar11 = auStack_828[0];
        if ((*(long *)(*(long *)(lVar4 + 0x68) + 200) != _DAT_0f6eaec0) || (uStack_830._4_4_ < 1))
        break;
        iVar19 = uStack_830._4_4_ + -1;
        uStack_830._4_4_ = iVar19;
        sVar3 = (**(code **)(*param_2 + 0x110))(param_2);
        iVar20 = uStack_830._4_4_;
        uVar11 = auStack_828[0];
      } while (sVar3 < iVar19);
    }
    uStack_830 = CONCAT44(iVar20 + -4,(int)uStack_830);
    uStack_888 = uStack_830;
    func_0x0eee2dd0(&uStack_830,0,0x800);
    iVar19 = (**(code **)(*param_4 + 0x18))(param_4,4);
    if (-4 < iVar19) {
      iVar20 = iVar19 + 3;
      if (iVar19 + 3 < 1) {
        iVar20 = 0;
      }
      iVar19 = 0;
      do {
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        plStack_940._0_4_ = fVar23 * _DAT_011985dc + _DAT_01198af0;
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        uStack_8e8._0_4_ = fVar23 * _DAT_011987f8 + _DAT_01198724;
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        uStack_908 = CONCAT44(uStack_908._4_4_,fVar23 * _DAT_011985dc + _DAT_01198af0);
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        fVar24 = _DAT_01198634 - plStack_940._0_4_;
        plStack_940._0_4_ = plStack_940._0_4_ * _DAT_011986e0;
        puStack_900 = (undefined8 *)
                      CONCAT44(puStack_900._4_4_,
                               (fVar24 + _DAT_01198458) * fVar23 + _DAT_011983f0 + plStack_940._0_4_
                              );
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        fVar24 = _DAT_01198494 - (float)uStack_8e8;
        uStack_8e8._0_4_ = (float)uStack_8e8 * _DAT_011986e0;
        uStack_8c0 = CONCAT44(uStack_8c0._4_4_,
                              (fVar24 + _DAT_01198360) * fVar23 + _DAT_01198724 + (float)uStack_8e8)
        ;
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        fVar24 = (_DAT_011983f0 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar25 = (_DAT_01198724 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar29 = (_DAT_01198af0 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar26 = (_DAT_011987f8 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar27 = (_DAT_01198988 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar28 = (_DAT_011985dc - (float)uStack_8c0) / (float)uStack_8e8;
        fVar24 = fVar24 * fVar24;
        uStack_8e8 = CONCAT44(uStack_8e8._4_4_,fVar24);
        lVar4 = 1;
        puVar13 = auStack_7a2;
        do {
          fVar30 = ((float)(int)lVar4 - puStack_900._0_4_) / plStack_940._0_4_;
          fVar30 = fVar30 * fVar30;
          lVar15 = 0;
          do {
            fVar31 = ((float)((int)lVar15 + 1) -
                     (((_DAT_01198634 - (float)uStack_908) + _DAT_01198458) * fVar23 + _DAT_011983f0
                     + (float)uStack_908 * _DAT_011986e0)) / ((float)uStack_908 * _DAT_011986e0);
            fVar31 = fVar31 * fVar31;
            if (fVar31 + fVar30 + fVar24 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -5] = 1;
            }
            if (fVar31 + fVar30 + fVar25 * fVar25 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -4] = 1;
            }
            if (fVar31 + fVar30 + fVar29 * fVar29 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -3] = 1;
            }
            if (fVar31 + fVar30 + fVar26 * fVar26 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -2] = 1;
            }
            if (fVar31 + fVar30 + fVar27 * fVar27 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -1] = 1;
            }
            if (fVar31 + fVar30 + fVar28 * fVar28 < _DAT_011983f0) {
              puVar13[lVar15 * 8] = 1;
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 != 0xe);
          lVar4 = lVar4 + 1;
          puVar13 = puVar13 + 0x80;
        } while (lVar4 != 0xf);
        bVar22 = iVar19 != iVar20;
        iVar19 = iVar19 + 1;
      } while (bVar22);
    }
    plStack_940 = param_2;
    uStack_910 = FUN_0cc41df0(0xf6ff9e0,lStack_8f0 + 0x20,1);
    uStack_8e8 = uStack_888 >> 0x20;
    uStack_848 = uStack_888 & 0xffffffff00000000;
    lVar4 = 0;
    uStack_8c8 = (ulong)uVar11;
    do {
      uStack_8b8 = lVar4 << 7;
      uStack_8f8 = lVar4 * 0x10 + 0x10;
      uStack_908 = (ulong)(uint)((int)uStack_888 + (int)lVar4);
      uStack_8d0 = lVar4 * 0x10 + 0x1ffffff0;
      uStack_898 = uStack_908 | uStack_848;
      lVar15 = 0;
      do {
        plVar9 = plStack_940;
        uVar10 = uStack_8b8 + lVar15 * 8;
        uVar21 = uStack_8f8 + lVar15;
        lStack_8a8 = uVar21 * 8;
        uVar11 = ((int)uStack_8d0 + (int)lVar15) * 8;
        uStack_8c0 = (ulong)uVar11;
        lVar5 = uStack_8b8 + lVar15 * 8;
        lStack_890 = lVar5 + 8;
        puStack_900 = (undefined8 *)(uStack_8c8 + lVar15);
        uVar12 = (int)uVar10 - 8U & 0xfffffff8;
        uStack_8b0 = (ulong)uVar12;
        if (*(char *)((long)auStack_828 + (uVar10 - 8)) == '\0') {
          if (lVar4 == 0xf) {
LAB_052cee08:
            if (0x7ff < uVar11) goto LAB_052d0819;
            if (*(char *)((long)auStack_828 + (uStack_8c0 - 8)) == '\0') {
LAB_052cee2b:
              if (lVar15 == 0xf) {
LAB_052cee55:
                if (0x7ff < uVar12) goto LAB_052d0819;
                if (*(char *)((long)auStack_828 + (uStack_8b0 - 8)) == '\0') {
LAB_052cee78:
                  if (*(char *)((long)auStack_828 + (uVar10 - 7)) != '\x01') goto LAB_052cef59;
                }
              }
              else {
                if (0x7f7 < uVar10) goto LAB_052d0819;
                if (*(char *)((long)auStack_828 + lVar5) == '\0') {
                  if (lVar15 != 0) goto LAB_052cee55;
                  goto LAB_052cee78;
                }
              }
            }
          }
          else {
            if (0xff < uVar21) goto LAB_052d0819;
            if ((char)auStack_828[uVar21 * 2 + -2] == '\0') {
              if (lVar4 != 0) goto LAB_052cee08;
              goto LAB_052cee2b;
            }
          }
          uStack_938 = uStack_898;
          uStack_930 = CONCAT44(uStack_930._4_4_,(int)puStack_900);
          lVar5 = (**(code **)(*plStack_940 + 0x60))(plStack_940,&uStack_938);
          lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_938);
          if ((*(char *)(lVar5 + 5) == '\0') &&
             (*(long *)(lVar6 + 0x68) != *(long *)(uStack_910 + 0x68))) goto LAB_052cf1db;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x70);
          puVar14 = *(undefined8 **)(lStack_8f0 + 0x78);
          if (((long)puVar14 - (long)puVar8 == -8) ||
             (puVar8 == (undefined8 *)0x0 && puVar14 != (undefined8 *)0x0)) goto LAB_052d0819;
          if (puVar14 == puVar8) {
LAB_052cef50:
            if (puVar8 != puVar14) goto LAB_052cf1db;
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar6 + 0x68) + 200) == *(long *)*puVar8) goto LAB_052cef50;
              puVar8 = puVar8 + 1;
            } while (puVar8 != puVar14);
          }
        }
LAB_052cef59:
        uVar21 = 1;
        do {
          uVar7 = uVar21 | uVar10;
          if (*(char *)((long)auStack_828 + (uVar7 - 8)) == '\0') {
            if (lVar4 == 0xf) {
LAB_052cefc7:
              if (0x7ff < uStack_8c0 + uVar21) goto LAB_052d0819;
              if (*(char *)((long)auStack_828 + ((uStack_8c0 + uVar21) - 8)) == '\0') {
LAB_052cefed:
                if (lVar15 == 0xf) {
LAB_052cf01a:
                  if (0x7ff < uStack_8b0 + uVar21) goto LAB_052d0819;
                  if (*(char *)((long)auStack_828 + ((uStack_8b0 + uVar21) - 8)) == '\0') {
LAB_052cf03c:
                    if (uVar21 != 7) {
                      if (uVar7 == 0x7ff) goto LAB_052d0819;
                      if (*(char *)((long)auStack_828 + (uVar7 - 7)) != '\0') goto LAB_052cf070;
                    }
                    if (*(char *)((long)&uStack_838 + uVar7 + 7) != '\x01') goto LAB_052cef79;
                  }
                }
                else {
                  if (0x7ff < lStack_890 + uVar21) goto LAB_052d0819;
                  if (*(char *)((long)auStack_828 + ((lStack_890 + uVar21) - 8)) == '\0') {
                    if (lVar15 != 0) goto LAB_052cf01a;
                    goto LAB_052cf03c;
                  }
                }
              }
            }
            else {
              if (0x7ff < lStack_8a8 + uVar21) goto LAB_052d0819;
              if (*(char *)((long)auStack_828 + ((lStack_8a8 + uVar21) - 8)) == '\0') {
                if (lVar4 != 0) goto LAB_052cefc7;
                goto LAB_052cefed;
              }
            }
LAB_052cf070:
            uStack_938 = ((ulong)(uint)((int)uStack_8e8 + (int)uVar21) << 0x20) + uStack_908;
            uStack_930 = CONCAT44(uStack_930._4_4_,(int)puStack_900);
            lVar5 = (**(code **)(*plStack_940 + 0x60))(plStack_940,&uStack_938);
            if ((3 < uVar21) && (*(char *)(lVar5 + 2) != '\0')) goto LAB_052cf1db;
            lVar6 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_938);
            if ((uVar21 < 4) &&
               ((*(char *)(lVar5 + 5) == '\0' &&
                (*(long *)(lVar6 + 0x68) != *(long *)(uStack_910 + 0x68))))) goto LAB_052cf1db;
            puVar8 = *(undefined8 **)(lStack_8f0 + 0x70);
            puVar14 = *(undefined8 **)(lStack_8f0 + 0x78);
            if (((long)puVar14 - (long)puVar8 == -8) ||
               (puVar14 != (undefined8 *)0x0 && puVar8 == (undefined8 *)0x0)) goto LAB_052d0819;
            if (puVar14 == puVar8) {
LAB_052cef70:
              if (puVar8 != puVar14) goto LAB_052cf1db;
            }
            else {
              do {
                if (*(long *)(*(long *)(lVar6 + 0x68) + 200) == *(long *)*puVar8) goto LAB_052cef70;
                puVar8 = puVar8 + 1;
              } while (puVar8 != puVar14);
            }
          }
LAB_052cef79:
          uVar21 = uVar21 + 1;
        } while (uVar21 != 8);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x10);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
    plVar9 = (long *)func_0x0cc446c0(0xf6ff9e0);
    uStack_908 = *(ulong *)(*plVar9 + 0x200);
    iVar19 = (int)uStack_8e8;
    uStack_8b8 = CONCAT44(uStack_8b8._4_4_,iVar19 + 1);
    uStack_8d0 = CONCAT44(uStack_8d0._4_4_,iVar19 + 2);
    uStack_8c0 = CONCAT44(uStack_8c0._4_4_,iVar19 + 3);
    lStack_8a8 = CONCAT44(lStack_8a8._4_4_,iVar19 + 4);
    uStack_8b0 = CONCAT44(uStack_8b0._4_4_,iVar19 + 5);
    lStack_890 = CONCAT44(lStack_890._4_4_,iVar19 + 6);
    uStack_8f8 = CONCAT44(uStack_8f8._4_4_,iVar19 + 7);
    lVar4 = (long)&uStack_830 + 7;
    lVar15 = 0;
    do {
      puStack_900 = (undefined8 *)CONCAT44(puStack_900._4_4_,(int)lVar15 + (int)uStack_888);
      lVar5 = 0;
      uStack_898 = lVar15;
      do {
        iVar19 = (int)lVar5;
        if (*(char *)(lVar4 + -7 + lVar5 * 8) == '\0') {
          cVar2 = *(char *)(lVar4 + -6 + lVar5 * 8);
joined_r0x052cf3b8:
          if (cVar2 != '\x01') goto LAB_052cf295;
LAB_052cf480:
          uStack_950 = CONCAT44((undefined4)uStack_8b8,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_910,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -5 + lVar5 * 8);
            goto joined_r0x052cf29b;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_910;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -5 + lVar5 * 8);
            goto joined_r0x052cf29b;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_910;
          if (*(char *)(lVar4 + -5 + lVar5 * 8) != '\x01') goto LAB_052cf2a1;
LAB_052cf580:
          uStack_950 = CONCAT44((undefined4)uStack_8d0,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_910,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -4 + lVar5 * 8);
            goto joined_r0x052cf635;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_910;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -4 + lVar5 * 8);
            goto joined_r0x052cf635;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_910;
          if (*(char *)(lVar4 + -4 + lVar5 * 8) != '\x01') goto LAB_052cf2ad;
LAB_052cf680:
          uStack_950 = CONCAT44((float)uStack_8c0,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_910,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -3 + lVar5 * 8);
            goto joined_r0x052cf2b3;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_910;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -3 + lVar5 * 8);
            goto joined_r0x052cf2b3;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_910;
          if (*(char *)(lVar4 + -3 + lVar5 * 8) == '\x01') goto LAB_052cf780;
LAB_052cf2b9:
          cVar2 = *(char *)(lVar4 + -2 + lVar5 * 8);
joined_r0x052cf835:
          if (cVar2 != '\x01') goto LAB_052cf2c5;
LAB_052cf880:
          uStack_950 = CONCAT44((undefined4)uStack_8b0,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_908,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -1 + lVar5 * 8);
            goto joined_r0x052cf2cb;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_908;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -1 + lVar5 * 8);
            goto joined_r0x052cf2cb;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_908;
          if (*(char *)(lVar4 + -1 + lVar5 * 8) != '\x01') goto LAB_052cf2d1;
LAB_052cf980:
          uStack_950 = CONCAT44((undefined4)lStack_890,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_908,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + lVar5 * 8);
          }
          else {
            uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
            lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
            if (lVar15 == 0) {
              uStack_938 = CONCAT44(uStack_938._4_4_,3);
              uStack_928 = uStack_908;
              uStack_930 = uVar10;
              func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
              cVar2 = *(char *)(lVar4 + lVar5 * 8);
            }
            else {
              *(undefined4 *)(lVar15 + 0x20) = 3;
              *(ulong *)(lVar15 + 0x30) = uStack_908;
              cVar2 = *(char *)(lVar4 + lVar5 * 8);
            }
          }
        }
        else {
          uStack_950 = CONCAT44((int)uStack_8e8,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_910,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -6 + lVar5 * 8);
            goto joined_r0x052cf3b8;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 != 0) {
            *(undefined4 *)(lVar15 + 0x20) = 3;
            *(ulong *)(lVar15 + 0x30) = uStack_910;
            cVar2 = *(char *)(lVar4 + -6 + lVar5 * 8);
            goto joined_r0x052cf3b8;
          }
          uStack_938 = CONCAT44(uStack_938._4_4_,3);
          uStack_928 = uStack_910;
          uStack_930 = uVar10;
          func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
          if (*(char *)(lVar4 + -6 + lVar5 * 8) == '\x01') goto LAB_052cf480;
LAB_052cf295:
          cVar2 = *(char *)(lVar4 + -5 + lVar5 * 8);
joined_r0x052cf29b:
          if (cVar2 == '\x01') goto LAB_052cf580;
LAB_052cf2a1:
          cVar2 = *(char *)(lVar4 + -4 + lVar5 * 8);
joined_r0x052cf635:
          if (cVar2 == '\x01') goto LAB_052cf680;
LAB_052cf2ad:
          cVar2 = *(char *)(lVar4 + -3 + lVar5 * 8);
joined_r0x052cf2b3:
          if (cVar2 != '\x01') goto LAB_052cf2b9;
LAB_052cf780:
          uStack_950 = CONCAT44((undefined4)lStack_8a8,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_908,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -2 + lVar5 * 8);
            goto joined_r0x052cf835;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_908;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -2 + lVar5 * 8);
            goto joined_r0x052cf835;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_908;
          if (*(char *)(lVar4 + -2 + lVar5 * 8) == '\x01') goto LAB_052cf880;
LAB_052cf2c5:
          cVar2 = *(char *)(lVar4 + -1 + lVar5 * 8);
joined_r0x052cf2cb:
          if (cVar2 == '\x01') goto LAB_052cf980;
LAB_052cf2d1:
          cVar2 = *(char *)(lVar4 + lVar5 * 8);
        }
        if (cVar2 == '\x01') {
          uStack_950 = CONCAT44((undefined4)uStack_8f8,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_908,3,0,&uStack_938);
          }
          else {
            uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
            lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
            if (lVar15 == 0) {
              uStack_938 = CONCAT44(uStack_938._4_4_,3);
              uStack_928 = uStack_908;
              uStack_930 = uVar10;
              func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            }
            else {
              *(undefined4 *)(lVar15 + 0x20) = 3;
              *(ulong *)(lVar15 + 0x30) = uStack_908;
            }
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar15 = uStack_898 + 1;
      lVar4 = lVar4 + 0x80;
    } while (lVar15 != 0x10);
    uStack_8f8 = FUN_0cc41df0(0xf6ff9e0,0xf718af0,1);
    uStack_858 = uStack_848 + 0x300000000;
    puStack_860 = (undefined8 *)(uStack_848 + 0x400000000);
    uStack_868 = uStack_848 + 0x500000000;
    uStack_870 = uStack_848 + 0x600000000;
    uStack_878 = uStack_848 + 0x700000000;
    lVar4 = 0;
    do {
      puStack_900 = (undefined8 *)(lVar4 << 7);
      uStack_8d0 = lVar4 + uStack_888;
      uStack_880 = uStack_8d0 & 0xffffffff;
      uStack_898 = uStack_880 | uStack_858;
      uStack_908 = uStack_880 | (ulong)puStack_860;
      uStack_910 = uStack_880 | uStack_868;
      uStack_8b8 = uStack_880 | uStack_870;
      uStack_880 = uStack_880 | uStack_878;
      lVar15 = 0;
      lStack_850 = lVar4;
      do {
        puVar8 = puStack_900;
        puVar16 = (undefined4 *)(uStack_8c8 + lVar15);
        iVar19 = (int)puVar16;
        if (*(char *)((long)puStack_900 + (long)(auStack_828 + lVar15 * 2 + -1)) != '\0') {
          uStack_950 = uStack_898;
          iStack_948 = iVar19;
          lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_950);
          if (((long)_DAT_0f713ce8 - (long)_DAT_0f713ce0 == -8) ||
             (_DAT_0f713ce8 != (undefined8 *)0x0 && _DAT_0f713ce0 == (undefined8 *)0x0))
          goto LAB_052d0819;
          puVar14 = _DAT_0f713ce0;
          if (_DAT_0f713ce8 == _DAT_0f713ce0) {
LAB_052cfcb6:
            if (puVar14 != _DAT_0f713ce8) {
              uStack_938 = uStack_908;
              uStack_930 = CONCAT44(uStack_930._4_4_,iVar19);
              cVar2 = func_0x0c9d58e0(plStack_940,&uStack_938);
              if (cVar2 != '\0') {
                uStack_8dc = (undefined4)uStack_8d0;
                uStack_8d8 = (float)uStack_8c0;
                puVar14 = *(undefined8 **)(lStack_8f0 + 0x18);
                if (puVar14 == (undefined8 *)0x0) {
                  uStack_928 = 0;
                  uStack_920 = 0;
                  uStack_938 = 0;
                  uStack_930 = 0;
                  uStack_918 = 1;
                  iStack_8d4 = iVar19;
                  (**(code **)(*plStack_940 + 0xf8))
                            (plStack_940,&uStack_8dc,uStack_8f8,3,0,&uStack_938);
                }
                else {
                  iStack_8d4 = iVar19;
                  uStack_8a0 = (**(code **)(*(long *)*puVar14 + 0x28))((long *)*puVar14,&uStack_8dc)
                  ;
                  lVar4 = func_0x0b5d6180(puVar14[1],&uStack_8dc);
                  if (lVar4 == 0) {
                    uStack_938 = CONCAT44(uStack_938._4_4_,3);
                    uStack_930 = uStack_8a0;
                    uStack_928 = uStack_8f8;
                    func_0x0b5d6330(puVar14[1],&uStack_8dc,&uStack_8dc,&uStack_938);
                  }
                  else {
                    *(undefined4 *)(lVar4 + 0x20) = 3;
                    *(ulong *)(lVar4 + 0x30) = uStack_8f8;
                  }
                }
              }
            }
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar4 + 0x68) + 200) == *(long *)*puVar14) goto LAB_052cfcb6;
              puVar14 = puVar14 + 1;
            } while (puVar14 != _DAT_0f713ce8);
          }
        }
        if (*(char *)((long)puVar8 + (long)auStack_828 + lVar15 * 8 + -3) == '\x01') {
          uStack_950 = uStack_908;
          iStack_948 = iVar19;
          lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_950);
          if (((long)_DAT_0f713ce8 - (long)_DAT_0f713ce0 == -8) ||
             (_DAT_0f713ce0 == (undefined8 *)0x0 && _DAT_0f713ce8 != (undefined8 *)0x0))
          goto LAB_052d0819;
          puVar14 = _DAT_0f713ce0;
          if (_DAT_0f713ce8 == _DAT_0f713ce0) {
LAB_052cfe66:
            if (puVar14 != _DAT_0f713ce8) {
              uStack_938 = uStack_910;
              uStack_930 = CONCAT44(uStack_930._4_4_,iVar19);
              cVar2 = func_0x0c9d58e0(plStack_940,&uStack_938);
              if (cVar2 != '\0') {
                uStack_8dc = (undefined4)uStack_8d0;
                uStack_8d8 = (undefined4)lStack_8a8;
                puVar14 = *(undefined8 **)(lStack_8f0 + 0x18);
                if (puVar14 == (undefined8 *)0x0) {
                  uStack_928 = 0;
                  uStack_920 = 0;
                  uStack_938 = 0;
                  uStack_930 = 0;
                  uStack_918 = 1;
                  iStack_8d4 = iVar19;
                  (**(code **)(*plStack_940 + 0xf8))
                            (plStack_940,&uStack_8dc,uStack_8f8,3,0,&uStack_938);
                }
                else {
                  iStack_8d4 = iVar19;
                  uStack_8a0 = (**(code **)(*(long *)*puVar14 + 0x28))((long *)*puVar14,&uStack_8dc)
                  ;
                  lVar4 = func_0x0b5d6180(puVar14[1],&uStack_8dc);
                  if (lVar4 == 0) {
                    uStack_938 = CONCAT44(uStack_938._4_4_,3);
                    uStack_930 = uStack_8a0;
                    uStack_928 = uStack_8f8;
                    func_0x0b5d6330(puVar14[1],&uStack_8dc,&uStack_8dc,&uStack_938);
                  }
                  else {
                    *(undefined4 *)(lVar4 + 0x20) = 3;
                    *(ulong *)(lVar4 + 0x30) = uStack_8f8;
                  }
                }
              }
            }
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar4 + 0x68) + 200) == *(long *)*puVar14) goto LAB_052cfe66;
              puVar14 = puVar14 + 1;
            } while (puVar14 != _DAT_0f713ce8);
          }
        }
        if (*(char *)((long)puVar8 + (long)auStack_828 + lVar15 * 8 + -2) == '\x01') {
          uStack_950 = uStack_910;
          iStack_948 = iVar19;
          lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_950);
          if (((long)_DAT_0f713ce8 - (long)_DAT_0f713ce0 == -8) ||
             (_DAT_0f713ce0 == (undefined8 *)0x0 && _DAT_0f713ce8 != (undefined8 *)0x0))
          goto LAB_052d0819;
          puVar14 = _DAT_0f713ce0;
          if (_DAT_0f713ce8 == _DAT_0f713ce0) {
LAB_052d0016:
            if (puVar14 != _DAT_0f713ce8) {
              uStack_938 = uStack_8b8;
              uStack_930 = CONCAT44(uStack_930._4_4_,iVar19);
              cVar2 = func_0x0c9d58e0(plStack_940,&uStack_938);
              if (cVar2 != '\0') {
                uStack_8dc = (undefined4)uStack_8d0;
                uStack_8d8 = (undefined4)uStack_8b0;
                puVar14 = *(undefined8 **)(lStack_8f0 + 0x18);
                if (puVar14 == (undefined8 *)0x0) {
                  uStack_928 = 0;
                  uStack_920 = 0;
                  uStack_938 = 0;
                  uStack_930 = 0;
                  uStack_918 = 1;
                  iStack_8d4 = iVar19;
                  (**(code **)(*plStack_940 + 0xf8))
                            (plStack_940,&uStack_8dc,uStack_8f8,3,0,&uStack_938);
                }
                else {
                  iStack_8d4 = iVar19;
                  uStack_8a0 = (**(code **)(*(long *)*puVar14 + 0x28))((long *)*puVar14,&uStack_8dc)
                  ;
                  lVar4 = func_0x0b5d6180(puVar14[1],&uStack_8dc);
                  if (lVar4 == 0) {
                    uStack_938 = CONCAT44(uStack_938._4_4_,3);
                    uStack_930 = uStack_8a0;
                    uStack_928 = uStack_8f8;
                    func_0x0b5d6330(puVar14[1],&uStack_8dc,&uStack_8dc,&uStack_938);
                  }
                  else {
                    *(undefined4 *)(lVar4 + 0x20) = 3;
                    *(ulong *)(lVar4 + 0x30) = uStack_8f8;
                  }
                }
              }
            }
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar4 + 0x68) + 200) == *(long *)*puVar14) goto LAB_052d0016;
              puVar14 = puVar14 + 1;
            } while (puVar14 != _DAT_0f713ce8);
          }
        }
        if (*(char *)((long)puVar8 + (long)auStack_828 + lVar15 * 8 + -1) == '\x01') {
          uStack_950 = uStack_8b8;
          iStack_948 = iVar19;
          lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_950);
          if (((long)_DAT_0f713ce8 - (long)_DAT_0f713ce0 == -8) ||
             (_DAT_0f713ce0 == (undefined8 *)0x0 && _DAT_0f713ce8 != (undefined8 *)0x0))
          goto LAB_052d0819;
          puVar8 = _DAT_0f713ce0;
          if (_DAT_0f713ce8 == _DAT_0f713ce0) {
LAB_052d01d6:
            if (puVar8 != _DAT_0f713ce8) {
              uStack_938 = uStack_880;
              uStack_930 = CONCAT44(uStack_930._4_4_,iVar19);
              cVar2 = func_0x0c9d58e0(plStack_940,&uStack_938);
              if (cVar2 != '\0') {
                uStack_8dc = (undefined4)uStack_8d0;
                uStack_8d8 = (undefined4)lStack_890;
                puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
                if (puVar8 == (undefined8 *)0x0) {
                  uStack_928 = 0;
                  uStack_920 = 0;
                  uStack_938 = 0;
                  uStack_930 = 0;
                  uStack_918 = 1;
                  iStack_8d4 = iVar19;
                  (**(code **)(*plStack_940 + 0xf8))
                            (plStack_940,&uStack_8dc,uStack_8f8,3,0,&uStack_938);
                }
                else {
                  puVar16 = &uStack_8dc;
                  iStack_8d4 = iVar19;
                  uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,puVar16);
                  lVar4 = func_0x0b5d6180(puVar8[1],puVar16);
                  if (lVar4 == 0) {
                    uStack_938 = CONCAT44(uStack_938._4_4_,3);
                    uStack_928 = uStack_8f8;
                    uStack_930 = uVar10;
                    func_0x0b5d6330(puVar8[1],puVar16,puVar16,&uStack_938);
                  }
                  else {
                    *(undefined4 *)(lVar4 + 0x20) = 3;
                    *(ulong *)(lVar4 + 0x30) = uStack_8f8;
                  }
                }
              }
            }
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar4 + 0x68) + 200) == *(long *)*puVar8) goto LAB_052d01d6;
              puVar8 = puVar8 + 1;
            } while (puVar8 != _DAT_0f713ce8);
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x10);
      lVar4 = lStack_850 + 1;
    } while (lVar4 != 0x10);
    uStack_880 = FUN_0cc41df0(0xf6ff9e0,lStack_8f0 + 0x48,1);
    cVar2 = func_0x0ee24c30(*(long *)(uStack_880 + 0x68) + 200,&DAT_0f6eaec0);
    uVar10 = CONCAT71((int7)((ulong)puVar16 >> 8),1);
    if (cVar2 != '\0') {
      uStack_838 = (uStack_8e8 << 0x20) + 0x100000000;
      uVar11 = 0x1fffffff;
      uStack_870 = 0x1ffffff0;
      uStack_8e8 = 0;
      uStack_898 = uStack_888 & 0xffffffff;
      uVar21 = 0;
      puStack_900 = &uStack_830;
      do {
        iStack_83c = (int)uStack_898;
        uStack_898 = uStack_898 + uStack_838;
        uStack_8c0 = (ulong)(uint)((int)uStack_870 * 8);
        lStack_8a8 = (long)auStack_828 + (uStack_8c0 - 7);
        uStack_8c0 = uStack_8c0 + 1;
        uStack_8f8 = uVar21 << 7;
        uStack_858 = uVar21 * 0x10 + 0x10;
        lStack_850 = uVar21 * 0x10 + 0x1ffffff0;
        uStack_8a0 = (uint)((int)uStack_888 + (int)uVar21) | uStack_848;
        uStack_868 = CONCAT44(uStack_868._4_4_,uVar11);
        uStack_910 = 0;
        uStack_8b0 = uVar21;
        uStack_878 = uStack_8e8;
        puStack_860 = puStack_900;
        do {
          plVar9 = plStack_940;
          uStack_8d0 = (ulong)uVar11;
          uVar7 = uStack_8f8 + uStack_910 * 8;
          uStack_908 = uStack_8c8 + uStack_910;
          if (*(char *)((long)auStack_828 + (uVar7 - 8)) == '\0') {
            if (uVar21 == 0xf) {
LAB_052d04db:
              uVar11 = ((int)lStack_850 + (int)uStack_910) * 8;
              if (0x7ff < uVar11) goto LAB_052d0819;
              if (*(char *)((long)auStack_828 + ((ulong)uVar11 - 8)) == '\0') {
LAB_052d0503:
                if (uStack_910 == 0xf) {
LAB_052d0529:
                  uVar11 = (int)uVar7 - 8U & 0xfffffff8;
                  if (0x7ff < uVar11) goto LAB_052d0819;
                  if (*(char *)((long)auStack_828 + ((ulong)uVar11 - 8)) == '\0') {
LAB_052d0549:
                    if (*(char *)((long)auStack_828 + (uVar7 - 7)) != '\x01') goto LAB_052d05fa;
                  }
                }
                else {
                  if (0x7f7 < uVar7) {
LAB_052d0819:
                    func_0x04890760();
                    pcVar1 = (code *)swi(3);
                    uVar10 = (*pcVar1)();
                    return uVar10;
                  }
                  if (*(char *)((long)auStack_828 + uVar7) == '\0') {
                    if (uStack_910 != 0) goto LAB_052d0529;
                    goto LAB_052d0549;
                  }
                }
              }
            }
            else {
              if (0xff < uStack_858 + uStack_910) goto LAB_052d0819;
              if ((char)auStack_828[(uStack_858 + uStack_910) * 2 + -2] == '\0') {
                if (uVar21 != 0) goto LAB_052d04db;
                goto LAB_052d0503;
              }
            }
            uStack_938 = uStack_8a0;
            uStack_930 = CONCAT44(uStack_930._4_4_,(int)uStack_908);
            lVar4 = (**(code **)(*plStack_940 + 0x60))(plStack_940,&uStack_938);
            if (*(char *)(lVar4 + 5) == '\x01') {
              iStack_948 = (int)uStack_930;
              uStack_950 = uStack_938;
              lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_938);
              (**(code **)(**(long **)(lVar4 + 0x68) + 600))
                        (*(long **)(lVar4 + 0x68),plVar9,&uStack_938,&uStack_950);
              if ((int)uStack_950 == (int)uStack_938) {
                if ((uStack_950._4_4_ == uStack_938._4_4_) && (iStack_948 == (int)uStack_930)) {
                  func_0x0d3df990(lStack_8f0,plVar9,&uStack_938,uStack_880);
                }
              }
            }
          }
LAB_052d05fa:
          uVar7 = (ulong)(uint)((int)uStack_8d0 * 8);
          uStack_8b8 = (long)auStack_828 + (uVar7 - 7);
          lStack_890 = uVar7 + 1;
          puVar8 = puStack_900;
          uVar7 = uStack_898;
          uVar17 = 0;
          do {
            uVar18 = uVar17 + 1;
            if (*(char *)((long)puVar8 + uVar17 + 1) == '\0') {
              if (uVar21 == 0xf) {
LAB_052d0699:
                if (0x7ff < uStack_8c0 + uVar17) goto LAB_052d0819;
                if (*(char *)(lStack_8a8 + uVar17) == '\0') {
LAB_052d06c3:
                  if (uStack_910 == 0xf) {
LAB_052d06f3:
                    if (0x7ff < lStack_890 + uVar17) goto LAB_052d0819;
                    if (*(char *)(uStack_8b8 + uVar17) == '\0') {
LAB_052d0719:
                      if (uVar17 != 6) {
                        if (uStack_8e8 + uVar17 == 0x7fe) goto LAB_052d0819;
                        if (*(char *)((long)puVar8 + uVar17 + 2) != '\0') goto LAB_052d0748;
                      }
                      if (*(char *)((long)puVar8 + uVar17) != '\x01') goto LAB_052d0641;
                    }
                  }
                  else {
                    if (0x7ff < uStack_8e8 + uVar17 + 9) goto LAB_052d0819;
                    if (*(char *)((long)puVar8 + uVar17 + 9) == '\0') {
                      if (uStack_910 != 0) goto LAB_052d06f3;
                      goto LAB_052d0719;
                    }
                  }
                }
              }
              else {
                if (0x7ff < uStack_8e8 + uVar17 + 0x81) goto LAB_052d0819;
                if (*(char *)((long)puVar8 + uVar17 + 0x81) == '\0') {
                  if (uVar21 != 0) goto LAB_052d0699;
                  goto LAB_052d06c3;
                }
              }
LAB_052d0748:
              if ((uVar18 < 4) ||
                 (iVar19 = (**(code **)(*param_4 + 0x18))(param_4,2), puVar8 = puStack_900,
                 iVar19 != 0)) {
                uStack_930 = CONCAT44(uStack_930._4_4_,(int)uStack_908);
                uStack_938 = uVar7;
                lVar4 = (**(code **)(*plStack_940 + 0x60))(plStack_940,&uStack_938);
                plVar9 = plStack_940;
                puVar8 = puStack_900;
                if (*(char *)(lVar4 + 5) == '\x01') {
                  iStack_948 = (int)uStack_930;
                  uStack_950 = uStack_938;
                  lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_938);
                  (**(code **)(**(long **)(lVar4 + 0x68) + 600))
                            (*(long **)(lVar4 + 0x68),plVar9,&uStack_938,&uStack_950);
                  puVar8 = puStack_900;
                  uVar21 = uStack_8b0;
                  if ((int)uStack_950 == (int)uStack_938) {
                    if ((uStack_950._4_4_ == uStack_938._4_4_) && (iStack_948 == (int)uStack_930)) {
                      func_0x0d3df990(lStack_8f0,plStack_940,&uStack_938,uStack_880);
                      puVar8 = puStack_900;
                      uVar21 = uStack_8b0;
                    }
                  }
                }
              }
            }
LAB_052d0641:
            uVar7 = uVar7 + 0x100000000;
            uVar17 = uVar18;
          } while (uVar18 != 7);
          uStack_910 = uStack_910 + 1;
          uVar11 = (int)uStack_8d0 + 1;
          puStack_900 = puVar8 + 1;
          uStack_8e8 = uStack_8e8 + 8;
          lStack_8a8 = lStack_8a8 + 8;
          uStack_8c0 = uStack_8c0 + 8;
        } while (uStack_910 != 0x10);
        uVar21 = uVar21 + 1;
        uStack_898 = (ulong)(iStack_83c + 1);
        uVar11 = (int)uStack_868 + 0x10;
        puStack_900 = puStack_860 + 0x10;
        uStack_8e8 = uStack_878 + 0x80;
        uStack_870 = (ulong)((int)uStack_870 + 0x10);
      } while (uVar21 != 0x10);
    }
  }
  else {
LAB_052cf1db:
    uVar10 = 0;
  }
  return uVar10 & 0xffffffff;
}


