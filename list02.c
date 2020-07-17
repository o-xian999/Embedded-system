#include <stdio.h>

int main(void){
  int data1;
  char data2;

  printf("整数を入力してください : ");
  scanf("%d", &data1);

  data2 = data1;

  printf("int : %d = %08x\n", data1, data1);
  printf("char : %d = %02x\n", data2, data2&0xff);

  return 0;
}
