/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3a5e10 (ELF vaddr 0xd2a5e10)
 * Label: caller-of-callee
 * Body:  [[0d3a5e10, 0d3a5f5d] [0d3a5f60, 0d3a61fd] [0d3a6224, 0d3a64a4]]
 * Ghidra: FUN_0d3a5e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d3a5e10(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *extraout_RDX;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  byte *pbVar21;
  long lVar22;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  byte *pbStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  undefined1 uStack_a7;
  undefined6 uStack_a6;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  undefined1 auStack_40 [16];
  
  lStack_80 = 0xd3a5e36;
  puVar7 = (undefined8 *)func_0x04865100(param_2,&UNK_01283713);
  if ((char)puVar7 == '\0') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return puVar7;
  }
  lStack_80 = 0xd3a5e49;
  uVar8 = func_0x048648e0(param_2,&UNK_01283713);
  puVar15 = (undefined *)(param_3 + 0x50);
  puVar14 = puVar15;
  if ((*(char *)(param_3 + 0x77) == '\0') &&
     ((puVar1 = (undefined *)(param_3 + 0x70), *(char *)(param_3 + 0x68) != '\0' ||
      (puVar14 = puVar1, (*(byte *)(param_3 + 0x56) & 1) != 0)))) {
    lStack_80 = 0xd3a5e88;
    cVar3 = func_0x04fa7a10(puVar1,puVar15);
    puVar14 = puVar15;
    if (cVar3 != '\0') {
      puVar14 = puVar1;
    }
  }
  puVar15 = &DAT_0f72b850;
  if (((puVar14[6] | puVar14[0x18]) & 1) != 0) {
    puVar15 = puVar14;
  }
  puStack_48 = param_1;
  if ((DAT_0f5a2858 == '\0') && (puVar15[0x18] == '\0')) {
    if (((DAT_0f5a2846 & 1) != 0) && (puVar15[7] == '\0')) {
      lStack_80 = 0xd3a5edf;
      cVar3 = func_0x04fa7a10(puVar15,0xf5a2840);
      if (cVar3 != '\0') goto LAB_0d3a5eb6;
    }
    lStack_80 = 0xd3a5efb;
    uVar9 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
    lStack_80 = 0xd3a5f14;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (puVar7 == (undefined8 *)0x0) {
      lStack_80 = 0xd3a61e5;
      func_0x0eec74c0(0x10,0);
    }
    plStack_70 = puVar7 + 2;
    *puVar7 = uVar9;
    *(undefined4 *)(puVar7 + 1) = 0x40;
  }
  else {
LAB_0d3a5eb6:
    plStack_70 = (long *)0x0;
    puVar7 = (undefined8 *)0x0;
  }
  lStack_80 = 0xd3a5f45;
  func_0x04865530(auStack_58,uVar8);
  lStack_80 = 0xd3a5f52;
  func_0x048655b0(auStack_40,uVar8);
  plVar20 = plStack_70;
  do {
    lStack_80 = 0xd3a5f89;
    cVar3 = func_0x04862c80(auStack_58,auStack_40);
    if (cVar3 != '\0') {
      lStack_80 = 0xd3a61a7;
      func_0x04862b40(auStack_40);
      lStack_80 = 0xd3a61b1;
      func_0x04862b40(auStack_58);
      *puStack_48 = puVar7;
      puStack_48[1] = plVar20;
      puStack_48[2] = plStack_70;
      *(undefined1 *)(puStack_48 + 3) = 1;
      return puStack_48;
    }
    lStack_80 = 0xd3a5f9e;
    puStack_68 = puVar7;
    uVar8 = func_0x04862b80(auStack_58);
    lStack_80 = 0xd3a5fb0;
    uVar9 = func_0x048648e0(uVar8,&UNK_011d1a34);
    lStack_80 = 0xd3a5fba;
    uVar5 = func_0x04863e00(uVar9,0);
    lStack_80 = 0xd3a5fcb;
    cVar3 = func_0x04865100(uVar8,&UNK_014daf09);
    if (cVar3 == '\0') {
LAB_0d3a6166:
      *(undefined1 *)puStack_48 = 0;
      *(undefined1 *)(puStack_48 + 3) = 0;
      lStack_80 = 0xd3a617c;
      func_0x04862b40(auStack_40);
      lStack_80 = 0xd3a6186;
      puVar17 = (undefined8 *)func_0x04862b40(auStack_58);
      if (puVar7 == (undefined8 *)0x0) {
        return puVar17;
      }
      lStack_80 = 0xd3a619b;
      puVar7 = (undefined8 *)func_0x0412a280(puVar7,(long)plStack_70 - (long)puVar7);
      return puVar7;
    }
    lStack_80 = 0xd3a5fe2;
    cVar3 = func_0x04865100(uVar8,&UNK_011d1a34);
    if (cVar3 == '\0') goto LAB_0d3a6166;
    lStack_80 = 0xd3a5ffd;
    uStack_5c = uVar5;
    uVar9 = func_0x048648e0(uVar8,&UNK_014daf09);
    lStack_80 = 0xd3a6007;
    uVar6 = func_0x04863e00(uVar9,0);
    lStack_80 = 0xd3a6019;
    uVar8 = func_0x048648e0(uVar8,&UNK_0131d861);
    lStack_80 = 0xd3a6023;
    uVar4 = func_0x04863e00(uVar8,0);
    uVar12 = (ulong)uVar6 & 0xff;
    lStack_80 = 0xd3a6031;
    lVar10 = func_0x0cb6c710(uVar12,uVar4);
    if (lVar10 == 0) {
      lStack_80 = 0xd3a6042;
      lVar10 = func_0x0cb6c710(uVar12,0);
      if (lVar10 != 0) goto LAB_0d3a604e;
      lStack_80 = 0xd3a613f;
      lVar10 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
      if (plVar20 < plStack_70) goto LAB_0d3a5f60;
LAB_0d3a605e:
      puVar17 = puStack_68;
      lVar19 = (long)plVar20 - (long)puStack_68;
      lVar22 = lVar19 >> 4;
      puVar7 = (undefined8 *)(lVar22 + 1);
      if (puVar7 < (undefined8 *)0x1000000000000000) {
        uVar16 = (long)plStack_70 - (long)puStack_68;
        puVar17 = (undefined8 *)((long)uVar16 >> 3);
        if ((undefined8 *)((long)uVar16 >> 3) <= puVar7) {
          puVar17 = puVar7;
        }
        if (0x7fffffffffffffef < uVar16) {
          puVar17 = (undefined8 *)0xfffffffffffffff;
        }
        if (puVar17 < (undefined8 *)0x1000000000000000) {
          lVar18 = (long)puVar17 * 0x10;
          lStack_80 = 0xd3a60ca;
          lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
          if (lVar11 == 0) {
            lStack_80 = 0xd3a6161;
            func_0x0eec74c0(lVar18,0);
          }
          puVar17 = puStack_68;
          *(long *)(lVar11 + lVar19) = lVar10;
          *(undefined4 *)(lVar11 + 8 + lVar19) = uStack_5c;
          plVar20 = (long *)(lVar11 + lVar19);
          puVar7 = (undefined8 *)(lVar19 + lVar11 + lVar22 * -0x10);
          lStack_80 = 0xd3a610a;
          func_0x0eee2f00(puVar7,puStack_68);
          plVar2 = (long *)(lVar18 + lVar11);
          if (puVar17 != (undefined8 *)0x0) {
            lStack_80 = 0xd3a611a;
            func_0x0412a280(puVar17,uVar16);
          }
          goto LAB_0d3a5f6f;
        }
      }
      else {
        lStack_80 = 0xd3a61ef;
        func_0x0d3c6200();
      }
      lStack_80 = 0xd3a61f4;
      uVar8 = func_0x04882eb0();
      lStack_80 = 0xd3a622e;
      puStack_68 = puVar17;
      func_0x04862b40(auStack_58);
      if (puStack_68 != (undefined8 *)0x0) {
        lStack_80 = 0xd3a6248;
        func_0x0412a280(puStack_68,(long)plStack_70 - (long)puStack_68);
      }
      lStack_80 = 0xd3a6250;
      uVar9 = uVar8;
      func_0x0eee2d70(uVar8);
      uStack_90 = uVar12;
      uStack_88 = uVar8;
      lStack_80 = lVar22;
      uVar8 = func_0x048648e0();
      bStack_a8 = 0;
      uStack_a7 = 0;
      func_0x04863cb0(&uStack_e8,uVar8,&bStack_a8);
      uStack_d0 = 0;
      if ((uStack_e8 & 1) == 0) {
        pbStack_b8 = pbStack_d8;
        uStack_c8 = uStack_e8;
        uStack_c4 = uStack_e4;
        uStack_c0 = uStack_e0;
        uStack_bc = uStack_dc;
      }
      else {
        func_0x0412e5e0(&uStack_c8,pbStack_d8,CONCAT44(uStack_dc,uStack_e0));
      }
      uStack_b0 = 0;
      if ((uStack_c8 & 1) == 0) {
        if ((byte)uStack_c8 >> 1 != 0) goto LAB_0d3a62e6;
      }
      else if (CONCAT44(uStack_bc,uStack_c0) != 0) {
LAB_0d3a62e6:
        pbVar21 = pbStack_b8;
        if ((uStack_c8 & 1) == 0) {
          pbVar21 = (byte *)((long)&uStack_c8 + 1);
        }
        if ((pbVar21 != (byte *)0x0) && (*pbVar21 != 0)) {
          uVar16 = 0xcbf29ce484222325;
          uVar12 = func_0x0eee2e90(pbVar21);
          if (uVar12 != 0) {
            uVar13 = (ulong)((uint)uVar12 & 7);
            if (7 < uVar12) {
              uVar12 = uVar12 & 0xfffffffffffffff8;
              do {
                uVar16 = (((((((uVar16 * 0x100000001b3 ^ (ulong)*pbVar21) * 0x100000001b3 ^
                              (ulong)pbVar21[1]) * 0x100000001b3 ^ (ulong)pbVar21[2]) *
                             0x100000001b3 ^ (ulong)pbVar21[3]) * 0x100000001b3 ^ (ulong)pbVar21[4])
                           * 0x100000001b3 ^ (ulong)pbVar21[5]) * 0x100000001b3 ^ (ulong)pbVar21[6])
                         * 0x100000001b3 ^ (ulong)pbVar21[7];
                pbVar21 = pbVar21 + 8;
                uVar12 = uVar12 - 8;
              } while (uVar12 != 0);
            }
            if (uVar13 != 0) {
              uVar12 = 0;
              do {
                uVar16 = uVar16 * 0x100000001b3 ^ (ulong)pbVar21[uVar12];
                uVar12 = uVar12 + 1;
              } while (uVar13 != uVar12);
            }
          }
LAB_0d3a63d9:
          uStack_d0 = uVar16;
          uVar8 = func_0x048648e0(uVar9,&UNK_0131d861);
          uVar5 = func_0x04863e00(uVar8,0);
          FUN_0cc422f0(0xf6ff9e0,&uStack_d0,uVar5,1,0);
          if ((uStack_c8 & 1) != 0) {
            func_0x0412a280(pbStack_b8,CONCAT44(uStack_c4,uStack_c8) & 0xfffffffffffffffe);
          }
          if ((uStack_e8 & 1) != 0) {
            func_0x0412a280(pbStack_d8,CONCAT44(uStack_e4,uStack_e8) & 0xfffffffffffffffe);
          }
          if ((bStack_a8 & 1) != 0) {
            func_0x0412a280(uStack_98,
                            CONCAT62(uStack_a6,CONCAT11(uStack_a7,bStack_a8)) & 0xfffffffffffffffe);
          }
          puVar7 = extraout_RDX;
          if (extraout_RDX == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)func_0x0cc41df0(0xf6ff9e0,0xf710f98,1);
          }
          return puVar7;
        }
      }
      uVar16 = 0;
      goto LAB_0d3a63d9;
    }
LAB_0d3a604e:
    if (plStack_70 <= plVar20) goto LAB_0d3a605e;
LAB_0d3a5f60:
    *plVar20 = lVar10;
    *(undefined4 *)(plVar20 + 1) = uStack_5c;
    puVar7 = puStack_68;
    plVar2 = plStack_70;
LAB_0d3a5f6f:
    plStack_70 = plVar2;
    plVar20 = plVar20 + 2;
    lStack_80 = 0xd3a5f7c;
    func_0x04862ba0(auStack_58);
  } while( true );
}


