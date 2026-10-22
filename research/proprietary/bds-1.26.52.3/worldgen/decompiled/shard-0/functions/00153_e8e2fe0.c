/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8e2fe0
 * Label: string:virtual void cereal::internal::TypeSchema<std::optional<Shar
 * Body:  [[0e8e2fe0, 0e8e3115]]
 * Ghidra: FUN_0e8e2fe0
 */


void FUN_0e8e2fe0(void)

{
  undefined8 *in_RAX;
  undefined8 uVar1;
  undefined8 *unaff_RBX;
  long lVar2;
  undefined8 *unaff_R15;
  
  if (in_RAX == (undefined8 *)0x0) {
    in_RAX = (undefined8 *)*unaff_RBX;
    if (*(char *)((long)unaff_RBX + 0x24) == '\x02') {
      in_RAX = unaff_RBX;
    }
    if ((*(int *)(unaff_RBX + 4) != 0x62704747) || (in_RAX == (undefined8 *)0x0)) {
      if ((code *)unaff_RBX[7] == (code *)0x0) {
LAB_0e8e30dc:
        uVar1 = unaff_RBX[5];
        unaff_R15[2] = &UNK_0488e0b0;
        *(undefined4 *)(unaff_R15 + 4) = 0x48b5725f;
        unaff_R15[3] = 0;
        *(undefined1 *)((long)unaff_R15 + 0x24) = 0;
        *unaff_R15 = 0;
        unaff_R15[5] = uVar1;
        unaff_R15[6] = 0;
        unaff_R15[7] = 0;
        return;
      }
      uVar1 = unaff_RBX[5];
      lVar2 = unaff_RBX[6];
      if (lVar2 == 0) {
        (*(code *)unaff_RBX[7])(0);
        lVar2 = unaff_RBX[6];
      }
      in_RAX = (undefined8 *)func_0x0488e200(uVar1,lVar2,0x62704747);
      if (in_RAX == (undefined8 *)0x0) goto LAB_0e8e30dc;
    }
    uVar1 = unaff_RBX[5];
    unaff_R15[2] = &UNK_05dae950;
    *(undefined4 *)(unaff_R15 + 4) = 0xa6c45d85;
    unaff_R15[3] = 0;
    *(undefined1 *)((long)unaff_R15 + 0x24) = 4;
  }
  else {
    uVar1 = unaff_RBX[5];
    unaff_R15[2] = &UNK_05dae950;
    *(undefined4 *)(unaff_R15 + 4) = 0xa6c45d85;
    unaff_R15[3] = 0;
    *(undefined1 *)((long)unaff_R15 + 0x24) = 3;
  }
  *unaff_R15 = in_RAX + 3;
  unaff_R15[5] = uVar1;
  unaff_R15[6] = 0;
  unaff_R15[7] = &UNK_05dae930;
  return;
}


