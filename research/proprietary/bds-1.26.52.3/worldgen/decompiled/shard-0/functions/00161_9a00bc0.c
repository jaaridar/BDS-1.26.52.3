/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b00bc0 (ELF vaddr 0x9a00bc0)
 * Label: caller-of-callee
 * Body:  [[09b00bc0, 09b00da9] [09b00db0, 09b00f3c] [09b00f40, 09b00f62] [09b00f70, 09b010d8] [09b010e0, 09b0113a] [09b01140, 09b01239] [09b01240, 09b0129d] [09b012a0, 09b01327] [09b01330, 09b0134b] [09b01350, 09b0137e] [09b01380, 09b013cd] [09b013d0, 09b017a0] [09b017b0, 09b018d5] [09b018e0, 09b019be] [09b019c0, 09b01a1a] [09b01a20, 09b01d74] [09b01d80, 09b02276] [09b02280, 09b0243b] [09b02440, 09b02473] [09b02480, 09b02820] [09b02830, 09b0289a] [09b028a0, 09b028d8] [09b028e0, 09b029a1] [09b029b0, 09b02adb] [09b02ae0, 09b02d67] [09b02d70, 09b02e5d] [09b02e60, 09b02f82] [09b02f90, 09b03048] [09b03050, 09b030b4] [09b030c0, 09b031ba] [09b031c0, 09b031fa] [09b03200, 09b03248] [09b03250, 09b03353] [09b03360, 09b03381] [09b03390, 09b0353a] [09b03540, 09b03599] [09b035a0, 09b035e4] [09b035f0, 09b03664] [09b03670, 09b038c7] [09b038d0, 09b03a33] [09b03a40, 09b03e9c] [09b03ea0, 09b040c5] [09b040d0, 09b04188] [09b04190, 09b0427b] [09b04280, 09b04707] [09b04710, 09b047f7] [09b04800, 09b04b77] [09b04b80, 09b04c76] [09b04c80, 09b04d09] [09b04d10, 09b04d35] [09b04d40, 09b04fad] [09b04fb0, 09b0500e] [09b05010, 09b0516e] [09b05635, 09b05653] [09b0582f, 09b05953] [09b05ac7, 09b05af2]]
 * Ghidra: FUN_09b00bc0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09b00bc0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                 undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  undefined1 (***pppauVar1) [16];
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte *pbVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [14];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  unkuint10 Var39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint *puVar45;
  uint *puVar46;
  uint6 uVar47;
  undefined8 uVar48;
  uint *puVar49;
  undefined8 *puVar50;
  char cVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  int iVar56;
  long lVar57;
  undefined1 (*pauVar58) [16];
  long lVar59;
  undefined8 uVar60;
  undefined8 *puVar61;
  byte *pbVar62;
  ulong *puVar63;
  char *pcVar64;
  ulong uVar65;
  undefined1 (*pauVar66) [16];
  undefined1 (*pauVar67) [16];
  undefined1 (*pauVar68) [16];
  undefined *puVar69;
  long *plVar70;
  undefined1 (*pauVar71) [16];
  undefined1 (**ppauVar72) [16];
  undefined1 (*pauVar73) [16];
  undefined1 auVar74 [8];
  uint uVar75;
  byte *pbVar76;
  undefined1 (*pauVar77) [16];
  ulong uVar78;
  long lVar79;
  ulong uVar80;
  long *plVar81;
  long *in_FS_OFFSET;
  bool bVar82;
  float fVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [12];
  undefined1 auVar107 [16];
  undefined1 (*pauStack_14e8) [16];
  undefined1 (*pauStack_14e0) [16];
  undefined1 (*pauStack_14d8) [16];
  ulong uStack_14d0;
  float fStack_14c8;
  uint *puStack_14b8;
  uint *puStack_14b0;
  long lStack_14a8;
  undefined8 uStack_14a0;
  undefined1 (*pauStack_1498) [16];
  undefined1 (*pauStack_1490) [16];
  undefined1 (*pauStack_1488) [16];
  undefined1 (*pauStack_1480) [16];
  undefined1 (*pauStack_1478) [16];
  undefined1 (*pauStack_1470) [16];
  undefined1 (*pauStack_1468) [16];
  long lStack_1460;
  undefined1 (**ppauStack_1458) [16];
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  byte *pbStack_1438;
  undefined2 uStack_1430;
  undefined6 uStack_142e;
  undefined2 uStack_1428;
  undefined6 uStack_1426;
  undefined2 uStack_1420;
  undefined6 uStack_141e;
  undefined8 uStack_1418;
  ulong uStack_1410;
  long lStack_1408;
  undefined1 (**ppauStack_13f8) [16];
  undefined1 (*pauStack_13f0) [16];
  undefined1 auStack_13e8 [16];
  undefined1 (***pppauStack_13d8) [16];
  undefined1 auStack_13d0 [16];
  ulong uStack_13c0;
  char cStack_13b8;
  undefined8 uStack_13a8;
  undefined1 (*pauStack_13a0) [16];
  undefined8 *puStack_1398;
  undefined8 *puStack_1390;
  undefined8 *puStack_1388;
  long *plStack_1380;
  long *plStack_1378;
  ulong uStack_1370;
  ulong uStack_1368;
  byte bStack_1358;
  undefined7 uStack_1357;
  undefined1 (*pauStack_1350) [16];
  undefined1 auStack_1348 [16];
  undefined8 *puStack_1338;
  undefined1 auStack_1330 [16];
  ulong uStack_1320;
  byte bStack_1318;
  long *plStack_1308;
  long *plStack_1300;
  undefined1 (*pauStack_12f8) [16];
  undefined1 auStack_12f0 [8];
  undefined1 (*pauStack_12e8) [16];
  undefined1 (**ppauStack_12e0) [16];
  undefined1 (*pauStack_12d8) [16];
  undefined1 (*pauStack_12d0) [16];
  undefined1 (*pauStack_12c8) [16];
  code *pcStack_12c0;
  code *pcStack_12b8;
  long lStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  long lStack_1288;
  undefined2 uStack_1280;
  undefined6 uStack_127e;
  undefined2 uStack_1278;
  undefined6 uStack_1276;
  undefined2 uStack_1270;
  undefined6 uStack_126e;
  undefined1 (*pauStack_1268) [16];
  undefined1 (*pauStack_1260) [16];
  undefined1 (*pauStack_1258) [16];
  ulong uStack_1250;
  float fStack_1248;
  undefined8 uStack_1240;
  ulong uStack_1238;
  long lStack_1230;
  undefined1 (**ppauStack_1228) [16];
  undefined1 (*pauStack_1220) [16];
  undefined1 auStack_1218 [16];
  undefined1 (***pppauStack_1208) [16];
  undefined1 auStack_1200 [16];
  ulong uStack_11f0;
  char cStack_11e8;
  undefined1 (*pauStack_11d8) [16];
  byte bStack_11d0;
  undefined7 uStack_11cf;
  ulong uStack_11c8;
  undefined7 *puStack_11c0;
  long lStack_11b8;
  undefined1 uStack_11b0;
  undefined5 uStack_11af;
  undefined3 uStack_11aa;
  undefined5 uStack_11a7;
  undefined1 uStack_11a2;
  long *plStack_1198;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 *puStack_1170;
  undefined1 (**ppauStack_1168) [16];
  long lStack_1160;
  undefined1 (*pauStack_1158) [16];
  undefined1 (*pauStack_1150) [16];
  undefined1 auStack_1148 [8];
  undefined1 (*pauStack_1140) [16];
  undefined8 *puStack_1138;
  undefined8 *puStack_1130;
  undefined1 auStack_1128 [8];
  undefined8 uStack_1120;
  long *plStack_1118;
  ulong uStack_1110;
  ulong uStack_1108;
  ushort uStack_1100;
  undefined1 (*pauStack_d48) [16];
  undefined8 uStack_d38;
  undefined1 (*pauStack_d30) [16];
  undefined1 (*pauStack_d28) [16];
  undefined1 (*pauStack_d20) [16];
  uint5 uStack_d18;
  undefined3 uStack_d13;
  uint uStack_d10;
  undefined2 uStack_d0c;
  undefined1 uStack_d0a;
  undefined1 uStack_d09;
  undefined1 (*pauStack_d08) [16];
  undefined1 (*pauStack_d00) [16];
  undefined1 (*pauStack_cf8) [16];
  undefined1 auStack_cf0 [224];
  undefined1 *puStack_c10;
  undefined8 uStack_c08;
  undefined1 auStack_c00 [384];
  undefined2 uStack_a80;
  undefined1 uStack_a7e;
  undefined8 uStack_a7c;
  undefined8 uStack_a70;
  undefined2 uStack_a68;
  undefined *puStack_a60;
  undefined2 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 *puStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined4 uStack_9c0;
  undefined1 uStack_9bc;
  undefined *puStack_9b8;
  undefined2 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 *puStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined4 uStack_918;
  undefined2 uStack_914;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined1 auStack_8f8 [16];
  undefined1 auStack_8e8 [16];
  undefined1 (*apauStack_8d8 [2]) [16];
  undefined8 uStack_8c8;
  undefined1 (*pauStack_8c0) [16];
  undefined1 (*pauStack_8b8) [16];
  undefined *puStack_8b0;
  undefined *puStack_8a8;
  long lStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  long lStack_880;
  ulong uStack_878;
  undefined2 uStack_870;
  undefined6 uStack_86e;
  undefined2 uStack_868;
  undefined6 uStack_866;
  undefined2 uStack_860;
  undefined6 uStack_85e;
  undefined4 uStack_810;
  ulong uStack_4c8;
  undefined1 auStack_458 [24];
  undefined4 uStack_440;
  undefined1 uStack_43c;
  undefined8 uStack_438;
  ulong uStack_430;
  long lStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  undefined2 uStack_400;
  undefined6 uStack_3fe;
  undefined2 uStack_3f8;
  undefined6 uStack_3f6;
  undefined2 uStack_3f0;
  undefined1 (*pauStack_38) [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  char cVar97;
  char cVar98;
  char cVar99;
  char cVar100;
  char cVar101;
  char cVar102;
  
  pauVar71 = param_1 + 1;
  pauVar58 = *(undefined1 (**) [16])param_1[3];
  *(long *)param_1[3] = 0;
  lVar79 = 0x20;
  lVar57 = 0x20;
  pauStack_13f0 = param_1;
  pauStack_12f8 = param_2;
  puStack_1170 = param_3;
  if ((pauVar58 == pauVar71) || (lVar57 = 0x28, pauVar58 != (undefined1 (*) [16])0x0)) {
    (**(code **)(*(long *)*pauVar58 + lVar57))();
    pauVar58 = *(undefined1 (**) [16])param_1[3];
    ppauVar72 = (undefined1 (**) [16])&UNK_0f1d4180;
    ppauStack_13f8 = (undefined1 (**) [16])&UNK_0f1d4180;
    pppauStack_13d8 = &ppauStack_13f8;
    *(long *)param_1[3] = 0;
    if ((pauVar58 != pauVar71) && (lVar79 = 0x28, pauVar58 == (undefined1 (*) [16])0x0))
    goto LAB_09b00ce9;
    (**(code **)(*(long *)*pauVar58 + lVar79))(pauVar58);
    if (pppauStack_13d8 == (undefined1 (***) [16])0x0) {
      *(long *)param_1[3] = 0;
    }
    else {
      if (pppauStack_13d8 == &ppauStack_13f8) {
        ppauVar72 = *pppauStack_13d8;
        goto LAB_09b00ce9;
      }
      *(undefined1 (****) [16])param_1[3] = pppauStack_13d8;
      pppauStack_13d8 = (undefined1 (***) [16])0x0;
    }
  }
  else {
    ppauVar72 = (undefined1 (**) [16])&UNK_0f1d4180;
    ppauStack_13f8 = (undefined1 (**) [16])&UNK_0f1d4180;
    pppauStack_13d8 = &ppauStack_13f8;
LAB_09b00ce9:
    *(undefined1 (**) [16])param_1[3] = pauVar71;
    (*(code *)ppauVar72[3])(pppauStack_13d8,pauVar71);
    if (pppauStack_13d8 == &ppauStack_13f8) {
      lVar57 = 0x20;
    }
    else {
      lVar57 = 0x28;
      if (pppauStack_13d8 == (undefined1 (***) [16])0x0) goto LAB_09b00d24;
    }
    (**(code **)((long)*pppauStack_13d8 + lVar57))();
  }
LAB_09b00d24:
  func_0x0d8220c0(&pauStack_14e8,param_1);
  pauStack_11d8 = pauStack_14e0;
  if (pauStack_14e8 != pauStack_14e0) {
    ppauStack_1168 = (undefined1 (**) [16])((long)pauStack_12f8[1] + 8);
    lVar79 = *in_FS_OFFSET;
    lVar57 = lVar79 + -0xa40;
    pauVar71 = pauStack_14e8;
    uStack_1188 = param_4;
    uStack_1180 = param_5;
    uStack_1178 = param_6;
    lStack_1160 = lVar57;
    do {
      pauStack_1268 = (undefined1 (*) [16])0x0;
      pauStack_1260 = (undefined1 (*) [16])0x0;
      pauStack_1258 = (undefined1 (*) [16])0x0;
      puStack_14b8 = (uint *)0x0;
      puStack_14b0 = (uint *)0x0;
      lStack_14a8 = 0;
      uStack_438 = 0;
      uStack_430 = 0;
      lStack_428 = 0;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_400 = 0;
      uStack_3fe = 0;
      uStack_3f8 = 0;
      uStack_3f6 = 0;
      uStack_3f0 = 0;
      uStack_1418 = 0;
      uStack_1410 = 0;
      lStack_1408 = 0;
      bStack_1358 = 0;
      auStack_1348[8] = 0;
      func_0x0d814ff0(&uStack_8c8,&pauStack_1268,&puStack_14b8,&uStack_438,1,&uStack_1418,1,0,0,
                      &bStack_1358);
      if ((auStack_1348[8] == '\x01') && ((bStack_1358 & 1) != 0)) {
        thunk_FUN_0ee326a0(auStack_1348._0_8_,CONCAT71(uStack_1357,bStack_1358) & 0xfffffffffffffffe
                          );
      }
      uVar80 = uStack_1418;
      uVar65 = uStack_1410;
      if (uStack_1418 != 0) {
        for (; uVar80 != uVar65; uVar65 = uVar65 - 0x18) {
          if ((*(byte *)(uVar65 - 0x18) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(uVar65 - 8),
                               *(ulong *)(uVar65 - 0x18) & 0xfffffffffffffffe);
          }
        }
        uStack_1410 = uVar80;
        thunk_FUN_0ee326a0(uVar80,lStack_1408 - uVar80);
      }
      if ((uStack_408 & 1) == 0) {
        if ((uStack_438 & 1) != 0) goto LAB_09b00f97;
LAB_09b00f01:
        if (((ulong)puStack_14b8 & 1) != 0) goto LAB_09b00fbb;
LAB_09b00f0c:
        if (((ulong)pauStack_1268 & 1) != 0) goto LAB_09b00fdc;
LAB_09b00f1a:
        if (((ulong)uStack_8c8 & 1) != 0) goto LAB_09b01003;
LAB_09b00f28:
        uStack_8c8 = (undefined1 (*) [16])CONCAT71(uStack_8c8._1_7_,0xc);
        pauVar58 = (undefined1 (*) [16])((long)&uStack_8c8 + 1);
      }
      else {
        thunk_FUN_0ee326a0(CONCAT62(uStack_3f6,uStack_3f8),uStack_408 & 0xfffffffffffffffe);
        if ((uStack_438 & 1) == 0) goto LAB_09b00f01;
LAB_09b00f97:
        thunk_FUN_0ee326a0(lStack_428,uStack_438 & 0xfffffffffffffffe);
        if (((ulong)puStack_14b8 & 1) == 0) goto LAB_09b00f0c;
LAB_09b00fbb:
        thunk_FUN_0ee326a0(lStack_14a8,(ulong)puStack_14b8 & 0xfffffffffffffffe);
        if (((ulong)pauStack_1268 & 1) == 0) goto LAB_09b00f1a;
LAB_09b00fdc:
        thunk_FUN_0ee326a0(pauStack_1258,(ulong)pauStack_1268 & 0xfffffffffffffffe);
        if (((ulong)uStack_8c8 & 1) == 0) goto LAB_09b00f28;
LAB_09b01003:
        pauStack_8c0 = (undefined1 (*) [16])0x6;
        pauVar58 = pauStack_8b8;
      }
      *(undefined2 *)((long)*pauVar58 + 4) = 0x6576;
      *(undefined4 *)*pauVar58 = 0x6974616e;
      *(undefined1 *)((long)*pauVar58 + 6) = 0;
      if (*(char *)(lVar79 + -0x58) == '\0') {
        func_0x0ee49c60(lVar79 + -0xa40);
        *(undefined1 *)(lVar79 + -0x58) = 1;
      }
      uVar52 = func_0x0ee4a030(lVar57,0);
      uVar53 = func_0x0ee4a030(lVar57,0);
      uVar54 = func_0x0ee4a030(lVar57,0);
      uVar55 = func_0x0ee4a030(lVar57,0);
      lStack_880 = (CONCAT44(uVar52,uVar53) & 0xffffffffffff0fff) + 0x4000;
      uStack_878 = CONCAT44(uVar54,uVar55) & 0x3fffffffffffffff | 0x8000000000000000;
      uStack_810 = 0;
      if ((*(long *)*pauVar71 & 1) == 0) {
        puStack_1138 = *(undefined8 **)pauVar71[1];
        _auStack_1148 = *pauVar71;
      }
      else {
        FUN_0412e5e0(auStack_1148,*(long *)pauVar71[1],*(long *)((long)*pauVar71 + 8));
      }
      auVar35 = _auStack_1128;
      puStack_1130 = *(undefined8 **)((long)pauVar71[1] + 8);
      auStack_1128 = (undefined1  [8])*(long *)pauVar71[2];
      auVar94 = _auStack_1128;
      uStack_1120._6_2_ = auVar35._14_2_;
      _auStack_1128 = auVar94._0_12_;
      uStack_1120._4_2_ = *(undefined2 *)((long)pauVar71[2] + 0xc);
      _auStack_1128 = *(undefined1 (*) [12])pauVar71[2];
      if ((*(long *)pauVar71[3] & 1) == 0) {
        uStack_1108 = *(ulong *)pauVar71[4];
        plStack_1118 = *(long **)pauVar71[3];
        uStack_1110 = *(ulong *)((long)pauVar71[3] + 8);
      }
      else {
        FUN_0412e5e0(&plStack_1118,*(long *)pauVar71[4],*(long *)((long)pauVar71[3] + 8));
      }
      uStack_1100 = *(ushort *)((long)pauVar71[4] + 8);
      pauStack_1488 = (undefined1 (*) [16])0x0;
      pauStack_1480 = (undefined1 (*) [16])0x0;
      pauStack_1478 = (undefined1 (*) [16])0x0;
      uStack_13a8 = &pauStack_1488;
      pauStack_13a0 = (undefined1 (*) [16])((ulong)pauStack_13a0 & 0xffffffffffffff00);
      pauVar58 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
      if (pauVar58 == (undefined1 (*) [16])0x0) {
        func_0x0eec74c0(0x50,0);
      }
      pauStack_1478 = pauVar58 + 5;
      lStack_11b8._0_1_ = SUB81(pauVar58,0);
      lStack_11b8._1_7_ = (undefined7)((ulong)pauVar58 >> 8);
      pauStack_12d8 = (undefined1 (*) [16])&pauStack_1488;
      pauStack_12d0 = (undefined1 (*) [16])&uStack_1240;
      pauStack_12c8 = (undefined1 (*) [16])&lStack_11b8;
      pcStack_12c0 = (code *)((ulong)pcStack_12c0 & 0xffffffffffffff00);
      pauStack_1488 = pauVar58;
      pauStack_1480 = pauVar58;
      uStack_1240 = pauVar58;
      if ((auStack_1148[0] & 1) == 0) {
        *(undefined8 **)pauVar58[1] = puStack_1138;
        *(undefined1 (*) [8])*pauVar58 = auStack_1148;
        *(undefined1 (**) [16])(*pauVar58 + 8) = pauStack_1140;
      }
      else {
        FUN_0412e5e0(pauVar58,puStack_1138,pauStack_1140);
      }
      *(undefined8 **)(pauVar58[1] + 8) = puStack_1130;
      *(undefined1 (*) [8])pauVar58[2] = auStack_1128;
      *(undefined2 *)(pauVar58[2] + 0xc) = uStack_1120._4_2_;
      *(undefined4 *)(pauVar58[2] + 8) = (undefined4)uStack_1120;
      if (((ulong)plStack_1118 & 1) == 0) {
        *(ulong *)pauVar58[4] = uStack_1108;
        *(long **)pauVar58[3] = plStack_1118;
        *(ulong *)(pauVar58[3] + 8) = uStack_1110;
      }
      else {
        FUN_0412e5e0(pauVar58 + 3,uStack_1108,uStack_1110);
      }
      *(ushort *)(pauVar58[4] + 8) = uStack_1100;
      pauStack_1480 =
           (undefined1 (*) [16])(CONCAT71(lStack_11b8._1_7_,(undefined1)lStack_11b8) + 0x50);
      func_0x0d81e480(&uStack_d38,param_1,&uStack_8c8,pauVar71,&pauStack_1488,0,0);
      pauVar66 = pauStack_1488;
      pauVar58 = pauStack_1480;
      if (pauStack_1488 != (undefined1 (*) [16])0x0) {
        for (; pauVar66 != pauVar58; pauVar58 = pauVar58 + -5) {
          if ((pauVar58[-2][0] & 1) == 0) {
            bVar2 = pauVar58[-5][0];
          }
          else {
            thunk_FUN_0ee326a0(*(undefined8 *)pauVar58[-1],
                               *(ulong *)pauVar58[-2] & 0xfffffffffffffffe);
            bVar2 = pauVar58[-5][0];
          }
          if ((bVar2 & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)pauVar58[-4],
                               *(ulong *)pauVar58[-5] & 0xfffffffffffffffe);
          }
        }
        pauStack_1480 = pauVar66;
        thunk_FUN_0ee326a0(pauStack_1488,(long)pauStack_1478 - (long)pauStack_1488);
      }
      if (((ulong)plStack_1118 & 1) == 0) {
        if ((auStack_1148[0] & 1) != 0) goto LAB_09b013fb;
LAB_09b013bf:
        pauVar58 = pauStack_1468;
        ppauVar72 = uStack_13a8;
        pauStack_1468 = (undefined1 (*) [16])ppauStack_1168;
      }
      else {
        thunk_FUN_0ee326a0(uStack_1108,(ulong)plStack_1118 & 0xfffffffffffffffe);
        if ((auStack_1148[0] & 1) == 0) goto LAB_09b013bf;
LAB_09b013fb:
        thunk_FUN_0ee326a0(puStack_1138,(ulong)auStack_1148 & 0xfffffffffffffffe);
        pauVar58 = pauStack_1468;
        ppauVar72 = uStack_13a8;
        pauStack_1468 = (undefined1 (*) [16])ppauStack_1168;
      }
      uStack_13a8 = ppauVar72;
      ppauStack_1168 = (undefined1 (**) [16])pauStack_1468;
      if ((char)uStack_d18 == '\x01') {
        ppauStack_1228 = (undefined1 (**) [16])&UNK_0f1d4250;
        auStack_1218._0_8_ = pauStack_1468;
        pppauStack_1208 = &ppauStack_1228;
        pauStack_1488 = (undefined1 (*) [16])&UNK_0f486d70;
        ppauStack_1458 = &pauStack_1478;
        pauStack_1478 = (undefined1 (*) [16])&UNK_0f1d4250;
        pauStack_1470 = pauVar71;
        pauStack_1220 = pauVar71;
        if (uStack_d38 == (undefined1 (*) [16])0x0) {
          lStack_11b8._0_1_ = 0x2a;
          lStack_11b8._1_7_ = (undefined7)_DAT_012352f4;
          uStack_11b0 = (undefined1)((ulong)_DAT_012352f4 >> 0x38);
          uStack_11a2 = 0;
          uStack_13a8._0_5_ = CONCAT41(_DAT_013f776f,10);
          uVar47 = CONCAT15(DAT_013f7773,(undefined5)uStack_13a8);
          uStack_13a8._7_1_ = (undefined1)((ulong)ppauVar72 >> 0x38);
          uStack_13a8._0_7_ = (uint7)uVar47;
          uStack_11af = _UNK_012352fc;
          uStack_11aa = _DAT_01235301;
          uStack_11a7 = _UNK_01235304;
          func_0x0d858ce0(auStack_1148,&uStack_13a8,&lStack_11b8);
          pauStack_12d8 = (undefined1 (*) [16])CONCAT71(pauStack_12d8._1_7_,1);
          func_0x05e91e00(&pauStack_12d0,auStack_1148);
          func_0x048fb670(auStack_1148);
        }
        else {
          (*(code *)*(undefined1 (**) [16])(*(undefined1 (**) [16])*uStack_d38)[3])
                    (&pauStack_12d8,uStack_d38,(ulong)pauStack_d28 & 0xffffffff,&pauStack_1488,0);
        }
        func_0x05f929d0(&pauStack_12d8);
        if (pcStack_12b8 != (code *)0x0) {
          (*pcStack_12b8)(&pauStack_12d0);
        }
        pauStack_1488 = (undefined1 (*) [16])&UNK_0f486d70;
        if (ppauStack_1458 == &pauStack_1478) {
          lVar59 = 0x20;
        }
        else {
          lVar59 = 0x28;
          pauVar58 = pauStack_1468;
          if (ppauStack_1458 == (undefined1 (**) [16])0x0) goto LAB_09b015af;
        }
        (**(code **)(**ppauStack_1458 + lVar59))();
        pauVar58 = pauStack_1468;
      }
LAB_09b015af:
      pauStack_1468 = pauVar58;
      func_0x09ab2e50(auStack_cf0);
      if (((char)pauStack_cf8 == '\x01') && ((uStack_d10 & 1) != 0)) {
        thunk_FUN_0ee326a0(pauStack_d00,
                           CONCAT17(uStack_d09,CONCAT16(uStack_d0a,CONCAT24(uStack_d0c,uStack_d10)))
                           & 0xfffffffffffffffe);
      }
      if ((char)uStack_d18 == '\x01') {
        if (pauStack_d20 != (undefined1 (*) [16])0x0) {
          func_0x0d855c10(pauStack_d20,0);
        }
        if (uStack_d38 == (undefined1 (*) [16])0x0) {
LAB_09b0164f:
          pauVar58 = pauStack_d20;
          if (pauStack_d20 != (undefined1 (*) [16])0x0) goto LAB_09b0166c;
LAB_09b016f7:
          pauStack_d20 = (undefined1 (*) [16])0x0;
          pauStack_d28 = (undefined1 (*) [16])((ulong)pauStack_d28 & 0xffffffffffffff00);
          pauVar58 = pauStack_d30;
        }
        else {
          (*(code *)*(undefined1 (**) [16])((long)(*(undefined1 (**) [16])*uStack_d38)[2] + 8))
                    (uStack_d38,(ulong)pauStack_d28 & 0xffffffff);
          pauVar58 = pauStack_d30;
          uStack_d38 = (undefined1 (*) [16])0x0;
          pauStack_d30 = (undefined1 (*) [16])0x0;
          if (pauVar58 == (undefined1 (*) [16])0x0) goto LAB_09b0164f;
          LOCK();
          ppauVar72 = (undefined1 (**) [16])((long)*pauVar58 + 8);
          pauVar66 = *ppauVar72;
          *ppauVar72 = (undefined1 (*) [16])((*ppauVar72)[-1] + 0xf);
          UNLOCK();
          if (pauVar66 != (undefined1 (*) [16])0x0) goto LAB_09b0164f;
          (**(code **)(*(undefined1 (**) [16])*pauVar58)[1])(pauVar58);
          func_0x0412c2d0(pauVar58);
          pauVar58 = pauStack_d20;
          if (pauStack_d20 == (undefined1 (*) [16])0x0) goto LAB_09b016f7;
LAB_09b0166c:
          pauStack_d20 = (undefined1 (*) [16])0x0;
          func_0x0d855af0(pauVar58);
          thunk_FUN_0ee326a0(pauVar58,0x1c0);
          pauVar66 = pauStack_d20;
          pauStack_d28 = (undefined1 (*) [16])((ulong)pauStack_d28 & 0xffffffffffffff00);
          pauStack_d20 = (undefined1 (*) [16])0x0;
          pauVar58 = pauStack_d30;
          if (pauVar66 != (undefined1 (*) [16])0x0) {
            func_0x0d855af0(pauVar66);
            thunk_FUN_0ee326a0(pauVar66,0x1c0);
            pauVar58 = pauStack_d30;
          }
        }
        pauStack_d30 = pauVar58;
        if (pauVar58 != (undefined1 (*) [16])0x0) {
          LOCK();
          ppauVar72 = (undefined1 (**) [16])((long)*pauVar58 + 8);
          pauVar66 = *ppauVar72;
          *ppauVar72 = (undefined1 (*) [16])((*ppauVar72)[-1] + 0xf);
          UNLOCK();
          if (pauVar66 == (undefined1 (*) [16])0x0) {
            (**(code **)(*(undefined1 (**) [16])*pauVar58)[1])(pauVar58);
            func_0x0412c2d0(pauVar58);
          }
        }
      }
      func_0x0652a180(&uStack_8c8);
      pauVar71 = (undefined1 (*) [16])((long)pauVar71[6] + 8);
      param_4 = uStack_1188;
      param_5 = uStack_1180;
      param_6 = uStack_1178;
    } while (pauVar71 != pauStack_11d8);
  }
  pauVar71 = pauStack_14e8;
  if (pauStack_14e8 != (undefined1 (*) [16])0x0) {
    if (pauStack_14e8 != pauStack_14e0) {
      plVar70 = (long *)((long)pauStack_14e0[-2] + 8);
      do {
        if (*plVar70 != 0) {
          func_0x0652e590(plVar70);
          thunk_FUN_0ee326a0(*plVar70,plVar70[2] - *plVar70);
        }
        if ((*(byte *)(plVar70 + -4) & 1) != 0) {
          thunk_FUN_0ee326a0(plVar70[-2],plVar70[-4] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(plVar70 + -10) & 1) != 0) {
          thunk_FUN_0ee326a0(plVar70[-8],plVar70[-10] & 0xfffffffffffffffe);
        }
        pauVar58 = (undefined1 (*) [16])(plVar70 + -10);
        plVar70 = plVar70 + -0xd;
      } while (pauVar58 != pauVar71);
    }
    pauStack_14e0 = pauVar71;
    thunk_FUN_0ee326a0(pauStack_14e8,(long)pauStack_14d8 - (long)pauStack_14e8);
  }
  pauVar71 = pauStack_12f8;
  uVar60 = *puStack_1170;
  lVar57 = puStack_1170[1];
  if (lVar57 != 0) {
    LOCK();
    *(long *)(lVar57 + 0x10) = *(long *)(lVar57 + 0x10) + 1;
    UNLOCK();
  }
  func_0x09afbfb0(pauStack_12f8,uVar60,lVar57,param_4,param_5,param_6);
  if (lVar57 != 0) {
    func_0x0412c2d0(lVar57);
  }
  func_0x04863060(&pauStack_12d8,0);
  func_0x09b05b40(&pauStack_12d8,&UNK_013b6750);
  func_0x04863060(&pauStack_1488,6);
  func_0x0d8220c0(auStack_1148,param_1);
  if (auStack_1148 != (undefined1  [8])pauStack_1140) {
    pauVar58 = (undefined1 (*) [16])&ppauStack_13f8;
    pauStack_11d8 = pauStack_1140;
    auVar74 = auStack_1148;
    pauVar66 = pauStack_1140;
    do {
      func_0x04863060(pauVar58,6);
      lVar79 = _DAT_0f6e9b90;
      for (lVar57 = _DAT_0f6e9b88; lVar57 != lVar79; lVar57 = lVar57 + 0x40) {
        plVar70 = *(long **)(lVar57 + 0x30);
        if (plVar70 == (long *)0x0) {
          FUN_04891200();
          goto LAB_09b050ac;
        }
        (**(code **)(*plVar70 + 0x30))(plVar70,auVar74,pauVar58);
      }
      cVar51 = func_0x04864220(pauVar58);
      if (cVar51 == '\0') {
        func_0x04863060(&ppauStack_1228,0);
        func_0x09afacd0(&uStack_8c8,(long *)((long)*(undefined1 (*) [16])((long)auVar74 + 0x20) + 8)
                       );
        func_0x048631d0(&uStack_d38,&uStack_8c8);
        uVar60 = func_0x04864680(&ppauStack_1228,&UNK_013236a8);
        func_0x04863790(uVar60,&uStack_d38);
        FUN_04863610(&uStack_d38);
        bVar2 = (byte)*(long *)*(undefined1 (*) [16])auVar74;
        if ((bVar2 & 1) == 0) {
          uVar65 = (ulong)(bVar2 >> 1);
        }
        else {
          uVar65 = *(ulong *)((long)*(undefined1 (*) [16])auVar74 + 8);
        }
        uVar80 = uVar65 + 1;
        if (0xfffffffffffffff7 < uVar80) goto LAB_09b05116;
        if (uVar80 < 0x17) {
          uStack_430 = 0;
          lStack_428 = 0;
          uStack_438 = (ulong)(byte)((char)uVar80 * '\x02');
          lVar57 = (long)&uStack_438 + 1;
          if (uVar65 != 0) {
            if ((bVar2 & 1) == 0) goto LAB_09b01a83;
LAB_09b01a15:
            lVar79 = *(long *)*(undefined1 (*) [16])((long)auVar74 + 0x10);
            goto LAB_09b01a87;
          }
        }
        else {
          uVar78 = (uVar80 | 7) + 1;
          if ((uVar80 | 7) == 0x17) {
            uVar78 = 0x1a;
          }
          lVar57 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar78);
          if (lVar57 == 0) {
            func_0x0eec74c0(uVar78,0);
          }
          uStack_438 = uVar78 | 1;
          pauVar71 = pauStack_12f8;
          uStack_430 = uVar80;
          lStack_428 = lVar57;
          if ((bVar2 & 1) != 0) goto LAB_09b01a15;
LAB_09b01a83:
          lVar79 = (long)*(undefined1 (*) [16])auVar74 + 1;
LAB_09b01a87:
          func_0x0eee2ee0(lVar57,lVar79,uVar65);
        }
        *(undefined2 *)(lVar57 + uVar65) = 0x20;
        pauVar67 = (undefined1 (*) [16])((ulong)uStack_8c8 >> 1 & 0x7f);
        pauVar66 = (undefined1 (*) [16])((long)&uStack_8c8 + 1);
        if (((ulong)uStack_8c8 & 1) != 0) {
          pauVar67 = pauStack_8c0;
          pauVar66 = pauStack_8b8;
        }
        puVar61 = (undefined8 *)func_0x0412f8c0(&uStack_438,pauVar66,pauVar67);
        pauStack_d28 = (undefined1 (*) [16])puVar61[2];
        uStack_d38 = (undefined1 (*) [16])*puVar61;
        pauStack_d30 = (undefined1 (*) [16])puVar61[1];
        *puVar61 = 0;
        puVar61[1] = 0;
        puVar61[2] = 0;
        func_0x048631d0(&bStack_1358,&uStack_d38);
        pauVar66 = pauStack_11d8;
        uVar60 = func_0x04864680(&ppauStack_1228,&UNK_01410416);
        func_0x04863790(uVar60,&bStack_1358);
        FUN_04863610(&bStack_1358);
        if (((ulong)uStack_d38 & 1) != 0) {
          thunk_FUN_0ee326a0(pauStack_d28,(ulong)uStack_d38 & 0xfffffffffffffffe);
        }
        if ((uStack_438 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_428,uStack_438 & 0xfffffffffffffffe);
        }
        uVar60 = func_0x04864680(&ppauStack_1228,&UNK_011c2c08);
        func_0x04863790(uVar60,pauVar58);
        func_0x04864bf0(&pauStack_1488,&ppauStack_1228);
        if (((ulong)uStack_8c8 & 1) != 0) {
          thunk_FUN_0ee326a0(pauStack_8b8,(ulong)uStack_8c8 & 0xfffffffffffffffe);
        }
        FUN_04863610(&ppauStack_1228);
      }
      FUN_04863610(pauVar58);
      auVar74 = (undefined1  [8])((long)*(undefined1 (*) [16])((long)auVar74 + 0x60) + 8);
    } while (auVar74 != (undefined1  [8])pauVar66);
  }
  uVar60 = func_0x04864680(&pauStack_12d8,&UNK_0122caa6);
  func_0x04863790(uVar60,&pauStack_1488);
  bVar82 = (pauVar71[3][0] & 1) != 0;
  uStack_d38 = (undefined1 (*) [16])((long)pauVar71[3] + 1);
  if (bVar82) {
    uStack_d38 = *(undefined1 (**) [16])pauVar71[4];
  }
  pauStack_d30 = (undefined1 (*) [16])(ulong)((byte)pauVar71[3][0] >> 1);
  if (bVar82) {
    pauStack_d30 = *(undefined1 (**) [16])((long)pauVar71[3] + 8);
  }
  pauStack_d28 = (undefined1 (*) [16])&UNK_011a79c8;
  pauStack_d20 = (undefined1 (*) [16])0x21;
  func_0x049151c0(&uStack_8c8,&uStack_d38,2,0x2f);
  if (0xfffffffffffffff7 < uStack_4c8) goto LAB_09b0511b;
  if (uStack_4c8 < 0x17) {
    uStack_438 = CONCAT71(uStack_438._1_7_,(char)uStack_4c8 * '\x02');
    lVar57 = (long)&uStack_438 + 1;
    if (uStack_4c8 == 0) goto LAB_09b01d11;
  }
  else {
    uVar65 = 0x1a;
    if ((uStack_4c8 | 7) != 0x17) {
      uVar65 = (uStack_4c8 | 7) + 1;
    }
    lVar57 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar65);
    if (lVar57 == 0) {
      func_0x0eec74c0(uVar65,0);
    }
    uStack_438 = uVar65 | 1;
    uStack_430 = uStack_4c8;
    lStack_428 = lVar57;
  }
  func_0x0eee2f00(lVar57,&uStack_8c8,uStack_4c8);
LAB_09b01d11:
  *(undefined1 *)(lVar57 + uStack_4c8) = 0;
  func_0x09afaf30(&pauStack_12d8,&uStack_438);
  if ((uStack_438 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_428,uStack_438 & 0xfffffffffffffffe);
  }
  auVar74 = auStack_1148;
  if (auStack_1148 != (undefined1  [8])0x0) {
    if (auStack_1148 != (undefined1  [8])pauStack_1140) {
      plVar70 = (long *)((long)pauStack_1140 + -0x18);
      do {
        if (*plVar70 != 0) {
          func_0x0652e590(plVar70);
          thunk_FUN_0ee326a0(*plVar70,plVar70[2] - *plVar70);
        }
        if ((*(byte *)(plVar70 + -4) & 1) != 0) {
          thunk_FUN_0ee326a0(plVar70[-2],plVar70[-4] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(plVar70 + -10) & 1) != 0) {
          thunk_FUN_0ee326a0(plVar70[-8],plVar70[-10] & 0xfffffffffffffffe);
        }
        plVar81 = plVar70 + -10;
        plVar70 = plVar70 + -0xd;
      } while ((undefined1  [8])plVar81 != auVar74);
    }
    pauStack_1140 = (undefined1 (*) [16])auVar74;
    thunk_FUN_0ee326a0(auStack_1148,(long)puStack_1138 - (long)auStack_1148);
  }
  FUN_04863610(&pauStack_1488);
  FUN_04863610(&pauStack_12d8);
  uStack_888 = 0;
  uStack_868 = 0;
  uStack_866 = 0;
  uStack_860 = 0;
  uStack_85e = 0;
  uStack_878 = 0;
  uStack_870 = 0;
  uStack_86e = 0;
  uStack_898 = 0;
  uStack_890 = 0;
  puStack_8a8 = (undefined *)0x0;
  lStack_8a0 = 0;
  pauStack_8b8 = (undefined1 (*) [16])0x0;
  puStack_8b0 = (undefined *)0x0;
  uStack_8c8 = (undefined1 (*) [16])0x0;
  pauStack_8c0 = (undefined1 (*) [16])0x0;
  lStack_880 = 0x3f600000;
  func_0x048af640(&puStack_8b0,8);
  uStack_868 = 0;
  uStack_866 = 0;
  uStack_860 = 0;
  uStack_878 = 0;
  uStack_870 = 0;
  uStack_86e = 0;
  uStack_8c8 = (undefined1 (*) [16])&UNK_0f534768;
  pauVar58 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (pauVar58 == (undefined1 (*) [16])0x0) {
LAB_09b050ac:
    func_0x0eec74c0(0x20,0);
  }
  *(undefined1 (***) [16])((long)*pauVar58 + 8) = (undefined1 (**) [16])0x0;
  *(undefined1 (***) [16])pauVar58[1] = (undefined1 (**) [16])0x0;
  *(undefined **)*pauVar58 = &UNK_0ef44a60;
  *(undefined1 *)((long)pauVar58[1] + 8) = 1;
  uStack_8c8 = (undefined1 (*) [16])&UNK_0ef471f0;
  pauStack_8c0 = (undefined1 (*) [16])((long)pauVar58[1] + 8);
  pauStack_8b8 = pauVar58;
  func_0x0d88f370(&uStack_8c8);
  func_0x09db20a0(&uStack_8c8);
  func_0x0c1a3000(&uStack_8c8);
  func_0x0c1a3150(&uStack_8c8);
  func_0x0c1a32a0(&uStack_8c8);
  func_0x0c4a0eb0(&uStack_8c8);
  if (((ulong)*(undefined1 (**) [16])((long)pauVar71[4] + 8) & 1) == 0) {
    pauStack_12c8 = *(undefined1 (**) [16])((long)pauVar71[5] + 8);
    pauStack_12d8 = *(undefined1 (**) [16])((long)pauVar71[4] + 8);
    pauStack_12d0 = *(undefined1 (**) [16])pauVar71[5];
  }
  else {
    FUN_0412e5e0(&pauStack_12d8,*(undefined1 (**) [16])((long)pauVar71[5] + 8),
                 *(undefined1 (**) [16])pauVar71[5]);
  }
  uVar60 = _uStack_d18;
  pauStack_d30 = pauStack_12d8;
  pauStack_d28 = pauStack_12d0;
  pauStack_d20 = pauStack_12c8;
  pauStack_12d8 = (undefined1 (*) [16])0x0;
  pauStack_12d0 = (undefined1 (*) [16])0x0;
  pauStack_12c8 = (undefined1 (*) [16])0x0;
  _uStack_d18 = CONCAT62(stack0xfffffffffffff2ea,1);
  uVar48 = _uStack_d18;
  uStack_d13 = SUB83(uVar60,5);
  uStack_d18 = (uint5)(uint)uVar48;
  uStack_d10 = uStack_d10 & 0xffffff00;
  uStack_d0c = 0x10f;
  uStack_d0a = 1;
  pauStack_d08 = (undefined1 (*) [16])0x0;
  pauStack_d00 = (undefined1 (*) [16])0x0;
  pauStack_cf8 = (undefined1 (*) [16])0x0;
  uStack_438 = 0;
  uStack_430 = 0;
  lStack_428 = 0;
  pauStack_1140 = (undefined1 (*) [16])((long)&uStack_438 + 1);
  auStack_1148 = (undefined1  [8])0x10034001a0001;
  puStack_1138 = (undefined8 *)0x0;
  puStack_1130 = (undefined8 *)&UNK_01254d89;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uStack_1120;
  _auStack_1128 = auVar35 << 0x40;
  uStack_d38 = (undefined1 (*) [16])&uStack_8c8;
  func_0x0ee382a0(&pauStack_1488,auStack_1148);
  if ((uStack_438 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_428,uStack_438 & 0xfffffffffffffffe);
  }
  if (((ulong)pauStack_d08 & 1) != 0) {
    thunk_FUN_0ee326a0(pauStack_cf8,(ulong)pauStack_d08 & 0xfffffffffffffffe);
  }
  pauStack_cf8 = pauStack_1478;
  pauStack_d08 = pauStack_1488;
  pauStack_d00 = pauStack_1480;
  pauStack_1488 = (undefined1 (*) [16])((ulong)pauStack_1488 & 0xffffffffffff0000);
  auStack_1148 = (undefined1  [8])&UNK_0f1d42e0;
  auStack_1128 = (undefined1  [8])auStack_1148;
  func_0x0d88f6f0(&uStack_d38,auStack_1148);
  if (auStack_1128 == (undefined1  [8])auStack_1148) {
    (**(code **)(*(long *)auStack_1128 + 0x20))();
  }
  else if (auStack_1128 != (undefined1  [8])0x0) {
    (**(code **)(*(long *)auStack_1128 + 0x28))();
  }
  if (((ulong)pauStack_1488 & 1) != 0) {
    thunk_FUN_0ee326a0(pauStack_1478,(ulong)pauStack_1488 & 0xfffffffffffffffe);
  }
  if (((ulong)pauStack_d08 & 1) != 0) {
    thunk_FUN_0ee326a0(pauStack_cf8,(ulong)pauStack_d08 & 0xfffffffffffffffe);
  }
  if (((ulong)pauStack_d30 & 1) != 0) {
    thunk_FUN_0ee326a0(pauStack_d20,(ulong)pauStack_d30 & 0xfffffffffffffffe);
  }
  if (((ulong)pauStack_12d8 & 1) != 0) {
    thunk_FUN_0ee326a0(pauStack_12c8,(ulong)pauStack_12d8 & 0xfffffffffffffffe);
  }
  pauVar58 = pauStack_8b8;
  uStack_8c8 = (undefined1 (*) [16])&UNK_0f534768;
  if (pauStack_8b8 == (undefined1 (*) [16])0x0) {
    (*pauStack_8c0)[0] = 0;
  }
  else {
    (*pauStack_8c0)[0] = 0;
    LOCK();
    pppauVar1 = (undefined1 (***) [16])((long)*pauVar58 + 8);
    ppauVar72 = *pppauVar1;
    *pppauVar1 = (undefined1 (**) [16])((long)*pppauVar1 + -1);
    UNLOCK();
    if (ppauVar72 == (undefined1 (**) [16])0x0) {
      (*(code *)(*(undefined1 (***) [16])*pauVar58)[2])(pauVar58);
      func_0x0412c2d0(pauVar58);
    }
  }
  uVar65 = uStack_878;
  if (uStack_878 != 0) {
    for (uVar80 = CONCAT62(uStack_86e,uStack_870); uVar65 != uVar80; uVar80 = uVar80 - 0x38) {
      if ((*(byte *)(uVar80 - 0x38) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(uVar80 - 0x28),
                           *(ulong *)(uVar80 - 0x38) & 0xfffffffffffffffe);
      }
    }
    uStack_870 = (undefined2)uVar65;
    uStack_86e = (undefined6)(uVar65 >> 0x10);
    thunk_FUN_0ee326a0(uStack_878,CONCAT62(uStack_866,uStack_868) - uStack_878);
  }
  uStack_d38 = (undefined1 (*) [16])&uStack_898;
  func_0x048b0f50(&uStack_d38);
  if (puStack_8b0 != (undefined *)0x0) {
    puStack_8a8 = puStack_8b0;
    thunk_FUN_0ee326a0(puStack_8b0,lStack_8a0 - (long)puStack_8b0);
  }
  uStack_1448 = 0;
  uStack_1428 = 0;
  uStack_1426 = 0;
  uStack_1420 = 0;
  uStack_141e = 0;
  pbStack_1438 = (byte *)0x0;
  uStack_1430 = 0;
  uStack_142e = 0;
  ppauStack_1458 = (undefined1 (**) [16])0x0;
  uStack_1450 = 0;
  pauStack_1468 = (undefined1 (*) [16])0x0;
  lStack_1460 = 0;
  pauStack_1478 = (undefined1 (*) [16])0x0;
  pauStack_1470 = (undefined1 (*) [16])0x0;
  pauStack_1488 = (undefined1 (*) [16])0x0;
  pauStack_1480 = (undefined1 (*) [16])0x0;
  uStack_1440 = 0x3f600000;
  func_0x048af640(&pauStack_1470,8);
  uStack_1428 = 0;
  uStack_1426 = 0;
  uStack_1420 = 0;
  pbStack_1438 = (byte *)0x0;
  uStack_1430 = 0;
  uStack_142e = 0;
  pauStack_1488 = (undefined1 (*) [16])&UNK_0f534768;
  pauVar58 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (pauVar58 == (undefined1 (*) [16])0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *(undefined8 *)(*pauVar58 + 8) = 0;
  *(undefined8 *)pauVar58[1] = 0;
  *(undefined **)*pauVar58 = &UNK_0ef44a60;
  pauStack_1480 = (undefined1 (*) [16])(pauVar58[1] + 8);
  pauVar58[1][8] = 1;
  pauStack_1488 = (undefined1 (*) [16])&UNK_0ef471f0;
  pauStack_1478 = pauVar58;
  func_0x07be2750(&pauStack_1488);
  uStack_8c8 = (undefined1 (*) [16])&UNK_0120c310;
  pauStack_8c0 = (undefined1 (*) [16])0xf;
  uStack_d38 = (undefined1 (*) [16])CONCAT71(uStack_d38._1_7_,1);
  pbVar34 = (byte *)CONCAT62(uStack_142e,uStack_1430);
  pbVar62 = pbStack_1438;
  if (pbStack_1438 == pbVar34) {
LAB_09b02498:
    if (pbVar62 != pbVar34) goto LAB_09b025b6;
  }
  else {
    do {
      bVar2 = *pbVar62;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0xf) goto LAB_09b0248c;
      }
      else if (*(long *)(pbVar62 + 8) == 0xf) {
LAB_09b0248c:
        if ((bVar2 & 1) == 0) {
          pbVar76 = pbVar62 + 1;
        }
        else {
          pbVar76 = *(byte **)(pbVar62 + 0x10);
        }
        if (*(long *)(pbVar76 + 7) == 0x5d74656b6361703a && *(long *)pbVar76 == 0x3a6c61657265635b)
        goto LAB_09b02498;
      }
      pbVar62 = pbVar62 + 0x38;
    } while (pbVar62 != pbVar34);
  }
  if (DAT_0f551de0 == '\0') goto LAB_09b05125;
  do {
    pauVar66 = pauStack_8c0;
    pauVar58 = uStack_8c8;
    puVar63 = (ulong *)CONCAT62(uStack_142e,uStack_1430);
    if (puVar63 < (ulong *)CONCAT62(uStack_1426,uStack_1428)) {
      if ((undefined1 (*) [16])0xfffffffffffffff7 < pauStack_8c0) {
        uVar60 = func_0x04882e30();
        func_0x041084d6(&DAT_0f7b8fb8);
        func_0x048f9be0(&plStack_1308);
        func_0x0ee38090(&ppauStack_13f8);
        if ((uStack_14a0 & 1) != 0) goto LAB_09b0592b;
        if ((bStack_11d0 & 1) != 0) goto LAB_09b05ac7;
        do {
          do {
            if (((ulong)uStack_1240 & 1) != 0) {
              thunk_FUN_0ee326a0(lStack_1230,(ulong)uStack_1240 & 0xfffffffffffffffe);
            }
            func_0x048e65b0(&uStack_d38);
            func_0x04904f60(&pauStack_12d8);
            func_0x09b00a70(&uStack_8c8);
            if ((uStack_1418 & 1) != 0) {
              thunk_FUN_0ee326a0(lStack_1408,uStack_1418 & 0xfffffffffffffffe);
            }
            lVar57 = 0x20;
            if ((plStack_1198 == &lStack_11b8) || (lVar57 = 0x28, plStack_1198 != (long *)0x0)) {
              (**(code **)(*plStack_1198 + lVar57))();
            }
            func_0x048c11c0(&pauStack_14e8);
            func_0x09b00b60(&puStack_14b8);
            if (((ulong)auStack_12f0 & 1) != 0) {
              thunk_FUN_0ee326a0(ppauStack_12e0,(ulong)auStack_12f0 & 0xfffffffffffffffe);
            }
            func_0x04904f60(&pauStack_1488);
            func_0x0eee2d70(uVar60);
LAB_09b0592b:
            thunk_FUN_0ee326a0(pauStack_1490,uStack_14a0 & 0xfffffffffffffffe);
          } while ((bStack_11d0 & 1) == 0);
LAB_09b05ac7:
          thunk_FUN_0ee326a0(puStack_11c0,CONCAT71(uStack_11cf,bStack_11d0) & 0xfffffffffffffffe);
        } while( true );
      }
      if (pauStack_8c0 < (undefined1 (*) [16])0x17) {
        *(char *)puVar63 = (char)pauStack_8c0 * '\x02';
        pcVar64 = (char *)((long)puVar63 + 1);
        if (pauStack_8c0 != (undefined1 (*) [16])0x0) goto LAB_09b02576;
      }
      else {
        uVar65 = 0x1a;
        if (((ulong)pauStack_8c0 | 7) != 0x17) {
          uVar65 = ((ulong)pauStack_8c0 | 7) + 1;
        }
        pcVar64 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar65);
        if (pcVar64 == (char *)0x0) {
          func_0x0eec74c0(uVar65,0);
        }
        puVar63[2] = (ulong)pcVar64;
        *puVar63 = uVar65 | 1;
        puVar63[1] = (ulong)pauVar66;
        pauVar71 = pauStack_12f8;
LAB_09b02576:
        func_0x0eee2ee0(pcVar64,pauVar58,pauVar66);
      }
      pcVar64[(long)pauVar66] = '\0';
      puVar63[5] = _DAT_0f551dd8;
      uVar65 = uRam000000000f551dd0;
      puVar63[3] = _DAT_0f551dc8;
      puVar63[4] = uVar65;
      *(byte *)(puVar63 + 6) = (byte)uStack_d38;
      puVar63 = puVar63 + 7;
    }
    else {
      puVar63 = (ulong *)func_0x09b36100(&pbStack_1438,&uStack_8c8,&DAT_0f551dc8,&uStack_d38);
    }
    uStack_1430 = SUB82(puVar63,0);
    uStack_142e = (undefined6)((ulong)puVar63 >> 0x10);
LAB_09b025b6:
    func_0x09b00800(&pauStack_1488,&UNK_012414a0,0x17,1);
    bVar82 = (*(byte *)((long)pauVar71[4] + 8) & 1) != 0;
    uStack_8c8 = (undefined1 (*) [16])((long)pauVar71[4] + 9);
    if (bVar82) {
      uStack_8c8 = *(undefined1 (**) [16])((long)pauVar71[5] + 8);
    }
    pauStack_8c0 = (undefined1 (*) [16])(ulong)(*(byte *)((long)pauVar71[4] + 8) >> 1);
    if (bVar82) {
      pauStack_8c0 = *(undefined1 (**) [16])pauVar71[5];
    }
    pauStack_8b8 = (undefined1 (*) [16])&UNK_011e9a72;
    puStack_8b0 = (undefined *)0x8;
    func_0x049151c0(&uStack_438,&uStack_8c8,2,0x2f);
    pauVar58 = pauStack_38;
    if (pauStack_38 < (undefined1 (*) [16])0xfffffffffffffff8) {
      ppauVar72 = (undefined1 (**) [16])(auStack_12f0 + 1);
      if (pauStack_38 < (undefined1 (*) [16])0x17) {
        auStack_12f0[0] = (char)pauStack_38 * '\x02';
        if (pauStack_38 != (undefined1 (*) [16])0x0) goto LAB_09b026bd;
      }
      else {
        uVar65 = 0x1a;
        if (((ulong)pauStack_38 | 7) != 0x17) {
          uVar65 = ((ulong)pauStack_38 | 7) + 1;
        }
        ppauVar72 = (undefined1 (**) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar65);
        if (ppauVar72 == (undefined1 (**) [16])0x0) {
          func_0x0eec74c0(uVar65,0);
        }
        auStack_12f0 = (undefined1  [8])(uVar65 | 1);
        pauStack_12e8 = pauVar58;
        ppauStack_12e0 = ppauVar72;
LAB_09b026bd:
        func_0x0eee2f00(ppauVar72,&uStack_438,pauVar58);
      }
      *(undefined1 *)((long)ppauVar72 + (long)pauVar58) = 0;
      func_0x0ed8bb10(&puStack_14b8,&pauStack_1488,1,0x1010f00000000);
      pauStack_14d8 = (undefined1 (*) [16])0x0;
      uStack_14d0 = 0;
      pauStack_14e8 = (undefined1 (*) [16])0x0;
      pauStack_14e0 = (undefined1 (*) [16])0x0;
      fStack_14c8 = 1.0;
      fVar83 = (float)(ulong)(((long)puStack_14b0 - (long)puStack_14b8 >> 5) * -0x70a3d70a3d70a3d7);
      uVar65 = (ulong)fVar83;
      pauVar58 = (undefined1 (*) [16])
                 ((long)(fVar83 - _DAT_01198778) & (long)uVar65 >> 0x3f | uVar65);
      if (pauVar58 == (undefined1 (*) [16])0x1) {
        pauVar58 = (undefined1 (*) [16])0x2;
LAB_09b0277c:
        func_0x049164c0(&pauStack_14e8,pauVar58);
        pauVar66 = pauStack_14e8;
        pauVar71 = pauStack_14e0;
        pauVar67 = pauStack_14d8;
        uVar65 = uStack_14d0;
        fVar83 = fStack_14c8;
        puVar45 = puStack_14b8;
        puVar46 = puStack_14b0;
      }
      else {
        if (((ulong)pauVar58 & (ulong)((long)pauVar58[-1] + 0xf)) != 0) {
          pauVar58 = (undefined1 (*) [16])func_0x0412c3f0(pauVar58);
          bVar82 = pauVar58 < pauStack_14e0;
          if (pauVar58 <= pauStack_14e0) goto LAB_09b03715;
          goto LAB_09b0277c;
        }
        bVar82 = false;
        if (pauVar58 != (undefined1 (*) [16])0x0) goto LAB_09b0277c;
LAB_09b03715:
        pauVar68 = pauStack_14e0;
        pauVar66 = pauStack_14e8;
        pauVar71 = pauStack_14e0;
        pauVar67 = pauStack_14d8;
        uVar65 = uStack_14d0;
        fVar83 = fStack_14c8;
        puVar45 = puStack_14b8;
        puVar46 = puStack_14b0;
        if (bVar82) {
          fVar83 = (float)ceilf((float)uStack_14d0 / fStack_14c8);
          pauVar71 = (undefined1 (*) [16])
                     ((long)(fVar83 - _DAT_01198778) & (long)fVar83 >> 0x3f | (long)fVar83);
          if ((pauVar68 < (undefined1 (*) [16])0x3) ||
             (uVar65 = (long)pauVar68 - ((ulong)pauVar68 >> 1 & 0x5555555555555555),
             uVar65 = (uVar65 >> 2 & 0x3333333333333333) + (uVar65 & 0x3333333333333333),
             1 < (byte)(((uVar65 >> 4) + uVar65 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            pauVar71 = (undefined1 (*) [16])func_0x0412c3f0(pauVar71);
          }
          else if ((undefined1 (*) [16])0x1 < pauVar71) {
            puVar69 = (undefined *)((long)pauVar71[-1] + 0xf);
            lVar57 = 0x3f;
            if (puVar69 != (undefined *)0x0) {
              for (; (ulong)puVar69 >> lVar57 == 0; lVar57 = lVar57 + -1) {
              }
            }
            pauVar71 = (undefined1 (*) [16])(1L << (-((byte)lVar57 ^ 0x3f) & 0x3f));
          }
          if (pauVar58 <= pauVar71) {
            pauVar58 = pauVar71;
          }
          pauVar66 = pauStack_14e8;
          pauVar71 = pauStack_14e0;
          pauVar67 = pauStack_14d8;
          uVar65 = uStack_14d0;
          fVar83 = fStack_14c8;
          puVar45 = puStack_14b8;
          puVar46 = puStack_14b0;
          if (pauVar58 < pauVar68) goto LAB_09b0277c;
        }
      }
      for (; puVar49 = puStack_14b0, pauStack_14d8 = pauVar67, uStack_14d0 = uVar65,
          fStack_14c8 = fVar83, puVar45 != puStack_14b0; puVar45 = puVar45 + 200) {
        auStack_1148._0_4_ = *puVar45;
        pauStack_14e8 = pauVar66;
        pauStack_14e0 = pauVar71;
        puStack_14b0 = puVar46;
        FUN_0470d9a0(&uStack_8c8,&UNK_012063a8,2,2,auStack_1148);
        if ((char)puVar45[10] == '\x01') {
          if ((puVar45[4] & 1) == 0) {
            pauStack_d28 = *(undefined1 (**) [16])(puVar45 + 8);
            uStack_d38 = *(undefined1 (**) [16])(puVar45 + 4);
            pauStack_d30 = *(undefined1 (**) [16])(puVar45 + 6);
          }
          else {
            FUN_0412e5e0(&uStack_d38,*(undefined8 *)(puVar45 + 8),*(undefined8 *)(puVar45 + 6));
          }
        }
        else {
          pauStack_d28 = pauStack_8b8;
          uStack_d38 = uStack_8c8;
          pauStack_d30 = pauStack_8c0;
          uStack_8c8 = (undefined1 (*) [16])0x0;
          pauStack_8c0 = (undefined1 (*) [16])0x0;
          pauStack_8b8 = (undefined1 (*) [16])0x0;
        }
        if (((ulong)uStack_8c8 & 1) != 0) {
          thunk_FUN_0ee326a0(pauStack_8b8,(ulong)uStack_8c8 & 0xfffffffffffffffe);
        }
        pauVar71 = pauStack_d30;
        if ((undefined1 (*) [16])0x7e < pauStack_d30) {
          pauVar71 = (undefined1 (*) [16])0x7f;
        }
        if (((ulong)uStack_d38 & 1) == 0) {
          pauVar71 = (undefined1 (*) [16])((ulong)uStack_d38 >> 1 & 0x7f);
          pauVar58 = (undefined1 (*) [16])((long)&uStack_d38 + 1);
          if ((undefined1 (*) [16])0x16 < pauVar71) goto LAB_09b0294c;
LAB_09b029c3:
          uStack_8c8 = (undefined1 (*) [16])CONCAT71(uStack_8c8._1_7_,(char)pauVar71 * '\x02');
          pauVar66 = (undefined1 (*) [16])((long)&uStack_8c8 + 1);
          if (pauVar71 != (undefined1 (*) [16])0x0) goto LAB_09b029da;
        }
        else {
          pauVar58 = pauStack_d28;
          if (pauVar71 < (undefined1 (*) [16])0x17) goto LAB_09b029c3;
LAB_09b0294c:
          uVar65 = ((ulong)pauVar71 | 7) + 1;
          if (((ulong)pauVar71 | 7) == 0x17) {
            uVar65 = 0x1a;
          }
          pauVar66 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar65);
          if (pauVar66 == (undefined1 (*) [16])0x0) {
            func_0x0eec74c0(uVar65,0);
          }
          uStack_8c8 = (undefined1 (*) [16])(uVar65 | 1);
          pauStack_8c0 = pauVar71;
          pauStack_8b8 = pauVar66;
LAB_09b029da:
          func_0x0eee2ee0(pauVar66,pauVar58,pauVar71);
        }
        *(undefined1 *)((long)*pauVar71 + (long)*pauVar66) = 0;
        if (((ulong)uStack_d38 & 1) != 0) {
          thunk_FUN_0ee326a0(pauStack_d28,(ulong)uStack_d38 & 0xfffffffffffffffe);
        }
        pauStack_d28 = pauStack_8b8;
        uStack_d38 = uStack_8c8;
        pauVar58 = uStack_d38;
        pauStack_d30 = pauStack_8c0;
        uStack_d38._0_1_ = (byte)uStack_8c8;
        pauVar68 = (undefined1 (*) [16])(ulong)((byte)uStack_d38 >> 1);
        pauVar67 = pauStack_8c0;
        pauVar71 = pauStack_8b8;
        if (((ulong)uStack_8c8 & 1) == 0) {
          pauVar67 = pauVar68;
          pauVar71 = (undefined1 (*) [16])((long)&uStack_d38 + 1);
        }
        if (pauVar67 != (undefined1 (*) [16])0x0) {
          pauVar68 = pauVar71;
          if (pauVar67 < (undefined1 (*) [16])0x8) {
LAB_09b03660:
            do {
              if (((ulong)(byte)(*pauVar68)[0] < 0x3f) &&
                 ((0x5400000100000000U >> ((ulong)(byte)(*pauVar68)[0] & 0x3f) & 1) != 0)) {
                (*pauVar68)[0] = 0x5f;
              }
              pauVar68 = (undefined1 (*) [16])((long)*pauVar68 + 1);
            } while (pauVar68 != (undefined1 (*) [16])((long)*pauVar67 + (long)*pauVar71));
          }
          else if (pauVar67 < (undefined1 (*) [16])0x20) {
            pauVar73 = (undefined1 (*) [16])0x0;
LAB_09b02f76:
            pauVar77 = (undefined1 (*) [16])((ulong)pauVar67 & 0xfffffffffffffff8);
            pauVar68 = (undefined1 (*) [16])((long)*pauVar77 + (long)*pauVar71);
            do {
              uVar65 = *(ulong *)((long)*pauVar73 + (long)*pauVar71);
              auVar85._8_8_ = 0;
              auVar85._0_8_ = uVar65;
              auVar96[0] = -((char)uVar65 == DAT_014eaaa0);
              cVar97 = (char)(uVar65 >> 8);
              auVar96[1] = -(cVar97 == DAT_014eaaa0._1_1_);
              cVar98 = (char)(uVar65 >> 0x10);
              auVar96[2] = -(cVar98 == DAT_014eaaa0._2_1_);
              cVar99 = (char)(uVar65 >> 0x18);
              auVar96[3] = -(cVar99 == DAT_014eaaa0._3_1_);
              cVar100 = (char)(uVar65 >> 0x20);
              auVar96[4] = -(cVar100 == DAT_014eaaa0._4_1_);
              cVar101 = (char)(uVar65 >> 0x28);
              auVar96[5] = -(cVar101 == DAT_014eaaa0._5_1_);
              cVar102 = (char)(uVar65 >> 0x30);
              cVar51 = (char)(uVar65 >> 0x38);
              auVar96[6] = -(cVar102 == DAT_014eaaa0._6_1_);
              auVar96[7] = -(cVar51 == DAT_014eaaa0._7_1_);
              auVar96[8] = -(DAT_014eaaa0._8_1_ == '\0');
              auVar96[9] = -(DAT_014eaaa0._9_1_ == '\0');
              auVar96[10] = -(DAT_014eaaa0._10_1_ == '\0');
              auVar96[0xb] = -(DAT_014eaaa0._11_1_ == '\0');
              auVar96[0xc] = -(DAT_014eaaa0._12_1_ == '\0');
              auVar96[0xd] = -(DAT_014eaaa0._13_1_ == '\0');
              auVar96[0xe] = -(DAT_014eaaa0._14_1_ == '\0');
              auVar96[0xf] = -(DAT_014eaaa0._15_1_ == '\0');
              auVar105[0] = -((char)uVar65 == DAT_014ea360);
              auVar105[1] = -(cVar97 == DAT_014ea360._1_1_);
              auVar105[2] = -(cVar98 == DAT_014ea360._2_1_);
              auVar105[3] = -(cVar99 == DAT_014ea360._3_1_);
              auVar105[4] = -(cVar100 == DAT_014ea360._4_1_);
              auVar105[5] = -(cVar101 == DAT_014ea360._5_1_);
              auVar105[6] = -(cVar102 == DAT_014ea360._6_1_);
              auVar105[7] = -(cVar51 == DAT_014ea360._7_1_);
              auVar105[8] = -(DAT_014ea360._8_1_ == '\0');
              auVar105[9] = -(DAT_014ea360._9_1_ == '\0');
              auVar105[10] = -(DAT_014ea360._10_1_ == '\0');
              auVar105[0xb] = -(DAT_014ea360._11_1_ == '\0');
              auVar105[0xc] = -(DAT_014ea360._12_1_ == '\0');
              auVar105[0xd] = -(DAT_014ea360._13_1_ == '\0');
              auVar105[0xe] = -(DAT_014ea360._14_1_ == '\0');
              auVar105[0xf] = -(DAT_014ea360._15_1_ == '\0');
              in_XMM2 = auVar105 | auVar96;
              auVar85 = auVar85 & _DAT_014e1e40;
              auVar86[0] = -(auVar85[0] == DAT_014e9820);
              auVar86[1] = -(auVar85[1] == DAT_014e9820._1_1_);
              auVar86[2] = -(auVar85[2] == DAT_014e9820._2_1_);
              auVar86[3] = -(auVar85[3] == DAT_014e9820._3_1_);
              auVar86[4] = -(auVar85[4] == DAT_014e9820._4_1_);
              auVar86[5] = -(auVar85[5] == DAT_014e9820._5_1_);
              auVar86[6] = -(auVar85[6] == DAT_014e9820._6_1_);
              auVar86[7] = -(auVar85[7] == DAT_014e9820._7_1_);
              auVar86[8] = -(auVar85[8] == DAT_014e9820._8_1_);
              auVar86[9] = -(auVar85[9] == DAT_014e9820._9_1_);
              auVar86[10] = -(auVar85[10] == DAT_014e9820._10_1_);
              auVar86[0xb] = -(auVar85[0xb] == DAT_014e9820._11_1_);
              auVar86[0xc] = -(auVar85[0xc] == DAT_014e9820._12_1_);
              auVar86[0xd] = -(auVar85[0xd] == DAT_014e9820._13_1_);
              auVar86[0xe] = -(auVar85[0xe] == DAT_014e9820._14_1_);
              auVar86[0xf] = -(auVar85[0xf] == DAT_014e9820._15_1_);
              auVar86 = auVar86 | in_XMM2;
              auStack_8f8 = auVar86;
              auVar35 = auStack_8f8;
              auStack_8f8[0] = auVar86[0];
              bVar2 = auStack_8f8[0] & 1;
              auStack_8f8 = auVar35;
              if (bVar2 != 0) {
                *(undefined1 *)((long)*pauVar73 + (long)*pauVar71) = 0x5f;
              }
              auVar93._0_14_ = auVar86._0_14_;
              auVar93[0xe] = auVar86[7];
              auVar93[0xf] = auVar86[7];
              auVar92._14_2_ = auVar93._14_2_;
              auVar92._0_13_ = auVar86._0_13_;
              auVar92[0xd] = auVar86[6];
              auVar91._13_3_ = auVar92._13_3_;
              auVar91._0_12_ = auVar86._0_12_;
              auVar91[0xc] = auVar86[6];
              auVar90._12_4_ = auVar91._12_4_;
              auVar90._0_11_ = auVar86._0_11_;
              auVar90[0xb] = auVar86[5];
              auVar89._11_5_ = auVar90._11_5_;
              auVar89._0_10_ = auVar86._0_10_;
              auVar89[10] = auVar86[5];
              auVar88._10_6_ = auVar89._10_6_;
              auVar88._0_9_ = auVar86._0_9_;
              auVar88[9] = auVar86[4];
              auVar87._9_7_ = auVar88._9_7_;
              auVar87._0_8_ = auVar86._0_8_;
              auVar87[8] = auVar86[4];
              uVar65 = auVar87._8_8_;
              Var39 = CONCAT91(CONCAT81(uVar65,auVar86[3]),auVar86[3]);
              auVar38._10_6_ = 0;
              auVar38._0_10_ = Var39;
              auVar106._1_11_ = SUB1611(auVar38 << 0x30,5);
              auVar106[0] = auVar86[2];
              auVar37._12_4_ = 0;
              auVar37._0_12_ = auVar106;
              auVar36._1_13_ = SUB1613(auVar37 << 0x20,3);
              auVar36[0] = auVar86[1];
              if ((auVar36._0_4_ & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 1))[(long)pauVar73] = 0x5f;
              }
              if ((auVar106._0_2_ & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 2))[(long)pauVar73] = 0x5f;
              }
              if (((ushort)Var39 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 3))[(long)pauVar73] = 0x5f;
              }
              if ((uVar65 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 4))[(long)pauVar73] = 0x5f;
              }
              if ((uVar65 & 0x10000) != 0) {
                ((undefined *)((long)*pauVar71 + 5))[(long)pauVar73] = 0x5f;
              }
              if ((uVar65 & 0x100000000) != 0) {
                ((undefined *)((long)*pauVar71 + 6))[(long)pauVar73] = 0x5f;
              }
              if ((uVar65 & 0x1000000000000) != 0) {
                ((undefined *)((long)*pauVar71 + 7))[(long)pauVar73] = 0x5f;
              }
              pauVar73 = (undefined1 (*) [16])((long)*pauVar73 + 8);
            } while (pauVar77 != pauVar73);
            if (pauVar67 != pauVar77) goto LAB_09b03660;
          }
          else {
            pauVar73 = (undefined1 (*) [16])((ulong)pauVar67 & 0xffffffffffffffe0);
            pauVar68 = (undefined1 (*) [16])0x0;
            do {
              pbVar34 = (byte *)((long)*pauVar68 + (long)*pauVar71);
              bVar2 = *pbVar34;
              bVar3 = pbVar34[1];
              bVar4 = pbVar34[2];
              bVar5 = pbVar34[3];
              bVar6 = pbVar34[4];
              bVar7 = pbVar34[5];
              bVar8 = pbVar34[6];
              bVar9 = pbVar34[7];
              bVar10 = pbVar34[8];
              bVar11 = pbVar34[9];
              bVar12 = pbVar34[10];
              bVar13 = pbVar34[0xb];
              bVar14 = pbVar34[0xc];
              bVar15 = pbVar34[0xd];
              bVar16 = pbVar34[0xe];
              bVar17 = pbVar34[0xf];
              pbVar34 = (byte *)((long)*pauVar68 + (long)pauVar71[1]);
              bVar18 = *pbVar34;
              bVar19 = pbVar34[1];
              bVar20 = pbVar34[2];
              bVar21 = pbVar34[3];
              bVar22 = pbVar34[4];
              bVar23 = pbVar34[5];
              bVar24 = pbVar34[6];
              bVar25 = pbVar34[7];
              bVar26 = pbVar34[8];
              bVar27 = pbVar34[9];
              bVar28 = pbVar34[10];
              bVar29 = pbVar34[0xb];
              bVar30 = pbVar34[0xc];
              bVar31 = pbVar34[0xd];
              bVar32 = pbVar34[0xe];
              bVar33 = pbVar34[0xf];
              auVar103[0] = -(bVar2 == DAT_014e3e40);
              auVar103[1] = -(bVar3 == UNK_014e3e41);
              auVar103[2] = -(bVar4 == UNK_014e3e42);
              auVar103[3] = -(bVar5 == UNK_014e3e43);
              auVar103[4] = -(bVar6 == UNK_014e3e44);
              auVar103[5] = -(bVar7 == UNK_014e3e45);
              auVar103[6] = -(bVar8 == UNK_014e3e46);
              auVar103[7] = -(bVar9 == UNK_014e3e47);
              auVar103[8] = -(bVar10 == UNK_014e3e48);
              auVar103[9] = -(bVar11 == UNK_014e3e49);
              auVar103[10] = -(bVar12 == UNK_014e3e4a);
              auVar103[0xb] = -(bVar13 == UNK_014e3e4b);
              auVar103[0xc] = -(bVar14 == UNK_014e3e4c);
              auVar103[0xd] = -(bVar15 == UNK_014e3e4d);
              auVar103[0xe] = -(bVar16 == UNK_014e3e4e);
              auVar103[0xf] = -(bVar17 == UNK_014e3e4f);
              auVar107[0] = -(bVar2 == DAT_014ead50);
              auVar107[1] = -(bVar3 == UNK_014ead51);
              auVar107[2] = -(bVar4 == UNK_014ead52);
              auVar107[3] = -(bVar5 == UNK_014ead53);
              auVar107[4] = -(bVar6 == UNK_014ead54);
              auVar107[5] = -(bVar7 == UNK_014ead55);
              auVar107[6] = -(bVar8 == UNK_014ead56);
              auVar107[7] = -(bVar9 == UNK_014ead57);
              auVar107[8] = -(bVar10 == UNK_014ead58);
              auVar107[9] = -(bVar11 == UNK_014ead59);
              auVar107[10] = -(bVar12 == UNK_014ead5a);
              auVar107[0xb] = -(bVar13 == UNK_014ead5b);
              auVar107[0xc] = -(bVar14 == UNK_014ead5c);
              auVar107[0xd] = -(bVar15 == UNK_014ead5d);
              auVar107[0xe] = -(bVar16 == UNK_014ead5e);
              auVar107[0xf] = -(bVar17 == UNK_014ead5f);
              auVar94[0] = -((bVar2 & DAT_014e2940) == DAT_014e3da0);
              auVar94[1] = -((bVar3 & UNK_014e2941) == UNK_014e3da1);
              auVar94[2] = -((bVar4 & UNK_014e2942) == UNK_014e3da2);
              auVar94[3] = -((bVar5 & UNK_014e2943) == UNK_014e3da3);
              auVar94[4] = -((bVar6 & UNK_014e2944) == UNK_014e3da4);
              auVar94[5] = -((bVar7 & UNK_014e2945) == UNK_014e3da5);
              auVar94[6] = -((bVar8 & UNK_014e2946) == UNK_014e3da6);
              auVar94[7] = -((bVar9 & UNK_014e2947) == UNK_014e3da7);
              auVar94[8] = -((bVar10 & UNK_014e2948) == UNK_014e3da8);
              auVar94[9] = -((bVar11 & UNK_014e2949) == UNK_014e3da9);
              auVar94[10] = -((bVar12 & UNK_014e294a) == UNK_014e3daa);
              auVar94[0xb] = -((bVar13 & UNK_014e294b) == UNK_014e3dab);
              auVar94[0xc] = -((bVar14 & UNK_014e294c) == UNK_014e3dac);
              auVar94[0xd] = -((bVar15 & UNK_014e294d) == UNK_014e3dad);
              auVar94[0xe] = -((bVar16 & UNK_014e294e) == UNK_014e3dae);
              auVar94[0xf] = -((bVar17 & UNK_014e294f) == UNK_014e3daf);
              auVar94 = auVar94 | auVar107 | auVar103;
              auStack_8e8 = auVar94;
              auVar35 = auStack_8e8;
              auStack_8e8[0] = auVar94[0];
              bVar2 = auStack_8e8[0] & 1;
              auStack_8e8 = auVar35;
              if (bVar2 != 0) {
                *(undefined1 *)((long)*pauVar68 + (long)*pauVar71) = 0x5f;
              }
              uVar75 = auVar94._0_4_;
              if ((uVar75 >> 8 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 1))[(long)pauVar68] = 0x5f;
              }
              if ((uVar75 >> 0x10 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 2))[(long)pauVar68] = 0x5f;
              }
              if ((uVar75 >> 0x18 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 3))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._4_2_ & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 4))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._4_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 5))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._6_2_ & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 6))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._6_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 7))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._8_2_ & 1) != 0) {
                *(undefined1 *)((long)((long)*pauVar71 + 8) + (long)pauVar68) = 0x5f;
              }
              if ((auVar94._8_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 9))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._10_2_ & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 10))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._10_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 0xb))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._12_2_ & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 0xc))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._12_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 0xd))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._14_2_ & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 0xe))[(long)pauVar68] = 0x5f;
              }
              if ((auVar94._14_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)*pauVar71 + 0xf))[(long)pauVar68] = 0x5f;
              }
              auVar95[0] = -(bVar18 == DAT_014e3e40);
              auVar95[1] = -(bVar19 == UNK_014e3e41);
              auVar95[2] = -(bVar20 == UNK_014e3e42);
              auVar95[3] = -(bVar21 == UNK_014e3e43);
              auVar95[4] = -(bVar22 == UNK_014e3e44);
              auVar95[5] = -(bVar23 == UNK_014e3e45);
              auVar95[6] = -(bVar24 == UNK_014e3e46);
              auVar95[7] = -(bVar25 == UNK_014e3e47);
              auVar95[8] = -(bVar26 == UNK_014e3e48);
              auVar95[9] = -(bVar27 == UNK_014e3e49);
              auVar95[10] = -(bVar28 == UNK_014e3e4a);
              auVar95[0xb] = -(bVar29 == UNK_014e3e4b);
              auVar95[0xc] = -(bVar30 == UNK_014e3e4c);
              auVar95[0xd] = -(bVar31 == UNK_014e3e4d);
              auVar95[0xe] = -(bVar32 == UNK_014e3e4e);
              auVar95[0xf] = -(bVar33 == UNK_014e3e4f);
              auVar104[0] = -(bVar18 == DAT_014ead50);
              auVar104[1] = -(bVar19 == UNK_014ead51);
              auVar104[2] = -(bVar20 == UNK_014ead52);
              auVar104[3] = -(bVar21 == UNK_014ead53);
              auVar104[4] = -(bVar22 == UNK_014ead54);
              auVar104[5] = -(bVar23 == UNK_014ead55);
              auVar104[6] = -(bVar24 == UNK_014ead56);
              auVar104[7] = -(bVar25 == UNK_014ead57);
              auVar104[8] = -(bVar26 == UNK_014ead58);
              auVar104[9] = -(bVar27 == UNK_014ead59);
              auVar104[10] = -(bVar28 == UNK_014ead5a);
              auVar104[0xb] = -(bVar29 == UNK_014ead5b);
              auVar104[0xc] = -(bVar30 == UNK_014ead5c);
              auVar104[0xd] = -(bVar31 == UNK_014ead5d);
              auVar104[0xe] = -(bVar32 == UNK_014ead5e);
              auVar104[0xf] = -(bVar33 == UNK_014ead5f);
              in_XMM2 = auVar104 | auVar95;
              auVar84[0] = -((bVar18 & DAT_014e2940) == DAT_014e3da0);
              auVar84[1] = -((bVar19 & UNK_014e2941) == UNK_014e3da1);
              auVar84[2] = -((bVar20 & UNK_014e2942) == UNK_014e3da2);
              auVar84[3] = -((bVar21 & UNK_014e2943) == UNK_014e3da3);
              auVar84[4] = -((bVar22 & UNK_014e2944) == UNK_014e3da4);
              auVar84[5] = -((bVar23 & UNK_014e2945) == UNK_014e3da5);
              auVar84[6] = -((bVar24 & UNK_014e2946) == UNK_014e3da6);
              auVar84[7] = -((bVar25 & UNK_014e2947) == UNK_014e3da7);
              auVar84[8] = -((bVar26 & UNK_014e2948) == UNK_014e3da8);
              auVar84[9] = -((bVar27 & UNK_014e2949) == UNK_014e3da9);
              auVar84[10] = -((bVar28 & UNK_014e294a) == UNK_014e3daa);
              auVar84[0xb] = -((bVar29 & UNK_014e294b) == UNK_014e3dab);
              auVar84[0xc] = -((bVar30 & UNK_014e294c) == UNK_014e3dac);
              auVar84[0xd] = -((bVar31 & UNK_014e294d) == UNK_014e3dad);
              auVar84[0xe] = -((bVar32 & UNK_014e294e) == UNK_014e3dae);
              auVar84[0xf] = -((bVar33 & UNK_014e294f) == UNK_014e3daf);
              auVar84 = auVar84 | in_XMM2;
              uVar75 = auVar84._0_4_;
              if ((uVar75 & 1) != 0) {
                *(undefined1 *)((long)*pauVar68 + (long)pauVar71[1]) = 0x5f;
              }
              if ((uVar75 >> 8 & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 1))[(long)pauVar68] = 0x5f;
              }
              if ((uVar75 >> 0x10 & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 2))[(long)pauVar68] = 0x5f;
              }
              if ((uVar75 >> 0x18 & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 3))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._4_2_ & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 4))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._4_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 5))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._6_2_ & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 6))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._6_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 7))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._8_2_ & 1) != 0) {
                *(undefined1 *)((long)((long)pauVar71[1] + 8) + (long)pauVar68) = 0x5f;
              }
              if ((auVar84._8_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 9))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._10_2_ & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 10))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._10_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 0xb))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._12_2_ & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 0xc))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._12_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 0xd))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._14_2_ & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 0xe))[(long)pauVar68] = 0x5f;
              }
              if ((auVar84._14_2_ >> 8 & 1) != 0) {
                ((undefined *)((long)pauVar71[1] + 0xf))[(long)pauVar68] = 0x5f;
              }
              pauVar68 = pauVar68 + 2;
            } while (pauVar73 != pauVar68);
            if (pauVar67 != pauVar73) {
              if (((ulong)pauVar67 & 0x18) == 0) {
                pauVar68 = (undefined1 (*) [16])((long)*pauVar73 + (long)pauVar71);
                goto LAB_09b03660;
              }
              goto LAB_09b02f76;
            }
          }
          pauVar68 = (undefined1 (*) [16])(ulong)((byte)uStack_d38 >> 1);
        }
        uVar65 = (ulong)uStack_8c8 & 1;
        uStack_8c8 = (undefined1 (*) [16])((long)&uStack_d38 + 1);
        if (uVar65 != 0) {
          pauVar68 = pauStack_d30;
          uStack_8c8 = pauStack_d28;
        }
        uStack_d38 = pauVar58;
        pauStack_8c0 = pauVar68;
        FUN_0470d9a0(auStack_1148,&UNK_0138024f,8,0xd,&uStack_8c8);
        pauVar71 = pauStack_14e0;
        uVar75 = *puVar45;
        pauVar58 = (undefined1 (*) [16])(ulong)uVar75;
        if (pauStack_14e0 != (undefined1 (*) [16])0x0) {
          uVar65 = (long)pauStack_14e0 - ((ulong)pauStack_14e0 >> 1 & 0x5555555555555555);
          uVar65 = (uVar65 >> 2 & 0x3333333333333333) + (uVar65 & 0x3333333333333333);
          uVar65 = ((uVar65 >> 4) + uVar65 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar65 >> 0x38 < 2) {
            pauVar66 = (undefined1 (*) [16])(ulong)(uVar75 & (int)pauStack_14e0 - 1U);
          }
          else {
            pauVar66 = pauVar58;
            if (pauStack_14e0 <= pauVar58) {
              pauVar66 = (undefined1 (*) [16])
                         ((ulong)pauVar58 % ((ulong)pauStack_14e0 & 0xffffffff));
            }
          }
          if ((*(long **)(*pauStack_14e8 + (long)pauVar66 * 8) != (long *)0x0) &&
             (plVar70 = (long *)**(long **)(*pauStack_14e8 + (long)pauVar66 * 8),
             plVar70 != (long *)0x0)) {
            if ((byte)(uVar65 >> 0x38) < 2) {
              do {
                if ((undefined1 (*) [16])plVar70[1] == pauVar58) {
                  if (*(uint *)(plVar70 + 2) == uVar75) goto LAB_09b03580;
                }
                else if ((undefined1 (*) [16])
                         ((ulong)plVar70[1] & (ulong)((long)pauStack_14e0[-1] + 0xf)) != pauVar66)
                break;
                plVar70 = (long *)*plVar70;
              } while (plVar70 != (long *)0x0);
            }
            else {
              do {
                pauVar67 = (undefined1 (*) [16])plVar70[1];
                if (pauVar67 == pauVar58) {
                  if (*(uint *)(plVar70 + 2) == uVar75) goto LAB_09b03580;
                }
                else {
                  if (pauStack_14e0 <= pauVar67) {
                    if (((ulong)pauVar67 | (ulong)pauStack_14e0) >> 0x20 == 0) {
                      if ((undefined1 (*) [16])
                          (((ulong)pauVar67 & 0xffffffff) % ((ulong)pauStack_14e0 & 0xffffffff)) ==
                          pauVar66) goto LAB_09b0320a;
                      break;
                    }
                    pauVar67 = (undefined1 (*) [16])((ulong)pauVar67 % (ulong)pauStack_14e0);
                  }
                  if (pauVar67 != pauVar66) break;
                }
LAB_09b0320a:
                plVar70 = (long *)*plVar70;
              } while (plVar70 != (long *)0x0);
            }
          }
        }
        pauVar67 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        auVar106 = in_XMM2._4_12_;
        if (pauVar67 == (undefined1 (*) [16])0x0) {
          func_0x0eec74c0(0x30,0);
          auVar106 = in_XMM2._4_12_;
        }
        pauStack_8c0 = (undefined1 (*) [16])&pauStack_14e8;
        pauStack_8b8 = (undefined1 (*) [16])0x1;
        *(long *)*pauVar67 = 0;
        *(undefined1 (**) [16])((long)*pauVar67 + 8) = pauVar58;
        *(uint *)pauVar67[1] = *puVar45;
        *(undefined8 **)((long)pauVar67[2] + 8) = puStack_1138;
        *(undefined1 (*) [8])((long)pauVar67[1] + 8) = auStack_1148;
        *(undefined1 (**) [16])pauVar67[2] = pauStack_1140;
        _auStack_1148 = (undefined1  [16])0x0;
        puStack_1138 = (undefined8 *)0x0;
        uStack_8c8 = pauVar67;
        if ((long)pauVar71 < 0) {
          in_XMM2._0_4_ = (float)pauVar71;
          in_XMM2._4_12_ = auVar106;
          if (pauVar71 != (undefined1 (*) [16])0x0) goto LAB_09b03371;
LAB_09b03390:
          uVar65 = 1;
          if ((undefined1 (*) [16])0x2 < pauVar71) {
            uVar65 = (ulong)(((ulong)pauVar71 & (ulong)((long)pauVar71[-1] + 0xf)) != 0);
          }
          pauVar66 = (undefined1 (*) [16])((long)pauVar71 * 2 | uVar65);
          fVar83 = (float)ceilf((float)(uStack_14d0 + 1) / fStack_14c8);
          pauVar71 = (undefined1 (*) [16])
                     ((long)(fVar83 - _DAT_01198778) & (long)fVar83 >> 0x3f | (long)fVar83);
          if (pauVar71 < pauVar66) {
            pauVar71 = pauVar66;
          }
          pauVar66 = (undefined1 (*) [16])0x2;
          if ((pauVar71 == (undefined1 (*) [16])0x1) ||
             (pauVar66 = pauVar71, ((ulong)pauVar71 & (ulong)((long)pauVar71[-1] + 0xf)) == 0)) {
            bVar82 = pauVar66 < pauStack_14e0;
            if (pauVar66 <= pauStack_14e0) goto LAB_09b03421;
LAB_09b033fd:
            func_0x049164c0(&pauStack_14e8,pauVar66);
          }
          else {
            pauVar66 = (undefined1 (*) [16])func_0x0412c3f0();
            bVar82 = pauVar66 < pauStack_14e0;
            if (pauStack_14e0 < pauVar66) goto LAB_09b033fd;
LAB_09b03421:
            pauVar71 = pauStack_14e0;
            if (bVar82) {
              fVar83 = (float)ceilf((float)uStack_14d0 / fStack_14c8);
              pauVar68 = (undefined1 (*) [16])
                         ((long)(fVar83 - _DAT_01198778) & (long)fVar83 >> 0x3f | (long)fVar83);
              if ((pauVar71 < (undefined1 (*) [16])0x3) ||
                 (uVar65 = (long)pauVar71 - ((ulong)pauVar71 >> 1 & 0x5555555555555555),
                 uVar65 = (uVar65 >> 2 & 0x3333333333333333) + (uVar65 & 0x3333333333333333),
                 1 < (byte)(((uVar65 >> 4) + uVar65 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                pauVar68 = (undefined1 (*) [16])func_0x0412c3f0(pauVar68);
              }
              else if ((undefined1 (*) [16])0x1 < pauVar68) {
                puVar69 = (undefined *)((long)pauVar68[-1] + 0xf);
                lVar57 = 0x3f;
                if (puVar69 != (undefined *)0x0) {
                  for (; (ulong)puVar69 >> lVar57 == 0; lVar57 = lVar57 + -1) {
                  }
                }
                pauVar68 = (undefined1 (*) [16])(1L << (-((byte)lVar57 ^ 0x3f) & 0x3f));
              }
              if (pauVar66 <= pauVar68) {
                pauVar66 = pauVar68;
              }
              if (pauVar66 < pauVar71) goto LAB_09b033fd;
            }
          }
          pauVar71 = pauStack_14e0;
          if (((ulong)pauStack_14e0 & (ulong)((long)pauStack_14e0[-1] + 0xf)) == 0) {
            pauVar66 = (undefined1 (*) [16])(ulong)(uVar75 & (int)pauStack_14e0 - 1U);
          }
          else {
            pauVar66 = pauVar58;
            if ((pauStack_14e0 <= pauVar58) && (pauStack_14e0 <= pauVar58)) {
              pauVar66 = (undefined1 (*) [16])
                         ((ulong)pauVar58 % ((ulong)pauStack_14e0 & 0xffffffff));
            }
          }
        }
        else {
          in_XMM2._0_4_ = (float)(long)pauVar71;
          in_XMM2._4_12_ = auVar106;
          if (pauVar71 == (undefined1 (*) [16])0x0) goto LAB_09b03390;
LAB_09b03371:
          in_XMM2._0_4_ = in_XMM2._0_4_ * fStack_14c8;
          if (in_XMM2._0_4_ < (float)(uStack_14d0 + 1)) goto LAB_09b03390;
        }
        plVar70 = *(long **)(*pauStack_14e8 + (long)pauVar66 * 8);
        if (plVar70 == (long *)0x0) {
          *(undefined1 (**) [16])*pauVar67 = pauStack_14d8;
          *(undefined1 (***) [16])(*pauStack_14e8 + (long)pauVar66 * 8) = &pauStack_14d8;
          pauStack_14d8 = pauVar67;
          if (*(long *)*pauVar67 != 0) {
            pauVar58 = *(undefined1 (**) [16])(*(long *)*pauVar67 + 8);
            puVar69 = (undefined *)((long)pauVar71[-1] + 0xf);
            if (((ulong)pauVar71 & (ulong)puVar69) == 0) {
              *(undefined1 (**) [16])(*pauStack_14e8 + ((ulong)pauVar58 & (ulong)puVar69) * 8) =
                   pauVar67;
            }
            else {
              if (pauVar71 <= pauVar58) {
                if (((ulong)pauVar58 | (ulong)pauVar71) >> 0x20 == 0) {
                  *(undefined1 (**) [16])
                   (*pauStack_14e8 +
                   (((ulong)pauVar58 & 0xffffffff) % ((ulong)pauVar71 & 0xffffffff)) * 8) = pauVar67
                  ;
                  goto LAB_09b0357b;
                }
                pauVar58 = (undefined1 (*) [16])((ulong)pauVar58 % (ulong)pauVar71);
              }
              *(undefined1 (**) [16])(*pauStack_14e8 + (long)pauVar58 * 8) = pauVar67;
            }
          }
        }
        else {
          *(long *)*pauVar67 = *plVar70;
          *plVar70 = (long)pauVar67;
        }
LAB_09b0357b:
        uStack_14d0 = uStack_14d0 + 1;
LAB_09b03580:
        if ((auStack_1148[0] & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_1138,(ulong)auStack_1148 & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_d38 & 1) != 0) {
          thunk_FUN_0ee326a0(pauStack_d28,(ulong)uStack_d38 & 0xfffffffffffffffe);
        }
        pauVar66 = pauStack_14e8;
        pauVar71 = pauStack_14e0;
        pauVar67 = pauStack_14d8;
        uVar65 = uStack_14d0;
        fVar83 = fStack_14c8;
        puVar46 = puStack_14b0;
        puStack_14b0 = puVar49;
      }
      pauStack_14e8 = (undefined1 (*) [16])0x0;
      pauStack_14e0 = (undefined1 (*) [16])0x0;
      if (uVar65 != 0) {
        pauVar58 = *(undefined1 (**) [16])((long)*pauVar67 + 8);
        puVar69 = (undefined *)((long)pauVar71[-1] + 0xf);
        if (((ulong)pauVar71 & (ulong)puVar69) == 0) {
          pauVar58 = (undefined1 (*) [16])((ulong)pauVar58 & (ulong)puVar69);
        }
        else if (pauVar71 <= pauVar58) {
          if (((ulong)pauVar58 | (ulong)pauVar71) >> 0x20 == 0) {
            pauVar58 = (undefined1 (*) [16])
                       (((ulong)pauVar58 & 0xffffffff) % ((ulong)pauVar71 & 0xffffffff));
          }
          else {
            pauVar58 = (undefined1 (*) [16])((ulong)pauVar58 % (ulong)pauVar71);
          }
        }
        *(undefined1 (***) [16])(*pauVar66 + (long)pauVar58 * 8) = &pauStack_1258;
        pauStack_14d8 = (undefined1 (*) [16])0x0;
        uStack_14d0 = 0;
      }
      plStack_1198 = (long *)0x0;
      puStack_14b0 = puVar46;
      pauStack_1268 = pauVar66;
      pauStack_1260 = pauVar71;
      pauStack_1258 = pauVar67;
      uStack_1250 = uVar65;
      fStack_1248 = fVar83;
      plVar70 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar70 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      *plVar70 = (long)&UNK_0f1d43d0;
      pauStack_1268 = (undefined1 (*) [16])0x0;
      plVar70[1] = (long)pauVar66;
      plVar70[2] = (long)pauVar71;
      pauStack_1260 = (undefined1 (*) [16])0x0;
      plVar70[3] = (long)pauStack_1258;
      plVar70[4] = uVar65;
      *(float *)(plVar70 + 5) = fVar83;
      plStack_1198 = plVar70;
      if (uVar65 == 0) {
        pauVar58 = pauStack_1258;
        if (pauStack_1258 == (undefined1 (*) [16])0x0) goto LAB_09b03964;
        do {
          pauVar66 = *(undefined1 (**) [16])*pauVar58;
          if ((*(byte *)((long)pauVar58[1] + 8) & 1) != 0) {
            thunk_FUN_0ee326a0(*(long *)((long)pauVar58[2] + 8),
                               *(ulong *)((long)pauVar58[1] + 8) & 0xfffffffffffffffe);
          }
          thunk_FUN_0ee326a0(pauVar58,0x30);
          pauVar67 = pauStack_1268;
          pauVar58 = pauVar66;
        } while (pauVar66 != (undefined1 (*) [16])0x0);
        pauStack_1268 = (undefined1 (*) [16])0x0;
        if (pauVar67 != (undefined1 (*) [16])0x0) {
          thunk_FUN_0ee326a0(pauVar67,(long)pauStack_1260 << 3);
        }
      }
      else {
        pauVar58 = *(undefined1 (**) [16])((long)*pauStack_1258 + 8);
        puVar69 = (undefined *)((long)pauVar71[-1] + 0xf);
        if (((ulong)pauVar71 & (ulong)puVar69) == 0) {
          pauVar58 = (undefined1 (*) [16])((ulong)pauVar58 & (ulong)puVar69);
        }
        else if (pauVar71 <= pauVar58) {
          if (((ulong)pauVar58 | (ulong)pauVar71) >> 0x20 == 0) {
            pauVar58 = (undefined1 (*) [16])
                       (((ulong)pauVar58 & 0xffffffff) % ((ulong)pauVar71 & 0xffffffff));
          }
          else {
            pauVar58 = (undefined1 (*) [16])((ulong)pauVar58 % (ulong)pauVar71);
          }
        }
        *(long **)(*pauVar66 + (long)pauVar58 * 8) = plVar70 + 3;
        pauStack_1258 = (undefined1 (*) [16])0x0;
        uStack_1250 = 0;
LAB_09b03964:
        pauStack_1268 = (undefined1 (*) [16])0x0;
      }
      uStack_d38 = (undefined1 (*) [16])0x0;
      pauStack_d30 = (undefined1 (*) [16])0x0;
      pauStack_d28 = (undefined1 (*) [16])0x0;
      pauStack_8c0 = (undefined1 (*) [16])((long)&uStack_d38 + 1);
      uStack_8c8 = (undefined1 (*) [16])0x10034001a0001;
      pauStack_8b8 = (undefined1 (*) [16])0x0;
      puStack_8b0 = &UNK_01254d89;
      puStack_8a8 = (undefined *)0x0;
      func_0x0ee382a0(&uStack_1418,&uStack_8c8);
      if (((ulong)uStack_d38 & 1) != 0) {
        thunk_FUN_0ee326a0(pauStack_d28,(ulong)uStack_d38 & 0xfffffffffffffffe);
      }
      if (puStack_14b0 == puStack_14b8) {
LAB_09b04e61:
        if ((uStack_1418 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_1408,uStack_1418 & 0xfffffffffffffffe);
        }
        if (plStack_1198 == &lStack_11b8) {
          lVar57 = 0x20;
        }
        else {
          lVar57 = 0x28;
          pauVar71 = pauStack_14e8;
          pauVar58 = pauStack_14d8;
          if (plStack_1198 == (long *)0x0) goto joined_r0x09b04eab;
        }
        (**(code **)(*plStack_1198 + lVar57))();
        pauVar71 = pauStack_14e8;
        pauVar58 = pauStack_14d8;
joined_r0x09b04eab:
        while (pauVar58 != (undefined1 (*) [16])0x0) {
          pauVar66 = *(undefined1 (**) [16])*pauVar58;
          pauStack_14e8 = pauVar71;
          if (((ulong)*(undefined1 (***) [16])((long)pauVar58[1] + 8) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined1 (***) [16])((long)pauVar58[2] + 8),
                               (ulong)*(undefined1 (***) [16])((long)pauVar58[1] + 8) &
                               0xfffffffffffffffe);
          }
          thunk_FUN_0ee326a0(pauVar58,0x30);
          pauVar71 = pauStack_14e8;
          pauVar58 = pauVar66;
        }
        pauStack_14e8 = (undefined1 (*) [16])0x0;
        if (pauVar71 != (undefined1 (*) [16])0x0) {
          thunk_FUN_0ee326a0(pauVar71,(long)pauStack_14e0 << 3);
        }
        puVar46 = puStack_14b8;
        puVar45 = puStack_14b0;
        if (puStack_14b8 != (uint *)0x0) {
          while (puVar46 != puVar45) {
            func_0x04905df0(puVar45 + -200);
            puVar45 = puVar45 + -200;
          }
          puStack_14b0 = puVar46;
          thunk_FUN_0ee326a0(puStack_14b8,lStack_14a8 - (long)puStack_14b8);
        }
        if (((ulong)auStack_12f0 & 1) != 0) {
          thunk_FUN_0ee326a0(ppauStack_12e0,(ulong)auStack_12f0 & 0xfffffffffffffffe);
        }
        pauVar71 = pauStack_1478;
        pauStack_1488 = (undefined1 (*) [16])&UNK_0f534768;
        if (pauStack_1478 == (undefined1 (*) [16])0x0) {
          (*pauStack_1480)[0] = 0;
        }
        else {
          (*pauStack_1480)[0] = 0;
          LOCK();
          plVar70 = (long *)(*pauStack_1478 + 8);
          lVar57 = *plVar70;
          *plVar70 = *plVar70 + -1;
          UNLOCK();
          if (lVar57 == 0) {
            (**(code **)(*(long *)*pauStack_1478 + 0x10))(pauStack_1478);
            func_0x0412c2d0(pauVar71);
          }
        }
        pbVar34 = pbStack_1438;
        if (pbStack_1438 != (byte *)0x0) {
          for (pbVar62 = (byte *)CONCAT62(uStack_142e,uStack_1430); pbVar34 != pbVar62;
              pbVar62 = pbVar62 + -0x38) {
            if ((pbVar62[-0x38] & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(pbVar62 + -0x28),
                                 *(ulong *)(pbVar62 + -0x38) & 0xfffffffffffffffe);
            }
          }
          uStack_1430 = SUB82(pbVar34,0);
          uStack_142e = (undefined6)((ulong)pbVar34 >> 0x10);
          thunk_FUN_0ee326a0(pbStack_1438,CONCAT62(uStack_1426,uStack_1428) - (long)pbStack_1438);
        }
        uStack_8c8 = (undefined1 (*) [16])&ppauStack_1458;
        func_0x048b0f50(&uStack_8c8);
        if (pauStack_1470 != (undefined1 (*) [16])0x0) {
          pauStack_1468 = pauStack_1470;
          thunk_FUN_0ee326a0(pauStack_1470,lStack_1460 - (long)pauStack_1470);
        }
        return;
      }
      uVar65 = 0;
      while( true ) {
        func_0x0ed71760(&uStack_8c8,puStack_14b8 + uVar65 * 200,&lStack_11b8);
        lVar57 = (long)&uStack_1418 + 1;
        if ((uStack_1418 & 1) != 0) {
          lVar57 = lStack_1408;
        }
        func_0x04130630(auStack_458,lVar57);
        uStack_440 = 0x891;
        uStack_43c = 1;
        uStack_1298 = 0;
        uStack_1278 = 0;
        uStack_1276 = 0;
        uStack_1270 = 0;
        uStack_126e = 0;
        lStack_1288 = 0;
        uStack_1280 = 0;
        uStack_127e = 0;
        uStack_12a8 = 0;
        uStack_12a0 = 0;
        pcStack_12b8 = (code *)0x0;
        lStack_12b0 = 0;
        pauStack_12c8 = (undefined1 (*) [16])0x0;
        pcStack_12c0 = (code *)0x0;
        pauStack_12d8 = (undefined1 (*) [16])0x0;
        pauStack_12d0 = (undefined1 (*) [16])0x0;
        uStack_1290 = 0x3f600000;
        func_0x048af640(&pcStack_12c0,8);
        uStack_1278 = 0;
        uStack_1276 = 0;
        uStack_1270 = 0;
        lStack_1288 = 0;
        uStack_1280 = 0;
        uStack_127e = 0;
        pauStack_12d8 = (undefined1 (*) [16])&UNK_0f534768;
        pauVar58 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (pauVar58 == (undefined1 (*) [16])0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *(undefined1 (**) [16])((long)*pauVar58 + 8) = (undefined1 (*) [16])0x0;
        *(undefined1 (**) [16])pauVar58[1] = (undefined1 (*) [16])0x0;
        *(undefined1 (**) [16])*pauVar58 = (undefined1 (*) [16])&UNK_0ef44a60;
        pauStack_12d0 = (undefined1 (*) [16])((long)pauVar58[1] + 8);
        *(undefined1 *)((long)pauVar58[1] + 8) = 1;
        pauStack_12d8 = (undefined1 (*) [16])&UNK_0ef471f0;
        pauStack_12c8 = pauVar58;
        func_0x0ed71380((undefined1 (*) [16])&pauStack_12d8);
        func_0x0ed81020((undefined1 (*) [16])&pauStack_12d8);
        pauStack_d28 = (undefined1 (*) [16])CONCAT44(pauStack_d28._4_4_,0xffffffff);
        pauStack_d20 = (undefined1 (*) [16])&uStack_d10;
        _uStack_d18 = 0x800000000;
        puStack_c10 = auStack_c00;
        uStack_c08 = 0x800000000;
        uStack_a80 = 0xfffc;
        uStack_a7e = 1;
        uStack_a7c = 0xffffffff00000000;
        uStack_a70 = 0;
        uStack_a68 = 0;
        uStack_d38 = (undefined1 (*) [16])&UNK_0ef47258;
        uStack_a58 = 0;
        puStack_a60 = &UNK_0ef472c8;
        uStack_a20 = 0;
        uStack_a18 = 0;
        uStack_a30 = 0;
        uStack_a28 = 0;
        uStack_a40 = 0;
        uStack_a38 = 0;
        uStack_a50 = 0;
        uStack_a48 = 0;
        uStack_a10 = 0x100;
        uStack_a08 = 0;
        uStack_a00 = 0;
        puStack_9f8 = &uStack_a38;
        uStack_9e0 = 0;
        uStack_9d8 = 0;
        uStack_9f0 = 0;
        uStack_9e8 = 0;
        uStack_9d0 = 0;
        uStack_9c8 = 0x200;
        uStack_9c0 = 0x144;
        uStack_9bc = 0;
        uStack_9b0 = 0;
        puStack_9b8 = &UNK_0ef473d8;
        uStack_978 = 0;
        uStack_970 = 0;
        uStack_988 = 0;
        uStack_980 = 0;
        uStack_998 = 0;
        uStack_990 = 0;
        uStack_9a8 = 0;
        uStack_9a0 = 0;
        uStack_968 = 0x100;
        uStack_960 = 0;
        uStack_958 = 0;
        puStack_950 = &uStack_990;
        uStack_938 = 0;
        uStack_930 = 0;
        uStack_948 = 0;
        uStack_940 = 0;
        uStack_928 = 0;
        uStack_920 = 0x200;
        uStack_918 = 0x144;
        uStack_914 = 0x2000;
        uStack_908 = 1;
        uStack_910 = 4;
        pauStack_d30 = (undefined1 (*) [16])&pauStack_12d8;
        func_0x09b369c0(&uStack_d38,&puStack_9b8,&uStack_8c8);
        func_0x048e6440(&uStack_1240,&uStack_d38);
        auStack_1148._0_4_ = puStack_14b8[uVar65 * 200];
        if (plStack_1198 == (long *)0x0) break;
        (**(code **)(*plStack_1198 + 0x30))(&bStack_11d0,plStack_1198,auStack_1148);
        ppauStack_13f8 = ppauStack_12e0;
        pauStack_13f0 = pauStack_12e8;
        if (((ulong)auStack_12f0 & 1) == 0) {
          ppauStack_13f8 = (undefined1 (**) [16])(auStack_12f0 + 1);
          pauStack_13f0 = (undefined1 (*) [16])((ulong)auStack_12f0 >> 1 & 0x7f);
        }
        auStack_13e8._0_8_ = puStack_11c0;
        auStack_13e8._8_8_ = uStack_11c8;
        if ((bStack_11d0 & 1) == 0) {
          auStack_13e8._0_8_ = &uStack_11cf;
          auStack_13e8._8_8_ = (ulong)(bStack_11d0 >> 1);
        }
        func_0x049151c0(auStack_1148,&ppauStack_13f8,2,0x2f);
        pauVar58 = pauStack_d48;
        if ((undefined1 (*) [16])0xfffffffffffffff7 < pauStack_d48) goto LAB_09b05111;
        if (pauStack_d48 < (undefined1 (*) [16])0x17) {
          uStack_14a0 = CONCAT71(uStack_14a0._1_7_,(char)pauStack_d48 * '\x02');
          pauVar71 = (undefined1 (*) [16])((long)&uStack_14a0 + 1);
          if (pauStack_d48 != (undefined1 (*) [16])0x0) goto LAB_09b03ef1;
        }
        else {
          uVar80 = ((ulong)pauStack_d48 | 7) + 1;
          if (((ulong)pauStack_d48 | 7) == 0x17) {
            uVar80 = 0x1a;
          }
          pauVar71 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar80);
          if (pauVar71 == (undefined1 (*) [16])0x0) {
            func_0x0eec74c0(uVar80,0);
          }
          uStack_14a0 = uVar80 | 1;
          pauStack_1498 = pauVar58;
          pauStack_1490 = pauVar71;
LAB_09b03ef1:
          func_0x0eee2f00(pauVar71,auStack_1148,pauVar58);
        }
        *(undefined1 *)((long)*pauVar58 + (long)*pauVar71) = 0;
        if ((DAT_0f7b8fb8 == '\0') && (iVar56 = func_0x04108328(&DAT_0f7b8fb8), iVar56 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        pauStack_1150 = (undefined1 (*) [16])(uStack_14a0 >> 1 & 0x7f);
        pauStack_1158 = (undefined1 (*) [16])((long)&uStack_14a0 + 1);
        if ((uStack_14a0 & 1) != 0) {
          pauStack_1150 = pauStack_1498;
          pauStack_1158 = pauStack_1490;
        }
        (**(code **)(_DAT_0f7b8f98 + 0x148))(auStack_1148,&DAT_0f7b8f98,&pauStack_1158);
        puVar50 = puStack_1130;
        puVar61 = _UNK_0f1d3868;
        uVar48 = _UNK_0f1d3858;
        uVar60 = _DAT_0f1d3850;
        cStack_13b8 = (byte)uStack_1108;
        if ((byte)uStack_1108 == '\0') {
          ppauStack_13f8 = (undefined1 (**) [16])auStack_1148;
          pauStack_13f0 = pauStack_1140;
          auStack_13e8._0_8_ = puStack_1138;
          auStack_13e8._0_8_ = puStack_1138;
          auStack_13e8._8_8_ = puStack_1130;
          auVar74 = auStack_1128;
          pppauStack_13d8 = (undefined1 (***) [16])auStack_1128;
          auStack_13d0._0_8_ = uStack_1120;
          auVar40._8_8_ = 0;
          auVar40._0_8_ = uStack_1120;
          _auStack_1128 = auVar40 << 0x40;
          auStack_13d0._8_8_ = plStack_1118;
          uStack_13c0 = uStack_1110;
          puStack_1138 = _DAT_0f1d3860;
          puStack_1130 = _UNK_0f1d3868;
          pauStack_1140 = (undefined1 (*) [16])_UNK_0f1d3858;
          auStack_1148 = (undefined1  [8])_DAT_0f1d3850;
          auVar41[0xf] = 0;
          auVar41._0_15_ = stack0xffffffffffffeed9;
          _auStack_1128 = auVar41 << 8;
          uStack_1100 = uStack_1100 & 0xff00;
          if (puVar50 < (ulong)auVar74) {
            puVar50[2] = _DAT_0f1d3860;
            puVar50[3] = puVar61;
            *puVar50 = uVar60;
            puVar50[1] = uVar48;
            *(undefined1 *)(puVar50 + 4) = 0;
            *(undefined1 *)(puVar50 + 9) = 0;
            puVar61 = puVar50 + 10;
          }
          else {
            auStack_13e8._8_8_ = func_0x0489d2c0(auStack_13e8,auStack_1148);
            puVar61 = (undefined8 *)auStack_13e8._8_8_;
            if (((uStack_1100 & 1) != 0) && ((auStack_1128[0] & 1) != 0)) {
              thunk_FUN_0ee326a0(plStack_1118,(ulong)auStack_1128 & 0xfffffffffffffffe);
              puVar61 = (undefined8 *)auStack_13e8._8_8_;
            }
          }
          uStack_1370 = uStack_13c0;
          plStack_1378 = (long *)auStack_13d0._8_8_;
          plStack_1380 = (long *)auStack_13d0._0_8_;
          puStack_1388 = pppauStack_13d8;
          puStack_1398 = (undefined8 *)auStack_13e8._0_8_;
          auStack_13e8 = (undefined1  [16])0x0;
          pppauStack_13d8 = (undefined1 (***) [16])0x0;
          auStack_13d0 = (undefined1  [16])0x0;
          uStack_13c0 = 0;
          uStack_1368 = uStack_1368 & 0xffffffffffffff00;
          uStack_13a8 = ppauStack_13f8;
          pauStack_13a0 = pauStack_13f0;
          puStack_1390 = puVar61;
        }
        else {
          plStack_1308 = (long *)0x0;
          plStack_1300 = (long *)0x0;
          pauVar66 = pauStack_1490;
          pauVar58 = pauStack_1498;
          if ((uStack_14a0 & 1) == 0) {
            pauVar66 = (undefined1 (*) [16])((long)&uStack_14a0 + 1);
            pauVar58 = (undefined1 (*) [16])(uStack_14a0 >> 1 & 0x7f);
          }
          if ((DAT_0f7b8fb8 == '\0') && (iVar56 = func_0x04108328(&DAT_0f7b8fb8), iVar56 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
          bStack_1358 = (byte)pauVar66;
          uStack_1357 = (undefined7)((ulong)pauVar66 >> 8);
          pauStack_1350 = pauVar58;
          (**(code **)(_DAT_0f7b8f98 + 0x10))
                    (auStack_1148,&DAT_0f7b8f98,&bStack_1358,&plStack_1308,0x10e,0);
          cStack_11e8 = (byte)uStack_1108;
          if ((byte)uStack_1108 == '\0') {
            ppauStack_1228 = (undefined1 (**) [16])auStack_1148;
            pauStack_1220 = pauStack_1140;
            auStack_1218._0_8_ = puStack_1138;
            auStack_1218._8_8_ = puStack_1130;
            pppauStack_1208 = (undefined1 (***) [16])auStack_1128;
            puStack_1138 = (undefined8 *)0x0;
            puStack_1130 = (undefined8 *)0x0;
            auStack_1200._0_8_ = uStack_1120;
            auVar42._8_8_ = 0;
            auVar42._0_8_ = uStack_1120;
            _auStack_1128 = auVar42 << 0x40;
            auStack_1200._8_8_ = plStack_1118;
            uStack_11f0 = uStack_1110;
            apauStack_8d8[0] = (undefined1 (*) [16])((long)&uStack_14a0 + 1);
            if ((uStack_14a0 & 1) != 0) {
              apauStack_8d8[0] = pauStack_1490;
            }
            FUN_0470d9a0(&bStack_1358,&UNK_0122ca83,0x22,0xc,apauStack_8d8);
            puVar61 = _UNK_0f1d3888;
            uVar48 = _UNK_0f1d3878;
            uVar60 = _DAT_0f1d3870;
            in_XMM2._8_8_ = pauStack_1350;
            in_XMM2._0_8_ = CONCAT71(uStack_1357,bStack_1358);
            pauStack_1140 = (undefined1 (*) [16])_UNK_0f1d3878;
            auStack_1148 = (undefined1  [8])_DAT_0f1d3870;
            puStack_1138 = _DAT_0f1d3880;
            puStack_1130 = _UNK_0f1d3888;
            plStack_1118 = (long *)auStack_1348._0_8_;
            uStack_1110 = CONCAT53(uStack_1110._3_5_,0x10000);
            uStack_1110 = CONCAT62(uStack_1110._2_6_,8);
            uStack_1108 = CONCAT71(uStack_1108._1_7_,1);
            uStack_1110 = uStack_1110 & 0xffffffff;
            uStack_1100 = CONCAT11(uStack_1100._1_1_,1);
            if ((ulong)auStack_1218._8_8_ < pppauStack_1208) {
              *(undefined8 **)(auStack_1218._8_8_ + 0x10) = _DAT_0f1d3880;
              *(undefined8 **)(auStack_1218._8_8_ + 0x18) = puVar61;
              *(undefined8 *)auStack_1218._8_8_ = uVar60;
              *(undefined8 *)(auStack_1218._8_8_ + 8) = uVar48;
              *(undefined8 *)(auStack_1218._8_8_ + 0x30) = auStack_1348._0_8_;
              *(ulong *)(auStack_1218._8_8_ + 0x20) = CONCAT71(uStack_1357,bStack_1358);
              *(undefined1 (**) [16])(auStack_1218._8_8_ + 0x28) = pauStack_1350;
              _auStack_1128 = ZEXT816(0);
              plStack_1118 = (long *)0x0;
              *(undefined1 *)(auStack_1218._8_8_ + 0x40) = 1;
              *(ulong *)(auStack_1218._8_8_ + 0x38) = uStack_1110;
              *(undefined1 *)(auStack_1218._8_8_ + 0x48) = 1;
              puVar61 = (undefined8 *)(auStack_1218._8_8_ + 0x50);
            }
            else {
              _auStack_1128 = in_XMM2;
              auStack_1218._8_8_ = func_0x0489d2c0(auStack_1218,auStack_1148);
              puVar61 = (undefined8 *)auStack_1218._8_8_;
              if (((uStack_1100 & 1) != 0) && ((auStack_1128[0] & 1) != 0)) {
                thunk_FUN_0ee326a0(plStack_1118,(ulong)auStack_1128 & 0xfffffffffffffffe);
                puVar61 = (undefined8 *)auStack_1218._8_8_;
              }
            }
            uStack_1370 = uStack_11f0;
            puStack_1388 = pppauStack_1208;
            puStack_1398 = (undefined8 *)auStack_1218._0_8_;
            auStack_1218 = (undefined1  [16])0x0;
            pppauStack_1208 = (undefined1 (***) [16])0x0;
            plStack_1380 = (long *)auStack_1200._0_8_;
            plStack_1378 = (long *)auStack_1200._8_8_;
            auStack_1200 = (undefined1  [16])0x0;
            uStack_11f0 = 0;
            uStack_1368 = uStack_1368 & 0xffffffffffffff00;
            uStack_13a8 = ppauStack_1228;
            pauStack_13a0 = pauStack_1220;
            puStack_1390 = puVar61;
          }
          else {
            uVar80 = (ulong)uStack_1240 >> 1 & 0x7f;
            lVar57 = (long)&uStack_1240 + 1;
            if (((ulong)uStack_1240 & 1) != 0) {
              uVar80 = uStack_1238;
              lVar57 = lStack_1230;
            }
            func_0x0ee76e70(auStack_1148,plStack_1308,lVar57,uVar80);
            puVar50 = puStack_1130;
            puVar61 = _UNK_0f1d38a8;
            uVar48 = _UNK_0f1d3898;
            uVar60 = _DAT_0f1d3890;
            bStack_1318 = (byte)uStack_1108;
            if ((byte)uStack_1108 == 0) {
              bStack_1358 = auStack_1148[0];
              uStack_1357 = auStack_1148._1_7_;
              pauStack_1350 = pauStack_1140;
              auStack_1348._0_8_ = puStack_1138;
              auStack_1348._0_8_ = puStack_1138;
              auStack_1348._8_8_ = puStack_1130;
              auVar74 = auStack_1128;
              puStack_1338 = (undefined8 *)auStack_1128;
              auStack_1330._0_8_ = uStack_1120;
              auVar43._8_8_ = 0;
              auVar43._0_8_ = uStack_1120;
              _auStack_1128 = auVar43 << 0x40;
              auStack_1330._8_8_ = plStack_1118;
              uStack_1320 = uStack_1110;
              puStack_1138 = _DAT_0f1d38a0;
              puStack_1130 = _UNK_0f1d38a8;
              pauStack_1140 = (undefined1 (*) [16])_UNK_0f1d3898;
              auStack_1148 = (undefined1  [8])_DAT_0f1d3890;
              auVar44[0xf] = 0;
              auVar44._0_15_ = stack0xffffffffffffeed9;
              _auStack_1128 = auVar44 << 8;
              uStack_1100 = uStack_1100 & 0xff00;
              if (puVar50 < (ulong)auVar74) {
                puVar50[2] = _DAT_0f1d38a0;
                puVar50[3] = puVar61;
                *puVar50 = uVar60;
                puVar50[1] = uVar48;
                *(undefined1 *)(puVar50 + 4) = 0;
                *(undefined1 *)(puVar50 + 9) = 0;
                puVar61 = puVar50 + 10;
              }
              else {
                auStack_1348._8_8_ = func_0x0489d2c0(auStack_1348,auStack_1148);
                puVar61 = (undefined8 *)auStack_1348._8_8_;
                if (((uStack_1100 & 1) != 0) && ((auStack_1128[0] & 1) != 0)) {
                  thunk_FUN_0ee326a0(plStack_1118,(ulong)auStack_1128 & 0xfffffffffffffffe);
                  puVar61 = (undefined8 *)auStack_1348._8_8_;
                }
              }
              uStack_1370 = uStack_1320;
              plStack_1378 = (long *)auStack_1330._8_8_;
              plStack_1380 = (long *)auStack_1330._0_8_;
              puStack_1388 = puStack_1338;
              puStack_1398 = (undefined8 *)auStack_1348._0_8_;
              auStack_1348 = (undefined1  [16])0x0;
              puStack_1338 = (undefined8 *)0x0;
              auStack_1330 = (undefined1  [16])0x0;
              uStack_1320 = 0;
              uStack_1368 = uStack_1368 & 0xffffffffffffff00;
              uStack_13a8 = (undefined1 (**) [16])CONCAT71(uStack_1357,bStack_1358);
              pauStack_13a0 = pauStack_1350;
              puStack_1390 = puVar61;
              if ((bStack_1318 & 1) == 0) goto LAB_09b0468d;
            }
            else {
              uStack_13a8 = (undefined1 (**) [16])0x0;
              pauStack_13a0 = (undefined1 (*) [16])0x0;
              puStack_1398 = (undefined8 *)0x0;
              puStack_1390 = (undefined8 *)0x0;
              puStack_1388 = (undefined8 *)0x0;
              plStack_1380 = (long *)0x0;
              plStack_1378 = (long *)0x0;
              uStack_1370 = 0;
              uStack_1368 = 1;
              if ((uStack_1108 & 1) == 0) {
LAB_09b0468d:
                uVar60 = auStack_1330._0_8_;
                if (auStack_1330._0_8_ != 0) {
                  lVar57 = auStack_1330._8_8_;
                  while (uVar60 != lVar57) {
                    lVar57 = lVar57 + -0x40;
                    func_0x048b3e80(lVar57);
                  }
                  auStack_1330._8_8_ = uVar60;
                  thunk_FUN_0ee326a0(auStack_1330._0_8_,uStack_1320 - auStack_1330._0_8_);
                }
                uVar60 = auStack_1348._0_8_;
                if (auStack_1348._0_8_ != 0) {
                  for (lVar57 = auStack_1348._8_8_; uVar60 != lVar57; lVar57 = lVar57 + -0x50) {
                    if ((*(char *)(lVar57 + -8) == '\x01') && ((*(byte *)(lVar57 + -0x30) & 1) != 0)
                       ) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar57 + -0x20),
                                         *(ulong *)(lVar57 + -0x30) & 0xfffffffffffffffe);
                    }
                  }
                  auStack_1348._8_8_ = uVar60;
                  thunk_FUN_0ee326a0(auStack_1348._0_8_,(long)puStack_1338 - auStack_1348._0_8_);
                }
              }
            }
          }
          uVar60 = auStack_1200._0_8_;
          if (cStack_11e8 == '\0') {
            if (auStack_1200._0_8_ != 0) {
              lVar57 = auStack_1200._8_8_;
              while (uVar60 != lVar57) {
                lVar57 = lVar57 + -0x40;
                func_0x048b3e80(lVar57);
              }
              auStack_1200._8_8_ = uVar60;
              thunk_FUN_0ee326a0(auStack_1200._0_8_,uStack_11f0 - auStack_1200._0_8_);
            }
            uVar60 = auStack_1218._0_8_;
            if (auStack_1218._0_8_ != 0) {
              for (lVar57 = auStack_1218._8_8_; uVar60 != lVar57; lVar57 = lVar57 + -0x50) {
                if ((*(char *)(lVar57 + -8) == '\x01') && ((*(byte *)(lVar57 + -0x30) & 1) != 0)) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(lVar57 + -0x20),
                                     *(ulong *)(lVar57 + -0x30) & 0xfffffffffffffffe);
                }
              }
              auStack_1218._8_8_ = uVar60;
              thunk_FUN_0ee326a0(auStack_1218._0_8_,(long)pppauStack_1208 - auStack_1218._0_8_);
            }
          }
          if (plStack_1308 != (long *)0x0) {
            func_0x0ee56810(auStack_1148,&plStack_1308);
            if ((byte)uStack_1108 == '\0') {
              plVar70 = uStack_1120;
              if (uStack_1120 != (long *)0x0) {
                plVar81 = plStack_1118;
                if (uStack_1120 != plStack_1118) {
                  do {
                    plVar81 = plVar81 + -8;
                    func_0x048b3e80(plVar81);
                  } while (plVar81 != plVar70);
                }
                plStack_1118 = plVar70;
                thunk_FUN_0ee326a0(uStack_1120,uStack_1110 - (long)uStack_1120);
              }
              puVar50 = puStack_1138;
              puVar61 = puStack_1130;
              if (puStack_1138 != (undefined8 *)0x0) {
                for (; puVar50 != puVar61; puVar61 = puVar61 + -10) {
                  if ((*(char *)(puVar61 + -1) == '\x01') && ((*(byte *)(puVar61 + -6) & 1) != 0)) {
                    thunk_FUN_0ee326a0(puVar61[-4],puVar61[-6] & 0xfffffffffffffffe);
                  }
                }
                puStack_1130 = puVar50;
                thunk_FUN_0ee326a0(puStack_1138,(long)auStack_1128 - (long)puStack_1138);
              }
            }
          }
          plVar70 = plStack_1300;
          plStack_1300 = (long *)0x0;
          if (plVar70 != (long *)0x0) {
            (**(code **)(*plVar70 + 8))();
          }
          plVar70 = plStack_1308;
          plStack_1308 = (long *)0x0;
          if (plVar70 != (long *)0x0) {
            (**(code **)(*plVar70 + 8))();
          }
        }
        uVar60 = auStack_13d0._0_8_;
        if (cStack_13b8 == '\0') {
          if (auStack_13d0._0_8_ != 0) {
            lVar57 = auStack_13d0._8_8_;
            while (uVar60 != lVar57) {
              lVar57 = lVar57 + -0x40;
              func_0x048b3e80(lVar57);
            }
            auStack_13d0._8_8_ = uVar60;
            thunk_FUN_0ee326a0(auStack_13d0._0_8_,uStack_13c0 - auStack_13d0._0_8_);
          }
          uVar60 = auStack_13e8._0_8_;
          if (auStack_13e8._0_8_ != 0) {
            for (lVar57 = auStack_13e8._8_8_; uVar60 != lVar57; lVar57 = lVar57 + -0x50) {
              if ((*(char *)(lVar57 + -8) == '\x01') && ((*(byte *)(lVar57 + -0x30) & 1) != 0)) {
                thunk_FUN_0ee326a0(*(undefined8 *)(lVar57 + -0x20),
                                   *(ulong *)(lVar57 + -0x30) & 0xfffffffffffffffe);
              }
            }
            auStack_13e8._8_8_ = uVar60;
            thunk_FUN_0ee326a0(auStack_13e8._0_8_,(long)pppauStack_13d8 - auStack_13e8._0_8_);
          }
        }
        pauStack_1140 = (undefined1 (*) [16])&UNK_0140f690;
        auStack_1148 = (undefined1  [8])0xfaa3c6a4782df7ed;
        puStack_1138 = (undefined8 *)0x1;
        puStack_1130 = (undefined8 *)CONCAT44(puStack_1130._4_4_,0x85a);
        if ((byte)uStack_1368 == 0) {
          func_0x0eedea30(&ppauStack_13f8);
          func_0x0eedeb80(2,0x2d,&uStack_13a8,&ppauStack_13f8,auStack_1148);
          if (((ulong)ppauStack_13f8 & 1) != 0) {
            thunk_FUN_0ee326a0(auStack_13e8._0_8_,(ulong)ppauStack_13f8 & 0xfffffffffffffffe);
          }
        }
        plVar70 = plStack_1380;
        if (((byte)uStack_1368 & 1) == 0) {
          plVar81 = plStack_1378;
          if (plStack_1380 != (long *)0x0) {
            while (plVar70 != plVar81) {
              func_0x048b3e80(plVar81 + -8);
              plVar81 = plVar81 + -8;
            }
            plStack_1378 = plVar70;
            thunk_FUN_0ee326a0(plStack_1380,uStack_1370 - (long)plStack_1380);
          }
          puVar50 = puStack_1398;
          puVar61 = puStack_1390;
          if (puStack_1398 != (undefined8 *)0x0) {
            for (; puVar50 != puVar61; puVar61 = puVar61 + -10) {
              if ((*(char *)(puVar61 + -1) == '\x01') && ((*(byte *)(puVar61 + -6) & 1) != 0)) {
                thunk_FUN_0ee326a0(puVar61[-4],puVar61[-6] & 0xfffffffffffffffe);
              }
            }
            puStack_1390 = puVar50;
            thunk_FUN_0ee326a0(puStack_1398,(long)puStack_1388 - (long)puStack_1398);
          }
        }
        if ((uStack_14a0 & 1) != 0) {
          thunk_FUN_0ee326a0(pauStack_1490,uStack_14a0 & 0xfffffffffffffffe);
        }
        if ((bStack_11d0 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_11c0,CONCAT71(uStack_11cf,bStack_11d0) & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_1240 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_1230,(ulong)uStack_1240 & 0xfffffffffffffffe);
        }
        func_0x048e65b0(&uStack_d38);
        pauVar58 = pauStack_12c8;
        pauStack_12d8 = (undefined1 (*) [16])&UNK_0f534768;
        if (pauStack_12c8 == (undefined1 (*) [16])0x0) {
          (*pauStack_12d0)[0] = 0;
        }
        else {
          (*pauStack_12d0)[0] = 0;
          LOCK();
          ppauVar72 = (undefined1 (**) [16])((long)*pauStack_12c8 + 8);
          pauVar66 = *ppauVar72;
          *ppauVar72 = (undefined1 (*) [16])((*ppauVar72)[-1] + 0xf);
          UNLOCK();
          if (pauVar66 == (undefined1 (*) [16])0x0) {
            (**(code **)(*(undefined1 (**) [16])*pauStack_12c8)[1])(pauStack_12c8);
            func_0x0412c2d0(pauVar58);
          }
        }
        lVar57 = lStack_1288;
        if (lStack_1288 != 0) {
          for (lVar79 = CONCAT62(uStack_127e,uStack_1280); lVar57 != lVar79; lVar79 = lVar79 + -0x38
              ) {
            if ((*(byte *)(lVar79 + -0x38) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar79 + -0x28),
                                 *(ulong *)(lVar79 + -0x38) & 0xfffffffffffffffe);
            }
          }
          uStack_1280 = (undefined2)lVar57;
          uStack_127e = (undefined6)((ulong)lVar57 >> 0x10);
          thunk_FUN_0ee326a0(lStack_1288,CONCAT62(uStack_1276,uStack_1278) - lStack_1288);
        }
        uStack_d38 = (undefined1 (*) [16])&uStack_12a8;
        func_0x048b0f50(&uStack_d38);
        if (pcStack_12c0 != (code *)0x0) {
          pcStack_12b8 = pcStack_12c0;
          thunk_FUN_0ee326a0(pcStack_12c0,lStack_12b0 - (long)pcStack_12c0);
        }
        func_0x09b00a70(&uStack_8c8);
        uVar65 = uVar65 + 1;
        if ((ulong)(((long)puStack_14b0 - (long)puStack_14b8 >> 5) * -0x70a3d70a3d70a3d7) <= uVar65)
        goto LAB_09b04e61;
      }
      FUN_04891200();
LAB_09b05111:
      func_0x04882e30();
LAB_09b05116:
      func_0x04882e30();
LAB_09b0511b:
      func_0x04882e30();
    }
    func_0x04882e30();
LAB_09b05125:
    iVar56 = func_0x04108328(&DAT_0f551de0);
    if (iVar56 != 0) {
      func_0x0490cab0(&DAT_0f551dc8);
      func_0x0410844d(&DAT_0f551de0);
    }
  } while( true );
}



/* ---- referenced strings ----
 * 0x12352f4  No runtime is present
 * 0x1235301   present
 * 0x13f776f  Error
 * 0x14e3da0  ::::::::::::::::
 * 0x14e9820  ::::::::
 * 0x14ea360          
 * 0x14eaaa0  <<<<<<<<
 */
