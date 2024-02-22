#include <stdio.h>

int main(){
  char s[50];
  char w[50];
  printf("문자열 입력?");
  gets(s);
  printf("gets 로 문자열 입력 = %s\n", s);
  printf("문자열 입력?");
  scanf("%s %s", s, w);
  printf("scanf 로 문자열 입력 = %s %s\n", s,w);

  char a[] = "Computer";
  char b[] = "Science";
  puts(a);
  puts(b);
  printf("%s", a);
  printf("%s", b);
}