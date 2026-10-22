/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4950a40
 * Label: string:WeirdnessSpline for {:.2f} jaggedness factor
 * Body:  [[0494ebb4, 0494ebcb] [0494edfc, 0494ee99] [049509a0, 04950b2e] [04950b30, 04950bad] [04950bb0, 04950be6] [04950bf0, 04950ede] [04950ee0, 04950f90] [04950fa0, 049510ce] [049510d0, 04951186]]
 * Ghidra: FUN_04950a40
 */


/* WARNING: Removing unreachable block (ram,0x04951174) */
/* WARNING: Removing unreachable block (ram,0x04951032) */
/* WARNING: Removing unreachable block (ram,0x04950c3b) */
/* WARNING: Removing unreachable block (ram,0x04951142) */
/* WARNING: Removing unreachable block (ram,0x0494ee8b) */
/* WARNING: Removing unreachable block (ram,0x04950c67) */
/* WARNING: Removing unreachable block (ram,0x04951006) */

undefined8
FUN_04950a40(char *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,long param_7,long param_8,long *param_9,long param_10)

{
  undefined8 uVar1;
  ulong *puVar2;
  bool bVar3;
  ulong in_RAX;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  char cVar9;
  byte bVar10;
  long lVar11;
  char *pcVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong unaff_R12;
  ulong unaff_R13;
  long unaff_R14;
  byte *unaff_R15;
  char *in_stack_00000060;
  long in_stack_00000068;
  ulong in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  byte bStack0000000000000178;
  undefined1 uStack0000000000000179;
  undefined1 uStack000000000000017a;
  undefined4 in_stack_000001a8;
  undefined2 in_stack_000001b0;
  undefined2 uStack00000000000001b6;
  undefined2 in_stack_000001b8;
  undefined4 uStack00000000000001bc;
  undefined8 in_stack_000001f0;
  
code_r0x04950a40:
  uVar6 = in_RAX + 1;
  if (param_4 <= uVar6) goto LAB_04950a4d;
LAB_04950a49:
  param_1[in_RAX] = ' ';
  in_RAX = uVar6;
LAB_04950a4d:
  param_1[in_RAX] = '\0';
  do {
    func_0x0495a3f0(in_stack_00000060,in_stack_00000078 + unaff_R12,in_RAX);
    lVar5 = 0;
    do {
      if (in_stack_00000060[lVar5] == '\0') {
joined_r0x04950ab7:
        if (lVar5 != 0x800) {
          bVar3 = lVar5 - 0x801U < 0xfffffffffffffffe;
          if (bVar3) {
            in_stack_00000060[lVar5] = ' ';
          }
          (in_stack_00000060 + lVar5)[bVar3] = '\0';
        }
        break;
      }
      if (in_stack_00000060[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto joined_r0x04950ab7;
      }
      if (in_stack_00000060[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto joined_r0x04950ab7;
      }
      if (in_stack_00000060[lVar5 + 3] == '\0') {
        lVar5 = lVar5 + 3;
        goto joined_r0x04950ab7;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x800);
    uVar6 = in_stack_00000070 - unaff_R12;
    if (0x17f < in_stack_00000070 - unaff_R12) {
      uVar6 = unaff_R13;
    }
    if (in_stack_00000070 != unaff_R12) {
      pbVar8 = (byte *)(in_stack_00000068 + unaff_R12);
      uVar7 = 0;
      do {
        uStack0000000000000179 = *(undefined1 *)((ulong)(*pbVar8 & 0xf) + unaff_R14);
        bStack0000000000000178 = *(byte *)((ulong)(*pbVar8 >> 4) + unaff_R14);
        uStack000000000000017a = 0;
        lVar5 = 0;
        do {
          if (in_stack_00000060[lVar5] == '\0') {
joined_r0x04950bba:
            if (lVar5 != 0x800) {
              uVar14 = 0;
              pbVar13 = unaff_R15;
              bVar10 = bStack0000000000000178;
              do {
                if (uVar14 + 1 < 0x800U - lVar5) {
                  in_stack_00000060[uVar14 + lVar5] = bVar10;
                  uVar14 = uVar14 + 1;
                }
                bVar10 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar10 != 0);
              in_stack_00000060[uVar14 + lVar5] = '\0';
            }
            break;
          }
          if (in_stack_00000060[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto joined_r0x04950bba;
          }
          if (in_stack_00000060[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto joined_r0x04950bba;
          }
          if (in_stack_00000060[lVar5 + 3] == '\0') {
            lVar5 = lVar5 + 3;
            goto joined_r0x04950bba;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != 0x800);
        uVar7 = uVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != uVar6);
    }
    if (*in_stack_00000060 != '\0') {
      lVar5 = 0;
      do {
        lVar11 = lVar5 + 1;
        lVar5 = lVar5 + 1;
      } while (in_stack_00000060[lVar11] != '\0');
    }
    syscall();
    syscall();
    in_RAX = 1;
    *in_stack_00000060 = '\0';
    unaff_R12 = unaff_R12 + 0x180;
    if (in_stack_00000070 <= unaff_R12) {
      pbVar8 = &stack0x00000178;
      lVar5 = 0;
      func_0x0eee2dd0(pbVar8,0,0x4d0);
      in_stack_000001a8 = 0x10000b;
      uVar1 = *(undefined8 *)(param_7 + 0xb8);
      in_stack_000001b0 = (undefined2)uVar1;
      uStack00000000000001b6 = (undefined2)((ulong)uVar1 >> 0x20);
      in_stack_000001b8 = (undefined2)((ulong)uVar1 >> 0x10);
      uStack00000000000001bc = *(undefined4 *)(param_7 + 0xb0);
      in_stack_000001f0 = *(undefined8 *)(param_7 + 0x90);
      func_0x0eee2f00(&stack0x00000318,param_8 + 0xa0,0x100);
      break;
    }
    lVar5 = 3;
    do {
      if (in_stack_00000060[lVar5 + -3] == '\0') {
        lVar5 = lVar5 + -3;
joined_r0x04950a07:
        if (lVar5 != 0x800) {
          param_1 = in_stack_00000060 + lVar5;
          param_4 = 0x800 - lVar5;
          if (param_4 < 2) {
            in_RAX = 0;
            goto code_r0x04950a40;
          }
          *param_1 = 'S';
          in_RAX = 1;
          uVar6 = 2;
          if (2 < param_4) goto LAB_04950a49;
          goto LAB_04950a4d;
        }
        break;
      }
      if (in_stack_00000060[lVar5 + -2] == '\0') {
        lVar5 = lVar5 + -2;
        goto joined_r0x04950a07;
      }
      if (in_stack_00000060[lVar5 + -1] == '\0') {
        lVar5 = lVar5 + -1;
        goto joined_r0x04950a07;
      }
      if (in_stack_00000060[lVar5] == '\0') goto joined_r0x04950a07;
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x803);
  } while( true );
  while( true ) {
    if (in_stack_00000060[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_04950e9a;
    }
    if (in_stack_00000060[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_04950e9a;
    }
    if (in_stack_00000060[lVar5 + 3] == '\0') {
      lVar5 = lVar5 + 3;
      goto LAB_04950e9a;
    }
    lVar5 = lVar5 + 4;
    if (lVar5 == 0x800) break;
    if (in_stack_00000060[lVar5] == '\0') {
LAB_04950e9a:
      if (lVar5 != 0x800) {
        pcVar12 = in_stack_00000060 + lVar5;
        uVar6 = 0x800 - lVar5;
        if (1 < uVar6) {
          *pcVar12 = 'C';
        }
        uVar7 = (ulong)(1 < uVar6);
        if (uVar7 + 1 < uVar6) {
          pcVar12[uVar7] = ' ';
          uVar7 = uVar7 + 1;
        }
        pcVar12[uVar7] = '\0';
      }
      break;
    }
  }
  lVar5 = 0;
  do {
    cVar9 = *(char *)((ulong)(*pbVar8 >> 4) + unaff_R14);
    lVar11 = 0;
    do {
      if (in_stack_00000060[lVar11] == '\0') {
joined_r0x04950f64:
        if (lVar11 != 0x800) {
          uVar6 = 0;
          pcVar12 = &stack0x00000005;
          do {
            if (uVar6 + 1 < 0x800U - lVar11) {
              in_stack_00000060[uVar6 + lVar11] = cVar9;
              uVar6 = uVar6 + 1;
            }
            cVar9 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar9 != '\0');
          in_stack_00000060[uVar6 + lVar11] = '\0';
        }
        break;
      }
      if (in_stack_00000060[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto joined_r0x04950f64;
      }
      if (in_stack_00000060[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto joined_r0x04950f64;
      }
      if (in_stack_00000060[lVar11 + 3] == '\0') {
        lVar11 = lVar11 + 3;
        goto joined_r0x04950f64;
      }
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x800);
    lVar5 = lVar5 + 1;
    pbVar8 = pbVar8 + 1;
  } while (lVar5 != 0x4d0);
  if (*in_stack_00000060 != '\0') {
    lVar5 = 0;
    do {
      lVar11 = lVar5 + 1;
      lVar5 = lVar5 + 1;
    } while (in_stack_00000060[lVar11] != '\0');
  }
  syscall();
  syscall();
  *in_stack_00000060 = '\0';
  lVar5 = param_9[0x11];
  if (param_9[0x12] != lVar5) {
    uVar6 = 0;
    plVar4 = param_9;
    do {
      puVar2 = *(ulong **)(lVar5 + uVar6 * 8);
      if (((*(char *)((long)puVar2 + 0x29) != '\0') && ((char)puVar2[5] == '\x01')) &&
         (0xfff < puVar2[1])) {
        lVar5 = *(long *)(param_10 + 8);
        if (lVar5 != param_10) {
          do {
            if ((*(ulong *)(lVar5 + 0x10) <= *puVar2) &&
               (puVar2[1] + *puVar2 <= *(ulong *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x18)))
            goto LAB_04951080;
            lVar5 = *(long *)(lVar5 + 8);
          } while (lVar5 != param_10);
        }
        func_0x0495a5a0(&param_7,puVar2,1,uVar6,0);
        plVar4 = param_9;
      }
LAB_04951080:
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar5 = plVar4[0x11];
    } while (uVar6 < (ulong)(plVar4[0x12] - lVar5 >> 3));
  }
  lVar5 = *(long *)(param_10 + 8);
  if (lVar5 != param_10) {
    do {
      func_0x0495a5a0(&param_7,lVar5 + 0x10,0,0,lVar5 + 0x138);
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_10);
  }
  syscall();
  syscall();
  (**(code **)(*param_9 + 0x30))();
  while (in_stack_000000c0 != (undefined8 *)0x0) {
    in_stack_000000c0 = (undefined8 *)*in_stack_000000c0;
    syscall();
  }
  return 0;
}


