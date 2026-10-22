/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcaf03b0 (ELF vaddr 0xc9f03b0)
 * Label: caller-of-callee
 * Body:  [[0caf03b0, 0caf052f] [0caf074f, 0caf0b95] [0caf2a57, 0caf2af0] [0caf2b2f, 0caf2b7a]]
 * Ghidra: FUN_0caf03b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0caf03b0(long param_1,byte *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  short sVar1;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  long *plVar7;
  code *pcVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  byte *pbVar26;
  char cVar27;
  undefined1 uVar28;
  byte bVar29;
  byte bVar30;
  char cVar31;
  ushort uVar32;
  int iVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  ulong *puVar38;
  undefined8 uVar39;
  undefined8 *puVar40;
  undefined8 uVar41;
  long lVar42;
  short sVar43;
  int iVar44;
  ulong uVar45;
  short sVar46;
  long lVar47;
  ulong uVar48;
  long *plVar49;
  short sVar50;
  uint uVar51;
  ulong uVar52;
  long *plVar53;
  ulong uVar54;
  long lVar55;
  undefined *puVar56;
  bool bVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  short sVar66;
  undefined1 auVar65 [14];
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  ushort uVar78;
  ushort uVar79;
  ushort uVar80;
  ushort uVar81;
  ushort uVar82;
  ushort uVar83;
  ushort uVar84;
  ushort uVar85;
  ushort uVar86;
  ushort uVar87;
  ushort uVar88;
  ushort uVar89;
  ushort uVar90;
  ushort uVar91;
  ushort uVar92;
  ushort uVar93;
  ushort uVar94;
  ushort uVar95;
  ushort uVar96;
  ushort uVar97;
  ushort uVar98;
  ushort uVar99;
  undefined1 auVar100 [16];
  undefined4 uStack_4c39c;
  undefined *puStack_4c398;
  undefined8 uStack_4c390;
  undefined8 uStack_4c388;
  ulong uStack_4c380;
  ulong uStack_4c378;
  long lStack_4c370;
  ulong uStack_4c368;
  uint uStack_4c35c;
  long lStack_4c358;
  long lStack_4c350;
  long lStack_4c348;
  long lStack_4c340;
  undefined1 *apuStack_4c338 [4];
  undefined4 uStack_4c318;
  undefined4 uStack_4c314;
  ushort uStack_4c148;
  ushort uStack_4c146;
  ushort uStack_4c144;
  ushort uStack_4c142;
  ushort uStack_4c140;
  ushort uStack_4c13e;
  ushort uStack_4c13c;
  ushort uStack_4c13a;
  byte abStack_4c138 [257];
  byte bStack_4c037;
  ushort uStack_4c036;
  undefined4 uStack_4c034;
  ulong uStack_4c030;
  byte *pbStack_4c028;
  ulong uStack_48038;
  long *aplStack_48030 [61];
  ushort uStack_47e48;
  ushort uStack_47e46;
  ushort uStack_47e44;
  ushort uStack_47e42;
  ushort uStack_47e40;
  ushort uStack_47e3e;
  ushort uStack_47e3c;
  ushort uStack_47e3a;
  undefined4 auStack_400a8 [28];
  undefined8 uStack_40038;
  undefined8 uStack_40030;
  undefined8 uStack_40028;
  byte abStack_40020 [4];
  undefined4 uStack_4001c;
  undefined8 uStack_40018;
  undefined4 auStack_40010 [2];
  undefined8 uStack_40008;
  undefined8 uStack_40000;
  undefined8 uStack_3fff8;
  undefined8 uStack_3fff0;
  undefined8 uStack_3ffe8;
  undefined8 uStack_3ffe0;
  undefined8 uStack_3ffd8;
  undefined4 auStack_3ffd0 [2];
  undefined8 uStack_3ffc8;
  undefined8 uStack_3ffc0;
  undefined8 uStack_3ffb8;
  byte bStack_3fc58;
  byte bStack_3fc54;
  byte bStack_3fc50;
  byte bStack_3fc4c;
  byte bStack_3fc48;
  byte bStack_3fc44;
  byte bStack_3fc40;
  byte bStack_3fc3c;
  undefined1 auStack_38 [8];
  short sVar2;
  short sVar67;
  
  uStack_4c388 = param_4;
  uStack_4c380 = param_5;
  if (param_3 == 2 && *param_2 == 0x2f) {
    iVar33 = (int)(char)param_2[1];
    puStack_4c398 = &UNK_0ef9fd98;
    uStack_4c390 = 0;
    goto code_r0x0caf040b;
  }
  puStack_4c398 = &UNK_0ef9fd98;
  uStack_4c390 = 0;
  switch(*param_2 - 0x2b) {
  case 0:
    func_0x0ee11d90(&puStack_4c398,param_1 + 0xbd0,0x200);
    *(undefined2 *)(param_1 + 0xfd8) = 0;
    sVar50 = *(short *)(param_1 + 0xbd0);
    sVar46 = *(short *)(param_1 + 0xbd2);
    sVar43 = *(short *)(param_1 + 0xbd4);
    sVar2 = *(short *)(param_1 + 0xbd6);
    sVar1 = *(short *)(param_1 + 0xbd8);
    sVar66 = *(short *)(param_1 + 0xbda);
    sVar67 = *(short *)(param_1 + 0xbdc);
    sVar9 = *(short *)(param_1 + 0xbde);
    sVar10 = *(short *)(param_1 + 0xbe0);
    sVar11 = *(short *)(param_1 + 0xbe2);
    sVar12 = *(short *)(param_1 + 0xbe4);
    sVar13 = *(short *)(param_1 + 0xbe6);
    sVar14 = *(short *)(param_1 + 0xbe8);
    sVar15 = *(short *)(param_1 + 0xbea);
    sVar16 = *(short *)(param_1 + 0xbec);
    sVar17 = *(short *)(param_1 + 0xbee);
    sVar18 = *(short *)(param_1 + 0xbf0);
    sVar19 = *(short *)(param_1 + 0xbf2);
    sVar20 = *(short *)(param_1 + 0xbf4);
    sVar21 = *(short *)(param_1 + 0xbf6);
    sVar22 = *(short *)(param_1 + 0xbf8);
    sVar23 = *(short *)(param_1 + 0xbfa);
    sVar24 = *(short *)(param_1 + 0xbfc);
    sVar25 = *(short *)(param_1 + 0xbfe);
    uVar68 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar69 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar70 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar71 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar72 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar73 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar74 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar75 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xc00);
    sVar46 = *(short *)(param_1 + 0xc02);
    sVar43 = *(short *)(param_1 + 0xc04);
    sVar2 = *(short *)(param_1 + 0xc06);
    sVar1 = *(short *)(param_1 + 0xc08);
    sVar66 = *(short *)(param_1 + 0xc0a);
    sVar67 = *(short *)(param_1 + 0xc0c);
    sVar9 = *(short *)(param_1 + 0xc0e);
    uVar32 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar58 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar59 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar60 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar61 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar62 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar63 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar64 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xc10);
    sVar46 = *(short *)(param_1 + 0xc12);
    sVar43 = *(short *)(param_1 + 0xc14);
    sVar2 = *(short *)(param_1 + 0xc16);
    sVar1 = *(short *)(param_1 + 0xc18);
    sVar66 = *(short *)(param_1 + 0xc1a);
    sVar67 = *(short *)(param_1 + 0xc1c);
    sVar9 = *(short *)(param_1 + 0xc1e);
    sVar10 = *(short *)(param_1 + 0xc20);
    sVar11 = *(short *)(param_1 + 0xc22);
    sVar12 = *(short *)(param_1 + 0xc24);
    sVar13 = *(short *)(param_1 + 0xc26);
    sVar14 = *(short *)(param_1 + 0xc28);
    sVar15 = *(short *)(param_1 + 0xc2a);
    sVar16 = *(short *)(param_1 + 0xc2c);
    sVar17 = *(short *)(param_1 + 0xc2e);
    sVar18 = *(short *)(param_1 + 0xc30);
    sVar19 = *(short *)(param_1 + 0xc32);
    sVar20 = *(short *)(param_1 + 0xc34);
    sVar21 = *(short *)(param_1 + 0xc36);
    sVar22 = *(short *)(param_1 + 0xc38);
    sVar23 = *(short *)(param_1 + 0xc3a);
    sVar24 = *(short *)(param_1 + 0xc3c);
    sVar25 = *(short *)(param_1 + 0xc3e);
    uVar76 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar79 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar82 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar85 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar88 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar91 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar94 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar97 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    uVar77 = ((short)uVar76 < (short)uVar68) * uVar68 | ((short)uVar76 >= (short)uVar68) * uVar76;
    uVar80 = ((short)uVar79 < (short)uVar69) * uVar69 | ((short)uVar79 >= (short)uVar69) * uVar79;
    uVar83 = ((short)uVar82 < (short)uVar70) * uVar70 | ((short)uVar82 >= (short)uVar70) * uVar82;
    uVar86 = ((short)uVar85 < (short)uVar71) * uVar71 | ((short)uVar85 >= (short)uVar71) * uVar85;
    uVar89 = ((short)uVar88 < (short)uVar72) * uVar72 | ((short)uVar88 >= (short)uVar72) * uVar88;
    uVar92 = ((short)uVar91 < (short)uVar73) * uVar73 | ((short)uVar91 >= (short)uVar73) * uVar91;
    uVar95 = ((short)uVar94 < (short)uVar74) * uVar74 | ((short)uVar94 >= (short)uVar74) * uVar94;
    uVar98 = ((short)uVar97 < (short)uVar75) * uVar75 | ((short)uVar97 >= (short)uVar75) * uVar97;
    sVar50 = *(short *)(param_1 + 0xc40);
    sVar46 = *(short *)(param_1 + 0xc42);
    sVar43 = *(short *)(param_1 + 0xc44);
    sVar2 = *(short *)(param_1 + 0xc46);
    sVar1 = *(short *)(param_1 + 0xc48);
    sVar66 = *(short *)(param_1 + 0xc4a);
    sVar67 = *(short *)(param_1 + 0xc4c);
    sVar9 = *(short *)(param_1 + 0xc4e);
    uVar68 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar69 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar70 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar71 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar72 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar73 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar74 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar75 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    uVar68 = ((short)uVar68 < (short)uVar32) * uVar32 | ((short)uVar68 >= (short)uVar32) * uVar68;
    uVar69 = ((short)uVar69 < (short)uVar58) * uVar58 | ((short)uVar69 >= (short)uVar58) * uVar69;
    uVar70 = ((short)uVar70 < (short)uVar59) * uVar59 | ((short)uVar70 >= (short)uVar59) * uVar70;
    uVar71 = ((short)uVar71 < (short)uVar60) * uVar60 | ((short)uVar71 >= (short)uVar60) * uVar71;
    uVar72 = ((short)uVar72 < (short)uVar61) * uVar61 | ((short)uVar72 >= (short)uVar61) * uVar72;
    uVar73 = ((short)uVar73 < (short)uVar62) * uVar62 | ((short)uVar73 >= (short)uVar62) * uVar73;
    uVar74 = ((short)uVar74 < (short)uVar63) * uVar63 | ((short)uVar74 >= (short)uVar63) * uVar74;
    uVar75 = ((short)uVar75 < (short)uVar64) * uVar64 | ((short)uVar75 >= (short)uVar64) * uVar75;
    sVar50 = *(short *)(param_1 + 0xc50);
    sVar46 = *(short *)(param_1 + 0xc52);
    sVar43 = *(short *)(param_1 + 0xc54);
    sVar2 = *(short *)(param_1 + 0xc56);
    sVar1 = *(short *)(param_1 + 0xc58);
    sVar66 = *(short *)(param_1 + 0xc5a);
    sVar67 = *(short *)(param_1 + 0xc5c);
    sVar9 = *(short *)(param_1 + 0xc5e);
    sVar10 = *(short *)(param_1 + 0xc60);
    sVar11 = *(short *)(param_1 + 0xc62);
    sVar12 = *(short *)(param_1 + 0xc64);
    sVar13 = *(short *)(param_1 + 0xc66);
    sVar14 = *(short *)(param_1 + 0xc68);
    sVar15 = *(short *)(param_1 + 0xc6a);
    sVar16 = *(short *)(param_1 + 0xc6c);
    sVar17 = *(short *)(param_1 + 0xc6e);
    sVar18 = *(short *)(param_1 + 0xc70);
    sVar19 = *(short *)(param_1 + 0xc72);
    sVar20 = *(short *)(param_1 + 0xc74);
    sVar21 = *(short *)(param_1 + 0xc76);
    sVar22 = *(short *)(param_1 + 0xc78);
    sVar23 = *(short *)(param_1 + 0xc7a);
    sVar24 = *(short *)(param_1 + 0xc7c);
    sVar25 = *(short *)(param_1 + 0xc7e);
    uVar76 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar79 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar82 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar85 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar88 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar91 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar94 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar97 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xc80);
    sVar46 = *(short *)(param_1 + 0xc82);
    sVar43 = *(short *)(param_1 + 0xc84);
    sVar2 = *(short *)(param_1 + 0xc86);
    sVar1 = *(short *)(param_1 + 0xc88);
    sVar66 = *(short *)(param_1 + 0xc8a);
    sVar67 = *(short *)(param_1 + 0xc8c);
    sVar9 = *(short *)(param_1 + 0xc8e);
    uVar32 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar58 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar59 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar60 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar61 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar62 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar63 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar64 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xc90);
    sVar46 = *(short *)(param_1 + 0xc92);
    sVar43 = *(short *)(param_1 + 0xc94);
    sVar2 = *(short *)(param_1 + 0xc96);
    sVar1 = *(short *)(param_1 + 0xc98);
    sVar66 = *(short *)(param_1 + 0xc9a);
    sVar67 = *(short *)(param_1 + 0xc9c);
    sVar9 = *(short *)(param_1 + 0xc9e);
    uVar76 = (sVar50 < (short)uVar76) * uVar76 | (ushort)(sVar50 >= (short)uVar76) * sVar50;
    uVar79 = (sVar46 < (short)uVar79) * uVar79 | (ushort)(sVar46 >= (short)uVar79) * sVar46;
    uVar82 = (sVar43 < (short)uVar82) * uVar82 | (ushort)(sVar43 >= (short)uVar82) * sVar43;
    uVar85 = (sVar2 < (short)uVar85) * uVar85 | (ushort)(sVar2 >= (short)uVar85) * sVar2;
    uVar88 = (sVar1 < (short)uVar88) * uVar88 | (ushort)(sVar1 >= (short)uVar88) * sVar1;
    uVar91 = (sVar66 < (short)uVar91) * uVar91 | (ushort)(sVar66 >= (short)uVar91) * sVar66;
    uVar94 = (sVar67 < (short)uVar94) * uVar94 | (ushort)(sVar67 >= (short)uVar94) * sVar67;
    uVar97 = (sVar9 < (short)uVar97) * uVar97 | (ushort)(sVar9 >= (short)uVar97) * sVar9;
    uVar76 = ((short)uVar76 < (short)uVar77) * uVar77 | ((short)uVar76 >= (short)uVar77) * uVar76;
    uVar79 = ((short)uVar79 < (short)uVar80) * uVar80 | ((short)uVar79 >= (short)uVar80) * uVar79;
    uVar82 = ((short)uVar82 < (short)uVar83) * uVar83 | ((short)uVar82 >= (short)uVar83) * uVar82;
    uVar85 = ((short)uVar85 < (short)uVar86) * uVar86 | ((short)uVar85 >= (short)uVar86) * uVar85;
    uVar88 = ((short)uVar88 < (short)uVar89) * uVar89 | ((short)uVar88 >= (short)uVar89) * uVar88;
    uVar91 = ((short)uVar91 < (short)uVar92) * uVar92 | ((short)uVar91 >= (short)uVar92) * uVar91;
    uVar94 = ((short)uVar94 < (short)uVar95) * uVar95 | ((short)uVar94 >= (short)uVar95) * uVar94;
    uVar97 = ((short)uVar97 < (short)uVar98) * uVar98 | ((short)uVar97 >= (short)uVar98) * uVar97;
    sVar50 = *(short *)(param_1 + 0xca0);
    sVar46 = *(short *)(param_1 + 0xca2);
    sVar43 = *(short *)(param_1 + 0xca4);
    sVar2 = *(short *)(param_1 + 0xca6);
    sVar1 = *(short *)(param_1 + 0xca8);
    sVar66 = *(short *)(param_1 + 0xcaa);
    sVar67 = *(short *)(param_1 + 0xcac);
    sVar9 = *(short *)(param_1 + 0xcae);
    uVar32 = (sVar50 < (short)uVar32) * uVar32 | (ushort)(sVar50 >= (short)uVar32) * sVar50;
    uVar58 = (sVar46 < (short)uVar58) * uVar58 | (ushort)(sVar46 >= (short)uVar58) * sVar46;
    uVar59 = (sVar43 < (short)uVar59) * uVar59 | (ushort)(sVar43 >= (short)uVar59) * sVar43;
    uVar60 = (sVar2 < (short)uVar60) * uVar60 | (ushort)(sVar2 >= (short)uVar60) * sVar2;
    uVar61 = (sVar1 < (short)uVar61) * uVar61 | (ushort)(sVar1 >= (short)uVar61) * sVar1;
    uVar62 = (sVar66 < (short)uVar62) * uVar62 | (ushort)(sVar66 >= (short)uVar62) * sVar66;
    uVar63 = (sVar67 < (short)uVar63) * uVar63 | (ushort)(sVar67 >= (short)uVar63) * sVar67;
    uVar64 = (sVar9 < (short)uVar64) * uVar64 | (ushort)(sVar9 >= (short)uVar64) * sVar9;
    uVar77 = ((short)uVar32 < (short)uVar68) * uVar68 | ((short)uVar32 >= (short)uVar68) * uVar32;
    uVar80 = ((short)uVar58 < (short)uVar69) * uVar69 | ((short)uVar58 >= (short)uVar69) * uVar58;
    uVar83 = ((short)uVar59 < (short)uVar70) * uVar70 | ((short)uVar59 >= (short)uVar70) * uVar59;
    uVar86 = ((short)uVar60 < (short)uVar71) * uVar71 | ((short)uVar60 >= (short)uVar71) * uVar60;
    uVar89 = ((short)uVar61 < (short)uVar72) * uVar72 | ((short)uVar61 >= (short)uVar72) * uVar61;
    uVar92 = ((short)uVar62 < (short)uVar73) * uVar73 | ((short)uVar62 >= (short)uVar73) * uVar62;
    uVar95 = ((short)uVar63 < (short)uVar74) * uVar74 | ((short)uVar63 >= (short)uVar74) * uVar63;
    uVar98 = ((short)uVar64 < (short)uVar75) * uVar75 | ((short)uVar64 >= (short)uVar75) * uVar64;
    sVar50 = *(short *)(param_1 + 0xcb0);
    sVar46 = *(short *)(param_1 + 0xcb2);
    sVar43 = *(short *)(param_1 + 0xcb4);
    sVar2 = *(short *)(param_1 + 0xcb6);
    sVar1 = *(short *)(param_1 + 0xcb8);
    sVar66 = *(short *)(param_1 + 0xcba);
    sVar67 = *(short *)(param_1 + 0xcbc);
    sVar9 = *(short *)(param_1 + 0xcbe);
    sVar10 = *(short *)(param_1 + 0xcc0);
    sVar11 = *(short *)(param_1 + 0xcc2);
    sVar12 = *(short *)(param_1 + 0xcc4);
    sVar13 = *(short *)(param_1 + 0xcc6);
    sVar14 = *(short *)(param_1 + 0xcc8);
    sVar15 = *(short *)(param_1 + 0xcca);
    sVar16 = *(short *)(param_1 + 0xccc);
    sVar17 = *(short *)(param_1 + 0xcce);
    sVar18 = *(short *)(param_1 + 0xcd0);
    sVar19 = *(short *)(param_1 + 0xcd2);
    sVar20 = *(short *)(param_1 + 0xcd4);
    sVar21 = *(short *)(param_1 + 0xcd6);
    sVar22 = *(short *)(param_1 + 0xcd8);
    sVar23 = *(short *)(param_1 + 0xcda);
    sVar24 = *(short *)(param_1 + 0xcdc);
    sVar25 = *(short *)(param_1 + 0xcde);
    uVar68 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar69 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar70 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar71 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar72 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar73 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar74 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar75 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xce0);
    sVar46 = *(short *)(param_1 + 0xce2);
    sVar43 = *(short *)(param_1 + 0xce4);
    sVar2 = *(short *)(param_1 + 0xce6);
    sVar1 = *(short *)(param_1 + 0xce8);
    sVar66 = *(short *)(param_1 + 0xcea);
    sVar67 = *(short *)(param_1 + 0xcec);
    sVar9 = *(short *)(param_1 + 0xcee);
    uVar32 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar58 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar59 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar60 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar61 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar62 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar63 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar64 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xcf0);
    sVar46 = *(short *)(param_1 + 0xcf2);
    sVar43 = *(short *)(param_1 + 0xcf4);
    sVar2 = *(short *)(param_1 + 0xcf6);
    sVar1 = *(short *)(param_1 + 0xcf8);
    sVar66 = *(short *)(param_1 + 0xcfa);
    sVar67 = *(short *)(param_1 + 0xcfc);
    sVar9 = *(short *)(param_1 + 0xcfe);
    uVar68 = (sVar50 < (short)uVar68) * uVar68 | (ushort)(sVar50 >= (short)uVar68) * sVar50;
    uVar69 = (sVar46 < (short)uVar69) * uVar69 | (ushort)(sVar46 >= (short)uVar69) * sVar46;
    uVar70 = (sVar43 < (short)uVar70) * uVar70 | (ushort)(sVar43 >= (short)uVar70) * sVar43;
    uVar71 = (sVar2 < (short)uVar71) * uVar71 | (ushort)(sVar2 >= (short)uVar71) * sVar2;
    uVar72 = (sVar1 < (short)uVar72) * uVar72 | (ushort)(sVar1 >= (short)uVar72) * sVar1;
    uVar73 = (sVar66 < (short)uVar73) * uVar73 | (ushort)(sVar66 >= (short)uVar73) * sVar66;
    uVar74 = (sVar67 < (short)uVar74) * uVar74 | (ushort)(sVar67 >= (short)uVar74) * sVar67;
    uVar75 = (sVar9 < (short)uVar75) * uVar75 | (ushort)(sVar9 >= (short)uVar75) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd00);
    sVar46 = *(short *)(param_1 + 0xd02);
    sVar43 = *(short *)(param_1 + 0xd04);
    sVar2 = *(short *)(param_1 + 0xd06);
    sVar1 = *(short *)(param_1 + 0xd08);
    sVar66 = *(short *)(param_1 + 0xd0a);
    sVar67 = *(short *)(param_1 + 0xd0c);
    sVar9 = *(short *)(param_1 + 0xd0e);
    uVar78 = (sVar50 < (short)uVar32) * uVar32 | (ushort)(sVar50 >= (short)uVar32) * sVar50;
    uVar81 = (sVar46 < (short)uVar58) * uVar58 | (ushort)(sVar46 >= (short)uVar58) * sVar46;
    uVar84 = (sVar43 < (short)uVar59) * uVar59 | (ushort)(sVar43 >= (short)uVar59) * sVar43;
    uVar87 = (sVar2 < (short)uVar60) * uVar60 | (ushort)(sVar2 >= (short)uVar60) * sVar2;
    uVar90 = (sVar1 < (short)uVar61) * uVar61 | (ushort)(sVar1 >= (short)uVar61) * sVar1;
    uVar93 = (sVar66 < (short)uVar62) * uVar62 | (ushort)(sVar66 >= (short)uVar62) * sVar66;
    uVar96 = (sVar67 < (short)uVar63) * uVar63 | (ushort)(sVar67 >= (short)uVar63) * sVar67;
    uVar99 = (sVar9 < (short)uVar64) * uVar64 | (ushort)(sVar9 >= (short)uVar64) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd10);
    sVar46 = *(short *)(param_1 + 0xd12);
    sVar43 = *(short *)(param_1 + 0xd14);
    sVar2 = *(short *)(param_1 + 0xd16);
    sVar1 = *(short *)(param_1 + 0xd18);
    sVar66 = *(short *)(param_1 + 0xd1a);
    sVar67 = *(short *)(param_1 + 0xd1c);
    sVar9 = *(short *)(param_1 + 0xd1e);
    uVar32 = (sVar50 < (short)uVar68) * uVar68 | (ushort)(sVar50 >= (short)uVar68) * sVar50;
    uVar58 = (sVar46 < (short)uVar69) * uVar69 | (ushort)(sVar46 >= (short)uVar69) * sVar46;
    uVar59 = (sVar43 < (short)uVar70) * uVar70 | (ushort)(sVar43 >= (short)uVar70) * sVar43;
    uVar60 = (sVar2 < (short)uVar71) * uVar71 | (ushort)(sVar2 >= (short)uVar71) * sVar2;
    uVar61 = (sVar1 < (short)uVar72) * uVar72 | (ushort)(sVar1 >= (short)uVar72) * sVar1;
    uVar62 = (sVar66 < (short)uVar73) * uVar73 | (ushort)(sVar66 >= (short)uVar73) * sVar66;
    uVar63 = (sVar67 < (short)uVar74) * uVar74 | (ushort)(sVar67 >= (short)uVar74) * sVar67;
    uVar64 = (sVar9 < (short)uVar75) * uVar75 | (ushort)(sVar9 >= (short)uVar75) * sVar9;
    uVar32 = ((short)uVar32 < (short)uVar76) * uVar76 | ((short)uVar32 >= (short)uVar76) * uVar32;
    uVar58 = ((short)uVar58 < (short)uVar79) * uVar79 | ((short)uVar58 >= (short)uVar79) * uVar58;
    uVar59 = ((short)uVar59 < (short)uVar82) * uVar82 | ((short)uVar59 >= (short)uVar82) * uVar59;
    uVar60 = ((short)uVar60 < (short)uVar85) * uVar85 | ((short)uVar60 >= (short)uVar85) * uVar60;
    uVar61 = ((short)uVar61 < (short)uVar88) * uVar88 | ((short)uVar61 >= (short)uVar88) * uVar61;
    uVar62 = ((short)uVar62 < (short)uVar91) * uVar91 | ((short)uVar62 >= (short)uVar91) * uVar62;
    uVar63 = ((short)uVar63 < (short)uVar94) * uVar94 | ((short)uVar63 >= (short)uVar94) * uVar63;
    uVar64 = ((short)uVar64 < (short)uVar97) * uVar97 | ((short)uVar64 >= (short)uVar97) * uVar64;
    sVar50 = *(short *)(param_1 + 0xd20);
    sVar46 = *(short *)(param_1 + 0xd22);
    sVar43 = *(short *)(param_1 + 0xd24);
    sVar2 = *(short *)(param_1 + 0xd26);
    sVar1 = *(short *)(param_1 + 0xd28);
    sVar66 = *(short *)(param_1 + 0xd2a);
    sVar67 = *(short *)(param_1 + 0xd2c);
    sVar9 = *(short *)(param_1 + 0xd2e);
    uVar68 = (sVar50 < (short)uVar78) * uVar78 | (ushort)(sVar50 >= (short)uVar78) * sVar50;
    uVar69 = (sVar46 < (short)uVar81) * uVar81 | (ushort)(sVar46 >= (short)uVar81) * sVar46;
    uVar70 = (sVar43 < (short)uVar84) * uVar84 | (ushort)(sVar43 >= (short)uVar84) * sVar43;
    uVar71 = (sVar2 < (short)uVar87) * uVar87 | (ushort)(sVar2 >= (short)uVar87) * sVar2;
    uVar72 = (sVar1 < (short)uVar90) * uVar90 | (ushort)(sVar1 >= (short)uVar90) * sVar1;
    uVar73 = (sVar66 < (short)uVar93) * uVar93 | (ushort)(sVar66 >= (short)uVar93) * sVar66;
    uVar74 = (sVar67 < (short)uVar96) * uVar96 | (ushort)(sVar67 >= (short)uVar96) * sVar67;
    uVar75 = (sVar9 < (short)uVar99) * uVar99 | (ushort)(sVar9 >= (short)uVar99) * sVar9;
    uVar68 = ((short)uVar68 < (short)uVar77) * uVar77 | ((short)uVar68 >= (short)uVar77) * uVar68;
    uVar69 = ((short)uVar69 < (short)uVar80) * uVar80 | ((short)uVar69 >= (short)uVar80) * uVar69;
    uVar70 = ((short)uVar70 < (short)uVar83) * uVar83 | ((short)uVar70 >= (short)uVar83) * uVar70;
    uVar71 = ((short)uVar71 < (short)uVar86) * uVar86 | ((short)uVar71 >= (short)uVar86) * uVar71;
    uVar72 = ((short)uVar72 < (short)uVar89) * uVar89 | ((short)uVar72 >= (short)uVar89) * uVar72;
    uVar73 = ((short)uVar73 < (short)uVar92) * uVar92 | ((short)uVar73 >= (short)uVar92) * uVar73;
    uVar74 = ((short)uVar74 < (short)uVar95) * uVar95 | ((short)uVar74 >= (short)uVar95) * uVar74;
    uVar75 = ((short)uVar75 < (short)uVar98) * uVar98 | ((short)uVar75 >= (short)uVar98) * uVar75;
    sVar50 = *(short *)(param_1 + 0xd30);
    sVar46 = *(short *)(param_1 + 0xd32);
    sVar43 = *(short *)(param_1 + 0xd34);
    sVar2 = *(short *)(param_1 + 0xd36);
    sVar1 = *(short *)(param_1 + 0xd38);
    sVar66 = *(short *)(param_1 + 0xd3a);
    sVar67 = *(short *)(param_1 + 0xd3c);
    sVar9 = *(short *)(param_1 + 0xd3e);
    sVar10 = *(short *)(param_1 + 0xd40);
    sVar11 = *(short *)(param_1 + 0xd42);
    sVar12 = *(short *)(param_1 + 0xd44);
    sVar13 = *(short *)(param_1 + 0xd46);
    sVar14 = *(short *)(param_1 + 0xd48);
    sVar15 = *(short *)(param_1 + 0xd4a);
    sVar16 = *(short *)(param_1 + 0xd4c);
    sVar17 = *(short *)(param_1 + 0xd4e);
    sVar18 = *(short *)(param_1 + 0xd50);
    sVar19 = *(short *)(param_1 + 0xd52);
    sVar20 = *(short *)(param_1 + 0xd54);
    sVar21 = *(short *)(param_1 + 0xd56);
    sVar22 = *(short *)(param_1 + 0xd58);
    sVar23 = *(short *)(param_1 + 0xd5a);
    sVar24 = *(short *)(param_1 + 0xd5c);
    sVar25 = *(short *)(param_1 + 0xd5e);
    uVar77 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar80 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar83 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar86 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar89 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar92 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar95 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar98 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xd60);
    sVar46 = *(short *)(param_1 + 0xd62);
    sVar43 = *(short *)(param_1 + 0xd64);
    sVar2 = *(short *)(param_1 + 0xd66);
    sVar1 = *(short *)(param_1 + 0xd68);
    sVar66 = *(short *)(param_1 + 0xd6a);
    sVar67 = *(short *)(param_1 + 0xd6c);
    sVar9 = *(short *)(param_1 + 0xd6e);
    uVar76 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar79 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar82 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar85 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar88 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar91 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar94 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar97 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd70);
    sVar46 = *(short *)(param_1 + 0xd72);
    sVar43 = *(short *)(param_1 + 0xd74);
    sVar2 = *(short *)(param_1 + 0xd76);
    sVar1 = *(short *)(param_1 + 0xd78);
    sVar66 = *(short *)(param_1 + 0xd7a);
    sVar67 = *(short *)(param_1 + 0xd7c);
    sVar9 = *(short *)(param_1 + 0xd7e);
    uVar77 = (sVar50 < (short)uVar77) * uVar77 | (ushort)(sVar50 >= (short)uVar77) * sVar50;
    uVar80 = (sVar46 < (short)uVar80) * uVar80 | (ushort)(sVar46 >= (short)uVar80) * sVar46;
    uVar83 = (sVar43 < (short)uVar83) * uVar83 | (ushort)(sVar43 >= (short)uVar83) * sVar43;
    uVar86 = (sVar2 < (short)uVar86) * uVar86 | (ushort)(sVar2 >= (short)uVar86) * sVar2;
    uVar89 = (sVar1 < (short)uVar89) * uVar89 | (ushort)(sVar1 >= (short)uVar89) * sVar1;
    uVar92 = (sVar66 < (short)uVar92) * uVar92 | (ushort)(sVar66 >= (short)uVar92) * sVar66;
    uVar95 = (sVar67 < (short)uVar95) * uVar95 | (ushort)(sVar67 >= (short)uVar95) * sVar67;
    uVar98 = (sVar9 < (short)uVar98) * uVar98 | (ushort)(sVar9 >= (short)uVar98) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd80);
    sVar46 = *(short *)(param_1 + 0xd82);
    sVar43 = *(short *)(param_1 + 0xd84);
    sVar2 = *(short *)(param_1 + 0xd86);
    sVar1 = *(short *)(param_1 + 0xd88);
    sVar66 = *(short *)(param_1 + 0xd8a);
    sVar67 = *(short *)(param_1 + 0xd8c);
    sVar9 = *(short *)(param_1 + 0xd8e);
    uVar78 = (sVar50 < (short)uVar76) * uVar76 | (ushort)(sVar50 >= (short)uVar76) * sVar50;
    uVar81 = (sVar46 < (short)uVar79) * uVar79 | (ushort)(sVar46 >= (short)uVar79) * sVar46;
    uVar84 = (sVar43 < (short)uVar82) * uVar82 | (ushort)(sVar43 >= (short)uVar82) * sVar43;
    uVar87 = (sVar2 < (short)uVar85) * uVar85 | (ushort)(sVar2 >= (short)uVar85) * sVar2;
    uVar90 = (sVar1 < (short)uVar88) * uVar88 | (ushort)(sVar1 >= (short)uVar88) * sVar1;
    uVar93 = (sVar66 < (short)uVar91) * uVar91 | (ushort)(sVar66 >= (short)uVar91) * sVar66;
    uVar96 = (sVar67 < (short)uVar94) * uVar94 | (ushort)(sVar67 >= (short)uVar94) * sVar67;
    uVar99 = (sVar9 < (short)uVar97) * uVar97 | (ushort)(sVar9 >= (short)uVar97) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd90);
    sVar46 = *(short *)(param_1 + 0xd92);
    sVar43 = *(short *)(param_1 + 0xd94);
    sVar2 = *(short *)(param_1 + 0xd96);
    sVar1 = *(short *)(param_1 + 0xd98);
    sVar66 = *(short *)(param_1 + 0xd9a);
    sVar67 = *(short *)(param_1 + 0xd9c);
    sVar9 = *(short *)(param_1 + 0xd9e);
    uVar76 = (sVar50 < (short)uVar77) * uVar77 | (ushort)(sVar50 >= (short)uVar77) * sVar50;
    uVar79 = (sVar46 < (short)uVar80) * uVar80 | (ushort)(sVar46 >= (short)uVar80) * sVar46;
    uVar82 = (sVar43 < (short)uVar83) * uVar83 | (ushort)(sVar43 >= (short)uVar83) * sVar43;
    uVar85 = (sVar2 < (short)uVar86) * uVar86 | (ushort)(sVar2 >= (short)uVar86) * sVar2;
    uVar88 = (sVar1 < (short)uVar89) * uVar89 | (ushort)(sVar1 >= (short)uVar89) * sVar1;
    uVar91 = (sVar66 < (short)uVar92) * uVar92 | (ushort)(sVar66 >= (short)uVar92) * sVar66;
    uVar94 = (sVar67 < (short)uVar95) * uVar95 | (ushort)(sVar67 >= (short)uVar95) * sVar67;
    uVar97 = (sVar9 < (short)uVar98) * uVar98 | (ushort)(sVar9 >= (short)uVar98) * sVar9;
    sVar50 = *(short *)(param_1 + 0xda0);
    sVar46 = *(short *)(param_1 + 0xda2);
    sVar43 = *(short *)(param_1 + 0xda4);
    sVar2 = *(short *)(param_1 + 0xda6);
    sVar1 = *(short *)(param_1 + 0xda8);
    sVar66 = *(short *)(param_1 + 0xdaa);
    sVar67 = *(short *)(param_1 + 0xdac);
    sVar9 = *(short *)(param_1 + 0xdae);
    uVar77 = (sVar50 < (short)uVar78) * uVar78 | (ushort)(sVar50 >= (short)uVar78) * sVar50;
    uVar80 = (sVar46 < (short)uVar81) * uVar81 | (ushort)(sVar46 >= (short)uVar81) * sVar46;
    uVar83 = (sVar43 < (short)uVar84) * uVar84 | (ushort)(sVar43 >= (short)uVar84) * sVar43;
    uVar86 = (sVar2 < (short)uVar87) * uVar87 | (ushort)(sVar2 >= (short)uVar87) * sVar2;
    uVar89 = (sVar1 < (short)uVar90) * uVar90 | (ushort)(sVar1 >= (short)uVar90) * sVar1;
    uVar92 = (sVar66 < (short)uVar93) * uVar93 | (ushort)(sVar66 >= (short)uVar93) * sVar66;
    uVar95 = (sVar67 < (short)uVar96) * uVar96 | (ushort)(sVar67 >= (short)uVar96) * sVar67;
    uVar98 = (sVar9 < (short)uVar99) * uVar99 | (ushort)(sVar9 >= (short)uVar99) * sVar9;
    sVar50 = *(short *)(param_1 + 0xdb0);
    sVar46 = *(short *)(param_1 + 0xdb2);
    sVar43 = *(short *)(param_1 + 0xdb4);
    sVar2 = *(short *)(param_1 + 0xdb6);
    sVar1 = *(short *)(param_1 + 0xdb8);
    sVar66 = *(short *)(param_1 + 0xdba);
    sVar67 = *(short *)(param_1 + 0xdbc);
    sVar9 = *(short *)(param_1 + 0xdbe);
    uVar76 = (sVar50 < (short)uVar76) * uVar76 | (ushort)(sVar50 >= (short)uVar76) * sVar50;
    uVar79 = (sVar46 < (short)uVar79) * uVar79 | (ushort)(sVar46 >= (short)uVar79) * sVar46;
    uVar82 = (sVar43 < (short)uVar82) * uVar82 | (ushort)(sVar43 >= (short)uVar82) * sVar43;
    uVar85 = (sVar2 < (short)uVar85) * uVar85 | (ushort)(sVar2 >= (short)uVar85) * sVar2;
    uVar88 = (sVar1 < (short)uVar88) * uVar88 | (ushort)(sVar1 >= (short)uVar88) * sVar1;
    uVar91 = (sVar66 < (short)uVar91) * uVar91 | (ushort)(sVar66 >= (short)uVar91) * sVar66;
    uVar94 = (sVar67 < (short)uVar94) * uVar94 | (ushort)(sVar67 >= (short)uVar94) * sVar67;
    uVar97 = (sVar9 < (short)uVar97) * uVar97 | (ushort)(sVar9 >= (short)uVar97) * sVar9;
    uVar76 = ((short)uVar76 < (short)uVar32) * uVar32 | ((short)uVar76 >= (short)uVar32) * uVar76;
    uVar79 = ((short)uVar79 < (short)uVar58) * uVar58 | ((short)uVar79 >= (short)uVar58) * uVar79;
    uVar82 = ((short)uVar82 < (short)uVar59) * uVar59 | ((short)uVar82 >= (short)uVar59) * uVar82;
    uVar85 = ((short)uVar85 < (short)uVar60) * uVar60 | ((short)uVar85 >= (short)uVar60) * uVar85;
    uVar88 = ((short)uVar88 < (short)uVar61) * uVar61 | ((short)uVar88 >= (short)uVar61) * uVar88;
    uVar91 = ((short)uVar91 < (short)uVar62) * uVar62 | ((short)uVar91 >= (short)uVar62) * uVar91;
    uVar94 = ((short)uVar94 < (short)uVar63) * uVar63 | ((short)uVar94 >= (short)uVar63) * uVar94;
    uVar97 = ((short)uVar97 < (short)uVar64) * uVar64 | ((short)uVar97 >= (short)uVar64) * uVar97;
    sVar50 = *(short *)(param_1 + 0xdc0);
    sVar46 = *(short *)(param_1 + 0xdc2);
    sVar43 = *(short *)(param_1 + 0xdc4);
    sVar2 = *(short *)(param_1 + 0xdc6);
    sVar1 = *(short *)(param_1 + 0xdc8);
    sVar66 = *(short *)(param_1 + 0xdca);
    sVar67 = *(short *)(param_1 + 0xdcc);
    sVar9 = *(short *)(param_1 + 0xdce);
    uVar32 = (sVar50 < (short)uVar77) * uVar77 | (ushort)(sVar50 >= (short)uVar77) * sVar50;
    uVar58 = (sVar46 < (short)uVar80) * uVar80 | (ushort)(sVar46 >= (short)uVar80) * sVar46;
    uVar59 = (sVar43 < (short)uVar83) * uVar83 | (ushort)(sVar43 >= (short)uVar83) * sVar43;
    uVar60 = (sVar2 < (short)uVar86) * uVar86 | (ushort)(sVar2 >= (short)uVar86) * sVar2;
    uVar61 = (sVar1 < (short)uVar89) * uVar89 | (ushort)(sVar1 >= (short)uVar89) * sVar1;
    uVar62 = (sVar66 < (short)uVar92) * uVar92 | (ushort)(sVar66 >= (short)uVar92) * sVar66;
    uVar63 = (sVar67 < (short)uVar95) * uVar95 | (ushort)(sVar67 >= (short)uVar95) * sVar67;
    uVar64 = (sVar9 < (short)uVar98) * uVar98 | (ushort)(sVar9 >= (short)uVar98) * sVar9;
    uVar32 = ((short)uVar32 < (short)uVar68) * uVar68 | ((short)uVar32 >= (short)uVar68) * uVar32;
    uVar58 = ((short)uVar58 < (short)uVar69) * uVar69 | ((short)uVar58 >= (short)uVar69) * uVar58;
    uVar59 = ((short)uVar59 < (short)uVar70) * uVar70 | ((short)uVar59 >= (short)uVar70) * uVar59;
    uVar60 = ((short)uVar60 < (short)uVar71) * uVar71 | ((short)uVar60 >= (short)uVar71) * uVar60;
    uVar61 = ((short)uVar61 < (short)uVar72) * uVar72 | ((short)uVar61 >= (short)uVar72) * uVar61;
    uVar62 = ((short)uVar62 < (short)uVar73) * uVar73 | ((short)uVar62 >= (short)uVar73) * uVar62;
    uVar63 = ((short)uVar63 < (short)uVar74) * uVar74 | ((short)uVar63 >= (short)uVar74) * uVar63;
    uVar64 = ((short)uVar64 < (short)uVar75) * uVar75 | ((short)uVar64 >= (short)uVar75) * uVar64;
    uVar32 = ((short)uVar32 < (short)uVar76) * uVar76 | ((short)uVar32 >= (short)uVar76) * uVar32;
    uVar58 = ((short)uVar58 < (short)uVar79) * uVar79 | ((short)uVar58 >= (short)uVar79) * uVar58;
    uVar59 = ((short)uVar59 < (short)uVar82) * uVar82 | ((short)uVar59 >= (short)uVar82) * uVar59;
    uVar60 = ((short)uVar60 < (short)uVar85) * uVar85 | ((short)uVar60 >= (short)uVar85) * uVar60;
    uVar61 = ((short)uVar61 < (short)uVar88) * uVar88 | ((short)uVar61 >= (short)uVar88) * uVar61;
    uVar62 = ((short)uVar62 < (short)uVar91) * uVar91 | ((short)uVar62 >= (short)uVar91) * uVar62;
    uVar63 = ((short)uVar63 < (short)uVar94) * uVar94 | ((short)uVar63 >= (short)uVar94) * uVar63;
    uVar64 = ((short)uVar64 < (short)uVar97) * uVar97 | ((short)uVar64 >= (short)uVar97) * uVar64;
    sVar1 = (0 < (short)uVar32) * uVar32;
    auVar65 = SUB1614((undefined1  [16])0x0,2);
    sVar50 = (0 < (short)uVar58) * uVar58;
    sVar46 = (0 < (short)uVar59) * uVar59;
    sVar43 = (0 < (short)uVar60) * uVar60;
    sVar2 = (0 < (short)uVar61) * uVar61;
    sVar66 = auVar65._8_2_;
    uVar58 = (sVar66 < (short)uVar62) * uVar62 | (ushort)(sVar66 >= (short)uVar62) * sVar66;
    sVar66 = auVar65._10_2_;
    sVar67 = auVar65._12_2_;
    uVar59 = (sVar66 < (short)uVar63) * uVar63 | (ushort)(sVar66 >= (short)uVar63) * sVar66;
    uVar60 = (sVar67 < (short)uVar64) * uVar64 | (ushort)(sVar67 >= (short)uVar64) * sVar67;
    uVar32 = (ushort)(sVar2 < sVar1) * sVar1 | (ushort)(sVar2 >= sVar1) * sVar2;
    uVar58 = (ushort)((short)uVar58 < sVar50) * sVar50 | ((short)uVar58 >= sVar50) * uVar58;
    uVar59 = (ushort)((short)uVar59 < sVar46) * sVar46 | ((short)uVar59 >= sVar46) * uVar59;
    uVar60 = (ushort)((short)uVar60 < sVar43) * sVar43 | ((short)uVar60 >= sVar43) * uVar60;
    uVar32 = ((short)uVar59 < (short)uVar32) * uVar32 | ((short)uVar59 >= (short)uVar32) * uVar59;
    uVar58 = ((short)uVar60 < (short)uVar58) * uVar58 | ((short)uVar60 >= (short)uVar58) * uVar60;
    *(ushort *)(param_1 + 0xfd8) =
         ((short)uVar58 < (short)uVar32) * uVar32 | ((short)uVar58 >= (short)uVar32) * uVar58;
    if (*(char *)(param_1 + 0x110b) == '\x01') {
      uVar39 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
      func_0x0cae9f40(param_1,&puStack_4c398,uVar39);
    }
    else {
      func_0x0caea1c0(param_1,&puStack_4c398);
    }
    func_0x0cae88c0(param_1);
    *(undefined1 *)(param_1 + 0x110c) = 1;
    break;
  case 2:
    memset(&uStack_40038,0,0x200);
    func_0x0ee11d90(&puStack_4c398,&uStack_40038,0x200);
    func_0x0eee2f00(param_1 + 0xbd0,&uStack_40038,0x200);
    *(undefined2 *)(param_1 + 0xfd8) = 0;
    sVar50 = *(short *)(param_1 + 0xbd0);
    sVar46 = *(short *)(param_1 + 0xbd2);
    sVar43 = *(short *)(param_1 + 0xbd4);
    sVar2 = *(short *)(param_1 + 0xbd6);
    sVar1 = *(short *)(param_1 + 0xbd8);
    sVar66 = *(short *)(param_1 + 0xbda);
    sVar67 = *(short *)(param_1 + 0xbdc);
    sVar9 = *(short *)(param_1 + 0xbde);
    sVar10 = *(short *)(param_1 + 0xbe0);
    sVar11 = *(short *)(param_1 + 0xbe2);
    sVar12 = *(short *)(param_1 + 0xbe4);
    sVar13 = *(short *)(param_1 + 0xbe6);
    sVar14 = *(short *)(param_1 + 0xbe8);
    sVar15 = *(short *)(param_1 + 0xbea);
    sVar16 = *(short *)(param_1 + 0xbec);
    sVar17 = *(short *)(param_1 + 0xbee);
    sVar18 = *(short *)(param_1 + 0xbf0);
    sVar19 = *(short *)(param_1 + 0xbf2);
    sVar20 = *(short *)(param_1 + 0xbf4);
    sVar21 = *(short *)(param_1 + 0xbf6);
    sVar22 = *(short *)(param_1 + 0xbf8);
    sVar23 = *(short *)(param_1 + 0xbfa);
    sVar24 = *(short *)(param_1 + 0xbfc);
    sVar25 = *(short *)(param_1 + 0xbfe);
    uVar68 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar69 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar70 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar71 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar72 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar73 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar74 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar75 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xc00);
    sVar46 = *(short *)(param_1 + 0xc02);
    sVar43 = *(short *)(param_1 + 0xc04);
    sVar2 = *(short *)(param_1 + 0xc06);
    sVar1 = *(short *)(param_1 + 0xc08);
    sVar66 = *(short *)(param_1 + 0xc0a);
    sVar67 = *(short *)(param_1 + 0xc0c);
    sVar9 = *(short *)(param_1 + 0xc0e);
    uVar32 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar58 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar59 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar60 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar61 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar62 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar63 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar64 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xc10);
    sVar46 = *(short *)(param_1 + 0xc12);
    sVar43 = *(short *)(param_1 + 0xc14);
    sVar2 = *(short *)(param_1 + 0xc16);
    sVar1 = *(short *)(param_1 + 0xc18);
    sVar66 = *(short *)(param_1 + 0xc1a);
    sVar67 = *(short *)(param_1 + 0xc1c);
    sVar9 = *(short *)(param_1 + 0xc1e);
    sVar10 = *(short *)(param_1 + 0xc20);
    sVar11 = *(short *)(param_1 + 0xc22);
    sVar12 = *(short *)(param_1 + 0xc24);
    sVar13 = *(short *)(param_1 + 0xc26);
    sVar14 = *(short *)(param_1 + 0xc28);
    sVar15 = *(short *)(param_1 + 0xc2a);
    sVar16 = *(short *)(param_1 + 0xc2c);
    sVar17 = *(short *)(param_1 + 0xc2e);
    sVar18 = *(short *)(param_1 + 0xc30);
    sVar19 = *(short *)(param_1 + 0xc32);
    sVar20 = *(short *)(param_1 + 0xc34);
    sVar21 = *(short *)(param_1 + 0xc36);
    sVar22 = *(short *)(param_1 + 0xc38);
    sVar23 = *(short *)(param_1 + 0xc3a);
    sVar24 = *(short *)(param_1 + 0xc3c);
    sVar25 = *(short *)(param_1 + 0xc3e);
    uVar76 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar79 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar82 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar85 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar88 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar91 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar94 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar97 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    uVar77 = ((short)uVar76 < (short)uVar68) * uVar68 | ((short)uVar76 >= (short)uVar68) * uVar76;
    uVar80 = ((short)uVar79 < (short)uVar69) * uVar69 | ((short)uVar79 >= (short)uVar69) * uVar79;
    uVar83 = ((short)uVar82 < (short)uVar70) * uVar70 | ((short)uVar82 >= (short)uVar70) * uVar82;
    uVar86 = ((short)uVar85 < (short)uVar71) * uVar71 | ((short)uVar85 >= (short)uVar71) * uVar85;
    uVar89 = ((short)uVar88 < (short)uVar72) * uVar72 | ((short)uVar88 >= (short)uVar72) * uVar88;
    uVar92 = ((short)uVar91 < (short)uVar73) * uVar73 | ((short)uVar91 >= (short)uVar73) * uVar91;
    uVar95 = ((short)uVar94 < (short)uVar74) * uVar74 | ((short)uVar94 >= (short)uVar74) * uVar94;
    uVar98 = ((short)uVar97 < (short)uVar75) * uVar75 | ((short)uVar97 >= (short)uVar75) * uVar97;
    sVar50 = *(short *)(param_1 + 0xc40);
    sVar46 = *(short *)(param_1 + 0xc42);
    sVar43 = *(short *)(param_1 + 0xc44);
    sVar2 = *(short *)(param_1 + 0xc46);
    sVar1 = *(short *)(param_1 + 0xc48);
    sVar66 = *(short *)(param_1 + 0xc4a);
    sVar67 = *(short *)(param_1 + 0xc4c);
    sVar9 = *(short *)(param_1 + 0xc4e);
    uVar68 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar69 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar70 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar71 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar72 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar73 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar74 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar75 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    uVar68 = ((short)uVar68 < (short)uVar32) * uVar32 | ((short)uVar68 >= (short)uVar32) * uVar68;
    uVar69 = ((short)uVar69 < (short)uVar58) * uVar58 | ((short)uVar69 >= (short)uVar58) * uVar69;
    uVar70 = ((short)uVar70 < (short)uVar59) * uVar59 | ((short)uVar70 >= (short)uVar59) * uVar70;
    uVar71 = ((short)uVar71 < (short)uVar60) * uVar60 | ((short)uVar71 >= (short)uVar60) * uVar71;
    uVar72 = ((short)uVar72 < (short)uVar61) * uVar61 | ((short)uVar72 >= (short)uVar61) * uVar72;
    uVar73 = ((short)uVar73 < (short)uVar62) * uVar62 | ((short)uVar73 >= (short)uVar62) * uVar73;
    uVar74 = ((short)uVar74 < (short)uVar63) * uVar63 | ((short)uVar74 >= (short)uVar63) * uVar74;
    uVar75 = ((short)uVar75 < (short)uVar64) * uVar64 | ((short)uVar75 >= (short)uVar64) * uVar75;
    sVar50 = *(short *)(param_1 + 0xc50);
    sVar46 = *(short *)(param_1 + 0xc52);
    sVar43 = *(short *)(param_1 + 0xc54);
    sVar2 = *(short *)(param_1 + 0xc56);
    sVar1 = *(short *)(param_1 + 0xc58);
    sVar66 = *(short *)(param_1 + 0xc5a);
    sVar67 = *(short *)(param_1 + 0xc5c);
    sVar9 = *(short *)(param_1 + 0xc5e);
    sVar10 = *(short *)(param_1 + 0xc60);
    sVar11 = *(short *)(param_1 + 0xc62);
    sVar12 = *(short *)(param_1 + 0xc64);
    sVar13 = *(short *)(param_1 + 0xc66);
    sVar14 = *(short *)(param_1 + 0xc68);
    sVar15 = *(short *)(param_1 + 0xc6a);
    sVar16 = *(short *)(param_1 + 0xc6c);
    sVar17 = *(short *)(param_1 + 0xc6e);
    sVar18 = *(short *)(param_1 + 0xc70);
    sVar19 = *(short *)(param_1 + 0xc72);
    sVar20 = *(short *)(param_1 + 0xc74);
    sVar21 = *(short *)(param_1 + 0xc76);
    sVar22 = *(short *)(param_1 + 0xc78);
    sVar23 = *(short *)(param_1 + 0xc7a);
    sVar24 = *(short *)(param_1 + 0xc7c);
    sVar25 = *(short *)(param_1 + 0xc7e);
    uVar76 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar79 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar82 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar85 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar88 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar91 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar94 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar97 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xc80);
    sVar46 = *(short *)(param_1 + 0xc82);
    sVar43 = *(short *)(param_1 + 0xc84);
    sVar2 = *(short *)(param_1 + 0xc86);
    sVar1 = *(short *)(param_1 + 0xc88);
    sVar66 = *(short *)(param_1 + 0xc8a);
    sVar67 = *(short *)(param_1 + 0xc8c);
    sVar9 = *(short *)(param_1 + 0xc8e);
    uVar32 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar58 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar59 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar60 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar61 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar62 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar63 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar64 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xc90);
    sVar46 = *(short *)(param_1 + 0xc92);
    sVar43 = *(short *)(param_1 + 0xc94);
    sVar2 = *(short *)(param_1 + 0xc96);
    sVar1 = *(short *)(param_1 + 0xc98);
    sVar66 = *(short *)(param_1 + 0xc9a);
    sVar67 = *(short *)(param_1 + 0xc9c);
    sVar9 = *(short *)(param_1 + 0xc9e);
    uVar76 = (sVar50 < (short)uVar76) * uVar76 | (ushort)(sVar50 >= (short)uVar76) * sVar50;
    uVar79 = (sVar46 < (short)uVar79) * uVar79 | (ushort)(sVar46 >= (short)uVar79) * sVar46;
    uVar82 = (sVar43 < (short)uVar82) * uVar82 | (ushort)(sVar43 >= (short)uVar82) * sVar43;
    uVar85 = (sVar2 < (short)uVar85) * uVar85 | (ushort)(sVar2 >= (short)uVar85) * sVar2;
    uVar88 = (sVar1 < (short)uVar88) * uVar88 | (ushort)(sVar1 >= (short)uVar88) * sVar1;
    uVar91 = (sVar66 < (short)uVar91) * uVar91 | (ushort)(sVar66 >= (short)uVar91) * sVar66;
    uVar94 = (sVar67 < (short)uVar94) * uVar94 | (ushort)(sVar67 >= (short)uVar94) * sVar67;
    uVar97 = (sVar9 < (short)uVar97) * uVar97 | (ushort)(sVar9 >= (short)uVar97) * sVar9;
    uVar76 = ((short)uVar76 < (short)uVar77) * uVar77 | ((short)uVar76 >= (short)uVar77) * uVar76;
    uVar79 = ((short)uVar79 < (short)uVar80) * uVar80 | ((short)uVar79 >= (short)uVar80) * uVar79;
    uVar82 = ((short)uVar82 < (short)uVar83) * uVar83 | ((short)uVar82 >= (short)uVar83) * uVar82;
    uVar85 = ((short)uVar85 < (short)uVar86) * uVar86 | ((short)uVar85 >= (short)uVar86) * uVar85;
    uVar88 = ((short)uVar88 < (short)uVar89) * uVar89 | ((short)uVar88 >= (short)uVar89) * uVar88;
    uVar91 = ((short)uVar91 < (short)uVar92) * uVar92 | ((short)uVar91 >= (short)uVar92) * uVar91;
    uVar94 = ((short)uVar94 < (short)uVar95) * uVar95 | ((short)uVar94 >= (short)uVar95) * uVar94;
    uVar97 = ((short)uVar97 < (short)uVar98) * uVar98 | ((short)uVar97 >= (short)uVar98) * uVar97;
    sVar50 = *(short *)(param_1 + 0xca0);
    sVar46 = *(short *)(param_1 + 0xca2);
    sVar43 = *(short *)(param_1 + 0xca4);
    sVar2 = *(short *)(param_1 + 0xca6);
    sVar1 = *(short *)(param_1 + 0xca8);
    sVar66 = *(short *)(param_1 + 0xcaa);
    sVar67 = *(short *)(param_1 + 0xcac);
    sVar9 = *(short *)(param_1 + 0xcae);
    uVar32 = (sVar50 < (short)uVar32) * uVar32 | (ushort)(sVar50 >= (short)uVar32) * sVar50;
    uVar58 = (sVar46 < (short)uVar58) * uVar58 | (ushort)(sVar46 >= (short)uVar58) * sVar46;
    uVar59 = (sVar43 < (short)uVar59) * uVar59 | (ushort)(sVar43 >= (short)uVar59) * sVar43;
    uVar60 = (sVar2 < (short)uVar60) * uVar60 | (ushort)(sVar2 >= (short)uVar60) * sVar2;
    uVar61 = (sVar1 < (short)uVar61) * uVar61 | (ushort)(sVar1 >= (short)uVar61) * sVar1;
    uVar62 = (sVar66 < (short)uVar62) * uVar62 | (ushort)(sVar66 >= (short)uVar62) * sVar66;
    uVar63 = (sVar67 < (short)uVar63) * uVar63 | (ushort)(sVar67 >= (short)uVar63) * sVar67;
    uVar64 = (sVar9 < (short)uVar64) * uVar64 | (ushort)(sVar9 >= (short)uVar64) * sVar9;
    uVar77 = ((short)uVar32 < (short)uVar68) * uVar68 | ((short)uVar32 >= (short)uVar68) * uVar32;
    uVar80 = ((short)uVar58 < (short)uVar69) * uVar69 | ((short)uVar58 >= (short)uVar69) * uVar58;
    uVar83 = ((short)uVar59 < (short)uVar70) * uVar70 | ((short)uVar59 >= (short)uVar70) * uVar59;
    uVar86 = ((short)uVar60 < (short)uVar71) * uVar71 | ((short)uVar60 >= (short)uVar71) * uVar60;
    uVar89 = ((short)uVar61 < (short)uVar72) * uVar72 | ((short)uVar61 >= (short)uVar72) * uVar61;
    uVar92 = ((short)uVar62 < (short)uVar73) * uVar73 | ((short)uVar62 >= (short)uVar73) * uVar62;
    uVar95 = ((short)uVar63 < (short)uVar74) * uVar74 | ((short)uVar63 >= (short)uVar74) * uVar63;
    uVar98 = ((short)uVar64 < (short)uVar75) * uVar75 | ((short)uVar64 >= (short)uVar75) * uVar64;
    sVar50 = *(short *)(param_1 + 0xcb0);
    sVar46 = *(short *)(param_1 + 0xcb2);
    sVar43 = *(short *)(param_1 + 0xcb4);
    sVar2 = *(short *)(param_1 + 0xcb6);
    sVar1 = *(short *)(param_1 + 0xcb8);
    sVar66 = *(short *)(param_1 + 0xcba);
    sVar67 = *(short *)(param_1 + 0xcbc);
    sVar9 = *(short *)(param_1 + 0xcbe);
    sVar10 = *(short *)(param_1 + 0xcc0);
    sVar11 = *(short *)(param_1 + 0xcc2);
    sVar12 = *(short *)(param_1 + 0xcc4);
    sVar13 = *(short *)(param_1 + 0xcc6);
    sVar14 = *(short *)(param_1 + 0xcc8);
    sVar15 = *(short *)(param_1 + 0xcca);
    sVar16 = *(short *)(param_1 + 0xccc);
    sVar17 = *(short *)(param_1 + 0xcce);
    sVar18 = *(short *)(param_1 + 0xcd0);
    sVar19 = *(short *)(param_1 + 0xcd2);
    sVar20 = *(short *)(param_1 + 0xcd4);
    sVar21 = *(short *)(param_1 + 0xcd6);
    sVar22 = *(short *)(param_1 + 0xcd8);
    sVar23 = *(short *)(param_1 + 0xcda);
    sVar24 = *(short *)(param_1 + 0xcdc);
    sVar25 = *(short *)(param_1 + 0xcde);
    uVar68 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar69 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar70 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar71 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar72 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar73 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar74 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar75 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xce0);
    sVar46 = *(short *)(param_1 + 0xce2);
    sVar43 = *(short *)(param_1 + 0xce4);
    sVar2 = *(short *)(param_1 + 0xce6);
    sVar1 = *(short *)(param_1 + 0xce8);
    sVar66 = *(short *)(param_1 + 0xcea);
    sVar67 = *(short *)(param_1 + 0xcec);
    sVar9 = *(short *)(param_1 + 0xcee);
    uVar32 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar58 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar59 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar60 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar61 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar62 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar63 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar64 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xcf0);
    sVar46 = *(short *)(param_1 + 0xcf2);
    sVar43 = *(short *)(param_1 + 0xcf4);
    sVar2 = *(short *)(param_1 + 0xcf6);
    sVar1 = *(short *)(param_1 + 0xcf8);
    sVar66 = *(short *)(param_1 + 0xcfa);
    sVar67 = *(short *)(param_1 + 0xcfc);
    sVar9 = *(short *)(param_1 + 0xcfe);
    uVar68 = (sVar50 < (short)uVar68) * uVar68 | (ushort)(sVar50 >= (short)uVar68) * sVar50;
    uVar69 = (sVar46 < (short)uVar69) * uVar69 | (ushort)(sVar46 >= (short)uVar69) * sVar46;
    uVar70 = (sVar43 < (short)uVar70) * uVar70 | (ushort)(sVar43 >= (short)uVar70) * sVar43;
    uVar71 = (sVar2 < (short)uVar71) * uVar71 | (ushort)(sVar2 >= (short)uVar71) * sVar2;
    uVar72 = (sVar1 < (short)uVar72) * uVar72 | (ushort)(sVar1 >= (short)uVar72) * sVar1;
    uVar73 = (sVar66 < (short)uVar73) * uVar73 | (ushort)(sVar66 >= (short)uVar73) * sVar66;
    uVar74 = (sVar67 < (short)uVar74) * uVar74 | (ushort)(sVar67 >= (short)uVar74) * sVar67;
    uVar75 = (sVar9 < (short)uVar75) * uVar75 | (ushort)(sVar9 >= (short)uVar75) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd00);
    sVar46 = *(short *)(param_1 + 0xd02);
    sVar43 = *(short *)(param_1 + 0xd04);
    sVar2 = *(short *)(param_1 + 0xd06);
    sVar1 = *(short *)(param_1 + 0xd08);
    sVar66 = *(short *)(param_1 + 0xd0a);
    sVar67 = *(short *)(param_1 + 0xd0c);
    sVar9 = *(short *)(param_1 + 0xd0e);
    uVar78 = (sVar50 < (short)uVar32) * uVar32 | (ushort)(sVar50 >= (short)uVar32) * sVar50;
    uVar81 = (sVar46 < (short)uVar58) * uVar58 | (ushort)(sVar46 >= (short)uVar58) * sVar46;
    uVar84 = (sVar43 < (short)uVar59) * uVar59 | (ushort)(sVar43 >= (short)uVar59) * sVar43;
    uVar87 = (sVar2 < (short)uVar60) * uVar60 | (ushort)(sVar2 >= (short)uVar60) * sVar2;
    uVar90 = (sVar1 < (short)uVar61) * uVar61 | (ushort)(sVar1 >= (short)uVar61) * sVar1;
    uVar93 = (sVar66 < (short)uVar62) * uVar62 | (ushort)(sVar66 >= (short)uVar62) * sVar66;
    uVar96 = (sVar67 < (short)uVar63) * uVar63 | (ushort)(sVar67 >= (short)uVar63) * sVar67;
    uVar99 = (sVar9 < (short)uVar64) * uVar64 | (ushort)(sVar9 >= (short)uVar64) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd10);
    sVar46 = *(short *)(param_1 + 0xd12);
    sVar43 = *(short *)(param_1 + 0xd14);
    sVar2 = *(short *)(param_1 + 0xd16);
    sVar1 = *(short *)(param_1 + 0xd18);
    sVar66 = *(short *)(param_1 + 0xd1a);
    sVar67 = *(short *)(param_1 + 0xd1c);
    sVar9 = *(short *)(param_1 + 0xd1e);
    uVar32 = (sVar50 < (short)uVar68) * uVar68 | (ushort)(sVar50 >= (short)uVar68) * sVar50;
    uVar58 = (sVar46 < (short)uVar69) * uVar69 | (ushort)(sVar46 >= (short)uVar69) * sVar46;
    uVar59 = (sVar43 < (short)uVar70) * uVar70 | (ushort)(sVar43 >= (short)uVar70) * sVar43;
    uVar60 = (sVar2 < (short)uVar71) * uVar71 | (ushort)(sVar2 >= (short)uVar71) * sVar2;
    uVar61 = (sVar1 < (short)uVar72) * uVar72 | (ushort)(sVar1 >= (short)uVar72) * sVar1;
    uVar62 = (sVar66 < (short)uVar73) * uVar73 | (ushort)(sVar66 >= (short)uVar73) * sVar66;
    uVar63 = (sVar67 < (short)uVar74) * uVar74 | (ushort)(sVar67 >= (short)uVar74) * sVar67;
    uVar64 = (sVar9 < (short)uVar75) * uVar75 | (ushort)(sVar9 >= (short)uVar75) * sVar9;
    uVar32 = ((short)uVar32 < (short)uVar76) * uVar76 | ((short)uVar32 >= (short)uVar76) * uVar32;
    uVar58 = ((short)uVar58 < (short)uVar79) * uVar79 | ((short)uVar58 >= (short)uVar79) * uVar58;
    uVar59 = ((short)uVar59 < (short)uVar82) * uVar82 | ((short)uVar59 >= (short)uVar82) * uVar59;
    uVar60 = ((short)uVar60 < (short)uVar85) * uVar85 | ((short)uVar60 >= (short)uVar85) * uVar60;
    uVar61 = ((short)uVar61 < (short)uVar88) * uVar88 | ((short)uVar61 >= (short)uVar88) * uVar61;
    uVar62 = ((short)uVar62 < (short)uVar91) * uVar91 | ((short)uVar62 >= (short)uVar91) * uVar62;
    uVar63 = ((short)uVar63 < (short)uVar94) * uVar94 | ((short)uVar63 >= (short)uVar94) * uVar63;
    uVar64 = ((short)uVar64 < (short)uVar97) * uVar97 | ((short)uVar64 >= (short)uVar97) * uVar64;
    sVar50 = *(short *)(param_1 + 0xd20);
    sVar46 = *(short *)(param_1 + 0xd22);
    sVar43 = *(short *)(param_1 + 0xd24);
    sVar2 = *(short *)(param_1 + 0xd26);
    sVar1 = *(short *)(param_1 + 0xd28);
    sVar66 = *(short *)(param_1 + 0xd2a);
    sVar67 = *(short *)(param_1 + 0xd2c);
    sVar9 = *(short *)(param_1 + 0xd2e);
    uVar68 = (sVar50 < (short)uVar78) * uVar78 | (ushort)(sVar50 >= (short)uVar78) * sVar50;
    uVar69 = (sVar46 < (short)uVar81) * uVar81 | (ushort)(sVar46 >= (short)uVar81) * sVar46;
    uVar70 = (sVar43 < (short)uVar84) * uVar84 | (ushort)(sVar43 >= (short)uVar84) * sVar43;
    uVar71 = (sVar2 < (short)uVar87) * uVar87 | (ushort)(sVar2 >= (short)uVar87) * sVar2;
    uVar72 = (sVar1 < (short)uVar90) * uVar90 | (ushort)(sVar1 >= (short)uVar90) * sVar1;
    uVar73 = (sVar66 < (short)uVar93) * uVar93 | (ushort)(sVar66 >= (short)uVar93) * sVar66;
    uVar74 = (sVar67 < (short)uVar96) * uVar96 | (ushort)(sVar67 >= (short)uVar96) * sVar67;
    uVar75 = (sVar9 < (short)uVar99) * uVar99 | (ushort)(sVar9 >= (short)uVar99) * sVar9;
    uVar68 = ((short)uVar68 < (short)uVar77) * uVar77 | ((short)uVar68 >= (short)uVar77) * uVar68;
    uVar69 = ((short)uVar69 < (short)uVar80) * uVar80 | ((short)uVar69 >= (short)uVar80) * uVar69;
    uVar70 = ((short)uVar70 < (short)uVar83) * uVar83 | ((short)uVar70 >= (short)uVar83) * uVar70;
    uVar71 = ((short)uVar71 < (short)uVar86) * uVar86 | ((short)uVar71 >= (short)uVar86) * uVar71;
    uVar72 = ((short)uVar72 < (short)uVar89) * uVar89 | ((short)uVar72 >= (short)uVar89) * uVar72;
    uVar73 = ((short)uVar73 < (short)uVar92) * uVar92 | ((short)uVar73 >= (short)uVar92) * uVar73;
    uVar74 = ((short)uVar74 < (short)uVar95) * uVar95 | ((short)uVar74 >= (short)uVar95) * uVar74;
    uVar75 = ((short)uVar75 < (short)uVar98) * uVar98 | ((short)uVar75 >= (short)uVar98) * uVar75;
    sVar50 = *(short *)(param_1 + 0xd30);
    sVar46 = *(short *)(param_1 + 0xd32);
    sVar43 = *(short *)(param_1 + 0xd34);
    sVar2 = *(short *)(param_1 + 0xd36);
    sVar1 = *(short *)(param_1 + 0xd38);
    sVar66 = *(short *)(param_1 + 0xd3a);
    sVar67 = *(short *)(param_1 + 0xd3c);
    sVar9 = *(short *)(param_1 + 0xd3e);
    sVar10 = *(short *)(param_1 + 0xd40);
    sVar11 = *(short *)(param_1 + 0xd42);
    sVar12 = *(short *)(param_1 + 0xd44);
    sVar13 = *(short *)(param_1 + 0xd46);
    sVar14 = *(short *)(param_1 + 0xd48);
    sVar15 = *(short *)(param_1 + 0xd4a);
    sVar16 = *(short *)(param_1 + 0xd4c);
    sVar17 = *(short *)(param_1 + 0xd4e);
    sVar18 = *(short *)(param_1 + 0xd50);
    sVar19 = *(short *)(param_1 + 0xd52);
    sVar20 = *(short *)(param_1 + 0xd54);
    sVar21 = *(short *)(param_1 + 0xd56);
    sVar22 = *(short *)(param_1 + 0xd58);
    sVar23 = *(short *)(param_1 + 0xd5a);
    sVar24 = *(short *)(param_1 + 0xd5c);
    sVar25 = *(short *)(param_1 + 0xd5e);
    uVar77 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar80 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar83 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar86 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar89 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar92 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar95 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar98 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xd60);
    sVar46 = *(short *)(param_1 + 0xd62);
    sVar43 = *(short *)(param_1 + 0xd64);
    sVar2 = *(short *)(param_1 + 0xd66);
    sVar1 = *(short *)(param_1 + 0xd68);
    sVar66 = *(short *)(param_1 + 0xd6a);
    sVar67 = *(short *)(param_1 + 0xd6c);
    sVar9 = *(short *)(param_1 + 0xd6e);
    uVar76 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar79 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar82 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar85 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar88 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar91 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar94 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar97 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd70);
    sVar46 = *(short *)(param_1 + 0xd72);
    sVar43 = *(short *)(param_1 + 0xd74);
    sVar2 = *(short *)(param_1 + 0xd76);
    sVar1 = *(short *)(param_1 + 0xd78);
    sVar66 = *(short *)(param_1 + 0xd7a);
    sVar67 = *(short *)(param_1 + 0xd7c);
    sVar9 = *(short *)(param_1 + 0xd7e);
    uVar77 = (sVar50 < (short)uVar77) * uVar77 | (ushort)(sVar50 >= (short)uVar77) * sVar50;
    uVar80 = (sVar46 < (short)uVar80) * uVar80 | (ushort)(sVar46 >= (short)uVar80) * sVar46;
    uVar83 = (sVar43 < (short)uVar83) * uVar83 | (ushort)(sVar43 >= (short)uVar83) * sVar43;
    uVar86 = (sVar2 < (short)uVar86) * uVar86 | (ushort)(sVar2 >= (short)uVar86) * sVar2;
    uVar89 = (sVar1 < (short)uVar89) * uVar89 | (ushort)(sVar1 >= (short)uVar89) * sVar1;
    uVar92 = (sVar66 < (short)uVar92) * uVar92 | (ushort)(sVar66 >= (short)uVar92) * sVar66;
    uVar95 = (sVar67 < (short)uVar95) * uVar95 | (ushort)(sVar67 >= (short)uVar95) * sVar67;
    uVar98 = (sVar9 < (short)uVar98) * uVar98 | (ushort)(sVar9 >= (short)uVar98) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd80);
    sVar46 = *(short *)(param_1 + 0xd82);
    sVar43 = *(short *)(param_1 + 0xd84);
    sVar2 = *(short *)(param_1 + 0xd86);
    sVar1 = *(short *)(param_1 + 0xd88);
    sVar66 = *(short *)(param_1 + 0xd8a);
    sVar67 = *(short *)(param_1 + 0xd8c);
    sVar9 = *(short *)(param_1 + 0xd8e);
    uVar78 = (sVar50 < (short)uVar76) * uVar76 | (ushort)(sVar50 >= (short)uVar76) * sVar50;
    uVar81 = (sVar46 < (short)uVar79) * uVar79 | (ushort)(sVar46 >= (short)uVar79) * sVar46;
    uVar84 = (sVar43 < (short)uVar82) * uVar82 | (ushort)(sVar43 >= (short)uVar82) * sVar43;
    uVar87 = (sVar2 < (short)uVar85) * uVar85 | (ushort)(sVar2 >= (short)uVar85) * sVar2;
    uVar90 = (sVar1 < (short)uVar88) * uVar88 | (ushort)(sVar1 >= (short)uVar88) * sVar1;
    uVar93 = (sVar66 < (short)uVar91) * uVar91 | (ushort)(sVar66 >= (short)uVar91) * sVar66;
    uVar96 = (sVar67 < (short)uVar94) * uVar94 | (ushort)(sVar67 >= (short)uVar94) * sVar67;
    uVar99 = (sVar9 < (short)uVar97) * uVar97 | (ushort)(sVar9 >= (short)uVar97) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd90);
    sVar46 = *(short *)(param_1 + 0xd92);
    sVar43 = *(short *)(param_1 + 0xd94);
    sVar2 = *(short *)(param_1 + 0xd96);
    sVar1 = *(short *)(param_1 + 0xd98);
    sVar66 = *(short *)(param_1 + 0xd9a);
    sVar67 = *(short *)(param_1 + 0xd9c);
    sVar9 = *(short *)(param_1 + 0xd9e);
    uVar76 = (sVar50 < (short)uVar77) * uVar77 | (ushort)(sVar50 >= (short)uVar77) * sVar50;
    uVar79 = (sVar46 < (short)uVar80) * uVar80 | (ushort)(sVar46 >= (short)uVar80) * sVar46;
    uVar82 = (sVar43 < (short)uVar83) * uVar83 | (ushort)(sVar43 >= (short)uVar83) * sVar43;
    uVar85 = (sVar2 < (short)uVar86) * uVar86 | (ushort)(sVar2 >= (short)uVar86) * sVar2;
    uVar88 = (sVar1 < (short)uVar89) * uVar89 | (ushort)(sVar1 >= (short)uVar89) * sVar1;
    uVar91 = (sVar66 < (short)uVar92) * uVar92 | (ushort)(sVar66 >= (short)uVar92) * sVar66;
    uVar94 = (sVar67 < (short)uVar95) * uVar95 | (ushort)(sVar67 >= (short)uVar95) * sVar67;
    uVar97 = (sVar9 < (short)uVar98) * uVar98 | (ushort)(sVar9 >= (short)uVar98) * sVar9;
    sVar50 = *(short *)(param_1 + 0xda0);
    sVar46 = *(short *)(param_1 + 0xda2);
    sVar43 = *(short *)(param_1 + 0xda4);
    sVar2 = *(short *)(param_1 + 0xda6);
    sVar1 = *(short *)(param_1 + 0xda8);
    sVar66 = *(short *)(param_1 + 0xdaa);
    sVar67 = *(short *)(param_1 + 0xdac);
    sVar9 = *(short *)(param_1 + 0xdae);
    uVar77 = (sVar50 < (short)uVar78) * uVar78 | (ushort)(sVar50 >= (short)uVar78) * sVar50;
    uVar80 = (sVar46 < (short)uVar81) * uVar81 | (ushort)(sVar46 >= (short)uVar81) * sVar46;
    uVar83 = (sVar43 < (short)uVar84) * uVar84 | (ushort)(sVar43 >= (short)uVar84) * sVar43;
    uVar86 = (sVar2 < (short)uVar87) * uVar87 | (ushort)(sVar2 >= (short)uVar87) * sVar2;
    uVar89 = (sVar1 < (short)uVar90) * uVar90 | (ushort)(sVar1 >= (short)uVar90) * sVar1;
    uVar92 = (sVar66 < (short)uVar93) * uVar93 | (ushort)(sVar66 >= (short)uVar93) * sVar66;
    uVar95 = (sVar67 < (short)uVar96) * uVar96 | (ushort)(sVar67 >= (short)uVar96) * sVar67;
    uVar98 = (sVar9 < (short)uVar99) * uVar99 | (ushort)(sVar9 >= (short)uVar99) * sVar9;
    sVar50 = *(short *)(param_1 + 0xdb0);
    sVar46 = *(short *)(param_1 + 0xdb2);
    sVar43 = *(short *)(param_1 + 0xdb4);
    sVar2 = *(short *)(param_1 + 0xdb6);
    sVar1 = *(short *)(param_1 + 0xdb8);
    sVar66 = *(short *)(param_1 + 0xdba);
    sVar67 = *(short *)(param_1 + 0xdbc);
    sVar9 = *(short *)(param_1 + 0xdbe);
    uVar76 = (sVar50 < (short)uVar76) * uVar76 | (ushort)(sVar50 >= (short)uVar76) * sVar50;
    uVar79 = (sVar46 < (short)uVar79) * uVar79 | (ushort)(sVar46 >= (short)uVar79) * sVar46;
    uVar82 = (sVar43 < (short)uVar82) * uVar82 | (ushort)(sVar43 >= (short)uVar82) * sVar43;
    uVar85 = (sVar2 < (short)uVar85) * uVar85 | (ushort)(sVar2 >= (short)uVar85) * sVar2;
    uVar88 = (sVar1 < (short)uVar88) * uVar88 | (ushort)(sVar1 >= (short)uVar88) * sVar1;
    uVar91 = (sVar66 < (short)uVar91) * uVar91 | (ushort)(sVar66 >= (short)uVar91) * sVar66;
    uVar94 = (sVar67 < (short)uVar94) * uVar94 | (ushort)(sVar67 >= (short)uVar94) * sVar67;
    uVar97 = (sVar9 < (short)uVar97) * uVar97 | (ushort)(sVar9 >= (short)uVar97) * sVar9;
    uVar76 = ((short)uVar76 < (short)uVar32) * uVar32 | ((short)uVar76 >= (short)uVar32) * uVar76;
    uVar79 = ((short)uVar79 < (short)uVar58) * uVar58 | ((short)uVar79 >= (short)uVar58) * uVar79;
    uVar82 = ((short)uVar82 < (short)uVar59) * uVar59 | ((short)uVar82 >= (short)uVar59) * uVar82;
    uVar85 = ((short)uVar85 < (short)uVar60) * uVar60 | ((short)uVar85 >= (short)uVar60) * uVar85;
    uVar88 = ((short)uVar88 < (short)uVar61) * uVar61 | ((short)uVar88 >= (short)uVar61) * uVar88;
    uVar91 = ((short)uVar91 < (short)uVar62) * uVar62 | ((short)uVar91 >= (short)uVar62) * uVar91;
    uVar94 = ((short)uVar94 < (short)uVar63) * uVar63 | ((short)uVar94 >= (short)uVar63) * uVar94;
    uVar97 = ((short)uVar97 < (short)uVar64) * uVar64 | ((short)uVar97 >= (short)uVar64) * uVar97;
    sVar50 = *(short *)(param_1 + 0xdc0);
    sVar46 = *(short *)(param_1 + 0xdc2);
    sVar43 = *(short *)(param_1 + 0xdc4);
    sVar2 = *(short *)(param_1 + 0xdc6);
    sVar1 = *(short *)(param_1 + 0xdc8);
    sVar66 = *(short *)(param_1 + 0xdca);
    sVar67 = *(short *)(param_1 + 0xdcc);
    sVar9 = *(short *)(param_1 + 0xdce);
    uVar32 = (sVar50 < (short)uVar77) * uVar77 | (ushort)(sVar50 >= (short)uVar77) * sVar50;
    uVar58 = (sVar46 < (short)uVar80) * uVar80 | (ushort)(sVar46 >= (short)uVar80) * sVar46;
    uVar59 = (sVar43 < (short)uVar83) * uVar83 | (ushort)(sVar43 >= (short)uVar83) * sVar43;
    uVar60 = (sVar2 < (short)uVar86) * uVar86 | (ushort)(sVar2 >= (short)uVar86) * sVar2;
    uVar61 = (sVar1 < (short)uVar89) * uVar89 | (ushort)(sVar1 >= (short)uVar89) * sVar1;
    uVar62 = (sVar66 < (short)uVar92) * uVar92 | (ushort)(sVar66 >= (short)uVar92) * sVar66;
    uVar63 = (sVar67 < (short)uVar95) * uVar95 | (ushort)(sVar67 >= (short)uVar95) * sVar67;
    uVar64 = (sVar9 < (short)uVar98) * uVar98 | (ushort)(sVar9 >= (short)uVar98) * sVar9;
    uVar32 = ((short)uVar32 < (short)uVar68) * uVar68 | ((short)uVar32 >= (short)uVar68) * uVar32;
    uVar58 = ((short)uVar58 < (short)uVar69) * uVar69 | ((short)uVar58 >= (short)uVar69) * uVar58;
    uVar59 = ((short)uVar59 < (short)uVar70) * uVar70 | ((short)uVar59 >= (short)uVar70) * uVar59;
    uVar60 = ((short)uVar60 < (short)uVar71) * uVar71 | ((short)uVar60 >= (short)uVar71) * uVar60;
    uVar61 = ((short)uVar61 < (short)uVar72) * uVar72 | ((short)uVar61 >= (short)uVar72) * uVar61;
    uVar62 = ((short)uVar62 < (short)uVar73) * uVar73 | ((short)uVar62 >= (short)uVar73) * uVar62;
    uVar63 = ((short)uVar63 < (short)uVar74) * uVar74 | ((short)uVar63 >= (short)uVar74) * uVar63;
    uVar64 = ((short)uVar64 < (short)uVar75) * uVar75 | ((short)uVar64 >= (short)uVar75) * uVar64;
    uVar32 = ((short)uVar32 < (short)uVar76) * uVar76 | ((short)uVar32 >= (short)uVar76) * uVar32;
    uVar58 = ((short)uVar58 < (short)uVar79) * uVar79 | ((short)uVar58 >= (short)uVar79) * uVar58;
    uVar59 = ((short)uVar59 < (short)uVar82) * uVar82 | ((short)uVar59 >= (short)uVar82) * uVar59;
    uVar60 = ((short)uVar60 < (short)uVar85) * uVar85 | ((short)uVar60 >= (short)uVar85) * uVar60;
    uVar61 = ((short)uVar61 < (short)uVar88) * uVar88 | ((short)uVar61 >= (short)uVar88) * uVar61;
    uVar62 = ((short)uVar62 < (short)uVar91) * uVar91 | ((short)uVar62 >= (short)uVar91) * uVar62;
    uVar63 = ((short)uVar63 < (short)uVar94) * uVar94 | ((short)uVar63 >= (short)uVar94) * uVar63;
    uVar64 = ((short)uVar64 < (short)uVar97) * uVar97 | ((short)uVar64 >= (short)uVar97) * uVar64;
    sVar50 = (0 < (short)uVar32) * uVar32;
    auVar65 = SUB1614((undefined1  [16])0x0,2);
    sVar46 = (0 < (short)uVar58) * uVar58;
    sVar43 = (0 < (short)uVar59) * uVar59;
    sVar2 = (0 < (short)uVar60) * uVar60;
    sVar1 = (0 < (short)uVar61) * uVar61;
    sVar66 = auVar65._8_2_;
    uVar58 = (sVar66 < (short)uVar62) * uVar62 | (ushort)(sVar66 >= (short)uVar62) * sVar66;
    sVar66 = auVar65._10_2_;
    sVar67 = auVar65._12_2_;
    uVar59 = (sVar66 < (short)uVar63) * uVar63 | (ushort)(sVar66 >= (short)uVar63) * sVar66;
    uVar60 = (sVar67 < (short)uVar64) * uVar64 | (ushort)(sVar67 >= (short)uVar64) * sVar67;
    uVar32 = (ushort)(sVar1 < sVar50) * sVar50 | (ushort)(sVar1 >= sVar50) * sVar1;
    uVar58 = (ushort)((short)uVar58 < sVar46) * sVar46 | ((short)uVar58 >= sVar46) * uVar58;
    uVar59 = (ushort)((short)uVar59 < sVar43) * sVar43 | ((short)uVar59 >= sVar43) * uVar59;
    uVar60 = (ushort)((short)uVar60 < sVar2) * sVar2 | ((short)uVar60 >= sVar2) * uVar60;
    uVar32 = ((short)uVar59 < (short)uVar32) * uVar32 | ((short)uVar59 >= (short)uVar32) * uVar59;
    uVar58 = ((short)uVar60 < (short)uVar58) * uVar58 | ((short)uVar60 >= (short)uVar58) * uVar60;
    *(ushort *)(param_1 + 0xfd8) =
         ((short)uVar58 < (short)uVar32) * uVar32 | ((short)uVar58 >= (short)uVar32) * uVar58;
    if (*(char *)(param_1 + 0x110b) == '\x01') {
      func_0x0caea6e0(param_1,&puStack_4c398);
    }
    else {
      func_0x0caea8f0(param_1,&puStack_4c398);
    }
    break;
  case 3:
    func_0x0ee11d90(&puStack_4c398,param_1 + 0xbd0,0x200);
    *(undefined2 *)(param_1 + 0xfd8) = 0;
    sVar50 = *(short *)(param_1 + 0xbd0);
    sVar46 = *(short *)(param_1 + 0xbd2);
    sVar43 = *(short *)(param_1 + 0xbd4);
    sVar2 = *(short *)(param_1 + 0xbd6);
    sVar1 = *(short *)(param_1 + 0xbd8);
    sVar66 = *(short *)(param_1 + 0xbda);
    sVar67 = *(short *)(param_1 + 0xbdc);
    sVar9 = *(short *)(param_1 + 0xbde);
    sVar10 = *(short *)(param_1 + 0xbe0);
    sVar11 = *(short *)(param_1 + 0xbe2);
    sVar12 = *(short *)(param_1 + 0xbe4);
    sVar13 = *(short *)(param_1 + 0xbe6);
    sVar14 = *(short *)(param_1 + 0xbe8);
    sVar15 = *(short *)(param_1 + 0xbea);
    sVar16 = *(short *)(param_1 + 0xbec);
    sVar17 = *(short *)(param_1 + 0xbee);
    sVar18 = *(short *)(param_1 + 0xbf0);
    sVar19 = *(short *)(param_1 + 0xbf2);
    sVar20 = *(short *)(param_1 + 0xbf4);
    sVar21 = *(short *)(param_1 + 0xbf6);
    sVar22 = *(short *)(param_1 + 0xbf8);
    sVar23 = *(short *)(param_1 + 0xbfa);
    sVar24 = *(short *)(param_1 + 0xbfc);
    sVar25 = *(short *)(param_1 + 0xbfe);
    uVar68 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar69 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar70 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar71 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar72 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar73 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar74 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar75 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xc00);
    sVar46 = *(short *)(param_1 + 0xc02);
    sVar43 = *(short *)(param_1 + 0xc04);
    sVar2 = *(short *)(param_1 + 0xc06);
    sVar1 = *(short *)(param_1 + 0xc08);
    sVar66 = *(short *)(param_1 + 0xc0a);
    sVar67 = *(short *)(param_1 + 0xc0c);
    sVar9 = *(short *)(param_1 + 0xc0e);
    uVar32 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar58 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar59 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar60 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar61 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar62 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar63 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar64 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xc10);
    sVar46 = *(short *)(param_1 + 0xc12);
    sVar43 = *(short *)(param_1 + 0xc14);
    sVar2 = *(short *)(param_1 + 0xc16);
    sVar1 = *(short *)(param_1 + 0xc18);
    sVar66 = *(short *)(param_1 + 0xc1a);
    sVar67 = *(short *)(param_1 + 0xc1c);
    sVar9 = *(short *)(param_1 + 0xc1e);
    sVar10 = *(short *)(param_1 + 0xc20);
    sVar11 = *(short *)(param_1 + 0xc22);
    sVar12 = *(short *)(param_1 + 0xc24);
    sVar13 = *(short *)(param_1 + 0xc26);
    sVar14 = *(short *)(param_1 + 0xc28);
    sVar15 = *(short *)(param_1 + 0xc2a);
    sVar16 = *(short *)(param_1 + 0xc2c);
    sVar17 = *(short *)(param_1 + 0xc2e);
    sVar18 = *(short *)(param_1 + 0xc30);
    sVar19 = *(short *)(param_1 + 0xc32);
    sVar20 = *(short *)(param_1 + 0xc34);
    sVar21 = *(short *)(param_1 + 0xc36);
    sVar22 = *(short *)(param_1 + 0xc38);
    sVar23 = *(short *)(param_1 + 0xc3a);
    sVar24 = *(short *)(param_1 + 0xc3c);
    sVar25 = *(short *)(param_1 + 0xc3e);
    uVar76 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar79 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar82 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar85 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar88 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar91 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar94 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar97 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    uVar77 = ((short)uVar76 < (short)uVar68) * uVar68 | ((short)uVar76 >= (short)uVar68) * uVar76;
    uVar80 = ((short)uVar79 < (short)uVar69) * uVar69 | ((short)uVar79 >= (short)uVar69) * uVar79;
    uVar83 = ((short)uVar82 < (short)uVar70) * uVar70 | ((short)uVar82 >= (short)uVar70) * uVar82;
    uVar86 = ((short)uVar85 < (short)uVar71) * uVar71 | ((short)uVar85 >= (short)uVar71) * uVar85;
    uVar89 = ((short)uVar88 < (short)uVar72) * uVar72 | ((short)uVar88 >= (short)uVar72) * uVar88;
    uVar92 = ((short)uVar91 < (short)uVar73) * uVar73 | ((short)uVar91 >= (short)uVar73) * uVar91;
    uVar95 = ((short)uVar94 < (short)uVar74) * uVar74 | ((short)uVar94 >= (short)uVar74) * uVar94;
    uVar98 = ((short)uVar97 < (short)uVar75) * uVar75 | ((short)uVar97 >= (short)uVar75) * uVar97;
    sVar50 = *(short *)(param_1 + 0xc40);
    sVar46 = *(short *)(param_1 + 0xc42);
    sVar43 = *(short *)(param_1 + 0xc44);
    sVar2 = *(short *)(param_1 + 0xc46);
    sVar1 = *(short *)(param_1 + 0xc48);
    sVar66 = *(short *)(param_1 + 0xc4a);
    sVar67 = *(short *)(param_1 + 0xc4c);
    sVar9 = *(short *)(param_1 + 0xc4e);
    uVar68 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar69 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar70 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar71 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar72 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar73 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar74 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar75 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    uVar68 = ((short)uVar68 < (short)uVar32) * uVar32 | ((short)uVar68 >= (short)uVar32) * uVar68;
    uVar69 = ((short)uVar69 < (short)uVar58) * uVar58 | ((short)uVar69 >= (short)uVar58) * uVar69;
    uVar70 = ((short)uVar70 < (short)uVar59) * uVar59 | ((short)uVar70 >= (short)uVar59) * uVar70;
    uVar71 = ((short)uVar71 < (short)uVar60) * uVar60 | ((short)uVar71 >= (short)uVar60) * uVar71;
    uVar72 = ((short)uVar72 < (short)uVar61) * uVar61 | ((short)uVar72 >= (short)uVar61) * uVar72;
    uVar73 = ((short)uVar73 < (short)uVar62) * uVar62 | ((short)uVar73 >= (short)uVar62) * uVar73;
    uVar74 = ((short)uVar74 < (short)uVar63) * uVar63 | ((short)uVar74 >= (short)uVar63) * uVar74;
    uVar75 = ((short)uVar75 < (short)uVar64) * uVar64 | ((short)uVar75 >= (short)uVar64) * uVar75;
    sVar50 = *(short *)(param_1 + 0xc50);
    sVar46 = *(short *)(param_1 + 0xc52);
    sVar43 = *(short *)(param_1 + 0xc54);
    sVar2 = *(short *)(param_1 + 0xc56);
    sVar1 = *(short *)(param_1 + 0xc58);
    sVar66 = *(short *)(param_1 + 0xc5a);
    sVar67 = *(short *)(param_1 + 0xc5c);
    sVar9 = *(short *)(param_1 + 0xc5e);
    sVar10 = *(short *)(param_1 + 0xc60);
    sVar11 = *(short *)(param_1 + 0xc62);
    sVar12 = *(short *)(param_1 + 0xc64);
    sVar13 = *(short *)(param_1 + 0xc66);
    sVar14 = *(short *)(param_1 + 0xc68);
    sVar15 = *(short *)(param_1 + 0xc6a);
    sVar16 = *(short *)(param_1 + 0xc6c);
    sVar17 = *(short *)(param_1 + 0xc6e);
    sVar18 = *(short *)(param_1 + 0xc70);
    sVar19 = *(short *)(param_1 + 0xc72);
    sVar20 = *(short *)(param_1 + 0xc74);
    sVar21 = *(short *)(param_1 + 0xc76);
    sVar22 = *(short *)(param_1 + 0xc78);
    sVar23 = *(short *)(param_1 + 0xc7a);
    sVar24 = *(short *)(param_1 + 0xc7c);
    sVar25 = *(short *)(param_1 + 0xc7e);
    uVar76 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar79 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar82 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar85 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar88 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar91 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar94 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar97 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xc80);
    sVar46 = *(short *)(param_1 + 0xc82);
    sVar43 = *(short *)(param_1 + 0xc84);
    sVar2 = *(short *)(param_1 + 0xc86);
    sVar1 = *(short *)(param_1 + 0xc88);
    sVar66 = *(short *)(param_1 + 0xc8a);
    sVar67 = *(short *)(param_1 + 0xc8c);
    sVar9 = *(short *)(param_1 + 0xc8e);
    uVar32 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar58 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar59 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar60 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar61 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar62 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar63 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar64 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xc90);
    sVar46 = *(short *)(param_1 + 0xc92);
    sVar43 = *(short *)(param_1 + 0xc94);
    sVar2 = *(short *)(param_1 + 0xc96);
    sVar1 = *(short *)(param_1 + 0xc98);
    sVar66 = *(short *)(param_1 + 0xc9a);
    sVar67 = *(short *)(param_1 + 0xc9c);
    sVar9 = *(short *)(param_1 + 0xc9e);
    uVar76 = (sVar50 < (short)uVar76) * uVar76 | (ushort)(sVar50 >= (short)uVar76) * sVar50;
    uVar79 = (sVar46 < (short)uVar79) * uVar79 | (ushort)(sVar46 >= (short)uVar79) * sVar46;
    uVar82 = (sVar43 < (short)uVar82) * uVar82 | (ushort)(sVar43 >= (short)uVar82) * sVar43;
    uVar85 = (sVar2 < (short)uVar85) * uVar85 | (ushort)(sVar2 >= (short)uVar85) * sVar2;
    uVar88 = (sVar1 < (short)uVar88) * uVar88 | (ushort)(sVar1 >= (short)uVar88) * sVar1;
    uVar91 = (sVar66 < (short)uVar91) * uVar91 | (ushort)(sVar66 >= (short)uVar91) * sVar66;
    uVar94 = (sVar67 < (short)uVar94) * uVar94 | (ushort)(sVar67 >= (short)uVar94) * sVar67;
    uVar97 = (sVar9 < (short)uVar97) * uVar97 | (ushort)(sVar9 >= (short)uVar97) * sVar9;
    uVar76 = ((short)uVar76 < (short)uVar77) * uVar77 | ((short)uVar76 >= (short)uVar77) * uVar76;
    uVar79 = ((short)uVar79 < (short)uVar80) * uVar80 | ((short)uVar79 >= (short)uVar80) * uVar79;
    uVar82 = ((short)uVar82 < (short)uVar83) * uVar83 | ((short)uVar82 >= (short)uVar83) * uVar82;
    uVar85 = ((short)uVar85 < (short)uVar86) * uVar86 | ((short)uVar85 >= (short)uVar86) * uVar85;
    uVar88 = ((short)uVar88 < (short)uVar89) * uVar89 | ((short)uVar88 >= (short)uVar89) * uVar88;
    uVar91 = ((short)uVar91 < (short)uVar92) * uVar92 | ((short)uVar91 >= (short)uVar92) * uVar91;
    uVar94 = ((short)uVar94 < (short)uVar95) * uVar95 | ((short)uVar94 >= (short)uVar95) * uVar94;
    uVar97 = ((short)uVar97 < (short)uVar98) * uVar98 | ((short)uVar97 >= (short)uVar98) * uVar97;
    sVar50 = *(short *)(param_1 + 0xca0);
    sVar46 = *(short *)(param_1 + 0xca2);
    sVar43 = *(short *)(param_1 + 0xca4);
    sVar2 = *(short *)(param_1 + 0xca6);
    sVar1 = *(short *)(param_1 + 0xca8);
    sVar66 = *(short *)(param_1 + 0xcaa);
    sVar67 = *(short *)(param_1 + 0xcac);
    sVar9 = *(short *)(param_1 + 0xcae);
    uVar32 = (sVar50 < (short)uVar32) * uVar32 | (ushort)(sVar50 >= (short)uVar32) * sVar50;
    uVar58 = (sVar46 < (short)uVar58) * uVar58 | (ushort)(sVar46 >= (short)uVar58) * sVar46;
    uVar59 = (sVar43 < (short)uVar59) * uVar59 | (ushort)(sVar43 >= (short)uVar59) * sVar43;
    uVar60 = (sVar2 < (short)uVar60) * uVar60 | (ushort)(sVar2 >= (short)uVar60) * sVar2;
    uVar61 = (sVar1 < (short)uVar61) * uVar61 | (ushort)(sVar1 >= (short)uVar61) * sVar1;
    uVar62 = (sVar66 < (short)uVar62) * uVar62 | (ushort)(sVar66 >= (short)uVar62) * sVar66;
    uVar63 = (sVar67 < (short)uVar63) * uVar63 | (ushort)(sVar67 >= (short)uVar63) * sVar67;
    uVar64 = (sVar9 < (short)uVar64) * uVar64 | (ushort)(sVar9 >= (short)uVar64) * sVar9;
    uVar77 = ((short)uVar32 < (short)uVar68) * uVar68 | ((short)uVar32 >= (short)uVar68) * uVar32;
    uVar80 = ((short)uVar58 < (short)uVar69) * uVar69 | ((short)uVar58 >= (short)uVar69) * uVar58;
    uVar83 = ((short)uVar59 < (short)uVar70) * uVar70 | ((short)uVar59 >= (short)uVar70) * uVar59;
    uVar86 = ((short)uVar60 < (short)uVar71) * uVar71 | ((short)uVar60 >= (short)uVar71) * uVar60;
    uVar89 = ((short)uVar61 < (short)uVar72) * uVar72 | ((short)uVar61 >= (short)uVar72) * uVar61;
    uVar92 = ((short)uVar62 < (short)uVar73) * uVar73 | ((short)uVar62 >= (short)uVar73) * uVar62;
    uVar95 = ((short)uVar63 < (short)uVar74) * uVar74 | ((short)uVar63 >= (short)uVar74) * uVar63;
    uVar98 = ((short)uVar64 < (short)uVar75) * uVar75 | ((short)uVar64 >= (short)uVar75) * uVar64;
    sVar50 = *(short *)(param_1 + 0xcb0);
    sVar46 = *(short *)(param_1 + 0xcb2);
    sVar43 = *(short *)(param_1 + 0xcb4);
    sVar2 = *(short *)(param_1 + 0xcb6);
    sVar1 = *(short *)(param_1 + 0xcb8);
    sVar66 = *(short *)(param_1 + 0xcba);
    sVar67 = *(short *)(param_1 + 0xcbc);
    sVar9 = *(short *)(param_1 + 0xcbe);
    sVar10 = *(short *)(param_1 + 0xcc0);
    sVar11 = *(short *)(param_1 + 0xcc2);
    sVar12 = *(short *)(param_1 + 0xcc4);
    sVar13 = *(short *)(param_1 + 0xcc6);
    sVar14 = *(short *)(param_1 + 0xcc8);
    sVar15 = *(short *)(param_1 + 0xcca);
    sVar16 = *(short *)(param_1 + 0xccc);
    sVar17 = *(short *)(param_1 + 0xcce);
    sVar18 = *(short *)(param_1 + 0xcd0);
    sVar19 = *(short *)(param_1 + 0xcd2);
    sVar20 = *(short *)(param_1 + 0xcd4);
    sVar21 = *(short *)(param_1 + 0xcd6);
    sVar22 = *(short *)(param_1 + 0xcd8);
    sVar23 = *(short *)(param_1 + 0xcda);
    sVar24 = *(short *)(param_1 + 0xcdc);
    sVar25 = *(short *)(param_1 + 0xcde);
    uVar68 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar69 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar70 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar71 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar72 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar73 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar74 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar75 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xce0);
    sVar46 = *(short *)(param_1 + 0xce2);
    sVar43 = *(short *)(param_1 + 0xce4);
    sVar2 = *(short *)(param_1 + 0xce6);
    sVar1 = *(short *)(param_1 + 0xce8);
    sVar66 = *(short *)(param_1 + 0xcea);
    sVar67 = *(short *)(param_1 + 0xcec);
    sVar9 = *(short *)(param_1 + 0xcee);
    uVar32 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar58 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar59 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar60 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar61 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar62 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar63 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar64 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xcf0);
    sVar46 = *(short *)(param_1 + 0xcf2);
    sVar43 = *(short *)(param_1 + 0xcf4);
    sVar2 = *(short *)(param_1 + 0xcf6);
    sVar1 = *(short *)(param_1 + 0xcf8);
    sVar66 = *(short *)(param_1 + 0xcfa);
    sVar67 = *(short *)(param_1 + 0xcfc);
    sVar9 = *(short *)(param_1 + 0xcfe);
    uVar68 = (sVar50 < (short)uVar68) * uVar68 | (ushort)(sVar50 >= (short)uVar68) * sVar50;
    uVar69 = (sVar46 < (short)uVar69) * uVar69 | (ushort)(sVar46 >= (short)uVar69) * sVar46;
    uVar70 = (sVar43 < (short)uVar70) * uVar70 | (ushort)(sVar43 >= (short)uVar70) * sVar43;
    uVar71 = (sVar2 < (short)uVar71) * uVar71 | (ushort)(sVar2 >= (short)uVar71) * sVar2;
    uVar72 = (sVar1 < (short)uVar72) * uVar72 | (ushort)(sVar1 >= (short)uVar72) * sVar1;
    uVar73 = (sVar66 < (short)uVar73) * uVar73 | (ushort)(sVar66 >= (short)uVar73) * sVar66;
    uVar74 = (sVar67 < (short)uVar74) * uVar74 | (ushort)(sVar67 >= (short)uVar74) * sVar67;
    uVar75 = (sVar9 < (short)uVar75) * uVar75 | (ushort)(sVar9 >= (short)uVar75) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd00);
    sVar46 = *(short *)(param_1 + 0xd02);
    sVar43 = *(short *)(param_1 + 0xd04);
    sVar2 = *(short *)(param_1 + 0xd06);
    sVar1 = *(short *)(param_1 + 0xd08);
    sVar66 = *(short *)(param_1 + 0xd0a);
    sVar67 = *(short *)(param_1 + 0xd0c);
    sVar9 = *(short *)(param_1 + 0xd0e);
    uVar78 = (sVar50 < (short)uVar32) * uVar32 | (ushort)(sVar50 >= (short)uVar32) * sVar50;
    uVar81 = (sVar46 < (short)uVar58) * uVar58 | (ushort)(sVar46 >= (short)uVar58) * sVar46;
    uVar84 = (sVar43 < (short)uVar59) * uVar59 | (ushort)(sVar43 >= (short)uVar59) * sVar43;
    uVar87 = (sVar2 < (short)uVar60) * uVar60 | (ushort)(sVar2 >= (short)uVar60) * sVar2;
    uVar90 = (sVar1 < (short)uVar61) * uVar61 | (ushort)(sVar1 >= (short)uVar61) * sVar1;
    uVar93 = (sVar66 < (short)uVar62) * uVar62 | (ushort)(sVar66 >= (short)uVar62) * sVar66;
    uVar96 = (sVar67 < (short)uVar63) * uVar63 | (ushort)(sVar67 >= (short)uVar63) * sVar67;
    uVar99 = (sVar9 < (short)uVar64) * uVar64 | (ushort)(sVar9 >= (short)uVar64) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd10);
    sVar46 = *(short *)(param_1 + 0xd12);
    sVar43 = *(short *)(param_1 + 0xd14);
    sVar2 = *(short *)(param_1 + 0xd16);
    sVar1 = *(short *)(param_1 + 0xd18);
    sVar66 = *(short *)(param_1 + 0xd1a);
    sVar67 = *(short *)(param_1 + 0xd1c);
    sVar9 = *(short *)(param_1 + 0xd1e);
    uVar32 = (sVar50 < (short)uVar68) * uVar68 | (ushort)(sVar50 >= (short)uVar68) * sVar50;
    uVar58 = (sVar46 < (short)uVar69) * uVar69 | (ushort)(sVar46 >= (short)uVar69) * sVar46;
    uVar59 = (sVar43 < (short)uVar70) * uVar70 | (ushort)(sVar43 >= (short)uVar70) * sVar43;
    uVar60 = (sVar2 < (short)uVar71) * uVar71 | (ushort)(sVar2 >= (short)uVar71) * sVar2;
    uVar61 = (sVar1 < (short)uVar72) * uVar72 | (ushort)(sVar1 >= (short)uVar72) * sVar1;
    uVar62 = (sVar66 < (short)uVar73) * uVar73 | (ushort)(sVar66 >= (short)uVar73) * sVar66;
    uVar63 = (sVar67 < (short)uVar74) * uVar74 | (ushort)(sVar67 >= (short)uVar74) * sVar67;
    uVar64 = (sVar9 < (short)uVar75) * uVar75 | (ushort)(sVar9 >= (short)uVar75) * sVar9;
    uVar32 = ((short)uVar32 < (short)uVar76) * uVar76 | ((short)uVar32 >= (short)uVar76) * uVar32;
    uVar58 = ((short)uVar58 < (short)uVar79) * uVar79 | ((short)uVar58 >= (short)uVar79) * uVar58;
    uVar59 = ((short)uVar59 < (short)uVar82) * uVar82 | ((short)uVar59 >= (short)uVar82) * uVar59;
    uVar60 = ((short)uVar60 < (short)uVar85) * uVar85 | ((short)uVar60 >= (short)uVar85) * uVar60;
    uVar61 = ((short)uVar61 < (short)uVar88) * uVar88 | ((short)uVar61 >= (short)uVar88) * uVar61;
    uVar62 = ((short)uVar62 < (short)uVar91) * uVar91 | ((short)uVar62 >= (short)uVar91) * uVar62;
    uVar63 = ((short)uVar63 < (short)uVar94) * uVar94 | ((short)uVar63 >= (short)uVar94) * uVar63;
    uVar64 = ((short)uVar64 < (short)uVar97) * uVar97 | ((short)uVar64 >= (short)uVar97) * uVar64;
    sVar50 = *(short *)(param_1 + 0xd20);
    sVar46 = *(short *)(param_1 + 0xd22);
    sVar43 = *(short *)(param_1 + 0xd24);
    sVar2 = *(short *)(param_1 + 0xd26);
    sVar1 = *(short *)(param_1 + 0xd28);
    sVar66 = *(short *)(param_1 + 0xd2a);
    sVar67 = *(short *)(param_1 + 0xd2c);
    sVar9 = *(short *)(param_1 + 0xd2e);
    uVar68 = (sVar50 < (short)uVar78) * uVar78 | (ushort)(sVar50 >= (short)uVar78) * sVar50;
    uVar69 = (sVar46 < (short)uVar81) * uVar81 | (ushort)(sVar46 >= (short)uVar81) * sVar46;
    uVar70 = (sVar43 < (short)uVar84) * uVar84 | (ushort)(sVar43 >= (short)uVar84) * sVar43;
    uVar71 = (sVar2 < (short)uVar87) * uVar87 | (ushort)(sVar2 >= (short)uVar87) * sVar2;
    uVar72 = (sVar1 < (short)uVar90) * uVar90 | (ushort)(sVar1 >= (short)uVar90) * sVar1;
    uVar73 = (sVar66 < (short)uVar93) * uVar93 | (ushort)(sVar66 >= (short)uVar93) * sVar66;
    uVar74 = (sVar67 < (short)uVar96) * uVar96 | (ushort)(sVar67 >= (short)uVar96) * sVar67;
    uVar75 = (sVar9 < (short)uVar99) * uVar99 | (ushort)(sVar9 >= (short)uVar99) * sVar9;
    uVar68 = ((short)uVar68 < (short)uVar77) * uVar77 | ((short)uVar68 >= (short)uVar77) * uVar68;
    uVar69 = ((short)uVar69 < (short)uVar80) * uVar80 | ((short)uVar69 >= (short)uVar80) * uVar69;
    uVar70 = ((short)uVar70 < (short)uVar83) * uVar83 | ((short)uVar70 >= (short)uVar83) * uVar70;
    uVar71 = ((short)uVar71 < (short)uVar86) * uVar86 | ((short)uVar71 >= (short)uVar86) * uVar71;
    uVar72 = ((short)uVar72 < (short)uVar89) * uVar89 | ((short)uVar72 >= (short)uVar89) * uVar72;
    uVar73 = ((short)uVar73 < (short)uVar92) * uVar92 | ((short)uVar73 >= (short)uVar92) * uVar73;
    uVar74 = ((short)uVar74 < (short)uVar95) * uVar95 | ((short)uVar74 >= (short)uVar95) * uVar74;
    uVar75 = ((short)uVar75 < (short)uVar98) * uVar98 | ((short)uVar75 >= (short)uVar98) * uVar75;
    sVar50 = *(short *)(param_1 + 0xd30);
    sVar46 = *(short *)(param_1 + 0xd32);
    sVar43 = *(short *)(param_1 + 0xd34);
    sVar2 = *(short *)(param_1 + 0xd36);
    sVar1 = *(short *)(param_1 + 0xd38);
    sVar66 = *(short *)(param_1 + 0xd3a);
    sVar67 = *(short *)(param_1 + 0xd3c);
    sVar9 = *(short *)(param_1 + 0xd3e);
    sVar10 = *(short *)(param_1 + 0xd40);
    sVar11 = *(short *)(param_1 + 0xd42);
    sVar12 = *(short *)(param_1 + 0xd44);
    sVar13 = *(short *)(param_1 + 0xd46);
    sVar14 = *(short *)(param_1 + 0xd48);
    sVar15 = *(short *)(param_1 + 0xd4a);
    sVar16 = *(short *)(param_1 + 0xd4c);
    sVar17 = *(short *)(param_1 + 0xd4e);
    sVar18 = *(short *)(param_1 + 0xd50);
    sVar19 = *(short *)(param_1 + 0xd52);
    sVar20 = *(short *)(param_1 + 0xd54);
    sVar21 = *(short *)(param_1 + 0xd56);
    sVar22 = *(short *)(param_1 + 0xd58);
    sVar23 = *(short *)(param_1 + 0xd5a);
    sVar24 = *(short *)(param_1 + 0xd5c);
    sVar25 = *(short *)(param_1 + 0xd5e);
    uVar77 = (ushort)(sVar18 < sVar50) * sVar50 | (ushort)(sVar18 >= sVar50) * sVar18;
    uVar80 = (ushort)(sVar19 < sVar46) * sVar46 | (ushort)(sVar19 >= sVar46) * sVar19;
    uVar83 = (ushort)(sVar20 < sVar43) * sVar43 | (ushort)(sVar20 >= sVar43) * sVar20;
    uVar86 = (ushort)(sVar21 < sVar2) * sVar2 | (ushort)(sVar21 >= sVar2) * sVar21;
    uVar89 = (ushort)(sVar22 < sVar1) * sVar1 | (ushort)(sVar22 >= sVar1) * sVar22;
    uVar92 = (ushort)(sVar23 < sVar66) * sVar66 | (ushort)(sVar23 >= sVar66) * sVar23;
    uVar95 = (ushort)(sVar24 < sVar67) * sVar67 | (ushort)(sVar24 >= sVar67) * sVar24;
    uVar98 = (ushort)(sVar25 < sVar9) * sVar9 | (ushort)(sVar25 >= sVar9) * sVar25;
    sVar50 = *(short *)(param_1 + 0xd60);
    sVar46 = *(short *)(param_1 + 0xd62);
    sVar43 = *(short *)(param_1 + 0xd64);
    sVar2 = *(short *)(param_1 + 0xd66);
    sVar1 = *(short *)(param_1 + 0xd68);
    sVar66 = *(short *)(param_1 + 0xd6a);
    sVar67 = *(short *)(param_1 + 0xd6c);
    sVar9 = *(short *)(param_1 + 0xd6e);
    uVar76 = (ushort)(sVar50 < sVar10) * sVar10 | (ushort)(sVar50 >= sVar10) * sVar50;
    uVar79 = (ushort)(sVar46 < sVar11) * sVar11 | (ushort)(sVar46 >= sVar11) * sVar46;
    uVar82 = (ushort)(sVar43 < sVar12) * sVar12 | (ushort)(sVar43 >= sVar12) * sVar43;
    uVar85 = (ushort)(sVar2 < sVar13) * sVar13 | (ushort)(sVar2 >= sVar13) * sVar2;
    uVar88 = (ushort)(sVar1 < sVar14) * sVar14 | (ushort)(sVar1 >= sVar14) * sVar1;
    uVar91 = (ushort)(sVar66 < sVar15) * sVar15 | (ushort)(sVar66 >= sVar15) * sVar66;
    uVar94 = (ushort)(sVar67 < sVar16) * sVar16 | (ushort)(sVar67 >= sVar16) * sVar67;
    uVar97 = (ushort)(sVar9 < sVar17) * sVar17 | (ushort)(sVar9 >= sVar17) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd70);
    sVar46 = *(short *)(param_1 + 0xd72);
    sVar43 = *(short *)(param_1 + 0xd74);
    sVar2 = *(short *)(param_1 + 0xd76);
    sVar1 = *(short *)(param_1 + 0xd78);
    sVar66 = *(short *)(param_1 + 0xd7a);
    sVar67 = *(short *)(param_1 + 0xd7c);
    sVar9 = *(short *)(param_1 + 0xd7e);
    uVar77 = (sVar50 < (short)uVar77) * uVar77 | (ushort)(sVar50 >= (short)uVar77) * sVar50;
    uVar80 = (sVar46 < (short)uVar80) * uVar80 | (ushort)(sVar46 >= (short)uVar80) * sVar46;
    uVar83 = (sVar43 < (short)uVar83) * uVar83 | (ushort)(sVar43 >= (short)uVar83) * sVar43;
    uVar86 = (sVar2 < (short)uVar86) * uVar86 | (ushort)(sVar2 >= (short)uVar86) * sVar2;
    uVar89 = (sVar1 < (short)uVar89) * uVar89 | (ushort)(sVar1 >= (short)uVar89) * sVar1;
    uVar92 = (sVar66 < (short)uVar92) * uVar92 | (ushort)(sVar66 >= (short)uVar92) * sVar66;
    uVar95 = (sVar67 < (short)uVar95) * uVar95 | (ushort)(sVar67 >= (short)uVar95) * sVar67;
    uVar98 = (sVar9 < (short)uVar98) * uVar98 | (ushort)(sVar9 >= (short)uVar98) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd80);
    sVar46 = *(short *)(param_1 + 0xd82);
    sVar43 = *(short *)(param_1 + 0xd84);
    sVar2 = *(short *)(param_1 + 0xd86);
    sVar1 = *(short *)(param_1 + 0xd88);
    sVar66 = *(short *)(param_1 + 0xd8a);
    sVar67 = *(short *)(param_1 + 0xd8c);
    sVar9 = *(short *)(param_1 + 0xd8e);
    uVar78 = (sVar50 < (short)uVar76) * uVar76 | (ushort)(sVar50 >= (short)uVar76) * sVar50;
    uVar81 = (sVar46 < (short)uVar79) * uVar79 | (ushort)(sVar46 >= (short)uVar79) * sVar46;
    uVar84 = (sVar43 < (short)uVar82) * uVar82 | (ushort)(sVar43 >= (short)uVar82) * sVar43;
    uVar87 = (sVar2 < (short)uVar85) * uVar85 | (ushort)(sVar2 >= (short)uVar85) * sVar2;
    uVar90 = (sVar1 < (short)uVar88) * uVar88 | (ushort)(sVar1 >= (short)uVar88) * sVar1;
    uVar93 = (sVar66 < (short)uVar91) * uVar91 | (ushort)(sVar66 >= (short)uVar91) * sVar66;
    uVar96 = (sVar67 < (short)uVar94) * uVar94 | (ushort)(sVar67 >= (short)uVar94) * sVar67;
    uVar99 = (sVar9 < (short)uVar97) * uVar97 | (ushort)(sVar9 >= (short)uVar97) * sVar9;
    sVar50 = *(short *)(param_1 + 0xd90);
    sVar46 = *(short *)(param_1 + 0xd92);
    sVar43 = *(short *)(param_1 + 0xd94);
    sVar2 = *(short *)(param_1 + 0xd96);
    sVar1 = *(short *)(param_1 + 0xd98);
    sVar66 = *(short *)(param_1 + 0xd9a);
    sVar67 = *(short *)(param_1 + 0xd9c);
    sVar9 = *(short *)(param_1 + 0xd9e);
    uVar76 = (sVar50 < (short)uVar77) * uVar77 | (ushort)(sVar50 >= (short)uVar77) * sVar50;
    uVar79 = (sVar46 < (short)uVar80) * uVar80 | (ushort)(sVar46 >= (short)uVar80) * sVar46;
    uVar82 = (sVar43 < (short)uVar83) * uVar83 | (ushort)(sVar43 >= (short)uVar83) * sVar43;
    uVar85 = (sVar2 < (short)uVar86) * uVar86 | (ushort)(sVar2 >= (short)uVar86) * sVar2;
    uVar88 = (sVar1 < (short)uVar89) * uVar89 | (ushort)(sVar1 >= (short)uVar89) * sVar1;
    uVar91 = (sVar66 < (short)uVar92) * uVar92 | (ushort)(sVar66 >= (short)uVar92) * sVar66;
    uVar94 = (sVar67 < (short)uVar95) * uVar95 | (ushort)(sVar67 >= (short)uVar95) * sVar67;
    uVar97 = (sVar9 < (short)uVar98) * uVar98 | (ushort)(sVar9 >= (short)uVar98) * sVar9;
    sVar50 = *(short *)(param_1 + 0xda0);
    sVar46 = *(short *)(param_1 + 0xda2);
    sVar43 = *(short *)(param_1 + 0xda4);
    sVar2 = *(short *)(param_1 + 0xda6);
    sVar1 = *(short *)(param_1 + 0xda8);
    sVar66 = *(short *)(param_1 + 0xdaa);
    sVar67 = *(short *)(param_1 + 0xdac);
    sVar9 = *(short *)(param_1 + 0xdae);
    uVar77 = (sVar50 < (short)uVar78) * uVar78 | (ushort)(sVar50 >= (short)uVar78) * sVar50;
    uVar80 = (sVar46 < (short)uVar81) * uVar81 | (ushort)(sVar46 >= (short)uVar81) * sVar46;
    uVar83 = (sVar43 < (short)uVar84) * uVar84 | (ushort)(sVar43 >= (short)uVar84) * sVar43;
    uVar86 = (sVar2 < (short)uVar87) * uVar87 | (ushort)(sVar2 >= (short)uVar87) * sVar2;
    uVar89 = (sVar1 < (short)uVar90) * uVar90 | (ushort)(sVar1 >= (short)uVar90) * sVar1;
    uVar92 = (sVar66 < (short)uVar93) * uVar93 | (ushort)(sVar66 >= (short)uVar93) * sVar66;
    uVar95 = (sVar67 < (short)uVar96) * uVar96 | (ushort)(sVar67 >= (short)uVar96) * sVar67;
    uVar98 = (sVar9 < (short)uVar99) * uVar99 | (ushort)(sVar9 >= (short)uVar99) * sVar9;
    sVar50 = *(short *)(param_1 + 0xdb0);
    sVar46 = *(short *)(param_1 + 0xdb2);
    sVar43 = *(short *)(param_1 + 0xdb4);
    sVar2 = *(short *)(param_1 + 0xdb6);
    sVar1 = *(short *)(param_1 + 0xdb8);
    sVar66 = *(short *)(param_1 + 0xdba);
    sVar67 = *(short *)(param_1 + 0xdbc);
    sVar9 = *(short *)(param_1 + 0xdbe);
    uVar76 = (sVar50 < (short)uVar76) * uVar76 | (ushort)(sVar50 >= (short)uVar76) * sVar50;
    uVar79 = (sVar46 < (short)uVar79) * uVar79 | (ushort)(sVar46 >= (short)uVar79) * sVar46;
    uVar82 = (sVar43 < (short)uVar82) * uVar82 | (ushort)(sVar43 >= (short)uVar82) * sVar43;
    uVar85 = (sVar2 < (short)uVar85) * uVar85 | (ushort)(sVar2 >= (short)uVar85) * sVar2;
    uVar88 = (sVar1 < (short)uVar88) * uVar88 | (ushort)(sVar1 >= (short)uVar88) * sVar1;
    uVar91 = (sVar66 < (short)uVar91) * uVar91 | (ushort)(sVar66 >= (short)uVar91) * sVar66;
    uVar94 = (sVar67 < (short)uVar94) * uVar94 | (ushort)(sVar67 >= (short)uVar94) * sVar67;
    uVar97 = (sVar9 < (short)uVar97) * uVar97 | (ushort)(sVar9 >= (short)uVar97) * sVar9;
    uVar76 = ((short)uVar76 < (short)uVar32) * uVar32 | ((short)uVar76 >= (short)uVar32) * uVar76;
    uVar79 = ((short)uVar79 < (short)uVar58) * uVar58 | ((short)uVar79 >= (short)uVar58) * uVar79;
    uVar82 = ((short)uVar82 < (short)uVar59) * uVar59 | ((short)uVar82 >= (short)uVar59) * uVar82;
    uVar85 = ((short)uVar85 < (short)uVar60) * uVar60 | ((short)uVar85 >= (short)uVar60) * uVar85;
    uVar88 = ((short)uVar88 < (short)uVar61) * uVar61 | ((short)uVar88 >= (short)uVar61) * uVar88;
    uVar91 = ((short)uVar91 < (short)uVar62) * uVar62 | ((short)uVar91 >= (short)uVar62) * uVar91;
    uVar94 = ((short)uVar94 < (short)uVar63) * uVar63 | ((short)uVar94 >= (short)uVar63) * uVar94;
    uVar97 = ((short)uVar97 < (short)uVar64) * uVar64 | ((short)uVar97 >= (short)uVar64) * uVar97;
    sVar50 = *(short *)(param_1 + 0xdc0);
    sVar46 = *(short *)(param_1 + 0xdc2);
    sVar43 = *(short *)(param_1 + 0xdc4);
    sVar2 = *(short *)(param_1 + 0xdc6);
    sVar1 = *(short *)(param_1 + 0xdc8);
    sVar66 = *(short *)(param_1 + 0xdca);
    sVar67 = *(short *)(param_1 + 0xdcc);
    sVar9 = *(short *)(param_1 + 0xdce);
    uVar32 = (sVar50 < (short)uVar77) * uVar77 | (ushort)(sVar50 >= (short)uVar77) * sVar50;
    uVar58 = (sVar46 < (short)uVar80) * uVar80 | (ushort)(sVar46 >= (short)uVar80) * sVar46;
    uVar59 = (sVar43 < (short)uVar83) * uVar83 | (ushort)(sVar43 >= (short)uVar83) * sVar43;
    uVar60 = (sVar2 < (short)uVar86) * uVar86 | (ushort)(sVar2 >= (short)uVar86) * sVar2;
    uVar61 = (sVar1 < (short)uVar89) * uVar89 | (ushort)(sVar1 >= (short)uVar89) * sVar1;
    uVar62 = (sVar66 < (short)uVar92) * uVar92 | (ushort)(sVar66 >= (short)uVar92) * sVar66;
    uVar63 = (sVar67 < (short)uVar95) * uVar95 | (ushort)(sVar67 >= (short)uVar95) * sVar67;
    uVar64 = (sVar9 < (short)uVar98) * uVar98 | (ushort)(sVar9 >= (short)uVar98) * sVar9;
    uVar32 = ((short)uVar32 < (short)uVar68) * uVar68 | ((short)uVar32 >= (short)uVar68) * uVar32;
    uVar58 = ((short)uVar58 < (short)uVar69) * uVar69 | ((short)uVar58 >= (short)uVar69) * uVar58;
    uVar59 = ((short)uVar59 < (short)uVar70) * uVar70 | ((short)uVar59 >= (short)uVar70) * uVar59;
    uVar60 = ((short)uVar60 < (short)uVar71) * uVar71 | ((short)uVar60 >= (short)uVar71) * uVar60;
    uVar61 = ((short)uVar61 < (short)uVar72) * uVar72 | ((short)uVar61 >= (short)uVar72) * uVar61;
    uVar62 = ((short)uVar62 < (short)uVar73) * uVar73 | ((short)uVar62 >= (short)uVar73) * uVar62;
    uVar63 = ((short)uVar63 < (short)uVar74) * uVar74 | ((short)uVar63 >= (short)uVar74) * uVar63;
    uVar64 = ((short)uVar64 < (short)uVar75) * uVar75 | ((short)uVar64 >= (short)uVar75) * uVar64;
    uVar32 = ((short)uVar32 < (short)uVar76) * uVar76 | ((short)uVar32 >= (short)uVar76) * uVar32;
    uVar58 = ((short)uVar58 < (short)uVar79) * uVar79 | ((short)uVar58 >= (short)uVar79) * uVar58;
    uVar59 = ((short)uVar59 < (short)uVar82) * uVar82 | ((short)uVar59 >= (short)uVar82) * uVar59;
    uVar60 = ((short)uVar60 < (short)uVar85) * uVar85 | ((short)uVar60 >= (short)uVar85) * uVar60;
    uVar61 = ((short)uVar61 < (short)uVar88) * uVar88 | ((short)uVar61 >= (short)uVar88) * uVar61;
    uVar62 = ((short)uVar62 < (short)uVar91) * uVar91 | ((short)uVar62 >= (short)uVar91) * uVar62;
    uVar63 = ((short)uVar63 < (short)uVar94) * uVar94 | ((short)uVar63 >= (short)uVar94) * uVar63;
    uVar64 = ((short)uVar64 < (short)uVar97) * uVar97 | ((short)uVar64 >= (short)uVar97) * uVar64;
    sVar1 = (0 < (short)uVar32) * uVar32;
    auVar65 = SUB1614((undefined1  [16])0x0,2);
    sVar2 = (0 < (short)uVar58) * uVar58;
    sVar50 = (0 < (short)uVar59) * uVar59;
    sVar43 = (0 < (short)uVar60) * uVar60;
    sVar46 = (0 < (short)uVar61) * uVar61;
    sVar66 = auVar65._8_2_;
    uVar58 = (sVar66 < (short)uVar62) * uVar62 | (ushort)(sVar66 >= (short)uVar62) * sVar66;
    sVar66 = auVar65._10_2_;
    sVar67 = auVar65._12_2_;
    uVar59 = (sVar66 < (short)uVar63) * uVar63 | (ushort)(sVar66 >= (short)uVar63) * sVar66;
    uVar60 = (sVar67 < (short)uVar64) * uVar64 | (ushort)(sVar67 >= (short)uVar64) * sVar67;
    uVar32 = (ushort)(sVar46 < sVar1) * sVar1 | (ushort)(sVar46 >= sVar1) * sVar46;
    uVar58 = (ushort)((short)uVar58 < sVar2) * sVar2 | ((short)uVar58 >= sVar2) * uVar58;
    uVar59 = (ushort)((short)uVar59 < sVar50) * sVar50 | ((short)uVar59 >= sVar50) * uVar59;
    uVar60 = (ushort)((short)uVar60 < sVar43) * sVar43 | ((short)uVar60 >= sVar43) * uVar60;
    uVar32 = ((short)uVar59 < (short)uVar32) * uVar32 | ((short)uVar59 >= (short)uVar32) * uVar59;
    uVar58 = ((short)uVar60 < (short)uVar58) * uVar58 | ((short)uVar60 >= (short)uVar58) * uVar60;
    *(ushort *)(param_1 + 0xfd8) =
         ((short)uVar58 < (short)uVar32) * uVar32 | ((short)uVar58 >= (short)uVar32) * uVar58;
    func_0x0ee11d90(&puStack_4c398,&uStack_40038,0x400);
    if (*(char *)(param_1 + 0x110b) == '\0') {
      lVar55 = 0;
      do {
        bVar29 = *(byte *)((long)&uStack_40028 + lVar55 * 4);
        bVar30 = *(byte *)((long)&uStack_40028 + lVar55 * 4 + 4);
        bVar4 = abStack_40020[lVar55 * 4];
        bVar5 = abStack_40020[lVar55 * 4 + 4];
        puVar38 = (ulong *)(param_1 + 0x120 + lVar55 * 2);
        *puVar38 = (ulong)CONCAT14(*(undefined1 *)((long)&uStack_40030 + lVar55 * 4),
                                   (uint)*(byte *)((long)&uStack_40038 + lVar55 * 4 + 4) << 0x10 |
                                   (uint)*(byte *)((long)&uStack_40038 + lVar55 * 4)) |
                   (ulong)*(byte *)((long)&uStack_40030 + lVar55 * 4 + 4) << 0x30;
        puVar38[1] = (ulong)bVar29 | (ulong)bVar30 << 0x10 | (ulong)bVar4 << 0x20 |
                     (ulong)bVar5 << 0x30;
        lVar55 = lVar55 + 8;
      } while (lVar55 != 0xf8);
      *(ushort *)(param_1 + 0x310) = (ushort)bStack_3fc58;
      *(ushort *)(param_1 + 0x312) = (ushort)bStack_3fc54;
      *(ushort *)(param_1 + 0x314) = (ushort)bStack_3fc50;
      *(ushort *)(param_1 + 0x316) = (ushort)bStack_3fc4c;
      *(ushort *)(param_1 + 0x318) = (ushort)bStack_3fc48;
      *(ushort *)(param_1 + 0x31a) = (ushort)bStack_3fc44;
      *(ushort *)(param_1 + 0x31c) = (ushort)bStack_3fc40;
      *(ushort *)(param_1 + 0x31e) = (ushort)bStack_3fc3c;
code_r0x0caf293e:
      func_0x0cae88c0(param_1);
      return 1;
    }
    memset(&uStack_48038,0xff,0x200);
    lVar55 = 0;
    do {
      bVar29 = *(byte *)((long)&uStack_40028 + lVar55 * 4);
      bVar30 = *(byte *)((long)&uStack_40028 + lVar55 * 4 + 4);
      bVar4 = abStack_40020[lVar55 * 4];
      bVar5 = abStack_40020[lVar55 * 4 + 4];
      *(ulong *)((long)aplStack_48030 + lVar55 * 2 + -8) =
           (ulong)CONCAT14(*(undefined1 *)((long)&uStack_40030 + lVar55 * 4),
                           (uint)*(byte *)((long)&uStack_40038 + lVar55 * 4 + 4) << 0x10 |
                           (uint)*(byte *)((long)&uStack_40038 + lVar55 * 4)) |
           (ulong)*(byte *)((long)&uStack_40030 + lVar55 * 4 + 4) << 0x30;
      *(ulong *)((long)aplStack_48030 + lVar55 * 2) =
           (ulong)bVar29 | (ulong)bVar30 << 0x10 | (ulong)bVar4 << 0x20 | (ulong)bVar5 << 0x30;
      lVar55 = lVar55 + 8;
    } while (lVar55 != 0xf8);
    uStack_47e48 = (ushort)bStack_3fc58;
    uStack_47e46 = (ushort)bStack_3fc54;
    uStack_47e44 = (ushort)bStack_3fc50;
    uStack_47e42 = (ushort)bStack_3fc4c;
    uStack_47e40 = (ushort)bStack_3fc48;
    uStack_47e3e = (ushort)bStack_3fc44;
    uStack_47e3c = (ushort)bStack_3fc40;
    uStack_47e3a = (ushort)bStack_3fc3c;
    lVar55 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
    uVar32 = (**(code **)(**(long **)(param_1 + 0x30) + 0xd0))();
    plVar49 = *(long **)(lVar55 + 0x380);
    plVar7 = *(long **)(lVar55 + 0x388);
    if ((long)plVar7 - (long)plVar49 != 0) {
      plVar53 = plVar7;
      uVar45 = (long)plVar7 - (long)plVar49 >> 3;
code_r0x0caf1f45:
      do {
        uVar54 = uVar45 >> 1;
        plVar3 = plVar49 + uVar54;
        if (*(ushort *)(plVar49[uVar54] + 0x168) < uVar32) goto code_r0x0caf1f30;
        if (*(ushort *)(plVar49[uVar54] + 0x168) <= uVar32) {
          if (uVar45 != 1) {
            do {
              uVar45 = uVar54 >> 1;
              if (*(ushort *)(plVar49[uVar45] + 0x168) < uVar32) {
                plVar49 = plVar49 + uVar45 + 1;
                uVar45 = ~uVar45 + uVar54;
              }
              uVar54 = uVar45;
            } while (uVar45 != 0);
          }
          lVar55 = (long)plVar53 - (long)(plVar3 + 1);
          if (lVar55 != 0) {
            plVar53 = plVar3 + 1;
            uVar45 = lVar55 >> 3;
            do {
              uVar54 = uVar45 >> 1;
              if (*(ushort *)(plVar53[uVar54] + 0x168) <= uVar32) {
                plVar53 = plVar53 + uVar54 + 1;
                uVar54 = ~uVar54 + uVar45;
              }
              uVar45 = uVar54;
            } while (uVar54 != 0);
          }
          if (((plVar49 != plVar53) && (plVar49 != plVar7)) && (lVar55 = *plVar49, lVar55 != 0)) {
            sVar46 = *(short *)(*(long *)(param_1 + 0x30) + 0xaa) -
                     *(short *)(*(long *)(param_1 + 0x30) + 0xa8);
            sVar50 = sVar46 + 0xf;
            if (-1 < sVar46) {
              sVar50 = sVar46;
            }
            uVar39 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
            func_0x0caeb3e0(param_1 + 0x120,&uStack_48038,lVar55,uVar39,
                            (uint)(int)sVar50 >> 4 & 0xffff);
            func_0x0cae88c0(param_1);
            goto code_r0x0caf293e;
          }
          break;
        }
        plVar53 = plVar3;
        uVar45 = uVar54;
      } while (uVar54 != 0);
    }
    goto code_r0x0caf1f6f;
  case 4:
    goto code_r0x0caf1f74;
  case 5:
    memset(&uStack_48038,0,0x8000);
    func_0x0ee11d90(&puStack_4c398,&uStack_48038,0x8000);
    func_0x0ee11d90(&puStack_4c398,abStack_4c138 + 0x100,0x4000);
    apuStack_4c338[1] = auStack_38;
    if ((_DAT_0f6ffb10 == (long *)0x0) &&
       (cVar31 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
       cVar31 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_4c318 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x200);
    uStack_4c314 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x204);
    apuStack_4c338[0] = (undefined1 *)&uStack_40038;
    apuStack_4c338[2] = (undefined1 *)_DAT_014e3710;
    apuStack_4c338[3] = (undefined1 *)_UNK_014e3718;
    lVar55 = 0xe;
    do {
      auStack_400a8[lVar55 * 2] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 1] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 2] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 3] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 4] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 5] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 6] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 7] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 8] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 9] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 10] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 0xb] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 0xc] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 0xd] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 0xe] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 0xf] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 0x10] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 0x11] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 0x12] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 0x13] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 0x14] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 0x15] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 0x16] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 0x17] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 0x18] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 0x19] = uStack_4c314;
      auStack_400a8[lVar55 * 2 + 0x1a] = uStack_4c318;
      auStack_400a8[lVar55 * 2 + 0x1b] = uStack_4c314;
      *(undefined4 *)(&uStack_40038 + lVar55) = uStack_4c318;
      *(undefined4 *)((long)&uStack_40038 + lVar55 * 8 + 4) = uStack_4c314;
      *(undefined4 *)(&uStack_40030 + lVar55) = uStack_4c318;
      *(undefined4 *)((long)&uStack_40030 + lVar55 * 8 + 4) = uStack_4c314;
      lVar55 = lVar55 + 0x10;
    } while (lVar55 != 0x800e);
    cVar31 = func_0x0c9ce640(&uStack_40038,apuStack_4c338[1],&uStack_48038,&uStack_40038,
                             abStack_4c138 + 0x100,&uStack_48038,0x8000);
    if (cVar31 != '\0') {
      func_0x0cae2040(param_1,apuStack_4c338,-(int)*(short *)(*(long *)(param_1 + 0x30) + 0xa8));
    }
    func_0x0ee11d90(&puStack_4c398,abStack_4c138 + 0x100,0x4000);
    func_0x0ee11d90(&puStack_4c398,abStack_4c138 + 0x100,0x4000);
    func_0x0ee11d90(&puStack_4c398,abStack_4c138,0x100);
    *(undefined2 *)(param_1 + 0xfd8) = 0;
    lVar55 = *(long *)(param_1 + 0x30);
    lVar47 = 0;
    do {
      sVar46 = (ushort)abStack_4c138[lVar47] - *(short *)(lVar55 + 0xa8);
      *(short *)(param_1 + 0xbd0 + lVar47 * 2) = sVar46;
      sVar50 = (short)*(undefined4 *)(param_1 + 0xfd8);
      if (sVar50 <= sVar46) {
        sVar50 = sVar46;
      }
      *(short *)(param_1 + 0xfd8) = sVar50;
      sVar46 = (ushort)abStack_4c138[lVar47 + 1] - *(short *)(lVar55 + 0xa8);
      *(short *)(param_1 + 0xbd2 + lVar47 * 2) = sVar46;
      sVar50 = (short)*(undefined4 *)(param_1 + 0xfd8);
      if (sVar50 <= sVar46) {
        sVar50 = sVar46;
      }
      *(short *)(param_1 + 0xfd8) = sVar50;
      lVar47 = lVar47 + 2;
    } while (lVar47 != 0x100);
    func_0x0ee11d90(&puStack_4c398,&uStack_40038,0x400);
    if (*(char *)(param_1 + 0x110b) == '\0') {
      lVar55 = 0;
      do {
        bVar29 = *(byte *)((long)&uStack_40028 + lVar55 * 4);
        bVar30 = *(byte *)((long)&uStack_40028 + lVar55 * 4 + 4);
        bVar4 = abStack_40020[lVar55 * 4];
        bVar5 = abStack_40020[lVar55 * 4 + 4];
        puVar38 = (ulong *)(param_1 + 0x120 + lVar55 * 2);
        *puVar38 = (ulong)CONCAT14(*(undefined1 *)((long)&uStack_40030 + lVar55 * 4),
                                   (uint)*(byte *)((long)&uStack_40038 + lVar55 * 4 + 4) << 0x10 |
                                   (uint)*(byte *)((long)&uStack_40038 + lVar55 * 4)) |
                   (ulong)*(byte *)((long)&uStack_40030 + lVar55 * 4 + 4) << 0x30;
        puVar38[1] = (ulong)bVar29 | (ulong)bVar30 << 0x10 | (ulong)bVar4 << 0x20 |
                     (ulong)bVar5 << 0x30;
        lVar55 = lVar55 + 8;
      } while (lVar55 != 0xf8);
      *(ushort *)(param_1 + 0x310) = (ushort)bStack_3fc58;
      *(ushort *)(param_1 + 0x312) = (ushort)bStack_3fc54;
      *(ushort *)(param_1 + 0x314) = (ushort)bStack_3fc50;
      *(ushort *)(param_1 + 0x316) = (ushort)bStack_3fc4c;
      *(ushort *)(param_1 + 0x318) = (ushort)bStack_3fc48;
      *(ushort *)(param_1 + 0x31a) = (ushort)bStack_3fc44;
      *(ushort *)(param_1 + 0x31c) = (ushort)bStack_3fc40;
      *(ushort *)(param_1 + 0x31e) = (ushort)bStack_3fc3c;
code_r0x0caf285e:
      func_0x0cae88c0(param_1);
      *(undefined1 *)(param_1 + 0x1500) = 1;
      return 1;
    }
    memset(apuStack_4c338,0xff,0x200);
    lVar55 = 0;
    do {
      bVar29 = *(byte *)((long)&uStack_40028 + lVar55 * 4);
      bVar30 = *(byte *)((long)&uStack_40028 + lVar55 * 4 + 4);
      bVar4 = abStack_40020[lVar55 * 4];
      bVar5 = abStack_40020[lVar55 * 4 + 4];
      *(ulong *)((long)apuStack_4c338 + lVar55 * 2) =
           (ulong)CONCAT14(*(undefined1 *)((long)&uStack_40030 + lVar55 * 4),
                           (uint)*(byte *)((long)&uStack_40038 + lVar55 * 4 + 4) << 0x10 |
                           (uint)*(byte *)((long)&uStack_40038 + lVar55 * 4)) |
           (ulong)*(byte *)((long)&uStack_40030 + lVar55 * 4 + 4) << 0x30;
      *(ulong *)((long)apuStack_4c338 + lVar55 * 2 + 8) =
           (ulong)bVar29 | (ulong)bVar30 << 0x10 | (ulong)bVar4 << 0x20 | (ulong)bVar5 << 0x30;
      lVar55 = lVar55 + 8;
    } while (lVar55 != 0xf8);
    uStack_4c148 = (ushort)bStack_3fc58;
    uStack_4c146 = (ushort)bStack_3fc54;
    uStack_4c144 = (ushort)bStack_3fc50;
    uStack_4c142 = (ushort)bStack_3fc4c;
    uStack_4c140 = (ushort)bStack_3fc48;
    uStack_4c13e = (ushort)bStack_3fc44;
    uStack_4c13c = (ushort)bStack_3fc40;
    uStack_4c13a = (ushort)bStack_3fc3c;
    lVar55 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
    uVar32 = (**(code **)(**(long **)(param_1 + 0x30) + 0xd0))();
    plVar49 = *(long **)(lVar55 + 0x380);
    plVar7 = *(long **)(lVar55 + 0x388);
    if ((long)plVar7 - (long)plVar49 != 0) {
      plVar53 = plVar7;
      uVar45 = (long)plVar7 - (long)plVar49 >> 3;
code_r0x0caf1399:
      do {
        uVar54 = uVar45 >> 1;
        plVar3 = plVar49 + uVar54;
        if (*(ushort *)(plVar49[uVar54] + 0x168) < uVar32) goto code_r0x0caf1380;
        if (*(ushort *)(plVar49[uVar54] + 0x168) <= uVar32) {
          if (uVar45 != 1) {
            do {
              uVar45 = uVar54 >> 1;
              if (*(ushort *)(plVar49[uVar45] + 0x168) < uVar32) {
                plVar49 = plVar49 + uVar45 + 1;
                uVar45 = ~uVar45 + uVar54;
              }
              uVar54 = uVar45;
            } while (uVar45 != 0);
          }
          lVar55 = (long)plVar53 - (long)(plVar3 + 1);
          if (lVar55 != 0) {
            plVar53 = plVar3 + 1;
            uVar45 = lVar55 >> 3;
            do {
              uVar54 = uVar45 >> 1;
              if (*(ushort *)(plVar53[uVar54] + 0x168) <= uVar32) {
                plVar53 = plVar53 + uVar54 + 1;
                uVar54 = ~uVar54 + uVar45;
              }
              uVar45 = uVar54;
            } while (uVar54 != 0);
          }
          if (((plVar49 != plVar53) && (plVar49 != plVar7)) && (lVar55 = *plVar49, lVar55 != 0)) {
            sVar46 = *(short *)(*(long *)(param_1 + 0x30) + 0xaa) -
                     *(short *)(*(long *)(param_1 + 0x30) + 0xa8);
            sVar50 = sVar46 + 0xf;
            if (-1 < sVar46) {
              sVar50 = sVar46;
            }
            uVar39 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
            func_0x0caeb3e0(param_1 + 0x120,apuStack_4c338,lVar55,uVar39,
                            (uint)(int)sVar50 >> 4 & 0xffff);
            func_0x0cae88c0(param_1);
            goto code_r0x0caf285e;
          }
          break;
        }
        plVar53 = plVar3;
        uVar45 = uVar54;
      } while (uVar54 != 0);
    }
code_r0x0caf1f6f:
    auVar100 = func_0x04890760();
    param_3 = auVar100._8_8_;
code_r0x0caf1f74:
    if (param_3 != 2) {
      return 1;
    }
    iVar33 = 0;
code_r0x0caf040b:
    uStack_4c378 = CONCAT44(uStack_4c378._4_4_,iVar33);
    iVar33 = (int)(short)iVar33;
    uStack_40038 = (long *)CONCAT44(uStack_40038._4_4_,iVar33);
    func_0x0470d9a0(abStack_4c138 + 0x100,&UNK_011ae7e3,0xb,1,&uStack_40038);
    uVar45 = (ulong)(abStack_4c138[0x100] >> 1);
    pbVar26 = &bStack_4c037;
    if ((abStack_4c138[0x100] & 1) != 0) {
      uVar45 = uStack_4c030;
      pbVar26 = pbStack_4c028;
    }
    apuStack_4c338[0] = (undefined1 *)0x0;
    if (pbVar26 == (byte *)0x0) {
      apuStack_4c338[0] = (undefined1 *)((ulong)((uint)uVar45 & 0x7f) << 0x30);
    }
    else {
      lVar55 = uVar45 + 9;
      puVar38 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar55,8);
      if (lVar55 != 0 && puVar38 == (ulong *)0x0) {
        func_0x0eec74c0(lVar55,8);
      }
      *puVar38 = uVar45;
      func_0x0eee2f00(puVar38 + 1,pbVar26,uVar45);
      *(undefined1 *)((long)puVar38 + uVar45 + 8) = 0;
      apuStack_4c338[0] =
           (undefined1 *)((ulong)(puVar38 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_40038 = (long *)((ulong)uStack_40038 & 0xffffffffffffff00);
    uStack_40028 = uStack_40028 & 0xffffffffffffff00;
    func_0x0eeb79f0(&uStack_48038,apuStack_4c338);
    if (((ulong)apuStack_4c338[0] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)apuStack_4c338[0] & 0xff00ffffffffffff) - 8);
    }
    apuStack_4c338[0] = (undefined1 *)0x0;
    if ((abStack_4c138[0x100] & 1) != 0) {
      func_0x0412a280(pbStack_4c028,
                      CONCAT44(uStack_4c034,
                               CONCAT22(uStack_4c036,CONCAT11(bStack_4c037,abStack_4c138[0x100]))) &
                      0xfffffffffffffffe);
    }
    uVar45 = uStack_4c378;
    if ((*(char *)(param_1 + 0x6d) == '\x01') && ((byte)(*(char *)(param_1 + 0x6c) - 0x18U) < 5)) {
      if (*(char *)(param_1 + 0x1503) == '\x01') {
        func_0x0caf2b90(param_1,iVar33,&puStack_4c398);
      }
      else {
        if (*(char *)(param_1 + 0x1502) == '\0') {
          *(undefined1 *)(param_1 + 0x1502) = 1;
          uVar41 = _UNK_014e7ba8;
          uVar39 = _DAT_014e7ba0;
          *(undefined8 *)(param_1 + 0x1180) = _DAT_014e7ba0;
          *(undefined8 *)(param_1 + 0x1188) = uVar41;
          *(undefined8 *)(param_1 + 0x1170) = uVar39;
          *(undefined8 *)(param_1 + 0x1178) = uVar41;
          *(undefined8 *)(param_1 + 0x1160) = uVar39;
          *(undefined8 *)(param_1 + 0x1168) = uVar41;
          lVar55 = *(long *)(param_1 + 0x108);
          if (*(long *)(param_1 + 0x110) != lVar55) {
            lVar47 = 0;
            uVar54 = 0;
            do {
              *(undefined8 *)(lVar55 + lVar47) = 0x7fffffff7fffffff;
              uVar54 = uVar54 + 1;
              lVar55 = *(long *)(param_1 + 0x108);
              lVar47 = lVar47 + 0x68;
            } while (uVar54 < (ulong)((*(long *)(param_1 + 0x110) - lVar55 >> 3) *
                                     0x4ec4ec4ec4ec4ec5));
          }
          *(undefined8 *)(param_1 + 0x1190) = 0x7fffffff7fffffff;
          *(undefined2 *)(param_1 + 0x1500) = 1;
        }
        uVar32 = *(ushort *)(*(long *)(param_1 + 0x30) + 0xa8);
        sVar50 = (short)(iVar33 + -4);
        sVar46 = sVar50 * 0x10;
        cVar31 = (char)(iVar33 + -4);
        if ((sVar46 < (short)uVar32) || (*(short *)(*(long *)(param_1 + 0x30) + 0xaa) <= sVar46)) {
          uVar51 = (uint)uStack_4c378;
          if (*(long *)(param_1 + 0x1508) == 0) {
            puVar40 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if (puVar40 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x18,0);
            }
            *puVar40 = 0;
            puVar40[1] = 0;
            puVar40[2] = 0;
            *(undefined8 **)(param_1 + 0x1508) = puVar40;
            sVar46 = *(short *)(*(long *)(param_1 + 0x30) + 0xaa) -
                     *(short *)(*(long *)(param_1 + 0x30) + 0xa8);
            if (0x1e < (ushort)(sVar46 + 0xfU)) {
              sVar43 = sVar46 + 0xf;
              if (-1 < sVar46) {
                sVar43 = sVar46;
              }
              func_0x0cb0bf70(puVar40,(uint)(int)sVar43 >> 4 & 0xffff);
            }
          }
          if (-1 < (short)(ushort)uVar45) {
            sVar43 = *(short *)(*(long *)(param_1 + 0x30) + 0xaa) -
                     *(short *)(*(long *)(param_1 + 0x30) + 0xa8);
            sVar46 = sVar43 + 0xf;
            if (-1 < sVar43) {
              sVar46 = sVar43;
            }
            if ((ushort)uVar45 < (ushort)((uint)(int)sVar46 >> 4)) {
              uVar54 = (ulong)(uVar51 & 0xffff);
              lVar55 = **(long **)(param_1 + 0x1508);
              uVar45 = ((*(long **)(param_1 + 0x1508))[1] - lVar55 >> 3) * 0x4ec4ec4ec4ec4ec5;
              if (uVar54 <= uVar45 && uVar45 - uVar54 != 0) {
                if ((_DAT_0f6ffb10 == (long *)0x0) &&
                   (cVar27 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                             &UNK_013a2901), cVar27 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                func_0x0ca917b0(lVar55 + uVar54 * 0x68,*(undefined8 *)(*_DAT_0f6ffb10 + 0x200),0,0,
                                (int)cVar31);
                uStack_40038 = (long *)CONCAT44((int)sVar50,*(undefined4 *)(param_1 + 0x50));
                uStack_40030 = CONCAT44(uStack_40030._4_4_,*(undefined4 *)(param_1 + 0x54));
                lVar55 = **(long **)(param_1 + 0x1508);
                uVar45 = ((*(long **)(param_1 + 0x1508))[1] - lVar55 >> 3) * 0x4ec4ec4ec4ec4ec5;
                if (uVar54 <= uVar45 && uVar45 - uVar54 != 0) {
                  uVar39 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2c0))();
                  func_0x0ca96ac0(lVar55 + uVar54 * 0x68,&puStack_4c398,uVar39,&uStack_40038,0,0);
                  goto LAB_0caf0841;
                }
              }
              func_0x0cb0c790();
code_r0x0caf2a7f:
              uVar39 = func_0x04882e30();
              plVar49 = uStack_40038;
              uStack_40038 = (long *)0x0;
              if (plVar49 != (long *)0x0) {
                (**(code **)(*plVar49 + 8))();
                uVar39 = func_0x0eee2d70(uVar39);
                func_0x0532eab0(&uStack_40038);
                uVar39 = func_0x0eee2d70(uVar39);
                func_0x0532ea80(&uStack_48038);
                uVar39 = func_0x0eee2d70(uVar39);
                uVar39 = func_0x04882e20(uVar39);
                if ((abStack_4c138[0x100] & 1) != 0) {
                  func_0x0412a280(pbStack_4c028,
                                  CONCAT44(uStack_4c034,
                                           CONCAT22(uStack_4c036,
                                                    CONCAT11(bStack_4c037,abStack_4c138[0x100]))) &
                                  0xfffffffffffffffe);
                  uVar39 = func_0x0eee2d70(uVar39);
                  uVar39 = func_0x0eee2d70(uVar39);
                  func_0x0eeb81b0(&uStack_48038);
                }
              }
              func_0x0eee2d70(uVar39);
              pcVar8 = (code *)swi(3);
              uVar39 = (*pcVar8)();
              return uVar39;
            }
          }
        }
        else {
          uVar54 = (ulong)((iVar33 - (uint)(uVar32 >> 4)) + 0xfc & 0xff);
          lVar55 = *(long *)(param_1 + 0x108);
          uVar45 = (*(long *)(param_1 + 0x110) - lVar55 >> 3) * 0x4ec4ec4ec4ec4ec5;
          if (uVar54 <= uVar45 && uVar45 - uVar54 != 0) {
            uVar39 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2c0))();
            lVar55 = lVar55 + uVar54 * 0x68;
            uStack_40038 = (long *)CONCAT44((int)cVar31,*(undefined4 *)(param_1 + 0x50));
            uStack_40030 = CONCAT44(uStack_40030._4_4_,*(undefined4 *)(param_1 + 0x54));
            func_0x0ca96ac0(lVar55,&puStack_4c398,uVar39,&uStack_40038,0,0);
            *(char *)(lVar55 + 0x61) = cVar31;
          }
        }
      }
    }
    else {
      func_0x0caf2b90(param_1,iVar33,&puStack_4c398);
    }
LAB_0caf0841:
    func_0x0eeb81b0(&uStack_48038);
    break;
  case 6:
    if (param_5 < 0xfffffffffffffff8) {
      puVar38 = (ulong *)(param_1 + 0x14e8);
      uVar45 = (*puVar38 & 0xfffffffffffffffe) - 1;
      if ((*(byte *)puVar38 & 1) == 0) {
        uVar45 = 0x16;
      }
      if (uVar45 < param_5) {
        uVar45 = 0x19;
        if ((param_5 | 7) != 0x17) {
          uVar45 = param_5 | 7;
        }
        uVar54 = 0x16;
        if (0x16 < param_5) {
          uVar54 = uVar45;
        }
        func_0x0412f770(puVar38,uVar54);
      }
      uStack_40038 = (long *)((ulong)uStack_40038 & 0xffffffffffffff00);
      uStack_40030 = 0;
      uStack_40028 = 0;
      _abStack_40020 = 0;
      uStack_40018 = 0;
      auStack_40010[0] = 0x3f800000;
      uStack_40008 = 0;
      uStack_40000 = 0;
      uStack_3fff8 = 0;
      uStack_3fff0 = 0;
      uStack_3ffe8 = 0;
      uStack_3ffe0 = 0;
      uStack_3ffd8 = 0;
      auStack_3ffd0[0] = 0x3f800000;
      uStack_3ffc8 = 0;
      uStack_3ffc0 = 0;
      uStack_3ffb8 = 0;
      func_0x0caeaeb0(param_1,&puStack_4c398,&uStack_40038);
      func_0x0cadaa30(param_1 + 0x13c8,&uStack_40038);
      func_0x0532eab0(&uStack_40038);
      return 1;
    }
    goto code_r0x0caf2a7f;
  case 7:
    bVar29 = *(byte *)(param_1 + 0x70);
    if ((bVar29 & 1) == 0) {
      uVar45 = (ulong)(bVar29 >> 1);
    }
    else {
      uVar45 = *(ulong *)(param_1 + 0x78);
    }
    if (param_5 < uVar45 || param_5 - uVar45 == 0) {
      if ((bVar29 & 1) == 0) {
        lVar55 = param_1 + 0x71;
        *(char *)(param_1 + 0x70) = (char)param_5 * '\x02';
      }
      else {
        lVar55 = *(long *)(param_1 + 0x80);
        *(ulong *)(param_1 + 0x78) = param_5;
      }
      *(undefined1 *)(lVar55 + param_5) = 0;
    }
    else {
      func_0x0412ffc0(param_1 + 0x70,param_5 - uVar45,0);
    }
    bVar57 = (*(byte *)(param_1 + 0x70) & 1) != 0;
    lVar55 = param_1 + 0x71;
    if (bVar57) {
      lVar55 = *(long *)(param_1 + 0x80);
    }
    uVar45 = (ulong)(*(byte *)(param_1 + 0x70) >> 1);
    if (bVar57) {
      uVar45 = *(ulong *)(param_1 + 0x78);
    }
    func_0x0ee11d90(&puStack_4c398,lVar55,uVar45);
    break;
  case 8:
    func_0x0d6c71b0(&uStack_40038,&puStack_4c398);
    plVar49 = uStack_40038;
    if (uStack_40038 == (long *)0x0) {
      return 1;
    }
    uVar39 = *(undefined8 *)(param_1 + 0xf8);
    uVar41 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2c0))();
    func_0x0c9e5850(uVar39,plVar49,uVar41);
    goto code_r0x0caf2492;
  case 9:
    iVar33 = func_0x0ee11c10(&puStack_4c398);
    if (0 < iVar33) {
code_r0x0caf1fc1:
      uVar51 = func_0x0ee11c10(&puStack_4c398);
      uStack_4c036 = (ushort)uVar51 & 0xff;
      bStack_4c037 = (byte)(uVar51 >> 8) & 0xf;
      abStack_4c138[0x100] = (byte)(uVar51 >> 0xc) & 0xf;
      uVar32 = func_0x0ee11b50(&puStack_4c398);
      if (_DAT_0f6fad88 != 0) {
        bVar30 = (byte)uVar32;
        uVar54 = (ulong)bVar30;
        uVar45 = _DAT_0f6fad88 - (_DAT_0f6fad88 >> 1 & 0x5555555555555555);
        uVar45 = (uVar45 >> 2 & 0x3333333333333333) + (uVar45 & 0x3333333333333333);
        uVar45 = ((uVar45 >> 4) + uVar45 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        bVar29 = (byte)(uVar45 >> 0x38);
        uVar51 = (uint)bVar30;
        if (uVar45 >> 0x38 < 2) {
          uVar45 = (ulong)((uint)bVar30 & (int)_DAT_0f6fad88 - 1U);
        }
        else {
          uVar45 = uVar54;
          if (_DAT_0f6fad88 <= uVar54) {
            uVar45 = (ulong)(byte)((uVar32 & 0xff) % (ushort)(byte)_DAT_0f6fad88);
          }
        }
        plVar49 = *(long **)(_DAT_0f6fad80 + uVar45 * 8);
        if ((plVar49 != (long *)0x0) && (plVar49 = (long *)*plVar49, plVar49 != (long *)0x0)) {
          if (bVar29 < 2) {
            do {
              if (plVar49[1] == uVar54) {
                if (*(uint *)(plVar49 + 2) == uVar51) goto code_r0x0caf2121;
              }
              else if ((plVar49[1] & _DAT_0f6fad88 - 1) != uVar45) break;
              plVar49 = (long *)*plVar49;
            } while (plVar49 != (long *)0x0);
          }
          else {
            do {
              uVar48 = plVar49[1];
              if (uVar48 == uVar54) {
                if (*(uint *)(plVar49 + 2) == uVar51) goto code_r0x0caf2121;
              }
              else {
                if (_DAT_0f6fad88 <= uVar48) {
                  if ((uVar48 | _DAT_0f6fad88) >> 0x20 == 0) {
                    if ((uVar48 & 0xffffffff) % (_DAT_0f6fad88 & 0xffffffff) == uVar45)
                    goto code_r0x0caf20b6;
                    break;
                  }
                  uVar48 = uVar48 % _DAT_0f6fad88;
                }
                if (uVar48 != uVar45) break;
              }
code_r0x0caf20b6:
              plVar49 = (long *)*plVar49;
            } while (plVar49 != (long *)0x0);
          }
          goto code_r0x0caf214a;
        }
        goto code_r0x0caf21af;
      }
      goto code_r0x0caf2290;
    }
    break;
  case 10:
    cVar31 = (**(code **)(**(long **)(param_1 + 0x28) + 0x9f0))();
    if ((cVar31 == '\0') &&
       ((*(char *)(param_1 + 0x6d) != '\x01' || (*(char *)(param_1 + 0x6c) < ')')))) {
      bVar29 = func_0x0ee11a90(&puStack_4c398);
      if (bVar29 != 0) {
        uVar51 = (uint)bVar29;
        do {
          bVar29 = func_0x0ee11a90(&puStack_4c398);
          uStack_40038 = (long *)CONCAT62(uStack_40038._2_6_,(ushort)bVar29);
          uVar28 = func_0x0ee11a90(&puStack_4c398);
          lVar55 = func_0x0cb14300(param_1 + 0xfe0,bVar29,&uStack_40038);
          *(undefined1 *)(lVar55 + 0x12) = uVar28;
          uVar51 = uVar51 - 1;
        } while (uVar51 != 0);
      }
    }
    else {
      uVar32 = func_0x0ee11b50(&puStack_4c398);
      if (uVar32 != 0) {
        uVar51 = (uint)uVar32;
        do {
          uVar37 = func_0x0ee11b50(&puStack_4c398);
          uStack_40038 = (long *)CONCAT62(uStack_40038._2_6_,(short)uVar37);
          uVar28 = func_0x0ee11a90(&puStack_4c398);
          lVar55 = func_0x0cb14300(param_1 + 0xfe0,uVar37,&uStack_40038);
          *(undefined1 *)(lVar55 + 0x12) = uVar28;
          uVar51 = uVar51 - 1;
        } while (uVar51 != 0);
      }
    }
    func_0x0cae88c0(param_1);
    break;
  case 0xb:
    uVar37 = func_0x0ee11c10(&puStack_4c398);
    *(undefined4 *)(param_1 + 0x1114) = uVar37;
    break;
  case 0xc:
    func_0x0ee11a90(&puStack_4c398);
    func_0x0ee11a90(&puStack_4c398);
    func_0x0ee11a90(&puStack_4c398);
    *(undefined1 *)(param_1 + 0x14e0) = 1;
    bVar29 = func_0x0ee11a90(&puStack_4c398);
    *(float *)(param_1 + 0x14d4) = (float)bVar29;
    bVar29 = func_0x0ee11a90(&puStack_4c398);
    *(float *)(param_1 + 0x14d0) = (float)bVar29;
    bVar29 = func_0x0ee11a90(&puStack_4c398);
    *(float *)(param_1 + 0x14c8) = (float)bVar29;
    bVar29 = func_0x0ee11a90(&puStack_4c398);
    *(float *)(param_1 + 0x14cc) = (float)bVar29;
    break;
  case 0xd:
    cVar31 = func_0x0ee11a90(&puStack_4c398);
    if (cVar31 != '\0') {
      do {
        bVar29 = func_0x0ee11a90(&puStack_4c398);
        *(undefined1 *)(param_1 + 0x1009 + (ulong)bVar29) = 1;
        cVar31 = cVar31 + -1;
      } while (cVar31 != '\0');
    }
    break;
  case 0xe:
    lStack_4c370 = param_1 + 0x1568;
    uStack_4c378 = param_1 + 0x1748;
    lStack_4c358 = param_1 + 0x1800;
    (**(code **)(*(long *)(param_1 + 0x15c0) + 0x18))(param_1 + 0x15c0);
    uVar41 = 0;
    uVar39 = 0xfffff;
    if (*(char *)(param_1 + 0x1600) == '\x02') {
      uVar39 = uVar41;
    }
    *(undefined8 *)(param_1 + 0x1608) = uVar39;
    *(undefined8 *)(param_1 + 0x15e8) = *(undefined8 *)(param_1 + 0x15e0);
    lStack_4c340 = param_1 + 0x1628;
    (**(code **)(*(long *)(param_1 + 0x1628) + 0x18))(param_1 + 0x1628);
    uVar39 = 0xfffff;
    if (*(char *)(param_1 + 0x1668) == '\x02') {
      uVar39 = uVar41;
    }
    *(undefined8 *)(param_1 + 0x1670) = uVar39;
    *(undefined8 *)(param_1 + 0x1650) = *(undefined8 *)(param_1 + 0x1648);
    lStack_4c348 = param_1 + 0x1690;
    (**(code **)(*(long *)(param_1 + 0x1690) + 0x18))(param_1 + 0x1690);
    uVar39 = 0xfffff;
    if (*(char *)(param_1 + 0x16d0) == '\x02') {
      uVar39 = uVar41;
    }
    *(undefined8 *)(param_1 + 0x16d8) = uVar39;
    *(undefined8 *)(param_1 + 0x16b8) = *(undefined8 *)(param_1 + 0x16b0);
    (**(code **)(*(long *)(param_1 + 0x16f8) + 0x18))(param_1 + 0x16f8);
    uVar39 = 0xfffff;
    if (*(char *)(param_1 + 0x1738) == '\x02') {
      uVar39 = uVar41;
    }
    *(undefined8 *)(param_1 + 0x1740) = uVar39;
    *(undefined8 *)(param_1 + 0x1720) = *(undefined8 *)(param_1 + 0x1718);
    (**(code **)(*(long *)(param_1 + 0x1748) + 0x18))(uStack_4c378);
    uVar39 = 0xfffff;
    if (*(char *)(param_1 + 0x1788) == '\x02') {
      uVar39 = uVar41;
    }
    *(undefined8 *)(param_1 + 0x1790) = uVar39;
    *(undefined8 *)(param_1 + 6000) = *(undefined8 *)(param_1 + 0x1768);
    lStack_4c350 = param_1 + 0x1798;
    (**(code **)(*(long *)(param_1 + 0x1798) + 0x18))(param_1 + 0x1798);
    uVar39 = 0xfffff;
    if (*(char *)(param_1 + 0x17d8) == '\x02') {
      uVar39 = uVar41;
    }
    *(undefined8 *)(param_1 + 0x17e0) = uVar39;
    *(undefined8 *)(param_1 + 0x17c0) = *(undefined8 *)(param_1 + 0x17b8);
    (**(code **)(*(long *)(param_1 + 0x1800) + 0x18))(lStack_4c358);
    uVar39 = 0xfffff;
    if (*(char *)(param_1 + 0x1840) == '\x02') {
      uVar39 = uVar41;
    }
    *(undefined8 *)(param_1 + 0x1848) = uVar39;
    *(undefined8 *)(param_1 + 0x1828) = *(undefined8 *)(param_1 + 0x1820);
    (**(code **)(*(long *)(param_1 + 0x1568) + 0x18))(lStack_4c370);
    uVar39 = 0xfffff;
    if (*(char *)(param_1 + 0x15a8) == '\x02') {
      uVar39 = uVar41;
    }
    *(undefined8 *)(param_1 + 0x15b0) = uVar39;
    uVar45 = 0;
    *(undefined8 *)(param_1 + 0x1590) = *(undefined8 *)(param_1 + 0x1588);
    uStack_4c35c = func_0x0ee11c10(&puStack_4c398);
    if (0 < (int)uStack_4c35c) {
      do {
        uVar37 = func_0x0ee11c10(&puStack_4c398);
        uStack_4c378._0_4_ = uVar37;
        uVar37 = func_0x0ee11c10(&puStack_4c398);
        uStack_4c368 = CONCAT44(uStack_4c368._4_4_,uVar37);
        uVar37 = func_0x0ee11c10(&puStack_4c398);
        uVar34 = func_0x0ee11c10(&puStack_4c398);
        uVar35 = func_0x0ee11c10(&puStack_4c398);
        uVar36 = func_0x0ee11c10(&puStack_4c398);
        if (*(long *)(param_1 + 0x15b0) ==
            *(long *)(param_1 + 0x1590) - *(long *)(param_1 + 0x1588) >> 2) {
          uVar51 = (uint)*(long *)(param_1 + 0x15b8) & 0xfffff;
          lVar55 = (ulong)(uVar51 != 0xfffff) + *(long *)(param_1 + 0x15b8);
          while ((ulong)(uVar51 >> 0xc) <
                 (ulong)(*(long *)(param_1 + 0x1578) - *(long *)(param_1 + 0x1570) >> 3)) {
            lVar47 = *(long *)(*(long *)(param_1 + 0x1570) + (ulong)(uVar51 >> 0xc) * 8);
            if (((lVar47 == 0) || (uVar51 == 0xfffff)) ||
               (0xffefffff < *(uint *)(lVar47 + (ulong)(uVar51 & 0xfff) * 4))) {
              *(long *)(param_1 + 0x15b8) = lVar55;
              goto code_r0x0caf18b0;
            }
            uVar51 = (uint)lVar55 & 0xfffff;
            lVar55 = lVar55 + (ulong)(uVar51 != 0xfffff);
          }
          *(long *)(param_1 + 0x15b8) = lVar55;
        }
        else {
          uVar51 = *(uint *)(*(long *)(param_1 + 0x1588) + *(long *)(param_1 + 0x15b0) * 4);
        }
code_r0x0caf18b0:
        auVar100 = func_0x0cb0d270(lStack_4c370,uVar51,1);
        uVar6 = *(undefined4 *)(*auVar100._0_8_ + -4 + auVar100._8_8_ * 4);
        uStack_40038 = (long *)CONCAT44((undefined4)uStack_4c368,(uint)uStack_4c378);
        uStack_40030 = CONCAT44(uVar34,uVar37);
        uStack_40028 = CONCAT44(uVar36,uVar35);
        uStack_4c378 = CONCAT44(uStack_4c378._4_4_,uVar6);
        func_0x0cb182e0(lStack_4c340,uVar6,&uStack_40038);
        bVar29 = func_0x0ee11a90(&puStack_4c398);
        uVar54 = 0x12;
        bVar57 = true;
        switch(bVar29 - 1) {
        case 0:
          uStack_4c39c = 0;
          puVar56 = &UNK_014c9166;
          break;
        case 1:
          uStack_4c39c = 0xfffffffd;
          uVar54 = 0x13;
          puVar56 = &UNK_0130a07e;
          break;
        case 2:
          uStack_4c39c = 0;
          puVar56 = &UNK_0119c6fb;
          break;
        case 3:
        case 5:
          uStack_4c39c = 0;
          uVar54 = 0x11;
          puVar56 = &UNK_012bd6fd;
          break;
        case 4:
          uStack_4c39c = 0xfffffffd;
          uVar54 = 0x1a;
          bVar57 = false;
          puVar56 = &UNK_013762b7;
          break;
        default:
          goto code_r0x0caf1790;
        }
        lVar55 = *(long *)(param_1 + 0x15e0);
        lVar47 = *(long *)(param_1 + 0x15e8) - lVar55;
        uStack_4c368 = uVar45;
        if (lVar47 != 0) {
          uVar45 = lVar47 >> 2;
          lVar47 = *(long *)(param_1 + 0x1610);
          do {
            uVar45 = uVar45 - 1;
            lVar42 = *(long *)(lVar47 + (uVar45 >> 5) * 8);
            uVar48 = (ulong)((uint)uVar45 & 0x1f);
            bVar29 = *(byte *)(lVar42 + uVar48 * 0x18);
            if ((bVar29 & 1) == 0) {
              uVar52 = (ulong)(bVar29 >> 1);
            }
            else {
              uVar52 = *(ulong *)(lVar42 + 8 + uVar48 * 0x18);
            }
            if (uVar54 == uVar52) {
              lVar42 = lVar42 + uVar48 * 0x18;
              if ((bVar29 & 1) == 0) {
                lVar42 = lVar42 + 1;
              }
              else {
                lVar42 = *(long *)(lVar42 + 0x10);
              }
              iVar33 = bcmp(puVar56,lVar42,uVar54);
              if (iVar33 == 0) {
                uVar51 = *(uint *)(lVar55 + uVar45 * 4);
                if ((~uVar51 & 0xfffff) != 0) goto code_r0x0caf1760;
                break;
              }
            }
          } while (uVar45 != 0);
        }
        uVar51 = func_0x0caffd70(lStack_4c370,puVar56,uVar54);
        uVar39 = *(undefined8 *)(param_1 + 0x1888);
        if (bVar57) {
          uStack_40038 = (long *)CONCAT71(uStack_40038._1_7_,(char)uVar54 * '\x02');
          uVar48 = (long)&uStack_40038 + 1;
        }
        else {
          uVar45 = (uVar54 | 7) + 1;
          if ((uVar54 | 7) == 0x17) {
            uVar45 = 0x1a;
          }
          uVar48 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar45);
          if (uVar48 == 0) {
            func_0x0eec74c0(uVar45,0);
          }
          uStack_40038 = (long *)(uVar45 | 1);
          uStack_40030 = uVar54;
          uStack_40028 = uVar48;
        }
        func_0x0eee2f00(uVar48,puVar56,uVar54);
        *(undefined1 *)(uVar48 + uVar54) = 0;
        lVar55 = func_0x0d2ee9f0(uVar39,&uStack_40038);
        if (((ulong)uStack_40038 & 1) != 0) {
          func_0x0412a280(uStack_40028,(ulong)uStack_40038 & 0xfffffffffffffffe);
        }
        if (lVar55 != 0) {
          func_0x0cb04680(lStack_4c358,uVar51,0,lVar55);
        }
code_r0x0caf1760:
        uVar45 = uStack_4c378;
        func_0x0cb18380(lStack_4c348,uStack_4c378 & 0xffffffff,uVar51);
        func_0x0cb183f0(lStack_4c350,uVar45 & 0xffffffff,uStack_4c39c);
        uVar45 = uStack_4c368;
code_r0x0caf1790:
        uVar51 = (int)uVar45 + 1;
        uVar45 = (ulong)uVar51;
      } while (uVar51 != uStack_4c35c);
    }
    break;
  case 0xf:
    func_0x0d6c71b0(&uStack_40038,&puStack_4c398);
    plVar49 = uStack_40038;
    if (uStack_40038 == (long *)0x0) {
      return 1;
    }
    uVar39 = *(undefined8 *)(param_1 + 0x100);
    uVar41 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2c0))();
    func_0x0c9e5850(uVar39,plVar49,uVar41);
code_r0x0caf2492:
    plVar49 = uStack_40038;
    uStack_40038 = (long *)0x0;
    if (plVar49 != (long *)0x0) {
      (**(code **)(*plVar49 + 8))();
    }
    break;
  case 0x11:
    uVar37 = func_0x0ee11c10(&puStack_4c398);
    *(undefined4 *)(param_1 + 0x14d8) = uVar37;
    *(undefined1 *)(param_1 + 0x14dc) = 1;
    break;
  case 0x12:
    cVar31 = func_0x0ee11a90(&puStack_4c398);
    *(bool *)(param_1 + 0x14e4) = cVar31 != '\0';
    break;
  case 0x14:
    func_0x0cae7370(param_1,&puStack_4c398);
    break;
  case 0x4b:
    if (*(char *)(param_1 + 0x6d) != '\0') {
      return 1;
    }
  case 1:
    bVar29 = func_0x0ee11a90(&puStack_4c398);
    *(ushort *)(param_1 + 0x6c) = bVar29 + 0x100;
    if (bVar29 != 0x2a) {
      *(undefined1 *)(param_1 + 0x1500) = 1;
    }
    break;
  case 0x4c:
    func_0x0caf2d60(param_1 + 0x1538,&puStack_4c398);
  }
  return 1;
code_r0x0caf2121:
  if ((plVar49[3] != 0) && (lVar55 = func_0x0c6c88d0(plVar49[3],uVar32 >> 8), lVar55 != 0))
  goto code_r0x0caf2293;
code_r0x0caf214a:
  if (_DAT_0f6fad88 != 0) {
    uVar45 = _DAT_0f6fad88 - (_DAT_0f6fad88 >> 1 & 0x5555555555555555);
    uVar45 = (uVar45 >> 2 & 0x3333333333333333) + (uVar45 & 0x3333333333333333);
    bVar29 = (byte)(((uVar45 >> 4) + uVar45 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
code_r0x0caf21af:
    if (bVar29 < 2) {
      uVar45 = (ulong)((uint)bVar30 & (int)_DAT_0f6fad88 - 1U);
    }
    else {
      uVar45 = uVar54;
      if (_DAT_0f6fad88 <= uVar54) {
        uVar45 = uVar54 % (_DAT_0f6fad88 & 0xffffffff);
      }
    }
    plVar49 = *(long **)(_DAT_0f6fad80 + uVar45 * 8);
    if ((plVar49 != (long *)0x0) && (plVar49 = (long *)*plVar49, plVar49 != (long *)0x0)) {
      if (bVar29 < 2) {
        do {
          if (plVar49[1] == uVar54) {
            if (*(uint *)(plVar49 + 2) == uVar51) goto code_r0x0caf2271;
          }
          else if ((plVar49[1] & _DAT_0f6fad88 - 1) != uVar45) break;
          plVar49 = (long *)*plVar49;
        } while (plVar49 != (long *)0x0);
      }
      else {
        do {
          uVar48 = plVar49[1];
          if (uVar48 == uVar54) {
            if (*(uint *)(plVar49 + 2) == uVar51) goto code_r0x0caf2271;
          }
          else {
            if (_DAT_0f6fad88 <= uVar48) {
              if ((uVar48 | _DAT_0f6fad88) >> 0x20 == 0) {
                if ((uVar48 & 0xffffffff) % (_DAT_0f6fad88 & 0xffffffff) == uVar45)
                goto code_r0x0caf2206;
                break;
              }
              uVar48 = uVar48 % _DAT_0f6fad88;
            }
            if (uVar48 != uVar45) break;
          }
code_r0x0caf2206:
          plVar49 = (long *)*plVar49;
        } while (plVar49 != (long *)0x0);
      }
    }
  }
code_r0x0caf2290:
  lVar55 = 0;
code_r0x0caf2293:
  uVar45 = (ulong)(short)((uint)(int)(short)uStack_4c036 >> 4);
  lVar47 = *(long *)(param_1 + 0x108);
  uVar54 = (*(long *)(param_1 + 0x110) - lVar47 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if ((uVar54 < uVar45 || uVar54 - uVar45 == 0) ||
     (plVar49 = *(long **)(lVar47 + 0x30 + uVar45 * 0x68), plVar49 == (long *)0x0)) {
    if ((_DAT_0f6ffb10 == (long *)0x0) &&
       (cVar31 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
       cVar31 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar47 = *(long *)(*_DAT_0f6ffb10 + 0x200);
  }
  else {
    iVar44 = (uint)bStack_4c037 * 0x10 +
             ((int)(short)uStack_4c036 & 0xfU |
             CONCAT22(uStack_4c036,CONCAT11(bStack_4c037,abStack_4c138[0x100])) << 8);
    lVar47 = (**(code **)(*plVar49 + 0x20))(plVar49,(short)iVar44,lVar47,iVar44);
  }
  lVar42 = (**(code **)(**(long **)(lVar47 + 0x68) + 0x370))(*(long **)(lVar47 + 0x68),uVar32);
  if ((lVar42 == 0) || (*(long *)(lVar47 + 0x110) == *(long *)(lVar42 + 0x110))) {
    if (lVar55 != 0) {
      func_0x0cade7a0(param_1,abStack_4c138 + 0x100,lVar55,0);
    }
  }
  else {
    uStack_48038 = 0;
    aplStack_48030[0] = (long *)0x0;
    uStack_40028 = 0;
    _abStack_40020 = 0;
    uStack_40038 = (long *)0x0;
    uStack_40030 = 0;
    uStack_40018 = 1;
    func_0x0cadd930(param_1,abStack_4c138 + 0x100,lVar42,0,&uStack_48038,&uStack_40038);
    plVar49 = aplStack_48030[0];
    if (aplStack_48030[0] != (long *)0x0) {
      LOCK();
      plVar7 = aplStack_48030[0] + 1;
      lVar55 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar55 == 0) {
        (**(code **)(*aplStack_48030[0] + 0x10))(aplStack_48030[0]);
        func_0x0412c2d0(plVar49);
      }
    }
  }
  bVar57 = iVar33 < 2;
  iVar33 = iVar33 + -1;
  if (bVar57) {
    return 1;
  }
  goto code_r0x0caf1fc1;
code_r0x0caf2271:
  if (plVar49[3] != 0) {
    lVar55 = func_0x0c6c88d0(plVar49[3],0);
    goto code_r0x0caf2293;
  }
  goto code_r0x0caf2290;
code_r0x0caf1380:
  plVar49 = plVar3 + 1;
  uVar45 = ~uVar54 + uVar45;
  if (uVar45 == 0) goto code_r0x0caf1f6f;
  goto code_r0x0caf1399;
code_r0x0caf1f30:
  plVar49 = plVar3 + 1;
  uVar45 = ~uVar54 + uVar45;
  if (uVar45 == 0) goto code_r0x0caf1f6f;
  goto code_r0x0caf1f45;
}


