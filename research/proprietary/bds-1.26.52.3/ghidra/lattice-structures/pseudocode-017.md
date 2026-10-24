# FUN_0d22fb60

- entry: `0xd22fb60`
- body size: 247 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d22fb60(void)

{
  byte bVar1;
  int iVar2;
  long in_RAX;
  long lVar3;
  ulong uVar4;
  long *unaff_RBX;
  undefined8 unaff_RBP;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_R12;
  long unaff_R14;
  long lStack0000000000000048;
  undefined4 uStack0000000000000050;
  
  lStack0000000000000048 = in_RAX + unaff_R14;
  uStack0000000000000050 = (undefined4)unaff_RBP;
  lVar3 = (**(code **)(*unaff_RBX + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x68);
  if (*(long *)(lVar3 + 200) == _DAT_0f713f00) {
    uVar5 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if ((*(long *)(lVar3 + 0xe8) == unaff_R12) && (_DAT_0f713f20 == lVar3 + 200)) goto LAB_0d22fc40;
    bVar1 = *(byte *)(lVar3 + 0xd0);
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(lVar3 + 0xd8);
    }
    uVar6 = _DAT_0f713f10;
    if ((DAT_0f713f08 & 1) == 0) {
      uVar6 = (ulong)(DAT_0f713f08 >> 1);
    }
    if (uVar4 == uVar6) {
      if ((bVar1 & 1) == 0) {
        lVar8 = lVar3 + 0xd1;
      }
      else {
        lVar8 = *(long *)(lVar3 + 0xe0);
      }
      uVar7 = _DAT_0f713f18;
      if ((DAT_0f713f08 & 1) == 0) {
        uVar7 = 0xf713f09;
      }
      iVar2 = bcmp(lVar8,uVar7);
      if (iVar2 == 0) {
        *(long *)(lVar3 + 0xe8) = unaff_R12;
        _DAT_0f713f20 = lVar3 + 200;
        goto LAB_0d22fc40;
      }
    }
  }
  *(undefined8 *)(lVar3 + 0xe8) = 0;
  uVar5 = 0;
LAB_0d22fc40:
  return uVar5 & 0xffffffff;
}


```
