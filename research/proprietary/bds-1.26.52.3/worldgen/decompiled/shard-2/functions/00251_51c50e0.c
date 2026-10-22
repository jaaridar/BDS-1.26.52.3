/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52c50e0 (ELF vaddr 0x51c50e0)
 * Label: callee-of:0x4de9260
 * Body:  [[052c50e0, 052c5bde] [052c5be0, 052c61b5] [052c61c0, 052c61fd] [052c6200, 052c76e5] [052c7fdb, 052c8048] [052c8116, 052c8146]]
 * Ghidra: FUN_052c50e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052c50e0(undefined8 param_1)

{
  long *plVar1;
  undefined8 **ppuVar2;
  uint *puVar3;
  long lVar4;
  undefined4 *puVar5;
  byte bVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long *plVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  byte *pbVar26;
  undefined *puVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  long *plVar31;
  long lVar32;
  bool bVar33;
  undefined8 *puStack_948;
  byte bStack_940;
  undefined4 uStack_93f;
  undefined2 uStack_93b;
  undefined1 uStack_939;
  byte bStack_938;
  undefined2 uStack_937;
  undefined1 uStack_935;
  undefined1 uStack_934;
  undefined1 uStack_933;
  undefined2 uStack_932;
  undefined1 uStack_930;
  undefined2 uStack_92f;
  undefined3 uStack_92d;
  undefined2 uStack_92a;
  byte *pbStack_928;
  undefined1 uStack_901;
  byte *pbStack_900;
  uint *puStack_8f8;
  byte *pbStack_8f0;
  byte *pbStack_8e8;
  uint *puStack_8e0;
  undefined8 uStack_8d8;
  byte bStack_8d0;
  undefined4 uStack_8cf;
  undefined4 uStack_8cb;
  undefined4 uStack_8c7;
  undefined4 uStack_8c3;
  undefined7 uStack_8bf;
  undefined8 uStack_8b8;
  ulong auStack_8a8 [4];
  ulong auStack_888 [4];
  ulong uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  ulong uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  ulong uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  ulong uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  ulong uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  ulong uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  ulong uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  ulong uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  ulong uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  ulong uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  ulong uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  ulong uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  ulong uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  ulong uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  ulong uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  ulong uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  ulong uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  ulong uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  ulong uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 *puStack_608;
  undefined8 uStack_600;
  byte *pbStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined *puStack_538;
  undefined8 uStack_530;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  bStack_938 = 0;
  uStack_937 = 0;
  uStack_935 = 0;
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  puStack_948 = (undefined8 *)0x3a259853fe12de2b;
  bStack_940 = 0xc;
  uStack_93f = 0x6c6c6966;
  uStack_93b = 0x7265;
  uStack_939 = 0;
  uStack_f0 = 0;
  puStack_f8 = &UNK_0efa1788;
  plVar14 = (long *)func_0x052c8150(param_1,&puStack_948,&puStack_f8);
  uStack_628 = 0;
  uStack_620 = 0;
  uStack_618 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_628);
  if ((uStack_628 & 1) != 0) {
    func_0x0412a280(uStack_618,uStack_628 & 0xfffffffffffffffe);
  }
  if (puStack_f8 != (undefined *)0x0) {
    (**(code **)(puStack_f8 + 8))(&puStack_f8);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  puStack_948 = (undefined8 *)0x12bbe8ee24af7d55;
  bStack_940 = 0x16;
  uStack_93f = 0x656e6e69;
  uStack_93b = 0x5f72;
  uStack_939 = 0x6c;
  bStack_938 = 0x61;
  uStack_937 = 0x6579;
  uStack_935 = 0x72;
  uStack_130 = 0;
  puStack_138 = &UNK_0efa17a0;
  plVar14 = (long *)func_0x052c8150(param_1,&puStack_948,&puStack_138);
  uStack_648 = 0;
  uStack_640 = 0;
  uStack_638 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_648);
  if ((uStack_648 & 1) != 0) {
    func_0x0412a280(uStack_638,uStack_648 & 0xfffffffffffffffe);
  }
  if (puStack_138 != (undefined *)0x0) {
    (**(code **)(puStack_138 + 8))(&puStack_138);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  puStack_948 = (undefined8 *)0x2a83a3a0dadf4ac6;
  bStack_940 = 0x2a;
  uStack_93f = _DAT_011b8ebc;
  uStack_93b = (undefined2)_UNK_011b8ec0;
  uStack_939 = (undefined1)((uint)_UNK_011b8ec0 >> 0x10);
  bStack_938 = (byte)((uint)_UNK_011b8ec0 >> 0x18);
  uStack_937 = (undefined2)_UNK_011b8ec4;
  uStack_935 = (undefined1)((uint)_UNK_011b8ec4 >> 0x10);
  uStack_934 = (undefined1)((uint)_UNK_011b8ec4 >> 0x18);
  uStack_933 = (undefined1)_UNK_011b8ec8;
  uStack_932 = 0x7265;
  uStack_930 = 0x5f;
  uStack_92f = 0x616c;
  uStack_92d = 0x726579;
  uStack_170 = 0;
  puStack_178 = &UNK_0efa17b8;
  plVar14 = (long *)func_0x052c8150(param_1,&puStack_948,&puStack_178);
  uStack_668 = 0;
  uStack_660 = 0;
  uStack_658 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_668);
  if ((uStack_668 & 1) != 0) {
    func_0x0412a280(uStack_658,uStack_668 & 0xfffffffffffffffe);
  }
  if (puStack_178 != (undefined *)0x0) {
    (**(code **)(puStack_178 + 8))(&puStack_178);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  puStack_948 = (undefined8 *)0xf4f215b3c62625c8;
  bStack_940 = 0x18;
  uStack_93f = 0x6464696d;
  uStack_93b = 0x656c;
  uStack_939 = 0x5f;
  bStack_938 = 0x6c;
  uStack_937 = 0x7961;
  uStack_935 = 0x65;
  uStack_934 = 0x72;
  uStack_1b0 = 0;
  puStack_1b8 = &UNK_0efa17d0;
  plVar14 = (long *)func_0x052c8150(param_1,&puStack_948,&puStack_1b8);
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_688);
  if ((uStack_688 & 1) != 0) {
    func_0x0412a280(uStack_678,uStack_688 & 0xfffffffffffffffe);
  }
  if (puStack_1b8 != (undefined *)0x0) {
    (**(code **)(puStack_1b8 + 8))(&puStack_1b8);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  puStack_948 = (undefined8 *)0x5939462880cd9fe0;
  bStack_940 = 0x16;
  uStack_93f = 0x6574756f;
  uStack_93b = 0x5f72;
  uStack_939 = 0x6c;
  bStack_938 = 0x61;
  uStack_937 = 0x6579;
  uStack_935 = 0x72;
  uStack_1f0 = 0;
  puStack_1f8 = &UNK_0efa17e8;
  plVar14 = (long *)func_0x052c8150(param_1,&puStack_948,&puStack_1f8);
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_6a8);
  if ((uStack_6a8 & 1) != 0) {
    func_0x0412a280(uStack_698,uStack_6a8 & 0xfffffffffffffffe);
  }
  if (puStack_1f8 != (undefined *)0x0) {
    (**(code **)(puStack_1f8 + 8))(&puStack_1f8);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_8bf = 0;
  uStack_8b8 = 0;
  bStack_8d0 = 0x20;
  uStack_8cf = _DAT_0135c42a;
  uStack_8cb = _UNK_0135c42e;
  uStack_8c7 = _UNK_0135c432;
  uStack_8c3 = _UNK_0135c436;
  uStack_8d8 = 0xcac41a43d880e686;
  puStack_5b8 = (undefined8 *)0x0;
  uStack_5b0 = 0;
  pbVar15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar15 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  pbVar15[8] = 0;
  pbVar15[9] = 0;
  pbVar15[10] = 0;
  pbVar15[0xb] = 0;
  pbVar15[0xc] = 0;
  pbVar15[0xd] = 0;
  pbVar15[0xe] = 0;
  pbVar15[0xf] = 0;
  pbVar15[0x10] = 0;
  pbVar15[0x11] = 0;
  pbVar15[0x12] = 0;
  pbVar15[0x13] = 0;
  pbVar15[0x14] = 0;
  pbVar15[0x15] = 0;
  pbVar15[0x16] = 0;
  pbVar15[0x17] = 0;
  *(undefined **)pbVar15 = &UNK_0efa1810;
  puStack_948 = (undefined8 *)0x0;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  if (puStack_5b8 == (undefined8 *)0x0) {
    puStack_948 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_5b8)(&puStack_5b8,&puStack_948);
    puStack_948 = puStack_5b8;
  }
  puStack_5b8 = (undefined8 *)0x0;
  *(undefined **)(pbVar15 + 0x20) = &UNK_0f2ccd78;
  pbVar15[0x28] = 0;
  pbVar15[0x29] = 0;
  pbVar15[0x2a] = 0;
  pbVar15[0x2b] = 0;
  pbVar15[0x2c] = 0;
  pbVar15[0x2d] = 0;
  pbVar15[0x2e] = 0;
  pbVar15[0x2f] = 0;
  pbVar15[0x30] = 0;
  pbVar15[0x31] = 0;
  pbVar15[0x32] = 0;
  pbVar15[0x33] = 0;
  pbVar15[0x34] = 0;
  pbVar15[0x35] = 0;
  pbVar15[0x36] = 0;
  pbVar15[0x37] = 0;
  pbVar15[0x38] = 0;
  pbVar15[0x39] = 0;
  pbVar15[0x3a] = 0;
  pbVar15[0x3b] = 0;
  pbVar15[0x3c] = 0;
  pbVar15[0x3d] = 0;
  pbVar15[0x3e] = 0;
  pbVar15[0x3f] = 0;
  pbVar15[0x40] = 0;
  pbVar15[0x41] = 0;
  pbVar15[0x42] = 0;
  pbVar15[0x43] = 0;
  pbVar15[0x44] = 0;
  pbVar15[0x45] = 0;
  pbVar15[0x46] = 0;
  pbVar15[0x47] = 0;
  pbVar15[0x48] = 0;
  pbVar15[0x49] = 0;
  pbVar15[0x4a] = 0;
  pbVar15[0x4b] = 0;
  pbVar15[0x4c] = 0;
  pbVar15[0x4d] = 0;
  pbVar15[0x4e] = 0;
  pbVar15[0x4f] = 0;
  pbVar15[0x50] = 0;
  pbVar15[0x51] = 0;
  pbVar15[0x52] = 0;
  pbVar15[0x53] = 0;
  pbVar15[0x54] = 0;
  pbVar15[0x55] = 0;
  pbVar15[0x56] = 0;
  pbVar15[0x57] = 0;
  pbVar15[0x58] = 0;
  pbVar15[0x59] = 0;
  pbVar15[0x5a] = 0;
  pbVar15[0x5b] = 0;
  pbVar15[0x5c] = 0;
  pbVar15[0x5d] = 0;
  pbVar15[0x5e] = 0;
  pbVar15[0x5f] = 0;
  pbVar15[0x60] = 0;
  pbVar15[0x61] = 0;
  pbVar15[0x62] = 0;
  pbVar15[99] = 0;
  pbVar15[100] = 0;
  pbVar15[0x65] = 0;
  pbVar15[0x66] = 0;
  pbVar15[0x67] = 0;
  pbVar15[0x68] = 0;
  func_0x04aa75f0(pbVar15 + 0x70,&puStack_608,&UNK_01254d89);
  pbVar15[0x80] = 0;
  pbVar18 = pbVar15 + 0x88;
  pbVar15[0x88] = 0;
  pbVar15[0x89] = 0;
  pbVar15[0x8a] = 0;
  pbVar15[0x8b] = 0;
  pbVar15[0x8c] = 0;
  pbVar15[0x8d] = 0;
  pbVar15[0x8e] = 0;
  pbVar15[0x8f] = 0;
  pbVar15[0x90] = 0;
  pbVar15[0x91] = 0;
  pbVar15[0x92] = 0;
  pbVar15[0x93] = 0;
  pbVar15[0x94] = 0;
  pbVar15[0x95] = 0;
  pbVar15[0x96] = 0;
  pbVar15[0x97] = 0;
  pbVar15[0x98] = 0;
  pbVar15[0x99] = 0;
  pbVar15[0x9a] = 0;
  pbVar15[0x9b] = 0;
  pbVar15[0x9c] = 0;
  pbVar15[0x9d] = 0;
  pbVar15[0x9e] = 0;
  pbVar15[0x9f] = 0;
  pbVar15[0xa0] = 0;
  pbVar15[0xa1] = 0;
  pbVar15[0xa2] = 0;
  pbVar15[0xa3] = 0;
  pbVar15[0xa4] = 0;
  pbVar15[0xa5] = 0;
  pbVar15[0xa6] = 0;
  pbVar15[0xa7] = 0;
  pbVar15[0xa8] = 0;
  pbVar15[0xa9] = 0;
  pbVar15[0xaa] = 0;
  pbVar15[0xab] = 0;
  pbVar15[0xac] = 0;
  pbVar15[0xad] = 0;
  pbVar15[0xae] = 0;
  pbVar15[0xaf] = 0;
  pbVar15[0xb0] = 0;
  pbVar15[0xb1] = 0;
  pbVar15[0xb2] = 0;
  pbVar15[0xb3] = 0;
  pbVar15[0xb4] = 0;
  pbVar15[0xb5] = 0;
  pbVar15[0xb6] = 0;
  pbVar15[0xb7] = 0;
  pbVar15[0xb8] = 0xff;
  pbVar15[0xb9] = 0xff;
  pbVar15[0xba] = 0xff;
  pbVar15[0xbb] = 0xff;
  pbVar15[0xbc] = 0;
  pbVar15[0xbd] = 0;
  pbVar15[0xbe] = 0;
  pbVar15[0xbf] = 0;
  pbVar15[0x130] = 0;
  pbVar15[0x131] = 0;
  pbVar15[0x132] = 0;
  pbVar15[0x133] = 0;
  pbVar15[0x134] = 0;
  pbVar15[0x135] = 0;
  pbVar15[0x136] = 0;
  pbVar15[0x137] = 0;
  pbVar15[0x138] = 0;
  pbVar15[0x139] = 0;
  pbVar15[0x13a] = 0;
  pbVar15[0x13b] = 0;
  pbVar15[0x13c] = 0;
  pbVar15[0x13d] = 0;
  pbVar15[0x13e] = 0;
  pbVar15[0x13f] = 0;
  pbVar15[0xc0] = 0;
  pbVar15[0xc1] = 0;
  pbVar15[0xc2] = 0;
  pbVar15[0xc3] = 0;
  pbVar15[0xc4] = 0;
  pbVar15[0xc5] = 0;
  pbVar15[0xc6] = 0;
  pbVar15[199] = 0;
  pbVar15[200] = 0;
  pbVar15[0xc9] = 0;
  pbVar15[0xca] = 0;
  pbVar15[0xcb] = 0;
  pbVar15[0xcc] = 0;
  pbVar15[0xcd] = 0;
  pbVar15[0xce] = 0;
  pbVar15[0xcf] = 0;
  pbVar15[0xd0] = 0;
  pbVar15[0xd1] = 0;
  pbVar15[0xd2] = 0;
  pbVar15[0xd3] = 0;
  pbVar15[0xd4] = 0;
  pbVar15[0xd5] = 0;
  pbVar15[0xd6] = 0;
  pbVar15[0xd7] = 0;
  pbVar15[0xd8] = 0;
  pbVar15[0xd9] = 0;
  pbVar15[0xda] = 0;
  pbVar15[0xdb] = 0;
  pbVar15[0xdc] = 0;
  pbVar15[0xdd] = 0;
  pbVar15[0xde] = 0;
  pbVar15[0xdf] = 0;
  pbVar15[0xe0] = 0;
  pbVar15[0xe1] = 0;
  pbVar15[0xe2] = 0;
  pbVar15[0xe3] = 0;
  pbVar15[0xe4] = 0;
  pbVar15[0xe5] = 0;
  pbVar15[0xe6] = 0;
  pbVar15[0xe7] = 0;
  pbVar15[0xe8] = 0;
  pbVar15[0xe9] = 0;
  pbVar15[0xea] = 0;
  pbVar15[0xeb] = 0;
  pbVar15[0xec] = 0;
  pbVar15[0xed] = 0;
  pbVar15[0xee] = 0;
  pbVar15[0xef] = 0;
  pbVar15[0xf0] = 0;
  pbVar15[0xf1] = 0;
  pbVar15[0xf2] = 0;
  pbVar15[0xf3] = 0;
  pbVar15[0xf4] = 0;
  pbVar15[0xf5] = 0;
  pbVar15[0xf6] = 0;
  pbVar15[0xf7] = 0;
  pbVar15[0xf8] = 0;
  pbVar15[0xf9] = 0;
  pbVar15[0xfa] = 0;
  pbVar15[0xfb] = 0;
  pbVar15[0xfc] = 0;
  pbVar15[0xfd] = 0;
  pbVar15[0xfe] = 0;
  pbVar15[0xff] = 0;
  *(undefined **)(pbVar15 + 0x20) = &UNK_0efa1860;
  ppuVar2 = (undefined8 **)(pbVar15 + 0x170);
  pbVar15[0x170] = 0;
  pbVar15[0x171] = 0;
  pbVar15[0x172] = 0;
  pbVar15[0x173] = 0;
  pbVar15[0x174] = 0;
  pbVar15[0x175] = 0;
  pbVar15[0x176] = 0;
  pbVar15[0x177] = 0;
  pbVar15[0x178] = 0;
  pbVar15[0x179] = 0;
  pbVar15[0x17a] = 0;
  pbVar15[0x17b] = 0;
  pbVar15[0x17c] = 0;
  pbVar15[0x17d] = 0;
  pbVar15[0x17e] = 0;
  pbVar15[0x17f] = 0;
  if (ppuVar2 != &puStack_948) {
    if (puStack_948 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_948)(&puStack_948,ppuVar2);
      puVar16 = puStack_948;
    }
    puStack_948 = (undefined8 *)0x0;
    *ppuVar2 = puVar16;
  }
  puVar3 = (uint *)(pbVar15 + 0x90);
  if (pbVar18 != &DAT_0f551f58) {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(long *)(pbVar15 + 0xa0) = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar3 = _DAT_0f551f60;
        *(undefined4 *)(pbVar15 + 0x94) = uVar10;
        *(undefined4 *)(pbVar15 + 0x98) = uVar11;
        *(undefined4 *)(pbVar15 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar33 = (_DAT_0f551f60 & 1) != 0;
      lVar23 = 0xf551f61;
      if (bVar33) {
        lVar23 = _DAT_0f551f70;
      }
      uVar28 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar33) {
        uVar28 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar3,lVar23,uVar28);
    }
  }
  pbVar26 = pbVar15 + 8;
  *(long *)(pbVar15 + 0x88) = _DAT_0f551f58;
  pbVar15[0xa8] = 0;
  pbVar15[0xa9] = 0;
  pbVar15[0xaa] = 0;
  pbVar15[0xab] = 0;
  pbVar15[0xac] = 0;
  pbVar15[0xad] = 0;
  pbVar15[0xae] = 0;
  pbVar15[0xaf] = 0;
  puStack_8f8 = puVar3;
  if (puStack_948 != (undefined8 *)0x0) {
    (*(code *)puStack_948[1])(&puStack_948);
  }
  LOCK();
  *(long *)pbVar26 = *(long *)pbVar26 + 1;
  UNLOCK();
  pbStack_900 = pbVar26;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0efa1958;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0efa19a8;
  puVar16[0xe] = pbVar15 + 0x20;
  puVar16[0xf] = pbVar15;
  LOCK();
  *(long *)(pbVar15 + 8) = *(long *)(pbVar15 + 8) + 1;
  UNLOCK();
  bStack_940 = (byte)puVar16;
  uStack_93f = (undefined4)((ulong)puVar16 >> 8);
  uStack_93b = (undefined2)((ulong)puVar16 >> 0x28);
  uStack_939 = (undefined1)((ulong)puVar16 >> 0x38);
  puStack_948 = puVar16 + 4;
  puVar17 = (undefined4 *)func_0x04ff4500(param_1,&uStack_8d8,0);
  pbVar26 = *(byte **)(puVar17 + 0x24);
  if (pbVar26 < *(byte **)(puVar17 + 0x26)) {
    pbVar26[0x10] = 0;
    pbVar26[0x11] = 0;
    pbVar26[0x12] = 0;
    pbVar26[0x13] = 0;
    pbVar26[0x14] = 0;
    pbVar26[0x15] = 0;
    pbVar26[0x16] = 0;
    pbVar26[0x17] = 0;
    pbVar26[0x18] = 0;
    pbVar26[0x19] = 0;
    pbVar26[0x1a] = 0;
    pbVar26[0x1b] = 0;
    pbVar26[0x1c] = 0;
    pbVar26[0x1d] = 0;
    pbVar26[0x1e] = 0;
    pbVar26[0x1f] = 0;
    pbVar26[0] = 0;
    pbVar26[1] = 0;
    pbVar26[2] = 0;
    pbVar26[3] = 0;
    pbVar26[4] = 0;
    pbVar26[5] = 0;
    pbVar26[6] = 0;
    pbVar26[7] = 0;
    pbVar26[8] = 0;
    pbVar26[9] = 0;
    pbVar26[10] = 0;
    pbVar26[0xb] = 0;
    pbVar26[0xc] = 0;
    pbVar26[0xd] = 0;
    pbVar26[0xe] = 0;
    pbVar26[0xf] = 0;
    pbVar26[0x20] = 0;
    pbVar26[0x21] = 0;
    pbVar26[0x22] = 0;
    pbVar26[0x23] = 0;
    pbVar26[0x24] = 0;
    pbVar26[0x25] = 0;
    pbVar26[0x26] = 0;
    pbVar26[0x27] = 0;
    if (pbVar26 == pbVar18) {
LAB_052c5876:
      *(long *)pbVar26 = *(long *)pbVar18;
      *(undefined8 **)(pbVar26 + 0x28) = puVar16 + 4;
      *(undefined8 **)(pbVar26 + 0x30) = puVar16;
LAB_052c58e4:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_8f8 & 1) == 0) {
        *(long *)(pbVar26 + 0x18) = *(long *)(puStack_8f8 + 4);
        lVar23 = *(long *)(puStack_8f8 + 2);
        *(long *)(pbVar26 + 8) = *(long *)puStack_8f8;
        *(long *)(pbVar26 + 0x10) = lVar23;
        goto LAB_052c5876;
      }
      func_0x04885070(pbVar26 + 8,*(long *)(pbVar15 + 0xa0),*(long *)(pbVar15 + 0x98));
      *(long *)pbVar26 = *(long *)pbVar18;
      puVar16 = (undefined8 *)
                CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940)));
      *(undefined8 **)(pbVar26 + 0x28) = puStack_948;
      *(long *)(pbVar26 + 0x30) =
           CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940)));
      if (puVar16 != (undefined8 *)0x0) goto LAB_052c58e4;
    }
    pbVar26 = pbVar26 + 0x38;
    *(byte **)(puVar17 + 0x24) = pbVar26;
  }
  else {
    pbVar26 = (byte *)func_0x04ff7c00(puVar17 + 0x22,pbVar18,&puStack_948);
  }
  pbVar18 = pbStack_900;
  *(byte **)(puVar17 + 0x24) = pbVar26;
  uVar10 = *puVar17;
  uVar11 = puVar17[1];
  uVar12 = puVar17[2];
  uVar13 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar14 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = *(long **)(pbVar15 + 0x78);
  *(undefined4 *)(pbVar15 + 0x70) = uVar10;
  *(undefined4 *)(pbVar15 + 0x74) = uVar11;
  *(undefined4 *)(pbVar15 + 0x78) = uVar12;
  *(undefined4 *)(pbVar15 + 0x7c) = uVar13;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar31 = plVar14 + 1;
    lVar23 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0412c2d0(plVar14);
    }
  }
  pbVar15[0x80] = *(byte *)((long)puVar17 + 0xa1);
  plVar14 = (long *)CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940)));
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar31 = plVar14 + 1;
    lVar23 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0412c2d0(plVar14);
    }
  }
  LOCK();
  lVar23 = *(long *)pbVar18;
  *(long *)pbVar18 = *(long *)pbVar18 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15);
    FUN_0412c2d0(pbVar15);
    LOCK();
    lVar23 = *(long *)pbVar18;
    *(long *)pbVar18 = *(long *)pbVar18 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar23 = *(long *)pbVar18;
    *(long *)pbVar18 = *(long *)pbVar18 + -1;
    UNLOCK();
  }
  if (lVar23 == 0) {
    (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15);
    FUN_0412c2d0(pbVar15);
  }
  pbVar15[0xb0] = 1;
  pbVar15[0xb1] = 0;
  pbVar15[0xb2] = 0;
  pbVar15[0xb3] = 0;
  pbVar15[0xb4] = 0;
  pbVar15[0xb5] = 0;
  pbVar15[0xb6] = 0;
  pbVar15[0xb7] = 0;
  uStack_70 = 0;
  uStack_600 = 0;
  lStack_78 = 0;
  puStack_608 = (undefined8 *)&UNK_0efa19f8;
  pbVar18 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar18 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_948 = puStack_608;
  pbVar18[8] = 0;
  pbVar18[9] = 0;
  pbVar18[10] = 0;
  pbVar18[0xb] = 0;
  pbVar18[0xc] = 0;
  pbVar18[0xd] = 0;
  pbVar18[0xe] = 0;
  pbVar18[0xf] = 0;
  pbVar18[0x10] = 0;
  pbVar18[0x11] = 0;
  pbVar18[0x12] = 0;
  pbVar18[0x13] = 0;
  pbVar18[0x14] = 0;
  pbVar18[0x15] = 0;
  pbVar18[0x16] = 0;
  pbVar18[0x17] = 0;
  *(undefined **)pbVar18 = &UNK_0efa0bd0;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  puStack_608 = (undefined8 *)0x0;
  *(undefined **)(pbVar18 + 0x20) = &UNK_0f2ccd78;
  pbVar18[0x28] = 0;
  pbVar18[0x29] = 0;
  pbVar18[0x2a] = 0;
  pbVar18[0x2b] = 0;
  pbVar18[0x2c] = 0;
  pbVar18[0x2d] = 0;
  pbVar18[0x2e] = 0;
  pbVar18[0x2f] = 0;
  pbVar18[0x30] = 0;
  pbVar18[0x31] = 0;
  pbVar18[0x32] = 0;
  pbVar18[0x33] = 0;
  pbVar18[0x34] = 0;
  pbVar18[0x35] = 0;
  pbVar18[0x36] = 0;
  pbVar18[0x37] = 0;
  pbVar18[0x38] = 0;
  pbVar18[0x39] = 0;
  pbVar18[0x3a] = 0;
  pbVar18[0x3b] = 0;
  pbVar18[0x3c] = 0;
  pbVar18[0x3d] = 0;
  pbVar18[0x3e] = 0;
  pbVar18[0x3f] = 0;
  pbVar18[0x40] = 0;
  pbVar18[0x41] = 0;
  pbVar18[0x42] = 0;
  pbVar18[0x43] = 0;
  pbVar18[0x44] = 0;
  pbVar18[0x45] = 0;
  pbVar18[0x46] = 0;
  pbVar18[0x47] = 0;
  pbVar18[0x48] = 0;
  pbVar18[0x49] = 0;
  pbVar18[0x4a] = 0;
  pbVar18[0x4b] = 0;
  pbVar18[0x4c] = 0;
  pbVar18[0x4d] = 0;
  pbVar18[0x4e] = 0;
  pbVar18[0x4f] = 0;
  pbVar18[0x50] = 0;
  pbVar18[0x51] = 0;
  pbVar18[0x52] = 0;
  pbVar18[0x53] = 0;
  pbVar18[0x54] = 0;
  pbVar18[0x55] = 0;
  pbVar18[0x56] = 0;
  pbVar18[0x57] = 0;
  pbVar18[0x58] = 0;
  pbVar18[0x59] = 0;
  pbVar18[0x5a] = 0;
  pbVar18[0x5b] = 0;
  pbVar18[0x5c] = 0;
  pbVar18[0x5d] = 0;
  pbVar18[0x5e] = 0;
  pbVar18[0x5f] = 0;
  pbVar18[0x60] = 0;
  pbVar18[0x61] = 0;
  pbVar18[0x62] = 0;
  pbVar18[99] = 0;
  pbVar18[100] = 0;
  pbVar18[0x65] = 0;
  pbVar18[0x66] = 0;
  pbVar18[0x67] = 0;
  pbVar18[0x68] = 0;
  func_0x04aa75f0(pbVar18 + 0x70,&uStack_901,&UNK_01254d89);
  pbVar18[0x80] = 0;
  pbVar18[0x88] = 0;
  pbVar18[0x89] = 0;
  pbVar18[0x8a] = 0;
  pbVar18[0x8b] = 0;
  pbVar18[0x8c] = 0;
  pbVar18[0x8d] = 0;
  pbVar18[0x8e] = 0;
  pbVar18[0x8f] = 0;
  pbVar18[0x90] = 0;
  pbVar18[0x91] = 0;
  pbVar18[0x92] = 0;
  pbVar18[0x93] = 0;
  pbVar18[0x94] = 0;
  pbVar18[0x95] = 0;
  pbVar18[0x96] = 0;
  pbVar18[0x97] = 0;
  pbVar18[0x98] = 0;
  pbVar18[0x99] = 0;
  pbVar18[0x9a] = 0;
  pbVar18[0x9b] = 0;
  pbVar18[0x9c] = 0;
  pbVar18[0x9d] = 0;
  pbVar18[0x9e] = 0;
  pbVar18[0x9f] = 0;
  pbVar18[0xa0] = 0;
  pbVar18[0xa1] = 0;
  pbVar18[0xa2] = 0;
  pbVar18[0xa3] = 0;
  pbVar18[0xa4] = 0;
  pbVar18[0xa5] = 0;
  pbVar18[0xa6] = 0;
  pbVar18[0xa7] = 0;
  pbVar18[0xa8] = 0;
  pbVar18[0xa9] = 0;
  pbVar18[0xaa] = 0;
  pbVar18[0xab] = 0;
  pbVar18[0xac] = 0;
  pbVar18[0xad] = 0;
  pbVar18[0xae] = 0;
  pbVar18[0xaf] = 0;
  pbVar18[0xb0] = 0;
  pbVar18[0xb1] = 0;
  pbVar18[0xb2] = 0;
  pbVar18[0xb3] = 0;
  pbVar18[0xb4] = 0;
  pbVar18[0xb5] = 0;
  pbVar18[0xb6] = 0;
  pbVar18[0xb7] = 0;
  pbVar18[0xb8] = 0xff;
  pbVar18[0xb9] = 0xff;
  pbVar18[0xba] = 0xff;
  pbVar18[0xbb] = 0xff;
  pbVar18[0xbc] = 0;
  pbVar18[0xbd] = 0;
  pbVar18[0xbe] = 0;
  pbVar18[0xbf] = 0;
  pbVar18[0x130] = 0;
  pbVar18[0x131] = 0;
  pbVar18[0x132] = 0;
  pbVar18[0x133] = 0;
  pbVar18[0x134] = 0;
  pbVar18[0x135] = 0;
  pbVar18[0x136] = 0;
  pbVar18[0x137] = 0;
  pbVar18[0x138] = 0;
  pbVar18[0x139] = 0;
  pbVar18[0x13a] = 0;
  pbVar18[0x13b] = 0;
  pbVar18[0x13c] = 0;
  pbVar18[0x13d] = 0;
  pbVar18[0x13e] = 0;
  pbVar18[0x13f] = 0;
  pbVar18[0xc0] = 0;
  pbVar18[0xc1] = 0;
  pbVar18[0xc2] = 0;
  pbVar18[0xc3] = 0;
  pbVar18[0xc4] = 0;
  pbVar18[0xc5] = 0;
  pbVar18[0xc6] = 0;
  pbVar18[199] = 0;
  pbVar18[200] = 0;
  pbVar18[0xc9] = 0;
  pbVar18[0xca] = 0;
  pbVar18[0xcb] = 0;
  pbVar18[0xcc] = 0;
  pbVar18[0xcd] = 0;
  pbVar18[0xce] = 0;
  pbVar18[0xcf] = 0;
  pbVar18[0xd0] = 0;
  pbVar18[0xd1] = 0;
  pbVar18[0xd2] = 0;
  pbVar18[0xd3] = 0;
  pbVar18[0xd4] = 0;
  pbVar18[0xd5] = 0;
  pbVar18[0xd6] = 0;
  pbVar18[0xd7] = 0;
  pbVar18[0xd8] = 0;
  pbVar18[0xd9] = 0;
  pbVar18[0xda] = 0;
  pbVar18[0xdb] = 0;
  pbVar18[0xdc] = 0;
  pbVar18[0xdd] = 0;
  pbVar18[0xde] = 0;
  pbVar18[0xdf] = 0;
  pbVar18[0xe0] = 0;
  pbVar18[0xe1] = 0;
  pbVar18[0xe2] = 0;
  pbVar18[0xe3] = 0;
  pbVar18[0xe4] = 0;
  pbVar18[0xe5] = 0;
  pbVar18[0xe6] = 0;
  pbVar18[0xe7] = 0;
  pbVar18[0xe8] = 0;
  pbVar18[0xe9] = 0;
  pbVar18[0xea] = 0;
  pbVar18[0xeb] = 0;
  pbVar18[0xec] = 0;
  pbVar18[0xed] = 0;
  pbVar18[0xee] = 0;
  pbVar18[0xef] = 0;
  pbVar18[0xf0] = 0;
  pbVar18[0xf1] = 0;
  pbVar18[0xf2] = 0;
  pbVar18[0xf3] = 0;
  pbVar18[0xf4] = 0;
  pbVar18[0xf5] = 0;
  pbVar18[0xf6] = 0;
  pbVar18[0xf7] = 0;
  pbVar18[0xf8] = 0;
  pbVar18[0xf9] = 0;
  pbVar18[0xfa] = 0;
  pbVar18[0xfb] = 0;
  pbVar18[0xfc] = 0;
  pbVar18[0xfd] = 0;
  pbVar18[0xfe] = 0;
  pbVar18[0xff] = 0;
  *(undefined **)(pbVar18 + 0x20) = &UNK_0efa0c20;
  pbVar26 = pbVar18 + 0x170;
  pbVar18[0x170] = 0;
  pbVar18[0x171] = 0;
  pbVar18[0x172] = 0;
  pbVar18[0x173] = 0;
  pbVar18[0x174] = 0;
  pbVar18[0x175] = 0;
  pbVar18[0x176] = 0;
  pbVar18[0x177] = 0;
  pbVar18[0x178] = 0;
  pbVar18[0x179] = 0;
  pbVar18[0x17a] = 0;
  pbVar18[0x17b] = 0;
  pbVar18[0x17c] = 0;
  pbVar18[0x17d] = 0;
  pbVar18[0x17e] = 0;
  pbVar18[0x17f] = 0;
  if (puStack_948 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_948)(&puStack_948,pbVar26);
    puVar16 = puStack_948;
  }
  pbVar19 = pbVar18 + 8;
  *(undefined8 **)pbVar26 = puVar16;
  if (puStack_608 != (undefined8 *)0x0) {
    (*(code *)puStack_608[1])(&puStack_608);
  }
  LOCK();
  *(long *)pbVar19 = *(long *)pbVar19 + 1;
  UNLOCK();
  puStack_8e0 = (uint *)pbVar19;
  pbVar19 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar19 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbStack_5c0 = pbVar18 + 0x20;
  *(long *)((long)pbVar19 + 8) = 0;
  *(long *)((long)pbVar19 + 0x10) = 0;
  *(undefined **)pbVar19 = &UNK_0efa0d00;
  *(long *)((long)pbVar19 + 0x30) = 0;
  *(long *)((long)pbVar19 + 0x38) = 0;
  *(undefined **)((long)pbVar19 + 0x20) = &UNK_0efa0d50;
  *(byte **)((long)pbVar19 + 0x70) = pbStack_5c0;
  *(byte **)((long)pbVar19 + 0x78) = pbVar18;
  LOCK();
  *(long *)(pbVar18 + 8) = *(long *)(pbVar18 + 8) + 1;
  UNLOCK();
  puStack_8f8 = (uint *)((long)pbVar19 + 8);
  plVar20 = *(long **)(pbVar15 + 0xe0);
  plVar31 = *(long **)(pbVar15 + 0xd8);
  for (plVar14 = plVar31; pbStack_900 = pbVar19, plVar14 != plVar20; plVar14 = plVar14 + 0x15) {
    if ((plVar14[0xf] == 0) && (plVar14[0x10] == -1)) goto LAB_052c5f20;
  }
  if (*(long **)(pbVar15 + 0xe8) <= plVar20) {
    uVar28 = (long)plVar20 - (long)plVar31;
    plVar14 = (long *)(((long)uVar28 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((long *)0x186186186186186 < plVar14) goto LAB_052c76b9;
    pbVar19 = pbVar15 + 0xd8;
    lVar23 = (long)*(long **)(pbVar15 + 0xe8) - (long)plVar31 >> 3;
    plVar31 = (long *)(lVar23 * -0x6186186186186186);
    if (plVar14 < plVar31) {
      plVar14 = plVar31;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar23 * -0x30c30c30c30c30c3)) {
      plVar14 = (long *)0x186186186186186;
    }
    pbStack_928 = pbVar19;
    if (plVar14 == (long *)0x0) {
      puVar16 = (undefined8 *)0x0;
LAB_052c5ccb:
      puVar27 = (undefined *)(uVar28 + (long)puVar16);
      bStack_938 = (byte)puVar27;
      uStack_937 = (undefined2)((ulong)puVar27 >> 8);
      uStack_935 = (undefined1)((ulong)puVar27 >> 0x18);
      uStack_934 = (undefined1)((ulong)puVar27 >> 0x20);
      uStack_933 = (undefined1)((ulong)puVar27 >> 0x28);
      uStack_932 = (undefined2)((ulong)puVar27 >> 0x30);
      uStack_93f = (undefined4)((ulong)puVar27 >> 8);
      uStack_93b = (undefined2)((ulong)puVar27 >> 0x28);
      uStack_939 = (undefined1)((ulong)puVar27 >> 0x38);
      puVar22 = puVar16 + (long)plVar14 * 0x15;
      uStack_930 = SUB81(puVar22,0);
      uStack_92f = (undefined2)((ulong)puVar22 >> 8);
      uStack_92d = (undefined3)((ulong)puVar22 >> 0x18);
      uStack_92a = (undefined2)((ulong)puVar22 >> 0x30);
      puStack_948 = puVar16;
      bStack_940 = bStack_938;
      pbStack_8e8 = pbVar19;
      func_0x052e00d0(puVar27);
      plVar20 = (long *)(CONCAT26(uStack_932,
                                  CONCAT15(uStack_933,
                                           CONCAT14(uStack_934,
                                                    CONCAT13(uStack_935,
                                                             CONCAT21(uStack_937,bStack_938))))) +
                        0xa8);
      lVar23 = *(long *)(pbVar15 + 0xd8);
      lVar7 = *(long *)(pbVar15 + 0xe0);
      lVar25 = (lVar23 - lVar7) +
               CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940)));
      if (lVar23 != lVar7) {
        lVar32 = 0;
        pbStack_8f0 = pbVar18;
        do {
          uVar21 = ((undefined8 *)(lVar23 + lVar32))[1];
          *(undefined8 *)(lVar25 + lVar32) = *(undefined8 *)(lVar23 + lVar32);
          ((undefined8 *)(lVar25 + lVar32))[1] = uVar21;
          *(undefined8 *)(lVar23 + lVar32) = 0;
          ((undefined8 *)(lVar23 + lVar32))[1] = 0;
          puVar16 = (undefined8 *)(lVar25 + 0x20 + lVar32);
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16 = (undefined8 *)(lVar25 + 0x10 + lVar32);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar25 + 0x30 + lVar32) = 0;
          *(undefined8 *)(lVar25 + 0x28 + lVar32) = *(undefined8 *)(lVar23 + 0x28 + lVar32);
          puVar17 = (undefined4 *)(lVar23 + 0x18 + lVar32);
          uVar10 = puVar17[1];
          uVar11 = puVar17[2];
          uVar12 = puVar17[3];
          puVar5 = (undefined4 *)(lVar25 + 0x18 + lVar32);
          *puVar5 = *puVar17;
          puVar5[1] = uVar10;
          puVar5[2] = uVar11;
          puVar5[3] = uVar12;
          *(undefined2 *)(lVar23 + 0x18 + lVar32) = 0;
          *(undefined8 *)(lVar25 + 0x10 + lVar32) = *(undefined8 *)(lVar23 + 0x10 + lVar32);
          func_0x04167a20(lVar25 + lVar32 + 0x38,lVar32 + lVar23 + 0x38);
          puVar16 = (undefined8 *)(lVar23 + 0x40 + lVar32);
          uVar21 = puVar16[1];
          puVar22 = (undefined8 *)(lVar25 + 0x40 + lVar32);
          *puVar22 = *puVar16;
          puVar22[1] = uVar21;
          puVar16 = (undefined8 *)(lVar23 + 0x50 + lVar32);
          uVar21 = puVar16[1];
          puVar22 = (undefined8 *)(lVar25 + 0x50 + lVar32);
          *puVar22 = *puVar16;
          puVar22[1] = uVar21;
          puVar16 = (undefined8 *)(lVar23 + 0x60 + lVar32);
          uVar21 = puVar16[1];
          puVar22 = (undefined8 *)(lVar25 + 0x60 + lVar32);
          *puVar22 = *puVar16;
          puVar22[1] = uVar21;
          puVar16 = (undefined8 *)(lVar23 + 0x60 + lVar32);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar25 + 0x70 + lVar32) = *(undefined8 *)(lVar23 + 0x70 + lVar32);
          puVar16 = (undefined8 *)(lVar23 + 0x78 + lVar32);
          uVar21 = puVar16[1];
          puVar22 = (undefined8 *)(lVar25 + 0x78 + lVar32);
          *puVar22 = *puVar16;
          puVar22[1] = uVar21;
          puVar16 = (undefined8 *)(lVar25 + 0x88 + lVar32);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar25 + 0x98 + lVar32) = 0;
          puVar17 = (undefined4 *)(lVar23 + 0x88 + lVar32);
          uVar10 = puVar17[1];
          uVar11 = puVar17[2];
          uVar12 = puVar17[3];
          puVar5 = (undefined4 *)(lVar25 + 0x88 + lVar32);
          *puVar5 = *puVar17;
          puVar5[1] = uVar10;
          puVar5[2] = uVar11;
          puVar5[3] = uVar12;
          *(undefined8 *)(lVar25 + 0x98 + lVar32) = *(undefined8 *)(lVar23 + 0x98 + lVar32);
          puVar16 = (undefined8 *)(lVar23 + 0x88 + lVar32);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar23 + 0x98 + lVar32) = 0;
          *(undefined2 *)(lVar25 + 0xa0 + lVar32) = *(undefined2 *)(lVar23 + 0xa0 + lVar32);
          lVar4 = lVar32 + lVar23;
          lVar32 = lVar32 + 0xa8;
        } while (lVar4 + 0xa8 != lVar7);
        do {
          func_0x052e0250(lVar23);
          lVar23 = lVar23 + 0xa8;
        } while (lVar23 != lVar7);
        lVar23 = *(long *)pbStack_8e8;
        pbVar18 = pbStack_8f0;
      }
      pbVar19 = pbStack_900;
      *(long *)(pbVar15 + 0xd8) = lVar25;
      *(long **)(pbVar15 + 0xe0) = plVar20;
      lVar7 = *(long *)(pbVar15 + 0xe8);
      *(long *)(pbVar15 + 0xe8) =
           CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930)));
      if (lVar23 != 0) {
        func_0x0412a280(lVar23,lVar7 - lVar23);
      }
      goto LAB_052c5eb7;
    }
    if (plVar14 < (long *)0x186186186186187) {
      puVar16 = (undefined8 *)
                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar14 * 0xa8);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0((long)plVar14 * 0xa8,0);
        puVar16 = (undefined8 *)0x0;
      }
      goto LAB_052c5ccb;
    }
LAB_052c76af:
    func_0x04882eb0();
LAB_052c76b4:
    func_0x052e0470();
LAB_052c76b9:
    uVar21 = func_0x052e0240();
    if ((*pbVar18 & 1) != 0) {
      func_0x0412a280(*(long *)(pbVar26 + 0x18),*(ulong *)(pbVar26 + 8) & 0xfffffffffffffffe);
    }
    *(byte **)(uVar28 + 0x90) = pbVar26;
    func_0x04ff2eb0(&puStack_948);
    LOCK();
    lVar23 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15);
      FUN_0412c2d0(pbVar15);
    }
    LOCK();
    lVar23 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15);
      FUN_0412c2d0(pbVar15);
    }
    if (lStack_b8 != 0) {
      (**(code **)(lStack_b8 + 8))(&lStack_b8);
    }
    if ((bStack_8d0 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_8bf,uStack_8c3._3_1_),
                      CONCAT35((undefined3)uStack_8cb,CONCAT41(uStack_8cf,bStack_8d0)) &
                      0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar21);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  func_0x052e00d0(plVar20);
  plVar20 = plVar20 + 0x15;
  *(long **)(pbVar15 + 0xe0) = plVar20;
LAB_052c5eb7:
  *(long **)(pbVar15 + 0xe0) = plVar20;
  pbVar26 = (byte *)plVar20[-0x15];
  if ((*pbVar26 & 1) == 0) {
    *pbVar26 = 0x26;
    pbVar26 = pbVar26 + 1;
  }
  else {
    pbVar26[8] = 0x13;
    pbVar26[9] = 0;
    pbVar26[10] = 0;
    pbVar26[0xb] = 0;
    pbVar26[0xc] = 0;
    pbVar26[0xd] = 0;
    pbVar26[0xe] = 0;
    pbVar26[0xf] = 0;
    pbVar26 = *(byte **)(pbVar26 + 0x10);
  }
  uVar12 = _UNK_01494d69;
  uVar11 = _UNK_01494d65;
  uVar10 = _UNK_01494d61;
  *(undefined4 *)pbVar26 = _DAT_01494d5d;
  *(undefined4 *)(pbVar26 + 4) = uVar10;
  *(undefined4 *)(pbVar26 + 8) = uVar11;
  *(undefined4 *)(pbVar26 + 0xc) = uVar12;
  pbVar26[0xf] = 0x65;
  pbVar26[0x10] = 0x6e;
  pbVar26[0x11] = 0x74;
  pbVar26[0x12] = 0x3e;
  pbVar26[0x13] = 0;
  lVar23 = *(long *)(pbVar15 + 0xe0);
  plVar14 = (long *)(lVar23 + -0xa8);
  *(byte *)(lVar23 + -7) = pbVar15[0x80];
  *(undefined8 *)(lVar23 + -0x30) = 0;
  *(undefined8 *)(lVar23 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar23 + -8) = 1;
LAB_052c5f20:
  pbVar29 = pbVar18 + 0x88;
  pbVar15 = (byte *)((long)pbVar19 + 0x20);
  pbVar26 = (byte *)plVar14[0x12];
  if (pbVar26 < (byte *)plVar14[0x13]) {
    pbVar26[0x10] = 0;
    pbVar26[0x11] = 0;
    pbVar26[0x12] = 0;
    pbVar26[0x13] = 0;
    pbVar26[0x14] = 0;
    pbVar26[0x15] = 0;
    pbVar26[0x16] = 0;
    pbVar26[0x17] = 0;
    pbVar26[0x18] = 0;
    pbVar26[0x19] = 0;
    pbVar26[0x1a] = 0;
    pbVar26[0x1b] = 0;
    pbVar26[0x1c] = 0;
    pbVar26[0x1d] = 0;
    pbVar26[0x1e] = 0;
    pbVar26[0x1f] = 0;
    pbVar26[0] = 0;
    pbVar26[1] = 0;
    pbVar26[2] = 0;
    pbVar26[3] = 0;
    pbVar26[4] = 0;
    pbVar26[5] = 0;
    pbVar26[6] = 0;
    pbVar26[7] = 0;
    pbVar26[8] = 0;
    pbVar26[9] = 0;
    pbVar26[10] = 0;
    pbVar26[0xb] = 0;
    pbVar26[0xc] = 0;
    pbVar26[0xd] = 0;
    pbVar26[0xe] = 0;
    pbVar26[0xf] = 0;
    pbVar26[0x20] = 0;
    pbVar26[0x21] = 0;
    pbVar26[0x22] = 0;
    pbVar26[0x23] = 0;
    pbVar26[0x24] = 0;
    pbVar26[0x25] = 0;
    pbVar26[0x26] = 0;
    pbVar26[0x27] = 0;
    if (pbVar26 != pbVar29) {
      if ((pbVar18[0x90] & 1) == 0) {
        *(long *)(pbVar26 + 0x18) = *(long *)(pbVar18 + 0xa0);
        lVar23 = *(long *)(pbVar18 + 0x98);
        *(long *)(pbVar26 + 8) = *(long *)(pbVar18 + 0x90);
        *(long *)(pbVar26 + 0x10) = lVar23;
      }
      else {
        pbStack_8f0 = pbVar29;
        func_0x04885070(pbVar26 + 8,*(long *)(pbVar18 + 0xa0),*(long *)(pbVar18 + 0x98));
        pbVar29 = pbStack_8f0;
      }
    }
    *(long *)pbVar26 = *(long *)pbVar29;
    *(byte **)(pbVar26 + 0x28) = pbVar15;
    *(byte **)(pbVar26 + 0x30) = pbVar19;
    LOCK();
    *(long *)((long)pbVar19 + 8) = *(long *)((long)pbVar19 + 8) + 1;
    UNLOCK();
    pbVar26 = pbVar26 + 0x38;
    plVar14[0x12] = (long)pbVar26;
  }
  else {
    pbVar26 = pbVar26 + -plVar14[0x11];
    uVar28 = ((long)pbVar26 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar28) goto LAB_052c76b4;
    lVar23 = plVar14[0x13] - plVar14[0x11] >> 3;
    uVar9 = lVar23 * -0x2492492492492492;
    if (uVar28 < uVar9) {
      uVar28 = uVar9;
    }
    pbStack_928 = (byte *)(plVar14 + 0x11);
    if (0x249249249249248 < (ulong)(lVar23 * 0x6db6db6db6db6db7)) {
      uVar28 = 0x492492492492492;
    }
    pbStack_8f0 = pbStack_928;
    pbStack_8e8 = pbVar15;
    if (uVar28 == 0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      if (0x492492492492492 < uVar28) goto LAB_052c76af;
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 0x38);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar28 * 0x38,0);
        puVar16 = (undefined8 *)0x0;
      }
    }
    pbVar15 = (byte *)((long)puVar16 + (long)pbVar26);
    bStack_938 = (byte)pbVar15;
    uStack_937 = (undefined2)((ulong)pbVar15 >> 8);
    uStack_935 = (undefined1)((ulong)pbVar15 >> 0x18);
    uStack_934 = (undefined1)((ulong)pbVar15 >> 0x20);
    uStack_933 = (undefined1)((ulong)pbVar15 >> 0x28);
    uStack_932 = (undefined2)((ulong)pbVar15 >> 0x30);
    uStack_93f = (undefined4)((ulong)pbVar15 >> 8);
    uStack_93b = (undefined2)((ulong)pbVar15 >> 0x28);
    uStack_939 = (undefined1)((ulong)pbVar15 >> 0x38);
    puVar22 = puVar16 + uVar28 * 7;
    uStack_930 = SUB81(puVar22,0);
    uStack_92f = (undefined2)((ulong)puVar22 >> 8);
    uStack_92d = (undefined3)((ulong)puVar22 >> 0x18);
    uStack_92a = (undefined2)((ulong)puVar22 >> 0x30);
    pbVar19 = (byte *)((long)(puVar16 + 2) + (long)pbVar26);
    pbVar19[0] = 0;
    pbVar19[1] = 0;
    pbVar19[2] = 0;
    pbVar19[3] = 0;
    pbVar19[4] = 0;
    pbVar19[5] = 0;
    pbVar19[6] = 0;
    pbVar19[7] = 0;
    pbVar19[8] = 0;
    pbVar19[9] = 0;
    pbVar19[10] = 0;
    pbVar19[0xb] = 0;
    pbVar19[0xc] = 0;
    pbVar19[0xd] = 0;
    pbVar19[0xe] = 0;
    pbVar19[0xf] = 0;
    pbVar19 = (byte *)((long)puVar16 + (long)pbVar26);
    pbVar19[0] = 0;
    pbVar19[1] = 0;
    pbVar19[2] = 0;
    pbVar19[3] = 0;
    pbVar19[4] = 0;
    pbVar19[5] = 0;
    pbVar19[6] = 0;
    pbVar19[7] = 0;
    pbVar19[8] = 0;
    pbVar19[9] = 0;
    pbVar19[10] = 0;
    pbVar19[0xb] = 0;
    pbVar19[0xc] = 0;
    pbVar19[0xd] = 0;
    pbVar19[0xe] = 0;
    pbVar19[0xf] = 0;
    pbVar19 = (byte *)((long)(puVar16 + 4) + (long)pbVar26);
    pbVar19[0] = 0;
    pbVar19[1] = 0;
    pbVar19[2] = 0;
    pbVar19[3] = 0;
    pbVar19[4] = 0;
    pbVar19[5] = 0;
    pbVar19[6] = 0;
    pbVar19[7] = 0;
    pbVar19 = pbVar15;
    pbVar30 = pbVar15;
    puStack_948 = puVar16;
    bStack_940 = bStack_938;
    if (pbVar15 != pbVar29) {
      pbVar26 = pbVar26 + (long)puVar16;
      if ((pbVar18[0x90] & 1) == 0) {
        *(long *)(pbVar26 + 0x18) = *(long *)(pbVar18 + 0xa0);
        uVar10 = *(undefined4 *)(pbVar18 + 0x94);
        uVar11 = *(undefined4 *)(pbVar18 + 0x98);
        uVar12 = *(undefined4 *)(pbVar18 + 0x9c);
        *(undefined4 *)(pbVar26 + 8) = *(undefined4 *)(pbVar18 + 0x90);
        *(undefined4 *)(pbVar26 + 0xc) = uVar10;
        *(undefined4 *)(pbVar26 + 0x10) = uVar11;
        *(undefined4 *)(pbVar26 + 0x14) = uVar12;
      }
      else {
        func_0x04885070(pbVar26 + 8,*(long *)(pbVar18 + 0xa0),*(long *)(pbVar18 + 0x98));
        pbVar19 = (byte *)CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940)));
        pbVar30 = (byte *)CONCAT26(uStack_932,
                                   CONCAT15(uStack_933,
                                            CONCAT14(uStack_934,
                                                     CONCAT13(uStack_935,
                                                              CONCAT21(uStack_937,bStack_938)))));
      }
    }
    *(long *)pbVar15 = *(long *)pbVar29;
    *(byte **)(pbVar15 + 0x28) = pbStack_8e8;
    *(byte **)(pbVar15 + 0x30) = pbStack_900;
    LOCK();
    *(long *)((long)pbStack_900 + 8) = *(long *)((long)pbStack_900 + 8) + 1;
    UNLOCK();
    pbVar26 = pbVar30 + 0x38;
    bStack_938 = (byte)pbVar26;
    uStack_937 = (undefined2)((ulong)pbVar26 >> 8);
    uStack_935 = (undefined1)((ulong)pbVar26 >> 0x18);
    uStack_934 = (undefined1)((ulong)pbVar26 >> 0x20);
    uStack_933 = (undefined1)((ulong)pbVar26 >> 0x28);
    uStack_932 = (undefined2)((ulong)pbVar26 >> 0x30);
    plVar31 = (long *)plVar14[0x11];
    plVar20 = (long *)plVar14[0x12];
    pbVar19 = pbVar19 + ((long)plVar31 - (long)plVar20);
    pbVar15 = pbVar19;
    plVar24 = plVar31;
    if ((long)plVar31 - (long)plVar20 != 0) {
      do {
        pbVar15[0x10] = 0;
        pbVar15[0x11] = 0;
        pbVar15[0x12] = 0;
        pbVar15[0x13] = 0;
        pbVar15[0x14] = 0;
        pbVar15[0x15] = 0;
        pbVar15[0x16] = 0;
        pbVar15[0x17] = 0;
        pbVar15[0x18] = 0;
        pbVar15[0x19] = 0;
        pbVar15[0x1a] = 0;
        pbVar15[0x1b] = 0;
        pbVar15[0x1c] = 0;
        pbVar15[0x1d] = 0;
        pbVar15[0x1e] = 0;
        pbVar15[0x1f] = 0;
        pbVar15[0] = 0;
        pbVar15[1] = 0;
        pbVar15[2] = 0;
        pbVar15[3] = 0;
        pbVar15[4] = 0;
        pbVar15[5] = 0;
        pbVar15[6] = 0;
        pbVar15[7] = 0;
        pbVar15[8] = 0;
        pbVar15[9] = 0;
        pbVar15[10] = 0;
        pbVar15[0xb] = 0;
        pbVar15[0xc] = 0;
        pbVar15[0xd] = 0;
        pbVar15[0xe] = 0;
        pbVar15[0xf] = 0;
        pbVar15[0x20] = 0;
        pbVar15[0x21] = 0;
        pbVar15[0x22] = 0;
        pbVar15[0x23] = 0;
        pbVar15[0x24] = 0;
        pbVar15[0x25] = 0;
        pbVar15[0x26] = 0;
        pbVar15[0x27] = 0;
        *(long *)(pbVar15 + 0x18) = plVar24[3];
        lVar23 = plVar24[2];
        *(long *)(pbVar15 + 8) = plVar24[1];
        *(long *)(pbVar15 + 0x10) = lVar23;
        *(undefined2 *)(plVar24 + 1) = 0;
        *(long *)pbVar15 = *plVar24;
        uVar10 = *(undefined4 *)((long)plVar24 + 0x2c);
        lVar23 = plVar24[6];
        uVar11 = *(undefined4 *)((long)plVar24 + 0x34);
        *(int *)(pbVar15 + 0x28) = (int)plVar24[5];
        *(undefined4 *)(pbVar15 + 0x2c) = uVar10;
        *(int *)(pbVar15 + 0x30) = (int)lVar23;
        *(undefined4 *)(pbVar15 + 0x34) = uVar11;
        plVar24[5] = 0;
        plVar24[6] = 0;
        plVar24 = plVar24 + 7;
        pbVar15 = pbVar15 + 0x38;
        pbStack_8e8 = pbVar19;
      } while (plVar24 != plVar20);
      do {
        plVar24 = (long *)plVar31[6];
        if (plVar24 == (long *)0x0) {
LAB_052c61e4:
          bVar6 = *(byte *)(plVar31 + 1);
        }
        else {
          LOCK();
          plVar1 = plVar24 + 1;
          lVar23 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar23 != 0) goto LAB_052c61e4;
          (**(code **)(*plVar24 + 0x10))(plVar24);
          FUN_0412c2d0(plVar24);
          bVar6 = *(byte *)(plVar31 + 1);
        }
        if ((bVar6 & 1) != 0) {
          func_0x0412a280(plVar31[3],plVar31[1] & 0xfffffffffffffffe);
        }
        plVar31 = plVar31 + 7;
      } while (plVar31 != plVar20);
      plVar31 = *(long **)pbStack_8f0;
      pbVar26 = (byte *)CONCAT26(uStack_932,
                                 CONCAT15(uStack_933,
                                          CONCAT14(uStack_934,
                                                   CONCAT13(uStack_935,
                                                            CONCAT21(uStack_937,bStack_938)))));
      pbVar19 = pbStack_8e8;
    }
    plVar14[0x11] = (long)pbVar19;
    plVar14[0x12] = (long)pbVar26;
    lVar23 = plVar14[0x13];
    plVar14[0x13] = CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930)));
    if (plVar31 != (long *)0x0) {
      func_0x0412a280(plVar31,lVar23 - (long)plVar31);
    }
  }
  puVar3 = puStack_8e0;
  pbVar15 = pbStack_900;
  plVar14[0x12] = (long)pbVar26;
  lVar23 = *plVar14;
  uVar10 = *(undefined4 *)((long)plVar14 + 4);
  lVar7 = plVar14[1];
  uVar11 = *(undefined4 *)((long)plVar14 + 0xc);
  if (plVar14[1] != 0) {
    LOCK();
    plVar31 = (long *)(plVar14[1] + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = *(long **)(pbVar18 + 0x78);
  *(int *)(pbVar18 + 0x70) = (int)lVar23;
  *(undefined4 *)(pbVar18 + 0x74) = uVar10;
  *(int *)(pbVar18 + 0x78) = (int)lVar7;
  *(undefined4 *)(pbVar18 + 0x7c) = uVar11;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar20 = plVar31 + 1;
    lVar23 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      FUN_0412c2d0(plVar31);
    }
  }
  pbVar18[0x80] = *(byte *)((long)plVar14 + 0xa1);
  LOCK();
  lVar23 = *(long *)puStack_8f8;
  *(long *)puStack_8f8 = *(long *)puStack_8f8 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15);
    FUN_0412c2d0(pbVar15);
    LOCK();
    lVar23 = *(long *)puVar3;
    *(long *)puVar3 = *(long *)puVar3 + -1;
    UNLOCK();
    if (lVar23 != 0) goto LAB_052c62f6;
LAB_052c7172:
    (**(code **)(*(long *)pbVar18 + 0x10))(pbVar18);
    FUN_0412c2d0(pbVar18);
    LOCK();
    lVar23 = *(long *)puVar3;
    *(long *)puVar3 = *(long *)puVar3 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar23 = *(long *)puVar3;
    *(long *)puVar3 = *(long *)puVar3 + -1;
    UNLOCK();
    if (lVar23 == 0) goto LAB_052c7172;
LAB_052c62f6:
    LOCK();
    lVar23 = *(long *)puVar3;
    *(long *)puVar3 = *(long *)puVar3 + -1;
    UNLOCK();
  }
  if (lVar23 == 0) {
    (**(code **)(*(long *)pbVar18 + 0x10))(pbVar18);
    FUN_0412c2d0(pbVar18);
  }
  uStack_6c8 = 0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  (**(code **)(*(long *)pbStack_5c0 + 0x10))(pbStack_5c0,&uStack_6c8);
  if ((uStack_6c8 & 1) != 0) {
    func_0x0412a280(uStack_6b8,uStack_6c8 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  if ((bStack_8d0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_8bf,uStack_8c3._3_1_),
                    CONCAT35((undefined3)uStack_8cb,CONCAT41(uStack_8cf,bStack_8d0)) &
                    0xfffffffffffffffe);
  }
  bStack_938 = 0;
  uStack_937 = 0;
  uStack_935 = 0;
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  puStack_948 = (undefined8 *)0x0;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  pbStack_928 = (byte *)0x0;
  func_0x0412f5e0(&bStack_940,&UNK_012f1e05,0x17);
  puStack_948 = (undefined8 *)0x6bc489afd6a79160;
  uStack_230 = 0;
  puStack_238 = &UNK_0efa1a10;
  plVar14 = (long *)func_0x052c8600(param_1,&puStack_948,&puStack_238);
  plVar14[0x2a] = 0xa00000001;
  uStack_6e8 = 0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_6e8);
  if ((uStack_6e8 & 1) != 0) {
    func_0x0412a280(uStack_6d8,uStack_6e8 & 0xfffffffffffffffe);
  }
  if (puStack_238 != (undefined *)0x0) {
    (**(code **)(puStack_238 + 8))(&puStack_238);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  bStack_938 = 0;
  uStack_937 = 0;
  uStack_935 = 0;
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  puStack_948 = (undefined8 *)0x0;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  pbStack_928 = (byte *)0x0;
  func_0x0412f5e0(&bStack_940,&UNK_013ac96e,0x17);
  puStack_948 = (undefined8 *)0x465a6c2b6c009ca6;
  uStack_270 = 0;
  puStack_278 = &UNK_0efa1a28;
  plVar14 = (long *)func_0x052c8600(param_1,&puStack_948,&puStack_278);
  plVar14[0x2a] = 0x1400000001;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_6f8 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_708);
  if ((uStack_708 & 1) != 0) {
    func_0x0412a280(uStack_6f8,uStack_708 & 0xfffffffffffffffe);
  }
  if (puStack_278 != (undefined *)0x0) {
    (**(code **)(puStack_278 + 8))(&puStack_278);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  bStack_938 = 0;
  uStack_937 = 0;
  uStack_935 = 0;
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  puStack_948 = (undefined8 *)0x0;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  pbStack_928 = (byte *)0x0;
  func_0x0412f5e0(&bStack_940,&UNK_011ed0fc,0x17);
  puStack_948 = (undefined8 *)0x31b3a3b5effa9612;
  uStack_2b0 = 0;
  puStack_2b8 = &UNK_0efa1a40;
  plVar14 = (long *)func_0x052c8600(param_1,&puStack_948,&puStack_2b8);
  plVar14[0x2a] = 0xa00000001;
  uStack_728 = 0;
  uStack_720 = 0;
  uStack_718 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_728);
  if ((uStack_728 & 1) != 0) {
    func_0x0412a280(uStack_718,uStack_728 & 0xfffffffffffffffe);
  }
  if (puStack_2b8 != (undefined *)0x0) {
    (**(code **)(puStack_2b8 + 8))(&puStack_2b8);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  bStack_938 = 0;
  uStack_937 = 0;
  uStack_935 = 0;
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  puStack_948 = (undefined8 *)0x0;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  pbStack_928 = (byte *)0x0;
  func_0x0412f5e0(&bStack_940,&UNK_012d753b,0x17);
  puStack_948 = (undefined8 *)0xcd6ec2d6972bc3f4;
  uStack_2f0 = 0;
  puStack_2f8 = &UNK_0efa1a58;
  plVar14 = (long *)func_0x052c8600(param_1,&puStack_948,&puStack_2f8);
  plVar14[0x2a] = 0x1400000001;
  uStack_748 = 0;
  uStack_740 = 0;
  uStack_738 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_748);
  if ((uStack_748 & 1) != 0) {
    func_0x0412a280(uStack_738,uStack_748 & 0xfffffffffffffffe);
  }
  if (puStack_2f8 != (undefined *)0x0) {
    (**(code **)(puStack_2f8 + 8))(&puStack_2f8);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  bStack_940 = 0x20;
  uStack_93f = _DAT_011b8ed2;
  uStack_93b = (undefined2)_UNK_011b8ed6;
  uStack_939 = (undefined1)((uint)_UNK_011b8ed6 >> 0x10);
  bStack_938 = (byte)((uint)_UNK_011b8ed6 >> 0x18);
  uStack_937 = (undefined2)_UNK_011b8eda;
  uStack_935 = (undefined1)((uint)_UNK_011b8eda >> 0x10);
  uStack_934 = (undefined1)((uint)_UNK_011b8eda >> 0x18);
  uStack_933 = (undefined1)_UNK_011b8ede;
  uStack_932 = (undefined2)((uint)_UNK_011b8ede >> 8);
  uStack_930 = (undefined1)((uint)_UNK_011b8ede >> 0x18);
  puStack_948 = (undefined8 *)0x66e110e44fd7dca;
  uStack_330 = 0;
  puStack_338 = &UNK_0efa1a70;
  plVar14 = (long *)func_0x052c8600(param_1,&puStack_948,&puStack_338);
  plVar14[0x2a] = 0xa00000000;
  uStack_768 = 0;
  uStack_760 = 0;
  uStack_758 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_768);
  if ((uStack_768 & 1) != 0) {
    func_0x0412a280(uStack_758,uStack_768 & 0xfffffffffffffffe);
  }
  if (puStack_338 != (undefined *)0x0) {
    (**(code **)(puStack_338 + 8))(&puStack_338);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  bStack_940 = 0x20;
  uStack_93f = _DAT_011ed114;
  uStack_93b = (undefined2)_UNK_011ed118;
  uStack_939 = (undefined1)((uint)_UNK_011ed118 >> 0x10);
  bStack_938 = (byte)((uint)_UNK_011ed118 >> 0x18);
  uStack_937 = (undefined2)_UNK_011ed11c;
  uStack_935 = (undefined1)((uint)_UNK_011ed11c >> 0x10);
  uStack_934 = (undefined1)((uint)_UNK_011ed11c >> 0x18);
  uStack_933 = (undefined1)_UNK_011ed120;
  uStack_932 = (undefined2)((uint)_UNK_011ed120 >> 8);
  uStack_930 = (undefined1)((uint)_UNK_011ed120 >> 0x18);
  puStack_948 = (undefined8 *)0x663172d09f4d9d50;
  uStack_370 = 0;
  puStack_378 = &UNK_0efa1a88;
  plVar14 = (long *)func_0x052c8600(param_1,&puStack_948,&puStack_378);
  plVar14[0x2a] = 0xa00000000;
  uStack_788 = 0;
  uStack_780 = 0;
  uStack_778 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_788);
  if ((uStack_788 & 1) != 0) {
    func_0x0412a280(uStack_778,uStack_788 & 0xfffffffffffffffe);
  }
  if (puStack_378 != (undefined *)0x0) {
    (**(code **)(puStack_378 + 8))(&puStack_378);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_935 = 0;
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  bStack_940 = 0x14;
  uStack_93f = 0x5f78616d;
  uStack_93b = 0x6172;
  uStack_939 = 100;
  bStack_938 = 0x69;
  uStack_937 = 0x7375;
  puStack_948 = (undefined8 *)0x2f128057a071655a;
  uStack_3b0 = 0;
  puStack_3b8 = &UNK_0efa1aa0;
  plVar14 = (long *)func_0x052c8600(param_1,&puStack_948,&puStack_3b8);
  uStack_7a8 = 0;
  uStack_7a0 = 0;
  uStack_798 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_7a8);
  if ((uStack_7a8 & 1) != 0) {
    func_0x0412a280(uStack_798,uStack_7a8 & 0xfffffffffffffffe);
  }
  if (puStack_3b8 != (undefined *)0x0) {
    (**(code **)(puStack_3b8 + 8))(&puStack_3b8);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  bStack_940 = 0x24;
  uStack_93f = _DAT_011ed125;
  uStack_93b = (undefined2)_UNK_011ed129;
  uStack_939 = (undefined1)((uint)_UNK_011ed129 >> 0x10);
  bStack_938 = (byte)((uint)_UNK_011ed129 >> 0x18);
  uStack_937 = (undefined2)_UNK_011ed12d;
  uStack_935 = (undefined1)((uint)_UNK_011ed12d >> 0x10);
  uStack_934 = (undefined1)((uint)_UNK_011ed12d >> 0x18);
  uStack_933 = (undefined1)_UNK_011ed131;
  uStack_932 = (undefined2)((uint)_UNK_011ed131 >> 8);
  uStack_930 = (undefined1)((uint)_UNK_011ed131 >> 0x18);
  uStack_92f = 0x7465;
  puStack_948 = (undefined8 *)0x9ecc7a0a9d3cd608;
  uStack_3f0 = 0;
  puStack_3f8 = &UNK_0efa1ab8;
  plVar14 = (long *)func_0x052c8600(param_1,&puStack_948,&puStack_3f8);
  plVar14[0x2a] = 0xa00000000;
  uStack_7c8 = 0;
  uStack_7c0 = 0;
  uStack_7b8 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_7c8);
  if ((uStack_7c8 & 1) != 0) {
    func_0x0412a280(uStack_7b8,uStack_7c8 & 0xfffffffffffffffe);
  }
  if (puStack_3f8 != (undefined *)0x0) {
    (**(code **)(puStack_3f8 + 8))(&puStack_3f8);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  bStack_940 = 0x2a;
  uStack_93f = _DAT_0130a875;
  uStack_93b = (undefined2)_UNK_0130a879;
  uStack_939 = (undefined1)((uint)_UNK_0130a879 >> 0x10);
  bStack_938 = (byte)((uint)_UNK_0130a879 >> 0x18);
  uStack_937 = (undefined2)_UNK_0130a87d;
  uStack_935 = (undefined1)((uint)_UNK_0130a87d >> 0x10);
  uStack_934 = (undefined1)((uint)_UNK_0130a87d >> 0x18);
  uStack_933 = (undefined1)_UNK_0130a881;
  uStack_932 = 0x5f6b;
  uStack_930 = 99;
  uStack_92f = 0x6168;
  uStack_92d = 0x65636e;
  puStack_948 = (undefined8 *)0xdd49debbc8711666;
  uStack_430 = 0;
  puStack_438 = &UNK_0efa1ad0;
  plVar14 = (long *)func_0x052c8bb0(param_1,&puStack_948,&puStack_438);
  plVar14[0x2a] = _DAT_014e9660;
  uStack_7e8 = 0;
  uStack_7e0 = 0;
  uStack_7d8 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_7e8);
  if ((uStack_7e8 & 1) != 0) {
    func_0x0412a280(uStack_7d8,uStack_7e8 & 0xfffffffffffffffe);
  }
  if (puStack_438 != (undefined *)0x0) {
    (**(code **)(puStack_438 + 8))(&puStack_438);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  bStack_940 = 0x1e;
  uStack_93f = 0x65736162;
  uStack_93b = 0x635f;
  uStack_939 = 0x72;
  bStack_938 = 0x61;
  uStack_937 = 0x6b63;
  uStack_935 = 0x5f;
  uStack_934 = 0x73;
  uStack_933 = 0x69;
  uStack_932 = 0x657a;
  puStack_948 = (undefined8 *)0xfaf8cf28a7940c53;
  uStack_470 = 0;
  puStack_478 = &UNK_0efa1ae8;
  plVar14 = (long *)func_0x052c8bb0(param_1,&puStack_948,&puStack_478);
  plVar14[0x2a] = _DAT_014ea8e0;
  uStack_808 = 0;
  uStack_800 = 0;
  uStack_7f8 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_808);
  if ((uStack_808 & 1) != 0) {
    func_0x0412a280(uStack_7f8,uStack_808 & 0xfffffffffffffffe);
  }
  if (puStack_478 != (undefined *)0x0) {
    (**(code **)(puStack_478 + 8))(&puStack_478);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  pbStack_928 = (byte *)0x0;
  bStack_940 = 0x20;
  uStack_93f = _DAT_012a482b;
  uStack_93b = (undefined2)_UNK_012a482f;
  uStack_939 = (undefined1)((uint)_UNK_012a482f >> 0x10);
  bStack_938 = (byte)((uint)_UNK_012a482f >> 0x18);
  uStack_937 = (undefined2)_UNK_012a4833;
  uStack_935 = (undefined1)((uint)_UNK_012a4833 >> 0x10);
  uStack_934 = (undefined1)((uint)_UNK_012a4833 >> 0x18);
  uStack_933 = (undefined1)_UNK_012a4837;
  uStack_932 = (undefined2)((uint)_UNK_012a4837 >> 8);
  uStack_930 = (undefined1)((uint)_UNK_012a4837 >> 0x18);
  puStack_948 = (undefined8 *)0xdd8870bc3a0c6df1;
  uStack_4b0 = 0;
  puStack_4b8 = &UNK_0efa1b00;
  plVar14 = (long *)func_0x052c8bb0(param_1,&puStack_948,&puStack_4b8);
  uStack_828 = 0;
  uStack_820 = 0;
  uStack_818 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_828);
  if ((uStack_828 & 1) != 0) {
    func_0x0412a280(uStack_818,uStack_828 & 0xfffffffffffffffe);
  }
  if (puStack_4b8 != (undefined *)0x0) {
    (**(code **)(puStack_4b8 + 8))(&puStack_4b8);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  bStack_938 = 0;
  uStack_937 = 0;
  uStack_935 = 0;
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  puStack_948 = (undefined8 *)0x0;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  pbStack_928 = (byte *)0x0;
  func_0x0412f5e0(&bStack_940,&UNK_01325ba2,0x1f);
  puStack_948 = (undefined8 *)0x25527a5512da603f;
  uStack_4f0 = 0;
  puStack_4f8 = &UNK_0efa1b18;
  plVar14 = (long *)func_0x052c8bb0(param_1,&puStack_948,&puStack_4f8);
  plVar14[0x2a] = _DAT_014e9660;
  uStack_848 = 0;
  uStack_840 = 0;
  uStack_838 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_848);
  if ((uStack_848 & 1) != 0) {
    func_0x0412a280(uStack_838,uStack_848 & 0xfffffffffffffffe);
  }
  if (puStack_4f8 != (undefined *)0x0) {
    (**(code **)(puStack_4f8 + 8))(&puStack_4f8);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  bStack_938 = 0;
  uStack_937 = 0;
  uStack_935 = 0;
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  puStack_948 = (undefined8 *)0x0;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  pbStack_928 = (byte *)0x0;
  func_0x0412f5e0(&bStack_940,&UNK_013dfc97,0x1b);
  puStack_948 = (undefined8 *)0x338d6959f664f744;
  uStack_530 = 0;
  puStack_538 = &UNK_0efa1b30;
  plVar14 = (long *)func_0x052c8bb0(param_1,&puStack_948,&puStack_538);
  plVar14[0x2a] = _DAT_014e9660;
  uStack_868 = 0;
  uStack_860 = 0;
  uStack_858 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_868);
  if ((uStack_868 & 1) != 0) {
    func_0x0412a280(uStack_858,uStack_868 & 0xfffffffffffffffe);
  }
  if (puStack_538 != (undefined *)0x0) {
    (**(code **)(puStack_538 + 8))(&puStack_538);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  uStack_8c7 = 0;
  uStack_8c3 = 0;
  uStack_8bf = 0;
  uStack_8d8 = 0;
  bStack_8d0 = 0;
  uStack_8cf = 0;
  uStack_8cb = 0;
  uStack_8b8 = 0;
  func_0x0412f5e0(&bStack_8d0,&UNK_012f1e1d,0x23);
  uStack_8d8 = 0x95de407e86b2d9e2;
  uStack_b0 = 0;
  uStack_600 = 0;
  lStack_b8 = 0;
  puStack_608 = (undefined8 *)&UNK_0efa1b48;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  puStack_948 = puStack_608;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0efa11c8;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  puStack_608 = (undefined8 *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_901,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0efa1218;
  plVar14[0x2f] = 0;
  plVar14[0x30] = 0;
  plVar14[0x2e] = (long)(plVar14 + 0x2f);
  ppuVar2 = (undefined8 **)(plVar14 + 0x32);
  plVar14[0x32] = 0;
  plVar14[0x33] = 0;
  if (ppuVar2 != &puStack_948) {
    if (puStack_948 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_948)(&puStack_948,ppuVar2);
      puVar16 = puStack_948;
    }
    puStack_948 = (undefined8 *)0x0;
    *ppuVar2 = puVar16;
  }
  pbStack_900 = (byte *)(plVar14 + 4);
  puStack_8e0 = (uint *)(plVar14 + 0x12);
  if (plVar31 != (long *)&DAT_0f551f88) {
    if ((*puStack_8e0 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar14[0x14] = _DAT_0f551fa0;
        uVar12 = uRam000000000f551f9c;
        uVar11 = _DAT_0f551f98;
        uVar10 = uRam000000000f551f94;
        *puStack_8e0 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar10;
        *(undefined4 *)(plVar14 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_8e0,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar33 = (_DAT_0f551f90 & 1) != 0;
      lVar23 = 0xf551f91;
      if (bVar33) {
        lVar23 = _DAT_0f551fa0;
      }
      uVar28 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar33) {
        uVar28 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puStack_8e0,lVar23,uVar28);
    }
  }
  plVar14[0x11] = _DAT_0f551f88;
  plVar14[0x15] = 0;
  puStack_8f8 = (uint *)plVar31;
  if (puStack_948 != (undefined8 *)0x0) {
    (*(code *)puStack_948[1])(&puStack_948);
  }
  plVar31 = plVar14 + 1;
  if (puStack_608 != (undefined8 *)0x0) {
    (*(code *)puStack_608[1])(&puStack_608);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0efa12f8;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0efa1348;
  puVar16[0xe] = pbStack_900;
  puVar16[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  bStack_940 = (byte)puVar16;
  uStack_93f = (undefined4)((ulong)puVar16 >> 8);
  uStack_93b = (undefined2)((ulong)puVar16 >> 0x28);
  uStack_939 = (undefined1)((ulong)puVar16 >> 0x38);
  puStack_948 = puVar16 + 4;
  puVar17 = (undefined4 *)func_0x04ff4500(param_1,&uStack_8d8,1);
  plVar20 = *(long **)(puVar17 + 0x24);
  if (*(long **)(puVar17 + 0x26) <= plVar20) {
    plVar20 = (long *)func_0x04ff7c00(puVar17 + 0x22,puStack_8f8,&puStack_948);
    goto LAB_052c73dc;
  }
  plVar20[2] = 0;
  plVar20[3] = 0;
  *plVar20 = 0;
  plVar20[1] = 0;
  plVar20[4] = 0;
  if ((uint *)plVar20 == puStack_8f8) {
LAB_052c7365:
    *plVar20 = *(long *)puStack_8f8;
    plVar20[5] = (long)(puVar16 + 4);
    plVar20[6] = (long)puVar16;
LAB_052c73cc:
    LOCK();
    puVar16[1] = puVar16[1] + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_8e0 & 1) == 0) {
      plVar20[3] = *(long *)(puStack_8e0 + 4);
      lVar23 = *(long *)(puStack_8e0 + 2);
      plVar20[1] = *(long *)puStack_8e0;
      plVar20[2] = lVar23;
      goto LAB_052c7365;
    }
    func_0x04885070(plVar20 + 1,plVar14[0x14],plVar14[0x13]);
    *plVar20 = *(long *)puStack_8f8;
    puVar16 = (undefined8 *)
              CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940)));
    plVar20[5] = (long)puStack_948;
    plVar20[6] = CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940)));
    if (puVar16 != (undefined8 *)0x0) goto LAB_052c73cc;
  }
  plVar20 = plVar20 + 7;
  *(long **)(puVar17 + 0x24) = plVar20;
LAB_052c73dc:
  *(long **)(puVar17 + 0x24) = plVar20;
  uVar10 = *puVar17;
  uVar11 = puVar17[1];
  uVar12 = puVar17[2];
  uVar13 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar11;
  *(undefined4 *)(plVar14 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar13;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar24 = plVar20 + 1;
    lVar23 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      FUN_0412c2d0(plVar20);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  plVar20 = (long *)CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940)));
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar24 = plVar20 + 1;
    lVar23 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      FUN_0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar23 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0412c2d0(plVar14);
    LOCK();
    lVar23 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar23 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar23 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0412c2d0(plVar14);
  }
  auStack_888[0] = 0;
  auStack_888[1] = 0;
  auStack_888[2] = 0;
  (**(code **)(*(long *)pbStack_900 + 0x10))(pbStack_900,auStack_888);
  if ((auStack_888[0] & 1) != 0) {
    func_0x0412a280(auStack_888[2],auStack_888[0] & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_8d0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_8bf,uStack_8c3._3_1_),
                    CONCAT35((undefined3)uStack_8cb,CONCAT41(uStack_8cf,bStack_8d0)) &
                    0xfffffffffffffffe);
  }
  bStack_938 = 0;
  uStack_937 = 0;
  uStack_935 = 0;
  uStack_934 = 0;
  uStack_933 = 0;
  uStack_932 = 0;
  uStack_930 = 0;
  uStack_92f = 0;
  uStack_92d = 0;
  uStack_92a = 0;
  puStack_948 = (undefined8 *)0x0;
  bStack_940 = 0;
  uStack_93f = 0;
  uStack_93b = 0;
  uStack_939 = 0;
  pbStack_928 = (byte *)0x0;
  func_0x0412f5e0(&bStack_940,&UNK_013f9e57,0x18);
  puStack_948 = (undefined8 *)0xc27348587e7b513;
  uStack_570 = 0;
  puStack_578 = &UNK_0efa1b60;
  plVar14 = (long *)func_0x052c8600(param_1,&puStack_948,&puStack_578);
  auStack_8a8[0] = 0;
  auStack_8a8[1] = 0;
  auStack_8a8[2] = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,auStack_8a8);
  if ((auStack_8a8[0] & 1) != 0) {
    func_0x0412a280(auStack_8a8[2],auStack_8a8[0] & 0xfffffffffffffffe);
  }
  if (puStack_578 != (undefined *)0x0) {
    (**(code **)(puStack_578 + 8))(&puStack_578);
  }
  if ((bStack_940 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_92a,CONCAT33(uStack_92d,CONCAT21(uStack_92f,uStack_930))),
                    CONCAT17(uStack_939,CONCAT25(uStack_93b,CONCAT41(uStack_93f,bStack_940))) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11b8ebc  alternate_inner_layer
 * 0x11b8ed2  min_point_offset
 * 0x11ed114  max_point_offset
 * 0x11ed125  crack_point_offset
 * 0x12a482b  noise_multiplier
 * 0x130a875  generate_crack_chance
 * 0x135c42a  inner_placements
 * 0x1494d5d  <any array element>
 */
