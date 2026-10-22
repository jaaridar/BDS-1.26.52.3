/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9dc00e0 (ELF vaddr 0x9cc00e0)
 * Label: caller-of-callee
 * Body:  [[09dc00e0, 09dc0304] [09dc0310, 09dc072c] [09dc0730, 09dc0aed] [09dc0af0, 09dc0cbc] [09dc0cc0, 09dc0f95] [09dc0fa0, 09dc0fc6] [09dc0fd0, 09dc1022] [09dc1030, 09dc10bb] [09dc10c0, 09dc14c8] [09dc14d0, 09dc1942] [09dc1950, 09dc1af0] [09dc1b00, 09dc1cc1] [09dc1cd0, 09dc1d4c] [09dc1d50, 09dc20e8] [09dc20f0, 09dc227e] [09dc2280, 09dc2420] [09dc2430, 09dc24f5] [09dc2500, 09dc2580] [09dc2590, 09dc2620] [09dc2630, 09dc2675] [09dc2680, 09dc2704] [09dc2710, 09dc2b6b] [09dc2b70, 09dc3035] [09dc3040, 09dc360c] [09dc3610, 09dc3712] [09dc3720, 09dc376b] [09dc3770, 09dc37f3] [09dc3800, 09dc3ede] [09dc3ee0, 09dc402b] [09dc4030, 09dc4079] [09dc4080, 09dc4123] [09dc4130, 09dc41c0] [09dc41d0, 09dc448e] [09dc4490, 09dc462b] [09dc4630, 09dc475b] [09dc4760, 09dc47eb] [09dc47f0, 09dc4936] [09dc4940, 09dc4988] [09dc4990, 09dc4a61] [09dc4a70, 09dc4ae2] [09dc4af0, 09dc4c11] [09dc4c20, 09dc4cf8] [09dc4d00, 09dc4d42] [09dc4d50, 09dc4da4] [09dc4db0, 09dc4db7] [09dc4dc0, 09dc4dee] [09dc4df0, 09dc4e02] [09dc4e10, 09dc4e44] [09dc4e50, 09dc4e72] [09dc4e80, 09dc4f87] [09dc4f90, 09dc5084] [09dc5090, 09dc5105] [09dc5110, 09dc5162] [09dc5170, 09dc58a2] [09dc58b0, 09dc5933] [09dc5940, 09dc5b98] [09dc5ba0, 09dc5bc2] [09dc5bd0, 09dc5c55] [09dc5c60, 09dc5e61] [09dc5e70, 09dc5eeb] [09dc5ef0, 09dc6193] [09dc61a0, 09dc61c6] [09dc61d0, 09dc61f2] [09dc6200, 09dc62a5] [09dc62b0, 09dc62d2] [09dc62e0, 09dc66d4] [09dc66fe, 09dc6769] [09dc676d, 09dc677e] [09dc6fd6, 09dc7041] [09dc728a, 09dc72ac]]
 * Ghidra: FUN_09dc00e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09dc00e0(long param_1,long *param_2,long *param_3,ulong *******param_4,undefined8 param_5,
                 ulong ******param_6)

{
  ulong ******ppppppuVar1;
  byte *pbVar2;
  ushort *puVar3;
  ulong ****ppppuVar4;
  long ******pppppplVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong *****pppppuVar10;
  undefined5 uVar11;
  ulong *puVar12;
  long *plVar13;
  undefined1 auVar14 [4];
  undefined2 uVar15;
  undefined2 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined3 uVar20;
  char cVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  byte bVar24;
  int iVar25;
  undefined4 *puVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  ulong *******pppppppuVar30;
  ulong uVar31;
  ulong *******pppppppuVar32;
  ulong *puVar33;
  ulong *******pppppppuVar34;
  ulong *******pppppppuVar35;
  undefined1 *puVar36;
  ulong ******ppppppuVar37;
  uint *puVar38;
  long *******ppppppplVar39;
  long *******ppppppplVar40;
  ulong ******ppppppuVar41;
  undefined8 uVar42;
  ulong *******pppppppuVar43;
  undefined8 uVar44;
  ulong ******ppppppuVar45;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  long *******ppppppplVar46;
  long *******ppppppplVar47;
  ulong ******ppppppuVar48;
  ulong ******ppppppuVar49;
  ulong *******extraout_RDX_01;
  long lVar50;
  long lVar51;
  undefined8 *puVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  undefined8 *puVar56;
  ulong ******ppppppuVar57;
  ushort uVar58;
  long lVar59;
  ulong *******pppppppuVar60;
  ulong uVar61;
  ulong *******pppppppuVar62;
  long ******pppppplVar63;
  byte *pbVar64;
  ulong *****pppppuVar65;
  long lVar66;
  byte *pbVar67;
  bool bVar68;
  ulong *******pppppppuStack_280;
  undefined1 auStack_278 [4];
  uint uStack_274;
  undefined1 uStack_270;
  undefined2 uStack_26f;
  undefined1 uStack_26d;
  uint uStack_26c;
  ulong *******pppppppuStack_268;
  ulong *******pppppppuStack_260;
  undefined1 auStack_258 [4];
  undefined1 uStack_254;
  byte bStack_253;
  undefined1 uStack_252;
  undefined1 uStack_251;
  undefined1 uStack_250;
  undefined2 uStack_24f;
  undefined1 uStack_24d;
  undefined4 uStack_24c;
  ulong *******pppppppuStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [4];
  undefined1 uStack_234;
  undefined2 uStack_233;
  undefined1 uStack_231;
  undefined1 auStack_230 [4];
  uint uStack_22c;
  undefined1 uStack_228;
  undefined1 uStack_227;
  undefined6 uStack_226;
  ulong *******pppppppuStack_218;
  ulong *******pppppppuStack_210;
  undefined4 uStack_208;
  undefined1 uStack_204;
  undefined2 uStack_203;
  undefined1 uStack_201;
  undefined1 uStack_200;
  undefined4 uStack_1ff;
  undefined2 uStack_1fb;
  undefined1 uStack_1f9;
  undefined1 uStack_1f8;
  undefined6 uStack_1f7;
  undefined1 uStack_1f1;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined1 uStack_1e3;
  undefined1 uStack_1e2;
  undefined1 uStack_1e1;
  byte bStack_1e0;
  undefined1 uStack_1df;
  undefined2 uStack_1de;
  undefined1 uStack_1dc;
  undefined1 uStack_1db;
  undefined2 uStack_1da;
  uint uStack_1d8;
  undefined2 uStack_1d4;
  undefined1 uStack_1d2;
  undefined1 uStack_1d1;
  ulong *******pppppppuStack_1d0;
  ulong ******ppppppuStack_1c8;
  byte bStack_1c0;
  undefined1 auStack_1bf [15];
  long *plStack_1b0;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_190;
  byte bStack_180;
  undefined7 uStack_17f;
  undefined8 uStack_170;
  ulong ******ppppppuStack_168;
  ulong *******pppppppuStack_160;
  undefined1 auStack_158 [5];
  undefined4 uStack_153;
  undefined4 uStack_14f;
  undefined4 uStack_14b;
  undefined2 uStack_147;
  undefined1 uStack_145;
  undefined4 uStack_144;
  byte bStack_138;
  undefined4 uStack_137;
  undefined4 uStack_133;
  undefined4 uStack_12f;
  undefined4 uStack_12b;
  undefined2 uStack_127;
  undefined1 uStack_125;
  undefined4 uStack_124;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  ulong *******pppppppuStack_108;
  ulong *******pppppppuStack_f8;
  long *plStack_f0;
  long lStack_e8;
  ulong *******pppppppuStack_e0;
  ulong *******pppppppuStack_d8;
  long *plStack_d0;
  int iStack_bc;
  ulong *******pppppppuStack_b8;
  long *plStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long *plStack_58;
  ulong *******pppppppuStack_50;
  ulong *******pppppppuStack_48;
  ulong *******pppppppuStack_40;
  undefined8 uStack_38;
  
  pppppppuVar32 = *(ulong ********)(param_1 + 0x10);
  auStack_258 = (undefined1  [4])0x0;
  uStack_254 = 0;
  bStack_253 = 0;
  uStack_252 = 0;
  uStack_251 = 0;
  uStack_250 = 0;
  uStack_24f = 0;
  uStack_24d = 0;
  uStack_24c = 0;
  pppppppuStack_248 = (ulong *******)0x0;
  auStack_238 = (undefined1  [4])0x0;
  uStack_234 = 0;
  uStack_233 = 0;
  uStack_231 = 0;
  auStack_230 = (undefined1  [4])0x0;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_227 = 0;
  uStack_226 = 0;
  uStack_1e8 = (uint)auStack_258;
  uStack_1e4 = (undefined1)((ulong)auStack_258 >> 0x20);
  uStack_1e3 = (undefined1)((ulong)auStack_258 >> 0x28);
  uStack_1e2 = (undefined1)((ulong)auStack_258 >> 0x30);
  uStack_1e1 = (undefined1)((ulong)auStack_258 >> 0x38);
  bStack_1e0 = (byte)param_6;
  uStack_1df = (undefined1)((ulong)param_6 >> 8);
  uStack_1de = (undefined2)((ulong)param_6 >> 0x10);
  uStack_1dc = (undefined1)((ulong)param_6 >> 0x20);
  uStack_1db = (undefined1)((ulong)param_6 >> 0x28);
  uStack_1da = (undefined2)((ulong)param_6 >> 0x30);
  uStack_1d8 = (uint)auStack_238;
  uStack_1d4 = (undefined2)((ulong)auStack_238 >> 0x20);
  uStack_1d2 = (undefined1)((ulong)auStack_238 >> 0x30);
  uStack_1d1 = (undefined1)((ulong)auStack_238 >> 0x38);
  lStack_e8 = param_1;
  pppppppuStack_b8 = param_4;
  plStack_b0 = param_3;
  uStack_38 = param_5;
  func_0x0cc3eef0(0xf6ff9e0,&UNK_09deb6b0,&uStack_1e8);
  uStack_1e8._1_3_ = (undefined3)_DAT_01380997;
  uStack_1e8 = CONCAT31(uStack_1e8._1_3_,0x2a);
  uStack_1e4 = (undefined1)((uint)_DAT_01380997 >> 0x18);
  uStack_1e3 = (undefined1)_UNK_0138099b;
  uStack_1e2 = (undefined1)((uint)_UNK_0138099b >> 8);
  uStack_1e1 = (undefined1)((uint)_UNK_0138099b >> 0x10);
  bStack_1e0 = (byte)((uint)_UNK_0138099b >> 0x18);
  uStack_1df = (undefined1)_UNK_0138099f;
  uStack_1de = (undefined2)((uint)_UNK_0138099f >> 8);
  uStack_1dc = (undefined1)((uint)_UNK_0138099f >> 0x18);
  uStack_1db = (undefined1)_UNK_013809a3;
  uStack_1da = 0x6e69;
  uStack_1d8 = 0x6f6c6267;
  uStack_1d4 = 0x6b63;
  uStack_1d2 = 0;
  func_0x09dc82a0(auStack_258,auStack_238,&uStack_1e8);
  plStack_58 = param_2;
  if ((uStack_1e8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                    CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)))) &
                    0xfffffffffffffffe);
  }
  puVar26 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar26 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar42 = _UNK_01295991;
  uStack_1d8 = (uint)puVar26;
  uStack_1d4 = (undefined2)((ulong)puVar26 >> 0x20);
  uStack_1d2 = (undefined1)((ulong)puVar26 >> 0x30);
  uStack_1d1 = (undefined1)((ulong)puVar26 >> 0x38);
  uStack_1e8 = 0x21;
  uStack_1e4 = 0;
  uStack_1e3 = 0;
  uStack_1e2 = 0;
  uStack_1e1 = 0;
  bStack_1e0 = 0x1a;
  uStack_1df = 0;
  uStack_1de = 0;
  uStack_1dc = 0;
  uStack_1db = 0;
  uStack_1da = 0;
  *(ulong *)((long)puVar26 + 10) = CONCAT26(_UNK_0129598f,CONCAT42(_UNK_0129598b,_DAT_01295989));
  *(undefined8 *)((long)puVar26 + 0x12) = uVar42;
  uVar9 = _UNK_0129598b;
  uVar8 = _UNK_01295983;
  uVar7 = CONCAT22(_DAT_01295989,_UNK_01295987);
  *puVar26 = _DAT_0129597f;
  puVar26[1] = uVar8;
  puVar26[2] = uVar7;
  puVar26[3] = uVar9;
  *(undefined1 *)((long)puVar26 + 0x1a) = 0;
  func_0x09dc82a0(auStack_258,auStack_238,&uStack_1e8);
  if ((uStack_1e8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                    CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)))) &
                    0xfffffffffffffffe);
  }
  uStack_1e8 = _DAT_0f6ffb28;
  uStack_1e4 = (undefined1)uRam000000000f6ffb2c;
  uStack_1e3 = (undefined1)((uint)uRam000000000f6ffb2c >> 8);
  uStack_1e2 = (undefined1)((uint)uRam000000000f6ffb2c >> 0x10);
  uStack_1e1 = (undefined1)((uint)uRam000000000f6ffb2c >> 0x18);
  bStack_1e0 = (byte)_DAT_0f6ffb30;
  uStack_1df = (undefined1)((uint)_DAT_0f6ffb30 >> 8);
  uStack_1de = (undefined2)((uint)_DAT_0f6ffb30 >> 0x10);
  uStack_1dc = (undefined1)uRam000000000f6ffb34;
  uStack_1db = (undefined1)((uint)uRam000000000f6ffb34 >> 8);
  uStack_1da = (undefined2)((uint)uRam000000000f6ffb34 >> 0x10);
  if (CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) != 0) {
    LOCK();
    plVar28 = (long *)(CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) + 8);
    *plVar28 = *plVar28 + 1;
    UNLOCK();
  }
  func_0x0cc46520(&uStack_208,&uStack_1e8);
  plVar13 = (long *)CONCAT26(uStack_1da,
                             CONCAT15(uStack_1db,
                                      CONCAT14(uStack_1dc,
                                               CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))
                                     ));
  plVar28 = _DAT_0f6ffa08;
  auVar14 = auStack_230;
  uVar53 = uStack_22c;
  ppppppuStack_168 = param_6;
  pppppppuStack_160 = pppppppuVar32;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar28 = plVar13 + 1;
    lVar51 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    plVar28 = _DAT_0f6ffa08;
    if (lVar51 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
      plVar28 = _DAT_0f6ffa08;
      auVar14 = auStack_230;
      uVar53 = uStack_22c;
    }
  }
  _DAT_0f6ffa08 = plVar28;
  if (plVar28 != (long *)0x0) {
    _auStack_230 = (ulong *******)CONCAT44(uVar53,auVar14);
    do {
      plVar13 = plVar28 + 7;
      plVar27 = (long *)func_0x0cc422f0(0xf6ff9e0,plVar13,0,0,0);
      if (((char)plVar27[0x2d] == '\0') && (*(byte *)(ppppppuStack_168 + 3) == 0)) {
        if (((*(byte *)((long)plVar27 + 0x156) & 1) != 0) &&
           (*(byte *)((long)ppppppuStack_168 + 7) == 0)) {
          cVar21 = func_0x04fa7a10(ppppppuStack_168,plVar27 + 0x2a);
          if (cVar21 != '\0') goto LAB_09dc0310;
        }
        cVar21 = (**(code **)(*plVar27 + 0x178))(plVar27,ppppppuStack_168);
        if (cVar21 != '\0') {
          puVar38 = (uint *)(plVar28 + 3);
          func_0x0c6c77f0(&uStack_1e8,puVar38);
          pppppppuVar32 = _auStack_230;
          if ((bStack_1c0 & 1) == 0) {
            if (bStack_1c0 >> 1 == 9) goto LAB_09dc03f0;
          }
          else if (auStack_1bf._7_8_ == 9) {
LAB_09dc03f0:
            plVar27 = (long *)auStack_1bf;
            if ((bStack_1c0 & 1) != 0) {
              plVar27 = plStack_1b0;
            }
            if ((char)plVar27[1] == 't' && *plVar27 == 0x66617263656e696d) {
              if (_auStack_230 < (ulong *******)CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228))
                 ) {
                if ((bStack_1e0 & 1) == 0) {
                  _auStack_230[2] = (ulong ******)pppppppuStack_1d0;
                  *(uint *)_auStack_230 = CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0));
                  *(uint *)((long)_auStack_230 + 4) =
                       CONCAT22(uStack_1da,CONCAT11(uStack_1db,uStack_1dc));
                  *(uint *)(_auStack_230 + 1) = uStack_1d8;
                  *(uint *)((long)_auStack_230 + 0xc) =
                       CONCAT13(uStack_1d1,CONCAT12(uStack_1d2,uStack_1d4));
                }
                else {
                  func_0x0412e5e0(_auStack_230,pppppppuStack_1d0,
                                  CONCAT17(uStack_1d1,
                                           CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))));
                }
                pppppppuVar32 = pppppppuVar32 + 3;
                pppppppuVar35 = (ulong *******)*plVar13;
                if ((bStack_1e0 & 1) == 0) goto LAB_09dc04c5;
LAB_09dc047d:
                _auStack_230 = pppppppuVar32;
                func_0x0412e5e0(auStack_278,pppppppuStack_1d0,
                                CONCAT17(uStack_1d1,
                                         CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))));
              }
              else {
                pppppppuVar32 = (ulong *******)func_0x04909a40(auStack_238,&bStack_1e0);
                pppppppuVar35 = (ulong *******)*plVar13;
                if ((bStack_1e0 & 1) != 0) goto LAB_09dc047d;
LAB_09dc04c5:
                pppppppuStack_268 = pppppppuStack_1d0;
                auStack_278 = (undefined1  [4])CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0));
                uStack_274 = CONCAT22(uStack_1da,CONCAT11(uStack_1db,uStack_1dc));
                uStack_26c = CONCAT13(uStack_1d1,CONCAT12(uStack_1d2,uStack_1d4));
                uStack_270 = (undefined1)uStack_1d8;
                uStack_26f = (undefined2)(uStack_1d8 >> 8);
                uStack_26d = (undefined1)(uStack_1d8 >> 0x18);
                _auStack_230 = pppppppuVar32;
              }
              pppppppuStack_260 = pppppppuVar35;
              func_0x09deb8b0(auStack_258,auStack_278);
              pppppppuVar32 = _auStack_230;
              if (((uint)auStack_278 & 1) != 0) {
                func_0x0412a280(pppppppuStack_268,
                                CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe);
                pppppppuVar32 = _auStack_230;
              }
            }
          }
          _auStack_230 = pppppppuVar32;
          if (pppppppuVar32 < (ulong *******)CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228))) {
            if ((*puVar38 & 1) == 0) {
              pppppppuVar32[2] = (ulong ******)plVar28[5];
              uVar7 = *(undefined4 *)((long)plVar28 + 0x1c);
              lVar51 = plVar28[4];
              uVar8 = *(undefined4 *)((long)plVar28 + 0x24);
              *(uint *)pppppppuVar32 = *puVar38;
              *(undefined4 *)((long)pppppppuVar32 + 4) = uVar7;
              *(int *)(pppppppuVar32 + 1) = (int)lVar51;
              *(undefined4 *)((long)pppppppuVar32 + 0xc) = uVar8;
            }
            else {
              func_0x0412e5e0(pppppppuVar32,plVar28[5],plVar28[4]);
            }
            pppppppuVar32 = pppppppuVar32 + 3;
            pppppppuVar35 = (ulong *******)*plVar13;
            if ((*puVar38 & 1) == 0) goto LAB_09dc0582;
LAB_09dc054e:
            _auStack_230 = pppppppuVar32;
            func_0x0412e5e0(auStack_278,plVar28[5],plVar28[4]);
          }
          else {
            pppppppuVar32 = (ulong *******)func_0x04909a40(auStack_238,puVar38);
            pppppppuVar35 = (ulong *******)*plVar13;
            if ((*puVar38 & 1) != 0) goto LAB_09dc054e;
LAB_09dc0582:
            pppppppuStack_268 = (ulong *******)plVar28[5];
            auStack_278 = (undefined1  [4])*puVar38;
            uStack_274 = *(undefined4 *)((long)plVar28 + 0x1c);
            uVar7 = (undefined4)plVar28[4];
            uStack_26c = *(undefined4 *)((long)plVar28 + 0x24);
            uStack_270 = (undefined1)uVar7;
            uStack_26f = (undefined2)((uint)uVar7 >> 8);
            uStack_26d = (undefined1)((uint)uVar7 >> 0x18);
            _auStack_230 = pppppppuVar32;
          }
          pppppppuStack_260 = pppppppuVar35;
          func_0x09deb8b0(auStack_258,auStack_278);
          if (((uint)auStack_278 & 1) != 0) {
            func_0x0412a280(pppppppuStack_268,CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe)
            ;
          }
          if ((bStack_180 & 1) != 0) {
            func_0x0412a280(uStack_170,CONCAT71(uStack_17f,bStack_180) & 0xfffffffffffffffe);
          }
          if ((bStack_1a0 & 1) != 0) {
            func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
          }
          if ((bStack_1c0 & 1) != 0) {
            func_0x0412a280(plStack_1b0,CONCAT71(auStack_1bf._0_7_,bStack_1c0) & 0xfffffffffffffffe)
            ;
          }
          if ((bStack_1e0 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1d0,
                            CONCAT26(uStack_1da,
                                     CONCAT15(uStack_1db,
                                              CONCAT14(uStack_1dc,
                                                       CONCAT22(uStack_1de,
                                                                CONCAT11(uStack_1df,bStack_1e0)))))
                            & 0xfffffffffffffffe);
          }
        }
      }
LAB_09dc0310:
      plVar28 = (long *)*plVar28;
    } while (plVar28 != (long *)0x0);
  }
  func_0x0cc465d0(&uStack_208);
  uStack_1e8 = _DAT_0f6ffb28;
  uStack_1e4 = (undefined1)uRam000000000f6ffb2c;
  uStack_1e3 = (undefined1)((uint)uRam000000000f6ffb2c >> 8);
  uStack_1e2 = (undefined1)((uint)uRam000000000f6ffb2c >> 0x10);
  uStack_1e1 = (undefined1)((uint)uRam000000000f6ffb2c >> 0x18);
  bStack_1e0 = (byte)_DAT_0f6ffb30;
  uStack_1df = (undefined1)((uint)_DAT_0f6ffb30 >> 8);
  uStack_1de = (undefined2)((uint)_DAT_0f6ffb30 >> 0x10);
  uStack_1dc = (undefined1)uRam000000000f6ffb34;
  uStack_1db = (undefined1)((uint)uRam000000000f6ffb34 >> 8);
  uStack_1da = (undefined2)((uint)uRam000000000f6ffb34 >> 0x10);
  if (CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) != 0) {
    LOCK();
    plVar28 = (long *)(CONCAT44(uRam000000000f6ffb34,_DAT_0f6ffb30) + 8);
    *plVar28 = *plVar28 + 1;
    UNLOCK();
  }
  func_0x0cc46520(&uStack_208,&uStack_1e8);
  plVar28 = (long *)CONCAT26(uStack_1da,
                             CONCAT15(uStack_1db,
                                      CONCAT14(uStack_1dc,
                                               CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))
                                     ));
  if (plVar28 == (long *)0x0) {
LAB_09dc070c:
    if (_DAT_0f6ffa38 == _DAT_0f6ffa40) goto LAB_09dc0ba3;
  }
  else {
    LOCK();
    plVar13 = plVar28 + 1;
    lVar51 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar51 != 0) goto LAB_09dc070c;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    func_0x0412c2d0(plVar28);
    if (_DAT_0f6ffa38 == _DAT_0f6ffa40) goto LAB_09dc0ba3;
  }
  lVar51 = _DAT_0f6ffa40;
  lVar50 = _DAT_0f6ffa38;
  do {
    puVar38 = (uint *)(lVar50 + 0x18);
    func_0x0c6c77f0(&uStack_1e8,puVar38);
    plVar28 = (long *)func_0x0cc422f0(0xf6ff9e0,&uStack_1e8,0,0,0);
    if ((*(char *)(lVar50 + 0x88) == '\0') && (*(byte *)(ppppppuStack_168 + 3) == 0)) {
      if (((*(byte *)(lVar50 + 0x76) & 1) != 0) && (*(byte *)((long)ppppppuStack_168 + 7) == 0)) {
        cVar21 = func_0x04fa7a10(ppppppuStack_168,lVar50 + 0x70);
        if (cVar21 != '\0') goto LAB_09dc0ac0;
      }
      cVar21 = (**(code **)(*plVar28 + 0x178))(plVar28,ppppppuStack_168);
      if (cVar21 != '\0') {
        puVar52 = (undefined8 *)(lVar50 + 0x10);
        lVar29 = func_0x0cc422f0(0xf6ff9e0,puVar52,0,0,0);
        pppppppuVar32 = _auStack_230;
        if (lVar29 != 0) {
          bVar24 = *(byte *)(lVar29 + 0xf0);
          if ((bVar24 & 1) == 0) {
            uVar31 = (ulong)(bVar24 >> 1);
            uVar54 = (ulong)*(byte *)(lVar29 + 0xd0);
            if ((*(byte *)(lVar29 + 0xd0) & 1) != 0) goto LAB_09dc083b;
LAB_09dc081f:
            if (uVar31 != uVar54 >> 1) goto LAB_09dc0894;
          }
          else {
            uVar31 = *(ulong *)(lVar29 + 0xf8);
            uVar54 = (ulong)*(byte *)(lVar29 + 0xd0);
            if ((*(byte *)(lVar29 + 0xd0) & 1) == 0) goto LAB_09dc081f;
LAB_09dc083b:
            if (uVar31 != *(ulong *)(lVar29 + 0xd8)) goto LAB_09dc0894;
          }
          if ((bVar24 & 1) == 0) {
            lVar59 = lVar29 + 0xf1;
          }
          else {
            lVar59 = *(long *)(lVar29 + 0x100);
          }
          if ((uVar54 & 1) == 0) {
            iVar25 = func_0x0eee3000(lVar59,lVar29 + 0xd1);
          }
          else {
            iVar25 = func_0x0eee3000(lVar59,*(undefined8 *)(lVar29 + 0xe0));
          }
          pppppppuVar32 = _auStack_230;
          if (iVar25 == 0) goto LAB_09dc0ac0;
        }
LAB_09dc0894:
        if ((bStack_1c0 & 1) == 0) {
          if (bStack_1c0 >> 1 == 9) goto LAB_09dc08c4;
        }
        else if (auStack_1bf._7_8_ == 9) {
LAB_09dc08c4:
          plVar28 = (long *)auStack_1bf;
          if ((bStack_1c0 & 1) != 0) {
            plVar28 = plStack_1b0;
          }
          if ((char)plVar28[1] == 't' && *plVar28 == 0x66617263656e696d) {
            _auStack_230 = pppppppuVar32;
            if (pppppppuVar32 < (ulong *******)CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228)))
            {
              if ((bStack_1e0 & 1) == 0) {
                pppppppuVar32[2] = (ulong ******)pppppppuStack_1d0;
                *(uint *)pppppppuVar32 = CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0));
                *(uint *)((long)pppppppuVar32 + 4) =
                     CONCAT22(uStack_1da,CONCAT11(uStack_1db,uStack_1dc));
                *(uint *)(pppppppuVar32 + 1) = uStack_1d8;
                *(uint *)((long)pppppppuVar32 + 0xc) =
                     CONCAT13(uStack_1d1,CONCAT12(uStack_1d2,uStack_1d4));
              }
              else {
                func_0x0412e5e0(pppppppuVar32,pppppppuStack_1d0,
                                CONCAT17(uStack_1d1,
                                         CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))));
              }
              pppppppuVar32 = pppppppuVar32 + 3;
              pppppppuVar35 = (ulong *******)*puVar52;
              if ((bStack_1e0 & 1) == 0) goto LAB_09dc09a8;
LAB_09dc0950:
              _auStack_230 = pppppppuVar32;
              func_0x0412e5e0(auStack_278,pppppppuStack_1d0,
                              CONCAT17(uStack_1d1,
                                       CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))));
              pppppppuStack_280 = pppppppuVar35;
            }
            else {
              pppppppuVar32 = (ulong *******)func_0x04909a40(auStack_238,&bStack_1e0);
              pppppppuVar35 = (ulong *******)*puVar52;
              if ((bStack_1e0 & 1) != 0) goto LAB_09dc0950;
LAB_09dc09a8:
              pppppppuStack_268 = pppppppuStack_1d0;
              auStack_278 = (undefined1  [4])CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0));
              uStack_274 = CONCAT22(uStack_1da,CONCAT11(uStack_1db,uStack_1dc));
              uStack_26c = CONCAT13(uStack_1d1,CONCAT12(uStack_1d2,uStack_1d4));
              uStack_270 = (undefined1)uStack_1d8;
              uStack_26f = (undefined2)(uStack_1d8 >> 8);
              uStack_26d = (undefined1)(uStack_1d8 >> 0x18);
              _auStack_230 = pppppppuVar32;
            }
            pppppppuStack_260 = pppppppuVar35;
            func_0x09deb8b0(auStack_258,auStack_278);
            pppppppuVar32 = _auStack_230;
            if (((uint)auStack_278 & 1) != 0) {
              func_0x0412a280(pppppppuStack_268,
                              CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe);
              pppppppuVar32 = _auStack_230;
            }
          }
        }
        _auStack_230 = pppppppuVar32;
        if (pppppppuVar32 < (ulong *******)CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228))) {
          if ((*(byte *)puVar38 & 1) == 0) {
            pppppppuVar32[2] = *(ulong *******)(lVar50 + 0x28);
            uVar7 = *(undefined4 *)(lVar50 + 0x1c);
            uVar8 = *(undefined4 *)(lVar50 + 0x20);
            uVar9 = *(undefined4 *)(lVar50 + 0x24);
            *(uint *)pppppppuVar32 = *puVar38;
            *(undefined4 *)((long)pppppppuVar32 + 4) = uVar7;
            *(undefined4 *)(pppppppuVar32 + 1) = uVar8;
            *(undefined4 *)((long)pppppppuVar32 + 0xc) = uVar9;
          }
          else {
            func_0x0412e5e0(pppppppuVar32,*(undefined8 *)(lVar50 + 0x28),
                            *(undefined8 *)(lVar50 + 0x20));
          }
          pppppppuVar32 = pppppppuVar32 + 3;
          pppppppuVar35 = (ulong *******)*puVar52;
          if ((*(byte *)puVar38 & 1) == 0) goto LAB_09dc0a6f;
LAB_09dc0a35:
          _auStack_230 = pppppppuVar32;
          func_0x0412e5e0(auStack_278,*(undefined8 *)(lVar50 + 0x28),*(undefined8 *)(lVar50 + 0x20))
          ;
        }
        else {
          pppppppuVar32 = (ulong *******)func_0x04909a40(auStack_238,puVar38);
          pppppppuVar35 = (ulong *******)*puVar52;
          if ((*(byte *)puVar38 & 1) != 0) goto LAB_09dc0a35;
LAB_09dc0a6f:
          pppppppuStack_268 = *(ulong ********)(lVar50 + 0x28);
          auStack_278 = (undefined1  [4])*puVar38;
          uStack_274 = *(undefined4 *)(lVar50 + 0x1c);
          uVar7 = *(undefined4 *)(lVar50 + 0x20);
          uStack_26c = *(undefined4 *)(lVar50 + 0x24);
          uStack_270 = (undefined1)uVar7;
          uStack_26f = (undefined2)((uint)uVar7 >> 8);
          uStack_26d = (undefined1)((uint)uVar7 >> 0x18);
          _auStack_230 = pppppppuVar32;
        }
        pppppppuStack_260 = pppppppuVar35;
        func_0x09deb8b0(auStack_258,auStack_278);
        if (((uint)auStack_278 & 1) != 0) {
          func_0x0412a280(pppppppuStack_268,CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe);
        }
      }
    }
LAB_09dc0ac0:
    if ((bStack_180 & 1) != 0) {
      func_0x0412a280(uStack_170,CONCAT71(uStack_17f,bStack_180) & 0xfffffffffffffffe);
    }
    if ((bStack_1a0 & 1) != 0) {
      func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
    }
    if ((bStack_1c0 & 1) != 0) {
      func_0x0412a280(plStack_1b0,CONCAT71(auStack_1bf._0_7_,bStack_1c0) & 0xfffffffffffffffe);
    }
    if ((bStack_1e0 & 1) != 0) {
      func_0x0412a280(pppppppuStack_1d0,
                      CONCAT26(uStack_1da,
                               CONCAT15(uStack_1db,
                                        CONCAT14(uStack_1dc,
                                                 CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)
                                                         )))) & 0xfffffffffffffffe);
    }
    lVar50 = lVar50 + 0xb0;
  } while (lVar50 != lVar51);
LAB_09dc0ba3:
  func_0x0cc465d0(&uStack_208);
  uStack_208 = 0x6f6c420a;
  uStack_204 = 99;
  uStack_203 = 0x6b;
  pppppppuVar35 =
       (ulong *******)
       CONCAT17(uStack_251,
                CONCAT16(uStack_252,CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258))));
  pppppppuVar32 =
       (ulong *******)CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
  auStack_278 = (undefined1  [4])0x0;
  uStack_274 = 0;
  _auStack_278 = (ulong *******)0x0;
  uStack_270 = 0;
  uStack_26f = 0;
  uStack_26d = 0;
  uStack_26c = 0;
  pppppppuStack_268 = (ulong *******)0x0;
  lVar51 = (long)pppppppuVar32 - (long)pppppppuVar35;
  if (lVar51 == 0) goto LAB_09dc0e56;
  if (lVar51 < 0) {
LAB_09dc668f:
    func_0x049315c0();
LAB_09dc6694:
    func_0x049315c0();
LAB_09dc6699:
    func_0x0488efe0();
LAB_09dc669e:
    func_0x049315c0();
LAB_09dc66a3:
    func_0x049315c0();
LAB_09dc66a8:
    func_0x04882ef0(&UNK_01306d2f);
LAB_09dc66b4:
    func_0x09de4c80();
LAB_09dc66b9:
    func_0x09de4c80();
LAB_09dc66be:
    func_0x09de4c80();
    pppppppuVar35 = _auStack_278;
LAB_09dc66c3:
    _auStack_278 = pppppppuVar35;
    uVar42 = func_0x04882e30();
    uStack_153._3_1_ = SUB81(pppppppuVar32,0);
    uStack_14f = (undefined4)((ulong)pppppppuVar32 >> 8);
    uStack_14b._0_3_ = (undefined3)((ulong)pppppppuVar32 >> 0x28);
    if (((uint)auStack_258 & 1) != 0) {
      func_0x0412a280(pppppppuStack_248,
                      CONCAT17(uStack_251,
                               CONCAT16(uStack_252,
                                        CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258)))) &
                      0xfffffffffffffffe);
    }
    if (((ulong)_auStack_278 & 1) != 0) {
      func_0x0412a280(pppppppuStack_268,(ulong)_auStack_278 & 0xfffffffffffffffe);
    }
    if ((uStack_1e8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                      CONCAT17(uStack_1e1,
                               CONCAT16(uStack_1e2,
                                        CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)))) &
                      0xfffffffffffffffe);
    }
    func_0x04963c80(&pppppppuStack_e0);
    func_0x04a21d70(&pppppppuStack_d8);
    func_0x04886070(auStack_158);
    func_0x049dc470(&bStack_138,
                    CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,uStack_133._3_1_)));
    func_0x049dc470(&ppppppplStack_118,ppppppplStack_110);
    func_0x09d9cf50(&uStack_208);
    if (pppppppuStack_160 != (ulong *******)0x0) {
      func_0x0412c2d0();
    }
    func_0x09dc7760(&lStack_98);
    func_0x09dc7760(&lStack_78);
    func_0x0eee2d70(uVar42);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pppppppuVar30 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
  if (pppppppuVar30 == (ulong *******)0x0) goto LAB_09dc6351;
  do {
    pppppppuStack_268 = (ulong *******)(lVar51 + (long)pppppppuVar30);
    uStack_274 = (uint)((ulong)pppppppuVar30 >> 0x20);
    uStack_270 = SUB81(pppppppuVar30,0);
    uStack_26f = (undefined2)((ulong)pppppppuVar30 >> 8);
    uStack_26d = (undefined1)((ulong)pppppppuVar30 >> 0x18);
    uStack_26c = uStack_274;
    pppppppuStack_218 = pppppppuVar32;
    _auStack_278 = pppppppuVar30;
    do {
      pppppppuVar62 = (ulong *******)pppppppuVar35[3];
      if (((ulong)*pppppppuVar35 & 1) == 0) {
        ppppppuVar37 = pppppppuVar35[2];
        uStack_1d8 = (uint)ppppppuVar37;
        uStack_1d4 = (undefined2)((ulong)ppppppuVar37 >> 0x20);
        uStack_1d2 = (undefined1)((ulong)ppppppuVar37 >> 0x30);
        uStack_1d1 = (undefined1)((ulong)ppppppuVar37 >> 0x38);
        uStack_1e8 = *(uint *)pppppppuVar35;
        uVar7 = *(undefined4 *)((long)pppppppuVar35 + 4);
        uVar8 = *(undefined4 *)(pppppppuVar35 + 1);
        uVar9 = *(undefined4 *)((long)pppppppuVar35 + 0xc);
        uStack_1e4 = (undefined1)uVar7;
        uStack_1e3 = (undefined1)((uint)uVar7 >> 8);
        uStack_1e2 = (undefined1)((uint)uVar7 >> 0x10);
        uStack_1e1 = (undefined1)((uint)uVar7 >> 0x18);
        bStack_1e0 = (byte)uVar8;
        uStack_1df = (undefined1)((uint)uVar8 >> 8);
        uStack_1de = (undefined2)((uint)uVar8 >> 0x10);
        uStack_1dc = (undefined1)uVar9;
        uStack_1db = (undefined1)((uint)uVar9 >> 8);
        uStack_1da = (undefined2)((uint)uVar9 >> 0x10);
      }
      else {
        func_0x0412e5e0(&uStack_1e8,pppppppuVar35[2],pppppppuVar35[1]);
      }
      pppppppuStack_1d0 = pppppppuVar62;
      if (pppppppuVar30 < pppppppuStack_268) {
        pppppppuVar30[2] =
             (ulong ******)CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)))
        ;
        *pppppppuVar30 =
             (ulong ******)
             CONCAT17(uStack_1e1,
                      CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
        pppppppuVar30[1] =
             (ulong ******)
             CONCAT26(uStack_1da,
                      CONCAT15(uStack_1db,
                               CONCAT14(uStack_1dc,
                                        CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))));
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e1 = 0;
        bStack_1e0 = 0;
        uStack_1df = 0;
        uStack_1de = 0;
        uStack_1dc = 0;
        uStack_1db = 0;
        uStack_1da = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1d2 = 0;
        uStack_1d1 = 0;
        pppppppuVar30[3] = (ulong ******)pppppppuVar62;
        pppppppuVar30 = pppppppuVar30 + 4;
        uStack_270 = SUB81(pppppppuVar30,0);
        uStack_26f = (undefined2)((ulong)pppppppuVar30 >> 8);
        uStack_26d = (undefined1)((ulong)pppppppuVar30 >> 0x18);
        uStack_26c = (uint)((ulong)pppppppuVar30 >> 0x20);
      }
      else {
        lVar51 = (long)pppppppuVar30 - (long)_auStack_278;
        uVar31 = (lVar51 >> 5) + 1;
        if (0x7ffffffffffffff < uVar31) goto LAB_09dc6404;
        pppppppuStack_210 = (ulong *******)((long)pppppppuStack_268 - (long)_auStack_278);
        uVar54 = (long)pppppppuStack_210 >> 4;
        if ((ulong)((long)pppppppuStack_210 >> 4) <= uVar31) {
          uVar54 = uVar31;
        }
        if ((ulong *******)0x7fffffffffffffdf < pppppppuStack_210) {
          uVar54 = 0x7ffffffffffffff;
        }
        pppppppuStack_280 = pppppppuVar62;
        uStack_240 = _auStack_278;
        if (0x7ffffffffffffff < uVar54) goto LAB_09dc6409;
        lVar29 = uVar54 * 0x20;
        lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar29);
        if (lVar50 == 0) {
          FUN_0eec74c0(lVar29,0);
        }
        pppppppuVar60 = uStack_240;
        *(ulong *)(lVar50 + 0x10 + lVar51) =
             CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)));
        *(undefined8 *)(lVar50 + lVar51) =
             CONCAT17(uStack_1e1,
                      CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
        ((undefined8 *)(lVar50 + lVar51))[1] =
             CONCAT26(uStack_1da,
                      CONCAT15(uStack_1db,
                               CONCAT14(uStack_1dc,
                                        CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))));
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e1 = 0;
        bStack_1e0 = 0;
        uStack_1df = 0;
        uStack_1de = 0;
        uStack_1dc = 0;
        uStack_1db = 0;
        uStack_1da = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1d2 = 0;
        uStack_1d1 = 0;
        *(ulong ********)(lVar50 + 0x18 + lVar51) = pppppppuVar62;
        pppppppuVar30 = (ulong *******)(lVar50 + lVar51 + 0x20);
        pppppppuVar62 = (ulong *******)(lVar50 + lVar51 + (lVar51 >> 5) * -0x20);
        func_0x0eee2f00(pppppppuVar62,uStack_240,lVar51);
        uVar53 = uStack_26c;
        uVar17 = uStack_26d;
        uVar15 = uStack_26f;
        uVar22 = uStack_270;
        uStack_270 = SUB81(pppppppuVar30,0);
        uVar23 = uStack_270;
        uStack_26d = (undefined1)((ulong)pppppppuVar30 >> 0x18);
        uVar18 = uStack_26d;
        uStack_26f = (undefined2)((ulong)pppppppuVar30 >> 8);
        uVar16 = uStack_26f;
        uStack_26c = (uint)((ulong)pppppppuVar30 >> 0x20);
        uVar19 = uStack_26c;
        pppppppuVar32 = pppppppuStack_218;
        uStack_270 = uVar23;
        uStack_26f = uVar16;
        uStack_26d = uVar18;
        uStack_26c = uVar19;
        pppppppuStack_268 = (ulong *******)(lVar29 + lVar50);
        _auStack_278 = pppppppuVar62;
        if (pppppppuVar60 != (ulong *******)0x0) {
          uStack_270 = uVar22;
          uStack_26f = uVar15;
          uStack_26d = uVar17;
          uStack_26c = uVar53;
          func_0x0412a280(pppppppuVar60,pppppppuStack_210);
          pppppppuVar32 = pppppppuStack_218;
          uStack_270 = uVar23;
          uStack_26f = uVar16;
          uStack_26d = uVar18;
          uStack_26c = uVar19;
          if ((uStack_1e8 & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))
                                    ),
                            CONCAT17(uStack_1e1,
                                     CONCAT16(uStack_1e2,
                                              CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))))
                            & 0xfffffffffffffffe);
          }
        }
      }
      pppppppuVar35 = pppppppuVar35 + 4;
    } while (pppppppuVar35 != pppppppuVar32);
LAB_09dc0e56:
    if (DAT_0f6036c8 == '\0') goto LAB_09dc64ac;
LAB_09dc0e65:
    pppppppuVar35 = pppppppuStack_160;
    bStack_138 = (byte)_DAT_0f6036c0;
    uStack_137._0_1_ = (undefined1)((ushort)_DAT_0f6036c0 >> 8);
    uStack_1e8 = 0x9dff180;
    uStack_1e4 = 0;
    uStack_1e3 = 0;
    uStack_1e2 = 0;
    uStack_1e1 = 0;
    bStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1de = 0;
    uStack_1dc = 0;
    uStack_1db = 0;
    uStack_1da = 0;
    func_0x09da7580(&ppppppplStack_118,pppppppuStack_160,&uStack_208,auStack_278,&bStack_138);
    pppppppuVar32 = _auStack_278;
    if (_auStack_278 != (ulong *******)0x0) {
      for (pppppppuVar30 =
                (ulong *******)
                CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
          pppppppuVar32 != pppppppuVar30; pppppppuVar30 = pppppppuVar30 + -4) {
        if (((ulong)pppppppuVar30[-4] & 1) != 0) {
          func_0x0412a280(pppppppuVar30[-2],(ulong)pppppppuVar30[-4] & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(pppppppuVar32,(long)pppppppuStack_268 - (long)pppppppuVar32);
    }
    if ((uStack_208 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8)),
                      CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT14(uStack_204,uStack_208))) &
                      0xfffffffffffffffe);
    }
    pppppppuVar32 =
         (ulong *******)CONCAT17(uStack_231,CONCAT25(uStack_233,CONCAT14(uStack_234,auStack_238)));
    pppppppuVar30 = _auStack_230;
    if (pppppppuVar32 != _auStack_230) {
      uStack_1e8 = 0x6f6c420a;
      uStack_1e4 = 99;
      uStack_1e3 = 0x6b;
      uStack_1e2 = 0;
      func_0x09d9f270(pppppppuVar35,&uStack_1e8,auStack_238,8);
      pppppppuVar30 = _auStack_230;
      if ((uStack_1e8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                        CONCAT17(uStack_1e1,
                                 CONCAT16(uStack_1e2,
                                          CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)))) &
                        0xfffffffffffffffe);
        pppppppuVar30 = _auStack_230;
      }
      pppppppuVar32 =
           (ulong *******)CONCAT17(uStack_231,CONCAT25(uStack_233,CONCAT14(uStack_234,auStack_238)))
      ;
    }
    if (pppppppuVar32 != (ulong *******)0x0) {
      pppppppuVar35 = pppppppuVar32;
      _auStack_230 = pppppppuVar30;
      if (pppppppuVar32 != pppppppuVar30) {
        do {
          if (((ulong)pppppppuVar30[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar30[-1],(ulong)pppppppuVar30[-3] & 0xfffffffffffffffe);
          }
          pppppppuVar30 = pppppppuVar30 + -3;
        } while (pppppppuVar30 != pppppppuVar32);
        pppppppuVar35 =
             (ulong *******)
             CONCAT17(uStack_231,CONCAT25(uStack_233,CONCAT14(uStack_234,auStack_238)));
      }
      auStack_230 = SUB84(pppppppuVar32,0);
      uStack_22c = (uint)((ulong)pppppppuVar32 >> 0x20);
      func_0x0412a280(pppppppuVar35,
                      CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228)) - (long)pppppppuVar35);
      pppppppuVar30 = (ulong *******)CONCAT44(uStack_22c,auStack_230);
    }
    auVar14 = auStack_258;
    lVar51 = CONCAT17(uStack_251,
                      CONCAT16(uStack_252,CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258))));
    _auStack_230 = pppppppuVar30;
    if (lVar51 != 0) {
      lVar50 = CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
      lVar29 = lVar51;
      if (lVar51 != lVar50) {
        do {
          if ((*(byte *)(lVar50 + -0x20) & 1) != 0) {
            _auStack_230 = pppppppuVar30;
            func_0x0412a280(*(undefined8 *)(lVar50 + -0x10),
                            *(ulong *)(lVar50 + -0x20) & 0xfffffffffffffffe);
            pppppppuVar30 = _auStack_230;
          }
          lVar50 = lVar50 + -0x20;
        } while (lVar50 != lVar51);
        lVar29 = CONCAT17(uStack_251,
                          CONCAT16(uStack_252,CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258)))
                         );
      }
      uStack_250 = auVar14[0];
      uStack_24f = auVar14._1_2_;
      uStack_24d = auVar14[3];
      uStack_24c = (undefined4)((ulong)lVar51 >> 0x20);
      _auStack_230 = pppppppuVar30;
      func_0x0412a280(lVar29,(long)pppppppuStack_248 - lVar29);
    }
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    lStack_98 = 0;
    lStack_90 = 0;
    lStack_88 = 0;
    pppppppuVar32 = (ulong *******)plStack_b0[0x69];
    pppppppuVar30 = pppppppuVar32;
    pppppppuVar35 = pppppppuStack_210;
    for (ppppppuVar37 = pppppppuVar32[0xb]; pppppppuStack_210 = pppppppuVar30,
        ppppppuVar37 != (ulong ******)0x0; ppppppuVar37 = (ulong ******)*ppppppuVar37) {
      if (*(char *)(pppppppuVar32[6] + (long)ppppppuVar37[7] * 3 + 1) == '\x01') {
        ppppppuVar41 = pppppppuVar32[6] + (long)ppppppuVar37[7] * 3;
        pppppppuVar35 = (ulong *******)*ppppppuVar41;
        pppppuVar65 = ppppppuVar41[2];
        pppppppuVar62 = (ulong *******)pppppppuVar35[3][(long)pppppuVar65];
        if (pppppppuVar62 != (ulong *******)0x0) {
          if (*(byte *)(pppppppuVar62 + 1) == 0) {
            if (((ulong)ppppppuVar37[3] & 1) == 0) {
              uStack_240 = (ulong *******)((long)ppppppuVar37 + 0x19);
            }
            else {
              uStack_240 = (ulong *******)ppppppuVar37[5];
            }
            uVar31 = strlen();
            if (0xfffffffffffffff7 < uVar31) goto LAB_09dc642c;
            if (uVar31 < 0x17) {
              uStack_1e8 = CONCAT31(uStack_1e8._1_3_,(byte)uVar31 * '\x02');
              lVar50 = (long)&uStack_1e8 + 1;
              if (uVar31 != 0) goto LAB_09dc11ae;
            }
            else {
              lVar51 = (uVar31 | 7) + 1;
              if ((uVar31 | 7) == 0x17) {
                lVar51 = 0x1a;
              }
              lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
              if (lVar50 == 0) {
                FUN_0eec74c0(lVar51,0);
              }
              uStack_1d8 = (uint)lVar50;
              uStack_1d4 = (undefined2)((ulong)lVar50 >> 0x20);
              uStack_1d2 = (undefined1)((ulong)lVar50 >> 0x30);
              uStack_1d1 = (undefined1)((ulong)lVar50 >> 0x38);
              uStack_1e8 = (uint)lVar51 | 1;
              uStack_1e4 = (undefined1)((ulong)lVar51 >> 0x20);
              uStack_1e3 = (undefined1)((ulong)lVar51 >> 0x28);
              uStack_1e2 = (undefined1)((ulong)lVar51 >> 0x30);
              uStack_1e1 = (undefined1)((ulong)lVar51 >> 0x38);
              uStack_1df = (undefined1)(uVar31 >> 8);
              uStack_1de = (undefined2)(uVar31 >> 0x10);
              uStack_1dc = (undefined1)(uVar31 >> 0x20);
              uStack_1db = (undefined1)(uVar31 >> 0x28);
              uStack_1da = (undefined2)(uVar31 >> 0x30);
              pppppppuVar32 = pppppppuStack_210;
              bStack_1e0 = (byte)uVar31;
LAB_09dc11ae:
              func_0x0eee2ee0(lVar50,uStack_240,uVar31);
            }
            *(undefined1 *)(lVar50 + uVar31) = 0;
            pppppppuStack_1d0 = pppppppuVar62;
            func_0x09deb430(&lStack_78,&uStack_1e8);
            if ((uStack_1e8 & 1) != 0) {
              func_0x0412a280(CONCAT17(uStack_1d1,
                                       CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                              CONCAT17(uStack_1e1,
                                       CONCAT16(uStack_1e2,
                                                CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))
                                               )) & 0xfffffffffffffffe);
            }
            pppppppuVar62 = (ulong *******)pppppppuVar35[3][(long)pppppuVar65];
            pppppppuStack_280 = pppppppuVar35;
          }
          if (((ulong)ppppppuVar37[3] & 1) == 0) {
            pppppuVar65 = (ulong *****)((long)ppppppuVar37 + 0x19);
          }
          else {
            pppppuVar65 = ppppppuVar37[5];
          }
          uVar31 = strlen(pppppuVar65);
          if (0xfffffffffffffff7 < uVar31) goto LAB_09dc642c;
          if (uVar31 < 0x17) {
            uStack_1e8 = CONCAT31(uStack_1e8._1_3_,(byte)uVar31 * '\x02');
            lVar50 = (long)&uStack_1e8 + 1;
            if (uVar31 != 0) goto LAB_09dc12b6;
          }
          else {
            lVar51 = (uVar31 | 7) + 1;
            if ((uVar31 | 7) == 0x17) {
              lVar51 = 0x1a;
            }
            lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
            if (lVar50 == 0) {
              FUN_0eec74c0(lVar51,0);
            }
            uStack_1d8 = (uint)lVar50;
            uStack_1d4 = (undefined2)((ulong)lVar50 >> 0x20);
            uStack_1d2 = (undefined1)((ulong)lVar50 >> 0x30);
            uStack_1d1 = (undefined1)((ulong)lVar50 >> 0x38);
            uStack_1e8 = (uint)lVar51 | 1;
            uStack_1e4 = (undefined1)((ulong)lVar51 >> 0x20);
            uStack_1e3 = (undefined1)((ulong)lVar51 >> 0x28);
            uStack_1e2 = (undefined1)((ulong)lVar51 >> 0x30);
            uStack_1e1 = (undefined1)((ulong)lVar51 >> 0x38);
            uStack_1df = (undefined1)(uVar31 >> 8);
            uStack_1de = (undefined2)(uVar31 >> 0x10);
            uStack_1dc = (undefined1)(uVar31 >> 0x20);
            uStack_1db = (undefined1)(uVar31 >> 0x28);
            uStack_1da = (undefined2)(uVar31 >> 0x30);
            pppppppuVar32 = pppppppuStack_210;
            bStack_1e0 = (byte)uVar31;
LAB_09dc12b6:
            func_0x0eee2ee0(lVar50,pppppuVar65,uVar31);
          }
          *(undefined1 *)(lVar50 + uVar31) = 0;
          pppppppuStack_1d0 = pppppppuVar62;
          func_0x09deb430(&lStack_98,&uStack_1e8);
          if ((uStack_1e8 & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))
                                    ),
                            CONCAT17(uStack_1e1,
                                     CONCAT16(uStack_1e2,
                                              CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))))
                            & 0xfffffffffffffffe);
          }
        }
      }
      pppppppuVar30 = pppppppuStack_210;
      pppppppuVar35 = pppppppuStack_210;
    }
    uStack_1e8 = 0x61656610;
    uStack_1e4 = 0x74;
    uStack_1e3 = 0x75;
    uStack_1e2 = 0x72;
    uStack_1e1 = 0x65;
    bStack_1e0 = 0x73;
    uStack_1df = 0;
    pppppppuStack_210 = pppppppuVar35;
    func_0x09dc72b0(*(undefined8 *)(lStack_e8 + 0x10),&uStack_1e8,lStack_78,lStack_70);
    if ((uStack_1e8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                      CONCAT17(uStack_1e1,
                               CONCAT16(uStack_1e2,
                                        CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)))) &
                      0xfffffffffffffffe);
    }
    uStack_1e8 = 0x61656618;
    uStack_1e4 = 0x74;
    uStack_1e3 = 0x75;
    uStack_1e2 = 0x72;
    uStack_1e1 = 0x65;
    bStack_1e0 = 0x73;
    uStack_1df = 0x54;
    uStack_1de = 0x7365;
    uStack_1dc = 0x74;
    uStack_1db = 0;
    func_0x09dc72b0(*(undefined8 *)(lStack_e8 + 0x10),&uStack_1e8,lStack_98,lStack_90);
    if ((uStack_1e8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                      CONCAT17(uStack_1e1,
                               CONCAT16(uStack_1e2,
                                        CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)))) &
                      0xfffffffffffffffe);
    }
    uVar42 = *(undefined8 *)(lStack_e8 + 0x10);
    puVar3 = *(ushort **)(*(long *)(plStack_b0[0x5e] + 0x18) + 8);
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1e3 = 0;
    uStack_1e2 = 0;
    uStack_1e1 = 0;
    bStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1de = 0;
    uStack_1dc = 0;
    uStack_1db = 0;
    uStack_1da = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d2 = 0;
    uStack_1d1 = 0;
    plVar28 = *(long **)(puVar3 + 0xc);
    puVar26 = (undefined4 *)0x0;
    if (plVar28 == (long *)0x0) {
      uVar44 = 0;
    }
    else {
      do {
        if (*puVar3 <= *(ushort *)(plVar28 + 5)) {
          pbVar2 = (byte *)(plVar28 + 2);
          if (puVar26 < (undefined4 *)
                        CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)))) {
            if ((*pbVar2 & 1) == 0) {
              *(long *)(puVar26 + 4) = plVar28[4];
              uVar7 = *(undefined4 *)((long)plVar28 + 0x14);
              lVar51 = plVar28[3];
              uVar8 = *(undefined4 *)((long)plVar28 + 0x1c);
              *puVar26 = *(undefined4 *)pbVar2;
              puVar26[1] = uVar7;
              puVar26[2] = (int)lVar51;
              puVar26[3] = uVar8;
            }
            else {
              func_0x0412e5e0(puVar26,plVar28[4],plVar28[3]);
            }
            puVar26[6] = (uint)*(ushort *)(plVar28 + 5);
            puVar26 = puVar26 + 8;
          }
          else {
            puVar26 = (undefined4 *)func_0x0c9a5230(&uStack_1e8,pbVar2,plVar28 + 5);
          }
          bStack_1e0 = (byte)puVar26;
          uStack_1df = (undefined1)((ulong)puVar26 >> 8);
          uStack_1de = (undefined2)((ulong)puVar26 >> 0x10);
          uStack_1dc = (undefined1)((ulong)puVar26 >> 0x20);
          uStack_1db = (undefined1)((ulong)puVar26 >> 0x28);
          uStack_1da = (undefined2)((ulong)puVar26 >> 0x30);
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
      uVar44 = CONCAT17(uStack_1e1,
                        CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
    }
    auStack_278 = (undefined1  [4])0x6d694412;
    uStack_274 = 0x69736e65;
    uStack_270 = 0x6f;
    uStack_26f = 0x6e;
    func_0x09dc7e60(uVar42,auStack_278,uVar44,puVar26);
    if (((uint)auStack_278 & 1) != 0) {
      func_0x0412a280(pppppppuStack_268,CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe);
    }
    uVar23 = uStack_1e3;
    uVar22 = uStack_1e4;
    uVar53 = uStack_1e8;
    lVar51 = CONCAT17(uStack_1e1,
                      CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
    if (lVar51 != 0) {
      lVar50 = CONCAT26(uStack_1da,
                        CONCAT15(uStack_1db,
                                 CONCAT14(uStack_1dc,
                                          CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))));
      lVar29 = lVar51;
      if (lVar51 != lVar50) {
        do {
          if ((*(byte *)(lVar50 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar50 + -0x10),
                            *(ulong *)(lVar50 + -0x20) & 0xfffffffffffffffe);
          }
          lVar50 = lVar50 + -0x20;
        } while (lVar50 != lVar51);
        lVar29 = CONCAT17(uStack_1e1,
                          CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))))
        ;
      }
      bStack_1e0 = (byte)uVar53;
      uStack_1df = (undefined1)(uVar53 >> 8);
      uStack_1de = (undefined2)(uVar53 >> 0x10);
      uStack_1dc = uVar22;
      uStack_1db = uVar23;
      uStack_1da = (undefined2)((ulong)lVar51 >> 0x30);
      func_0x0412a280(lVar29,CONCAT17(uStack_1d1,
                                      CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))) - lVar29
                     );
    }
    pppppppuVar35 = *(ulong ********)(lStack_e8 + 0x10);
    auStack_238 = (undefined1  [4])0x0;
    uStack_234 = 0;
    uStack_233 = 0;
    uStack_231 = 0;
    auStack_230 = (undefined1  [4])0x0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_227 = 0;
    uStack_226 = 0;
    uVar22 = func_0x09b94b50();
    uVar23 = func_0x09b94d90();
    func_0x09dbaf20(&uStack_208,uVar22,uVar23);
    ppppppplStack_118 = (long *******)auStack_238;
    pppppppuStack_108 = pppppppuStack_b8;
    plVar28 = (long *)0xf6d0698;
    ppppppplStack_110 = (long *******)&uStack_208;
    do {
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) break;
      uStack_1e8 = *(uint *)(plVar28 + 2);
      cVar21 = func_0x09deba20(&ppppppplStack_118,&uStack_1e8,plVar28 + 10);
    } while (cVar21 != '\0');
    plVar28 = (long *)0xf6d0698;
    do {
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) break;
      uStack_1e8 = *(uint *)(plVar28 + 2);
      cVar21 = func_0x09deba20(&ppppppplStack_118,&uStack_1e8,plVar28 + 3);
    } while (cVar21 != '\0');
    bStack_138 = 0x24;
    uStack_137 = _DAT_0134ac44;
    uStack_133 = _UNK_0134ac48;
    uStack_12f = _UNK_0134ac4c;
    uStack_12b = _UNK_0134ac50;
    uStack_127 = 0x726f;
    uStack_125 = 0;
    pppppppuStack_40 = pppppppuVar35 + 0x28;
    pppppppuVar32 = (ulong *******)func_0x09def6d0(pppppppuStack_40,&bStack_138);
    pppppppuStack_48 = pppppppuVar35 + 0x29;
    pppppppuStack_160 = pppppppuVar35;
    if (pppppppuVar32 != pppppppuStack_48) {
      bVar68 = (bStack_138 & 1) != 0;
      puVar26 = &uStack_137;
      if (bVar68) {
        puVar26 = (undefined4 *)
                  CONCAT44(uStack_124,CONCAT13(uStack_125,CONCAT21(uStack_127,uStack_12b._3_1_)));
      }
      uVar31 = (ulong)(bStack_138 >> 1);
      if (bVar68) {
        uVar31 = CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,uStack_133._3_1_));
      }
      uStack_1e8 = (uint)puVar26;
      uStack_1e4 = (undefined1)((ulong)puVar26 >> 0x20);
      uStack_1e3 = (undefined1)((ulong)puVar26 >> 0x28);
      uStack_1e2 = (undefined1)((ulong)puVar26 >> 0x30);
      uStack_1e1 = (undefined1)((ulong)puVar26 >> 0x38);
      bStack_1e0 = (byte)uVar31;
      uStack_1df = (undefined1)(uVar31 >> 8);
      uStack_1de = (undefined2)(uVar31 >> 0x10);
      uStack_1dc = (undefined1)(uVar31 >> 0x20);
      uStack_1db = (undefined1)(uVar31 >> 0x28);
      uStack_1da = (undefined2)(uVar31 >> 0x30);
      func_0x0470d9a0(auStack_258,&UNK_014d3b4b,0xf,0xd,&uStack_1e8);
      bVar68 = ((uint)auStack_258 & 1) != 0;
      pppppppuVar30 = (ulong *******)(auStack_258 + 1);
      if (bVar68) {
        pppppppuVar30 = pppppppuStack_248;
      }
      uVar31 = (ulong)(auStack_258[0] >> 1);
      if (bVar68) {
        uVar31 = CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
      }
      auStack_158[0] = 0;
      auStack_158._1_4_ = 0;
      uStack_153._0_3_ = 0;
      pppppppuStack_50 = pppppppuVar32;
      if (pppppppuVar30 == (ulong *******)0x0) {
        uVar31 = (ulong)((uint)uVar31 & 0x7f) << 0x30;
      }
      else {
        lVar51 = uVar31 + 9;
        puVar33 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar51,8);
        if (lVar51 != 0 && puVar33 == (ulong *)0x0) {
          FUN_0eec74c0(lVar51,8);
        }
        *puVar33 = uVar31;
        func_0x0eee2f00(puVar33 + 1,pppppppuVar30,uVar31);
        *(undefined1 *)((long)puVar33 + uVar31 + 8) = 0;
        uVar31 = (ulong)(puVar33 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      auStack_158[0] = (byte)uVar31;
      auStack_158._1_4_ = (undefined4)(uVar31 >> 8);
      uStack_153._0_3_ = (undefined3)(uVar31 >> 0x28);
      uStack_1e8 = uStack_1e8 & 0xffffff00;
      uStack_1d8 = uStack_1d8 & 0xffffff00;
      func_0x0eeb79f0(auStack_278,auStack_158);
      if ((uStack_153 & 0x8000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,
                   (CONCAT35((undefined3)uStack_153,CONCAT41(auStack_158._1_4_,auStack_158[0])) &
                   0xff00ffffffffffff) - 8);
      }
      auStack_158[0] = 0;
      auStack_158._1_4_ = 0;
      uStack_153 = uStack_153 & 0xff000000;
      if (((uint)auStack_258 & 1) != 0) {
        func_0x0412a280(pppppppuStack_248,
                        CONCAT17(uStack_251,
                                 CONCAT16(uStack_252,
                                          CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258)))) &
                        0xfffffffffffffffe);
      }
      pppppppuVar30 =
           (ulong *******)CONCAT17(uStack_231,CONCAT25(uStack_233,CONCAT14(uStack_234,auStack_238)))
      ;
      pppppppuVar32 = (ulong *******)CONCAT44(uStack_22c,auStack_230);
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_1e3 = 0;
      uStack_1e2 = 0;
      uStack_1e1 = 0;
      bStack_1e0 = 0;
      uStack_1df = 0;
      uStack_1de = 0;
      uStack_1dc = 0;
      uStack_1db = 0;
      uStack_1da = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1d2 = 0;
      uStack_1d1 = 0;
      if ((long)pppppppuVar32 - (long)pppppppuVar30 != 0) {
        uVar31 = (long)pppppppuVar32 - (long)pppppppuVar30 >> 5;
        _auStack_230 = pppppppuVar32;
        if (0xfffffffffffffff < uVar31) goto LAB_09dc66b4;
        lVar51 = (long)pppppppuVar32 - (long)pppppppuVar30 >> 1;
        pppppppuVar62 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
        if (pppppppuVar62 == (ulong *******)0x0) {
          FUN_0eec74c0(lVar51,0);
        }
        pppppppuVar60 = pppppppuVar62 + uVar31 * 2;
        uStack_1e8 = (uint)pppppppuVar62;
        uStack_1e4 = (undefined1)((ulong)pppppppuVar62 >> 0x20);
        uStack_1e3 = (undefined1)((ulong)pppppppuVar62 >> 0x28);
        uStack_1e2 = (undefined1)((ulong)pppppppuVar62 >> 0x30);
        uStack_1e1 = (undefined1)((ulong)pppppppuVar62 >> 0x38);
        bStack_1e0 = (byte)pppppppuVar62;
        uStack_1df = (undefined1)((ulong)pppppppuVar62 >> 8);
        uStack_1de = (undefined2)((ulong)pppppppuVar62 >> 0x10);
        uStack_1da = (undefined2)((ulong)pppppppuVar62 >> 0x30);
        uStack_1d8 = (uint)pppppppuVar60;
        uStack_1d4 = (undefined2)((ulong)pppppppuVar60 >> 0x20);
        uStack_1d2 = (undefined1)((ulong)pppppppuVar60 >> 0x30);
        uStack_1d1 = (undefined1)((ulong)pppppppuVar60 >> 0x38);
        plStack_f0 = (long *)0x7ffffffffffffff0;
        pppppppuStack_280 = pppppppuVar62;
        uStack_1dc = uStack_1e4;
        uStack_1db = uStack_1e3;
        pppppppuStack_f8 = pppppppuVar32;
        do {
          bVar68 = (*(byte *)pppppppuVar30 & 1) != 0;
          ppppppuVar37 = (ulong ******)((long)pppppppuVar30 + 1);
          if (bVar68) {
            ppppppuVar37 = pppppppuVar30[2];
          }
          ppppppuVar41 = (ulong ******)(ulong)(*(byte *)pppppppuVar30 >> 1);
          if (bVar68) {
            ppppppuVar41 = pppppppuVar30[1];
          }
          if (ppppppuVar41 != (ulong ******)0x0) {
            ppppppuVar45 = (ulong ******)0x0;
            do {
              if ((byte)(*(byte *)((long)ppppppuVar37 + (long)ppppppuVar45) + 0xbf) < 0x1a) {
                auStack_258 = SUB84(ppppppuVar37,0);
                uStack_254 = (undefined1)((ulong)ppppppuVar37 >> 0x20);
                bStack_253 = (byte)((ulong)ppppppuVar37 >> 0x28);
                uStack_252 = (undefined1)((ulong)ppppppuVar37 >> 0x30);
                uStack_251 = (undefined1)((ulong)ppppppuVar37 >> 0x38);
                func_0x09da9330(1,3,9,&UNK_01438330,auStack_258);
                goto LAB_09dc1964;
              }
              ppppppuVar45 = (ulong ******)((long)ppppppuVar45 + 1);
            } while (ppppppuVar41 != ppppppuVar45);
          }
          func_0x09d9bd50(auStack_258,pppppppuVar35,pppppppuVar30);
          pppppppuVar34 = (ulong *******)((long)(int)auStack_258 & 0xffffffffe00fffff);
          pppppppuVar43 = (ulong *******)(long)*(int *)(pppppppuVar30 + 3);
          if (pppppppuVar62 < pppppppuVar60) {
            *pppppppuVar62 = (ulong ******)pppppppuVar34;
            pppppppuVar62[1] = (ulong ******)pppppppuVar43;
            pppppppuVar62 = pppppppuVar62 + 2;
            pppppppuVar34 = pppppppuStack_280;
          }
          else {
            lVar51 = (long)pppppppuVar62 - (long)pppppppuStack_280;
            uVar31 = (lVar51 >> 4) + 1;
            uStack_240 = pppppppuVar60;
            pppppppuStack_218 = pppppppuVar43;
            pppppppuStack_210 = pppppppuVar34;
            if (0xfffffffffffffff < uVar31) goto LAB_09dc647f;
            plVar28 = (long *)((long)pppppppuVar60 - (long)pppppppuStack_280);
            uVar54 = (long)plVar28 >> 3;
            if ((ulong)((long)plVar28 >> 3) <= uVar31) {
              uVar54 = uVar31;
            }
            if (plStack_f0 <= plVar28) {
              uVar54 = 0xfffffffffffffff;
            }
            if (0xfffffffffffffff < uVar54) goto LAB_09dc647a;
            lVar29 = uVar54 * 0x10;
            lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar29);
            if (lVar50 == 0) {
              FUN_0eec74c0(lVar29,0);
            }
            pppppppuVar60 = (ulong *******)(lVar29 + lVar50);
            *(ulong ********)(lVar50 + lVar51) = pppppppuStack_210;
            *(ulong ********)(lVar50 + 8 + lVar51) = pppppppuStack_218;
            pppppppuVar62 = (ulong *******)(lVar50 + lVar51 + 0x10);
            pppppppuVar34 = (ulong *******)(lVar51 + lVar50 + (lVar51 >> 4) * -0x10);
            func_0x0eee2f00(pppppppuVar34,pppppppuStack_280);
            uStack_1e8 = (uint)pppppppuVar34;
            uStack_1e4 = (undefined1)((ulong)pppppppuVar34 >> 0x20);
            uStack_1e3 = (undefined1)((ulong)pppppppuVar34 >> 0x28);
            uStack_1e2 = (undefined1)((ulong)pppppppuVar34 >> 0x30);
            uStack_1e1 = (undefined1)((ulong)pppppppuVar34 >> 0x38);
            bStack_1e0 = (byte)pppppppuVar62;
            uStack_1df = (undefined1)((ulong)pppppppuVar62 >> 8);
            uStack_1de = (undefined2)((ulong)pppppppuVar62 >> 0x10);
            uStack_1dc = (undefined1)((ulong)pppppppuVar62 >> 0x20);
            uStack_1db = (undefined1)((ulong)pppppppuVar62 >> 0x28);
            uStack_1da = (undefined2)((ulong)pppppppuVar62 >> 0x30);
            pppppppuVar32 = pppppppuStack_f8;
            pppppppuVar35 = pppppppuStack_160;
            if (pppppppuStack_280 != (ulong *******)0x0) {
              func_0x0412a280(pppppppuStack_280,plVar28);
              pppppppuVar32 = pppppppuStack_f8;
              pppppppuVar35 = pppppppuStack_160;
            }
          }
          pppppppuStack_280 = pppppppuVar34;
          bStack_1e0 = (byte)pppppppuVar62;
          uStack_1df = (undefined1)((ulong)pppppppuVar62 >> 8);
          uStack_1de = (undefined2)((ulong)pppppppuVar62 >> 0x10);
          uStack_1dc = (undefined1)((ulong)pppppppuVar62 >> 0x20);
          uStack_1db = (undefined1)((ulong)pppppppuVar62 >> 0x28);
          uStack_1da = (undefined2)((ulong)pppppppuVar62 >> 0x30);
LAB_09dc1964:
          pppppppuVar30 = pppppppuVar30 + 4;
        } while (pppppppuVar30 != pppppppuVar32);
        pppppppuVar32 =
             (ulong *******)
             CONCAT17(uStack_1e1,
                      CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
        uStack_1d8 = (uint)pppppppuVar60;
        uStack_1d4 = (undefined2)((ulong)pppppppuVar60 >> 0x20);
        uStack_1d2 = (undefined1)((ulong)pppppppuVar60 >> 0x30);
        uStack_1d1 = (undefined1)((ulong)pppppppuVar60 >> 0x38);
        if (pppppppuVar32 != pppppppuVar62) {
          func_0x09da7ba0(pppppppuVar35,*(undefined4 *)(pppppppuStack_50 + 7),&uStack_1e8);
        }
        if (pppppppuVar32 != (ulong *******)0x0) {
          func_0x0412a280(pppppppuVar32,(long)pppppppuVar60 - (long)pppppppuVar32);
        }
      }
      func_0x0eeb81b0(auStack_278);
    }
    if ((bStack_138 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_124,CONCAT13(uStack_125,CONCAT21(uStack_127,uStack_12b._3_1_))
                              ),
                      CONCAT35((uint3)uStack_133,CONCAT41(uStack_137,bStack_138)) &
                      0xfffffffffffffffe);
    }
    bStack_138 = 0;
    uStack_137 = 0;
    uStack_133 = 0;
    uStack_12f = 0;
    uStack_12b = 0;
    uStack_127 = 0;
    uStack_125 = 0;
    uStack_124 = 0;
    uStack_1e8 = 0xf2813e0;
    uStack_1e4 = 0;
    uStack_1e3 = 0;
    uStack_1e2 = 0;
    uStack_1e1 = 0;
    bStack_1e0 = (byte)&bStack_138;
    uStack_1df = (undefined1)((ulong)&bStack_138 >> 8);
    uStack_1de = (undefined2)((ulong)&bStack_138 >> 0x10);
    uStack_1dc = (undefined1)((ulong)&bStack_138 >> 0x20);
    uStack_1db = (undefined1)((ulong)&bStack_138 >> 0x28);
    uStack_1da = (undefined2)((ulong)&bStack_138 >> 0x30);
    ppppppuStack_1c8 = (ulong ******)&uStack_1e8;
    func_0x0b055aa0(pppppppuStack_b8,uStack_38,&uStack_1e8);
    if (ppppppuStack_1c8 == (ulong ******)&uStack_1e8) {
      lVar51 = 0x20;
LAB_09dc1c2d:
      (**(code **)((long)*ppppppuStack_1c8 + lVar51))();
    }
    else {
      lVar51 = 0x28;
      if (ppppppuStack_1c8 != (ulong ******)0x0) goto LAB_09dc1c2d;
    }
    auStack_258 = (undefined1  [4])0x746e4514;
    uStack_254 = 0x69;
    bStack_253 = 0x74;
    uStack_252 = 0x79;
    uStack_251 = 0x54;
    uStack_250 = 0x79;
    uStack_24f = 0x6570;
    uStack_24d = 0;
    pppppppuVar35 = (ulong *******)CONCAT35((uint3)uStack_133,CONCAT41(uStack_137,bStack_138));
    pppppppuVar32 =
         (ulong *******)CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,uStack_133._3_1_));
    auStack_278 = (undefined1  [4])0x0;
    uStack_274 = 0;
    _auStack_278 = (ulong *******)0x0;
    uStack_270 = 0;
    uStack_26f = 0;
    uStack_26d = 0;
    uStack_26c = 0;
    pppppppuStack_268 = (ulong *******)0x0;
    lVar51 = (long)pppppppuVar32 - (long)pppppppuVar35;
    if (lVar51 != 0) {
      if (lVar51 < 0) goto LAB_09dc6694;
      pppppppuVar30 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
      if (pppppppuVar30 == (ulong *******)0x0) {
        FUN_0eec74c0(lVar51,0);
      }
      pppppppuStack_268 = (ulong *******)(lVar51 + (long)pppppppuVar30);
      uStack_274 = (uint)((ulong)pppppppuVar30 >> 0x20);
      uStack_270 = SUB81(pppppppuVar30,0);
      uStack_26f = (undefined2)((ulong)pppppppuVar30 >> 8);
      uStack_26d = (undefined1)((ulong)pppppppuVar30 >> 0x18);
      uStack_26c = uStack_274;
      pppppppuStack_218 = pppppppuVar32;
      _auStack_278 = pppppppuVar30;
      do {
        pppppppuVar62 = (ulong *******)pppppppuVar35[3];
        if (((ulong)*pppppppuVar35 & 1) == 0) {
          ppppppuVar37 = pppppppuVar35[2];
          uStack_1d8 = (uint)ppppppuVar37;
          uStack_1d4 = (undefined2)((ulong)ppppppuVar37 >> 0x20);
          uStack_1d2 = (undefined1)((ulong)ppppppuVar37 >> 0x30);
          uStack_1d1 = (undefined1)((ulong)ppppppuVar37 >> 0x38);
          uStack_1e8 = *(uint *)pppppppuVar35;
          uVar7 = *(undefined4 *)((long)pppppppuVar35 + 4);
          uVar8 = *(undefined4 *)(pppppppuVar35 + 1);
          uVar9 = *(undefined4 *)((long)pppppppuVar35 + 0xc);
          uStack_1e4 = (undefined1)uVar7;
          uStack_1e3 = (undefined1)((uint)uVar7 >> 8);
          uStack_1e2 = (undefined1)((uint)uVar7 >> 0x10);
          uStack_1e1 = (undefined1)((uint)uVar7 >> 0x18);
          bStack_1e0 = (byte)uVar8;
          uStack_1df = (undefined1)((uint)uVar8 >> 8);
          uStack_1de = (undefined2)((uint)uVar8 >> 0x10);
          uStack_1dc = (undefined1)uVar9;
          uStack_1db = (undefined1)((uint)uVar9 >> 8);
          uStack_1da = (undefined2)((uint)uVar9 >> 0x10);
        }
        else {
          func_0x0412e5e0(&uStack_1e8,pppppppuVar35[2],pppppppuVar35[1]);
        }
        pppppppuStack_1d0 = pppppppuVar62;
        if (pppppppuVar30 < pppppppuStack_268) {
          pppppppuVar30[2] =
               (ulong ******)
               CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)));
          *pppppppuVar30 =
               (ulong ******)
               CONCAT17(uStack_1e1,
                        CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
          pppppppuVar30[1] =
               (ulong ******)
               CONCAT26(uStack_1da,
                        CONCAT15(uStack_1db,
                                 CONCAT14(uStack_1dc,
                                          CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))));
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1e3 = 0;
          uStack_1e2 = 0;
          uStack_1e1 = 0;
          bStack_1e0 = 0;
          uStack_1df = 0;
          uStack_1de = 0;
          uStack_1dc = 0;
          uStack_1db = 0;
          uStack_1da = 0;
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1d2 = 0;
          uStack_1d1 = 0;
          pppppppuVar30[3] = (ulong ******)pppppppuVar62;
          pppppppuVar30 = pppppppuVar30 + 4;
          uStack_270 = SUB81(pppppppuVar30,0);
          uStack_26f = (undefined2)((ulong)pppppppuVar30 >> 8);
          uStack_26d = (undefined1)((ulong)pppppppuVar30 >> 0x18);
          uStack_26c = (uint)((ulong)pppppppuVar30 >> 0x20);
        }
        else {
          lVar51 = (long)pppppppuVar30 - (long)_auStack_278;
          uVar31 = (lVar51 >> 5) + 1;
          if (0x7ffffffffffffff < uVar31) goto LAB_09dc640e;
          pppppppuStack_210 = (ulong *******)((long)pppppppuStack_268 - (long)_auStack_278);
          uVar54 = (long)pppppppuStack_210 >> 4;
          if ((ulong)((long)pppppppuStack_210 >> 4) <= uVar31) {
            uVar54 = uVar31;
          }
          if ((ulong *******)0x7fffffffffffffdf < pppppppuStack_210) {
            uVar54 = 0x7ffffffffffffff;
          }
          pppppppuStack_280 = pppppppuVar62;
          uStack_240 = _auStack_278;
          if (0x7ffffffffffffff < uVar54) goto LAB_09dc6413;
          lVar29 = uVar54 * 0x20;
          lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar29);
          if (lVar50 == 0) {
            FUN_0eec74c0(lVar29,0);
          }
          pppppppuVar60 = uStack_240;
          *(ulong *)(lVar50 + 0x10 + lVar51) =
               CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)));
          *(undefined8 *)(lVar50 + lVar51) =
               CONCAT17(uStack_1e1,
                        CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
          ((undefined8 *)(lVar50 + lVar51))[1] =
               CONCAT26(uStack_1da,
                        CONCAT15(uStack_1db,
                                 CONCAT14(uStack_1dc,
                                          CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))));
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1e3 = 0;
          uStack_1e2 = 0;
          uStack_1e1 = 0;
          bStack_1e0 = 0;
          uStack_1df = 0;
          uStack_1de = 0;
          uStack_1dc = 0;
          uStack_1db = 0;
          uStack_1da = 0;
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1d2 = 0;
          uStack_1d1 = 0;
          *(ulong ********)(lVar50 + 0x18 + lVar51) = pppppppuVar62;
          pppppppuVar30 = (ulong *******)(lVar50 + lVar51 + 0x20);
          pppppppuVar62 = (ulong *******)(lVar50 + lVar51 + (lVar51 >> 5) * -0x20);
          func_0x0eee2f00(pppppppuVar62,uStack_240,lVar51);
          uVar53 = uStack_26c;
          uVar17 = uStack_26d;
          uVar15 = uStack_26f;
          uVar22 = uStack_270;
          uStack_270 = SUB81(pppppppuVar30,0);
          uVar23 = uStack_270;
          uStack_26d = (undefined1)((ulong)pppppppuVar30 >> 0x18);
          uVar18 = uStack_26d;
          uStack_26f = (undefined2)((ulong)pppppppuVar30 >> 8);
          uVar16 = uStack_26f;
          uStack_26c = (uint)((ulong)pppppppuVar30 >> 0x20);
          uVar19 = uStack_26c;
          pppppppuVar32 = pppppppuStack_218;
          uStack_270 = uVar23;
          uStack_26f = uVar16;
          uStack_26d = uVar18;
          uStack_26c = uVar19;
          pppppppuStack_268 = (ulong *******)(lVar29 + lVar50);
          _auStack_278 = pppppppuVar62;
          if (pppppppuVar60 != (ulong *******)0x0) {
            uStack_270 = uVar22;
            uStack_26f = uVar15;
            uStack_26d = uVar17;
            uStack_26c = uVar53;
            func_0x0412a280(pppppppuVar60,pppppppuStack_210);
            pppppppuVar32 = pppppppuStack_218;
            uStack_270 = uVar23;
            uStack_26f = uVar16;
            uStack_26d = uVar18;
            uStack_26c = uVar19;
            if ((uStack_1e8 & 1) != 0) {
              func_0x0412a280(CONCAT17(uStack_1d1,
                                       CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                              CONCAT17(uStack_1e1,
                                       CONCAT16(uStack_1e2,
                                                CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))
                                               )) & 0xfffffffffffffffe);
            }
          }
        }
        pppppppuVar35 = pppppppuVar35 + 4;
      } while (pppppppuVar35 != pppppppuVar32);
    }
    if (DAT_0f6036d8 == '\0') {
      iVar25 = func_0x04108328(&DAT_0f6036d8);
      if (iVar25 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f6036d0 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f6036d8);
      }
    }
    pppppppuVar30 = pppppppuStack_160;
    pppppppuStack_d8 = (ulong *******)CONCAT62(pppppppuStack_d8._2_6_,_DAT_0f6036d0);
    uStack_1e8 = 0x9dff210;
    uStack_1e4 = 0;
    uStack_1e3 = 0;
    uStack_1e2 = 0;
    uStack_1e1 = 0;
    bStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1de = 0;
    uStack_1dc = 0;
    uStack_1db = 0;
    uStack_1da = 0;
    func_0x09da7580(auStack_158,pppppppuStack_160,auStack_258,auStack_278,&pppppppuStack_d8);
    pppppppuVar35 = _auStack_278;
    if (_auStack_278 != (ulong *******)0x0) {
      for (pppppppuVar62 =
                (ulong *******)
                CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
          pppppppuVar35 != pppppppuVar62; pppppppuVar62 = pppppppuVar62 + -4) {
        if (((ulong)pppppppuVar62[-4] & 1) != 0) {
          func_0x0412a280(pppppppuVar62[-2],(ulong)pppppppuVar62[-4] & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(pppppppuVar35,(long)pppppppuStack_268 - (long)pppppppuVar35);
    }
    if (((uint)auStack_258 & 1) != 0) {
      func_0x0412a280(pppppppuStack_248,
                      CONCAT17(uStack_251,
                               CONCAT16(uStack_252,
                                        CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258)))) &
                      0xfffffffffffffffe);
    }
    auStack_158[0] = 0x24;
    auStack_158._1_4_ = _DAT_0134ac44;
    uStack_153 = _UNK_0134ac48;
    uStack_14f = _UNK_0134ac4c;
    uStack_14b = _UNK_0134ac50;
    uStack_147 = 0x726f;
    uStack_145 = 0;
    pppppppuVar35 = (ulong *******)func_0x09def6d0(pppppppuStack_40,auStack_158);
    if (pppppppuVar35 != pppppppuStack_48) {
      bVar68 = (auStack_158[0] & 1) != 0;
      puVar36 = auStack_158 + 1;
      if (bVar68) {
        puVar36 = (undefined1 *)
                  CONCAT44(uStack_144,CONCAT13(uStack_145,CONCAT21(uStack_147,uStack_14b._3_1_)));
      }
      uVar31 = (ulong)(auStack_158[0] >> 1);
      if (bVar68) {
        uVar31 = CONCAT35((undefined3)uStack_14b,CONCAT41(uStack_14f,uStack_153._3_1_));
      }
      uStack_1e8 = (uint)puVar36;
      uStack_1e4 = (undefined1)((ulong)puVar36 >> 0x20);
      uStack_1e3 = (undefined1)((ulong)puVar36 >> 0x28);
      uStack_1e2 = (undefined1)((ulong)puVar36 >> 0x30);
      uStack_1e1 = (undefined1)((ulong)puVar36 >> 0x38);
      bStack_1e0 = (byte)uVar31;
      uStack_1df = (undefined1)(uVar31 >> 8);
      uStack_1de = (undefined2)(uVar31 >> 0x10);
      uStack_1dc = (undefined1)(uVar31 >> 0x20);
      uStack_1db = (undefined1)(uVar31 >> 0x28);
      uStack_1da = (undefined2)(uVar31 >> 0x30);
      func_0x0470d9a0(auStack_258,&UNK_014d3b4b,0xf,0xd,&uStack_1e8);
      bVar68 = ((uint)auStack_258 & 1) != 0;
      pppppppuVar32 = (ulong *******)(auStack_258 + 1);
      if (bVar68) {
        pppppppuVar32 = pppppppuStack_248;
      }
      uVar31 = (ulong)(auStack_258[0] >> 1);
      if (bVar68) {
        uVar31 = CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
      }
      pppppppuStack_d8 = (ulong *******)0x0;
      pppppppuStack_b8 = pppppppuVar35;
      if (pppppppuVar32 == (ulong *******)0x0) {
        pppppppuStack_d8 = (ulong *******)((ulong)((uint)uVar31 & 0x7f) << 0x30);
      }
      else {
        lVar51 = uVar31 + 9;
        puVar33 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar51,8);
        if (lVar51 != 0 && puVar33 == (ulong *)0x0) {
          FUN_0eec74c0(lVar51,8);
        }
        *puVar33 = uVar31;
        func_0x0eee2f00(puVar33 + 1,pppppppuVar32,uVar31);
        *(undefined1 *)((long)puVar33 + uVar31 + 8) = 0;
        pppppppuStack_d8 =
             (ulong *******)((ulong)(puVar33 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      uStack_1e8 = uStack_1e8 & 0xffffff00;
      uStack_1d8 = uStack_1d8 & 0xffffff00;
      func_0x0eeb79f0(auStack_278,&pppppppuStack_d8);
      if (((ulong)pppppppuStack_d8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_d8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_d8 = (ulong *******)0x0;
      if (((uint)auStack_258 & 1) != 0) {
        func_0x0412a280(pppppppuStack_248,
                        CONCAT17(uStack_251,
                                 CONCAT16(uStack_252,
                                          CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258)))) &
                        0xfffffffffffffffe);
      }
      pppppppuVar32 = (ulong *******)CONCAT35((uint3)uStack_133,CONCAT41(uStack_137,bStack_138));
      pppppppuVar35 =
           (ulong *******)CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,uStack_133._3_1_));
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_1e3 = 0;
      uStack_1e2 = 0;
      uStack_1e1 = 0;
      bStack_1e0 = 0;
      uStack_1df = 0;
      uStack_1de = 0;
      uStack_1dc = 0;
      uStack_1db = 0;
      uStack_1da = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1d2 = 0;
      uStack_1d1 = 0;
      if ((long)pppppppuVar35 - (long)pppppppuVar32 != 0) {
        uVar31 = (long)pppppppuVar35 - (long)pppppppuVar32 >> 5;
        if (0xfffffffffffffff < uVar31) goto LAB_09dc66b9;
        lVar51 = (long)pppppppuVar35 - (long)pppppppuVar32 >> 1;
        pppppppuVar62 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
        if (pppppppuVar62 == (ulong *******)0x0) {
          FUN_0eec74c0(lVar51,0);
        }
        pppppppuVar60 = pppppppuVar62 + uVar31 * 2;
        uStack_1e8 = (uint)pppppppuVar62;
        uStack_1e4 = (undefined1)((ulong)pppppppuVar62 >> 0x20);
        uStack_1e3 = (undefined1)((ulong)pppppppuVar62 >> 0x28);
        uStack_1e2 = (undefined1)((ulong)pppppppuVar62 >> 0x30);
        uStack_1e1 = (undefined1)((ulong)pppppppuVar62 >> 0x38);
        bStack_1e0 = (byte)pppppppuVar62;
        uStack_1df = (undefined1)((ulong)pppppppuVar62 >> 8);
        uStack_1de = (undefined2)((ulong)pppppppuVar62 >> 0x10);
        uStack_1da = (undefined2)((ulong)pppppppuVar62 >> 0x30);
        uStack_1d8 = (uint)pppppppuVar60;
        uStack_1d4 = (undefined2)((ulong)pppppppuVar60 >> 0x20);
        uStack_1d2 = (undefined1)((ulong)pppppppuVar60 >> 0x30);
        uStack_1d1 = (undefined1)((ulong)pppppppuVar60 >> 0x38);
        plStack_f0 = (long *)0x7ffffffffffffff0;
        pppppppuStack_280 = pppppppuVar62;
        uStack_1dc = uStack_1e4;
        uStack_1db = uStack_1e3;
        pppppppuStack_f8 = pppppppuVar35;
        do {
          bVar68 = (*(byte *)pppppppuVar32 & 1) != 0;
          ppppppuVar37 = (ulong ******)((long)pppppppuVar32 + 1);
          if (bVar68) {
            ppppppuVar37 = pppppppuVar32[2];
          }
          ppppppuVar41 = (ulong ******)(ulong)(*(byte *)pppppppuVar32 >> 1);
          if (bVar68) {
            ppppppuVar41 = pppppppuVar32[1];
          }
          if (ppppppuVar41 != (ulong ******)0x0) {
            ppppppuVar45 = (ulong ******)0x0;
            do {
              if ((byte)(*(byte *)((long)ppppppuVar37 + (long)ppppppuVar45) + 0xbf) < 0x1a) {
                auStack_258 = SUB84(ppppppuVar37,0);
                uStack_254 = (undefined1)((ulong)ppppppuVar37 >> 0x20);
                bStack_253 = (byte)((ulong)ppppppuVar37 >> 0x28);
                uStack_252 = (undefined1)((ulong)ppppppuVar37 >> 0x30);
                uStack_251 = (undefined1)((ulong)ppppppuVar37 >> 0x38);
                func_0x09da9330(1,3,9,&UNK_01438330,auStack_258);
                goto LAB_09dc2294;
              }
              ppppppuVar45 = (ulong ******)((long)ppppppuVar45 + 1);
            } while (ppppppuVar41 != ppppppuVar45);
          }
          func_0x09d9bd50(auStack_258,pppppppuVar30,pppppppuVar32);
          pppppppuVar43 = (ulong *******)((long)(int)auStack_258 & 0xffffffffe00fffff);
          pppppppuVar34 = (ulong *******)pppppppuVar32[3];
          if (pppppppuVar62 < pppppppuVar60) {
            *pppppppuVar62 = (ulong ******)pppppppuVar43;
            pppppppuVar62[1] = (ulong ******)pppppppuVar34;
            pppppppuVar62 = pppppppuVar62 + 2;
            pppppppuVar34 = pppppppuStack_280;
          }
          else {
            lVar51 = (long)pppppppuVar62 - (long)pppppppuStack_280;
            uVar31 = (lVar51 >> 4) + 1;
            uStack_240 = pppppppuVar60;
            pppppppuStack_218 = pppppppuVar34;
            pppppppuStack_210 = pppppppuVar43;
            if (0xfffffffffffffff < uVar31) goto LAB_09dc6489;
            plVar28 = (long *)((long)pppppppuVar60 - (long)pppppppuStack_280);
            uVar54 = (long)plVar28 >> 3;
            if ((ulong)((long)plVar28 >> 3) <= uVar31) {
              uVar54 = uVar31;
            }
            if (plStack_f0 <= plVar28) {
              uVar54 = 0xfffffffffffffff;
            }
            if (0xfffffffffffffff < uVar54) goto LAB_09dc6484;
            lVar29 = uVar54 * 0x10;
            lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar29);
            if (lVar50 == 0) {
              FUN_0eec74c0(lVar29,0);
            }
            pppppppuVar60 = (ulong *******)(lVar29 + lVar50);
            *(ulong ********)(lVar50 + lVar51) = pppppppuStack_210;
            *(ulong ********)(lVar50 + 8 + lVar51) = pppppppuStack_218;
            pppppppuVar62 = (ulong *******)(lVar50 + lVar51 + 0x10);
            pppppppuVar34 = (ulong *******)(lVar51 + lVar50 + (lVar51 >> 4) * -0x10);
            func_0x0eee2f00(pppppppuVar34,pppppppuStack_280);
            uStack_1e8 = (uint)pppppppuVar34;
            uStack_1e4 = (undefined1)((ulong)pppppppuVar34 >> 0x20);
            uStack_1e3 = (undefined1)((ulong)pppppppuVar34 >> 0x28);
            uStack_1e2 = (undefined1)((ulong)pppppppuVar34 >> 0x30);
            uStack_1e1 = (undefined1)((ulong)pppppppuVar34 >> 0x38);
            bStack_1e0 = (byte)pppppppuVar62;
            uStack_1df = (undefined1)((ulong)pppppppuVar62 >> 8);
            uStack_1de = (undefined2)((ulong)pppppppuVar62 >> 0x10);
            uStack_1dc = (undefined1)((ulong)pppppppuVar62 >> 0x20);
            uStack_1db = (undefined1)((ulong)pppppppuVar62 >> 0x28);
            uStack_1da = (undefined2)((ulong)pppppppuVar62 >> 0x30);
            pppppppuVar30 = pppppppuStack_160;
            pppppppuVar35 = pppppppuStack_f8;
            if (pppppppuStack_280 != (ulong *******)0x0) {
              func_0x0412a280(pppppppuStack_280,plVar28);
              pppppppuVar30 = pppppppuStack_160;
              pppppppuVar35 = pppppppuStack_f8;
            }
          }
          pppppppuStack_280 = pppppppuVar34;
          bStack_1e0 = (byte)pppppppuVar62;
          uStack_1df = (undefined1)((ulong)pppppppuVar62 >> 8);
          uStack_1de = (undefined2)((ulong)pppppppuVar62 >> 0x10);
          uStack_1dc = (undefined1)((ulong)pppppppuVar62 >> 0x20);
          uStack_1db = (undefined1)((ulong)pppppppuVar62 >> 0x28);
          uStack_1da = (undefined2)((ulong)pppppppuVar62 >> 0x30);
LAB_09dc2294:
          pppppppuVar32 = pppppppuVar32 + 4;
        } while (pppppppuVar32 != pppppppuVar35);
        pppppppuVar35 =
             (ulong *******)
             CONCAT17(uStack_1e1,
                      CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
        uStack_1d8 = (uint)pppppppuVar60;
        uStack_1d4 = (undefined2)((ulong)pppppppuVar60 >> 0x20);
        uStack_1d2 = (undefined1)((ulong)pppppppuVar60 >> 0x30);
        uStack_1d1 = (undefined1)((ulong)pppppppuVar60 >> 0x38);
        if (pppppppuVar35 != pppppppuVar62) {
          func_0x09da7ba0(pppppppuVar30,*(undefined4 *)(pppppppuStack_b8 + 7),&uStack_1e8);
        }
        if (pppppppuVar35 != (ulong *******)0x0) {
          func_0x0412a280(pppppppuVar35,(long)pppppppuVar60 - (long)pppppppuVar35);
        }
      }
      func_0x0eeb81b0(auStack_278);
    }
    if ((auStack_158[0] & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_144,CONCAT13(uStack_145,CONCAT21(uStack_147,uStack_14b._3_1_))
                              ),
                      CONCAT35((undefined3)uStack_153,CONCAT41(auStack_158._1_4_,auStack_158[0])) &
                      0xfffffffffffffffe);
    }
    uVar7 = uStack_137;
    bVar24 = bStack_138;
    uVar20 = (uint3)uStack_133;
    lVar51 = CONCAT35((uint3)uStack_133,CONCAT41(uStack_137,bStack_138));
    if (lVar51 != 0) {
      lVar50 = CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,uStack_133._3_1_));
      if (lVar51 != lVar50) {
        do {
          if ((*(byte *)(lVar50 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar50 + -0x10),
                            *(ulong *)(lVar50 + -0x20) & 0xfffffffffffffffe);
          }
          lVar50 = lVar50 + -0x20;
        } while (lVar50 != lVar51);
        lVar51 = CONCAT35((uint3)uStack_133,CONCAT41(uStack_137,bStack_138));
      }
      uStack_133 = CONCAT13(bVar24,(uint3)uStack_133);
      uStack_12f = uVar7;
      uStack_12b = CONCAT13(uStack_12b._3_1_,uVar20);
      func_0x0412a280(lVar51,CONCAT44(uStack_124,
                                      CONCAT13(uStack_125,CONCAT21(uStack_127,uStack_12b._3_1_))) -
                             lVar51);
    }
    lVar51 = CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT14(uStack_204,uStack_208)));
    if (lVar51 != 0) {
      uStack_200 = (undefined1)uStack_208;
      uStack_1ff = (undefined4)(CONCAT14(uStack_204,uStack_208) >> 8);
      uStack_1fb = uStack_203;
      uStack_1f9 = uStack_201;
      func_0x0412a280(lVar51,CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8)) - lVar51);
    }
    auVar14 = auStack_238;
    lVar51 = CONCAT17(uStack_231,CONCAT25(uStack_233,CONCAT14(uStack_234,auStack_238)));
    if (lVar51 != 0) {
      lVar50 = CONCAT44(uStack_22c,auStack_230);
      lVar29 = lVar51;
      if (lVar51 != lVar50) {
        do {
          if ((*(byte *)(lVar50 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar50 + -0x10),
                            *(ulong *)(lVar50 + -0x20) & 0xfffffffffffffffe);
          }
          lVar50 = lVar50 + -0x20;
        } while (lVar50 != lVar51);
        lVar29 = CONCAT17(uStack_231,CONCAT25(uStack_233,CONCAT14(uStack_234,auStack_238)));
      }
      auStack_230 = auVar14;
      uStack_22c = (uint)((ulong)lVar51 >> 0x20);
      func_0x0412a280(lVar29,CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228)) - lVar29);
    }
    pppppppuStack_f8 = *(ulong ********)(lStack_e8 + 0x10);
    auStack_238 = (undefined1  [4])0x0;
    uStack_234 = 0;
    uStack_233 = 0;
    uStack_231 = 0;
    auStack_230 = (undefined1  [4])0x0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_227 = 0;
    uStack_226 = 0;
    lVar51 = (**(code **)(*plStack_b0 + 0xe8))();
    plVar28 = *(long **)(lVar51 + 0x10);
    if (plVar28 == (long *)0x0) {
      pppppppuVar62 = (ulong *******)0x0;
      pppppppuVar60 = (ulong *******)0x0;
LAB_09dc28ac:
      uStack_208 = CONCAT31((int3)_DAT_011f7fdb,0x2c);
      uStack_204 = (undefined1)((uint)_DAT_011f7fdb >> 0x18);
      uStack_203 = (undefined2)_UNK_011f7fdf;
      uStack_201 = (undefined1)((uint)_UNK_011f7fdf >> 0x10);
      uStack_200 = (undefined1)((uint)_UNK_011f7fdf >> 0x18);
      uStack_1ff = _UNK_011f7fe3;
      uStack_1fb = (undefined2)_UNK_011f7fe7;
      uStack_1f9 = 0x53;
      uStack_1f8 = 0x65;
      uStack_1f7 = 0x726f7463656c;
      uStack_1f1 = 0;
      pppppppuVar35 = (ulong *******)func_0x09def6d0(pppppppuStack_f8 + 0x28,&uStack_208);
      if (pppppppuVar35 != pppppppuStack_f8 + 0x29) {
        bVar68 = (uStack_208 & 1) != 0;
        lVar51 = (long)&uStack_208 + 1;
        if (bVar68) {
          lVar51 = CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8));
        }
        uVar31 = (ulong)((byte)uStack_208 >> 1);
        if (bVar68) {
          uVar31 = CONCAT17(uStack_1f9,CONCAT25(uStack_1fb,CONCAT41(uStack_1ff,uStack_200)));
        }
        uStack_1e8 = (uint)lVar51;
        uStack_1e4 = (undefined1)((ulong)lVar51 >> 0x20);
        uStack_1e3 = (undefined1)((ulong)lVar51 >> 0x28);
        uStack_1e2 = (undefined1)((ulong)lVar51 >> 0x30);
        uStack_1e1 = (undefined1)((ulong)lVar51 >> 0x38);
        bStack_1e0 = (byte)uVar31;
        uStack_1df = (undefined1)(uVar31 >> 8);
        uStack_1de = (undefined2)(uVar31 >> 0x10);
        uStack_1dc = (undefined1)(uVar31 >> 0x20);
        uStack_1db = (undefined1)(uVar31 >> 0x28);
        uStack_1da = (undefined2)(uVar31 >> 0x30);
        func_0x0470d9a0(auStack_258,&UNK_014d3b4b,0xf,0xd,&uStack_1e8);
        bVar68 = ((uint)auStack_258 & 1) != 0;
        pppppppuVar30 = (ulong *******)(auStack_258 + 1);
        if (bVar68) {
          pppppppuVar30 = pppppppuStack_248;
        }
        uVar31 = (ulong)(auStack_258[0] >> 1);
        if (bVar68) {
          uVar31 = CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
        }
        ppppppplStack_118 = (long *******)0x0;
        uStack_240 = pppppppuVar60;
        pppppppuStack_b8 = pppppppuVar35;
        if (pppppppuVar30 == (ulong *******)0x0) {
          ppppppplStack_118 = (long *******)((ulong)((uint)uVar31 & 0x7f) << 0x30);
        }
        else {
          lVar51 = uVar31 + 9;
          puVar33 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar51,8);
          if (lVar51 != 0 && puVar33 == (ulong *)0x0) {
            FUN_0eec74c0(lVar51,8);
          }
          *puVar33 = uVar31;
          func_0x0eee2f00(puVar33 + 1,pppppppuVar30,uVar31);
          *(undefined1 *)((long)puVar33 + uVar31 + 8) = 0;
          ppppppplStack_118 =
               (long *******)((ulong)(puVar33 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        uStack_1e8 = uStack_1e8 & 0xffffff00;
        uStack_1d8 = uStack_1d8 & 0xffffff00;
        func_0x0eeb79f0(auStack_278,&ppppppplStack_118);
        pppppppuVar35 = uStack_240;
        if (((ulong)ppppppplStack_118 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppppplStack_118 & 0xff00ffffffffffff) - 8);
        }
        ppppppplStack_118 = (long *******)0x0;
        if (((uint)auStack_258 & 1) != 0) {
          func_0x0412a280(pppppppuStack_248,
                          CONCAT17(uStack_251,
                                   CONCAT16(uStack_252,
                                            CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258))))
                          & 0xfffffffffffffffe);
        }
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e1 = 0;
        bStack_1e0 = 0;
        uStack_1df = 0;
        uStack_1de = 0;
        uStack_1dc = 0;
        uStack_1db = 0;
        uStack_1da = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1d2 = 0;
        uStack_1d1 = 0;
        if ((long)pppppppuVar35 - (long)pppppppuVar62 != 0) {
          uVar31 = (long)pppppppuVar35 - (long)pppppppuVar62 >> 5;
          if (0xfffffffffffffff < uVar31) goto LAB_09dc66be;
          lVar51 = (long)pppppppuVar35 - (long)pppppppuVar62 >> 1;
          pppppppuVar32 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
          if (pppppppuVar32 == (ulong *******)0x0) {
            FUN_0eec74c0(lVar51,0);
          }
          pppppppuVar30 = pppppppuVar32 + uVar31 * 2;
          uStack_1e8 = (uint)pppppppuVar32;
          uStack_1e4 = (undefined1)((ulong)pppppppuVar32 >> 0x20);
          uStack_1e3 = (undefined1)((ulong)pppppppuVar32 >> 0x28);
          uStack_1e2 = (undefined1)((ulong)pppppppuVar32 >> 0x30);
          uStack_1e1 = (undefined1)((ulong)pppppppuVar32 >> 0x38);
          bStack_1e0 = (byte)pppppppuVar32;
          uStack_1df = (undefined1)((ulong)pppppppuVar32 >> 8);
          uStack_1de = (undefined2)((ulong)pppppppuVar32 >> 0x10);
          uStack_1da = (undefined2)((ulong)pppppppuVar32 >> 0x30);
          uStack_1d8 = (uint)pppppppuVar30;
          uStack_1d4 = (undefined2)((ulong)pppppppuVar30 >> 0x20);
          uStack_1d2 = (undefined1)((ulong)pppppppuVar30 >> 0x30);
          uStack_1d1 = (undefined1)((ulong)pppppppuVar30 >> 0x38);
          plStack_f0 = (long *)0x7ffffffffffffff0;
          pppppppuStack_280 = pppppppuVar32;
          uStack_1dc = uStack_1e4;
          uStack_1db = uStack_1e3;
          do {
            bVar68 = (*(byte *)pppppppuVar62 & 1) != 0;
            ppppppuVar37 = (ulong ******)((long)pppppppuVar62 + 1);
            if (bVar68) {
              ppppppuVar37 = pppppppuVar62[2];
            }
            ppppppuVar41 = (ulong ******)(ulong)(*(byte *)pppppppuVar62 >> 1);
            if (bVar68) {
              ppppppuVar41 = pppppppuVar62[1];
            }
            if (ppppppuVar41 != (ulong ******)0x0) {
              ppppppuVar45 = (ulong ******)0x0;
              do {
                if ((byte)(*(byte *)((long)ppppppuVar37 + (long)ppppppuVar45) + 0xbf) < 0x1a) {
                  auStack_258 = SUB84(ppppppuVar37,0);
                  uStack_254 = (undefined1)((ulong)ppppppuVar37 >> 0x20);
                  bStack_253 = (byte)((ulong)ppppppuVar37 >> 0x28);
                  uStack_252 = (undefined1)((ulong)ppppppuVar37 >> 0x30);
                  uStack_251 = (undefined1)((ulong)ppppppuVar37 >> 0x38);
                  func_0x09da9330(1,3,9,&UNK_01438330,auStack_258);
                  goto LAB_09dc2b83;
                }
                ppppppuVar45 = (ulong ******)((long)ppppppuVar45 + 1);
              } while (ppppppuVar41 != ppppppuVar45);
            }
            func_0x09d9bd50(auStack_258,pppppppuStack_f8,pppppppuVar62);
            uVar31 = (ulong)(int)auStack_258;
            pppppppuVar60 = (ulong *******)pppppppuVar62[3];
            if (pppppppuVar32 < pppppppuVar30) {
              *pppppppuVar32 = (ulong ******)(uVar31 & 0xffffffffe00fffff);
              pppppppuVar32[1] = (ulong ******)pppppppuVar60;
              pppppppuVar32 = pppppppuVar32 + 2;
              pppppppuVar60 = pppppppuStack_280;
            }
            else {
              lVar51 = (long)pppppppuVar32 - (long)pppppppuStack_280;
              uVar54 = (lVar51 >> 4) + 1;
              pppppppuStack_218 = pppppppuVar30;
              pppppppuStack_210 = pppppppuVar62;
              pppppppuStack_160 = pppppppuVar60;
              if (0xfffffffffffffff < uVar54) goto LAB_09dc6493;
              plVar28 = (long *)((long)pppppppuVar30 - (long)pppppppuStack_280);
              uVar55 = (long)plVar28 >> 3;
              if ((ulong)((long)plVar28 >> 3) <= uVar54) {
                uVar55 = uVar54;
              }
              if (plStack_f0 <= plVar28) {
                uVar55 = 0xfffffffffffffff;
              }
              if (0xfffffffffffffff < uVar55) goto LAB_09dc648e;
              lVar29 = uVar55 * 0x10;
              lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar29);
              if (lVar50 == 0) {
                FUN_0eec74c0(lVar29,0);
              }
              pppppppuVar30 = (ulong *******)(lVar29 + lVar50);
              *(ulong *******)(lVar50 + lVar51) = (ulong ******)(uVar31 & 0xffffffffe00fffff);
              *(ulong ********)(lVar50 + 8 + lVar51) = pppppppuStack_160;
              pppppppuVar32 = (ulong *******)(lVar50 + lVar51 + 0x10);
              pppppppuVar60 = (ulong *******)(lVar51 + lVar50 + (lVar51 >> 4) * -0x10);
              func_0x0eee2f00(pppppppuVar60,pppppppuStack_280);
              uStack_1e8 = (uint)pppppppuVar60;
              uStack_1e4 = (undefined1)((ulong)pppppppuVar60 >> 0x20);
              uStack_1e3 = (undefined1)((ulong)pppppppuVar60 >> 0x28);
              uStack_1e2 = (undefined1)((ulong)pppppppuVar60 >> 0x30);
              uStack_1e1 = (undefined1)((ulong)pppppppuVar60 >> 0x38);
              bStack_1e0 = (byte)pppppppuVar32;
              uStack_1df = (undefined1)((ulong)pppppppuVar32 >> 8);
              uStack_1de = (undefined2)((ulong)pppppppuVar32 >> 0x10);
              uStack_1dc = (undefined1)((ulong)pppppppuVar32 >> 0x20);
              uStack_1db = (undefined1)((ulong)pppppppuVar32 >> 0x28);
              uStack_1da = (undefined2)((ulong)pppppppuVar32 >> 0x30);
              pppppppuVar35 = uStack_240;
              pppppppuVar62 = pppppppuStack_210;
              if (pppppppuStack_280 != (ulong *******)0x0) {
                func_0x0412a280(pppppppuStack_280,plVar28);
                pppppppuVar35 = uStack_240;
                pppppppuVar62 = pppppppuStack_210;
              }
            }
            pppppppuStack_280 = pppppppuVar60;
            bStack_1e0 = (byte)pppppppuVar32;
            uStack_1df = (undefined1)((ulong)pppppppuVar32 >> 8);
            uStack_1de = (undefined2)((ulong)pppppppuVar32 >> 0x10);
            uStack_1dc = (undefined1)((ulong)pppppppuVar32 >> 0x20);
            uStack_1db = (undefined1)((ulong)pppppppuVar32 >> 0x28);
            uStack_1da = (undefined2)((ulong)pppppppuVar32 >> 0x30);
LAB_09dc2b83:
            pppppppuVar62 = pppppppuVar62 + 4;
          } while (pppppppuVar62 != pppppppuVar35);
          pppppppuVar35 =
               (ulong *******)
               CONCAT17(uStack_1e1,
                        CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
          uStack_1d8 = (uint)pppppppuVar30;
          uStack_1d4 = (undefined2)((ulong)pppppppuVar30 >> 0x20);
          uStack_1d2 = (undefined1)((ulong)pppppppuVar30 >> 0x30);
          uStack_1d1 = (undefined1)((ulong)pppppppuVar30 >> 0x38);
          if (pppppppuVar35 != pppppppuVar32) {
            func_0x09da7ba0(pppppppuStack_f8,*(undefined4 *)(pppppppuStack_b8 + 7),&uStack_1e8);
          }
          if (pppppppuVar35 != (ulong *******)0x0) {
            func_0x0412a280(pppppppuVar35,(long)pppppppuVar30 - (long)pppppppuVar35);
          }
        }
        func_0x0eeb81b0(auStack_278);
      }
      if ((uStack_208 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8)),
                        CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT14(uStack_204,uStack_208))) &
                        0xfffffffffffffffe);
      }
      pppppppuVar32 =
           (ulong *******)CONCAT17(uStack_231,CONCAT25(uStack_233,CONCAT14(uStack_234,auStack_238)))
      ;
      pppppppuVar35 = _auStack_230;
      if (pppppppuVar32 != (ulong *******)0x0) {
        for (; pppppppuVar32 != pppppppuVar35; pppppppuVar35 = pppppppuVar35 + -4) {
          if (((ulong)pppppppuVar35[-4] & 1) != 0) {
            func_0x0412a280(pppppppuVar35[-2],(ulong)pppppppuVar35[-4] & 0xfffffffffffffffe);
          }
        }
        func_0x0412a280(pppppppuVar32,
                        CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228)) - (long)pppppppuVar32);
      }
      pppppppuStack_280 = (ulong *******)*plStack_58;
      pppppppuVar32 = (ulong *******)plStack_58[1];
      if (pppppppuVar32 != (ulong *******)0x0) {
        LOCK();
        pppppppuVar32[2] = (ulong ******)((long)pppppppuVar32[2] + 1);
        UNLOCK();
      }
      plStack_f0 = *(long **)(lStack_e8 + 0x10);
      uStack_208 = 0;
      uStack_204 = 0;
      uStack_203 = 0;
      uStack_201 = 0;
      uStack_200 = 0;
      uStack_1ff = 0;
      uStack_1fb = 0;
      uStack_1f9 = 0;
      uStack_1f8 = 0;
      uStack_1f7 = 0;
      uStack_1f1 = 0;
      ppppppplStack_118 = (long *******)&ppppppplStack_110;
      ppppppplStack_110 = (long *******)0x0;
      pppppppuStack_108 = (ulong *******)0x0;
      lVar51 = (long)&uStack_133 + 3;
      uStack_12f = 0;
      uStack_12b = 0;
      uStack_127 = 0;
      uStack_125 = 0;
      uStack_124 = 0;
      bStack_138 = (byte)lVar51;
      uStack_137 = (undefined4)((ulong)lVar51 >> 8);
      uStack_133._0_3_ = (uint3)((ulong)lVar51 >> 0x28);
      uStack_133 = (uint)(uint3)uStack_133;
      auStack_158[0] = 0;
      auStack_158._1_4_ = 0;
      uStack_153 = 0;
      uStack_14f = 0;
      uStack_14b = 0;
      uStack_147 = 0;
      uStack_145 = 0;
      uStack_144 = 0;
      pppppppuStack_160 = pppppppuVar32;
      pppppppuStack_a8 = pppppppuStack_280;
      pppppppuStack_a0 = pppppppuVar32;
      func_0x0ca16370(auStack_278,&pppppppuStack_a8);
      if ((_auStack_278 != (ulong *******)0x0) && (*(byte *)_auStack_278 == 1)) {
        uStack_1e8 = (uint)&uStack_208;
        uStack_1e4 = (undefined1)((ulong)&uStack_208 >> 0x20);
        uStack_1e3 = (undefined1)((ulong)&uStack_208 >> 0x28);
        uStack_1e2 = (undefined1)((ulong)&uStack_208 >> 0x30);
        uStack_1e1 = (undefined1)((ulong)&uStack_208 >> 0x38);
        bStack_1e0 = (byte)&ppppppplStack_118;
        uStack_1df = (undefined1)((ulong)&ppppppplStack_118 >> 8);
        uStack_1de = (undefined2)((ulong)&ppppppplStack_118 >> 0x10);
        uStack_1dc = (undefined1)((ulong)&ppppppplStack_118 >> 0x20);
        uStack_1db = (undefined1)((ulong)&ppppppplStack_118 >> 0x28);
        uStack_1da = (undefined2)((ulong)&ppppppplStack_118 >> 0x30);
        uStack_1d8 = (uint)&bStack_138;
        uStack_1d4 = (undefined2)((ulong)&bStack_138 >> 0x20);
        uStack_1d2 = (undefined1)((ulong)&bStack_138 >> 0x30);
        uStack_1d1 = (undefined1)((ulong)&bStack_138 >> 0x38);
        pppppppuStack_1d0 = (ulong *******)auStack_158;
        ppppppuStack_1c8 = ppppppuStack_168;
        func_0x0c9fa2a0(pppppppuStack_268,&UNK_09debe20,&uStack_1e8);
      }
      plVar28 = (long *)CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
      auStack_278 = (undefined1  [4])0x0;
      uStack_274 = 0;
      uStack_270 = 0;
      uStack_26f = 0;
      uStack_26d = 0;
      uStack_26c = 0;
      if (plVar28 != (long *)0x0) {
        LOCK();
        plVar13 = plVar28 + 1;
        lVar51 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar51 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          func_0x0412c2d0(plVar28);
        }
        plVar28 = (long *)CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
        pppppppuStack_268 = (ulong *******)0x0;
        if (plVar28 != (long *)0x0) {
          LOCK();
          plVar13 = plVar28 + 1;
          lVar51 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar51 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
            func_0x0412c2d0(plVar28);
          }
        }
      }
      func_0x0ca14770(&pppppppuStack_a8,0);
      pppppppuStack_d8 = (ulong *******)0x0;
      plStack_d0 = (long *)0x0;
      if (pppppppuVar32 == (ulong *******)0x0) {
LAB_09dc2fcc:
        cVar21 = func_0x0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,&UNK_0131c097,&UNK_013bce49);
        if (cVar21 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
        if (pppppppuStack_d8 != (ulong *******)0x0) goto LAB_09dc3014;
      }
      else {
        plStack_d0 = (long *)FUN_0412c300(pppppppuStack_160);
        if ((plStack_d0 == (long *)0x0) ||
           (pppppppuStack_d8 = pppppppuStack_280, pppppppuStack_280 == (ulong *******)0x0))
        goto LAB_09dc2fcc;
LAB_09dc3014:
        ppppppuVar37 = pppppppuStack_d8[0x20];
        if (ppppppuVar37 != (ulong ******)0x0) {
          pppppppuVar62 = (ulong *******)&pppppppuStack_e0;
          do {
            func_0x0ca12a00(pppppppuVar62,&pppppppuStack_a8,ppppppuVar37 + 7);
            pppppppuVar32 = pppppppuStack_e0;
            if (pppppppuStack_e0 != (ulong *******)0x0) {
              ppppppuVar41 = *pppppppuStack_e0;
              if ((((ppppppuVar41 != (ulong ******)0x0) && (*(byte *)(ppppppuVar41 + 0x28) < 6)) &&
                  (*(char *)(ppppppuVar41 + 0x26) == '\0')) &&
                 (*(byte *)(ppppppuStack_168 + 3) == 0)) {
                if (((*(byte *)((long)ppppppuVar41 + 0x11e) & 1) != 0) &&
                   (*(byte *)((long)ppppppuStack_168 + 7) == 0)) {
                  cVar21 = func_0x04fa7a10(ppppppuStack_168,ppppppuVar41 + 0x23);
                  if (cVar21 != '\0') goto LAB_09dc35c0;
                  ppppppuVar41 = *pppppppuVar32;
                  if (ppppppuVar41 == (ulong ******)0x0) goto LAB_09dc63ff;
                }
                if (*(char *)(ppppppuVar41 + 0x2e) != '\x01') {
                  if ((*(char *)(ppppppuVar41 + 0x2e) == '\x02') &&
                     (pppppuVar65 = ppppppuVar41[0x27], pppppuVar65 != (ulong *****)0x0)) {
                    cVar21 = (*(code *)(*pppppuVar65)[0x2f])(pppppuVar65,ppppppuStack_168);
                    if (cVar21 != '\0') goto LAB_09dc3169;
                  }
                  else if ((*(char *)(ppppppuVar41 + 0x26) == '\0') &&
                          (*(byte *)(ppppppuStack_168 + 3) == 0)) {
                    if (((*(byte *)((long)ppppppuVar41 + 0x11e) & 1) != 0) &&
                       (*(byte *)((long)ppppppuStack_168 + 7) == 0)) {
                      cVar21 = func_0x04fa7a10(ppppppuStack_168,ppppppuVar41 + 0x23);
                      if (cVar21 != '\0') goto LAB_09dc35c0;
                    }
LAB_09dc3169:
                    if (((ulong)ppppppuVar37[3] & 1) == 0) {
                      pppppuVar65 = ppppppuVar37[5];
                      uStack_1d8 = (uint)pppppuVar65;
                      uStack_1d4 = (undefined2)((ulong)pppppuVar65 >> 0x20);
                      uStack_1d2 = (undefined1)((ulong)pppppuVar65 >> 0x30);
                      uStack_1d1 = (undefined1)((ulong)pppppuVar65 >> 0x38);
                      pppppuVar65 = ppppppuVar37[3];
                      pppppuVar10 = ppppppuVar37[4];
                      uStack_1e8 = (uint)pppppuVar65;
                      uStack_1e4 = (undefined1)((ulong)pppppuVar65 >> 0x20);
                      uStack_1e3 = (undefined1)((ulong)pppppuVar65 >> 0x28);
                      uStack_1e2 = (undefined1)((ulong)pppppuVar65 >> 0x30);
                      uStack_1e1 = (undefined1)((ulong)pppppuVar65 >> 0x38);
                      bStack_1e0 = (byte)pppppuVar10;
                      uStack_1df = (undefined1)((ulong)pppppuVar10 >> 8);
                      uStack_1de = (undefined2)((ulong)pppppuVar10 >> 0x10);
                      uStack_1dc = (undefined1)((ulong)pppppuVar10 >> 0x20);
                      uStack_1db = (undefined1)((ulong)pppppuVar10 >> 0x28);
                      uStack_1da = (undefined2)((ulong)pppppuVar10 >> 0x30);
                    }
                    else {
                      func_0x0412e5e0(&uStack_1e8,ppppppuVar37[5],ppppppuVar37[4]);
                    }
                    auStack_278 = (undefined1  [4])0x0;
                    uStack_274 = 0;
                    uStack_270 = 0;
                    uStack_26f = 0;
                    uStack_26d = 0;
                    uStack_26c = 0;
                    pppppppuStack_268 = (ulong *******)0x0;
                    auStack_258 = (undefined1  [4])0x0;
                    uStack_254 = 0;
                    bStack_253 = 0;
                    uStack_252 = 0;
                    uStack_251 = 0;
                    uStack_250 = 0;
                    uStack_24f = 0;
                    uStack_24d = 0;
                    uStack_24c = 0;
                    pppppppuStack_248 = (ulong *******)0x0;
                    bVar68 = (uStack_1e8 & 1) == 0;
                    lVar51 = CONCAT17(uStack_1d1,
                                      CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)));
                    if (bVar68) {
                      lVar51 = (long)&uStack_1e8 + 1;
                    }
                    iStack_bc = -1;
                    uVar31 = (ulong)((byte)uStack_1e8 >> 1);
                    if (!bVar68) {
                      uVar31 = CONCAT26(uStack_1da,
                                        CONCAT15(uStack_1db,
                                                 CONCAT14(uStack_1dc,
                                                          CONCAT22(uStack_1de,
                                                                   CONCAT11(uStack_1df,bStack_1e0)))
                                                ));
                    }
                    func_0x0b6373c0(auStack_278,auStack_258,&iStack_bc,lVar51,uVar31);
                    pppppppuVar35 = (ulong *******)CONCAT44(uStack_274,auStack_278);
                    if (((uint)auStack_258 & 1) == 0) {
                      if (auStack_258[0] >> 1 == 9) goto LAB_09dc3233;
LAB_09dc3262:
                      if (((uint)auStack_278 & 1) == 0) {
                        pppppppuVar30 = (ulong *******)(ulong)(auStack_278[0] >> 1);
                      }
                      else {
                        pppppppuVar30 =
                             (ulong *******)
                             CONCAT44(uStack_26c,
                                      CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
                      }
                      pppppppuVar60 = (ulong *******)((long)pppppppuVar30 + 10);
                      if ((ulong *******)0xfffffffffffffff7 < pppppppuVar60) goto LAB_09dc66c3;
                      uStack_240 = (ulong *******)
                                   (CONCAT44(uStack_240._4_4_,auStack_278) & 0xffffffff000000ff);
                      pppppppuStack_210 = pppppppuVar30;
                      if (pppppppuVar60 < (ulong *******)0x17) {
                        uStack_234 = 0;
                        uStack_233 = 0;
                        uStack_231 = 0;
                        auStack_230 = (undefined1  [4])0x0;
                        uStack_22c = 0;
                        uStack_228 = 0;
                        uStack_227 = 0;
                        uStack_226 = 0;
                        uVar54 = 0;
                        auStack_238._1_3_ = 0;
                        auStack_238[0] = (char)pppppppuVar60 * '\x02';
                        puVar52 = (undefined8 *)0x0;
                      }
                      else {
                        uVar31 = ((ulong)pppppppuVar60 | 7) + 1;
                        if (((ulong)pppppppuVar60 | 7) == 0x17) {
                          uVar31 = 0x1a;
                        }
                        pppppppuStack_218 = pppppppuVar60;
                        puVar52 = (undefined8 *)
                                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31);
                        if (puVar52 == (undefined8 *)0x0) {
                          FUN_0eec74c0(uVar31,0);
                        }
                        uVar54 = uVar31 | 1;
                        auStack_238 = SUB84(uVar54,0);
                        uStack_234 = (undefined1)(uVar31 >> 0x20);
                        uStack_233 = (undefined2)(uVar31 >> 0x28);
                        uStack_231 = (undefined1)(uVar31 >> 0x38);
                        uStack_228 = SUB81(puVar52,0);
                        uStack_227 = (undefined1)((ulong)puVar52 >> 8);
                        uStack_226 = (undefined6)((ulong)puVar52 >> 0x10);
                        auStack_230 = SUB84(pppppppuStack_218,0);
                        uStack_22c = (uint)((ulong)pppppppuStack_218 >> 0x20);
                      }
                      bVar68 = (uVar54 & 1) == 0;
                      puVar56 = puVar52;
                      if (bVar68) {
                        puVar56 = (undefined8 *)(auStack_238 + 1);
                      }
                      *puVar56 = 0x66617263656e696d;
                      *(undefined2 *)(puVar56 + 1) = 0x3a74;
                      pppppppuVar32 = pppppppuStack_210;
                      pppppppuVar35 = (ulong *******)((long)puVar52 + 10);
                      if (bVar68) {
                        pppppppuVar35 = (ulong *******)(auStack_230 + 3);
                      }
                      if (pppppppuStack_210 != (ulong *******)0x0) {
                        pppppppuVar30 = (ulong *******)(auStack_278 + 1);
                        if (((ulong)uStack_240 & 1) != 0) {
                          pppppppuVar30 = pppppppuStack_268;
                        }
                        pppppppuStack_218 = pppppppuVar35;
                        func_0x0eee2ee0(pppppppuVar35,pppppppuVar30,pppppppuStack_210);
                        pppppppuVar35 = pppppppuStack_218;
                      }
                      *(byte *)((long)pppppppuVar35 + (long)pppppppuVar32) = 0;
                      if (((uint)uStack_240 & 1) != 0) {
                        func_0x0412a280(pppppppuStack_268,
                                        CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe);
                      }
                      pppppppuStack_268 =
                           (ulong *******)CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228));
                      uStack_274 = CONCAT13(uStack_231,CONCAT21(uStack_233,uStack_234));
                      auStack_278 = auStack_238;
                      uStack_270 = auStack_230[0];
                      uStack_26f = auStack_230._1_2_;
                      uStack_26d = auStack_230[3];
                      uStack_26c = uStack_22c;
                    }
                    else {
                      if (CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)))
                          != 9) goto LAB_09dc3262;
LAB_09dc3233:
                      pppppppuVar30 = (ulong *******)(auStack_258 + 1);
                      if (((uint)auStack_258 & 1) != 0) {
                        pppppppuVar30 = pppppppuStack_248;
                      }
                      if (*(byte *)(pppppppuVar30 + 1) != 0x74 ||
                          *pppppppuVar30 != (ulong ******)0x66617263656e696d) goto LAB_09dc3262;
                    }
                    func_0x049dcb70(&ppppppplStack_118,auStack_278);
                    if (((extraout_RDX & 1) != 0) || (iStack_bc != -1)) {
                      if ((pppppppuStack_e0 == (ulong *******)0x0) ||
                         (*pppppppuStack_e0 == (ulong ******)0x0)) goto LAB_09dc63ff;
                      uVar53 = (uint)*(short *)((long)*pppppppuStack_e0 + 0x8a);
                      uVar31 = func_0x0ca13640(&pppppppuStack_a8,ppppppuVar37 + 7);
                      puVar38 = (uint *)CONCAT17(uStack_1f9,
                                                 CONCAT25(uStack_1fb,CONCAT41(uStack_1ff,uStack_200)
                                                         ));
                      if (puVar38 < (uint *)CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8))) {
                        if (((uint)auStack_278 & 1) == 0) {
                          *(ulong ********)(puVar38 + 4) = pppppppuStack_268;
                          *puVar38 = (uint)auStack_278;
                          puVar38[1] = uStack_274;
                          puVar38[2] = CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270));
                          puVar38[3] = uStack_26c;
                        }
                        else {
                          func_0x0412e5e0(puVar38,pppppppuStack_268,
                                          CONCAT44(uStack_26c,
                                                   CONCAT13(uStack_26d,
                                                            CONCAT21(uStack_26f,uStack_270))));
                        }
                        *(ulong *)(puVar38 + 6) =
                             (uVar31 & 0xff) * 0x10000 + ((ulong)uVar53 << 0x20) + 1;
                        puVar38 = puVar38 + 8;
                      }
                      else {
                        puVar38 = (uint *)func_0x09dff2a0(&uStack_208,auStack_278,
                                                          CONCAT44(uVar53,((uint)uVar31 & 0xff) <<
                                                                          0x10) + 1);
                      }
                      uStack_200 = SUB81(puVar38,0);
                      uStack_1ff = (undefined4)((ulong)puVar38 >> 8);
                      uStack_1fb = (undefined2)((ulong)puVar38 >> 0x28);
                      uStack_1f9 = (undefined1)((ulong)puVar38 >> 0x38);
                      puVar38 = (uint *)CONCAT35((undefined3)uStack_14b,
                                                 CONCAT41(uStack_14f,uStack_153._3_1_));
                      if (puVar38 < (uint *)CONCAT44(uStack_144,
                                                     CONCAT13(uStack_145,
                                                              CONCAT21(uStack_147,uStack_14b._3_1_))
                                                    )) {
                        if (((uint)auStack_278 & 1) == 0) {
                          *(ulong ********)(puVar38 + 4) = pppppppuStack_268;
                          *puVar38 = (uint)auStack_278;
                          puVar38[1] = uStack_274;
                          puVar38[2] = CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270));
                          puVar38[3] = uStack_26c;
                        }
                        else {
                          func_0x0412e5e0(puVar38,pppppppuStack_268,
                                          CONCAT44(uStack_26c,
                                                   CONCAT13(uStack_26d,
                                                            CONCAT21(uStack_26f,uStack_270))));
                        }
                        puVar38 = puVar38 + 6;
                      }
                      else {
                        puVar38 = (uint *)func_0x04909bd0(auStack_158,auStack_278);
                      }
                      uStack_153._3_1_ = SUB81(puVar38,0);
                      uStack_14f = (undefined4)((ulong)puVar38 >> 8);
                      uStack_14b._0_3_ = (undefined3)((ulong)puVar38 >> 0x28);
                    }
                    if (((uint)auStack_258 & 1) != 0) {
                      func_0x0412a280(pppppppuStack_248,
                                      CONCAT17(uStack_251,
                                               CONCAT16(uStack_252,
                                                        CONCAT15(bStack_253,
                                                                 CONCAT14(uStack_254,auStack_258))))
                                      & 0xfffffffffffffffe);
                    }
                    if (((uint)auStack_278 & 1) != 0) {
                      func_0x0412a280(pppppppuStack_268,
                                      CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe);
                    }
                    pppppppuVar32 = pppppppuStack_e0;
                    if ((uStack_1e8 & 1) != 0) {
                      func_0x0412a280(CONCAT17(uStack_1d1,
                                               CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)))
                                      ,CONCAT17(uStack_1e1,
                                                CONCAT16(uStack_1e2,
                                                         CONCAT15(uStack_1e3,
                                                                  CONCAT14(uStack_1e4,uStack_1e8))))
                                       & 0xfffffffffffffffe);
                      pppppppuVar32 = pppppppuStack_e0;
                    }
                    pppppppuStack_e0 = pppppppuVar32;
                    if (pppppppuVar32 == (ulong *******)0x0) goto LAB_09dc3040;
                  }
                }
              }
LAB_09dc35c0:
              LOCK();
              *(int *)((long)pppppppuVar32 + 0xc) = *(int *)((long)pppppppuVar32 + 0xc) + -1;
              UNLOCK();
              if (((*(int *)((long)pppppppuVar32 + 0xc) < 1) &&
                  (*pppppppuVar32 == (ulong ******)0x0)) && (pppppppuStack_e0 != (ulong *******)0x0)
                 ) {
                func_0x0412a280(pppppppuStack_e0,0x10);
              }
            }
LAB_09dc3040:
            ppppppuVar37 = (ulong ******)*ppppppuVar37;
          } while (ppppppuVar37 != (ulong ******)0x0);
        }
      }
      plVar28 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        LOCK();
        plVar13 = plStack_d0 + 1;
        lVar51 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar51 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          func_0x0412c2d0(plVar28);
        }
      }
      ppppppuVar37 = ppppppuStack_168;
      pppppppuStack_d8 = (ulong *******)0x0;
      plStack_d0 = (long *)0x0;
      if (pppppppuStack_160 == (ulong *******)0x0) {
LAB_09dc36b1:
        cVar21 = func_0x0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,&UNK_0131c097,&UNK_013bce49);
        if (cVar21 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
        if (pppppppuStack_d8 != (ulong *******)0x0) goto LAB_09dc36f9;
      }
      else {
        plStack_d0 = (long *)FUN_0412c300(pppppppuStack_160);
        if ((plStack_d0 == (long *)0x0) ||
           (pppppppuStack_d8 = pppppppuStack_280, pppppppuStack_280 == (ulong *******)0x0))
        goto LAB_09dc36b1;
LAB_09dc36f9:
        for (ppppppuVar41 = pppppppuStack_d8[0x2f]; ppppppuVar41 != (ulong ******)0x0;
            ppppppuVar41 = (ulong ******)*ppppppuVar41) {
          lVar51 = func_0x08238f00(&bStack_138,*ppppppuVar41[0xe] + 1);
          if (lVar51 != (long)&uStack_133 + 3) {
            if (((ulong)ppppppuVar41[3] & 1) == 0) {
              pppppuVar65 = ppppppuVar41[5];
              uStack_1d8 = (uint)pppppuVar65;
              uStack_1d4 = (undefined2)((ulong)pppppuVar65 >> 0x20);
              uStack_1d2 = (undefined1)((ulong)pppppuVar65 >> 0x30);
              uStack_1d1 = (undefined1)((ulong)pppppuVar65 >> 0x38);
              uStack_1e8 = *(uint *)(ppppppuVar41 + 3);
              uVar7 = *(undefined4 *)((long)ppppppuVar41 + 0x1c);
              uVar8 = *(undefined4 *)(ppppppuVar41 + 4);
              uVar9 = *(undefined4 *)((long)ppppppuVar41 + 0x24);
              uStack_1e4 = (undefined1)uVar7;
              uStack_1e3 = (undefined1)((uint)uVar7 >> 8);
              uStack_1e2 = (undefined1)((uint)uVar7 >> 0x10);
              uStack_1e1 = (undefined1)((uint)uVar7 >> 0x18);
              bStack_1e0 = (byte)uVar8;
              uStack_1df = (undefined1)((uint)uVar8 >> 8);
              uStack_1de = (undefined2)((uint)uVar8 >> 0x10);
              uStack_1dc = (undefined1)uVar9;
              uStack_1db = (undefined1)((uint)uVar9 >> 8);
              uStack_1da = (undefined2)((uint)uVar9 >> 0x10);
            }
            else {
              func_0x0412e5e0(&uStack_1e8,ppppppuVar41[5],ppppppuVar41[4]);
            }
            func_0x0ca12a00(&pppppppuStack_e0,&pppppppuStack_a8,ppppppuVar41 + 2);
            pppppppuVar62 = pppppppuStack_e0;
            if ((pppppppuStack_e0 == (ulong *******)0x0) ||
               (ppppppuVar45 = *pppppppuStack_e0, ppppppuVar45 == (ulong ******)0x0))
            goto LAB_09dc63ff;
            if (*(char *)(ppppppuVar45 + 0x2e) == '\x01') {
LAB_09dc3bb0:
              LOCK();
              *(int *)((long)pppppppuVar62 + 0xc) = *(int *)((long)pppppppuVar62 + 0xc) + -1;
              UNLOCK();
              if (((*(int *)((long)pppppppuVar62 + 0xc) < 1) &&
                  (*pppppppuVar62 == (ulong ******)0x0)) && (pppppppuStack_e0 != (ulong *******)0x0)
                 ) {
                func_0x0412a280(pppppppuStack_e0,0x10);
              }
            }
            else {
              if ((*(char *)(ppppppuVar45 + 0x2e) == '\x02') &&
                 (pppppuVar65 = ppppppuVar45[0x27], pppppuVar65 != (ulong *****)0x0)) {
                cVar21 = (*(code *)(*pppppuVar65)[0x2f])(pppppuVar65,ppppppuVar37);
                if (cVar21 != '\0') goto LAB_09dc383f;
                goto LAB_09dc3bb0;
              }
              if ((*(char *)(ppppppuVar45 + 0x26) != '\0') || (*(byte *)(ppppppuVar37 + 3) != 0))
              goto LAB_09dc3bb0;
              if (((*(byte *)((long)ppppppuVar45 + 0x11e) & 1) != 0) &&
                 (*(byte *)((long)ppppppuVar37 + 7) == 0)) {
                cVar21 = func_0x04fa7a10(ppppppuVar37,ppppppuVar45 + 0x23);
                if (cVar21 != '\0') goto LAB_09dc3bb0;
              }
LAB_09dc383f:
              auStack_278 = (undefined1  [4])0x0;
              uStack_274 = 0;
              uStack_270 = 0;
              uStack_26f = 0;
              uStack_26d = 0;
              uStack_26c = 0;
              pppppppuStack_268 = (ulong *******)0x0;
              auStack_258 = (undefined1  [4])0x0;
              uStack_254 = 0;
              bStack_253 = 0;
              uStack_252 = 0;
              uStack_251 = 0;
              uStack_250 = 0;
              uStack_24f = 0;
              uStack_24d = 0;
              uStack_24c = 0;
              pppppppuStack_248 = (ulong *******)0x0;
              bVar68 = (uStack_1e8 & 1) == 0;
              lVar51 = CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)));
              if (bVar68) {
                lVar51 = (long)&uStack_1e8 + 1;
              }
              iStack_bc = -1;
              uVar31 = (ulong)((byte)uStack_1e8 >> 1);
              if (!bVar68) {
                uVar31 = CONCAT26(uStack_1da,
                                  CONCAT15(uStack_1db,
                                           CONCAT14(uStack_1dc,
                                                    CONCAT22(uStack_1de,
                                                             CONCAT11(uStack_1df,bStack_1e0)))));
              }
              func_0x0b6373c0(auStack_278,auStack_258,&iStack_bc,lVar51,uVar31);
              auVar14 = auStack_278;
              pppppppuVar32 = (ulong *******)CONCAT44(uStack_274,auStack_278);
              if (((uint)auStack_258 & 1) == 0) {
                if (auStack_258[0] >> 1 == 9) goto LAB_09dc38d0;
LAB_09dc38ff:
                pppppppuVar62 = (ulong *******)(ulong)auStack_278[0];
                if (((uint)auStack_278 & 1) == 0) {
                  uVar31 = (ulong)(auStack_278[0] >> 1);
                }
                else {
                  uVar31 = CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)))
                  ;
                }
                uVar54 = uVar31 + 10;
                if (0xfffffffffffffff7 < uVar54) goto LAB_09dc64a7;
                if (uVar54 < 0x17) {
                  uStack_234 = 0;
                  uStack_233 = 0;
                  uStack_231 = 0;
                  uStack_228 = 0;
                  uStack_227 = 0;
                  uStack_226 = 0;
                  uVar61 = 0;
                  auStack_238._1_3_ = 0;
                  auStack_238[0] = (char)uVar54 * '\x02';
                  puVar52 = (undefined8 *)0x0;
                  uVar54 = 0;
                }
                else {
                  uVar55 = (uVar54 | 7) + 1;
                  if ((uVar54 | 7) == 0x17) {
                    uVar55 = 0x1a;
                  }
                  puVar52 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar55);
                  if (puVar52 == (undefined8 *)0x0) {
                    FUN_0eec74c0(uVar55,0);
                  }
                  uVar61 = uVar55 | 1;
                  auStack_238 = SUB84(uVar61,0);
                  uStack_234 = (undefined1)(uVar55 >> 0x20);
                  uStack_233 = (undefined2)(uVar55 >> 0x28);
                  uStack_231 = (undefined1)(uVar55 >> 0x38);
                  uStack_228 = SUB81(puVar52,0);
                  uStack_227 = (undefined1)((ulong)puVar52 >> 8);
                  uStack_226 = (undefined6)((ulong)puVar52 >> 0x10);
                }
                bVar68 = (uVar61 & 1) == 0;
                puVar56 = puVar52;
                if (bVar68) {
                  puVar56 = (undefined8 *)(auStack_238 + 1);
                }
                _auStack_230 = (ulong *******)uVar54;
                *puVar56 = 0x66617263656e696d;
                *(undefined2 *)(puVar56 + 1) = 0x3a74;
                puVar36 = (undefined1 *)((long)puVar52 + 10);
                if (bVar68) {
                  puVar36 = auStack_230 + 3;
                }
                if (uVar31 != 0) {
                  pppppppuVar32 = (ulong *******)(auStack_278 + 1);
                  if (((uint)auVar14 & 1) != 0) {
                    pppppppuVar32 = pppppppuStack_268;
                  }
                  func_0x0eee2ee0(puVar36,pppppppuVar32,uVar31);
                }
                puVar36[uVar31] = 0;
                if (((uint)auVar14 & 1) != 0) {
                  func_0x0412a280(pppppppuStack_268,
                                  CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe);
                }
                pppppppuStack_268 =
                     (ulong *******)CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228));
                uStack_274 = CONCAT13(uStack_231,CONCAT21(uStack_233,uStack_234));
                auStack_278 = auStack_238;
                uStack_270 = auStack_230[0];
                uStack_26f = auStack_230._1_2_;
                uStack_26d = auStack_230[3];
                uStack_26c = uStack_22c;
                ppppppuVar37 = ppppppuStack_168;
              }
              else {
                if (CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250))) != 9)
                goto LAB_09dc38ff;
LAB_09dc38d0:
                pppppppuVar35 = (ulong *******)(auStack_258 + 1);
                if (((uint)auStack_258 & 1) != 0) {
                  pppppppuVar35 = pppppppuStack_248;
                }
                if (*(byte *)(pppppppuVar35 + 1) != 0x74 ||
                    *pppppppuVar35 != (ulong ******)0x66617263656e696d) goto LAB_09dc38ff;
              }
              func_0x049dcb70(&ppppppplStack_118,auStack_278);
              if ((extraout_RDX_00 & 1) != 0) {
                if ((pppppppuStack_e0 == (ulong *******)0x0) ||
                   (*pppppppuStack_e0 == (ulong ******)0x0)) goto LAB_09dc63ff;
                uVar31 = (ulong)(uint)(int)*(short *)((long)*pppppppuStack_e0 + 0x8a);
                puVar38 = (uint *)CONCAT17(uStack_1f9,
                                           CONCAT25(uStack_1fb,CONCAT41(uStack_1ff,uStack_200)));
                if (puVar38 < (uint *)CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8))) {
                  if (((uint)auStack_278 & 1) == 0) {
                    *(ulong ********)(puVar38 + 4) = pppppppuStack_268;
                    *puVar38 = (uint)auStack_278;
                    puVar38[1] = uStack_274;
                    puVar38[2] = CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270));
                    puVar38[3] = uStack_26c;
                  }
                  else {
                    func_0x0412e5e0(puVar38,pppppppuStack_268,
                                    CONCAT44(uStack_26c,
                                             CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270))));
                  }
                  *(ulong *)(puVar38 + 6) = uVar31 << 0x20 | 0x10001;
                  puVar38 = puVar38 + 8;
                }
                else {
                  puVar38 = (uint *)func_0x09dff2a0(&uStack_208,auStack_278,uVar31 << 0x20 | 0x10001
                                                   );
                }
                uStack_200 = SUB81(puVar38,0);
                uStack_1ff = (undefined4)((ulong)puVar38 >> 8);
                uStack_1fb = (undefined2)((ulong)puVar38 >> 0x28);
                uStack_1f9 = (undefined1)((ulong)puVar38 >> 0x38);
                puVar38 = (uint *)CONCAT35((undefined3)uStack_14b,
                                           CONCAT41(uStack_14f,uStack_153._3_1_));
                if (puVar38 < (uint *)CONCAT44(uStack_144,
                                               CONCAT13(uStack_145,
                                                        CONCAT21(uStack_147,uStack_14b._3_1_)))) {
                  if (((uint)auStack_278 & 1) == 0) {
                    *(ulong ********)(puVar38 + 4) = pppppppuStack_268;
                    *puVar38 = (uint)auStack_278;
                    puVar38[1] = uStack_274;
                    puVar38[2] = CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270));
                    puVar38[3] = uStack_26c;
                  }
                  else {
                    func_0x0412e5e0(puVar38,pppppppuStack_268,
                                    CONCAT44(uStack_26c,
                                             CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270))));
                  }
                  puVar38 = puVar38 + 6;
                }
                else {
                  puVar38 = (uint *)func_0x04909bd0(auStack_158,auStack_278);
                }
                uStack_153._3_1_ = SUB81(puVar38,0);
                uStack_14f = (undefined4)((ulong)puVar38 >> 8);
                uStack_14b._0_3_ = (undefined3)((ulong)puVar38 >> 0x28);
              }
              if (((uint)auStack_258 & 1) != 0) {
                func_0x0412a280(pppppppuStack_248,
                                CONCAT17(uStack_251,
                                         CONCAT16(uStack_252,
                                                  CONCAT15(bStack_253,
                                                           CONCAT14(uStack_254,auStack_258)))) &
                                0xfffffffffffffffe);
              }
              pppppppuVar62 = pppppppuStack_e0;
              if (((uint)auStack_278 & 1) != 0) {
                func_0x0412a280(pppppppuStack_268,
                                CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe);
                pppppppuVar62 = pppppppuStack_e0;
              }
              pppppppuStack_e0 = pppppppuVar62;
              if (pppppppuVar62 != (ulong *******)0x0) goto LAB_09dc3bb0;
            }
            if ((uStack_1e8 & 1) != 0) {
              func_0x0412a280(CONCAT17(uStack_1d1,
                                       CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                              CONCAT17(uStack_1e1,
                                       CONCAT16(uStack_1e2,
                                                CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))
                                               )) & 0xfffffffffffffffe);
            }
          }
        }
      }
      plVar28 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        LOCK();
        plVar13 = plStack_d0 + 1;
        lVar51 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar51 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          func_0x0412c2d0(plVar28);
        }
      }
      lVar51 = func_0x0ca138a0(&pppppppuStack_a8);
      for (pppppppuVar32 = *(ulong ********)(lVar51 + 0x10); pppppppuVar32 != (ulong *******)0x0;
          pppppppuVar32 = (ulong *******)*pppppppuVar32) {
        if (((pppppppuVar32[7] != (ulong ******)0x0) &&
            (pppppuVar65 = *pppppppuVar32[7], pppppuVar65 != (ulong *****)0x0)) &&
           ((*(char *)(pppppuVar65 + 0x28) == '\x05' && (*(char *)(pppppuVar65 + 0x2e) != '\x01'))))
        {
          if ((*(char *)(pppppuVar65 + 0x2e) == '\x02') &&
             (ppppuVar4 = pppppuVar65[0x27], ppppuVar4 != (ulong ****)0x0)) {
            cVar21 = (*(code *)(*ppppuVar4)[0x2f])(ppppuVar4,ppppppuVar37);
            if (cVar21 != '\0') goto LAB_09dc3d0c;
          }
          else if ((*(char *)(pppppuVar65 + 0x26) == '\0') && (*(byte *)(ppppppuVar37 + 3) == 0)) {
            if (((*(byte *)((long)pppppuVar65 + 0x11e) & 1) != 0) &&
               (*(byte *)((long)ppppppuVar37 + 7) == 0)) {
              cVar21 = func_0x04fa7a10(ppppppuVar37,pppppuVar65 + 0x23);
              if (cVar21 != '\0') goto LAB_09dc3c80;
            }
LAB_09dc3d0c:
            func_0x0c49dcb0(auStack_278,pppppuVar65);
            pbVar2 = (byte *)CONCAT44(uStack_274,auStack_278);
            uStack_1e8 = 0;
            uStack_1e4 = 0;
            uStack_1e3 = 0;
            uStack_1e2 = 0;
            uStack_1e1 = 0;
            if ((*pbVar2 & 1) == 0) {
              pppppppuStack_1d0 = *(ulong ********)(pbVar2 + 0x10);
              uVar7 = *(undefined4 *)pbVar2;
              uVar8 = *(undefined4 *)(pbVar2 + 4);
              uVar9 = *(undefined4 *)(pbVar2 + 0xc);
              bStack_1e0 = (byte)uVar7;
              uStack_1df = (undefined1)((uint)uVar7 >> 8);
              uStack_1de = (undefined2)((uint)uVar7 >> 0x10);
              uStack_1dc = (undefined1)uVar8;
              uStack_1db = (undefined1)((uint)uVar8 >> 8);
              uStack_1da = (undefined2)((uint)uVar8 >> 0x10);
              uStack_1d8 = *(uint *)(pbVar2 + 8);
              uStack_1d4 = (undefined2)uVar9;
              uStack_1d2 = (undefined1)((uint)uVar9 >> 0x10);
              uStack_1d1 = (undefined1)((uint)uVar9 >> 0x18);
            }
            else {
              func_0x0412e5e0(&bStack_1e0,*(undefined8 *)(pbVar2 + 0x10),*(undefined8 *)(pbVar2 + 8)
                             );
            }
            ppppppuStack_1c8 = (ulong ******)0x0;
            if ((bStack_1e0 & 1) == 0) {
              if (bStack_1e0 >> 1 != 0) goto LAB_09dc3d93;
LAB_09dc3e75:
              uVar31 = 0;
            }
            else {
              if (CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))) == 0)
              goto LAB_09dc3e75;
LAB_09dc3d93:
              pppppppuVar35 = (ulong *******)&uStack_1df;
              if ((bStack_1e0 & 1) != 0) {
                pppppppuVar35 = pppppppuStack_1d0;
              }
              if ((pppppppuVar35 == (ulong *******)0x0) || (*(byte *)pppppppuVar35 == 0))
              goto LAB_09dc3e75;
              uVar54 = strlen(pppppppuVar35);
              uVar31 = 0xcbf29ce484222325;
              if (uVar54 != 0) {
                if (7 < uVar54) {
                  uVar55 = uVar54 & 0xfffffffffffffff8;
                  do {
                    uVar31 = (((((((uVar31 * 0x100000001b3 ^ (ulong)*(byte *)pppppppuVar35) *
                                   0x100000001b3 ^ (ulong)*(byte *)((long)pppppppuVar35 + 1)) *
                                  0x100000001b3 ^ (ulong)*(byte *)((long)pppppppuVar35 + 2)) *
                                 0x100000001b3 ^ (ulong)*(byte *)((long)pppppppuVar35 + 3)) *
                                0x100000001b3 ^ (ulong)*(byte *)((long)pppppppuVar35 + 4)) *
                               0x100000001b3 ^ (ulong)*(byte *)((long)pppppppuVar35 + 5)) *
                              0x100000001b3 ^ (ulong)*(byte *)((long)pppppppuVar35 + 6)) *
                             0x100000001b3 ^ (ulong)*(byte *)((long)pppppppuVar35 + 7);
                    pppppppuVar35 = pppppppuVar35 + 1;
                    uVar55 = uVar55 - 8;
                  } while (uVar55 != 0);
                }
                if ((uVar54 & 7) != 0) {
                  uVar55 = 0;
                  do {
                    uVar31 = uVar31 * 0x100000001b3 ^ (ulong)*(byte *)((long)pppppppuVar35 + uVar55)
                    ;
                    uVar55 = uVar55 + 1;
                  } while (((uint)uVar54 & 7) != uVar55);
                }
              }
            }
            uStack_1e8 = (uint)uVar31;
            uStack_1e4 = (undefined1)(uVar31 >> 0x20);
            uStack_1e3 = (undefined1)(uVar31 >> 0x28);
            uStack_1e2 = (undefined1)(uVar31 >> 0x30);
            uStack_1e1 = (undefined1)(uVar31 >> 0x38);
            uVar22 = func_0x0ca13640(&pppppppuStack_a8,&uStack_1e8);
            pppppppuStack_218 = (ulong *******)CONCAT71(pppppppuStack_218._1_7_,uVar22);
            pppppppuStack_210 = pppppppuVar32;
            if ((bStack_1e0 & 1) != 0) {
              func_0x0412a280(pppppppuStack_1d0,
                              CONCAT26(uStack_1da,
                                       CONCAT15(uStack_1db,
                                                CONCAT14(uStack_1dc,
                                                         CONCAT22(uStack_1de,
                                                                  CONCAT11(uStack_1df,bStack_1e0))))
                                      ) & 0xfffffffffffffffe);
            }
            pppppppuStack_280 = (ulong *******)CONCAT44(uStack_274,auStack_278);
            uStack_240 = (ulong *******)
                         CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
            if (pppppppuStack_280 != uStack_240) {
              do {
                bStack_253 = 0x2e;
                auStack_258 = (undefined1  [4])0x6c69740a;
                uStack_254 = 0x65;
                uStack_252 = 0;
                bVar68 = (*(byte *)pppppppuStack_280 & 1) == 0;
                ppppppuVar37 = pppppppuStack_280[2];
                if (bVar68) {
                  ppppppuVar37 = (ulong ******)((long)pppppppuStack_280 + 1);
                }
                pppppppuVar32 = (ulong *******)(ulong)(*(byte *)pppppppuStack_280 >> 1);
                if (!bVar68) {
                  pppppppuVar32 = (ulong *******)pppppppuStack_280[1];
                }
                if (4 < (long)pppppppuVar32) {
                  ppppppuVar41 = ppppppuVar37;
                  pppppppuVar35 = pppppppuVar32;
                  while( true ) {
                    ppppppuVar41 = (ulong ******)
                                   func_0x0eee2ef0(ppppppuVar41,0x74,
                                                   (byte *)((long)pppppppuVar35 + -4));
                    if (ppppppuVar41 == (ulong ******)0x0) break;
                    if (*(byte *)((long)ppppppuVar41 + 4) == bStack_253 &&
                        *(int *)ppppppuVar41 == CONCAT13(uStack_254,auStack_258._1_3_)) {
                      if (ppppppuVar41 == ppppppuVar37) {
                        pbVar2 = (byte *)((long)pppppppuVar32 + -5);
                        if ((byte *)0xfffffffffffffff7 < pbVar2) {
                          func_0x04882e30();
                          goto LAB_09dc6687;
                        }
                        if (pbVar2 < (byte *)0x17) {
                          uStack_1e8 = CONCAT31(uStack_1e8._1_3_,(byte)pbVar2 * '\x02');
                          lVar50 = (long)&uStack_1e8 + 1;
                          if (pppppppuVar32 != (ulong *******)0x5) goto LAB_09dc42c8;
                    /* WARNING: Ignoring partial resolution of indirect */
                          uStack_1e8._1_1_ = 0;
                          bVar24 = *(byte *)pppppppuStack_280;
                        }
                        else {
                          lVar51 = ((ulong)pbVar2 | 7) + 1;
                          if (((ulong)pbVar2 | 7) == 0x17) {
                            lVar51 = 0x1a;
                          }
                          lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
                          if (lVar50 == 0) {
                            FUN_0eec74c0(lVar51,0);
                          }
                          uStack_1d8 = (uint)lVar50;
                          uStack_1d4 = (undefined2)((ulong)lVar50 >> 0x20);
                          uStack_1d2 = (undefined1)((ulong)lVar50 >> 0x30);
                          uStack_1d1 = (undefined1)((ulong)lVar50 >> 0x38);
                          uStack_1e8 = (uint)lVar51 | 1;
                          uStack_1e4 = (undefined1)((ulong)lVar51 >> 0x20);
                          uStack_1e3 = (undefined1)((ulong)lVar51 >> 0x28);
                          uStack_1e2 = (undefined1)((ulong)lVar51 >> 0x30);
                          uStack_1e1 = (undefined1)((ulong)lVar51 >> 0x38);
                          uStack_1df = (undefined1)((ulong)pbVar2 >> 8);
                          uStack_1de = (undefined2)((ulong)pbVar2 >> 0x10);
                          uStack_1dc = (undefined1)((ulong)pbVar2 >> 0x20);
                          uStack_1db = (undefined1)((ulong)pbVar2 >> 0x28);
                          uStack_1da = (undefined2)((ulong)pbVar2 >> 0x30);
                          bStack_1e0 = (byte)pbVar2;
LAB_09dc42c8:
                          func_0x0eee2ee0(lVar50,(byte *)((long)ppppppuVar37 + 5),pbVar2);
                          pbVar2[lVar50] = 0;
                          bVar24 = *(byte *)pppppppuStack_280;
                        }
                        if ((bVar24 & 1) != 0) {
                          func_0x0412a280(pppppppuStack_280[2],
                                          (ulong)*pppppppuStack_280 & 0xfffffffffffffffe);
                        }
                        pppppppuStack_280[2] =
                             (ulong ******)
                             CONCAT17(uStack_1d1,
                                      CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)));
                        *(uint *)pppppppuStack_280 = uStack_1e8;
                        *(uint *)((long)pppppppuStack_280 + 4) =
                             CONCAT13(uStack_1e1,
                                      CONCAT12(uStack_1e2,CONCAT11(uStack_1e3,uStack_1e4)));
                        *(uint *)(pppppppuStack_280 + 1) =
                             CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0));
                        *(uint *)((long)pppppppuStack_280 + 0xc) =
                             CONCAT22(uStack_1da,CONCAT11(uStack_1db,uStack_1dc));
                      }
                      break;
                    }
                    ppppppuVar41 = (ulong ******)((long)ppppppuVar41 + 1);
                    pppppppuVar35 =
                         (ulong *******)
                         ((byte *)((long)ppppppuVar37 + (long)pppppppuVar32) + -(long)ppppppuVar41);
                    if ((long)pppppppuVar35 < 5) break;
                  }
                }
                ppppppplVar47 = (long *******)&ppppppplStack_110;
                ppppppplVar40 = ppppppplVar47;
                if (ppppppplStack_110 != (long *******)0x0) {
                  bVar68 = (*(byte *)pppppppuStack_280 & 1) != 0;
                  ppppppuVar37 = (ulong ******)((long)pppppppuStack_280 + 1);
                  if (bVar68) {
                    ppppppuVar37 = pppppppuStack_280[2];
                  }
                  ppppppplVar39 = ppppppplStack_110;
                  ppppppuVar41 = (ulong ******)(ulong)(*(byte *)pppppppuStack_280 >> 1);
                  if (bVar68) {
                    ppppppuVar41 = pppppppuStack_280[1];
                  }
                  do {
                    while( true ) {
                      ppppppplVar47 = ppppppplVar39;
                      bVar68 = (*(byte *)(ppppppplVar47 + 4) & 1) != 0;
                      pppppplVar63 = (long ******)((long)ppppppplVar47 + 0x21);
                      if (bVar68) {
                        pppppplVar63 = ppppppplVar47[6];
                      }
                      ppppppuVar45 = (ulong ******)(ulong)(*(byte *)(ppppppplVar47 + 4) >> 1);
                      if (bVar68) {
                        ppppppuVar45 = (ulong ******)ppppppplVar47[5];
                      }
                      ppppppuVar49 = ppppppuVar41;
                      if (ppppppuVar45 < ppppppuVar41) {
                        ppppppuVar49 = ppppppuVar45;
                      }
                      iVar25 = func_0x0eee2ff0(ppppppuVar37,pppppplVar63,ppppppuVar49);
                      if (iVar25 != 0) break;
                      if (ppppppuVar41 < ppppppuVar45) goto LAB_09dc4030;
LAB_09dc4085:
                      iVar25 = func_0x0eee2ff0(pppppplVar63,ppppppuVar37,ppppppuVar49);
                      if (iVar25 == 0) {
                        if (ppppppuVar41 <= ppppppuVar45) goto joined_r0x09dc45b4;
                      }
                      else if (-1 < iVar25) goto joined_r0x09dc45b4;
                      ppppppplVar39 = (long *******)ppppppplVar47[1];
                      if ((long *******)ppppppplVar47[1] == (long *******)0x0) {
                        ppppppplVar40 = ppppppplVar47 + 1;
                        goto LAB_09dc40b6;
                      }
                    }
                    if (-1 < iVar25) goto LAB_09dc4085;
LAB_09dc4030:
                    ppppppplVar39 = (long *******)*ppppppplVar47;
                    ppppppplVar40 = ppppppplVar47;
                  } while ((long *******)*ppppppplVar47 != (long *******)0x0);
                }
LAB_09dc40b6:
                ppppppplVar39 =
                     (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                if (ppppppplVar39 == (long *******)0x0) {
                  FUN_0eec74c0(0x38,0);
                }
                pppppppuVar62 = pppppppuStack_210;
                uStack_1e8 = (uint)ppppppplVar39;
                uStack_1e4 = (undefined1)((ulong)ppppppplVar39 >> 0x20);
                uStack_1e3 = (undefined1)((ulong)ppppppplVar39 >> 0x28);
                uStack_1e2 = (undefined1)((ulong)ppppppplVar39 >> 0x30);
                uStack_1e1 = (undefined1)((ulong)ppppppplVar39 >> 0x38);
                bStack_1e0 = (byte)&ppppppplStack_118;
                uStack_1df = (undefined1)((ulong)&ppppppplStack_118 >> 8);
                uStack_1de = (undefined2)((ulong)&ppppppplStack_118 >> 0x10);
                uStack_1dc = (undefined1)((ulong)&ppppppplStack_118 >> 0x20);
                uStack_1db = (undefined1)((ulong)&ppppppplStack_118 >> 0x28);
                uStack_1da = (undefined2)((ulong)&ppppppplStack_118 >> 0x30);
                uStack_1d8 = 0;
                uStack_1d4 = 0;
                uStack_1d2 = 0;
                uStack_1d1 = 0;
                if (((ulong)*pppppppuStack_280 & 1) == 0) {
                  ppppppplVar39[6] = (long ******)pppppppuStack_280[2];
                  ppppppuVar37 = pppppppuStack_280[1];
                  ppppppplVar39[4] = (long ******)*pppppppuStack_280;
                  ppppppplVar39[5] = (long ******)ppppppuVar37;
                }
                else {
                  func_0x0412e5e0(ppppppplVar39 + 4,pppppppuStack_280[2],pppppppuStack_280[1]);
                }
                *ppppppplVar39 = (long ******)0x0;
                ppppppplVar39[1] = (long ******)0x0;
                ppppppplVar39[2] = (long ******)ppppppplVar47;
                *ppppppplVar40 = (long ******)ppppppplVar39;
                if ((long *******)*ppppppplStack_118 != (long *******)0x0) {
                  ppppppplStack_118 = (long *******)*ppppppplStack_118;
                }
                *(bool *)(ppppppplVar39 + 3) = ppppppplVar39 == ppppppplStack_110;
                if (ppppppplVar39 != ppppppplStack_110) {
                  do {
                    while( true ) {
                      ppppppplVar47 = (long *******)ppppppplVar39[2];
                      if (*(char *)(ppppppplVar47 + 3) != '\0') goto LAB_09dc4390;
                      ppppppplVar40 = (long *******)ppppppplVar47[2];
                      ppppppplVar46 = (long *******)*ppppppplVar40;
                      if (ppppppplVar47 == ppppppplVar46) break;
                      if ((ppppppplVar46 == (long *******)0x0) ||
                         (*(char *)(ppppppplVar46 + 3) != '\0')) {
                        ppppppplVar46 = (long *******)*ppppppplVar47;
                        if (ppppppplVar39 == ppppppplVar46) {
                          pppppplVar63 = ppppppplVar46[1];
                          *ppppppplVar47 = pppppplVar63;
                          if (pppppplVar63 != (long ******)0x0) {
                            pppppplVar63[2] = (long *****)ppppppplVar47;
                            ppppppplVar40 = (long *******)ppppppplVar47[2];
                          }
                          ppppppplVar46[2] = (long ******)ppppppplVar40;
                          if (ppppppplVar47 == (long *******)*ppppppplVar40) {
                            *ppppppplVar40 = (long ******)ppppppplVar46;
                          }
                          else {
                            ppppppplVar40[1] = (long ******)ppppppplVar46;
                          }
                          ppppppplVar46[1] = (long ******)ppppppplVar47;
                          ppppppplVar47[2] = (long ******)ppppppplVar46;
                          ppppppplVar40 = (long *******)ppppppplVar46[2];
                          ppppppplVar47 = ppppppplVar46;
                        }
                        *(undefined1 *)(ppppppplVar47 + 3) = 1;
                        *(undefined1 *)(ppppppplVar40 + 3) = 0;
                        pppppplVar63 = ppppppplVar40[1];
                        pppppplVar5 = (long ******)*pppppplVar63;
                        ppppppplVar40[1] = pppppplVar5;
                        if (pppppplVar5 != (long ******)0x0) {
                          pppppplVar5[2] = (long *****)ppppppplVar40;
                        }
                        pppppplVar5 = ppppppplVar40[2];
                        pppppplVar63[2] = (long *****)pppppplVar5;
                        if (ppppppplVar40 == (long *******)*pppppplVar5) {
                          *pppppplVar5 = (long *****)pppppplVar63;
                        }
                        else {
                          pppppplVar5[1] = (long *****)pppppplVar63;
                        }
                        *pppppplVar63 = (long *****)ppppppplVar40;
                        ppppppplVar40[2] = pppppplVar63;
                        goto LAB_09dc4390;
                      }
                      *(undefined1 *)(ppppppplVar47 + 3) = 1;
                      *(bool *)(ppppppplVar40 + 3) = ppppppplVar40 == ppppppplStack_110;
                      *(undefined1 *)(ppppppplVar46 + 3) = 1;
                      ppppppplVar39 = ppppppplVar40;
                      if (ppppppplVar40 == ppppppplStack_110) goto LAB_09dc4390;
                    }
                    pppppplVar63 = ppppppplVar40[1];
                    if ((pppppplVar63 == (long ******)0x0) || (*(char *)(pppppplVar63 + 3) != '\0'))
                    {
                      if (ppppppplVar39 != (long *******)*ppppppplVar47) {
                        ppppppplVar39 = (long *******)ppppppplVar47[1];
                        pppppplVar63 = *ppppppplVar39;
                        ppppppplVar47[1] = pppppplVar63;
                        if (pppppplVar63 == (long ******)0x0) {
                          ppppppplVar39[2] = (long ******)ppppppplVar40;
LAB_09dc42f2:
                          *ppppppplVar40 = (long ******)ppppppplVar39;
                        }
                        else {
                          pppppplVar63[2] = (long *****)ppppppplVar47;
                          ppppppplVar40 = (long *******)ppppppplVar47[2];
                          ppppppplVar46 = (long *******)*ppppppplVar40;
                          ppppppplVar39[2] = (long ******)ppppppplVar40;
                          if (ppppppplVar47 == ppppppplVar46) goto LAB_09dc42f2;
                          ppppppplVar40[1] = (long ******)ppppppplVar39;
                        }
                        *ppppppplVar39 = (long ******)ppppppplVar47;
                        ppppppplVar47[2] = (long ******)ppppppplVar39;
                        ppppppplVar40 = (long *******)ppppppplVar39[2];
                        ppppppplVar46 = (long *******)*ppppppplVar40;
                        ppppppplVar47 = ppppppplVar39;
                      }
                      *(undefined1 *)(ppppppplVar47 + 3) = 1;
                      *(undefined1 *)(ppppppplVar40 + 3) = 0;
                      pppppplVar63 = ppppppplVar46[1];
                      *ppppppplVar40 = pppppplVar63;
                      if (pppppplVar63 != (long ******)0x0) {
                        pppppplVar63[2] = (long *****)ppppppplVar40;
                      }
                      pppppplVar63 = ppppppplVar40[2];
                      ppppppplVar46[2] = pppppplVar63;
                      if (ppppppplVar40 == (long *******)*pppppplVar63) {
                        *pppppplVar63 = (long *****)ppppppplVar46;
                      }
                      else {
                        pppppplVar63[1] = (long *****)ppppppplVar46;
                      }
                      ppppppplVar46[1] = (long ******)ppppppplVar40;
                      ppppppplVar40[2] = (long ******)ppppppplVar46;
                      break;
                    }
                    *(undefined1 *)(ppppppplVar47 + 3) = 1;
                    *(bool *)(ppppppplVar40 + 3) = ppppppplVar40 == ppppppplStack_110;
                    *(undefined1 *)(pppppplVar63 + 3) = 1;
                    ppppppplVar39 = ppppppplVar40;
                  } while (ppppppplVar40 != ppppppplStack_110);
                }
LAB_09dc4390:
                pppppppuStack_108 = (ulong *******)((long)pppppppuStack_108 + 1);
                if ((byte)(*(byte *)(pppppppuStack_280 + 3) ^ 1 | (byte)pppppppuStack_218) == 1) {
                  puVar26 = (undefined4 *)
                            CONCAT35((undefined3)uStack_14b,CONCAT41(uStack_14f,uStack_153._3_1_));
                  if (puVar26 < (undefined4 *)
                                CONCAT44(uStack_144,
                                         CONCAT13(uStack_145,CONCAT21(uStack_147,uStack_14b._3_1_)))
                     ) {
                    if (((ulong)*pppppppuStack_280 & 1) == 0) {
                      *(ulong *******)(puVar26 + 4) = pppppppuStack_280[2];
                      uVar7 = *(undefined4 *)((long)pppppppuStack_280 + 4);
                      uVar8 = *(undefined4 *)(pppppppuStack_280 + 1);
                      uVar9 = *(undefined4 *)((long)pppppppuStack_280 + 0xc);
                      *puVar26 = *(undefined4 *)pppppppuStack_280;
                      puVar26[1] = uVar7;
                      puVar26[2] = uVar8;
                      puVar26[3] = uVar9;
                    }
                    else {
                      func_0x0412e5e0(puVar26,pppppppuStack_280[2],pppppppuStack_280[1]);
                    }
                    puVar26 = puVar26 + 6;
                  }
                  else {
                    puVar26 = (undefined4 *)func_0x04909a40(auStack_158,pppppppuStack_280);
                  }
                  uStack_153._3_1_ = SUB81(puVar26,0);
                  uStack_14f = (undefined4)((ulong)puVar26 >> 8);
                  uStack_14b._0_3_ = (undefined3)((ulong)puVar26 >> 0x28);
                }
                if ((pppppppuVar62[7] == (ulong ******)0x0) ||
                   (pppppuVar65 = *pppppppuVar62[7], pppppuVar65 == (ulong *****)0x0))
                goto LAB_09dc63ff;
                iVar25 = (int)*(short *)((long)pppppuVar65 + 0x8a);
                puVar33 = (ulong *)CONCAT17(uStack_1f9,
                                            CONCAT25(uStack_1fb,CONCAT41(uStack_1ff,uStack_200)));
                puVar12 = (ulong *)CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8));
                if (puVar33 < puVar12) {
                  puVar33[2] = (ulong)pppppppuStack_280[2];
                  ppppppuVar37 = pppppppuStack_280[1];
                  *puVar33 = (ulong)*pppppppuStack_280;
                  puVar33[1] = (ulong)ppppppuVar37;
                  *pppppppuStack_280 = (ulong ******)0x0;
                  pppppppuStack_280[1] = (ulong ******)0x0;
                  pppppppuStack_280[2] = (ulong ******)0x0;
                  *(undefined2 *)(puVar33 + 3) = 1;
                  *(undefined1 *)((long)puVar33 + 0x1a) = 0;
                  *(int *)((long)puVar33 + 0x1c) = iVar25;
                  puVar33 = puVar33 + 4;
                  uStack_200 = SUB81(puVar33,0);
                  uStack_1ff = (undefined4)((ulong)puVar33 >> 8);
                  uStack_1fb = (undefined2)((ulong)puVar33 >> 0x28);
                  uStack_1f9 = (undefined1)((ulong)puVar33 >> 0x38);
                }
                else {
                  lVar51 = CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT14(uStack_204,uStack_208)))
                  ;
                  lVar50 = (long)puVar33 - lVar51;
                  uVar31 = (lVar50 >> 5) + 1;
                  if (0x7ffffffffffffff < uVar31) goto LAB_09dc6470;
                  uVar55 = (long)puVar12 - lVar51;
                  uVar54 = (long)uVar55 >> 4;
                  if (uVar54 <= uVar31) {
                    uVar54 = uVar31;
                  }
                  if (0x7fffffffffffffdf < uVar55) {
                    uVar54 = 0x7ffffffffffffff;
                  }
                  if (uVar54 == 0) {
                    lVar51 = 0;
                  }
                  else {
                    if (0x7ffffffffffffff < uVar54) goto LAB_09dc6498;
                    lVar51 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar54 << 5);
                    if (lVar51 == 0) {
                      FUN_0eec74c0(uVar54 << 5,0);
                      lVar51 = 0;
                    }
                  }
                  lVar29 = uVar54 * 0x20 + lVar51;
                  *(ulong *******)(lVar51 + 0x10 + lVar50) = pppppppuStack_280[2];
                  ppppppuVar37 = pppppppuStack_280[1];
                  *(ulong *)(lVar51 + lVar50) = (ulong)*pppppppuStack_280;
                  ((ulong *)(lVar51 + lVar50))[1] = (ulong)ppppppuVar37;
                  *pppppppuStack_280 = (ulong ******)0x0;
                  pppppppuStack_280[1] = (ulong ******)0x0;
                  pppppppuStack_280[2] = (ulong ******)0x0;
                  *(undefined2 *)(lVar51 + 0x18 + lVar50) = 1;
                  *(undefined1 *)(lVar51 + 0x1a + lVar50) = 0;
                  *(int *)(lVar51 + 0x1c + lVar50) = iVar25;
                  lVar66 = lVar50 + lVar51 + 0x20;
                  lVar59 = (lVar51 + lVar50) -
                           (CONCAT17(uStack_1f9,CONCAT25(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))
                                    ) -
                           CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT14(uStack_204,uStack_208)))
                           );
                  func_0x0eee2f00(lVar59);
                  lVar51 = CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT14(uStack_204,uStack_208)))
                  ;
                  lVar50 = CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8));
                  uStack_208 = (uint)lVar59;
                  uStack_204 = (undefined1)((ulong)lVar59 >> 0x20);
                  uStack_203 = (undefined2)((ulong)lVar59 >> 0x28);
                  uStack_201 = (undefined1)((ulong)lVar59 >> 0x38);
                  uStack_200 = (undefined1)lVar66;
                  uVar22 = uStack_200;
                  uStack_1ff = (undefined4)((ulong)lVar66 >> 8);
                  uVar7 = uStack_1ff;
                  uStack_1fb = (undefined2)((ulong)lVar66 >> 0x28);
                  uVar15 = uStack_1fb;
                  uStack_1f9 = (undefined1)((ulong)lVar66 >> 0x38);
                  uVar23 = uStack_1f9;
                  uStack_1f8 = (undefined1)lVar29;
                  uStack_1f7 = (undefined6)((ulong)lVar29 >> 8);
                  uStack_1f1 = (undefined1)((ulong)lVar29 >> 0x38);
                  uStack_200 = uVar22;
                  uStack_1ff = uVar7;
                  uStack_1fb = uVar15;
                  uStack_1f9 = uVar23;
                  if (lVar51 != 0) {
                    func_0x0412a280(lVar51,lVar50 - lVar51);
                    uStack_200 = uVar22;
                    uStack_1ff = uVar7;
                    uStack_1fb = uVar15;
                    uStack_1f9 = uVar23;
                  }
                }
joined_r0x09dc45b4:
                if (((uint)auStack_258 & 1) != 0) {
                  func_0x0412a280(pppppppuStack_248,
                                  CONCAT17(uStack_251,
                                           CONCAT16(uStack_252,
                                                    CONCAT15(bStack_253,
                                                             CONCAT14(uStack_254,auStack_258)))) &
                                  0xfffffffffffffffe);
                }
                pppppppuStack_280 = pppppppuStack_280 + 4;
              } while (pppppppuStack_280 != uStack_240);
              pppppppuStack_280 = (ulong *******)CONCAT44(uStack_274,auStack_278);
            }
            ppppppuVar37 = ppppppuStack_168;
            pppppppuVar32 = pppppppuStack_210;
            if (pppppppuStack_280 != (ulong *******)0x0) {
              pppppppuVar35 =
                   (ulong *******)
                   CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
              pppppppuVar30 = pppppppuStack_280;
              if (pppppppuStack_280 != pppppppuVar35) {
                do {
                  if (((ulong)pppppppuVar35[-4] & 1) != 0) {
                    func_0x0412a280(pppppppuVar35[-2],(ulong)pppppppuVar35[-4] & 0xfffffffffffffffe)
                    ;
                  }
                  pppppppuVar35 = pppppppuVar35 + -4;
                } while (pppppppuVar35 != pppppppuStack_280);
                pppppppuVar30 = (ulong *******)CONCAT44(uStack_274,auStack_278);
              }
              uStack_270 = SUB81(pppppppuStack_280,0);
              uStack_26f = (undefined2)((ulong)pppppppuStack_280 >> 8);
              uStack_26d = (undefined1)((ulong)pppppppuStack_280 >> 0x18);
              uStack_26c = (uint)((ulong)pppppppuStack_280 >> 0x20);
              func_0x0412a280(pppppppuVar30,(long)pppppppuStack_268 - (long)pppppppuVar30);
            }
          }
        }
LAB_09dc3c80:
      }
      func_0x0ca14770(&pppppppuStack_a8,1);
      uStack_1e8 = 0x65744908;
      uStack_1e4 = 0x6d;
      uStack_1e3 = 0;
      func_0x09d9cb70(plStack_f0,&uStack_1e8,
                      CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT14(uStack_204,uStack_208))),
                      CONCAT17(uStack_1f9,CONCAT25(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
      if ((uStack_1e8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                        CONCAT17(uStack_1e1,
                                 CONCAT16(uStack_1e2,
                                          CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)))) &
                        0xfffffffffffffffe);
      }
      lVar51 = CONCAT35((undefined3)uStack_153,CONCAT41(auStack_158._1_4_,auStack_158[0]));
      if (lVar51 != CONCAT35((undefined3)uStack_14b,CONCAT41(uStack_14f,uStack_153._3_1_))) {
        uStack_1e8 = 0x65744908;
        uStack_1e4 = 0x6d;
        uStack_1e3 = 0;
        func_0x09d9f270(plStack_f0,&uStack_1e8,auStack_158,8);
        if ((uStack_1e8 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))),
                          CONCAT17(uStack_1e1,
                                   CONCAT16(uStack_1e2,
                                            CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)))) &
                          0xfffffffffffffffe);
        }
        lVar51 = CONCAT35((undefined3)uStack_153,CONCAT41(auStack_158._1_4_,auStack_158[0]));
      }
      if (lVar51 != 0) {
        lVar50 = CONCAT35((undefined3)uStack_14b,CONCAT41(uStack_14f,uStack_153._3_1_));
        lVar29 = lVar51;
        if (lVar51 != lVar50) {
          do {
            if ((*(byte *)(lVar50 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar50 + -8),
                              *(ulong *)(lVar50 + -0x18) & 0xfffffffffffffffe);
            }
            lVar50 = lVar50 + -0x18;
          } while (lVar50 != lVar51);
          lVar29 = CONCAT35((undefined3)uStack_153,CONCAT41(auStack_158._1_4_,auStack_158[0]));
        }
        uStack_153._3_1_ = (undefined1)lVar51;
        uStack_14f = (undefined4)((ulong)lVar51 >> 8);
        uStack_14b._0_3_ = (undefined3)((ulong)lVar51 >> 0x28);
        func_0x0412a280(lVar29,CONCAT44(uStack_144,
                                        CONCAT13(uStack_145,CONCAT21(uStack_147,uStack_14b._3_1_)))
                               - lVar29);
      }
      func_0x049dc470(&bStack_138,
                      CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,uStack_133._3_1_)));
      func_0x049dc470(&ppppppplStack_118,ppppppplStack_110);
      uVar22 = uStack_201;
      uVar15 = uStack_203;
      uVar53 = uStack_208;
      uVar11 = CONCAT14(uStack_204,uStack_208);
      lVar51 = CONCAT17(uStack_201,CONCAT25(uStack_203,uVar11));
      if (lVar51 != 0) {
        lVar50 = CONCAT17(uStack_1f9,CONCAT25(uStack_1fb,CONCAT41(uStack_1ff,uStack_200)));
        if (lVar51 != lVar50) {
          do {
            if ((*(byte *)(lVar50 + -0x20) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar50 + -0x10),
                              *(ulong *)(lVar50 + -0x20) & 0xfffffffffffffffe);
            }
            lVar50 = lVar50 + -0x20;
          } while (lVar50 != lVar51);
          lVar51 = CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT14(uStack_204,uStack_208)));
        }
        uStack_200 = (undefined1)uVar53;
        uStack_1ff = (undefined4)((uint5)uVar11 >> 8);
        uStack_1fb = uVar15;
        uStack_1f9 = uVar22;
        func_0x0412a280(lVar51,CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8)) - lVar51);
      }
      if (pppppppuStack_160 != (ulong *******)0x0) {
        func_0x0412c2d0();
      }
      lVar51 = plStack_58[1];
      if (lVar51 == 0) {
        uVar42 = *(undefined8 *)(lStack_e8 + 0x10);
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e1 = 0;
        bStack_1e0 = 0;
        uStack_1df = 0;
        uStack_1de = 0;
        uStack_1dc = 0;
        uStack_1db = 0;
        uStack_1da = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1d2 = 0;
        uStack_1d1 = 0;
        auStack_278 = (undefined1  [4])0x0;
        uStack_274 = 0;
        uStack_270 = 0;
        uStack_26f = 0;
        uStack_26d = 0;
        uStack_26c = 0;
LAB_09dc48d0:
        cVar21 = func_0x0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,&UNK_0131c097,&UNK_013bce49);
        if (cVar21 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar50 = CONCAT44(uStack_274,auStack_278);
        if (lVar50 != 0) goto LAB_09dc4915;
      }
      else {
        lVar50 = *plStack_58;
        LOCK();
        *(long *)(lVar51 + 0x10) = *(long *)(lVar51 + 0x10) + 1;
        UNLOCK();
        uVar42 = *(undefined8 *)(lStack_e8 + 0x10);
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e1 = 0;
        bStack_1e0 = 0;
        uStack_1df = 0;
        uStack_1de = 0;
        uStack_1dc = 0;
        uStack_1db = 0;
        uStack_1da = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1d2 = 0;
        uStack_1d1 = 0;
        auStack_278 = (undefined1  [4])0x0;
        uStack_274 = 0;
        lVar29 = FUN_0412c300(lVar51);
        uStack_270 = (undefined1)lVar29;
        uStack_26f = (undefined2)((ulong)lVar29 >> 8);
        uStack_26d = (undefined1)((ulong)lVar29 >> 0x18);
        uStack_26c = (uint)((ulong)lVar29 >> 0x20);
        if (lVar29 == 0) goto LAB_09dc48d0;
        auStack_278 = SUB84(lVar50,0);
        uStack_274 = (uint)((ulong)lVar50 >> 0x20);
        if (lVar50 == 0) goto LAB_09dc48d0;
LAB_09dc4915:
        plVar28 = *(long **)(lVar50 + 0x1e8);
        if (plVar28 != (long *)0x0) {
          puVar26 = (undefined4 *)
                    CONCAT26(uStack_1da,
                             CONCAT15(uStack_1db,
                                      CONCAT14(uStack_1dc,
                                               CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))
                                     ));
          do {
            while (puVar26 < (undefined4 *)
                             CONCAT17(uStack_1d1,
                                      CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8)))) {
              if ((*(byte *)(plVar28 + 3) & 1) == 0) {
                *(long *)(puVar26 + 4) = plVar28[5];
                uVar7 = *(undefined4 *)((long)plVar28 + 0x1c);
                lVar50 = plVar28[4];
                uVar8 = *(undefined4 *)((long)plVar28 + 0x24);
                *puVar26 = *(undefined4 *)(plVar28 + 3);
                puVar26[1] = uVar7;
                puVar26[2] = (int)lVar50;
                puVar26[3] = uVar8;
              }
              else {
                func_0x0412e5e0(puVar26,plVar28[5],plVar28[4]);
              }
              puVar26 = puVar26 + 6;
              bStack_1e0 = (byte)puVar26;
              uStack_1df = (undefined1)((ulong)puVar26 >> 8);
              uStack_1de = (undefined2)((ulong)puVar26 >> 0x10);
              uStack_1dc = (undefined1)((ulong)puVar26 >> 0x20);
              uStack_1db = (undefined1)((ulong)puVar26 >> 0x28);
              uStack_1da = (undefined2)((ulong)puVar26 >> 0x30);
              plVar28 = (long *)*plVar28;
              if (plVar28 == (long *)0x0) goto LAB_09dc49ab;
            }
            puVar26 = (undefined4 *)func_0x04909a40(&uStack_1e8);
            bStack_1e0 = (byte)puVar26;
            uStack_1df = (undefined1)((ulong)puVar26 >> 8);
            uStack_1de = (undefined2)((ulong)puVar26 >> 0x10);
            uStack_1dc = (undefined1)((ulong)puVar26 >> 0x20);
            uStack_1db = (undefined1)((ulong)puVar26 >> 0x28);
            uStack_1da = (undefined2)((ulong)puVar26 >> 0x30);
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
      }
LAB_09dc49ab:
      plVar28 = (long *)CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
      if (plVar28 != (long *)0x0) {
        LOCK();
        plVar13 = plVar28 + 1;
        lVar50 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar50 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          func_0x0412c2d0(plVar28);
        }
      }
      auStack_278 = (undefined1  [4])0x6574490e;
      uStack_274 = 0x6761546d;
      uStack_270 = 0;
      auStack_258 = (undefined1  [4])0x0;
      uStack_254 = 0;
      bStack_253 = 0;
      uStack_252 = 0;
      uStack_251 = 0;
      uStack_250 = 0;
      uStack_24f = 0;
      uStack_24d = 0;
      uStack_24c = 0;
      pppppppuStack_248 = (ulong *******)0x0;
      lVar50 = CONCAT17(uStack_1e1,
                        CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
      lVar29 = CONCAT26(uStack_1da,
                        CONCAT15(uStack_1db,
                                 CONCAT14(uStack_1dc,
                                          CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))));
      pppppppuVar32 = (ulong *******)0xaaaaaaaaaaaaaaab;
      func_0x0488f040(auStack_258,lVar50,lVar29,(lVar29 - lVar50 >> 3) * -0x5555555555555555);
      func_0x09d9c670(uVar42,auStack_278,auStack_258);
      auVar14 = auStack_258;
      lVar50 = CONCAT17(uStack_251,
                        CONCAT16(uStack_252,CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258))));
      if (lVar50 != 0) {
        lVar29 = CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
        lVar59 = lVar50;
        if (lVar50 != lVar29) {
          do {
            if ((*(byte *)(lVar29 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar29 + -8),
                              *(ulong *)(lVar29 + -0x18) & 0xfffffffffffffffe);
            }
            lVar29 = lVar29 + -0x18;
          } while (lVar29 != lVar50);
          lVar59 = CONCAT17(uStack_251,
                            CONCAT16(uStack_252,
                                     CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258))));
        }
        uStack_250 = auVar14[0];
        uStack_24f = auVar14._1_2_;
        uStack_24d = auVar14[3];
        uStack_24c = (undefined4)((ulong)lVar50 >> 0x20);
        func_0x0412a280(lVar59,(long)pppppppuStack_248 - lVar59);
      }
      if (((uint)auStack_278 & 1) != 0) {
        func_0x0412a280(pppppppuStack_268,CONCAT44(uStack_274,auStack_278) & 0xfffffffffffffffe);
      }
      uVar23 = uStack_1e3;
      uVar22 = uStack_1e4;
      uVar53 = uStack_1e8;
      lVar50 = CONCAT17(uStack_1e1,
                        CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
      if (lVar50 != 0) {
        lVar29 = CONCAT26(uStack_1da,
                          CONCAT15(uStack_1db,
                                   CONCAT14(uStack_1dc,
                                            CONCAT22(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))));
        lVar59 = lVar50;
        if (lVar50 != lVar29) {
          do {
            if ((*(byte *)(lVar29 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar29 + -8),
                              *(ulong *)(lVar29 + -0x18) & 0xfffffffffffffffe);
            }
            lVar29 = lVar29 + -0x18;
          } while (lVar29 != lVar50);
          lVar59 = CONCAT17(uStack_1e1,
                            CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))
                                    ));
        }
        bStack_1e0 = (byte)uVar53;
        uStack_1df = (undefined1)(uVar53 >> 8);
        uStack_1de = (undefined2)(uVar53 >> 0x10);
        uStack_1dc = uVar22;
        uStack_1db = uVar23;
        uStack_1da = (undefined2)((ulong)lVar50 >> 0x30);
        func_0x0412a280(lVar59,CONCAT17(uStack_1d1,
                                        CONCAT16(uStack_1d2,CONCAT24(uStack_1d4,uStack_1d8))) -
                               lVar59);
      }
      if (lVar51 != 0) {
        func_0x0412c2d0(lVar51);
      }
      pppppppuVar35 = *(ulong ********)(lStack_e8 + 0x10);
      lVar51 = plStack_b0[0x5b];
      auStack_278 = (undefined1  [4])0x0;
      uStack_274 = 0;
      uStack_270 = 0;
      uStack_26f = 0;
      uStack_26d = 0;
      uStack_26c = 0;
      pppppppuStack_268 = (ulong *******)0x0;
      auStack_258 = (undefined1  [4])0x0;
      uStack_254 = 0;
      bStack_253 = 0;
      uStack_252 = 0;
      uStack_251 = 0;
      uStack_250 = 0;
      uStack_24f = 0;
      uStack_24d = 0;
      uStack_24c = 0;
      pppppppuStack_248 = (ulong *******)0x0;
      uVar31 = (*(long *)(lVar51 + 0x158) - *(long *)(lVar51 + 0x150) >> 4) * -0x5555555555555555 +
               0x19;
      if (uVar31 != 0) {
        if (0xaaaaaaaaaaaaaaa < uVar31) goto LAB_09dc6699;
        lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31 * 0x18);
        if (lVar50 == 0) {
          FUN_0eec74c0(uVar31 * 0x18,0);
        }
        pppppppuStack_268 = (ulong *******)(lVar50 + uVar31 * 0x18);
        auStack_278 = SUB84(lVar50,0);
        uStack_274 = (uint)((ulong)lVar50 >> 0x20);
        uStack_270 = (undefined1)lVar50;
        uStack_26f = (undefined2)((ulong)lVar50 >> 8);
        uStack_26d = (undefined1)((ulong)lVar50 >> 0x18);
        uStack_26c = uStack_274;
      }
      lVar50 = 1000;
      puVar52 = (undefined8 *)0xf71fa58;
      uStack_274 = uStack_26c;
      uStack_240 = pppppppuVar35;
      do {
        while( true ) {
          pbVar2 = (byte *)(puVar52 + 1);
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1d2 = 0;
          uStack_1d1 = 0;
          pppppppuStack_1d0 = (ulong *******)0x0;
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1e3 = 0;
          uStack_1e2 = 0;
          uStack_1e1 = 0;
          bStack_1e0 = 0;
          uStack_1df = 0;
          uStack_1de = 0;
          uStack_1dc = 0;
          uStack_1db = 0;
          uStack_1da = 0;
          ppppppuStack_1c8 = (ulong ******)0x0;
          if (puVar52 != (undefined8 *)&uStack_1e8) {
            if ((*pbVar2 & 1) == 0) {
              pppppppuStack_1d0 = (ulong *******)puVar52[3];
              uVar7 = *(undefined4 *)pbVar2;
              uVar8 = *(undefined4 *)((long)puVar52 + 0xc);
              uStack_1d8 = *(uint *)(puVar52 + 2);
              uVar9 = *(undefined4 *)((long)puVar52 + 0x14);
              bStack_1e0 = (byte)uVar7;
              uStack_1df = (undefined1)((uint)uVar7 >> 8);
              uStack_1de = (undefined2)((uint)uVar7 >> 0x10);
              uStack_1dc = (undefined1)uVar8;
              uStack_1db = (undefined1)((uint)uVar8 >> 8);
              uStack_1da = (undefined2)((uint)uVar8 >> 0x10);
              uStack_1d4 = (undefined2)uVar9;
              uStack_1d2 = (undefined1)((uint)uVar9 >> 0x10);
              uStack_1d1 = (undefined1)((uint)uVar9 >> 0x18);
            }
            else {
              FUN_04885070(&bStack_1e0,puVar52[3],puVar52[2]);
            }
          }
          uVar42 = *puVar52;
          uStack_1e8 = (uint)uVar42;
          uStack_1e4 = (undefined1)((ulong)uVar42 >> 0x20);
          uStack_1e3 = (undefined1)((ulong)uVar42 >> 0x28);
          uStack_1e2 = (undefined1)((ulong)uVar42 >> 0x30);
          uStack_1e1 = (undefined1)((ulong)uVar42 >> 0x38);
          if ((bStack_1e0 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1d0,
                            CONCAT26(uStack_1da,
                                     CONCAT15(uStack_1db,
                                              CONCAT14(uStack_1dc,
                                                       CONCAT22(uStack_1de,
                                                                CONCAT11(uStack_1df,bStack_1e0)))))
                            & 0xfffffffffffffffe);
          }
          pppppppuVar32 =
               (ulong *******)
               CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
          if (pppppppuStack_268 <= pppppppuVar32) break;
          if ((*pbVar2 & 1) == 0) {
            pppppppuVar32[2] = (ulong ******)puVar52[3];
            uVar7 = *(undefined4 *)((long)puVar52 + 0xc);
            uVar8 = *(undefined4 *)(puVar52 + 2);
            uVar9 = *(undefined4 *)((long)puVar52 + 0x14);
            *(undefined4 *)pppppppuVar32 = *(undefined4 *)pbVar2;
            *(undefined4 *)((long)pppppppuVar32 + 4) = uVar7;
            *(undefined4 *)(pppppppuVar32 + 1) = uVar8;
            *(undefined4 *)((long)pppppppuVar32 + 0xc) = uVar9;
          }
          else {
            func_0x0412e5e0(pppppppuVar32,puVar52[3],puVar52[2]);
          }
          pppppppuVar32 = pppppppuVar32 + 3;
          uStack_270 = SUB81(pppppppuVar32,0);
          uStack_26f = (undefined2)((ulong)pppppppuVar32 >> 8);
          uStack_26d = (undefined1)((ulong)pppppppuVar32 >> 0x18);
          uStack_26c = (uint)((ulong)pppppppuVar32 >> 0x20);
          puVar52 = puVar52 + 5;
          lVar50 = lVar50 + -0x28;
          if (lVar50 == 0) goto LAB_09dc4d21;
        }
        pppppppuVar32 = (ulong *******)func_0x04909a40(auStack_278,pbVar2);
        uStack_270 = SUB81(pppppppuVar32,0);
        uStack_26f = (undefined2)((ulong)pppppppuVar32 >> 8);
        uStack_26d = (undefined1)((ulong)pppppppuVar32 >> 0x18);
        uStack_26c = (uint)((ulong)pppppppuVar32 >> 0x20);
        puVar52 = puVar52 + 5;
        lVar50 = lVar50 + -0x28;
      } while (lVar50 != 0);
LAB_09dc4d21:
      pppppppuVar35 = *(ulong ********)(lVar51 + 0x150);
      pppppppuStack_280 = *(ulong ********)(lVar51 + 0x158);
      if (pppppppuVar35 != pppppppuStack_280) {
        do {
          while( true ) {
            pppppppuVar32 = pppppppuVar35 + 1;
            pppppppuVar30 = (ulong *******)CONCAT44(uStack_274,auStack_278);
            pppppppuVar62 =
                 (ulong *******)
                 CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
            if (pppppppuVar30 != pppppppuVar62) break;
LAB_09dc4e10:
            if (pppppppuVar30 == pppppppuVar62) goto LAB_09dc4e50;
            pppppppuVar30 =
                 (ulong *******)
                 CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
            if (pppppppuVar30 < pppppppuStack_248) goto LAB_09dc4e25;
LAB_09dc4ecc:
            uVar42 = func_0x04909a40(auStack_258,pppppppuVar32);
            uStack_250 = (undefined1)uVar42;
            uStack_24f = (undefined2)((ulong)uVar42 >> 8);
            uStack_24d = (undefined1)((ulong)uVar42 >> 0x18);
            uStack_24c = (undefined4)((ulong)uVar42 >> 0x20);
            pppppppuVar35 = pppppppuVar35 + 6;
            if (pppppppuVar35 == pppppppuStack_280) goto LAB_09dc4ef0;
          }
          if ((*(byte *)(pppppppuVar35 + 1) & 1) == 0) {
            ppppppuVar41 = (ulong ******)(ulong)(*(byte *)(pppppppuVar35 + 1) >> 1);
            ppppppuVar37 = (ulong ******)((long)pppppppuVar35 + 9);
          }
          else {
            ppppppuVar41 = pppppppuVar35[2];
            ppppppuVar37 = pppppppuVar35[3];
          }
          do {
            bVar24 = *(byte *)pppppppuVar30;
            if ((bVar24 & 1) == 0) {
              ppppppuVar45 = (ulong ******)(ulong)(bVar24 >> 1);
            }
            else {
              ppppppuVar45 = pppppppuVar30[1];
            }
            if (ppppppuVar45 == ppppppuVar41) {
              if ((bVar24 & 1) == 0) {
                ppppppuVar45 = (ulong ******)((long)pppppppuVar30 + 1);
              }
              else {
                ppppppuVar45 = pppppppuVar30[2];
              }
              iVar25 = func_0x0eee3000(ppppppuVar45,ppppppuVar37,ppppppuVar41);
              if (iVar25 == 0) goto LAB_09dc4e10;
            }
            pppppppuVar30 = pppppppuVar30 + 3;
          } while (pppppppuVar30 != pppppppuVar62);
LAB_09dc4e50:
          if (pppppppuStack_268 <= pppppppuVar62) {
            uVar42 = func_0x04909a40(auStack_278,pppppppuVar32);
            uStack_270 = (undefined1)uVar42;
            uStack_26f = (undefined2)((ulong)uVar42 >> 8);
            uStack_26d = (undefined1)((ulong)uVar42 >> 0x18);
            uStack_26c = (uint)((ulong)uVar42 >> 0x20);
            pppppppuVar30 =
                 (ulong *******)
                 CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
            if (pppppppuVar30 < pppppppuStack_248) goto LAB_09dc4e25;
            goto LAB_09dc4ecc;
          }
          if (((ulong)*pppppppuVar32 & 1) == 0) {
            pppppppuVar62[2] = pppppppuVar35[3];
            uVar7 = *(undefined4 *)((long)pppppppuVar35 + 0xc);
            uVar8 = *(undefined4 *)(pppppppuVar35 + 2);
            uVar9 = *(undefined4 *)((long)pppppppuVar35 + 0x14);
            *(undefined4 *)pppppppuVar62 = *(undefined4 *)pppppppuVar32;
            *(undefined4 *)((long)pppppppuVar62 + 4) = uVar7;
            *(undefined4 *)(pppppppuVar62 + 1) = uVar8;
            *(undefined4 *)((long)pppppppuVar62 + 0xc) = uVar9;
          }
          else {
            func_0x0412e5e0(pppppppuVar62,pppppppuVar35[3],pppppppuVar35[2]);
          }
          pppppppuVar62 = pppppppuVar62 + 3;
          uStack_270 = SUB81(pppppppuVar62,0);
          uStack_26f = (undefined2)((ulong)pppppppuVar62 >> 8);
          uStack_26d = (undefined1)((ulong)pppppppuVar62 >> 0x18);
          uStack_26c = (uint)((ulong)pppppppuVar62 >> 0x20);
          pppppppuVar30 =
               (ulong *******)
               CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
          if (pppppppuStack_248 <= pppppppuVar30) goto LAB_09dc4ecc;
LAB_09dc4e25:
          if (((ulong)*pppppppuVar32 & 1) == 0) {
            pppppppuVar30[2] = pppppppuVar35[3];
            uVar7 = *(undefined4 *)((long)pppppppuVar35 + 0xc);
            uVar8 = *(undefined4 *)(pppppppuVar35 + 2);
            uVar9 = *(undefined4 *)((long)pppppppuVar35 + 0x14);
            *(undefined4 *)pppppppuVar30 = *(undefined4 *)pppppppuVar32;
            *(undefined4 *)((long)pppppppuVar30 + 4) = uVar7;
            *(undefined4 *)(pppppppuVar30 + 1) = uVar8;
            *(undefined4 *)((long)pppppppuVar30 + 0xc) = uVar9;
          }
          else {
            func_0x0412e5e0(pppppppuVar30,pppppppuVar35[3],pppppppuVar35[2]);
          }
          pppppppuVar30 = pppppppuVar30 + 3;
          uStack_250 = SUB81(pppppppuVar30,0);
          uStack_24f = (undefined2)((ulong)pppppppuVar30 >> 8);
          uStack_24d = (undefined1)((ulong)pppppppuVar30 >> 0x18);
          uStack_24c = (undefined4)((ulong)pppppppuVar30 >> 0x20);
          pppppppuVar35 = pppppppuVar35 + 6;
        } while (pppppppuVar35 != pppppppuStack_280);
LAB_09dc4ef0:
        pppppppuVar32 =
             (ulong *******)
             CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
      }
      auStack_238._1_3_ = (undefined3)_DAT_011dda02;
      auStack_238[0] = 0x20;
      uStack_234 = (undefined1)((ulong)_DAT_011dda02 >> 0x18);
      uStack_233 = (undefined2)((ulong)_DAT_011dda02 >> 0x20);
      uStack_231 = (undefined1)((ulong)_DAT_011dda02 >> 0x30);
      auStack_230[0] = (undefined1)((ulong)_DAT_011dda02 >> 0x38);
      auStack_230._1_3_ = (undefined3)_UNK_011dda0a;
      uStack_22c = (uint)((ulong)_UNK_011dda0a >> 0x18);
      uStack_228 = (undefined1)((ulong)_UNK_011dda0a >> 0x38);
      uStack_227 = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      uStack_203 = 0;
      uStack_201 = 0;
      uStack_200 = 0;
      uStack_1ff = 0;
      uStack_1fb = 0;
      uStack_1f9 = 0;
      uStack_1f8 = 0;
      uStack_1f7 = 0;
      uStack_1f1 = 0;
      func_0x0488f040(&uStack_208,CONCAT44(uStack_274,auStack_278),pppppppuVar32,
                      ((long)pppppppuVar32 - CONCAT44(uStack_274,auStack_278) >> 3) *
                      -0x5555555555555555);
      pppppppuVar32 = uStack_240;
      func_0x09d9c670(uStack_240,auStack_238,&uStack_208);
      uVar22 = uStack_201;
      uVar15 = uStack_203;
      uVar53 = uStack_208;
      uVar11 = CONCAT14(uStack_204,uStack_208);
      lVar51 = CONCAT17(uStack_201,CONCAT25(uStack_203,uVar11));
      if (lVar51 != 0) {
        lVar50 = CONCAT17(uStack_1f9,CONCAT25(uStack_1fb,CONCAT41(uStack_1ff,uStack_200)));
        if (lVar51 != lVar50) {
          do {
            if ((*(byte *)(lVar50 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar50 + -8),
                              *(ulong *)(lVar50 + -0x18) & 0xfffffffffffffffe);
            }
            lVar50 = lVar50 + -0x18;
          } while (lVar50 != lVar51);
          lVar51 = CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT14(uStack_204,uStack_208)));
        }
        uStack_200 = (undefined1)uVar53;
        uStack_1ff = (undefined4)((uint5)uVar11 >> 8);
        uStack_1fb = uVar15;
        uStack_1f9 = uVar22;
        func_0x0412a280(lVar51,CONCAT17(uStack_1f1,CONCAT61(uStack_1f7,uStack_1f8)) - lVar51);
      }
      if (((uint)auStack_238 & 1) != 0) {
        func_0x0412a280(CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228)),
                        CONCAT17(uStack_231,CONCAT25(uStack_233,CONCAT14(uStack_234,auStack_238))) &
                        0xfffffffffffffffe);
      }
      auStack_238 = (undefined1  [4])0x67694a1e;
      uStack_234 = 0x73;
      uStack_233 = 0x7761;
      uStack_231 = 0x53;
      auStack_230 = (undefined1  [4])0x63757274;
      uStack_22c = 0x65727574;
      uStack_228 = 0;
      ppppppplStack_118 = (long *******)0x0;
      ppppppplStack_110 = (long *******)0x0;
      pppppppuStack_108 = (ulong *******)0x0;
      lVar51 = CONCAT17(uStack_251,
                        CONCAT16(uStack_252,CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258))));
      lVar50 = CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
      func_0x0488f040(&ppppppplStack_118,lVar51,lVar50,(lVar50 - lVar51 >> 3) * -0x5555555555555555)
      ;
      func_0x09d9c670(pppppppuVar32,auStack_238,&ppppppplStack_118);
      ppppppplVar40 = ppppppplStack_118;
      ppppppplVar47 = ppppppplStack_110;
      if (ppppppplStack_118 != (long *******)0x0) {
        for (; ppppppplVar40 != ppppppplVar47; ppppppplVar47 = ppppppplVar47 + -3) {
          if (((ulong)ppppppplVar47[-3] & 1) != 0) {
            func_0x0412a280(ppppppplVar47[-1],(ulong)ppppppplVar47[-3] & 0xfffffffffffffffe);
          }
        }
        ppppppplStack_110 = ppppppplVar40;
        func_0x0412a280(ppppppplStack_118,(long)pppppppuStack_108 - (long)ppppppplStack_118);
      }
      if (((uint)auStack_238 & 1) != 0) {
        func_0x0412a280(CONCAT62(uStack_226,CONCAT11(uStack_227,uStack_228)),
                        CONCAT17(uStack_231,CONCAT25(uStack_233,CONCAT14(uStack_234,auStack_238))) &
                        0xfffffffffffffffe);
      }
      auVar14 = auStack_258;
      lVar51 = CONCAT17(uStack_251,
                        CONCAT16(uStack_252,CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258))));
      if (lVar51 != 0) {
        lVar50 = CONCAT44(uStack_24c,CONCAT13(uStack_24d,CONCAT21(uStack_24f,uStack_250)));
        lVar29 = lVar51;
        if (lVar51 != lVar50) {
          do {
            if ((*(byte *)(lVar50 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar50 + -8),
                              *(ulong *)(lVar50 + -0x18) & 0xfffffffffffffffe);
            }
            lVar50 = lVar50 + -0x18;
          } while (lVar50 != lVar51);
          lVar29 = CONCAT17(uStack_251,
                            CONCAT16(uStack_252,
                                     CONCAT15(bStack_253,CONCAT14(uStack_254,auStack_258))));
        }
        uStack_250 = auVar14[0];
        uStack_24f = auVar14._1_2_;
        uStack_24d = auVar14[3];
        uStack_24c = (undefined4)((ulong)lVar51 >> 0x20);
        func_0x0412a280(lVar29,(long)pppppppuStack_248 - lVar29);
      }
      uVar53 = uStack_274;
      auVar14 = auStack_278;
      lVar51 = CONCAT44(uStack_274,auStack_278);
      if (lVar51 != 0) {
        lVar50 = CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
        if (lVar51 != lVar50) {
          do {
            if ((*(byte *)(lVar50 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar50 + -8),
                              *(ulong *)(lVar50 + -0x18) & 0xfffffffffffffffe);
            }
            lVar50 = lVar50 + -0x18;
          } while (lVar50 != lVar51);
          lVar51 = CONCAT44(uStack_274,auStack_278);
        }
        uStack_270 = auVar14[0];
        uStack_26f = auVar14._1_2_;
        uStack_26d = auVar14[3];
        uStack_26c = uVar53;
        func_0x0412a280(lVar51,(long)pppppppuStack_268 - lVar51);
      }
      if ((DAT_0f64a440 == '\0') && (iVar25 = func_0x04108328(&DAT_0f64a440), iVar25 != 0)) {
        _DAT_0f64a420 = 0x1000000120001;
        _DAT_0f64a428 = &UNK_01254d89;
        _DAT_0f64a430 = &UNK_01254d89;
        DAT_0f64a438 = 0;
        func_0x0eee2f40(&UNK_0495d2a0,&DAT_0f64a420,0xf53dab8);
        func_0x0410844d(&DAT_0f64a440);
      }
      ppppppuVar37 = ppppppuStack_168;
      if ((DAT_0f64a468 == '\0') && (iVar25 = func_0x04108328(&DAT_0f64a468), iVar25 != 0)) {
        _DAT_0f64a448 = 0x1005a00150001;
        _DAT_0f64a450 = &UNK_01254d89;
        _DAT_0f64a458 = &UNK_01254d89;
        DAT_0f64a460 = 0;
        func_0x0eee2f40(&UNK_0495d2a0,&DAT_0f64a448,0xf53dab8);
        func_0x0410844d(&DAT_0f64a468);
      }
      bVar24 = func_0x04fa7a10(ppppppuVar37,&DAT_0f64a420);
      uVar22 = func_0x04fa7a10(ppppppuVar37,&DAT_0f64a448);
      pppppppuStack_210 = (ulong *******)CONCAT71(pppppppuStack_210._1_7_,uVar22);
      auStack_258 = (undefined1  [4])0x0;
      uStack_254 = 0;
      bStack_253 = 0;
      uStack_252 = 0;
      uStack_251 = 0;
      uStack_250 = 0;
      uStack_24f = 0;
      uStack_24d = 0;
      uStack_24c = 0;
      pppppppuStack_248 = (ulong *******)0x0;
      pppppppuVar35 = *(ulong ********)plStack_b0[0x77];
      pppppppuVar30 = (ulong *******)pppppppuVar35[0x70];
      pppppppuVar62 = (ulong *******)pppppppuVar35[0x71];
      pppppppuVar60 = (ulong *******)0x0;
      if (pppppppuVar30 == pppppppuVar62) {
        pppppppuVar62 = (ulong *******)0x0;
        goto LAB_09dc581f;
      }
      bVar24 = ~bVar24;
      pppppppuStack_218 = (ulong *******)CONCAT71(pppppppuStack_218._1_7_,bVar24);
      uStack_240 = pppppppuVar62;
      pppppppuStack_160 = pppppppuVar35;
LAB_09dc527a:
      ppppppuVar37 = *pppppppuVar30;
      if (ppppppuVar37 != pppppppuVar35[0x77]) {
        uVar58 = *(ushort *)(ppppppuVar37 + 0x2d);
        pppppppuVar32 = (ulong *******)(ulong)uVar58;
        if ((bVar24 & uVar58 == 0x29) == 0) {
          if ((char)pppppppuStack_210 != '\0') {
            bVar68 = (*(byte *)(ppppppuVar37 + 0x33) & 1) != 0;
            ppppppuVar41 = (ulong ******)((long)ppppppuVar37 + 0x199);
            if (bVar68) {
              ppppppuVar41 = (ulong ******)ppppppuVar37[0x35];
            }
            ppppppuVar45 = (ulong ******)(ulong)(*(byte *)(ppppppuVar37 + 0x33) >> 1);
            if (bVar68) {
              ppppppuVar45 = (ulong ******)ppppppuVar37[0x34];
            }
            if (ppppppuVar45 == (ulong ******)0x0) {
              if (pppppppuStack_248 <= pppppppuVar60) {
                ppppppuVar45 = (ulong ******)0x0;
                ppppppuStack_168 = ppppppuVar41;
                goto LAB_09dc5396;
              }
              *(byte *)pppppppuVar60 = 0;
              ppppppuVar41 = (ulong ******)((long)pppppppuVar60 + 1);
              ppppppuVar45 = (ulong ******)0x0;
LAB_09dc55d8:
              *(byte *)((long)ppppppuVar41 + (long)ppppppuVar45) = 0;
              *(uint *)(pppppppuVar60 + 3) = (uint)uVar58;
              pppppppuVar60 = pppppppuVar60 + 4;
              bVar24 = (byte)pppppppuStack_218;
            }
            else {
              ppppppuVar49 = (ulong ******)0x0;
              ppppppuVar57 = ppppppuVar41;
              do {
                ppppppuVar48 = ppppppuVar49;
                ppppppuStack_168 = ppppppuVar41;
                if (ppppppuVar45 == ppppppuVar48) goto joined_r0x09dc5360;
                ppppppuVar1 = (ulong ******)((long)ppppppuVar57 + -1);
                ppppppuVar49 = (ulong ******)((long)ppppppuVar48 + 1);
                pbVar2 = (byte *)((long)ppppppuVar57 + ((long)ppppppuVar45 - 1U));
                ppppppuVar57 = ppppppuVar1;
              } while (*pbVar2 != 0x3a);
              if ((ulong ******)((long)ppppppuVar45 + 1U) != ppppppuVar49) {
                if (ppppppuVar45 <= (ulong ******)((long)ppppppuVar45 - (long)ppppppuVar49))
                goto LAB_09dc66a8;
                ppppppuStack_168 = (ulong ******)((long)ppppppuVar1 + (long)ppppppuVar45 + 1U);
                ppppppuVar45 = ppppppuVar48;
              }
joined_r0x09dc5360:
              if (pppppppuVar60 < pppppppuStack_248) {
                if (ppppppuVar45 < (ulong ******)0xfffffffffffffff8) {
                  if (ppppppuVar45 < (ulong ******)0x17) {
                    *(char *)pppppppuVar60 = (char)ppppppuVar45 * '\x02';
                    ppppppuVar41 = (ulong ******)((long)pppppppuVar60 + 1);
                    if (ppppppuVar45 == (ulong ******)0x0) {
                      ppppppuVar45 = (ulong ******)0x0;
                      pppppppuVar62 = uStack_240;
                      goto LAB_09dc55d8;
                    }
                  }
                  else {
                    uVar31 = ((ulong)ppppppuVar45 | 7) + 1;
                    if (((ulong)ppppppuVar45 | 7) == 0x17) {
                      uVar31 = 0x1a;
                    }
                    ppppppuVar41 = (ulong ******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31);
                    if (ppppppuVar41 == (ulong ******)0x0) {
                      FUN_0eec74c0(uVar31,0);
                    }
                    pppppppuVar60[2] = ppppppuVar41;
                    *pppppppuVar60 = (ulong ******)(uVar31 | 1);
                    pppppppuVar60[1] = ppppppuVar45;
                    pppppppuStack_280 = pppppppuVar60;
                  }
      
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x11dda02  StructureFeature
 * 0x11f7fdb  EntityPropertySelector
 * 0x129597f  minecraft:invisiblebedrock
 * 0x1295989  invisiblebedrock
 * 0x134ac44  EntityTypeSelector
 * 0x1380997  minecraft:movingblock
 */
