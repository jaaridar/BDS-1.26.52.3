/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cbd00 (ELF vaddr 0xc5cbd00)
 * Label: JigsawBlock::vslot19
 * Body:  [[0c6cbc50, 0c6cbcf8] [0c6cbd00, 0c6cbd4c] [0cd56b30, 0cd572b7]]
 * Ghidra: wg_JigsawBlock__vslot19
 */


/* WARNING: Possible PIC construction at 0x0c6cbc9b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c6cbca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_JigsawBlock__vslot19(undefined8 param_1,long param_2,byte param_3)

{
  long lVar1;
  ushort uVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  int *piVar8;
  ulong in_RAX;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  long unaff_RBX;
  ulong unaff_RBP;
  undefined8 *puVar20;
  long lVar21;
  undefined8 unaff_R14;
  bool bVar22;
  undefined8 uStack_20;
  ulong uStack_18;
  
  uStack_20 = 0xc6cbd10;
  uStack_18 = in_RAX;
  puVar9 = (uint *)func_0x0cd56a20(param_2);
  uVar15 = 0;
  if (puVar9 == (uint *)0x0) {
LAB_0c6cbd32:
    uVar18 = (ulong)param_3;
    uStack_20 = 0xc6cbc60;
    uStack_18 = uVar15;
    piVar8 = (int *)func_0x0cd56a20(param_2);
    if (piVar8 == (int *)0x0) {
LAB_0c6cbc78:
      uStack_20 = 0xc6cbc8e;
      cVar5 = (**(code **)(**(long **)(param_2 + 0x68) + 0x90))
                        (*(long **)(param_2 + 0x68),param_2,uVar18,0);
      if (cVar5 == '\0') {
        return false;
      }
    }
    else {
      if (*piVar8 == 1) {
        register0x00000020 = (BADSPACEBASE *)&uStack_20;
        uStack_20 = 0xc6cbca0;
        unaff_RBX = param_2;
        unaff_RBP = uVar18;
        goto SUB_0cd56b30;
      }
      if (*piVar8 != 0) goto LAB_0c6cbc78;
      if (1 < param_3) {
        return false;
      }
    }
    uStack_20 = 0xc6cbcac;
    piVar8 = (int *)func_0x0cd56a20(param_2);
    if (piVar8 == (int *)0x0) {
LAB_0c6cbcd7:
                    /* WARNING: Could not recover jumptable at 0x0c6cbcf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(**(long **)(param_2 + 0x68) + 0x90))
                        (*(long **)(param_2 + 0x68),param_2,uVar18,1);
      return (bool)uVar6;
    }
    if (*piVar8 == 0) {
      return false;
    }
    if (*piVar8 != 1) goto LAB_0c6cbcd7;
  }
  else {
    uVar17 = *puVar9;
    uVar15 = (ulong)uVar17;
    if (uVar17 == 0) {
      return false;
    }
    if (uVar17 != 1) goto LAB_0c6cbd32;
  }
SUB_0cd56b30:
  *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
  *(long *)((long)register0x00000020 + -0x18) = unaff_RBX;
  lVar14 = *(long *)(param_2 + 0x68);
  lVar1 = lVar14 + 0x1b0;
  lVar21 = *(long *)(lVar14 + 0x1b0);
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar10 = lVar1;
      lVar11 = lVar21;
      lVar12 = lVar1;
      if (lVar21 != 0) {
        do {
          bVar22 = *(ulong *)(lVar11 + 0x20) < _DAT_0f6fe768;
          if (!bVar22) {
            lVar10 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)bVar22 * 8);
        } while (lVar11 != 0);
        if ((lVar10 != lVar1) && (*(ulong *)(lVar10 + 0x20) <= _DAT_0f6fe768)) {
LAB_0cd56e78:
          uVar2 = *(ushort *)(param_2 + 0x128);
          if (lVar21 != 0) {
            do {
              bVar22 = *(ulong *)(lVar21 + 0x20) < _DAT_0f6fe768;
              if (!bVar22) {
                lVar12 = lVar21;
              }
              lVar21 = *(long *)(lVar21 + (ulong)bVar22 * 8);
            } while (lVar21 != 0);
            if ((lVar12 != lVar1) && (*(ulong *)(lVar12 + 0x20) <= _DAT_0f6fe768))
            goto LAB_0cd57161;
          }
          for (plVar16 = *(long **)(lVar14 + 0x350); uVar13 = 0,
              plVar16 != *(long **)(lVar14 + 0x358); plVar16 = plVar16 + 2) {
            puVar20 = (undefined8 *)*plVar16;
            if (*(ulong *)(puVar20[1] + 8) == _DAT_0f6fe768) goto LAB_0cd5712f;
          }
          goto LAB_0cd57134;
        }
      }
      plVar3 = *(long **)(lVar14 + 0x358);
      plVar16 = *(long **)(lVar14 + 0x350);
      for (plVar19 = plVar16; plVar19 != plVar3; plVar19 = plVar19 + 2) {
        if (*(ulong *)(*(long *)(*plVar19 + 8) + 8) == _DAT_0f6fe768) goto LAB_0cd56e78;
      }
      lVar11 = lVar1;
      lVar14 = lVar21;
      plVar19 = plVar16;
      if (lVar21 == 0) {
joined_r0x0cd56c08:
        while( true ) {
          if (plVar19 == plVar3) {
            return false;
          }
          if (*(ulong *)(*(long *)(*plVar19 + 8) + 8) == _DAT_0f6feb88) break;
          plVar19 = plVar19 + 2;
        }
      }
      else {
        do {
          bVar22 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6feb88;
          if (!bVar22) {
            lVar11 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)bVar22 * 8);
        } while (lVar14 != 0);
        if ((lVar11 == lVar1) || (_DAT_0f6feb88 < *(ulong *)(lVar11 + 0x20)))
        goto joined_r0x0cd56c08;
      }
      uVar2 = *(ushort *)(param_2 + 0x128);
      if (lVar21 != 0) {
        do {
          bVar22 = *(ulong *)(lVar21 + 0x20) < _DAT_0f6feb88;
          if (!bVar22) {
            lVar12 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)bVar22 * 8);
        } while (lVar21 != 0);
        if ((lVar12 != lVar1) && (*(ulong *)(lVar12 + 0x20) <= _DAT_0f6feb88)) {
LAB_0cd57161:
          cVar5 = (char)*(undefined4 *)(lVar12 + 0x2c);
          return (ushort)((uVar2 >> (((char)*(undefined4 *)(lVar12 + 0x30) - cVar5) + 1U & 0x1f)) <<
                         (0x10U - cVar5 & 0x1f)) != 0;
        }
      }
      uVar13 = 0;
      for (; plVar16 != plVar3; plVar16 = plVar16 + 2) {
        puVar20 = (undefined8 *)*plVar16;
        if (*(ulong *)(puVar20[1] + 8) == _DAT_0f6feb88) goto LAB_0cd5712f;
      }
LAB_0cd57134:
      return (bool)((int)uVar13 != 0 & (byte)((ulong)uVar13 >> 0x20));
    }
    lVar12 = lVar1;
    lVar11 = lVar21;
    if (lVar21 != 0) {
      do {
        bVar22 = *(ulong *)(lVar11 + 0x20) < _DAT_0f6fe450;
        if (!bVar22) {
          lVar12 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)bVar22 * 8);
      } while (lVar11 != 0);
      if ((lVar12 != lVar1) && (*(ulong *)(lVar12 + 0x20) <= _DAT_0f6fe450)) {
LAB_0cd56f5f:
        uVar2 = *(ushort *)(param_2 + 0x128);
        lVar11 = lVar1;
        if (lVar21 != 0) {
          do {
            bVar22 = *(ulong *)(lVar21 + 0x20) < _DAT_0f6fe450;
            if (!bVar22) {
              lVar11 = lVar21;
            }
            lVar21 = *(long *)(lVar21 + (ulong)bVar22 * 8);
          } while (lVar21 != 0);
          if ((lVar11 != lVar1) && (*(ulong *)(lVar11 + 0x20) <= _DAT_0f6fe450)) {
            cVar5 = (char)*(undefined4 *)(lVar11 + 0x2c);
            uVar15 = (ulong)((uint)(uVar2 >> (((char)*(undefined4 *)(lVar11 + 0x30) - cVar5) + 1U &
                                             0x1f)) & 0xffffU >> (0x10U - cVar5 & 0x1f));
LAB_0cd57235:
            bVar7 = 6;
            if ((uint)uVar15 < 4) {
              bVar7 = 5 - (char)uVar15;
            }
            goto LAB_0cd57243;
          }
        }
        bVar7 = 5;
        for (plVar16 = *(long **)(lVar14 + 0x350); plVar16 != *(long **)(lVar14 + 0x358);
            plVar16 = plVar16 + 2) {
          puVar20 = (undefined8 *)*plVar16;
          if (*(ulong *)(puVar20[1] + 8) == _DAT_0f6fe450) {
            pcVar4 = *(code **)*puVar20;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0xcd57213;
            uVar15 = (*pcVar4)(puVar20,lVar14,uVar2);
            if ((uVar15 >> 0x20 & 1) != 0) goto LAB_0cd57235;
            break;
          }
        }
LAB_0cd57243:
        return param_3 == bVar7;
      }
    }
    plVar3 = *(long **)(lVar14 + 0x358);
    plVar16 = *(long **)(lVar14 + 0x350);
    for (plVar19 = plVar16; plVar19 != plVar3; plVar19 = plVar19 + 2) {
      if (*(ulong *)(*(long *)(*plVar19 + 8) + 8) == _DAT_0f6fe450) goto LAB_0cd56f5f;
    }
    lVar11 = lVar1;
    lVar14 = lVar21;
    plVar19 = plVar16;
    if (lVar21 != 0) {
      do {
        bVar22 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6ff540;
        if (!bVar22) {
          lVar11 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar22 * 8);
      } while (lVar14 != 0);
      if ((lVar11 != lVar1) && (*(ulong *)(lVar11 + 0x20) <= _DAT_0f6ff540)) {
LAB_0cd570bf:
        lVar14 = lVar1;
        if (lVar21 != 0) {
          do {
            bVar22 = *(ulong *)(lVar21 + 0x20) < _DAT_0f6ff540;
            if (!bVar22) {
              lVar14 = lVar21;
            }
            lVar21 = *(long *)(lVar21 + (ulong)bVar22 * 8);
          } while (lVar21 != 0);
          if ((lVar14 != lVar1) && (*(ulong *)(lVar14 + 0x20) <= _DAT_0f6ff540)) {
            cVar5 = (char)*(undefined4 *)(lVar14 + 0x2c);
            uVar17 = (uint)(*(ushort *)(param_2 + 0x128) >>
                           (((char)*(undefined4 *)(lVar14 + 0x30) - cVar5) + 1U & 0x1f)) &
                     0xffffU >> (0x10U - cVar5 & 0x1f);
            goto LAB_0cd57256;
          }
        }
        uVar15 = 0;
        for (; plVar16 != plVar3; plVar16 = plVar16 + 2) {
          if (*(ulong *)(((undefined8 *)*plVar16)[1] + 8) == _DAT_0f6ff540) {
            pcVar4 = (code *)**(undefined8 **)*plVar16;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0xcd5724d;
            uVar15 = (*pcVar4)();
            break;
          }
        }
        uVar17 = (uint)uVar15;
        if ((uVar15 >> 0x20 & 1) == 0) {
          uVar17 = 0;
        }
LAB_0cd57256:
        return param_3 == (&UNK_01bdfef4)[(int)uVar17];
      }
    }
    for (; plVar19 != plVar3; plVar19 = plVar19 + 2) {
      if (*(ulong *)(*(long *)(*plVar19 + 8) + 8) == _DAT_0f6ff540) goto LAB_0cd570bf;
    }
    lVar11 = lVar1;
    lVar14 = lVar21;
    if (lVar21 == 0) {
LAB_0cd56e47:
      plVar19 = plVar16;
      if (plVar16 == plVar3) {
        return false;
      }
      while (*(ulong *)(*(long *)(*plVar19 + 8) + 8) != _DAT_0f6fceb8) {
        plVar19 = plVar19 + 2;
        if (plVar19 == plVar3) {
          return false;
        }
      }
    }
    else {
      do {
        bVar22 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6fceb8;
        if (!bVar22) {
          lVar11 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar22 * 8);
      } while (lVar14 != 0);
      if ((lVar11 == lVar1) || (_DAT_0f6fceb8 < *(ulong *)(lVar11 + 0x20))) goto LAB_0cd56e47;
    }
    lVar14 = lVar1;
    if (lVar21 != 0) {
      do {
        bVar22 = *(ulong *)(lVar21 + 0x20) < _DAT_0f6fceb8;
        if (!bVar22) {
          lVar14 = lVar21;
        }
        lVar21 = *(long *)(lVar21 + (ulong)bVar22 * 8);
      } while (lVar21 != 0);
      if ((lVar14 != lVar1) && (*(ulong *)(lVar14 + 0x20) <= _DAT_0f6fceb8)) {
        cVar5 = (char)*(undefined4 *)(lVar14 + 0x2c);
        bVar7 = (byte)(*(ushort *)(param_2 + 0x128) >>
                      (((char)*(undefined4 *)(lVar14 + 0x30) - cVar5) + 1U & 0x1f)) &
                (byte)(0xffff >> (0x10U - cVar5 & 0x1f));
        goto LAB_0cd57290;
      }
    }
    uVar15 = 0;
    for (; plVar16 != plVar3; plVar16 = plVar16 + 2) {
      if (*(ulong *)(((undefined8 *)*plVar16)[1] + 8) == _DAT_0f6fceb8) {
        pcVar4 = (code *)**(undefined8 **)*plVar16;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0xcd57287;
        uVar15 = (*pcVar4)();
        break;
      }
    }
    bVar7 = (byte)uVar15;
    if ((uVar15 >> 0x20 & 1) == 0) {
      bVar7 = 0;
    }
LAB_0cd57290:
    return param_3 == bVar7;
  }
  lVar10 = lVar1;
  lVar11 = lVar21;
  lVar12 = lVar1;
  if (lVar21 != 0) {
    do {
      bVar22 = *(ulong *)(lVar11 + 0x20) < _DAT_0f6fe768;
      if (!bVar22) {
        lVar10 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)bVar22 * 8);
    } while (lVar11 != 0);
    if ((lVar10 == lVar1) || (_DAT_0f6fe768 < *(ulong *)(lVar10 + 0x20))) goto LAB_0cd56c87;
LAB_0cd56eef:
    uVar2 = *(ushort *)(param_2 + 0x128);
    if (lVar21 == 0) {
LAB_0cd56f26:
      for (plVar16 = *(long **)(lVar14 + 0x350); uVar13 = 0, plVar16 != *(long **)(lVar14 + 0x358);
          plVar16 = plVar16 + 2) {
        puVar20 = (undefined8 *)*plVar16;
        if (*(ulong *)(puVar20[1] + 8) == _DAT_0f6fe768) goto LAB_0cd57147;
      }
      goto LAB_0cd5714c;
    }
    do {
      bVar22 = *(ulong *)(lVar21 + 0x20) < _DAT_0f6fe768;
      if (!bVar22) {
        lVar12 = lVar21;
      }
      lVar21 = *(long *)(lVar21 + (ulong)bVar22 * 8);
    } while (lVar21 != 0);
    if ((lVar12 == lVar1) || (_DAT_0f6fe768 < *(ulong *)(lVar12 + 0x20))) goto LAB_0cd56f26;
LAB_0cd57181:
    cVar5 = (char)*(undefined4 *)(lVar12 + 0x2c);
    bVar22 = (ushort)((uVar2 >> (((char)*(undefined4 *)(lVar12 + 0x30) - cVar5) + 1U & 0x1f)) <<
                     (0x10U - cVar5 & 0x1f)) != 0;
    goto LAB_0cd5715a;
  }
LAB_0cd56c87:
  plVar3 = *(long **)(lVar14 + 0x358);
  plVar16 = *(long **)(lVar14 + 0x350);
  for (plVar19 = plVar16; plVar19 != plVar3; plVar19 = plVar19 + 2) {
    if (*(ulong *)(*(long *)(*plVar19 + 8) + 8) == _DAT_0f6fe768) goto LAB_0cd56eef;
  }
  lVar11 = lVar1;
  lVar14 = lVar21;
  plVar19 = plVar16;
  if (lVar21 == 0) {
joined_r0x0cd56cf8:
    while( true ) {
      if (plVar19 == plVar3) {
        return false;
      }
      if (*(ulong *)(*(long *)(*plVar19 + 8) + 8) == _DAT_0f6feb88) break;
      plVar19 = plVar19 + 2;
    }
  }
  else {
    do {
      bVar22 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6feb88;
      if (!bVar22) {
        lVar11 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)bVar22 * 8);
    } while (lVar14 != 0);
    if ((lVar11 == lVar1) || (_DAT_0f6feb88 < *(ulong *)(lVar11 + 0x20))) goto joined_r0x0cd56cf8;
  }
  uVar2 = *(ushort *)(param_2 + 0x128);
  if (lVar21 != 0) {
    do {
      bVar22 = *(ulong *)(lVar21 + 0x20) < _DAT_0f6feb88;
      if (!bVar22) {
        lVar12 = lVar21;
      }
      lVar21 = *(long *)(lVar21 + (ulong)bVar22 * 8);
    } while (lVar21 != 0);
    if ((lVar12 != lVar1) && (*(ulong *)(lVar12 + 0x20) <= _DAT_0f6feb88)) goto LAB_0cd57181;
  }
  uVar13 = 0;
  for (; plVar16 != plVar3; plVar16 = plVar16 + 2) {
    puVar20 = (undefined8 *)*plVar16;
    if (*(ulong *)(puVar20[1] + 8) == _DAT_0f6feb88) goto LAB_0cd57147;
  }
  goto LAB_0cd5714c;
LAB_0cd5712f:
  pcVar4 = *(code **)*puVar20;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xcd57134;
  uVar13 = (*pcVar4)();
  goto LAB_0cd57134;
LAB_0cd57147:
  pcVar4 = *(code **)*puVar20;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xcd5714c;
  uVar13 = (*pcVar4)();
LAB_0cd5714c:
  bVar22 = (bool)((int)uVar13 != 0 & (byte)((ulong)uVar13 >> 0x20));
LAB_0cd5715a:
  return (bool)(bVar22 ^ 1);
}


