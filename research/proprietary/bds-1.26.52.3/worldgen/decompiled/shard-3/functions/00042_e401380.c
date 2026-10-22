/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe401380
 * Label: string:Jigsaw Processro Type
 * Body:  [[0e401380, 0e40141d] [0e401420, 0e4014ab] [0e4014b0, 0e401634] [0e401640, 0e4016c2] [0e4016d0, 0e401723] [0e4017a5, 0e4017b6] [0e4017e0, 0e4017f6] [0e401804, 0e40181f] [0e401823, 0e401852] [0e40188f, 0e401893] [0e4018bc, 0e4018ed]]
 * Ghidra: FUN_0e401380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e401380(void)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 *unaff_RBX;
  long lVar10;
  long lVar11;
  long *unaff_RBP;
  long *unaff_R12;
  long lVar12;
  uint uVar13;
  ulong unaff_R14;
  ulong uVar14;
  undefined8 *in_stack_00000008;
  ulong in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  ulong in_stack_00000048;
  undefined *in_stack_00000058;
  code *in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined1 uStack000000000000006c;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined *in_stack_00000080;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined1 uStack00000000000000c4;
  undefined1 in_stack_000000c8;
  long in_stack_000000d0;
  uint in_stack_000000d8;
  
  pcVar4 = (code *)swi(0x48);
  in_stack_00000070 = (*pcVar4)();
  in_stack_00000070 = in_stack_00000070 & 0xffffffffffffff50;
  in_stack_00000068 = 0x48b5725f;
  in_stack_00000060 = (code *)0x0;
  uStack000000000000006c = 0;
  in_stack_00000048 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = (undefined *)0x0;
  in_stack_000000a8 = *unaff_RBX;
  uStack00000000000000ac = unaff_RBX[1];
  in_stack_000000b0 = unaff_RBX[2];
  uStack00000000000000b4 = unaff_RBX[3];
  plVar2 = *(long **)(unaff_RBX + 4);
  if (plVar2 == (long *)0x0) {
    in_stack_000000b8 = 0;
  }
  else {
    in_stack_000000b8 = (**(code **)(*plVar2 + 0x30))(plVar2,0);
  }
  in_stack_000000c0 = *(undefined4 *)(in_stack_00000008 + 3);
  uStack00000000000000c4 = *(undefined1 *)((long)in_stack_00000008 + 0x1c);
  in_stack_000000c8 = 1;
  if (unaff_R14 != 0) {
    uVar13 = 1;
    uVar14 = 0;
    do {
      if ((*(uint *)(in_stack_000000d0 + 0x2b0) != 0xffffffff) &&
         (in_stack_000000d8 <= *(uint *)(in_stack_000000d0 + 0x2b0))) break;
      puVar3 = (uint *)*in_stack_00000008;
      func_0x0ed6d4a0(puVar3,uVar13 - 1);
      (**(code **)(*unaff_RBP + 200))(unaff_RBP,uVar14);
      uVar14 = unaff_R12[1];
      if (uVar14 < (ulong)unaff_R12[2]) {
        func_0x0e402030(uVar14);
        lVar10 = uVar14 + 0x120;
        unaff_R12[1] = lVar10;
      }
      else {
        lVar11 = uVar14 - *unaff_R12;
        uVar14 = (lVar11 >> 5) * -0x71c71c71c71c71c7 + 1;
        if (0xe38e38e38e38e3 < uVar14) {
          func_0x0ca3c630();
LAB_0e4017e5:
          uVar8 = func_0x04882eb0();
          uVar8 = func_0x04882e20(uVar8);
          if ((in_stack_00000048 & 1) != 0) {
            func_0x0412a280(in_stack_00000058,in_stack_00000048 & 0xfffffffffffffffe);
          }
          if ((in_stack_00000020 & 1) != 0) {
            func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
            uVar8 = func_0x0eee2d70(uVar8);
            uVar8 = func_0x04882e20(uVar8);
            if (in_stack_00000060 != (code *)0x0) {
              (*in_stack_00000060)(&stack0x00000048);
            }
          }
          uVar8 = func_0x0eee2d70(uVar8);
          uVar8 = func_0x04882e20(uVar8);
          uVar8 = func_0x04882e20(uVar8);
          func_0x04882e20(uVar8);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar6 = unaff_R12[2] - *unaff_R12 >> 5;
        uVar7 = lVar6 * 0x1c71c71c71c71c72;
        if (uVar14 < uVar7) {
          uVar14 = uVar7;
        }
        if (0x71c71c71c71c70 < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
          uVar14 = 0xe38e38e38e38e3;
        }
        if (uVar14 == 0) {
          uVar7 = 0;
        }
        else {
          if (0xe38e38e38e38e3 < uVar14) goto LAB_0e4017e5;
          uVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 0x120);
          if (uVar7 == 0) {
            func_0x0eec74c0(uVar14 * 0x120,0);
            uVar7 = 0;
          }
        }
        in_stack_00000028 = lVar11 + uVar7;
        in_stack_00000038 = uVar14 * 0x120 + uVar7;
        in_stack_00000020 = uVar7;
        in_stack_00000030 = in_stack_00000028;
        func_0x0e402030(in_stack_00000028);
        lVar10 = in_stack_00000030 + 0x120;
        lVar12 = (*unaff_R12 - unaff_R12[1]) + in_stack_00000028;
        in_stack_00000030 = lVar10;
        func_0x0ca3c640();
        lVar11 = *unaff_R12;
        lVar6 = unaff_R12[2];
        *unaff_R12 = lVar12;
        unaff_R12[1] = lVar10;
        unaff_R12[2] = in_stack_00000038;
        if (lVar11 != 0) {
          func_0x0412a280(lVar11,lVar6 - lVar11);
        }
      }
      unaff_R12[1] = lVar10;
      if (in_stack_00000060 != (code *)0x0) {
        (*in_stack_00000060)(&stack0x00000048);
      }
      puVar5 = in_stack_00000080;
      in_stack_00000048 = lVar10 - 0x120;
      in_stack_00000058 = &UNK_0e3f9990;
      in_stack_00000068 = 0x9d1a1b9b;
      in_stack_00000060 = (code *)0x0;
      uStack000000000000006c = 3;
      in_stack_00000080 = &UNK_0e3f9740;
      if (puVar5 != &UNK_0e3f9740) {
        in_stack_00000078 = 0;
      }
      func_0x0ed75bc0(&stack0x000000a0,unaff_RBP,&stack0x00000048,in_stack_00000098,&stack0x000000a8
                     );
      (**(code **)(*unaff_RBP + 0xd0))();
      lVar11 = *(long *)(puVar3 + 2);
      uVar1 = *(uint *)(lVar11 + 0x1c + (ulong)*puVar3 * 0x20);
      *puVar3 = uVar1;
      if (puVar3[0x48] == 0) {
        uVar9 = puVar3[4];
LAB_0e4016d3:
        lVar6 = lVar11 + (ulong)uVar9 * 0x20;
        uVar14 = (ulong)*(uint *)(lVar11 + -0x10 + (ulong)uVar9 * 0x20);
        if (uVar14 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&stack0x00000020,lVar6 + -0x18);
          uVar9 = puVar3[4];
        }
        *(undefined4 *)(lVar6 + -0x10) = 0xffffffff;
        puVar3[4] = uVar9 - 1;
      }
      else if ((*(uint *)(*(long *)(puVar3 + 0x46) + 0x18 + (ulong)(puVar3[0x48] - 1) * 0x30) !=
                uVar1) && (uVar9 = puVar3[4], uVar1 == uVar9 - 1)) goto LAB_0e4016d3;
      uVar14 = (ulong)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar14 < unaff_R14);
  }
  if (in_stack_00000060 != (code *)0x0) {
    (*in_stack_00000060)(&stack0x00000048);
  }
  return;
}


