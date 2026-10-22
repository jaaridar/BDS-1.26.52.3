/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe410e40
 * Label: string:terrain_matching
 * Body:  [[0e410e40, 0e410eb2]]
 * Ghidra: FUN_0e410e40
 */


void FUN_0e410e40(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *in_RAX;
  bool in_ZF;
  
  *(undefined1 *)(param_4 + 8) = *(undefined1 *)(param_4 + 8);
  if (in_ZF) {
    in_RAX[2] = (long)&UNK_0e410af0;
    *(undefined4 *)(in_RAX + 4) = 0x883edad8;
    in_RAX[3] = (long)&UNK_0e410db0;
    *(undefined1 *)((long)in_RAX + 0x24) = 1;
    *in_RAX = param_3;
  }
  else {
    in_RAX[2] = (long)&UNK_0e410af0;
    *(undefined4 *)(in_RAX + 4) = 0x883edad8;
    in_RAX[3] = 0;
    if (param_3 == 0) {
      *(undefined1 *)((long)in_RAX + 0x24) = 4;
      *in_RAX = param_4;
    }
    else {
      *(undefined1 *)((long)in_RAX + 0x24) = 3;
      *in_RAX = param_3;
    }
  }
  in_RAX[5] = param_2;
  in_RAX[6] = 0;
  in_RAX[7] = (long)&UNK_0e410a10;
  return;
}


