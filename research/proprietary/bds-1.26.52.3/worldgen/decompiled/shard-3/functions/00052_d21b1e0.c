/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd21b1e0
 * Label: caller-of-seed
 * Body:  [[0d21b1e0, 0d21b23a] [0d21b263, 0d21b26a] [0d21b2d9, 0d21b3a6] [0d21b3d0, 0d21b3fe]]
 * Ghidra: FUN_0d21b1e0
 */


/* WARNING: This function may have set the stack pointer */

void FUN_0d21b1e0(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  int in_EAX;
  undefined4 in_register_00000004;
  char in_CL;
  ulong unaff_R13;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x75);
  *pcVar1 = *pcVar1 + in_CL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x7d);
  *pcVar1 = *pcVar1 + in_CL;
  out(0xfe,(char)in_EAX);
  uRam000000000001281c = 0xd21b1f4;
  func_0x0412a280();
  if ((bRam00000000000128fc & 1) != 0) {
    uRam000000000001281c = 0xd21b217;
    func_0x0412a280(uRam0000000000012a4c,
                    CONCAT71(uRam00000000000128fd,bRam00000000000128fc) & 0xfffffffffffffffe);
  }
  uRam000000000001281c = 0xd21b224;
  func_0x05fe8150(0x13084);
  uRam000000000001281c = 0xd21b231;
  func_0x0412d790(uRam0000000000012a54);
  uRam000000000001281c = 0xd21b239;
  uVar3 = func_0x0eee2d70();
  do {
    do {
      while( true ) {
        uRam000000000001281c = 0xd21b30e;
        func_0x0d2161f0(0x12a64);
        uRam000000000001281c = 0xd21b31b;
        func_0x0d20be50(0x13084);
        if ((bRam0000000000012994 & 1) != 0) {
          uRam000000000001281c = 0xd21b3e9;
          func_0x0412a280(uRam00000000000129a4,
                          CONCAT71(uRam0000000000012995,bRam0000000000012994) & 0xfffffffffffffffe);
          uRam000000000001281c = 0xd21b3f6;
          func_0x0412d790(uRam0000000000012a54);
          uRam000000000001281c = 0xd21b3fe;
          func_0x0eee2d70(uVar3);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uRam000000000001281c = 0xd21b336;
        func_0x0412d790(uRam0000000000012a54);
        uRam000000000001281c = 0xd21b33e;
        func_0x0eee2d70(uVar3);
        uRam000000000001281c = 0xd21b357;
        func_0x0412a280(uRam0000000000012964,uRam0000000000012954 & 0xfffffffffffffffe);
        if ((unaff_R13 & 1) != 0) break;
        if ((bRam0000000000012a04 & 1) != 0) goto LAB_0d21b37e;
LAB_0d21b2e7:
        if ((bRam0000000000012854 & 1) != 0) goto LAB_0d21b2ee;
      }
      unaff_R13 = 0;
      uRam000000000001281c = 0xd21b370;
      func_0x0412a280();
      if ((bRam0000000000012a04 & 1) == 0) goto LAB_0d21b2e7;
LAB_0d21b37e:
      uRam000000000001281c = 0xd21b397;
      func_0x0412a280(uRam0000000000012a14,
                      CONCAT71(uRam0000000000012a05,bRam0000000000012a04) & 0xfffffffffffffffe);
    } while ((bRam0000000000012854 & 1) == 0);
LAB_0d21b2ee:
    uRam000000000001281c = 0xd21b301;
    func_0x0412a280(uRam0000000000012864,
                    CONCAT71(uRam0000000000012855,bRam0000000000012854) & 0xfffffffffffffffe);
  } while( true );
}


