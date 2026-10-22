/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x53518f0 (ELF vaddr 0x52518f0)
 * Label: OverworldGenerationRulesBiomeComponentGlue::vslot3
 * Body:  [[04136a20, 04136a24] [05350920, 05350a84] [05350fe0, 05351023] [05351030, 053511e8] [053518f0, 05351ac3] [05351ad0, 05351cc3]]
 * Ghidra: wg_OverworldGenerationRulesBiomeComponentGlue__vslot3
 */


/* WARNING: Possible PIC construction at 0x05350a6d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05351c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05351a6d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05351a46: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05351a72) */
/* WARNING: Removing unreachable block (ram,0x05350a72) */
/* WARNING: Removing unreachable block (ram,0x05351a4b) */
/* WARNING: Removing unreachable block (ram,0x05350a19) */
/* WARNING: Removing unreachable block (ram,0x05350a2b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGenerationRulesBiomeComponentGlue__vslot3
               (byte *param_1,byte *param_2,byte *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  byte ***pppbVar7;
  byte ****ppppbVar8;
  byte *pbVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *unaff_RBX;
  long lVar14;
  byte *unaff_RBP;
  ulong uVar15;
  byte *pbVar16;
  long *plVar17;
  uint uVar18;
  byte *unaff_R12;
  ulong uVar19;
  long lVar20;
  undefined8 *unaff_R13;
  byte *pbVar21;
  ulong uVar22;
  byte *unaff_R14;
  byte *pbVar23;
  long lVar24;
  byte *unaff_R15;
  bool bVar25;
  undefined8 uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  byte ***pppbStack_38;
  
  bVar11 = param_3[0x24];
  pbVar16 = *(byte **)param_3;
  pbVar9 = pbVar16;
  if (bVar11 == 2) {
    pbVar9 = param_3;
  }
  pbVar21 = unaff_R14;
  if (pbVar9 == (byte *)0x0 || *(int *)(param_3 + 0x20) != 0x354e48fc) {
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    lVar10 = *(long *)(param_3 + 0x30);
    if (lVar10 == 0) {
      uStack_80 = 0x535194a;
      (**(code **)(param_3 + 0x38))(0,param_3,0);
      lVar10 = *(long *)(param_3 + 0x30);
      bVar11 = param_3[0x24];
      pbVar16 = *(byte **)param_3;
      pbVar21 = param_3;
    }
    if (bVar11 == 2) {
      pbVar16 = param_3;
    }
    uStack_80 = 0x535196c;
    pbVar9 = (byte *)func_0x0488e200(uVar6,lVar10,0x354e48fc,pbVar16);
  }
  bVar25 = (param_2[0x198] & 1) != 0;
  pbVar16 = param_2 + 0x199;
  if (bVar25) {
    pbVar16 = *(byte **)(param_2 + 0x1a8);
  }
  uVar19 = (ulong)(param_2[0x198] >> 1);
  if (bVar25) {
    uVar19 = *(ulong *)(param_2 + 0x1a0);
  }
  uVar15 = uVar19;
  if (uVar19 != 0) {
    do {
      if (uVar15 == 0) goto LAB_05350920;
      uVar22 = uVar15 - 1;
      lVar10 = uVar15 - 1;
      uVar15 = uVar22;
    } while (pbVar16[lVar10] != 0x3a);
    if (uVar22 <= uVar19) {
      uVar19 = uVar22;
    }
    if (((uVar22 != 0xffffffffffffffff) && (uVar19 == 9)) &&
       (pbVar16[8] == 0x74 && *(long *)pbVar16 == 0x66617263656e696d)) {
      if (pbVar9[0x20] == 1) {
        pbVar16 = pbVar9 + 8;
        uStack_80 = 0x5351a3b;
        lVar10 = FUN_05344a30(param_2 + 0x170);
        plVar17 = (long *)(lVar10 + 8);
        pbVar23 = param_1 + 8;
        register0x00000020 = (BADSPACEBASE *)&uStack_80;
        uStack_80 = 0x5351a4b;
        unaff_RBX = pbVar16;
      }
      else if (pbVar9[0x40] == 1) {
        pbVar16 = pbVar9 + 0x28;
        uStack_80 = 0x5351a62;
        lVar10 = func_0x05344db0(param_2 + 0x170);
        plVar17 = (long *)(lVar10 + 8);
        pbVar23 = param_1 + 0x20;
        register0x00000020 = (BADSPACEBASE *)&uStack_80;
        uStack_80 = 0x5351a72;
        unaff_RBX = pbVar16;
      }
      else {
        puVar13 = unaff_R13;
        pbStack_78 = param_2;
        pbStack_60 = param_1;
        if (pbVar9[0x60] == 1) {
          uStack_80 = 0x5351a95;
          lVar10 = func_0x05345130(param_2 + 0x170);
          param_2 = *(byte **)(pbVar9 + 0x48);
          pbVar16 = *(byte **)(pbVar9 + 0x50);
          pbVar21 = pbVar16;
          pbVar23 = pbVar9;
          lVar20 = lVar10;
          if (param_2 != pbVar16) {
LAB_05351af3:
            do {
              lStack_50 = lVar20;
              pbStack_68 = pbVar23;
              pbStack_70 = pbVar21;
              if ((*(int *)(param_2 + 4) != 0) || (*(int *)(param_2 + 0xc) != 1)) {
                uStack_80 = 0x5351cb9;
                func_0x04931450();
LAB_05351cb9:
                uStack_80 = 0x5351cbe;
                func_0x0533f790();
LAB_05351cbe:
                uStack_80 = 0x5351cc3;
                func_0x04882eb0();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar18 = (uint)*param_2;
              uVar3 = *(uint *)(param_2 + 8);
              puVar13 = *(undefined8 **)(lVar10 + 0x10);
              if (*(undefined8 **)(lVar10 + 0x18) <= puVar13) {
                pppbVar7 = *(byte ****)(lVar10 + 8);
                puVar13 = (undefined8 *)((long)puVar13 - (long)pppbVar7);
                uVar19 = ((long)puVar13 >> 3) + 1;
                if (0x1fffffffffffffff < uVar19) goto LAB_05351cb9;
                uStack_48 = (long)*(undefined8 **)(lVar10 + 0x18) - (long)pppbVar7;
                uVar15 = (long)uStack_48 >> 2;
                if ((ulong)((long)uStack_48 >> 2) <= uVar19) {
                  uVar15 = uVar19;
                }
                if (0x7ffffffffffffff7 < uStack_48) {
                  uVar15 = 0x1fffffffffffffff;
                }
                uStack_40 = (ulong)uVar18;
                pppbStack_38 = pppbVar7;
                if (0x1fffffffffffffff < uVar15) goto LAB_05351cbe;
                puStack_58 = (undefined *)(uVar15 * 8);
                uStack_80 = 0x5351b95;
                lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                if (lVar20 == 0) {
                  uStack_80 = 0x5351c2e;
                  func_0x0eec74c0(puStack_58,0);
                }
                pppbVar7 = pppbStack_38;
                *(ulong *)(lVar20 + (long)puVar13) = ((ulong)uVar3 << 0x20) + uStack_40;
                lVar12 = (long)puVar13 + lVar20 + 8;
                lVar24 = (long)puVar13 + ((long)puVar13 >> 3) * -8 + lVar20;
                uStack_80 = 0x5351bd8;
                func_0x0eee2f00(lVar24,pppbStack_38,puVar13);
                lVar10 = lStack_50;
                *(long *)(lStack_50 + 8) = lVar24;
                *(long *)(lStack_50 + 0x10) = lVar12;
                *(ulong *)(lStack_50 + 0x18) = lVar20 + uVar15 * 8;
                if (pppbVar7 != (byte ***)0x0) {
                  uStack_80 = 0x5351bfb;
                  func_0x0412a280(pppbVar7,uStack_48);
                }
                *(long *)(lVar10 + 0x10) = lVar12;
                param_2 = param_2 + 0x10;
                pbVar16 = pbStack_70;
                pbVar9 = pbStack_68;
                pbVar21 = pbStack_70;
                pbVar23 = pbStack_68;
                lVar20 = lStack_50;
                if (param_2 == pbStack_70) break;
                goto LAB_05351af3;
              }
              *puVar13 = CONCAT44(uVar3,uVar18);
              *(undefined8 **)(lVar10 + 0x10) = puVar13 + 1;
              param_2 = param_2 + 0x10;
              puVar13 = puVar13 + 1;
              pbVar21 = pbStack_70;
              pbVar23 = pbStack_68;
              lVar20 = lStack_50;
            } while (param_2 != pbVar16);
          }
        }
        pbVar21 = pbStack_60;
        param_1 = pbStack_78;
        if (pbVar9[0x80] == 1) {
          pbVar16 = pbVar9 + 0x68;
          uStack_80 = 0x5351c55;
          lVar10 = func_0x04a6d6a0(pbStack_78 + 0x170);
          plVar17 = (long *)(lVar10 + 8);
          pbVar23 = pbVar21 + 0x38;
          register0x00000020 = (BADSPACEBASE *)&uStack_80;
          uStack_80 = 0x5351c65;
          unaff_RBX = pbVar16;
          unaff_R13 = puVar13;
        }
        else {
          if (pbVar9[0xa0] != 1) {
            return;
          }
          pbVar16 = pbVar9 + 0x88;
          uStack_80 = 0x5351c84;
          lVar10 = func_0x04a6da20(pbStack_78 + 0x170);
          plVar17 = (long *)(lVar10 + 8);
          pbVar23 = pbVar21 + 0x50;
          pbVar9 = unaff_RBP;
          param_2 = unaff_R12;
          pbVar21 = unaff_R14;
          param_1 = unaff_R15;
        }
      }
      *(byte **)((long)register0x00000020 + -8) = pbVar9;
      *(byte **)((long)register0x00000020 + -0x10) = param_1;
      *(byte **)((long)register0x00000020 + -0x18) = pbVar21;
      *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
      *(byte **)((long)register0x00000020 + -0x28) = param_2;
      *(byte **)((long)register0x00000020 + -0x30) = unaff_RBX;
      lVar10 = *(long *)pbVar23;
      *(byte **)((long)register0x00000020 + -0x60) = pbVar23;
      lVar20 = *(long *)(pbVar23 + 8);
      if (lVar20 != lVar10) {
        lVar12 = 0x20;
        uVar19 = 0;
        *(byte **)((long)register0x00000020 + -0x78) = pbVar16;
        *(long **)((long)register0x00000020 + -0x58) = plVar17;
        do {
          if (*(int *)(*(long *)pbVar16 + 0x18 + lVar12) != 1) {
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x53511de;
            func_0x04931450();
LAB_053511de:
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x53511e3;
            func_0x049d00b0();
LAB_053511e3:
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x53511e8;
            func_0x04882eb0();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar6 = *(undefined8 *)(lVar10 + uVar19 * 8);
          uVar2 = *(undefined4 *)(*(long *)pbVar16 + lVar12);
          puVar13 = (undefined8 *)plVar17[1];
          puVar4 = (undefined8 *)plVar17[2];
          if (puVar13 < puVar4) {
            *puVar13 = uVar6;
            *(undefined4 *)(puVar13 + 1) = uVar2;
            puVar13 = puVar13 + 2;
          }
          else {
            lVar24 = *plVar17;
            lVar14 = (long)puVar13 - lVar24;
            uVar15 = (lVar14 >> 4) + 1;
            if (0xfffffffffffffff < uVar15) goto LAB_053511de;
            *(undefined8 *)((long)register0x00000020 + -0x40) = uVar6;
            *(undefined4 *)((long)register0x00000020 + -0x7c) = uVar2;
            *(long *)((long)register0x00000020 + -0x50) = lVar20;
            *(ulong *)((long)register0x00000020 + -0x70) = uVar19;
            *(long *)((long)register0x00000020 + -0x48) = lVar10;
            *(long *)((long)register0x00000020 + -0x68) = lVar12;
            *(long *)((long)register0x00000020 + -0x38) = lVar24;
            uVar22 = (long)puVar4 - lVar24;
            uVar19 = (long)uVar22 >> 3;
            if ((ulong)((long)uVar22 >> 3) <= uVar15) {
              uVar19 = uVar15;
            }
            if (0x7fffffffffffffef < uVar22) {
              uVar19 = 0xfffffffffffffff;
            }
            if (0xfffffffffffffff < uVar19) goto LAB_053511e3;
            lVar20 = uVar19 * 0x10;
            pcVar5 = *(code **)(_DAT_0f5463b0 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x5351101;
            lVar10 = (*pcVar5)(&DAT_0f5463b0,lVar20);
            if (lVar10 == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x53511c5;
              func_0x0eec74c0(lVar20,0);
            }
            *(undefined8 *)(lVar10 + lVar14) = *(undefined8 *)((long)register0x00000020 + -0x40);
            *(undefined4 *)(lVar10 + 8 + lVar14) = *(undefined4 *)((long)register0x00000020 + -0x7c)
            ;
            puVar13 = (undefined8 *)(lVar10 + lVar14 + 0x10);
            lVar24 = lVar10 + lVar14 + (lVar14 >> 4) * -0x10;
            lVar12 = *(long *)((long)register0x00000020 + -0x38);
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x5351146;
            func_0x0eee2f00(lVar24,lVar12,lVar14);
            plVar17 = *(long **)((long)register0x00000020 + -0x58);
            *plVar17 = lVar24;
            plVar17[1] = (long)puVar13;
            plVar17[2] = lVar20 + lVar10;
            if (lVar12 == 0) {
              pbVar16 = *(byte **)((long)register0x00000020 + -0x78);
              lVar12 = *(long *)((long)register0x00000020 + -0x68);
              lVar10 = *(long *)((long)register0x00000020 + -0x48);
              uVar19 = *(ulong *)((long)register0x00000020 + -0x70);
              lVar20 = *(long *)((long)register0x00000020 + -0x50);
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x5351169;
              func_0x0412a280(lVar12,uVar22);
              lVar10 = **(long **)((long)register0x00000020 + -0x60);
              lVar20 = (*(long **)((long)register0x00000020 + -0x60))[1];
              pbVar16 = *(byte **)((long)register0x00000020 + -0x78);
              lVar12 = *(long *)((long)register0x00000020 + -0x68);
              uVar19 = *(ulong *)((long)register0x00000020 + -0x70);
            }
          }
          plVar17[1] = (long)puVar13;
          uVar19 = uVar19 + 1;
          lVar12 = lVar12 + 0x40;
        } while (uVar19 < (ulong)(lVar20 - lVar10 >> 3));
      }
      return;
    }
  }
LAB_05350920:
  pbStack_60 = (byte *)0x535093d;
  func_0x0412d550(0xf552e80);
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 + 1;
  UNLOCK();
  pbStack_60 = (byte *)0x5350954;
  func_0x0412d610(0xf552e80);
  plVar17 = _DAT_0f552f68;
  ppppbVar8 = _DAT_0f552f60;
  if ((_DAT_0f552f60 == (byte ****)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
    uStack_48 = 0;
    uStack_40 = (ulong)uStack_40._1_7_ << 8;
    register0x00000020 = (BADSPACEBASE *)&pbStack_60;
    pbStack_60 = (byte *)0x5350a72;
    unaff_RBX = pbVar16;
    uVar19 = 0xf552e80;
  }
  else {
    bVar11 = 1;
    if (_DAT_0f552f68 != (long *)0x0) {
      LOCK();
      _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
      UNLOCK();
      bVar11 = *(byte *)ppppbVar8;
    }
    uStack_48 = 0xf552e80;
    uStack_40 = CONCAT71(uStack_40._1_7_,1);
    pppbStack_38 = (byte ***)ppppbVar8;
    if (((bVar11 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
      puStack_58 = &DAT_01e366e0;
      pbStack_60 = (byte *)0x53509d3;
      func_0x0eeb61d0(_DAT_0f552f70,1,3,5,&UNK_012d75ad,pbVar16);
    }
    ppppbVar8 = &pppbStack_38;
    pppbStack_38 = (byte ***)0x0;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      ppppbVar8 = (byte ****)*plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (ppppbVar8 == (byte ****)0x0) {
        pbStack_60 = (byte *)0x53509fe;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        pbStack_60 = (byte *)0x5350a06;
        ppppbVar8 = (byte ****)func_0x0412c2d0(plVar17);
      }
    }
    uVar19 = uStack_48;
    if ((char)uStack_40 != '\x01') {
      return;
    }
  }
  *(byte **)((long)register0x00000020 + -8) = unaff_R14;
  *(byte **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(byte *****)((long)register0x00000020 + -0x18) = ppppbVar8;
  LOCK();
  plVar17 = (long *)(uVar19 + 0xd0);
  lVar10 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar10 == -0x7fffffffffffffff) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee031b;
    func_0x0412d450();
    LOCK();
    *(ulong *)(uVar19 + 0xd0) = *(ulong *)(uVar19 + 0xd0) & 0x7fffffffffffffff;
    UNLOCK();
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0335;
    func_0x0412d520(uVar19);
    uVar6 = *(undefined8 *)(uVar19 + 0xc0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0344;
    func_0x0412d680(uVar6);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0353;
    func_0x0412d6b0(uVar6);
    (*(code *)PTR_pthread_cond_broadcast_0f546458)(uVar19 + 0x90);
    return;
  }
  return;
}


