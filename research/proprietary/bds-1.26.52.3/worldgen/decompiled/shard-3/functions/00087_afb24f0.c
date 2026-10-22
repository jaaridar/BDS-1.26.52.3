/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb0b24f0 (ELF vaddr 0xafb24f0)
 * Label: string:is_temperature_value
 * Body:  [[0b0b24f0, 0b0b2694]]
 * Ghidra: FUN_0b0b24f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b0b24f0(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  uVar3 = func_0x0b0ae450();
  cVar2 = func_0x04864260(uVar3);
  if (cVar2 == '\0') {
    func_0x04863060(auStack_20,7);
    func_0x04863060(auStack_30,7);
    func_0x04863120(auStack_40,&UNK_0134e21c);
    uVar1 = func_0x04864680(auStack_30,&UNK_01359816);
    func_0x04863790(uVar1,auStack_40);
    func_0x04863610(auStack_40);
    func_0x04863120(auStack_40,&UNK_0125500a);
    uVar1 = func_0x04864680(auStack_30,&UNK_0144437b);
    func_0x04863790(uVar1,auStack_40);
    func_0x04863610(auStack_40);
    func_0x04863110(_DAT_014f0478,auStack_40);
    uVar1 = func_0x04864680(auStack_30,&UNK_0138e8dd);
    func_0x04863790(uVar1,auStack_40);
    func_0x04863610(auStack_40);
    uVar1 = func_0x04864680(auStack_20,&UNK_01340d28);
    func_0x04863740(uVar1,auStack_30);
    func_0x04863120(auStack_40,&UNK_0141a29e);
    uVar1 = func_0x04864680(auStack_20,&UNK_0125b2fb);
    func_0x04863790(uVar1,auStack_40);
    func_0x04863610(auStack_40);
    func_0x048630e0(auStack_40,1);
    uVar1 = func_0x04864680(auStack_20,&UNK_01226e65);
    func_0x04863790(uVar1,auStack_40);
    func_0x04863610(auStack_40);
    func_0x04864a50(uVar3,auStack_20);
    func_0x04863610(auStack_30);
    func_0x04863610(auStack_20);
  }
  return;
}


