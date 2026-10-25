# FUN_0c455510

- entry: `0xc455510`
- body size: 904 bytes
- callers: `FUN_0c4510a0`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0c455510(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar1 = *(ushort *)(param_2 + 0x14e);
  uVar6 = 0xff - uVar1;
  if (uVar1 < 0x100) {
    uVar6 = uVar1;
  }
  FUN_0c455d80(param_1,(int)(short)uVar6,param_3,0,1);
  plVar5 = *(long **)(param_1 + 8);
  if ((plVar5 != (long *)0x0) && (plVar2 = (long *)*plVar5, plVar2 != (long *)0x0)) {
    bVar4 = DAT_0f72b558;
    if ((*(byte *)(plVar2 + 0x26) & 1) == 0) {
      if (((*(byte *)((long)plVar2 + 0x11f) | DAT_0f72b547) & 1) == 0) {
        plVar5 = (long *)plVar2[0x24];
        if (((ulong)plVar5 >> 0x37 & 1) == 0) {
          uVar8 = (ulong)((ushort)((ulong)plVar5 >> 0x30) & 0x7f);
        }
        else {
          uVar8 = *(ulong *)(((ulong)plVar5 & 0xff00ffffffffffff) - 8);
        }
        lVar3 = plVar2[0x23];
        if ((_DAT_0f72b548 & 0x80000000000000) == 0) {
          uVar9 = (ulong)((ushort)(_DAT_0f72b548 >> 0x30) & 0x7f);
        }
        else {
          uVar9 = *(ulong *)((_DAT_0f72b548 & 0xff00ffffffffffff) - 8);
        }
        auVar11._0_2_ = -(ushort)((short)lVar3 == (short)_DAT_0f72b540);
        auVar11._2_2_ =
             -(ushort)((short)((ulong)lVar3 >> 0x10) == (short)((uint)_DAT_0f72b540 >> 0x10));
        auVar11._4_2_ = -(ushort)((short)((ulong)lVar3 >> 0x20) == _DAT_0f72b544);
        auVar11._6_2_ =
             -(ushort)((short)((ulong)lVar3 >> 0x30) == CONCAT11(DAT_0f72b547,uRam000000000f72b546))
        ;
        auVar11._8_2_ = 0xffff;
        auVar11._10_2_ = 0xffff;
        auVar11._12_2_ = 0xffff;
        auVar11._14_2_ = 0xffff;
        auVar11 = pshuflw(auVar11,auVar11,0x50);
        auVar12._0_4_ = auVar11._0_4_;
        auVar12._4_4_ = auVar12._0_4_;
        auVar12._8_4_ = auVar11._4_4_;
        auVar12._12_4_ = auVar11._4_4_;
        uVar10 = movmskpd(param_6,auVar12);
        if ((uVar10 & 1) == 0) {
          return plVar5;
        }
        if ((byte)((byte)uVar10 >> 1) == 0) {
          return plVar5;
        }
        if (*(short *)((long)plVar2 + 0x11c) != _DAT_0f72b544) {
          return plVar5;
        }
        if (uVar8 != uVar9) {
          return plVar5;
        }
        plVar5 = (long *)bcmp((ulong)plVar5 & 0xff00ffffffffffff,_DAT_0f72b548 & 0xff00ffffffffffff)
        ;
        if ((int)plVar5 != 0) {
          return plVar5;
        }
        goto LAB_0c455654;
      }
      bVar4 = *(byte *)((long)plVar2 + 0x11f) & DAT_0f72b547;
    }
    plVar5 = (long *)(ulong)bVar4;
    if (bVar4 != 0) {
LAB_0c455654:
      plVar2[0x23] = *(long *)(param_2 + 0x150);
      if (((ulong)plVar2[0x24] >> 0x37 & 1) == 0) {
        plVar2[0x24] = 0;
        uVar8 = *(ulong *)(param_2 + 0x158);
      }
      else {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar2[0x24] & 0xff00ffffffffffffU) - 8);
        plVar2[0x24] = 0;
        uVar8 = *(ulong *)(param_2 + 0x158);
      }
      if ((uVar8 & 0x80000000000000) == 0) {
        plVar2[0x24] = uVar8;
        uVar8 = plVar2[0x25];
      }
      else {
        lVar3 = *(long *)((uVar8 & 0xff00ffffffffffff) - 8);
        lVar7 = lVar3 + 9;
        plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
        if (plVar5 == (long *)0x0 && lVar7 != 0) {
          FUN_0eec74c0(lVar7,8);
        }
        *plVar5 = lVar3;
        memcpy(plVar5 + 1,uVar8 & 0xff00ffffffffffff,lVar3);
        *(undefined1 *)((long)plVar5 + lVar3 + 8) = 0;
        plVar2[0x24] = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        uVar8 = plVar2[0x25];
      }
      if ((uVar8 & 0x80000000000000) == 0) {
        plVar2[0x25] = 0;
        uVar8 = *(ulong *)(param_2 + 0x160);
      }
      else {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar8 & 0xff00ffffffffffff) - 8);
        plVar2[0x25] = 0;
        uVar8 = *(ulong *)(param_2 + 0x160);
      }
      if ((uVar8 & 0x80000000000000) != 0) {
        lVar3 = *(long *)((uVar8 & 0xff00ffffffffffff) - 8);
        lVar7 = lVar3 + 9;
        plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
        if (plVar5 == (long *)0x0 && lVar7 != 0) {
          FUN_0eec74c0(lVar7,8);
        }
        *plVar5 = lVar3;
        memcpy(plVar5 + 1,uVar8 & 0xff00ffffffffffff,lVar3);
        *(undefined1 *)((long)plVar5 + lVar3 + 8) = 0;
        uVar8 = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      plVar2[0x25] = uVar8;
      *(undefined1 *)(plVar2 + 0x26) = *(undefined1 *)(param_2 + 0x168);
      return plVar2;
    }
  }
  return plVar5;
}


```
