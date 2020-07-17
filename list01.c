#include  <stdio.h>

int main(void){
  int data1 = 100;
  int data2 = -100;
  char data3 = 100;
  char data4 = -100;

  printf("int : %d %d\n", data1, data2);
  printf("int : %08x %08x\n", data1, data2);
  printf("char : %d %d\n", data3, data4);
  printf("char : %02x %02x\n", data3&0xff, data4&0xff);

  return 0;
}
