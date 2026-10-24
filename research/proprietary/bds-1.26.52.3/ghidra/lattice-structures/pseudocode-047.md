# FUN_04e85ae0

- entry: `0x4e85ae0`
- body size: 934 bytes
- callers: `FUN_04e84570`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04e85ae0(long param_1,long param_2,byte *param_3,undefined8 param_4,undefined4 param_5,
                 undefined8 param_6)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  byte *pbStack_100;
  long lStack_f8;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined8 uStack_c7;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long alStack_58 [2];
  undefined1 auStack_48 [24];
  
  lVar6 = *(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8);
  lStack_f8 = param_2;
  uStack_ec = param_5;
  lStack_68 = param_1;
  if (lVar6 != 0) {
    uStack_70 = (lVar6 >> 3) * -0x30c30c30c30c30c3;
    pbStack_100 = param_3 + 1;
    uVar10 = 0;
    do {
      lVar6 = *(long *)(lStack_68 + 0xb8);
      pbVar8 = *(byte **)(param_3 + 0x10);
      uVar3 = *(ulong *)(param_3 + 8);
      if ((*param_3 & 1) == 0) {
        pbVar8 = pbStack_100;
        uVar3 = (ulong)(*param_3 >> 1);
      }
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_e8 = (byte *)0x0;
      uStack_e0 = 0;
      lStack_d8 = 0;
      uStack_d0 = 0;
      uStack_cf = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      cVar5 = func_0x04af20a0(pbVar8,pbVar8 + uVar3,&uStack_e8,lVar6 + uVar10 * 0xa8 + 0x38,0);
      if (uStack_e8 != (byte *)0x0) {
        uStack_e0 = (ulong)uStack_e8;
        func_0x0412a280(uStack_e8,lStack_d8 - (long)uStack_e8);
      }
      if (cVar5 != '\0') {
        lVar6 = lVar6 + uVar10 * 0xa8;
        lVar9 = *(long *)(lVar6 + 0x88);
        lVar7 = *(long *)(lVar6 + 0x90);
        while( true ) {
          if (lVar9 == lVar7) goto LAB_04e85c99;
          cVar5 = (**(code **)(**(long **)(lVar9 + 0x28) + 0x10))(*(long **)(lVar9 + 0x28),param_4);
          if (cVar5 != '\0') break;
          lVar9 = lVar9 + 0x38;
        }
        lVar9 = *(long *)(lVar9 + 0x28);
        if (lVar9 == 0) {
LAB_04e85c99:
          bVar11 = (*param_3 & 1) != 0;
          uStack_e8 = pbStack_100;
          if (bVar11) {
            uStack_e8 = *(byte **)(param_3 + 0x10);
          }
          uStack_e0 = (ulong)(*param_3 >> 1);
          if (bVar11) {
            uStack_e0 = *(ulong *)(param_3 + 8);
          }
          lStack_d8 = CONCAT71(lStack_d8._1_7_,1);
          uStack_118 = 0;
          uVar12 = (undefined4)uStack_e8;
          uVar13 = (undefined4)uStack_e0;
          lVar9 = lStack_d8;
          FUN_0eeb79f0(auStack_48,&uStack_118);
          if ((uStack_118 >> 0x37 & 1) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_118 & 0xff00ffffffffffff) - 8)
            ;
          }
          uVar2 = *(undefined4 *)(lStack_f8 + 8);
          lVar7 = *(long *)(lVar6 + 0x88);
          lVar6 = *(long *)(lVar6 + 0x90);
          uStack_118 = 0;
          uStack_110 = 0;
          lStack_108 = 0;
          if (lVar7 == lVar6) {
            lStack_60 = (long)&uStack_118 + 1;
          }
          else {
            pbStack_100 = (byte *)CONCAT44(pbStack_100._4_4_,uVar2);
            do {
              if ((*(byte *)(lVar7 + 8) & 1) == 0) {
                alStack_58[0] = lVar7 + 9;
              }
              else {
                alStack_58[0] = *(long *)(lVar7 + 0x18);
              }
              func_0x0470d9a0(&uStack_e8,&UNK_0134024e,5,0xc,alStack_58,param_6,uVar12,uVar13,lVar9)
              ;
              uVar10 = (ulong)uStack_e8 >> 1 & 0x7f;
              lVar4 = (long)&uStack_e8 + 1;
              if (((ulong)uStack_e8 & 1) != 0) {
                uVar10 = uStack_e0;
                lVar4 = lStack_d8;
              }
              FUN_0412f8c0(&uStack_118,lVar4,uVar10);
              if (((ulong)uStack_e8 & 1) != 0) {
                func_0x0412a280(lStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
              }
              lVar7 = lVar7 + 0x38;
            } while (lVar7 != lVar6);
            lStack_60 = lStack_108;
            if ((uStack_118 & 1) == 0) {
              lStack_60 = (long)&uStack_118 + 1;
            }
            uVar2 = pbStack_100._0_4_;
          }
          FUN_04b0ace0(1,3,uVar2,&UNK_013c4ba9,&lStack_60);
          if ((uStack_118 & 1) != 0) {
            func_0x0412a280(lStack_108,uStack_118 & 0xfffffffffffffffe);
          }
          FUN_0eeb81b0(auStack_48);
          return 0;
        }
        if ((*(long *)(lVar9 + 0x10) == 0) ||
           (cVar5 = (**(code **)(*(long *)(lVar9 + 0x10) + 0x10))(lVar9 + 0x10,param_4),
           cVar5 != '\0')) {
          puVar1 = (ulong *)(*(long *)(lStack_f8 + 0x40) + (uVar10 >> 6) * 8);
          *puVar1 = *puVar1 | 1L << ((byte)uVar10 & 0x3f);
          return lVar9;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uStack_70);
  }
  if ((char)uStack_ec == '\0') {
    func_0x0b63c650(param_3,*(undefined4 *)(lStack_f8 + 8),param_4);
  }
  return 0;
}


```
