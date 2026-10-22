/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8486040
 * Label: FeatureRegistryPacket::vslot8
 * Body:  [[08485fd0, 0848603d] [08486040, 0848605b] [08486060, 084860a5] [0848615e, 084861d0] [084863aa, 084863df] [084863e1, 084863f2]]
 * Ghidra: wg_FeatureRegistryPacket__vslot8
 */


/* WARNING: Instruction at (ram,0x08486042) overlaps instruction at (ram,0x08486041)
    */

undefined8 *
wg_FeatureRegistryPacket__vslot8(undefined8 param_1,undefined1 *param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RBX;
  long unaff_RBP;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_R12;
  long unaff_R14;
  long lVar6;
  undefined8 *unaff_retaddr;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  out(*param_2,param_3);
  func_0x7d35e58e();
  do {
    lVar6 = *(long *)(unaff_R14 + -0x10);
    lVar4 = unaff_RBP;
    if (unaff_RBP != lVar6) {
      do {
        if ((*(char *)(lVar6 + -0x10) == '\x01') && ((*(byte *)(lVar6 + -0x28) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar6 + -0x18),
                          *(ulong *)(lVar6 + -0x28) & 0xfffffffffffffffe);
        }
        if ((*(byte *)(lVar6 + -0x40) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar6 + -0x30),
                          *(ulong *)(lVar6 + -0x40) & 0xfffffffffffffffe);
        }
        lVar6 = lVar6 + -0x48;
      } while (lVar6 != unaff_RBP);
      lVar4 = *(long *)(unaff_R14 + -0x18);
    }
    *(long *)(unaff_R14 + -0x10) = unaff_RBP;
    func_0x0412a280(lVar4,*(long *)(unaff_R14 + -8) - lVar4);
    *(long *)(unaff_R14 + -0x18) = 0;
    *(undefined8 *)(unaff_R14 + -0x10) = 0;
    *(undefined8 *)(unaff_R14 + -8) = 0;
    puVar5 = unaff_R12;
    lVar6 = unaff_R14;
    do {
      uVar1 = *(undefined4 *)((long)puVar5 + -0x14);
      uVar2 = *(undefined4 *)(puVar5 + -2);
      uVar3 = *(undefined4 *)((long)puVar5 + -0xc);
      *(undefined4 *)(lVar6 + -0x18) = *(undefined4 *)(puVar5 + -3);
      *(undefined4 *)(lVar6 + -0x14) = uVar1;
      *(undefined4 *)(lVar6 + -0x10) = uVar2;
      *(undefined4 *)(lVar6 + -0xc) = uVar3;
      *(undefined8 *)(lVar6 + -8) = puVar5[-1];
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      puVar5[-1] = 0;
      unaff_R12 = puVar5 + -5;
      unaff_R14 = lVar6 + -0x28;
      if (unaff_RBX == unaff_R12) {
        lVar6 = 0x28;
        if (*(undefined8 **)(in_stack_00000008 + 8) <= in_stack_00000018) {
          lVar6 = 0;
        }
        if (in_stack_00000018 < unaff_RBX) {
          lVar6 = 0;
        }
        puVar5 = (undefined8 *)((long)in_stack_00000018 + lVar6);
        *(undefined4 *)(unaff_RBX + 1) = *(undefined4 *)((long)in_stack_00000018 + lVar6 + 8);
        *unaff_RBX = *(undefined8 *)((long)in_stack_00000018 + lVar6);
        if (unaff_RBX != puVar5) {
          func_0x08474b90(unaff_RBX + 2,puVar5[2],puVar5[3],
                          ((long)(puVar5[3] - puVar5[2]) >> 3) * -0x71c71c71c71c71c7);
        }
        *unaff_retaddr = in_stack_00000010;
        unaff_retaddr[1] = &UNK_08486820;
        unaff_retaddr[4] = &UNK_084868a0;
        *(undefined4 *)(unaff_retaddr + 6) = 0x5849e78c;
        unaff_retaddr[5] = 0;
        *(undefined1 *)((long)unaff_retaddr + 0x34) = 2;
        unaff_retaddr[2] = unaff_RBX;
        return unaff_retaddr;
      }
      *(undefined4 *)(lVar6 + -0x48) = *(undefined4 *)(puVar5 + -9);
      *(undefined8 *)(lVar6 + -0x50) = puVar5[-10];
      unaff_RBP = *(long *)(lVar6 + -0x40);
      puVar5 = unaff_R12;
      lVar6 = unaff_R14;
    } while (unaff_RBP == 0);
  } while( true );
}


