/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1cb470 (ELF vaddr 0xd0cb470)
 * Label: caller-of-callee
 * Body:  [[0d1cb470, 0d1cb5b7] [0d1cb5c0, 0d1cb8ca] [0d1cb8d0, 0d1cb923] [0d1cb93f, 0d1cb961] [0d1cb9e6, 0d1cba0f]]
 * Ghidra: FUN_0d1cb470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0d1cb470(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  byte bStack_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined1 auStack_40 [16];
  
  func_0x04863480(auStack_40,param_3);
  puStack_b8 = (ulong *)0x0;
  puStack_b0 = (ulong *)0x0;
  puStack_a8 = (ulong *)0x0;
  uVar5 = func_0x04864680(auStack_40,&UNK_01338607);
  func_0x04863480(auStack_80,uVar5);
  cVar4 = func_0x04864270(auStack_80);
  puStack_50 = param_1;
  puStack_48 = param_4;
  if (cVar4 == '\0') {
    cVar4 = func_0x04865490(auStack_80);
    if (cVar4 == '\0') {
      puVar13 = (ulong *)0x0;
    }
    else {
      bStack_98 = 0;
      uStack_97 = 0;
      func_0x04863cb0(&uStack_d8,auStack_80,&bStack_98);
      puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (puVar8 == (ulong *)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      puVar13 = puVar8 + 3;
      puVar8[2] = uStack_c8;
      *puVar8 = uStack_d8;
      puVar8[1] = uStack_d0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      puStack_b8 = puVar8;
      puStack_b0 = puVar13;
      puStack_a8 = puVar13;
      if ((bStack_98 & 1) != 0) {
        func_0x0412a280(uStack_88,
                        CONCAT62(uStack_96,CONCAT11(uStack_97,bStack_98)) & 0xfffffffffffffffe);
      }
    }
  }
  else {
    func_0x04865630(auStack_70,auStack_80);
    func_0x048656b0(auStack_60,auStack_80);
    puVar13 = (ulong *)0x0;
    while( true ) {
      cVar4 = func_0x04862c80(auStack_70,auStack_60);
      if (cVar4 != '\0') break;
      uVar5 = func_0x04862b80(auStack_70);
      cVar4 = func_0x04865490(uVar5);
      if (cVar4 != '\0') {
        bStack_98 = 0;
        uStack_97 = 0;
        func_0x04863cb0(&uStack_d8,uVar5,&bStack_98);
        puVar8 = puStack_b8;
        if (puVar13 < puStack_a8) {
          puVar13[2] = uStack_c8;
          *puVar13 = uStack_d8;
          puVar13[1] = uStack_d0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          puVar13 = puVar13 + 3;
          puVar3 = puVar13;
        }
        else {
          lVar14 = (long)puVar13 - (long)puStack_b8;
          uVar6 = (lVar14 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar6) {
LAB_0d1cb91a:
            uVar5 = func_0x0488efe0();
            if ((bStack_98 & 1) != 0) {
              func_0x0412a280(uStack_88,
                              CONCAT62(uStack_96,CONCAT11(uStack_97,bStack_98)) & 0xfffffffffffffffe
                             );
            }
            func_0x04863610(auStack_80);
            func_0x04886070(&puStack_b8);
            func_0x04863610(auStack_40);
            func_0x0eee2d70(uVar5);
            pcVar1 = (code *)swi(3);
            puVar9 = (undefined8 *)(*pcVar1)();
            return puVar9;
          }
          lVar12 = (long)puStack_a8 - (long)puStack_b8;
          lVar10 = lVar12 >> 3;
          uVar11 = lVar10 * 0x5555555555555556;
          if (uVar11 <= uVar6) {
            uVar11 = uVar6;
          }
          if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
            uVar11 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar11) {
            func_0x04882eb0();
            goto LAB_0d1cb91a;
          }
          puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11 * 0x18);
          if (puVar7 == (ulong *)0x0) {
            func_0x0eec74c0(uVar11 * 0x18,0);
          }
          *(ulong *)((long)puVar7 + lVar14 + 0x10) = uStack_c8;
          *(ulong *)((long)puVar7 + lVar14) = uStack_d8;
          ((ulong *)((long)puVar7 + lVar14))[1] = uStack_d0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          puVar13 = (ulong *)((long)puVar7 + lVar14 + 0x18);
          func_0x0eee2f00(puVar7,puVar8,lVar14);
          puVar3 = puVar13;
          puStack_b8 = puVar7;
          puStack_a8 = puVar7 + uVar11 * 3;
          if ((puVar8 != (ulong *)0x0) && (func_0x0412a280(puVar8,lVar12), (uStack_d8 & 1) != 0)) {
            puStack_b0 = puVar13;
            func_0x0412a280(uStack_c8,uStack_d8 & 0xfffffffffffffffe);
            puVar3 = puStack_b0;
          }
        }
        puStack_b0 = puVar3;
        if ((bStack_98 & 1) != 0) {
          func_0x0412a280(uStack_88,
                          CONCAT62(uStack_96,CONCAT11(uStack_97,bStack_98)) & 0xfffffffffffffffe);
        }
      }
      func_0x04862ba0(auStack_70);
    }
    func_0x04862b40(auStack_60);
    func_0x04862b40(auStack_70);
  }
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar5 = puStack_48[1];
  puVar9[1] = *puStack_48;
  puVar9[2] = uVar5;
  puVar9[3] = puStack_48[2];
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  *puVar9 = &UNK_0f4588a8;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  FUN_0488f040(puVar9 + 4,puStack_b8,puVar13,
               ((long)puVar13 - (long)puStack_b8 >> 3) * -0x5555555555555555);
  puVar2 = puStack_50;
  *puStack_50 = puVar9;
  func_0x04863610(auStack_80);
  puVar8 = puStack_b8;
  puVar13 = puStack_b0;
  if (puStack_b8 != (ulong *)0x0) {
    for (; puVar8 != puVar13; puVar13 = puVar13 + -3) {
      if ((puVar13[-3] & 1) != 0) {
        func_0x0412a280(puVar13[-1],puVar13[-3] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(puVar8,(long)puStack_a8 - (long)puVar8);
  }
  func_0x04863610(auStack_40);
  return puVar2;
}


