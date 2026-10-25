# FUN_04fbc500

- entry: `0x4fbc500`
- body size: 2768 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Instruction at (ram,0x04fbc501) overlaps instruction at (ram,0x04fbc500)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04fbc500(void)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char *in_RAX;
  ulong *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long *unaff_RBP;
  long *plVar14;
  long lVar15;
  undefined4 *puVar16;
  long *unaff_R12;
  ulong uVar17;
  long *unaff_R14;
  long *plVar18;
  long lVar19;
  long *in_FS_OFFSET;
  bool bVar20;
  bool in_SF;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  char cStack0000000000000040;
  undefined7 uStack0000000000000041;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  long *in_stack_00000050;
  long *in_stack_00000058;
  long in_stack_00000060;
  long *in_stack_00000068;
  ulong in_stack_00000070;
  long *in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined8 *in_stack_00000088;
  long *in_stack_00000090;
  long in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  
  if (in_SF) {
    *in_RAX = *in_RAX + (char)in_RAX;
    plVar9 = in_stack_00000020;
    goto LAB_04fbc53f;
  }
  puVar12 = (undefined8 *)((ulong)&stack0x00000020 & 0xffffffff);
code_r0x04fbc506:
  func_0x04fbd8b0(puVar12,unaff_R12,unaff_RBP,unaff_R14);
  unaff_RBP = in_stack_00000078;
  plVar14 = in_stack_00000020;
  lVar15 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
  in_stack_00000028 = in_stack_00000078;
  uStack0000000000000030 = uStack0000000000000080;
  uStack0000000000000034 = uStack0000000000000084;
  plVar9 = unaff_R14;
  if (in_stack_00000020 != (long *)0x0) {
    lVar15 = lVar15 - (long)in_stack_00000020;
    in_stack_00000020 = unaff_R14;
    func_0x0412a280(plVar14,lVar15);
    plVar9 = in_stack_00000020;
  }
LAB_04fbc53f:
  do {
    in_stack_00000020 = plVar9;
    in_stack_00000028 = unaff_RBP;
    FUN_0eeb81b0(&stack0x000000c0);
    if ((_cStack0000000000000040 & 1) != 0) {
      func_0x0412a280(in_stack_00000050,_cStack0000000000000040 & 0xfffffffffffffffe);
    }
    FUN_04862ba0(&stack0x000000a8);
    FUN_048655b0(&stack0x00000068,*(undefined8 *)(in_stack_00000060 + 0x10));
    cVar4 = FUN_04862c80(&stack0x000000a8,&stack0x00000068);
    FUN_04862b40(&stack0x00000068);
    if (cVar4 != '\0') {
      FUN_04862b40(&stack0x000000a8);
      lVar15 = in_stack_00000058[0x17];
      in_stack_000000d8 = in_stack_00000058[0x18];
      if (lVar15 != in_stack_000000d8) {
        in_stack_00000098 = *in_FS_OFFSET;
        in_stack_000000e8 = in_stack_00000098 + -0x28;
        in_stack_00000058 = (long *)(in_stack_00000098 + -0x20);
        do {
          lVar19 = *(long *)(lVar15 + 0x88);
          in_stack_000000f0 = *(long *)(lVar15 + 0x90);
          in_stack_000000e0 = lVar15;
          if ((lVar19 != in_stack_000000f0) && (in_stack_00000020 != in_stack_00000028)) {
            do {
              in_stack_00000090 = in_stack_00000028;
              plVar9 = in_stack_00000028;
              plVar14 = in_stack_00000020;
              if (in_stack_00000020 != in_stack_00000028) {
                do {
                  if (*(long *)(lVar19 + 0x28) == *plVar14) {
                    bVar20 = (*(byte *)(plVar14 + 1) & 1) != 0;
                    lVar15 = (long)plVar14 + 9;
                    if (bVar20) {
                      lVar15 = plVar14[3];
                    }
                    uVar7 = (ulong)(*(byte *)(plVar14 + 1) >> 1);
                    if (bVar20) {
                      uVar7 = plVar14[2];
                    }
                    in_stack_000000c0 = 0;
                    if (lVar15 == 0) {
                      in_stack_000000c0 = (ulong)((uint)uVar7 & 0x7f) << 0x30;
                    }
                    else {
                      lVar8 = uVar7 + 9;
                      puVar10 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
                      if (lVar8 != 0 && puVar10 == (ulong *)0x0) {
                        FUN_0eec74c0(lVar8,8);
                      }
                      *puVar10 = uVar7;
                      memcpy(puVar10 + 1,lVar15,uVar7);
                      *(undefined1 *)((long)puVar10 + uVar7 + 8) = 0;
                      in_stack_000000c0 =
                           (ulong)(puVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                    }
                    in_stack_00000068 = (long *)((ulong)in_stack_00000068 & 0xffffffffffffff00);
                    in_stack_00000078 = (long *)((ulong)in_stack_00000078 & 0xffffffffffffff00);
                    FUN_0eeb79f0(&stack0x00000040,&stack0x000000c0);
                    plVar11 = in_stack_00000058;
                    if ((in_stack_000000c0 & 0x80000000000000) != 0) {
                      (**(code **)(_DAT_0f5463b0 + 0x28))
                                (&DAT_0f5463b0,(in_stack_000000c0 & 0xff00ffffffffffff) - 8);
                    }
                    (**(code **)(*(long *)*plVar14 + 0x20))
                              ((long *)*plVar14,in_stack_00000060,plVar14 + 1,plVar14[4],0);
                    if (cStack0000000000000040 == '\x01') {
                      plVar9 = in_stack_00000090;
                      if (in_stack_00000050 == (long *)0x0) goto LAB_04fbc678;
                      plVar9 = (long *)FUN_0412c300();
                      uVar7 = _uStack0000000000000048;
                      if (plVar9 == (long *)0x0) goto joined_r0x04fbc9e8;
                      if (_uStack0000000000000048 == 0) {
LAB_04fbc9c0:
                        LOCK();
                        plVar11 = plVar9 + 1;
                        lVar15 = *plVar11;
                        *plVar11 = *plVar11 + -1;
                        UNLOCK();
                      }
                      else {
                        if ((DAT_0f7ba228 == '\0') &&
                           (iVar5 = FUN_04108328(&DAT_0f7ba228), iVar5 != 0)) {
                          _DAT_0f7ba200 = (undefined8 *)0x0;
                          _DAT_0f7ba208 = (undefined8 *)0x0;
                          _DAT_0f7ba1f0 = 0;
                          _DAT_0f7ba1f8 = (undefined8 *)0x0;
                          _DAT_0f7ba1e0 = 0;
                          uRam000000000f7ba1e8 = 0;
                          _DAT_0f7ba1d0 = 0;
                          uRam000000000f7ba1d8 = 0;
                          puVar12 = (undefined8 *)
                                    (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                          if (puVar12 == (undefined8 *)0x0) {
                            FUN_0eec74c0(0x80,0);
                          }
                          _DAT_0f7ba200 = puVar12 + 0x10;
                          _DAT_0f7ba1f8 = puVar12;
                          _DAT_0f7ba208 = _DAT_0f7ba200;
                          puVar12[0xe] = 0;
                          puVar12[0xf] = 0;
                          puVar12[0xc] = 0;
                          puVar12[0xd] = 0;
                          puVar12[10] = 0;
                          puVar12[0xb] = 0;
                          puVar12[8] = 0;
                          puVar12[9] = 0;
                          puVar12[6] = 0;
                          puVar12[7] = 0;
                          puVar12[4] = 0;
                          puVar12[5] = 0;
                          puVar12[2] = 0;
                          puVar12[3] = 0;
                          *puVar12 = 0;
                          puVar12[1] = 0;
                          _DAT_0f7ba210 = 0;
                          uRam000000000f7ba218 = 0;
                          _DAT_0f7ba220 = 0;
                          _DAT_0f7ba230 = &DAT_0f7ba1d0;
                          __cxa_atexit(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
                          func_0x0410844d(&DAT_0f7ba228);
                        }
                        in_stack_000000a0 = uVar7;
                        puVar13 = (uint *)(uVar7 + 0x78);
                        uVar1 = *puVar13;
                        uVar7 = (ulong)uVar1;
                        if (*(char *)(in_stack_00000098 + -8) == '\0') {
                          FUN_0eee07b0(in_stack_00000098 + -0x28,&DAT_0f7ba230);
                          lVar15 = in_stack_00000098;
                          FUN_0417d010(&UNK_0eee0b40,in_stack_00000098 + -0x28,0xf53dab8);
                          *(undefined1 *)(lVar15 + -8) = 1;
                          plVar11 = in_stack_00000058;
                        }
                        if (uVar7 < (ulong)(*(long *)(in_stack_000000e8 + 0x10) -
                                            *(long *)(in_stack_000000e8 + 8) >> 3)) {
                          lVar15 = *(long *)(*(long *)(in_stack_000000e8 + 8) + uVar7 * 8);
                          if (lVar15 != 0) goto LAB_04fbc853;
LAB_04fbc900:
                          plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
                          if (plVar11 == (long *)0x0) {
                            FUN_0eec74c0(0x40,0);
                          }
                          *plVar11 = (long)plVar11;
                          plVar11[1] = (long)plVar11;
                          plVar18 = plVar11 + 2;
                          plVar11[2] = 0;
                          plVar11[3] = 0;
                          plVar11[4] = 0;
                          plVar11[5] = 0;
                          plVar11[6] = 0;
                          plVar11[7] = 0;
                          plVar2 = *(long **)(in_stack_000000a0 + 0x30);
                          in_stack_00000068 = plVar18;
                          if (plVar2 == (long *)0x0) {
                            FUN_04891200();
                            goto LAB_04fbcbf0;
                          }
                          (**(code **)(*plVar2 + 0x30))(plVar2,&stack0x00000068);
                          FUN_0eee1580(puVar13,plVar11);
                          lVar15 = in_stack_000000a0 + 0x50;
                          FUN_0412d680(lVar15);
                          puVar12 = *(undefined8 **)(in_stack_000000a0 + 0x48);
                          plVar11[1] = (long)puVar12;
                          *plVar11 = in_stack_000000a0 + 0x40;
                          *puVar12 = plVar11;
                          *(long **)(in_stack_000000a0 + 0x48) = plVar11;
                          func_0x0412d6b0(lVar15);
                          lVar15 = plVar11[3];
                          if (*plVar18 == lVar15) goto LAB_04fbc9c0;
                        }
                        else {
                          FUN_0412d680(&DAT_0f7ba1d0);
                          FUN_0eee1060(plVar11,uVar1 + 1);
                          func_0x0412d6b0(&DAT_0f7ba1d0);
                          lVar15 = *(long *)(*plVar11 + uVar7 * 8);
                          if (lVar15 == 0) goto LAB_04fbc900;
LAB_04fbc853:
                          plVar18 = (long *)(lVar15 + 0x10);
                          lVar15 = *(long *)(lVar15 + 0x18);
                          if (*plVar18 == lVar15) goto LAB_04fbc9c0;
                        }
                        if ((char *)*(undefined8 **)(lVar15 + -8) != &stack0x00000040)
                        goto LAB_04fbc9c0;
                        if ((*(ulong *)(lVar15 + -0x10) & 0x80000000000000) != 0) {
                          (**(code **)(_DAT_0f5463b0 + 0x28))
                                    (&DAT_0f5463b0,
                                     (*(ulong *)(lVar15 + -0x10) & 0xff00ffffffffffff) - 8);
                        }
                        *(undefined8 *)(lVar15 + -0x10) = 0;
                        plVar18[1] = lVar15 + -0x28;
                        LOCK();
                        plVar11 = plVar9 + 1;
                        lVar15 = *plVar11;
                        *plVar11 = *plVar11 + -1;
                        UNLOCK();
                      }
                      if (lVar15 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                        func_0x0412c2d0(plVar9);
                      }
                    }
joined_r0x04fbc9e8:
                    plVar9 = in_stack_00000090;
                    if (in_stack_00000050 != (long *)0x0) {
                      func_0x0412c2d0();
                      plVar9 = in_stack_00000090;
                    }
                  }
LAB_04fbc678:
                  plVar14 = plVar14 + 5;
                } while (plVar14 != plVar9);
              }
              lVar19 = lVar19 + 0x38;
            } while (lVar19 != in_stack_000000f0);
          }
          lVar15 = in_stack_000000e0 + 0xa8;
        } while (lVar15 != in_stack_000000d8);
      }
      plVar14 = in_stack_00000020;
      plVar9 = in_stack_00000028;
      if (in_stack_00000020 != (long *)0x0) {
        for (; plVar14 != plVar9; plVar9 = plVar9 + -5) {
          if ((*(byte *)(plVar9 + -4) & 1) != 0) {
            func_0x0412a280(plVar9[-2],plVar9[-4] & 0xfffffffffffffffe);
          }
        }
        in_stack_00000028 = plVar14;
        func_0x0412a280(in_stack_00000020,
                        CONCAT44(uStack0000000000000034,uStack0000000000000030) -
                        (long)in_stack_00000020);
      }
      return;
    }
    uVar6 = FUN_04862ca0(&stack0x000000a8);
    uVar7 = strlen(uVar6);
    if (0xfffffffffffffff7 < uVar7) goto LAB_04fbcbf0;
    if (uVar7 < 0x17) {
      _cStack0000000000000040 = CONCAT71(uStack0000000000000041,(char)uVar7 * '\x02');
      plVar9 = (long *)((long)&stack0x00000040 + 1);
      if (uVar7 != 0) goto LAB_04fbc26b;
    }
    else {
      uVar17 = (uVar7 | 7) + 1;
      if ((uVar7 | 7) == 0x17) {
        uVar17 = 0x1a;
      }
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (plVar9 == (long *)0x0) {
        FUN_0eec74c0(uVar17,0);
      }
      _cStack0000000000000040 = uVar17 | 1;
      _uStack0000000000000048 = uVar7;
      in_stack_00000050 = plVar9;
LAB_04fbc26b:
      memmove(plVar9,uVar6,uVar7);
    }
    *(undefined1 *)((long)plVar9 + uVar7) = 0;
    in_stack_00000070 = _cStack0000000000000040 >> 1 & 0x7f;
    in_stack_00000068 = (long *)((long)&stack0x00000040 + 1);
    if ((_cStack0000000000000040 & 1) != 0) {
      in_stack_00000070 = _uStack0000000000000048;
      in_stack_00000068 = in_stack_00000050;
    }
    in_stack_00000078 = (long *)CONCAT71(in_stack_00000078._1_7_,1);
    in_stack_000000b8 = 0;
    FUN_0eeb79f0(&stack0x000000c0,&stack0x000000b8);
    if ((in_stack_000000b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_000000b8 & 0xff00ffffffffffff) - 8);
    }
    uVar6 = FUN_04862b80(&stack0x000000a8);
    lVar15 = func_0x04fbd340(in_stack_00000058,in_stack_00000060,&stack0x00000040,uVar6);
    in_stack_00000090 = (long *)FUN_04862b80(&stack0x000000a8);
    unaff_RBP = in_stack_00000028;
    unaff_R12 = in_stack_00000020;
    if ((long *)CONCAT44(uStack0000000000000034,uStack0000000000000030) <= in_stack_00000028) break;
    *in_stack_00000028 = lVar15;
    if ((_cStack0000000000000040 & 1) == 0) {
      in_stack_00000028[3] = (long)in_stack_00000050;
      *(undefined4 *)(in_stack_00000028 + 1) = _cStack0000000000000040;
      *(undefined4 *)((long)in_stack_00000028 + 0xc) = uStack0000000000000041._3_4_;
      *(undefined4 *)(in_stack_00000028 + 2) = uStack0000000000000048;
      *(undefined4 *)((long)in_stack_00000028 + 0x14) = uStack000000000000004c;
    }
    else {
      FUN_0412e5e0(in_stack_00000028 + 1,in_stack_00000050,_uStack0000000000000048);
    }
    unaff_RBP[4] = (long)in_stack_00000090;
    unaff_RBP = unaff_RBP + 5;
    plVar9 = in_stack_00000020;
  } while( true );
  lVar19 = (long)in_stack_00000028 - (long)in_stack_00000020;
  uVar7 = (lVar19 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar7) goto LAB_04fbcbf5;
  lVar8 = (long)CONCAT44(uStack0000000000000034,uStack0000000000000030) - (long)in_stack_00000020 >>
          3;
  uVar17 = lVar8 * -0x6666666666666666;
  if (uVar7 < uVar17) {
    uVar7 = uVar17;
  }
  if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
    uVar7 = 0x666666666666666;
  }
  in_stack_00000088 = &stack0x00000020;
  if (uVar7 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    if (0x666666666666666 < uVar7) goto LAB_04fbcbfa;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7 * 0x28);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(uVar7 * 0x28,0);
      plVar9 = (long *)0x0;
    }
  }
  uVar17 = (long)plVar9 + lVar19;
  _uStack0000000000000080 = plVar9 + uVar7 * 5;
  *(long *)((long)plVar9 + lVar19) = lVar15;
  puVar16 = (undefined4 *)((long)plVar9 + lVar19 + 8);
  in_stack_00000078 = (long *)uVar17;
  in_stack_00000070 = uVar17;
  in_stack_00000068 = plVar9;
  if ((_cStack0000000000000040 & 1) == 0) {
    *(long **)((long)plVar9 + lVar19 + 0x18) = in_stack_00000050;
    *puVar16 = _cStack0000000000000040;
    *(undefined4 *)((long)plVar9 + lVar19 + 0xc) = uStack0000000000000041._3_4_;
    *(undefined4 *)((long)plVar9 + lVar19 + 0x10) = uStack0000000000000048;
    *(undefined4 *)((long)plVar9 + lVar19 + 0x14) = uStack000000000000004c;
  }
  else {
    FUN_0412e5e0(puVar16,in_stack_00000050,_uStack0000000000000048);
    lVar19 = (long)in_stack_00000028 - (long)in_stack_00000020;
    unaff_RBP = in_stack_00000028;
    unaff_R12 = in_stack_00000020;
  }
  unaff_R14 = (long *)(in_stack_00000070 - lVar19);
  *(long **)(uVar17 + 0x20) = in_stack_00000090;
  in_stack_00000078 = (long *)((long)in_stack_00000078 + 0x28);
  puVar12 = &stack0x00000020;
  goto code_r0x04fbc506;
LAB_04fbcbf0:
  FUN_04882e30();
LAB_04fbcbf5:
  func_0x04fbd830();
LAB_04fbcbfa:
  uVar6 = FUN_04882eb0();
  func_0x041084d6(&DAT_0f7ba228);
  uVar6 = FUN_04882e20(uVar6);
  func_0x0412d6b0(&DAT_0f7ba1d0);
  uVar6 = FUN_04882e20(uVar6);
  uVar6 = FUN_04882e20(uVar6);
  func_0x04fbd840(&stack0x00000068);
  func_0x04fbd7c0(&stack0x00000020);
  uVar6 = _Unwind_Resume(uVar6);
  func_0x04fbd7c0(&stack0x00000020);
  uVar6 = _Unwind_Resume(uVar6);
  FUN_0ee386e0(&stack0x000000c0);
  func_0x04fbd7c0(&stack0x00000020);
  uVar6 = _Unwind_Resume(uVar6);
  FUN_0eeb81b0(&stack0x00000040);
  func_0x04fbd7c0(&stack0x00000020);
  _Unwind_Resume(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


```
