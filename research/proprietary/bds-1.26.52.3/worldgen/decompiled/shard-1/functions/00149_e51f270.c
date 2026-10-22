/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe51f270
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e515f8f, 0e516220] [0e516230, 0e516437] [0e516440, 0e516481] [0e516490, 0e516fa7] [0e516fb0, 0e516ff1] [0e517000, 0e517b57] [0e517b60, 0e517de7] [0e517df0, 0e517e31] [0e517e40, 0e518947] [0e518950, 0e518991] [0e5189a0, 0e519507] [0e519510, 0e519551] [0e519560, 0e51a0a7] [0e51a0b0, 0e51a337] [0e51a340, 0e51a381] [0e51a390, 0e51ab30] [0e51ab40, 0e51ad37] [0e51ad40, 0e51ad81] [0e51ad90, 0e51c207] [0e51c210, 0e51c251] [0e51c260, 0e51ca70] [0e51ca80, 0e51cc87] [0e51cc90, 0e51ccd1] [0e51cce0, 0e51d7d4] [0e51d7e0, 0e51d821] [0e51d830, 0e51dcd4] [0e51dce0, 0e51dd21] [0e51dd30, 0e51e174] [0e51e180, 0e51e1c1] [0e51e1d0, 0e51e447] [0e51e49d, 0e51e645] [0e51e668, 0e51e755] [0e51e8aa, 0e51ebd9] [0e51f1b4, 0e51f1f7] [0e51f270, 0e51f916] [0e51f98b, 0e51fd52]]
 * Ghidra: FUN_0e51f270
 */


/* WARNING: Removing unreachable block (ram,0x0e51617d) */
/* WARNING: Removing unreachable block (ram,0x0e51618f) */
/* WARNING: Removing unreachable block (ram,0x0e51aa85) */
/* WARNING: Removing unreachable block (ram,0x0e51aa97) */
/* WARNING: Removing unreachable block (ram,0x0e51c9c4) */
/* WARNING: Removing unreachable block (ram,0x0e51c9d6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e51f270(void)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined *puVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  code *pcVar15;
  byte *pbVar16;
  long unaff_RBX;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined1 (*unaff_R14) [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  int iStack0000000000000088;
  int iStack000000000000008c;
  code *in_stack_00000090;
  uint uStack0000000000000098;
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
  undefined *in_stack_00000140;
  undefined8 *in_stack_00000148;
  code *in_stack_00000150;
  code *in_stack_00000158;
  undefined8 in_stack_00000160;
  int iStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined8 in_stack_00000170;
  undefined2 uStack0000000000000178;
  undefined4 uStack000000000000017a;
  undefined2 uStack000000000000017e;
  undefined *in_stack_00000180;
  undefined8 *in_stack_00000188;
  code *in_stack_00000190;
  code *in_stack_00000198;
  undefined8 in_stack_000001a0;
  int iStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  char cStack00000000000001b0;
  undefined2 uStack00000000000001b8;
  undefined4 uStack00000000000001ba;
  undefined2 uStack00000000000001be;
  undefined *in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 *in_stack_000001d0;
  code *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined1 uStack00000000000001f0;
  undefined7 uStack00000000000001f1;
  undefined2 in_stack_000001f8;
  long in_stack_00000208;
  long in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 uVar44;
  undefined8 *in_stack_00000250;
  code *in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  char cVar45;
  undefined8 in_stack_00000270;
  undefined *in_stack_000002c0;
  long in_stack_00000308;
  long in_stack_00000388;
  long in_stack_00000438;
  
  func_0x048b0af0(0xf550a08,0xfc085f5);
  func_0x0410844d(&DAT_0f550a20);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar9 + 1) = (undefined1  [16])0x0;
  *plVar9 = (long)&UNK_0ef439d0;
  uVar44 = _uStack0000000000000070;
  uVar4 = auStack0000000000000072._6_8_;
  _uStack0000000000000070 = (undefined1  [16])0x0;
  plVar9[3] = uVar44;
  plVar9[4] = uVar4;
  plVar9[7] = (long)in_stack_00000090;
  plVar9[5] = CONCAT44(uStack0000000000000084,uStack0000000000000080);
  plVar9[6] = CONCAT44(iStack000000000000008c,iStack0000000000000088);
  uStack0000000000000080 = 0;
  uStack0000000000000084 = 0;
  iStack0000000000000088 = 0;
  iStack000000000000008c = 0;
  in_stack_00000090 = (code *)0x0;
  plVar9[10] = in_stack_000000a8;
  plVar9[8] = CONCAT17(uStack000000000000009f,
                       CONCAT16(uStack000000000000009e,
                                CONCAT15(uStack000000000000009d,
                                         CONCAT14(cStack000000000000009c,uStack0000000000000098))));
  plVar9[9] = CONCAT17(uStack00000000000000a7,
                       CONCAT61(uStack00000000000000a1,cStack00000000000000a0));
  uStack0000000000000098 = 0;
  cStack000000000000009c = 0;
  uStack000000000000009d = 0;
  uStack000000000000009e = 0;
  uStack000000000000009f = 0;
  cStack00000000000000a0 = '\0';
  uStack00000000000000a1 = 0;
  uStack00000000000000a7 = 0;
  in_stack_000000a8 = 0;
  plVar9[0xb] = _uStack00000000000000b0;
  plVar9[0xc] = stack0x000000b8;
  plVar9[0xd] = in_stack_000000c0;
  *unaff_R14 = (undefined1  [16])0x0;
  *(undefined8 *)unaff_R14[1] = 0;
  plVar9[0xe] = in_stack_000000c8;
  plVar9[0xf] = in_stack_000000d0;
  plVar9[0x10] = in_stack_000000d8;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack00000000000000e0;
  plVar9[0x12] = uStack00000000000000e8;
  plVar9[0x13] = uStack00000000000000f0;
  plVar9[0x14] = CONCAT44(uStack00000000000000fc,uStack00000000000000f8);
  _uStack00000000000000e8 = (undefined1  [16])0x0;
  uStack00000000000000f8 = 0;
  uStack00000000000000fc = 0;
  plVar9[0x17] = in_stack_00000110;
  plVar9[0x15] = in_stack_00000100;
  plVar9[0x16] = in_stack_00000108;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  *(ulong *)((long)plVar9 + 0xc5) =
       CONCAT17(uStack0000000000000124,CONCAT43(uStack0000000000000120,uStack000000000000011c._1_3_)
               );
  plVar9[0x18] = CONCAT44(uStack000000000000011c,
                          CONCAT22(uStack000000000000011a,uStack0000000000000118));
  uVar44 = 0;
  in_stack_00000010 = plVar9;
  func_0x048afd20(&stack0x00000200,&stack0x00000000);
  plVar9 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000010 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000010 + 0x10))(in_stack_00000010);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = (int)((ulong)in_stack_00000218 >> 0x20);
  if (iVar7 == 2) {
    piVar14 = *(int **)(*(long *)(in_stack_00000210 + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != (int)in_stack_00000218) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != in_stack_00000208; piVar14 = *(int **)(piVar14 + 0xe)) {
    }
LAB_0e51623a:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
  }
  else {
    if (iVar7 == 1) {
      piVar14 = *(int **)(*(long *)(in_stack_00000210 + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != (int)in_stack_00000218) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      goto LAB_0e51623a;
    }
    if (iVar7 == 0) {
      *(byte *)(in_stack_00000210 + 0x1a) = *(byte *)(in_stack_00000210 + 0x1a) | 9;
    }
  }
  func_0x048b0bc0(&stack0x00000070);
  if ((DAT_0f7558d0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7558d0), iVar7 != 0)) {
    func_0x0e543e40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
    func_0x0410844d(&DAT_0f7558d0);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f755850 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e5162b0;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f755850 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e5162b0:
    puVar10 = &DAT_0f755850;
    if (iRam000000000f7558b0 != -0x2b3da790) goto LAB_0e51631d;
LAB_0e5162db:
    if (*(long *)(puVar10 + 0x68) == 0) goto LAB_0e51631d;
    func_0x0e5444e0(&stack0x00000180);
  }
  else {
    puVar10 = (undefined *)plVar9[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e5162db;
LAB_0e51631d:
    func_0x0e5444e0(&stack0x00000180);
  }
  if (cStack00000000000001b0 == '\0') {
    func_0x0c0bcb30();
    puVar10 = in_stack_00000180;
    if ((DAT_0f7558d0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7558d0), iVar7 != 0)) {
      func_0x0e543e40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
      func_0x0410844d(&DAT_0f7558d0);
    }
    plVar9 = (long *)(*(long *)(puVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755850 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e5163c0;
      plVar9 = (long *)(*(long *)(puVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755850 + 4));
    if (plVar9 == *(long **)(puVar10 + 0x38)) {
LAB_0e5163c0:
      puVar17 = &DAT_0f755850;
    }
    else {
      puVar17 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar11 != *(byte **)(in_stack_00000180 + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e51649a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e51649a:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar20[0] = -(*pbVar16 == 0x5b);
        auVar20[1] = -(pbVar16[1] == 99);
        auVar20[2] = -(pbVar16[2] == 0x65);
        auVar20[3] = -(pbVar16[3] == 0x72);
        auVar20[4] = -(pbVar16[4] == 0x65);
        auVar20[5] = -(pbVar16[5] == 0x61);
        auVar20[6] = -(pbVar16[6] == 0x6c);
        auVar20[7] = -(pbVar16[7] == 0x3a);
        auVar20[8] = -(pbVar16[8] == 100);
        auVar20[9] = -(pbVar16[9] == 0x6f);
        auVar20[10] = -(pbVar16[10] == 99);
        auVar20[0xb] = -(pbVar16[0xb] == 0x75);
        auVar20[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar20[0xd] = -(pbVar16[0xd] == 0x65);
        auVar20[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar20[0xf] = -(pbVar16[0xf] == 0x74);
        auVar32[0] = -(pbVar16[10] == 99);
        auVar32[1] = -(pbVar16[0xb] == 0x75);
        auVar32[2] = -(pbVar16[0xc] == 0x6d);
        auVar32[3] = -(pbVar16[0xd] == 0x65);
        auVar32[4] = -(pbVar16[0xe] == 0x6e);
        auVar32[5] = -(pbVar16[0xf] == 0x74);
        auVar32[6] = -(pbVar16[0x10] == 0x61);
        auVar32[7] = -(pbVar16[0x11] == 0x74);
        auVar32[8] = -(pbVar16[0x12] == 0x69);
        auVar32[9] = -(pbVar16[0x13] == 0x6f);
        auVar32[10] = -(pbVar16[0x14] == 0x6e);
        auVar32[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar32[0xc] = -(pbVar16[0x16] == 0x74);
        auVar32[0xd] = -(pbVar16[0x17] == 0x61);
        auVar32[0xe] = -(pbVar16[0x18] == 0x67);
        auVar32[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar32 = auVar32 & auVar20;
        if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e5164c8:
      if (iStack00000000000001a8 == 0) {
        if (((puVar17 == (undefined *)0x0) || (*(int *)(puVar17 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar17 + 0x68) == 0)) goto LAB_0e516550;
        lVar19 = *(long *)(puVar17 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack00000000000001ac;
        if (puVar17 == (undefined *)0x0) {
          puVar17 = (undefined *)func_0x048aead0(puVar10 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(puVar10 + 0x18,puVar17,uVar5,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e516550;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar19 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e516550:
          lVar19 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      uStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (undefined *)0x21;
      in_stack_00000148 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar12 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar12 = _DAT_013bbacd;
      puVar12[1] = uVar4;
      *(undefined1 *)((long)puVar12 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar12;
      lVar19 = func_0x048b5060(lVar19,&stack0x00000140);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined2 *)(lVar19 + 0x20) == &stack0x00000070) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar12 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar12);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar12);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar12 = uVar4;
            }
          }
        }
        *(ulong *)(lVar19 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar19 + 0x40) = in_stack_00000090;
        *(uint *)(lVar19 + 0x48) = uStack0000000000000098;
        *(char *)(lVar19 + 0x4c) = cStack000000000000009c;
        pcVar15 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar15 = in_stack_00000090;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e5164c8;
    }
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_000001d0 = (undefined8 *)in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    _uStack00000000000001f0 = _cStack00000000000001b0;
    in_stack_000001e8 = 0x5c17b12b00000002;
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
    uStack0000000000000098 = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar12;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          uStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    uStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 0x74;
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f7558f0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7558f0), iVar7 != 0)) {
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000150 = in_stack_000001d8;
    in_stack_00000158 = (code *)in_stack_000001e0;
    in_stack_00000140 = (undefined *)in_stack_000001c8;
    in_stack_00000148 = in_stack_000001d0;
    func_0x0e545040(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e516a0f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e516a0f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = (undefined8 *)in_stack_000001c8;
    in_stack_00000150 = (code *)in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    _iStack0000000000000168 = in_stack_000001e8;
    in_stack_00000170 = CONCAT71(in_stack_00000170._1_7_,uStack00000000000001f0);
    func_0x048b0bc0(&stack0x00000070);
    if ((DAT_0f7558f0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7558f0), iVar7 != 0)) {
      func_0x0e543f50();
      func_0x0410844d(&DAT_0f7558f0);
    }
    puVar10 = in_stack_00000140;
    _iStack0000000000000168 = 0xeb0cbd6200000001;
    if ((DAT_0f7558d0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7558d0), iVar7 != 0)) {
      func_0x0e543e40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
      func_0x0410844d(&DAT_0f7558d0);
    }
    plVar9 = (long *)(*(long *)(puVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755850 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e516af0;
      plVar9 = (long *)(*(long *)(puVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755850 + 4));
    if (plVar9 == *(long **)(puVar10 + 0x38)) {
LAB_0e516af0:
      _uStack0000000000000070 = &DAT_0f755850;
    }
    else {
      _uStack0000000000000070 = (undefined *)plVar9[2];
    }
    auStack0000000000000072._6_8_ = puVar10 + 0x18;
    func_0x0ed621a0(&stack0x00000070,uStack000000000000016c);
    uStack0000000000000070 = 1;
    auStack0000000000000072._6_8_ = &stack0x00000148;
    uStack0000000000000080 = uStack000000000000016c;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    uStack0000000000000098 = 0;
    cStack000000000000009c = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f351458;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e545040(&stack0x00000000,auStack0000000000000072._6_8_,&stack0x00000088);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(in_stack_00000010[0xf] + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e516daf:
      piVar14[4] = piVar14[4] | _uStack0000000000000070 << 0x10;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(in_stack_00000010[0xf] + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
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
  if ((DAT_0f755988 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755988), iVar7 != 0)) {
    func_0x0e545760();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
    func_0x0410844d(&DAT_0f755988);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e516e20;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f755908 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e516e20:
    puVar10 = &DAT_0f755908;
    if (iRam000000000f755968 != -0x2b3da790) goto LAB_0e516e8d;
LAB_0e516e4b:
    if (*(long *)(puVar10 + 0x68) == 0) goto LAB_0e516e8d;
    func_0x0e545e00(&stack0x00000180);
  }
  else {
    puVar10 = (undefined *)plVar9[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e516e4b;
LAB_0e516e8d:
    func_0x0e545e00(&stack0x00000180);
  }
  puVar10 = (undefined *)0x0;
  if (cStack00000000000001b0 == '\0') {
    func_0x0c0bcb30();
    puVar10 = in_stack_00000180;
    if ((DAT_0f755988 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755988), iVar7 != 0)) {
      func_0x0e545760();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
      func_0x0410844d(&DAT_0f755988);
    }
    plVar9 = (long *)(*(long *)(puVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e516f30;
      plVar9 = (long *)(*(long *)(puVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755908 + 4));
    if (plVar9 == *(long **)(puVar10 + 0x38)) {
LAB_0e516f30:
      puVar17 = &DAT_0f755908;
    }
    else {
      puVar17 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar11 != *(byte **)(in_stack_00000180 + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e51700a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e51700a:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar21[0] = -(*pbVar16 == 0x5b);
        auVar21[1] = -(pbVar16[1] == 99);
        auVar21[2] = -(pbVar16[2] == 0x65);
        auVar21[3] = -(pbVar16[3] == 0x72);
        auVar21[4] = -(pbVar16[4] == 0x65);
        auVar21[5] = -(pbVar16[5] == 0x61);
        auVar21[6] = -(pbVar16[6] == 0x6c);
        auVar21[7] = -(pbVar16[7] == 0x3a);
        auVar21[8] = -(pbVar16[8] == 100);
        auVar21[9] = -(pbVar16[9] == 0x6f);
        auVar21[10] = -(pbVar16[10] == 99);
        auVar21[0xb] = -(pbVar16[0xb] == 0x75);
        auVar21[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar21[0xd] = -(pbVar16[0xd] == 0x65);
        auVar21[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar21[0xf] = -(pbVar16[0xf] == 0x74);
        auVar33[0] = -(pbVar16[10] == 99);
        auVar33[1] = -(pbVar16[0xb] == 0x75);
        auVar33[2] = -(pbVar16[0xc] == 0x6d);
        auVar33[3] = -(pbVar16[0xd] == 0x65);
        auVar33[4] = -(pbVar16[0xe] == 0x6e);
        auVar33[5] = -(pbVar16[0xf] == 0x74);
        auVar33[6] = -(pbVar16[0x10] == 0x61);
        auVar33[7] = -(pbVar16[0x11] == 0x74);
        auVar33[8] = -(pbVar16[0x12] == 0x69);
        auVar33[9] = -(pbVar16[0x13] == 0x6f);
        auVar33[10] = -(pbVar16[0x14] == 0x6e);
        auVar33[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar33[0xc] = -(pbVar16[0x16] == 0x74);
        auVar33[0xd] = -(pbVar16[0x17] == 0x61);
        auVar33[0xe] = -(pbVar16[0x18] == 0x67);
        auVar33[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar33 = auVar33 & auVar21;
        if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e517038:
      if (iStack00000000000001a8 == 0) {
        if (((puVar17 == (undefined *)0x0) || (*(int *)(puVar17 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar17 + 0x68) == 0)) goto LAB_0e5170c2;
        lVar19 = *(long *)(puVar17 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack00000000000001ac;
        if (puVar17 == (undefined *)0x0) {
          puVar17 = (undefined *)func_0x048aead0(puVar10 + 0x18,0,uStack00000000000001ac);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(puVar10 + 0x18,puVar17,uVar5,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e5170c2;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar19 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e5170c2:
          lVar19 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      uStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar44 = _UNK_013bbadf;
      in_stack_00000140 = (undefined *)0x21;
      in_stack_00000148 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar12 + 0x12) = uVar44;
      uVar44 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar12 = _DAT_013bbacd;
      puVar12[1] = uVar44;
      *(undefined1 *)((long)puVar12 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar12;
      lVar19 = func_0x048b5060(lVar19,&stack0x00000140);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined2 *)(lVar19 + 0x20) == &stack0x00000070) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar12 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar12);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar12);
            }
            else {
              uVar44 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar12 = uVar44;
            }
          }
        }
        *(ulong *)(lVar19 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar19 + 0x40) = in_stack_00000090;
        *(uint *)(lVar19 + 0x48) = uStack0000000000000098;
        *(char *)(lVar19 + 0x4c) = cStack000000000000009c;
        pcVar15 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar15 = in_stack_00000090;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e517038;
    }
    in_stack_00000270 = _cStack00000000000001b0;
    in_stack_00000260 = in_stack_000001a0;
    in_stack_00000258 = in_stack_00000198;
    in_stack_00000250 = (undefined8 *)in_stack_00000190;
    uVar44 = in_stack_00000188;
    in_stack_000002c0 = in_stack_00000180;
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
    uStack0000000000000098 = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar12;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          uStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    uStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 't';
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f7559a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7559a8), iVar7 != 0)) {
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000140 = (undefined *)uVar44;
    in_stack_00000148 = in_stack_00000250;
    in_stack_00000150 = in_stack_00000258;
    in_stack_00000158 = (code *)in_stack_00000260;
    func_0x0e546960(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e5175cf:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f351458;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e546ee0(&stack0x00000070);
    _uStack00000000000001f0 = CONCAT71(uStack00000000000001f1,(char)in_stack_00000270);
    in_stack_000001c0 = in_stack_000002c0;
    in_stack_000001c8 = uVar44;
    in_stack_000001d0 = in_stack_00000250;
    in_stack_000001d8 = in_stack_00000258;
    in_stack_000001e0 = in_stack_00000260;
    in_stack_000001e8 = 0x5c17b12b00000002;
    func_0x048b0bc0(&stack0x00000088);
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = (undefined8 *)in_stack_000001c8;
    in_stack_00000150 = (code *)in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    _iStack0000000000000168 = in_stack_000001e8;
    in_stack_00000170 = _uStack00000000000001f0;
    func_0x0e546c30(&stack0x00000070,&stack0x00000140,&UNK_013fcdf9,0xb);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e546ee0(&stack0x00000070);
    puVar17 = in_stack_00000140;
    iVar7 = iStack0000000000000168;
    uVar5 = uStack000000000000016c;
    func_0x048b0bc0(&stack0x00000088);
    puVar10 = in_stack_000002c0;
    if (iVar7 == 4) {
      if ((DAT_0f755988 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755988), iVar7 != 0)) {
        func_0x0e545760();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
        func_0x0410844d(&DAT_0f755988);
      }
      plVar9 = (long *)(*(long *)(puVar17 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18))
                                    >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
      do {
        lVar19 = *plVar9;
        if (lVar19 == -1) goto LAB_0e517a18;
        plVar9 = (long *)(*(long *)(puVar17 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f755908 + 4));
      if (plVar9 == *(long **)(puVar17 + 0x38)) {
LAB_0e517a18:
        puVar18 = &DAT_0f755908;
      }
      else {
        puVar18 = (undefined *)plVar9[2];
      }
      lVar19 = func_0x048b1040(puVar17 + 0x18,puVar18,uVar5,1);
      if (lVar19 == 0) {
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b10d0(&stack0x00000070);
        lVar13 = *(long *)((long)_uStack0000000000000070 + 0x38);
        lVar19 = (long)_uStack0000000000000070;
        if (lVar13 == 0) goto LAB_0e517b35;
LAB_0e517b51:
        do {
          lVar19 = lVar13;
          lVar13 = *(long *)(lVar19 + 0x38);
          if (*(long *)(lVar19 + 0x38) == 0) {
            _uStack0000000000000070 = ZEXT816(0);
            func_0x048b10d0(&stack0x00000070);
            lVar13 = (long)_uStack0000000000000070;
          }
        } while (lVar13 != 0);
      }
      else {
        lVar13 = *(long *)(lVar19 + 0x38);
        if (*(long *)(lVar19 + 0x38) != 0) goto LAB_0e517b51;
LAB_0e517b35:
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b10d0(&stack0x00000070);
        lVar13 = (long)_uStack0000000000000070;
        if (_uStack0000000000000070 != (undefined *)0x0) goto LAB_0e517b51;
      }
      lVar19 = *(long *)(lVar19 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar7 != 1) goto LAB_0e517c0f;
      if ((DAT_0f755988 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755988), iVar7 != 0)) {
        func_0x0e545760();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
        func_0x0410844d(&DAT_0f755988);
      }
      plVar9 = (long *)(*(long *)(puVar17 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18))
                                    >> 3) - 1U & *(uint *)(_DAT_0f755908 + 4)) * 8);
      do {
        lVar19 = *plVar9;
        if (lVar19 == -1) goto LAB_0e517998;
        plVar9 = (long *)(*(long *)(puVar17 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f755908 + 4));
      if (plVar9 == *(long **)(puVar17 + 0x38)) {
LAB_0e517998:
        puVar18 = &DAT_0f755908;
      }
      else {
        puVar18 = (undefined *)plVar9[2];
      }
      lVar19 = func_0x048b0c90(puVar17 + 0x18,puVar18,uVar5,1);
      if (lVar19 == 0) {
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b0d20(&stack0x00000070);
        lVar19 = (long)_uStack0000000000000070;
      }
      lVar19 = *(long *)(lVar19 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar12[1] = 0xffffffffffffffff;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 0xff;
    *puVar12 = &UNK_0f0edc68;
    uVar4 = _DAT_014f0478;
    puVar12[4] = 0;
    puVar12[5] = uVar4;
    puVar12[6] = 0;
    *(undefined2 *)(puVar12 + 7) = 0;
    *(undefined4 *)((long)puVar12 + 0x3a) = 0;
    *(undefined2 *)((long)puVar12 + 0x3e) = 0;
    plVar9 = *(long **)(lVar19 + 8);
    *(undefined8 **)(lVar19 + 8) = puVar12;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x28))();
    }
  }
LAB_0e517c0f:
  cVar45 = (char)in_stack_00000270;
  if ((DAT_0f755a40 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755a40), iVar7 != 0)) {
    func_0x0e547740();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
    func_0x0410844d(&DAT_0f755a40);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f7559c0 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e517c70;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f7559c0 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e517c70:
    puVar17 = &DAT_0f7559c0;
    if (iRam000000000f755a20 != -0x2b3da790) goto LAB_0e517cdd;
LAB_0e517c9b:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0e517cdd;
    func_0x0e547de0(&stack0x00000180);
    puVar17 = in_stack_00000180;
  }
  else {
    puVar17 = (undefined *)plVar9[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e517c9b;
LAB_0e517cdd:
    func_0x0e547de0(&stack0x00000180);
    puVar17 = in_stack_00000180;
  }
  in_stack_00000180 = puVar17;
  if (cStack00000000000001b0 == '\0') {
    if ((DAT_0f755a40 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755a40), iVar7 != 0)) {
      func_0x0e547740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
      func_0x0410844d(&DAT_0f755a40);
    }
    plVar9 = (long *)(*(long *)(puVar17 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f7559c0 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e517d70;
      plVar9 = (long *)(*(long *)(puVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f7559c0 + 4));
    if (plVar9 == *(long **)(puVar17 + 0x38)) {
LAB_0e517d70:
      puVar18 = &DAT_0f7559c0;
    }
    else {
      puVar18 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar11 != *(byte **)(in_stack_00000180 + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e517e4a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e517e4a:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar22[0] = -(*pbVar16 == 0x5b);
        auVar22[1] = -(pbVar16[1] == 99);
        auVar22[2] = -(pbVar16[2] == 0x65);
        auVar22[3] = -(pbVar16[3] == 0x72);
        auVar22[4] = -(pbVar16[4] == 0x65);
        auVar22[5] = -(pbVar16[5] == 0x61);
        auVar22[6] = -(pbVar16[6] == 0x6c);
        auVar22[7] = -(pbVar16[7] == 0x3a);
        auVar22[8] = -(pbVar16[8] == 100);
        auVar22[9] = -(pbVar16[9] == 0x6f);
        auVar22[10] = -(pbVar16[10] == 99);
        auVar22[0xb] = -(pbVar16[0xb] == 0x75);
        auVar22[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar22[0xd] = -(pbVar16[0xd] == 0x65);
        auVar22[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar22[0xf] = -(pbVar16[0xf] == 0x74);
        auVar34[0] = -(pbVar16[10] == 99);
        auVar34[1] = -(pbVar16[0xb] == 0x75);
        auVar34[2] = -(pbVar16[0xc] == 0x6d);
        auVar34[3] = -(pbVar16[0xd] == 0x65);
        auVar34[4] = -(pbVar16[0xe] == 0x6e);
        auVar34[5] = -(pbVar16[0xf] == 0x74);
        auVar34[6] = -(pbVar16[0x10] == 0x61);
        auVar34[7] = -(pbVar16[0x11] == 0x74);
        auVar34[8] = -(pbVar16[0x12] == 0x69);
        auVar34[9] = -(pbVar16[0x13] == 0x6f);
        auVar34[10] = -(pbVar16[0x14] == 0x6e);
        auVar34[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar34[0xc] = -(pbVar16[0x16] == 0x74);
        auVar34[0xd] = -(pbVar16[0x17] == 0x61);
        auVar34[0xe] = -(pbVar16[0x18] == 0x67);
        auVar34[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar34 = auVar34 & auVar22;
        if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e517e78:
      if (iStack00000000000001a8 == 0) {
        if (((puVar18 == (undefined *)0x0) || (*(int *)(puVar18 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar18 + 0x68) == 0)) goto LAB_0e517f00;
        lVar19 = *(long *)(puVar18 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack00000000000001ac;
        if (puVar18 == (undefined *)0x0) {
          puVar18 = (undefined *)func_0x048aead0(puVar17 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(puVar17 + 0x18,puVar18,uVar5,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e517f00;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar19 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e517f00:
          lVar19 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      uStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (undefined *)0x21;
      in_stack_00000148 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar12 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar12 = _DAT_013bbacd;
      puVar12[1] = uVar4;
      *(undefined1 *)((long)puVar12 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar12;
      lVar19 = func_0x048b5060(lVar19,&stack0x00000140);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined2 *)(lVar19 + 0x20) == &stack0x00000070) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar12 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar12);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar12);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar12 = uVar4;
            }
          }
        }
        *(ulong *)(lVar19 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar19 + 0x40) = in_stack_00000090;
        *(uint *)(lVar19 + 0x48) = uStack0000000000000098;
        *(char *)(lVar19 + 0x4c) = cStack000000000000009c;
        pcVar15 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar15 = in_stack_00000090;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e517e78;
    }
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_000001d0 = (undefined8 *)in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    _uStack00000000000001f0 = _cStack00000000000001b0;
    in_stack_000001e8 = 0x5c17b12b00000002;
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
    uStack0000000000000098 = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar12;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          uStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    uStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 0x74;
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755a60 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755a60), iVar7 != 0)) {
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000150 = in_stack_000001d8;
    in_stack_00000158 = (code *)in_stack_000001e0;
    in_stack_00000140 = (undefined *)in_stack_000001c8;
    in_stack_00000148 = in_stack_000001d0;
    func_0x0e548940(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e5183bf:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e5183bf;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = (undefined8 *)in_stack_000001c8;
    in_stack_00000150 = (code *)in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    _iStack0000000000000168 = in_stack_000001e8;
    in_stack_00000170 = CONCAT71(in_stack_00000170._1_7_,uStack00000000000001f0);
    func_0x048b0bc0(&stack0x00000070);
    if ((DAT_0f755a60 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755a60), iVar7 != 0)) {
      func_0x0e547850();
      func_0x0410844d(&DAT_0f755a60);
    }
    puVar17 = in_stack_00000140;
    _iStack0000000000000168 = 0x95f7299300000001;
    if ((DAT_0f755a40 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755a40), iVar7 != 0)) {
      func_0x0e547740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
      func_0x0410844d(&DAT_0f755a40);
    }
    plVar9 = (long *)(*(long *)(puVar17 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f7559c0 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e5184a0;
      plVar9 = (long *)(*(long *)(puVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f7559c0 + 4));
    if (plVar9 == *(long **)(puVar17 + 0x38)) {
LAB_0e5184a0:
      _uStack0000000000000070 = &DAT_0f7559c0;
    }
    else {
      _uStack0000000000000070 = (undefined *)plVar9[2];
    }
    auStack0000000000000072._6_8_ = puVar17 + 0x18;
    func_0x0ed621a0(&stack0x00000070,uStack000000000000016c);
    uStack0000000000000070 = 1;
    auStack0000000000000072._6_8_ = &stack0x00000148;
    uStack0000000000000080 = uStack000000000000016c;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    uStack0000000000000098 = 0;
    cStack000000000000009c = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e548940(&stack0x00000000,auStack0000000000000072._6_8_,&stack0x00000088);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(in_stack_00000010[0xf] + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51874f:
      piVar14[4] = piVar14[4] | _uStack0000000000000070 << 0x10;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(in_stack_00000010[0xf] + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
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
  if ((DAT_0f755af8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755af8), iVar7 != 0)) {
    func_0x0e549060();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
    func_0x0410844d(&DAT_0f755af8);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f755a78 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e5187c0;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f755a78 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e5187c0:
    puVar17 = &DAT_0f755a78;
    if (iRam000000000f755ad8 != -0x2b3da790) goto LAB_0e51882d;
LAB_0e5187eb:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0e51882d;
    func_0x0e549850(&stack0x00000180);
  }
  else {
    puVar17 = (undefined *)plVar9[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e5187eb;
LAB_0e51882d:
    func_0x0e549850(&stack0x00000180);
  }
  if (cStack00000000000001b0 == '\0') {
    func_0x0e97e540();
    puVar17 = in_stack_00000180;
    if ((DAT_0f755af8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755af8), iVar7 != 0)) {
      func_0x0e549060();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
      func_0x0410844d(&DAT_0f755af8);
    }
    plVar9 = (long *)(*(long *)(puVar17 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755a78 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e5188d0;
      plVar9 = (long *)(*(long *)(puVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755a78 + 4));
    if (plVar9 == *(long **)(puVar17 + 0x38)) {
LAB_0e5188d0:
      puVar18 = &DAT_0f755a78;
    }
    else {
      puVar18 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar11 != *(byte **)(in_stack_00000180 + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e5189aa;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e5189aa:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar23[0] = -(*pbVar16 == 0x5b);
        auVar23[1] = -(pbVar16[1] == 99);
        auVar23[2] = -(pbVar16[2] == 0x65);
        auVar23[3] = -(pbVar16[3] == 0x72);
        auVar23[4] = -(pbVar16[4] == 0x65);
        auVar23[5] = -(pbVar16[5] == 0x61);
        auVar23[6] = -(pbVar16[6] == 0x6c);
        auVar23[7] = -(pbVar16[7] == 0x3a);
        auVar23[8] = -(pbVar16[8] == 100);
        auVar23[9] = -(pbVar16[9] == 0x6f);
        auVar23[10] = -(pbVar16[10] == 99);
        auVar23[0xb] = -(pbVar16[0xb] == 0x75);
        auVar23[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar23[0xd] = -(pbVar16[0xd] == 0x65);
        auVar23[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar23[0xf] = -(pbVar16[0xf] == 0x74);
        auVar35[0] = -(pbVar16[10] == 99);
        auVar35[1] = -(pbVar16[0xb] == 0x75);
        auVar35[2] = -(pbVar16[0xc] == 0x6d);
        auVar35[3] = -(pbVar16[0xd] == 0x65);
        auVar35[4] = -(pbVar16[0xe] == 0x6e);
        auVar35[5] = -(pbVar16[0xf] == 0x74);
        auVar35[6] = -(pbVar16[0x10] == 0x61);
        auVar35[7] = -(pbVar16[0x11] == 0x74);
        auVar35[8] = -(pbVar16[0x12] == 0x69);
        auVar35[9] = -(pbVar16[0x13] == 0x6f);
        auVar35[10] = -(pbVar16[0x14] == 0x6e);
        auVar35[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar35[0xc] = -(pbVar16[0x16] == 0x74);
        auVar35[0xd] = -(pbVar16[0x17] == 0x61);
        auVar35[0xe] = -(pbVar16[0x18] == 0x67);
        auVar35[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar35 = auVar35 & auVar23;
        if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e5189d8:
      if (iStack00000000000001a8 == 0) {
        if (((puVar18 == (undefined *)0x0) || (*(int *)(puVar18 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar18 + 0x68) == 0)) goto LAB_0e518a60;
        lVar19 = *(long *)(puVar18 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack00000000000001ac;
        if (puVar18 == (undefined *)0x0) {
          puVar18 = (undefined *)func_0x048aead0(puVar17 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(puVar17 + 0x18,puVar18,uVar5,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e518a60;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar19 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e518a60:
          lVar19 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      uStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000140 = (undefined *)0x21;
      in_stack_00000148 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar12 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar12 = _DAT_013bbacd;
      puVar12[1] = uVar4;
      *(undefined1 *)((long)puVar12 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar12;
      lVar19 = func_0x048b5060(lVar19,&stack0x00000140);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined2 *)(lVar19 + 0x20) == &stack0x00000070) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar12 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar12);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar12);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar12 = uVar4;
            }
          }
        }
        *(ulong *)(lVar19 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar19 + 0x40) = in_stack_00000090;
        *(uint *)(lVar19 + 0x48) = uStack0000000000000098;
        *(char *)(lVar19 + 0x4c) = cStack000000000000009c;
        pcVar15 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar15 = in_stack_00000090;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e5189d8;
    }
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_000001d0 = (undefined8 *)in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    _uStack00000000000001f0 = _cStack00000000000001b0;
    in_stack_000001e8 = 0x5c17b12b00000002;
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
    uStack0000000000000098 = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar12;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          uStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    uStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 0x74;
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755b18 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755b18), iVar7 != 0)) {
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000150 = in_stack_000001d8;
    in_stack_00000158 = (code *)in_stack_000001e0;
    in_stack_00000140 = (undefined *)in_stack_000001c8;
    in_stack_00000148 = in_stack_000001d0;
    func_0x0e54a3c0(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e518f6f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e518f6f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = (undefined8 *)in_stack_000001c8;
    in_stack_00000150 = (code *)in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    _iStack0000000000000168 = in_stack_000001e8;
    in_stack_00000170 = CONCAT71(in_stack_00000170._1_7_,uStack00000000000001f0);
    func_0x048b0bc0(&stack0x00000070);
    if ((DAT_0f755b18 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755b18), iVar7 != 0)) {
      func_0x0e549170();
      func_0x0410844d(&DAT_0f755b18);
    }
    puVar17 = in_stack_00000140;
    _iStack0000000000000168 = 0x5d24a40800000001;
    if ((DAT_0f755af8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755af8), iVar7 != 0)) {
      func_0x0e549060();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
      func_0x0410844d(&DAT_0f755af8);
    }
    plVar9 = (long *)(*(long *)(puVar17 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755a78 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e519050;
      plVar9 = (long *)(*(long *)(puVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755a78 + 4));
    if (plVar9 == *(long **)(puVar17 + 0x38)) {
LAB_0e519050:
      _uStack0000000000000070 = &DAT_0f755a78;
    }
    else {
      _uStack0000000000000070 = (undefined *)plVar9[2];
    }
    auStack0000000000000072._6_8_ = puVar17 + 0x18;
    func_0x0ed621a0(&stack0x00000070,uStack000000000000016c);
    auVar20 = _uStack00000000000000b0;
    uStack0000000000000070 = 1;
    auStack0000000000000072._6_8_ = &stack0x00000148;
    uStack0000000000000080 = uStack000000000000016c;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    uStack0000000000000098 = 0;
    cStack000000000000009c = 0;
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
    uStack00000000000000bd = auVar20._13_3_;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4726f8;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e54a3c0(&stack0x00000000,auStack0000000000000072._6_8_,&stack0x00000088);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(in_stack_00000010[0xf] + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51930f:
      piVar14[4] = piVar14[4] | _uStack0000000000000070 << 0x10;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(in_stack_00000010[0xf] + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
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
  if ((DAT_0f755bb0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755bb0), iVar7 != 0)) {
    func_0x0e54ab20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
    func_0x0410844d(&DAT_0f755bb0);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e519380;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f755b30 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e519380:
    puVar17 = &DAT_0f755b30;
    if (iRam000000000f755b90 != -0x2b3da790) goto LAB_0e5193ed;
LAB_0e5193ab:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0e5193ed;
    func_0x0e54b350(&stack0x00000180);
  }
  else {
    puVar17 = (undefined *)plVar9[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e5193ab;
LAB_0e5193ed:
    func_0x0e54b350(&stack0x00000180);
  }
  if (cStack00000000000001b0 == '\0') {
    func_0x0e97e540();
    puVar10 = in_stack_00000180;
    if ((DAT_0f755bb0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755bb0), iVar7 != 0)) {
      func_0x0e54ab20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
      func_0x0410844d(&DAT_0f755bb0);
    }
    plVar9 = (long *)(*(long *)(puVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e519490;
      plVar9 = (long *)(*(long *)(puVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755b30 + 4));
    if (plVar9 == *(long **)(puVar10 + 0x38)) {
LAB_0e519490:
      puVar17 = &DAT_0f755b30;
    }
    else {
      puVar17 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar11 != *(byte **)(in_stack_00000180 + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e51956a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e51956a:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar24[0] = -(*pbVar16 == 0x5b);
        auVar24[1] = -(pbVar16[1] == 99);
        auVar24[2] = -(pbVar16[2] == 0x65);
        auVar24[3] = -(pbVar16[3] == 0x72);
        auVar24[4] = -(pbVar16[4] == 0x65);
        auVar24[5] = -(pbVar16[5] == 0x61);
        auVar24[6] = -(pbVar16[6] == 0x6c);
        auVar24[7] = -(pbVar16[7] == 0x3a);
        auVar24[8] = -(pbVar16[8] == 100);
        auVar24[9] = -(pbVar16[9] == 0x6f);
        auVar24[10] = -(pbVar16[10] == 99);
        auVar24[0xb] = -(pbVar16[0xb] == 0x75);
        auVar24[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar24[0xd] = -(pbVar16[0xd] == 0x65);
        auVar24[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar24[0xf] = -(pbVar16[0xf] == 0x74);
        auVar36[0] = -(pbVar16[10] == 99);
        auVar36[1] = -(pbVar16[0xb] == 0x75);
        auVar36[2] = -(pbVar16[0xc] == 0x6d);
        auVar36[3] = -(pbVar16[0xd] == 0x65);
        auVar36[4] = -(pbVar16[0xe] == 0x6e);
        auVar36[5] = -(pbVar16[0xf] == 0x74);
        auVar36[6] = -(pbVar16[0x10] == 0x61);
        auVar36[7] = -(pbVar16[0x11] == 0x74);
        auVar36[8] = -(pbVar16[0x12] == 0x69);
        auVar36[9] = -(pbVar16[0x13] == 0x6f);
        auVar36[10] = -(pbVar16[0x14] == 0x6e);
        auVar36[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar36[0xc] = -(pbVar16[0x16] == 0x74);
        auVar36[0xd] = -(pbVar16[0x17] == 0x61);
        auVar36[0xe] = -(pbVar16[0x18] == 0x67);
        auVar36[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar36 = auVar36 & auVar24;
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
                    (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e519598:
      if (iStack00000000000001a8 == 0) {
        if (((puVar17 == (undefined *)0x0) || (*(int *)(puVar17 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar17 + 0x68) == 0)) goto LAB_0e519620;
        lVar19 = *(long *)(puVar17 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack00000000000001ac;
        if (puVar17 == (undefined *)0x0) {
          puVar17 = (undefined *)func_0x048aead0(puVar10 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(puVar10 + 0x18,puVar17,uVar5,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e519620;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar19 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e519620:
          lVar19 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      uStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar44 = _UNK_013bbadf;
      in_stack_00000140 = (undefined *)0x21;
      in_stack_00000148 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar12 + 0x12) = uVar44;
      uVar44 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar12 = _DAT_013bbacd;
      puVar12[1] = uVar44;
      *(undefined1 *)((long)puVar12 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar12;
      lVar19 = func_0x048b5060(lVar19,&stack0x00000140);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined2 *)(lVar19 + 0x20) == &stack0x00000070) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar12 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar12);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar12);
            }
            else {
              uVar44 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar12 = uVar44;
            }
          }
        }
        *(ulong *)(lVar19 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar19 + 0x40) = in_stack_00000090;
        *(uint *)(lVar19 + 0x48) = uStack0000000000000098;
        *(char *)(lVar19 + 0x4c) = cStack000000000000009c;
        pcVar15 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar15 = in_stack_00000090;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e519598;
    }
    uVar4 = _cStack00000000000001b0;
    in_stack_00000260 = in_stack_000001a0;
    in_stack_00000258 = in_stack_00000198;
    in_stack_00000250 = (undefined8 *)in_stack_00000190;
    uVar44 = in_stack_00000188;
    in_stack_000002c0 = in_stack_00000180;
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
    uStack0000000000000098 = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    cVar45 = (char)uVar4;
    *puVar12 = &UNK_0f4bd598;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar12;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          uStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    uStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 't';
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755bd0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755bd0), iVar7 != 0)) {
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000140 = (undefined *)uVar44;
    in_stack_00000148 = in_stack_00000250;
    in_stack_00000150 = in_stack_00000258;
    in_stack_00000158 = (code *)in_stack_00000260;
    func_0x0e54bed0(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e519b2f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4726f8;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e54c450(&stack0x00000070);
    _uStack00000000000001f0 = CONCAT71(uStack00000000000001f1,cVar45);
    in_stack_000001c0 = in_stack_000002c0;
    in_stack_000001c8 = uVar44;
    in_stack_000001d0 = in_stack_00000250;
    in_stack_000001d8 = in_stack_00000258;
    in_stack_000001e0 = in_stack_00000260;
    in_stack_000001e8 = 0x5c17b12b00000002;
    func_0x048b0bc0(&stack0x00000088);
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = (undefined8 *)in_stack_000001c8;
    in_stack_00000150 = (code *)in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    _iStack0000000000000168 = in_stack_000001e8;
    in_stack_00000170 = _uStack00000000000001f0;
    func_0x0e54c1a0(&stack0x00000070,&stack0x00000140,&UNK_013fcdf9);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e54c450(&stack0x00000070);
    puVar17 = in_stack_00000140;
    iVar7 = iStack0000000000000168;
    uVar5 = uStack000000000000016c;
    func_0x048b0bc0(&stack0x00000088);
    puVar10 = in_stack_000002c0;
    if (iVar7 == 4) {
      if ((DAT_0f755bb0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755bb0), iVar7 != 0)) {
        func_0x0e54ab20();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
        func_0x0410844d(&DAT_0f755bb0);
      }
      plVar9 = (long *)(*(long *)(puVar17 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18))
                                    >> 3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
      do {
        lVar19 = *plVar9;
        if (lVar19 == -1) goto LAB_0e519f68;
        plVar9 = (long *)(*(long *)(puVar17 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f755b30 + 4));
      if (plVar9 == *(long **)(puVar17 + 0x38)) {
LAB_0e519f68:
        puVar18 = &DAT_0f755b30;
      }
      else {
        puVar18 = (undefined *)plVar9[2];
      }
      lVar19 = func_0x048b1040(puVar17 + 0x18,puVar18,uVar5,1);
      if (lVar19 == 0) {
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b10d0(&stack0x00000070);
        lVar13 = *(long *)((long)_uStack0000000000000070 + 0x38);
        lVar19 = (long)_uStack0000000000000070;
        if (lVar13 == 0) goto LAB_0e51a085;
LAB_0e51a0a1:
        do {
          lVar19 = lVar13;
          lVar13 = *(long *)(lVar19 + 0x38);
          if (*(long *)(lVar19 + 0x38) == 0) {
            _uStack0000000000000070 = ZEXT816(0);
            func_0x048b10d0(&stack0x00000070);
            lVar13 = (long)_uStack0000000000000070;
          }
        } while (lVar13 != 0);
      }
      else {
        lVar13 = *(long *)(lVar19 + 0x38);
        if (*(long *)(lVar19 + 0x38) != 0) goto LAB_0e51a0a1;
LAB_0e51a085:
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b10d0(&stack0x00000070);
        lVar13 = (long)_uStack0000000000000070;
        if (_uStack0000000000000070 != (undefined *)0x0) goto LAB_0e51a0a1;
      }
      lVar19 = *(long *)(lVar19 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar7 != 1) goto LAB_0e51a15f;
      if ((DAT_0f755bb0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755bb0), iVar7 != 0)) {
        func_0x0e54ab20();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
        func_0x0410844d(&DAT_0f755bb0);
      }
      plVar9 = (long *)(*(long *)(puVar17 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18))
                                    >> 3) - 1U & *(uint *)(_DAT_0f755b30 + 4)) * 8);
      do {
        lVar19 = *plVar9;
        if (lVar19 == -1) goto LAB_0e519ee8;
        plVar9 = (long *)(*(long *)(puVar17 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f755b30 + 4));
      if (plVar9 == *(long **)(puVar17 + 0x38)) {
LAB_0e519ee8:
        puVar18 = &DAT_0f755b30;
      }
      else {
        puVar18 = (undefined *)plVar9[2];
      }
      lVar19 = func_0x048b0c90(puVar17 + 0x18,puVar18,uVar5,1);
      if (lVar19 == 0) {
        _uStack0000000000000070 = ZEXT816(0);
        func_0x048b0d20(&stack0x00000070);
        lVar19 = (long)_uStack0000000000000070;
      }
      lVar19 = *(long *)(lVar19 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar12[1] = 0xffffffffffffffff;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 0xff;
    *puVar12 = &UNK_0f0edc68;
    uVar4 = _DAT_014f0478;
    puVar12[4] = 0;
    puVar12[5] = uVar4;
    puVar12[6] = 0;
    *(undefined2 *)(puVar12 + 7) = 0;
    *(undefined4 *)((long)puVar12 + 0x3a) = 0;
    *(undefined2 *)((long)puVar12 + 0x3e) = 0;
    plVar9 = *(long **)(lVar19 + 8);
    *(undefined8 **)(lVar19 + 8) = puVar12;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x28))();
    }
  }
LAB_0e51a15f:
  if ((DAT_0f755c68 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755c68), iVar7 != 0)) {
    func_0x0e54ccf0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755be8,0xf53dab8);
    func_0x0410844d(&DAT_0f755c68);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f755be8 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e51a1c0;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f755be8 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e51a1c0:
    puVar17 = &DAT_0f755be8;
    if (iRam000000000f755c48 != -0x2b3da790) goto LAB_0e51a22d;
LAB_0e51a1eb:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0e51a22d;
    func_0x0e54d0d0(&stack0x00000180);
    puVar17 = in_stack_00000180;
  }
  else {
    puVar17 = (undefined *)plVar9[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e51a1eb;
LAB_0e51a22d:
    func_0x0e54d0d0(&stack0x00000180);
    puVar17 = in_stack_00000180;
  }
  in_stack_00000180 = puVar17;
  if (cStack00000000000001b0 == '\0') {
    if ((DAT_0f755c68 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755c68), iVar7 != 0)) {
      func_0x0e54ccf0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755be8,0xf53dab8);
      func_0x0410844d(&DAT_0f755c68);
    }
    plVar9 = (long *)(*(long *)(puVar17 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755be8 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e51a2c0;
      plVar9 = (long *)(*(long *)(puVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755be8 + 4));
    if (plVar9 == *(long **)(puVar17 + 0x38)) {
LAB_0e51a2c0:
      puVar10 = &DAT_0f755be8;
    }
    else {
      puVar10 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar11 != *(byte **)(in_stack_00000180 + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e51a39a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e51a39a:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar25[0] = -(*pbVar16 == 0x5b);
        auVar25[1] = -(pbVar16[1] == 99);
        auVar25[2] = -(pbVar16[2] == 0x65);
        auVar25[3] = -(pbVar16[3] == 0x72);
        auVar25[4] = -(pbVar16[4] == 0x65);
        auVar25[5] = -(pbVar16[5] == 0x61);
        auVar25[6] = -(pbVar16[6] == 0x6c);
        auVar25[7] = -(pbVar16[7] == 0x3a);
        auVar25[8] = -(pbVar16[8] == 100);
        auVar25[9] = -(pbVar16[9] == 0x6f);
        auVar25[10] = -(pbVar16[10] == 99);
        auVar25[0xb] = -(pbVar16[0xb] == 0x75);
        auVar25[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar25[0xd] = -(pbVar16[0xd] == 0x65);
        auVar25[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar25[0xf] = -(pbVar16[0xf] == 0x74);
        auVar37[0] = -(pbVar16[10] == 99);
        auVar37[1] = -(pbVar16[0xb] == 0x75);
        auVar37[2] = -(pbVar16[0xc] == 0x6d);
        auVar37[3] = -(pbVar16[0xd] == 0x65);
        auVar37[4] = -(pbVar16[0xe] == 0x6e);
        auVar37[5] = -(pbVar16[0xf] == 0x74);
        auVar37[6] = -(pbVar16[0x10] == 0x61);
        auVar37[7] = -(pbVar16[0x11] == 0x74);
        auVar37[8] = -(pbVar16[0x12] == 0x69);
        auVar37[9] = -(pbVar16[0x13] == 0x6f);
        auVar37[10] = -(pbVar16[0x14] == 0x6e);
        auVar37[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar37[0xc] = -(pbVar16[0x16] == 0x74);
        auVar37[0xd] = -(pbVar16[0x17] == 0x61);
        auVar37[0xe] = -(pbVar16[0x18] == 0x67);
        auVar37[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar37 = auVar37 & auVar25;
        if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e51a3c8:
      if (iStack00000000000001a8 == 0) {
        if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0e51a450;
        lVar19 = *(long *)(puVar10 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack00000000000001ac;
        if (puVar10 == (undefined *)0x0) {
          puVar10 = (undefined *)func_0x048aead0(puVar17 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(puVar17 + 0x18,puVar10,uVar5,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e51a450;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar19 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e51a450:
          lVar19 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      uStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar44 = _UNK_013bbadf;
      in_stack_00000140 = (undefined *)0x21;
      in_stack_00000148 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar12 + 0x12) = uVar44;
      uVar44 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar12 = _DAT_013bbacd;
      puVar12[1] = uVar44;
      *(undefined1 *)((long)puVar12 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar12;
      lVar19 = func_0x048b5060(lVar19,&stack0x00000140);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined2 *)(lVar19 + 0x20) == &stack0x00000070) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar12 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar12);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar12);
            }
            else {
              uVar44 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar12 = uVar44;
            }
          }
        }
        *(ulong *)(lVar19 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar19 + 0x40) = in_stack_00000090;
        *(uint *)(lVar19 + 0x48) = uStack0000000000000098;
        *(char *)(lVar19 + 0x4c) = cStack000000000000009c;
        pcVar15 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar15 = in_stack_00000090;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e51a3c8;
    }
    _uStack00000000000001f0 = _cStack00000000000001b0;
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001e8 = _iStack00000000000001a8;
    in_stack_000001d0 = (undefined8 *)in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_00000160 = in_stack_000001a0;
    in_stack_00000140 = in_stack_00000180;
    in_stack_00000148 = in_stack_00000188;
    in_stack_00000150 = in_stack_00000190;
    in_stack_00000158 = in_stack_00000198;
    in_stack_00000170 = _cStack00000000000001b0;
    _iStack0000000000000168 = 0x5c17b12b00000002;
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
    uStack0000000000000098 = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4bd678;
    uVar44 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar12;
    if ((long *)uVar44 != (long *)0x0) {
      (**(code **)(*(long *)uVar44 + 8))();
    }
    if ((uStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          uStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    uStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 0x74;
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755c88 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755c88), iVar7 != 0)) {
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
    uVar44 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar44);
      }
    }
    uVar4 = in_stack_00000160;
    pcVar15 = in_stack_00000158;
    puVar12 = (undefined8 *)in_stack_00000150;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    uVar44 = _uStack0000000000000070;
    uVar6 = auStack0000000000000072._6_8_;
    _uStack0000000000000070 = ZEXT816(0);
    plVar9[3] = uVar44;
    plVar9[4] = uVar6;
    plVar9[7] = (long)in_stack_00000090;
    plVar9[5] = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    plVar9[6] = CONCAT44(iStack000000000000008c,iStack0000000000000088);
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    plVar9[10] = in_stack_000000a8;
    plVar9[8] = CONCAT17(uStack000000000000009f,
                         CONCAT16(uStack000000000000009e,
                                  CONCAT15(uStack000000000000009d,
                                           CONCAT14(cStack000000000000009c,uStack0000000000000098)))
                        );
    plVar9[9] = CONCAT17(uStack00000000000000a7,
                         CONCAT61(uStack00000000000000a1,cStack00000000000000a0));
    uStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    cStack00000000000000a0 = '\0';
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    plVar9[0xb] = _uStack00000000000000b0;
    plVar9[0xc] = stack0x000000b8;
    plVar9[0xd] = in_stack_000000c0;
    _uStack00000000000000b0 = ZEXT816(0);
    in_stack_000000c0 = 0;
    plVar9[0xe] = in_stack_000000c8;
    plVar9[0xf] = in_stack_000000d0;
    plVar9[0x10] = in_stack_000000d8;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack00000000000000e0;
    plVar9[0x12] = uStack00000000000000e8;
    plVar9[0x13] = uStack00000000000000f0;
    plVar9[0x14] = CONCAT44(uStack00000000000000fc,uStack00000000000000f8);
    _uStack00000000000000e8 = ZEXT816(0);
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    plVar9[0x17] = in_stack_00000110;
    plVar9[0x15] = in_stack_00000100;
    plVar9[0x16] = in_stack_00000108;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    *(ulong *)((long)plVar9 + 0xc5) =
         CONCAT17(uStack0000000000000124,
                  CONCAT43(uStack0000000000000120,uStack000000000000011c._1_3_));
    plVar9[0x18] = CONCAT44(uStack000000000000011c,
                            CONCAT22(uStack000000000000011a,uStack0000000000000118));
    puVar10 = (undefined *)0x0;
    uVar44 = 0;
    in_stack_00000010 = plVar9;
    func_0x048afd20(&stack0x00000200,&stack0x00000000);
    plVar9 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000010 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000010 + 0x10))(in_stack_00000010);
        func_0x0412c2d0(plVar9);
      }
    }
    iVar7 = (int)uVar4;
    iVar8 = (int)((ulong)uVar4 >> 0x20);
    if (iVar8 == 2) {
      piVar14 = *(int **)(*(long *)(pcVar15 + 0x78) + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != iVar7) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      for (; *(undefined8 **)(piVar14 + 0xc) != puVar12; piVar14 = *(int **)(piVar14 + 0xe)) {
      }
LAB_0e51ab4a:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (iVar8 == 1) {
        piVar14 = *(int **)(*(long *)(pcVar15 + 0x78) + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != iVar7) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0e51ab4a;
      }
      if (iVar8 == 0) {
        pcVar15[0x1a] = (code)((byte)pcVar15[0x1a] | 9);
      }
    }
    func_0x048b0bc0(&stack0x00000070);
  }
  if ((DAT_0f755d20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755d20), iVar7 != 0)) {
    func_0x0e54e0d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755ca0,0xf53dab8);
    func_0x0410844d(&DAT_0f755d20);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f755ca0 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e51abc0;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f755ca0 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e51abc0:
    puVar17 = &DAT_0f755ca0;
    if (iRam000000000f755d00 != -0x2b3da790) goto LAB_0e51ac2d;
LAB_0e51abeb:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0e51ac2d;
    func_0x0e54e570(&stack0x00000240);
  }
  else {
    puVar17 = (undefined *)plVar9[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e51abeb;
LAB_0e51ac2d:
    func_0x0e54e570(&stack0x00000240);
  }
  if (cVar45 == '\0') {
    if ((DAT_0f755d20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755d20), iVar7 != 0)) {
      func_0x0e54e0d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755ca0,0xf53dab8);
      func_0x0410844d(&DAT_0f755d20);
    }
    plVar9 = (long *)(*(long *)(puVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755ca0 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e51acc0;
      plVar9 = (long *)(*(long *)(puVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755ca0 + 4));
    if (plVar9 == *(long **)(puVar10 + 0x38)) {
LAB_0e51acc0:
      puVar17 = &DAT_0f755ca0;
    }
    else {
      puVar17 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)(puVar10 + 0x50); pbVar11 != *(byte **)(puVar10 + 0x58);
        pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e51ad9a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e51ad9a:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar26[0] = -(*pbVar16 == 0x5b);
        auVar26[1] = -(pbVar16[1] == 99);
        auVar26[2] = -(pbVar16[2] == 0x65);
        auVar26[3] = -(pbVar16[3] == 0x72);
        auVar26[4] = -(pbVar16[4] == 0x65);
        auVar26[5] = -(pbVar16[5] == 0x61);
        auVar26[6] = -(pbVar16[6] == 0x6c);
        auVar26[7] = -(pbVar16[7] == 0x3a);
        auVar26[8] = -(pbVar16[8] == 100);
        auVar26[9] = -(pbVar16[9] == 0x6f);
        auVar26[10] = -(pbVar16[10] == 99);
        auVar26[0xb] = -(pbVar16[0xb] == 0x75);
        auVar26[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar26[0xd] = -(pbVar16[0xd] == 0x65);
        auVar26[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar26[0xf] = -(pbVar16[0xf] == 0x74);
        auVar38[0] = -(pbVar16[10] == 99);
        auVar38[1] = -(pbVar16[0xb] == 0x75);
        auVar38[2] = -(pbVar16[0xc] == 0x6d);
        auVar38[3] = -(pbVar16[0xd] == 0x65);
        auVar38[4] = -(pbVar16[0xe] == 0x6e);
        auVar38[5] = -(pbVar16[0xf] == 0x74);
        auVar38[6] = -(pbVar16[0x10] == 0x61);
        auVar38[7] = -(pbVar16[0x11] == 0x74);
        auVar38[8] = -(pbVar16[0x12] == 0x69);
        auVar38[9] = -(pbVar16[0x13] == 0x6f);
        auVar38[10] = -(pbVar16[0x14] == 0x6e);
        auVar38[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar38[0xc] = -(pbVar16[0x16] == 0x74);
        auVar38[0xd] = -(pbVar16[0x17] == 0x61);
        auVar38[0xe] = -(pbVar16[0x18] == 0x67);
        auVar38[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar38 = auVar38 & auVar26;
        if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(puVar10 + 0x58)) {
LAB_0e51adc8:
      if ((int)in_stack_00000268 == 0) {
        if (((puVar17 == (undefined *)0x0) || (*(int *)(puVar17 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar17 + 0x68) == 0)) goto LAB_0e51ae50;
        lVar19 = *(long *)(puVar17 + 0x68) + 0x38;
      }
      else {
        if (puVar17 == (undefined *)0x0) {
          puVar17 = (undefined *)func_0x048aead0(puVar10 + 0x18);
        }
        _uStack0000000000000070 =
             (undefined *)
             func_0x048b0c90(puVar10 + 0x18,puVar17,(int)((ulong)in_stack_00000268 >> 0x20),1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e51ae50;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar19 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e51ae50:
          lVar19 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      uStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      in_stack_00000180 = (undefined *)0x21;
      in_stack_00000188 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar12 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar12 = _DAT_013bbacd;
      puVar12[1] = uVar4;
      *(undefined1 *)((long)puVar12 + 0x1a) = 0;
      in_stack_00000190 = (code *)puVar12;
      lVar19 = func_0x048b5060(lVar19,&stack0x00000180);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined2 *)(lVar19 + 0x20) == &stack0x00000070) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar12 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar12);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar12);
            }
            else {
              uVar4 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar12 = uVar4;
            }
          }
        }
        *(ulong *)(lVar19 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar19 + 0x40) = in_stack_00000090;
        *(uint *)(lVar19 + 0x48) = uStack0000000000000098;
        *(char *)(lVar19 + 0x4c) = cStack000000000000009c;
        pcVar15 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000180 & 1) != 0) {
        func_0x0412a280(in_stack_00000190,(ulong)in_stack_00000180 & 0xfffffffffffffffe);
        pcVar15 = in_stack_00000090;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e51adc8;
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
    uStack0000000000000098 = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4bd678;
    uVar4 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar12;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    if ((uStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          uStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    uStack0000000000000098 = 0x6572701c;
    cStack000000000000009c = 100;
    uStack000000000000009d = 0x69;
    uStack000000000000009e = 99;
    uStack000000000000009f = 0x61;
    cStack00000000000000a0 = 't';
    uStack00000000000000a1 = 0x657079745f65;
    uStack00000000000000a7 = 0;
    if ((DAT_0f755d40 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755d40), iVar7 != 0)) {
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
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    in_stack_00000180 = (undefined *)uVar44;
    in_stack_00000188 = in_stack_00000250;
    in_stack_00000190 = in_stack_00000258;
    in_stack_00000198 = (code *)in_stack_00000260;
    func_0x0e54f110(&stack0x00000000,&stack0x00000180,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51b30f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e51b30f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    func_0x048b0bc0(&stack0x00000070);
    func_0x0e54eb60(&stack0x00000070,puVar10 + 0x18);
    if (iStack000000000000008c == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78)
                         + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000088) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != auStack0000000000000072._6_8_) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51b3cf:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (iStack000000000000008c == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78
                                     ) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000088) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e51b3cf;
      }
      if (iStack000000000000008c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e54f3e0(&stack0x00000070,&stack0x00000400,&UNK_014739de,10);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
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
    uVar44 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar44);
      }
    }
    func_0x0e54f690(&stack0x00000070);
    func_0x048b0bc0(&stack0x00000088);
    uStack00000000000001ba = 0;
    uStack00000000000001be = 0;
    in_stack_00000188 = (undefined8 *)0xffffffffffffffff;
    in_stack_00000190 = (code *)0x0;
    in_stack_00000198 = (code *)CONCAT71(in_stack_00000198._1_7_,0xff);
    in_stack_00000180 = &UNK_0f0edc68;
    in_stack_000001a0 = 0;
    _iStack00000000000001a8 = _DAT_014f0478;
    _cStack00000000000001b0 = 0;
    uStack00000000000001b8 = 0x100;
    func_0x0e54dc40(&stack0x00000438,&stack0x00000470,&stack0x00000180);
    func_0x0e54eb60(&stack0x00000070,in_stack_00000438 + 0x18);
    if (iStack000000000000008c == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78)
                         + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000088) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != auStack0000000000000072._6_8_) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51b6df:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (iStack000000000000008c == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78
                                     ) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000088) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e51b6df;
      }
      if (iStack000000000000008c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e54f3e0(&stack0x00000070,&stack0x00000438,&UNK_013f1347,10);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_05daeda0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_05daea90;
    in_stack_00000040 = &UNK_0e54fa90;
    in_stack_00000048 = &UNK_0e54fbf0;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar44 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar44);
      }
    }
    func_0x0e54f690(&stack0x00000070);
    func_0x048b0bc0(&stack0x00000088);
    uStack000000000000017a = 0;
    uStack000000000000017e = 0;
    in_stack_00000148 = (undefined8 *)0xffffffffffffffff;
    in_stack_00000150 = (code *)0x0;
    in_stack_00000158 = (code *)CONCAT71(in_stack_00000158._1_7_,0xff);
    in_stack_00000140 = &UNK_0f0edc68;
    in_stack_00000160 = 0;
    _iStack0000000000000168 = _DAT_014f0478;
    in_stack_00000170 = 0;
    uStack0000000000000178 = 0x100;
    func_0x0e54dc40(&stack0x00000388,&stack0x000004b0,&stack0x00000140);
    func_0x0e54eb60(&stack0x00000070,in_stack_00000388 + 0x18);
    if (iStack000000000000008c == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78)
                         + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000088) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != auStack0000000000000072._6_8_) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51b98f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (iStack000000000000008c == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78
                                     ) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000088) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e51b98f;
      }
      if (iStack000000000000008c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e54f3e0(&stack0x00000070,&stack0x00000388,&UNK_0130aa65,8);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0490ce30;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0490cb20;
    in_stack_00000040 = &UNK_0e54fdd0;
    in_stack_00000048 = &UNK_0e54ff30;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar44 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar44);
      }
    }
    func_0x0e54f690(&stack0x00000070);
    func_0x048b0bc0(&stack0x00000088);
    in_stack_000001c8 = 0xffffffffffffffff;
    in_stack_000001d0 = (undefined8 *)0x0;
    in_stack_000001d8 = (code *)CONCAT71(in_stack_000001d8._1_7_,0xff);
    in_stack_000001c0 = &UNK_0f0edc68;
    in_stack_000001e0 = 0;
    in_stack_000001e8 = _DAT_014f0238;
    _uStack00000000000001f0 = 0;
    in_stack_000001f8 = 0;
    func_0x0e54dc40(&stack0x00000308,&stack0x00000340,&stack0x000001c0);
    func_0x0e54eb60(&stack0x00000070,in_stack_00000308 + 0x18);
    if (iStack000000000000008c == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78)
                         + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000088) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != auStack0000000000000072._6_8_) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51bc4f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (iStack000000000000008c == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78
                                     ) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000088) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e51bc4f;
      }
      if (iStack000000000000008c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e54f3e0(&stack0x00000070,&stack0x00000308,&UNK_0148f9ca,8);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0490ce30;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0490cb20;
    in_stack_00000040 = &UNK_0e550110;
    in_stack_00000048 = &UNK_0e550270;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar44 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar44);
      }
    }
    func_0x0e54f690(&stack0x00000070);
    func_0x048b0bc0(&stack0x00000088);
    func_0x0e54dc40(&stack0x000002c0,&stack0x00000280,&stack0x00000200);
    func_0x0e54eb60(&stack0x00000070,in_stack_000002c0 + 0x18);
    if (iStack000000000000008c == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78)
                         + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000088) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != auStack0000000000000072._6_8_) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51beff:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (iStack000000000000008c == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78
                                     ) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000088) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e51beff;
      }
      if (iStack000000000000008c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e54f3e0(&stack0x00000070,&stack0x000002c0,&UNK_011b014f,4);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4bd838;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e5429d0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e53e730;
    in_stack_00000040 = &UNK_0e550450;
    in_stack_00000048 = &UNK_0e5505b0;
    in_stack_00000050 = 0;
    in_stack_00000058 = ZEXT816(0);
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar44 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar44);
      }
    }
    func_0x0e54f690(&stack0x00000070);
    func_0x048b0bc0(&stack0x00000088);
  }
  if ((DAT_0f755dd8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755dd8), iVar7 != 0)) {
    func_0x0e550ae0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755d58,0xf53dab8);
    func_0x0410844d(&DAT_0f755dd8);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f755d58 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e51c090;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f755d58 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e51c090:
    puVar10 = &DAT_0f755d58;
    if (iRam000000000f755db8 != -0x2b3da790) goto LAB_0e51c0fd;
LAB_0e51c0bb:
    if (*(long *)(puVar10 + 0x68) == 0) goto LAB_0e51c0fd;
    func_0x0e550f00(&stack0x00000180);
    puVar10 = in_stack_00000180;
  }
  else {
    puVar10 = (undefined *)plVar9[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e51c0bb;
LAB_0e51c0fd:
    func_0x0e550f00(&stack0x00000180);
    puVar10 = in_stack_00000180;
  }
  in_stack_00000180 = puVar10;
  if (cStack00000000000001b0 == '\0') {
    if ((DAT_0f755dd8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755dd8), iVar7 != 0)) {
      func_0x0e550ae0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755d58,0xf53dab8);
      func_0x0410844d(&DAT_0f755dd8);
    }
    plVar9 = (long *)(*(long *)(puVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755d58 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e51c190;
      plVar9 = (long *)(*(long *)(puVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755d58 + 4));
    if (plVar9 == *(long **)(puVar10 + 0x38)) {
LAB_0e51c190:
      puVar17 = &DAT_0f755d58;
    }
    else {
      puVar17 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar11 != *(byte **)(in_stack_00000180 + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e51c26a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e51c26a:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar27[0] = -(*pbVar16 == 0x5b);
        auVar27[1] = -(pbVar16[1] == 99);
        auVar27[2] = -(pbVar16[2] == 0x65);
        auVar27[3] = -(pbVar16[3] == 0x72);
        auVar27[4] = -(pbVar16[4] == 0x65);
        auVar27[5] = -(pbVar16[5] == 0x61);
        auVar27[6] = -(pbVar16[6] == 0x6c);
        auVar27[7] = -(pbVar16[7] == 0x3a);
        auVar27[8] = -(pbVar16[8] == 100);
        auVar27[9] = -(pbVar16[9] == 0x6f);
        auVar27[10] = -(pbVar16[10] == 99);
        auVar27[0xb] = -(pbVar16[0xb] == 0x75);
        auVar27[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar27[0xd] = -(pbVar16[0xd] == 0x65);
        auVar27[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar27[0xf] = -(pbVar16[0xf] == 0x74);
        auVar39[0] = -(pbVar16[10] == 99);
        auVar39[1] = -(pbVar16[0xb] == 0x75);
        auVar39[2] = -(pbVar16[0xc] == 0x6d);
        auVar39[3] = -(pbVar16[0xd] == 0x65);
        auVar39[4] = -(pbVar16[0xe] == 0x6e);
        auVar39[5] = -(pbVar16[0xf] == 0x74);
        auVar39[6] = -(pbVar16[0x10] == 0x61);
        auVar39[7] = -(pbVar16[0x11] == 0x74);
        auVar39[8] = -(pbVar16[0x12] == 0x69);
        auVar39[9] = -(pbVar16[0x13] == 0x6f);
        auVar39[10] = -(pbVar16[0x14] == 0x6e);
        auVar39[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar39[0xc] = -(pbVar16[0x16] == 0x74);
        auVar39[0xd] = -(pbVar16[0x17] == 0x61);
        auVar39[0xe] = -(pbVar16[0x18] == 0x67);
        auVar39[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar39 = auVar39 & auVar27;
        if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e51c298:
      if (iStack00000000000001a8 == 0) {
        if (((puVar17 == (undefined *)0x0) || (*(int *)(puVar17 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar17 + 0x68) == 0)) goto LAB_0e51c320;
        lVar19 = *(long *)(puVar17 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack00000000000001ac;
        if (puVar17 == (undefined *)0x0) {
          puVar17 = (undefined *)func_0x048aead0(puVar10 + 0x18);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(puVar10 + 0x18,puVar17,uVar5,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e51c320;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar19 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e51c320:
          lVar19 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      uStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar44 = _UNK_013bbadf;
      in_stack_00000140 = (undefined *)0x21;
      in_stack_00000148 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar12 + 0x12) = uVar44;
      uVar44 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar12 = _DAT_013bbacd;
      puVar12[1] = uVar44;
      *(undefined1 *)((long)puVar12 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar12;
      lVar19 = func_0x048b5060(lVar19,&stack0x00000140);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined2 *)(lVar19 + 0x20) == &stack0x00000070) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar12 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar12);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar12);
            }
            else {
              uVar44 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar12 = uVar44;
            }
          }
        }
        *(ulong *)(lVar19 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar19 + 0x40) = in_stack_00000090;
        *(uint *)(lVar19 + 0x48) = uStack0000000000000098;
        *(char *)(lVar19 + 0x4c) = cStack000000000000009c;
        pcVar15 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar15 = in_stack_00000090;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e51c298;
    }
    _uStack00000000000001f0 = _cStack00000000000001b0;
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001e8 = _iStack00000000000001a8;
    in_stack_000001d0 = (undefined8 *)in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_00000160 = in_stack_000001a0;
    in_stack_00000140 = in_stack_00000180;
    in_stack_00000148 = in_stack_00000188;
    in_stack_00000150 = in_stack_00000190;
    in_stack_00000158 = in_stack_00000198;
    in_stack_00000170 = _cStack00000000000001b0;
    _iStack0000000000000168 = 0x5127f14d00000002;
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
    uStack0000000000000098 = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4bd758;
    uVar44 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar12;
    if ((long *)uVar44 != (long *)0x0) {
      (**(code **)(*(long *)uVar44 + 8))();
    }
    if ((uStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          uStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    uStack0000000000000098 = 0x70797408;
    cStack000000000000009c = 0x65;
    uStack000000000000009d = 0;
    if ((DAT_0f755df8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755df8), iVar7 != 0)) {
      func_0x0e550bf0();
      func_0x0410844d(&DAT_0f755df8);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e53e3f0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e539e60;
    in_stack_00000040 = &UNK_0e551a10;
    in_stack_00000048 = &UNK_0e551a20;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(&stack0x00000148,&stack0x00000000);
    uVar44 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar44);
      }
    }
    uVar44 = in_stack_00000160;
    pcVar15 = in_stack_00000158;
    puVar12 = (undefined8 *)in_stack_00000150;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar9 + 1) = (undefined1  [16])0x0;
    *plVar9 = (long)&UNK_0ef439d0;
    uVar4 = _uStack0000000000000070;
    uVar6 = auStack0000000000000072._6_8_;
    _uStack0000000000000070 = (undefined1  [16])0x0;
    plVar9[3] = uVar4;
    plVar9[4] = uVar6;
    plVar9[7] = (long)in_stack_00000090;
    plVar9[5] = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    plVar9[6] = CONCAT44(iStack000000000000008c,iStack0000000000000088);
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    plVar9[10] = in_stack_000000a8;
    plVar9[8] = CONCAT17(uStack000000000000009f,
                         CONCAT16(uStack000000000000009e,
                                  CONCAT15(uStack000000000000009d,
                                           CONCAT14(cStack000000000000009c,uStack0000000000000098)))
                        );
    plVar9[9] = CONCAT17(uStack00000000000000a7,
                         CONCAT61(uStack00000000000000a1,cStack00000000000000a0));
    uStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    cStack00000000000000a0 = '\0';
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    plVar9[0xb] = _uStack00000000000000b0;
    plVar9[0xc] = stack0x000000b8;
    plVar9[0xd] = in_stack_000000c0;
    _uStack00000000000000b0 = (undefined1  [16])0x0;
    in_stack_000000c0 = 0;
    plVar9[0xe] = in_stack_000000c8;
    plVar9[0xf] = in_stack_000000d0;
    plVar9[0x10] = in_stack_000000d8;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack00000000000000e0;
    plVar9[0x12] = uStack00000000000000e8;
    plVar9[0x13] = uStack00000000000000f0;
    plVar9[0x14] = CONCAT44(uStack00000000000000fc,uStack00000000000000f8);
    _uStack00000000000000e8 = (undefined1  [16])0x0;
    uStack00000000000000f8 = 0;
    uStack00000000000000fc = 0;
    plVar9[0x17] = in_stack_00000110;
    plVar9[0x15] = in_stack_00000100;
    plVar9[0x16] = in_stack_00000108;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    *(ulong *)((long)plVar9 + 0xc5) =
         CONCAT17(uStack0000000000000124,
                  CONCAT43(uStack0000000000000120,uStack000000000000011c._1_3_));
    plVar9[0x18] = CONCAT44(uStack000000000000011c,
                            CONCAT22(uStack000000000000011a,uStack0000000000000118));
    in_stack_00000010 = plVar9;
    func_0x048afd20(&stack0x00000200,&stack0x00000000);
    plVar9 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000010 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000010 + 0x10))(in_stack_00000010);
        func_0x0412c2d0(plVar9);
      }
    }
    iVar7 = (int)uVar44;
    iVar8 = (int)((ulong)uVar44 >> 0x20);
    if (iVar8 == 2) {
      piVar14 = *(int **)(*(long *)(pcVar15 + 0x78) + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != iVar7) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      for (; *(undefined8 **)(piVar14 + 0xc) != puVar12; piVar14 = *(int **)(piVar14 + 0xe)) {
      }
LAB_0e51ca8a:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (iVar8 == 1) {
        piVar14 = *(int **)(*(long *)(pcVar15 + 0x78) + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != iVar7) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0e51ca8a;
      }
      if (iVar8 == 0) {
        pcVar15[0x1a] = (code)((byte)pcVar15[0x1a] | 9);
      }
    }
    func_0x048b0bc0(&stack0x00000070);
  }
  func_0x0cdadbb0();
  if ((DAT_0f755e90 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755e90), iVar7 != 0)) {
    func_0x0e551b30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755e10,0xf53dab8);
    func_0x0410844d(&DAT_0f755e90);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f755e10 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e51cb00;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f755e10 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e51cb00:
    puVar10 = &DAT_0f755e10;
    if (iRam000000000f755e70 != -0x2b3da790) goto LAB_0e51cb6d;
LAB_0e51cb2b:
    if (*(long *)(puVar10 + 0x68) == 0) goto LAB_0e51cb6d;
    func_0x0e5521c0(&stack0x00000180);
  }
  else {
    puVar10 = (undefined *)plVar9[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e51cb2b;
LAB_0e51cb6d:
    func_0x0e5521c0(&stack0x00000180);
  }
  if (cStack00000000000001b0 == '\0') {
    func_0x0cdadbb0();
    puVar10 = in_stack_00000180;
    if ((DAT_0f755e90 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755e90), iVar7 != 0)) {
      func_0x0e551b30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755e10,0xf53dab8);
      func_0x0410844d(&DAT_0f755e90);
    }
    plVar9 = (long *)(*(long *)(puVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755e10 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e51cc10;
      plVar9 = (long *)(*(long *)(puVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755e10 + 4));
    if (plVar9 == *(long **)(puVar10 + 0x38)) {
LAB_0e51cc10:
      puVar17 = &DAT_0f755e10;
    }
    else {
      puVar17 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)(in_stack_00000180 + 0x50);
        pbVar11 != *(byte **)(in_stack_00000180 + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e51ccea;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e51ccea:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar28[0] = -(*pbVar16 == 0x5b);
        auVar28[1] = -(pbVar16[1] == 99);
        auVar28[2] = -(pbVar16[2] == 0x65);
        auVar28[3] = -(pbVar16[3] == 0x72);
        auVar28[4] = -(pbVar16[4] == 0x65);
        auVar28[5] = -(pbVar16[5] == 0x61);
        auVar28[6] = -(pbVar16[6] == 0x6c);
        auVar28[7] = -(pbVar16[7] == 0x3a);
        auVar28[8] = -(pbVar16[8] == 100);
        auVar28[9] = -(pbVar16[9] == 0x6f);
        auVar28[10] = -(pbVar16[10] == 99);
        auVar28[0xb] = -(pbVar16[0xb] == 0x75);
        auVar28[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar28[0xd] = -(pbVar16[0xd] == 0x65);
        auVar28[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar28[0xf] = -(pbVar16[0xf] == 0x74);
        auVar40[0] = -(pbVar16[10] == 99);
        auVar40[1] = -(pbVar16[0xb] == 0x75);
        auVar40[2] = -(pbVar16[0xc] == 0x6d);
        auVar40[3] = -(pbVar16[0xd] == 0x65);
        auVar40[4] = -(pbVar16[0xe] == 0x6e);
        auVar40[5] = -(pbVar16[0xf] == 0x74);
        auVar40[6] = -(pbVar16[0x10] == 0x61);
        auVar40[7] = -(pbVar16[0x11] == 0x74);
        auVar40[8] = -(pbVar16[0x12] == 0x69);
        auVar40[9] = -(pbVar16[0x13] == 0x6f);
        auVar40[10] = -(pbVar16[0x14] == 0x6e);
        auVar40[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar40[0xc] = -(pbVar16[0x16] == 0x74);
        auVar40[0xd] = -(pbVar16[0x17] == 0x61);
        auVar40[0xe] = -(pbVar16[0x18] == 0x67);
        auVar40[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar40 = auVar40 & auVar28;
        if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(in_stack_00000180 + 0x58)) {
LAB_0e51cd18:
      if (iStack00000000000001a8 == 0) {
        if (((puVar17 == (undefined *)0x0) || (*(int *)(puVar17 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar17 + 0x68) == 0)) goto LAB_0e51cda2;
        lVar19 = *(long *)(puVar17 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack00000000000001ac;
        if (puVar17 == (undefined *)0x0) {
          puVar17 = (undefined *)func_0x048aead0(puVar10 + 0x18,0,uStack00000000000001ac);
        }
        _uStack0000000000000070 = (undefined *)func_0x048b0c90(puVar10 + 0x18,puVar17,uVar5,1);
        if (_uStack0000000000000070 == (undefined *)0x0) {
          _uStack0000000000000070 = (undefined1  [16])0x0;
          func_0x048b0d20(&stack0x00000070);
          if (_uStack0000000000000070 == (undefined *)0x0) goto LAB_0e51cda2;
        }
        if ((*(int *)((long)_uStack0000000000000070 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)_uStack0000000000000070 + 0x58) != 0)) {
          lVar19 = *(long *)((long)_uStack0000000000000070 + 0x58) + 0x40;
        }
        else {
LAB_0e51cda2:
          lVar19 = 0;
        }
      }
      in_stack_00000010 = (long *)&UNK_0488e0b0;
      _iStack0000000000000018 = (code *)0x0;
      in_stack_00000020 = (code *)CONCAT35(in_stack_00000020._5_3_,0x48b5725f);
      _uStack0000000000000070 = (undefined1  [16])0x0;
      iStack0000000000000088 = 0x488e0b0;
      iStack000000000000008c = 0;
      in_stack_00000090 = (code *)0x0;
      uStack0000000000000098 = 0x48b5725f;
      cStack000000000000009c = '\0';
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar44 = _UNK_013bbadf;
      in_stack_00000140 = (undefined *)0x21;
      in_stack_00000148 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar12 + 0x12) = uVar44;
      uVar44 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar12 = _DAT_013bbacd;
      puVar12[1] = uVar44;
      *(undefined1 *)((long)puVar12 + 0x1a) = 0;
      in_stack_00000150 = (code *)puVar12;
      lVar19 = func_0x048b5060(lVar19,&stack0x00000140);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined2 *)(lVar19 + 0x20) == &stack0x00000070) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar12 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar12);
          if (cStack000000000000009c != '\0') {
            if (cStack000000000000009c == '\x02') {
              (*(code *)CONCAT44(iStack000000000000008c,iStack0000000000000088))
                        (5,(undefined1 *)((long)&stack0x00000070 + 8),puVar12);
            }
            else {
              uVar44 = auStack0000000000000072._6_8_;
              auStack0000000000000072._6_8_ = 0;
              *puVar12 = uVar44;
            }
          }
        }
        *(ulong *)(lVar19 + 0x38) = CONCAT44(iStack000000000000008c,iStack0000000000000088);
        *(code **)(lVar19 + 0x40) = in_stack_00000090;
        *(uint *)(lVar19 + 0x48) = uStack0000000000000098;
        *(char *)(lVar19 + 0x4c) = cStack000000000000009c;
        pcVar15 = in_stack_00000090;
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        func_0x0412a280(in_stack_00000150,(ulong)in_stack_00000140 & 0xfffffffffffffffe);
        pcVar15 = in_stack_00000090;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)((undefined1 *)((long)&stack0x00000070 + 8));
      }
      if (_iStack0000000000000018 != (code *)0x0) {
        (*_iStack0000000000000018)(&stack0x00000000);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e51cd18;
    }
    in_stack_000001e0 = in_stack_000001a0;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_000001d0 = (undefined8 *)in_stack_00000190;
    in_stack_000001d8 = in_stack_00000198;
    _uStack00000000000001f0 = _cStack00000000000001b0;
    in_stack_000001e8 = 0x5127f14d00000002;
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
    uStack0000000000000098 = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4bd758;
    uVar44 = _uStack0000000000000070;
    _uStack0000000000000070 = (undefined *)puVar12;
    if ((long *)uVar44 != (long *)0x0) {
      (**(code **)(*(long *)uVar44 + 8))();
    }
    if ((uStack0000000000000098 & 1) != 0) {
      func_0x0412a280(in_stack_000000a8,
                      CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT15(uStack000000000000009d,
                                                 CONCAT14(cStack000000000000009c,
                                                          uStack0000000000000098)))) &
                      0xfffffffffffffffe);
    }
    uStack0000000000000098 = 0x70797408;
    cStack000000000000009c = 0x65;
    uStack000000000000009d = 0;
    if ((DAT_0f755eb0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755eb0), iVar7 != 0)) {
      func_0x0e551c40();
      func_0x0410844d(&DAT_0f755eb0);
    }
    in_stack_00000010 = (long *)CONCAT44(in_stack_00000010._4_4_,3);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0e53e3f0;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &UNK_0e539e60;
    in_stack_00000040 = &UNK_0e552f90;
    in_stack_00000048 = &UNK_0e552fa0;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(&stack0x000001c8,&stack0x00000000);
    uVar44 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar44);
      }
    }
    in_stack_00000150 = in_stack_000001d8;
    in_stack_00000158 = (code *)in_stack_000001e0;
    in_stack_00000140 = (undefined *)in_stack_000001c8;
    in_stack_00000148 = in_stack_000001d0;
    func_0x0e552d20(&stack0x00000000,&stack0x00000140,&stack0x00000070);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51d23f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(*(long *)((long)in_stack_00000010 + 0x78) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e51d23f;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)((long)in_stack_00000010 + 0x18U) =
             *(uint *)((long)in_stack_00000010 + 0x18U) | 0x90000;
      }
    }
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000148 = (undefined8 *)in_stack_000001c8;
    in_stack_00000150 = (code *)in_stack_000001d0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001e0;
    _iStack0000000000000168 = in_stack_000001e8;
    in_stack_00000170 = CONCAT71(in_stack_00000170._1_7_,uStack00000000000001f0);
    func_0x048b0bc0(&stack0x00000070);
    if ((DAT_0f755eb0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755eb0), iVar7 != 0)) {
      func_0x0e551c40();
      func_0x0410844d(&DAT_0f755eb0);
    }
    puVar10 = in_stack_00000140;
    _iStack0000000000000168 = 0x2823fd3c00000001;
    if ((DAT_0f755e90 == '\0') && (iVar7 = func_0x04108328(&DAT_0f755e90), iVar7 != 0)) {
      func_0x0e551b30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755e10,0xf53dab8);
      func_0x0410844d(&DAT_0f755e90);
    }
    plVar9 = (long *)(*(long *)(puVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                  3) - 1U & *(uint *)(_DAT_0f755e10 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e51d320;
      plVar9 = (long *)(*(long *)(puVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f755e10 + 4));
    if (plVar9 == *(long **)(puVar10 + 0x38)) {
LAB_0e51d320:
      _uStack0000000000000070 = &DAT_0f755e10;
    }
    else {
      _uStack0000000000000070 = (undefined *)plVar9[2];
    }
    auStack0000000000000072._6_8_ = puVar10 + 0x18;
    func_0x0ed621a0(&stack0x00000070,uStack000000000000016c);
    auVar20 = _uStack00000000000000b0;
    uStack0000000000000070 = 1;
    auStack0000000000000072._6_8_ = &stack0x00000148;
    uStack0000000000000080 = uStack000000000000016c;
    iStack0000000000000088 = 0;
    iStack000000000000008c = 0;
    in_stack_00000090 = (code *)0x0;
    uStack0000000000000098 = 0;
    cStack000000000000009c = 0;
    uStack000000000000009d = 0;
    uStack000000000000009e = 0;
    uStack000000000000009f = 0;
    cStack00000000000000a0 = '\0';
    uStack00000000000000a1 = 0;
    uStack00000000000000a7 = 0;
    in_stack_000000a8 = 0;
    uStack00000000000000b1 = 0x6261745f746f6f6c;
    uStack00000000000000b0 = 0x14;
    uStack00000000000000b9 = 0x656c;
    _uStack00000000000000bc = auVar20._12_4_;
    uStack00000000000000bb = 0;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f406a90;
    plVar9 = (long *)CONCAT44(iStack000000000000008c,iStack0000000000000088);
    iStack0000000000000088 = (int)puVar12;
    iStack000000000000008c = (int)((ulong)puVar12 >> 0x20);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    in_stack_00000010 = (long *)((ulong)in_stack_00000010 & 0xffffffff00000000);
    _iStack0000000000000018 = (code *)0x1;
    in_stack_00000020 = (code *)0x0;
    _uStack0000000000000028 = &UNK_0d938340;
    in_stack_00000030 = &SUB_048b06d0;
    in_stack_00000038 = &SUB_0cdf8ff0;
    in_stack_00000040 = &UNK_0e552ff0;
    in_stack_00000048 = &UNK_0e5531b0;
    in_stack_00000050 = 0;
    in_stack_00000058 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack0000000000000072._6_8_,&stack0x00000000);
    uVar44 = in_stack_00000058._8_8_;
    if ((long *)in_stack_00000058._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(in_stack_00000058._8_8_ + 8);
      lVar19 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)in_stack_00000058._8_8_ + 0x10))(in_stack_00000058._8_8_);
        func_0x0412c2d0(uVar44);
      }
    }
    func_0x0e552d20(&stack0x00000000,auStack0000000000000072._6_8_,&stack0x00000088);
    if (iStack000000000000001c == 2) {
      piVar14 = *(int **)(in_stack_00000010[0xf] + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != iStack0000000000000018) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != 0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0e51d5ef:
      piVar14[4] = piVar14[4] | _uStack0000000000000070 << 0x10;
    }
    else {
      if (iStack000000000000001c == 1) {
        piVar14 = *(int **)(in_stack_00000010[0xf] + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != iStack0000000000000018) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0e51d5ef;
      }
      if (iStack000000000000001c == 0) {
        *(uint *)(in_stack_00000010 + 3) =
             *(uint *)(in_stack_00000010 + 3) | _uStack0000000000000070 << 0x10;
      }
    }
    func_0x048b0bc0(&stack0x00000088);
  }
  if ((DAT_0f75d4b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f75d4b8), iVar7 != 0)) {
    func_0x0e6b1e50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75d438,0xf53dab8);
    func_0x0410844d(&DAT_0f75d4b8);
  }
  plVar9 = (long *)(*(long *)(unaff_RBX + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f75d438 + 4)) * 8);
  do {
    lVar19 = *plVar9;
    if (lVar19 == -1) goto LAB_0e51d660;
    plVar9 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f75d438 + 4));
  if (plVar9 == *(long **)(unaff_RBX + 0x38)) {
LAB_0e51d660:
    puVar10 = &DAT_0f75d438;
    if (_DAT_0f75d498 != -0x2b3da790) goto LAB_0e51d6ca;
LAB_0e51d68b:
    if (*(long *)(puVar10 + 0x68) == 0) goto LAB_0e51d6ca;
    func_0x0e6b2450(&stack0x00000070);
  }
  else {
    puVar10 = (undefined *)plVar9[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e51d68b;
LAB_0e51d6ca:
    func_0x0e6b2450(&stack0x00000070);
  }
  if (cStack00000000000000a0 == '\0') {
    uVar44 = _uStack0000000000000070;
    if ((DAT_0f75d4b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f75d4b8), iVar7 != 0)) {
      func_0x0e6b1e50();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75d438,0xf53dab8);
      func_0x0410844d(&DAT_0f75d4b8);
    }
    plVar9 = (long *)(*(long *)(uVar44 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(uVar44 + 0x20) - *(long *)(uVar44 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f75d438 + 4)) * 8);
    do {
      lVar19 = *plVar9;
      if (lVar19 == -1) goto LAB_0e51d760;
      plVar9 = (long *)(*(long *)(uVar44 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(uVar44 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f75d438 + 4)
            );
    if (plVar9 == *(long **)(uVar44 + 0x38)) {
LAB_0e51d760:
      puVar10 = &DAT_0f75d438;
    }
    else {
      puVar10 = (undefined *)plVar9[2];
    }
    for (pbVar11 = *(byte **)((long)_uStack0000000000000070 + 0x50);
        pbVar11 != *(byte **)((long)_uStack0000000000000070 + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e51d83a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e51d83a:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar29[0] = -(*pbVar16 == 0x5b);
        auVar29[1] = -(pbVar16[1] == 99);
        auVar29[2] = -(pbVar16[2] == 0x65);
        auVar29[3] = -(pbVar16[3] == 0x72);
        auVar29[4] = -(pbVar16[4] == 0x65);
        auVar29[5] = -(pbVar16[5] == 0x61);
        auVar29[6] = -(pbVar16[6] == 0x6c);
        auVar29[7] = -(pbVar16[7] == 0x3a);
        auVar29[8] = -(pbVar16[8] == 100);
        auVar29[9] = -(pbVar16[9] == 0x6f);
        auVar29[10] = -(pbVar16[10] == 99);
        auVar29[0xb] = -(pbVar16[0xb] == 0x75);
        auVar29[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar29[0xd] = -(pbVar16[0xd] == 0x65);
        auVar29[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar29[0xf] = -(pbVar16[0xf] == 0x74);
        auVar41[0] = -(pbVar16[10] == 99);
        auVar41[1] = -(pbVar16[0xb] == 0x75);
        auVar41[2] = -(pbVar16[0xc] == 0x6d);
        auVar41[3] = -(pbVar16[0xd] == 0x65);
        auVar41[4] = -(pbVar16[0xe] == 0x6e);
        auVar41[5] = -(pbVar16[0xf] == 0x74);
        auVar41[6] = -(pbVar16[0x10] == 0x61);
        auVar41[7] = -(pbVar16[0x11] == 0x74);
        auVar41[8] = -(pbVar16[0x12] == 0x69);
        auVar41[9] = -(pbVar16[0x13] == 0x6f);
        auVar41[10] = -(pbVar16[0x14] == 0x6e);
        auVar41[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar41[0xc] = -(pbVar16[0x16] == 0x74);
        auVar41[0xd] = -(pbVar16[0x17] == 0x61);
        auVar41[0xe] = -(pbVar16[0x18] == 0x67);
        auVar41[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar41 = auVar41 & auVar29;
        if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar41 >> 0x3f
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
