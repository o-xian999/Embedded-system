#include <stdio.h>

int main(void){
  unsigned char a = 0x0a;
  unsigned char b = 0x21;
  unsigned char data1, data2;

  data1 = a << 2;
  data2 = b >> 2;

  printf("left : %u %02x\n", data1, data1&0xff);
  printf("right : %u %02x\n", data2, data2&0xff);

  return 0;
}
