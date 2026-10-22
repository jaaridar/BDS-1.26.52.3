/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd841110 (ELF vaddr 0xd741110)
 * Label: caller-of-callee
 * Body:  [[0d841110, 0d8411a6] [0d8411b0, 0d8411f3] [0d841200, 0d84121d] [0d841220, 0d8412d7] [0d8412e0, 0d841349] [0d841350, 0d841376] [0d841380, 0d8413a4] [0d8413b0, 0d8414e2] [0d8414f0, 0d841708] [0d841710, 0d841739] [0d841740, 0d841767] [0d841770, 0d8418a3] [0d8418b0, 0d841acb] [0d841ad0, 0d841b11] [0d841b20, 0d841b3e] [0d841b40, 0d841c77] [0d841c80, 0d841cea] [0d841cf0, 0d84205a] [0d842060, 0d84221c] [0d842220, 0d84227e] [0d842280, 0d842289] [0d842290, 0d8422c5] [0d8422d0, 0d8423c8] [0d8423d0, 0d842416] [0d842420, 0d84245d] [0d842460, 0d8424a7] [0d8424b0, 0d8424c2] [0d8424d0, 0d84267a] [0d842680, 0d8426de] [0d8426e0, 0d8426e9] [0d8426f0, 0d842725] [0d842730, 0d842828] [0d842830, 0d842876] [0d842880, 0d8428bd] [0d8428c0, 0d842907] [0d842910, 0d842922] [0d842930, 0d842ada] [0d842ae0, 0d842b50] [0d842b60, 0d842b69] [0d842b70, 0d842ba9] [0d842bb0, 0d842ca8] [0d842cb0, 0d842cf6] [0d842d00, 0d842d3d] [0d842d40, 0d842d87] [0d842d90, 0d842da2] [0d842db0, 0d842e58] [0d842e60, 0d842f9c] [0d842fa0, 0d8430c5] [0d8430d0, 0d84314c] [0d843150, 0d84315d] [0d843160, 0d843199] [0d8431a0, 0d84329d] [0d8432a0, 0d8432e7] [0d8432f0, 0d84332d] [0d843330, 0d843378] [0d843380, 0d843392] [0d8433a0, 0d84344e] [0d843450, 0d8435b5] [0d8435c0, 0d84373c] [0d843740, 0d8437e6] [0d8437f0, 0d843805] [0d843810, 0d843873] [0d843880, 0d8438a2] [0d8438b0, 0d843944] [0d843950, 0d843b9d] [0d843ba0, 0d843c07] [0d843c10, 0d843c32] [0d843c40, 0d843da5] [0d843db0, 0d843e9c] [0d843ea0, 0d843f06] [0d843f10, 0d843f19] [0d843f20, 0d843f5a] [0d843f60, 0d844065] [0d844070, 0d8440b7] [0d8440c0, 0d8440fe] [0d844100, 0d844147] [0d844150, 0d844162] [0d844170, 0d844212] [0d844220, 0d84433d] [0d844340, 0d8445e8] [0d8445f0, 0d8446f4] [0d844700, 0d844761] [0d844770, 0d844779] [0d844780, 0d8447ba] [0d8447c0, 0d8448c5] [0d8448d0, 0d844917] [0d844920, 0d84495e] [0d844960, 0d8449a7] [0d8449b0, 0d8449c2] [0d8449d0, 0d844b7a] [0d844b80, 0d844be7] [0d844bf0, 0d844bf9] [0d844c00, 0d844c3a] [0d844c40, 0d844d45] [0d844d50, 0d844d97] [0d844da0, 0d844dde] [0d844de0, 0d844e27] [0d844e30, 0d844e42] [0d844e50, 0d844ef2] [0d844f00, 0d84501d] [0d845020, 0d845418] [0d845420, 0d8456d2] [0d8456e0, 0d84570c] [0d845710, 0d84573e] [0d845740, 0d84577c] [0d845780, 0d845793] [0d8457a0, 0d8457d2] [0d8457e0, 0d8457f3] [0d845800, 0d84580e] [0d845810, 0d845866] [0d845870, 0d845b51] [0d845b60, 0d845c49] [0d845c50, 0d845c74] [0d845c80, 0d845d0b] [0d845d10, 0d845e29] [0d845e30, 0d845e9e] [0d845ea0, 0d845eac] [0d845eb0, 0d845eea] [0d845ef0, 0d845ff6] [0d846000, 0d846046] [0d846050, 0d84608d] [0d846090, 0d8460d6] [0d8460e0, 0d8460f2] [0d846100, 0d8461a8] [0d8461b0, 0d846312] [0d846320, 0d84648b] [0d846490, 0d846534] [0d846540, 0d846555] [0d846560, 0d8465c3] [0d8465d0, 0d8465f2] [0d846600, 0d846685] [0d846690, 0d846ac0] [0d846ad0, 0d846b0c] [0d846b10, 0d846b3a] [0d846b40, 0d846b6e] [0d846b70, 0d846ba1] [0d846bb0, 0d846c17] [0d846c20, 0d846c45] [0d846c50, 0d846c63] [0d846c70, 0d846cc1] [0d846cd0, 0d846d8c] [0d846d90, 0d846df7] [0d846e00, 0d846e22] [0d846e30, 0d846e7e] [0d846e80, 0d846ee5] [0d846ef0, 0d84715b] [0d847160, 0d84721e] [0d847220, 0d847468] [0d847470, 0d8474d7] [0d8474e0, 0d847505] [0d847510, 0d847588] [0d847590, 0d8475fa] [0d847600, 0d847714] [0d847720, 0d8477c6] [0d8477d0, 0d8477f1] [0d847800, 0d847878] [0d847880, 0d8478a6] [0d8478b0, 0d847ae7] [0d847af0, 0d847afd] [0d847b00, 0d847b39] [0d847b40, 0d847c3a] [0d847c40, 0d847c86] [0d847c90, 0d847ccd] [0d847cd0, 0d847d17] [0d847d20, 0d847d32] [0d847d40, 0d847d4d] [0d847d50, 0d847d89] [0d847d90, 0d847e8a] [0d847e90, 0d847ed6] [0d847ee0, 0d847f1d] [0d847f20, 0d847f67] [0d847f70, 0d847f82] [0d847f90, 0d84817c] [0d848180, 0d8482c1] [0d8482d0, 0d848499] [0d8484a0, 0d8485e1] [0d8485f0, 0d848755] [0d848760, 0d848783] [0d848790, 0d8487b1] [0d8487c0, 0d8487ea] [0d8487f0, 0d848811] [0d848820, 0d848844] [0d848850, 0d8488f8] [0d848900, 0d848ad5] [0d848ae0, 0d848b1d] [0d848b20, 0d848b42] [0d848b50, 0d848b75] [0d848b80, 0d848baa] [0d848bb0, 0d848bd5] [0d848be0, 0d848c09] [0d848c10, 0d848c44] [0d848c50, 0d848ca0] [0d848cb0, 0d848d50] [0d848d60, 0d848d82] [0d848d90, 0d848db5] [0d848dc0, 0d848dea] [0d848df0, 0d848e15] [0d848e20, 0d848e4a] [0d848e50, 0d849110] [0d849120, 0d84913e] [0d849140, 0d849165] [0d849170, 0d8499db] [0d8499e0, 0d849a1d] [0d849a20, 0d849c15] [0d849c20, 0d849c4c] [0d849c50, 0d849e35] [0d849e40, 0d849e65] [0d849e70, 0d84a062] [0d84a070, 0d84a0e0] [0d84a0f0, 0d84a3a4] [0d84a3b0, 0d84a691] [0d84a6a0, 0d84a954] [0d84a960, 0d84ad0a] [0d84ad10, 0d84ad56] [0d84ad60, 0d84b024] [0d84b030, 0d84b2e4] [0d84b2f0, 0d84b32a] [0d84b330, 0d84b5f4] [0d84b600, 0d84b8b4] [0d84b8c0, 0d84b8fe] [0d84b900, 0d84b938] [0d84b940, 0d84baf4] [0d84bb00, 0d84bba7] [0d84bbb0, 0d84bbea] [0d84bbf0, 0d84beb4] [0d84bec0, 0d84c361] [0d84c370, 0d84c3b9] [0d84c3c0, 0d84c3fb] [0d84c400, 0d84c40a] [0d84c410, 0d84c42c] [0d84c430, 0d84c442] [0d84c450, 0d84c469] [0d84c470, 0d84c490] [0d84c4a0, 0d84c4b2] [0d84c4c0, 0d84cbf3] [0d84cc00, 0d84cc7d] [0d84cc80, 0d84cca5] [0d84ccb0, 0d84ccd9] [0d84cce0, 0d84cd8e] [0d84cd90, 0d84cdb5] [0d84cdc0, 0d84cdcc] [0d84cdd0, 0d84ce7e] [0d84ce80, 0d84cea5] [0d84ceb0, 0d84cfa8] [0d84cfb0, 0d84cfd5] [0d84cfe0, 0d84d051] [0d84d060, 0d84d085] [0d84d090, 0d84d0c1] [0d84d0d0, 0d84d1b8] [0d84d1c0, 0d84d1fa] [0d84d200, 0d84d29a] [0d84d2a0, 0d84d428] [0d84dd33, 0d84dd48] [0d84e200, 0d84e222]]
 * Ghidra: FUN_0d841110
 */


/* WARNING: Removing unreachable block (ram,0x0d849128) */
/* WARNING: Removing unreachable block (ram,0x0d849131) */
/* WARNING: Removing unreachable block (ram,0x0d849149) */
/* WARNING: Removing unreachable block (ram,0x0d849151) */
/* WARNING: Removing unreachable block (ram,0x0d849140) */
/* WARNING: Removing unreachable block (ram,0x0d849170) */
/* WARNING: Removing unreachable block (ram,0x0d84913d) */
/* WARNING: Removing unreachable block (ram,0x0d849174) */
/* WARNING: Removing unreachable block (ram,0x0d849184) */
/* WARNING: Removing unreachable block (ram,0x0d84918e) */
/* WARNING: Removing unreachable block (ram,0x0d849120) */
/* WARNING: Removing unreachable block (ram,0x0d8491a4) */
/* WARNING: Removing unreachable block (ram,0x0d8490fc) */
/* WARNING: Removing unreachable block (ram,0x0d84910c) */
/* WARNING: Removing unreachable block (ram,0x0d8491ac) */
/* WARNING: Removing unreachable block (ram,0x0d8491ce) */
/* WARNING: Removing unreachable block (ram,0x0d8491fa) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0d841110(undefined8 *param_1,undefined1 *param_2,undefined4 param_3,byte *param_4,
            undefined8 param_5)

{
  ushort *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 (*pauVar19) [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined3 uVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  undefined1 (*pauVar29) [16];
  undefined4 *puVar30;
  undefined8 uVar31;
  undefined1 (*pauVar32) [16];
  undefined4 *puVar33;
  undefined8 *puVar34;
  byte bVar35;
  long *plVar36;
  ulong uVar37;
  long *plVar38;
  undefined *puVar39;
  long *plVar40;
  undefined *puVar41;
  long lVar42;
  undefined1 (*pauVar43) [16];
  long lVar44;
  byte *pbVar45;
  int *piVar46;
  long lVar47;
  long lVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  long lVar51;
  byte *pbVar52;
  uint *puVar53;
  long lVar54;
  undefined1 (**ppauVar55) [16];
  ulong uVar56;
  undefined1 auVar57 [8];
  undefined1 (*unaff_R14) [16];
  undefined1 (*pauVar58) [16];
  undefined *puVar59;
  long lVar60;
  ulong uVar61;
  undefined1 (*pauVar62) [16];
  long *plVar63;
  undefined1 auVar64 [8];
  bool bVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 (*pauStack_410) [16];
  undefined1 (*pauStack_400) [16];
  undefined1 auStack_3f8 [8];
  undefined1 (*pauStack_3f0) [16];
  undefined1 (*pauStack_3e8) [16];
  undefined1 auStack_3e0 [8];
  undefined1 auStack_3d8 [16];
  undefined1 (*pauStack_3c8) [16];
  undefined1 (*pauStack_3c0) [16];
  undefined1 auStack_3b8 [12];
  undefined4 uStack_3ac;
  undefined1 (*pauStack_3a8) [16];
  undefined1 uStack_3a0;
  byte *pbStack_398;
  undefined1 (*pauStack_390) [16];
  undefined1 auStack_388 [16];
  undefined8 *puStack_378;
  long lStack_370;
  byte *pbStack_368;
  undefined1 *puStack_360;
  undefined4 uStack_358;
  undefined1 uStack_354;
  undefined2 uStack_353;
  undefined1 uStack_351;
  char cStack_350;
  undefined1 uStack_34f;
  undefined2 uStack_34e;
  undefined4 uStack_34c;
  undefined1 (*pauStack_348) [16];
  undefined1 auStack_340 [8];
  undefined1 *puStack_338;
  undefined1 auStack_330 [16];
  undefined2 uStack_320;
  undefined6 uStack_31e;
  undefined2 uStack_318;
  undefined6 uStack_316;
  undefined8 uStack_310;
  undefined2 uStack_308;
  undefined1 auStack_300 [16];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_208 [16];
  undefined1 (*pauStack_1f8) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 (*pauStack_1c8) [16];
  undefined1 auStack_1b8 [16];
  ulong uStack_1a8;
  undefined1 auStack_198 [16];
  ulong uStack_188;
  undefined1 auStack_178 [16];
  ulong uStack_168;
  undefined1 auStack_158 [16];
  undefined1 (*pauStack_148) [16];
  undefined1 auStack_138 [16];
  undefined8 *puStack_128;
  undefined1 auStack_118 [16];
  ulong uStack_108;
  undefined1 auStack_f8 [16];
  ulong uStack_e8;
  undefined1 auStack_d8 [16];
  undefined1 *puStack_c8;
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 (*pauStack_48) [16];
  undefined1 (*pauStack_40) [16];
  undefined1 (*pauStack_38) [16];
  
  lStack_370 = CONCAT44(lStack_370._4_4_,param_3);
  pauVar62 = *(undefined1 (**) [16])(param_2 + 0x70);
  pauStack_390 = *(undefined1 (**) [16])(param_2 + 0x78);
  auStack_3e0 = (undefined1  [8])param_1;
  pbStack_368 = param_4;
  uStack_1e0 = param_5;
  if (pauVar62 != pauStack_390) {
    do {
      puVar27 = *(undefined1 **)pauVar62[5];
      puVar50 = *(undefined1 **)(pauVar62[5] + 8);
      if (puVar27 != puVar50) {
        do {
          bVar35 = pauVar62[1][8];
          if ((bVar35 & 1) == 0) {
            uVar37 = (ulong)(bVar35 >> 1);
          }
          else {
            uVar37 = *(ulong *)pauVar62[2];
          }
          uVar56 = uVar37 + 0xc;
          if (0xfffffffffffffff7 < uVar56) {
            func_0x04882e30();
            goto LAB_0d84d2e6;
          }
          if (uVar56 < 0x17) {
            uStack_354 = 0;
            uStack_353 = 0;
            uStack_351 = 0;
            cStack_350 = '\0';
            uStack_34f = 0;
            uStack_34e = 0;
            uStack_34c = 0;
            pauStack_348 = (undefined1 (*) [16])0x0;
            uStack_358 = (uint)(byte)((char)uVar56 * '\x02');
            unaff_R14 = (undefined1 (*) [16])((long)&uStack_358 + 1);
            if (uVar37 != 0) goto joined_r0x0d841333;
          }
          else {
            lVar42 = (uVar56 | 7) + 1;
            if ((uVar56 | 7) == 0x17) {
              lVar42 = 0x1a;
            }
            unaff_R14 = (undefined1 (*) [16])
                        (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
            if (unaff_R14 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(lVar42,0);
            }
            uStack_358 = (uint)lVar42 | 1;
            uStack_354 = (undefined1)((ulong)lVar42 >> 0x20);
            uStack_353 = (undefined2)((ulong)lVar42 >> 0x28);
            uStack_351 = (undefined1)((ulong)lVar42 >> 0x38);
            pauStack_348 = unaff_R14;
joined_r0x0d841333:
            puVar49 = pauVar62[1] + 9;
            if ((bVar35 & 1) != 0) {
              puVar49 = *(undefined1 **)(pauVar62[2] + 8);
            }
            func_0x0eee2ee0(unaff_R14,puVar49,uVar37);
          }
          *(undefined8 *)(*unaff_R14 + uVar37) = 0x757274736e6f632e;
          *(undefined4 *)(*unaff_R14 + uVar37 + 8) = 0x726f7463;
          (*unaff_R14)[uVar37 + 0xc] = 0;
          if ((uStack_358 & 1) != 0) {
            func_0x0412a280(pauStack_348,
                            CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358))
                                    ) & 0xfffffffffffffffe);
          }
          puVar27 = puVar27 + 0x70;
        } while (puVar27 != puVar50);
      }
      puVar27 = *(undefined1 **)(pauVar62[7] + 8);
      puVar49 = *(undefined1 **)pauVar62[8];
      if (puVar27 != puVar49) {
        puStack_360 = pauVar62[1] + 9;
        do {
          bVar35 = pauVar62[1][8];
          if ((bVar35 & 1) == 0) {
            uVar37 = (ulong)(bVar35 >> 1);
          }
          else {
            uVar37 = *(ulong *)pauVar62[2];
          }
          puVar50 = (undefined1 *)(uVar37 + 1);
          if ((undefined1 *)0xfffffffffffffff7 < puVar50) goto LAB_0d84d2e6;
          if (puVar50 < (undefined1 *)0x17) {
            uStack_354 = 0;
            uStack_353 = 0;
            uStack_351 = 0;
            cStack_350 = '\0';
            uStack_34f = 0;
            uStack_34e = 0;
            uStack_34c = 0;
            pauStack_348 = (undefined1 (*) [16])0x0;
            uStack_358 = (uint)(byte)((char)puVar50 * '\x02');
            pauVar43 = (undefined1 (*) [16])((long)&uStack_358 + 1);
            if (uVar37 != 0) goto joined_r0x0d841555;
          }
          else {
            lVar42 = ((ulong)puVar50 | 7) + 1;
            if (((ulong)puVar50 | 7) == 0x17) {
              lVar42 = 0x1a;
            }
            pauVar43 = (undefined1 (*) [16])
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
            if (pauVar43 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(lVar42,0);
            }
            uStack_358 = (uint)lVar42 | 1;
            uStack_354 = (undefined1)((ulong)lVar42 >> 0x20);
            uStack_353 = (undefined2)((ulong)lVar42 >> 0x28);
            uStack_351 = (undefined1)((ulong)lVar42 >> 0x38);
            uStack_34f = (undefined1)((ulong)puVar50 >> 8);
            uStack_34e = (undefined2)((ulong)puVar50 >> 0x10);
            uStack_34c = (undefined4)((ulong)puVar50 >> 0x20);
            pauStack_348 = pauVar43;
            cStack_350 = (char)puVar50;
joined_r0x0d841555:
            puVar50 = puStack_360;
            if ((bVar35 & 1) != 0) {
              puVar50 = *(undefined1 **)(pauVar62[2] + 8);
            }
            func_0x0eee2ee0(pauVar43,puVar50,uVar37);
          }
          *(undefined2 *)(*pauVar43 + uVar37) = 0x2e;
          bVar65 = (puVar27[0x18] & 1) != 0;
          pbVar45 = puVar27 + 0x19;
          if (bVar65) {
            pbVar45 = *(byte **)(puVar27 + 0x28);
          }
          puVar50 = (undefined1 *)(ulong)((byte)puVar27[0x18] >> 1);
          if (bVar65) {
            puVar50 = *(undefined1 **)(puVar27 + 0x20);
          }
          pauVar43 = (undefined1 (*) [16])
                     CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
          uVar37 = ((ulong)pauVar43 & 0xfffffffffffffffe) - 1;
          if ((uStack_358 & 1) == 0) {
            uVar37 = 0x16;
          }
          if ((uStack_358 & 1) == 0) {
            unaff_R14 = (undefined1 (*) [16])(ulong)((uint)((ulong)pauVar43 >> 1) & 0x7f);
            if ((undefined1 *)(uVar37 - (long)unaff_R14) < puVar50) goto LAB_0d841579;
LAB_0d841484:
            pauVar32 = pauStack_348;
            if (puVar50 != (undefined1 *)0x0) {
              pauVar43 = pauStack_348;
              if ((uStack_358 & 1) == 0) {
                pauVar43 = (undefined1 (*) [16])((long)&uStack_358 + 1);
              }
              func_0x0eee2ee0(*unaff_R14 + (long)*pauVar43,pbVar45,puVar50);
              unaff_R14 = (undefined1 (*) [16])(puVar50 + (long)*unaff_R14);
              if ((uStack_358 & 1) == 0) {
                uStack_358 = CONCAT31(uStack_358._1_3_,(char)unaff_R14 * '\x02');
              }
              (*unaff_R14)[(long)*pauVar43] = 0;
              pauVar43 = (undefined1 (*) [16])
                         CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
              pauVar32 = pauStack_348;
            }
          }
          else {
            unaff_R14 = (undefined1 (*) [16])
                        CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)));
            if (puVar50 <= (undefined1 *)(uVar37 - (long)unaff_R14)) goto LAB_0d841484;
LAB_0d841579:
            pauVar32 = (undefined1 (*) [16])(puVar50 + (long)*unaff_R14);
            if (-uVar37 - 10 < (long)pauVar32 - uVar37) goto LAB_0d84d2f5;
            pauStack_410 = (undefined1 (*) [16])((long)&uStack_358 + 1);
            if ((uStack_358 & 1) != 0) {
              pauStack_410 = pauStack_348;
            }
            uVar56 = 0xfffffffffffffff7;
            if (uVar37 < 0x7ffffffffffffff3) {
              pauVar43 = (undefined1 (*) [16])(uVar37 * 2);
              if ((undefined1 (*) [16])(uVar37 * 2) < pauVar32) {
                pauVar43 = pauVar32;
              }
              uVar56 = 0x1a;
              if (((ulong)pauVar43 | 7) != 0x17) {
                uVar56 = ((ulong)pauVar43 | 7) + 1;
              }
              if (pauVar43 < (undefined1 (*) [16])0x17) {
                uVar56 = 0x17;
              }
            }
            pauStack_3c0 = pauVar32;
            pbStack_398 = pbVar45;
            pauVar32 = (undefined1 (*) [16])
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar56);
            if (uVar56 != 0 && pauVar32 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(uVar56,0);
            }
            if (unaff_R14 != (undefined1 (*) [16])0x0) {
              func_0x0eee2ee0(pauVar32,pauStack_410,unaff_R14);
            }
            func_0x0eee2f00(*unaff_R14 + (long)*pauVar32,pbStack_398,puVar50);
            if (uVar37 + 1 != 0x17) {
              func_0x0412a280(pauStack_410,uVar37 + 1);
            }
            pauVar43 = (undefined1 (*) [16])(uVar56 | 1);
            (*pauStack_3c0)[(long)*pauVar32] = 0;
          }
          uStack_358 = 0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_351 = 0;
          cStack_350 = '\0';
          uStack_34f = 0;
          uStack_34e = 0;
          uStack_34c = 0;
          pauStack_348 = (undefined1 (*) [16])0x0;
          if ((((ulong)pauVar43 & 1) != 0) &&
             (func_0x0412a280(pauVar32,(ulong)pauVar43 & 0xfffffffffffffffe), (uStack_358 & 1) != 0)
             ) {
            func_0x0412a280(pauStack_348,
                            CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358))
                                    ) & 0xfffffffffffffffe);
          }
          puVar27 = puVar27 + 0x70;
        } while (puVar27 != puVar49);
      }
      puVar27 = *(undefined1 **)pauVar62[9];
      puVar49 = *(undefined1 **)(pauVar62[9] + 8);
      if (puVar27 != puVar49) {
        puStack_360 = pauVar62[1] + 9;
        do {
          bVar35 = pauVar62[1][8];
          if ((bVar35 & 1) == 0) {
            uVar37 = (ulong)(bVar35 >> 1);
          }
          else {
            uVar37 = *(ulong *)pauVar62[2];
          }
          puVar50 = (undefined1 *)(uVar37 + 1);
          if ((undefined1 *)0xfffffffffffffff7 < puVar50) goto LAB_0d84d2eb;
          if (puVar50 < (undefined1 *)0x17) {
            uStack_354 = 0;
            uStack_353 = 0;
            uStack_351 = 0;
            cStack_350 = '\0';
            uStack_34f = 0;
            uStack_34e = 0;
            uStack_34c = 0;
            pauStack_348 = (undefined1 (*) [16])0x0;
            uStack_358 = (uint)(byte)((char)puVar50 * '\x02');
            pauVar43 = (undefined1 (*) [16])((long)&uStack_358 + 1);
            if (uVar37 != 0) goto joined_r0x0d841915;
          }
          else {
            lVar42 = ((ulong)puVar50 | 7) + 1;
            if (((ulong)puVar50 | 7) == 0x17) {
              lVar42 = 0x1a;
            }
            pauVar43 = (undefined1 (*) [16])
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
            if (pauVar43 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(lVar42,0);
            }
            uStack_358 = (uint)lVar42 | 1;
            uStack_354 = (undefined1)((ulong)lVar42 >> 0x20);
            uStack_353 = (undefined2)((ulong)lVar42 >> 0x28);
            uStack_351 = (undefined1)((ulong)lVar42 >> 0x38);
            uStack_34f = (undefined1)((ulong)puVar50 >> 8);
            uStack_34e = (undefined2)((ulong)puVar50 >> 0x10);
            uStack_34c = (undefined4)((ulong)puVar50 >> 0x20);
            pauStack_348 = pauVar43;
            cStack_350 = (char)puVar50;
joined_r0x0d841915:
            puVar50 = puStack_360;
            if ((bVar35 & 1) != 0) {
              puVar50 = *(undefined1 **)(pauVar62[2] + 8);
            }
            func_0x0eee2ee0(pauVar43,puVar50,uVar37);
          }
          *(undefined2 *)(*pauVar43 + uVar37) = 0x2e;
          bVar65 = (puVar27[0x18] & 1) != 0;
          pbVar45 = puVar27 + 0x19;
          if (bVar65) {
            pbVar45 = *(byte **)(puVar27 + 0x28);
          }
          puVar50 = (undefined1 *)(ulong)((byte)puVar27[0x18] >> 1);
          if (bVar65) {
            puVar50 = *(undefined1 **)(puVar27 + 0x20);
          }
          uVar37 = CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
          unaff_R14 = (undefined1 (*) [16])((uVar37 & 0xfffffffffffffffe) - 1);
          if ((uStack_358 & 1) == 0) {
            unaff_R14 = (undefined1 (*) [16])0x16;
          }
          if ((uStack_358 & 1) == 0) {
            pauVar43 = (undefined1 (*) [16])(ulong)((uint)(uVar37 >> 1) & 0x7f);
            if ((undefined1 *)((long)unaff_R14 - (long)pauVar43) < puVar50) goto LAB_0d841936;
LAB_0d841843:
            pauVar32 = pauStack_348;
            if (puVar50 != (undefined1 *)0x0) {
              if ((uStack_358 & 1) == 0) {
                pauVar32 = (undefined1 (*) [16])((long)&uStack_358 + 1);
              }
              func_0x0eee2ee0(*pauVar43 + (long)*pauVar32,pbVar45,puVar50);
              if ((uStack_358 & 1) == 0) {
                uStack_358 = CONCAT31(uStack_358._1_3_,(char)(puVar50 + (long)*pauVar43) * '\x02');
              }
              (puVar50 + (long)*pauVar43)[(long)*pauVar32] = 0;
              uVar37 = CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
              pauVar32 = pauStack_348;
            }
          }
          else {
            pauVar43 = (undefined1 (*) [16])
                       CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)));
            if (puVar50 <= (undefined1 *)((long)unaff_R14 - (long)pauVar43)) goto LAB_0d841843;
LAB_0d841936:
            pauVar32 = (undefined1 (*) [16])(puVar50 + (long)*pauVar43);
            if (-(long)unaff_R14 - 10U < (ulong)((long)pauVar32 - (long)unaff_R14))
            goto LAB_0d84d2fa;
            pauStack_410 = (undefined1 (*) [16])((long)&uStack_358 + 1);
            if ((uStack_358 & 1) != 0) {
              pauStack_410 = pauStack_348;
            }
            uVar37 = 0xfffffffffffffff7;
            if (unaff_R14 < (undefined1 (*) [16])0x7ffffffffffffff3) {
              pauVar58 = (undefined1 (*) [16])((long)unaff_R14 * 2);
              if ((undefined1 (*) [16])((long)unaff_R14 * 2) < pauVar32) {
                pauVar58 = pauVar32;
              }
              uVar37 = 0x1a;
              if (((ulong)pauVar58 | 7) != 0x17) {
                uVar37 = ((ulong)pauVar58 | 7) + 1;
              }
              if (pauVar58 < (undefined1 (*) [16])0x17) {
                uVar37 = 0x17;
              }
            }
            pauStack_3c0 = pauVar32;
            pbStack_398 = pbVar45;
            pauVar32 = (undefined1 (*) [16])
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
            if (uVar37 != 0 && pauVar32 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(uVar37,0);
            }
            if (pauVar43 != (undefined1 (*) [16])0x0) {
              func_0x0eee2ee0(pauVar32,pauStack_410,pauVar43);
            }
            func_0x0eee2f00(*pauVar43 + (long)*pauVar32,pbStack_398,puVar50);
            unaff_R14 = (undefined1 (*) [16])(*unaff_R14 + 1);
            if (unaff_R14 != (undefined1 (*) [16])0x17) {
              func_0x0412a280(pauStack_410,unaff_R14);
            }
            uVar37 = uVar37 | 1;
            (*pauStack_3c0)[(long)*pauVar32] = 0;
          }
          uStack_358 = 0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_351 = 0;
          cStack_350 = '\0';
          uStack_34f = 0;
          uStack_34e = 0;
          uStack_34c = 0;
          pauStack_348 = (undefined1 (*) [16])0x0;
          if (((uVar37 & 1) != 0) &&
             (func_0x0412a280(pauVar32,uVar37 & 0xfffffffffffffffe), (uStack_358 & 1) != 0)) {
            func_0x0412a280(pauStack_348,
                            CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358))
                                    ) & 0xfffffffffffffffe);
          }
          puVar27 = puVar27 + 0x1b0;
        } while (puVar27 != puVar49);
      }
      pauVar62 = pauVar62 + 0xf;
    } while (pauVar62 != pauStack_390);
  }
  pauVar32 = *(undefined1 (**) [16])(param_2 + 0x88);
  pauStack_390 = *(undefined1 (**) [16])(param_2 + 0x90);
  if (pauVar32 != pauStack_390) {
    do {
      puVar27 = *(undefined1 **)pauVar32[5];
      puVar49 = *(undefined1 **)(pauVar32[5] + 8);
      if (puVar27 != puVar49) {
        puStack_360 = pauVar32[1] + 9;
        do {
          bVar35 = pauVar32[1][8];
          if ((bVar35 & 1) == 0) {
            uVar37 = (ulong)(bVar35 >> 1);
          }
          else {
            uVar37 = *(ulong *)pauVar32[2];
          }
          puVar50 = (undefined1 *)(uVar37 + 1);
          unaff_R14 = pauVar32;
          if ((undefined1 *)0xfffffffffffffff7 < puVar50) goto LAB_0d84d2f0;
          if (puVar50 < (undefined1 *)0x17) {
            uStack_354 = 0;
            uStack_353 = 0;
            uStack_351 = 0;
            cStack_350 = '\0';
            uStack_34f = 0;
            uStack_34e = 0;
            uStack_34c = 0;
            pauStack_348 = (undefined1 (*) [16])0x0;
            uStack_358 = (uint)(byte)((char)puVar50 * '\x02');
            pauVar43 = (undefined1 (*) [16])((long)&uStack_358 + 1);
            if (uVar37 != 0) goto joined_r0x0d841ce0;
          }
          else {
            uVar56 = ((ulong)puVar50 | 7) + 1;
            if (((ulong)puVar50 | 7) == 0x17) {
              uVar56 = 0x1a;
            }
            pauVar43 = (undefined1 (*) [16])
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar56);
            if (pauVar43 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(uVar56,0);
            }
            pauVar62 = (undefined1 (*) [16])(uVar56 | 1);
            uStack_358 = (uint)pauVar62;
            uStack_354 = (undefined1)(uVar56 >> 0x20);
            uStack_353 = (undefined2)(uVar56 >> 0x28);
            uStack_351 = (undefined1)(uVar56 >> 0x38);
            uStack_34f = (undefined1)((ulong)puVar50 >> 8);
            uStack_34e = (undefined2)((ulong)puVar50 >> 0x10);
            uStack_34c = (undefined4)((ulong)puVar50 >> 0x20);
            pauStack_348 = pauVar43;
            cStack_350 = (char)puVar50;
joined_r0x0d841ce0:
            puVar50 = puStack_360;
            if ((bVar35 & 1) != 0) {
              puVar50 = *(undefined1 **)(pauVar32[2] + 8);
            }
            func_0x0eee2ee0(pauVar43,puVar50,uVar37);
          }
          *(undefined2 *)(*pauVar43 + uVar37) = 0x2e;
          bVar65 = (puVar27[0x18] & 1) != 0;
          pbVar45 = puVar27 + 0x19;
          if (bVar65) {
            pbVar45 = *(byte **)(puVar27 + 0x28);
          }
          puVar50 = (undefined1 *)(ulong)((byte)puVar27[0x18] >> 1);
          if (bVar65) {
            puVar50 = *(undefined1 **)(puVar27 + 0x20);
          }
          pauVar43 = (undefined1 (*) [16])
                     CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
          uVar37 = ((ulong)pauVar43 & 0xfffffffffffffffe) - 1;
          if ((uStack_358 & 1) == 0) {
            uVar37 = 0x16;
          }
          if ((uStack_358 & 1) == 0) {
            unaff_R14 = (undefined1 (*) [16])(ulong)((uint)((ulong)pauVar43 >> 1) & 0x7f);
            if ((undefined1 *)(uVar37 - (long)unaff_R14) < puVar50) goto LAB_0d841d09;
LAB_0d841c19:
            pauVar62 = pauStack_348;
            if (puVar50 != (undefined1 *)0x0) {
              if ((uStack_358 & 1) == 0) {
                pauVar62 = (undefined1 (*) [16])((long)&uStack_358 + 1);
              }
              func_0x0eee2ee0(*unaff_R14 + (long)*pauVar62,pbVar45,puVar50);
              if ((uStack_358 & 1) == 0) {
                uStack_358 = CONCAT31(uStack_358._1_3_,(char)(puVar50 + (long)*unaff_R14) * '\x02');
              }
              (puVar50 + (long)*unaff_R14)[(long)*pauVar62] = 0;
              pauVar43 = (undefined1 (*) [16])
                         CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
              pauVar62 = pauStack_348;
            }
          }
          else {
            unaff_R14 = (undefined1 (*) [16])
                        CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)));
            if (puVar50 <= (undefined1 *)(uVar37 - (long)unaff_R14)) goto LAB_0d841c19;
LAB_0d841d09:
            pauVar58 = (undefined1 (*) [16])(puVar50 + (long)*unaff_R14);
            if (-uVar37 - 10 < (long)pauVar58 - uVar37) goto LAB_0d84d2ff;
            pauStack_410 = (undefined1 (*) [16])((long)&uStack_358 + 1);
            if ((uStack_358 & 1) != 0) {
              pauStack_410 = pauStack_348;
            }
            uVar56 = 0xfffffffffffffff7;
            if (uVar37 < 0x7ffffffffffffff3) {
              pauVar62 = (undefined1 (*) [16])(uVar37 * 2);
              if ((undefined1 (*) [16])(uVar37 * 2) < pauVar58) {
                pauVar62 = pauVar58;
              }
              uVar56 = 0x1a;
              if (((ulong)pauVar62 | 7) != 0x17) {
                uVar56 = ((ulong)pauVar62 | 7) + 1;
              }
              if (pauVar62 < (undefined1 (*) [16])0x17) {
                uVar56 = 0x17;
              }
            }
            pauStack_3c0 = pauVar58;
            pbStack_398 = pbVar45;
            pauVar62 = (undefined1 (*) [16])
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar56);
            if (uVar56 != 0 && pauVar62 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(uVar56,0);
            }
            if (unaff_R14 != (undefined1 (*) [16])0x0) {
              func_0x0eee2ee0(pauVar62,pauStack_410,unaff_R14);
            }
            func_0x0eee2f00(*unaff_R14 + (long)*pauVar62,pbStack_398,puVar50);
            if (uVar37 + 1 != 0x17) {
              func_0x0412a280(pauStack_410,uVar37 + 1);
            }
            pauVar43 = (undefined1 (*) [16])(uVar56 | 1);
            (*pauStack_3c0)[(long)*pauVar62] = 0;
          }
          uStack_358 = 0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_351 = 0;
          cStack_350 = '\0';
          uStack_34f = 0;
          uStack_34e = 0;
          uStack_34c = 0;
          pauStack_348 = (undefined1 (*) [16])0x0;
          if ((((ulong)pauVar43 & 1) != 0) &&
             (func_0x0412a280(pauVar62,(ulong)pauVar43 & 0xfffffffffffffffe), (uStack_358 & 1) != 0)
             ) {
            func_0x0412a280(pauStack_348,
                            CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358))
                                    ) & 0xfffffffffffffffe);
          }
          puVar27 = puVar27 + 0x1b0;
        } while (puVar27 != puVar49);
      }
      pauVar32 = (undefined1 (*) [16])(pauVar32[9] + 8);
    } while (pauVar32 != pauStack_390);
  }
  pauVar43 = (undefined1 (*) [16])(param_2 + 8);
  if ((param_2[8] & 1) == 0) {
    uStack_88 = *(undefined8 *)(param_2 + 0x18);
    auStack_98 = *pauVar43;
  }
  else {
    func_0x0412e5e0(auStack_98,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_80 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x28);
  uStack_6c = *(undefined2 *)(param_2 + 0x34);
  uStack_70 = *(undefined4 *)(param_2 + 0x30);
  pauStack_40 = (undefined1 (*) [16])(param_2 + 0x38);
  if ((param_2[0x38] & 1) == 0) {
    uStack_58 = *(undefined8 *)(param_2 + 0x48);
    auStack_68 = *pauStack_40;
  }
  else {
    func_0x0412e5e0(auStack_68,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
  }
  uStack_50 = *(undefined2 *)(param_2 + 0x50);
  auStack_d8 = (undefined1  [16])0x0;
  puStack_c8 = (undefined1 *)0x0;
  uVar37 = *(ulong *)(param_2 + 0x58);
  unaff_R14 = *(undefined1 (**) [16])(param_2 + 0x60);
  uStack_358 = (uint)auStack_d8;
  uStack_354 = (undefined1)((ulong)auStack_d8 >> 0x20);
  uStack_353 = (undefined2)((ulong)auStack_d8 >> 0x28);
  uStack_351 = (undefined1)((ulong)auStack_d8 >> 0x38);
  cStack_350 = '\0';
  pauVar62 = (undefined1 (*) [16])((long)unaff_R14 - uVar37);
  puVar50 = param_2;
  if (pauVar62 == (undefined1 (*) [16])0x0) goto LAB_0d841ff1;
  if (0x38e38e38e38e38e < (ulong)(((long)pauVar62 >> 3) * -0x71c71c71c71c71c7)) goto LAB_0d84d3fe;
  puVar27 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,pauVar62);
  if (puVar27 == (undefined1 *)0x0) goto LAB_0d84d304;
LAB_0d841fb4:
  auStack_d8._8_8_ = puVar27;
  auStack_d8._0_8_ = puVar27;
  puStack_c8 = puVar27 + (long)*pauVar62;
  uVar28 = func_0x0d85e0d0(auStack_d8,uVar37,unaff_R14,puVar27);
  auStack_d8._8_8_ = uVar28;
LAB_0d841ff1:
  puVar1 = (ushort *)(puVar50 + 0x30);
  pauVar62 = *(undefined1 (**) [16])(puVar50 + 0x70);
  pauVar32 = *(undefined1 (**) [16])(puVar50 + 0x78);
  auStack_f8 = (undefined1  [16])0x0;
  uStack_e8 = 0;
  puStack_360 = (undefined1 *)CONCAT44(puStack_360._4_4_,(uint)(byte)lStack_370);
  pauStack_48 = pauVar43;
  if (pauVar62 != pauVar32) {
    pbStack_398 = param_2 + 0x39;
    pauStack_1e8 = pauVar32;
    do {
      cVar23 = func_0x0d850fd0(param_2,*(undefined8 *)*pauVar62,*(undefined8 *)(*pauVar62 + 8),
                               (ulong)puStack_360 & 0xffffffff,pbStack_368);
      if (cVar23 != '\0') {
        _auStack_3f8 = (undefined1  [16])0x0;
        pauStack_3e8 = (undefined1 (*) [16])0x0;
        pauVar43 = *(undefined1 (**) [16])pauVar62[5];
        pauStack_3c0 = *(undefined1 (**) [16])(pauVar62[5] + 8);
        pauStack_390 = pauVar62;
        if (pauVar43 != pauStack_3c0) {
          do {
            piVar46 = *(int **)*pauVar43;
            piVar7 = *(int **)(*pauVar43 + 8);
            if (((byte)lStack_370 == '\0') || (piVar46 != piVar7)) {
              if (piVar46 != piVar7) {
                bVar65 = false;
                do {
                  iVar26 = *piVar46;
                  if (iVar26 == 2) {
                    if ((param_2[0x38] & 1) == 0) {
                      if ((byte)param_2[0x38] >> 1 != 0) goto LAB_0d842225;
                    }
                    else if (*(long *)(param_2 + 0x40) != 0) goto LAB_0d842225;
                  }
                  else if (!bVar65) {
                    if (iVar26 == 1) {
                      bVar35 = param_2[0x38];
                      if ((bVar35 & 1) == 0) {
                        uVar37 = (ulong)(bVar35 >> 1);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) != 0) goto LAB_0d842343;
LAB_0d84232b:
                        if (uVar37 != uVar56 >> 1) goto LAB_0d84237a;
                      }
                      else {
                        uVar37 = *(ulong *)(param_2 + 0x40);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) == 0) goto LAB_0d84232b;
LAB_0d842343:
                        if (uVar37 != *(ulong *)(piVar46 + 6)) goto LAB_0d84237a;
                      }
                      pbVar45 = pbStack_398;
                      if ((bVar35 & 1) != 0) {
                        pbVar45 = *(byte **)(param_2 + 0x48);
                      }
                      if ((uVar56 & 1) == 0) {
                        iVar26 = func_0x0eee3000(pbVar45,(long)piVar46 + 0x11);
                      }
                      else {
                        iVar26 = func_0x0eee3000(pbVar45,*(undefined8 *)(piVar46 + 8));
                      }
                      if (iVar26 != 0) goto LAB_0d84237a;
                      bVar65 = true;
                    }
                    else {
                      if (iVar26 == 0) {
                        cVar23 = func_0x0d822d70(puVar1,piVar46 + 2);
                        if ((cVar23 == '\0') &&
                           ((bVar65 = true, *(char *)((long)piVar46 + 0x2a) != '\x01' ||
                            (*puVar1 < *(ushort *)(piVar46 + 10))))) goto LAB_0d842297;
LAB_0d84237a:
                        if (*piVar46 == 1) {
                          plVar40 = *(long **)pbStack_368;
                          plVar36 = *(long **)(pbStack_368 + 8);
                          if (plVar40 != plVar36) {
                            if ((*(byte *)(piVar46 + 4) & 1) == 0) {
                              uVar37 = (ulong)(*(byte *)(piVar46 + 4) >> 1);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,(long)piVar46 + 0x11,uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            else {
                              uVar37 = *(ulong *)(piVar46 + 6);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,*(undefined8 *)(piVar46 + 8),
                                                           uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            goto LAB_0d842297;
                          }
                        }
                      }
                      bVar65 = false;
                    }
                  }
LAB_0d842297:
                  piVar46 = piVar46 + 0xc;
                } while (piVar46 != piVar7);
                if (bVar65) goto LAB_0d842254;
              }
            }
            else {
LAB_0d842254:
              pauVar62 = pauStack_3f0;
              if (pauStack_3f0 < pauStack_3e8) {
                func_0x0652b020(pauStack_3f0,pauVar43);
                pauStack_3f0 = pauVar62 + 7;
              }
              else {
                lVar42 = (long)pauStack_3f0 - (long)auStack_3f8;
                uVar37 = (lVar42 >> 4) * 0x6db6db6db6db6db7 + 1;
                if (0x249249249249249 < uVar37) goto LAB_0d84d32c;
                lVar44 = (long)pauStack_3e8 - (long)auStack_3f8 >> 4;
                uVar56 = lVar44 * -0x2492492492492492;
                if (uVar37 < uVar56) {
                  uVar37 = uVar56;
                }
                if (0x124924924924923 < (ulong)(lVar44 * 0x6db6db6db6db6db7)) {
                  uVar37 = 0x249249249249249;
                }
                puStack_338 = auStack_3f8;
                if (uVar37 == 0) {
                  lVar44 = 0;
                }
                else {
                  if (0x249249249249249 < uVar37) goto LAB_0d84d359;
                  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x70);
                  if (lVar44 == 0) {
                    func_0x0eec74c0(uVar37 * 0x70,0);
                    lVar44 = 0;
                  }
                }
                uStack_358 = (uint)lVar44;
                uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
                uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
                uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
                pauStack_348 = (undefined1 (*) [16])(lVar42 + lVar44);
                cStack_350 = (char)pauStack_348;
                uStack_34f = (undefined1)((ulong)pauStack_348 >> 8);
                uStack_34e = (undefined2)((ulong)pauStack_348 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauStack_348 >> 0x20);
                auStack_340 = (undefined1  [8])(uVar37 * 0x70 + lVar44);
                func_0x0652b020(pauStack_348,pauVar43);
                pauVar32 = (undefined1 (*) [16])((long)pauStack_348 + 0x70);
                auVar57 = auStack_3f8;
                pauVar62 = pauStack_3f0;
                auVar64 = (undefined1  [8])
                          (CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)))
                          - ((long)pauStack_3f0 - (long)auStack_3f8));
                pauStack_348 = pauVar32;
                if ((undefined1  [8])pauStack_3f0 != auStack_3f8) {
                  lVar42 = 0;
                  do {
                    func_0x0652b020((long)auVar64 + lVar42,(undefined1 *)auVar57 + lVar42);
                    pauVar58 = (undefined1 (*) [16])
                               (*(undefined1 (*) [16])((long)auVar57 + 0x70) + lVar42);
                    lVar42 = lVar42 + 0x70;
                  } while (pauVar58 != pauVar62);
                  do {
                    func_0x05f93280(auVar57);
                    auVar57 = (undefined1  [8])((long)auVar57 + 0x70);
                  } while (auVar57 != (undefined1  [8])pauVar62);
                  auVar57 = auStack_3f8;
                }
                pauVar62 = pauStack_3e8;
                pauStack_3f0 = pauVar32;
                auStack_3f8 = auVar64;
                pauStack_3e8 = (undefined1 (*) [16])auStack_340;
                if (auVar57 != (undefined1  [8])0x0) {
                  func_0x0412a280(auVar57,(long)pauVar62 - (long)auVar57);
                  auVar64 = auStack_3f8;
                }
                auStack_3f8 = auVar64;
              }
            }
LAB_0d842225:
            pauVar43 = pauVar43 + 7;
          } while (pauVar43 != pauStack_3c0);
        }
        auStack_3d8 = (undefined1  [16])0x0;
        pauStack_3c8 = (undefined1 (*) [16])0x0;
        pauVar62 = *(undefined1 (**) [16])(pauStack_390[7] + 8);
        pauStack_3c0 = *(undefined1 (**) [16])pauStack_390[8];
        if (pauVar62 != pauStack_3c0) {
          do {
            piVar46 = *(int **)*pauVar62;
            piVar7 = *(int **)(*pauVar62 + 8);
            if (((byte)lStack_370 == '\0') || (piVar46 != piVar7)) {
              if (piVar46 != piVar7) {
                bVar65 = false;
                do {
                  iVar26 = *piVar46;
                  if (iVar26 == 2) {
                    if ((param_2[0x38] & 1) == 0) {
                      if ((byte)param_2[0x38] >> 1 != 0) goto LAB_0d842685;
                    }
                    else if (*(long *)(param_2 + 0x40) != 0) goto LAB_0d842685;
                  }
                  else if (!bVar65) {
                    if (iVar26 == 1) {
                      bVar35 = param_2[0x38];
                      if ((bVar35 & 1) == 0) {
                        uVar37 = (ulong)(bVar35 >> 1);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) != 0) goto LAB_0d8427a3;
LAB_0d84278b:
                        if (uVar37 != uVar56 >> 1) goto LAB_0d8427da;
                      }
                      else {
                        uVar37 = *(ulong *)(param_2 + 0x40);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) == 0) goto LAB_0d84278b;
LAB_0d8427a3:
                        if (uVar37 != *(ulong *)(piVar46 + 6)) goto LAB_0d8427da;
                      }
                      pbVar45 = pbStack_398;
                      if ((bVar35 & 1) != 0) {
                        pbVar45 = *(byte **)(param_2 + 0x48);
                      }
                      if ((uVar56 & 1) == 0) {
                        iVar26 = func_0x0eee3000(pbVar45,(long)piVar46 + 0x11);
                      }
                      else {
                        iVar26 = func_0x0eee3000(pbVar45,*(undefined8 *)(piVar46 + 8));
                      }
                      if (iVar26 != 0) goto LAB_0d8427da;
                      bVar65 = true;
                    }
                    else {
                      if (iVar26 == 0) {
                        cVar23 = func_0x0d822d70(puVar1,piVar46 + 2);
                        if ((cVar23 == '\0') &&
                           ((bVar65 = true, *(char *)((long)piVar46 + 0x2a) != '\x01' ||
                            (*puVar1 < *(ushort *)(piVar46 + 10))))) goto LAB_0d8426f7;
LAB_0d8427da:
                        if (*piVar46 == 1) {
                          plVar40 = *(long **)pbStack_368;
                          plVar36 = *(long **)(pbStack_368 + 8);
                          if (plVar40 != plVar36) {
                            if ((*(byte *)(piVar46 + 4) & 1) == 0) {
                              uVar37 = (ulong)(*(byte *)(piVar46 + 4) >> 1);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,(long)piVar46 + 0x11,uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            else {
                              uVar37 = *(ulong *)(piVar46 + 6);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,*(undefined8 *)(piVar46 + 8),
                                                           uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            goto LAB_0d8426f7;
                          }
                        }
                      }
                      bVar65 = false;
                    }
                  }
LAB_0d8426f7:
                  piVar46 = piVar46 + 0xc;
                } while (piVar46 != piVar7);
                if (bVar65) goto LAB_0d8426b4;
              }
            }
            else {
LAB_0d8426b4:
              uVar28 = auStack_3d8._8_8_;
              if ((ulong)auStack_3d8._8_8_ < pauStack_3c8) {
                func_0x0652b020(auStack_3d8._8_8_,pauVar62);
                auStack_3d8._8_8_ = (undefined1 (*) [16])(uVar28 + 0x70);
              }
              else {
                lVar42 = auStack_3d8._8_8_ - auStack_3d8._0_8_;
                uVar37 = (lVar42 >> 4) * 0x6db6db6db6db6db7 + 1;
                if (0x249249249249249 < uVar37) goto LAB_0d84d331;
                lVar44 = (long)pauStack_3c8 - auStack_3d8._0_8_ >> 4;
                uVar56 = lVar44 * -0x2492492492492492;
                if (uVar37 < uVar56) {
                  uVar37 = uVar56;
                }
                if (0x124924924924923 < (ulong)(lVar44 * 0x6db6db6db6db6db7)) {
                  uVar37 = 0x249249249249249;
                }
                puStack_338 = auStack_3d8;
                if (uVar37 == 0) {
                  lVar44 = 0;
                }
                else {
                  if (0x249249249249249 < uVar37) goto LAB_0d84d35e;
                  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x70);
                  if (lVar44 == 0) {
                    func_0x0eec74c0(uVar37 * 0x70,0);
                    lVar44 = 0;
                  }
                }
                uStack_358 = (uint)lVar44;
                uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
                uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
                uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
                pauStack_348 = (undefined1 (*) [16])(lVar42 + lVar44);
                cStack_350 = (char)pauStack_348;
                uStack_34f = (undefined1)((ulong)pauStack_348 >> 8);
                uStack_34e = (undefined2)((ulong)pauStack_348 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauStack_348 >> 0x20);
                auStack_340 = (undefined1  [8])(uVar37 * 0x70 + lVar44);
                func_0x0652b020(pauStack_348,pauVar62);
                pauVar43 = (undefined1 (*) [16])((long)pauStack_348 + 0x70);
                lVar42 = auStack_3d8._0_8_;
                uVar28 = auStack_3d8._8_8_;
                lVar44 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350))) -
                         (auStack_3d8._8_8_ - auStack_3d8._0_8_);
                pauStack_348 = pauVar43;
                if (auStack_3d8._8_8_ != auStack_3d8._0_8_) {
                  lVar60 = 0;
                  do {
                    func_0x0652b020(lVar44 + lVar60,lVar42 + lVar60);
                    lVar47 = lVar42 + lVar60;
                    lVar60 = lVar60 + 0x70;
                  } while (lVar47 + 0x70 != uVar28);
                  do {
                    func_0x05f93280(lVar42);
                    lVar42 = lVar42 + 0x70;
                  } while (lVar42 != uVar28);
                  lVar42 = auStack_3d8._0_8_;
                }
                pauVar32 = pauStack_3c8;
                auStack_3d8._8_8_ = pauVar43;
                auStack_3d8._0_8_ = lVar44;
                pauStack_3c8 = (undefined1 (*) [16])auStack_340;
                if (lVar42 != 0) {
                  func_0x0412a280(lVar42,(long)pauVar32 - lVar42);
                  lVar44 = auStack_3d8._0_8_;
                }
                auStack_3d8._0_8_ = lVar44;
              }
            }
LAB_0d842685:
            pauVar62 = pauVar62 + 7;
          } while (pauVar62 != pauStack_3c0);
        }
        auStack_388 = (undefined1  [16])0x0;
        puStack_378 = (undefined8 *)0x0;
        pauVar62 = *(undefined1 (**) [16])pauStack_390[9];
        pauStack_3c0 = *(undefined1 (**) [16])(pauStack_390[9] + 8);
        if (pauVar62 != pauStack_3c0) {
          do {
            piVar46 = *(int **)*pauVar62;
            piVar7 = *(int **)(*pauVar62 + 8);
            if (((byte)lStack_370 == '\0') || (piVar46 != piVar7)) {
              if (piVar46 != piVar7) {
                bVar65 = false;
                do {
                  iVar26 = *piVar46;
                  if (iVar26 == 2) {
                    if ((param_2[0x38] & 1) == 0) {
                      if ((byte)param_2[0x38] >> 1 != 0) goto LAB_0d842ae8;
                    }
                    else if (*(long *)(param_2 + 0x40) != 0) goto LAB_0d842ae8;
                  }
                  else if (!bVar65) {
                    if (iVar26 == 1) {
                      bVar35 = param_2[0x38];
                      if ((bVar35 & 1) == 0) {
                        uVar37 = (ulong)(bVar35 >> 1);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) != 0) goto LAB_0d842c23;
LAB_0d842c0b:
                        if (uVar37 != uVar56 >> 1) goto LAB_0d842c5a;
                      }
                      else {
                        uVar37 = *(ulong *)(param_2 + 0x40);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) == 0) goto LAB_0d842c0b;
LAB_0d842c23:
                        if (uVar37 != *(ulong *)(piVar46 + 6)) goto LAB_0d842c5a;
                      }
                      pbVar45 = pbStack_398;
                      if ((bVar35 & 1) != 0) {
                        pbVar45 = *(byte **)(param_2 + 0x48);
                      }
                      if ((uVar56 & 1) == 0) {
                        iVar26 = func_0x0eee3000(pbVar45,(long)piVar46 + 0x11);
                      }
                      else {
                        iVar26 = func_0x0eee3000(pbVar45,*(undefined8 *)(piVar46 + 8));
                      }
                      if (iVar26 != 0) goto LAB_0d842c5a;
                      bVar65 = true;
                    }
                    else {
                      if (iVar26 == 0) {
                        cVar23 = func_0x0d822d70(puVar1,piVar46 + 2);
                        if ((cVar23 == '\0') &&
                           ((bVar65 = true, *(char *)((long)piVar46 + 0x2a) != '\x01' ||
                            (*puVar1 < *(ushort *)(piVar46 + 10))))) goto LAB_0d842b7b;
LAB_0d842c5a:
                        if (*piVar46 == 1) {
                          plVar40 = *(long **)pbStack_368;
                          plVar36 = *(long **)(pbStack_368 + 8);
                          if (plVar40 != plVar36) {
                            if ((*(byte *)(piVar46 + 4) & 1) == 0) {
                              uVar37 = (ulong)(*(byte *)(piVar46 + 4) >> 1);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,(long)piVar46 + 0x11,uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            else {
                              uVar37 = *(ulong *)(piVar46 + 6);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,*(undefined8 *)(piVar46 + 8),
                                                           uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            goto LAB_0d842b7b;
                          }
                        }
                      }
                      bVar65 = false;
                    }
                  }
LAB_0d842b7b:
                  piVar46 = piVar46 + 0xc;
                } while (piVar46 != piVar7);
                if (bVar65) goto LAB_0d842b1a;
              }
            }
            else {
LAB_0d842b1a:
              uVar28 = auStack_388._8_8_;
              if ((ulong)auStack_388._8_8_ < puStack_378) {
                func_0x065b0810(auStack_388._8_8_,pauVar62);
                auStack_388._8_8_ = (undefined8 *)(uVar28 + 0x1b0);
              }
              else {
                lVar42 = auStack_388._8_8_ - auStack_388._0_8_;
                uVar37 = (lVar42 >> 4) * -0x7b425ed097b425ed + 1;
                if (0x97b425ed097b42 < uVar37) goto LAB_0d84d336;
                lVar44 = (long)puStack_378 - auStack_388._0_8_ >> 4;
                uVar56 = lVar44 * 0x97b425ed097b426;
                if (uVar37 < uVar56) {
                  uVar37 = uVar56;
                }
                if (0x4bda12f684bda0 < (ulong)(lVar44 * -0x7b425ed097b425ed)) {
                  uVar37 = 0x97b425ed097b42;
                }
                puStack_338 = auStack_388;
                if (uVar37 == 0) {
                  lVar44 = 0;
                }
                else {
                  if (0x97b425ed097b42 < uVar37) goto LAB_0d84d363;
                  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x1b0);
                  if (lVar44 == 0) {
                    func_0x0eec74c0(uVar37 * 0x1b0,0);
                    lVar44 = 0;
                  }
                }
                uStack_358 = (uint)lVar44;
                uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
                uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
                uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
                pauStack_348 = (undefined1 (*) [16])(lVar42 + lVar44);
                cStack_350 = (char)pauStack_348;
                uStack_34f = (undefined1)((ulong)pauStack_348 >> 8);
                uStack_34e = (undefined2)((ulong)pauStack_348 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauStack_348 >> 0x20);
                auStack_340 = (undefined1  [8])(uVar37 * 0x1b0 + lVar44);
                func_0x065b0810(pauStack_348,pauVar62);
                pauVar58 = (undefined1 (*) [16])((long)pauStack_348 + 0x1b0);
                pauVar43 = (undefined1 (*) [16])auStack_388._0_8_;
                uVar28 = auStack_388._8_8_;
                pauVar32 = (undefined1 (*) [16])
                           (CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350))
                                    ) - (auStack_388._8_8_ - auStack_388._0_8_));
                pauStack_348 = pauVar58;
                if (auStack_388._8_8_ != auStack_388._0_8_) {
                  lVar42 = 0;
                  do {
                    func_0x065b0810(*pauVar32 + lVar42,*pauVar43 + lVar42);
                    pauVar29 = (undefined1 (*) [16])
                               (*(undefined1 (*) [16])((undefined8)pauVar43 + 0x1b) + lVar42);
                    lVar42 = lVar42 + 0x1b0;
                  } while (pauVar29 != (undefined1 (*) [16])uVar28);
                  do {
                    func_0x0652dc20(pauVar43);
                    pauVar43 = pauVar43 + 0x1b;
                  } while (pauVar43 != (undefined1 (*) [16])uVar28);
                  pauVar43 = (undefined1 (*) [16])auStack_388._0_8_;
                }
                puVar34 = puStack_378;
                auStack_388._8_8_ = pauVar58;
                auStack_388._0_8_ = pauVar32;
                puStack_378 = (undefined8 *)auStack_340;
                if (pauVar43 != (undefined1 (*) [16])0x0) {
                  func_0x0412a280(pauVar43,(long)puVar34 - (long)pauVar43);
                  pauVar32 = (undefined1 (*) [16])auStack_388._0_8_;
                }
                auStack_388._0_8_ = pauVar32;
              }
            }
LAB_0d842ae8:
            pauVar62 = pauVar62 + 0x1b;
          } while (pauVar62 != pauStack_3c0);
        }
        auStack_208 = (undefined1  [16])0x0;
        pauStack_1f8 = (undefined1 (*) [16])0x0;
        pauVar62 = *(undefined1 (**) [16])(pauStack_390[10] + 8);
        pauStack_3c0 = *(undefined1 (**) [16])pauStack_390[0xb];
        if (pauVar62 != pauStack_3c0) {
          do {
            piVar46 = *(int **)*pauVar62;
            piVar7 = *(int **)(*pauVar62 + 8);
            if (((byte)lStack_370 == '\0') || (piVar46 != piVar7)) {
              if (piVar46 != piVar7) {
                bVar65 = false;
                do {
                  iVar26 = *piVar46;
                  if (iVar26 == 2) {
                    if ((param_2[0x38] & 1) == 0) {
                      if ((byte)param_2[0x38] >> 1 != 0) goto LAB_0d842fa8;
                    }
                    else if (*(long *)(param_2 + 0x40) != 0) goto LAB_0d842fa8;
                  }
                  else if (!bVar65) {
                    if (iVar26 == 1) {
                      bVar35 = param_2[0x38];
                      if ((bVar35 & 1) == 0) {
                        uVar37 = (ulong)(bVar35 >> 1);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) != 0) goto LAB_0d843217;
LAB_0d8431fe:
                        if (uVar37 != uVar56 >> 1) goto LAB_0d84324e;
                      }
                      else {
                        uVar37 = *(ulong *)(param_2 + 0x40);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) == 0) goto LAB_0d8431fe;
LAB_0d843217:
                        if (uVar37 != *(ulong *)(piVar46 + 6)) goto LAB_0d84324e;
                      }
                      pbVar45 = pbStack_398;
                      if ((bVar35 & 1) != 0) {
                        pbVar45 = *(byte **)(param_2 + 0x48);
                      }
                      if ((uVar56 & 1) == 0) {
                        iVar26 = func_0x0eee3000(pbVar45,(long)piVar46 + 0x11);
                      }
                      else {
                        iVar26 = func_0x0eee3000(pbVar45,*(undefined8 *)(piVar46 + 8));
                      }
                      if (iVar26 != 0) goto LAB_0d84324e;
                      bVar65 = true;
                    }
                    else {
                      if (iVar26 == 0) {
                        cVar23 = func_0x0d822d70(puVar1,piVar46 + 2);
                        if ((cVar23 == '\0') &&
                           ((bVar65 = true, *(char *)((long)piVar46 + 0x2a) != '\x01' ||
                            (*puVar1 < *(ushort *)(piVar46 + 10))))) goto LAB_0d84316b;
LAB_0d84324e:
                        if (*piVar46 == 1) {
                          plVar40 = *(long **)pbStack_368;
                          plVar36 = *(long **)(pbStack_368 + 8);
                          if (plVar40 != plVar36) {
                            if ((*(byte *)(piVar46 + 4) & 1) == 0) {
                              uVar37 = (ulong)(*(byte *)(piVar46 + 4) >> 1);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,(long)piVar46 + 0x11,uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            else {
                              uVar37 = *(ulong *)(piVar46 + 6);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,*(undefined8 *)(piVar46 + 8),
                                                           uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            goto LAB_0d84316b;
                          }
                        }
                      }
                      bVar65 = false;
                    }
                  }
LAB_0d84316b:
                  piVar46 = piVar46 + 0xc;
                } while (piVar46 != piVar7);
                if (bVar65) goto LAB_0d842fdf;
              }
            }
            else {
LAB_0d842fdf:
              auVar3 = auStack_208;
              uVar28 = auStack_208._8_8_;
              if ((ulong)auStack_208._8_8_ < pauStack_1f8) {
                *(undefined1 (*) [16])auStack_208._8_8_ = (undefined1  [16])0x0;
                *(undefined8 *)*(undefined1 (*) [16])(auStack_208._8_8_ + 0x10) = 0;
                puVar33 = *(undefined4 **)*pauVar62;
                puVar8 = *(undefined4 **)(*pauVar62 + 8);
                auStack_3b8[8] = 0;
                auStack_3b8._0_8_ = auStack_208._8_8_;
                lVar42 = (long)puVar8 - (long)puVar33;
                if (lVar42 != 0) {
                  if (0x555555555555555 < (ulong)((lVar42 >> 4) * -0x5555555555555555))
                  goto LAB_0d84d372;
                  pauVar43 = (undefined1 (*) [16])
                             (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
                  if (pauVar43 == (undefined1 (*) [16])0x0) {
                    func_0x0eec74c0(lVar42,0);
                  }
                  *(undefined1 (**) [16])(undefined1 *)uVar28 = pauVar43;
                  *(undefined1 (**) [16])((undefined1 *)uVar28 + 8) = pauVar43;
                  *(undefined1 **)*(undefined1 (*) [16])(uVar28 + 0x10) =
                       (undefined1 *)(lVar42 + (long)pauVar43);
                  uStack_358 = auVar3._8_4_;
                  uStack_354 = auVar3[0xc];
                  uStack_353 = auVar3._13_2_;
                  uStack_351 = auVar3[0xf];
                  cStack_350 = (char)&pauStack_b8;
                  uStack_34f = (undefined1)((ulong)&pauStack_b8 >> 8);
                  uStack_34e = (undefined2)((ulong)&pauStack_b8 >> 0x10);
                  uStack_34c = (undefined4)((ulong)&pauStack_b8 >> 0x20);
                  pauStack_348 = (undefined1 (*) [16])&pauStack_a8;
                  auVar3[0xf] = 0;
                  auVar3._0_15_ = stack0xfffffffffffffcc1;
                  _auStack_340 = auVar3 << 8;
                  pauStack_b8 = pauVar43;
                  do {
                    *(undefined4 *)*pauVar43 = *puVar33;
                    *(undefined2 *)(*pauVar43 + 0xc) = *(undefined2 *)(puVar33 + 3);
                    *(undefined4 *)(*pauVar43 + 8) = puVar33[2];
                    pauStack_a8 = pauVar43;
                    if ((*(byte *)(puVar33 + 4) & 1) == 0) {
                      *(undefined8 *)pauVar43[2] = *(undefined8 *)(puVar33 + 8);
                      uVar31 = *(undefined8 *)(puVar33 + 6);
                      *(undefined8 *)pauVar43[1] = *(undefined8 *)(puVar33 + 4);
                      *(undefined8 *)(pauVar43[1] + 8) = uVar31;
                    }
                    else {
                      func_0x0412e5e0(pauVar43 + 1,*(undefined8 *)(puVar33 + 8),
                                      *(undefined8 *)(puVar33 + 6));
                    }
                    *(undefined4 *)(pauVar43[2] + 8) = puVar33[10];
                    puVar33 = puVar33 + 0xc;
                    pauVar43 = pauStack_a8 + 3;
                  } while (puVar33 != puVar8);
                  *(undefined1 (**) [16])((undefined1 *)uVar28 + 8) = pauVar43;
                  pauStack_a8 = pauVar43;
                }
                if ((pauVar62[1][8] & 1) == 0) {
                  *(undefined8 *)(*(undefined1 (*) [16])(uVar28 + 0x20) + 8) =
                       *(undefined8 *)(pauVar62[2] + 8);
                  uVar31 = *(undefined8 *)pauVar62[2];
                  *(undefined8 *)(*(undefined1 (*) [16])(uVar28 + 0x10) + 8) =
                       *(undefined8 *)(pauVar62[1] + 8);
                  *(undefined8 *)*(undefined1 (*) [16])(uVar28 + 0x20) = uVar31;
                }
                else {
                  func_0x0412e5e0(*(undefined1 (*) [16])(uVar28 + 0x10) + 8,
                                  *(undefined8 *)(pauVar62[2] + 8),*(undefined8 *)pauVar62[2]);
                }
                (*(undefined1 (*) [16])(uVar28 + 0x40))[0] = pauVar62[4][0];
                uVar31 = *(undefined8 *)(pauVar62[3] + 8);
                *(undefined8 *)*(undefined1 (*) [16])(uVar28 + 0x30) = *(undefined8 *)pauVar62[3];
                *(undefined8 *)(*(undefined1 (*) [16])(uVar28 + 0x30) + 8) = uVar31;
                pauVar43 = *(undefined1 (**) [16])pauVar62[7];
                if (pauVar43 == (undefined1 (*) [16])0x0) {
                  uVar31 = 0;
LAB_0d8436a8:
                  *(undefined8 *)*(undefined1 (*) [16])(uVar28 + 0x70) = uVar31;
                }
                else {
                  if (pauVar43 != pauVar62 + 5) {
                    uVar31 = (**(code **)(*(long *)*pauVar43 + 0x10))();
                    goto LAB_0d8436a8;
                  }
                  *(undefined1 (**) [16])*(undefined1 (*) [16])(uVar28 + 0x70) =
                       (undefined1 (*) [16])(uVar28 + 0x50);
                  (**(code **)(**(long **)pauVar62[7] + 0x18))();
                }
                auStack_208._8_8_ = (undefined1 (*) [16])(uVar28 + 0x80);
              }
              else {
                lVar42 = auStack_208._8_8_ - auStack_208._0_8_;
                uVar37 = (lVar42 >> 7) + 1;
                if (0x1ffffffffffffff < uVar37) goto LAB_0d84d33b;
                uVar56 = (long)pauStack_1f8 - auStack_208._0_8_ >> 6;
                if (uVar56 <= uVar37) {
                  uVar56 = uVar37;
                }
                if (0x7fffffffffffff7f < (ulong)((long)pauStack_1f8 - auStack_208._0_8_)) {
                  uVar56 = 0x1ffffffffffffff;
                }
                puStack_338 = auStack_208;
                if (uVar56 == 0) {
                  lVar44 = 0;
                }
                else {
                  if (0x1ffffffffffffff < uVar56) goto LAB_0d84d368;
                  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar56 << 7);
                  if (lVar44 == 0) {
                    func_0x0eec74c0(uVar56 << 7,0);
                    lVar44 = 0;
                  }
                }
                uStack_358 = (uint)lVar44;
                uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
                uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
                uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
                pauVar43 = (undefined1 (*) [16])(lVar44 + lVar42);
                cStack_350 = (char)pauVar43;
                uStack_34f = (undefined1)((ulong)pauVar43 >> 8);
                uStack_34e = (undefined2)((ulong)pauVar43 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauVar43 >> 0x20);
                auStack_340 = (undefined1  [8])(uVar56 * 0x80 + lVar44);
                *(undefined1 (*) [16])(lVar44 + lVar42) = (undefined1  [16])0x0;
                *(undefined8 *)(lVar44 + 0x10 + lVar42) = 0;
                puVar33 = *(undefined4 **)*pauVar62;
                puVar8 = *(undefined4 **)(*pauVar62 + 8);
                uStack_a0 = 0;
                lVar42 = (long)puVar8 - (long)puVar33;
                pauStack_348 = pauVar43;
                pauStack_a8 = pauVar43;
                if (lVar42 != 0) {
                  if (0x555555555555555 < (ulong)((lVar42 >> 4) * -0x5555555555555555))
                  goto LAB_0d84d36d;
                  pauVar32 = (undefined1 (*) [16])
                             (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
                  if (pauVar32 == (undefined1 (*) [16])0x0) {
                    func_0x0eec74c0(lVar42,0);
                  }
                  *(undefined1 (**) [16])*pauVar43 = pauVar32;
                  *(undefined1 (**) [16])(*pauVar43 + 8) = pauVar32;
                  *(undefined1 **)pauVar43[1] = (undefined1 *)(lVar42 + (long)pauVar32);
                  stack0xfffffffffffffc50 = (undefined1 (*) [16])&pauStack_38;
                  auStack_3b8._0_8_ = pauVar43;
                  pauStack_3a8 = (undefined1 (*) [16])&pauStack_b8;
                  uStack_3a0 = 0;
                  pauStack_38 = pauVar32;
                  do {
                    *(undefined4 *)*pauVar32 = *puVar33;
                    *(undefined2 *)(*pauVar32 + 0xc) = *(undefined2 *)(puVar33 + 3);
                    *(undefined4 *)(*pauVar32 + 8) = puVar33[2];
                    pauStack_b8 = pauVar32;
                    if ((*(byte *)(puVar33 + 4) & 1) == 0) {
                      *(undefined8 *)pauVar32[2] = *(undefined8 *)(puVar33 + 8);
                      uVar28 = *(undefined8 *)(puVar33 + 6);
                      *(undefined8 *)pauVar32[1] = *(undefined8 *)(puVar33 + 4);
                      *(undefined8 *)(pauVar32[1] + 8) = uVar28;
                    }
                    else {
                      func_0x0412e5e0(pauVar32 + 1,*(undefined8 *)(puVar33 + 8),
                                      *(undefined8 *)(puVar33 + 6));
                    }
                    *(undefined4 *)(pauVar32[2] + 8) = puVar33[10];
                    puVar33 = puVar33 + 0xc;
                    pauVar32 = pauStack_b8 + 3;
                  } while (puVar33 != puVar8);
                  *(undefined1 (**) [16])(*pauVar43 + 8) = pauVar32;
                  pauStack_b8 = pauVar32;
                }
                if ((pauVar62[1][8] & 1) == 0) {
                  *(undefined8 *)(pauVar43[2] + 8) = *(undefined8 *)(pauVar62[2] + 8);
                  uVar28 = *(undefined8 *)pauVar62[2];
                  *(undefined8 *)(pauVar43[1] + 8) = *(undefined8 *)(pauVar62[1] + 8);
                  *(undefined8 *)pauVar43[2] = uVar28;
                }
                else {
                  func_0x0412e5e0(pauVar43[1] + 8,*(undefined8 *)(pauVar62[2] + 8),
                                  *(undefined8 *)pauVar62[2]);
                }
                pauVar43[4][0] = pauVar62[4][0];
                uVar28 = *(undefined8 *)(pauVar62[3] + 8);
                *(undefined8 *)pauVar43[3] = *(undefined8 *)pauVar62[3];
                *(undefined8 *)(pauVar43[3] + 8) = uVar28;
                pauVar32 = *(undefined1 (**) [16])pauVar62[7];
                if (pauVar32 == (undefined1 (*) [16])0x0) {
                  *(undefined8 *)pauVar43[7] = 0;
                }
                else if (pauVar32 == pauVar62 + 5) {
                  *(undefined1 (**) [16])pauVar43[7] = pauVar43 + 5;
                  (**(code **)(**(long **)pauVar62[7] + 0x18))();
                }
                else {
                  uVar28 = (**(code **)(*(long *)*pauVar32 + 0x10))();
                  *(undefined8 *)pauVar43[7] = uVar28;
                }
                lVar42 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)));
                pauStack_348 = pauStack_348 + 8;
                pauVar43 = (undefined1 (*) [16])auStack_208._0_8_;
                uVar28 = auStack_208._8_8_;
                lVar44 = auStack_208._8_8_ - auStack_208._0_8_;
                pauVar32 = pauStack_348;
                if (lVar44 != 0) {
                  lVar60 = lVar42 + (lVar44 >> 7) * -0x80 + 0x50;
                  pauVar32 = (undefined1 (*) [16])auStack_208._0_8_;
                  do {
                    *(undefined1 (*) [16])(lVar60 + -0x50) = (undefined1  [16])0x0;
                    *(undefined8 *)(lVar60 + -0x40) = 0;
                    uVar31 = *(undefined8 *)(*pauVar32 + 8);
                    *(undefined8 *)(lVar60 + -0x50) = *(undefined8 *)*pauVar32;
                    *(undefined8 *)(lVar60 + -0x48) = uVar31;
                    *(undefined8 *)(lVar60 + -0x40) = *(undefined8 *)pauVar32[1];
                    *pauVar32 = (undefined1  [16])0x0;
                    *(undefined8 *)pauVar32[1] = 0;
                    *(undefined8 *)(lVar60 + -0x28) = *(undefined8 *)(pauVar32[2] + 8);
                    uVar31 = *(undefined8 *)pauVar32[2];
                    *(undefined8 *)(lVar60 + -0x38) = *(undefined8 *)(pauVar32[1] + 8);
                    *(undefined8 *)(lVar60 + -0x30) = uVar31;
                    *(undefined1 (*) [16])(pauVar32[1] + 8) = (undefined1  [16])0x0;
                    *(undefined8 *)(pauVar32[2] + 8) = 0;
                    *(undefined1 *)(lVar60 + -0x10) = pauVar32[4][0];
                    uVar31 = *(undefined8 *)(pauVar32[3] + 8);
                    *(undefined8 *)(lVar60 + -0x20) = *(undefined8 *)pauVar32[3];
                    *(undefined8 *)(lVar60 + -0x18) = uVar31;
                    pauVar58 = *(undefined1 (**) [16])pauVar32[7];
                    if (pauVar58 == (undefined1 (*) [16])0x0) {
                      *(undefined8 *)(lVar60 + 0x20) = 0;
                    }
                    else if (pauVar32 + 5 == pauVar58) {
                      *(long *)(lVar60 + 0x20) = lVar60;
                      (**(code **)(**(long **)pauVar32[7] + 0x18))(*(long **)pauVar32[7],lVar60);
                    }
                    else {
                      *(undefined1 (**) [16])(lVar60 + 0x20) = pauVar58;
                      *(undefined8 *)pauVar32[7] = 0;
                    }
                    pauVar32 = pauVar32 + 8;
                    lVar60 = lVar60 + 0x80;
                  } while (pauVar32 != (undefined1 (*) [16])uVar28);
                  do {
                    pauVar32 = *(undefined1 (**) [16])pauVar43[7];
                    if (pauVar32 == pauVar43 + 5) {
                      lVar60 = 0x20;
LAB_0d8438b5:
                      (**(code **)(*(long *)*pauVar32 + lVar60))();
                      bVar35 = pauVar43[1][8];
                    }
                    else {
                      lVar60 = 0x28;
                      if (pauVar32 != (undefined1 (*) [16])0x0) goto LAB_0d8438b5;
                      bVar35 = pauVar43[1][8];
                    }
                    if ((bVar35 & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(pauVar43[2] + 8),
                                      *(ulong *)(pauVar43[1] + 8) & 0xfffffffffffffffe);
                    }
                    lVar60 = *(long *)*pauVar43;
                    if (lVar60 != 0) {
                      lVar47 = *(long *)(*pauVar43 + 8);
                      lVar51 = lVar60;
                      if (lVar60 != lVar47) {
                        do {
                          if ((*(byte *)(lVar47 + -0x20) & 1) != 0) {
                            func_0x0412a280(*(undefined8 *)(lVar47 + -0x10),
                                            *(ulong *)(lVar47 + -0x20) & 0xfffffffffffffffe);
                          }
                          lVar47 = lVar47 + -0x30;
                        } while (lVar47 != lVar60);
                        lVar51 = *(long *)*pauVar43;
                      }
                      *(long *)(*pauVar43 + 8) = lVar60;
                      func_0x0412a280(lVar51,*(long *)pauVar43[1] - lVar51);
                    }
                    pauVar43 = pauVar43 + 8;
                  } while (pauVar43 != (undefined1 (*) [16])uVar28);
                  pauVar43 = (undefined1 (*) [16])auStack_208._0_8_;
                  pauVar32 = pauStack_348;
                }
                pauVar58 = pauStack_1f8;
                auStack_208._0_8_ = lVar42 - lVar44;
                cStack_350 = (char)pauVar43;
                uStack_34f = (undefined1)((ulong)pauVar43 >> 8);
                uStack_34e = (undefined2)((ulong)pauVar43 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauVar43 >> 0x20);
                auStack_208._8_8_ = pauVar32;
                pauStack_1f8 = (undefined1 (*) [16])auStack_340;
                pauStack_348 = pauVar43;
                if (pauVar43 != (undefined1 (*) [16])0x0) {
                  func_0x0412a280(pauVar43,(long)pauVar58 - (long)pauVar43);
                }
              }
            }
LAB_0d842fa8:
            pauVar62 = pauVar62 + 8;
          } while (pauVar62 != pauStack_3c0);
        }
        pauVar58 = pauStack_390 + 1;
        pauVar62 = pauStack_390 + 3;
        pauVar43 = pauStack_390 + 4;
        pauVar29 = pauStack_390 + 6;
        pauVar32 = pauStack_390 + 0xc;
        pauVar19 = pauStack_390 + 0xd;
        uVar28 = auStack_f8._8_8_;
        if ((ulong)auStack_f8._8_8_ < uStack_e8) {
          func_0x0d860270(auStack_f8._8_8_,*pauVar58 + 8,pauVar62,pauVar43,auStack_3f8,*pauVar29 + 8
                          ,auStack_3d8,auStack_388,auStack_208,pauVar32,*pauVar19 + 8);
          pauVar62 = (undefined1 (*) [16])(uVar28 + 0xf0);
          lVar44 = auStack_f8._0_8_;
        }
        else {
          lVar42 = auStack_f8._8_8_ - auStack_f8._0_8_;
          uVar37 = (lVar42 >> 4) * -0x1111111111111111 + 1;
          pauStack_3c0 = pauVar62;
          if (0x111111111111111 < uVar37) goto LAB_0d84d3b3;
          lVar44 = (long)(uStack_e8 - auStack_f8._0_8_) >> 4;
          uVar56 = lVar44 * -0x2222222222222222;
          if (uVar37 < uVar56) {
            uVar37 = uVar56;
          }
          if (0x88888888888887 < (ulong)(lVar44 * -0x1111111111111111)) {
            uVar37 = 0x111111111111111;
          }
          puStack_338 = auStack_f8;
          if (uVar37 == 0) {
            lVar44 = 0;
          }
          else {
            if (0x111111111111111 < uVar37) goto LAB_0d84d3db;
            lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0xf0);
            if (lVar44 == 0) {
              func_0x0eec74c0(uVar37 * 0xf0,0);
              lVar44 = 0;
            }
          }
          uStack_358 = (uint)lVar44;
          uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
          uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
          uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
          pauStack_348 = (undefined1 (*) [16])(lVar42 + lVar44);
          cStack_350 = (char)pauStack_348;
          uStack_34f = (undefined1)((ulong)pauStack_348 >> 8);
          uStack_34e = (undefined2)((ulong)pauStack_348 >> 0x10);
          uStack_34c = (undefined4)((ulong)pauStack_348 >> 0x20);
          auStack_340 = (undefined1  [8])(uVar37 * 0xf0 + lVar44);
          func_0x0d860270(pauStack_348,*pauVar58 + 8,pauStack_3c0,pauVar43,auStack_3f8,*pauVar29 + 8
                          ,auStack_3d8,auStack_388,auStack_208,pauVar32,*pauVar19 + 8);
          pauVar62 = (undefined1 (*) [16])((long)pauStack_348 + 0xf0);
          lVar42 = auStack_f8._0_8_;
          uVar28 = auStack_f8._8_8_;
          lVar44 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350))) -
                   (auStack_f8._8_8_ - auStack_f8._0_8_);
          pauStack_348 = pauVar62;
          if (auStack_f8._8_8_ != auStack_f8._0_8_) {
            lVar60 = 0;
            do {
              func_0x066e4cd0(lVar44 + lVar60,lVar42 + lVar60);
              lVar47 = lVar42 + lVar60;
              lVar60 = lVar60 + 0xf0;
            } while (lVar47 + 0xf0 != uVar28);
            do {
              func_0x0651ffe0(lVar42);
              lVar42 = lVar42 + 0xf0;
            } while (lVar42 != uVar28);
            lVar42 = auStack_f8._0_8_;
          }
          uVar37 = uStack_e8;
          auStack_f8._8_8_ = pauVar62;
          auStack_f8._0_8_ = lVar44;
          uStack_e8 = (ulong)auStack_340;
          if (lVar42 != 0) {
            func_0x0412a280(lVar42,uVar37 - lVar42);
            lVar44 = auStack_f8._0_8_;
          }
        }
        auStack_f8._0_8_ = lVar44;
        auStack_f8._8_8_ = pauVar62;
        uVar28 = auStack_208._0_8_;
        if ((long *)auStack_208._0_8_ != (long *)0x0) {
          plVar40 = (long *)auStack_208._8_8_;
          while ((long *)uVar28 != plVar40) {
            plVar36 = (long *)plVar40[-2];
            if (plVar36 == plVar40 + -6) {
              lVar42 = 0x20;
LAB_0d843c45:
              (**(code **)(*plVar36 + lVar42))();
              bVar35 = *(byte *)(plVar40 + -0xd);
            }
            else {
              lVar42 = 0x28;
              if (plVar36 != (long *)0x0) goto LAB_0d843c45;
              bVar35 = *(byte *)(plVar40 + -0xd);
            }
            if ((bVar35 & 1) != 0) {
              func_0x0412a280(plVar40[-0xb],plVar40[-0xd] & 0xfffffffffffffffe);
            }
            plVar36 = plVar40 + -0x10;
            lVar42 = *plVar36;
            if (lVar42 != 0) {
              lVar44 = plVar40[-0xf];
              lVar60 = lVar42;
              if (lVar42 != lVar44) {
                do {
                  if ((*(byte *)(lVar44 + -0x20) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -0x10),
                                    *(ulong *)(lVar44 + -0x20) & 0xfffffffffffffffe);
                  }
                  lVar44 = lVar44 + -0x30;
                } while (lVar44 != lVar42);
                lVar60 = *plVar36;
              }
              plVar40[-0xf] = lVar42;
              func_0x0412a280(lVar60,plVar40[-0xe] - lVar60);
            }
            plVar40 = plVar36;
          }
          auStack_208._8_8_ = uVar28;
          func_0x0412a280(auStack_208._0_8_,(long)pauStack_1f8 - auStack_208._0_8_);
        }
        uVar28 = auStack_388._0_8_;
        if ((undefined1 (*) [16])auStack_388._0_8_ != (undefined1 (*) [16])0x0) {
          pauVar62 = (undefined1 (*) [16])auStack_388._8_8_;
          while ((undefined1 (*) [16])uVar28 != pauVar62) {
            pauVar62 = pauVar62 + -0x1b;
            func_0x0652dc20(pauVar62);
          }
          auStack_388._8_8_ = uVar28;
          func_0x0412a280(auStack_388._0_8_,(long)puStack_378 - auStack_388._0_8_);
        }
        uVar28 = auStack_3d8._0_8_;
        if (auStack_3d8._0_8_ != 0) {
          lVar42 = auStack_3d8._8_8_;
          while (uVar28 != lVar42) {
            lVar42 = lVar42 + -0x70;
            func_0x05f93280(lVar42);
          }
          auStack_3d8._8_8_ = uVar28;
          func_0x0412a280(auStack_3d8._0_8_,(long)pauStack_3c8 - auStack_3d8._0_8_);
        }
        auVar57 = auStack_3f8;
        pauVar62 = pauStack_390;
        pauVar32 = pauStack_1e8;
        if (auStack_3f8 != (undefined1  [8])0x0) {
          pauVar62 = pauStack_3f0;
          while (auVar57 != (undefined1  [8])pauVar62) {
            pauVar62 = pauVar62 + -7;
            func_0x05f93280(pauVar62);
          }
          pauStack_3f0 = (undefined1 (*) [16])auVar57;
          func_0x0412a280(auStack_3f8,(long)pauStack_3e8 - (long)auStack_3f8);
          pauVar62 = pauStack_390;
          pauVar32 = pauStack_1e8;
        }
      }
      pauVar62 = pauVar62 + 0xf;
    } while (pauVar62 != pauVar32);
  }
  pauVar62 = *(undefined1 (**) [16])(param_2 + 0x88);
  pauVar43 = *(undefined1 (**) [16])(param_2 + 0x90);
  auStack_118 = (undefined1  [16])0x0;
  uStack_108 = 0;
  if (pauVar62 != pauVar43) {
    pauStack_3c0 = (undefined1 (*) [16])(param_2 + 0x39);
    pauStack_1e8 = pauVar43;
    do {
      cVar23 = func_0x0d850fd0(param_2,*(undefined8 *)*pauVar62,*(undefined8 *)(*pauVar62 + 8),
                               (ulong)puStack_360 & 0xffffffff,pbStack_368);
      if (cVar23 != '\0') {
        _auStack_3b8 = (undefined1  [16])0x0;
        pauStack_3a8 = (undefined1 (*) [16])0x0;
        pbVar45 = *(byte **)pauVar62[5];
        pbStack_398 = *(byte **)(pauVar62[5] + 8);
        pauStack_390 = pauVar62;
        if (pbVar45 != pbStack_398) {
          do {
            piVar46 = *(int **)pbVar45;
            piVar7 = *(int **)(pbVar45 + 8);
            if (((byte)lStack_370 == '\0') || (piVar46 != piVar7)) {
              if (piVar46 != piVar7) {
                bVar65 = false;
                do {
                  iVar26 = *piVar46;
                  if (iVar26 == 2) {
                    if ((param_2[0x38] & 1) == 0) {
                      if ((byte)param_2[0x38] >> 1 != 0) goto LAB_0d843ea5;
                    }
                    else if (*(long *)(param_2 + 0x40) != 0) goto LAB_0d843ea5;
                  }
                  else if (!bVar65) {
                    if (iVar26 == 1) {
                      bVar35 = param_2[0x38];
                      if ((bVar35 & 1) == 0) {
                        uVar37 = (ulong)(bVar35 >> 1);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) != 0) goto LAB_0d843fdc;
LAB_0d843fc2:
                        if (uVar37 != uVar56 >> 1) goto LAB_0d844012;
                      }
                      else {
                        uVar37 = *(ulong *)(param_2 + 0x40);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) == 0) goto LAB_0d843fc2;
LAB_0d843fdc:
                        if (uVar37 != *(ulong *)(piVar46 + 6)) goto LAB_0d844012;
                      }
                      pauVar62 = pauStack_3c0;
                      if ((bVar35 & 1) != 0) {
                        pauVar62 = *(undefined1 (**) [16])(param_2 + 0x48);
                      }
                      if ((uVar56 & 1) == 0) {
                        iVar26 = func_0x0eee3000(pauVar62,(long)piVar46 + 0x11);
                      }
                      else {
                        iVar26 = func_0x0eee3000(pauVar62,*(undefined8 *)(piVar46 + 8));
                      }
                      if (iVar26 != 0) goto LAB_0d844012;
                      bVar65 = true;
                    }
                    else {
                      if (iVar26 == 0) {
                        cVar23 = func_0x0d822d70(puVar1,piVar46 + 2);
                        if ((cVar23 == '\0') &&
                           ((bVar65 = true, *(char *)((long)piVar46 + 0x2a) != '\x01' ||
                            (*puVar1 < *(ushort *)(piVar46 + 10))))) goto LAB_0d843f2b;
LAB_0d844012:
                        if (*piVar46 == 1) {
                          plVar40 = *(long **)pbStack_368;
                          plVar36 = *(long **)(pbStack_368 + 8);
                          if (plVar40 != plVar36) {
                            if ((*(byte *)(piVar46 + 4) & 1) == 0) {
                              uVar37 = (ulong)(*(byte *)(piVar46 + 4) >> 1);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,(long)piVar46 + 0x11,uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            else {
                              uVar37 = *(ulong *)(piVar46 + 6);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,*(undefined8 *)(piVar46 + 8),
                                                           uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            goto LAB_0d843f2b;
                          }
                        }
                      }
                      bVar65 = false;
                    }
                  }
LAB_0d843f2b:
                  piVar46 = piVar46 + 0xc;
                } while (piVar46 != piVar7);
                if (bVar65) goto LAB_0d843ed9;
              }
            }
            else {
LAB_0d843ed9:
              pauVar62 = stack0xfffffffffffffc50;
              if (stack0xfffffffffffffc50 < pauStack_3a8) {
                func_0x065b0810(stack0xfffffffffffffc50,pbVar45);
                stack0xfffffffffffffc50 = pauVar62 + 0x1b;
              }
              else {
                lVar42 = (long)stack0xfffffffffffffc50 - auStack_3b8._0_8_;
                uVar37 = (lVar42 >> 4) * -0x7b425ed097b425ed + 1;
                if (0x97b425ed097b42 < uVar37) goto LAB_0d84d327;
                lVar44 = (long)pauStack_3a8 - auStack_3b8._0_8_ >> 4;
                uVar56 = lVar44 * 0x97b425ed097b426;
                if (uVar37 < uVar56) {
                  uVar37 = uVar56;
                }
                if (0x4bda12f684bda0 < (ulong)(lVar44 * -0x7b425ed097b425ed)) {
                  uVar37 = 0x97b425ed097b42;
                }
                puStack_338 = auStack_3b8;
                if (uVar37 == 0) {
                  lVar44 = 0;
                }
                else {
                  if (0x97b425ed097b42 < uVar37) goto LAB_0d84d354;
                  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x1b0);
                  if (lVar44 == 0) {
                    func_0x0eec74c0(uVar37 * 0x1b0,0);
                    lVar44 = 0;
                  }
                }
                uStack_358 = (uint)lVar44;
                uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
                uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
                uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
                pauStack_348 = (undefined1 (*) [16])(lVar42 + lVar44);
                cStack_350 = (char)pauStack_348;
                uStack_34f = (undefined1)((ulong)pauStack_348 >> 8);
                uStack_34e = (undefined2)((ulong)pauStack_348 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauStack_348 >> 0x20);
                auStack_340 = (undefined1  [8])(uVar37 * 0x1b0 + lVar44);
                func_0x065b0810(pauStack_348,pbVar45);
                pauVar62 = (undefined1 (*) [16])((long)pauStack_348 + 0x1b0);
                lVar42 = auStack_3b8._0_8_;
                lVar44 = (long)stack0xfffffffffffffc50;
                lVar60 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350))) -
                         ((long)stack0xfffffffffffffc50 - auStack_3b8._0_8_);
                pauStack_348 = pauVar62;
                if (stack0xfffffffffffffc50 != (undefined1 (*) [16])auStack_3b8._0_8_) {
                  lVar47 = 0;
                  do {
                    func_0x065b0810(lVar60 + lVar47,lVar42 + lVar47);
                    lVar51 = lVar42 + lVar47;
                    lVar47 = lVar47 + 0x1b0;
                  } while (lVar51 + 0x1b0 != lVar44);
                  do {
                    func_0x0652dc20(lVar42);
                    lVar42 = lVar42 + 0x1b0;
                  } while (lVar42 != lVar44);
                  lVar42 = auStack_3b8._0_8_;
                }
                pauVar43 = pauStack_3a8;
                stack0xfffffffffffffc50 = pauVar62;
                auStack_3b8._0_8_ = lVar60;
                pauStack_3a8 = (undefined1 (*) [16])auStack_340;
                if (lVar42 != 0) {
                  func_0x0412a280(lVar42,(long)pauVar43 - lVar42);
                  lVar60 = auStack_3b8._0_8_;
                }
                auStack_3b8._0_8_ = lVar60;
              }
            }
LAB_0d843ea5:
            pbVar45 = pbVar45 + 0x1b0;
          } while (pbVar45 != pbStack_398);
        }
        pauVar62 = pauStack_390;
        pauVar43 = pauStack_390 + 4;
        pauVar32 = pauStack_390 + 3;
        pauVar29 = pauStack_390 + 1;
        pauVar19 = pauStack_390 + 6;
        pauVar58 = pauStack_390 + 8;
        uVar28 = auStack_118._8_8_;
        if ((ulong)auStack_118._8_8_ < uStack_108) {
          func_0x0d860690(auStack_118._8_8_,*pauVar29 + 8,pauVar32,pauVar43,auStack_3b8,
                          *pauVar19 + 8,pauVar58);
          pauVar43 = (undefined1 (*) [16])(uVar28 + 0x98);
          lVar44 = auStack_118._0_8_;
        }
        else {
          lVar42 = auStack_118._8_8_ - auStack_118._0_8_;
          uVar37 = (lVar42 >> 3) * -0x79435e50d79435e5 + 1;
          if (0x1af286bca1af286 < uVar37) goto LAB_0d84d3ae;
          lVar44 = (long)(uStack_108 - auStack_118._0_8_) >> 3;
          uVar56 = lVar44 * 0xd79435e50d79436;
          if (uVar37 < uVar56) {
            uVar37 = uVar56;
          }
          if (0xd79435e50d7942 < (ulong)(lVar44 * -0x79435e50d79435e5)) {
            uVar37 = 0x1af286bca1af286;
          }
          puStack_338 = auStack_118;
          if (uVar37 == 0) {
            lVar44 = 0;
          }
          else {
            if (0x1af286bca1af286 < uVar37) goto LAB_0d84d3d6;
            lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x98);
            if (lVar44 == 0) {
              func_0x0eec74c0(uVar37 * 0x98,0);
              lVar44 = 0;
            }
          }
          uStack_358 = (uint)lVar44;
          uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
          uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
          uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
          pauStack_348 = (undefined1 (*) [16])(lVar42 + lVar44);
          cStack_350 = (char)pauStack_348;
          uStack_34f = (undefined1)((ulong)pauStack_348 >> 8);
          uStack_34e = (undefined2)((ulong)pauStack_348 >> 0x10);
          uStack_34c = (undefined4)((ulong)pauStack_348 >> 0x20);
          auStack_340 = (undefined1  [8])(uVar37 * 0x98 + lVar44);
          func_0x0d860690(pauStack_348,*pauVar29 + 8,pauVar32,pauVar43,auStack_3b8,*pauVar19 + 8,
                          pauVar58);
          pauVar43 = (undefined1 (*) [16])((long)pauStack_348 + 0x98);
          lVar42 = auStack_118._0_8_;
          uVar28 = auStack_118._8_8_;
          lVar44 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350))) -
                   (auStack_118._8_8_ - auStack_118._0_8_);
          pauVar62 = pauStack_390;
          pauStack_348 = pauVar43;
          if (auStack_118._8_8_ != auStack_118._0_8_) {
            lVar60 = 0;
            do {
              func_0x0d85efd0(lVar44 + lVar60,lVar42 + lVar60);
              pauVar62 = pauStack_390;
              lVar47 = lVar42 + lVar60;
              lVar60 = lVar60 + 0x98;
            } while (lVar47 + 0x98 != uVar28);
            do {
              func_0x0652e400(lVar42);
              lVar42 = lVar42 + 0x98;
            } while (lVar42 != uVar28);
            lVar42 = auStack_118._0_8_;
          }
          uVar37 = uStack_108;
          auStack_118._8_8_ = pauVar43;
          auStack_118._0_8_ = lVar44;
          uStack_108 = (ulong)auStack_340;
          if (lVar42 != 0) {
            func_0x0412a280(lVar42,uVar37 - lVar42);
            lVar44 = auStack_118._0_8_;
          }
        }
        auStack_118._0_8_ = lVar44;
        auStack_118._8_8_ = pauVar43;
        uVar28 = auStack_3b8._0_8_;
        pauVar43 = pauStack_1e8;
        if (auStack_3b8._0_8_ != 0) {
          lVar42 = (long)stack0xfffffffffffffc50;
          while (uVar28 != lVar42) {
            lVar42 = lVar42 + -0x1b0;
            func_0x0652dc20(lVar42);
          }
          stack0xfffffffffffffc50 = (undefined1 (*) [16])uVar28;
          func_0x0412a280(auStack_3b8._0_8_,(long)pauStack_3a8 - auStack_3b8._0_8_);
          pauVar43 = pauStack_1e8;
        }
      }
      pauVar62 = (undefined1 (*) [16])(pauVar62[9] + 8);
    } while (pauVar62 != pauVar43);
  }
  pauVar62 = *(undefined1 (**) [16])(param_2 + 0xa0);
  pauVar43 = *(undefined1 (**) [16])(param_2 + 0xa8);
  auStack_138 = (undefined1  [16])0x0;
  puStack_128 = (undefined8 *)0x0;
  if (pauVar62 != pauVar43) {
    pauStack_3c0 = (undefined1 (*) [16])(param_2 + 0x39);
    pauStack_1e8 = pauVar43;
    do {
      cVar23 = func_0x0d850fd0(param_2,*(undefined8 *)*pauVar62,*(undefined8 *)(*pauVar62 + 8),
                               (ulong)puStack_360 & 0xffffffff,pbStack_368);
      if (cVar23 != '\0') {
        _auStack_3f8 = (undefined1  [16])0x0;
        pauStack_3e8 = (undefined1 (*) [16])0x0;
        pbVar45 = *(byte **)pauVar62[4];
        pbStack_398 = *(byte **)(pauVar62[4] + 8);
        pauStack_390 = pauVar62;
        if (pbVar45 != pbStack_398) {
          do {
            piVar46 = *(int **)pbVar45;
            piVar7 = *(int **)(pbVar45 + 8);
            if (((byte)lStack_370 == '\0') || (piVar46 != piVar7)) {
              if (piVar46 != piVar7) {
                bVar65 = false;
                do {
                  iVar26 = *piVar46;
                  if (iVar26 == 2) {
                    if ((param_2[0x38] & 1) == 0) {
                      if ((byte)param_2[0x38] >> 1 != 0) goto LAB_0d844705;
                    }
                    else if (*(long *)(param_2 + 0x40) != 0) goto LAB_0d844705;
                  }
                  else if (!bVar65) {
                    if (iVar26 == 1) {
                      bVar35 = param_2[0x38];
                      if ((bVar35 & 1) == 0) {
                        uVar37 = (ulong)(bVar35 >> 1);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) != 0) goto LAB_0d84483c;
LAB_0d844822:
                        if (uVar37 != uVar56 >> 1) goto LAB_0d844872;
                      }
                      else {
                        uVar37 = *(ulong *)(param_2 + 0x40);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) == 0) goto LAB_0d844822;
LAB_0d84483c:
                        if (uVar37 != *(ulong *)(piVar46 + 6)) goto LAB_0d844872;
                      }
                      pauVar62 = pauStack_3c0;
                      if ((bVar35 & 1) != 0) {
                        pauVar62 = *(undefined1 (**) [16])(param_2 + 0x48);
                      }
                      if ((uVar56 & 1) == 0) {
                        iVar26 = func_0x0eee3000(pauVar62,(long)piVar46 + 0x11);
                      }
                      else {
                        iVar26 = func_0x0eee3000(pauVar62,*(undefined8 *)(piVar46 + 8));
                      }
                      if (iVar26 != 0) goto LAB_0d844872;
                      bVar65 = true;
                    }
                    else {
                      if (iVar26 == 0) {
                        cVar23 = func_0x0d822d70(puVar1,piVar46 + 2);
                        if ((cVar23 == '\0') &&
                           ((bVar65 = true, *(char *)((long)piVar46 + 0x2a) != '\x01' ||
                            (*puVar1 < *(ushort *)(piVar46 + 10))))) goto LAB_0d84478b;
LAB_0d844872:
                        if (*piVar46 == 1) {
                          plVar40 = *(long **)pbStack_368;
                          plVar36 = *(long **)(pbStack_368 + 8);
                          if (plVar40 != plVar36) {
                            if ((*(byte *)(piVar46 + 4) & 1) == 0) {
                              uVar37 = (ulong)(*(byte *)(piVar46 + 4) >> 1);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,(long)piVar46 + 0x11,uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            else {
                              uVar37 = *(ulong *)(piVar46 + 6);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,*(undefined8 *)(piVar46 + 8),
                                                           uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            goto LAB_0d84478b;
                          }
                        }
                      }
                      bVar65 = false;
                    }
                  }
LAB_0d84478b:
                  piVar46 = piVar46 + 0xc;
                } while (piVar46 != piVar7);
                if (bVar65) goto LAB_0d844737;
              }
            }
            else {
LAB_0d844737:
              pauVar62 = pauStack_3f0;
              if (pauStack_3f0 < pauStack_3e8) {
                func_0x0652b020(pauStack_3f0,pbVar45);
                pauStack_3f0 = pauVar62 + 7;
              }
              else {
                lVar42 = (long)pauStack_3f0 - (long)auStack_3f8;
                uVar37 = (lVar42 >> 4) * 0x6db6db6db6db6db7 + 1;
                if (0x249249249249249 < uVar37) goto LAB_0d84d340;
                lVar44 = (long)pauStack_3e8 - (long)auStack_3f8 >> 4;
                uVar56 = lVar44 * -0x2492492492492492;
                if (uVar37 < uVar56) {
                  uVar37 = uVar56;
                }
                if (0x124924924924923 < (ulong)(lVar44 * 0x6db6db6db6db6db7)) {
                  uVar37 = 0x249249249249249;
                }
                puStack_338 = auStack_3f8;
                if (uVar37 == 0) {
                  lVar44 = 0;
                }
                else {
                  if (0x249249249249249 < uVar37) goto LAB_0d84d377;
                  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x70);
                  if (lVar44 == 0) {
                    func_0x0eec74c0(uVar37 * 0x70,0);
                    lVar44 = 0;
                  }
                }
                uStack_358 = (uint)lVar44;
                uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
                uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
                uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
                pauStack_348 = (undefined1 (*) [16])(lVar42 + lVar44);
                cStack_350 = (char)pauStack_348;
                uStack_34f = (undefined1)((ulong)pauStack_348 >> 8);
                uStack_34e = (undefined2)((ulong)pauStack_348 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauStack_348 >> 0x20);
                auStack_340 = (undefined1  [8])(uVar37 * 0x70 + lVar44);
                func_0x0652b020(pauStack_348,pbVar45);
                pauVar43 = (undefined1 (*) [16])((long)pauStack_348 + 0x70);
                auVar57 = auStack_3f8;
                pauVar62 = pauStack_3f0;
                auVar64 = (undefined1  [8])
                          (CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)))
                          - ((long)pauStack_3f0 - (long)auStack_3f8));
                pauStack_348 = pauVar43;
                if ((undefined1  [8])pauStack_3f0 != auStack_3f8) {
                  lVar42 = 0;
                  do {
                    func_0x0652b020((long)auVar64 + lVar42,(undefined1 *)auVar57 + lVar42);
                    pauVar32 = (undefined1 (*) [16])
                               (*(undefined1 (*) [16])((long)auVar57 + 0x70) + lVar42);
                    lVar42 = lVar42 + 0x70;
                  } while (pauVar32 != pauVar62);
                  do {
                    func_0x05f93280(auVar57);
                    auVar57 = (undefined1  [8])((long)auVar57 + 0x70);
                  } while (auVar57 != (undefined1  [8])pauVar62);
                  auVar57 = auStack_3f8;
                }
                pauVar62 = pauStack_3e8;
                pauStack_3f0 = pauVar43;
                auStack_3f8 = auVar64;
                pauStack_3e8 = (undefined1 (*) [16])auStack_340;
                if (auVar57 != (undefined1  [8])0x0) {
                  func_0x0412a280(auVar57,(long)pauVar62 - (long)auVar57);
                  auVar64 = auStack_3f8;
                }
                auStack_3f8 = auVar64;
              }
            }
LAB_0d844705:
            pbVar45 = pbVar45 + 0x70;
          } while (pbVar45 != pbStack_398);
        }
        auStack_3d8 = (undefined1  [16])0x0;
        pauStack_3c8 = (undefined1 (*) [16])0x0;
        pbVar45 = *(byte **)(pauStack_390[5] + 8);
        pbStack_398 = *(byte **)pauStack_390[6];
        if (pbVar45 != pbStack_398) {
          do {
            piVar46 = *(int **)pbVar45;
            piVar7 = *(int **)(pbVar45 + 8);
            if (((byte)lStack_370 == '\0') || (piVar46 != piVar7)) {
              if (piVar46 != piVar7) {
                bVar65 = false;
                do {
                  iVar26 = *piVar46;
                  if (iVar26 == 2) {
                    if ((param_2[0x38] & 1) == 0) {
                      if ((byte)param_2[0x38] >> 1 != 0) goto LAB_0d844b85;
                    }
                    else if (*(long *)(param_2 + 0x40) != 0) goto LAB_0d844b85;
                  }
                  else if (!bVar65) {
                    if (iVar26 == 1) {
                      bVar35 = param_2[0x38];
                      if ((bVar35 & 1) == 0) {
                        uVar37 = (ulong)(bVar35 >> 1);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) != 0) goto LAB_0d844cbc;
LAB_0d844ca2:
                        if (uVar37 != uVar56 >> 1) goto LAB_0d844cf2;
                      }
                      else {
                        uVar37 = *(ulong *)(param_2 + 0x40);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) == 0) goto LAB_0d844ca2;
LAB_0d844cbc:
                        if (uVar37 != *(ulong *)(piVar46 + 6)) goto LAB_0d844cf2;
                      }
                      pauVar62 = pauStack_3c0;
                      if ((bVar35 & 1) != 0) {
                        pauVar62 = *(undefined1 (**) [16])(param_2 + 0x48);
                      }
                      if ((uVar56 & 1) == 0) {
                        iVar26 = func_0x0eee3000(pauVar62,(long)piVar46 + 0x11);
                      }
                      else {
                        iVar26 = func_0x0eee3000(pauVar62,*(undefined8 *)(piVar46 + 8));
                      }
                      if (iVar26 != 0) goto LAB_0d844cf2;
                      bVar65 = true;
                    }
                    else {
                      if (iVar26 == 0) {
                        cVar23 = func_0x0d822d70(puVar1,piVar46 + 2);
                        if ((cVar23 == '\0') &&
                           ((bVar65 = true, *(char *)((long)piVar46 + 0x2a) != '\x01' ||
                            (*puVar1 < *(ushort *)(piVar46 + 10))))) goto LAB_0d844c0b;
LAB_0d844cf2:
                        if (*piVar46 == 1) {
                          plVar40 = *(long **)pbStack_368;
                          plVar36 = *(long **)(pbStack_368 + 8);
                          if (plVar40 != plVar36) {
                            if ((*(byte *)(piVar46 + 4) & 1) == 0) {
                              uVar37 = (ulong)(*(byte *)(piVar46 + 4) >> 1);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,(long)piVar46 + 0x11,uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            else {
                              uVar37 = *(ulong *)(piVar46 + 6);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,*(undefined8 *)(piVar46 + 8),
                                                           uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            goto LAB_0d844c0b;
                          }
                        }
                      }
                      bVar65 = false;
                    }
                  }
LAB_0d844c0b:
                  piVar46 = piVar46 + 0xc;
                } while (piVar46 != piVar7);
                if (bVar65) goto LAB_0d844bba;
              }
            }
            else {
LAB_0d844bba:
              uVar28 = auStack_3d8._8_8_;
              if ((ulong)auStack_3d8._8_8_ < pauStack_3c8) {
                func_0x065b0810(auStack_3d8._8_8_,pbVar45);
                auStack_3d8._8_8_ = (undefined1 (*) [16])(uVar28 + 0x1b0);
              }
              else {
                lVar42 = auStack_3d8._8_8_ - auStack_3d8._0_8_;
                uVar37 = (lVar42 >> 4) * -0x7b425ed097b425ed + 1;
                if (0x97b425ed097b42 < uVar37) goto LAB_0d84d345;
                lVar44 = (long)pauStack_3c8 - auStack_3d8._0_8_ >> 4;
                uVar56 = lVar44 * 0x97b425ed097b426;
                if (uVar37 < uVar56) {
                  uVar37 = uVar56;
                }
                if (0x4bda12f684bda0 < (ulong)(lVar44 * -0x7b425ed097b425ed)) {
                  uVar37 = 0x97b425ed097b42;
                }
                puStack_338 = auStack_3d8;
                if (uVar37 == 0) {
                  lVar44 = 0;
                }
                else {
                  if (0x97b425ed097b42 < uVar37) goto LAB_0d84d37c;
                  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x1b0);
                  if (lVar44 == 0) {
                    func_0x0eec74c0(uVar37 * 0x1b0,0);
                    lVar44 = 0;
                  }
                }
                uStack_358 = (uint)lVar44;
                uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
                uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
                uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
                pauStack_348 = (undefined1 (*) [16])(lVar42 + lVar44);
                cStack_350 = (char)pauStack_348;
                uStack_34f = (undefined1)((ulong)pauStack_348 >> 8);
                uStack_34e = (undefined2)((ulong)pauStack_348 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauStack_348 >> 0x20);
                auStack_340 = (undefined1  [8])(uVar37 * 0x1b0 + lVar44);
                func_0x065b0810(pauStack_348,pbVar45);
                pauVar62 = (undefined1 (*) [16])((long)pauStack_348 + 0x1b0);
                lVar42 = auStack_3d8._0_8_;
                uVar28 = auStack_3d8._8_8_;
                lVar44 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350))) -
                         (auStack_3d8._8_8_ - auStack_3d8._0_8_);
                pauStack_348 = pauVar62;
                if (auStack_3d8._8_8_ != auStack_3d8._0_8_) {
                  lVar60 = 0;
                  do {
                    func_0x065b0810(lVar44 + lVar60,lVar42 + lVar60);
                    lVar47 = lVar42 + lVar60;
                    lVar60 = lVar60 + 0x1b0;
                  } while (lVar47 + 0x1b0 != uVar28);
                  do {
                    func_0x0652dc20(lVar42);
                    lVar42 = lVar42 + 0x1b0;
                  } while (lVar42 != uVar28);
                  lVar42 = auStack_3d8._0_8_;
                }
                pauVar43 = pauStack_3c8;
                auStack_3d8._8_8_ = pauVar62;
                auStack_3d8._0_8_ = lVar44;
                pauStack_3c8 = (undefined1 (*) [16])auStack_340;
                if (lVar42 != 0) {
                  func_0x0412a280(lVar42,(long)pauVar43 - lVar42);
                  lVar44 = auStack_3d8._0_8_;
                }
                auStack_3d8._0_8_ = lVar44;
              }
            }
LAB_0d844b85:
            pbVar45 = pbVar45 + 0x1b0;
          } while (pbVar45 != pbStack_398);
        }
        pauVar62 = pauStack_390;
        pauVar43 = (undefined1 (*) [16])(pauStack_390[1] + 8);
        uVar28 = auStack_138._8_8_;
        if ((ulong)auStack_138._8_8_ < puStack_128) {
          if (((*pauVar43)[0] & 1) == 0) {
            pauStack_348 = *(undefined1 (**) [16])(pauStack_390[2] + 8);
            uVar31 = *(undefined8 *)*pauVar43;
            uVar14 = *(undefined8 *)pauStack_390[2];
            uStack_358 = (uint)uVar31;
            uStack_354 = (undefined1)((ulong)uVar31 >> 0x20);
            uStack_353 = (undefined2)((ulong)uVar31 >> 0x28);
            uStack_351 = (undefined1)((ulong)uVar31 >> 0x38);
            cStack_350 = (char)uVar14;
            uStack_34f = (undefined1)((ulong)uVar14 >> 8);
            uStack_34e = (undefined2)((ulong)uVar14 >> 0x10);
            uStack_34c = (undefined4)((ulong)uVar14 >> 0x20);
          }
          else {
            func_0x0412e5e0(&uStack_358,*(undefined8 *)(pauStack_390[2] + 8),
                            *(undefined8 *)pauStack_390[2]);
          }
          pauVar58 = pauStack_3c8;
          pauVar32 = pauStack_3e8;
          auVar57 = auStack_3f8;
          pauVar43 = pauStack_3f0;
          _auStack_3f8 = ZEXT816(0);
          pauStack_3e8 = (undefined1 (*) [16])0x0;
          uVar20 = auStack_3d8._0_8_;
          uVar21 = auStack_3d8._8_8_;
          auStack_3d8 = ZEXT816(0);
          pauStack_3c8 = (undefined1 (*) [16])0x0;
          uVar31 = *(undefined8 *)pauVar62[3];
          uVar14 = *(undefined8 *)(pauVar62[3] + 8);
          *(undefined8 *)uVar28 = 0;
          *(undefined8 *)(uVar28 + 8) = 0;
          *(undefined8 *)(uVar28 + 0x10) = 0;
          *(uint *)(uVar28 + 0x18) = uStack_358;
          *(uint *)(uVar28 + 0x1c) = CONCAT13(uStack_351,CONCAT21(uStack_353,uStack_354));
          *(uint *)(uVar28 + 0x20) = CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350));
          *(undefined4 *)(uVar28 + 0x24) = uStack_34c;
          *(undefined1 (**) [16])(uVar28 + 0x28) = pauStack_348;
          *(undefined8 *)(uVar28 + 0x30) = uVar31;
          *(undefined8 *)(uVar28 + 0x38) = uVar14;
          *(undefined1 (*) [8])(uVar28 + 0x40) = auVar57;
          *(undefined1 (**) [16])(uVar28 + 0x48) = pauVar43;
          *(undefined1 (**) [16])(uVar28 + 0x50) = pauVar32;
          *(undefined8 *)(uVar28 + 0x58) = uVar20;
          *(undefined8 *)(uVar28 + 0x60) = uVar21;
          *(undefined1 (**) [16])(uVar28 + 0x68) = pauVar58;
          pauVar32 = (undefined1 (*) [16])(uVar28 + 0x70);
          auVar57 = (undefined1  [8])puStack_128;
          puVar27 = (undefined1 *)auStack_138._0_8_;
        }
        else {
          lVar42 = auStack_138._8_8_ - auStack_138._0_8_;
          uVar37 = (lVar42 >> 4) * 0x6db6db6db6db6db7 + 1;
          if (0x249249249249249 < uVar37) goto LAB_0d84d3b8;
          lVar44 = (long)puStack_128 - auStack_138._0_8_ >> 4;
          uVar56 = lVar44 * -0x2492492492492492;
          if (uVar37 < uVar56) {
            uVar37 = uVar56;
          }
          if (0x124924924924923 < (ulong)(lVar44 * 0x6db6db6db6db6db7)) {
            uVar37 = 0x249249249249249;
          }
          puStack_338 = auStack_138;
          if (uVar37 == 0) {
            lVar44 = 0;
          }
          else {
            if (0x249249249249249 < uVar37) goto LAB_0d84d3e0;
            lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x70);
            if (lVar44 == 0) {
              func_0x0eec74c0(uVar37 * 0x70,0);
              lVar44 = 0;
            }
          }
          uStack_358 = (uint)lVar44;
          uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
          uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
          uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
          pauVar32 = (undefined1 (*) [16])(lVar42 + lVar44);
          cStack_350 = (char)pauVar32;
          uStack_34f = (undefined1)((ulong)pauVar32 >> 8);
          uStack_34e = (undefined2)((ulong)pauVar32 >> 0x10);
          uStack_34c = (undefined4)((ulong)pauVar32 >> 0x20);
          auVar57 = (undefined1  [8])(uVar37 * 0x70 + lVar44);
          auStack_340 = auVar57;
          pauStack_348 = pauVar32;
          if (((*pauVar43)[0] & 1) == 0) {
            pauStack_3a8 = *(undefined1 (**) [16])(pauVar62[2] + 8);
            _auStack_3b8 = *pauVar43;
          }
          else {
            func_0x0412e5e0(auStack_3b8,*(undefined8 *)(pauVar62[2] + 8),*(undefined8 *)pauVar62[2])
            ;
          }
          pauVar29 = pauStack_3c8;
          pauVar58 = pauStack_3e8;
          auVar64 = auStack_3f8;
          pauVar43 = pauStack_3f0;
          _auStack_3f8 = ZEXT816(0);
          pauStack_3e8 = (undefined1 (*) [16])0x0;
          uVar14 = auStack_3d8._0_8_;
          uVar20 = auStack_3d8._8_8_;
          auStack_3d8 = ZEXT816(0);
          pauStack_3c8 = (undefined1 (*) [16])0x0;
          uVar28 = *(undefined8 *)pauVar62[3];
          uVar31 = *(undefined8 *)(pauVar62[3] + 8);
          *(undefined8 *)*pauVar32 = 0;
          *(undefined8 *)(*pauVar32 + 8) = 0;
          *(undefined8 *)pauVar32[1] = 0;
          *(undefined4 *)(pauVar32[1] + 8) = auStack_3b8._0_4_;
          *(undefined4 *)(pauVar32[1] + 0xc) = auStack_3b8._4_4_;
          *(undefined4 *)pauVar32[2] = auStack_3b8._8_4_;
          *(undefined4 *)(pauVar32[2] + 4) = uStack_3ac;
          *(undefined1 (**) [16])(pauVar32[2] + 8) = pauStack_3a8;
          *(undefined8 *)pauVar32[3] = uVar28;
          *(undefined8 *)(pauVar32[3] + 8) = uVar31;
          *(undefined1 (*) [8])pauVar32[4] = auVar64;
          *(undefined1 (**) [16])(pauVar32[4] + 8) = pauVar43;
          *(undefined1 (**) [16])pauVar32[5] = pauVar58;
          *(undefined8 *)(pauVar32[5] + 8) = uVar14;
          *(undefined8 *)pauVar32[6] = uVar20;
          *(undefined1 (**) [16])(pauVar32[6] + 8) = pauVar29;
          uVar28 = auStack_138._8_8_;
          puVar27 = (undefined1 *)((long)pauVar32 + (auStack_138._0_8_ - auStack_138._8_8_));
          plVar40 = (long *)auStack_138._0_8_;
          if (auStack_138._0_8_ - auStack_138._8_8_ != 0) {
            lVar42 = 0;
            do {
              *(undefined1 (*) [16])(puVar27 + lVar42) = (undefined1  [16])0x0;
              *(undefined8 *)(puVar27 + lVar42 + 0x10) = 0;
              uVar31 = ((undefined8 *)(auStack_138._0_8_ + lVar42))[1];
              *(undefined8 *)(puVar27 + lVar42) = *(undefined8 *)(auStack_138._0_8_ + lVar42);
              *(undefined8 *)((long)(puVar27 + lVar42) + 8) = uVar31;
              *(undefined8 *)(puVar27 + lVar42 + 0x10) =
                   *(undefined8 *)(auStack_138._0_8_ + lVar42 + 0x10);
              *(undefined1 (*) [16])(auStack_138._0_8_ + lVar42) = (undefined1  [16])0x0;
              *(undefined8 *)(auStack_138._0_8_ + lVar42 + 0x10) = 0;
              *(undefined8 *)(puVar27 + lVar42 + 0x28) =
                   *(undefined8 *)(auStack_138._0_8_ + lVar42 + 0x28);
              puVar34 = (undefined8 *)(auStack_138._0_8_ + lVar42 + 0x18);
              uVar31 = puVar34[1];
              *(undefined8 *)(puVar27 + lVar42 + 0x18) = *puVar34;
              *(undefined8 *)((long)(puVar27 + lVar42 + 0x18) + 8) = uVar31;
              *(undefined1 (*) [16])(auStack_138._0_8_ + lVar42 + 0x18) = (undefined1  [16])0x0;
              *(undefined8 *)(auStack_138._0_8_ + lVar42 + 0x28) = 0;
              puVar34 = (undefined8 *)(auStack_138._0_8_ + lVar42 + 0x30);
              uVar31 = puVar34[1];
              *(undefined8 *)(puVar27 + lVar42 + 0x30) = *puVar34;
              *(undefined8 *)((long)(puVar27 + lVar42 + 0x30) + 8) = uVar31;
              *(undefined1 (*) [16])(puVar27 + lVar42 + 0x40) = (undefined1  [16])0x0;
              *(undefined8 *)(puVar27 + lVar42 + 0x50) = 0;
              puVar34 = (undefined8 *)(auStack_138._0_8_ + lVar42 + 0x40);
              uVar31 = puVar34[1];
              *(undefined8 *)(puVar27 + lVar42 + 0x40) = *puVar34;
              *(undefined8 *)((long)(puVar27 + lVar42 + 0x40) + 8) = uVar31;
              *(undefined8 *)(puVar27 + lVar42 + 0x50) =
                   *(undefined8 *)(auStack_138._0_8_ + lVar42 + 0x50);
              *(undefined1 (*) [16])(auStack_138._0_8_ + lVar42 + 0x40) = (undefined1  [16])0x0;
              *(undefined8 *)(auStack_138._0_8_ + lVar42 + 0x50) = 0;
              *(undefined1 (*) [16])(puVar27 + lVar42 + 0x58) = (undefined1  [16])0x0;
              *(undefined8 *)(puVar27 + lVar42 + 0x68) = 0;
              puVar34 = (undefined8 *)(auStack_138._0_8_ + lVar42 + 0x58);
              uVar31 = puVar34[1];
              *(undefined8 *)(puVar27 + lVar42 + 0x58) = *puVar34;
              *(undefined8 *)((long)(puVar27 + lVar42 + 0x58) + 8) = uVar31;
              *(undefined8 *)(puVar27 + lVar42 + 0x68) =
                   *(undefined8 *)(auStack_138._0_8_ + lVar42 + 0x68);
              *(undefined1 (*) [16])(auStack_138._0_8_ + lVar42 + 0x58) = (undefined1  [16])0x0;
              *(undefined8 *)(auStack_138._0_8_ + lVar42 + 0x68) = 0;
              lVar44 = lVar42 + 0x70;
              lVar42 = lVar42 + 0x70;
            } while ((long *)(auStack_138._0_8_ + lVar44) != (long *)auStack_138._8_8_);
            do {
              lVar42 = plVar40[0xb];
              if (lVar42 != 0) {
                lVar44 = plVar40[0xc];
                lVar60 = lVar42;
                if (lVar42 != lVar44) {
                  do {
                    lVar44 = lVar44 + -0x1b0;
                    func_0x0652dc20(lVar44);
                  } while (lVar44 != lVar42);
                  lVar60 = plVar40[0xb];
                }
                plVar40[0xc] = lVar42;
                func_0x0412a280(lVar60,plVar40[0xd] - lVar60);
              }
              lVar42 = plVar40[8];
              if (lVar42 != 0) {
                lVar44 = plVar40[9];
                lVar60 = lVar42;
                if (lVar42 != lVar44) {
                  do {
                    lVar44 = lVar44 + -0x70;
                    func_0x05f93280(lVar44);
                  } while (lVar44 != lVar42);
                  lVar60 = plVar40[8];
                }
                plVar40[9] = lVar42;
                func_0x0412a280(lVar60,plVar40[10] - lVar60);
              }
              if ((*(byte *)(plVar40 + 3) & 1) != 0) {
                func_0x0412a280(plVar40[5],plVar40[3] & 0xfffffffffffffffe);
              }
              lVar42 = *plVar40;
              if (lVar42 != 0) {
                lVar44 = plVar40[1];
                lVar60 = lVar42;
                if (lVar42 != lVar44) {
                  do {
                    if ((*(byte *)(lVar44 + -0x20) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar44 + -0x10),
                                      *(ulong *)(lVar44 + -0x20) & 0xfffffffffffffffe);
                    }
                    lVar44 = lVar44 + -0x30;
                  } while (lVar44 != lVar42);
                  lVar60 = *plVar40;
                }
                plVar40[1] = lVar42;
                func_0x0412a280(lVar60,plVar40[2] - lVar60);
              }
              plVar40 = plVar40 + 0xe;
            } while (plVar40 != (long *)uVar28);
            plVar40 = (long *)auStack_138._0_8_;
            auVar57 = auStack_340;
          }
          pauVar62 = pauStack_390;
          pauVar32 = pauVar32 + 7;
          auStack_138._8_8_ = pauVar32;
          auStack_138._0_8_ = puVar27;
          if (plVar40 != (long *)0x0) {
            lVar42 = (long)puStack_128 - (long)plVar40;
            puStack_128 = (undefined8 *)auVar57;
            func_0x0412a280(plVar40,lVar42);
            auVar57 = (undefined1  [8])puStack_128;
            puVar27 = (undefined1 *)auStack_138._0_8_;
          }
        }
        auStack_138._0_8_ = puVar27;
        puStack_128 = (undefined8 *)auVar57;
        auStack_138._8_8_ = pauVar32;
        uVar28 = auStack_3d8._0_8_;
        if (auStack_3d8._0_8_ != 0) {
          lVar42 = auStack_3d8._8_8_;
          while (uVar28 != lVar42) {
            lVar42 = lVar42 + -0x1b0;
            func_0x0652dc20(lVar42);
          }
          auStack_3d8._8_8_ = uVar28;
          func_0x0412a280(auStack_3d8._0_8_,(long)pauStack_3c8 - auStack_3d8._0_8_);
        }
        auVar57 = auStack_3f8;
        pauVar43 = pauStack_1e8;
        if (auStack_3f8 != (undefined1  [8])0x0) {
          pauVar43 = pauStack_3f0;
          while (auVar57 != (undefined1  [8])pauVar43) {
            pauVar43 = pauVar43 + -7;
            func_0x05f93280(pauVar43);
          }
          pauStack_3f0 = (undefined1 (*) [16])auVar57;
          func_0x0412a280(auStack_3f8,(long)pauStack_3e8 - (long)auStack_3f8);
          pauVar43 = pauStack_1e8;
        }
      }
      pauVar62 = pauVar62 + 7;
    } while (pauVar62 != pauVar43);
  }
  pauVar62 = *(undefined1 (**) [16])(param_2 + 0xb8);
  pauStack_1e8 = *(undefined1 (**) [16])(param_2 + 0xc0);
  auStack_158 = (undefined1  [16])0x0;
  pauStack_148 = (undefined1 (*) [16])0x0;
  if (pauVar62 != pauStack_1e8) {
    pauStack_390 = (undefined1 (*) [16])(param_2 + 0x39);
    do {
      pauStack_3c0 = pauVar62;
      cVar23 = func_0x0d850fd0(param_2,*(undefined8 *)*pauVar62,*(undefined8 *)(*pauVar62 + 8),
                               (ulong)puStack_360 & 0xffffffff,pbStack_368);
      if (cVar23 != '\0') {
        auStack_3d8 = (undefined1  [16])0x0;
        pauStack_3c8 = (undefined1 (*) [16])0x0;
        pbVar45 = *(byte **)(pauStack_3c0[4] + 8);
        pbStack_398 = *(byte **)pauStack_3c0[5];
        if (pbVar45 != pbStack_398) {
          do {
            piVar46 = *(int **)pbVar45;
            piVar7 = *(int **)(pbVar45 + 8);
            if (((byte)lStack_370 == '\0') || (piVar46 != piVar7)) {
              if (piVar46 != piVar7) {
                bVar65 = false;
                do {
                  iVar26 = *piVar46;
                  if (iVar26 == 2) {
                    if ((param_2[0x38] & 1) == 0) {
                      if ((byte)param_2[0x38] >> 1 != 0) goto LAB_0d845d15;
                    }
                    else if (*(long *)(param_2 + 0x40) != 0) goto LAB_0d845d15;
                  }
                  else if (!bVar65) {
                    if (iVar26 == 1) {
                      bVar35 = param_2[0x38];
                      if ((bVar35 & 1) == 0) {
                        uVar37 = (ulong)(bVar35 >> 1);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) != 0) goto LAB_0d845f6c;
LAB_0d845f52:
                        if (uVar37 != uVar56 >> 1) goto LAB_0d845fa5;
                      }
                      else {
                        uVar37 = *(ulong *)(param_2 + 0x40);
                        uVar56 = (ulong)*(byte *)(piVar46 + 4);
                        if ((*(byte *)(piVar46 + 4) & 1) == 0) goto LAB_0d845f52;
LAB_0d845f6c:
                        if (uVar37 != *(ulong *)(piVar46 + 6)) goto LAB_0d845fa5;
                      }
                      pauVar62 = pauStack_390;
                      if ((bVar35 & 1) != 0) {
                        pauVar62 = *(undefined1 (**) [16])(param_2 + 0x48);
                      }
                      if ((uVar56 & 1) == 0) {
                        iVar26 = func_0x0eee3000(pauVar62,(long)piVar46 + 0x11);
                      }
                      else {
                        iVar26 = func_0x0eee3000(pauVar62,*(undefined8 *)(piVar46 + 8));
                      }
                      if (iVar26 != 0) goto LAB_0d845fa5;
                      bVar65 = true;
                    }
                    else {
                      if (iVar26 == 0) {
                        cVar23 = func_0x0d822d70(puVar1,piVar46 + 2);
                        if ((cVar23 == '\0') &&
                           ((bVar65 = true, *(char *)((long)piVar46 + 0x2a) != '\x01' ||
                            (*puVar1 < *(ushort *)(piVar46 + 10))))) goto LAB_0d845ebb;
LAB_0d845fa5:
                        if (*piVar46 == 1) {
                          plVar40 = *(long **)pbStack_368;
                          plVar36 = *(long **)(pbStack_368 + 8);
                          if (plVar40 != plVar36) {
                            if ((*(byte *)(piVar46 + 4) & 1) == 0) {
                              uVar37 = (ulong)(*(byte *)(piVar46 + 4) >> 1);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,(long)piVar46 + 0x11,uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            else {
                              uVar37 = *(ulong *)(piVar46 + 6);
                              bVar65 = false;
                              plVar40 = plVar40 + 2;
                              do {
                                bVar35 = *(byte *)(plVar40 + -2);
                                if ((bVar35 & 1) == 0) {
                                  uVar56 = (ulong)(bVar35 >> 1);
                                }
                                else {
                                  uVar56 = plVar40[-1];
                                }
                                if (uVar56 == uVar37) {
                                  if ((bVar35 & 1) == 0) {
                                    lVar42 = (long)plVar40 + -0xf;
                                  }
                                  else {
                                    lVar42 = *plVar40;
                                  }
                                  iVar26 = func_0x0eee3000(lVar42,*(undefined8 *)(piVar46 + 8),
                                                           uVar37);
                                  if (iVar26 == 0) {
                                    bVar65 = true;
                                  }
                                }
                                plVar38 = plVar40 + 1;
                                plVar40 = plVar40 + 3;
                              } while (plVar38 != plVar36);
                            }
                            goto LAB_0d845ebb;
                          }
                        }
                      }
                      bVar65 = false;
                    }
                  }
LAB_0d845ebb:
                  piVar46 = piVar46 + 0xc;
                } while (piVar46 != piVar7);
                if (bVar65) goto LAB_0d845d4f;
              }
            }
            else {
LAB_0d845d4f:
              auVar3 = auStack_3d8;
              uVar28 = auStack_3d8._8_8_;
              if ((ulong)auStack_3d8._8_8_ < pauStack_3c8) {
                *(undefined1 (*) [16])auStack_3d8._8_8_ = (undefined1  [16])0x0;
                *(undefined8 *)*(undefined1 (*) [16])(auStack_3d8._8_8_ + 0x10) = 0;
                puVar33 = *(undefined4 **)pbVar45;
                puVar8 = *(undefined4 **)(pbVar45 + 8);
                auStack_3b8[8] = 0;
                auStack_3b8._0_8_ = auStack_3d8._8_8_;
                lVar42 = (long)puVar8 - (long)puVar33;
                if (lVar42 != 0) {
                  if (0x555555555555555 < (ulong)((lVar42 >> 4) * -0x5555555555555555))
                  goto LAB_0d84d386;
                  puVar30 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
                  if (puVar30 == (undefined4 *)0x0) {
                    func_0x0eec74c0(lVar42,0);
                  }
                  *(undefined4 **)(undefined1 *)uVar28 = puVar30;
                  *(undefined4 **)((undefined1 *)uVar28 + 8) = puVar30;
                  *(long *)*(undefined1 (*) [16])(uVar28 + 0x10) = lVar42 + (long)puVar30;
                  auStack_3f8 = (undefined1  [8])puVar30;
                  auStack_388._0_8_ = puVar30;
                  uStack_358 = auVar3._8_4_;
                  uStack_354 = auVar3[0xc];
                  uStack_353 = auVar3._13_2_;
                  uStack_351 = auVar3[0xf];
                  cStack_350 = (char)auStack_388;
                  uStack_34f = (undefined1)((ulong)auStack_388 >> 8);
                  uStack_34e = (undefined2)((ulong)auStack_388 >> 0x10);
                  uStack_34c = (undefined4)((ulong)auStack_388 >> 0x20);
                  pauStack_348 = (undefined1 (*) [16])auStack_3f8;
                  auVar15[0xf] = 0;
                  auVar15._0_15_ = stack0xfffffffffffffcc1;
                  _auStack_340 = auVar15 << 8;
                  do {
                    *puVar30 = *puVar33;
                    *(undefined2 *)(puVar30 + 3) = *(undefined2 *)(puVar33 + 3);
                    puVar30[2] = puVar33[2];
                    if ((*(byte *)(puVar33 + 4) & 1) == 0) {
                      *(undefined8 *)(puVar30 + 8) = *(undefined8 *)(puVar33 + 8);
                      uVar31 = *(undefined8 *)(puVar33 + 6);
                      *(undefined8 *)(puVar30 + 4) = *(undefined8 *)(puVar33 + 4);
                      *(undefined8 *)(puVar30 + 6) = uVar31;
                      auVar57 = (undefined1  [8])puVar30;
                    }
                    else {
                      func_0x0412e5e0(puVar30 + 4,*(undefined8 *)(puVar33 + 8),
                                      *(undefined8 *)(puVar33 + 6));
                      auVar57 = auStack_3f8;
                    }
                    puVar30[10] = puVar33[10];
                    puVar33 = puVar33 + 0xc;
                    puVar30 = (undefined4 *)((long)auVar57 + 0x30);
                    auStack_3f8 = (undefined1  [8])puVar30;
                  } while (puVar33 != puVar8);
                  *(undefined4 **)((undefined1 *)uVar28 + 8) = puVar30;
                }
                if ((pbVar45[0x18] & 1) == 0) {
                  *(undefined8 *)(*(undefined1 (*) [16])(uVar28 + 0x20) + 8) =
                       *(undefined8 *)(pbVar45 + 0x28);
                  uVar31 = *(undefined8 *)(pbVar45 + 0x20);
                  *(undefined8 *)(*(undefined1 (*) [16])(uVar28 + 0x10) + 8) =
                       *(undefined8 *)(pbVar45 + 0x18);
                  *(undefined8 *)*(undefined1 (*) [16])(uVar28 + 0x20) = uVar31;
                }
                else {
                  func_0x0412e5e0(*(undefined1 (*) [16])(uVar28 + 0x10) + 8,
                                  *(undefined8 *)(pbVar45 + 0x28),*(undefined8 *)(pbVar45 + 0x20));
                }
                (*(undefined1 (*) [16])(uVar28 + 0x40))[0] = pbVar45[0x40];
                uVar31 = *(undefined8 *)(pbVar45 + 0x38);
                *(undefined8 *)*(undefined1 (*) [16])(uVar28 + 0x30) =
                     *(undefined8 *)(pbVar45 + 0x30);
                *(undefined8 *)(*(undefined1 (*) [16])(uVar28 + 0x30) + 8) = uVar31;
                pbVar52 = *(byte **)(pbVar45 + 0x70);
                if (pbVar52 == (byte *)0x0) {
                  uVar31 = 0;
LAB_0d846400:
                  *(undefined8 *)*(undefined1 (*) [16])(uVar28 + 0x70) = uVar31;
                }
                else {
                  if (pbVar52 != pbVar45 + 0x50) {
                    uVar31 = (**(code **)(*(long *)pbVar52 + 0x10))();
                    goto LAB_0d846400;
                  }
                  *(undefined1 (**) [16])*(undefined1 (*) [16])(uVar28 + 0x70) =
                       (undefined1 (*) [16])(uVar28 + 0x50);
                  (**(code **)(**(long **)(pbVar45 + 0x70) + 0x18))();
                }
                auStack_3d8._8_8_ = (undefined1 (*) [16])(uVar28 + 0x80);
              }
              else {
                lVar42 = auStack_3d8._8_8_ - auStack_3d8._0_8_;
                uVar37 = (lVar42 >> 7) + 1;
                if (0x1ffffffffffffff < uVar37) goto LAB_0d84d34a;
                uVar56 = (long)pauStack_3c8 - auStack_3d8._0_8_ >> 6;
                if (uVar56 <= uVar37) {
                  uVar56 = uVar37;
                }
                if (0x7fffffffffffff7f < (ulong)((long)pauStack_3c8 - auStack_3d8._0_8_)) {
                  uVar56 = 0x1ffffffffffffff;
                }
                puStack_338 = auStack_3d8;
                if (uVar56 == 0) {
                  lVar44 = 0;
                }
                else {
                  if (0x1ffffffffffffff < uVar56) goto LAB_0d84d381;
                  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar56 << 7);
                  if (lVar44 == 0) {
                    func_0x0eec74c0(uVar56 << 7,0);
                    lVar44 = 0;
                  }
                }
                uStack_358 = (uint)lVar44;
                uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
                uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
                uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
                pauVar62 = (undefined1 (*) [16])(lVar44 + lVar42);
                cStack_350 = (char)pauVar62;
                uStack_34f = (undefined1)((ulong)pauVar62 >> 8);
                uStack_34e = (undefined2)((ulong)pauVar62 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauVar62 >> 0x20);
                auStack_340 = (undefined1  [8])(uVar56 * 0x80 + lVar44);
                *(undefined1 (*) [16])(lVar44 + lVar42) = (undefined1  [16])0x0;
                *(undefined8 *)(lVar44 + 0x10 + lVar42) = 0;
                puVar33 = *(undefined4 **)pbVar45;
                puVar8 = *(undefined4 **)(pbVar45 + 8);
                pauStack_3f0._0_1_ = 0;
                auStack_3f8 = (undefined1  [8])pauVar62;
                lVar42 = (long)puVar8 - (long)puVar33;
                pauStack_348 = pauVar62;
                if (lVar42 != 0) {
                  if (0x555555555555555 < (ulong)((lVar42 >> 4) * -0x5555555555555555))
                  goto LAB_0d84d38b;
                  pauVar43 = (undefined1 (*) [16])
                             (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
                  if (pauVar43 == (undefined1 (*) [16])0x0) {
                    func_0x0eec74c0(lVar42,0);
                  }
                  *(undefined1 (**) [16])*pauVar62 = pauVar43;
                  *(undefined1 (**) [16])(*pauVar62 + 8) = pauVar43;
                  *(long *)pauVar62[1] = lVar42 + (long)pauVar43;
                  auStack_388._0_8_ = pauVar43;
                  auStack_208._0_8_ = pauVar43;
                  stack0xfffffffffffffc50 = &auStack_208;
                  auStack_3b8._0_8_ = pauVar62;
                  pauStack_3a8 = &auStack_388;
                  uStack_3a0 = 0;
                  do {
                    *(undefined4 *)*pauVar43 = *puVar33;
                    *(undefined2 *)(*pauVar43 + 0xc) = *(undefined2 *)(puVar33 + 3);
                    *(undefined4 *)(*pauVar43 + 8) = puVar33[2];
                    if ((*(byte *)(puVar33 + 4) & 1) == 0) {
                      *(undefined8 *)pauVar43[2] = *(undefined8 *)(puVar33 + 8);
                      uVar28 = *(undefined8 *)(puVar33 + 6);
                      *(undefined8 *)pauVar43[1] = *(undefined8 *)(puVar33 + 4);
                      *(undefined8 *)(pauVar43[1] + 8) = uVar28;
                      pauVar32 = pauVar43;
                    }
                    else {
                      func_0x0412e5e0(pauVar43 + 1,*(undefined8 *)(puVar33 + 8),
                                      *(undefined8 *)(puVar33 + 6));
                      pauVar32 = (undefined1 (*) [16])auStack_388._0_8_;
                    }
                    *(undefined4 *)(pauVar43[2] + 8) = puVar33[10];
                    puVar33 = puVar33 + 0xc;
                    pauVar43 = pauVar32 + 3;
                    auStack_388._0_8_ = pauVar43;
                  } while (puVar33 != puVar8);
                  *(undefined1 (**) [16])(*pauVar62 + 8) = pauVar43;
                }
                if ((pbVar45[0x18] & 1) == 0) {
                  *(undefined8 *)(pauVar62[2] + 8) = *(undefined8 *)(pbVar45 + 0x28);
                  uVar28 = *(undefined8 *)(pbVar45 + 0x20);
                  *(undefined8 *)(pauVar62[1] + 8) = *(undefined8 *)(pbVar45 + 0x18);
                  *(undefined8 *)pauVar62[2] = uVar28;
                }
                else {
                  func_0x0412e5e0(pauVar62[1] + 8,*(undefined8 *)(pbVar45 + 0x28),
                                  *(undefined8 *)(pbVar45 + 0x20));
                }
                pauVar62[4][0] = pbVar45[0x40];
                uVar28 = *(undefined8 *)(pbVar45 + 0x38);
                *(undefined8 *)pauVar62[3] = *(undefined8 *)(pbVar45 + 0x30);
                *(undefined8 *)(pauVar62[3] + 8) = uVar28;
                pbVar52 = *(byte **)(pbVar45 + 0x70);
                if (pbVar52 == (byte *)0x0) {
                  *(undefined8 *)pauVar62[7] = 0;
                }
                else if (pbVar52 == pbVar45 + 0x50) {
                  *(undefined1 (**) [16])pauVar62[7] = pauVar62 + 5;
                  (**(code **)(**(long **)(pbVar45 + 0x70) + 0x18))();
                }
                else {
                  uVar28 = (**(code **)(*(long *)pbVar52 + 0x10))();
                  *(undefined8 *)pauVar62[7] = uVar28;
                }
                lVar42 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)));
                pauStack_348 = pauStack_348 + 8;
                pauVar62 = (undefined1 (*) [16])auStack_3d8._0_8_;
                uVar28 = auStack_3d8._8_8_;
                lVar44 = auStack_3d8._8_8_ - auStack_3d8._0_8_;
                pauVar43 = pauStack_348;
                if (lVar44 != 0) {
                  lVar60 = lVar42 + (lVar44 >> 7) * -0x80 + 0x50;
                  pauVar43 = (undefined1 (*) [16])auStack_3d8._0_8_;
                  do {
                    *(undefined1 (*) [16])(lVar60 + -0x50) = (undefined1  [16])0x0;
                    *(undefined8 *)(lVar60 + -0x40) = 0;
                    uVar31 = *(undefined8 *)(*pauVar43 + 8);
                    *(undefined8 *)(lVar60 + -0x50) = *(undefined8 *)*pauVar43;
                    *(undefined8 *)(lVar60 + -0x48) = uVar31;
                    *(undefined8 *)(lVar60 + -0x40) = *(undefined8 *)pauVar43[1];
                    *pauVar43 = (undefined1  [16])0x0;
                    *(undefined8 *)pauVar43[1] = 0;
                    *(undefined8 *)(lVar60 + -0x28) = *(undefined8 *)(pauVar43[2] + 8);
                    uVar31 = *(undefined8 *)pauVar43[2];
                    *(undefined8 *)(lVar60 + -0x38) = *(undefined8 *)(pauVar43[1] + 8);
                    *(undefined8 *)(lVar60 + -0x30) = uVar31;
                    *(undefined1 (*) [16])(pauVar43[1] + 8) = (undefined1  [16])0x0;
                    *(undefined8 *)(pauVar43[2] + 8) = 0;
                    *(undefined1 *)(lVar60 + -0x10) = pauVar43[4][0];
                    uVar31 = *(undefined8 *)(pauVar43[3] + 8);
                    *(undefined8 *)(lVar60 + -0x20) = *(undefined8 *)pauVar43[3];
                    *(undefined8 *)(lVar60 + -0x18) = uVar31;
                    pauVar32 = *(undefined1 (**) [16])pauVar43[7];
                    if (pauVar32 == (undefined1 (*) [16])0x0) {
                      *(undefined8 *)(lVar60 + 0x20) = 0;
                    }
                    else if (pauVar43 + 5 == pauVar32) {
                      *(long *)(lVar60 + 0x20) = lVar60;
                      (**(code **)(**(long **)pauVar43[7] + 0x18))(*(long **)pauVar43[7],lVar60);
                    }
                    else {
                      *(undefined1 (**) [16])(lVar60 + 0x20) = pauVar32;
                      *(undefined8 *)pauVar43[7] = 0;
                    }
                    pauVar43 = pauVar43 + 8;
                    lVar60 = lVar60 + 0x80;
                  } while (pauVar43 != (undefined1 (*) [16])uVar28);
                  do {
                    pauVar43 = *(undefined1 (**) [16])pauVar62[7];
                    if (pauVar43 == pauVar62 + 5) {
                      lVar60 = 0x20;
LAB_0d846605:
                      (**(code **)(*(long *)*pauVar43 + lVar60))();
                      bVar35 = pauVar62[1][8];
                    }
                    else {
                      lVar60 = 0x28;
                      if (pauVar43 != (undefined1 (*) [16])0x0) goto LAB_0d846605;
                      bVar35 = pauVar62[1][8];
                    }
                    if ((bVar35 & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(pauVar62[2] + 8),
                                      *(ulong *)(pauVar62[1] + 8) & 0xfffffffffffffffe);
                    }
                    lVar60 = *(long *)*pauVar62;
                    if (lVar60 != 0) {
                      lVar47 = *(long *)(*pauVar62 + 8);
                      lVar51 = lVar60;
                      if (lVar60 != lVar47) {
                        do {
                          if ((*(byte *)(lVar47 + -0x20) & 1) != 0) {
                            func_0x0412a280(*(undefined8 *)(lVar47 + -0x10),
                                            *(ulong *)(lVar47 + -0x20) & 0xfffffffffffffffe);
                          }
                          lVar47 = lVar47 + -0x30;
                        } while (lVar47 != lVar60);
                        lVar51 = *(long *)*pauVar62;
                      }
                      *(long *)(*pauVar62 + 8) = lVar60;
                      func_0x0412a280(lVar51,*(long *)pauVar62[1] - lVar51);
                    }
                    pauVar62 = pauVar62 + 8;
                  } while (pauVar62 != (undefined1 (*) [16])uVar28);
                  pauVar62 = (undefined1 (*) [16])auStack_3d8._0_8_;
                  pauVar43 = pauStack_348;
                }
                pauVar32 = pauStack_3c8;
                auStack_3d8._0_8_ = lVar42 - lVar44;
                cStack_350 = (char)pauVar62;
                uStack_34f = (undefined1)((ulong)pauVar62 >> 8);
                uStack_34e = (undefined2)((ulong)pauVar62 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauVar62 >> 0x20);
                auStack_3d8._8_8_ = pauVar43;
                pauStack_3c8 = (undefined1 (*) [16])auStack_340;
                pauStack_348 = pauVar62;
                if (pauVar62 != (undefined1 (*) [16])0x0) {
                  func_0x0412a280(pauVar62,(long)pauVar32 - (long)pauVar62);
                }
              }
            }
LAB_0d845d15:
            pbVar45 = pbVar45 + 0x80;
          } while (pbVar45 != pbStack_398);
        }
        pauVar62 = *(undefined1 (**) [16])pauStack_3c0[6];
        pauVar43 = *(undefined1 (**) [16])(pauStack_3c0[6] + 8);
        auStack_388 = (undefined1  [16])0x0;
        puStack_378 = (undefined8 *)0x0;
        pauVar32 = pauStack_3c0;
        for (; pauStack_3c0 = pauVar32, pauVar62 != pauVar43; pauVar62 = pauVar62 + 7) {
          lVar42 = auStack_3d8._0_8_;
          uVar28 = auStack_3d8._8_8_;
          if (((*pauVar62)[0] & 1) == 0) {
            pauStack_3a8 = *(undefined1 (**) [16])pauVar62[1];
            _auStack_3b8 = *pauVar62;
          }
          else {
            func_0x0412e5e0(auStack_3b8,*(undefined8 *)pauVar62[1],*(undefined8 *)(*pauVar62 + 8));
          }
          pauVar32 = pauStack_3a8;
          if (lVar42 == uVar28) {
            lVar44 = auStack_3d8._8_8_;
            if ((auStack_3b8[0] & 1) != 0) {
              goto LAB_0d845824;
            }
LAB_0d845829:
            if (lVar42 != lVar44) {
LAB_0d845832:
              uVar28 = auStack_388._8_8_;
              if ((ulong)auStack_388._8_8_ < puStack_378) {
                if (((*pauVar62)[0] & 1) == 0) {
                  *(undefined8 *)(auStack_388._8_8_ + 0x10) = *(undefined8 *)pauVar62[1];
                  uVar31 = *(undefined8 *)(*pauVar62 + 8);
                  *(undefined8 *)auStack_388._8_8_ = *(undefined8 *)*pauVar62;
                  *(undefined8 *)(auStack_388._8_8_ + 8) = uVar31;
                }
                else {
                  func_0x0412e5e0(auStack_388._8_8_,*(undefined8 *)pauVar62[1],
                                  *(undefined8 *)(*pauVar62 + 8));
                }
                if ((pauVar62[1][8] & 1) == 0) {
                  *(undefined8 *)(uVar28 + 0x28) = *(undefined8 *)(pauVar62[2] + 8);
                  uVar31 = *(undefined8 *)pauVar62[2];
                  *(undefined8 *)(uVar28 + 0x18) = *(undefined8 *)(pauVar62[1] + 8);
                  *(undefined8 *)(uVar28 + 0x20) = uVar31;
                }
                else {
                  func_0x0412e5e0((undefined8 *)(uVar28 + 0x18),*(undefined8 *)(pauVar62[2] + 8),
                                  *(undefined8 *)pauVar62[2]);
                }
                *(undefined **)(uVar28 + 0x40) = &UNK_0488e0b0;
                *(undefined4 *)(uVar28 + 0x50) = 0x48b5725f;
                *(undefined8 *)(uVar28 + 0x48) = 0;
                *(undefined1 *)(uVar28 + 0x54) = 0;
                *(undefined8 *)(uVar28 + 0x30) = 0;
                (**(code **)pauVar62[4])(4,pauVar62 + 3,(undefined8 *)(uVar28 + 0x30));
                *(undefined8 *)(uVar28 + 0x58) = *(undefined8 *)(pauVar62[5] + 8);
                uVar24 = (uint)(*(char *)(uVar28 + 0x54) == '\0' && pauVar62[5][4] != '\0');
                auVar66._0_4_ = (int)(uVar24 << 0x1f) >> 0x1f;
                auVar66._4_4_ = (int)(uVar24 << 0x1f) >> 0x1f;
                auVar66._8_4_ = (int)(uVar24 << 0x1f) >> 0x1f;
                auVar66._12_4_ = (int)(uVar24 << 0x1f) >> 0x1f;
                *(undefined1 (*) [16])(uVar28 + 0x60) = ~auVar66 & pauVar62[6];
                auStack_388._8_8_ = (undefined8 *)(uVar28 + 0x70);
              }
              else {
                lVar42 = auStack_388._8_8_ - auStack_388._0_8_;
                uVar37 = (lVar42 >> 4) * 0x6db6db6db6db6db7 + 1;
                if (0x249249249249249 < uVar37) goto LAB_0d84d322;
                lVar44 = (long)puStack_378 - auStack_388._0_8_ >> 4;
                uVar56 = lVar44 * -0x2492492492492492;
                if (uVar37 < uVar56) {
                  uVar37 = uVar56;
                }
                if (0x124924924924923 < (ulong)(lVar44 * 0x6db6db6db6db6db7)) {
                  uVar37 = 0x249249249249249;
                }
                puStack_338 = auStack_388;
                if (uVar37 == 0) {
                  lVar44 = 0;
                }
                else {
                  if (0x249249249249249 < uVar37) goto LAB_0d84d34f;
                  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x70);
                  if (lVar44 == 0) {
                    func_0x0eec74c0(uVar37 * 0x70,0);
                    lVar44 = 0;
                  }
                }
                uStack_358 = (uint)lVar44;
                uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
                uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
                uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
                puVar34 = (undefined8 *)(lVar42 + lVar44);
                cStack_350 = (char)puVar34;
                uStack_34f = (undefined1)((ulong)puVar34 >> 8);
                uStack_34e = (undefined2)((ulong)puVar34 >> 0x10);
                uStack_34c = (undefined4)((ulong)puVar34 >> 0x20);
                auStack_340 = (undefined1  [8])(uVar37 * 0x70 + lVar44);
                pauStack_348 = (undefined1 (*) [16])puVar34;
                if (((*pauVar62)[0] & 1) == 0) {
                  puVar34[2] = *(undefined8 *)pauVar62[1];
                  uVar28 = *(undefined8 *)(*pauVar62 + 8);
                  *puVar34 = *(undefined8 *)*pauVar62;
                  puVar34[1] = uVar28;
                }
                else {
                  func_0x0412e5e0(puVar34,*(undefined8 *)pauVar62[1],*(undefined8 *)(*pauVar62 + 8))
                  ;
                }
                if ((pauVar62[1][8] & 1) == 0) {
                  puVar34[5] = *(undefined8 *)(pauVar62[2] + 8);
                  uVar28 = *(undefined8 *)pauVar62[2];
                  puVar34[3] = *(undefined8 *)(pauVar62[1] + 8);
                  puVar34[4] = uVar28;
                }
                else {
                  func_0x0412e5e0(puVar34 + 3,*(undefined8 *)(pauVar62[2] + 8),
                                  *(undefined8 *)pauVar62[2]);
                }
                puVar34[8] = &UNK_0488e0b0;
                *(undefined4 *)(puVar34 + 10) = 0x48b5725f;
                puVar34[9] = 0;
                *(undefined1 *)((long)puVar34 + 0x54) = 0;
                puVar34[6] = 0;
                (**(code **)pauVar62[4])(4,pauVar62 + 3,puVar34 + 6);
                puVar34[0xb] = *(undefined8 *)(pauVar62[5] + 8);
                uVar24 = (uint)(*(char *)((long)puVar34 + 0x54) == '\0' && pauVar62[5][4] != '\0');
                auVar67._0_4_ = (int)(uVar24 << 0x1f) >> 0x1f;
                auVar67._4_4_ = (int)(uVar24 << 0x1f) >> 0x1f;
                auVar67._8_4_ = (int)(uVar24 << 0x1f) >> 0x1f;
                auVar67._12_4_ = (int)(uVar24 << 0x1f) >> 0x1f;
                *(undefined1 (*) [16])(puVar34 + 0xc) = ~auVar67 & pauVar62[6];
                lVar42 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)));
                pauStack_348 = (undefined1 (*) [16])((long)pauStack_348 + 0x70);
                pauVar32 = (undefined1 (*) [16])auStack_388._0_8_;
                uVar28 = auStack_388._8_8_;
                lVar44 = auStack_388._8_8_ - auStack_388._0_8_;
                pauVar58 = pauStack_348;
                if (lVar44 != 0) {
                  puVar34 = (undefined8 *)(lVar42 + (lVar44 >> 4) * -0x10 + 0x68);
                  pauVar58 = (undefined1 (*) [16])(auStack_388._0_8_ + 0x30);
                  do {
                    puVar34[-0xb] = *(undefined8 *)pauVar58[-2];
                    uVar31 = *(undefined8 *)(pauVar58[-3] + 8);
                    puVar34[-0xd] = *(undefined8 *)pauVar58[-3];
                    puVar34[-0xc] = uVar31;
                    pauVar58[-3] = (undefined1  [16])0x0;
                    *(undefined8 *)pauVar58[-2] = 0;
                    puVar34[-8] = *(undefined8 *)(pauVar58[-1] + 8);
                    uVar31 = *(undefined8 *)pauVar58[-1];
                    puVar34[-10] = *(undefined8 *)(pauVar58[-2] + 8);
                    puVar34[-9] = uVar31;
                    *(undefined1 (*) [16])(pauVar58[-2] + 8) = (undefined1  [16])0x0;
                    *(undefined8 *)(pauVar58[-1] + 8) = 0;
                    puVar34[-7] = 0;
                    uVar31 = *(undefined8 *)(pauVar58[1] + 8);
                    pcVar9 = *(code **)pauVar58[1];
                    puVar34[-5] = *(undefined8 *)pauVar58[1];
                    puVar34[-4] = uVar31;
                    *(undefined4 *)(puVar34 + -3) = *(undefined4 *)pauVar58[2];
                    cVar23 = pauVar58[2][4];
                    *(char *)((long)puVar34 + -0x14) = cVar23;
                    if (cVar23 != '\0') {
                      if (cVar23 == '\x02') {
                        (*pcVar9)(5,pauVar58);
                      }
                      else {
                        uVar31 = *(undefined8 *)*pauVar58;
                        *(undefined8 *)*pauVar58 = 0;
                        puVar34[-7] = uVar31;
                      }
                    }
                    auVar3 = *(undefined1 (*) [16])(pauVar58[2] + 8);
                    *(undefined8 *)pauVar58[3] = 0;
                    *(undefined1 (*) [16])(puVar34 + -2) = auVar3;
                    uVar31 = *(undefined8 *)(pauVar58[3] + 8);
                    *(undefined8 *)(pauVar58[3] + 8) = 0;
                    *puVar34 = uVar31;
                    puVar34 = puVar34 + 0xe;
                    pauVar29 = pauVar58 + 4;
                    pauVar58 = pauVar58 + 7;
                  } while (pauVar29 != (undefined1 (*) [16])uVar28);
                  do {
                    if (*(code **)(pauVar32[4] + 8) != (code *)0x0) {
                      (**(code **)(pauVar32[4] + 8))(pauVar32 + 3);
                    }
                    if ((pauVar32[1][8] & 1) == 0) {
                      bVar35 = (*pauVar32)[0];
                    }
                    else {
                      func_0x0412a280(*(undefined8 *)(pauVar32[2] + 8),
                                      *(ulong *)(pauVar32[1] + 8) & 0xfffffffffffffffe);
                      bVar35 = (*pauVar32)[0];
                    }
                    if ((bVar35 & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)pauVar32[1],
                                      *(ulong *)*pauVar32 & 0xfffffffffffffffe);
                    }
                    pauVar32 = pauVar32 + 7;
                  } while (pauVar32 != (undefined1 (*) [16])uVar28);
                  pauVar32 = (undefined1 (*) [16])auStack_388._0_8_;
                  pauVar58 = pauStack_348;
                }
                puVar34 = puStack_378;
                auStack_388._0_8_ = lVar42 - lVar44;
                cStack_350 = (char)pauVar32;
                uStack_34f = (undefined1)((ulong)pauVar32 >> 8);
                uStack_34e = (undefined2)((ulong)pauVar32 >> 0x10);
                uStack_34c = (undefined4)((ulong)pauVar32 >> 0x20);
                auStack_388._8_8_ = pauVar58;
                puStack_378 = (undefined8 *)auStack_340;
                pauStack_348 = pauVar32;
                if (pauVar32 != (undefined1 (*) [16])0x0) {
                  func_0x0412a280(pauVar32,(long)puVar34 - (long)pauVar32);
                }
              }
            }
          }
          else {
            bVar35 = auStack_3b8[0] >> 1;
            if ((auStack_3b8[0] & 1) != 0) {
              uVar37 = (ulong)stack0xfffffffffffffc50;
              lVar44 = lVar42;
              do {
                bVar35 = *(byte *)(lVar44 + 0x18);
                if ((bVar35 & 1) == 0) {
                  uVar56 = (ulong)(bVar35 >> 1);
                }
                else {
                  uVar56 = *(ulong *)(lVar44 + 0x20);
                }
                if (uVar56 == uVar37) {
                  if ((bVar35 & 1) == 0) {
                    lVar42 = lVar44 + 0x19;
                  }
                  else {
                    lVar42 = *(long *)(lVar44 + 0x28);
                  }
                  iVar26 = func_0x0eee3000(lVar42,pauVar32,uVar37);
                  lVar42 = lVar44;
                  if (iVar26 == 0) break;
                }
                lVar44 = lVar44 + 0x80;
                lVar42 = uVar28;
              } while (lVar44 != uVar28);
              lVar44 = auStack_3d8._8_8_;
LAB_0d845824:
              func_0x0412a280(pauVar32,auStack_3b8._0_8_ & 0xfffffffffffffffe);
              goto LAB_0d845829;
            }
            do {
              bVar4 = *(byte *)(lVar42 + 0x18);
              if ((bVar4 & 1) == 0) {
                uVar37 = (ulong)(bVar4 >> 1);
              }
              else {
                uVar37 = *(ulong *)(lVar42 + 0x20);
              }
              if (uVar37 == bVar35) {
                if ((bVar4 & 1) == 0) {
                  lVar44 = lVar42 + 0x19;
                }
                else {
                  lVar44 = *(long *)(lVar42 + 0x28);
                }
                iVar26 = func_0x0eee3000(lVar44,auStack_3b8 + 1,(ulong)bVar35);
                lVar44 = lVar42;
                if (iVar26 == 0) break;
              }
              lVar42 = lVar42 + 0x80;
              lVar44 = uVar28;
            } while (lVar42 != uVar28);
            if (lVar44 != auStack_3d8._8_8_) goto LAB_0d845832;
          }
          pauVar32 = pauStack_3c0;
        }
        pauVar62 = (undefined1 (*) [16])(pauVar32[1] + 8);
        uVar28 = auStack_158._8_8_;
        if ((ulong)auStack_158._8_8_ < pauStack_148) {
          if (((*pauVar62)[0] & 1) == 0) {
            pauStack_348 = *(undefined1 (**) [16])(pauVar32[2] + 8);
            uVar31 = *(undefined8 *)*pauVar62;
            uVar14 = *(undefined8 *)pauVar32[2];
            uStack_358 = (uint)uVar31;
            uStack_354 = (undefined1)((ulong)uVar31 >> 0x20);
            uStack_353 = (undefined2)((ulong)uVar31 >> 0x28);
            uStack_351 = (undefined1)((ulong)uVar31 >> 0x38);
            cStack_350 = (char)uVar14;
            uStack_34f = (undefined1)((ulong)uVar14 >> 8);
            uStack_34e = (undefined2)((ulong)uVar14 >> 0x10);
            uStack_34c = (undefined4)((ulong)uVar14 >> 0x20);
          }
          else {
            func_0x0412e5e0(&uStack_358,*(undefined8 *)(pauVar32[2] + 8),*(undefined8 *)pauVar32[2])
            ;
          }
          puVar34 = puStack_378;
          pauVar62 = pauStack_3c8;
          uVar5 = pauVar32[4][0];
          uVar31 = auStack_3d8._0_8_;
          uVar14 = auStack_3d8._8_8_;
          auStack_3d8 = ZEXT816(0);
          pauStack_3c8 = (undefined1 (*) [16])0x0;
          uVar20 = auStack_388._0_8_;
          uVar21 = auStack_388._8_8_;
          auStack_388 = ZEXT816(0);
          puStack_378 = (undefined8 *)0x0;
          uVar10 = *(undefined4 *)pauVar32[3];
          uVar11 = *(undefined4 *)(pauVar32[3] + 4);
          uVar12 = *(undefined4 *)(pauVar32[3] + 8);
          uVar13 = *(undefined4 *)(pauVar32[3] + 0xc);
          *(undefined8 *)(undefined1 *)uVar28 = 0;
          *(undefined8 *)((undefined1 *)uVar28 + 8) = 0;
          *(undefined8 *)*(undefined1 (*) [16])(uVar28 + 0x10) = 0;
          *(undefined1 (**) [16])(*(undefined1 (*) [16])(uVar28 + 0x20) + 8) = pauStack_348;
          *(uint *)(*(undefined1 (*) [16])(uVar28 + 0x10) + 8) = uStack_358;
          *(uint *)(*(undefined1 (*) [16])(uVar28 + 0x10) + 0xc) =
               CONCAT13(uStack_351,CONCAT21(uStack_353,uStack_354));
          *(uint *)*(undefined1 (*) [16])(uVar28 + 0x20) =
               CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350));
          *(undefined4 *)(*(undefined1 (*) [16])(uVar28 + 0x20) + 4) = uStack_34c;
          uStack_358 = 0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_351 = 0;
          cStack_350 = '\0';
          uStack_34f = 0;
          uStack_34e = 0;
          uStack_34c = 0;
          pauStack_348 = (undefined1 (*) [16])0x0;
          *(undefined4 *)*(undefined1 (*) [16])(uVar28 + 0x30) = uVar10;
          *(undefined4 *)(*(undefined1 (*) [16])(uVar28 + 0x30) + 4) = uVar11;
          *(undefined4 *)(*(undefined1 (*) [16])(uVar28 + 0x30) + 8) = uVar12;
          *(undefined4 *)(*(undefined1 (*) [16])(uVar28 + 0x30) + 0xc) = uVar13;
          (*(undefined1 (*) [16])(uVar28 + 0x40))[0] = uVar5;
          *(undefined8 *)(*(undefined1 (*) [16])(uVar28 + 0x40) + 8) = uVar31;
          *(undefined8 *)*(undefined1 (*) [16])(uVar28 + 0x50) = uVar14;
          *(undefined1 (**) [16])(*(undefined1 (*) [16])(uVar28 + 0x50) + 8) = pauVar62;
          *(undefined8 *)*(undefined1 (*) [16])(uVar28 + 0x60) = uVar20;
          *(undefined8 *)(*(undefined1 (*) [16])(uVar28 + 0x60) + 8) = uVar21;
          *(undefined8 **)*(undefined1 (*) [16])(uVar28 + 0x70) = puVar34;
          _auStack_3b8 = ZEXT816(0);
          pauStack_3a8 = (undefined1 (*) [16])0x0;
          auStack_3f8 = (undefined1  [8])auStack_3b8;
          func_0x0652e1d0(auStack_3f8);
          if ((uStack_358 & 1) != 0) {
            func_0x0412a280(pauStack_348,
                            CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358))
                                    ) & 0xfffffffffffffffe);
          }
          puVar27 = *(undefined1 (*) [16])(uVar28 + 0x70) + 8;
        }
        else {
          lVar42 = auStack_158._8_8_ - auStack_158._0_8_;
          uVar37 = (lVar42 >> 3) * -0x1111111111111111 + 1;
          if (0x222222222222222 < uVar37) goto LAB_0d84d3cc;
          lVar44 = (long)pauStack_148 - auStack_158._0_8_ >> 3;
          uVar56 = lVar44 * -0x2222222222222222;
          if (uVar37 < uVar56) {
            uVar37 = uVar56;
          }
          if (0x111111111111110 < (ulong)(lVar44 * -0x1111111111111111)) {
            uVar37 = 0x222222222222222;
          }
          puStack_338 = auStack_158;
          if (uVar37 == 0) {
            lVar44 = 0;
          }
          else {
            if (0x222222222222222 < uVar37) goto LAB_0d84d3f4;
            lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x78);
            if (lVar44 == 0) {
              func_0x0eec74c0(uVar37 * 0x78,0);
              lVar44 = 0;
            }
          }
          pauVar43 = pauStack_3c0;
          uStack_358 = (uint)lVar44;
          uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
          uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
          uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
          pauVar58 = (undefined1 (*) [16])(lVar42 + lVar44);
          cStack_350 = (char)pauVar58;
          uStack_34f = (undefined1)((ulong)pauVar58 >> 8);
          uStack_34e = (undefined2)((ulong)pauVar58 >> 0x10);
          uStack_34c = (undefined4)((ulong)pauVar58 >> 0x20);
          pauStack_b0 = (undefined1 (*) [16])(uVar37 * 0x78 + lVar44);
          auStack_340 = (undefined1  [8])pauStack_b0;
          pauStack_348 = pauVar58;
          if (((*pauVar62)[0] & 1) == 0) {
            pauStack_3a8 = *(undefined1 (**) [16])(pauVar32[2] + 8);
            _auStack_3b8 = *pauVar62;
          }
          else {
            func_0x0412e5e0(auStack_3b8,*(undefined8 *)(pauStack_3c0[2] + 8),
                            *(undefined8 *)pauStack_3c0[2]);
          }
          puVar34 = puStack_378;
          pauVar62 = pauStack_3c8;
          uVar5 = pauVar43[4][0];
          uVar28 = auStack_3d8._0_8_;
          uVar31 = auStack_3d8._8_8_;
          auStack_3d8 = ZEXT816(0);
          pauStack_3c8 = (undefined1 (*) [16])0x0;
          uVar14 = auStack_388._0_8_;
          uVar20 = auStack_388._8_8_;
          auStack_388 = ZEXT816(0);
          puStack_378 = (undefined8 *)0x0;
          uVar10 = *(undefined4 *)pauVar43[3];
          uVar11 = *(undefined4 *)(pauVar43[3] + 4);
          uVar12 = *(undefined4 *)(pauVar43[3] + 8);
          uVar13 = *(undefined4 *)(pauVar43[3] + 0xc);
          *(undefined8 *)*pauVar58 = 0;
          *(undefined8 *)(*pauVar58 + 8) = 0;
          *(undefined8 *)pauVar58[1] = 0;
          *(undefined1 (**) [16])(pauVar58[2] + 8) = pauStack_3a8;
          *(undefined4 *)(pauVar58[1] + 8) = auStack_3b8._0_4_;
          *(undefined4 *)(pauVar58[1] + 0xc) = auStack_3b8._4_4_;
          *(undefined4 *)pauVar58[2] = auStack_3b8._8_4_;
          *(undefined4 *)(pauVar58[2] + 4) = uStack_3ac;
          _auStack_3b8 = ZEXT816(0);
          pauStack_3a8 = (undefined1 (*) [16])0x0;
          *(undefined4 *)pauVar58[3] = uVar10;
          *(undefined4 *)(pauVar58[3] + 4) = uVar11;
          *(undefined4 *)(pauVar58[3] + 8) = uVar12;
          *(undefined4 *)(pauVar58[3] + 0xc) = uVar13;
          pauVar58[4][0] = uVar5;
          *(undefined8 *)(pauVar58[4] + 8) = uVar28;
          *(undefined8 *)pauVar58[5] = uVar31;
          *(undefined1 (**) [16])(pauVar58[5] + 8) = pauVar62;
          *(undefined8 *)pauVar58[6] = uVar14;
          *(undefined8 *)(pauVar58[6] + 8) = uVar20;
          *(undefined8 **)pauVar58[7] = puVar34;
          _auStack_3f8 = ZEXT816(0);
          pauStack_3e8 = (undefined1 (*) [16])0x0;
          auStack_208._0_8_ = auStack_3f8;
          func_0x0652e1d0(auStack_208);
          if ((auStack_3b8[0] & 1) != 0) {
            func_0x0412a280(pauStack_3a8,auStack_3b8._0_8_ & 0xfffffffffffffffe);
          }
          uVar28 = auStack_158._8_8_;
          pbStack_398 = (byte *)((long)pauVar58 + (auStack_158._0_8_ - auStack_158._8_8_));
          plVar40 = (long *)auStack_158._0_8_;
          if (auStack_158._0_8_ - auStack_158._8_8_ != 0) {
            lVar42 = 0;
            do {
              *(undefined1 (*) [16])(pbStack_398 + lVar42) = (undefined1  [16])0x0;
              pbVar45 = pbStack_398 + lVar42 + 0x10;
              pbVar45[0] = 0;
              pbVar45[1] = 0;
              pbVar45[2] = 0;
              pbVar45[3] = 0;
              pbVar45[4] = 0;
              pbVar45[5] = 0;
              pbVar45[6] = 0;
              pbVar45[7] = 0;
              uVar31 = ((undefined8 *)(auStack_158._0_8_ + lVar42))[1];
              *(undefined8 *)(pbStack_398 + lVar42) = *(undefined8 *)(auStack_158._0_8_ + lVar42);
              *(undefined8 *)(pbStack_398 + lVar42 + 8) = uVar31;
              *(undefined8 *)(pbStack_398 + lVar42 + 0x10) =
                   *(undefined8 *)(auStack_158._0_8_ + lVar42 + 0x10);
              *(undefined1 (*) [16])(auStack_158._0_8_ + lVar42) = (undefined1  [16])0x0;
              *(undefined8 *)(auStack_158._0_8_ + lVar42 + 0x10) = 0;
              *(undefined8 *)(pbStack_398 + lVar42 + 0x28) =
                   *(undefined8 *)(auStack_158._0_8_ + lVar42 + 0x28);
              puVar34 = (undefined8 *)(auStack_158._0_8_ + lVar42 + 0x18);
              uVar31 = puVar34[1];
              *(undefined8 *)(pbStack_398 + lVar42 + 0x18) = *puVar34;
              *(undefined8 *)(pbStack_398 + lVar42 + 0x18 + 8) = uVar31;
              *(undefined1 (*) [16])(auStack_158._0_8_ + lVar42 + 0x18) = (undefined1  [16])0x0;
              *(undefined8 *)(auStack_158._0_8_ + lVar42 + 0x28) = 0;
              puVar34 = (undefined8 *)(auStack_158._0_8_ + lVar42 + 0x30);
              uVar31 = puVar34[1];
              *(undefined8 *)(pbStack_398 + lVar42 + 0x30) = *puVar34;
              *(undefined8 *)(pbStack_398 + lVar42 + 0x30 + 8) = uVar31;
              pbStack_398[lVar42 + 0x40] = *(byte *)(auStack_158._0_8_ + lVar42 + 0x40);
              *(undefined1 (*) [16])(pbStack_398 + lVar42 + 0x48) = (undefined1  [16])0x0;
              pbVar45 = pbStack_398 + lVar42 + 0x58;
              pbVar45[0] = 0;
              pbVar45[1] = 0;
              pbVar45[2] = 0;
              pbVar45[3] = 0;
              pbVar45[4] = 0;
              pbVar45[5] = 0;
              pbVar45[6] = 0;
              pbVar45[7] = 0;
              puVar34 = (undefined8 *)(auStack_158._0_8_ + lVar42 + 0x48);
              uVar31 = puVar34[1];
              *(undefined8 *)(pbStack_398 + lVar42 + 0x48) = *puVar34;
              *(undefined8 *)(pbStack_398 + lVar42 + 0x48 + 8) = uVar31;
              *(undefined8 *)(pbStack_398 + lVar42 + 0x58) =
                   *(undefined8 *)(auStack_158._0_8_ + lVar42 + 0x58);
              *(undefined1 (*) [16])(auStack_158._0_8_ + lVar42 + 0x48) = (undefined1  [16])0x0;
              *(undefined8 *)(auStack_158._0_8_ + lVar42 + 0x58) = 0;
              *(undefined1 (*) [16])(pbStack_398 + lVar42 + 0x60) = (undefined1  [16])0x0;
              pbVar45 = pbStack_398 + lVar42 + 0x70;
              pbVar45[0] = 0;
              pbVar45[1] = 0;
              pbVar45[2] = 0;
              pbVar45[3] = 0;
              pbVar45[4] = 0;
              pbVar45[5] = 0;
              pbVar45[6] = 0;
              pbVar45[7] = 0;
              puVar34 = (undefined8 *)(auStack_158._0_8_ + lVar42 + 0x60);
              uVar31 = puVar34[1];
              *(undefined8 *)(pbStack_398 + lVar42 + 0x60) = *puVar34;
              *(undefined8 *)(pbStack_398 + lVar42 + 0x60 + 8) = uVar31;
              *(undefined8 *)(pbStack_398 + lVar42 + 0x70) =
                   *(undefined8 *)(auStack_158._0_8_ + lVar42 + 0x70);
              *(undefined1 (*) [16])(auStack_158._0_8_ + lVar42 + 0x60) = (undefined1  [16])0x0;
              *(undefined8 *)(auStack_158._0_8_ + lVar42 + 0x70) = 0;
              lVar44 = lVar42 + 0x78;
              lVar42 = lVar42 + 0x78;
            } while ((long *)(auStack_158._0_8_ + lVar44) != (long *)auStack_158._8_8_);
            do {
              lVar42 = plVar40[0xc];
              if (lVar42 != 0) {
                lVar44 = plVar40[0xd];
                lVar60 = lVar42;
                if (lVar42 != lVar44) {
                  do {
                    if (*(code **)(lVar44 + -0x28) != (code *)0x0) {
                      (**(code **)(lVar44 + -0x28))(lVar44 + -0x40);
                    }
                    if ((*(byte *)(lVar44 + -0x58) & 1) == 0) {
                      bVar35 = *(byte *)(lVar44 + -0x70);
                    }
                    else {
                      func_0x0412a280(*(undefined8 *)(lVar44 + -0x48),
                                      *(ulong *)(lVar44 + -0x58) & 0xfffffffffffffffe);
                      bVar35 = *(byte *)(lVar44 + -0x70);
                    }
                    if ((bVar35 & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar44 + -0x60),
                                      *(ulong *)(lVar44 + -0x70) & 0xfffffffffffffffe);
                    }
                    lVar44 = lVar44 + -0x70;
                  } while (lVar44 != lVar42);
                  lVar60 = plVar40[0xc];
                }
                plVar40[0xd] = lVar42;
                func_0x0412a280(lVar60,plVar40[0xe] - lVar60);
              }
              plVar36 = (long *)plVar40[9];
              if (plVar36 != (long *)0x0) {
                plVar38 = plVar36;
                plVar63 = (long *)plVar40[10];
                if (plVar36 != (long *)plVar40[10]) {
                  do {
                    plVar38 = (long *)plVar63[-2];
                    if (plVar38 == plVar63 + -6) {
                      lVar42 = 0x20;
LAB_0d846c55:
                      (**(code **)(*plVar38 + lVar42))();
                      bVar35 = *(byte *)(plVar63 + -0xd);
                    }
                    else {
                      lVar42 = 0x28;
                      if (plVar38 != (long *)0x0) goto LAB_0d846c55;
                      bVar35 = *(byte *)(plVar63 + -0xd);
                    }
                    if ((bVar35 & 1) != 0) {
                      func_0x0412a280(plVar63[-0xb],plVar63[-0xd] & 0xfffffffffffffffe);
                    }
                    plVar38 = plVar63 + -0x10;
                    lVar42 = *plVar38;
                    if (lVar42 != 0) {
                      lVar44 = plVar63[-0xf];
                      lVar60 = lVar42;
                      if (lVar42 != lVar44) {
                        do {
                          if ((*(byte *)(lVar44 + -0x20) & 1) != 0) {
                            func_0x0412a280(*(undefined8 *)(lVar44 + -0x10),
                                            *(ulong *)(lVar44 + -0x20) & 0xfffffffffffffffe);
                          }
                          lVar44 = lVar44 + -0x30;
                        } while (lVar44 != lVar42);
                        lVar60 = *plVar38;
                      }
                      plVar63[-0xf] = lVar42;
                      func_0x0412a280(lVar60,plVar63[-0xe] - lVar60);
                    }
                    plVar63 = plVar38;
                  } while (plVar36 != plVar38);
                  plVar38 = (long *)plVar40[9];
                }
                plVar40[10] = (long)plVar36;
                func_0x0412a280(plVar38,plVar40[0xb] - (long)plVar38);
              }
              if ((*(byte *)(plVar40 + 3) & 1) != 0) {
                func_0x0412a280(plVar40[5],plVar40[3] & 0xfffffffffffffffe);
              }
              lVar42 = *plVar40;
              if (lVar42 != 0) {
                lVar44 = plVar40[1];
                lVar60 = lVar42;
                if (lVar42 != lVar44) {
                  do {
                    if ((*(byte *)(lVar44 + -0x20) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar44 + -0x10),
                                      *(ulong *)(lVar44 + -0x20) & 0xfffffffffffffffe);
                    }
                    lVar44 = lVar44 + -0x30;
                  } while (lVar44 != lVar42);
                  lVar60 = *plVar40;
                }
                plVar40[1] = lVar42;
                func_0x0412a280(lVar60,plVar40[2] - lVar60);
              }
              plVar40 = plVar40 + 0xf;
            } while (plVar40 != (long *)uVar28);
            plVar40 = (long *)auStack_158._0_8_;
          }
          pauVar62 = pauStack_148;
          puVar27 = pauVar58[7] + 8;
          auStack_158._8_8_ = puVar27;
          auStack_158._0_8_ = pbStack_398;
          auVar3 = auStack_158;
          pauStack_148 = pauStack_b0;
          if (plVar40 != (long *)0x0) {
            auStack_158 = auVar3;
            func_0x0412a280(plVar40,(long)pauVar62 - (long)plVar40);
          }
        }
        auStack_158._8_8_ = puVar27;
        uStack_358 = (uint)auStack_388;
        uStack_354 = (undefined1)((ulong)auStack_388 >> 0x20);
        uStack_353 = (undefined2)((ulong)auStack_388 >> 0x28);
        uStack_351 = (undefined1)((ulong)auStack_388 >> 0x38);
        func_0x0652e1d0(&uStack_358);
        uVar28 = auStack_3d8._0_8_;
        if ((long *)auStack_3d8._0_8_ != (long *)0x0) {
          plVar40 = (long *)auStack_3d8._8_8_;
          while ((long *)uVar28 != plVar40) {
            plVar36 = (long *)plVar40[-2];
            if (plVar36 == plVar40 + -6) {
              lVar42 = 0x20;
LAB_0d846e35:
              (**(code **)(*plVar36 + lVar42))();
              bVar35 = *(byte *)(plVar40 + -0xd);
            }
            else {
              lVar42 = 0x28;
              if (plVar36 != (long *)0x0) goto LAB_0d846e35;
              bVar35 = *(byte *)(plVar40 + -0xd);
            }
            if ((bVar35 & 1) != 0) {
              func_0x0412a280(plVar40[-0xb],plVar40[-0xd] & 0xfffffffffffffffe);
            }
            plVar36 = plVar40 + -0x10;
            lVar42 = *plVar36;
            if (lVar42 != 0) {
              lVar44 = plVar40[-0xf];
              lVar60 = lVar42;
              if (lVar42 != lVar44) {
                do {
                  if ((*(byte *)(lVar44 + -0x20) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -0x10),
                                    *(ulong *)(lVar44 + -0x20) & 0xfffffffffffffffe);
                  }
                  lVar44 = lVar44 + -0x30;
                } while (lVar44 != lVar42);
                lVar60 = *plVar36;
              }
              plVar40[-0xf] = lVar42;
              func_0x0412a280(lVar60,plVar40[-0xe] - lVar60);
            }
            plVar40 = plVar36;
          }
          auStack_3d8._8_8_ = uVar28;
          func_0x0412a280(auStack_3d8._0_8_,(long)pauStack_3c8 - auStack_3d8._0_8_);
        }
      }
      pauVar62 = (undefined1 (*) [16])(pauStack_3c0[7] + 8);
    } while (pauVar62 != pauStack_1e8);
  }
  auStack_198 = (undefined1  [16])0x0;
  uStack_188 = 0;
  puVar6 = *(undefined8 **)(param_2 + 0xd8);
  for (puVar34 = *(undefined8 **)(param_2 + 0xd0); puVar34 != puVar6; puVar34 = puVar34 + 0xe) {
    cVar23 = func_0x0d850fd0(param_2,*puVar34,puVar34[1],(ulong)puStack_360 & 0xffffffff,pbStack_368
                            );
    if (cVar23 != '\0') {
      uVar28 = auStack_198._8_8_;
      if ((ulong)auStack_198._8_8_ < uStack_188) {
        func_0x0652b020(auStack_198._8_8_,puVar34);
        auStack_198._8_8_ = uVar28 + 0x70;
      }
      else {
        lVar42 = auStack_198._8_8_ - auStack_198._0_8_;
        uVar37 = (lVar42 >> 4) * 0x6db6db6db6db6db7 + 1;
        if (0x249249249249249 < uVar37) goto LAB_0d84d3c2;
        lVar44 = (long)(uStack_188 - auStack_198._0_8_) >> 4;
        uVar56 = lVar44 * -0x2492492492492492;
        if (uVar37 < uVar56) {
          uVar37 = uVar56;
        }
        if (0x124924924924923 < (ulong)(lVar44 * 0x6db6db6db6db6db7)) {
          uVar37 = 0x249249249249249;
        }
        puStack_338 = auStack_198;
        if (uVar37 == 0) {
          lVar44 = 0;
        }
        else {
          if (0x249249249249249 < uVar37) goto LAB_0d84d3ea;
          lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x70);
          if (lVar44 == 0) {
            func_0x0eec74c0(uVar37 * 0x70,0);
            lVar44 = 0;
          }
        }
        uStack_358 = (uint)lVar44;
        uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
        uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
        uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
        pauStack_348 = (undefined1 (*) [16])(lVar42 + lVar44);
        cStack_350 = (char)pauStack_348;
        uStack_34f = (undefined1)((ulong)pauStack_348 >> 8);
        uStack_34e = (undefined2)((ulong)pauStack_348 >> 0x10);
        uStack_34c = (undefined4)((ulong)pauStack_348 >> 0x20);
        auStack_340 = (undefined1  [8])(uVar37 * 0x70 + lVar44);
        func_0x0652b020(pauStack_348,puVar34);
        pbVar45 = (byte *)CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)));
        pauVar62 = (undefined1 (*) [16])((long)pauStack_348 + 0x70);
        lVar42 = auStack_198._0_8_;
        uVar28 = auStack_198._8_8_;
        lVar44 = (long)pbVar45 - (auStack_198._8_8_ - auStack_198._0_8_);
        pauStack_348 = pauVar62;
        if (auStack_198._8_8_ != auStack_198._0_8_) {
          lVar60 = 0;
          pbStack_398 = pbVar45;
          do {
            func_0x0652b020(lVar44 + lVar60,lVar42 + lVar60);
            lVar47 = lVar42 + lVar60;
            lVar60 = lVar60 + 0x70;
          } while (lVar47 + 0x70 != uVar28);
          do {
            func_0x05f93280(lVar42);
            lVar42 = lVar42 + 0x70;
          } while (lVar42 != uVar28);
          lVar42 = auStack_198._0_8_;
        }
        uVar37 = uStack_188;
        auStack_198._8_8_ = pauVar62;
        auStack_198._0_8_ = lVar44;
        uStack_188 = (ulong)auStack_340;
        if (lVar42 != 0) {
          func_0x0412a280(lVar42,uVar37 - lVar42);
          lVar44 = auStack_198._0_8_;
        }
        auStack_198._0_8_ = lVar44;
      }
    }
  }
  auStack_1d8 = (undefined1  [16])0x0;
  pauStack_1c8 = (undefined1 (*) [16])0x0;
  plVar36 = *(long **)(param_2 + 0xf0);
  for (plVar40 = *(long **)(param_2 + 0xe8); plVar40 != plVar36; plVar40 = plVar40 + 10) {
    cVar23 = func_0x0d850fd0(param_2,*plVar40,plVar40[1],(ulong)puStack_360 & 0xffffffff,pbStack_368
                            );
    if (cVar23 != '\0') {
      uVar28 = auStack_1d8._8_8_;
      if ((ulong)auStack_1d8._8_8_ < pauStack_1c8) {
        *(undefined1 (*) [16])auStack_1d8._8_8_ = (undefined1  [16])0x0;
        *(undefined8 *)*(undefined1 (*) [16])(auStack_1d8._8_8_ + 0x10) = 0;
        func_0x0652b220(auStack_1d8._8_8_,*plVar40,plVar40[1],
                        (plVar40[1] - *plVar40 >> 4) * -0x5555555555555555);
        if ((*(byte *)(plVar40 + 3) & 1) == 0) {
          *(long *)(*(undefined1 (*) [16])(uVar28 + 0x20) + 8) = plVar40[5];
          lVar42 = plVar40[4];
          *(long *)(*(undefined1 (*) [16])(uVar28 + 0x10) + 8) = plVar40[3];
          *(long *)*(undefined1 (*) [16])(uVar28 + 0x20) = lVar42;
        }
        else {
          func_0x0412e5e0(*(undefined1 (*) [16])(uVar28 + 0x10) + 8,plVar40[5],plVar40[4]);
        }
        lVar42 = plVar40[7];
        lVar44 = plVar40[7];
        *(long *)*(undefined1 (*) [16])(uVar28 + 0x30) = plVar40[6];
        *(long *)(*(undefined1 (*) [16])(uVar28 + 0x30) + 8) = lVar44;
        if (lVar42 != 0) {
          LOCK();
          plVar38 = (long *)(lVar42 + 8);
          *plVar38 = *plVar38 + 1;
          UNLOCK();
        }
        lVar42 = plVar40[9];
        *(long *)*(undefined1 (*) [16])(uVar28 + 0x40) = plVar40[8];
        *(long *)(*(undefined1 (*) [16])(uVar28 + 0x40) + 8) = lVar42;
        auStack_1d8._8_8_ = (undefined1 (*) [16])(uVar28 + 0x50);
      }
      else {
        lVar42 = auStack_1d8._8_8_ - auStack_1d8._0_8_;
        uVar37 = (lVar42 >> 4) * -0x3333333333333333 + 1;
        if (0x333333333333333 < uVar37) goto LAB_0d84d3bd;
        lVar44 = (long)pauStack_1c8 - auStack_1d8._0_8_ >> 4;
        uVar56 = lVar44 * -0x6666666666666666;
        if (uVar37 < uVar56) {
          uVar37 = uVar56;
        }
        if (0x199999999999998 < (ulong)(lVar44 * -0x3333333333333333)) {
          uVar37 = 0x333333333333333;
        }
        puStack_338 = auStack_1d8;
        if (uVar37 == 0) {
          lVar44 = 0;
        }
        else {
          if (0x333333333333333 < uVar37) goto LAB_0d84d3e5;
          lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x50);
          if (lVar44 == 0) {
            func_0x0eec74c0(uVar37 * 0x50,0);
            lVar44 = 0;
          }
        }
        uStack_358 = (uint)lVar44;
        uStack_354 = (undefined1)((ulong)lVar44 >> 0x20);
        uStack_353 = (undefined2)((ulong)lVar44 >> 0x28);
        uStack_351 = (undefined1)((ulong)lVar44 >> 0x38);
        pauVar62 = (undefined1 (*) [16])(lVar44 + lVar42);
        cStack_350 = (char)pauVar62;
        uStack_34f = (undefined1)((ulong)pauVar62 >> 8);
        uStack_34e = (undefined2)((ulong)pauVar62 >> 0x10);
        uStack_34c = (undefined4)((ulong)pauVar62 >> 0x20);
        auStack_340 = (undefined1  [8])(uVar37 * 0x50 + lVar44);
        *(undefined1 (*) [16])(lVar44 + lVar42) = (undefined1  [16])0x0;
        *(undefined8 *)(lVar44 + 0x10 + lVar42) = 0;
        pauStack_348 = pauVar62;
        func_0x0652b220(pauVar62,*plVar40,plVar40[1],
                        (plVar40[1] - *plVar40 >> 4) * -0x5555555555555555);
        if ((*(byte *)(plVar40 + 3) & 1) == 0) {
          *(long *)(pauVar62[2] + 8) = plVar40[5];
          lVar42 = plVar40[4];
          *(long *)(pauVar62[1] + 8) = plVar40[3];
          *(long *)pauVar62[2] = lVar42;
        }
        else {
          func_0x0412e5e0(pauVar62[1] + 8,plVar40[5],plVar40[4]);
        }
        pauVar43 = pauStack_348;
        lVar42 = plVar40[7];
        lVar44 = plVar40[7];
        *(long *)pauVar62[3] = plVar40[6];
        *(long *)(pauVar62[3] + 8) = lVar44;
        if (lVar42 != 0) {
          LOCK();
          plVar38 = (long *)(lVar42 + 8);
          *plVar38 = *plVar38 + 1;
          UNLOCK();
        }
        lVar42 = plVar40[9];
        *(long *)pauVar62[4] = plVar40[8];
        *(long *)(pauVar62[4] + 8) = lVar42;
        uVar28 = auStack_1d8._8_8_;
        lVar42 = auStack_1d8._0_8_ +
                 (CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350))) -
                 auStack_1d8._8_8_);
        plVar38 = (long *)auStack_1d8._0_8_;
        if (auStack_1d8._0_8_ != auStack_1d8._8_8_) {
          lVar44 = 0;
          do {
            *(undefined1 (*) [16])(lVar42 + lVar44) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar42 + 0x10 + lVar44) = 0;
            uVar31 = ((undefined8 *)(auStack_1d8._0_8_ + lVar44))[1];
            *(undefined8 *)(lVar42 + lVar44) = *(undefined8 *)(auStack_1d8._0_8_ + lVar44);
            ((undefined8 *)(lVar42 + lVar44))[1] = uVar31;
            *(undefined8 *)(lVar42 + 0x10 + lVar44) =
                 *(undefined8 *)(auStack_1d8._0_8_ + lVar44 + 0x10);
            *(undefined1 (*) [16])(auStack_1d8._0_8_ + lVar44) = (undefined1  [16])0x0;
            *(undefined8 *)(auStack_1d8._0_8_ + lVar44 + 0x10) = 0;
            *(undefined8 *)(lVar42 + 0x28 + lVar44) =
                 *(undefined8 *)(auStack_1d8._0_8_ + lVar44 + 0x28);
            puVar34 = (undefined8 *)(auStack_1d8._0_8_ + lVar44 + 0x18);
            uVar31 = puVar34[1];
            puVar6 = (undefined8 *)(lVar42 + 0x18 + lVar44);
            *puVar6 = *puVar34;
            puVar6[1] = uVar31;
            *(undefined1 (*) [16])(auStack_1d8._0_8_ + lVar44 + 0x18) = (undefined1  [16])0x0;
            *(undefined8 *)(auStack_1d8._0_8_ + lVar44 + 0x28) = 0;
            puVar34 = (undefined8 *)(auStack_1d8._0_8_ + lVar44 + 0x30);
            uVar31 = puVar34[1];
            puVar6 = (undefined8 *)(lVar42 + 0x30 + lVar44);
            *puVar6 = *puVar34;
            puVar6[1] = uVar31;
            *(undefined1 (*) [16])(auStack_1d8._0_8_ + lVar44 + 0x30) = (undefined1  [16])0x0;
            puVar34 = (undefined8 *)(auStack_1d8._0_8_ + lVar44 + 0x40);
            uVar31 = puVar34[1];
            puVar6 = (undefined8 *)(lVar42 + 0x40 + lVar44);
            *puVar6 = *puVar34;
            puVar6[1] = uVar31;
            lVar60 = lVar44 + 0x50;
            lVar44 = lVar44 + 0x50;
          } while ((long *)(auStack_1d8._0_8_ + lVar60) != (long *)auStack_1d8._8_8_);
          do {
            plVar63 = (long *)plVar38[7];
            if (plVar63 == (long *)0x0) {
LAB_0d8474ab:
              bVar35 = *(byte *)(plVar38 + 3);
            }
            else {
              LOCK();
              plVar2 = plVar63 + 1;
              lVar44 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar44 != 0) goto LAB_0d8474ab;
              (**(code **)(*plVar63 + 0x10))(plVar63);
              func_0x0412c2d0(plVar63);
              bVar35 = *(byte *)(plVar38 + 3);
            }
            if ((bVar35 & 1) != 0) {
              func_0x0412a280(plVar38[5],plVar38[3] & 0xfffffffffffffffe);
            }
            lVar44 = *plVar38;
            if (lVar44 != 0) {
              lVar60 = plVar38[1];
              lVar47 = lVar44;
              if (lVar44 != lVar60) {
                do {
                  if ((*(byte *)(lVar60 + -0x20) & 1) != 0) {
                    func_0x0412a28
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x14253ac  ' already exists in enum '
 * 0x14253b6  exists in enum '
 * 0x14a7037  A member with the name '
 */
