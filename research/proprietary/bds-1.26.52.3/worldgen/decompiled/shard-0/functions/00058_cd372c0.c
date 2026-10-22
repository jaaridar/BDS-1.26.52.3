/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce372c0 (ELF vaddr 0xcd372c0)
 * Label: caller-of-callee
 * Body:  [[0ce372c0, 0ce372c0]]
 * Ghidra: _INIT_1754
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1754(void)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte ******ppppppbVar16;
  byte *****pppppbVar17;
  ulong uVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte *******pppppppbVar21;
  byte ****ppppbVar22;
  byte *******pppppppbVar23;
  ulong uVar24;
  byte *******unaff_R12;
  byte *pbVar25;
  long lVar26;
  uint uVar27;
  byte *******pppppppbVar28;
  bool bVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_1a8 [8];
  byte *******pppppppbStack_1a0;
  byte *******pppppppbStack_198;
  byte *******pppppppbStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  byte *******pppppppbStack_178;
  byte *******pppppppbStack_170;
  code *pcStack_160;
  int iStack_158;
  char cStack_154;
  byte *******pppppppbStack_150;
  long lStack_148;
  code *pcStack_140;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_130;
  byte bStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined2 uStack_117;
  undefined5 uStack_115;
  byte ******ppppppbStack_110;
  byte ******ppppppbStack_108;
  long lStack_100;
  byte ******ppppppbStack_f8;
  byte ******ppppppbStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_50;
  byte *******pppppppbStack_48;
  byte *******pppppppbStack_40;
  undefined *puStack_38;
  
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_0140a120;
  _DAT_0f707818 = 0x21;
  _DAT_0f707820 = 0x1f;
  _DAT_0f707828 = puVar10;
  *(ulong *)((long)puVar10 + 0xf) = CONCAT71(_UNK_0140a119,DAT_0140a118);
  *(undefined8 *)((long)puVar10 + 0x17) = uVar7;
  uVar6 = _UNK_0140a115;
  uVar5 = _UNK_0140a111;
  uVar4 = _UNK_0140a10d;
  *puVar10 = _DAT_0140a109;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined1 *)((long)puVar10 + 0x1f) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f707818,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_0145783c;
  _DAT_0f705068 = 0x21;
  _DAT_0f705070 = 0x1b;
  _DAT_0f705078 = puVar10;
  *(ulong *)((long)puVar10 + 0xb) = CONCAT35(_UNK_01457839,CONCAT41(_UNK_01457835,UNK_01457834));
  *(undefined8 *)((long)puVar10 + 0x13) = uVar7;
  uVar6 = _UNK_01457835;
  uVar5 = _UNK_01457831;
  uVar4 = _UNK_0145782d;
  *puVar10 = _UNK_01457829;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined1 *)((long)puVar10 + 0x1b) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f705068,0xf53dab8);
  uRam000000000f705080 = 0x1004600150001;
  puRam000000000f705088 = &UNK_01254d89;
  puRam000000000f705090 = &UNK_01254d89;
  func_0x0eee2f40(&SUB_0b633870,0xf705080,0xf53dab8);
  uRam000000000f705098 = 0x1005a00150001;
  puRam000000000f7050a0 = &UNK_01254d89;
  puStack_38 = &UNK_01254d89;
  puRam000000000f7050a8 = &UNK_01254d89;
  func_0x0eee2f40(&SUB_0b633870,0xf705098,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_0131c644;
  _DAT_0f7074f0 = 0x21;
  _DAT_0f7074f8 = 0x19;
  _DAT_0f707500 = puVar10;
  *(ulong *)((long)puVar10 + 9) = CONCAT17(UNK_0131c643,CONCAT43(_UNK_0131c63f,_DAT_0131c63c));
  *(undefined8 *)((long)puVar10 + 0x11) = uVar7;
  uVar6 = _UNK_0131c63f;
  uVar5 = _UNK_0131c63b;
  uVar4 = _UNK_0131c637;
  *puVar10 = _DAT_0131c633;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined1 *)((long)puVar10 + 0x19) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f7074f0,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar6 = _UNK_0135280d;
  uVar5 = _UNK_01352809;
  uVar4 = _UNK_01352805;
  _DAT_0f707748 = 0x21;
  _DAT_0f707750 = 0x18;
  _DAT_0f707758 = puVar10;
  *puVar10 = _DAT_01352801;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined8 *)(puVar10 + 4) = 0x6e6f5f6c6c61665f;
  *(undefined1 *)(puVar10 + 6) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f707748,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_013d6da9;
  _DAT_0f707420 = 0x21;
  _DAT_0f707428 = 0x19;
  _DAT_0f707430 = puVar10;
  *(ulong *)((long)puVar10 + 9) = CONCAT17(UNK_013d6da8,CONCAT43(_UNK_013d6da4,_DAT_013d6da1));
  *(undefined8 *)((long)puVar10 + 0x11) = uVar7;
  uVar6 = _UNK_013d6da4;
  uVar5 = _UNK_013d6da0;
  uVar4 = _UNK_013d6d9c;
  *puVar10 = _DAT_013d6d98;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined1 *)((long)puVar10 + 0x19) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f707420,0xf53dab8);
  uRam000000000f7050b8 = 0;
  uRam000000000f7050c0 = 0;
  uRam000000000f7050c8 = 0;
  uRam000000000f7050d0 = 0;
  uRam000000000f7050b0 = 0x50632f23594c1722;
  func_0x0412f5e0(0xf7050b8,&UNK_013d6933,0x18);
  func_0x0eee2f40(&UNK_048c16a0,0xf7050b0,0xf53dab8);
  uRam000000000f706818 = 0;
  uRam000000000f706820 = 0;
  uRam000000000f706828 = 0;
  uRam000000000f706830 = 0;
  uRam000000000f706810 = 0x8ae663900327a16b;
  func_0x0412f5e0(0xf706818,&UNK_013526d1,0x1d);
  func_0x0eee2f40(&UNK_048c16a0,0xf706810,0xf53dab8);
  uRam000000000f706840 = 0;
  uRam000000000f706848 = 0;
  uRam000000000f706850 = 0;
  uRam000000000f706858 = 0;
  uRam000000000f706838 = 0x66fa849bc06c70c5;
  func_0x0412f5e0(0xf706840,&UNK_014a5b23,0x20);
  func_0x0eee2f40(&UNK_048c16a0,0xf706838,0xf53dab8);
  uRam000000000f706fb0 = 0;
  uRam000000000f706fb8 = 0;
  uRam000000000f706fc0 = 0;
  uRam000000000f706fc8 = 0;
  uRam000000000f706fa8 = 0x9c33607759ad8554;
  func_0x0412f5e0(0xf706fb0,&UNK_0131c949,0x21);
  func_0x0eee2f40(&UNK_048c16a0,0xf706fa8,0xf53dab8);
  uRam000000000f7050e0 = 0;
  uRam000000000f7050e8 = 0;
  uRam000000000f7050f0 = 0;
  uRam000000000f7050f8 = 0;
  uRam000000000f7050d8 = 0x8fe7f1b60405d694;
  func_0x0412f5e0(0xf7050e0,&UNK_011ffc32,0x1e);
  func_0x0eee2f40(&UNK_048c16a0,0xf7050d8,0xf53dab8);
  uRam000000000f706800 = 0;
  uRam000000000f706808 = 0;
  uRam000000000f7067e8 = 0xaab7ffe38f4410af;
  uRam000000000f7067f0 = 0x1e;
  uRam000000000f7067f1 = 0x617263656e696d;
  uRam000000000f7067f8 = 0x66;
  uRam000000000f7067f9 = 0x7974706d653a74;
  func_0x0eee2f40(&UNK_048c16a0,0xf7067e8,0xf53dab8);
  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a8);
  if (lVar11 == 0) {
    func_0x0eec74c0(0x1a8,0);
  }
  _DAT_0f705100 = 0x1a9;
  _DAT_0f705108 = 0x1a7;
  _DAT_0f705110 = lVar11;
  func_0x0eee2f00(lVar11,&UNK_01337a1b,0x1a7);
  *(undefined1 *)(lVar11 + 0x1a7) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f705100,0xf53dab8);
  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
  if (lVar11 == 0) {
    func_0x0eec74c0(0xf8,0);
  }
  _DAT_0f705118 = 0xf9;
  _DAT_0f705120 = 0xf4;
  _DAT_0f705128 = lVar11;
  func_0x0eee2f00(lVar11,&UNK_0131c96b,0xf4);
  *(undefined1 *)(lVar11 + 0xf4) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f705118,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  uVar7 = _UNK_014db4c4;
  _DAT_0f705130 = 0x61;
  _DAT_0f705138 = 0x58;
  _DAT_0f705140 = puVar10;
  *(undefined8 *)(puVar10 + 0x10) = _UNK_014db4bc;
  *(undefined8 *)(puVar10 + 0x12) = uVar7;
  uVar7 = _UNK_014db4b4;
  *(undefined8 *)(puVar10 + 0xc) = _UNK_014db4ac;
  *(undefined8 *)(puVar10 + 0xe) = uVar7;
  uVar7 = _UNK_014db4a4;
  *(undefined8 *)(puVar10 + 8) = _UNK_014db49c;
  *(undefined8 *)(puVar10 + 10) = uVar7;
  uVar7 = _UNK_014db494;
  *(undefined8 *)(puVar10 + 4) = _UNK_014db48c;
  *(undefined8 *)(puVar10 + 6) = uVar7;
  uVar6 = _UNK_014db488;
  uVar5 = _UNK_014db484;
  uVar4 = _UNK_014db480;
  *puVar10 = _UNK_014db47c;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined8 *)(puVar10 + 0x14) = 0x2e6d65687420676e;
  *(undefined1 *)(puVar10 + 0x16) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f705130,0xf53dab8);
  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe0);
  if (lVar11 == 0) {
    func_0x0eec74c0(0xe0,0);
  }
  _DAT_0f705148 = 0xe1;
  _DAT_0f705150 = 0xde;
  _DAT_0f705158 = lVar11;
  func_0x0eee2f00(lVar11,&UNK_01495c31,0xde);
  *(undefined1 *)(lVar11 + 0xde) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f705148,0xf53dab8);
  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar11 == 0) {
    func_0x0eec74c0(0x108,0);
  }
  _DAT_0f705160 = 0x109;
  _DAT_0f705168 = 0x105;
  _DAT_0f705170 = lVar11;
  func_0x0eee2f00(lVar11,&UNK_012ce603,0x105);
  *(undefined1 *)(lVar11 + 0x105) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f705160,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar7 = _UNK_014bfbf6;
  uRam000000000f705178 = 0x39;
  uRam000000000f705180 = 0x34;
  puRam000000000f705188 = puVar10;
  *(undefined8 *)(puVar10 + 8) = _UNK_014bfbee;
  *(undefined8 *)(puVar10 + 10) = uVar7;
  uVar7 = _UNK_014bfbe6;
  *(undefined8 *)(puVar10 + 4) = _UNK_014bfbde;
  *(undefined8 *)(puVar10 + 6) = uVar7;
  uVar6 = _UNK_014bfbda;
  uVar5 = _UNK_014bfbd6;
  uVar4 = _UNK_014bfbd2;
  *puVar10 = _UNK_014bfbce;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  puVar10[0xc] = 0x2e73656d;
  *(undefined1 *)(puVar10 + 0xd) = 0;
  func_0x0eee2f40(&UNK_0412ed50,0xf705178,0xf53dab8);
  bStack_128 = 0x22;
  uStack_127 = (undefined7)_UNK_013d38d4;
  uStack_120 = (undefined1)((ulong)_UNK_013d38d4 >> 0x38);
  uStack_11f = (undefined7)_UNK_013d38dc;
  uStack_118 = (undefined1)((ulong)_UNK_013d38dc >> 0x38);
  uStack_117 = 0x65;
  pppppppbVar23 = &ppppppbStack_110;
  uRam000000000f705190 = 0;
  uRam000000000f705198 = 0;
  uRam000000000f7051a0 = 0;
  func_0x048f5d50(0xf705190,&bStack_128,pppppppbVar23,1);
  if ((bStack_128 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT53(uStack_115,CONCAT21(uStack_117,uStack_118)),
                       CONCAT71(uStack_127,bStack_128) & 0xfffffffffffffffe);
  }
  func_0x0eee2f40(&SUB_04886070,0xf705190,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_014809dd;
  uRam000000000f7051a8 = 0x21;
  uRam000000000f7051b0 = 0x1a;
  puRam000000000f7051b8 = puVar10;
  *(ulong *)((long)puVar10 + 10) = CONCAT26(_UNK_014809db,CONCAT42(_UNK_014809d7,_DAT_014809d5));
  *(undefined8 *)((long)puVar10 + 0x12) = uVar7;
  uVar6 = _UNK_014809d7;
  uVar5 = _UNK_014809cf;
  uVar4 = CONCAT22(_DAT_014809d5,_UNK_014809d3);
  *puVar10 = _DAT_014809cb;
  puVar10[1] = uVar5;
  puVar10[2] = uVar4;
  puVar10[3] = uVar6;
  *(undefined1 *)((long)puVar10 + 0x1a) = 0;
  func_0x0eee2f40(&UNK_0412ed50,0xf7051a8,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_0135282b;
  _DAT_0f706ac8 = 0x21;
  _DAT_0f706ad0 = 0x19;
  _DAT_0f706ad8 = puVar10;
  *(ulong *)((long)puVar10 + 9) = CONCAT17(UNK_0135282a,CONCAT43(_UNK_01352826,_DAT_01352823));
  *(undefined8 *)((long)puVar10 + 0x11) = uVar7;
  uVar6 = _UNK_01352826;
  uVar5 = _UNK_01352822;
  uVar4 = _UNK_0135281e;
  *puVar10 = _DAT_0135281a;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined1 *)((long)puVar10 + 0x19) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f706ac8,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar6 = _UNK_013bd34d;
  uVar5 = _UNK_013bd349;
  uVar4 = _UNK_013bd345;
  _DAT_0f706b98 = 0x21;
  _DAT_0f706ba0 = 0x18;
  _DAT_0f706ba8 = puVar10;
  *puVar10 = _DAT_013bd341;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined8 *)(puVar10 + 4) = 0x6e6f697373696d65;
  *(undefined1 *)(puVar10 + 6) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f706b98,0xf53dab8);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_0148b13e;
  _DAT_0f707350 = 0x21;
  _DAT_0f707358 = 0x1a;
  _DAT_0f707360 = puVar10;
  *(ulong *)((long)puVar10 + 10) = CONCAT26(_UNK_0148b13c,CONCAT42(_UNK_0148b138,_DAT_0148b136));
  *(undefined8 *)((long)puVar10 + 0x12) = uVar7;
  uVar6 = _UNK_0148b138;
  uVar5 = _UNK_0148b130;
  uVar4 = CONCAT22(_DAT_0148b136,_UNK_0148b134);
  *puVar10 = _DAT_0148b12c;
  puVar10[1] = uVar5;
  puVar10[2] = uVar4;
  puVar10[3] = uVar6;
  *(undefined1 *)((long)puVar10 + 0x1a) = 0;
  func_0x0eee2f40(&UNK_0412ed50,&DAT_0f707350,0xf53dab8);
  uStack_e8 = 0;
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  ppppppbStack_f8 = (byte ******)0x0;
  ppppppbStack_f0 = (byte ******)0x0;
  ppppppbStack_108 = (byte ******)0x0;
  lStack_100 = 0;
  uStack_118 = 0;
  uStack_117 = 0;
  uStack_115 = 0;
  ppppppbStack_110 = (byte ******)0x0;
  bStack_128 = 0;
  uStack_127 = 0;
  uStack_120 = 0;
  uStack_11f = 0;
  uStack_e0 = 0x3f600000;
  func_0x048af640(pppppppbVar23,8);
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_c0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  bStack_128 = 0x68;
  uStack_127 = 0xf5347;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef44a60;
  *(undefined1 *)(puVar12 + 3) = 1;
  uStack_120 = SUB81(puVar12 + 3,0);
  uStack_11f = (undefined7)((ulong)(puVar12 + 3) >> 8);
  uStack_118 = SUB81(puVar12,0);
  uStack_117 = (undefined2)((ulong)puVar12 >> 8);
  uStack_115 = (undefined5)((ulong)puVar12 >> 0x18);
  bStack_128 = 0xf0;
  uStack_127 = 0xef471;
  lRam000000000f7051c0 = 0;
  pppppppbRam000000000f7051c8 = (byte *******)0x0;
  pppppppbRam000000000f7051d0 = (byte *******)0x0;
  uRam000000000f7051d8 = 0;
  uRam000000000f7051e0 = 0x3f800000;
  lRam000000000f7051e8 = 0;
  pppppppbRam000000000f7051f0 = (byte *******)0x0;
  pppppppbRam000000000f7051f8 = (byte *******)0x0;
  uRam000000000f705200 = 0;
  uRam000000000f705208 = 0x3f800000;
  func_0x0cdab170(&bStack_128);
  if (DAT_0f5f1048 == '\0') goto code_r0x0ce3cf8d;
code_r0x0ce37e0b:
  ppppppbVar16 = ppppppbStack_110 +
                 ((int)((ulong)((long)ppppppbStack_108 - (long)ppppppbStack_110) >> 3) - 1U &
                 _DAT_0f5f1034);
  do {
    pppppbVar17 = *ppppppbVar16;
    if (pppppbVar17 == (byte *****)0xffffffffffffffff) goto code_r0x0ce37e64;
    ppppppbVar16 = ppppppbStack_f8 + (long)pppppbVar17 * 3;
  } while (*(uint *)(ppppppbStack_f8 + (long)pppppbVar17 * 3 + 1) != _DAT_0f5f1034);
  if (ppppppbVar16 == ppppppbStack_f0) {
code_r0x0ce37e64:
    pppppppbStack_178 = (byte *******)0x0;
    pppppppbStack_170 = (byte *******)0x0;
    func_0x048b1dc0(&pppppppbStack_178);
    pppppppbVar14 = pppppppbStack_178;
    pppppppbVar23 = pppppppbStack_170;
    if (pppppppbStack_178 != (byte *******)0x0) goto code_r0x0ce37edf;
code_r0x0ce37e86:
    lVar11 = func_0x048aead0(pppppppbVar23);
    if (*(long *)(lVar11 + 0x78) != 0) {
      lVar11 = func_0x048aead0(pppppppbVar23);
      pppppppbVar21 = *(byte ********)(*(long *)(lVar11 + 0x78) + 0x48);
      lVar11 = func_0x048aead0(pppppppbVar23);
      pppppppbVar28 = *(byte ********)(*(long *)(lVar11 + 0x78) + 0x50);
      pppppppbVar15 = pppppppbVar23;
      pppppppbVar20 = pppppppbVar28;
      pppppppbVar19 = pppppppbVar14;
      if (pppppppbVar21 == pppppppbVar28) goto code_r0x0ce394db;
      goto code_r0x0ce37f2d;
    }
  }
  else {
    pppppppbVar14 = (byte *******)ppppppbVar16[2];
    if (pppppppbVar14 == (byte *******)0x0) goto code_r0x0ce37e86;
code_r0x0ce37edf:
    ppppppbVar16 = pppppppbVar14[0xf];
    if (ppppppbVar16 != (byte ******)0x0) {
      pppppppbVar21 = (byte *******)ppppppbVar16[9];
      pppppppbVar28 = (byte *******)ppppppbVar16[10];
      pppppppbVar15 = pppppppbVar23;
      pppppppbVar20 = pppppppbVar28;
      pppppppbVar19 = pppppppbVar14;
      if (pppppppbVar21 != pppppppbVar28) {
code_r0x0ce37f2d:
        do {
          pppppppbStack_a8 = pppppppbVar19;
          pppppppbStack_b0 = pppppppbVar20;
          pppppppbStack_138 = pppppppbVar15;
          uStack_50 = *(undefined4 *)pppppppbVar21;
          pppppppbStack_48 = pppppppbVar21;
          pppppppbStack_40 = pppppppbVar23;
          plVar13 = (long *)(*(code *)pppppppbVar21[7])(pppppppbVar23);
          uVar4 = uStack_50;
          if (*(uint *)(*plVar13 + 4) == _DAT_0f5f1034) {
            if (pppppppbVar14 == (byte *******)0x0) {
              pppppppbVar14 = (byte *******)func_0x048aead0(pppppppbVar23,0);
            }
            pppppppbVar14 = (byte *******)func_0x048b0c90(pppppppbVar23,pppppppbVar14,uVar4,1);
            if (pppppppbVar14 == (byte *******)0x0) {
              pppppppbStack_178 = (byte *******)0x0;
              pppppppbStack_170 = (byte *******)0x0;
              func_0x048b0d20(&pppppppbStack_178);
              pppppppbVar14 = pppppppbStack_178;
              pppppppbVar23 = pppppppbStack_170;
              if (pppppppbStack_178 != (byte *******)0x0) goto code_r0x0ce37fc6;
              auStack_1a8 = (undefined1  [8])((ulong)auStack_1a8 & 0xffffffffffffff00);
              pppppppbVar23 = (byte *******)0x0;
              pppppppbVar14 = (byte *******)(auStack_1a8 + 1);
            }
            else {
code_r0x0ce37fc6:
              pppppppbStack_90 = pppppppbVar23;
              pppppppbStack_98 = pppppppbVar14;
              auVar31 = func_0x0ed6ae90(&pppppppbStack_98);
              pppppppbVar23 = auVar31._8_8_;
              if ((byte *******)0xfffffffffffffff7 < pppppppbVar23) {
                func_0x04882e30();
                goto code_r0x0ce3cf65;
              }
              if (pppppppbVar23 < (byte *******)0x17) {
                auStack_1a8[0] = auVar31[8] * '\x02';
                pppppppbVar14 = (byte *******)(auStack_1a8 + 1);
                if (pppppppbVar23 == (byte *******)0x0) {
                  pppppppbVar23 = (byte *******)0x0;
                  goto code_r0x0ce38059;
                }
              }
              else {
                uVar18 = ((ulong)pppppppbVar23 | 7) + 1;
                if (((ulong)pppppppbVar23 | 7) == 0x17) {
                  uVar18 = 0x1a;
                }
                pppppppbVar14 =
                     (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
                if (pppppppbVar14 == (byte *******)0x0) {
                  func_0x0eec74c0(uVar18,0);
                }
                unaff_R12 = (byte *******)(uVar18 | 1);
                auStack_1a8 = (undefined1  [8])unaff_R12;
                pppppppbStack_1a0 = pppppppbVar23;
                pppppppbStack_198 = pppppppbVar14;
              }
              func_0x0eee2ee0(pppppppbVar14,auVar31._0_8_,pppppppbVar23);
            }
code_r0x0ce38059:
            *(byte *)((long)pppppppbVar14 + (long)pppppppbVar23) = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            pcStack_80 = (code *)0x0;
            pppppppbStack_98 = (byte *******)0x0;
            pppppppbStack_90 = (byte *******)0x0;
            func_0x05d84ba0(&pppppppbStack_98);
            func_0x05d9a920(&pppppppbStack_178,&pppppppbStack_48,&pppppppbStack_98);
            pppppppbVar23 = pppppppbStack_150;
            pppppppbStack_a0 = pppppppbVar21;
            pppppppbVar14 = pppppppbStack_178;
            if (cStack_154 == '\x02') {
              pppppppbVar14 = (byte *******)&pppppppbStack_178;
            }
            if (pppppppbVar14 == (byte *******)0x0 || iStack_158 != 0x3f1a17ea) {
              if (lStack_148 == 0) {
                (*pcStack_140)(0,&pppppppbStack_178,0);
              }
              pppppppbVar14 = pppppppbStack_178;
              if (cStack_154 == '\x02') {
                pppppppbVar14 = (byte *******)&pppppppbStack_178;
              }
              pppppppbVar14 =
                   (byte *******)func_0x0488e200(pppppppbVar23,lStack_148,0x3f1a17ea,pppppppbVar14);
            }
            bVar29 = ((ulong)auStack_1a8 & 1) == 0;
            pppppppbVar23 = pppppppbStack_198;
            if (bVar29) {
              pppppppbVar23 = (byte *******)(auStack_1a8 + 1);
            }
            bVar2 = *(byte *)pppppppbVar14;
            pppppppbVar14 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
            if (!bVar29) {
              pppppppbVar14 = pppppppbStack_1a0;
            }
            pppppppbVar14 =
                 (byte *******)func_0x04883620(&pppppppbStack_190,pppppppbVar23,pppppppbVar14);
            pppppppbVar23 = pppppppbRam000000000f7051c8;
            if (pppppppbRam000000000f7051c8 != (byte *******)0x0) {
              uVar18 = (long)pppppppbRam000000000f7051c8 -
                       ((ulong)pppppppbRam000000000f7051c8 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
              uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar18 >> 0x38 < 2) {
                pppppppbVar21 =
                     (byte *******)
                     ((ulong)((long)pppppppbRam000000000f7051c8 - 1U) & (ulong)pppppppbVar14);
                plVar13 = *(long **)(lRam000000000f7051c0 + (long)pppppppbVar21 * 8);
              }
              else if (pppppppbVar14 < pppppppbRam000000000f7051c8) {
                plVar13 = *(long **)(lRam000000000f7051c0 + (long)pppppppbVar14 * 8);
                pppppppbVar21 = pppppppbVar14;
              }
              else if (((ulong)pppppppbVar14 | (ulong)pppppppbRam000000000f7051c8) >> 0x20 == 0) {
                pppppppbVar21 =
                     (byte *******)
                     (((ulong)pppppppbVar14 & 0xffffffff) %
                     ((ulong)pppppppbRam000000000f7051c8 & 0xffffffff));
                plVar13 = *(long **)(lRam000000000f7051c0 + (long)pppppppbVar21 * 8);
              }
              else {
                plVar13 = *(long **)(lRam000000000f7051c0 +
                                    (long)((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f7051c8
                                          ) * 8);
                pppppppbVar21 =
                     (byte *******)((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f7051c8);
              }
              if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0))
              {
                pppppppbVar28 = pppppppbStack_198;
                unaff_R12 = pppppppbStack_1a0;
                if (((ulong)auStack_1a8 & 1) == 0) {
                  unaff_R12 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
                  pppppppbVar28 = (byte *******)(auStack_1a8 + 1);
                }
                if ((byte)(uVar18 >> 0x38) < 2) {
                  pbVar25 = (byte *)((long)pppppppbRam000000000f7051c8 + -1);
                  do {
                    if ((byte *******)plVar13[1] == pppppppbVar14) {
                      bVar3 = *(byte *)(plVar13 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppppppbVar23 = (byte *******)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppppppbVar23 = (byte *******)plVar13[3];
                      }
                      if (pppppppbVar23 == unaff_R12) {
                        if ((bVar3 & 1) == 0) {
                          lVar11 = (long)plVar13 + 0x11;
                        }
                        else {
                          lVar11 = plVar13[4];
                        }
                        iVar9 = func_0x0eee3000(lVar11,pppppppbVar28,unaff_R12);
                        if (iVar9 == 0) goto code_r0x0ce39261;
                      }
                    }
                    else if ((byte *******)((ulong)plVar13[1] & (ulong)pbVar25) != pppppppbVar21)
                    break;
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
                else {
                  do {
                    pppppppbVar15 = (byte *******)plVar13[1];
                    if (pppppppbVar15 == pppppppbVar14) {
                      bVar3 = *(byte *)(plVar13 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppppppbVar15 = (byte *******)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppppppbVar15 = (byte *******)plVar13[3];
                      }
                      if (pppppppbVar15 == unaff_R12) {
                        if ((bVar3 & 1) == 0) {
                          lVar11 = (long)plVar13 + 0x11;
                        }
                        else {
                          lVar11 = plVar13[4];
                        }
                        iVar9 = func_0x0eee3000(lVar11,pppppppbVar28,unaff_R12);
                        if (iVar9 == 0) goto code_r0x0ce39261;
                      }
                    }
                    else {
                      if (pppppppbVar23 <= pppppppbVar15) {
                        if (((ulong)pppppppbVar15 | (ulong)pppppppbVar23) >> 0x20 == 0) {
                          pppppppbVar15 =
                               (byte *******)
                               (((ulong)pppppppbVar15 & 0xffffffff) %
                               ((ulong)pppppppbVar23 & 0xffffffff));
                        }
                        else {
                          pppppppbVar15 =
                               (byte *******)((ulong)pppppppbVar15 % (ulong)pppppppbVar23);
                        }
                      }
                      if (pppppppbVar15 != pppppppbVar21) break;
                    }
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
              }
            }
            pppppppbVar23 = (byte *******)(ulong)bVar2;
            if (pppppppbRam000000000f7051f0 != (byte *******)0x0) {
              uVar18 = (long)pppppppbRam000000000f7051f0 -
                       ((ulong)pppppppbRam000000000f7051f0 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
              uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar18 >> 0x38 < 2) {
                pppppppbVar14 =
                     (byte *******)(ulong)((uint)bVar2 & (int)pppppppbRam000000000f7051f0 - 1U);
              }
              else {
                pppppppbVar14 = pppppppbVar23;
                if (pppppppbRam000000000f7051f0 <= pppppppbVar23) {
                  pppppppbVar14 =
                       (byte *******)(ulong)(byte)(bVar2 % (byte)pppppppbRam000000000f7051f0);
                }
              }
              plVar13 = *(long **)(lRam000000000f7051e8 + (long)pppppppbVar14 * 8);
              if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0))
              {
                if ((byte)(uVar18 >> 0x38) < 2) {
                  do {
                    if ((byte *******)plVar13[1] == pppppppbVar23) {
                      if (*(byte *)(plVar13 + 2) == bVar2) goto code_r0x0ce39261;
                    }
                    else if ((byte *******)
                             ((ulong)plVar13[1] & (ulong)((long)pppppppbRam000000000f7051f0 + -1))
                             != pppppppbVar14) break;
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
                else {
                  do {
                    pppppppbVar21 = (byte *******)plVar13[1];
                    if (pppppppbVar21 == pppppppbVar23) {
                      if (*(byte *)(plVar13 + 2) == bVar2) goto code_r0x0ce39261;
                    }
                    else {
                      if (pppppppbRam000000000f7051f0 <= pppppppbVar21) {
                        if (((ulong)pppppppbVar21 | (ulong)pppppppbRam000000000f7051f0) >> 0x20 == 0
                           ) {
                          if ((byte *******)
                              (((ulong)pppppppbVar21 & 0xffffffff) %
                              ((ulong)pppppppbRam000000000f7051f0 & 0xffffffff)) == pppppppbVar14)
                          goto code_r0x0ce3847e;
                          break;
                        }
                        pppppppbVar21 =
                             (byte *******)
                             ((ulong)pppppppbVar21 % (ulong)pppppppbRam000000000f7051f0);
                      }
                      if (pppppppbVar21 != pppppppbVar14) break;
                    }
code_r0x0ce3847e:
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
              }
            }
            pppppppbVar21 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
            pppppppbVar14 = (byte *******)(auStack_1a8 + 1);
            if (((ulong)auStack_1a8 & 1) != 0) {
              pppppppbVar21 = pppppppbStack_1a0;
              pppppppbVar14 = pppppppbStack_198;
            }
            pppppppbVar14 =
                 (byte *******)func_0x04883620(&pppppppbStack_190,pppppppbVar14,pppppppbVar21);
            pppppppbVar21 = pppppppbRam000000000f7051c8;
            pppppppbStack_130 = pppppppbVar23;
            if (pppppppbRam000000000f7051c8 != (byte *******)0x0) {
              uVar18 = (long)pppppppbRam000000000f7051c8 -
                       ((ulong)pppppppbRam000000000f7051c8 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
              uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar18 >> 0x38 < 2) {
                unaff_R12 = (byte *******)
                            ((ulong)((long)pppppppbRam000000000f7051c8 - 1U) & (ulong)pppppppbVar14)
                ;
                puVar12 = *(undefined8 **)(lRam000000000f7051c0 + (long)unaff_R12 * 8);
              }
              else {
                unaff_R12 = pppppppbVar14;
                if (pppppppbRam000000000f7051c8 <= pppppppbVar14) {
                  if (((ulong)pppppppbVar14 | (ulong)pppppppbRam000000000f7051c8) >> 0x20 == 0) {
                    unaff_R12 = (byte *******)
                                (((ulong)pppppppbVar14 & 0xffffffff) %
                                ((ulong)pppppppbRam000000000f7051c8 & 0xffffffff));
                    puVar12 = *(undefined8 **)(lRam000000000f7051c0 + (long)unaff_R12 * 8);
                    goto joined_r0x0ce38768;
                  }
                  unaff_R12 = (byte *******)
                              ((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f7051c8);
                }
                puVar12 = *(undefined8 **)(lRam000000000f7051c0 + (long)unaff_R12 * 8);
              }
joined_r0x0ce38768:
              if ((puVar12 != (undefined8 *)0x0) &&
                 (pppppppbVar28 = (byte *******)*puVar12, pppppppbVar28 != (byte *******)0x0)) {
                pppppppbStack_b8 = pppppppbStack_198;
                pppppppbVar15 = pppppppbStack_1a0;
                if (((ulong)auStack_1a8 & 1) == 0) {
                  pppppppbStack_b8 = (byte *******)(auStack_1a8 + 1);
                  pppppppbVar15 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
                }
                if ((byte)(uVar18 >> 0x38) < 2) {
                  pppppppbVar23 = (byte *******)((long)pppppppbRam000000000f7051c8 + -1);
                  do {
                    if ((byte *******)pppppppbVar28[1] == pppppppbVar14) {
                      bVar3 = *(byte *)(pppppppbVar28 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppppppbVar20 = (byte *******)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppppppbVar20 = (byte *******)pppppppbVar28[3];
                      }
                      if (pppppppbVar20 == pppppppbVar15) {
                        if ((bVar3 & 1) == 0) {
                          ppppppbVar16 = (byte ******)((long)pppppppbVar28 + 0x11);
                        }
                        else {
                          ppppppbVar16 = pppppppbVar28[4];
                        }
                        iVar9 = func_0x0eee3000(ppppppbVar16,pppppppbStack_b8,pppppppbVar15);
                        if (iVar9 == 0) goto code_r0x0ce38c85;
                      }
                    }
                    else if ((byte *******)((ulong)pppppppbVar28[1] & (ulong)pppppppbVar23) !=
                             unaff_R12) break;
                    pppppppbVar28 = (byte *******)*pppppppbVar28;
                  } while (pppppppbVar28 != (byte *******)0x0);
                }
                else {
                  do {
                    pppppppbVar20 = (byte *******)pppppppbVar28[1];
                    if (pppppppbVar20 == pppppppbVar14) {
                      bVar3 = *(byte *)(pppppppbVar28 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppppppbVar20 = (byte *******)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppppppbVar20 = (byte *******)pppppppbVar28[3];
                      }
                      if (pppppppbVar20 == pppppppbVar15) {
                        if ((bVar3 & 1) == 0) {
                          ppppppbVar16 = (byte ******)((long)pppppppbVar28 + 0x11);
                        }
                        else {
                          ppppppbVar16 = pppppppbVar28[4];
                        }
                        iVar9 = func_0x0eee3000(ppppppbVar16,pppppppbStack_b8,pppppppbVar15);
                        if (iVar9 == 0) goto code_r0x0ce38c85;
                      }
                    }
                    else {
                      if (pppppppbVar21 <= pppppppbVar20) {
                        if (((ulong)pppppppbVar20 | (ulong)pppppppbVar21) >> 0x20 == 0) {
                          pppppppbVar20 =
                               (byte *******)
                               (((ulong)pppppppbVar20 & 0xffffffff) %
                               ((ulong)pppppppbVar21 & 0xffffffff));
                        }
                        else {
                          pppppppbVar20 =
                               (byte *******)((ulong)pppppppbVar20 % (ulong)pppppppbVar21);
                        }
                      }
                      if (pppppppbVar20 != unaff_R12) break;
                    }
                    pppppppbVar28 = (byte *******)*pppppppbVar28;
                  } while (pppppppbVar28 != (byte *******)0x0);
                }
              }
            }
            pppppppbVar28 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
            if (pppppppbVar28 == (byte *******)0x0) {
              func_0x0eec74c0(0x30,0);
            }
            uStack_188 = 0xf7051c0;
            uStack_180 = 0;
            *pppppppbVar28 = (byte ******)0x0;
            pppppppbVar28[1] = (byte ******)pppppppbVar14;
            pppppppbStack_190 = pppppppbVar28;
            if (((ulong)auStack_1a8 & 1) == 0) {
              pppppppbVar28[4] = (byte ******)pppppppbStack_198;
              pppppppbVar28[2] = (byte ******)auStack_1a8;
              pppppppbVar28[3] = (byte ******)pppppppbStack_1a0;
            }
            else {
              FUN_0412e5e0(pppppppbVar28 + 2,pppppppbStack_198,pppppppbStack_1a0);
            }
            *(byte *)(pppppppbVar28 + 5) = bVar2;
            uStack_180 = CONCAT71(uStack_180._1_7_,1);
            if ((long)pppppppbVar21 < 0) {
              fVar30 = (float)pppppppbVar21;
              if (pppppppbVar21 != (byte *******)0x0) goto code_r0x0ce38873;
code_r0x0ce388e0:
              uVar18 = 1;
              if ((byte *******)0x2 < pppppppbVar21) {
                uVar18 = (ulong)(((ulong)pppppppbVar21 & (ulong)((long)pppppppbVar21 - 1U)) != 0);
              }
              pppppppbVar15 = (byte *******)((long)pppppppbVar21 * 2 | uVar18);
              fVar30 = (float)ceilf((float)(uRam000000000f7051d8 + 1) / (float)uRam000000000f7051e0)
              ;
              pppppppbVar21 =
                   (byte *******)
                   ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
              if (pppppppbVar21 < pppppppbVar15) {
                pppppppbVar21 = pppppppbVar15;
              }
              pppppppbVar15 = (byte *******)0x2;
              if ((pppppppbVar21 == (byte *******)0x1) ||
                 (pppppppbVar15 = pppppppbVar21,
                 ((ulong)pppppppbVar21 & (ulong)((long)pppppppbVar21 - 1U)) == 0)) {
                bVar29 = pppppppbVar15 < pppppppbRam000000000f7051c8;
                if (pppppppbVar15 <= pppppppbRam000000000f7051c8) goto code_r0x0ce38a6f;
code_r0x0ce3895b:
                unaff_R12 = pppppppbVar15;
                if ((byte *******)0x1fffffffffffffff < unaff_R12) goto code_r0x0ce3cf6f;
                lVar11 = (long)unaff_R12 * 8;
                lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
                if (lVar26 == 0) {
                  func_0x0eec74c0(lVar11,0);
                }
                lVar8 = lRam000000000f7051c0;
                bVar29 = lRam000000000f7051c0 != 0;
                lRam000000000f7051c0 = lVar26;
                if (bVar29) {
                  thunk_FUN_0ee326a0(lVar8,(long)pppppppbRam000000000f7051c8 << 3);
                }
                lVar26 = lRam000000000f7051c0;
                pppppppbRam000000000f7051c8 = unaff_R12;
                func_0x0eee2dd0(lRam000000000f7051c0,0,lVar11);
                pppppppbVar23 = pppppppbRam000000000f7051d0;
                if (pppppppbRam000000000f7051d0 != (byte *******)0x0) {
                  pppppppbVar21 = (byte *******)pppppppbRam000000000f7051d0[1];
                  pbVar25 = (byte *)((long)unaff_R12 - 1);
                  if (((ulong)unaff_R12 & (ulong)pbVar25) == 0) {
                    *(undefined8 *)(lVar26 + ((ulong)pppppppbVar21 & (ulong)pbVar25) * 8) =
                         0xf7051d0;
                    uVar18 = (ulong)pppppppbVar21 & (ulong)pbVar25;
                    while (pppppppbVar21 = pppppppbVar23,
                          pppppppbVar23 = (byte *******)*pppppppbVar21,
                          pppppppbVar23 != (byte *******)0x0) {
                      uVar24 = (ulong)pppppppbVar23[1] & (ulong)pbVar25;
                      if (uVar24 != uVar18) {
                        if (*(long *)(lVar26 + uVar24 * 8) == 0) {
                          *(byte ********)(lVar26 + uVar24 * 8) = pppppppbVar21;
                          uVar18 = uVar24;
                        }
                        else {
                          *pppppppbVar21 = *pppppppbVar23;
                          *pppppppbVar23 = (byte ******)**(undefined8 **)(lVar26 + uVar24 * 8);
                          **(undefined8 **)(lVar26 + uVar24 * 8) = pppppppbVar23;
                          pppppppbVar23 = pppppppbVar21;
                        }
                      }
                    }
                  }
                  else {
                    if (unaff_R12 <= pppppppbVar21) {
                      if (((ulong)pppppppbVar21 | (ulong)unaff_R12) >> 0x20 == 0) {
                        pppppppbVar21 =
                             (byte *******)
                             (((ulong)pppppppbVar21 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff))
                        ;
                      }
                      else {
                        pppppppbVar21 = (byte *******)((ulong)pppppppbVar21 % (ulong)unaff_R12);
                      }
                    }
                    *(undefined8 *)(lVar26 + (long)pppppppbVar21 * 8) = 0xf7051d0;
                    pppppppbVar15 = (byte *******)*pppppppbVar23;
                    while (pppppppbVar15 != (byte *******)0x0) {
                      pppppppbVar20 = (byte *******)pppppppbVar15[1];
                      if (unaff_R12 <= pppppppbVar20) {
                        if (((ulong)pppppppbVar20 | (ulong)unaff_R12) >> 0x20 == 0) {
                          pppppppbVar20 =
                               (byte *******)
                               (((ulong)pppppppbVar20 & 0xffffffff) %
                               ((ulong)unaff_R12 & 0xffffffff));
                        }
                        else {
                          pppppppbVar20 = (byte *******)((ulong)pppppppbVar20 % (ulong)unaff_R12);
                        }
                      }
                      if (pppppppbVar20 != pppppppbVar21) {
                        if (*(long *)(lVar26 + (long)pppppppbVar20 * 8) == 0) {
                          *(byte ********)(lVar26 + (long)pppppppbVar20 * 8) = pppppppbVar23;
                          pppppppbVar21 = pppppppbVar20;
                        }
                        else {
                          *pppppppbVar23 = *pppppppbVar15;
                          *pppppppbVar15 =
                               (byte ******)**(undefined8 **)(lVar26 + (long)pppppppbVar20 * 8);
                          **(undefined8 **)(lVar26 + (long)pppppppbVar20 * 8) = pppppppbVar15;
                          pppppppbVar15 = pppppppbVar23;
                        }
                      }
                      pppppppbVar23 = pppppppbVar15;
                      pppppppbVar15 = (byte *******)*pppppppbVar23;
                    }
                  }
                }
              }
              else {
                pppppppbVar15 = (byte *******)func_0x0412c3f0();
                bVar29 = pppppppbVar15 < pppppppbRam000000000f7051c8;
                if (pppppppbRam000000000f7051c8 < pppppppbVar15) goto code_r0x0ce3895b;
code_r0x0ce38a6f:
                pppppppbVar21 = pppppppbRam000000000f7051c8;
                if (bVar29) {
                  fVar30 = (float)ceilf((float)uRam000000000f7051d8 / (float)uRam000000000f7051e0);
                  unaff_R12 = (byte *******)
                              ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30)
                  ;
                  if ((pppppppbVar21 < (byte *******)0x3) ||
                     (uVar18 = (long)pppppppbVar21 -
                               ((ulong)pppppppbVar21 >> 1 & 0x5555555555555555),
                     uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
                     1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    unaff_R12 = (byte *******)func_0x0412c3f0(unaff_R12);
                    lVar11 = lRam000000000f7051c0;
                    if (unaff_R12 < pppppppbVar15) {
                      unaff_R12 = pppppppbVar15;
                    }
                  }
                  else {
                    if ((byte *******)0x1 < unaff_R12) {
                      lVar11 = 0x3f;
                      if ((byte *)((long)unaff_R12 + -1) != (byte *)0x0) {
                        for (; (ulong)((long)unaff_R12 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
                        }
                      }
                      unaff_R12 = (byte *******)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
                    }
                    lVar11 = lRam000000000f7051c0;
                    if (unaff_R12 < pppppppbVar15) {
                      unaff_R12 = pppppppbVar15;
                    }
                  }
                  lRam000000000f7051c0 = lVar11;
                  if (unaff_R12 < pppppppbVar21) {
                    pppppppbVar15 = unaff_R12;
                    if (unaff_R12 != (byte *******)0x0) goto code_r0x0ce3895b;
                    lRam000000000f7051c0 = 0;
                    if (lVar11 != 0) {
                      thunk_FUN_0ee326a0(lVar11,(long)pppppppbRam000000000f7051c8 << 3);
                    }
                    pppppppbRam000000000f7051c8 = (byte *******)0x0;
                  }
                }
              }
              pppppppbVar21 = pppppppbRam000000000f7051c8;
              if (((ulong)pppppppbRam000000000f7051c8 & (long)pppppppbRam000000000f7051c8 - 1U) != 0
                 ) {
                if (pppppppbRam000000000f7051c8 <= pppppppbVar14) {
                  if (((ulong)pppppppbVar14 | (ulong)pppppppbRam000000000f7051c8) >> 0x20 == 0) {
                    pppppppbVar14 =
                         (byte *******)
                         (((ulong)pppppppbVar14 & 0xffffffff) %
                         ((ulong)pppppppbRam000000000f7051c8 & 0xffffffff));
                    puVar12 = *(undefined8 **)(lRam000000000f7051c0 + (long)pppppppbVar14 * 8);
                    goto joined_r0x0ce39349;
                  }
                  pppppppbVar14 =
                       (byte *******)((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f7051c8);
                }
                puVar12 = *(undefined8 **)(lRam000000000f7051c0 + (long)pppppppbVar14 * 8);
                goto joined_r0x0ce38c6e;
              }
              pppppppbVar14 =
                   (byte *******)
                   ((ulong)pppppppbVar14 & (ulong)((long)pppppppbRam000000000f7051c8 - 1U));
              puVar12 = *(undefined8 **)(lRam000000000f7051c0 + (long)pppppppbVar14 * 8);
joined_r0x0ce39349:
              if (puVar12 == (undefined8 *)0x0) goto code_r0x0ce38893;
code_r0x0ce38c74:
              *pppppppbVar28 = (byte ******)*puVar12;
              *puVar12 = pppppppbVar28;
            }
            else {
              fVar30 = (float)(long)pppppppbVar21;
              if (pppppppbVar21 == (byte *******)0x0) goto code_r0x0ce388e0;
code_r0x0ce38873:
              if (fVar30 * (float)uRam000000000f7051e0 < (float)(uRam000000000f7051d8 + 1))
              goto code_r0x0ce388e0;
              puVar12 = *(undefined8 **)(lRam000000000f7051c0 + (long)unaff_R12 * 8);
              pppppppbVar14 = unaff_R12;
joined_r0x0ce38c6e:
              if (puVar12 != (undefined8 *)0x0) goto code_r0x0ce38c74;
code_r0x0ce38893:
              lVar11 = lRam000000000f7051c0;
              *pppppppbVar28 = (byte ******)pppppppbRam000000000f7051d0;
              pppppppbRam000000000f7051d0 = pppppppbVar28;
              *(undefined8 *)(lVar11 + (long)pppppppbVar14 * 8) = 0xf7051d0;
              if (*pppppppbVar28 != (byte ******)0x0) {
                pppppppbVar23 = (byte *******)(*pppppppbVar28)[1];
                if (((ulong)pppppppbVar21 & (long)pppppppbVar21 - 1U) == 0) {
                  *(byte ********)
                   (lVar11 + ((ulong)pppppppbVar23 & (ulong)((long)pppppppbVar21 - 1U)) * 8) =
                       pppppppbVar28;
                }
                else {
                  if (pppppppbVar21 <= pppppppbVar23) {
                    if (((ulong)pppppppbVar23 | (ulong)pppppppbVar21) >> 0x20 == 0) {
                      *(byte ********)
                       (lVar11 + (((ulong)pppppppbVar23 & 0xffffffff) %
                                 ((ulong)pppppppbVar21 & 0xffffffff)) * 8) = pppppppbVar28;
                      goto code_r0x0ce38c7e;
                    }
                    pppppppbVar23 = (byte *******)((ulong)pppppppbVar23 % (ulong)pppppppbVar21);
                  }
                  *(byte ********)(lVar11 + (long)pppppppbVar23 * 8) = pppppppbVar28;
                }
              }
            }
code_r0x0ce38c7e:
            uRam000000000f7051d8 = uRam000000000f7051d8 + 1;
code_r0x0ce38c85:
            pppppppbVar23 = pppppppbStack_130;
            pppppppbVar14 = pppppppbRam000000000f7051f0;
            if (pppppppbRam000000000f7051f0 != (byte *******)0x0) {
              uVar18 = (long)pppppppbRam000000000f7051f0 -
                       ((ulong)pppppppbRam000000000f7051f0 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
              uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar18 >> 0x38 < 2) {
                pppppppbVar28 =
                     (byte *******)
                     (ulong)((uint)pppppppbStack_130 & (int)pppppppbRam000000000f7051f0 - 1U);
              }
              else {
                pppppppbVar28 = pppppppbStack_130;
                if (pppppppbRam000000000f7051f0 <= pppppppbStack_130) {
                  pppppppbVar28 =
                       (byte *******)(ulong)(byte)(bVar2 % (byte)pppppppbRam000000000f7051f0);
                }
              }
              plVar13 = *(long **)(lRam000000000f7051e8 + (long)pppppppbVar28 * 8);
              if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0))
              {
                if ((byte)(uVar18 >> 0x38) < 2) {
                  do {
                    if ((byte *******)plVar13[1] == pppppppbStack_130) {
                      if (*(byte *)(plVar13 + 2) == bVar2) goto code_r0x0ce39261;
                    }
                    else if ((byte *******)
                             ((ulong)plVar13[1] & (ulong)((long)pppppppbRam000000000f7051f0 - 1U))
                             != pppppppbVar28) break;
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
                else {
                  do {
                    pppppppbVar21 = (byte *******)plVar13[1];
                    if (pppppppbVar21 == pppppppbStack_130) {
                      if (*(byte *)(plVar13 + 2) == bVar2) goto code_r0x0ce39261;
                    }
                    else {
                      if (pppppppbRam000000000f7051f0 <= pppppppbVar21) {
                        if (((ulong)pppppppbVar21 | (ulong)pppppppbRam000000000f7051f0) >> 0x20 == 0
                           ) {
                          if ((byte *******)
                              (((ulong)pppppppbVar21 & 0xffffffff) %
                              ((ulong)pppppppbRam000000000f7051f0 & 0xffffffff)) == pppppppbVar28)
                          goto code_r0x0ce38d5e;
                          break;
                        }
                        pppppppbVar21 =
                             (byte *******)
                             ((ulong)pppppppbVar21 % (ulong)pppppppbRam000000000f7051f0);
                      }
                      if (pppppppbVar21 != pppppppbVar28) break;
                    }
code_r0x0ce38d5e:
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
              }
            }
            pppppppbVar21 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
            if (pppppppbVar21 == (byte *******)0x0) {
              func_0x0eec74c0(0x30,0);
            }
            uStack_188 = 0xf7051e8;
            uStack_180 = 0;
            *pppppppbVar21 = (byte ******)0x0;
            pppppppbVar21[1] = (byte ******)pppppppbVar23;
            *(byte *)(pppppppbVar21 + 2) = bVar2;
            pppppppbStack_190 = pppppppbVar21;
            if (((ulong)auStack_1a8 & 1) == 0) {
              pppppppbVar21[5] = (byte ******)pppppppbStack_198;
              pppppppbVar21[3] = (byte ******)auStack_1a8;
              pppppppbVar21[4] = (byte ******)pppppppbStack_1a0;
            }
            else {
              FUN_0412e5e0(pppppppbVar21 + 3,pppppppbStack_198,pppppppbStack_1a0);
            }
            uStack_180 = CONCAT71(uStack_180._1_7_,1);
            if ((long)pppppppbVar14 < 0) {
              fVar30 = (float)pppppppbVar14;
              if (pppppppbVar14 != (byte *******)0x0) goto code_r0x0ce38ee6;
code_r0x0ce38f00:
              uVar18 = 1;
              if ((byte *******)0x2 < pppppppbVar14) {
                uVar18 = (ulong)(((ulong)pppppppbVar14 & (ulong)((long)pppppppbVar14 - 1U)) != 0);
              }
              pppppppbVar28 = (byte *******)((long)pppppppbVar14 * 2 | uVar18);
              fVar30 = (float)ceilf((float)(uRam000000000f705200 + 1) / (float)uRam000000000f705208)
              ;
              pppppppbVar14 =
                   (byte *******)
                   ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
              if (pppppppbVar14 < pppppppbVar28) {
                pppppppbVar14 = pppppppbVar28;
              }
              pppppppbVar28 = (byte *******)0x2;
              if ((pppppppbVar14 == (byte *******)0x1) ||
                 (pppppppbVar28 = pppppppbVar14,
                 ((ulong)pppppppbVar14 & (ulong)((long)pppppppbVar14 - 1U)) == 0)) {
                bVar29 = pppppppbVar28 < pppppppbRam000000000f7051f0;
                if (pppppppbVar28 <= pppppppbRam000000000f7051f0) goto code_r0x0ce3908f;
code_r0x0ce38f7b:
                unaff_R12 = pppppppbVar28;
                if ((byte *******)0x1fffffffffffffff < unaff_R12) goto code_r0x0ce3cf7e;
                lVar11 = (long)unaff_R12 * 8;
                lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
                if (lVar26 == 0) {
                  func_0x0eec74c0(lVar11,0);
                }
                lVar8 = lRam000000000f7051e8;
                bVar29 = lRam000000000f7051e8 != 0;
                lRam000000000f7051e8 = lVar26;
                if (bVar29) {
                  thunk_FUN_0ee326a0(lVar8,(long)pppppppbRam000000000f7051f0 << 3);
                }
                lVar26 = lRam000000000f7051e8;
                pppppppbRam000000000f7051f0 = unaff_R12;
                func_0x0eee2dd0(lRam000000000f7051e8,0,lVar11);
                pppppppbVar23 = pppppppbRam000000000f7051f8;
                if (pppppppbRam000000000f7051f8 != (byte *******)0x0) {
                  pppppppbVar14 = (byte *******)pppppppbRam000000000f7051f8[1];
                  pbVar25 = (byte *)((long)unaff_R12 - 1);
                  if (((ulong)unaff_R12 & (ulong)pbVar25) == 0) {
                    *(undefined8 *)(lVar26 + ((ulong)pppppppbVar14 & (ulong)pbVar25) * 8) =
                         0xf7051f8;
                    uVar18 = (ulong)pppppppbVar14 & (ulong)pbVar25;
                    while (pppppppbVar14 = pppppppbVar23,
                          pppppppbVar23 = (byte *******)*pppppppbVar14,
                          pppppppbVar23 != (byte *******)0x0) {
                      uVar24 = (ulong)pppppppbVar23[1] & (ulong)pbVar25;
                      if (uVar24 != uVar18) {
                        if (*(long *)(lVar26 + uVar24 * 8) == 0) {
                          *(byte ********)(lVar26 + uVar24 * 8) = pppppppbVar14;
                          uVar18 = uVar24;
                        }
                        else {
                          *pppppppbVar14 = *pppppppbVar23;
                          *pppppppbVar23 = (byte ******)**(undefined8 **)(lVar26 + uVar24 * 8);
                          **(undefined8 **)(lVar26 + uVar24 * 8) = pppppppbVar23;
                          pppppppbVar23 = pppppppbVar14;
                        }
                      }
                    }
                  }
                  else {
                    if (unaff_R12 <= pppppppbVar14) {
                      if (((ulong)pppppppbVar14 | (ulong)unaff_R12) >> 0x20 == 0) {
                        pppppppbVar14 =
                             (byte *******)
                             (((ulong)pppppppbVar14 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff))
                        ;
                      }
                      else {
                        pppppppbVar14 = (byte *******)((ulong)pppppppbVar14 % (ulong)unaff_R12);
                      }
                    }
                    *(undefined8 *)(lVar26 + (long)pppppppbVar14 * 8) = 0xf7051f8;
                    pppppppbVar28 = (byte *******)*pppppppbVar23;
                    while (pppppppbVar28 != (byte *******)0x0) {
                      pppppppbVar15 = (byte *******)pppppppbVar28[1];
                      if (unaff_R12 <= pppppppbVar15) {
                        if (((ulong)pppppppbVar15 | (ulong)unaff_R12) >> 0x20 == 0) {
                          pppppppbVar15 =
                               (byte *******)
                               (((ulong)pppppppbVar15 & 0xffffffff) %
                               ((ulong)unaff_R12 & 0xffffffff));
                        }
                        else {
                          pppppppbVar15 = (byte *******)((ulong)pppppppbVar15 % (ulong)unaff_R12);
                        }
                      }
                      if (pppppppbVar15 != pppppppbVar14) {
                        if (*(long *)(lVar26 + (long)pppppppbVar15 * 8) == 0) {
                          *(byte ********)(lVar26 + (long)pppppppbVar15 * 8) = pppppppbVar23;
                          pppppppbVar14 = pppppppbVar15;
                        }
                        else {
                          *pppppppbVar23 = *pppppppbVar28;
                          *pppppppbVar28 =
                               (byte ******)**(undefined8 **)(lVar26 + (long)pppppppbVar15 * 8);
                          **(undefined8 **)(lVar26 + (long)pppppppbVar15 * 8) = pppppppbVar28;
                          pppppppbVar28 = pppppppbVar23;
                        }
                      }
                      pppppppbVar23 = pppppppbVar28;
                      pppppppbVar28 = (byte *******)*pppppppbVar23;
                    }
                  }
                }
              }
              else {
                pppppppbVar28 = (byte *******)func_0x0412c3f0();
                bVar29 = pppppppbVar28 < pppppppbRam000000000f7051f0;
                if (pppppppbRam000000000f7051f0 < pppppppbVar28) goto code_r0x0ce38f7b;
code_r0x0ce3908f:
                pppppppbVar14 = pppppppbRam000000000f7051f0;
                if (bVar29) {
                  fVar30 = (float)ceilf((float)uRam000000000f705200 / (float)uRam000000000f705208);
                  unaff_R12 = (byte *******)
                              ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30)
                  ;
                  if ((pppppppbVar14 < (byte *******)0x3) ||
                     (uVar18 = (long)pppppppbVar14 -
                               ((ulong)pppppppbVar14 >> 1 & 0x5555555555555555),
                     uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
                     1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    unaff_R12 = (byte *******)func_0x0412c3f0(unaff_R12);
                    lVar11 = lRam000000000f7051e8;
                    if (unaff_R12 < pppppppbVar28) {
                      unaff_R12 = pppppppbVar28;
                    }
                  }
                  else {
                    if ((byte *******)0x1 < unaff_R12) {
                      lVar11 = 0x3f;
                      if ((byte *)((long)unaff_R12 + -1) != (byte *)0x0) {
                        for (; (ulong)((long)unaff_R12 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
                        }
                      }
                      unaff_R12 = (byte *******)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
                    }
                    lVar11 = lRam000000000f7051e8;
                    if (unaff_R12 < pppppppbVar28) {
                      unaff_R12 = pppppppbVar28;
                    }
                  }
                  lRam000000000f7051e8 = lVar11;
                  if (unaff_R12 < pppppppbVar14) {
                    pppppppbVar28 = unaff_R12;
                    if (unaff_R12 != (byte *******)0x0) goto code_r0x0ce38f7b;
                    lRam000000000f7051e8 = 0;
                    if (lVar11 != 0) {
                      thunk_FUN_0ee326a0(lVar11,(long)pppppppbRam000000000f7051f0 << 3);
                    }
                    pppppppbRam000000000f7051f0 = (byte *******)0x0;
                  }
                }
              }
              pppppppbVar14 = pppppppbRam000000000f7051f0;
              if (((ulong)pppppppbRam000000000f7051f0 &
                  (ulong)((long)pppppppbRam000000000f7051f0 - 1U)) == 0) {
                pppppppbVar28 =
                     (byte *******)
                     (ulong)((uint)pppppppbStack_130 & (int)pppppppbRam000000000f7051f0 - 1U);
              }
              else {
                pppppppbVar28 = pppppppbStack_130;
                if ((pppppppbRam000000000f7051f0 <= pppppppbStack_130) &&
                   (pppppppbRam000000000f7051f0 <= pppppppbStack_130)) {
                  pppppppbVar28 =
                       (byte *******)
                       (((ulong)pppppppbStack_130 & 0xffffffff) %
                       ((ulong)pppppppbRam000000000f7051f0 & 0xffffffff));
                }
              }
            }
            else {
              fVar30 = (float)(long)pppppppbVar14;
              if (pppppppbVar14 == (byte *******)0x0) goto code_r0x0ce38f00;
code_r0x0ce38ee6:
              if (fVar30 * (float)uRam000000000f705208 < (float)(uRam000000000f705200 + 1))
              goto code_r0x0ce38f00;
            }
            lVar11 = lRam000000000f7051e8;
            puVar12 = *(undefined8 **)(lRam000000000f7051e8 + (long)pppppppbVar28 * 8);
            if (puVar12 == (undefined8 *)0x0) {
              *pppppppbVar21 = (byte ******)pppppppbRam000000000f7051f8;
              pppppppbRam000000000f7051f8 = pppppppbVar21;
              *(undefined8 *)(lVar11 + (long)pppppppbVar28 * 8) = 0xf7051f8;
              if (*pppppppbVar21 != (byte ******)0x0) {
                pppppppbVar23 = (byte *******)(*pppppppbVar21)[1];
                if (((ulong)pppppppbVar14 & (long)pppppppbVar14 - 1U) == 0) {
                  *(byte ********)
                   (lVar11 + ((ulong)pppppppbVar23 & (ulong)((long)pppppppbVar14 - 1U)) * 8) =
                       pppppppbVar21;
                }
                else {
                  if (pppppppbVar14 <= pppppppbVar23) {
                    if (((ulong)pppppppbVar23 | (ulong)pppppppbVar14) >> 0x20 == 0) {
                      *(byte ********)
                       (lVar11 + (((ulong)pppppppbVar23 & 0xffffffff) %
                                 ((ulong)pppppppbVar14 & 0xffffffff)) * 8) = pppppppbVar21;
                      goto code_r0x0ce3925a;
                    }
                    pppppppbVar23 = (byte *******)((ulong)pppppppbVar23 % (ulong)pppppppbVar14);
                  }
                  *(byte ********)(lVar11 + (long)pppppppbVar23 * 8) = pppppppbVar21;
                }
              }
            }
            else {
              *pppppppbVar21 = (byte ******)*puVar12;
              *puVar12 = pppppppbVar21;
            }
code_r0x0ce3925a:
            uRam000000000f705200 = uRam000000000f705200 + 1;
code_r0x0ce39261:
            if (pcStack_160 != (code *)0x0) {
              (*pcStack_160)(&pppppppbStack_178);
            }
            pppppppbVar21 = pppppppbStack_a0;
            pppppppbVar14 = pppppppbStack_a8;
            pppppppbVar28 = pppppppbStack_b0;
            pppppppbVar23 = pppppppbStack_138;
            if (pcStack_80 != (code *)0x0) {
              (*pcStack_80)(&pppppppbStack_98);
            }
            if (((ulong)auStack_1a8 & 1) != 0) {
              thunk_FUN_0ee326a0(pppppppbStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
            }
          }
          pppppppbVar21 = pppppppbVar21 + 0xd;
          pppppppbVar15 = pppppppbStack_138;
          pppppppbVar20 = pppppppbStack_b0;
          pppppppbVar19 = pppppppbStack_a8;
        } while (pppppppbVar21 != pppppppbVar28);
      }
    }
  }
code_r0x0ce394db:
  bStack_128 = 0x68;
  uStack_127 = 0xf5347;
  plVar13 = (long *)CONCAT53(uStack_115,CONCAT21(uStack_117,uStack_118));
  if (plVar13 == (long *)0x0) {
    *(undefined1 *)CONCAT71(uStack_11f,uStack_120) = 0;
  }
  else {
    *(undefined1 *)CONCAT71(uStack_11f,uStack_120) = 0;
    LOCK();
    plVar1 = plVar13 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  lVar11 = lStack_d8;
  if (lStack_d8 != 0) {
    for (lVar26 = CONCAT62(uStack_ce,uStack_d0); lVar11 != lVar26; lVar26 = lVar26 + -0x38) {
      if ((*(byte *)(lVar26 + -0x38) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar26 + -0x28),
                           *(ulong *)(lVar26 + -0x38) & 0xfffffffffffffffe);
      }
    }
    uStack_d0 = (undefined2)lVar11;
    uStack_ce = (undefined6)((ulong)lVar11 >> 0x10);
    thunk_FUN_0ee326a0(lStack_d8,CONCAT62(uStack_c6,uStack_c8) - lStack_d8);
  }
  pppppppbStack_178 = &ppppppbStack_f8;
  func_0x048b0f50(&pppppppbStack_178);
  if (ppppppbStack_110 != (byte ******)0x0) {
    ppppppbStack_108 = ppppppbStack_110;
    thunk_FUN_0ee326a0(ppppppbStack_110,lStack_100 - (long)ppppppbStack_110);
  }
  func_0x0eee2f40(&UNK_0cdaad20,0xf7051c0,0xf53dab8);
  pppppppbVar23 = &ppppppbStack_110;
  uStack_e8 = 0;
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  ppppppbStack_f8 = (byte ******)0x0;
  ppppppbStack_f0 = (byte ******)0x0;
  ppppppbStack_108 = (byte ******)0x0;
  lStack_100 = 0;
  uStack_118 = 0;
  uStack_117 = 0;
  uStack_115 = 0;
  ppppppbStack_110 = (byte ******)0x0;
  bStack_128 = 0;
  uStack_127 = 0;
  uStack_120 = 0;
  uStack_11f = 0;
  uStack_e0 = 0x3f600000;
  func_0x048af640(pppppppbVar23,8);
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_c0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  bStack_128 = 0x68;
  uStack_127 = 0xf5347;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef44a60;
  *(undefined1 *)(puVar12 + 3) = 1;
  uStack_120 = SUB81(puVar12 + 3,0);
  uStack_11f = (undefined7)((ulong)(puVar12 + 3) >> 8);
  uStack_118 = SUB81(puVar12,0);
  uStack_117 = (undefined2)((ulong)puVar12 >> 8);
  uStack_115 = (undefined5)((ulong)puVar12 >> 0x18);
  bStack_128 = 0xf0;
  uStack_127 = 0xef471;
  lRam000000000f705210 = 0;
  pppppppbRam000000000f705218 = (byte *******)0x0;
  pppppppbRam000000000f705220 = (byte *******)0x0;
  uRam000000000f705228 = 0;
  uRam000000000f705230 = 0x3f800000;
  lRam000000000f705238 = 0;
  pppppppbRam000000000f705240 = (byte *******)0x0;
  pppppppbRam000000000f705248 = (byte *******)0x0;
  uRam000000000f705250 = 0;
  uRam000000000f705258 = 0x3f800000;
  func_0x0cdab170(&bStack_128);
  if ((DAT_0f7058d8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7058d8), iVar9 != 0)) {
    func_0x0cdd52d0(0xf7058c0);
    func_0x0410844d(&DAT_0f7058d8);
  }
  ppppppbVar16 = ppppppbStack_110 +
                 ((int)((ulong)((long)ppppppbStack_108 - (long)ppppppbStack_110) >> 3) - 1U &
                 _DAT_0f7058c4);
  do {
    pppppbVar17 = *ppppppbVar16;
    if (pppppbVar17 == (byte *****)0xffffffffffffffff) goto code_r0x0ce39798;
    ppppppbVar16 = ppppppbStack_f8 + (long)pppppbVar17 * 3;
  } while (*(uint *)(ppppppbStack_f8 + (long)pppppbVar17 * 3 + 1) != _DAT_0f7058c4);
  if (ppppppbVar16 == ppppppbStack_f0) {
code_r0x0ce39798:
    pppppppbStack_178 = (byte *******)0x0;
    pppppppbStack_170 = (byte *******)0x0;
    func_0x048b1dc0(&pppppppbStack_178);
    pppppppbVar14 = pppppppbStack_178;
    pppppppbVar23 = pppppppbStack_170;
    if (pppppppbStack_178 != (byte *******)0x0) goto code_r0x0ce3981b;
code_r0x0ce397ba:
    lVar11 = func_0x048aead0(pppppppbVar23);
    if (*(long *)(lVar11 + 0x78) != 0) {
      lVar11 = func_0x048aead0(pppppppbVar23);
      pppppppbVar21 = *(byte ********)(*(long *)(lVar11 + 0x78) + 0x48);
      lVar11 = func_0x048aead0(pppppppbVar23);
      pppppppbStack_130 = *(byte ********)(*(long *)(lVar11 + 0x78) + 0x50);
      pppppppbVar28 = pppppppbVar14;
      pppppppbVar15 = pppppppbVar23;
      if (pppppppbVar21 == pppppppbStack_130) goto code_r0x0ce3ae0b;
      goto code_r0x0ce39872;
    }
  }
  else {
    pppppppbVar14 = (byte *******)ppppppbVar16[2];
    if (pppppppbVar14 == (byte *******)0x0) goto code_r0x0ce397ba;
code_r0x0ce3981b:
    ppppppbVar16 = pppppppbVar14[0xf];
    if (ppppppbVar16 != (byte ******)0x0) {
      pppppppbVar21 = (byte *******)ppppppbVar16[9];
      pppppppbStack_130 = (byte *******)ppppppbVar16[10];
      pppppppbVar28 = pppppppbVar14;
      pppppppbVar15 = pppppppbVar23;
      if (pppppppbVar21 != pppppppbStack_130) {
code_r0x0ce39872:
        do {
          pppppppbStack_a8 = pppppppbVar15;
          pppppppbStack_b0 = pppppppbVar28;
          uStack_50 = *(undefined4 *)pppppppbVar21;
          pppppppbStack_48 = pppppppbVar21;
          pppppppbStack_40 = pppppppbVar23;
          plVar13 = (long *)(*(code *)pppppppbVar21[7])(pppppppbVar23);
          uVar4 = uStack_50;
          if (*(uint *)(*plVar13 + 4) == _DAT_0f7058c4) {
            if (pppppppbVar14 == (byte *******)0x0) {
              pppppppbVar14 = (byte *******)func_0x048aead0(pppppppbVar23,0);
            }
            pppppppbVar14 = (byte *******)func_0x048b0c90(pppppppbVar23,pppppppbVar14,uVar4,1);
            pppppppbVar28 = pppppppbVar23;
            if (pppppppbVar14 == (byte *******)0x0) {
              pppppppbStack_178 = (byte *******)0x0;
              pppppppbStack_170 = (byte *******)0x0;
              func_0x048b0d20(&pppppppbStack_178);
              pppppppbVar14 = pppppppbStack_178;
              pppppppbVar28 = pppppppbStack_170;
              if (pppppppbStack_178 != (byte *******)0x0) goto code_r0x0ce3990d;
              auStack_1a8 = (undefined1  [8])((ulong)auStack_1a8 & 0xffffffffffffff00);
              pppppppbVar14 = (byte *******)0x0;
              pppppppbVar23 = (byte *******)(auStack_1a8 + 1);
            }
            else {
code_r0x0ce3990d:
              pppppppbStack_90 = pppppppbVar28;
              pppppppbStack_98 = pppppppbVar14;
              auVar31 = func_0x0ed6ae90(&pppppppbStack_98);
              pppppppbVar14 = auVar31._8_8_;
              if ((byte *******)0xfffffffffffffff7 < pppppppbVar14) goto code_r0x0ce3cf65;
              if (pppppppbVar14 < (byte *******)0x17) {
                auStack_1a8[0] = auVar31[8] * '\x02';
                pppppppbVar23 = (byte *******)(auStack_1a8 + 1);
                if (pppppppbVar14 == (byte *******)0x0) {
                  pppppppbVar14 = (byte *******)0x0;
                  goto code_r0x0ce399a9;
                }
              }
              else {
                uVar18 = ((ulong)pppppppbVar14 | 7) + 1;
                if (((ulong)pppppppbVar14 | 7) == 0x17) {
                  uVar18 = 0x1a;
                }
                pppppppbVar23 =
                     (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
                if (pppppppbVar23 == (byte *******)0x0) {
                  func_0x0eec74c0(uVar18,0);
                }
                unaff_R12 = (byte *******)(uVar18 | 1);
                auStack_1a8 = (undefined1  [8])unaff_R12;
                pppppppbStack_1a0 = pppppppbVar14;
                pppppppbStack_198 = pppppppbVar23;
              }
              func_0x0eee2ee0(pppppppbVar23,auVar31._0_8_,pppppppbVar14);
            }
code_r0x0ce399a9:
            *(byte *)((long)pppppppbVar23 + (long)pppppppbVar14) = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            pcStack_80 = (code *)0x0;
            pppppppbStack_98 = (byte *******)0x0;
            pppppppbStack_90 = (byte *******)0x0;
            func_0x05d84ba0(&pppppppbStack_98);
            func_0x05d9a920(&pppppppbStack_178,&pppppppbStack_48,&pppppppbStack_98);
            pppppppbVar23 = pppppppbStack_150;
            pppppppbStack_a0 = pppppppbVar21;
            pppppppbVar14 = pppppppbStack_178;
            if (cStack_154 == '\x02') {
              pppppppbVar14 = (byte *******)&pppppppbStack_178;
            }
            if (pppppppbVar14 == (byte *******)0x0 || iStack_158 != 0x75a5662d) {
              if (lStack_148 == 0) {
                (*pcStack_140)(0,&pppppppbStack_178,0);
              }
              pppppppbVar14 = pppppppbStack_178;
              if (cStack_154 == '\x02') {
                pppppppbVar14 = (byte *******)&pppppppbStack_178;
              }
              pppppppbVar14 =
                   (byte *******)func_0x0488e200(pppppppbVar23,lStack_148,0x75a5662d,pppppppbVar14);
            }
            bVar29 = ((ulong)auStack_1a8 & 1) == 0;
            pppppppbVar23 = pppppppbStack_198;
            if (bVar29) {
              pppppppbVar23 = (byte *******)(auStack_1a8 + 1);
            }
            bVar2 = *(byte *)pppppppbVar14;
            pppppppbVar14 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
            if (!bVar29) {
              pppppppbVar14 = pppppppbStack_1a0;
            }
            pppppppbVar14 =
                 (byte *******)func_0x04883620(&pppppppbStack_190,pppppppbVar23,pppppppbVar14);
            pppppppbVar23 = pppppppbRam000000000f705218;
            if (pppppppbRam000000000f705218 != (byte *******)0x0) {
              uVar18 = (long)pppppppbRam000000000f705218 -
                       ((ulong)pppppppbRam000000000f705218 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
              uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar18 >> 0x38 < 2) {
                pppppppbVar21 =
                     (byte *******)
                     ((ulong)((long)pppppppbRam000000000f705218 - 1U) & (ulong)pppppppbVar14);
                plVar13 = *(long **)(lRam000000000f705210 + (long)pppppppbVar21 * 8);
              }
              else if (pppppppbVar14 < pppppppbRam000000000f705218) {
                plVar13 = *(long **)(lRam000000000f705210 + (long)pppppppbVar14 * 8);
                pppppppbVar21 = pppppppbVar14;
              }
              else if (((ulong)pppppppbVar14 | (ulong)pppppppbRam000000000f705218) >> 0x20 == 0) {
                pppppppbVar21 =
                     (byte *******)
                     (((ulong)pppppppbVar14 & 0xffffffff) %
                     ((ulong)pppppppbRam000000000f705218 & 0xffffffff));
                plVar13 = *(long **)(lRam000000000f705210 + (long)pppppppbVar21 * 8);
              }
              else {
                plVar13 = *(long **)(lRam000000000f705210 +
                                    (long)((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f705218
                                          ) * 8);
                pppppppbVar21 =
                     (byte *******)((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f705218);
              }
              if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0))
              {
                pppppppbVar28 = pppppppbStack_198;
                unaff_R12 = pppppppbStack_1a0;
                if (((ulong)auStack_1a8 & 1) == 0) {
                  unaff_R12 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
                  pppppppbVar28 = (byte *******)(auStack_1a8 + 1);
                }
                if ((byte)(uVar18 >> 0x38) < 2) {
                  pbVar25 = (byte *)((long)pppppppbRam000000000f705218 + -1);
                  do {
                    if ((byte *******)plVar13[1] == pppppppbVar14) {
                      bVar3 = *(byte *)(plVar13 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppppppbVar23 = (byte *******)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppppppbVar23 = (byte *******)plVar13[3];
                      }
                      if (pppppppbVar23 == unaff_R12) {
                        if ((bVar3 & 1) == 0) {
                          lVar11 = (long)plVar13 + 0x11;
                        }
                        else {
                          lVar11 = plVar13[4];
                        }
                        iVar9 = func_0x0eee3000(lVar11,pppppppbVar28,unaff_R12);
                        if (iVar9 == 0) goto code_r0x0ce3ab91;
                      }
                    }
                    else if ((byte *******)((ulong)plVar13[1] & (ulong)pbVar25) != pppppppbVar21)
                    break;
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
                else {
                  do {
                    pppppppbVar15 = (byte *******)plVar13[1];
                    if (pppppppbVar15 == pppppppbVar14) {
                      bVar3 = *(byte *)(plVar13 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppppppbVar15 = (byte *******)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppppppbVar15 = (byte *******)plVar13[3];
                      }
                      if (pppppppbVar15 == unaff_R12) {
                        if ((bVar3 & 1) == 0) {
                          lVar11 = (long)plVar13 + 0x11;
                        }
                        else {
                          lVar11 = plVar13[4];
                        }
                        iVar9 = func_0x0eee3000(lVar11,pppppppbVar28,unaff_R12);
                        if (iVar9 == 0) goto code_r0x0ce3ab91;
                      }
                    }
                    else {
                      if (pppppppbVar23 <= pppppppbVar15) {
                        if (((ulong)pppppppbVar15 | (ulong)pppppppbVar23) >> 0x20 == 0) {
                          pppppppbVar15 =
                               (byte *******)
                               (((ulong)pppppppbVar15 & 0xffffffff) %
                               ((ulong)pppppppbVar23 & 0xffffffff));
                        }
                        else {
                          pppppppbVar15 =
                               (byte *******)((ulong)pppppppbVar15 % (ulong)pppppppbVar23);
                        }
                      }
                      if (pppppppbVar15 != pppppppbVar21) break;
                    }
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
              }
            }
            pppppppbVar23 = (byte *******)(ulong)bVar2;
            if (pppppppbRam000000000f705240 != (byte *******)0x0) {
              uVar18 = (long)pppppppbRam000000000f705240 -
                       ((ulong)pppppppbRam000000000f705240 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
              uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar18 >> 0x38 < 2) {
                pppppppbVar14 =
                     (byte *******)(ulong)((uint)bVar2 & (int)pppppppbRam000000000f705240 - 1U);
              }
              else {
                pppppppbVar14 = pppppppbVar23;
                if (pppppppbRam000000000f705240 <= pppppppbVar23) {
                  pppppppbVar14 =
                       (byte *******)(ulong)(byte)(bVar2 % (byte)pppppppbRam000000000f705240);
                }
              }
              plVar13 = *(long **)(lRam000000000f705238 + (long)pppppppbVar14 * 8);
              if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0))
              {
                if ((byte)(uVar18 >> 0x38) < 2) {
                  do {
                    if ((byte *******)plVar13[1] == pppppppbVar23) {
                      if (*(byte *)(plVar13 + 2) == bVar2) goto code_r0x0ce3ab91;
                    }
                    else if ((byte *******)
                             ((ulong)plVar13[1] & (ulong)((long)pppppppbRam000000000f705240 + -1))
                             != pppppppbVar14) break;
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
                else {
                  do {
                    pppppppbVar21 = (byte *******)plVar13[1];
                    if (pppppppbVar21 == pppppppbVar23) {
                      if (*(byte *)(plVar13 + 2) == bVar2) goto code_r0x0ce3ab91;
                    }
                    else {
                      if (pppppppbRam000000000f705240 <= pppppppbVar21) {
                        if (((ulong)pppppppbVar21 | (ulong)pppppppbRam000000000f705240) >> 0x20 == 0
                           ) {
                          if ((byte *******)
                              (((ulong)pppppppbVar21 & 0xffffffff) %
                              ((ulong)pppppppbRam000000000f705240 & 0xffffffff)) == pppppppbVar14)
                          goto code_r0x0ce39dbe;
                          break;
                        }
                        pppppppbVar21 =
                             (byte *******)
                             ((ulong)pppppppbVar21 % (ulong)pppppppbRam000000000f705240);
                      }
                      if (pppppppbVar21 != pppppppbVar14) break;
                    }
code_r0x0ce39dbe:
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
              }
            }
            pppppppbVar21 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
            pppppppbVar14 = (byte *******)(auStack_1a8 + 1);
            if (((ulong)auStack_1a8 & 1) != 0) {
              pppppppbVar21 = pppppppbStack_1a0;
              pppppppbVar14 = pppppppbStack_198;
            }
            pppppppbVar14 =
                 (byte *******)func_0x04883620(&pppppppbStack_190,pppppppbVar14,pppppppbVar21);
            pppppppbVar21 = pppppppbRam000000000f705218;
            pppppppbStack_b8 = pppppppbVar23;
            if (pppppppbRam000000000f705218 != (byte *******)0x0) {
              uVar18 = (long)pppppppbRam000000000f705218 -
                       ((ulong)pppppppbRam000000000f705218 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
              uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar18 >> 0x38 < 2) {
                unaff_R12 = (byte *******)
                            ((ulong)((long)pppppppbRam000000000f705218 - 1U) & (ulong)pppppppbVar14)
                ;
                puVar12 = *(undefined8 **)(lRam000000000f705210 + (long)unaff_R12 * 8);
              }
              else {
                unaff_R12 = pppppppbVar14;
                if (pppppppbRam000000000f705218 <= pppppppbVar14) {
                  if (((ulong)pppppppbVar14 | (ulong)pppppppbRam000000000f705218) >> 0x20 == 0) {
                    unaff_R12 = (byte *******)
                                (((ulong)pppppppbVar14 & 0xffffffff) %
                                ((ulong)pppppppbRam000000000f705218 & 0xffffffff));
                    puVar12 = *(undefined8 **)(lRam000000000f705210 + (long)unaff_R12 * 8);
                    goto joined_r0x0ce3a0a9;
                  }
                  unaff_R12 = (byte *******)
                              ((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f705218);
                }
                puVar12 = *(undefined8 **)(lRam000000000f705210 + (long)unaff_R12 * 8);
              }
joined_r0x0ce3a0a9:
              if ((puVar12 != (undefined8 *)0x0) &&
                 (pppppppbVar28 = (byte *******)*puVar12, pppppppbVar28 != (byte *******)0x0)) {
                pppppppbStack_138 = pppppppbStack_198;
                pppppppbVar23 = pppppppbStack_1a0;
                if (((ulong)auStack_1a8 & 1) == 0) {
                  pppppppbStack_138 = (byte *******)(auStack_1a8 + 1);
                  pppppppbVar23 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
                }
                if ((byte)(uVar18 >> 0x38) < 2) {
                  pbVar25 = (byte *)((long)pppppppbRam000000000f705218 - 1);
                  do {
                    if ((byte *******)pppppppbVar28[1] == pppppppbVar14) {
                      bVar3 = *(byte *)(pppppppbVar28 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppppppbVar15 = (byte *******)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppppppbVar15 = (byte *******)pppppppbVar28[3];
                      }
                      if (pppppppbVar15 == pppppppbVar23) {
                        if ((bVar3 & 1) == 0) {
                          ppppppbVar16 = (byte ******)((long)pppppppbVar28 + 0x11);
                        }
                        else {
                          ppppppbVar16 = pppppppbVar28[4];
                        }
                        iVar9 = func_0x0eee3000(ppppppbVar16,pppppppbStack_138,pppppppbVar23);
                        if (iVar9 == 0) goto code_r0x0ce3a5c5;
                      }
                    }
                    else if ((byte *******)((ulong)pppppppbVar28[1] & (ulong)pbVar25) != unaff_R12)
                    break;
                    pppppppbVar28 = (byte *******)*pppppppbVar28;
                  } while (pppppppbVar28 != (byte *******)0x0);
                }
                else {
                  do {
                    pppppppbVar15 = (byte *******)pppppppbVar28[1];
                    if (pppppppbVar15 == pppppppbVar14) {
                      bVar3 = *(byte *)(pppppppbVar28 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppppppbVar15 = (byte *******)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppppppbVar15 = (byte *******)pppppppbVar28[3];
                      }
                      if (pppppppbVar15 == pppppppbVar23) {
                        if ((bVar3 & 1) == 0) {
                          ppppppbVar16 = (byte ******)((long)pppppppbVar28 + 0x11);
                        }
                        else {
                          ppppppbVar16 = pppppppbVar28[4];
                        }
                        iVar9 = func_0x0eee3000(ppppppbVar16,pppppppbStack_138,pppppppbVar23);
                        if (iVar9 == 0) goto code_r0x0ce3a5c5;
                      }
                    }
                    else {
                      if (pppppppbVar21 <= pppppppbVar15) {
                        if (((ulong)pppppppbVar15 | (ulong)pppppppbVar21) >> 0x20 == 0) {
                          pppppppbVar15 =
                               (byte *******)
                               (((ulong)pppppppbVar15 & 0xffffffff) %
                               ((ulong)pppppppbVar21 & 0xffffffff));
                        }
                        else {
                          pppppppbVar15 =
                               (byte *******)((ulong)pppppppbVar15 % (ulong)pppppppbVar21);
                        }
                      }
                      if (pppppppbVar15 != unaff_R12) break;
                    }
                    pppppppbVar28 = (byte *******)*pppppppbVar28;
                  } while (pppppppbVar28 != (byte *******)0x0);
                }
              }
            }
            pppppppbVar28 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
            if (pppppppbVar28 == (byte *******)0x0) {
              func_0x0eec74c0(0x30,0);
            }
            uStack_188 = 0xf705210;
            uStack_180 = 0;
            *pppppppbVar28 = (byte ******)0x0;
            pppppppbVar28[1] = (byte ******)pppppppbVar14;
            pppppppbStack_190 = pppppppbVar28;
            if (((ulong)auStack_1a8 & 1) == 0) {
              pppppppbVar28[4] = (byte ******)pppppppbStack_198;
              pppppppbVar28[2] = (byte ******)auStack_1a8;
              pppppppbVar28[3] = (byte ******)pppppppbStack_1a0;
            }
            else {
              FUN_0412e5e0(pppppppbVar28 + 2,pppppppbStack_198,pppppppbStack_1a0);
            }
            *(byte *)(pppppppbVar28 + 5) = bVar2;
            uStack_180 = CONCAT71(uStack_180._1_7_,1);
            if ((long)pppppppbVar21 < 0) {
              fVar30 = (float)pppppppbVar21;
              if (pppppppbVar21 != (byte *******)0x0) goto code_r0x0ce3a1b3;
code_r0x0ce3a220:
              uVar18 = 1;
              if ((byte *******)0x2 < pppppppbVar21) {
                uVar18 = (ulong)(((ulong)pppppppbVar21 & (ulong)((long)pppppppbVar21 - 1U)) != 0);
              }
              pppppppbVar21 = (byte *******)((long)pppppppbVar21 * 2 | uVar18);
              fVar30 = (float)ceilf((float)(uRam000000000f705228 + 1) / (float)uRam000000000f705230)
              ;
              pppppppbVar23 =
                   (byte *******)
                   ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
              if (pppppppbVar23 < pppppppbVar21) {
                pppppppbVar23 = pppppppbVar21;
              }
              pppppppbVar21 = (byte *******)0x2;
              if ((pppppppbVar23 == (byte *******)0x1) ||
                 (pppppppbVar21 = pppppppbVar23,
                 ((ulong)pppppppbVar23 & (ulong)((long)pppppppbVar23 - 1U)) == 0)) {
                bVar29 = pppppppbVar21 < pppppppbRam000000000f705218;
                pppppppbVar23 = pppppppbRam000000000f705218;
                if (pppppppbVar21 <= pppppppbRam000000000f705218) goto code_r0x0ce3a3af;
code_r0x0ce3a29a:
                unaff_R12 = pppppppbVar21;
                if ((byte *******)0x1fffffffffffffff < unaff_R12) goto code_r0x0ce3cf74;
                lVar11 = (long)unaff_R12 * 8;
                lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
                if (lVar26 == 0) {
                  func_0x0eec74c0(lVar11,0);
                }
                lVar8 = lRam000000000f705210;
                bVar29 = lRam000000000f705210 != 0;
                lRam000000000f705210 = lVar26;
                if (bVar29) {
                  thunk_FUN_0ee326a0(lVar8,(long)pppppppbRam000000000f705218 << 3);
                }
                lVar26 = lRam000000000f705210;
                pppppppbRam000000000f705218 = unaff_R12;
                func_0x0eee2dd0(lRam000000000f705210,0,lVar11);
                pppppppbVar23 = pppppppbRam000000000f705220;
                if (pppppppbRam000000000f705220 != (byte *******)0x0) {
                  pppppppbVar21 = (byte *******)pppppppbRam000000000f705220[1];
                  pbVar25 = (byte *)((long)unaff_R12 - 1);
                  if (((ulong)unaff_R12 & (ulong)pbVar25) == 0) {
                    *(undefined8 *)(lVar26 + ((ulong)pppppppbVar21 & (ulong)pbVar25) * 8) =
                         0xf705220;
                    uVar18 = (ulong)pppppppbVar21 & (ulong)pbVar25;
                    while (pppppppbVar21 = pppppppbVar23,
                          pppppppbVar23 = (byte *******)*pppppppbVar21,
                          pppppppbVar23 != (byte *******)0x0) {
                      uVar24 = (ulong)pppppppbVar23[1] & (ulong)pbVar25;
                      if (uVar24 != uVar18) {
                        if (*(long *)(lVar26 + uVar24 * 8) == 0) {
                          *(byte ********)(lVar26 + uVar24 * 8) = pppppppbVar21;
                          uVar18 = uVar24;
                        }
                        else {
                          *pppppppbVar21 = *pppppppbVar23;
                          *pppppppbVar23 = (byte ******)**(undefined8 **)(lVar26 + uVar24 * 8);
                          **(undefined8 **)(lVar26 + uVar24 * 8) = pppppppbVar23;
                          pppppppbVar23 = pppppppbVar21;
                        }
                      }
                    }
                  }
                  else {
                    if (unaff_R12 <= pppppppbVar21) {
                      if (((ulong)pppppppbVar21 | (ulong)unaff_R12) >> 0x20 == 0) {
                        pppppppbVar21 =
                             (byte *******)
                             (((ulong)pppppppbVar21 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff))
                        ;
                      }
                      else {
                        pppppppbVar21 = (byte *******)((ulong)pppppppbVar21 % (ulong)unaff_R12);
                      }
                    }
                    *(undefined8 *)(lVar26 + (long)pppppppbVar21 * 8) = 0xf705220;
                    pppppppbVar15 = (byte *******)*pppppppbVar23;
                    while (pppppppbVar15 != (byte *******)0x0) {
                      pppppppbVar20 = (byte *******)pppppppbVar15[1];
                      if (unaff_R12 <= pppppppbVar20) {
                        if (((ulong)pppppppbVar20 | (ulong)unaff_R12) >> 0x20 == 0) {
                          pppppppbVar20 =
                               (byte *******)
                               (((ulong)pppppppbVar20 & 0xffffffff) %
                               ((ulong)unaff_R12 & 0xffffffff));
                        }
                        else {
                          pppppppbVar20 = (byte *******)((ulong)pppppppbVar20 % (ulong)unaff_R12);
                        }
                      }
                      if (pppppppbVar20 != pppppppbVar21) {
                        if (*(long *)(lVar26 + (long)pppppppbVar20 * 8) == 0) {
                          *(byte ********)(lVar26 + (long)pppppppbVar20 * 8) = pppppppbVar23;
                          pppppppbVar21 = pppppppbVar20;
                        }
                        else {
                          *pppppppbVar23 = *pppppppbVar15;
                          *pppppppbVar15 =
                               (byte ******)**(undefined8 **)(lVar26 + (long)pppppppbVar20 * 8);
                          **(undefined8 **)(lVar26 + (long)pppppppbVar20 * 8) = pppppppbVar15;
                          pppppppbVar15 = pppppppbVar23;
                        }
                      }
                      pppppppbVar23 = pppppppbVar15;
                      pppppppbVar15 = (byte *******)*pppppppbVar23;
                    }
                  }
                }
              }
              else {
                pppppppbVar21 = (byte *******)func_0x0412c3f0();
                bVar29 = pppppppbVar21 < pppppppbRam000000000f705218;
                pppppppbVar23 = pppppppbRam000000000f705218;
                if (pppppppbRam000000000f705218 < pppppppbVar21) goto code_r0x0ce3a29a;
code_r0x0ce3a3af:
                pppppppbVar23 = pppppppbRam000000000f705218;
                if (bVar29) {
                  fVar30 = (float)ceilf((float)uRam000000000f705228 / (float)uRam000000000f705230);
                  unaff_R12 = (byte *******)
                              ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30)
                  ;
                  if ((pppppppbVar23 < (byte *******)0x3) ||
                     (uVar18 = (long)pppppppbVar23 -
                               ((ulong)pppppppbVar23 >> 1 & 0x5555555555555555),
                     uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
                     1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    unaff_R12 = (byte *******)func_0x0412c3f0(unaff_R12);
                    lVar11 = lRam000000000f705210;
                    if (unaff_R12 < pppppppbVar21) {
                      unaff_R12 = pppppppbVar21;
                    }
                  }
                  else {
                    if ((byte *******)0x1 < unaff_R12) {
                      lVar11 = 0x3f;
                      if ((byte *)((long)unaff_R12 + -1) != (byte *)0x0) {
                        for (; (ulong)((long)unaff_R12 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
                        }
                      }
                      unaff_R12 = (byte *******)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
                    }
                    lVar11 = lRam000000000f705210;
                    if (unaff_R12 < pppppppbVar21) {
                      unaff_R12 = pppppppbVar21;
                    }
                  }
                  lRam000000000f705210 = lVar11;
                  if (unaff_R12 < pppppppbVar23) {
                    pppppppbVar21 = unaff_R12;
                    if (unaff_R12 != (byte *******)0x0) goto code_r0x0ce3a29a;
                    lRam000000000f705210 = 0;
                    if (lVar11 != 0) {
                      thunk_FUN_0ee326a0(lVar11,(long)pppppppbRam000000000f705218 << 3);
                    }
                    pppppppbRam000000000f705218 = (byte *******)0x0;
                  }
                }
              }
              pppppppbVar21 = pppppppbRam000000000f705218;
              if (((ulong)pppppppbRam000000000f705218 & (long)pppppppbRam000000000f705218 - 1U) != 0
                 ) {
                if (pppppppbRam000000000f705218 <= pppppppbVar14) {
                  if (((ulong)pppppppbVar14 | (ulong)pppppppbRam000000000f705218) >> 0x20 == 0) {
                    pppppppbVar14 =
                         (byte *******)
                         (((ulong)pppppppbVar14 & 0xffffffff) %
                         ((ulong)pppppppbRam000000000f705218 & 0xffffffff));
                    puVar12 = *(undefined8 **)(lRam000000000f705210 + (long)pppppppbVar14 * 8);
                    goto joined_r0x0ce3ac72;
                  }
                  pppppppbVar14 =
                       (byte *******)((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f705218);
                }
                puVar12 = *(undefined8 **)(lRam000000000f705210 + (long)pppppppbVar14 * 8);
                goto joined_r0x0ce3a5ae;
              }
              pppppppbVar14 =
                   (byte *******)
                   ((ulong)pppppppbVar14 & (ulong)((long)pppppppbRam000000000f705218 - 1U));
              puVar12 = *(undefined8 **)(lRam000000000f705210 + (long)pppppppbVar14 * 8);
joined_r0x0ce3ac72:
              if (puVar12 == (undefined8 *)0x0) goto code_r0x0ce3a1d3;
code_r0x0ce3a5b4:
              *pppppppbVar28 = (byte ******)*puVar12;
              *puVar12 = pppppppbVar28;
            }
            else {
              fVar30 = (float)(long)pppppppbVar21;
              if (pppppppbVar21 == (byte *******)0x0) goto code_r0x0ce3a220;
code_r0x0ce3a1b3:
              if (fVar30 * (float)uRam000000000f705230 < (float)(uRam000000000f705228 + 1))
              goto code_r0x0ce3a220;
              puVar12 = *(undefined8 **)(lRam000000000f705210 + (long)unaff_R12 * 8);
              pppppppbVar14 = unaff_R12;
joined_r0x0ce3a5ae:
              if (puVar12 != (undefined8 *)0x0) goto code_r0x0ce3a5b4;
code_r0x0ce3a1d3:
              lVar11 = lRam000000000f705210;
              *pppppppbVar28 = (byte ******)pppppppbRam000000000f705220;
              pppppppbRam000000000f705220 = pppppppbVar28;
              *(undefined8 *)(lVar11 + (long)pppppppbVar14 * 8) = 0xf705220;
              if (*pppppppbVar28 != (byte ******)0x0) {
                pppppppbVar23 = (byte *******)(*pppppppbVar28)[1];
                if (((ulong)pppppppbVar21 & (long)pppppppbVar21 - 1U) == 0) {
                  *(byte ********)
                   (lVar11 + ((ulong)pppppppbVar23 & (ulong)((long)pppppppbVar21 - 1U)) * 8) =
                       pppppppbVar28;
                }
                else {
                  if (pppppppbVar21 <= pppppppbVar23) {
                    if (((ulong)pppppppbVar23 | (ulong)pppppppbVar21) >> 0x20 == 0) {
                      *(byte ********)
                       (lVar11 + (((ulong)pppppppbVar23 & 0xffffffff) %
                                 ((ulong)pppppppbVar21 & 0xffffffff)) * 8) = pppppppbVar28;
                      goto code_r0x0ce3a5be;
                    }
                    pppppppbVar23 = (byte *******)((ulong)pppppppbVar23 % (ulong)pppppppbVar21);
                  }
                  *(byte ********)(lVar11 + (long)pppppppbVar23 * 8) = pppppppbVar28;
                }
              }
            }
code_r0x0ce3a5be:
            uRam000000000f705228 = uRam000000000f705228 + 1;
code_r0x0ce3a5c5:
            pppppppbVar14 = pppppppbStack_b8;
            pppppppbVar23 = pppppppbRam000000000f705240;
            uVar27 = (uint)pppppppbStack_b8;
            if (pppppppbRam000000000f705240 != (byte *******)0x0) {
              uVar18 = (long)pppppppbRam000000000f705240 -
                       ((ulong)pppppppbRam000000000f705240 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
              uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar18 >> 0x38 < 2) {
                pppppppbVar28 =
                     (byte *******)(ulong)(uVar27 & (int)pppppppbRam000000000f705240 - 1U);
              }
              else {
                pppppppbVar28 = pppppppbStack_b8;
                if (pppppppbRam000000000f705240 <= pppppppbStack_b8) {
                  pppppppbVar28 =
                       (byte *******)(ulong)(byte)(bVar2 % (byte)pppppppbRam000000000f705240);
                }
              }
              plVar13 = *(long **)(lRam000000000f705238 + (long)pppppppbVar28 * 8);
              if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0))
              {
                if ((byte)(uVar18 >> 0x38) < 2) {
                  do {
                    if ((byte *******)plVar13[1] == pppppppbStack_b8) {
                      if (*(byte *)(plVar13 + 2) == bVar2) goto code_r0x0ce3ab91;
                    }
                    else if ((byte *******)
                             ((ulong)plVar13[1] & (ulong)((long)pppppppbRam000000000f705240 - 1U))
                             != pppppppbVar28) break;
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
                else {
                  do {
                    pppppppbVar21 = (byte *******)plVar13[1];
                    if (pppppppbVar21 == pppppppbStack_b8) {
                      if (*(byte *)(plVar13 + 2) == bVar2) goto code_r0x0ce3ab91;
                    }
                    else {
                      if (pppppppbRam000000000f705240 <= pppppppbVar21) {
                        if (((ulong)pppppppbVar21 | (ulong)pppppppbRam000000000f705240) >> 0x20 == 0
                           ) {
                          if ((byte *******)
                              (((ulong)pppppppbVar21 & 0xffffffff) %
                              ((ulong)pppppppbRam000000000f705240 & 0xffffffff)) == pppppppbVar28)
                          goto code_r0x0ce3a69e;
                          break;
                        }
                        pppppppbVar21 =
                             (byte *******)
                             ((ulong)pppppppbVar21 % (ulong)pppppppbRam000000000f705240);
                      }
                      if (pppppppbVar21 != pppppppbVar28) break;
                    }
code_r0x0ce3a69e:
                    plVar13 = (long *)*plVar13;
                  } while (plVar13 != (long *)0x0);
                }
              }
            }
            pppppppbVar21 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
            if (pppppppbVar21 == (byte *******)0x0) {
              func_0x0eec74c0(0x30,0);
            }
            uStack_188 = 0xf705238;
            uStack_180 = 0;
            *pppppppbVar21 = (byte ******)0x0;
            pppppppbVar21[1] = (byte ******)pppppppbVar14;
            *(byte *)(pppppppbVar21 + 2) = bVar2;
            pppppppbStack_190 = pppppppbVar21;
            if (((ulong)auStack_1a8 & 1) == 0) {
              pppppppbVar21[5] = (byte ******)pppppppbStack_198;
              pppppppbVar21[3] = (byte ******)auStack_1a8;
              pppppppbVar21[4] = (byte ******)pppppppbStack_1a0;
            }
            else {
              FUN_0412e5e0(pppppppbVar21 + 3,pppppppbStack_198,pppppppbStack_1a0);
            }
            uStack_180 = CONCAT71(uStack_180._1_7_,1);
            if ((long)pppppppbVar23 < 0) {
              fVar30 = (float)pppppppbVar23;
              if (pppppppbVar23 != (byte *******)0x0) goto code_r0x0ce3a826;
code_r0x0ce3a840:
              uVar18 = 1;
              if ((byte *******)0x2 < pppppppbVar23) {
                uVar18 = (ulong)(((ulong)pppppppbVar23 & (ulong)((long)pppppppbVar23 - 1U)) != 0);
              }
              pppppppbVar28 = (byte *******)((long)pppppppbVar23 * 2 | uVar18);
              fVar30 = (float)ceilf((float)(uRam000000000f705250 + 1) / (float)uRam000000000f705258)
              ;
              pppppppbVar23 =
                   (byte *******)
                   ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
              if (pppppppbVar23 < pppppppbVar28) {
                pppppppbVar23 = pppppppbVar28;
              }
              pppppppbVar28 = (byte *******)0x2;
              if ((pppppppbVar23 == (byte *******)0x1) ||
                 (pppppppbVar28 = pppppppbVar23,
                 ((ulong)pppppppbVar23 & (ulong)((long)pppppppbVar23 - 1U)) == 0)) {
                bVar29 = pppppppbVar28 < pppppppbRam000000000f705240;
                pppppppbVar23 = pppppppbRam000000000f705240;
                if (pppppppbVar28 <= pppppppbRam000000000f705240) goto code_r0x0ce3a9cf;
code_r0x0ce3a8ba:
                unaff_R12 = pppppppbVar28;
                if ((byte *******)0x1fffffffffffffff < unaff_R12) goto code_r0x0ce3cf83;
                lVar11 = (long)unaff_R12 * 8;
                lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
                if (lVar26 == 0) {
                  func_0x0eec74c0(lVar11,0);
                }
                lVar8 = lRam000000000f705238;
                bVar29 = lRam000000000f705238 != 0;
                lRam000000000f705238 = lVar26;
                if (bVar29) {
                  thunk_FUN_0ee326a0(lVar8,(long)pppppppbRam000000000f705240 << 3);
                }
                lVar26 = lRam000000000f705238;
                pppppppbRam000000000f705240 = unaff_R12;
                func_0x0eee2dd0(lRam000000000f705238,0,lVar11);
                pppppppbVar23 = pppppppbRam000000000f705248;
                if (pppppppbRam000000000f705248 != (byte *******)0x0) {
                  pppppppbVar28 = (byte *******)pppppppbRam000000000f705248[1];
                  pbVar25 = (byte *)((long)unaff_R12 - 1);
                  if (((ulong)unaff_R12 & (ulong)pbVar25) == 0) {
                    *(undefined8 *)(lVar26 + ((ulong)pppppppbVar28 & (ulong)pbVar25) * 8) =
                         0xf705248;
                    uVar18 = (ulong)pppppppbVar28 & (ulong)pbVar25;
                    while (pppppppbVar28 = pppppppbVar23,
                          pppppppbVar23 = (byte *******)*pppppppbVar28,
                          pppppppbVar23 != (byte *******)0x0) {
                      uVar24 = (ulong)pppppppbVar23[1] & (ulong)pbVar25;
                      if (uVar24 != uVar18) {
                        if (*(long *)(lVar26 + uVar24 * 8) == 0) {
                          *(byte ********)(lVar26 + uVar24 * 8) = pppppppbVar28;
                          uVar18 = uVar24;
                        }
                        else {
                          *pppppppbVar28 = *pppppppbVar23;
                          *pppppppbVar23 = (byte ******)**(undefined8 **)(lVar26 + uVar24 * 8);
                          **(undefined8 **)(lVar26 + uVar24 * 8) = pppppppbVar23;
                          pppppppbVar23 = pppppppbVar28;
                        }
                      }
                    }
                  }
                  else {
                    if (unaff_R12 <= pppppppbVar28) {
                      if (((ulong)pppppppbVar28 | (ulong)unaff_R12) >> 0x20 == 0) {
                        pppppppbVar28 =
                             (byte *******)
                             (((ulong)pppppppbVar28 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff))
                        ;
                      }
                      else {
                        pppppppbVar28 = (byte *******)((ulong)pppppppbVar28 % (ulong)unaff_R12);
                      }
                    }
                    *(undefined8 *)(lVar26 + (long)pppppppbVar28 * 8) = 0xf705248;
                    pppppppbVar15 = (byte *******)*pppppppbVar23;
                    while (pppppppbVar15 != (byte *******)0x0) {
                      pppppppbVar20 = (byte *******)pppppppbVar15[1];
                      if (unaff_R12 <= pppppppbVar20) {
                        if (((ulong)pppppppbVar20 | (ulong)unaff_R12) >> 0x20 == 0) {
                          pppppppbVar20 =
                               (byte *******)
                               (((ulong)pppppppbVar20 & 0xffffffff) %
                               ((ulong)unaff_R12 & 0xffffffff));
                        }
                        else {
                          pppppppbVar20 = (byte *******)((ulong)pppppppbVar20 % (ulong)unaff_R12);
                        }
                      }
                      if (pppppppbVar20 != pppppppbVar28) {
                        if (*(long *)(lVar26 + (long)pppppppbVar20 * 8) == 0) {
                          *(byte ********)(lVar26 + (long)pppppppbVar20 * 8) = pppppppbVar23;
                          pppppppbVar28 = pppppppbVar20;
                        }
                        else {
                          *pppppppbVar23 = *pppppppbVar15;
                          *pppppppbVar15 =
                               (byte ******)**(undefined8 **)(lVar26 + (long)pppppppbVar20 * 8);
                          **(undefined8 **)(lVar26 + (long)pppppppbVar20 * 8) = pppppppbVar15;
                          pppppppbVar15 = pppppppbVar23;
                        }
                      }
                      pppppppbVar23 = pppppppbVar15;
                      pppppppbVar15 = (byte *******)*pppppppbVar23;
                    }
                  }
                }
              }
              else {
                pppppppbVar28 = (byte *******)func_0x0412c3f0();
                bVar29 = pppppppbVar28 < pppppppbRam000000000f705240;
                pppppppbVar23 = pppppppbRam000000000f705240;
                if (pppppppbRam000000000f705240 < pppppppbVar28) goto code_r0x0ce3a8ba;
code_r0x0ce3a9cf:
                pppppppbVar23 = pppppppbRam000000000f705240;
                if (bVar29) {
                  fVar30 = (float)ceilf((float)uRam000000000f705250 / (float)uRam000000000f705258);
                  unaff_R12 = (byte *******)
                              ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30)
                  ;
                  if ((pppppppbVar23 < (byte *******)0x3) ||
                     (uVar18 = (long)pppppppbVar23 -
                               ((ulong)pppppppbVar23 >> 1 & 0x5555555555555555),
                     uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
                     1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    unaff_R12 = (byte *******)func_0x0412c3f0(unaff_R12);
                    lVar11 = lRam000000000f705238;
                    if (unaff_R12 < pppppppbVar28) {
                      unaff_R12 = pppppppbVar28;
                    }
                  }
                  else {
                    if ((byte *******)0x1 < unaff_R12) {
                      lVar11 = 0x3f;
                      if ((byte *)((long)unaff_R12 + -1) != (byte *)0x0) {
                        for (; (ulong)((long)unaff_R12 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
                        }
                      }
                      unaff_R12 = (byte *******)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
                    }
                    lVar11 = lRam000000000f705238;
                    if (unaff_R12 < pppppppbVar28) {
                      unaff_R12 = pppppppbVar28;
                    }
                  }
                  lRam000000000f705238 = lVar11;
                  if (unaff_R12 < pppppppbVar23) {
                    pppppppbVar28 = unaff_R12;
                    if (unaff_R12 != (byte *******)0x0) goto code_r0x0ce3a8ba;
                    lRam000000000f705238 = 0;
                    if (lVar11 != 0) {
                      thunk_FUN_0ee326a0(lVar11,(long)pppppppbRam000000000f705240 << 3);
                    }
                    pppppppbRam000000000f705240 = (byte *******)0x0;
                  }
                }
              }
              pppppppbVar23 = pppppppbRam000000000f705240;
              if (((ulong)pppppppbRam000000000f705240 &
                  (ulong)((long)pppppppbRam000000000f705240 - 1U)) == 0) {
                pppppppbVar28 =
                     (byte *******)(ulong)(uVar27 & (int)pppppppbRam000000000f705240 - 1U);
              }
              else {
                pppppppbVar28 = pppppppbVar14;
                if ((pppppppbRam000000000f705240 <= pppppppbVar14) &&
                   (pppppppbRam000000000f705240 <= pppppppbVar14)) {
                  pppppppbVar28 =
                       (byte *******)
                       (((ulong)pppppppbVar14 & 0xffffffff) %
                       ((ulong)pppppppbRam000000000f705240 & 0xffffffff));
                }
              }
            }
            else {
              fVar30 = (float)(long)pppppppbVar23;
              if (pppppppbVar23 == (byte *******)0x0) goto code_r0x0ce3a840;
code_r0x0ce3a826:
              if (fVar30 * (float)uRam000000000f705258 < (float)(uRam000000000f705250 + 1))
              goto code_r0x0ce3a840;
            }
            lVar11 = lRam000000000f705238;
            puVar12 = *(undefined8 **)(lRam000000000f705238 + (long)pppppppbVar28 * 8);
            if (puVar12 == (undefined8 *)0x0) {
              *pppppppbVar21 = (byte ******)pppppppbRam000000000f705248;
              pppppppbRam000000000f705248 = pppppppbVar21;
              *(undefined8 *)(lVar11 + (long)pppppppbVar28 * 8) = 0xf705248;
              if (*pppppppbVar21 != (byte ******)0x0) {
                pppppppbVar14 = (byte *******)(*pppppppbVar21)[1];
                if (((ulong)pppppppbVar23 & (long)pppppppbVar23 - 1U) == 0) {
                  *(byte ********)
                   (lVar11 + ((ulong)pppppppbVar14 & (ulong)((long)pppppppbVar23 - 1U)) * 8) =
                       pppppppbVar21;
                }
                else {
                  if (pppppppbVar23 <= pppppppbVar14) {
                    if (((ulong)pppppppbVar14 | (ulong)pppppppbVar23) >> 0x20 == 0) {
                      *(byte ********)
                       (lVar11 + (((ulong)pppppppbVar14 & 0xffffffff) %
                                 ((ulong)pppppppbVar23 & 0xffffffff)) * 8) = pppppppbVar21;
                      goto code_r0x0ce3ab8a;
                    }
                    pppppppbVar14 = (byte *******)((ulong)pppppppbVar14 % (ulong)pppppppbVar23);
                  }
                  *(byte ********)(lVar11 + (long)pppppppbVar14 * 8) = pppppppbVar21;
                }
              }
            }
            else {
              *pppppppbVar21 = (byte ******)*puVar12;
              *puVar12 = pppppppbVar21;
            }
code_r0x0ce3ab8a:
            uRam000000000f705250 = uRam000000000f705250 + 1;
code_r0x0ce3ab91:
            if (pcStack_160 != (code *)0x0) {
              (*pcStack_160)(&pppppppbStack_178);
            }
            pppppppbVar21 = pppppppbStack_a0;
            pppppppbVar23 = pppppppbStack_a8;
            pppppppbVar14 = pppppppbStack_b0;
            if (pcStack_80 != (code *)0x0) {
              (*pcStack_80)(&pppppppbStack_98);
            }
            if (((ulong)auStack_1a8 & 1) != 0) {
              thunk_FUN_0ee326a0(pppppppbStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
            }
          }
          pppppppbVar21 = pppppppbVar21 + 0xd;
          pppppppbVar28 = pppppppbStack_b0;
          pppppppbVar15 = pppppppbStack_a8;
        } while (pppppppbVar21 != pppppppbStack_130);
      }
    }
  }
code_r0x0ce3ae0b:
  bStack_128 = 0x68;
  uStack_127 = 0xf5347;
  plVar13 = (long *)CONCAT53(uStack_115,CONCAT21(uStack_117,uStack_118));
  if (plVar13 == (long *)0x0) {
    *(undefined1 *)CONCAT71(uStack_11f,uStack_120) = 0;
  }
  else {
    *(undefined1 *)CONCAT71(uStack_11f,uStack_120) = 0;
    LOCK();
    plVar1 = plVar13 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  lVar11 = lStack_d8;
  if (lStack_d8 != 0) {
    for (lVar26 = CONCAT62(uStack_ce,uStack_d0); lVar11 != lVar26; lVar26 = lVar26 + -0x38) {
      if ((*(byte *)(lVar26 + -0x38) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar26 + -0x28),
                           *(ulong *)(lVar26 + -0x38) & 0xfffffffffffffffe);
      }
    }
    uStack_d0 = (undefined2)lVar11;
    uStack_ce = (undefined6)((ulong)lVar11 >> 0x10);
    thunk_FUN_0ee326a0(lStack_d8,CONCAT62(uStack_c6,uStack_c8) - lStack_d8);
  }
  pppppppbStack_178 = &ppppppbStack_f8;
  func_0x048b0f50(&pppppppbStack_178);
  if (ppppppbStack_110 != (byte ******)0x0) {
    ppppppbStack_108 = ppppppbStack_110;
    thunk_FUN_0ee326a0(ppppppbStack_110,lStack_100 - (long)ppppppbStack_110);
  }
  func_0x0eee2f40(&UNK_0cdaae00,0xf705210,0xf53dab8);
  puRam000000000f7078f0 = (undefined8 *)0x0;
  lRam000000000f7078f8 = 0;
  puRam000000000f7078e8 = (undefined8 *)0xf7078f0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *(undefined1 *)((long)puVar12 + 0x19) = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0xf7078f0;
  puRam000000000f7078e8 = puVar12;
  puRam000000000f7078f0 = puVar12;
  func_0x048bed00(puVar12,puVar12);
  lRam000000000f7078f8 = lRam000000000f7078f8 + 1;
  func_0x0eee2f40(&UNK_0cdad0c0,0xf7078e8,0xf53dab8);
  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar11 == 0) {
    func_0x0eec74c0(0x108,0);
  }
  uStack_118 = (undefined1)lVar11;
  uStack_117 = (undefined2)((ulong)lVar11 >> 8);
  uStack_115 = (undefined5)((ulong)lVar11 >> 0x18);
  bStack_128 = 9;
  uStack_127 = 1;
  uStack_120 = 2;
  uStack_11f = 1;
  func_0x0eee2f00(lVar11,&UNK_011af8a7,0x102);
  *(undefined1 *)(lVar11 + 0x102) = 0;
  puVar12 = (undefined8 *)func_0x0412f0e0(&bStack_128,0,&UNK_012e8fad,0x1e);
  uRam000000000f705270 = puVar12[2];
  uRam000000000f705260 = *puVar12;
  uRam000000000f705268 = puVar12[1];
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  if ((bStack_128 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT53(uStack_115,CONCAT21(uStack_117,uStack_118)),
                       CONCAT71(uStack_127,bStack_128) & 0xfffffffffffffffe);
  }
  func_0x0eee2f40(&UNK_0412ed50,0xf705260,0xf53dab8);
  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (lVar11 == 0) {
    func_0x0eec74c0(0xd0,0);
  }
  uRam000000000f705278 = 0xd1;
  uRam000000000f705280 = 0xce;
  lRam000000000f705288 = lVar11;
  func_0x0eee2f00(lVar11,&UNK_0131ca6f,0xce);
  *(undefined1 *)(lVar11 + 0xce) = 0;
  func_0x0eee2f40(&UNK_0412ed50,0xf705278,0xf53dab8);
  uStack_e8 = 0;
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  ppppppbStack_f8 = (byte ******)0x0;
  ppppppbStack_f0 = (byte ******)0x0;
  ppppppbStack_108 = (byte ******)0x0;
  lStack_100 = 0;
  uStack_118 = 0;
  uStack_117 = 0;
  uStack_115 = 0;
  ppppppbStack_110 = (byte ******)0x0;
  bStack_128 = 0;
  uStack_127 = 0;
  uStack_120 = 0;
  uStack_11f = 0;
  uStack_e0 = 0x3f600000;
  func_0x048af640(&ppppppbStack_110,8);
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_c0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  bStack_128 = 0x68;
  uStack_127 = 0xf5347;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef44a60;
  *(undefined1 *)(puVar12 + 3) = 1;
  uStack_120 = SUB81(puVar12 + 3,0);
  uStack_11f = (undefined7)((ulong)(puVar12 + 3) >> 8);
  uStack_118 = SUB81(puVar12,0);
  uStack_117 = (undefined2)((ulong)puVar12 >> 8);
  uStack_115 = (undefined5)((ulong)puVar12 >> 0x18);
  bStack_128 = 0xf0;
  uStack_127 = 0xef471;
  pppppppbRam000000000f705290 = (byte *******)0x0;
  pppppppbRam000000000f705298 = (byte *******)0x0;
  pppppppbRam000000000f7052a0 = (byte *******)0x0;
  uRam000000000f7052a8 = 0;
  uRam000000000f7052b0 = 0x3f800000;
  pppppppbRam000000000f7052b8 = (byte *******)0x0;
  pppppppbRam000000000f7052c0 = (byte *******)0x0;
  pppppppbRam000000000f7052c8 = (byte *******)0x0;
  uRam000000000f7052d0 = 0;
  uRam000000000f7052d8 = 0x3f800000;
  func_0x0cdafc00(&bStack_128);
  if ((DAT_0f705908 == '\0') && (iVar9 = func_0x04108328(&DAT_0f705908), iVar9 != 0)) {
    func_0x0cdd5440();
    func_0x0410844d(&DAT_0f705908);
  }
  ppppppbVar16 = ppppppbStack_110 +
                 ((int)((ulong)((long)ppppppbStack_108 - (long)ppppppbStack_110) >> 3) - 1U &
                 _DAT_0f7058f4);
  do {
    pppppbVar17 = *ppppppbVar16;
    if (pppppbVar17 == (byte *****)0xffffffffffffffff) goto code_r0x0ce3b298;
    ppppppbVar16 = ppppppbStack_f8 + (long)pppppbVar17 * 3;
  } while (*(uint *)(ppppppbStack_f8 + (long)pppppbVar17 * 3 + 1) != _DAT_0f7058f4);
  if (ppppppbVar16 == ppppppbStack_f0) {
code_r0x0ce3b298:
    pppppppbStack_178 = (byte *******)0x0;
    pppppppbStack_170 = (byte *******)0x0;
    func_0x048b1dc0(&pppppppbStack_178);
    pppppppbVar23 = pppppppbStack_170;
    pppppppbVar14 = pppppppbStack_178;
  }
  else {
    pppppppbVar23 = &ppppppbStack_110;
    pppppppbVar14 = (byte *******)ppppppbVar16[2];
  }
  pppppppbVar21 = pppppppbVar14;
  pppppppbVar28 = pppppppbVar23;
  if (pppppppbVar14 == (byte *******)0x0) {
    lVar11 = func_0x048aead0(pppppppbVar23);
    if (*(long *)(lVar11 + 0x78) == 0) goto code_r0x0ce3c91a;
    lVar11 = func_0x048aead0(pppppppbVar23);
    pppppppbVar15 = *(byte ********)(*(long *)(lVar11 + 0x78) + 0x48);
    lVar11 = func_0x048aead0(pppppppbVar23);
    pppppppbStack_a0 = *(byte ********)(*(long *)(lVar11 + 0x78) + 0x50);
    if (pppppppbVar15 == pppppppbStack_a0) goto code_r0x0ce3c91a;
  }
  else {
    ppppppbVar16 = pppppppbVar14[0xf];
    if (ppppppbVar16 == (byte ******)0x0) {
code_r0x0ce3c91a:
      bStack_128 = 0x68;
      uStack_127 = 0xf5347;
      plVar13 = (long *)CONCAT53(uStack_115,CONCAT21(uStack_117,uStack_118));
      if (plVar13 == (long *)0x0) {
        *(undefined1 *)CONCAT71(uStack_11f,uStack_120) = 0;
      }
      else {
        *(undefined1 *)CONCAT71(uStack_11f,uStack_120) = 0;
        LOCK();
        plVar1 = plVar13 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          func_0x0412c2d0(plVar13);
        }
      }
      lVar11 = lStack_d8;
      if (lStack_d8 != 0) {
        for (lVar26 = CONCAT62(uStack_ce,uStack_d0); lVar11 != lVar26; lVar26 = lVar26 + -0x38) {
          if ((*(byte *)(lVar26 + -0x38) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(lVar26 + -0x28),
                               *(ulong *)(lVar26 + -0x38) & 0xfffffffffffffffe);
          }
        }
        uStack_d0 = (undefined2)lVar11;
        uStack_ce = (undefined6)((ulong)lVar11 >> 0x10);
        thunk_FUN_0ee326a0(lStack_d8,CONCAT62(uStack_c6,uStack_c8) - lStack_d8);
      }
      pppppppbStack_178 = &ppppppbStack_f8;
      func_0x048b0f50(&pppppppbStack_178);
      if (ppppppbStack_110 != (byte ******)0x0) {
        ppppppbStack_108 = ppppppbStack_110;
        thunk_FUN_0ee326a0(ppppppbStack_110,lStack_100 - (long)ppppppbStack_110);
      }
      func_0x0eee2f40(&UNK_0cdaef40,0xf705290,0xf53dab8);
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar10 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar7 = _UNK_013a2bd0;
      _DAT_0f706ea8 = 0x21;
      _DAT_0f706eb0 = 0x1c;
      _DAT_0f706eb8 = puVar10;
      *(ulong *)(puVar10 + 3) = CONCAT44(_UNK_013a2bcc,_DAT_013a2bc8);
      *(undefined8 *)(puVar10 + 5) = uVar7;
      uVar6 = _DAT_013a2bc8;
      uVar5 = _UNK_013a2bc4;
      uVar4 = _UNK_013a2bc0;
      *puVar10 = _DAT_013a2bbc;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
      *(undefined1 *)(puVar10 + 7) = 0;
      func_0x0eee2f40(&UNK_0412ed50,&DAT_0f706ea8,0xf53dab8);
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar10 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar7 = _UNK_011cad4b;
      uRam000000000f7052e0 = 0x21;
      uRam000000000f7052e8 = 0x19;
      puRam000000000f7052f0 = puVar10;
      *(ulong *)((long)puVar10 + 9) = CONCAT17(UNK_011cad4a,CONCAT43(_UNK_011cad46,_UNK_011cad43));
      *(undefined8 *)((long)puVar10 + 0x11) = uVar7;
      uVar6 = _UNK_011cad46;
      uVar5 = _UNK_011cad42;
      uVar4 = _UNK_011cad3e;
      *puVar10 = _UNK_011cad3a;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
      *(undefined1 *)((long)puVar10 + 0x19) = 0;
      func_0x0eee2f40(&UNK_0412ed50,0xf7052e0,0xf53dab8);
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar10 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar7 = _UNK_0124f94f;
      _DAT_0f707110 = 0x21;
      _DAT_0f707118 = 0x1a;
      _DAT_0f707120 = puVar10;
      *(ulong *)((long)puVar10 + 10) = CONCAT26(_UNK_0124f94d,CONCAT42(_UNK_0124f949,_DAT_0124f947))
      ;
      *(undefined8 *)((long)puVar10 + 0x12) = uVar7;
      uVar6 = _UNK_0124f949;
      uVar5 = _UNK_0124f941;
      uVar4 = CONCAT22(_DAT_0124f947,_UNK_0124f945);
      *puVar10 = _DAT_0124f93d;
      puVar10[1] = uVar5;
      puVar10[2] = uVar4;
      puVar10[3] = uVar6;
      *(undefined1 *)((long)puVar10 + 0x1a) = 0;
      func_0x0eee2f40(&UNK_0412ed50,&DAT_0f707110,0xf53dab8);
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar10 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar7 = _UNK_01279dbf;
      _DAT_0f7075c0 = 0x29;
      _DAT_0f7075c8 = 0x24;
      _DAT_0f7075d0 = puVar10;
      *(undefined8 *)(puVar10 + 4) = _DAT_01279db7;
      *(undefined8 *)(puVar10 + 6) = uVar7;
      uVar6 = _UNK_01279db3;
      uVar5 = _UNK_01279daf;
      uVar4 = _UNK_01279dab;
      *puVar10 = _DAT_01279da7;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
      puVar10[8] = 0x736e6f69;
      *(undefined1 *)(puVar10 + 9) = 0;
      func_0x0eee2f40(&UNK_0412ed50,&DAT_0f7075c0,0xf53dab8);
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar10 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar7 = _UNK_01233dde;
      _DAT_0f7052f8 = 0x29;
      _DAT_0f705300 = 0x20;
      _DAT_0f705308 = puVar10;
      *(undefined8 *)(puVar10 + 4) = _UNK_01233dd6;
      *(undefined8 *)(puVar10 + 6) = uVar7;
      uVar6 = _UNK_01233dd2;
      uVar5 = _UNK_01233dce;
      uVar4 = _UNK_01233dca;
      *puVar10 = _UNK_01233dc6;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
      *(undefined1 *)(puVar10 + 8) = 0;
      func_0x0eee2f40(&UNK_0412ed50,&DAT_0f7052f8,0xf53dab8);
      uRam000000000f705310 = 0x1007800150001;
      puRam000000000f705318 = puStack_38;
      puRam000000000f705320 = puStack_38;
      func_0x0eee2f40(&SUB_0b633870,0xf705310,0xf53dab8);
      puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar10 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar6 = _UNK_012689ac;
      uVar5 = _UNK_012689a8;
      uVar4 = _UNK_012689a4;
      _DAT_0f706dd8 = 0x21;
      _DAT_0f706de0 = 0x18;
      _DAT_0f706de8 = puVar10;
      *puVar10 = _DAT_012689a0;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
      *(undefined8 *)(puVar10 + 4) = 0x676e696b6369745f;
      *(undefined1 *)(puVar10 + 6) = 0;
      func_0x0eee2f40(&UNK_0412ed50,&DAT_0f706dd8,0xf53dab8);
      return;
    }
    pppppppbVar15 = (byte *******)ppppppbVar16[9];
    pppppppbStack_a0 = (byte *******)ppppppbVar16[10];
    if (pppppppbVar15 == pppppppbStack_a0) goto code_r0x0ce3c91a;
  }
  do {
    pppppppbStack_a8 = pppppppbVar28;
    pppppppbStack_b0 = pppppppbVar21;
    uStack_50 = *(undefined4 *)pppppppbVar15;
    pppppppbStack_48 = pppppppbVar15;
    pppppppbStack_40 = pppppppbVar23;
    plVar13 = (long *)(*(code *)pppppppbVar15[7])(pppppppbVar23);
    uVar4 = uStack_50;
    if (*(uint *)(*plVar13 + 4) == _DAT_0f7058f4) {
      if (pppppppbVar14 == (byte *******)0x0) {
        pppppppbVar14 = (byte *******)func_0x048aead0(pppppppbVar23,0);
      }
      pppppppbVar14 = (byte *******)func_0x048b0c90(pppppppbVar23,pppppppbVar14,uVar4,1);
      pppppppbVar21 = pppppppbVar23;
      if (pppppppbVar14 == (byte *******)0x0) {
        pppppppbStack_178 = (byte *******)0x0;
        pppppppbStack_170 = (byte *******)0x0;
        func_0x048b0d20(&pppppppbStack_178);
        pppppppbVar14 = pppppppbStack_178;
        pppppppbVar21 = pppppppbStack_170;
        if (pppppppbStack_178 != (byte *******)0x0) goto code_r0x0ce3b40d;
        auStack_1a8 = (undefined1  [8])((ulong)auStack_1a8 & 0xffffffffffffff00);
        pppppppbVar14 = (byte *******)0x0;
        pppppppbVar23 = (byte *******)(auStack_1a8 + 1);
      }
      else {
code_r0x0ce3b40d:
        pppppppbStack_90 = pppppppbVar21;
        pppppppbStack_98 = pppppppbVar14;
        auVar31 = func_0x0ed6ae90(&pppppppbStack_98);
        pppppppbVar14 = auVar31._8_8_;
        if ((byte *******)0xfffffffffffffff7 < pppppppbVar14) goto code_r0x0ce3cf6a;
        if (pppppppbVar14 < (byte *******)0x17) {
          auStack_1a8[0] = auVar31[8] * '\x02';
          pppppppbVar23 = (byte *******)(auStack_1a8 + 1);
          if (pppppppbVar14 == (byte *******)0x0) {
            pppppppbVar14 = (byte *******)0x0;
            goto code_r0x0ce3b4a9;
          }
        }
        else {
          uVar18 = ((ulong)pppppppbVar14 | 7) + 1;
          if (((ulong)pppppppbVar14 | 7) == 0x17) {
            uVar18 = 0x1a;
          }
          pppppppbVar23 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
          if (pppppppbVar23 == (byte *******)0x0) {
            func_0x0eec74c0(uVar18,0);
          }
          unaff_R12 = (byte *******)(uVar18 | 1);
          auStack_1a8 = (undefined1  [8])unaff_R12;
          pppppppbStack_1a0 = pppppppbVar14;
          pppppppbStack_198 = pppppppbVar23;
        }
        func_0x0eee2ee0(pppppppbVar23,auVar31._0_8_,pppppppbVar14);
      }
code_r0x0ce3b4a9:
      *(byte *)((long)pppppppbVar23 + (long)pppppppbVar14) = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      pcStack_80 = (code *)0x0;
      pppppppbStack_98 = (byte *******)0x0;
      pppppppbStack_90 = (byte *******)0x0;
      func_0x05d84ba0(&pppppppbStack_98);
      func_0x05d9a920(&pppppppbStack_178,&pppppppbStack_48,&pppppppbStack_98);
      pppppppbVar23 = pppppppbStack_150;
      pppppppbStack_b8 = pppppppbVar15;
      pppppppbVar14 = pppppppbStack_178;
      if (cStack_154 == '\x02') {
        pppppppbVar14 = (byte *******)&pppppppbStack_178;
      }
      pppppppbVar21 = (byte *******)&pppppppbStack_178;
      if (pppppppbVar14 == (byte *******)0x0 || iStack_158 != -0x581b6cf5) {
        if (lStack_148 == 0) {
          (*pcStack_140)(0,&pppppppbStack_178,0);
        }
        pppppppbVar14 = pppppppbStack_178;
        if (cStack_154 == '\x02') {
          pppppppbVar14 = (byte *******)&pppppppbStack_178;
        }
        pppppppbVar14 =
             (byte *******)func_0x0488e200(pppppppbVar23,lStack_148,0xa7e4930b,pppppppbVar14);
        pppppppbVar21 = pppppppbVar23;
      }
      bVar29 = ((ulong)auStack_1a8 & 1) == 0;
      pppppppbVar23 = pppppppbStack_198;
      if (bVar29) {
        pppppppbVar23 = (byte *******)(auStack_1a8 + 1);
      }
      bVar2 = *(byte *)pppppppbVar14;
      pppppppbVar14 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
      if (!bVar29) {
        pppppppbVar14 = pppppppbStack_1a0;
      }
      pppppppbVar14 = (byte *******)func_0x04883620(&pppppppbStack_190,pppppppbVar23,pppppppbVar14);
      pppppppbVar23 = pppppppbRam000000000f705298;
      if (pppppppbRam000000000f705298 != (byte *******)0x0) {
        uVar18 = (long)pppppppbRam000000000f705298 -
                 ((ulong)pppppppbRam000000000f705298 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
        uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar18 >> 0x38 < 2) {
          pppppppbVar28 =
               (byte *******)
               ((ulong)((long)pppppppbRam000000000f705298 - 1U) & (ulong)pppppppbVar14);
          ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar28];
        }
        else if (pppppppbVar14 < pppppppbRam000000000f705298) {
          ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar14];
          pppppppbVar28 = pppppppbVar14;
        }
        else if (((ulong)pppppppbVar14 | (ulong)pppppppbRam000000000f705298) >> 0x20 == 0) {
          pppppppbVar28 =
               (byte *******)
               (((ulong)pppppppbVar14 & 0xffffffff) %
               ((ulong)pppppppbRam000000000f705298 & 0xffffffff));
          ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar28];
        }
        else {
          ppppppbVar16 = pppppppbRam000000000f705290
                         [(long)((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f705298)];
          pppppppbVar28 = (byte *******)((ulong)pppppppbVar14 % (ulong)pppppppbRam000000000f705298);
        }
        pppppppbVar21 = pppppppbVar14;
        if ((ppppppbVar16 != (byte ******)0x0) &&
           (pppppbVar17 = *ppppppbVar16, pppppbVar17 != (byte *****)0x0)) {
          pppppppbVar15 = pppppppbStack_198;
          unaff_R12 = pppppppbStack_1a0;
          if (((ulong)auStack_1a8 & 1) == 0) {
            unaff_R12 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
            pppppppbVar15 = (byte *******)(auStack_1a8 + 1);
          }
          if ((byte)(uVar18 >> 0x38) < 2) {
            pbVar25 = (byte *)((long)pppppppbRam000000000f705298 + -1);
            do {
              if ((byte *******)pppppbVar17[1] == pppppppbVar14) {
                bVar3 = *(byte *)(pppppbVar17 + 2);
                if ((bVar3 & 1) == 0) {
                  pppppppbVar23 = (byte *******)(ulong)(bVar3 >> 1);
                }
                else {
                  pppppppbVar23 = (byte *******)pppppbVar17[3];
                }
                if (pppppppbVar23 == unaff_R12) {
                  if ((bVar3 & 1) == 0) {
                    ppppbVar22 = (byte ****)((long)pppppbVar17 + 0x11);
                  }
                  else {
                    ppppbVar22 = pppppbVar17[4];
                  }
                  iVar9 = func_0x0eee3000(ppppbVar22,pppppppbVar15,unaff_R12);
                  if (iVar9 == 0) goto code_r0x0ce3c6a1;
                }
              }
              else if ((byte *******)((ulong)pppppbVar17[1] & (ulong)pbVar25) != pppppppbVar28)
              break;
              pppppbVar17 = (byte *****)*pppppbVar17;
            } while (pppppbVar17 != (byte *****)0x0);
          }
          else {
            do {
              pppppppbVar20 = (byte *******)pppppbVar17[1];
              if (pppppppbVar20 == pppppppbVar14) {
                bVar3 = *(byte *)(pppppbVar17 + 2);
                if ((bVar3 & 1) == 0) {
                  pppppppbVar20 = (byte *******)(ulong)(bVar3 >> 1);
                }
                else {
                  pppppppbVar20 = (byte *******)pppppbVar17[3];
                }
                if (pppppppbVar20 == unaff_R12) {
                  if ((bVar3 & 1) == 0) {
                    ppppbVar22 = (byte ****)((long)pppppbVar17 + 0x11);
                  }
                  else {
                    ppppbVar22 = pppppbVar17[4];
                  }
                  iVar9 = func_0x0eee3000(ppppbVar22,pppppppbVar15,unaff_R12);
                  if (iVar9 == 0) goto code_r0x0ce3c6a1;
                }
              }
              else {
                if (pppppppbVar23 <= pppppppbVar20) {
                  if (((ulong)pppppppbVar20 | (ulong)pppppppbVar23) >> 0x20 == 0) {
                    pppppppbVar20 =
                         (byte *******)
                         (((ulong)pppppppbVar20 & 0xffffffff) % ((ulong)pppppppbVar23 & 0xffffffff))
                    ;
                  }
                  else {
                    pppppppbVar20 = (byte *******)((ulong)pppppppbVar20 % (ulong)pppppppbVar23);
                  }
                }
                if (pppppppbVar20 != pppppppbVar28) break;
              }
              pppppbVar17 = (byte *****)*pppppbVar17;
            } while (pppppbVar17 != (byte *****)0x0);
          }
        }
      }
      pppppppbVar23 = (byte *******)(ulong)bVar2;
      if (pppppppbRam000000000f7052c0 != (byte *******)0x0) {
        uVar18 = (long)pppppppbRam000000000f7052c0 -
                 ((ulong)pppppppbRam000000000f7052c0 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
        uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar18 >> 0x38 < 2) {
          pppppppbVar14 = (byte *******)(ulong)((uint)bVar2 & (int)pppppppbRam000000000f7052c0 - 1U)
          ;
        }
        else {
          pppppppbVar14 = pppppppbVar23;
          if (pppppppbRam000000000f7052c0 <= pppppppbVar23) {
            pppppppbVar14 = (byte *******)(ulong)(byte)(bVar2 % (byte)pppppppbRam000000000f7052c0);
          }
        }
        if ((pppppppbRam000000000f7052b8[(long)pppppppbVar14] != (byte ******)0x0) &&
           (pppppbVar17 = *pppppppbRam000000000f7052b8[(long)pppppppbVar14],
           pppppbVar17 != (byte *****)0x0)) {
          if ((byte)(uVar18 >> 0x38) < 2) {
            do {
              if ((byte *******)pppppbVar17[1] == pppppppbVar23) {
                if (*(byte *)(pppppbVar17 + 2) == bVar2) goto code_r0x0ce3c6a1;
              }
              else if ((byte *******)
                       ((ulong)pppppbVar17[1] & (ulong)((long)pppppppbRam000000000f7052c0 + -1)) !=
                       pppppppbVar14) break;
              pppppbVar17 = (byte *****)*pppppbVar17;
            } while (pppppbVar17 != (byte *****)0x0);
          }
          else {
            do {
              pppppppbVar28 = (byte *******)pppppbVar17[1];
              if (pppppppbVar28 == pppppppbVar23) {
                if (*(byte *)(pppppbVar17 + 2) == bVar2) goto code_r0x0ce3c6a1;
              }
              else {
                if (pppppppbRam000000000f7052c0 <= pppppppbVar28) {
                  if (((ulong)pppppppbVar28 | (ulong)pppppppbRam000000000f7052c0) >> 0x20 == 0) {
                    if ((byte *******)
                        (((ulong)pppppppbVar28 & 0xffffffff) %
                        ((ulong)pppppppbRam000000000f7052c0 & 0xffffffff)) == pppppppbVar14)
                    goto code_r0x0ce3b8be;
                    break;
                  }
                  pppppppbVar28 =
                       (byte *******)((ulong)pppppppbVar28 % (ulong)pppppppbRam000000000f7052c0);
                }
                if (pppppppbVar28 != pppppppbVar14) break;
              }
code_r0x0ce3b8be:
              pppppbVar17 = (byte *****)*pppppbVar17;
            } while (pppppbVar17 != (byte *****)0x0);
          }
        }
      }
      pppppppbVar28 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
      pppppppbVar14 = (byte *******)(auStack_1a8 + 1);
      if (((ulong)auStack_1a8 & 1) != 0) {
        pppppppbVar28 = pppppppbStack_1a0;
        pppppppbVar14 = pppppppbStack_198;
      }
      pppppppbVar28 = (byte *******)func_0x04883620(&pppppppbStack_190,pppppppbVar14,pppppppbVar28);
      pppppppbVar14 = pppppppbRam000000000f705298;
      pppppppbStack_130 = pppppppbVar23;
      if (pppppppbRam000000000f705298 != (byte *******)0x0) {
        uVar18 = (long)pppppppbRam000000000f705298 -
                 ((ulong)pppppppbRam000000000f705298 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
        uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar18 >> 0x38 < 2) {
          pppppppbVar21 =
               (byte *******)
               ((ulong)((long)pppppppbRam000000000f705298 - 1U) & (ulong)pppppppbVar28);
          ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar21];
        }
        else {
          pppppppbVar21 = pppppppbVar28;
          if (pppppppbRam000000000f705298 <= pppppppbVar28) {
            if (((ulong)pppppppbVar28 | (ulong)pppppppbRam000000000f705298) >> 0x20 == 0) {
              pppppppbVar21 =
                   (byte *******)
                   (((ulong)pppppppbVar28 & 0xffffffff) %
                   ((ulong)pppppppbRam000000000f705298 & 0xffffffff));
              ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar21];
              goto joined_r0x0ce3bba8;
            }
            pppppppbVar21 =
                 (byte *******)((ulong)pppppppbVar28 % (ulong)pppppppbRam000000000f705298);
          }
          ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar21];
        }
joined_r0x0ce3bba8:
        if ((ppppppbVar16 != (byte ******)0x0) &&
           (pppppppbVar15 = (byte *******)*ppppppbVar16, pppppppbVar15 != (byte *******)0x0)) {
          pppppppbStack_138 = pppppppbStack_198;
          unaff_R12 = pppppppbStack_1a0;
          if (((ulong)auStack_1a8 & 1) == 0) {
            unaff_R12 = (byte *******)((ulong)auStack_1a8 >> 1 & 0x7f);
            pppppppbStack_138 = (byte *******)(auStack_1a8 + 1);
          }
          if ((byte)(uVar18 >> 0x38) < 2) {
            pbVar25 = (byte *)((long)pppppppbRam000000000f705298 - 1);
            do {
              if ((byte *******)pppppppbVar15[1] == pppppppbVar28) {
                bVar3 = *(byte *)(pppppppbVar15 + 2);
                if ((bVar3 & 1) == 0) {
                  pppppppbVar23 = (byte *******)(ulong)(bVar3 >> 1);
                }
                else {
                  pppppppbVar23 = (byte *******)pppppppbVar15[3];
                }
                if (pppppppbVar23 == unaff_R12) {
                  if ((bVar3 & 1) == 0) {
                    ppppppbVar16 = (byte ******)((long)pppppppbVar15 + 0x11);
                  }
                  else {
                    ppppppbVar16 = pppppppbVar15[4];
                  }
                  iVar9 = func_0x0eee3000(ppppppbVar16,pppppppbStack_138,unaff_R12);
                  if (iVar9 == 0) goto code_r0x0ce3c0c5;
                }
              }
              else if ((byte *******)((ulong)pppppppbVar15[1] & (ulong)pbVar25) != pppppppbVar21)
              break;
              pppppppbVar15 = (byte *******)*pppppppbVar15;
            } while (pppppppbVar15 != (byte *******)0x0);
          }
          else {
            do {
              pppppppbVar23 = (byte *******)pppppppbVar15[1];
              if (pppppppbVar23 == pppppppbVar28) {
                bVar3 = *(byte *)(pppppppbVar15 + 2);
                if ((bVar3 & 1) == 0) {
                  pppppppbVar23 = (byte *******)(ulong)(bVar3 >> 1);
                }
                else {
                  pppppppbVar23 = (byte *******)pppppppbVar15[3];
                }
                if (pppppppbVar23 == unaff_R12) {
                  if ((bVar3 & 1) == 0) {
                    ppppppbVar16 = (byte ******)((long)pppppppbVar15 + 0x11);
                  }
                  else {
                    ppppppbVar16 = pppppppbVar15[4];
                  }
                  iVar9 = func_0x0eee3000(ppppppbVar16,pppppppbStack_138,unaff_R12);
                  if (iVar9 == 0) goto code_r0x0ce3c0c5;
                }
              }
              else {
                if (pppppppbVar14 <= pppppppbVar23) {
                  if (((ulong)pppppppbVar23 | (ulong)pppppppbVar14) >> 0x20 == 0) {
                    pppppppbVar23 =
                         (byte *******)
                         (((ulong)pppppppbVar23 & 0xffffffff) % ((ulong)pppppppbVar14 & 0xffffffff))
                    ;
                  }
                  else {
                    pppppppbVar23 = (byte *******)((ulong)pppppppbVar23 % (ulong)pppppppbVar14);
                  }
                }
                if (pppppppbVar23 != pppppppbVar21) break;
              }
              pppppppbVar15 = (byte *******)*pppppppbVar15;
            } while (pppppppbVar15 != (byte *******)0x0);
          }
        }
      }
      pppppppbVar15 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (pppppppbVar15 == (byte *******)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      uStack_188 = 0xf705290;
      uStack_180 = 0;
      *pppppppbVar15 = (byte ******)0x0;
      pppppppbVar15[1] = (byte ******)pppppppbVar28;
      pppppppbStack_190 = pppppppbVar15;
      if (((ulong)auStack_1a8 & 1) == 0) {
        pppppppbVar15[4] = (byte ******)pppppppbStack_198;
        pppppppbVar15[2] = (byte ******)auStack_1a8;
        pppppppbVar15[3] = (byte ******)pppppppbStack_1a0;
      }
      else {
        FUN_0412e5e0(pppppppbVar15 + 2,pppppppbStack_198,pppppppbStack_1a0);
      }
      *(byte *)(pppppppbVar15 + 5) = bVar2;
      uStack_180 = CONCAT71(uStack_180._1_7_,1);
      if ((long)pppppppbVar14 < 0) {
        fVar30 = (float)pppppppbVar14;
        if (pppppppbVar14 != (byte *******)0x0) goto code_r0x0ce3bcb3;
code_r0x0ce3bd20:
        uVar18 = 1;
        if ((byte *******)0x2 < pppppppbVar14) {
          uVar18 = (ulong)(((ulong)pppppppbVar14 & (ulong)((long)pppppppbVar14 - 1U)) != 0);
        }
        pppppppbVar14 = (byte *******)((long)pppppppbVar14 * 2 | uVar18);
        fVar30 = (float)ceilf((float)(uRam000000000f7052a8 + 1) / (float)uRam000000000f7052b0);
        pppppppbVar23 =
             (byte *******)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
        if (pppppppbVar23 < pppppppbVar14) {
          pppppppbVar23 = pppppppbVar14;
        }
        pppppppbVar14 = (byte *******)0x2;
        if ((pppppppbVar23 == (byte *******)0x1) ||
           (pppppppbVar14 = pppppppbVar23,
           ((ulong)pppppppbVar23 & (ulong)((long)pppppppbVar23 - 1U)) == 0)) {
          bVar29 = pppppppbVar14 < pppppppbRam000000000f705298;
          unaff_R12 = pppppppbVar14;
          pppppppbVar23 = pppppppbRam000000000f705298;
          if (pppppppbVar14 <= pppppppbRam000000000f705298) goto code_r0x0ce3beaf;
code_r0x0ce3bd9b:
          if ((byte *******)0x1fffffffffffffff < pppppppbVar14) goto code_r0x0ce3cf79;
          lVar11 = (long)pppppppbVar14 * 8;
          pppppppbVar23 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
          if (pppppppbVar23 == (byte *******)0x0) {
            func_0x0eec74c0(lVar11,0);
          }
          pppppppbVar21 = pppppppbRam000000000f705290;
          bVar29 = pppppppbRam000000000f705290 != (byte *******)0x0;
          pppppppbRam000000000f705290 = pppppppbVar23;
          if (bVar29) {
            thunk_FUN_0ee326a0(pppppppbVar21,(long)pppppppbRam000000000f705298 << 3);
          }
          unaff_R12 = pppppppbRam000000000f705290;
          pppppppbRam000000000f705298 = pppppppbVar14;
          func_0x0eee2dd0(pppppppbRam000000000f705290,0,lVar11);
          pppppppbVar23 = pppppppbRam000000000f7052a0;
          if (pppppppbRam000000000f7052a0 != (byte *******)0x0) {
            pppppppbVar21 = (byte *******)pppppppbRam000000000f7052a0[1];
            pbVar25 = (byte *)((long)pppppppbVar14 - 1);
            if (((ulong)pppppppbVar14 & (ulong)pbVar25) == 0) {
              unaff_R12[(ulong)pppppppbVar21 & (ulong)pbVar25] = (byte ******)0xf7052a0;
              uVar18 = (ulong)pppppppbVar21 & (ulong)pbVar25;
              while (pppppppbVar14 = pppppppbVar23, pppppppbVar23 = (byte *******)*pppppppbVar14,
                    pppppppbVar23 != (byte *******)0x0) {
                uVar24 = (ulong)pppppppbVar23[1] & (ulong)pbVar25;
                if (uVar24 != uVar18) {
                  if (unaff_R12[uVar24] == (byte ******)0x0) {
                    unaff_R12[uVar24] = (byte ******)pppppppbVar14;
                    uVar18 = uVar24;
                  }
                  else {
                    *pppppppbVar14 = *pppppppbVar23;
                    *pppppppbVar23 = (byte ******)*unaff_R12[uVar24];
                    *unaff_R12[uVar24] = (byte *****)pppppppbVar23;
                    pppppppbVar23 = pppppppbVar14;
                  }
                }
              }
            }
            else {
              if (pppppppbVar14 <= pppppppbVar21) {
                if (((ulong)pppppppbVar21 | (ulong)pppppppbVar14) >> 0x20 == 0) {
                  pppppppbVar21 =
                       (byte *******)
                       (((ulong)pppppppbVar21 & 0xffffffff) % ((ulong)pppppppbVar14 & 0xffffffff));
                }
                else {
                  pppppppbVar21 = (byte *******)((ulong)pppppppbVar21 % (ulong)pppppppbVar14);
                }
              }
              unaff_R12[(long)pppppppbVar21] = (byte ******)0xf7052a0;
              pppppppbVar20 = (byte *******)*pppppppbVar23;
              while (pppppppbVar20 != (byte *******)0x0) {
                pppppppbVar19 = (byte *******)pppppppbVar20[1];
                if (pppppppbVar14 <= pppppppbVar19) {
                  if (((ulong)pppppppbVar19 | (ulong)pppppppbVar14) >> 0x20 == 0) {
                    pppppppbVar19 =
                         (byte *******)
                         (((ulong)pppppppbVar19 & 0xffffffff) % ((ulong)pppppppbVar14 & 0xffffffff))
                    ;
                  }
                  else {
                    pppppppbVar19 = (byte *******)((ulong)pppppppbVar19 % (ulong)pppppppbVar14);
                  }
                }
                if (pppppppbVar19 != pppppppbVar21) {
                  if (unaff_R12[(long)pppppppbVar19] == (byte ******)0x0) {
                    unaff_R12[(long)pppppppbVar19] = (byte ******)pppppppbVar23;
                    pppppppbVar21 = pppppppbVar19;
                  }
                  else {
                    *pppppppbVar23 = *pppppppbVar20;
                    *pppppppbVar20 = (byte ******)*unaff_R12[(long)pppppppbVar19];
                    *unaff_R12[(long)pppppppbVar19] = (byte *****)pppppppbVar20;
                    pppppppbVar20 = pppppppbVar23;
                  }
                }
                pppppppbVar23 = pppppppbVar20;
                pppppppbVar20 = (byte *******)*pppppppbVar23;
              }
            }
          }
        }
        else {
          pppppppbVar14 = (byte *******)func_0x0412c3f0();
          bVar29 = pppppppbVar14 < pppppppbRam000000000f705298;
          unaff_R12 = pppppppbVar14;
          pppppppbVar23 = pppppppbRam000000000f705298;
          if (pppppppbRam000000000f705298 < pppppppbVar14) goto code_r0x0ce3bd9b;
code_r0x0ce3beaf:
          pppppppbVar23 = pppppppbRam000000000f705298;
          if (bVar29) {
            fVar30 = (float)ceilf((float)uRam000000000f7052a8 / (float)uRam000000000f7052b0);
            pppppppbVar14 =
                 (byte *******)
                 ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
            if ((pppppppbVar23 < (byte *******)0x3) ||
               (uVar18 = (long)pppppppbVar23 - ((ulong)pppppppbVar23 >> 1 & 0x5555555555555555),
               uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
               1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              pppppppbVar14 = (byte *******)func_0x0412c3f0(pppppppbVar14);
              pppppppbVar21 = pppppppbRam000000000f705290;
              if (pppppppbVar14 < unaff_R12) {
                pppppppbVar14 = unaff_R12;
              }
            }
            else {
              if ((byte *******)0x1 < pppppppbVar14) {
                lVar11 = 0x3f;
                if ((byte *)((long)pppppppbVar14 + -1) != (byte *)0x0) {
                  for (; (ulong)((long)pppppppbVar14 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
                  }
                }
                pppppppbVar14 = (byte *******)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
              }
              pppppppbVar21 = pppppppbRam000000000f705290;
              if (pppppppbVar14 < unaff_R12) {
                pppppppbVar14 = unaff_R12;
              }
            }
            pppppppbRam000000000f705290 = pppppppbVar21;
            if (pppppppbVar14 < pppppppbVar23) {
              if (pppppppbVar14 != (byte *******)0x0) goto code_r0x0ce3bd9b;
              pppppppbRam000000000f705290 = (byte *******)0x0;
              if (pppppppbVar21 != (byte *******)0x0) {
                thunk_FUN_0ee326a0(pppppppbVar21,(long)pppppppbRam000000000f705298 << 3);
              }
              pppppppbRam000000000f705298 = (byte *******)0x0;
            }
          }
        }
        pppppppbVar14 = pppppppbRam000000000f705298;
        if (((ulong)pppppppbRam000000000f705298 & (long)pppppppbRam000000000f705298 - 1U) != 0) {
          if (pppppppbRam000000000f705298 <= pppppppbVar28) {
            if (((ulong)pppppppbVar28 | (ulong)pppppppbRam000000000f705298) >> 0x20 == 0) {
              pppppppbVar21 =
                   (byte *******)
                   (((ulong)pppppppbVar28 & 0xffffffff) %
                   ((ulong)pppppppbRam000000000f705298 & 0xffffffff));
              ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar21];
              goto joined_r0x0ce3c782;
            }
            pppppppbVar28 =
                 (byte *******)((ulong)pppppppbVar28 % (ulong)pppppppbRam000000000f705298);
          }
          ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar28];
          pppppppbVar21 = pppppppbVar28;
          goto joined_r0x0ce3c0ae;
        }
        pppppppbVar21 =
             (byte *******)((ulong)pppppppbVar28 & (ulong)((long)pppppppbRam000000000f705298 - 1U));
        ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar21];
joined_r0x0ce3c782:
        if (ppppppbVar16 == (byte ******)0x0) goto code_r0x0ce3bcd3;
code_r0x0ce3c0b4:
        *pppppppbVar15 = (byte ******)*ppppppbVar16;
        *ppppppbVar16 = (byte *****)pppppppbVar15;
      }
      else {
        fVar30 = (float)(long)pppppppbVar14;
        if (pppppppbVar14 == (byte *******)0x0) goto code_r0x0ce3bd20;
code_r0x0ce3bcb3:
        if (fVar30 * (float)uRam000000000f7052b0 < (float)(uRam000000000f7052a8 + 1))
        goto code_r0x0ce3bd20;
        ppppppbVar16 = pppppppbRam000000000f705290[(long)pppppppbVar21];
joined_r0x0ce3c0ae:
        if (ppppppbVar16 != (byte ******)0x0) goto code_r0x0ce3c0b4;
code_r0x0ce3bcd3:
        pppppppbVar23 = pppppppbRam000000000f705290;
        *pppppppbVar15 = (byte ******)pppppppbRam000000000f7052a0;
        pppppppbRam000000000f7052a0 = pppppppbVar15;
        pppppppbVar23[(long)pppppppbVar21] = (byte ******)0xf7052a0;
        if (*pppppppbVar15 != (byte ******)0x0) {
          pppppppbVar21 = (byte *******)(*pppppppbVar15)[1];
          if (((ulong)pppppppbVar14 & (long)pppppppbVar14 - 1U) == 0) {
            pppppppbVar23[(ulong)pppppppbVar21 & (ulong)((long)pppppppbVar14 - 1U)] =
                 (byte ******)pppppppbVar15;
          }
          else {
            if (pppppppbVar14 <= pppppppbVar21) {
              if (((ulong)pppppppbVar21 | (ulong)pppppppbVar14) >> 0x20 == 0) {
                pppppppbVar23
                [((ulong)pppppppbVar21 & 0xffffffff) % ((ulong)pppppppbVar14 & 0xffffffff)] =
                     (byte ******)pppppppbVar15;
                goto code_r0x0ce3c0be;
              }
              pppppppbVar21 = (byte *******)((ulong)pppppppbVar21 % (ulong)pppppppbVar14);
            }
            pppppppbVar23[(long)pppppppbVar21] = (byte ******)pppppppbVar15;
          }
        }
      }
code_r0x0ce3c0be:
      uRam000000000f7052a8 = uRam000000000f7052a8 + 1;
code_r0x0ce3c0c5:
      pppppppbVar14 = pppppppbStack_130;
      pppppppbVar23 = pppppppbRam000000000f7052c0;
      if (pppppppbRam000000000f7052c0 != (byte *******)0x0) {
        uVar18 = (long)pppppppbRam000000000f7052c0 -
                 ((ulong)pppppppbRam000000000f7052c0 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
        uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar18 >> 0x38 < 2) {
          pppppppbVar15 =
               (byte *******)
               (ulong)((uint)pppppppbStack_130 & (int)pppppppbRam000000000f7052c0 - 1U);
        }
        else {
          pppppppbVar15 = pppppppbStack_130;
          if (pppppppbRam000000000f7052c0 <= pppppppbStack_130) {
            pppppppbVar15 = (byte *******)(ulong)(byte)(bVar2 % (byte)pppppppbRam000000000f7052c0);
          }
        }
        if ((pppppppbRam000000000f7052b8[(long)pppppppbVar15] != (byte ******)0x0) &&
           (pppppbVar17 = *pppppppbRam000000000f7052b8[(long)pppppppbVar15],
           pppppbVar17 != (byte *****)0x0)) {
          if ((byte)(uVar18 >> 0x38) < 2) {
            do {
              if ((byte *******)pppppbVar17[1] == pppppppbStack_130) {
                if (*(byte *)(pppppbVar17 + 2) == bVar2) goto code_r0x0ce3c6a1;
              }
              else if ((byte *******)
                       ((ulong)pppppbVar17[1] & (ulong)((long)pppppppbRam000000000f7052c0 - 1U)) !=
                       pppppppbVar15) break;
              pppppbVar17 = (byte *****)*pppppbVar17;
            } while (pppppbVar17 != (byte *****)0x0);
          }
          else {
            do {
              pppppppbVar21 = (byte *******)pppppbVar17[1];
              if (pppppppbVar21 == pppppppbStack_130) {
                if (*(byte *)(pppppbVar17 + 2) == bVar2) goto code_r0x0ce3c6a1;
              }
              else {
                if (pppppppbRam000000000f7052c0 <= pppppppbVar21) {
                  if (((ulong)pppppppbVar21 | (ulong)pppppppbRam000000000f7052c0) >> 0x20 == 0) {
                    if ((byte *******)
                        (((ulong)pppppppbVar21 & 0xffffffff) %
                        ((ulong)pppppppbRam000000000f7052c0 & 0xffffffff)) == pppppppbVar15)
                    goto code_r0x0ce3c19e;
                    break;
                  }
                  pppppppbVar21 =
                       (byte *******)((ulong)pppppppbVar21 % (ulong)pppppppbRam000000000f7052c0);
                }
                if (pppppppbVar21 != pppppppbVar15) break;
              }
code_r0x0ce3c19e:
              pppppbVar17 = (byte *****)*pppppbVar17;
            } while (pppppbVar17 != (byte *****)0x0);
          }
        }
      }
      pppppppbVar21 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (pppppppbVar21 == (byte *******)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      uStack_188 = 0xf7052b8;
      uStack_180 = 0;
      *pppppppbVar21 = (byte ******)0x0;
      pppppppbVar21[1] = (byte ******)pppppppbVar14;
      *(byte *)(pppppppbVar21 + 2) = bVar2;
      pppppppbStack_190 = pppppppbVar21;
      if (((ulong)auStack_1a8 & 1) == 0) {
        pppppppbVar21[5] = (byte ******)pppppppbStack_198;
        pppppppbVar21[3] = (byte ******)auStack_1a8;
        pppppppbVar21[4] = (byte ******)pppppppbStack_1a0;
      }
      else {
        FUN_0412e5e0(pppppppbVar21 + 3,pppppppbStack_198,pppppppbStack_1a0);
      }
      uStack_180 = CONCAT71(uStack_180._1_7_,1);
      if ((long)pppppppbVar23 < 0) {
        fVar30 = (float)pppppppbVar23;
        if (pppppppbVar23 != (byte *******)0x0) goto code_r0x0ce3c326;
code_r0x0ce3c340:
        uVar18 = 1;
        if ((byte *******)0x2 < pppppppbVar23) {
          uVar18 = (ulong)(((ulong)pppppppbVar23 & (ulong)((long)pppppppbVar23 - 1U)) != 0);
        }
        pppppppbVar14 = (byte *******)((long)pppppppbVar23 * 2 | uVar18);
        fVar30 = (float)ceilf((float)(uRam000000000f7052d0 + 1) / (float)uRam000000000f7052d8);
        pppppppbVar23 =
             (byte *******)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
        if (pppppppbVar23 < pppppppbVar14) {
          pppppppbVar23 = pppppppbVar14;
        }
        pppppppbVar14 = (byte *******)0x2;
        if ((pppppppbVar23 == (byte *******)0x1) ||
           (pppppppbVar14 = pppppppbVar23,
           ((ulong)pppppppbVar23 & (ulong)((long)pppppppbVar23 - 1U)) == 0)) {
          bVar29 = pppppppbVar14 < pppppppbRam000000000f7052c0;
          unaff_R12 = pppppppbVar14;
          pppppppbVar23 = pppppppbRam000000000f7052c0;
          if (pppppppbVar14 <= pppppppbRam000000000f7052c0) goto code_r0x0ce3c4cf;
code_r0x0ce3c3bb:
          if ((byte *******)0x1fffffffffffffff < pppppppbVar14) goto code_r0x0ce3cf88;
          lVar11 = (long)pppppppbVar14 * 8;
          pppppppbVar23 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
          if (pppppppbVar23 == (byte *******)0x0) {
            func_0x0eec74c0(lVar11,0);
          }
          pppppppbVar28 = pppppppbRam000000000f7052b8;
          bVar29 = pppppppbRam000000000f7052b8 != (byte *******)0x0;
          pppppppbRam000000000f7052b8 = pppppppbVar23;
          if (bVar29) {
            thunk_FUN_0ee326a0(pppppppbVar28,(long)pppppppbRam000000000f7052c0 << 3);
          }
          unaff_R12 = pppppppbRam000000000f7052b8;
          pppppppbRam000000000f7052c0 = pppppppbVar14;
          func_0x0eee2dd0(pppppppbRam000000000f7052b8,0,lVar11);
          pppppppbVar23 = pppppppbRam000000000f7052c8;
          if (pppppppbRam000000000f7052c8 != (byte *******)0x0) {
            pppppppbVar28 = (byte *******)pppppppbRam000000000f7052c8[1];
            pbVar25 = (byte *)((long)pppppppbVar14 - 1);
            if (((ulong)pppppppbVar14 & (ulong)pbVar25) == 0) {
              unaff_R12[(ulong)pppppppbVar28 & (ulong)pbVar25] = (byte ******)0xf7052c8;
              uVar18 = (ulong)pppppppbVar28 & (ulong)pbVar25;
              while (pppppppbVar14 = pppppppbVar23, pppppppbVar23 = (byte *******)*pppppppbVar14,
                    pppppppbVar23 != (byte *******)0x0) {
                uVar24 = (ulong)pppppppbVar23[1] & (ulong)pbVar25;
                if (uVar24 != uVar18) {
                  if (unaff_R12[uVar24] == (byte ******)0x0) {
                    unaff_R12[uVar24] = (byte ******)pppppppbVar14;
                    uVar18 = uVar24;
                  }
                  else {
                    *pppppppbVar14 = *pppppppbVar23;
                    *pppppppbVar23 = (byte ******)*unaff_R12[uVar24];
                    *unaff_R12[uVar24] = (byte *****)pppppppbVar23;
                    pppppppbVar23 = pppppppbVar14;
                  }
                }
              }
            }
            else {
              if (pppppppbVar14 <= pppppppbVar28) {
                if (((ulong)pppppppbVar28 | (ulong)pppppppbVar14) >> 0x20 == 0) {
                  pppppppbVar28 =
                       (byte *******)
                       (((ulong)pppppppbVar28 & 0xffffffff) % ((ulong)pppppppbVar14 & 0xffffffff));
                }
                else {
                  pppppppbVar28 = (byte *******)((ulong)pppppppbVar28 % (ulong)pppppppbVar14);
                }
              }
              unaff_R12[(long)pppppppbVar28] = (byte ******)0xf7052c8;
              pppppppbVar15 = (byte *******)*pppppppbVar23;
              while (pppppppbVar15 != (byte *******)0x0) {
                pppppppbVar20 = (byte *******)pppppppbVar15[1];
                if (pppppppbVar14 <= pppppppbVar20) {
                  if (((ulong)pppppppbVar20 | (ulong)pppppppbVar14) >> 0x20 == 0) {
                    pppppppbVar20 =
                         (byte *******)
                         (((ulong)pppppppbVar20 & 0xffffffff) % ((ulong)pppppppbVar14 & 0xffffffff))
                    ;
                  }
                  else {
                    pppppppbVar20 = (byte *******)((ulong)pppppppbVar20 % (ulong)pppppppbVar14);
                  }
                }
                if (pppppppbVar20 != pppppppbVar28) {
                  if (unaff_R12[(long)pppppppbVar20] == (byte ******)0x0) {
                    unaff_R12[(long)pppppppbVar20] = (byte ******)pppppppbVar23;
                    pppppppbVar28 = pppppppbVar20;
                  }
                  else {
                    *pppppppbVar23 = *pppppppbVar15;
                    *pppppppbVar15 = (byte ******)*unaff_R12[(long)pppppppbVar20];
                    *unaff_R12[(long)pppppppbVar20] = (byte *****)pppppppbVar15;
                    pppppppbVar15 = pppppppbVar23;
                  }
                }
                pppppppbVar23 = pppppppbVar15;
                pppppppbVar15 = (byte *******)*pppppppbVar23;
              }
            }
          }
        }
        else {
          pppppppbVar14 = (byte *******)func_0x0412c3f0();
          bVar29 = pppppppbVar14 < pppppppbRam000000000f7052c0;
          unaff_R12 = pppppppbVar14;
          pppppppbVar23 = pppppppbRam000000000f7052c0;
          if (pppppppbRam000000000f7052c0 < pppppppbVar14) goto code_r0x0ce3c3bb;
code_r0x0ce3c4cf:
          pppppppbVar23 = pppppppbRam000000000f7052c0;
          if (bVar29) {
            fVar30 = (float)ceilf((float)uRam000000000f7052d0 / (float)uRam000000000f7052d8);
            pppppppbVar14 =
                 (byte *******)
                 ((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
            if ((pppppppbVar23 < (byte *******)0x3) ||
               (uVar18 = (long)pppppppbVar23 - ((ulong)pppppppbVar23 >> 1 & 0x5555555555555555),
               uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
               1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              pppppppbVar14 = (byte *******)func_0x0412c3f0(pppppppbVar14);
              pppppppbVar28 = pppppppbRam000000000f7052b8;
              if (pppppppbVar14 < unaff_R12) {
                pppppppbVar14 = unaff_R12;
              }
            }
            else {
              if ((byte *******)0x1 < pppppppbVar14) {
                lVar11 = 0x3f;
                if ((byte *)((long)pppppppbVar14 + -1) != (byte *)0x0) {
                  for (; (ulong)((long)pppppppbVar14 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
                  }
                }
                pppppppbVar14 = (byte *******)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
              }
              pppppppbVar28 = pppppppbRam000000000f7052b8;
              if (pppppppbVar14 < unaff_R12) {
                pppppppbVar14 = unaff_R12;
              }
            }
            pppppppbRam000000000f7052b8 = pppppppbVar28;
            if (pppppppbVar14 < pppppppbVar23) {
              if (pppppppbVar14 != (byte *******)0x0) goto code_r0x0ce3c3bb;
              pppppppbRam000000000f7052b8 = (byte *******)0x0;
              if (pppppppbVar28 != (byte *******)0x0) {
                thunk_FUN_0ee326a0(pppppppbVar28,(long)pppppppbRam000000000f7052c0 << 3);
              }
              pppppppbRam000000000f7052c0 = (byte *******)0x0;
            }
          }
        }
        pppppppbVar23 = pppppppbRam000000000f7052c0;
        if (((ulong)pppppppbRam000000000f7052c0 & (ulong)((long)pppppppbRam000000000f7052c0 - 1U))
            == 0) {
          pppppppbVar15 =
               (byte *******)
               (ulong)((uint)pppppppbStack_130 & (int)pppppppbRam000000000f7052c0 - 1U);
        }
        else {
          pppppppbVar15 = pppppppbStack_130;
          if ((pppppppbRam000000000f7052c0 <= pppppppbStack_130) &&
             (pppppppbRam000000000f7052c0 <= pppppppbStack_130)) {
            pppppppbVar15 =
                 (byte *******)
                 (((ulong)pppppppbStack_130 & 0xffffffff) %
                 ((ulong)pppppppbRam000000000f7052c0 & 0xffffffff));
          }
        }
      }
      else {
        fVar30 = (float)(long)pppppppbVar23;
        if (pppppppbVar23 == (byte *******)0x0) goto code_r0x0ce3c340;
code_r0x0ce3c326:
        if (fVar30 * (float)uRam000000000f7052d8 < (float)(uRam000000000f7052d0 + 1))
        goto code_r0x0ce3c340;
      }
      pppppppbVar14 = pppppppbRam000000000f7052b8;
      ppppppbVar16 = pppppppbRam000000000f7052b8[(long)pppppppbVar15];
      if (ppppppbVar16 == (byte ******)0x0) {
        *pppppppbVar21 = (byte ******)pppppppbRam000000000f7052c8;
        pppppppbRam000000000f7052c8 = pppppppbVar21;
        pppppppbVar14[(long)pppppppbVar15] = (byte ******)0xf7052c8;
        if (*pppppppbVar21 != (byte ******)0x0) {
          pppppppbVar28 = (byte *******)(*pppppppbVar21)[1];
          if (((ulong)pppppppbVar23 & (long)pppppppbVar23 - 1U) == 0) {
            pppppppbVar14[(ulong)pppppppbVar28 & (ulong)((long)pppppppbVar23 - 1U)] =
                 (byte ******)pppppppbVar21;
          }
          else {
            if (pppppppbVar23 <= pppppppbVar28) {
              if (((ulong)pppppppbVar28 | (ulong)pppppppbVar23) >> 0x20 == 0) {
                pppppppbVar14
                [((ulong)pppppppbVar28 & 0xffffffff) % ((ulong)pppppppbVar23 & 0xffffffff)] =
                     (byte ******)pppppppbVar21;
                goto code_r0x0ce3c69a;
              }
              pppppppbVar28 = (byte *******)((ulong)pppppppbVar28 % (ulong)pppppppbVar23);
            }
            pppppppbVar14[(long)pppppppbVar28] = (byte ******)pppppppbVar21;
          }
        }
      }
      else {
        *pppppppbVar21 = (byte ******)*ppppppbVar16;
        *ppppppbVar16 = (byte *****)pppppppbVar21;
      }
code_r0x0ce3c69a:
      uRam000000000f7052d0 = uRam000000000f7052d0 + 1;
code_r0x0ce3c6a1:
      if (pcStack_160 != (code *)0x0) {
        (*pcStack_160)(&pppppppbStack_178);
      }
      pppppppbVar23 = pppppppbStack_a8;
      pppppppbVar14 = pppppppbStack_b0;
      pppppppbVar15 = pppppppbStack_b8;
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(&pppppppbStack_98);
      }
      if (((ulong)auStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppbStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
      }
    }
    pppppppbVar15 = pppppppbVar15 + 0xd;
    pppppppbVar21 = pppppppbStack_b0;
    pppppppbVar28 = pppppppbStack_a8;
    if (pppppppbVar15 == pppppppbStack_a0) goto code_r0x0ce3c91a;
  } while( true );
code_r0x0ce3cf65:
  func_0x04882e30();
code_r0x0ce3cf6a:
  func_0x04882e30();
code_r0x0ce3cf6f:
  func_0x04882eb0();
code_r0x0ce3cf74:
  func_0x04882eb0();
code_r0x0ce3cf79:
  func_0x04882eb0();
code_r0x0ce3cf7e:
  func_0x04882eb0();
code_r0x0ce3cf83:
  func_0x04882eb0();
code_r0x0ce3cf88:
  func_0x04882eb0();
code_r0x0ce3cf8d:
  iVar9 = func_0x04108328(&DAT_0f5f1048);
  if (iVar9 != 0) {
    func_0x08d34240(0xf5f1030);
    func_0x0410844d(&DAT_0f5f1048);
  }
  goto code_r0x0ce37e0b;
}


