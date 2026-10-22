/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6b3c7b0
 * Label: string:ZN9Scripting18EnumBindingBuilderIN11SharedTypes15JigsawJoint
 * Body:  [[06b3c79e, 06b3c7ac] [06b3c7b0, 06b3d3c1] [06b3d3d0, 06b3d849] [06b3d850, 06b3e850] [06b3e860, 06b3ed70] [06b3ed80, 06b3edd7] [06b3ee44, 06b3eeba] [06b3ef4b, 06b3efd2]]
 * Ghidra: FUN_06b3c7b0
 */


/* WARNING: This function may have set the stack pointer */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_06b3c7b0(void)

{
  char *pcVar1;
  code *pcVar2;
  ulong *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  ulong in_RAX;
  long lVar14;
  code *pcVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  long lVar18;
  char in_CL;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  
  uVar11 = (int)(int *)(in_RAX & 0xfffffffffffffff0) + *(int *)(in_RAX & 0xfffffffffffffff0);
  pcVar1 = (char *)((ulong)uVar11 - 0x75);
  *pcVar1 = *pcVar1 + in_CL;
  pcVar1 = (char *)((ulong)uVar11 - 0x7d);
  *pcVar1 = *pcVar1 + in_CL;
  out(0xfe,(char)uVar11);
  uRam000000000004001c = 0x6b3c7c6;
  func_0x0412a280();
  if (((ulong)puRam0000000000040054 & 1) != 0) {
    uRam000000000004001c = 0x6b3c7e0;
    func_0x0412a280(puRam0000000000040064,(ulong)puRam0000000000040054 & 0xfffffffffffffffe);
  }
  if (pcRam000000000004077c != (code *)0x0) {
    uRam000000000004001c = 0x6b3c7f7;
    (*pcRam000000000004077c)(0x40764);
  }
  if (pcRam0000000000040734 != (code *)0x0) {
    uRam000000000004001c = 0x6b3c80e;
    (*pcRam0000000000040734)(0x4071c);
  }
  if (pcRam00000000000406f4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3c825;
    (*pcRam00000000000406f4)(0x406dc);
  }
  if (pcRam00000000000406b4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3c83c;
    (*pcRam00000000000406b4)(0x4069c);
  }
  if ((uRam0000000000040664 & 1) != 0) {
    uRam000000000004001c = 0x6b3c85f;
    func_0x0412a280(uRam0000000000040674,uRam0000000000040664 & 0xfffffffffffffffe);
  }
  if ((uRam00000000000400b4 & 1) != 0) {
    uRam000000000004001c = 0x6b3c882;
    func_0x0412a280(lRam00000000000400c4,uRam00000000000400b4 & 0xfffffffffffffffe);
  }
  puRam0000000000040054 = (ulong *)0x736e6f6974706f0e;
  puRam000000000004005c = (ulong *)((ulong)puRam000000000004005c & 0xffffffffffffff00);
  uRam0000000000040414 = 0;
  uRam000000000004041c = 0;
  uRam0000000000040424 = 0;
  uRam000000000004001c = 0x6b3c8c3;
  func_0x048b1dc0(0x4042c);
  uRam000000000004001c = 0x6b3c8d3;
  func_0x0652b590(0x4043c);
  if ((uRam0000000000040414 & 1) == 0) {
    if (((ulong)puRam0000000000040054 & 1) == 0) {
      uRam0000000000040424 = (ulong)puRam0000000000040064;
      uRam0000000000040414 = (ulong)puRam0000000000040054;
      uRam000000000004041c = (ulong)puRam000000000004005c;
    }
    else {
      uRam000000000004001c = 0x6b3c93f;
      func_0x04885070(0x40414,puRam0000000000040064,puRam000000000004005c);
    }
  }
  else {
    uVar22 = (ulong)puRam0000000000040054 >> 1 & 0x7f;
    uVar19 = 0x40055;
    if (((ulong)puRam0000000000040054 & 1) != 0) {
      uVar22 = (ulong)puRam000000000004005c;
      uVar19 = (ulong)puRam0000000000040064;
    }
    uRam000000000004001c = 0x6b3c926;
    func_0x04885120(0x40414,uVar19,uVar22);
  }
  plVar23 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar23 == (long *)0x0) {
    uRam000000000004001c = 0x6b3c964;
    func_0x048b0de0(0x40664,0x40174);
    _DAT_0f54fd90 = (undefined4)uRam0000000000040664;
    uRam000000000f54fd94 = uRam0000000000040664._4_4_;
    uVar12 = plRam000000000004066c._0_4_;
    uVar9 = plRam000000000004066c._4_4_;
    uRam0000000000040664 = 0;
    plRam000000000004066c = (long *)0x0;
    plVar23 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar9;
    if (plVar23 != (long *)0x0) {
      LOCK();
      plVar20 = plVar23 + 1;
      lVar14 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        uRam000000000004001c = 0x6b3c9a5;
        (**(code **)(*plVar23 + 0x10))(plVar23);
        uRam000000000004001c = 0x6b3c9ad;
        func_0x0412c2d0(plVar23);
      }
    }
    plVar23 = plRam000000000004066c;
    if (plRam000000000004066c != (long *)0x0) {
      LOCK();
      plVar20 = plRam000000000004066c + 1;
      lVar14 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        uRam000000000004001c = 0x6b3c9d5;
        (**(code **)(*plVar23 + 0x10))(plVar23);
        uRam000000000004001c = 0x6b3c9dd;
        func_0x0412c2d0(plVar23);
      }
    }
    plVar23 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f5a0058 == '\0') {
    uRam000000000004001c = 0x6b3ef57;
    iVar13 = func_0x04108328(&DAT_0f5a0058);
    if (iVar13 != 0) {
      uRam000000000004001c = 0x6b3ef64;
      func_0x06c92ce0();
      uRam000000000004001c = 0x6b3ef7e;
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f59ffd8,0xf53dab8);
      uRam000000000004001c = 0x6b3ef8a;
      func_0x0410844d(&DAT_0f5a0058);
    }
  }
  plVar20 = (long *)(*plVar23 +
                    (ulong)((int)((ulong)(plVar23[1] - *plVar23) >> 3) - 1U &
                           *(uint *)(_DAT_0f59ffd8 + 4)) * 8);
  do {
    lVar14 = *plVar20;
    if (lVar14 == -1) goto LAB_06b3ca40;
    plVar20 = (long *)(plVar23[3] + lVar14 * 0x18);
  } while (*(uint *)(plVar23[3] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f59ffd8 + 4));
  if (plVar20 == (long *)plVar23[4]) {
LAB_06b3ca40:
    puRam000000000004042c = &DAT_0f59ffd8;
  }
  else {
    puRam000000000004042c = (undefined *)plVar20[2];
  }
  uRam0000000000040184 = 0;
  uRam000000000004019c = 0;
  uRam00000000000401d4 = 0;
  uRam00000000000401dc = 0;
  pcRam00000000000401c4 = (code *)0x0;
  uRam00000000000401cc = 0;
  puRam00000000000401b4 = (ulong *)0x0;
  pcRam00000000000401bc = (code *)0x0;
  puRam00000000000401a4 = (ulong *)0x0;
  puRam00000000000401ac = (ulong *)0x0;
  uRam0000000000040174 = 0;
  uRam000000000004017c = 0;
  uRam000000000004018c = 0x7247686374656616;
  uRam0000000000040194 = 0x7370756f;
  uRam000000000004001c = 0x6b3cad2;
  plRam0000000000040434 = plVar23;
  func_0x06523ef0(0x40664,0x4043c);
  uRam00000000000400b4 = 0;
  lRam00000000000400bc = 0;
  lRam00000000000400c4 = 0;
  uRam000000000004014c = uRam000000000004014c & 0xffffffffffffff00;
  uRam000000000004001c = 0x6b3cb0f;
  lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (lVar14 == 0) {
    uRam000000000004001c = 0x6b3ee50;
    func_0x0eec74c0(0x118,0);
  }
  lRam00000000000400c4 = lVar14 + 0x118;
  bRam0000000000040094 = (byte)lVar14;
  uRam0000000000040095 = (undefined6)((ulong)lVar14 >> 8);
  uRam000000000004009b = (undefined1)((ulong)lVar14 >> 0x38);
  puRam00000000000402cc = (ulong *)0x4012c;
  puRam00000000000402d4 = (ulong *)0x40094;
  puRam00000000000402dc = (undefined *)((ulong)puRam00000000000402dc & 0xffffffffffffff00);
  uRam000000000004001c = 0x6b3cb86;
  uRam00000000000400b4 = lVar14;
  lRam00000000000400bc = lVar14;
  uRam000000000004012c = lVar14;
  func_0x06523ef0(lVar14,0x40664);
  lRam00000000000400bc =
       CONCAT17(uRam000000000004009b,CONCAT61(uRam0000000000040095,bRam0000000000040094)) + 0x118;
  if (pcRam0000000000040754 != (code *)0x0) {
    uRam000000000004001c = 0x6b3cbaf;
    (*pcRam0000000000040754)(0x4073c);
  }
  if (pcRam000000000004070c != (code *)0x0) {
    uRam000000000004001c = 0x6b3cbc6;
    (*pcRam000000000004070c)(0x406f4);
  }
  if (pcRam00000000000406cc != (code *)0x0) {
    uRam000000000004001c = 0x6b3cbdd;
    (*pcRam00000000000406cc)(0x406b4);
  }
  if (pcRam000000000004068c != (code *)0x0) {
    uRam000000000004001c = 0x6b3cbf4;
    (*pcRam000000000004068c)(0x40674);
  }
  uRam000000000004001c = 0x6b3cc0a;
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    uRam000000000004001c = 0x6b3ee61;
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar15 + 8) = 0;
  *(undefined8 *)(pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f0830f0;
  uRam000000000004001c = 0x6b3cc35;
  uVar12 = func_0x0d858500(0x400b4);
  pcVar2 = pcVar15 + 0x18;
  pcVar15[0x20] = (code)0x0;
  *(undefined4 *)(pcVar15 + 0x24) = uVar12;
  *(undefined4 *)(pcVar15 + 0x28) = 0;
  *(undefined8 *)(pcVar15 + 0x30) = 0;
  *(undefined8 *)(pcVar15 + 0x38) = 0;
  *(undefined8 *)(pcVar15 + 0x40) = 0;
  *(undefined **)(pcVar15 + 0x18) = &UNK_0f083140;
  *(undefined4 *)(pcVar15 + 0x48) = (undefined4)uRam00000000000400b4;
  *(undefined4 *)(pcVar15 + 0x4c) = uRam00000000000400b4._4_4_;
  *(undefined4 *)(pcVar15 + 0x50) = (undefined4)lRam00000000000400bc;
  *(undefined4 *)(pcVar15 + 0x54) = lRam00000000000400bc._4_4_;
  *(long *)(pcVar15 + 0x58) = lRam00000000000400c4;
  uRam00000000000400b4 = 0;
  lRam00000000000400bc = 0;
  lRam00000000000400c4 = 0;
  uRam000000000004001c = 0x6b3cca1;
  uVar12 = func_0x0d858620(pcVar2);
  *(undefined4 *)(pcVar15 + 0x28) = uVar12;
  plVar23 = (long *)pcRam00000000000401c4;
  pcRam00000000000401bc = pcVar2;
  if (pcRam00000000000401c4 != (code *)0x0) {
    LOCK();
    plVar20 = (long *)((long)pcRam00000000000401c4 + 8);
    lVar14 = *plVar20;
    pcRam00000000000401c4 = pcVar15;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    pcVar15 = pcRam00000000000401c4;
    if (lVar14 == 0) {
      uRam000000000004001c = 0x6b3ccdd;
      (**(code **)(*plVar23 + 0x10))(plVar23);
      uRam000000000004001c = 0x6b3cce5;
      func_0x0412c2d0(plVar23);
      pcVar15 = pcRam00000000000401c4;
    }
  }
  pcRam00000000000401c4 = pcVar15;
  uRam0000000000040674 = uRam0000000000040424;
  uRam0000000000040664 = uRam0000000000040414;
  plRam000000000004066c = (long *)uRam000000000004041c;
  uRam0000000000040414 = 0;
  uRam000000000004041c = 0;
  uRam0000000000040424 = 0;
  puRam000000000004067c = puRam000000000004042c;
  plRam0000000000040684 = plRam0000000000040434;
  uRam000000000004001c = 0x6b3cd3b;
  func_0x065281f0(0x4068c,0x4043c);
  puRam00000000000402c4 = (ulong *)0x0;
  puRam00000000000402cc = (ulong *)0x0;
  puRam00000000000402d4 = (ulong *)0x0;
  uRam000000000004014c = uRam000000000004014c & 0xffffffffffffff00;
  uRam000000000004001c = 0x6b3cd78;
  puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar16 == (ulong *)0x0) {
    uRam000000000004001c = 0x6b3ee72;
    func_0x0eec74c0(0x140,0);
  }
  puVar3 = puVar16 + 0x28;
  puRam00000000000402c4 = puVar16;
  puRam00000000000402cc = puVar16;
  puRam00000000000402d4 = puVar3;
  if ((uRam0000000000040664 & 1) == 0) {
    puVar16[2] = uRam0000000000040674;
    uVar19 = (ulong)plRam000000000004066c;
    *puVar16 = uRam0000000000040664;
    puVar16[1] = uVar19;
  }
  else {
    uRam000000000004001c = 0x6b3cddf;
    func_0x0412e5e0(puVar16,uRam0000000000040674,plRam000000000004066c);
  }
  uVar12 = puRam000000000004067c._4_4_;
  uVar9 = plRam0000000000040684._0_4_;
  uVar10 = plRam0000000000040684._4_4_;
  *(undefined4 *)(puVar16 + 3) = puRam000000000004067c._0_4_;
  *(undefined4 *)((long)puVar16 + 0x1c) = uVar12;
  *(undefined4 *)(puVar16 + 4) = uVar9;
  *(undefined4 *)((long)puVar16 + 0x24) = uVar10;
  uRam000000000004001c = 0x6b3cdfe;
  func_0x06523ef0(puVar16 + 5,0x4068c);
  puRam00000000000402cc = puVar3;
  if (pcRam000000000004077c != (code *)0x0) {
    uRam000000000004001c = 0x6b3ce1d;
    (*pcRam000000000004077c)(0x40764);
  }
  if (pcRam0000000000040734 != (code *)0x0) {
    uRam000000000004001c = 0x6b3ce34;
    (*pcRam0000000000040734)(0x4071c);
  }
  if (pcRam00000000000406f4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3ce4b;
    (*pcRam00000000000406f4)(0x406dc);
  }
  if (pcRam00000000000406b4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3ce62;
    (*pcRam00000000000406b4)(0x4069c);
  }
  if ((uRam0000000000040664 & 1) != 0) {
    uRam000000000004001c = 0x6b3ce85;
    func_0x0412a280(uRam0000000000040674,uRam0000000000040664 & 0xfffffffffffffffe);
  }
  uRam000000000004001c = 0x6b3ce93;
  uVar11 = (**(code **)(*(long *)pcRam00000000000401bc + 0x20))();
  uVar22 = ((long)puRam00000000000402cc - (long)puRam00000000000402c4 >> 6) * -0x3333333333333333;
  uVar19 = 0;
  if ((uVar11 != 0) && ((uint)uVar22 != 0)) {
    uVar25 = 0;
    uVar19 = 0;
    uRam000000000004004c = uVar11;
    do {
      uRam000000000004001c = 0x6b3cef1;
      auVar27 = (**(code **)(*(long *)pcRam00000000000401bc + 0x28))(pcRam00000000000401bc,uVar25);
      uVar21 = auVar27._8_8_;
      lVar14 = auVar27._0_8_;
      uRam000000000004001c = 0x6b3cefc;
      auVar27 = func_0x06527d70();
      if (auVar27._8_8_ == uVar21) {
        if (auVar27._0_8_ == 0) {
          uRam000000000004001c = 0x6b3cf23;
          lVar18 = func_0x048aead0(auVar27._8_8_);
          iVar13 = *(int *)(lVar18 + 8);
          if (lVar14 != 0) goto LAB_06b3cf11;
LAB_06b3cf2e:
          uRam000000000004001c = 0x6b3cf36;
          lVar18 = func_0x048aead0(uVar21);
          if (iVar13 != *(int *)(lVar18 + 8)) goto LAB_06b3cf40;
        }
        else {
          iVar13 = *(int *)(auVar27._0_8_ + 8);
          if (lVar14 == 0) goto LAB_06b3cf2e;
LAB_06b3cf11:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06b3cf40;
        }
      }
      else {
LAB_06b3cf40:
        uRam000000000004001c = 0x6b3cf45;
        auVar27 = func_0x06527e30();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3cf6c;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3cf7f;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3d138;
        }
        uRam000000000004001c = 0x6b3cf95;
        auVar27 = func_0x06527ef0();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3cfbc;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3cfcf;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3d138;
        }
        uRam000000000004001c = 0x6b3cfe5;
        auVar27 = func_0x06527fb0();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3d00c;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3d01f;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3d138;
        }
        uRam000000000004001c = 0x6b3d035;
        auVar27 = func_0x06528070();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3d05c;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3d06f;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3d138;
        }
        uRam000000000004001c = 0x6b3d085;
        auVar27 = func_0x06528130();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3d0ac;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3d0bf;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3d138;
        }
        puVar16 = puRam00000000000402c4;
        puVar3 = puRam00000000000402cc;
        if (puRam00000000000402c4[uVar19 * 0x28 + 4] != uVar21) goto joined_r0x06b3d353;
        if (puRam00000000000402c4[uVar19 * 0x28 + 3] == 0) {
          uRam000000000004001c = 0x6b3d118;
          lVar18 = func_0x048aead0();
          iVar13 = *(int *)(lVar18 + 8);
          if (lVar14 != 0) goto LAB_06b3d108;
LAB_06b3d120:
          uRam000000000004001c = 0x6b3d128;
          lVar14 = func_0x048aead0(uVar21);
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06b3d340;
        }
        else {
          iVar13 = *(int *)(puRam00000000000402c4[uVar19 * 0x28 + 3] + 8);
          if (lVar14 == 0) goto LAB_06b3d120;
LAB_06b3d108:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06b3d340;
        }
        uVar19 = (ulong)((int)uVar19 + 1);
      }
LAB_06b3d138:
    } while (((uint)uVar19 < (uint)uVar22) && (uVar25 = uVar25 + 1, uVar25 < uRam000000000004004c));
    uVar22 = ((long)puRam00000000000402cc - (long)puRam00000000000402c4 >> 6) * -0x3333333333333333;
  }
  puVar16 = puRam00000000000401a4;
  if (uVar22 == uVar19) {
    puVar3 = puRam00000000000401ac;
    if (puRam00000000000401a4 != (ulong *)0x0) {
      while (puVar16 != puVar3) {
        uRam000000000004001c = 0x6b3d1af;
        func_0x05fe8450(puVar3 + -0x28);
        puVar3 = puVar3 + -0x28;
      }
      puRam00000000000401ac = puVar16;
      uRam000000000004001c = 0x6b3d1d4;
      func_0x0412a280(puRam00000000000401a4,
                      (long)puRam00000000000401b4 - (long)puRam00000000000401a4);
    }
    puRam00000000000401b4 = puRam00000000000402d4;
    puRam00000000000401a4 = puRam00000000000402c4;
    puRam00000000000401ac = puRam00000000000402cc;
    if (puRam00000000000405ec < puRam00000000000405f4) {
      *puRam00000000000405ec = 0;
      puRam00000000000405ec[1] = 0;
      puRam00000000000405ec[2] = 0;
      *puRam00000000000405ec = uRam0000000000040174;
      puRam00000000000405ec[1] = uRam000000000004017c;
      puRam00000000000405ec[2] = uRam0000000000040184;
      uRam0000000000040174 = 0;
      uRam000000000004017c = 0;
      uRam0000000000040184 = 0;
      puRam00000000000405ec[5] = uRam000000000004019c;
      puRam00000000000405ec[3] = uRam000000000004018c;
      puRam00000000000405ec[4] = uRam0000000000040194;
      uRam000000000004018c = 0;
      uRam0000000000040194 = 0;
      uRam000000000004019c = 0;
      puRam00000000000405ec[6] = 0;
      puRam00000000000405ec[7] = 0;
      puRam00000000000405ec[8] = 0;
      puRam00000000000405ec[6] = puRam00000000000401a4;
      puRam00000000000405ec[7] = puRam00000000000401ac;
      puRam00000000000405ec[8] = puRam00000000000401b4;
      puRam00000000000401a4 = (ulong *)0x0;
      puRam00000000000401ac = (ulong *)0x0;
      puRam00000000000401b4 = (ulong *)0x0;
      puRam00000000000405ec[9] = pcRam00000000000401bc;
      puRam00000000000405ec[10] = pcRam00000000000401c4;
      pcRam00000000000401bc = (code *)0x0;
      pcRam00000000000401c4 = (code *)0x0;
      puRam00000000000405ec[0xb] = 0;
      puRam00000000000405ec[0xc] = 0;
      puRam00000000000405ec[0xd] = 0;
      *(undefined4 *)(puRam00000000000405ec + 0xb) = (undefined4)uRam00000000000401cc;
      *(undefined4 *)((long)puRam00000000000405ec + 0x5c) = uRam00000000000401cc._4_4_;
      *(undefined4 *)(puRam00000000000405ec + 0xc) = (undefined4)uRam00000000000401d4;
      *(undefined4 *)((long)puRam00000000000405ec + 100) = uRam00000000000401d4._4_4_;
      puRam00000000000405ec[0xd] = uRam00000000000401dc;
      uRam00000000000401cc = 0;
      uRam00000000000401d4 = 0;
      uRam00000000000401dc = 0;
      puRam00000000000405ec = puRam00000000000405ec + 0xe;
    }
    else {
      uRam000000000004001c = 0x6b3d317;
      puRam00000000000405ec = (undefined8 *)func_0x0652ac80(0x405e4,0x40174);
    }
    puVar17 = puRam00000000000405ec + -0xe;
    lVar14 = uRam00000000000400b4;
  }
  else {
LAB_06b3d340:
    puVar16 = puRam00000000000402c4;
    puVar3 = puRam00000000000402cc;
    if (puRam00000000000402c4 != (ulong *)0x0) {
joined_r0x06b3d353:
      while (uVar6 = puRam00000000000402c4, puRam00000000000402c4 != puVar3) {
        uRam000000000004001c = 0x6b3d36f;
        puRam00000000000402c4 = puVar16;
        func_0x05fe8450(puVar3 + -0x28);
        puVar16 = puRam00000000000402c4;
        puVar3 = puVar3 + -0x28;
        puRam00000000000402c4 = (ulong *)uVar6;
      }
      uRam000000000004001c = 0x6b3d394;
      puRam00000000000402cc = puRam00000000000402c4;
      puRam00000000000402c4 = puVar16;
      func_0x0412a280(puVar16,(long)puRam00000000000402d4 - (long)puVar16);
    }
    puVar17 = (undefined8 *)0xf598858;
    lVar14 = uRam00000000000400b4;
  }
  uRam00000000000400b4 = lVar14;
  if (lVar14 != 0) {
    if (lVar14 != lRam00000000000400bc) {
      lVar18 = lRam00000000000400bc + -0x40;
      do {
        if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
          uRam000000000004001c = 0x6b3d3f4;
          (**(code **)(lVar18 + 0x18))(lVar18);
        }
        if (*(code **)(lVar18 + -0x30) != (code *)0x0) {
          uRam000000000004001c = 0x6b3d403;
          (**(code **)(lVar18 + -0x30))(lVar18 + -0x48);
        }
        if (*(code **)(lVar18 + -0x70) != (code *)0x0) {
          uRam000000000004001c = 0x6b3d415;
          (**(code **)(lVar18 + -0x70))(lVar18 + -0x88);
        }
        if (*(code **)(lVar18 + -0xb0) != (code *)0x0) {
          uRam000000000004001c = 0x6b3d42a;
          (**(code **)(lVar18 + -0xb0))(lVar18 + -200);
        }
        lVar24 = lVar18 + -0xd8;
        lVar18 = lVar18 + -0x118;
      } while (lVar24 != lVar14);
    }
    uRam000000000004001c = 0x6b3d44c;
    lRam00000000000400bc = lVar14;
    func_0x0412a280(uRam00000000000400b4,lRam00000000000400c4 - uRam00000000000400b4);
  }
  uRam000000000004001c = 0x6b3d459;
  func_0x05f93280(0x40174);
  uRam000000000004001c = 0x6b3d461;
  func_0x064e40a0(puVar17);
  if (pcRam000000000004052c != (code *)0x0) {
    uRam000000000004001c = 0x6b3d482;
    (*pcRam000000000004052c)(0x40514);
  }
  if (pcRam00000000000404e4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3d499;
    (*pcRam00000000000404e4)(0x404cc);
  }
  if (pcRam00000000000404a4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3d4b0;
    (*pcRam00000000000404a4)(0x4048c);
  }
  if (pcRam0000000000040464 != (code *)0x0) {
    uRam000000000004001c = 0x6b3d4c7;
    (*pcRam0000000000040464)(0x4044c);
  }
  if ((uRam0000000000040414 & 1) != 0) {
    uRam000000000004001c = 0x6b3d4ea;
    func_0x0412a280(uRam0000000000040424,uRam0000000000040414 & 0xfffffffffffffffe);
  }
  if (((ulong)puRam0000000000040054 & 1) != 0) {
    uRam000000000004001c = 0x6b3d504;
    func_0x0412a280(puRam0000000000040064,(ulong)puRam0000000000040054 & 0xfffffffffffffffe);
  }
  uRam0000000000040674 = 0;
  uRam00000000000406c4 = 0;
  pcRam00000000000406cc = (code *)0x0;
  pcRam00000000000406b4 = (code *)0x0;
  uRam00000000000406bc = 0;
  lRam00000000000406a4 = 0;
  pcRam00000000000406ac = (code *)0x0;
  lRam0000000000040694 = 0;
  lRam000000000004069c = 0;
  uRam0000000000040664 = 0;
  plRam000000000004066c = (long *)0x0;
  puRam000000000004067c = (undefined *)0x65736f7073696420;
  plRam0000000000040684 = (long *)0x70756f72476c6c41;
  pcRam000000000004068c = (code *)0x73;
  uRam0000000000040174 = 0;
  uRam000000000004017c = 0;
  uRam0000000000040184 = 0;
  uRam000000000004001c = 0x6b3d58f;
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    uRam000000000004001c = 0x6b3ee83;
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar15 + 8) = 0;
  *(undefined8 *)(pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f0831d0;
  uRam000000000004001c = 0x6b3d5ba;
  uVar12 = func_0x0d858500(0x40174);
  pcVar2 = pcVar15 + 0x18;
  pcVar15[0x20] = (code)0x0;
  *(undefined4 *)(pcVar15 + 0x24) = uVar12;
  *(undefined4 *)(pcVar15 + 0x28) = 0;
  *(undefined8 *)(pcVar15 + 0x30) = 0;
  *(undefined8 *)(pcVar15 + 0x38) = 0;
  *(undefined8 *)(pcVar15 + 0x40) = 0;
  *(undefined **)(pcVar15 + 0x18) = &UNK_0f083220;
  *(undefined8 *)(pcVar15 + 0x48) = 0;
  *(undefined8 *)(pcVar15 + 0x50) = 0;
  *(undefined8 *)(pcVar15 + 0x58) = 0;
  uRam0000000000040174 = 0;
  uRam000000000004017c = 0;
  uRam0000000000040184 = 0;
  uRam000000000004001c = 0x6b3d61a;
  uVar12 = func_0x0d858620(pcVar2);
  *(undefined4 *)(pcVar15 + 0x28) = uVar12;
  plVar23 = (long *)pcRam00000000000406b4;
  pcRam00000000000406ac = pcVar2;
  if (pcRam00000000000406b4 != (code *)0x0) {
    LOCK();
    plVar20 = (long *)((long)pcRam00000000000406b4 + 8);
    lVar14 = *plVar20;
    pcRam00000000000406b4 = pcVar15;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    pcVar15 = pcRam00000000000406b4;
    if (lVar14 == 0) {
      uRam000000000004001c = 0x6b3d656;
      (**(code **)(*plVar23 + 0x10))(plVar23);
      uRam000000000004001c = 0x6b3d65e;
      func_0x0412c2d0(plVar23);
      pcVar15 = pcRam00000000000406b4;
    }
  }
  pcRam00000000000406b4 = pcVar15;
  uRam0000000000040414 = 0;
  uRam000000000004041c = 0;
  uRam0000000000040424 = 0;
  uRam000000000004001c = 0x6b3d683;
  (**(code **)(*(long *)pcRam00000000000406ac + 0x20))();
  lVar18 = lRam0000000000040694;
  lVar14 = lRam000000000004069c;
  if (lRam0000000000040694 != 0) {
    while (lVar18 != lVar14) {
      uRam000000000004001c = 0x6b3d6bf;
      func_0x05fe8450(lVar14 + -0x140);
      lVar14 = lVar14 + -0x140;
    }
    lRam000000000004069c = lVar18;
    uRam000000000004001c = 0x6b3d6e4;
    func_0x0412a280(lRam0000000000040694,lRam00000000000406a4 - lRam0000000000040694);
  }
  lRam0000000000040694 = 0;
  lRam000000000004069c = 0;
  lRam00000000000406a4 = 0;
  if (puRam00000000000405ec < puRam00000000000405f4) {
    *puRam00000000000405ec = 0;
    puRam00000000000405ec[1] = 0;
    puRam00000000000405ec[2] = 0;
    *puRam00000000000405ec = uRam0000000000040664;
    puRam00000000000405ec[1] = plRam000000000004066c;
    puRam00000000000405ec[2] = uRam0000000000040674;
    uRam0000000000040664 = 0;
    plRam000000000004066c = (long *)0x0;
    uRam0000000000040674 = 0;
    puRam00000000000405ec[5] = pcRam000000000004068c;
    puRam00000000000405ec[3] = puRam000000000004067c;
    puRam00000000000405ec[4] = plRam0000000000040684;
    puRam000000000004067c = (undefined *)0x0;
    plRam0000000000040684 = (long *)0x0;
    pcRam000000000004068c = (code *)0x0;
    puRam00000000000405ec[6] = 0;
    puRam00000000000405ec[7] = 0;
    puRam00000000000405ec[8] = 0;
    puRam00000000000405ec[6] = lRam0000000000040694;
    puRam00000000000405ec[7] = lRam000000000004069c;
    puRam00000000000405ec[8] = lRam00000000000406a4;
    lRam0000000000040694 = 0;
    lRam000000000004069c = 0;
    lRam00000000000406a4 = 0;
    puRam00000000000405ec[9] = pcRam00000000000406ac;
    puRam00000000000405ec[10] = pcRam00000000000406b4;
    pcRam00000000000406ac = (code *)0x0;
    pcRam00000000000406b4 = (code *)0x0;
    puRam00000000000405ec[0xb] = 0;
    puRam00000000000405ec[0xc] = 0;
    puRam00000000000405ec[0xd] = 0;
    *(undefined4 *)(puRam00000000000405ec + 0xb) = (undefined4)uRam00000000000406bc;
    *(undefined4 *)((long)puRam00000000000405ec + 0x5c) = uRam00000000000406bc._4_4_;
    *(undefined4 *)(puRam00000000000405ec + 0xc) = (undefined4)uRam00000000000406c4;
    *(undefined4 *)((long)puRam00000000000405ec + 100) = uRam00000000000406c4._4_4_;
    puRam00000000000405ec[0xd] = pcRam00000000000406cc;
    uRam00000000000406bc = 0;
    uRam00000000000406c4 = 0;
    pcRam00000000000406cc = (code *)0x0;
    puVar17 = puRam00000000000405ec + 0xe;
    uVar19 = uRam0000000000040174;
  }
  else {
    uRam000000000004001c = 0x6b3d81b;
    puVar17 = (undefined8 *)func_0x0652ac80(0x405e4,0x40664);
    uVar19 = uRam0000000000040174;
  }
  uRam0000000000040174 = uVar19;
  puRam00000000000405ec = puVar17;
  if (uVar19 != 0) {
    if (uVar19 != uRam000000000004017c) {
      lVar14 = uRam000000000004017c - 0x40;
      do {
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          uRam000000000004001c = 0x6b3d874;
          (**(code **)(lVar14 + 0x18))(lVar14);
        }
        if (*(code **)(lVar14 + -0x30) != (code *)0x0) {
          uRam000000000004001c = 0x6b3d883;
          (**(code **)(lVar14 + -0x30))(lVar14 + -0x48);
        }
        if (*(code **)(lVar14 + -0x70) != (code *)0x0) {
          uRam000000000004001c = 0x6b3d895;
          (**(code **)(lVar14 + -0x70))(lVar14 + -0x88);
        }
        if (*(code **)(lVar14 + -0xb0) != (code *)0x0) {
          uRam000000000004001c = 0x6b3d8aa;
          (**(code **)(lVar14 + -0xb0))(lVar14 + -200);
        }
        uVar22 = lVar14 - 0xd8;
        lVar14 = lVar14 + -0x118;
      } while (uVar22 != uVar19);
    }
    uRam000000000004001c = 0x6b3d8c7;
    func_0x0412a280(uRam0000000000040174,uRam0000000000040184 - uRam0000000000040174);
  }
  uRam000000000004001c = 0x6b3d8d8;
  func_0x05f93280(0x40664);
  uRam000000000004001c = 0x6b3d8e0;
  func_0x064e40a0(puVar17 + -0xe);
  bRam0000000000040094 = 0x1c;
  uRam0000000000040095 = 0x7073656d616e;
  uRam000000000004009b = 0x61;
  uRam000000000004009c = 99;
  uRam000000000004009d = 0x656d614e6465;
  uRam00000000000400a3 = 0;
  uRam000000000004001c = 0x6b3d91a;
  func_0x064f17b0(0x40414,0x40094);
  uRam000000000004012c = 0x736e6f6974706f0e;
  uRam0000000000040134 = 0;
  uRam000000000004001c = 0x6b3d955;
  func_0x06b3fab0(0x40174,0x4012c);
  uRam000000000004007c = 0x6c616310;
  uRam0000000000040080 = 0x6361626c;
  uRam0000000000040084 = 0x6b;
  uRam0000000000040085 = 0;
  puRam00000000000402c4 = (ulong *)0x0;
  puRam00000000000402cc = (ulong *)0x0;
  puRam00000000000402d4 = (ulong *)0x0;
  uRam000000000004001c = 0x6b3d992;
  func_0x048b1dc0(0x402dc);
  uRam000000000004001c = 0x6b3d9a2;
  func_0x0652b590(0x402ec);
  if (((ulong)puRam00000000000402c4 & 1) == 0) {
    if ((uRam000000000004007c & 1) == 0) {
      puRam00000000000402d4 = (ulong *)uRam000000000004008c;
      puRam00000000000402c4 = (ulong *)CONCAT44(uRam0000000000040080,uRam000000000004007c);
      puRam00000000000402cc =
           (ulong *)CONCAT44(uRam0000000000040088,
                             CONCAT22(uRam0000000000040086,
                                      CONCAT11(uRam0000000000040085,uRam0000000000040084)));
    }
    else {
      uRam000000000004001c = 0x6b3da0e;
      func_0x04885070(0x402c4,uRam000000000004008c,
                      CONCAT44(uRam0000000000040088,
                               CONCAT22(uRam0000000000040086,
                                        CONCAT11(uRam0000000000040085,uRam0000000000040084))));
    }
  }
  else {
    bVar26 = (uRam000000000004007c & 1) != 0;
    uVar19 = 0x4007d;
    if (bVar26) {
      uVar19 = uRam000000000004008c;
    }
    uVar22 = (ulong)((byte)uRam000000000004007c >> 1);
    if (bVar26) {
      uVar22 = CONCAT44(uRam0000000000040088,
                        CONCAT22(uRam0000000000040086,
                                 CONCAT11(uRam0000000000040085,uRam0000000000040084)));
    }
    uRam000000000004001c = 0x6b3d9f5;
    func_0x04885120(0x402c4,uVar19,uVar22);
  }
  plVar23 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar23 == (long *)0x0) {
    uRam000000000004001c = 0x6b3da33;
    func_0x048b0de0(0x40664,0x400b4);
    _DAT_0f54fd90 = (undefined4)uRam0000000000040664;
    uRam000000000f54fd94 = uRam0000000000040664._4_4_;
    uVar12 = plRam000000000004066c._0_4_;
    uVar9 = plRam000000000004066c._4_4_;
    uRam0000000000040664 = 0;
    plRam000000000004066c = (long *)0x0;
    plVar23 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar9;
    if (plVar23 != (long *)0x0) {
      LOCK();
      plVar20 = plVar23 + 1;
      lVar14 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        uRam000000000004001c = 0x6b3da74;
        (**(code **)(*plVar23 + 0x10))(plVar23);
        uRam000000000004001c = 0x6b3da7c;
        func_0x0412c2d0(plVar23);
      }
    }
    plVar23 = plRam000000000004066c;
    if (plRam000000000004066c != (long *)0x0) {
      LOCK();
      plVar20 = plRam000000000004066c + 1;
      lVar14 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        uRam000000000004001c = 0x6b3daa4;
        (**(code **)(*plVar23 + 0x10))(plVar23);
        uRam000000000004001c = 0x6b3daac;
        func_0x0412c2d0(plVar23);
      }
    }
    plVar23 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f5a0398 == '\0') {
    uRam000000000004001c = 0x6b3ef9b;
    iVar13 = func_0x04108328(&DAT_0f5a0398);
    if (iVar13 != 0) {
      uRam000000000004001c = 0x6b3efa8;
      func_0x06c97630();
      uRam000000000004001c = 0x6b3efc2;
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5a0318,0xf53dab8);
      uRam000000000004001c = 0x6b3efce;
      func_0x0410844d(&DAT_0f5a0398);
    }
  }
  plVar20 = (long *)(*plVar23 +
                    (ulong)((int)((ulong)(plVar23[1] - *plVar23) >> 3) - 1U &
                           *(uint *)(_DAT_0f5a0318 + 4)) * 8);
  do {
    lVar14 = *plVar20;
    if (lVar14 == -1) goto LAB_06b3db10;
    plVar20 = (long *)(plVar23[3] + lVar14 * 0x18);
  } while (*(uint *)(plVar23[3] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5a0318 + 4));
  if (plVar20 == (long *)plVar23[4]) {
LAB_06b3db10:
    puRam00000000000402dc = &DAT_0f5a0318;
  }
  else {
    puRam00000000000402dc = (undefined *)plVar20[2];
  }
  lRam00000000000400c4 = 0;
  uRam0000000000040114 = 0;
  uRam000000000004011c = 0;
  plRam0000000000040104 = (long *)0x0;
  uRam000000000004010c = 0;
  puRam00000000000400f4 = (ulong *)0x0;
  plRam00000000000400fc = (long *)0x0;
  puRam00000000000400e4 = (ulong *)0x0;
  puRam00000000000400ec = (ulong *)0x0;
  uRam00000000000400b4 = 0;
  lRam00000000000400bc = 0;
  uRam00000000000400cc = 0x7473657571657224;
  uRam00000000000400d4 = 0x7247746e65696c43;
  uRam00000000000400dc = 0x70756f;
  uRam000000000004001c = 0x6b3dbbf;
  plRam00000000000402e4 = plVar23;
  func_0x06523ef0(0x40664,0x4043c);
  uRam000000000004001c = 0x6b3dbdd;
  func_0x06523ef0(0x4077c,0x4019c);
  uRam000000000004001c = 0x6b3dbf0;
  func_0x06523ef0(0x40894,0x402ec);
  lRam0000000000040144 = 0;
  uRam000000000004014c = 0;
  lRam0000000000040154 = 0;
  uRam0000000000040404 = 0x40144;
  uRam000000000004040c = 0;
  uRam000000000004001c = 0x6b3dc35;
  lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x348);
  if (lVar14 == 0) {
    uRam000000000004001c = 0x6b3ee94;
    func_0x0eec74c0(0x348,0);
  }
  lRam0000000000040154 = lVar14 + 0x348;
  puRam0000000000040054 = (ulong *)0x40144;
  puRam000000000004005c = (ulong *)0x40a24;
  puRam0000000000040064 = (ulong *)0x4016c;
  uRam000000000004006c = 0;
  uRam000000000004001c = 0x6b3dcae;
  lRam0000000000040144 = lVar14;
  uRam000000000004014c = lVar14;
  lRam000000000004016c = lVar14;
  lRam0000000000040a24 = lVar14;
  func_0x06523ef0(lVar14,0x40664);
  lRam000000000004016c = lRam000000000004016c + 0x118;
  uRam000000000004001c = 0x6b3dccf;
  func_0x06523ef0(lRam000000000004016c,0x4077c);
  lRam000000000004016c = lRam000000000004016c + 0x118;
  uRam000000000004001c = 0x6b3dcea;
  func_0x06523ef0(lRam000000000004016c,0x40894);
  uRam000000000004014c = lRam000000000004016c + 0x118;
  if (pcRam0000000000040984 != (code *)0x0) {
    uRam000000000004001c = 0x6b3dd16;
    (*pcRam0000000000040984)(0x4096c);
  }
  if (pcRam000000000004093c != (code *)0x0) {
    uRam000000000004001c = 0x6b3dd2d;
    (*pcRam000000000004093c)(0x40924);
  }
  if ((code *)CONCAT44(uRam0000000000040900,uRam00000000000408fc) != (code *)0x0) {
    uRam000000000004001c = 0x6b3dd44;
    (*(code *)CONCAT44(uRam0000000000040900,uRam00000000000408fc))(0x408e4);
  }
  if (pcRam00000000000408bc != (code *)0x0) {
    uRam000000000004001c = 0x6b3dd5b;
    (*pcRam00000000000408bc)(0x408a4);
  }
  if (pcRam000000000004086c != (code *)0x0) {
    uRam000000000004001c = 0x6b3dd72;
    (*pcRam000000000004086c)(0x40854);
  }
  if (pcRam0000000000040824 != (code *)0x0) {
    uRam000000000004001c = 0x6b3dd89;
    (*pcRam0000000000040824)(0x4080c);
  }
  if (pcRam00000000000407e4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3dda0;
    (*pcRam00000000000407e4)(0x407cc);
  }
  if (pcRam00000000000407a4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3ddb7;
    (*pcRam00000000000407a4)(0x4078c);
  }
  if (pcRam0000000000040754 != (code *)0x0) {
    uRam000000000004001c = 0x6b3ddce;
    (*pcRam0000000000040754)(0x4073c);
  }
  if (pcRam000000000004070c != (code *)0x0) {
    uRam000000000004001c = 0x6b3dde5;
    (*pcRam000000000004070c)(0x406f4);
  }
  if (pcRam00000000000406cc != (code *)0x0) {
    uRam000000000004001c = 0x6b3ddfc;
    (*pcRam00000000000406cc)(0x406b4);
  }
  if (pcRam000000000004068c != (code *)0x0) {
    uRam000000000004001c = 0x6b3de13;
    (*pcRam000000000004068c)(0x40674);
  }
  uRam000000000004001c = 0x6b3de29;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar17 == (undefined8 *)0x0) {
    uRam000000000004001c = 0x6b3eea5;
    func_0x0eec74c0(0x60,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0f0832b0;
  uRam000000000004001c = 0x6b3de5d;
  uVar12 = func_0x0d858500(0x40144);
  plVar23 = puVar17 + 3;
  *(undefined1 *)(puVar17 + 4) = 0;
  *(undefined4 *)((long)puVar17 + 0x24) = uVar12;
  *(undefined4 *)(puVar17 + 5) = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar17[8] = 0;
  puVar17[3] = &UNK_0f083300;
  *(undefined4 *)(puVar17 + 9) = (undefined4)lRam0000000000040144;
  *(undefined4 *)((long)puVar17 + 0x4c) = lRam0000000000040144._4_4_;
  *(undefined4 *)(puVar17 + 10) = (undefined4)uRam000000000004014c;
  *(undefined4 *)((long)puVar17 + 0x54) = uRam000000000004014c._4_4_;
  puVar17[0xb] = lRam0000000000040154;
  lRam0000000000040144 = 0;
  uRam000000000004014c = 0;
  lRam0000000000040154 = 0;
  uRam000000000004001c = 0x6b3dec9;
  uVar12 = func_0x0d858620(plVar23);
  *(undefined4 *)(puVar17 + 5) = uVar12;
  plVar20 = plRam0000000000040104;
  plRam00000000000400fc = plVar23;
  if (plRam0000000000040104 != (long *)0x0) {
    LOCK();
    plVar23 = plRam0000000000040104 + 1;
    lVar14 = *plVar23;
    plRam0000000000040104 = puVar17;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    puVar17 = plRam0000000000040104;
    if (lVar14 == 0) {
      uRam000000000004001c = 0x6b3df05;
      (**(code **)(*plVar20 + 0x10))(plVar20);
      uRam000000000004001c = 0x6b3df0d;
      func_0x0412c2d0(plVar20);
      puVar17 = plRam0000000000040104;
    }
  }
  plRam0000000000040104 = puVar17;
  uRam0000000000040674 = uRam0000000000040424;
  uRam0000000000040664 = uRam0000000000040414;
  plRam000000000004066c = (long *)uRam000000000004041c;
  uRam0000000000040414 = 0;
  uRam000000000004041c = 0;
  uRam0000000000040424 = 0;
  puRam000000000004067c = puRam000000000004042c;
  plRam0000000000040684 = plRam0000000000040434;
  uRam000000000004001c = 0x6b3df67;
  func_0x065281f0(0x4068c,0x4043c);
  uRam00000000000407b4 = uRam0000000000040184;
  pcRam00000000000407a4 = (code *)uRam0000000000040174;
  uRam00000000000407ac = uRam000000000004017c;
  uRam0000000000040174 = 0;
  uRam000000000004017c = 0;
  uRam0000000000040184 = 0;
  uRam00000000000407bc = (undefined4)uRam000000000004018c;
  uRam00000000000407c0 = uRam000000000004018c._4_4_;
  uRam00000000000407c4 = (undefined4)uRam0000000000040194;
  uRam00000000000407c8 = uRam0000000000040194._4_4_;
  uRam000000000004001c = 0x6b3dfc1;
  func_0x065281f0(0x407cc,0x4019c);
  uRam00000000000408f4 = (ulong)puRam00000000000402d4;
  uRam00000000000408e4 = (ulong)puRam00000000000402c4;
  uRam00000000000408ec = (ulong)puRam00000000000402cc;
  puRam00000000000402c4 = (ulong *)0x0;
  puRam00000000000402cc = (ulong *)0x0;
  puRam00000000000402d4 = (ulong *)0x0;
  uRam00000000000408fc = puRam00000000000402dc._0_4_;
  uRam0000000000040900 = puRam00000000000402dc._4_4_;
  uRam0000000000040904 = plRam00000000000402e4._0_4_;
  uRam0000000000040908 = plRam00000000000402e4._4_4_;
  uRam000000000004001c = 0x6b3e01e;
  func_0x065281f0(0x4090c,0x402ec);
  puRam0000000000040054 = (ulong *)0x0;
  puRam000000000004005c = (ulong *)0x0;
  puRam0000000000040064 = (ulong *)0x0;
  uRam0000000000040404 = 0x40054;
  uRam000000000004040c = 0;
  uRam000000000004001c = 0x6b3e05a;
  puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3c0);
  if (puVar16 == (ulong *)0x0) {
    uRam000000000004001c = 0x6b3eeb6;
    func_0x0eec74c0(0x3c0,0);
  }
  puVar3 = puVar16 + 0x78;
  puRam0000000000040054 = puVar16;
  puRam000000000004005c = puVar16;
  puRam0000000000040064 = puVar3;
  if ((uRam0000000000040664 & 1) == 0) {
    puVar16[2] = uRam0000000000040674;
    uVar19 = (ulong)plRam000000000004066c;
    *puVar16 = uRam0000000000040664;
    puVar16[1] = uVar19;
  }
  else {
    uRam000000000004001c = 0x6b3e0bb;
    func_0x0412e5e0(puVar16,uRam0000000000040674,plRam000000000004066c);
  }
  uVar12 = puRam000000000004067c._4_4_;
  uVar9 = plRam0000000000040684._0_4_;
  uVar10 = plRam0000000000040684._4_4_;
  *(undefined4 *)(puVar16 + 3) = puRam000000000004067c._0_4_;
  *(undefined4 *)((long)puVar16 + 0x1c) = uVar12;
  *(undefined4 *)(puVar16 + 4) = uVar9;
  *(undefined4 *)((long)puVar16 + 0x24) = uVar10;
  uRam000000000004001c = 0x6b3e0da;
  func_0x06523ef0(puVar16 + 5,0x4068c);
  if (((ulong)pcRam00000000000407a4 & 1) == 0) {
    puVar16[0x2a] = uRam00000000000407b4;
    uVar19 = uRam00000000000407ac;
    puVar16[0x28] = (ulong)pcRam00000000000407a4;
    puVar16[0x29] = uVar19;
  }
  else {
    uRam000000000004001c = 0x6b3e11d;
    func_0x0412e5e0(puVar16 + 0x28,uRam00000000000407b4,uRam00000000000407ac);
  }
  uVar10 = uRam00000000000407c8;
  uVar9 = uRam00000000000407c4;
  uVar12 = uRam00000000000407c0;
  *(undefined4 *)(puVar16 + 0x2b) = uRam00000000000407bc;
  *(undefined4 *)((long)puVar16 + 0x15c) = uVar12;
  *(undefined4 *)(puVar16 + 0x2c) = uVar9;
  *(undefined4 *)((long)puVar16 + 0x164) = uVar10;
  uRam000000000004001c = 0x6b3e13f;
  func_0x06523ef0(puVar16 + 0x2d,0x407cc);
  if ((uRam00000000000408e4 & 1) == 0) {
    puVar16[0x52] = uRam00000000000408f4;
    uVar19 = uRam00000000000408ec;
    puVar16[0x50] = uRam00000000000408e4;
    puVar16[0x51] = uVar19;
  }
  else {
    uRam000000000004001c = 0x6b3e182;
    func_0x0412e5e0(puVar16 + 0x50,uRam00000000000408f4,uRam00000000000408ec);
  }
  uVar10 = uRam0000000000040908;
  uVar9 = uRam0000000000040904;
  uVar12 = uRam0000000000040900;
  *(undefined4 *)(puVar16 + 0x53) = uRam00000000000408fc;
  *(undefined4 *)((long)puVar16 + 0x29c) = uVar12;
  *(undefined4 *)(puVar16 + 0x54) = uVar9;
  *(undefined4 *)((long)puVar16 + 0x2a4) = uVar10;
  uRam000000000004001c = 0x6b3e1a4;
  func_0x06523ef0(puVar16 + 0x55,0x4090c);
  puRam000000000004005c = puVar3;
  if (pcRam00000000000409fc != (code *)0x0) {
    uRam000000000004001c = 0x6b3e1c0;
    (*pcRam00000000000409fc)(0x409e4);
  }
  if (pcRam00000000000409b4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e1d7;
    (*pcRam00000000000409b4)(0x4099c);
  }
  if (pcRam0000000000040974 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e1ee;
    (*pcRam0000000000040974)(0x4095c);
  }
  if (pcRam0000000000040934 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e205;
    (*pcRam0000000000040934)(0x4091c);
  }
  if ((uRam00000000000408e4 & 1) != 0) {
    uRam000000000004001c = 0x6b3e228;
    func_0x0412a280(uRam00000000000408f4,uRam00000000000408e4 & 0xfffffffffffffffe);
  }
  if (pcRam00000000000408bc != (code *)0x0) {
    uRam000000000004001c = 0x6b3e23f;
    (*pcRam00000000000408bc)(0x408a4);
  }
  if (pcRam0000000000040874 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e256;
    (*pcRam0000000000040874)(0x4085c);
  }
  if (pcRam0000000000040834 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e26d;
    (*pcRam0000000000040834)(0x4081c);
  }
  if (pcRam00000000000407f4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e284;
    (*pcRam00000000000407f4)(0x407dc);
  }
  if (((ulong)pcRam00000000000407a4 & 1) != 0) {
    uRam000000000004001c = 0x6b3e2a7;
    func_0x0412a280(uRam00000000000407b4,(ulong)pcRam00000000000407a4 & 0xfffffffffffffffe);
  }
  if (pcRam000000000004077c != (code *)0x0) {
    uRam000000000004001c = 0x6b3e2be;
    (*pcRam000000000004077c)(0x40764);
  }
  if (pcRam0000000000040734 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e2d5;
    (*pcRam0000000000040734)(0x4071c);
  }
  if (pcRam00000000000406f4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e2ec;
    (*pcRam00000000000406f4)(0x406dc);
  }
  if (pcRam00000000000406b4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e303;
    (*pcRam00000000000406b4)(0x4069c);
  }
  if ((uRam0000000000040664 & 1) != 0) {
    uRam000000000004001c = 0x6b3e326;
    func_0x0412a280(uRam0000000000040674,uRam0000000000040664 & 0xfffffffffffffffe);
  }
  uRam000000000004001c = 0x6b3e334;
  uVar11 = (**(code **)(*plRam00000000000400fc + 0x20))();
  uVar22 = ((long)puRam000000000004005c - (long)puRam0000000000040054 >> 6) * -0x3333333333333333;
  uVar19 = 0;
  if ((uVar11 != 0) && ((uint)uVar22 != 0)) {
    uVar25 = 0;
    uVar19 = 0;
    uRam000000000004004c = uVar11;
    do {
      uRam000000000004001c = 0x6b3e391;
      auVar27 = (**(code **)(*plRam00000000000400fc + 0x28))(plRam00000000000400fc,uVar25);
      uVar21 = auVar27._8_8_;
      lVar14 = auVar27._0_8_;
      uRam000000000004001c = 0x6b3e39c;
      auVar27 = func_0x06527d70();
      if (auVar27._8_8_ == uVar21) {
        if (auVar27._0_8_ == 0) {
          uRam000000000004001c = 0x6b3e3c3;
          lVar18 = func_0x048aead0(auVar27._8_8_);
          iVar13 = *(int *)(lVar18 + 8);
          if (lVar14 != 0) goto LAB_06b3e3b1;
LAB_06b3e3ce:
          uRam000000000004001c = 0x6b3e3d6;
          lVar18 = func_0x048aead0(uVar21);
          if (iVar13 != *(int *)(lVar18 + 8)) goto LAB_06b3e3e0;
        }
        else {
          iVar13 = *(int *)(auVar27._0_8_ + 8);
          if (lVar14 == 0) goto LAB_06b3e3ce;
LAB_06b3e3b1:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06b3e3e0;
        }
      }
      else {
LAB_06b3e3e0:
        uRam000000000004001c = 0x6b3e3e5;
        auVar27 = func_0x06527e30();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3e40c;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3e41f;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3e5d5;
        }
        uRam000000000004001c = 0x6b3e435;
        auVar27 = func_0x06527ef0();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3e45c;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3e46f;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3e5d5;
        }
        uRam000000000004001c = 0x6b3e485;
        auVar27 = func_0x06527fb0();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3e4ac;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3e4bf;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3e5d5;
        }
        uRam000000000004001c = 0x6b3e4d5;
        auVar27 = func_0x06528070();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3e4fc;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3e50f;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3e5d5;
        }
        uRam000000000004001c = 0x6b3e525;
        auVar27 = func_0x06528130();
        if (auVar27._8_8_ == uVar21) {
          if (auVar27._0_8_ == 0) {
            uRam000000000004001c = 0x6b3e54c;
            lVar18 = func_0x048aead0(auVar27._8_8_);
            iVar13 = *(int *)(lVar18 + 8);
          }
          else {
            iVar13 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar14 == 0) {
            uRam000000000004001c = 0x6b3e55f;
            lVar18 = func_0x048aead0(uVar21);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06b3e5d5;
        }
        puVar16 = puRam0000000000040054;
        puVar3 = puRam000000000004005c;
        if (puRam0000000000040054[uVar19 * 0x28 + 4] != uVar21) goto joined_r0x06b3e7ed;
        if (puRam0000000000040054[uVar19 * 0x28 + 3] == 0) {
          uRam000000000004001c = 0x6b3e5b5;
          lVar18 = func_0x048aead0();
          iVar13 = *(int *)(lVar18 + 8);
          if (lVar14 != 0) goto LAB_06b3e5a5;
LAB_06b3e5bd:
          uRam000000000004001c = 0x6b3e5c5;
          lVar14 = func_0x048aead0(uVar21);
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06b3e7dd;
        }
        else {
          iVar13 = *(int *)(puRam0000000000040054[uVar19 * 0x28 + 3] + 8);
          if (lVar14 == 0) goto LAB_06b3e5bd;
LAB_06b3e5a5:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06b3e7dd;
        }
        uVar19 = (ulong)((int)uVar19 + 1);
      }
LAB_06b3e5d5:
    } while (((uint)uVar19 < (uint)uVar22) && (uVar25 = uVar25 + 1, uVar25 < uRam000000000004004c));
    uVar22 = ((long)puRam000000000004005c - (long)puRam0000000000040054 >> 6) * -0x3333333333333333;
  }
  puVar16 = puRam00000000000400e4;
  if (uVar22 == uVar19) {
    puVar3 = puRam00000000000400ec;
    if (puRam00000000000400e4 != (ulong *)0x0) {
      while (puVar16 != puVar3) {
        uRam000000000004001c = 0x6b3e64f;
        func_0x05fe8450(puVar3 + -0x28);
        puVar3 = puVar3 + -0x28;
      }
      puRam00000000000400ec = puVar16;
      uRam000000000004001c = 0x6b3e674;
      func_0x0412a280(puRam00000000000400e4,
                      (long)puRam00000000000400f4 - (long)puRam00000000000400e4);
    }
    puRam00000000000400f4 = puRam0000000000040064;
    puRam00000000000400e4 = puRam0000000000040054;
    puRam00000000000400ec = puRam000000000004005c;
    if (puRam00000000000405ec < puRam00000000000405f4) {
      *puRam00000000000405ec = 0;
      puRam00000000000405ec[1] = 0;
      puRam00000000000405ec[2] = 0;
      *puRam00000000000405ec = uRam00000000000400b4;
      puRam00000000000405ec[1] = lRam00000000000400bc;
      puRam00000000000405ec[2] = lRam00000000000400c4;
      uRam00000000000400b4 = 0;
      lRam00000000000400bc = 0;
      lRam00000000000400c4 = 0;
      puRam00000000000405ec[5] = uRam00000000000400dc;
      puRam00000000000405ec[3] = uRam00000000000400cc;
      puRam00000000000405ec[4] = uRam00000000000400d4;
      uRam00000000000400cc = 0;
      uRam00000000000400d4 = 0;
      uRam00000000000400dc = 0;
      puRam00000000000405ec[6] = 0;
      puRam00000000000405ec[7] = 0;
      puRam00000000000405ec[8] = 0;
      puRam00000000000405ec[6] = puRam00000000000400e4;
      puRam00000000000405ec[7] = puRam00000000000400ec;
      puRam00000000000405ec[8] = puRam00000000000400f4;
      puRam00000000000400e4 = (ulong *)0x0;
      puRam00000000000400ec = (ulong *)0x0;
      puRam00000000000400f4 = (ulong *)0x0;
      puRam00000000000405ec[9] = plRam00000000000400fc;
      puRam00000000000405ec[10] = plRam0000000000040104;
      plRam00000000000400fc = (long *)0x0;
      plRam0000000000040104 = (undefined8 *)0x0;
      puRam00000000000405ec[0xb] = 0;
      puRam00000000000405ec[0xc] = 0;
      puRam00000000000405ec[0xd] = 0;
      puRam00000000000405ec[0xb] = uRam000000000004010c;
      puRam00000000000405ec[0xc] = uRam0000000000040114;
      puRam00000000000405ec[0xd] = uRam000000000004011c;
      uRam000000000004010c = 0;
      uRam0000000000040114 = 0;
      uRam000000000004011c = 0;
      puRam00000000000405ec = puRam00000000000405ec + 0xe;
    }
    else {
      uRam000000000004001c = 0x6b3e7af;
      puRam00000000000405ec = (undefined8 *)func_0x0652ac80(0x405e4,0x400b4);
    }
    puVar17 = puRam00000000000405ec + -0xe;
    lVar14 = lRam0000000000040144;
    puVar5 = puRam00000000000402bc;
  }
  else {
LAB_06b3e7dd:
    puVar16 = puRam0000000000040054;
    puVar3 = puRam000000000004005c;
    if (puRam0000000000040054 != (ulong *)0x0) {
joined_r0x06b3e7ed:
      while (uVar6 = puRam0000000000040054, puRam0000000000040054 != puVar3) {
        uRam000000000004001c = 0x6b3e7ff;
        puRam0000000000040054 = puVar16;
        func_0x05fe8450(puVar3 + -0x28);
        puVar16 = puRam0000000000040054;
        puVar3 = puVar3 + -0x28;
        puRam0000000000040054 = (ulong *)uVar6;
      }
      uRam000000000004001c = 0x6b3e81b;
      puRam000000000004005c = puRam0000000000040054;
      puRam0000000000040054 = puVar16;
      func_0x0412a280(puVar16,(long)puRam0000000000040064 - (long)puVar16);
    }
    puVar17 = (undefined8 *)0xf598858;
    lVar14 = lRam0000000000040144;
    puVar5 = puRam00000000000402bc;
  }
  lRam0000000000040144 = lVar14;
  puRam00000000000402bc = puVar5;
  if (lVar14 != 0) {
    if (lVar14 != uRam000000000004014c) {
      lVar18 = uRam000000000004014c + -0x40;
      do {
        if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
          uRam000000000004001c = 0x6b3e884;
          (**(code **)(lVar18 + 0x18))(lVar18);
        }
        if (*(code **)(lVar18 + -0x30) != (code *)0x0) {
          uRam000000000004001c = 0x6b3e893;
          (**(code **)(lVar18 + -0x30))(lVar18 + -0x48);
        }
        if (*(code **)(lVar18 + -0x70) != (code *)0x0) {
          uRam000000000004001c = 0x6b3e8a5;
          (**(code **)(lVar18 + -0x70))(lVar18 + -0x88);
        }
        if (*(code **)(lVar18 + -0xb0) != (code *)0x0) {
          uRam000000000004001c = 0x6b3e8ba;
          (**(code **)(lVar18 + -0xb0))(lVar18 + -200);
        }
        lVar24 = lVar18 + -0xd8;
        lVar18 = lVar18 + -0x118;
      } while (lVar24 != lVar14);
    }
    uRam000000000004001c = 0x6b3e8dc;
    uRam000000000004014c = lVar14;
    func_0x0412a280(lRam0000000000040144,lRam0000000000040154 - lRam0000000000040144);
  }
  uRam000000000004001c = 0x6b3e8e9;
  func_0x05f93280(0x400b4);
  uRam000000000004001c = 0x6b3e8f1;
  func_0x064e40a0(puVar17);
  if (pcRam00000000000403dc != (code *)0x0) {
    uRam000000000004001c = 0x6b3e908;
    (*pcRam00000000000403dc)(0x403c4);
  }
  if (pcRam0000000000040394 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e91f;
    (*pcRam0000000000040394)(0x4037c);
  }
  if (pcRam0000000000040354 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e936;
    (*pcRam0000000000040354)(0x4033c);
  }
  if (pcRam0000000000040314 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e94d;
    (*pcRam0000000000040314)(0x402fc);
  }
  if (((ulong)puRam00000000000402c4 & 1) != 0) {
    uRam000000000004001c = 0x6b3e986;
    func_0x0412a280(puRam00000000000402d4,(ulong)puRam00000000000402c4 & 0xfffffffffffffffe);
  }
  if ((uRam000000000004007c & 1) != 0) {
    uRam000000000004001c = 0x6b3e9a0;
    func_0x0412a280(uRam000000000004008c,
                    CONCAT44(uRam0000000000040080,uRam000000000004007c) & 0xfffffffffffffffe);
  }
  if (pcRam000000000004028c != (code *)0x0) {
    uRam000000000004001c = 0x6b3e9b7;
    (*pcRam000000000004028c)(0x40274);
  }
  if (pcRam0000000000040244 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e9ce;
    (*pcRam0000000000040244)(0x4022c);
  }
  if (pcRam0000000000040204 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e9e5;
    (*pcRam0000000000040204)(0x401ec);
  }
  if (pcRam00000000000401c4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3e9fc;
    (*pcRam00000000000401c4)(0x401ac);
  }
  if ((uRam0000000000040174 & 1) != 0) {
    uRam000000000004001c = 0x6b3ea38;
    func_0x0412a280(uRam0000000000040184,uRam0000000000040174 & 0xfffffffffffffffe);
  }
  if ((uRam000000000004012c & 1) != 0) {
    uRam000000000004001c = 0x6b3ea5b;
    func_0x0412a280(uRam000000000004013c,uRam000000000004012c & 0xfffffffffffffffe);
  }
  if (pcRam000000000004052c != (code *)0x0) {
    uRam000000000004001c = 0x6b3ea72;
    (*pcRam000000000004052c)(0x40514);
  }
  if (pcRam00000000000404e4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3ea89;
    (*pcRam00000000000404e4)(0x404cc);
  }
  if (pcRam00000000000404a4 != (code *)0x0) {
    uRam000000000004001c = 0x6b3eaa0;
    (*pcRam00000000000404a4)(0x4048c);
  }
  if (pcRam0000000000040464 != (code *)0x0) {
    uRam000000000004001c = 0x6b3eab7;
    (*pcRam0000000000040464)(0x4044c);
  }
  if ((uRam0000000000040414 & 1) != 0) {
    uRam000000000004001c = 0x6b3eada;
    func_0x0412a280(uRam0000000000040424,uRam0000000000040414 & 0xfffffffffffffffe);
  }
  if ((bRam0000000000040094 & 1) != 0) {
    uRam000000000004001c = 0x6b3eaf7;
    func_0x0412a280(uRam00000000000400a4,
                    CONCAT17(uRam000000000004009b,
                             CONCAT61(uRam0000000000040095,bRam0000000000040094)) &
                    0xfffffffffffffffe);
  }
  uRam000000000004001c = 0x6b3eb04;
  func_0x064e40a0(0x40554);
  uRam000000000004001c = 0x6b3eb09;
  auRam000000000004059c = func_0x06c8f890();
  lVar18 = lRam000000000004056c;
  lVar14 = lRam0000000000040574;
  if (lRam000000000004056c != 0) {
    for (; lVar18 != lVar14; lVar14 = lVar14 + -0x30) {
      if ((*(byte *)(lVar14 + -0x20) & 1) != 0) {
        uRam000000000004001c = 0x6b3eb61;
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                        *(ulong *)(lVar14 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lRam0000000000040574 = lVar18;
    uRam000000000004001c = 0x6b3eb83;
    func_0x0412a280(lRam000000000004056c,lRam000000000004057c - lRam000000000004056c);
  }
  uVar8 = lRam0000000000040564;
  uVar7 = lRam000000000004055c;
  uVar6 = lRam0000000000040554;
  lRam0000000000040554 = 0;
  lRam000000000004055c = 0;
  lRam0000000000040564 = 0;
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  lRam000000000004056c = 0;
  lRam0000000000040574 = 0;
  lRam000000000004057c = 0;
  puVar5[5] = uRam0000000000040594;
  puVar5[3] = uRam0000000000040584;
  puVar5[4] = uRam000000000004058c;
  uVar10 = uRam00000000000405b8;
  uVar9 = uRam00000000000405b4;
  uVar12 = uRam00000000000405b0;
  auVar27 = auRam000000000004059c;
  uRam0000000000040584 = 0;
  uRam000000000004058c = 0;
  uRam0000000000040594 = 0;
  *(undefined4 *)(puVar5 + 8) = uRam00000000000405ac;
  *(undefined4 *)((long)puVar5 + 0x44) = uVar12;
  *(undefined4 *)(puVar5 + 9) = uVar9;
  *(undefined4 *)((long)puVar5 + 0x4c) = uVar10;
  *(undefined1 (*) [16])(puVar5 + 6) = auVar27;
  puVar5[10] = uRam00000000000405bc;
  puVar5[0xb] = uRam00000000000405c4;
  puVar5[0xc] = uRam00000000000405cc;
  uRam00000000000405bc = 0;
  uRam00000000000405c4 = 0;
  uRam00000000000405cc = 0;
  puVar5[0xd] = uRam00000000000405d4;
  puVar5[0xe] = uRam00000000000405dc;
  uRam00000000000405d4 = 0;
  uRam00000000000405dc = 0;
  puVar5[0xf] = uRam00000000000405e4;
  puVar5[0x10] = puRam00000000000405ec;
  puVar5[0x11] = puRam00000000000405f4;
  uRam00000000000405e4 = 0;
  puRam00000000000405ec = (undefined8 *)0x0;
  puRam00000000000405f4 = (undefined8 *)0x0;
  puVar5[0x12] = uRam00000000000405fc;
  puVar5[0x13] = uRam0000000000040604;
  puVar5[0x14] = uRam000000000004060c;
  uRam00000000000405fc = 0;
  uRam0000000000040604 = 0;
  uRam000000000004060c = 0;
  puVar5[0x15] = uRam0000000000040614;
  puVar5[0x16] = uRam000000000004061c;
  puVar5[0x17] = uRam0000000000040624;
  uRam0000000000040614 = 0;
  uRam000000000004061c = 0;
  uRam0000000000040624 = 0;
  puVar5[0x18] = uRam000000000004062c;
  puVar5[0x19] = uRam0000000000040634;
  puVar5[0x1a] = uRam000000000004063c;
  uRam000000000004062c = 0;
  uRam0000000000040634 = 0;
  uRam000000000004063c = 0;
  *(undefined4 *)(puVar5 + 0x1b) = (undefined4)uRam0000000000040644;
  *(undefined4 *)((long)puVar5 + 0xdc) = uRam0000000000040644._4_4_;
  *(undefined4 *)(puVar5 + 0x1c) = (undefined4)uRam000000000004064c;
  *(undefined4 *)((long)puVar5 + 0xe4) = uRam000000000004064c._4_4_;
  puVar5[0x1d] = uRam0000000000040654;
  uRam0000000000040644 = 0;
  uRam000000000004064c = 0;
  uRam0000000000040654 = 0;
  uRam000000000004001c = 0x6b3ed52;
  func_0x0651ffe0(0x4056c);
  lVar18 = lRam0000000000040554;
  lVar14 = lRam000000000004055c;
  if (lRam0000000000040554 != 0) {
    for (; lVar18 != lVar14; lVar14 = lVar14 + -0x30) {
      if ((*(byte *)(lVar14 + -0x20) & 1) != 0) {
        uRam000000000004001c = 0x6b3eda1;
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                        *(ulong *)(lVar14 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lRam000000000004055c = lVar18;
    uRam000000000004001c = 0x6b3edc3;
    func_0x0412a280(lRam0000000000040554,lRam0000000000040564 - lRam0000000000040554);
  }
  return puVar5;
}


