/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc63f5e0 (ELF vaddr 0xc53f5e0)
 * Label: caller-of-seed
 * Body:  [[0c63f5e0, 0c63f6c2]]
 * Ghidra: FUN_0c63f5e0
 */


void FUN_0c63f5e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                 undefined8 param_5)

{
  char cVar1;
  ushort uVar2;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f39d360;
  uVar2 = *(ushort *)((long)param_1 + 0x133);
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = uVar2 & 0xe9ff;
  cVar1 = *param_4;
  *(char *)((long)param_1 + 0x132) = (cVar1 != '\x05') * '\x02' + '\x03';
  param_1[0x21] = 0;
  uVar2 = (uVar2 & 0xe9f5) + (ushort)(cVar1 != '\x05') * 2 + 8;
  *(ushort *)((long)param_1 + 0x133) = uVar2;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(ushort *)((long)param_1 + 0x133) = uVar2 & 0xc9ff | (ushort)(*param_4 == '\x05') << 0xd;
  func_0x0c63d280(param_1,&UNK_0c63d400,0,0);
  *param_1 = &UNK_0f39d798;
  param_1[0x75] = param_5;
  func_0x0c63f6e0(param_1,&UNK_0c63f860,0,1);
  func_0x0c63f9f0(param_1,&UNK_0c63fb70,0,0);
  return;
}


