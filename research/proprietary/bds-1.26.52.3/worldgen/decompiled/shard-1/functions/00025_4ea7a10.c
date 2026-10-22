/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4fa7a10 (ELF vaddr 0x4ea7a10)
 * Label: callee-of:0x4de9260
 * Body:  [[04fa7a10, 04fa8149]]
 * Ghidra: FUN_04fa7a10
 */


/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_04fa7a10(undefined4 *param_1,undefined4 *param_2,ulong param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined3 uVar10;
  undefined1 auVar11 [16];
  ushort uVar12;
  ushort uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  int iVar23;
  long lVar24;
  char *pcVar25;
  ulong *puVar26;
  long lVar27;
  long *plVar28;
  bool bVar29;
  char *pcVar30;
  undefined7 uVar31;
  char *pcVar32;
  char *pcVar33;
  ulong uVar34;
  ulong uVar35;
  char *pcVar36;
  ulong *puVar37;
  ulong uVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  char *pcVar42;
  ulong uVar43;
  char *pcVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ulong uStack_e0;
  ulong auStack_d8 [19];
  ulong auStack_40 [2];
  
  if (*(char *)((long)param_1 + 7) != '\0') {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_3;
    return auVar11 << 0x40;
  }
  if (*(char *)((long)param_2 + 7) != '\0') {
    auVar48._0_8_ = CONCAT71((int7)((ulong)param_4 >> 8),1) & 0xffffffff;
    auVar48._8_8_ = param_3;
    return auVar48;
  }
  uVar4 = *(ushort *)((long)param_1 + 2);
  uVar5 = *(ushort *)((long)param_2 + 2);
  pcVar42 = (char *)(ulong)uVar5;
  uVar12 = (ushort)*param_1;
  uVar13 = (ushort)*param_2;
  uVar10 = (undefined3)((uint)*param_1 >> 8);
  if ((ushort)param_1[1] != (ushort)param_2[1] || (uVar12 != uVar13 || uVar5 != uVar4)) {
    pcVar36 = (char *)(ulong)CONCAT31(uVar10,uVar12 < uVar13);
    if (uVar12 == uVar13) {
      bVar29 = uVar4 < uVar5;
      if (uVar4 == uVar5) {
        bVar29 = (ushort)param_1[1] < (ushort)param_2[1];
      }
      pcVar36 = (char *)(ulong)bVar29;
    }
    goto LAB_04fa7af1;
  }
  uVar34 = *(ulong *)(param_1 + 2);
  uVar35 = uVar34 & 0xff00ffffffffffff;
  if ((uVar34 >> 0x37 & 1) == 0) {
    uVar38 = (ulong)((ushort)(uVar34 >> 0x30) & 0x7f);
    uVar34 = *(ulong *)(param_2 + 2);
    pcVar32 = (char *)(uVar34 & 0xff00ffffffffffff);
    if ((uVar34 & 0x80000000000000) == 0) goto LAB_04fa7ad4;
LAB_04fa7a9e:
    pcVar33 = *(char **)(pcVar32 + -8);
  }
  else {
    uVar38 = *(ulong *)(uVar35 - 8);
    uVar34 = *(ulong *)(param_2 + 2);
    pcVar32 = (char *)(uVar34 & 0xff00ffffffffffff);
    if ((uVar34 & 0x80000000000000) != 0) goto LAB_04fa7a9e;
LAB_04fa7ad4:
    pcVar33 = (char *)(ulong)((ushort)(uVar34 >> 0x30) & 0x7f);
  }
  bVar29 = (pcVar33 == (char *)0x0) != (uVar38 == 0);
  pcVar36 = (char *)(ulong)CONCAT31(uVar10,bVar29);
  if (bVar29) {
    pcVar36 = (char *)(ulong)CONCAT31(uVar10,uVar38 != 0);
    pcVar42 = pcVar32;
    goto LAB_04fa7af1;
  }
  pcVar42 = (char *)0x0;
  uVar34 = 0;
  do {
    pcVar40 = pcVar33 + -(long)pcVar42;
    pcVar36 = (char *)CONCAT71((int7)((ulong)pcVar36 >> 8),
                               pcVar33 >= pcVar42 && pcVar40 != (char *)0x0);
    if ((pcVar33 < pcVar42 || pcVar40 == (char *)0x0) ||
       (pcVar39 = (char *)(uVar38 - uVar34), uVar38 < uVar34 || pcVar39 == (char *)0x0))
    goto LAB_04fa7af1;
    pcVar1 = (char *)(uVar35 + uVar34);
    lVar24 = func_0x0eee2ef0(pcVar1,0x2e,pcVar39);
    uVar43 = lVar24 - uVar35;
    if (lVar24 - uVar35 == 0xffffffffffffffff) {
      uVar43 = uVar38;
    }
    if (lVar24 == 0) {
      uVar43 = uVar38;
    }
    pcVar44 = (char *)(uVar43 - uVar34);
    pcVar25 = pcVar44;
    if (pcVar39 < pcVar44) {
      pcVar25 = pcVar39;
    }
    pcVar2 = pcVar32 + (long)pcVar42;
    lVar24 = func_0x0eee2ef0(pcVar2,0x2e,pcVar40);
    pcVar36 = (char *)(lVar24 - (long)pcVar32);
    if ((char *)(lVar24 - (long)pcVar32) == (char *)0xffffffffffffffff) {
      pcVar36 = pcVar33;
    }
    if (lVar24 == 0) {
      pcVar36 = pcVar33;
    }
    pcVar30 = pcVar36 + -(long)pcVar42;
    if (pcVar40 < pcVar36 + -(long)pcVar42) {
      pcVar30 = pcVar40;
    }
    pcVar40 = pcVar32;
    pcVar41 = pcVar30;
    if (pcVar25 != pcVar30) break;
    pcVar42 = pcVar36 + 1;
    uVar34 = uVar43 + 1;
    pcVar36 = pcVar30;
    iVar23 = func_0x0eee3000(pcVar1,pcVar2,pcVar25);
    pcVar40 = pcVar1;
    pcVar41 = pcVar25;
  } while (iVar23 == 0);
  pcVar36 = pcVar1 + (long)pcVar25;
  pcVar32 = pcVar1;
  pcVar42 = pcVar36;
  if (pcVar25 == (char *)0x0) {
LAB_04fa7c63:
    if ((pcVar32 == pcVar36) || (pcVar42 = pcVar32, 9 < (byte)(*pcVar32 - 0x30U)))
    goto LAB_04fa7cac;
    lVar24 = 0x14;
    while (cVar3 = *pcVar32, lVar27 = lVar24, 0xf5 < (byte)(cVar3 - 0x3aU)) {
      pcVar32 = pcVar32 + 1;
      lVar27 = lVar24 + -1;
      auStack_d8[lVar24 + -1] = (ulong)(byte)(cVar3 - 0x30);
      if ((lVar24 == 1) || (lVar24 = lVar27, pcVar32 == pcVar36)) break;
    }
    uVar34 = auStack_d8[(int)lVar27];
    if ((int)lVar27 < 0x12) {
      lVar24 = (lVar27 << 0x20) >> 0x1d;
      puVar26 = (ulong *)((long)auStack_d8 + lVar24 + 8U);
      puVar37 = (ulong *)((long)auStack_d8 + lVar24 + 0x10U);
      if (puVar37 <= auStack_40) {
        puVar37 = auStack_40;
      }
      uVar35 = (long)puVar37 + (-(long)auStack_d8 - lVar24) + -9;
      if (uVar35 < 0x18) {
        plVar28 = (long *)&UNK_014edbe8;
      }
      else {
        uVar38 = (uVar35 >> 3) + 1;
        uVar43 = uVar38 & 0xfffffffffffffffc;
        plVar28 = (long *)(&UNK_014edbe8 + uVar43 * 8);
        puVar26 = puVar26 + uVar43;
        lVar47 = 0;
        lVar45 = 0;
        lVar46 = 0;
        uVar35 = 0;
        do {
          puVar37 = (ulong *)((long)auStack_d8 + uVar35 * 8 + lVar24 + 8);
          uVar14 = *puVar37;
          uVar15 = puVar37[1];
          puVar37 = (ulong *)((long)auStack_d8 + uVar35 * 8 + lVar24 + 0x18);
          uVar16 = *puVar37;
          uVar17 = puVar37[1];
          uVar18 = *(ulong *)(&UNK_014edbe8 + uVar35 * 8);
          uVar19 = *(ulong *)(&UNK_014edbf0 + uVar35 * 8);
          uVar20 = *(ulong *)(&UNK_014edbf8 + uVar35 * 8);
          uVar21 = *(ulong *)(&UNK_014edc00 + uVar35 * 8);
          uVar34 = uVar34 + (uVar18 & 0xffffffff) * (uVar14 & 0xffffffff) +
                   ((uVar14 >> 0x20) * (uVar18 & 0xffffffff) +
                    (uVar18 >> 0x20) * (uVar14 & 0xffffffff) << 0x20);
          lVar47 = lVar47 + (uVar19 & 0xffffffff) * (uVar15 & 0xffffffff) +
                   ((uVar15 >> 0x20) * (uVar19 & 0xffffffff) +
                    (uVar19 >> 0x20) * (uVar15 & 0xffffffff) << 0x20);
          lVar45 = lVar45 + (uVar20 & 0xffffffff) * (uVar16 & 0xffffffff) +
                   ((uVar16 >> 0x20) * (uVar20 & 0xffffffff) +
                    (uVar20 >> 0x20) * (uVar16 & 0xffffffff) << 0x20);
          lVar46 = lVar46 + (uVar21 & 0xffffffff) * (uVar17 & 0xffffffff) +
                   ((uVar17 >> 0x20) * (uVar21 & 0xffffffff) +
                    (uVar21 >> 0x20) * (uVar17 & 0xffffffff) << 0x20);
          uVar35 = uVar35 + 4;
        } while (uVar43 != uVar35);
        uVar34 = lVar46 + lVar47 + lVar45 + uVar34;
        if (uVar38 == uVar43) goto LAB_04fa7e19;
      }
      do {
        uVar34 = uVar34 + *plVar28 * *puVar26;
        puVar26 = puVar26 + 1;
        plVar28 = plVar28 + 1;
      } while (puVar26 < auStack_40);
    }
LAB_04fa7e19:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auStack_40[0];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulong *)(&UNK_014edbe0 + (0x1300000000 - (lVar27 << 0x20) >> 0x1d));
    pcVar42 = SUB168(auVar6 * auVar8,8);
    pcVar40 = SUB168(auVar6 * auVar8,0);
    pcVar32 = pcVar32 + -(ulong)(pcVar42 != (char *)0x0);
    if (pcVar32 == pcVar36) {
      if (!CARRY8(uVar34,(ulong)pcVar40)) goto LAB_04fa7e8f;
LAB_04fa7e88:
      bVar22 = 0;
      pcVar32 = pcVar36;
    }
    else {
      pcVar42 = (char *)(ulong)(byte)(*pcVar32 - 0x30U);
      if (((byte)(*pcVar32 - 0x30U) < 10) || (CARRY8(uVar34,(ulong)pcVar40))) {
        do {
          if (9 < (byte)(*pcVar32 - 0x30U)) {
            bVar22 = 0;
            goto LAB_04fa7e94;
          }
          pcVar32 = pcVar32 + 1;
        } while (pcVar32 != pcVar36);
        goto LAB_04fa7e88;
      }
LAB_04fa7e8f:
      pcVar40 = pcVar40 + uVar34;
      bVar22 = 1;
    }
  }
  else {
    if (pcVar44 < pcVar39) {
      pcVar39 = pcVar44;
    }
    do {
      if (*pcVar32 != '0') goto LAB_04fa7c63;
      pcVar39 = pcVar39 + -1;
      pcVar32 = pcVar32 + 1;
    } while (pcVar39 != (char *)0x0);
LAB_04fa7cac:
    if (pcVar42 == pcVar1) {
      bVar22 = 0;
      pcVar32 = pcVar1;
    }
    else {
      bVar22 = 1;
      pcVar40 = (char *)0x0;
      pcVar32 = pcVar42;
    }
  }
LAB_04fa7e94:
  uVar31 = (undefined7)((ulong)pcVar36 >> 8);
  bVar29 = (bool)(pcVar32 == pcVar36 & bVar22);
  pcVar32 = pcVar2 + (long)pcVar41;
  pcVar36 = pcVar2;
  pcVar33 = pcVar41;
  pcVar39 = pcVar32;
  if (pcVar41 == (char *)0x0) {
LAB_04fa7ed2:
    if ((pcVar36 == pcVar32) ||
       (pcVar42 = (char *)(ulong)(byte)(*pcVar36 - 0x30U), pcVar39 = pcVar36,
       9 < (byte)(*pcVar36 - 0x30U))) goto LAB_04fa7f20;
    lVar24 = 0x14;
    while (cVar3 = *pcVar36, lVar27 = lVar24, 0xf5 < (byte)(cVar3 - 0x3aU)) {
      pcVar36 = pcVar36 + 1;
      lVar27 = lVar24 + -1;
      auStack_d8[lVar24 + -1] = (ulong)(byte)(cVar3 - 0x30);
      if ((lVar24 == 1) || (lVar24 = lVar27, pcVar36 == pcVar32)) break;
    }
    uVar34 = auStack_d8[(int)lVar27];
    if ((int)lVar27 < 0x12) {
      lVar24 = (lVar27 << 0x20) >> 0x1d;
      puVar26 = (ulong *)((long)auStack_d8 + lVar24 + 8U);
      puVar37 = (ulong *)((long)auStack_d8 + lVar24 + 0x10U);
      if (puVar37 <= auStack_40) {
        puVar37 = auStack_40;
      }
      uVar35 = (long)puVar37 + (-(long)auStack_d8 - lVar24) + -9;
      if (uVar35 < 0x18) {
        plVar28 = (long *)&UNK_014edbe8;
      }
      else {
        uVar35 = (uVar35 >> 3) + 1;
        uVar38 = uVar35 & 0xfffffffffffffffc;
        plVar28 = (long *)(&UNK_014edbe8 + uVar38 * 8);
        puVar26 = puVar26 + uVar38;
        lVar47 = 0;
        lVar45 = 0;
        lVar46 = 0;
        uVar43 = 0;
        do {
          puVar37 = (ulong *)((long)auStack_d8 + uVar43 * 8 + lVar24 + 8);
          uVar14 = *puVar37;
          uVar15 = puVar37[1];
          puVar37 = (ulong *)((long)auStack_d8 + uVar43 * 8 + lVar24 + 0x18);
          uVar16 = *puVar37;
          uVar17 = puVar37[1];
          uVar18 = *(ulong *)(&UNK_014edbe8 + uVar43 * 8);
          uVar19 = *(ulong *)(&UNK_014edbf0 + uVar43 * 8);
          uVar20 = *(ulong *)(&UNK_014edbf8 + uVar43 * 8);
          uVar21 = *(ulong *)(&UNK_014edc00 + uVar43 * 8);
          uVar34 = uVar34 + (uVar18 & 0xffffffff) * (uVar14 & 0xffffffff) +
                   ((uVar14 >> 0x20) * (uVar18 & 0xffffffff) +
                    (uVar18 >> 0x20) * (uVar14 & 0xffffffff) << 0x20);
          lVar47 = lVar47 + (uVar19 & 0xffffffff) * (uVar15 & 0xffffffff) +
                   ((uVar15 >> 0x20) * (uVar19 & 0xffffffff) +
                    (uVar19 >> 0x20) * (uVar15 & 0xffffffff) << 0x20);
          lVar45 = lVar45 + (uVar20 & 0xffffffff) * (uVar16 & 0xffffffff) +
                   ((uVar16 >> 0x20) * (uVar20 & 0xffffffff) +
                    (uVar20 >> 0x20) * (uVar16 & 0xffffffff) << 0x20);
          lVar46 = lVar46 + (uVar21 & 0xffffffff) * (uVar17 & 0xffffffff) +
                   ((uVar17 >> 0x20) * (uVar21 & 0xffffffff) +
                    (uVar21 >> 0x20) * (uVar17 & 0xffffffff) << 0x20);
          uVar43 = uVar43 + 4;
        } while (uVar38 != uVar43);
        uVar34 = lVar46 + lVar47 + lVar45 + uVar34;
        if (uVar35 == uVar38) goto LAB_04fa80af;
      }
      do {
        uVar34 = uVar34 + *plVar28 * *puVar26;
        puVar26 = puVar26 + 1;
        plVar28 = plVar28 + 1;
      } while (puVar26 < auStack_40);
    }
LAB_04fa80af:
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auStack_40[0];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulong *)(&UNK_014edbe0 + (0x1300000000 - (lVar27 << 0x20) >> 0x1d));
    uVar35 = SUB168(auVar7 * auVar9,0);
    pcVar39 = pcVar36 + -(ulong)(SUB168(auVar7 * auVar9,8) != 0);
    if (pcVar39 != pcVar32) {
      pcVar42 = (char *)CONCAT71((int7)(uVar34 + uVar35 >> 8),CARRY8(uVar34,uVar35));
      if (((byte)(*pcVar39 - 0x30U) < 10) || (CARRY8(uVar34,uVar35))) goto LAB_04fa810d;
LAB_04fa80fd:
      pcVar36 = (char *)(uVar35 + uVar34);
      goto LAB_04fa7f2b;
    }
    pcVar42 = (char *)(uVar34 + uVar35);
    if (!CARRY8(uVar34,uVar35)) goto LAB_04fa80fd;
LAB_04fa810d:
    pcVar36 = (char *)CONCAT71(uVar31,1);
    if (bVar29 != false) goto LAB_04fa7af1;
  }
  else {
    do {
      pcVar42 = pcVar33;
      if (*pcVar36 != '0') goto LAB_04fa7ed2;
      pcVar42 = pcVar33 + -1;
      pcVar36 = pcVar36 + 1;
      pcVar33 = pcVar42;
    } while (pcVar42 != (char *)0x0);
LAB_04fa7f20:
    if (pcVar39 == pcVar2) goto LAB_04fa810d;
    pcVar36 = (char *)0x0;
LAB_04fa7f2b:
    pcVar42 = (char *)CONCAT71((int7)((ulong)pcVar42 >> 8),pcVar39 != pcVar32);
    if (bVar29 == true && pcVar39 == pcVar32) {
      pcVar36 = (char *)CONCAT71(uVar31,pcVar40 < pcVar36);
      goto LAB_04fa7af1;
    }
    pcVar36 = (char *)CONCAT71(uVar31,bVar29);
    if ((pcVar39 == pcVar32) != bVar29) goto LAB_04fa7af1;
  }
  pcVar42 = pcVar25;
  if (pcVar41 < pcVar25) {
    pcVar42 = pcVar41;
  }
  iVar23 = func_0x0eee2ff0(pcVar1,pcVar2,pcVar42);
  pcVar42 = (char *)(ulong)(iVar23 < 0);
  pcVar36 = (char *)(ulong)(pcVar25 < pcVar41);
  if (iVar23 != 0) {
    pcVar36 = pcVar42;
  }
  if (pcVar25 == pcVar30) {
    pcVar36 = pcVar42;
  }
LAB_04fa7af1:
  auVar49._0_8_ = (ulong)pcVar36 & 0xffffffff;
  auVar49._8_8_ = pcVar42;
  return auVar49;
}


