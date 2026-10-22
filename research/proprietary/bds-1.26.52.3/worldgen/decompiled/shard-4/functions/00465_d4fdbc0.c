/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5fdbc0 (ELF vaddr 0xd4fdbc0)
 * Label: caller-of-callee
 * Body:  [[0d5fdbc0, 0d5fe154] [0d5fe160, 0d5fe194] [0d5fe1a0, 0d5fe1b4] [0d5fe1c0, 0d5fe207] [0d5fe210, 0d5fe22a] [0d5fe230, 0d5fe26a] [0d5fe270, 0d5fe284] [0d5fe290, 0d5fe2f4] [0d5fe300, 0d5fe3ac] [0d5fe3b0, 0d5fe414] [0d5fe420, 0d5fe6ae] [0d5fe6b0, 0d5fe70b] [0d5fe710, 0d5fe77b] [0d5fe780, 0d5fea34] [0d5fea40, 0d5fec22] [0d5fec30, 0d5fee0a] [0d5fee10, 0d5fee7c] [0d5fee80, 0d5feee5] [0d5feef0, 0d5ff0eb] [0d5ff0f0, 0d5ff5a0] [0d5ff5b0, 0d5ff990] [0d5ff9a0, 0d5ffbe6] [0d5ffbf0, 0d5ffdba] [0d5ffdc0, 0d5ffe26] [0d5ffe30, 0d5ffe8b] [0d5ffe90, 0d600114] [0d600120, 0d600169] [0d600170, 0d6004cc] [0d6004d0, 0d600585] [0d600590, 0d6005c2] [0d6005d0, 0d600600] [0d600610, 0d60065a] [0d600660, 0d60075b] [0d600760, 0d60078a] [0d600790, 0d6008a0] [0d6008b0, 0d600934] [0d600940, 0d6009b4] [0d6009c0, 0d600a59] [0d600a60, 0d600a9a] [0d600aa0, 0d600b2e] [0d600b30, 0d600b40] [0d600b50, 0d600be6] [0d600bf0, 0d600cc8] [0d600cd0, 0d600d6b] [0d600d70, 0d600df7] [0d600e00, 0d600e8b] [0d600e90, 0d601058] [0d601060, 0d6010bb] [0d6010c0, 0d601589] [0d601590, 0d6015eb] [0d6015f0, 0d601836] [0d601840, 0d60190e] [0d601910, 0d60192e] [0d601930, 0d601ac3] [0d601ad0, 0d601b5b] [0d601b60, 0d601c12] [0d601c20, 0d601c6a] [0d601c70, 0d601cf1] [0d601d00, 0d601e70] [0d601e80, 0d601ef4] [0d601f00, 0d601f80] [0d601f90, 0d602158] [0d602160, 0d602650] [0d602660, 0d6026b9] [0d6026c0, 0d602846] [0d602850, 0d6028a2] [0d6028b0, 0d602c87]]
 * Ghidra: FUN_0d5fdbc0
 */


/* WARNING: Removing unreachable block (ram,0x0d600c20) */
/* WARNING: Removing unreachable block (ram,0x0d600c86) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d5fdbc0(ulong *******param_1,long param_2,long param_3,ulong *******param_4,
                 ulong *******param_5)

{
  ulong ******ppppppuVar1;
  long *plVar2;
  undefined8 *******pppppppuVar3;
  ulong *******pppppppuVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong *******pppppppuVar17;
  ulong *******pppppppuVar18;
  ulong *******pppppppuVar19;
  undefined8 ******ppppppuVar20;
  uint uVar21;
  ulong ******ppppppuVar22;
  ulong *******pppppppuVar23;
  undefined1 auVar24 [8];
  byte *pbVar25;
  ulong uVar26;
  ulong ******ppppppuVar27;
  undefined8 *******pppppppuVar28;
  ulong ******ppppppuVar29;
  ulong uVar30;
  long lVar31;
  undefined8 *******pppppppuVar32;
  ulong *******pppppppuVar33;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulong *******pppppppuStack_250;
  ulong *******pppppppuStack_248;
  undefined1 uStack_240;
  uint7 uStack_23f;
  undefined1 uStack_238;
  uint7 uStack_237;
  undefined1 uStack_230;
  ulong *******pppppppuStack_228;
  ulong *******pppppppuStack_220;
  ulong *******pppppppuStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined1 auStack_1f8 [8];
  ulong *******pppppppuStack_1f0;
  ulong *******pppppppuStack_1e8;
  undefined1 auStack_1d8 [8];
  ulong *******pppppppuStack_1d0;
  ulong *******pppppppuStack_1c8;
  undefined8 uStack_1c0;
  ulong ******ppppppuStack_1b8;
  ulong ******ppppppuStack_1b0;
  ulong ******ppppppuStack_1a8;
  ulong ******ppppppuStack_1a0;
  ulong ******ppppppuStack_198;
  ulong *******pppppppuStack_190;
  ulong *******pppppppuStack_188;
  ulong *******pppppppuStack_180;
  undefined8 *******pppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  long lStack_168;
  ulong *******pppppppuStack_158;
  undefined1 uStack_150;
  uint7 uStack_14f;
  undefined1 uStack_148;
  uint7 uStack_147;
  undefined1 uStack_140;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_118;
  long lStack_110;
  ulong *******pppppppuStack_108;
  ulong *******pppppppuStack_100;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  ulong *******pppppppuStack_d0;
  ulong uStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_98;
  ulong *******pppppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong *******pppppppuStack_70;
  ulong *******pppppppuStack_68;
  ulong *******pppppppuStack_60;
  ulong *****pppppuStack_58;
  ulong *****pppppuStack_50;
  ulong *****pppppuStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  pppppppuVar23 = param_1 + 1;
  pppppppuVar33 = (ulong *******)(param_2 + 0xf8);
  lStack_110 = param_3;
  pppppppuStack_108 = param_4;
  pppppppuStack_c0 = param_5;
  if (pppppppuVar33 != pppppppuVar23) {
    bVar7 = *(byte *)pppppppuVar23;
    if ((*(byte *)pppppppuVar33 & 1) == 0) {
      if ((bVar7 & 1) == 0) {
        *(ulong *******)(param_2 + 0x108) = param_1[3];
        ppppppuVar27 = param_1[2];
        *pppppppuVar33 = *pppppppuVar23;
        *(ulong *******)(param_2 + 0x100) = ppppppuVar27;
      }
      else {
        func_0x04885070(pppppppuVar33,param_1[3],param_1[2]);
      }
    }
    else {
      bVar34 = (bVar7 & 1) != 0;
      ppppppuVar27 = (ulong ******)((long)param_1 + 9);
      if (bVar34) {
        ppppppuVar27 = param_1[3];
      }
      ppppppuVar22 = (ulong ******)(ulong)(bVar7 >> 1);
      if (bVar34) {
        ppppppuVar22 = param_1[2];
      }
      FUN_04885120(pppppppuVar33,ppppppuVar27,ppppppuVar22);
    }
  }
  pppppppuStack_98 = param_1 + 8;
  func_0x0ee33d90(auStack_1d8,pppppppuStack_98,param_1 + 10,0);
  *(undefined1 (*) [8])(param_2 + 0x128) = auStack_1d8;
  *(ulong ********)(param_2 + 0x130) = pppppppuStack_1d0;
  *(ulong ********)(param_2 + 0x138) = pppppppuStack_1c8;
  lStack_200 = param_2;
  if ((*(ulong *)(param_2 + 0x140) >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(param_2 + 0x140) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(lStack_200 + 0x140) = 0;
  uVar30 = (ulong)uStack_1c0 & 0xff00ffffffffffff;
  pppppppuStack_100 = uStack_1c0;
  pppppppuVar23 = uStack_1c0;
  if (((ulong)uStack_1c0 & 0x80000000000000) != 0) {
    lVar13 = *(long *)(uVar30 - 8);
    lVar14 = lVar13 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar14,8);
    }
    *plVar12 = lVar13;
    func_0x0eee2f00(plVar12 + 1,uVar30,lVar13);
    *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
    pppppppuVar23 = (ulong *******)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  *(ulong ********)(lStack_200 + 0x140) = pppppppuVar23;
  if ((*(ulong *)(lStack_200 + 0x148) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0);
  }
  *(undefined8 *)(lStack_200 + 0x148) = 0;
  if (((ulong)ppppppuStack_1b8 & 0x80000000000000) == 0) {
    *(ulong *******)(lStack_200 + 0x148) = ppppppuStack_1b8;
    *(undefined1 *)(lStack_200 + 0x150) = ppppppuStack_1b0._0_1_;
    lVar14 = lStack_200;
  }
  else {
    uVar30 = (ulong)ppppppuStack_1b8 & 0xff00ffffffffffff;
    lVar13 = *(long *)(uVar30 - 8);
    lVar14 = lVar13 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar14,8);
    }
    *plVar12 = lVar13;
    func_0x0eee2f00(plVar12 + 1,uVar30,lVar13);
    lVar14 = lStack_200;
    *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
    *(ulong *)(lStack_200 + 0x148) = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    *(undefined1 *)(lStack_200 + 0x150) = ppppppuStack_1b0._0_1_;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0);
  }
  if (((ulong)pppppppuStack_100 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0);
  }
  *(undefined2 *)(lVar14 + 0xf1) = 0x303;
  if (*(char *)(param_1 + 7) == '\x01') {
    if (((ulong)param_1[4] & 1) == 0) {
      pppppppuStack_1c8 = (ulong *******)param_1[6];
      auStack_1d8 = (undefined1  [8])param_1[4];
      pppppppuStack_1d0 = (ulong *******)param_1[5];
      if ((undefined1 *)(lVar14 + 0x110) != auStack_1d8) {
LAB_0d5fdf7c:
        pbVar25 = (byte *)(lVar14 + 0x110);
        if ((*pbVar25 & 1) == 0) {
          if (((ulong)auStack_1d8 & 1) == 0) {
            *(ulong ********)(lVar14 + 0x120) = pppppppuStack_1c8;
            *(undefined1 (*) [8])pbVar25 = auStack_1d8;
            *(ulong ********)(lVar14 + 0x118) = pppppppuStack_1d0;
          }
          else {
            func_0x04885070(pbVar25,pppppppuStack_1c8,pppppppuStack_1d0);
          }
        }
        else {
          pppppppuVar33 = (ulong *******)((ulong)auStack_1d8 >> 1 & 0x7f);
          pppppppuVar23 = (ulong *******)(auStack_1d8 + 1);
          if (((ulong)auStack_1d8 & 1) != 0) {
            pppppppuVar33 = pppppppuStack_1d0;
            pppppppuVar23 = pppppppuStack_1c8;
          }
          FUN_04885120(pbVar25,pppppppuVar23,pppppppuVar33);
        }
      }
    }
    else {
      func_0x0412e5e0(auStack_1d8,param_1[6],param_1[5]);
      if ((undefined1 *)(lVar14 + 0x110) != auStack_1d8) goto LAB_0d5fdf7c;
    }
  }
  else {
    auStack_1d8 = (undefined1  [8])0x0;
    pppppppuStack_1d0 = (ulong *******)0x0;
    pppppppuStack_1c8 = (ulong *******)0x0;
    if ((undefined1 *)(lVar14 + 0x110) != auStack_1d8) goto LAB_0d5fdf7c;
  }
  if (((ulong)auStack_1d8 & 1) != 0) {
    func_0x0412a280(pppppppuStack_1c8);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (((ulong)param_1[0x15] & 1) != 0) {
      func_0x0412e5e0(auStack_1d8,param_1[0x17],param_1[0x16]);
      lVar13 = func_0x0d648e50(auStack_1d8);
      goto joined_r0x0d5fe07e;
    }
    pppppppuStack_1c8 = (ulong *******)param_1[0x17];
    auStack_1d8 = (undefined1  [8])param_1[0x15];
    pppppppuStack_1d0 = (ulong *******)param_1[0x16];
    lVar13 = func_0x0d648e50(auStack_1d8);
    if (lVar13 == 0) goto LAB_0d5fe576;
LAB_0d5fe084:
    *(undefined1 *)(lVar14 + 0x158) = *(undefined1 *)(lVar13 + 0x28);
  }
  else {
    auStack_1d8 = (undefined1  [8])0x0;
    pppppppuStack_1d0 = (ulong *******)0x0;
    pppppppuStack_1c8 = (ulong *******)0x0;
    lVar13 = func_0x0d648e50(auStack_1d8);
joined_r0x0d5fe07e:
    if (lVar13 != 0) goto LAB_0d5fe084;
LAB_0d5fe576:
    *(undefined1 *)(lVar14 + 0x158) = 7;
  }
  if (((ulong)auStack_1d8 & 1) != 0) {
    func_0x0412a280(pppppppuStack_1c8);
  }
  uVar6 = *(undefined1 *)((long)param_1 + 0xca);
  uVar5 = 0;
  if (*(char *)((long)param_1 + 0xcb) == '\0') {
    uVar6 = 0;
  }
  *(undefined1 *)(lVar14 + 0x1ae) = uVar6;
  uVar6 = 0;
  if (*(char *)((long)param_1 + 0x231) != '\0') {
    uVar6 = (undefined1)*(undefined4 *)(param_1 + 0x46);
  }
  *(undefined1 *)(lVar14 + 0x1b0) = uVar6;
  if (*(char *)((long)param_1 + 0xc9) != '\0') {
    uVar5 = (undefined1)*(undefined4 *)(param_1 + 0x19);
  }
  *(undefined1 *)(lVar14 + 0x1ad) = uVar5;
  uVar6 = func_0x0d603630(pppppppuStack_98);
  *(undefined1 *)(lVar14 + 0x1ac) = uVar6;
  ppppppuVar27 = param_1[0x1e];
  ppppppuVar22 = param_1[0x1f];
  if (ppppppuVar27 != ppppppuVar22) {
    pppppppuStack_100 = (ulong *******)(lVar14 + 0x1b8);
    do {
      if (*(char *)(ppppppuVar27 + 0xb) == '\x01') {
        if (((ulong)ppppppuVar27[8] & 1) == 0) {
          pppppppuStack_218 = (ulong *******)ppppppuVar27[10];
          pppppppuStack_228 = (ulong *******)ppppppuVar27[8];
          pppppppuStack_220 = (ulong *******)ppppppuVar27[9];
        }
        else {
          func_0x0412e5e0(&pppppppuStack_228,ppppppuVar27[10],ppppppuVar27[9]);
        }
      }
      else {
        pppppppuStack_228 = (ulong *******)0x0;
        pppppppuStack_220 = (ulong *******)0x0;
        pppppppuStack_218 = (ulong *******)0x0;
      }
      uVar10 = func_0x0ee35e20(ppppppuVar27);
      if (*(char *)(ppppppuVar27 + 0xf) == '\x01') {
        if (((ulong)ppppppuVar27[0xc] & 1) == 0) {
          uStack_148 = SUB81(ppppppuVar27[0xe],0);
          uStack_147 = (uint7)((ulong)ppppppuVar27[0xe] >> 8);
          pppppppuStack_158 = (ulong *******)ppppppuVar27[0xc];
          uStack_150 = SUB81(ppppppuVar27[0xd],0);
          uStack_14f = (uint7)((ulong)ppppppuVar27[0xd] >> 8);
        }
        else {
          func_0x0412e5e0(&pppppppuStack_158,ppppppuVar27[0xe],ppppppuVar27[0xd]);
        }
      }
      else {
        pppppppuStack_158 = (ulong *******)0x0;
        uStack_150 = 0;
        uStack_14f = 0;
        uStack_148 = 0;
        uStack_147 = 0;
      }
      if (*(char *)(ppppppuVar27 + 0x13) == '\x01') {
        if (((ulong)ppppppuVar27[0x10] & 1) == 0) {
          uStack_238 = SUB81(ppppppuVar27[0x12],0);
          uStack_237 = (uint7)((ulong)ppppppuVar27[0x12] >> 8);
          pppppppuStack_248 = (ulong *******)ppppppuVar27[0x10];
          uStack_240 = SUB81(ppppppuVar27[0x11],0);
          uStack_23f = (uint7)((ulong)ppppppuVar27[0x11] >> 8);
        }
        else {
          func_0x0412e5e0(&pppppppuStack_248,ppppppuVar27[0x12],ppppppuVar27[0x11]);
        }
      }
      else {
        pppppppuStack_248 = (ulong *******)0x0;
        uStack_240 = 0;
        uStack_23f = 0;
        uStack_238 = 0;
        uStack_237 = 0;
      }
      func_0x0ee36220(auStack_1d8,&pppppppuStack_228,ppppppuVar27 + 5,ppppppuVar27 + 3,uVar10,
                      &pppppppuStack_158,&pppppppuStack_248);
      if (((ulong)pppppppuStack_248 & 1) == 0) {
        if (((ulong)pppppppuStack_158 & 1) != 0) goto LAB_0d5fe31d;
LAB_0d5fe2d6:
        if (((ulong)pppppppuStack_228 & 1) != 0) goto LAB_0d5fe33d;
LAB_0d5fe2dd:
        if ((int)ppppppuStack_198 == 3) goto LAB_0d5fe35c;
LAB_0d5fe2e9:
        if ((int)ppppppuStack_198 == 4) {
          lVar14 = 0x1af;
          goto LAB_0d5fe361;
        }
      }
      else {
        func_0x0412a280(CONCAT71(uStack_237,uStack_238),
                        (ulong)pppppppuStack_248 & 0xfffffffffffffffe);
        if (((ulong)pppppppuStack_158 & 1) == 0) goto LAB_0d5fe2d6;
LAB_0d5fe31d:
        func_0x0412a280(CONCAT71(uStack_147,uStack_148),
                        (ulong)pppppppuStack_158 & 0xfffffffffffffffe);
        if (((ulong)pppppppuStack_228 & 1) == 0) goto LAB_0d5fe2dd;
LAB_0d5fe33d:
        func_0x0412a280(pppppppuStack_218,(ulong)pppppppuStack_228 & 0xfffffffffffffffe);
        if ((int)ppppppuStack_198 != 3) goto LAB_0d5fe2e9;
LAB_0d5fe35c:
        lVar14 = 0x1b1;
LAB_0d5fe361:
        *(undefined1 *)(lStack_200 + lVar14) = 1;
      }
      uVar30 = *(ulong *)(lStack_200 + 0x1c0);
      if (uVar30 < *(ulong *)(lStack_200 + 0x1c8)) {
        func_0x0d6125d0(uVar30,auStack_1d8);
        *(ulong *)(lStack_200 + 0x1c0) = uVar30 + 0x78;
        *(ulong *)(lStack_200 + 0x1c0) = uVar30 + 0x78;
      }
      else {
        uVar15 = func_0x0d6334d0(pppppppuStack_100,auStack_1d8);
        *(undefined8 *)(lStack_200 + 0x1c0) = uVar15;
      }
      if (((ulong)pppppppuStack_178 & 1) != 0) {
        func_0x0412a280(lStack_168,(ulong)pppppppuStack_178 & 0xfffffffffffffffe);
      }
      if (((ulong)pppppppuStack_190 & 1) != 0) {
        func_0x0412a280(pppppppuStack_180,(ulong)pppppppuStack_190 & 0xfffffffffffffffe);
      }
      if (((ulong)ppppppuStack_1b0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppppuStack_1b0 & 0xff00ffffffffffff) - 8);
      }
      ppppppuStack_1b0 = (ulong ******)0x0;
      if (((ulong)ppppppuStack_1b8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0);
      }
      ppppppuStack_1b8 = (ulong ******)0x0;
      if (((ulong)auStack_1d8 & 1) != 0) {
        func_0x0412a280(pppppppuStack_1c8);
      }
      ppppppuVar27 = ppppppuVar27 + 0x14;
    } while (ppppppuVar27 != ppppppuVar22);
    ppppppuVar27 = param_1[0x1e];
    ppppppuVar22 = param_1[0x1f];
  }
  lVar14 = lStack_200;
  if (ppppppuVar22 != ppppppuVar27) {
    func_0x0ee34a30();
    lVar13 = func_0x0ee39a90(&DAT_0f7788e0);
    if (lVar13 == 0) {
      *(undefined1 *)(lVar14 + 0x159) = 0;
    }
    else {
      cVar8 = *(char *)(lVar13 + 0x28);
      *(char *)(lVar14 + 0x159) = cVar8;
      if (cVar8 != '\0') goto LAB_0d5fe74a;
    }
    pppppppuStack_228 = (ulong *******)0x0;
    pppppppuStack_220 = (ulong *******)0x0;
    pppppppuStack_218 = (ulong *******)0x0;
    pppppppuStack_158 = (ulong *******)&pppppppuStack_228;
    uStack_150 = 0;
    pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppppppuVar23 == (ulong *******)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    pppppppuStack_220 = pppppppuVar23 + 3;
    *pppppppuVar23 = (ulong ******)0x73656c75646f6d18;
    pppppppuVar23[1] = (ulong ******)0x657079742f;
    auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
    pppppppuStack_1d0 = (ulong *******)0x0;
    pppppppuStack_1c8 = (ulong *******)0x0;
    uStack_1c0 = (ulong *******)0x0;
    pppppppuStack_228 = pppppppuVar23;
    pppppppuStack_218 = pppppppuStack_220;
    func_0x0488f040(&pppppppuStack_1d0,pppppppuVar23,pppppppuStack_220,1);
    ppppppuStack_1b8 = (ulong ******)0x20000000c;
    auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
    func_0x0d5eed10(lStack_110);
    pppppppuVar33 = pppppppuStack_1d0;
    auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
    pppppppuVar23 = pppppppuStack_1c8;
    if (pppppppuStack_1d0 != (ulong *******)0x0) {
      for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
        if (((ulong)pppppppuVar23[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_1c8 = pppppppuVar33;
      func_0x0412a280();
    }
    pppppppuVar33 = pppppppuStack_228;
    pppppppuVar23 = pppppppuStack_220;
    if (pppppppuStack_228 != (ulong *******)0x0) {
      for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
        if (((ulong)pppppppuVar23[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_220 = pppppppuVar33;
      func_0x0412a280();
    }
  }
LAB_0d5fe74a:
  lVar13 = *(long *)(lVar14 + 0x1b8);
  if (lVar13 != *(long *)(lVar14 + 0x1c0)) {
    uVar30 = 0;
    do {
      uVar26 = 0x8000604040600U >> ((char)*(uint *)(lVar13 + 0x40) * '\b' & 0x3fU) & 0xffffffff;
      if (6 < *(uint *)(lVar13 + 0x40)) {
        uVar26 = 0;
      }
      if (((char)uVar30 != '\0') && (cVar8 = (char)uVar26, uVar26 = uVar30, (char)uVar30 != cVar8))
      {
        pppppppuStack_228 = (ulong *******)0x0;
        pppppppuStack_220 = (ulong *******)0x0;
        pppppppuStack_218 = (ulong *******)0x0;
        pppppppuStack_1d0 = (ulong *******)0x0;
        pppppppuStack_1c8 = (ulong *******)0x0;
        uStack_1c0 = (ulong *******)0x0;
        ppppppuStack_1b8 = (ulong ******)0x200000016;
        auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
        func_0x0d5eed10(lStack_110,auStack_1d8);
        break;
      }
      lVar13 = lVar13 + 0x78;
      uVar30 = uVar26;
    } while (lVar13 != *(long *)(lVar14 + 0x1c0));
  }
  uStack_d8 = (ulong *******)0x0;
  pppppppuStack_d0 = (ulong *******)0x0;
  uStack_c8 = 0;
  bVar7 = *(byte *)(lVar14 + 0x159) & 0xfd;
  pppppppuStack_250 = param_1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (bVar7 != 4) goto LAB_0d5fef4a;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar15 = _UNK_0140b3a9;
    *(ulong *)((long)plVar12 + 9) = CONCAT17(UNK_0140b3a8,_DAT_0140b3a1);
    *(undefined8 *)((long)plVar12 + 0x11) = uVar15;
    lVar13 = CONCAT71(_DAT_0140b3a1,UNK_0140b3a0);
    *plVar12 = (long)_DAT_0140b398;
    plVar12[1] = lVar13;
    *(undefined1 *)((long)plVar12 + 0x19) = 0;
    pppppppuStack_158 = (ulong *******)0x0;
    uStack_150 = 0;
    uStack_14f = 0;
    uStack_148 = 0;
    uStack_147 = 0;
    uStack_240 = 0;
    pppppppuStack_248 = (ulong *******)&pppppppuStack_158;
    auStack_1f8 = (undefined1  [8])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (auStack_1f8 == (undefined1  [8])0x0) {
      func_0x0eec74c0(0x18,0);
    }
    uStack_150 = SUB81(auStack_1f8,0);
    uStack_14f = (uint7)((ulong)auStack_1f8 >> 8);
    uStack_148 = SUB81((ulong *******)((long)auStack_1f8 + 0x18),0);
    uStack_147 = (uint7)((ulong)((long)auStack_1f8 + 0x18) >> 8);
    pppppppuStack_220 = (ulong *******)auStack_1f8;
    pppppppuStack_218 = (ulong *******)&pppppppuStack_138;
    uStack_210 = uStack_210 & 0xffffffffffffff00;
    pppppppuStack_228 = (ulong *******)&pppppppuStack_158;
    pppppppuStack_158 = (ulong *******)auStack_1f8;
    pppppppuStack_138 = (ulong *******)auStack_1f8;
    func_0x0412e5e0(auStack_1f8,plVar12,0x19);
    pppppppuVar23 = pppppppuStack_138 + 3;
    uStack_150 = SUB81(pppppppuVar23,0);
    uStack_14f = (uint7)((ulong)pppppppuVar23 >> 8);
    auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
    pppppppuStack_1d0 = (ulong *******)0x0;
    pppppppuStack_1c8 = (ulong *******)0x0;
    uStack_1c0 = (ulong *******)0x0;
    func_0x0488f040(&pppppppuStack_1d0,pppppppuStack_158,pppppppuVar23,
                    ((long)pppppppuVar23 - (long)pppppppuStack_158 >> 3) * -0x5555555555555555);
    ppppppuStack_1b8 = (ulong ******)0x200000007;
    auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
    func_0x0d5eed10(lStack_110,auStack_1d8);
    pppppppuVar33 = pppppppuStack_1d0;
    auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
    pppppppuVar23 = pppppppuStack_1c8;
    if (pppppppuStack_1d0 != (ulong *******)0x0) {
      for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
        if (((ulong)pppppppuVar23[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_1c8 = pppppppuVar33;
      func_0x0412a280(pppppppuStack_1d0,(long)uStack_1c0 - (long)pppppppuStack_1d0);
    }
    pppppppuVar23 = pppppppuStack_158;
    if (pppppppuStack_158 != (ulong *******)0x0) {
      for (pppppppuVar33 = (ulong *******)CONCAT71(uStack_14f,uStack_150);
          pppppppuVar23 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
        if (((ulong)pppppppuVar33[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
        }
      }
      goto LAB_0d5fef1b;
    }
  }
  else {
    if (bVar7 == 4) {
      pppppppuStack_248 = (ulong *******)0x0;
      uStack_240 = 0;
      uStack_23f = 0;
      uStack_238 = 0;
      uStack_237 = 0;
      iVar11 = func_0x0ee32f20(param_1 + 0xd,&pppppppuStack_248,1);
      if (iVar11 != 0) {
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (plVar12 == (long *)0x0) goto LAB_0d602bd0;
        goto LAB_0d5fe8a0;
      }
      auStack_1d8 = (undefined1  [8])0x10034001a0001;
      pppppppuStack_1d0 = (ulong *******)&UNK_01254d89;
      pppppppuStack_1c8 = (ulong *******)0x0;
      uStack_1c0 = (ulong *******)&UNK_01254d89;
      ppppppuStack_1b8 = (ulong ******)0x0;
      func_0x05d54750(&pppppppuStack_138,auStack_1d8);
      cVar8 = func_0x04fa7a10(&pppppppuStack_138,&pppppppuStack_248);
      if (cVar8 == '\0') {
        cVar8 = func_0x0551ca70(&pppppppuStack_248,&UNK_0f47bb38);
        if (cVar8 == '\0') {
          uStack_d8 = pppppppuStack_248;
          if (((ulong)pppppppuStack_d0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppppuStack_d0 & 0xff00ffffffffffff) - 8);
          }
          pppppppuStack_d0 = (ulong *******)0x0;
          pppppppuVar23 = (ulong *******)CONCAT71(uStack_23f,uStack_240);
          if ((uStack_23f & 0x800000000000) == 0) goto LAB_0d60241d;
          uVar30 = (ulong)pppppppuVar23 & 0xff00ffffffffffff;
          pppppppuVar33 = *(ulong ********)(uVar30 - 8);
          pppppppuVar23 = (ulong *******)((long)pppppppuVar33 + 9);
          puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,pppppppuVar23,8)
          ;
          if (pppppppuVar23 != (ulong *******)0x0 && puVar16 == (undefined8 *)0x0)
          goto LAB_0d602c64;
          goto LAB_0d6023e2;
        }
        pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (pppppppuVar23 == (ulong *******)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar15 = _UNK_0140b3a9;
        auStack_1d8 = (undefined1  [8])0x21;
        pppppppuStack_1d0 = (ulong *******)0x19;
        *(ulong *)((long)pppppppuVar23 + 9) = CONCAT17(UNK_0140b3a8,_DAT_0140b3a1);
        *(undefined8 *)((long)pppppppuVar23 + 0x11) = uVar15;
        ppppppuVar27 = (ulong ******)CONCAT71(_DAT_0140b3a1,UNK_0140b3a0);
        *pppppppuVar23 = _DAT_0140b398;
        pppppppuVar23[1] = ppppppuVar27;
        *(undefined1 *)((long)pppppppuVar23 + 0x19) = 0;
        pppppppuStack_1c8 = pppppppuVar23;
        func_0x0ee34300(&uStack_1c0,&pppppppuStack_248);
        func_0x0ee382a0(&ppppppuStack_1a8,&UNK_0f47bb38);
        auStack_1f8 = (undefined1  [8])0x0;
        pppppppuStack_1f0 = (ulong *******)0x0;
        pppppppuStack_1e8 = (ulong *******)0x0;
        pppppppuStack_f0 = (ulong *******)((ulong)pppppppuStack_f0 & 0xffffffffffffff00);
        pppppppuStack_f8 = (ulong *******)auStack_1f8;
        pppppppuStack_118 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (pppppppuStack_118 == (ulong *******)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        pppppppuStack_1e8 = pppppppuStack_118 + 9;
        uStack_150 = SUB81(&pppppppuStack_90,0);
        uStack_14f = (uint7)((ulong)&pppppppuStack_90 >> 8);
        uStack_148 = SUB81(&pppppppuStack_118,0);
        uStack_147 = (uint7)((ulong)&pppppppuStack_118 >> 8);
        uStack_140 = 0;
        auStack_1f8 = (undefined1  [8])pppppppuStack_118;
        pppppppuStack_1f0 = pppppppuStack_118;
        pppppppuStack_158 = (ulong *******)auStack_1f8;
        pppppppuStack_90 = pppppppuStack_118;
        if (((ulong)auStack_1d8 & 1) == 0) {
          pppppppuStack_118[2] = (ulong ******)pppppppuStack_1c8;
          *pppppppuStack_118 = (ulong ******)auStack_1d8;
          pppppppuStack_118[1] = (ulong ******)pppppppuStack_1d0;
          pppppppuVar23 = pppppppuStack_118;
        }
        else {
          func_0x0412e5e0(pppppppuStack_118,pppppppuStack_1c8,pppppppuStack_1d0);
          pppppppuVar23 = pppppppuStack_118;
        }
        pppppppuStack_118 = pppppppuVar23 + 3;
        if (((ulong)uStack_1c0 & 1) == 0) {
          pppppppuVar23[5] = ppppppuStack_1b0;
          *pppppppuStack_118 = (ulong ******)uStack_1c0;
          pppppppuVar23[4] = ppppppuStack_1b8;
        }
        else {
          func_0x0412e5e0(pppppppuStack_118,ppppppuStack_1b0,ppppppuStack_1b8);
        }
        pppppppuVar23 = pppppppuStack_118 + 3;
        if (((ulong)ppppppuStack_1a8 & 1) == 0) {
          pppppppuStack_118[5] = ppppppuStack_198;
          *pppppppuVar23 = ppppppuStack_1a8;
          pppppppuStack_118[4] = ppppppuStack_1a0;
          pppppppuStack_118 = pppppppuVar23;
        }
        else {
          pppppppuStack_118 = pppppppuVar23;
          func_0x0412e5e0(pppppppuVar23,ppppppuStack_198,ppppppuStack_1a0);
        }
        pppppppuStack_1f0 = pppppppuStack_118 + 3;
        pppppppuStack_228 = (ulong *******)&UNK_0f47cca0;
        pppppppuStack_220 = (ulong *******)0x0;
        pppppppuStack_218 = (ulong *******)0x0;
        uStack_210 = 0;
        func_0x0488f040(&pppppppuStack_220,auStack_1f8,pppppppuStack_1f0,
                        ((long)pppppppuStack_1f0 - (long)auStack_1f8 >> 3) * -0x5555555555555555);
        uStack_208 = 0x20000001e;
        pppppppuStack_228 = (ulong *******)&UNK_0f47b778;
        func_0x0d5eed10(lStack_110,&pppppppuStack_228);
        pppppppuVar33 = pppppppuStack_220;
        pppppppuStack_228 = (ulong *******)&UNK_0f47cca0;
        pppppppuVar23 = pppppppuStack_218;
        if (pppppppuStack_220 != (ulong *******)0x0) {
          for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
            if (((ulong)pppppppuVar23[-3] & 1) != 0) {
              func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
            }
          }
          pppppppuStack_218 = pppppppuVar33;
          func_0x0412a280(pppppppuStack_220,uStack_210 - (long)pppppppuStack_220);
        }
        auVar24 = auStack_1f8;
        pppppppuVar23 = pppppppuStack_1f0;
        if (auStack_1f8 == (undefined1  [8])0x0) goto LAB_0d6028ea;
        for (; auVar24 != (undefined1  [8])pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
          if (((ulong)pppppppuVar23[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
          }
        }
      }
      else {
        pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (pppppppuVar23 == (ulong *******)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar15 = _UNK_0140b3a9;
        auStack_1d8 = (undefined1  [8])0x21;
        pppppppuStack_1d0 = (ulong *******)0x19;
        *(ulong *)((long)pppppppuVar23 + 9) = CONCAT17(UNK_0140b3a8,_DAT_0140b3a1);
        *(undefined8 *)((long)pppppppuVar23 + 0x11) = uVar15;
        ppppppuVar27 = (ulong ******)CONCAT71(_DAT_0140b3a1,UNK_0140b3a0);
        *pppppppuVar23 = _DAT_0140b398;
        pppppppuVar23[1] = ppppppuVar27;
        *(undefined1 *)((long)pppppppuVar23 + 0x19) = 0;
        pppppppuStack_1c8 = pppppppuVar23;
        func_0x0ee34300(&uStack_1c0,&pppppppuStack_248);
        func_0x0ee34300(&ppppppuStack_1a8,&pppppppuStack_138);
        auStack_1f8 = (undefined1  [8])0x0;
        pppppppuStack_1f0 = (ulong *******)0x0;
        pppppppuStack_1e8 = (ulong *******)0x0;
        pppppppuStack_f0 = (ulong *******)((ulong)pppppppuStack_f0 & 0xffffffffffffff00);
        pppppppuStack_f8 = (ulong *******)auStack_1f8;
        pppppppuStack_118 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (pppppppuStack_118 == (ulong *******)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        pppppppuStack_1e8 = pppppppuStack_118 + 9;
        uStack_150 = SUB81(&pppppppuStack_90,0);
        uStack_14f = (uint7)((ulong)&pppppppuStack_90 >> 8);
        uStack_148 = SUB81(&pppppppuStack_118,0);
        uStack_147 = (uint7)((ulong)&pppppppuStack_118 >> 8);
        uStack_140 = 0;
        auStack_1f8 = (undefined1  [8])pppppppuStack_118;
        pppppppuStack_1f0 = pppppppuStack_118;
        pppppppuStack_158 = (ulong *******)auStack_1f8;
        pppppppuStack_90 = pppppppuStack_118;
        if (((ulong)auStack_1d8 & 1) == 0) {
          pppppppuStack_118[2] = (ulong ******)pppppppuStack_1c8;
          *pppppppuStack_118 = (ulong ******)auStack_1d8;
          pppppppuStack_118[1] = (ulong ******)pppppppuStack_1d0;
          pppppppuStack_118 = pppppppuStack_118 + 3;
          if (((ulong)uStack_1c0 & 1) != 0) goto LAB_0d602550;
LAB_0d60140a:
          pppppppuStack_118[2] = ppppppuStack_1b0;
          *pppppppuStack_118 = (ulong ******)uStack_1c0;
          pppppppuStack_118[1] = ppppppuStack_1b8;
          pppppppuStack_118 = pppppppuStack_118 + 3;
          if (((ulong)ppppppuStack_1a8 & 1) != 0) goto LAB_0d60258a;
LAB_0d601435:
          pppppppuStack_118[2] = ppppppuStack_198;
          *pppppppuStack_118 = ppppppuStack_1a8;
          pppppppuStack_118[1] = ppppppuStack_1a0;
        }
        else {
          func_0x0412e5e0(pppppppuStack_118,pppppppuStack_1c8,pppppppuStack_1d0);
          pppppppuStack_118 = pppppppuStack_118 + 3;
          if (((ulong)uStack_1c0 & 1) == 0) goto LAB_0d60140a;
LAB_0d602550:
          func_0x0412e5e0(pppppppuStack_118,ppppppuStack_1b0,ppppppuStack_1b8);
          pppppppuStack_118 = pppppppuStack_118 + 3;
          if (((ulong)ppppppuStack_1a8 & 1) == 0) goto LAB_0d601435;
LAB_0d60258a:
          func_0x0412e5e0(pppppppuStack_118,ppppppuStack_198,ppppppuStack_1a0);
        }
        pppppppuStack_1f0 = pppppppuStack_118 + 3;
        pppppppuStack_228 = (ulong *******)&UNK_0f47cca0;
        pppppppuStack_220 = (ulong *******)0x0;
        pppppppuStack_218 = (ulong *******)0x0;
        uStack_210 = 0;
        func_0x0488f040(&pppppppuStack_220,auStack_1f8,pppppppuStack_1f0,
                        ((long)pppppppuStack_1f0 - (long)auStack_1f8 >> 3) * -0x5555555555555555);
        uStack_208 = 0x20000001d;
        pppppppuStack_228 = (ulong *******)&UNK_0f47b778;
        func_0x0d5eed10(lStack_110,&pppppppuStack_228);
        pppppppuVar33 = pppppppuStack_220;
        pppppppuStack_228 = (ulong *******)&UNK_0f47cca0;
        pppppppuVar23 = pppppppuStack_218;
        if (pppppppuStack_220 != (ulong *******)0x0) {
          for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
            if (((ulong)pppppppuVar23[-3] & 1) != 0) {
              func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
            }
          }
          pppppppuStack_218 = pppppppuVar33;
          func_0x0412a280(pppppppuStack_220,uStack_210 - (long)pppppppuStack_220);
        }
        auVar24 = auStack_1f8;
        pppppppuVar23 = pppppppuStack_1f0;
        if (auStack_1f8 == (undefined1  [8])0x0) goto LAB_0d6028ea;
        for (; auVar24 != (undefined1  [8])pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
          if (((ulong)pppppppuVar23[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
          }
        }
      }
      pppppppuStack_1f0 = (ulong *******)auVar24;
      func_0x0412a280(auStack_1f8,(long)pppppppuStack_1e8 - (long)auStack_1f8);
LAB_0d6028ea:
      if (((ulong)ppppppuStack_1a8 & 1) != 0) {
        func_0x0412a280(ppppppuStack_198,(ulong)ppppppuStack_1a8 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_1c0 & 1) != 0) {
        func_0x0412a280(ppppppuStack_1b0,(ulong)uStack_1c0 & 0xfffffffffffffffe);
      }
      uVar30 = uStack_c8;
      if (((ulong)auStack_1d8 & 1) == 0) goto joined_r0x0d602913;
      func_0x0412a280(pppppppuStack_1c8,(ulong)auStack_1d8 & 0xfffffffffffffffe);
      if (((ulong)pppppppuStack_128 & 0x80000000000000) == 0) goto LAB_0d6029a8;
      goto LAB_0d602986;
    }
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar15 = _UNK_0140b3a9;
    *(ulong *)((long)plVar12 + 9) = CONCAT17(UNK_0140b3a8,_DAT_0140b3a1);
    *(undefined8 *)((long)plVar12 + 0x11) = uVar15;
    lVar13 = CONCAT71(_DAT_0140b3a1,UNK_0140b3a0);
    *plVar12 = (long)_DAT_0140b398;
    plVar12[1] = lVar13;
    *(undefined1 *)((long)plVar12 + 0x19) = 0;
    pppppppuStack_158 = (ulong *******)0x0;
    uStack_150 = 0;
    uStack_14f = 0;
    uStack_148 = 0;
    uStack_147 = 0;
    uStack_240 = 0;
    pppppppuStack_248 = (ulong *******)&pppppppuStack_158;
    auStack_1f8 = (undefined1  [8])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (auStack_1f8 == (undefined1  [8])0x0) {
      func_0x0eec74c0(0x18,0);
    }
    uStack_150 = SUB81(auStack_1f8,0);
    uStack_14f = (uint7)((ulong)auStack_1f8 >> 8);
    uStack_148 = SUB81((ulong *******)((long)auStack_1f8 + 0x18),0);
    uStack_147 = (uint7)((ulong)((long)auStack_1f8 + 0x18) >> 8);
    pppppppuStack_220 = (ulong *******)auStack_1f8;
    pppppppuStack_218 = (ulong *******)&pppppppuStack_138;
    uStack_210 = uStack_210 & 0xffffffffffffff00;
    pppppppuStack_228 = (ulong *******)&pppppppuStack_158;
    pppppppuStack_158 = (ulong *******)auStack_1f8;
    pppppppuStack_138 = (ulong *******)auStack_1f8;
    func_0x0412e5e0(auStack_1f8,plVar12,0x19);
    pppppppuVar23 = pppppppuStack_138 + 3;
    uStack_150 = SUB81(pppppppuVar23,0);
    uStack_14f = (uint7)((ulong)pppppppuVar23 >> 8);
    auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
    pppppppuStack_1d0 = (ulong *******)0x0;
    pppppppuStack_1c8 = (ulong *******)0x0;
    uStack_1c0 = (ulong *******)0x0;
    func_0x0488f040(&pppppppuStack_1d0,pppppppuStack_158,pppppppuVar23,
                    ((long)pppppppuVar23 - (long)pppppppuStack_158 >> 3) * -0x5555555555555555);
    ppppppuStack_1b8 = (ulong ******)0x20000001c;
    auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
    func_0x0d604f40(lStack_110,auStack_1d8);
    pppppppuVar33 = pppppppuStack_1d0;
    auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
    pppppppuVar23 = pppppppuStack_1c8;
    if (pppppppuStack_1d0 != (ulong *******)0x0) {
      for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
        if (((ulong)pppppppuVar23[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_1c8 = pppppppuVar33;
      func_0x0412a280(pppppppuStack_1d0,(long)uStack_1c0 - (long)pppppppuStack_1d0);
    }
    pppppppuVar23 = pppppppuStack_158;
    if (pppppppuStack_158 != (ulong *******)0x0) {
      for (pppppppuVar33 = (ulong *******)CONCAT71(uStack_14f,uStack_150);
          pppppppuVar23 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
        if (((ulong)pppppppuVar33[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
        }
      }
LAB_0d5fef1b:
      uStack_150 = SUB81(pppppppuVar23,0);
      uStack_14f = (uint7)((ulong)pppppppuVar23 >> 8);
      func_0x0412a280(pppppppuStack_158,CONCAT71(uStack_147,uStack_148) - (long)pppppppuStack_158);
    }
  }
  func_0x0412a280(plVar12,0x20);
LAB_0d5fef4a:
  do {
    pppppppuVar23 = uStack_d8;
    auStack_1d8 = (undefined1  [8])uStack_d8;
    pppppppuVar33 = pppppppuStack_d0;
    if (((ulong)pppppppuStack_d0 & 0x80000000000000) != 0) {
      uVar30 = (ulong)pppppppuStack_d0 & 0xff00ffffffffffff;
      lVar31 = *(long *)(uVar30 - 8);
      lVar13 = lVar31 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar12 = lVar31;
      func_0x0eee2f00(plVar12 + 1,uVar30,lVar31);
      *(undefined1 *)((long)plVar12 + lVar31 + 8) = 0;
      pppppppuVar33 = (ulong *******)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppppppuStack_1c8 = (ulong *******)0x0;
    uVar30 = uStack_c8;
    pppppppuStack_1d0 = pppppppuVar33;
    pppppppuStack_100 = pppppppuVar33;
    if ((uStack_c8 & 0x80000000000000) != 0) {
      uVar30 = uStack_c8 & 0xff00ffffffffffff;
      lVar31 = *(long *)(uVar30 - 8);
      lVar13 = lVar31 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar12 = lVar31;
      func_0x0eee2f00(plVar12 + 1,uVar30,lVar31);
      *(undefined1 *)((long)plVar12 + lVar31 + 8) = 0;
      uVar30 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uVar10 = 0x34;
    pppppppuStack_1c8 = (ulong *******)uVar30;
    if ((uStack_d8._6_1_ == '\x01') &&
       (cVar8 = func_0x04fa7a10(&uStack_d8,0xf7208c0), uVar10 = _DAT_0f7208d8, cVar8 == '\0')) {
      lVar31 = 0xf7208e0;
      lVar13 = 0x2c;
      do {
        cVar8 = func_0x04fa7a10(&uStack_d8,lVar31);
        if ((cVar8 != '\0') && (cVar8 = func_0x04fa7a10(&uStack_d8,lVar31 + -0x20), cVar8 == '\0'))
        {
          lVar14 = lStack_200;
          uVar10 = *(undefined4 *)(lVar31 + -8);
          break;
        }
        lVar31 = lVar31 + 0x20;
        lVar13 = lVar13 + -1;
        lVar14 = lStack_200;
        uVar10 = 0x34;
      } while (lVar13 != 0);
    }
    uStack_1c0 = (ulong *******)CONCAT44(uStack_1c0._4_4_,uVar10);
    uVar9 = func_0x0d8a1d70(&uStack_d8);
    uStack_1c0._0_6_ = CONCAT24(uVar9,(undefined4)uStack_1c0);
    *(ulong ********)(lVar14 + 0x180) = pppppppuVar23;
    if ((*(ulong *)(lVar14 + 0x188) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar14 + 0x188) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lStack_200 + 0x188) = 0;
    uVar26 = (ulong)pppppppuStack_100 & 0xff00ffffffffffff;
    pppppppuVar23 = pppppppuStack_100;
    if (((ulong)pppppppuStack_100 & 0x80000000000000) != 0) {
      lVar13 = *(long *)(uVar26 - 8);
      lVar14 = lVar13 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar12 = lVar13;
      func_0x0eee2f00(plVar12 + 1,uVar26,lVar13);
      *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
      pppppppuVar23 = (ulong *******)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    *(ulong ********)(lStack_200 + 0x188) = pppppppuVar23;
    if ((*(ulong *)(lStack_200 + 400) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lStack_200 + 400) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lStack_200 + 400) = 0;
    if ((uVar30 & 0x80000000000000) == 0) {
      *(ulong *)(lStack_200 + 400) = uVar30;
      *(undefined4 *)(lStack_200 + 0x198) = (undefined4)uStack_1c0;
      *(undefined2 *)(lStack_200 + 0x19c) = uStack_1c0._4_2_;
    }
    else {
      uVar30 = uVar30 & 0xff00ffffffffffff;
      lVar13 = *(long *)(uVar30 - 8);
      lVar14 = lVar13 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar12 = lVar13;
      func_0x0eee2f00(plVar12 + 1,uVar30,lVar13);
      *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
      *(ulong *)(lStack_200 + 400) = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      *(undefined2 *)(lStack_200 + 0x19c) = uStack_1c0._4_2_;
      *(undefined4 *)(lStack_200 + 0x198) = (undefined4)uStack_1c0;
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar30 - 8);
    }
    pppppppuStack_1c8 = (ulong *******)0x0;
    if (((ulong)pppppppuStack_100 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar26 - 8);
    }
    uStack_148 = 0;
    uStack_147 = 0;
    uStack_140 = 0;
    pppppppuStack_158 = (ulong *******)0x0;
    uStack_150 = 0;
    uStack_14f = 0;
    lVar14 = 0x6e6f69737265765f;
    if (*(char *)(pppppppuStack_250 + 0x14) != '\x01') goto LAB_0d5ff84b;
    uStack_238 = 0;
    uStack_237 = 0;
    uStack_230 = 0;
    pppppppuStack_248 = (ulong *******)0x0;
    uStack_240 = 0;
    uStack_23f = 0;
    iVar11 = func_0x0d88e850(pppppppuStack_250 + 0x11,&pppppppuStack_248);
    if (iVar11 == 0) {
      uVar30 = CONCAT71(uStack_23f,uStack_240);
      pppppppuStack_158 = pppppppuStack_248;
      uStack_150 = 0;
      uStack_14f = 0;
      if ((uStack_23f & 0x800000000000) == 0) goto LAB_0d5ff688;
      plVar12 = (long *)(uVar30 & 0xff00ffffffffffff);
      pppppppuVar33 = (ulong *******)plVar12[-1];
      pppppppuVar19 = (ulong *******)((long)pppppppuVar33 + 9);
      pppppppuVar17 =
           (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,pppppppuVar19,8);
      if (pppppppuVar19 != (ulong *******)0x0 && pppppppuVar17 == (ulong *******)0x0)
      goto LAB_0d602bf7;
      goto LAB_0d5ff64d;
    }
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar15 = _UNK_011b07a6;
    *puVar16 = _DAT_011b079e;
    puVar16[1] = uVar15;
    puVar16[2] = 0x6e6f69737265765f;
    *(undefined1 *)(puVar16 + 3) = 0;
    pppppppuStack_138 = (ulong *******)0x0;
    pppppppuStack_130 = (ulong *******)0x0;
    pppppppuStack_128 = (ulong *******)0x0;
    pppppppuStack_1f0 = (ulong *******)((ulong)pppppppuStack_1f0 & 0xffffffffffffff00);
    auStack_1f8 = (undefined1  [8])&pppppppuStack_138;
    pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppppppuVar23 == (ulong *******)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    pppppppuStack_128 = pppppppuVar23 + 3;
    pppppppuStack_220 = (ulong *******)&pppppppuStack_118;
    pppppppuStack_218 = (ulong *******)&pppppppuStack_f8;
    uStack_210 = uStack_210 & 0xffffffffffffff00;
    pppppppuStack_228 = (ulong *******)&pppppppuStack_138;
    pppppppuStack_138 = pppppppuVar23;
    pppppppuStack_130 = pppppppuVar23;
    pppppppuStack_118 = pppppppuVar23;
    pppppppuStack_f8 = pppppppuVar23;
    func_0x0412e5e0(pppppppuVar23,puVar16,0x18);
    pppppppuStack_130 = pppppppuStack_f8 + 3;
    auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
    pppppppuStack_1d0 = (ulong *******)0x0;
    pppppppuStack_1c8 = (ulong *******)0x0;
    uStack_1c0 = (ulong *******)0x0;
    func_0x0488f040(&pppppppuStack_1d0,pppppppuStack_138,pppppppuStack_130,
                    ((long)pppppppuStack_130 - (long)pppppppuStack_138 >> 3) * -0x5555555555555555);
    ppppppuStack_1b8 = (ulong ******)0x20000000f;
    auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
    func_0x0d5eed10(lStack_110,auStack_1d8);
    pppppppuVar33 = pppppppuStack_1d0;
    auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
    pppppppuVar23 = pppppppuStack_1c8;
    if (pppppppuStack_1d0 != (ulong *******)0x0) {
      for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
        if (((ulong)pppppppuVar23[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_1c8 = pppppppuVar33;
      func_0x0412a280(pppppppuStack_1d0,(long)uStack_1c0 - (long)pppppppuStack_1d0);
    }
    pppppppuVar33 = pppppppuStack_138;
    pppppppuVar23 = pppppppuStack_130;
    if (pppppppuStack_138 != (ulong *******)0x0) {
      for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
        if (((ulong)pppppppuVar23[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_130 = pppppppuVar33;
      func_0x0412a280(pppppppuStack_138,(long)pppppppuStack_128 - (long)pppppppuStack_138);
    }
    func_0x0412a280(puVar16,0x20);
    uVar30 = CONCAT71(uStack_237,uStack_238);
    if ((uStack_237 & 0x800000000000) == 0) goto LAB_0d5ff816;
LAB_0d5ff7f4:
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar30 & 0xff00ffffffffffff) - 8);
LAB_0d5ff816:
    uStack_238 = 0;
    uStack_237 = 0;
    if ((uStack_23f & 0x800000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT71(uStack_23f,uStack_240) & 0xff00ffffffffffff) - 8);
    }
LAB_0d5ff84b:
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar15 = _UNK_011b07a6;
    *puVar16 = _DAT_011b079e;
    puVar16[1] = uVar15;
    puVar16[2] = lVar14;
    *(undefined1 *)(puVar16 + 3) = 0;
    pppppppuStack_b8 = (ulong *******)0x0;
    pppppppuStack_b0 = (ulong *******)0x0;
    pppppppuStack_a8 = (ulong *******)0x0;
    pppppppuStack_220 = (ulong *******)((ulong)pppppppuStack_220 & 0xffffffffffffff00);
    pppppppuStack_228 = (ulong *******)&pppppppuStack_b8;
    pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppppppuVar23 == (ulong *******)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    pppppppuStack_a8 = pppppppuVar23 + 3;
    pppppppuStack_1d0 = (ulong *******)&pppppppuStack_138;
    pppppppuStack_1c8 = (ulong *******)&pppppppuStack_248;
    uStack_1c0 = (ulong *******)((ulong)uStack_1c0 & 0xffffffffffffff00);
    pppppppuStack_248 = pppppppuVar23;
    auStack_1d8 = (undefined1  [8])&pppppppuStack_b8;
    pppppppuStack_138 = pppppppuVar23;
    pppppppuStack_b8 = pppppppuVar23;
    pppppppuStack_b0 = pppppppuVar23;
    func_0x0412e5e0(pppppppuVar23,puVar16,0x18);
    lVar14 = lStack_200;
    pppppppuStack_b0 = pppppppuStack_248 + 3;
    func_0x0d6037e0(lStack_200,lStack_110,&pppppppuStack_158,3,&pppppppuStack_b8);
    pppppppuVar33 = pppppppuStack_b8;
    pppppppuVar23 = pppppppuStack_b0;
    if (pppppppuStack_b8 != (ulong *******)0x0) {
      for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
        if (((ulong)pppppppuVar23[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_b0 = pppppppuVar33;
      func_0x0412a280(pppppppuStack_b8,(long)pppppppuStack_a8 - (long)pppppppuStack_b8);
    }
    func_0x0412a280(puVar16,0x20);
    if (*(char *)(lVar14 + 0x159) == '\b') {
      if (*(char *)((long)pppppppuStack_250 + 0xcd) == '\0') {
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar16 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar15 = _UNK_013d80ae;
        *(ulong *)((long)puVar16 + 0xc) = CONCAT44(_UNK_013d80aa,_DAT_013d80a6);
        *(undefined8 *)((long)puVar16 + 0x14) = uVar15;
        uVar15 = CONCAT44(_DAT_013d80a6,_UNK_013d80a2);
        *puVar16 = _DAT_013d809a;
        puVar16[1] = uVar15;
        *(undefined1 *)((long)puVar16 + 0x1c) = 0;
        pppppppuStack_248 = (ulong *******)0x0;
        uStack_240 = 0;
        uStack_23f = 0;
        uStack_238 = 0;
        uStack_237 = 0;
        pppppppuStack_138 = (ulong *******)&pppppppuStack_248;
        pppppppuStack_130 = (ulong *******)((ulong)pppppppuStack_130 & 0xffffffffffffff00);
        pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
        if (pppppppuVar23 == (ulong *******)0x0) {
          func_0x0eec74c0(0x18,0);
        }
        uStack_240 = SUB81(pppppppuVar23,0);
        uStack_23f = (uint7)((ulong)pppppppuVar23 >> 8);
        uStack_238 = SUB81(pppppppuVar23 + 3,0);
        uStack_237 = (uint7)((ulong)(pppppppuVar23 + 3) >> 8);
        pppppppuStack_228 = (ulong *******)&pppppppuStack_248;
        pppppppuStack_220 = (ulong *******)&pppppppuStack_f8;
        pppppppuStack_218 = (ulong *******)auStack_1f8;
        uStack_210 = uStack_210 & 0xffffffffffffff00;
        pppppppuStack_248 = pppppppuVar23;
        auStack_1f8 = (undefined1  [8])pppppppuVar23;
        pppppppuStack_f8 = pppppppuVar23;
        func_0x0412e5e0(pppppppuVar23,puVar16,0x1c);
        pppppppuVar23 = (ulong *******)((long)auStack_1f8 + 0x18);
        uStack_240 = SUB81(pppppppuVar23,0);
        uStack_23f = (uint7)((ulong)pppppppuVar23 >> 8);
        auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
        pppppppuStack_1d0 = (ulong *******)0x0;
        pppppppuStack_1c8 = (ulong *******)0x0;
        uStack_1c0 = (ulong *******)0x0;
        func_0x0488f040(&pppppppuStack_1d0,pppppppuStack_248,pppppppuVar23,
                        ((long)pppppppuVar23 - (long)pppppppuStack_248 >> 3) * -0x5555555555555555);
        ppppppuStack_1b8 = (ulong ******)0x200000007;
        auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
        func_0x0d5eed10(lStack_110,auStack_1d8);
        pppppppuVar33 = pppppppuStack_1d0;
        auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
        pppppppuVar23 = pppppppuStack_1c8;
        if (pppppppuStack_1d0 != (ulong *******)0x0) {
          for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
            if (((ulong)pppppppuVar23[-3] & 1) != 0) {
              func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
            }
          }
          pppppppuStack_1c8 = pppppppuVar33;
          func_0x0412a280(pppppppuStack_1d0,(long)uStack_1c0 - (long)pppppppuStack_1d0);
        }
        pppppppuVar23 = pppppppuStack_248;
        if (pppppppuStack_248 != (ulong *******)0x0) {
          for (pppppppuVar33 = (ulong *******)CONCAT71(uStack_23f,uStack_240);
              pppppppuVar23 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
            if (((ulong)pppppppuVar33[-3] & 1) != 0) {
              func_0x0412a280(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
            }
          }
LAB_0d5ffeb8:
          uStack_240 = SUB81(pppppppuVar23,0);
          uStack_23f = (uint7)((ulong)pppppppuVar23 >> 8);
          func_0x0412a280(pppppppuStack_248,
                          CONCAT71(uStack_237,uStack_238) - (long)pppppppuStack_248);
        }
LAB_0d5ffeca:
        func_0x0412a280(puVar16,0x20);
      }
      else {
        *(char *)(lVar14 + 0x1a0) = '\x02' - *(char *)((long)pppppppuStack_250 + 0xcc);
      }
    }
    else if (*(char *)((long)pppppppuStack_250 + 0xcd) != '\0') {
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar15 = _UNK_013d80ae;
      *(ulong *)((long)puVar16 + 0xc) = CONCAT44(_UNK_013d80aa,_DAT_013d80a6);
      *(undefined8 *)((long)puVar16 + 0x14) = uVar15;
      uVar15 = CONCAT44(_DAT_013d80a6,_UNK_013d80a2);
      *puVar16 = _DAT_013d809a;
      puVar16[1] = uVar15;
      *(undefined1 *)((long)puVar16 + 0x1c) = 0;
      pppppppuStack_248 = (ulong *******)0x0;
      uStack_240 = 0;
      uStack_23f = 0;
      uStack_238 = 0;
      uStack_237 = 0;
      pppppppuStack_138 = (ulong *******)&pppppppuStack_248;
      pppppppuStack_130 = (ulong *******)((ulong)pppppppuStack_130 & 0xffffffffffffff00);
      pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (pppppppuVar23 == (ulong *******)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      uStack_240 = SUB81(pppppppuVar23,0);
      uStack_23f = (uint7)((ulong)pppppppuVar23 >> 8);
      uStack_238 = SUB81(pppppppuVar23 + 3,0);
      uStack_237 = (uint7)((ulong)(pppppppuVar23 + 3) >> 8);
      pppppppuStack_228 = (ulong *******)&pppppppuStack_248;
      pppppppuStack_220 = (ulong *******)&pppppppuStack_f8;
      pppppppuStack_218 = (ulong *******)auStack_1f8;
      uStack_210 = uStack_210 & 0xffffffffffffff00;
      pppppppuStack_248 = pppppppuVar23;
      auStack_1f8 = (undefined1  [8])pppppppuVar23;
      pppppppuStack_f8 = pppppppuVar23;
      func_0x0412e5e0(pppppppuVar23,puVar16,0x1c);
      pppppppuVar23 = (ulong *******)((long)auStack_1f8 + 0x18);
      uStack_240 = SUB81(pppppppuVar23,0);
      uStack_23f = (uint7)((ulong)pppppppuVar23 >> 8);
      auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
      pppppppuStack_1d0 = (ulong *******)0x0;
      pppppppuStack_1c8 = (ulong *******)0x0;
      uStack_1c0 = (ulong *******)0x0;
      func_0x0488f040(&pppppppuStack_1d0,pppppppuStack_248,pppppppuVar23,
                      ((long)pppppppuVar23 - (long)pppppppuStack_248 >> 3) * -0x5555555555555555);
      ppppppuStack_1b8 = (ulong ******)0x20000001c;
      auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
      func_0x0d604f40(lStack_110,auStack_1d8);
      pppppppuVar33 = pppppppuStack_1d0;
      auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
      pppppppuVar23 = pppppppuStack_1c8;
      if (pppppppuStack_1d0 != (ulong *******)0x0) {
        for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
          if (((ulong)pppppppuVar23[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_1c8 = pppppppuVar33;
        func_0x0412a280(pppppppuStack_1d0,(long)uStack_1c0 - (long)pppppppuStack_1d0);
      }
      pppppppuVar23 = pppppppuStack_248;
      if (pppppppuStack_248 != (ulong *******)0x0) {
        for (pppppppuVar33 = (ulong *******)CONCAT71(uStack_23f,uStack_240);
            pppppppuVar23 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
          if (((ulong)pppppppuVar33[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
          }
        }
        goto LAB_0d5ffeb8;
      }
      goto LAB_0d5ffeca;
    }
    if (*(char *)(pppppppuStack_250 + 0x1d) == '\x01') {
      *(ulong *******)(lVar14 + 0x2d8) = pppppppuStack_250[0x1a];
      if ((*(ulong *)(lVar14 + 0x2e0) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lVar14 + 0x2e0) & 0xff00ffffffffffff) - 8);
      }
      *(undefined8 *)(lVar14 + 0x2e0) = 0;
      ppppppuVar27 = pppppppuStack_250[0x1b];
      if (((ulong)ppppppuVar27 & 0x80000000000000) != 0) {
        lVar31 = *(long *)(((ulong)ppppppuVar27 & 0xff00ffffffffffff) - 8);
        lVar13 = lVar31 + 9;
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
        if (lVar13 != 0 && plVar12 == (long *)0x0) {
          func_0x0eec74c0(lVar13,8);
        }
        *plVar12 = lVar31;
        func_0x0eee2f00(plVar12 + 1,(ulong)ppppppuVar27 & 0xff00ffffffffffff,lVar31);
        *(undefined1 *)((long)plVar12 + lVar31 + 8) = 0;
        ppppppuVar27 = (ulong ******)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      *(ulong *******)(lVar14 + 0x2e0) = ppppppuVar27;
      if ((*(ulong *)(lVar14 + 0x2e8) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lVar14 + 0x2e8) & 0xff00ffffffffffff) - 8);
      }
      *(undefined8 *)(lVar14 + 0x2e8) = 0;
      ppppppuVar27 = pppppppuStack_250[0x1c];
      if (((ulong)ppppppuVar27 & 0x80000000000000) != 0) {
        lVar31 = *(long *)(((ulong)ppppppuVar27 & 0xff00ffffffffffff) - 8);
        lVar13 = lVar31 + 9;
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
        if (lVar13 != 0 && plVar12 == (long *)0x0) {
          func_0x0eec74c0(lVar13,8);
        }
        *plVar12 = lVar31;
        func_0x0eee2f00(plVar12 + 1,(ulong)ppppppuVar27 & 0xff00ffffffffffff,lVar31);
        *(undefined1 *)((long)plVar12 + lVar31 + 8) = 0;
        ppppppuVar27 = (ulong ******)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      *(ulong *******)(lVar14 + 0x2e8) = ppppppuVar27;
    }
    if (*(char *)(pppppppuStack_250 + 0x24) == '\x01') {
      pppppppuVar23 = (ulong *******)pppppppuStack_250[0x21];
      pppppppuVar33 = (ulong *******)pppppppuStack_250[0x22];
      if (pppppppuVar23 != pppppppuVar33) {
        pppppppuStack_100 = (ulong *******)(lVar14 + 0x1e8);
        lVar13 = lVar14 + 0x200;
        pppppppuStack_98 = pppppppuVar33;
        lStack_40 = lVar13;
        do {
          if (pppppppuVar23 != (ulong *******)0x0) {
            if (*(int *)(pppppppuVar23 + 8) == 0) {
              func_0x0ee33d90(auStack_1d8,pppppppuVar23,pppppppuVar23 + 2,0);
              puVar16 = *(undefined8 **)(lVar14 + 0x1f0);
              if (puVar16 < *(undefined8 **)(lVar14 + 0x1f8)) {
                *puVar16 = auStack_1d8;
                puVar16[1] = pppppppuStack_1d0;
                puVar16[2] = pppppppuStack_1c8;
                puVar16[3] = 0;
                pppppppuVar19 = uStack_1c0;
                if (((ulong)uStack_1c0 & 0x80000000000000) != 0) {
                  uVar30 = (ulong)uStack_1c0 & 0xff00ffffffffffff;
                  lVar13 = *(long *)(uVar30 - 8);
                  lVar14 = lVar13 + 9;
                  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
                  if (lVar14 != 0 && plVar12 == (long *)0x0) {
                    func_0x0eec74c0(lVar14,8);
                  }
                  *plVar12 = lVar13;
                  func_0x0eee2f00(plVar12 + 1,uVar30,lVar13);
                  *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
                  pppppppuVar19 =
                       (ulong *******)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000)
                  ;
                  lVar13 = lStack_40;
                  pppppppuVar33 = pppppppuStack_98;
                  lVar14 = lStack_200;
                }
                puVar16[3] = pppppppuVar19;
                puVar16[4] = 0;
                ppppppuVar27 = ppppppuStack_1b8;
                if (((ulong)ppppppuStack_1b8 & 0x80000000000000) != 0) {
                  puStack_38 = puVar16 + 3;
                  uVar30 = (ulong)ppppppuStack_1b8 & 0xff00ffffffffffff;
                  lVar13 = *(long *)(uVar30 - 8);
                  lVar14 = lVar13 + 9;
                  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
                  if (lVar14 != 0 && plVar12 == (long *)0x0) {
                    func_0x0eec74c0(lVar14,8);
                  }
                  *plVar12 = lVar13;
                  func_0x0eee2f00(plVar12 + 1,uVar30,lVar13);
                  *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
                  ppppppuVar27 = (ulong ******)
                                 ((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
                  lVar13 = lStack_40;
                  pppppppuVar33 = pppppppuStack_98;
                  lVar14 = lStack_200;
                }
                puVar16[4] = ppppppuVar27;
                *(undefined1 *)(puVar16 + 5) = ppppppuStack_1b0._0_1_;
                puVar16 = puVar16 + 6;
                *(undefined8 **)(lVar14 + 0x1f0) = puVar16;
              }
              else {
                puVar16 = (undefined8 *)func_0x09ab50c0(pppppppuStack_100,auStack_1d8);
              }
              *(undefined8 **)(lVar14 + 0x1f0) = puVar16;
              if (((ulong)ppppppuStack_1b8 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)ppppppuStack_1b8 & 0xff00ffffffffffff) - 8);
              }
              ppppppuStack_1b8 = (ulong ******)0x0;
              if (((ulong)uStack_1c0 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)uStack_1c0 & 0xff00ffffffffffff) - 8);
              }
            }
            else if (*(int *)(pppppppuVar23 + 8) == 1) {
              uVar30 = *(ulong *)(lVar14 + 0x208);
              if (uVar30 < *(ulong *)(lVar14 + 0x210)) {
                func_0x0d633790(lVar13,pppppppuVar23);
                lVar31 = uVar30 + 0x40;
              }
              else {
                lVar31 = func_0x0d633870(lVar13,pppppppuVar23);
              }
              *(long *)(lVar14 + 0x208) = lVar31;
            }
          }
          pppppppuVar23 = pppppppuVar23 + 9;
        } while (pppppppuVar23 != pppppppuVar33);
      }
    }
    if (*(char *)(pppppppuStack_250 + 0x2c) == '\x01') {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      func_0x0d631dc0(&uStack_88,pppppppuStack_250[0x29],pppppppuStack_250[0x2a],
                      ((long)pppppppuStack_250[0x2a] - (long)pppppppuStack_250[0x29] >> 4) *
                      0x6db6db6db6db6db7);
      if (*(char *)(lVar14 + 0x230) == '\x01') {
        pppppppuVar23 = (ulong *******)(lVar14 + 0x218);
        ppppppuVar27 = *pppppppuVar23;
        if (ppppppuVar27 != (ulong ******)0x0) {
          ppppppuVar22 = ppppppuVar27;
          if (ppppppuVar27 != *(ulong *******)(lVar14 + 0x220)) {
            ppppppuVar22 = *(ulong *******)(lVar14 + 0x220);
            pppppppuStack_100 = pppppppuVar23;
            do {
              ppppppuVar29 = ppppppuVar22 + -0xe;
              if ((ulong)*(uint *)(ppppppuVar22 + -1) != 0xffffffff) {
                (**(code **)(&UNK_0f47ba90 + (ulong)*(uint *)(ppppppuVar22 + -1) * 8))
                          (auStack_1d8,ppppppuVar29);
              }
              *(undefined4 *)(ppppppuVar22 + -1) = 0xffffffff;
              ppppppuVar22 = ppppppuVar29;
            } while (ppppppuVar29 != ppppppuVar27);
            ppppppuVar22 = *pppppppuStack_100;
            pppppppuVar23 = pppppppuStack_100;
          }
          lVar14 = lStack_200;
          *(ulong *******)(lStack_200 + 0x220) = ppppppuVar27;
          func_0x0412a280(ppppppuVar22,*(long *)(lStack_200 + 0x228) - (long)ppppppuVar22);
          *pppppppuVar23 = (ulong ******)0x0;
          pppppppuVar23[1] = (ulong ******)0x0;
          pppppppuVar23[2] = (ulong ******)0x0;
        }
        *(undefined8 *)(lVar14 + 0x218) = uStack_88;
        *(undefined8 *)(lVar14 + 0x220) = uStack_80;
        *(undefined8 *)(lVar14 + 0x228) = uStack_78;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
      }
      else {
        *(undefined8 *)(lVar14 + 0x218) = uStack_88;
        *(undefined8 *)(lVar14 + 0x220) = uStack_80;
        *(undefined8 *)(lVar14 + 0x228) = uStack_78;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        *(undefined1 *)(lVar14 + 0x230) = 1;
      }
    }
    if ((pppppppuStack_108 != (ulong *******)0x0) && (*(char *)(pppppppuStack_250 + 0x30) != '\0'))
    {
      ppppppuVar27 = pppppppuStack_250[0x2d];
      ppppppuVar22 = pppppppuStack_250[0x2e];
      if (ppppppuVar27 != ppppppuVar22) {
        do {
          if (((ulong)ppppppuVar27[3] & 1) == 0) {
            pppppppuStack_1c8 = (ulong *******)ppppppuVar27[5];
            auStack_1d8 = (undefined1  [8])ppppppuVar27[3];
            pppppppuStack_1d0 = (ulong *******)ppppppuVar27[4];
          }
          else {
            func_0x0412e5e0(auStack_1d8,ppppppuVar27[5],ppppppuVar27[4]);
          }
          if (((ulong)*ppppppuVar27 & 1) == 0) {
            ppppppuStack_1b0 = (ulong ******)ppppppuVar27[2];
            uStack_1c0 = (ulong *******)*ppppppuVar27;
            ppppppuStack_1b8 = (ulong ******)ppppppuVar27[1];
          }
          else {
            func_0x0412e5e0(&uStack_1c0,ppppppuVar27[2],ppppppuVar27[1]);
          }
          ppppppuStack_1a8 =
               (ulong ******)CONCAT71(ppppppuStack_1a8._1_7_,*(byte *)(ppppppuVar27 + 6));
          func_0x0d612890(pppppppuStack_108,auStack_1d8);
          if (((ulong)uStack_1c0 & 1) != 0) {
            func_0x0412a280(ppppppuStack_1b0,(ulong)uStack_1c0 & 0xfffffffffffffffe);
          }
          if (((ulong)auStack_1d8 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1c8,(ulong)auStack_1d8 & 0xfffffffffffffffe);
          }
          ppppppuVar27 = ppppppuVar27 + 7;
        } while (ppppppuVar27 != ppppppuVar22);
      }
    }
    if (*(char *)(pppppppuStack_250 + 0x28) == '\x01') {
      ppppppuVar27 = pppppppuStack_250[0x25];
      ppppppuVar22 = pppppppuStack_250[0x26];
      if (ppppppuVar27 != ppppppuVar22) {
        do {
          if (((ulong)*ppppppuVar27 & 1) == 0) {
            pppppuStack_48 = ppppppuVar27[2];
            pppppuStack_58 = *ppppppuVar27;
            pppppuStack_50 = ppppppuVar27[1];
          }
          else {
            func_0x0412e5e0(&pppppuStack_58,ppppppuVar27[2],ppppppuVar27[1]);
          }
          func_0x0d604da0(lVar14,lStack_110,&pppppuStack_58,pppppppuStack_c0);
          if (((ulong)pppppuStack_58 & 1) != 0) {
            func_0x0412a280(pppppuStack_48,(ulong)pppppuStack_58 & 0xfffffffffffffffe);
          }
          ppppppuVar27 = ppppppuVar27 + 3;
        } while (ppppppuVar27 != ppppppuVar22);
      }
    }
    if (*(char *)(pppppppuStack_250 + 0x45) != '\x01') goto LAB_0d602034;
    pppppppuStack_1d0 = (ulong *******)0x0;
    pppppppuStack_1c8 = (ulong *******)0x0;
    auStack_1d8 = (undefined1  [8])&pppppppuStack_1d0;
    pppppppuStack_138 = (ulong *******)&pppppppuStack_130;
    if (*(char *)(pppppppuStack_250 + 0x44) == '\x01') {
      pppppppuStack_130 = (ulong *******)0x0;
      pppppppuStack_128 = (ulong *******)0x0;
      func_0x0d634440(&pppppppuStack_138,pppppppuStack_250[0x41],pppppppuStack_250 + 0x42);
    }
    else {
      pppppppuStack_130 = (ulong *******)0x0;
      pppppppuStack_128 = (ulong *******)0x0;
    }
    func_0x0d6351c0(auStack_1d8,pppppppuStack_1d0);
    pppppppuVar23 = pppppppuStack_138;
    if ((ulong ********)pppppppuStack_138 != &pppppppuStack_130) {
      do {
        ppppppuVar27 = pppppppuVar23[7];
        ppppppuVar22 = pppppppuVar23[8];
        uVar30 = ((long)ppppppuVar22 - (long)ppppppuVar27 >> 3) * -0x5555555555555555;
        lVar14 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar21 = ((uint)lVar14 ^ 0x3f) * 2 ^ 0x7e;
        if (ppppppuVar22 == ppppppuVar27) {
          uVar21 = 0;
        }
        func_0x0d6352f0(ppppppuVar27,ppppppuVar22,uVar21,1);
        pppppppuVar33 = (ulong *******)pppppppuVar23[7];
        pppppppuStack_108 = pppppppuVar23;
        pppppppuVar23 = (ulong *******)pppppppuVar23[8];
        pppppppuVar17 = pppppppuVar33;
        pppppppuVar19 = pppppppuVar33;
        if (pppppppuVar33 != pppppppuVar23) {
          do {
            while( true ) {
              pppppppuVar18 = pppppppuVar19 + 3;
              pppppppuVar17 = pppppppuVar18;
              if (pppppppuVar18 == pppppppuVar23) goto LAB_0d600a63;
              bVar7 = *(byte *)((long)pppppppuVar18 + 7);
              uVar21 = (uint)bVar7;
              if (((*(byte *)((long)pppppppuVar18 + -0x11) | bVar7) & 1) != 0) break;
              ppppppuVar27 = pppppppuVar18[-2];
              if (((ulong)ppppppuVar27 & 0x80000000000000) == 0) {
                uVar30 = (ulong)((ushort)((ulong)ppppppuVar27 >> 0x30) & 0x7f);
                ppppppuVar22 = pppppppuVar18[1];
                if (((ulong)ppppppuVar22 & 0x80000000000000) == 0) goto LAB_0d6009e7;
LAB_0d60099f:
                uVar21 = 0xffffffff;
                uVar26 = *(ulong *)(((ulong)ppppppuVar22 & 0xff00ffffffffffff) - 8);
              }
              else {
                uVar21 = 0xffffffff;
                uVar30 = *(ulong *)(((ulong)ppppppuVar27 & 0xff00ffffffffffff) - 8);
                ppppppuVar22 = pppppppuVar18[1];
                if (((ulong)ppppppuVar22 & 0x80000000000000) != 0) goto LAB_0d60099f;
LAB_0d6009e7:
                uVar26 = (ulong)((ushort)((ulong)ppppppuVar22 >> 0x30) & 0x7f);
              }
              ppppppuVar29 = pppppppuVar18[-3];
              auVar35._8_8_ = 0;
              auVar35._0_8_ = ppppppuVar29;
              ppppppuVar1 = *pppppppuVar18;
              auVar39._0_2_ = -(ushort)((short)ppppppuVar1 == (short)ppppppuVar29);
              auVar39._2_2_ =
                   -(ushort)((short)((ulong)ppppppuVar1 >> 0x10) ==
                            (short)((ulong)ppppppuVar29 >> 0x10));
              auVar39._4_2_ =
                   -(ushort)((short)((ulong)ppppppuVar1 >> 0x20) ==
                            (short)((ulong)ppppppuVar29 >> 0x20));
              auVar39._6_2_ =
                   -(ushort)((short)((ulong)ppppppuVar1 >> 0x30) ==
                            (short)((ulong)ppppppuVar29 >> 0x30));
              auVar39._8_2_ = 0xffff;
              auVar39._10_2_ = 0xffff;
              auVar39._12_2_ = 0xffff;
              auVar39._14_2_ = 0xffff;
              auVar35 = pshuflw(auVar35,auVar39,0x50);
              auVar36._0_4_ = auVar35._0_4_;
              auVar36._4_4_ = auVar36._0_4_;
              auVar36._8_4_ = auVar35._4_4_;
              auVar36._12_4_ = auVar35._4_4_;
              uVar21 = movmskpd(uVar21,auVar36);
              pppppppuVar19 = pppppppuVar18;
              if (((((uVar21 & 1) != 0) && ((byte)((byte)uVar21 >> 1) != 0)) &&
                  (*(short *)((long)pppppppuVar18 + -0x14) == *(short *)((long)pppppppuVar18 + 4)))
                 && ((uVar30 == uVar26 &&
                     (iVar11 = bcmp((ulong)ppppppuVar27 & 0xff00ffffffffffff,
                                    (ulong)ppppppuVar22 & 0xff00ffffffffffff), iVar11 == 0)))) {
                pppppppuVar17 = pppppppuVar18 + -3;
                goto LAB_0d600a63;
              }
            }
            pppppppuVar17 = pppppppuVar19;
            pppppppuVar19 = pppppppuVar18;
          } while ((*(byte *)((long)pppppppuVar18 + -0x11) & bVar7) == 0);
        }
LAB_0d600a63:
        if (pppppppuVar17 != pppppppuVar23) {
          pppppppuVar19 = pppppppuVar17 + 6;
          if (pppppppuVar19 == pppppppuVar23) {
            pppppppuVar19 = pppppppuVar23;
            pppppppuVar18 = pppppppuStack_108;
            pppppppuVar4 = pppppppuVar17 + 3;
            if (pppppppuVar17 + 3 != pppppppuVar23) {
joined_r0x0d600c93:
              for (; pppppppuVar23 = pppppppuVar4, pppppppuVar33 = pppppppuStack_108,
                  pppppppuVar23 != pppppppuVar19; pppppppuVar19 = pppppppuVar19 + -3) {
                pppppppuStack_108 = pppppppuVar18;
                if (((ulong)pppppppuVar19[-1] & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)pppppppuVar19[-1] & 0xff00ffffffffffff) - 8);
                }
                pppppppuVar19[-1] = (ulong ******)0x0;
                if (((ulong)pppppppuVar19[-2] & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)pppppppuVar19[-2] & 0xff00ffffffffffff) - 8);
                }
                pppppppuVar19[-2] = (ulong ******)0x0;
                pppppppuVar18 = pppppppuStack_108;
                pppppppuStack_108 = pppppppuVar33;
                pppppppuVar4 = pppppppuVar23;
              }
              pppppppuStack_108[8] = (ulong ******)pppppppuVar23;
              pppppppuVar33 = (ulong *******)pppppppuStack_108[7];
              pppppppuStack_108 = pppppppuVar18;
            }
          }
          else {
            do {
              if ((*(char *)((long)pppppppuVar17 + 7) == '\0') &&
                 (*(char *)((long)pppppppuVar19 + 7) == '\0')) {
                ppppppuVar27 = pppppppuVar17[1];
                if (((ulong)ppppppuVar27 & 0x80000000000000) == 0) {
                  uVar30 = (ulong)((ushort)((ulong)ppppppuVar27 >> 0x30) & 0x7f);
                  ppppppuVar22 = pppppppuVar19[1];
                  uVar10 = 0;
                  if (((ulong)ppppppuVar22 & 0x80000000000000) == 0) goto LAB_0d600b77;
LAB_0d600b19:
                  uVar10 = 0xffffffff;
                  uVar26 = *(ulong *)(((ulong)ppppppuVar22 & 0xff00ffffffffffff) - 8);
                }
                else {
                  uVar10 = 0xffffffff;
                  uVar30 = *(ulong *)(((ulong)ppppppuVar27 & 0xff00ffffffffffff) - 8);
                  ppppppuVar22 = pppppppuVar19[1];
                  if (((ulong)ppppppuVar22 & 0x80000000000000) != 0) goto LAB_0d600b19;
LAB_0d600b77:
                  uVar26 = (ulong)((ushort)((ulong)ppppppuVar22 >> 0x30) & 0x7f);
                }
                ppppppuVar29 = *pppppppuVar17;
                auVar37._8_8_ = 0;
                auVar37._0_8_ = ppppppuVar29;
                ppppppuVar1 = *pppppppuVar19;
                auVar40._0_2_ = -(ushort)((short)ppppppuVar1 == (short)ppppppuVar29);
                auVar40._2_2_ =
                     -(ushort)((short)((ulong)ppppppuVar1 >> 0x10) ==
                              (short)((ulong)ppppppuVar29 >> 0x10));
                auVar40._4_2_ =
                     -(ushort)((short)((ulong)ppppppuVar1 >> 0x20) ==
                              (short)((ulong)ppppppuVar29 >> 0x20));
                auVar40._6_2_ =
                     -(ushort)((short)((ulong)ppppppuVar1 >> 0x30) ==
                              (short)((ulong)ppppppuVar29 >> 0x30));
                auVar40._8_2_ = 0xffff;
                auVar40._10_2_ = 0xffff;
                auVar40._12_2_ = 0xffff;
                auVar40._14_2_ = 0xffff;
                auVar35 = pshuflw(auVar37,auVar40,0x50);
                auVar38._0_4_ = auVar35._0_4_;
                auVar38._4_4_ = auVar38._0_4_;
                auVar38._8_4_ = auVar35._4_4_;
                auVar38._12_4_ = auVar35._4_4_;
                uVar21 = movmskpd(uVar10,auVar38);
                if (((((uVar21 & 1) == 0) || ((byte)((byte)uVar21 >> 1) == 0)) ||
                    (*(short *)((long)pppppppuVar17 + 4) != *(short *)((long)pppppppuVar19 + 4))) ||
                   ((uVar30 != uVar26 ||
                    (iVar11 = bcmp((ulong)ppppppuVar27 & 0xff00ffffffffffff,
                                   (ulong)ppppppuVar22 & 0xff00ffffffffffff), iVar11 != 0)))) {
LAB_0d600aa0:
                  pppppppuVar17[3] = *pppppppuVar19;
                  ppppppuVar27 = pppppppuVar17[4];
                  pppppppuVar17[4] = pppppppuVar19[1];
                  pppppppuVar19[1] = ppppppuVar27;
                  ppppppuVar27 = pppppppuVar17[5];
                  pppppppuVar17[5] = pppppppuVar19[2];
                  pppppppuVar17 = pppppppuVar17 + 3;
                  pppppppuVar19[2] = ppppppuVar27;
                }
              }
              else if ((*(char *)((long)pppppppuVar17 + 7) == '\0') ||
                      (*(char *)((long)pppppppuVar19 + 7) == '\0')) goto LAB_0d600aa0;
              pppppppuVar19 = pppppppuVar19 + 3;
            } while (pppppppuVar19 != pppppppuVar23);
            pppppppuVar33 = (ulong *******)pppppppuStack_108[7];
            pppppppuVar23 = (ulong *******)pppppppuStack_108[8];
            pppppppuVar19 = pppppppuVar23;
            pppppppuVar18 = pppppppuStack_108;
            pppppppuVar4 = pppppppuVar17 + 3;
            if (pppppppuVar17 + 3 != pppppppuVar23) goto joined_r0x0d600c93;
          }
        }
        pppppppuStack_c0 = pppppppuVar33;
        pppppppuVar19 = pppppppuVar33;
        pppppppuVar17 = pppppppuVar23;
        if (pppppppuVar33 != pppppppuVar23) {
          do {
            while (*(char *)((long)pppppppuVar33 + 6) != '\0') {
              pppppppuVar33 = pppppppuVar33 + 3;
              if (pppppppuVar33 == pppppppuVar17) goto LAB_0d600e90;
            }
            pppppppuVar18 = pppppppuVar33;
            pppppppuVar19 = pppppppuVar17;
            if (pppppppuVar33 + 3 != pppppppuVar17) {
              do {
                auVar35 = *(undefined1 (*) [16])(pppppppuVar18 + 1);
                *pppppppuVar18 = pppppppuVar18[3];
                pppppppuVar18[1] = pppppppuVar18[4];
                *(undefined1 (*) [16])(pppppppuVar18 + 4) = auVar35;
                pppppppuVar18[2] = pppppppuVar18[5];
                pppppppuVar19 = pppppppuVar18 + 6;
                pppppppuVar18 = pppppppuVar18 + 3;
              } while (pppppppuVar19 != pppppppuVar17);
              pppppppuVar19 = (ulong *******)pppppppuStack_108[8];
            }
            for (; pppppppuVar17 = pppppppuVar18, pppppppuVar17 != pppppppuVar19;
                pppppppuVar19 = pppppppuVar19 + -3) {
              if (((ulong)pppppppuVar19[-1] & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)pppppppuVar19[-1] & 0xff00ffffffffffff) - 8);
              }
              pppppppuVar19[-1] = (ulong ******)0x0;
              if (((ulong)pppppppuVar19[-2] & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)pppppppuVar19[-2] & 0xff00ffffffffffff) - 8);
              }
              pppppppuVar19[-2] = (ulong ******)0x0;
              pppppppuVar18 = pppppppuVar17;
            }
            pppppppuStack_108[8] = (ulong ******)pppppppuVar17;
          } while (pppppppuVar33 != pppppppuVar17);
LAB_0d600e90:
          pppppppuVar33 = (ulong *******)pppppppuStack_108[7];
          pppppppuVar19 = pppppppuVar17;
        }
        lVar14 = lStack_200;
        if ((long)pppppppuVar19 - (long)pppppppuVar33 !=
            (long)pppppppuVar23 - (long)pppppppuStack_c0) {
          puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
          if (puVar16 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x1a,0);
          }
          uVar15 = _UNK_01200ba3;
          *puVar16 = _DAT_01200b9b;
          puVar16[1] = uVar15;
          *(undefined8 *)((long)puVar16 + 0xf) = 0x687469775f646574;
          *(undefined1 *)((long)puVar16 + 0x17) = 0;
          pppppppuStack_248 = (ulong *******)0x0;
          uStack_240 = 0;
          uStack_23f = 0;
          uStack_238 = 0;
          uStack_237 = 0;
          auStack_1f8 = (undefined1  [8])&pppppppuStack_248;
          pppppppuStack_1f0 = (ulong *******)((ulong)pppppppuStack_1f0 & 0xffffffffffffff00);
          pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
          if (pppppppuVar23 == (ulong *******)0x0) {
            func_0x0eec74c0(0x18,0);
          }
          uStack_240 = SUB81(pppppppuVar23,0);
          uStack_23f = (uint7)((ulong)pppppppuVar23 >> 8);
          uStack_238 = SUB81(pppppppuVar23 + 3,0);
          uStack_237 = (uint7)((ulong)(pppppppuVar23 + 3) >> 8);
          pppppppuStack_228 = (ulong *******)&pppppppuStack_248;
          pppppppuStack_220 = (ulong *******)&pppppppuStack_118;
          pppppppuStack_218 = (ulong *******)&pppppppuStack_f8;
          uStack_210 = uStack_210 & 0xffffffffffffff00;
          pppppppuStack_248 = pppppppuVar23;
          pppppppuStack_118 = pppppppuVar23;
          pppppppuStack_f8 = pppppppuVar23;
          func_0x0412e5e0(pppppppuVar23,puVar16,0x17);
          uStack_240 = SUB81(pppppppuStack_f8 + 3,0);
          uStack_23f = (uint7)((ulong)(pppppppuStack_f8 + 3) >> 8);
          auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
          pppppppuStack_1d0 = (ulong *******)0x0;
          pppppppuStack_1c8 = (ulong *******)0x0;
          uStack_1c0 = (ulong *******)0x0;
          func_0x0488f040();
          ppppppuStack_1b8 = (ulong ******)0x20000001c;
          auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
          func_0x0d604f40(lStack_110,auStack_1d8);
          pppppppuVar33 = pppppppuStack_1d0;
          auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
          pppppppuVar23 = pppppppuStack_1c8;
          if (pppppppuStack_1d0 != (ulong *******)0x0) {
            for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
              if (((ulong)pppppppuVar23[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
              }
            }
            pppppppuStack_1c8 = pppppppuVar33;
            func_0x0412a280(pppppppuStack_1d0,(long)uStack_1c0 - (long)pppppppuStack_1d0);
          }
          pppppppuVar23 = pppppppuStack_248;
          if (pppppppuStack_248 != (ulong *******)0x0) {
            for (pppppppuVar33 = (ulong *******)CONCAT71(uStack_23f,uStack_240);
                pppppppuVar23 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
              if (((ulong)pppppppuVar33[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
              }
            }
            uStack_240 = SUB81(pppppppuVar23,0);
            uStack_23f = (uint7)((ulong)pppppppuVar23 >> 8);
            func_0x0412a280(pppppppuStack_248,
                            CONCAT71(uStack_237,uStack_238) - (long)pppppppuStack_248);
          }
          func_0x0412a280(puVar16,0x1a);
        }
        pppppppuVar33 = (ulong *******)pppppppuStack_108[1];
        pppppppuVar19 = pppppppuStack_108;
        if ((ulong *******)pppppppuStack_108[1] == (ulong *******)0x0) {
          do {
            pppppppuVar23 = (ulong *******)pppppppuVar19[2];
            bVar34 = pppppppuVar19 != (ulong *******)*pppppppuVar23;
            pppppppuVar19 = pppppppuVar23;
          } while (bVar34);
        }
        else {
          do {
            pppppppuVar23 = pppppppuVar33;
            pppppppuVar33 = (ulong *******)*pppppppuVar23;
          } while ((ulong *******)*pppppppuVar23 != (ulong *******)0x0);
        }
      } while ((ulong ********)pppppppuVar23 != &pppppppuStack_130);
    }
    if (*(char *)(pppppppuStack_250 + 0x40) == '\x01') {
      if (((ulong)pppppppuStack_250[0x3d] & 1) == 0) {
        pppppppuStack_1e8 = (ulong *******)pppppppuStack_250[0x3f];
        auStack_1f8 = (undefined1  [8])pppppppuStack_250[0x3d];
        pppppppuStack_1f0 = (ulong *******)pppppppuStack_250[0x3e];
      }
      else {
        func_0x0412e5e0(auStack_1f8,pppppppuStack_250[0x3f],pppppppuStack_250[0x3e]);
      }
    }
    else {
      auStack_1f8 = (undefined1  [8])0x0;
      pppppppuStack_1f0 = (ulong *******)0x0;
      pppppppuStack_1e8 = (ulong *******)0x0;
    }
    pppppppuVar23 = pppppppuStack_1f0;
    if (((ulong)auStack_1f8 & 1) == 0) {
      pppppppuVar23 = (ulong *******)((ulong)auStack_1f8 >> 1 & 0x7f);
    }
    if (pppppppuVar23 != (ulong *******)0x0) {
      if (pppppppuVar23 == (ulong *******)0x5) {
        pppppppuVar23 = pppppppuStack_1e8;
        if (((ulong)auStack_1f8 & 1) == 0) {
          pppppppuVar23 = (ulong *******)(auStack_1f8 + 1);
        }
        if (*(char *)((long)pppppppuVar23 + 4) == DAT_011b4e05 &&
            *(int *)pppppppuVar23 == _DAT_011b4e01) goto LAB_0d601659;
      }
      pppppppuStack_228 = (ulong *******)0x0;
      pppppppuStack_220 = (ulong *******)0x0;
      pppppppuStack_218 = (ulong *******)0x0;
      pppppppuStack_248 = (ulong *******)&pppppppuStack_228;
      uStack_240 = 0;
      pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (pppppppuVar23 == (ulong *******)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      pppppppuStack_220 = pppppppuVar23 + 3;
      *pppppppuVar23 = (ulong ******)0x7461646174656d2a;
      pppppppuVar23[1] = (ulong ******)0x6375646f72702f61;
      pppppppuVar23[2] = (ulong ******)0x657079745f74;
      auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
      pppppppuStack_1d0 = (ulong *******)0x0;
      pppppppuStack_1c8 = (ulong *******)0x0;
      uStack_1c0 = (ulong *******)0x0;
      pppppppuStack_228 = pppppppuVar23;
      pppppppuStack_218 = pppppppuStack_220;
      func_0x0488f040(&pppppppuStack_1d0,pppppppuVar23,pppppppuStack_220,1);
      ppppppuStack_1b8 = (ulong ******)0x20000000c;
      auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
      func_0x0d5eed10(lStack_110,auStack_1d8);
      pppppppuVar33 = pppppppuStack_1d0;
      auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
      pppppppuVar23 = pppppppuStack_1c8;
      if (pppppppuStack_1d0 != (ulong *******)0x0) {
        for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
          if (((ulong)pppppppuVar23[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_1c8 = pppppppuVar33;
        func_0x0412a280(pppppppuStack_1d0,(long)uStack_1c0 - (long)pppppppuStack_1d0);
      }
      pppppppuVar33 = pppppppuStack_228;
      pppppppuVar23 = pppppppuStack_220;
      if (pppppppuStack_228 != (ulong *******)0x0) {
        for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
          if (((ulong)pppppppuVar23[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_220 = pppppppuVar33;
        func_0x0412a280(pppppppuStack_228,(long)pppppppuStack_218 - (long)pppppppuStack_228);
      }
      if (((ulong)auStack_1f8 & 1) == 0) {
        auStack_1f8 = (undefined1  [8])0x0;
        pppppppuStack_1f0 = (ulong *******)0x0;
        pppppppuStack_1e8 = (ulong *******)0x0;
      }
      else {
        FUN_04885120(auStack_1f8,&UNK_01e79d91,0);
      }
    }
LAB_0d601659:
    pppppppuStack_f8 = (ulong *******)0x0;
    pppppppuStack_f0 = (ulong *******)0x0;
    lStack_e8 = 0;
    auStack_1d8 = (undefined1  [8])0x0;
    pppppppuStack_1d0 = (ulong *******)0x0;
    pppppppuStack_1c8 = (ulong *******)0x0;
    if (*(char *)(pppppppuStack_250 + 0x34) == '\x01') {
      func_0x0488f040(auStack_1d8,pppppppuStack_250[0x31],pppppppuStack_250[0x32],
                      ((long)pppppppuStack_250[0x32] - (long)pppppppuStack_250[0x31] >> 3) *
                      -0x5555555555555555);
    }
    if (*(char *)(pppppppuStack_250 + 0x38) == '\x01') {
      if (((ulong)pppppppuStack_250[0x35] & 1) == 0) {
        ppppppuStack_1b0 = pppppppuStack_250[0x37];
        uStack_1c0 = (ulong *******)pppppppuStack_250[0x35];
        ppppppuStack_1b8 = pppppppuStack_250[0x36];
      }
      else {
        func_0x0412e5e0(&uStack_1c0,pppppppuStack_250[0x37],pppppppuStack_250[0x36]);
      }
    }
    else {
      uStack_1c0 = (ulong *******)0x0;
      ppppppuStack_1b8 = (ulong ******)0x0;
      ppppppuStack_1b0 = (ulong ******)0x0;
    }
    if (*(char *)(pppppppuStack_250 + 0x3c) == '\x01') {
      if (((ulong)pppppppuStack_250[0x39] & 1) == 0) {
        ppppppuStack_198 = pppppppuStack_250[0x3b];
        ppppppuStack_1a8 = pppppppuStack_250[0x39];
        ppppppuStack_1a0 = pppppppuStack_250[0x3a];
      }
      else {
        func_0x0412e5e0(&ppppppuStack_1a8,pppppppuStack_250[0x3b],pppppppuStack_250[0x3a]);
      }
    }
    else {
      ppppppuStack_1a8 = (ulong ******)0x0;
      ppppppuStack_1a0 = (ulong ******)0x0;
      ppppppuStack_198 = (ulong ******)0x0;
    }
    pppppppuStack_180 = pppppppuStack_1e8;
    pppppppuStack_190 = (ulong *******)auStack_1f8;
    pppppppuStack_188 = pppppppuStack_1f0;
    auStack_1f8 = (undefined1  [8])0x0;
    pppppppuStack_1f0 = (ulong *******)0x0;
    pppppppuStack_1e8 = (ulong *******)0x0;
    pppppppuStack_70 = pppppppuStack_138;
    pppppppuStack_68 = pppppppuStack_130;
    pppppppuStack_60 = pppppppuStack_128;
    pppppppuVar23 = (ulong *******)&pppppppuStack_68;
    if (pppppppuStack_128 == (ulong *******)0x0) goto LAB_0d601fd4;
    pppppppuStack_130[2] = (ulong ******)&pppppppuStack_68;
    pppppppuStack_130 = (ulong *******)0x0;
    pppppppuStack_128 = (ulong *******)0x0;
    pppppppuStack_178 = &pppppppuStack_170;
    pppppppuStack_170 = (undefined8 *******)0x0;
    lStack_168 = 0;
    bVar34 = (ulong ********)pppppppuStack_138 == &pppppppuStack_68;
    pppppppuStack_250 = pppppppuStack_138;
    pppppppuStack_138 = (ulong *******)&pppppppuStack_130;
    pppppppuVar23 = pppppppuStack_70;
    if (bVar34) {
LAB_0d601fd4:
      pppppppuStack_70 = pppppppuVar23;
      pppppppuStack_178 = &pppppppuStack_170;
      lStack_168 = 0;
      pppppppuStack_170 = (undefined8 *******)0x0;
      func_0x0d6351c0(&pppppppuStack_70);
LAB_0d601fe1:
      func_0x0d5f7230(lVar14 + 0x260,auStack_1d8);
      func_0x0d5f4670(auStack_1d8);
      if (((ulong)auStack_1f8 & 1) != 0) {
        func_0x0412a280(pppppppuStack_1e8,(ulong)auStack_1f8 & 0xfffffffffffffffe);
      }
      func_0x0d6351c0(&pppppppuStack_138,pppppppuStack_130);
LAB_0d602034:
      if ((uStack_147 & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_147,uStack_148) & 0xff00ffffffffffff) - 8);
      }
      uStack_148 = 0;
      uStack_147 = 0;
      if ((uStack_14f & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_14f,uStack_150) & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_c8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
      }
      uStack_c8 = 0;
      if (((ulong)pppppppuStack_d0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_d0 & 0xff00ffffffffffff) - 8);
      }
      return;
    }
LAB_0d60185e:
    puVar16 = (undefined8 *)0x80000000000000;
    pppppppuVar33 = (ulong *******)pppppppuStack_250[7];
    pppppppuVar23 = (ulong *******)pppppppuStack_250[8];
    uStack_240 = SUB81(pppppppuStack_250[8],0);
    uStack_23f = (uint7)((ulong)pppppppuStack_250[8] >> 8);
    uStack_238 = SUB81(pppppppuStack_250[9],0);
    uStack_237 = (uint7)((ulong)pppppppuStack_250[9] >> 8);
    pppppppuStack_250[7] = (ulong ******)0x0;
    pppppppuStack_250[8] = (ulong ******)0x0;
    pppppppuStack_250[9] = (ulong ******)0x0;
    pppppppuStack_228 = (ulong *******)0x0;
    pppppppuStack_220 = (ulong *******)0x0;
    pppppppuStack_218 = (ulong *******)0x0;
    uVar30 = (long)pppppppuVar23 - (long)pppppppuVar33;
    pppppppuStack_248 = pppppppuVar33;
    if (uVar30 == 0) {
joined_r0x0d601928:
      pppppppuStack_220 = pppppppuStack_228;
      pppppppuStack_c0 = pppppppuVar23;
      if (pppppppuVar33 != pppppppuVar23) {
LAB_0d60197c:
        pppppppuVar17 = pppppppuStack_220;
        pppppppuVar19 = pppppppuStack_228;
        lVar14 = 0xaaaaaaaaaaaaaaa;
        if (pppppppuStack_220 < pppppppuStack_218) break;
        lVar13 = (long)pppppppuStack_220 - (long)pppppppuStack_228;
        plVar12 = (long *)((lVar13 >> 3) * -0x5555555555555555 + 1);
        if ((long *)0xaaaaaaaaaaaaaaa < plVar12) {
          func_0x0d633120();
LAB_0d602bd0:
          func_0x0eec74c0(0x20,0);
LAB_0d5fe8a0:
          uVar15 = _UNK_0140b3a9;
          *(ulong *)((long)plVar12 + 9) = CONCAT17(UNK_0140b3a8,_DAT_0140b3a1);
          *(undefined8 *)((long)plVar12 + 0x11) = uVar15;
          lVar13 = CONCAT71(_DAT_0140b3a1,UNK_0140b3a0);
          *plVar12 = (long)_DAT_0140b398;
          plVar12[1] = lVar13;
          *(undefined1 *)((long)plVar12 + 0x19) = 0;
          pppppppuStack_158 = (ulong *******)0x0;
          uStack_150 = 0;
          uStack_14f = 0;
          uStack_148 = 0;
          uStack_147 = 0;
          pppppppuStack_130 = (ulong *******)((ulong)pppppppuStack_130 & 0xffffffffffffff00);
          pppppppuStack_138 = (ulong *******)&pppppppuStack_158;
          pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
          if (pppppppuVar23 == (ulong *******)0x0) {
            func_0x0eec74c0(0x18,0);
          }
          uStack_150 = SUB81(pppppppuVar23,0);
          uStack_14f = (uint7)((ulong)pppppppuVar23 >> 8);
          uStack_148 = SUB81(pppppppuVar23 + 3,0);
          uStack_147 = (uint7)((ulong)(pppppppuVar23 + 3) >> 8);
          pppppppuStack_220 = (ulong *******)&pppppppuStack_f8;
          pppppppuStack_218 = (ulong *******)auStack_1f8;
          uStack_210 = uStack_210 & 0xffffffffffffff00;
          pppppppuStack_228 = (ulong *******)&pppppppuStack_158;
          auStack_1f8 = (undefined1  [8])pppppppuVar23;
          pppppppuStack_158 = pppppppuVar23;
          pppppppuStack_f8 = pppppppuVar23;
          func_0x0412e5e0(pppppppuVar23,plVar12,0x19);
          pppppppuVar23 = (ulong *******)((long)auStack_1f8 + 0x18);
          uStack_150 = SUB81(pppppppuVar23,0);
          uStack_14f = (uint7)((ulong)pppppppuVar23 >> 8);
          auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
          pppppppuStack_1d0 = (ulong *******)0x0;
          pppppppuStack_1c8 = (ulong *******)0x0;
          uStack_1c0 = (ulong *******)0x0;
          func_0x0488f040(&pppppppuStack_1d0,pppppppuStack_158,pppppppuVar23,
                          ((long)pppppppuVar23 - (long)pppppppuStack_158 >> 3) * -0x5555555555555555
                         );
          ppppppuStack_1b8 = (ulong ******)0x20000000f;
          auStack_1d8 = (undefined1  [8])&UNK_0f47b778;
          func_0x0d5eed10(lStack_110,auStack_1d8);
          pppppppuVar33 = pppppppuStack_1d0;
          auStack_1d8 = (undefined1  [8])&UNK_0f47cca0;
          pppppppuVar23 = pppppppuStack_1c8;
          if (pppppppuStack_1d0 != (ulong *******)0x0) {
            for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
              if (((ulong)pppppppuVar23[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
              }
            }
            pppppppuStack_1c8 = pppppppuVar33;
            func_0x0412a280(pppppppuStack_1d0,(long)uStack_1c0 - (long)pppppppuStack_1d0);
          }
          pppppppuVar23 = pppppppuStack_158;
          if (pppppppuStack_158 != (ulong *******)0x0) {
            for (pppppppuVar33 = (ulong *******)CONCAT71(uStack_14f,uStack_150);
                pppppppuVar23 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
              if (((ulong)pppppppuVar33[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
              }
            }
            uStack_150 = SUB81(pppppppuVar23,0);
            uStack_14f = (uint7)((ulong)pppppppuVar23 >> 8);
            func_0x0412a280(pppppppuStack_158,
                            CONCAT71(uStack_147,uStack_148) - (long)pppppppuStack_158);
          }
          func_0x0412a280(plVar12,0x20);
          goto LAB_0d6029e3;
        }
        pppppppuStack_108 = pppppppuStack_218;
        lVar31 = (long)pppppppuStack_218 - (long)pppppppuStack_228 >> 3;
        plVar2 = (long *)(lVar31 * 0x5555555555555556);
        if (plVar12 < plVar2) {
          plVar12 = plVar2;
        }
        if (0x555555555555554 < (ulong)(lVar31 * -0x5555555555555555)) {
          plVar12 = (long *)0xaaaaaaaaaaaaaaa;
        }
        if (plVar12 == (long *)0x0) {
          pppppppuVar23 = (ulong *******)0x0;
        }
        else {
          if ((long *)0xaaaaaaaaaaaaaaa < plVar12) goto LAB_0d602bf2;
          lStack_110 = (long)plVar12 * 0x18;
          pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (pppppppuVar23 == (ulong *******)0x0) {
            func_0x0eec74c0(lStack_110,0);
            pppppppuVar23 = (ulong *******)0x0;
          }
        }
        *(ulong *******)((long)pppppppuVar23 + lVar13) = *pppppppuVar33;
        *(undefined8 *)((long)pppppppuVar23 + lVar13 + 8) = 0;
        *(ulong *******)((long)pppppppuVar23 + lVar13 + 8) = pppppppuVar33[1];
        pppppppuVar33[1] = (ulong ******)0x0;
        *(undefined8 *)((long)pppppppuVar23 + lVar13 + 0x10) = 0;
        *(ulong *******)((long)pppppppuVar23 + lVar13 + 0x10) = pppppppuVar33[2];
        pppppppuVar33[2] = (ulong ******)0x0;
        pppppppuVar18 = pppppppuVar19;
        if (pppppppuVar19 != pppppppuVar17) {
          lVar14 = 0;
          do {
            *(undefined8 *)((long)pppppppuVar23 + lVar14) =
                 *(undefined8 *)((long)pppppppuVar19 + lVar14);
            *(undefined8 *)((long)pppppppuVar23 + lVar14 + 8) = 0;
            *(undefined8 *)((long)pppppppuVar23 + lVar14 + 8) =
                 *(undefined8 *)((long)pppppppuVar19 + lVar14 + 8);
            *(undefined8 *)((long)pppppppuVar19 + lVar14 + 8) = 0;
            *(undefined8 *)((long)pppppppuVar23 + lVar14 + 0x10) = 0;
            *(undefined8 *)((long)pppppppuVar23 + lVar14 + 0x10) =
                 *(undefined8 *)((long)pppppppuVar19 + lVar14 + 0x10);
            *(undefined8 *)((long)pppppppuVar19 + lVar14 + 0x10) = 0;
            lVar31 = lVar14 + 0x18;
            lVar14 = lVar14 + 0x18;
          } while ((ulong *******)((long)pppppppuVar19 + lVar31) != pppppppuVar17);
          do {
            if (((ulong)pppppppuVar19[2] & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)pppppppuVar19[2] & 0xff00ffffffffffff) - 8);
            }
            pppppppuVar19[2] = (ulong ******)0x0;
            if (((ulong)pppppppuVar19[1] & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0);
            }
            pppppppuVar19[1] = (ulong ******)0x0;
            pppppppuVar19 = pppppppuVar19 + 3;
            pppppppuVar18 = pppppppuStack_228;
          } while (pppppppuVar19 != pppppppuVar17);
        }
        pppppppuStack_218 = pppppppuVar23 + (long)plVar12 * 3;
        pppppppuVar19 = (ulong *******)(lVar13 + 0x18 + (long)pppppppuVar23);
        pppppppuStack_228 = pppppppuVar23;
        if (pppppppuVar18 != (ulong *******)0x0) {
          func_0x0412a280(pppppppuVar18);
        }
        pppppppuVar33 = pppppppuVar33 + 3;
        pppppppuVar23 = pppppppuStack_c0;
        pppppppuStack_220 = pppppppuVar19;
        if (pppppppuVar33 == pppppppuStack_c0) goto LAB_0d601bcf;
        goto LAB_0d60197c;
      }
LAB_0d601bcf:
      pppppppuVar23 = pppppppuStack_220;
      pppppppuVar32 = &pppppppuStack_170;
      pppppppuVar28 = pppppppuVar32;
      if (pppppppuStack_170 != (undefined8 *******)0x0) {
        bVar34 = (*(byte *)(pppppppuStack_250 + 4) & 1) != 0;
        pppppppuStack_108 = (ulong *******)((long)pppppppuStack_250 + 0x21);
        if (bVar34) {
          pppppppuStack_108 = (ulong *******)pppppppuStack_250[6];
        }
        pppppppuVar3 = pppppppuStack_170;
        ppppppuVar27 = (ulong ******)(ulong)(*(byte *)(pppppppuStack_250 + 4) >> 1);
        if (bVar34) {
          ppppppuVar27 = pppppppuStack_250[5];
        }
        do {
          while( true ) {
            pppppppuVar32 = pppppppuVar3;
            bVar34 = (*(byte *)(pppppppuVar32 + 4) & 1) != 0;
            ppppppuVar20 = (undefined8 ******)((long)pppppppuVar32 + 0x21);
            if (bVar34) {
              ppppppuVar20 = pppppppuVar32[6];
            }
            ppppppuVar22 = (ulong ******)(ulong)(*(byte *)(pppppppuVar32 + 4) >> 1);
            if (bVar34) {
              ppppppuVar22 = pppppppuVar32[5];
            }
            ppppppuVar29 = ppppppuVar27;
            if (ppppppuVar22 < ppppppuVar27) {
              ppppppuVar29 = ppppppuVar22;
            }
            iVar11 = memcmp(pppppppuStack_108,ppppppuVar20,ppppppuVar29);
            if (iVar11 == 0) break;
            if (iVar11 < 0) goto LAB_0d601c20;
LAB_0d601c75:
            iVar11 = memcmp(ppppppuVar20,pppppppuStack_108,ppppppuVar29);
            if (iVar11 == 0) {
              if (ppppppuVar27 <= ppppppuVar22) goto LAB_0d601d72;
            }
            else if (-1 < iVar11) goto LAB_0d601d72;
            pppppppuVar3 = (undefined8 *******)pppppppuVar32[1];
            if ((undefined8 *******)pppppppuVar32[1] == (undefined8 *******)0x0) {
              pppppppuVar28 = pppppppuVar32 + 1;
              goto LAB_0d601ca9;
            }
          }
          if (ppppppuVar22 <= ppppppuVar27) goto LAB_0d601c75;
LAB_0d601c20:
          pppppppuVar3 = (undefined8 *******)*pppppppuVar32;
          pppppppuVar28 = pppppppuVar32;
        } while ((undefined8 *******)*pppppppuVar32 != (undefined8 *******)0x0);
      }
LAB_0d601ca9:
      ppppppuVar20 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
      if (ppppppuVar20 == (undefined8 ******)0x0) {
        func_0x0eec74c0(0x50,0);
      }
      if (((ulong)pppppppuStack_250[4] & 1) == 0) {
        ppppppuVar20[6] = pppppppuStack_250[6];
        ppppppuVar27 = pppppppuStack_250[5];
        ppppppuVar20[4] = pppppppuStack_250[4];
        ppppppuVar20[5] = ppppppuVar27;
      }
      else {
        func_0x0412e5e0(ppppppuVar20 + 4,pppppppuStack_250[6],pppppppuStack_250[5]);
      }
      ppppppuVar20[7] = pppppppuStack_228;
      ppppppuVar20[8] = pppppppuVar23;
      ppppppuVar20[9] = pppppppuStack_218;
      pppppppuStack_228 = (ulong *******)0x0;
      pppppppuStack_220 = (ulong *******)0x0;
      pppppppuStack_218 = (ulong *******)0x0;
      *ppppppuVar20 = (undefined8 *****)0x0;
      ppppppuVar20[1] = (undefined8 *****)0x0;
      ppppppuVar20[2] = pppppppuVar32;
      *pppppppuVar28 = ppppppuVar20;
      if ((undefined8 *******)*pppppppuStack_178 != (undefined8 *******)0x0) {
        pppppppuStack_178 = (undefined8 *******)*pppppppuStack_178;
      }
      func_0x048bed00(pppppppuStack_170);
      lStack_168 = lStack_168 + 1;
LAB_0d601d72:
      lVar14 = lStack_200;
      pppppppuVar33 = pppppppuStack_228;
      pppppppuVar23 = pppppppuStack_220;
      if (pppppppuStack_228 != (ulong *******)0x0) {
        for (; pppppppuVar33 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
          if (((ulong)pppppppuVar23[-1] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppppuVar23[-1] & 0xff00ffffffffffff) - 8);
          }
          pppppppuVar23[-1] = (ulong ******)0x0;
          if (((ulong)pppppppuVar23[-2] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppppuVar23[-2] & 0xff00ffffffffffff) - 8);
          }
          pppppppuVar23[-2] = (ulong ******)0x0;
        }
        pppppppuStack_220 = pppppppuVar33;
        func_0x0412a280(pppppppuVar33);
      }
      pppppppuVar23 = pppppppuStack_248;
      if (pppppppuStack_248 != (ulong *******)0x0) {
        for (pppppppuVar33 = (ulong *******)CONCAT71(uStack_23f,uStack_240);
            pppppppuVar23 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
          if (((ulong)pppppppuVar33[-1] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppppuVar33[-1] & 0xff00ffffffffffff) - 8);
          }
          pppppppuVar33[-1] = (ulong ******)0x0;
          if (((ulong)pppppppuVar33[-2] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppppuVar33[-2] & 0xff00ffffffffffff) - 8);
          }
          pppppppuVar33[-2] = (ulong ******)0x0;
        }
        uStack_240 = SUB81(pppppppuVar23,0);
        uStack_23f = (uint7)((ulong)pppppppuVar23 >> 8);
        func_0x0412a280(pppppppuVar23);
      }
      pppppppuVar23 = pppppppuStack_f8;
      pppppppuVar33 = (ulong *******)pppppppuStack_250[1];
      if ((ulong *******)pppppppuStack_250[1] == (ulong *******)0x0) {
        do {
          pppppppuVar19 = (ulong *******)pppppppuStack_250[2];
          bVar34 = pppppppuStack_250 != (ulong *******)*pppppppuVar19;
          pppppppuStack_250 = pppppppuVar19;
        } while (bVar34);
      }
      else {
        do {
          pppppppuVar19 = pppppppuVar33;
          pppppppuVar33 = (ulong *******)*pppppppuVar19;
        } while ((ulong *******)*pppppppuVar19 != (ulong *******)0x0);
      }
      pppppppuStack_250 = pppppppuVar19;
      if ((ulong ********)pppppppuVar19 == &pppppppuStack_68) {
        func_0x0d6351c0(&pppppppuStack_70,pppppppuStack_68);
        pppppppuVar33 = pppppppuStack_f0;
        if (pppppppuVar23 != (ulong *******)0x0) {
          for (; pppppppuVar23 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
            if (((ulong)pppppppuVar33[-3] & 1) != 0) {
              func_0x0412a280(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
            }
          }
          pppppppuStack_f0 = pppppppuVar23;
          func_0x0412a280(pppppppuVar23,lStack_e8 - (long)pppppppuVar23);
        }
        goto LAB_0d601fe1;
      }
      goto LAB_0d60185e;
    }
    lVar14 = 0xaaaaaaaaaaaaaaa;
    if ((ulong)(((long)uVar30 >> 3) * -0x5555555555555555) < 0xaaaaaaaaaaaaaab) {
      pppppppuVar19 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30);
      if (pppppppuVar19 == (ulong *******)0x0) {
        func_0x0eec74c0(uVar30,0);
      }
      pppppppuStack_218 = (ulong *******)(uVar30 + (long)pppppppuVar19);
      pppppppuStack_228 = pppppppuVar19;
      goto joined_r0x0d601928;
    }
    func_0x0d633120();
LAB_0d602c64:
    func_0x0eec74c0(pppppppuVar23,8);
LAB_0d6023e2:
    *puVar16 = pppppppuVar33;
    func_0x0eee2f00(puVar16 + 1,uVar30,pppppppuVar33);
    *(undefined1 *)((long)(puVar16 + 1) + (long)pppppppuVar33) = 0;
    pppppppuVar23 = (ulong *******)((ulong)(puVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000);
LAB_0d60241d:
    pppppppuStack_d0 = pppppppuVar23;
    if ((uStack_c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
    }
    uStack_c8 = 0;
    uVar30 = CONCAT71(uStack_237,uStack_238);
    if ((uStack_237 & 0x800000000000) != 0) {
      uVar30 = CONCAT71(uStack_237,uStack_238) & 0xff00ffffffffffff;
      lVar31 = *(long *)(uVar30 - 8);
      lVar13 = lVar31 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar12 = lVar31;
      func_0x0eee2f00(plVar12 + 1,uVar30,lVar31);
      *(undefined1 *)((long)plVar12 + lVar31 + 8) = 0;
      uVar30 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
joined_r0x0d602913:
    uStack_c8 = uVar30;
    if (((ulong)pppppppuStack_128 & 0x80000000000000) != 0) {
LAB_0d602986:
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_128 & 0xff00ffffffffffff) - 8);
    }
LAB_0d6029a8:
    pppppppuStack_128 = (ulong *******)0x0;
    if (((ulong)pppppppuStack_130 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_130 & 0xff00ffffffffffff) - 8);
    }
LAB_0d6029e3:
    if ((uStack_237 & 0x800000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT71(uStack_237,uStack_238) & 0xff00ffffffffffff) - 8);
    }
    uStack_238 = 0;
    uStack_237 = 0;
    if ((uStack_23f & 0x800000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT71(uStack_23f,uStack_240) & 0xff00ffffffffffff) - 8);
    }
  } while( true );
  *pppppppuStack_220 = *pppppppuVar33;
  pppppppuStack_220[1] = (ulong ******)0x0;
  pppppppuStack_220[1] = pppppppuVar33[1];
  pppppppuVar33[1] = (ulong ******)0x0;
  pppppppuStack_220[2] = (ulong ******)0x0;
  pppppppuStack_220[2] = pppppppuVar33[2];
  pppppppuVar33[2] = (ulong ******)0x0;
  pppppppuStack_220 = pppppppuStack_220 + 3;
  pppppppuVar33 = pppppppuVar33 + 3;
  if (pppppppuVar33 == pppppppuVar23) goto LAB_0d601bcf;
  goto LAB_0d60197c;
LAB_0d602bf2:
  func_0x04882eb0();
LAB_0d602bf7:
  func_0x0eec74c0(pppppppuVar19,8);
LAB_0d5ff64d:
  *pppppppuVar17 = (ulong ******)pppppppuVar33;
  func_0x0eee2f00(pppppppuVar17 + 1,plVar12,pppppppuVar33);
  *(undefined1 *)((long)(pppppppuVar17 + 1) + (long)pppppppuVar33) = 0;
  uVar30 = (ulong)(pppppppuVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000;
LAB_0d5ff688:
  uStack_150 = (undefined1)uVar30;
  uStack_14f = (uint7)(uVar30 >> 8);
  uVar30 = CONCAT71(uStack_237,uStack_238);
  uStack_148 = 0;
  uStack_147 = 0;
  if ((uStack_237 & 0x800000000000) != 0) {
    lVar31 = *(long *)((uVar30 & 0xff00ffffffffffff) - 8);
    lVar13 = lVar31 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
    if (lVar13 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar13,8);
    }
    *plVar12 = lVar31;
    func_0x0eee2f00(plVar12 + 1,uVar30 & 0xff00ffffffffffff,lVar31);
    *(undefined1 *)((long)plVar12 + lVar31 + 8) = 0;
    uVar30 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_148 = (undefined1)uVar30;
  uStack_147 = (uint7)(uVar30 >> 8);
  uStack_140 = uStack_230;
  uVar30 = CONCAT71(uStack_237,uStack_238);
  if ((uStack_237 & 0x800000000000) != 0) goto LAB_0d5ff7f4;
  goto LAB_0d5ff816;
}



/* ---- referenced strings ----
 * 0x11b079e  header/base_game_version
 * 0x11b4e01  addon
 * 0x1200b9b  metadata/generated_with
 * 0x13d809a  header/lock_template_options
 * 0x13d80a6  template_options
 * 0x140b398  header/min_engine_version
 * 0x140b3a1  n_engine_version
 */
