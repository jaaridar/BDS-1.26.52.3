/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd393fc0 (ELF vaddr 0xd293fc0)
 * Label: caller-of-callee
 * Body:  [[0d393fc0, 0d393fc0]]
 * Ghidra: _INIT_1777
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1777(void)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined1 uStack_f0;
  long lStack_e8;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined4 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined4 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  long *plStack_50;
  long *plStack_48;
  undefined4 *puStack_40;
  long lStack_38;
  
  uRam000000000f71f4d3 = 0;
  uRam000000000f71f4d8 = 0;
  uRam000000000f71f4b8 = 0x7626cecdd1636c1f;
  uRam000000000f71f4c0 = CONCAT31((int3)_UNK_01221fe9,0x24);
  uRam000000000f71f4c4._1_3_ = (undefined3)_UNK_01221fed;
  uRam000000000f71f4c4 = CONCAT31(uRam000000000f71f4c4._1_3_,(char)((uint)_UNK_01221fe9 >> 0x18));
  uRam000000000f71f4c8._1_3_ = (undefined3)_UNK_01221ff1;
  uRam000000000f71f4c8 = CONCAT31(uRam000000000f71f4c8._1_3_,(char)((uint)_UNK_01221fed >> 0x18));
  uRam000000000f71f4cc._1_3_ = (undefined3)_UNK_01221ff5;
  uRam000000000f71f4cc = CONCAT31(uRam000000000f71f4cc._1_3_,(char)((uint)_UNK_01221ff1 >> 0x18));
  uRam000000000f71f4d0 = (undefined1)((uint)_UNK_01221ff5 >> 0x18);
  uRam000000000f71f4d1 = 0x7974;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f4b8,0xf53dab8);
  uRam000000000f71f763 = 0;
  uRam000000000f71f768 = 0;
  uRam000000000f71f748 = 0x232484ecb6c3bf5a;
  uRam000000000f71f750 = CONCAT31((int3)_UNK_014c9166,0x24);
  uRam000000000f71f754._1_3_ = (undefined3)_UNK_014c916a;
  uRam000000000f71f754 = CONCAT31(uRam000000000f71f754._1_3_,(char)((uint)_UNK_014c9166 >> 0x18));
  uRam000000000f71f758._1_3_ = (undefined3)_UNK_014c916e;
  uRam000000000f71f758 = CONCAT31(uRam000000000f71f758._1_3_,(char)((uint)_UNK_014c916a >> 0x18));
  uRam000000000f71f75c._1_3_ = (undefined3)_UNK_014c9172;
  uRam000000000f71f75c = CONCAT31(uRam000000000f71f75c._1_3_,(char)((uint)_UNK_014c916e >> 0x18));
  uRam000000000f71f760 = (undefined1)((uint)_UNK_014c9172 >> 0x18);
  uRam000000000f71f761 = 0x7373;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f748,0xf53dab8);
  uRam000000000f71f994 = 0;
  uRam000000000f71f998 = 0;
  uRam000000000f71f978 = 0x6c172ab68623fdcf;
  uRam000000000f71f980 = CONCAT31((int3)_UNK_011ec666,0x26);
  uRam000000000f71f984._1_3_ = (undefined3)_UNK_011ec66a;
  uRam000000000f71f984 = CONCAT31(uRam000000000f71f984._1_3_,(char)((uint)_UNK_011ec666 >> 0x18));
  uRam000000000f71f988._1_3_ = (undefined3)_UNK_011ec66e;
  uRam000000000f71f988 = CONCAT31(uRam000000000f71f988._1_3_,(char)((uint)_UNK_011ec66a >> 0x18));
  uRam000000000f71f98c._1_3_ = (undefined3)_UNK_011ec672;
  uRam000000000f71f98c = CONCAT31(uRam000000000f71f98c._1_3_,(char)((uint)_UNK_011ec66e >> 0x18));
  uRam000000000f71f990 = 0x74666168;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f978,0xf53dab8);
  uRam000000000f71f78b = 0;
  uRam000000000f71f790 = 0;
  uRam000000000f71f770 = 0x6e650677fbf00133;
  uRam000000000f71f778 = CONCAT31((int3)_UNK_0119c6fb,0x24);
  uRam000000000f71f77c._1_3_ = (undefined3)_UNK_0119c6ff;
  uRam000000000f71f77c = CONCAT31(uRam000000000f71f77c._1_3_,(char)((uint)_UNK_0119c6fb >> 0x18));
  uRam000000000f71f780._1_3_ = (undefined3)_UNK_0119c703;
  uRam000000000f71f780 = CONCAT31(uRam000000000f71f780._1_3_,(char)((uint)_UNK_0119c6ff >> 0x18));
  uRam000000000f71f784._1_3_ = (undefined3)_UNK_0119c707;
  uRam000000000f71f784 = CONCAT31(uRam000000000f71f784._1_3_,(char)((uint)_UNK_0119c703 >> 0x18));
  uRam000000000f71f788 = (undefined1)((uint)_UNK_0119c707 >> 0x18);
  uRam000000000f71f789 = 0x746e;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f770,0xf53dab8);
  uRam000000000f71f4fd = 0;
  uRam000000000f71f500 = 0;
  uRam000000000f71f4e0 = 0x299ca55b079fde16;
  uRam000000000f71f4e8 = CONCAT31((int3)_UNK_0130a0bc,0x28);
  uRam000000000f71f4ec._1_3_ = (undefined3)_UNK_0130a0c0;
  uRam000000000f71f4ec = CONCAT31(uRam000000000f71f4ec._1_3_,(char)((uint)_UNK_0130a0bc >> 0x18));
  uRam000000000f71f4f0._1_3_ = (undefined3)_UNK_0130a0c4;
  uRam000000000f71f4f0 = CONCAT31(uRam000000000f71f4f0._1_3_,(char)((uint)_UNK_0130a0c0 >> 0x18));
  uRam000000000f71f4f4._1_3_ = (undefined3)_UNK_0130a0c8;
  uRam000000000f71f4f4 = CONCAT31(uRam000000000f71f4f4._1_3_,(char)((uint)_UNK_0130a0c4 >> 0x18));
  uRam000000000f71f4f8 = (undefined1)((uint)_UNK_0130a0c8 >> 0x18);
  uRam000000000f71f4f9 = 0x646c6f68;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f4e0,0xf53dab8);
  uRam000000000f71f829 = 0;
  uRam000000000f71f830 = 0;
  uRam000000000f71f810 = 0x26e9827ebcf34ba7;
  uRam000000000f71f818 = CONCAT31((int3)_UNK_0147123a,0x20);
  uRam000000000f71f81c._1_3_ = (undefined3)_UNK_0147123e;
  uRam000000000f71f81c = CONCAT31(uRam000000000f71f81c._1_3_,(char)((uint)_UNK_0147123a >> 0x18));
  uRam000000000f71f820._1_3_ = (undefined3)_UNK_01471242;
  uRam000000000f71f820 = CONCAT31(uRam000000000f71f820._1_3_,(char)((uint)_UNK_0147123e >> 0x18));
  uRam000000000f71f824._1_3_ = (undefined3)_UNK_01471246;
  uRam000000000f71f824 = CONCAT31(uRam000000000f71f824._1_3_,(char)((uint)_UNK_01471242 >> 0x18));
  uRam000000000f71f828 = (undefined1)((uint)_UNK_01471246 >> 0x18);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f810,0xf53dab8);
  uRam000000000f71f802 = 0;
  uRam000000000f71f808 = 0;
  uRam000000000f71f7e8 = 0x7f714940756831b4;
  uRam000000000f71f7f0 = CONCAT31((int3)_UNK_012bd6fd,0x22);
  uRam000000000f71f7f4._1_3_ = (undefined3)_UNK_012bd701;
  uRam000000000f71f7f4 = CONCAT31(uRam000000000f71f7f4._1_3_,(char)((uint)_UNK_012bd6fd >> 0x18));
  uRam000000000f71f7f8._1_3_ = (undefined3)_UNK_012bd705;
  uRam000000000f71f7f8 = CONCAT31(uRam000000000f71f7f8._1_3_,(char)((uint)_UNK_012bd701 >> 0x18));
  uRam000000000f71f7fc._1_3_ = (undefined3)_UNK_012bd709;
  uRam000000000f71f7fc = CONCAT31(uRam000000000f71f7fc._1_3_,(char)((uint)_UNK_012bd705 >> 0x18));
  uRam000000000f71f800 = (undefined1)((uint)_UNK_012bd709 >> 0x18);
  uRam000000000f71f801 = 0x65;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f7e8,0xf53dab8);
  uRam000000000f71f7b2 = 0;
  uRam000000000f71f7b8 = 0;
  uRam000000000f71f798 = 0x9e56b61f2502f6fb;
  uRam000000000f71f7a0 = CONCAT31((int3)_UNK_012a3fc0,0x22);
  uRam000000000f71f7a4._1_3_ = (undefined3)_UNK_012a3fc4;
  uRam000000000f71f7a4 = CONCAT31(uRam000000000f71f7a4._1_3_,(char)((uint)_UNK_012a3fc0 >> 0x18));
  uRam000000000f71f7a8._1_3_ = (undefined3)_UNK_012a3fc8;
  uRam000000000f71f7a8 = CONCAT31(uRam000000000f71f7a8._1_3_,(char)((uint)_UNK_012a3fc4 >> 0x18));
  uRam000000000f71f7ac._1_3_ = (undefined3)_UNK_012a3fcc;
  uRam000000000f71f7ac = CONCAT31(uRam000000000f71f7ac._1_3_,(char)((uint)_UNK_012a3fc8 >> 0x18));
  uRam000000000f71f7b0 = (undefined1)((uint)_UNK_012a3fcc >> 0x18);
  uRam000000000f71f7b1 = 0x6e;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f798,0xf53dab8);
  uRam000000000f71f524 = 0;
  uRam000000000f71f528 = 0;
  uRam000000000f71f508 = 0xc0ff8b2a75e3d0d8;
  uRam000000000f71f510 = CONCAT31((int3)_UNK_012a3fac,0x26);
  uRam000000000f71f514._1_3_ = (undefined3)_UNK_012a3fb0;
  uRam000000000f71f514 = CONCAT31(uRam000000000f71f514._1_3_,(char)((uint)_UNK_012a3fac >> 0x18));
  uRam000000000f71f518._1_3_ = (undefined3)_UNK_012a3fb4;
  uRam000000000f71f518 = CONCAT31(uRam000000000f71f518._1_3_,(char)((uint)_UNK_012a3fb0 >> 0x18));
  uRam000000000f71f51c._1_3_ = (undefined3)_UNK_012a3fb8;
  uRam000000000f71f51c = CONCAT31(uRam000000000f71f51c._1_3_,(char)((uint)_UNK_012a3fb4 >> 0x18));
  uRam000000000f71f520 = 0x6b636572;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f508,0xf53dab8);
  uRam000000000f71f7c8 = 0;
  uRam000000000f71f7d0 = 0;
  uRam000000000f71f7d8 = 0;
  uRam000000000f71f7e0 = 0;
  uRam000000000f71f7c0 = 0x13f4f5102a738f79;
  func_0x0412f5e0(0xf71f7c8,&UNK_013f9545,0x19);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f7c0,0xf53dab8);
  uRam000000000f71f9b8 = 0;
  uRam000000000f71f9c0 = 0;
  uRam000000000f71f9a0 = 0x165cee963308d8c5;
  uRam000000000f71f9a8 = 0x6e696d1e;
  uRam000000000f71f9ac = 0x61726365;
  uRam000000000f71f9b0 = 0x723a7466;
  uRam000000000f71f9b4 = 0x736e6975;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f9a0,0xf53dab8);
  uRam000000000f71f728 = 0;
  uRam000000000f71f730 = 0;
  uRam000000000f71f738 = 0;
  uRam000000000f71f740 = 0;
  uRam000000000f71f720 = 0xadb97bdc44ae323f;
  func_0x0412f5e0(0xf71f728,&UNK_013762b7,0x1a);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f720,0xf53dab8);
  uRam000000000f71f538 = 0;
  uRam000000000f71f540 = 0;
  uRam000000000f71f548 = 0;
  uRam000000000f71f550 = 0;
  uRam000000000f71f530 = 0x3dc2909ceb39fb0a;
  func_0x0412f5e0(0xf71f538,&UNK_011d3c89,0x17);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f530,0xf53dab8);
  uRam000000000f71f560 = 0;
  uRam000000000f71f568 = 0;
  uRam000000000f71f570 = 0;
  uRam000000000f71f578 = 0;
  uRam000000000f71f558 = 0xc338c9ee71be6c84;
  func_0x0412f5e0(0xf71f560,&UNK_013df293,0x19);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f558,0xf53dab8);
  uRam000000000f71f9e8 = 0;
  uRam000000000f71f9c8 = 0xc5ed9abd8eb58a9e;
  uRam000000000f71f9e1 = 0x797469635f74;
  uRam000000000f71f9d0 = CONCAT31((int3)_UNK_01271b2c,0x2c);
  uRam000000000f71f9d4._1_3_ = (undefined3)_UNK_01271b30;
  uRam000000000f71f9d4 = CONCAT31(uRam000000000f71f9d4._1_3_,(char)((uint)_UNK_01271b2c >> 0x18));
  uRam000000000f71f9d8._1_3_ = (undefined3)_UNK_01271b34;
  uRam000000000f71f9d8 = CONCAT31(uRam000000000f71f9d8._1_3_,(char)((uint)_UNK_01271b30 >> 0x18));
  uRam000000000f71f9dc = (undefined1)((uint)_UNK_01271b34 >> 0x18);
  uRam000000000f71f9dd = (undefined2)_UNK_01271b38;
  uRam000000000f71f9df = (undefined1)((uint)_UNK_01271b38 >> 0x10);
  uRam000000000f71f9e0 = (undefined1)((uint)_UNK_01271b38 >> 0x18);
  uRam000000000f71f9e7 = 0;
  func_0x0eee2f40(&UNK_048c16a0,0xf71f9c8,0xf53dab8);
  uRam000000000f71fa0e = 0;
  uRam000000000f71fa10 = 0;
  uRam000000000f71f9f0 = 0x41f6d47dd4a4e864;
  uRam000000000f71fa09 = 0x736e697572;
  uRam000000000f71f9f8 = CONCAT31((int3)_UNK_01234bea,0x2a);
  uRam000000000f71f9fc._1_3_ = (undefined3)_UNK_01234bee;
  uRam000000000f71f9fc = CONCAT31(uRam000000000f71f9fc._1_3_,(char)((uint)_UNK_01234bea >> 0x18));
  uRam000000000f71fa00._1_3_ = (undefined3)_UNK_01234bf2;
  uRam000000000f71fa00 = CONCAT31(uRam000000000f71fa00._1_3_,(char)((uint)_UNK_01234bee >> 0x18));
  uRam000000000f71fa04 = (undefined1)((uint)_UNK_01234bf2 >> 0x18);
  uRam000000000f71fa05 = (undefined1)_UNK_01234bf6;
  uRam000000000f71fa06 = (undefined2)((uint)_UNK_01234bf6 >> 8);
  uRam000000000f71fa08 = (undefined1)((uint)_UNK_01234bf6 >> 0x18);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f9f0,0xf53dab8);
  uRam000000000f71fa20 = 0;
  uRam000000000f71fa28 = 0;
  uRam000000000f71fa30 = 0;
  uRam000000000f71fa38 = 0;
  uRam000000000f71fa18 = 0x8dc8d4cc9b3eb30a;
  func_0x0412f5e0(0xf71fa20,&UNK_012cdf30,0x18);
  func_0x0eee2f40(&UNK_048c16a0,0xf71fa18,0xf53dab8);
  uRam000000000f71f840 = 0;
  uRam000000000f71f848 = 0;
  uRam000000000f71f850 = 0;
  uRam000000000f71f858 = 0;
  uRam000000000f71f838 = 0x2afd4734a3e24919;
  func_0x0412f5e0(0xf71f840,&UNK_014dc030,0x26);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f838,0xf53dab8);
  uRam000000000f71f890 = 0;
  uRam000000000f71f898 = 0;
  uRam000000000f71f8a0 = 0;
  uRam000000000f71f8a8 = 0;
  uRam000000000f71f888 = 0x531ad6ddacf905bd;
  func_0x0412f5e0(0xf71f890,&UNK_0130254b,0x25);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f888,0xf53dab8);
  uRam000000000f71f868 = 0;
  uRam000000000f71f870 = 0;
  uRam000000000f71f878 = 0;
  uRam000000000f71f880 = 0;
  uRam000000000f71f860 = 0x39bc80420969aabc;
  func_0x0412f5e0(0xf71f868,&UNK_0131d771,0x25);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f860,0xf53dab8);
  uRam000000000f71f8b8 = 0;
  uRam000000000f71f8c0 = 0;
  uRam000000000f71f8c8 = 0;
  uRam000000000f71f8d0 = 0;
  uRam000000000f71f8b0 = 0x21a8cb552510903f;
  func_0x0412f5e0(0xf71f8b8,&UNK_0136f4cd,0x27);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f8b0,0xf53dab8);
  uRam000000000f71f958 = 0;
  uRam000000000f71f960 = 0;
  uRam000000000f71f968 = 0;
  uRam000000000f71f970 = 0;
  uRam000000000f71f950 = 0xc96fe8c591f4c5fd;
  func_0x0412f5e0(0xf71f958,&UNK_01283666,0x31);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f950,0xf53dab8);
  uRam000000000f71f8e0 = 0;
  uRam000000000f71f8e8 = 0;
  uRam000000000f71f8f0 = 0;
  uRam000000000f71f8f8 = 0;
  uRam000000000f71f8d8 = 0x455c8a14085c8b4e;
  func_0x0412f5e0(0xf71f8e0,&UNK_0148c305,0x26);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f8d8,0xf53dab8);
  uRam000000000f71f908 = 0;
  uRam000000000f71f910 = 0;
  uRam000000000f71f918 = 0;
  uRam000000000f71f920 = 0;
  uRam000000000f71f900 = 0xc85c38c159786775;
  func_0x0412f5e0(0xf71f908,&UNK_01302571,0x24);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f900,0xf53dab8);
  uRam000000000f71f930 = 0;
  uRam000000000f71f938 = 0;
  uRam000000000f71f940 = 0;
  uRam000000000f71f948 = 0;
  uRam000000000f71f928 = 0xf52d51005078b7ba;
  func_0x0412f5e0(0xf71f930,&UNK_012e9d36,0x22);
  func_0x0eee2f40(&UNK_048c16a0,0xf71f928,0xf53dab8);
  uRam000000000f71fa58 = 0;
  uRam000000000f71fa60 = 0;
  uRam000000000f71fa68 = 0;
  uRam000000000f71fa70 = 0;
  uRam000000000f71fa78 = 0;
  if ((uRam000000000f71f4c0 & 1) == 0) {
    uRam000000000f71fa70 =
         CONCAT53(uRam000000000f71f4d3,CONCAT21(uRam000000000f71f4d1,uRam000000000f71f4d0));
    uRam000000000f71fa60 = CONCAT44(uRam000000000f71f4c4,uRam000000000f71f4c0);
    uRam000000000f71fa68 = CONCAT44(uRam000000000f71f4cc,uRam000000000f71f4c8);
  }
  else {
    func_0x04885070(0xf71fa60,
                    CONCAT53(uRam000000000f71f4d3,
                             CONCAT21(uRam000000000f71f4d1,uRam000000000f71f4d0)),
                    CONCAT44(uRam000000000f71f4cc,uRam000000000f71f4c8));
  }
  uRam000000000f71fa58 = uRam000000000f71f4b8;
  uRam000000000f71fa80 = 0;
  uRam000000000f71fa88 = 0;
  uRam000000000f71fa90 = 0;
  uRam000000000f71fa98 = 0;
  uRam000000000f71faa0 = 0;
  if ((uRam000000000f71f750 & 1) == 0) {
    uRam000000000f71fa98 =
         CONCAT53(uRam000000000f71f763,CONCAT21(uRam000000000f71f761,uRam000000000f71f760));
    uRam000000000f71fa88 = CONCAT44(uRam000000000f71f754,uRam000000000f71f750);
    uRam000000000f71fa90 = CONCAT44(uRam000000000f71f75c,uRam000000000f71f758);
  }
  else {
    func_0x04885070(0xf71fa88,
                    CONCAT53(uRam000000000f71f763,
                             CONCAT21(uRam000000000f71f761,uRam000000000f71f760)),
                    CONCAT44(uRam000000000f71f75c,uRam000000000f71f758));
  }
  uRam000000000f71fa80 = uRam000000000f71f748;
  uRam000000000f71faa8 = 0;
  uRam000000000f71fab0 = 0;
  uRam000000000f71fab8 = 0;
  uRam000000000f71fac0 = 0;
  uRam000000000f71fac8 = 0;
  if ((uRam000000000f71f980 & 1) == 0) {
    uRam000000000f71fac0 = CONCAT44(uRam000000000f71f994,uRam000000000f71f990);
    uRam000000000f71fab0 = CONCAT44(uRam000000000f71f984,uRam000000000f71f980);
    uRam000000000f71fab8 = CONCAT44(uRam000000000f71f98c,uRam000000000f71f988);
  }
  else {
    func_0x04885070(0xf71fab0,CONCAT44(uRam000000000f71f994,uRam000000000f71f990),
                    CONCAT44(uRam000000000f71f98c,uRam000000000f71f988));
  }
  uRam000000000f71faa8 = uRam000000000f71f978;
  uRam000000000f71fad0 = 0;
  uRam000000000f71fad8 = 0;
  uRam000000000f71fae0 = 0;
  uRam000000000f71fae8 = 0;
  uRam000000000f71faf0 = 0;
  if ((uRam000000000f71f778 & 1) == 0) {
    uRam000000000f71fae8 =
         CONCAT53(uRam000000000f71f78b,CONCAT21(uRam000000000f71f789,uRam000000000f71f788));
    uRam000000000f71fad8 = CONCAT44(uRam000000000f71f77c,uRam000000000f71f778);
    uRam000000000f71fae0 = CONCAT44(uRam000000000f71f784,uRam000000000f71f780);
  }
  else {
    func_0x04885070(0xf71fad8,
                    CONCAT53(uRam000000000f71f78b,
                             CONCAT21(uRam000000000f71f789,uRam000000000f71f788)),
                    CONCAT44(uRam000000000f71f784,uRam000000000f71f780));
  }
  uRam000000000f71fad0 = uRam000000000f71f770;
  uRam000000000f71faf8 = 0;
  uRam000000000f71fb00 = 0;
  uRam000000000f71fb08 = 0;
  uRam000000000f71fb10 = 0;
  uRam000000000f71fb18 = 0;
  if ((uRam000000000f71f4e8 & 1) == 0) {
    uRam000000000f71fb10 =
         CONCAT35(uRam000000000f71f4fd,CONCAT41(uRam000000000f71f4f9,uRam000000000f71f4f8));
    uRam000000000f71fb00 = CONCAT44(uRam000000000f71f4ec,uRam000000000f71f4e8);
    uRam000000000f71fb08 = CONCAT44(uRam000000000f71f4f4,uRam000000000f71f4f0);
  }
  else {
    func_0x04885070(0xf71fb00,
                    CONCAT35(uRam000000000f71f4fd,
                             CONCAT41(uRam000000000f71f4f9,uRam000000000f71f4f8)),
                    CONCAT44(uRam000000000f71f4f4,uRam000000000f71f4f0));
  }
  uRam000000000f71faf8 = uRam000000000f71f4e0;
  uRam000000000f71fb20 = 0;
  uRam000000000f71fb28 = 0;
  uRam000000000f71fb30 = 0;
  uRam000000000f71fb38 = 0;
  uRam000000000f71fb40 = 0;
  if ((uRam000000000f71f818 & 1) == 0) {
    uRam000000000f71fb38 = CONCAT71(uRam000000000f71f829,uRam000000000f71f828);
    uRam000000000f71fb28 = CONCAT44(uRam000000000f71f81c,uRam000000000f71f818);
    uRam000000000f71fb30 = CONCAT44(uRam000000000f71f824,uRam000000000f71f820);
  }
  else {
    func_0x04885070(0xf71fb28,CONCAT71(uRam000000000f71f829,uRam000000000f71f828),
                    CONCAT44(uRam000000000f71f824,uRam000000000f71f820));
  }
  uRam000000000f71fb20 = uRam000000000f71f810;
  uRam000000000f71fb48 = 0;
  uRam000000000f71fb50 = 0;
  uRam000000000f71fb58 = 0;
  uRam000000000f71fb60 = 0;
  uRam000000000f71fb68 = 0;
  if ((uRam000000000f71f7f0 & 1) == 0) {
    uRam000000000f71fb60 =
         CONCAT62(uRam000000000f71f802,CONCAT11(uRam000000000f71f801,uRam000000000f71f800));
    uRam000000000f71fb50 = CONCAT44(uRam000000000f71f7f4,uRam000000000f71f7f0);
    uRam000000000f71fb58 = CONCAT44(uRam000000000f71f7fc,uRam000000000f71f7f8);
  }
  else {
    func_0x04885070(0xf71fb50,
                    CONCAT62(uRam000000000f71f802,
                             CONCAT11(uRam000000000f71f801,uRam000000000f71f800)),
                    CONCAT44(uRam000000000f71f7fc,uRam000000000f71f7f8));
  }
  uRam000000000f71fb48 = uRam000000000f71f7e8;
  uRam000000000f71fb70 = 0;
  uRam000000000f71fb78 = 0;
  uRam000000000f71fb80 = 0;
  uRam000000000f71fb88 = 0;
  uRam000000000f71fb90 = 0;
  if ((uRam000000000f71f7a0 & 1) == 0) {
    uRam000000000f71fb88 =
         CONCAT62(uRam000000000f71f7b2,CONCAT11(uRam000000000f71f7b1,uRam000000000f71f7b0));
    uRam000000000f71fb78 = CONCAT44(uRam000000000f71f7a4,uRam000000000f71f7a0);
    uRam000000000f71fb80 = CONCAT44(uRam000000000f71f7ac,uRam000000000f71f7a8);
  }
  else {
    func_0x04885070(0xf71fb78,
                    CONCAT62(uRam000000000f71f7b2,
                             CONCAT11(uRam000000000f71f7b1,uRam000000000f71f7b0)),
                    CONCAT44(uRam000000000f71f7ac,uRam000000000f71f7a8));
  }
  uRam000000000f71fb70 = uRam000000000f71f798;
  uRam000000000f71fb98 = 0;
  uRam000000000f71fba0 = 0;
  uRam000000000f71fba8 = 0;
  uRam000000000f71fbb0 = 0;
  uRam000000000f71fbb8 = 0;
  if ((uRam000000000f71f510 & 1) == 0) {
    uRam000000000f71fbb0 = CONCAT44(uRam000000000f71f524,uRam000000000f71f520);
    uRam000000000f71fba0 = CONCAT44(uRam000000000f71f514,uRam000000000f71f510);
    uRam000000000f71fba8 = CONCAT44(uRam000000000f71f51c,uRam000000000f71f518);
  }
  else {
    func_0x04885070(0xf71fba0,CONCAT44(uRam000000000f71f524,uRam000000000f71f520),
                    CONCAT44(uRam000000000f71f51c,uRam000000000f71f518));
  }
  uRam000000000f71fb98 = uRam000000000f71f508;
  uRam000000000f71fbc0 = 0;
  uRam000000000f71fbc8 = 0;
  uRam000000000f71fbd0 = 0;
  uRam000000000f71fbd8 = 0;
  uRam000000000f71fbe0 = 0;
  if ((uRam000000000f71f7c8 & 1) == 0) {
    uRam000000000f71fbd8 = uRam000000000f71f7d8;
    uRam000000000f71fbc8 = uRam000000000f71f7c8;
    uRam000000000f71fbd0 = uRam000000000f71f7d0;
  }
  else {
    func_0x04885070(0xf71fbc8,uRam000000000f71f7d8,uRam000000000f71f7d0);
  }
  uRam000000000f71fbc0 = uRam000000000f71f7c0;
  uRam000000000f71fbe8 = 0;
  uRam000000000f71fbf0 = 0;
  uRam000000000f71fbf8 = 0;
  uRam000000000f71fc00 = 0;
  uRam000000000f71fc08 = 0;
  if ((uRam000000000f71f9a8 & 1) == 0) {
    uRam000000000f71fc00 = uRam000000000f71f9b8;
    uRam000000000f71fbf0 = CONCAT44(uRam000000000f71f9ac,uRam000000000f71f9a8);
    uRam000000000f71fbf8 = CONCAT44(uRam000000000f71f9b4,uRam000000000f71f9b0);
  }
  else {
    func_0x04885070(0xf71fbf0,uRam000000000f71f9b8,
                    CONCAT44(uRam000000000f71f9b4,uRam000000000f71f9b0));
  }
  uRam000000000f71fbe8 = uRam000000000f71f9a0;
  uRam000000000f71fc10 = 0;
  uRam000000000f71fc18 = 0;
  uRam000000000f71fc20 = 0;
  uRam000000000f71fc28 = 0;
  uRam000000000f71fc30 = 0;
  if ((uRam000000000f71f728 & 1) == 0) {
    uRam000000000f71fc28 = uRam000000000f71f738;
    uRam000000000f71fc18 = uRam000000000f71f728;
    uRam000000000f71fc20 = uRam000000000f71f730;
  }
  else {
    func_0x04885070(0xf71fc18,uRam000000000f71f738,uRam000000000f71f730);
  }
  uRam000000000f71fc10 = uRam000000000f71f720;
  uRam000000000f71fc38 = 0;
  uRam000000000f71fc40 = 0;
  uRam000000000f71fc48 = 0;
  uRam000000000f71fc50 = 0;
  uRam000000000f71fc58 = 0;
  if ((uRam000000000f71f538 & 1) == 0) {
    uRam000000000f71fc50 = uRam000000000f71f548;
    uRam000000000f71fc40 = uRam000000000f71f538;
    uRam000000000f71fc48 = uRam000000000f71f540;
  }
  else {
    func_0x04885070(0xf71fc40,uRam000000000f71f548,uRam000000000f71f540);
  }
  uRam000000000f71fc38 = uRam000000000f71f530;
  uRam000000000f71fc60 = 0;
  uRam000000000f71fc68 = 0;
  uRam000000000f71fc70 = 0;
  uRam000000000f71fc78 = 0;
  uRam000000000f71fc80 = 0;
  if ((uRam000000000f71f560 & 1) == 0) {
    uRam000000000f71fc78 = uRam000000000f71f570;
    uRam000000000f71fc68 = uRam000000000f71f560;
    uRam000000000f71fc70 = uRam000000000f71f568;
  }
  else {
    func_0x04885070(0xf71fc68,uRam000000000f71f570,uRam000000000f71f568);
  }
  uRam000000000f71fc60 = uRam000000000f71f558;
  uRam000000000f71fc88 = 0;
  uRam000000000f71fc90 = 0;
  uRam000000000f71fc98 = 0;
  uRam000000000f71fca0 = 0;
  uRam000000000f71fca8 = 0;
  if ((uRam000000000f71f9d0 & 1) == 0) {
    uRam000000000f71fca0 =
         CONCAT17(uRam000000000f71f9e7,CONCAT61(uRam000000000f71f9e1,uRam000000000f71f9e0));
    uRam000000000f71fc90 = CONCAT44(uRam000000000f71f9d4,uRam000000000f71f9d0);
    uRam000000000f71fc98 =
         CONCAT44(CONCAT13(uRam000000000f71f9df,CONCAT21(uRam000000000f71f9dd,uRam000000000f71f9dc))
                  ,uRam000000000f71f9d8);
  }
  else {
    func_0x04885070(0xf71fc90,
                    CONCAT17(uRam000000000f71f9e7,
                             CONCAT61(uRam000000000f71f9e1,uRam000000000f71f9e0)),
                    CONCAT17(uRam000000000f71f9df,
                             CONCAT25(uRam000000000f71f9dd,
                                      CONCAT14(uRam000000000f71f9dc,uRam000000000f71f9d8))));
  }
  uRam000000000f71fc88 = uRam000000000f71f9c8;
  uRam000000000f71fcb0 = 0;
  uRam000000000f71fcb8 = 0;
  uRam000000000f71fcc0 = 0;
  uRam000000000f71fcc8 = 0;
  uRam000000000f71fcd0 = 0;
  if ((uRam000000000f71f9f8 & 1) == 0) {
    uRam000000000f71fcc8 =
         CONCAT26(uRam000000000f71fa0e,CONCAT51(uRam000000000f71fa09,uRam000000000f71fa08));
    uRam000000000f71fcb8 = CONCAT44(uRam000000000f71f9fc,uRam000000000f71f9f8);
    uRam000000000f71fcc0 =
         CONCAT44(CONCAT22(uRam000000000f71fa06,CONCAT11(uRam000000000f71fa05,uRam000000000f71fa04))
                  ,uRam000000000f71fa00);
  }
  else {
    func_0x04885070(0xf71fcb8,
                    CONCAT26(uRam000000000f71fa0e,
                             CONCAT51(uRam000000000f71fa09,uRam000000000f71fa08)),
                    CONCAT26(uRam000000000f71fa06,
                             CONCAT15(uRam000000000f71fa05,
                                      CONCAT14(uRam000000000f71fa04,uRam000000000f71fa00))));
  }
  uRam000000000f71fcb0 = uRam000000000f71f9f0;
  uRam000000000f71fcd8 = 0;
  uRam000000000f71fce0 = 0;
  uRam000000000f71fce8 = 0;
  uRam000000000f71fcf0 = 0;
  uRam000000000f71fcf8 = 0;
  if ((uRam000000000f71fa20 & 1) == 0) {
    uRam000000000f71fcf0 = uRam000000000f71fa30;
    uRam000000000f71fce0 = uRam000000000f71fa20;
    uRam000000000f71fce8 = uRam000000000f71fa28;
  }
  else {
    func_0x04885070(0xf71fce0,uRam000000000f71fa30,uRam000000000f71fa28);
  }
  uRam000000000f71fcd8 = uRam000000000f71fa18;
  uRam000000000f71fd00 = 0;
  uRam000000000f71fd08 = 0;
  uRam000000000f71fd10 = 0;
  uRam000000000f71fd18 = 0;
  uRam000000000f71fd20 = 0;
  if ((uRam000000000f71f890 & 1) == 0) {
    uRam000000000f71fd18 = uRam000000000f71f8a0;
    uRam000000000f71fd08 = uRam000000000f71f890;
    uRam000000000f71fd10 = uRam000000000f71f898;
  }
  else {
    func_0x04885070(0xf71fd08,uRam000000000f71f8a0,uRam000000000f71f898);
  }
  uRam000000000f71fd00 = uRam000000000f71f888;
  uRam000000000f71fd28 = 0;
  uRam000000000f71fd30 = 0;
  uRam000000000f71fd38 = 0;
  uRam000000000f71fd40 = 0;
  uRam000000000f71fd48 = 0;
  if ((uRam000000000f71f840 & 1) == 0) {
    uRam000000000f71fd40 = uRam000000000f71f850;
    uRam000000000f71fd30 = uRam000000000f71f840;
    uRam000000000f71fd38 = uRam000000000f71f848;
  }
  else {
    func_0x04885070(0xf71fd30,uRam000000000f71f850,uRam000000000f71f848);
  }
  uRam000000000f71fd28 = uRam000000000f71f838;
  uRam000000000f71fd50 = 0;
  uRam000000000f71fd58 = 0;
  uRam000000000f71fd60 = 0;
  uRam000000000f71fd68 = 0;
  uRam000000000f71fd70 = 0;
  if ((uRam000000000f71f868 & 1) == 0) {
    uRam000000000f71fd68 = uRam000000000f71f878;
    uRam000000000f71fd58 = uRam000000000f71f868;
    uRam000000000f71fd60 = uRam000000000f71f870;
  }
  else {
    func_0x04885070(0xf71fd58,uRam000000000f71f878,uRam000000000f71f870);
  }
  uRam000000000f71fd50 = uRam000000000f71f860;
  uRam000000000f71fd78 = 0;
  uRam000000000f71fd80 = 0;
  uRam000000000f71fd88 = 0;
  uRam000000000f71fd90 = 0;
  uRam000000000f71fd98 = 0;
  if ((uRam000000000f71f8b8 & 1) == 0) {
    uRam000000000f71fd90 = uRam000000000f71f8c8;
    uRam000000000f71fd80 = uRam000000000f71f8b8;
    uRam000000000f71fd88 = uRam000000000f71f8c0;
  }
  else {
    func_0x04885070(0xf71fd80,uRam000000000f71f8c8,uRam000000000f71f8c0);
  }
  uRam000000000f71fd78 = uRam000000000f71f8b0;
  uRam000000000f71fda0 = 0;
  uRam000000000f71fda8 = 0;
  uRam000000000f71fdb0 = 0;
  uRam000000000f71fdb8 = 0;
  uRam000000000f71fdc0 = 0;
  if ((uRam000000000f71f958 & 1) == 0) {
    uRam000000000f71fdb8 = uRam000000000f71f968;
    uRam000000000f71fda8 = uRam000000000f71f958;
    uRam000000000f71fdb0 = uRam000000000f71f960;
  }
  else {
    func_0x04885070(0xf71fda8,uRam000000000f71f968,uRam000000000f71f960);
  }
  uRam000000000f71fda0 = uRam000000000f71f950;
  uRam000000000f71fdc8 = 0;
  uRam000000000f71fdd0 = 0;
  uRam000000000f71fdd8 = 0;
  uRam000000000f71fde0 = 0;
  uRam000000000f71fde8 = 0;
  if ((uRam000000000f71f8e0 & 1) == 0) {
    uRam000000000f71fde0 = uRam000000000f71f8f0;
    uRam000000000f71fdd0 = uRam000000000f71f8e0;
    uRam000000000f71fdd8 = uRam000000000f71f8e8;
  }
  else {
    func_0x04885070(0xf71fdd0,uRam000000000f71f8f0,uRam000000000f71f8e8);
  }
  uRam000000000f71fdc8 = uRam000000000f71f8d8;
  uRam000000000f71fdf0 = 0;
  uRam000000000f71fdf8 = 0;
  uRam000000000f71fe00 = 0;
  uRam000000000f71fe08 = 0;
  uRam000000000f71fe10 = 0;
  if ((uRam000000000f71f908 & 1) == 0) {
    uRam000000000f71fe08 = uRam000000000f71f918;
    uRam000000000f71fdf8 = uRam000000000f71f908;
    uRam000000000f71fe00 = uRam000000000f71f910;
  }
  else {
    func_0x04885070(0xf71fdf8,uRam000000000f71f918,uRam000000000f71f910);
  }
  uRam000000000f71fdf0 = uRam000000000f71f900;
  uRam000000000f71fe18 = 0;
  uRam000000000f71fe20 = 0;
  uRam000000000f71fe28 = 0;
  uRam000000000f71fe30 = 0;
  uRam000000000f71fe38 = 0;
  if ((uRam000000000f71f930 & 1) == 0) {
    uRam000000000f71fe30 = uRam000000000f71f940;
    uRam000000000f71fe20 = uRam000000000f71f930;
    uRam000000000f71fe28 = uRam000000000f71f938;
  }
  else {
    func_0x04885070(0xf71fe20,uRam000000000f71f940,uRam000000000f71f938);
  }
  uRam000000000f71fe18 = uRam000000000f71f928;
  func_0x0eee2f40(&UNK_0d353a60,0xf71fa58,0xf53dab8);
  uStack_d8 = 0x1003200150001;
  uStack_d0 = (undefined8 *)&UNK_01254d89;
  puStack_c8 = (undefined8 *)&UNK_01254d89;
  uStack_108 = (undefined8 *)0x1005000150001;
  uStack_100 = (long *)&UNK_01254d89;
  plStack_f8 = (long *)&UNK_01254d89;
  func_0x0d6b3300(0xf71f5a0,&uStack_d8,&uStack_108,3);
  if (((ulong)plStack_f8 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_f8 & 0xff00ffffffffffff) - 8);
  }
  plStack_f8 = (long *)0x0;
  if (((ulong)uStack_100 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_100 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)puStack_c8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_c8 & 0xff00ffffffffffff) - 8);
  }
  puStack_c8 = (undefined8 *)0x0;
  if (((ulong)uStack_d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_d0 & 0xff00ffffffffffff) - 8);
  }
  func_0x0eee2f40(&SUB_05d864e0,0xf71f5a0,0xf53dab8);
  uStack_d8 = 0x1005000150001;
  uStack_d0 = (undefined8 *)&UNK_01254d89;
  puStack_c8 = (undefined8 *)&UNK_01254d89;
  uStack_108 = (undefined8 *)0x101000000000000;
  uStack_100 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  func_0x0d6b3300(0xf71f5d8,&uStack_d8,&uStack_108,1);
  if (((ulong)plStack_f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_f8 & 0xff00ffffffffffff) - 8);
  }
  plStack_f8 = (long *)0x0;
  if (((ulong)uStack_100 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_100 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)puStack_c8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_c8 & 0xff00ffffffffffff) - 8);
  }
  puStack_c8 = (undefined8 *)0x0;
  if (((ulong)uStack_d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_d0 & 0xff00ffffffffffff) - 8);
  }
  func_0x0eee2f40(&SUB_05d864e0,0xf71f5d8,0xf53dab8);
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar15 = _UNK_011cbaf3;
  uRam000000000f71f630 = 0x29;
  uRam000000000f71f638 = 0x24;
  puRam000000000f71f640 = puVar7;
  *(undefined8 *)(puVar7 + 4) = _UNK_011cbaeb;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_011cbae7;
  uVar5 = _UNK_011cbae3;
  uVar4 = _UNK_011cbadf;
  *puVar7 = _UNK_011cbadb;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  puVar7[8] = 0x6e6f6973;
  *(undefined1 *)(puVar7 + 9) = 0;
  func_0x0eee2f40(&UNK_0412ed50,0xf71f630,0xf53dab8);
  lRam000000000f71fa40 = 0;
  puRam000000000f71fa48 = (undefined8 *)0x0;
  puRam000000000f71fa50 = (undefined8 *)0x0;
  uStack_d8 = 0;
  uStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_108 = (undefined8 *)0x0;
  uStack_100 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_012694f8;
  *(undefined8 *)(puVar7 + 8) = _UNK_012694f0;
  *(undefined8 *)(puVar7 + 10) = uVar15;
  uVar15 = _UNK_012694e8;
  *(undefined8 *)(puVar7 + 4) = _UNK_012694e0;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_012694dc;
  uVar5 = _UNK_012694d8;
  uVar4 = _UNK_012694d4;
  *puVar7 = _UNK_012694d0;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_014dc0e4;
  *(undefined8 *)(puVar8 + 8) = _UNK_014dc0dc;
  *(undefined8 *)(puVar8 + 10) = uVar15;
  uVar15 = _UNK_014dc0d4;
  *(undefined8 *)(puVar8 + 4) = _UNK_014dc0cc;
  *(undefined8 *)(puVar8 + 6) = uVar15;
  uVar6 = _UNK_014dc0c8;
  uVar5 = _UNK_014dc0c4;
  uVar4 = _UNK_014dc0c0;
  *puVar8 = _UNK_014dc0bc;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined1 *)(puVar8 + 0xc) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f460f08;
  puVar17 = (ulong *)&UNK_0f460f58;
  puVar9[3] = &UNK_0f460f58;
  puVar9[4] = 0x39;
  puVar9[5] = 0x30;
  puVar9[6] = puVar7;
  puVar9[7] = 0x39;
  puVar9[8] = 0x30;
  puVar9[9] = puVar8;
  uStack_128 = puVar9 + 3;
  uStack_120 = puVar9;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  uStack_100 = puVar10 + 2;
  *puVar10 = puVar9 + 3;
  puVar10[1] = puVar9;
  uStack_108 = puVar10;
  plStack_f8 = uStack_100;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_013a3be5;
  *(undefined8 *)(puVar7 + 8) = _UNK_013a3bdd;
  *(undefined8 *)(puVar7 + 10) = uVar15;
  uVar15 = _UNK_013a3bd5;
  *(undefined8 *)(puVar7 + 4) = _UNK_013a3bcd;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_013a3bc9;
  uVar5 = _UNK_013a3bc5;
  uVar4 = _UNK_013a3bc1;
  *puVar7 = _UNK_013a3bbd;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined8 *)((long)puVar7 + 0x2d) = 0x6465676e61725f77;
  *(undefined1 *)((long)puVar7 + 0x35) = 0;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_01200949;
  *(undefined8 *)(puVar8 + 8) = _UNK_01200941;
  *(undefined8 *)(puVar8 + 10) = uVar15;
  uVar15 = _UNK_01200939;
  *(undefined8 *)(puVar8 + 4) = _UNK_01200931;
  *(undefined8 *)(puVar8 + 6) = uVar15;
  uVar6 = _UNK_0120092d;
  uVar5 = _UNK_01200929;
  uVar4 = _UNK_01200925;
  *puVar8 = _UNK_01200921;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined8 *)((long)puVar8 + 0x2d) = 0x6e6f74656c656b73;
  *(undefined1 *)((long)puVar8 + 0x35) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f460f08;
  puVar9[3] = &UNK_0f460f58;
  puVar9[4] = 0x39;
  puVar9[5] = 0x35;
  puVar9[6] = puVar7;
  puVar9[7] = 0x39;
  puVar9[8] = 0x35;
  puVar9[9] = puVar8;
  uStack_128 = puVar9 + 3;
  uStack_120 = puVar9;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar8 = puVar7 + 8;
  *(undefined8 **)(puVar7 + 4) = puVar9 + 3;
  *(undefined8 **)(puVar7 + 6) = puVar9;
  uStack_128 = (undefined8 *)0x0;
  uStack_120 = (long *)0x0;
  uVar4 = *(undefined4 *)((long)puVar10 + 4);
  uVar5 = *(undefined4 *)(puVar10 + 1);
  uVar6 = *(undefined4 *)((long)puVar10 + 0xc);
  *puVar7 = *(undefined4 *)puVar10;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  uStack_108 = (undefined8 *)puVar7;
  plStack_f8 = (long *)puVar8;
  thunk_FUN_0ee326a0(puVar10,0x10);
  plVar14 = uStack_120;
  uStack_100 = (long *)puVar8;
  if (uStack_120 == (long *)0x0) {
code_r0x0d395a06:
    if (uStack_d0 < puStack_c8) goto code_r0x0d395a12;
code_r0x0d395a55:
    uStack_d0 = (undefined8 *)func_0x0d3859d0(&uStack_d8,&uStack_108,1);
    puVar8 = (undefined4 *)uStack_108;
    puVar7 = (undefined4 *)uStack_100;
    if (uStack_108 != (undefined8 *)0x0) {
      for (; puVar8 != puVar7; puVar7 = puVar7 + -4) {
        plVar14 = *(long **)(puVar7 + -2);
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar1 = plVar14 + 1;
          lVar12 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            func_0x0412c2d0(plVar14);
          }
        }
      }
      uStack_100 = (long *)puVar8;
      thunk_FUN_0ee326a0(uStack_108,(long)plStack_f8 - (long)uStack_108);
    }
  }
  else {
    LOCK();
    plVar1 = uStack_120 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 != 0) goto code_r0x0d395a06;
    (**(code **)(*uStack_120 + 0x10))(uStack_120);
    func_0x0412c2d0(plVar14);
    if (puStack_c8 <= uStack_d0) goto code_r0x0d395a55;
code_r0x0d395a12:
    *uStack_d0 = uStack_108;
    uStack_d0[1] = uStack_100;
    uStack_d0[2] = plStack_f8;
    *(undefined4 *)(uStack_d0 + 3) = 1;
    uStack_d0 = uStack_d0 + 4;
  }
  uStack_108 = (undefined8 *)0x0;
  uStack_100 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_012694f8;
  *(undefined8 *)(puVar7 + 8) = _UNK_012694f0;
  *(undefined8 *)(puVar7 + 10) = uVar15;
  uVar15 = _UNK_012694e8;
  *(undefined8 *)(puVar7 + 4) = _UNK_012694e0;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_012694dc;
  uVar5 = _UNK_012694d8;
  uVar4 = _UNK_012694d4;
  *puVar7 = _UNK_012694d0;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar15 = _UNK_01338b5f;
  *(ulong *)((long)puVar8 + 0x1d) = CONCAT53(_UNK_01338b5a,_UNK_01338b57);
  *(undefined8 *)((long)puVar8 + 0x25) = uVar15;
  uVar15 = CONCAT35(_UNK_01338b57,_UNK_01338b52);
  *(undefined8 *)(puVar8 + 4) = _UNK_01338b4a;
  *(undefined8 *)(puVar8 + 6) = uVar15;
  uVar6 = _UNK_01338b46;
  uVar5 = _UNK_01338b42;
  uVar4 = _UNK_01338b3e;
  *puVar8 = _UNK_01338b3a;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined1 *)((long)puVar8 + 0x2d) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f460f08;
  puVar9[3] = &UNK_0f460f58;
  puVar9[4] = 0x39;
  puVar9[5] = 0x30;
  puVar9[6] = puVar7;
  puVar9[7] = 0x31;
  puVar9[8] = 0x2d;
  puVar9[9] = puVar8;
  uStack_128 = puVar9 + 3;
  uStack_120 = puVar9;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  uStack_100 = puVar10 + 2;
  *puVar10 = puVar9 + 3;
  puVar10[1] = puVar9;
  uStack_108 = puVar10;
  plStack_f8 = uStack_100;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_013a3be5;
  *(undefined8 *)(puVar7 + 8) = _UNK_013a3bdd;
  *(undefined8 *)(puVar7 + 10) = uVar15;
  uVar15 = _UNK_013a3bd5;
  *(undefined8 *)(puVar7 + 4) = _UNK_013a3bcd;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_013a3bc9;
  uVar5 = _UNK_013a3bc5;
  uVar4 = _UNK_013a3bc1;
  *puVar7 = _UNK_013a3bbd;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined8 *)((long)puVar7 + 0x2d) = 0x6465676e61725f77;
  *(undefined1 *)((long)puVar7 + 0x35) = 0;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_0120097f;
  *(undefined8 *)(puVar8 + 8) = _UNK_01200977;
  *(undefined8 *)(puVar8 + 10) = uVar15;
  uVar15 = _UNK_0120096f;
  *(undefined8 *)(puVar8 + 4) = _UNK_01200967;
  *(undefined8 *)(puVar8 + 6) = uVar15;
  uVar6 = _UNK_01200963;
  uVar5 = _UNK_0120095f;
  uVar4 = _UNK_0120095b;
  *puVar8 = _UNK_01200957;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined2 *)(puVar8 + 0xc) = 0x7961;
  *(undefined1 *)((long)puVar8 + 0x32) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f460f08;
  puVar9[3] = &UNK_0f460f58;
  puVar9[4] = 0x39;
  puVar9[5] = 0x35;
  puVar9[6] = puVar7;
  puVar9[7] = 0x39;
  puVar9[8] = 0x32;
  puVar9[9] = puVar8;
  uStack_128 = puVar9 + 3;
  uStack_120 = puVar9;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar8 = puVar7 + 8;
  *(undefined8 **)(puVar7 + 4) = puVar9 + 3;
  *(undefined8 **)(puVar7 + 6) = puVar9;
  uStack_128 = (undefined8 *)0x0;
  uStack_120 = (long *)0x0;
  uVar4 = *(undefined4 *)((long)puVar10 + 4);
  uVar5 = *(undefined4 *)(puVar10 + 1);
  uVar6 = *(undefined4 *)((long)puVar10 + 0xc);
  *puVar7 = *(undefined4 *)puVar10;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  uStack_108 = (undefined8 *)puVar7;
  plStack_f8 = (long *)puVar8;
  thunk_FUN_0ee326a0(puVar10,0x10);
  plVar14 = uStack_120;
  uStack_100 = (long *)puVar8;
  if (uStack_120 == (long *)0x0) {
code_r0x0d395dd5:
    if (uStack_d0 < puStack_c8) goto code_r0x0d395de1;
code_r0x0d395e24:
    uStack_d0 = (undefined8 *)func_0x0d3859d0(&uStack_d8,&uStack_108,1);
    puVar8 = (undefined4 *)uStack_108;
    puVar7 = (undefined4 *)uStack_100;
    if (uStack_108 != (undefined8 *)0x0) {
      for (; puVar8 != puVar7; puVar7 = puVar7 + -4) {
        plVar14 = *(long **)(puVar7 + -2);
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar1 = plVar14 + 1;
          lVar12 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            func_0x0412c2d0(plVar14);
          }
        }
      }
      uStack_100 = (long *)puVar8;
      thunk_FUN_0ee326a0(uStack_108,(long)plStack_f8 - (long)uStack_108);
    }
  }
  else {
    LOCK();
    plVar1 = uStack_120 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 != 0) goto code_r0x0d395dd5;
    (**(code **)(*uStack_120 + 0x10))(uStack_120);
    func_0x0412c2d0(plVar14);
    if (puStack_c8 <= uStack_d0) goto code_r0x0d395e24;
code_r0x0d395de1:
    *uStack_d0 = uStack_108;
    uStack_d0[1] = uStack_100;
    uStack_d0[2] = plStack_f8;
    *(undefined4 *)(uStack_d0 + 3) = 1;
    uStack_d0 = uStack_d0 + 4;
  }
  uStack_108 = (undefined8 *)0x0;
  uStack_100 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_012694f8;
  *(undefined8 *)(puVar7 + 8) = _UNK_012694f0;
  *(undefined8 *)(puVar7 + 10) = uVar15;
  uVar15 = _UNK_012694e8;
  *(undefined8 *)(puVar7 + 4) = _UNK_012694e0;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_012694dc;
  uVar5 = _UNK_012694d8;
  uVar4 = _UNK_012694d4;
  *puVar7 = _UNK_012694d0;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_011b01a8;
  *(undefined8 *)(puVar8 + 8) = _UNK_011b01a0;
  *(undefined8 *)(puVar8 + 10) = uVar15;
  uVar15 = _UNK_011b0198;
  *(undefined8 *)(puVar8 + 4) = _UNK_011b0190;
  *(undefined8 *)(puVar8 + 6) = uVar15;
  uVar6 = _UNK_011b018c;
  uVar5 = _UNK_011b0188;
  uVar4 = _UNK_011b0184;
  *puVar8 = _UNK_011b0180;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined8 *)((long)puVar8 + 0x2f) = 0x6e6f74656c656b73;
  *(undefined1 *)((long)puVar8 + 0x37) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f460f08;
  puVar9[3] = &UNK_0f460f58;
  puVar9[4] = 0x39;
  puVar9[5] = 0x30;
  puVar9[6] = puVar7;
  puVar9[7] = 0x39;
  puVar9[8] = 0x37;
  puVar9[9] = puVar8;
  uStack_128 = puVar9 + 3;
  uStack_120 = puVar9;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  uStack_100 = puVar10 + 2;
  *puVar10 = puVar9 + 3;
  puVar10[1] = puVar9;
  uStack_108 = puVar10;
  plStack_f8 = uStack_100;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_013a3be5;
  *(undefined8 *)(puVar7 + 8) = _UNK_013a3bdd;
  *(undefined8 *)(puVar7 + 10) = uVar15;
  uVar15 = _UNK_013a3bd5;
  *(undefined8 *)(puVar7 + 4) = _UNK_013a3bcd;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_013a3bc9;
  uVar5 = _UNK_013a3bc5;
  uVar4 = _UNK_013a3bc1;
  *puVar7 = _UNK_013a3bbd;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined8 *)((long)puVar7 + 0x2d) = 0x6465676e61725f77;
  *(undefined1 *)((long)puVar7 + 0x35) = 0;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uVar15 = _UNK_0128370a;
  *(ulong *)(puVar8 + 0xb) = CONCAT44(_UNK_01283706,_UNK_01283702);
  *(undefined8 *)(puVar8 + 0xd) = uVar15;
  uVar15 = CONCAT44(_UNK_01283702,_UNK_012836fe);
  *(undefined8 *)(puVar8 + 8) = _UNK_012836f6;
  *(undefined8 *)(puVar8 + 10) = uVar15;
  uVar15 = _UNK_012836ee;
  *(undefined8 *)(puVar8 + 4) = _UNK_012836e6;
  *(undefined8 *)(puVar8 + 6) = uVar15;
  uVar6 = _UNK_012836e2;
  uVar5 = _UNK_012836de;
  uVar4 = _UNK_012836da;
  *puVar8 = _UNK_012836d6;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f460f08;
  puVar9[3] = &UNK_0f460f58;
  puVar9[4] = 0x39;
  puVar9[5] = 0x35;
  puVar9[6] = puVar7;
  puVar9[7] = 0x41;
  puVar9[8] = 0x3c;
  puVar9[9] = puVar8;
  uStack_128 = puVar9 + 3;
  uStack_120 = puVar9;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar8 = puVar7 + 8;
  *(undefined8 **)(puVar7 + 4) = puVar9 + 3;
  *(undefined8 **)(puVar7 + 6) = puVar9;
  uStack_128 = (undefined8 *)0x0;
  uStack_120 = (long *)0x0;
  uVar4 = *(undefined4 *)((long)puVar10 + 4);
  uVar5 = *(undefined4 *)(puVar10 + 1);
  uVar6 = *(undefined4 *)((long)puVar10 + 0xc);
  *puVar7 = *(undefined4 *)puVar10;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  uStack_108 = (undefined8 *)puVar7;
  plStack_f8 = (long *)puVar8;
  thunk_FUN_0ee326a0(puVar10,0x10);
  plVar14 = uStack_120;
  uStack_100 = (long *)puVar8;
  if (uStack_120 == (long *)0x0) {
code_r0x0d3961b8:
    if (uStack_d0 < puStack_c8) goto code_r0x0d3961c4;
code_r0x0d396207:
    uStack_d0 = (undefined8 *)func_0x0d3859d0(&uStack_d8,&uStack_108,1);
    puVar8 = (undefined4 *)uStack_108;
    puVar7 = (undefined4 *)uStack_100;
    if (uStack_108 != (undefined8 *)0x0) {
      for (; puVar8 != puVar7; puVar7 = puVar7 + -4) {
        plVar14 = *(long **)(puVar7 + -2);
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar1 = plVar14 + 1;
          lVar12 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            func_0x0412c2d0(plVar14);
          }
        }
      }
      uStack_100 = (long *)puVar8;
      thunk_FUN_0ee326a0(uStack_108,(long)plStack_f8 - (long)uStack_108);
    }
  }
  else {
    LOCK();
    plVar1 = uStack_120 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 != 0) goto code_r0x0d3961b8;
    (**(code **)(*uStack_120 + 0x10))(uStack_120);
    func_0x0412c2d0(plVar14);
    if (puStack_c8 <= uStack_d0) goto code_r0x0d396207;
code_r0x0d3961c4:
    *(undefined4 *)uStack_d0 = (undefined4)uStack_108;
    *(undefined4 *)((long)uStack_d0 + 4) = uStack_108._4_4_;
    *(undefined4 *)(uStack_d0 + 1) = (undefined4)uStack_100;
    *(undefined4 *)((long)uStack_d0 + 0xc) = uStack_100._4_4_;
    uStack_d0[2] = plStack_f8;
    *(undefined4 *)(uStack_d0 + 3) = 1;
    uStack_d0 = uStack_d0 + 4;
  }
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f461038;
  puVar10 = puVar9 + 3;
  puVar9[3] = &UNK_0f461088;
  *(undefined4 *)(puVar9 + 4) = (undefined4)uStack_d8;
  *(undefined4 *)((long)puVar9 + 0x24) = uStack_d8._4_4_;
  *(undefined4 *)(puVar9 + 5) = (undefined4)uStack_d0;
  *(undefined4 *)((long)puVar9 + 0x2c) = uStack_d0._4_4_;
  puVar9[6] = puStack_c8;
  uStack_d8 = 0;
  uStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_100 = puVar9;
  if (puRam000000000f71fa50 <= puRam000000000f71fa48) {
    lVar12 = (long)puRam000000000f71fa48 - lRam000000000f71fa40;
    puStack_40 = (undefined4 *)(lVar12 >> 4);
    puVar2 = (ulong *)((long)puStack_40 + 1);
    uStack_108 = puVar10;
    if ((ulong)puVar2 >> 0x3c == 0) {
      uVar16 = (long)puRam000000000f71fa50 - lRam000000000f71fa40;
      puVar17 = (ulong *)((long)uVar16 >> 3);
      if ((ulong *)((long)uVar16 >> 3) <= puVar2) {
        puVar17 = puVar2;
      }
      if (0x7fffffffffffffef < uVar16) {
        puVar17 = (ulong *)0xfffffffffffffff;
      }
      if (puVar17 < (ulong *)0x1000000000000000) {
        puStack_e0 = (undefined4 *)lRam000000000f71fa40;
        lVar18 = (long)puVar17 * 0x10;
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
        if (lVar11 == 0) {
          func_0x0eec74c0(lVar18,0);
        }
        puVar7 = puStack_e0;
        *(undefined8 **)(lVar11 + lVar12) = puVar10;
        *(undefined8 **)(lVar11 + 8 + lVar12) = puVar9;
        puVar9 = (undefined8 *)(lVar11 + lVar12 + 0x10);
        lVar19 = lVar11 + lVar12 + (long)puStack_40 * -0x10;
        func_0x0eee2f00(lVar19,puStack_e0,lVar12);
        lRam000000000f71fa40 = lVar19;
        puRam000000000f71fa50 = (undefined8 *)(lVar18 + lVar11);
        if (puVar7 != (undefined4 *)0x0) {
          puRam000000000f71fa48 = puVar9;
          thunk_FUN_0ee326a0(puVar7,uVar16);
        }
        goto code_r0x0d396414;
      }
    }
    else {
      func_0x0d2de6d0();
    }
    uVar15 = func_0x04882eb0();
    if ((uRam000000000f71fe20 & 1) != 0) {
      thunk_FUN_0ee326a0(uRam000000000f71fe30,*puVar17 & 0xfffffffffffffffe);
    }
    do {
      if ((*(byte *)(plVar14 + -4) & 1) != 0) {
        thunk_FUN_0ee326a0(plVar14[-2],plVar14[-4] & 0xfffffffffffffffe);
      }
      plVar14 = plVar14 + -5;
    } while (plVar14 != (long *)0xf71fa58);
    func_0x0eee2d70(uVar15);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *puRam000000000f71fa48 = puVar10;
  puRam000000000f71fa48[1] = puVar9;
  puVar9 = puRam000000000f71fa48 + 2;
code_r0x0d396414:
  uStack_108 = &uStack_d8;
  puRam000000000f71fa48 = puVar9;
  func_0x0d2dfb30(&uStack_108);
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar15 = _UNK_0131d822;
  *(ulong *)((long)puVar7 + 0x1f) = CONCAT71(_UNK_0131d81b,UNK_0131d81a);
  *(undefined8 *)((long)puVar7 + 0x27) = uVar15;
  uVar15 = CONCAT17(UNK_0131d81a,_UNK_0131d813);
  *(undefined8 *)(puVar7 + 4) = _UNK_0131d80b;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_0131d807;
  uVar5 = _UNK_0131d803;
  uVar4 = _UNK_0131d7ff;
  *puVar7 = _UNK_0131d7fb;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined1 *)((long)puVar7 + 0x2f) = 0;
  puStack_e0 = puVar7;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar15 = _UNK_01424ba4;
  uStack_d8 = 0x31;
  uStack_d0 = (undefined8 *)0x2d;
  *(ulong *)((long)puVar7 + 0x1d) = CONCAT53(_UNK_01424b9f,_UNK_01424b9c);
  *(undefined8 *)((long)puVar7 + 0x25) = uVar15;
  uVar15 = CONCAT35(_UNK_01424b9c,_UNK_01424b97);
  *(undefined8 *)(puVar7 + 4) = _UNK_01424b8f;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_01424b8b;
  uVar5 = _UNK_01424b87;
  uVar4 = _UNK_01424b83;
  *puVar7 = _UNK_01424b7f;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined1 *)((long)puVar7 + 0x2d) = 0;
  uStack_c0 = 1;
  puStack_c8 = (undefined8 *)puVar7;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar15 = _UNK_01338b8b;
  uStack_b8 = 0x31;
  uStack_b0 = 0x2b;
  *(ulong *)((long)puVar8 + 0x1b) = CONCAT35(_UNK_01338b88,_UNK_01338b83);
  *(undefined8 *)((long)puVar8 + 0x23) = uVar15;
  uVar15 = CONCAT53(_UNK_01338b83,_UNK_01338b80);
  *(undefined8 *)(puVar8 + 4) = _UNK_01338b78;
  *(undefined8 *)(puVar8 + 6) = uVar15;
  uVar6 = _UNK_01338b74;
  uVar5 = _UNK_01338b70;
  uVar4 = _UNK_01338b6c;
  *puVar8 = _UNK_01338b68;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined1 *)((long)puVar8 + 0x2b) = 0;
  uStack_a0 = 1;
  puStack_a8 = puVar8;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar15 = _UNK_014a6833;
  uStack_98 = 0x31;
  uStack_90 = 0x2d;
  *(ulong *)((long)puVar9 + 0x1d) = CONCAT53(_UNK_014a682e,_UNK_014a682b);
  *(undefined8 *)((long)puVar9 + 0x25) = uVar15;
  uVar15 = CONCAT35(_UNK_014a682b,_UNK_014a6826);
  puVar9[2] = _UNK_014a681e;
  puVar9[3] = uVar15;
  uVar15 = _UNK_014a6816;
  *puVar9 = _UNK_014a680e;
  puVar9[1] = uVar15;
  *(undefined1 *)((long)puVar9 + 0x2d) = 0;
  uStack_80 = 1;
  uStack_128 = (undefined8 *)0x0;
  uStack_120 = (long *)0x0;
  lStack_118 = 0;
  puStack_88 = puVar9;
  lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (lVar12 == 0) {
    func_0x0eec74c0(0x60,0);
  }
  lStack_118 = lVar12 + 0x60;
  uStack_108 = &uStack_128;
  uStack_100 = &lStack_38;
  plStack_f8 = &lStack_e8;
  uStack_f0 = 0;
  uStack_128 = (undefined8 *)lVar12;
  uStack_120 = (long *)lVar12;
  lStack_e8 = lVar12;
  lStack_38 = lVar12;
  FUN_0412e5e0(lVar12,puVar7,0x2d);
  lVar11 = lStack_e8;
  *(undefined4 *)(lVar12 + 0x18) = 1;
  lStack_e8 = lStack_e8 + 0x20;
  FUN_0412e5e0(lStack_e8,puVar8,0x2b);
  lVar12 = lStack_e8;
  *(undefined4 *)(lVar11 + 0x38) = 1;
  lStack_e8 = lStack_e8 + 0x20;
  FUN_0412e5e0(lStack_e8,puVar9,0x2d);
  *(undefined4 *)(lVar12 + 0x38) = 1;
  uStack_120 = (long *)(lStack_e8 + 0x20);
  plStack_48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plStack_48 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  plStack_48[1] = 0;
  plStack_48[2] = 0;
  *plStack_48 = (long)&UNK_0f460fa0;
  plStack_50 = plStack_48 + 3;
  plStack_48[3] = (long)&UNK_0f460ff0;
  plStack_48[4] = 0x31;
  plStack_48[5] = 0x2f;
  plStack_48[6] = (long)puStack_e0;
  *(undefined4 *)(plStack_48 + 7) = (undefined4)uStack_128;
  *(undefined4 *)((long)plStack_48 + 0x3c) = uStack_128._4_4_;
  *(undefined4 *)(plStack_48 + 8) = (undefined4)uStack_120;
  *(undefined4 *)((long)plStack_48 + 0x44) = uStack_120._4_4_;
  plStack_48[9] = lStack_118;
  uStack_128 = (undefined8 *)0x0;
  uStack_120 = (long *)0x0;
  lStack_118 = 0;
  func_0x0d385880(&plStack_50);
  plVar14 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      func_0x0412c2d0(plVar14);
    }
  }
  lVar11 = (long)uStack_128;
  lVar12 = (long)uStack_120;
  if (uStack_128 != (undefined8 *)0x0) {
    for (; lVar11 != lVar12; lVar12 = lVar12 + -0x20) {
      if ((*(byte *)(lVar12 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar12 + -0x10),
                           *(ulong *)(lVar12 + -0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_120 = (long *)lVar11;
    thunk_FUN_0ee326a0(uStack_128,lStack_118 - (long)uStack_128);
  }
  if ((uStack_98 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_88,uStack_98 & 0xfffffffffffffffe);
  }
  if ((uStack_b8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_a8,uStack_b8 & 0xfffffffffffffffe);
  }
  if ((uStack_d8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_c8,uStack_d8 & 0xfffffffffffffffe);
  }
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_0131d853;
  *(undefined8 *)(puVar7 + 8) = _UNK_0131d84b;
  *(undefined8 *)(puVar7 + 10) = uVar15;
  uVar15 = _UNK_0131d843;
  *(undefined8 *)(puVar7 + 4) = _UNK_0131d83b;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_0131d837;
  uVar5 = _UNK_0131d833;
  uVar4 = _UNK_0131d82f;
  *puVar7 = _UNK_0131d82b;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined8 *)((long)puVar7 + 0x2d) = 0x65656c656d5f6c6c;
  *(undefined1 *)((long)puVar7 + 0x35) = 0;
  puStack_e0 = puVar7;
  puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_01388ea4;
  uStack_d8 = 0x39;
  uStack_d0 = (undefined8 *)0x32;
  *(undefined8 *)(puVar7 + 8) = _UNK_01388e9c;
  *(undefined8 *)(puVar7 + 10) = uVar15;
  uVar15 = _UNK_01388e94;
  *(undefined8 *)(puVar7 + 4) = _UNK_01388e8c;
  *(undefined8 *)(puVar7 + 6) = uVar15;
  uVar6 = _UNK_01388e88;
  uVar5 = _UNK_01388e84;
  uVar4 = _UNK_01388e80;
  *puVar7 = _UNK_01388e7c;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  *(undefined2 *)(puVar7 + 0xc) = 0x656d;
  *(undefined1 *)((long)puVar7 + 0x32) = 0;
  uStack_c0 = 1;
  puStack_c8 = (undefined8 *)puVar7;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uVar15 = _UNK_01269529;
  uStack_b8 = 0x41;
  uStack_b0 = 0x38;
  *(undefined8 *)(puVar8 + 8) = _UNK_01269521;
  *(undefined8 *)(puVar8 + 10) = uVar15;
  uVar15 = _UNK_01269519;
  *(undefined8 *)(puVar8 + 4) = _UNK_01269511;
  *(undefined8 *)(puVar8 + 6) = uVar15;
  uVar6 = _UNK_0126950d;
  uVar5 = _UNK_01269509;
  uVar4 = _UNK_01269505;
  *puVar8 = _UNK_01269501;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined8 *)(puVar8 + 0xc) = 0x7265646970735f65;
  *(undefined1 *)(puVar8 + 0xe) = 0;
  uStack_a0 = 1;
  puStack_a8 = puVar8;
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar15 = _UNK_01388ed7;
  uStack_98 = 0x39;
  uStack_90 = 0x37;
  *(undefined8 *)(puVar13 + 8) = _UNK_01388ecf;
  *(undefined8 *)(puVar13 + 10) = uVar15;
  uVar15 = _UNK_01388ec7;
  *(undefined8 *)(puVar13 + 4) = _UNK_01388ebf;
  *(undefined8 *)(puVar13 + 6) = uVar15;
  uVar6 = _UNK_01388ebb;
  uVar5 = _UNK_01388eb7;
  uVar4 = _UNK_01388eb3;
  *puVar13 = _UNK_01388eaf;
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  puVar13[3] = uVar6;
  *(undefined8 *)((long)puVar13 + 0x2f) = 0x687369667265766c;
  *(undefined1 *)((long)puVar13 + 0x37) = 0;
  uStack_80 = 1;
  puStack_88 = (undefined8 *)puVar13;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uVar15 = _UNK_0144000c;
  uStack_78 = 0x41;
  uStack_70 = 0x38;
  puVar9[4] = _UNK_01440004;
  puVar9[5] = uVar15;
  uVar15 = _UNK_0143fffc;
  puVar9[2] = _UNK_0143fff4;
  puVar9[3] = uVar15;
  uVar15 = _UNK_0143ffec;
  *puVar9 = _UNK_0143ffe4;
  puVar9[1] = uVar15;
  puVar9[6] = 0x6569626d6f7a5f79;
  *(undefined1 *)(puVar9 + 7) = 0;
  uStack_60 = 1;
  uStack_128 = (undefined8 *)0x0;
  uStack_120 = (long *)0x0;
  lStack_118 = 0;
  puStack_68 = puVar9;
  puStack_40 = puVar7;
  lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (lVar12 == 0) {
    func_0x0eec74c0(0x80,0);
  }
  lStack_118 = lVar12 + 0x80;
  uStack_108 = &uStack_128;
  uStack_100 = &lStack_38;
  plStack_f8 = &lStack_e8;
  uStack_f0 = 0;
  uStack_128 = (undefined8 *)lVar12;
  uStack_120 = (long *)lVar12;
  lStack_e8 = lVar12;
  lStack_38 = lVar12;
  FUN_0412e5e0(lVar12,puVar7,0x32);
  lVar11 = lStack_e8;
  *(undefined4 *)(lVar12 + 0x18) = 1;
  lStack_e8 = lStack_e8 + 0x20;
  FUN_0412e5e0(lStack_e8,puVar8,0x38);
  lVar12 = lStack_e8;
  *(undefined4 *)(lVar11 + 0x38) = 1;
  lStack_e8 = lStack_e8 + 0x20;
  FUN_0412e5e0(lStack_e8,puVar13,0x37);
  lVar11 = lStack_e8;
  *(undefined4 *)(lVar12 + 0x38) = 1;
  lStack_e8 = lStack_e8 + 0x20;
  FUN_0412e5e0(lStack_e8,puVar9,0x38);
  *(undefined4 *)(lVar11 + 0x38) = 1;
  uStack_120 = (long *)(lStack_e8 + 0x20);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f460fa0;
  plStack_50 = plVar14 + 3;
  plVar14[3] = (long)&UNK_0f460ff0;
  plVar14[4] = 0x39;
  plVar14[5] = 0x35;
  plVar14[6] = (long)puStack_e0;
  *(undefined4 *)(plVar14 + 7) = (undefined4)uStack_128;
  *(undefined4 *)((long)plVar14 + 0x3c) = uStack_128._4_4_;
  *(undefined4 *)(plVar14 + 8) = (undefined4)uStack_120;
  *(undefined4 *)((long)plVar14 + 0x44) = uStack_120._4_4_;
  plVar14[9] = lStack_118;
  uStack_128 = (undefined8 *)0x0;
  uStack_120 = (long *)0x0;
  lStack_118 = 0;
  plStack_48 = plVar14;
  func_0x0d385880(&plStack_50);
  plVar14 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      func_0x0412c2d0(plVar14);
    }
  }
  lVar11 = (long)uStack_128;
  lVar12 = (long)uStack_120;
  if (uStack_128 != (undefined8 *)0x0) {
    for (; lVar11 != lVar12; lVar12 = lVar12 + -0x20) {
      if ((*(byte *)(lVar12 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar12 + -0x10),
                           *(ulong *)(lVar12 + -0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_120 = (long *)lVar11;
    thunk_FUN_0ee326a0(uStack_128,lStack_118 - (long)uStack_128);
  }
  if ((uStack_78 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_68,uStack_78 & 0xfffffffffffffffe);
  }
  if ((uStack_98 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_88,uStack_98 & 0xfffffffffffffffe);
  }
  if ((uStack_b8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_a8,uStack_b8 & 0xfffffffffffffffe);
  }
  if ((uStack_d8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_c8,uStack_d8 & 0xfffffffffffffffe);
  }
  func_0x0eee2f40(&UNK_0d2c8140,0xf71fa40,0xf53dab8);
  return;
}


