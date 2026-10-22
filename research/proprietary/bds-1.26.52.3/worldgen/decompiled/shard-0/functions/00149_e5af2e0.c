/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe5af2e0
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e5af2e0, 0e5af35e] [0e5af363, 0e5af3a7]]
 * Ghidra: FUN_0e5af2e0
 */


/* WARNING: Instruction at (ram,0x0e5af319) overlaps instruction at (ram,0x0e5af318)
    */
/* WARNING: Control flow encountered bad instruction data */

ulong FUN_0e5af2e0(void)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long in_RCX;
  undefined8 *unaff_RBX;
  
  pbVar1 = (byte *)(in_RCX + -1);
  bVar6 = (byte)in_RCX & 7;
  *pbVar1 = *pbVar1 << bVar6 | *pbVar1 >> 8 - bVar6;
  if ((byte)in_RCX < *(byte *)(in_RCX + -0x75)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar12 = (undefined8 *)func_0x0488e200();
  uVar5 = *(uint *)(puVar12 + 2);
  if ((ulong)uVar5 != 0xffffffff) {
    if (uVar5 == 0x10) {
      uVar7 = *(undefined4 *)unaff_RBX;
      uVar8 = *(undefined4 *)((long)unaff_RBX + 4);
      uVar9 = *(undefined4 *)(unaff_RBX + 1);
      uVar10 = *(undefined4 *)((long)unaff_RBX + 0xc);
      if (unaff_RBX[1] != 0) {
        LOCK();
        plVar2 = (long *)(unaff_RBX[1] + 8);
        *plVar2 = *plVar2 + 1;
        UNLOCK();
      }
      plVar2 = (long *)puVar12[1];
      *(undefined4 *)puVar12 = uVar7;
      *(undefined4 *)((long)puVar12 + 4) = uVar8;
      *(undefined4 *)(puVar12 + 1) = uVar9;
      *(undefined4 *)((long)puVar12 + 0xc) = uVar10;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar3 = plVar2 + 1;
        lVar4 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          func_0x0412c2d0(plVar2);
        }
      }
      goto LAB_0e5af39c;
    }
    (**(code **)(&UNK_0f4bee80 + (ulong)uVar5 * 8))(&stack0x00000007,puVar12);
  }
  *(undefined4 *)(puVar12 + 2) = 0xffffffff;
  lVar4 = unaff_RBX[1];
  uVar11 = unaff_RBX[1];
  *puVar12 = *unaff_RBX;
  puVar12[1] = uVar11;
  if (lVar4 != 0) {
    LOCK();
    plVar2 = (long *)(lVar4 + 8);
    *plVar2 = *plVar2 + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar12 + 2) = 0x10;
LAB_0e5af39c:
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),1) & 0xffffffff;
}


