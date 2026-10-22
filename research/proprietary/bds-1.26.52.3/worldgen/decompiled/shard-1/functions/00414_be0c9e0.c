/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbf0c9e0 (ELF vaddr 0xbe0c9e0)
 * Label: caller-of-callee
 * Body:  [[0bf0c9e0, 0bf0ca4c] [0bf0ca50, 0bf0caca] [0bf0cad0, 0bf0cb98] [0bf0cba0, 0bf0cc38] [0bf0cc40, 0bf0cf18] [0bf0cf23, 0bf0cf53] [0bf0cf57, 0bf0cf8c] [0bf0cf90, 0bf0cfb3] [0bf0d050, 0bf0d068]]
 * Ghidra: FUN_0bf0c9e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bf0c9e0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_70;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  
  uStack_f8 = param_4;
  uVar4 = func_0x048648e0(param_1,param_3);
  cVar2 = func_0x04864260(uVar4);
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = func_0x04864270(uVar4);
  uStack_d8 = uVar4;
  uStack_d0 = param_2;
  if (cVar2 != '\0') {
    func_0x04865530(auStack_40,uVar4);
    do {
      func_0x048655b0(&bStack_c8,uVar4);
      uVar3 = func_0x04862c80(auStack_40,&bStack_c8);
      param_2 = (ulong)uVar3;
      func_0x04862b40(&bStack_c8);
      if ((char)uVar3 != '\0') {
        func_0x04862b40(auStack_40);
        return;
      }
      uVar5 = func_0x04862b80(auStack_40);
      cVar2 = func_0x04865490(uVar5);
      if (cVar2 != '\0') {
        uVar6 = func_0x0eee2e90(uStack_f8);
        if (0xfffffffffffffff7 < uVar6) {
          func_0x04882e30();
          goto LAB_0bf0cf0f;
        }
        if (uVar6 < 0x17) {
          uStack_110 = CONCAT71(uStack_110._1_7_,(char)uVar6 * '\x02');
          lVar7 = (long)&uStack_110 + 1;
          if (uVar6 != 0) goto LAB_0bf0cb1b;
        }
        else {
          uVar8 = (uVar6 | 7) + 1;
          if ((uVar6 | 7) == 0x17) {
            uVar8 = 0x1a;
          }
          lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
          if (lVar7 == 0) {
            func_0x0eec74c0(uVar8,0);
          }
          uStack_110 = uVar8 | 1;
          uStack_108 = uVar6;
          lStack_100 = lVar7;
LAB_0bf0cb1b:
          memcpy(lVar7,uStack_f8,uVar6);
        }
        *(undefined1 *)(lVar7 + uVar6) = 0;
        func_0x04863cb0(&bStack_f0,uVar5,&uStack_110);
        func_0x0b04cfb0(&bStack_c8,&bStack_f0);
        uVar6 = uStack_d0;
        if ((bStack_f0 & 1) == 0) {
          if ((uStack_110 & 1) == 0) goto LAB_0bf0cb69;
LAB_0bf0cbba:
          func_0x0412a280(lStack_100,uStack_110 & 0xfffffffffffffffe);
          uVar8 = *(ulong *)(uVar6 + 8);
          if (*(ulong *)(uVar6 + 0x10) <= uVar8) goto LAB_0bf0cbd7;
LAB_0bf0cb73:
          func_0x0b04c660(uVar8,&bStack_c8);
          *(ulong *)(uVar6 + 8) = uVar8 + 0x88;
          *(ulong *)(uVar6 + 8) = uVar8 + 0x88;
        }
        else {
          func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
          if ((uStack_110 & 1) != 0) goto LAB_0bf0cbba;
LAB_0bf0cb69:
          uVar8 = *(ulong *)(uVar6 + 8);
          if (uVar8 < *(ulong *)(uVar6 + 0x10)) goto LAB_0bf0cb73;
LAB_0bf0cbd7:
          uVar4 = func_0x05f519d0(uVar6,&bStack_c8);
          *(undefined8 *)(uVar6 + 8) = uVar4;
        }
        if ((bStack_60 & 1) != 0) {
          func_0x0412a280(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
        }
        uVar4 = uStack_d8;
        if ((bStack_80 & 1) != 0) {
          func_0x0412a280(uStack_70,CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
        }
        if ((bStack_98 & 1) != 0) {
          func_0x0412a280(uStack_88,CONCAT71(uStack_97,bStack_98) & 0xfffffffffffffffe);
        }
        if ((bStack_b0 & 1) != 0) {
          func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
        }
        if ((bStack_c8 & 1) != 0) {
          func_0x0412a280(uStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
        }
      }
      func_0x04862ba0(auStack_40);
    } while( true );
  }
  cVar2 = func_0x04865490(uVar4);
  if (cVar2 == '\0') {
    return;
  }
  uVar6 = func_0x0eee2e90(uStack_f8);
  if (0xfffffffffffffff7 < uVar6) {
LAB_0bf0cf0f:
    uVar4 = func_0x04882e30();
    func_0x04a3a0b0(&bStack_c8);
    lVar7 = _Unwind_Resume(uVar4);
    if ((bStack_f0 & 1) != 0) {
      func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
    }
    if ((uStack_110 & 1) == 0) {
      _Unwind_Resume(lVar7);
    }
    func_0x0412a280(lStack_100,uStack_110 & 0xfffffffffffffffe);
    uVar4 = _Unwind_Resume(lVar7);
    *(ulong *)(lVar7 + 8) = param_2;
    func_0x04a3a0b0(&bStack_c8);
    func_0x04862b40(auStack_40);
    uVar4 = _Unwind_Resume(uVar4);
    func_0x04862b40(auStack_40);
    _Unwind_Resume(uVar4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar6 < 0x17) {
    uStack_110 = CONCAT71(uStack_110._1_7_,(char)uVar6 * '\x02');
    lVar7 = (long)&uStack_110 + 1;
    if (uVar6 != 0) goto LAB_0bf0cd66;
  }
  else {
    uVar8 = 0x1a;
    if ((uVar6 | 7) != 0x17) {
      uVar8 = (uVar6 | 7) + 1;
    }
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
    if (lVar7 == 0) {
      func_0x0eec74c0(uVar8,0);
    }
    uStack_110 = uVar8 | 1;
    uStack_108 = uVar6;
    lStack_100 = lVar7;
LAB_0bf0cd66:
    memcpy(lVar7,uStack_f8,uVar6);
  }
  *(undefined1 *)(lVar7 + uVar6) = 0;
  func_0x04863cb0(&bStack_f0,uStack_d8,&uStack_110);
  func_0x0b04cfb0(&bStack_c8,&bStack_f0);
  uVar6 = uStack_d0;
  if ((bStack_f0 & 1) == 0) {
    if ((uStack_110 & 1) == 0) goto LAB_0bf0cdb1;
LAB_0bf0cdfd:
    func_0x0412a280(lStack_100,uStack_110 & 0xfffffffffffffffe);
    uVar8 = *(ulong *)(uVar6 + 8);
    if (*(ulong *)(uVar6 + 0x10) <= uVar8) goto LAB_0bf0ce1a;
  }
  else {
    func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
    if ((uStack_110 & 1) != 0) goto LAB_0bf0cdfd;
LAB_0bf0cdb1:
    uVar8 = *(ulong *)(uVar6 + 8);
    if (*(ulong *)(uVar6 + 0x10) <= uVar8) {
LAB_0bf0ce1a:
      uVar4 = func_0x05f519d0(uVar6,&bStack_c8);
      *(undefined8 *)(uVar6 + 8) = uVar4;
      goto joined_r0x0bf0ce36;
    }
  }
  func_0x0b04c660(uVar8,&bStack_c8);
  *(ulong *)(uVar6 + 8) = uVar8 + 0x88;
  *(ulong *)(uVar6 + 8) = uVar8 + 0x88;
joined_r0x0bf0ce36:
  if ((bStack_60 & 1) != 0) {
    func_0x0412a280(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
  }
  if ((bStack_80 & 1) != 0) {
    func_0x0412a280(uStack_70,CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
  }
  if ((bStack_98 & 1) != 0) {
    func_0x0412a280(uStack_88,CONCAT71(uStack_97,bStack_98) & 0xfffffffffffffffe);
  }
  if ((bStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
  }
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(uStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
  }
  return;
}


