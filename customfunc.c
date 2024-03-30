#include <stdio.h>
int sum(int a, int b);

void test();

int main(){
    int s;
    test();
    sum(10, 20);
    s = sum(30, 40);
    printf("sum from 30 to 40=%d\n", s);
    printf("sum from 100 to 120 = %d\n", sum(100, 120));
}

void test(){
    printf("함수의 여러가지 사용법\n");
}

int sum(int a, int b){
    int i,s=0;
    for (i = a; i <= b; i++){
        s = s + i;
    }
    return s;
}