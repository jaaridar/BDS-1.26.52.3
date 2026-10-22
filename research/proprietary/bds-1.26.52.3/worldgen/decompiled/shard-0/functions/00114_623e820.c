/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x623e820
 * Label: string:{}, ()NSt3__110__function6__funcIZN6Editor8Services19EditorJ
 * Body:  [[0623e820, 0623e909] [0623e94a, 0623ed86] [0623ed90, 0623ee31] [0623ef64, 0623ef74] [0623ef86, 0623ef96] [0623efa8, 0623efb8]]
 * Ghidra: FUN_0623e820
 */


/* WARNING: Removing unreachable block (ram,0x0623eab5) */
/* WARNING: Removing unreachable block (ram,0x0623eac7) */
/* WARNING: Removing unreachable block (ram,0x0623e8b2) */
/* WARNING: Removing unreachable block (ram,0x0623e8c4) */
/* WARNING: Removing unreachable block (ram,0x0623ec22) */
/* WARNING: Removing unreachable block (ram,0x0623ec34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0623e820(void)

{
  int iVar1;
  undefined4 uVar2;
  long in_RAX;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000030;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  int in_stack_00000098;
  undefined4 uStack000000000000009c;
  char in_stack_000000a0;
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
  undefined4 uStack00000000000000dc;
  char in_stack_000000e0;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  long *in_stack_00000108;
  undefined8 in_stack_00000208;
  
  (**(code **)(in_RAX + 8))();
  in_stack_00000008 = in_stack_00000100;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_06330fe0;
  func_0x048b05a0(in_stack_000000f8,&stack0x00000008);
  func_0x06330990(&stack0x000000f0);
  func_0x048b0bc0(&stack0x00000108);
  lVar3 = func_0x06331640(in_stack_00000208);
  if ((*(int *)(lVar3 + 0x60) == -0x2b3da790) && (*(long *)(lVar3 + 0x68) != 0)) {
    func_0x06331ca0(&stack0x000000b0);
  }
  else {
    func_0x06331ca0(&stack0x000000b0);
  }
  if (in_stack_000000e0 != '\0') {
    return;
  }
  func_0x06332550(&stack0x000000f0,&stack0x000000b0,&UNK_01341dbc,10);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f012080;
  if (in_stack_00000108 != (long *)0x0) {
    lVar3 = *in_stack_00000108;
    in_stack_00000108 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000108;
  }
  in_stack_00000108 = plVar4;
  in_stack_00000008 = in_stack_00000100;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_05dd3ca0;
  func_0x048b05a0(in_stack_000000f8,&stack0x00000008);
  func_0x06332740(&stack0x000000f0);
  in_stack_000000a0 = in_stack_000000e0;
  in_stack_00000090 = uStack00000000000000d0;
  uStack0000000000000094 = uStack00000000000000d4;
  in_stack_00000098 = iStack00000000000000d8;
  uStack000000000000009c = uStack00000000000000dc;
  in_stack_00000080 = uStack00000000000000c0;
  uStack0000000000000084 = uStack00000000000000c4;
  in_stack_00000088 = uStack00000000000000c8;
  uStack000000000000008c = uStack00000000000000cc;
  in_stack_00000070 = uStack00000000000000b0;
  uStack0000000000000074 = uStack00000000000000b4;
  in_stack_00000078 = uStack00000000000000b8;
  uStack000000000000007c = uStack00000000000000bc;
  func_0x048b0bc0(&stack0x00000108);
  func_0x06332550(&stack0x000000f0,&stack0x00000070,&UNK_011b95be,7);
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar5 = &UNK_0f011548;
  if (in_stack_00000108 != (long *)0x0) {
    lVar3 = *in_stack_00000108;
    in_stack_00000108 = puVar5;
    (**(code **)(lVar3 + 8))();
    puVar5 = in_stack_00000108;
  }
  in_stack_00000108 = puVar5;
  in_stack_00000008 = in_stack_00000100;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_05f26ec0;
  func_0x048b05a0(in_stack_000000f8,&stack0x00000008);
  func_0x06332740(&stack0x000000f0);
  uVar2 = uStack000000000000009c;
  iVar1 = in_stack_00000098;
  lVar3 = CONCAT44(uStack0000000000000074,in_stack_00000070);
  func_0x048b0bc0(&stack0x00000108);
  if (iVar1 != 4) {
    if (iVar1 != 1) {
      return;
    }
    lVar3 = lVar3 + 0x18;
    uVar6 = func_0x06331640(lVar3);
    lVar3 = func_0x048b0c90(lVar3,uVar6,uVar2,1);
    if (lVar3 == 0) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      func_0x048b0d20(&stack0x000000f0);
      lVar3 = in_stack_000000f0;
    }
    lVar3 = *(long *)(lVar3 + 0x58);
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0623ede4;
  }
  lVar3 = lVar3 + 0x18;
  uVar6 = func_0x06331640(lVar3);
  lVar3 = func_0x048b1040(lVar3,uVar6,uVar2,1);
  if (lVar3 == 0) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    func_0x048b10d0(&stack0x000000f0);
    lVar7 = *(long *)(in_stack_000000f0 + 0x38);
    lVar3 = in_stack_000000f0;
    if (lVar7 == 0) goto LAB_0623ed58;
LAB_0623ed7d:
    do {
      lVar3 = lVar7;
      lVar7 = *(long *)(lVar3 + 0x38);
      if (*(long *)(lVar3 + 0x38) == 0) {
        in_stack_000000f0 = 0;
        in_stack_000000f8 = 0;
        func_0x048b10d0(&stack0x000000f0);
        lVar7 = in_stack_000000f0;
      }
    } while (lVar7 != 0);
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x38);
    if (*(long *)(lVar3 + 0x38) != 0) goto LAB_0623ed7d;
LAB_0623ed58:
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    func_0x048b10d0(&stack0x000000f0);
    lVar7 = in_stack_000000f0;
    if (in_stack_000000f0 != 0) goto LAB_0623ed7d;
  }
  lVar3 = *(long *)(lVar3 + 0x48);
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_0623ede4:
  puVar5[1] = 100000;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 0xff;
  *puVar5 = &UNK_0f4e3cf0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined8 *)((long)puVar5 + 0x29) = 0;
  *(undefined8 *)((long)puVar5 + 0x31) = 0;
  plVar4 = *(long **)(lVar3 + 8);
  *(undefined8 **)(lVar3 + 8) = puVar5;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))();
  }
  return;
}


