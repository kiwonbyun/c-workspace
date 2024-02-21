#include <stdio.h>

int a = 100;

void func(){
  int a = 200;
  printf("func()에서 a의 값 ==>%d\n", a);
}

int main(){
  printf("main()에서 a의 값 ==>%d\n", a);
  func();

  int i, sum = 0;
  for (i = 1; i <= 10; i++)
    sum = sum + i;

  printf("1부터 10까지의 합 = %d\n", sum);
}