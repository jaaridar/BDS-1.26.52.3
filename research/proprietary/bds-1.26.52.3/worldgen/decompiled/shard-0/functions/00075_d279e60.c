/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd279e60
 * Label: string:Failed to map jigsaw structure final block: '%s'. There is n
 * Body:  [[0d2785fb, 0d2788e0] [0d2790bb, 0d2790cc] [0d279134, 0d2792d4] [0d27946b, 0d27947f] [0d279e60, 0d279e81]]
 * Ghidra: FUN_0d279e60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d279e60(void)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long extraout_RDX;
  long lVar12;
  uint uVar13;
  short sVar14;
  long lVar15;
  short sVar16;
  uint uVar17;
  undefined8 *unaff_R14;
  bool bVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long in_stack_00000030;
  long in_stack_00000068;
  uint *in_stack_00000078;
  long in_stack_00000090;
  
  func_0x0d299d70();
  lVar7 = func_0x0d29a460();
  fVar19 = (float)func_0x0d279f50();
  *(float *)(lVar7 + 0x30) = fVar19 + *(float *)(lVar7 + 0x30);
  uVar8 = *(uint *)(lVar7 + 0x48);
  uVar13 = *(int *)(lVar7 + 0x4c) - 1;
  uVar2 = *(uint *)(lVar7 + 0x50);
  uVar17 = uVar13 >> 4;
  lVar4 = CONCAT44((int)uVar2 >> 4,(int)uVar8 >> 4);
  sVar16 = (short)uVar17;
  if (lVar4 == unaff_R14[2]) {
    if (sVar16 != *(short *)(unaff_R14 + 3)) {
      *(short *)(unaff_R14 + 3) = sVar16;
      auVar21._8_8_ = extraout_RDX;
      auVar21._0_8_ = unaff_R14[4];
      lVar4 = extraout_RDX;
      if (unaff_R14[4] != 0) goto LAB_0d278692;
LAB_0d2786fb:
      lVar5 = 0;
LAB_0d2786ff:
      auVar21._8_8_ = lVar4;
      auVar21._0_8_ = lVar5;
      unaff_R14[5] = 0;
      goto joined_r0x0d278713;
    }
    lVar5 = unaff_R14[4];
    lVar4 = extraout_RDX;
joined_r0x0d27865f:
    if (lVar5 != 0) goto LAB_0d278715;
LAB_0d27874a:
    if ((_DAT_0f6ffb10 == (long *)0x0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar4 = *(long *)(*_DAT_0f6ffb10 + 0x200);
  }
  else {
    unaff_R14[2] = lVar4;
    in_stack_00000030 = lVar4;
    auVar21 = (**(code **)(*(long *)*unaff_R14 + 0x148))((long *)*unaff_R14,&stack0x00000030);
    lVar4 = auVar21._8_8_;
    unaff_R14[4] = auVar21._0_8_;
    *(short *)(unaff_R14 + 3) = sVar16;
    if (auVar21._0_8_ == 0) goto LAB_0d2786fb;
LAB_0d278692:
    lVar5 = auVar21._0_8_;
    if ((uVar17 + 0x7ff & 0xffff) < 0xfff) {
      lVar4 = *(long *)(lVar5 + 0x30);
      sVar14 = (short)(uVar17 << 4);
      if ((*(short *)(lVar4 + 0xa8) <= sVar14) && (sVar14 < *(short *)(lVar4 + 0xaa))) {
        lVar4 = (long)(short)((uint)(int)*(short *)(lVar4 + 0xa8) >> 4);
        unaff_R14[5] = (sVar16 - lVar4) * 0x68 + *(long *)(lVar5 + 0x108);
        goto joined_r0x0d27865f;
      }
      goto LAB_0d2786ff;
    }
    unaff_R14[5] = 0;
joined_r0x0d278713:
    lVar4 = auVar21._8_8_;
    if (auVar21._0_8_ == 0) goto LAB_0d27874a;
LAB_0d278715:
    if (unaff_R14[5] == 0) goto LAB_0d27874a;
    uVar8 = (uVar2 & 0xf) << 4 | (uVar8 & 0xf) << 8 |
            (ushort)((short)uVar13 - *(short *)(unaff_R14 + 1)) & 0xf;
    plVar10 = *(long **)(unaff_R14[5] + 0x30);
    lVar4 = (**(code **)(*plVar10 + 0x20))(plVar10,(short)uVar8,lVar4,uVar8);
  }
  uVar20 = 0;
  if (*(float *)(*(long *)(in_stack_00000068 + 0xf8) + 4) <= 0.0) goto LAB_0d2792ae;
  uVar8 = in_stack_00000078[1];
  if (((int)uVar8 < *(int *)(lVar7 + 0x4c)) &&
     (lVar5 = in_stack_00000068, (*(byte *)(*(long *)(lVar4 + 0x68) + 0x108) & 1) == 0)) {
LAB_0d2792a1:
    uVar20 = *(undefined4 *)(*(long *)(lVar5 + 0xf8) + 4);
  }
  else {
    if (*(int *)(lVar7 + 0x4c) < (int)uVar8) {
      uVar2 = *in_stack_00000078;
      uVar13 = in_stack_00000078[2];
      uVar17 = uVar8 - 1 >> 4;
      lVar5 = CONCAT44((int)uVar13 >> 4,(int)uVar2 >> 4);
      sVar16 = (short)uVar17;
      if (lVar5 == unaff_R14[2]) {
        uVar11 = (uint)*(short *)(unaff_R14 + 3);
        uVar6 = (ulong)uVar11;
        lVar5 = unaff_R14[4];
        auVar22._8_4_ = uVar11;
        auVar22._0_8_ = lVar5;
        auVar22._12_4_ = 0;
        if ((int)sVar16 != uVar11) goto LAB_0d278865;
joined_r0x0d278823:
        if (lVar5 != 0) goto LAB_0d27913f;
LAB_0d27918c:
        if ((_DAT_0f6ffb10 == (long *)0x0) &&
           (cVar3 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
           cVar3 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        bVar1 = *(byte *)(*(long *)(*(long *)(*_DAT_0f6ffb10 + 0x200) + 0x68) + 0x108);
        lVar5 = in_stack_00000068;
      }
      else {
        unaff_R14[2] = lVar5;
        in_stack_00000030 = lVar5;
        in_stack_00000090 = lVar4;
        auVar22 = (**(code **)(*(long *)*unaff_R14 + 0x148))((long *)*unaff_R14,&stack0x00000030);
        unaff_R14[4] = auVar22._0_8_;
        lVar4 = in_stack_00000090;
LAB_0d278865:
        lVar12 = auVar22._8_8_;
        lVar5 = auVar22._0_8_;
        *(short *)(unaff_R14 + 3) = sVar16;
        if (lVar5 == 0) {
          lVar5 = 0;
LAB_0d2790bf:
          auVar22._8_8_ = lVar12;
          auVar22._0_8_ = lVar5;
          unaff_R14[5] = 0;
        }
        else {
          if ((uVar17 + 0x7ff & 0xffff) < 0xfff) {
            lVar12 = *(long *)(lVar5 + 0x30);
            sVar14 = (short)(uVar17 << 4);
            if ((*(short *)(lVar12 + 0xa8) <= sVar14) && (sVar14 < *(short *)(lVar12 + 0xaa))) {
              uVar6 = (ulong)(short)((uint)(int)*(short *)(lVar12 + 0xa8) >> 4);
              unaff_R14[5] = ((long)sVar16 - uVar6) * 0x68 + *(long *)(lVar5 + 0x108);
              goto joined_r0x0d278823;
            }
            goto LAB_0d2790bf;
          }
          unaff_R14[5] = 0;
        }
        uVar6 = auVar22._8_8_;
        if (auVar22._0_8_ == 0) goto LAB_0d27918c;
LAB_0d27913f:
        if (unaff_R14[5] == 0) goto LAB_0d27918c;
        uVar8 = (uVar13 & 0xf) << 4 | (uVar2 & 0xf) << 8 |
                (ushort)((short)(uVar8 - 1) - *(short *)(unaff_R14 + 1)) & 0xf;
        plVar10 = *(long **)(unaff_R14[5] + 0x30);
        lVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,(short)uVar8,uVar6,uVar8);
        bVar1 = *(byte *)(*(long *)(lVar5 + 0x68) + 0x108);
        lVar5 = in_stack_00000068;
      }
      in_stack_00000068 = lVar5;
      if ((bVar1 & 1) == 0) goto LAB_0d2792a1;
    }
    lVar5 = in_stack_00000068;
    uVar20 = 0;
    lVar12 = *(long *)(lVar4 + 0x68);
    if ((*(byte *)(lVar12 + 0x109) & 0x20) == 0) goto LAB_0d2792ae;
    lVar15 = *(long *)(lVar12 + 0x1b0);
    if (lVar15 != 0) {
      lVar9 = lVar12 + 0x1b0;
      do {
        bVar18 = *(ulong *)(lVar15 + 0x20) < _DAT_0f6fe710;
        if (!bVar18) {
          lVar9 = lVar15;
        }
        lVar15 = *(long *)(lVar15 + (ulong)bVar18 * 8);
      } while (lVar15 != 0);
      if ((lVar9 != lVar12 + 0x1b0) && (*(ulong *)(lVar9 + 0x20) <= _DAT_0f6fe710)) {
        cVar3 = (char)*(undefined4 *)(lVar9 + 0x2c);
        if ((ushort)((*(ushort *)(lVar4 + 0x128) >>
                     (((char)*(undefined4 *)(lVar9 + 0x30) - cVar3) + 1U & 0x1f)) <<
                    (0x10U - cVar3 & 0x1f)) == 0) goto LAB_0d2792ae;
        goto LAB_0d2792a1;
      }
    }
    for (plVar10 = *(long **)(lVar12 + 0x350); plVar10 != *(long **)(lVar12 + 0x358);
        plVar10 = plVar10 + 2) {
      if (*(ulong *)(((undefined8 *)*plVar10)[1] + 8) == _DAT_0f6fe710) {
        uVar6 = (*(code *)**(undefined8 **)*plVar10)();
        uVar20 = 0;
        if ((int)uVar6 != 0 && (uVar6 >> 0x20 & 1) != 0) goto LAB_0d2792a1;
        break;
      }
    }
  }
LAB_0d2792ae:
  *(undefined4 *)(lVar7 + 0x34) = uVar20;
  return lVar7 + 0x20;
}


