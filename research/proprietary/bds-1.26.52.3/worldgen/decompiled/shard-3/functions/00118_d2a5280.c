/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3a5280 (ELF vaddr 0xd2a5280)
 * Label: FlatWorldGenerator::vslot47
 * Body:  [[0d3a5280, 0d3a541a] [0d3a5420, 0d3a549b] [0d3a54a0, 0d3a5566] [0d3a5570, 0d3a56f4] [0d3a5700, 0d3a573b] [0d3a5740, 0d3a57fe] [0d3a5800, 0d3a5856] [0d3a5860, 0d3a5916] [0d3a5920, 0d3a5ad2]]
 * Ghidra: wg_FlatWorldGenerator__vslot47
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FlatWorldGenerator__vslot47
               (long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  ushort *puVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  bool bVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  
  uVar24 = param_2[2];
  iVar6 = (int)param_2[3];
  uVar29 = *(uint *)(param_1 + 0x13c);
  if ((_DAT_0f6ffb10 == (long *)0x0) &&
     (cVar14 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  iVar23 = (int)(uVar24 >> 0x20);
  uVar32 = (ulong)uVar29;
  if (iVar23 < (int)uVar29) {
    uVar32 = uVar24 >> 0x20;
  }
  iVar15 = (int)uVar24;
  if ((0 < iVar15) && (0 < iVar6)) {
    uVar46 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x200);
    uVar9 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x204);
    uVar34 = (uint)uVar32;
    if ((int)uVar34 < 1) {
      if (iVar23 > (int)uVar29) {
        iVar44 = *(int *)((long)param_2 + 0x14);
        lVar7 = *param_2;
        iVar28 = uVar34 + 1;
        if ((int)(uVar34 + 1) <= iVar23) {
          iVar28 = iVar23;
        }
        iVar26 = (int)param_2[3] * iVar44;
        uVar29 = iVar28 - uVar34;
        uVar36 = uVar29 & 0xfffffffc;
        iVar31 = 0;
        iVar43 = 0;
        uVar24 = uVar32;
        do {
          iVar18 = (int)uVar24;
          iVar42 = 0;
          iVar16 = iVar31;
          do {
            iVar35 = (int)uVar24;
            uVar30 = uVar32;
            if ((uVar29 < 6) ||
               (uVar19 = uVar36, uVar34 - iVar28 < iVar44 * iVar42 + iVar26 * iVar43 + uVar34)) {
LAB_0d3a57b0:
              do {
                puVar2 = (undefined4 *)(lVar7 + (ulong)(uint)((int)uVar30 + iVar16) * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                uVar19 = (int)uVar30 + 1;
                uVar30 = (ulong)uVar19;
              } while ((int)uVar19 < iVar23);
            }
            else {
              do {
                puVar2 = (undefined4 *)(lVar7 + uVar24 * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                puVar2[2] = uVar46;
                puVar2[3] = uVar9;
                puVar2 = (undefined4 *)(lVar7 + 0x10 + uVar24 * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                puVar2[2] = uVar46;
                puVar2[3] = uVar9;
                uVar24 = (ulong)((int)uVar24 + 4);
                uVar19 = uVar19 - 4;
              } while (uVar19 != 0);
              uVar30 = (ulong)(uVar34 + uVar36);
              if (uVar29 != uVar36) goto LAB_0d3a57b0;
            }
            iVar42 = iVar42 + 1;
            uVar24 = (ulong)(uint)(iVar35 + iVar44);
            iVar16 = iVar16 + iVar44;
          } while (iVar42 != iVar6);
          iVar43 = iVar43 + 1;
          uVar24 = (ulong)(uint)(iVar18 + iVar26);
          iVar31 = iVar31 + iVar26;
        } while (iVar43 != iVar15);
      }
    }
    else {
      iVar44 = (int)param_2[3];
      iVar28 = *(int *)((long)param_2 + 0x14);
      iVar26 = *(int *)(param_1 + 0x140);
      iVar31 = *(int *)(param_1 + 0x13c);
      lVar7 = *(long *)(param_1 + 0x128);
      lVar8 = *param_2;
      if (iVar23 <= (int)uVar29) {
        uVar30 = (ulong)(uVar34 & 0x7ffffffc);
        uVar24 = (ulong)(uVar34 & 3);
        uVar36 = 0;
        uVar29 = 0;
        iVar23 = 0;
        do {
          iVar43 = 0;
          uVar19 = uVar36;
          uVar40 = uVar29;
          do {
            uVar25 = uVar24;
            if (uVar34 < 0x12) {
LAB_0d3a5880:
              uVar37 = 0;
              uVar21 = 0;
joined_r0x0d3a5888:
              for (; uVar25 != 0; uVar25 = uVar25 - 1) {
                *(undefined8 *)(lVar8 + (ulong)(uVar19 + (int)uVar37) * 8) =
                     *(undefined8 *)(lVar7 + (ulong)(uVar40 + (int)uVar37) * 8);
                uVar37 = uVar37 + 1;
              }
              if (uVar21 - uVar32 < 0xfffffffffffffffd) {
                do {
                  iVar16 = (int)uVar37;
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + iVar16) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + iVar16) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + iVar16 + 1) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + 1 + iVar16) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + 2 + iVar16) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + 2 + iVar16) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + 3 + iVar16) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + iVar16 + 3) * 8);
                  uVar37 = uVar37 + 4;
                } while (uVar32 != uVar37);
              }
            }
            else {
              uVar17 = iVar28 * iVar43 + iVar44 * iVar28 * iVar23;
              uVar39 = iVar31 * iVar43 + iVar26 * iVar31 * iVar23;
              uVar22 = (uint)(uVar32 - 1);
              if (((CARRY4(uVar17,uVar22)) || (CARRY4(uVar39,uVar22))) || (uVar32 - 1 >> 0x20 != 0))
              goto LAB_0d3a5880;
              uVar38 = uVar30;
              uVar22 = uVar40;
              uVar13 = uVar19;
              uVar37 = 0;
              uVar21 = 0;
              if ((lVar8 + (ulong)uVar17 * 8) - (lVar7 + (ulong)uVar39 * 8) < 0x20)
              goto joined_r0x0d3a5888;
              do {
                puVar1 = (undefined8 *)(lVar7 + (ulong)uVar22 * 8);
                uVar10 = puVar1[1];
                puVar4 = (undefined8 *)(lVar7 + 0x10 + (ulong)uVar22 * 8);
                uVar11 = *puVar4;
                uVar12 = puVar4[1];
                puVar4 = (undefined8 *)(lVar8 + (ulong)uVar13 * 8);
                *puVar4 = *puVar1;
                puVar4[1] = uVar10;
                puVar1 = (undefined8 *)(lVar8 + 0x10 + (ulong)uVar13 * 8);
                *puVar1 = uVar11;
                puVar1[1] = uVar12;
                uVar38 = uVar38 - 4;
                uVar22 = uVar22 + 4;
                uVar13 = uVar13 + 4;
              } while (uVar38 != 0);
              uVar37 = uVar30;
              uVar21 = uVar30;
              if ((uVar34 & 0x7ffffffc) != uVar34) goto joined_r0x0d3a5888;
            }
            iVar43 = iVar43 + 1;
            uVar19 = uVar19 + iVar28;
            uVar40 = uVar40 + iVar31;
          } while (iVar43 != iVar6);
          iVar23 = iVar23 + 1;
          uVar29 = uVar29 + iVar26 * iVar31;
          uVar36 = uVar36 + iVar28 * iVar44;
        } while (iVar23 != iVar15);
      }
      else {
        iVar43 = uVar34 + 1;
        if ((int)(uVar34 + 1) <= iVar23) {
          iVar43 = iVar23;
        }
        iVar44 = iVar44 * iVar28;
        uVar37 = (ulong)(~uVar34 + iVar43) + 1;
        uVar30 = (ulong)(uVar34 & 0x7ffffffc);
        uVar25 = (ulong)(uVar34 & 3);
        uVar38 = uVar37 & 0xfffffffffffffffc;
        uVar29 = 0;
        uVar36 = 0;
        iVar16 = 0;
        uVar24 = uVar32;
        do {
          iVar18 = (int)uVar24;
          iVar42 = 0;
          uVar19 = uVar29;
          uVar40 = uVar36;
          do {
            uVar21 = uVar25;
            if (uVar34 < 0x12) {
LAB_0d3a54c7:
              uVar27 = 0;
              uVar20 = 0;
joined_r0x0d3a54d2:
              for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined8 *)(lVar8 + (ulong)(uVar19 + (int)uVar27) * 8) =
                     *(undefined8 *)(lVar7 + (ulong)(uVar40 + (int)uVar27) * 8);
                uVar27 = uVar27 + 1;
              }
              if (uVar20 - uVar32 < 0xfffffffffffffffd) {
                do {
                  iVar35 = (int)uVar27;
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + iVar35) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + iVar35) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + iVar35 + 1) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + 1 + iVar35) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + 2 + iVar35) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + 2 + iVar35) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + 3 + iVar35) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + iVar35 + 3) * 8);
                  uVar27 = uVar27 + 4;
                } while (uVar32 != uVar27);
              }
            }
            else {
              uVar17 = iVar28 * iVar42 + iVar44 * iVar16;
              uVar39 = iVar31 * iVar42 + iVar26 * iVar31 * iVar16;
              uVar22 = (uint)(uVar32 - 1);
              if (((CARRY4(uVar17,uVar22)) || (CARRY4(uVar39,uVar22))) || (uVar32 - 1 >> 0x20 != 0))
              goto LAB_0d3a54c7;
              uVar41 = uVar30;
              uVar22 = uVar40;
              uVar13 = uVar19;
              uVar27 = 0;
              uVar20 = 0;
              if ((lVar8 + (ulong)uVar17 * 8) - (lVar7 + (ulong)uVar39 * 8) < 0x20)
              goto joined_r0x0d3a54d2;
              do {
                puVar1 = (undefined8 *)(lVar7 + (ulong)uVar22 * 8);
                uVar10 = puVar1[1];
                puVar4 = (undefined8 *)(lVar7 + 0x10 + (ulong)uVar22 * 8);
                uVar11 = *puVar4;
                uVar12 = puVar4[1];
                puVar4 = (undefined8 *)(lVar8 + (ulong)uVar13 * 8);
                *puVar4 = *puVar1;
                puVar4[1] = uVar10;
                puVar1 = (undefined8 *)(lVar8 + 0x10 + (ulong)uVar13 * 8);
                *puVar1 = uVar11;
                puVar1[1] = uVar12;
                uVar41 = uVar41 - 4;
                uVar22 = uVar22 + 4;
                uVar13 = uVar13 + 4;
              } while (uVar41 != 0);
              uVar27 = uVar30;
              uVar20 = uVar30;
              if ((uVar34 & 0x7ffffffc) != uVar34) goto joined_r0x0d3a54d2;
            }
            iVar35 = (int)uVar24;
            uVar21 = uVar32;
            if ((~uVar34 + iVar43 < 5) ||
               (uVar27 = uVar38, uVar34 - iVar43 < iVar28 * iVar42 + uVar34 + iVar44 * iVar16)) {
LAB_0d3a5690:
              do {
                puVar2 = (undefined4 *)(lVar8 + (ulong)(uVar19 + (int)uVar21) * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                uVar17 = (int)uVar21 + 1;
                uVar21 = (ulong)uVar17;
              } while ((int)uVar17 < iVar23);
            }
            else {
              do {
                puVar2 = (undefined4 *)(lVar8 + uVar24 * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                puVar2[2] = uVar46;
                puVar2[3] = uVar9;
                puVar2 = (undefined4 *)(lVar8 + 0x10 + uVar24 * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                puVar2[2] = uVar46;
                puVar2[3] = uVar9;
                uVar24 = (ulong)((int)uVar24 + 4);
                uVar27 = uVar27 - 4;
              } while (uVar27 != 0);
              uVar21 = uVar38 + uVar32;
              if (uVar37 != uVar38) goto LAB_0d3a5690;
            }
            iVar42 = iVar42 + 1;
            uVar19 = uVar19 + iVar28;
            uVar40 = uVar40 + iVar31;
            uVar24 = (ulong)(uint)(iVar35 + iVar28);
          } while (iVar42 != iVar6);
          iVar16 = iVar16 + 1;
          uVar36 = uVar36 + iVar31 * iVar26;
          uVar29 = uVar29 + iVar44;
          uVar24 = (ulong)(uint)(iVar18 + iVar44);
        } while (iVar16 != iVar15);
      }
    }
  }
  if (param_4 == (undefined8 *)0x0) {
    return;
  }
  puVar33 = (ushort *)*param_4;
  lVar7 = param_4[1];
  uVar24 = lVar7 - (long)puVar33 >> 1;
  if ((long)uVar24 < 1) {
    return;
  }
  uVar5 = *(ushort *)(param_1 + 0x168);
  if (3 < uVar24) {
    uVar29 = (uint)uVar5;
    if (uVar24 < 0x10) {
      uVar32 = 0;
    }
    else {
      uVar32 = uVar24 & 0x7ffffffffffffff0;
      auVar47 = pshuflw(ZEXT416(uVar29),ZEXT416(uVar29),0);
      uVar46 = auVar47._0_4_;
      uVar30 = 0;
      do {
        puVar3 = puVar33 + uVar30;
        *(undefined4 *)puVar3 = uVar46;
        *(undefined4 *)(puVar3 + 2) = uVar46;
        *(undefined4 *)(puVar3 + 4) = uVar46;
        *(undefined4 *)(puVar3 + 6) = uVar46;
        puVar3 = puVar33 + uVar30 + 8;
        *(undefined4 *)puVar3 = uVar46;
        *(undefined4 *)(puVar3 + 2) = uVar46;
        *(undefined4 *)(puVar3 + 4) = uVar46;
        *(undefined4 *)(puVar3 + 6) = uVar46;
        uVar30 = uVar30 + 0x10;
      } while (uVar32 != uVar30);
      if (uVar24 == uVar32) {
        return;
      }
      if ((lVar7 - (long)puVar33 & 0x18U) == 0) {
        uVar24 = (ulong)((uint)uVar24 & 0xf);
        puVar33 = puVar33 + uVar32;
        goto LAB_0d3a5a9f;
      }
    }
    uVar30 = uVar24 & 0x7ffffffffffffffc;
    auVar47 = pshuflw(ZEXT416(uVar29),ZEXT416(uVar29),0);
    do {
      *(long *)(puVar33 + uVar32) = auVar47._0_8_;
      uVar32 = uVar32 + 4;
    } while (uVar30 != uVar32);
    bVar45 = uVar24 == uVar30;
    uVar24 = (ulong)((uint)uVar24 & 3);
    puVar33 = puVar33 + uVar30;
    if (bVar45) {
      return;
    }
  }
LAB_0d3a5a9f:
  uVar24 = uVar24 + 1;
  do {
    *puVar33 = uVar5;
    puVar33 = puVar33 + 1;
    uVar24 = uVar24 - 1;
  } while (1 < uVar24);
  return;
}


