#include <stdio.h>
#define ADDR "서울시 종로구 대학로 86"
#define TEL "01099999999"
#define Sum1(x,y) (x+y)
#define Sum2(x,y) ((x)+(y)) 
#define Mutiple1(x,y) (x*y)
#define Mutiple2(x,y) ((x)*(y))

int main(){
  printf("한국방송통신대학교 주소: %s\n", ADDR);
  printf("전화번호: %s\n", TEL);

  int h1, h2, m1, m2;
  h1 = Sum1(3, 4);
  h2 = Sum2(3, 4);
  m1 = Mutiple1(1 + 2, 3 + 4);
  m2 = Mutiple2(1 + 2, 3 + 4);

  printf("h1=%d, h2=%d\n", h1, h2);
  printf("m1=%d, m2=%d\n", m1, m2);
}