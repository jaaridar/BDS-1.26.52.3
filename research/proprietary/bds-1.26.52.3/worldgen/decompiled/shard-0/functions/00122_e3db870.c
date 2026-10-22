/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3db870
 * Label: string:minecraft:biome_filter
 * Body:  [[0e3db803, 0e3db86e] [0e3db870, 0e3dd6f7] [0e3dd808, 0e3dd97d]]
 * Ghidra: FUN_0e3db870
 */


/* WARNING: Instruction at (ram,0x0e3db872) overlaps instruction at (ram,0x0e3db871)
    */
/* WARNING: Removing unreachable block (ram,0x0e3db803) */
/* WARNING: Removing unreachable block (ram,0x0e3db810) */
/* WARNING: Removing unreachable block (ram,0x0e3db813) */
/* WARNING: Removing unreachable block (ram,0x0e3dd808) */
/* WARNING: Removing unreachable block (ram,0x0e3db84d) */
/* WARNING: Removing unreachable block (ram,0x0e3db86c) */
/* WARNING: Removing unreachable block (ram,0x0e3db872) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000070 : 0x0e3db9dc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0e3db870(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  char *in_RAX;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined *puStack0000000000000028;
  undefined *puStack0000000000000038;
  undefined *puStack0000000000000040;
  undefined *puStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  long *plStack0000000000000060;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  long *in_stack_00000080;
  undefined4 in_stack_00000138;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined1 in_stack_00000168;
  
  pbVar1 = (byte *)(in_RAX + -0x75);
  *pbVar1 = *pbVar1 | (byte)param_4;
  if ((char)*pbVar1 < '\0') {
    *in_RAX = *in_RAX + (char)in_RAX;
  }
  else {
    *in_RAX = *in_RAX + (char)in_RAX;
    *(char *)(param_4 + 0x48082444) = *(char *)(param_4 + 0x48082444) + (byte)param_4;
  }
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1b3bd0;
  puStack0000000000000038 = &UNK_0e1b38b0;
  puStack0000000000000040 = &UNK_0e490c20;
  puStack0000000000000048 = &UNK_0e490d90;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(param_1,&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x000005e8,&UNK_0142248e,0xf);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b16d0;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1b4d10;
  puStack0000000000000038 = &UNK_0e1b49f0;
  puStack0000000000000040 = &UNK_0e490f70;
  puStack0000000000000048 = &UNK_0e4910d0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000628,&UNK_01335d05,0x17);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1748;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1b5e30;
  puStack0000000000000038 = &UNK_0e1b5b10;
  puStack0000000000000040 = &UNK_0e4912b0;
  puStack0000000000000048 = &UNK_0e491410;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000668,&UNK_011e233c,0x1a);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b17c0;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1b71d0;
  puStack0000000000000038 = &UNK_0e1b6e90;
  puStack0000000000000040 = &UNK_0e4915f0;
  puStack0000000000000048 = &UNK_0e4917c0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x000006a8,&UNK_012e772f,0xe);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b8368;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e2f7860;
  puStack0000000000000038 = &UNK_0e2f7520;
  puStack0000000000000040 = &UNK_0e4919a0;
  puStack0000000000000048 = &UNK_0e491c20;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x000006e8,&UNK_0129a9ee,0x19);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1838;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1b9cb0;
  puStack0000000000000038 = &UNK_0e1b9970;
  puStack0000000000000040 = &UNK_0e491e00;
  puStack0000000000000048 = &UNK_0e492000;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000728,&UNK_011fde56,0x18);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b18b0;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1bc2a0;
  puStack0000000000000038 = &UNK_0e1bbf80;
  puStack0000000000000040 = &UNK_0e4921e0;
  puStack0000000000000048 = &UNK_0e492340;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000768,&UNK_01267652,0x18);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1928;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1bd3d0;
  puStack0000000000000038 = &UNK_0e1bd0b0;
  puStack0000000000000040 = &UNK_0e492520;
  puStack0000000000000048 = &UNK_0e492690;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x000007a8,&UNK_013bbc08,0x16);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b4480;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e26a3f0;
  puStack0000000000000038 = &UNK_0e26a0b0;
  puStack0000000000000040 = &UNK_0e492870;
  puStack0000000000000048 = &UNK_0e492a30;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x000007e8,&DAT_012c5efa,0x14);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b19a0;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1c0fd0;
  puStack0000000000000038 = &UNK_0e1c0c90;
  puStack0000000000000040 = &UNK_0e492c10;
  puStack0000000000000048 = &UNK_0e492e10;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000828,&UNK_013eefd3,0x10);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1a18;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1c2500;
  puStack0000000000000038 = &UNK_0e1c21c0;
  puStack0000000000000040 = &UNK_0e492ff0;
  puStack0000000000000048 = &UNK_0e4931c0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000868,&UNK_01489283,0x10);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1a90;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1c37b0;
  puStack0000000000000038 = &UNK_0e1c3490;
  puStack0000000000000040 = &UNK_0e4933a0;
  puStack0000000000000048 = &UNK_0e493520;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x000008a8,&UNK_01350d4d,0x14);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1b08;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1c4bc0;
  puStack0000000000000038 = &UNK_0e1c4880;
  puStack0000000000000040 = &UNK_0e493700;
  puStack0000000000000048 = &UNK_0e493930;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x000008e8,&UNK_0136ad12,0x11);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1b80;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1c6000;
  puStack0000000000000038 = &UNK_0e1c5cc0;
  puStack0000000000000040 = &UNK_0e493b10;
  puStack0000000000000048 = &UNK_0e493c80;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000928,&UNK_014a4777,0x18);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1bf8;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1c7250;
  puStack0000000000000038 = &UNK_0e1c6f30;
  puStack0000000000000040 = &UNK_0e493e60;
  puStack0000000000000048 = &UNK_0e493fc0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000968,&UNK_011e228e,0x19);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1c70;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1c8380;
  puStack0000000000000038 = &UNK_0e1c8060;
  puStack0000000000000040 = &UNK_0e4941a0;
  puStack0000000000000048 = &UNK_0e494300;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x000009a8,&UNK_01408619,0x16);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b9010;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e3f5c90;
  puStack0000000000000038 = &UNK_0e3f58c0;
  puStack0000000000000040 = &UNK_0e4944e0;
  puStack0000000000000048 = &UNK_0e494850;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x000009e8,&UNK_013a11b5,0xe);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1ce8;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1cf580;
  puStack0000000000000038 = &UNK_0e1cf240;
  puStack0000000000000040 = &UNK_0e494a30;
  puStack0000000000000048 = &UNK_0e494bb0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000a28,&UNK_012ccabc,0x13);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1d60;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1d0950;
  puStack0000000000000038 = &UNK_0e1d0610;
  puStack0000000000000040 = &UNK_0e494d90;
  puStack0000000000000048 = &UNK_0e494f10;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000a68,&UNK_0138617a,0x17);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1dd8;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1d1aa0;
  puStack0000000000000038 = &UNK_0e1d1780;
  puStack0000000000000040 = &UNK_0e4950f0;
  puStack0000000000000048 = &UNK_0e495250;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000aa8,&UNK_012e74a9,0x17);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f4b1e50;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = in_stack_00000080;
  }
  in_stack_00000080 = plVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e1d2f70;
  puStack0000000000000038 = &UNK_0e1d2c30;
  puStack0000000000000040 = &UNK_0e495430;
  puStack0000000000000048 = &UNK_0e4955b0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  func_0x0e48ceb0(&stack0x00000068,&stack0x00000138,&UNK_011fddb3,0x12);
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar5 = &UNK_0f4b8458;
  if (in_stack_00000080 != (long *)0x0) {
    lVar3 = *in_stack_00000080;
    in_stack_00000080 = puVar5;
    (**(code **)(lVar3 + 8))();
    puVar5 = in_stack_00000080;
  }
  in_stack_00000080 = puVar5;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 1;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = &UNK_0e2fd230;
  puStack0000000000000038 = &UNK_0e2fcf10;
  puStack0000000000000040 = &UNK_0e495790;
  puStack0000000000000048 = &UNK_0e495900;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  plStack0000000000000060 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack0000000000000074,uStack0000000000000070),&stack0x00000000);
  plVar4 = plStack0000000000000060;
  if (plStack0000000000000060 != (long *)0x0) {
    LOCK();
    plVar2 = plStack0000000000000060 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0e48d110(&stack0x00000068);
  func_0x048b0bc0(&stack0x00000080);
  return;
}


