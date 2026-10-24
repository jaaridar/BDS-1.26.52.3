# FUN_0e40207f

- entry: `0xe40207f`
- body size: 117 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Instruction at (ram,0x0e402091) overlaps instruction at (ram,0x0e402089)
    */

void FUN_0e40207f(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 char param_5)

{
  byte bVar1;
  int iVar2;
  byte *in_RAX;
  long unaff_RBX;
  byte in_CF;
  bool in_SF;
  undefined8 in_XMM0_Qb;
  
  iVar2 = (int)in_RAX;
  if (in_SF) {
    bVar1 = (byte)in_RAX;
    *in_RAX = *in_RAX + bVar1;
    in_RAX[-0x48] = in_RAX[-0x48] + param_5;
    *(int *)in_RAX = *(int *)in_RAX + iVar2;
    *in_RAX = *in_RAX + bVar1;
    *(int *)in_RAX = *(int *)in_RAX + iVar2;
    in_CF = CARRY1(*in_RAX,bVar1);
    *in_RAX = *in_RAX + bVar1;
  }
  *(uint *)(param_2 + 0xd) = *(int *)(param_2 + 0xd) + iVar2 + (uint)in_CF;
  param_2[0xb] = param_1;
  param_2[0xc] = in_XMM0_Qb;
  param_2[0x23] = 0;
  *param_2 = 0x100000001;
  param_2[1] = param_1;
  param_2[2] = in_XMM0_Qb;
  param_2[3] = param_1;
  param_2[4] = in_XMM0_Qb;
  param_2[5] = param_1;
  param_2[6] = in_XMM0_Qb;
  param_2[7] = param_1;
  param_2[8] = in_XMM0_Qb;
  param_2[9] = param_1;
  param_2[10] = in_XMM0_Qb;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1e) = 2;
  func_0x04863060(param_2 + 0x20,0);
  func_0x04863060(unaff_RBX + 0x110,0);
  return;
}


```
