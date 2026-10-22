/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc97b600
 * Label: _GLOBAL__N_1::WorldGeneratorAnon::StructureAccess::vslot0
 * Body:  [[0c97b470, 0c97b48d] [0c97b600, 0c97b6ad] [0c97b780, 0c97b7b3] [0c97b7c0, 0c97b7ee] [0c97b936, 0c97ba7f] [0c97ba97, 0c97bae6]]
 * Ghidra: wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  ulong in_RAX;
  ulong uVar6;
  uint *unaff_RBX;
  long lVar7;
  undefined8 *unaff_R13;
  long unaff_R14;
  uint *puVar8;
  uint *unaff_R15;
  bool bVar9;
  byte bStack0000000000000018;
  undefined5 uStack0000000000000019;
  undefined2 uStack000000000000001e;
  undefined1 in_stack_00000020;
  undefined5 uStack0000000000000021;
  undefined1 uStack0000000000000026;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  byte bStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  
  if (in_RAX == 0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar2 = _UNK_0148a9aa;
  *(ulong *)((long)unaff_R13 + 0xd) = CONCAT53(_UNK_0148a9a5,_DAT_0148a9a2);
  *(undefined8 *)((long)unaff_R13 + 0x15) = uVar2;
  uVar2 = CONCAT35(_DAT_0148a9a2,_UNK_0148a99d);
  *unaff_R13 = _DAT_0148a995;
  unaff_R13[1] = uVar2;
  *(undefined1 *)((long)unaff_R13 + 0x1d) = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = (long *)0x0;
  (**(code **)(_DAT_0f5ea138 + 0x90))
            (in_RAX & 0xffffffff,&DAT_0f5ea138,&stack0x00000000,&stack0x00000060);
  plVar5 = in_stack_00000030;
  func_0x0b69abb0();
  if ((bStack0000000000000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,
                    CONCAT26(uStack000000000000001e,
                             CONCAT51(uStack0000000000000019,bStack0000000000000018)) &
                    0xfffffffffffffffe);
  }
  plVar3 = in_stack_00000068;
  if (in_stack_00000068 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000068 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*in_stack_00000068 + 0x10))(in_stack_00000068);
      func_0x0412c2d0(plVar3);
    }
  }
  func_0x0412a280(unaff_R13,0x20);
  do {
    unaff_RBX = unaff_RBX + 1;
    if (unaff_RBX == unaff_R15) {
      lVar7 = *plVar5;
      if ((DAT_0f5ea4a0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5ea4a0), iVar4 != 0)) {
        func_0x08b670e0(&DAT_0f5ea138);
        func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
        func_0x0410844d(&DAT_0f5ea4a0);
        plVar5 = in_stack_00000030;
      }
      bStack0000000000000018 = 0x1a;
      uStack0000000000000019 = 0x702e697567;
      uStack000000000000001e = 0x6369;
      in_stack_00000020 = 0x6b;
      uStack0000000000000021 = 0x646c726f57;
      uStack0000000000000026 = 0;
      in_stack_00000050 = 0;
      in_stack_00000058 = (long *)0x0;
      (**(code **)(_DAT_0f5ea138 + 0x90))
                (&stack0x00000038,&DAT_0f5ea138,&stack0x00000018,&stack0x00000050);
      puVar8 = (uint *)(lVar7 + 0xe8);
      if (puVar8 != (uint *)&stack0x00000038) {
        if ((*(byte *)puVar8 & 1) == 0) {
          if ((_bStack0000000000000038 & 1) == 0) {
            *(long *)(lVar7 + 0xf8) = in_stack_00000048;
            *puVar8 = _bStack0000000000000038;
            *(undefined4 *)(lVar7 + 0xec) = uStack000000000000003c;
            *(undefined4 *)(lVar7 + 0xf0) = uStack0000000000000040;
            *(undefined4 *)(lVar7 + 0xf4) = uStack0000000000000044;
          }
          else {
            func_0x04885070(puVar8,in_stack_00000048,
                            CONCAT44(uStack0000000000000044,uStack0000000000000040));
          }
        }
        else {
          bVar9 = (_bStack0000000000000038 & 1) != 0;
          lVar7 = (long)&stack0x00000038 + 1;
          if (bVar9) {
            lVar7 = in_stack_00000048;
          }
          uVar6 = (ulong)(bStack0000000000000038 >> 1);
          if (bVar9) {
            uVar6 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
          }
          func_0x04885120(puVar8,lVar7,uVar6);
        }
      }
      if ((_bStack0000000000000038 & 1) != 0) {
        func_0x0412a280(in_stack_00000048,
                        CONCAT44(uStack000000000000003c,_bStack0000000000000038) &
                        0xfffffffffffffffe);
      }
      plVar3 = in_stack_00000058;
      if (in_stack_00000058 != (long *)0x0) {
        LOCK();
        plVar1 = in_stack_00000058 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*in_stack_00000058 + 0x10))(in_stack_00000058);
          func_0x0412c2d0(plVar3);
        }
      }
      if ((bStack0000000000000018 & 1) != 0) {
        func_0x0412a280(in_stack_00000028,
                        CONCAT26(uStack000000000000001e,
                                 CONCAT51(uStack0000000000000019,bStack0000000000000018)) &
                        0xfffffffffffffffe);
      }
      return plVar5;
    }
  } while (5 < (ulong)*unaff_RBX);
                    /* WARNING: Could not recover jumptable at 0x0c97b48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar5 = (long *)(*(code *)(*(int *)(unaff_R14 + (ulong)*unaff_RBX * 4) + unaff_R14))();
  return plVar5;
}



/* ---- referenced strings ----
 * 0x148a995  gui.editor.minecraftTestWorld
 * 0x148a9a2  necraftTestWorld
 */
