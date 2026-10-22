/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbcd5280 (ELF vaddr 0xbbd5280)
 * Label: caller-of-callee
 * Body:  [[0bcd5280, 0bcd5387] [0bcd5390, 0bcd54d8] [0bcd54e0, 0bcd5748] [0bcd57ae, 0bcd57b5] [0bcd5847, 0bcd5866]]
 * Ghidra: FUN_0bcd5280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bcd5280(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong *puStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_c8 [16];
  ulong *puStack_b8;
  undefined1 auStack_b0 [16];
  ulong auStack_a0 [3];
  long *plStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  auStack_a0[0] = 0x800000128911c;
  uStack_e8 = uStack_e8 & 0xffffffffffffff00;
  uStack_d8 = uStack_d8 & 0xffffffffffffff00;
  uStack_68 = param_3;
  uStack_60 = param_4;
  FUN_0eeb79f0(auStack_48,auStack_a0);
  if ((auStack_a0[0] >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_a0[0] & 0xff00ffffffffffff) - 8);
  }
  uVar8 = func_0x04864680(param_1,&UNK_0128911c);
  func_0x04863480(auStack_b0,uVar8);
  cVar6 = func_0x04864260(auStack_b0);
  if ((cVar6 == '\0') && (cVar6 = func_0x04864270(auStack_b0), cVar6 != '\0')) {
    func_0x04865530(auStack_c8,auStack_b0);
    plStack_88 = param_2;
    while( true ) {
      func_0x048655b0(&uStack_e8,auStack_b0);
      cVar6 = func_0x04862c80(auStack_c8,&uStack_e8);
      func_0x04862b40();
      if (cVar6 != '\0') break;
      uVar9 = func_0x04862ca0(auStack_c8);
      uStack_e0 = func_0x0eee2e90(uVar9);
      uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
      puStack_100 = (ulong *)0x0;
      uStack_e8 = uVar9;
      FUN_0eeb79f0(auStack_a0,&puStack_100);
      if (((ulong)puStack_100 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_100 & 0xff00ffffffffffff) - 8);
      }
      uVar8 = func_0x04862b80(auStack_c8);
      cVar6 = func_0x04864290(uVar8);
      if (cVar6 != '\0') {
        uVar8 = func_0x04862b80(auStack_c8);
        iVar7 = func_0x048641f0(uVar8);
        if (iVar7 == 1) {
          uVar8 = func_0x04862b80(auStack_c8);
          func_0x04865230(&puStack_100,uVar8);
          if ((*puStack_100 & 1) == 0) {
            uStack_d8 = puStack_100[2];
            uStack_e8 = *puStack_100;
            uStack_e0 = puStack_100[1];
            puVar2 = puStack_100;
            puVar3 = puStack_f8;
joined_r0x0bcd54d5:
            for (; puVar4 = puStack_100, puStack_100 != puVar3; puVar3 = puVar3 + -3) {
              puStack_100 = puVar2;
              if ((puVar3[-3] & 1) != 0) {
                func_0x0412a280(puVar3[-1],puVar3[-3] & 0xfffffffffffffffe);
              }
              puVar2 = puStack_100;
              puStack_100 = puVar4;
            }
            puStack_f8 = puStack_100;
            puStack_100 = puVar2;
            func_0x0412a280(puVar2,lStack_f0 - (long)puVar2);
          }
          else {
            func_0x0412e5e0(&uStack_e8,puStack_100[2],puStack_100[1]);
            puVar2 = puStack_100;
            puVar3 = puStack_f8;
            if (puStack_100 != (ulong *)0x0) goto joined_r0x0bcd54d5;
          }
          uVar8 = func_0x04862b80(auStack_c8);
          func_0x04863480(auStack_58,uVar8);
          func_0x0bccffb0(&puStack_100,uStack_68,&uStack_e8,auStack_58,uStack_60);
          func_0x04863610(auStack_58);
          puVar2 = puStack_100;
          if (puStack_100 != (ulong *)0x0) {
            puVar14 = (undefined8 *)param_2[1];
            if (puVar14 < (undefined8 *)param_2[2]) {
              puStack_100 = (ulong *)0x0;
              *puVar14 = puVar2;
              puVar14 = puVar14 + 1;
            }
            else {
              lVar10 = *param_2;
              lVar12 = (long)puVar14 - lVar10;
              uVar9 = (lVar12 >> 3) + 1;
              if (0x1fffffffffffffff < uVar9) {
LAB_0bcd5742:
                uVar8 = func_0x0bcd7490();
                func_0x04863610(auStack_b0);
                FUN_0eeb81b0(auStack_48);
                _Unwind_Resume(uVar8);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              puStack_b8 = puStack_100;
              uVar11 = param_2[2] - lVar10;
              uVar13 = (long)uVar11 >> 2;
              if ((ulong)((long)uVar11 >> 2) <= uVar9) {
                uVar13 = uVar9;
              }
              if (0x7ffffffffffffff7 < uVar11) {
                uVar13 = 0x1fffffffffffffff;
              }
              lStack_70 = lVar10;
              if (0x1fffffffffffffff < uVar13) {
                func_0x04882eb0();
                goto LAB_0bcd5742;
              }
              uStack_80 = uVar11;
              lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 8);
              if (lVar10 == 0) {
                func_0x0eec74c0(uVar13 * 8,0);
              }
              lVar5 = lStack_70;
              lStack_78 = lVar10 + uVar13 * 8;
              puStack_100 = (ulong *)0x0;
              *(ulong **)(lVar10 + lVar12) = puStack_b8;
              puVar14 = (undefined8 *)(lVar10 + lVar12 + 8);
              lVar10 = lVar10 + lVar12 + (lVar12 >> 3) * -8;
              memcpy(lVar10,lStack_70,lVar12);
              param_2 = plStack_88;
              *plStack_88 = lVar10;
              plStack_88[1] = (long)puVar14;
              plStack_88[2] = lStack_78;
              if (lVar5 != 0) {
                func_0x0412a280(lVar5,uStack_80);
              }
            }
            puVar2 = puStack_100;
            param_2[1] = (long)puVar14;
            puStack_100 = (ulong *)0x0;
            if (puVar2 != (ulong *)0x0) {
              (**(code **)(*puVar2 + 8))();
            }
          }
          if ((uStack_e8 & 1) != 0) {
            func_0x0412a280(uStack_d8,uStack_e8 & 0xfffffffffffffffe);
          }
        }
      }
      FUN_0eeb81b0(auStack_a0);
      func_0x04862ba0(auStack_c8);
    }
    func_0x04862b40(auStack_c8);
  }
  func_0x04863610(auStack_b0);
  FUN_0eeb81b0(auStack_48);
  return;
}


