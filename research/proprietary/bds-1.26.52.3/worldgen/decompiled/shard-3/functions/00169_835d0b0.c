/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x835d0b0
 * Label: JigsawStructureDataPacket::vslot1
 * Body:  [[0835cff1, 0835cff7] [0835d0b0, 0835d132]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot1
 */


undefined8 wg_JigsawStructureDataPacket__vslot1(void)

{
  code *in_RAX;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_RBX;
  long lVar3;
  long unaff_R14;
  long unaff_R15;
  
  (*in_RAX)();
  if (unaff_R15 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)*unaff_RBX;
    if (*(char *)((long)unaff_RBX + 0x24) == '\x02') {
      puVar1 = unaff_RBX;
    }
    if (puVar1 == (undefined8 *)0x0 || *(int *)(unaff_RBX + 4) != 0x5aa4b9db) {
      uVar2 = unaff_RBX[5];
      lVar3 = unaff_RBX[6];
      if (lVar3 == 0) {
        (*(code *)unaff_RBX[7])(0);
        lVar3 = unaff_RBX[6];
      }
      puVar1 = (undefined8 *)func_0x0488e200(uVar2,lVar3,0x5aa4b9db);
    }
    *(undefined1 *)(unaff_R14 + 0x48) = *(undefined1 *)puVar1;
    uVar2 = 1;
  }
  return uVar2;
}


