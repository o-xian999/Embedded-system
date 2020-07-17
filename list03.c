#include <stdio.h>

int main(void){
  unsigned int data1 = 4294967295;
  unsigned short int data2 = 65535;
  unsigned char data3 = 255;

  printf("int : %u %08x\n", data1, data1);
  printf("short : %u %04x\n", data2, data2&0xffff);
  printf("char : %u %02x\n", data3, data3&0xff);

  return 0;
}
