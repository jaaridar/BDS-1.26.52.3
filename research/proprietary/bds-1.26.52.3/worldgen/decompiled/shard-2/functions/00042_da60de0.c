/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda60de0
 * Label: callee-of:0xda370f0
 * Body:  [[0da60de0, 0da60e14] [0da60e91, 0da60f1d] [0da60f20, 0da613c5] [0da613d0, 0da61404] [0da61410, 0da61a9f] [0da61aa1, 0da62368] [0da62370, 0da62c24] [0da62c47, 0da62cbd] [0da62ce0, 0da62d12] [0da62e74, 0da62ea4]]
 * Ghidra: FUN_0da60de0
 */


/* WARNING: Removing unreachable block (ram,0x0da62b99) */
/* WARNING: Removing unreachable block (ram,0x0da62a52) */
/* WARNING: Removing unreachable block (ram,0x0da629db) */
/* WARNING: Removing unreachable block (ram,0x0da628b4) */
/* WARNING: Removing unreachable block (ram,0x0da628c7) */
/* WARNING: Removing unreachable block (ram,0x0da62490) */
/* WARNING: Removing unreachable block (ram,0x0da624a2) */
/* WARNING: Removing unreachable block (ram,0x0da6288e) */
/* WARNING: Removing unreachable block (ram,0x0da6290c) */
/* WARNING: Removing unreachable block (ram,0x0da62a01) */
/* WARNING: Removing unreachable block (ram,0x0da62a13) */
/* WARNING: Removing unreachable block (ram,0x0da62b68) */
/* WARNING: Removing unreachable block (ram,0x0da62bfb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0da60de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long param_5)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  int in_EAX;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  ulong *puVar17;
  undefined4 *puVar18;
  long *plVar19;
  int *piVar20;
  long *plVar21;
  long lVar22;
  undefined4 unaff_EBP;
  long lVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined *unaff_R13;
  long unaff_R14;
  undefined8 *unaff_R15;
  long *plVar26;
  undefined8 in_stack_00000020;
  undefined *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined *in_stack_00000038;
  undefined *in_stack_00000040;
  undefined *in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined *in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined1 uStack0000000000000098;
  int iStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  char cStack00000000000000ac;
  undefined3 uStack00000000000000ad;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long *in_stack_000000d0;
  long in_stack_000000d8;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  byte bStack0000000000000150;
  undefined7 uStack0000000000000151;
  undefined8 in_stack_00000160;
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
  uint uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  undefined4 in_stack_000001d8;
  undefined4 uStack00000000000001dc;
  undefined4 uStack00000000000001e0;
  undefined4 uStack00000000000001e4;
  undefined4 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  undefined4 in_stack_000001f8;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_00000268;
  undefined4 in_stack_0000026c;
  char in_stack_00000270;
  undefined4 in_stack_00000340;
  undefined4 in_stack_00000344;
  ulong in_stack_00000348;
  ulong in_stack_00000350;
  undefined8 in_stack_00000378;
  ulong in_stack_00000380;
  undefined4 in_stack_000003c0;
  uint in_stack_000003c4;
  ulong in_stack_000004a0;
  ulong uVar27;
  undefined8 in_stack_000004a8;
  undefined8 uVar28;
  long in_stack_000004b0;
  long lVar29;
  ulong in_stack_00000620;
  undefined8 in_stack_00000628;
  long in_stack_00000630;
  
  do {
    lVar23 = *param_4;
    if (lVar23 == -1) goto LAB_0da60e09;
    param_4 = (long *)(param_5 + lVar23 * 0x18);
  } while (*(int *)(param_5 + 8 + lVar23 * 0x18) != in_EAX);
  if (param_4 == *(long **)(unaff_R14 + 0x38)) {
LAB_0da60e09:
    lVar23 = 0xf732708;
  }
  else {
    lVar23 = param_4[2];
  }
  lVar23 = func_0x048b1040(param_1,lVar23,unaff_EBP,1);
  if (lVar23 == 0) {
    func_0x048b10d0(&stack0x00000300);
    lVar23 = 0;
    lVar22 = lRam0000000000000038;
    if (lRam0000000000000038 != 0) goto LAB_0da60f14;
LAB_0da60eef:
    func_0x048b10d0(&stack0x00000300);
  }
  else {
    lVar22 = *(long *)(lVar23 + 0x38);
    if (*(long *)(lVar23 + 0x38) == 0) goto LAB_0da60eef;
LAB_0da60f14:
    do {
      lVar23 = lVar22;
      lVar22 = *(long *)(lVar23 + 0x38);
      if (lVar22 == 0) {
        lVar22 = 0;
        func_0x048b10d0(&stack0x00000300);
      }
    } while (lVar22 != 0);
  }
  lVar23 = *(long *)(lVar23 + 0x48);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(undefined1 *)(puVar15 + 3) = uStack0000000000000098;
  *(undefined4 *)(puVar15 + 1) = uStack0000000000000088;
  *(undefined4 *)((long)puVar15 + 0xc) = uStack000000000000008c;
  *(undefined4 *)(puVar15 + 2) = uStack0000000000000090;
  *(undefined4 *)((long)puVar15 + 0x14) = uStack0000000000000094;
  *puVar15 = unaff_R13;
  func_0x04167a20(puVar15 + 4,&stack0x000000a0);
  puVar15[5] = _uStack00000000000000a8;
  puVar15[6] = in_stack_000000b0;
  puVar15[7] = in_stack_000000b8;
  puVar15[8] = in_stack_000000c0;
  puVar15[9] = in_stack_000000c8;
  puVar15[10] = in_stack_000000d0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = (long *)0x0;
  puVar15[0xb] = in_stack_000000d8;
  puVar15[0xe] = unaff_R15[2];
  uVar3 = *(undefined4 *)((long)unaff_R15 + 4);
  uVar4 = *(undefined4 *)(unaff_R15 + 1);
  uVar5 = *(undefined4 *)((long)unaff_R15 + 0xc);
  *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)unaff_R15;
  *(undefined4 *)((long)puVar15 + 100) = uVar3;
  *(undefined4 *)(puVar15 + 0xd) = uVar4;
  *(undefined4 *)((long)puVar15 + 0x6c) = uVar5;
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
  unaff_R15[2] = 0;
  puVar15[0xf] = in_stack_000000f8;
  plVar26 = *(long **)(lVar23 + 8);
  *(undefined8 **)(lVar23 + 8) = puVar15;
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x28))();
  }
  in_stack_00000080 = unaff_R13;
  if ((in_stack_000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,in_stack_000000e0 & 0xfffffffffffffffe);
  }
  plVar26 = in_stack_000000d0;
  if (in_stack_000000d0 != (long *)0x0) {
    LOCK();
    plVar19 = in_stack_000000d0 + 1;
    lVar23 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*in_stack_000000d0 + 0x10))(in_stack_000000d0);
      func_0x0412c2d0(plVar26);
    }
  }
  func_0x04167a40(&stack0x000000a0);
  if ((uStack00000000000001d0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack00000000000001e4,uStack00000000000001e0),
                    CONCAT44(uStack00000000000001d4,uStack00000000000001d0) & 0xfffffffffffffffe);
  }
  plVar26 = in_stack_00000050;
  if (((ulong)in_stack_00000060 & 1) != 0) {
    func_0x0412a280(in_stack_00000070,(ulong)in_stack_00000060 & 0xfffffffffffffffe);
    plVar26 = in_stack_00000050;
  }
  in_stack_00000050 = plVar26;
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar19 = plVar26 + 1;
    lVar23 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      func_0x0412c2d0(plVar26);
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
    func_0x0412a280(in_stack_00000160,
                    CONCAT71(uStack0000000000000151,bStack0000000000000150) & 0xfffffffffffffffe);
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
  if ((in_stack_000003c4 & 0x800000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT44(in_stack_000003c4,in_stack_000003c0) & 0xff00ffffffffffff) - 8);
  }
  lVar23 = func_0x0d2a6f90(in_stack_00000378);
  if ((*(int *)(lVar23 + 0x60) == -0x2b3da790) && (*(long *)(lVar23 + 0x68) != 0)) {
    func_0x0daa91c0(&stack0x00000240);
  }
  else {
    func_0x0daa91c0(&stack0x00000240);
  }
  if (in_stack_00000270 != '\0') {
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
  lVar22 = CONCAT44(in_stack_00000244,in_stack_00000240) + 0x18;
  lVar23 = func_0x0d2a6f90(lVar22);
  pbVar2 = *(byte **)(CONCAT44(in_stack_00000244,in_stack_00000240) + 0x58);
  for (pbVar25 = *(byte **)(CONCAT44(in_stack_00000244,in_stack_00000240) + 0x50); pbVar25 != pbVar2
      ; pbVar25 = pbVar25 + 0x38) {
    bVar1 = *pbVar25;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x24) goto LAB_0da6141a;
    }
    else if (*(long *)(pbVar25 + 8) == 0x24) {
LAB_0da6141a:
      if ((bVar1 & 1) == 0) {
        pbVar24 = pbVar25 + 1;
      }
      else {
        pbVar24 = *(byte **)(pbVar25 + 0x10);
      }
      iVar13 = func_0x0eee3000(&DAT_014518a9,pbVar24,0x24);
      if (iVar13 == 0) break;
    }
  }
  if (pbVar25 == pbVar2) {
LAB_0da6144a:
    if (in_stack_00000268 == 0) {
      if ((*(int *)(lVar23 + 0x60) != -0x2b3da790) || (*(long *)(lVar23 + 0x68) == 0))
      goto LAB_0da614c6;
      lVar23 = *(long *)(lVar23 + 0x68) + 0x38;
    }
    else {
      puVar16 = (undefined *)func_0x048b0c90(lVar22,lVar23,in_stack_0000026c,1);
      if (puVar16 == (undefined *)0x0) {
        in_stack_00000080 = (undefined *)0x0;
        _uStack0000000000000088 = (ulong *)0x0;
        func_0x048b0d20(&stack0x00000080);
        puVar16 = in_stack_00000080;
        if (in_stack_00000080 == (undefined *)0x0) goto LAB_0da614c6;
      }
      if ((*(int *)(puVar16 + 0x50) == -0x45dcb126) && (*(long *)(puVar16 + 0x58) != 0)) {
        lVar23 = *(long *)(puVar16 + 0x58) + 0x40;
      }
      else {
LAB_0da614c6:
        lVar23 = 0;
      }
    }
    in_stack_00000020 = CONCAT35(in_stack_00000020._5_3_,0x1d33bd9c5);
    puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar17 == (ulong *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar17[2] = in_stack_000001a0;
    *puVar17 = in_stack_00000190;
    puVar17[1] = in_stack_00000198;
    in_stack_00000190 = 0;
    in_stack_00000198 = 0;
    in_stack_000001a0 = 0;
    *(undefined2 *)(puVar17 + 3) = in_stack_000001a8;
    puVar17[4] = in_stack_000001b0;
    puVar17[5] = (ulong)in_stack_000001b8;
    in_stack_000001b8 = (undefined *)0x0;
    puVar17[6] = (ulong)in_stack_000001c0;
    in_stack_000001c0 = (undefined *)0x0;
    in_stack_00000080 = &UNK_048b46e0;
    _uStack0000000000000098 = (code *)&UNK_048b4ab0;
    _uStack00000000000000a0 = (code *)&UNK_048b49f0;
    _uStack00000000000000a8 = CONCAT35(uStack00000000000000ad,0x1d33bd9c5);
    _uStack0000000000000088 = puVar17;
    puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar18 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar28 = _UNK_014518c1;
    *(undefined8 *)(puVar18 + 4) = _DAT_014518b9;
    *(undefined8 *)(puVar18 + 6) = uVar28;
    uVar5 = _UNK_014518b5;
    uVar4 = _UNK_014518b1;
    uVar3 = _UNK_014518ad;
    *puVar18 = _DAT_014518a9;
    puVar18[1] = uVar3;
    puVar18[2] = uVar4;
    puVar18[3] = uVar5;
    puVar18[8] = 0x5d797472;
    *(undefined1 *)(puVar18 + 9) = 0;
    lVar23 = func_0x048b5060(lVar23,&stack0x00000298);
    *(undefined **)(lVar23 + 0x20) = &UNK_048b46e0;
    if ((undefined **)(lVar23 + 0x20) != &stack0x00000080) {
      plVar26 = (long *)(lVar23 + 0x28);
      if (*(code **)(lVar23 + 0x40) == (code *)0x0) {
LAB_0da616a1:
        puVar17 = _uStack0000000000000088;
        _uStack0000000000000088 = (ulong *)0x0;
        *plVar26 = (long)puVar17;
      }
      else {
        (**(code **)(lVar23 + 0x40))(plVar26);
        if (cStack00000000000000ac != '\0') {
          if (cStack00000000000000ac != '\x02') goto LAB_0da616a1;
          (*_uStack0000000000000098)(5,&stack0x00000088,plVar26);
        }
      }
      *(int *)(lVar23 + 0x38) = _uStack0000000000000098;
      *(int *)(lVar23 + 0x3c) = iStack000000000000009c;
      *(undefined4 *)(lVar23 + 0x40) = uStack00000000000000a0;
      *(undefined4 *)(lVar23 + 0x44) = uStack00000000000000a4;
      *(undefined4 *)(lVar23 + 0x48) = uStack00000000000000a8;
      *(char *)(lVar23 + 0x4c) = cStack00000000000000ac;
    }
    func_0x0412a280(puVar18,0x28);
    if (_uStack00000000000000a0 != (code *)0x0) {
      (*_uStack00000000000000a0)(&stack0x00000088);
    }
    (*(code *)&UNK_048b49f0)(&stack0x00000000);
  }
  else {
    iVar13 = *(int *)(pbVar25 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar14 = func_0x04108328(&DAT_0f550768), iVar14 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar13 == _DAT_0f550754) goto LAB_0da6144a;
  }
  func_0x0daa9ac0(&stack0x00000080,&stack0x00000580,&UNK_011ea907,0xb,1);
  plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar26 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar26 = (long)&UNK_0f491270;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar23 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar26;
    (**(code **)(lVar23 + 8))();
    plVar26 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar26;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_0daaa1f0;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_0daa7c10;
  in_stack_00000040 = &UNK_0daaa2b0;
  in_stack_00000048 = &UNK_0daaa470;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(_uStack0000000000000088,&stack0x00000000);
  plVar26 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar19 = in_stack_00000060 + 1;
    lVar23 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar26);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daa9700(&stack0x00000080,CONCAT44(in_stack_00000244,in_stack_00000240) + 0x18);
  if (iStack000000000000009c == 2) {
    piVar20 = *(int **)(*(long *)(_uStack0000000000000090 + 0x78) + 0x60);
    iVar13 = *piVar20;
    while (iVar13 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar13 = *piVar20;
    }
    puVar17 = *(ulong **)(piVar20 + 0xc);
    while (puVar17 != _uStack0000000000000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar17 = *(ulong **)(piVar20 + 0xc);
    }
LAB_0da6195f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iStack000000000000009c == 1) {
      piVar20 = *(int **)(*(long *)(_uStack0000000000000090 + 0x78) + 0x48);
      iVar13 = *piVar20;
      while (iVar13 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar13 = *piVar20;
      }
      goto LAB_0da6195f;
    }
    if (iStack000000000000009c == 0) {
      *(uint *)(_uStack0000000000000090 + 0x18) =
           *(uint *)(_uStack0000000000000090 + 0x18) | 0x40000;
    }
  }
  func_0x0daa9ac0(&stack0x00000080,&stack0x000004c0,&UNK_014b95b7,7,0x10);
  plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar26 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar26 = (long)&UNK_0f012438;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar23 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar26;
    (**(code **)(lVar23 + 8))();
    plVar26 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar26;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_05fc5e00;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_05dcda00;
  in_stack_00000040 = &UNK_0daaa8e0;
  in_stack_00000048 = &UNK_0daaaa40;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(_uStack0000000000000088,&stack0x00000000);
  plVar26 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar19 = in_stack_00000060 + 1;
    lVar23 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar26);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daa9700(&stack0x00000080,CONCAT44(in_stack_00000244,in_stack_00000240) + 0x18);
  if (iStack000000000000009c == 2) {
    piVar20 = *(int **)(*(long *)(_uStack0000000000000090 + 0x78) + 0x60);
    iVar13 = *piVar20;
    while (iVar13 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar13 = *piVar20;
    }
    puVar17 = *(ulong **)(piVar20 + 0xc);
    while (puVar17 != _uStack0000000000000088) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar17 = *(ulong **)(piVar20 + 0xc);
    }
LAB_0da61bff:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (iStack000000000000009c == 1) {
      piVar20 = *(int **)(*(long *)(_uStack0000000000000090 + 0x78) + 0x48);
      iVar13 = *piVar20;
      while (iVar13 != _uStack0000000000000098) {
        piVar20 = piVar20 + 0x1a;
        iVar13 = *piVar20;
      }
      goto LAB_0da61bff;
    }
    if (iStack000000000000009c == 0) {
      *(uint *)(_uStack0000000000000090 + 0x18) =
           *(uint *)(_uStack0000000000000090 + 0x18) | 0x40000;
    }
  }
  func_0x0daa9ac0(&stack0x00000080,&stack0x00000500,&UNK_01471f55,0xf,0x10);
  plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar26 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar26 = (long)&UNK_0f012438;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar23 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar26;
    (**(code **)(lVar23 + 8))();
    plVar26 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar26;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_05fc5e00;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_05dcda00;
  in_stack_00000040 = &UNK_0daaac20;
  in_stack_00000048 = &UNK_0daaad80;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(_uStack0000000000000088,&stack0x00000000);
  plVar26 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar19 = in_stack_00000060 + 1;
    lVar23 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar26);
    }
  }
  func_0x0daa9cc0(&stack0x00000080);
  func_0x048b0bc0(&stack0x00000098);
  func_0x0daa9ac0(&stack0x00000080,&stack0x000003c0,&UNK_01222d0e,6,1);
  plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar26 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar26 = (long)&UNK_0ef474e0;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar23 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)plVar26;
    (**(code **)(lVar23 + 8))();
    plVar26 = (long *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)plVar26;
  in_stack_00000020 = 0;
  in_stack_00000028 = &UNK_049119f0;
  in_stack_00000030 = &SUB_048b06d0;
  in_stack_00000038 = &UNK_0490fc00;
  in_stack_00000040 = &UNK_0daaaf60;
  in_stack_00000048 = &UNK_0daab160;
  in_stack_00000050 = (long *)((ulong)in_stack_00000050 & 0xffffffff00000000);
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  func_0x048b05a0(_uStack0000000000000088,&stack0x00000000);
  plVar26 = in_stack_00000060;
  if (in_stack_00000060 != (long *)0x0) {
    LOCK();
    plVar19 = in_stack_00000060 + 1;
    lVar23 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
      func_0x0412c2d0(plVar26);
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
  in_stack_00000038 = (undefined *)0x0;
  in_stack_00000040 = (undefined *)0x0;
  in_stack_00000028 = (undefined *)0x0;
  in_stack_00000030 = (undefined1 *)0x0;
  in_stack_00000078 = 0;
  func_0x041679a0(&stack0x00000020);
  in_stack_00000028 = (undefined *)func_0x041681f0(&stack0x00000020,0xf547a30);
  in_stack_00000030 = (undefined1 *)func_0x041681f0(&stack0x00000020,0xf547770);
  in_stack_00000038 = (undefined *)0x0;
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
  lVar9 = in_stack_00000058;
  plVar26 = in_stack_00000050;
  lVar8 = (long)in_stack_00000048;
  lVar7 = (long)in_stack_00000040;
  lVar6 = (long)in_stack_00000038;
  lVar22 = (long)in_stack_00000030;
  lVar23 = (long)in_stack_00000028;
  if (in_stack_00000050 != (long *)0x0) {
    LOCK();
    in_stack_00000050[1] = in_stack_00000050[1] + 1;
    UNLOCK();
  }
  uVar27 = (ulong)in_stack_00000060;
  uVar28 = in_stack_00000068;
  lVar29 = in_stack_00000070;
  if (((ulong)in_stack_00000060 & 1) != 0) {
    func_0x0412e5e0(&stack0x000004a0,in_stack_00000070,in_stack_00000068);
    uVar27 = in_stack_000004a0;
    uVar28 = in_stack_000004a8;
    lVar29 = in_stack_000004b0;
  }
  lVar10 = in_stack_00000078;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f0fb8c0;
  *(undefined4 *)(plVar19 + 4) = 0xffffffff;
  *(undefined4 *)((long)plVar19 + 0x24) = 0xffffffff;
  *(undefined4 *)(plVar19 + 5) = 0;
  *(undefined4 *)((long)plVar19 + 0x2c) = 0;
  *(undefined1 *)(plVar19 + 6) = 0xff;
  plVar19[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar19 + 7,&stack0x00000460);
  plVar19[8] = lVar23;
  plVar19[9] = lVar22;
  plVar19[10] = lVar6;
  plVar19[0xb] = lVar7;
  plVar19[0xc] = lVar8;
  plVar19[0xd] = (long)plVar26;
  plVar19[0xe] = lVar9;
  plVar19[0x11] = lVar29;
  *(int *)(plVar19 + 0xf) = (int)uVar27;
  *(int *)((long)plVar19 + 0x7c) = (int)(uVar27 >> 0x20);
  *(int *)(plVar19 + 0x10) = (int)uVar28;
  *(int *)((long)plVar19 + 0x84) = (int)((ulong)uVar28 >> 0x20);
  plVar19[0x12] = lVar10;
  func_0x0da63260(&stack0x00000340,&stack0x00000300,&stack0x00000400);
  func_0x0daa9700(&stack0x00000080,CONCAT44(in_stack_00000344,in_stack_00000340) + 0x18);
  if (iStack000000000000009c == 2) {
    piVar20 = *(int **)(*(long *)(_uStack0000000000000090 + 0x78) + 0x60);
    iVar13 = *piVar20;
    while (iVar13 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x16;
      iVar13 = *piVar20;
    }
    for (; *(ulong **)(piVar20 + 0xc) != _uStack0000000000000088; piVar20 = *(int **)(piVar20 + 0xe)
        ) {
    }
  }
  else {
    if (iStack000000000000009c != 1) {
      if (iStack000000000000009c == 0) {
        *(uint *)(_uStack0000000000000090 + 0x18) =
             *(uint *)(_uStack0000000000000090 + 0x18) | 0x40000;
      }
      goto LAB_0da6237e;
    }
    piVar20 = *(int **)(*(long *)(_uStack0000000000000090 + 0x78) + 0x48);
    iVar13 = *piVar20;
    while (iVar13 != _uStack0000000000000098) {
      piVar20 = piVar20 + 0x1a;
      iVar13 = *piVar20;
    }
  }
  *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
LAB_0da6237e:
  func_0x0daa9ac0(&stack0x00000080,&stack0x00000340,&UNK_0123d5a9,4,0x10);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0ef474e0;
  if (_uStack0000000000000098 != (code *)0x0) {
    lVar23 = *(long *)_uStack0000000000000098;
    _uStack0000000000000098 = (code *)puVar15;
    (**(code **)(lVar23 + 8))();
    puVar15 = (undefined8 *)_uStack0000000000000098;
  }
  _uStack0000000000000098 = (code *)puVar15;
  func_0x048b05a0(_uStack0000000000000088,&stack0x00000298);
  func_0x0daa9cc0(&stack0x00000080);
  in_stack_000001d8 = 0;
  uStack00000000000001dc = 0;
  uStack00000000000001e0 = 0;
  uStack00000000000001e4 = 0;
  func_0x048b0bc0(&stack0x00000098);
  _uStack00000000000000a0 = (code *)0x0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  _uStack00000000000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000f8 = 0;
  _uStack0000000000000088 = (ulong *)0xffffffffffffffff;
  _uStack0000000000000090 = 0;
  _uStack0000000000000098 = (code *)0xff;
  in_stack_00000080 = &UNK_0f4e3c70;
  func_0x041679a0(&stack0x000000a0);
  _uStack00000000000000a8 = func_0x041681f0(&stack0x000000a0,0xf547a30);
  in_stack_000000b0 = func_0x041681f0(&stack0x000000a0,0xf547770);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  func_0x0ed60210(&stack0x00000080,&stack0x00000210,0);
  uVar12 = uStack0000000000000098;
  uVar3 = uStack0000000000000088;
  uVar4 = uStack000000000000008c;
  uVar5 = uStack0000000000000090;
  uVar11 = uStack0000000000000094;
  func_0x04167a20(&stack0x000005e0,&stack0x000000a0);
  lVar9 = in_stack_000000d8;
  plVar26 = in_stack_000000d0;
  lVar8 = in_stack_000000c8;
  lVar7 = in_stack_000000c0;
  lVar6 = in_stack_000000b8;
  lVar22 = in_stack_000000b0;
  lVar23 = _uStack00000000000000a8;
  if (in_stack_000000d0 != (long *)0x0) {
    LOCK();
    in_stack_000000d0[1] = in_stack_000000d0[1] + 1;
    UNLOCK();
  }
  uVar27 = in_stack_000000e0;
  uVar28 = in_stack_000000e8;
  lVar29 = in_stack_000000f0;
  if ((in_stack_000000e0 & 1) != 0) {
    func_0x0412e5e0(&stack0x00000620,in_stack_000000f0,in_stack_000000e8);
    uVar27 = in_stack_00000620;
    uVar28 = in_stack_00000628;
    lVar29 = in_stack_00000630;
  }
  lVar10 = in_stack_000000f8;
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar21 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0f0fb8c0;
  *(undefined4 *)(plVar21 + 4) = uVar3;
  *(undefined4 *)((long)plVar21 + 0x24) = uVar4;
  *(undefined4 *)(plVar21 + 5) = uVar5;
  *(undefined4 *)((long)plVar21 + 0x2c) = uVar11;
  *(undefined1 *)(plVar21 + 6) = uVar12;
  plVar21[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar21 + 7,&stack0x000005e0);
  plVar21[8] = lVar23;
  plVar21[9] = lVar22;
  plVar21[10] = lVar6;
  plVar21[0xb] = lVar7;
  plVar21[0xc] = lVar8;
  plVar21[0xd] = (long)plVar26;
  plVar21[0xe] = lVar9;
  plVar21[0x11] = lVar29;
  *(int *)(plVar21 + 0xf) = (int)uVar27;
  *(int *)((long)plVar21 + 0x7c) = (int)(uVar27 >> 0x20);
  *(int *)(plVar21 + 0x10) = (int)uVar28;
  *(int *)((long)plVar21 + 0x84) = (int)((ulong)uVar28 >> 0x20);
  plVar21[0x12] = lVar10;
  func_0x0da63260(&stack0x00000150,&stack0x000001d0,&stack0x00000540);
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar26 = plVar21 + 1;
    lVar23 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x04167a40(&stack0x000005e0);
  if ((in_stack_000000e0 & 1) == 0) {
    in_stack_00000080 = &UNK_0f4e3c70;
    plVar26 = in_stack_000000d0;
  }
  else {
    in_stack_00000080 = &UNK_0f4e3c70;
    func_0x0412a280(in_stack_000000f0,in_stack_000000e0 & 0xfffffffffffffffe);
    plVar26 = in_stack_000000d0;
  }
  in_stack_000000d0 = plVar26;
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar21 = plVar26 + 1;
    lVar23 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      func_0x0412c2d0(plVar26);
    }
  }
  func_0x04167a40(&stack0x000000a0);
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar26 = plVar19 + 1;
    lVar23 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x04167a40(&stack0x00000460);
  plVar26 = in_stack_00000050;
  if (((ulong)in_stack_00000060 & 1) != 0) {
    func_0x0412a280(in_stack_00000070,(ulong)in_stack_00000060 & 0xfffffffffffffffe);
    plVar26 = in_stack_00000050;
  }
  in_stack_00000050 = plVar26;
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar19 = plVar26 + 1;
    lVar23 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      func_0x0412c2d0(plVar26);
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
 */
