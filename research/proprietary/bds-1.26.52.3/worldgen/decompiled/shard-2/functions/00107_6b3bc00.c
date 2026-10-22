/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6b3bc00
 * Label: string:ZN9Scripting18EnumBindingBuilderIN6Editor8Services14JigsawJs
 * Body:  [[06b3bc00, 06b3c14b] [06b3c150, 06b3c695] [06b3c6a0, 06b3d3c1] [06b3d3d0, 06b3d849] [06b3d850, 06b3e850] [06b3e860, 06b3ed70] [06b3ed80, 06b3edd7] [06b3ee33, 06b3eeba] [06b3ef4b, 06b3efd2]]
 * Ghidra: FUN_06b3bc00
 */


/* WARNING: Removing unreachable block (ram,0x06b3ed89) */
/* WARNING: Removing unreachable block (ram,0x06b3ed90) */
/* WARNING: Removing unreachable block (ram,0x06b3ed80) */
/* WARNING: Removing unreachable block (ram,0x06b3eda3) */
/* WARNING: Removing unreachable block (ram,0x06b3e96d) */
/* WARNING: Removing unreachable block (ram,0x06b3e0a0) */
/* WARNING: Removing unreachable block (ram,0x06b3da89) */
/* WARNING: Removing unreachable block (ram,0x06b3da9b) */
/* WARNING: Removing unreachable block (ram,0x06b3d6a8) */
/* WARNING: Removing unreachable block (ram,0x06b3d6b0) */
/* WARNING: Removing unreachable block (ram,0x06b3d6c4) */
/* WARNING: Removing unreachable block (ram,0x06b3d63b) */
/* WARNING: Removing unreachable block (ram,0x06b3d64d) */
/* WARNING: Removing unreachable block (ram,0x06b3c9ba) */
/* WARNING: Removing unreachable block (ram,0x06b3c9cc) */
/* WARNING: Removing unreachable block (ram,0x06b3c690) */
/* WARNING: Removing unreachable block (ram,0x06b3c6b6) */
/* WARNING: Removing unreachable block (ram,0x06b3c6bf) */
/* WARNING: Removing unreachable block (ram,0x06b3c6c4) */
/* WARNING: Removing unreachable block (ram,0x06b3c6cd) */
/* WARNING: Removing unreachable block (ram,0x06b3c6d3) */
/* WARNING: Removing unreachable block (ram,0x06b3c6dc) */
/* WARNING: Removing unreachable block (ram,0x06b3c6e5) */
/* WARNING: Removing unreachable block (ram,0x06b3c6f1) */
/* WARNING: Removing unreachable block (ram,0x06b3c6a0) */
/* WARNING: Removing unreachable block (ram,0x06b3c6fc) */
/* WARNING: Removing unreachable block (ram,0x06b3c680) */
/* WARNING: Removing unreachable block (ram,0x06b3c704) */
/* WARNING: Removing unreachable block (ram,0x06b3c902) */
/* WARNING: Removing unreachable block (ram,0x06b3c90d) */
/* WARNING: Removing unreachable block (ram,0x06b3c913) */
/* WARNING: Removing unreachable block (ram,0x06b3c919) */
/* WARNING: Removing unreachable block (ram,0x06b3d4d1) */
/* WARNING: Removing unreachable block (ram,0x06b3d698) */
/* WARNING: Removing unreachable block (ram,0x06b3d6cc) */
/* WARNING: Removing unreachable block (ram,0x06b3d9d1) */
/* WARNING: Removing unreachable block (ram,0x06b3d9dc) */
/* WARNING: Removing unreachable block (ram,0x06b3d9e2) */
/* WARNING: Removing unreachable block (ram,0x06b3d9e8) */
/* WARNING: Removing unreachable block (ram,0x06b3ddf2) */
/* WARNING: Removing unreachable block (ram,0x06b3e30d) */
/* WARNING: Removing unreachable block (ram,0x06b3eac1) */
/* WARNING: Removing unreachable block (ram,0x06b3ed5f) */
/* WARNING: Removing unreachable block (ram,0x06b3ed6f) */
/* WARNING: Removing unreachable block (ram,0x06b3edab) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_06b3bc00(undefined8 param_1,uint param_2)

{
  code *pcVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong *puVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong *puVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long lVar18;
  code *pcVar19;
  ulong *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  undefined8 *unaff_RBP;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined1 in_stack_00000048;
  uint uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined1 uStack0000000000000060;
  undefined1 uStack0000000000000061;
  undefined2 uStack0000000000000062;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000068;
  byte bStack0000000000000070;
  undefined6 uStack0000000000000071;
  undefined1 uStack0000000000000077;
  undefined1 uStack0000000000000078;
  undefined6 uStack0000000000000079;
  undefined1 uStack000000000000007f;
  long in_stack_00000080;
  uint uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  long *in_stack_000000d8;
  long *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000108;
  undefined1 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined4 uStack0000000000000124;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  long in_stack_00000130;
  long in_stack_00000148;
  ulong in_stack_00000150;
  ulong in_stack_00000158;
  long in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined8 in_stack_00000178;
  ulong *in_stack_00000180;
  ulong *in_stack_00000188;
  ulong *in_stack_00000190;
  code *in_stack_00000198;
  code *in_stack_000001a0;
  undefined4 uStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined8 in_stack_000001b8;
  code *in_stack_000001e0;
  code *in_stack_00000220;
  code *in_stack_00000268;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 uVar32;
  undefined8 in_stack_000002b0;
  undefined8 uVar33;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  long in_stack_000002d0;
  long in_stack_000002d8;
  long in_stack_000002e0;
  long *in_stack_000002e8;
  code *in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  code *in_stack_00000330;
  code *in_stack_00000370;
  code *in_stack_000003b8;
  ulong in_stack_000003f0;
  undefined8 in_stack_00000400;
  ulong uVar34;
  undefined4 uVar35;
  code *in_stack_00000440;
  code *in_stack_00000480;
  code *in_stack_000004c0;
  code *in_stack_00000508;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  long in_stack_00000548;
  long in_stack_00000550;
  long in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined4 in_stack_00000588;
  undefined4 in_stack_0000058c;
  undefined4 in_stack_00000590;
  undefined4 in_stack_00000594;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 *in_stack_000005c8;
  undefined8 *in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  undefined8 in_stack_00000630;
  ulong in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  code *in_stack_00000668;
  code *pcVar36;
  code *in_stack_00000690;
  code *in_stack_000006a8;
  code *in_stack_000006d0;
  code *in_stack_000006e8;
  code *in_stack_00000710;
  code *in_stack_00000730;
  code *in_stack_00000758;
  code *in_stack_00000780;
  code *in_stack_000007c0;
  code *in_stack_000007d0;
  code *in_stack_00000800;
  code *in_stack_00000810;
  code *in_stack_00000848;
  code *in_stack_00000850;
  code *in_stack_00000898;
  undefined4 in_stack_000008d8;
  undefined4 in_stack_000008dc;
  code *in_stack_00000910;
  code *in_stack_00000918;
  code *in_stack_00000950;
  code *in_stack_00000960;
  code *in_stack_00000990;
  code *in_stack_000009d8;
  
  func_0x0412a280(param_1,param_2 & 0xfffffffe);
  uVar12 = (**(code **)(*in_stack_000002e8 + 0x20))();
  lVar18 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  lVar21 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
  uVar27 = (lVar21 - lVar18 >> 6) * -0x3333333333333333;
  uVar24 = 0;
  if ((uVar12 != 0) && ((uint)uVar27 != 0)) {
    uVar30 = 0;
    uVar24 = 0;
    do {
      auVar31 = (**(code **)(*in_stack_000002e8 + 0x28))(in_stack_000002e8,uVar30);
      lVar29 = auVar31._8_8_;
      lVar21 = auVar31._0_8_;
      auVar31 = func_0x06527d70();
      if (auVar31._8_8_ != lVar29) {
LAB_06b3bcd0:
        auVar31 = func_0x06527e30();
        if (auVar31._8_8_ == lVar29) {
          if (auVar31._0_8_ == 0) {
            lVar18 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar18 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar21 == 0) {
            lVar18 = func_0x048aead0(lVar29);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar21 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3beca;
        }
        auVar31 = func_0x06527ef0();
        if (auVar31._8_8_ == lVar29) {
          if (auVar31._0_8_ == 0) {
            lVar18 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar18 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar21 == 0) {
            lVar18 = func_0x048aead0(lVar29);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar21 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3beca;
        }
        auVar31 = func_0x06527fb0();
        if (auVar31._8_8_ == lVar29) {
          if (auVar31._0_8_ == 0) {
            lVar18 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar18 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar21 == 0) {
            lVar18 = func_0x048aead0(lVar29);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar21 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3beca;
        }
        auVar31 = func_0x06528070();
        if (auVar31._8_8_ == lVar29) {
          if (auVar31._0_8_ == 0) {
            lVar18 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar18 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar21 == 0) {
            lVar18 = func_0x048aead0(lVar29);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar21 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3beca;
        }
        auVar31 = func_0x06528130();
        if (auVar31._8_8_ == lVar29) {
          if (auVar31._0_8_ == 0) {
            lVar18 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar18 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar21 == 0) {
            lVar18 = func_0x048aead0(lVar29);
            iVar4 = *(int *)(lVar18 + 8);
          }
          else {
            iVar4 = *(int *)(lVar21 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3beca;
        }
        lVar18 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
        if (*(long *)(lVar18 + 0x20 + uVar24 * 0x140) != lVar29) goto LAB_06b3c0d2;
        lVar18 = *(long *)(uVar24 * 0x140 + lVar18 + 0x18);
        if (lVar18 == 0) {
          lVar18 = func_0x048aead0();
          iVar15 = *(int *)(lVar18 + 8);
          if (lVar21 == 0) goto LAB_06b3beb1;
LAB_06b3be98:
          if (iVar15 == *(int *)(lVar21 + 8)) {
LAB_06b3bec7:
            uVar24 = (ulong)((int)uVar24 + 1);
            goto LAB_06b3beca;
          }
        }
        else {
          iVar15 = *(int *)(lVar18 + 8);
          if (lVar21 != 0) goto LAB_06b3be98;
LAB_06b3beb1:
          lVar18 = func_0x048aead0(lVar29);
          if (iVar15 == *(int *)(lVar18 + 8)) goto LAB_06b3bec7;
        }
        lVar18 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
        goto LAB_06b3c0cd;
      }
      if (auVar31._0_8_ == 0) {
        lVar18 = func_0x048aead0(auVar31._8_8_);
        iVar15 = *(int *)(lVar18 + 8);
        if (lVar21 == 0) goto LAB_06b3bcbe;
LAB_06b3bca1:
        if (iVar15 != *(int *)(lVar21 + 8)) goto LAB_06b3bcd0;
      }
      else {
        iVar15 = *(int *)(auVar31._0_8_ + 8);
        if (lVar21 != 0) goto LAB_06b3bca1;
LAB_06b3bcbe:
        lVar18 = func_0x048aead0(lVar29);
        if (iVar15 != *(int *)(lVar18 + 8)) goto LAB_06b3bcd0;
      }
LAB_06b3beca:
    } while (((uint)uVar24 < (uint)uVar27) && (uVar30 = uVar30 + 1, uVar30 < uVar12));
    lVar18 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    lVar21 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    uVar27 = (lVar21 - lVar18 >> 6) * -0x3333333333333333;
  }
  if (uVar27 == uVar24) {
    if (in_stack_000002d0 != 0) {
      while (in_stack_000002d0 != in_stack_000002d8) {
        in_stack_000002d8 = in_stack_000002d8 + -0x140;
        func_0x05fe8450(in_stack_000002d8);
      }
      func_0x0412a280(in_stack_000002d0,in_stack_000002e0 - in_stack_000002d0);
      lVar18 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      lVar21 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    }
    if (in_stack_000005c8 < in_stack_000005d0) {
      *in_stack_000005c8 = 0;
      in_stack_000005c8[1] = 0;
      in_stack_000005c8[2] = 0;
      *in_stack_000005c8 = in_stack_000002a0;
      in_stack_000005c8[1] = in_stack_000002a8;
      in_stack_000005c8[2] = in_stack_000002b0;
      in_stack_000002a0 = 0;
      in_stack_000002a8 = 0;
      in_stack_000002b0 = 0;
      in_stack_000005c8[5] = in_stack_000002c8;
      in_stack_000005c8[3] = in_stack_000002b8;
      in_stack_000005c8[4] = in_stack_000002c0;
      in_stack_000005c8[6] = 0;
      in_stack_000005c8[7] = 0;
      in_stack_000005c8[8] = 0;
      in_stack_000005c8[6] = lVar18;
      in_stack_000005c8[7] = lVar21;
      in_stack_000005c8[8] = in_stack_000000a0;
      in_stack_000005c8[9] = in_stack_000002e8;
      in_stack_000005c8[10] = in_stack_000002f0;
      in_stack_000002f0 = (code *)0x0;
      in_stack_000005c8[0xb] = 0;
      in_stack_000005c8[0xc] = 0;
      in_stack_000005c8[0xd] = 0;
      *(int *)(in_stack_000005c8 + 0xb) = (int)in_stack_000002f8;
      *(int *)((long)in_stack_000005c8 + 0x5c) = (int)((ulong)in_stack_000002f8 >> 0x20);
      *(int *)(in_stack_000005c8 + 0xc) = (int)in_stack_00000300;
      *(int *)((long)in_stack_000005c8 + 100) = (int)((ulong)in_stack_00000300 >> 0x20);
      in_stack_000005c8[0xd] = in_stack_00000308;
      in_stack_000005c8 = in_stack_000005c8 + 0xe;
    }
    else {
      in_stack_000005c8 = (undefined8 *)func_0x0652ac80(&stack0x000005c0,&stack0x000002a0);
    }
    puVar16 = in_stack_000005c8 + -0xe;
    lVar18 = CONCAT17(uStack0000000000000077,CONCAT61(uStack0000000000000071,bStack0000000000000070)
                     );
  }
  else {
LAB_06b3c0cd:
    if (lVar18 != 0) {
LAB_06b3c0d2:
      lVar29 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
      lVar21 = lVar18;
      if (lVar18 != lVar29) {
        do {
          lVar29 = lVar29 + -0x140;
          func_0x05fe8450(lVar29);
        } while (lVar29 != lVar18);
        lVar21 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      }
      uStack0000000000000098 = (undefined4)lVar18;
      uStack000000000000009c = (undefined4)((ulong)lVar18 >> 0x20);
      func_0x0412a280(lVar21,in_stack_000000a0 - lVar21);
    }
    puVar16 = (undefined8 *)0xf598858;
    lVar18 = CONCAT17(uStack0000000000000077,CONCAT61(uStack0000000000000071,bStack0000000000000070)
                     );
  }
  if (lVar18 != 0) {
    lVar29 = CONCAT17(uStack000000000000007f,CONCAT61(uStack0000000000000079,uStack0000000000000078)
                     );
    lVar21 = lVar18;
    if (lVar18 != lVar29) {
      lVar21 = lVar29 + -0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        lVar29 = lVar21 + -0xd8;
        lVar21 = lVar21 + -0x118;
      } while (lVar29 != lVar18);
      lVar21 = CONCAT17(uStack0000000000000077,
                        CONCAT61(uStack0000000000000071,bStack0000000000000070));
    }
    uStack0000000000000078 = (undefined1)lVar18;
    uStack0000000000000079 = (undefined6)((ulong)lVar18 >> 8);
    uStack000000000000007f = (undefined1)((ulong)lVar18 >> 0x38);
    func_0x0412a280(lVar21,in_stack_00000080 - lVar21);
  }
  func_0x05f93280(&stack0x000002a0);
  func_0x064e40a0(puVar16);
  if (in_stack_00000268 != (code *)0x0) {
    (*in_stack_00000268)(&stack0x00000250);
  }
  if (in_stack_00000220 != (code *)0x0) {
    (*in_stack_00000220)(&stack0x00000208);
  }
  if (in_stack_000001e0 != (code *)0x0) {
    (*in_stack_000001e0)(&stack0x000001c8);
  }
  if (in_stack_000001a0 != (code *)0x0) {
    (*in_stack_000001a0)(&stack0x00000188);
  }
  if ((in_stack_00000150 & 1) != 0) {
    func_0x0412a280(in_stack_00000160,in_stack_00000150 & 0xfffffffffffffffe);
  }
  if ((uStack0000000000000058 & 1) != 0) {
    func_0x0412a280(in_stack_00000068,
                    CONCAT44(uStack000000000000005c,uStack0000000000000058) & 0xfffffffffffffffe);
  }
  if (in_stack_00000508 != (code *)0x0) {
    (*in_stack_00000508)(&stack0x000004f0);
  }
  if (in_stack_000004c0 != (code *)0x0) {
    (*in_stack_000004c0)(&stack0x000004a8);
  }
  if (in_stack_00000480 != (code *)0x0) {
    (*in_stack_00000480)(&stack0x00000468);
  }
  if (in_stack_00000440 != (code *)0x0) {
    (*in_stack_00000440)(&stack0x00000428);
  }
  if ((in_stack_000003f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000400,in_stack_000003f0 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000108 & 1) != 0) {
    func_0x0412a280(in_stack_00000118,in_stack_00000108 & 0xfffffffffffffffe);
  }
  uStack0000000000000090 = 0x6d616e1c;
  uStack0000000000000094 = 0x61707365;
  uStack0000000000000098 = 0x4e646563;
  uStack000000000000009c = 0x656d61;
  func_0x064f17b0(&stack0x00000640,&stack0x00000090);
  in_stack_00000030 = (undefined8 *)0x736e6f6974706f0e;
  in_stack_00000038 = (undefined8 *)((ulong)in_stack_00000038 & 0xffffffffffffff00);
  func_0x06b3fab0(&stack0x000003f0,&stack0x00000030);
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  _uStack00000000000001b0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001a0 = (code *)0x0;
  _uStack00000000000001a8 = 0;
  in_stack_00000190 = (ulong *)0x0;
  in_stack_00000198 = (code *)0x0;
  in_stack_00000180 = (ulong *)0x0;
  in_stack_00000188 = (ulong *)0x0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  _uStack0000000000000168 = 0x476574656c656416;
  _uStack0000000000000170 = 0x70756f72;
  func_0x06c8d180(&stack0x000002a0,&stack0x00000640,&stack0x000003f0);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f083020;
  uVar13 = func_0x0d858500(&stack0x000002a0);
  puVar23 = puVar16 + 3;
  *(undefined1 *)(puVar16 + 4) = 0;
  *(undefined4 *)((long)puVar16 + 0x24) = uVar13;
  *(undefined4 *)(puVar16 + 5) = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[3] = &UNK_0f083070;
  *(int *)(puVar16 + 9) = (int)in_stack_000002a0;
  *(int *)((long)puVar16 + 0x4c) = (int)((ulong)in_stack_000002a0 >> 0x20);
  *(int *)(puVar16 + 10) = (int)in_stack_000002a8;
  *(int *)((long)puVar16 + 0x54) = (int)((ulong)in_stack_000002a8 >> 0x20);
  puVar16[0xb] = in_stack_000002b0;
  uVar13 = func_0x0d858620(puVar23);
  plVar28 = (long *)in_stack_000001a0;
  *(undefined4 *)(puVar16 + 5) = uVar13;
  in_stack_00000198 = (code *)puVar23;
  if (in_stack_000001a0 != (code *)0x0) {
    LOCK();
    plVar25 = (long *)((long)in_stack_000001a0 + 8);
    lVar18 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      lVar18 = *(long *)in_stack_000001a0;
      in_stack_000001a0 = (code *)puVar16;
      (**(code **)(lVar18 + 0x10))(plVar28);
      func_0x0412c2d0(plVar28);
      puVar16 = (undefined8 *)in_stack_000001a0;
    }
  }
  in_stack_000001a0 = (code *)puVar16;
  cVar11 = func_0x06c8d3b0(&stack0x00000150,&stack0x00000640,&stack0x000003f0);
  if (cVar11 == '\0') {
    puVar16 = (undefined8 *)0xf598858;
  }
  else {
    if (in_stack_000005c8 < in_stack_000005d0) {
      *in_stack_000005c8 = 0;
      in_stack_000005c8[1] = 0;
      in_stack_000005c8[2] = 0;
      *in_stack_000005c8 = in_stack_00000150;
      in_stack_000005c8[1] = in_stack_00000158;
      in_stack_000005c8[2] = in_stack_00000160;
      in_stack_00000150 = 0;
      in_stack_00000158 = 0;
      in_stack_00000160 = 0;
      in_stack_000005c8[5] = in_stack_00000178;
      in_stack_000005c8[3] = _uStack0000000000000168;
      in_stack_000005c8[4] = _uStack0000000000000170;
      _uStack0000000000000168 = 0;
      _uStack0000000000000170 = 0;
      in_stack_00000178 = 0;
      in_stack_000005c8[6] = 0;
      in_stack_000005c8[7] = 0;
      in_stack_000005c8[8] = 0;
      in_stack_000005c8[6] = in_stack_00000180;
      in_stack_000005c8[7] = in_stack_00000188;
      in_stack_000005c8[8] = in_stack_00000190;
      in_stack_00000180 = (ulong *)0x0;
      in_stack_00000188 = (ulong *)0x0;
      in_stack_00000190 = (ulong *)0x0;
      in_stack_000005c8[9] = in_stack_00000198;
      in_stack_000005c8[10] = in_stack_000001a0;
      in_stack_00000198 = (code *)0x0;
      in_stack_000001a0 = (code *)0x0;
      in_stack_000005c8[0xb] = 0;
      in_stack_000005c8[0xc] = 0;
      in_stack_000005c8[0xd] = 0;
      *(undefined4 *)(in_stack_000005c8 + 0xb) = uStack00000000000001a8;
      *(undefined4 *)((long)in_stack_000005c8 + 0x5c) = uStack00000000000001ac;
      *(undefined4 *)(in_stack_000005c8 + 0xc) = uStack00000000000001b0;
      *(undefined4 *)((long)in_stack_000005c8 + 100) = uStack00000000000001b4;
      in_stack_000005c8[0xd] = in_stack_000001b8;
      _uStack00000000000001a8 = 0;
      _uStack00000000000001b0 = 0;
      in_stack_000001b8 = 0;
      in_stack_000005c8 = in_stack_000005c8 + 0xe;
    }
    else {
      in_stack_000005c8 = (undefined8 *)func_0x0652ac80(&stack0x000005c0,&stack0x00000150);
    }
    puVar16 = in_stack_000005c8 + -0xe;
  }
  func_0x05f93280(&stack0x00000150);
  func_0x064e40a0(puVar16);
  if (in_stack_00000508 != (code *)0x0) {
    (*in_stack_00000508)(&stack0x000004f0);
  }
  if (in_stack_000004c0 != (code *)0x0) {
    (*in_stack_000004c0)(&stack0x000004a8);
  }
  if (in_stack_00000480 != (code *)0x0) {
    (*in_stack_00000480)(&stack0x00000468);
  }
  if (in_stack_00000440 != (code *)0x0) {
    (*in_stack_00000440)(&stack0x00000428);
  }
  if ((in_stack_000003f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000400,in_stack_000003f0 & 0xfffffffffffffffe);
  }
  if (((ulong)in_stack_00000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,(ulong)in_stack_00000030 & 0xfffffffffffffffe);
  }
  if (in_stack_00000758 != (code *)0x0) {
    (*in_stack_00000758)(&stack0x00000740);
  }
  if (in_stack_00000710 != (code *)0x0) {
    (*in_stack_00000710)(&stack0x000006f8);
  }
  if (in_stack_000006d0 != (code *)0x0) {
    (*in_stack_000006d0)(&stack0x000006b8);
  }
  if (in_stack_00000690 != (code *)0x0) {
    (*in_stack_00000690)(&stack0x00000678);
  }
  if ((in_stack_00000640 & 1) != 0) {
    func_0x0412a280(in_stack_00000650,in_stack_00000640 & 0xfffffffffffffffe);
  }
  if ((uStack0000000000000090 & 1) != 0) {
    func_0x0412a280(in_stack_000000a0,
                    CONCAT44(uStack0000000000000094,uStack0000000000000090) & 0xfffffffffffffffe);
  }
  in_stack_00000030 = (undefined8 *)0x736e6f6974706f0e;
  in_stack_00000038 = (undefined8 *)((ulong)in_stack_00000038 & 0xffffffffffffff00);
  func_0x048b1dc0(&stack0x00000408);
  func_0x0652b590(&stack0x00000418);
  uVar24 = (ulong)in_stack_00000030;
  uVar27 = (ulong)in_stack_00000038;
  uVar34 = (ulong)in_stack_00000040;
  if (((ulong)in_stack_00000030 & 1) != 0) {
    func_0x04885070(&stack0x000003f0,in_stack_00000040,in_stack_00000038);
    uVar24 = 0;
    uVar27 = 0;
    uVar34 = 0;
  }
  plVar28 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar28 == (long *)0x0) {
    func_0x048b0de0(&stack0x00000640,&stack0x00000150);
    _DAT_0f54fd90 = (undefined4)in_stack_00000640;
    uRam000000000f54fd94 = (undefined4)(in_stack_00000640 >> 0x20);
    uVar13 = (undefined4)((ulong)in_stack_00000648 >> 0x20);
    plVar28 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = (int)in_stack_00000648;
    uRam000000000f54fd9c = uVar13;
    if (plVar28 != (long *)0x0) {
      LOCK();
      plVar25 = plVar28 + 1;
      lVar18 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        func_0x0412c2d0(plVar28);
      }
    }
    plVar28 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5a0058 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5a0058), iVar15 != 0)) {
    func_0x06c92ce0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f59ffd8,0xf53dab8);
    func_0x0410844d(&DAT_0f5a0058);
  }
  plVar25 = (long *)(*plVar28 +
                    (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                           *(uint *)(_DAT_0f59ffd8 + 4)) * 8);
  do {
    lVar18 = *plVar25;
    if (lVar18 == -1) goto LAB_06b3ca40;
    plVar25 = (long *)(plVar28[3] + lVar18 * 0x18);
  } while (*(uint *)(plVar28[3] + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f59ffd8 + 4));
  if (plVar25 == (long *)plVar28[4]) {
LAB_06b3ca40:
    puVar17 = &DAT_0f59ffd8;
  }
  else {
    puVar17 = (undefined *)plVar25[2];
  }
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  _uStack00000000000001b0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001a0 = (code *)0x0;
  _uStack00000000000001a8 = 0;
  in_stack_00000190 = (ulong *)0x0;
  in_stack_00000198 = (code *)0x0;
  in_stack_00000180 = (ulong *)0x0;
  in_stack_00000188 = (ulong *)0x0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  _uStack0000000000000168 = 0x7247686374656616;
  _uStack0000000000000170 = 0x7370756f;
  func_0x06523ef0(&stack0x00000640,&stack0x00000418);
  uStack0000000000000090 = 0;
  uStack0000000000000094 = 0;
  uStack0000000000000098 = 0;
  uStack000000000000009c = 0;
  in_stack_000000a0 = 0;
  _uStack0000000000000128 = _uStack0000000000000128 & 0xffffffffffffff00;
  _uStack0000000000000120 = (undefined8 *)&stack0x00000090;
  lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (lVar18 == 0) {
    func_0x0eec74c0(0x118,0);
  }
  uStack0000000000000090 = (uint)lVar18;
  uStack0000000000000094 = (undefined4)((ulong)lVar18 >> 0x20);
  in_stack_000000a0 = lVar18 + 0x118;
  bStack0000000000000070 = (byte)lVar18;
  uStack0000000000000071 = (undefined6)((ulong)lVar18 >> 8);
  uStack0000000000000077 = (undefined1)((ulong)lVar18 >> 0x38);
  uStack0000000000000098 = uStack0000000000000090;
  uStack000000000000009c = uStack0000000000000094;
  in_stack_00000108 = lVar18;
  func_0x06523ef0(lVar18,&stack0x00000640);
  _uStack0000000000000098 =
       CONCAT17(uStack0000000000000077,CONCAT61(uStack0000000000000071,bStack0000000000000070)) +
       0x118;
  if (in_stack_00000730 != (code *)0x0) {
    (*in_stack_00000730)(&stack0x00000718);
  }
  if (in_stack_000006e8 != (code *)0x0) {
    (*in_stack_000006e8)(&stack0x000006d0);
  }
  if (in_stack_000006a8 != (code *)0x0) {
    (*in_stack_000006a8)(&stack0x00000690);
  }
  if (in_stack_00000668 != (code *)0x0) {
    (*in_stack_00000668)(&stack0x00000650);
  }
  pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar19 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar19 + 8) = 0;
  *(undefined8 *)(pcVar19 + 0x10) = 0;
  *(undefined **)pcVar19 = &UNK_0f0830f0;
  uVar13 = func_0x0d858500(&stack0x00000090);
  pcVar36 = pcVar19 + 0x18;
  pcVar19[0x20] = (code)0x0;
  *(undefined4 *)(pcVar19 + 0x24) = uVar13;
  *(undefined4 *)(pcVar19 + 0x28) = 0;
  *(undefined8 *)(pcVar19 + 0x30) = 0;
  *(undefined8 *)(pcVar19 + 0x38) = 0;
  *(undefined8 *)(pcVar19 + 0x40) = 0;
  *(undefined **)(pcVar19 + 0x18) = &UNK_0f083140;
  *(uint *)(pcVar19 + 0x48) = uStack0000000000000090;
  *(undefined4 *)(pcVar19 + 0x4c) = uStack0000000000000094;
  *(long *)(pcVar19 + 0x50) = _uStack0000000000000098;
  *(long *)(pcVar19 + 0x58) = in_stack_000000a0;
  uStack0000000000000090 = 0;
  uStack0000000000000094 = 0;
  uStack0000000000000098 = 0;
  uStack000000000000009c = 0;
  in_stack_000000a0 = 0;
  uVar13 = func_0x0d858620(pcVar36);
  plVar25 = (long *)in_stack_000001a0;
  *(undefined4 *)(pcVar19 + 0x28) = uVar13;
  in_stack_00000198 = pcVar36;
  if (in_stack_000001a0 != (code *)0x0) {
    LOCK();
    plVar26 = (long *)((long)in_stack_000001a0 + 8);
    lVar18 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      lVar18 = *(long *)in_stack_000001a0;
      in_stack_000001a0 = pcVar19;
      (**(code **)(lVar18 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
      pcVar19 = in_stack_000001a0;
    }
  }
  in_stack_000001a0 = pcVar19;
  uVar13 = (undefined4)((ulong)puVar17 >> 0x20);
  uVar35 = (undefined4)((ulong)plVar28 >> 0x20);
  func_0x065281f0(&stack0x00000668,&stack0x00000418);
  _uStack0000000000000128 = _uStack0000000000000128 & 0xffffffffffffff00;
  _uStack0000000000000120 = (undefined8 *)&stack0x000002a0;
  puVar20 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar20 == (ulong *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar2 = puVar20 + 0x28;
  if ((uVar24 & 1) == 0) {
    puVar20[2] = uVar34;
    *puVar20 = uVar24;
    puVar20[1] = uVar27;
  }
  else {
    func_0x0412e5e0(puVar20,uVar34,uVar27);
  }
  *(int *)(puVar20 + 3) = (int)puVar17;
  *(undefined4 *)((long)puVar20 + 0x1c) = uVar13;
  *(int *)(puVar20 + 4) = (int)plVar28;
  *(undefined4 *)((long)puVar20 + 0x24) = uVar35;
  func_0x06523ef0(puVar20 + 5,&stack0x00000668);
  if (in_stack_00000758 != (code *)0x0) {
    (*in_stack_00000758)(&stack0x00000740);
  }
  if (in_stack_00000710 != (code *)0x0) {
    (*in_stack_00000710)(&stack0x000006f8);
  }
  if (in_stack_000006d0 != (code *)0x0) {
    (*in_stack_000006d0)(&stack0x000006b8);
  }
  if (in_stack_00000690 != (code *)0x0) {
    (*in_stack_00000690)(&stack0x00000678);
  }
  if ((uVar24 & 1) != 0) {
    func_0x0412a280(uVar34,uVar24 & 0xfffffffffffffffe);
  }
  uVar12 = (**(code **)(*(long *)in_stack_00000198 + 0x20))();
  uVar27 = ((long)puVar2 - (long)puVar20 >> 6) * -0x3333333333333333;
  uVar24 = 0;
  puVar5 = puVar2;
  if ((uVar12 != 0) && ((uint)uVar27 != 0)) {
    uVar30 = 0;
    uVar24 = 0;
    do {
      auVar31 = (**(code **)(*(long *)in_stack_00000198 + 0x28))(in_stack_00000198,uVar30);
      uVar34 = auVar31._8_8_;
      lVar18 = auVar31._0_8_;
      auVar31 = func_0x06527d70();
      if (auVar31._8_8_ == uVar34) {
        if (auVar31._0_8_ == 0) {
          lVar21 = func_0x048aead0(auVar31._8_8_);
          iVar15 = *(int *)(lVar21 + 8);
          if (lVar18 == 0) goto LAB_06b3cf2e;
LAB_06b3cf11:
          if (iVar15 != *(int *)(lVar18 + 8)) goto LAB_06b3cf40;
        }
        else {
          iVar15 = *(int *)(auVar31._0_8_ + 8);
          if (lVar18 != 0) goto LAB_06b3cf11;
LAB_06b3cf2e:
          lVar21 = func_0x048aead0(uVar34);
          if (iVar15 != *(int *)(lVar21 + 8)) goto LAB_06b3cf40;
        }
      }
      else {
LAB_06b3cf40:
        auVar31 = func_0x06527e30();
        if (auVar31._8_8_ == uVar34) {
          if (auVar31._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar21 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar21 = func_0x048aead0(uVar34);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3d138;
        }
        auVar31 = func_0x06527ef0();
        if (auVar31._8_8_ == uVar34) {
          if (auVar31._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar21 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar21 = func_0x048aead0(uVar34);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3d138;
        }
        auVar31 = func_0x06527fb0();
        if (auVar31._8_8_ == uVar34) {
          if (auVar31._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar21 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar21 = func_0x048aead0(uVar34);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3d138;
        }
        auVar31 = func_0x06528070();
        if (auVar31._8_8_ == uVar34) {
          if (auVar31._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar21 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar21 = func_0x048aead0(uVar34);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3d138;
        }
        auVar31 = func_0x06528130();
        if (auVar31._8_8_ == uVar34) {
          if (auVar31._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar21 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar21 = func_0x048aead0(uVar34);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3d138;
        }
        if (puVar20[uVar24 * 0x28 + 4] != uVar34) goto joined_r0x06b3d353;
        if (puVar20[uVar24 * 0x28 + 3] == 0) {
          lVar21 = func_0x048aead0();
          iVar15 = *(int *)(lVar21 + 8);
          if (lVar18 == 0) goto LAB_06b3d120;
LAB_06b3d108:
          if (iVar15 != *(int *)(lVar18 + 8)) goto LAB_06b3d340;
        }
        else {
          iVar15 = *(int *)(puVar20[uVar24 * 0x28 + 3] + 8);
          if (lVar18 != 0) goto LAB_06b3d108;
LAB_06b3d120:
          lVar18 = func_0x048aead0(uVar34);
          if (iVar15 != *(int *)(lVar18 + 8)) goto LAB_06b3d340;
        }
        uVar24 = (ulong)((int)uVar24 + 1);
      }
LAB_06b3d138:
    } while (((uint)uVar24 < (uint)uVar27) && (uVar30 = uVar30 + 1, uVar30 < uVar12));
    uVar27 = ((long)puVar2 - (long)puVar20 >> 6) * -0x3333333333333333;
  }
  puVar10 = in_stack_00000180;
  if (uVar27 == uVar24) {
    puVar5 = in_stack_00000188;
    if (in_stack_00000180 != (ulong *)0x0) {
      while (puVar10 != puVar5) {
        func_0x05fe8450(puVar5 + -0x28);
        puVar5 = puVar5 + -0x28;
      }
      in_stack_00000188 = puVar10;
      func_0x0412a280(in_stack_00000180,(long)in_stack_00000190 - (long)in_stack_00000180);
    }
    if (in_stack_000005c8 < in_stack_000005d0) {
      *in_stack_000005c8 = 0;
      in_stack_000005c8[1] = 0;
      in_stack_000005c8[2] = 0;
      *in_stack_000005c8 = in_stack_00000150;
      in_stack_000005c8[1] = in_stack_00000158;
      in_stack_000005c8[2] = in_stack_00000160;
      in_stack_00000150 = 0;
      in_stack_00000158 = 0;
      in_stack_00000160 = 0;
      in_stack_000005c8[5] = in_stack_00000178;
      in_stack_000005c8[3] = _uStack0000000000000168;
      in_stack_000005c8[4] = _uStack0000000000000170;
      _uStack0000000000000168 = 0;
      _uStack0000000000000170 = 0;
      in_stack_00000178 = 0;
      in_stack_000005c8[6] = 0;
      in_stack_000005c8[7] = 0;
      in_stack_000005c8[8] = 0;
      in_stack_000005c8[6] = puVar20;
      in_stack_000005c8[7] = puVar2;
      in_stack_000005c8[8] = puVar2;
      in_stack_00000180 = (ulong *)0x0;
      in_stack_00000188 = (ulong *)0x0;
      in_stack_00000190 = (ulong *)0x0;
      in_stack_000005c8[9] = in_stack_00000198;
      in_stack_000005c8[10] = in_stack_000001a0;
      in_stack_00000198 = (code *)0x0;
      in_stack_000001a0 = (code *)0x0;
      in_stack_000005c8[0xb] = 0;
      in_stack_000005c8[0xc] = 0;
      in_stack_000005c8[0xd] = 0;
      *(undefined4 *)(in_stack_000005c8 + 0xb) = uStack00000000000001a8;
      *(undefined4 *)((long)in_stack_000005c8 + 0x5c) = uStack00000000000001ac;
      *(undefined4 *)(in_stack_000005c8 + 0xc) = uStack00000000000001b0;
      *(undefined4 *)((long)in_stack_000005c8 + 100) = uStack00000000000001b4;
      in_stack_000005c8[0xd] = in_stack_000001b8;
      _uStack00000000000001a8 = 0;
      _uStack00000000000001b0 = 0;
      in_stack_000001b8 = 0;
      in_stack_000005c8 = in_stack_000005c8 + 0xe;
    }
    else {
      in_stack_00000180 = puVar20;
      in_stack_00000188 = puVar2;
      in_stack_00000190 = puVar2;
      in_stack_000005c8 = (undefined8 *)func_0x0652ac80(&stack0x000005c0,&stack0x00000150);
    }
    puVar16 = in_stack_000005c8 + -0xe;
    lVar18 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  }
  else {
LAB_06b3d340:
    if (puVar20 != (ulong *)0x0) {
joined_r0x06b3d353:
      while (puVar20 != puVar5) {
        func_0x05fe8450(puVar5 + -0x28);
        puVar5 = puVar5 + -0x28;
      }
      func_0x0412a280(puVar20,(long)puVar2 - (long)puVar20);
    }
    puVar16 = (undefined8 *)0xf598858;
    lVar18 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  }
  if (lVar18 != 0) {
    lVar21 = lVar18;
    if (lVar18 != CONCAT44(uStack000000000000009c,uStack0000000000000098)) {
      lVar21 = CONCAT44(uStack000000000000009c,uStack0000000000000098) + -0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        lVar29 = lVar21 + -0xd8;
        lVar21 = lVar21 + -0x118;
      } while (lVar29 != lVar18);
      lVar21 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    }
    uStack0000000000000098 = (undefined4)lVar18;
    uStack000000000000009c = (undefined4)((ulong)lVar18 >> 0x20);
    func_0x0412a280(lVar21,in_stack_000000a0 - lVar21);
  }
  func_0x05f93280(&stack0x00000150);
  func_0x064e40a0(puVar16);
  if (in_stack_00000508 != (code *)0x0) {
    (*in_stack_00000508)(&stack0x000004f0);
  }
  if (in_stack_000004c0 != (code *)0x0) {
    (*in_stack_000004c0)(&stack0x000004a8);
  }
  if (in_stack_00000480 != (code *)0x0) {
    (*in_stack_00000480)(&stack0x00000468);
  }
  if (in_stack_00000440 != (code *)0x0) {
    (*in_stack_00000440)(&stack0x00000428);
  }
  if (((ulong)in_stack_00000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,(ulong)in_stack_00000030 & 0xfffffffffffffffe);
  }
  pcVar36 = (code *)0x73;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  in_stack_00000160 = 0;
  pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar19 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar19 + 8) = 0;
  *(undefined8 *)(pcVar19 + 0x10) = 0;
  *(undefined **)pcVar19 = &UNK_0f0831d0;
  uVar14 = func_0x0d858500(&stack0x00000150);
  pcVar1 = pcVar19 + 0x18;
  pcVar19[0x20] = (code)0x0;
  *(undefined4 *)(pcVar19 + 0x24) = uVar14;
  *(undefined4 *)(pcVar19 + 0x28) = 0;
  *(undefined8 *)(pcVar19 + 0x30) = 0;
  *(undefined8 *)(pcVar19 + 0x38) = 0;
  *(undefined8 *)(pcVar19 + 0x40) = 0;
  *(undefined **)(pcVar19 + 0x18) = &UNK_0f083220;
  *(undefined8 *)(pcVar19 + 0x48) = 0;
  *(undefined8 *)(pcVar19 + 0x50) = 0;
  *(undefined8 *)(pcVar19 + 0x58) = 0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  in_stack_00000160 = 0;
  uVar14 = func_0x0d858620(pcVar1);
  *(undefined4 *)(pcVar19 + 0x28) = uVar14;
  (**(code **)(*(long *)pcVar1 + 0x20))();
  if (in_stack_000005c8 < in_stack_000005d0) {
    *in_stack_000005c8 = 0;
    in_stack_000005c8[1] = 0;
    in_stack_000005c8[2] = 0;
    *in_stack_000005c8 = 0;
    in_stack_000005c8[1] = 0;
    in_stack_000005c8[2] = 0;
    in_stack_000005c8[5] = 0x73;
    in_stack_000005c8[3] = 0x65736f7073696420;
    in_stack_000005c8[4] = 0x70756f72476c6c41;
    pcVar36 = (code *)0x0;
    in_stack_000005c8[6] = 0;
    in_stack_000005c8[7] = 0;
    in_stack_000005c8[8] = 0;
    in_stack_000005c8[6] = 0;
    in_stack_000005c8[7] = 0;
    in_stack_000005c8[8] = 0;
    in_stack_000005c8[9] = pcVar1;
    in_stack_000005c8[10] = pcVar19;
    pcVar19 = (code *)0x0;
    in_stack_000005c8[0xb] = 0;
    in_stack_000005c8[0xc] = 0;
    in_stack_000005c8[0xd] = 0;
    *(undefined4 *)(in_stack_000005c8 + 0xb) = 0;
    *(undefined4 *)((long)in_stack_000005c8 + 0x5c) = 0;
    *(undefined4 *)(in_stack_000005c8 + 0xc) = 0;
    *(undefined4 *)((long)in_stack_000005c8 + 100) = 0;
    in_stack_000005c8[0xd] = 0;
    puVar16 = in_stack_000005c8 + 0xe;
    uVar24 = in_stack_00000150;
  }
  else {
    puVar16 = (undefined8 *)func_0x0652ac80(&stack0x000005c0,&stack0x00000640);
    uVar24 = in_stack_00000150;
  }
  in_stack_00000150 = uVar24;
  if (uVar24 != 0) {
    if (uVar24 != in_stack_00000158) {
      lVar18 = in_stack_00000158 - 0x40;
      do {
        if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
          (**(code **)(lVar18 + 0x18))(lVar18);
        }
        if (*(code **)(lVar18 + -0x30) != (code *)0x0) {
          (**(code **)(lVar18 + -0x30))(lVar18 + -0x48);
        }
        if (*(code **)(lVar18 + -0x70) != (code *)0x0) {
          (**(code **)(lVar18 + -0x70))(lVar18 + -0x88);
        }
        if (*(code **)(lVar18 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar18 + -0xb0))(lVar18 + -200);
        }
        uVar27 = lVar18 - 0xd8;
        lVar18 = lVar18 + -0x118;
      } while (uVar27 != uVar24);
    }
    func_0x0412a280(in_stack_00000150,in_stack_00000160 - in_stack_00000150);
  }
  func_0x05f93280(&stack0x00000640);
  func_0x064e40a0(puVar16 + -0xe);
  bStack0000000000000070 = 0x1c;
  uStack0000000000000071 = 0x7073656d616e;
  uStack0000000000000077 = 0x61;
  uStack0000000000000078 = 99;
  uStack0000000000000079 = 0x656d614e6465;
  uStack000000000000007f = 0;
  func_0x064f17b0(&stack0x000003f0,&stack0x00000070);
  in_stack_00000108 = 0x736e6f6974706f0e;
  in_stack_00000110 = 0;
  func_0x06b3fab0(&stack0x00000150,&stack0x00000108);
  uStack0000000000000058 = 0x6c616310;
  uStack000000000000005c = 0x6361626c;
  uStack0000000000000060 = 0x6b;
  uStack0000000000000061 = 0;
  uVar24 = 0;
  uVar32 = 0;
  uVar33 = 0;
  func_0x048b1dc0(&stack0x000002b8);
  func_0x0652b590(&stack0x000002c8);
  if ((uStack0000000000000058 & 1) == 0) {
    uVar24 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    uVar32 = CONCAT44(uStack0000000000000064,
                      CONCAT22(uStack0000000000000062,
                               CONCAT11(uStack0000000000000061,uStack0000000000000060)));
    uVar33 = in_stack_00000068;
  }
  else {
    func_0x04885070(&stack0x000002a0,in_stack_00000068,
                    CONCAT44(uStack0000000000000064,
                             CONCAT22(uStack0000000000000062,
                                      CONCAT11(uStack0000000000000061,uStack0000000000000060))));
  }
  plVar25 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar25 == (long *)0x0) {
    func_0x048b0de0(&stack0x00000640,&stack0x00000090);
    _DAT_0f54fd90 = 0;
    uRam000000000f54fd94 = 0;
    plVar25 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = 0;
    uRam000000000f54fd9c = 0;
    if (plVar25 != (long *)0x0) {
      LOCK();
      plVar26 = plVar25 + 1;
      lVar18 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        func_0x0412c2d0(plVar25);
      }
    }
    plVar25 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5a0398 == '\0') && (iVar15 = func_0x04108328(&DAT_0f5a0398), iVar15 != 0)) {
    func_0x06c97630();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5a0318,0xf53dab8);
    func_0x0410844d(&DAT_0f5a0398);
  }
  plVar26 = (long *)(*plVar25 +
                    (ulong)((int)((ulong)(plVar25[1] - *plVar25) >> 3) - 1U &
                           *(uint *)(_DAT_0f5a0318 + 4)) * 8);
  do {
    lVar18 = *plVar26;
    if (lVar18 == -1) goto LAB_06b3db10;
    plVar26 = (long *)(plVar25[3] + lVar18 * 0x18);
  } while (*(uint *)(plVar25[3] + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f5a0318 + 4));
  if (plVar26 == (long *)plVar25[4]) {
LAB_06b3db10:
    puVar22 = &DAT_0f5a0318;
  }
  else {
    puVar22 = (undefined *)plVar26[2];
  }
  in_stack_000000a0 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000e0 = (long *)0x0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = (undefined8 *)0x0;
  in_stack_000000d8 = (long *)0x0;
  in_stack_000000c0 = (undefined8 *)0x0;
  in_stack_000000c8 = (undefined8 *)0x0;
  uStack0000000000000090 = 0;
  uStack0000000000000094 = 0;
  uStack0000000000000098 = 0;
  uStack000000000000009c = 0;
  in_stack_000000a8 = 0x7473657571657224;
  in_stack_000000b0 = 0x7247746e65696c43;
  in_stack_000000b8 = 0x70756f;
  func_0x06523ef0(&stack0x00000640,&stack0x00000418);
  func_0x06523ef0(&stack0x00000758,&stack0x00000178);
  func_0x06523ef0(&stack0x00000870,&stack0x000002c8);
  _uStack0000000000000120 = (undefined8 *)0x0;
  _uStack0000000000000128 = 0;
  in_stack_00000130 = 0;
  lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x348);
  if (lVar18 == 0) {
    func_0x0eec74c0(0x348,0);
  }
  in_stack_00000130 = lVar18 + 0x348;
  in_stack_00000030 = (undefined8 *)&stack0x00000120;
  in_stack_00000038 = (undefined8 *)&stack0x00000a00;
  in_stack_00000040 = &stack0x00000148;
  in_stack_00000048 = 0;
  _uStack0000000000000120 = (undefined8 *)lVar18;
  _uStack0000000000000128 = lVar18;
  in_stack_00000148 = lVar18;
  func_0x06523ef0(lVar18,&stack0x00000640);
  in_stack_00000148 = in_stack_00000148 + 0x118;
  func_0x06523ef0(in_stack_00000148,&stack0x00000758);
  in_stack_00000148 = in_stack_00000148 + 0x118;
  func_0x06523ef0(in_stack_00000148,&stack0x00000870);
  _uStack0000000000000128 = in_stack_00000148 + 0x118;
  if (in_stack_00000960 != (code *)0x0) {
    (*in_stack_00000960)(&stack0x00000948);
  }
  if (in_stack_00000918 != (code *)0x0) {
    (*in_stack_00000918)(&stack0x00000900);
  }
  if ((code *)CONCAT44(in_stack_000008dc,in_stack_000008d8) != (code *)0x0) {
    (*(code *)CONCAT44(in_stack_000008dc,in_stack_000008d8))(&stack0x000008c0);
  }
  if (in_stack_00000898 != (code *)0x0) {
    (*in_stack_00000898)(&stack0x00000880);
  }
  if (in_stack_00000848 != (code *)0x0) {
    (*in_stack_00000848)(&stack0x00000830);
  }
  if (in_stack_00000800 != (code *)0x0) {
    (*in_stack_00000800)(&stack0x000007e8);
  }
  if (in_stack_000007c0 != (code *)0x0) {
    (*in_stack_000007c0)(&stack0x000007a8);
  }
  if (in_stack_00000780 != (code *)0x0) {
    (*in_stack_00000780)(&stack0x00000768);
  }
  if (in_stack_00000730 != (code *)0x0) {
    (*in_stack_00000730)(&stack0x00000718);
  }
  if (in_stack_000006e8 != (code *)0x0) {
    (*in_stack_000006e8)(&stack0x000006d0);
  }
  if (pcVar36 != (code *)0x0) {
    (*pcVar36)(&stack0x00000650);
  }
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar23[1] = 0;
  puVar23[2] = 0;
  *puVar23 = &UNK_0f0832b0;
  uVar14 = func_0x0d858500(&stack0x00000120);
  plVar26 = puVar23 + 3;
  *(undefined1 *)(puVar23 + 4) = 0;
  *(undefined4 *)((long)puVar23 + 0x24) = uVar14;
  *(undefined4 *)(puVar23 + 5) = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  puVar23[8] = 0;
  puVar23[3] = &UNK_0f083300;
  *(undefined4 *)(puVar23 + 9) = uStack0000000000000120;
  *(undefined4 *)((long)puVar23 + 0x4c) = uStack0000000000000124;
  *(undefined4 *)(puVar23 + 10) = uStack0000000000000128;
  *(undefined4 *)((long)puVar23 + 0x54) = uStack000000000000012c;
  puVar23[0xb] = in_stack_00000130;
  _uStack0000000000000120 = (undefined8 *)0x0;
  _uStack0000000000000128 = 0;
  in_stack_00000130 = 0;
  uVar14 = func_0x0d858620(plVar26);
  plVar6 = in_stack_000000e0;
  *(undefined4 *)(puVar23 + 5) = uVar14;
  in_stack_000000d8 = plVar26;
  if (in_stack_000000e0 != (long *)0x0) {
    LOCK();
    plVar26 = in_stack_000000e0 + 1;
    lVar18 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      lVar18 = *in_stack_000000e0;
      in_stack_000000e0 = puVar23;
      (**(code **)(lVar18 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
      puVar23 = in_stack_000000e0;
    }
  }
  in_stack_000000e0 = puVar23;
  func_0x065281f0(&stack0x00000668,&stack0x00000418);
  lVar18 = in_stack_00000160;
  uVar34 = in_stack_00000158;
  uVar27 = in_stack_00000150;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  in_stack_00000160 = 0;
  uVar14 = uStack0000000000000168;
  uVar7 = uStack000000000000016c;
  uVar8 = uStack0000000000000170;
  uVar9 = uStack0000000000000174;
  func_0x065281f0(&stack0x000007a8,&stack0x00000178);
  func_0x065281f0(&stack0x000008e8,&stack0x000002c8);
  in_stack_00000030 = (undefined8 *)0x0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000040 = (undefined8 *)0x0;
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3c0);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x3c0,0);
  }
  puVar3 = puVar23 + 0x78;
  puVar23[2] = 0;
  *puVar23 = 0;
  puVar23[1] = 0;
  *(int *)(puVar23 + 3) = (int)puVar17;
  *(undefined4 *)((long)puVar23 + 0x1c) = uVar13;
  *(int *)(puVar23 + 4) = (int)plVar28;
  *(undefined4 *)((long)puVar23 + 0x24) = uVar35;
  in_stack_00000030 = puVar23;
  in_stack_00000038 = puVar23;
  in_stack_00000040 = puVar3;
  func_0x06523ef0(puVar23 + 5,&stack0x00000668);
  if ((uVar27 & 1) == 0) {
    puVar23[0x2a] = lVar18;
    puVar23[0x28] = uVar27;
    puVar23[0x29] = uVar34;
  }
  else {
    func_0x0412e5e0(puVar23 + 0x28,lVar18,uVar34);
  }
  *(undefined4 *)(puVar23 + 0x2b) = uVar14;
  *(undefined4 *)((long)puVar23 + 0x15c) = uVar7;
  *(undefined4 *)(puVar23 + 0x2c) = uVar8;
  *(undefined4 *)((long)puVar23 + 0x164) = uVar9;
  func_0x06523ef0(puVar23 + 0x2d,&stack0x000007a8);
  if ((uVar24 & 1) == 0) {
    puVar23[0x52] = uVar33;
    puVar23[0x50] = uVar24;
    puVar23[0x51] = uVar32;
  }
  else {
    func_0x0412e5e0(puVar23 + 0x50,uVar33,uVar32);
  }
  *(int *)(puVar23 + 0x53) = (int)puVar22;
  *(int *)((long)puVar23 + 0x29c) = (int)((ulong)puVar22 >> 0x20);
  *(int *)(puVar23 + 0x54) = (int)plVar25;
  *(int *)((long)puVar23 + 0x2a4) = (int)((ulong)plVar25 >> 0x20);
  func_0x06523ef0(puVar23 + 0x55,&stack0x000008e8);
  in_stack_00000038 = puVar3;
  if (in_stack_000009d8 != (code *)0x0) {
    (*in_stack_000009d8)(&stack0x000009c0);
  }
  if (in_stack_00000990 != (code *)0x0) {
    (*in_stack_00000990)(&stack0x00000978);
  }
  if (in_stack_00000950 != (code *)0x0) {
    (*in_stack_00000950)(&stack0x00000938);
  }
  if (in_stack_00000910 != (code *)0x0) {
    (*in_stack_00000910)(&stack0x000008f8);
  }
  if ((uVar24 & 1) != 0) {
    func_0x0412a280(uVar33,uVar24 & 0xfffffffffffffffe);
  }
  if (in_stack_00000898 != (code *)0x0) {
    (*in_stack_00000898)(&stack0x00000880);
  }
  if (in_stack_00000850 != (code *)0x0) {
    (*in_stack_00000850)(&stack0x00000838);
  }
  if (in_stack_00000810 != (code *)0x0) {
    (*in_stack_00000810)(&stack0x000007f8);
  }
  if (in_stack_000007d0 != (code *)0x0) {
    (*in_stack_000007d0)(&stack0x000007b8);
  }
  if ((uVar27 & 1) != 0) {
    func_0x0412a280(lVar18,uVar27 & 0xfffffffffffffffe);
  }
  if (in_stack_00000758 != (code *)0x0) {
    (*in_stack_00000758)(&stack0x00000740);
  }
  if (in_stack_00000710 != (code *)0x0) {
    (*in_stack_00000710)(&stack0x000006f8);
  }
  if (in_stack_000006d0 != (code *)0x0) {
    (*in_stack_000006d0)(&stack0x000006b8);
  }
  if (pcVar19 != (code *)0x0) {
    (*pcVar19)(&stack0x00000678);
  }
  uVar12 = (**(code **)(*in_stack_000000d8 + 0x20))();
  uVar27 = ((long)in_stack_00000038 - (long)in_stack_00000030 >> 6) * -0x3333333333333333;
  uVar24 = 0;
  if ((uVar12 != 0) && ((uint)uVar27 != 0)) {
    uVar30 = 0;
    uVar24 = 0;
    do {
      auVar31 = (**(code **)(*in_stack_000000d8 + 0x28))(in_stack_000000d8,uVar30);
      lVar21 = auVar31._8_8_;
      lVar18 = auVar31._0_8_;
      auVar31 = func_0x06527d70();
      if (auVar31._8_8_ == lVar21) {
        if (auVar31._0_8_ == 0) {
          lVar29 = func_0x048aead0(auVar31._8_8_);
          iVar15 = *(int *)(lVar29 + 8);
          if (lVar18 == 0) goto LAB_06b3e3ce;
LAB_06b3e3b1:
          if (iVar15 != *(int *)(lVar18 + 8)) goto LAB_06b3e3e0;
        }
        else {
          iVar15 = *(int *)(auVar31._0_8_ + 8);
          if (lVar18 != 0) goto LAB_06b3e3b1;
LAB_06b3e3ce:
          lVar29 = func_0x048aead0(lVar21);
          if (iVar15 != *(int *)(lVar29 + 8)) goto LAB_06b3e3e0;
        }
      }
      else {
LAB_06b3e3e0:
        auVar31 = func_0x06527e30();
        if (auVar31._8_8_ == lVar21) {
          if (auVar31._0_8_ == 0) {
            lVar29 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar29 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar29 = func_0x048aead0(lVar21);
            iVar4 = *(int *)(lVar29 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3e5d5;
        }
        auVar31 = func_0x06527ef0();
        if (auVar31._8_8_ == lVar21) {
          if (auVar31._0_8_ == 0) {
            lVar29 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar29 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar29 = func_0x048aead0(lVar21);
            iVar4 = *(int *)(lVar29 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3e5d5;
        }
        auVar31 = func_0x06527fb0();
        if (auVar31._8_8_ == lVar21) {
          if (auVar31._0_8_ == 0) {
            lVar29 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar29 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar29 = func_0x048aead0(lVar21);
            iVar4 = *(int *)(lVar29 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3e5d5;
        }
        auVar31 = func_0x06528070();
        if (auVar31._8_8_ == lVar21) {
          if (auVar31._0_8_ == 0) {
            lVar29 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar29 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar29 = func_0x048aead0(lVar21);
            iVar4 = *(int *)(lVar29 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3e5d5;
        }
        auVar31 = func_0x06528130();
        if (auVar31._8_8_ == lVar21) {
          if (auVar31._0_8_ == 0) {
            lVar29 = func_0x048aead0(auVar31._8_8_);
            iVar15 = *(int *)(lVar29 + 8);
          }
          else {
            iVar15 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar29 = func_0x048aead0(lVar21);
            iVar4 = *(int *)(lVar29 + 8);
          }
          else {
            iVar4 = *(int *)(lVar18 + 8);
          }
          if (iVar15 == iVar4) goto LAB_06b3e5d5;
        }
        puVar23 = in_stack_00000030;
        puVar3 = in_stack_00000038;
        if (in_stack_00000030[uVar24 * 0x28 + 4] != lVar21) goto joined_r0x06b3e7ed;
        if (in_stack_00000030[uVar24 * 0x28 + 3] == 0) {
          lVar29 = func_0x048aead0();
          iVar15 = *(int *)(lVar29 + 8);
          if (lVar18 == 0) goto LAB_06b3e5bd;
LAB_06b3e5a5:
          if (iVar15 != *(int *)(lVar18 + 8)) goto LAB_06b3e7dd;
        }
        else {
          iVar15 = *(int *)(in_stack_00000030[uVar24 * 0x28 + 3] + 8);
          if (lVar18 != 0) goto LAB_06b3e5a5;
LAB_06b3e5bd:
          lVar18 = func_0x048aead0(lVar21);
          if (iVar15 != *(int *)(lVar18 + 8)) goto LAB_06b3e7dd;
        }
        uVar24 = (ulong)((int)uVar24 + 1);
      }
LAB_06b3e5d5:
    } while (((uint)uVar24 < (uint)uVar27) && (uVar30 = uVar30 + 1, uVar30 < uVar12));
    uVar27 = ((long)in_stack_00000038 - (long)in_stack_00000030 >> 6) * -0x3333333333333333;
  }
  puVar23 = in_stack_000000c0;
  if (uVar27 == uVar24) {
    puVar3 = in_stack_000000c8;
    if (in_stack_000000c0 != (undefined8 *)0x0) {
      while (puVar23 != puVar3) {
        func_0x05fe8450(puVar3 + -0x28);
        puVar3 = puVar3 + -0x28;
      }
      in_stack_000000c8 = puVar23;
      func_0x0412a280(in_stack_000000c0,(long)in_stack_000000d0 - (long)in_stack_000000c0);
    }
    in_stack_000000d0 = in_stack_00000040;
    if (puVar16 < in_stack_000005d0) {
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      puVar16[1] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
      puVar16[2] = in_stack_000000a0;
      uStack0000000000000090 = 0;
      uStack0000000000000094 = 0;
      uStack0000000000000098 = 0;
      uStack000000000000009c = 0;
      in_stack_000000a0 = 0;
      puVar16[5] = in_stack_000000b8;
      puVar16[3] = in_stack_000000a8;
      puVar16[4] = in_stack_000000b0;
      in_stack_000000a8 = 0;
      in_stack_000000b0 = 0;
      in_stack_000000b8 = 0;
      puVar16[6] = 0;
      puVar16[7] = 0;
      puVar16[8] = 0;
      puVar16[6] = in_stack_00000030;
      puVar16[7] = in_stack_00000038;
      puVar16[8] = in_stack_00000040;
      in_stack_000000c0 = (undefined8 *)0x0;
      in_stack_000000c8 = (undefined8 *)0x0;
      in_stack_000000d0 = (undefined8 *)0x0;
      puVar16[9] = in_stack_000000d8;
      puVar16[10] = in_stack_000000e0;
      in_stack_000000d8 = (long *)0x0;
      in_stack_000000e0 = (undefined8 *)0x0;
      puVar16[0xb] = 0;
      puVar16[0xc] = 0;
      puVar16[0xd] = 0;
      puVar16[0xb] = in_stack_000000e8;
      puVar16[0xc] = in_stack_000000f0;
      puVar16[0xd] = in_stack_000000f8;
      in_stack_000000e8 = 0;
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      puVar16 = puVar16 + 0xe;
    }
    else {
      in_stack_000000c0 = in_stack_00000030;
      in_stack_000000c8 = in_stack_00000038;
      puVar16 = (undefined8 *)func_0x0652ac80(&stack0x000005c0,&stack0x00000090);
    }
    puVar23 = puVar16 + -0xe;
    lVar18 = (long)_uStack0000000000000120;
  }
  else {
LAB_06b3e7dd:
    puVar23 = in_stack_00000030;
    puVar3 = in_stack_00000038;
    if (in_stack_00000030 != (undefined8 *)0x0) {
joined_r0x06b3e7ed:
      while (uVar33 = in_stack_00000030, in_stack_00000030 != puVar3) {
        in_stack_00000030 = puVar23;
        func_0x05fe8450(puVar3 + -0x28);
        puVar23 = in_stack_00000030;
        puVar3 = puVar3 + -0x28;
        in_stack_00000030 = (undefined8 *)uVar33;
      }
      in_stack_00000038 = in_stack_00000030;
      in_stack_00000030 = puVar23;
      func_0x0412a280(puVar23,(long)in_stack_00000040 - (long)puVar23);
    }
    puVar23 = (undefined8 *)0xf598858;
    lVar18 = (long)_uStack0000000000000120;
  }
  _uStack0000000000000120 = (undefined8 *)lVar18;
  if (lVar18 != 0) {
    if (lVar18 != _uStack0000000000000128) {
      lVar21 = _uStack0000000000000128 + -0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        lVar29 = lVar21 + -0xd8;
        lVar21 = lVar21 + -0x118;
      } while (lVar29 != lVar18);
    }
    _uStack0000000000000128 = lVar18;
    func_0x0412a280(_uStack0000000000000120,in_stack_00000130 - (long)_uStack0000000000000120);
  }
  func_0x05f93280(&stack0x00000090);
  func_0x064e40a0(puVar23);
  if (in_stack_000003b8 != (code *)0x0) {
    (*in_stack_000003b8)(&stack0x000003a0);
  }
  if (in_stack_00000370 != (code *)0x0) {
    (*in_stack_00000370)(&stack0x00000358);
  }
  if (in_stack_00000330 != (code *)0x0) {
    (*in_stack_00000330)(&stack0x00000318);
  }
  if (in_stack_000002f0 != (code *)0x0) {
    (*in_stack_000002f0)(&stack0x000002d8);
  }
  if ((uStack0000000000000058 & 1) != 0) {
    func_0x0412a280(in_stack_00000068,
                    CONCAT44(uStack000000000000005c,uStack0000000000000058) & 0xfffffffffffffffe);
  }
  if (in_stack_00000268 != (code *)0x0) {
    (*in_stack_00000268)(&stack0x00000250);
  }
  if (in_stack_00000220 != (code *)0x0) {
    (*in_stack_00000220)(&stack0x00000208);
  }
  if (in_stack_000001e0 != (code *)0x0) {
    (*in_stack_000001e0)(&stack0x000001c8);
  }
  if (in_stack_000001a0 != (code *)0x0) {
    (*in_stack_000001a0)(&stack0x00000188);
  }
  if ((in_stack_00000150 & 1) != 0) {
    func_0x0412a280(in_stack_00000160,in_stack_00000150 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000108 & 1) != 0) {
    func_0x0412a280(in_stack_00000118,in_stack_00000108 & 0xfffffffffffffffe);
  }
  if (in_stack_00000508 != (code *)0x0) {
    (*in_stack_00000508)(&stack0x000004f0);
  }
  if (in_stack_000004c0 != (code *)0x0) {
    (*in_stack_000004c0)(&stack0x000004a8);
  }
  if (in_stack_00000480 != (code *)0x0) {
    (*in_stack_00000480)(&stack0x00000468);
  }
  if (in_stack_00000440 != (code *)0x0) {
    (*in_stack_00000440)(&stack0x00000428);
  }
  if ((bStack0000000000000070 & 1) != 0) {
    func_0x0412a280(in_stack_00000080,
                    CONCAT17(uStack0000000000000077,
                             CONCAT61(uStack0000000000000071,bStack0000000000000070)) &
                    0xfffffffffffffffe);
  }
  func_0x064e40a0(&stack0x00000530);
  auVar31 = func_0x06c8f890();
  if (in_stack_00000548 != 0) {
    for (; in_stack_00000548 != in_stack_00000550; in_stack_00000550 = in_stack_00000550 + -0x30) {
      if ((*(byte *)(in_stack_00000550 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(in_stack_00000550 + -0x10),
                        *(ulong *)(in_stack_00000550 + -0x20) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(in_stack_00000548,in_stack_00000558 - in_stack_00000548);
  }
  *unaff_RBP = in_stack_00000530;
  unaff_RBP[1] = in_stack_00000538;
  unaff_RBP[2] = in_stack_00000540;
  unaff_RBP[5] = in_stack_00000570;
  unaff_RBP[3] = in_stack_00000560;
  unaff_RBP[4] = in_stack_00000568;
  *(undefined4 *)(unaff_RBP + 8) = in_stack_00000588;
  *(undefined4 *)((long)unaff_RBP + 0x44) = in_stack_0000058c;
  *(undefined4 *)(unaff_RBP + 9) = in_stack_00000590;
  *(undefined4 *)((long)unaff_RBP + 0x4c) = in_stack_00000594;
  *(undefined1 (*) [16])(unaff_RBP + 6) = auVar31;
  unaff_RBP[10] = in_stack_00000598;
  unaff_RBP[0xb] = in_stack_000005a0;
  unaff_RBP[0xc] = in_stack_000005a8;
  unaff_RBP[0xd] = in_stack_000005b0;
  unaff_RBP[0xe] = in_stack_000005b8;
  unaff_RBP[0xf] = in_stack_000005c0;
  unaff_RBP[0x10] = puVar16;
  unaff_RBP[0x11] = in_stack_000005d0;
  unaff_RBP[0x12] = in_stack_000005d8;
  unaff_RBP[0x13] = in_stack_000005e0;
  unaff_RBP[0x14] = in_stack_000005e8;
  unaff_RBP[0x15] = in_stack_000005f0;
  unaff_RBP[0x16] = in_stack_000005f8;
  unaff_RBP[0x17] = in_stack_00000600;
  unaff_RBP[0x18] = in_stack_00000608;
  unaff_RBP[0x19] = in_stack_00000610;
  unaff_RBP[0x1a] = in_stack_00000618;
  *(int *)(unaff_RBP + 0x1b) = (int)in_stack_00000620;
  *(int *)((long)unaff_RBP + 0xdc) = (int)((ulong)in_stack_00000620 >> 0x20);
  *(int *)(unaff_RBP + 0x1c) = (int)in_stack_00000628;
  *(int *)((long)unaff_RBP + 0xe4) = (int)((ulong)in_stack_00000628 >> 0x20);
  unaff_RBP[0x1d] = in_stack_00000630;
  func_0x0651ffe0(&stack0x00000548);
  return unaff_RBP;
}


