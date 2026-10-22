/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x629f2b0 (ELF vaddr 0x619f2b0)
 * Label: caller-of-seed
 * Body:  [[0629f2b0, 0629f352] [0629f360, 0629f5aa] [0629f5b0, 0629f6fe]]
 * Ghidra: FUN_0629f2b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0629f2b0(long param_1,undefined8 *param_2,byte *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  bool bVar11;
  byte bStack_148;
  undefined7 uStack_147;
  ulong uStack_140;
  undefined7 *puStack_138;
  ulong *puStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  byte bStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong *puStack_90;
  undefined7 *puStack_88;
  ulong uStack_80;
  undefined7 *puStack_78;
  ulong uStack_70;
  undefined1 *puStack_68;
  ulong **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (*(int *)(param_3 + 0x40) == 1) {
    uVar1 = param_2[1];
    if ((param_3[0x18] & 1) == 0) {
      uStack_108 = *(undefined8 *)(param_3 + 0x28);
      uStack_118 = *(ulong *)(param_3 + 0x18);
      uStack_110 = *(undefined8 *)(param_3 + 0x20);
    }
    else {
      func_0x0412e5e0(&uStack_118,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
    }
    puStack_130 = &uStack_128;
    uStack_128 = 0;
    puStack_120 = (undefined *)0x0;
    if (_DAT_0f56adc0 != (undefined8 *)&DAT_0f56adc8) {
      puVar10 = (ulong *)(param_3 + 1);
      puVar8 = _DAT_0f56adc0;
      uStack_a0 = uVar1;
      lStack_98 = param_1;
      puStack_90 = puVar10;
      do {
        puStack_100 = *(ulong **)(param_3 + 0x10);
        uStack_f8 = *(ulong *)(param_3 + 8);
        if ((*param_3 & 1) == 0) {
          puStack_100 = puVar10;
          uStack_f8 = (ulong)(*param_3 >> 1);
        }
        bVar11 = (*(byte *)(puVar8 + 5) & 1) != 0;
        puStack_f0 = (undefined *)((long)puVar8 + 0x29);
        if (bVar11) {
          puStack_f0 = (undefined *)puVar8[7];
        }
        puStack_e8 = (undefined *)(ulong)(*(byte *)(puVar8 + 5) >> 1);
        if (bVar11) {
          puStack_e8 = (undefined *)puVar8[6];
        }
        func_0x048ad670(&bStack_148,&puStack_100,2,0x2f);
        uStack_70 = (ulong)(bStack_148 >> 1);
        puStack_78 = &uStack_147;
        if ((bStack_148 & 1) != 0) {
          uStack_70 = uStack_140;
          puStack_78 = puStack_138;
        }
        cVar7 = (**(code **)(*(long *)*param_2 + 0xf8))((long *)*param_2,&puStack_78);
        if (cVar7 != '\0') {
          puStack_58 = puVar8 + 4;
          puStack_88 = puStack_138;
          uStack_80 = uStack_140;
          if ((bStack_148 & 1) == 0) {
            puStack_88 = &uStack_147;
            uStack_80 = (ulong)(bStack_148 >> 1);
          }
          ppuStack_60 = &puStack_130;
          puStack_68 = &bStack_148;
          (**(code **)(*(long *)*param_2 + 0xb0))
                    (&puStack_100,(long *)*param_2,&puStack_88,0x29e,&UNK_0629f770,&puStack_68);
          uStack_50 = 0x85eaac5f456d7e;
          puStack_48 = &UNK_0140f690;
          uStack_40 = 1;
          uStack_38 = 0x343;
          if (bStack_c0 == 0) {
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_a8 = 0;
            func_0x0eedeb80(2,0x2d,&puStack_100,&uStack_b8,&uStack_50);
            if ((uStack_b8 & 1) != 0) {
              func_0x0412a280(uStack_a8,uStack_b8 & 0xfffffffffffffffe);
            }
          }
          lVar5 = lStack_d8;
          puVar10 = puStack_90;
          if ((bStack_c0 & 1) == 0) {
            lVar2 = lStack_d0;
            if (lStack_d8 != 0) {
              while (lVar5 != lVar2) {
                FUN_048b3e80(lVar2 + -0x40);
                lVar2 = lVar2 + -0x40;
              }
              lStack_d0 = lVar5;
              func_0x0412a280(lStack_d8,lStack_c8 - lStack_d8);
            }
            puVar4 = puStack_f0;
            puVar10 = puStack_90;
            puVar3 = puStack_e8;
            if (puStack_f0 != (undefined *)0x0) {
              for (; puVar4 != puVar3; puVar3 = puVar3 + -0x50) {
                if ((puVar3[-8] == '\x01') && ((puVar3[-0x30] & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(puVar3 + -0x20),
                                  *(ulong *)(puVar3 + -0x30) & 0xfffffffffffffffe);
                }
              }
              puStack_e8 = puVar4;
              func_0x0412a280(puStack_f0,lStack_e0 - (long)puStack_f0);
              puVar10 = puStack_90;
            }
          }
        }
        if ((bStack_148 & 1) != 0) {
          func_0x0412a280(puStack_138,CONCAT71(uStack_147,bStack_148) & 0xfffffffffffffffe);
        }
        param_1 = lStack_98;
        puVar6 = (undefined8 *)puVar8[1];
        puVar9 = puVar8;
        if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
          do {
            puVar8 = (undefined8 *)puVar9[2];
            bVar11 = puVar9 != (undefined8 *)*puVar8;
            puVar9 = puVar8;
          } while (bVar11);
        }
        else {
          do {
            puVar8 = puVar6;
            puVar6 = (undefined8 *)*puVar8;
          } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
        }
      } while (puVar8 != (undefined8 *)&DAT_0f56adc8);
      if (puStack_120 != (undefined *)0x0) {
        puStack_100 = puStack_130;
        uStack_f8 = uStack_128;
        puStack_f0 = puStack_120;
        *(ulong **)(uStack_128 + 0x10) = &uStack_f8;
        puStack_130 = &uStack_128;
        uStack_128 = 0;
        puStack_120 = (undefined *)0x0;
        wg_Editor__Services__EditorJigsawService__vslot16(uStack_a0,&uStack_118,&puStack_100,0);
        func_0x0629d8f0(&puStack_100,uStack_f8);
      }
    }
    func_0x0629d8f0(&puStack_130,uStack_128);
    if ((uStack_118 & 1) != 0) {
      func_0x0412a280(uStack_108,uStack_118 & 0xfffffffffffffffe);
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return param_1;
}


