/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa19eab0
 * Label: string:PlaceJigsawError
 * Body:  [[0a19e918, 0a19e93d] [0a19eab0, 0a19eaf0] [0a19eaf3, 0a19ed28]]
 * Ghidra: FUN_0a19eab0
 */


/* WARNING: Instruction at (ram,0x0a19eaee) overlaps instruction at (ram,0x0a19eaec)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0a19eab0(long param_1,undefined4 *param_2,undefined2 param_3,long param_4,code *param_5,
                 undefined8 param_6,undefined8 param_7,undefined1 *param_8,undefined8 param_9,
                 undefined8 param_10,char param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14,undefined8 param_15,char param_16)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_RBX;
  long unaff_RBP;
  code *in_stack_00000070;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined1 *in_stack_000000b8;
  undefined1 in_stack_000000c0;
  uint in_stack_00000170;
  undefined1 in_stack_00000180;
  uint uVar6;
  
  *(undefined1 *)((long)unaff_RBX + param_1 + 0x4d) = 0;
  out(*param_2,param_3);
  pbVar1 = (byte *)(param_4 + -0x75);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - (byte)param_4;
  if (bVar2 < (byte)param_4 || *pbVar1 == 0) {
    if (param_2 == (undefined4 *)0xfffffffffffffffc) {
      (*param_5)(0);
    }
    lVar4 = func_0x0488e200();
    in_stack_00000180 = 0;
    uVar3 = *(uint *)(lVar4 + 0xb8);
    uVar6 = 0xffffffff;
    if ((ulong)uVar3 != 0xffffffff) {
      in_stack_000000b8 = &stack0x00000180;
      (**(code **)(&UNK_0f206e98 + (ulong)uVar3 * 8))(&stack0x000000b8,lVar4 + 8);
      uVar6 = uVar3;
    }
    func_0x05e083d0(&param_13);
    in_stack_000000c0 = 0;
    in_stack_00000170 = 0xffffffff;
    if ((ulong)uVar6 != 0xffffffff) {
      param_8 = &stack0x000000c0;
      (**(code **)(&UNK_0f206e98 + (ulong)uVar6 * 8))(&param_8,&stack0x00000180);
      in_stack_00000170 = uVar6;
    }
    param_8 = (undefined1 *)((ulong)param_8 & 0xffffffffffffff00);
    param_11 = '\0';
    if (param_16 == '\x01') {
      if (((uint)param_13 & 1) == 0) {
        param_10 = param_15;
        param_8 = (undefined1 *)CONCAT44(param_13._4_4_,(uint)param_13);
        param_9._0_4_ = (undefined4)param_14;
        param_9._4_4_ = param_14._4_4_;
      }
      else {
        func_0x0412e5e0(&param_8,param_15,CONCAT44(param_14._4_4_,(undefined4)param_14));
      }
      param_11 = '\x01';
    }
    func_0x0a1268c0(&stack0x00000098);
    if ((param_11 == '\x01') && (((ulong)param_8 & 1) != 0)) {
      func_0x0412a280(param_10,(ulong)param_8 & 0xfffffffffffffffe);
    }
    if ((ulong)in_stack_00000170 != 0xffffffff) {
      (**(code **)(&UNK_0f206e88 + (ulong)in_stack_00000170 * 8))
                ((undefined1 *)((long)register0x00000020 + 0xf),&stack0x000000c0);
    }
    unaff_RBX[2] = (long)&UNK_0a198520;
    *(undefined4 *)(unaff_RBX + 4) = 0x4dfa04fc;
    unaff_RBX[3] = (long)&UNK_0a1987e0;
    *(undefined1 *)((long)unaff_RBX + 0x24) = 1;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *puVar5 = in_stack_00000098;
    *(undefined4 *)(puVar5 + 1) = in_stack_000000a0;
    *(undefined4 *)(puVar5 + 2) = uStack00000000000000a8;
    *(undefined4 *)((long)puVar5 + 0x14) = uStack00000000000000ac;
    *(undefined4 *)(puVar5 + 3) = uStack00000000000000b0;
    *(undefined4 *)((long)puVar5 + 0x1c) = uStack00000000000000b4;
    *unaff_RBX = (long)puVar5;
    unaff_RBX[5] = unaff_RBP;
    unaff_RBX[6] = 0;
    unaff_RBX[7] = (long)&UNK_0a198240;
    if ((param_16 == '\x01') && (((uint)param_13 & 1) != 0)) {
      func_0x0412a280(param_15,CONCAT44(param_13._4_4_,(uint)param_13) & 0xfffffffffffffffe);
    }
    if ((ulong)uVar6 != 0xffffffff) {
      (**(code **)(&UNK_0f206e88 + (ulong)uVar6 * 8))(&stack0x000000b8,&stack0x00000180);
    }
    if (in_stack_00000070 != (code *)0x0) {
      (*in_stack_00000070)(&stack0x00000058);
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


