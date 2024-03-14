#include <stdio.h>
#include <wchar.h>
#include <locale.h>

/* 매크로 함수 정의 */
#define ADD(x,y) x+y
#define MUL(x,y) x*y
#define STR "이 문장은 실습을 위한 예제프로그램이다."

int main(){
  char ch, ch2;
  wchar_t s1;
  int in, a, m;
  enum day
  { SUN = 2,MON,TUE,WED,THE,FRI,SAT } d1, d2;

setlocale(LC_ALL, ""); // 로컬 환경에 맞게 설정, wchar_t를 올바르게 출력하기 위해 필요

  ch = 'A';
  ch2 = 'a';
  s1 = L'가'; // wchar_t 타입의 리터럴에는 L 접두사를 사용
  wchar_t s2[] = L"가나다라";
  in = 100;
  d1 = SUN, d2 = FRI;
  printf("문자형 A의 정수값? %d\n", ch);
  printf("문자형 a의 정수값? %d\n", ch2);
  printf("문자형 '가'의 정수값? %d\n", s1);
  wprintf(L"'가나다라'의 정수값? %d\n", s2);
  printf("정수형 100의 문자값? %c\n", in);
  printf("열거형 과 d1에 d2저장된 값? d1=%d, d2=%d\n", d1, d2);
  printf("------------------------\n");
  /*매크로 사용*/
  printf("%s\n", STR);

  a = 100 * ADD(3 , 4);
  m = MUL(10 + 20, 30+ 40);
  printf("매크로 사용한 결과값 출력\n");
  printf("a=%d, m=%d\n", a, m);

  return 0;
}