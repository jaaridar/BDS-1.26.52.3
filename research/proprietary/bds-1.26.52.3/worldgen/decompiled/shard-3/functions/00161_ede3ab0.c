/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xede3ab0
 * Label: callee-of:0xbf19d20
 * Body:  [[0ede3ab0, 0ede3e16] [0ede3e20, 0ede3ec0] [0ede3ed0, 0ede3f38] [0ede3f40, 0ede3fbd] [0ede3fc0, 0ede40c3]]
 * Ghidra: FUN_0ede3ab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ede3ab0(void)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  undefined *puVar5;
  long in_RAX;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  char unaff_BL;
  undefined8 *unaff_RBP;
  long lVar14;
  long *unaff_R14;
  long lVar15;
  bool bVar16;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  ulong in_stack_00000020;
  undefined *in_stack_00000028;
  code *in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined1 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined *in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  byte bStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  long in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined1 uStack000000000000008c;
  undefined1 in_stack_00000090;
  long in_stack_000000a0;
  uint uStack00000000000000a8;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined *in_stack_000000c0;
  
  plVar6 = (long *)(**(code **)(in_RAX + 0x10))(&DAT_0f5463b0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x18);
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *unaff_RBP = plVar6;
  unaff_RBP[7] = &UNK_0ede4c70;
  if (unaff_BL == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = unaff_RBP[6];
  }
  unaff_RBP[6] = uVar13;
  if (plVar6 == (long *)0x0) {
    uVar13 = unaff_RBP[5];
    lVar14 = unaff_RBP[6];
    if (lVar14 == 0) {
      (*(code *)&UNK_0ede4c70)(0);
      lVar14 = unaff_RBP[6];
    }
    plVar6 = (long *)func_0x0488e200(uVar13,lVar14,0xbeee039e);
  }
  uVar7 = (**(code **)(*unaff_R14 + 0x18))();
  if ((uVar7 & 2) == 0) {
    in_stack_00000060 = 0x1100000138ffdf;
    func_0x0ed5ffe0(*in_stack_00000010,8,&stack0x00000060);
    if ((in_stack_00000060 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000060 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    uVar7 = (**(code **)(*unaff_R14 + 0xb0))();
    in_stack_000000c0 = &UNK_0f4e6088;
    if (((long *)in_stack_00000010[2] == (long *)0x0) ||
       (uVar8 = (**(code **)(*(long *)in_stack_00000010[2] + 0x10))(), uVar7 <= uVar8)) {
      lVar14 = *plVar6;
      lVar15 = plVar6[1];
      while (lVar14 != lVar15) {
        lVar15 = lVar15 + -0x80;
        func_0x049063d0(lVar15);
      }
      plVar6[1] = lVar14;
      func_0x0ed8ce50(plVar6,uVar7);
      puVar11 = in_stack_00000010;
      func_0x0ed6d600(&stack0x000000a0,*in_stack_00000010);
      in_stack_00000040 = unaff_RBP[5];
      in_stack_00000028 = &UNK_0488e0b0;
      in_stack_00000038 = 0x48b5725f;
      in_stack_00000030 = (code *)0x0;
      uStack000000000000003c = 0;
      in_stack_00000018 = (undefined8 *)0x0;
      in_stack_00000048 = 0;
      in_stack_00000050 = (undefined *)0x0;
      _bStack0000000000000070 = *(uint *)puVar11;
      uStack0000000000000074 = *(undefined4 *)((long)puVar11 + 4);
      uStack0000000000000078 = *(undefined4 *)(puVar11 + 1);
      uStack000000000000007c = *(undefined4 *)((long)puVar11 + 0xc);
      plVar3 = (long *)puVar11[2];
      if (plVar3 == (long *)0x0) {
        in_stack_00000080 = 0;
      }
      else {
        in_stack_00000080 = (**(code **)(*plVar3 + 0x30))(plVar3,0);
      }
      lVar14 = in_stack_000000a0;
      in_stack_00000088 = *(undefined4 *)(in_stack_00000010 + 3);
      uStack000000000000008c = *(undefined1 *)((long)in_stack_00000010 + 0x1c);
      in_stack_00000090 = 1;
      in_stack_000000b0 = uVar7;
      if (uVar7 != 0) {
        in_stack_00000068._4_4_ = uStack00000000000000a8;
        uVar7 = 1;
        do {
          if ((*(uint *)(lVar14 + 0x2b0) != 0xffffffff) &&
             (in_stack_00000068._4_4_ <= *(uint *)(lVar14 + 0x2b0))) break;
          puVar4 = (uint *)*in_stack_00000010;
          func_0x0ed6d4a0(puVar4,(int)uVar7 + -1);
          (**(code **)(*unaff_R14 + 200))();
          puVar11 = (undefined8 *)plVar6[1];
          if (puVar11 < (undefined8 *)plVar6[2]) {
            puVar11[0xe] = 0;
            puVar11[0xf] = 0;
            puVar11[0xc] = 0;
            puVar11[0xd] = 0;
            puVar11[10] = 0;
            puVar11[0xb] = 0;
            puVar11[8] = 0;
            puVar11[9] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11 = puVar11 + 0x10;
            plVar6[1] = (long)puVar11;
          }
          else {
            puVar11 = (undefined8 *)func_0x0ed9a170(plVar6);
            plVar6[1] = (long)puVar11;
          }
          if (in_stack_00000030 != (code *)0x0) {
            (*in_stack_00000030)(&stack0x00000018);
          }
          puVar5 = in_stack_00000050;
          in_stack_00000018 = puVar11 + -0x10;
          in_stack_00000028 = &UNK_0edd3320;
          in_stack_00000038 = 0x408065de;
          in_stack_00000030 = (code *)0x0;
          uStack000000000000003c = 3;
          in_stack_00000050 = &UNK_0edd3240;
          if (puVar5 != &UNK_0edd3240) {
            in_stack_00000048 = 0;
          }
          func_0x0ed75bc0(&stack0x000000c0);
          (**(code **)(*unaff_R14 + 0xd0))();
          lVar15 = *(long *)(puVar4 + 2);
          uVar2 = *(uint *)(lVar15 + 0x1c + (ulong)*puVar4 * 0x20);
          *puVar4 = uVar2;
          if (puVar4[0x48] == 0) {
            uVar12 = puVar4[4];
LAB_0ede3fc4:
            lVar1 = lVar15 + (ulong)uVar12 * 0x20;
            uVar8 = (ulong)*(uint *)(lVar15 + -0x10 + (ulong)uVar12 * 0x20);
            if (uVar8 != 0xffffffff) {
              (**(code **)(&UNK_0f4e40d0 + uVar8 * 8))(&stack0x0000000f,lVar1 + -0x18);
              uVar12 = puVar4[4];
            }
            *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
            puVar4[4] = uVar12 - 1;
          }
          else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) !=
                    uVar2) && (uVar12 = puVar4[4], uVar2 == uVar12 - 1)) goto LAB_0ede3fc4;
          bVar16 = uVar7 < in_stack_000000b0;
          uVar7 = (ulong)((int)uVar7 + 1);
        } while (bVar16);
      }
      if (in_stack_00000030 != (code *)0x0) {
        (*in_stack_00000030)(&stack0x00000018);
      }
    }
    else {
      uVar13 = *in_stack_00000010;
      uVar9 = (**(code **)(*(long *)in_stack_00000010[2] + 0x10))();
      func_0x041348b0(&stack0x00000070,uVar9);
      bVar16 = (_bStack0000000000000070 & 1) != 0;
      in_stack_000000a0 = (long)&stack0x00000070 + 1;
      if (bVar16) {
        in_stack_000000a0 = in_stack_00000080;
      }
      _uStack00000000000000a8 = (ulong)(bStack0000000000000070 >> 1);
      if (bVar16) {
        _uStack00000000000000a8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      }
      func_0x0470d9a0(&stack0x00000018,&UNK_01411e36,0x31,0xd,&stack0x000000a0);
      uVar7 = (ulong)in_stack_00000018 >> 1 & 0x7f;
      lVar14 = (long)&stack0x00000018 + 1;
      if (((ulong)in_stack_00000018 & 1) != 0) {
        uVar7 = in_stack_00000020;
        lVar14 = (long)in_stack_00000028;
      }
      if (lVar14 == 0) {
        in_stack_00000058 = (ulong)((uint)uVar7 & 0x7f) << 0x30;
      }
      else {
        lVar15 = uVar7 + 9;
        puVar10 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
        if (lVar15 != 0 && puVar10 == (ulong *)0x0) {
          func_0x0eec74c0(lVar15,8);
        }
        *puVar10 = uVar7;
        func_0x0eee2f00(puVar10 + 1,lVar14,uVar7);
        *(undefined1 *)((long)puVar10 + uVar7 + 8) = 0;
        in_stack_00000058 = (ulong)(puVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      func_0x0ed5ffe0(uVar13,0x40,&stack0x00000058);
      if ((in_stack_00000058 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(in_stack_00000058 & 0xff00ffffffffffff) - 8);
      }
      if (((ulong)in_stack_00000018 & 1) != 0) {
        func_0x0412a280(in_stack_00000028,(ulong)in_stack_00000018 & 0xfffffffffffffffe);
      }
      if ((_bStack0000000000000070 & 1) != 0) {
        func_0x0412a280(in_stack_00000080,
                        CONCAT44(uStack0000000000000074,_bStack0000000000000070) &
                        0xfffffffffffffffe);
      }
    }
  }
  return;
}


