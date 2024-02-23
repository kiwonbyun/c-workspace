#include <stdio.h>

int main(){
  int a, b, c;
  a = 10, b = 20, c = 30;
  // 곱이 먼저니까 610 =>610
  printf("%d\n",a+b*c);
  // 곱이먼저니까 80 =>80
  // a=80 b=80 c=30
  printf("%d\n",a= b+=2*c);
  // 80
  printf("%d\n",a=(b>c)?b:c);
  // 30
  printf("%d\n",a/b*c);
  // 2800
  printf("%d\n",a*=b=c+5);
}