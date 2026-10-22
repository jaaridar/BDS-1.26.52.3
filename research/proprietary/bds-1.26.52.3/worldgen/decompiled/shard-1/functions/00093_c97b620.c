/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc97b620
 * Label: _GLOBAL__N_1::WorldGeneratorAnon::StructureAccess::vslot2
 * Body:  [[0c97b470, 0c97b48d] [0c97b620, 0c97b6ad] [0c97b780, 0c97b7b3] [0c97b7c0, 0c97b7dd] [0c97b936, 0c97ba7f] [0c97ba97, 0c97bae6]]
 * Ghidra: wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot2
                 (undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  char in_AL;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint *unaff_RBX;
  long lVar8;
  undefined8 *unaff_R13;
  long unaff_R14;
  uint *puVar9;
  uint *unaff_R15;
  bool bVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  undefined8 in_stack_00000010;
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
  undefined8 uStack0000000000000060;
  long *plStack0000000000000068;
  
  bVar2 = *param_2;
  *param_2 = *param_2 + param_5;
  DAT_0148a9a2 = DAT_0148a9a2 + in_AL + CARRY1(bVar2,param_5);
  *(int *)((long)unaff_R13 + 0xd) = (int)param_1;
  *(int *)((long)unaff_R13 + 0x11) = (int)((ulong)param_1 >> 0x20);
  *(undefined4 *)((long)unaff_R13 + 0x15) = in_XMM0_Dc;
  *(undefined4 *)((long)unaff_R13 + 0x19) = in_XMM0_Dd;
  uVar3 = CONCAT26(_UNK_0148a9a3,CONCAT15(DAT_0148a9a2,_UNK_0148a99d));
  *unaff_R13 = _DAT_0148a995;
  unaff_R13[1] = uVar3;
  *(undefined1 *)((long)unaff_R13 + 0x1d) = 0;
  uStack0000000000000060 = 0;
  plStack0000000000000068 = (long *)0x0;
  (**(code **)(_DAT_0f5ea138 + 0x90))();
  plVar6 = in_stack_00000030;
  func_0x0b69abb0();
  if ((bStack0000000000000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,
                    CONCAT26(uStack000000000000001e,
                             CONCAT51(uStack0000000000000019,bStack0000000000000018)) &
                    0xfffffffffffffffe);
  }
  plVar4 = plStack0000000000000068;
  if (plStack0000000000000068 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000068 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack0000000000000068 + 0x10))(plStack0000000000000068);
      func_0x0412c2d0(plVar4);
    }
  }
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  do {
    unaff_RBX = unaff_RBX + 1;
    if (unaff_RBX == unaff_R15) {
      lVar8 = *plVar6;
      if ((DAT_0f5ea4a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5ea4a0), iVar5 != 0)) {
        func_0x08b670e0(&DAT_0f5ea138);
        func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
        func_0x0410844d(&DAT_0f5ea4a0);
        plVar6 = in_stack_00000030;
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
      puVar9 = (uint *)(lVar8 + 0xe8);
      if (puVar9 != (uint *)&stack0x00000038) {
        if ((*(byte *)puVar9 & 1) == 0) {
          if ((_bStack0000000000000038 & 1) == 0) {
            *(long *)(lVar8 + 0xf8) = in_stack_00000048;
            *puVar9 = _bStack0000000000000038;
            *(undefined4 *)(lVar8 + 0xec) = uStack000000000000003c;
            *(undefined4 *)(lVar8 + 0xf0) = uStack0000000000000040;
            *(undefined4 *)(lVar8 + 0xf4) = uStack0000000000000044;
          }
          else {
            func_0x04885070(puVar9,in_stack_00000048,
                            CONCAT44(uStack0000000000000044,uStack0000000000000040));
          }
        }
        else {
          bVar10 = (_bStack0000000000000038 & 1) != 0;
          lVar8 = (long)&stack0x00000038 + 1;
          if (bVar10) {
            lVar8 = in_stack_00000048;
          }
          uVar7 = (ulong)(bStack0000000000000038 >> 1);
          if (bVar10) {
            uVar7 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
          }
          func_0x04885120(puVar9,lVar8,uVar7);
        }
      }
      if ((_bStack0000000000000038 & 1) != 0) {
        func_0x0412a280(in_stack_00000048,
                        CONCAT44(uStack000000000000003c,_bStack0000000000000038) &
                        0xfffffffffffffffe);
      }
      plVar4 = in_stack_00000058;
      if (in_stack_00000058 != (long *)0x0) {
        LOCK();
        plVar1 = in_stack_00000058 + 1;
        lVar8 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*in_stack_00000058 + 0x10))(in_stack_00000058);
          func_0x0412c2d0(plVar4);
        }
      }
      if ((bStack0000000000000018 & 1) != 0) {
        func_0x0412a280(in_stack_00000028,
                        CONCAT26(uStack000000000000001e,
                                 CONCAT51(uStack0000000000000019,bStack0000000000000018)) &
                        0xfffffffffffffffe);
      }
      return plVar6;
    }
  } while (5 < (ulong)*unaff_RBX);
                    /* WARNING: Could not recover jumptable at 0x0c97b48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar6 = (long *)(*(code *)(*(int *)(unaff_R14 + (ulong)*unaff_RBX * 4) + unaff_R14))();
  return plVar6;
}



/* ---- referenced strings ----
 * 0x148a995  gui.editor.minecraftTestWorld
 * 0x148a9a2  necraftTestWorld
 */
