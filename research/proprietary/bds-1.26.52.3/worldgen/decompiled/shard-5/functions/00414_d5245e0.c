/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6245e0 (ELF vaddr 0xd5245e0)
 * Label: caller-of-callee
 * Body:  [[0d6245e0, 0d62475d] [0d624760, 0d624807] [0d624810, 0d6248e4] [0d6248f0, 0d624a2c] [0d624a30, 0d624ae8] [0d624af0, 0d624b42] [0d624b50, 0d624c9b] [0d624d7f, 0d624db8]]
 * Ghidra: FUN_0d6245e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d6245e0(long *param_1,undefined8 param_2,byte *param_3,long param_4,undefined8 param_5,
                   undefined1 param_6)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  byte bStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  undefined1 auStack_78 [16];
  int iStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  
  puVar11 = *(undefined4 **)(param_4 + 8);
  plStack_e0 = param_1;
  uStack_98 = param_5;
  lStack_50 = param_4;
  if (puVar11 < *(undefined4 **)(param_4 + 0x10)) {
    if ((*param_3 & 1) == 0) {
      *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(param_3 + 0x10);
      uVar4 = *(undefined4 *)(param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined4 *)(param_3 + 0xc);
      *puVar11 = *(undefined4 *)param_3;
      puVar11[1] = uVar4;
      puVar11[2] = uVar5;
      puVar11[3] = uVar6;
    }
    else {
      func_0x0412e5e0(puVar11,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
    }
    puVar11 = puVar11 + 6;
    *(undefined4 **)(param_4 + 8) = puVar11;
  }
  else {
    puVar11 = (undefined4 *)func_0x04909a40(param_4,param_3);
  }
  *(undefined4 **)(param_4 + 8) = puVar11;
  func_0x0d6129a0(auStack_78,param_2,param_3,6,param_4,uStack_98,param_6);
  bVar8 = func_0x04864270(auStack_78);
  plVar16 = plStack_e0;
  *plStack_e0 = 0;
  plStack_e0[1] = 0;
  plStack_e0[2] = 0;
  if ((bVar8 & iStack_68 == 0) == 1) {
    uVar10 = func_0x048641f0(auStack_78);
    if (uVar10 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      lVar1 = (ulong)uVar10 * 0x18;
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(lVar1,0);
      }
      *plVar16 = (long)puVar12;
      plVar16[1] = (long)puVar12;
      plVar16[2] = (long)(puVar12 + (ulong)uVar10 * 3);
    }
    func_0x04865530(auStack_90,auStack_78);
    func_0x048655b0(auStack_60,auStack_78);
    lStack_a0 = param_4;
    while( true ) {
      cVar9 = func_0x04862c80(auStack_90,auStack_60);
      if (cVar9 != '\0') break;
      uVar13 = func_0x04862b80(auStack_90);
      cVar9 = func_0x04865490(uVar13);
      if (cVar9 == '\0') {
        func_0x0d5ef090(&bStack_d8,param_4);
        puStack_f8 = (undefined8 *)0x0;
        puStack_f0 = (undefined8 *)0x0;
        puStack_e8 = (undefined8 *)0x0;
        ppuStack_40 = &puStack_f8;
        uStack_38 = 0;
        puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
        if (puVar14 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x18,0);
        }
        puStack_e8 = puVar14 + 3;
        ppuStack_c0 = &puStack_f8;
        ppuStack_b8 = &puStack_48;
        ppuStack_b0 = &puStack_80;
        uStack_a8 = 0;
        bVar8 = bStack_d8 & 1;
        puStack_f8 = puVar14;
        puStack_80 = puVar14;
        puStack_48 = puVar14;
        if (bVar8 == 0) {
          puVar14[2] = uStack_c8;
          *puVar14 = CONCAT71(uStack_d7,bStack_d8);
          puVar14[1] = uStack_d0;
        }
        else {
          puStack_f0 = puVar14;
          func_0x0412e5e0(puVar14,uStack_c8,uStack_d0);
        }
        puStack_f0 = puStack_80 + 3;
        puStack_128 = &UNK_0f47cca0;
        uStack_120 = 0;
        uStack_118 = 0;
        lStack_110 = 0;
        func_0x0488f040(&uStack_120,puStack_f8,puStack_f0,
                        ((long)puStack_f0 - (long)puStack_f8 >> 3) * -0x5555555555555555);
        uStack_108 = 0x200000009;
        puStack_128 = &UNK_0f47b778;
        func_0x0d5eed10(uStack_98,&puStack_128);
        uVar3 = uStack_120;
        puStack_128 = &UNK_0f47cca0;
        uVar18 = uStack_118;
        if (uStack_120 != 0) {
          for (; uVar3 != uVar18; uVar18 = uVar18 - 0x18) {
            if ((*(byte *)(uVar18 - 0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(uVar18 - 8),
                              *(ulong *)(uVar18 - 0x18) & 0xfffffffffffffffe);
            }
          }
          uStack_118 = uVar3;
          func_0x0412a280(uStack_120,lStack_110 - uStack_120);
        }
        puVar7 = puStack_f8;
        puVar14 = puStack_f0;
        if (puStack_f8 != (undefined8 *)0x0) {
          for (; puVar7 != puVar14; puVar14 = puVar14 + -3) {
            if ((*(byte *)(puVar14 + -3) & 1) != 0) {
              func_0x0412a280(puVar14[-1],puVar14[-3] & 0xfffffffffffffffe);
            }
          }
          puStack_f0 = puVar7;
          func_0x0412a280(puStack_f8,(long)puStack_e8 - (long)puStack_f8);
        }
        if (bVar8 != 0) {
          func_0x0412a280(uStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
        }
      }
      else {
        ppuStack_c0 = (undefined8 **)((ulong)ppuStack_c0 & 0xffffffffffff0000);
        func_0x04863cb0(&puStack_128,uVar13,&ppuStack_c0);
        if (puVar12 < (undefined8 *)plVar16[2]) {
          puVar12[2] = uStack_118;
          *puVar12 = puStack_128;
          puVar12[1] = uStack_120;
          puStack_128 = (undefined *)0x0;
          uStack_120 = 0;
          uStack_118 = 0;
          puVar12 = puVar12 + 3;
          plVar16[1] = (long)puVar12;
        }
        else {
          lVar1 = *plVar16;
          lVar17 = (long)puVar12 - lVar1;
          uVar18 = (lVar17 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar18) {
LAB_0d624c80:
            uVar13 = func_0x0488efe0();
            *(long **)(uVar18 + 8) = plVar16;
            uVar13 = func_0x0eee2d70(uVar13);
            func_0x04862b40(auStack_90);
            FUN_04886070(plStack_e0);
            func_0x04863610(auStack_78);
            func_0x0d6241a0(&lStack_50);
            func_0x0eee2d70(uVar13);
            pcVar2 = (code *)swi(3);
            plVar16 = (long *)(*pcVar2)();
            return plVar16;
          }
          lVar19 = plVar16[2] - lVar1;
          lVar15 = lVar19 >> 3;
          uVar3 = lVar15 * 0x5555555555555556;
          if (uVar18 < uVar3) {
            uVar18 = uVar3;
          }
          if (0x555555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar18 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar18) {
            FUN_04882eb0();
            goto LAB_0d624c80;
          }
          lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0x18);
          if (lVar15 == 0) {
            func_0x0eec74c0(uVar18 * 0x18,0);
          }
          *(ulong *)(lVar15 + 0x10 + lVar17) = uStack_118;
          *(undefined8 *)(lVar15 + lVar17) = puStack_128;
          ((undefined8 *)(lVar15 + lVar17))[1] = uStack_120;
          puStack_128 = (undefined *)0x0;
          uStack_120 = 0;
          uStack_118 = 0;
          puVar12 = (undefined8 *)(lVar15 + 0x18 + lVar17);
          func_0x0eee2f00(lVar15,lVar1,lVar17);
          plVar16 = plStack_e0;
          *plStack_e0 = lVar15;
          plStack_e0[2] = uVar18 * 0x18 + lVar15;
          if (lVar1 == 0) {
            plStack_e0[1] = (long)puVar12;
            param_4 = lStack_a0;
          }
          else {
            func_0x0412a280(lVar1,lVar19);
            param_4 = lStack_a0;
            plVar16[1] = (long)puVar12;
            if (((ulong)puStack_128 & 1) != 0) {
              func_0x0412a280(uStack_118,(ulong)puStack_128 & 0xfffffffffffffffe);
            }
          }
        }
        if (((ulong)ppuStack_c0 & 1) != 0) {
          func_0x0412a280(ppuStack_b0,(ulong)ppuStack_c0 & 0xfffffffffffffffe);
        }
      }
      func_0x04862ba0(auStack_90);
    }
    func_0x04862b40(auStack_60);
    func_0x04862b40(auStack_90);
  }
  func_0x04863610(auStack_78);
  lVar1 = *(long *)(param_4 + 8);
  if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar1 + -8),*(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
  }
  *(long *)(param_4 + 8) = lVar1 + -0x18;
  return plVar16;
}


