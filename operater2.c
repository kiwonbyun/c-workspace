#include <stdio.h>

int main(){
  // int a = 10, b;
  // b = (a < 4) ? a + 1 : a - 1;
  // printf("b=%d", b);

  // 기타연산자 &: 주소연산자 피연산자의 주소  / *: 내용연산자 피연산자의 내용을 가져옴
  // sizeof() / cast(형변환)
  float a = 3.14;
  printf("int형의 크기는 %lu\n", sizeof(int));
  printf("a 변수의 크기는 %lu\n", sizeof(a));
  // printf("b=%d\n", b);

  int b = 3, c = 4;
  double d;
  d = (double)b / c;
  printf("나눗셈 결과: %f", d);
}