/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbf0d070 (ELF vaddr 0xbe0d070)
 * Label: caller-of-callee
 * Body:  [[0bf0d070, 0bf0d0cb] [0bf0d0d0, 0bf0d14b] [0bf0d150, 0bf0d1f4] [0bf0d200, 0bf0d59e] [0bf0d5b0, 0bf0d5f1] [0bf0d68a, 0bf0d69f]]
 * Ghidra: FUN_0bf0d070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bf0d070(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  long *plStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lVar5 = func_0x048648e0(param_1,param_3);
  cVar3 = func_0x04864260(lVar5);
  if (cVar3 != '\0') {
    return;
  }
  cVar3 = func_0x04864270(lVar5);
  plStack_78 = param_2;
  lStack_58 = lVar5;
  if (cVar3 != '\0') {
    func_0x04865530(auStack_48,lVar5);
    do {
      func_0x048655b0(&bStack_70,lVar5);
      cVar3 = func_0x04862c80(auStack_48,&bStack_70);
      func_0x04862b40(&bStack_70);
      if (cVar3 != '\0') {
        func_0x04862b40(auStack_48);
        return;
      }
      uVar6 = func_0x04862b80(auStack_48);
      cVar3 = func_0x04865490(uVar6);
      if (cVar3 != '\0') {
        uVar7 = func_0x0eee2e90(param_4);
        if (0xfffffffffffffff7 < uVar7) {
          func_0x04882e30();
LAB_0bf0d57a:
          func_0x04882eb0();
LAB_0bf0d57f:
          func_0x07125640();
          goto LAB_0bf0d584;
        }
        if (uVar7 < 0x17) {
          uStack_90 = CONCAT71(uStack_90._1_7_,(char)uVar7 * '\x02');
          lVar5 = (long)&uStack_90 + 1;
          if (uVar7 != 0) goto LAB_0bf0d19b;
        }
        else {
          uVar9 = (uVar7 | 7) + 1;
          if ((uVar7 | 7) == 0x17) {
            uVar9 = 0x1a;
          }
          lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
          if (lVar5 == 0) {
            func_0x0eec74c0(uVar9,0);
          }
          uStack_90 = uVar9 | 1;
          uStack_88 = uVar7;
          lStack_80 = lVar5;
LAB_0bf0d19b:
          func_0x0eee2f00(lVar5,param_4,uVar7);
        }
        *(undefined1 *)(lVar5 + uVar7) = 0;
        func_0x04863cb0(&bStack_70,uVar6,&uStack_90);
        uVar4 = func_0x0c635490(&bStack_70);
        lStack_50 = CONCAT44(lStack_50._4_4_,uVar4);
        puVar8 = (undefined4 *)plStack_78[1];
        if (puVar8 < (undefined4 *)plStack_78[2]) {
          *puVar8 = uVar4;
          puVar8 = puVar8 + 1;
          plVar12 = plStack_78;
        }
        else {
          lVar5 = *plStack_78;
          lVar13 = (long)puVar8 - lVar5;
          uVar7 = (lVar13 >> 2) + 1;
          if (0x3fffffffffffffff < uVar7) goto LAB_0bf0d57f;
          uVar10 = plStack_78[2] - lVar5;
          uVar9 = (long)uVar10 >> 1;
          if ((ulong)((long)uVar10 >> 1) <= uVar7) {
            uVar9 = uVar7;
          }
          if (0x7ffffffffffffffb < uVar10) {
            uVar9 = 0x3fffffffffffffff;
          }
          lStack_38 = lVar5;
          if (0x3fffffffffffffff < uVar9) goto LAB_0bf0d57a;
          lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9 * 4);
          if (lVar5 == 0) {
            func_0x0eec74c0(uVar9 * 4,0);
          }
          lVar2 = lStack_38;
          *(undefined4 *)(lVar5 + lVar13) = (undefined4)lStack_50;
          puVar8 = (undefined4 *)(lVar5 + lVar13 + 4);
          lVar11 = lVar5 + lVar13 + (lVar13 >> 2) * -4;
          func_0x0eee2f00(lVar11,lStack_38,lVar13);
          plVar12 = plStack_78;
          *plStack_78 = lVar11;
          plStack_78[1] = (long)puVar8;
          plStack_78[2] = lVar5 + uVar9 * 4;
          if (lVar2 != 0) {
            func_0x0412a280(lVar2,uVar10);
          }
        }
        plVar12[1] = (long)puVar8;
        if ((bStack_70 & 1) != 0) {
          func_0x0412a280(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
        }
        lVar5 = lStack_58;
        if ((uStack_90 & 1) != 0) {
          func_0x0412a280(lStack_80,uStack_90 & 0xfffffffffffffffe);
        }
      }
      func_0x04862ba0(auStack_48);
    } while( true );
  }
  cVar3 = func_0x04865490(lVar5);
  if (cVar3 == '\0') {
    return;
  }
  uVar7 = func_0x0eee2e90(param_4);
  if (uVar7 < 0xfffffffffffffff8) {
    if (uVar7 < 0x17) {
      uStack_90 = CONCAT71(uStack_90._1_7_,(char)uVar7 * '\x02');
      lVar5 = (long)&uStack_90 + 1;
      if (uVar7 != 0) goto LAB_0bf0d3d0;
    }
    else {
      uVar9 = 0x1a;
      if ((uVar7 | 7) != 0x17) {
        uVar9 = (uVar7 | 7) + 1;
      }
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
      if (lVar5 == 0) {
        func_0x0eec74c0(uVar9,0);
      }
      uStack_90 = uVar9 | 1;
      uStack_88 = uVar7;
      lStack_80 = lVar5;
LAB_0bf0d3d0:
      func_0x0eee2f00(lVar5,param_4,uVar7);
    }
    *(undefined1 *)(lVar5 + uVar7) = 0;
    func_0x04863cb0(&bStack_70,lStack_58,&uStack_90);
    uVar4 = func_0x0c635490(&bStack_70);
    puVar8 = (undefined4 *)plStack_78[1];
    if (puVar8 < (undefined4 *)plStack_78[2]) {
      *puVar8 = uVar4;
      puVar8 = puVar8 + 1;
LAB_0bf0d50b:
      plStack_78[1] = (long)puVar8;
      if ((bStack_70 & 1) != 0) {
        func_0x0412a280(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
      }
      if ((uStack_90 & 1) != 0) {
        func_0x0412a280(lStack_80,uStack_90 & 0xfffffffffffffffe);
      }
      return;
    }
    lVar5 = *plStack_78;
    lVar13 = (long)puVar8 - lVar5;
    uVar7 = (lVar13 >> 2) + 1;
    if (uVar7 >> 0x3e == 0) {
      uVar10 = plStack_78[2] - lVar5;
      uVar9 = (long)uVar10 >> 1;
      if ((ulong)((long)uVar10 >> 1) <= uVar7) {
        uVar9 = uVar7;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar9 = 0x3fffffffffffffff;
      }
      lStack_50 = lVar5;
      if (uVar9 < 0x4000000000000000) {
        lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9 * 4);
        if (lVar5 == 0) {
          func_0x0eec74c0(uVar9 * 4,0);
        }
        lVar2 = lStack_50;
        lStack_58 = uVar9 * 4 + lVar5;
        *(undefined4 *)(lVar5 + lVar13) = uVar4;
        puVar8 = (undefined4 *)(lVar13 + lVar5 + 4);
        lVar5 = lVar13 + lVar5 + (lVar13 >> 2) * -4;
        func_0x0eee2f00(lVar5,lStack_50,lVar13);
        *plStack_78 = lVar5;
        plStack_78[1] = (long)puVar8;
        plStack_78[2] = lStack_58;
        if (lVar2 != 0) {
          func_0x0412a280(lVar2,uVar10);
        }
        goto LAB_0bf0d50b;
      }
      goto LAB_0bf0d58e;
    }
  }
  else {
LAB_0bf0d584:
    func_0x04882e30();
  }
  func_0x07125640();
LAB_0bf0d58e:
  uVar6 = func_0x04882eb0();
  while ((uStack_90 & 1) == 0) {
    func_0x0eee2d70(uVar6);
    func_0x0412a280(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
  }
  func_0x0412a280(lStack_80,uStack_90 & 0xfffffffffffffffe);
  uVar6 = func_0x0eee2d70(uVar6);
  func_0x04862b40(auStack_48);
  func_0x0eee2d70(uVar6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


