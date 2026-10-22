/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc970bc0
 * Label: WorldGenerator::vslot1
 * Body:  [[0c970331, 0c9704f6] [0c970500, 0c97055b] [0c970560, 0c970631] [0c970640, 0c970757] [0c970760, 0c97094b] [0c970950, 0c970a02] [0c970a10, 0c970b40] [0c970b50, 0c970ba2] [0c970bb0, 0c970d16] [0c970e4f, 0c970e67]]
 * Ghidra: wg_WorldGenerator__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot1(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *in_RAX;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  short *psVar12;
  undefined8 *puVar13;
  short *psVar14;
  short *psVar15;
  undefined8 *puVar16;
  undefined8 *unaff_RBP;
  short *psVar17;
  uint uVar18;
  short *psVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *unaff_retaddr;
  long in_stack_00000010;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  byte in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  long in_stack_000000a0;
  int in_stack_000000a8;
  undefined *in_stack_000000b0;
  long *in_stack_000000b8;
  long *in_stack_000000c0;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long *in_stack_00000128;
  undefined4 in_stack_00000130;
  uint in_stack_00000140;
  long in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_00000158;
  undefined8 *in_stack_00000160;
  
code_r0x0c970bc0:
  *param_4 = (long)in_RAX;
  param_4[1] = (long)unaff_RBP;
  param_4[2] = (long)in_stack_00000060;
  if (param_1 != 0) {
    func_0x0412a280(param_1,param_2 - param_1);
  }
  do {
    unaff_retaddr[1] = (long)unaff_RBP;
    in_stack_000000b0 = &UNK_0f371da8;
    if ((ulong)in_stack_00000140 != 0xffffffff) {
      (**(code **)(&UNK_0f3e84f8 + (ulong)in_stack_00000140 * 8))(&stack0x00000048,&stack0x00000130)
      ;
    }
    plVar2 = in_stack_00000128;
    in_stack_00000140 = 0xffffffff;
    in_stack_000000b0 = &UNK_0f36e918;
    in_stack_00000128 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (in_stack_00000100 != 0) {
      in_stack_00000108 = in_stack_00000100;
      func_0x0412a280(in_stack_00000100,in_stack_00000110 - in_stack_00000100);
    }
    if (in_stack_000000e0 != 0) {
      in_stack_000000e8 = in_stack_000000e0;
      func_0x0412a280(in_stack_000000e0,in_stack_000000f0 - in_stack_000000e0);
    }
    plVar2 = in_stack_000000c0;
    in_stack_000000c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar11 = in_stack_00000010;
    if (in_stack_000000b8 != (long *)0x0) {
      LOCK();
      *(int *)((long)in_stack_000000b8 + 0xc) = *(int *)((long)in_stack_000000b8 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)in_stack_000000b8 + 0xc) < 1) && (*in_stack_000000b8 == 0)) &&
         (in_stack_000000b8 != (long *)0x0)) {
        func_0x0412a280(in_stack_000000b8,0x10);
      }
    }
LAB_0c970430:
    do {
      in_stack_00000010 = lVar11;
      lVar11 = in_stack_00000010 + 0x98;
      if (lVar11 == in_stack_00000158) {
        if (0 < in_stack_000000a8) {
          in_stack_000000b0 =
               (undefined *)
               CONCAT44((float)(int)((ulong)*in_stack_00000028 >> 0x20),
                        (float)(int)*in_stack_00000028);
          in_stack_000000b8 =
               (long *)CONCAT44(in_stack_000000b8._4_4_,(float)*(int *)(in_stack_00000028 + 1));
          func_0x0bc93890(in_stack_00000040,&stack0x000000b0,in_stack_000000a8,1,0);
        }
        (**(code **)(**(long **)(in_stack_00000148 + 0x68) + 0x270))
                  (*(long **)(in_stack_00000148 + 0x68),in_stack_00000040,in_stack_00000148,
                   in_stack_00000028,in_stack_00000150);
        puVar16 = in_stack_00000090;
        puVar8 = in_stack_00000098;
        if (in_stack_00000090 != (undefined8 *)0x0) {
          while (puVar16 != puVar8) {
            puVar8 = puVar8 + -0x13;
            (**(code **)*puVar8)(puVar8);
          }
          in_stack_00000098 = puVar16;
          func_0x0412a280(in_stack_00000090,in_stack_000000a0 - (long)in_stack_00000090);
        }
        return;
      }
      uVar9 = *in_stack_00000028;
      uVar1 = *(undefined4 *)(in_stack_00000028 + 1);
      psVar15 = (short *)*unaff_retaddr;
      psVar14 = (short *)unaff_retaddr[1];
      uVar6 = 0xff;
      psVar12 = psVar15;
      psVar19 = psVar14;
      if ((*(long **)(in_stack_00000010 + 0xa0) != (long *)0x0) &&
         (plVar2 = (long *)**(long **)(in_stack_00000010 + 0xa0), plVar2 != (long *)0x0)) {
        func_0x0c455e60(&stack0x000000b0,lVar11);
        uVar6 = (**(code **)(*plVar2 + 0x328))(plVar2,&stack0x000000b0);
        plVar2 = in_stack_000000b8;
        in_stack_000000b0 = &UNK_0f3773c0;
        in_stack_000000b8 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x90))();
        }
        uVar6 = uVar6 & 0xff;
        psVar12 = (short *)*unaff_retaddr;
        psVar19 = (short *)unaff_retaddr[1];
      }
      iVar10 = (int)((ulong)((long)psVar14 - (long)psVar15) >> 3) * 0x3cf3cf3d;
      uVar18 = ((uint)((ulong)((long)iVar10 * 0x66666667) >> 0x22) - (iVar10 >> 0x1f)) * 0x10 + 0x10
      ;
      if ((int)uVar6 <= (int)uVar18) {
        uVar18 = uVar6;
      }
      uVar6 = (uint)*(byte *)(in_stack_00000010 + 0xba);
      if (psVar12 != psVar19) {
        psVar15 = psVar12 + 0x10;
        do {
          psVar14 = psVar15 + -0x10;
          cVar5 = func_0x0c459d50(psVar14,lVar11);
          if (cVar5 != '\0') {
            if (((*(long **)(psVar15 + -0xc) != (long *)0x0) &&
                (plVar2 = (long *)**(long **)(psVar15 + -0xc), plVar2 != (long *)0x0)) &&
               (cVar5 = (**(code **)(*plVar2 + 0x120))(), cVar5 != '\0')) {
              psVar12 = (short *)(*(long *)(psVar15 + -4) + 0x128);
              if (*psVar15 == 0x7fff) {
                psVar12 = psVar15;
              }
              if (*(long *)(psVar15 + -4) == 0) {
                psVar12 = psVar15;
              }
              psVar17 = (short *)(*(long *)(in_stack_00000010 + 0xb0) + 0x128);
              if (*(short *)(in_stack_00000010 + 0xb8) == 0x7fff) {
                psVar17 = (short *)(in_stack_00000010 + 0xb8);
              }
              if (*(long *)(in_stack_00000010 + 0xb0) == 0) {
                psVar17 = (short *)(in_stack_00000010 + 0xb8);
              }
              if (*psVar12 != *psVar17) goto LAB_0c970563;
            }
            iVar10 = uVar6 + *(byte *)(psVar15 + 1);
            uVar6 = iVar10 - uVar18;
            if (uVar6 == 0 || iVar10 < (int)uVar18) {
              func_0x0c4564a0(psVar14,iVar10);
              goto LAB_0c970430;
            }
            func_0x0c4564a0(psVar14,uVar18);
          }
LAB_0c970563:
          psVar14 = psVar15 + 0x44;
          psVar15 = psVar15 + 0x54;
        } while (psVar14 != psVar19);
      }
    } while ((int)uVar6 < 1);
    func_0x0c4510a0(&stack0x000000b0,lVar11);
    in_stack_000000b0 = &UNK_0f371da8;
    in_stack_00000130 = 0;
    in_stack_00000140 = 0;
    if ((ulong)*(uint *)(in_stack_00000010 + 0x128) == 0xffffffff) {
      in_stack_00000140 = 0xffffffff;
    }
    else {
      in_stack_00000048 = (undefined8 *)&stack0x00000130;
      (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(in_stack_00000010 + 0x128) * 8))
                (&stack0x00000048,in_stack_00000048,in_stack_00000010 + 0x118);
    }
    func_0x0c4564a0(&stack0x000000b0,uVar6);
    puVar8 = (undefined8 *)unaff_retaddr[1];
    in_stack_00000010 = lVar11;
    if ((undefined8 *)unaff_retaddr[2] <= puVar8) break;
    func_0x0c4510a0(puVar8,&stack0x000000b0);
    *puVar8 = &UNK_0f371da8;
    *(undefined4 *)(puVar8 + 0x10) = 0;
    *(undefined4 *)(puVar8 + 0x12) = 0;
    if ((ulong)in_stack_00000140 == 0xffffffff) {
      *(undefined4 *)(puVar8 + 0x12) = 0xffffffff;
    }
    else {
      in_stack_00000048 = puVar8 + 0x10;
      (**(code **)(&UNK_0f38c5a0 + (ulong)in_stack_00000140 * 8))
                (&stack0x00000048,in_stack_00000048,&stack0x00000130);
    }
    puVar8[0x13] = uVar9;
    *(undefined4 *)(puVar8 + 0x14) = uVar1;
    unaff_RBP = puVar8 + 0x15;
    unaff_retaddr[1] = (long)unaff_RBP;
  } while( true );
  lVar11 = (long)puVar8 - *unaff_retaddr;
  uVar20 = (lVar11 >> 3) * -0x30c30c30c30c30c3 + 1;
  if (0x186186186186186 < uVar20) {
    func_0x0c9a59a0();
LAB_0c970d0d:
    uVar9 = func_0x04882eb0();
    func_0x05340180(&stack0x00000090);
    func_0x0eee2d70(uVar9);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar7 = unaff_retaddr[2] - *unaff_retaddr >> 3;
  uVar4 = lVar7 * -0x6186186186186186;
  if (uVar20 < uVar4) {
    uVar20 = uVar4;
  }
  if (0xc30c30c30c30c2 < (ulong)(lVar7 * -0x30c30c30c30c30c3)) {
    uVar20 = 0x186186186186186;
  }
  in_stack_00000068 = unaff_retaddr;
  if (uVar20 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    if (0x186186186186186 < uVar20) goto LAB_0c970d0d;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20 * 0xa8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(uVar20 * 0xa8,0);
      puVar8 = (undefined8 *)0x0;
    }
  }
  puVar16 = (undefined8 *)(lVar11 + (long)puVar8);
  in_stack_00000060 = puVar8 + uVar20 * 0x15;
  in_stack_00000048 = puVar8;
  in_stack_00000050 = puVar16;
  in_stack_00000058 = puVar16;
  func_0x0c4510a0(puVar16,&stack0x000000b0);
  *puVar16 = &UNK_0f371da8;
  *(undefined4 *)(puVar16 + 0x10) = 0;
  *(undefined4 *)(puVar16 + 0x12) = 0;
  if ((ulong)in_stack_00000140 == 0xffffffff) {
    *(undefined4 *)(puVar16 + 0x12) = 0xffffffff;
  }
  else {
    in_stack_00000070 = puVar16 + 0x10;
    (**(code **)(&UNK_0f38c5a0 + (ulong)in_stack_00000140 * 8))
              (&stack0x00000070,in_stack_00000070,&stack0x00000130);
  }
  puVar16[0x13] = uVar9;
  *(undefined4 *)(puVar16 + 0x14) = uVar1;
  unaff_RBP = in_stack_00000058 + 0x15;
  puVar8 = (undefined8 *)*unaff_retaddr;
  puVar16 = (undefined8 *)unaff_retaddr[1];
  in_RAX = (undefined8 *)(((long)puVar8 - (long)puVar16) + (long)in_stack_00000050);
  in_stack_00000078 = &stack0x00000160;
  in_stack_00000080 = &stack0x00000030;
  in_stack_00000088 = 0;
  puVar13 = puVar8;
  puVar21 = in_RAX;
  in_stack_00000030 = in_RAX;
  in_stack_00000058 = unaff_RBP;
  in_stack_00000070 = unaff_retaddr;
  in_stack_00000160 = in_RAX;
  if (puVar8 != puVar16) {
    do {
      in_stack_00000030 = puVar21;
      func_0x0c4510a0(puVar21,puVar13);
      *puVar21 = &UNK_0f371da8;
      *(undefined4 *)(puVar21 + 0x10) = 0;
      *(undefined4 *)(puVar21 + 0x12) = 0;
      if ((ulong)*(uint *)(puVar13 + 0x12) == 0xffffffff) {
        *(undefined4 *)(puVar21 + 0x12) = 0xffffffff;
      }
      else {
        in_stack_00000038 = puVar21 + 0x10;
        (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(puVar13 + 0x12) * 8))
                  (&stack0x00000038,in_stack_00000038,puVar13 + 0x10);
      }
      *(undefined4 *)(puVar21 + 0x14) = *(undefined4 *)(puVar13 + 0x14);
      puVar21[0x13] = puVar13[0x13];
      puVar13 = puVar13 + 0x15;
      in_stack_00000030 = in_stack_00000030 + 0x15;
      puVar21 = in_stack_00000030;
    } while (puVar13 != puVar16);
    in_stack_00000088 = 1;
    do {
      *puVar8 = &UNK_0f371da8;
      if ((ulong)*(uint *)(puVar8 + 0x12) != 0xffffffff) {
        (**(code **)(&UNK_0f3e84f8 + (ulong)*(uint *)(puVar8 + 0x12) * 8))
                  (&stack0x00000038,puVar8 + 0x10);
      }
      *(undefined4 *)(puVar8 + 0x12) = 0xffffffff;
      *puVar8 = &UNK_0f36e918;
      plVar2 = (long *)puVar8[0xf];
      puVar8[0xf] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      lVar11 = puVar8[10];
      if (lVar11 != 0) {
        puVar8[0xb] = lVar11;
        func_0x0412a280(lVar11,puVar8[0xc] - lVar11);
      }
      lVar11 = puVar8[6];
      if (lVar11 != 0) {
        puVar8[7] = lVar11;
        func_0x0412a280(lVar11,puVar8[8] - lVar11);
      }
      plVar2 = (long *)puVar8[2];
      puVar8[2] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = (long *)puVar8[1];
      if (plVar2 != (long *)0x0) {
        LOCK();
        *(int *)((long)plVar2 + 0xc) = *(int *)((long)plVar2 + 0xc) + -1;
        UNLOCK();
        if (((*(int *)((long)plVar2 + 0xc) < 1) && (*plVar2 == 0)) && (puVar8[1] != 0)) {
          func_0x0412a280(puVar8[1],0x10);
        }
        puVar8[1] = 0;
      }
      puVar8 = puVar8 + 0x15;
    } while (puVar8 != puVar16);
    if ((in_stack_00000088 & 1) == 0) {
      puVar8 = (undefined8 *)*in_stack_00000078;
      puVar16 = (undefined8 *)*in_stack_00000080;
      while (puVar16 != puVar8) {
        puVar13 = puVar16 + -0x15;
        *puVar13 = &UNK_0f371da8;
        if ((ulong)*(uint *)(puVar16 + -3) != 0xffffffff) {
          (**(code **)(&UNK_0f3e84f8 + (ulong)*(uint *)(puVar16 + -3) * 8))
                    (&stack0x00000038,puVar16 + -5);
        }
        *(undefined4 *)(puVar16 + -3) = 0xffffffff;
        func_0x0c44e610(puVar13);
        puVar16 = puVar13;
      }
    }
  }
  param_1 = *unaff_retaddr;
  param_2 = unaff_retaddr[2];
  param_4 = unaff_retaddr;
  goto code_r0x0c970bc0;
}


