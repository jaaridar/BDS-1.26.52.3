/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcadd930 (ELF vaddr 0xc9dd930)
 * Label: callee-of:0xd2a46a0
 * Body:  [[0cadd930, 0cade6de]]
 * Ghidra: FUN_0cadd930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cadd930(long param_1,byte *param_2,long *param_3,long *param_4,undefined8 *param_5,
                   long *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  bool bVar27;
  long *plStack_f0;
  int iStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  int iStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_40;
  undefined8 *puStack_38;
  
  uVar19 = (ulong)(short)((uint)(int)*(short *)(param_2 + 2) >> 4);
  lVar13 = *(long *)(param_1 + 0x108);
  uVar22 = (*(long *)(param_1 + 0x110) - lVar13 >> 3) * 0x4ec4ec4ec4ec4ec5;
  plStack_70 = param_3;
  if ((uVar22 < uVar19 || uVar22 - uVar19 == 0) ||
     (plVar11 = *(long **)(lVar13 + 0x30 + uVar19 * 0x68), plVar11 == (long *)0x0)) {
    if ((_DAT_0f6ffb10 == (long *)0x0) &&
       (cVar9 = FUN_0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar11 = *(long **)(*_DAT_0f6ffb10 + 0x200);
    if (plVar11[0x22] == param_3[0x22]) goto LAB_0cade428;
  }
  else {
    iVar18 = (uint)param_2[1] * 0x10 + ((int)*(short *)(param_2 + 2) & 0xfU | (uint)*param_2 << 8);
    plVar11 = (long *)(**(code **)(*plVar11 + 0x20))(plVar11,(short)iVar18,lVar13,iVar18);
    if (plVar11[0x22] == param_3[0x22]) goto LAB_0cade428;
  }
  bVar1 = param_2[1];
  bVar2 = *param_2;
  uVar19 = (ulong)((uint)(byte)(bVar1 << 4) + (uint)bVar2 & 0xff);
  uVar4 = *(ushort *)(param_2 + 2);
  if ((short)(*(short *)(param_1 + 0x1198 + uVar19 * 2) + -1) <= (short)uVar4) {
    *(undefined2 *)(param_1 + 0x1198 + uVar19 * 2) = _DAT_0f6f9e5a;
    uVar4 = *(ushort *)(param_2 + 2);
  }
  uVar22 = (ulong)(short)((uint)(int)(short)uVar4 >> 4);
  uVar19 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) * 0x4ec4ec4ec4ec4ec5;
  puStack_38 = param_5;
  if ((_DAT_0f6ffb10 == (long *)0x0) &&
     (cVar9 = FUN_0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar17 = plStack_70;
  plVar12 = *(long **)(*_DAT_0f6ffb10 + 0x200);
  if (uVar19 < uVar22 || uVar19 - uVar22 == 0) {
    return plVar12;
  }
  if ((plStack_70 != plVar12) && (*(short *)(param_1 + 0xfd8) < *(short *)(param_2 + 2))) {
    *(short *)(param_1 + 0xfd8) = *(short *)(param_2 + 2);
  }
  lVar13 = *(long *)(param_1 + 0x108);
  lVar21 = plVar11[0xd];
  if (lVar21 != plStack_70[0xd]) {
    uVar25 = (ulong)(short)((uint)(int)*(short *)(param_2 + 2) >> 4);
    uVar19 = (*(long *)(param_1 + 0x110) - lVar13 >> 3) * 0x4ec4ec4ec4ec4ec5;
    lStack_d0 = lVar13;
    if ((uVar25 <= uVar19 && uVar19 - uVar25 != 0) &&
       (plVar14 = *(long **)(lVar13 + 0x38 + uVar25 * 0x68), plVar14 != (long *)0x0)) {
      iVar18 = (uint)param_2[1] * 0x10 + ((int)*(short *)(param_2 + 2) & 0xfU | (uint)*param_2 << 8)
      ;
      plVar12 = (long *)(**(code **)(*plVar14 + 0x20))(plVar14,(short)iVar18,iVar18);
      lVar21 = plVar11[0xd];
    }
    cVar9 = FUN_0c6cef20(lVar21);
    if (cVar9 == '\0') {
      bVar27 = false;
joined_r0x0caddc55:
      if (param_4 == (long *)0x0) goto LAB_0cadddd6;
LAB_0caddc5b:
      if (*(char *)(param_1 + 0xb8) != '\v') goto LAB_0cadddd6;
      if (*(long *)(plVar11[0xd] + 200) != _DAT_0f6eaec0) {
        iStack_e8 = (uint)param_2[1] + *(int *)(param_1 + 0x40);
        plStack_f0 = (long *)CONCAT44((int)*(short *)(param_2 + 2) + *(int *)(param_1 + 0x3c),
                                      (uint)*param_2 + *(int *)(param_1 + 0x38));
        func_0x0c848330(plVar11,param_4,&plStack_f0);
        iVar18 = (int)param_6[3];
        if ((iVar18 != 0) && (bVar3 = *(byte *)(param_6 + 1), iVar18 != 3 || bVar3 != 4)) {
          if (((iVar18 == 3) && ((bVar3 < 4 && (bVar3 != 1)))) ||
             (((cVar9 = func_0x0cb13ed0(plVar11 + 1), cVar9 != '\0' ||
               (cVar9 = func_0x0cb13ed0(plVar11[0xd] + 0x28), cVar9 != '\0')) &&
              (((int)param_6[3] != 3 || ((char)param_6[1] != '\x04')))))) {
LAB_0caddf08:
            plVar14 = (long *)func_0x0c6edaf0(plVar11[0xd] + 0x368,0xc);
            if (plVar14 != (long *)0x0) {
              plStack_c0 = plStack_f0;
              iStack_b8 = iStack_e8;
              plStack_c8 = (long *)&UNK_0f3db3a0;
              lStack_b0 = *param_6;
              plStack_a8 = (long *)param_6[1];
              uStack_a0 = (undefined4)param_6[2];
              uStack_9c = *(undefined4 *)((long)param_6 + 0x14);
              uStack_98 = (undefined4)param_6[3];
              uStack_94 = *(undefined4 *)((long)param_6 + 0x1c);
              lStack_90 = param_6[4];
              plStack_88 = param_4;
              plStack_80 = plVar11;
              (**(code **)(*plVar14 + 0x18))(plVar14,&plStack_c8);
            }
          }
          else if ((*(long *)(plVar17[0xd] + 200) == _DAT_0f6eaec0) ||
                  (*(char *)(*(long *)(plVar17[0xd] + 0x20) + 2) != '\0')) {
            lVar13 = param_6[1];
            if (lVar13 != 0 && (int)param_6[3] == 2) {
              lVar21 = *(long *)(lVar13 + 0x10);
              uVar5 = *(uint *)(lVar13 + 0x18);
              plVar14 = (long *)(*(long *)(lVar21 + 0x38) +
                                (ulong)((int)((ulong)(*(long *)(lVar21 + 0x40) -
                                                     *(long *)(lVar21 + 0x38)) >> 3) - 1U &
                                       0x4f6ba419) * 8);
              do {
                if (*plVar14 == -1) {
                  plVar20 = *(long **)(lVar21 + 0x58);
                  plVar14 = plVar20;
                  goto LAB_0cadde12;
                }
                lVar24 = *plVar14 * 0x20;
                plVar14 = (long *)(*(long *)(lVar21 + 0x50) + lVar24);
              } while (*(int *)(*(long *)(lVar21 + 0x50) + 8 + lVar24) != 0x4f6ba419);
              plVar20 = *(long **)(lVar21 + 0x58);
LAB_0cadde12:
              if ((plVar14 == plVar20) || (lVar21 = plVar14[2], lVar21 == 0)) goto LAB_0cade68a;
              uVar19 = (ulong)((uVar5 & 0x3ffff) >> 0xb);
              if (((ulong)(*(long *)(lVar21 + 0x10) - *(long *)(lVar21 + 8) >> 3) <= uVar19) ||
                 (((lVar24 = *(long *)(*(long *)(lVar21 + 8) + uVar19 * 8), lVar24 == 0 ||
                   (uVar6 = *(uint *)(lVar24 + (ulong)(uVar5 & 0x7ff) * 4),
                   0x3fffe < (uVar5 & 0xfffc0000 ^ uVar6))) ||
                  (lVar21 = *(long *)(*(long *)(lVar21 + 0x50) + (ulong)(uVar6 >> 4 & 0x3ff8)),
                  lVar21 == 0)))) goto LAB_0cade68a;
              if ((*(char *)(lVar21 + (ulong)(uVar6 & 0x7f) * 4) == '?') &&
                 (plVar14 = (long *)func_0x0c6edaf0(plVar11[0xd] + 0x368,3), plVar14 != (long *)0x0)
                 ) {
                plStack_c0 = plStack_f0;
                iStack_b8 = iStack_e8;
                plStack_c8 = (long *)&UNK_0f3cacf0;
                lStack_b0 = lVar13;
                plStack_a8 = plVar11;
                (**(code **)(*plVar14 + 0x18))(plVar14,&plStack_c8);
              }
            }
            lVar13 = func_0x08bf9cf0(plVar11);
            if (lVar13 != 0) goto LAB_0caddf08;
          }
        }
        if ((bVar27) && (lVar13 = FUN_0cb18130(param_1 + 0x13d0,param_2), lVar13 != 0)) {
          plStack_c8 = *(long **)(lVar13 + 0x18);
          plStack_c0 = *(long **)(lVar13 + 0x20);
          if (plStack_c0 == (long *)0x0) {
            plStack_60 = (long *)0x0;
          }
          else {
            LOCK();
            plStack_c0[1] = plStack_c0[1] + 1;
            UNLOCK();
            LOCK();
            plStack_c0[1] = plStack_c0[1] + 1;
            UNLOCK();
            plStack_60 = plStack_c0;
          }
          plStack_68 = plStack_c8;
          lStack_40 = lVar13;
          if (((plStack_c8 != (long *)0x0) &&
              (lVar13 = (**(code **)(*param_4 + 0x138))(param_4,plStack_c8 + 1), lVar13 != 0)) &&
             (cVar9 = (**(code **)(*param_4 + 0xa0))(param_4,lVar13), cVar9 != '\0')) {
            iVar18 = *(int *)(lVar13 + 0x1168);
            if (iVar18 < 0) {
              *(undefined4 *)(lVar13 + 0x1168) = 0;
              iVar18 = 0;
            }
            *(int *)(lVar13 + 0x116c) = iVar18;
          }
          plVar14 = plStack_60;
          if (plStack_60 != (long *)0x0) {
            LOCK();
            plVar20 = plStack_60 + 1;
            lVar13 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plStack_60 + 0x10))(plStack_60);
              func_0x0412c2d0(plVar14);
            }
          }
          plStack_d8 = plStack_c8;
          (**(code **)(*plStack_c8 + 0x58))(plStack_c8,param_4);
          puVar26 = *(undefined8 **)(param_1 + 0x1458);
          if (*(undefined8 **)(param_1 + 0x1460) <= puVar26) {
            lVar13 = (long)puVar26 - *(long *)(param_1 + 0x1450);
            uVar19 = (lVar13 >> 4) + 1;
            if (uVar19 >> 0x3c == 0) {
              uVar15 = (long)*(undefined8 **)(param_1 + 0x1460) - *(long *)(param_1 + 0x1450);
              uVar25 = (long)uVar15 >> 3;
              if (uVar25 <= uVar19) {
                uVar25 = uVar19;
              }
              if (0x7fffffffffffffef < uVar15) {
                uVar25 = 0xfffffffffffffff;
              }
              if (uVar25 < 0x1000000000000000) {
                lVar21 = uVar25 * 0x10;
                lStack_e0 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar21);
                if (lStack_e0 == 0) {
                  func_0x0eec74c0(lVar21,0);
                }
                lVar24 = lStack_e0 + lVar13;
                lVar21 = lVar21 + lStack_e0;
                *(long **)(lStack_e0 + lVar13) = plStack_d8;
                *(long **)(lStack_e0 + 8 + lVar13) = plStack_c0;
                plStack_c8 = (long *)0x0;
                plStack_c0 = (long *)0x0;
                puVar26 = (undefined8 *)(lStack_e0 + 0x10 + lVar13);
                lStack_e0 = *(long *)(param_1 + 0x1450);
                plStack_d8 = (long *)(lVar24 - (*(long *)(param_1 + 0x1458) - lStack_e0));
                func_0x0eee2f00();
                *(long **)(param_1 + 0x1450) = plStack_d8;
                *(undefined8 **)(param_1 + 0x1458) = puVar26;
                lVar13 = *(long *)(param_1 + 0x1460);
                *(long *)(param_1 + 0x1460) = lVar21;
                if (lStack_e0 != 0) {
                  func_0x0412a280(lStack_e0,lVar13 - lStack_e0);
                }
                goto LAB_0cade1c1;
              }
            }
            else {
              func_0x0cb0c2a0();
            }
            func_0x04882eb0();
LAB_0cade68a:
            uVar16 = func_0x04890760();
            func_0x0532ea80(&plStack_68);
            func_0x0532ea80(&plStack_c8);
            uVar16 = func_0x0eee2d70(uVar16);
            func_0x0532ea80(&plStack_c8);
            uVar16 = func_0x0eee2d70(uVar16);
            func_0x0532ea80(&uStack_58);
            func_0x0eee2d70(uVar16);
            pcVar7 = (code *)swi(3);
            plVar11 = (long *)(*pcVar7)();
            return plVar11;
          }
          *puVar26 = plStack_d8;
          puVar26[1] = plStack_c0;
          plStack_c8 = (long *)0x0;
          plStack_c0 = (long *)0x0;
          puVar26 = puVar26 + 2;
LAB_0cade1c1:
          *(undefined8 **)(param_1 + 0x1458) = puVar26;
          func_0x0647bc50(param_4 + 0x29,param_1 + 0x50);
          func_0x0cadd7c0(param_1 + 0x13c8,lStack_40);
          iVar18 = *(int *)(param_1 + 0x1168);
          if (iVar18 < 0) {
            *(undefined4 *)(param_1 + 0x1168) = 0;
            iVar18 = 0;
          }
          *(int *)(param_1 + 0x116c) = iVar18;
        }
      }
    }
    else {
      cVar9 = FUN_0c6cef20(plVar11[0xd]);
      cVar8 = FUN_0c6cef20(plVar17[0xd]);
      bVar27 = true;
      if (cVar9 != cVar8) goto joined_r0x0caddc55;
      cVar9 = FUN_0c6cef20(plVar17[0xd]);
      if (cVar9 != '>') {
        bVar27 = false;
        goto joined_r0x0caddc55;
      }
      bVar27 = plVar11[0xd] != plVar17[0xd];
      if (param_4 != (long *)0x0) goto LAB_0caddc5b;
LAB_0cadddd6:
      if ((bVar27) && (lVar13 = FUN_0cb18130(param_1 + 0x13d0,param_2), lVar13 != 0)) {
        func_0x0cadd7c0(param_1 + 0x13c8,lVar13);
      }
    }
    if ((((*(byte *)(plVar17 + 0x17) & 1) == 0) && ((*(byte *)(plVar17[0xd] + 0x108) & 8) == 0)) ||
       ((cVar9 = (**(code **)(*(long *)plVar11[0xd] + 0x2d0))(), cVar9 != '\0' &&
        (((cVar9 = (**(code **)(*(long *)plVar17[0xd] + 0x2d0))(), cVar9 == '\0' &&
          (cVar9 = func_0x0cb13ed0(plVar12 + 1), cVar9 == '\0')) &&
         (cVar9 = func_0x0cb13ed0(plVar12[0xd] + 0x28), cVar9 == '\0')))))) {
      if ((_DAT_0f6ffb10 == (long *)0x0) &&
         (cVar9 = FUN_0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
         cVar9 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      plVar14 = *(long **)(*_DAT_0f6ffb10 + 0x200);
    }
    else {
      cVar9 = func_0x0c843c90(plVar17,plVar11);
      lVar13 = lStack_d0;
      plVar14 = plVar11;
      if (cVar9 == '\0') {
        if (*(long *)(plVar17[0xd] + 200) == _DAT_0f6eaec0) {
          if ((_DAT_0f6ffb10 == (long *)0x0) &&
             (cVar9 = FUN_0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
             cVar9 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if (plVar12[0x22] != *(long *)(*(long *)(*_DAT_0f6ffb10 + 0x200) + 0x110)) {
            if ((*(long *)(plVar12[0xd] + 200) == _DAT_0f713f00) &&
               (*(char *)((long)plVar11 + 0xb9) == '?')) {
              uVar10 = func_0x058485c0(plVar12,0xf6ff1c8);
              uVar16 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f714b20,1);
              func_0x04abe3d0(&plStack_c8,uVar16,0xf6ff1c8,uVar10);
              plVar12 = plStack_c8;
            }
            plVar17 = (long *)func_0x0cc446c0(0xf6ff9e0);
            func_0x0cade7a0(param_1,param_2,*(undefined8 *)(*plVar17 + 0x200),param_4);
            plVar17 = plVar12;
          }
        }
        else {
          cVar9 = func_0x0c843c90(plVar17,plVar12);
          lVar13 = lStack_d0;
          if (cVar9 == '\0') {
            plVar12 = (long *)func_0x0cc446c0(0xf6ff9e0);
            func_0x0cade7a0(param_1,param_2,*(undefined8 *)(*plVar12 + 0x200),param_4);
          }
        }
        goto LAB_0cade312;
      }
    }
    func_0x0cade7a0(param_1,param_2,plVar14,param_4);
    lVar13 = lStack_d0;
  }
LAB_0cade312:
  piVar23 = (int *)(lVar13 + uVar22 * 0x68);
  func_0x0ca92a80(piVar23,0,uVar4 & 0xf | (ushort)bVar1 * 0x10 + (ushort)bVar2 * 0x100,plVar17);
  func_0x0cadc2c0(param_1,param_2,plVar11,plVar17,param_4);
  uStack_58 = *puStack_38;
  plStack_50 = (long *)puStack_38[1];
  *puStack_38 = 0;
  puStack_38[1] = 0;
  func_0x0cadcf50(param_1,param_2,plVar11,plVar17,param_4,&uStack_58,param_6);
  plVar12 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_50 + 1;
    lVar13 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x0ca6a5d0(*(long *)(param_1 + 0x30),
                  CONCAT44((int)*(short *)(param_2 + 2) +
                           (int)*(short *)(*(long *)(param_1 + 0x30) + 0xa8),
                           (uint)*param_2 + *(int *)(param_1 + 0x50) * 0x10),
                  (uint)param_2[1] + *(int *)(param_1 + 0x54) * 0x10,plVar11,plVar17);
  if (param_4 != (long *)0x0) {
    iVar18 = *piVar23;
    if (iVar18 < 0) {
      *piVar23 = 0;
      iVar18 = 0;
    }
    piVar23[1] = iVar18;
  }
LAB_0cade428:
  plVar12 = plStack_70;
  if ((*(long *)(param_1 + 0xf8) != 0) &&
     (cVar9 = (**(code **)(*(long *)plStack_70[0xd] + 0x3b0))(), cVar9 != '\0')) {
    plStack_c8 = (long *)CONCAT44((int)*(short *)(param_2 + 2) + *(int *)(param_1 + 0x3c),
                                  (uint)*param_2 + *(int *)(param_1 + 0x38));
    plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,(uint)param_2[1] + *(int *)(param_1 + 0x40));
    func_0x0c9e41d0(*(undefined8 *)(param_1 + 0xf8),param_1,&plStack_c8,plVar12,1,0);
  }
  return plVar11;
}


