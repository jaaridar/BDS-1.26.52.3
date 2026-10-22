/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47b5060
 * Label: callee-of:0xda370f0
 * Body:  [[047b5060, 047b56e5]]
 * Ghidra: FUN_047b5060
 */


undefined8
FUN_047b5060(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
            undefined8 param_7,long param_8,ulong param_9,long param_10,undefined8 param_11,
            long param_12,long param_13,long param_14,long param_15,long param_16,long param_17,
            long param_18,undefined8 param_19,long param_20)

{
  long in_RAX;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_RBX;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long in_R10;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_R13;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  long unaff_R14;
  long unaff_R15;
  ulong uVar27;
  long lVar28;
  long unaff_retaddr;
  long in_stack_00000218;
  
  uVar5 = param_3 + param_2 + 0x100000;
  lVar20 = (param_5 * -0xf39ad + param_13 + unaff_R14 * 0x215d1 +
           unaff_R13 * -0xa6f7d + ((long)uVar5 >> 0x15)) - (param_9 & 0xffffffffffe00000);
  lVar16 = unaff_R15 * 0x215d1 + unaff_RBX;
  lVar4 = param_6 * 0x9fb67 + unaff_R15 * 0xa2c13 + param_12;
  lVar6 = param_6 * 0x215d1 + unaff_R15 * 0x9fb67 + param_4;
  uVar23 = param_20 + param_6 * 0xa2c13 + 0x100000;
  lVar9 = param_6 * 0x72d18 + in_R10 * 0xa2c13 + param_16;
  uVar24 = in_R10 * 0x72d18 + lVar4 + 0x100000;
  lVar14 = param_6 * -0xf39ad + in_R10 * 0x9fb67 + unaff_R15 * 0x72d18 + in_RAX;
  uVar1 = in_R10 * -0xf39ad + lVar6 + 0x100000;
  lVar18 = param_6 * -0xa6f7d + in_R10 * 0x215d1 + unaff_R15 * -0xf39ad + param_1;
  uVar2 = in_R10 * -0xa6f7d + lVar16 + 0x100000;
  lVar19 = ((param_15 * 0x9fb67 + param_14 + param_10 + unaff_R14 * -0xf39ad + param_18 * 0x215d1) -
           (uVar5 & 0xffffffffffe00000)) + unaff_R15 * -0xa6f7d;
  uVar5 = lVar20 + 0x100000;
  lVar8 = (long)uVar23 >> 0x15;
  param_11 = lVar8 + lVar9;
  uVar3 = lVar8 + lVar9 + 0x100000;
  lVar9 = (long)uVar24 >> 0x15;
  uVar7 = lVar9 + lVar14 + 0x100000;
  lVar8 = (long)uVar1 >> 0x15;
  param_7 = lVar18 + lVar8;
  uVar27 = lVar8 + lVar18 + 0x100000;
  lVar17 = (long)uVar2 >> 0x15;
  uVar15 = lVar17 + lVar19 + 0x100000;
  lVar18 = (long)uVar5 >> 0x15;
  uVar10 = lVar18 + param_8 + 0x100000;
  lVar11 = (long)(unaff_retaddr + 0x100000U) >> 0x15;
  uVar12 = lVar11 + param_17 + 0x100000;
  lVar21 = (long)uVar12 >> 0x15;
  lVar13 = lVar21 * 0xa2c13 + ((param_6 * 0xa2c13 + param_20) - (uVar23 & 0xffffffffffe00000));
  lVar8 = (lVar13 >> 0x15) + ((lVar21 * 0x72d18 + param_11) - (uVar3 & 0xffffffffffe00000));
  lVar22 = (lVar8 >> 0x15) +
           ((lVar21 * 0x9fb67 + lVar4 + in_R10 * 0x72d18) - (uVar24 & 0xffffffffffe00000)) +
           ((long)uVar3 >> 0x15);
  lVar28 = (lVar22 >> 0x15) + ((lVar21 * -0xf39ad + lVar14 + lVar9) - (uVar7 & 0xffffffffffe00000));
  lVar25 = (lVar28 >> 0x15) +
           ((lVar21 * 0x215d1 + lVar6 + in_R10 * -0xf39ad) - (uVar1 & 0xffffffffffe00000)) +
           ((long)uVar7 >> 0x15);
  lVar21 = (lVar25 >> 0x15) + ((lVar21 * -0xa6f7d + param_7) - (uVar27 & 0xffffffffffe00000));
  lVar14 = (lVar21 >> 0x15) +
           ((long)uVar27 >> 0x15) + ((lVar16 + in_R10 * -0xa6f7d) - (uVar2 & 0xffffffffffe00000));
  lVar6 = (lVar14 >> 0x15) + ((lVar19 + lVar17) - (uVar15 & 0xffffffffffe00000));
  lVar17 = (lVar6 >> 0x15) + ((long)uVar15 >> 0x15) + (lVar20 - (uVar5 & 0xffffffffffe00000));
  lVar16 = (lVar17 >> 0x15) + ((param_8 + lVar18) - (uVar10 & 0xffffffffffe00000));
  lVar9 = (unaff_retaddr - (unaff_retaddr + 0x100000U & 0xffffffffffe00000)) +
          ((long)uVar10 >> 0x15) + (lVar16 >> 0x15);
  lVar18 = (lVar9 >> 0x15) + ((param_17 + lVar11) - (uVar12 & 0xffffffffffe00000));
  lVar11 = lVar18 >> 0x15;
  lVar4 = lVar11 * 0xa2c13 + (ulong)((uint)lVar13 & 0x1fffff);
  uVar23 = (lVar4 >> 0x15) + lVar11 * 0x72d18 + (ulong)((uint)lVar8 & 0x1fffff);
  uVar2 = ((long)uVar23 >> 0x15) + lVar11 * 0x9fb67 + (ulong)((uint)lVar22 & 0x1fffff);
  uVar15 = ((long)uVar2 >> 0x15) + lVar11 * -0xf39ad + (ulong)((uint)lVar28 & 0x1fffff);
  uVar12 = ((long)uVar15 >> 0x15) + lVar11 * 0x215d1 + (ulong)((uint)lVar25 & 0x1fffff);
  uVar10 = ((long)uVar12 >> 0x15) + lVar11 * -0xa6f7d + (ulong)((uint)lVar21 & 0x1fffff);
  uVar7 = ((long)uVar10 >> 0x15) + (ulong)((uint)lVar14 & 0x1fffff);
  uVar3 = ((long)uVar7 >> 0x15) + (ulong)((uint)lVar6 & 0x1fffff);
  lVar8 = ((long)uVar3 >> 0x15) + (ulong)((uint)lVar17 & 0x1fffff);
  uVar1 = (lVar8 >> 0x15) + (ulong)((uint)lVar16 & 0x1fffff);
  uVar5 = ((long)uVar1 >> 0x15) + (ulong)((uint)lVar9 & 0x1fffff);
  uVar26 = (int)(uVar5 >> 0x15) + ((uint)lVar18 & 0x1fffff);
  *(char *)(in_stack_00000218 + 0x20) = (char)lVar4;
  *(char *)(in_stack_00000218 + 0x21) = (char)((ulong)lVar4 >> 8);
  *(byte *)(in_stack_00000218 + 0x22) =
       (byte)((uint)uVar23 << 5) | (byte)((ulong)lVar4 >> 0x10) & 0x1f;
  *(char *)(in_stack_00000218 + 0x23) = (char)(uVar23 >> 3);
  *(char *)(in_stack_00000218 + 0x24) = (char)(uVar23 >> 0xb);
  *(byte *)(in_stack_00000218 + 0x25) = ((byte)((uint)uVar23 >> 0x13) & 3) + (char)uVar2 * '\x04';
  *(char *)(in_stack_00000218 + 0x26) = (char)(uVar2 >> 6);
  *(byte *)(in_stack_00000218 + 0x27) =
       (byte)((uint)uVar15 << 7) | (byte)((uint)uVar2 >> 0xe) & 0x7f;
  *(char *)(in_stack_00000218 + 0x28) = (char)(uVar15 >> 1);
  *(char *)(in_stack_00000218 + 0x29) = (char)(uVar15 >> 9);
  *(byte *)(in_stack_00000218 + 0x2a) =
       (byte)((uint)uVar12 << 4) | (byte)((uint)uVar15 >> 0x11) & 0xf;
  *(char *)(in_stack_00000218 + 0x2b) = (char)(uVar12 >> 4);
  *(char *)(in_stack_00000218 + 0x2c) = (char)(uVar12 >> 0xc);
  *(byte *)(in_stack_00000218 + 0x2d) = ((byte)((uint)uVar12 >> 0x14) & 1) + (char)uVar10 * '\x02';
  *(char *)(in_stack_00000218 + 0x2e) = (char)(uVar10 >> 7);
  *(byte *)(in_stack_00000218 + 0x2f) =
       (byte)((uint)uVar7 << 6) | (byte)((uint)uVar10 >> 0xf) & 0x3f;
  *(char *)(in_stack_00000218 + 0x30) = (char)(uVar7 >> 2);
  *(char *)(in_stack_00000218 + 0x31) = (char)(uVar7 >> 10);
  *(byte *)(in_stack_00000218 + 0x32) = ((byte)((uint)uVar7 >> 0x12) & 7) + (char)uVar3 * '\b';
  *(char *)(in_stack_00000218 + 0x33) = (char)(uVar3 >> 5);
  *(char *)(in_stack_00000218 + 0x34) = (char)((uint)uVar3 >> 0xd);
  *(char *)(in_stack_00000218 + 0x35) = (char)lVar8;
  *(char *)(in_stack_00000218 + 0x36) = (char)((ulong)lVar8 >> 8);
  *(byte *)(in_stack_00000218 + 0x37) =
       (byte)((uint)uVar1 << 5) | (byte)((ulong)lVar8 >> 0x10) & 0x1f;
  *(char *)(in_stack_00000218 + 0x38) = (char)(uVar1 >> 3);
  *(char *)(in_stack_00000218 + 0x39) = (char)(uVar1 >> 0xb);
  *(byte *)(in_stack_00000218 + 0x3a) = ((byte)((uint)uVar1 >> 0x13) & 3) + (char)uVar5 * '\x04';
  *(char *)(in_stack_00000218 + 0x3b) = (char)(uVar5 >> 6);
  *(byte *)(in_stack_00000218 + 0x3c) = (char)uVar26 * -0x80 | (byte)((uint)uVar5 >> 0xe) & 0x7f;
  *(char *)(in_stack_00000218 + 0x3d) = (char)(uVar26 >> 1);
  *(char *)(in_stack_00000218 + 0x3e) = (char)(uVar26 >> 9);
  *(char *)(in_stack_00000218 + 0x3f) = (char)(uVar26 >> 0x11);
  func_0x047f2be0(&stack0x00000340,0xd8);
  func_0x047f2be0(&stack0x00000180,0x40);
  func_0x047f2be0(&stack0x00000100,0x40);
  return 1;
}


