#include <stdio.h>

int main(){
  int x, y;
  x = 5;
  y = 3;
  printf("x+y = %d\n", x + y);
  printf("x/y = %d\n", x / y);
  printf("x%%y = %d\n", x % y);
  printf("y%%x = %d\n", y % x);
  // ++가 x 앞에 있으므로 (6)이 된다. 6*6 = 36
  // int z = (++x * x)--; 이렇게 생각할 수 있다. 
  // 그리고 모든 식이 종료되고 마지막에 x에서 1을 감소한다.
  int z = ++x * x--;
  // 여기에서 x는 1이 감소되어 다시 5가 된다. 정답은 50.
  int s = x * 10;
  printf("%d, %d\n", z, s);

  int a = 4, b = 7, c, d, e;
  c = a > 2 && b <= 7;
  d = a<2 || b <= 7;
  e = !a;
  printf("c=%d, d=%d, e=%d",c,d,e);
}