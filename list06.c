#include <stdio.h>
#include <stdint.h>

int main(void){
  uint32_t data1 = 100;
  int32_t data2 = -100;
  uint8_t data3 = 100;
  int8_t data4 = -100;

  printf("%u %d\n", data1, data2);
  printf("%08x %08x\n", data1, data2);
  printf("%u %d\n", data3, data4);
  printf("%02x %02x\n", data3&0xff, data4&0xff);

  return 0;
}
