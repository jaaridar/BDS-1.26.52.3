/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1a3760 (ELF vaddr 0xd0a3760)
 * Label: caller-of-callee
 * Body:  [[0d1a3760, 0d1a409b] [0d1a40a0, 0d1a40d3] [0d1a40e0, 0d1a4cbc] [0d1a4e02, 0d1a4e13] [0d1a4ede, 0d1a4f4c]]
 * Ghidra: FUN_0d1a3760
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1a3760(long param_1,byte *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  byte bVar11;
  short sVar12;
  int iVar13;
  undefined8 *puVar14;
  byte ******ppppppbVar15;
  byte *******pppppppbVar16;
  long lVar17;
  undefined8 *puVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte *******pppppppbVar21;
  undefined8 uVar22;
  byte *******pppppppbVar23;
  long lVar24;
  float *pfVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  bool bVar29;
  byte ******ppppppbVar30;
  byte *****pppppbVar31;
  byte ******ppppppbVar32;
  long lVar33;
  byte *******pppppppbVar34;
  bool bVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 *puStack_820;
  undefined1 auStack_808 [8];
  byte *******pppppppbStack_800;
  byte ******ppppppbStack_7f8;
  undefined8 *puStack_7f0;
  long lStack_7e8;
  undefined8 uStack_7e0;
  long lStack_7d0;
  ulong uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  long lStack_7a8;
  byte ******ppppppbStack_7a0;
  float fStack_794;
  undefined8 uStack_790;
  ulong uStack_788;
  long lStack_780;
  ulong uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  long lStack_760;
  undefined1 auStack_758 [16];
  long lStack_748;
  long lStack_740;
  long lStack_738;
  byte ******ppppppbStack_730;
  byte *******pppppppbStack_728;
  ulong uStack_720;
  undefined1 auStack_718 [40];
  ulong uStack_6f0;
  ulong uStack_6e8;
  byte *******pppppppbStack_6e0;
  undefined1 auStack_6d8 [8];
  byte ******ppppppbStack_6d0;
  byte ******ppppppbStack_6c8;
  int iStack_6c0;
  char cStack_6bc;
  byte ******ppppppbStack_6b8;
  byte ******appppppbStack_6b0 [9];
  float fStack_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  undefined1 auStack_658 [24];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  ulong auStack_5f0 [2];
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5c8;
  ulong uStack_5c0;
  byte bStack_5b8;
  undefined7 uStack_5b7;
  undefined8 uStack_5a8;
  undefined1 auStack_5a0 [96];
  uint uStack_540;
  undefined1 auStack_538 [80];
  undefined8 uStack_4e8;
  byte *******pppppppbStack_4e0;
  ulong uStack_4d8;
  byte *****pppppbStack_4d0;
  float fStack_4c8;
  undefined4 uStack_4b8;
  undefined1 *puStack_498;
  undefined1 auStack_488 [48];
  undefined1 *puStack_458;
  undefined1 auStack_448 [48];
  undefined1 *puStack_418;
  undefined1 auStack_408 [800];
  ulong uStack_e8;
  undefined1 auStack_e0 [40];
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [24];
  code *pcStack_90;
  undefined1 auStack_80 [80];
  
  lVar17 = *(long *)(param_1 + 8);
  pppppppbVar21 = (byte *******)(param_2 + 1);
  pppppppbStack_728 = *(byte ********)(param_2 + 0x10);
  uStack_720 = *(ulong *)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pppppppbStack_728 = pppppppbVar21;
    uStack_720 = (ulong)(*param_2 >> 1);
  }
  func_0x05f72110(&uStack_4e8,&pppppppbStack_728);
  if (uStack_e8 != 4) {
    return;
  }
  if ((int)uStack_4e8 != 0x6e6f736a) {
    return;
  }
  uStack_7c8 = 0;
  uStack_7c0 = 0;
  uStack_7b8 = 0;
  lVar24 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  lStack_7e8 = param_1;
  func_0x0d62a0d0(*(undefined8 *)(lVar24 + -0x28),param_2,&uStack_7c8,*(undefined4 *)(lVar24 + -8));
  bVar35 = (*param_2 & 1) == 0;
  pppppppbVar34 = *(byte ********)(param_2 + 0x10);
  if (bVar35) {
    pppppppbVar34 = pppppppbVar21;
  }
  puVar18 = (undefined8 *)(ulong)(*param_2 >> 1);
  if (!bVar35) {
    puVar18 = *(undefined8 **)(param_2 + 8);
  }
  puVar26 = (undefined8 *)((long)puVar18 + 1);
  while (puVar26 != (undefined8 *)0x1) {
    pbVar2 = (byte *)((long)pppppppbVar34 + -2) + (long)puVar26;
    puVar26 = (undefined8 *)((long)puVar26 - 1);
    if ((*pbVar2 == 0x5c) || (*pbVar2 == 0x2f)) goto joined_r0x0d1a3865;
  }
  puVar26 = (undefined8 *)0x0;
joined_r0x0d1a3865:
  puVar14 = puVar18;
  if (puVar18 == (undefined8 *)0x0) {
LAB_0d1a38c1:
    uVar28 = (long)puVar18 - (long)puVar26;
    if (puVar18 < puVar26) goto LAB_0d1a4c28;
    func_0x0eee2dd0(&uStack_4e8,0,0x408);
    if (uVar28 < 0x400) {
      if (puVar18 != puVar26) {
LAB_0d1a38ef:
        pppppppbVar34 = (byte *******)((long)pppppppbVar34 + (long)puVar26);
        memcpy(&uStack_4e8,pppppppbVar34,uVar28);
      }
LAB_0d1a3905:
      *(undefined1 *)((long)&uStack_4e8 + uVar28) = 0;
      uStack_e8 = uVar28;
    }
LAB_0d1a3915:
    uVar28 = func_0x0eee2e90(&uStack_4e8);
    if (0xfffffffffffffff7 < uVar28) goto LAB_0d1a4c34;
    if (uVar28 < 0x17) {
      uStack_790 = (undefined8 *)CONCAT71(uStack_790._1_7_,(char)uVar28 * '\x02');
      lVar24 = (long)&uStack_790 + 1;
      if (uVar28 != 0) goto LAB_0d1a39a7;
    }
    else {
      uVar27 = 0x1a;
      if ((uVar28 | 7) != 0x17) {
        uVar27 = (uVar28 | 7) + 1;
      }
      lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27);
      if (lVar24 == 0) {
        func_0x0eec74c0(uVar27,0);
      }
      puVar26 = (undefined8 *)(uVar27 | 1);
      uStack_790 = puVar26;
      uStack_788 = uVar28;
      lStack_780 = lVar24;
LAB_0d1a39a7:
      memcpy(lVar24,&uStack_4e8,uVar28);
    }
    *(undefined1 *)(lVar24 + uVar28) = 0;
    bVar35 = (*param_2 & 1) != 0;
    if (bVar35) {
      pppppppbVar21 = *(byte ********)(param_2 + 0x10);
    }
    pppppppbVar34 = (byte *******)(ulong)(*param_2 >> 1);
    if (bVar35) {
      pppppppbVar34 = *(byte ********)(param_2 + 8);
    }
    if ((byte *******)0xfffffffffffffff7 < pppppppbVar34) goto LAB_0d1a4c39;
    if (pppppppbVar34 < (byte *******)0x17) {
      auStack_808[0] = (char)pppppppbVar34 * '\x02';
      ppppppbVar15 = (byte ******)(auStack_808 + 1);
      if (pppppppbVar34 != (byte *******)0x0) goto LAB_0d1a3a4c;
    }
    else {
      uVar28 = 0x1a;
      if (((ulong)pppppppbVar34 | 7) != 0x17) {
        uVar28 = ((ulong)pppppppbVar34 | 7) + 1;
      }
      ppppppbVar15 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
      if (ppppppbVar15 == (byte ******)0x0) {
        func_0x0eec74c0(uVar28,0);
      }
      auStack_808 = (undefined1  [8])(uVar28 | 1);
      pppppppbStack_800 = pppppppbVar34;
      ppppppbStack_7f8 = ppppppbVar15;
LAB_0d1a3a4c:
      func_0x0eee2ee0(ppppppbVar15,pppppppbVar21,pppppppbVar34);
    }
    *(byte *)((long)ppppppbVar15 + (long)pppppppbVar34) = 0;
    lVar24 = lStack_7e8;
    bVar5 = *(byte *)(**(long **)(*(long *)(*(long *)(lStack_7e8 + 0x18) + 8) + -0x28) + 0x88);
    pppppppbVar21 = (byte *******)(ulong)bVar5;
    bVar35 = ((ulong)auStack_808 & 1) == 0;
    uStack_4e8 = ppppppbStack_7f8;
    if (bVar35) {
      uStack_4e8 = (byte ******)(auStack_808 + 1);
    }
    lVar33 = *(long *)(lStack_7e8 + 0x10);
    pppppppbStack_4e0 = (byte *******)((ulong)auStack_808 >> 1 & 0x7f);
    if (!bVar35) {
      pppppppbStack_4e0 = pppppppbStack_800;
    }
    uStack_4d8 = CONCAT71(uStack_4d8._1_7_,1);
    auStack_5f0[0] = 0;
    FUN_0eeb79f0(auStack_658,auStack_5f0);
    if ((auStack_5f0[0] >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_5f0[0] & 0xff00ffffffffffff) - 8);
    }
    uStack_778 = uStack_7c8;
    uStack_770 = uStack_7c0;
    uStack_768 = uStack_7b8;
    uStack_7c8 = 0;
    uStack_7c0 = 0;
    uStack_7b8 = 0;
    func_0x0d686f30(auStack_5f0,&UNK_0131d675,0x15,lVar17 + 0xd8,&uStack_778);
    if ((uStack_778 & 1) != 0) {
      func_0x0412a280(uStack_768,uStack_778 & 0xfffffffffffffffe);
    }
    uStack_4e8 = (byte ******)0x0;
    pppppppbStack_4e0 = (byte *******)0x0;
    uStack_4d8 = 0;
    func_0x0d1a4f80(auStack_718,lVar17,auStack_5f0,&uStack_4e8,1);
    if ((uStack_4d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4d8 & 0xff00ffffffffffff) - 8);
    }
    uStack_4d8 = 0;
    if (((ulong)pppppppbStack_4e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppbStack_4e0 & 0xff00ffffffffffff) - 8);
    }
    uStack_640 = 0xffffffff;
    uStack_638 = 0;
    uStack_630 = 0;
    uStack_628 = 0;
    uStack_620 = 0;
    uStack_618 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
    uStack_600 = 0;
    uStack_5f8 = 0;
    cVar10 = func_0x0d5cf650(auStack_718,0x26,&uStack_640);
    func_0x05f43a40(&uStack_640);
    if (cVar10 == '\0') {
      uStack_4e8 = (byte ******)(auStack_808 + 1);
      if (((ulong)auStack_808 & 1) != 0) {
        uStack_4e8 = ppppppbStack_7f8;
      }
      func_0x07026a30(1,3,0x26,&UNK_01219ad6,&uStack_4e8);
      func_0x05ebb920(auStack_e0,auStack_718);
    }
    else {
      pppppppbVar20 = (byte *******)auStack_6d8;
      pppppppbVar34 = (byte *******)&pppppppbStack_6e0;
      if (cStack_6bc != '\x02') {
        pppppppbVar20 = pppppppbStack_6e0 + 1;
        pppppppbVar34 = pppppppbStack_6e0;
      }
      pppppppbVar19 = (byte *******)0x0;
      if (iStack_6c0 == -0x4348ba63) {
        pppppppbVar19 = pppppppbVar34;
      }
      pppppppbVar34 = (byte *******)0x8;
      if (iStack_6c0 == -0x4348ba63) {
        pppppppbVar34 = pppppppbVar20;
      }
      bVar11 = func_0x0b5f9f50();
      puVar26 = (undefined8 *)0x80000000000000;
      if ((byte)(bVar5 ^ 1 | bVar11) == 1) {
        if ((bVar5 == 0) && (bVar11 == 1)) {
          ppppppbVar15 = (byte ******)(auStack_6d8 + 1);
          pppppppbVar21 = &ppppppbStack_6c8;
          if (cStack_6bc != '\x02') {
            ppppppbVar15 = (byte ******)((long)pppppppbStack_6e0 + 9);
            pppppppbVar21 = pppppppbStack_6e0 + 3;
          }
          pppppppbVar20 = (byte *******)0x18;
          if (iStack_6c0 == -0x4348ba63) {
            pppppppbVar20 = pppppppbVar21;
          }
          uStack_4e8 = (byte ******)0x9;
          if (iStack_6c0 == -0x4348ba63) {
            uStack_4e8 = ppppppbVar15;
          }
          if (((ulong)*pppppppbVar34 & 1) != 0) {
            uStack_4e8 = *pppppppbVar20;
          }
          func_0x0b64c7b0(1,3,0x26,&UNK_011afa47,&uStack_4e8);
          goto LAB_0d1a3daf;
        }
        pppppppbVar20 = appppppbStack_6b0;
        pppppppbVar16 = &ppppppbStack_6b8;
        if (cStack_6bc != '\x02') {
          pppppppbVar20 = pppppppbStack_6e0 + 6;
          pppppppbVar16 = pppppppbStack_6e0 + 5;
        }
        pppppppbVar23 = (byte *******)0x28;
        if (iStack_6c0 == -0x4348ba63) {
          pppppppbVar23 = pppppppbVar16;
        }
        pppppppbVar16 = (byte *******)0x30;
        if (iStack_6c0 == -0x4348ba63) {
          pppppppbVar16 = pppppppbVar20;
        }
        ppppppbVar15 = *pppppppbVar23;
        ppppppbVar30 = *pppppppbVar16;
        if (ppppppbVar15 == ppppppbVar30) {
          puVar14 = (undefined8 *)0x0;
          puStack_820 = (undefined8 *)0x0;
          puVar18 = (undefined8 *)0x0;
LAB_0d1a4513:
          if (((long)puVar14 - (long)puVar18 == -0x18) ||
             ((puVar14 != (undefined8 *)0x0 && (puVar18 == (undefined8 *)0x0)))) {
            func_0x04890760();
            pppppppbVar34 = pppppppbStack_6e0;
            goto LAB_0d1a4c28;
          }
          func_0x0d76ba50(&uStack_4e8,((long)puVar14 - (long)puVar18 >> 3) * -0x5555555555555555);
          cVar10 = func_0x0d770830(&uStack_4e8);
          if (cVar10 == '\0') {
            if ((uStack_4d8 & 0xffffffff) != 0) {
              uVar28 = 0;
              do {
                if (*(char *)((long)pppppppbStack_4e0 + uVar28) != '\0') {
                  sVar12 = func_0x0d770980(lVar33,&uStack_4e8,bVar5);
                  goto LAB_0d1a4865;
                }
                uVar28 = uVar28 + 1;
              } while ((uStack_4d8 & 0xffffffff) != uVar28);
            }
            sVar12 = *(short *)(lVar33 + 2);
          }
          else {
            sVar12 = *(short *)(lVar33 + 4);
          }
LAB_0d1a4865:
          uStack_7e0 = pppppppbVar19;
          lVar17 = func_0x0781fab0(lVar33 + 0x30,pppppppbVar19,&UNK_01563a4f,&uStack_7e0,&lStack_760
                                  );
          *(short *)(lVar17 + 0x38) = sVar12;
          if (sVar12 == -1) {
            pppppppbVar20 = (byte *******)(auStack_6d8 + 1);
            pppppppbVar21 = &ppppppbStack_6c8;
            if (cStack_6bc != '\x02') {
              pppppppbVar20 = (byte *******)((long)pppppppbStack_6e0 + 9);
              pppppppbVar21 = pppppppbStack_6e0 + 3;
            }
            pppppppbVar19 = (byte *******)0x18;
            if (iStack_6c0 == -0x4348ba63) {
              pppppppbVar19 = pppppppbVar21;
            }
            uStack_7e0 = (byte *******)0x9;
            if (iStack_6c0 == -0x4348ba63) {
              uStack_7e0 = pppppppbVar20;
            }
            if (((ulong)*pppppppbVar34 & 1) != 0) {
              uStack_7e0 = (byte *******)*pppppppbVar19;
            }
            func_0x05626c00(1,2,0x26,&UNK_0143fb50,&uStack_7e0);
          }
          func_0x05ebb920(auStack_e0,auStack_718);
          if (puStack_418 != (undefined1 *)0x0 && auStack_408 != puStack_418) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
          }
          lVar24 = lStack_7e8;
          if (puStack_458 != (undefined1 *)0x0 && auStack_448 != puStack_458) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
          }
          if (puStack_498 != (undefined1 *)0x0 && auStack_488 != puStack_498) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
          }
          if (pppppppbStack_4e0 != (byte *******)0x0 &&
              (byte *******)&pppppbStack_4d0 != pppppppbStack_4e0) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
          }
          if (puVar18 != (undefined8 *)0x0) {
            func_0x0412a280(puVar18,(long)puStack_820 - (long)puVar18);
          }
          goto LAB_0d1a3e4d;
        }
        lVar17 = (long)ppppppbVar30 - (long)ppppppbVar15;
        uVar28 = (lVar17 >> 3) * -0x5555555555555555;
        pfVar25 = (float *)((long)ppppppbVar15 + 0x14);
        ppppppbVar32 = (byte ******)0x0;
        auVar38 = _DAT_014e3820;
        fVar39 = _DAT_011987f4;
        auVar40 = _DAT_014e1d80;
        fVar37 = _DAT_011988dc;
        bVar35 = false;
        do {
          bVar29 = bVar35;
          fVar41 = pfVar25[-5];
          fVar42 = pfVar25[-2];
          ppppppbStack_7a0 = ppppppbVar15;
          ppppppbStack_730 = ppppppbVar30;
          if (fVar42 <= fVar41) {
LAB_0d1a4495:
            ppppppbVar15 = (byte ******)(auStack_6d8 + 1);
            pppppppbVar21 = &ppppppbStack_6c8;
            if (cStack_6bc != '\x02') {
              ppppppbVar15 = (byte ******)((long)pppppppbStack_6e0 + 9);
              pppppppbVar21 = pppppppbStack_6e0 + 3;
            }
            uStack_4e8 = ppppppbVar32;
            pppppppbVar20 = (byte *******)0x18;
            if (iStack_6c0 == -0x4348ba63) {
              pppppppbVar20 = pppppppbVar21;
            }
            ppppppbVar30 = (byte ******)0x9;
            if (iStack_6c0 == -0x4348ba63) {
              ppppppbVar30 = ppppppbVar15;
            }
            if (((ulong)*pppppppbVar34 & 1) != 0) {
              ppppppbVar30 = *pppppppbVar20;
            }
            func_0x0d193f00(&uStack_4e8,ppppppbVar30);
            goto LAB_0d1a4bcf;
          }
          fVar43 = pfVar25[-4];
          fVar44 = pfVar25[-1];
          if (fVar44 <= fVar43) goto LAB_0d1a4495;
          fVar3 = pfVar25[-3];
          fVar4 = *pfVar25;
          if (fVar4 <= fVar3) goto LAB_0d1a4495;
          if (((((fVar41 < _DAT_01198980) || (_DAT_011986e4 < fVar42)) || (fVar43 < _DAT_01198980))
              || ((_DAT_011986e4 < fVar44 || (fVar3 < _DAT_01198980)))) || (_DAT_011986e4 < fVar4))
          {
            ppppppbVar15 = (byte ******)(auStack_6d8 + 1);
            pppppppbVar21 = &ppppppbStack_6c8;
            if (cStack_6bc != '\x02') {
              ppppppbVar15 = (byte ******)((long)pppppppbStack_6e0 + 9);
              pppppppbVar21 = pppppppbStack_6e0 + 3;
            }
            pppppppbVar20 = (byte *******)0x18;
            if (iStack_6c0 == -0x4348ba63) {
              pppppppbVar20 = pppppppbVar21;
            }
            ppppppbVar30 = (byte ******)0x9;
            if (iStack_6c0 == -0x4348ba63) {
              ppppppbVar30 = ppppppbVar15;
            }
            if (((ulong)*pppppppbVar34 & 1) != 0) {
              ppppppbVar30 = *pppppppbVar20;
            }
            func_0x0d194090(ppppppbVar32,ppppppbVar30);
            goto LAB_0d1a4bcf;
          }
          auVar8._4_4_ = fVar43;
          auVar8._0_4_ = fVar41;
          auVar8._8_8_ = 0;
          auVar40 = minps(auVar40,auVar8);
          if (fVar3 <= fVar39) {
            fVar39 = fVar3;
          }
          auVar7._4_4_ = fVar44;
          auVar7._0_4_ = fVar42;
          auVar7._8_8_ = 0;
          auVar38 = maxps(auVar38,auVar7);
          if (fVar37 <= fVar4) {
            fVar37 = fVar4;
          }
          ppppppbVar32 = (byte ******)((long)ppppppbVar32 + 1);
          pfVar25 = pfVar25 + 6;
          bVar35 = (bool)(bVar29 | (0.0 < fVar4 &&
                                   ((fVar3 < _DAT_01198634 && (0.0 < fVar44 && 0.0 < fVar42)) &&
                                   (fVar41 < _DAT_01198634 && fVar43 < _DAT_01198634))));
        } while ((byte ******)(uVar28 + (uVar28 == 0)) != ppppppbVar32);
        if (bVar29 || 0.0 < fVar4 &&
                      ((fVar3 < _DAT_01198634 && (0.0 < fVar44 && 0.0 < fVar42)) &&
                      (fVar41 < _DAT_01198634 && fVar43 < _DAT_01198634))) {
          fVar41 = auVar38._0_4_ - auVar40._0_4_;
          if (_DAT_011986e4 < fVar41) {
            lVar24 = 0;
          }
          else {
            fVar41 = auVar38._4_4_ - auVar40._4_4_;
            if (_DAT_011986e4 < fVar41) {
              lVar24 = 1;
            }
            else {
              fVar41 = fVar37 - fVar39;
              lVar24 = 2;
              if (fVar41 <= _DAT_011986e4) {
                lStack_7a8 = lVar33;
                if (0xaaaaaaaaaaaaaaa < uVar28) {
LAB_0d1a4c98:
                  uVar22 = func_0x049f4b30();
                  FUN_041084d6(&DAT_0f5ea4a0);
                  func_0x05ebba90(auStack_e0);
                  if (((ulong)uStack_790 & 1) != 0) goto LAB_0d1a4efa;
                  do {
                    while ((uStack_7c8 & 1) == 0) {
                      _Unwind_Resume(uVar22);
LAB_0d1a4efa:
                      func_0x0412a280(lStack_780,(ulong)uStack_790 & 0xfffffffffffffffe);
                    }
                    func_0x0412a280(uStack_7b8,uStack_7c8 & 0xfffffffffffffffe);
                    uVar22 = _Unwind_Resume(uVar22);
                  } while( true );
                }
                puVar18 = (undefined8 *)func_0x0ee32660(lVar17);
                puStack_820 = (undefined8 *)(lVar17 + (long)puVar18);
                ppppppbVar15 = ppppppbStack_7a0;
                puVar26 = puVar18;
                lVar33 = lStack_7a8;
                do {
                  lVar17 = lStack_7a8;
                  fVar39 = *(float *)(ppppppbVar15 + 1) * _DAT_01198a08;
                  auVar38._0_8_ =
                       CONCAT44((float)((ulong)*ppppppbVar15 >> 0x20) * _UNK_014e6a74,
                                SUB84(*ppppppbVar15,0) * _DAT_014e6a70);
                  auVar38._8_4_ = _UNK_014e6a78 * 0.0;
                  auVar38._12_4_ = _UNK_014e6a7c * 0.0;
                  fVar41 = (float)*(undefined8 *)((long)ppppppbVar15 + 0xc) * _DAT_014e6a70;
                  fVar42 = (float)((ulong)*(undefined8 *)((long)ppppppbVar15 + 0xc) >> 0x20) *
                           _UNK_014e6a74;
                  fVar43 = _UNK_014e6a78 * 0.0;
                  fVar44 = _UNK_014e6a7c * 0.0;
                  fVar37 = *(float *)((long)ppppppbVar15 + 0x14) * _DAT_01198a08;
                  ppppppbStack_7a0 = ppppppbVar15;
                  if (puVar26 < puStack_820) {
                    auVar36._8_4_ = auVar38._8_4_;
                    auVar36._0_8_ = auVar38._0_8_;
                    auVar36._12_4_ = auVar38._12_4_;
                    auVar40._4_4_ = fVar42;
                    auVar40._0_4_ = fVar41;
                    auVar40._8_4_ = fVar43;
                    auVar40._12_4_ = fVar44;
                    auVar40 = minps(auVar36,auVar40);
                    fVar3 = fVar39;
                    if (fVar37 <= fVar39) {
                      fVar3 = fVar37;
                    }
                    *puVar26 = auVar40._0_8_;
                    *(float *)(puVar26 + 1) = fVar3;
                    auVar6._4_4_ = fVar42;
                    auVar6._0_4_ = fVar41;
                    auVar6._8_4_ = fVar43;
                    auVar6._12_4_ = fVar44;
                    auVar38 = maxps(auVar38,auVar6);
                    if (fVar39 <= fVar37) {
                      fVar39 = fVar37;
                    }
                    *(long *)((long)puVar26 + 0xc) = auVar38._0_8_;
                    *(float *)((long)puVar26 + 0x14) = fVar39;
                    puVar26 = puVar26 + 3;
                  }
                  else {
                    puStack_7f0 = (undefined8 *)CONCAT44(puStack_7f0._4_4_,fVar39);
                    lStack_738 = (long)puVar26 - (long)puVar18;
                    uVar28 = (lStack_738 >> 3) * -0x5555555555555555 + 1;
                    auStack_758 = auVar38;
                    fStack_668 = fVar41;
                    fStack_664 = fVar42;
                    fStack_660 = fVar43;
                    fStack_65c = fVar44;
                    if (0xaaaaaaaaaaaaaaa < uVar28) {
                      func_0x049f4b30();
LAB_0d1a4c8e:
                      func_0x04882eb0();
                      goto LAB_0d1a4c98;
                    }
                    lStack_740 = (long)puStack_820 - (long)puVar18;
                    uVar27 = (lStack_740 >> 3) * 0x5555555555555556;
                    if (uVar28 < uVar27) {
                      uVar28 = uVar27;
                    }
                    if (0x555555555555554 < (ulong)((lStack_740 >> 3) * -0x5555555555555555)) {
                      uVar28 = 0xaaaaaaaaaaaaaaa;
                    }
                    fStack_794 = fVar37;
                    if (uVar28 == 0) {
                      lVar24 = 0;
                    }
                    else {
                      if (0xaaaaaaaaaaaaaaa < uVar28) goto LAB_0d1a4c8e;
                      lStack_748 = uVar28 * 0x18;
                      lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                      if (lVar24 == 0) {
                        func_0x0eec74c0(lStack_748,0);
                        lVar24 = 0;
                      }
                    }
                    puStack_820 = (undefined8 *)(lVar24 + uVar28 * 0x18);
                    auVar9._4_4_ = fStack_664;
                    auVar9._0_4_ = fStack_668;
                    auVar9._8_4_ = fStack_660;
                    auVar9._12_4_ = fStack_65c;
                    auVar38 = minps(auStack_758,auVar9);
                    fVar39 = puStack_7f0._0_4_;
                    if (fStack_794 <= puStack_7f0._0_4_) {
                      fVar39 = fStack_794;
                    }
                    *(long *)(lVar24 + lStack_738) = auVar38._0_8_;
                    *(float *)(lVar24 + 8 + lStack_738) = fVar39;
                    auVar38 = maxps(auStack_758,auVar9);
                    if (puStack_7f0._0_4_ <= fStack_794) {
                      puStack_7f0._0_4_ = fStack_794;
                    }
                    *(long *)(lVar24 + 0xc + lStack_738) = auVar38._0_8_;
                    *(float *)(lVar24 + 0x14 + lStack_738) = puStack_7f0._0_4_;
                    uVar28 = SUB168(SEXT816(lStack_738) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                    puStack_7f0 = (undefined8 *)(lVar24 + lStack_738 + 0x18);
                    lVar24 = lVar24 + lStack_738 + ((uVar28 >> 2) - ((long)uVar28 >> 0x3f)) * 0x18;
                    auStack_758._0_8_ = lVar24;
                    memcpy(lVar24,puVar18,lStack_738);
                    if (puVar18 != (undefined8 *)0x0) {
                      func_0x0412a280(puVar18,lStack_740);
                    }
                    puVar18 = (undefined8 *)auStack_758._0_8_;
                    puVar26 = puStack_7f0;
                    lVar33 = lVar17;
                  }
                  ppppppbVar15 = ppppppbStack_7a0 + 3;
                  puVar14 = puVar26;
                } while (ppppppbVar15 != ppppppbStack_730);
                goto LAB_0d1a4513;
              }
            }
          }
          pppppppbVar20 = &ppppppbStack_6d0;
          ppppppbVar15 = (byte ******)(auStack_6d8 + 1);
          pppppppbVar21 = &ppppppbStack_6c8;
          if (cStack_6bc != '\x02') {
            pppppppbVar20 = pppppppbStack_6e0 + 2;
            ppppppbVar15 = (byte ******)((long)pppppppbStack_6e0 + 9);
            pppppppbVar21 = pppppppbStack_6e0 + 3;
          }
          bVar35 = iStack_6c0 == -0x4348ba63;
          pppppppbVar19 = (byte *******)0x18;
          if (bVar35) {
            pppppppbVar19 = pppppppbVar21;
          }
          uStack_4e8 = (byte ******)0x9;
          if (bVar35) {
            uStack_4e8 = ppppppbVar15;
          }
          pppppppbVar21 = (byte *******)0x10;
          if (bVar35) {
            pppppppbVar21 = pppppppbVar20;
          }
          bVar35 = (*(byte *)pppppppbVar34 & 1) != 0;
          if (bVar35) {
            uStack_4e8 = *pppppppbVar19;
          }
          pppppppbStack_4e0 = (byte *******)(ulong)(*(byte *)pppppppbVar34 >> 1);
          if (bVar35) {
            pppppppbStack_4e0 = (byte *******)*pppppppbVar21;
          }
          uStack_4d8 = CONCAT71(uStack_4d8._1_7_,(&UNK_01d9385d)[lVar24]);
          uStack_4b8 = 0x41f00000;
          fStack_4c8 = fVar41;
          func_0x0470d9a0(&uStack_7e0,&UNK_0143fb98,0x7b,0x998d,&uStack_4e8);
          lStack_760 = lStack_7d0;
          if (((ulong)uStack_7e0 & 1) == 0) {
            lStack_760 = (long)&uStack_7e0 + 1;
          }
          func_0x09adffe0(1,3,0x26,&lStack_760);
          if (((ulong)uStack_7e0 & 1) != 0) {
            func_0x0412a280(lStack_7d0,(ulong)uStack_7e0 & 0xfffffffffffffffe);
          }
        }
        else {
          ppppppbVar15 = (byte ******)(auStack_6d8 + 1);
          pppppppbVar21 = &ppppppbStack_6c8;
          if (cStack_6bc != '\x02') {
            ppppppbVar15 = (byte ******)((long)pppppppbStack_6e0 + 9);
            pppppppbVar21 = pppppppbStack_6e0 + 3;
          }
          pppppppbVar20 = (byte *******)0x18;
          if (iStack_6c0 == -0x4348ba63) {
            pppppppbVar20 = pppppppbVar21;
          }
          uStack_4e8 = (byte ******)0x9;
          if (iStack_6c0 == -0x4348ba63) {
            uStack_4e8 = ppppppbVar15;
          }
          if (((ulong)*pppppppbVar34 & 1) != 0) {
            uStack_4e8 = *pppppppbVar20;
          }
          func_0x0b6c9050(1,3,0x26,&UNK_01388b74,&uStack_4e8);
        }
LAB_0d1a4bcf:
        func_0x05d86750(&uStack_4e8,&ppppppbStack_6b8);
        func_0x0d193d10(auStack_e0,&uStack_4e8);
      }
      else {
LAB_0d1a3daf:
        func_0x05d86750(&uStack_4e8,&ppppppbStack_6b8);
        func_0x0d193d10(auStack_e0,&uStack_4e8);
      }
      func_0x05d85c50(&uStack_4e8);
      lVar24 = lStack_7e8;
    }
LAB_0d1a3e4d:
    pppppppbVar34 = (byte *******)0xff00ffffffffffff;
    func_0x05d85c50(&ppppppbStack_6b8);
    if (ppppppbStack_6c8 != (byte ******)0x0) {
      (*(code *)ppppppbStack_6c8)(&pppppppbStack_6e0);
    }
    if ((uStack_6e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6e8 & 0xff00ffffffffffff) - 8);
    }
    uStack_6e8 = 0;
    if ((uStack_6f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6f0 & 0xff00ffffffffffff) - 8);
    }
    func_0x05d85c50(auStack_538);
    if ((ulong)uStack_540 != 0xffffffff) {
      (**(code **)(&UNK_0f456e38 + (ulong)uStack_540 * 8))(auStack_718,auStack_5a0);
    }
    uStack_540 = 0xffffffff;
    if ((bStack_5b8 & 1) != 0) {
      func_0x0412a280(uStack_5a8,CONCAT71(uStack_5b7,bStack_5b8) & 0xfffffffffffffffe);
    }
    if ((uStack_5c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5c0 & 0xff00ffffffffffff) - 8);
    }
    uStack_5c0 = 0;
    if ((uStack_5c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5c8 & 0xff00ffffffffffff) - 8);
    }
    uStack_5c8 = 0;
    if ((uStack_5d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5d8 & 0xff00ffffffffffff) - 8);
    }
    uStack_5d8 = 0;
    if ((uStack_5e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5e0 & 0xff00ffffffffffff) - 8);
    }
    FUN_0eeb81b0(auStack_658);
    if (((ulong)auStack_808 & 1) != 0) {
      func_0x0412a280(ppppppbStack_7f8,(ulong)auStack_808 & 0xfffffffffffffffe);
    }
    func_0x0d6b1c60(*(undefined8 *)(lVar24 + 0x20),auStack_e0);
    pppppppbVar21 = *(byte ********)(lVar24 + 0x20);
    puVar26 = (undefined8 *)
              **(ulong **)(**(long **)(*(long *)(*(long *)(lVar24 + 0x18) + 8) + -0x28) + 8);
    if (DAT_0f5ea4a0 != '\0') goto LAB_0d1a4046;
  }
  else {
    do {
      if (puVar14 == (undefined8 *)0x0) goto LAB_0d1a38c1;
      puVar1 = (undefined8 *)((long)puVar14 - 1);
      pbVar2 = (byte *)((long)pppppppbVar34 + -1) + (long)puVar14;
      puVar14 = puVar1;
    } while (*pbVar2 != 0x2e);
    if (puVar1 == (undefined8 *)0xffffffffffffffff) goto LAB_0d1a38c1;
    if (puVar26 <= puVar18) {
      uVar28 = (long)puVar1 - (long)puVar26;
      if ((ulong)((long)puVar18 - (long)puVar26) < (ulong)((long)puVar1 - (long)puVar26)) {
        uVar28 = (long)puVar18 - (long)puVar26;
      }
      func_0x0eee2dd0(&uStack_4e8,0,0x408);
      if (uVar28 < 0x400) {
        if (uVar28 != 0) goto LAB_0d1a38ef;
        goto LAB_0d1a3905;
      }
      goto LAB_0d1a3915;
    }
LAB_0d1a4c28:
    func_0x04882ef0(&UNK_01306d2f);
LAB_0d1a4c34:
    func_0x04882e30();
LAB_0d1a4c39:
    func_0x04882e30();
  }
  iVar13 = func_0x04108328(&DAT_0f5ea4a0);
  if (iVar13 != 0) {
    func_0x08b670e0(&DAT_0f5ea138);
    func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
  }
LAB_0d1a4046:
  func_0x0d5f7010(&uStack_4e8,puVar26,&DAT_0f5ea138);
  ppppppbVar30 = uStack_4e8;
  ppppppbVar15 = pppppppbVar21[0x15];
  if (ppppppbVar15 != (byte ******)0x0) {
    pppppppbVar20 = (byte *******)((ulong)uStack_4e8 >> 1 & 0x7f);
    uVar28 = (long)&uStack_4e8 + 1;
    if (((ulong)uStack_4e8 & 1) != 0) {
      pppppppbVar20 = pppppppbStack_4e0;
      uVar28 = uStack_4d8;
    }
    do {
      bVar5 = *(byte *)(ppppppbVar15 + 2);
      if ((bVar5 & 1) == 0) {
        ppppppbVar32 = (byte ******)(ulong)(bVar5 >> 1);
      }
      else {
        ppppppbVar32 = (byte ******)ppppppbVar15[3];
      }
      if ((byte *******)ppppppbVar32 == pppppppbVar20) {
        if ((bVar5 & 1) == 0) {
          pppppbVar31 = (byte *****)((long)ppppppbVar15 + 0x11);
        }
        else {
          pppppbVar31 = ppppppbVar15[4];
        }
        iVar13 = func_0x0eee3000(pppppbVar31,uVar28,pppppppbVar20);
        if (iVar13 == 0) goto joined_r0x0d1a4220;
      }
      ppppppbVar15 = (byte ******)*ppppppbVar15;
    } while (ppppppbVar15 != (byte ******)0x0);
  }
  func_0x04907e30(pppppppbVar21 + 0x13,&uStack_4e8);
  ppppppbVar30 = uStack_4e8;
joined_r0x0d1a4220:
  if (((ulong)ppppppbVar30 & 1) != 0) {
    func_0x0412a280(uStack_4d8,(ulong)uStack_4e8 & 0xfffffffffffffffe);
  }
  func_0x05d85c50(auStack_80);
  if (pcStack_90 != (code *)0x0) {
    (*pcStack_90)(auStack_a8);
  }
  if ((uStack_b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b0 & (ulong)pppppppbVar34) - 8);
  }
  uStack_b0 = 0;
  if ((uStack_b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & (ulong)pppppppbVar34) - 8);
  }
  if (((ulong)uStack_790 & 1) != 0) {
    func_0x0412a280(lStack_780,(ulong)uStack_790 & 0xfffffffffffffffe);
  }
  if ((uStack_7c8 & 1) != 0) {
    func_0x0412a280(uStack_7b8,uStack_7c8 & 0xfffffffffffffffe);
  }
  return;
}


