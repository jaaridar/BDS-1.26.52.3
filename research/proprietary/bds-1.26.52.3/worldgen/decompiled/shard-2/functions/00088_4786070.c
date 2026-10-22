/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4786070
 * Label: callee-of:0x517a720
 * Body:  [[04786070, 047861c2] [047861ce, 047861de] [04786572, 047865b4] [04786769, 04786770] [047868ba, 04786912]]
 * Ghidra: FUN_04786070
 */


undefined8 FUN_04786070(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *in_RAX;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack0000000000000010;
  long in_stack_00000018;
  
  uStack0000000000000010 = *(undefined8 *)(in_RAX + 2);
  puVar4 = (undefined8 *)func_0x047672c0(0,&stack0x00000010,(long)*in_RAX);
  puVar8 = (undefined8 *)0x0;
  if ((puVar4 != (undefined8 *)0x0) && (lVar5 = func_0x04790830(), puVar8 = puVar4, lVar5 != 0)) {
    uVar1 = func_0x047faea0(*puVar4);
    uVar6 = func_0x047fad20(uVar1);
    lVar7 = func_0x047db660(uVar6);
    if ((lVar7 != 0) &&
       (((uVar2 = func_0x047d8dd0(lVar7), (uVar2 & 0xf0007) == 0x10002 &&
         (iVar3 = func_0x047d8530(lVar5,lVar7,0,0,0), iVar3 != 0)) &&
        (iVar3 = func_0x047d8e80(lVar5,puVar4[1]), 0 < iVar3)))) {
      func_0x047d9300(lVar5);
      iVar3 = func_0x047e0350();
      if (0 < iVar3) {
        uVar1 = func_0x047d90f0(lVar7);
        func_0x047fac30(uVar1);
        iVar3 = func_0x047e0350();
        if (0 < iVar3) {
          if (in_stack_00000018 == 0) {
            lVar5 = 0;
          }
          else {
            iVar3 = func_0x04762020();
            uVar6 = func_0x04762050(in_stack_00000018);
            lVar5 = func_0x047f94e0(uVar6,(long)iVar3,&UNK_0144654a,0x2dd);
            if (lVar5 == 0) goto LAB_04786572;
          }
          iVar3 = func_0x047e0350();
          lVar7 = 0;
          if (iVar3 < 1) {
            lVar7 = lVar5;
          }
          func_0x047672f0(puVar4);
          func_0x047f29a0(lVar7,&UNK_0144654a,0x2e9);
          if (0 < iVar3) {
            return 1;
          }
          goto LAB_0478658d;
        }
      }
    }
  }
LAB_04786572:
  func_0x047672f0(puVar8);
  func_0x047f29a0(0,&UNK_0144654a,0x2e9);
LAB_0478658d:
  func_0x047c6f20(5,0x72,0x71,&UNK_0144654a,0x303);
  return 0;
}


