/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412f770 (ELF vaddr 0x402f770)
 * Label: callee-of:0xd1d5450
 * Body:  [[0412f770, 0412f8a1]]
 * Ghidra: FUN_0412f770
 */


/* WARNING: Possible PIC construction at 0x0412f873: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0412f878) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0412f770(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong in_RAX;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar1 = *param_1;
  uVar5 = (uVar1 & 0xfffffffffffffffe) - 1;
  uVar8 = 0x16;
  if ((*param_1 & 1) != 0) {
    uVar8 = uVar5;
  }
  if ((uVar1 & 1) == 0) {
    uVar7 = (ulong)((uint)(uVar1 >> 1) & 0x7f);
    if (param_2 < 0x17) goto LAB_0412f7ce;
LAB_0412f7ab:
    uStack_38 = param_2 + 1;
    if (uVar8 < param_2) {
      uStack_40 = 0x412f7b9;
      uStack_38 = in_RAX;
      pbVar3 = (byte *)func_0x0ee32660();
    }
    else {
      uStack_40 = 0x412f7ec;
      pbVar3 = (byte *)func_0x0ee32660();
      pbVar4 = (byte *)0x16;
      if ((uVar1 & 1) == 0) {
        uVar5 = 0x16;
      }
      if (uVar5 < param_2) goto SUB_0412a280;
    }
    bVar6 = (byte)uVar1 & 1;
    if ((uVar1 & 1) == 0) {
      pbVar4 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar4 = (byte *)param_1[2];
    }
  }
  else {
    uVar7 = param_1[1];
    if (0x16 < param_2) goto LAB_0412f7ab;
LAB_0412f7ce:
    pbVar3 = (byte *)((long)param_1 + 1);
    pbVar4 = (byte *)param_1[2];
    bVar6 = 1;
    uStack_38 = in_RAX;
  }
  if (uVar7 != 0xffffffffffffffff) {
    uStack_40 = 0x412f84a;
    uStack_38 = uVar8;
    func_0x0eee2ee0(pbVar3,pbVar4);
  }
  if (bVar6 == 0) {
    if (param_2 < 0x17) {
      *(char *)param_1 = (char)uVar7 * '\x02';
    }
    else {
      *param_1 = param_2 + 1 | 1;
      param_1[1] = uVar7;
      param_1[2] = (ulong)pbVar3;
    }
    return pbVar4;
  }
  register0x00000020 = (BADSPACEBASE *)&uStack_40;
  uStack_40 = 0x412f878;
  pbVar3 = pbVar4;
SUB_0412a280:
  *(byte **)((long)register0x00000020 + -8) = pbVar4;
  if (pbVar3 != (byte *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,pbVar3);
  }
  return *(byte **)((long)register0x00000020 + -8);
}


