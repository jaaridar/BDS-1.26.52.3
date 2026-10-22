/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca6a1e0 (ELF vaddr 0xc96a1e0)
 * Label: Dimension::vslot44
 * Body:  [[0ca6a1e0, 0ca6a537]]
 * Ghidra: wg_Dimension__vslot44
 */


undefined8 * wg_Dimension__vslot44(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  float fVar7;
  ulong uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_bc;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *pbStack_78;
  undefined8 uStack_68;
  int iStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar3 = *(long **)(param_2 + 0x1b0);
  if (plVar3 == (long *)0x0) goto LAB_0ca6a4ce;
  uStack_bc = *(undefined4 *)(param_3 + 1);
  uStack_58 = *param_3;
  uStack_50 = 0;
  uStack_48 = floorf();
  fVar7 = (float)floorf(uStack_58._4_4_);
  uStack_68 = CONCAT44((int)fVar7,(int)(float)uStack_48);
  fVar7 = (float)floorf(uStack_bc);
  iStack_60 = (int)fVar7;
  (**(code **)(*plVar3 + 0x150))(auStack_90,plVar3,&uStack_68);
  if ((uStack_88 & 1) == 0) {
    pbStack_d0 = pbStack_78;
    uStack_e0 = uStack_88;
    uStack_dc = uStack_84;
    uStack_d8 = uStack_80;
    uStack_d4 = uStack_7c;
  }
  else {
    func_0x0412e5e0(&uStack_e0,pbStack_78,CONCAT44(uStack_7c,uStack_80));
  }
  uStack_c8 = 0;
  bVar5 = (byte)uStack_e0;
  if ((uStack_e0 & 1) == 0) {
    if ((byte)uStack_e0 >> 1 != 0) goto LAB_0ca6a2eb;
LAB_0ca6a3e6:
    uStack_e8 = 0;
  }
  else {
    if (CONCAT44(uStack_d4,uStack_d8) == 0) goto LAB_0ca6a3e6;
LAB_0ca6a2eb:
    if ((uStack_e0 & 1) == 0) {
      pbVar6 = (byte *)((long)&uStack_e0 + 1);
      if (pbVar6 == (byte *)0x0) goto LAB_0ca6a404;
LAB_0ca6a303:
      if (*pbVar6 == 0) goto LAB_0ca6a3e6;
      uStack_e8 = 0xcbf29ce484222325;
      uVar2 = func_0x0eee2e90(pbVar6);
      if (uVar2 != 0) {
        uVar4 = (ulong)((uint)uVar2 & 7);
        if (7 < uVar2) {
          uVar2 = uVar2 & 0xfffffffffffffff8;
          do {
            uStack_e8 = (((((((uStack_e8 * 0x100000001b3 ^ (ulong)*pbVar6) * 0x100000001b3 ^
                             (ulong)pbVar6[1]) * 0x100000001b3 ^ (ulong)pbVar6[2]) * 0x100000001b3 ^
                           (ulong)pbVar6[3]) * 0x100000001b3 ^ (ulong)pbVar6[4]) * 0x100000001b3 ^
                         (ulong)pbVar6[5]) * 0x100000001b3 ^ (ulong)pbVar6[6]) * 0x100000001b3 ^
                        (ulong)pbVar6[7];
            pbVar6 = pbVar6 + 8;
            uVar2 = uVar2 - 8;
          } while (uVar2 != 0);
        }
        if (uVar4 != 0) {
          uVar2 = 0;
          do {
            uStack_e8 = uStack_e8 * 0x100000001b3 ^ (ulong)pbVar6[uVar2];
            uVar2 = uVar2 + 1;
          } while (uVar4 != uVar2);
        }
      }
    }
    else {
      pbVar6 = pbStack_d0;
      if (pbStack_d0 != (byte *)0x0) goto LAB_0ca6a303;
LAB_0ca6a404:
      uStack_e8 = 0;
    }
  }
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
    bVar5 = (byte)uStack_e0;
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  pbStack_a0 = (byte *)0x0;
  uStack_98 = 0;
  if ((bVar5 & 1) == 0) {
    pbStack_a0 = pbStack_d0;
    uStack_b0 = CONCAT44(uStack_dc,uStack_e0);
    uStack_a8 = CONCAT44(uStack_d4,uStack_d8);
  }
  else {
    FUN_04885070(&uStack_b0,pbStack_d0,CONCAT44(uStack_d4,uStack_d8));
  }
  uStack_b8 = uStack_e8;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x168))(plVar3,&uStack_b8);
  if ((uStack_b0 & 1) != 0) {
    func_0x0412a280(pbStack_a0,uStack_b0 & 0xfffffffffffffffe);
  }
  if (plVar3 != (long *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (cVar1 == '\0') {
      if ((uStack_e0 & 1) == 0) {
        param_1[2] = pbStack_d0;
        *param_1 = CONCAT44(uStack_dc,uStack_e0);
        param_1[1] = CONCAT44(uStack_d4,uStack_d8);
        *(undefined1 *)(param_1 + 3) = 1;
        return param_1;
      }
      func_0x0412e5e0(param_1,pbStack_d0,CONCAT44(uStack_d4,uStack_d8));
      *(undefined1 *)(param_1 + 3) = 1;
      if ((uStack_e0 & 1) == 0) {
        return param_1;
      }
      func_0x0412a280(pbStack_d0,CONCAT44(uStack_dc,uStack_e0) & 0xfffffffffffffffe);
      return param_1;
    }
  }
  if ((uStack_e0 & 1) != 0) {
    func_0x0412a280(pbStack_d0,CONCAT44(uStack_dc,uStack_e0) & 0xfffffffffffffffe);
  }
LAB_0ca6a4ce:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}


