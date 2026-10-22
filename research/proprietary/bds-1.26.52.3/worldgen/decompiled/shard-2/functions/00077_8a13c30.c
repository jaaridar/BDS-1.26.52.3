/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8a13c30
 * Label: JigsawStructureDataPacket::vslot5
 * Body:  [[08a1393f, 08a139ed] [08a139f0, 08a13a65] [08a13a70, 08a13b30] [08a13c30, 08a13da6] [08a13db0, 08a13dd7] [08a13de0, 08a13e3e] [08a13e67, 08a13e87] [08a13e9c, 08a14265]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot5
 */


/* WARNING: Instruction at (ram,0x08a13c34) overlaps instruction at (ram,0x08a13c33)
    */
/* WARNING: Removing unreachable block (ram,0x08a13d06) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawStructureDataPacket__vslot5(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte bVar6;
  long *plVar7;
  char cVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long unaff_RBX;
  long unaff_RBP;
  ulong uVar14;
  ulong uVar15;
  long unaff_R12;
  long unaff_R14;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  ulong in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 *in_stack_00000050;
  char in_stack_00000060;
  char in_stack_00000100;
  undefined1 in_stack_00000140;
  
  *(uint *)((ulong)*param_2 - 0x80000000) = *(uint *)((ulong)*param_2 - 0x80000000) | 0x38;
  *(char *)(unaff_RBP + 0x37) = *(char *)(unaff_RBP + 0x37) + (char)((ulong)param_3 >> 8);
code_r0x08a13c40:
  cVar8 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
  if (cVar8 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
LAB_08a13c77:
  in_stack_00000048 = (long *)(**(code **)(**(long **)(unaff_RBX + 0x98) + 0x270))();
  func_0x0eee2f00(&stack0x00000050);
  in_stack_00000100 = in_stack_00000008._7_1_;
  func_0x08a142c0(&stack0x00000028);
  (**(code **)(*in_stack_00000048 + 0x128))(in_stack_00000048,in_stack_00000040._4_4_);
  if ((in_stack_00000028 & 1) != 0) {
    func_0x0412a280(in_stack_00000038,in_stack_00000028 & 0xfffffffffffffffe);
  }
LAB_08a13d33:
  func_0x08a143f0();
  unaff_R12 = unaff_R12 + 0x20;
  if (unaff_R12 != unaff_RBP) {
    do {
      lVar11 = func_0x09f77f10(unaff_R12,0);
      if (lVar11 != 0) {
        lVar11 = *(long *)(unaff_R12 + 8);
        uVar3 = *(uint *)(unaff_R12 + 0x10);
        plVar13 = (long *)(*(long *)(lVar11 + 0x38) +
                          (ulong)(((uint)(*(int *)(lVar11 + 0x40) - (int)*(long *)(lVar11 + 0x38))
                                  >> 3) - 1 & 0xb845379) * 8);
        do {
          if (*plVar13 == -1) goto LAB_08a139f0;
          lVar16 = *plVar13 * 0x20;
          plVar13 = (long *)(*(long *)(lVar11 + 0x50) + lVar16);
        } while (*(int *)(*(long *)(lVar11 + 0x50) + 8 + lVar16) != 0xb845379);
        if ((plVar13 != *(long **)(lVar11 + 0x58)) && (lVar11 = plVar13[2], lVar11 != 0)) {
          uVar15 = (ulong)((uVar3 & 0x3ffff) >> 0xb);
          if ((uVar15 < (ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8) >> 3)) &&
             (((lVar16 = *(long *)(*(long *)(lVar11 + 8) + uVar15 * 8), lVar16 != 0 &&
               (uVar4 = *(uint *)(lVar16 + (ulong)(uVar3 & 0x7ff) * 4),
               (uVar3 & 0xfffc0000 ^ uVar4) < 0x3ffff)) &&
              (lVar11 = *(long *)(*(long *)(lVar11 + 0x50) + (ulong)((uVar4 & 0x3ff80) >> 4)),
              lVar11 != 0)))) {
            lVar11 = lVar11 + (ulong)(uVar4 & 0x7f) * 0x1f8;
            if (*(int *)(lVar11 + 0xa8) == *(int *)(unaff_R14 + 0xa8)) {
              switch(*(int *)(unaff_R14 + 0xa8)) {
              case 0:
                if (*(long *)(lVar11 + 0x18) == *(long *)(unaff_R14 + 0x18)) goto code_r0x08a13bdf;
                break;
              case 1:
                if ((*(short *)(lVar11 + 0x2a) == *(short *)(unaff_R14 + 0x2a)) &&
                   (*(int *)(lVar11 + 0x2c) == *(int *)(unaff_R14 + 0x2c))) goto code_r0x08a13bdf;
                break;
              case 2:
                if (*(short *)(lVar11 + 0x2a) == *(short *)(unaff_R14 + 0x2a)) {
                  auVar2 = *(undefined1 (*) [16])(lVar11 + 0x30);
                  auVar17[0] = -(*(char *)(unaff_R14 + 0x30) == auVar2[0]);
                  auVar17[1] = -(*(char *)(unaff_R14 + 0x31) == auVar2[1]);
                  auVar17[2] = -(*(char *)(unaff_R14 + 0x32) == auVar2[2]);
                  auVar17[3] = -(*(char *)(unaff_R14 + 0x33) == auVar2[3]);
                  auVar17[4] = -(*(char *)(unaff_R14 + 0x34) == auVar2[4]);
                  auVar17[5] = -(*(char *)(unaff_R14 + 0x35) == auVar2[5]);
                  auVar17[6] = -(*(char *)(unaff_R14 + 0x36) == auVar2[6]);
                  auVar17[7] = -(*(char *)(unaff_R14 + 0x37) == auVar2[7]);
                  auVar17[8] = -(*(char *)(unaff_R14 + 0x38) == auVar2[8]);
                  auVar17[9] = -(*(char *)(unaff_R14 + 0x39) == auVar2[9]);
                  auVar17[10] = -(*(char *)(unaff_R14 + 0x3a) == auVar2[10]);
                  auVar17[0xb] = -(*(char *)(unaff_R14 + 0x3b) == auVar2[0xb]);
                  auVar17[0xc] = -(*(char *)(unaff_R14 + 0x3c) == auVar2[0xc]);
                  auVar17[0xd] = -(*(char *)(unaff_R14 + 0x3d) == auVar2[0xd]);
                  auVar17[0xe] = -(*(char *)(unaff_R14 + 0x3e) == auVar2[0xe]);
                  auVar17[0xf] = -(*(char *)(unaff_R14 + 0x3f) == auVar2[0xf]);
                  if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar17[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x08a13bdf;
                }
                break;
              case 3:
                uVar3 = *(uint *)(lVar11 + 0x10);
                if (*(uint *)(unaff_R14 + 0x10) == uVar3 && uVar3 != 0xffffffff) {
                  in_stack_00000050 = &stack0x00000028;
                  cVar8 = (**(code **)(&UNK_0f1475c8 + (ulong)uVar3 * 8))(&stack0x00000050);
                  if (cVar8 != '\0') goto code_r0x08a13bdf;
                }
                else if (*(uint *)(unaff_R14 + 0x10) == uVar3) goto code_r0x08a13bdf;
                break;
              case 4:
                goto code_r0x08a13bdf;
              }
            }
          }
        }
      }
LAB_08a139f0:
      unaff_R12 = unaff_R12 + 0x20;
      if (unaff_R12 == unaff_RBP) break;
    } while( true );
  }
  if (*(long *)(unaff_RBX + 0x378) == 0) goto LAB_08a1408a;
  uVar9 = func_0x08b53b60();
  uVar15 = *(ulong *)(unaff_RBX + 0x368);
  if (uVar15 == 0) goto LAB_08a1408a;
  uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
  uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar12 >> 0x38 < 2) {
    uVar14 = uVar15 - 1 & uVar9;
    lVar11 = *(long *)(unaff_RBX + 0x360);
    plVar13 = *(long **)(lVar11 + uVar14 * 8);
  }
  else {
    uVar14 = uVar9;
    if (uVar15 <= uVar9) {
      if ((uVar9 | uVar15) >> 0x20 == 0) {
        uVar14 = (uVar9 & 0xffffffff) % (uVar15 & 0xffffffff);
        lVar11 = *(long *)(unaff_RBX + 0x360);
        plVar13 = *(long **)(lVar11 + uVar14 * 8);
        goto joined_r0x08a13e7d;
      }
      uVar14 = uVar9 % uVar15;
    }
    lVar11 = *(long *)(unaff_RBX + 0x360);
    plVar13 = *(long **)(lVar11 + uVar14 * 8);
  }
joined_r0x08a13e7d:
  if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
  goto LAB_08a1408a;
  uVar1 = uVar15 - 1;
  bVar6 = (byte)(uVar12 >> 0x38);
  if (1 < bVar6) goto LAB_08a13df2;
  goto LAB_08a13dc2;
code_r0x08a13bdf:
  in_stack_00000008._7_1_ = *(char *)(lVar11 + 0xb0);
  if (in_stack_00000008._7_1_ != '\0') goto code_r0x08a13bef;
  goto LAB_08a13d33;
code_r0x08a13bef:
  if ((*(long *)(unaff_RBX + 0x88) == 0) &&
     (cVar8 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (**(char **)(unaff_RBX + 0x88) == '\0') goto code_r0x08a13c40;
  goto LAB_08a13c77;
LAB_08a13dc2:
  do {
    if (plVar13[1] == uVar9) {
      if (plVar13[2] == uVar9) goto LAB_08a13e2e;
    }
    else if ((plVar13[1] & uVar1) != uVar14) break;
    plVar13 = (long *)*plVar13;
  } while (plVar13 != (long *)0x0);
  goto LAB_08a1408a;
LAB_08a13df2:
  do {
    uVar12 = plVar13[1];
    if (uVar12 == uVar9) {
      if (plVar13[2] == uVar9) goto LAB_08a13e2e;
    }
    else {
      if (uVar15 <= uVar12) {
        if ((uVar12 | uVar15) >> 0x20 == 0) {
          if ((uVar12 & 0xffffffff) % (uVar15 & 0xffffffff) == uVar14) goto LAB_08a13de6;
          break;
        }
        uVar12 = uVar12 % uVar15;
      }
      if (uVar12 != uVar14) break;
    }
LAB_08a13de6:
    plVar13 = (long *)*plVar13;
  } while (plVar13 != (long *)0x0);
  goto LAB_08a1408a;
LAB_08a13f54:
  if (bVar6 < 2) {
    uVar9 = uVar9 & uVar1;
  }
  else if (uVar15 <= uVar9) {
    if ((uVar9 | uVar15) >> 0x20 == 0) {
      uVar9 = (uVar9 & 0xffffffff) % (uVar15 & 0xffffffff);
    }
    else {
      uVar9 = uVar9 % uVar15;
    }
  }
  plVar7 = *(long **)(lVar11 + uVar9 * 8);
  do {
    plVar10 = plVar7;
    plVar7 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar13);
  if (plVar10 == (long *)(unaff_RBX + 0x370)) {
LAB_08a13fd5:
    if (*plVar13 != 0) {
      uVar12 = *(ulong *)(*plVar13 + 8);
      if (bVar6 < 2) {
        uVar12 = uVar12 & uVar1;
      }
      else if (uVar15 <= uVar12) {
        if ((uVar12 | uVar15) >> 0x20 == 0) {
          uVar12 = (uVar12 & 0xffffffff) % (uVar15 & 0xffffffff);
        }
        else {
          uVar12 = uVar12 % uVar15;
        }
      }
      if (uVar12 == uVar9) goto LAB_08a1401a;
    }
    *(undefined8 *)(lVar11 + uVar9 * 8) = 0;
  }
  else {
    uVar12 = plVar10[1];
    if (bVar6 < 2) {
      uVar12 = uVar12 & uVar1;
    }
    else if (uVar15 <= uVar12) {
      if ((uVar12 | uVar15) >> 0x20 == 0) {
        uVar12 = (uVar12 & 0xffffffff) % (uVar15 & 0xffffffff);
      }
      else {
        uVar12 = uVar12 % uVar15;
      }
    }
    if (uVar12 != uVar9) goto LAB_08a13fd5;
  }
LAB_08a1401a:
  lVar16 = *plVar13;
  if (lVar16 == 0) {
    lVar16 = 0;
  }
  else {
    uVar12 = *(ulong *)(lVar16 + 8);
    if (bVar6 < 2) {
      uVar12 = uVar12 & uVar1;
    }
    else if (uVar15 <= uVar12) {
      if ((uVar12 | uVar15) >> 0x20 == 0) {
        uVar12 = (uVar12 & 0xffffffff) % (uVar15 & 0xffffffff);
      }
      else {
        uVar12 = uVar12 % uVar15;
      }
    }
    if (uVar12 != uVar9) {
      *(long **)(lVar11 + uVar12 * 8) = plVar10;
      lVar16 = *plVar13;
    }
  }
  *plVar10 = lVar16;
  *plVar13 = 0;
  *(long *)(unaff_RBX + 0x378) = *(long *)(unaff_RBX + 0x378) + -1;
  func_0x08a99950(plVar13 + 3);
  func_0x0412a280(plVar13,0x40);
  goto LAB_08a1408a;
LAB_08a13e2e:
  if (bVar6 < 2) {
    uVar12 = uVar1 & uVar9;
  }
  else {
    uVar12 = uVar9;
    if (uVar15 <= uVar9) {
      if ((uVar9 | uVar15) >> 0x20 == 0) {
        uVar12 = (uVar9 & 0xffffffff) % (uVar15 & 0xffffffff);
      }
      else {
        uVar12 = uVar9 % uVar15;
      }
    }
  }
  puVar5 = *(undefined8 **)(lVar11 + uVar12 * 8);
  if ((puVar5 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar5, plVar13 != (long *)0x0)) {
    if (bVar6 < 2) {
      do {
        if (plVar13[1] == uVar9) {
          if (plVar13[2] == uVar9) goto LAB_08a13f54;
        }
        else if ((plVar13[1] & uVar1) != uVar12) break;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar14 = plVar13[1];
        if (uVar14 == uVar9) {
          if (plVar13[2] == uVar9) goto LAB_08a13f54;
        }
        else {
          if (uVar15 <= uVar14) {
            if ((uVar14 | uVar15) >> 0x20 == 0) {
              uVar14 = (uVar14 & 0xffffffff) % (uVar15 & 0xffffffff);
            }
            else {
              uVar14 = uVar14 % uVar15;
            }
          }
          if (uVar14 != uVar12) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_08a1408a:
  lVar16 = *(long *)(unaff_RBX + 0x268) + 0x18;
  lVar11 = func_0x09e2c380(lVar16);
  if (lVar11 != 0) {
    func_0x09e2c700(&stack0x00000050,lVar16,lVar11);
    puVar5 = in_stack_00000050;
    in_stack_00000050 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      if (in_stack_00000060 == '\x01') {
        lVar11 = puVar5[0x18];
        puVar5[0x18] = 0;
        if (lVar11 != 0) {
          in_stack_00000028 = lVar11 + 0xb8;
          func_0x09e296a0(&stack0x00000028);
          func_0x0412a280(lVar11,0xd8);
        }
      }
      func_0x0412a280(puVar5,200);
    }
  }
  if ((*(long *)(unaff_RBX + 0x88) == 0) &&
     (cVar8 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(unaff_RBX + 0x88) == '\0') &&
     (cVar8 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar8 = (**(code **)(**(long **)(unaff_RBX + 0x98) + 0xb30))();
  if (cVar8 != '\0') {
    if ((*(long *)(unaff_RBX + 0x88) == 0) &&
       (cVar8 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(unaff_RBX + 0x88) == '\0') &&
       (cVar8 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(**(long **)(unaff_RBX + 0x98) + 0x7a0))();
  }
  func_0x08a15040();
  return;
}


