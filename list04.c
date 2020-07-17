#include <stdio.h>

int main(void){
  unsigned char a = 0x0a;
  unsigned char b = 0x3f;
  unsigned char data1, data2, data3, data4;

  data1 = a & b;
  data2 = a | b;
  data3 = a ^ b;
  data4 = ~a;

  printf("AND : %02x\n", data1&0xff);
  printf("OR : %02x\n", data2&0xff);
  printf("XOR : %02x\n", data3&0xff);
  printf("NOT : %02x\n", data4&0xff);

  return 0;
}
