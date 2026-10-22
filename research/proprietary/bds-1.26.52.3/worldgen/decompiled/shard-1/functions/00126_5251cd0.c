/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5351cd0 (ELF vaddr 0x5251cd0)
 * Label: string:minecraft:overworld_height
 * Body:  [[05351cd0, 05351e5a]]
 * Ghidra: FUN_05351cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_05351cd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 unaff_RBP;
  ulong uVar6;
  uint uVar7;
  ulong uStack_58;
  uint uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_40;
  uint7 uStack_3f;
  undefined1 auStack_38 [24];
  
  cVar5 = *(char *)((long)param_2 + 0x24);
  puVar4 = (undefined8 *)*param_2;
  puVar3 = puVar4;
  if (cVar5 == '\x02') {
    puVar3 = param_2;
  }
  if (puVar3 == (undefined8 *)0x0 || *(int *)(param_2 + 4) != -0x127692e6) {
    uVar1 = param_2[5];
    lVar2 = param_2[6];
    if (lVar2 == 0) {
      (*(code *)param_2[7])(0,param_2,0);
      lVar2 = param_2[6];
      cVar5 = *(char *)((long)param_2 + 0x24);
      puVar4 = (undefined8 *)*param_2;
    }
    if (cVar5 == '\x02') {
      puVar4 = param_2;
    }
    puVar3 = (undefined8 *)func_0x0488e200(uVar1,lVar2,0xed896d1a,puVar4);
  }
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,0x23,8);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x23,8);
  }
  *puVar4 = 0x1a;
  uVar1 = CONCAT62(_DAT_01e367ba,_UNK_01e367b8);
  puVar4[1] = _DAT_01e367b0;
  puVar4[2] = uVar1;
  uVar1 = _UNK_01e367c2;
  *(ulong *)((long)puVar4 + 0x12) = CONCAT26(_UNK_01e367c0,_DAT_01e367ba);
  *(undefined8 *)((long)puVar4 + 0x1a) = uVar1;
  *(undefined1 *)((long)puVar4 + 0x22) = 0;
  uStack_58 = (ulong)(puVar4 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  uStack_50 = uStack_50 & 0xffffff00;
  uStack_40 = 0;
  lVar2 = (ulong)uStack_3f << 8;
  uVar7 = uStack_50;
  FUN_0eeb79f0(auStack_38,&uStack_58);
  if ((uStack_58 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_58 & 0xff00ffffffffffff) - 8);
  }
  uVar6 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if ((*(char *)(puVar3 + 3) == '\x01') && (*(char *)((long)puVar3 + 0xc) == '\x01')) {
    func_0x05351e90(1,3,5,&UNK_01448099,param_5,param_6,uVar7,uStack_48,lVar2);
    uVar6 = 0;
  }
  func_0x0eeb81b0(auStack_38);
  return uVar6 & 0xffffffff;
}



/* ---- referenced strings ----
 * 0x1e367b0  minecraft:overworld_height
 * 0x1e367ba  overworld_height
 */
