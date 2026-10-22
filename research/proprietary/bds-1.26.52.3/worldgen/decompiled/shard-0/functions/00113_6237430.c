/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6237430
 * Label: string:ZN6Editor25ServiceProviderCollection12addUnmanagedINS_8Servi
 * Body:  [[06237430, 0623744c] [06237457, 062386e0] [062386f0, 06238fd3] [0623918d, 062391ee]]
 * Ghidra: FUN_06237430
 */


/* WARNING: Removing unreachable block (ram,0x06238d61) */
/* WARNING: Removing unreachable block (ram,0x06238d73) */
/* WARNING: Removing unreachable block (ram,0x06238a82) */
/* WARNING: Removing unreachable block (ram,0x06238a94) */
/* WARNING: Removing unreachable block (ram,0x06238501) */
/* WARNING: Removing unreachable block (ram,0x06238513) */
/* WARNING: Removing unreachable block (ram,0x0623821b) */
/* WARNING: Removing unreachable block (ram,0x0623822d) */
/* WARNING: Removing unreachable block (ram,0x06237f43) */
/* WARNING: Removing unreachable block (ram,0x06237f55) */
/* WARNING: Removing unreachable block (ram,0x062379e6) */
/* WARNING: Removing unreachable block (ram,0x062379f9) */
/* WARNING: Removing unreachable block (ram,0x06237597) */
/* WARNING: Removing unreachable block (ram,0x062375aa) */
/* WARNING: Removing unreachable block (ram,0x06237dd0) */
/* WARNING: Removing unreachable block (ram,0x06237de2) */
/* WARNING: Removing unreachable block (ram,0x062380a8) */
/* WARNING: Removing unreachable block (ram,0x062380ba) */
/* WARNING: Removing unreachable block (ram,0x0623838e) */
/* WARNING: Removing unreachable block (ram,0x062383a0) */
/* WARNING: Removing unreachable block (ram,0x062388c9) */
/* WARNING: Removing unreachable block (ram,0x062388db) */
/* WARNING: Removing unreachable block (ram,0x06238bf5) */
/* WARNING: Removing unreachable block (ram,0x06238c07) */
/* WARNING: Removing unreachable block (ram,0x06238eb9) */
/* WARNING: Removing unreachable block (ram,0x06238ecb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06237430(undefined8 param_1,ulong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  undefined8 in_RAX;
  long lVar16;
  int *piVar17;
  int *piVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long unaff_R13;
  undefined8 unaff_R14;
  bool bVar27;
  uint in_stack_00000008;
  long in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  int iStack0000000000000020;
  int iStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000030;
  undefined1 *in_stack_00000038;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  int in_stack_00000098;
  uint uStack000000000000009c;
  undefined4 in_stack_000000a0;
  int iStack00000000000000a4;
  char cStack00000000000000a8;
  undefined3 uStack00000000000000a9;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  int iStack00000000000000d8;
  uint uStack00000000000000dc;
  undefined1 uStack00000000000000e0;
  undefined3 uStack00000000000000e1;
  int iStack00000000000000e4;
  char cStack00000000000000e8;
  undefined3 uStack00000000000000e9;
  undefined4 in_stack_000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 in_stack_00000100;
  undefined4 uStack0000000000000104;
  undefined4 in_stack_00000108;
  undefined4 uStack000000000000010c;
  undefined4 in_stack_00000110;
  undefined4 uStack0000000000000114;
  int in_stack_00000118;
  uint uStack000000000000011c;
  char in_stack_00000120;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  int iStack0000000000000158;
  uint uStack000000000000015c;
  char in_stack_00000160;
  long in_stack_00000170;
  undefined8 in_stack_00000178;
  uint in_stack_00000180;
  long *in_stack_00000188;
  byte in_stack_00000198;
  ulong in_stack_000001a0;
  long in_stack_000001a8;
  undefined8 in_stack_00000288;
  
  lVar16 = CONCAT71((int7)((ulong)in_RAX >> 8),DAT_1474f68548000001);
  uVar24 = (ulong)((uint)param_2 & 3);
  if (param_2 < 4) {
    uStack00000000000000dc = 0x811c9dc5;
    uVar26 = 0;
  }
  else {
    uStack00000000000000dc = 0x811c9dc5;
    uVar26 = 0;
    do {
      uStack00000000000000dc =
           ((int)*(char *)(lVar16 + 3 + uVar26) ^
           ((int)*(char *)(lVar16 + 2 + uVar26) ^
           ((int)*(char *)(lVar16 + 1 + uVar26) ^
           ((int)*(char *)(lVar16 + uVar26) ^ uStack00000000000000dc) * 0x1000193) * 0x1000193) *
           0x1000193) * 0x1000193;
      uVar26 = uVar26 + 4;
    } while ((param_2 & 0xfffffffffffffffc) != uVar26);
  }
  if (uVar24 != 0) {
    uVar25 = 0;
    do {
      uStack00000000000000dc =
           ((int)*(char *)(lVar16 + uVar26 + uVar25) ^ uStack00000000000000dc) * 0x1000193;
      uVar25 = uVar25 + 1;
    } while (uVar24 != uVar25);
  }
  iStack00000000000000d8 = 2;
  if ((DAT_0f56d698 == '\0') && (iVar15 = func_0x04108328(&DAT_0f56d698), iVar15 != 0)) {
    func_0x06312990(0xf56d680);
    func_0x0410844d(&DAT_0f56d698);
  }
  in_stack_00000008 = uStack00000000000000dc;
  in_stack_00000010 = 0;
  uStack0000000000000018 = 3;
  _iStack0000000000000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_06316970;
  in_stack_00000038 = &SUB_048b06d0;
  func_0x048b05a0(&stack0x000000b8,&stack0x00000008);
  in_stack_00000080 = uStack00000000000000c8;
  uStack0000000000000084 = uStack00000000000000cc;
  in_stack_00000088 = uStack00000000000000d0;
  uStack000000000000008c = uStack00000000000000d4;
  in_stack_00000070 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
  in_stack_00000078 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  func_0x06316700(&stack0x00000008,&stack0x00000070,&stack0x00000170);
  if (iStack0000000000000024 == 2) {
    piVar17 = *(int **)(*(long *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x78) +
                       0x60);
    iVar15 = *piVar17;
    while (iVar15 != iStack0000000000000020) {
      piVar17 = piVar17 + 0x16;
      iVar15 = *piVar17;
    }
    lVar16 = *(long *)(piVar17 + 0xc);
    while (lVar16 != in_stack_00000010) {
      piVar17 = *(int **)(piVar17 + 0xe);
      lVar16 = *(long *)(piVar17 + 0xc);
    }
LAB_0623769a:
    *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 9;
  }
  else {
    if (iStack0000000000000024 == 1) {
      piVar17 = *(int **)(*(long *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x78)
                         + 0x48);
      iVar15 = *piVar17;
      while (iVar15 != iStack0000000000000020) {
        piVar17 = piVar17 + 0x1a;
        iVar15 = *piVar17;
      }
      goto LAB_0623769a;
    }
    if (iStack0000000000000024 == 0) {
      puVar1 = (uint *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x18);
      *puVar1 = *puVar1 | 0x90000;
    }
  }
  if (cStack00000000000000e8 == '\0') {
    iStack00000000000000e4 = -0x44779c53;
    _cStack00000000000000e8 = CONCAT31(uStack00000000000000e9,1);
    in_stack_00000008 = 0xbb8863ad;
    lVar16 = func_0x063127a0(CONCAT44(uStack00000000000000b4,uStack00000000000000b0) + 0x18);
    lVar16 = *(long *)(lVar16 + 0x68);
    piVar18 = *(int **)(lVar16 + 0x28);
    for (piVar17 = *(int **)(lVar16 + 0x20); (piVar17 != piVar18 && (*piVar17 != -0x44779c53));
        piVar17 = piVar17 + 0xe) {
    }
    if (piVar17 == piVar18) {
      if (piVar18 < *(int **)(lVar16 + 0x30)) {
        *piVar18 = -0x44779c53;
        piVar18[2] = 0;
        piVar18[3] = 0;
        piVar18[4] = 0;
        piVar18[5] = 0;
        piVar18[6] = 0;
        piVar18[7] = 0;
        piVar18[8] = 0;
        piVar18[9] = 0;
        piVar18[10] = 0x3f800000;
        *(undefined1 *)(piVar18 + 0xc) = 0;
        *(undefined1 *)(piVar18 + 0xd) = 0;
        piVar18 = piVar18 + 0xe;
      }
      else {
        piVar18 = (int *)func_0x05d9c2b0(lVar16 + 0x20,&stack0x00000008);
      }
      *(int **)(lVar16 + 0x28) = piVar18;
    }
    else if ((*(long *)(piVar17 + 8) != 0) &&
            (cVar14 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01209c8a)
            , cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  iVar15 = iStack00000000000000e4;
  lVar16 = func_0x063127a0(CONCAT44(uStack00000000000000b4,uStack00000000000000b0) + 0x18);
  piVar18 = *(int **)(*(long *)(lVar16 + 0x68) + 0x28);
  for (piVar17 = *(int **)(*(long *)(lVar16 + 0x68) + 0x20);
      (piVar17 != piVar18 && (*piVar17 != iVar15)); piVar17 = piVar17 + 0xe) {
  }
  if ((piVar17 == piVar18) &&
     (cVar14 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b01c6),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  in_stack_00000008 = in_stack_00000008 & 0xffffff00;
  func_0x05d9c620(piVar17 + 2,&stack0x000000dc,&stack0x000000dc,&stack0x00000008);
  in_stack_00000070 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
  in_stack_00000078 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
  in_stack_00000080 = uStack00000000000000c0;
  uStack0000000000000084 = uStack00000000000000c4;
  in_stack_00000088 = uStack00000000000000c8;
  uStack000000000000008c = uStack00000000000000cc;
  in_stack_00000090 = uStack00000000000000d0;
  uStack0000000000000094 = uStack00000000000000d4;
  in_stack_00000098 = iStack00000000000000d8;
  uStack000000000000009c = uStack00000000000000dc;
  in_stack_000000a0 = _uStack00000000000000e0;
  iStack00000000000000a4 = iStack00000000000000e4;
  _cStack00000000000000a8 = _cStack00000000000000e8;
  func_0x048b0bc0(&stack0x00000170);
  func_0x06316360(&stack0x00000170,&UNK_014609b3,0x16);
  uVar24 = (ulong)(in_stack_00000198 >> 1);
  if ((in_stack_00000198 & 1) != 0) {
    uVar24 = in_stack_000001a0;
    unaff_R13 = in_stack_000001a8;
  }
  if (uVar24 == 0) {
    uStack000000000000009c = 0x811c9dc5;
  }
  else {
    uVar26 = (ulong)((uint)uVar24 & 3);
    if (uVar24 < 4) {
      uStack000000000000009c = 0x811c9dc5;
      uVar25 = 0;
    }
    else {
      uStack000000000000009c = 0x811c9dc5;
      uVar25 = 0;
      do {
        uStack000000000000009c =
             ((int)*(char *)(unaff_R13 + 3 + uVar25) ^
             ((int)*(char *)(unaff_R13 + 2 + uVar25) ^
             ((int)*(char *)(unaff_R13 + 1 + uVar25) ^
             ((int)*(char *)(unaff_R13 + uVar25) ^ uStack000000000000009c) * 0x1000193) * 0x1000193)
             * 0x1000193) * 0x1000193;
        uVar25 = uVar25 + 4;
      } while ((uVar24 & 0xfffffffffffffffc) != uVar25);
    }
    if (uVar26 != 0) {
      uVar24 = 0;
      do {
        uStack000000000000009c =
             ((int)*(char *)(unaff_R13 + uVar25 + uVar24) ^ uStack000000000000009c) * 0x1000193;
        uVar24 = uVar24 + 1;
      } while (uVar26 != uVar24);
    }
  }
  in_stack_00000098 = 2;
  if ((DAT_0f56d698 == '\0') && (iVar15 = func_0x04108328(&DAT_0f56d698), iVar15 != 0)) {
    func_0x06312990(0xf56d680);
    func_0x0410844d(&DAT_0f56d698);
  }
  in_stack_00000008 = uStack000000000000009c;
  in_stack_00000010 = 0;
  uStack0000000000000018 = 3;
  _iStack0000000000000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_06316970;
  in_stack_00000038 = &SUB_048b06d0;
  func_0x048b05a0(&stack0x00000078,&stack0x00000008);
  func_0x06316700(&stack0x00000008,&stack0x00000290,&stack0x00000170);
  if (iStack0000000000000024 == 2) {
    piVar17 = *(int **)(*(long *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x78) +
                       0x60);
    iVar15 = *piVar17;
    while (iVar15 != iStack0000000000000020) {
      piVar17 = piVar17 + 0x16;
      iVar15 = *piVar17;
    }
    lVar16 = *(long *)(piVar17 + 0xc);
    while (lVar16 != in_stack_00000010) {
      piVar17 = *(int **)(piVar17 + 0xe);
      lVar16 = *(long *)(piVar17 + 0xc);
    }
LAB_06237aea:
    *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 9;
  }
  else {
    if (iStack0000000000000024 == 1) {
      piVar17 = *(int **)(*(long *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x78)
                         + 0x48);
      iVar15 = *piVar17;
      while (iVar15 != iStack0000000000000020) {
        piVar17 = piVar17 + 0x1a;
        iVar15 = *piVar17;
      }
      goto LAB_06237aea;
    }
    if (iStack0000000000000024 == 0) {
      puVar1 = (uint *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x18);
      *puVar1 = *puVar1 | 0x90000;
    }
  }
  if (cStack00000000000000a8 == '\0') {
    iStack00000000000000a4 = -0x44779c53;
    _cStack00000000000000a8 = CONCAT31(uStack00000000000000a9,1);
    in_stack_00000008 = 0xbb8863ad;
    lVar16 = func_0x063127a0(in_stack_00000070 + 0x18);
    lVar16 = *(long *)(lVar16 + 0x68);
    piVar18 = *(int **)(lVar16 + 0x28);
    for (piVar17 = *(int **)(lVar16 + 0x20); (piVar17 != piVar18 && (*piVar17 != -0x44779c53));
        piVar17 = piVar17 + 0xe) {
    }
    if (piVar17 == piVar18) {
      if (piVar18 < *(int **)(lVar16 + 0x30)) {
        *piVar18 = -0x44779c53;
        piVar18[2] = 0;
        piVar18[3] = 0;
        piVar18[4] = 0;
        piVar18[5] = 0;
        piVar18[6] = 0;
        piVar18[7] = 0;
        piVar18[8] = 0;
        piVar18[9] = 0;
        piVar18[10] = 0x3f800000;
        *(undefined1 *)(piVar18 + 0xc) = 0;
        *(undefined1 *)(piVar18 + 0xd) = 0;
        piVar18 = piVar18 + 0xe;
      }
      else {
        piVar18 = (int *)func_0x05d9c2b0(lVar16 + 0x20,&stack0x00000008);
      }
      *(int **)(lVar16 + 0x28) = piVar18;
    }
    else if ((*(long *)(piVar17 + 8) != 0) &&
            (cVar14 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01209c8a)
            , cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  iVar15 = iStack00000000000000a4;
  lVar16 = func_0x063127a0(in_stack_00000070 + 0x18);
  piVar18 = *(int **)(*(long *)(lVar16 + 0x68) + 0x28);
  for (piVar17 = *(int **)(*(long *)(lVar16 + 0x68) + 0x20);
      (piVar17 != piVar18 && (*piVar17 != iVar15)); piVar17 = piVar17 + 0xe) {
  }
  if ((piVar17 == piVar18) &&
     (cVar14 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b01c6),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  in_stack_00000008 = in_stack_00000008 & 0xffffff00;
  func_0x05d9c620(piVar17 + 2,&stack0x0000009c,&stack0x0000009c,&stack0x00000008);
  func_0x048b0bc0(&stack0x00000170);
  lVar16 = func_0x06316b60(in_stack_00000288);
  if ((*(int *)(lVar16 + 0x60) == -0x2b3da790) && (*(long *)(lVar16 + 0x68) != 0)) {
    func_0x06317220(&stack0x00000130);
  }
  else {
    func_0x06317220(&stack0x00000130);
  }
  if (in_stack_00000160 != '\0') {
    lVar16 = func_0x0631a3a0(in_stack_00000288);
    iVar15 = *(int *)(lVar16 + 0x60);
    goto joined_r0x06238915;
  }
  func_0x06317b00(&stack0x00000170,&stack0x00000130,&UNK_01327339,7);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f028e30;
  if (in_stack_00000188 != (long *)0x0) {
    lVar16 = *in_stack_00000188;
    in_stack_00000188 = plVar19;
    (**(code **)(lVar16 + 8))();
    plVar19 = in_stack_00000188;
  }
  in_stack_00000188 = plVar19;
  in_stack_00000008 = in_stack_00000180;
  in_stack_00000010 = 0;
  uStack0000000000000018 = 0;
  _iStack0000000000000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_06318710;
  in_stack_00000038 = &SUB_048b06d0;
  func_0x048b05a0(in_stack_00000178,&stack0x00000008);
  func_0x06317cf0(&stack0x00000170);
  cVar14 = in_stack_00000160;
  uVar10 = uStack000000000000015c;
  iVar15 = iStack0000000000000158;
  uVar13 = uStack0000000000000154;
  uVar12 = uStack0000000000000150;
  uVar9 = uStack000000000000014c;
  uVar8 = uStack0000000000000148;
  uVar7 = uStack0000000000000144;
  uVar6 = uStack0000000000000140;
  uVar5 = uStack000000000000013c;
  uVar4 = uStack0000000000000138;
  uVar3 = uStack0000000000000134;
  uVar2 = uStack0000000000000130;
  func_0x048b0bc0(&stack0x00000188);
  func_0x06317b00(&stack0x00000170,&stack0x000002e0,&UNK_014609ca,8);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef46ce8;
  if (in_stack_00000188 != (long *)0x0) {
    lVar16 = *in_stack_00000188;
    in_stack_00000188 = plVar19;
    (**(code **)(lVar16 + 8))();
    plVar19 = in_stack_00000188;
  }
  in_stack_00000188 = plVar19;
  in_stack_00000008 = in_stack_00000180;
  in_stack_00000010 = 0;
  uStack0000000000000018 = 0;
  _iStack0000000000000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0490ce30;
  in_stack_00000038 = &SUB_048b06d0;
  func_0x048b05a0(in_stack_00000178,&stack0x00000008);
  func_0x06317cf0(&stack0x00000170);
  func_0x048b0bc0(&stack0x00000188);
  func_0x06317b00(&stack0x00000170,&stack0x00000290,&UNK_0123e7c4,10);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef46ce8;
  if (in_stack_00000188 != (long *)0x0) {
    lVar16 = *in_stack_00000188;
    in_stack_00000188 = plVar19;
    (**(code **)(lVar16 + 8))();
    plVar19 = in_stack_00000188;
  }
  in_stack_00000188 = plVar19;
  in_stack_00000008 = in_stack_00000180;
  in_stack_00000010 = 0;
  uStack0000000000000018 = 0;
  _iStack0000000000000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0490ce30;
  in_stack_00000038 = &SUB_048b06d0;
  func_0x048b05a0(in_stack_00000178,&stack0x00000008);
  func_0x06317cf0(&stack0x00000170);
  func_0x048b0bc0(&stack0x00000188);
  func_0x06317b00(&stack0x00000170,&stack0x00000240,&UNK_012d8b2e,8);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef46ef8;
  if (in_stack_00000188 != (long *)0x0) {
    lVar16 = *in_stack_00000188;
    in_stack_00000188 = plVar19;
    (**(code **)(lVar16 + 8))();
    plVar19 = in_stack_00000188;
  }
  in_stack_00000188 = plVar19;
  in_stack_00000008 = in_stack_00000180;
  in_stack_00000010 = 0;
  uStack0000000000000018 = 0;
  _iStack0000000000000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_04906f70;
  in_stack_00000038 = &SUB_048b06d0;
  func_0x048b05a0(in_stack_00000178,&stack0x00000008);
  func_0x06317cf0(&stack0x00000170);
  in_stack_000000f0 = uVar2;
  uStack00000000000000f4 = uVar3;
  in_stack_000000f8 = uVar4;
  uStack00000000000000fc = uVar5;
  in_stack_00000100 = uVar6;
  uStack0000000000000104 = uVar7;
  in_stack_00000108 = uVar8;
  uStack000000000000010c = uVar9;
  in_stack_00000110 = uVar12;
  uStack0000000000000114 = uVar13;
  in_stack_00000118 = iVar15;
  uStack000000000000011c = uVar10;
  in_stack_00000120 = cVar14;
  func_0x048b0bc0(&stack0x00000188);
  func_0x06317b00(&stack0x00000170,&stack0x000000f0,&UNK_01414328,8);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f028d68;
  if (in_stack_00000188 != (long *)0x0) {
    lVar16 = *in_stack_00000188;
    in_stack_00000188 = plVar19;
    (**(code **)(lVar16 + 8))();
    plVar19 = in_stack_00000188;
  }
  in_stack_00000188 = plVar19;
  in_stack_00000008 = in_stack_00000180;
  in_stack_00000010 = 0;
  uStack0000000000000018 = 0;
  _iStack0000000000000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_06316970;
  in_stack_00000038 = &SUB_048b06d0;
  func_0x048b05a0(in_stack_00000178,&stack0x00000008);
  func_0x06317cf0(&stack0x00000170);
  _uStack00000000000000e0 = CONCAT31(uStack00000000000000e1,in_stack_00000120);
  uStack00000000000000d0 = in_stack_00000110;
  uStack00000000000000d4 = uStack0000000000000114;
  iStack00000000000000d8 = in_stack_00000118;
  uStack00000000000000dc = uStack000000000000011c;
  uStack00000000000000c0 = in_stack_00000100;
  uStack00000000000000c4 = uStack0000000000000104;
  uStack00000000000000c8 = in_stack_00000108;
  uStack00000000000000cc = uStack000000000000010c;
  uStack00000000000000b0 = in_stack_000000f0;
  uStack00000000000000b4 = uStack00000000000000f4;
  uStack00000000000000b8 = in_stack_000000f8;
  uStack00000000000000bc = uStack00000000000000fc;
  func_0x048b0bc0(&stack0x00000188);
  func_0x06317b00(&stack0x00000170,&stack0x000000b0,&UNK_013c6535,0xf);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef474e0;
  if (in_stack_00000188 != (long *)0x0) {
    lVar16 = *in_stack_00000188;
    in_stack_00000188 = plVar19;
    (**(code **)(lVar16 + 8))();
    plVar19 = in_stack_00000188;
  }
  in_stack_00000188 = plVar19;
  in_stack_00000008 = in_stack_00000180;
  in_stack_00000010 = 0;
  uStack0000000000000018 = 0;
  _iStack0000000000000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_049119f0;
  in_stack_00000038 = &SUB_048b06d0;
  func_0x048b05a0(in_stack_00000178,&stack0x00000008);
  func_0x06317cf0(&stack0x00000170);
  uVar10 = uStack00000000000000dc;
  iVar15 = iStack00000000000000d8;
  uVar9 = uStack00000000000000d4;
  uVar8 = uStack00000000000000d0;
  uVar7 = uStack00000000000000cc;
  uVar6 = uStack00000000000000c8;
  uVar5 = uStack00000000000000c4;
  uVar4 = uStack00000000000000c0;
  uVar3 = uStack00000000000000bc;
  uVar2 = uStack00000000000000b8;
  lVar16 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
  uVar11 = uStack00000000000000e0;
  func_0x048b0bc0(&stack0x00000188);
  if (iVar15 == 4) {
    uVar20 = func_0x06316b60(lVar16 + 0x18);
    lVar21 = func_0x048b1040(lVar16 + 0x18,uVar20,uVar10,1);
    if (lVar21 == 0) {
      in_stack_00000170 = 0;
      in_stack_00000178 = 0;
      func_0x048b10d0(&stack0x00000170);
      lVar23 = *(long *)(in_stack_00000170 + 0x38);
      lVar21 = in_stack_00000170;
      if (lVar23 == 0) goto LAB_062386b2;
LAB_062386d7:
      do {
        lVar21 = lVar23;
        lVar23 = *(long *)(lVar21 + 0x38);
        if (*(long *)(lVar21 + 0x38) == 0) {
          in_stack_00000170 = 0;
          in_stack_00000178 = 0;
          func_0x048b10d0(&stack0x00000170);
          lVar23 = in_stack_00000170;
        }
      } while (lVar23 != 0);
    }
    else {
      lVar23 = *(long *)(lVar21 + 0x38);
      if (*(long *)(lVar21 + 0x38) != 0) goto LAB_062386d7;
LAB_062386b2:
      in_stack_00000170 = 0;
      in_stack_00000178 = 0;
      func_0x048b10d0(&stack0x00000170);
      lVar23 = in_stack_00000170;
      if (in_stack_00000170 != 0) goto LAB_062386d7;
    }
    lVar21 = *(long *)(lVar21 + 0x48);
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
LAB_06238744:
    puVar22[1] = 0x400;
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 0xff;
    *puVar22 = &UNK_0f4e3cf0;
    puVar22[4] = 0;
    puVar22[5] = 0;
    *(undefined8 *)((long)puVar22 + 0x29) = 0;
    *(undefined8 *)((long)puVar22 + 0x31) = 0;
    plVar19 = *(long **)(lVar21 + 8);
    *(undefined8 **)(lVar21 + 8) = puVar22;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x28))();
    }
  }
  else if (iVar15 == 1) {
    uVar20 = func_0x06316b60(lVar16 + 0x18);
    lVar21 = func_0x048b0c90(lVar16 + 0x18,uVar20,uVar10,1);
    if (lVar21 == 0) {
      in_stack_00000170 = 0;
      in_stack_00000178 = 0;
      func_0x048b0d20(&stack0x00000170);
      lVar21 = in_stack_00000170;
    }
    lVar21 = *(long *)(lVar21 + 0x58);
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_06238744;
  }
  in_stack_00000078 = CONCAT44(uVar3,uVar2);
  in_stack_00000098 = iVar15;
  uStack000000000000009c = uVar10;
  in_stack_000000a0 = CONCAT31(in_stack_000000a0._1_3_,uVar11);
  in_stack_00000070 = lVar16;
  in_stack_00000080 = uVar4;
  uStack0000000000000084 = uVar5;
  in_stack_00000088 = uVar6;
  uStack000000000000008c = uVar7;
  in_stack_00000090 = uVar8;
  uStack0000000000000094 = uVar9;
  func_0x06317b00(&stack0x00000170,&stack0x00000070,&UNK_01392344,9);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef46ce8;
  if (in_stack_00000188 != (long *)0x0) {
    lVar16 = *in_stack_00000188;
    in_stack_00000188 = plVar19;
    (**(code **)(lVar16 + 8))();
    plVar19 = in_stack_00000188;
  }
  in_stack_00000188 = plVar19;
  in_stack_00000008 = in_stack_00000180;
  in_stack_00000010 = 0;
  uStack0000000000000018 = 0;
  _iStack0000000000000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0490ce30;
  in_stack_00000038 = &SUB_048b06d0;
  func_0x048b05a0(in_stack_00000178,&stack0x00000008);
  func_0x06317cf0(&stack0x00000170);
  func_0x048b0bc0(&stack0x00000188);
  lVar16 = func_0x0631a3a0(in_stack_00000288);
  iVar15 = *(int *)(lVar16 + 0x60);
joined_r0x06238915:
  if ((iVar15 == -0x2b3da790) && (lVar16 = *(long *)(lVar16 + 0x68), lVar16 != 0)) {
    bVar27 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar21 = lVar16 + 9;
    if (bVar27) {
      lVar21 = *(long *)(lVar16 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar27) {
      uVar24 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0631a8a0(&stack0x00000130,unaff_R14,lVar21,uVar24);
  }
  else {
    func_0x0631a8a0(&stack0x00000130,unaff_R14,&UNK_012736d5,0x2d);
  }
  if (in_stack_00000160 == '\0') {
    func_0x0631b190(&stack0x00000170,&stack0x00000130,&UNK_012097fb,0x12);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f028f18;
    if (in_stack_00000188 != (long *)0x0) {
      lVar16 = *in_stack_00000188;
      in_stack_00000188 = plVar19;
      (**(code **)(lVar16 + 8))();
      plVar19 = in_stack_00000188;
    }
    in_stack_00000188 = plVar19;
    in_stack_00000008 = in_stack_00000180;
    in_stack_00000010 = 0;
    uStack0000000000000018 = 0;
    _iStack0000000000000020 = 1;
    in_stack_00000028 = 0;
    in_stack_00000030 = &UNK_0631be80;
    in_stack_00000038 = &SUB_048b06d0;
    func_0x048b05a0(in_stack_00000178,&stack0x00000008);
    func_0x0631b380(&stack0x00000170);
    in_stack_00000120 = in_stack_00000160;
    in_stack_00000110 = uStack0000000000000150;
    uStack0000000000000114 = uStack0000000000000154;
    in_stack_00000118 = iStack0000000000000158;
    uStack000000000000011c = uStack000000000000015c;
    in_stack_00000100 = uStack0000000000000140;
    uStack0000000000000104 = uStack0000000000000144;
    in_stack_00000108 = uStack0000000000000148;
    uStack000000000000010c = uStack000000000000014c;
    in_stack_000000f0 = uStack0000000000000130;
    uStack00000000000000f4 = uStack0000000000000134;
    in_stack_000000f8 = uStack0000000000000138;
    uStack00000000000000fc = uStack000000000000013c;
    func_0x048b0bc0(&stack0x00000188);
    func_0x0631b190(&stack0x00000170,&stack0x000000f0,&UNK_014498cc,0x10);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f028f90;
    if (in_stack_00000188 != (long *)0x0) {
      lVar16 = *in_stack_00000188;
      in_stack_00000188 = plVar19;
      (**(code **)(lVar16 + 8))();
      plVar19 = in_stack_00000188;
    }
    in_stack_00000188 = plVar19;
    in_stack_00000008 = in_stack_00000180;
    in_stack_00000010 = 0;
    uStack0000000000000018 = 0;
    _iStack0000000000000020 = 1;
    in_stack_00000028 = 0;
    in_stack_00000030 = &UNK_0631cb50;
    in_stack_00000038 = &SUB_048b06d0;
    func_0x048b05a0(in_stack_00000178,&stack0x00000008);
    func_0x0631b380(&stack0x00000170);
    _uStack00000000000000e0 = CONCAT31(uStack00000000000000e1,in_stack_00000120);
    uStack00000000000000d0 = in_stack_00000110;
    uStack00000000000000d4 = uStack0000000000000114;
    iStack00000000000000d8 = in_stack_00000118;
    uStack00000000000000dc = uStack000000000000011c;
    uStack00000000000000c0 = in_stack_00000100;
    uStack00000000000000c4 = uStack0000000000000104;
    uStack00000000000000c8 = in_stack_00000108;
    uStack00000000000000cc = uStack000000000000010c;
    uStack00000000000000b0 = in_stack_000000f0;
    uStack00000000000000b4 = uStack00000000000000f4;
    uStack00000000000000b8 = in_stack_000000f8;
    uStack00000000000000bc = uStack00000000000000fc;
    func_0x048b0bc0(&stack0x00000188);
    func_0x0631b190(&stack0x00000170,&stack0x000000b0,&UNK_01496ca2,0x16);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f028f18;
    if (in_stack_00000188 != (long *)0x0) {
      lVar16 = *in_stack_00000188;
      in_stack_00000188 = plVar19;
      (**(code **)(lVar16 + 8))();
      plVar19 = in_stack_00000188;
    }
    in_stack_00000188 = plVar19;
    in_stack_00000008 = in_stack_00000180;
    in_stack_00000010 = 0;
    uStack0000000000000018 = 0;
    _iStack0000000000000020 = 1;
    in_stack_00000028 = 0;
    in_stack_00000030 = &UNK_0631be80;
    in_stack_00000038 = &SUB_048b06d0;
    func_0x048b05a0(in_stack_00000178,&stack0x00000008);
    func_0x0631b380(&stack0x00000170);
    in_stack_000000a0 = CONCAT31(in_stack_000000a0._1_3_,uStack00000000000000e0);
    in_stack_00000090 = uStack00000000000000d0;
    uStack0000000000000094 = uStack00000000000000d4;
    in_stack_00000098 = iStack00000000000000d8;
    uStack000000000000009c = uStack00000000000000dc;
    in_stack_00000080 = uStack00000000000000c0;
    uStack0000000000000084 = uStack00000000000000c4;
    in_stack_00000088 = uStack00000000000000c8;
    uStack000000000000008c = uStack00000000000000cc;
    in_stack_00000070 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
    in_stack_00000078 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
    func_0x048b0bc0(&stack0x00000188);
    func_0x0631b190(&stack0x00000170,&stack0x00000070,&UNK_0123e7cf,0x14);
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar22 = &UNK_0f028f90;
    if (in_stack_00000188 != (long *)0x0) {
      lVar16 = *in_stack_00000188;
      in_stack_00000188 = puVar22;
      (**(code **)(lVar16 + 8))();
      puVar22 = in_stack_00000188;
    }
    in_stack_00000188 = puVar22;
    in_stack_00000008 = in_stack_00000180;
    in_stack_00000010 = 0;
    uStack0000000000000018 = 0;
    _iStack0000000000000020 = 1;
    in_stack_00000028 = 0;
    in_stack_00000030 = &UNK_0631cb50;
    in_stack_00000038 = &SUB_048b06d0;
    func_0x048b05a0(in_stack_00000178,&stack0x00000008);
    func_0x0631b380(&stack0x00000170);
    func_0x048b0bc0(&stack0x00000188);
  }
  return;
}


