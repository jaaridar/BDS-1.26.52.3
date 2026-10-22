/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x478e120
 * Label: callee-of:0xda370f0
 * Body:  [[0478e120, 0478e1ff] [0478e201, 0478e2d7] [0478f620, 0478f6d6] [0478f6e0, 0478f718]]
 * Ghidra: FUN_0478e120
 */


/* WARNING: Possible PIC construction at 0x0478e139: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0478e16a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0478e19b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0478e1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0478e1fd: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0478e22e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0478e25f: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0478e28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0478e2b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0478e291) */
/* WARNING: Removing unreachable block (ram,0x0478e264) */
/* WARNING: Removing unreachable block (ram,0x0478e233) */
/* WARNING: Removing unreachable block (ram,0x0478e202) */
/* WARNING: Removing unreachable block (ram,0x0478e1d1) */
/* WARNING: Removing unreachable block (ram,0x0478e1a0) */
/* WARNING: Removing unreachable block (ram,0x0478e16f) */
/* WARNING: Removing unreachable block (ram,0x0478e13e) */
/* WARNING: Removing unreachable block (ram,0x0478e2bd) */
/* WARNING: Removing unreachable block (ram,0x0478e2c1) */

undefined8 FUN_0478e120(void)

{
  undefined4 in_EAX;
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_RBX;
  long *plVar5;
  undefined8 uVar6;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 unaff_R14;
  
  lVar2 = func_0x047db690(in_EAX);
  plVar5 = unaff_RBX;
  if (lVar2 == 0) {
    uVar6 = func_0x047fad20(0x3d7);
    lVar2 = func_0x047db690(uVar6);
    if (lVar2 == 0) {
      uVar6 = func_0x047fad20(0x329);
      lVar2 = func_0x047db690(uVar6);
      if (lVar2 == 0) {
        uVar6 = func_0x047fad20(0x32d);
        lVar2 = func_0x047db660(uVar6);
        if (lVar2 == 0) {
          uVar6 = func_0x047fad20(0x1a7);
          lVar2 = func_0x047db660(uVar6);
          if (lVar2 == 0) {
            uVar6 = func_0x047fad20(0x1a3);
            lVar2 = func_0x047db660(uVar6);
            if (lVar2 == 0) {
              uVar6 = func_0x047fad20(0x2c);
              lVar2 = func_0x047db660(uVar6);
              if (lVar2 == 0) {
                uVar6 = func_0x047fad20(0x25);
                lVar2 = func_0x047db660(uVar6);
                if (lVar2 == 0) {
                  iVar1 = func_0x0478f6e0();
                  if (iVar1 == 0) {
                    return 0;
                  }
                  uVar6 = func_0x047fad20(0x1f);
                  lVar2 = func_0x047db660(uVar6);
                  if (lVar2 == 0) {
                    return 1;
                  }
                  uVar6 = 0x1f;
                  iVar1 = -1;
                }
                else {
                  uVar6 = 0x25;
                  iVar1 = 0x80;
                }
              }
              else {
                uVar6 = 0x2c;
                iVar1 = -1;
              }
            }
            else {
              uVar6 = 0x1a3;
              iVar1 = -1;
            }
          }
          else {
            uVar6 = 0x1a7;
            iVar1 = -1;
          }
        }
        else {
          uVar6 = 0x32d;
          iVar1 = -1;
        }
      }
      else {
        uVar6 = 0x329;
        iVar1 = -1;
      }
    }
    else {
      uVar6 = 0x3d7;
      iVar1 = -1;
    }
  }
  else {
    uVar6 = 0x3d6;
    iVar1 = -1;
  }
  if (iVar1 < 1) {
    lVar3 = 0;
    lVar4 = func_0x047672e0();
  }
  else {
    lVar3 = func_0x04766a40();
    if ((lVar3 == 0) || (iVar1 = func_0x0475c280(lVar3,iVar1), iVar1 == 0)) goto LAB_0478f6c2;
    lVar4 = func_0x047672e0();
  }
  if (lVar4 == 0) {
LAB_0478f6c2:
    func_0x04766a50(lVar3);
    return 0;
  }
  uVar6 = func_0x047fac30(uVar6);
  func_0x04767330(lVar4,uVar6,-(uint)(lVar3 == 0) | 2,lVar3,in_R8,in_R9,lVar2,plVar5,unaff_R14);
  lVar2 = *unaff_RBX;
  if (lVar2 == 0) {
    lVar2 = func_0x04831240();
    *unaff_RBX = lVar2;
    if (lVar2 == 0) goto LAB_0478f6ab;
  }
  iVar1 = func_0x048318c0(lVar2,lVar4);
  if (iVar1 != 0) {
    return 1;
  }
LAB_0478f6ab:
  func_0x047672f0(lVar4);
  return 0;
}


