/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd780930
 * Label: string:Factory<Type> cereal::BasicFactory<SharedTypes::JigsawJointT
 * Body:  [[0d780930, 0d780b05]]
 * Ghidra: FUN_0d780930
 */


/* WARNING: Removing unreachable block (ram,0x0d7809d2) */
/* WARNING: Removing unreachable block (ram,0x0d7809e5) */
/* WARNING: Removing unreachable block (ram,0x0d780aac) */
/* WARNING: Removing unreachable block (ram,0x0d780abd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d780930(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 char *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  char *in_RAX;
  long lVar5;
  undefined4 *unaff_RBX;
  undefined8 unaff_R15;
  undefined4 uVar6;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined1 uStack0000000000000034;
  undefined *puStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined1 uStack0000000000000084;
  long in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  
  uStack0000000000000094 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  cVar4 = (char)in_RAX;
  param_5[(long)in_RAX] = param_5[(long)in_RAX] + cVar4;
  *(char *)(param_3 + -0x39) = *(char *)(param_3 + -0x39) + (char)((ulong)in_RAX >> 8);
  *in_RAX = *in_RAX + cVar4;
  *param_5 = *param_5 + cVar4;
  puStack0000000000000058 = &UNK_0f482e30;
  lVar5 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar5 == 0) {
    func_0x048b0de0(&stack0x00000010,&stack0x0000000f);
    _DAT_0f54fd90 = uStack0000000000000010;
    uRam000000000f54fd94 = uStack0000000000000014;
    uVar6 = uStack0000000000000018;
    uVar3 = uStack000000000000001c;
    _uStack0000000000000010 = 0;
    _uStack0000000000000018 = 0;
    plVar2 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar6;
    uRam000000000f54fd9c = uVar3;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        func_0x0412c2d0(plVar2);
      }
    }
    lVar5 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    uVar6 = 0;
    uStack0000000000000094 = 0;
    in_XMM0_Dc = 0;
    in_XMM0_Dd = 0;
  }
  in_stack_00000070 = &UNK_0d785e10;
  in_stack_00000080 = 0xec396b4b;
  in_stack_00000078 = 0;
  uStack0000000000000084 = 4;
  uStack0000000000000034 = 4;
  in_stack_00000060 = 0;
  _uStack0000000000000010 = unaff_R15;
  in_stack_00000088 = lVar5;
  in_stack_00000090 = uVar6;
  in_stack_00000098 = in_XMM0_Dc;
  uStack000000000000009c = in_XMM0_Dd;
  func_0x0ed6b850(&stack0x000000a0,&stack0x00000420,&stack0x00000010,&stack0x00000058);
  func_0x048e6440(&stack0x00000010,&stack0x000000a0);
  *(undefined **)(unaff_RBX + 4) = &UNK_0d785e10;
  *unaff_RBX = uStack0000000000000010;
  unaff_RBX[1] = uStack0000000000000014;
  unaff_RBX[2] = uStack0000000000000018;
  unaff_RBX[3] = uStack000000000000001c;
  func_0x048e65b0(&stack0x000000a0);
  return;
}


