/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda60240
 * Label: callee-of:0xda370f0
 * Body:  [[0da601f0, 0da60231] [0da60240, 0da60b21] [0da60b30, 0da60f1d] [0da60f20, 0da611bf] [0da611c1, 0da613c5] [0da613d0, 0da61404] [0da61410, 0da6159f] [0da615a1, 0da62368] [0da62370, 0da62d12] [0da62d9b, 0da62f2c]]
 * Ghidra: FUN_0da60240
 */


/* WARNING: Removing unreachable block (ram,0x0da62b99) */
/* WARNING: Removing unreachable block (ram,0x0da62a52) */
/* WARNING: Removing unreachable block (ram,0x0da6290c) */
/* WARNING: Removing unreachable block (ram,0x0da62490) */
/* WARNING: Removing unreachable block (ram,0x0da624a2) */
/* WARNING: Removing unreachable block (ram,0x0da60d95) */
/* WARNING: Removing unreachable block (ram,0x0da62ee9) */
/* WARNING: Removing unreachable block (ram,0x0da62efd) */
/* WARNING: Removing unreachable block (ram,0x0da60da4) */
/* WARNING: Removing unreachable block (ram,0x0da60de0) */
/* WARNING: Removing unreachable block (ram,0x0da60e91) */
/* WARNING: Removing unreachable block (ram,0x0da60ded) */
/* WARNING: Removing unreachable block (ram,0x0da60dfc) */
/* WARNING: Removing unreachable block (ram,0x0da60ea1) */
/* WARNING: Removing unreachable block (ram,0x0da60e09) */
/* WARNING: Removing unreachable block (ram,0x0da60ea5) */
/* WARNING: Removing unreachable block (ram,0x0da60ec5) */
/* WARNING: Removing unreachable block (ram,0x0da60eb9) */
/* WARNING: Removing unreachable block (ram,0x0da60f14) */
/* WARNING: Removing unreachable block (ram,0x0da60f25) */
/* WARNING: Removing unreachable block (ram,0x0da60f31) */
/* WARNING: Removing unreachable block (ram,0x0da60f20) */
/* WARNING: Removing unreachable block (ram,0x0da60ec3) */
/* WARNING: Removing unreachable block (ram,0x0da60eef) */
/* WARNING: Removing unreachable block (ram,0x0da60f4e) */
/* WARNING: Removing unreachable block (ram,0x0da62d02) */
/* WARNING: Removing unreachable block (ram,0x0da614ad) */
/* WARNING: Removing unreachable block (ram,0x0da614b7) */
/* WARNING: Removing unreachable block (ram,0x0da614c0) */
/* WARNING: Removing unreachable block (ram,0x0da6288e) */
/* WARNING: Removing unreachable block (ram,0x0da629db) */
/* WARNING: Removing unreachable block (ram,0x0da62b68) */
/* WARNING: Removing unreachable block (ram,0x0da62bfb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0da60240(undefined8 param_1,long param_2,ulong param_3,byte *param_4)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  byte *in_RAX;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong *puVar16;
  long *plVar17;
  int *piVar18;
  long *plVar19;
  byte *pbVar20;
  undefined *puVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *pbVar24;
  code *pcVar25;
  undefined8 *puVar26;
  byte in_XMM0_Ba;
  byte in_XMM0_Bb;
  byte in_XMM0_Bc;
  byte in_XMM0_Bd;
  byte in_XMM0_Be;
  byte in_XMM0_Bf;
  byte in_XMM0_Bg;
  byte in_XMM0_Bh;
  byte in_XMM0_Bi;
  byte in_XMM0_Bj;
  byte in_XMM0_Bk;
  byte in_XMM0_Bl;
  byte in_XMM0_Bm;
  byte in_XMM0_Bn;
  byte in_XMM0_Bo;
  byte in_XMM0_Bp;
  byte in_XMM1_Ba;
  byte in_XMM1_Bb;
  byte in_XMM1_Bc;
  byte in_XMM1_Bd;
  byte in_XMM1_Be;
  byte in_XMM1_Bf;
  byte in_XMM1_Bg;
  byte in_XMM1_Bh;
  byte in_XMM1_Bi;
  undefined1 uVar27;
  byte in_XMM1_Bj;
  undefined1 uVar28;
  byte in_XMM1_Bk;
  undefined1 uVar29;
  byte in_XMM1_Bl;
  undefined1 uVar30;
  byte in_XMM1_Bm;
  undefined1 uVar31;
  byte in_XMM1_Bn;
  undefined1 uVar32;
  byte in_XMM1_Bo;
  undefined1 uVar33;
  byte in_XMM1_Bp;
  undefined1 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 in_stack_00000020;
  undefined *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined *in_stack_00000040;
  undefined *in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  long *in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined2 uStack0000000000000080;
  undefined1 auStack0000000000000082 [14];
  long in_stack_00000090;
  undefined1 uStack0000000000000098;
  undefined7 uStack0000000000000099;
  code *in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  char cStack00000000000000ac;
  undefined3 uStack00000000000000ad;
  long in_stack_000000b0;
  long in_stack_000000b8;
  undefined1 in_stack_000000c0;
  undefined7 uStack00000000000000c1;
  undefined1 uStack00000000000000c8;
  undefined2 uStack00000000000000c9;
  undefined1 uStack00000000000000cb;
  undefined4 uStack00000000000000cc;
  long *in_stack_000000d0;
  long in_stack_000000d8;
  undefined1 uStack00000000000000e0;
  undefined1 uStack00000000000000e1;
  undefined1 uStack00000000000000e2;
  undefined1 uStack00000000000000e3;
  undefined1 uStack00000000000000e4;
  undefined1 uStack00000000000000e5;
  undefined1 uStack00000000000000e6;
  undefined1 uStack00000000000000e7;
  undefined1 uStack00000000000000e8;
  undefined1 uStack00000000000000e9;
  undefined1 uStack00000000000000ea;
  undefined1 uStack00000000000000eb;
  undefined1 uStack00000000000000ec;
  undefined1 uStack00000000000000ed;
  undefined1 uStack00000000000000ee;
  undefined1 uStack00000000000000ef;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  undefined4 in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  undefined1 uStack0000000000000128;
  undefined1 uStack0000000000000129;
  undefined1 uStack000000000000012a;
  undefined1 uStack000000000000012b;
  undefined1 uStack000000000000012c;
  undefined1 uStack000000000000012d;
  undefined1 uStack000000000000012e;
  undefined1 uStack000000000000012f;
  undefined1 uStack0000000000000130;
  undefined1 uStack0000000000000131;
  undefined1 uStack0000000000000132;
  undefined1 uStack0000000000000133;
  undefined1 uStack0000000000000134;
  undefined1 uStack0000000000000135;
  undefined1 uStack0000000000000136;
  undefined1 uStack0000000000000137;
  long in_stack_00000138;
  undefined2 uStack0000000000000140;
  undefined2 uStack0000000000000142;
  uint uStack0000000000000144;
  uint in_stack_00000148;
  undefined1 uStack000000000000014c;
  byte bStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 in_stack_00000160;
  undefined2 in_stack_00000168;
  undefined8 in_stack_00000170;
  ulong in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  undefined2 in_stack_000001a8;
  ulong in_stack_000001b0;
  undefined *in_stack_000001b8;
  undefined *in_stack_000001c0;
  byte bStack00000000000001d0;
  undefined7 uStack00000000000001d1;
  undefined1 uStack00000000000001d8;
  undefined2 uStack00000000000001d9;
  undefined5 uStack00000000000001db;
  undefined8 *in_stack_000001e0;
  undefined1 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  long in_stack_00000298;
  undefined8 in_stack_000002b0;
  int in_stack_000002c0;
  char in_stack_000002c8;
  long in_stack_00000340;
  ulong in_stack_00000348;
  ulong in_stack_00000350;
  undefined1 in_stack_00000358;
  undefined1 in_stack_00000359;
  undefined1 in_stack_0000035a;
  undefined1 in_stack_0000035b;
  undefined1 in_stack_0000035c;
  undefined1 in_stack_0000035d;
  undefined1 in_stack_0000035e;
  undefined1 in_stack_0000035f;
  undefined8 in_stack_00000378;
  ulong in_stack_00000380;
  ulong in_stack_000003c0;
  ulong in_stack_000004a0;
  long in_stack_000004a8;
  long lVar37;
  long in_stack_000004b0;
  long lVar38;
  long *plVar39;
  ulong in_stack_00000620;
  long in_stack_00000628;
  long in_stack_00000630;
  long lVar40;
  
code_r0x0da60240:
  uVar23 = param_3 >> 1 & 0x7fffffff;
  pbVar24 = in_RAX;
  do {
    if (uVar23 == 0x1d) {
      if ((param_3 & 1) == 0) {
        pbVar20 = pbVar24 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar24 + 0x10);
      }
      auVar35[0] = -(*pbVar20 == in_XMM1_Ba);
      auVar35[1] = -(pbVar20[1] == in_XMM1_Bb);
      auVar35[2] = -(pbVar20[2] == in_XMM1_Bc);
      auVar35[3] = -(pbVar20[3] == in_XMM1_Bd);
      auVar35[4] = -(pbVar20[4] == in_XMM1_Be);
      auVar35[5] = -(pbVar20[5] == in_XMM1_Bf);
      auVar35[6] = -(pbVar20[6] == in_XMM1_Bg);
      auVar35[7] = -(pbVar20[7] == in_XMM1_Bh);
      auVar35[8] = -(pbVar20[8] == in_XMM1_Bi);
      auVar35[9] = -(pbVar20[9] == in_XMM1_Bj);
      auVar35[10] = -(pbVar20[10] == in_XMM1_Bk);
      auVar35[0xb] = -(pbVar20[0xb] == in_XMM1_Bl);
      auVar35[0xc] = -(pbVar20[0xc] == in_XMM1_Bm);
      auVar35[0xd] = -(pbVar20[0xd] == in_XMM1_Bn);
      auVar35[0xe] = -(pbVar20[0xe] == in_XMM1_Bo);
      auVar35[0xf] = -(pbVar20[0xf] == in_XMM1_Bp);
      auVar36[0] = -(pbVar20[0xd] == in_XMM0_Ba);
      auVar36[1] = -(pbVar20[0xe] == in_XMM0_Bb);
      auVar36[2] = -(pbVar20[0xf] == in_XMM0_Bc);
      auVar36[3] = -(pbVar20[0x10] == in_XMM0_Bd);
      auVar36[4] = -(pbVar20[0x11] == in_XMM0_Be);
      auVar36[5] = -(pbVar20[0x12] == in_XMM0_Bf);
      auVar36[6] = -(pbVar20[0x13] == in_XMM0_Bg);
      auVar36[7] = -(pbVar20[0x14] == in_XMM0_Bh);
      auVar36[8] = -(pbVar20[0x15] == in_XMM0_Bi);
      auVar36[9] = -(pbVar20[0x16] == in_XMM0_Bj);
      auVar36[10] = -(pbVar20[0x17] == in_XMM0_Bk);
      auVar36[0xb] = -(pbVar20[0x18] == in_XMM0_Bl);
      auVar36[0xc] = -(pbVar20[0x19] == in_XMM0_Bm);
      auVar36[0xd] = -(pbVar20[0x1a] == in_XMM0_Bn);
      auVar36[0xe] = -(pbVar20[0x1b] == in_XMM0_Bo);
      auVar36[0xf] = -(pbVar20[0x1c] == in_XMM0_Bp);
      auVar36 = auVar36 & auVar35;
      in_RAX = pbVar24;
      if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) != 0xffff) goto LAB_0da60215;
LAB_0da60255:
      if (in_RAX == param_4) {
LAB_0da6027d:
        if (in_stack_000002c0 == 0) {
          if (((param_2 == 0) || (*(int *)(param_2 + 0x60) != -0x2b3da790)) ||
             (*(long *)(param_2 + 0x68) == 0)) goto LAB_0da6030e;
          lVar12 = *(long *)(param_2 + 0x68) + 0x38;
        }
        else {
          if (param_2 == 0) {
            func_0x048aead0();
          }
          lVar12 = func_0x048b0c90();
          if (lVar12 == 0) {
            _uStack0000000000000080 = (undefined1  [16])0x0;
            func_0x048b0d20(&stack0x00000080);
            lVar12 = (long)_uStack0000000000000080;
            if (_uStack0000000000000080 == (undefined *)0x0) goto LAB_0da6030e;
          }
          if ((*(int *)(lVar12 + 0x50) == -0x45dcb126) && (*(long *)(lVar12 + 0x58) != 0)) {
            lVar12 = *(long *)(lVar12 + 0x58) + 0x40;
          }
          else {
LAB_0da6030e:
            lVar12 = 0;
          }
        }
        in_stack_00000020 = CONCAT35(in_stack_00000020._5_3_,0x1d33bd9c5);
        puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar13 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        puVar13[2] = in_stack_00000160;
        *puVar13 = _bStack0000000000000150;
        puVar13[1] = uStack0000000000000158;
        _bStack0000000000000150 = (undefined1  [16])0x0;
        in_stack_00000160 = 0;
        *(undefined2 *)(puVar13 + 3) = in_stack_00000168;
        puVar13[4] = in_stack_00000170;
        puVar13[5] = in_stack_00000178;
        in_stack_00000178 = 0;
        puVar13[6] = in_stack_00000180;
        in_stack_00000180 = 0;
        _uStack0000000000000098 = (code *)&UNK_048b4ab0;
        in_stack_000000a0 = (code *)&UNK_048b49f0;
        _uStack00000000000000a8 = CONCAT35(uStack00000000000000ad,0x1d33bd9c5);
        auStack0000000000000082._6_8_ = puVar13;
        _uStack0000000000000080 = &UNK_048b46e0;
        puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar13 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar15 = _UNK_014d987e;
        bStack00000000000001d0 = 0x21;
        uStack00000000000001d1 = 0;
        uStack00000000000001d8 = 0x1d;
        uStack00000000000001d9 = 0;
        uStack00000000000001db = 0;
        *(ulong *)((long)puVar13 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
        *(undefined8 *)((long)puVar13 + 0x15) = uVar15;
        uVar15 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
        *puVar13 = _DAT_014d9869;
        puVar13[1] = uVar15;
        *(undefined1 *)((long)puVar13 + 0x1d) = 0;
        in_stack_000001e0 = puVar13;
        lVar12 = func_0x048b5060(lVar12,&stack0x000001d0);
        *(undefined **)(lVar12 + 0x20) = &UNK_048b46e0;
        pcVar25 = (code *)&UNK_048b49f0;
        if ((undefined2 *)(lVar12 + 0x20) != &stack0x00000080) {
          puVar13 = (undefined8 *)(lVar12 + 0x28);
          if (*(code **)(lVar12 + 0x40) == (code *)0x0) {
LAB_0da604fc:
            uVar15 = auStack0000000000000082._6_8_;
            auStack0000000000000082._6_8_ = 0;
            *puVar13 = uVar15;
          }
          else {
            (**(code **)(lVar12 + 0x40))(puVar13);
            if (cStack00000000000000ac != '\0') {
              if (cStack00000000000000ac != '\x02') goto LAB_0da604fc;
              (*_uStack0000000000000098)(5,(undefined1 *)((long)&stack0x00000080 + 8),puVar13);
            }
          }
          *(code **)(lVar12 + 0x38) = _uStack0000000000000098;
          *(code **)(lVar12 + 0x40) = in_stack_000000a0;
          *(undefined4 *)(lVar12 + 0x48) = uStack00000000000000a8;
          *(char *)(lVar12 + 0x4c) = cStack00000000000000ac;
          pcVar25 = in_stack_000000a0;
        }
        if ((bStack00000000000001d0 & 1) != 0) {
          func_0x0412a280(in_stack_000001e0,
                          CONCAT71(uStack00000000000001d1,bStack00000000000001d0) &
                          0xfffffffffffffffe);
          pcVar25 = in_stack_000000a0;
        }
        if (pcVar25 != (code *)0x0) {
          (*pcVar25)((undefined1 *)((long)&stack0x00000080 + 8));
        }
        (*(code *)&UNK_048b49f0)(&stack0x00000000);
      }
      else {
        iVar10 = *(int *)(in_RAX + 0x1c);
        if ((DAT_0f550768 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550768), iVar11 != 0)) {
          func_0x048b46f0(0xf550750);
          func_0x0410844d(&DAT_0f550768);
        }
        if (iVar10 == _DAT_0f550754) goto LAB_0da6027d;
      }
      uVar27 = (undefined1)in_stack_000002b0;
      uVar28 = (undefined1)((ulong)in_stack_000002b0 >> 8);
      uVar29 = (undefined1)((ulong)in_stack_000002b0 >> 0x10);
      uVar30 = (undefined1)((ulong)in_stack_000002b0 >> 0x18);
      uVar31 = (undefined1)((ulong)in_stack_000002b0 >> 0x20);
      uVar32 = (undefined1)((ulong)in_stack_000002b0 >> 0x28);
      uVar33 = (undefined1)((ulong)in_stack_000002b0 >> 0x30);
      uVar34 = (undefined1)((ulong)in_stack_000002b0 >> 0x38);
      if ((DAT_0f7327a8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7327a8), iVar10 != 0)) {
        func_0x0daa7de0();
        func_0x0410844d(&DAT_0f7327a8);
      }
      if ((DAT_0f732788 == '\0') && (iVar10 = func_0x04108328(&DAT_0f732788), iVar10 != 0)) {
        func_0x0daa7cd0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f732708,0xf53dab8);
        func_0x0410844d(&DAT_0f732788);
      }
      plVar14 = (long *)(*(long *)(in_stack_00000298 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(in_stack_00000298 + 0x20) -
                                             *(long *)(in_stack_00000298 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f732708 + 4)) * 8);
      break;
    }
LAB_0da60215:
    in_RAX = pbVar24 + 0x38;
    if (in_RAX == param_4) goto LAB_0da60255;
    param_3 = (ulong)*in_RAX;
    if ((*in_RAX & 1) == 0) goto code_r0x0da60240;
    uVar23 = *(ulong *)(pbVar24 + 0x40);
    pbVar24 = in_RAX;
  } while( true );
  while (plVar14 = (long *)(*(long *)(in_stack_00000298 + 0x30) + lVar12 * 0x18),
        *(uint *)(*(long *)(in_stack_00000298 + 0x30) + 8 + lVar12 * 0x18) !=
        *(uint *)(_DAT_0f732708 + 4)) {
    lVar12 = *plVar14;
    if (lVar12 == -1) goto LAB_0da60660;
  }
  if (plVar14 == *(long **)(in_stack_00000298 + 0x38)) {
LAB_0da60660:
    _uStack0000000000000080 = &DAT_0f732708;
  }
  else {
    _uStack0000000000000080 = (undefined *)plVar14[2];
  }
  auStack0000000000000082._6_8_ = in_stack_00000298 + 0x18;
  func_0x0ed621a0(&stack0x00000080,0x28a5a83e);
  uStack0000000000000080 = 1;
  auStack0000000000000082._6_8_ = &stack0x00000248;
  in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,0x28a5a83e);
  _uStack0000000000000098 = (code *)0x0;
  in_stack_000000a0 = (code *)0x0;
  _uStack00000000000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0x14;
  uStack00000000000000c1 = 0x6669746e656469;
  uStack00000000000000c8 = 0x69;
  uStack00000000000000c9 = 0x7265;
  uStack00000000000000cb = 0;
  in_stack_000000d8 = 0;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0x3f600000;
  func_0x048afb10(&stack0x000000d8,8);
  _uStack0000000000000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000120 = 0;
  _uStack0000000000000128 = 0;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  uStack0000000000000140 = 0xff00;
  uStack0000000000000144 = uStack0000000000000144 & 0xffffff00;
  in_stack_00000148 = in_stack_00000148 & 0xffffff00;
  uStack000000000000014c = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0ef44b00;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar12 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)puVar13;
    (**(code **)(lVar12 + 8))();
    puVar13 = (undefined8 *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)puVar13;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_048b3f30;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &SUB_048b2190;
  in_stack_00000040 = &UNK_0daa8e30;
  in_stack_00000048 = &UNK_0daa8ff0;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(auStack0000000000000082._6_8_,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar17 = in_stack_00000060 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  uVar15 = auStack0000000000000082._6_8_;
  if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar12 = (long)in_stack_000000a0;
  puVar13 = (undefined8 *)_uStack0000000000000098;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0ef439d0;
  _uStack0000000000000098 = (code *)0x0;
  in_stack_000000a0 = (code *)0x0;
  plVar14[3] = (long)puVar13;
  plVar14[4] = lVar12;
  plVar14[7] = in_stack_000000b8;
  plVar14[5] = _uStack00000000000000a8;
  plVar14[6] = in_stack_000000b0;
  _uStack00000000000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  plVar14[10] = (long)in_stack_000000d0;
  plVar14[8] = CONCAT71(uStack00000000000000c1,in_stack_000000c0);
  plVar14[9] = CONCAT44(uStack00000000000000cc,
                        CONCAT13(uStack00000000000000cb,
                                 CONCAT21(uStack00000000000000c9,uStack00000000000000c8)));
  in_stack_000000c0 = 0;
  uStack00000000000000c1 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c9 = 0;
  uStack00000000000000cb = 0;
  uStack00000000000000cc = 0;
  in_stack_000000d0 = (long *)0x0;
  plVar14[0xb] = in_stack_000000d8;
  plVar14[0xc] = _uStack00000000000000e0;
  plVar14[0xd] = _uStack00000000000000e8;
  in_stack_000000d8 = 0;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = 0;
  plVar14[0xe] = in_stack_000000f0;
  plVar14[0xf] = in_stack_000000f8;
  plVar14[0x10] = in_stack_00000100;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  *(undefined4 *)(plVar14 + 0x11) = in_stack_00000108;
  plVar14[0x12] = in_stack_00000110;
  plVar14[0x13] = in_stack_00000118;
  plVar14[0x14] = in_stack_00000120;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  plVar14[0x17] = in_stack_00000138;
  *(undefined1 *)(plVar14 + 0x15) = uStack0000000000000128;
  *(undefined1 *)((long)plVar14 + 0xa9) = uStack0000000000000129;
  *(undefined1 *)((long)plVar14 + 0xaa) = uStack000000000000012a;
  *(undefined1 *)((long)plVar14 + 0xab) = uStack000000000000012b;
  *(undefined1 *)((long)plVar14 + 0xac) = uStack000000000000012c;
  *(undefined1 *)((long)plVar14 + 0xad) = uStack000000000000012d;
  *(undefined1 *)((long)plVar14 + 0xae) = uStack000000000000012e;
  *(undefined1 *)((long)plVar14 + 0xaf) = uStack000000000000012f;
  *(undefined1 *)(plVar14 + 0x16) = uStack0000000000000130;
  *(undefined1 *)((long)plVar14 + 0xb1) = uStack0000000000000131;
  *(undefined1 *)((long)plVar14 + 0xb2) = uStack0000000000000132;
  *(undefined1 *)((long)plVar14 + 0xb3) = uStack0000000000000133;
  *(undefined1 *)((long)plVar14 + 0xb4) = uStack0000000000000134;
  *(undefined1 *)((long)plVar14 + 0xb5) = uStack0000000000000135;
  *(undefined1 *)((long)plVar14 + 0xb6) = uStack0000000000000136;
  *(undefined1 *)((long)plVar14 + 0xb7) = uStack0000000000000137;
  _uStack0000000000000128 = 0;
  _uStack0000000000000130 = 0;
  in_stack_00000138 = 0;
  *(ulong *)((long)plVar14 + 0xc5) =
       CONCAT17(uStack000000000000014c,CONCAT43(in_stack_00000148,uStack0000000000000144._1_3_));
  plVar14[0x18] =
       CONCAT44(uStack0000000000000144,CONCAT22(uStack0000000000000142,uStack0000000000000140));
  bStack00000000000001d0 = 0;
  uStack00000000000001d1 = 0;
  uStack00000000000001d8 = 0;
  uStack00000000000001d9 = 0;
  uStack00000000000001db = 0;
  func_0x048afd20(uVar15,&stack0x00000000);
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  plVar14 = (long *)CONCAT53(uStack00000000000001db,
                             CONCAT21(uStack00000000000001d9,uStack00000000000001d8));
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  lVar12 = *(long *)(uVar15 + 0x10);
  iVar10 = *(int *)(uVar15 + 0x1c);
  if (iVar10 == 2) {
    piVar18 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
    iVar10 = *piVar18;
    while (iVar10 != *(int *)(uVar15 + 0x18)) {
      piVar18 = piVar18 + 0x16;
      iVar10 = *piVar18;
    }
    for (; *(long *)(piVar18 + 0xc) != *(long *)(uVar15 + 8); piVar18 = *(int **)(piVar18 + 0xe)) {
    }
LAB_0da60b3a:
    piVar18[4] = piVar18[4] | _uStack0000000000000080 << 0x10;
  }
  else {
    if (iVar10 == 1) {
      piVar18 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
      iVar10 = *piVar18;
      while (iVar10 != *(int *)(uVar15 + 0x18)) {
        piVar18 = piVar18 + 0x1a;
        iVar10 = *piVar18;
      }
      goto LAB_0da60b3a;
    }
    if (iVar10 == 0) {
      *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | _uStack0000000000000080 << 0x10;
    }
  }
  func_0x048b0bc0(&stack0x00000098);
  in_stack_00000020 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000048 = (undefined *)0x0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000038 = (undefined1 *)0x0;
  in_stack_00000040 = (undefined *)0x0;
  in_stack_00000028 = (undefined *)0x0;
  in_stack_00000030 = (undefined1 *)0x0;
  in_stack_00000078 = 0;
  func_0x041679a0(&stack0x00000020);
  in_stack_00000028 = (undefined *)func_0x041681f0(&stack0x00000020,0xf547a30);
  in_stack_00000030 = (undefined1 *)func_0x041681f0(&stack0x00000020,0xf547770);
  in_stack_00000038 = (undefined1 *)0x0;
  in_stack_00000040 = (undefined *)0x0;
  in_stack_00000048 = (undefined *)0x0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  bStack00000000000001d0 = 0x12;
  uStack00000000000001d1 = 0x775c3a2b775c5e;
  uStack00000000000001d8 = 0x2b;
  uStack00000000000001d9 = 0x24;
  func_0x0ed60210(&stack0x00000000,&stack0x000001d0,0);
  _uStack0000000000000098 = (code *)CONCAT71(uStack0000000000000099,0xff);
  in_stack_00000090 = 0;
  auStack0000000000000082._6_8_ = 0xffffffffffffffff;
  _uStack0000000000000080 = &UNK_0f4e3c70;
  func_0x04167a20(&stack0x000000a0,&stack0x00000020);
  _uStack00000000000000a8 = (long)in_stack_00000028;
  in_stack_000000b0 = (long)in_stack_00000030;
  in_stack_000000b8 = (long)in_stack_00000038;
  in_stack_000000c0 = SUB81(in_stack_00000040,0);
  uStack00000000000000c1 = (undefined7)((ulong)in_stack_00000040 >> 8);
  uStack00000000000000c8 = SUB81(in_stack_00000048,0);
  uStack00000000000000c9 = (undefined2)((ulong)in_stack_00000048 >> 8);
  uStack00000000000000cb = (undefined1)((ulong)in_stack_00000048 >> 0x18);
  uStack00000000000000cc = (undefined4)((ulong)in_stack_00000048 >> 0x20);
  in_stack_000000d0 = in_stack_00000050;
  if (in_stack_00000050 != (long *)0x0) {
    LOCK();
    in_stack_00000050[1] = in_stack_00000050[1] + 1;
    UNLOCK();
  }
  in_stack_000000d8 = in_stack_00000058;
  if (((ulong)in_stack_00000060 & 1) == 0) {
    in_stack_000000f0 = in_stack_00000070;
    _uStack00000000000000e0 = (ulong)in_stack_00000060;
    _uStack00000000000000e8 = in_stack_00000068;
  }
  else {
    func_0x0412e5e0(&stack0x000000e0,in_stack_00000070,in_stack_00000068);
  }
  in_stack_000000f8 = in_stack_00000078;
  if ((DAT_0f732788 == '\0') && (iVar10 = func_0x04108328(&DAT_0f732788), iVar10 != 0)) {
    func_0x0daa7cd0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732708,0xf53dab8);
    func_0x0410844d(&DAT_0f732788);
  }
  plVar14 = (long *)(*(long *)(in_stack_00000298 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(in_stack_00000298 + 0x20) -
                                         *(long *)(in_stack_00000298 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f732708 + 4)) * 8);
  do {
    lVar12 = *plVar14;
    if (lVar12 == -1) goto LAB_0da60d89;
    plVar14 = (long *)(*(long *)(in_stack_00000298 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(in_stack_00000298 + 0x30) + 8 + lVar12 * 0x18) !=
           *(uint *)(_DAT_0f732708 + 4));
  if (plVar14 == *(long **)(in_stack_00000298 + 0x38)) {
LAB_0da60d89:
    puVar21 = &DAT_0f732708;
  }
  else {
    puVar21 = (undefined *)plVar14[2];
  }
  lVar12 = func_0x048b0c90(in_stack_00000298 + 0x18,puVar21,0x28a5a83e,1);
  if (lVar12 == 0) {
    func_0x048b0d20(&stack0x00000300);
    lVar12 = 0;
  }
  lVar12 = *(long *)(lVar12 + 0x58);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(undefined1 *)(puVar13 + 3) = uStack0000000000000098;
  puVar13[1] = auStack0000000000000082._6_8_;
  puVar13[2] = in_stack_00000090;
  *puVar13 = &UNK_0f4e3c70;
  func_0x04167a20(puVar13 + 4,&stack0x000000a0);
  puVar13[5] = _uStack00000000000000a8;
  puVar13[6] = in_stack_000000b0;
  puVar13[7] = in_stack_000000b8;
  puVar13[8] = CONCAT71(uStack00000000000000c1,in_stack_000000c0);
  puVar13[9] = CONCAT44(uStack00000000000000cc,
                        CONCAT13(uStack00000000000000cb,
                                 CONCAT21(uStack00000000000000c9,uStack00000000000000c8)));
  puVar13[10] = in_stack_000000d0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c9 = 0;
  uStack00000000000000cb = 0;
  uStack00000000000000cc = 0;
  in_stack_000000d0 = (long *)0x0;
  puVar13[0xb] = in_stack_000000d8;
  puVar13[0xe] = in_stack_000000f0;
  *(undefined1 *)(puVar13 + 0xc) = uStack00000000000000e0;
  *(undefined1 *)((long)puVar13 + 0x61) = uStack00000000000000e1;
  *(undefined1 *)((long)puVar13 + 0x62) = uStack00000000000000e2;
  *(undefined1 *)((long)puVar13 + 99) = uStack00000000000000e3;
  *(undefined1 *)((long)puVar13 + 100) = uStack00000000000000e4;
  *(undefined1 *)((long)puVar13 + 0x65) = uStack00000000000000e5;
  *(undefined1 *)((long)puVar13 + 0x66) = uStack00000000000000e6;
  *(undefined1 *)((long)puVar13 + 0x67) = uStack00000000000000e7;
  *(undefined1 *)(puVar13 + 0xd) = uStack00000000000000e8;
  *(undefined1 *)((long)puVar13 + 0x69) = uStack00000000000000e9;
  *(undefined1 *)((long)puVar13 + 0x6a) = uStack00000000000000ea;
  *(undefined1 *)((long)puVar13 + 0x6b) = uStack00000000000000eb;
  *(undefined1 *)((long)puVar13 + 0x6c) = uStack00000000000000ec;
  *(undefined1 *)((long)puVar13 + 0x6d) = uStack00000000000000ed;
  *(undefined1 *)((long)puVar13 + 0x6e) = uStack00000000000000ee;
  *(undefined1 *)((long)puVar13 + 0x6f) = uStack00000000000000ef;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = 0;
  in_stack_000000f0 = 0;
  puVar13[0xf] = in_stack_000000f8;
  plVar14 = *(long **)(lVar12 + 8);
  *(undefined8 **)(lVar12 + 8) = puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x28))();
  }
  _uStack0000000000000080 = &UNK_0f4e3c70;
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
  }
  plVar14 = in_stack_000000d0;
  if (in_stack_000000d0 != (long *)0x0) {
    LOCK();
    plVar17 = in_stack_000000d0 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*in_stack_000000d0 + 0x10))(in_stack_000000d0);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&stack0x000000a0);
  if ((bStack00000000000001d0 & 1) != 0) {
    func_0x0412a280(in_stack_000001e0,
                    CONCAT71(uStack00000000000001d1,bStack00000000000001d0) & 0xfffffffffffffffe);
  }
  plVar14 = in_stack_00000050;
  if (((ulong)in_stack_00000060 & 1) != 0) {
    func_0x0412a280(in_stack_00000070,(ulong)in_stack_00000060 & 0xfffffffffffffffe);
    plVar14 = in_stack_00000050;
  }
  in_stack_00000050 = plVar14;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&stack0x00000020);
  if ((in_stack_00000180 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000180 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000180 = 0;
  if ((in_stack_00000178 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000178 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000178 = 0;
  if ((bStack0000000000000150 & 1) != 0) {
    func_0x0412a280(in_stack_00000160,_bStack0000000000000150 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000350 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000350 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000348 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000348 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000380 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_000003c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_000003c0 & 0xff00ffffffffffff) - 8);
  }
  lVar12 = func_0x0d2a6f90(in_stack_00000378);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (*(long *)(lVar12 + 0x68) != 0)) {
    func_0x0daa91c0(&stack0x00000240);
  }
  else {
    func_0x0daa91c0(&stack0x00000240);
  }
  if (in_stack_000002c8 != '\0') {
    return;
  }
  in_stack_00000188 = 0;
  in_stack_00000190 = 0x6d636f44696f5014;
  in_stack_00000198 = 0x746e65;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0x1402;
  in_stack_000001b0 = 0x10028001a0001;
  in_stack_000001b8 = &UNK_01254d89;
  in_stack_000001c0 = &UNK_01254d89;
  uVar15 = func_0x0d2a6f90(in_stack_00000298 + 0x18);
  pbVar20 = *(byte **)(in_stack_00000298 + 0x58);
  for (pbVar24 = *(byte **)(in_stack_00000298 + 0x50); pbVar24 != pbVar20; pbVar24 = pbVar24 + 0x38)
  {
    bVar2 = *pbVar24;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0da6141a;
    }
    else if (*(long *)(pbVar24 + 8) == 0x24) {
LAB_0da6141a:
      if ((bVar2 & 1) == 0) {
        pbVar22 = pbVar24 + 1;
      }
      else {
        pbVar22 = *(byte **)(pbVar24 + 0x10);
      }
      iVar10 = func_0x0eee3000(&DAT_014518a9,pbVar22,0x24);
      if (iVar10 == 0) break;
    }
  }
  if (pbVar24 == pbVar20) {
LAB_0da6144a:
    lVar12 = func_0x048b0c90(in_stack_00000298 + 0x18,uVar15,0x28a5a83e,1);
    if (lVar12 == 0) {
      _uStack0000000000000080 = ZEXT816(0);
      func_0x048b0d20(&stack0x00000080);
      lVar12 = (long)_uStack0000000000000080;
      if (_uStack0000000000000080 != (undefined *)0x0) goto LAB_0da61495;
LAB_0da614c6:
      lVar12 = 0;
    }
    else {
LAB_0da61495:
      if ((*(int *)(lVar12 + 0x50) != -0x45dcb126) || (*(long *)(lVar12 + 0x58) == 0))
      goto LAB_0da614c6;
      lVar12 = *(long *)(lVar12 + 0x58) + 0x40;
    }
    in_stack_00000020 = CONCAT35(in_stack_00000020._5_3_,0x1d33bd9c5);
    puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar16 == (ulong *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar16[2] = in_stack_000001a0;
    *puVar16 = in_stack_00000190;
    puVar16[1] = in_stack_00000198;
    in_stack_00000190 = 0;
    in_stack_00000198 = 0;
    in_stack_000001a0 = 0;
    *(undefined2 *)(puVar16 + 3) = in_stack_000001a8;
    puVar16[4] = in_stack_000001b0;
    puVar16[5] = (ulong)in_stack_000001b8;
    in_stack_000001b8 = (undefined *)0x0;
    puVar16[6] = (ulong)in_stack_000001c0;
    in_stack_000001c0 = (undefined *)0x0;
    _uStack0000000000000098 = (code *)&UNK_048b4ab0;
    in_stack_000000a0 = (code *)&UNK_048b49f0;
    _uStack00000000000000a8 = CONCAT35(uStack00000000000000ad,0x1d33bd9c5);
    auStack0000000000000082._6_8_ = puVar16;
    _uStack0000000000000080 = &UNK_048b46e0;
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar15 = _UNK_014518c1;
    puVar13[2] = _DAT_014518b9;
    puVar13[3] = uVar15;
    uVar15 = _UNK_014518b1;
    *puVar13 = _DAT_014518a9;
    puVar13[1] = uVar15;
    *(undefined4 *)(puVar13 + 4) = 0x5d797472;
    *(undefined1 *)((long)puVar13 + 0x24) = 0;
    lVar12 = func_0x048b5060(lVar12,&stack0x00000298);
    *(undefined **)(lVar12 + 0x20) = &UNK_048b46e0;
    if ((undefined2 *)(lVar12 + 0x20) != &stack0x00000080) {
      puVar26 = (undefined8 *)(lVar12 + 0x28);
      if (*(code **)(lVar12 + 0x40) == (code *)0x0) {
LAB_0da616a1:
        uVar15 = auStack0000000000000082._6_8_;
        auStack0000000000000082._6_8_ = 0;
        *puVar26 = uVar15;
      }
      else {
        (**(code **)(lVar12 + 0x40))(puVar26);
        if (cStack00000000000000ac != '\0') {
          if (cStack00000000000000ac != '\x02') goto LAB_0da616a1;
          (*_uStack0000000000000098)(5,(undefined1 *)((long)&stack0x00000080 + 8),puVar26);
        }
      }
      *(code **)(lVar12 + 0x38) = _uStack0000000000000098;
      *(code **)(lVar12 + 0x40) = in_stack_000000a0;
      *(undefined4 *)(lVar12 + 0x48) = uStack00000000000000a8;
      *(char *)(lVar12 + 0x4c) = cStack00000000000000ac;
    }
    func_0x0412a280(puVar13,0x28);
    if (in_stack_000000a0 != (code *)0x0) {
      (*in_stack_000000a0)((undefined1 *)((long)&stack0x00000080 + 8));
    }
    (*(code *)&UNK_048b49f0)(&stack0x00000000);
  }
  else {
    iVar10 = *(int *)(pbVar24 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550768), iVar11 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar10 == _DAT_0f550754) goto LAB_0da6144a;
  }
  func_0x0daa9ac0(&stack0x00000080,&stack0x00000580,&UNK_011ea907,0xb,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f491270;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar12 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar14;
    (**(code **)(lVar12 + 8))();
    plVar14 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar14;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_0daaa1f0;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_0daa7c10;
  in_stack_00000040 = &UNK_0daaa2b0;
  in_stack_00000048 = &UNK_0daaa470;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(auStack0000000000000082._6_8_,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar17 = in_stack_00000060 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daa9700(&stack0x00000080,in_stack_00000298 + 0x18);
  if (uStack0000000000000099._3_4_ == 2) {
    piVar18 = *(int **)(*(long *)(in_stack_00000090 + 0x78) + 0x60);
    iVar10 = *piVar18;
    while (iVar10 != _uStack0000000000000098) {
      piVar18 = piVar18 + 0x16;
      iVar10 = *piVar18;
    }
    lVar12 = *(long *)(piVar18 + 0xc);
    while (lVar12 != auStack0000000000000082._6_8_) {
      piVar18 = *(int **)(piVar18 + 0xe);
      lVar12 = *(long *)(piVar18 + 0xc);
    }
LAB_0da6195f:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
  }
  else {
    if (uStack0000000000000099._3_4_ == 1) {
      piVar18 = *(int **)(*(long *)(in_stack_00000090 + 0x78) + 0x48);
      iVar10 = *piVar18;
      while (iVar10 != _uStack0000000000000098) {
        piVar18 = piVar18 + 0x1a;
        iVar10 = *piVar18;
      }
      goto LAB_0da6195f;
    }
    if (uStack0000000000000099._3_4_ == 0) {
      *(uint *)(in_stack_00000090 + 0x18) = *(uint *)(in_stack_00000090 + 0x18) | 0x40000;
    }
  }
  func_0x0daa9ac0(&stack0x00000080,&stack0x000004c0,&UNK_014b95b7,7,0x10);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f012438;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar12 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar14;
    (**(code **)(lVar12 + 8))();
    plVar14 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar14;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_05fc5e00;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_05dcda00;
  in_stack_00000040 = &UNK_0daaa8e0;
  in_stack_00000048 = &UNK_0daaaa40;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(auStack0000000000000082._6_8_,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar17 = in_stack_00000060 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daa9700(&stack0x00000080,in_stack_00000298 + 0x18);
  if (uStack0000000000000099._3_4_ == 2) {
    piVar18 = *(int **)(*(long *)(in_stack_00000090 + 0x78) + 0x60);
    iVar10 = *piVar18;
    while (iVar10 != _uStack0000000000000098) {
      piVar18 = piVar18 + 0x16;
      iVar10 = *piVar18;
    }
    lVar12 = *(long *)(piVar18 + 0xc);
    while (lVar12 != auStack0000000000000082._6_8_) {
      piVar18 = *(int **)(piVar18 + 0xe);
      lVar12 = *(long *)(piVar18 + 0xc);
    }
LAB_0da61bff:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
  }
  else {
    if (uStack0000000000000099._3_4_ == 1) {
      piVar18 = *(int **)(*(long *)(in_stack_00000090 + 0x78) + 0x48);
      iVar10 = *piVar18;
      while (iVar10 != _uStack0000000000000098) {
        piVar18 = piVar18 + 0x1a;
        iVar10 = *piVar18;
      }
      goto LAB_0da61bff;
    }
    if (uStack0000000000000099._3_4_ == 0) {
      *(uint *)(in_stack_00000090 + 0x18) = *(uint *)(in_stack_00000090 + 0x18) | 0x40000;
    }
  }
  func_0x0daa9ac0(&stack0x00000080,&stack0x00000500,&UNK_01471f55,0xf,0x10);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f012438;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar12 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar14;
    (**(code **)(lVar12 + 8))();
    plVar14 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar14;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_05fc5e00;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_05dcda00;
  in_stack_00000040 = &UNK_0daaac20;
  in_stack_00000048 = &UNK_0daaad80;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(auStack0000000000000082._6_8_,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar17 = in_stack_00000060 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daa9ac0(&stack0x00000080,&stack0x000003c0,&UNK_01222d0e,6,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0ef474e0;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar12 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar14;
    (**(code **)(lVar12 + 8))();
    plVar14 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar14;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_049119f0;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_0490fc00;
  in_stack_00000040 = &UNK_0daaaf60;
  in_stack_00000048 = &UNK_0daab160;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(auStack0000000000000082._6_8_,&stack0x00000000);
  plVar14 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar17 = in_stack_00000060 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  in_stack_00000020 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000048 = (undefined *)0x0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000038 = (undefined1 *)0x0;
  in_stack_00000040 = (undefined *)0x0;
  in_stack_00000028 = (undefined *)0x0;
  in_stack_00000030 = (undefined1 *)0x0;
  in_stack_00000078 = 0;
  func_0x041679a0(&stack0x00000020);
  in_stack_00000028 = (undefined *)func_0x041681f0(&stack0x00000020,0xf547a30);
  in_stack_00000030 = (undefined1 *)func_0x041681f0(&stack0x00000020,0xf547770);
  in_stack_00000038 = (undefined1 *)0x0;
  in_stack_00000040 = (undefined *)0x0;
  in_stack_00000048 = (undefined *)0x0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  func_0x0ed60210(&stack0x00000000,&stack0x00000228,0);
  func_0x04167a20(&stack0x00000460,&stack0x00000020);
  lVar8 = in_stack_00000058;
  plVar14 = in_stack_00000050;
  lVar7 = (long)in_stack_00000048;
  lVar6 = (long)in_stack_00000040;
  lVar5 = (long)in_stack_00000038;
  lVar4 = (long)in_stack_00000030;
  lVar12 = (long)in_stack_00000028;
  if (in_stack_00000050 != (long *)0x0) {
    LOCK();
    in_stack_00000050[1] = in_stack_00000050[1] + 1;
    UNLOCK();
  }
  uVar23 = (ulong)in_stack_00000060;
  lVar37 = in_stack_00000068;
  lVar38 = in_stack_00000070;
  if (((ulong)in_stack_00000060 & 1) != 0) {
    func_0x0412e5e0(&stack0x000004a0,in_stack_00000070,in_stack_00000068);
    uVar23 = in_stack_000004a0;
    lVar37 = in_stack_000004a8;
    lVar38 = in_stack_000004b0;
  }
  lVar40 = in_stack_00000078;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f0fb8c0;
  plVar17[4] = -1;
  plVar17[5] = 0;
  *(undefined1 *)(plVar17 + 6) = 0xff;
  plVar17[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar17 + 7,&stack0x00000460);
  plVar17[8] = lVar12;
  plVar17[9] = lVar4;
  plVar17[10] = lVar5;
  plVar17[0xb] = lVar6;
  plVar17[0xc] = lVar7;
  plVar17[0xd] = (long)plVar14;
  uVar3 = CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31))) ^
          CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31)));
  plVar14 = (long *)CONCAT17((char)(uVar3 >> 0x18),
                             CONCAT16((char)(uVar3 >> 0x10),
                                      CONCAT15((char)(uVar3 >> 8),
                                               CONCAT14((char)uVar3,
                                                        CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(
                                                  uVar28,uVar27))) ^
                                                  CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,
                                                  uVar27)))))));
  plVar17[0xe] = lVar8;
  plVar17[0x11] = lVar38;
  plVar17[0xf] = uVar23;
  plVar17[0x10] = lVar37;
  plVar17[0x12] = lVar40;
  func_0x0da63260(&stack0x00000340,&stack0x00000300,&stack0x00000400);
  func_0x0daa9700(&stack0x00000080,in_stack_00000340 + 0x18);
  if (uStack0000000000000099._3_4_ == 2) {
    piVar18 = *(int **)(*(long *)(in_stack_00000090 + 0x78) + 0x60);
    iVar10 = *piVar18;
    while (iVar10 != _uStack0000000000000098) {
      piVar18 = piVar18 + 0x16;
      iVar10 = *piVar18;
    }
    for (; *(long *)(piVar18 + 0xc) != auStack0000000000000082._6_8_;
        piVar18 = *(int **)(piVar18 + 0xe)) {
    }
  }
  else {
    if (uStack0000000000000099._3_4_ != 1) {
      if (uStack0000000000000099._3_4_ == 0) {
        *(uint *)(in_stack_00000090 + 0x18) = *(uint *)(in_stack_00000090 + 0x18) | 0x40000;
      }
      goto LAB_0da6237e;
    }
    piVar18 = *(int **)(*(long *)(in_stack_00000090 + 0x78) + 0x48);
    iVar10 = *piVar18;
    while (iVar10 != _uStack0000000000000098) {
      piVar18 = piVar18 + 0x1a;
      iVar10 = *piVar18;
    }
  }
  *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
LAB_0da6237e:
  func_0x0daa9ac0(&stack0x00000080,&stack0x00000340,&UNK_0123d5a9,4,0x10);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0ef474e0;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar12 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)puVar13;
    (**(code **)(lVar12 + 8))();
    puVar13 = (undefined8 *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)puVar13;
  func_0x048b05a0(auStack0000000000000082._6_8_,&stack0x00000298);
  func_0x0daa9cc0(&stack0x00000080);
  in_stack_000001e0 = (undefined8 *)0x0;
  bStack00000000000001d0 = (byte)in_stack_00000340;
  uStack00000000000001d1 = (undefined7)((ulong)in_stack_00000340 >> 8);
  uStack00000000000001d8 = 0;
  uStack00000000000001d9 = 0;
  uStack00000000000001db = 0;
  func_0x048b0bc0(&stack0x00000098);
  in_stack_000000a0 = (code *)0x0;
  _uStack00000000000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  _uStack00000000000000e0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c9 = 0;
  uStack00000000000000cb = 0;
  uStack00000000000000cc = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  uStack00000000000000c1 = 0;
  _uStack00000000000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000090 = 0;
  _uStack0000000000000098 = (code *)0xff;
  _uStack0000000000000080 = &UNK_0f4e3c70;
  auStack0000000000000082._6_8_ = -1;
  func_0x041679a0(&stack0x000000a0);
  _uStack00000000000000a8 = func_0x041681f0(&stack0x000000a0,0xf547a30);
  in_stack_000000b0 = func_0x041681f0(&stack0x000000a0,0xf547770);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  uStack00000000000000c1 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c9 = 0;
  uStack00000000000000cb = 0;
  uStack00000000000000cc = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000d8 = 0;
  _uStack00000000000000e0 = 0;
  _uStack00000000000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  func_0x0ed60210(&stack0x00000080,&stack0x00000210,0);
  lVar5 = in_stack_00000090;
  uVar15 = auStack0000000000000082._6_8_;
  uVar27 = uStack0000000000000098;
  func_0x04167a20(&stack0x000005e0,&stack0x000000a0);
  lVar37 = in_stack_000000d8;
  plVar39 = in_stack_000000d0;
  lVar8 = in_stack_000000b8;
  lVar7 = in_stack_000000b0;
  lVar6 = _uStack00000000000000a8;
  lVar12 = CONCAT71(uStack00000000000000c1,in_stack_000000c0);
  lVar4 = CONCAT44(uStack00000000000000cc,
                   CONCAT13(uStack00000000000000cb,
                            CONCAT21(uStack00000000000000c9,uStack00000000000000c8)));
  if (in_stack_000000d0 != (long *)0x0) {
    LOCK();
    in_stack_000000d0[1] = in_stack_000000d0[1] + 1;
    UNLOCK();
  }
  uVar23 = _uStack00000000000000e0;
  lVar38 = _uStack00000000000000e8;
  lVar40 = in_stack_000000f0;
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412e5e0(&stack0x00000620,in_stack_000000f0,_uStack00000000000000e8);
    uVar23 = in_stack_00000620;
    lVar38 = in_stack_00000628;
    lVar40 = in_stack_00000630;
  }
  lVar9 = in_stack_000000f8;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f0fb8c0;
  plVar19[4] = uVar15;
  plVar19[5] = lVar5;
  *(undefined1 *)(plVar19 + 6) = uVar27;
  plVar19[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar19 + 7,&stack0x000005e0);
  plVar19[8] = lVar6;
  plVar19[9] = lVar7;
  plVar19[10] = lVar8;
  plVar19[0xb] = lVar12;
  plVar19[0xc] = lVar4;
  plVar19[0xd] = (long)plVar39;
  uVar3 = CONCAT13(in_stack_0000035f,
                   CONCAT12(in_stack_0000035e,CONCAT11(in_stack_0000035d,in_stack_0000035c))) ^
          CONCAT13(in_stack_0000035f,
                   CONCAT12(in_stack_0000035e,CONCAT11(in_stack_0000035d,in_stack_0000035c)));
  plVar39 = (long *)CONCAT17((char)(uVar3 >> 0x18),
                             CONCAT16((char)(uVar3 >> 0x10),
                                      CONCAT15((char)(uVar3 >> 8),
                                               CONCAT14((char)uVar3,
                                                        CONCAT13(in_stack_0000035b,
                                                                 CONCAT12(in_stack_0000035a,
                                                                          CONCAT11(in_stack_00000359
                                                                                   ,
                                                  in_stack_00000358))) ^
                                                  CONCAT13(in_stack_0000035b,
                                                           CONCAT12(in_stack_0000035a,
                                                                    CONCAT11(in_stack_00000359,
                                                                             in_stack_00000358))))))
                            );
  plVar19[0xe] = lVar37;
  plVar19[0x11] = lVar40;
  plVar19[0xf] = uVar23;
  plVar19[0x10] = lVar38;
  plVar19[0x12] = lVar9;
  func_0x0da63260(&stack0x00000150,&stack0x000001d0,&stack0x00000540);
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar1 = plVar19 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  if (plVar39 != (long *)0x0) {
    LOCK();
    plVar19 = plVar39 + 1;
    lVar12 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar39 + 0x10))(plVar39);
      func_0x0412c2d0(plVar39);
    }
  }
  func_0x04167a40(&stack0x000005e0);
  _uStack0000000000000080 = &UNK_0f4e3c70;
  plVar39 = in_stack_000000d0;
  if ((_uStack00000000000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,_uStack00000000000000e0 & 0xfffffffffffffffe);
    plVar39 = in_stack_000000d0;
  }
  in_stack_000000d0 = plVar39;
  if (plVar39 != (long *)0x0) {
    LOCK();
    plVar19 = plVar39 + 1;
    lVar12 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar39 + 0x10))(plVar39);
      func_0x0412c2d0(plVar39);
    }
  }
  func_0x04167a40(&stack0x000000a0);
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar39 = plVar17 + 1;
    lVar12 = *plVar39;
    *plVar39 = *plVar39 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&stack0x00000460);
  plVar14 = in_stack_00000050;
  if (((ulong)in_stack_00000060 & 1) != 0) {
    func_0x0412a280(in_stack_00000070,(ulong)in_stack_00000060 & 0xfffffffffffffffe);
    plVar14 = in_stack_00000050;
  }
  in_stack_00000050 = plVar14;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&stack0x00000020);
  if (((ulong)in_stack_000001c0 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)in_stack_000001c0 & 0xff00ffffffffffff) - 8);
  }
  in_stack_000001c0 = (undefined *)0x0;
  if (((ulong)in_stack_000001b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)in_stack_000001b8 & 0xff00ffffffffffff) - 8);
  }
  in_stack_000001b8 = (undefined *)0x0;
  if ((in_stack_00000190 & 1) != 0) {
    func_0x0412a280(in_stack_000001a0,in_stack_00000190 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000188 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 */
