/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc555610
 * Label: JigsawBlock::vslot119
 * Body:  [[0c5552db, 0c555314] [0c555610, 0c5556ea] [0c555922, 0c555b5f]]
 * Ghidra: wg_JigsawBlock__vslot119
 */


void wg_JigsawBlock__vslot119(void)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  long in_RAX;
  int iVar4;
  int iVar5;
  long unaff_RBX;
  undefined8 *puVar6;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  uint in_stack_00000038;
  undefined *in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000070;
  long in_stack_00000080;
  long in_stack_00000090;
  long in_stack_000000a0;
  long *in_stack_000000b8;
  uint in_stack_000000d0;
  
  if (in_RAX != 0) {
    func_0x0c451750(&stack0x00000178);
    func_0x0c451750(&stack0x00000210);
    func_0x0c0c66e0(&stack0x000000d8);
    func_0x0c451a30(&stack0x00000040,&stack0x000000d8);
    func_0x05a910a0(&stack0x000000d8);
    func_0x049c2320(&stack0x00000210);
    func_0x049c2320(&stack0x00000178);
  }
  if ((in_stack_00000048 == (long *)0x0) || (*in_stack_00000048 == 0)) {
    func_0x0c451a30(&stack0x00000040);
    if ((in_stack_00000048 == (long *)0x0) || ((long *)*in_stack_00000048 == (long *)0x0)) {
      in_stack_00000008._4_4_ = 0;
    }
    else {
      in_stack_00000008._4_4_ = (**(code **)(*(long *)*in_stack_00000048 + 0x128))();
    }
    sVar2 = func_0x0c4570e0();
    sVar3 = func_0x0c4570e0();
    iVar4 = in_stack_00000008._4_2_ * -0x6667;
    iVar5 = (((iVar4 >> 0x13) - (iVar4 >> 0x1f)) - (int)in_stack_00000008._4_2_) +
            (int)sVar3 + (int)sVar2;
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    if ((in_stack_00000048 != (long *)0x0) && (*in_stack_00000048 != 0)) {
      func_0x0c494c30(*in_stack_00000048,&stack0x00000040,(int)(short)iVar4);
    }
  }
  func_0x0c009ba0(&stack0x00000010);
  func_0x0c009ba0(&stack0x00000010);
  func_0x0c555ce0(&stack0x000000d8,&stack0x00000040,in_stack_00000010,in_stack_00000018,
                  (long)&stack0x00000008 + 3);
  func_0x0c451a30(&stack0x00000040,&stack0x000000d8);
  func_0x049c2320(&stack0x000000d8);
  func_0x0c5a6270(&stack0x00000028);
  func_0x0c451750();
  func_0x0c5a61d0(unaff_RBX + 0x98,&stack0x00000028);
  puVar1 = in_stack_00000010;
  puVar6 = in_stack_00000018;
  if (in_stack_00000010 != (undefined8 *)0x0) {
    while (puVar1 != puVar6) {
      puVar6 = puVar6 + -0x13;
      (**(code **)*puVar6)(puVar6);
    }
    in_stack_00000018 = puVar1;
    func_0x0412a280(in_stack_00000010,in_stack_00000020 - (long)in_stack_00000010);
  }
  if ((ulong)in_stack_000000d0 != 0xffffffff) {
    (**(code **)(&UNK_0f389278 + (ulong)in_stack_000000d0 * 8))(&stack0x000000d8);
  }
  in_stack_00000040 = &UNK_0f36e918;
  if (in_stack_000000b8 != (long *)0x0) {
    (**(code **)(*in_stack_000000b8 + 8))();
  }
  if (in_stack_00000090 != 0) {
    func_0x0412a280(in_stack_00000090,in_stack_000000a0 - in_stack_00000090);
  }
  if (in_stack_00000070 != 0) {
    func_0x0412a280(in_stack_00000070,in_stack_00000080 - in_stack_00000070);
  }
  if (in_stack_00000050 != (long *)0x0) {
    (**(code **)(*in_stack_00000050 + 8))();
  }
  if (in_stack_00000048 != (long *)0x0) {
    LOCK();
    *(int *)((long)in_stack_00000048 + 0xc) = *(int *)((long)in_stack_00000048 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)in_stack_00000048 + 0xc) < 1) && (*in_stack_00000048 == 0)) &&
       (in_stack_00000048 != (long *)0x0)) {
      func_0x0412a280(in_stack_00000048,0x10);
    }
  }
  if ((ulong)in_stack_00000038 != 0xffffffff) {
    (**(code **)(&UNK_0f389278 + (ulong)in_stack_00000038 * 8))(&stack0x000000d8,&stack0x00000028);
  }
  return;
}


