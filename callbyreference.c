#include <stdio.h>
void swap(int *x, int *y);

int main(){
    int a = 3, b = 5;
    printf("호출 전 a=%d, b=%d\n", a, b);
    // 참조에 의한 전달: 매개변수에 메모리 주소를 전달한다
    swap(&a, &b);
    printf("호출 후 a=%d, b=%d\n", a, b);
    
}

void swap(int *x, int* y){
    // 메모리주소의 참조값을 전달하고 서로 바꾸면 메모리의 주소가 바뀐다.
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("함수 내 x 메모리주소=%d, y 메모리주소=%d\n", x, y);
    printf("함수 내 x 값=%d, y 값=%d\n", *x, *y);
}