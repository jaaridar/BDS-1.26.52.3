/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf09160 (ELF vaddr 0xce09160)
 * Label: JigsawBlockActor::vslot2
 * Body:  [[0ce3dbb0, 0ce3debf] [0cf09160, 0cf091a1]]
 * Ghidra: wg_JigsawBlockActor__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x0ce3de86) */

void wg_JigsawBlockActor__vslot2(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 in_RAX;
  long lVar7;
  undefined uStack_69;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_40;
  char cStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = (undefined *)0xcf09186;
  uStack_28 = in_RAX;
  func_0x0d3b00e0(param_1 + 0x1b,param_3,param_4);
  func_0x0cf74830(param_1,param_2,param_3,param_4);
  uStack_68 = &UNK_012a7a73;
  uStack_60 = 10;
  lVar4 = param_3 + 8;
  lVar3 = func_0x0d6c97a0(lVar4,&uStack_68);
  param_3 = param_3 + 0x10;
  if (lVar3 != param_3) {
    if ((ulong)*(uint *)(lVar3 + 0x60) == 0xffffffff) goto LAB_0ce3dea5;
    puStack_30 = &uStack_69;
    lVar3 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar3 + 0x60) * 8))
                      (&puStack_30,lVar3 + 0x38);
    if (lVar3 != 0) {
      puStack_30 = &UNK_012a7a73;
      uStack_28 = 10;
      lVar3 = func_0x0d6c97a0(lVar4,&puStack_30);
      if (lVar3 == param_3) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (*(int *)(lVar3 + 0x60) == 8) {
          lVar7 = lVar3 + 0x38;
        }
      }
      pbVar5 = &UNK_01e79d90;
      if (lVar7 != 0) {
        pbVar5 = (byte *)(lVar7 + 8);
      }
      if ((*pbVar5 & 1) == 0) {
        lStack_58 = *(long *)(pbVar5 + 0x10);
        uStack_68 = *(undefined **)pbVar5;
        uStack_60 = *(long *)(pbVar5 + 8);
      }
      else {
        func_0x0412e5e0(&uStack_68,*(undefined8 *)(pbVar5 + 0x10),*(undefined8 *)(pbVar5 + 8));
      }
      bStack_50 = 0;
      cStack_38 = '\0';
      (**(code **)(*param_1 + 0x1a8))(param_1,&uStack_68);
      if ((cStack_38 == '\x01') && ((bStack_50 & 1) != 0)) {
        func_0x0412a280(uStack_40,CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_68 & 1) != 0) {
        func_0x0412a280(lStack_58,(ulong)uStack_68 & 0xfffffffffffffffe);
      }
    }
  }
  uStack_68 = &DAT_013b0565;
  uStack_60 = 0x12;
  lVar3 = func_0x0d6c97a0(lVar4,&uStack_68);
  if (lVar3 != param_3) {
    if ((ulong)*(uint *)(lVar3 + 0x60) == 0xffffffff) {
LAB_0ce3dea5:
      uVar6 = func_0x04931450();
      func_0x09af1a10(&uStack_68);
      func_0x0eee2d70(uVar6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puStack_30 = &uStack_69;
    lVar3 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar3 + 0x60) * 8))
                      (&puStack_30,lVar3 + 0x38);
    if (lVar3 != 0) {
      uStack_68 = &DAT_013b0565;
      uStack_60 = 0x12;
      lVar4 = func_0x0d6c97a0(lVar4,&uStack_68);
      if (lVar4 == param_3) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (*(int *)(lVar4 + 0x60) == 8) {
          lVar3 = lVar4 + 0x38;
        }
      }
      pbVar5 = &UNK_01e79d90;
      if (lVar3 != 0) {
        pbVar5 = (byte *)(lVar3 + 8);
      }
      if ((*pbVar5 & 1) == 0) {
        lStack_58 = *(long *)(pbVar5 + 0x10);
        uStack_68 = *(undefined **)pbVar5;
        uStack_60 = *(long *)(pbVar5 + 8);
        cVar1 = (char)param_1[0x17];
      }
      else {
        func_0x0412e5e0(&uStack_68,*(undefined8 *)(pbVar5 + 0x10),*(undefined8 *)(pbVar5 + 8));
        cVar1 = (char)param_1[0x17];
      }
      if (cVar1 == '\0') {
        param_1[0x16] = lStack_58;
        param_1[0x14] = (long)uStack_68;
        param_1[0x15] = uStack_60;
        *(undefined1 *)(param_1 + 0x17) = 1;
      }
      else {
        bStack_50 = 1;
        pbVar5 = (byte *)(param_1 + 0x14);
        if ((*pbVar5 & 1) == 0) {
          param_1[0x16] = lStack_58;
          uStack_68._4_4_ = (undefined4)((ulong)uStack_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulong)uStack_60 >> 0x20);
          *(undefined4 *)pbVar5 = (undefined4)uStack_68;
          *(undefined4 *)((long)param_1 + 0xa4) = uStack_68._4_4_;
          *(undefined4 *)(param_1 + 0x15) = (undefined4)uStack_60;
          *(undefined4 *)((long)param_1 + 0xac) = uStack_60._4_4_;
        }
        else {
          func_0x0412a280(param_1[0x16],param_1[0x14] & 0xfffffffffffffffe);
          param_1[0x16] = lStack_58;
          *(undefined4 *)pbVar5 = (undefined4)uStack_68;
          *(undefined4 *)((long)param_1 + 0xa4) = uStack_68._4_4_;
          *(undefined4 *)(param_1 + 0x15) = (undefined4)uStack_60;
          *(undefined4 *)((long)param_1 + 0xac) = uStack_60._4_4_;
        }
      }
    }
  }
  return;
}


