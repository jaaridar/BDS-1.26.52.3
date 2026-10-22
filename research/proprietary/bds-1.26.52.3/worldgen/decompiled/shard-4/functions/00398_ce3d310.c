/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf3d310 (ELF vaddr 0xce3d310)
 * Label: caller-of-seed
 * Body:  [[0cf3d310, 0cf3da2f] [0cf3da36, 0cf3da54] [0cf3da58, 0cf3da73] [0cf3dabc, 0cf3db13]]
 * Ghidra: FUN_0cf3d310
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cf3d310(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  byte bVar15;
  undefined *puVar16;
  undefined8 uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  byte bStack_a8;
  undefined5 uStack_a7;
  undefined2 uStack_a2;
  undefined1 uStack_a0;
  undefined5 uStack_9f;
  undefined2 uStack_9a;
  undefined8 uStack_98;
  byte bStack_88;
  undefined1 auStack_87 [7];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined1 uStack_6c;
  undefined1 auStack_6b [19];
  byte abStack_58 [2];
  undefined1 auStack_56 [14];
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  func_0x0cf76060();
  abStack_58[0] = 0;
  abStack_58[1] = 0;
  FUN_057d8ed0(param_2,abStack_58);
  uStack_38 = param_2;
  if ((abStack_58[0] & 1) != 0) {
    func_0x0412a280(uStack_48,
                    CONCAT62(auStack_56._0_6_,CONCAT11(abStack_58[1],abStack_58[0])) &
                    0xfffffffffffffffe);
  }
  puVar16 = &UNK_01198d5e;
  puVar12 = &UNK_01198d5e;
  if ((*(byte *)((long)param_1 + 0x264) & 1) != 0) {
    puVar12 = &UNK_01306cb5;
  }
  uVar14 = (ulong)(*(byte *)((long)param_1 + 0x264) & 1);
  uVar11 = uVar14 ^ 5;
  bVar15 = (char)uVar11 * '\x02';
  abStack_58[0] = bVar15;
  plStack_40 = param_1;
  func_0x0eee2f00(abStack_58 + 1,puVar12,uVar11);
  auStack_56[4 - uVar14] = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  bStack_88 = bVar15 + 0x16;
  auStack_87 = (undefined1  [7])0x656c2072696150;
  uStack_80 = 0x203a6461;
  func_0x0eee2f00(&uStack_7c,abStack_58 + 1,uVar11);
  auStack_87[(uVar14 ^ 0x11) - 1] = 0;
  FUN_057d8ed0(uStack_38,&bStack_88);
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(uStack_78,CONCAT71(auStack_87,bStack_88) & 0xfffffffffffffffe);
  }
  uVar11 = (ulong)(plStack_40[0x51] == 0);
  if (plStack_40[0x51] != 0) {
    puVar16 = &UNK_01306cb5;
  }
  lVar8 = uVar11 + 4;
  bVar15 = (char)lVar8 * '\x02';
  bStack_88 = bVar15;
  func_0x0eee2f00(auStack_87,puVar16,lVar8);
  (&bStack_88)[uVar11 + 5] = 0;
  uStack_9a = 0;
  uStack_98 = 0;
  bStack_a8 = bVar15 + 0x1a;
  uStack_a7 = 0x656772614c;
  uStack_a2 = 0x6320;
  uStack_a0 = 0x68;
  uStack_9f = 0x203a747365;
  func_0x0eee2f00(&uStack_9a,auStack_87,lVar8);
  uVar4 = uStack_38;
  *(undefined1 *)((long)&uStack_98 + uVar11 + 2) = 0;
  FUN_057d8ed0(uStack_38,&bStack_a8);
  if ((bStack_a8 & 1) != 0) {
    func_0x0412a280(uStack_98,CONCAT26(uStack_a2,CONCAT51(uStack_a7,bStack_a8)) & 0xfffffffffffffffe
                   );
  }
  plVar3 = plStack_40;
  uVar5 = (**(code **)(*plStack_40 + 0x260))(plStack_40);
  if ((int)uVar5 < 0) {
    puVar13 = auStack_6b;
    uStack_6c = 0x2d;
    uVar5 = -uVar5;
    pbVar10 = abStack_58 + -(long)puVar13;
    if ((long)pbVar10 < 10) goto LAB_0cf3d530;
LAB_0cf3d567:
    lVar8 = func_0x04136630(puVar13,uVar5);
    uVar11 = lVar8 - (long)&uStack_6c;
    if (uVar11 < 0xfffffffffffffff8) {
      if (uVar11 < 0x17) {
        uStack_c0 = CONCAT71(uStack_c0._1_7_,(char)uVar11 * '\x02');
        lVar8 = (long)&uStack_c0 + 1;
        if (uVar11 == 0) goto LAB_0cf3d59b;
      }
      else {
        uVar14 = 0x1a;
        if ((uVar11 | 7) != 0x17) {
          uVar14 = (uVar11 | 7) + 1;
        }
        lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
        if (lVar8 == 0) {
          func_0x0eec74c0(uVar14,0);
        }
        uStack_c0 = uVar14 | 1;
        uStack_b8 = uVar11;
        lStack_b0 = lVar8;
      }
      func_0x0eee2f00(lVar8,&uStack_6c,uVar11);
      goto LAB_0cf3d5fc;
    }
    func_0x04882e30();
LAB_0cf3da24:
    func_0x04882e30();
    goto LAB_0cf3da29;
  }
  puVar13 = &uStack_6c;
  pbVar10 = abStack_58 + -(long)puVar13;
  if (9 < (long)pbVar10) goto LAB_0cf3d567;
LAB_0cf3d530:
  iVar6 = 0x1f;
  if ((uVar5 | 1) != 0) {
    for (; (uVar5 | 1) >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  uVar7 = iVar6 * 0x4d1 + 0x4d1U >> 0xc;
  if ((long)(ulong)((uVar7 - (uVar5 < *(uint *)(&UNK_014edae0 + (ulong)uVar7 * 4))) + 1) <=
      (long)pbVar10) goto LAB_0cf3d567;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
LAB_0cf3d59b:
  lVar8 = (long)&uStack_c0 + 1;
  uVar11 = 0;
LAB_0cf3d5fc:
  *(undefined1 *)(lVar8 + uVar11) = 0;
  puVar9 = (undefined8 *)func_0x0412f0e0(&uStack_c0,0,&UNK_01282ac3,0x10);
  uStack_98 = puVar9[2];
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  bStack_a8 = (byte)uVar1;
  uStack_a7 = (undefined5)((ulong)uVar1 >> 8);
  uStack_a2 = (undefined2)((ulong)uVar1 >> 0x30);
  uStack_a0 = (undefined1)uVar2;
  uStack_9f = (undefined5)((ulong)uVar2 >> 8);
  uStack_9a = (undefined2)((ulong)uVar2 >> 0x30);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  FUN_057d8ed0(uVar4,&bStack_a8);
  if ((bStack_a8 & 1) != 0) {
    func_0x0412a280(uStack_98,CONCAT26(uStack_a2,CONCAT51(uStack_a7,bStack_a8)) & 0xfffffffffffffffe
                   );
  }
  if ((uStack_c0 & 1) != 0) {
    func_0x0412a280(lStack_b0,uStack_c0 & 0xfffffffffffffffe);
  }
  iVar6 = (int)((ulong)(plVar3[0x48] - plVar3[0x47]) >> 3);
  uVar5 = iVar6 * 0x286bca1b;
  if ((int)uVar5 < 0) {
    uStack_6c = 0x2d;
    uVar5 = iVar6 * -0x286bca1b;
    pbVar10 = abStack_58 + -(long)auStack_6b;
    if ((long)pbVar10 < 10) goto LAB_0cf3d6c0;
LAB_0cf3d6f7:
    lVar8 = func_0x04136630();
    uVar11 = lVar8 - (long)&uStack_6c;
    if (0xfffffffffffffff7 < uVar11) goto LAB_0cf3da24;
    if (uVar11 < 0x17) {
      uStack_c0 = CONCAT71(uStack_c0._1_7_,(char)uVar11 * '\x02');
      lVar8 = (long)&uStack_c0 + 1;
      if (uVar11 == 0) goto LAB_0cf3d729;
    }
    else {
      uVar14 = 0x1a;
      if ((uVar11 | 7) != 0x17) {
        uVar14 = (uVar11 | 7) + 1;
      }
      lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
      if (lVar8 == 0) {
        func_0x0eec74c0(uVar14,0);
      }
      uStack_c0 = uVar14 | 1;
      uStack_b8 = uVar11;
      lStack_b0 = lVar8;
    }
    func_0x0eee2f00(lVar8,&uStack_6c,uVar11);
  }
  else {
    pbVar10 = abStack_58 + -(long)&uStack_6c;
    if (9 < (long)pbVar10) goto LAB_0cf3d6f7;
LAB_0cf3d6c0:
    iVar6 = 0x1f;
    if ((uVar5 | 1) != 0) {
      for (; (uVar5 | 1) >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    uVar7 = iVar6 * 0x4d1 + 0x4d1U >> 0xc;
    if ((long)(ulong)((uVar7 - (uVar5 < *(uint *)(&UNK_014edae0 + (ulong)uVar7 * 4))) + 1) <=
        (long)pbVar10) goto LAB_0cf3d6f7;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
LAB_0cf3d729:
    lVar8 = (long)&uStack_c0 + 1;
    uVar11 = 0;
  }
  *(undefined1 *)(lVar8 + uVar11) = 0;
  puVar9 = (undefined8 *)func_0x0412f0e0(&uStack_c0,0,&UNK_012cea76,0xd);
  uStack_98 = puVar9[2];
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  bStack_a8 = (byte)uVar1;
  uStack_a7 = (undefined5)((ulong)uVar1 >> 8);
  uStack_a2 = (undefined2)((ulong)uVar1 >> 0x30);
  uStack_a0 = (undefined1)uVar2;
  uStack_9f = (undefined5)((ulong)uVar2 >> 8);
  uStack_9a = (undefined2)((ulong)uVar2 >> 0x30);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  FUN_057d8ed0(uVar4,&bStack_a8);
  if ((bStack_a8 & 1) == 0) {
    if ((uStack_c0 & 1) != 0) goto LAB_0cf3d819;
LAB_0cf3d7e1:
    uVar5 = *(uint *)(plVar3 + 0x57);
    if ((int)uVar5 < 0) goto LAB_0cf3d837;
LAB_0cf3d7ec:
    pbVar10 = abStack_58 + -(long)&uStack_6c;
    if (9 < (long)pbVar10) goto LAB_0cf3d882;
LAB_0cf3d84c:
    iVar6 = 0x1f;
    if ((uVar5 | 1) != 0) {
      for (; (uVar5 | 1) >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    uVar7 = iVar6 * 0x4d1 + 0x4d1U >> 0xc;
    if ((long)(ulong)((uVar7 - (uVar5 < *(uint *)(&UNK_014edae0 + (ulong)uVar7 * 4))) + 1) <=
        (long)pbVar10) goto LAB_0cf3d882;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
LAB_0cf3d8b4:
    lVar8 = (long)&uStack_c0 + 1;
    uVar11 = 0;
  }
  else {
    func_0x0412a280(uStack_98,CONCAT26(uStack_a2,CONCAT51(uStack_a7,bStack_a8)) & 0xfffffffffffffffe
                   );
    if ((uStack_c0 & 1) == 0) goto LAB_0cf3d7e1;
LAB_0cf3d819:
    func_0x0412a280(lStack_b0,uStack_c0 & 0xfffffffffffffffe);
    uVar5 = *(uint *)(plVar3 + 0x57);
    if (-1 < (int)uVar5) goto LAB_0cf3d7ec;
LAB_0cf3d837:
    uStack_6c = 0x2d;
    uVar5 = -uVar5;
    pbVar10 = abStack_58 + -(long)auStack_6b;
    if ((long)pbVar10 < 10) goto LAB_0cf3d84c;
LAB_0cf3d882:
    lVar8 = func_0x04136630();
    uVar11 = lVar8 - (long)&uStack_6c;
    if (0xfffffffffffffff7 < uVar11) {
LAB_0cf3da29:
      lVar8 = func_0x04882e30();
      if ((bStack_a8 & 1) != 0) {
        func_0x0412a280(uStack_98,
                        CONCAT26(uStack_a2,CONCAT51(uStack_a7,bStack_a8)) & 0xfffffffffffffffe);
      }
      if ((uStack_c0 & 1) != 0) {
        func_0x0412a280(lStack_b0,uStack_c0 & 0xfffffffffffffffe);
      }
      if ((bStack_88 & 1) != 0) {
        func_0x0412a280(uStack_78,CONCAT71(auStack_87,bStack_88) & 0xfffffffffffffffe);
      }
      if ((abStack_58[0] & 1) != 0) {
        func_0x0412a280(uStack_48,
                        CONCAT62(auStack_56._0_6_,CONCAT11(abStack_58[1],abStack_58[0])) &
                        0xfffffffffffffffe);
      }
      _Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0cf3db0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar8 + 0xf8) + 0x120))(lVar8 + 0xf8);
      return;
    }
    if (uVar11 < 0x17) {
      uStack_c0 = CONCAT71(uStack_c0._1_7_,(char)uVar11 * '\x02');
      lVar8 = (long)&uStack_c0 + 1;
      if (uVar11 == 0) goto LAB_0cf3d8b4;
    }
    else {
      uVar14 = 0x1a;
      if ((uVar11 | 7) != 0x17) {
        uVar14 = (uVar11 | 7) + 1;
      }
      lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
      if (lVar8 == 0) {
        func_0x0eec74c0(uVar14,0);
      }
      uStack_c0 = uVar14 | 1;
      uStack_b8 = uVar11;
      lStack_b0 = lVar8;
    }
    func_0x0eee2f00(lVar8,&uStack_6c,uVar11);
  }
  *(undefined1 *)(lVar8 + uVar11) = 0;
  puVar9 = (undefined8 *)func_0x0412f0e0(&uStack_c0,0,&UNK_0131d11f,0xc);
  uStack_98 = puVar9[2];
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  bStack_a8 = (byte)uVar1;
  uStack_a7 = (undefined5)((ulong)uVar1 >> 8);
  uStack_a2 = (undefined2)((ulong)uVar1 >> 0x30);
  uStack_a0 = (undefined1)uVar2;
  uStack_9f = (undefined5)((ulong)uVar2 >> 8);
  uStack_9a = (undefined2)((ulong)uVar2 >> 0x30);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  FUN_057d8ed0(uVar4,&bStack_a8);
  if ((bStack_a8 & 1) != 0) {
    func_0x0412a280(uStack_98,CONCAT26(uStack_a2,CONCAT51(uStack_a7,bStack_a8)) & 0xfffffffffffffffe
                   );
  }
  if ((uStack_c0 & 1) != 0) {
    func_0x0412a280(lStack_b0,uStack_c0 & 0xfffffffffffffffe);
  }
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(uStack_78,CONCAT71(auStack_87,bStack_88) & 0xfffffffffffffffe);
  }
  if ((abStack_58[0] & 1) != 0) {
    func_0x0412a280(uStack_48,
                    CONCAT62(auStack_56._0_6_,CONCAT11(abStack_58[1],abStack_58[0])) &
                    0xfffffffffffffffe);
  }
  return;
}


