/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca36cf0 (ELF vaddr 0xc936cf0)
 * Label: caller-of-callee
 * Body:  [[0ca36cf0, 0ca36fe7] [0ca36ff0, 0ca37078] [0ca37080, 0ca371e5] [0ca371f0, 0ca37265] [0ca37270, 0ca3763e] [0ca37640, 0ca37712] [0ca3775c, 0ca37780] [0ca3783b, 0ca37864]]
 * Ghidra: FUN_0ca36cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca36cf0(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5)

{
  uint *puVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined **ppuVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  uint uVar15;
  undefined **ppuVar16;
  undefined **unaff_R15;
  bool bVar17;
  long *plStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  uint *puStack_1c8;
  uint uStack_1bc;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  undefined **ppuStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  uint *puStack_198;
  long *plStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  char cStack_100;
  long *plStack_f8;
  undefined ***apppuStack_f0 [2];
  long *plStack_e0;
  undefined **ppuStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_38;
  
  uStack_19c = 0;
  bVar17 = ((byte)param_2[2] & 1) != 0;
  lVar9 = (long)param_2 + 9;
  if (bVar17) {
    lVar9 = *(long *)(param_2 + 6);
  }
  uVar12 = (ulong)(byte)((byte)param_2[2] >> 1);
  if (bVar17) {
    uVar12 = *(ulong *)(param_2 + 4);
  }
  uStack_1a0 = param_4;
  func_0x0ca125a0(&plStack_190,param_3,&uStack_19c,&uStack_1a0,lVar9,uVar12);
  if ((plStack_190 == (long *)0x0) || (*plStack_190 == 0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    plVar10 = plStack_190;
  }
  else {
    plStack_e0 = plStack_190;
    uStack_160 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_120 = 0;
    puStack_158 = &UNK_0f299f40;
    ppuStack_118 = (undefined **)0x0;
    ppuStack_110 = (undefined **)0x0;
    ppuStack_108 = (undefined **)0x0;
    cStack_100 = '\x01';
    uStack_188 = uStack_19c;
    uStack_184 = uStack_1a0;
    func_0x0c44f050(&puStack_b0,*plStack_190,1,0,0);
    puStack_b0 = &UNK_0f36e858;
    uVar15 = *param_2;
    if ((plStack_a8 == (long *)0x0) || (plVar10 = (long *)*plStack_a8, plVar10 == (long *)0x0)) {
      uVar6 = 0xff;
      if (0xfe < uVar15) {
        uVar15 = 0xff;
      }
      uStack_180 = (ulong)uVar15;
      uVar15 = param_2[1];
    }
    else {
      func_0x0c455e60(&ppuStack_1e0,&puStack_b0);
      uVar6 = (**(code **)(*plVar10 + 0x328))(plVar10,&ppuStack_1e0);
      ppuVar2 = ppuStack_1d8;
      unaff_R15 = (undefined **)&UNK_0f3773c0;
      ppuStack_1e0 = (undefined **)&UNK_0f3773c0;
      ppuStack_1d8 = (undefined **)0x0;
      if (ppuVar2 != (undefined **)0x0) {
        (**(code **)(*ppuVar2 + 0x90))();
      }
      uVar7 = uVar6 & 0xff;
      if (uVar15 < (uVar6 & 0xff)) {
        uVar7 = uVar15;
      }
      uStack_180 = CONCAT44(uStack_180._4_4_,uVar7);
      uVar15 = param_2[1];
      uVar6 = 0xff;
      if ((plStack_a8 != (long *)0x0) && (plVar10 = (long *)*plStack_a8, plVar10 != (long *)0x0)) {
        func_0x0c455e60(&ppuStack_1e0,&puStack_b0);
        uVar6 = (**(code **)(*plVar10 + 0x328))(plVar10,&ppuStack_1e0);
        ppuVar2 = ppuStack_1d8;
        ppuStack_1e0 = (undefined **)&UNK_0f3773c0;
        ppuStack_1d8 = (undefined **)0x0;
        if (ppuVar2 != (undefined **)0x0) {
          (**(code **)(*ppuVar2 + 0x90))();
        }
        uVar6 = uVar6 & 0xff;
      }
    }
    if (uVar15 < uVar6) {
      uVar6 = uVar15;
    }
    uStack_180 = CONCAT44(uVar6,(undefined4)uStack_180);
    uStack_178 = CONCAT44(uStack_178._4_4_,param_2[0x3e]);
    if ((uStack_170 & 1) != 0) {
      func_0x0412a280(uStack_160,uStack_170 & 0xfffffffffffffffe);
    }
    uStack_160 = *(undefined8 *)(param_2 + 6);
    uStack_170 = *(ulong *)(param_2 + 2);
    uStack_168 = *(undefined8 *)(param_2 + 4);
    *(undefined2 *)(param_2 + 2) = 0;
    puVar1 = param_2 + 0x40;
    cVar5 = func_0x04864260(puVar1);
    puStack_1b8 = param_1;
    puStack_198 = param_2;
    if ((cVar5 == '\0') && (cVar5 = func_0x04864270(puVar1), cVar5 != '\0')) {
      func_0x04865630(&ppuStack_1e0,puVar1);
      func_0x048656b0(apppuStack_f0,puVar1);
      uStack_1bc = param_5 & 0xff;
      while( true ) {
        cVar5 = func_0x04862c80(&ppuStack_1e0,apppuStack_f0);
        if (cVar5 != '\0') break;
        uVar8 = func_0x04862b80(&ppuStack_1e0);
        func_0x04863480(auStack_c0,uVar8);
        func_0x0d1c2060(&plStack_1e8,auStack_c0,uStack_1bc);
        func_0x04863610(auStack_c0);
        plVar10 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plStack_1b0 = plStack_1e8;
          if (ppuStack_110 < ppuStack_108) {
            plStack_1e8 = (long *)0x0;
            *ppuStack_110 = (undefined *)plVar10;
            ppuVar16 = ppuStack_110 + 1;
            unaff_R15 = ppuVar16;
          }
          else {
            unaff_R15 = (undefined **)((long)ppuStack_110 - (long)ppuStack_118);
            uVar12 = ((long)unaff_R15 >> 3) + 1;
            if (0x1fffffffffffffff < uVar12) goto LAB_0ca376fa;
            ppuStack_1a8 = ppuStack_118;
            uVar11 = (long)ppuStack_108 - (long)ppuStack_118;
            uVar14 = (long)uVar11 >> 2;
            if ((ulong)((long)uVar11 >> 2) <= uVar12) {
              uVar14 = uVar12;
            }
            if (0x7ffffffffffffff7 < uVar11) {
              uVar14 = 0x1fffffffffffffff;
            }
            if (0x1fffffffffffffff < uVar14) goto LAB_0ca376ff;
            lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 8);
            if (lVar9 == 0) {
              func_0x0eec74c0(uVar14 * 8,0);
            }
            ppuVar4 = ppuStack_1a8;
            ppuVar2 = (undefined **)(lVar9 + uVar14 * 8);
            plStack_1e8 = (long *)0x0;
            *(long **)(lVar9 + (long)unaff_R15) = plStack_1b0;
            ppuVar16 = (undefined **)((long)unaff_R15 + lVar9 + 8);
            ppuVar13 = (undefined **)((long)unaff_R15 + ((long)unaff_R15 >> 3) * -8 + lVar9);
            memcpy(ppuVar13,ppuStack_1a8,unaff_R15);
            param_1 = puStack_1b8;
            param_2 = puStack_198;
            ppuStack_118 = ppuVar13;
            ppuStack_108 = ppuVar2;
            if (ppuVar4 != (undefined **)0x0) {
              ppuStack_110 = ppuVar16;
              func_0x0412a280(ppuVar4,uVar11);
              param_1 = puStack_1b8;
              param_2 = puStack_198;
            }
          }
          plVar10 = plStack_1e8;
          plStack_1e8 = (long *)0x0;
          ppuStack_110 = ppuVar16;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
        func_0x04862ba0(&ppuStack_1e0);
      }
      func_0x04862b40(apppuStack_f0);
      func_0x04862b40(&ppuStack_1e0);
    }
    else {
      plVar10 = *(long **)(param_2 + 8);
      plStack_1b0 = *(long **)(param_2 + 10);
      if (plVar10 != plStack_1b0) {
        uStack_1bc = param_5 & 0xff;
        do {
          func_0x0ed586e0(auStack_d0,plVar10);
          func_0x0d1c2060(&ppuStack_1e0,auStack_d0,uStack_1bc);
          func_0x04863610(auStack_d0);
          ppuVar2 = ppuStack_1e0;
          if (ppuStack_1e0 == (undefined **)0x0) {
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 0x11) = 0;
            goto LAB_0ca37546;
          }
          if (ppuStack_108 <= ppuStack_110) {
            unaff_R15 = (undefined **)((long)ppuStack_110 - (long)ppuStack_118);
            uVar12 = ((long)unaff_R15 >> 3) + 1;
            plStack_f8 = plVar10;
            if (uVar12 < 0x2000000000000000) {
              ppuStack_1a8 = ppuStack_1e0;
              ppuStack_d8 = ppuStack_118;
              uVar11 = (long)ppuStack_108 - (long)ppuStack_118;
              uVar14 = (long)uVar11 >> 2;
              if ((ulong)((long)uVar11 >> 2) <= uVar12) {
                uVar14 = uVar12;
              }
              if (0x7ffffffffffffff7 < uVar11) {
                uVar14 = 0x1fffffffffffffff;
              }
              if (uVar14 < 0x2000000000000000) {
                lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 8);
                if (lVar9 == 0) {
                  func_0x0eec74c0(uVar14 * 8,0);
                }
                ppuVar4 = ppuStack_d8;
                ppuVar2 = (undefined **)(lVar9 + uVar14 * 8);
                ppuStack_1e0 = (undefined **)0x0;
                *(undefined ***)(lVar9 + (long)unaff_R15) = ppuStack_1a8;
                ppuVar16 = (undefined **)((long)unaff_R15 + lVar9 + 8);
                ppuVar13 = (undefined **)((long)unaff_R15 + ((long)unaff_R15 >> 3) * -8 + lVar9);
                memcpy(ppuVar13,ppuStack_d8,unaff_R15);
                plVar10 = plStack_f8;
                param_1 = puStack_1b8;
                ppuStack_118 = ppuVar13;
                ppuStack_108 = ppuVar2;
                if (ppuVar4 != (undefined **)0x0) {
                  ppuStack_110 = ppuVar16;
                  func_0x0412a280(ppuVar4,uVar11);
                  plVar10 = plStack_f8;
                  param_1 = puStack_1b8;
                }
                goto LAB_0ca37374;
              }
              func_0x04882eb0();
            }
            func_0x0ca37eb0();
            goto LAB_0ca376fa;
          }
          ppuStack_1e0 = (undefined **)0x0;
          *ppuStack_110 = (undefined *)ppuVar2;
          ppuVar16 = ppuStack_110 + 1;
          unaff_R15 = ppuVar16;
LAB_0ca37374:
          param_2 = puStack_198;
          ppuVar2 = ppuStack_1e0;
          ppuStack_1e0 = (undefined **)0x0;
          ppuStack_110 = ppuVar16;
          if (ppuVar2 != (undefined **)0x0) {
            (**(code **)(*ppuVar2 + 8))();
          }
          plVar10 = plVar10 + 6;
        } while (plVar10 != plStack_1b0);
      }
    }
    cVar5 = func_0x04864260(param_2 + 0x44);
    if (cVar5 == '\0') {
      uVar8 = func_0x048648e0(param_2 + 0x44,&UNK_01340d28);
      cVar5 = func_0x04864260(uVar8);
      if (cVar5 == '\0') {
        (**(code **)(puStack_158 + 0x10))(&puStack_158,uVar8);
      }
    }
    else {
      puStack_1c8 = param_2 + 0xe;
      ppuStack_1e0 = &puStack_158;
      ppuStack_1d8 = ppuStack_1e0;
      ppuStack_1d0 = ppuStack_1e0;
      if ((ulong)param_2[0x3c] == 0xffffffff) goto LAB_0ca37704;
      apppuStack_f0[0] = &ppuStack_1e0;
      cVar5 = (**(code **)(&UNK_0f3957b0 + (ulong)param_2[0x3c] * 8))(apppuStack_f0);
      if (cVar5 == '\0') {
        func_0x09a0a6e0(1,3,0,&UNK_011c9e5c);
      }
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    if (cStack_100 == '\x01') {
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_178;
      *param_1 = CONCAT44(uStack_184,uStack_188);
      param_1[1] = uStack_180;
      param_1[5] = uStack_160;
      param_1[3] = uStack_170;
      param_1[4] = uStack_168;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      func_0x049d00c0(param_1 + 6,&puStack_158);
      param_1[6] = &UNK_0f299f40;
      param_1[0xe] = ppuStack_118;
      param_1[0xf] = ppuStack_110;
      param_1[0x10] = ppuStack_108;
      ppuStack_118 = (undefined **)0x0;
      ppuStack_110 = (undefined **)0x0;
      ppuStack_108 = (undefined **)0x0;
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
LAB_0ca37546:
    plVar10 = plStack_38;
    puStack_b0 = &UNK_0f36e918;
    plStack_38 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    if (lStack_60 != 0) {
      lStack_58 = lStack_60;
      func_0x0412a280(lStack_60,lStack_50 - lStack_60);
    }
    if (lStack_80 != 0) {
      lStack_78 = lStack_80;
      func_0x0412a280(lStack_80,lStack_70 - lStack_80);
    }
    plVar10 = plStack_a0;
    plStack_a0 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    if (plStack_a8 != (long *)0x0) {
      LOCK();
      *(int *)((long)plStack_a8 + 0xc) = *(int *)((long)plStack_a8 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plStack_a8 + 0xc) < 1) && (*plStack_a8 == 0)) &&
         (plStack_a8 != (long *)0x0)) {
        func_0x0412a280(plStack_a8,0x10);
      }
    }
    ppuVar2 = ppuStack_118;
    plVar10 = plStack_e0;
    if (cStack_100 == '\x01') {
      ppuVar4 = ppuStack_110;
      if (ppuStack_118 != (undefined **)0x0) {
        for (; ppuVar2 != ppuVar4; ppuVar4 = ppuVar4 + -1) {
          plVar10 = (long *)ppuVar4[-1];
          ppuVar4[-1] = (undefined *)0x0;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
        ppuStack_110 = ppuVar2;
        func_0x0412a280(ppuStack_118,(long)ppuStack_108 - (long)ppuStack_118);
      }
      func_0x049d2400(&puStack_158);
      plVar10 = plStack_e0;
      if ((uStack_170 & 1) != 0) {
        func_0x0412a280(uStack_160,uStack_170 & 0xfffffffffffffffe);
        plVar10 = plStack_e0;
      }
    }
  }
  if (plVar10 != (long *)0x0) {
    LOCK();
    *(int *)((long)plVar10 + 0xc) = *(int *)((long)plVar10 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)plVar10 + 0xc) < 1) && (*plVar10 == 0)) && (plStack_190 != (long *)0x0)) {
      func_0x0412a280(plStack_190,0x10);
    }
  }
  return;
LAB_0ca376fa:
  func_0x0ca37eb0();
LAB_0ca376ff:
  func_0x04882eb0();
LAB_0ca37704:
  uVar8 = FUN_04931450();
  ppuVar2 = ppuStack_1d8;
  ppuStack_1d8 = (undefined **)0x0;
  ppuStack_1e0 = unaff_R15;
  if (ppuVar2 != (undefined **)0x0) {
    (**(code **)(*ppuVar2 + 0x90))();
  }
  func_0x0c44e610(&puStack_b0);
  func_0x0ca37970(&uStack_188);
  func_0x04963c80(&plStack_190);
  _Unwind_Resume(uVar8);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


