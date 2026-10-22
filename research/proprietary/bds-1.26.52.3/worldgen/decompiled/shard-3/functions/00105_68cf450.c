/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x68cf450
 * Label: string:DisableTerrainRendering
 * Body:  [[068cb53e, 068cc312] [068cc320, 068cc757] [068cc760, 068ccc5c] [068ccc60, 068cd27d] [068cd280, 068cd675] [068cd680, 068cda80] [068cda90, 068cdec0] [068cded0, 068ce24d] [068ce250, 068ce660] [068ce670, 068ceabc] [068ceac0, 068cef75] [068cef80, 068cf19a] [068cf1a0, 068cf1fc] [068cf214, 068cf323] [068cf450, 068cf5b7]]
 * Ghidra: FUN_068cf450
 */


/* WARNING: Removing unreachable block (ram,0x068cf1a9) */
/* WARNING: Removing unreachable block (ram,0x068cf1b0) */
/* WARNING: Removing unreachable block (ram,0x068cf1a0) */
/* WARNING: Removing unreachable block (ram,0x068cf1c3) */
/* WARNING: Removing unreachable block (ram,0x068cedb6) */
/* WARNING: Removing unreachable block (ram,0x068cedcc) */
/* WARNING: Removing unreachable block (ram,0x068cebcf) */
/* WARNING: Removing unreachable block (ram,0x068ce4ba) */
/* WARNING: Removing unreachable block (ram,0x068ce4cc) */
/* WARNING: Removing unreachable block (ram,0x068ce0b7) */
/* WARNING: Removing unreachable block (ram,0x068ce0c9) */
/* WARNING: Removing unreachable block (ram,0x068cd4df) */
/* WARNING: Removing unreachable block (ram,0x068cd4f1) */
/* WARNING: Removing unreachable block (ram,0x068ccf88) */
/* WARNING: Removing unreachable block (ram,0x068ccd8c) */
/* WARNING: Removing unreachable block (ram,0x068cc40a) */
/* WARNING: Removing unreachable block (ram,0x068cc864) */
/* WARNING: Removing unreachable block (ram,0x068ccd79) */
/* WARNING: Removing unreachable block (ram,0x068cd0df) */
/* WARNING: Removing unreachable block (ram,0x068cd0f1) */
/* WARNING: Removing unreachable block (ram,0x068cd8ea) */
/* WARNING: Removing unreachable block (ram,0x068cd8fc) */
/* WARNING: Removing unreachable block (ram,0x068cebe2) */
/* WARNING: Removing unreachable block (ram,0x068ced2a) */
/* WARNING: Removing unreachable block (ram,0x068cedad) */
/* WARNING: Removing unreachable block (ram,0x068cef14) */
/* WARNING: Removing unreachable block (ram,0x068cf189) */
/* WARNING: Removing unreachable block (ram,0x068cf199) */
/* WARNING: Removing unreachable block (ram,0x068cf1cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_068cf450(void)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  code *pcVar15;
  long *plVar16;
  long in_RAX;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint in_stack_00000020;
  undefined1 uStack0000000000000024;
  undefined2 uStack0000000000000025;
  undefined1 uStack0000000000000027;
  undefined1 in_stack_00000028;
  undefined1 uStack0000000000000029;
  undefined2 uStack000000000000002a;
  undefined4 uStack000000000000002c;
  ulong *in_stack_00000030;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined1 *in_stack_00000050;
  undefined1 in_stack_00000058;
  undefined7 uStack0000000000000059;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong *in_stack_00000080;
  long *in_stack_00000088;
  long *in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  ulong in_stack_000000a8;
  uint in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined1 in_stack_000000b8;
  undefined1 uStack00000000000000b9;
  undefined2 uStack00000000000000ba;
  undefined4 uStack00000000000000bc;
  long in_stack_000000c0;
  byte in_stack_000000c8;
  undefined4 uStack00000000000000c9;
  undefined2 uStack00000000000000cd;
  undefined1 uStack00000000000000cf;
  undefined1 uStack00000000000000d0;
  undefined4 uStack00000000000000d1;
  undefined4 uStack00000000000000d5;
  undefined1 uStack00000000000000d9;
  undefined6 uStack00000000000000da;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  ulong in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  code *in_stack_00000108;
  undefined *in_stack_00000110;
  long in_stack_00000118;
  undefined8 *in_stack_00000120;
  code *in_stack_00000128;
  code *in_stack_00000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  code *in_stack_00000148;
  long *in_stack_00000150;
  long in_stack_00000158;
  code *in_stack_00000170;
  code *in_stack_00000188;
  code *in_stack_000001b0;
  code *in_stack_000001d0;
  code *in_stack_000001f8;
  undefined4 in_stack_00000290;
  undefined1 in_stack_00000294;
  undefined2 in_stack_00000295;
  undefined1 in_stack_00000297;
  undefined4 in_stack_00000298;
  undefined4 in_stack_0000029c;
  ulong in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  code *in_stack_000002e0;
  code *in_stack_00000320;
  code *in_stack_00000360;
  code *in_stack_000003a8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  long in_stack_000003f8;
  long in_stack_00000400;
  long in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000448;
  undefined8 *in_stack_00000450;
  undefined8 *in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  ulong *in_stack_00000478;
  ulong *in_stack_00000480;
  undefined8 in_stack_00000488;
  ulong in_stack_00000490;
  ulong in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 *in_stack_000004e8;
  
  *(int *)(in_RAX + -0x73) = *(int *)(in_RAX + -0x73) + -1;
  func_0x065dbcb0();
  func_0x0410844d(0xf57d980);
  func_0x065ac270(&stack0x00000290,_DAT_0f57d96c,&UNK_069aa580);
  lVar12 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar12 == 0) {
    func_0x048b0de0(&stack0x000000e0,&stack0x00000290);
    _DAT_0f54fd90 = uStack00000000000000e0;
    uRam000000000f54fd94 = uStack00000000000000e4;
    uVar9 = uStack00000000000000e8;
    uVar7 = uStack00000000000000ec;
    _uStack00000000000000e0 = 0;
    _uStack00000000000000e8 = (long *)0x0;
    plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar7;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar1 = plVar16 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
      }
    }
    plVar16 = _uStack00000000000000e8;
    if (_uStack00000000000000e8 != (long *)0x0) {
      LOCK();
      plVar1 = _uStack00000000000000e8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*_uStack00000000000000e8 + 0x10))(_uStack00000000000000e8);
        func_0x0412c2d0(plVar16);
      }
    }
    lVar12 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f57b630 == '\0') && (iVar11 = func_0x04108328(&DAT_0f57b630), iVar11 != 0)) {
    func_0x065f54c0(0xf57b618,lVar12);
    func_0x0410844d(&DAT_0f57b630);
  }
  if ((DAT_0f57b630 == '\0') && (iVar11 = func_0x04108328(&DAT_0f57b630), iVar11 != 0)) {
    func_0x065f54c0(0xf57b618,lVar12);
    func_0x0410844d(&DAT_0f57b630);
  }
  _uStack00000000000000e0 = 0xf57b618;
  _uStack00000000000000e8 = (long *)CONCAT44(uStack00000000000000ec,_DAT_0f57b61c);
  in_stack_000000f0 = 0;
  _uStack00000000000000f8 = CONCAT44(uStack00000000000000fc,0x280);
  _uStack0000000000000100 = 0x20;
  in_stack_00000108 = (code *)&UNK_065f5530;
  in_stack_00000110 = &UNK_065f5740;
  in_stack_00000118 = 0;
  in_stack_00000120 = (undefined8 *)&UNK_065f57e0;
  in_stack_00000128 = (code *)0x1;
  in_stack_00000130 = (code *)&UNK_065bd0c0;
  _uStack0000000000000138 = (long *)&UNK_065f5870;
  _uStack0000000000000140 = _uStack0000000000000140 & 0xffffffff00000000;
  in_stack_00000148 = (code *)0x0;
  in_stack_00000150 = (long *)0x0;
  in_stack_00000158 = 0;
  func_0x048aee30(&stack0x00000290,lVar12,&stack0x000000e0,0xc652bde9);
  lVar12 = in_stack_00000158;
  in_stack_00000158 = 0;
  if (lVar12 != 0) {
    func_0x048ae940(lVar12);
    func_0x0412a280(lVar12,0x78);
  }
  plVar16 = in_stack_00000150;
  if (in_stack_00000150 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000150 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*in_stack_00000150 + 0x10))(in_stack_00000150);
      func_0x0412c2d0(plVar16);
    }
  }
  if ((DAT_0f596748 == '\0') && (iVar11 = func_0x04108328(&DAT_0f596748), iVar11 != 0)) {
    func_0x069aa740(0xf596730);
    func_0x0410844d(&DAT_0f596748);
  }
  func_0x065ac270(&stack0x00000290,_DAT_0f596734,&UNK_069aa670);
  lVar12 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar12 == 0) {
    func_0x048b0de0(&stack0x000000e0,&stack0x00000290);
    _DAT_0f54fd90 = uStack00000000000000e0;
    uRam000000000f54fd94 = uStack00000000000000e4;
    uVar9 = uStack00000000000000e8;
    uVar7 = uStack00000000000000ec;
    _uStack00000000000000e0 = 0;
    _uStack00000000000000e8 = (long *)0x0;
    plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar7;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar1 = plVar16 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
      }
    }
    plVar16 = _uStack00000000000000e8;
    if (_uStack00000000000000e8 != (long *)0x0) {
      LOCK();
      plVar1 = _uStack00000000000000e8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*_uStack00000000000000e8 + 0x10))(_uStack00000000000000e8);
        func_0x0412c2d0(plVar16);
      }
    }
    lVar12 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f57b578 == '\0') && (iVar11 = func_0x04108328(&DAT_0f57b578), iVar11 != 0)) {
    func_0x065f4e60(0xf57b560,lVar12);
    func_0x0410844d(&DAT_0f57b578);
  }
  if ((DAT_0f57b578 == '\0') && (iVar11 = func_0x04108328(&DAT_0f57b578), iVar11 != 0)) {
    func_0x065f4e60(0xf57b560,lVar12);
    func_0x0410844d(&DAT_0f57b578);
  }
  _uStack00000000000000e0 = 0xf57b560;
  _uStack00000000000000e8 = (long *)CONCAT44(uStack00000000000000ec,_DAT_0f57b564);
  in_stack_000000f0 = 0;
  _uStack00000000000000f8 = CONCAT44(uStack00000000000000fc,0x280);
  _uStack0000000000000100 = 0x10;
  in_stack_00000108 = (code *)&UNK_065f4ed0;
  in_stack_00000110 = &UNK_065f50e0;
  in_stack_00000118 = 0;
  in_stack_00000120 = (undefined8 *)&UNK_065f5130;
  in_stack_00000128 = (code *)0x1;
  in_stack_00000130 = (code *)&UNK_065bc1f0;
  _uStack0000000000000138 = (long *)&UNK_065f51e0;
  _uStack0000000000000140 = _uStack0000000000000140 & 0xffffffff00000000;
  in_stack_00000148 = (code *)0x0;
  in_stack_00000150 = (long *)0x0;
  in_stack_00000158 = 0;
  func_0x048aee30(&stack0x00000290,lVar12,&stack0x000000e0,0x34250ea9);
  lVar12 = in_stack_00000158;
  in_stack_00000158 = 0;
  if (lVar12 != 0) {
    func_0x048ae940(lVar12);
    func_0x0412a280(lVar12,0x78);
  }
  plVar16 = in_stack_00000150;
  if (in_stack_00000150 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000150 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*in_stack_00000150 + 0x10))(in_stack_00000150);
      func_0x0412c2d0(plVar16);
    }
  }
  if ((DAT_0f596800 == '\0') && (iVar11 = func_0x04108328(&DAT_0f596800), iVar11 != 0)) {
    func_0x069aae20(0xf5967e8);
    func_0x0410844d(&DAT_0f596800);
  }
  func_0x065ac270(&stack0x00000290,_DAT_0f5967ec,&UNK_069aadd0);
  auVar23 = func_0x069ab330();
  in_stack_000000c8 = 0xc;
  uStack00000000000000c9 = 0x6769726f;
  uStack00000000000000cd = 0x6e69;
  uStack00000000000000cf = 0;
  func_0x0675a660(&stack0x00000290,&stack0x000000c8);
  func_0x06523ef0(&stack0x000000e0,&stack0x000002b8);
  in_stack_000000b0 = 0;
  uStack00000000000000b4 = 0;
  in_stack_000000b8 = 0;
  uStack00000000000000b9 = 0;
  uStack00000000000000ba = 0;
  uStack00000000000000bc = 0;
  in_stack_000000c0 = 0;
  in_stack_00000020 = (uint)&stack0x000000b0;
  uStack0000000000000024 = (undefined1)((ulong)&stack0x000000b0 >> 0x20);
  uStack0000000000000025 = (undefined2)((ulong)&stack0x000000b0 >> 0x28);
  uStack0000000000000027 = (undefined1)((ulong)&stack0x000000b0 >> 0x38);
  in_stack_00000028 = 0;
  lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (lVar12 == 0) {
    func_0x0eec74c0(0x118,0);
  }
  in_stack_000000b0 = (uint)lVar12;
  uStack00000000000000b4 = (undefined4)((ulong)lVar12 >> 0x20);
  in_stack_000000b8 = (undefined1)lVar12;
  uStack00000000000000b9 = (undefined1)((ulong)lVar12 >> 8);
  uStack00000000000000ba = (undefined2)((ulong)lVar12 >> 0x10);
  in_stack_000000c0 = lVar12 + 0x118;
  _uStack0000000000000048 = &stack0x00000500;
  in_stack_00000050 = &stack0x000004f0;
  in_stack_00000058 = 0;
  _uStack0000000000000040 = &stack0x000000b0;
  uStack00000000000000bc = uStack00000000000000b4;
  func_0x06523ef0(lVar12,&stack0x000000e0);
  lVar12 = lVar12 + 0x118;
  in_stack_000000b8 = (undefined1)lVar12;
  uStack00000000000000b9 = (undefined1)((ulong)lVar12 >> 8);
  uStack00000000000000ba = (undefined2)((ulong)lVar12 >> 0x10);
  uStack00000000000000bc = (undefined4)((ulong)lVar12 >> 0x20);
  if (in_stack_000001d0 != (code *)0x0) {
    (*in_stack_000001d0)(&stack0x000001b8);
  }
  if (in_stack_00000188 != (code *)0x0) {
    (*in_stack_00000188)(&stack0x00000170);
  }
  if (in_stack_00000148 != (code *)0x0) {
    (*in_stack_00000148)(&stack0x00000130);
  }
  if (in_stack_00000108 != (code *)0x0) {
    (*in_stack_00000108)(&stack0x000000f0);
  }
  in_stack_00000050 = (undefined1 *)0x0;
  uStack0000000000000064 = 0;
  in_stack_00000068 = 0;
  _uStack00000000000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000090 = (long *)0x0;
  _uStack0000000000000098 = 0;
  in_stack_00000080 = (ulong *)0x0;
  in_stack_00000088 = (long *)0x0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000058 = 0x16;
  uStack0000000000000059 = 0x757274736e6f63;
  in_stack_00000060 = 0x726f7463;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f060cf8;
  uVar9 = func_0x0d858500(&stack0x000000b0);
  plVar16 = puVar13 + 3;
  *(undefined1 *)(puVar13 + 4) = 1;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar9;
  *(undefined4 *)(puVar13 + 5) = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[3] = &UNK_0f060d48;
  *(uint *)(puVar13 + 10) = in_stack_000000b0;
  *(undefined4 *)((long)puVar13 + 0x54) = uStack00000000000000b4;
  *(uint *)(puVar13 + 0xb) =
       CONCAT22(uStack00000000000000ba,CONCAT11(uStack00000000000000b9,in_stack_000000b8));
  *(undefined4 *)((long)puVar13 + 0x5c) = uStack00000000000000bc;
  puVar13[0xc] = in_stack_000000c0;
  in_stack_000000b0 = 0;
  uStack00000000000000b4 = 0;
  in_stack_000000b8 = 0;
  uStack00000000000000b9 = 0;
  uStack00000000000000ba = 0;
  uStack00000000000000bc = 0;
  in_stack_000000c0 = 0;
  uVar9 = func_0x0d858620(plVar16);
  plVar1 = in_stack_00000090;
  *(undefined4 *)(puVar13 + 5) = uVar9;
  in_stack_00000088 = plVar16;
  if (in_stack_00000090 != (long *)0x0) {
    LOCK();
    plVar16 = in_stack_00000090 + 1;
    lVar12 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      lVar12 = *in_stack_00000090;
      in_stack_00000090 = puVar13;
      (**(code **)(lVar12 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
      puVar13 = in_stack_00000090;
    }
  }
  in_stack_00000090 = puVar13;
  func_0x0669bff0();
  _uStack00000000000000e0 =
       CONCAT17(in_stack_00000297,
                CONCAT25(in_stack_00000295,CONCAT14(in_stack_00000294,in_stack_00000290)));
  _uStack00000000000000e8 = (long *)CONCAT44(in_stack_0000029c,in_stack_00000298);
  in_stack_000000f0 = in_stack_000002a0;
  _uStack00000000000000f8 = in_stack_000002a8;
  _uStack0000000000000100 = in_stack_000002b0;
  func_0x065281f0(&stack0x00000108,&stack0x000002b8);
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  uStack0000000000000025 = 0;
  uStack0000000000000027 = 0;
  in_stack_00000028 = 0;
  uStack0000000000000029 = 0;
  uStack000000000000002a = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = (ulong *)0x0;
  puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar14 == (ulong *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  in_stack_00000020 = (uint)puVar14;
  uStack0000000000000024 = (undefined1)((ulong)puVar14 >> 0x20);
  uStack0000000000000025 = (undefined2)((ulong)puVar14 >> 0x28);
  uStack0000000000000027 = (undefined1)((ulong)puVar14 >> 0x38);
  in_stack_00000028 = SUB81(puVar14,0);
  uStack0000000000000029 = (undefined1)((ulong)puVar14 >> 8);
  uStack000000000000002a = (undefined2)((ulong)puVar14 >> 0x10);
  uStack000000000000002c = (undefined4)((ulong)puVar14 >> 0x20);
  puVar21 = puVar14 + 0x28;
  in_stack_00000030 = puVar21;
  if ((_uStack00000000000000e0 & 1) == 0) {
    puVar14[2] = in_stack_000000f0;
    *puVar14 = _uStack00000000000000e0;
    puVar14[1] = (ulong)_uStack00000000000000e8;
  }
  else {
    func_0x0412e5e0(puVar14,in_stack_000000f0,_uStack00000000000000e8);
  }
  *(undefined4 *)(puVar14 + 3) = uStack00000000000000f8;
  *(undefined4 *)((long)puVar14 + 0x1c) = uStack00000000000000fc;
  *(undefined4 *)(puVar14 + 4) = uStack0000000000000100;
  *(undefined4 *)((long)puVar14 + 0x24) = uStack0000000000000104;
  func_0x06523ef0(puVar14 + 5,&stack0x00000108);
  in_stack_00000028 = SUB81(puVar21,0);
  uStack0000000000000029 = (undefined1)((ulong)puVar21 >> 8);
  uStack000000000000002a = (undefined2)((ulong)puVar21 >> 0x10);
  uStack000000000000002c = (undefined4)((ulong)puVar21 >> 0x20);
  if (in_stack_000001f8 != (code *)0x0) {
    (*in_stack_000001f8)(&stack0x000001e0);
  }
  if (in_stack_000001b0 != (code *)0x0) {
    (*in_stack_000001b0)(&stack0x00000198);
  }
  if (in_stack_00000170 != (code *)0x0) {
    (*in_stack_00000170)(&stack0x00000158);
  }
  if (in_stack_00000130 != (code *)0x0) {
    (*in_stack_00000130)(&stack0x00000118);
  }
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*in_stack_00000088 + 0x20))();
  lVar12 = CONCAT17(uStack0000000000000027,
                    CONCAT25(uStack0000000000000025,
                             CONCAT14(uStack0000000000000024,in_stack_00000020)));
  lVar17 = CONCAT44(uStack000000000000002c,
                    CONCAT22(uStack000000000000002a,
                             CONCAT11(uStack0000000000000029,in_stack_00000028)));
  uVar18 = (lVar17 - lVar12 >> 6) * -0x3333333333333333;
  uVar20 = 0;
  if ((uVar10 != 0) && ((uint)uVar18 != 0)) {
    uVar19 = 0;
    uVar20 = 0;
    do {
      auVar24 = (**(code **)(*in_stack_00000088 + 0x28))(in_stack_00000088,uVar19);
      lVar22 = auVar24._8_8_;
      lVar17 = auVar24._0_8_;
      auVar24 = func_0x06527d70();
      if (auVar24._8_8_ != lVar22) {
LAB_068cbec0:
        auVar24 = func_0x06527e30();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar12 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar12 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar12 = func_0x048aead0(lVar22);
            iVar5 = *(int *)(lVar12 + 8);
          }
          else {
            iVar5 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar5) goto LAB_068cc0b5;
        }
        auVar24 = func_0x06527ef0();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar12 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar12 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar12 = func_0x048aead0(lVar22);
            iVar5 = *(int *)(lVar12 + 8);
          }
          else {
            iVar5 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar5) goto LAB_068cc0b5;
        }
        auVar24 = func_0x06527fb0();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar12 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar12 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar12 = func_0x048aead0(lVar22);
            iVar5 = *(int *)(lVar12 + 8);
          }
          else {
            iVar5 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar5) goto LAB_068cc0b5;
        }
        auVar24 = func_0x06528070();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar12 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar12 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar12 = func_0x048aead0(lVar22);
            iVar5 = *(int *)(lVar12 + 8);
          }
          else {
            iVar5 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar5) goto LAB_068cc0b5;
        }
        auVar24 = func_0x06528130();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar12 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar12 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar12 = func_0x048aead0(lVar22);
            iVar5 = *(int *)(lVar12 + 8);
          }
          else {
            iVar5 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar5) goto LAB_068cc0b5;
        }
        lVar12 = CONCAT17(uStack0000000000000027,
                          CONCAT25(uStack0000000000000025,
                                   CONCAT14(uStack0000000000000024,in_stack_00000020)));
        if (*(long *)(lVar12 + 0x20 + uVar20 * 0x140) != lVar22) goto LAB_068cc297;
        lVar12 = *(long *)(uVar20 * 0x140 + lVar12 + 0x18);
        if (lVar12 == 0) {
          lVar12 = func_0x048aead0();
          iVar11 = *(int *)(lVar12 + 8);
          if (lVar17 != 0) goto LAB_068cc084;
LAB_068cc09d:
          lVar12 = func_0x048aead0(lVar22);
          if (iVar11 == *(int *)(lVar12 + 8)) {
LAB_068cc0b3:
            uVar20 = (ulong)((int)uVar20 + 1);
            goto LAB_068cc0b5;
          }
        }
        else {
          iVar11 = *(int *)(lVar12 + 8);
          if (lVar17 == 0) goto LAB_068cc09d;
LAB_068cc084:
          if (iVar11 == *(int *)(lVar17 + 8)) goto LAB_068cc0b3;
        }
        lVar12 = CONCAT17(uStack0000000000000027,
                          CONCAT25(uStack0000000000000025,
                                   CONCAT14(uStack0000000000000024,in_stack_00000020)));
        goto LAB_068cc28a;
      }
      if (auVar24._0_8_ == 0) {
        lVar12 = func_0x048aead0(auVar24._8_8_);
        iVar11 = *(int *)(lVar12 + 8);
        if (lVar17 != 0) goto LAB_068cbe91;
LAB_068cbeae:
        lVar12 = func_0x048aead0(lVar22);
        if (iVar11 != *(int *)(lVar12 + 8)) goto LAB_068cbec0;
      }
      else {
        iVar11 = *(int *)(auVar24._0_8_ + 8);
        if (lVar17 == 0) goto LAB_068cbeae;
LAB_068cbe91:
        if (iVar11 != *(int *)(lVar17 + 8)) goto LAB_068cbec0;
      }
LAB_068cc0b5:
    } while (((uint)uVar20 < (uint)uVar18) && (uVar19 = uVar19 + 1, uVar19 < uVar10));
    lVar12 = CONCAT17(uStack0000000000000027,
                      CONCAT25(uStack0000000000000025,
                               CONCAT14(uStack0000000000000024,in_stack_00000020)));
    lVar17 = CONCAT44(uStack000000000000002c,
                      CONCAT22(uStack000000000000002a,
                               CONCAT11(uStack0000000000000029,in_stack_00000028)));
    uVar18 = (lVar17 - lVar12 >> 6) * -0x3333333333333333;
  }
  lVar22 = in_stack_00000070;
  if (uVar18 == uVar20) {
    lVar6 = in_stack_00000078;
    if (in_stack_00000070 != 0) {
      while (lVar22 != lVar6) {
        func_0x05fe8450(lVar6 + -0x140);
        lVar6 = lVar6 + -0x140;
      }
      in_stack_00000078 = lVar22;
      func_0x0412a280(in_stack_00000070,(long)in_stack_00000080 - in_stack_00000070);
      lVar12 = CONCAT17(uStack0000000000000027,
                        CONCAT25(uStack0000000000000025,
                                 CONCAT14(uStack0000000000000024,in_stack_00000020)));
      lVar17 = CONCAT44(uStack000000000000002c,
                        CONCAT22(uStack000000000000002a,
                                 CONCAT11(uStack0000000000000029,in_stack_00000028)));
    }
    in_stack_00000080 = in_stack_00000030;
    if (in_stack_00000450 < in_stack_00000458) {
      *in_stack_00000450 = 0;
      in_stack_00000450[1] = 0;
      in_stack_00000450[2] = 0;
      *in_stack_00000450 = _uStack0000000000000040;
      in_stack_00000450[1] = _uStack0000000000000048;
      in_stack_00000450[2] = in_stack_00000050;
      _uStack0000000000000040 = (undefined4 *)0x0;
      _uStack0000000000000048 = (undefined1 *)0x0;
      in_stack_00000050 = (undefined1 *)0x0;
      in_stack_00000450[5] = in_stack_00000068;
      in_stack_00000450[3] = CONCAT71(uStack0000000000000059,in_stack_00000058);
      in_stack_00000450[4] = CONCAT44(uStack0000000000000064,in_stack_00000060);
      in_stack_00000058 = 0;
      uStack0000000000000059 = 0;
      in_stack_00000060 = 0;
      uStack0000000000000064 = 0;
      in_stack_00000068 = 0;
      in_stack_00000450[6] = 0;
      in_stack_00000450[7] = 0;
      in_stack_00000450[8] = 0;
      in_stack_00000450[6] = lVar12;
      in_stack_00000450[7] = lVar17;
      in_stack_00000450[8] = in_stack_00000030;
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      in_stack_00000080 = (ulong *)0x0;
      in_stack_00000450[9] = in_stack_00000088;
      in_stack_00000450[10] = in_stack_00000090;
      in_stack_00000088 = (long *)0x0;
      in_stack_00000090 = (undefined8 *)0x0;
      in_stack_00000450[0xb] = 0;
      in_stack_00000450[0xc] = 0;
      in_stack_00000450[0xd] = 0;
      *(undefined4 *)(in_stack_00000450 + 0xb) = uStack0000000000000098;
      *(undefined4 *)((long)in_stack_00000450 + 0x5c) = uStack000000000000009c;
      *(undefined4 *)(in_stack_00000450 + 0xc) = uStack00000000000000a0;
      *(undefined4 *)((long)in_stack_00000450 + 100) = uStack00000000000000a4;
      in_stack_00000450[0xd] = in_stack_000000a8;
      _uStack0000000000000098 = 0;
      _uStack00000000000000a0 = 0;
      in_stack_000000a8 = 0;
      in_stack_00000450 = in_stack_00000450 + 0xe;
    }
    else {
      in_stack_00000070 = lVar12;
      in_stack_00000078 = lVar17;
      in_stack_00000450 = (undefined8 *)func_0x0652ac80(&stack0x00000448,&stack0x00000040);
    }
    puVar13 = in_stack_00000450 + -0xe;
  }
  else {
LAB_068cc28a:
    if (lVar12 != 0) {
LAB_068cc297:
      lVar22 = CONCAT44(uStack000000000000002c,
                        CONCAT22(uStack000000000000002a,
                                 CONCAT11(uStack0000000000000029,in_stack_00000028)));
      lVar17 = lVar12;
      if (lVar12 != lVar22) {
        do {
          lVar22 = lVar22 + -0x140;
          func_0x05fe8450(lVar22);
        } while (lVar22 != lVar12);
        lVar17 = CONCAT17(uStack0000000000000027,
                          CONCAT25(uStack0000000000000025,
                                   CONCAT14(uStack0000000000000024,in_stack_00000020)));
      }
      in_stack_00000028 = (undefined1)lVar12;
      uStack0000000000000029 = (undefined1)((ulong)lVar12 >> 8);
      uStack000000000000002a = (undefined2)((ulong)lVar12 >> 0x10);
      uStack000000000000002c = (undefined4)((ulong)lVar12 >> 0x20);
      func_0x0412a280(lVar17,(long)in_stack_00000030 - lVar17);
    }
    puVar13 = (undefined8 *)0xf58cbb8;
  }
  func_0x05f93280(&stack0x00000040);
  uVar7 = uStack00000000000000b4;
  uVar9 = in_stack_000000b0;
  lVar12 = CONCAT44(uStack00000000000000b4,in_stack_000000b0);
  if (lVar12 != 0) {
    lVar17 = CONCAT44(uStack00000000000000bc,
                      CONCAT22(uStack00000000000000ba,
                               CONCAT11(uStack00000000000000b9,in_stack_000000b8)));
    if (lVar12 != lVar17) {
      lVar17 = lVar17 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
      lVar12 = CONCAT44(uStack00000000000000b4,in_stack_000000b0);
    }
    in_stack_000000b8 = (undefined1)uVar9;
    uStack00000000000000b9 = (undefined1)((uint)uVar9 >> 8);
    uStack00000000000000ba = (undefined2)((uint)uVar9 >> 0x10);
    uStack00000000000000bc = uVar7;
    func_0x0412a280(lVar12,in_stack_000000c0 - lVar12);
  }
  func_0x064e40a0(puVar13);
  if (in_stack_000003a8 != (code *)0x0) {
    (*in_stack_000003a8)(&stack0x00000390);
  }
  if (in_stack_00000360 != (code *)0x0) {
    (*in_stack_00000360)(&stack0x00000348);
  }
  if (in_stack_00000320 != (code *)0x0) {
    (*in_stack_00000320)(&stack0x00000308);
  }
  if (in_stack_000002e0 != (code *)0x0) {
    (*in_stack_000002e0)(&stack0x000002c8);
  }
  if ((in_stack_000000c8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack00000000000000da,
                             CONCAT11(uStack00000000000000d9,uStack00000000000000d5._3_1_)),
                    CONCAT17(uStack00000000000000cf,
                             CONCAT25(uStack00000000000000cd,
                                      CONCAT41(uStack00000000000000c9,in_stack_000000c8))) &
                    0xfffffffffffffffe);
  }
  in_stack_000000b0 = 0x636f6c10;
  uStack00000000000000b4 = 0x6f697461;
  in_stack_000000b8 = 0x6e;
  uStack00000000000000b9 = 0;
  func_0x065134a0(&stack0x000000e0,&stack0x000000b0);
  in_stack_000000c8 = 0x20;
  uStack00000000000000c9 = _DAT_014b105e;
  uStack00000000000000cd = (undefined2)_UNK_014b1062;
  uStack00000000000000cf = (undefined1)((uint)_UNK_014b1062 >> 0x10);
  uStack00000000000000d0 = (undefined1)((uint)_UNK_014b1062 >> 0x18);
  uStack00000000000000d1 = _UNK_014b1066;
  uStack00000000000000d5 = _UNK_014b106a;
  uStack00000000000000d9 = 0;
  func_0x065134a0(&stack0x00000290,&stack0x000000c8);
  in_stack_00000050 = (undefined1 *)0x0;
  in_stack_00000068 = 0;
  _uStack00000000000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000090 = (long *)0x0;
  _uStack0000000000000098 = 0;
  in_stack_00000080 = (ulong *)0x0;
  in_stack_00000088 = (long *)0x0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000058 = 0x16;
  uStack0000000000000059 = 0x616a6441736168;
  in_stack_00000060 = 0x746e6563;
  uStack0000000000000064 = 0;
  func_0x069abf00(&stack0x00000020,&stack0x000000e0,&stack0x00000290);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f060dd8;
  uVar9 = func_0x0d858500(&stack0x00000020);
  puVar2 = puVar13 + 3;
  *(undefined1 *)(puVar13 + 4) = 1;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar9;
  *(undefined4 *)(puVar13 + 5) = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[3] = &UNK_0f060e28;
  *(uint *)(puVar13 + 9) = in_stack_00000020;
  *(uint *)((long)puVar13 + 0x4c) =
       CONCAT13(uStack0000000000000027,CONCAT21(uStack0000000000000025,uStack0000000000000024));
  *(uint *)(puVar13 + 10) =
       CONCAT22(uStack000000000000002a,CONCAT11(uStack0000000000000029,in_stack_00000028));
  *(undefined4 *)((long)puVar13 + 0x54) = uStack000000000000002c;
  puVar13[0xb] = in_stack_00000030;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  uStack0000000000000025 = 0;
  uStack0000000000000027 = 0;
  in_stack_00000028 = 0;
  uStack0000000000000029 = 0;
  uStack000000000000002a = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = (ulong *)0x0;
  uVar9 = func_0x0d858620(puVar2);
  plVar16 = in_stack_00000090;
  *(undefined4 *)(puVar13 + 5) = uVar9;
  in_stack_00000088 = puVar2;
  if (in_stack_00000090 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000090 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      lVar12 = *in_stack_00000090;
      in_stack_00000090 = puVar13;
      (**(code **)(lVar12 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
      puVar13 = in_stack_00000090;
    }
  }
  in_stack_00000090 = puVar13;
  cVar8 = func_0x069ac130(&stack0x00000040,&stack0x000000e0,&stack0x00000290);
  if (cVar8 == '\0') {
    puVar14 = (ulong *)0xf58cbb8;
    lVar12 = CONCAT17(uStack0000000000000027,
                      CONCAT25(uStack0000000000000025,
                               CONCAT14(uStack0000000000000024,in_stack_00000020)));
  }
  else {
    if (in_stack_00000478 < in_stack_00000480) {
      *in_stack_00000478 = 0;
      in_stack_00000478[1] = 0;
      in_stack_00000478[2] = 0;
      *in_stack_00000478 = (ulong)_uStack0000000000000040;
      in_stack_00000478[1] = (ulong)_uStack0000000000000048;
      in_stack_00000478[2] = (ulong)in_stack_00000050;
      _uStack0000000000000040 = (undefined4 *)0x0;
      _uStack0000000000000048 = (undefined1 *)0x0;
      in_stack_00000050 = (undefined1 *)0x0;
      in_stack_00000478[5] = in_stack_00000068;
      in_stack_00000478[3] = CONCAT71(uStack0000000000000059,in_stack_00000058);
      in_stack_00000478[4] = CONCAT44(uStack0000000000000064,in_stack_00000060);
      in_stack_00000058 = 0;
      uStack0000000000000059 = 0;
      in_stack_00000060 = 0;
      uStack0000000000000064 = 0;
      in_stack_00000068 = 0;
      in_stack_00000478[6] = 0;
      in_stack_00000478[7] = 0;
      in_stack_00000478[8] = 0;
      in_stack_00000478[6] = in_stack_00000070;
      in_stack_00000478[7] = in_stack_00000078;
      in_stack_00000478[8] = (ulong)in_stack_00000080;
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      in_stack_00000080 = (ulong *)0x0;
      in_stack_00000478[9] = (ulong)in_stack_00000088;
      in_stack_00000478[10] = (ulong)in_stack_00000090;
      in_stack_00000088 = (undefined8 *)0x0;
      in_stack_00000090 = (undefined8 *)0x0;
      in_stack_00000478[0xb] = 0;
      in_stack_00000478[0xc] = 0;
      in_stack_00000478[0xd] = 0;
      *(undefined4 *)(in_stack_00000478 + 0xb) = uStack0000000000000098;
      *(undefined4 *)((long)in_stack_00000478 + 0x5c) = uStack000000000000009c;
      *(undefined4 *)(in_stack_00000478 + 0xc) = uStack00000000000000a0;
      *(undefined4 *)((long)in_stack_00000478 + 100) = uStack00000000000000a4;
      in_stack_00000478[0xd] = in_stack_000000a8;
      _uStack0000000000000098 = 0;
      _uStack00000000000000a0 = 0;
      in_stack_000000a8 = 0;
      in_stack_00000478 = in_stack_00000478 + 0xe;
    }
    else {
      in_stack_00000478 = (ulong *)func_0x0652ac80(&stack0x00000470,&stack0x00000040);
    }
    puVar14 = in_stack_00000478 + -0xe;
    lVar12 = CONCAT17(uStack0000000000000027,
                      CONCAT25(uStack0000000000000025,
                               CONCAT14(uStack0000000000000024,in_stack_00000020)));
  }
  if (lVar12 != 0) {
    lVar22 = CONCAT44(uStack000000000000002c,
                      CONCAT22(uStack000000000000002a,
                               CONCAT11(uStack0000000000000029,in_stack_00000028)));
    lVar17 = lVar12;
    if (lVar12 != lVar22) {
      lVar17 = lVar22 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
      lVar17 = CONCAT17(uStack0000000000000027,
                        CONCAT25(uStack0000000000000025,
                                 CONCAT14(uStack0000000000000024,in_stack_00000020)));
    }
    in_stack_00000028 = (undefined1)lVar12;
    uStack0000000000000029 = (undefined1)((ulong)lVar12 >> 8);
    uStack000000000000002a = (undefined2)((ulong)lVar12 >> 0x10);
    uStack000000000000002c = (undefined4)((ulong)lVar12 >> 0x20);
    func_0x0412a280(lVar17,(long)in_stack_00000030 - lVar17);
  }
  func_0x05f93280(&stack0x00000040);
  func_0x064e40a0(puVar14);
  if (in_stack_000003a8 != (code *)0x0) {
    (*in_stack_000003a8)(&stack0x00000390);
  }
  if (in_stack_00000360 != (code *)0x0) {
    (*in_stack_00000360)(&stack0x00000348);
  }
  if (in_stack_00000320 != (code *)0x0) {
    (*in_stack_00000320)(&stack0x00000308);
  }
  if (in_stack_000002e0 != (code *)0x0) {
    (*in_stack_000002e0)(&stack0x000002c8);
  }
  if ((in_stack_000000c8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack00000000000000da,
                             CONCAT11(uStack00000000000000d9,uStack00000000000000d5._3_1_)),
                    CONCAT17(uStack00000000000000cf,
                             CONCAT25(uStack00000000000000cd,
                                      CONCAT41(uStack00000000000000c9,in_stack_000000c8))) &
                    0xfffffffffffffffe);
  }
  if (in_stack_000001f8 != (code *)0x0) {
    (*in_stack_000001f8)(&stack0x000001e0);
  }
  if (in_stack_000001b0 != (code *)0x0) {
    (*in_stack_000001b0)(&stack0x00000198);
  }
  if (in_stack_00000170 != (code *)0x0) {
    (*in_stack_00000170)(&stack0x00000158);
  }
  if (in_stack_00000130 != (code *)0x0) {
    (*in_stack_00000130)(&stack0x00000118);
  }
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
  }
  if ((in_stack_000000b0 & 1) != 0) {
    func_0x0412a280(in_stack_000000c0,
                    CONCAT44(uStack00000000000000b4,in_stack_000000b0) & 0xfffffffffffffffe);
  }
  in_stack_000000f0 = 0;
  _uStack0000000000000140 = 0;
  in_stack_00000148 = (code *)0x0;
  in_stack_00000130 = (code *)0x0;
  _uStack0000000000000138 = (long *)0x0;
  in_stack_00000120 = (undefined8 *)0x0;
  in_stack_00000128 = (code *)0x0;
  in_stack_00000110 = (undefined *)0x0;
  in_stack_00000118 = 0;
  _uStack0000000000000100 = 0;
  in_stack_00000108 = (code *)0x0;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = (long *)0x0;
  _uStack00000000000000f8 = 0x656e6f6c630a;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f060ea8;
  uVar9 = func_0x0d858500(&stack0x00000040);
  plVar16 = puVar13 + 3;
  *(undefined1 *)(puVar13 + 4) = 1;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar9;
  *(undefined4 *)(puVar13 + 5) = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[3] = &UNK_0f060ef8;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  uVar9 = func_0x0d858620(plVar16);
  plVar1 = (long *)in_stack_00000130;
  *(undefined4 *)(puVar13 + 5) = uVar9;
  in_stack_00000128 = (code *)plVar16;
  if (in_stack_00000130 != (code *)0x0) {
    LOCK();
    plVar16 = (long *)((long)in_stack_00000130 + 8);
    lVar12 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      lVar12 = *(long *)in_stack_00000130;
      in_stack_00000130 = (code *)puVar13;
      (**(code **)(lVar12 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
      puVar13 = (undefined8 *)in_stack_00000130;
    }
  }
  in_stack_00000130 = (code *)puVar13;
  (**(code **)(*(long *)in_stack_00000128 + 0x20))();
  lVar17 = (long)in_stack_00000110;
  lVar12 = in_stack_00000118;
  if (in_stack_00000110 != (undefined *)0x0) {
    while (lVar17 != lVar12) {
      func_0x05fe8450(lVar12 + -0x140);
      lVar12 = lVar12 + -0x140;
    }
    in_stack_00000118 = lVar17;
    func_0x0412a280(in_stack_00000110,(long)in_stack_00000120 - (long)in_stack_00000110);
  }
  in_stack_00000110 = (undefined *)0x0;
  in_stack_00000118 = 0;
  in_stack_00000120 = (undefined8 *)0x0;
  if (in_stack_00000478 < in_stack_00000480) {
    *in_stack_00000478 = 0;
    in_stack_00000478[1] = 0;
    in_stack_00000478[2] = 0;
    *in_stack_00000478 = _uStack00000000000000e0;
    in_stack_00000478[1] = (ulong)_uStack00000000000000e8;
    in_stack_00000478[2] = in_stack_000000f0;
    _uStack00000000000000e0 = 0;
    _uStack00000000000000e8 = (long *)0x0;
    in_stack_000000f0 = 0;
    in_stack_00000478[5] = (ulong)in_stack_00000108;
    in_stack_00000478[3] = _uStack00000000000000f8;
    in_stack_00000478[4] = _uStack0000000000000100;
    _uStack00000000000000f8 = 0;
    _uStack0000000000000100 = 0;
    in_stack_00000108 = (code *)0x0;
    in_stack_00000478[6] = 0;
    in_stack_00000478[7] = 0;
    in_stack_00000478[8] = 0;
    in_stack_00000478[6] = 0;
    in_stack_00000478[7] = 0;
    in_stack_00000478[8] = 0;
    in_stack_00000110 = (undefined *)0x0;
    in_stack_00000118 = 0;
    in_stack_00000120 = (undefined8 *)0x0;
    in_stack_00000478[9] = (ulong)in_stack_00000128;
    in_stack_00000478[10] = (ulong)in_stack_00000130;
    in_stack_00000128 = (code *)0x0;
    in_stack_00000130 = (code *)0x0;
    in_stack_00000478[0xb] = 0;
    in_stack_00000478[0xc] = 0;
    in_stack_00000478[0xd] = 0;
    *(undefined4 *)(in_stack_00000478 + 0xb) = uStack0000000000000138;
    *(undefined4 *)((long)in_stack_00000478 + 0x5c) = uStack000000000000013c;
    *(undefined4 *)(in_stack_00000478 + 0xc) = uStack0000000000000140;
    *(undefined4 *)((long)in_stack_00000478 + 100) = uStack0000000000000144;
    in_stack_00000478[0xd] = (ulong)in_stack_00000148;
    _uStack0000000000000138 = (long *)0x0;
    _uStack0000000000000140 = 0;
    in_stack_00000148 = (code *)0x0;
    puVar14 = in_stack_00000478 + 0xe;
    lVar12 = (long)_uStack0000000000000040;
  }
  else {
    puVar14 = (ulong *)func_0x0652ac80(&stack0x00000470,&stack0x000000e0);
    lVar12 = (long)_uStack0000000000000040;
  }
  _uStack0000000000000040 = (undefined4 *)lVar12;
  if (lVar12 != 0) {
    if ((undefined1 *)lVar12 != _uStack0000000000000048) {
      lVar17 = (long)_uStack0000000000000048 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
    }
    func_0x0412a280(_uStack0000000000000040,(long)in_stack_00000050 - (long)_uStack0000000000000040)
    ;
  }
  func_0x05f93280(&stack0x000000e0);
  func_0x064e40a0(puVar14 + -0xe);
  func_0x069ad620();
  func_0x069ad620();
  func_0x065af670(&stack0x000000e0);
  if ((_uStack00000000000000f8 & 1) == 0) {
    in_stack_00000108 = (code *)0x0;
    _uStack00000000000000f8 = 0x6e696769726f0c;
    _uStack0000000000000100 = 0;
  }
  else {
    func_0x04885120(&stack0x000000f8,&stack0x00000291,6);
  }
  _in_stack_00000110 = func_0x069ae770();
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar16 = (long *)in_stack_00000128;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f060f78;
  in_stack_00000120 = puVar13 + 4;
  puVar13[10] = 0;
  puVar13[0x10] = 0;
  *(undefined1 *)(puVar13 + 0x12) = 0;
  puVar13[0x13] = 0;
  puVar13[0x14] = 0;
  puVar13[0x15] = 0;
  puVar13[4] = &UNK_0f060fc8;
  if (in_stack_00000128 != (code *)0x0) {
    LOCK();
    plVar1 = (long *)((long)in_stack_00000128 + 8);
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      lVar12 = *(long *)in_stack_00000128;
      in_stack_00000128 = (code *)puVar13;
      (**(code **)(lVar12 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
      puVar13 = (undefined8 *)in_stack_00000128;
    }
  }
  in_stack_00000128 = (code *)puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar16 = _uStack0000000000000138;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f061020;
  in_stack_00000130 = (code *)(puVar13 + 3);
  *(undefined1 *)(puVar13 + 4) = 1;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[3] = &UNK_0f061070;
  if (_uStack0000000000000138 != (long *)0x0) {
    LOCK();
    plVar1 = _uStack0000000000000138 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      lVar12 = *_uStack0000000000000138;
      _uStack0000000000000138 = puVar13;
      (**(code **)(lVar12 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
      puVar13 = _uStack0000000000000138;
    }
  }
  _uStack0000000000000138 = puVar13;
  if (in_stack_00000490 < in_stack_00000498) {
    func_0x065b0410(in_stack_00000490,&stack0x000000e0);
    uVar20 = in_stack_00000490 + 0x1b0;
  }
  else {
    uVar20 = func_0x065b01f0(&stack0x00000488,&stack0x000000e0);
  }
  func_0x0652dc20(&stack0x000000e0);
  func_0x064e40a0(uVar20 - 0x1b0);
  in_stack_00000020 = 0x536f740a;
  uStack0000000000000024 = 0x65;
  uStack0000000000000025 = 0x74;
  func_0x068cfd90(&stack0x000000e0,&stack0x00000020);
  func_0x069b02c0(&stack0x00000040,&stack0x000000e0);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f061170;
  uVar9 = func_0x0d858500(&stack0x00000040);
  *(undefined1 *)(puVar13 + 4) = 0;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar9;
  *(undefined4 *)(puVar13 + 5) = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[3] = &UNK_0f0611c0;
  *(undefined4 *)(puVar13 + 9) = uStack0000000000000040;
  *(undefined4 *)((long)puVar13 + 0x4c) = uStack0000000000000044;
  *(undefined4 *)(puVar13 + 10) = uStack0000000000000048;
  *(undefined4 *)((long)puVar13 + 0x54) = uStack000000000000004c;
  puVar13[0xb] = in_stack_00000050;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  uVar9 = func_0x0d858620(puVar13 + 3);
  *(undefined4 *)(puVar13 + 5) = uVar9;
  cVar8 = func_0x069b0440(&stack0x00000290,&stack0x000000e0);
  if (cVar8 == '\0') {
    puVar21 = (ulong *)0xf58cbb8;
    lVar12 = (long)_uStack0000000000000040;
  }
  else {
    if (puVar14 < in_stack_00000480) {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[3] = 0x74657306;
      puVar14[4] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = (ulong)(puVar13 + 3);
      puVar14[10] = (ulong)puVar13;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0;
      *(undefined4 *)(puVar14 + 0xb) = 0;
      *(undefined4 *)((long)puVar14 + 0x5c) = 0;
      *(undefined4 *)(puVar14 + 0xc) = 0;
      *(undefined4 *)((long)puVar14 + 100) = 0;
      puVar14[0xd] = 0;
      puVar14 = puVar14 + 0xe;
    }
    else {
      puVar14 = (ulong *)func_0x0652ac80(&stack0x00000470,&stack0x00000290);
    }
    puVar21 = puVar14 + -0xe;
    lVar12 = (long)_uStack0000000000000040;
  }
  _uStack0000000000000040 = (undefined4 *)lVar12;
  if (lVar12 != 0) {
    if ((undefined1 *)lVar12 != _uStack0000000000000048) {
      lVar17 = (long)_uStack0000000000000048 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
    }
    _uStack0000000000000048 = (undefined1 *)lVar12;
    func_0x0412a280(_uStack0000000000000040,(long)in_stack_00000050 - (long)_uStack0000000000000040)
    ;
  }
  func_0x05f93280(&stack0x00000290);
  func_0x064e40a0(puVar21);
  if (in_stack_000001f8 != (code *)0x0) {
    (*in_stack_000001f8)(&stack0x000001e0);
  }
  if (in_stack_000001b0 != (code *)0x0) {
    (*in_stack_000001b0)(&stack0x00000198);
  }
  if (in_stack_00000170 != (code *)0x0) {
    (*in_stack_00000170)(&stack0x00000158);
  }
  if (in_stack_00000130 != (code *)0x0) {
    (*in_stack_00000130)(&stack0x00000118);
  }
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,
                    CONCAT17(uStack0000000000000027,
                             CONCAT25(uStack0000000000000025,
                                      CONCAT14(uStack0000000000000024,in_stack_00000020))) &
                    0xfffffffffffffffe);
  }
  in_stack_00000020 = 0x416f740a;
  uStack0000000000000024 = 100;
  uStack0000000000000025 = 100;
  func_0x068cfd90(&stack0x000000e0,&stack0x00000020);
  func_0x069b02c0(&stack0x00000040,&stack0x000000e0);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f0612b8;
  uVar9 = func_0x0d858500(&stack0x00000040);
  *(undefined1 *)(puVar13 + 4) = 0;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar9;
  *(undefined4 *)(puVar13 + 5) = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[3] = &UNK_0f061308;
  *(undefined4 *)(puVar13 + 9) = uStack0000000000000040;
  *(undefined4 *)((long)puVar13 + 0x4c) = uStack0000000000000044;
  *(undefined4 *)(puVar13 + 10) = uStack0000000000000048;
  *(undefined4 *)((long)puVar13 + 0x54) = uStack000000000000004c;
  puVar13[0xb] = in_stack_00000050;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  uVar9 = func_0x0d858620(puVar13 + 3);
  *(undefined4 *)(puVar13 + 5) = uVar9;
  cVar8 = func_0x069b0440(&stack0x00000290,&stack0x000000e0);
  if (cVar8 == '\0') {
    puVar21 = (ulong *)0xf58cbb8;
    lVar12 = (long)_uStack0000000000000040;
  }
  else {
    if (puVar14 < in_stack_00000480) {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[3] = 0x64646106;
      puVar14[4] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = (ulong)(puVar13 + 3);
      puVar14[10] = (ulong)puVar13;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0;
      *(undefined4 *)(puVar14 + 0xb) = 0;
      *(undefined4 *)((long)puVar14 + 0x5c) = 0;
      *(undefined4 *)(puVar14 + 0xc) = 0;
      *(undefined4 *)((long)puVar14 + 100) = 0;
      puVar14[0xd] = 0;
      puVar14 = puVar14 + 0xe;
    }
    else {
      puVar14 = (ulong *)func_0x0652ac80(&stack0x00000470,&stack0x00000290);
    }
    puVar21 = puVar14 + -0xe;
    lVar12 = (long)_uStack0000000000000040;
  }
  _uStack0000000000000040 = (undefined4 *)lVar12;
  if (lVar12 != 0) {
    if ((undefined1 *)lVar12 != _uStack0000000000000048) {
      lVar17 = (long)_uStack0000000000000048 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
    }
    _uStack0000000000000048 = (undefined1 *)lVar12;
    func_0x0412a280(_uStack0000000000000040,(long)in_stack_00000050 - (long)_uStack0000000000000040)
    ;
  }
  func_0x05f93280(&stack0x00000290);
  func_0x064e40a0(puVar21);
  if (in_stack_000001f8 != (code *)0x0) {
    (*in_stack_000001f8)(&stack0x000001e0);
  }
  if (in_stack_000001b0 != (code *)0x0) {
    (*in_stack_000001b0)(&stack0x00000198);
  }
  if (in_stack_00000170 != (code *)0x0) {
    (*in_stack_00000170)(&stack0x00000158);
  }
  if (in_stack_00000130 != (code *)0x0) {
    (*in_stack_00000130)(&stack0x00000118);
  }
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,
                    CONCAT17(uStack0000000000000027,
                             CONCAT25(uStack0000000000000025,
                                      CONCAT14(uStack0000000000000024,in_stack_00000020))) &
                    0xfffffffffffffffe);
  }
  in_stack_00000020 = 0x526f7410;
  uStack0000000000000024 = 0x65;
  uStack0000000000000025 = 0x6f6d;
  uStack0000000000000027 = 0x76;
  in_stack_00000028 = 0x65;
  uStack0000000000000029 = 0;
  func_0x068cfd90(&stack0x000000e0,&stack0x00000020);
  func_0x069b02c0(&stack0x00000040,&stack0x000000e0);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f061388;
  uVar9 = func_0x0d858500(&stack0x00000040);
  *(undefined1 *)(puVar13 + 4) = 0;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar9;
  *(undefined4 *)(puVar13 + 5) = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[3] = &UNK_0f0613d8;
  *(undefined4 *)(puVar13 + 9) = uStack0000000000000040;
  *(undefined4 *)((long)puVar13 + 0x4c) = uStack0000000000000044;
  *(undefined4 *)(puVar13 + 10) = uStack0000000000000048;
  *(undefined4 *)((long)puVar13 + 0x54) = uStack000000000000004c;
  puVar13[0xb] = in_stack_00000050;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  uVar9 = func_0x0d858620(puVar13 + 3);
  *(undefined4 *)(puVar13 + 5) = uVar9;
  cVar8 = func_0x069b0440(&stack0x00000290,&stack0x000000e0);
  if (cVar8 == '\0') {
    puVar21 = (ulong *)0xf58cbb8;
    lVar12 = (long)_uStack0000000000000040;
  }
  else {
    if (puVar14 < in_stack_00000480) {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[3] = 0x65766f6d65720c;
      puVar14[4] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = (ulong)(puVar13 + 3);
      puVar14[10] = (ulong)puVar13;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0;
      *(undefined4 *)(puVar14 + 0xb) = 0;
      *(undefined4 *)((long)puVar14 + 0x5c) = 0;
      *(undefined4 *)(puVar14 + 0xc) = 0;
      *(undefined4 *)((long)puVar14 + 100) = 0;
      puVar14[0xd] = 0;
      puVar14 = puVar14 + 0xe;
    }
    else {
      puVar14 = (ulong *)func_0x0652ac80(&stack0x00000470,&stack0x00000290);
    }
    puVar21 = puVar14 + -0xe;
    lVar12 = (long)_uStack0000000000000040;
  }
  _uStack0000000000000040 = (undefined4 *)lVar12;
  if (lVar12 != 0) {
    if ((undefined1 *)lVar12 != _uStack0000000000000048) {
      lVar17 = (long)_uStack0000000000000048 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
    }
    _uStack0000000000000048 = (undefined1 *)lVar12;
    func_0x0412a280(_uStack0000000000000040,(long)in_stack_00000050 - (long)_uStack0000000000000040)
    ;
  }
  func_0x05f93280(&stack0x00000290);
  func_0x064e40a0(puVar21);
  if (in_stack_000001f8 != (code *)0x0) {
    (*in_stack_000001f8)(&stack0x000001e0);
  }
  if (in_stack_000001b0 != (code *)0x0) {
    (*in_stack_000001b0)(&stack0x00000198);
  }
  if (in_stack_00000170 != (code *)0x0) {
    (*in_stack_00000170)(&stack0x00000158);
  }
  if (in_stack_00000130 != (code *)0x0) {
    (*in_stack_00000130)(&stack0x00000118);
  }
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,
                    CONCAT17(uStack0000000000000027,
                             CONCAT25(uStack0000000000000025,
                                      CONCAT14(uStack0000000000000024,in_stack_00000020))) &
                    0xfffffffffffffffe);
  }
  in_stack_000000f0 = 0;
  _uStack0000000000000140 = 0;
  in_stack_00000148 = (code *)0x0;
  in_stack_00000130 = (code *)0x0;
  _uStack0000000000000138 = (long *)0x0;
  in_stack_00000120 = (undefined8 *)0x0;
  in_stack_00000128 = (code *)0x0;
  in_stack_00000110 = (undefined *)0x0;
  in_stack_00000118 = 0;
  _uStack0000000000000100 = 0;
  in_stack_00000108 = (code *)0x0;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = (long *)0x0;
  _uStack00000000000000f8 = 0x7261656c630a;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar15 + 8) = 0;
  *(undefined8 *)(pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f061458;
  uVar9 = func_0x0d858500(&stack0x00000040);
  pcVar3 = pcVar15 + 0x18;
  pcVar15[0x20] = (code)0x0;
  *(undefined4 *)(pcVar15 + 0x24) = uVar9;
  *(undefined4 *)(pcVar15 + 0x28) = 0;
  *(undefined8 *)(pcVar15 + 0x30) = 0;
  *(undefined8 *)(pcVar15 + 0x38) = 0;
  *(undefined8 *)(pcVar15 + 0x40) = 0;
  *(undefined **)(pcVar15 + 0x18) = &UNK_0f0614a8;
  *(undefined8 *)(pcVar15 + 0x48) = 0;
  *(undefined8 *)(pcVar15 + 0x50) = 0;
  *(undefined8 *)(pcVar15 + 0x58) = 0;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  uVar9 = func_0x0d858620(pcVar3);
  plVar16 = (long *)in_stack_00000130;
  *(undefined4 *)(pcVar15 + 0x28) = uVar9;
  in_stack_00000128 = pcVar3;
  if (in_stack_00000130 != (code *)0x0) {
    LOCK();
    plVar1 = (long *)((long)in_stack_00000130 + 8);
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      lVar12 = *(long *)in_stack_00000130;
      in_stack_00000130 = pcVar15;
      (**(code **)(lVar12 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
      pcVar15 = in_stack_00000130;
    }
  }
  in_stack_00000130 = pcVar15;
  (**(code **)(*(long *)in_stack_00000128 + 0x20))();
  lVar17 = (long)in_stack_00000110;
  lVar12 = in_stack_00000118;
  if (in_stack_00000110 != (undefined *)0x0) {
    while (lVar17 != lVar12) {
      func_0x05fe8450(lVar12 + -0x140);
      lVar12 = lVar12 + -0x140;
    }
    in_stack_00000118 = lVar17;
    func_0x0412a280(in_stack_00000110,(long)in_stack_00000120 - (long)in_stack_00000110);
  }
  in_stack_00000110 = (undefined *)0x0;
  in_stack_00000118 = 0;
  in_stack_00000120 = (undefined8 *)0x0;
  if (puVar14 < in_stack_00000480) {
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = _uStack00000000000000e0;
    puVar14[1] = (ulong)_uStack00000000000000e8;
    puVar14[2] = in_stack_000000f0;
    _uStack00000000000000e0 = 0;
    _uStack00000000000000e8 = (long *)0x0;
    in_stack_000000f0 = 0;
    puVar14[5] = (ulong)in_stack_00000108;
    puVar14[3] = _uStack00000000000000f8;
    puVar14[4] = _uStack0000000000000100;
    _uStack00000000000000f8 = 0;
    _uStack0000000000000100 = 0;
    in_stack_00000108 = (code *)0x0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[8] = 0;
    in_stack_00000110 = (undefined *)0x0;
    in_stack_00000118 = 0;
    in_stack_00000120 = (undefined8 *)0x0;
    puVar14[9] = (ulong)in_stack_00000128;
    puVar14[10] = (ulong)in_stack_00000130;
    in_stack_00000128 = (code *)0x0;
    in_stack_00000130 = (code *)0x0;
    puVar14[0xb] = 0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    *(undefined4 *)(puVar14 + 0xb) = uStack0000000000000138;
    *(undefined4 *)((long)puVar14 + 0x5c) = uStack000000000000013c;
    *(undefined4 *)(puVar14 + 0xc) = uStack0000000000000140;
    *(undefined4 *)((long)puVar14 + 100) = uStack0000000000000144;
    puVar14[0xd] = (ulong)in_stack_00000148;
    _uStack0000000000000138 = (long *)0x0;
    _uStack0000000000000140 = 0;
    in_stack_00000148 = (code *)0x0;
    puVar14 = puVar14 + 0xe;
    lVar12 = (long)_uStack0000000000000040;
  }
  else {
    puVar14 = (ulong *)func_0x0652ac80(&stack0x00000470,&stack0x000000e0);
    lVar12 = (long)_uStack0000000000000040;
  }
  _uStack0000000000000040 = (undefined4 *)lVar12;
  if (lVar12 != 0) {
    if ((undefined1 *)lVar12 != _uStack0000000000000048) {
      lVar17 = (long)_uStack0000000000000048 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
    }
    func_0x0412a280(_uStack0000000000000040,(long)in_stack_00000050 - (long)_uStack0000000000000040)
    ;
  }
  func_0x05f93280(&stack0x000000e0);
  func_0x064e40a0(puVar14 + -0xe);
  in_stack_00000020 = 0x66666f0c;
  uStack0000000000000024 = 0x73;
  uStack0000000000000025 = 0x7465;
  uStack0000000000000027 = 0;
  func_0x065134a0(&stack0x000000e0,&stack0x00000020);
  func_0x066bd9c0(&stack0x00000040,&stack0x000000e0);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f061528;
  uVar9 = func_0x0d858500(&stack0x00000040);
  *(undefined1 *)(puVar13 + 4) = 0;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar9;
  *(undefined4 *)(puVar13 + 5) = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[3] = &UNK_0f061578;
  *(undefined4 *)(puVar13 + 9) = uStack0000000000000040;
  *(undefined4 *)((long)puVar13 + 0x4c) = uStack0000000000000044;
  *(undefined4 *)(puVar13 + 10) = uStack0000000000000048;
  *(undefined4 *)((long)puVar13 + 0x54) = uStack000000000000004c;
  puVar13[0xb] = in_stack_00000050;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  uVar9 = func_0x0d858620(puVar13 + 3);
  *(undefined4 *)(puVar13 + 5) = uVar9;
  cVar8 = func_0x0694aec0(&stack0x00000290,&stack0x000000e0);
  if (cVar8 == '\0') {
    puVar21 = (ulong *)0xf58cbb8;
    lVar12 = (long)_uStack0000000000000040;
  }
  else {
    if (puVar14 < in_stack_00000480) {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[3] = 0x616c736e61727412;
      puVar14[4] = 0x6574;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = (ulong)(puVar13 + 3);
      puVar14[10] = (ulong)puVar13;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0;
      *(undefined4 *)(puVar14 + 0xb) = 0;
      *(undefined4 *)((long)puVar14 + 0x5c) = 0;
      *(undefined4 *)(puVar14 + 0xc) = 0;
      *(undefined4 *)((long)puVar14 + 100) = 0;
      puVar14[0xd] = 0;
      puVar14 = puVar14 + 0xe;
    }
    else {
      puVar14 = (ulong *)func_0x0652ac80(&stack0x00000470,&stack0x00000290);
    }
    puVar21 = puVar14 + -0xe;
    lVar12 = (long)_uStack0000000000000040;
  }
  _uStack0000000000000040 = (undefined4 *)lVar12;
  if (lVar12 != 0) {
    if ((undefined1 *)lVar12 != _uStack0000000000000048) {
      lVar17 = (long)_uStack0000000000000048 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
    }
    _uStack0000000000000048 = (undefined1 *)lVar12;
    func_0x0412a280(_uStack0000000000000040,(long)in_stack_00000050 - (long)_uStack0000000000000040)
    ;
  }
  func_0x05f93280(&stack0x00000290);
  func_0x064e40a0(puVar21);
  if (in_stack_000001f8 != (code *)0x0) {
    (*in_stack_000001f8)(&stack0x000001e0);
  }
  if (in_stack_000001b0 != (code *)0x0) {
    (*in_stack_000001b0)(&stack0x00000198);
  }
  if (in_stack_00000170 != (code *)0x0) {
    (*in_stack_00000170)(&stack0x00000158);
  }
  if (in_stack_00000130 != (code *)0x0) {
    (*in_stack_00000130)(&stack0x00000118);
  }
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,
                    CONCAT17(uStack0000000000000027,
                             CONCAT25(uStack0000000000000025,
                                      CONCAT14(uStack0000000000000024,in_stack_00000020))) &
                    0xfffffffffffffffe);
  }
  in_stack_00000020 = 0x636f6c10;
  uStack0000000000000024 = 0x61;
  uStack0000000000000025 = 0x6974;
  uStack0000000000000027 = 0x6f;
  in_stack_00000028 = 0x6e;
  uStack0000000000000029 = 0;
  func_0x065134a0(&stack0x000000e0,&stack0x00000020);
  func_0x066bd9c0(&stack0x00000040,&stack0x000000e0);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f0615f8;
  uVar9 = func_0x0d858500(&stack0x00000040);
  *(undefined1 *)(puVar13 + 4) = 0;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar9;
  *(undefined4 *)(puVar13 + 5) = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[3] = &UNK_0f061648;
  *(undefined4 *)(puVar13 + 9) = uStack0000000000000040;
  *(undefined4 *)((long)puVar13 + 0x4c) = uStack0000000000000044;
  *(undefined4 *)(puVar13 + 10) = uStack0000000000000048;
  *(undefined4 *)((long)puVar13 + 0x54) = uStack000000000000004c;
  puVar13[0xb] = in_stack_00000050;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  uVar9 = func_0x0d858620(puVar13 + 3);
  *(undefined4 *)(puVar13 + 5) = uVar9;
  cVar8 = func_0x0694aec0(&stack0x00000290,&stack0x000000e0);
  if (cVar8 == '\0') {
    puVar21 = (ulong *)0xf58cbb8;
    lVar12 = (long)_uStack0000000000000040;
  }
  else {
    if (puVar14 < in_stack_00000480) {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[3] = 0x6f5465766f6d0c;
      puVar14[4] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = (ulong)(puVar13 + 3);
      puVar14[10] = (ulong)puVar13;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0;
      puVar14 = puVar14 + 0xe;
    }
    else {
      puVar14 = (ulong *)func_0x0652ac80(&stack0x00000470,&stack0x00000290);
    }
    puVar21 = puVar14 + -0xe;
    lVar12 = (long)_uStack0000000000000040;
  }
  _uStack0000000000000040 = (undefined4 *)lVar12;
  if (lVar12 != 0) {
    if ((undefined1 *)lVar12 != _uStack0000000000000048) {
      lVar17 = (long)_uStack0000000000000048 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
    }
    _uStack0000000000000048 = (undefined1 *)lVar12;
    func_0x0412a280(_uStack0000000000000040,(long)in_stack_00000050 - (long)_uStack0000000000000040)
    ;
  }
  func_0x05f93280(&stack0x00000290);
  func_0x064e40a0(puVar21);
  if (in_stack_000001f8 != (code *)0x0) {
    (*in_stack_000001f8)(&stack0x000001e0);
  }
  if (in_stack_000001b0 != (code *)0x0) {
    (*in_stack_000001b0)(&stack0x00000198);
  }
  if (in_stack_00000170 != (code *)0x0) {
    (*in_stack_00000170)(&stack0x00000158);
  }
  if (in_stack_00000130 != (code *)0x0) {
    (*in_stack_00000130)(&stack0x00000118);
  }
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,
                    CONCAT17(uStack0000000000000027,
                             CONCAT25(uStack0000000000000025,
                                      CONCAT14(uStack0000000000000024,in_stack_00000020))) &
                    0xfffffffffffffffe);
  }
  in_stack_000000f0 = 0;
  in_stack_00000108 = (code *)0x0;
  _uStack0000000000000140 = 0;
  in_stack_00000148 = (code *)0x0;
  in_stack_00000130 = (code *)0x0;
  _uStack0000000000000138 = (long *)0x0;
  in_stack_00000120 = (undefined8 *)0x0;
  in_stack_00000128 = (code *)0x0;
  in_stack_00000110 = (undefined *)0x0;
  in_stack_00000118 = 0;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = (long *)0x0;
  _uStack00000000000000f8 = 0x756c6f567465671a;
  _uStack0000000000000100 = 0x7473694c656d;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f0616c8;
  uVar9 = func_0x0d858500(&stack0x00000040);
  plVar16 = puVar13 + 3;
  *(undefined1 *)(puVar13 + 4) = 0;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar9;
  *(undefined4 *)(puVar13 + 5) = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[3] = &UNK_0f061718;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  _uStack0000000000000040 = (undefined4 *)0x0;
  _uStack0000000000000048 = (undefined1 *)0x0;
  in_stack_00000050 = (undefined1 *)0x0;
  uVar9 = func_0x0d858620(plVar16);
  plVar1 = (long *)in_stack_00000130;
  *(undefined4 *)(puVar13 + 5) = uVar9;
  in_stack_00000128 = (code *)plVar16;
  if (in_stack_00000130 != (code *)0x0) {
    LOCK();
    plVar16 = (long *)((long)in_stack_00000130 + 8);
    lVar12 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      lVar12 = *(long *)in_stack_00000130;
      in_stack_00000130 = (code *)puVar13;
      (**(code **)(lVar12 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
      puVar13 = (undefined8 *)in_stack_00000130;
    }
  }
  in_stack_00000130 = (code *)puVar13;
  (**(code **)(*(long *)in_stack_00000128 + 0x20))();
  lVar17 = (long)in_stack_00000110;
  lVar12 = in_stack_00000118;
  if (in_stack_00000110 != (undefined *)0x0) {
    while (lVar17 != lVar12) {
      func_0x05fe8450(lVar12 + -0x140);
      lVar12 = lVar12 + -0x140;
    }
    in_stack_00000118 = lVar17;
    func_0x0412a280(in_stack_00000110,(long)in_stack_00000120 - (long)in_stack_00000110);
  }
  in_stack_00000110 = (undefined *)0x0;
  in_stack_00000118 = 0;
  in_stack_00000120 = (undefined8 *)0x0;
  if (puVar14 < in_stack_00000480) {
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = _uStack00000000000000e0;
    puVar14[1] = (ulong)_uStack00000000000000e8;
    puVar14[2] = in_stack_000000f0;
    _uStack00000000000000e0 = 0;
    _uStack00000000000000e8 = (long *)0x0;
    in_stack_000000f0 = 0;
    puVar14[5] = (ulong)in_stack_00000108;
    puVar14[3] = _uStack00000000000000f8;
    puVar14[4] = _uStack0000000000000100;
    _uStack00000000000000f8 = 0;
    _uStack0000000000000100 = 0;
    in_stack_00000108 = (code *)0x0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[8] = 0;
    in_stack_00000110 = (undefined *)0x0;
    in_stack_00000118 = 0;
    in_stack_00000120 = (undefined8 *)0x0;
    puVar14[9] = (ulong)in_stack_00000128;
    puVar14[10] = (ulong)in_stack_00000130;
    in_stack_00000128 = (code *)0x0;
    in_stack_00000130 = (code *)0x0;
    puVar14[0xb] = 0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar14[0xb] = (ulong)_uStack0000000000000138;
    puVar14[0xc] = _uStack0000000000000140;
    puVar14[0xd] = (ulong)in_stack_00000148;
    _uStack0000000000000138 = (long *)0x0;
    _uStack0000000000000140 = 0;
    in_stack_00000148 = (code *)0x0;
    puVar14 = puVar14 + 0xe;
    lVar12 = (long)_uStack0000000000000040;
  }
  else {
    puVar14 = (ulong *)func_0x0652ac80(&stack0x00000470,&stack0x000000e0);
    lVar12 = (long)_uStack0000000000000040;
  }
  _uStack0000000000000040 = (undefined4 *)lVar12;
  if (lVar12 != 0) {
    if ((undefined1 *)lVar12 != _uStack0000000000000048) {
      lVar17 = (long)_uStack0000000000000048 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar12);
    }
    func_0x0412a280(_uStack0000000000000040,(long)in_stack_00000050 - (long)_uStack0000000000000040)
    ;
  }
  func_0x05f93280(&stack0x000000e0);
  func_0x064e40a0(puVar14 + -0xe);
  func_0x065af670(&stack0x000000e0);
  if ((_uStack00000000000000f8 & 1) == 0) {
    in_stack_00000108 = (code *)0x0;
    _uStack00000000000000f8 = 0x43656d756c6f7616;
    _uStack0000000000000100 = 0x746e756f;
  }
  else {
    func_0x04885120(&stack0x000000f8,&stack0x00000291,0xb);
  }
  _in_stack_00000110 = func_0x0651f1a0();
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar1 = _uStack0000000000000138;
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f0617a8;
  in_stack_00000130 = (code *)(plVar16 + 3);
  *(undefined1 *)(plVar16 + 4) = 1;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[3] = (long)&UNK_0f0617f8;
  if (_uStack0000000000000138 != (long *)0x0) {
    LOCK();
    plVar4 = _uStack0000000000000138 + 1;
    lVar12 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      lVar12 = *_uStack0000000000000138;
      _uStack0000000000000138 = plVar16;
      (**(code **)(lVar12 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
      plVar16 = _uStack0000000000000138;
    }
  }
  _uStack0000000000000138 = plVar16;
  if (uVar20 < in_stack_00000498) {
    func_0x065b0410(uVar20,&stack0x000000e0);
    uVar20 = uVar20 + 0x1b0;
  }
  else {
    uVar20 = func_0x065b01f0(&stack0x00000488,&stack0x000000e0);
  }
  func_0x0652dc20(&stack0x000000e0);
  func_0x064e40a0(uVar20 - 0x1b0);
  func_0x065af670(&stack0x000000e0);
  if ((_uStack00000000000000f8 & 1) == 0) {
    _uStack00000000000000f8 = 0x7974706d4573690e;
    _uStack0000000000000100 = 0x746e7500;
    in_stack_00000108 = (code *)0;
  }
  else {
    func_0x04885120(&stack0x000000f8,&stack0x00000291,7);
  }
  auVar24 = func_0x0651e0c0();
  _in_stack_00000110 = auVar24;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar16 = _uStack0000000000000138;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f061858;
  in_stack_00000130 = (code *)(puVar13 + 3);
  *(undefined1 *)(puVar13 + 4) = 1;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[3] = &UNK_0f0618a8;
  if (_uStack0000000000000138 != (long *)0x0) {
    LOCK();
    plVar1 = _uStack0000000000000138 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      lVar12 = *_uStack0000000000000138;
      _uStack0000000000000138 = puVar13;
      (**(code **)(lVar12 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
      puVar13 = _uStack0000000000000138;
    }
  }
  _uStack0000000000000138 = puVar13;
  if (uVar20 < in_stack_00000498) {
    func_0x065b0410(uVar20,&stack0x000000e0);
    lVar12 = uVar20 + 0x1b0;
  }
  else {
    lVar12 = func_0x065b01f0(&stack0x00000488,&stack0x000000e0);
  }
  func_0x0652dc20(&stack0x000000e0);
  func_0x064e40a0(lVar12 + -0x1b0);
  func_0x064e40a0(&stack0x000003e0);
  auVar24 = func_0x065f5980();
  if (in_stack_000003f8 != 0) {
    for (; in_stack_000003f8 != in_stack_00000400; in_stack_00000400 = in_stack_00000400 + -0x30) {
      if ((*(byte *)(in_stack_00000400 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(in_stack_00000400 + -0x10),
                        *(ulong *)(in_stack_00000400 + -0x20) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(in_stack_000003f8,in_stack_00000408 - in_stack_000003f8);
  }
  *in_stack_000004e8 = in_stack_000003e0;
  in_stack_000004e8[1] = in_stack_000003e8;
  in_stack_000004e8[2] = in_stack_000003f0;
  in_stack_000004e8[5] = in_stack_00000420;
  in_stack_000004e8[3] = in_stack_00000410;
  in_stack_000004e8[4] = in_stack_00000418;
  *(int *)(in_stack_000004e8 + 8) = auVar23._0_4_;
  *(int *)((long)in_stack_000004e8 + 0x44) = auVar23._4_4_;
  *(int *)(in_stack_000004e8 + 9) = auVar23._8_4_;
  *(int *)((long)in_stack_000004e8 + 0x4c) = auVar23._12_4_;
  *(undefined1 (*) [16])(in_stack_000004e8 + 6) = auVar24;
  in_stack_000004e8[10] = in_stack_00000448;
  in_stack_000004e8[0xb] = in_stack_00000450;
  in_stack_000004e8[0xc] = in_stack_00000458;
  in_stack_000004e8[0xd] = in_stack_00000460;
  in_stack_000004e8[0xe] = in_stack_00000468;
  in_stack_000004e8[0xf] = in_stack_00000470;
  in_stack_000004e8[0x10] = puVar14;
  in_stack_000004e8[0x11] = in_stack_00000480;
  in_stack_000004e8[0x12] = in_stack_00000488;
  in_stack_000004e8[0x13] = lVar12;
  in_stack_000004e8[0x14] = in_stack_00000498;
  in_stack_000004e8[0x15] = in_stack_000004a0;
  in_stack_000004e8[0x16] = in_stack_000004a8;
  in_stack_000004e8[0x17] = in_stack_000004b0;
  in_stack_000004e8[0x18] = in_stack_000004b8;
  in_stack_000004e8[0x19] = in_stack_000004c0;
  in_stack_000004e8[0x1a] = in_stack_000004c8;
  *(int *)(in_stack_000004e8 + 0x1b) = (int)in_stack_000004d0;
  *(int *)((long)in_stack_000004e8 + 0xdc) = (int)((ulong)in_stack_000004d0 >> 0x20);
  *(int *)(in_stack_000004e8 + 0x1c) = (int)in_stack_000004d8;
  *(int *)((long)in_stack_000004e8 + 0xe4) = (int)((ulong)in_stack_000004d8 >> 0x20);
  in_stack_000004e8[0x1d] = in_stack_000004e0;
  func_0x0651ffe0(&stack0x000003f8);
  return in_stack_000004e8;
}



/* ---- referenced strings ----
 * 0x14b105e  normalizedOffset
 */
