/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb9add00 (ELF vaddr 0xb8add00)
 * Label: caller-of-callee
 * Body:  [[0b9add00, 0b9aefbc]]
 * Ghidra: FUN_0b9add00
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b9add00(long *param_1,undefined8 param_2,long *param_3,undefined8 ******param_4,
                   int param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 **ppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined8 *******pppppppuVar10;
  undefined8 ******ppppppuVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *****pppppuVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined8 *****pppppuVar20;
  ulong uVar21;
  byte extraout_DL;
  long extraout_RDX;
  undefined8 ******ppppppuVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ******ppppppuVar24;
  uint uVar25;
  undefined8 ****ppppuVar26;
  undefined8 ******ppppppuVar27;
  ulong uVar28;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  bool bVar31;
  float fVar32;
  undefined8 *****pppppuStack_210;
  undefined8 *****pppppuStack_1f8;
  undefined8 *****pppppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c4;
  undefined1 uStack_1c0;
  undefined8 auStack_1b8 [2];
  code *pcStack_1a8;
  code *pcStack_1a0;
  undefined4 uStack_198;
  char cStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 *******apppppppuStack_178 [2];
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  char cStack_154;
  long lStack_150;
  long lStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 ******ppppppuStack_130;
  long *plStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  code *pcStack_e0;
  undefined4 uStack_d8;
  char cStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 ******ppppppuStack_48;
  undefined8 ******ppppppuStack_40;
  long *plStack_38;
  
  if (param_5 != 1) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x05d84ba0(param_1);
    return param_1;
  }
  apppppppuStack_178[0] = (undefined8 *******)0x0;
  uStack_168 = (int)param_3[2];
  uStack_164 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_160 = (int)param_3[3];
  uStack_15c = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_158 = (int)param_3[4];
  cStack_154 = *(char *)((long)param_3 + 0x24);
  if (cStack_154 != '\0') {
    if (cStack_154 == '\x02') {
      (*(code *)param_3[2])(5,param_3,apppppppuStack_178);
    }
    else {
      apppppppuStack_178[0] = (undefined8 *******)*param_3;
      *param_3 = 0;
    }
  }
  lVar2 = param_3[5];
  lStack_150 = lVar2;
  lStack_148 = param_3[6];
  param_3[6] = 0;
  pcStack_140 = (code *)param_3[7];
  param_3[7] = 0;
  if (cStack_154 != '\x04') {
    pppppppuVar10 = apppppppuStack_178[0];
    if (cStack_154 == '\x02') {
      pppppppuVar10 = apppppppuStack_178;
    }
    if ((iStack_158 == -0x4b04d932) && (pppppppuVar10 != (undefined8 *******)0x0)) {
LAB_0b9adec8:
      if (*(int *)(param_4 + 4) == -0x5db38b49) {
        bVar31 = false;
      }
      else {
        func_0x0488e290(&uStack_f8,param_4);
        lVar2 = lStack_c0;
        if ((lStack_c0 != 0) && ((byte)(cStack_d4 - 1U) < 2)) {
          func_0x048b0900(param_4,&uStack_f8);
        }
        if (pcStack_e0 != (code *)0x0) {
          (*pcStack_e0)(&uStack_f8);
        }
        if (lVar2 == 0) goto LAB_0b9adde5;
        bVar31 = *(int *)(param_4 + 4) != -0x5db38b49;
      }
      lVar2 = lStack_150;
      cVar8 = *(char *)((long)param_4 + 0x24);
      ppppppuVar16 = (undefined8 ******)*param_4;
      ppppppuVar11 = ppppppuVar16;
      if (cVar8 == '\x02') {
        ppppppuVar11 = param_4;
      }
      if ((bool)(ppppppuVar11 == (undefined8 ******)0x0 | bVar31)) {
        pppppuVar17 = param_4[5];
        pppppuVar20 = param_4[6];
        if (pppppuVar20 == (undefined8 *****)0x0) {
          (*(code *)param_4[7])(0,param_4,0);
          pppppuVar20 = param_4[6];
          cVar8 = *(char *)((long)param_4 + 0x24);
          ppppppuVar16 = (undefined8 ******)*param_4;
        }
        if (cVar8 == '\x02') {
          ppppppuVar16 = param_4;
        }
        ppppppuVar11 = (undefined8 ******)
                       func_0x0488e200(pppppuVar17,pppppuVar20,0xa24c74b7,ppppppuVar16);
      }
      if (pppppppuVar10[7] == (undefined8 ******)0x0) {
LAB_0b9aeb2a:
        pppppuVar17 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (pppppuVar17 == (undefined8 *****)0x0) {
          FUN_0eec74c0(0x30,0);
        }
        ppppppuVar16 = uStack_138;
        uVar14 = _UNK_0148864f;
        pppppuStack_1e8 = (undefined8 *****)0x31;
        uStack_1e0 = 0x2f;
        *(ulong *)((long)pppppuVar17 + 0x1f) = CONCAT71(_UNK_01488648,DAT_01488647);
        *(undefined8 *)((long)pppppuVar17 + 0x27) = uVar14;
        ppppuVar26 = (undefined8 ****)CONCAT17(DAT_01488647,_UNK_01488640);
        pppppuVar17[2] = _DAT_01488638;
        pppppuVar17[3] = ppppuVar26;
        uVar5 = _UNK_01488634;
        uVar4 = _UNK_01488630;
        uVar19 = _UNK_0148862c;
        *(undefined4 *)pppppuVar17 = _DAT_01488628;
        *(undefined4 *)((long)pppppuVar17 + 4) = uVar19;
        *(undefined4 *)(pppppuVar17 + 1) = uVar4;
        *(undefined4 *)((long)pppppuVar17 + 0xc) = uVar5;
        *(undefined1 *)((long)pppppuVar17 + 0x2f) = 0;
        uStack_138._7_1_ = SUB81(ppppppuVar16,7);
        uStack_138._0_7_ = (uint7)CONCAT15(DAT_013f7773,CONCAT41(_DAT_013f776f,10));
        uStack_1d8 = pppppuVar17;
        func_0x0d858ce0(&uStack_f8,&uStack_138,&pppppuStack_1e8);
        func_0x0412a280(pppppuVar17,0x30);
        uStack_1c0 = 1;
        func_0x05e91e00(auStack_1b8,&uStack_f8);
        func_0x048fb670(&uStack_f8);
      }
      else {
        plStack_38 = (long *)FUN_0412c300();
        if (plStack_38 == (long *)0x0) goto LAB_0b9aeb2a;
        ppppppuStack_48 = pppppppuVar10[6];
        ppppppuStack_40 = ppppppuStack_48;
        if (ppppppuStack_48 == (undefined8 ******)0x0) {
          LOCK();
          plVar1 = plStack_38 + 1;
          lVar12 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar12 != 0) goto LAB_0b9aeb2a;
LAB_0b9aeb07:
          plVar1 = plStack_38;
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          func_0x0412c2d0(plVar1);
          if (ppppppuStack_48 == (undefined8 ******)0x0) goto LAB_0b9aeb2a;
        }
        else {
          (*(code *)(*ppppppuStack_48)[4])(&uStack_108,ppppppuStack_48,ppppppuVar11);
          iVar9 = _DAT_0f6c0820;
          ppppppuVar16 = pppppppuVar10[4];
          if ((ppppppuVar16 == (undefined8 ******)0x0) ||
             (ppppppuVar30 = (undefined8 ******)*ppppppuVar16,
             ppppppuVar30 == (undefined8 ******)0x0 ||
             *(int *)(ppppppuVar16 + 1) != *(int *)(pppppppuVar10 + 5))) {
            pppppuStack_1e8 = _DAT_0f6c0818;
            uStack_1e0 = CONCAT44(uStack_1e0._4_4_,_DAT_0f6c0820);
            uStack_1d8 = (undefined8 *****)CONCAT44(uRam000000000f6c082c,_DAT_0f6c0828);
            uStack_1d0 = uRam000000000f6c0830;
            uStack_1cc = uRam000000000f6c0834;
            pppppuStack_1f8 = _DAT_0f6c0818;
            pppppuStack_210 = uStack_1d8;
            if (*_DAT_0f6c0818 == (undefined8 ****)0x0 ||
                *(int *)(_DAT_0f6c0818 + 1) != _DAT_0f6c0820) goto LAB_0b9ae3bc;
            func_0x0d8568b0();
            goto LAB_0b9ae3bc;
          }
          ppppppuStack_130 = ppppppuVar30 + 2;
          uStack_f8 = 0;
          uStack_f0 = 0xb9b6540;
          uStack_ec = 0;
          uStack_e8 = 0xb9b6730;
          uStack_e4 = 0;
          plStack_b8 = (long *)0x0;
          uStack_a8 = 0;
          uStack_a0 = 0x100000088;
          plStack_98 = (long *)0x0;
          uStack_138 = (undefined8 ******)&UNK_0f2ee0f0;
          plStack_118 = &uStack_138;
          func_0x065bdd40(&uStack_138,&uStack_d8);
          if (plStack_118 == &uStack_138) {
            lVar12 = 0x20;
LAB_0b9ae140:
            (**(code **)(*plStack_118 + lVar12))();
          }
          else {
            lVar12 = 0x28;
            if (plStack_118 != (long *)0x0) goto LAB_0b9ae140;
          }
          pppppuStack_210 = (undefined8 *****)func_0x0d856c70(ppppppuVar30,&uStack_f8);
          plVar1 = plStack_98;
          plStack_98 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (plStack_b8 == (long *)&uStack_d8) {
            lVar12 = 0x20;
LAB_0b9ae19a:
            (**(code **)(*plStack_b8 + lVar12))();
          }
          else {
            lVar12 = 0x28;
            if (plStack_b8 != (long *)0x0) goto LAB_0b9ae19a;
          }
          pppppuStack_1f8._0_1_ = extraout_DL;
          if ((int)pppppuStack_210 == -1) goto LAB_0b9ae2eb;
          pppppuStack_1f8 = (undefined8 *****)(ulong)extraout_DL;
          ppppppuVar16 = ppppppuVar30 + 7;
          uStack_1c4 = 0xed4a8f79;
          ppppppuVar11 = ppppppuVar30 + 0xe;
          pppppuVar17 = ppppppuVar30[0xe] +
                        ((int)((ulong)((long)ppppppuVar30[0xf] - (long)ppppppuVar30[0xe]) >> 3) - 1U
                        & 0xed4a8f79);
          do {
            ppppuVar26 = *pppppuVar17;
            if (ppppuVar26 == (undefined8 ****)0xffffffffffffffff) {
              pppppuVar17 = ppppppuVar30[0x12];
              pppppuVar20 = pppppuVar17;
              goto LAB_0b9ae21a;
            }
            pppppuVar17 = ppppppuVar30[0x11] + (long)ppppuVar26 * 4;
          } while (*(int *)(ppppppuVar30[0x11] + (long)ppppuVar26 * 4 + 1) != -0x12b57087);
          pppppuVar20 = ppppppuVar30[0x12];
LAB_0b9ae21a:
          if (pppppuVar17 != pppppuVar20) {
            ppppppuVar16 = (undefined8 ******)pppppuVar17[2];
            goto LAB_0b9ae227;
          }
          ppppppuVar27 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
          if (ppppppuVar27 == (undefined8 ******)0x0) {
            FUN_0eec74c0(0x80,0);
          }
          ppppppuVar27[1] = (undefined8 *****)0x0;
          ppppppuVar27[2] = (undefined8 *****)0x0;
          *ppppppuVar27 = (undefined8 *****)&UNK_0f2ee170;
          bVar7 = extraout_DL;
          if (DAT_0f584918 == '\0') goto LAB_0b9aef86;
LAB_0b9aed84:
          pppppuStack_1f8._0_1_ = bVar7;
          uStack_138 = ppppppuVar27 + 3;
          ppppppuVar27[8] = (undefined8 *****)0x0;
          ppppppuVar27[9] = (undefined8 *****)0x0;
          ppppppuVar27[6] = (undefined8 *****)0x0;
          ppppppuVar27[7] = (undefined8 *****)0x0;
          ppppppuVar27[4] = (undefined8 *****)0x0;
          ppppppuVar27[5] = (undefined8 *****)0x0;
          ppppppuVar27[10] = (undefined8 *****)0xf584900;
          *(undefined1 *)(ppppppuVar27 + 0xb) = 1;
          ppppppuVar27[0xc] = (undefined8 *****)0xffffffff;
          ppppppuVar27[3] = (undefined8 *****)&UNK_0f2ee1c0;
          ppppppuVar27[0xd] = (undefined8 *****)0x0;
          ppppppuVar27[0xe] = (undefined8 *****)0x0;
          ppppppuVar27[0xf] = (undefined8 *****)0x0;
          ppppppuStack_130 = ppppppuVar27;
          func_0x065bf170(ppppppuVar11,&uStack_1c4,&uStack_138);
          uStack_e8 = 0x65bf690;
          uStack_e4 = 0;
          uStack_d8 = 0x145ad657;
          pcStack_e0 = (code *)0x0;
          cStack_d4 = '\x03';
          uStack_f8 = SUB82(ppppppuVar16,0);
          uStack_f6 = (undefined2)((ulong)ppppppuVar16 >> 0x10);
          uStack_f4 = (undefined4)((ulong)ppppppuVar16 >> 0x20);
          (*(code *)(*uStack_138)[5])(uStack_138,&uStack_f8);
          if (pcStack_e0 != (code *)0x0) {
            (*pcStack_e0)(&uStack_f8);
          }
          ppppppuVar11 = ppppppuStack_130;
          ppppppuVar16 = uStack_138;
          if (ppppppuStack_130 != (undefined8 ******)0x0) {
            LOCK();
            ppppppuVar27 = ppppppuStack_130 + 1;
            pppppuVar17 = *ppppppuVar27;
            *ppppppuVar27 = (undefined8 *****)((long)*ppppppuVar27 + -1);
            UNLOCK();
            if (pppppuVar17 == (undefined8 *****)0x0) {
              (*(code *)(*ppppppuStack_130)[2])(ppppppuStack_130);
              func_0x0412c2d0(ppppppuVar11);
            }
          }
LAB_0b9ae227:
          func_0x0d8547a0(ppppppuVar16,pppppuStack_210,0,0);
          puVar13 = (undefined8 *)func_0x0b9b80b0(ppppppuVar16,extraout_RDX + -1);
          lVar12 = CONCAT44(uStack_fc,uStack_100);
          ppppppuVar16 = *pppppppuVar10;
          uVar19 = *(undefined4 *)(pppppppuVar10 + 1);
          uStack_f4 = SUB84(pppppppuVar10[2],0);
          uStack_f0 = (undefined4)((ulong)pppppppuVar10[2] >> 0x20);
          uStack_ec = SUB84(pppppppuVar10[3],0);
          uStack_e8 = (undefined4)((ulong)pppppppuVar10[3] >> 0x20);
          if (lVar12 != 0) {
            LOCK();
            *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
            UNLOCK();
          }
          *puVar13 = 0;
          *(undefined4 *)(puVar13 + 1) = 0;
          puVar13[2] = 0xffffffffffffff;
          *(undefined1 *)(puVar13 + 3) = 0;
          puVar13[4] = pppppppuVar10[4];
          *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(pppppppuVar10 + 5);
          puVar13[6] = ppppppuVar16;
          *(undefined4 *)(puVar13 + 7) = uVar19;
          *(undefined4 *)(puVar13 + 8) = uStack_f4;
          *(undefined4 *)((long)puVar13 + 0x44) = uStack_f0;
          *(undefined4 *)(puVar13 + 9) = uStack_ec;
          *(undefined4 *)((long)puVar13 + 0x4c) = uStack_e8;
          *(undefined1 *)(puVar13 + 10) = 0;
          *(undefined1 *)(puVar13 + 0xe) = 0;
          *(undefined4 *)(puVar13 + 0xf) = uStack_108;
          *(undefined4 *)((long)puVar13 + 0x7c) = uStack_104;
          *(undefined4 *)(puVar13 + 0x10) = uStack_100;
          *(undefined4 *)((long)puVar13 + 0x84) = uStack_fc;
          if (lVar12 != 0) {
            LOCK();
            *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
            UNLOCK();
            func_0x0412c2d0();
          }
LAB_0b9ae2eb:
          ppppppuVar11 = (undefined8 ******)0xffffffff;
          pppppuVar17 = ppppppuVar30[1];
          if (pppppuVar17 == (undefined8 *****)0x0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(undefined4 *)(pppppuVar17 + 1);
          }
          pppppuVar20 = ppppppuVar30[0xe] +
                        ((int)((ulong)((long)ppppppuVar30[0xf] - (long)ppppppuVar30[0xe]) >> 3) - 1U
                        & 0xed4a8f79);
          do {
            ppppuVar26 = *pppppuVar20;
            if (ppppuVar26 == (undefined8 ****)0xffffffffffffffff) {
              pppppuVar20 = ppppppuVar30[0x12];
              break;
            }
            pppppuVar20 = ppppppuVar30[0x11] + (long)ppppuVar26 * 4;
          } while (*(int *)(ppppppuVar30[0x11] + (long)ppppuVar26 * 4 + 1) != -0x12b57087);
          uVar25 = *(uint *)(pppppuVar20[2][1][(ulong)pppppuStack_210 >> 0xc & 0xfffff] +
                            ((uint)pppppuStack_210 & 0xfff));
          ppuVar3 = pppppuVar20[2][10][uVar25 >> 7];
          uVar25 = uVar25 & 0x7f;
          lVar12 = (ulong)(uVar25 << 7) + (ulong)uVar25 * 8;
          *(undefined8 ******)((long)ppuVar3 + lVar12) = pppppuVar17;
          *(undefined4 *)((long)ppuVar3 + lVar12 + 8) = uVar19;
          *(undefined8 ******)((long)ppuVar3 + lVar12 + 0x10) = pppppuStack_210;
          *(byte *)((long)ppuVar3 + lVar12 + 0x18) = (byte)pppppuStack_1f8;
          pppppuStack_1e8 = ppppppuVar30[1];
          if (pppppuStack_1e8 == (undefined8 *****)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(pppppuStack_1e8 + 1);
          }
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,iVar9);
          uStack_1d8 = pppppuStack_210;
          uStack_1d0 = CONCAT31(uStack_1d0._1_3_,(byte)pppppuStack_1f8);
          pppppuStack_1f8 = pppppuStack_1e8;
LAB_0b9ae3bc:
          uVar6 = (undefined1)uStack_1d0;
          if (*(int *)(pppppuStack_1f8 + 1) == iVar9) {
            ppppuVar26 = *pppppuStack_1f8;
          }
          else {
            ppppuVar26 = (undefined8 ****)0x0;
          }
          uVar14 = func_0x06696d00(ppppuVar26,pppppuStack_210,(undefined1)uStack_1d0);
          func_0x0b799da0(&uStack_f8,uVar14);
          pppppuVar17 = (undefined8 *****)CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8));
          pppppuVar20 = (undefined8 *****)CONCAT44(uStack_ec,uStack_f0);
          ppppppuVar30 = (undefined8 ******)((long)pppppuVar20 * 0x1f1f1f1f ^ (ulong)pppppuVar17);
          ppppppuVar27 = pppppppuVar10[0x12];
          if (ppppppuVar27 != (undefined8 ******)0x0) {
            uVar15 = (long)ppppppuVar27 - ((ulong)ppppppuVar27 >> 1 & 0x5555555555555555);
            uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
            uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar15 >> 0x38 < 2) {
              ppppppuVar11 = (undefined8 ******)((long)ppppppuVar27 - 1U & (ulong)ppppppuVar30);
            }
            else {
              ppppppuVar11 = ppppppuVar30;
              if (ppppppuVar27 <= ppppppuVar30) {
                ppppppuVar11 = (undefined8 ******)((ulong)ppppppuVar30 % (ulong)ppppppuVar27);
              }
            }
            if ((pppppppuVar10[0x11][(long)ppppppuVar11] != (undefined8 *****)0x0) &&
               (ppppppuVar16 = (undefined8 ******)*pppppppuVar10[0x11][(long)ppppppuVar11],
               ppppppuVar16 != (undefined8 ******)0x0)) {
              if ((byte)(uVar15 >> 0x38) < 2) {
                do {
                  if ((undefined8 ******)ppppppuVar16[1] == ppppppuVar30) {
                    if ((ppppppuVar16[2] == pppppuVar17) && (ppppppuVar16[3] == pppppuVar20))
                    goto LAB_0b9ae966;
                  }
                  else if ((undefined8 ******)((ulong)ppppppuVar16[1] & (long)ppppppuVar27 - 1U) !=
                           ppppppuVar11) break;
                  ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
                } while (ppppppuVar16 != (undefined8 ******)0x0);
              }
              else {
                do {
                  ppppppuVar22 = (undefined8 ******)ppppppuVar16[1];
                  if (ppppppuVar22 == ppppppuVar30) {
                    if ((ppppppuVar16[2] == pppppuVar17) && (ppppppuVar16[3] == pppppuVar20))
                    goto LAB_0b9ae966;
                  }
                  else {
                    if (ppppppuVar27 <= ppppppuVar22) {
                      if (((ulong)ppppppuVar22 | (ulong)ppppppuVar27) >> 0x20 == 0) {
                        ppppppuVar22 = (undefined8 ******)
                                       (((ulong)ppppppuVar22 & 0xffffffff) %
                                       ((ulong)ppppppuVar27 & 0xffffffff));
                      }
                      else {
                        ppppppuVar22 = (undefined8 ******)
                                       ((ulong)ppppppuVar22 % (ulong)ppppppuVar27);
                      }
                    }
                    if (ppppppuVar22 != ppppppuVar11) break;
                  }
                  ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
                } while (ppppppuVar16 != (undefined8 ******)0x0);
              }
            }
          }
          ppppppuVar16 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
          if (ppppppuVar16 == (undefined8 ******)0x0) {
            FUN_0eec74c0(0x40,0);
          }
          *ppppppuVar16 = (undefined8 *****)0x0;
          ppppppuVar16[1] = ppppppuVar30;
          ppppppuVar16[2] = (undefined8 *****)CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8));
          ppppppuVar16[3] = (undefined8 *****)CONCAT44(uStack_ec,uStack_f0);
          ppppppuVar16[4] = (undefined8 *****)0x0;
          *(undefined4 *)(ppppppuVar16 + 5) = 0;
          ppppppuVar16[6] = (undefined8 *****)0xffffffffffffff;
          *(undefined1 *)(ppppppuVar16 + 7) = 0;
          if ((ppppppuVar27 != (undefined8 ******)0x0) &&
             ((float)((long)pppppppuVar10[0x14] + 1) <=
              (float)ppppppuVar27 * *(float *)(pppppppuVar10 + 0x15))) goto LAB_0b9ae93c;
          uVar15 = 1;
          if ((undefined8 ******)0x2 < ppppppuVar27) {
            uVar15 = (ulong)(((ulong)ppppppuVar27 & (long)ppppppuVar27 - 1U) != 0);
          }
          ppppppuVar11 = (undefined8 ******)(uVar15 | (long)ppppppuVar27 * 2);
          fVar32 = (float)func_0x0eee3ab0((float)((long)pppppppuVar10[0x14] + 1) /
                                          *(float *)(pppppppuVar10 + 0x15));
          ppppppuVar27 = (undefined8 ******)
                         ((long)(fVar32 - _DAT_01198778) & (long)fVar32 >> 0x3f | (long)fVar32);
          if (ppppppuVar27 < ppppppuVar11) {
            ppppppuVar27 = ppppppuVar11;
          }
          ppppppuVar11 = (undefined8 ******)0x2;
          if ((ppppppuVar27 != (undefined8 ******)0x1) &&
             (ppppppuVar11 = ppppppuVar27, ((ulong)ppppppuVar27 & (long)ppppppuVar27 - 1U) != 0)) {
            ppppppuVar11 = (undefined8 ******)func_0x0412c3f0();
          }
          ppppppuVar22 = pppppppuVar10[0x12];
          ppppppuVar27 = ppppppuVar11;
          if (ppppppuVar11 <= ppppppuVar22) {
            if (ppppppuVar22 <= ppppppuVar11) goto LAB_0b9ae903;
            fVar32 = (float)func_0x0eee3ab0((float)pppppppuVar10[0x14] /
                                            *(float *)(pppppppuVar10 + 0x15));
            ppppppuVar27 = (undefined8 ******)
                           ((long)(fVar32 - _DAT_01198778) & (long)fVar32 >> 0x3f | (long)fVar32);
            if ((ppppppuVar22 < (undefined8 ******)0x3) ||
               (uVar15 = (long)ppppppuVar22 - ((ulong)ppppppuVar22 >> 1 & 0x5555555555555555),
               uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
               1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              ppppppuVar27 = (undefined8 ******)func_0x0412c3f0(ppppppuVar27);
            }
            else if ((undefined8 ******)0x1 < ppppppuVar27) {
              lVar12 = 0x3f;
              if ((long)ppppppuVar27 - 1U != 0) {
                for (; (long)ppppppuVar27 - 1U >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              ppppppuVar27 = (undefined8 ******)(1L << (-((byte)lVar12 ^ 0x3f) & 0x3f));
            }
            if (ppppppuVar27 < ppppppuVar11) {
              ppppppuVar27 = ppppppuVar11;
            }
            if (ppppppuVar22 <= ppppppuVar27) goto LAB_0b9ae903;
            if (ppppppuVar27 == (undefined8 ******)0x0) {
              ppppppuVar11 = pppppppuVar10[0x11];
              pppppppuVar10[0x11] = (undefined8 ******)0x0;
              if (ppppppuVar11 != (undefined8 ******)0x0) {
                func_0x0412a280(ppppppuVar11,(long)pppppppuVar10[0x12] << 3);
              }
              pppppppuVar10[0x12] = (undefined8 ******)0x0;
              goto LAB_0b9ae903;
            }
          }
          if ((ulong)ppppppuVar27 >> 0x3d != 0) {
            func_0x04882eb0();
LAB_0b9aef86:
            iVar9 = func_0x04108328(&DAT_0f584918);
            bVar7 = (byte)pppppuStack_1f8;
            if (iVar9 != 0) {
              func_0x0668ec10(0xf584900);
              func_0x0410844d(&DAT_0f584918);
            }
            goto LAB_0b9aed84;
          }
          ppppppuVar11 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (ppppppuVar11 == (undefined8 ******)0x0) {
            FUN_0eec74c0((long)ppppppuVar27 * 8,0);
          }
          ppppppuVar22 = pppppppuVar10[0x11];
          pppppppuVar10[0x11] = ppppppuVar11;
          if (ppppppuVar22 != (undefined8 ******)0x0) {
            func_0x0412a280(ppppppuVar22,(long)pppppppuVar10[0x12] << 3);
            ppppppuVar11 = pppppppuVar10[0x11];
          }
          pppppppuVar10[0x12] = ppppppuVar27;
          func_0x0eee2dd0(ppppppuVar11,0,(long)ppppppuVar27 * 8);
          ppppppuVar22 = pppppppuVar10[0x13];
          if (ppppppuVar22 != (undefined8 ******)0x0) {
            ppppppuVar23 = (undefined8 ******)ppppppuVar22[1];
            uVar15 = (long)ppppppuVar27 - 1;
            if (((ulong)ppppppuVar27 & uVar15) == 0) {
              ppppppuVar11[(ulong)ppppppuVar23 & uVar15] = pppppppuVar10 + 0x13;
              uVar21 = (ulong)ppppppuVar23 & uVar15;
              while (ppppppuVar27 = ppppppuVar22, ppppppuVar22 = (undefined8 ******)*ppppppuVar27,
                    ppppppuVar22 != (undefined8 ******)0x0) {
                uVar28 = (ulong)ppppppuVar22[1] & uVar15;
                if (uVar28 != uVar21) {
                  if (ppppppuVar11[uVar28] == (undefined8 *****)0x0) {
                    ppppppuVar11[uVar28] = ppppppuVar27;
                    uVar21 = uVar28;
                  }
                  else {
                    *ppppppuVar27 = *ppppppuVar22;
                    *ppppppuVar22 = (undefined8 *****)*ppppppuVar11[uVar28];
                    *ppppppuVar11[uVar28] = ppppppuVar22;
                    ppppppuVar22 = ppppppuVar27;
                  }
                }
              }
            }
            else {
              if (ppppppuVar27 <= ppppppuVar23) {
                if (((ulong)ppppppuVar23 | (ulong)ppppppuVar27) >> 0x20 == 0) {
                  ppppppuVar23 = (undefined8 ******)
                                 (((ulong)ppppppuVar23 & 0xffffffff) %
                                 ((ulong)ppppppuVar27 & 0xffffffff));
                }
                else {
                  ppppppuVar23 = (undefined8 ******)((ulong)ppppppuVar23 % (ulong)ppppppuVar27);
                }
              }
              ppppppuVar11[(long)ppppppuVar23] = pppppppuVar10 + 0x13;
              ppppppuVar29 = (undefined8 ******)*ppppppuVar22;
              while (ppppppuVar29 != (undefined8 ******)0x0) {
                ppppppuVar24 = (undefined8 ******)ppppppuVar29[1];
                if (ppppppuVar27 <= ppppppuVar24) {
                  if (((ulong)ppppppuVar24 | (ulong)ppppppuVar27) >> 0x20 == 0) {
                    ppppppuVar24 = (undefined8 ******)
                                   (((ulong)ppppppuVar24 & 0xffffffff) %
                                   ((ulong)ppppppuVar27 & 0xffffffff));
                  }
                  else {
                    ppppppuVar24 = (undefined8 ******)((ulong)ppppppuVar24 % (ulong)ppppppuVar27);
                  }
                }
                if (ppppppuVar24 != ppppppuVar23) {
                  if (ppppppuVar11[(long)ppppppuVar24] == (undefined8 *****)0x0) {
                    ppppppuVar11[(long)ppppppuVar24] = ppppppuVar22;
                    ppppppuVar23 = ppppppuVar24;
                  }
                  else {
                    *ppppppuVar22 = *ppppppuVar29;
                    *ppppppuVar29 = (undefined8 *****)*ppppppuVar11[(long)ppppppuVar24];
                    *ppppppuVar11[(long)ppppppuVar24] = ppppppuVar29;
                    ppppppuVar29 = ppppppuVar22;
                  }
                }
                ppppppuVar22 = ppppppuVar29;
                ppppppuVar29 = (undefined8 ******)*ppppppuVar22;
              }
            }
          }
LAB_0b9ae903:
          ppppppuVar27 = pppppppuVar10[0x12];
          if (((ulong)ppppppuVar27 & (long)ppppppuVar27 - 1U) == 0) {
            ppppppuVar11 = (undefined8 ******)((ulong)ppppppuVar30 & (long)ppppppuVar27 - 1U);
          }
          else {
            ppppppuVar11 = ppppppuVar30;
            if (ppppppuVar27 <= ppppppuVar30) {
              ppppppuVar11 = (undefined8 ******)((ulong)ppppppuVar30 % (ulong)ppppppuVar27);
            }
          }
LAB_0b9ae93c:
          ppppppuVar30 = pppppppuVar10[0x11];
          pppppuVar17 = ppppppuVar30[(long)ppppppuVar11];
          if (pppppuVar17 == (undefined8 *****)0x0) {
            *ppppppuVar16 = pppppppuVar10[0x13];
            pppppppuVar10[0x13] = ppppppuVar16;
            ppppppuVar30[(long)ppppppuVar11] = pppppppuVar10 + 0x13;
            if (*ppppppuVar16 != (undefined8 *****)0x0) {
              ppppppuVar11 = (undefined8 ******)(*ppppppuVar16)[1];
              if (((ulong)ppppppuVar27 & (long)ppppppuVar27 - 1U) == 0) {
                ppppppuVar30[(ulong)ppppppuVar11 & (long)ppppppuVar27 - 1U] = ppppppuVar16;
              }
              else {
                if (ppppppuVar27 <= ppppppuVar11) {
                  if (((ulong)ppppppuVar11 | (ulong)ppppppuVar27) >> 0x20 == 0) {
                    ppppppuVar30
                    [((ulong)ppppppuVar11 & 0xffffffff) % ((ulong)ppppppuVar27 & 0xffffffff)] =
                         ppppppuVar16;
                    goto LAB_0b9ae95f;
                  }
                  ppppppuVar11 = (undefined8 ******)((ulong)ppppppuVar11 % (ulong)ppppppuVar27);
                }
                ppppppuVar30[(long)ppppppuVar11] = ppppppuVar16;
              }
            }
          }
          else {
            *ppppppuVar16 = (undefined8 *****)*pppppuVar17;
            *pppppuVar17 = ppppppuVar16;
          }
LAB_0b9ae95f:
          pppppppuVar10[0x14] = (undefined8 ******)((long)pppppppuVar10[0x14] + 1);
LAB_0b9ae966:
          ppppppuVar16[4] = pppppuStack_1f8;
          *(int *)(ppppppuVar16 + 5) = iVar9;
          ppppppuVar16[6] = pppppuStack_210;
          *(undefined1 *)(ppppppuVar16 + 7) = uVar6;
          func_0x0b9b6a90(&uStack_f8,&pppppuStack_1e8);
          uStack_1c0 = 0;
          auStack_1b8[0] = 0;
          pcStack_1a8 = (code *)CONCAT44(uStack_e4,uStack_e8);
          pcStack_1a0 = pcStack_e0;
          uStack_198 = uStack_d8;
          cStack_194 = cStack_d4;
          if (cStack_d4 != '\0') {
            if (cStack_d4 == '\x02') {
              (*pcStack_1a8)(5,&uStack_f8,auStack_1b8);
            }
            else {
              auStack_1b8[0] = CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8));
              uStack_f8 = 0;
              uStack_f6 = 0;
              uStack_f4 = 0;
            }
          }
          lStack_180 = lStack_c0;
          uStack_188 = uStack_c8;
          uStack_c8 = 0;
          lStack_c0 = 0;
          uStack_190 = uStack_d0;
          uStack_18c = uStack_cc;
          if (pcStack_e0 != (code *)0x0) {
            (*pcStack_e0)(&uStack_f8);
          }
          if (pppppuStack_1e8 != (undefined8 *****)0x0) {
            if (*pppppuStack_1e8 != (undefined8 ****)0x0 &&
                *(int *)(pppppuStack_1e8 + 1) == (int)uStack_1e0) {
              func_0x0d8569b0(*pppppuStack_1e8,uStack_1d8,uStack_1d0);
            }
          }
          if (CONCAT44(uStack_fc,uStack_100) != 0) {
            func_0x0412c2d0();
          }
          if (plStack_38 != (long *)0x0) {
            LOCK();
            plVar1 = plStack_38 + 1;
            lVar12 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar12 == 0) goto LAB_0b9aeb07;
          }
        }
      }
      *param_1 = 0;
      param_1[2] = (long)&UNK_0b9af4e0;
      *(undefined4 *)(param_1 + 4) = 0x7a39c0fc;
      param_1[3] = (long)&UNK_0b9af7c0;
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      puVar18 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar18 == (undefined1 *)0x0) {
        FUN_0eec74c0(0x48,0);
      }
      uVar14 = auStack_1b8[0];
      *puVar18 = uStack_1c0;
      *(undefined8 *)(puVar18 + 8) = 0;
      *(code **)(puVar18 + 0x18) = pcStack_1a8;
      *(code **)(puVar18 + 0x20) = pcStack_1a0;
      *(undefined4 *)(puVar18 + 0x28) = uStack_198;
      puVar18[0x2c] = cStack_194;
      if (cStack_194 != '\0') {
        if (cStack_194 == '\x02') {
          (*pcStack_1a8)(5,auStack_1b8);
        }
        else {
          auStack_1b8[0] = 0;
          *(undefined8 *)(puVar18 + 8) = uVar14;
        }
      }
      lVar12 = lStack_180;
      uVar19 = (undefined4)uStack_188;
      uVar4 = uStack_188._4_4_;
      uStack_188 = 0;
      *(undefined4 *)(puVar18 + 0x30) = uStack_190;
      *(undefined4 *)(puVar18 + 0x34) = uStack_18c;
      *(undefined4 *)(puVar18 + 0x38) = uVar19;
      *(undefined4 *)(puVar18 + 0x3c) = uVar4;
      lStack_180 = 0;
      *(long *)(puVar18 + 0x40) = lVar12;
      *param_1 = (long)puVar18;
      param_1[5] = lVar2;
      param_1[6] = 0;
      param_1[7] = (long)&UNK_0b9af370;
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(auStack_1b8);
      }
      goto LAB_0b9ade1d;
    }
    if (pcStack_140 != (code *)0x0) {
      if (lStack_148 == 0) {
        (*pcStack_140)(0,apppppppuStack_178,0);
      }
      pppppppuVar10 = apppppppuStack_178[0];
      if (cStack_154 == '\x02') {
        pppppppuVar10 = apppppppuStack_178;
      }
      pppppppuVar10 = (undefined8 *******)func_0x0488e200(lVar2,lStack_148,0xb4fb26ce,pppppppuVar10)
      ;
      if (pppppppuVar10 != (undefined8 *******)0x0) goto LAB_0b9adec8;
    }
  }
LAB_0b9adde5:
  param_1[2] = (long)&UNK_0488e0b0;
  *(undefined4 *)(param_1 + 4) = 0x48b5725f;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[5] = lStack_150;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0b9ade1d:
  if ((code *)CONCAT44(uStack_15c,uStack_160) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_15c,uStack_160))(apppppppuStack_178);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x13f776f  Error
 * 0x1488628  The TransactionManagerService is not available.
 * 0x1488638  anagerService is not available.
 * 0x1488647  s not available.
 */
