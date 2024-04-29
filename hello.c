#include <stdio.h>

int main(void)
{
  char ch;
  int in;
  ch = in = 'A';
  printf("ch = %d\n", ch);
  printf("in = %d\n", in);
  ch = in = 100;
  printf("\nch = %c\n", ch);
  printf("in = %c\n", ch);

  enum day1
  {
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
  } d1;
  enum day2
  {
    sun = 2,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
  } d2;

  d1 = WED;
  d2 = wed;
  printf("열거형 d1에 저장된 값은 %d 입니다. \n", d1);
  printf("열거형 d2에 저장된 값은 %d 입니다. \n", d2);

  short int num1, num2;
  num1 = 32767 + 1;
  num2 = -32768 - 1;
  printf("num1 = %d\n", num1);
  printf("num2 = %d\n", num2);

  int num3, num4;
  num3 = 32767 + 1;
  num4 = -32768 - 1;
  printf("num3 = %d\n", num3);
  printf("num4 = %d\n", num4);
}
