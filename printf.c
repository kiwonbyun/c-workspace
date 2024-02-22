#include <stdio.h>

int main(){
  char c = 'A';
  int i = 10, j = 20, k = 30;
  printf("간단한 출력 프로그램\n");
  printf("c=%c, c의 아스키코드 값은 %d\n", c, c);
  printf("i=%d, j=%d, k=%d\n", i, j, k);

  printf("%c\n",'a'); // 한 문자
  printf("%d\n",-123); // 부호 있는 10진 정수
  printf("%o\n", 123); // 부호 없는 8진수 
  printf("%x\n", 123); // 부호 없는 16진수
  printf("%X\n",123); // 부호 없는 16진수
  printf("%f\n",123.456789); // 부동소수점
  printf("%e\n",123.456789); // 지수형태
  printf("%s\n","sdjkhjwhj"); // 문자열
}
