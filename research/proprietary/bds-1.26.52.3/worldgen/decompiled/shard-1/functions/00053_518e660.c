/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x518e660
 * Label: callee-of:0x5182630
 * Body:  [[0518e660, 0518e699] [0518e6b6, 0518e6e1] [0518fa40, 0518fce7]]
 * Ghidra: FUN_0518e660
 */


void FUN_0518e660(long *param_1)

{
  code *pcVar1;
  ulong in_RAX;
  char *pcVar2;
  undefined8 unaff_RBX;
  byte in_stack_00001c78;
  undefined7 in_stack_00001c79;
  undefined8 in_stack_00001c88;
  byte in_stack_00001c90;
  undefined7 in_stack_00001c91;
  undefined8 in_stack_00001ca0;
  byte in_stack_00001cc0;
  undefined7 in_stack_00001cc1;
  undefined8 in_stack_00001cd0;
  byte in_stack_00001cf0;
  undefined7 in_stack_00001cf1;
  undefined8 in_stack_00001d00;
  byte in_stack_00001d20;
  undefined7 in_stack_00001d21;
  undefined8 in_stack_00001d30;
  byte in_stack_00001d50;
  undefined7 in_stack_00001d51;
  undefined8 in_stack_00001d60;
  byte in_stack_00001d80;
  undefined7 in_stack_00001d81;
  undefined8 in_stack_00001d90;
  byte in_stack_00001db0;
  undefined7 in_stack_00001db1;
  undefined8 in_stack_00001dc0;
  byte in_stack_00001de0;
  undefined7 in_stack_00001de1;
  undefined8 in_stack_00001df0;
  byte in_stack_00001e10;
  undefined7 in_stack_00001e11;
  undefined8 in_stack_00001e20;
  byte in_stack_00001e40;
  undefined7 in_stack_00001e41;
  undefined8 in_stack_00001e50;
  byte in_stack_00001e70;
  undefined7 in_stack_00001e71;
  undefined8 in_stack_00001e80;
  byte in_stack_00001ea0;
  undefined7 in_stack_00001ea1;
  undefined8 in_stack_00001eb0;
  byte in_stack_00001ed0;
  undefined7 in_stack_00001ed1;
  undefined8 in_stack_00001ee0;
  byte in_stack_00001f00;
  undefined7 in_stack_00001f01;
  undefined8 in_stack_00001f10;
  
  pcVar2 = (char *)(in_RAX & 0xffffffffffffff20);
  *pcVar2 = *pcVar2 + (char)pcVar2;
  *pcVar2 = *pcVar2 + (char)pcVar2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))();
  }
  if ((in_stack_00001c78 & 1) != 0) {
    func_0x0412a280(in_stack_00001c88,
                    CONCAT71(in_stack_00001c79,in_stack_00001c78) & 0xfffffffffffffffe);
  }
  if ((in_stack_00001c90 & 1) != 0) {
    func_0x0412a280(in_stack_00001ca0,
                    CONCAT71(in_stack_00001c91,in_stack_00001c90) & 0xfffffffffffffffe);
    unaff_RBX = func_0x0eee2d70();
    if ((in_stack_00001cc0 & 1) != 0) {
      func_0x0412a280(in_stack_00001cd0,
                      CONCAT71(in_stack_00001cc1,in_stack_00001cc0) & 0xfffffffffffffffe);
      unaff_RBX = func_0x0eee2d70(unaff_RBX);
      if ((in_stack_00001cf0 & 1) != 0) {
        func_0x0412a280(in_stack_00001d00,
                        CONCAT71(in_stack_00001cf1,in_stack_00001cf0) & 0xfffffffffffffffe);
        unaff_RBX = func_0x0eee2d70(unaff_RBX);
        if ((in_stack_00001d20 & 1) != 0) {
          func_0x0412a280(in_stack_00001d30,
                          CONCAT71(in_stack_00001d21,in_stack_00001d20) & 0xfffffffffffffffe);
          unaff_RBX = func_0x0eee2d70(unaff_RBX);
          if ((in_stack_00001d50 & 1) != 0) {
            func_0x0412a280(in_stack_00001d60,
                            CONCAT71(in_stack_00001d51,in_stack_00001d50) & 0xfffffffffffffffe);
            unaff_RBX = func_0x0eee2d70(unaff_RBX);
            if ((in_stack_00001d80 & 1) != 0) {
              func_0x0412a280(in_stack_00001d90,
                              CONCAT71(in_stack_00001d81,in_stack_00001d80) & 0xfffffffffffffffe);
              unaff_RBX = func_0x0eee2d70(unaff_RBX);
              if ((in_stack_00001db0 & 1) != 0) {
                func_0x0412a280(in_stack_00001dc0,
                                CONCAT71(in_stack_00001db1,in_stack_00001db0) & 0xfffffffffffffffe);
                unaff_RBX = func_0x0eee2d70(unaff_RBX);
                if ((in_stack_00001de0 & 1) != 0) {
                  func_0x0412a280(in_stack_00001df0,
                                  CONCAT71(in_stack_00001de1,in_stack_00001de0) & 0xfffffffffffffffe
                                 );
                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                  if ((in_stack_00001e10 & 1) != 0) {
                    func_0x0412a280(in_stack_00001e20,
                                    CONCAT71(in_stack_00001e11,in_stack_00001e10) &
                                    0xfffffffffffffffe);
                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                    if ((in_stack_00001e40 & 1) != 0) {
                      func_0x0412a280(in_stack_00001e50,
                                      CONCAT71(in_stack_00001e41,in_stack_00001e40) &
                                      0xfffffffffffffffe);
                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                      if ((in_stack_00001e70 & 1) != 0) {
                        func_0x0412a280(in_stack_00001e80,
                                        CONCAT71(in_stack_00001e71,in_stack_00001e70) &
                                        0xfffffffffffffffe);
                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                        if ((in_stack_00001ea0 & 1) != 0) {
                          func_0x0412a280(in_stack_00001eb0,
                                          CONCAT71(in_stack_00001ea1,in_stack_00001ea0) &
                                          0xfffffffffffffffe);
                          unaff_RBX = func_0x0eee2d70(unaff_RBX);
                          if ((in_stack_00001ed0 & 1) != 0) {
                            func_0x0412a280(in_stack_00001ee0,
                                            CONCAT71(in_stack_00001ed1,in_stack_00001ed0) &
                                            0xfffffffffffffffe);
                            unaff_RBX = func_0x0eee2d70(unaff_RBX);
                            if ((in_stack_00001f00 & 1) != 0) goto LAB_0518fcc6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x0eee2d70(unaff_RBX);
LAB_0518fcc6:
  func_0x0412a280(in_stack_00001f10,
                  CONCAT71(in_stack_00001f01,in_stack_00001f00) & 0xfffffffffffffffe);
  func_0x0eee2d70(unaff_RBX);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


