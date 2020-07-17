#include <stdio.h>

int main(void){
  unsigned char a = 0x31;
  unsigned char b = 0xab;
  unsigned char c;
  c = a & b;
  printf("%x\n", c);
}
