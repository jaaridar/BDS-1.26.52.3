/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2086c0
 * Label: JigsawStructureLoader::vslot0
 * Body:  [[0d208490, 0d2086bc] [0d2086c0, 0d2087fd] [0d208800, 0d208b29] [0d208b3e, 0d208b51]]
 * Ghidra: wg_JigsawStructureLoader__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawStructureLoader__vslot0(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong in_RAX;
  long *plVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ushort *puVar9;
  ulong uVar10;
  long unaff_RBX;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ushort *unaff_R13;
  long lVar17;
  ushort uVar18;
  long unaff_R14;
  ushort *unaff_R15;
  long in_stack_00000008;
  ushort *in_stack_00000010;
  ushort *in_stack_00000018;
  ulong in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  ushort *in_stack_00000048;
  ushort *in_stack_00000050;
  ushort *in_stack_00000058;
  long *in_stack_00000060;
  
  uVar15 = in_RAX & 0xffffffffffffff20;
code_r0x0d2086c2:
  param_3 = (ushort *)
            ((long)param_3 -
            ((((long)uVar15 >> 1) - (((long)uVar15 >> 1) + 1 >> 0x3f)) + 1U & 0xfffffffffffffffe));
LAB_0d2086ec:
  *param_3 = (ushort)unaff_R14;
  func_0x0eee2f00(param_3 + 1,unaff_R13,(long)unaff_R15 - (long)unaff_R13);
  lVar3 = *(long *)(unaff_RBX + 0x588);
  *(ushort **)(unaff_RBX + 0x588) = unaff_R13;
  lVar17 = (long)unaff_R13 - *(long *)(unaff_RBX + 0x580);
  lVar11 = (long)param_3 - lVar17;
  func_0x0eee2f00(lVar11,*(long *)(unaff_RBX + 0x580),lVar17);
  lVar17 = *(long *)(in_stack_00000008 + 0x580);
  lVar16 = *(long *)(in_stack_00000008 + 0x590);
  *(long *)(in_stack_00000008 + 0x580) = lVar11;
  *(long *)(in_stack_00000008 + 0x588) = (long)param_3 + (lVar3 - (long)unaff_R13) + 2;
  *(ushort **)(in_stack_00000008 + 0x590) = in_stack_00000010;
  in_stack_00000010 = param_3;
  if (lVar17 != 0) {
    func_0x0412a280(lVar17,lVar16 - lVar17);
  }
LAB_0d20878b:
  do {
    plVar1 = (long *)((long)in_stack_00000018 + in_stack_00000020 * 4);
    plVar14 = *(long **)(in_stack_00000008 + 0x5a0);
    if (plVar14 < *(long **)(in_stack_00000008 + 0x5a8)) {
      if (plVar1 == plVar14) {
        *plVar14 = 0;
        *(long **)(in_stack_00000008 + 0x5a0) = plVar14 + 1;
      }
      else {
        plVar12 = plVar14 + -1;
        plVar4 = plVar14;
        if (plVar12 < plVar14) {
          plVar4 = plVar14 + 1;
          lVar3 = *plVar12;
          *plVar12 = 0;
          *plVar14 = lVar3;
        }
        *(long **)(in_stack_00000008 + 0x5a0) = plVar4;
        if (plVar14 != plVar1 + 1) {
          do {
            plVar14 = plVar14 + -1;
            lVar3 = plVar12[-1];
            plVar12[-1] = 0;
            plVar4 = (long *)*plVar14;
            *plVar14 = lVar3;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 8))();
            }
            plVar12 = plVar12 + -1;
          } while (plVar12 != plVar1);
        }
        plVar14 = (long *)*plVar1;
        *plVar1 = 0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
    else {
      plVar12 = *(long **)(in_stack_00000008 + 0x598);
      uVar15 = ((long)plVar14 - (long)plVar12 >> 3) + 1;
      if (0x1fffffffffffffff < uVar15) goto LAB_0d208b16;
      uVar5 = (long)*(long **)(in_stack_00000008 + 0x5a8) - (long)plVar12;
      uVar10 = (long)uVar5 >> 2;
      if (uVar10 <= uVar15) {
        uVar10 = uVar15;
      }
      if (0x7ffffffffffffff7 < uVar5) {
        uVar10 = 0x1fffffffffffffff;
      }
      in_stack_00000060 = in_stack_00000030;
      if (uVar10 == 0) {
        lVar17 = 0;
        lVar3 = 0;
      }
      else {
        if (0x1fffffffffffffff < uVar10) goto LAB_0d208b0c;
        lVar17 = uVar10 << 3;
        lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
        if (lVar3 == 0) {
          func_0x0eec74c0(lVar17,0);
          lVar3 = 0;
        }
      }
      lVar16 = (long)plVar1 - (long)plVar12;
      in_stack_00000048 = (ushort *)(lVar16 + lVar3);
      in_stack_00000018 = (ushort *)(lVar17 + lVar3);
      puVar6 = in_stack_00000048;
      in_stack_00000040 = lVar3;
      in_stack_00000050 = in_stack_00000048;
      in_stack_00000058 = in_stack_00000018;
      if (lVar16 == lVar17) {
        if (plVar1 == plVar12) {
          puVar6 = (ushort *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
          if (puVar6 == (ushort *)0x0) {
            func_0x0eec74c0(8,0);
          }
          in_stack_00000018 = puVar6 + 4;
          if (lVar3 != 0) {
            func_0x0412a280(lVar3,lVar16);
          }
        }
        else {
          puVar6 = in_stack_00000048 +
                   (((lVar16 >> 3) - ((lVar16 >> 3) + 1 >> 0x3f)) + 1U & 0x3ffffffffffffffe) * -2;
        }
      }
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      func_0x0eee2f00(puVar6 + 4,plVar1,*(long *)(in_stack_00000008 + 0x5a0) - (long)plVar1);
      lVar3 = *(long *)(in_stack_00000008 + 0x5a0);
      *(long **)(in_stack_00000008 + 0x5a0) = plVar1;
      lVar17 = (long)plVar1 - *(long *)(in_stack_00000008 + 0x598);
      lVar11 = (long)puVar6 - lVar17;
      func_0x0eee2f00(lVar11,*(long *)(in_stack_00000008 + 0x598),lVar17);
      lVar17 = *(long *)(in_stack_00000008 + 0x598);
      lVar16 = *(long *)(in_stack_00000008 + 0x5a8);
      *(long *)(in_stack_00000008 + 0x598) = lVar11;
      *(long *)(in_stack_00000008 + 0x5a0) = (long)puVar6 + (lVar3 - (long)plVar1) + 8;
      *(ushort **)(in_stack_00000008 + 0x5a8) = in_stack_00000018;
      if (lVar17 != 0) {
        func_0x0412a280(lVar17,lVar16 - lVar17);
      }
    }
    in_stack_00000018 = (ushort *)*in_stack_00000030;
    puVar6 = (ushort *)*in_stack_00000038;
    do {
      plVar1 = *(long **)((long)in_stack_00000018 + ((long)in_stack_00000010 - (long)puVar6) * 4);
      *(long **)((long)in_stack_00000018 + ((long)in_stack_00000010 - (long)puVar6) * 4) =
           in_stack_00000028;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      do {
        unaff_R14 = unaff_R14 + 1;
        if (unaff_R14 == 0x10) {
          return;
        }
      } while (unaff_R14 == 7);
      in_stack_00000028 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (in_stack_00000028 == (long *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      in_stack_00000028[2] = 0;
      in_stack_00000028[3] = 0;
      in_stack_00000028[1] = (long)(in_stack_00000028 + 1);
      in_stack_00000028[2] = (long)(in_stack_00000028 + 1);
      *in_stack_00000028 = (long)&UNK_0ef513e0;
      in_stack_00000028[4] = (long)&UNK_0ef51410;
      puVar6 = *(ushort **)(in_stack_00000008 + 0x580);
      unaff_R15 = *(ushort **)(in_stack_00000008 + 0x588);
      in_stack_00000018 = *(ushort **)(in_stack_00000008 + 0x598);
      uVar18 = (ushort)unaff_R14;
      uVar5 = (long)unaff_R15 - (long)puVar6 >> 1;
      unaff_R13 = puVar6;
      uVar15 = uVar5;
      uVar10 = (long)unaff_R15 - (long)puVar6;
      while (uVar10 != 0) {
        uVar10 = uVar15 >> 1;
        uVar13 = ~uVar10 + uVar15;
        uVar8 = uVar15 & 0xfffffffffffffffe;
        uVar15 = uVar10;
        if (*(ushort *)((long)unaff_R13 + uVar8) < uVar18) {
          unaff_R13 = (ushort *)((long)unaff_R13 + uVar8 + 2);
          uVar15 = uVar13;
          uVar10 = uVar13;
        }
      }
      in_stack_00000010 = unaff_R13;
      if (unaff_R13 == unaff_R15) {
        in_stack_00000020 = (long)unaff_R13 - (long)puVar6;
        puVar9 = *(ushort **)(in_stack_00000008 + 0x590);
        if (puVar9 <= unaff_R15) goto LAB_0d2085f4;
        *unaff_R15 = uVar18;
        *(ushort **)(in_stack_00000008 + 0x588) = unaff_R15 + 1;
        goto LAB_0d20878b;
      }
    } while (*unaff_R13 <= uVar18);
    in_stack_00000020 = (long)unaff_R13 - (long)puVar6;
    puVar9 = *(ushort **)(in_stack_00000008 + 0x590);
    if (puVar9 <= unaff_R15) break;
    puVar6 = unaff_R15;
    if (unaff_R15 + -1 < unaff_R15) {
      puVar6 = unaff_R15 + 1;
      *unaff_R15 = unaff_R15[-1];
    }
    *(ushort **)(in_stack_00000008 + 0x588) = puVar6;
    if (unaff_R15 != unaff_R13 + 1) {
      func_0x0eee2ee0(unaff_R13 + 1,unaff_R13);
    }
    *unaff_R13 = uVar18;
  } while( true );
LAB_0d2085f4:
  if ((long)uVar5 < -1) goto LAB_0d208b11;
  uVar10 = (long)puVar9 - (long)puVar6;
  uVar15 = uVar5 + 1;
  if (uVar5 + 1 < uVar10) {
    uVar15 = uVar10;
  }
  uVar5 = 0x7fffffffffffffff;
  if (uVar10 < 0x7ffffffffffffffe) {
    uVar5 = uVar15;
  }
  in_stack_00000060 = in_stack_00000038;
  if (uVar5 == 0) {
    uVar5 = 0;
    lVar3 = 0;
  }
  else {
    if ((long)uVar5 < 0) {
LAB_0d208b0c:
      func_0x04882eb0();
LAB_0d208b11:
      func_0x0d227670();
LAB_0d208b16:
      uVar7 = func_0x0d2276f0();
      func_0x0d227680(&stack0x00000040);
      (**(code **)(*in_stack_00000028 + 8))();
      func_0x0eee2d70(uVar7);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = uVar5 * 2;
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar5);
    if (lVar3 == 0) {
      func_0x0eec74c0(uVar5,0);
      lVar3 = 0;
    }
  }
  param_3 = (ushort *)(in_stack_00000020 + lVar3);
  in_stack_00000010 = (ushort *)(uVar5 + lVar3);
  unaff_RBX = in_stack_00000008;
  in_stack_00000040 = lVar3;
  in_stack_00000048 = param_3;
  in_stack_00000050 = param_3;
  in_stack_00000058 = in_stack_00000010;
  if (in_stack_00000020 == uVar5) {
    uVar15 = in_stack_00000020;
    if (unaff_R13 == puVar6) {
      param_3 = (ushort *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,2);
      if (param_3 == (ushort *)0x0) {
        func_0x0eec74c0(2,0);
      }
      in_stack_00000010 = param_3 + 1;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,in_stack_00000020);
        unaff_R15 = *(ushort **)(in_stack_00000008 + 0x588);
      }
      goto LAB_0d2086ec;
    }
    goto code_r0x0d2086c2;
  }
  goto LAB_0d2086ec;
}


