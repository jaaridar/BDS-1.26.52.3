/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4953e90
 * Label: string:minecraft:surface_builder
 * Body:  [[04953e90, 04953ebd] [04953ec1, 04953f7a]]
 * Ghidra: FUN_04953e90
 */


undefined8
FUN_04953e90(ulong param_1,undefined4 *param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong in_RAX;
  undefined8 uVar1;
  long unaff_RBX;
  ulong uVar2;
  ulong uVar3;
  long unaff_R14;
  ulong uVar4;
  
  if (param_1 < 0xff) {
    *(undefined2 *)(param_2 + 1) = 0x2f63;
    *param_2 = 0x6f72702f;
    uVar2 = in_RAX + 1 & 0xffffffff;
    uVar3 = uVar2;
    uVar4 = in_RAX;
    if ((in_RAX + 1 & 1) != 0) {
      *(byte *)((long)param_2 + in_RAX + 6) =
           (char)param_3 + (char)(uint)((ulong)(param_5 * 0xcccccccd) >> 0x23) * -10 | 0x30;
      param_3 = (ulong)(param_5 * 0xcccccccd) >> 0x23;
      uVar3 = in_RAX;
    }
    while (uVar4 != 0) {
      uVar4 = param_3 & 0xffffffff;
      *(byte *)((long)param_2 + uVar3 + 5) = (char)param_3 + (char)(uVar4 / 10) * -10 | 0x30;
      *(byte *)((long)param_2 + uVar3 + 4) =
           (char)(uVar4 / 10) + (char)((uVar4 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
      uVar3 = uVar3 - 2;
      param_3 = uVar4 / 100;
      uVar4 = uVar3;
    }
    *(undefined1 *)((long)param_2 + (ulong)((int)in_RAX + 7)) = 0x2f;
    func_0x0eee2f00((long)param_2 + uVar2 + 7,param_4);
    *(undefined1 *)((long)param_2 + unaff_RBX + unaff_R14) = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


