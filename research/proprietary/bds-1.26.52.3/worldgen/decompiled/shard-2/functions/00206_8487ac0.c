/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8487ac0
 * Label: FeatureRegistryPacket::vslot15
 * Body:  [[08487ac0, 08487ae0] [08487b1b, 08487c3a]]
 * Ghidra: wg_FeatureRegistryPacket__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FeatureRegistryPacket__vslot15(undefined8 param_1,int param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined8 *unaff_RBX;
  long lVar4;
  undefined8 unaff_R12;
  long unaff_R14;
  char *unaff_R15;
  ulong unaff_retaddr;
  ulong uVar5;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  
  if ((param_3 == '\0') && (param_2 != 0)) {
    cVar1 = *unaff_R15;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_R14 + 0x28);
    lVar4 = *(long *)(unaff_R14 + 0x30);
    if (lVar4 == 0) {
      (**(code **)(unaff_R14 + 0x38))(0);
      lVar4 = *(long *)(unaff_R14 + 0x30);
    }
    func_0x0488e200(uVar2,lVar4,0x685ff748);
    cVar1 = *unaff_R15;
  }
  if (cVar1 == '\0') {
    uVar5 = 0;
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    func_0x08474080(&stack0x00000000,*(long *)(unaff_R15 + 0x18),*(long *)(unaff_R15 + 0x20),
                    (*(long *)(unaff_R15 + 0x20) - *(long *)(unaff_R15 + 0x18) >> 3) *
                    -0x3333333333333333);
  }
  else {
    uVar5 = unaff_retaddr & 0xffffffffffffff00;
  }
  unaff_RBX[2] = &UNK_08486c70;
  *(undefined4 *)(unaff_RBX + 4) = 0x3fd17181;
  unaff_RBX[3] = &UNK_08487030;
  *(undefined1 *)((long)unaff_RBX + 0x24) = 1;
  puVar3 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar3 == (ulong *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  if (cVar1 == '\0') {
    *puVar3 = uVar5;
    puVar3[1] = in_stack_00000008;
    puVar3[2] = in_stack_00000010;
    *(undefined1 *)(puVar3 + 3) = 1;
  }
  *unaff_RBX = puVar3;
  unaff_RBX[5] = unaff_R12;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = &UNK_08486ac0;
  return;
}


