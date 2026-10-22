/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda65110
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0da65110, 0da6533a] [0da6539f, 0da6e2ae] [0da6e3d0, 0da6e633] [0da6e656, 0da6e8a8] [0da6eab2, 0da6f01d] [0da6f05a, 0da6f104]]
 * Ghidra: FUN_0da65110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0da65110(void)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  long *in_RAX;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined4 *puVar18;
  long lVar19;
  int *piVar20;
  long in_RCX;
  long *plVar21;
  long unaff_RBX;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined *in_stack_00000040;
  undefined1 *in_stack_00000048;
  undefined1 *in_stack_00000050;
  undefined *in_stack_00000058;
  undefined *in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined1 *in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined1 uStack0000000000000098;
  undefined3 uStack0000000000000099;
  undefined2 uStack000000000000009c;
  undefined1 uStack000000000000009e;
  undefined1 uStack000000000000009f;
  undefined1 uStack00000000000000a0;
  undefined1 uStack00000000000000a1;
  undefined1 uStack00000000000000a2;
  undefined1 uStack00000000000000a3;
  undefined1 uStack00000000000000a4;
  undefined1 uStack00000000000000a5;
  undefined1 uStack00000000000000a6;
  undefined1 uStack00000000000000a7;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined1 in_stack_000000b0;
  undefined5 uStack00000000000000b1;
  undefined1 uStack00000000000000b6;
  undefined1 uStack00000000000000b7;
  undefined1 uStack00000000000000b8;
  undefined1 uStack00000000000000b9;
  undefined1 uStack00000000000000ba;
  undefined1 uStack00000000000000bb;
  undefined1 uStack00000000000000bc;
  undefined1 uStack00000000000000bd;
  undefined1 uStack00000000000000be;
  undefined1 uStack00000000000000bf;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined2 in_stack_00000128;
  undefined1 uStack000000000000012c;
  undefined1 in_stack_00000130;
  undefined1 uStack0000000000000134;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined8 in_stack_00000160;
  undefined1 uStack0000000000000168;
  undefined7 uStack0000000000000169;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  char cStack0000000000000180;
  undefined2 in_stack_00000188;
  undefined4 uStack000000000000018a;
  undefined2 uStack000000000000018e;
  undefined *in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  char cStack00000000000001c0;
  undefined7 uStack00000000000001c1;
  undefined2 in_stack_000001c8;
  undefined4 uStack00000000000001ca;
  undefined2 uStack00000000000001ce;
  undefined4 uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined4 in_stack_000002c0;
  undefined4 in_stack_000002c4;
  undefined4 in_stack_000002c8;
  undefined4 in_stack_000002cc;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined4 in_stack_00000480;
  undefined4 in_stack_00000484;
  undefined4 in_stack_00000640;
  undefined4 in_stack_00000644;
  
  if (*in_RAX != in_RCX) {
    do {
      in_RAX = in_RAX + 0xd;
    } while ((int)*in_RAX != (int)in_RCX);
  }
  *(byte *)((long)in_RAX + 0x12) = *(byte *)((long)in_RAX + 0x12) | 4;
  func_0x0dad4e80(&stack0x00000080,&stack0x00000640,&UNK_011b9970,0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f0126a0;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_05daeda0;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &UNK_05daea90;
  in_stack_00000058 = &UNK_0dad5490;
  in_stack_00000060 = &UNK_0dad55f0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0dad5190(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0dad4840(&stack0x00000080,CONCAT44(in_stack_00000644,in_stack_00000640) + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    lVar19 = *(long *)(piVar20 + 0xc);
    while ((undefined1 *)lVar19 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar19 = *(long *)(piVar20 + 0xc);
    }
LAB_0da653cf:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da653cf;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0dad4e80(&stack0x00000080,&stack0x00000500,&UNK_0123debc,0xb);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ce8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_0490ce30;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_0490cb20;
  in_stack_00000058 = &UNK_0dad57c0;
  in_stack_00000060 = &UNK_0dad5920;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0dad5190(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0dad4840(&stack0x00000080,CONCAT44(in_stack_00000644,in_stack_00000640) + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    lVar19 = *(long *)(piVar20 + 0xc);
    while ((undefined1 *)lVar19 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar19 = *(long *)(piVar20 + 0xc);
    }
LAB_0da6565f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da6565f;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0dad4e80(&stack0x00000080,&stack0x00000540,&UNK_013c6078,0xf);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ce8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_0490ce30;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_0490cb20;
  in_stack_00000058 = &UNK_0dad5b00;
  in_stack_00000060 = &UNK_0dad5c60;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0dad5190(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0dad4840(&stack0x00000080,CONCAT44(in_stack_00000644,in_stack_00000640) + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    lVar19 = *(long *)(piVar20 + 0xc);
    while ((undefined1 *)lVar19 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar19 = *(long *)(piVar20 + 0xc);
    }
LAB_0da658df:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da658df;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0dad4e80(&stack0x00000080,&stack0x00000580,&UNK_01448b3e,0x14);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ce8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_0490ce30;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_0490cb20;
  in_stack_00000058 = &UNK_0dad5e40;
  in_stack_00000060 = &UNK_0dad5fa0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0dad5190(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  uStack000000000000018a = 0;
  uStack000000000000018e = 0;
  _uStack0000000000000158 = -1;
  in_stack_00000160 = 0;
  uStack0000000000000168 = 0xff;
  _uStack0000000000000150 = &UNK_0f0edc68;
  in_stack_00000170 = 0;
  in_stack_00000178 = _DAT_014f0238;
  _cStack0000000000000180 = 0;
  in_stack_00000188 = 0;
  func_0x0da70d70(&stack0x00000480,&stack0x000004c0,&stack0x00000150);
  func_0x0dad4840(&stack0x00000080,CONCAT44(in_stack_00000484,in_stack_00000480) + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    lVar19 = *(long *)(piVar20 + 0xc);
    while ((undefined1 *)lVar19 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar19 = *(long *)(piVar20 + 0xc);
    }
LAB_0da65bef:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da65bef;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0dad4e80(&stack0x00000080,&stack0x000003c0,&UNK_013ad593,9);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ce8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_0490ce30;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_0490cb20;
  in_stack_00000058 = &UNK_0dad6180;
  in_stack_00000060 = &UNK_0dad62e0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0dad5190(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0dad4840(&stack0x00000080,CONCAT44(in_stack_00000484,in_stack_00000480) + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    lVar19 = *(long *)(piVar20 + 0xc);
    while ((undefined1 *)lVar19 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar19 = *(long *)(piVar20 + 0xc);
    }
LAB_0da65e6f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da65e6f;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0dad4e80(&stack0x00000080,&stack0x00000400,&UNK_0120912b,0xf);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f2ce5d8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_0da79540;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_0b6acf10;
  in_stack_00000058 = &UNK_0dad64c0;
  in_stack_00000060 = &UNK_0dad6720;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0dad5190(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0dad4840(&stack0x00000080,CONCAT44(in_stack_00000484,in_stack_00000480) + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    lVar19 = *(long *)(piVar20 + 0xc);
    while ((undefined1 *)lVar19 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar19 = *(long *)(piVar20 + 0xc);
    }
LAB_0da660ff:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da660ff;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0dad4e80(&stack0x00000080,&stack0x00000440,&UNK_0119dc32,0x12);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f4923a0;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_0dad9ed0;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &UNK_0dad8890;
  in_stack_00000058 = &UNK_0dad9f90;
  in_stack_00000060 = &UNK_0dada240;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0dad5190(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0dad4840(&stack0x00000080,CONCAT44(in_stack_00000484,in_stack_00000480) + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    lVar19 = *(long *)(piVar20 + 0xc);
    while ((undefined1 *)lVar19 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar19 = *(long *)(piVar20 + 0xc);
    }
LAB_0da6638f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da6638f;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0dad4e80(&stack0x00000080,&stack0x00000280,&UNK_0130b5d7,0x1f);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ce8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_0490ce30;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_0490cb20;
  in_stack_00000058 = &UNK_0dada6c0;
  in_stack_00000060 = &UNK_0dada820;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0dad5190(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  uStack00000000000001ca = 0;
  uStack00000000000001ce = 0;
  in_stack_00000198 = 0xffffffffffffffff;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = CONCAT71(in_stack_000001a8._1_7_,0xff);
  in_stack_00000190 = &UNK_0f0edc68;
  in_stack_000001b0 = 0;
  in_stack_000001b8 = _DAT_014f0238;
  _cStack00000000000001c0 = 0;
  in_stack_000001c8 = 0;
  func_0x0da70d70(&stack0x000002c0,&stack0x00000240,&stack0x00000190);
  func_0x0dad4840(&stack0x00000080,CONCAT44(in_stack_000002c4,in_stack_000002c0) + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    lVar19 = *(long *)(piVar20 + 0xc);
    while ((undefined1 *)lVar19 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar19 = *(long *)(piVar20 + 0xc);
    }
LAB_0da6665f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da6665f;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0dad4e80(&stack0x00000080,&stack0x000002c0,&UNK_0123de97,0x24);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ef8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_04906f70;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_04906c50;
  in_stack_00000058 = &UNK_0dadaa00;
  in_stack_00000060 = &UNK_0dadab60;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0dad5190(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_0127f06d,0x15);
  in_stack_00000178 = 0xbb4f619c00000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491600;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_0127f06d;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x2a);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_0127f06d >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_0127f06d >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_0127f075;
  uStack000000000000009c = (undefined2)((ulong)_UNK_0127f075 >> 0x18);
  uStack000000000000009e = 0x65;
  uStack000000000000009f = 0x72;
  uStack00000000000000a0 = 0x5f;
  uStack00000000000000a1 = 0x6c;
  uStack00000000000000a2 = 0x65;
  uStack00000000000000a3 = 0x76;
  uStack00000000000000a4 = 0x65;
  uStack00000000000000a5 = 0x6c;
  uStack00000000000000a6 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x2a);
  uStack00000000000000b1 = (undefined5)_UNK_0127f075;
  uStack00000000000000b6 = 0x65;
  uStack00000000000000b7 = 0x72;
  uStack00000000000000b8 = 0x5f;
  uStack00000000000000b9 = 0x6c;
  uStack00000000000000ba = 0x65;
  uStack00000000000000bb = 0x76;
  uStack00000000000000bc = 0x65;
  uStack00000000000000bd = 0x6c;
  uStack00000000000000be = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dab1e00;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &UNK_0dab1a80;
  in_stack_00000058 = &UNK_0dab1e20;
  in_stack_00000060 = &UNK_0dab24f0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  if ((DAT_0f7329e0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7329e0), iVar15 != 0)) {
    func_0x0dab3320();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732960,0xf53dab8);
    func_0x0410844d(&DAT_0f7329e0);
  }
  plVar21 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f732960 + 4)) * 8);
  do {
    lVar19 = *plVar21;
    if (lVar19 == -1) goto LAB_0da66a50;
    plVar21 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f732960 + 4));
  if (plVar21 == *(long **)(unaff_RBX + 0x38)) {
LAB_0da66a50:
    puVar17 = &DAT_0f732960;
    if (iRam000000000f7329c0 != -0x2b3da790) goto LAB_0da66abd;
LAB_0da66a7b:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0da66abd;
    func_0x0dadad40(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000178;
    uVar9 = _cStack0000000000000180;
  }
  else {
    puVar17 = (undefined *)plVar21[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da66a7b;
LAB_0da66abd:
    func_0x0dadad40(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000178;
    uVar9 = _cStack0000000000000180;
  }
  bVar8 = cStack0000000000000180 == '\0';
  _uStack0000000000000150 = puVar17;
  in_stack_00000178 = uVar5;
  _cStack0000000000000180 = uVar9;
  if (bVar8) {
    uStack0000000000000150 = SUB84(puVar17,0);
    uStack0000000000000154 = (undefined4)((ulong)puVar17 >> 0x20);
    uStack000000000000015c = (undefined4)((ulong)_uStack0000000000000158 >> 0x20);
    in_stack_000001e8 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
    uStack00000000000001d0 = uStack0000000000000150;
    uStack00000000000001d4 = uStack0000000000000154;
    uStack00000000000001d8 = uStack0000000000000158;
    uStack00000000000001dc = uStack000000000000015c;
    in_stack_000001e0 = in_stack_00000160;
    in_stack_000001f0 = in_stack_00000170;
    func_0x0dadb330(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da66b9f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da66b9f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadb8e0(&stack0x00000080,&stack0x000001d0,&UNK_013e05f5,0xc);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef44b00;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_048b3f30;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &SUB_048b2190;
    in_stack_00000058 = &UNK_0dadbef0;
    in_stack_00000060 = &UNK_0dadc0b0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dadbbf0(&stack0x00000080);
    _cStack00000000000001c0 = CONCAT71(uStack00000000000001c1,(char)uVar9);
    in_stack_000001b0 = in_stack_000001f0;
    in_stack_000001a0 = in_stack_000001e0;
    in_stack_000001a8 = in_stack_000001e8;
    in_stack_00000190 = (undefined *)CONCAT44(uStack00000000000001d4,uStack00000000000001d0);
    in_stack_00000198 = CONCAT44(uStack00000000000001dc,uStack00000000000001d8);
    in_stack_000001b8 = uVar5;
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dadb330(&stack0x00000080,(long)in_stack_00000190 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da66dff:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da66dff;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadb8e0(&stack0x00000080,&stack0x00000190,&UNK_0119dc14,0x1d);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef46ce8;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_0490ce30;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &SUB_0490cb20;
    in_stack_00000058 = &UNK_0dadc280;
    in_stack_00000060 = &UNK_0dadc3e0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dadbbf0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
  }
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_01333b6c,0x10);
  in_stack_00000178 = 0x6bdfd6a00000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491698;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_01333b6c;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x20);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_01333b6c >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_01333b6c >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_01333b74;
  uStack000000000000009c = (undefined2)((ulong)_UNK_01333b74 >> 0x18);
  uStack000000000000009e = (undefined1)((ulong)_UNK_01333b74 >> 0x28);
  uStack000000000000009f = (undefined1)((ulong)_UNK_01333b74 >> 0x30);
  uStack00000000000000a0 = (undefined1)((ulong)_UNK_01333b74 >> 0x38);
  uStack00000000000000a1 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x20);
  uStack00000000000000b1 = (undefined5)_UNK_01333b74;
  uStack00000000000000b9 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  uStack00000000000000b6 = uStack000000000000009e;
  uStack00000000000000b7 = uStack000000000000009f;
  uStack00000000000000b8 = uStack00000000000000a0;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dab3550;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &UNK_0dab3260;
  in_stack_00000058 = &UNK_0dab3570;
  in_stack_00000060 = &UNK_0dab3c40;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  if ((DAT_0f732a98 == '\0') && (iVar15 = func_0x04108328(&DAT_0f732a98), iVar15 != 0)) {
    func_0x0dab49f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732a18,0xf53dab8);
    func_0x0410844d(&DAT_0f732a98);
  }
  plVar21 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f732a18 + 4)) * 8);
  do {
    lVar19 = *plVar21;
    if (lVar19 == -1) goto LAB_0da671d0;
    plVar21 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f732a18 + 4));
  if (plVar21 == *(long **)(unaff_RBX + 0x38)) {
LAB_0da671d0:
    puVar17 = &DAT_0f732a18;
    if (iRam000000000f732a78 != -0x2b3da790) goto LAB_0da6723d;
LAB_0da671fb:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0da6723d;
    func_0x0dadd260(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000160;
    uVar9 = in_stack_00000170;
    uVar10 = in_stack_00000178;
    uVar11 = _cStack0000000000000180;
  }
  else {
    puVar17 = (undefined *)plVar21[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da671fb;
LAB_0da6723d:
    func_0x0dadd260(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000160;
    uVar9 = in_stack_00000170;
    uVar10 = in_stack_00000178;
    uVar11 = _cStack0000000000000180;
  }
  bVar8 = cStack0000000000000180 == '\0';
  _uStack0000000000000150 = puVar17;
  in_stack_00000160 = uVar5;
  in_stack_00000170 = uVar9;
  in_stack_00000178 = uVar10;
  _cStack0000000000000180 = uVar11;
  if (bVar8) {
    uStack0000000000000150 = SUB84(puVar17,0);
    in_stack_000002c0 = uStack0000000000000150;
    uStack0000000000000154 = (undefined4)((ulong)puVar17 >> 0x20);
    in_stack_000002c4 = uStack0000000000000154;
    in_stack_000002c8 = uStack0000000000000158;
    uStack000000000000015c = (undefined4)((ulong)_uStack0000000000000158 >> 0x20);
    in_stack_000002cc = uStack000000000000015c;
    in_stack_000002d8 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
    func_0x0dadd850(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da673ef:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da673ef;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadde00(&stack0x00000080,&stack0x00000240,&UNK_01410416,4);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef44b00;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_048b3f30;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &SUB_048b2190;
    in_stack_00000058 = &UNK_0dade3b0;
    in_stack_00000060 = &UNK_0dade570;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dade0b0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    uStack00000000000001d0 = in_stack_000002c0;
    uStack00000000000001d4 = in_stack_000002c4;
    uStack00000000000001d8 = in_stack_000002c8;
    uStack00000000000001dc = in_stack_000002cc;
    in_stack_000001e0 = uVar5;
    in_stack_000001e8 = in_stack_000002d8;
    in_stack_000001f0 = uVar9;
    func_0x0dadd850(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da6768f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da6768f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadde00(&stack0x00000080,&stack0x000001d0,&UNK_01448b53,0x11);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef46ef8;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_04906f70;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &SUB_04906c50;
    in_stack_00000058 = &UNK_0dade740;
    in_stack_00000060 = &UNK_0dade8a0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dade0b0(&stack0x00000080);
    _cStack00000000000001c0 = CONCAT71(uStack00000000000001c1,(char)uVar11);
    in_stack_000001b0 = in_stack_000001f0;
    in_stack_000001a0 = in_stack_000001e0;
    in_stack_000001a8 = in_stack_000001e8;
    in_stack_00000190 = (undefined *)CONCAT44(uStack00000000000001d4,uStack00000000000001d0);
    in_stack_00000198 = CONCAT44(uStack00000000000001dc,uStack00000000000001d8);
    in_stack_000001b8 = uVar10;
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dadd850(&stack0x00000080,(long)in_stack_00000190 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da678ef:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da678ef;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadde00(&stack0x00000080,&stack0x00000190,&UNK_0130b5f7,9);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef46ce8;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_0490ce30;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &SUB_0490cb20;
    in_stack_00000058 = &UNK_0dadea80;
    in_stack_00000060 = &UNK_0dadebe0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dade0b0(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    in_stack_000002d0 = uVar5;
    in_stack_000002e0 = uVar9;
  }
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&UNK_014a20a6,0xe);
  in_stack_00000178 = 0x2eb8819700000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491720;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090 = 0x6e696d1c;
  uStack0000000000000094 = 0x61726365;
  _uStack0000000000000098 = 0x623a7466;
  uStack000000000000009c = 0x736f;
  uStack000000000000009e = 0x73;
  uStack000000000000009f = 0;
  in_stack_000000a8 = 0x6e696d1c;
  uStack00000000000000ac = 0x61726365;
  in_stack_000000b0 = 0x66;
  uStack00000000000000b1 = 0x736f623a74;
  uStack00000000000000b6 = 0x73;
  uStack00000000000000b7 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dab4c20;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &UNK_0dab4930;
  in_stack_00000058 = &UNK_0dab4c40;
  in_stack_00000060 = &UNK_0dab5310;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  if ((DAT_0f732b50 == '\0') && (iVar15 = func_0x04108328(&DAT_0f732b50), iVar15 != 0)) {
    func_0x0dab5ec0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732ad0,0xf53dab8);
    func_0x0410844d(&DAT_0f732b50);
  }
  plVar21 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f732ad0 + 4)) * 8);
  do {
    lVar19 = *plVar21;
    if (lVar19 == -1) goto LAB_0da67ce0;
    plVar21 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f732ad0 + 4));
  if (plVar21 == *(long **)(unaff_RBX + 0x38)) {
LAB_0da67ce0:
    puVar17 = &DAT_0f732ad0;
    if (iRam000000000f732b30 != -0x2b3da790) goto LAB_0da67d4d;
LAB_0da67d0b:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0da67d4d;
    func_0x0dadf620(&stack0x00000190);
  }
  else {
    puVar17 = (undefined *)plVar21[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da67d0b;
LAB_0da67d4d:
    func_0x0dadf620(&stack0x00000190);
  }
  if (cStack00000000000001c0 == '\0') {
    func_0x0dadfc10(&stack0x00000080,(long)in_stack_00000190 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da67e8f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da67e8f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae0180(&stack0x00000080,&stack0x00000280,&UNK_013c2ccd,5);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae0700;
    in_stack_00000060 = &UNK_0dae0860;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae0400(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    uStack000000000000018a = 0;
    uStack000000000000018e = 0;
    _uStack0000000000000158 = -1;
    in_stack_00000160 = 0;
    uStack0000000000000168 = 0xff;
    _uStack0000000000000150 = &UNK_0f0edc68;
    in_stack_00000170 = CONCAT44(_UNK_014e8be4,_DAT_014e8be0);
    in_stack_00000178 = CONCAT44(_UNK_014e8bec,_UNK_014e8be8);
    _cStack0000000000000180 = 0;
    in_stack_00000188 = 0;
    func_0x0da71140(&stack0x000002c0,&stack0x00000240,&stack0x00000150);
    func_0x0dadfc10(&stack0x00000080,CONCAT44(in_stack_000002c4,in_stack_000002c0) + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da6816f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da6816f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae0180(&stack0x00000080,&stack0x000002c0,&UNK_013c2cd3,6);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae0a30;
    in_stack_00000060 = &UNK_0dae0b90;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae0400(&stack0x00000080);
    uStack00000000000001d0 = in_stack_000002c0;
    uStack00000000000001d4 = in_stack_000002c4;
    uStack00000000000001d8 = in_stack_000002c8;
    uStack00000000000001dc = in_stack_000002cc;
    in_stack_000001e0 = in_stack_000002d0;
    in_stack_000001e8 = in_stack_000002d8;
    in_stack_000001f0 = in_stack_000002e0;
    func_0x048b0bc0(&stack0x00000098);
    uStack00000000000000ba = 0;
    uStack00000000000000bb = 0;
    uStack00000000000000bc = 0;
    uStack00000000000000bd = 0;
    uStack00000000000000be = 0;
    uStack00000000000000bf = 0;
    in_stack_00000088 = (undefined1 *)0xffffffffffffffff;
    uStack0000000000000090 = 0;
    uStack0000000000000094 = 0;
    _uStack0000000000000098 = CONCAT31(uStack0000000000000099,0xff);
    in_stack_00000080 = (undefined8 *)&UNK_0f0edc68;
    uStack00000000000000a0 = (undefined1)_DAT_014e8be0;
    uStack00000000000000a1 = (undefined1)((uint)_DAT_014e8be0 >> 8);
    uStack00000000000000a2 = (undefined1)((uint)_DAT_014e8be0 >> 0x10);
    uStack00000000000000a3 = (undefined1)((uint)_DAT_014e8be0 >> 0x18);
    uStack00000000000000a4 = (undefined1)_UNK_014e8be4;
    uStack00000000000000a5 = (undefined1)((uint)_UNK_014e8be4 >> 8);
    uStack00000000000000a6 = (undefined1)((uint)_UNK_014e8be4 >> 0x10);
    uStack00000000000000a7 = (undefined1)((uint)_UNK_014e8be4 >> 0x18);
    in_stack_000000a8 = _UNK_014e8be8;
    uStack00000000000000ac = _UNK_014e8bec;
    in_stack_000000b0 = 0;
    uStack00000000000000b1 = 0;
    uStack00000000000000b6 = 0;
    uStack00000000000000b7 = 0;
    uStack00000000000000b8 = 0;
    uStack00000000000000b9 = 0;
    func_0x0da71140(&stack0x00000018,&stack0x000001d0,&stack0x00000080);
  }
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_011e093f,0x17);
  in_stack_00000178 = 0xf129c86c00000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f4917a8;
  in_stack_00000088 = (undefined1 *)0x0;
  in_stack_00000080 = puVar16;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar13 = _UNK_011e094b;
  uVar12 = _UNK_011e0947;
  uVar6 = _UNK_011e0943;
  uStack00000000000000a0 = SUB81(puVar18,0);
  uStack00000000000000a1 = (undefined1)((ulong)puVar18 >> 8);
  uStack00000000000000a2 = (undefined1)((ulong)puVar18 >> 0x10);
  uStack00000000000000a3 = (undefined1)((ulong)puVar18 >> 0x18);
  uStack00000000000000a4 = (undefined1)((ulong)puVar18 >> 0x20);
  uStack00000000000000a5 = (undefined1)((ulong)puVar18 >> 0x28);
  uStack00000000000000a6 = (undefined1)((ulong)puVar18 >> 0x30);
  uStack00000000000000a7 = (undefined1)((ulong)puVar18 >> 0x38);
  uStack0000000000000090 = 0x1b;
  uStack0000000000000094 = 0;
  _uStack0000000000000098 = 0x17;
  uStack000000000000009c = 0;
  uStack000000000000009e = 0;
  uStack000000000000009f = 0;
  *puVar18 = _DAT_011e093f;
  puVar18[1] = uVar6;
  puVar18[2] = uVar12;
  puVar18[3] = uVar13;
  *(undefined8 *)((long)puVar18 + 0xf) = 0x786f625f6e6f6973;
  *(undefined1 *)((long)puVar18 + 0x17) = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uStack00000000000000b8 = SUB81(puVar16,0);
  uStack00000000000000b9 = (undefined1)((ulong)puVar16 >> 8);
  uStack00000000000000ba = (undefined1)((ulong)puVar16 >> 0x10);
  uStack00000000000000bb = (undefined1)((ulong)puVar16 >> 0x18);
  uStack00000000000000bc = (undefined1)((ulong)puVar16 >> 0x20);
  uStack00000000000000bd = (undefined1)((ulong)puVar16 >> 0x28);
  uStack00000000000000be = (undefined1)((ulong)puVar16 >> 0x30);
  uStack00000000000000bf = (undefined1)((ulong)puVar16 >> 0x38);
  in_stack_000000a8 = 0x1b;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x17;
  uStack00000000000000b1 = 0;
  uStack00000000000000b6 = 0;
  uStack00000000000000b7 = 0;
  uVar5 = CONCAT44(_UNK_011e094b,_UNK_011e0947);
  *puVar16 = CONCAT44(_UNK_011e0943,_DAT_011e093f);
  puVar16[1] = uVar5;
  *(undefined8 *)((long)puVar16 + 0xf) = 0x786f625f6e6f6973;
  *(undefined1 *)((long)puVar16 + 0x17) = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000f0 = 0x3f600000;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dab60d0;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &UNK_0dab5e00;
  in_stack_00000058 = &UNK_0dab60f0;
  in_stack_00000060 = &UNK_0dab68d0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  if ((DAT_0f732c08 == '\0') && (iVar15 = func_0x04108328(&DAT_0f732c08), iVar15 != 0)) {
    func_0x0dab7430();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732b88,0xf53dab8);
    func_0x0410844d(&DAT_0f732c08);
  }
  plVar21 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f732b88 + 4)) * 8);
  do {
    lVar19 = *plVar21;
    if (lVar19 == -1) goto LAB_0da68670;
    plVar21 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f732b88 + 4));
  if (plVar21 == *(long **)(unaff_RBX + 0x38)) {
LAB_0da68670:
    puVar17 = &DAT_0f732b88;
    if (iRam000000000f732be8 != -0x2b3da790) goto LAB_0da686dd;
LAB_0da6869b:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0da686dd;
    func_0x0dae0d70(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000178;
    uVar9 = _cStack0000000000000180;
  }
  else {
    puVar17 = (undefined *)plVar21[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da6869b;
LAB_0da686dd:
    func_0x0dae0d70(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000178;
    uVar9 = _cStack0000000000000180;
  }
  bVar8 = cStack0000000000000180 == '\0';
  _uStack0000000000000150 = puVar17;
  in_stack_00000178 = uVar5;
  _cStack0000000000000180 = uVar9;
  if (bVar8) {
    uStack0000000000000150 = SUB84(puVar17,0);
    uStack0000000000000154 = (undefined4)((ulong)puVar17 >> 0x20);
    uStack000000000000015c = (undefined4)((ulong)_uStack0000000000000158 >> 0x20);
    in_stack_000001e8 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
    uStack00000000000001d0 = uStack0000000000000150;
    uStack00000000000001d4 = uStack0000000000000154;
    uStack00000000000001d8 = uStack0000000000000158;
    uStack00000000000001dc = uStack000000000000015c;
    in_stack_000001e0 = in_stack_00000160;
    in_stack_000001f0 = in_stack_00000170;
    func_0x0dae1360(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da6881f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da6881f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae18d0(&stack0x00000080,&stack0x000001d0,&UNK_011b1492,0xf);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef46ce8;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_0490ce30;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &SUB_0490cb20;
    in_stack_00000058 = &UNK_0dae1e80;
    in_stack_00000060 = &UNK_0dae1fe0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae1b80(&stack0x00000080);
    _cStack00000000000001c0 = CONCAT71(uStack00000000000001c1,(char)uVar9);
    in_stack_000001b0 = in_stack_000001f0;
    in_stack_000001a0 = in_stack_000001e0;
    in_stack_000001a8 = in_stack_000001e8;
    in_stack_00000190 = (undefined *)CONCAT44(uStack00000000000001d4,uStack00000000000001d0);
    in_stack_00000198 = CONCAT44(uStack00000000000001dc,uStack00000000000001d8);
    in_stack_000001b8 = uVar5;
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dae1360(&stack0x00000080,(long)in_stack_00000190 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da68a7f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da68a7f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae18d0(&stack0x00000080,&stack0x00000190,&UNK_01425a66,0x11);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae21b0;
    in_stack_00000060 = &UNK_0dae2310;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae1b80(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
  }
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_0139eefa,0x1a);
  in_stack_00000178 = 0x304f457200000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491830;
  in_stack_00000088 = (undefined1 *)0x0;
  in_stack_00000080 = puVar16;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_0139ef0c;
  uStack00000000000000a0 = SUB81(puVar18,0);
  uStack00000000000000a1 = (undefined1)((ulong)puVar18 >> 8);
  uStack00000000000000a2 = (undefined1)((ulong)puVar18 >> 0x10);
  uStack00000000000000a3 = (undefined1)((ulong)puVar18 >> 0x18);
  uStack00000000000000a4 = (undefined1)((ulong)puVar18 >> 0x20);
  uStack00000000000000a5 = (undefined1)((ulong)puVar18 >> 0x28);
  uStack00000000000000a6 = (undefined1)((ulong)puVar18 >> 0x30);
  uStack00000000000000a7 = (undefined1)((ulong)puVar18 >> 0x38);
  uStack0000000000000090 = 0x21;
  uStack0000000000000094 = 0;
  _uStack0000000000000098 = 0x1a;
  uStack000000000000009c = 0;
  uStack000000000000009e = 0;
  uStack000000000000009f = 0;
  *(ulong *)((long)puVar18 + 10) = CONCAT26(_UNK_0139ef0a,CONCAT42(_UNK_0139ef06,_DAT_0139ef04));
  *(undefined8 *)((long)puVar18 + 0x12) = uVar5;
  uVar13 = _UNK_0139ef06;
  uVar12 = _UNK_0139eefe;
  uVar6 = CONCAT22(_DAT_0139ef04,_UNK_0139ef02);
  *puVar18 = _DAT_0139eefa;
  puVar18[1] = uVar12;
  puVar18[2] = uVar6;
  puVar18[3] = uVar13;
  *(undefined1 *)((long)puVar18 + 0x1a) = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_0139ef0c;
  uStack00000000000000b8 = SUB81(puVar16,0);
  uStack00000000000000b9 = (undefined1)((ulong)puVar16 >> 8);
  uStack00000000000000ba = (undefined1)((ulong)puVar16 >> 0x10);
  uStack00000000000000bb = (undefined1)((ulong)puVar16 >> 0x18);
  uStack00000000000000bc = (undefined1)((ulong)puVar16 >> 0x20);
  uStack00000000000000bd = (undefined1)((ulong)puVar16 >> 0x28);
  uStack00000000000000be = (undefined1)((ulong)puVar16 >> 0x30);
  uStack00000000000000bf = (undefined1)((ulong)puVar16 >> 0x38);
  in_stack_000000a8 = 0x21;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x1a;
  uStack00000000000000b1 = 0;
  uStack00000000000000b6 = 0;
  uStack00000000000000b7 = 0;
  *(ulong *)((long)puVar16 + 10) = CONCAT26(_UNK_0139ef0a,CONCAT42(_UNK_0139ef06,_DAT_0139ef04));
  *(undefined8 *)((long)puVar16 + 0x12) = uVar5;
  uVar5 = CONCAT44(_UNK_0139ef06,CONCAT22(_DAT_0139ef04,_UNK_0139ef02));
  *puVar16 = CONCAT44(_UNK_0139eefe,_DAT_0139eefa);
  puVar16[1] = uVar5;
  *(undefined1 *)((long)puVar16 + 0x1a) = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000f0 = 0x3f600000;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dab7640;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &UNK_0dab7370;
  in_stack_00000058 = &UNK_0dab7660;
  in_stack_00000060 = &UNK_0dab7e40;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  if ((DAT_0f732cc0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f732cc0), iVar15 != 0)) {
    func_0x0dab8af0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732c40,0xf53dab8);
    func_0x0410844d(&DAT_0f732cc0);
  }
  plVar21 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f732c40 + 4)) * 8);
  do {
    lVar19 = *plVar21;
    if (lVar19 == -1) goto LAB_0da68ed0;
    plVar21 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f732c40 + 4));
  if (plVar21 == *(long **)(unaff_RBX + 0x38)) {
LAB_0da68ed0:
    puVar17 = &DAT_0f732c40;
    if (iRam000000000f732ca0 != -0x2b3da790) goto LAB_0da68f3d;
LAB_0da68efb:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0da68f3d;
    func_0x0dae24f0(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000160;
    uVar9 = in_stack_00000170;
    uVar10 = in_stack_00000178;
    uVar11 = _cStack0000000000000180;
  }
  else {
    puVar17 = (undefined *)plVar21[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da68efb;
LAB_0da68f3d:
    func_0x0dae24f0(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000160;
    uVar9 = in_stack_00000170;
    uVar10 = in_stack_00000178;
    uVar11 = _cStack0000000000000180;
  }
  bVar8 = cStack0000000000000180 == '\0';
  _uStack0000000000000150 = puVar17;
  in_stack_00000160 = uVar5;
  in_stack_00000170 = uVar9;
  in_stack_00000178 = uVar10;
  _cStack0000000000000180 = uVar11;
  if (bVar8) {
    uStack0000000000000150 = SUB84(puVar17,0);
    uVar6 = uStack0000000000000150;
    uStack0000000000000154 = (undefined4)((ulong)puVar17 >> 0x20);
    uVar12 = uStack0000000000000154;
    uVar13 = uStack0000000000000158;
    uStack000000000000015c = (undefined4)((ulong)_uStack0000000000000158 >> 0x20);
    uVar14 = uStack000000000000015c;
    uVar7 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
    func_0x0dae2ae0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da6907f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da6907f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x00000500,&UNK_0124bea2,4);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae3650;
    in_stack_00000060 = &UNK_0dae37b0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dae2ae0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da6931f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da6931f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x00000540,&UNK_012f55b6,4);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae3980;
    in_stack_00000060 = &UNK_0dae3ae0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dae2ae0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da695af:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da695af;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x00000580,&UNK_0139ef64,0xb);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae3cc0;
    in_stack_00000060 = &UNK_0dae3e20;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dae2ae0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da6983f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da6983f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x00000480,&UNK_01265757,4);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae4000;
    in_stack_00000060 = &UNK_0dae4160;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dae2ae0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da69acf:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da69acf;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x00000380,&UNK_01292be9,6);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae4340;
    in_stack_00000060 = &UNK_0dae44a0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dae2ae0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da69d5f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da69d5f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x00000300,&UNK_013294c4,6);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae4680;
    in_stack_00000060 = &UNK_0dae47e0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dae2ae0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da69fef:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da69fef;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x00000340,&UNK_014d77bd,4);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae49c0;
    in_stack_00000060 = &UNK_0dae4b20;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dae2ae0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da6a27f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da6a27f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x00000240,&UNK_014a254e,6);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae4d00;
    in_stack_00000060 = &UNK_0dae4e60;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
    uStack00000000000001d0 = uVar6;
    uStack00000000000001d4 = uVar12;
    uStack00000000000001d8 = uVar13;
    uStack00000000000001dc = uVar14;
    in_stack_000001e0 = uVar5;
    in_stack_000001e8 = uVar7;
    in_stack_000001f0 = uVar9;
    func_0x0dae2ae0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da6a50f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da6a50f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x000001d0,&UNK_0122c1d6,4);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae5040;
    in_stack_00000060 = &UNK_0dae51a0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    _cStack00000000000001c0 = CONCAT71(uStack00000000000001c1,(char)uVar11);
    in_stack_000001b0 = in_stack_000001f0;
    in_stack_000001a0 = in_stack_000001e0;
    in_stack_000001a8 = in_stack_000001e8;
    in_stack_00000190 = (undefined *)CONCAT44(uStack00000000000001d4,uStack00000000000001d0);
    in_stack_00000198 = CONCAT44(uStack00000000000001dc,uStack00000000000001d8);
    in_stack_000001b8 = uVar10;
    func_0x048b0bc0(&stack0x00000098);
    func_0x0dae2ae0(&stack0x00000080,(long)in_stack_00000190 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined1 *)lVar19 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0da6a75f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (iVar15 == 1) {
        piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78
                                     ) + 0x48);
        iVar15 = *piVar20;
        while (iVar15 != _uStack0000000000000098) {
          piVar20 = piVar20 + 0x1a;
          iVar15 = *piVar20;
        }
        goto LAB_0da6a75f;
      }
      if (iVar15 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(&stack0x00000080,&stack0x00000190,&UNK_0143bb4a,5);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0126a0;
    plVar21 = (long *)CONCAT17(uStack000000000000009f,
                               CONCAT16(uStack000000000000009e,
                                        CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
    _uStack0000000000000098 = (int)puVar16;
    uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
    uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
    uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    in_stack_00000018 = uStack0000000000000090;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    in_stack_00000040 = &UNK_05daeda0;
    in_stack_00000048 = &SUB_048b06d0;
    in_stack_00000050 = &UNK_05daea90;
    in_stack_00000058 = &UNK_0dae5380;
    in_stack_00000060 = &UNK_0dae54e0;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = (long *)0x0;
    func_0x048b05a0(in_stack_00000088,&stack0x00000018);
    plVar21 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000078 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0dae3350(&stack0x00000080);
    func_0x048b0bc0(&stack0x00000098);
  }
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_01333a4c,0x1b);
  in_stack_00000178 = 0x7ffd445100000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f4918b8;
  in_stack_00000088 = (undefined1 *)0x0;
  in_stack_00000080 = puVar16;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_01333a5f;
  uStack00000000000000a0 = SUB81(puVar18,0);
  uStack00000000000000a1 = (undefined1)((ulong)puVar18 >> 8);
  uStack00000000000000a2 = (undefined1)((ulong)puVar18 >> 0x10);
  uStack00000000000000a3 = (undefined1)((ulong)puVar18 >> 0x18);
  uStack00000000000000a4 = (undefined1)((ulong)puVar18 >> 0x20);
  uStack00000000000000a5 = (undefined1)((ulong)puVar18 >> 0x28);
  uStack00000000000000a6 = (undefined1)((ulong)puVar18 >> 0x30);
  uStack00000000000000a7 = (undefined1)((ulong)puVar18 >> 0x38);
  uStack0000000000000090 = 0x21;
  uStack0000000000000094 = 0;
  _uStack0000000000000098 = 0x1b;
  uStack000000000000009c = 0;
  uStack000000000000009e = 0;
  uStack000000000000009f = 0;
  *(ulong *)((long)puVar18 + 0xb) = CONCAT35(_UNK_01333a5c,CONCAT41(_UNK_01333a58,DAT_01333a57));
  *(undefined8 *)((long)puVar18 + 0x13) = uVar5;
  uVar13 = _UNK_01333a58;
  uVar12 = _UNK_01333a54;
  uVar6 = _UNK_01333a50;
  *puVar18 = _DAT_01333a4c;
  puVar18[1] = uVar6;
  puVar18[2] = uVar12;
  puVar18[3] = uVar13;
  *(undefined1 *)((long)puVar18 + 0x1b) = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_01333a5f;
  uStack00000000000000b8 = SUB81(puVar16,0);
  uStack00000000000000b9 = (undefined1)((ulong)puVar16 >> 8);
  uStack00000000000000ba = (undefined1)((ulong)puVar16 >> 0x10);
  uStack00000000000000bb = (undefined1)((ulong)puVar16 >> 0x18);
  uStack00000000000000bc = (undefined1)((ulong)puVar16 >> 0x20);
  uStack00000000000000bd = (undefined1)((ulong)puVar16 >> 0x28);
  uStack00000000000000be = (undefined1)((ulong)puVar16 >> 0x30);
  uStack00000000000000bf = (undefined1)((ulong)puVar16 >> 0x38);
  in_stack_000000a8 = 0x21;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x1b;
  uStack00000000000000b1 = 0;
  uStack00000000000000b6 = 0;
  uStack00000000000000b7 = 0;
  *(ulong *)((long)puVar16 + 0xb) = CONCAT35(_UNK_01333a5c,CONCAT41(_UNK_01333a58,DAT_01333a57));
  *(undefined8 *)((long)puVar16 + 0x13) = uVar5;
  uVar5 = CONCAT44(_UNK_01333a58,_UNK_01333a54);
  *puVar16 = CONCAT44(_UNK_01333a50,_DAT_01333a4c);
  puVar16[1] = uVar5;
  *(undefined1 *)((long)puVar16 + 0x1b) = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000f0 = 0x3f600000;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dab8d30;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &UNK_0dab8a30;
  in_stack_00000058 = &UNK_0dab8d50;
  in_stack_00000060 = &UNK_0dab9420;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0da71510();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_01486ac4,0x12);
  in_stack_00000178 = 0x7782b8b100000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491940;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_01486ac4;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x24);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_01486ac4 >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_01486ac4 >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_01486acc;
  uStack000000000000009c = (undefined2)((ulong)_UNK_01486acc >> 0x18);
  uStack000000000000009e = (undefined1)((ulong)_UNK_01486acc >> 0x28);
  uStack000000000000009f = (undefined1)((ulong)_UNK_01486acc >> 0x30);
  uStack00000000000000a0 = (undefined1)((ulong)_UNK_01486acc >> 0x38);
  uStack00000000000000a1 = 0x6e;
  uStack00000000000000a2 = 0x67;
  uStack00000000000000a3 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x24);
  uStack00000000000000b1 = (undefined5)_UNK_01486acc;
  uStack00000000000000b9 = 0x6e;
  uStack00000000000000ba = 0x67;
  uStack00000000000000bb = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  uStack00000000000000b6 = uStack000000000000009e;
  uStack00000000000000b7 = uStack000000000000009f;
  uStack00000000000000b8 = uStack00000000000000a0;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0daba3f0;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &UNK_0daba0f0;
  in_stack_00000058 = &UNK_0daba410;
  in_stack_00000060 = &UNK_0dabaae0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8a5280();
  func_0x0e4db7a0();
  if ((DAT_0f732e30 == '\0') && (iVar15 = func_0x04108328(&DAT_0f732e30), iVar15 != 0)) {
    func_0x0dabbbc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732db0,0xf53dab8);
    func_0x0410844d(&DAT_0f732e30);
  }
  plVar21 = (long *)(*(long *)(unaff_RBX + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBX + 0x20) - *(long *)(unaff_RBX + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f732db0 + 4)) * 8);
  do {
    lVar19 = *plVar21;
    if (lVar19 == -1) goto LAB_0da6ae00;
    plVar21 = (long *)(*(long *)(unaff_RBX + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBX + 0x30) + 8 + lVar19 * 0x18) !=
           *(uint *)(_DAT_0f732db0 + 4));
  if (plVar21 == *(long **)(unaff_RBX + 0x38)) {
LAB_0da6ae00:
    puVar17 = &DAT_0f732db0;
    if (iRam000000000f732e10 != -0x2b3da790) goto LAB_0da6ae6d;
LAB_0da6ae2b:
    if (*(long *)(puVar17 + 0x68) == 0) goto LAB_0da6ae6d;
    func_0x0daea2f0(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000160;
    uVar9 = in_stack_00000170;
    uVar10 = in_stack_00000178;
    uVar11 = _cStack0000000000000180;
  }
  else {
    puVar17 = (undefined *)plVar21[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da6ae2b;
LAB_0da6ae6d:
    func_0x0daea2f0(&stack0x00000150);
    puVar17 = _uStack0000000000000150;
    uVar5 = in_stack_00000160;
    uVar9 = in_stack_00000170;
    uVar10 = in_stack_00000178;
    uVar11 = _cStack0000000000000180;
  }
  bVar8 = cStack0000000000000180 != '\0';
  _uStack0000000000000150 = puVar17;
  in_stack_00000160 = uVar5;
  in_stack_00000170 = uVar9;
  in_stack_00000178 = uVar10;
  _cStack0000000000000180 = uVar11;
  if (bVar8) goto LAB_0da6c182;
  uStack0000000000000150 = SUB84(puVar17,0);
  uVar6 = uStack0000000000000150;
  uStack0000000000000154 = (undefined4)((ulong)puVar17 >> 0x20);
  uVar12 = uStack0000000000000154;
  uVar13 = uStack0000000000000158;
  uStack000000000000015c = (undefined4)((ulong)_uStack0000000000000158 >> 0x20);
  uVar14 = uStack000000000000015c;
  uVar7 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  if ((DAT_0f732d98 == '\0') && (iVar15 = func_0x04108328(&DAT_0f732d98), iVar15 != 0)) {
    func_0x0dabba80();
    func_0x0410844d(&DAT_0f732d98);
  }
  if ((DAT_0f72c370 == '\0') && (iVar15 = func_0x04108328(&DAT_0f72c370), iVar15 != 0)) {
    func_0x0d8b8690(0xf72c358);
    func_0x0410844d(&DAT_0f72c370);
  }
  in_stack_00000080 = (undefined8 *)CONCAT44(in_stack_00000080._4_4_,_DAT_0f72c35c);
  in_stack_00000088 = &SUB_0d8b84a0;
  uStack0000000000000090 = 0xdaeaf10;
  uStack0000000000000094 = 0;
  func_0x05da1460(&stack0x000004c8);
  lVar19 = func_0x0d8b84a0(puVar17 + 0x18);
  if ((*(byte *)(lVar19 + 0x1a) & 4) != 0) {
    func_0x0daea8e0(&stack0x00000080,puVar17 + 0x18);
    iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c)
                     );
    if (iVar15 == 2) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x60);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x16;
        iVar15 = *piVar20;
      }
      puVar4 = *(undefined1 **)(piVar20 + 0xc);
      while (puVar4 != in_stack_00000088) {
        piVar20 = *(int **)(piVar20 + 0xe);
        puVar4 = *(undefined1 **)(piVar20 + 0xc);
      }
    }
    else {
      if (iVar15 != 1) {
        if (iVar15 == 0) {
          puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
          *puVar2 = *puVar2 | 0x40000;
        }
        goto LAB_0da6b043;
      }
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
    }
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
LAB_0da6b043:
  func_0x0daea8e0(&stack0x00000080,puVar17 + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    puVar4 = *(undefined1 **)(piVar20 + 0xc);
    while (puVar4 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar4 = *(undefined1 **)(piVar20 + 0xc);
    }
LAB_0da6b0ff:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da6b0ff;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(&stack0x00000080,&stack0x00000480,&UNK_0145f6ec,0x10,0x10);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f0126a0;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_05daeda0;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &UNK_05daea90;
  in_stack_00000058 = &UNK_0daeb540;
  in_stack_00000060 = &UNK_0daeb6a0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0daeb240(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daeaf20(&stack0x00000080,&stack0x00000380,&UNK_0119d269,0xd,0);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f0122d0;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_05de9430;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &UNK_05de9110;
  in_stack_00000058 = &UNK_0daeb880;
  in_stack_00000060 = &UNK_0daeb9f0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0daeb240(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daea8e0(&stack0x00000080,puVar17 + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    puVar4 = *(undefined1 **)(piVar20 + 0xc);
    while (puVar4 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar4 = *(undefined1 **)(piVar20 + 0xc);
    }
LAB_0da6b55f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da6b55f;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(&stack0x00000080,&stack0x00000300,&UNK_0123d56f,0xc,0x10);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ce8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_0490ce30;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_0490cb20;
  in_stack_00000058 = &UNK_0daebbd0;
  in_stack_00000060 = &UNK_0daebd30;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0daeb240(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daea8e0(&stack0x00000080,puVar17 + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    puVar4 = *(undefined1 **)(piVar20 + 0xc);
    while (puVar4 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar4 = *(undefined1 **)(piVar20 + 0xc);
    }
LAB_0da6b7ff:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da6b7ff;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(&stack0x00000080,&stack0x00000340,&UNK_013ecc40,0x1d,0x10);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ef8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_04906f70;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_04906c50;
  in_stack_00000058 = &UNK_0daebf10;
  in_stack_00000060 = &UNK_0daec070;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0daeb240(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daea8e0(&stack0x00000080,puVar17 + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    puVar4 = *(undefined1 **)(piVar20 + 0xc);
    while (puVar4 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar4 = *(undefined1 **)(piVar20 + 0xc);
    }
LAB_0da6ba9f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da6ba9f;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(&stack0x00000080,&stack0x00000240,&UNK_0131a5b1,0x14,0x10);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef44b00;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_048b3f30;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_048b2190;
  in_stack_00000058 = &UNK_0daec250;
  in_stack_00000060 = &UNK_0daec420;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0daeb240(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  uStack00000000000001d0 = uVar6;
  uStack00000000000001d4 = uVar12;
  uStack00000000000001d8 = uVar13;
  uStack00000000000001dc = uVar14;
  in_stack_000001e0 = uVar5;
  in_stack_000001e8 = uVar7;
  in_stack_000001f0 = uVar9;
  func_0x0daea8e0(&stack0x00000080,puVar17 + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    puVar4 = *(undefined1 **)(piVar20 + 0xc);
    while (puVar4 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar4 = *(undefined1 **)(piVar20 + 0xc);
    }
LAB_0da6bd3f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da6bd3f;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(&stack0x00000080,&stack0x000001d0,&UNK_01340d28,7,0x10);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f2ce5d8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_0da79540;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_0b6acf10;
  in_stack_00000058 = &UNK_0daec600;
  in_stack_00000060 = &UNK_0daec860;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0daeb240(&stack0x00000080);
  _cStack00000000000001c0 = CONCAT71(uStack00000000000001c1,(char)uVar11);
  in_stack_000001b0 = in_stack_000001f0;
  in_stack_000001a0 = in_stack_000001e0;
  in_stack_000001a8 = in_stack_000001e8;
  in_stack_00000190 = (undefined *)CONCAT44(uStack00000000000001d4,uStack00000000000001d0);
  in_stack_00000198 = CONCAT44(uStack00000000000001dc,uStack00000000000001d8);
  in_stack_000001b8 = uVar10;
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daea8e0(&stack0x00000080,(long)in_stack_00000190 + 0x18);
  iVar15 = CONCAT13(uStack000000000000009f,CONCAT12(uStack000000000000009e,uStack000000000000009c));
  if (iVar15 == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78) +
                       0x60);
    iVar15 = *piVar20;
    while (iVar15 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar15 = *piVar20;
    }
    puVar4 = *(undefined1 **)(piVar20 + 0xc);
    while (puVar4 != in_stack_00000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar4 = *(undefined1 **)(piVar20 + 0xc);
    }
LAB_0da6bf9f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iVar15 == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x78)
                         + 0x48);
      iVar15 = *piVar20;
      while (iVar15 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar15 = *piVar20;
      }
      goto LAB_0da6bf9f;
    }
    if (iVar15 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack0000000000000094,uStack0000000000000090) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(&stack0x00000080,&stack0x00000190,&UNK_0124b94f,0x18,0x10);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ef8;
  plVar21 = (long *)CONCAT17(uStack000000000000009f,
                             CONCAT16(uStack000000000000009e,
                                      CONCAT24(uStack000000000000009c,_uStack0000000000000098)));
  _uStack0000000000000098 = (int)puVar16;
  uStack000000000000009c = (undefined2)((ulong)puVar16 >> 0x20);
  uStack000000000000009e = (undefined1)((ulong)puVar16 >> 0x30);
  uStack000000000000009f = (undefined1)((ulong)puVar16 >> 0x38);
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  in_stack_00000018 = uStack0000000000000090;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = &UNK_04906f70;
  in_stack_00000048 = &SUB_048b06d0;
  in_stack_00000050 = &SUB_04906c50;
  in_stack_00000058 = &UNK_0daeca40;
  in_stack_00000060 = &UNK_0daecba0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(in_stack_00000088,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x0daeb240(&stack0x00000080);
  lVar19 = (long)in_stack_00000190;
  func_0x048b0bc0(&stack0x00000098);
  if ((DAT_0f732e30 == '\0') && (iVar15 = func_0x04108328(&DAT_0f732e30), iVar15 != 0)) {
    func_0x0dabbbc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732db0,0xf53dab8);
    func_0x0410844d(&DAT_0f732e30);
  }
  in_stack_00000088 = (undefined1 *)(lVar19 + 0x18);
  plVar21 = (long *)(*(long *)(lVar19 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f732db0 + 4)) * 8);
  do {
    lVar3 = *plVar21;
    if (lVar3 == -1) goto LAB_0da6c140;
    plVar21 = (long *)(*(long *)(lVar19 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f732db0 + 4));
  if (plVar21 == *(long **)(lVar19 + 0x38)) {
LAB_0da6c140:
    in_stack_00000080 = (undefined8 *)&DAT_0f732db0;
  }
  else {
    in_stack_00000080 = (undefined8 *)plVar21[2];
  }
  func_0x0ed624b0(&stack0x00000080,&UNK_0124b94f,0x18);
LAB_0da6c182:
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_013aca38,0x1d);
  in_stack_00000178 = 0xd400296600000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f4919c8;
  in_stack_00000088 = (undefined1 *)0x0;
  in_stack_00000080 = puVar16;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_013aca4d;
  uStack00000000000000a0 = SUB81(puVar18,0);
  uStack00000000000000a1 = (undefined1)((ulong)puVar18 >> 8);
  uStack00000000000000a2 = (undefined1)((ulong)puVar18 >> 0x10);
  uStack00000000000000a3 = (undefined1)((ulong)puVar18 >> 0x18);
  uStack00000000000000a4 = (undefined1)((ulong)puVar18 >> 0x20);
  uStack00000000000000a5 = (undefined1)((ulong)puVar18 >> 0x28);
  uStack00000000000000a6 = (undefined1)((ulong)puVar18 >> 0x30);
  uStack00000000000000a7 = (undefined1)((ulong)puVar18 >> 0x38);
  uStack0000000000000090 = 0x21;
  uStack0000000000000094 = 0;
  _uStack0000000000000098 = 0x1d;
  uStack000000000000009c = 0;
  uStack000000000000009e = 0;
  uStack000000000000009f = 0;
  *(ulong *)((long)puVar18 + 0xd) = CONCAT53(_UNK_013aca48,_DAT_013aca45);
  *(undefined8 *)((long)puVar18 + 0x15) = uVar5;
  uVar13 = _UNK_013aca44;
  uVar12 = _UNK_013aca40;
  uVar6 = _UNK_013aca3c;
  *puVar18 = _DAT_013aca38;
  puVar18[1] = uVar6;
  puVar18[2] = uVar12;
  puVar18[3] = uVar13;
  *(undefined1 *)((long)puVar18 + 0x1d) = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_013aca4d;
  uStack00000000000000b8 = SUB81(puVar16,0);
  uStack00000000000000b9 = (undefined1)((ulong)puVar16 >> 8);
  uStack00000000000000ba = (undefined1)((ulong)puVar16 >> 0x10);
  uStack00000000000000bb = (undefined1)((ulong)puVar16 >> 0x18);
  uStack00000000000000bc = (undefined1)((ulong)puVar16 >> 0x20);
  uStack00000000000000bd = (undefined1)((ulong)puVar16 >> 0x28);
  uStack00000000000000be = (undefined1)((ulong)puVar16 >> 0x30);
  uStack00000000000000bf = (undefined1)((ulong)puVar16 >> 0x38);
  in_stack_000000a8 = 0x21;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x1d;
  uStack00000000000000b1 = 0;
  uStack00000000000000b6 = 0;
  uStack00000000000000b7 = 0;
  *(ulong *)((long)puVar16 + 0xd) = CONCAT53(_UNK_013aca48,_DAT_013aca45);
  *(undefined8 *)((long)puVar16 + 0x15) = uVar5;
  uVar5 = CONCAT44(_UNK_013aca44,_UNK_013aca40);
  *puVar16 = CONCAT44(_UNK_013aca3c,_DAT_013aca38);
  puVar16[1] = uVar5;
  *(undefined1 *)((long)puVar16 + 0x1d) = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000f0 = 0x3f600000;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dabbe70;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &UNK_0dabbb00;
  in_stack_00000058 = &UNK_0dabbe90;
  in_stack_00000060 = &UNK_0dabc560;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8d8b00();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_0124bde7,0x26);
  in_stack_00000178 = 0xd487704f00000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491a50;
  in_stack_00000088 = (undefined1 *)0x0;
  in_stack_00000080 = puVar16;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_0124bdff;
  uStack00000000000000a0 = SUB81(puVar18,0);
  uStack00000000000000a1 = (undefined1)((ulong)puVar18 >> 8);
  uStack00000000000000a2 = (undefined1)((ulong)puVar18 >> 0x10);
  uStack00000000000000a3 = (undefined1)((ulong)puVar18 >> 0x18);
  uStack00000000000000a4 = (undefined1)((ulong)puVar18 >> 0x20);
  uStack00000000000000a5 = (undefined1)((ulong)puVar18 >> 0x28);
  uStack00000000000000a6 = (undefined1)((ulong)puVar18 >> 0x30);
  uStack00000000000000a7 = (undefined1)((ulong)puVar18 >> 0x38);
  uStack0000000000000090 = 0x29;
  uStack0000000000000094 = 0;
  _uStack0000000000000098 = 0x26;
  uStack000000000000009c = 0;
  uStack000000000000009e = 0;
  uStack000000000000009f = 0;
  *(undefined8 *)(puVar18 + 4) = _DAT_0124bdf7;
  *(undefined8 *)(puVar18 + 6) = uVar5;
  uVar13 = _UNK_0124bdf3;
  uVar12 = _UNK_0124bdef;
  uVar6 = _UNK_0124bdeb;
  *puVar18 = _DAT_0124bde7;
  puVar18[1] = uVar6;
  puVar18[2] = uVar12;
  puVar18[3] = uVar13;
  *(undefined8 *)((long)puVar18 + 0x1e) = 0x676e696b63617274;
  *(undefined1 *)((long)puVar18 + 0x26) = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_0124bdff;
  uStack00000000000000b8 = SUB81(puVar16,0);
  uStack00000000000000b9 = (undefined1)((ulong)puVar16 >> 8);
  uStack00000000000000ba = (undefined1)((ulong)puVar16 >> 0x10);
  uStack00000000000000bb = (undefined1)((ulong)puVar16 >> 0x18);
  uStack00000000000000bc = (undefined1)((ulong)puVar16 >> 0x20);
  uStack00000000000000bd = (undefined1)((ulong)puVar16 >> 0x28);
  uStack00000000000000be = (undefined1)((ulong)puVar16 >> 0x30);
  uStack00000000000000bf = (undefined1)((ulong)puVar16 >> 0x38);
  in_stack_000000a8 = 0x29;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x26;
  uStack00000000000000b1 = 0;
  uStack00000000000000b6 = 0;
  uStack00000000000000b7 = 0;
  puVar16[2] = _DAT_0124bdf7;
  puVar16[3] = uVar5;
  uVar5 = CONCAT44(_UNK_0124bdf3,_UNK_0124bdef);
  *puVar16 = CONCAT44(_UNK_0124bdeb,_DAT_0124bde7);
  puVar16[1] = uVar5;
  *(undefined8 *)((long)puVar16 + 0x1e) = 0x676e696b63617274;
  *(undefined1 *)((long)puVar16 + 0x26) = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000f0 = 0x3f600000;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dabce90;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d92ad70;
  in_stack_00000058 = &UNK_0dabceb0;
  in_stack_00000060 = &UNK_0dabd6a0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8d9750();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_01333b7d,0x14);
  in_stack_00000178 = 0x578c4c2100000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491ad8;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_01333b7d;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x28);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_01333b7d >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_01333b7d >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_01333b85;
  uStack000000000000009c = (undefined2)((ulong)_UNK_01333b85 >> 0x18);
  uStack000000000000009e = (undefined1)((ulong)_UNK_01333b85 >> 0x28);
  uStack000000000000009f = (undefined1)((ulong)_UNK_01333b85 >> 0x30);
  uStack00000000000000a0 = (undefined1)((ulong)_UNK_01333b85 >> 0x38);
  uStack00000000000000a1 = 99;
  uStack00000000000000a2 = 0x72;
  uStack00000000000000a3 = 0x6f;
  uStack00000000000000a4 = 0x70;
  uStack00000000000000a5 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x28);
  uStack00000000000000b1 = (undefined5)_UNK_01333b85;
  uStack00000000000000b9 = 99;
  uStack00000000000000ba = 0x72;
  uStack00000000000000bb = 0x6f;
  uStack00000000000000bc = 0x70;
  uStack00000000000000bd = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  uStack00000000000000b6 = uStack000000000000009e;
  uStack00000000000000b7 = uStack000000000000009f;
  uStack00000000000000b8 = uStack00000000000000a0;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dabdf10;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d92c920;
  in_stack_00000058 = &UNK_0dabdf30;
  in_stack_00000060 = &UNK_0dabe710;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8da110();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&UNK_012652ee,0xe);
  in_stack_00000178 = 0xb357c50900000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491b60;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090 = 0x6e696d1c;
  uStack0000000000000094 = 0x61726365;
  _uStack0000000000000098 = 0x683a7466;
  uStack000000000000009c = 0x6d6f;
  uStack000000000000009e = 0x65;
  uStack000000000000009f = 0;
  in_stack_000000a8 = 0x6e696d1c;
  uStack00000000000000ac = 0x61726365;
  in_stack_000000b0 = 0x66;
  uStack00000000000000b1 = 0x6d6f683a74;
  uStack00000000000000b6 = 0x65;
  uStack00000000000000b7 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dabefb0;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d9328b0;
  in_stack_00000058 = &UNK_0dabefd0;
  in_stack_00000060 = &UNK_0dabf6a0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8dbca0();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_011c6cff,0x12);
  in_stack_00000178 = 0x47f741ea00000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491be8;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_011c6cff;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x24);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_011c6cff >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_011c6cff >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_011c6d07;
  uStack000000000000009c = (undefined2)((ulong)_UNK_011c6d07 >> 0x18);
  uStack000000000000009e = (undefined1)((ulong)_UNK_011c6d07 >> 0x28);
  uStack000000000000009f = (undefined1)((ulong)_UNK_011c6d07 >> 0x30);
  uStack00000000000000a0 = (undefined1)((ulong)_UNK_011c6d07 >> 0x38);
  uStack00000000000000a1 = 0x69;
  uStack00000000000000a2 = 0x61;
  uStack00000000000000a3 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x24);
  uStack00000000000000b1 = (undefined5)_UNK_011c6d07;
  uStack00000000000000b9 = 0x69;
  uStack00000000000000ba = 0x61;
  uStack00000000000000bb = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  uStack00000000000000b6 = uStack000000000000009e;
  uStack00000000000000b7 = uStack000000000000009f;
  uStack00000000000000b8 = uStack00000000000000a0;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dabff50;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d934a60;
  in_stack_00000058 = &UNK_0dabff70;
  in_stack_00000060 = &UNK_0dac0760;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8dc870();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_014d75ff,0x19);
  in_stack_00000178 = 0x1e71c7b600000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491c70;
  in_stack_00000088 = (undefined1 *)0x0;
  in_stack_00000080 = puVar16;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_014d7610;
  uStack00000000000000a0 = SUB81(puVar18,0);
  uStack00000000000000a1 = (undefined1)((ulong)puVar18 >> 8);
  uStack00000000000000a2 = (undefined1)((ulong)puVar18 >> 0x10);
  uStack00000000000000a3 = (undefined1)((ulong)puVar18 >> 0x18);
  uStack00000000000000a4 = (undefined1)((ulong)puVar18 >> 0x20);
  uStack00000000000000a5 = (undefined1)((ulong)puVar18 >> 0x28);
  uStack00000000000000a6 = (undefined1)((ulong)puVar18 >> 0x30);
  uStack00000000000000a7 = (undefined1)((ulong)puVar18 >> 0x38);
  uStack0000000000000090 = 0x21;
  uStack0000000000000094 = 0;
  _uStack0000000000000098 = 0x19;
  uStack000000000000009c = 0;
  uStack000000000000009e = 0;
  uStack000000000000009f = 0;
  *(ulong *)((long)puVar18 + 9) = CONCAT17(UNK_014d760f,CONCAT43(_UNK_014d760b,_DAT_014d7608));
  *(undefined8 *)((long)puVar18 + 0x11) = uVar5;
  uVar13 = _UNK_014d760b;
  uVar12 = _UNK_014d7607;
  uVar6 = _UNK_014d7603;
  *puVar18 = _DAT_014d75ff;
  puVar18[1] = uVar6;
  puVar18[2] = uVar12;
  puVar18[3] = uVar13;
  *(undefined1 *)((long)puVar18 + 0x19) = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_014d7610;
  uStack00000000000000b8 = SUB81(puVar16,0);
  uStack00000000000000b9 = (undefined1)((ulong)puVar16 >> 8);
  uStack00000000000000ba = (undefined1)((ulong)puVar16 >> 0x10);
  uStack00000000000000bb = (undefined1)((ulong)puVar16 >> 0x18);
  uStack00000000000000bc = (undefined1)((ulong)puVar16 >> 0x20);
  uStack00000000000000bd = (undefined1)((ulong)puVar16 >> 0x28);
  uStack00000000000000be = (undefined1)((ulong)puVar16 >> 0x30);
  uStack00000000000000bf = (undefined1)((ulong)puVar16 >> 0x38);
  in_stack_000000a8 = 0x21;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x19;
  uStack00000000000000b1 = 0;
  uStack00000000000000b6 = 0;
  uStack00000000000000b7 = 0;
  *(ulong *)((long)puVar16 + 9) = CONCAT17(UNK_014d760f,CONCAT43(_UNK_014d760b,_DAT_014d7608));
  *(undefined8 *)((long)puVar16 + 0x11) = uVar5;
  uVar5 = CONCAT44(_UNK_014d760b,_UNK_014d7607);
  *puVar16 = CONCAT44(_UNK_014d7603,_DAT_014d75ff);
  puVar16[1] = uVar5;
  *(undefined1 *)((long)puVar16 + 0x19) = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000f0 = 0x3f600000;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dac0fb0;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d935a70;
  in_stack_00000058 = &UNK_0dac0fd0;
  in_stack_00000060 = &UNK_0dac17c0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8e89b0();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_01420725,0x12);
  in_stack_00000178 = 0xa5b612c800000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491cf8;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_01420725;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x24);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_01420725 >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_01420725 >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_0142072d;
  uStack000000000000009c = (undefined2)((ulong)_UNK_0142072d >> 0x18);
  uStack000000000000009e = (undefined1)((ulong)_UNK_0142072d >> 0x28);
  uStack000000000000009f = (undefined1)((ulong)_UNK_0142072d >> 0x30);
  uStack00000000000000a0 = (undefined1)((ulong)_UNK_0142072d >> 0x38);
  uStack00000000000000a1 = 99;
  uStack00000000000000a2 = 0x74;
  uStack00000000000000a3 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x24);
  uStack00000000000000b1 = (undefined5)_UNK_0142072d;
  uStack00000000000000b9 = 99;
  uStack00000000000000ba = 0x74;
  uStack00000000000000bb = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  uStack00000000000000b6 = uStack000000000000009e;
  uStack00000000000000b7 = uStack000000000000009f;
  uStack00000000000000b8 = uStack00000000000000a0;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dac2060;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d95d5d0;
  in_stack_00000058 = &UNK_0dac2080;
  in_stack_00000060 = &UNK_0dac2750;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8e9260();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_01265716,0x15);
  in_stack_00000178 = 0x674563b00000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491d80;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_01265716;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x2a);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_01265716 >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_01265716 >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_0126571e;
  uStack000000000000009c = (undefined2)((ulong)_UNK_0126571e >> 0x18);
  uStack000000000000009e = 100;
  uStack000000000000009f = 0x65;
  uStack00000000000000a0 = 0x5f;
  uStack00000000000000a1 = 0x74;
  uStack00000000000000a2 = 0x61;
  uStack00000000000000a3 = 0x62;
  uStack00000000000000a4 = 0x6c;
  uStack00000000000000a5 = 0x65;
  uStack00000000000000a6 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x2a);
  uStack00000000000000b1 = (undefined5)_UNK_0126571e;
  uStack00000000000000b6 = 100;
  uStack00000000000000b7 = 0x65;
  uStack00000000000000b8 = 0x5f;
  uStack00000000000000b9 = 0x74;
  uStack00000000000000ba = 0x61;
  uStack00000000000000bb = 0x62;
  uStack00000000000000bc = 0x6c;
  uStack00000000000000bd = 0x65;
  uStack00000000000000be = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dac3050;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d962910;
  in_stack_00000058 = &UNK_0dac3070;
  in_stack_00000060 = &UNK_0dac3740;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8ea3f0();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_012abac8,0x13);
  in_stack_00000178 = 0x2b0d748000000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491e08;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_012abac8;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x26);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_012abac8 >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_012abac8 >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_012abad0;
  uStack000000000000009c = (undefined2)((ulong)_UNK_012abad0 >> 0x18);
  uStack000000000000009e = (undefined1)((ulong)_UNK_012abad0 >> 0x28);
  uStack000000000000009f = (undefined1)((ulong)_UNK_012abad0 >> 0x30);
  uStack00000000000000a0 = 0x6f;
  uStack00000000000000a1 = 0x75;
  uStack00000000000000a2 = 0x6e;
  uStack00000000000000a3 = 0x74;
  uStack00000000000000a4 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x26);
  uStack00000000000000b1 = (undefined5)_UNK_012abad0;
  uStack00000000000000b8 = 0x6f;
  uStack00000000000000b9 = 0x75;
  uStack00000000000000ba = 0x6e;
  uStack00000000000000bb = 0x74;
  uStack00000000000000bc = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  uStack00000000000000b6 = uStack000000000000009e;
  uStack00000000000000b7 = uStack000000000000009f;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dac40c0;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d968600;
  in_stack_00000058 = &UNK_0dac40e0;
  in_stack_00000060 = &UNK_0dac47b0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8ec6e0();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_01333a18,0x11);
  in_stack_00000178 = 0x669cecbf00000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491e90;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_01333a18;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x22);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_01333a18 >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_01333a18 >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_01333a20;
  uStack000000000000009c = (undefined2)((ulong)_UNK_01333a20 >> 0x18);
  uStack000000000000009e = (undefined1)((ulong)_UNK_01333a20 >> 0x28);
  uStack000000000000009f = (undefined1)((ulong)_UNK_01333a20 >> 0x30);
  uStack00000000000000a0 = (undefined1)((ulong)_UNK_01333a20 >> 0x38);
  uStack00000000000000a1 = 0x73;
  uStack00000000000000a2 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x22);
  uStack00000000000000b1 = (undefined5)_UNK_01333a20;
  uStack00000000000000b9 = 0x73;
  uStack00000000000000ba = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  uStack00000000000000b6 = uStack000000000000009e;
  uStack00000000000000b7 = uStack000000000000009f;
  uStack00000000000000b8 = uStack00000000000000a0;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dac5170;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d973c50;
  in_stack_00000058 = &UNK_0dac5190;
  in_stack_00000060 = &UNK_0dac5980;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8ed330();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_01230325,0x18);
  in_stack_00000178 = 0xba08065700000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491f18;
  in_stack_00000088 = (undefined1 *)0x0;
  in_stack_00000080 = puVar16;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar13 = _UNK_01230331;
  uVar12 = _UNK_0123032d;
  uVar6 = _UNK_01230329;
  uStack00000000000000a0 = SUB81(puVar18,0);
  uStack00000000000000a1 = (undefined1)((ulong)puVar18 >> 8);
  uStack00000000000000a2 = (undefined1)((ulong)puVar18 >> 0x10);
  uStack00000000000000a3 = (undefined1)((ulong)puVar18 >> 0x18);
  uStack00000000000000a4 = (undefined1)((ulong)puVar18 >> 0x20);
  uStack00000000000000a5 = (undefined1)((ulong)puVar18 >> 0x28);
  uStack00000000000000a6 = (undefined1)((ulong)puVar18 >> 0x30);
  uStack00000000000000a7 = (undefined1)((ulong)puVar18 >> 0x38);
  uStack0000000000000090 = 0x21;
  uStack0000000000000094 = 0;
  _uStack0000000000000098 = 0x18;
  uStack000000000000009c = 0;
  uStack000000000000009e = 0;
  uStack000000000000009f = 0;
  *puVar18 = _DAT_01230325;
  puVar18[1] = uVar6;
  puVar18[2] = uVar12;
  puVar18[3] = uVar13;
  *(undefined8 *)(puVar18 + 4) = 0x687461705f646572;
  *(undefined1 *)(puVar18 + 6) = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uStack00000000000000b8 = SUB81(puVar16,0);
  uStack00000000000000b9 = (undefined1)((ulong)puVar16 >> 8);
  uStack00000000000000ba = (undefined1)((ulong)puVar16 >> 0x10);
  uStack00000000000000bb = (undefined1)((ulong)puVar16 >> 0x18);
  uStack00000000000000bc = (undefined1)((ulong)puVar16 >> 0x20);
  uStack00000000000000bd = (undefined1)((ulong)puVar16 >> 0x28);
  uStack00000000000000be = (undefined1)((ulong)puVar16 >> 0x30);
  uStack00000000000000bf = (undefined1)((ulong)puVar16 >> 0x38);
  in_stack_000000a8 = 0x21;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x18;
  uStack00000000000000b1 = 0;
  uStack00000000000000b6 = 0;
  uStack00000000000000b7 = 0;
  uVar5 = CONCAT44(_UNK_01230331,_UNK_0123032d);
  *puVar16 = CONCAT44(_UNK_01230329,_DAT_01230325);
  puVar16[1] = uVar5;
  puVar16[2] = 0x687461705f646572;
  *(undefined1 *)(puVar16 + 3) = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000f0 = 0x3f600000;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dac6230;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d977840;
  in_stack_00000058 = &UNK_0dac6250;
  in_stack_00000060 = &UNK_0dac6920;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d8fd2d0();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_012c5efa,0x14);
  in_stack_00000178 = 0x31adf22500000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f491fa0;
  in_stack_00000088 = (undefined1 *)0x0;
  uStack0000000000000090._1_3_ = (undefined3)_DAT_012c5efa;
  uStack0000000000000090 = CONCAT31(uStack0000000000000090._1_3_,0x28);
  uStack0000000000000094 = (undefined4)((ulong)_DAT_012c5efa >> 0x18);
  uStack0000000000000098 = (undefined1)((ulong)_DAT_012c5efa >> 0x38);
  uStack0000000000000099 = (undefined3)_UNK_012c5f02;
  uStack000000000000009c = (undefined2)((ulong)_UNK_012c5f02 >> 0x18);
  uStack000000000000009e = (undefined1)((ulong)_UNK_012c5f02 >> 0x28);
  uStack000000000000009f = (undefined1)((ulong)_UNK_012c5f02 >> 0x30);
  uStack00000000000000a0 = (undefined1)((ulong)_UNK_012c5f02 >> 0x38);
  uStack00000000000000a1 = 0x74;
  uStack00000000000000a2 = 0x69;
  uStack00000000000000a3 = 0x6c;
  uStack00000000000000a4 = 0x65;
  uStack00000000000000a5 = 0;
  in_stack_000000a8 = CONCAT31(uStack0000000000000090._1_3_,0x28);
  uStack00000000000000b1 = (undefined5)_UNK_012c5f02;
  uStack00000000000000b9 = 0x74;
  uStack00000000000000ba = 0x69;
  uStack00000000000000bb = 0x6c;
  uStack00000000000000bc = 0x65;
  uStack00000000000000bd = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0x3f600000;
  in_stack_00000080 = puVar16;
  uStack00000000000000ac = uStack0000000000000094;
  in_stack_000000b0 = uStack0000000000000098;
  uStack00000000000000b6 = uStack000000000000009e;
  uStack00000000000000b7 = uStack000000000000009f;
  uStack00000000000000b8 = uStack00000000000000a0;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 2;
  in_stack_00000038 = 1;
  in_stack_00000040 = &UNK_0dac7220;
  in_stack_00000048 = &UNK_07d98660;
  in_stack_00000050 = &SUB_0d9c3790;
  in_stack_00000058 = &UNK_0dac7240;
  in_stack_00000060 = &UNK_0dac7910;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  func_0x048b05a0(&stack0x00000158,&stack0x00000018);
  plVar21 = in_stack_00000078;
  if (in_stack_00000078 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000078 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*in_stack_00000078 + 0x10))(in_stack_00000078);
      func_0x0412c2d0(plVar21);
    }
  }
  in_stack_000001a0 = CONCAT71(uStack0000000000000169,uStack0000000000000168);
  in_stack_000001a8 = in_stack_00000170;
  in_stack_00000190 = (undefined *)_uStack0000000000000158;
  in_stack_00000198 = in_stack_00000160;
  func_0x0daacff0(&stack0x00000018,&stack0x00000190,&stack0x00000080);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0d904650();
  func_0x0da6f580(&stack0x00000150,&stack0x00000208,&DAT_0123d54e,0x20);
  in_stack_00000178 = 0x1efb37ae00000003;
  func_0x0daab720(_uStack0000000000000150 + 0x18);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f492028;
  in_stack_00000088 = (undefined1 *)0x0;
  in_stack_00000080 = puVar16;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_0123d566;
  uStack00000000000000a0 = SUB81(puVar18,0);
  uStack00000000000000a1 = (undefined1)((ulong)puVar18 >> 8);
  uStack00000000000000a2 = (undefined1)((ulong)puVar18 >> 0x10);
  uStack00000000000000a3 = (undefined1)((ulong)puVar18 >> 0x18);
  uStack00000000000000a4 = (undefined1)((ulong)puVar18 >> 0x20);
  uStack00000000000000a5 = (undefined1)((ulong)puVar18 >> 0x28);
  uStack00000000000000a6 = (undefined1)((ulong)puVar18 >> 0x30);
  uStack00000000000000a7 = (undefined1)((ulong)puVar18 >> 0x38);
  uStack0000000000000090 = 0x29;
  uStack0000000000000094 = 0;
  _uStack0000000000000098 = 0x20;
  uStack000000000000009c = 0;
  uStack000000000000009e = 0;
  uStack000000000000009f = 0;
  *(undefined8 *)(puVar18 + 4) = _DAT_0123d55e;
  *(undefined8 *)(puVar18 + 6) = uVar5;
  uVar13 = _UNK_0123d55a;
  uVar12 = _UNK_0123d556;
  uVar6 = _UNK_0123d552;
  *puVar18 = _DAT_0123d54e;
  puVar18[1] = uVar6;
  puVar18[2] = uVar12;
  puVar18[3] = uVar13;
  *(undefined1 *)(puVar18 + 8) = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_0123d566;
  uStack00000000000000b8 = SUB81(puVar16,0);
  uStack00000000000000b9 = (undefined1)((ulong)puVar16 >> 8);
  uStack00000000000000ba = (undefined1)((ulong)puVar16 >> 0x10);
  uStack00000000000000bb = (undefined1)((ulong)puVar16 >> 0x18);
  uStack00000000000000bc = (undefined1)((ulong)puVar16 >> 0x20);
  uStack00000000000000bd = (undefined1)((ulong)puVar16 >> 0x28);
  uStack00000000000000be = (undefined1)((ulong)puVar16 >> 0x30);
  uStack00000000000000bf = (undefined1)((ulong)puVar16 >> 0x38);
  in_stack_000000a8 = 0x29;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x20;
  uStack00000000000000b1 = 0;
  uStack00000000000000b6 = 0;
  uStack00000000000000b7 = 0;
  puVar16[2] = _DAT_0123d55e;
  puVar16[3] = uVar5;
  uVar5 = CONCAT44(_UNK_0123d55a,_UNK_0123d556);
  *puVar16 = CONCAT44(_UNK_0123d552,_DAT_0123d54e);
  puVar16[1] = uVar5;
  *(undefined1 *)(puVar16 + 4) = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000f0 = 0x3f600000;
  func_0x048afb10(&stack0x000000c0,8);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_00000128 = 0xff00;
  uStack000000000000012c = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  if ((DAT_0f7332a8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7332a8), iVar15 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  in_stack_00000018 = in_stack_00000178._4_4_;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x11c6cff  minecraft:insomnia
 * 0x11e093f  minecraft:collision_box
 * 0x1230325  minecraft:preferred_path
 * 0x123d54e  minecraft:behavior.ranged_attack
 * 0x123d55e  or.ranged_attack
 * 0x124bde7  minecraft:game_event_movement_tracking
 * 0x124bdf7  vent_movement_tracking
 * 0x1265716  minecraft:trade_table
 * 0x127f06d  minecraft:anger_level
 * 0x12abac8  minecraft:tamemount
 * 0x12c5efa  minecraft:projectile
 * 0x1333a18  minecraft:physics
 * 0x1333a4c  minecraft:exhaustion_values
 * 0x1333a57  xhaustion_values
 * 0x1333b6c  minecraft:barter
 * 0x1333b7d  minecraft:grows_crop
 * 0x139eefa  minecraft:damage_over_time
 * 0x139ef04  damage_over_time
 * 0x13aca38  minecraft:behavior.follow_mob
 * 0x13aca45  avior.follow_mob
 * 0x1420725  minecraft:interact
 * 0x1486ac4  minecraft:flocking
 * 0x14d75ff  minecraft:instant_despawn
 * 0x14d7608  :instant_despawn
 */
