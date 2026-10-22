/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe513e50
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e513e50, 0e5143ce] [0e51441f, 0e514797] [0e5147a0, 0e5147e1] [0e5147f0, 0e514a4e] [0e514a9f, 0e515957] [0e515960, 0e5159a1] [0e5159b0, 0e516220] [0e516230, 0e516437] [0e516440, 0e516481] [0e516490, 0e516fa7] [0e516fb0, 0e516ff1] [0e517000, 0e517b57] [0e517b60, 0e517de7] [0e517df0, 0e517e31] [0e517e40, 0e518947] [0e518950, 0e518991] [0e5189a0, 0e519507] [0e519510, 0e519551] [0e519560, 0e51a0a7] [0e51a0b0, 0e51a337] [0e51a340, 0e51a381] [0e51a390, 0e51ab30] [0e51ab40, 0e51ad37] [0e51ad40, 0e51ad81] [0e51ad90, 0e51c207] [0e51c210, 0e51c251] [0e51c260, 0e51ca70] [0e51ca80, 0e51cc87] [0e51cc90, 0e51ccd1] [0e51cce0, 0e51d7d4] [0e51d7e0, 0e51d821] [0e51d830, 0e51dcd4] [0e51dce0, 0e51dd21] [0e51dd30, 0e51e174] [0e51e180, 0e51e1c1] [0e51e1d0, 0e51e447] [0e51e48c, 0e51e755] [0e51e822, 0e51ebd9] [0e51ee2a, 0e51ee53] [0e51eec2, 0e51ef05] [0e51ef4a, 0e51efb7] [0e51efe2, 0e51f04f] [0e51f094, 0e51fd52]]
 * Ghidra: FUN_0e513e50
 */


/* WARNING: Removing unreachable block (ram,0x0e51617d) */
/* WARNING: Removing unreachable block (ram,0x0e51618f) */
/* WARNING: Removing unreachable block (ram,0x0e515a82) */
/* WARNING: Removing unreachable block (ram,0x0e515aa9) */
/* WARNING: Removing unreachable block (ram,0x0e515a5b) */
/* WARNING: Removing unreachable block (ram,0x0e514587) */
/* WARNING: Removing unreachable block (ram,0x0e515763) */
/* WARNING: Removing unreachable block (ram,0x0e51aa85) */
/* WARNING: Removing unreachable block (ram,0x0e51aa97) */
/* WARNING: Removing unreachable block (ram,0x0e51c9c4) */
/* WARNING: Removing unreachable block (ram,0x0e51c9d6) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e513e50(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  long in_RAX;
  undefined *puVar16;
  ulong uVar17;
  byte *pbVar18;
  code *pcVar19;
  long *plVar20;
  long lVar21;
  int *piVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  long unaff_RBX;
  ulong uVar27;
  long unaff_R12;
  undefined8 *puVar28;
  long lVar29;
  uint *puVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long *in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  code *in_stack_00000020;
  undefined4 uStack0000000000000028;
  char cStack000000000000002c;
  undefined3 uStack000000000000002d;
  undefined1 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined1 in_stack_00000058 [16];
  undefined2 uStack0000000000000070;
  undefined1 auStack0000000000000072 [14];
  uint uStack0000000000000080;
  undefined4 uStack0000000000000084;
  int iStack0000000000000088;
  int iStack000000000000008c;
  code *in_stack_00000090;
  byte bStack0000000000000098;
  char cStack000000000000009c;
  undefined1 uStack000000000000009d;
  undefined1 uStack000000000000009e;
  undefined1 uStack000000000000009f;
  char cStack00000000000000a0;
  undefined6 uStack00000000000000a1;
  undefined1 uStack00000000000000a7;
  long in_stack_000000a8;
  undefined1 uStack00000000000000b0;
  undefined8 uStack00000000000000b1;
  undefined2 uStack00000000000000b9;
  undefined1 uStack00000000000000bb;
  undefined1 uStack00000000000000bc;
  undefined3 uStack00000000000000bd;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  undefined2 uStack0000000000000118;
  undefined2 uStack000000000000011a;
  uint uStack000000000000011c;
  uint uStack0000000000000120;
  undefined1 uStack0000000000000124;
  undefined8 in_stack_00000128;
  undefined2 uStack0000000000000130;
  undefined1 uStack0000000000000134;
  undefined1 uStack0000000000000138;
  undefined1 uStack000000000000013c;
  code *in_stack_00000140;
  code *in_stack_00000148;
  code *in_stack_00000150;
  code *in_stack_00000158;
  code *in_stack_00000160;
  int in_stack_00000168;
  uint uStack000000000000016c;
  undefined4 in_stack_00000170;
  uint uStack0000000000000174;
  char cStack0000000000000178;
  undefined1 uStack0000000000000179;
  undefined2 uStack000000000000017a;
  undefined2 uStack000000000000017c;
  undefined2 uStack000000000000017e;
  code *in_stack_00000180;
  code *in_stack_00000188;
  code *in_stack_00000190;
  code *in_stack_00000198;
  code *in_stack_000001a0;
  int iStack00000000000001a8;
  uint uStack00000000000001ac;
  char cStack00000000000001b0;
  uint uStack00000000000001b4;
  char cStack00000000000001b8;
  undefined1 uStack00000000000001b9;
  undefined2 uStack00000000000001ba;
  undefined2 uStack00000000000001bc;
  undefined2 uStack00000000000001be;
  code *in_stack_000001c0;
  code *in_stack_000001c8;
  code *in_stack_000001d0;
  code *in_stack_000001d8;
  code *in_stack_000001e0;
  int iStack00000000000001e8;
  uint uStack00000000000001ec;
  undefined1 uStack00000000000001f0;
  undefined3 uStack00000000000001f1;
  uint uStack00000000000001f4;
  ulong in_stack_00000200;
  undefined8 in_stack_00000210;
  undefined1 uVar60;
  undefined7 uVar61;
  undefined1 uVar62;
  undefined5 uVar63;
  undefined2 uVar64;
  undefined1 uVar65;
  undefined5 uVar66;
  undefined1 uVar67;
  undefined1 in_stack_00000257;
  code *in_stack_00000258;
  code *in_stack_00000260;
  undefined8 in_stack_00000268;
  char in_stack_00000270;
  code *in_stack_000002c0;
  undefined1 in_stack_00000308;
  undefined1 in_stack_00000309;
  undefined1 in_stack_0000030a;
  undefined5 in_stack_0000030b;
  long in_stack_00000388;
  long in_stack_00000438;
  
  uStack00000000000001ac = param_3;
  do {
    uStack00000000000001ac = ((int)*(char *)(in_RAX + param_2) ^ uStack00000000000001ac) * 0x1000193
    ;
    param_2 = param_2 + 1;
  } while (param_4 != param_2);
  iStack00000000000001a8 = 2;
  if ((DAT_0f7556c8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7556c8), iVar14 != 0)) {
    func_0x0e53a030();
    func_0x0410844d(&DAT_0f7556c8);
  }
  in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
  _iStack0000000000000018 = (code *)0x1;
  in_stack_00000020 = (code *)0x0;
  _uStack0000000000000028 = &UNK_0e53e3f0;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_0e539e60;
  in_stack_00000040 = &UNK_0e53e4b0;
  in_stack_00000048 = &UNK_0e53e4c0;
  in_stack_00000050 = 0;
  in_stack_00000058 = ZEXT816(0);
  func_0x048b05a0(&stack0x00000188,&stack0x00000000);
  uVar4 = in_stack_00000058._8_8_;
  if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
    LOCK();
    plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
    lVar29 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  in_stack_00000150 = in_stack_00000198;
  in_stack_00000158 = in_stack_000001a0;
  in_stack_00000140 = in_stack_00000188;
  in_stack_00000148 = in_stack_00000190;
  func_0x0e53e180(&stack0x00000000,&stack0x00000140,&stack0x00000070);
  if (iStack000000000000001c == 2) {
    piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
    iVar14 = *piVar22;
    while (iVar14 != iStack0000000000000018) {
      piVar22 = piVar22 + 0x16;
      iVar14 = *piVar22;
    }
    lVar29 = *(long *)(piVar22 + 0xc);
    while (lVar29 != 0) {
      piVar22 = *(int **)(piVar22 + 0xe);
      lVar29 = *(long *)(piVar22 + 0xc);
    }
LAB_0e513fcf:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
  }
  else {
    if (iStack000000000000001c == 1) {
      piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x1a;
        iVar14 = *piVar22;
      }
      goto LAB_0e513fcf;
    }
    if (iStack000000000000001c == 0) {
      *(uint *)((long)in_stack_00000010 + 0x18) =
           *(uint *)((long)in_stack_00000010 + 0x18) | 0x90000;
    }
  }
  if (cStack00000000000001b8 == '\0') {
    func_0x0e53e510(&stack0x00000000,&stack0x00000180);
  }
  uVar9 = uStack00000000000001b4;
  pcVar19 = in_stack_00000180;
  if ((DAT_0f7556a8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7556a8), iVar14 != 0)) {
    func_0x0e539f20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755628,0xf53dab8);
    func_0x0410844d(&DAT_0f7556a8);
  }
  plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755628 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e514060;
    plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) != *(uint *)(_DAT_0f755628 + 4))
  ;
  if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e514060:
    puVar16 = &DAT_0f755628;
  }
  else {
    puVar16 = (undefined *)plVar20[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
  for (puVar30 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
      (puVar30 != puVar3 && (*puVar30 != uVar9)); puVar30 = puVar30 + 0xe) {
  }
  if ((puVar30 == puVar3) &&
     (cVar12 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011e7332),
     cVar12 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  func_0x05d9c620(puVar30 + 2,&stack0x000001ac,&stack0x000001ac,&stack0x00000000);
  in_stack_00000140 = in_stack_00000180;
  in_stack_00000148 = in_stack_00000188;
  in_stack_00000150 = in_stack_00000190;
  in_stack_00000158 = in_stack_00000198;
  in_stack_00000160 = in_stack_000001a0;
  in_stack_00000168 = iStack00000000000001a8;
  uStack000000000000016c = uStack00000000000001ac;
  in_stack_00000170 = _cStack00000000000001b0;
  uStack0000000000000174 = uStack00000000000001b4;
  cStack0000000000000178 = cStack00000000000001b8;
  uStack0000000000000179 = uStack00000000000001b9;
  uStack000000000000017a = uStack00000000000001ba;
  func_0x048b0bc0(&stack0x00000070);
  uVar60 = 0x2a;
  uVar61 = (undefined7)_DAT_014a96e9;
  uVar62 = (undefined1)((ulong)_DAT_014a96e9 >> 0x38);
  uVar63 = (undefined5)_UNK_014a96f1;
  uVar64 = 0x6e65;
  uVar65 = 100;
  uVar66 = 0x746f6f6c5f;
  uVar67 = 0;
  func_0x0e53dbe0(&stack0x00000070);
  bVar31 = (_bStack0000000000000098 & 1) != 0;
  if (bVar31) {
    unaff_R12 = in_stack_000000a8;
  }
  uVar24 = (ulong)(bStack0000000000000098 >> 1);
  if (bVar31) {
    uVar24 = CONCAT17(uStack00000000000000a7,CONCAT61(uStack00000000000000a1,cStack00000000000000a0)
                     );
  }
  if (uVar24 == 0) {
    uStack000000000000016c = 0x811c9dc5;
  }
  else {
    uVar17 = (ulong)((uint)uVar24 & 3);
    if (uVar24 < 4) {
      uStack000000000000016c = 0x811c9dc5;
      uVar27 = 0;
    }
    else {
      uStack000000000000016c = 0x811c9dc5;
      uVar27 = 0;
      do {
        uStack000000000000016c =
             ((int)*(char *)(unaff_R12 + 3 + uVar27) ^
             ((int)*(char *)(unaff_R12 + 2 + uVar27) ^
             ((int)*(char *)(unaff_R12 + 1 + uVar27) ^
             ((int)*(char *)(unaff_R12 + uVar27) ^ uStack000000000000016c) * 0x1000193) * 0x1000193)
             * 0x1000193) * 0x1000193;
        uVar27 = uVar27 + 4;
      } while ((uVar24 & 0xfffffffffffffffc) != uVar27);
    }
    if (uVar17 != 0) {
      uVar24 = 0;
      do {
        uStack000000000000016c =
             ((int)*(char *)(unaff_R12 + uVar27 + uVar24) ^ uStack000000000000016c) * 0x1000193;
        uVar24 = uVar24 + 1;
      } while (uVar17 != uVar24);
    }
  }
  in_stack_00000168 = 2;
  if ((DAT_0f7556c8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7556c8), iVar14 != 0)) {
    func_0x0e53a030();
    func_0x0410844d(&DAT_0f7556c8);
  }
  in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
  _iStack0000000000000018 = (code *)0x1;
  in_stack_00000020 = (code *)0x0;
  _uStack0000000000000028 = &UNK_0e53e3f0;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_0e539e60;
  in_stack_00000040 = &UNK_0e53e6d0;
  in_stack_00000048 = &UNK_0e53e6e0;
  in_stack_00000050 = 0;
  in_stack_00000058 = ZEXT816(0);
  func_0x048b05a0(&stack0x00000148,&stack0x00000000);
  uVar4 = in_stack_00000058._8_8_;
  if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
    LOCK();
    plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
    lVar29 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  in_stack_000001d0 = in_stack_00000158;
  in_stack_000001d8 = in_stack_00000160;
  in_stack_000001c0 = in_stack_00000148;
  in_stack_000001c8 = in_stack_00000150;
  func_0x0e53e180(&stack0x00000000,&stack0x000001c0,&stack0x00000070);
  if (iStack000000000000001c == 2) {
    piVar22 = *(int **)(in_stack_00000010[0xf] + 0x60);
    iVar14 = *piVar22;
    while (iVar14 != iStack0000000000000018) {
      piVar22 = piVar22 + 0x16;
      iVar14 = *piVar22;
    }
    lVar29 = *(long *)(piVar22 + 0xc);
    while (lVar29 != 0) {
      piVar22 = *(int **)(piVar22 + 0xe);
      lVar29 = *(long *)(piVar22 + 0xc);
    }
LAB_0e51444f:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
  }
  else {
    if (iStack000000000000001c == 1) {
      piVar22 = *(int **)(in_stack_00000010[0xf] + 0x48);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x1a;
        iVar14 = *piVar22;
      }
      goto LAB_0e51444f;
    }
    if (iStack000000000000001c == 0) {
      *(uint *)(in_stack_00000010 + 3) = *(uint *)(in_stack_00000010 + 3) | 0x90000;
    }
  }
  if (cStack0000000000000178 == '\0') {
    func_0x0e53e510(&stack0x00000000,&stack0x00000140);
  }
  uVar9 = uStack0000000000000174;
  pcVar19 = in_stack_00000140;
  if ((DAT_0f7556a8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7556a8), iVar14 != 0)) {
    func_0x0e539f20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755628,0xf53dab8);
    func_0x0410844d(&DAT_0f7556a8);
  }
  plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755628 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e5144e0;
    plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) != *(uint *)(_DAT_0f755628 + 4))
  ;
  if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e5144e0:
    puVar16 = &DAT_0f755628;
  }
  else {
    puVar16 = (undefined *)plVar20[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
  for (puVar30 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
      (puVar30 != puVar3 && (*puVar30 != uVar9)); puVar30 = puVar30 + 0xe) {
  }
  if ((puVar30 == puVar3) &&
     (cVar12 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011e7332),
     cVar12 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  func_0x05d9c620(puVar30 + 2,&stack0x0000016c,&stack0x0000016c,&stack0x00000000);
  func_0x048b0bc0(&stack0x00000070);
  if ((in_stack_00000200 & 1) != 0) {
    func_0x0412a280(in_stack_00000210,in_stack_00000200 & 0xfffffffffffffffe);
  }
  if ((DAT_0f755760 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755760), iVar14 != 0)) {
    func_0x0e53e7f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
    func_0x0410844d(&DAT_0f755760);
  }
  plVar20 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) break;
    plVar20 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar29 * 0x18) !=
           *(uint *)(_DAT_0f7556e0 + 4));
  func_0x0e53ec30(&stack0x00000180);
  pcVar19 = in_stack_00000180;
  uStack00000000000001b4 = uStack00000000000001b4 & 0xffffff00;
  cStack00000000000001b8 = '\0';
  if (cStack00000000000001b0 == '\0') {
    if ((DAT_0f755760 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755760), iVar14 != 0)) {
      func_0x0e53e7f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
      func_0x0410844d(&DAT_0f755760);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e514720;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f7556e0 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e514720:
      puVar16 = &DAT_0f7556e0;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    for (pbVar18 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar18 != *(byte **)(in_stack_00000180 + 0x58); pbVar18 = pbVar18 + 0x38) {
      bVar2 = *pbVar18;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e5147fa;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e5147fa:
        if ((bVar2 & 1) == 0) {
          pbVar26 = pbVar18 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar18 + 0x10);
        }
        auVar32[0] = -(*pbVar26 == 0x5b);
        auVar32[1] = -(pbVar26[1] == 99);
        auVar32[2] = -(pbVar26[2] == 0x65);
        auVar32[3] = -(pbVar26[3] == 0x72);
        auVar32[4] = -(pbVar26[4] == 0x65);
        auVar32[5] = -(pbVar26[5] == 0x61);
        auVar32[6] = -(pbVar26[6] == 0x6c);
        auVar32[7] = -(pbVar26[7] == 0x3a);
        auVar32[8] = -(pbVar26[8] == 100);
        auVar32[9] = -(pbVar26[9] == 0x6f);
        auVar32[10] = -(pbVar26[10] == 99);
        auVar32[0xb] = -(pbVar26[0xb] == 0x75);
        auVar32[0xc] = -(pbVar26[0xc] == 0x6d);
        auVar32[0xd] = -(pbVar26[0xd] == 0x65);
        auVar32[0xe] = -(pbVar26[0xe] == 0x6e);
        auVar32[0xf] = -(pbVar26[0xf] == 0x74);
        auVar46[0] = -(pbVar26[10] == 99);
        auVar46[1] = -(pbVar26[0xb] == 0x75);
        auVar46[2] = -(pbVar26[0xc] == 0x6d);
        auVar46[3] = -(pbVar26[0xd] == 0x65);
        auVar46[4] = -(pbVar26[0xe] == 0x6e);
        auVar46[5] = -(pbVar26[0xf] == 0x74);
        auVar46[6] = -(pbVar26[0x10] == 0x61);
        auVar46[7] = -(pbVar26[0x11] == 0x74);
        auVar46[8] = -(pbVar26[0x12] == 0x69);
        auVar46[9] = -(pbVar26[0x13] == 0x6f);
        auVar46[10] = -(pbVar26[0x14] == 0x6e);
        auVar46[0xb] = -(pbVar26[0x15] == 0x5f);
        auVar46[0xc] = -(pbVar26[0x16] == 0x74);
        auVar46[0xd] = -(pbVar26[0x17] == 0x61);
        auVar46[0xe] = -(pbVar26[0x18] == 0x67);
        auVar46[0xf] = -(pbVar26[0x19] == 0x5d);
        auVar46 = auVar46 & auVar32;
        if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar46[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e514828:
      uVar9 = uStack00000000000001ac;
      if (iStack00000000000001a8 == 0) {
        if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e5148b2;
        lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)func_0x048aead0(pcVar19 + 0x18,0,uStack00000000000001ac);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e5148b2;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar29 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e5148b2:
          lVar29 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      _bStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar19 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (code *)0x21;
      in_stack_00000148 = (code *)0x1a;
      *(ulong *)(pcVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar19 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar19 = _DAT_013bbacd;
      *(undefined8 *)(pcVar19 + 8) = uVar4;
      pcVar19[0x1a] = (code)0x0;
      in_stack_00000150 = pcVar19;
      lVar29 = func_0x048b5060(lVar29,&stack0x00000140);
      *(undefined8 *)(lVar29 + 0x20) = 0;
      if ((undefined2 *)(lVar29 + 0x20) == &stack0x00000070) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar29 + 0x40) != (code *)0x0) {
          puVar28 = (undefined8 *)(lVar29 + 0x28);
          (**(code **)(lVar29 + 0x40))(puVar28);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar28);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar28 = uVar4;
            }
          }
        }
        *(ulong *)(lVar29 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar29 + 0x40) = in_stack_00000090;
        *(uint *)(lVar29 + 0x48) = _bStack0000000000000098;
        *(char *)(lVar29 + 0x4c) = cStack000000000000009c;
        pcVar19 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar19 = in_stack_00000090;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar14 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550ad8), iVar15 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar14 == _DAT_0f550ac4) goto LAB_0e514828;
    }
    uVar11 = uStack00000000000001ba;
    uVar10 = uStack00000000000001b9;
    cVar12 = cStack00000000000001b8;
    uVar9 = uStack00000000000001b4;
    uVar5 = _cStack00000000000001b0;
    in_stack_00000260 = in_stack_000001a0;
    in_stack_00000258 = in_stack_00000198;
    pcVar8 = in_stack_00000190;
    pcVar7 = in_stack_00000188;
    pcVar19 = in_stack_00000180;
    in_stack_00000268 = CONCAT44(uStack00000000000001ac,iStack00000000000001a8);
    in_stack_00000270 = (char)_cStack00000000000001b0;
    uVar65 = SUB81(in_stack_00000190,0);
    uVar66 = (undefined5)((ulong)in_stack_00000190 >> 8);
    uVar67 = (undefined1)((ulong)in_stack_00000190 >> 0x30);
    in_stack_00000257 = (undefined1)((ulong)in_stack_00000190 >> 0x38);
    uVar60 = SUB81(in_stack_00000180,0);
    uVar61 = (undefined7)((ulong)in_stack_00000180 >> 8);
    uVar62 = SUB81(in_stack_00000188,0);
    uVar63 = (undefined5)((ulong)in_stack_00000188 >> 8);
    uVar64 = (undefined2)((ulong)in_stack_00000188 >> 0x30);
    func_0x0e5424b0(&stack0x00000070,&stack0x00000281);
    bVar31 = (_bStack0000000000000098 & 1) == 0;
    lVar29 = (long)&stack0x00000098 + 1;
    lVar21 = in_stack_000000a8;
    if (bVar31) {
      lVar21 = lVar29;
    }
    uVar24 = (ulong)(bStack0000000000000098 >> 1);
    if (!bVar31) {
      uVar24 = CONCAT17(uStack00000000000000a7,
                        CONCAT61(uStack00000000000000a1,cStack00000000000000a0));
    }
    if (uVar24 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)uVar24 & 3);
      if (uVar24 < 4) {
        uVar23 = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar27 = 0;
        do {
          uVar23 = ((int)*(char *)(lVar21 + 3 + uVar27) ^
                   ((int)*(char *)(lVar21 + 2 + uVar27) ^
                   ((int)*(char *)(lVar21 + 1 + uVar27) ^
                   ((int)*(char *)(lVar21 + uVar27) ^ uVar23) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar24 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar17 != 0) {
        uVar24 = 0;
        do {
          uVar23 = ((int)*(char *)(lVar21 + uVar27 + uVar24) ^ uVar23) * 0x1000193;
          uVar24 = uVar24 + 1;
        } while (uVar17 != uVar24);
      }
    }
    if ((DAT_0f755780 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755780), iVar14 != 0)) {
      func_0x0e53e900();
      func_0x0410844d(&DAT_0f755780);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e5429d0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e53e730;
    in_stack_00000040 = &UNK_0e542a90;
    in_stack_00000048 = &UNK_0e542aa0;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(&stack0x00000208,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar21 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000140 = pcVar7;
    in_stack_00000148 = pcVar8;
    in_stack_00000150 = in_stack_00000258;
    in_stack_00000158 = in_stack_00000260;
    func_0x0e542760(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar21 = *(long *)(piVar22 + 0xc);
      while (lVar21 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar21 = *(long *)(piVar22 + 0xc);
      }
LAB_0e514def:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e514def;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18) =
             *(uint *)((long)in_stack_00000010 + 0x18) | 0x90000;
      }
    }
    if (cVar12 == '\0') {
      func_0x0e542af0(&stack0x00000000,&stack0x00000200);
    }
    if ((DAT_0f755760 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755760), iVar14 != 0)) {
      func_0x0e53e7f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
      func_0x0410844d(&DAT_0f755760);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
    do {
      lVar21 = *plVar20;
      if (lVar21 == -1) goto LAB_0e514e80;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar21 * 0x18) !=
             *(uint *)(_DAT_0f7556e0 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e514e80:
      puVar16 = &DAT_0f7556e0;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar30 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar30 != puVar3 && (*puVar30 != uVar9)); puVar30 = puVar30 + 0xe) {
    }
    if ((puVar30 == puVar3) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121d0d5),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x05d9c620(puVar30 + 2,&stack0x0000022c,&stack0x0000022c,&stack0x00000000);
    in_stack_000001c0 = pcVar19;
    in_stack_000001c8 = pcVar7;
    in_stack_000001d0 = pcVar8;
    in_stack_000001d8 = in_stack_00000258;
    in_stack_000001e0 = in_stack_00000260;
    iStack00000000000001e8 = 2;
    uStack00000000000001ec = uVar23;
    _uStack00000000000001f0 = uVar5;
    uStack00000000000001f4 = uVar9;
    func_0x048b0bc0(&stack0x00000070);
    in_stack_00000308 = 2;
    in_stack_00000309 = 0x79;
    in_stack_0000030a = 0;
    func_0x0e5424b0(&stack0x00000070,&stack0x00000309);
    bVar31 = (_bStack0000000000000098 & 1) == 0;
    lVar21 = in_stack_000000a8;
    if (bVar31) {
      lVar21 = lVar29;
    }
    uVar24 = (ulong)(bStack0000000000000098 >> 1);
    if (!bVar31) {
      uVar24 = CONCAT17(uStack00000000000000a7,
                        CONCAT61(uStack00000000000000a1,cStack00000000000000a0));
    }
    if (uVar24 == 0) {
      uStack00000000000001ec = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)uVar24 & 3);
      if (uVar24 < 4) {
        uStack00000000000001ec = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack00000000000001ec = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack00000000000001ec =
               ((int)*(char *)(lVar21 + 3 + uVar27) ^
               ((int)*(char *)(lVar21 + 2 + uVar27) ^
               ((int)*(char *)(lVar21 + 1 + uVar27) ^
               ((int)*(char *)(lVar21 + uVar27) ^ uStack00000000000001ec) * 0x1000193) * 0x1000193)
               * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar24 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar17 != 0) {
        uVar24 = 0;
        do {
          uStack00000000000001ec =
               ((int)*(char *)(lVar21 + uVar27 + uVar24) ^ uStack00000000000001ec) * 0x1000193;
          uVar24 = uVar24 + 1;
        } while (uVar17 != uVar24);
      }
    }
    iStack00000000000001e8 = 2;
    if ((DAT_0f755780 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755780), iVar14 != 0)) {
      func_0x0e53e900();
      func_0x0410844d(&DAT_0f755780);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e5429d0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e53e730;
    in_stack_00000040 = &UNK_0e542cb0;
    in_stack_00000048 = &UNK_0e542cc0;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(&stack0x000001c8,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar21 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000150 = in_stack_000001d8;
    in_stack_00000158 = in_stack_000001e0;
    in_stack_00000140 = in_stack_000001c8;
    in_stack_00000148 = in_stack_000001d0;
    func_0x0e542760(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar21 = *(long *)(piVar22 + 0xc);
      while (lVar21 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar21 = *(long *)(piVar22 + 0xc);
      }
LAB_0e51520f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e51520f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18) =
             *(uint *)((long)in_stack_00000010 + 0x18) | 0x90000;
      }
    }
    if (cVar12 == '\0') {
      func_0x0e542af0(&stack0x00000000,&stack0x000001c0);
    }
    uVar9 = uStack00000000000001f4;
    pcVar19 = in_stack_000001c0;
    if ((DAT_0f755760 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755760), iVar14 != 0)) {
      func_0x0e53e7f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
      func_0x0410844d(&DAT_0f755760);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
    do {
      lVar21 = *plVar20;
      if (lVar21 == -1) goto LAB_0e5152a0;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar21 * 0x18) !=
             *(uint *)(_DAT_0f7556e0 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e5152a0:
      puVar16 = &DAT_0f7556e0;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar30 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar30 != puVar3 && (*puVar30 != uVar9)); puVar30 = puVar30 + 0xe) {
    }
    if ((puVar30 == puVar3) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121d0d5),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x05d9c620(puVar30 + 2,(long)&stack0x000001e8 + 4,(long)&stack0x000001e8 + 4,
                    &stack0x00000000);
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = in_stack_000001c8;
    in_stack_00000150 = in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    in_stack_00000168 = iStack00000000000001e8;
    uStack000000000000016c = uStack00000000000001ec;
    in_stack_00000170 = _uStack00000000000001f0;
    uStack0000000000000174 = uStack00000000000001f4;
    cStack0000000000000178 = cVar12;
    uStack0000000000000179 = uVar10;
    uStack000000000000017a = uVar11;
    func_0x048b0bc0(&stack0x00000070);
    func_0x0e5424b0(&stack0x00000070);
    bVar31 = (_bStack0000000000000098 & 1) != 0;
    if (bVar31) {
      lVar29 = in_stack_000000a8;
    }
    uVar24 = (ulong)(bStack0000000000000098 >> 1);
    if (bVar31) {
      uVar24 = CONCAT17(uStack00000000000000a7,
                        CONCAT61(uStack00000000000000a1,cStack00000000000000a0));
    }
    if (uVar24 == 0) {
      uStack000000000000016c = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)uVar24 & 3);
      if (uVar24 < 4) {
        uStack000000000000016c = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack000000000000016c = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack000000000000016c =
               ((int)*(char *)(lVar29 + 3 + uVar27) ^
               ((int)*(char *)(lVar29 + 2 + uVar27) ^
               ((int)*(char *)(lVar29 + 1 + uVar27) ^
               ((int)*(char *)(lVar29 + uVar27) ^ uStack000000000000016c) * 0x1000193) * 0x1000193)
               * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar24 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar17 != 0) {
        uVar24 = 0;
        do {
          uStack000000000000016c =
               ((int)*(char *)(lVar29 + uVar27 + uVar24) ^ uStack000000000000016c) * 0x1000193;
          uVar24 = uVar24 + 1;
        } while (uVar17 != uVar24);
      }
    }
    in_stack_00000168 = 2;
    if ((DAT_0f755780 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755780), iVar14 != 0)) {
      func_0x0e53e900();
      func_0x0410844d(&DAT_0f755780);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e5429d0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e53e730;
    in_stack_00000040 = &UNK_0e542d10;
    in_stack_00000048 = &UNK_0e542d20;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(&stack0x00000148,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_000002c0 = in_stack_00000148;
    func_0x0e542760(&stack0x00000000,&stack0x000002c0,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(in_stack_00000010[0xf] + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e51560f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(in_stack_00000010[0xf] + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e51560f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)(in_stack_00000010 + 3) = *(uint *)(in_stack_00000010 + 3) | 0x90000;
      }
    }
    if (cStack0000000000000178 == '\0') {
      func_0x0e542af0(&stack0x00000000,&stack0x00000140);
    }
    uVar9 = uStack0000000000000174;
    pcVar19 = in_stack_00000140;
    if ((DAT_0f755760 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755760), iVar14 != 0)) {
      func_0x0e53e7f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7556e0,0xf53dab8);
      func_0x0410844d(&DAT_0f755760);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7556e0 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e5156a0;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f7556e0 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e5156a0:
      puVar16 = &DAT_0f7556e0;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar30 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar30 != puVar3 && (*puVar30 != uVar9)); puVar30 = puVar30 + 0xe) {
    }
    if ((puVar30 == puVar3) &&
       (cVar12 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121d0d5),
       cVar12 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x05d9c620(puVar30 + 2,&stack0x0000016c,&stack0x0000016c,&stack0x00000000);
    func_0x048b0bc0(&stack0x00000070);
  }
  if ((DAT_0f755818 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755818), iVar14 != 0)) {
    func_0x0e542e30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755798,0xf53dab8);
    func_0x0410844d(&DAT_0f755818);
  }
  plVar20 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f755798 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e5157e0;
    plVar20 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar29 * 0x18) !=
           *(uint *)(_DAT_0f755798 + 4));
  if (plVar20 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e5157e0:
    puVar16 = &DAT_0f755798;
    if (iRam000000000f7557f8 != -0x2b3da790) goto LAB_0e51584d;
LAB_0e51580b:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0e51584d;
    func_0x0e543210(&stack0x00000180);
    pcVar19 = in_stack_00000180;
  }
  else {
    puVar16 = (undefined *)plVar20[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e51580b;
LAB_0e51584d:
    func_0x0e543210(&stack0x00000180);
    pcVar19 = in_stack_00000180;
  }
  in_stack_00000180 = pcVar19;
  if (cStack00000000000001b0 == '\0') {
    if ((DAT_0f755818 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755818), iVar14 != 0)) {
      func_0x0e542e30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755798,0xf53dab8);
      func_0x0410844d(&DAT_0f755818);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755798 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e5158e0;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f755798 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e5158e0:
      puVar16 = &DAT_0f755798;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    for (pbVar18 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar18 != *(byte **)(in_stack_00000180 + 0x58); pbVar18 = pbVar18 + 0x38) {
      bVar2 = *pbVar18;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e5159ba;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e5159ba:
        if ((bVar2 & 1) == 0) {
          pbVar26 = pbVar18 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar18 + 0x10);
        }
        auVar33[0] = -(*pbVar26 == 0x5b);
        auVar33[1] = -(pbVar26[1] == 99);
        auVar33[2] = -(pbVar26[2] == 0x65);
        auVar33[3] = -(pbVar26[3] == 0x72);
        auVar33[4] = -(pbVar26[4] == 0x65);
        auVar33[5] = -(pbVar26[5] == 0x61);
        auVar33[6] = -(pbVar26[6] == 0x6c);
        auVar33[7] = -(pbVar26[7] == 0x3a);
        auVar33[8] = -(pbVar26[8] == 100);
        auVar33[9] = -(pbVar26[9] == 0x6f);
        auVar33[10] = -(pbVar26[10] == 99);
        auVar33[0xb] = -(pbVar26[0xb] == 0x75);
        auVar33[0xc] = -(pbVar26[0xc] == 0x6d);
        auVar33[0xd] = -(pbVar26[0xd] == 0x65);
        auVar33[0xe] = -(pbVar26[0xe] == 0x6e);
        auVar33[0xf] = -(pbVar26[0xf] == 0x74);
        auVar47[0] = -(pbVar26[10] == 99);
        auVar47[1] = -(pbVar26[0xb] == 0x75);
        auVar47[2] = -(pbVar26[0xc] == 0x6d);
        auVar47[3] = -(pbVar26[0xd] == 0x65);
        auVar47[4] = -(pbVar26[0xe] == 0x6e);
        auVar47[5] = -(pbVar26[0xf] == 0x74);
        auVar47[6] = -(pbVar26[0x10] == 0x61);
        auVar47[7] = -(pbVar26[0x11] == 0x74);
        auVar47[8] = -(pbVar26[0x12] == 0x69);
        auVar47[9] = -(pbVar26[0x13] == 0x6f);
        auVar47[10] = -(pbVar26[0x14] == 0x6e);
        auVar47[0xb] = -(pbVar26[0x15] == 0x5f);
        auVar47[0xc] = -(pbVar26[0x16] == 0x74);
        auVar47[0xd] = -(pbVar26[0x17] == 0x61);
        auVar47[0xe] = -(pbVar26[0x18] == 0x67);
        auVar47[0xf] = -(pbVar26[0x19] == 0x5d);
        auVar47 = auVar47 & auVar33;
        if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e5159e8:
      uVar9 = uStack00000000000001ac;
      if (iStack00000000000001a8 == 0) {
        if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e515acb;
        lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)func_0x048aead0(pcVar19 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e515acb;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar29 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e515acb:
          lVar29 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      _bStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (code *)0x21;
      in_stack_00000148 = (code *)0x1a;
      *(ulong *)((long)puVar28 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar28 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar28 = _DAT_013bbacd;
      puVar28[1] = uVar4;
      *(undefined1 *)((long)puVar28 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar28;
      lVar29 = func_0x048b5060(lVar29,&stack0x00000140);
      *(undefined8 *)(lVar29 + 0x20) = 0;
      if ((undefined2 *)(lVar29 + 0x20) == &stack0x00000070) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar29 + 0x40) != (code *)0x0) {
          puVar28 = (undefined8 *)(lVar29 + 0x28);
          (**(code **)(lVar29 + 0x40))(puVar28);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar28);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar28 = uVar4;
            }
          }
        }
        *(ulong *)(lVar29 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar29 + 0x40) = in_stack_00000090;
        *(uint *)(lVar29 + 0x48) = _bStack0000000000000098;
        *(char *)(lVar29 + 0x4c) = cStack000000000000009c;
        pcVar19 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar19 = in_stack_00000090;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar14 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550ad8), iVar15 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar14 == _DAT_0f550ac4) goto LAB_0e5159e8;
    }
    _uStack00000000000001f0 = _cStack00000000000001b0;
    uStack00000000000001f4 = uStack00000000000001b4;
    in_stack_000001e0 = in_stack_000001a0;
    iStack00000000000001e8 = iStack00000000000001a8;
    uStack00000000000001ec = uStack00000000000001ac;
    in_stack_000001d0 = in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_00000160 = in_stack_000001a0;
    in_stack_00000140 = in_stack_00000180;
    in_stack_00000148 = in_stack_00000188;
    in_stack_00000150 = in_stack_00000190;
    in_stack_00000158 = in_stack_00000198;
    in_stack_00000170 = _cStack00000000000001b0;
    uStack0000000000000174 = uStack00000000000001b4;
    in_stack_00000168 = 2;
    uStack000000000000016c = 0x5c17b12b;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    _uStack00000000000000b0 = (undefined1  [16])0x0;
    cStack00000000000000a0 = 0;
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    _uStack0000000000000070 = (undefined1  [16])0x0;
    uStack00000000000000e0 = 0x3f600000;
    func_0x048afb10(&stack0x000000b0,8);
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    in_stack_00000100 = 0;
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack0000000000000118 = 0xff00;
    uStack000000000000011c = uStack000000000000011c & 0xffffff00;
    uStack0000000000000120 = uStack0000000000000120 & 0xffffff00;
    _uStack0000000000000124 = _uStack0000000000000124 & 0xffffff00;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar28;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((_bStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          _bStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    _bStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 0x74;
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755838 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755838), iVar14 != 0)) {
      func_0x0e542f40();
      func_0x0410844d(&DAT_0f755838);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e535290;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e530ec0;
    in_stack_00000040 = &UNK_0e543d20;
    in_stack_00000048 = &UNK_0e543d30;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(&stack0x00000148,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcVar8 = in_stack_00000160;
    pcVar7 = in_stack_00000158;
    pcVar19 = in_stack_00000150;
    if ((DAT_0f550a20 == '\0') && (iVar14 = func_0x04108328(&DAT_0f550a20), iVar14 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar20 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar20 + 1) = (undefined1  [16])0x0;
    *plVar20 = (long)&UNK_0ef439d0;
    uVar4 = _uStack0000000000000070;
    uVar6 = auStack0000000000000072._6_8_;
    _uStack0000000000000070 = (undefined1  [16])0x0;
    plVar20[3] = uVar4;
    plVar20[4] = uVar6;
    plVar20[7] = (long)in_stack_00000090;
    plVar20[5] = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    plVar20[6] = CONCAT44(iStack000000000000008c,iStack0000000000000088);
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    plVar20[10] = in_stack_000000a8;
    plVar20[8] = CONCAT17(uStack000000000000009f,
                          CONCAT16(uStack000000000000009e,
                                   CONCAT15(uStack000000000000009d,
                                            CONCAT14(cStack000000000000009c,_bStack0000000000000098)
                                           )));
    plVar20[9] = CONCAT17(uStack00000000000000a7,
                          CONCAT61(uStack00000000000000a1,cStack00000000000000a0));
    _bStack0000000000000098 = 0;
    cStack000000000000009c = '\0';
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    cStack00000000000000a0 = '\0';
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    plVar20[0xb] = _uStack00000000000000b0;
    plVar20[0xc] = stack0x000000b8;
    plVar20[0xd] = in_stack_000000c0;
    _uStack00000000000000b0 = (undefined1  [16])0x0;
    in_stack_000000c0 = 0;
    plVar20[0xe] = in_stack_000000c8;
    plVar20[0xf] = in_stack_000000d0;
    plVar20[0x10] = in_stack_000000d8;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    *(undefined4 *)(plVar20 + 0x11) = uStack00000000000000e0;
    plVar20[0x12] = uStack00000000000000e8;
    plVar20[0x13] = uStack00000000000000f0;
    plVar20[0x14] = CONCAT44(uStack00000000000000fc,uStack00000000000000f8);
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    plVar20[0x17] = in_stack_00000110;
    plVar20[0x15] = in_stack_00000100;
    plVar20[0x16] = in_stack_00000108;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    *(ulong *)((long)plVar20 + 0xc5) =
         CONCAT17(uStack0000000000000124,
                  CONCAT43(uStack0000000000000120,uStack000000000000011c._1_3_));
    plVar20[0x18] =
         CONCAT44(uStack000000000000011c,CONCAT22(uStack000000000000011a,uStack0000000000000118));
    uVar60 = 0;
    uVar61 = 0;
    uVar62 = 0;
    uVar63 = 0;
    uVar64 = 0;
    in_stack_00000010 = plVar20;
    func_0x048afd20(&stack0x00000200,&stack0x00000000);
    plVar20 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000010 + 1;
      lVar29 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*in_stack_00000010 + 0x10))(in_stack_00000010);
        func_0x0412c2d0(plVar20);
      }
    }
    iVar14 = (int)pcVar8;
    iVar15 = (int)((ulong)pcVar8 >> 0x20);
    if (iVar15 == 2) {
      piVar22 = *(int **)(*(long *)(pcVar7 + 0x78) + 0x60);
      iVar15 = *piVar22;
      while (iVar15 != iVar14) {
        piVar22 = piVar22 + 0x16;
        iVar15 = *piVar22;
      }
      for (; *(code **)(piVar22 + 0xc) != pcVar19; piVar22 = *(int **)(piVar22 + 0xe)) {
      }
LAB_0e51623a:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iVar15 == 1) {
        piVar22 = *(int **)(*(long *)(pcVar7 + 0x78) + 0x48);
        iVar15 = *piVar22;
        while (iVar15 != iVar14) {
          piVar22 = piVar22 + 0x1a;
          iVar15 = *piVar22;
        }
        goto LAB_0e51623a;
      }
      if (iVar15 == 0) {
        pcVar7[0x1a] = (code)((byte)pcVar7[0x1a] | 9);
      }
    }
    func_0x048b0bc0(&stack0x00000070);
  }
  if ((DAT_0f7558d0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7558d0), iVar14 != 0)) {
    func_0x0e543e40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
    func_0x0410844d(&DAT_0f7558d0);
  }
  plVar20 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f755850 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e5162b0;
    plVar20 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar29 * 0x18) !=
           *(uint *)(_DAT_0f755850 + 4));
  if (plVar20 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e5162b0:
    puVar16 = &DAT_0f755850;
    if (iRam000000000f7558b0 != -0x2b3da790) goto LAB_0e51631d;
LAB_0e5162db:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0e51631d;
    func_0x0e5444e0(&stack0x00000180);
  }
  else {
    puVar16 = (undefined *)plVar20[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e5162db;
LAB_0e51631d:
    func_0x0e5444e0(&stack0x00000180);
  }
  if (cStack00000000000001b0 == '\0') {
    func_0x0c0bcb30();
    pcVar19 = in_stack_00000180;
    if ((DAT_0f7558d0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7558d0), iVar14 != 0)) {
      func_0x0e543e40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
      func_0x0410844d(&DAT_0f7558d0);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755850 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e5163c0;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f755850 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e5163c0:
      puVar16 = &DAT_0f755850;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    for (pbVar18 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar18 != *(byte **)(in_stack_00000180 + 0x58); pbVar18 = pbVar18 + 0x38) {
      bVar2 = *pbVar18;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e51649a;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e51649a:
        if ((bVar2 & 1) == 0) {
          pbVar26 = pbVar18 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar18 + 0x10);
        }
        auVar34[0] = -(*pbVar26 == 0x5b);
        auVar34[1] = -(pbVar26[1] == 99);
        auVar34[2] = -(pbVar26[2] == 0x65);
        auVar34[3] = -(pbVar26[3] == 0x72);
        auVar34[4] = -(pbVar26[4] == 0x65);
        auVar34[5] = -(pbVar26[5] == 0x61);
        auVar34[6] = -(pbVar26[6] == 0x6c);
        auVar34[7] = -(pbVar26[7] == 0x3a);
        auVar34[8] = -(pbVar26[8] == 100);
        auVar34[9] = -(pbVar26[9] == 0x6f);
        auVar34[10] = -(pbVar26[10] == 99);
        auVar34[0xb] = -(pbVar26[0xb] == 0x75);
        auVar34[0xc] = -(pbVar26[0xc] == 0x6d);
        auVar34[0xd] = -(pbVar26[0xd] == 0x65);
        auVar34[0xe] = -(pbVar26[0xe] == 0x6e);
        auVar34[0xf] = -(pbVar26[0xf] == 0x74);
        auVar48[0] = -(pbVar26[10] == 99);
        auVar48[1] = -(pbVar26[0xb] == 0x75);
        auVar48[2] = -(pbVar26[0xc] == 0x6d);
        auVar48[3] = -(pbVar26[0xd] == 0x65);
        auVar48[4] = -(pbVar26[0xe] == 0x6e);
        auVar48[5] = -(pbVar26[0xf] == 0x74);
        auVar48[6] = -(pbVar26[0x10] == 0x61);
        auVar48[7] = -(pbVar26[0x11] == 0x74);
        auVar48[8] = -(pbVar26[0x12] == 0x69);
        auVar48[9] = -(pbVar26[0x13] == 0x6f);
        auVar48[10] = -(pbVar26[0x14] == 0x6e);
        auVar48[0xb] = -(pbVar26[0x15] == 0x5f);
        auVar48[0xc] = -(pbVar26[0x16] == 0x74);
        auVar48[0xd] = -(pbVar26[0x17] == 0x61);
        auVar48[0xe] = -(pbVar26[0x18] == 0x67);
        auVar48[0xf] = -(pbVar26[0x19] == 0x5d);
        auVar48 = auVar48 & auVar34;
        if ((ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e5164c8:
      uVar9 = uStack00000000000001ac;
      if (iStack00000000000001a8 == 0) {
        if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e516550;
        lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)func_0x048aead0(pcVar19 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e516550;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar29 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e516550:
          lVar29 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      _bStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar19 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (code *)0x21;
      in_stack_00000148 = (code *)0x1a;
      *(ulong *)(pcVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar19 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar19 = _DAT_013bbacd;
      *(undefined8 *)(pcVar19 + 8) = uVar4;
      pcVar19[0x1a] = (code)0x0;
      in_stack_00000150 = pcVar19;
      lVar29 = func_0x048b5060(lVar29,&stack0x00000140);
      *(undefined8 *)(lVar29 + 0x20) = 0;
      if ((undefined2 *)(lVar29 + 0x20) == &stack0x00000070) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar29 + 0x40) != (code *)0x0) {
          puVar28 = (undefined8 *)(lVar29 + 0x28);
          (**(code **)(lVar29 + 0x40))(puVar28);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar28);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar28 = uVar4;
            }
          }
        }
        *(ulong *)(lVar29 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar29 + 0x40) = in_stack_00000090;
        *(uint *)(lVar29 + 0x48) = _bStack0000000000000098;
        *(char *)(lVar29 + 0x4c) = cStack000000000000009c;
        pcVar19 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar19 = in_stack_00000090;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar14 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550ad8), iVar15 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar14 == _DAT_0f550ac4) goto LAB_0e5164c8;
    }
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_000001d0 = in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    _uStack00000000000001f0 = _cStack00000000000001b0;
    uStack00000000000001f4 = uStack00000000000001b4;
    iStack00000000000001e8 = 2;
    uStack00000000000001ec = 0x5c17b12b;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    _uStack00000000000000b0 = (undefined1  [16])0x0;
    cStack00000000000000a0 = 0;
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    _uStack0000000000000070 = (undefined1  [16])0x0;
    uStack00000000000000e0 = 0x3f600000;
    func_0x048afb10(&stack0x000000b0,8);
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    in_stack_00000100 = 0;
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack0000000000000118 = 0xff00;
    uStack000000000000011c = uStack000000000000011c & 0xffffff00;
    uStack0000000000000120 = uStack0000000000000120 & 0xffffff00;
    _uStack0000000000000124 = _uStack0000000000000124 & 0xffffff00;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar28;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((_bStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          _bStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    _bStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 0x74;
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f7558f0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7558f0), iVar14 != 0)) {
      func_0x0e543f50();
      func_0x0410844d(&DAT_0f7558f0);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e535290;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e530ec0;
    in_stack_00000040 = &UNK_0e5452b0;
    in_stack_00000048 = &UNK_0e5452c0;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(&stack0x000001c8,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000150 = in_stack_000001d8;
    in_stack_00000158 = in_stack_000001e0;
    in_stack_00000140 = in_stack_000001c8;
    in_stack_00000148 = in_stack_000001d0;
    func_0x0e545040(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e516a0f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e516a0f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = in_stack_000001c8;
    in_stack_00000150 = in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    in_stack_00000168 = iStack00000000000001e8;
    uStack000000000000016c = uStack00000000000001ec;
    in_stack_00000170 = CONCAT31(in_stack_00000170._1_3_,uStack00000000000001f0);
    func_0x048b0bc0(&stack0x00000070);
    if ((DAT_0f7558f0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7558f0), iVar14 != 0)) {
      func_0x0e543f50();
      func_0x0410844d(&DAT_0f7558f0);
    }
    pcVar19 = in_stack_00000140;
    in_stack_00000168 = 1;
    uStack000000000000016c = 0xeb0cbd62;
    if ((DAT_0f7558d0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7558d0), iVar14 != 0)) {
      func_0x0e543e40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
      func_0x0410844d(&DAT_0f7558d0);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755850 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e516af0;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f755850 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e516af0:
      _uStack0000000000000070 = &DAT_0f755850;
    }
    else {
      _uStack0000000000000070 = (undefined *)plVar20[2];
    }
    auStack0000000000000072._6_8_ = pcVar19 + 0x18;
    func_0x0ed621a0(&stack0x00000070,uStack000000000000016c);
    uStack0000000000000070 = 1;
    auStack0000000000000072._6_8_ = &stack0x00000148;
    uStack0000000000000080 = uStack000000000000016c;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = '\0';
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    cStack00000000000000a0 = '\0';
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    _uStack00000000000000b0 = 0x6b636f6c620a;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    uStack00000000000000e0 = 0;
    uStack00000000000000e4 = 0;
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack00000000000000f8 = 0x3f600000;
    func_0x048afb10(&stack0x000000c8,8);
    uStack0000000000000120 = 0;
    _uStack0000000000000124 = 0;
    in_stack_00000128 = 0;
    in_stack_00000110 = 0;
    uStack0000000000000118 = 0;
    uStack000000000000011a = 0;
    uStack000000000000011c = 0;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    uStack0000000000000130 = 0xff00;
    uStack0000000000000134 = 0;
    uStack0000000000000138 = 0;
    uStack000000000000013c = 0;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f351458;
    plVar20 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar28;
    iStack000000000000008c = (int)((ulong)puVar28 >> 0x20);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0c0fab90;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &SUB_0c0f51d0;
    in_stack_00000040 = &UNK_0e545310;
    in_stack_00000048 = &UNK_0e5454d0;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e545040(&stack0x00000000,auStack0000000000000072._6_8_,&stack0x00000088);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(in_stack_00000010[0xf] + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e516daf:
      piVar22[4] = piVar22[4] | _uStack0000000000000070 << 0x10;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(in_stack_00000010[0xf] + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e516daf;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)(in_stack_00000010 + 3) =
             *(uint *)(in_stack_00000010 + 3) | _uStack0000000000000070 << 0x10;
      }
    }
    func_0x048b0bc0(&stack0x00000088);
  }
  if ((DAT_0f755988 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755988), iVar14 != 0)) {
    func_0x0e545760();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
    func_0x0410844d(&DAT_0f755988);
  }
  plVar20 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e516e20;
    plVar20 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar29 * 0x18) !=
           *(uint *)(_DAT_0f755908 + 4));
  if (plVar20 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e516e20:
    puVar16 = &DAT_0f755908;
    if (iRam000000000f755968 != -0x2b3da790) goto LAB_0e516e8d;
LAB_0e516e4b:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0e516e8d;
    func_0x0e545e00(&stack0x00000180);
  }
  else {
    puVar16 = (undefined *)plVar20[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e516e4b;
LAB_0e516e8d:
    func_0x0e545e00(&stack0x00000180);
  }
  if (cStack00000000000001b0 == '\0') {
    func_0x0c0bcb30();
    pcVar19 = in_stack_00000180;
    if ((DAT_0f755988 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755988), iVar14 != 0)) {
      func_0x0e545760();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
      func_0x0410844d(&DAT_0f755988);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e516f30;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f755908 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e516f30:
      puVar16 = &DAT_0f755908;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    for (pbVar18 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar18 != *(byte **)(in_stack_00000180 + 0x58); pbVar18 = pbVar18 + 0x38) {
      bVar2 = *pbVar18;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e51700a;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e51700a:
        if ((bVar2 & 1) == 0) {
          pbVar26 = pbVar18 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar18 + 0x10);
        }
        auVar35[0] = -(*pbVar26 == 0x5b);
        auVar35[1] = -(pbVar26[1] == 99);
        auVar35[2] = -(pbVar26[2] == 0x65);
        auVar35[3] = -(pbVar26[3] == 0x72);
        auVar35[4] = -(pbVar26[4] == 0x65);
        auVar35[5] = -(pbVar26[5] == 0x61);
        auVar35[6] = -(pbVar26[6] == 0x6c);
        auVar35[7] = -(pbVar26[7] == 0x3a);
        auVar35[8] = -(pbVar26[8] == 100);
        auVar35[9] = -(pbVar26[9] == 0x6f);
        auVar35[10] = -(pbVar26[10] == 99);
        auVar35[0xb] = -(pbVar26[0xb] == 0x75);
        auVar35[0xc] = -(pbVar26[0xc] == 0x6d);
        auVar35[0xd] = -(pbVar26[0xd] == 0x65);
        auVar35[0xe] = -(pbVar26[0xe] == 0x6e);
        auVar35[0xf] = -(pbVar26[0xf] == 0x74);
        auVar49[0] = -(pbVar26[10] == 99);
        auVar49[1] = -(pbVar26[0xb] == 0x75);
        auVar49[2] = -(pbVar26[0xc] == 0x6d);
        auVar49[3] = -(pbVar26[0xd] == 0x65);
        auVar49[4] = -(pbVar26[0xe] == 0x6e);
        auVar49[5] = -(pbVar26[0xf] == 0x74);
        auVar49[6] = -(pbVar26[0x10] == 0x61);
        auVar49[7] = -(pbVar26[0x11] == 0x74);
        auVar49[8] = -(pbVar26[0x12] == 0x69);
        auVar49[9] = -(pbVar26[0x13] == 0x6f);
        auVar49[10] = -(pbVar26[0x14] == 0x6e);
        auVar49[0xb] = -(pbVar26[0x15] == 0x5f);
        auVar49[0xc] = -(pbVar26[0x16] == 0x74);
        auVar49[0xd] = -(pbVar26[0x17] == 0x61);
        auVar49[0xe] = -(pbVar26[0x18] == 0x67);
        auVar49[0xf] = -(pbVar26[0x19] == 0x5d);
        auVar49 = auVar49 & auVar35;
        if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar49[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e517038:
      uVar9 = uStack00000000000001ac;
      if (iStack00000000000001a8 == 0) {
        if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e5170c2;
        lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)func_0x048aead0(pcVar19 + 0x18,0,uStack00000000000001ac);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e5170c2;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar29 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e5170c2:
          lVar29 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      _bStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar19 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (code *)0x21;
      in_stack_00000148 = (code *)0x1a;
      *(ulong *)(pcVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar19 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar19 = _DAT_013bbacd;
      *(undefined8 *)(pcVar19 + 8) = uVar4;
      pcVar19[0x1a] = (code)0x0;
      in_stack_00000150 = pcVar19;
      lVar29 = func_0x048b5060(lVar29,&stack0x00000140);
      *(undefined8 *)(lVar29 + 0x20) = 0;
      if ((undefined2 *)(lVar29 + 0x20) == &stack0x00000070) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar29 + 0x40) != (code *)0x0) {
          puVar28 = (undefined8 *)(lVar29 + 0x28);
          (**(code **)(lVar29 + 0x40))(puVar28);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar28);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar28 = uVar4;
            }
          }
        }
        *(ulong *)(lVar29 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar29 + 0x40) = in_stack_00000090;
        *(uint *)(lVar29 + 0x48) = _bStack0000000000000098;
        *(char *)(lVar29 + 0x4c) = cStack000000000000009c;
        pcVar19 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar19 = in_stack_00000090;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar14 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550ad8), iVar15 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar14 == _DAT_0f550ac4) goto LAB_0e517038;
    }
    in_stack_00000260 = in_stack_000001a0;
    in_stack_00000258 = in_stack_00000198;
    pcVar7 = in_stack_00000190;
    pcVar19 = in_stack_00000188;
    in_stack_000002c0 = in_stack_00000180;
    in_stack_00000270 = (char)_cStack00000000000001b0;
    uVar60 = SUB81(in_stack_00000180,0);
    uVar61 = (undefined7)((ulong)in_stack_00000180 >> 8);
    uVar62 = SUB81(in_stack_00000188,0);
    uVar63 = (undefined5)((ulong)in_stack_00000188 >> 8);
    uVar64 = (undefined2)((ulong)in_stack_00000188 >> 0x30);
    uVar65 = SUB81(in_stack_00000190,0);
    uVar66 = (undefined5)((ulong)in_stack_00000190 >> 8);
    uVar67 = (undefined1)((ulong)in_stack_00000190 >> 0x30);
    in_stack_00000257 = (undefined1)((ulong)in_stack_00000190 >> 0x38);
    in_stack_00000268 = 0x5c17b12b00000002;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    _uStack00000000000000b0 = (undefined1  [16])0x0;
    cStack00000000000000a0 = 0;
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    _uStack0000000000000070 = (undefined1  [16])0x0;
    uStack00000000000000e0 = 0x3f600000;
    func_0x048afb10(&stack0x000000b0,8);
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    in_stack_00000100 = 0;
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack0000000000000118 = 0xff00;
    uStack000000000000011c = uStack000000000000011c & 0xffffff00;
    uStack0000000000000120 = uStack0000000000000120 & 0xffffff00;
    _uStack0000000000000124 = _uStack0000000000000124 & 0xffffff00;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar28;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((_bStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          _bStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    _bStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 'd';
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 't';
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f7559a8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7559a8), iVar14 != 0)) {
      func_0x0e545870();
      func_0x0410844d(&DAT_0f7559a8);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e535290;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e530ec0;
    in_stack_00000040 = &UNK_0e546bd0;
    in_stack_00000048 = &UNK_0e546be0;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(&stack0x00000248,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000140 = pcVar19;
    in_stack_00000148 = pcVar7;
    in_stack_00000150 = in_stack_00000258;
    in_stack_00000158 = in_stack_00000260;
    func_0x0e546960(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e5175cf:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e5175cf;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    func_0x048b0bc0(&stack0x00000070);
    func_0x0e546c30(&stack0x00000070,&stack0x00000200,&UNK_01447599,5);
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f351458;
    plVar20 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar28;
    iStack000000000000008c = (int)((ulong)puVar28 >> 0x20);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0c0fab90;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &SUB_0c0f51d0;
    in_stack_00000040 = &UNK_0e546fb0;
    in_stack_00000048 = &UNK_0e547170;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e546ee0(&stack0x00000070);
    _uStack00000000000001f0 = CONCAT31(uStack00000000000001f1,in_stack_00000270);
    in_stack_000001c0 = in_stack_000002c0;
    in_stack_000001c8 = pcVar19;
    in_stack_000001d0 = pcVar7;
    in_stack_000001d8 = in_stack_00000258;
    in_stack_000001e0 = in_stack_00000260;
    iStack00000000000001e8 = 2;
    uStack00000000000001ec = 0x5c17b12b;
    func_0x048b0bc0(&stack0x00000088);
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = in_stack_000001c8;
    in_stack_00000150 = in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    in_stack_00000168 = iStack00000000000001e8;
    uStack000000000000016c = uStack00000000000001ec;
    in_stack_00000170 = _uStack00000000000001f0;
    uStack0000000000000174 = uStack00000000000001f4;
    func_0x0e546c30(&stack0x00000070,&stack0x00000140,&UNK_013fcdf9,0xb);
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f0126a0;
    plVar20 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar28;
    iStack000000000000008c = (int)((ulong)puVar28 >> 0x20);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_05daeda0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_05daea90;
    in_stack_00000040 = &UNK_0e547340;
    in_stack_00000048 = &UNK_0e5474a0;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e546ee0(&stack0x00000070);
    uVar9 = uStack000000000000016c;
    iVar14 = in_stack_00000168;
    pcVar19 = in_stack_00000140;
    func_0x048b0bc0(&stack0x00000088);
    if (iVar14 == 4) {
      if ((DAT_0f755988 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755988), iVar14 != 0)) {
        func_0x0e545760();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
        func_0x0410844d(&DAT_0f755988);
      }
      plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
      do {
        lVar29 = *plVar20;
        if (lVar29 == -1) goto LAB_0e517a18;
        plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
      } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
               *(uint *)(_DAT_0f755908 + 4));
      if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e517a18:
        puVar16 = &DAT_0f755908;
      }
      else {
        puVar16 = (undefined *)plVar20[2];
      }
      lVar29 = func_0x048b1040(pcVar19 + 0x18,puVar16,uVar9,1);
      if (lVar29 == 0) {
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b10d0(&stack0x00000070);
        lVar21 = *(long *)((long)_uStack0000000000000070 + 0x38);
        lVar29 = (long)_uStack0000000000000070;
        if (lVar21 == 0) goto LAB_0e517b35;
LAB_0e517b51:
        do {
          lVar29 = lVar21;
          lVar21 = *(long *)(lVar29 + 0x38);
          if (*(long *)(lVar29 + 0x38) == 0) {
            _uStack0000000000000070 = ZEXT816(0);
            func_0x048b10d0(&stack0x00000070);
            lVar21 = (long)_uStack0000000000000070;
          }
        } while (lVar21 != 0);
      }
      else {
        lVar21 = *(long *)(lVar29 + 0x38);
        if (*(long *)(lVar29 + 0x38) != 0) goto LAB_0e517b51;
LAB_0e517b35:
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b10d0(&stack0x00000070);
        lVar21 = (long)_uStack0000000000000070;
        if (_uStack0000000000000070 != (undefined *)0x0) goto LAB_0e517b51;
      }
      lVar29 = *(long *)(lVar29 + 0x48);
      puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar14 != 1) goto LAB_0e517c0f;
      if ((DAT_0f755988 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755988), iVar14 != 0)) {
        func_0x0e545760();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
        func_0x0410844d(&DAT_0f755988);
      }
      plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
      do {
        lVar29 = *plVar20;
        if (lVar29 == -1) goto LAB_0e517998;
        plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
      } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
               *(uint *)(_DAT_0f755908 + 4));
      if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e517998:
        puVar16 = &DAT_0f755908;
      }
      else {
        puVar16 = (undefined *)plVar20[2];
      }
      lVar29 = func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
      if (lVar29 == 0) {
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b0d20(&stack0x00000070);
        lVar29 = (long)_uStack0000000000000070;
      }
      lVar29 = *(long *)(lVar29 + 0x58);
      puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar28[1] = 0xffffffffffffffff;
    puVar28[2] = 0;
    *(undefined1 *)(puVar28 + 3) = 0xff;
    *puVar28 = &UNK_0f0edc68;
    uVar4 = _DAT_014f0478;
    puVar28[4] = 0;
    puVar28[5] = uVar4;
    puVar28[6] = 0;
    *(undefined2 *)(puVar28 + 7) = 0;
    *(undefined4 *)((long)puVar28 + 0x3a) = 0;
    *(undefined2 *)((long)puVar28 + 0x3e) = 0;
    plVar20 = *(long **)(lVar29 + 8);
    *(undefined8 **)(lVar29 + 8) = puVar28;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x28))();
    }
  }
LAB_0e517c0f:
  if ((DAT_0f755a40 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755a40), iVar14 != 0)) {
    func_0x0e547740();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
    func_0x0410844d(&DAT_0f755a40);
  }
  plVar20 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f7559c0 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e517c70;
    plVar20 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar29 * 0x18) !=
           *(uint *)(_DAT_0f7559c0 + 4));
  if (plVar20 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e517c70:
    puVar16 = &DAT_0f7559c0;
    if (iRam000000000f755a20 != -0x2b3da790) goto LAB_0e517cdd;
LAB_0e517c9b:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0e517cdd;
    func_0x0e547de0(&stack0x00000180);
    pcVar19 = in_stack_00000180;
  }
  else {
    puVar16 = (undefined *)plVar20[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e517c9b;
LAB_0e517cdd:
    func_0x0e547de0(&stack0x00000180);
    pcVar19 = in_stack_00000180;
  }
  in_stack_00000180 = pcVar19;
  if (cStack00000000000001b0 == '\0') {
    if ((DAT_0f755a40 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755a40), iVar14 != 0)) {
      func_0x0e547740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
      func_0x0410844d(&DAT_0f755a40);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7559c0 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e517d70;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f7559c0 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e517d70:
      puVar16 = &DAT_0f7559c0;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    for (pbVar18 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar18 != *(byte **)(in_stack_00000180 + 0x58); pbVar18 = pbVar18 + 0x38) {
      bVar2 = *pbVar18;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e517e4a;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e517e4a:
        if ((bVar2 & 1) == 0) {
          pbVar26 = pbVar18 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar18 + 0x10);
        }
        auVar36[0] = -(*pbVar26 == 0x5b);
        auVar36[1] = -(pbVar26[1] == 99);
        auVar36[2] = -(pbVar26[2] == 0x65);
        auVar36[3] = -(pbVar26[3] == 0x72);
        auVar36[4] = -(pbVar26[4] == 0x65);
        auVar36[5] = -(pbVar26[5] == 0x61);
        auVar36[6] = -(pbVar26[6] == 0x6c);
        auVar36[7] = -(pbVar26[7] == 0x3a);
        auVar36[8] = -(pbVar26[8] == 100);
        auVar36[9] = -(pbVar26[9] == 0x6f);
        auVar36[10] = -(pbVar26[10] == 99);
        auVar36[0xb] = -(pbVar26[0xb] == 0x75);
        auVar36[0xc] = -(pbVar26[0xc] == 0x6d);
        auVar36[0xd] = -(pbVar26[0xd] == 0x65);
        auVar36[0xe] = -(pbVar26[0xe] == 0x6e);
        auVar36[0xf] = -(pbVar26[0xf] == 0x74);
        auVar50[0] = -(pbVar26[10] == 99);
        auVar50[1] = -(pbVar26[0xb] == 0x75);
        auVar50[2] = -(pbVar26[0xc] == 0x6d);
        auVar50[3] = -(pbVar26[0xd] == 0x65);
        auVar50[4] = -(pbVar26[0xe] == 0x6e);
        auVar50[5] = -(pbVar26[0xf] == 0x74);
        auVar50[6] = -(pbVar26[0x10] == 0x61);
        auVar50[7] = -(pbVar26[0x11] == 0x74);
        auVar50[8] = -(pbVar26[0x12] == 0x69);
        auVar50[9] = -(pbVar26[0x13] == 0x6f);
        auVar50[10] = -(pbVar26[0x14] == 0x6e);
        auVar50[0xb] = -(pbVar26[0x15] == 0x5f);
        auVar50[0xc] = -(pbVar26[0x16] == 0x74);
        auVar50[0xd] = -(pbVar26[0x17] == 0x61);
        auVar50[0xe] = -(pbVar26[0x18] == 0x67);
        auVar50[0xf] = -(pbVar26[0x19] == 0x5d);
        auVar50 = auVar50 & auVar36;
        if ((ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar50[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e517e78:
      uVar9 = uStack00000000000001ac;
      if (iStack00000000000001a8 == 0) {
        if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e517f00;
        lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)func_0x048aead0(pcVar19 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e517f00;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar29 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e517f00:
          lVar29 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      _bStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar19 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (code *)0x21;
      in_stack_00000148 = (code *)0x1a;
      *(ulong *)(pcVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar19 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar19 = _DAT_013bbacd;
      *(undefined8 *)(pcVar19 + 8) = uVar4;
      pcVar19[0x1a] = (code)0x0;
      in_stack_00000150 = pcVar19;
      lVar29 = func_0x048b5060(lVar29,&stack0x00000140);
      *(undefined8 *)(lVar29 + 0x20) = 0;
      if ((undefined2 *)(lVar29 + 0x20) == &stack0x00000070) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar29 + 0x40) != (code *)0x0) {
          puVar28 = (undefined8 *)(lVar29 + 0x28);
          (**(code **)(lVar29 + 0x40))(puVar28);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar28);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar28 = uVar4;
            }
          }
        }
        *(ulong *)(lVar29 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar29 + 0x40) = in_stack_00000090;
        *(uint *)(lVar29 + 0x48) = _bStack0000000000000098;
        *(char *)(lVar29 + 0x4c) = cStack000000000000009c;
        pcVar19 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar19 = in_stack_00000090;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar14 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550ad8), iVar15 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar14 == _DAT_0f550ac4) goto LAB_0e517e78;
    }
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_000001d0 = in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    _uStack00000000000001f0 = _cStack00000000000001b0;
    uStack00000000000001f4 = uStack00000000000001b4;
    iStack00000000000001e8 = 2;
    uStack00000000000001ec = 0x5c17b12b;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    _uStack00000000000000b0 = (undefined1  [16])0x0;
    cStack00000000000000a0 = 0;
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    _uStack0000000000000070 = (undefined1  [16])0x0;
    uStack00000000000000e0 = 0x3f600000;
    func_0x048afb10(&stack0x000000b0,8);
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    in_stack_00000100 = 0;
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack0000000000000118 = 0xff00;
    uStack000000000000011c = uStack000000000000011c & 0xffffff00;
    uStack0000000000000120 = uStack0000000000000120 & 0xffffff00;
    _uStack0000000000000124 = _uStack0000000000000124 & 0xffffff00;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar28;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((_bStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          _bStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    _bStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 0x74;
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755a60 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755a60), iVar14 != 0)) {
      func_0x0e547850();
      func_0x0410844d(&DAT_0f755a60);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e535290;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e530ec0;
    in_stack_00000040 = &UNK_0e548bb0;
    in_stack_00000048 = &UNK_0e548bc0;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(&stack0x000001c8,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000150 = in_stack_000001d8;
    in_stack_00000158 = in_stack_000001e0;
    in_stack_00000140 = in_stack_000001c8;
    in_stack_00000148 = in_stack_000001d0;
    func_0x0e548940(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e5183bf:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e5183bf;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = in_stack_000001c8;
    in_stack_00000150 = in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    in_stack_00000168 = iStack00000000000001e8;
    uStack000000000000016c = uStack00000000000001ec;
    in_stack_00000170 = CONCAT31(in_stack_00000170._1_3_,uStack00000000000001f0);
    func_0x048b0bc0(&stack0x00000070);
    if ((DAT_0f755a60 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755a60), iVar14 != 0)) {
      func_0x0e547850();
      func_0x0410844d(&DAT_0f755a60);
    }
    pcVar19 = in_stack_00000140;
    in_stack_00000168 = 1;
    uStack000000000000016c = 0x95f72993;
    if ((DAT_0f755a40 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755a40), iVar14 != 0)) {
      func_0x0e547740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
      func_0x0410844d(&DAT_0f755a40);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7559c0 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e5184a0;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f7559c0 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e5184a0:
      _uStack0000000000000070 = &DAT_0f7559c0;
    }
    else {
      _uStack0000000000000070 = (undefined *)plVar20[2];
    }
    auStack0000000000000072._6_8_ = pcVar19 + 0x18;
    func_0x0ed621a0(&stack0x00000070,uStack000000000000016c);
    uStack0000000000000070 = 1;
    auStack0000000000000072._6_8_ = &stack0x00000148;
    uStack0000000000000080 = uStack000000000000016c;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = '\0';
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    cStack00000000000000a0 = '\0';
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    _uStack00000000000000b0 = 0x67617406;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    uStack00000000000000e0 = 0;
    uStack00000000000000e4 = 0;
    _uStack00000000000000e8 = ZEXT816(0);
    uStack00000000000000f8 = 0x3f600000;
    func_0x048afb10(&stack0x000000c8,8);
    uStack0000000000000120 = 0;
    _uStack0000000000000124 = 0;
    in_stack_00000128 = 0;
    in_stack_00000110 = 0;
    uStack0000000000000118 = 0;
    uStack000000000000011a = 0;
    uStack000000000000011c = 0;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    uStack0000000000000130 = 0xff00;
    uStack0000000000000134 = 0;
    uStack0000000000000138 = 0;
    uStack000000000000013c = 0;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0ef44b00;
    plVar20 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar28;
    iStack000000000000008c = (int)((ulong)puVar28 >> 0x20);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_048b3f30;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &SUB_048b2190;
    in_stack_00000040 = &UNK_0e548c10;
    in_stack_00000048 = &UNK_0e548dd0;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e548940(&stack0x00000000,auStack0000000000000072._6_8_,&stack0x00000088);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(in_stack_00000010[0xf] + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e51874f:
      piVar22[4] = piVar22[4] | _uStack0000000000000070 << 0x10;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(in_stack_00000010[0xf] + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e51874f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)(in_stack_00000010 + 3) =
             *(uint *)(in_stack_00000010 + 3) | _uStack0000000000000070 << 0x10;
      }
    }
    func_0x048b0bc0(&stack0x00000088);
  }
  if ((DAT_0f755af8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755af8), iVar14 != 0)) {
    func_0x0e549060();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
    func_0x0410844d(&DAT_0f755af8);
  }
  plVar20 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f755a78 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e5187c0;
    plVar20 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar29 * 0x18) !=
           *(uint *)(_DAT_0f755a78 + 4));
  if (plVar20 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e5187c0:
    puVar16 = &DAT_0f755a78;
    if (iRam000000000f755ad8 != -0x2b3da790) goto LAB_0e51882d;
LAB_0e5187eb:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0e51882d;
    func_0x0e549850(&stack0x00000180);
  }
  else {
    puVar16 = (undefined *)plVar20[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e5187eb;
LAB_0e51882d:
    func_0x0e549850(&stack0x00000180);
  }
  if (cStack00000000000001b0 == '\0') {
    func_0x0e97e540();
    pcVar19 = in_stack_00000180;
    if ((DAT_0f755af8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755af8), iVar14 != 0)) {
      func_0x0e549060();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
      func_0x0410844d(&DAT_0f755af8);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755a78 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e5188d0;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f755a78 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e5188d0:
      puVar16 = &DAT_0f755a78;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    for (pbVar18 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar18 != *(byte **)(in_stack_00000180 + 0x58); pbVar18 = pbVar18 + 0x38) {
      bVar2 = *pbVar18;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e5189aa;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e5189aa:
        if ((bVar2 & 1) == 0) {
          pbVar26 = pbVar18 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar18 + 0x10);
        }
        auVar37[0] = -(*pbVar26 == 0x5b);
        auVar37[1] = -(pbVar26[1] == 99);
        auVar37[2] = -(pbVar26[2] == 0x65);
        auVar37[3] = -(pbVar26[3] == 0x72);
        auVar37[4] = -(pbVar26[4] == 0x65);
        auVar37[5] = -(pbVar26[5] == 0x61);
        auVar37[6] = -(pbVar26[6] == 0x6c);
        auVar37[7] = -(pbVar26[7] == 0x3a);
        auVar37[8] = -(pbVar26[8] == 100);
        auVar37[9] = -(pbVar26[9] == 0x6f);
        auVar37[10] = -(pbVar26[10] == 99);
        auVar37[0xb] = -(pbVar26[0xb] == 0x75);
        auVar37[0xc] = -(pbVar26[0xc] == 0x6d);
        auVar37[0xd] = -(pbVar26[0xd] == 0x65);
        auVar37[0xe] = -(pbVar26[0xe] == 0x6e);
        auVar37[0xf] = -(pbVar26[0xf] == 0x74);
        auVar51[0] = -(pbVar26[10] == 99);
        auVar51[1] = -(pbVar26[0xb] == 0x75);
        auVar51[2] = -(pbVar26[0xc] == 0x6d);
        auVar51[3] = -(pbVar26[0xd] == 0x65);
        auVar51[4] = -(pbVar26[0xe] == 0x6e);
        auVar51[5] = -(pbVar26[0xf] == 0x74);
        auVar51[6] = -(pbVar26[0x10] == 0x61);
        auVar51[7] = -(pbVar26[0x11] == 0x74);
        auVar51[8] = -(pbVar26[0x12] == 0x69);
        auVar51[9] = -(pbVar26[0x13] == 0x6f);
        auVar51[10] = -(pbVar26[0x14] == 0x6e);
        auVar51[0xb] = -(pbVar26[0x15] == 0x5f);
        auVar51[0xc] = -(pbVar26[0x16] == 0x74);
        auVar51[0xd] = -(pbVar26[0x17] == 0x61);
        auVar51[0xe] = -(pbVar26[0x18] == 0x67);
        auVar51[0xf] = -(pbVar26[0x19] == 0x5d);
        auVar51 = auVar51 & auVar37;
        if ((ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e5189d8:
      uVar9 = uStack00000000000001ac;
      if (iStack00000000000001a8 == 0) {
        if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e518a60;
        lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)func_0x048aead0(pcVar19 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e518a60;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar29 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e518a60:
          lVar29 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      _bStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar19 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (code *)0x21;
      in_stack_00000148 = (code *)0x1a;
      *(ulong *)(pcVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar19 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar19 = _DAT_013bbacd;
      *(undefined8 *)(pcVar19 + 8) = uVar4;
      pcVar19[0x1a] = (code)0x0;
      in_stack_00000150 = pcVar19;
      lVar29 = func_0x048b5060(lVar29,&stack0x00000140);
      *(undefined8 *)(lVar29 + 0x20) = 0;
      if ((undefined2 *)(lVar29 + 0x20) == &stack0x00000070) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar29 + 0x40) != (code *)0x0) {
          puVar28 = (undefined8 *)(lVar29 + 0x28);
          (**(code **)(lVar29 + 0x40))(puVar28);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar28);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar28 = uVar4;
            }
          }
        }
        *(ulong *)(lVar29 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar29 + 0x40) = in_stack_00000090;
        *(uint *)(lVar29 + 0x48) = _bStack0000000000000098;
        *(char *)(lVar29 + 0x4c) = cStack000000000000009c;
        pcVar19 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar19 = in_stack_00000090;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar14 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550ad8), iVar15 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar14 == _DAT_0f550ac4) goto LAB_0e5189d8;
    }
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_000001d0 = in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    _uStack00000000000001f0 = _cStack00000000000001b0;
    uStack00000000000001f4 = uStack00000000000001b4;
    iStack00000000000001e8 = 2;
    uStack00000000000001ec = 0x5c17b12b;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    _uStack00000000000000b0 = (undefined1  [16])0x0;
    cStack00000000000000a0 = 0;
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    _uStack0000000000000070 = (undefined1  [16])0x0;
    uStack00000000000000e0 = 0x3f600000;
    func_0x048afb10(&stack0x000000b0,8);
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    in_stack_00000100 = 0;
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack0000000000000118 = 0xff00;
    uStack000000000000011c = uStack000000000000011c & 0xffffff00;
    uStack0000000000000120 = uStack0000000000000120 & 0xffffff00;
    _uStack0000000000000124 = _uStack0000000000000124 & 0xffffff00;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar28;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((_bStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          _bStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    _bStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 0x74;
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755b18 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755b18), iVar14 != 0)) {
      func_0x0e549170();
      func_0x0410844d(&DAT_0f755b18);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e535290;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e530ec0;
    in_stack_00000040 = &UNK_0e54a630;
    in_stack_00000048 = &UNK_0e54a640;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(&stack0x000001c8,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000150 = in_stack_000001d8;
    in_stack_00000158 = in_stack_000001e0;
    in_stack_00000140 = in_stack_000001c8;
    in_stack_00000148 = in_stack_000001d0;
    func_0x0e54a3c0(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e518f6f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e518f6f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = in_stack_000001c8;
    in_stack_00000150 = in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    in_stack_00000168 = iStack00000000000001e8;
    uStack000000000000016c = uStack00000000000001ec;
    in_stack_00000170 = CONCAT31(in_stack_00000170._1_3_,uStack00000000000001f0);
    func_0x048b0bc0(&stack0x00000070);
    if ((DAT_0f755b18 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755b18), iVar14 != 0)) {
      func_0x0e549170();
      func_0x0410844d(&DAT_0f755b18);
    }
    pcVar19 = in_stack_00000140;
    in_stack_00000168 = 1;
    uStack000000000000016c = 0x5d24a408;
    if ((DAT_0f755af8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755af8), iVar14 != 0)) {
      func_0x0e549060();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
      func_0x0410844d(&DAT_0f755af8);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755a78 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e519050;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f755a78 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e519050:
      _uStack0000000000000070 = &DAT_0f755a78;
    }
    else {
      _uStack0000000000000070 = (undefined *)plVar20[2];
    }
    auStack0000000000000072._6_8_ = pcVar19 + 0x18;
    func_0x0ed621a0(&stack0x00000070,uStack000000000000016c);
    auVar32 = _uStack00000000000000b0;
    uStack0000000000000070 = 1;
    auStack0000000000000072._6_8_ = &stack0x00000148;
    uStack0000000000000080 = uStack000000000000016c;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = '\0';
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    cStack00000000000000a0 = '\0';
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    uStack00000000000000b1 = 0x74735f6b636f6c62;
    uStack00000000000000b0 = 0x16;
    stack0x000000b8 = 0x65746174;
    uStack00000000000000bd = auVar32._13_3_;
    uStack00000000000000bc = 0;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    uStack00000000000000e0 = 0;
    uStack00000000000000e4 = 0;
    _uStack00000000000000e8 = ZEXT816(0);
    uStack00000000000000f8 = 0x3f600000;
    func_0x048afb10(&stack0x000000c8,8);
    uStack0000000000000120 = 0;
    _uStack0000000000000124 = 0;
    in_stack_00000128 = 0;
    in_stack_00000110 = 0;
    uStack0000000000000118 = 0;
    uStack000000000000011a = 0;
    uStack000000000000011c = 0;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    uStack0000000000000130 = 0xff00;
    uStack0000000000000134 = 0;
    uStack0000000000000138 = 0;
    uStack000000000000013c = 0;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4726f8;
    plVar20 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar28;
    iStack000000000000008c = (int)((ulong)puVar28 >> 0x20);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0db8dd10;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &SUB_0d4858f0;
    in_stack_00000040 = &UNK_0e54a690;
    in_stack_00000048 = &UNK_0e54a890;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e54a3c0(&stack0x00000000,auStack0000000000000072._6_8_,&stack0x00000088);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(in_stack_00000010[0xf] + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e51930f:
      piVar22[4] = piVar22[4] | _uStack0000000000000070 << 0x10;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(in_stack_00000010[0xf] + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e51930f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)(in_stack_00000010 + 3) =
             *(uint *)(in_stack_00000010 + 3) | _uStack0000000000000070 << 0x10;
      }
    }
    func_0x048b0bc0(&stack0x00000088);
  }
  if ((DAT_0f755bb0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755bb0), iVar14 != 0)) {
    func_0x0e54ab20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
    func_0x0410844d(&DAT_0f755bb0);
  }
  plVar20 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e519380;
    plVar20 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar29 * 0x18) !=
           *(uint *)(_DAT_0f755b30 + 4));
  if (plVar20 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e519380:
    puVar16 = &DAT_0f755b30;
    if (iRam000000000f755b90 != -0x2b3da790) goto LAB_0e5193ed;
LAB_0e5193ab:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0e5193ed;
    func_0x0e54b350(&stack0x00000180);
  }
  else {
    puVar16 = (undefined *)plVar20[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e5193ab;
LAB_0e5193ed:
    func_0x0e54b350(&stack0x00000180);
  }
  if (cStack00000000000001b0 == '\0') {
    func_0x0e97e540();
    pcVar19 = in_stack_00000180;
    if ((DAT_0f755bb0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755bb0), iVar14 != 0)) {
      func_0x0e54ab20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
      func_0x0410844d(&DAT_0f755bb0);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e519490;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f755b30 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e519490:
      puVar16 = &DAT_0f755b30;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    for (pbVar18 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar18 != *(byte **)(in_stack_00000180 + 0x58); pbVar18 = pbVar18 + 0x38) {
      bVar2 = *pbVar18;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e51956a;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e51956a:
        if ((bVar2 & 1) == 0) {
          pbVar26 = pbVar18 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar18 + 0x10);
        }
        auVar38[0] = -(*pbVar26 == 0x5b);
        auVar38[1] = -(pbVar26[1] == 99);
        auVar38[2] = -(pbVar26[2] == 0x65);
        auVar38[3] = -(pbVar26[3] == 0x72);
        auVar38[4] = -(pbVar26[4] == 0x65);
        auVar38[5] = -(pbVar26[5] == 0x61);
        auVar38[6] = -(pbVar26[6] == 0x6c);
        auVar38[7] = -(pbVar26[7] == 0x3a);
        auVar38[8] = -(pbVar26[8] == 100);
        auVar38[9] = -(pbVar26[9] == 0x6f);
        auVar38[10] = -(pbVar26[10] == 99);
        auVar38[0xb] = -(pbVar26[0xb] == 0x75);
        auVar38[0xc] = -(pbVar26[0xc] == 0x6d);
        auVar38[0xd] = -(pbVar26[0xd] == 0x65);
        auVar38[0xe] = -(pbVar26[0xe] == 0x6e);
        auVar38[0xf] = -(pbVar26[0xf] == 0x74);
        auVar52[0] = -(pbVar26[10] == 99);
        auVar52[1] = -(pbVar26[0xb] == 0x75);
        auVar52[2] = -(pbVar26[0xc] == 0x6d);
        auVar52[3] = -(pbVar26[0xd] == 0x65);
        auVar52[4] = -(pbVar26[0xe] == 0x6e);
        auVar52[5] = -(pbVar26[0xf] == 0x74);
        auVar52[6] = -(pbVar26[0x10] == 0x61);
        auVar52[7] = -(pbVar26[0x11] == 0x74);
        auVar52[8] = -(pbVar26[0x12] == 0x69);
        auVar52[9] = -(pbVar26[0x13] == 0x6f);
        auVar52[10] = -(pbVar26[0x14] == 0x6e);
        auVar52[0xb] = -(pbVar26[0x15] == 0x5f);
        auVar52[0xc] = -(pbVar26[0x16] == 0x74);
        auVar52[0xd] = -(pbVar26[0x17] == 0x61);
        auVar52[0xe] = -(pbVar26[0x18] == 0x67);
        auVar52[0xf] = -(pbVar26[0x19] == 0x5d);
        auVar52 = auVar52 & auVar38;
        if ((ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e519598:
      uVar9 = uStack00000000000001ac;
      if (iStack00000000000001a8 == 0) {
        if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e519620;
        lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)func_0x048aead0(pcVar19 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e519620;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar29 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e519620:
          lVar29 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      _bStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar19 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (code *)0x21;
      in_stack_00000148 = (code *)0x1a;
      *(ulong *)(pcVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar19 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar19 = _DAT_013bbacd;
      *(undefined8 *)(pcVar19 + 8) = uVar4;
      pcVar19[0x1a] = (code)0x0;
      in_stack_00000150 = pcVar19;
      lVar29 = func_0x048b5060(lVar29,&stack0x00000140);
      *(undefined8 *)(lVar29 + 0x20) = 0;
      if ((undefined2 *)(lVar29 + 0x20) == &stack0x00000070) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar29 + 0x40) != (code *)0x0) {
          puVar28 = (undefined8 *)(lVar29 + 0x28);
          (**(code **)(lVar29 + 0x40))(puVar28);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar28);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar28 = uVar4;
            }
          }
        }
        *(ulong *)(lVar29 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar29 + 0x40) = in_stack_00000090;
        *(uint *)(lVar29 + 0x48) = _bStack0000000000000098;
        *(char *)(lVar29 + 0x4c) = cStack000000000000009c;
        pcVar19 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar19 = in_stack_00000090;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar14 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550ad8), iVar15 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar14 == _DAT_0f550ac4) goto LAB_0e519598;
    }
    uVar5 = _cStack00000000000001b0;
    in_stack_00000260 = in_stack_000001a0;
    in_stack_00000258 = in_stack_00000198;
    pcVar7 = in_stack_00000190;
    pcVar19 = in_stack_00000188;
    in_stack_000002c0 = in_stack_00000180;
    uVar60 = SUB81(in_stack_00000180,0);
    uVar61 = (undefined7)((ulong)in_stack_00000180 >> 8);
    uVar62 = SUB81(in_stack_00000188,0);
    uVar63 = (undefined5)((ulong)in_stack_00000188 >> 8);
    uVar64 = (undefined2)((ulong)in_stack_00000188 >> 0x30);
    uVar65 = SUB81(in_stack_00000190,0);
    uVar66 = (undefined5)((ulong)in_stack_00000190 >> 8);
    uVar67 = (undefined1)((ulong)in_stack_00000190 >> 0x30);
    in_stack_00000257 = (undefined1)((ulong)in_stack_00000190 >> 0x38);
    in_stack_00000268 = 0x5c17b12b00000002;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    _uStack00000000000000b0 = (undefined1  [16])0x0;
    cStack00000000000000a0 = 0;
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    _uStack0000000000000070 = (undefined1  [16])0x0;
    uStack00000000000000e0 = 0x3f600000;
    func_0x048afb10(&stack0x000000b0,8);
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    in_stack_00000100 = 0;
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack0000000000000118 = 0xff00;
    uStack000000000000011c = uStack000000000000011c & 0xffffff00;
    uStack0000000000000120 = uStack0000000000000120 & 0xffffff00;
    _uStack0000000000000124 = _uStack0000000000000124 & 0xffffff00;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    in_stack_00000270 = (char)uVar5;
    *puVar28 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar28;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((_bStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          _bStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    _bStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 'd';
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 't';
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755bd0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755bd0), iVar14 != 0)) {
      func_0x0e54ac30();
      func_0x0410844d(&DAT_0f755bd0);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e535290;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e530ec0;
    in_stack_00000040 = &UNK_0e54c140;
    in_stack_00000048 = &UNK_0e54c150;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(&stack0x00000248,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000140 = pcVar19;
    in_stack_00000148 = pcVar7;
    in_stack_00000150 = in_stack_00000258;
    in_stack_00000158 = in_stack_00000260;
    func_0x0e54bed0(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e519b2f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e519b2f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    func_0x048b0bc0(&stack0x00000070);
    func_0x0e54c1a0(&stack0x00000070,&stack0x00000200,&UNK_0133787a);
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4726f8;
    plVar20 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar28;
    iStack000000000000008c = (int)((ulong)puVar28 >> 0x20);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0db8dd10;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &SUB_0d4858f0;
    in_stack_00000040 = &UNK_0e54c520;
    in_stack_00000048 = &UNK_0e54c720;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e54c450(&stack0x00000070);
    _uStack00000000000001f0 = CONCAT31(uStack00000000000001f1,in_stack_00000270);
    in_stack_000001c0 = in_stack_000002c0;
    in_stack_000001c8 = pcVar19;
    in_stack_000001d0 = pcVar7;
    in_stack_000001d8 = in_stack_00000258;
    in_stack_000001e0 = in_stack_00000260;
    iStack00000000000001e8 = 2;
    uStack00000000000001ec = 0x5c17b12b;
    func_0x048b0bc0(&stack0x00000088);
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = in_stack_000001c8;
    in_stack_00000150 = in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    in_stack_00000168 = iStack00000000000001e8;
    uStack000000000000016c = uStack00000000000001ec;
    in_stack_00000170 = _uStack00000000000001f0;
    uStack0000000000000174 = uStack00000000000001f4;
    func_0x0e54c1a0(&stack0x00000070,&stack0x00000140,&UNK_013fcdf9);
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f0126a0;
    plVar20 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar28;
    iStack000000000000008c = (int)((ulong)puVar28 >> 0x20);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_05daeda0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_05daea90;
    in_stack_00000040 = &UNK_0e54c8f0;
    in_stack_00000048 = &UNK_0e54ca50;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e54c450(&stack0x00000070);
    uVar9 = uStack000000000000016c;
    iVar14 = in_stack_00000168;
    pcVar19 = in_stack_00000140;
    func_0x048b0bc0(&stack0x00000088);
    if (iVar14 == 4) {
      if ((DAT_0f755bb0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755bb0), iVar14 != 0)) {
        func_0x0e54ab20();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
        func_0x0410844d(&DAT_0f755bb0);
      }
      plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
      do {
        lVar29 = *plVar20;
        if (lVar29 == -1) goto LAB_0e519f68;
        plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
      } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
               *(uint *)(_DAT_0f755b30 + 4));
      if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e519f68:
        puVar16 = &DAT_0f755b30;
      }
      else {
        puVar16 = (undefined *)plVar20[2];
      }
      lVar29 = func_0x048b1040(pcVar19 + 0x18,puVar16,uVar9,1);
      if (lVar29 == 0) {
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b10d0(&stack0x00000070);
        lVar21 = *(long *)((long)_uStack0000000000000070 + 0x38);
        lVar29 = (long)_uStack0000000000000070;
        if (lVar21 == 0) goto LAB_0e51a085;
LAB_0e51a0a1:
        do {
          lVar29 = lVar21;
          lVar21 = *(long *)(lVar29 + 0x38);
          if (*(long *)(lVar29 + 0x38) == 0) {
            _uStack0000000000000070 = ZEXT816(0);
            func_0x048b10d0(&stack0x00000070);
            lVar21 = (long)_uStack0000000000000070;
          }
        } while (lVar21 != 0);
      }
      else {
        lVar21 = *(long *)(lVar29 + 0x38);
        if (*(long *)(lVar29 + 0x38) != 0) goto LAB_0e51a0a1;
LAB_0e51a085:
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b10d0(&stack0x00000070);
        lVar21 = (long)_uStack0000000000000070;
        if (_uStack0000000000000070 != (undefined *)0x0) goto LAB_0e51a0a1;
      }
      lVar29 = *(long *)(lVar29 + 0x48);
      puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar14 != 1) goto LAB_0e51a15f;
      if ((DAT_0f755bb0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755bb0), iVar14 != 0)) {
        func_0x0e54ab20();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
        func_0x0410844d(&DAT_0f755bb0);
      }
      plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
      do {
        lVar29 = *plVar20;
        if (lVar29 == -1) goto LAB_0e519ee8;
        plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
      } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
               *(uint *)(_DAT_0f755b30 + 4));
      if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e519ee8:
        puVar16 = &DAT_0f755b30;
      }
      else {
        puVar16 = (undefined *)plVar20[2];
      }
      lVar29 = func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
      if (lVar29 == 0) {
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b0d20(&stack0x00000070);
        lVar29 = (long)_uStack0000000000000070;
      }
      lVar29 = *(long *)(lVar29 + 0x58);
      puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar28[1] = 0xffffffffffffffff;
    puVar28[2] = 0;
    *(undefined1 *)(puVar28 + 3) = 0xff;
    *puVar28 = &UNK_0f0edc68;
    uVar4 = _DAT_014f0478;
    puVar28[4] = 0;
    puVar28[5] = uVar4;
    puVar28[6] = 0;
    *(undefined2 *)(puVar28 + 7) = 0;
    *(undefined4 *)((long)puVar28 + 0x3a) = 0;
    *(undefined2 *)((long)puVar28 + 0x3e) = 0;
    plVar20 = *(long **)(lVar29 + 8);
    *(undefined8 **)(lVar29 + 8) = puVar28;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x28))();
    }
  }
LAB_0e51a15f:
  if ((DAT_0f755c68 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755c68), iVar14 != 0)) {
    func_0x0e54ccf0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755be8,0xf53dab8);
    func_0x0410844d(&DAT_0f755c68);
  }
  plVar20 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f755be8 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e51a1c0;
    plVar20 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar29 * 0x18) !=
           *(uint *)(_DAT_0f755be8 + 4));
  if (plVar20 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e51a1c0:
    puVar16 = &DAT_0f755be8;
    if (iRam000000000f755c48 != -0x2b3da790) goto LAB_0e51a22d;
LAB_0e51a1eb:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0e51a22d;
    func_0x0e54d0d0(&stack0x00000180);
    pcVar19 = in_stack_00000180;
  }
  else {
    puVar16 = (undefined *)plVar20[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e51a1eb;
LAB_0e51a22d:
    func_0x0e54d0d0(&stack0x00000180);
    pcVar19 = in_stack_00000180;
  }
  in_stack_00000180 = pcVar19;
  if (cStack00000000000001b0 == '\0') {
    if ((DAT_0f755c68 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755c68), iVar14 != 0)) {
      func_0x0e54ccf0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755be8,0xf53dab8);
      func_0x0410844d(&DAT_0f755c68);
    }
    plVar20 = (long *)(*(long *)(pcVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar19 + 0x20) - *(long *)(pcVar19 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755be8 + 4)) * 8);
    do {
      lVar29 = *plVar20;
      if (lVar29 == -1) goto LAB_0e51a2c0;
      plVar20 = (long *)(*(long *)(pcVar19 + 0x30) + lVar29 * 0x18);
    } while (*(uint *)(*(long *)(pcVar19 + 0x30) + 8 + lVar29 * 0x18) !=
             *(uint *)(_DAT_0f755be8 + 4));
    if (plVar20 == *(long **)(pcVar19 + 0x38)) {
LAB_0e51a2c0:
      puVar16 = &DAT_0f755be8;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    for (pbVar18 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar18 != *(byte **)(in_stack_00000180 + 0x58); pbVar18 = pbVar18 + 0x38) {
      bVar2 = *pbVar18;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e51a39a;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e51a39a:
        if ((bVar2 & 1) == 0) {
          pbVar26 = pbVar18 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar18 + 0x10);
        }
        auVar39[0] = -(*pbVar26 == 0x5b);
        auVar39[1] = -(pbVar26[1] == 99);
        auVar39[2] = -(pbVar26[2] == 0x65);
        auVar39[3] = -(pbVar26[3] == 0x72);
        auVar39[4] = -(pbVar26[4] == 0x65);
        auVar39[5] = -(pbVar26[5] == 0x61);
        auVar39[6] = -(pbVar26[6] == 0x6c);
        auVar39[7] = -(pbVar26[7] == 0x3a);
        auVar39[8] = -(pbVar26[8] == 100);
        auVar39[9] = -(pbVar26[9] == 0x6f);
        auVar39[10] = -(pbVar26[10] == 99);
        auVar39[0xb] = -(pbVar26[0xb] == 0x75);
        auVar39[0xc] = -(pbVar26[0xc] == 0x6d);
        auVar39[0xd] = -(pbVar26[0xd] == 0x65);
        auVar39[0xe] = -(pbVar26[0xe] == 0x6e);
        auVar39[0xf] = -(pbVar26[0xf] == 0x74);
        auVar53[0] = -(pbVar26[10] == 99);
        auVar53[1] = -(pbVar26[0xb] == 0x75);
        auVar53[2] = -(pbVar26[0xc] == 0x6d);
        auVar53[3] = -(pbVar26[0xd] == 0x65);
        auVar53[4] = -(pbVar26[0xe] == 0x6e);
        auVar53[5] = -(pbVar26[0xf] == 0x74);
        auVar53[6] = -(pbVar26[0x10] == 0x61);
        auVar53[7] = -(pbVar26[0x11] == 0x74);
        auVar53[8] = -(pbVar26[0x12] == 0x69);
        auVar53[9] = -(pbVar26[0x13] == 0x6f);
        auVar53[10] = -(pbVar26[0x14] == 0x6e);
        auVar53[0xb] = -(pbVar26[0x15] == 0x5f);
        auVar53[0xc] = -(pbVar26[0x16] == 0x74);
        auVar53[0xd] = -(pbVar26[0x17] == 0x61);
        auVar53[0xe] = -(pbVar26[0x18] == 0x67);
        auVar53[0xf] = -(pbVar26[0x19] == 0x5d);
        auVar53 = auVar53 & auVar39;
        if ((ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e51a3c8:
      uVar9 = uStack00000000000001ac;
      if (iStack00000000000001a8 == 0) {
        if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e51a450;
        lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)func_0x048aead0(pcVar19 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(pcVar19 + 0x18,puVar16,uVar9,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e51a450;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar29 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e51a450:
          lVar29 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      _bStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (code *)0x21;
      in_stack_00000148 = (code *)0x1a;
      *(ulong *)((long)puVar28 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar28 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar28 = _DAT_013bbacd;
      puVar28[1] = uVar4;
      *(undefined1 *)((long)puVar28 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar28;
      lVar29 = func_0x048b5060(lVar29,&stack0x00000140);
      *(undefined8 *)(lVar29 + 0x20) = 0;
      if ((undefined2 *)(lVar29 + 0x20) == &stack0x00000070) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar29 + 0x40) != (code *)0x0) {
          puVar28 = (undefined8 *)(lVar29 + 0x28);
          (**(code **)(lVar29 + 0x40))(puVar28);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar28);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar28 = uVar4;
            }
          }
        }
        *(ulong *)(lVar29 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar29 + 0x40) = in_stack_00000090;
        *(uint *)(lVar29 + 0x48) = _bStack0000000000000098;
        *(char *)(lVar29 + 0x4c) = cStack000000000000009c;
        pcVar19 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar19 = in_stack_00000090;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar14 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550ad8), iVar15 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar14 == _DAT_0f550ac4) goto LAB_0e51a3c8;
    }
    _uStack00000000000001f0 = _cStack00000000000001b0;
    uStack00000000000001f4 = uStack00000000000001b4;
    in_stack_000001e0 = in_stack_000001a0;
    iStack00000000000001e8 = iStack00000000000001a8;
    uStack00000000000001ec = uStack00000000000001ac;
    in_stack_000001d0 = in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_00000160 = in_stack_000001a0;
    in_stack_00000140 = in_stack_00000180;
    in_stack_00000148 = in_stack_00000188;
    in_stack_00000150 = in_stack_00000190;
    in_stack_00000158 = in_stack_00000198;
    in_stack_00000170 = _cStack00000000000001b0;
    uStack0000000000000174 = uStack00000000000001b4;
    in_stack_00000168 = 2;
    uStack000000000000016c = 0x5c17b12b;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    _uStack00000000000000b0 = ZEXT816(0);
    cStack00000000000000a0 = 0;
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    _uStack0000000000000070 = ZEXT816(0);
    uStack00000000000000e0 = 0x3f600000;
    func_0x048afb10(&stack0x000000b0,8);
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    in_stack_00000100 = 0;
    _uStack00000000000000e8 = ZEXT816(0);
    uStack0000000000000118 = 0xff00;
    uStack000000000000011c = uStack000000000000011c & 0xffffff00;
    uStack0000000000000120 = uStack0000000000000120 & 0xffffff00;
    _uStack0000000000000124 = _uStack0000000000000124 & 0xffffff00;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4bd678;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar28;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((_bStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          _bStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    _bStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 0x74;
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755c88 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755c88), iVar14 != 0)) {
      func_0x0e54ce00();
      func_0x0410844d(&DAT_0f755c88);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e539b20;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e535750;
    in_stack_00000040 = &UNK_0e54dbe0;
    in_stack_00000048 = &UNK_0e54dbf0;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(&stack0x00000148,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcVar8 = in_stack_00000160;
    pcVar7 = in_stack_00000158;
    pcVar19 = in_stack_00000150;
    if ((DAT_0f550a20 == '\0') && (iVar14 = func_0x04108328(&DAT_0f550a20), iVar14 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar20 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    plVar20[1] = 0;
    plVar20[2] = 0;
    *plVar20 = (long)&UNK_0ef439d0;
    uVar4 = _uStack0000000000000070;
    uVar6 = auStack0000000000000072._6_8_;
    _uStack0000000000000070 = ZEXT816(0);
    plVar20[3] = uVar4;
    plVar20[4] = uVar6;
    plVar20[7] = (long)in_stack_00000090;
    plVar20[5] = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    plVar20[6] = CONCAT44(iStack000000000000008c,iStack0000000000000088);
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    plVar20[10] = in_stack_000000a8;
    plVar20[8] = CONCAT17(uStack000000000000009f,
                          CONCAT16(uStack000000000000009e,
                                   CONCAT15(uStack000000000000009d,
                                            CONCAT14(cStack000000000000009c,_bStack0000000000000098)
                                           )));
    plVar20[9] = CONCAT17(uStack00000000000000a7,
                          CONCAT61(uStack00000000000000a1,cStack00000000000000a0));
    _bStack0000000000000098 = 0;
    cStack000000000000009c = '\0';
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    cStack00000000000000a0 = '\0';
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    plVar20[0xb] = _uStack00000000000000b0;
    plVar20[0xc] = stack0x000000b8;
    plVar20[0xd] = in_stack_000000c0;
    _uStack00000000000000b0 = ZEXT816(0);
    in_stack_000000c0 = 0;
    plVar20[0xe] = in_stack_000000c8;
    plVar20[0xf] = in_stack_000000d0;
    plVar20[0x10] = in_stack_000000d8;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    *(undefined4 *)(plVar20 + 0x11) = uStack00000000000000e0;
    plVar20[0x12] = uStack00000000000000e8;
    plVar20[0x13] = uStack00000000000000f0;
    plVar20[0x14] = CONCAT44(uStack00000000000000fc,uStack00000000000000f8);
    _uStack00000000000000e8 = ZEXT816(0);
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    plVar20[0x17] = in_stack_00000110;
    plVar20[0x15] = in_stack_00000100;
    plVar20[0x16] = in_stack_00000108;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    *(ulong *)((long)plVar20 + 0xc5) =
         CONCAT17(uStack0000000000000124,
                  CONCAT43(uStack0000000000000120,uStack000000000000011c._1_3_));
    plVar20[0x18] =
         CONCAT44(uStack000000000000011c,CONCAT22(uStack000000000000011a,uStack0000000000000118));
    uVar60 = 0;
    uVar61 = 0;
    uVar62 = 0;
    uVar63 = 0;
    uVar64 = 0;
    in_stack_00000010 = plVar20;
    func_0x048afd20(&stack0x00000200,&stack0x00000000);
    plVar20 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000010 + 1;
      lVar29 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*in_stack_00000010 + 0x10))(in_stack_00000010);
        func_0x0412c2d0(plVar20);
      }
    }
    iVar14 = (int)pcVar8;
    iVar15 = (int)((ulong)pcVar8 >> 0x20);
    if (iVar15 == 2) {
      piVar22 = *(int **)(*(long *)(pcVar7 + 0x78) + 0x60);
      iVar15 = *piVar22;
      while (iVar15 != iVar14) {
        piVar22 = piVar22 + 0x16;
        iVar15 = *piVar22;
      }
      for (; *(code **)(piVar22 + 0xc) != pcVar19; piVar22 = *(int **)(piVar22 + 0xe)) {
      }
LAB_0e51ab4a:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iVar15 == 1) {
        piVar22 = *(int **)(*(long *)(pcVar7 + 0x78) + 0x48);
        iVar15 = *piVar22;
        while (iVar15 != iVar14) {
          piVar22 = piVar22 + 0x1a;
          iVar15 = *piVar22;
        }
        goto LAB_0e51ab4a;
      }
      if (iVar15 == 0) {
        pcVar7[0x1a] = (code)((byte)pcVar7[0x1a] | 9);
      }
    }
    func_0x048b0bc0(&stack0x00000070);
  }
  if ((DAT_0f755d20 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755d20), iVar14 != 0)) {
    func_0x0e54e0d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755ca0,0xf53dab8);
    func_0x0410844d(&DAT_0f755d20);
  }
  plVar20 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f755ca0 + 4)) * 8);
  do {
    lVar29 = *plVar20;
    if (lVar29 == -1) goto LAB_0e51abc0;
    plVar20 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar29 * 0x18) !=
           *(uint *)(_DAT_0f755ca0 + 4));
  if (plVar20 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e51abc0:
    puVar16 = &DAT_0f755ca0;
    if (iRam000000000f755d00 != -0x2b3da790) goto LAB_0e51ac2d;
LAB_0e51abeb:
    if (*(long *)(puVar16 + 0x68) == 0) goto LAB_0e51ac2d;
    func_0x0e54e570(&stack0x00000240);
  }
  else {
    puVar16 = (undefined *)plVar20[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e51abeb;
LAB_0e51ac2d:
    func_0x0e54e570(&stack0x00000240);
  }
  if (in_stack_00000270 == '\0') {
    lVar29 = CONCAT71(uVar61,uVar60);
    if ((DAT_0f755d20 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755d20), iVar14 != 0)) {
      func_0x0e54e0d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755ca0,0xf53dab8);
      func_0x0410844d(&DAT_0f755d20);
    }
    plVar20 = (long *)(*(long *)(lVar29 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar29 + 0x20) - *(long *)(lVar29 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f755ca0 + 4)) * 8);
    do {
      lVar21 = *plVar20;
      if (lVar21 == -1) goto LAB_0e51acc0;
      plVar20 = (long *)(*(long *)(lVar29 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar29 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f755ca0 + 4)
            );
    if (plVar20 == *(long **)(lVar29 + 0x38)) {
LAB_0e51acc0:
      puVar16 = &DAT_0f755ca0;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    pbVar26 = *(byte **)(CONCAT71(uVar61,uVar60) + 0x58);
    for (pbVar18 = *(byte **)(CONCAT71(uVar61,uVar60) + 0x50); pbVar18 != pbVar26;
        pbVar18 = pbVar18 + 0x38) {
      bVar2 = *pbVar18;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e51ad9a;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e51ad9a:
        if ((bVar2 & 1) == 0) {
          pbVar25 = pbVar18 + 1;
        }
        else {
          pbVar25 = *(byte **)(pbVar18 + 0x10);
        }
        auVar40[0] = -(*pbVar25 == 0x5b);
        auVar40[1] = -(pbVar25[1] == 99);
        auVar40[2] = -(pbVar25[2] == 0x65);
        auVar40[3] = -(pbVar25[3] == 0x72);
        auVar40[4] = -(pbVar25[4] == 0x65);
        auVar40[5] = -(pbVar25[5] == 0x61);
        auVar40[6] = -(pbVar25[6] == 0x6c);
        auVar40[7] = -(pbVar25[7] == 0x3a);
        auVar40[8] = -(pbVar25[8] == 100);
        auVar40[9] = -(pbVar25[9] == 0x6f);
        auVar40[10] = -(pbVar25[10] == 99);
        auVar40[0xb] = -(pbVar25[0xb] == 0x75);
        auVar40[0xc] = -(pbVar25[0xc] == 0x6d);
        auVar40[0xd] = -(pbVar25[0xd] == 0x65);
        auVar40[0xe] = -(pbVar25[0xe] == 0x6e);
        auVar40[0xf] = -(pbVar25[0xf] == 0x74);
        auVar54[0] = -(pbVar25[10] == 99);
        auVar54[1] = -(pbVar25[0xb] == 0x75);
        auVar54[2] = -(pbVar25[0xc] == 0x6d);
        auVar54[3] = -(pbVar25[0xd] == 0x65);
        auVar54[4] = -(pbVar25[0xe] == 0x6e);
        auVar54[5] = -(pbVar25[0xf] == 0x74);
        auVar54[6] = -(pbVar25[0x10] == 0x61);
        auVar54[7] = -(pbVar25[0x11] == 0x74);
        auVar54[8] = -(pbVar25[0x12] == 0x69);
        auVar54[9] = -(pbVar25[0x13] == 0x6f);
        auVar54[10] = -(pbVar25[0x14] == 0x6e);
        auVar54[0xb] = -(pbVar25[0x15] == 0x5f);
        auVar54[0xc] = -(pbVar25[0x16] == 0x74);
        auVar54[0xd] = -(pbVar25[0x17] == 0x61);
        auVar54[0xe] = -(pbVar25[0x18] == 0x67);
        auVar54[0xf] = -(pbVar25[0x19] == 0x5d);
        auVar54 = auVar54 & auVar40;
        if ((ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar54[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == pbVar26) {
LAB_0e51adc8:
      if ((int)in_stack_00000268 == 0) {
        if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e51ae50;
        lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)func_0x048aead0(lVar29 + 0x18);
        }
        _uStack0000000000000070 =
             (undefined *)
             func_0x048b0c90(lVar29 + 0x18,puVar16,(int)((ulong)in_stack_00000268 >> 0x20),1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e51ae50;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar29 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e51ae50:
          lVar29 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      _bStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar19 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000180 = (code *)0x21;
      in_stack_00000188 = (code *)0x1a;
      *(ulong *)(pcVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar19 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(undefined8 *)pcVar19 = _DAT_013bbacd;
      *(undefined8 *)(pcVar19 + 8) = uVar4;
      pcVar19[0x1a] = (code)0x0;
      in_stack_00000190 = pcVar19;
      lVar29 = func_0x048b5060(lVar29,&stack0x00000180);
      *(undefined8 *)(lVar29 + 0x20) = 0;
      if ((undefined2 *)(lVar29 + 0x20) == &stack0x00000070) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar29 + 0x40) != (code *)0x0) {
          puVar28 = (undefined8 *)(lVar29 + 0x28);
          (**(code **)(lVar29 + 0x40))(puVar28);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar28);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar28 = uVar4;
            }
          }
        }
        *(ulong *)(lVar29 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar29 + 0x40) = in_stack_00000090;
        *(uint *)(lVar29 + 0x48) = _bStack0000000000000098;
        *(char *)(lVar29 + 0x4c) = cStack000000000000009c;
        pcVar19 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000180 & 1) != 0) {
        func_0x0412a280(in_stack_00000190,(ulong)in_stack_00000180 & 0xfffffffffffffffe);
        pcVar19 = in_stack_00000090;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar14 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550ad8), iVar15 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar14 == _DAT_0f550ac4) goto LAB_0e51adc8;
    }
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    _uStack00000000000000b0 = (undefined1  [16])0x0;
    cStack00000000000000a0 = 0;
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000090 = (code *)0x0;
    _bStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    _uStack0000000000000070 = (undefined1  [16])0x0;
    uStack00000000000000e0 = 0x3f600000;
    func_0x048afb10(&stack0x000000b0,8);
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    in_stack_00000100 = 0;
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack0000000000000118 = 0xff00;
    uStack000000000000011c = uStack000000000000011c & 0xffffff00;
    uStack0000000000000120 = uStack0000000000000120 & 0xffffff00;
    _uStack0000000000000124 = _uStack0000000000000124 & 0xffffff00;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4bd678;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar28;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((_bStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          _bStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    _bStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 'd';
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 't';
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755d40 == '\0') && (iVar14 = func_0x04108328(&DAT_0f755d40), iVar14 != 0)) {
      func_0x0e54e1e0();
      func_0x0410844d(&DAT_0f755d40);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e539b20;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e535750;
    in_stack_00000040 = &UNK_0e54f380;
    in_stack_00000048 = &UNK_0e54f390;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(&stack0x000003c8,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000180 = (code *)CONCAT26(uVar64,CONCAT51(uVar63,uVar62));
    in_stack_00000188 = (code *)CONCAT17(in_stack_00000257,CONCAT16(uVar67,CONCAT51(uVar66,uVar65)))
    ;
    in_stack_00000190 = in_stack_00000258;
    in_stack_00000198 = in_stack_00000260;
    func_0x0e54f110(&stack0x00000000,&stack0x00000180,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000018) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != 0) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e51b30f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar22 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000018) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e51b30f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    func_0x048b0bc0(&stack0x00000070);
    func_0x0e54eb60(&stack0x00000070,CONCAT71(uVar61,uVar60) + 0x18);
    if (iStack000000000000008c == 2) {
      piVar22 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78)
                         + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000088) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar29 = *(long *)(piVar22 + 0xc);
      while (lVar29 != auStack0000000000000072._6_8_) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar29 = *(long *)(piVar22 + 0xc);
      }
LAB_0e51b3cf:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else {
      if (iStack000000000000008c == 1) {
        piVar22 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78
                                     ) + 0x48);
        iVar14 = *piVar22;
        while (iVar14 != iStack0000000000000088) {
          piVar22 = piVar22 + 0x1a;
          iVar14 = *piVar22;
        }
        goto LAB_0e51b3cf;
      }
      if (iStack000000000000008c == 0) {
        puVar30 = (uint *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x18);
        *puVar30 = *puVar30 | 0x40000;
      }
    }
    func_0x0e54f3e0(&stack0x00000070,&stack0x00000400,&UNK_014739de,10);
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f0126a0;
    plVar20 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar28;
    iStack000000000000008c = (int)((ulong)puVar28 >> 0x20);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_05daeda0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_05daea90;
    in_stack_00000040 = &UNK_0e54f760;
    in_stack_00000048 = &UNK_0e54f8c0;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar4 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar20 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e54f690(&stack0x00000070);
    func_0x048b0bc0(&stack0x00000088);
    uStack00000000000001ba = 0;
    uStack00000000000001bc = 0;
    uStack00000000000001be = 0;
    in_stack_00000188 = (code *)0xffffffffffffffff;
    in_stack_00000190 = (code *)0x0;
    in_stack_00000198 = (code *)CONCAT71(in_stack_00000198._1_7_,0xff);
    in_stack_00000180 = (code *)&UNK_0f0edc68;
    in_stack_000001a0 = (code *)0x0;
    iStack00000000000001a8 = (int)_DAT_014f0478;
    uStack00000000000001ac = (uint)((ulong)_DAT_014f0478 >> 0x20);
    _cStack00000000000001b0 = 0;
    uStack00000000000001b4 = 0;
    cStack00000000000001b8 = '\0';
    uStack00000000000001b9 = 1;
    func_0x0e54dc40(&stack0x00000438,&stack0x00000470,&stack0x00000180);
    func_0x0e54eb60(&stack0x00000070,in_stack_00000438 + 0x18);
    if (iStack000000000000008c == 2) {
      piVar22 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78)
                         + 0x60);
      iVar14 = *piVar22;
      while (iVar14 != iStack0000000000000088) {
        piVar22 = piVar22 + 0x16;
        iVar14 = *piVar22;
      }
      lVar2
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14a96e9  minecraft:append_loot
 */
