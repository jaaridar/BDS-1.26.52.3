/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9b9150 (ELF vaddr 0xc8b9150)
 * Label: callee-of:0xd1de2e0
 * Body:  [[0c9b9150, 0c9b9165] [0c9b9170, 0c9b91b6] [0c9b91c0, 0c9b91fb] [0c9b9200, 0c9b92a2]]
 * Ghidra: FUN_0c9b9150
 */


void FUN_0c9b9150(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  do {
    if (param_2 == (undefined8 *)0x0) {
      return;
    }
    puVar2 = (undefined8 *)*param_2;
    lVar3 = param_2[5];
    if (lVar3 != 0) {
      lVar5 = param_2[6];
      lVar4 = lVar3;
      if (lVar3 != lVar5) {
        do {
          if ((*(byte *)(lVar5 + -0x40) & 1) == 0) {
            if ((*(byte *)(lVar5 + -0x60) & 1) == 0) goto LAB_0c9b91dc;
LAB_0c9b921b:
            FUN_0412a280(*(undefined8 *)(lVar5 + -0x50),
                         *(ulong *)(lVar5 + -0x60) & 0xfffffffffffffffe);
            if ((*(byte *)(lVar5 + -0x78) & 1) != 0) goto LAB_0c9b9236;
LAB_0c9b91e4:
            if ((*(byte *)(lVar5 + -0x90) & 1) == 0) goto LAB_0c9b91ef;
LAB_0c9b9254:
            FUN_0412a280(*(undefined8 *)(lVar5 + -0x80),
                         *(ulong *)(lVar5 + -0x90) & 0xfffffffffffffffe);
            bVar1 = *(byte *)(lVar5 + -0xa8);
          }
          else {
            FUN_0412a280(*(undefined8 *)(lVar5 + -0x30),
                         *(ulong *)(lVar5 + -0x40) & 0xfffffffffffffffe);
            if ((*(byte *)(lVar5 + -0x60) & 1) != 0) goto LAB_0c9b921b;
LAB_0c9b91dc:
            if ((*(byte *)(lVar5 + -0x78) & 1) == 0) goto LAB_0c9b91e4;
LAB_0c9b9236:
            FUN_0412a280(*(undefined8 *)(lVar5 + -0x68),
                         *(ulong *)(lVar5 + -0x78) & 0xfffffffffffffffe);
            if ((*(byte *)(lVar5 + -0x90) & 1) != 0) goto LAB_0c9b9254;
LAB_0c9b91ef:
            bVar1 = *(byte *)(lVar5 + -0xa8);
          }
          if ((bVar1 & 1) != 0) {
            FUN_0412a280(*(undefined8 *)(lVar5 + -0x98),
                         *(ulong *)(lVar5 + -0xa8) & 0xfffffffffffffffe);
          }
          lVar5 = lVar5 + -0xb0;
        } while (lVar5 != lVar3);
        lVar4 = param_2[5];
      }
      param_2[6] = lVar3;
      FUN_0412a280(lVar4,param_2[7] - lVar4);
    }
    FUN_0412a280(param_2,0x40);
    param_2 = puVar2;
  } while( true );
}


