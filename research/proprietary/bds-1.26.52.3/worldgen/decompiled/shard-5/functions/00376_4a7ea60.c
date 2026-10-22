/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4b7ea60 (ELF vaddr 0x4a7ea60)
 * Label: caller-of-callee
 * Body:  [[04b7ea60, 04b7eafd] [04b7eb00, 04b7eb85] [04b7eb90, 04b7ecf5] [04b7ed00, 04b7eefd] [04b7ef00, 04b7ef58] [04b7ef6d, 04b7ef8b] [04b7efae, 04b7efb2] [04b7efdd, 04b7effc]]
 * Ghidra: FUN_04b7ea60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_04b7ea60(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  uint uStack_bc;
  long lStack_b8;
  uint uStack_ac;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined4 *puStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  bVar6 = 1;
  if (*(char *)(param_1 + 400) == '\0') {
    puStack_a8 = (undefined4 *)0x0;
    puStack_a0 = (undefined4 *)0x0;
    puStack_98 = (undefined4 *)0x0;
    uStack_bc = param_3;
    lStack_b8 = param_1;
    func_0x04b0a270(param_2 + 0x40,
                    (*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 3) *
                    -0x30c30c30c30c30c3,0);
    func_0x04865530(auStack_68,*(undefined8 *)(param_2 + 0x10));
    lStack_70 = param_2 + 0x70;
    bVar6 = 1;
    uStack_ac = uStack_bc & 0xff;
    while( true ) {
      func_0x048655b0(&lStack_88,*(undefined8 *)(param_2 + 0x10));
      cVar4 = func_0x04862c80(auStack_68,&lStack_88);
      func_0x04862b40(&lStack_88);
      if (cVar4 != '\0') break;
      uVar9 = func_0x04862ca0(auStack_68);
      uVar10 = func_0x0eee2e90(uVar9);
      if (0xfffffffffffffff7 < uVar10) {
        uVar9 = func_0x04882e30();
        FUN_04886070(&puStack_a8);
        uVar9 = func_0x0eee2d70(uVar9);
        uVar9 = func_0x04882e20(uVar9);
        func_0x04862b40(auStack_68);
        FUN_04886070(&puStack_a8);
        func_0x0eee2d70(uVar9);
        pcVar2 = (code *)swi(3);
        bVar6 = (*pcVar2)();
        return bVar6;
      }
      if (uVar10 < 0x17) {
        uStack_d8 = CONCAT71(uStack_d8._1_7_,(char)uVar10 * '\x02');
        lVar11 = (long)&uStack_d8 + 1;
        if (uVar10 != 0) goto LAB_04b7ebdb;
      }
      else {
        uVar13 = (uVar10 | 7) + 1;
        if ((uVar10 | 7) == 0x17) {
          uVar13 = 0x1a;
        }
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (lVar11 == 0) {
          func_0x0eec74c0(uVar13,0);
        }
        uStack_d8 = uVar13 | 1;
        uStack_d0 = uVar10;
        lStack_c8 = lVar11;
LAB_04b7ebdb:
        func_0x0eee2ee0(lVar11,uVar9,uVar10);
      }
      *(undefined1 *)(lVar11 + uVar10) = 0;
      uStack_80 = uStack_d8 >> 1 & 0x7f;
      lStack_88 = (long)&uStack_d8 + 1;
      if ((uStack_d8 & 1) != 0) {
        uStack_80 = uStack_d0;
        lStack_88 = lStack_c8;
      }
      uStack_78 = 1;
      uStack_90 = 0;
      func_0x0eeb79f0(auStack_58,&uStack_90);
      if ((uStack_90 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_90 & 0xff00ffffffffffff) - 8);
      }
      uVar9 = func_0x04862b80(auStack_68);
      plVar12 = (long *)func_0x04b80340(lStack_b8,param_2,&uStack_d8,uVar9,uStack_ac);
      puVar3 = puStack_a0;
      if (plVar12 == (long *)0x0) {
        if ((char)uStack_bc == '\0') {
          bVar6 = 0;
          func_0x0eeb81b0(auStack_58);
        }
        else if (puStack_a0 < puStack_98) {
          if ((uStack_d8 & 1) == 0) {
            *(long *)(puStack_a0 + 4) = lStack_c8;
            *puStack_a0 = (undefined4)uStack_d8;
            puStack_a0[1] = uStack_d8._4_4_;
            puStack_a0[2] = (undefined4)uStack_d0;
            puStack_a0[3] = uStack_d0._4_4_;
          }
          else {
            func_0x0412e5e0(puStack_a0,lStack_c8,uStack_d0);
          }
          puStack_a0 = puVar3 + 6;
          func_0x0eeb81b0(auStack_58);
        }
        else {
          puStack_a0 = (undefined4 *)func_0x04909a40(&puStack_a8,&uStack_d8);
          func_0x0eeb81b0(auStack_58);
        }
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 8);
        uVar9 = func_0x04862b80(auStack_68);
        bVar5 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar1,uVar9,lStack_70,uStack_ac);
        bVar6 = bVar5 & bVar6;
        func_0x0eeb81b0(auStack_58);
      }
      if ((uStack_d8 & 1) != 0) {
        func_0x0412a280(lStack_c8,uStack_d8 & 0xfffffffffffffffe);
      }
      func_0x04862ba0(auStack_68);
    }
    func_0x04862b40(auStack_68);
    puVar3 = puStack_a0;
    if (((char)uStack_bc != '\0') && (puStack_a0 != puStack_a8)) {
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      puVar14 = puStack_a8;
      do {
        func_0x048650e0(auStack_40,uVar9,puVar14);
        func_0x04863610(auStack_40);
        puVar14 = puVar14 + 6;
      } while (puVar14 != puVar3);
    }
    uVar7 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
    if ((ulong)uVar7 < *(ulong *)(lStack_b8 + 0x90)) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar8 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
      lStack_88 = CONCAT44(lStack_88._4_4_,uVar8);
      uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lStack_b8 + 0x90));
      func_0x04b0a9a0(1,3,uVar1,&UNK_011ec510,&lStack_88,&uStack_d8);
      bVar6 = 0;
    }
    uVar7 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
    if (*(ulong *)(lStack_b8 + 0x98) < (ulong)uVar7) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar8 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
      lStack_88 = CONCAT44(lStack_88._4_4_,uVar8);
      uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lStack_b8 + 0x98));
      func_0x04b0ab40(1,3,uVar1,&UNK_0145eaee,&lStack_88,&uStack_d8);
      bVar6 = 0;
    }
    puVar14 = puStack_a8;
    puVar3 = puStack_a0;
    if (puStack_a8 != (undefined4 *)0x0) {
      for (; puVar14 != puVar3; puVar3 = puVar3 + -6) {
        if ((*(byte *)(puVar3 + -6) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar3 + -2),*(ulong *)(puVar3 + -6) & 0xfffffffffffffffe)
          ;
        }
      }
      puStack_a0 = puVar14;
      func_0x0412a280(puStack_a8,(long)puStack_98 - (long)puStack_a8);
    }
  }
  return bVar6;
}


