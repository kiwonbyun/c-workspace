#include <stdio.h>
int i = 10;
int j = 20;
// test();
// 1. 자동변수
// 자동변수는 변수가 선언된 블록이나 함수 내
// 지역변수에 해당한다.
// 초기화가 필요하다.
// void main(){
//     int i = 1;
//     auto int j = 2;
//     {
//         int i = 3;
//         {
//             int i = 4;
//             printf("두번째 블록의 i=%d\n", i);
//             printf("두번째 블록의 j=%d\n", j);
//         }
//         printf("첫번재 블록의 i=%d\n", i);
//     }
//     printf("main의 i=%d\n", i);
// }

// 2. 정적변수
// 기억영역이 프로그램 끝날때까지 유지
// 전역변수에 해당
// 변수값은 프로그램 실행중 계속 유지
// 초기화가 없으면 0으로 초기화됨.
// int main(){
//     auto int a = 10;
//     static int b = 20;
//     {
//         int a = 5;
//         printf("a=%d, b=%d \n", a, b);
//     }
//     printf("a=%d, b=%d \n", a, b);
// }

// int main(){
//     int i;
//     i = 0;
//     while(i<3){
//         test();
//         i++;
//     }
// }

// test(){
//     // 자동변수는 함수가 호출될때마다 매번 초기화되어 계속 0으로 출력됨
//     auto int a = 0;
//     // 정적변수는 함수가 종료되어도 값을 유지. 초기화는 한번만 된다.
//     static int s = 0;
//     printf("auto=%d, static=%d\n", a, s);
//     ++a;
//     ++s;
// }

// 외부변수
// 함수의 외부에서 선언
// 전역변수에 해당, 초기화가 없으면 0으로 초기화됨.
// * 다른 파일에서 외부변수로 선언된 변수값을 참조할 수 있다.
// int main(){
//     extern int i;
//     extern int k;
//     int j = 100;
//     printf("i=%d, j=%d, k=%d", i, j, k);
// }
// int k = 50;

// 레지스터 변수
// cpu내의 레지스터에 자료를 저장하고자 할때 사용한다.
// 자동변수와 동일한 속성을 지닌다.
// 프로그램의 실행속도 증가를 목적으로 사용한다.(주로 반복문에서 카운터 변수로 사용)

int main(){
    register int i = 0;
    int sum = 0;
    for (i = 0; i <= 10; i++){
        sum = sum + i;
    }
    i = i - 1;
    printf("i = %d sum=%d", i, sum);
}
