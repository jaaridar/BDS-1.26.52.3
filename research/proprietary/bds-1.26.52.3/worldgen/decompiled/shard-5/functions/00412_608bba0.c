/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x618bba0 (ELF vaddr 0x608bba0)
 * Label: caller-of-callee
 * Body:  [[0618bba0, 0618bd19] [0618bd20, 0618bdb2] [0618bdc0, 0618c02f] [0618c0e0, 0618c113]]
 * Ghidra: FUN_0618bba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0618bba0(long *param_1,long *param_2,ulong *param_3)

{
  long lVar1;
  code *pcVar2;
  ulong *puVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined3 uVar8;
  undefined3 uVar9;
  char cVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long lStack_108;
  byte bStack_100;
  undefined4 uStack_ff;
  undefined4 uStack_fb;
  undefined4 uStack_f7;
  undefined4 uStack_f3;
  undefined3 uStack_ef;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  byte bStack_b0;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  char cStack_80;
  byte bStack_78;
  undefined7 uStack_77;
  undefined8 uStack_68;
  char cStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  char cStack_40;
  long *plStack_38;
  
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  cStack_80 = 0;
  bStack_78 = 0;
  cStack_60 = '\0';
  bStack_58 = 0;
  cStack_40 = '\0';
  if ((*param_3 & 1) == 0) {
    uStack_88 = param_3[2];
    uStack_98 = *param_3;
    uStack_90 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_98,param_3[2],param_3[1]);
  }
  cStack_80 = '\x01';
  uStack_ec = 0;
  uStack_e8 = 0;
  lStack_108 = 0x7366f830c8889f04;
  bStack_100 = 0x26;
  uStack_ff = _DAT_01726f50;
  uStack_fb = _UNK_01726f54;
  uStack_f7 = _UNK_01726f58;
  uStack_f3 = _UNK_01726f5c;
  uStack_ef = _UNK_01726f60;
  (**(code **)(*param_2 + 0x20))(auStack_c0,param_2,&lStack_108);
  if ((bStack_100 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_ec,CONCAT31(uStack_ef,uStack_f3._3_1_)),
                    CONCAT35((undefined3)uStack_fb,CONCAT41(uStack_ff,bStack_100)) &
                    0xfffffffffffffffe);
  }
  cVar10 = func_0x04864260(auStack_c0);
  if (cVar10 == '\0') {
    lStack_108 = 0;
    bStack_100 = 0;
    uStack_ff = 0;
    uStack_fb = 0;
    uStack_f7 = 0;
    uStack_f3 = uStack_f3 & 0xff000000;
    cVar10 = func_0x04864270(auStack_c0);
    plStack_38 = param_1;
    if (cVar10 == '\0') {
      lVar13 = 0;
      puVar16 = (ulong *)0x0;
      lVar17 = 0;
    }
    else {
      func_0x04865530(auStack_d0,auStack_c0);
      func_0x048655b0(auStack_e0,auStack_c0);
      puVar16 = (ulong *)0x0;
      while( true ) {
        cVar10 = func_0x04862c80(auStack_d0,auStack_e0);
        if (cVar10 != '\0') break;
        uVar11 = func_0x04862b80(auStack_d0);
        cVar10 = func_0x04865490(uVar11);
        if (cVar10 != '\0') {
          bStack_b0 = 0;
          uStack_af = 0;
          func_0x04863cb0(&uStack_128,uVar11,&bStack_b0);
          lVar13 = lStack_108;
          puVar3 = (ulong *)CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,uStack_fb._3_1_));
          if (puVar16 < puVar3) {
            puVar16[2] = uStack_118;
            *puVar16 = uStack_128;
            puVar16[1] = uStack_120;
            uStack_128 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            puVar16 = puVar16 + 3;
            bStack_100 = (byte)puVar16;
            uStack_ff = (undefined4)((ulong)puVar16 >> 8);
            uStack_fb._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
          }
          else {
            lVar17 = (long)puVar16 - lStack_108;
            uVar12 = (lVar17 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar12) {
LAB_0618c023:
              uVar11 = func_0x0488efe0();
              func_0x04862b40(auStack_d0);
              FUN_04886070(&lStack_108);
              func_0x04863610(auStack_c0);
              func_0x0609b5b0(&uStack_98);
              func_0x0eee2d70(uVar11);
              pcVar2 = (code *)swi(3);
              plVar14 = (long *)(*pcVar2)();
              return plVar14;
            }
            lVar18 = (long)puVar3 - lStack_108;
            lVar15 = lVar18 >> 3;
            uVar19 = lVar15 * 0x5555555555555556;
            if (uVar19 <= uVar12) {
              uVar19 = uVar12;
            }
            if (0x555555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
              uVar19 = 0xaaaaaaaaaaaaaaa;
            }
            if (0xaaaaaaaaaaaaaaa < uVar19) {
              FUN_04882eb0();
              goto LAB_0618c023;
            }
            lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 0x18);
            if (lVar15 == 0) {
              func_0x0eec74c0(uVar19 * 0x18,0);
            }
            lVar1 = lVar15 + uVar19 * 0x18;
            *(ulong *)(lVar15 + 0x10 + lVar17) = uStack_118;
            *(ulong *)(lVar15 + lVar17) = uStack_128;
            ((ulong *)(lVar15 + lVar17))[1] = uStack_120;
            uStack_128 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            puVar16 = (ulong *)(lVar15 + 0x18 + lVar17);
            func_0x0eee2f00(lVar15,lVar13,lVar17);
            uVar6 = uStack_ff;
            bVar4 = bStack_100;
            uVar8 = (undefined3)uStack_fb;
            uStack_fb._3_1_ = (undefined1)lVar1;
            uStack_f7 = (undefined4)((ulong)lVar1 >> 8);
            uStack_f3._0_3_ = (undefined3)((ulong)lVar1 >> 0x28);
            bStack_100 = (byte)puVar16;
            bVar5 = bStack_100;
            uStack_fb._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
            uVar9 = (undefined3)uStack_fb;
            uStack_ff = (undefined4)((ulong)puVar16 >> 8);
            uVar7 = uStack_ff;
            lStack_108 = lVar15;
            if (lVar13 == 0) {
              bStack_100 = bVar5;
              uStack_ff = uVar7;
            }
            else {
              bStack_100 = bVar4;
              uStack_ff = uVar6;
              uStack_fb._0_3_ = uVar8;
              func_0x0412a280(lVar13,lVar18);
              uStack_fb = CONCAT13(uStack_fb._3_1_,uVar9);
              bStack_100 = bVar5;
              uStack_ff = uVar7;
              if ((uStack_128 & 1) != 0) {
                func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
              }
            }
          }
          if ((bStack_b0 & 1) != 0) {
            func_0x0412a280(uStack_a0,
                            CONCAT62(uStack_ae,CONCAT11(uStack_af,bStack_b0)) & 0xfffffffffffffffe);
          }
        }
        func_0x04862ba0(auStack_d0);
      }
      func_0x04862b40(auStack_e0);
      func_0x04862b40(auStack_d0);
      lVar13 = CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,uStack_fb._3_1_));
      lVar17 = lStack_108;
    }
    param_1 = plStack_38;
    *plStack_38 = lVar17;
    plStack_38[1] = (long)puVar16;
    plStack_38[2] = lVar13;
    *(undefined1 *)(plStack_38 + 3) = 1;
    func_0x04863610(auStack_c0);
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    func_0x04863610(auStack_c0);
  }
  if ((cStack_40 == '\x01') && ((bStack_58 & 1) != 0)) {
    func_0x0412a280(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
  }
  if ((cStack_60 == '\x01') && ((bStack_78 & 1) != 0)) {
    func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
  }
  if ((cStack_80 == '\x01') && ((uStack_98 & 1) != 0)) {
    func_0x0412a280(uStack_88,uStack_98 & 0xfffffffffffffffe);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x1726f50  ModalTool:SortOrder
 * 0x1726f5f  rder
 */
