/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8a14040
 * Label: JigsawStructureDataPacket::vslot10
 * Body:  [[08a14040, 08a14265]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawStructureDataPacket__vslot10
               (ulong param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 param_5,
               long param_6)

{
  char cVar1;
  ulong in_RAX;
  long lVar2;
  long unaff_RBX;
  undefined8 in_R11;
  undefined8 *unaff_R15;
  long lVar3;
  long in_stack_00000028;
  long in_stack_00000050;
  char in_stack_00000060;
  
  if (param_3 >> 0x20 == 0) {
    param_1 = (in_RAX & 0xffffffff) % (param_1 & 0xffffffff);
  }
  else {
    param_1 = in_RAX % param_1;
  }
  if (param_1 != param_4) {
    *(undefined8 **)(param_6 + param_1 * 8) = param_2;
    in_R11 = *unaff_R15;
  }
  *param_2 = in_R11;
  *unaff_R15 = 0;
  *(long *)(unaff_RBX + 0x378) = *(long *)(unaff_RBX + 0x378) + -1;
  func_0x08a99950(unaff_R15 + 3);
  func_0x0412a280();
  lVar3 = *(long *)(unaff_RBX + 0x268) + 0x18;
  lVar2 = func_0x09e2c380(lVar3);
  if (lVar2 != 0) {
    func_0x09e2c700(&stack0x00000050,lVar3,lVar2);
    lVar2 = in_stack_00000050;
    in_stack_00000050 = 0;
    if (lVar2 != 0) {
      if (in_stack_00000060 == '\x01') {
        lVar3 = *(long *)(lVar2 + 0xc0);
        *(undefined8 *)(lVar2 + 0xc0) = 0;
        if (lVar3 != 0) {
          in_stack_00000028 = lVar3 + 0xb8;
          func_0x09e296a0(&stack0x00000028);
          func_0x0412a280(lVar3,0xd8);
        }
      }
      func_0x0412a280(lVar2,200);
    }
  }
  if (*(long *)(unaff_RBX + 0x88) == 0) {
    cVar1 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
    if (cVar1 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if (**(char **)(unaff_RBX + 0x88) == '\0') {
    cVar1 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
    if (cVar1 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  cVar1 = (**(code **)(**(long **)(unaff_RBX + 0x98) + 0xb30))();
  if (cVar1 != '\0') {
    if (*(long *)(unaff_RBX + 0x88) == 0) {
      cVar1 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
      if (cVar1 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if (**(char **)(unaff_RBX + 0x88) == '\0') {
      cVar1 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
      if (cVar1 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    (**(code **)(**(long **)(unaff_RBX + 0x98) + 0x7a0))();
  }
  func_0x08a15040();
  return;
}


