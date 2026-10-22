/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd209340
 * Label: br::worldgen::JigsawStructure::vslot1
 * Body:  [[0d209340, 0d20a4fd] [0d20a6e7, 0d20a93f]]
 * Ghidra: wg_br__worldgen__JigsawStructure__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__JigsawStructure__vslot1(void)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  int *piVar8;
  long *plVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_RBX;
  undefined1 unaff_BPL;
  undefined1 uVar21;
  byte *unaff_R13;
  uint *unaff_R15;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uStack0000000000000010;
  undefined8 *in_stack_00000018;
  uint in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000048;
  int *in_stack_00000050;
  undefined1 *in_stack_00000058;
  byte *in_stack_00000060;
  byte *in_stack_00000068;
  byte *in_stack_00000070;
  byte *in_stack_00000078;
  byte *in_stack_00000080;
  byte *in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  long in_stack_00000098;
  undefined1 uStack00000000000000a0;
  undefined1 auStack00000000000000a1 [15];
  long lStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 in_stack_00000ac0;
  
  uStack0000000000000090 = SUB84(&stack0x00000000,0);
  func_0x0491cee0();
  func_0x0491cee0(unaff_RBX + 0x150,unaff_R15 + 0x72);
  *(char *)(unaff_RBX + 0x168) = (char)unaff_R15[0x78];
  in_stack_00000098 = unaff_RBX + 0x170;
  func_0x0bc259a0(in_stack_00000098,1);
  *(undefined2 *)(unaff_RBX + 0x260) = 0x100;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 (*) [16])(puVar12 + 1) = (undefined1  [16])0x0;
  *puVar12 = &UNK_0f30ccf0;
  puVar12[6] = 0;
  puVar12[4] = puVar12 + 4;
  puVar12[5] = puVar12 + 4;
  puVar12[3] = &UNK_0ef513e0;
  puVar12[7] = &UNK_0ef51410;
  *(undefined8 **)(unaff_RBX + 0x268) = puVar12 + 3;
  *(undefined8 **)(unaff_RBX + 0x270) = puVar12;
  pbVar1 = (byte *)(unaff_RBX + 0x278);
  if ((*unaff_R13 & 1) == 0) {
    *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_R13 + 0x10);
    uVar17 = *(undefined8 *)(unaff_R13 + 8);
    *(undefined8 *)pbVar1 = *(undefined8 *)unaff_R13;
    *(undefined8 *)(unaff_RBX + 0x280) = uVar17;
  }
  else {
    func_0x0412e5e0(pbVar1,*(undefined8 *)(unaff_R13 + 0x10),*(undefined8 *)(unaff_R13 + 8));
  }
  *(undefined4 *)(unaff_RBX + 0x290) = 10;
  *(undefined4 *)(unaff_RBX + 0x2a8) = _DAT_0f5a2780;
  uVar17 = uRam000000000f5a2778;
  *(undefined8 *)(unaff_RBX + 0x298) = _DAT_0f5a2770;
  *(undefined8 *)(unaff_RBX + 0x2a0) = uVar17;
  in_stack_00000088 = pbVar1;
  if ((DAT_0f5a2788 & 1) == 0) {
    *(undefined8 *)(unaff_RBX + 0x2c0) = _DAT_0f5a2798;
    uVar17 = _DAT_0f5a2790;
    *(undefined8 *)(unaff_RBX + 0x2b0) = CONCAT71(uRam000000000f5a2789,DAT_0f5a2788);
    *(undefined8 *)(unaff_RBX + 0x2b8) = uVar17;
  }
  else {
    func_0x0412e5e0((undefined8 *)(unaff_RBX + 0x2b0),_DAT_0f5a2798,_DAT_0f5a2790);
  }
  *(undefined4 *)(unaff_RBX + 0x2c8) = 0x891;
  *(undefined1 (*) [16])(unaff_RBX + 0x2d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBX + 0x2e0) = (undefined1  [16])0x0;
  *(undefined1 *)(unaff_RBX + 0x2f0) = 0;
  uVar17 = _DAT_01de623c;
  *(undefined8 *)(unaff_RBX + 0x2f4) = _DAT_01de623c;
  uVar7 = _DAT_01de6244;
  *(undefined4 *)(unaff_RBX + 0x2fc) = _DAT_01de6244;
  *(uint *)(unaff_RBX + 0x300) = unaff_R15[0x1d];
  *(undefined1 (*) [16])(unaff_RBX + 0x308) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBX + 0x318) = (undefined1  [16])0x0;
  *(uint *)(unaff_RBX + 0x328) = unaff_R15[0x29];
  *(undefined4 *)(unaff_RBX + 0x32c) = uStack0000000000000038;
  *(undefined4 *)(unaff_RBX + 0x330) = 0;
  *(undefined4 *)(unaff_RBX + 0x334) = uStack0000000000000010;
  *(undefined8 *)(unaff_RBX + 0x338) = 0x800000000;
  func_0x06cfd9a0(unaff_RBX + 0x340,1,0x1a,0x34,3,0);
  *(uint *)(unaff_RBX + 0x370) = unaff_R15[4];
  *(char *)(unaff_RBX + 0x374) = (char)unaff_R15[5];
  *(char *)(unaff_RBX + 0x375) = (char)unaff_R15[3];
  *(undefined2 *)(unaff_RBX + 0x376) = 0x100;
  *(undefined1 *)(unaff_RBX + 0x378) = *(undefined1 *)((long)unaff_R15 + 0x97);
  _uStack0000000000000038 = unaff_RBX + 0x380;
  func_0x04863480(_uStack0000000000000038,unaff_R15 + 8);
  *(undefined4 *)(unaff_RBX + 0x390) = 0xffffffff;
  *(undefined1 *)(unaff_RBX + 0x394) = unaff_BPL;
  *(uint *)(unaff_RBX + 0x398) = unaff_R15[0x19];
  *(char *)(unaff_RBX + 0x39c) = (char)unaff_R15[0x1a];
  *(uint *)(unaff_RBX + 0x3a0) = unaff_R15[0x1b];
  *(char *)(unaff_RBX + 0x3a4) = (char)unaff_R15[0x1c];
  *(undefined1 *)(unaff_RBX + 0x3a5) = *(undefined1 *)((long)unaff_R15 + 0x71);
  *(undefined4 *)(unaff_RBX + 0x3a8) = in_stack_00000ac0;
  cVar10 = func_0x0c9448b0();
  in_stack_00000058 = (undefined1 *)(unaff_RBX + 0x3b0);
  if (cVar10 == '\0') {
    *in_stack_00000058 = 0;
    uVar21 = 0;
  }
  else {
    if ((char)unaff_R15[0x10e] == '\0') {
      uVar17 = func_0x048a88b0();
      func_0x041084d6(&DAT_0f776b18);
      func_0x0d2090b0(unaff_RBX + 0x580);
      func_0x05cf9f90(unaff_RBX + 0x570);
      plVar14 = *(long **)(unaff_RBX + 0x568);
      *(undefined8 *)(unaff_RBX + 0x568) = 0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      if ((*(byte *)(unaff_RBX + 0x540) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x550),
                        *(ulong *)(unaff_RBX + 0x540) & 0xfffffffffffffffe);
      }
      func_0x06cf79c0(unaff_RBX + 0x518);
      func_0x06cf79c0(_uStack0000000000000010);
      if ((*in_stack_00000060 & 1) != 0) goto LAB_0d20a880;
      if ((*in_stack_00000068 & 1) != 0) goto LAB_0d20a8a5;
LAB_0d20a777:
      if ((*in_stack_00000070 & 1) != 0) goto LAB_0d20a8ca;
LAB_0d20a785:
      if ((*in_stack_00000078 & 1) != 0) goto LAB_0d20a8ef;
LAB_0d20a793:
      if ((*in_stack_00000080 & 1) != 0) goto LAB_0d20a917;
      do {
        cVar10 = *(char *)(unaff_RBX + 0x430);
        while( true ) {
          if (cVar10 == '\x01') {
            func_0x048f6240(in_stack_00000058);
          }
          func_0x04863610(_uStack0000000000000038);
          if ((*(byte *)(unaff_RBX + 0x358) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x368),
                            *(ulong *)(unaff_RBX + 0x358) & 0xfffffffffffffffe);
          }
          func_0x0c8f4a90(unaff_RBX + 0x308);
          func_0x0ee386e0(unaff_RBX + 0x2e0);
          func_0x0ee386e0(unaff_RBX + 0x2d8);
          if ((*(byte *)(unaff_RBX + 0x2b0) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x2c0),
                            *(ulong *)(unaff_RBX + 0x2b0) & 0xfffffffffffffffe);
          }
          if ((*in_stack_00000088 & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x288),
                            *(ulong *)(unaff_RBX + 0x278) & 0xfffffffffffffffe);
          }
          func_0x048f6210(unaff_RBX + 0x260);
          func_0x048f60c0(in_stack_00000048);
          func_0x0d200c80(CONCAT44(uStack0000000000000094,uStack0000000000000090));
          unaff_RBX = unaff_RBX + 8;
          func_0x0d209130(unaff_RBX);
          func_0x0eee2d70(uVar17);
LAB_0d20a880:
          func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x4e0),
                          *(ulong *)(unaff_RBX + 0x4d0) & 0xfffffffffffffffe);
          if ((*in_stack_00000068 & 1) == 0) goto LAB_0d20a777;
LAB_0d20a8a5:
          func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x4b0),
                          *(ulong *)(unaff_RBX + 0x4a0) & 0xfffffffffffffffe);
          if ((*in_stack_00000070 & 1) == 0) goto LAB_0d20a785;
LAB_0d20a8ca:
          func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x498),
                          *(ulong *)(unaff_RBX + 0x488) & 0xfffffffffffffffe);
          if ((*in_stack_00000078 & 1) == 0) goto LAB_0d20a793;
LAB_0d20a8ef:
          func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x480),
                          *(ulong *)(unaff_RBX + 0x470) & 0xfffffffffffffffe);
          if ((*in_stack_00000080 & 1) == 0) break;
LAB_0d20a917:
          func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x468),
                          *(ulong *)(unaff_RBX + 0x458) & 0xfffffffffffffffe);
          cVar10 = *(char *)(unaff_RBX + 0x430);
        }
      } while( true );
    }
    uVar21 = 1;
    func_0x0491d030(in_stack_00000058,unaff_R15 + 0xee);
  }
  *(undefined1 *)(unaff_RBX + 0x430) = uVar21;
  *(char *)(unaff_RBX + 0x438) = (char)unaff_R15[0x1f];
  *(undefined1 *)(unaff_RBX + 0x439) = 0;
  *(char *)(unaff_RBX + 0x43a) = (char)unaff_R15[0x22];
  uVar21 = *(undefined1 *)((long)unaff_R15 + 0x89);
  *(undefined1 *)(unaff_RBX + 0x43b) = uVar21;
  *(undefined1 *)(unaff_RBX + 0x43c) = uVar21;
  uVar21 = *(undefined1 *)((long)unaff_R15 + 0x8a);
  *(undefined1 *)(unaff_RBX + 0x43d) = uVar21;
  *(undefined1 *)(unaff_RBX + 0x43e) = uVar21;
  uVar22 = (undefined4)*(undefined8 *)(unaff_R15 + 0x23);
  uVar23 = (undefined4)((ulong)*(undefined8 *)(unaff_R15 + 0x23) >> 0x20);
  *(undefined4 *)(unaff_RBX + 0x440) = uVar22;
  *(undefined4 *)(unaff_RBX + 0x444) = uVar22;
  *(undefined4 *)(unaff_RBX + 0x448) = uVar23;
  *(undefined4 *)(unaff_RBX + 0x44c) = uVar23;
  *(undefined1 *)(unaff_RBX + 0x450) = *(undefined1 *)((long)unaff_R15 + 0x96);
  *(uint *)(unaff_RBX + 0x451) = unaff_R15[0x26];
  *(char *)(unaff_RBX + 0x455) = (char)unaff_R15[0x27];
  *(undefined1 *)(unaff_RBX + 0x456) = *(undefined1 *)((long)unaff_R15 + 0x9d);
  in_stack_00000080 = (byte *)(unaff_RBX + 0x458);
  if ((unaff_R15[0x82] & 1) == 0) {
    *(undefined8 *)(unaff_RBX + 0x468) = *(undefined8 *)(unaff_R15 + 0x86);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x84);
    *(undefined8 *)in_stack_00000080 = *(undefined8 *)(unaff_R15 + 0x82);
    *(undefined8 *)(unaff_RBX + 0x460) = uVar5;
  }
  else {
    func_0x0412e5e0(in_stack_00000080,*(undefined8 *)(unaff_R15 + 0x86),
                    *(undefined8 *)(unaff_R15 + 0x84));
  }
  in_stack_00000078 = (byte *)(unaff_RBX + 0x470);
  if ((unaff_R15[0x88] & 1) == 0) {
    *(undefined8 *)(unaff_RBX + 0x480) = *(undefined8 *)(unaff_R15 + 0x8c);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x8a);
    *(undefined8 *)in_stack_00000078 = *(undefined8 *)(unaff_R15 + 0x88);
    *(undefined8 *)(unaff_RBX + 0x478) = uVar5;
  }
  else {
    func_0x0412e5e0(in_stack_00000078,*(undefined8 *)(unaff_R15 + 0x8c),
                    *(undefined8 *)(unaff_R15 + 0x8a));
  }
  in_stack_00000070 = (byte *)(unaff_RBX + 0x488);
  if ((unaff_R15[0x8e] & 1) == 0) {
    *(undefined8 *)(unaff_RBX + 0x498) = *(undefined8 *)(unaff_R15 + 0x92);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x90);
    *(undefined8 *)in_stack_00000070 = *(undefined8 *)(unaff_R15 + 0x8e);
    *(undefined8 *)(unaff_RBX + 0x490) = uVar5;
  }
  else {
    func_0x0412e5e0(in_stack_00000070,*(undefined8 *)(unaff_R15 + 0x92),
                    *(undefined8 *)(unaff_R15 + 0x90));
  }
  in_stack_00000068 = (byte *)(unaff_RBX + 0x4a0);
  if ((unaff_R15[0x94] & 1) == 0) {
    *(undefined8 *)(unaff_RBX + 0x4b0) = *(undefined8 *)(unaff_R15 + 0x98);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x96);
    *(undefined8 *)in_stack_00000068 = *(undefined8 *)(unaff_R15 + 0x94);
    *(undefined8 *)(unaff_RBX + 0x4a8) = uVar5;
  }
  else {
    func_0x0412e5e0(in_stack_00000068,*(undefined8 *)(unaff_R15 + 0x98),
                    *(undefined8 *)(unaff_R15 + 0x96));
  }
  *(undefined1 *)(unaff_RBX + 0x4b8) = *(undefined1 *)((long)unaff_R15 + 0x9e);
  *(char *)(unaff_RBX + 0x4b9) = (char)unaff_R15[0x28];
  *(undefined1 *)(unaff_RBX + 0x4ba) = 0;
  *(undefined1 *)(unaff_RBX + 0x4bb) = *(undefined1 *)((long)unaff_R15 + 0xa1);
  *(undefined2 *)(unaff_RBX + 0x4bc) = 0;
  *(undefined4 *)(unaff_RBX + 0x4be) = *(undefined4 *)((long)unaff_R15 + 0xaa);
  *(undefined1 *)(unaff_RBX + 0x4c2) = 0;
  *(undefined1 *)(unaff_RBX + 0x4c3) = *(undefined1 *)((long)unaff_R15 + 0x31);
  *(short *)(unaff_RBX + 0x4c8) = (short)unaff_R15[0xe];
  in_stack_00000060 = (byte *)(unaff_RBX + 0x4d0);
  if ((unaff_R15[0x10] & 1) == 0) {
    *(undefined8 *)(unaff_RBX + 0x4e0) = *(undefined8 *)(unaff_R15 + 0x14);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x12);
    *(undefined8 *)in_stack_00000060 = *(undefined8 *)(unaff_R15 + 0x10);
    *(undefined8 *)(unaff_RBX + 0x4d8) = uVar5;
  }
  else {
    func_0x0412e5e0(in_stack_00000060,*(undefined8 *)(unaff_R15 + 0x14),
                    *(undefined8 *)(unaff_R15 + 0x12));
  }
  *(uint *)(unaff_RBX + 0x4e8) = unaff_R15[0x16];
  _uStack0000000000000010 = (long *)(unaff_RBX + 0x4f0);
  *(undefined1 (*) [16])(unaff_RBX + 0x4f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBX + 0x500) = (undefined1  [16])0x0;
  *(undefined4 *)(unaff_RBX + 0x510) = 0x3f800000;
  *(undefined1 (*) [16])(unaff_RBX + 0x518) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBX + 0x528) = (undefined1  [16])0x0;
  *(undefined4 *)(unaff_RBX + 0x538) = 0x3f800000;
  *(undefined1 *)(unaff_RBX + 0x55c) = 0;
  *(undefined1 (*) [16])(unaff_RBX + 0x540) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBX + 0x549) = (undefined1  [16])0x0;
  *(char *)(unaff_RBX + 0x560) = (char)unaff_R15[0xac];
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
  puVar12[1] = puVar12 + 1;
  puVar12[2] = puVar12 + 1;
  *puVar12 = &UNK_0f02e910;
  puVar12[4] = &UNK_0f02e940;
  *(undefined8 **)(unaff_RBX + 0x568) = puVar12;
  *(undefined1 (*) [16])(unaff_RBX + 0x570) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBX + 0x580) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBX + 0x590) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBX + 0x5a0) = (undefined1  [16])0x0;
  *(undefined4 *)(unaff_RBX + 0x5b0) = 0;
  func_0x0d208450();
  func_0x0d20a940();
  func_0x0d208b60();
  auStack00000000000000a1._7_4_ = uVar7;
  _uStack00000000000000a0 = uVar17;
  uStack00000000000000b8 = 6;
  in_stack_00000018 = (undefined8 *)0xf71d600;
  lVar13 = func_0x09be9cc0(_uStack0000000000000010,0xf71d600,&UNK_01563a4f,&stack0x00000018,
                           &stack0x0000000f);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (uStack00000000000000b8 != 0xffffffff) goto LAB_0d209a1a;
  }
  else {
    if (uStack00000000000000b8 == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(&stack0x00000018);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209a1a:
      in_stack_00000018 = (undefined8 *)(lVar13 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)uStack00000000000000b8 * 8))
                (&stack0x00000018,lVar13 + 0x38,&stack0x000000a0);
    }
    if ((ulong)(uint)uStack00000000000000b8 != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)uStack00000000000000b8 * 8))
                (&stack0x00000018,&stack0x000000a0);
    }
  }
  _uStack00000000000000a0 = unaff_R15[0x2c];
  uStack00000000000000b8 = 0;
  in_stack_00000018 = (undefined8 *)0xf71d748;
  lVar13 = func_0x09be9cc0(_uStack0000000000000010,0xf71d748,&UNK_01563a4f,&stack0x00000018,
                           &stack0x0000000f);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (uStack00000000000000b8 != 0xffffffff) goto LAB_0d209adf;
  }
  else {
    if (uStack00000000000000b8 == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(&stack0x00000018);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209adf:
      in_stack_00000018 = (undefined8 *)(lVar13 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)uStack00000000000000b8 * 8))
                (&stack0x00000018,lVar13 + 0x38,&stack0x000000a0);
    }
    if ((ulong)(uint)uStack00000000000000b8 != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)uStack00000000000000b8 * 8))
                (&stack0x00000018,&stack0x000000a0);
    }
  }
  _uStack00000000000000a0 = unaff_R15[0x2d];
  uStack00000000000000b8 = 0;
  in_stack_00000018 = (undefined8 *)0xf71d770;
  lVar13 = func_0x09be9cc0(_uStack0000000000000010,0xf71d770,&UNK_01563a4f,&stack0x00000018,
                           &stack0x0000000f);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (uStack00000000000000b8 != 0xffffffff) goto LAB_0d209ba4;
  }
  else {
    if (uStack00000000000000b8 == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(&stack0x00000018);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209ba4:
      in_stack_00000018 = (undefined8 *)(lVar13 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)uStack00000000000000b8 * 8))
                (&stack0x00000018,lVar13 + 0x38,&stack0x000000a0);
    }
    if ((ulong)(uint)uStack00000000000000b8 != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)uStack00000000000000b8 * 8))
                (&stack0x00000018,&stack0x000000a0);
    }
  }
  uStack00000000000000a0 = (char)unaff_R15[0x25];
  uStack00000000000000b8 = 9;
  in_stack_00000018 = (undefined8 *)0xf71d560;
  lVar13 = func_0x09be9cc0(_uStack0000000000000010,0xf71d560,&UNK_01563a4f,&stack0x00000018,
                           &stack0x0000000f);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (uStack00000000000000b8 != 0xffffffff) goto LAB_0d209c6a;
  }
  else {
    if (uStack00000000000000b8 == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(&stack0x00000018);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209c6a:
      in_stack_00000018 = (undefined8 *)(lVar13 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)uStack00000000000000b8 * 8))
                (&stack0x00000018,lVar13 + 0x38,&stack0x000000a0);
    }
    if ((ulong)(uint)uStack00000000000000b8 != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)uStack00000000000000b8 * 8))
                (&stack0x00000018,&stack0x000000a0);
    }
  }
  func_0x0d208ea0();
  func_0x0d208c60();
  func_0x0d208dd0();
  _uStack00000000000000a0 = (undefined1  [16])0x0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = _uStack00000000000000b8;
  _lStack00000000000000b0 = auVar6 << 0x40;
  func_0x0d208fa0();
  _lStack00000000000000b0 = (undefined1  [16])0x0;
  _uStack00000000000000a0 = (long)&UNK_0f47e0b0;
  auStack00000000000000a1._7_8_ = &stack0x000000b0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *puVar12 = &UNK_0f47e0b0;
  puVar12[1] = auStack00000000000000a1._7_8_;
  puVar12[2] = lStack00000000000000b0;
  puVar12[3] = _uStack00000000000000b8;
  if (_uStack00000000000000b8 == 0) {
    puVar12[1] = puVar12 + 2;
  }
  else {
    *(undefined8 **)(lStack00000000000000b0 + 0x10) = puVar12 + 2;
    _lStack00000000000000b0 = (undefined1  [16])0x0;
    lStack00000000000000b0 = 0;
    auStack00000000000000a1._7_8_ = &stack0x000000b0;
  }
  _uStack00000000000000a0 = (long)&UNK_0f47e0b0;
  func_0x0d6c9500(&stack0x000000a0 + 8,lStack00000000000000b0);
  in_stack_00000030 = 8;
  _uStack00000000000000a0 = 0xf71d5d8;
  in_stack_00000018 = puVar12;
  lVar13 = func_0x09be9cc0(_uStack0000000000000010,0xf71d5d8,&UNK_01563a4f,&stack0x000000a0,
                           &stack0x0000000f);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (in_stack_00000030 != 0xffffffff) goto LAB_0d209e2e;
  }
  else {
    if (in_stack_00000030 == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(&stack0x000000a0);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209e2e:
      _uStack00000000000000a0 = lVar13 + 0x38;
      (**(code **)(&UNK_0f45a900 + (ulong)in_stack_00000030 * 8))
                (&stack0x000000a0,lVar13 + 0x38,&stack0x00000018);
    }
    if ((ulong)in_stack_00000030 != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)in_stack_00000030 * 8))(&stack0x000000a0,&stack0x00000018)
      ;
    }
  }
  _lStack00000000000000b0 = (undefined1  [16])0x0;
  _uStack00000000000000a0 = (long)&UNK_0f47e0b0;
  auStack00000000000000a1._7_8_ = &stack0x000000b0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  piVar8 = in_stack_00000050;
  *puVar12 = &UNK_0f47e0b0;
  puVar12[1] = auStack00000000000000a1._7_8_;
  puVar12[2] = lStack00000000000000b0;
  puVar12[3] = _uStack00000000000000b8;
  if (_uStack00000000000000b8 == 0) {
    puVar12[1] = puVar12 + 2;
  }
  else {
    *(undefined8 **)(lStack00000000000000b0 + 0x10) = puVar12 + 2;
    _lStack00000000000000b0 = (undefined1  [16])0x0;
    lStack00000000000000b0 = 0;
    auStack00000000000000a1._7_8_ = &stack0x000000b0;
  }
  _uStack00000000000000a0 = (long)&UNK_0f47e0b0;
  func_0x0d6c9500(&stack0x000000a0 + 8,lStack00000000000000b0);
  in_stack_00000030 = 8;
  _uStack00000000000000a0 = 0xf71d628;
  in_stack_00000018 = puVar12;
  lVar13 = func_0x09be9cc0(_uStack0000000000000010,0xf71d628,&UNK_01563a4f,&stack0x000000a0,
                           &stack0x0000000f);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (in_stack_00000030 != 0xffffffff) goto LAB_0d209f9a;
  }
  else {
    if (in_stack_00000030 == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(&stack0x000000a0);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209f9a:
      _uStack00000000000000a0 = lVar13 + 0x38;
      (**(code **)(&UNK_0f45a900 + (ulong)in_stack_00000030 * 8))
                (&stack0x000000a0,lVar13 + 0x38,&stack0x00000018);
    }
    if ((ulong)in_stack_00000030 != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)in_stack_00000030 * 8))(&stack0x000000a0,&stack0x00000018)
      ;
    }
  }
  func_0x0d20aaa0();
  cVar10 = func_0x04864260(_uStack0000000000000038);
  if (cVar10 == '\0') goto LAB_0d20a24b;
  func_0x0d3a5d30(&stack0x000000a0);
  plVar14 = (long *)func_0x0d227700(_uStack0000000000000010,0xf71d5b0);
  if (plVar14 != (long *)0x0) {
    lVar13 = *plVar14;
    uVar19 = plVar14[1];
    uVar2 = *(ulong *)(unaff_RBX + 0x4f8);
    uVar15 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
    uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar15 >> 0x38 < 2) {
      uVar19 = uVar19 & uVar2 - 1;
    }
    else if (uVar2 <= uVar19) {
      if ((uVar19 | uVar2) >> 0x20 == 0) {
        uVar19 = (uVar19 & 0xffffffff) % (uVar2 & 0xffffffff);
      }
      else {
        uVar19 = uVar19 % uVar2;
      }
    }
    lVar3 = *_uStack0000000000000010;
    plVar9 = *(long **)(lVar3 + uVar19 * 8);
    do {
      plVar16 = plVar9;
      plVar9 = (long *)*plVar16;
    } while ((long *)*plVar16 != plVar14);
    bVar4 = (byte)(uVar15 >> 0x38);
    if (plVar16 == (long *)(unaff_RBX + 0x500)) {
LAB_0d20a131:
      if (lVar13 == 0) {
LAB_0d20a173:
        *(undefined8 *)(lVar3 + uVar19 * 8) = 0;
        lVar13 = *plVar14;
        goto LAB_0d20a17e;
      }
      uVar15 = *(ulong *)(lVar13 + 8);
      if (bVar4 < 2) {
        uVar20 = uVar2 - 1 & uVar15;
      }
      else {
        uVar20 = uVar15;
        if (uVar2 <= uVar15) {
          if ((uVar15 | uVar2) >> 0x20 == 0) {
            uVar20 = (uVar15 & 0xffffffff) % (uVar2 & 0xffffffff);
          }
          else {
            uVar20 = uVar15 % uVar2;
          }
        }
      }
      if (uVar20 != uVar19) goto LAB_0d20a173;
LAB_0d20a187:
      if (bVar4 < 2) {
        uVar15 = uVar15 & uVar2 - 1;
      }
      else if (uVar2 <= uVar15) {
        if ((uVar15 | uVar2) >> 0x20 == 0) {
          uVar15 = (uVar15 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar15 = uVar15 % uVar2;
        }
      }
      if (uVar15 != uVar19) {
        *(long **)(lVar3 + uVar15 * 8) = plVar16;
        lVar13 = *plVar14;
      }
    }
    else {
      uVar15 = plVar16[1];
      if (bVar4 < 2) {
        uVar15 = uVar15 & uVar2 - 1;
      }
      else if (uVar2 <= uVar15) {
        if ((uVar15 | uVar2) >> 0x20 == 0) {
          uVar15 = (uVar15 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar15 = uVar15 % uVar2;
        }
      }
      if (uVar15 != uVar19) goto LAB_0d20a131;
LAB_0d20a17e:
      if (lVar13 != 0) {
        uVar15 = *(ulong *)(lVar13 + 8);
        goto LAB_0d20a187;
      }
      lVar13 = 0;
    }
    *plVar16 = lVar13;
    *plVar14 = 0;
    *(long *)(unaff_RBX + 0x508) = *(long *)(unaff_RBX + 0x508) + -1;
    if ((ulong)*(uint *)(plVar14 + 10) != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(plVar14 + 10) * 8))
                (&stack0x00000018,plVar14 + 7);
    }
    *(undefined4 *)(plVar14 + 10) = 0xffffffff;
    if ((*(byte *)(plVar14 + 3) & 1) != 0) {
      func_0x0412a280(plVar14[5],plVar14[3] & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar14,0x58);
  }
  func_0x04863740(_uStack0000000000000038,&stack0x000000a0);
  func_0x04863610(&stack0x000000a0);
LAB_0d20a24b:
  if (*(int *)(unaff_RBX + 0x3a8) != 0) {
    *(undefined1 *)(unaff_RBX + 0x452) = 1;
  }
  if (((!SBORROW4(0,*piVar8)) || (!SBORROW4(0,piVar8[1]))) || (!SBORROW4(0,piVar8[2]))) {
    func_0x0d20ac00();
  }
  uVar18 = *unaff_R15;
  auStack00000000000000a1._7_4_ = uVar18;
  _uStack00000000000000a0 = (long)&UNK_0f5356d0;
  auStack00000000000000a1._11_4_ = uVar18;
  lVar13 = 5;
  while( true ) {
    uVar19 = ((ulong)((uVar18 >> 0x1e ^ uVar18) * 0x6c078965) + lVar13) - 4;
    uVar18 = (uint)uVar19;
    *(uint *)(&stack0x000000a0 + lVar13 * 4 + -4) = uVar18;
    if (lVar13 == 0x191) break;
    uVar18 = (((uint)(uVar19 >> 0x1e) & 3 ^ uVar18) * 0x6c078965 + (int)lVar13) - 3;
    *(uint *)(&stack0x000000a0 + lVar13 * 4) = uVar18;
    lVar13 = lVar13 + 2;
  }
  iVar11 = func_0x0ee4a260(&stack0x000000a0,0x29040);
  *(int *)(unaff_RBX + 0x330) = iVar11 + 12000;
  iVar11 = (**(code **)(_uStack00000000000000a0 + 0x18))(&stack0x000000a0,0x29040);
  *(int *)(unaff_RBX + 0x338) = iVar11 + 12000;
  *(short *)(unaff_RBX + 0x260) = (short)unaff_R15[0x2e];
  uVar17 = *(undefined8 *)(unaff_R15 + 0x30);
  uVar5 = *(undefined8 *)(unaff_R15 + 0x32);
  if (*(long *)(unaff_R15 + 0x32) != 0) {
    LOCK();
    plVar14 = (long *)(*(long *)(unaff_R15 + 0x32) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = *(long **)(unaff_RBX + 0x270);
  *(undefined8 *)(unaff_RBX + 0x268) = uVar17;
  *(undefined8 *)(unaff_RBX + 0x270) = uVar5;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar9 = plVar14 + 1;
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0bc26b90(in_stack_00000098,(int)*(char *)(unaff_RBX + 0x261));
  *(undefined1 *)(unaff_RBX + 2) = *(undefined1 *)((long)unaff_R15 + 0x7d);
  if ((DAT_0f776b18 == '\0') && (iVar11 = func_0x04108328(&DAT_0f776b18), iVar11 != 0)) {
    func_0x0edf5500(0xf776968);
    func_0x0eee2f40(&SUB_0edf6010,0xf776968,0xf53dab8);
    func_0x0410844d(&DAT_0f776b18);
  }
  func_0x0ee32f20(0xf7769b0,unaff_RBX + 0x2d0,1);
  return;
}


