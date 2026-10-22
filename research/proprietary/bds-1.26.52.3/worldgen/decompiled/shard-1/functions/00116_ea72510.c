/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xea72510
 * Label: string:temperature
 * Body:  [[0ea72510, 0ea7253d] [0ea72554, 0ea726f9] [0ea7273e, 0ea72bea]]
 * Ghidra: FUN_0ea72510
 */


ulong FUN_0ea72510(void)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long in_RAX;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char in_CL;
  byte *pbVar10;
  ulong uVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  long *unaff_R12;
  undefined4 *puVar19;
  long unaff_R14;
  bool bVar20;
  byte bVar21;
  uint unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  byte *in_stack_00000010;
  undefined8 *in_stack_00000020;
  undefined4 *in_stack_00000028;
  code *in_stack_00000030;
  code *in_stack_00000038;
  int iStack0000000000000040;
  char cStack0000000000000044;
  long in_stack_00000048;
  long in_stack_00000050;
  code *in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined4 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  code *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  *(char *)(in_RAX + -0x77) = *(char *)(in_RAX + -0x77) - in_CL;
  if (*unaff_R12 == 0) {
    lVar6 = func_0x048aead0(in_stack_00000068);
    uVar4 = in_stack_00000068;
    if (*(long *)(lVar6 + 0x78) != 0) {
      lVar6 = func_0x048aead0(in_stack_00000068);
      puVar15 = *(undefined4 **)(*(long *)(lVar6 + 0x78) + 0x48);
      lVar6 = func_0x048aead0(uVar4);
      puVar19 = *(undefined4 **)(*(long *)(lVar6 + 0x78) + 0x50);
      if (puVar15 != puVar19) goto LAB_0ea72597;
    }
  }
  else {
    lVar6 = *(long *)(*unaff_R12 + 0x78);
    if (lVar6 != 0) {
      puVar15 = *(undefined4 **)(lVar6 + 0x48);
      puVar19 = *(undefined4 **)(lVar6 + 0x50);
      if (puVar15 != puVar19) {
LAB_0ea72597:
        do {
          in_stack_00000070 = (undefined8 *)CONCAT44(in_stack_00000070._4_4_,*puVar15);
          in_stack_00000080 = in_stack_00000068;
          in_stack_000000c0 = 0;
          in_stack_000000c8 = 0;
          in_stack_000000b0 = 0;
          in_stack_000000b8 = 0;
          in_stack_000000a0 = 0;
          in_stack_000000a8 = (code *)0x0;
          in_stack_00000090 = 0;
          in_stack_00000098 = 0;
          in_stack_00000078 = puVar15;
          func_0x05d84ba0(&stack0x00000090);
          func_0x05d9a920(&stack0x00000020,&stack0x00000078,&stack0x00000090);
          if ((in_stack_00000048 == *(long *)(unaff_R14 + 0x28)) &&
             ((*(long *)(unaff_R14 + 0x38) != 0) == (in_stack_00000058 != (code *)0x0))) {
            if ((*(char *)(unaff_R14 + 0x24) == '\0') ||
               (iStack0000000000000040 != *(int *)(unaff_R14 + 0x20))) {
              bVar20 = *(char *)(unaff_R14 + 0x24) == '\0' && cStack0000000000000044 == '\0';
            }
            else {
              lVar6 = (*in_stack_00000030)(3,&stack0x00000020);
              bVar20 = lVar6 != 0;
            }
          }
          else {
            bVar20 = false;
          }
          if (in_stack_00000038 != (code *)0x0) {
            (*in_stack_00000038)(&stack0x00000020);
          }
          if (in_stack_000000a8 != (code *)0x0) {
            (*in_stack_000000a8)(&stack0x00000090);
          }
          if (bVar20) {
            if (((in_stack_00000078[0x14] == -0x45dcb126) &&
                (lVar6 = *(long *)(in_stack_00000078 + 0x16), lVar6 != 0)) &&
               (puVar1 = (uint *)(lVar6 + 0x28), (uint *)&stack0x00000000 != puVar1)) {
              bVar21 = *(byte *)puVar1;
              if ((unaff_retaddr & 1) == 0) {
                if ((bVar21 & 1) == 0) {
                  in_stack_00000010 = *(byte **)(lVar6 + 0x38);
                  unaff_retaddr = *puVar1;
                  unaff_retaddr_00 = *(undefined4 *)(lVar6 + 0x2c);
                  uStack0000000000000008 = *(undefined4 *)(lVar6 + 0x30);
                  uStack000000000000000c = *(undefined4 *)(lVar6 + 0x34);
                }
                else {
                  func_0x04885070(&stack0x00000000,*(undefined8 *)(lVar6 + 0x38),
                                  *(undefined8 *)(lVar6 + 0x30));
                }
              }
              else {
                bVar20 = (bVar21 & 1) != 0;
                lVar18 = lVar6 + 0x29;
                if (bVar20) {
                  lVar18 = *(long *)(lVar6 + 0x38);
                }
                uVar11 = (ulong)(bVar21 >> 1);
                if (bVar20) {
                  uVar11 = *(ulong *)(lVar6 + 0x30);
                }
                func_0x04885120(&stack0x00000000,lVar18,uVar11);
              }
            }
            break;
          }
          puVar15 = puVar15 + 0x1a;
        } while (puVar15 != puVar19);
      }
    }
  }
  puVar5 = in_stack_00000088;
  bVar21 = (byte)unaff_retaddr;
  if ((unaff_retaddr & 1) == 0) {
    if (bVar21 >> 1 != 0) goto LAB_0ea72774;
  }
  else if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
LAB_0ea72774:
    if ((code *)in_stack_00000088[7] == (code *)0x0) {
      in_stack_00000020 = (undefined8 *)0x0;
      in_stack_00000028 = (undefined4 *)0x0;
      func_0x048b1dc0(&stack0x00000020);
      puVar8 = in_stack_00000020;
      puVar15 = in_stack_00000028;
      if (in_stack_00000020 != (undefined8 *)0x0) goto LAB_0ea728b9;
LAB_0ea727af:
      lVar6 = func_0x048aead0(puVar15);
      bVar2 = *(byte *)(lVar6 + 0x18);
    }
    else {
      puVar8 = (undefined8 *)in_stack_00000088[6];
      if ((undefined8 *)in_stack_00000088[6] == (undefined8 *)0x0) {
        puVar15 = (undefined4 *)in_stack_00000088[5];
        (*(code *)in_stack_00000088[7])(0,in_stack_00000088,0);
        puVar8 = (undefined8 *)puVar5[6];
        if ((undefined8 *)puVar5[6] == (undefined8 *)0x0) goto LAB_0ea727af;
      }
LAB_0ea728b9:
      bVar2 = *(byte *)(puVar8 + 3);
    }
    if ((bVar2 & 0x40) == 0) {
      func_0x05d9abe0(&stack0x00000020,&stack0x00000000);
      uVar17 = func_0x05d9aa70(puVar5,&stack0x00000020);
      uVar11 = (ulong)uVar17;
      if (in_stack_00000038 != (code *)0x0) {
        (*in_stack_00000038)(&stack0x00000020);
      }
      goto joined_r0x0ea728f4;
    }
    bVar20 = (unaff_retaddr & 1) == 0;
    pbVar16 = in_stack_00000010;
    if (bVar20) {
      pbVar16 = &stack0x00000001;
    }
    uVar11 = (ulong)(bVar21 >> 1);
    if (!bVar20) {
      uVar11 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    }
    if (uVar11 != 0) {
      plVar7 = (long *)func_0x0eee3290();
      pbVar10 = pbVar16;
      for (uVar13 = uVar11 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pbVar10 = *(byte *)(*plVar7 + (ulong)*pbVar10 * 4);
        pbVar10 = pbVar10 + 1;
      }
      if (3 < uVar11) {
        do {
          *pbVar10 = *(byte *)(*plVar7 + (ulong)*pbVar10 * 4);
          pbVar10[1] = *(byte *)(*plVar7 + (ulong)pbVar10[1] * 4);
          pbVar10[2] = *(byte *)(*plVar7 + (ulong)pbVar10[2] * 4);
          pbVar10[3] = *(byte *)(*plVar7 + (ulong)pbVar10[3] * 4);
          pbVar10 = pbVar10 + 4;
        } while (pbVar10 != pbVar16 + uVar11);
      }
    }
    if ((code *)puVar5[7] == (code *)0x0) {
      in_stack_00000020 = (undefined8 *)0x0;
      in_stack_00000028 = (undefined4 *)0x0;
      func_0x048b1dc0(&stack0x00000020);
      puVar8 = in_stack_00000020;
      puVar15 = in_stack_00000028;
    }
    else {
      puVar15 = (undefined4 *)puVar5[5];
      puVar8 = (undefined8 *)puVar5[6];
      if ((undefined8 *)puVar5[6] == (undefined8 *)0x0) {
        (*(code *)puVar5[7])(0,puVar5,0);
        puVar8 = (undefined8 *)puVar5[6];
      }
    }
    bVar20 = (unaff_retaddr & 1) != 0;
    pbVar16 = &stack0x00000001;
    if (bVar20) {
      pbVar16 = in_stack_00000010;
    }
    uVar11 = (ulong)(bVar21 >> 1);
    if (bVar20) {
      uVar11 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    }
    if (uVar11 == 0) {
      uVar17 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar11 & 3);
      if (uVar11 < 4) {
        uVar17 = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uVar17 = 0x811c9dc5;
        uVar14 = 0;
        do {
          uVar17 = ((int)(char)pbVar16[uVar14 + 3] ^
                   ((int)(char)pbVar16[uVar14 + 2] ^
                   ((int)(char)pbVar16[uVar14 + 1] ^
                   ((int)(char)pbVar16[uVar14] ^ uVar17) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar11 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        do {
          uVar17 = ((int)(char)pbVar16[uVar11 + uVar14] ^ uVar17) * 0x1000193;
          uVar11 = uVar11 + 1;
        } while (uVar13 != uVar11);
      }
    }
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)func_0x048aead0(puVar15);
    }
    puVar8 = (undefined8 *)func_0x048b0c90(puVar15,puVar8,uVar17,1);
    if (puVar8 == (undefined8 *)0x0) {
      in_stack_00000020 = (undefined8 *)0x0;
      in_stack_00000028 = (undefined4 *)0x0;
      func_0x048b0d20(&stack0x00000020);
      in_stack_00000070 = in_stack_00000020;
      in_stack_00000078 = in_stack_00000028;
      puVar8 = in_stack_00000070;
      puVar15 = in_stack_00000078;
      if (in_stack_00000020 == (undefined8 *)0x0) goto LAB_0ea72ba2;
    }
    in_stack_00000078 = puVar15;
    in_stack_00000070 = puVar8;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    in_stack_000000b0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000a8 = (code *)0x0;
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    func_0x05d84ba0(&stack0x00000090);
    func_0x05d9a920(&stack0x00000020,&stack0x00000070,&stack0x00000090);
    lVar6 = in_stack_00000048;
    puVar8 = in_stack_00000020;
    if (cStack0000000000000044 == '\x02') {
      puVar8 = &stack0x00000020;
    }
    if (puVar8 == (undefined8 *)0x0 || iStack0000000000000040 != -0x3757a881) {
      if (in_stack_00000050 == 0) {
        (*in_stack_00000058)(0,&stack0x00000020,0);
      }
      puVar8 = in_stack_00000020;
      if (cStack0000000000000044 == '\x02') {
        puVar8 = &stack0x00000020;
      }
      puVar8 = (undefined8 *)func_0x0488e200(lVar6,in_stack_00000050,0xc8a8577f,puVar8);
    }
    uVar3 = *(undefined4 *)puVar8;
    cVar12 = *(char *)((long)puVar5 + 0x24);
    puVar8 = (undefined8 *)*puVar5;
    puVar9 = puVar8;
    if (cVar12 == '\x02') {
      puVar9 = puVar5;
    }
    if (puVar9 == (undefined8 *)0x0 || *(int *)(puVar5 + 4) != -0x3757a881) {
      uVar4 = puVar5[5];
      lVar6 = puVar5[6];
      if (lVar6 == 0) {
        (*(code *)puVar5[7])(0,puVar5,0);
        lVar6 = puVar5[6];
        cVar12 = *(char *)((long)puVar5 + 0x24);
        puVar8 = (undefined8 *)*puVar5;
      }
      if (cVar12 == '\x02') {
        puVar8 = puVar5;
      }
      puVar9 = (undefined8 *)func_0x0488e200(uVar4,lVar6,0xc8a8577f,puVar8);
    }
    *(undefined4 *)puVar9 = uVar3;
    if (in_stack_00000038 != (code *)0x0) {
      (*in_stack_00000038)(&stack0x00000020);
    }
    if (in_stack_000000a8 != (code *)0x0) {
      (*in_stack_000000a8)(&stack0x00000090);
    }
    uVar11 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
    goto joined_r0x0ea728f4;
  }
LAB_0ea72ba2:
  uVar11 = 0;
joined_r0x0ea728f4:
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT44(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  return uVar11;
}


