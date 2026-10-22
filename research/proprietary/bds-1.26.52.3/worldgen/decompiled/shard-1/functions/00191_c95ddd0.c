/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc95ddd0
 * Label: Dimension::vslot0
 * Body:  [[0c95ddc0, 0c95ddcc] [0c95ddd0, 0c95df16] [0c95df20, 0c95e094] [0c95e0a0, 0c95e1d5] [0c95f04b, 0c95f07b] [0c95f080, 0c95f967] [0c95f970, 0c95f9d0] [0c95f9e0, 0c95fa40] [0c95fa50, 0c95fab0] [0c95fac0, 0c95fadf]]
 * Ghidra: wg_Dimension__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] wg_Dimension__vslot0(void)

{
  undefined1 *puVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  byte *in_RAX;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte in_CL;
  uint uVar12;
  int *unaff_RBX;
  undefined1 *puVar13;
  ulong uVar14;
  int iVar15;
  int *piVar16;
  int *unaff_R15;
  int *piVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  int in_stack_00000008;
  undefined *in_stack_00000010;
  undefined1 uStack0000000000000020;
  undefined7 uStack0000000000000021;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char in_stack_00000048;
  int *in_stack_00000058;
  int iStack0000000000000060;
  int iStack0000000000000064;
  int in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  int iStack00000000000000a0;
  int *in_stack_000000b0;
  int *in_stack_000000b8;
  long in_stack_000000c0;
  undefined1 *in_stack_000000d0;
  undefined1 *in_stack_000000d8;
  long in_stack_000000e0;
  int iStack0000000000000118;
  int iStack000000000000011c;
  undefined1 in_stack_00000120;
  undefined4 in_stack_00000130;
  undefined1 in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  int *in_stack_000001a0;
  int *in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  undefined8 in_stack_000001f8;
  long *in_stack_00000298;
  
  bVar19 = false;
  *in_RAX = *in_RAX | in_CL;
  bVar18 = (char)*in_RAX < '\0';
  do {
    if (((bVar19 == bVar18) &&
        (func_0x09dba510(in_stack_00000298,unaff_R15), 0x14 < in_stack_00000008)) &&
       (lVar6 = (**(code **)(*in_stack_00000298 + 0x138))(in_stack_00000298,unaff_R15), lVar6 != 0))
    {
      _uStack0000000000000020 =
           CONCAT71(uStack0000000000000021,(char)*unaff_R15) & 0xffffffffffffff0f;
      _uStack0000000000000020 =
           CONCAT62(uStack0000000000000021._1_6_,CONCAT11((char)unaff_R15[2],uStack0000000000000020)
                   ) & 0xffffffffffff0fff;
      _uStack0000000000000020 =
           CONCAT22((short)unaff_R15[1] - *(short *)((long)in_stack_00000298 + 0x42),
                    _uStack0000000000000020);
      lVar6 = func_0x0cb18130(lVar6 + 0x13d0,&stack0x00000020);
      if (((lVar6 != 0) && (*(long **)(lVar6 + 0x18) != (long *)0x0)) &&
         (plVar7 = (long *)(**(code **)(**(long **)(lVar6 + 0x18) + 0xd8))(), plVar7 != (long *)0x0)
         ) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
    }
    lVar6 = (**(code **)(*in_stack_00000298 + 0x10))(in_stack_00000298,unaff_R15);
    lVar8 = (**(code **)(*in_stack_00000298 + 0x138))(in_stack_00000298,unaff_R15);
    if (lVar8 == 0) {
LAB_0c95df20:
      bVar18 = true;
      plVar7 = (long *)0x0;
      lVar8 = *(long *)(unaff_R15 + 4);
    }
    else {
      _uStack0000000000000020 =
           CONCAT71(uStack0000000000000021,(char)*unaff_R15) & 0xffffffffffffff0f;
      _uStack0000000000000020 =
           CONCAT62(uStack0000000000000021._1_6_,CONCAT11((char)unaff_R15[2],uStack0000000000000020)
                   ) & 0xffffffffffff0fff;
      _uStack0000000000000020 =
           CONCAT22((short)unaff_R15[1] - *(short *)((long)in_stack_00000298 + 0x42),
                    _uStack0000000000000020);
      lVar8 = func_0x0cb18130(lVar8 + 0x13d0,&stack0x00000020);
      if ((lVar8 == 0) || (plVar7 = *(long **)(lVar8 + 0x18), plVar7 == (long *)0x0))
      goto LAB_0c95df20;
      plVar9 = (long *)(**(code **)(*plVar7 + 0xd8))(plVar7);
      if (plVar9 == (long *)0x0) {
        if (plVar7[5] == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(plVar7[5] + 8);
        }
      }
      else {
        lVar8 = (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      bVar18 = lVar8 == 0;
      lVar8 = *(long *)(unaff_R15 + 4);
    }
    if ((((0xf < in_stack_00000008) && (*(long *)(lVar8 + 0x110) != *(long *)(lVar6 + 0x110))) &&
        (*(long *)(lVar8 + 0x110) != *(long *)((long)in_stack_00000058 + 0x110))) &&
       (*(long *)(*(long *)(lVar8 + 0x68) + 200) != _DAT_0f710840)) {
      uVar14 = (ulong)in_stack_00000040 >> 8;
      in_stack_00000040 = CONCAT71((int7)uVar14,1);
      uVar14 = (ulong)in_stack_00000038 >> 0x20;
      in_stack_00000038 = CONCAT44((int)uVar14,3);
      uVar14 = in_stack_00000028 >> 8;
      in_stack_00000028 = CONCAT71((int7)uVar14,2);
      (**(code **)(*in_stack_00000298 + 0xf8))
                (in_stack_00000298,unaff_R15,in_stack_00000058,4,0,&stack0x00000020);
    }
    (**(code **)(**(long **)(lVar8 + 0x68) + 0x160))(&stack0x00000020);
    uVar10 = (**(code **)(*in_stack_00000298 + 0x28))(in_stack_00000298,unaff_R15);
    if ((0x17 < in_stack_00000008) && (in_stack_00000048 == '\x01')) {
      uVar11 = func_0x0cc41df0(0xf6ff9e0,&stack0x00000020,1);
      (**(code **)(*in_stack_00000298 + 0x100))(in_stack_00000298,unaff_R15,uVar11,4);
    }
    in_stack_00000138 = 1;
    in_stack_00000130 = 3;
    in_stack_00000120 = 2;
    cVar3 = (**(code **)(*in_stack_00000298 + 0xf8))
                      (in_stack_00000298,unaff_R15,*(undefined8 *)(unaff_R15 + 4),2,0,
                       &stack0x00000118);
    if (cVar3 == '\0') {
      if (((0xd < in_stack_00000008) &&
          (lVar8 = (**(code **)(*in_stack_00000298 + 0x10))(in_stack_00000298,unaff_R15),
          *(long *)(lVar6 + 0x110) == *(long *)(lVar8 + 0x110))) &&
         ((iVar15 = unaff_R15[1], sVar4 = (**(code **)(*in_stack_00000298 + 0x110))(),
          sVar4 <= iVar15 &&
          (iVar15 = unaff_R15[1], sVar4 = (**(code **)(*in_stack_00000298 + 0x118))(),
          iVar15 < sVar4)))) {
        iStack0000000000000118 = *unaff_R15 >> 4;
        iStack000000000000011c = unaff_R15[2] >> 4;
        lVar6 = (**(code **)(*in_stack_00000298 + 0x148))(in_stack_00000298,&stack0x00000118);
        if (lVar6 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(byte *)(lVar6 + 0x5a) ^ 1;
        }
        _iStack00000000000000a0 = (ulong)((int)_iStack00000000000000a0 + uVar12);
      }
    }
    else {
      _iStack00000000000000a0 = (ulong)((int)_iStack00000000000000a0 + 1);
    }
    if (0x17 < in_stack_00000008) {
      if (in_stack_00000048 == '\x01') {
        (**(code **)(*in_stack_00000298 + 0x100))(in_stack_00000298,unaff_R15,uVar10);
      }
      if (!(bool)(in_stack_00000008 < 0x27 | bVar18)) {
        (**(code **)(*plVar7 + 0x58))(plVar7,in_stack_00000298);
      }
    }
    if ((in_stack_00000048 == '\x01') && ((in_stack_00000028 & 1) != 0)) {
      func_0x0412a280(in_stack_00000038,in_stack_00000028 & 0xfffffffffffffffe);
    }
    puVar1 = in_stack_000000d8;
    unaff_R15 = unaff_R15 + 8;
    if (unaff_R15 == unaff_RBX) break;
    bVar19 = SBORROW4(in_stack_00000008,8);
    bVar18 = in_stack_00000008 + -8 < 0;
  } while( true );
  in_stack_00000010 = &UNK_0f087d20;
  if (in_stack_000000d0 != in_stack_000000d8) {
    puVar13 = in_stack_000000d0;
    do {
      lVar6 = (**(code **)(*in_stack_00000298 + 0x138))(in_stack_00000298,puVar13);
      if (lVar6 != 0) {
        _uStack0000000000000020 = CONCAT71(uStack0000000000000021,*puVar13) & 0xffffffffffffff0f;
        _uStack0000000000000020 =
             CONCAT62(uStack0000000000000021._1_6_,CONCAT11(puVar13[8],uStack0000000000000020)) &
             0xffffffffffff0fff;
        _uStack0000000000000020 =
             CONCAT22(*(short *)(puVar13 + 4) - *(short *)((long)in_stack_00000298 + 0x42),
                      _uStack0000000000000020);
        lVar6 = func_0x0cb18130(lVar6 + 0x13d0,&stack0x00000020);
        if (((lVar6 != 0) && (plVar7 = *(long **)(lVar6 + 0x18), plVar7 != (long *)0x0)) &&
           (*(long *)(puVar13 + 0x18) != 0)) {
          uVar10 = (**(code **)(*in_stack_00000298 + 0x150))();
          (**(code **)(*plVar7 + 0x10))
                    (plVar7,uVar10,*(undefined8 *)(puVar13 + 0x18),&stack0x00000010);
          (**(code **)(*plVar7 + 0x30))(plVar7,*(undefined8 *)(puVar13 + 0x18),in_stack_00000298);
          (**(code **)(*plVar7 + 0x38))(plVar7,in_stack_00000298);
          plVar9 = (long *)(**(code **)(*plVar7 + 0xd8))(plVar7);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0xb0))(plVar9);
          }
          if (plVar7[5] != 0) {
            (**(code **)(*in_stack_00000298 + 0x208))(in_stack_00000298,plVar7);
          }
        }
      }
      puVar13 = puVar13 + 0x20;
    } while (puVar13 != puVar1);
  }
  piVar2 = in_stack_000000b8;
  uVar12 = (uint)(4 < in_stack_00000008) << 4 | 3;
  piVar16 = in_stack_000001a0;
  for (piVar17 = in_stack_000000b0; in_stack_000001a0 = piVar16, piVar17 != piVar2;
      piVar17 = piVar17 + 8) {
    lVar8 = (**(code **)(*in_stack_00000298 + 0x10))(in_stack_00000298,piVar17);
    lVar6 = lVar8;
    if (in_stack_00000008 < 0x10) {
      lVar6 = *(long *)(piVar17 + 4);
    }
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    _uStack0000000000000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000040 = 1;
    (**(code **)(*in_stack_00000298 + 0xf8))
              (in_stack_00000298,piVar17,lVar6,uVar12,0,&stack0x00000020);
    if (4 < in_stack_00000008) {
      cVar3 = func_0x0cd7f890(lVar8 + 8);
      if (((cVar3 != '\0') ||
          (cVar3 = func_0x0cd7f890(*(long *)(lVar8 + 0x68) + 0x28), cVar3 != '\0')) ||
         (cVar3 = (**(code **)(**(long **)(lVar8 + 0x68) + 0x118))(), cVar3 != '\0')) {
        plVar7 = (long *)(**(code **)(*in_stack_00000298 + 0x150))();
        cVar3 = (**(code **)(*plVar7 + 0x9f0))(plVar7);
        if ((cVar3 == '\0') || ((char)in_stack_00000298[0xc] == '\x01')) {
          lVar6 = in_stack_00000298[0x1e];
          if (lVar6 == 0) {
            _uStack0000000000000020 = CONCAT44(piVar17[2] >> 4,*piVar17 >> 4);
            lVar6 = (**(code **)(*in_stack_00000298 + 0x148))(in_stack_00000298,&stack0x00000020);
            if (lVar6 == 0) goto LAB_0c95f31f;
            lVar6 = *(long *)(lVar6 + 0xf8);
          }
          func_0x0c9d2c20(lVar6,in_stack_00000298,piVar17,lVar8,1,0);
        }
      }
LAB_0c95f31f:
      lVar6 = *(long *)(lVar8 + 0x68) + 0x368;
      cVar3 = func_0x0c6ed790(lVar6,7);
      if ((((cVar3 != '\0') || (cVar3 = func_0x0c6ed790(lVar6,8), cVar3 != '\0')) ||
          (cVar3 = func_0x0c6ed790(*(long *)(lVar8 + 0x68) + 0x368,7), cVar3 != '\0')) ||
         (cVar3 = func_0x0c6ed790(*(long *)(lVar8 + 0x68) + 0x368,8), cVar3 != '\0')) {
        in_stack_00000070 = 0;
        _uStack0000000000000020 =
             CONCAT44(piVar17[1] - iStack0000000000000064,*piVar17 - iStack0000000000000060);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,piVar17[2] - in_stack_00000068);
        lVar6 = in_stack_00000298[0x1d];
        if (lVar6 == 0) {
          iStack0000000000000118 = *piVar17 - iStack0000000000000060 >> 4;
          iStack000000000000011c = piVar17[2] - in_stack_00000068 >> 4;
          lVar6 = (**(code **)(*in_stack_00000298 + 0x148))(in_stack_00000298,&stack0x00000118);
          if (lVar6 == 0) goto LAB_0c95f1ed;
          lVar6 = *(long *)(lVar6 + 0x100);
        }
        cVar3 = func_0x0c9d2870(lVar6,&stack0x00000020,&stack0x00000070);
        uVar10 = in_stack_00000070;
        if (cVar3 != '\0') {
          lVar6 = in_stack_00000298[0x1d];
          if (lVar6 == 0) {
            _uStack0000000000000020 =
                 CONCAT44(piVar17[2] - in_stack_00000068 >> 4,*piVar17 - iStack0000000000000060 >> 4
                         );
            lVar6 = (**(code **)(*in_stack_00000298 + 0x148))(in_stack_00000298,&stack0x00000020);
            if (lVar6 != 0) {
              lVar6 = *(long *)(lVar6 + 0x100);
              goto LAB_0c95f482;
            }
            iVar15 = 0;
          }
          else {
LAB_0c95f482:
            iVar15 = *(int *)(lVar6 + 8);
          }
          plVar7 = (long *)(**(code **)(*in_stack_00000298 + 0x150))();
          cVar3 = (**(code **)(*plVar7 + 0x9f0))(plVar7);
          if ((cVar3 == '\0') || ((char)in_stack_00000298[0xc] == '\x01')) {
            lVar6 = in_stack_00000298[0x1d];
            if (lVar6 == 0) {
              _uStack0000000000000020 = CONCAT44(piVar17[2] >> 4,*piVar17 >> 4);
              lVar6 = (**(code **)(*in_stack_00000298 + 0x148))(in_stack_00000298,&stack0x00000020);
              if (lVar6 == 0) goto LAB_0c95f1ed;
              lVar6 = *(long *)(lVar6 + 0x100);
            }
            func_0x0c9d2c20(lVar6,in_stack_00000298,piVar17,lVar8,(int)uVar10 - iVar15,0);
          }
        }
      }
    }
LAB_0c95f1ed:
    piVar16 = in_stack_000001a0;
  }
  in_stack_00000058 = in_stack_000001a8;
  if (piVar16 != in_stack_000001a8) {
    do {
      uVar5 = (**(code **)(*in_stack_00000298 + 0x100))
                        (in_stack_00000298,piVar16,*(undefined8 *)(piVar16 + 4),uVar12);
      if (4 < in_stack_00000008) {
        lVar6 = (**(code **)(*in_stack_00000298 + 0x28))(in_stack_00000298,piVar16);
        cVar3 = func_0x0cd7f890(lVar6 + 8);
        if (((cVar3 != '\0') ||
            (cVar3 = func_0x0cd7f890(*(long *)(lVar6 + 0x68) + 0x28), cVar3 != '\0')) ||
           (cVar3 = (**(code **)(**(long **)(lVar6 + 0x68) + 0x118))(), cVar3 != '\0')) {
          plVar7 = (long *)(**(code **)(*in_stack_00000298 + 0x150))();
          cVar3 = (**(code **)(*plVar7 + 0x9f0))(plVar7);
          if ((cVar3 == '\0') || ((char)in_stack_00000298[0xc] == '\x01')) {
            lVar8 = in_stack_00000298[0x1e];
            if (lVar8 == 0) {
              _uStack0000000000000020 = CONCAT44(piVar16[2] >> 4,*piVar16 >> 4);
              lVar8 = (**(code **)(*in_stack_00000298 + 0x148))(in_stack_00000298,&stack0x00000020);
              if (lVar8 == 0) goto LAB_0c95f6f1;
              lVar8 = *(long *)(lVar8 + 0xf8);
            }
            func_0x0c9d2c20(lVar8,in_stack_00000298,piVar16,lVar6,1,0);
          }
        }
LAB_0c95f6f1:
        lVar8 = *(long *)(lVar6 + 0x68) + 0x368;
        cVar3 = func_0x0c6ed790(lVar8,7);
        if ((((cVar3 != '\0') || (cVar3 = func_0x0c6ed790(lVar8,8), cVar3 != '\0')) ||
            (cVar3 = func_0x0c6ed790(*(long *)(lVar6 + 0x68) + 0x368,7), cVar3 != '\0')) ||
           (cVar3 = func_0x0c6ed790(*(long *)(lVar6 + 0x68) + 0x368,8), cVar3 != '\0')) {
          in_stack_00000070 = 0;
          _uStack0000000000000020 =
               CONCAT44(piVar16[1] - iStack0000000000000064,*piVar16 - iStack0000000000000060);
          in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,piVar16[2] - in_stack_00000068);
          lVar8 = in_stack_00000298[0x1d];
          if (lVar8 == 0) {
            iStack0000000000000118 = *piVar16 - iStack0000000000000060 >> 4;
            iStack000000000000011c = piVar16[2] - in_stack_00000068 >> 4;
            lVar8 = (**(code **)(*in_stack_00000298 + 0x148))(in_stack_00000298,&stack0x00000118);
            if (lVar8 == 0) goto LAB_0c95f5c0;
            lVar8 = *(long *)(lVar8 + 0x100);
          }
          cVar3 = func_0x0c9d2870(lVar8,&stack0x00000020,&stack0x00000070);
          uVar10 = in_stack_00000070;
          if (cVar3 != '\0') {
            lVar8 = in_stack_00000298[0x1d];
            if (lVar8 == 0) {
              _uStack0000000000000020 =
                   CONCAT44(piVar16[2] - in_stack_00000068 >> 4,
                            *piVar16 - iStack0000000000000060 >> 4);
              lVar8 = (**(code **)(*in_stack_00000298 + 0x148))(in_stack_00000298,&stack0x00000020);
              if (lVar8 != 0) {
                lVar8 = *(long *)(lVar8 + 0x100);
                goto LAB_0c95f854;
              }
              iVar15 = 0;
            }
            else {
LAB_0c95f854:
              iVar15 = *(int *)(lVar8 + 8);
            }
            plVar7 = (long *)(**(code **)(*in_stack_00000298 + 0x150))();
            cVar3 = (**(code **)(*plVar7 + 0x9f0))(plVar7);
            if ((cVar3 == '\0') || ((char)in_stack_00000298[0xc] == '\x01')) {
              lVar8 = in_stack_00000298[0x1d];
              if (lVar8 == 0) {
                _uStack0000000000000020 = CONCAT44(piVar16[2] >> 4,*piVar16 >> 4);
                lVar8 = (**(code **)(*in_stack_00000298 + 0x148))
                                  (in_stack_00000298,&stack0x00000020);
                if (lVar8 == 0) goto LAB_0c95f5c0;
                lVar8 = *(long *)(lVar8 + 0x100);
              }
              func_0x0c9d2c20(lVar8,in_stack_00000298,piVar16,lVar6,(int)uVar10 - iVar15,0);
            }
          }
        }
      }
LAB_0c95f5c0:
      _iStack00000000000000a0 = (ulong)((int)_iStack00000000000000a0 + (uVar5 & 0xff));
      piVar16 = piVar16 + 8;
    } while (piVar16 != in_stack_00000058);
  }
  piVar17 = in_stack_000000b0;
  uVar14 = 0;
  if (0 < (int)_iStack00000000000000a0) {
    uVar14 = _iStack00000000000000a0 & 0xffffffff;
  }
  piVar16 = in_stack_000000b8;
  if (in_stack_000000b0 != (int *)0x0) {
    for (; piVar17 != piVar16; piVar16 = piVar16 + -8) {
      plVar7 = *(long **)(piVar16 + -2);
      piVar16[-2] = 0;
      piVar16[-1] = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    in_stack_000000b8 = piVar17;
    func_0x0412a280(in_stack_000000b0,in_stack_000000c0 - (long)in_stack_000000b0);
  }
  if (in_stack_00000140 != 0) {
    in_stack_00000148 = in_stack_00000140;
    func_0x0412a280(in_stack_00000140,in_stack_00000150 - in_stack_00000140);
  }
  if (in_stack_00000080 != 0) {
    in_stack_00000088 = in_stack_00000080;
    func_0x0412a280(in_stack_00000080,in_stack_00000090 - in_stack_00000080);
  }
  piVar16 = in_stack_000001a0;
  piVar17 = in_stack_000001a8;
  if (in_stack_000001a0 != (int *)0x0) {
    for (; piVar16 != piVar17; piVar17 = piVar17 + -8) {
      plVar7 = *(long **)(piVar17 + -2);
      piVar17[-2] = 0;
      piVar17[-1] = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    in_stack_000001a8 = piVar16;
    func_0x0412a280(in_stack_000001a0,in_stack_000001b0 - (long)in_stack_000001a0);
  }
  lVar8 = in_stack_000001c0;
  lVar6 = in_stack_000001c8;
  if (in_stack_000001c0 != 0) {
    for (; lVar8 != lVar6; lVar6 = lVar6 + -0x20) {
      plVar7 = *(long **)(lVar6 + -8);
      *(undefined8 *)(lVar6 + -8) = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    in_stack_000001c8 = lVar8;
    func_0x0412a280(in_stack_000001c0,in_stack_000001d0 - in_stack_000001c0);
  }
  puVar13 = in_stack_000000d0;
  puVar1 = in_stack_000000d8;
  if (in_stack_000000d0 != (undefined1 *)0x0) {
    for (; puVar13 != puVar1; puVar1 = puVar1 + -0x20) {
      plVar7 = *(long **)(puVar1 + -8);
      *(undefined8 *)(puVar1 + -8) = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    in_stack_000000d8 = puVar13;
    func_0x0412a280(in_stack_000000d0,in_stack_000000e0 - (long)in_stack_000000d0);
  }
  lVar8 = in_stack_000001e0;
  lVar6 = in_stack_000001e8;
  if (in_stack_000001e0 != 0) {
    for (; lVar8 != lVar6; lVar6 = lVar6 + -0x20) {
      plVar7 = *(long **)(lVar6 + -8);
      *(undefined8 *)(lVar6 + -8) = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    in_stack_000001e8 = lVar8;
    func_0x0412a280(in_stack_000001e0,in_stack_000001f0 - in_stack_000001e0);
  }
  if (0 < iStack00000000000000a0) {
    in_stack_000001f8 = 0;
  }
  auVar20._8_8_ = uVar14;
  auVar20._0_8_ = in_stack_000001f8;
  return auVar20;
}


